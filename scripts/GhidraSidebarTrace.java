// Ghidra headless script: Trace sidebar tab registration chain
// Decompiles FUN_1001e5170 (core tab registration), FUN_1001e55b0 (simple wrapper),
// FUN_1001e564c (full wrapper), and ALL their callers to understand how sidebar
// tabs are created — specifically how the "Bag" button gets placed.
//
// @category Analysis

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;

import java.io.*;
import java.util.*;

public class GhidraSidebarTrace extends GhidraScript {

    private DecompInterface decomp;

    @Override
    public void run() throws Exception {
        String outPath = System.getenv("VGF_REPORT_DIR");
        if (outPath == null) outPath = "/tmp";
        String outFile = outPath + "/sidebar_trace.md";

        decomp = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        decomp.setOptions(opts);
        decomp.openProgram(currentProgram);

        StringBuilder sb = new StringBuilder();
        sb.append("# Sidebar Tab Registration Trace\n\n");

        // Core functions to decompile
        long[] coreFuncs = {
            0x1001e5170L,  // core tab registration (FUN_1001e5170)
            0x1001e55b0L,  // simple wrapper (FUN_1001e55b0)
            0x1001e5600L,  // intermediate wrapper
            0x1001e564cL,  // full wrapper (FUN_1001e564c)
            0x1001e46fcL,  // slot configuration (FUN_1001e46fc)
            0x1001e4650L,  // event handler registration
            0x1001e503cL,  // tab controller constructor
            0x1001e54f0L,  // tab controller allocator
            0x1001e50c8L,  // layout function (vtable[25])
        };
        String[] coreNames = {
            "core_tab_register", "simple_wrapper", "intermediate_wrapper",
            "full_wrapper", "slot_configure", "event_handler_reg",
            "tabctrl_constructor", "tabctrl_allocator", "layout_function"
        };

        sb.append("## Core Tab Registration Functions\n\n");
        for (int i = 0; i < coreFuncs.length; i++) {
            sb.append(decompileAt(coreFuncs[i], coreNames[i]));
            sb.append("\n---\n\n");
        }

        // Find and decompile ALL callers of the 3 wrapper functions
        long[] wrappers = { 0x1001e55b0L, 0x1001e5600L, 0x1001e564cL };
        String[] wrapperNames = { "simple_wrapper_0x1e55b0", "intermediate_0x1e5600", "full_wrapper_0x1e564c" };

        sb.append("## All Callers of Tab Registration Wrappers\n\n");
        for (int w = 0; w < wrappers.length; w++) {
            Address wAddr = toAddr(wrappers[w]);
            Function wFunc = getFunctionAt(wAddr);
            if (wFunc == null) wFunc = currentProgram.getFunctionManager().getFunctionContaining(wAddr);

            sb.append("### Callers of " + wrapperNames[w] + "\n\n");

            if (wFunc != null) {
                Set<Function> callers = getCallers(wFunc);
                sb.append("Found " + callers.size() + " callers:\n\n");
                int count = 0;
                for (Function caller : callers) {
                    if (monitor.isCancelled()) break;
                    if (count++ >= 20) { sb.append("... truncated\n"); break; }
                    sb.append(decompileFunc(caller, 8000));
                    sb.append("\n---\n\n");
                }
            } else {
                sb.append("*Function not found at 0x" + Long.toHexString(wrappers[w]) + "*\n\n");
            }
        }

        // Decompile HEROES_BAG panel class methods
        sb.append("## HEROES_BAG Panel Class\n\n");
        long[] bagFuncs = {
            0x1001f564cL,  // constructor
            0x1001f61e8L,  // icon getter (returns "main_nav_heroes")
            0x1001f5f1cL,  // label getter (returns "MAIN_MENU_BAG")
            0x1001fea18L,  // vtable method calling FUN_1001e55b0
            0x1001feaacL,  // vtable method calling FUN_1001e55b0
        };
        String[] bagNames = {
            "bag_constructor", "bag_icon_getter", "bag_label_getter",
            "bag_tab_register_1", "bag_tab_register_2"
        };
        for (int i = 0; i < bagFuncs.length; i++) {
            sb.append(decompileAt(bagFuncs[i], bagNames[i]));
            sb.append("\n---\n\n");
        }

        // HOME panel class methods
        sb.append("## HOME Panel Class\n\n");
        long[] homeFuncs = {
            0x1001f38b0L,  // label getter ("MAIN_MENU_HOME")
        };
        for (long addr : homeFuncs) {
            sb.append(decompileAt(addr, "home_label_getter"));
            // Find callers
            Function f = getFunctionAt(toAddr(addr));
            if (f == null) f = currentProgram.getFunctionManager().getFunctionContaining(toAddr(addr));
            if (f != null) {
                Set<Function> callers = getCallers(f);
                sb.append("Callers: " + callers.size() + "\n\n");
                for (Function c : callers) {
                    if (monitor.isCancelled()) break;
                    sb.append("  - " + c.getName() + " @ 0x" + Long.toHexString(c.getEntryPoint().getOffset()) + "\n");
                }
            }
            sb.append("\n---\n\n");
        }

        // Look at what references main_nav_market, main_nav_home strings
        sb.append("## String Cross-References\n\n");
        String[] iconStrings = {
            "main_nav_home", "main_nav_heroes", "main_nav_market",
            "main_nav_party", "main_nav_social", "MAIN_MENU_BAG",
            "MAIN_MENU_HOME", "MAIN_MENU_HEROES", "MAIN_MENU_MARKET",
            "MAIN_MENU_PARTY", "MAIN_MENU_SOCIAL"
        };
        for (String s : iconStrings) {
            if (monitor.isCancelled()) break;
            sb.append("### \"" + s + "\"\n\n");
            List<Address> addrs = findStringAddresses(s);
            if (addrs.isEmpty()) {
                sb.append("Not found\n\n");
                continue;
            }
            for (Address addr : addrs) {
                sb.append("String at 0x" + Long.toHexString(addr.getOffset()) + "\n");
                ReferenceIterator refs = currentProgram.getReferenceManager().getReferencesTo(addr);
                int refCount = 0;
                while (refs.hasNext() && refCount < 10) {
                    Reference ref = refs.next();
                    Function f = currentProgram.getFunctionManager().getFunctionContaining(ref.getFromAddress());
                    String fname = f != null ? f.getName() + " @ 0x" + Long.toHexString(f.getEntryPoint().getOffset()) : "unknown";
                    sb.append("  xref from 0x" + Long.toHexString(ref.getFromAddress().getOffset()) + " in " + fname + "\n");
                    refCount++;
                }
            }
            sb.append("\n");
        }

        decomp.dispose();

        FileWriter fw = new FileWriter(outFile);
        fw.write(sb.toString());
        fw.close();
        println("[sidebar-trace] Wrote " + outFile + " (" + sb.length() + " bytes)");
    }

    private String decompileAt(long va, String label) {
        Address addr = toAddr(va);
        Function func = getFunctionAt(addr);
        if (func == null) func = currentProgram.getFunctionManager().getFunctionContaining(addr);
        if (func == null) return "### " + label + " (0x" + Long.toHexString(va) + ")\n\n*Not found*\n\n";
        return decompileFunc(func, 12000);
    }

    private String decompileFunc(Function func, int maxLen) {
        StringBuilder sb = new StringBuilder();
        String addr = "0x" + Long.toHexString(func.getEntryPoint().getOffset());
        sb.append("### `" + func.getName() + "` @ `" + addr + "`\n\n");
        try {
            DecompileResults result = decomp.decompileFunction(func, 60, monitor);
            if (result != null && result.decompileCompleted() && result.getDecompiledFunction() != null) {
                String code = result.getDecompiledFunction().getC();
                if (code.length() > maxLen) code = code.substring(0, maxLen) + "\n// ... truncated ...";
                sb.append("```c\n" + code + "\n```\n\n");
            } else {
                sb.append("*Decompilation failed*\n\n");
            }
        } catch (Exception e) {
            sb.append("*Error: " + e.getMessage() + "*\n\n");
        }
        return sb.toString();
    }

    private Set<Function> getCallers(Function func) {
        Set<Function> callers = new HashSet<>();
        ReferenceIterator refs = currentProgram.getReferenceManager().getReferencesTo(func.getEntryPoint());
        while (refs.hasNext()) {
            Reference ref = refs.next();
            Function caller = currentProgram.getFunctionManager().getFunctionContaining(ref.getFromAddress());
            if (caller != null && !caller.equals(func)) callers.add(caller);
        }
        return callers;
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
            ghidra.program.model.mem.Memory mem = currentProgram.getMemory();
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
}
