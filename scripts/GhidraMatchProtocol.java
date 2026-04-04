// Ghidra headless script: Extract match protocol internals from Vainglory binary.
//
// Targets:
//   1. Game server connection setup (gameHost/proxyHost xrefs)
//   2. XOR encryption/decryption routines and key derivation
//   3. Handshake construction and parsing
//   4. Message dispatch (switch/case after decryption)
//   5. Game state message structures
//
// Usage: analyzeHeadless ~/ghidra_projects VaingloryRE \
//          -process GameKindred -postScript GhidraMatchProtocol.java
//
// @category Analysis

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.pcode.*;
import ghidra.program.model.scalar.Scalar;

import java.io.*;
import java.util.*;

public class GhidraMatchProtocol extends GhidraScript {

    private DecompInterface decomp;
    private FunctionManager fm;
    private ReferenceManager refMgr;
    private AddressFactory af;
    private Memory mem;
    private Listing listing;
    private String outputDir;

    // ── Key strings to search for ──
    static final String[] CONNECTION_STRINGS = {
        "gameHost", "proxyHost", "Game_Match_Start", "Game_Match_Reconnect",
        "Game_Match_Finish", "Game_Match_Declined", "MENU_CONNECTING_TO_GAME",
        "Quality_MatchEnd_Ping_Report"
    };

    static final String[] CRYPTO_STRINGS = {
        // XOR-related patterns
        "encrypt", "decrypt", "cipher", "xor", "scramble",
        // Network send/recv related
        "sendPacket", "recvPacket", "sendData", "recvData",
        "writePacket", "readPacket"
    };

    static final String[] GAME_STATE_STRINGS = {
        // Known JSON format strings for game events
        "\"Team\"", "\"Actor\"", "\"Ability\"", "\"Position\"",
        "\"Killed\"", "\"Gold\"", "\"IsHero\"", "\"Level\"",
        "\"LifetimeGold\"", "\"Talent\"",
        // Game state identifiers
        "FRAME_NUMBER_TYPE_FRAME_NUMBER", "getNextSequenceNumber"
    };

    // ── Known function addresses from previous analysis ──
    // RPC dispatch (for exclusion)
    static final long RPC_DISPATCH = 0x1004f22f0L;

    @Override
    public void run() throws Exception {
        outputDir = System.getenv("VGF_REPORT_DIR");
        if (outputDir == null) outputDir = "/tmp/vgf_ghidra_reports";
        new File(outputDir).mkdirs();

        fm = currentProgram.getFunctionManager();
        refMgr = currentProgram.getReferenceManager();
        af = currentProgram.getAddressFactory();
        mem = currentProgram.getMemory();
        listing = currentProgram.getListing();

        decomp = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        decomp.setOptions(opts);
        decomp.openProgram(currentProgram);

        StringBuilder report = new StringBuilder();
        report.append("# Match Protocol Analysis — Ghidra Extract\n\n");
        report.append("Binary: GameKindred (Vainglory 4.13.4, arm64)\n\n");

        // ══════════════════════════════════════════════════════════════
        // Phase 1: Find game server connection code
        // ══════════════════════════════════════════════════════════════
        println("\n[match-proto] === Phase 1: Game Server Connection Code ===");
        report.append("## Phase 1: Game Server Connection Code\n\n");

        Map<String, List<FunctionRef>> connectionRefs = new LinkedHashMap<>();
        for (String s : CONNECTION_STRINGS) {
            List<FunctionRef> refs = findStringXrefs(s);
            connectionRefs.put(s, refs);
            println("[match-proto]   \"" + s + "\" -> " + refs.size() + " function refs");
            report.append("### String: `" + s + "` (" + refs.size() + " refs)\n\n");
            for (FunctionRef ref : refs) {
                report.append("- `" + ref.funcName + "` @ `0x" +
                    Long.toHexString(ref.funcAddr) + "` (ref from `0x" +
                    Long.toHexString(ref.refAddr) + "`)\n");
            }
            report.append("\n");
        }

        // Decompile all connection-related functions
        Set<Long> connectionFuncs = new LinkedHashSet<>();
        for (List<FunctionRef> refs : connectionRefs.values()) {
            for (FunctionRef ref : refs) {
                connectionFuncs.add(ref.funcAddr);
            }
        }

        report.append("### Decompiled Connection Functions\n\n");
        for (long addr : connectionFuncs) {
            Function func = fm.getFunctionAt(af.getAddress("0x" + Long.toHexString(addr)));
            if (func == null) continue;
            String code = decompFunc(func);
            if (code == null) continue;

            report.append("#### `" + func.getName() + "` @ `0x" + Long.toHexString(addr) + "`\n\n");

            // Check for socket/connect/send/recv calls
            boolean hasSend = code.contains("send(") || code.contains("_send(") || code.contains("write(");
            boolean hasRecv = code.contains("recv(") || code.contains("_recv(") || code.contains("read(");
            boolean hasConnect = code.contains("connect(") || code.contains("_connect(");
            boolean hasSocket = code.contains("socket(") || code.contains("_socket(");
            boolean hasXor = code.contains(" ^ ") || code.contains("^=");

            report.append("Indicators: ");
            if (hasSend) report.append("SEND ");
            if (hasRecv) report.append("RECV ");
            if (hasConnect) report.append("CONNECT ");
            if (hasSocket) report.append("SOCKET ");
            if (hasXor) report.append("XOR ");
            report.append("\n\n");

            // Truncate long decompilations
            String truncCode = code.length() > 8000 ? code.substring(0, 8000) + "\n// ...truncated..." : code;
            report.append("<details><summary>Decompiled code (" + code.length() + " chars)</summary>\n\n```c\n");
            report.append(truncCode);
            report.append("\n```\n\n</details>\n\n");

            // Also search for callers of this function (to find higher-level match code)
            List<FunctionRef> callers = findCallersOf(addr);
            if (!callers.isEmpty()) {
                report.append("Called by: ");
                for (FunctionRef caller : callers) {
                    report.append("`" + caller.funcName + "` ");
                }
                report.append("\n\n");
            }
        }

        // ══════════════════════════════════════════════════════════════
        // Phase 2: Find XOR / encryption routines
        // ══════════════════════════════════════════════════════════════
        println("\n[match-proto] === Phase 2: XOR / Encryption Routines ===");
        report.append("## Phase 2: XOR / Encryption Analysis\n\n");

        // Strategy A: Find functions that import send()/recv() and look at their callers
        report.append("### send()/recv() Import Analysis\n\n");
        String[] syscalls = {"_send", "_recv", "_connect", "_socket", "_write", "_read"};
        for (String syscall : syscalls) {
            List<Symbol> syms = findExternalSymbol(syscall);
            for (Symbol sym : syms) {
                List<FunctionRef> callers = findCallersOf(sym.getAddress().getOffset());
                report.append("**`" + syscall + "`** @ `0x" + Long.toHexString(sym.getAddress().getOffset()) + "` — " + callers.size() + " callers\n");
                for (FunctionRef caller : callers) {
                    report.append("  - `" + caller.funcName + "` @ `0x" + Long.toHexString(caller.funcAddr) + "`\n");
                }
                report.append("\n");
            }
        }

        // Strategy B: Search for EOR (XOR) instructions in ARM64 code near send/recv callers
        // Look for functions that:
        //   1. Have a loop (backward branch)
        //   2. Contain EOR instructions
        //   3. Are near the connection functions
        report.append("### Functions with XOR patterns near connection code\n\n");

        Set<Long> xorFunctions = new LinkedHashSet<>();
        // Search a wide range around known connection functions
        for (long connAddr : connectionFuncs) {
            long searchStart = Math.max(connAddr - 0x20000, 0x100000000L);
            long searchEnd = Math.min(connAddr + 0x20000, 0x101800000L);

            Address start = af.getAddress("0x" + Long.toHexString(searchStart));
            FunctionIterator funcIter = fm.getFunctions(start, true);

            while (funcIter.hasNext() && !monitor.isCancelled()) {
                Function func = funcIter.next();
                long ep = func.getEntryPoint().getOffset();
                if (ep > searchEnd) break;

                String code = decompFunc(func);
                if (code == null) continue;

                // Look for XOR operations on byte arrays / buffers
                boolean hasXor = code.contains(" ^ ") || code.contains("^=");
                boolean hasLoop = code.contains("while") || code.contains("for (");
                boolean hasBuf = code.contains("buf") || code.contains("data") ||
                                 code.contains("packet") || code.contains("param_");
                boolean has8byte = code.contains("0x8") || code.contains("& 7") ||
                                   code.contains("% 8");

                if (hasXor && (hasLoop || has8byte)) {
                    xorFunctions.add(ep);
                    report.append("#### `" + func.getName() + "` @ `0x" + Long.toHexString(ep) + "`\n\n");
                    report.append("XOR + " + (hasLoop ? "LOOP " : "") + (has8byte ? "8BYTE " : "") + "\n\n");

                    String truncCode = code.length() > 6000 ? code.substring(0, 6000) + "\n// ...truncated..." : code;
                    report.append("<details><summary>Decompiled</summary>\n\n```c\n" + truncCode + "\n```\n\n</details>\n\n");
                }
            }
        }

        // Strategy C: Search broadly for functions with XOR + 8-byte key patterns
        // This is slower but catches crypto that may not be near connection code
        println("[match-proto]   Broad XOR scan...");
        report.append("### Broad XOR + 8-byte key scan\n\n");

        // Scan all functions for XOR with 8-byte modular access
        FunctionIterator allFuncs = fm.getFunctions(true);
        int scanned = 0;
        int foundXor = 0;
        while (allFuncs.hasNext() && !monitor.isCancelled()) {
            Function func = allFuncs.next();
            scanned++;

            // Quick filter: check instruction mnemonics for EOR
            boolean hasEor = false;
            InstructionIterator instIter = listing.getInstructions(func.getBody(), true);
            int instCount = 0;
            while (instIter.hasNext() && instCount < 200) {
                Instruction inst = instIter.next();
                instCount++;
                String mnem = inst.getMnemonicString();
                if (mnem.equals("eor") || mnem.equals("EOR")) {
                    hasEor = true;
                    break;
                }
            }

            if (!hasEor) continue;

            String code = decompFunc(func);
            if (code == null) continue;

            // Strong signal: XOR in a loop with modular 8 access
            boolean has8mod = code.contains("% 8") || code.contains("& 7") ||
                              code.contains("& 0x7");
            boolean hasXor = code.contains(" ^ ");

            if (hasXor && has8mod && !xorFunctions.contains(func.getEntryPoint().getOffset())) {
                foundXor++;
                long ep = func.getEntryPoint().getOffset();
                xorFunctions.add(ep);
                report.append("#### `" + func.getName() + "` @ `0x" + Long.toHexString(ep) + "` (broad scan)\n\n");

                String truncCode = code.length() > 6000 ? code.substring(0, 6000) + "\n// ...truncated..." : code;
                report.append("<details><summary>Decompiled</summary>\n\n```c\n" + truncCode + "\n```\n\n</details>\n\n");

                // Find callers
                List<FunctionRef> callers = findCallersOf(ep);
                if (!callers.isEmpty()) {
                    report.append("Called by: ");
                    for (FunctionRef c : callers) {
                        report.append("`" + c.funcName + "` @ `0x" + Long.toHexString(c.funcAddr) + "` ");
                    }
                    report.append("\n\n");
                }

                if (foundXor >= 20) break; // Limit to avoid too much output
            }
        }
        println("[match-proto]   Scanned " + scanned + " functions, found " + foundXor + " XOR+8byte candidates");

        // ══════════════════════════════════════════════════════════════
        // Phase 3: Handshake construction
        // ══════════════════════════════════════════════════════════════
        println("\n[match-proto] === Phase 3: Handshake Analysis ===");
        report.append("## Phase 3: Handshake Analysis\n\n");

        // The handshake sends the client IP (128 bytes) + port (2 bytes)
        // Look for memset(buf, 0, 128) or similar zero-fill + IP copy patterns
        // Also look for references to port 7079 or variable port from RPC response
        String[] handshakeStrings = {
            "192.168", // unlikely in binary, but...
            "Quality_MatchEnd_Ping_Report",
            "Quality_Client_Switched_LongPoll",
            "Game_Match_Start"
        };

        // Look for functions that write 0x86 (134) as a length — the handshake size
        // and functions that write 0x05 as version byte
        // These are very specific signatures from our packet analysis

        // More productive: find functions that call connect() AND send() in sequence
        report.append("### Functions calling both connect() and send()\n\n");
        Set<Long> connectAndSendFuncs = new LinkedHashSet<>();
        allFuncs = fm.getFunctions(true);
        while (allFuncs.hasNext() && !monitor.isCancelled()) {
            Function func = allFuncs.next();
            String code = decompFunc(func);
            if (code == null) continue;

            boolean hasConnect = code.contains("connect(") || code.contains("_connect(");
            boolean hasSend = code.contains("send(") || code.contains("_send(") || code.contains("write(");

            if (hasConnect && hasSend) {
                long ep = func.getEntryPoint().getOffset();
                connectAndSendFuncs.add(ep);
                report.append("#### `" + func.getName() + "` @ `0x" + Long.toHexString(ep) + "`\n\n");

                // Look for the handshake signature: 0x86, 0x05, memset
                boolean has0x86 = code.contains("0x86") || code.contains("134");
                boolean has0x05 = code.contains("0x5,") || code.contains("= 5;");
                boolean hasMemset = code.contains("memset") || code.contains("memcpy");
                report.append("Handshake indicators: " +
                    (has0x86 ? "LEN_0x86 " : "") +
                    (has0x05 ? "VER_5 " : "") +
                    (hasMemset ? "MEMSET " : "") + "\n\n");

                String truncCode = code.length() > 6000 ? code.substring(0, 6000) + "\n// ...truncated..." : code;
                report.append("<details><summary>Decompiled</summary>\n\n```c\n" + truncCode + "\n```\n\n</details>\n\n");
            }
        }

        // ══════════════════════════════════════════════════════════════
        // Phase 4: Message dispatch
        // ══════════════════════════════════════════════════════════════
        println("\n[match-proto] === Phase 4: Message Dispatch ===");
        report.append("## Phase 4: Message Type Dispatch\n\n");

        // Strategy: find functions with large switch/case statements that are called
        // from recv handlers. These dispatch based on message type byte.
        // Look for functions with many cases (>5) that are near the connection code.

        report.append("### Large switch tables near connection code\n\n");

        for (long connAddr : connectionFuncs) {
            long searchStart = Math.max(connAddr - 0x10000, 0x100000000L);
            long searchEnd = Math.min(connAddr + 0x10000, 0x101800000L);

            Address start = af.getAddress("0x" + Long.toHexString(searchStart));
            FunctionIterator funcIter = fm.getFunctions(start, true);

            while (funcIter.hasNext() && !monitor.isCancelled()) {
                Function func = funcIter.next();
                long ep = func.getEntryPoint().getOffset();
                if (ep > searchEnd) break;

                String code = decompFunc(func);
                if (code == null) continue;

                // Count switch cases
                int switchCount = countOccurrences(code, "case ");
                if (switchCount >= 5) {
                    report.append("#### `" + func.getName() + "` @ `0x" + Long.toHexString(ep) + "` (" + switchCount + " cases)\n\n");

                    // Extract case values
                    List<String> cases = extractCaseValues(code);
                    report.append("Cases: " + String.join(", ", cases) + "\n\n");

                    String truncCode = code.length() > 10000 ? code.substring(0, 10000) + "\n// ...truncated..." : code;
                    report.append("<details><summary>Decompiled</summary>\n\n```c\n" + truncCode + "\n```\n\n</details>\n\n");
                }
            }
        }

        // Also look for switch tables globally with game-relevant semantics
        report.append("### Global switch tables with game message semantics\n\n");
        allFuncs = fm.getFunctions(true);
        int switchFuncsFound = 0;
        while (allFuncs.hasNext() && !monitor.isCancelled()) {
            Function func = allFuncs.next();
            long ep = func.getEntryPoint().getOffset();

            // Skip known RPC region
            if (ep >= 0x1004e0000L && ep <= 0x100540000L) continue;

            String code = decompFunc(func);
            if (code == null) continue;

            int switchCount = countOccurrences(code, "case ");
            if (switchCount < 10) continue;

            // Must reference game-relevant patterns
            boolean hasPacket = code.contains("packet") || code.contains("msg") ||
                                code.contains("command") || code.contains("opcode");
            boolean hasRecv = code.contains("recv") || code.contains("read") ||
                              code.contains("incoming") || code.contains("handle");
            boolean hasNet = code.contains("net") || code.contains("socket") ||
                             code.contains("connection") || code.contains("session");

            if (switchCount >= 15 || (switchCount >= 8 && (hasPacket || hasRecv || hasNet))) {
                switchFuncsFound++;
                report.append("#### `" + func.getName() + "` @ `0x" + Long.toHexString(ep) + "` (" + switchCount + " cases)\n\n");

                List<String> cases = extractCaseValues(code);
                if (cases.size() > 30) {
                    report.append("Cases (first 30): " + String.join(", ", cases.subList(0, 30)) + "...\n\n");
                } else {
                    report.append("Cases: " + String.join(", ", cases) + "\n\n");
                }

                // Show indicators
                if (hasPacket) report.append("Has PACKET/MSG refs. ");
                if (hasRecv) report.append("Has RECV/HANDLE refs. ");
                if (hasNet) report.append("Has NET/SOCKET refs. ");
                report.append("\n\n");

                String truncCode = code.length() > 10000 ? code.substring(0, 10000) + "\n// ...truncated..." : code;
                report.append("<details><summary>Decompiled</summary>\n\n```c\n" + truncCode + "\n```\n\n</details>\n\n");

                if (switchFuncsFound >= 15) break;
            }
        }

        // ══════════════════════════════════════════════════════════════
        // Phase 5: Game state format strings
        // ══════════════════════════════════════════════════════════════
        println("\n[match-proto] === Phase 5: Game State Serialization ===");
        report.append("## Phase 5: Game State Serialization\n\n");

        // Find functions that reference the JSON format strings for game events
        for (String s : GAME_STATE_STRINGS) {
            List<FunctionRef> refs = findStringXrefs(s);
            if (refs.isEmpty()) continue;

            report.append("### String: `" + s + "`\n\n");
            for (FunctionRef ref : refs) {
                report.append("- `" + ref.funcName + "` @ `0x" + Long.toHexString(ref.funcAddr) + "`\n");

                // Decompile if not too many
                if (refs.size() <= 5) {
                    Function func = fm.getFunctionAt(af.getAddress("0x" + Long.toHexString(ref.funcAddr)));
                    if (func != null) {
                        String code = decompFunc(func);
                        if (code != null) {
                            String truncCode = code.length() > 5000 ? code.substring(0, 5000) + "\n// ...truncated..." : code;
                            report.append("\n<details><summary>Decompiled</summary>\n\n```c\n" + truncCode + "\n```\n\n</details>\n\n");
                        }
                    }
                }
            }
            report.append("\n");
        }

        // ══════════════════════════════════════════════════════════════
        // Phase 6: Additional keyword search for networking code
        // ══════════════════════════════════════════════════════════════
        println("\n[match-proto] === Phase 6: Additional Network Keyword Scan ===");
        report.append("## Phase 6: Network Keywords\n\n");

        String[] netStrings = {
            "pingHostPortInfo", "host", "port",
            "getNextSequenceNumber", "FRAME_NUMBER_TYPE_FRAME_NUMBER",
            "Quality_MatchEnd_Ping_Report",
            "initializeNetworkInfoAndCarrier"
        };

        for (String s : netStrings) {
            List<FunctionRef> refs = findStringXrefs(s);
            if (refs.isEmpty()) continue;
            report.append("### `" + s + "` (" + refs.size() + " refs)\n\n");
            for (FunctionRef ref : refs) {
                report.append("- `" + ref.funcName + "` @ `0x" + Long.toHexString(ref.funcAddr) + "`\n");
            }
            report.append("\n");
        }

        // ══════════════════════════════════════════════════════════════
        // Output
        // ══════════════════════════════════════════════════════════════
        decomp.dispose();

        String filepath = outputDir + "/match_protocol_analysis.md";
        FileWriter fw = new FileWriter(filepath);
        fw.write(report.toString());
        fw.close();
        println("\n[match-proto] Wrote " + filepath + " (" + report.length() + " bytes)");
        println("[match-proto] === COMPLETE ===");
    }

    // ════════════════════════════════════════════════════════════════
    // Utility methods
    // ════════════════════════════════════════════════════════════════

    static class FunctionRef {
        String funcName;
        long funcAddr;
        long refAddr;

        FunctionRef(String name, long fAddr, long rAddr) {
            this.funcName = name;
            this.funcAddr = fAddr;
            this.refAddr = rAddr;
        }
    }

    private List<FunctionRef> findStringXrefs(String target) {
        List<FunctionRef> results = new ArrayList<>();
        Set<Long> seen = new HashSet<>();

        // Method 1: Search defined string data
        DataIterator dataIter = listing.getDefinedData(true);
        while (dataIter.hasNext() && !monitor.isCancelled()) {
            Data data = dataIter.next();
            if (!data.hasStringValue()) continue;
            Object val = data.getValue();
            if (val == null) continue;
            String s = val.toString();
            if (!s.contains(target)) continue;

            // Find xrefs to this string
            ReferenceIterator refIter = refMgr.getReferencesTo(data.getAddress());
            while (refIter.hasNext()) {
                Reference ref = refIter.next();
                Function func = fm.getFunctionContaining(ref.getFromAddress());
                if (func != null && !seen.contains(func.getEntryPoint().getOffset())) {
                    seen.add(func.getEntryPoint().getOffset());
                    results.add(new FunctionRef(
                        func.getName(),
                        func.getEntryPoint().getOffset(),
                        ref.getFromAddress().getOffset()
                    ));
                }
            }
        }

        // Method 2: Byte search if nothing found
        if (results.isEmpty()) {
            List<Address> addrs = findStringBytes(target);
            for (Address addr : addrs) {
                ReferenceIterator refIter = refMgr.getReferencesTo(addr);
                while (refIter.hasNext()) {
                    Reference ref = refIter.next();
                    Function func = fm.getFunctionContaining(ref.getFromAddress());
                    if (func != null && !seen.contains(func.getEntryPoint().getOffset())) {
                        seen.add(func.getEntryPoint().getOffset());
                        results.add(new FunctionRef(
                            func.getName(),
                            func.getEntryPoint().getOffset(),
                            ref.getFromAddress().getOffset()
                        ));
                    }
                }
            }
        }

        return results;
    }

    private List<FunctionRef> findCallersOf(long targetVA) {
        List<FunctionRef> results = new ArrayList<>();
        Set<Long> seen = new HashSet<>();
        Address targetAddr = af.getAddress("0x" + Long.toHexString(targetVA));

        ReferenceIterator refIter = refMgr.getReferencesTo(targetAddr);
        while (refIter.hasNext()) {
            Reference ref = refIter.next();
            if (!ref.getReferenceType().isCall() && !ref.getReferenceType().isJump()) continue;
            Function func = fm.getFunctionContaining(ref.getFromAddress());
            if (func != null && !seen.contains(func.getEntryPoint().getOffset())) {
                seen.add(func.getEntryPoint().getOffset());
                results.add(new FunctionRef(
                    func.getName(),
                    func.getEntryPoint().getOffset(),
                    ref.getFromAddress().getOffset()
                ));
            }
        }
        return results;
    }

    private List<Symbol> findExternalSymbol(String name) {
        List<Symbol> results = new ArrayList<>();
        SymbolTable st = currentProgram.getSymbolTable();
        SymbolIterator iter = st.getSymbols(name);
        while (iter.hasNext()) {
            results.add(iter.next());
        }
        // Also try without underscore prefix
        if (name.startsWith("_")) {
            iter = st.getSymbols(name.substring(1));
            while (iter.hasNext()) {
                results.add(iter.next());
            }
        }
        return results;
    }

    private String decompFunc(Function func) {
        if (func == null) return null;
        try {
            DecompileResults result = decomp.decompileFunction(func, 120, monitor);
            if (result != null && result.decompileCompleted() && result.getDecompiledFunction() != null) {
                return result.getDecompiledFunction().getC();
            }
        } catch (Exception e) {
            // silently skip
        }
        return null;
    }

    private List<Address> findStringBytes(String target) {
        List<Address> results = new ArrayList<>();
        try {
            byte[] searchBytes = target.getBytes("UTF-8");
            Address addr = mem.getMinAddress();
            int count = 0;
            while (addr != null && !monitor.isCancelled() && count < 10) {
                addr = mem.findBytes(addr, searchBytes, null, true, monitor);
                if (addr != null) {
                    results.add(addr);
                    addr = addr.add(1);
                    count++;
                }
            }
        } catch (Exception e) {}
        return results;
    }

    private int countOccurrences(String haystack, String needle) {
        int count = 0;
        int idx = 0;
        while ((idx = haystack.indexOf(needle, idx)) != -1) {
            count++;
            idx += needle.length();
        }
        return count;
    }

    private List<String> extractCaseValues(String code) {
        List<String> cases = new ArrayList<>();
        int idx = 0;
        while ((idx = code.indexOf("case ", idx)) != -1) {
            int endIdx = code.indexOf(":", idx);
            if (endIdx != -1 && endIdx - idx < 30) {
                String caseVal = code.substring(idx + 5, endIdx).trim();
                cases.add(caseVal);
            }
            idx += 5;
        }
        return cases;
    }
}
