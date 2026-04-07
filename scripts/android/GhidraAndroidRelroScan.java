// Full .data.rel.ro scan for Android libGameKindred.so
//
// Scans the entire RELRO region (0x26b8b20-0x2ad1fa8) and catalogs every
// function pointer found. Groups them by code region and cross-references
// with known confirmed offsets so we can identify the unknown ones.
//
// This is the "brute force" approach — when string XREFs don't lead to
// an fptr, we can find it by scanning the RELRO region directly.
//
// Known confirmed fptrs (for validation):
//   0x26bac28 -> 0x83f318 (featuresEnabled)
//   0x26bab38 -> 0x83ec48 (freeTabVisibilityExperiment)
//   0x26dc200 -> 0xa0c2f8 (profile_data)
//   0x26d5630 -> 0xa02b60 (profile_ranked)
//   0x26f34c8 -> 0xaf7920 (profile_eeb60)
//   0x26f34a8 -> 0xaf7980 (profile_f505c)
//   0x2720e70 -> 0xd91dec (guest_vtable12)
//
// Run on: Android arm64 libGameKindred.so
// Output: /tmp/vgf_android_reports/relro_scan.md
// @category VGF-Android

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;

public class GhidraAndroidRelroScan extends GhidraScript {
    private DecompInterface decomp;

    // Known confirmed fptrs for marking
    private static final long[][] KNOWN = {
        {0x26bac28L, 0x83f318L, 0}, // featuresEnabled
        {0x26bab38L, 0x83ec48L, 0}, // freeTabVisibility
        {0x26bab98L, 0x83f00cL, 0}, // goldenArrow
        {0x26bab68L, 0x83ef2cL, 0}, // tutorialPopup
        {0x26dc200L, 0xa0c2f8L, 0}, // profile_data
        {0x26d5630L, 0xa02b60L, 0}, // profile_ranked
        {0x26d8080L, 0xe01c54L, 0}, // season_update
        {0x26d1440L, 0x99f5e0L, 0}, // social_feat
        {0x26da510L, 0xe020b4L, 0}, // skill_tier
        {0x26c97b0L, 0xe02408L, 0}, // tab_init
        {0x26f34c8L, 0xaf7920L, 0}, // profile_eeb60
        {0x26f34a8L, 0xaf7980L, 0}, // profile_f505c
        {0x26f3888L, 0xaf7950L, 0}, // profile_fa7b0
        {0x2720e70L, 0xd91decL, 0}, // guest_vtable12
    };

    @Override
    public void run() throws Exception {
        String outputDir = System.getenv("VGF_REPORT_DIR");
        if (outputDir == null) outputDir = "/tmp/vgf_android_reports";
        new File(outputDir).mkdirs();

        decomp = new DecompInterface();
        decomp.setOptions(new DecompileOptions());
        decomp.openProgram(currentProgram);

        StringBuilder sb = new StringBuilder();
        sb.append("# Android .data.rel.ro Full Scan\n\n");

        Memory mem = currentProgram.getMemory();
        FunctionManager fm = currentProgram.getFunctionManager();

        long relroStart = 0x26b8b20L;
        long relroEnd = 0x2ad1fa8L;

        // Build known set for quick lookup
        Set<Long> knownFptrs = new HashSet<>();
        for (long[] k : KNOWN) knownFptrs.add(k[0]);

        // Phase 1: Scan and collect all function pointers
        sb.append("## Phase 1: All Function Pointers in .data.rel.ro\n\n");
        sb.append("| RELRO Offset | Target | Function | Status |\n");
        sb.append("|-------------|--------|----------|--------|\n");

        List<long[]> unknownFptrs = new ArrayList<>();
        int total = 0;
        int known = 0;

        for (long off = relroStart; off < relroEnd; off += 8) {
            if (monitor.isCancelled()) break;
            try {
                Address a = toAddr(off);
                long val = mem.getLong(a);
                // Filter: plausible code address (within the binary's code range)
                if (val < 0x1000 || val > 0x2000000) continue;

                Function func = fm.getFunctionAt(toAddr(val));
                if (func == null) continue; // Only count if it points to a real function

                total++;
                String status;
                if (knownFptrs.contains(off)) {
                    status = "CONFIRMED";
                    known++;
                } else {
                    status = "UNKNOWN";
                    unknownFptrs.add(new long[]{off, val});
                }

                sb.append("| 0x").append(Long.toHexString(off))
                  .append(" | 0x").append(Long.toHexString(val))
                  .append(" | `").append(func.getName()).append("`")
                  .append(" | ").append(status).append(" |\n");
            } catch (Exception e) {}
        }
        sb.append("\nTotal: ").append(total).append(" fptrs (").append(known)
          .append(" known, ").append(unknownFptrs.size()).append(" unknown)\n\n");

        // Phase 2: Decompile the most interesting unknown fptrs
        // Focus on functions near known offsets (same "table")
        sb.append("## Phase 2: Unknown FPTRs Near Known Offsets\n\n");
        sb.append("These are in the same RELRO neighborhoods as confirmed offsets,\n");
        sb.append("so they likely belong to the same vtable/dispatch tables.\n\n");

        int decompCount = 0;
        for (long[] unknown : unknownFptrs) {
            if (monitor.isCancelled() || decompCount >= 50) break;

            // Check if within 256 bytes of a known fptr
            boolean nearKnown = false;
            for (long[] k : KNOWN) {
                if (Math.abs(unknown[0] - k[0]) < 256) {
                    nearKnown = true;
                    break;
                }
            }
            if (!nearKnown) continue;

            Function func = fm.getFunctionAt(toAddr(unknown[1]));
            if (func == null) continue;

            sb.append("### FPTR 0x").append(Long.toHexString(unknown[0]))
              .append(" -> 0x").append(Long.toHexString(unknown[1])).append("\n\n");
            sb.append(decompileFunc(func));
            sb.append("---\n\n");
            decompCount++;
        }

        // Phase 3: Look specifically for stub functions (ret, trivial thunks)
        // vs real prologues — helps identify which NEEDS_RE offsets are wrong
        sb.append("## Phase 3: Stub vs Real Function Classification\n\n");
        sb.append("| RELRO Offset | Target | Size | Classification |\n");
        sb.append("|-------------|--------|------|----------------|\n");
        for (long[] unknown : unknownFptrs) {
            if (monitor.isCancelled()) break;
            Function func = fm.getFunctionAt(toAddr(unknown[1]));
            if (func == null) continue;
            long size = func.getBody().getNumAddresses();
            String classification;
            if (size <= 4) classification = "RET stub";
            else if (size <= 16) classification = "Tiny thunk";
            else if (size <= 64) classification = "Small function";
            else if (size <= 256) classification = "Medium function";
            else classification = "Large function (" + size + " bytes)";

            sb.append("| 0x").append(Long.toHexString(unknown[0]))
              .append(" | 0x").append(Long.toHexString(unknown[1]))
              .append(" | ").append(size)
              .append(" | ").append(classification).append(" |\n");
        }

        decomp.dispose();

        String filepath = outputDir + "/relro_scan.md";
        FileWriter fw = new FileWriter(filepath);
        fw.write(sb.toString());
        fw.close();
        println("[android] Wrote " + filepath + " (" + sb.length() + " bytes)");
    }

    private String decompileFunc(Function func) {
        StringBuilder sb = new StringBuilder();
        sb.append("#### `").append(func.getName()).append("` @ `0x")
          .append(Long.toHexString(func.getEntryPoint().getOffset())).append("`\n\n");
        try {
            DecompileResults result = decomp.decompileFunction(func, 120, monitor);
            if (result != null && result.decompileCompleted() && result.getDecompiledFunction() != null) {
                String code = result.getDecompiledFunction().getC();
                if (code.length() > 8000) code = code.substring(0, 8000) + "\n// ...truncated...";
                sb.append("```c\n").append(code).append("\n```\n\n");
            } else {
                sb.append("*Decompilation failed*\n\n");
            }
        } catch (Exception e) {
            sb.append("*Error: ").append(e.getMessage()).append("*\n\n");
        }
        return sb.toString();
    }
}
