// Ghidra: Find the sidebar builder by tracing who calls the icon/label vtable getters
// @category Analysis

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;

public class GhidraSidebarBuilder extends GhidraScript {
    private DecompInterface decomp;

    @Override
    public void run() throws Exception {
        String outPath = System.getenv("VGF_REPORT_DIR");
        if (outPath == null) outPath = "/tmp";

        decomp = new DecompInterface();
        decomp.setOptions(new DecompileOptions());
        decomp.openProgram(currentProgram);

        StringBuilder sb = new StringBuilder();
        sb.append("# Sidebar Builder Analysis\n\n");

        // Phase 1: Find vtable layout for each panel class
        // Read vtable entries to find icon/label getter offsets
        long[] panelVtables = {
            0x10146c858L,  // HOME
            0x10146dbe0L,  // HEROES_BAG
        };
        String[] panelNames = {"HOME", "HEROES_BAG"};

        // Known icon getter functions
        long[][] knownGetters = {
            {0x1001f3b80L, 0x1001f3bb4L, 0x1001f38b0L, 0x1001f38c0L}, // HOME: icon1, icon2, label1, label2
            {0x1001f61e8L, 0x1001f629cL, 0x1001f5f1cL, 0x1001f5f2cL}, // BAG: icon1, icon2, label1, label2
        };

        Memory mem = currentProgram.getMemory();
        FunctionManager fm = currentProgram.getFunctionManager();

        sb.append("## Phase 1: Vtable Slot Identification\n\n");
        int iconSlot1 = -1, iconSlot2 = -1, labelSlot1 = -1, labelSlot2 = -1;

        for (int p = 0; p < panelVtables.length; p++) {
            sb.append("### " + panelNames[p] + " vtable at 0x" + Long.toHexString(panelVtables[p]) + "\n\n");
            for (int slot = 0; slot < 40; slot++) {
                try {
                    long val = mem.getLong(toAddr(panelVtables[p] + slot * 8));
                    for (int g = 0; g < 4; g++) {
                        if (val == knownGetters[p][g]) {
                            String kind = g < 2 ? "icon" + (g+1) : "label" + (g-1);
                            sb.append("  slot[" + slot + "] (offset 0x" + Long.toHexString(slot*8) + "): " + kind + " = 0x" + Long.toHexString(val) + "\n");
                            if (g == 0) iconSlot1 = slot;
                            if (g == 1) iconSlot2 = slot;
                            if (g == 2) labelSlot1 = slot;
                            if (g == 3) labelSlot2 = slot;
                        }
                    }
                } catch (Exception e) {}
            }
            sb.append("\n");
        }
        sb.append("Icon slot 1: " + iconSlot1 + " (offset 0x" + Long.toHexString(iconSlot1*8) + ")\n");
        sb.append("Icon slot 2: " + iconSlot2 + " (offset 0x" + Long.toHexString(iconSlot2*8) + ")\n");
        sb.append("Label slot 1: " + labelSlot1 + " (offset 0x" + Long.toHexString(labelSlot1*8) + ")\n");
        sb.append("Label slot 2: " + labelSlot2 + " (offset 0x" + Long.toHexString(labelSlot2*8) + ")\n\n");

        // Phase 2: Find callers of each icon getter (these are the sidebar builders)
        sb.append("## Phase 2: Callers of Icon/Label Getters\n\n");
        long[] allGetters = {
            0x1001f3b80L, 0x1001f3bb4L,  // HOME icon
            0x1001f61e8L, 0x1001f629cL,  // BAG icon
            0x100246af4L, 0x100246b8cL,  // MARKET icon
            0x100253a78L, 0x100253b30L,  // PARTY icon
            0x100210598L, 0x1002105acL,  // SOCIAL icon (PEOPLE)
            0x100268358L, 0x1002683f0L,  // SOCIAL icon (FRIENDS)
            0x1001f38b0L, 0x1001f38c0L,  // HOME label
            0x1001f5f1cL, 0x1001f5f2cL,  // BAG label
            0x100245640L, 0x100245650L,  // MARKET label
            0x100253a84L, 0x100253b3cL,  // PARTY label
            0x10020d970L, 0x10020d980L,  // SOCIAL label (PEOPLE)
            0x100267f98L, 0x100267fa8L,  // SOCIAL label (FRIENDS)
        };

        Set<Long> decompiled = new HashSet<>();
        for (long getter : allGetters) {
            Function getterFunc = fm.getFunctionAt(toAddr(getter));
            if (getterFunc == null) continue;
            Set<Function> callers = getCallers(getterFunc);
            for (Function caller : callers) {
                long callerAddr = caller.getEntryPoint().getOffset();
                if (decompiled.contains(callerAddr)) continue;
                decompiled.add(callerAddr);
                sb.append("### Caller of icon/label getter: `" + caller.getName() + "` @ `0x" + Long.toHexString(callerAddr) + "`\n\n");
                sb.append("Calls getter at 0x" + Long.toHexString(getter) + "\n\n");
                sb.append(decompFunc(caller, 15000));
                sb.append("\n---\n\n");
            }
        }

        // Phase 3: Dump ALL vtable entries for each panel to find constructors
        sb.append("## Phase 3: Panel Vtable Dumps\n\n");
        long[] allVtables = {
            0x10146c858L,  // HOME
            0x10146dbe0L,  // HEROES_BAG
        };
        String[] vtNames = {"HOME", "HEROES_BAG"};
        for (int v = 0; v < allVtables.length; v++) {
            sb.append("### " + vtNames[v] + " (0x" + Long.toHexString(allVtables[v]) + ")\n\n");
            for (int slot = 0; slot < 50; slot++) {
                try {
                    long val = mem.getLong(toAddr(allVtables[v] + slot * 8));
                    if (val >= 0x10000b5e0L && val <= 0x101148000L) {
                        Function f = fm.getFunctionAt(toAddr(val));
                        String name = f != null ? f.getName() : "?";
                        sb.append("  [" + slot + "] 0x" + Long.toHexString(val) + " " + name + "\n");
                    }
                } catch (Exception e) {}
            }
            sb.append("\n");
        }

        // Phase 4: Find the MARKET panel vtable
        // FUN_100246af4 returns "main_nav_market". Find its vtable.
        sb.append("## Phase 4: Find MARKET Panel Vtable\n\n");
        long marketIcon = 0x100246af4L;
        // Search __DATA for pointer to this function
        byte[] searchBytes = new byte[8];
        for (int i = 0; i < 8; i++) searchBytes[i] = (byte)((marketIcon >> (i*8)) & 0xff);
        Address searchAddr = toAddr(0x101444000L);
        Address endAddr = toAddr(0x101ea8000L);
        while (searchAddr != null && searchAddr.compareTo(endAddr) < 0) {
            searchAddr = mem.findBytes(searchAddr, searchBytes, null, true, monitor);
            if (searchAddr != null) {
                long vtableGuess = searchAddr.getOffset() - (iconSlot1 >= 0 ? iconSlot1 * 8 : 0x40);
                sb.append("  main_nav_market getter at __DATA 0x" + Long.toHexString(searchAddr.getOffset()));
                sb.append(" → vtable base ≈ 0x" + Long.toHexString(vtableGuess) + "\n");
                searchAddr = searchAddr.add(1);
            }
        }

        // Also find PARTY and SOCIAL vtables
        long[] otherIcons = {0x100253a78L, 0x100210598L, 0x100268358L};
        String[] otherNames = {"PARTY", "SOCIAL(PEOPLE)", "SOCIAL(FRIENDS)"};
        for (int i = 0; i < otherIcons.length; i++) {
            for (int j = 0; j < 8; j++) searchBytes[j] = (byte)((otherIcons[i] >> (j*8)) & 0xff);
            searchAddr = toAddr(0x101444000L);
            while (searchAddr != null && searchAddr.compareTo(endAddr) < 0) {
                searchAddr = mem.findBytes(searchAddr, searchBytes, null, true, monitor);
                if (searchAddr != null) {
                    long vtableGuess = searchAddr.getOffset() - (iconSlot1 >= 0 ? iconSlot1 * 8 : 0x40);
                    sb.append("  " + otherNames[i] + " icon getter at __DATA 0x" + Long.toHexString(searchAddr.getOffset()));
                    sb.append(" → vtable base ≈ 0x" + Long.toHexString(vtableGuess) + "\n");
                    searchAddr = searchAddr.add(1);
                }
            }
        }

        // Phase 5: Find the main sidebar init — search for FUN_1001fd688 (tab name registration)
        // and FUN_1001dac1c which registers tab names
        sb.append("\n## Phase 5: Tab Name Registration (FUN_1001fd688)\n\n");
        Function tabNameReg = fm.getFunctionAt(toAddr(0x1001fd688L));
        if (tabNameReg == null) tabNameReg = fm.getFunctionContaining(toAddr(0x1001fd688L));
        if (tabNameReg != null) {
            sb.append(decompFunc(tabNameReg, 15000));
            Set<Function> callers = getCallers(tabNameReg);
            sb.append("\nCallers (" + callers.size() + "):\n");
            for (Function c : callers) {
                sb.append("  " + c.getName() + " @ 0x" + Long.toHexString(c.getEntryPoint().getOffset()) + "\n");
                if (!decompiled.contains(c.getEntryPoint().getOffset())) {
                    decompiled.add(c.getEntryPoint().getOffset());
                    sb.append(decompFunc(c, 10000));
                }
            }
        }

        // Also trace FUN_1001dac1c
        sb.append("\n## Phase 6: FUN_1001dac1c (tab registration)\n\n");
        Function tabReg = fm.getFunctionAt(toAddr(0x1001dac1cL));
        if (tabReg == null) tabReg = fm.getFunctionContaining(toAddr(0x1001dac1cL));
        if (tabReg != null) {
            sb.append(decompFunc(tabReg, 8000));
            Set<Function> callers = getCallers(tabReg);
            sb.append("\nCallers (" + callers.size() + "):\n\n");
            for (Function c : callers) {
                if (monitor.isCancelled()) break;
                sb.append("  " + c.getName() + " @ 0x" + Long.toHexString(c.getEntryPoint().getOffset()) + "\n");
            }
        }

        decomp.dispose();
        FileWriter fw = new FileWriter(outPath + "/sidebar_builder.md");
        fw.write(sb.toString());
        fw.close();
        println("[sidebar-builder] Wrote " + outPath + "/sidebar_builder.md (" + sb.length() + " bytes)");
    }

    private String decompFunc(Function func, int maxLen) {
        try {
            DecompileResults result = decomp.decompileFunction(func, 60, monitor);
            if (result != null && result.decompileCompleted() && result.getDecompiledFunction() != null) {
                String code = result.getDecompiledFunction().getC();
                if (code.length() > maxLen) code = code.substring(0, maxLen) + "\n// ... truncated ...";
                return "```c\n" + code + "\n```\n\n";
            }
        } catch (Exception e) {}
        return "*Decompilation failed*\n\n";
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
}
