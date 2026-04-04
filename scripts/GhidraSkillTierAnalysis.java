// GhidraSkillTierAnalysis.java — Decompile FUN_10025129c (skill tier display)
// and find the inner logic after the CE gate check.
// Run in Ghidra's Script Manager on the GameKindred binary.
//
// @category Analysis

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;

public class GhidraSkillTierAnalysis extends GhidraScript {

    @Override
    public void run() throws Exception {
        Address skillTierAddr = toAddr(0x10025129c);
        Function skillTierFn = getFunctionAt(skillTierAddr);
        if (skillTierFn == null) {
            skillTierFn = createFunction(skillTierAddr, "FUN_10025129c");
        }

        println("=== FUN_10025129c (Skill Tier Display) ===");
        println("Address: " + skillTierAddr);
        println("Size: " + skillTierFn.getBody().getNumAddresses() + " bytes");
        println();

        // Decompile
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);
        DecompileResults results = decomp.decompileFunction(skillTierFn, 30, monitor);
        if (results.depiledFunction() != null) {
            println("=== Decompilation ===");
            println(results.getDecompiledFunction().getC());
        }
        decomp.dispose();

        // Disassemble first 40 instructions to find gate call + branch
        println();
        println("=== Disassembly (first 40 instructions) ===");
        Address ceGateAddr = toAddr(0x100131560);
        InstructionIterator iter = currentProgram.getListing().getInstructions(skillTierAddr, true);
        int count = 0;
        while (iter.hasNext() && count < 40) {
            Instruction inst = iter.next();
            String mnemonic = inst.getMnemonicString();
            String repr = inst.toString();

            // Flag the CE gate call and the conditional branch after it
            String note = "";
            if (mnemonic.equals("bl")) {
                try {
                    Address target = inst.getAddress(0);
                    if (target != null && target.equals(ceGateAddr)) {
                        note = " ← CE GATE CALL";
                    }
                } catch (Exception e) {}
                // Also check operand references
                for (int i = 0; i < inst.getNumOperands(); i++) {
                    Object[] refs = inst.getOpObjects(i);
                    for (Object ref : refs) {
                        if (ref instanceof Address && ((Address)ref).equals(ceGateAddr)) {
                            note = " ← CE GATE CALL";
                        }
                    }
                }
            }
            if (mnemonic.startsWith("cbnz") || mnemonic.startsWith("cbz") ||
                mnemonic.startsWith("tbnz") || mnemonic.startsWith("tbz")) {
                note = " ← GATE BRANCH (inner logic starts after this)";
            }

            printf("  0x%s: %-40s%s\n", inst.getAddress(), repr, note);
            count++;
        }

        // Also check what this function's callers look like
        println();
        println("=== References to FUN_10025129c ===");
        for (ghidra.program.model.symbol.Reference ref :
             getReferencesTo(skillTierAddr)) {
            println("  From: " + ref.getFromAddress() + " (" + ref.getReferenceType() + ")");
        }
    }
}
