import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import java.io.*;

public class GhidraProfileGate extends GhidraScript {
    private DecompInterface decomp;
    @Override
    public void run() throws Exception {
        String outputDir = System.getenv("VGF_REPORT_DIR");
        if (outputDir == null) outputDir = "/tmp/vgf_ghidra_reports";
        decomp = new DecompInterface();
        decomp.setOptions(new DecompileOptions());
        decomp.openProgram(currentProgram);
        StringBuilder sb = new StringBuilder();
        sb.append("# Profile Open Gate — Direct Callers\n\n");
        
        // The two callers of FUN_100220a38 (profile opener)
        long[] callers = {0x1001eec1cL, 0x1001fa828L};
        for (long va : callers) {
            Address addr = currentProgram.getAddressFactory().getAddress("0x" + Long.toHexString(va));
            Function func = currentProgram.getFunctionManager().getFunctionContaining(addr);
            if (func != null) {
                sb.append("## `" + func.getName() + "` @ `0x" + 
                    Long.toHexString(func.getEntryPoint().getOffset()) + 
                    "` (calls profile opener at 0x" + Long.toHexString(va) + ")\n\n");
                try {
                    DecompileResults r = decomp.decompileFunction(func, 120, monitor);
                    if (r != null && r.decompileCompleted() && r.getDecompiledFunction() != null) {
                        String c = r.getDecompiledFunction().getC();
                        if (c.length() > 15000) c = c.substring(0, 15000) + "\n// truncated";
                        sb.append("```c\n" + c + "\n```\n\n");
                    }
                } catch (Exception e) {}
                
                // Also trace callers of THIS function
                sb.append("### Callers:\n\n");
                ghidra.program.model.symbol.ReferenceIterator refs = 
                    currentProgram.getReferenceManager().getReferencesTo(func.getEntryPoint());
                java.util.Set<Address> seen = new java.util.HashSet<>();
                int count = 0;
                while (refs.hasNext() && count < 3) {
                    ghidra.program.model.symbol.Reference ref = refs.next();
                    Function caller = currentProgram.getFunctionManager().getFunctionContaining(ref.getFromAddress());
                    if (caller == null || seen.contains(caller.getEntryPoint())) continue;
                    seen.add(caller.getEntryPoint());
                    sb.append("#### `" + caller.getName() + "` @ `0x" + 
                        Long.toHexString(caller.getEntryPoint().getOffset()) + "`\n\n");
                    try {
                        DecompileResults r2 = decomp.decompileFunction(caller, 120, monitor);
                        if (r2 != null && r2.decompileCompleted() && r2.getDecompiledFunction() != null) {
                            String c2 = r2.getDecompiledFunction().getC();
                            if (c2.length() > 8000) c2 = c2.substring(0, 8000) + "\n// truncated";
                            sb.append("```c\n" + c2 + "\n```\n\n");
                        }
                    } catch (Exception e) {}
                    count++;
                }
            }
        }
        
        // Also decompile the profile opener itself to see its conditions
        sb.append("## FUN_100220abc (profile panel init called by opener)\n\n");
        Address addr = currentProgram.getAddressFactory().getAddress("0x100220abc");
        Function func = currentProgram.getFunctionManager().getFunctionContaining(addr);
        if (func != null) {
            try {
                DecompileResults r = decomp.decompileFunction(func, 120, monitor);
                if (r != null && r.decompileCompleted() && r.getDecompiledFunction() != null) {
                    String c = r.getDecompiledFunction().getC();
                    if (c.length() > 15000) c = c.substring(0, 15000) + "\n// truncated";
                    sb.append("```c\n" + c + "\n```\n\n");
                }
            } catch (Exception e) {}
        }
        
        String path = outputDir + "/profile_gate_direct.md";
        FileWriter fw = new FileWriter(path);
        fw.write(sb.toString());
        fw.close();
        decomp.dispose();
        println("[analysis] Wrote " + path + " (" + sb.length() + " bytes)");
    }
}
