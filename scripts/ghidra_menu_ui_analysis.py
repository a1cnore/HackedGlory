# Ghidra headless analysis script for Vainglory E.V.I.L. engine Menu UI
# Usage: analyzeHeadless ... -postScript ghidra_menu_ui_analysis.py
#
# This script traces the UI event dispatch system, friends list data path,
# leaderboard data path, and feature flag gating system by following string
# cross-references through the decompiler.

from ghidra.program.model.symbol import SourceType, RefType
from ghidra.app.decompiler import DecompInterface, DecompileOptions
from ghidra.program.model.listing import CodeUnit
from ghidra.util.task import ConsoleTaskMonitor
import json
import os

MONITOR = ConsoleTaskMonitor()
OUTPUT_DIR = os.environ.get("VGF_REPORT_DIR", "/tmp/vgf_ghidra_reports")

# ──────────────────────────────────────────────────────────────────
# Target strings grouped by analysis phase
# ──────────────────────────────────────────────────────────────────

PHASE2_EVENT_DISPATCH = [
    "UI::EVENT_MENU_PANEL_CHANGE",
    "UI::EVENT_SCREEN_SHOW",
    "UI::EVENT_MENU_SHOW_ROOT",
    "UI::EVENT_SWITCH_TO_TAB",
    "UI::EVENT_POPUP_OPEN",
    "UI::EVENT_POPUP_CLOSE",
    "UI::EVENT_SCREEN_HIDE",
    "UI::EVENT_SCREEN_HIDDEN",
    "UI::EVENT_MENU_ENTER_LOBBY",
    "UI::EVENT_MENU_LOBBY_FINISHED",
    "UI::EVENT_MENU_LOG_OUT",
    "MAIN_MENU_SOCIAL",
    "MAIN_MENU_HOME",
    "MAIN_MENU_PLAY",
    "MAIN_MENU_HEROES",
    "MAIN_MENU_MARKET",
    "MAIN_MENU_PARTY",
    "UI::EVENT_MAIN_HUB_NAV_BAR_ON_NAVIGATE",
    "UI::EVENT_NAVIGATE_TO_LINK",
    "homepanel_overflow_nav_button_leaderboards",
    "homepanel_overflow_nav_button_settings",
    "secondary_nav_leaderboards",
    "secondary_nav_today",
    "secondary_nav_news",
    "secondary_nav_settings",
    "secondary_nav_academy",
    "HomePanelVCHighlightPlay",
    "HomePanelVCKeyholeTiV",
]

PHASE3_FRIENDS = [
    "friendListAll",
    "friendRequestIssueByHandle",
    "friendRequestConfirm",
    "friendRequestReject",
    "friendDelete",
    "friendNotify",
    "friendReplyFromInGame",
    "friendsListUpdate",
    "friendslist_status_circle",
    "UI::EVENT_MENU_FRIENDS_SELECTED",
    "EVENT_FRIENDS_LIST_QUERYING_GUILD",
    "EVENT_FRIENDS_LIST_QUERYING_USERTEAM",
    "MENU_FRIENDS_ONLINE_TITLE",
    "MENU_FRIENDS_OFFLINE_TITLE",
    "MENU_FRIENDS_SAD_AND_EMPTY",
    "MENU_FRIENDS_REQUESTS_TITLE",
    "MENU_FRIENDS_RECENTS_TITLE",
    "MENU_FRIENDS_CONVERSATIONS_TITLE",
    "MENU_PEOPLE_FRIENDS_TAB_HEADER",
    "MENU_PEOPLE_GUILD_TAB_HEADER",
    "MENU_PEOPLE_USER_TEAM_TAB_HEADER",
    "Social_FriendRequest",
    "Social_FriendAccept",
    "Social_PresenceBroadcast",
    "presenceBroadcast",
    "setPresenceInvisibility",
    "Nuo::Services::ChatClient::Username",
    "Nuo::Services::ChatClient::Nickname",
    "chatUrl",
    "chatUser",
    "chatPass",
    "MENU_FRIENDS_STATUS_AVAILABLE",
    "MENU_FRIENDS_STATUS_OFFLINE",
    "MENU_FRIENDS_STATUS_BUSY",
    "MENU_FRIENDS_STATUS_IN_PARTY",
    "MENU_FRIENDS_STATUS_MATCHING",
    "MENU_FRIENDS_STATUS_BANNED",
    "addFriend",
    "MENU_FRIENDS_ADD_FRIEND",
    "partyInviteSend",
    "partyInviteConfirm",
    "partyInviteReject",
]

PHASE4_LEADERBOARD = [
    "getLeaderboardData",
    "leaderboardPanel",
    "leaderboardsPopup",
    "leaderboardId",
    "leaderboardTitle",
    "MENU_LEADERBOARDS_LEADERBOARD_PANEL_TITLE_MY_FRIENDS",
    "MENU_LEADERBOARDS_LEADERBOARD_PANEL_TITLE_MY_GUILD",
    "MENU_LEADERBOARDS_LEADERBOARD_PANEL_TITLE_TOP_100",
    "MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_3V3",
    "MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_5V5",
    "MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_BLITZ",
    "MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_SCORE",
    "MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_WINS",
    "MENU_LEADERBOARDS_LEADERBOARD_LAST_UPDATED_DAYS_AGO",
    "MENU_LEADERBOARDS_LEADERBOARD_LAST_UPDATED_HOURS_AGO",
    "MENU_LEADERBOARDS_LEADERBOARD_LAST_UPDATED_MINUTES_AGO",
    "MENU_LEADERBOARDS_POPUP_TITLE",
    "MENU_LEADERBOARDS_LEADERBOARD_TITLE_MY_FRIENDS",
    "MENU_LEADERBOARDS_LEADERBOARD_TITLE_MY_GUILD",
    "MENU_LEADERBOARDS_LEADERBOARD_TITLE_TOP_100",
    "eventLeaderboardProgress",
    "view_leaderboard",
    "filter_leaderboard_id",
    "filter_leaderboard_no_score",
    "filter_leaderboard_percentile_max",
    "filter_leaderboard_percentile_min",
    "filter_leaderboard_rank_max",
    "filter_leaderboard_rank_min",
    "filter_leaderboard_score_max",
    "filter_leaderboard_score_min",
    "filter_leaderboard_unranked",
]

PHASE5_FEATURES = [
    "featuresEnabled",
    "visibilityFlags",
    "entitlementFilterMode",
    "entitlementFilterProducts",
    "featureIntroduced_%s",
    "leaderboards",
    "inGameChat",
    "liveEvents",
    "leaderboardsAlwaysQueryOfflineFriends",
    "hideBattlepassCallout",
    "experimentDetails",
    "experimentId",
    "isActive",
    "experiment_free_tab_visibility",
    "experiment_friend_auto_favorite_1",
    "freeTabVisibilityExperiment",
    "marketFeedExperiment",
    "enableStateUpdates",
]

# ──────────────────────────────────────────────────────────────────
# Helpers
# ──────────────────────────────────────────────────────────────────

def setup_decompiler():
    """Initialize the Ghidra decompiler interface."""
    decomp = DecompInterface()
    opts = DecompileOptions()
    decomp.setOptions(opts)
    decomp.openProgram(currentProgram)
    return decomp

def find_string_addresses(target_str):
    """Find all addresses in the binary where target_str is stored as a C string."""
    results = []
    mem = currentProgram.getMemory()
    listing = currentProgram.getListing()

    # Search through defined strings
    data_iter = listing.getDefinedData(True)
    while data_iter.hasNext():
        data = data_iter.next()
        if data.hasStringValue():
            val = data.getValue()
            if val is not None and str(val) == target_str:
                results.append(data.getAddress())

    if not results:
        # Fallback: search memory for the raw bytes
        search_bytes = target_str.encode('utf-8') + b'\x00'
        addr = mem.getMinAddress()
        while addr is not None:
            addr = mem.findBytes(addr, search_bytes, None, True, MONITOR)
            if addr is not None:
                results.append(addr)
                addr = addr.add(1)

    return results

def get_xrefs_to(addr):
    """Get all references to an address."""
    ref_mgr = currentProgram.getReferenceManager()
    return list(ref_mgr.getReferencesTo(addr))

def get_function_at(addr):
    """Get the function containing an address."""
    fm = currentProgram.getFunctionManager()
    return fm.getFunctionContaining(addr)

def decompile_function(decomp, func, timeout=60):
    """Decompile a function and return the C pseudocode."""
    if func is None:
        return None
    result = decomp.decompileFunction(func, timeout, MONITOR)
    if result and result.depiledFunction():
        return result.getDecompiledFunction().getC()
    return None

def get_callers(func):
    """Get all functions that call this function."""
    callers = set()
    if func is None:
        return callers
    entry = func.getEntryPoint()
    refs = get_xrefs_to(entry)
    for ref in refs:
        caller_func = get_function_at(ref.getFromAddress())
        if caller_func is not None and caller_func != func:
            callers.add(caller_func)
    return callers

def get_callees(func):
    """Get all functions called by this function."""
    callees = set()
    if func is None:
        return callees
    body = func.getBody()
    ref_mgr = currentProgram.getReferenceManager()
    addr_iter = body.getAddresses(True)
    while addr_iter.hasNext():
        addr = addr_iter.next()
        refs = ref_mgr.getReferencesFrom(addr)
        for ref in refs:
            if ref.getReferenceType().isCall():
                callee = get_function_at(ref.getToAddress())
                if callee is not None and callee != func:
                    callees.add(callee)
    return callees

def trace_string_xrefs(target_str, decomp, max_depth=2):
    """
    Find a string, trace all xrefs to it, decompile the referencing functions,
    and optionally trace one more level up (callers).
    Returns a dict with all findings.
    """
    result = {
        "string": target_str,
        "string_addresses": [],
        "referencing_functions": [],
        "caller_functions": [],
    }

    addrs = find_string_addresses(target_str)
    result["string_addresses"] = ["0x%x" % a.getOffset() for a in addrs]

    seen_funcs = set()
    for addr in addrs:
        refs = get_xrefs_to(addr)
        for ref in refs:
            func = get_function_at(ref.getFromAddress())
            if func is None or func.getEntryPoint() in seen_funcs:
                continue
            seen_funcs.add(func.getEntryPoint())

            func_entry = "0x%x" % func.getEntryPoint().getOffset()
            func_name = func.getName()
            pseudocode = decompile_function(decomp, func)

            # Get callees to understand what this function dispatches to
            callees_info = []
            for callee in get_callees(func):
                callees_info.append({
                    "name": callee.getName(),
                    "address": "0x%x" % callee.getEntryPoint().getOffset(),
                })

            func_info = {
                "name": func_name,
                "address": func_entry,
                "ref_from": "0x%x" % ref.getFromAddress().getOffset(),
                "pseudocode": pseudocode,
                "callees": callees_info[:20],  # limit
            }
            result["referencing_functions"].append(func_info)

            # Trace callers (one level up)
            if max_depth > 0:
                for caller in get_callers(func):
                    if caller.getEntryPoint() in seen_funcs:
                        continue
                    caller_entry = "0x%x" % caller.getEntryPoint().getOffset()
                    caller_pseudocode = decompile_function(decomp, caller)
                    result["caller_functions"].append({
                        "name": caller.getName(),
                        "address": caller_entry,
                        "calls": func_name,
                        "pseudocode": caller_pseudocode,
                    })

    return result

# ──────────────────────────────────────────────────────────────────
# Special analysis: Feature parser function and __DATA pointers
# ──────────────────────────────────────────────────────────────────

def analyze_feature_parser(decomp):
    """Analyze the known feature parser at VA 0x1001329b0 and the __DATA pointer at offset 0x0145a8e8."""
    result = {
        "feature_parser": None,
        "data_pointer_region": None,
        "parser_consumers": [],
    }

    # Decompile the known feature parser
    addr_factory = currentProgram.getAddressFactory()
    parser_addr = addr_factory.getAddress("0x1001329b0")
    fm = currentProgram.getFunctionManager()
    parser_func = fm.getFunctionAt(parser_addr)
    if parser_func is None:
        parser_func = fm.getFunctionContaining(parser_addr)

    if parser_func:
        pseudocode = decompile_function(decomp, parser_func)
        result["feature_parser"] = {
            "name": parser_func.getName(),
            "address": "0x%x" % parser_func.getEntryPoint().getOffset(),
            "pseudocode": pseudocode,
        }

        # Find all callers of the feature parser
        for caller in get_callers(parser_func):
            caller_pseudocode = decompile_function(decomp, caller)
            result["parser_consumers"].append({
                "name": caller.getName(),
                "address": "0x%x" % caller.getEntryPoint().getOffset(),
                "pseudocode": caller_pseudocode,
            })

    # Analyze the __DATA region around the function pointer
    base_offset = 0x0145a8e8
    ptr_addr = addr_factory.getAddress("0x%x" % (0x100000000 + base_offset))

    # Read surrounding __DATA region (256 bytes around the pointer)
    mem = currentProgram.getMemory()
    region_data = []
    for offset in range(-128, 128, 8):
        check_addr = ptr_addr.add(offset)
        try:
            val = mem.getLong(check_addr)
            # Check if this looks like a code pointer (in __TEXT segment)
            if 0x10000b5e0 <= val <= 0x101148000:
                target_func = fm.getFunctionAt(addr_factory.getAddress("0x%x" % val))
                func_name = target_func.getName() if target_func else "unknown"
                region_data.append({
                    "offset": "0x%x" % (base_offset + offset),
                    "va": "0x%x" % check_addr.getOffset(),
                    "value": "0x%x" % val,
                    "is_code_ptr": True,
                    "target_func": func_name,
                })
            else:
                region_data.append({
                    "offset": "0x%x" % (base_offset + offset),
                    "va": "0x%x" % check_addr.getOffset(),
                    "value": "0x%x" % val,
                    "is_code_ptr": False,
                })
        except:
            pass

    result["data_pointer_region"] = region_data
    return result

# ──────────────────────────────────────────────────────────────────
# Format output as markdown
# ──────────────────────────────────────────────────────────────────

def format_trace_result(trace, section_title=""):
    """Format a single string trace result as markdown."""
    lines = []
    s = trace["string"]
    lines.append("### `%s`" % s)
    lines.append("")
    lines.append("**String addresses:** %s" % ", ".join(trace["string_addresses"]) if trace["string_addresses"] else "**String addresses:** NOT FOUND")
    lines.append("")

    if trace["referencing_functions"]:
        lines.append("**Referencing functions (%d):**" % len(trace["referencing_functions"]))
        lines.append("")
        for func in trace["referencing_functions"]:
            lines.append("#### `%s` @ `%s`" % (func["name"], func["address"]))
            lines.append("")
            lines.append("Referenced from: `%s`" % func["ref_from"])
            lines.append("")
            if func["callees"]:
                lines.append("Calls: %s" % ", ".join(["`%s` @ `%s`" % (c["name"], c["address"]) for c in func["callees"][:10]]))
                lines.append("")
            if func["pseudocode"]:
                # Truncate very long decompilations
                code = func["pseudocode"]
                if len(code) > 8000:
                    code = code[:8000] + "\n// ... truncated ..."
                lines.append("```c")
                lines.append(code)
                lines.append("```")
                lines.append("")
            else:
                lines.append("*Decompilation failed*")
                lines.append("")
    else:
        lines.append("*No referencing functions found*")
        lines.append("")

    if trace["caller_functions"]:
        lines.append("**Caller functions (%d):**" % len(trace["caller_functions"]))
        lines.append("")
        for caller in trace["caller_functions"][:5]:  # limit callers shown
            lines.append("#### Caller: `%s` @ `%s` (calls `%s`)" % (caller["name"], caller["address"], caller["calls"]))
            lines.append("")
            if caller["pseudocode"]:
                code = caller["pseudocode"]
                if len(code) > 5000:
                    code = code[:5000] + "\n// ... truncated ..."
                lines.append("```c")
                lines.append(code)
                lines.append("```")
                lines.append("")

    return "\n".join(lines)

def write_phase_report(phase_name, filename, intro, traces, extra_sections=None):
    """Write a phase report to a markdown file."""
    lines = []
    lines.append("# %s" % phase_name)
    lines.append("")
    lines.append(intro)
    lines.append("")
    lines.append("---")
    lines.append("")

    for trace in traces:
        lines.append(format_trace_result(trace))
        lines.append("---")
        lines.append("")

    if extra_sections:
        for title, content in extra_sections:
            lines.append("## %s" % title)
            lines.append("")
            lines.append(content)
            lines.append("")

    filepath = os.path.join(OUTPUT_DIR, filename)
    with open(filepath, "w") as f:
        f.write("\n".join(lines))
    print("[ghidra_analysis] Wrote %s (%d bytes)" % (filepath, len("\n".join(lines))))

# ──────────────────────────────────────────────────────────────────
# Main
# ──────────────────────────────────────────────────────────────────

def main():
    if not os.path.exists(OUTPUT_DIR):
        os.makedirs(OUTPUT_DIR)

    print("[ghidra_analysis] Starting Menu UI analysis...")
    print("[ghidra_analysis] Output dir: %s" % OUTPUT_DIR)

    decomp = setup_decompiler()

    # ── Phase 2: UI Event Dispatch ──
    print("\n[ghidra_analysis] === PHASE 2: UI Event Dispatch System ===")
    phase2_traces = []
    for s in PHASE2_EVENT_DISPATCH:
        print("[ghidra_analysis] Tracing: %s" % s)
        trace = trace_string_xrefs(s, decomp, max_depth=1)
        phase2_traces.append(trace)

    write_phase_report(
        "UI Event Dispatch System",
        "ui_event_dispatch.md",
        "Analysis of the E.V.I.L. engine's UI event dispatch mechanism, menu panel "
        "infrastructure, and screen navigation system. Generated by Ghidra headless "
        "analysis of GameKindred arm64 binary (v4.13.4).",
        phase2_traces,
    )

    # ── Phase 3: Friends List ──
    print("\n[ghidra_analysis] === PHASE 3: Friends List Data Path ===")
    phase3_traces = []
    for s in PHASE3_FRIENDS:
        print("[ghidra_analysis] Tracing: %s" % s)
        trace = trace_string_xrefs(s, decomp, max_depth=1)
        phase3_traces.append(trace)

    write_phase_report(
        "Friends List Data Path Analysis",
        "friends_list_analysis.md",
        "Complete data path analysis for the friends list: RPC calls, response parsing, "
        "model storage, UI rendering, presence system, and party/invite mechanics.",
        phase3_traces,
    )

    # ── Phase 4: Leaderboard ──
    print("\n[ghidra_analysis] === PHASE 4: Leaderboard Data Path ===")
    phase4_traces = []
    for s in PHASE4_LEADERBOARD:
        print("[ghidra_analysis] Tracing: %s" % s)
        trace = trace_string_xrefs(s, decomp, max_depth=1)
        phase4_traces.append(trace)

    write_phase_report(
        "Leaderboard Data Path Analysis",
        "leaderboard_analysis.md",
        "Complete data path analysis for leaderboards: RPC calls, response parsing, "
        "panel rendering, sort/filter options, and navigation triggers.",
        phase4_traces,
    )

    # ── Phase 5: Feature Flags ──
    print("\n[ghidra_analysis] === PHASE 5: Feature Flag Gating System ===")
    phase5_traces = []
    for s in PHASE5_FEATURES:
        print("[ghidra_analysis] Tracing: %s" % s)
        trace = trace_string_xrefs(s, decomp, max_depth=2)
        phase5_traces.append(trace)

    # Special: analyze the known feature parser function
    print("[ghidra_analysis] Analyzing feature parser at 0x1001329b0...")
    feature_parser_result = analyze_feature_parser(decomp)

    extra_sections = []
    if feature_parser_result["feature_parser"]:
        fp = feature_parser_result["feature_parser"]
        section = "**Function:** `%s` @ `%s`\n\n" % (fp["name"], fp["address"])
        if fp["pseudocode"]:
            section += "```c\n%s\n```\n" % fp["pseudocode"]
        extra_sections.append(("Feature Parser Function (0x1001329b0)", section))

    if feature_parser_result["parser_consumers"]:
        section = ""
        for consumer in feature_parser_result["parser_consumers"]:
            section += "### `%s` @ `%s`\n\n" % (consumer["name"], consumer["address"])
            if consumer["pseudocode"]:
                code = consumer["pseudocode"]
                if len(code) > 5000:
                    code = code[:5000] + "\n// ... truncated ..."
                section += "```c\n%s\n```\n\n" % code
        extra_sections.append(("Feature Parser Consumers", section))

    if feature_parser_result["data_pointer_region"]:
        section = "Memory dump of __DATA region around the feature parser function pointer (0x0145a8e8):\n\n"
        section += "| Offset | VA | Value | Code Ptr? | Target |\n"
        section += "|--------|-----|-------|-----------|--------|\n"
        for entry in feature_parser_result["data_pointer_region"]:
            section += "| %s | %s | %s | %s | %s |\n" % (
                entry["offset"], entry["va"], entry["value"],
                "Yes" if entry["is_code_ptr"] else "No",
                entry.get("target_func", "-"),
            )
        extra_sections.append(("__DATA Function Pointer Region", section))

    write_phase_report(
        "Feature Flag Gating System",
        "feature_gating_analysis.md",
        "Deep analysis of how features are gated in the E.V.I.L. engine: the feature "
        "parser function, flag consumers, visibility gates, experiment flags, and the "
        "__DATA function pointer table.",
        phase5_traces,
        extra_sections,
    )

    # ── Summary stats ──
    total_strings = len(PHASE2_EVENT_DISPATCH) + len(PHASE3_FRIENDS) + len(PHASE4_LEADERBOARD) + len(PHASE5_FEATURES)
    total_found = sum(1 for t in phase2_traces + phase3_traces + phase4_traces + phase5_traces if t["string_addresses"])
    total_funcs = sum(len(t["referencing_functions"]) for t in phase2_traces + phase3_traces + phase4_traces + phase5_traces)

    print("\n[ghidra_analysis] === COMPLETE ===")
    print("[ghidra_analysis] Strings searched: %d" % total_strings)
    print("[ghidra_analysis] Strings found: %d" % total_found)
    print("[ghidra_analysis] Functions decompiled: %d" % total_funcs)
    print("[ghidra_analysis] Reports written to: %s" % OUTPUT_DIR)

main()
