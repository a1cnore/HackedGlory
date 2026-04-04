// Trace FUN_1002656cc — the function that sets *(param_1 + 0x18f21) = 1
// and FUN_1002654ec — the function at the hook target __DATA+0x147be00.
// @category Analysis

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;

public class GhidraTrophyFlagSetterTrace extends GhidraScript {
    private DecompInterface decomp;
    private Set<Long> decompCache = new HashSet<>();

    @Override
    public void run() throws Exception {
        String outputDir = System.getenv("VGF_REPORT_DIR");
        if (outputDir == null) outputDir = "/tmp/vgf_ghidra_reports";
        new File(outputDir).mkdirs();

        decomp = new DecompInterface();
        decomp.setOptions(new DecompileOptions());
        decomp.openProgram(currentProgram);

        StringBuilder sb = new StringBuilder();
        sb.append("# Trophy Flag Setter: FUN_1002656cc Deep Analysis\n\n");
        sb.append("**Date:** ").append(new java.text.SimpleDateFormat("yyyy-MM-dd HH:mm:ss").format(new java.util.Date())).append("\n\n");

        // =====================================================================
        // KEY FINDING: FUN_1002656cc sets *(param_1 + 0x18f21) = 1
        // =====================================================================
        sb.append("## KEY FINDING\n\n");
        sb.append("`FUN_1002656cc` is the ONLY function that writes `*(param_1 + 0x18f21) = 1`.\n");
        sb.append("The write occurs at the end of a complex string comparison chain.\n\n");

        // 1. Decompile FUN_1002656cc again with higher timeout
        sb.append("## 1. FUN_1002656cc (Trophy Flag Setter)\n\n");
        sb.append(decompileAt(0x1002656ccL, 180));

        // 2. Callers of FUN_1002656cc
        sb.append("## 2. Callers of FUN_1002656cc\n\n");
        List<Long> callers = getCallerAddresses(0x1002656ccL, 10);
        sb.append("Found ").append(callers.size()).append(" callers:\n\n");
        for (Long addr : callers) {
            sb.append(decompileAt(addr, 180));
            // Also trace THEIR callers
            sb.append("### Callers of 0x").append(Long.toHexString(addr)).append(":\n\n");
            List<Long> callers2 = getCallerAddresses(addr, 5);
            for (Long addr2 : callers2) {
                sb.append(decompileAt(addr2, 120));
            }
        }

        // 3. FUN_1002654ec — the hook target function
        sb.append("## 3. FUN_1002654ec (Hook Target Function)\n\n");
        sb.append("The hook target at __DATA+0x147be00 points to `thunk_FUN_1002654ec` at 0x1002654e8.\n");
        sb.append("Let's decompile FUN_1002654ec itself:\n\n");
        sb.append(decompileAt(0x1002654ecL, 180));
        sb.append("### Callers of FUN_1002654ec:\n\n");
        List<Long> hookCallers = getCallerAddresses(0x1002654ecL, 10);
        for (Long addr : hookCallers) {
            sb.append(decompileAt(addr, 120));
        }
        sb.append("### Callers of thunk_FUN_1002654ec (0x1002654e8):\n\n");
        List<Long> thunkCallers = getCallerAddresses(0x1002654e8L, 10);
        for (Long addr : thunkCallers) {
            sb.append(decompileAt(addr, 120));
        }

        // 4. FUN_100265b2c — called in the trophy data loop inside FUN_1002656cc
        // It adds trophy entries to param_1 + 0x18ef8
        sb.append("## 4. FUN_100265b2c (Trophy Entry Adder, called in loop)\n\n");
        sb.append(decompileAt(0x100265b2cL, 120));

        // 5. FUN_100262de8 — called when string comparison fails (other branch)
        sb.append("## 5. FUN_100262de8 (Called when string != empty, other branch)\n\n");
        sb.append(decompileAt(0x100262de8L, 120));

        // 6. FUN_10015d3ec and FUN_10015d3f8 — used in the local player comparison
        sb.append("## 6. FUN_10015d3ec (Get local player data)\n\n");
        sb.append(decompileAt(0x10015d3ecL, 60));
        sb.append("## 6b. FUN_10015d3f8 (Check local player exists)\n\n");
        sb.append(decompileAt(0x10015d3f8L, 60));

        // 7. Trace the data flow: param_2 in FUN_1002656cc has trophy data
        // param_2 + 0x28 = player name string
        // param_2 + 0xa8 = trophy count
        // param_2 + 0xb0 = trophy data array
        // param_2 + 0x90 = some flag
        sb.append("## 7. Object Layout in FUN_1002656cc\n\n");
        sb.append("### param_1 (profile panel object):\n");
        sb.append("| Offset | Field | Purpose |\n");
        sb.append("|--------|-------|--------|\n");
        sb.append("| +0x18f08 | string | Player handle/name (in THIS panel) |\n");
        sb.append("| +0x18f10 | size_t | String length (long form) |\n");
        sb.append("| +0x18f1f | byte | String SSO flag |\n");
        sb.append("| +0x18f20 | bool | \"is local player\" highlight flag |\n");
        sb.append("| +0x18f21 | byte | **TROPHY DATA POPULATED FLAG** |\n");
        sb.append("| +0x18ef8 | TrophyList | Trophy entries (count+array via FUN_10015ab5c/FUN_100265b2c) |\n");
        sb.append("| +0x3e10 | sub-panel | Some other sub-panel |\n");
        sb.append("| +0x2c48 | sub-panel | Color indicator panel |\n\n");

        sb.append("### param_2 (incoming data object from server/cache):\n");
        sb.append("| Offset | Field | Purpose |\n");
        sb.append("|--------|-------|--------|\n");
        sb.append("| +0x28 | string | Player handle |\n");
        sb.append("| +0x30 | size_t | Handle length (long form) |\n");
        sb.append("| +0x3f | byte | Handle SSO flag |\n");
        sb.append("| +0x90 | char | Force-update flag? |\n");
        sb.append("| +0xa8 | int | Trophy count |\n");
        sb.append("| +0xb0 | long | Trophy data array pointer |\n\n");

        // 8. Analysis of conditions for the flag to be set
        sb.append("## 8. Condition Analysis for +0x18f21 = 1\n\n");
        sb.append("The flag is set under these conditions in FUN_1002656cc:\n\n");
        sb.append("1. **Primary path (LAB_100265984):** The incoming player handle (param_2+0x28) matches\n");
        sb.append("   the stored handle (param_1+0x18f08) — meaning this is the SAME player's data being refreshed.\n");
        sb.append("   In this case, the trophy list is cleared and re-populated from param_2's data,\n");
        sb.append("   then `*(param_1 + 0x18f21) = 1` is set.\n\n");
        sb.append("2. **Or:** The incoming handle does NOT match the stored handle but:\n");
        sb.append("   - `*(char *)(param_2 + 0x90) != '\\0'` (force-update flag), OR\n");
        sb.append("   - The incoming handle matches the LOCAL PLAYER's handle (from FUN_10015d3ec)\n");
        sb.append("   In either case, execution falls through to LAB_100265984 which sets the flag.\n\n");
        sb.append("3. **NOT set when:** The incoming handle is different AND neither the force flag\n");
        sb.append("   nor the local-player match triggers. In that case, FUN_100262de8 is called\n");
        sb.append("   (presumably populates a different panel) and the flag remains 0.\n\n");

        sb.append("### Critical insight\n\n");
        sb.append("The first check in FUN_1002656cc compares param_2+0x28 against an EMPTY string (DAT_101d91198).\n");
        sb.append("If the incoming handle IS empty:\n");
        sb.append("- It skips the FUN_100262de8 call (first branch)\n");
        sb.append("- Then checks if the STORED handle (param_1+0x18f08) is also empty\n");
        sb.append("- If both are empty, it jumps to LAB_100265858\n");
        sb.append("- At LAB_100265858, it compares the incoming handle against the stored handle\n");
        sb.append("- If they match (both empty), it then checks the local player comparison\n");
        sb.append("- If local player check passes OR force-update is set, the flag gets set\n\n");

        sb.append("### CONCLUSION: Why the flag stays 0\n\n");
        sb.append("The flag ONLY gets set when FUN_1002656cc is called with valid trophy data.\n");
        sb.append("This function must be called from the network/data layer when trophy data arrives.\n");
        sb.append("If the game server never sends trophy data (because the API endpoint is dead),\n");
        sb.append("FUN_1002656cc is never called, and +0x18f21 stays 0.\n\n");
        sb.append("### Fix strategy\n\n");
        sb.append("**Option A:** Hook FUN_1002656cc and call it with synthetic trophy data.\n");
        sb.append("**Option B:** Hook the profile panel initialization (FUN_100264e14) and force +0x18f21 = 1.\n");
        sb.append("  BUT this alone won't work because the trophy data arrays (+0x18ef8/+0x18f00) will be empty.\n");
        sb.append("**Option C:** Hook the profile layout refresh and:\n");
        sb.append("  1. Set +0x18f21 = 1 (to pass the gate)\n");
        sb.append("  2. Populate +0x18ef8 (count) and +0x18f00 (array) with synthetic trophy data\n");
        sb.append("  3. Call FUN_100265bd4 directly\n\n");
        sb.append("### About the hook target __DATA+0x147be00\n\n");
        sb.append("The hook target points to `thunk_FUN_1002654ec` which calls `FUN_1002654ec`.\n");
        sb.append("FUN_1002654ec is called FROM FUN_1002656cc at the end (line: `FUN_1002654ec(param_1)`).\n");
        sb.append("This function is a LAYOUT REFRESH that runs AFTER the trophy data is populated.\n");
        sb.append("Hooking it and setting +0x18f21=1 there is TOO LATE — FUN_1002656cc already\n");
        sb.append("decided whether to set the flag. The hook runs after the horse has bolted.\n\n");
        sb.append("**The correct hook point is earlier: the caller of FUN_1002656cc.**\n\n");

        String filepath = outputDir + "/trophy_flag_deep_trace.md";
        // Append to existing file
        FileWriter fw = new FileWriter(filepath, true);
        fw.write("\n\n---\n\n# SUPPLEMENTARY ANALYSIS\n\n" + sb.toString());
        fw.close();
        decomp.dispose();
        println("[analysis] Appended " + sb.length() + " bytes to " + filepath);
    }

    private String decompileAt(long va, int timeout) {
        Address addr = currentProgram.getAddressFactory().getAddress("0x" + Long.toHexString(va));
        FunctionManager fm = currentProgram.getFunctionManager();
        Function func = fm.getFunctionAt(addr);
        if (func == null) func = fm.getFunctionContaining(addr);
        if (func == null) return "*Not found at 0x" + Long.toHexString(va) + "*\n\n";

        long entryOff = func.getEntryPoint().getOffset();
        StringBuilder out = new StringBuilder();
        out.append("#### `").append(func.getName()).append("` @ `0x")
           .append(Long.toHexString(entryOff)).append("`\n\n");

        if (decompCache.contains(entryOff)) {
            out.append("*(Already decompiled above)*\n\n");
            return out.toString();
        }
        decompCache.add(entryOff);

        try {
            DecompileResults result = decomp.decompileFunction(func, timeout, monitor);
            if (result != null && result.decompileCompleted() && result.getDecompiledFunction() != null) {
                String code = result.getDecompiledFunction().getC();
                if (code.length() > 15000) code = code.substring(0, 15000) + "\n// ...truncated...";
                out.append("```c\n").append(code).append("\n```\n\n");
            } else {
                out.append("*Decompilation failed*\n\n");
            }
        } catch (Exception e) {
            out.append("*Error: ").append(e.getMessage()).append("*\n\n");
        }
        return out.toString();
    }

    private List<Long> getCallerAddresses(long va, int max) {
        List<Long> result = new ArrayList<>();
        Address addr = currentProgram.getAddressFactory().getAddress("0x" + Long.toHexString(va));
        FunctionManager fm = currentProgram.getFunctionManager();
        Function func = fm.getFunctionAt(addr);
        if (func == null) func = fm.getFunctionContaining(addr);
        if (func == null) return result;

        ReferenceIterator refs = currentProgram.getReferenceManager().getReferencesTo(func.getEntryPoint());
        Set<Long> seen = new HashSet<>();
        int count = 0;
        while (refs.hasNext() && count < max) {
            Reference ref = refs.next();
            Function caller = fm.getFunctionContaining(ref.getFromAddress());
            if (caller == null) continue;
            long callerEntry = caller.getEntryPoint().getOffset();
            if (seen.contains(callerEntry)) continue;
            seen.add(callerEntry);
            result.add(callerEntry);
            count++;
        }
        return result;
    }
}
