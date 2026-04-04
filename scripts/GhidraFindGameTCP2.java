// Follow-up: Trace the game server TCP connection from FUN_1004ec13c upward.
//
// Key insight from first pass:
//   - FUN_1004e264c is the main TCP connect function (getaddrinfo+socket+connect)
//   - FUN_1004ec13c is its sole caller
//   - FUN_1004e2594 calls _write (same module, likely game send)
//   - FUN_1004e2550 calls _read (same module, likely game recv)
//   - The 0x1004e0000-0x1004f0000 range appears to be the E.V.I.L. engine network module
//
// This script traces:
//   1. Callers of FUN_1004ec13c (connect wrapper caller) up multiple levels
//   2. FUN_1004e2594 (_write caller) and FUN_1004e2550 (_read caller) + their callers
//   3. All functions in 0x1004e0000-0x1004f0000 that reference send/recv/connect/socket
//   4. Search for XOR encryption in 0x1004e0000-0x1004f0000
//   5. Functions that reference 0x86/0x88 (handshake size) in this module
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

public class GhidraFindGameTCP2 extends GhidraScript {

    private DecompInterface decomp;
    private FunctionManager fm;
    private ReferenceManager refMgr;
    private AddressFactory af;
    private Memory mem;
    private Listing listing;

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
        report.append("# Game TCP Trace (Pass 2) - E.V.I.L. Engine Network Module\n\n");

        // ================================================================
        // PHASE 1: Trace FUN_1004ec13c callers up the chain
        // ================================================================
        println("[tcp2] === Phase 1: FUN_1004ec13c caller chain ===");
        report.append("## Phase 1: FUN_1004ec13c Caller Chain\n\n");

        long target = 0x1004ec13cL;
        Set<Long> visited = new HashSet<>();
        traceCallersUp(report, target, 0, 4, visited);

        // ================================================================
        // PHASE 2: FUN_1004e2594 (_write) and FUN_1004e2550 (_read) + callers
        // ================================================================
        println("[tcp2] === Phase 2: Write/Read wrappers ===");
        report.append("## Phase 2: _write / _read Wrappers\n\n");

        report.append("### FUN_1004e2594 (calls _write)\n\n");
        decompAndReport(report, 0x1004e2594L, 10000);
        visited.clear();
        traceCallersUp(report, 0x1004e2594L, 0, 3, visited);

        report.append("### FUN_1004e2550 (calls _read)\n\n");
        decompAndReport(report, 0x1004e2550L, 10000);
        visited.clear();
        traceCallersUp(report, 0x1004e2550L, 0, 3, visited);

        // ================================================================
        // PHASE 3: Comprehensive 0x1004e0000-0x1004f0000 module scan
        // ================================================================
        println("[tcp2] === Phase 3: Network module scan ===");
        report.append("## Phase 3: Network Module (0x1004e0000-0x1004f0000)\n\n");

        // Enumerate ALL functions in this range
        Address modStart = makeAddr(0x1004e0000L);
        long modEnd = 0x1004f0000L;
        FunctionIterator funcIter = fm.getFunctions(modStart, true);
        int funcCount = 0;
        List<Long> moduleFuncs = new ArrayList<>();
        while (funcIter.hasNext()) {
            Function func = funcIter.next();
            long ep = func.getEntryPoint().getOffset();
            if (ep > modEnd) break;
            moduleFuncs.add(ep);
            funcCount++;
        }
        report.append("Total functions in range: " + funcCount + "\n\n");

        // List them all with a summary
        report.append("### Function Listing\n\n");
        for (long ep : moduleFuncs) {
            Function func = fm.getFunctionAt(makeAddr(ep));
            if (func == null) continue;
            int size = (int) func.getBody().getNumAddresses();

            // Quick decompile for keyword analysis
            String code = decompFunc(func);
            List<String> tags = new ArrayList<>();
            if (code != null) {
                if (code.contains("connect(") || code.contains("_connect(")) tags.add("CONNECT");
                if (code.contains("socket(") || code.contains("_socket(")) tags.add("SOCKET");
                if (code.contains("send(") || code.contains("_send(")) tags.add("SEND");
                if (code.contains("recv(") || code.contains("_recv(")) tags.add("RECV");
                if (code.contains("write(") || code.contains("_write(")) tags.add("WRITE");
                if (code.contains("read(") || code.contains("_read(")) tags.add("READ");
                if (code.contains(" ^ ")) tags.add("XOR");
                if (code.contains("memset")) tags.add("MEMSET");
                if (code.contains("memcpy")) tags.add("MEMCPY");
                if (code.contains("0x86") || code.contains("134")) tags.add("0x86");
                if (code.contains("0x88") || code.contains("136")) tags.add("0x88");
                if (code.contains("0x80") || code.contains(",128")) tags.add("0x80");
                if (code.contains("host") || code.contains("Host")) tags.add("HOST");
                if (code.contains("port") || code.contains("Port")) tags.add("PORT");
                if (code.contains("htons") || code.contains("ntohs")) tags.add("HTONS");
                if (code.contains("getaddrinfo")) tags.add("GETADDRINFO");
                if (code.contains("select")) tags.add("SELECT");
                if (code.contains("close")) tags.add("CLOSE");
                if (code.contains("fcntl")) tags.add("FCNTL");
                if (code.contains("setsockopt")) tags.add("SETSOCKOPT");
                if (code.contains("getsockopt")) tags.add("GETSOCKOPT");
                if (code.contains("% 8") || code.contains("& 7")) tags.add("MOD8");
            }

            String tagStr = tags.isEmpty() ? "" : " [" + String.join(",", tags) + "]";
            report.append("- `" + func.getName() + "` @ 0x" + Long.toHexString(ep) + " (" + size + "B)" + tagStr + "\n");
        }
        report.append("\n");

        // Decompile interesting functions in this module
        report.append("### Decompiled Functions with Network/Crypto Tags\n\n");
        for (long ep : moduleFuncs) {
            Function func = fm.getFunctionAt(makeAddr(ep));
            if (func == null) continue;
            String code = decompFunc(func);
            if (code == null) continue;

            boolean hasNet = code.contains("connect(") || code.contains("socket(") ||
                             code.contains("send(") || code.contains("recv(") ||
                             code.contains("write(") || code.contains("read(") ||
                             code.contains("select(");
            boolean hasXor = code.contains(" ^ ") && (code.contains("while") || code.contains("for ("));
            boolean hasHandshake = code.contains("0x86") || code.contains("0x88") || code.contains("0x80");
            boolean hasHost = code.contains("host") || code.contains("Host") || code.contains("port");

            // Already decompiled 1004e264c and 1004ec13c, skip those
            if (ep == 0x1004e264cL || ep == 0x1004ec13cL) continue;

            if (hasNet || hasXor || hasHandshake || hasHost) {
                report.append("#### `" + func.getName() + "` @ 0x" + Long.toHexString(ep) + "\n\n");
                decompAndReport(report, ep, 12000);
            }
        }

        // ================================================================
        // PHASE 4: Trace the object at param_1 in FUN_1004ec13c
        // ================================================================
        println("[tcp2] === Phase 4: Connection object tracing ===");
        report.append("## Phase 4: Connection Object Users\n\n");

        // FUN_1004ec13c takes (long param_1, ...) where param_1+8 is the socket struct
        // The callers pass an object pointer. Find what else references this object.
        // Key: FUN_1004ec13c stores state at param_1+0x4e8, 0x4c8, 0x4d8, 0x4e0, 0x528, 0x520, 0x530
        // These offsets tell us the object layout. Find functions that read/write these offsets.

        // First find callers of FUN_1004ec13c
        List<Long> ec13cCallers = findCallers(0x1004ec13cL);
        for (long c : ec13cCallers) {
            report.append("### Caller of 1004ec13c: 0x" + Long.toHexString(c) + "\n\n");
            decompAndReport(report, c, 12000);

            // And its callers
            List<Long> grandCallers = findCallers(c);
            for (long gc : grandCallers) {
                report.append("#### Grand-caller: 0x" + Long.toHexString(gc) + "\n\n");
                decompAndReport(report, gc, 10000);

                // One more level
                List<Long> greatGrandCallers = findCallers(gc);
                for (long ggc : greatGrandCallers) {
                    Function ggcf = fm.getFunctionAt(makeAddr(ggc));
                    report.append("##### Great-grand-caller: `" + (ggcf != null ? ggcf.getName() : "?") +
                        "` @ 0x" + Long.toHexString(ggc) + "\n\n");
                    decompAndReport(report, ggc, 8000);
                }
            }
        }

        // ================================================================
        // PHASE 5: Look for sibling functions of FUN_1004ec13c that send/recv
        // ================================================================
        println("[tcp2] === Phase 5: Sibling poll/send/recv functions ===");
        report.append("## Phase 5: Sibling Network Functions (0x1004eb000-0x1004f0000)\n\n");

        // The connect function FUN_1004ec13c is at 0x1004ec13c.
        // Nearby functions likely handle send/recv/poll for the same connection object.
        Address sibStart = makeAddr(0x1004eb000L);
        long sibEnd = 0x1004f0000L;
        funcIter = fm.getFunctions(sibStart, true);
        while (funcIter.hasNext() && !monitor.isCancelled()) {
            Function func = funcIter.next();
            long ep = func.getEntryPoint().getOffset();
            if (ep > sibEnd) break;
            if (ep == 0x1004ec13cL || ep == 0x1004e264cL) continue; // already dumped

            String code = decompFunc(func);
            if (code == null) continue;

            boolean hasWrite = code.contains("_write(") || code.contains("write(") ||
                               code.contains("FUN_1004e2594");
            boolean hasRead = code.contains("_read(") || code.contains("read(") ||
                              code.contains("FUN_1004e2550");
            boolean hasSend = code.contains("_send(") || code.contains("send(");
            boolean hasRecv = code.contains("_recv(") || code.contains("recv(");
            boolean hasXor = code.contains(" ^ ");
            boolean hasSelect = code.contains("select(");
            boolean hasPoll = code.contains("poll(");
            boolean has4e8 = code.contains("0x4e8") || code.contains("0x4c8") ||
                             code.contains("0x528") || code.contains("0x530") ||
                             code.contains("0x6b8");
            boolean has86 = code.contains("0x86") || code.contains("0x88");

            if (hasWrite || hasRead || hasSend || hasRecv || hasXor || hasSelect || hasPoll || has4e8 || has86) {
                report.append("### `" + func.getName() + "` @ 0x" + Long.toHexString(ep) + "\n");
                report.append("Tags: " +
                    (hasWrite ? "WRITE " : "") + (hasRead ? "READ " : "") +
                    (hasSend ? "SEND " : "") + (hasRecv ? "RECV " : "") +
                    (hasXor ? "XOR " : "") + (hasSelect ? "SELECT " : "") +
                    (hasPoll ? "POLL " : "") + (has4e8 ? "OBJ_FIELDS " : "") +
                    (has86 ? "0x86/88 " : "") + "\n\n");
                decompAndReport(report, ep, 12000);
            }
        }

        // ================================================================
        // PHASE 6: Search specifically for functions that build the 136-byte handshake
        // ================================================================
        println("[tcp2] === Phase 6: Handshake buffer construction ===");
        report.append("## Phase 6: Handshake Buffer Construction\n\n");

        // The handshake is:
        //   offset 0: 2 bytes = 0x0086 (content length, big-endian)
        //   offset 2: 2 bytes = 0x0005 (version, big-endian)
        //   offset 4: 128 bytes = IP string, zero-padded
        //   offset 132: 2 bytes = port, big-endian
        //   Total: 136 bytes
        //
        // Look for functions that:
        //   - Allocate or use a ~136 byte buffer
        //   - Write 0x0086 or do (len >> 8) | ((len & 0xff) << 8) for len=0x86
        //   - Copy a string (IP) then write a 16-bit port value

        // Search more broadly in 0x1004d0000-0x100510000
        Address hsStart = makeAddr(0x1004d0000L);
        long hsEnd = 0x100510000L;
        funcIter = fm.getFunctions(hsStart, true);
        while (funcIter.hasNext() && !monitor.isCancelled()) {
            Function func = funcIter.next();
            long ep = func.getEntryPoint().getOffset();
            if (ep > hsEnd) break;

            // Check for instruction-level constants
            boolean has0x86 = false;
            boolean has0x88 = false;
            boolean has5 = false;
            boolean hasMov128 = false;

            InstructionIterator instIter = listing.getInstructions(func.getBody(), true);
            int instCount = 0;
            while (instIter.hasNext() && instCount < 500) {
                Instruction inst = instIter.next();
                instCount++;
                for (int i = 0; i < inst.getNumOperands(); i++) {
                    Object[] opObjs = inst.getOpObjects(i);
                    for (Object obj : opObjs) {
                        if (obj instanceof Scalar) {
                            long val = ((Scalar) obj).getUnsignedValue();
                            if (val == 0x86) has0x86 = true;
                            if (val == 0x88) has0x88 = true;
                            if (val == 5) has5 = true;
                            if (val == 128 || val == 0x80) hasMov128 = true;
                        }
                    }
                }
            }

            if ((has0x86 || has0x88) && (has5 || hasMov128)) {
                String code = decompFunc(func);
                if (code == null) continue;
                boolean hasStr = code.contains("strcpy") || code.contains("strncpy") ||
                                 code.contains("sprintf") || code.contains("snprintf") ||
                                 code.contains("memcpy") || code.contains("memset");
                boolean hasWrite = code.contains("write") || code.contains("send") ||
                                   code.contains("FUN_1004e2594");

                if (hasStr || hasWrite) {
                    report.append("### HANDSHAKE CANDIDATE: `" + func.getName() + "` @ 0x" + Long.toHexString(ep) + "\n");
                    report.append("0x86=" + has0x86 + " 0x88=" + has0x88 + " v5=" + has5 +
                        " mov128=" + hasMov128 + " str=" + hasStr + " write=" + hasWrite + "\n\n");
                    decompAndReport(report, ep, 12000);
                }
            }
        }

        // ================================================================
        // PHASE 7: Look for FUN_1004e25xx family functions
        // ================================================================
        println("[tcp2] === Phase 7: 1004e25xx family ===");
        report.append("## Phase 7: FUN_1004e25xx Family\n\n");

        // These are all at offsets near each other - likely methods of the same socket class
        long[] familyAddrs = {
            0x1004e2508L, // called by 1004ec13c on failure
            0x1004e253cL, // called by 1004ec13c at start
            0x1004e2550L, // calls _read
            0x1004e2594L, // calls _write
            0x1004e25ccL, // called by 1004e264c (set nonblocking?)
            0x1004e28fcL, // called by 1004e264c (store fd?)
        };
        for (long addr : familyAddrs) {
            report.append("### 0x" + Long.toHexString(addr) + "\n\n");
            decompAndReport(report, addr, 8000);
            List<Long> callers = findCallers(addr);
            if (!callers.isEmpty()) {
                report.append("Callers: ");
                for (long c : callers) {
                    Function cf = fm.getFunctionAt(makeAddr(c));
                    report.append("`" + (cf != null ? cf.getName() : "?") + "`@0x" + Long.toHexString(c) + " ");
                }
                report.append("\n\n");
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
        println("[tcp2] Wrote " + filepath + " (" + report.length() + " bytes)");
        println("[tcp2] === COMPLETE ===");
    }

    // ════════════════════════════════════════════════════════════════

    private Address makeAddr(long offset) {
        return af.getAddress("0x" + Long.toHexString(offset));
    }

    private void traceCallersUp(StringBuilder report, long target, int depth, int maxDepth, Set<Long> visited) {
        if (depth >= maxDepth || visited.contains(target)) return;
        visited.add(target);

        String indent = "";
        for (int i = 0; i < depth; i++) indent += "#";

        List<Long> callers = findCallers(target);
        for (long caller : callers) {
            if (visited.contains(caller)) continue;
            Function func = fm.getFunctionAt(makeAddr(caller));
            String name = func != null ? func.getName() : "?";
            report.append("##" + indent + " Caller (depth=" + depth + "): `" + name + "` @ 0x" + Long.toHexString(caller) + "\n\n");
            decompAndReport(report, caller, 10000);
            traceCallersUp(report, caller, depth + 1, maxDepth, visited);
        }
    }

    private void decompAndReport(StringBuilder report, long addr, int maxLen) {
        Function func = fm.getFunctionAt(makeAddr(addr));
        if (func == null) func = fm.getFunctionContaining(makeAddr(addr));
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
                if (shown >= 25) { report.append("..."); break; }
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

        Function targetFunc = fm.getFunctionAt(targetAddr);
        if (targetFunc == null) targetFunc = fm.getFunctionContaining(targetAddr);

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
