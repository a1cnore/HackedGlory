// Focused Ghidra script: decompile specific game networking functions.
//
// Targets the send/recv/connect functions at 0x100617xxx and their callers.
//
// @category Analysis

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;

import java.io.*;
import java.util.*;

public class GhidraNetworkDecomp extends GhidraScript {

    private DecompInterface decomp;
    private FunctionManager fm;
    private ReferenceManager refMgr;
    private AddressFactory af;

    // Functions that call send/recv/connect/socket — these are the game net layer
    static final long[] TARGET_FUNCS = {
        // Game server send/recv wrappers
        0x100617d0cL,  // calls _send
        0x100617d9cL,  // calls _recv
        0x100617810L,  // calls _connect + _socket
        0x100617aa4L,  // calls _socket

        // Other send/recv callers (might be game-related)
        0x10052019cL,  // calls _send and _recv
        0x1010d94a0L,  // calls _send
        0x1010d959cL,  // calls _recv
        0x1010d9a7cL,  // calls _recv
        0x1010e881cL,  // calls _send
        0x1010e8538L,  // calls _send
        0x1010e88b0L,  // calls _send
        0x1010eececL,  // calls _recv
        0x1010ee560L,  // calls _connect
        0x1010eedbcL,  // calls _socket
        0x1010f2db4L,  // calls _socket

        // Game state / entity related (from analytics code neighbors)
        0x10034599cL,  // UseAbility analytics
        0x100345bc4L,  // Kill analytics
        0x100345e3cL,  // Level analytics

        // The stat label table
        0x1000eff84L,  // 200-case stat label switch
    };

    @Override
    public void run() throws Exception {
        String outputDir = System.getenv("VGF_REPORT_DIR");
        if (outputDir == null) outputDir = "/tmp/vgf_ghidra_reports";
        new File(outputDir).mkdirs();

        fm = currentProgram.getFunctionManager();
        refMgr = currentProgram.getReferenceManager();
        af = currentProgram.getAddressFactory();

        decomp = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        decomp.setOptions(opts);
        decomp.openProgram(currentProgram);

        StringBuilder report = new StringBuilder();
        report.append("# Network Function Decompilation\n\n");

        for (long addr : TARGET_FUNCS) {
            if (monitor.isCancelled()) break;

            Address fAddr = af.getAddress("0x" + Long.toHexString(addr));
            Function func = fm.getFunctionAt(fAddr);
            if (func == null) {
                // Try to find the function containing this address
                func = fm.getFunctionContaining(fAddr);
                if (func == null) {
                    report.append("## 0x" + Long.toHexString(addr) + " — NO FUNCTION FOUND\n\n");
                    continue;
                }
            }

            println("[net-decomp] Decompiling " + func.getName() + " @ 0x" + Long.toHexString(addr));

            String code = null;
            try {
                DecompileResults result = decomp.decompileFunction(func, 120, monitor);
                if (result != null && result.decompileCompleted() && result.getDecompiledFunction() != null) {
                    code = result.getDecompiledFunction().getC();
                }
            } catch (Exception e) {
                report.append("## 0x" + Long.toHexString(addr) + " — DECOMPILE FAILED: " + e.getMessage() + "\n\n");
                continue;
            }

            if (code == null) {
                report.append("## 0x" + Long.toHexString(addr) + " — DECOMPILE RETURNED NULL\n\n");
                continue;
            }

            report.append("## `" + func.getName() + "` @ `0x" + Long.toHexString(func.getEntryPoint().getOffset()) + "`\n\n");
            report.append("Size: " + func.getBody().getNumAddresses() + " bytes\n\n");

            // Callers
            List<String> callers = new ArrayList<>();
            ReferenceIterator refIter = refMgr.getReferencesTo(func.getEntryPoint());
            Set<Long> seenCallers = new HashSet<>();
            while (refIter.hasNext()) {
                Reference ref = refIter.next();
                if (!ref.getReferenceType().isCall()) continue;
                Function caller = fm.getFunctionContaining(ref.getFromAddress());
                if (caller != null && !seenCallers.contains(caller.getEntryPoint().getOffset())) {
                    seenCallers.add(caller.getEntryPoint().getOffset());
                    callers.add("`" + caller.getName() + "` @ `0x" + Long.toHexString(caller.getEntryPoint().getOffset()) + "`");
                }
            }
            if (!callers.isEmpty()) {
                report.append("Called by: " + String.join(", ", callers) + "\n\n");
            }

            // Callees
            List<String> callees = new ArrayList<>();
            Set<Long> seenCallees = new HashSet<>();
            AddressSetView body = func.getBody();
            ghidra.program.model.address.AddressIterator addrIter = body.getAddresses(true);
            while (addrIter.hasNext()) {
                Address a = addrIter.next();
                Reference[] refs = refMgr.getReferencesFrom(a);
                for (Reference ref : refs) {
                    if (!ref.getReferenceType().isCall()) continue;
                    Function callee = fm.getFunctionAt(ref.getToAddress());
                    if (callee != null && !seenCallees.contains(callee.getEntryPoint().getOffset())) {
                        seenCallees.add(callee.getEntryPoint().getOffset());
                        callees.add("`" + callee.getName() + "` @ `0x" + Long.toHexString(callee.getEntryPoint().getOffset()) + "`");
                    }
                }
            }
            if (!callees.isEmpty()) {
                report.append("Calls: " + String.join(", ", callees) + "\n\n");
            }

            // Code
            String truncCode = code.length() > 12000 ? code.substring(0, 12000) + "\n// ...truncated..." : code;
            report.append("```c\n" + truncCode + "\n```\n\n---\n\n");

            // Also decompile direct callers of networking functions (one level up)
            if (addr >= 0x100617000L && addr <= 0x100618000L) {
                for (Long callerAddr : seenCallers) {
                    Function callerFunc = fm.getFunctionAt(af.getAddress("0x" + Long.toHexString(callerAddr)));
                    if (callerFunc == null) continue;
                    try {
                        DecompileResults callerResult = decomp.decompileFunction(callerFunc, 120, monitor);
                        if (callerResult != null && callerResult.decompileCompleted() && callerResult.getDecompiledFunction() != null) {
                            String callerCode = callerResult.getDecompiledFunction().getC();
                            if (callerCode != null) {
                                report.append("### Caller: `" + callerFunc.getName() + "` @ `0x" + Long.toHexString(callerAddr) + "`\n\n");
                                String truncCaller = callerCode.length() > 8000 ? callerCode.substring(0, 8000) + "\n// ...truncated..." : callerCode;
                                report.append("```c\n" + truncCaller + "\n```\n\n---\n\n");
                            }
                        }
                    } catch (Exception e) {
                        // skip
                    }
                }
            }
        }

        decomp.dispose();

        String filepath = outputDir + "/network_functions.md";
        FileWriter fw = new FileWriter(filepath);
        fw.write(report.toString());
        fw.close();
        println("[net-decomp] Wrote " + filepath + " (" + report.length() + " bytes)");
        println("[net-decomp] COMPLETE");
    }
}
