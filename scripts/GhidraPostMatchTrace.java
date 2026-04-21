// Trace the post-match state handler to find where the spoils screen
// is skipped in CE mode. Key targets:
// - FUN_10051abec: State machine handler (references "post_match" at 0x10051b910)
// - FUN_100131560: CE master gate (return 1)
// - FUN_100212ff8: SpoilsOfWarRewardConfig processor
// - FUN_1002d8918–FUN_1002db954: Reward/chest CE-gated functions
// - FUN_1005028f8: notifyGameResults sender
//
// Goal: Find the code path from post_match state → spoils screen creation,
// identify which CE gate check skips the screen, and find hookable functions
// (__DATA fptrs) in that path.
// @category Analysis

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;

public class GhidraPostMatchTrace extends GhidraScript {
    private DecompInterface decomp;

    // CE master gate
    static final long CE_GATE = 0x100131560L;

    // Reward/chest functions that call CE gate
    static final long[] REWARD_FUNS = {
        0x1002d8918L, 0x1002d90c8L, 0x1002da05cL, 0x1002da328L,
        0x1002db064L, 0x1002db580L, 0x1002db954L, 0x1002e76d8L,
    };

    // SpoilsOfWarRewardConfig processor
    static final long SPOILS_PROC = 0x100212ff8L;

    // notifyGameResults sender
    static final long NOTIFY_RESULTS = 0x1005028f8L;

    // notifyExitPostMatch sender
    static final long NOTIFY_EXIT = 0x1004fdaf0L;

    @Override
    public void run() throws Exception {
        String outputDir = System.getenv("VGF_REPORT_DIR");
        if (outputDir == null) outputDir = "/tmp/vgf_ghidra_reports";
        new File(outputDir).mkdirs();

        decomp = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        decomp.setOptions(opts);
        decomp.openProgram(currentProgram);

        StringBuilder sb = new StringBuilder();
        sb.append("# Post-Match State Handler Trace\n\n");
        sb.append("Goal: Find where the spoils screen is skipped in CE mode.\n\n");

        // ── Step 1: Decompile the state machine handler ──
        sb.append("## 1. State Machine Handler — FUN_10051abec\n\n");
        sb.append("This function processes all state transitions (menus, playing, post_match, etc.).\n");
        sb.append("String refs: post_match at 0x10051b910, playing at 0x10051b668.\n\n");
        sb.append(decompileAt(0x10051abecL));

        // ── Step 2: Find callers of FUN_10051abec ──
        sb.append("## 2. Callers of FUN_10051abec\n\n");
        sb.append(traceCallers(0x10051abecL, 3));

        // ── Step 3: Decompile SpoilsOfWarRewardConfig processor ──
        sb.append("## 3. SpoilsOfWarRewardConfig Processor — FUN_100212ff8\n\n");
        sb.append(decompileAt(SPOILS_PROC));

        // ── Step 4: Find callers of spoils processor ──
        sb.append("## 4. Callers of FUN_100212ff8 (SpoilsOfWarRewardConfig)\n\n");
        sb.append(traceCallers(SPOILS_PROC, 3));

        // ── Step 5: Decompile notifyGameResults sender ──
        sb.append("## 5. notifyGameResults Sender — FUN_1005028f8\n\n");
        sb.append(decompileAt(NOTIFY_RESULTS));

        // ── Step 6: Find callers of notifyGameResults sender ──
        sb.append("## 6. Callers of FUN_1005028f8 (notifyGameResults)\n\n");
        sb.append(traceCallers(NOTIFY_RESULTS, 5));

        // ── Step 7: Decompile notifyExitPostMatch sender ──
        sb.append("## 7. notifyExitPostMatch Sender — FUN_1004fdaf0\n\n");
        sb.append(decompileAt(NOTIFY_EXIT));

        // ── Step 8: Find callers of notifyExitPostMatch sender ──
        sb.append("## 8. Callers of FUN_1004fdaf0 (notifyExitPostMatch)\n\n");
        sb.append(traceCallers(NOTIFY_EXIT, 5));

        // ── Step 9: Decompile each reward/chest function + find their callers ──
        sb.append("## 9. Reward/Chest Functions (CE-gated)\n\n");
        for (long addr : REWARD_FUNS) {
            String name = String.format("FUN_%x", addr);
            sb.append("### ").append(name).append("\n\n");
            sb.append(decompileAt(addr));
            sb.append("#### Callers:\n\n");
            sb.append(traceCallers(addr, 3));
        }

        // ── Step 10: Search for __DATA fptrs for all functions in the chain ──
        sb.append("## 10. __DATA fptr Search\n\n");
        sb.append("Looking for function pointers in __DATA.__const for key functions.\n\n");

        long[] searchTargets = {
            0x10051abecL, SPOILS_PROC, NOTIFY_RESULTS, NOTIFY_EXIT,
            REWARD_FUNS[0], REWARD_FUNS[1], REWARD_FUNS[2], REWARD_FUNS[3],
            REWARD_FUNS[4], REWARD_FUNS[5], REWARD_FUNS[6], REWARD_FUNS[7],
        };

        for (long target : searchTargets) {
            List<Address> fptrs = findFptrInData(target);
            String name = String.format("FUN_%x", target);
            if (fptrs.isEmpty()) {
                sb.append("- ").append(name).append(": NO __DATA fptr\n");
            } else {
                for (Address fp : fptrs) {
                    long fpOff = fp.getOffset() - currentProgram.getImageBase().getOffset();
                    sb.append("- ").append(name).append(": fptr at g_base+0x")
                      .append(Long.toHexString(fpOff)).append(" (").append(fp).append(")\n");
                }
            }
        }

        // ── Step 11: Trace what happens INSIDE FUN_10051abec at the post_match branch ──
        // The post_match string ref is at 0x10051b910. Let's look at the
        // instructions around that address to see what calls follow.
        sb.append("\n## 11. Disassembly around post_match branch (0x10051b910)\n\n");
        sb.append(disasmRange(0x10051b900L, 0x10051ba80L));

        // ── Step 12: Find functions called from the post_match code block ──
        sb.append("\n## 12. BL targets from post_match block (0x10051b910–0x10051ba80)\n\n");
        sb.append(findBLTargets(0x10051b900L, 0x10051ba80L));

        // Write output
        String path = outputDir + "/post_match_trace.md";
        FileWriter fw = new FileWriter(path);
        fw.write(sb.toString());
        fw.close();
        println("Report written to: " + path);
    }

    private String decompileAt(long addr) {
        try {
            Address a = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(addr);
            Function f = getFunctionAt(a);
            if (f == null) {
                f = currentProgram.getListing().getFunctionContaining(a);
            }
            if (f == null) return "*No function at 0x" + Long.toHexString(addr) + "*\n\n";

            DecompileResults dr = decomp.decompileFunction(f, 120, monitor);
            if (dr == null || dr.getDecompiledFunction() == null) {
                return "*Decompile failed for " + f.getName() + "*\n\n";
            }
            return "```c\n" + dr.getDecompiledFunction().getC() + "\n```\n\n";
        } catch (Exception e) {
            return "*Error: " + e.getMessage() + "*\n\n";
        }
    }

    private String traceCallers(long addr, int depth) {
        StringBuilder sb = new StringBuilder();
        try {
            Address a = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(addr);
            Function f = getFunctionAt(a);
            if (f == null) f = currentProgram.getListing().getFunctionContaining(a);
            if (f == null) return "*No function at 0x" + Long.toHexString(addr) + "*\n\n";

            ReferenceManager refMgr = currentProgram.getReferenceManager();
            Set<Address> seen = new HashSet<>();
            for (Reference ref : getReferencesTo(a)) {
                Address from = ref.getFromAddress();
                Function caller = getFunctionContaining(from);
                if (caller != null && !seen.contains(caller.getEntryPoint())) {
                    seen.add(caller.getEntryPoint());
                    long callerOff = caller.getEntryPoint().getOffset();
                    sb.append("- `").append(caller.getName()).append("` @ `0x")
                      .append(Long.toHexString(callerOff)).append("` (from `0x")
                      .append(Long.toHexString(from.getOffset())).append("`)\n");
                }
            }
            if (seen.isEmpty()) sb.append("*No callers found*\n");
            sb.append("\n");

            // Decompile callers up to depth
            int count = 0;
            for (Address callerAddr : seen) {
                if (count >= depth) break;
                sb.append("#### Caller: `").append(getFunctionAt(callerAddr).getName())
                  .append("` @ `0x").append(Long.toHexString(callerAddr.getOffset())).append("`\n\n");
                sb.append(decompileAt(callerAddr.getOffset()));
                count++;
            }
        } catch (Exception e) {
            sb.append("*Error: ").append(e.getMessage()).append("*\n\n");
        }
        return sb.toString();
    }

    private List<Address> findFptrInData(long targetAddr) {
        List<Address> results = new ArrayList<>();
        try {
            Address target = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(targetAddr);
            // Search __DATA sections for pointers to this address
            for (ghidra.program.model.mem.MemoryBlock block : currentProgram.getMemory().getBlocks()) {
                String name = block.getName();
                if (name.contains("__DATA") || name.contains("__const") || name.contains("__data")) {
                    Address start = block.getStart();
                    Address end = block.getEnd();
                    Address cur = start;
                    while (cur != null && cur.compareTo(end) < 0) {
                        try {
                            long val = currentProgram.getMemory().getLong(cur);
                            if (val == targetAddr) {
                                results.add(cur);
                            }
                        } catch (Exception e) {
                            // skip
                        }
                        cur = cur.add(8);
                    }
                }
            }
        } catch (Exception e) {
            // skip
        }
        return results;
    }

    private String disasmRange(long start, long end) {
        StringBuilder sb = new StringBuilder();
        sb.append("```asm\n");
        try {
            Address a = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(start);
            Address e = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(end);
            Listing listing = currentProgram.getListing();
            Instruction inst = listing.getInstructionAt(a);
            if (inst == null) inst = listing.getInstructionAfter(a);
            while (inst != null && inst.getAddress().compareTo(e) < 0) {
                sb.append(String.format("0x%x:  %s  %s\n",
                    inst.getAddress().getOffset(),
                    inst.toString(),
                    inst.getFlowType().isCall() ? "<-- CALL" : ""));
                inst = inst.getNext();
            }
        } catch (Exception e) {
            sb.append("Error: ").append(e.getMessage()).append("\n");
        }
        sb.append("```\n\n");
        return sb.toString();
    }

    private String findBLTargets(long start, long end) {
        StringBuilder sb = new StringBuilder();
        try {
            Address a = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(start);
            Address e = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(end);
            Listing listing = currentProgram.getListing();
            Instruction inst = listing.getInstructionAt(a);
            if (inst == null) inst = listing.getInstructionAfter(a);
            while (inst != null && inst.getAddress().compareTo(e) < 0) {
                if (inst.getFlowType().isCall()) {
                    Address[] flows = inst.getFlows();
                    for (Address target : flows) {
                        Function f = getFunctionAt(target);
                        String fname = f != null ? f.getName() : "unknown";
                        long tOff = target.getOffset();
                        sb.append(String.format("- 0x%x → `%s` @ `0x%x`",
                            inst.getAddress().getOffset(), fname, tOff));

                        // Check if this target calls the CE gate
                        if (tOff == CE_GATE) {
                            sb.append(" **CE GATE**");
                        } else if (f != null) {
                            // Check if function body calls CE gate
                            String code = decompileAt(tOff);
                            if (code.contains("FUN_100131560") || code.contains("0x100131560")) {
                                sb.append(" ⚠️ CALLS CE GATE");
                            }
                        }
                        sb.append("\n");
                    }
                }
                inst = inst.getNext();
            }
        } catch (Exception e) {
            sb.append("Error: ").append(e.getMessage()).append("\n");
        }
        return sb.toString();
    }
}
