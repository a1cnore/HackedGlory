import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import java.io.*;

public class GhidraProfileHandler extends GhidraScript {
    private DecompInterface decomp;
    @Override
    public void run() throws Exception {
        String outputDir = System.getenv("VGF_REPORT_DIR");
        if (outputDir == null) outputDir = "/tmp/vgf_ghidra_reports";
        decomp = new DecompInterface();
        decomp.setOptions(new DecompileOptions());
        decomp.openProgram(currentProgram);
        StringBuilder sb = new StringBuilder();
        sb.append("# Profile Panel Open Handler\n\n");
        
        // The menu init FUN_100221ff0 creates the profile panel and registers listeners
        sb.append("## FUN_100221ff0 (menu init — creates profile panel)\n\n");
        sb.append(decompAt(0x100221ff0L));
        
        // The profile avatar tap handler
        // FUN_1001f50a4 area contains the tap callback
        sb.append("## FUN_1001f50a4 area (profile avatar tap)\n\n");
        sb.append(decompAt(0x1001f50a4L));
        
        // The panel change mechanism — FUN_1001e7f30 shows/hides panels
        sb.append("## FUN_1001e7f30 (panel show function)\n\n");
        sb.append(decompAt(0x1001e7f30L));
        
        // FUN_1001b35e0 — used to attach content to panels
        sb.append("## FUN_1001b35e0 (panel attach)\n\n");
        sb.append(decompAt(0x1001b35e0L));
        
        // Who registers an event listener for DAT_101d23658?
        // The listener is likely registered in FUN_100221ff0 or the homepanel builder
        // Let me find FUN_1001f3958 which seems to be the profile handler registration
        sb.append("## FUN_1001f3958 (near profile avatar refs)\n\n");
        sb.append(decompAt(0x1001f3958L));
        
        // The actual panel switch handler — look for FUN_1001e338c callers
        sb.append("## Callers of FUN_1001e338c (menu event init)\n\n");
        sb.append(traceCallers(0x1001e338cL, 3));
        
        // The getPlayerInfo handler — does it trigger profile display?
        sb.append("## FUN_100507640 (getPlayerInfo handler)\n\n");
        sb.append(decompAt(0x100507640L));
        
        String path = outputDir + "/profile_handler.md";
        FileWriter fw = new FileWriter(path);
        fw.write(sb.toString());
        fw.close();
        decomp.dispose();
        println("[analysis] Wrote " + path + " (" + sb.length() + " bytes)");
    }
    private String decompAt(long va) {
        Address addr = currentProgram.getAddressFactory().getAddress("0x" + Long.toHexString(va));
        FunctionManager fm = currentProgram.getFunctionManager();
        Function func = fm.getFunctionAt(addr);
        if (func == null) func = fm.getFunctionContaining(addr);
        if (func == null) return "### *Not found at 0x" + Long.toHexString(va) + "*\n\n";
        StringBuilder sb = new StringBuilder();
        sb.append("### `").append(func.getName()).append("` @ `0x")
          .append(Long.toHexString(func.getEntryPoint().getOffset())).append("`\n\n");
        try {
            DecompileResults r = decomp.decompileFunction(func, 120, monitor);
            if (r != null && r.decompileCompleted() && r.getDecompiledFunction() != null) {
                String c = r.getDecompiledFunction().getC();
                if (c.length() > 15000) c = c.substring(0, 15000) + "\n// ...truncated...";
                sb.append("```c\n").append(c).append("\n```\n\n");
            }
        } catch (Exception e) {}
        return sb.toString();
    }
    private String traceCallers(long va, int max) {
        Address addr = currentProgram.getAddressFactory().getAddress("0x" + Long.toHexString(va));
        FunctionManager fm = currentProgram.getFunctionManager();
        Function func = fm.getFunctionAt(addr);
        if (func == null) func = fm.getFunctionContaining(addr);
        if (func == null) return "*Not found*\n\n";
        StringBuilder sb = new StringBuilder();
        ghidra.program.model.symbol.ReferenceIterator refs = 
            currentProgram.getReferenceManager().getReferencesTo(func.getEntryPoint());
        java.util.Set<Address> seen = new java.util.HashSet<>();
        int count = 0;
        while (refs.hasNext() && count < max) {
            ghidra.program.model.symbol.Reference ref = refs.next();
            Function caller = fm.getFunctionContaining(ref.getFromAddress());
            if (caller == null || seen.contains(caller.getEntryPoint())) continue;
            seen.add(caller.getEntryPoint());
            sb.append(decompAt(caller.getEntryPoint().getOffset()));
            count++;
        }
        if (count == 0) sb.append("*No callers found*\n\n");
        return sb.toString();
    }
}
