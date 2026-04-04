// Deep trace of who writes to offset +0x18f21 (trophy enabled flag)
// and all related gating conditions for the trophy renderer.
// @category Analysis

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.address.AddressSetView;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.lang.*;
import java.io.*;
import java.util.*;

public class GhidraTrophyFlagDeepTrace extends GhidraScript {
    private DecompInterface decomp;
    private StringBuilder sb;
    private Set<Long> decompCache = new HashSet<>();

    @Override
    public void run() throws Exception {
        String outputDir = System.getenv("VGF_REPORT_DIR");
        if (outputDir == null) outputDir = "/tmp/vgf_ghidra_reports";
        new File(outputDir).mkdirs();

        decomp = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        decomp.setOptions(opts);
        decomp.openProgram(currentProgram);

        sb = new StringBuilder();
        sb.append("# Trophy Flag Deep Trace: Who Writes to +0x18f21\n\n");
        sb.append("**Date:** ").append(new java.text.SimpleDateFormat("yyyy-MM-dd HH:mm:ss").format(new java.util.Date())).append("\n\n");

        // =====================================================================
        // SECTION 1: Decompile the trophy renderer and trace callers up 3 levels
        // =====================================================================
        sb.append("---\n\n## 1. Trophy Renderer Call Chain (3 levels up)\n\n");
        sb.append("### 1a. FUN_100265bd4 (Trophy Renderer - reads +0x18f21)\n\n");
        sb.append(decompileAt(0x100265bd4L));

        sb.append("### 1b. FUN_10026609c (Direct caller - trophy tab switcher)\n\n");
        sb.append(decompileAt(0x10026609cL));

        sb.append("### 1c. Callers of FUN_10026609c (Level 2):\n\n");
        List<Long> level2Callers = getCallerAddresses(0x10026609cL, 5);
        for (Long callerAddr : level2Callers) {
            sb.append(decompileAt(callerAddr));
            // Level 3
            sb.append("#### Callers of 0x").append(Long.toHexString(callerAddr)).append(" (Level 3):\n\n");
            List<Long> level3Callers = getCallerAddresses(callerAddr, 3);
            for (Long l3Addr : level3Callers) {
                sb.append(decompileAt(l3Addr));
            }
        }

        // =====================================================================
        // SECTION 2: Search for ARM64 instructions that write to +0x18f21
        // =====================================================================
        sb.append("---\n\n## 2. Binary Search for Writes to Offset +0x18f21\n\n");
        sb.append("### Methodology\n\n");
        sb.append("Searching for ARM64 STRB instructions that target offset `0x18f21`.\n\n");
        sb.append("ARM64 encoding patterns:\n");
        sb.append("- `STRB Wt, [Xn, #0x18f21]` (unsigned offset): not possible, max unsigned offset for STRB is 4095\n");
        sb.append("- So the compiler MUST use a multi-instruction sequence: typically `ADD Xm, Xn, #0x18000` then `STRB Wt, [Xm, #0xf21]`\n");
        sb.append("- Or `ADD Xm, Xn, #0x18f00` then `STRB Wt, [Xm, #0x21]`\n");
        sb.append("- We search for the offset constant 0x18f21 in decompiled output and also scan raw bytes.\n\n");

        // Strategy: Search for references to offset 0x18f21 by looking at the decompiled output
        // of functions that have ADD instructions with high-page parts of 0x18f21
        // In ARM64, large offsets are split: ADD Xreg, Xbase, #0x18000 (page) then access at +0xf21

        // NOTE: Full decompilation search of all functions is too slow for 26MB binary.
        // We use byte-level ARM64 instruction search instead (section 2c),
        // plus targeted decompilation of call graph neighbors (section 7).

        sb.append("### 2c. Byte-level search for ADD #0x18000 followed by STRB at +0xf21\n\n");
        searchForARM64StoreSequence();

        sb.append("### 2d. Byte-level search for STRB targeting offsets 0x18ef8 and 0x18f00\n\n");
        sb.append("These are the trophy count and array pointer offsets. ");
        sb.append("Searching for STR instructions targeting these offsets...\n\n");
        searchForSTRtoOffset(0x18ef8L, "0x18ef8 (trophy count)");
        searchForSTRtoOffset(0x18f00L, "0x18f00 (trophy array)");

        // =====================================================================
        // SECTION 3: Decompile FUN_10026609c callers in detail
        // =====================================================================
        sb.append("---\n\n## 3. FUN_10026609c Caller Chain Detail\n\n");
        sb.append("### FUN_1002650d0 (known wrapper caller)\n\n");
        sb.append(decompileAt(0x1002650d0L));
        sb.append("#### Callers of FUN_1002650d0:\n\n");
        List<Long> wrapperCallers = getCallerAddresses(0x1002650d0L, 5);
        for (Long addr : wrapperCallers) {
            sb.append(decompileAt(addr));
        }

        // =====================================================================
        // SECTION 4: Check for additional flags/gates beyond +0x18f21
        // =====================================================================
        sb.append("---\n\n## 4. Additional Gates Beyond +0x18f21\n\n");

        sb.append("### 4a. The +0x18f22 flag (controls pagination offset in FUN_100265bd4)\n\n");
        sb.append("In FUN_100265bd4, after the main `+0x18f21` check, there's a second check:\n");
        sb.append("`if (*(char *)(param_1 + 0x18f22) == '\\0')` which controls whether a pagination offset is applied.\n\n");

        sb.append("### 4b. Trophy count at +0x18ef8\n\n");
        sb.append("Even if +0x18f21 is set, if `*(uint *)(param_1 + 0x18ef8)` is 0, the loop body is skipped.\n\n");

        sb.append("### 4c. Trophy array pointer at +0x18f00\n\n");
        sb.append("The trophy data array is at `*(long *)(param_1 + 0x18f00)`. Must be non-null.\n\n");

        sb.append("### 4d. Tab selection gate in FUN_10026609c\n\n");
        sb.append("The trophy renderer is only called when `plVar4 == (long *)(param_1 + 0x17678)`.\n");
        sb.append("This means the trophy tab must be the currently selected tab.\n");
        sb.append("The tab pointer is stored at `param_1 + 0x3338`.\n\n");

        sb.append("### 4e. FUN_10026609c pre-conditions\n\n");
        sb.append("- `uVar1 < 2 && uVar1 != uVar2 && uVar2 < 2` must be true\n");
        sb.append("- This means the tab index system only supports indices 0 and 1\n");
        sb.append("- The `param_1 + 0x3328` and `param_1 + 0x3330` hold the two tab panel pointers\n\n");

        // Also decompile FUN_100265438 (the other tab handler) to see what it does
        sb.append("### 4f. FUN_100265438 (called after trophy renderer in FUN_10026609c)\n\n");
        sb.append(decompileAt(0x100265438L));

        // =====================================================================
        // SECTION 5: Trophy data arrival - trace FUN_10050c2bc and FUN_100507640
        // =====================================================================
        sb.append("---\n\n## 5. Trophy Data Arrival Path\n\n");

        sb.append("### 5a. FUN_10050c2bc (references \"trophy_name\", \"trophy_type\")\n\n");
        sb.append(decompileAt(0x10050c2bcL));
        sb.append("#### Callers of FUN_10050c2bc:\n\n");
        List<Long> tc1Callers = getCallerAddresses(0x10050c2bcL, 5);
        for (Long addr : tc1Callers) {
            sb.append(decompileAt(addr));
        }

        sb.append("### 5b. FUN_100507640 (references trophy data)\n\n");
        sb.append(decompileAt(0x100507640L));
        sb.append("#### Callers of FUN_100507640:\n\n");
        List<Long> tc2Callers = getCallerAddresses(0x100507640L, 5);
        for (Long addr : tc2Callers) {
            sb.append(decompileAt(addr));
        }

        // Trace the trophyCase string references to find data population
        sb.append("### 5c. \"trophyCase\" string references and their callers\n\n");
        traceTrophyCaseStringRefs();

        // =====================================================================
        // SECTION 6: Search for the SPECIFIC function that sets +0x18f21
        // =====================================================================
        sb.append("---\n\n## 6. Targeted Search for +0x18f21 Setter\n\n");

        // The flag at +0x18f21 is on the parent object (the one FUN_100265bd4 receives as param_1).
        // The trophy sub-panel starts at param_1 + 0x17678.
        // So +0x18f21 is 0x18f21 - 0x17678 = 0x18A9 bytes into the sub-panel object.
        // BUT the flag is on the PARENT object, not the sub-panel.
        // Let's look at the parent panel builder and its data population functions.

        sb.append("### 6a. Object layout analysis\n\n");
        sb.append("The trophy renderer FUN_100265bd4 receives the PARENT profile panel as param_1.\n");
        sb.append("- Trophy sub-panel at: `param_1 + 0x17678`\n");
        sb.append("- Trophy count at: `param_1 + 0x18ef8` (sub-panel + 0x1880)\n");
        sb.append("- Trophy array at: `param_1 + 0x18f00` (sub-panel + 0x1888)\n");
        sb.append("- Trophy enabled flag: `param_1 + 0x18f21` (sub-panel + 0x18A9)\n");
        sb.append("- Second flag: `param_1 + 0x18f22` (sub-panel + 0x18AA)\n\n");

        // The flag offset relative to the sub-panel object is 0x18A9.
        // Let's search for that too.
        sb.append("### 6b. Search for writes to sub-panel offset +0x18A9 (= flag relative to sub-panel start)\n\n");
        searchForSTRtoOffset(0x18A9L, "0x18a9 (flag relative to sub-panel)");

        // Also search profile data handler
        sb.append("### 6c. Profile data handler FUN_100503314\n\n");
        sb.append(decompileAt(0x100503314L));

        // Let's look at the profile panel initializer which creates the trophy sub-panel
        sb.append("### 6d. Functions that call trophy sub-panel constructor (thunk_FUN_10025fd1c @ 0x100260240)\n\n");
        List<Long> constructorCallers = getCallerAddresses(0x100260240L, 5);
        for (Long addr : constructorCallers) {
            sb.append(decompileAt(addr));
        }
        // Also try the original address
        sb.append("### 6e. Callers of FUN_10025fd1c (original):\n\n");
        List<Long> origCallers = getCallerAddresses(0x10025fd1cL, 5);
        for (Long addr : origCallers) {
            sb.append(decompileAt(addr));
        }

        // =====================================================================
        // SECTION 7: Exhaustive decompilation search for 0x18f21
        // =====================================================================
        sb.append("---\n\n## 7. Exhaustive Decompilation Search\n\n");
        sb.append("Decompiling ALL functions that reference addresses near the trophy data range.\n\n");
        exhaustiveSearchForOffset();

        // =====================================================================
        // SECTION 8: Cross-reference the guild trophy equivalent
        // =====================================================================
        sb.append("---\n\n## 8. Guild Trophy Equivalent (for comparison)\n\n");
        sb.append("The guild trophy panel at FUN_10023cb3c checks `param_1 + 0x64639`. Let's trace who sets THAT flag.\n\n");
        sb.append("### FUN_10023cb3c (guild trophy renderer)\n\n");
        sb.append(decompileAt(0x10023cb3cL));
        sb.append("### Callers of FUN_10023cb3c:\n\n");
        List<Long> guildCallers = getCallerAddresses(0x10023cb3cL, 5);
        for (Long addr : guildCallers) {
            sb.append(decompileAt(addr));
        }

        // Search for 0x64639 setter
        sb.append("### Search for 0x64639 setter (guild equivalent of +0x18f21)\n\n");
        searchForSTRtoOffset(0x64639L, "0x64639 (guild trophy flag)");

        // =====================================================================
        // SECTION 9: Look at the __DATA+0x147be00 hook target
        // =====================================================================
        sb.append("---\n\n## 9. Analysis of Hook Target __DATA+0x147be00\n\n");
        long dataHookTarget = 0x100000000L + 0x147be00L;
        sb.append("Absolute address of hook target: `0x").append(Long.toHexString(dataHookTarget)).append("`\n\n");

        // Read what's at that address
        try {
            Address hookAddr = currentProgram.getAddressFactory().getAddress("0x" + Long.toHexString(dataHookTarget));
            Memory mem = currentProgram.getMemory();
            if (mem.contains(hookAddr)) {
                byte[] bytes = new byte[8];
                mem.getBytes(hookAddr, bytes);
                long ptrValue = 0;
                for (int i = 7; i >= 0; i--) {
                    ptrValue = (ptrValue << 8) | (bytes[i] & 0xFF);
                }
                sb.append("Value at hook target: `0x").append(Long.toHexString(ptrValue)).append("`\n\n");

                // Check if this points to a function
                Address funcAddr = currentProgram.getAddressFactory().getAddress("0x" + Long.toHexString(ptrValue));
                Function func = currentProgram.getFunctionManager().getFunctionAt(funcAddr);
                if (func != null) {
                    sb.append("Points to function: `").append(func.getName()).append("` @ `0x").append(Long.toHexString(func.getEntryPoint().getOffset())).append("`\n\n");
                    sb.append(decompileAt(func.getEntryPoint().getOffset()));
                } else {
                    sb.append("Does NOT point to a recognized function.\n\n");
                    // Check what function contains this area
                    Function containing = currentProgram.getFunctionManager().getFunctionContaining(funcAddr);
                    if (containing != null) {
                        sb.append("Value falls within: `").append(containing.getName()).append("` @ `0x").append(Long.toHexString(containing.getEntryPoint().getOffset())).append("`\n\n");
                    }
                }

                // What references this __DATA location?
                sb.append("### References TO the hook target address:\n\n");
                ReferenceIterator refs = currentProgram.getReferenceManager().getReferencesTo(hookAddr);
                int refCount = 0;
                while (refs.hasNext() && refCount < 10) {
                    Reference ref = refs.next();
                    Function refFunc = currentProgram.getFunctionManager().getFunctionContaining(ref.getFromAddress());
                    if (refFunc != null) {
                        sb.append("- From `").append(refFunc.getName()).append("` @ `0x").append(Long.toHexString(refFunc.getEntryPoint().getOffset())).append("` (ref at 0x").append(Long.toHexString(ref.getFromAddress().getOffset())).append(")\n");
                    } else {
                        sb.append("- From `0x").append(Long.toHexString(ref.getFromAddress().getOffset())).append("` (no function)\n");
                    }
                    refCount++;
                }
                sb.append("\n");
            } else {
                sb.append("Address not in memory map.\n\n");
            }
        } catch (Exception e) {
            sb.append("Error reading hook target: ").append(e.getMessage()).append("\n\n");
        }

        // =====================================================================
        // SECTION 10: Summary and recommendations
        // =====================================================================
        sb.append("---\n\n## 10. Summary & Findings\n\n");
        sb.append("This report traces the full call chain for trophy rendering and identifies all code paths that write to the `+0x18f21` flag.\n\n");
        sb.append("### Key offsets on the profile panel object:\n");
        sb.append("| Offset | Purpose |\n");
        sb.append("|--------|--------|\n");
        sb.append("| +0x17678 | Trophy sub-panel start |\n");
        sb.append("| +0x18ef8 | Trophy entry count |\n");
        sb.append("| +0x18f00 | Trophy entry array pointer |\n");
        sb.append("| +0x18f21 | Trophy data populated flag (GATE) |\n");
        sb.append("| +0x18f22 | Trophy pagination initialized flag |\n");
        sb.append("| +0x3328 | Tab panel pointer array |\n");
        sb.append("| +0x3338 | Currently selected tab pointer |\n\n");

        String filepath = outputDir + "/trophy_flag_deep_trace.md";
        FileWriter fw = new FileWriter(filepath);
        fw.write(sb.toString());
        fw.close();
        decomp.dispose();
        println("[analysis] Wrote " + filepath + " (" + sb.length() + " bytes)");
    }

    /**
     * Search for ARM64 STR/STRB instructions that could target the given struct offset.
     * Since offsets > 4095 can't be encoded in a single STRB, the compiler splits them:
     *   ADD Xm, Xn, #high, LSL#12   (or multiple ADDs)
     *   STRB Wt, [Xm, #low]
     * We enumerate all valid splits and search for the corresponding STRB instruction bytes.
     */
    private void searchForSTRtoOffset(long targetOffset, String label) {
        println("[search] Searching for STR/STRB instructions targeting offset " + label);
        sb.append("#### Searching for stores to offset ").append(label).append("\n\n");

        Memory mem = currentProgram.getMemory();
        FunctionManager fm = currentProgram.getFunctionManager();
        int totalFound = 0;

        // For STRB (byte store), the immediate offset is NOT scaled, max 4095.
        // For STR (word store), the immediate is scaled by 4, so max offset = 4095*4 = 16380.
        // For STR (doubleword), scaled by 8, max 32760.

        // Enumerate possible split points for STRB:
        // high_part (added via ADD with shift or plain ADD) + low_part (STRB immediate)
        // low_part must be 0..4095 for STRB

        // Possible ADD encodings:
        // ADD Xd, Xn, #imm12            -> adds imm12 (0..4095)
        // ADD Xd, Xn, #imm12, LSL#12    -> adds imm12 << 12 (0..4095*4096)

        // So two-instruction sequences:
        // 1. ADD Xm, Xn, #H, LSL#12; STRB Wt, [Xm, #L]  where H*4096 + L = targetOffset, L <= 4095
        //    H = targetOffset >> 12, L = targetOffset & 0xFFF  (if H <= 4095)
        // 2. ADD Xm, Xn, #H; STRB Wt, [Xm, #L]  where H + L = targetOffset, H <= 4095, L <= 4095
        //    This only works if targetOffset <= 8190.
        // 3. Three instructions: ADD #H1,LSL#12; ADD #H2; STRB #L  where H1*4096+H2+L = targetOffset

        // For targetOffset = 0x18f21:
        // Split 1: H = 0x18f21 >> 12 = 0x18, L = 0x18f21 & 0xFFF = 0xF21
        //   ADD Xm, Xn, #0x18, LSL#12  then  STRB Wt, [Xm, #0xF21]
        // Split 3: H1 = 0x18, LSL#12 = 0x18000; then H2 = 0xF00; L = 0x21
        //   ADD Xm, Xn, #0x18, LSL#12  then  ADD Xm, Xm, #0xF00  then  STRB Wt, [Xm, #0x21]

        // Also for STR (word, 4-byte): offset must be aligned to 4.
        // If targetOffset is not 4-aligned, it can't use STR.
        // 0x18f21 is not 4-aligned, so only STRB (or STRH if 2-aligned) can directly address it.
        // STRH: offset is scaled by 2, so max offset = 4095*2 = 8190.

        // Let's search for ALL possible STRB immediate values
        Set<Long> strbImmediates = new LinkedHashSet<>();

        // Direct STRB (only if targetOffset <= 4095)
        if (targetOffset <= 4095) {
            strbImmediates.add(targetOffset);
        }

        // Split with ADD #imm, LSL#12
        long highShifted = targetOffset >> 12;
        long lowAfterShift = targetOffset & 0xFFF;
        if (highShifted <= 4095 && lowAfterShift <= 4095) {
            strbImmediates.add(lowAfterShift);
        }

        // Split with ADD #imm, LSL#12 + ADD #imm2
        // H1*4096 + H2 + L = target, where H1<=4095, H2<=4095, L<=4095
        // With H1 = targetOffset >> 12:
        // H2 + L = targetOffset & 0xFFF = lowAfterShift
        // H2 can range from 0 to min(lowAfterShift, 4095)
        // We only need to search for L values. All possible L when H2 is a valid ADD imm12:
        for (long h2 = 0; h2 <= Math.min(lowAfterShift, 4095); h2++) {
            long l = lowAfterShift - h2;
            if (l >= 0 && l <= 4095) {
                strbImmediates.add(l);
            }
        }
        // That adds too many. Let's just focus on the most likely splits:
        strbImmediates.clear();
        if (targetOffset <= 4095) strbImmediates.add(targetOffset);
        strbImmediates.add(lowAfterShift);  // STRB #0xF21 after ADD #0x18, LSL#12
        strbImmediates.add(0x21L);          // STRB #0x21 after ADD #0x18,LSL#12 + ADD #0xF00
        strbImmediates.add(0x121L);         // STRB #0x121 after ADD #0x18,LSL#12 + ADD #0xE00
        strbImmediates.add(0x321L);         // STRB #0x321 after ADD #0x18,LSL#12 + ADD #0xC00

        sb.append("Searching for STRB with immediates: ");
        for (Long imm : strbImmediates) {
            sb.append("0x").append(Long.toHexString(imm)).append(" ");
        }
        sb.append("\n\n");

        // Scan executable memory blocks in 4-byte aligned steps
        // This is more efficient than findBytes for common byte patterns
        try {
            ghidra.program.model.mem.MemoryBlock[] blocks = mem.getBlocks();
            Set<Long> reportedFuncs = new HashSet<>();

            for (ghidra.program.model.mem.MemoryBlock block : blocks) {
                if (!block.isExecute()) continue;
                Address blockStart = block.getStart();
                Address blockEnd = block.getEnd();

                long startOff = blockStart.getOffset();
                if ((startOff & 0x3) != 0) startOff = (startOff + 3) & ~0x3L;
                long endOff = blockEnd.getOffset();

                for (long off = startOff; off <= endOff - 3 && !monitor.isCancelled(); off += 4) {
                    Address instrAddr = blockStart.getNewAddress(off);
                    byte[] instrBytes = new byte[4];
                    try { mem.getBytes(instrAddr, instrBytes); } catch (Exception e) { continue; }

                    long instr = (instrBytes[0] & 0xFFL)
                               | ((instrBytes[1] & 0xFFL) << 8)
                               | ((instrBytes[2] & 0xFFL) << 16)
                               | ((instrBytes[3] & 0xFFL) << 24);

                    // Check if this is a STRB (unsigned offset) instruction
                    if ((instr & 0xFFC00000L) != 0x39000000L) continue;

                    long actualImm = (instr >> 10) & 0xFFF;
                    // Check if this immediate matches any of our target splits
                    if (!strbImmediates.contains(actualImm)) continue;

                    int Rn = (int)((instr >> 5) & 0x1F);
                    int Rt = (int)(instr & 0x1F);

                    Function func = fm.getFunctionContaining(instrAddr);
                    if (func == null) continue;

                    // Skip if we already checked this function
                    long funcEntry = func.getEntryPoint().getOffset();
                    long dedupKey = funcEntry * 4096 + actualImm;
                    if (reportedFuncs.contains(dedupKey)) continue;
                    reportedFuncs.add(dedupKey);

                    String funcName = func.getName() + " @ 0x" + Long.toHexString(funcEntry);

                    // Verify the function has the necessary ADD instructions
                    boolean relevant = false;
                    String addInfo = "";

                    if (actualImm == targetOffset) {
                        relevant = true;
                        addInfo = "direct";
                    } else if (actualImm == lowAfterShift) {
                        if (checkForAddImm(func, highShifted, true)) {
                            relevant = true;
                            addInfo = "ADD #0x" + Long.toHexString(highShifted) + ",LSL#12 found";
                        }
                    } else if (actualImm <= 0x21L && highShifted > 0) {
                        // Three-instruction split: ADD #high,LSL#12 + ADD #mid + STRB #low
                        long remainder = lowAfterShift - actualImm;
                        if (remainder > 0 && remainder <= 4095 && checkForAddImm(func, highShifted, true) && checkForAddImm(func, remainder, false)) {
                            relevant = true;
                            addInfo = "ADD #0x" + Long.toHexString(highShifted) + ",LSL#12 + ADD #0x" + Long.toHexString(remainder) + " found";
                        }
                    } else {
                        long needed = targetOffset - actualImm;
                        if (needed > 0) {
                            long addHigh = needed >> 12;
                            long addLow = needed & 0xFFF;
                            boolean hasHigh = (addHigh > 0 && addHigh <= 4095) ? checkForAddImm(func, addHigh, true) : (addHigh == 0);
                            boolean hasLow = (addLow > 0 && addLow <= 4095) ? checkForAddImm(func, addLow, false) : (addLow == 0);
                            if (hasHigh && hasLow) {
                                relevant = true;
                                addInfo = "ADD chain found (high=0x" + Long.toHexString(addHigh) + " low=0x" + Long.toHexString(addLow) + ")";
                            }
                        }
                    }

                    if (relevant) {
                        totalFound++;
                        sb.append("**STRB W").append(Rt).append(", [X").append(Rn)
                          .append(", #0x").append(Long.toHexString(actualImm)).append("]** at `0x")
                          .append(Long.toHexString(off)).append("` in `")
                          .append(funcName).append("` (").append(addInfo).append(")\n\n");

                        if (!decompCache.contains(funcEntry)) {
                            sb.append(decompileAt(funcEntry));
                        }
                    }
                }
            }
        } catch (Exception e) {
            sb.append("Error during executable block scan: ").append(e.getMessage()).append("\n\n");
        }

        sb.append("**Total matches for ").append(label).append(": ").append(totalFound).append("**\n\n");
        println("[search] Found " + totalFound + " stores targeting " + label);
    }

    /**
     * Search for ARM64 byte sequences that store to offset 0x18f21.
     *
     * ARM64 STRB (unsigned offset) encoding: 0x39 in bits[31:24], imm12 in bits[21:10]
     * For STRB, the immediate is NOT scaled, so imm12 = offset directly.
     * Max unsigned offset for STRB = 4095 (0xFFF).
     * 0x18f21 > 0xFFF, so compiler must split it.
     *
     * Typical pattern:
     *   ADD Xd, Xn, #0x18000    (or #0x18c00, etc.)
     *   STRB Wt, [Xd, #0xF21]  (or whatever remainder)
     *
     * ADD immediate: 0x91 in bits[31:24], shift in bit 22, imm12 in bits[21:10]
     * ADD Xd, Xn, #0x18000 with LSL#12: imm12=0x18=24, shift=1
     *   Encoding: 0x91 << 24 | 1 << 22 | 0x18 << 10 | Xn << 5 | Xd
     *   = 0x91400000 | (0x18 << 10) | ...
     *   Bytes (little-endian): depends on registers
     *
     * Let's search for STRB with immediate 0xF21:
     * STRB Wt, [Xn, #0xF21]: 0x39 << 24 | 0 << 22 | 0xF21 << 10 | Xn << 5 | Wt
     * = 0x39000000 | (0xF21 << 10) = 0x39000000 | 0x3C8400 = 0x393C8400 | reg bits
     * Mask: 0xFFC00000 for the opcode+shift, then 0x003FFC00 for the imm12
     * imm12 bits [21:10] = 0xF21 means bits = 0x003C8400
     * Full with opcode: 0x393C8400 (mask off register bits)
     */
    private void searchForARM64StoreSequence() {
        println("[search] Scanning for ARM64 STRB with imm12=0xF21...");
        Memory mem = currentProgram.getMemory();

        // Search for STRB Wt, [Xn, #imm] where imm=0xF21
        // STRB unsigned offset: 0b00_111_0_01_00_imm12_Rn_Rt
        // Bits [31:22] = 0b0011100100 = 0x39 << 2 | 0 = 0xE4... wait let me recalculate.
        // 31 30 | 29 28 27 | 26 | 25 24 | 23 22 | 21..10 | 9..5 | 4..0
        // size   | 1  1  1  |  0 | 0  1  | opc   | imm12  |  Rn  |  Rt
        // STRB: size=00, opc=00
        // Bits[31:24] = 00_111_0_01 = 0x39
        // Bits[23:22] = 00
        // imm12 = 0xF21, bits[21:10] = 0xF21
        // So instruction & 0xFFC00000 == 0x39000000
        // And (instruction >> 10) & 0xFFF == 0xF21

        // Build search pattern: we want bytes where bits[31:22]=0b0011100100 and bits[21:10]=0xF21
        // instruction = 0x39000000 | (0xF21 << 10) | (Rn << 5) | Rt
        // = 0x39000000 | 0x003C8400 | reg bits
        // = 0x393C84xx where xx depends on Rn and Rt
        // In little-endian: bytes[0]=Rt|(Rn_low<<5), bytes[1]=0x84|(Rn_high), bytes[2]=0x3C, bytes[3]=0x39
        // Actually: byte[2] has bits[23:16] of the instruction
        // instruction bits layout in LE bytes:
        //   byte[0] = bits[7:0]   = Rt[4:0] | Rn[1:0]<<5
        //   byte[1] = bits[15:8]  = Rn[4:2] | imm12[5:0]<<3  ... wait this is getting complex

        // Let's just search for the specific byte pattern. Instruction value:
        // 0x39000000 | (0xF21 << 10) = 0x393C8400
        // Register bits are in bits[9:0] (Rt=bits[4:0], Rn=bits[9:5])
        // So bytes 2 and 3 are fixed: 0x3C and 0x39
        // Byte 1 has bits[15:8]: imm12 occupies bits[21:10], so bits[15:10] are imm12[5:0]=0x21&0x3F=0x21
        // bits[15:10] = 0x21 = 100001, shifted to bits[15:10] means byte1 bits are:
        // bit15=1, bit14=0, bit13=0, bit12=0, bit11=0, bit10=1, bit9=Rn[4], bit8=Rn[3]
        // So byte[1] = (0x21 & 0x3F) << 2 | Rn[4:3]  = 0x84 | Rn[4:3]
        // byte[1] = 0x84 | (Rn >> 3) & 0x03  (only bottom 2 bits of byte1 vary)

        // Search for byte pattern: ?? (0x84-0x87) 0x3C 0x39
        // That's bytes[1] in range 0x84..0x87, byte[2]=0x3C, byte[3]=0x39

        int strbCount = 0;
        FunctionManager fm = currentProgram.getFunctionManager();

        try {
            // Search for byte[2]=0x3C, byte[3]=0x39 pattern
            // In the instruction stream, aligned to 4 bytes
            Address minAddr = currentProgram.getMinAddress();
            Address maxAddr = currentProgram.getMaxAddress();

            // Search for the fixed bytes 0x3C39 at offsets +2,+3 of instructions
            byte[] searchBytes = new byte[] { 0x3C, 0x39 };
            Address searchAddr = minAddr;

            while (searchAddr != null && !monitor.isCancelled()) {
                searchAddr = mem.findBytes(searchAddr, searchBytes, null, true, monitor);
                if (searchAddr == null) break;

                // Check alignment: this should be at offset+2 of a 4-byte aligned instruction
                long addrOffset = searchAddr.getOffset();
                if ((addrOffset & 0x3) == 2) {
                    // Read the full 4-byte instruction
                    Address instrAddr = searchAddr.subtract(2);
                    byte[] instrBytes = new byte[4];
                    mem.getBytes(instrAddr, instrBytes);

                    // Reconstruct the instruction (little-endian)
                    long instr = (instrBytes[0] & 0xFFL)
                               | ((instrBytes[1] & 0xFFL) << 8)
                               | ((instrBytes[2] & 0xFFL) << 16)
                               | ((instrBytes[3] & 0xFFL) << 24);

                    // Check if this is STRB with imm12=0xF21
                    if ((instr & 0xFFC00000L) == 0x39000000L) {
                        long imm12 = (instr >> 10) & 0xFFF;
                        if (imm12 == 0xF21) {
                            int Rn = (int)((instr >> 5) & 0x1F);
                            int Rt = (int)(instr & 0x1F);
                            strbCount++;

                            Function func = fm.getFunctionContaining(instrAddr);
                            String funcName = func != null ? func.getName() + " @ 0x" + Long.toHexString(func.getEntryPoint().getOffset()) : "unknown";

                            sb.append("**STRB W").append(Rt).append(", [X").append(Rn).append(", #0xF21]** at `0x")
                              .append(Long.toHexString(instrAddr.getOffset())).append("` in `").append(funcName).append("`\n\n");

                            if (func != null) {
                                sb.append(decompileAt(func.getEntryPoint().getOffset()));
                            }
                        }
                    }
                }

                // Move past this match
                searchAddr = searchAddr.add(1);
            }
        } catch (Exception e) {
            sb.append("Error during byte search: ").append(e.getMessage()).append("\n\n");
        }

        sb.append("**Found ").append(strbCount).append(" STRB instructions with imm12=0xF21**\n\n");

        // Also search for STR (word) patterns and STRB via register offset
        sb.append("### 2c-ii. Search for STRB with other offset splits\n\n");
        searchForAlternateStorePatterns();
    }

    /**
     * Search for alternate ARM64 store instruction patterns that could write to +0x18f21.
     * Uses searchForSTRtoOffset for the comprehensive search.
     */
    private void searchForAlternateStorePatterns() {
        println("[search] Running comprehensive STR search for offset 0x18f21...");
        sb.append("Running comprehensive offset search using searchForSTRtoOffset...\n\n");
        searchForSTRtoOffset(0x18f21L, "0x18f21 (trophy enabled flag)");

        sb.append("Also searching for writes to +0x18f22 (second trophy flag)...\n\n");
        searchForSTRtoOffset(0x18f22L, "0x18f22 (trophy pagination flag)");
    }

    /**
     * Check if a function contains an ADD instruction with the given immediate.
     */
    private boolean checkForAddImm(Function func, long imm12, boolean shifted) {
        try {
            Memory mem = currentProgram.getMemory();
            // ADD X (64-bit): bits[31:24] = 0x91
            // shifted (LSL#12): bit[22] = 1
            // unshifted: bit[22] = 0
            // instruction = 0x91000000 | (shift<<22) | (imm12<<10) | regs
            long opBase = 0x91000000L;
            if (shifted) opBase |= (1L << 22);
            long targetBits = opBase | (imm12 << 10);
            // Mask for opcode + shift + imm12: 0xFFC00000 | 0x003FFC00 = 0xFFFFC00
            // Actually we want bits[31:22] and bits[21:10]
            long mask = 0xFFFFFFC00L; // bits[31:10]
            // Hmm that's more than 32 bits. Let me reconsider.
            // We want instruction & 0xFFFFC00 == targetBits & 0xFFFFC00? No.
            // mask = 0xFFFFFC00 to mask out register bits [9:0]
            long instrMask = 0xFFFFFC00L;
            long instrTarget = targetBits & instrMask;

            AddressSetView body = func.getBody();
            Address start = body.getMinAddress();
            Address end = body.getMaxAddress();

            // Limit scan to 50000 instructions (200KB) to avoid huge functions
            long maxScan = Math.min(end.getOffset(), start.getOffset() + 200000);

            // Scan instructions
            Address addr = start;
            while (addr != null && addr.getOffset() <= maxScan && !monitor.isCancelled()) {
                if (mem.contains(addr)) {
                    byte[] bytes = new byte[4];
                    try {
                        mem.getBytes(addr, bytes);
                        long instr = (bytes[0] & 0xFFL)
                                   | ((bytes[1] & 0xFFL) << 8)
                                   | ((bytes[2] & 0xFFL) << 16)
                                   | ((bytes[3] & 0xFFL) << 24);
                        if ((instr & instrMask) == instrTarget) {
                            return true;
                        }
                    } catch (Exception e) {}
                }
                try {
                    addr = addr.add(4);
                } catch (Exception e) {
                    break;
                }
            }
        } catch (Exception e) {}
        return false;
    }

    /**
     * Exhaustive search: decompile functions near known trophy addresses
     * and search for any reference to 0x18f21 in the decompiled output.
     */
    private void exhaustiveSearchForOffset() {
        println("[search] Starting exhaustive search...");

        // Instead of decompiling ALL functions (which would take hours),
        // target functions that reference the trophy sub-panel constructor,
        // trophy data functions, or the profile panel layout function.

        // Key function addresses to trace from:
        long[] seeds = {
            0x100265bd4L,  // trophy renderer
            0x10026609cL,  // trophy tab switcher
            0x1002650d0L,  // wrapper
            0x10025fd1cL,  // trophy sub-panel constructor
            0x100260240L,  // thunk of constructor
            0x1002604c4L,  // trophy data population
            0x1002603e8L,  // trophy list clear
            0x100260d6cL,  // trophy entry adder
            0x100260dd0L,  // FUN_100260dd0 (called after adding entries)
            0x10050c2bcL,  // trophyCase handler
            0x100507640L,  // trophy data parser
            0x100503314L,  // profile data handler
            0x10025a800L,  // trophy page builder
        };

        // Get all callers of these functions (2 levels deep) and decompile them
        // looking for 0x18f21
        Set<Long> toCheck = new LinkedHashSet<>();
        for (long seed : seeds) {
            toCheck.add(seed);
            List<Long> callers = getCallerAddresses(seed, 10);
            toCheck.addAll(callers);
            for (Long caller : callers) {
                List<Long> callers2 = getCallerAddresses(caller, 5);
                toCheck.addAll(callers2);
            }
        }

        sb.append("Checking ").append(toCheck.size()).append(" functions in the trophy call graph...\n\n");
        println("[search] Will check " + toCheck.size() + " functions");

        int matchCount = 0;
        for (Long addr : toCheck) {
            if (monitor.isCancelled()) break;
            try {
                Address funcAddr = currentProgram.getAddressFactory().getAddress("0x" + Long.toHexString(addr));
                Function func = currentProgram.getFunctionManager().getFunctionAt(funcAddr);
                if (func == null) func = currentProgram.getFunctionManager().getFunctionContaining(funcAddr);
                if (func == null) continue;

                DecompileResults result = decomp.decompileFunction(func, 60, monitor);
                if (result != null && result.decompileCompleted() && result.getDecompiledFunction() != null) {
                    String code = result.getDecompiledFunction().getC();
                    if (code.contains("0x18f21") || code.contains("0x18F21")) {
                        matchCount++;
                        sb.append("#### FOUND 0x18f21 in `").append(func.getName()).append("` @ `0x")
                          .append(Long.toHexString(func.getEntryPoint().getOffset())).append("`\n\n");
                        String trimmed = code;
                        if (trimmed.length() > 10000) trimmed = trimmed.substring(0, 10000) + "\n// ...truncated...";
                        sb.append("```c\n").append(trimmed).append("\n```\n\n");
                    }
                    // Also check for the flag being set via the sub-panel relative offset
                    if (code.contains("0x18a9") || code.contains("0x18A9")) {
                        matchCount++;
                        sb.append("#### FOUND 0x18a9 (sub-panel relative) in `").append(func.getName()).append("` @ `0x")
                          .append(Long.toHexString(func.getEntryPoint().getOffset())).append("`\n\n");
                        String trimmed = code;
                        if (trimmed.length() > 10000) trimmed = trimmed.substring(0, 10000) + "\n// ...truncated...";
                        sb.append("```c\n").append(trimmed).append("\n```\n\n");
                    }
                }
            } catch (Exception e) {}
        }

        sb.append("**Exhaustive search found ").append(matchCount).append(" functions referencing 0x18f21 or 0x18a9**\n\n");
    }

    /**
     * Trace "trophyCase" string references and their callers.
     */
    private void traceTrophyCaseStringRefs() {
        List<Address> addrs = findStr("trophyCase");
        if (addrs.isEmpty()) {
            sb.append("*\"trophyCase\" string not found*\n\n");
            return;
        }

        sb.append("**\"trophyCase\" found at:** ");
        for (int i = 0; i < addrs.size(); i++) {
            if (i > 0) sb.append(", ");
            sb.append("`0x").append(Long.toHexString(addrs.get(i).getOffset())).append("`");
        }
        sb.append("\n\n");

        FunctionManager fm = currentProgram.getFunctionManager();
        ReferenceManager refMgr = currentProgram.getReferenceManager();
        Set<Address> seen = new HashSet<>();

        for (Address addr : addrs) {
            ReferenceIterator refs = refMgr.getReferencesTo(addr);
            while (refs.hasNext()) {
                Reference ref = refs.next();
                Function func = fm.getFunctionContaining(ref.getFromAddress());
                if (func == null || seen.contains(func.getEntryPoint())) continue;
                seen.add(func.getEntryPoint());

                sb.append("#### `").append(func.getName()).append("` @ `0x")
                  .append(Long.toHexString(func.getEntryPoint().getOffset())).append("` (references trophyCase)\n\n");
                sb.append(decompileAt(func.getEntryPoint().getOffset()));

                // Trace callers
                sb.append("##### Callers:\n\n");
                List<Long> callers = getCallerAddresses(func.getEntryPoint().getOffset(), 3);
                for (Long callerAddr : callers) {
                    sb.append(decompileAt(callerAddr));
                }
            }
        }
    }

    private List<Address> findStr(String target) {
        List<Address> results = new ArrayList<>();
        Listing listing = currentProgram.getListing();
        DataIterator dataIter = listing.getDefinedData(true);
        while (dataIter.hasNext() && !monitor.isCancelled()) {
            Data data = dataIter.next();
            if (data.hasStringValue()) {
                Object val = data.getValue();
                if (val != null && val.toString().equals(target)) {
                    results.add(data.getAddress());
                }
            }
        }
        if (results.isEmpty()) {
            Memory mem = currentProgram.getMemory();
            try {
                byte[] searchBytes = (target + "\0").getBytes("UTF-8");
                Address addr = mem.getMinAddress();
                while (addr != null && !monitor.isCancelled()) {
                    addr = mem.findBytes(addr, searchBytes, null, true, monitor);
                    if (addr != null) { results.add(addr); addr = addr.add(1); }
                }
            } catch (Exception e) {}
        }
        return results;
    }

    private String decompileAt(long va) {
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
            out.append("*(Already decompiled above — see earlier section)*\n\n");
            return out.toString();
        }
        decompCache.add(entryOff);

        try {
            DecompileResults result = decomp.decompileFunction(func, 120, monitor);
            if (result != null && result.decompileCompleted() && result.getDecompiledFunction() != null) {
                String code = result.getDecompiledFunction().getC();
                if (code.length() > 12000) code = code.substring(0, 12000) + "\n// ...truncated...";
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
