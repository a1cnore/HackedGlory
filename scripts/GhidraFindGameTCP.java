// Ghidra headless script: Find the E.V.I.L. engine game server TCP connection code.
//
// Strategy:
//   1. Search for the value 0x86 (134) / 0x88 (136) in engine code — handshake packet size
//   2. Find memset(X, 0, 128) patterns — IP string zero-padding in handshake
//   3. Trace callers of FUN_100033210 (match start trigger) up the call chain
//   4. Find functions writing big-endian 16-bit values (htons) near string copies
//   5. Trace from known socket/connect callers in engine range (0x1004e264c, 0x1004f2c38)
//   6. Search for the 5-byte handshake response pattern (0x0003 0x0006 0x00)
//   7. Find XOR encryption loops with 8-byte key in engine code range
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
import ghidra.program.model.scalar.Scalar;

import java.io.*;
import java.util.*;

public class GhidraFindGameTCP extends GhidraScript {

    private DecompInterface decomp;
    private FunctionManager fm;
    private ReferenceManager refMgr;
    private AddressFactory af;
    private Memory mem;
    private Listing listing;

    // Engine code range (main game code, not third-party libs)
    static final long ENGINE_START = 0x100000000L;
    static final long ENGINE_END   = 0x100400000L;

    // Known functions from previous analysis
    static final long FUN_MATCH_START_CALLER = 0x100033210L;  // calls Game_Match_Start
    static final long FUN_GAME_MATCH_START   = 0x100102ec8L;
    static final long FUN_SESSION_BOOTSTRAP  = 0x100505520L;  // parses host/port from JSON
    static final long FUN_CONNECT_SOCKET_A   = 0x100617810L;  // calls _connect + _socket
    static final long FUN_SEND_WRAPPER       = 0x100617d0cL;  // calls _send
    static final long FUN_RECV_WRAPPER       = 0x100617d9cL;  // calls _recv
    static final long FUN_SOCKET_B           = 0x100617aa4L;  // calls _socket

    // Engine-range callers of _connect and _socket (NOT FMOD / NOT libcurl)
    static final long FUN_ENGINE_CONNECT_A   = 0x1004e264cL;
    static final long FUN_ENGINE_CONNECT_B   = 0x1004f2c38L;

    // MENU_CONNECTING_TO_GAME
    static final long FUN_MENU_CONNECTING    = 0x100268944L;

    @Override
    public void run() throws Exception {
        String outputDir = System.getenv("VGF_REPORT_DIR");
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
        report.append("# Game TCP Connection Trace\n\n");
        report.append("Binary: GameKindred (Vainglory 4.13.4, arm64)\n");
        report.append("Searching engine range: 0x100000000 - 0x100400000\n\n");

        // ================================================================
        // PHASE 1: Trace from FUN_100033210 — the match start trigger
        // ================================================================
        println("\n[game-tcp] === Phase 1: Match Start Trigger Chain ===");
        report.append("## Phase 1: Match Start Trigger Chain\n\n");

        // Decompile FUN_100033210 itself
        report.append("### FUN_100033210 (Match Start Caller)\n\n");
        decompAndReport(report, FUN_MATCH_START_CALLER, 12000);

        // Find callers of FUN_100033210
        List<Long> matchStartCallers = findCallers(FUN_MATCH_START_CALLER);
        report.append("### Callers of FUN_100033210\n\n");
        for (long caller : matchStartCallers) {
            report.append("#### Caller @ 0x" + Long.toHexString(caller) + "\n\n");
            decompAndReport(report, caller, 10000);

            // Go one more level up
            List<Long> grandCallers = findCallers(caller);
            for (long gc : grandCallers) {
                if (gc >= ENGINE_START && gc <= ENGINE_END) {
                    report.append("##### Grand-caller @ 0x" + Long.toHexString(gc) + "\n\n");
                    decompAndReport(report, gc, 8000);
                }
            }
        }

        // Also find callees of FUN_100033210 — what does the match start trigger call?
        report.append("### Callees of FUN_100033210\n\n");
        List<Long> matchStartCallees = findCallees(FUN_MATCH_START_CALLER);
        for (long callee : matchStartCallees) {
            Function func = fm.getFunctionAt(makeAddr(callee));
            String name = func != null ? func.getName() : "?";
            report.append("- `" + name + "` @ `0x" + Long.toHexString(callee) + "`\n");
        }
        report.append("\n");

        // Decompile key callees (especially those in engine range that aren't analytics)
        for (long callee : matchStartCallees) {
            if (callee == FUN_GAME_MATCH_START) continue; // Already known analytics
            if (callee == 0x100103048L) continue; // Game_Match_Reconnect (analytics)
            Function func = fm.getFunctionAt(makeAddr(callee));
            if (func == null) continue;
            String code = decompFunc(func);
            if (code == null) continue;
            // Check if this callee does networking
            boolean hasNet = code.contains("connect") || code.contains("socket") ||
                             code.contains("send") || code.contains("recv") ||
                             code.contains("host") || code.contains("port") ||
                             code.contains("0x86") || code.contains("memset") ||
                             code.contains("htons") || code.contains("addr");
            if (hasNet) {
                report.append("#### Network-relevant callee: `" + func.getName() + "` @ 0x" +
                    Long.toHexString(callee) + "\n\n");
                decompAndReport(report, callee, 10000);
            }
        }

        // ================================================================
        // PHASE 2: Engine-range connect/socket callers
        // ================================================================
        println("\n[game-tcp] === Phase 2: Engine Connect/Socket Functions ===");
        report.append("## Phase 2: Engine Connect/Socket Functions\n\n");

        // Decompile FUN_1004e264c (calls both _connect and _socket)
        report.append("### FUN_1004e264c (engine connect+socket)\n\n");
        decompAndReport(report, FUN_ENGINE_CONNECT_A, 15000);
        // Its callers
        List<Long> callersA = findCallers(FUN_ENGINE_CONNECT_A);
        report.append("Callers of FUN_1004e264c: ");
        for (long c : callersA) {
            Function cf = fm.getFunctionAt(makeAddr(c));
            report.append("`" + (cf != null ? cf.getName() : "?") + "` @ 0x" + Long.toHexString(c) + " ");
        }
        report.append("\n\n");
        // Decompile callers
        for (long c : callersA) {
            report.append("#### Caller of 1004e264c: 0x" + Long.toHexString(c) + "\n\n");
            decompAndReport(report, c, 12000);
        }

        // Decompile FUN_1004f2c38 (calls _connect, _socket, AND _send)
        report.append("### FUN_1004f2c38 (engine connect+socket+send)\n\n");
        decompAndReport(report, FUN_ENGINE_CONNECT_B, 15000);
        List<Long> callersB = findCallers(FUN_ENGINE_CONNECT_B);
        report.append("Callers of FUN_1004f2c38: ");
        for (long c : callersB) {
            Function cf = fm.getFunctionAt(makeAddr(c));
            report.append("`" + (cf != null ? cf.getName() : "?") + "` @ 0x" + Long.toHexString(c) + " ");
        }
        report.append("\n\n");
        for (long c : callersB) {
            report.append("#### Caller of 1004f2c38: 0x" + Long.toHexString(c) + "\n\n");
            decompAndReport(report, c, 12000);
        }

        // ================================================================
        // PHASE 3: Search for 0x86 / 0x88 / 134 / 136 constant references
        // ================================================================
        println("\n[game-tcp] === Phase 3: Handshake Size Constants ===");
        report.append("## Phase 3: Handshake Size Constants (0x86/0x88)\n\n");

        // Look for MOV/STR instructions that use 0x86 or 0x88 as immediate values
        // in the engine code range. Also look for 0x0005 (version) near them.
        Set<Long> handshakeCandidates = new LinkedHashSet<>();

        Address scanStart = makeAddr(ENGINE_START);
        FunctionIterator funcIter = fm.getFunctions(scanStart, true);
        int scanned = 0;
        while (funcIter.hasNext() && !monitor.isCancelled()) {
            Function func = funcIter.next();
            long ep = func.getEntryPoint().getOffset();
            if (ep > ENGINE_END) break;
            scanned++;

            // Check instruction operands for 0x86 or 0x88 constants
            boolean has0x86 = false;
            boolean has0x88 = false;
            boolean has0x80 = false;
            boolean has0x05 = false;
            boolean hasMemset = false;
            boolean hasSend = false;

            InstructionIterator instIter = listing.getInstructions(func.getBody(), true);
            int instCount = 0;
            while (instIter.hasNext() && instCount < 500) {
                Instruction inst = instIter.next();
                instCount++;
                String mnem = inst.getMnemonicString();

                // Check for immediate operands
                for (int i = 0; i < inst.getNumOperands(); i++) {
                    Object[] opObjs = inst.getOpObjects(i);
                    for (Object obj : opObjs) {
                        if (obj instanceof Scalar) {
                            long val = ((Scalar) obj).getUnsignedValue();
                            if (val == 0x86 || val == 134) has0x86 = true;
                            if (val == 0x88 || val == 136) has0x88 = true;
                            if (val == 0x80 || val == 128) has0x80 = true;
                            if (val == 0x05 || val == 5) has0x05 = true;
                        }
                    }
                }

                // Check for calls to memset/_memset or send/_send
                if (mnem.equals("bl") || mnem.equals("b")) {
                    Reference[] refs = inst.getReferencesFrom();
                    for (Reference ref : refs) {
                        Function target = fm.getFunctionAt(ref.getToAddress());
                        if (target != null) {
                            String tname = target.getName();
                            if (tname.contains("memset")) hasMemset = true;
                            if (tname.contains("send") || tname.equals("FUN_100617d0c")) hasSend = true;
                        }
                    }
                }
            }

            // Strong candidate: has handshake length AND version byte
            if ((has0x86 || has0x88) && has0x05) {
                handshakeCandidates.add(ep);
                report.append("### STRONG: `" + func.getName() + "` @ 0x" + Long.toHexString(ep) + "\n");
                report.append("0x86=" + has0x86 + " 0x88=" + has0x88 + " 0x80=" + has0x80 +
                    " 0x05=" + has0x05 + " memset=" + hasMemset + " send=" + hasSend + "\n\n");
                decompAndReport(report, ep, 12000);
            }
            // Medium candidate: has handshake length AND memset(0, 128)
            else if ((has0x86 || has0x88) && has0x80 && hasMemset) {
                handshakeCandidates.add(ep);
                report.append("### MEDIUM: `" + func.getName() + "` @ 0x" + Long.toHexString(ep) + "\n");
                report.append("0x86=" + has0x86 + " 0x88=" + has0x88 + " 0x80=" + has0x80 +
                    " memset=" + hasMemset + " send=" + hasSend + "\n\n");
                decompAndReport(report, ep, 10000);
            }
            // Weak candidate: has handshake length AND sends data
            else if ((has0x86 || has0x88) && hasSend) {
                handshakeCandidates.add(ep);
                report.append("### WEAK-SEND: `" + func.getName() + "` @ 0x" + Long.toHexString(ep) + "\n\n");
                decompAndReport(report, ep, 8000);
            }
        }
        println("[game-tcp]   Scanned " + scanned + " engine functions, found " + handshakeCandidates.size() + " handshake candidates");

        // ================================================================
        // PHASE 4: Search for htons pattern (big-endian 16-bit write)
        // ================================================================
        println("\n[game-tcp] === Phase 4: htons / Big-Endian Write Patterns ===");
        report.append("## Phase 4: htons Patterns in Engine Range\n\n");

        // ARM64 REV16 instruction or shift+or patterns for byte-swapping
        // Also look for explicit _htons calls
        Set<Long> htonsUsers = new LinkedHashSet<>();

        // Find htons symbol references
        SymbolTable st = currentProgram.getSymbolTable();
        String[] htonsNames = {"_htons", "htons", "_ntohs", "ntohs", "_htonl", "htonl"};
        for (String name : htonsNames) {
            SymbolIterator si = st.getSymbols(name);
            while (si.hasNext()) {
                Symbol sym = si.next();
                ReferenceIterator ri = refMgr.getReferencesTo(sym.getAddress());
                while (ri.hasNext()) {
                    Reference ref = ri.next();
                    Function func = fm.getFunctionContaining(ref.getFromAddress());
                    if (func != null) {
                        long ep = func.getEntryPoint().getOffset();
                        if (ep >= ENGINE_START && ep <= ENGINE_END) {
                            htonsUsers.add(ep);
                            report.append("- `" + func.getName() + "` @ 0x" + Long.toHexString(ep) +
                                " uses `" + name + "` (ref from 0x" +
                                Long.toHexString(ref.getFromAddress().getOffset()) + ")\n");
                        }
                    }
                }
            }
        }
        report.append("\n");

        // Also find REV16 instructions in engine code (ARM64 byte-swap for 16-bit)
        funcIter = fm.getFunctions(scanStart, true);
        while (funcIter.hasNext() && !monitor.isCancelled()) {
            Function func = funcIter.next();
            long ep = func.getEntryPoint().getOffset();
            if (ep > ENGINE_END) break;

            InstructionIterator instIter = listing.getInstructions(func.getBody(), true);
            boolean hasRev = false;
            boolean hasStrh = false; // store halfword (16-bit write)
            int instCount = 0;
            while (instIter.hasNext() && instCount < 300) {
                Instruction inst = instIter.next();
                instCount++;
                String mnem = inst.getMnemonicString().toLowerCase();
                if (mnem.equals("rev16") || mnem.equals("rev")) hasRev = true;
                if (mnem.equals("strh")) hasStrh = true;
            }
            if (hasRev && hasStrh && !htonsUsers.contains(ep)) {
                htonsUsers.add(ep);
                // Only report if also in handshake candidates or has other signals
                String code = decompFunc(func);
                if (code != null) {
                    boolean interesting = code.contains("0x86") || code.contains("134") ||
                        code.contains("0x88") || code.contains("136") ||
                        code.contains("memset") || code.contains("send") ||
                        code.contains("connect") || code.contains("host") ||
                        code.contains("port") || code.contains("socket") ||
                        code.contains("0x80") || code.contains("128");
                    if (interesting) {
                        report.append("### REV16+STRH: `" + func.getName() + "` @ 0x" + Long.toHexString(ep) + "\n\n");
                        String truncCode = code.length() > 8000 ? code.substring(0, 8000) + "\n// ...truncated..." : code;
                        report.append("```c\n" + truncCode + "\n```\n\n---\n\n");
                    }
                }
            }
        }

        // ================================================================
        // PHASE 5: Trace from session bootstrap parser (host/port extraction)
        // ================================================================
        println("\n[game-tcp] === Phase 5: Session Bootstrap -> Connection ===");
        report.append("## Phase 5: Session Bootstrap Host/Port Path\n\n");

        // FUN_100505520 parses "host" and "port" from the update RPC response
        // Find what READS those stored values (not the parser itself)
        // The parser stores into some object — find who reads from that object

        // First decompile FUN_100505520 to see WHERE it stores host/port
        report.append("### FUN_100505520 (Session Bootstrap Parser)\n\n");
        decompAndReport(report, FUN_SESSION_BOOTSTRAP, 15000);

        // Find callers of the session bootstrap
        List<Long> bootstrapCallers = findCallers(FUN_SESSION_BOOTSTRAP);
        report.append("### Callers of Session Bootstrap\n\n");
        for (long c : bootstrapCallers) {
            Function cf = fm.getFunctionAt(makeAddr(c));
            report.append("- `" + (cf != null ? cf.getName() : "?") + "` @ 0x" + Long.toHexString(c) + "\n");
        }
        report.append("\n");

        // ================================================================
        // PHASE 6: XOR encryption in engine range with 8-byte key
        // ================================================================
        println("\n[game-tcp] === Phase 6: XOR Encryption in Engine Range ===");
        report.append("## Phase 6: XOR Encryption (Engine Range)\n\n");

        funcIter = fm.getFunctions(scanStart, true);
        int xorFound = 0;
        while (funcIter.hasNext() && !monitor.isCancelled()) {
            Function func = funcIter.next();
            long ep = func.getEntryPoint().getOffset();
            if (ep > ENGINE_END) break;

            // Quick filter: look for EOR instructions
            InstructionIterator instIter = listing.getInstructions(func.getBody(), true);
            boolean hasEor = false;
            int instCount = 0;
            while (instIter.hasNext() && instCount < 300) {
                Instruction inst = instIter.next();
                instCount++;
                if (inst.getMnemonicString().equalsIgnoreCase("eor")) {
                    hasEor = true;
                    break;
                }
            }
            if (!hasEor) continue;

            String code = decompFunc(func);
            if (code == null) continue;

            boolean hasXor = code.contains(" ^ ");
            boolean has8mod = code.contains("% 8") || code.contains("& 7") || code.contains("& 0x7");
            boolean hasLoop = code.contains("while") || code.contains("for (");
            boolean hasBuf = code.contains("buf") || code.contains("data") || code.contains("param_");
            boolean hasSend = code.contains("send") || code.contains("recv") || code.contains("write");

            // Strong: XOR + 8-byte modular access + loop
            if (hasXor && has8mod && hasLoop) {
                xorFound++;
                report.append("### XOR+8MOD+LOOP: `" + func.getName() + "` @ 0x" + Long.toHexString(ep) + "\n\n");
                decompAndReport(report, ep, 10000);
                // Find callers
                List<Long> callers = findCallers(ep);
                report.append("Callers: ");
                for (long c : callers) {
                    Function cf = fm.getFunctionAt(makeAddr(c));
                    report.append("`" + (cf != null ? cf.getName() : "?") + "` @ 0x" + Long.toHexString(c) + " ");
                }
                report.append("\n\n");
                // Decompile callers in engine range
                for (long c : callers) {
                    if (c >= ENGINE_START && c <= ENGINE_END) {
                        report.append("#### XOR caller 0x" + Long.toHexString(c) + "\n\n");
                        decompAndReport(report, c, 8000);
                    }
                }
            }
            // Medium: XOR + loop + send/recv related
            else if (hasXor && hasLoop && hasSend) {
                xorFound++;
                report.append("### XOR+LOOP+NET: `" + func.getName() + "` @ 0x" + Long.toHexString(ep) + "\n\n");
                decompAndReport(report, ep, 8000);
            }

            if (xorFound >= 20) break;
        }
        println("[game-tcp]   Found " + xorFound + " XOR candidates in engine range");

        // ================================================================
        // PHASE 7: Broader search — functions that call FUN_100617810 (connect wrapper)
        // ================================================================
        println("\n[game-tcp] === Phase 7: Connect Wrapper Callers ===");
        report.append("## Phase 7: FUN_100617810 (Connect Wrapper) Callers\n\n");

        List<Long> connectCallers = findCallers(FUN_CONNECT_SOCKET_A);
        for (long c : connectCallers) {
            Function cf = fm.getFunctionAt(makeAddr(c));
            String name = cf != null ? cf.getName() : "?";
            // Skip known FMOD callers
            if (c == 0x1005d2780L) { report.append("- SKIP FMOD: 0x" + Long.toHexString(c) + "\n"); continue; }
            report.append("### Connect caller: `" + name + "` @ 0x" + Long.toHexString(c) + "\n\n");
            decompAndReport(report, c, 12000);

            // Trace up one more level
            List<Long> upCallers = findCallers(c);
            for (long uc : upCallers) {
                Function ucf = fm.getFunctionAt(makeAddr(uc));
                report.append("#### Up-caller: `" + (ucf != null ? ucf.getName() : "?") + "` @ 0x" + Long.toHexString(uc) + "\n\n");
                decompAndReport(report, uc, 8000);
            }
        }

        // Also trace callers of the send wrapper
        report.append("### FUN_100617d0c (Send Wrapper) Callers\n\n");
        List<Long> sendCallers = findCallers(FUN_SEND_WRAPPER);
        for (long c : sendCallers) {
            Function cf = fm.getFunctionAt(makeAddr(c));
            String name = cf != null ? cf.getName() : "?";
            if (c == 0x100557478L || c == 0x1005d2780L) {
                report.append("- SKIP FMOD: `" + name + "` @ 0x" + Long.toHexString(c) + "\n");
                continue;
            }
            report.append("### Send caller: `" + name + "` @ 0x" + Long.toHexString(c) + "\n\n");
            decompAndReport(report, c, 12000);
        }

        // Trace callers of recv wrapper
        report.append("### FUN_100617d9c (Recv Wrapper) Callers\n\n");
        List<Long> recvCallers = findCallers(FUN_RECV_WRAPPER);
        for (long c : recvCallers) {
            Function cf = fm.getFunctionAt(makeAddr(c));
            String name = cf != null ? cf.getName() : "?";
            report.append("### Recv caller: `" + name + "` @ 0x" + Long.toHexString(c) + "\n\n");
            decompAndReport(report, c, 12000);
        }

        // ================================================================
        // PHASE 8: Search for the 5-byte response magic (0x0003 0x0006)
        // ================================================================
        println("\n[game-tcp] === Phase 8: Handshake Response Constants ===");
        report.append("## Phase 8: Handshake Response Pattern (0x0003/0x0006)\n\n");

        // Search for functions that check for values 3 and 6 (the handshake response)
        funcIter = fm.getFunctions(scanStart, true);
        while (funcIter.hasNext() && !monitor.isCancelled()) {
            Function func = funcIter.next();
            long ep = func.getEntryPoint().getOffset();
            if (ep > ENGINE_END) break;

            String code = decompFunc(func);
            if (code == null) continue;

            // Look for checking recv'd bytes against 3 and 6
            boolean has3 = code.contains("== 3") || code.contains("== 0x3");
            boolean has6 = code.contains("== 6") || code.contains("== 0x6");
            boolean hasRecv = code.contains("recv") || code.contains("read") ||
                              code.contains("FUN_100617d9c");

            if (has3 && has6 && hasRecv) {
                report.append("### Response check: `" + func.getName() + "` @ 0x" + Long.toHexString(ep) + "\n\n");
                decompAndReport(report, ep, 10000);
            }
        }

        // ================================================================
        // PHASE 9: Search for "getaddrinfo" / "inet_pton" callers in engine range
        // ================================================================
        println("\n[game-tcp] === Phase 9: DNS/Address Resolution ===");
        report.append("## Phase 9: getaddrinfo / inet_pton Users\n\n");

        String[] addrSyms = {"_getaddrinfo", "getaddrinfo", "_inet_pton", "inet_pton",
                             "_inet_addr", "inet_addr", "_gethostbyname", "gethostbyname"};
        for (String name : addrSyms) {
            SymbolIterator si = st.getSymbols(name);
            while (si.hasNext()) {
                Symbol sym = si.next();
                ReferenceIterator ri = refMgr.getReferencesTo(sym.getAddress());
                while (ri.hasNext()) {
                    Reference ref = ri.next();
                    Function func = fm.getFunctionContaining(ref.getFromAddress());
                    if (func != null) {
                        long ep = func.getEntryPoint().getOffset();
                        report.append("### `" + name + "` used by `" + func.getName() + "` @ 0x" + Long.toHexString(ep) + "\n\n");
                        decompAndReport(report, ep, 10000);

                        // Find callers of this function too
                        List<Long> callers = findCallers(ep);
                        if (!callers.isEmpty()) {
                            report.append("Callers: ");
                            for (long c : callers) {
                                Function cf = fm.getFunctionAt(makeAddr(c));
                                report.append("`" + (cf != null ? cf.getName() : "?") + "` @ 0x" + Long.toHexString(c) + " ");
                            }
                            report.append("\n\n");
                        }
                    }
                }
            }
        }

        // ================================================================
        // PHASE 10: Widen to 0x100400000-0x100620000 for connect+send patterns
        // ================================================================
        println("\n[game-tcp] === Phase 10: Extended Range Connect+Send Scan ===");
        report.append("## Phase 10: Extended Range (0x100400000-0x100620000) Connect+Send\n\n");

        // We know FUN_1004e264c and FUN_1004f2c38 are in this range
        // Look for other functions that reference both socket/connect AND have buffer
        // construction with 128-byte or 136-byte patterns
        Address extStart = makeAddr(0x100400000L);
        long extEnd = 0x100620000L;
        funcIter = fm.getFunctions(extStart, true);
        int extFound = 0;
        while (funcIter.hasNext() && !monitor.isCancelled()) {
            Function func = funcIter.next();
            long ep = func.getEntryPoint().getOffset();
            if (ep > extEnd) break;

            // Skip known FMOD (0x100550000-0x100600000 roughly)
            if (ep >= 0x100550000L && ep <= 0x100560000L) continue;
            if (ep >= 0x1005c0000L && ep <= 0x100600000L) continue;

            String code = decompFunc(func);
            if (code == null) continue;

            boolean hasConnect = code.contains("connect(") || code.contains("_connect(") ||
                                 code.contains("FUN_100617810");
            boolean hasSend = code.contains("send(") || code.contains("_send(") ||
                              code.contains("FUN_100617d0c");
            boolean hasRecv = code.contains("recv(") || code.contains("_recv(") ||
                              code.contains("FUN_100617d9c");
            boolean hasXor = code.contains(" ^ ");
            boolean has128 = code.contains("0x80") || code.contains(",128") || code.contains("128,");
            boolean has136 = code.contains("0x88") || code.contains(",136") || code.contains("136,");
            boolean has134 = code.contains("0x86") || code.contains(",134") || code.contains("134,");

            // Must have at least connect or (send+recv)
            if (hasConnect || (hasSend && hasRecv)) {
                extFound++;
                report.append("### `" + func.getName() + "` @ 0x" + Long.toHexString(ep) + "\n");
                report.append("connect=" + hasConnect + " send=" + hasSend + " recv=" + hasRecv +
                    " xor=" + hasXor + " 128=" + has128 + " 136=" + has136 + " 134=" + has134 + "\n\n");
                decompAndReport(report, ep, 12000);

                if (extFound >= 15) break;
            }
        }

        // ================================================================
        // PHASE 11: FUN_10052019c — calls both _send and _recv (not FMOD, not libcurl)
        // ================================================================
        println("\n[game-tcp] === Phase 11: FUN_10052019c (send+recv) ===");
        report.append("## Phase 11: FUN_10052019c (send + recv caller)\n\n");
        decompAndReport(report, 0x10052019cL, 15000);
        List<Long> callers52 = findCallers(0x10052019cL);
        report.append("### Callers of FUN_10052019c\n\n");
        for (long c : callers52) {
            Function cf = fm.getFunctionAt(makeAddr(c));
            report.append("#### `" + (cf != null ? cf.getName() : "?") + "` @ 0x" + Long.toHexString(c) + "\n\n");
            decompAndReport(report, c, 10000);
        }

        // ================================================================
        // PHASE 12: FUN_101100a08 — calls both _send and _recv (not libcurl)
        // ================================================================
        println("\n[game-tcp] === Phase 12: FUN_101100a08 (send+recv) ===");
        report.append("## Phase 12: FUN_101100a08 (send + recv caller)\n\n");
        decompAndReport(report, 0x101100a08L, 15000);
        List<Long> callers1011 = findCallers(0x101100a08L);
        report.append("### Callers of FUN_101100a08\n\n");
        for (long c : callers1011) {
            Function cf = fm.getFunctionAt(makeAddr(c));
            report.append("#### `" + (cf != null ? cf.getName() : "?") + "` @ 0x" + Long.toHexString(c) + "\n\n");
            decompAndReport(report, c, 10000);
        }

        // ================================================================
        // PHASE 13: Neighborhood scan around FUN_100617810 (0x100615000-0x10061A000)
        // ================================================================
        println("\n[game-tcp] === Phase 13: Socket Library Neighborhood ===");
        report.append("## Phase 13: Functions near socket wrappers (0x100615000-0x10061A000)\n\n");

        Address neighStart = makeAddr(0x100615000L);
        long neighEnd = 0x10061A000L;
        funcIter = fm.getFunctions(neighStart, true);
        while (funcIter.hasNext() && !monitor.isCancelled()) {
            Function func = funcIter.next();
            long ep = func.getEntryPoint().getOffset();
            if (ep > neighEnd) break;

            String code = decompFunc(func);
            if (code == null) continue;

            // Report all functions in this small range
            boolean hasXor = code.contains(" ^ ");
            boolean hasLoop = code.contains("while") || code.contains("for (");
            boolean hasBuf = code.contains("memset") || code.contains("memcpy") || code.contains("sprintf");
            boolean hasNet = code.contains("send") || code.contains("recv") || code.contains("connect") || code.contains("socket");

            report.append("### `" + func.getName() + "` @ 0x" + Long.toHexString(ep) +
                " [xor=" + hasXor + " loop=" + hasLoop + " buf=" + hasBuf + " net=" + hasNet + "]\n\n");

            // Only full decompile for interesting ones; summary for others
            if (hasXor || hasBuf || hasNet) {
                decompAndReport(report, ep, 8000);
            } else {
                report.append("(Size: " + func.getBody().getNumAddresses() + " bytes, skipped decompilation)\n\n");
            }
        }

        // ================================================================
        // Done
        // ================================================================
        decomp.dispose();

        String filepath = outputDir + "/game_tcp_trace.md";
        FileWriter fw = new FileWriter(filepath);
        fw.write(report.toString());
        fw.close();
        println("\n[game-tcp] Wrote " + filepath + " (" + report.length() + " bytes)");
        println("[game-tcp] === COMPLETE ===");
    }

    // ════════════════════════════════════════════════════════════════
    // Utility methods
    // ════════════════════════════════════════════════════════════════

    private Address makeAddr(long offset) {
        return af.getAddress("0x" + Long.toHexString(offset));
    }

    private void decompAndReport(StringBuilder report, long addr, int maxLen) {
        Function func = fm.getFunctionAt(makeAddr(addr));
        if (func == null) {
            func = fm.getFunctionContaining(makeAddr(addr));
        }
        if (func == null) {
            report.append("(no function at 0x" + Long.toHexString(addr) + ")\n\n");
            return;
        }

        // Show callee list
        List<Long> callees = findCallees(addr);
        if (!callees.isEmpty()) {
            report.append("Calls: ");
            int shown = 0;
            for (long callee : callees) {
                Function cf = fm.getFunctionAt(makeAddr(callee));
                report.append("`" + (cf != null ? cf.getName() : "?") + "`@0x" + Long.toHexString(callee) + " ");
                shown++;
                if (shown >= 20) { report.append("..."); break; }
            }
            report.append("\n\n");
        }

        String code = decompFunc(func);
        if (code == null) {
            report.append("(decompile failed for 0x" + Long.toHexString(addr) + ")\n\n");
            return;
        }

        String truncCode = code.length() > maxLen ? code.substring(0, maxLen) + "\n// ...truncated..." : code;
        report.append("```c\n" + truncCode + "\n```\n\n---\n\n");
    }

    private String decompFunc(Function func) {
        if (func == null) return null;
        try {
            DecompileResults result = decomp.decompileFunction(func, 180, monitor);
            if (result != null && result.decompileCompleted() && result.getDecompiledFunction() != null) {
                return result.getDecompiledFunction().getC();
            }
        } catch (Exception e) {}
        return null;
    }

    private List<Long> findCallers(long targetVA) {
        List<Long> results = new ArrayList<>();
        Set<Long> seen = new HashSet<>();
        Address targetAddr = makeAddr(targetVA);

        // Try both the exact address and the function entry
        Function targetFunc = fm.getFunctionAt(targetAddr);
        if (targetFunc == null) {
            targetFunc = fm.getFunctionContaining(targetAddr);
        }
        Address[] addrsToCheck;
        if (targetFunc != null && targetFunc.getEntryPoint().getOffset() != targetVA) {
            addrsToCheck = new Address[] { targetAddr, targetFunc.getEntryPoint() };
        } else {
            addrsToCheck = new Address[] { targetAddr };
        }

        for (Address addr : addrsToCheck) {
            ReferenceIterator ri = refMgr.getReferencesTo(addr);
            while (ri.hasNext()) {
                Reference ref = ri.next();
                if (!ref.getReferenceType().isCall() && !ref.getReferenceType().isJump()) continue;
                Function func = fm.getFunctionContaining(ref.getFromAddress());
                if (func != null && !seen.contains(func.getEntryPoint().getOffset())) {
                    seen.add(func.getEntryPoint().getOffset());
                    results.add(func.getEntryPoint().getOffset());
                }
            }
        }
        return results;
    }

    private List<Long> findCallees(long sourceVA) {
        List<Long> results = new ArrayList<>();
        Set<Long> seen = new HashSet<>();
        Function func = fm.getFunctionAt(makeAddr(sourceVA));
        if (func == null) func = fm.getFunctionContaining(makeAddr(sourceVA));
        if (func == null) return results;

        AddressSetView body = func.getBody();
        AddressIterator addrIter = body.getAddresses(true);
        while (addrIter.hasNext()) {
            Address a = addrIter.next();
            Reference[] refs = refMgr.getReferencesFrom(a);
            for (Reference ref : refs) {
                if (!ref.getReferenceType().isCall()) continue;
                Function callee = fm.getFunctionAt(ref.getToAddress());
                if (callee != null && !seen.contains(callee.getEntryPoint().getOffset())) {
                    seen.add(callee.getEntryPoint().getOffset());
                    results.add(callee.getEntryPoint().getOffset());
                }
            }
        }
        return results;
    }
}
