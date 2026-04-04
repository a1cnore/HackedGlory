// Trace trophy section and season rank UI gating.
// @category Analysis

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;

public class GhidraTrophyAnalysis extends GhidraScript {
    private DecompInterface decomp;

    @Override
    public void run() throws Exception {
        String outputDir = System.getenv("VGF_REPORT_DIR");
        if (outputDir == null) outputDir = "/tmp/vgf_ghidra_reports";
        new File(outputDir).mkdirs();

        decomp = new DecompInterface();
        decomp.setOptions(new DecompileOptions());
        decomp.openProgram(currentProgram);

        StringBuilder sb = new StringBuilder();
        sb.append("# Trophy Section & Season Rank Analysis\n\n");

        // 1. Trophy display strings — find the UI rendering code
        String[] trophyStrings = {
            "MENU_TROPHY_SKILL_TIER_SUBTITLE",
            "MENU_TROPHY_GUILD_SUBTITLE",
            "MENU_TROPHY_DATA_ERROR",
            "MENU_TROPHY_PAGE_DOWN_ARROW_LABEL",
            "PLAYER_PROFILE_TROPHY_EXPLANATION",
            "TROPHY_PAGINATION_INTRODUCTION_TOOLTIP",
            "trophyCase",
            "getTrophyCase",
            "trophy_name",
            "trophy_type",
        };
        sb.append("## 1. Trophy UI & Data Strings\n\n");
        for (String s : trophyStrings) {
            println("[analysis] Tracing: " + s);
            sb.append(traceString(s, 2));
        }

        // 2. Profile ranked tabs — the skill tier display
        String[] rankedStrings = {
            "MENU_PROFILE_TAB_RANKED_5V5",
            "MENU_PROFILE_TAB_RANKED_3V3",
            "MENU_PROFILE_TAB_OVERVIEW",
            "PLAYER_PROFILE_RANKED_SKILL_TIER_DECAY_ACTIVE",
            "PLAYER_PROFILE_SKILLTIER_EXPLANATION_DESCRIPTION",
            "ranked_3v3",
            "ranked_5v5",
            "skillProgressionInfo",
            "seasonMaxSkillTier",
            "endOfSeasonRewards",
            "MAIN_SEASON_TROPHY_GUILD_TOOLTIP",
        };
        sb.append("## 2. Profile Ranked Tabs & Skill Tier Display\n\n");
        for (String s : rankedStrings) {
            println("[analysis] Tracing: " + s);
            sb.append(traceString(s, 2));
        }

        // 3. The profile panel initialization — FUN_100221ff0 already decompiled
        // but let's find the trophy page builder specifically
        sb.append("## 3. Season/Seasonal Data Constants\n\n");
        String[] seasonStrings = {
            "endSeasonEpoch",
            "seasonIndex",
            "getSeasonRewardsManifest",
            "attemptRedeemSeasonalAscensionChest",
            "seasonBattlePassRankCollectedMap",
            "seasonRankCollectedMap",
        };
        for (String s : seasonStrings) {
            println("[analysis] Tracing: " + s);
            sb.append(traceString(s, 1));
        }

        String filepath = outputDir + "/trophy_season_analysis.md";
        FileWriter fw = new FileWriter(filepath);
        fw.write(sb.toString());
        fw.close();
        decomp.dispose();
        println("[analysis] Wrote " + filepath + " (" + sb.length() + " bytes)");
    }

    private String traceString(String target, int callerDepth) {
        StringBuilder sb = new StringBuilder();
        sb.append("### `").append(target).append("`\n\n");

        List<Address> addrs = findStr(target);
        if (addrs.isEmpty()) {
            sb.append("*Not found*\n\n");
            return sb.toString();
        }

        sb.append("**Addresses:** ");
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
                  .append(Long.toHexString(func.getEntryPoint().getOffset())).append("`\n\n");

                String code = decompFunc(func);
                if (code != null) {
                    if (code.length() > 8000) code = code.substring(0, 8000) + "\n// ...truncated...";
                    sb.append("```c\n").append(code).append("\n```\n\n");
                }

                // Trace callers
                if (callerDepth > 0) {
                    ReferenceIterator callerRefs = refMgr.getReferencesTo(func.getEntryPoint());
                    int cc = 0;
                    while (callerRefs.hasNext() && cc < 2) {
                        Reference cRef = callerRefs.next();
                        Function caller = fm.getFunctionContaining(cRef.getFromAddress());
                        if (caller == null || seen.contains(caller.getEntryPoint())) continue;
                        seen.add(caller.getEntryPoint());
                        sb.append("##### Caller: `").append(caller.getName()).append("` @ `0x")
                          .append(Long.toHexString(caller.getEntryPoint().getOffset())).append("`\n\n");
                        String cc2 = decompFunc(caller);
                        if (cc2 != null) {
                            if (cc2.length() > 5000) cc2 = cc2.substring(0, 5000) + "\n// ...truncated...";
                            sb.append("```c\n").append(cc2).append("\n```\n\n");
                        }
                        cc++;
                    }
                }
            }
        }
        return sb.toString();
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

    private String decompFunc(Function func) {
        if (func == null) return null;
        try {
            DecompileResults result = decomp.decompileFunction(func, 90, monitor);
            if (result != null && result.decompileCompleted() && result.getDecompiledFunction() != null) {
                return result.getDecompiledFunction().getC();
            }
        } catch (Exception e) {}
        return null;
    }
}
