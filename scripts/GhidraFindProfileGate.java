// Find __DATA function pointers for trophy/ranked profile visibility.
// Target: the refresh function that hides the trophy section and ranked tabs,
// similar to how 0x1002a8f20 hides the leaderboard button.
// @category Analysis

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;

public class GhidraFindProfileGate extends GhidraScript {
    private DecompInterface decomp;

    @Override
    public void run() throws Exception {
        String outputDir = System.getenv("VGF_REPORT_DIR");
        if (outputDir == null) outputDir = "/tmp/vgf_ghidra_reports";

        decomp = new DecompInterface();
        decomp.setOptions(new DecompileOptions());
        decomp.openProgram(currentProgram);

        StringBuilder sb = new StringBuilder();
        sb.append("# Profile Trophy/Ranked Visibility Gates\n\n");

        // 1. Search __DATA for function pointers to trophy-area functions
        // The trophy code is around 0x100260000-0x100267000
        // And ranked profile code around 0x10025c000-0x10025e000
        sb.append("## 1. __DATA pointers to trophy/ranked functions\n\n");

        Memory mem = currentProgram.getMemory();
        FunctionManager fm = currentProgram.getFunctionManager();

        // Scan __DATA for pointers to functions in the trophy code range
        long dataStart = 0x101444000L; // approximate __DATA start
        long dataEnd = 0x101500000L;   // approximate __DATA end

        // Trophy functions of interest
        long[][] targetRanges = {
            {0x100260000L, 0x100268000L}, // trophy area
            {0x10025a000L, 0x10025e000L}, // ranked skill tier area
            {0x100265000L, 0x100266000L}, // trophy builder specifically
            {0x10023c000L, 0x10023e000L}, // guild trophy area
        };

        sb.append("| __DATA Offset | VA | Points To | Function |\n");
        sb.append("|---------------|-----|-----------|----------|\n");

        for (long addr = dataStart; addr < dataEnd; addr += 8) {
            Address checkAddr = currentProgram.getAddressFactory().getAddress("0x" + Long.toHexString(addr));
            try {
                long val = mem.getLong(checkAddr);
                for (long[] range : targetRanges) {
                    if (val >= range[0] && val < range[1]) {
                        Function func = fm.getFunctionAt(
                            currentProgram.getAddressFactory().getAddress("0x" + Long.toHexString(val)));
                        String funcName = func != null ? func.getName() : "unknown";
                        sb.append("| 0x").append(Long.toHexString(addr - 0x100000000L));
                        sb.append(" | 0x").append(Long.toHexString(addr));
                        sb.append(" | 0x").append(Long.toHexString(val));
                        sb.append(" | ").append(funcName).append(" |\n");
                    }
                }
            } catch (MemoryAccessException e) {}
        }
        sb.append("\n");

        // 2. Decompile the key thunk functions we found
        // thunk_FUN_10025a800 is the trophy page builder thunk
        sb.append("## 2. Trophy page thunks\n\n");

        // Find thunks by scanning for pointers to FUN_10025a800
        sb.append("### Pointers to FUN_10025a800 (trophy page) in __DATA:\n\n");
        long target = 0x10025a800L;
        for (long addr = dataStart; addr < dataEnd; addr += 8) {
            Address checkAddr = currentProgram.getAddressFactory().getAddress("0x" + Long.toHexString(addr));
            try {
                long val = mem.getLong(checkAddr);
                if (val == target) {
                    sb.append("- `0x").append(Long.toHexString(addr))
                      .append("` (offset 0x").append(Long.toHexString(addr - 0x100000000L)).append(")\n");
                }
            } catch (MemoryAccessException e) {}
        }

        // FUN_10025fd1c — trophy sub-panel constructor
        sb.append("\n### Pointers to FUN_10025fd1c (trophy sub-panel) in __DATA:\n\n");
        target = 0x10025fd1cL;
        for (long addr = dataStart; addr < dataEnd; addr += 8) {
            Address checkAddr = currentProgram.getAddressFactory().getAddress("0x" + Long.toHexString(addr));
            try {
                long val = mem.getLong(checkAddr);
                if (val == target) {
                    sb.append("- `0x").append(Long.toHexString(addr))
                      .append("` (offset 0x").append(Long.toHexString(addr - 0x100000000L)).append(")\n");
                }
            } catch (MemoryAccessException e) {}
        }

        // FUN_100265bd4 — trophy section renderer (the one that checks +0x18f21)
        sb.append("\n### Pointers to FUN_100265bd4 (trophy renderer) in __DATA:\n\n");
        target = 0x100265bd4L;
        for (long addr = dataStart; addr < dataEnd; addr += 8) {
            Address checkAddr = currentProgram.getAddressFactory().getAddress("0x" + Long.toHexString(addr));
            try {
                long val = mem.getLong(checkAddr);
                if (val == target) {
                    sb.append("- `0x").append(Long.toHexString(addr))
                      .append("` (offset 0x").append(Long.toHexString(addr - 0x100000000L)).append(")\n");
                }
            } catch (MemoryAccessException e) {}
        }

        // FUN_10025c044 — ranked profile constructor (clears visibility at +0x84)
        sb.append("\n### Pointers to FUN_10025c044 (ranked profile) in __DATA:\n\n");
        target = 0x10025c044L;
        for (long addr = dataStart; addr < dataEnd; addr += 8) {
            Address checkAddr = currentProgram.getAddressFactory().getAddress("0x" + Long.toHexString(addr));
            try {
                long val = mem.getLong(checkAddr);
                if (val == target) {
                    sb.append("- `0x").append(Long.toHexString(addr))
                      .append("` (offset 0x").append(Long.toHexString(addr - 0x100000000L)).append(")\n");
                }
            } catch (MemoryAccessException e) {}
        }

        // 3. The profile data update function that populates trophies
        // FUN_10026609c — trophy tab switcher
        sb.append("\n### Pointers to FUN_10026609c (trophy tab switcher) in __DATA:\n\n");
        target = 0x10026609cL;
        for (long addr = dataStart; addr < dataEnd; addr += 8) {
            Address checkAddr = currentProgram.getAddressFactory().getAddress("0x" + Long.toHexString(addr));
            try {
                long val = mem.getLong(checkAddr);
                if (val == target) {
                    sb.append("- `0x").append(Long.toHexString(addr))
                      .append("` (offset 0x").append(Long.toHexString(addr - 0x100000000L)).append(")\n");
                }
            } catch (MemoryAccessException e) {}
        }

        // 4. Decompile the profile update/refresh function that decides what to show
        // FUN_1002654ec calls FUN_1002604c4(lVar2) to layout the trophy sub-panel
        sb.append("\n## 3. Profile refresh function (FUN_1002654ec)\n\n");
        sb.append(decompileAt(0x1002654ecL));
        sb.append("\n### Pointers to FUN_1002654ec in __DATA:\n\n");
        target = 0x1002654ecL;
        for (long addr = dataStart; addr < dataEnd; addr += 8) {
            Address checkAddr = currentProgram.getAddressFactory().getAddress("0x" + Long.toHexString(addr));
            try {
                long val = mem.getLong(checkAddr);
                if (val == target) {
                    sb.append("- `0x").append(Long.toHexString(addr))
                      .append("` (offset 0x").append(Long.toHexString(addr - 0x100000000L)).append(")\n");
                }
            } catch (MemoryAccessException e) {}
        }

        // 5. Also search for the thunk versions
        sb.append("\n## 4. Thunk pointers (indirect references)\n\n");
        long[] thunkTargets = {
            0x100260240L, // thunk_FUN_10025fd1c
            0x10025b128L, // thunk_FUN_10025a800
            0x10025cfb4L, // thunk_FUN_10025c044
        };
        for (long tt : thunkTargets) {
            sb.append("### Pointers to thunk 0x").append(Long.toHexString(tt)).append(" in __DATA:\n\n");
            for (long addr = dataStart; addr < dataEnd; addr += 8) {
                Address checkAddr = currentProgram.getAddressFactory().getAddress("0x" + Long.toHexString(addr));
                try {
                    long val = mem.getLong(checkAddr);
                    if (val == tt) {
                        sb.append("- `0x").append(Long.toHexString(addr))
                          .append("` (offset 0x").append(Long.toHexString(addr - 0x100000000L)).append(")\n");
                    }
                } catch (MemoryAccessException e) {}
            }
            sb.append("\n");
        }

        String filepath = outputDir + "/profile_gate_pointers.md";
        FileWriter fw = new FileWriter(filepath);
        fw.write(sb.toString());
        fw.close();
        decomp.dispose();
        println("[analysis] Wrote " + filepath + " (" + sb.length() + " bytes)");
    }

    private String decompileAt(long va) {
        Address addr = currentProgram.getAddressFactory().getAddress("0x" + Long.toHexString(va));
        FunctionManager fm = currentProgram.getFunctionManager();
        Function func = fm.getFunctionAt(addr);
        if (func == null) func = fm.getFunctionContaining(addr);
        if (func == null) return "*Not found*\n\n";
        StringBuilder sb = new StringBuilder();
        sb.append("#### `").append(func.getName()).append("` @ `0x")
          .append(Long.toHexString(func.getEntryPoint().getOffset())).append("`\n\n");
        try {
            DecompileResults result = decomp.decompileFunction(func, 120, monitor);
            if (result != null && result.decompileCompleted() && result.getDecompiledFunction() != null) {
                String code = result.getDecompiledFunction().getC();
                if (code.length() > 10000) code = code.substring(0, 10000) + "\n// ...truncated...";
                sb.append("```c\n").append(code).append("\n```\n\n");
            }
        } catch (Exception e) {}
        return sb.toString();
    }
}
