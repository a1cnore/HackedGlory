// Complete trophy data flow trace: server parse -> model -> UI render.
// Traces trophyCase parsing, value==-1 filtering, visibility gating,
// ranked tab display, and trophy error conditions.
// @category Analysis

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;

public class GhidraTrophyDataFlow extends GhidraScript {
    private DecompInterface decomp;
    private StringBuilder report;
    private Set<Address> globalSeen = new HashSet<>();

    @Override
    public void run() throws Exception {
        String outputDir = "/tmp/vgf_ghidra_reports";
        new File(outputDir).mkdirs();

        decomp = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        opts.setMaxPayloadMBytes(128);
        decomp.setOptions(opts);
        decomp.openProgram(currentProgram);

        report = new StringBuilder();
        report.append("# Trophy Data Flow: Complete Server-to-UI Trace\n\n");
        report.append("Generated: ").append(new java.util.Date()).append("\n\n");
        report.append("---\n\n");

        // ═══════════════════════════════════════════════════════════════
        // PHASE 1: trophyCase string xrefs — find ALL server parsers
        // ═══════════════════════════════════════════════════════════════
        report.append("# Phase 1: trophyCase String Cross-References\n\n");
        report.append("Finding all functions that reference the \"trophyCase\" string.\n\n");

        // Known address from user: 0x10141c1c0
        // But also search for it in case there are multiple instances
        traceTrophyCaseXrefs();

        // ═══════════════════════════════════════════════════════════════
        // PHASE 2: Individual trophy entry parser FUN_100507640
        // ═══════════════════════════════════════════════════════════════
        report.append("\n---\n\n# Phase 2: Trophy Entry Parser (FUN_100507640)\n\n");
        report.append("This function references both \"trophy_name\" and \"trophy_type\" — ");
        report.append("it parses individual trophy entries from the JSON array.\n\n");

        decompileAndTrace(0x100507640L, "Trophy Entry Parser", 3, true);

        // Also trace trophy_name and trophy_type string xrefs specifically
        report.append("## trophy_name string xrefs\n\n");
        traceStringXrefs("trophy_name", 3);
        report.append("## trophy_type string xrefs\n\n");
        traceStringXrefs("trophy_type", 3);
        report.append("## value_type string xrefs\n\n");
        traceStringXrefs("value_type", 2);
        report.append("## season string xrefs (in trophy context)\n\n");
        // "season" is too common, search for it near trophy code range
        traceStringInRange("season", 0x100500000L, 0x100520000L);

        // ═══════════════════════════════════════════════════════════════
        // PHASE 3: Value field handling — trace what happens to "value"
        // ═══════════════════════════════════════════════════════════════
        report.append("\n---\n\n# Phase 3: Value Field Handling\n\n");
        report.append("Tracing how the \"value\" field from trophyCase entries is processed.\n");
        report.append("Looking for value==-1 checks, sign bit checks, and storage patterns.\n\n");

        // Search for the "value" string xrefs near trophy parsing code
        report.append("## \"value\" string xrefs in trophy parser range\n\n");
        traceStringInRange("value", 0x100500000L, 0x100520000L);

        // Direct decompile of functions near trophy parsing that might check value
        // FUN_10050c2bc is known to be trophyCase-related
        report.append("## FUN_10050c2bc (trophyCase handler)\n\n");
        decompileAndTrace(0x10050c2bcL, "TrophyCase Handler", 3, true);

        // Search for -1 comparison patterns in the trophy code range
        report.append("## Scanning for value==-1 / value<0 patterns\n\n");
        scanForNegativeOneChecks();

        // ═══════════════════════════════════════════════════════════════
        // PHASE 4: Ranked tab visibility — MENU_PROFILE_TAB_RANKED_5V5
        // ═══════════════════════════════════════════════════════════════
        report.append("\n---\n\n# Phase 4: Ranked Tab Visibility\n\n");
        report.append("Finding functions that reference MENU_PROFILE_TAB_RANKED_5V5 ");
        report.append("to understand ranked tab show/hide logic.\n\n");

        // Known address: 0x1013e48f7
        report.append("## MENU_PROFILE_TAB_RANKED_5V5 xrefs\n\n");
        traceStringXrefs("MENU_PROFILE_TAB_RANKED_5V5", 3);

        report.append("## MENU_PROFILE_TAB_RANKED_3V3 xrefs\n\n");
        traceStringXrefs("MENU_PROFILE_TAB_RANKED_3V3", 3);

        report.append("## MENU_PROFILE_TAB_OVERVIEW xrefs\n\n");
        traceStringXrefs("MENU_PROFILE_TAB_OVERVIEW", 2);

        // Scan for visibility bit patterns in the ranked/trophy code range
        report.append("## Visibility bit pattern scan (& 0xfffffffb / | 0x4)\n\n");
        scanForVisibilityPatterns();

        // ═══════════════════════════════════════════════════════════════
        // PHASE 5: Trophy data population chain
        // ═══════════════════════════════════════════════════════════════
        report.append("\n---\n\n# Phase 5: Trophy Data Population Chain\n\n");
        report.append("Following the chain from server response parsing to UI struct population.\n\n");

        // FUN_100503314 — profile data handler (calls trophy parsers)
        report.append("## FUN_100503314 (Profile Data Handler)\n\n");
        decompileAndTrace(0x100503314L, "Profile Data Handler", 2, true);

        // The key trophy struct population functions
        report.append("## FUN_1002604c4 (Trophy Data Population / Layout)\n\n");
        decompileAndTrace(0x1002604c4L, "Trophy Layout", 2, false);

        // FUN_100265bd4 — trophy section renderer (checks +0x18f21 flag)
        report.append("## FUN_100265bd4 (Trophy Section Renderer)\n\n");
        report.append("CRITICAL: This function checks *(char*)(param_1 + 0x18f21) != 0 as a gate.\n");
        report.append("If the flag at offset 0x18f21 is zero, the ENTIRE trophy section is skipped.\n\n");
        decompileAndTrace(0x100265bd4L, "Trophy Renderer", 2, false);

        // Who SETS the flag at +0x18f21?
        report.append("## Searching for writers of the +0x18f21 trophy enable flag\n\n");
        scanForFlagWriters(0x18f21);

        // ═══════════════════════════════════════════════════════════════
        // PHASE 6: MENU_TROPHY_DATA_ERROR condition
        // ═══════════════════════════════════════════════════════════════
        report.append("\n---\n\n# Phase 6: MENU_TROPHY_DATA_ERROR Condition\n\n");
        report.append("String at 0x1013e9319. Finding what triggers the error state.\n\n");

        traceStringXrefs("MENU_TROPHY_DATA_ERROR", 3);

        // FUN_10025fd1c references it — already traced, but let's focus on the
        // error display logic and what hides it
        report.append("## FUN_10025fd1c (Trophy Sub-Panel Constructor)\n\n");
        report.append("This sets up MENU_TROPHY_DATA_ERROR as default text on the error label.\n");
        report.append("The error label is at param_1 + 0x2e7 and gets shown/hidden by FUN_100530adc.\n\n");
        decompileAndTrace(0x10025fd1cL, "Trophy SubPanel Ctor", 1, false);

        // ═══════════════════════════════════════════════════════════════
        // PHASE 7: The complete server-to-model chain
        // ═══════════════════════════════════════════════════════════════
        report.append("\n---\n\n# Phase 7: Server Response to Model Storage\n\n");
        report.append("Tracing startSessionForPlayer -> playerInfo -> trophyCase parse chain.\n\n");

        // Functions that read from JSON and store into the player model
        report.append("## startSessionForPlayer string xrefs\n\n");
        traceStringXrefs("startSessionForPlayer", 2);

        report.append("## playerInfo string xrefs\n\n");
        traceStringXrefs("playerInfo", 2);

        report.append("## getTrophyCase string xrefs\n\n");
        traceStringXrefs("getTrophyCase", 2);

        report.append("## skillProgressionInfo string xrefs\n\n");
        traceStringXrefs("skillProgressionInfo", 2);

        report.append("## seasonMaxSkillTier string xrefs\n\n");
        traceStringXrefs("seasonMaxSkillTier", 2);

        // ═══════════════════════════════════════════════════════════════
        // PHASE 8: Functions near the trophy entry parser
        // ═══════════════════════════════════════════════════════════════
        report.append("\n---\n\n# Phase 8: Neighborhood Functions Around Trophy Parser\n\n");
        report.append("Decompiling functions adjacent to FUN_100507640 to find the loop ");
        report.append("that iterates over the trophyCase array and the value filtering.\n\n");

        // Functions near 0x100507640 that might be the array iterator
        long[] neighbors = {
            0x100507400L, 0x100507500L, 0x100507580L, 0x100507600L,
            0x100507640L, // the main one
            0x100507800L, 0x100507900L, 0x100507a00L,
            0x10050c000L, 0x10050c100L, 0x10050c200L, 0x10050c2bcL,
            0x10050c400L, 0x10050c500L,
        };
        for (long addr : neighbors) {
            Function f = getFuncContaining(addr);
            if (f != null && !globalSeen.contains(f.getEntryPoint())) {
                globalSeen.add(f.getEntryPoint());
                String code = decompFunc(f, 180);
                if (code != null && (code.contains("trophy") || code.contains("value") ||
                    code.contains("season") || code.contains("0xffffffff") ||
                    code.contains("-1") || code.contains("trophyCase") ||
                    code.contains("0x18f21") || code.contains("0x18ef8") ||
                    code.length() > 200)) {
                    report.append("### `").append(f.getName()).append("` @ `0x");
                    report.append(Long.toHexString(f.getEntryPoint().getOffset())).append("`\n\n");
                    if (code.length() > 15000) code = code.substring(0, 15000) + "\n// ...truncated...";
                    report.append("```c\n").append(code).append("\n```\n\n");
                }
            }
        }

        // ═══════════════════════════════════════════════════════════════
        // PHASE 9: The ranked skill tier display function
        // ═══════════════════════════════════════════════════════════════
        report.append("\n---\n\n# Phase 9: Ranked Skill Tier Display\n\n");

        report.append("## FUN_10025c044 (Ranked Profile Constructor)\n\n");
        decompileAndTrace(0x10025c044L, "Ranked Profile Ctor", 2, true);

        report.append("## FUN_10026609c (Trophy Tab Switcher)\n\n");
        decompileAndTrace(0x10026609cL, "Trophy Tab Switcher", 2, false);

        report.append("## FUN_1002654ec (Profile Refresh)\n\n");
        decompileAndTrace(0x1002654ecL, "Profile Refresh", 2, true);

        // ═══════════════════════════════════════════════════════════════
        // PHASE 10: Visibility clearing in trophy sub-panel constructor
        // ═══════════════════════════════════════════════════════════════
        report.append("\n---\n\n# Phase 10: Visibility Clearing Analysis\n\n");
        report.append("The trophy sub-panel constructor (FUN_10025fd1c) has these key patterns:\n");
        report.append("- `*(uint*)((long)param_1 + 0x6a4) & 0xfffffffb` — clears bit 2 (VISIBLE bit)\n");
        report.append("- `*(uint*)((long)param_1 + 0xc94) & 0xfffffffb` — clears bit 2 on second panel\n");
        report.append("- `*(uint*)((long)param_1 + 0x3f8c) & 0xfffffffb` — clears bit 2 on ranked section\n\n");
        report.append("These all clear the visibility bit at construction time.\n");
        report.append("Something must later SET bit 2 (`| 0x4`) to make them visible.\n\n");

        // Find who sets bit 2 back — search for | 0x4 near these offsets
        report.append("## Functions that set visibility (| 0x4) on trophy panels\n\n");
        scanForVisibilitySetters();

        // ═══════════════════════════════════════════════════════════════
        // PHASE 11: Trophy list clear function and the count/array storage
        // ═══════════════════════════════════════════════════════════════
        report.append("\n---\n\n# Phase 11: Trophy Storage Structure\n\n");
        report.append("## FUN_1002603e8 (Trophy List Clear)\n\n");
        decompileAndTrace(0x1002603e8L, "Trophy List Clear", 1, false);

        report.append("## FUN_100260d6c (Trophy Entry Adder)\n\n");
        decompileAndTrace(0x100260d6cL, "Trophy Entry Adder", 1, false);

        report.append("## FUN_100260dd0 (Trophy Display Refresh)\n\n");
        decompileAndTrace(0x100260dd0L, "Trophy Display Refresh", 1, false);

        // ═══════════════════════════════════════════════════════════════
        // PHASE 12: endOfSeasonRewards and seasonal data
        // ═══════════════════════════════════════════════════════════════
        report.append("\n---\n\n# Phase 12: Season Reward & Trophy Enable Signals\n\n");

        report.append("## endOfSeasonRewards string xrefs\n\n");
        traceStringXrefs("endOfSeasonRewards", 2);

        report.append("## trophyCaseDisplayEnabled string xrefs\n\n");
        traceStringXrefs("trophyCaseDisplayEnabled", 2);

        report.append("## trophyDisplayEnabled string xrefs\n\n");
        traceStringXrefs("trophyDisplayEnabled", 2);

        report.append("## hasTrophies string xrefs\n\n");
        traceStringXrefs("hasTrophies", 2);

        report.append("## showTrophies string xrefs\n\n");
        traceStringXrefs("showTrophies", 2);

        // Write output
        String filepath = outputDir + "/trophy_data_flow.md";
        FileWriter fw = new FileWriter(filepath);
        fw.write(report.toString());
        fw.close();
        decomp.dispose();
        println("[trophy-flow] Wrote " + filepath + " (" + report.length() + " bytes)");
    }

    // ══════════════════════════════════════════════════════════════════
    // Phase 1 helper: trace ALL xrefs to the "trophyCase" string
    // ══════════════════════════════════════════════════════════════════
    private void traceTrophyCaseXrefs() {
        List<Address> addrs = findStringAddresses("trophyCase");

        // Also try the known address directly
        Address knownAddr = toAddr(0x10141c1c0L);
        boolean hasKnown = false;
        for (Address a : addrs) {
            if (a.getOffset() == 0x10141c1c0L) { hasKnown = true; break; }
        }
        if (!hasKnown) addrs.add(0, knownAddr);

        report.append("**String addresses found:** ");
        for (int i = 0; i < addrs.size(); i++) {
            if (i > 0) report.append(", ");
            report.append("`0x").append(Long.toHexString(addrs.get(i).getOffset())).append("`");
        }
        report.append("\n\n");

        FunctionManager fm = currentProgram.getFunctionManager();
        ReferenceManager refMgr = currentProgram.getReferenceManager();
        Set<Address> seenFuncs = new HashSet<>();

        for (Address addr : addrs) {
            // Get references to this string address
            ReferenceIterator refs = refMgr.getReferencesTo(addr);
            while (refs.hasNext()) {
                Reference ref = refs.next();
                Function func = fm.getFunctionContaining(ref.getFromAddress());
                if (func == null || seenFuncs.contains(func.getEntryPoint())) continue;
                seenFuncs.add(func.getEntryPoint());

                String funcAddr = "0x" + Long.toHexString(func.getEntryPoint().getOffset());
                report.append("### `").append(func.getName()).append("` @ `").append(funcAddr).append("`\n\n");
                report.append("Referenced from: `0x").append(Long.toHexString(ref.getFromAddress().getOffset()));
                report.append("`\n\n");

                String code = decompFunc(func, 180);
                if (code != null) {
                    if (code.length() > 20000) code = code.substring(0, 20000) + "\n// ...truncated...";
                    report.append("```c\n").append(code).append("\n```\n\n");
                } else {
                    report.append("*Decompilation failed*\n\n");
                }

                // Trace callers (up to 3)
                report.append("**Callers:**\n\n");
                ReferenceIterator callerRefs = refMgr.getReferencesTo(func.getEntryPoint());
                int callerCount = 0;
                while (callerRefs.hasNext() && callerCount < 3) {
                    Reference cRef = callerRefs.next();
                    Function caller = fm.getFunctionContaining(cRef.getFromAddress());
                    if (caller == null || seenFuncs.contains(caller.getEntryPoint())) continue;
                    seenFuncs.add(caller.getEntryPoint());

                    String callerAddr = "0x" + Long.toHexString(caller.getEntryPoint().getOffset());
                    report.append("#### Caller: `").append(caller.getName()).append("` @ `");
                    report.append(callerAddr).append("`\n\n");

                    String callerCode = decompFunc(caller, 120);
                    if (callerCode != null) {
                        if (callerCode.length() > 12000) callerCode = callerCode.substring(0, 12000) + "\n// ...truncated...";
                        report.append("```c\n").append(callerCode).append("\n```\n\n");
                    }
                    callerCount++;
                }
            }

            // Also check for DATA references (pointer references from __DATA)
            // The string might be referenced through ADRP+ADD patterns
            // that create pointer entries in __DATA
            Memory mem = currentProgram.getMemory();
            long strAddrVal = addr.getOffset();
            // Search __DATA for pointers to this string
            long dataStart = 0x101400000L;
            long dataEnd = 0x101500000L;
            List<Long> dataPtrs = new ArrayList<>();
            for (long scan = dataStart; scan < dataEnd; scan += 8) {
                try {
                    Address scanAddr = toAddr(scan);
                    long val = mem.getLong(scanAddr);
                    if (val == strAddrVal) {
                        dataPtrs.add(scan);
                    }
                } catch (MemoryAccessException e) {}
            }
            if (!dataPtrs.isEmpty()) {
                report.append("**__DATA pointers to this string:**\n");
                for (Long ptr : dataPtrs) {
                    report.append("- `0x").append(Long.toHexString(ptr)).append("`\n");
                    // Find xrefs to this pointer
                    Address ptrAddr = toAddr(ptr);
                    ReferenceIterator ptrRefs = refMgr.getReferencesTo(ptrAddr);
                    while (ptrRefs.hasNext()) {
                        Reference pRef = ptrRefs.next();
                        Function pFunc = fm.getFunctionContaining(pRef.getFromAddress());
                        if (pFunc != null && !seenFuncs.contains(pFunc.getEntryPoint())) {
                            report.append("  - Referenced by `").append(pFunc.getName());
                            report.append("` @ `0x").append(Long.toHexString(pFunc.getEntryPoint().getOffset()));
                            report.append("`\n");
                        }
                    }
                }
                report.append("\n");
            }
        }
    }

    // ══════════════════════════════════════════════════════════════════
    // Scan for value == -1 patterns in the binary
    // ══════════════════════════════════════════════════════════════════
    private void scanForNegativeOneChecks() {
        // In ARM64, comparing against -1 (0xFFFFFFFF) can be done with:
        // - CMN Xn, #1 (compare negative, equivalent to CMP Xn, -1)
        // - CMP Wn, #-1 which encodes as CMP Wn, 0xFFFFFFFF
        // In decompiled C, look for == -1, == 0xffffffff, < 0, etc.

        // Strategy: decompile functions in the trophy parser range and search
        // the decompiled output for negative-one patterns
        FunctionManager fm = currentProgram.getFunctionManager();
        report.append("Scanning functions in range 0x100500000-0x10051c000 for value==-1 patterns:\n\n");

        long scanStart = 0x100500000L;
        long scanEnd = 0x10051c000L;

        Address start = toAddr(scanStart);
        Address end = toAddr(scanEnd);
        FunctionIterator fiter = fm.getFunctions(start, true);
        int found = 0;

        while (fiter.hasNext() && found < 30) {
            Function f = fiter.next();
            if (f.getEntryPoint().getOffset() > scanEnd) break;

            String code = decompFunc(f, 60);
            if (code == null) continue;

            // Check for negative-one patterns
            boolean hasNegCheck = code.contains("0xffffffff") ||
                                  code.contains("== -1") ||
                                  code.contains("!= -1") ||
                                  code.contains("< 0") ||
                                  code.contains("== -0x1") ||
                                  (code.contains("value") && (code.contains("< 0") || code.contains("== 0")));

            // Also check for trophy-related strings
            boolean hasTrophyRef = code.contains("trophy") || code.contains("Trophy") ||
                                   code.contains("trophyCase") || code.contains("trophy_name") ||
                                   code.contains("trophy_type") || code.contains("value_type") ||
                                   code.contains("0x18f21") || code.contains("0x18ef8");

            if (hasNegCheck || hasTrophyRef) {
                report.append("### `").append(f.getName()).append("` @ `0x");
                report.append(Long.toHexString(f.getEntryPoint().getOffset())).append("`\n\n");

                if (hasNegCheck) report.append("**Contains negative/zero check pattern**\n\n");
                if (hasTrophyRef) report.append("**Contains trophy-related reference**\n\n");

                if (code.length() > 15000) code = code.substring(0, 15000) + "\n// ...truncated...";
                report.append("```c\n").append(code).append("\n```\n\n");
                found++;
            }
        }

        // Also scan the trophy UI code range
        report.append("Scanning functions in range 0x100260000-0x100268000 for value==-1 patterns:\n\n");
        scanStart = 0x100260000L;
        scanEnd = 0x100268000L;
        start = toAddr(scanStart);
        fiter = fm.getFunctions(start, true);
        found = 0;

        while (fiter.hasNext() && found < 20) {
            Function f = fiter.next();
            if (f.getEntryPoint().getOffset() > scanEnd) break;

            String code = decompFunc(f, 60);
            if (code == null) continue;

            boolean hasNegCheck = code.contains("0xffffffff") ||
                                  code.contains("== -1") ||
                                  code.contains("!= -1") ||
                                  code.contains("< 0");
            boolean hasFlag = code.contains("0x18f21") || code.contains("0x18ef8") ||
                              code.contains("0x18f00") || code.contains("0x18f22");

            if (hasNegCheck || hasFlag) {
                report.append("### `").append(f.getName()).append("` @ `0x");
                report.append(Long.toHexString(f.getEntryPoint().getOffset())).append("`\n\n");
                if (hasNegCheck) report.append("**Contains negative/zero check**\n\n");
                if (hasFlag) report.append("**Contains trophy flag offset**\n\n");
                if (code.length() > 10000) code = code.substring(0, 10000) + "\n// ...truncated...";
                report.append("```c\n").append(code).append("\n```\n\n");
                found++;
            }
        }

        if (found == 0) {
            report.append("*No direct value==-1 patterns found in decompiled output. ");
            report.append("The check may be at the ARM64 instruction level or in a different range.*\n\n");
        }
    }

    // ══════════════════════════════════════════════════════════════════
    // Scan for visibility bit patterns
    // ══════════════════════════════════════════════════════════════════
    private void scanForVisibilityPatterns() {
        report.append("Scanning trophy/profile functions for `& 0xfffffffb` (clear vis) and `| 0x4` (set vis):\n\n");

        FunctionManager fm = currentProgram.getFunctionManager();
        long[][] ranges = {
            {0x10025a000L, 0x10026a000L},  // trophy/profile UI
            {0x100500000L, 0x100514000L},  // trophy parsers
        };

        for (long[] range : ranges) {
            Address start = toAddr(range[0]);
            FunctionIterator fiter = fm.getFunctions(start, true);
            int found = 0;

            while (fiter.hasNext() && found < 20) {
                Function f = fiter.next();
                if (f.getEntryPoint().getOffset() > range[1]) break;

                String code = decompFunc(f, 60);
                if (code == null) continue;

                boolean clearsBit2 = code.contains("0xfffffffb");
                boolean setsBit2 = code.contains("| 4") || code.contains("| 0x4");

                if (clearsBit2 || setsBit2) {
                    report.append("### `").append(f.getName()).append("` @ `0x");
                    report.append(Long.toHexString(f.getEntryPoint().getOffset())).append("`\n\n");
                    if (clearsBit2) report.append("**Clears bit 2 (& 0xfffffffb) — HIDES element**\n\n");
                    if (setsBit2) report.append("**Sets bit 2 (| 0x4) — SHOWS element**\n\n");
                    if (code.length() > 8000) code = code.substring(0, 8000) + "\n// ...truncated...";
                    report.append("```c\n").append(code).append("\n```\n\n");
                    found++;
                }
            }
        }
    }

    // ══════════════════════════════════════════════════════════════════
    // Scan for visibility setters (| 0x4) that make trophy panels visible
    // ══════════════════════════════════════════════════════════════════
    private void scanForVisibilitySetters() {
        report.append("Scanning for functions that SET visibility bit on trophy-related UI offsets.\n");
        report.append("Looking for `| 4` or `| 0x4` patterns on offsets like 0x6a4, 0xc94, 0x3f8c:\n\n");

        FunctionManager fm = currentProgram.getFunctionManager();
        // Broader scan range
        long[] ranges = {0x100260000L, 0x10026a000L, 0x10025a000L, 0x10025f000L};

        for (int r = 0; r < ranges.length; r += 2) {
            Address start = toAddr(ranges[r]);
            FunctionIterator fiter = fm.getFunctions(start, true);

            while (fiter.hasNext()) {
                Function f = fiter.next();
                if (f.getEntryPoint().getOffset() > ranges[r + 1]) break;

                String code = decompFunc(f, 60);
                if (code == null) continue;

                // Look for setting bit 2 on known UI control offsets
                if ((code.contains("0x6a4") || code.contains("0xc94") ||
                     code.contains("0x3f8c") || code.contains("0x17bc")) &&
                    (code.contains("| 4") || code.contains("| 0x4"))) {
                    report.append("### `").append(f.getName()).append("` @ `0x");
                    report.append(Long.toHexString(f.getEntryPoint().getOffset())).append("`\n\n");
                    report.append("**Sets visibility on known trophy UI offsets**\n\n");
                    if (code.length() > 8000) code = code.substring(0, 8000) + "\n// ...truncated...";
                    report.append("```c\n").append(code).append("\n```\n\n");
                }
            }
        }
    }

    // ══════════════════════════════════════════════════════════════════
    // Scan for writers to a specific struct offset (the enable flag)
    // ══════════════════════════════════════════════════════════════════
    private void scanForFlagWriters(int offset) {
        String hexOffset = "0x" + Integer.toHexString(offset);
        report.append("Scanning for functions that write to offset `").append(hexOffset).append("`:\n\n");

        FunctionManager fm = currentProgram.getFunctionManager();
        // Scan wide range covering both model population and UI code
        long[][] ranges = {
            {0x100500000L, 0x100520000L},  // server data parsers
            {0x100260000L, 0x10026a000L},  // trophy UI
            {0x10025a000L, 0x10025f000L},  // profile UI
            {0x10023c000L, 0x10024a000L},  // guild UI
        };

        int found = 0;
        for (long[] range : ranges) {
            Address start = toAddr(range[0]);
            FunctionIterator fiter = fm.getFunctions(start, true);

            while (fiter.hasNext() && found < 15) {
                Function f = fiter.next();
                if (f.getEntryPoint().getOffset() > range[1]) break;

                String code = decompFunc(f, 60);
                if (code == null) continue;

                if (code.contains(hexOffset)) {
                    report.append("### `").append(f.getName()).append("` @ `0x");
                    report.append(Long.toHexString(f.getEntryPoint().getOffset())).append("`\n\n");
                    if (code.length() > 10000) code = code.substring(0, 10000) + "\n// ...truncated...";
                    report.append("```c\n").append(code).append("\n```\n\n");
                    found++;
                }
            }
        }

        if (found == 0) {
            report.append("*No direct writers found for offset ").append(hexOffset);
            report.append(". The write may happen through an indirect pointer or different offset encoding.*\n\n");
        }
    }

    // ══════════════════════════════════════════════════════════════════
    // Trace string xrefs in a specific code address range
    // ══════════════════════════════════════════════════════════════════
    private void traceStringInRange(String target, long rangeStart, long rangeEnd) {
        List<Address> addrs = findStringAddresses(target);
        if (addrs.isEmpty()) {
            report.append("*String \"").append(target).append("\" not found*\n\n");
            return;
        }

        FunctionManager fm = currentProgram.getFunctionManager();
        ReferenceManager refMgr = currentProgram.getReferenceManager();
        Set<Address> seenFuncs = new HashSet<>();
        int found = 0;

        for (Address addr : addrs) {
            ReferenceIterator refs = refMgr.getReferencesTo(addr);
            while (refs.hasNext() && found < 5) {
                Reference ref = refs.next();
                long fromOffset = ref.getFromAddress().getOffset();
                if (fromOffset < rangeStart || fromOffset > rangeEnd) continue;

                Function func = fm.getFunctionContaining(ref.getFromAddress());
                if (func == null || seenFuncs.contains(func.getEntryPoint())) continue;
                seenFuncs.add(func.getEntryPoint());

                report.append("### `").append(func.getName()).append("` @ `0x");
                report.append(Long.toHexString(func.getEntryPoint().getOffset())).append("`\n\n");
                report.append("String \"").append(target).append("\" referenced at `0x");
                report.append(Long.toHexString(ref.getFromAddress().getOffset())).append("`\n\n");

                String code = decompFunc(func, 120);
                if (code != null) {
                    if (code.length() > 15000) code = code.substring(0, 15000) + "\n// ...truncated...";
                    report.append("```c\n").append(code).append("\n```\n\n");
                }
                found++;
            }
        }

        if (found == 0) {
            report.append("*No references to \"").append(target);
            report.append("\" found in range 0x").append(Long.toHexString(rangeStart));
            report.append("-0x").append(Long.toHexString(rangeEnd)).append("*\n\n");
        }
    }

    // ══════════════════════════════════════════════════════════════════
    // General string xref tracer
    // ══════════════════════════════════════════════════════════════════
    private void traceStringXrefs(String target, int callerDepth) {
        List<Address> addrs = findStringAddresses(target);
        if (addrs.isEmpty()) {
            report.append("*String \"").append(target).append("\" not found in binary*\n\n");
            return;
        }

        report.append("**String addresses:** ");
        for (int i = 0; i < addrs.size(); i++) {
            if (i > 0) report.append(", ");
            report.append("`0x").append(Long.toHexString(addrs.get(i).getOffset())).append("`");
        }
        report.append("\n\n");

        FunctionManager fm = currentProgram.getFunctionManager();
        ReferenceManager refMgr = currentProgram.getReferenceManager();
        Set<Address> seenFuncs = new HashSet<>();

        for (Address addr : addrs) {
            ReferenceIterator refs = refMgr.getReferencesTo(addr);
            while (refs.hasNext()) {
                Reference ref = refs.next();
                Function func = fm.getFunctionContaining(ref.getFromAddress());
                if (func == null || seenFuncs.contains(func.getEntryPoint())) continue;
                seenFuncs.add(func.getEntryPoint());

                String funcAddr = "0x" + Long.toHexString(func.getEntryPoint().getOffset());
                report.append("### `").append(func.getName()).append("` @ `").append(funcAddr).append("`\n\n");

                String code = decompFunc(func, 120);
                if (code != null) {
                    if (code.length() > 15000) code = code.substring(0, 15000) + "\n// ...truncated...";
                    report.append("```c\n").append(code).append("\n```\n\n");
                } else {
                    report.append("*Decompilation failed*\n\n");
                }

                // Callers
                if (callerDepth > 0) {
                    ReferenceIterator callerRefs = refMgr.getReferencesTo(func.getEntryPoint());
                    int cc = 0;
                    while (callerRefs.hasNext() && cc < callerDepth) {
                        Reference cRef = callerRefs.next();
                        Function caller = fm.getFunctionContaining(cRef.getFromAddress());
                        if (caller == null || seenFuncs.contains(caller.getEntryPoint())) continue;
                        seenFuncs.add(caller.getEntryPoint());

                        String callerAddr = "0x" + Long.toHexString(caller.getEntryPoint().getOffset());
                        report.append("#### Caller: `").append(caller.getName()).append("` @ `");
                        report.append(callerAddr).append("`\n\n");

                        String callerCode = decompFunc(caller, 90);
                        if (callerCode != null) {
                            if (callerCode.length() > 10000) callerCode = callerCode.substring(0, 10000) + "\n// ...truncated...";
                            report.append("```c\n").append(callerCode).append("\n```\n\n");
                        }
                        cc++;
                    }
                }
            }
        }
    }

    // ══════════════════════════════════════════════════════════════════
    // Decompile a function at a given VA, with optional caller tracing
    // ══════════════════════════════════════════════════════════════════
    private void decompileAndTrace(long va, String label, int callerDepth, boolean traceCallees) {
        Function func = getFuncContaining(va);
        if (func == null) {
            report.append("*Function not found at 0x").append(Long.toHexString(va)).append("*\n\n");
            return;
        }

        String funcAddr = "0x" + Long.toHexString(func.getEntryPoint().getOffset());
        report.append("### `").append(func.getName()).append("` @ `").append(funcAddr);
        report.append("` (").append(label).append(")\n\n");

        String code = decompFunc(func, 180);
        if (code != null) {
            if (code.length() > 20000) code = code.substring(0, 20000) + "\n// ...truncated...";
            report.append("```c\n").append(code).append("\n```\n\n");
        } else {
            report.append("*Decompilation failed*\n\n");
        }

        // Callees
        if (traceCallees) {
            Set<Function> callees = getCallees(func);
            if (!callees.isEmpty()) {
                report.append("**Calls:** ");
                int count = 0;
                for (Function callee : callees) {
                    if (count > 0) report.append(", ");
                    if (count >= 20) { report.append("..."); break; }
                    report.append("`").append(callee.getName()).append("`");
                    count++;
                }
                report.append("\n\n");
            }
        }

        // Callers
        if (callerDepth > 0) {
            Set<Address> seenCallers = new HashSet<>();
            seenCallers.add(func.getEntryPoint());

            ReferenceManager refMgr = currentProgram.getReferenceManager();
            FunctionManager fm = currentProgram.getFunctionManager();
            ReferenceIterator callerRefs = refMgr.getReferencesTo(func.getEntryPoint());
            int cc = 0;

            while (callerRefs.hasNext() && cc < callerDepth) {
                Reference cRef = callerRefs.next();
                Function caller = fm.getFunctionContaining(cRef.getFromAddress());
                if (caller == null || seenCallers.contains(caller.getEntryPoint())) continue;
                seenCallers.add(caller.getEntryPoint());

                String callerAddr = "0x" + Long.toHexString(caller.getEntryPoint().getOffset());
                report.append("#### Caller: `").append(caller.getName()).append("` @ `");
                report.append(callerAddr).append("`\n\n");

                String callerCode = decompFunc(caller, 120);
                if (callerCode != null) {
                    if (callerCode.length() > 12000) callerCode = callerCode.substring(0, 12000) + "\n// ...truncated...";
                    report.append("```c\n").append(callerCode).append("\n```\n\n");
                }
                cc++;
            }
        }
    }

    // ══════════════════════════════════════════════════════════════════
    // Utility: find string addresses
    // ══════════════════════════════════════════════════════════════════
    private List<Address> findStringAddresses(String target) {
        List<Address> results = new ArrayList<>();
        Listing listing = currentProgram.getListing();
        DataIterator dataIter = listing.getDefinedData(true);
        while (dataIter.hasNext() && !monitor.isCancelled()) {
            Data data = dataIter.next();
            if (data.hasStringValue()) {
                Object val = data.getValue();
                if (val != null && val.toString().equals(target)) {
                    results.add(data.getAddress());
                }
            }
        }
        if (results.isEmpty()) {
            Memory mem = currentProgram.getMemory();
            try {
                byte[] searchBytes = (target + "\0").getBytes("UTF-8");
                Address addr = mem.getMinAddress();
                while (addr != null && !monitor.isCancelled()) {
                    addr = mem.findBytes(addr, searchBytes, null, true, monitor);
                    if (addr != null) { results.add(addr); addr = addr.add(1); }
                }
            } catch (Exception e) {}
        }
        return results;
    }

    // ══════════════════════════════════════════════════════════════════
    // Utility: decompile function
    // ══════════════════════════════════════════════════════════════════
    private String decompFunc(Function func, int timeoutSecs) {
        if (func == null) return null;
        try {
            DecompileResults result = decomp.decompileFunction(func, timeoutSecs, monitor);
            if (result != null && result.decompileCompleted() && result.getDecompiledFunction() != null) {
                return result.getDecompiledFunction().getC();
            }
        } catch (Exception e) {}
        return null;
    }

    // ══════════════════════════════════════════════════════════════════
    // Utility: get function containing or at address
    // ══════════════════════════════════════════════════════════════════
    private Function getFuncContaining(long va) {
        Address addr = toAddr(va);
        FunctionManager fm = currentProgram.getFunctionManager();
        Function func = fm.getFunctionAt(addr);
        if (func == null) func = fm.getFunctionContaining(addr);
        return func;
    }

    // ══════════════════════════════════════════════════════════════════
    // Utility: get callees of a function
    // ══════════════════════════════════════════════════════════════════
    private Set<Function> getCallees(Function func) {
        Set<Function> callees = new LinkedHashSet<>();
        if (func == null) return callees;
        ReferenceManager refMgr = currentProgram.getReferenceManager();
        AddressSetView body = func.getBody();
        ghidra.program.model.address.AddressIterator addrIter = body.getAddresses(true);
        while (addrIter.hasNext()) {
            if (monitor.isCancelled()) break;
            Address addr = addrIter.next();
            Reference[] refs = refMgr.getReferencesFrom(addr);
            for (Reference ref : refs) {
                if (ref.getReferenceType().isCall()) {
                    Function callee = currentProgram.getFunctionManager().getFunctionAt(ref.getToAddress());
                    if (callee != null && !callee.equals(func)) {
                        callees.add(callee);
                    }
                }
            }
        }
        return callees;
    }
}
