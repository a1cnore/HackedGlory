import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import java.io.*;

/**
 * Disassemble FUN_1002a97cc (avatar tap callback) at instruction level
 * to verify the actual calling convention, since the decompiler had warnings.
 * Also check the event ID at DAT_101d91884 and verify vtable layout.
 */
public class GhidraAvatarTapDisasm extends GhidraScript {
    private DecompInterface decomp;

    @Override
    public void run() throws Exception {
        String outputDir = System.getenv("VGF_REPORT_DIR");
        if (outputDir == null) outputDir = "/tmp/vgf_ghidra_reports";
        decomp = new DecompInterface();
        decomp.setOptions(new DecompileOptions());
        decomp.openProgram(currentProgram);

        StringBuilder sb = new StringBuilder();
        sb.append("# Avatar Tap Disassembly & Vtable Verification\n\n");

        // 1. Disassemble FUN_1002a97cc at instruction level
        sb.append("## FUN_1002a97cc — Avatar Tap Callback (raw instructions)\n\n");
        sb.append("```asm\n");
        Address start = addr(0x1002a97ccL);
        Listing listing = currentProgram.getListing();
        Instruction instr = listing.getInstructionAt(start);
        for (int i = 0; i < 20 && instr != null; i++) {
            sb.append(String.format("0x%x: %s\n",
                instr.getAddress().getOffset(), instr.toString()));
            instr = instr.getNext();
        }
        sb.append("```\n\n");

        // 2. Read what DAT_101d91884 event ID is — check if it's been initialized
        sb.append("## Event ID at DAT_101d91884\n\n");
        sb.append("This is the event ID that triggers the avatar tap callback.\n");
        sb.append("It's registered by FUN_100538e54 (base UI events init).\n\n");

        // Search for what sets DAT_101d91884
        sb.append("### FUN_100538e54 — first 40 instructions (UI event registration)\n\n");
        sb.append("```asm\n");
        instr = listing.getInstructionAt(addr(0x100538e54L));
        for (int i = 0; i < 60 && instr != null; i++) {
            sb.append(String.format("0x%x: %s\n",
                instr.getAddress().getOffset(), instr.toString()));
            instr = instr.getNext();
        }
        sb.append("```\n\n");

        // 3. Decompile FUN_100538e54 to find what event is at DAT_101d91884
        sb.append("## FUN_100538e54 — Base UI Events Init (decompiled)\n\n");
        Function func = currentProgram.getFunctionManager().getFunctionAt(addr(0x100538e54L));
        if (func != null) {
            try {
                DecompileResults r = decomp.decompileFunction(func, 120, monitor);
                if (r != null && r.decompileCompleted() && r.getDecompiledFunction() != null) {
                    String c = r.getDecompiledFunction().getC();
                    if (c.length() > 8000) c = c.substring(0, 8000) + "\n// ...truncated...";
                    sb.append("```c\n").append(c).append("\n```\n\n");
                }
            } catch (Exception e) {}
        }

        // 4. Read vtable at __DATA+0x146cb10 — first 10 entries
        sb.append("## Vtable at __DATA+0x146cb10 (profile handler class)\n\n");
        sb.append("| idx | Address | Value | Function |\n");
        sb.append("|-----|---------|-------|----------|\n");
        Memory mem = currentProgram.getMemory();
        FunctionManager fm = currentProgram.getFunctionManager();
        for (int i = 0; i < 10; i++) {
            long vtAddr = 0x10146cb10L + i * 8;
            try {
                long val = mem.getLong(addr(vtAddr));
                Function f = fm.getFunctionAt(addr(val));
                String fname = f != null ? f.getName() : "unknown";
                long foff = val - 0x100000000L;
                sb.append(String.format("| %d | 0x%x | 0x%x | %s (off 0x%x) |\n",
                    i, vtAddr, val, fname, foff));
            } catch (Exception e) {
                sb.append(String.format("| %d | 0x%x | error |\n", i, vtAddr));
            }
        }
        sb.append("\n");

        // 5. Also read vtable at __DATA+0x1478b10 (the ORIGINAL offset that was later changed)
        sb.append("## Vtable at __DATA+0x1478b10 (original offset, changed to 0x146cb10)\n\n");
        sb.append("| idx | Address | Value | Function |\n");
        sb.append("|-----|---------|-------|----------|\n");
        for (int i = 0; i < 10; i++) {
            long vtAddr = 0x101478b10L + i * 8;
            try {
                long val = mem.getLong(addr(vtAddr));
                Function f = fm.getFunctionAt(addr(val));
                String fname = f != null ? f.getName() : "unknown";
                long foff = val - 0x100000000L;
                sb.append(String.format("| %d | 0x%x | 0x%x | %s (off 0x%x) |\n",
                    i, vtAddr, val, fname, foff));
            } catch (Exception e) {
                sb.append(String.format("| %d | 0x%x | error |\n", i, vtAddr));
            }
        }
        sb.append("\n");

        // 6. Check what calls FUN_1002a97cc
        sb.append("## Who references FUN_1002a97cc?\n\n");
        Function avatarCb = fm.getFunctionAt(addr(0x1002a97ccL));
        if (avatarCb != null) {
            ghidra.program.model.symbol.ReferenceIterator refs =
                currentProgram.getReferenceManager().getReferencesTo(avatarCb.getEntryPoint());
            while (refs.hasNext()) {
                ghidra.program.model.symbol.Reference ref = refs.next();
                Function caller = fm.getFunctionContaining(ref.getFromAddress());
                String callerName = caller != null ? caller.getName() : "unknown";
                sb.append(String.format("- ref from 0x%x in %s (type: %s)\n",
                    ref.getFromAddress().getOffset(), callerName, ref.getReferenceType()));
            }
        }
        sb.append("\n");

        // 7. Decompile FUN_1001ff1bc — the caller of FUN_1001f3b40 (the gated profile opener)
        sb.append("## FUN_1001ff1bc — Profile Tap Handler (calls gated opener)\n\n");
        sb.append(decompAt(0x1001ff1bcL, 8000));

        // 8. What function is at the vtable[0] = FUN_1001f4c4c? Decompile again with full context
        sb.append("## FUN_1001f4c4c — vtable[0] (dead market upsell) decompiled\n\n");
        sb.append(decompAt(0x1001f4c4cL, 4000));

        String path = outputDir + "/avatar_tap_disasm.md";
        FileWriter fw = new FileWriter(path);
        fw.write(sb.toString());
        fw.close();
        decomp.dispose();
        println("[analysis] Wrote " + path + " (" + sb.length() + " bytes)");
    }

    private Address addr(long va) {
        return currentProgram.getAddressFactory().getAddress("0x" + Long.toHexString(va));
    }

    private String decompAt(long va, int maxLen) {
        Function func = currentProgram.getFunctionManager().getFunctionAt(addr(va));
        if (func == null) func = currentProgram.getFunctionManager().getFunctionContaining(addr(va));
        if (func == null) return "*Not found at 0x" + Long.toHexString(va) + "*\n\n";
        StringBuilder sb = new StringBuilder();
        sb.append("### `").append(func.getName()).append("` @ `0x")
          .append(Long.toHexString(func.getEntryPoint().getOffset())).append("`\n\n");
        try {
            DecompileResults r = decomp.decompileFunction(func, 120, monitor);
            if (r != null && r.decompileCompleted() && r.getDecompiledFunction() != null) {
                String c = r.getDecompiledFunction().getC();
                if (c.length() > maxLen) c = c.substring(0, maxLen) + "\n// ...truncated...";
                sb.append("```c\n").append(c).append("\n```\n\n");
            }
        } catch (Exception e) {}
        return sb.toString();
    }
}
