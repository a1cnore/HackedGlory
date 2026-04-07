// Find FPTR_TROPHY_PANEL, FPTR_PROFILE_LAYOUT, FPTR_PROFILE_BODY,
// FPTR_PROFILE_LOADER on Android libGameKindred.so
//
// Strategy:
//   1. Find trophy-related strings ("trophy", "ranked", "skill_tier", etc.)
//   2. Find profile layout strings ("profile_card", "profile_body", etc.)
//   3. Decompile functions, trace to .data.rel.ro fptrs
//   4. Cross-reference with known confirmed offsets to validate
//
// Known confirmed Android offsets for reference:
//   FPTR_PROFILE_DATA    = 0x26dc200 (func 0xa0c2f8)
//   FPTR_PROFILE_RANKED  = 0x26d5630 (func 0xa02b60)
//   CODE_OPEN_FULL_PROFILE = 0xbbf91c (alloc 0x288f0)
//
// Run on: Android arm64 libGameKindred.so
// Output: /tmp/vgf_android_reports/trophy_profile.md
// @category VGF-Android

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;

public class GhidraFindTrophyProfile extends GhidraScript {
    private DecompInterface decomp;

    @Override
    public void run() throws Exception {
        String outputDir = System.getenv("VGF_REPORT_DIR");
        if (outputDir == null) outputDir = "/tmp/vgf_android_reports";
        new File(outputDir).mkdirs();

        decomp = new DecompInterface();
        decomp.setOptions(new DecompileOptions());
        decomp.openProgram(currentProgram);

        StringBuilder sb = new StringBuilder();
        sb.append("# Android Trophy/Profile Offset Discovery\n\n");

        // 1. Trophy-related strings
        sb.append("## 1. Trophy String XREFs\n\n");
        String[] trophyStrings = {
            "trophy",
            "trophies",
            "skill_tier",
            "skillTier",
            "ranked",
            "rankedData",
            "RankedDataEloBucket",
            "season_trophy",
            "trophy_icon",
            "trophy_section",
        };
        for (String s : trophyStrings) {
            if (monitor.isCancelled()) break;
            List<Function> funcs = findFunctionsReferencingString(s);
            sb.append("### \"").append(s).append("\" — ").append(funcs.size()).append(" functions\n\n");
            for (Function f : funcs) {
                sb.append("- `").append(f.getName()).append("` @ `0x")
                  .append(Long.toHexString(f.getEntryPoint().getOffset())).append("`\n");
            }
            sb.append("\n");
        }

        // 2. Profile-related strings
        sb.append("## 2. Profile String XREFs\n\n");
        String[] profileStrings = {
            "profile_card",
            "profile_body",
            "profile_header",
            "homepanel_profile_avatar",
            "profilePanel",
            "profile_ranked",
            "profile_loading",
        };
        Map<String, List<Function>> profileFuncs = new LinkedHashMap<>();
        for (String s : profileStrings) {
            if (monitor.isCancelled()) break;
            List<Function> funcs = findFunctionsReferencingString(s);
            profileFuncs.put(s, funcs);
            sb.append("### \"").append(s).append("\" — ").append(funcs.size()).append(" functions\n\n");
            for (Function f : funcs) {
                sb.append("- `").append(f.getName()).append("` @ `0x")
                  .append(Long.toHexString(f.getEntryPoint().getOffset())).append("`\n");
            }
            sb.append("\n");
        }

        // 3. Decompile and find .data.rel.ro fptrs for profile functions
        sb.append("## 3. Profile Function Decompilation + RELRO Pointers\n\n");
        Set<Function> allProfileFuncs = new LinkedHashSet<>();
        for (List<Function> fl : profileFuncs.values()) {
            allProfileFuncs.addAll(fl);
        }
        int count = 0;
        for (Function f : allProfileFuncs) {
            if (monitor.isCancelled() || count++ >= 20) break;
            sb.append(decompileFunc(f));
            sb.append(findRelroPointers(f));
            sb.append("---\n\n");
        }

        // 4. Cross-reference: decompile known confirmed functions and their neighbors
        sb.append("## 4. Known Confirmed Functions + Neighbors\n\n");
        long[][] knownFuncs = {
            {0xa0c2f8L},  // FPTR_PROFILE_DATA target
            {0xa02b60L},  // FPTR_PROFILE_RANKED target
            {0xbbf91cL},  // CODE_OPEN_FULL_PROFILE
            {0xaf7920L},  // FPTR_PROFILE_EEB60 target
            {0xaf7980L},  // FPTR_PROFILE_F505C target (guest-gated opener)
        };
        String[] knownNames = {
            "profile_data (CONFIRMED)", "profile_ranked (CONFIRMED)",
            "open_full_profile (CONFIRMED)", "profile_eeb60 (CONFIRMED)",
            "profile_f505c (CONFIRMED)"
        };
        for (int i = 0; i < knownFuncs.length; i++) {
            if (monitor.isCancelled()) break;
            Address addr = toAddr(knownFuncs[i][0]);
            Function f = currentProgram.getFunctionManager().getFunctionAt(addr);
            if (f == null) f = currentProgram.getFunctionManager().getFunctionContaining(addr);
            if (f != null) {
                sb.append("### ").append(knownNames[i]).append("\n\n");
                sb.append(decompileFunc(f));
                // Find callers — these might be the missing profile_body, profile_loader
                Set<Function> callers = getCallers(f);
                sb.append("Callers (").append(callers.size()).append("):\n\n");
                int cc = 0;
                for (Function caller : callers) {
                    if (cc++ >= 5) break;
                    sb.append("- `").append(caller.getName()).append("` @ `0x")
                      .append(Long.toHexString(caller.getEntryPoint().getOffset())).append("`\n");
                    sb.append(findRelroPointers(caller));
                }
                sb.append("---\n\n");
            }
        }

        // 5. Scan .data.rel.ro neighborhood of known fptrs for unknown ones
        sb.append("## 5. RELRO Neighborhood Scan\n\n");
        sb.append("Scanning 256 bytes around known fptrs for other function pointers:\n\n");
        long[] knownFptrs = {
            0x26dc200L,  // FPTR_PROFILE_DATA
            0x26d5630L,  // FPTR_PROFILE_RANKED
            0x26d8080L,  // FPTR_SEASON_UPDATE
            0x26d1440L,  // FPTR_SOCIAL_FEAT
            0x26da510L,  // FPTR_SKILL_TIER
            0x26c97b0L,  // FPTR_TAB_INIT
        };
        Memory mem = currentProgram.getMemory();
        FunctionManager fm = currentProgram.getFunctionManager();
        for (long fptr : knownFptrs) {
            if (monitor.isCancelled()) break;
            sb.append("### Around 0x").append(Long.toHexString(fptr)).append(":\n\n");
            sb.append("| Offset | Value | Function |\n");
            sb.append("|--------|-------|----------|\n");
            for (long off = fptr - 128; off <= fptr + 128; off += 8) {
                try {
                    Address a = toAddr(off);
                    long val = mem.getLong(a);
                    if (val > 0x100000 && val < 0x2000000) { // plausible code offset
                        Function func = fm.getFunctionAt(toAddr(val));
                        String fname = func != null ? func.getName() : "(no func)";
                        String marker = (off == fptr) ? " **KNOWN**" : "";
                        sb.append("| 0x").append(Long.toHexString(off))
                          .append(" | 0x").append(Long.toHexString(val))
                          .append(" | ").append(fname).append(marker).append(" |\n");
                    }
                } catch (Exception e) {}
            }
            sb.append("\n");
        }

        decomp.dispose();

        String filepath = outputDir + "/trophy_profile.md";
        FileWriter fw = new FileWriter(filepath);
        fw.write(sb.toString());
        fw.close();
        println("[android] Wrote " + filepath + " (" + sb.length() + " bytes)");
    }

    // --- Shared helpers (same as GhidraFindNavRefresh) ---

    private List<Function> findFunctionsReferencingString(String target) {
        List<Function> results = new ArrayList<>();
        List<Address> stringAddrs = findStringAddresses(target);
        FunctionManager fm = currentProgram.getFunctionManager();
        for (Address strAddr : stringAddrs) {
            ReferenceIterator refs = currentProgram.getReferenceManager().getReferencesTo(strAddr);
            while (refs.hasNext()) {
                Reference ref = refs.next();
                Function f = fm.getFunctionContaining(ref.getFromAddress());
                if (f != null && !results.contains(f)) results.add(f);
            }
        }
        return results;
    }

    private List<Address> findStringAddresses(String target) {
        List<Address> results = new ArrayList<>();
        DataIterator dataIter = currentProgram.getListing().getDefinedData(true);
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

    private String findRelroPointers(Function func) {
        StringBuilder sb = new StringBuilder();
        long target = func.getEntryPoint().getOffset();
        Memory mem = currentProgram.getMemory();
        long relroStart = 0x26b8b20L;
        long relroEnd = 0x2ad1fa8L;
        byte[] searchBytes = new byte[8];
        for (int j = 0; j < 8; j++) searchBytes[j] = (byte)((target >> (j*8)) & 0xff);
        try {
            Address searchAddr = toAddr(relroStart);
            Address endAddr = toAddr(relroEnd);
            boolean found = false;
            while (searchAddr != null && searchAddr.compareTo(endAddr) < 0 && !monitor.isCancelled()) {
                searchAddr = mem.findBytes(searchAddr, searchBytes, null, true, monitor);
                if (searchAddr != null && searchAddr.compareTo(endAddr) < 0) {
                    if (!found) { sb.append("**.data.rel.ro fptrs:**\n"); found = true; }
                    sb.append("- `0x").append(Long.toHexString(searchAddr.getOffset())).append("`\n");
                    searchAddr = searchAddr.add(8);
                }
            }
        } catch (Exception e) {}
        if (sb.length() > 0) sb.append("\n");
        return sb.toString();
    }

    private Set<Function> getCallers(Function func) {
        Set<Function> callers = new LinkedHashSet<>();
        ReferenceIterator refs = currentProgram.getReferenceManager().getReferencesTo(func.getEntryPoint());
        while (refs.hasNext()) {
            Reference ref = refs.next();
            Function caller = currentProgram.getFunctionManager().getFunctionContaining(ref.getFromAddress());
            if (caller != null && !caller.equals(func)) callers.add(caller);
        }
        return callers;
    }

    private String decompileFunc(Function func) {
        StringBuilder sb = new StringBuilder();
        sb.append("#### `").append(func.getName()).append("` @ `0x")
          .append(Long.toHexString(func.getEntryPoint().getOffset())).append("`\n\n");
        try {
            DecompileResults result = decomp.decompileFunction(func, 120, monitor);
            if (result != null && result.decompileCompleted() && result.getDecompiledFunction() != null) {
                String code = result.getDecompiledFunction().getC();
                if (code.length() > 10000) code = code.substring(0, 10000) + "\n// ...truncated...";
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
