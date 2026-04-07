// Find FPTR_SET_TAB_VISIBLE on Android libGameKindred.so
//
// On iOS this function accessed self+0x2c2c, but that offset has ZERO hits
// on Android. Strategy:
//   1. Find "setTabVisible" or related strings
//   2. Find functions that take (self, bool) and write to a visibility field
//   3. Find vtable entries for tab panel classes
//   4. Scan .data.rel.ro for pointers to candidates
//
// Run on: Android arm64 libGameKindred.so
// Output: /tmp/vgf_android_reports/set_tab_visible.md
// @category VGF-Android

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;

public class GhidraFindSetTabVisible extends GhidraScript {
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
        sb.append("# Android setTabVisible Offset Discovery\n\n");

        // 1. String-based search
        sb.append("## 1. Tab/Sidebar String XREFs\n\n");
        String[] tabStrings = {
            "setTabVisible",
            "MAIN_MENU_HOME",
            "MAIN_MENU_BAG",
            "MAIN_MENU_HEROES",
            "MAIN_MENU_MARKET",
            "MAIN_MENU_PARTY",
            "MAIN_MENU_SOCIAL",
            "MAIN_MENU_ACADEMY",
            "sidebar",
            "tabVisible",
            "tab_visible",
        };
        Map<String, List<Function>> stringFuncs = new LinkedHashMap<>();
        for (String s : tabStrings) {
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

        // 2. Decompile MAIN_MENU panel constructors and their tab registration
        sb.append("## 2. Panel Constructor Decompilation\n\n");
        Set<Function> panelFuncs = new LinkedHashSet<>();
        for (String key : new String[]{"MAIN_MENU_HOME", "MAIN_MENU_BAG", "MAIN_MENU_SOCIAL", "MAIN_MENU_ACADEMY"}) {
            List<Function> fl = stringFuncs.get(key);
            if (fl != null) panelFuncs.addAll(fl);
        }
        int count = 0;
        for (Function f : panelFuncs) {
            if (monitor.isCancelled() || count++ >= 15) break;
            sb.append(decompileFunc(f));
            sb.append(findRelroPointers(f));

            // Trace callers
            Set<Function> callers = getCallers(f);
            if (!callers.isEmpty()) {
                sb.append("Callers (").append(callers.size()).append("): ");
                for (Function c : callers) {
                    sb.append("`").append(c.getName()).append("` @ 0x")
                      .append(Long.toHexString(c.getEntryPoint().getOffset())).append(", ");
                }
                sb.append("\n\n");
            }
            sb.append("---\n\n");
        }

        // 3. Find the sidebar controller — look for functions that register
        //    panels at indices 0,1,2,3,4,5 (home, bag, academy, party, social, market)
        //    CODE_REGISTER_PANEL on Android = 0xad9cfc
        sb.append("## 3. Sidebar Panel Registration (0xad9cfc) Callers\n\n");
        Function regPanel = currentProgram.getFunctionManager().getFunctionAt(toAddr(0xad9cfcL));
        if (regPanel == null) regPanel = currentProgram.getFunctionManager().getFunctionContaining(toAddr(0xad9cfcL));
        if (regPanel != null) {
            Set<Function> callers = getCallers(regPanel);
            sb.append("Found ").append(callers.size()).append(" callers of register_panel\n\n");
            for (Function caller : callers) {
                if (monitor.isCancelled()) break;
                sb.append(decompileFunc(caller));
                sb.append(findRelroPointers(caller));
                sb.append("---\n\n");
            }
        } else {
            sb.append("*register_panel not found at 0xad9cfc*\n\n");
        }

        // 4. Look for small functions that take (void*, int) and write to a field
        //    These are setTabVisible candidates
        sb.append("## 4. Visibility Setter Candidates\n\n");
        sb.append("Functions that reference both sidebar strings and have a bool parameter:\n\n");
        for (String key : new String[]{"MAIN_MENU_HOME", "MAIN_MENU_BAG"}) {
            List<Function> fl = stringFuncs.get(key);
            if (fl == null) continue;
            for (Function f : fl) {
                // Trace callers of callers to find the visibility toggle
                Set<Function> callers = getCallers(f);
                for (Function caller : callers) {
                    Set<Function> grandCallers = getCallers(caller);
                    for (Function gc : grandCallers) {
                        if (monitor.isCancelled()) break;
                        // Small functions (< 200 bytes) with 2 params are candidates
                        long size = gc.getBody().getNumAddresses();
                        if (size < 200 && size > 10) {
                            sb.append("Candidate: `").append(gc.getName()).append("` @ `0x")
                              .append(Long.toHexString(gc.getEntryPoint().getOffset()))
                              .append("` (").append(size).append(" bytes)\n");
                            sb.append(findRelroPointers(gc));
                        }
                    }
                }
            }
        }

        decomp.dispose();

        String filepath = outputDir + "/set_tab_visible.md";
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
                    if (!found) { sb.append("**.data.rel.ro fptrs:**\n"); found = true; }
                    sb.append("- `0x").append(Long.toHexString(searchAddr.getOffset())).append("`\n");
                    searchAddr = searchAddr.add(8);
                }
            }
        } catch (Exception e) {}
        if (sb.length() > 0) sb.append("\n");
        return sb.toString();
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
                if (code.length() > 10000) code = code.substring(0, 10000) + "\n// ...truncated...";
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
