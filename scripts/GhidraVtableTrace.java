// Ghidra headless script: Trace vtable at 0x10145b1c8 and decompile all
// network thread functions to find XOR encryption in the game server TCP protocol.
//
// Reads 12 consecutive 8-byte pointers from __DATA, decompiles each target,
// then decompiles FUN_10014848c, FUN_10014e2cc, FUN_100148ab0 and searches
// for XOR / handshake / encryption patterns.
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

import java.io.*;
import java.util.*;

public class GhidraVtableTrace extends GhidraScript {

    private DecompInterface decomp;
    private FunctionManager fm;
    private ReferenceManager refMgr;
    private AddressFactory af;
    private Memory mem;

    // Vtable base in __DATA segment
    static final long VTABLE_BASE = 0x10145b1c8L;
    static final int VTABLE_ENTRY_COUNT = 12;

    // Known network thread functions
    static final long FUN_RESPONSE_PROCESSOR = 0x10014848cL;
    static final long FUN_PAYLOAD_BUILDER    = 0x10014e2ccL;
    static final long FUN_NETWORK_MAIN_LOOP  = 0x100148ab0L;

    // Patterns to search for in decompiled code
    static final String[] XOR_PATTERNS = {
        " ^ ", "^=", " eor "
    };
    static final String[] MOD8_PATTERNS = {
        "% 8", "& 7", "& 0x7"
    };
    static final String[] HANDSHAKE_PATTERNS = {
        "0x86", "134", "136", "0x88", "0x80", "128"
    };
    static final String[] CRYPTO_KEYWORDS = {
        "key", "encrypt", "cipher", "xor", "scramble", "crypt", "mask"
    };
    static final String[] NETWORK_PATTERNS = {
        "memset", "memcpy", "htons", "ntohs", "htonl", "ntohl",
        "send", "recv", "write", "read", "connect", "socket",
        "select", "poll", "close"
    };

    @Override
    public void run() throws Exception {
        String outputDir = System.getenv("VGF_REPORT_DIR");
        if (outputDir == null) outputDir = "/tmp/vgf_ghidra_reports";
        new File(outputDir).mkdirs();

        fm = currentProgram.getFunctionManager();
        refMgr = currentProgram.getReferenceManager();
        af = currentProgram.getAddressFactory();
        mem = currentProgram.getMemory();

        decomp = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        decomp.setOptions(opts);
        decomp.openProgram(currentProgram);

        StringBuilder report = new StringBuilder();
        report.append("# Vtable Trace & XOR Encryption Hunt\n\n");
        report.append("Binary: GameKindred (Vainglory 4.13.4, arm64 Mach-O)\n\n");
        report.append("Vtable base: `0x" + Long.toHexString(VTABLE_BASE) + "` in `__DATA`\n\n");

        // ════════════════════════════════════════════════════════════════
        // PHASE 1: Read vtable pointers from __DATA
        // ════════════════════════════════════════════════════════════════
        println("\n[vtable] === Phase 1: Reading vtable at 0x" + Long.toHexString(VTABLE_BASE) + " ===");
        report.append("## Phase 1: Vtable Pointer Table\n\n");

        long[] vtablePtrs = new long[VTABLE_ENTRY_COUNT];
        boolean vtableReadOk = true;

        // Method 1: Try mem.getLong() for each pointer slot
        report.append("### Reading " + VTABLE_ENTRY_COUNT + " x 8-byte pointers\n\n");
        report.append("| Index | Offset | Raw Address | Function |\n");
        report.append("|-------|--------|-------------|----------|\n");

        for (int i = 0; i < VTABLE_ENTRY_COUNT; i++) {
            long ptrAddr = VTABLE_BASE + (i * 8);
            Address addr = makeAddr(ptrAddr);
            long value = 0;
            boolean readSuccess = false;

            // Method 1: getLong
            try {
                value = mem.getLong(addr);
                readSuccess = true;
            } catch (Exception e1) {
                // Method 2: Read 8 bytes and interpret as LE 64-bit
                try {
                    byte[] bytes = new byte[8];
                    mem.getBytes(addr, bytes);
                    value = 0;
                    for (int b = 0; b < 8; b++) {
                        value |= ((long)(bytes[b] & 0xFF)) << (b * 8);
                    }
                    readSuccess = true;
                } catch (Exception e2) {
                    println("[vtable] ERROR reading at 0x" + Long.toHexString(ptrAddr) + ": " + e2.getMessage());
                }
            }

            vtablePtrs[i] = value;
            if (!readSuccess) vtableReadOk = false;

            // Resolve to function name
            String funcName = "(unresolved)";
            if (readSuccess && value != 0) {
                Function func = fm.getFunctionAt(makeAddr(value));
                if (func != null) {
                    funcName = func.getName() + " @ 0x" + Long.toHexString(value);
                } else {
                    func = fm.getFunctionContaining(makeAddr(value));
                    if (func != null) {
                        funcName = func.getName() + "+0x" +
                            Long.toHexString(value - func.getEntryPoint().getOffset()) +
                            " (containing, entry=0x" + Long.toHexString(func.getEntryPoint().getOffset()) + ")";
                    } else {
                        funcName = "(no function at 0x" + Long.toHexString(value) + ")";
                    }
                }
            } else if (value == 0) {
                funcName = "(null)";
            }

            String offsetHex = "+0x" + Long.toHexString(i * 8);
            report.append("| " + i + " | " + offsetHex + " | `0x" + Long.toHexString(value) + "` | " + funcName + " |\n");
            println("[vtable]   [" + i + "] " + offsetHex + " -> 0x" + Long.toHexString(value) + " " + funcName);
        }
        report.append("\n");

        // If primary read failed, try alternate approaches
        if (!vtableReadOk) {
            report.append("### Fallback: Byte-level read\n\n");
            for (int i = 0; i < VTABLE_ENTRY_COUNT; i++) {
                long ptrAddr = VTABLE_BASE + (i * 8);
                Address addr = makeAddr(ptrAddr);
                try {
                    byte[] bytes = new byte[8];
                    mem.getBytes(addr, bytes);
                    StringBuilder hexDump = new StringBuilder();
                    for (int b = 0; b < 8; b++) {
                        hexDump.append(String.format("%02x ", bytes[b] & 0xFF));
                    }
                    report.append("[" + i + "] bytes: " + hexDump.toString().trim() + "\n");
                } catch (Exception e) {
                    report.append("[" + i + "] read error: " + e.getMessage() + "\n");
                }
            }
            report.append("\n");
        }

        // Also read a wider range around the vtable for context (e.g., check if
        // the pointer table is preceded by a typeinfo pointer or RTTI)
        report.append("### Context: 16 bytes before vtable base\n\n");
        try {
            Address preAddr = makeAddr(VTABLE_BASE - 16);
            byte[] preBytes = new byte[16];
            mem.getBytes(preAddr, preBytes);
            StringBuilder hexDump = new StringBuilder();
            for (int b = 0; b < 16; b++) {
                if (b > 0 && b % 8 == 0) hexDump.append("  ");
                hexDump.append(String.format("%02x ", preBytes[b] & 0xFF));
            }
            report.append("```\n" + hexDump.toString().trim() + "\n```\n\n");
            // Interpret as two 64-bit LE values
            long v1 = 0, v2 = 0;
            for (int b = 0; b < 8; b++) { v1 |= ((long)(preBytes[b] & 0xFF)) << (b * 8); }
            for (int b = 0; b < 8; b++) { v2 |= ((long)(preBytes[8 + b] & 0xFF)) << (b * 8); }
            report.append("Pre-vtable values: `0x" + Long.toHexString(v1) + "`, `0x" + Long.toHexString(v2) + "`\n\n");
        } catch (Exception e) {
            report.append("(read error: " + e.getMessage() + ")\n\n");
        }

        // Also check if the vtable address itself is a DATA reference target
        report.append("### References TO vtable base 0x" + Long.toHexString(VTABLE_BASE) + "\n\n");
        Address vtableAddr = makeAddr(VTABLE_BASE);
        ReferenceIterator vtableRefs = refMgr.getReferencesTo(vtableAddr);
        int refCount = 0;
        while (vtableRefs.hasNext()) {
            Reference ref = vtableRefs.next();
            Function refFunc = fm.getFunctionContaining(ref.getFromAddress());
            String refFuncName = refFunc != null ? refFunc.getName() : "(unknown)";
            long refFuncAddr = refFunc != null ? refFunc.getEntryPoint().getOffset() : 0;
            report.append("- From `0x" + Long.toHexString(ref.getFromAddress().getOffset()) +
                "` in `" + refFuncName + "` @ `0x" + Long.toHexString(refFuncAddr) +
                "` (type: " + ref.getReferenceType() + ")\n");
            refCount++;
        }
        if (refCount == 0) {
            report.append("(no direct references found - may be loaded via ADRP+ADD)\n");
            // Try searching for the page and offset
            long page = VTABLE_BASE & ~0xFFF;
            long pageOff = VTABLE_BASE & 0xFFF;
            report.append("Page: 0x" + Long.toHexString(page) + ", offset: 0x" + Long.toHexString(pageOff) + "\n");

            // Search for references to the page
            Address pageAddr = makeAddr(page);
            ReferenceIterator pageRefs = refMgr.getReferencesTo(pageAddr);
            int pageRefCount = 0;
            while (pageRefs.hasNext() && pageRefCount < 20) {
                Reference ref = pageRefs.next();
                Function refFunc = fm.getFunctionContaining(ref.getFromAddress());
                String refFuncName = refFunc != null ? refFunc.getName() : "(unknown)";
                report.append("  - Page ref from `0x" + Long.toHexString(ref.getFromAddress().getOffset()) +
                    "` in `" + refFuncName + "`\n");
                pageRefCount++;
            }
        }
        report.append("\n");

        // ════════════════════════════════════════════════════════════════
        // PHASE 2: Decompile vtable target functions
        // ════════════════════════════════════════════════════════════════
        println("\n[vtable] === Phase 2: Decompiling vtable targets ===");
        report.append("## Phase 2: Vtable Function Decompilations\n\n");

        Set<Long> allDecompiledFuncs = new LinkedHashSet<>();

        for (int i = 0; i < VTABLE_ENTRY_COUNT; i++) {
            long ptr = vtablePtrs[i];
            if (ptr == 0) continue;

            Function func = fm.getFunctionAt(makeAddr(ptr));
            if (func == null) func = fm.getFunctionContaining(makeAddr(ptr));
            if (func == null) {
                report.append("### Vtable[" + i + "] @ `0x" + Long.toHexString(ptr) + "` — NO FUNCTION\n\n");
                continue;
            }

            long ep = func.getEntryPoint().getOffset();
            if (allDecompiledFuncs.contains(ep)) {
                report.append("### Vtable[" + i + "] — same as previously decompiled `" +
                    func.getName() + "` @ `0x" + Long.toHexString(ep) + "`\n\n");
                continue;
            }
            allDecompiledFuncs.add(ep);

            println("[vtable]   Decompiling vtable[" + i + "]: " + func.getName() + " @ 0x" + Long.toHexString(ep));
            report.append("### Vtable[" + i + "]: `" + func.getName() + "` @ `0x" + Long.toHexString(ep) + "`\n\n");

            String code = decompFunc(func);
            if (code == null) {
                report.append("(decompile failed)\n\n");
                continue;
            }

            // Analyze
            List<String> findings = analyzeCode(code);
            if (!findings.isEmpty()) {
                report.append("**Findings:** " + String.join(", ", findings) + "\n\n");
            }

            // Callees
            List<Long> callees = findCallees(ep);
            if (!callees.isEmpty()) {
                report.append("**Calls:** ");
                int shown = 0;
                for (long callee : callees) {
                    Function cf = fm.getFunctionAt(makeAddr(callee));
                    report.append("`" + (cf != null ? cf.getName() : "?") + "`@0x" + Long.toHexString(callee) + " ");
                    shown++;
                    if (shown >= 30) { report.append("..."); break; }
                }
                report.append("\n\n");
            }

            // Callers
            List<Long> callers = findCallers(ep);
            if (!callers.isEmpty()) {
                report.append("**Called by:** ");
                for (long caller : callers) {
                    Function cf = fm.getFunctionAt(makeAddr(caller));
                    report.append("`" + (cf != null ? cf.getName() : "?") + "`@0x" + Long.toHexString(caller) + " ");
                }
                report.append("\n\n");
            }

            report.append("```c\n" + code + "\n```\n\n---\n\n");
        }

        // ════════════════════════════════════════════════════════════════
        // PHASE 3: Decompile the three known network thread functions
        // ════════════════════════════════════════════════════════════════
        println("\n[vtable] === Phase 3: Known network thread functions ===");
        report.append("## Phase 3: Network Thread Key Functions\n\n");

        long[][] knownFuncs = {
            { FUN_NETWORK_MAIN_LOOP, 0 },  // 0 = no truncation limit
            { FUN_RESPONSE_PROCESSOR, 0 },
            { FUN_PAYLOAD_BUILDER, 0 },
        };
        String[] knownNames = {
            "FUN_100148ab0 (Network Thread Main Loop)",
            "FUN_10014848c (Response Processor)",
            "FUN_10014e2cc (Payload Builder / Handshake)",
        };

        for (int i = 0; i < knownFuncs.length; i++) {
            long addr = knownFuncs[i][0];
            Function func = fm.getFunctionAt(makeAddr(addr));
            if (func == null) func = fm.getFunctionContaining(makeAddr(addr));

            report.append("### " + knownNames[i] + "\n\n");

            if (func == null) {
                report.append("(no function at 0x" + Long.toHexString(addr) + ")\n\n");
                continue;
            }

            long ep = func.getEntryPoint().getOffset();
            allDecompiledFuncs.add(ep);

            println("[vtable]   Decompiling " + knownNames[i]);

            String code = decompFunc(func);
            if (code == null) {
                report.append("(decompile failed)\n\n");
                continue;
            }

            // Analyze
            List<String> findings = analyzeCode(code);
            if (!findings.isEmpty()) {
                report.append("**Findings:** " + String.join(", ", findings) + "\n\n");
            }

            // Callees
            List<Long> callees = findCallees(ep);
            if (!callees.isEmpty()) {
                report.append("**Calls:** ");
                int shown = 0;
                for (long callee : callees) {
                    Function cf = fm.getFunctionAt(makeAddr(callee));
                    report.append("`" + (cf != null ? cf.getName() : "?") + "`@0x" + Long.toHexString(callee) + " ");
                    shown++;
                    if (shown >= 30) { report.append("..."); break; }
                }
                report.append("\n\n");
            }

            // Callers
            List<Long> callers = findCallers(ep);
            if (!callers.isEmpty()) {
                report.append("**Called by:** ");
                for (long caller : callers) {
                    Function cf = fm.getFunctionAt(makeAddr(caller));
                    report.append("`" + (cf != null ? cf.getName() : "?") + "`@0x" + Long.toHexString(caller) + " ");
                }
                report.append("\n\n");
            }

            report.append("```c\n" + code + "\n```\n\n---\n\n");
        }

        // ════════════════════════════════════════════════════════════════
        // PHASE 4: Trace callers of response processor and payload builder
        // ════════════════════════════════════════════════════════════════
        println("\n[vtable] === Phase 4: Caller context for response processor and payload builder ===");
        report.append("## Phase 4: Caller Context\n\n");

        long[] traceTargets = { FUN_RESPONSE_PROCESSOR, FUN_PAYLOAD_BUILDER };
        String[] traceNames = { "Response Processor (FUN_10014848c)", "Payload Builder (FUN_10014e2cc)" };

        for (int t = 0; t < traceTargets.length; t++) {
            report.append("### Callers of " + traceNames[t] + "\n\n");
            List<Long> callers = findCallers(traceTargets[t]);

            if (callers.isEmpty()) {
                report.append("(no callers found via xref)\n\n");
                continue;
            }

            for (long caller : callers) {
                if (allDecompiledFuncs.contains(caller)) {
                    Function cf = fm.getFunctionAt(makeAddr(caller));
                    report.append("#### `" + (cf != null ? cf.getName() : "?") +
                        "` @ `0x" + Long.toHexString(caller) + "` (already decompiled above)\n\n");
                    continue;
                }
                allDecompiledFuncs.add(caller);

                Function cf = fm.getFunctionAt(makeAddr(caller));
                if (cf == null) cf = fm.getFunctionContaining(makeAddr(caller));
                if (cf == null) {
                    report.append("#### Unknown caller @ `0x" + Long.toHexString(caller) + "`\n\n");
                    continue;
                }

                println("[vtable]   Decompiling caller: " + cf.getName());
                report.append("#### `" + cf.getName() + "` @ `0x" + Long.toHexString(caller) + "`\n\n");

                String code = decompFunc(cf);
                if (code == null) {
                    report.append("(decompile failed)\n\n");
                    continue;
                }

                List<String> findings = analyzeCode(code);
                if (!findings.isEmpty()) {
                    report.append("**Findings:** " + String.join(", ", findings) + "\n\n");
                }

                String truncCode = code.length() > 15000 ? code.substring(0, 15000) + "\n// ...truncated..." : code;
                report.append("```c\n" + truncCode + "\n```\n\n---\n\n");
            }
        }

        // ════════════════════════════════════════════════════════════════
        // PHASE 5: Deep-dive into functions called by vtable entries
        //          and the three known functions - decompile their callees
        // ════════════════════════════════════════════════════════════════
        println("\n[vtable] === Phase 5: Decompile callees of vtable + known functions ===");
        report.append("## Phase 5: Callee Deep Dive (functions called by vtable entries)\n\n");

        // Collect all unique callees from vtable functions and known functions
        Set<Long> calleeSet = new LinkedHashSet<>();
        for (long ep : allDecompiledFuncs) {
            List<Long> callees = findCallees(ep);
            for (long callee : callees) {
                if (!allDecompiledFuncs.contains(callee)) {
                    calleeSet.add(callee);
                }
            }
        }

        println("[vtable]   Found " + calleeSet.size() + " unique callees to examine");
        report.append("Examining " + calleeSet.size() + " callees not yet decompiled\n\n");

        int calleeCount = 0;
        for (long calleeAddr : calleeSet) {
            Function func = fm.getFunctionAt(makeAddr(calleeAddr));
            if (func == null) func = fm.getFunctionContaining(makeAddr(calleeAddr));
            if (func == null) continue;

            // Quick decompile to check for interesting patterns
            String code = decompFunc(func);
            if (code == null) continue;

            List<String> findings = analyzeCode(code);

            // Only report functions that have interesting findings
            boolean hasXor = false;
            boolean hasMod8 = false;
            boolean hasHandshake = false;
            boolean hasCrypto = false;
            for (String f : findings) {
                if (f.startsWith("XOR")) hasXor = true;
                if (f.startsWith("MOD8")) hasMod8 = true;
                if (f.startsWith("HANDSHAKE")) hasHandshake = true;
                if (f.startsWith("CRYPTO_KW")) hasCrypto = true;
            }

            // Report everything that has XOR, mod8, handshake constants, or crypto keywords
            // Also report functions that touch buffers and have network ops
            boolean isInteresting = hasXor || hasMod8 || hasHandshake || hasCrypto;

            // Also check for buffer construction with memset/memcpy
            boolean hasBufConstruction = (code.contains("memset") || code.contains("memcpy")) &&
                (code.contains("0x80") || code.contains("128") || code.contains("0x86") || code.contains("136"));

            if (isInteresting || hasBufConstruction) {
                long ep = func.getEntryPoint().getOffset();
                allDecompiledFuncs.add(ep);
                calleeCount++;

                report.append("### Callee: `" + func.getName() + "` @ `0x" + Long.toHexString(ep) + "`\n\n");
                if (!findings.isEmpty()) {
                    report.append("**Findings:** " + String.join(", ", findings) + "\n\n");
                }
                if (hasBufConstruction) {
                    report.append("**Buffer construction detected (memset/memcpy + size constants)**\n\n");
                }

                report.append("```c\n" + code + "\n```\n\n---\n\n");
            }
        }
        println("[vtable]   Reported " + calleeCount + " interesting callees");

        // ════════════════════════════════════════════════════════════════
        // PHASE 6: Second-level callees (callees of callees) for XOR hunt
        // ════════════════════════════════════════════════════════════════
        println("\n[vtable] === Phase 6: Second-level callee hunt for XOR ===");
        report.append("## Phase 6: Second-Level Callee XOR Hunt\n\n");

        Set<Long> level2Callees = new LinkedHashSet<>();
        for (long ep : calleeSet) {
            List<Long> callees2 = findCallees(ep);
            for (long c : callees2) {
                if (!allDecompiledFuncs.contains(c) && !calleeSet.contains(c)) {
                    level2Callees.add(c);
                }
            }
        }

        println("[vtable]   Checking " + level2Callees.size() + " second-level callees");
        int l2Count = 0;
        for (long addr : level2Callees) {
            Function func = fm.getFunctionAt(makeAddr(addr));
            if (func == null) func = fm.getFunctionContaining(makeAddr(addr));
            if (func == null) continue;

            String code = decompFunc(func);
            if (code == null) continue;

            List<String> findings = analyzeCode(code);
            boolean hasXor = false;
            boolean hasMod8 = false;
            boolean hasCrypto = false;
            for (String f : findings) {
                if (f.startsWith("XOR")) hasXor = true;
                if (f.startsWith("MOD8")) hasMod8 = true;
                if (f.startsWith("CRYPTO_KW")) hasCrypto = true;
            }

            if (hasXor || hasMod8 || hasCrypto) {
                long ep = func.getEntryPoint().getOffset();
                allDecompiledFuncs.add(ep);
                l2Count++;

                report.append("### L2 Callee: `" + func.getName() + "` @ `0x" + Long.toHexString(ep) + "`\n\n");
                report.append("**Findings:** " + String.join(", ", findings) + "\n\n");

                // Show callers
                List<Long> callers = findCallers(ep);
                if (!callers.isEmpty()) {
                    report.append("**Called by:** ");
                    for (long caller : callers) {
                        Function cf = fm.getFunctionAt(makeAddr(caller));
                        report.append("`" + (cf != null ? cf.getName() : "?") + "`@0x" + Long.toHexString(caller) + " ");
                    }
                    report.append("\n\n");
                }

                report.append("```c\n" + code + "\n```\n\n---\n\n");
            }
        }
        println("[vtable]   Reported " + l2Count + " second-level XOR candidates");

        // ════════════════════════════════════════════════════════════════
        // PHASE 7: Specifically resolve the +0x6b8 vtable dispatch targets
        //          The socket class at object+0x6b8 has method pointers at
        //          offsets +0x10, +0x18, +0x20, +0x28, +0x30, +0x38, +0x40
        //          Try reading them as data at (vtable_base + offset)
        // ════════════════════════════════════════════════════════════════
        println("\n[vtable] === Phase 7: +0x6b8 dispatch slot resolution ===");
        report.append("## Phase 7: +0x6b8 Dispatch Method Slots\n\n");

        int[] dispatchOffsets = { 0x10, 0x18, 0x20, 0x28, 0x30, 0x38, 0x40 };
        for (int off : dispatchOffsets) {
            long slotAddr = VTABLE_BASE + off;
            Address addr = makeAddr(slotAddr);
            long value = 0;
            try {
                value = mem.getLong(addr);
            } catch (Exception e) {
                try {
                    byte[] bytes = new byte[8];
                    mem.getBytes(addr, bytes);
                    for (int b = 0; b < 8; b++) {
                        value |= ((long)(bytes[b] & 0xFF)) << (b * 8);
                    }
                } catch (Exception e2) {
                    report.append("Slot +0x" + Integer.toHexString(off) + ": read error\n");
                    continue;
                }
            }

            Function func = fm.getFunctionAt(makeAddr(value));
            if (func == null) func = fm.getFunctionContaining(makeAddr(value));
            String funcName = func != null ? func.getName() + " @ 0x" + Long.toHexString(func.getEntryPoint().getOffset()) : "(no function)";

            report.append("### Slot +0x" + Integer.toHexString(off) + " -> `0x" + Long.toHexString(value) + "` = `" + funcName + "`\n\n");

            if (func != null && !allDecompiledFuncs.contains(func.getEntryPoint().getOffset())) {
                allDecompiledFuncs.add(func.getEntryPoint().getOffset());
                String code = decompFunc(func);
                if (code != null) {
                    List<String> findings = analyzeCode(code);
                    if (!findings.isEmpty()) {
                        report.append("**Findings:** " + String.join(", ", findings) + "\n\n");
                    }
                    report.append("```c\n" + code + "\n```\n\n---\n\n");
                } else {
                    report.append("(decompile failed)\n\n");
                }
            } else if (func != null) {
                report.append("(already decompiled above)\n\n");
            }
        }

        // ════════════════════════════════════════════════════════════════
        // PHASE 8: Search functions in 0x100148000-0x10014f000 for XOR
        //          (the broader neighborhood of the network thread)
        // ════════════════════════════════════════════════════════════════
        println("\n[vtable] === Phase 8: Neighborhood scan for XOR (0x100148000-0x10014f000) ===");
        report.append("## Phase 8: Network Thread Neighborhood Scan\n\n");

        Address scanStart = makeAddr(0x100148000L);
        long scanEnd = 0x10014f000L;
        FunctionIterator funcIter = fm.getFunctions(scanStart, true);
        int neighborXorCount = 0;

        while (funcIter.hasNext() && !monitor.isCancelled()) {
            Function func = funcIter.next();
            long ep = func.getEntryPoint().getOffset();
            if (ep > scanEnd) break;
            if (allDecompiledFuncs.contains(ep)) continue;

            String code = decompFunc(func);
            if (code == null) continue;

            boolean hasXor = code.contains(" ^ ") || code.contains("^=");
            boolean hasMod8 = code.contains("% 8") || code.contains("& 7") || code.contains("& 0x7");
            boolean hasHandshake = code.contains("0x86") || code.contains("0x88") ||
                code.contains("memset") && (code.contains("0x80") || code.contains("128"));

            if (hasXor || hasMod8 || hasHandshake) {
                neighborXorCount++;
                allDecompiledFuncs.add(ep);
                report.append("### `" + func.getName() + "` @ `0x" + Long.toHexString(ep) + "`\n\n");

                List<String> findings = analyzeCode(code);
                if (!findings.isEmpty()) {
                    report.append("**Findings:** " + String.join(", ", findings) + "\n\n");
                }

                report.append("```c\n" + code + "\n```\n\n---\n\n");
            }
        }
        println("[vtable]   Found " + neighborXorCount + " XOR functions in neighborhood");

        // ════════════════════════════════════════════════════════════════
        // PHASE 9: Summary of all XOR / encryption hits
        // ════════════════════════════════════════════════════════════════
        report.append("## Summary\n\n");
        report.append("Total functions decompiled: " + allDecompiledFuncs.size() + "\n\n");
        report.append("Vtable entries read: " + VTABLE_ENTRY_COUNT + " from `0x" + Long.toHexString(VTABLE_BASE) + "`\n\n");

        // ════════════════════════════════════════════════════════════════
        // Cleanup
        // ════════════════════════════════════════════════════════════════
        decomp.dispose();

        String filepath = outputDir + "/vtable_trace.md";
        FileWriter fw = new FileWriter(filepath);
        fw.write(report.toString());
        fw.close();
        println("\n[vtable] Wrote " + filepath + " (" + report.length() + " bytes)");
        println("[vtable] === COMPLETE ===");
    }

    // ════════════════════════════════════════════════════════════════
    // Utility methods
    // ════════════════════════════════════════════════════════════════

    private Address makeAddr(long offset) {
        return af.getAddress("0x" + Long.toHexString(offset));
    }

    /**
     * Analyze decompiled C code for patterns of interest.
     * Returns a list of tags/findings.
     */
    private List<String> analyzeCode(String code) {
        List<String> findings = new ArrayList<>();

        // XOR operations
        if (code.contains(" ^ ")) findings.add("XOR_OP");
        if (code.contains("^=")) findings.add("XOR_ASSIGN");

        // Modular 8 access (key cycling)
        if (code.contains("% 8")) findings.add("MOD8_PERCENT");
        if (code.contains("& 7")) findings.add("MOD8_AND7");
        if (code.contains("& 0x7")) findings.add("MOD8_AND0x7");

        // Handshake size constants
        if (code.contains("0x86")) findings.add("HANDSHAKE_0x86");
        if (code.contains("0x88")) findings.add("HANDSHAKE_0x88");

        // Buffer padding
        if (code.contains("memset") && (code.contains("0x80") || code.contains(",128"))) {
            findings.add("MEMSET_128");
        }

        // htons/byte-swap
        if (code.contains("htons")) findings.add("HTONS");
        if (code.contains("ntohs")) findings.add("NTOHS");
        if (code.contains(">> 8") && code.contains("<< 8")) findings.add("BYTE_SWAP");

        // Crypto keywords
        String codeLower = code.toLowerCase();
        for (String kw : CRYPTO_KEYWORDS) {
            if (codeLower.contains(kw)) {
                findings.add("CRYPTO_KW_" + kw);
            }
        }

        // Network operations
        if (code.contains("send(") || code.contains("_send(")) findings.add("NET_SEND");
        if (code.contains("recv(") || code.contains("_recv(")) findings.add("NET_RECV");
        if (code.contains("write(") || code.contains("_write(")) findings.add("NET_WRITE");
        if (code.contains("read(") || code.contains("_read(")) findings.add("NET_READ");
        if (code.contains("connect(") || code.contains("_connect(")) findings.add("NET_CONNECT");
        if (code.contains("socket(") || code.contains("_socket(")) findings.add("NET_SOCKET");
        if (code.contains("select(")) findings.add("NET_SELECT");
        if (code.contains("poll(")) findings.add("NET_POLL");
        if (code.contains("close(") || code.contains("_close(")) findings.add("NET_CLOSE");

        // Loop patterns (XOR in loop = strong encryption signal)
        if ((code.contains(" ^ ") || code.contains("^=")) &&
            (code.contains("while") || code.contains("for ("))) {
            findings.add("XOR_IN_LOOP");
        }

        // Specific object offsets from the socket class
        if (code.contains("0x6b8")) findings.add("OBJ_VTABLE_6B8");
        if (code.contains("0x4e8") || code.contains("0x4c8")) findings.add("OBJ_SOCKET_FIELDS");
        if (code.contains("0x528") || code.contains("0x530")) findings.add("OBJ_STATE_FIELDS");

        return findings;
    }

    private String decompFunc(Function func) {
        if (func == null) return null;
        try {
            DecompileResults result = decomp.decompileFunction(func, 300, monitor);
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
