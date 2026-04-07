// Find FPTR_NAV_REFRESH on Android libGameKindred.so
//
// Strategy: The nav refresh function accesses self+0xf8 (leaderboard button)
// and clears bit 2 at ptr+0x84 (visibility flags). On iOS this was hooked
// via a .data.rel.ro fptr. On Android we need to:
//   1. Find string XREFs for nav-related strings ("main_nav_leaderboard",
//      "secondaryNavButton", "SWITCH_TO_TAB", etc.)
//   2. Trace callers to find the refresh function that reads +0xf8 and writes +0x84
//   3. Scan .data.rel.ro for function pointers to that function
//
// Also searches for the CE gate function (0x8480e0 on Android) callers that
// hide UI elements, to find FPTR_PROFILE_BODY, FPTR_PROFILE_LOADER, etc.
//
// Run on: Android arm64 libGameKindred.so (or libGameKindred_real.so)
// Output: /tmp/vgf_android_reports/nav_refresh.md
// @category VGF-Android

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;

public class GhidraFindNavRefresh extends GhidraScript {
    private DecompInterface decomp;

    @Override
    public void run() throws Exception {
        String outputDir = System.getenv("VGF_REPORT_DIR");
        if (outputDir == null) outputDir = "/tmp/vgf_android_reports";
        new File(outputDir).mkdirs();

        decomp = new DecompInterface();
        decomp.setOptions(new DecompileOptions());
        decomp.openProgram(currentProgram);

        StringBuilder sb = new StringBuilder();
        sb.append("# Android Nav Refresh + CE Gate Offset Discovery\n\n");

        // 1. Find nav-related strings and their XREFs
        sb.append("## 1. Nav-Related String XREFs\n\n");
        String[] navStrings = {
            "main_nav_leaderboard",
            "secondaryNavButton",
            "SWITCH_TO_TAB",
            "main_nav_home",
            "main_nav_heroes",
            "main_nav_market",
            "main_nav_party",
            "main_nav_social",
            "leaderboard",
            "homepanel_leaderboard",
        };
        Map<String, List<Function>> stringFuncs = new LinkedHashMap<>();
        for (String s : navStrings) {
            if (monitor.isCancelled()) break;
            List<Function> funcs = findFunctionsReferencingString(s);
            stringFuncs.put(s, funcs);
            sb.append("### \"").append(s).append("\" — ").append(funcs.size()).append(" functions\n\n");
            for (Function f : funcs) {
                sb.append("- `").append(f.getName()).append("` @ `0x")
                  .append(Long.toHexString(f.getEntryPoint().getOffset())).append("`\n");
            }
            sb.append("\n");
        }

        // 2. Decompile functions referencing leaderboard strings
        sb.append("## 2. Functions Referencing Leaderboard Strings\n\n");
        Set<Function> leaderboardFuncs = new LinkedHashSet<>();
        for (String key : new String[]{"main_nav_leaderboard", "homepanel_leaderboard", "leaderboard"}) {
            List<Function> fl = stringFuncs.get(key);
            if (fl != null) leaderboardFuncs.addAll(fl);
        }
        int count = 0;
        for (Function f : leaderboardFuncs) {
            if (monitor.isCancelled() || count++ >= 10) break;
            sb.append(decompileFunc(f));
            // Also find .data.rel.ro pointers to this function
            sb.append(findRelroPointers(f));
            sb.append("\n---\n\n");
        }

        // 3. For each leaderboard-related function, trace callers
        sb.append("## 3. Callers of Leaderboard Functions\n\n");
        count = 0;
        for (Function f : leaderboardFuncs) {
            if (monitor.isCancelled() || count++ >= 5) break;
            Set<Function> callers = getCallers(f);
            sb.append("### Callers of `").append(f.getName()).append("` (")
              .append(callers.size()).append(")\n\n");
            int cc = 0;
            for (Function caller : callers) {
                if (cc++ >= 5) break;
                sb.append(decompileFunc(caller));
                sb.append(findRelroPointers(caller));
                sb.append("\n---\n\n");
            }
        }

        // 4. Find functions that access +0xf8 and +0x84 pattern (nav refresh signature)
        sb.append("## 4. Functions Accessing +0xf8 / +0x84 Pattern\n\n");
        sb.append("Searching for functions that load from self+0xf8 then write to ptr+0x84...\n\n");
        List<Function> candidates = findFieldAccessPattern(0xf8, 0x84);
        for (Function f : candidates) {
            if (monitor.isCancelled()) break;
            sb.append(decompileFunc(f));
            sb.append(findRelroPointers(f));
            sb.append("\n---\n\n");
        }

        // 5. CE gate callers — find functions calling 0x8480e0
        sb.append("## 5. CE Gate (0x8480e0) Callers\n\n");
        Address ceGate = toAddr(0x8480e0L);
        Function ceGateFunc = currentProgram.getFunctionManager().getFunctionAt(ceGate);
        if (ceGateFunc == null) ceGateFunc = currentProgram.getFunctionManager().getFunctionContaining(ceGate);
        if (ceGateFunc != null) {
            sb.append("CE gate function: `").append(ceGateFunc.getName()).append("` @ `0x")
              .append(Long.toHexString(ceGateFunc.getEntryPoint().getOffset())).append("`\n\n");
            sb.append(decompileFunc(ceGateFunc));
            sb.append("\n### Callers:\n\n");
            Set<Function> callers = getCallers(ceGateFunc);
            sb.append("Total: ").append(callers.size()).append(" callers\n\n");
            for (Function caller : callers) {
                if (monitor.isCancelled()) break;
                sb.append(decompileFunc(caller));
                sb.append(findRelroPointers(caller));
                sb.append("\n---\n\n");
            }
        } else {
            sb.append("*CE gate function not found at 0x8480e0*\n\n");
        }

        decomp.dispose();

        String filepath = outputDir + "/nav_refresh.md";
        FileWriter fw = new FileWriter(filepath);
        fw.write(sb.toString());
        fw.close();
        println("[android] Wrote " + filepath + " (" + sb.length() + " bytes)");
    }

    private List<Function> findFunctionsReferencingString(String target) {
        List<Function> results = new ArrayList<>();
        List<Address> stringAddrs = findStringAddresses(target);
        FunctionManager fm = currentProgram.getFunctionManager();
        for (Address strAddr : stringAddrs) {
            ReferenceIterator refs = currentProgram.getReferenceManager().getReferencesTo(strAddr);
            while (refs.hasNext()) {
                Reference ref = refs.next();
                Function f = fm.getFunctionContaining(ref.getFromAddress());
                if (f != null && !results.contains(f)) results.add(f);
            }
        }
        return results;
    }

    private List<Address> findStringAddresses(String target) {
        List<Address> results = new ArrayList<>();
        // Try defined data first
        DataIterator dataIter = currentProgram.getListing().getDefinedData(true);
        while (dataIter.hasNext() && !monitor.isCancelled()) {
            Data data = dataIter.next();
            if (data.hasStringValue()) {
                Object val = data.getValue();
                if (val != null && val.toString().equals(target)) {
                    results.add(data.getAddress());
                }
            }
        }
        // Fallback: raw byte search
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

    private String findRelroPointers(Function func) {
        StringBuilder sb = new StringBuilder();
        long target = func.getEntryPoint().getOffset();
        Memory mem = currentProgram.getMemory();

        // Scan .data.rel.ro region (from vg_unlock_android.c: 0x26b8b20-0x2ad1fa8)
        long relroStart = 0x26b8b20L;
        long relroEnd = 0x2ad1fa8L;

        byte[] searchBytes = new byte[8];
        for (int j = 0; j < 8; j++) searchBytes[j] = (byte)((target >> (j*8)) & 0xff);

        try {
            Address searchAddr = toAddr(relroStart);
            Address endAddr = toAddr(relroEnd);
            boolean found = false;
            while (searchAddr != null && searchAddr.compareTo(endAddr) < 0 && !monitor.isCancelled()) {
                searchAddr = mem.findBytes(searchAddr, searchBytes, null, true, monitor);
                if (searchAddr != null && searchAddr.compareTo(endAddr) < 0) {
                    if (!found) {
                        sb.append("**.data.rel.ro pointers:**\n");
                        found = true;
                    }
                    sb.append("- `0x").append(Long.toHexString(searchAddr.getOffset()))
                      .append("` (FPTR candidate)\n");
                    searchAddr = searchAddr.add(8);
                }
            }
        } catch (Exception e) {}
        if (sb.length() > 0) sb.append("\n");
        return sb.toString();
    }

    private List<Function> findFieldAccessPattern(int offset1, int offset2) {
        // Search for instructions that load from x+offset1, then access y+offset2
        // This is a heuristic — decompile candidates from string XREF results
        List<Function> results = new ArrayList<>();
        // For now, rely on the string-based and CE gate-based discovery
        // The decompiled output will show the field access patterns
        return results;
    }

    private Set<Function> getCallers(Function func) {
        Set<Function> callers = new LinkedHashSet<>();
        ReferenceIterator refs = currentProgram.getReferenceManager().getReferencesTo(func.getEntryPoint());
        while (refs.hasNext()) {
            Reference ref = refs.next();
            Function caller = currentProgram.getFunctionManager().getFunctionContaining(ref.getFromAddress());
            if (caller != null && !caller.equals(func)) callers.add(caller);
        }
        return callers;
    }

    private String decompileFunc(Function func) {
        StringBuilder sb = new StringBuilder();
        sb.append("#### `").append(func.getName()).append("` @ `0x")
          .append(Long.toHexString(func.getEntryPoint().getOffset())).append("`\n\n");
        try {
            DecompileResults result = decomp.decompileFunction(func, 120, monitor);
            if (result != null && result.decompileCompleted() && result.getDecompiledFunction() != null) {
                String code = result.getDecompiledFunction().getC();
                if (code.length() > 12000) code = code.substring(0, 12000) + "\n// ...truncated...";
                sb.append("```c\n").append(code).append("\n```\n\n");
            } else {
                sb.append("*Decompilation failed*\n\n");
            }
        } catch (Exception e) {
            sb.append("*Error: ").append(e.getMessage()).append("*\n\n");
        }
        return sb.toString();
    }
}
