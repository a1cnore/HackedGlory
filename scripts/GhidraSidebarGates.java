// Ghidra: Decompile sidebar gating functions and registration
// @category Analysis

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;

public class GhidraSidebarGates extends GhidraScript {
    private DecompInterface decomp;

    @Override
    public void run() throws Exception {
        String outPath = System.getenv("VGF_REPORT_DIR");
        if (outPath == null) outPath = "/tmp";

        decomp = new DecompInterface();
        decomp.setOptions(new DecompileOptions());
        decomp.openProgram(currentProgram);

        StringBuilder sb = new StringBuilder();
        sb.append("# Sidebar Gating Functions\n\n");

        // Key functions to decompile
        long[][] funcs = {
            {0x1001fc9c4L}, // sidebar panel registration
            {0x1001fc960L}, // sidebar controller init
            {0x100126b6cL}, // gate: SOCIAL panel
            {0x100131560L}, // gate: ACADEMY panel
            {0x1001fdbb8L}, // FUN_1001fdbb8 — called with visible flag
            {0x1001fdb84L}, // event handler
            {0x1001fedecL}, // HOME callback (thunk target)
            {0x1001ff8e4L}, // PARTY callback
            {0x1001ff8fcL}, // MARKET callback
            {0x1001feee8L}, // HEROES callback (thunk target)
            {0x1001fef3cL}, // ACADEMY callback (thunk target)
            {0x1001fefacL}, // NEWS callback (thunk target)
            {0x1001ff088L}, // PEOPLE callback (thunk target)
            {0x1001ff920L}, // FRIENDS callback
            // The sidebar controller's show/addPanel methods
            {0x1001fc9bcL}, // FUN_1001fc9bc
            {0x1001fca10L}, // nearby function
            // Main menu vtable entries
            {0x10020cfb8L}, // thunk_FUN_10020cfb8 (small social replacement constructor)
            // Panel class constructors
            {0x1001f3424L}, // thunk_FUN_1001f3424 (HOME panel constructor)
            {0x1001f59e8L}, // thunk_FUN_1001f59e8 (HEROES_BAG panel constructor)
        };
        String[] names = {
            "sidebar_register_panel", "sidebar_controller_init",
            "gate_social", "gate_academy",
            "set_sidebar_visible", "sidebar_event_handler",
            "HOME_callback", "PARTY_callback", "MARKET_callback",
            "HEROES_callback", "ACADEMY_callback", "NEWS_callback",
            "PEOPLE_callback", "FRIENDS_callback",
            "sidebar_add", "sidebar_nearby",
            "small_social_ctor",
            "home_panel_ctor", "heroes_bag_ctor"
        };

        for (int i = 0; i < funcs.length; i++) {
            if (monitor.isCancelled()) break;
            Address addr = toAddr(funcs[i][0]);
            Function f = currentProgram.getFunctionManager().getFunctionAt(addr);
            if (f == null) f = currentProgram.getFunctionManager().getFunctionContaining(addr);
            if (f == null) {
                sb.append("### " + names[i] + " (0x" + Long.toHexString(funcs[i][0]) + ")\n\n*Not found*\n\n---\n\n");
                continue;
            }
            sb.append("### " + names[i] + ": `" + f.getName() + "` @ `0x" + Long.toHexString(f.getEntryPoint().getOffset()) + "`\n\n");
            try {
                DecompileResults result = decomp.decompileFunction(f, 60, monitor);
                if (result != null && result.decompileCompleted() && result.getDecompiledFunction() != null) {
                    String code = result.getDecompiledFunction().getC();
                    if (code.length() > 8000) code = code.substring(0, 8000) + "\n// ... truncated ...";
                    sb.append("```c\n" + code + "\n```\n\n");
                }
            } catch (Exception e) {
                sb.append("*Error*\n\n");
            }

            // For gate functions, find callers
            if (names[i].startsWith("gate_")) {
                Set<Function> callers = new HashSet<>();
                ReferenceIterator refs = currentProgram.getReferenceManager().getReferencesTo(f.getEntryPoint());
                while (refs.hasNext()) {
                    Reference ref = refs.next();
                    Function caller = currentProgram.getFunctionManager().getFunctionContaining(ref.getFromAddress());
                    if (caller != null) callers.add(caller);
                }
                sb.append("Callers (" + callers.size() + "): ");
                for (Function c : callers) {
                    sb.append(c.getName() + " @ 0x" + Long.toHexString(c.getEntryPoint().getOffset()) + ", ");
                }
                sb.append("\n\n");
            }

            // For sidebar_register_panel, find __DATA fptr
            if (names[i].equals("sidebar_register_panel")) {
                long target = f.getEntryPoint().getOffset();
                byte[] searchBytes = new byte[8];
                for (int j = 0; j < 8; j++) searchBytes[j] = (byte)((target >> (j*8)) & 0xff);
                ghidra.program.model.mem.Memory mem = currentProgram.getMemory();
                Address searchAddr = toAddr(0x101444000L);
                Address endAddr = toAddr(0x101ea8000L);
                while (searchAddr != null && searchAddr.compareTo(endAddr) < 0) {
                    searchAddr = mem.findBytes(searchAddr, searchBytes, null, true, monitor);
                    if (searchAddr != null) {
                        sb.append("__DATA fptr at 0x" + Long.toHexString(searchAddr.getOffset()) + " (g_base + 0x" + Long.toHexString(searchAddr.getOffset() - 0x100000000L) + ")\n\n");
                        searchAddr = searchAddr.add(1);
                    }
                }
            }

            sb.append("---\n\n");
        }

        decomp.dispose();
        FileWriter fw = new FileWriter(outPath + "/sidebar_gates.md");
        fw.write(sb.toString());
        fw.close();
        println("[sidebar-gates] Wrote " + outPath + "/sidebar_gates.md (" + sb.length() + " bytes)");
    }
}
