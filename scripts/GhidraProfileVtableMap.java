// Map the COMPLETE profile panel vtable and find trophy hook points.
// Dumps both vtables from the profile panel constructor FUN_10025c044,
// decompiles trophy-area functions, searches for trophy data populators,
// and scans __DATA for relevant function pointers.
// @category Analysis

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;

public class GhidraProfileVtableMap extends GhidraScript {
    private DecompInterface decomp;
    private Memory mem;
    private FunctionManager fm;
    private AddressFactory af;

    @Override
    public void run() throws Exception {
        String outputDir = System.getenv("VGF_REPORT_DIR");
        if (outputDir == null) outputDir = "/tmp/vgf_ghidra_reports";
        new File(outputDir).mkdirs();

        decomp = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        decomp.setOptions(opts);
        decomp.openProgram(currentProgram);

        mem = currentProgram.getMemory();
        fm = currentProgram.getFunctionManager();
        af = currentProgram.getAddressFactory();

        StringBuilder sb = new StringBuilder();
        sb.append("# Profile Panel Complete VTable Map\n\n");
        sb.append("Generated: ").append(new java.util.Date().toString()).append("\n\n");

        // =====================================================================
        // SECTION 1: Primary vtable at 0x10147ade8 (200 entries)
        // =====================================================================
        sb.append("## 1. PRIMARY VTABLE (PTR_thunk_FUN_10025cfb8 @ 0x10147ade8)\n\n");
        sb.append("This is `*param_3 = &PTR_thunk_FUN_10025cfb8_10147ade8` from the constructor.\n\n");
        sb.append("| # | __DATA VA | Pointer Value | Function | Notes |\n");
        sb.append("|---|-----------|---------------|----------|-------|\n");

        long vtable1Start = 0x10147ade8L;
        int vtable1Entries = 200;
        List<Long> trophyAreaFuncs = new ArrayList<>();

        for (int i = 0; i < vtable1Entries; i++) {
            long entryAddr = vtable1Start + (i * 8L);
            Address addr = af.getAddress("0x" + Long.toHexString(entryAddr));
            try {
                long ptrVal = mem.getLong(addr);
                // Validate: is it a plausible code pointer?
                if (ptrVal < 0x100000000L || ptrVal > 0x10FFFFFFFL) {
                    // End of vtable or non-pointer data
                    sb.append("| ").append(i).append(" | 0x").append(Long.toHexString(entryAddr));
                    sb.append(" | 0x").append(Long.toHexString(ptrVal));
                    sb.append(" | *NOT A CODE PTR* | vtable likely ends here |\n");
                    // Still continue for a few more to be safe, but mark
                    if (i > 10 && ptrVal == 0) break; // stop at null
                    continue;
                }

                Function func = fm.getFunctionAt(af.getAddress("0x" + Long.toHexString(ptrVal)));
                String funcName = func != null ? func.getName() : "unknown";
                String notes = "";

                // Flag trophy area functions
                if (ptrVal >= 0x100260000L && ptrVal < 0x100268000L) {
                    notes = "** TROPHY AREA **";
                    trophyAreaFuncs.add(ptrVal);
                }
                // Flag ranked profile area
                if (ptrVal >= 0x10025a000L && ptrVal < 0x10025f000L) {
                    notes = "RANKED PROFILE AREA";
                }
                // Flag thunks
                if (funcName.startsWith("thunk_")) {
                    notes += " (thunk)";
                }

                sb.append("| ").append(i);
                sb.append(" | 0x").append(Long.toHexString(entryAddr));
                sb.append(" | 0x").append(Long.toHexString(ptrVal));
                sb.append(" | ").append(funcName);
                sb.append(" | ").append(notes).append(" |\n");
            } catch (MemoryAccessException e) {
                sb.append("| ").append(i).append(" | 0x").append(Long.toHexString(entryAddr));
                sb.append(" | *MEM ERROR* | - | |\n");
                break;
            }
        }
        sb.append("\n");
        println("[vtable] Primary vtable dumped with " + vtable1Entries + " entries.");

        // =====================================================================
        // SECTION 2: Secondary vtable at 0x10147af98 (200 entries)
        // =====================================================================
        sb.append("## 2. SECONDARY VTABLE (param_3[0x34] @ 0x10147af98)\n\n");
        sb.append("This is `param_3[0x34] = &PTR_FUN_10147af98` from the constructor.\n\n");
        sb.append("| # | __DATA VA | Pointer Value | Function | Notes |\n");
        sb.append("|---|-----------|---------------|----------|-------|\n");

        long vtable2Start = 0x10147af98L;
        int vtable2Entries = 200;

        for (int i = 0; i < vtable2Entries; i++) {
            long entryAddr = vtable2Start + (i * 8L);
            Address addr = af.getAddress("0x" + Long.toHexString(entryAddr));
            try {
                long ptrVal = mem.getLong(addr);
                if (ptrVal < 0x100000000L || ptrVal > 0x10FFFFFFFL) {
                    sb.append("| ").append(i).append(" | 0x").append(Long.toHexString(entryAddr));
                    sb.append(" | 0x").append(Long.toHexString(ptrVal));
                    sb.append(" | *NOT A CODE PTR* | |\n");
                    if (i > 10 && ptrVal == 0) break;
                    continue;
                }

                Function func = fm.getFunctionAt(af.getAddress("0x" + Long.toHexString(ptrVal)));
                String funcName = func != null ? func.getName() : "unknown";
                String notes = "";

                if (ptrVal >= 0x100260000L && ptrVal < 0x100268000L) {
                    notes = "** TROPHY AREA **";
                    if (!trophyAreaFuncs.contains(ptrVal)) trophyAreaFuncs.add(ptrVal);
                }
                if (ptrVal >= 0x10025a000L && ptrVal < 0x10025f000L) {
                    notes = "RANKED PROFILE AREA";
                }
                if (funcName.startsWith("thunk_")) notes += " (thunk)";

                sb.append("| ").append(i);
                sb.append(" | 0x").append(Long.toHexString(entryAddr));
                sb.append(" | 0x").append(Long.toHexString(ptrVal));
                sb.append(" | ").append(funcName);
                sb.append(" | ").append(notes).append(" |\n");
            } catch (MemoryAccessException e) {
                sb.append("| ").append(i).append(" | 0x").append(Long.toHexString(entryAddr));
                sb.append(" | *MEM ERROR* | - | |\n");
                break;
            }
        }
        sb.append("\n");
        println("[vtable] Secondary vtable dumped with " + vtable2Entries + " entries.");

        // =====================================================================
        // SECTION 3: Decompile all trophy-area vtable entries
        // =====================================================================
        sb.append("## 3. DECOMPILED TROPHY-AREA VTABLE FUNCTIONS\n\n");
        sb.append("Functions from vtables that point into 0x100260000-0x100268000:\n\n");

        // Also add the specific trophy functions we know about
        long[] knownTrophyFuncs = {
            0x100265bd4L, // trophy renderer (checks +0x18f21)
            0x1002654ecL, // profile refresh/layout
            0x10026609cL, // trophy tab switcher
            0x100265438L, // non-trophy tab (to decompile)
        };
        for (long kf : knownTrophyFuncs) {
            if (!trophyAreaFuncs.contains(kf)) trophyAreaFuncs.add(kf);
        }

        // Sort for readability
        Collections.sort(trophyAreaFuncs);

        for (Long funcAddr : trophyAreaFuncs) {
            sb.append(decompileAt(funcAddr));
        }

        // =====================================================================
        // SECTION 4: Find the trophy data populator (+0x18ef8 count, +0x18f00 array)
        // =====================================================================
        sb.append("## 4. TROPHY DATA POPULATOR SEARCH\n\n");
        sb.append("Looking for functions that write to profile+0x18ef8 (trophy count) ");
        sb.append("and profile+0x18f00 (trophy array pointer).\n\n");

        // Search functions in range 0x100260000-0x100268000 for references to 0x18ef8/0x18f00
        sb.append("### Scanning functions 0x100260000-0x100268000 for 0x18ef8/0x18f00 access\n\n");

        FunctionIterator funcIter = fm.getFunctions(
            af.getAddress("0x100260000"),
            true);

        while (funcIter.hasNext() && !monitor.isCancelled()) {
            Function func = funcIter.next();
            long ep = func.getEntryPoint().getOffset();
            if (ep >= 0x100268000L) break;

            String code = decompFunc(func);
            if (code != null) {
                boolean has18ef8 = code.contains("0x18ef8") || code.contains("18ef8");
                boolean has18f00 = code.contains("0x18f00") || code.contains("18f00");
                boolean has18f21 = code.contains("0x18f21") || code.contains("18f21");
                boolean hasTrophyCase = code.contains("trophyCase") || code.contains("trophy_case");

                if (has18ef8 || has18f00 || has18f21 || hasTrophyCase) {
                    sb.append("#### MATCH: `").append(func.getName()).append("` @ `0x")
                      .append(Long.toHexString(ep)).append("`\n\n");
                    sb.append("Matches: ");
                    if (has18ef8) sb.append("+0x18ef8 ");
                    if (has18f00) sb.append("+0x18f00 ");
                    if (has18f21) sb.append("+0x18f21 ");
                    if (hasTrophyCase) sb.append("trophyCase ");
                    sb.append("\n\n");
                    if (code.length() > 12000) code = code.substring(0, 12000) + "\n// ...truncated...";
                    sb.append("```c\n").append(code).append("\n```\n\n");
                }
            }
        }

        // Also search the broader profile area 0x10025a000-0x10025f000
        sb.append("### Scanning functions 0x10025a000-0x100260000 for 0x18ef8/0x18f00 access\n\n");

        funcIter = fm.getFunctions(af.getAddress("0x10025a000"), true);
        while (funcIter.hasNext() && !monitor.isCancelled()) {
            Function func = funcIter.next();
            long ep = func.getEntryPoint().getOffset();
            if (ep >= 0x100260000L) break;

            String code = decompFunc(func);
            if (code != null) {
                boolean has18ef8 = code.contains("0x18ef8") || code.contains("18ef8");
                boolean has18f00 = code.contains("0x18f00") || code.contains("18f00");
                boolean has18f21 = code.contains("0x18f21") || code.contains("18f21");
                boolean hasTrophyCase = code.contains("trophyCase") || code.contains("trophy_case");

                if (has18ef8 || has18f00 || has18f21 || hasTrophyCase) {
                    sb.append("#### MATCH: `").append(func.getName()).append("` @ `0x")
                      .append(Long.toHexString(ep)).append("`\n\n");
                    sb.append("Matches: ");
                    if (has18ef8) sb.append("+0x18ef8 ");
                    if (has18f00) sb.append("+0x18f00 ");
                    if (has18f21) sb.append("+0x18f21 ");
                    if (hasTrophyCase) sb.append("trophyCase ");
                    sb.append("\n\n");
                    if (code.length() > 12000) code = code.substring(0, 12000) + "\n// ...truncated...";
                    sb.append("```c\n").append(code).append("\n```\n\n");
                }
            }
        }

        // Also scan the wider range for any function touching trophyCase
        sb.append("### Scanning ALL functions for trophyCase string references\n\n");
        List<Address> trophyCaseAddrs = findStr("trophyCase");
        sb.append("String `trophyCase` found at: ");
        for (Address a : trophyCaseAddrs) {
            sb.append("0x").append(Long.toHexString(a.getOffset())).append(" ");
        }
        sb.append("\n\n");

        ReferenceManager refMgr = currentProgram.getReferenceManager();
        Set<Address> seenFuncs = new HashSet<>();
        for (Address strAddr : trophyCaseAddrs) {
            ReferenceIterator refs = refMgr.getReferencesTo(strAddr);
            while (refs.hasNext()) {
                Reference ref = refs.next();
                Function func = fm.getFunctionContaining(ref.getFromAddress());
                if (func == null || seenFuncs.contains(func.getEntryPoint())) continue;
                seenFuncs.add(func.getEntryPoint());

                sb.append("#### trophyCase consumer: `").append(func.getName()).append("` @ `0x")
                  .append(Long.toHexString(func.getEntryPoint().getOffset())).append("`\n\n");
                String code = decompFunc(func);
                if (code != null) {
                    if (code.length() > 12000) code = code.substring(0, 12000) + "\n// ...truncated...";
                    sb.append("```c\n").append(code).append("\n```\n\n");
                }
            }
        }

        // =====================================================================
        // SECTION 5: __DATA pointer scan for key trophy functions
        // =====================================================================
        sb.append("## 5. __DATA POINTER SCAN FOR KEY TROPHY FUNCTIONS\n\n");

        long dataStart = 0x101444000L;
        long dataEnd = 0x101500000L;

        long[] searchTargets = {
            0x100265bd4L, // trophy renderer (checks +0x18f21)
            0x1002654ecL, // profile refresh
            0x10026609cL, // trophy tab switcher
            0x100265438L, // non-trophy tab
        };
        String[] searchNames = {
            "FUN_100265bd4 (trophy renderer, checks +0x18f21)",
            "FUN_1002654ec (profile refresh/layout)",
            "FUN_10026609c (trophy tab switcher)",
            "FUN_100265438 (non-trophy tab)",
        };

        for (int t = 0; t < searchTargets.length; t++) {
            long target = searchTargets[t];
            sb.append("### ").append(searchNames[t]).append("\n\n");
            sb.append("Searching __DATA 0x").append(Long.toHexString(dataStart));
            sb.append(" - 0x").append(Long.toHexString(dataEnd));
            sb.append(" for pointer value 0x").append(Long.toHexString(target)).append("\n\n");

            boolean found = false;
            for (long addr = dataStart; addr < dataEnd; addr += 8) {
                Address checkAddr = af.getAddress("0x" + Long.toHexString(addr));
                try {
                    long val = mem.getLong(checkAddr);
                    if (val == target) {
                        sb.append("- EXACT match at `0x").append(Long.toHexString(addr))
                          .append("` (file offset 0x").append(Long.toHexString(addr - 0x100000000L)).append(")\n");
                        found = true;
                    }
                } catch (MemoryAccessException e) {}
            }

            // Also search for thunks pointing to this function
            // Thunks are typically at target-4 or target+4 and are B instructions
            sb.append("\nSearching for thunk pointers (target +/- 16 bytes):\n\n");
            for (long offset = -16; offset <= 16; offset += 4) {
                if (offset == 0) continue;
                long thunkTarget = target + offset;
                for (long addr = dataStart; addr < dataEnd; addr += 8) {
                    Address checkAddr = af.getAddress("0x" + Long.toHexString(addr));
                    try {
                        long val = mem.getLong(checkAddr);
                        if (val == thunkTarget) {
                            Function thunkFunc = fm.getFunctionAt(af.getAddress("0x" + Long.toHexString(thunkTarget)));
                            String thunkName = thunkFunc != null ? thunkFunc.getName() : "no_func";
                            sb.append("- Thunk/nearby at `0x").append(Long.toHexString(addr))
                              .append("` -> 0x").append(Long.toHexString(thunkTarget))
                              .append(" (").append(thunkName).append(")\n");
                            found = true;
                        }
                    } catch (MemoryAccessException e) {}
                }
            }

            if (!found) {
                sb.append("- *NO pointers found in __DATA range*\n");
            }
            sb.append("\n");
        }

        // =====================================================================
        // SECTION 6: Decompile FUN_100265438 (non-trophy tab)
        // =====================================================================
        sb.append("## 6. FUN_100265438 (NON-TROPHY TAB)\n\n");
        sb.append("This is the other function called from tab switcher FUN_10026609c.\n\n");
        sb.append(decompileAt(0x100265438L));

        // Also decompile the tab switcher itself for reference
        sb.append("### Tab switcher FUN_10026609c for reference:\n\n");
        sb.append(decompileAt(0x10026609cL));

        // =====================================================================
        // SECTION 7: Decompile the constructor FUN_10025c044 for context
        // =====================================================================
        sb.append("## 7. CONSTRUCTOR FUN_10025c044 (for context)\n\n");
        sb.append(decompileAt(0x10025c044L));

        // =====================================================================
        // SECTION 8: Surrounding vtable context
        // =====================================================================
        sb.append("## 8. VTABLE NEIGHBORHOOD ANALYSIS\n\n");
        sb.append("Checking what's around the failed hook point 0x10147be00:\n\n");
        sb.append("| Offset from vtable1 | __DATA VA | Pointer Value | Function |\n");
        sb.append("|---------------------|-----------|---------------|----------|\n");

        long failedHook = 0x10147be00L;
        for (long addr = failedHook - 0x40; addr <= failedHook + 0x40; addr += 8) {
            Address checkAddr = af.getAddress("0x" + Long.toHexString(addr));
            try {
                long val = mem.getLong(checkAddr);
                Function func = null;
                String funcName = "N/A";
                if (val >= 0x100000000L && val <= 0x10FFFFFFFL) {
                    func = fm.getFunctionAt(af.getAddress("0x" + Long.toHexString(val)));
                    funcName = func != null ? func.getName() : "unknown";
                }
                String marker = (addr == failedHook) ? " **<< FAILED HOOK**" : "";
                long offsetFromVt1 = addr - vtable1Start;
                sb.append("| +0x").append(Long.toHexString(offsetFromVt1));
                sb.append(" (idx ").append(offsetFromVt1 / 8).append(")");
                sb.append(" | 0x").append(Long.toHexString(addr));
                sb.append(" | 0x").append(Long.toHexString(val));
                sb.append(" | ").append(funcName).append(marker).append(" |\n");
            } catch (MemoryAccessException e) {}
        }
        sb.append("\n");

        // =====================================================================
        // SECTION 9: Cross-reference analysis for key vtable entries
        // =====================================================================
        sb.append("## 9. CROSS-REFERENCE ANALYSIS\n\n");
        sb.append("Which vtable entries are called during profile refresh?\n\n");

        // Decompile FUN_1002654ec callers to understand the call chain
        sb.append("### Callers of FUN_1002654ec (profile layout):\n\n");
        sb.append(traceCallers(0x1002654ecL, 5));

        sb.append("### Callers of FUN_100265bd4 (trophy renderer):\n\n");
        sb.append(traceCallers(0x100265bd4L, 5));

        sb.append("### Callers of FUN_10026609c (tab switcher):\n\n");
        sb.append(traceCallers(0x10026609cL, 5));

        sb.append("### Callers of FUN_1002604c4 (called from profile refresh):\n\n");
        sb.append(traceCallers(0x1002604c4L, 5));

        // =====================================================================
        // SECTION 10: Summary of vtable entry offsets to the profile object
        // =====================================================================
        sb.append("## 10. VTABLE LAYOUT SUMMARY\n\n");
        sb.append("Primary vtable @ 0x10147ade8:\n");
        sb.append("- Offset from __DATA base 0x101444000: 0x").append(Long.toHexString(vtable1Start - 0x101444000L)).append("\n");
        sb.append("- Index of 0x10147be00 (failed hook): ").append((failedHook - vtable1Start) / 8).append("\n\n");
        sb.append("Secondary vtable @ 0x10147af98:\n");
        sb.append("- Offset from __DATA base 0x101444000: 0x").append(Long.toHexString(vtable2Start - 0x101444000L)).append("\n\n");

        sb.append("Key question: 0x10147be00 is at vtable index ");
        sb.append((failedHook - vtable1Start) / 8);
        sb.append(" from the primary vtable start. Is this actually IN the vtable, ");
        sb.append("or past its end? The secondary vtable starts at 0x10147af98 ");
        sb.append("which is at primary vtable offset +0x1b0 (index 54). ");
        sb.append("0x10147be00 is at primary vtable offset +0x1018 (index 515). ");
        sb.append("This is WAY past both vtables — it belongs to a DIFFERENT class's vtable!\n\n");

        sb.append("### DIAGNOSIS: The hook at 0x10147be00 failed because it is NOT in the ");
        sb.append("profile panel vtable. It is 0x1018 bytes past the start of vtable1. ");
        sb.append("The profile panel's vtable only extends ~0x1B0 bytes (54 entries) ");
        sb.append("before the secondary vtable begins.\n\n");

        // Write report
        String filepath = outputDir + "/profile_vtable_map.md";
        FileWriter fw = new FileWriter(filepath);
        fw.write(sb.toString());
        fw.close();
        decomp.dispose();
        println("[DONE] Wrote " + filepath + " (" + sb.length() + " bytes)");
    }

    private String decompileAt(long va) {
        Address addr = af.getAddress("0x" + Long.toHexString(va));
        Function func = fm.getFunctionAt(addr);
        if (func == null) func = fm.getFunctionContaining(addr);
        if (func == null) return "*Function not found at 0x" + Long.toHexString(va) + "*\n\n";

        StringBuilder sb = new StringBuilder();
        sb.append("#### `").append(func.getName()).append("` @ `0x")
          .append(Long.toHexString(func.getEntryPoint().getOffset())).append("`\n\n");

        String code = decompFunc(func);
        if (code != null) {
            if (code.length() > 12000) code = code.substring(0, 12000) + "\n// ...truncated...";
            sb.append("```c\n").append(code).append("\n```\n\n");
        } else {
            sb.append("*Decompilation failed*\n\n");
        }
        return sb.toString();
    }

    private String traceCallers(long va, int max) {
        Address addr = af.getAddress("0x" + Long.toHexString(va));
        Function func = fm.getFunctionAt(addr);
        if (func == null) func = fm.getFunctionContaining(addr);
        if (func == null) return "*Function not found at 0x" + Long.toHexString(va) + "*\n\n";

        StringBuilder sb = new StringBuilder();
        ReferenceIterator refs = currentProgram.getReferenceManager().getReferencesTo(func.getEntryPoint());
        Set<Address> seen = new HashSet<>();
        int count = 0;
        while (refs.hasNext() && count < max) {
            Reference ref = refs.next();
            Address fromAddr = ref.getFromAddress();
            Function caller = fm.getFunctionContaining(fromAddr);
            if (caller == null || seen.contains(caller.getEntryPoint())) continue;
            seen.add(caller.getEntryPoint());

            sb.append("Called from `0x").append(Long.toHexString(fromAddr.getOffset()))
              .append("` in:\n\n");
            sb.append(decompileAt(caller.getEntryPoint().getOffset()));
            count++;
        }
        if (count == 0) sb.append("*No callers found via direct references*\n\n");
        return sb.toString();
    }

    private List<Address> findStr(String target) {
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

    private String decompFunc(Function func) {
        if (func == null) return null;
        try {
            DecompileResults result = decomp.decompileFunction(func, 120, monitor);
            if (result != null && result.decompileCompleted() && result.getDecompiledFunction() != null) {
                return result.getDecompiledFunction().getC();
            }
        } catch (Exception e) {}
        return null;
    }
}
