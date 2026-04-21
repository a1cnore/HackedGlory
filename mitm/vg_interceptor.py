"""
vg_interceptor — mitmproxy addon for Vainglory JSON-RPC traffic logging.

Filters VG-related domains, parses JSON-RPC requests/responses, categorizes
methods, extracts high-value fields, and writes structured JSONL logs.

Usage: mitmdump --mode transparent --listen-port 8080 --ssl-insecure -s vg_interceptor.py
"""

from __future__ import annotations

import json
import os
import sys
from datetime import datetime, timezone
from pathlib import Path

import socket

from mitmproxy import http, tls, connection, ctx

from vg_game_proxy import start_match_proxy, stop_match_proxy, _force_key_mode

# Set VG_FORCE_KEY=1 to enable force-key mode on the game proxy
import vg_game_proxy
if os.environ.get("VG_FORCE_KEY") == "1":
    vg_game_proxy._force_key_mode = True
    print("[vg_interceptor] FORCE-KEY mode enabled via VG_FORCE_KEY=1", file=sys.stderr)

# MARK: - Configuration

VG_DOMAIN_PATTERNS = (
    "superevil.net",
    "superevilmegacorp.net",
    "kindred",
    "vainglorygame.com",
    "amplitude.com",
)

# When using /etc/hosts redirect, the game connects to our host IP.
# We need to resolve the real upstream IP from the SNI hostname.
HOST_IP = "192.168.64.1"
_dns_cache: dict[str, str] = {}

# Match tracking state
_current_match_id: str | None = None
_current_match_state: str | None = None
_current_game_host: str | None = None
_current_game_port: int | None = None

LOG_BASE = Path(os.environ.get("VG_LOG_DIR", Path(__file__).parent))
LOG_DIR = LOG_BASE
LOG_FILE = LOG_DIR / "vg_traffic.jsonl"

# MARK: - ANSI colors

C_RESET = "\033[0m"
C_DIM = "\033[2m"
C_BOLD = "\033[1m"
CATEGORY_COLORS = {
    "auth": "\033[36m",       # cyan
    "social": "\033[35m",     # magenta
    "inventory": "\033[33m",  # yellow
    "match": "\033[31m",      # red
    "ranked": "\033[31m",     # red
    "other": "\033[37m",      # white
}

# MARK: - Method categorization (mirrors build_protocol_spec.py)

def categorize(method: str) -> str:
    lower = method.lower()
    if any(k in lower for k in ("account", "guest", "auth", "session", "playerfromplatform", "handle", "devicetoken")):
        return "auth"
    if any(k in lower for k in ("friend", "guild", "party", "team", "presence", "lobby")):
        return "social"
    if any(k in lower for k in ("inventory", "skin", "card", "forge", "quest", "reward", "chest", "talent", "equip", "purchase")):
        return "inventory"
    if any(k in lower for k in ("match", "leaderboard", "liveevent", "season", "ascension", "spectat", "honor", "elo")):
        return "match"
    return "other"

# MARK: - High-value field extractors

def extract_session(data: dict) -> dict:
    out = {}
    for key in ("sessionToken", "playerUUID", "platformUrl", "eloTier3v3", "eloTier5v5", "skillTier"):
        val = data.get(key)
        if val is not None:
            out[key] = val
    pi = data.get("playerInfo")
    if isinstance(pi, dict):
        for key in ("eloTier3v3", "eloTier5v5", "skillTier", "playerUUID", "playerHandle"):
            val = pi.get(key)
            if val is not None:
                out[key] = val
    return out

def extract_player_info(data: dict) -> dict:
    out = {}
    pi = data.get("playerInfo") or data
    for key in ("playerUUID", "playerHandle", "skillTier", "eloTier3v3", "eloTier5v5",
                "rank", "wins_ranked", "wins_casual", "wins_blitz", "wins_aral"):
        val = pi.get(key)
        if val is not None:
            out[key] = val
    return out

def extract_match_results(data: dict) -> dict:
    out = {}
    rv = data.get("returnValue") or data
    for key in ("matchId", "result", "eloEarned", "eloEarnedDelta"):
        val = rv.get(key)
        if val is not None:
            out[key] = val
    return out

def extract_leaderboard(data: dict) -> dict:
    rv = data.get("returnValue", data)
    if isinstance(rv, dict):
        events = rv.get("events")
        if isinstance(events, list):
            total = 0
            for ev in events:
                lb = ev.get("leaderboard") if isinstance(ev, dict) else None
                if isinstance(lb, list):
                    total += len(lb)
            return {"events": len(events), "entries": total}
    return {}

EXTRACTORS = {
    "startSessionForPlayer": extract_session,
    "authenticate": extract_session,
    "createGuestPlayer": extract_session,
    "getPlayerFromPlatform": extract_session,
    "getPlayerInfo": extract_player_info,
    "getPlayerInfos": extract_player_info,
    "notifyGameResults": extract_match_results,
    "recordMatchExperienceMetrics": extract_match_results,
    "getLeaderboardData": extract_leaderboard,
}

# MARK: - Fake data for empty responses

import time as _time
import uuid as _uuid

# Track logged-in player UUID (set during startSessionForPlayer)
_player_uuid: str = "b64d1fb9-8287-4702-bad4-2f77dd941d9a"
_player_handle: str = "vphone"

# ── Party state (synthetic) ──
_party_uuid: str | None = None
_party_members: list[dict] = []


def _make_leader(handle, player_uuid, score, skill_tier=12, level=30, rank=0):
    """Build a leaderboard entry matching the schema parsed by FUN_100516908."""
    return {
        "playerUUID": player_uuid,
        "handle": handle,
        "score": score,
        "rank": rank,
        "skillTier": skill_tier,
        "skillTier5v5": skill_tier,
        "level": level,
        "earnedElos": score,
        "earnedElo5v5": score,
        "earnedElo3v3": int(score * 0.95),
        "earnedEloBlitz": int(score * 0.9),
        "seasonWins": int(score * 3),
        "wins": int(score * 5),
        "rankDelta": 0,
        "guildName": "",
        "guildTag": "",
    }


def _make_friend(handle, player_uuid, availability="online", skill_tier=10,
                  level=30, guild_name="", guild_tag="", guild_id="",
                  seasonal_wins=100, favorite=False):
    """Build a friend entry matching the schema parsed by FUN_1004edef0.

    Key field names derived from RE analysis of the friendListAll response
    parser and cross-referenced with the startSessionForPlayer playerInfo schema.
    """
    return {
        "playerUUID": player_uuid,
        "handle": handle,
        "isDev": False,
        "skillTier": skill_tier,
        "level": level,
        "guildName": guild_name,
        "guildTag": guild_tag,
        "guildId": guild_id,
        "teamName": "",
        "teamTag": "",
        "teamId": "",
        "seasonalWins": seasonal_wins,
        "availability": availability,
        "banTTL": 0,
        "favorite": favorite,
        "ascensionCombinedRank": skill_tier + 3,
        "availabilityElapsed": 0,
    }


FAKE_LEADERS = [
    _make_leader("vphone",      "PLACEHOLDER",  3000, 12, 30, 1),
    _make_leader("FlashX",      str(_uuid.uuid4()), 2950, 12, 30, 2),
    _make_leader("VONC",        str(_uuid.uuid4()), 2920, 12, 30, 3),
    _make_leader("DNZio",       str(_uuid.uuid4()), 2890, 12, 29, 4),
    _make_leader("IraqiZorro",  str(_uuid.uuid4()), 2860, 12, 29, 5),
    _make_leader("Oldskool",    str(_uuid.uuid4()), 2830, 11, 29, 6),
    _make_leader("gabevizzle",  str(_uuid.uuid4()), 2800, 11, 28, 7),
    _make_leader("ttigers",     str(_uuid.uuid4()), 2770, 11, 28, 8),
    _make_leader("MaxGreen",    str(_uuid.uuid4()), 2740, 11, 27, 9),
    _make_leader("Hami",        str(_uuid.uuid4()), 2710, 11, 27, 10),
]

FAKE_FRIENDS = [
    _make_friend("CatherineMain", str(_uuid.uuid4()), "online",  11, 30, "Stormguard", "SG", str(_uuid.uuid4()), 342, True),
    _make_friend("GwenSniper",    str(_uuid.uuid4()), "offline", 10, 28, "Halcyon",    "HC", str(_uuid.uuid4()), 218, False),
    _make_friend("TakaJungle",    str(_uuid.uuid4()), "online",  12, 30, "",           "",   "",                 567, True),
    _make_friend("VoxCarry",      str(_uuid.uuid4()), "online",  10, 27, "Grangor",    "GR", str(_uuid.uuid4()), 431, False),
    _make_friend("CelesteMid",    str(_uuid.uuid4()), "offline", 11, 29, "Halcyon",    "HC", str(_uuid.uuid4()), 612, True),
    _make_friend("ArданSupport",  str(_uuid.uuid4()), "online",   9, 25, "",           "",   "",                 189, False),
    _make_friend("KrulWP",        str(_uuid.uuid4()), "online",  10, 26, "Stormguard", "SG", str(_uuid.uuid4()), 445, True),
    _make_friend("Skaarf",        str(_uuid.uuid4()), "offline",  8, 22, "",           "",   "",                  95, False),
]


def _make_party_member(handle, player_uuid, is_captain=False, team=0, slot=0):
    """Build a party member entry matching the schema parsed by FUN_10050b6a8."""
    return {
        "uuid": player_uuid,
        "handle": handle,
        "isDev": False,
        "isCaptain": is_captain,
        "status": "ready",
        "team": team,
        "slot": slot,
        "qbanLevel": 0,
    }

# MARK: - Helpers

def is_vg_domain(host: str) -> bool:
    return any(pattern in host for pattern in VG_DOMAIN_PATTERNS)

def extract_method_from_url(path: str) -> str | None:
    if "/JSONRpc/" in path:
        return path.rsplit("/JSONRpc/", 1)[-1].split("?")[0]
    return None

def parse_json_body(raw: bytes | None) -> dict | None:
    if not raw:
        return None
    try:
        return json.loads(raw)
    except (json.JSONDecodeError, UnicodeDecodeError):
        return None

def now_iso() -> str:
    return datetime.now(timezone.utc).isoformat(timespec="milliseconds")

# MARK: - Addon

def resolve_real_ip(hostname: str) -> str | None:
    """Resolve a hostname to its real IP, bypassing /etc/hosts on the VM.
    This runs on the host, so it gets the real DNS result."""
    if hostname in _dns_cache:
        return _dns_cache[hostname]
    try:
        ip = socket.getaddrinfo(hostname, 443, socket.AF_INET)[0][4][0]
        _dns_cache[hostname] = ip
        print(f"[vg_interceptor] resolved {hostname} -> {ip}", file=sys.stderr)
        return ip
    except socket.gaierror:
        print(f"[vg_interceptor] DNS failed for {hostname}", file=sys.stderr)
        return None


class VGInterceptor:
    def __init__(self):
        self._log_handle = open(LOG_FILE, "a", buffering=1)
        self._count = 0
        print(f"[vg_interceptor] logging to {LOG_FILE}", file=sys.stderr)

    def requestheaders(self, flow: http.HTTPFlow) -> None:
        """Fix upstream address when game connects to our host via /etc/hosts."""
        server = flow.server_conn
        if server and server.address:
            dest_ip = server.address[0]
            dest_port = server.address[1]
            # If the game connected to our host IP, resolve real upstream
            if dest_ip == HOST_IP:
                hostname = flow.request.host
                real_ip = resolve_real_ip(hostname)
                if real_ip:
                    flow.server_conn.address = (real_ip, dest_port)
                    print(f"[vg_interceptor] reroute {hostname}: {HOST_IP} -> {real_ip}:{dest_port}", file=sys.stderr)

    def _write_log(self, entry: dict) -> None:
        line = json.dumps(entry, ensure_ascii=False, default=str)
        self._log_handle.write(line + "\n")

    def _print_summary(self, method: str, category: str, status: int, extracted: dict) -> None:
        color = CATEGORY_COLORS.get(category, CATEGORY_COLORS["other"])
        self._count += 1

        extras = ""
        if extracted:
            parts = [f"{k}={v}" for k, v in list(extracted.items())[:4]]
            extras = f" {C_DIM}{', '.join(parts)}{C_RESET}"

        status_color = "\033[32m" if 200 <= status < 300 else "\033[31m"
        print(
            f"{C_DIM}{self._count:>4}{C_RESET} "
            f"{color}{C_BOLD}{category:<10}{C_RESET} "
            f"{method:<40} "
            f"{status_color}{status}{C_RESET}"
            f"{extras}",
            file=sys.stderr,
        )

    def response(self, flow: http.HTTPFlow) -> None:
        host = flow.request.pretty_host
        if not is_vg_domain(host):
            return

        url = flow.request.pretty_url
        path = flow.request.path
        status = flow.response.status_code if flow.response else 0

        # Extract method
        method = extract_method_from_url(path)
        req_body = parse_json_body(flow.request.get_content())
        if not method and isinstance(req_body, dict):
            method = req_body.get("method")
        if not method:
            method = path

        category = categorize(method)

        # Parse response
        res_body = parse_json_body(flow.response.get_content() if flow.response else None)

        # MARK: - Response modification
        if isinstance(res_body, dict):
            modified = self._modify_response(method, res_body, req_body)
            # Track match lifecycle and rewrite game server host
            modified |= self._track_match(method, res_body)
            if modified:
                flow.response.set_content(json.dumps(res_body).encode("utf-8"))
                print(f"\033[33m[MODIFIED]\033[0m {method}", file=sys.stderr)

        # Run extractor
        extracted = {}
        extractor = EXTRACTORS.get(method)
        if extractor and isinstance(res_body, dict):
            extracted = extractor(res_body)

        entry = {
            "ts": now_iso(),
            "method": method,
            "category": category,
            "url": url,
            "host": host,
            "status": status,
            "req": req_body,
            "res": res_body,
            "extracted": extracted or None,
        }

        self._write_log(entry)
        self._print_summary(method, category, status, extracted)

    def _modify_response(self, method: str, res: dict, req_body: dict | None = None) -> bool:
        """Modify response data in-place. Returns True if modified."""
        # Patches to apply to playerInfo wherever it appears
        PLAYER_PATCHES = {
            "level": 30,
            "handle": "vphone",
            "skillTier": 29,
            "skillTier5v5": 29,
            "seasonMaxSkillTier": 29,
            "skillTierProgress": 0.95,
            "elo_earned": 3000.0,
            "elo_earned_5v5": 3000.0,
            "elo_earned_blitz": 3000.0,
            "karmaLevel": 5,
            "karmaSilverBonus": 50.0,
            "wins": 20000,
            "wins_ranked": 20000,
            "wins_casual": 20000,
            "wins_blitz": 20000,
            "wins_aral": 20000,
            "winStreak": 42,
            "lossStreak": 0,
            "completed": 40000,
            "completed_non_tutorial": 40000,
            "isDev": True,
            "isOrganizer": True,
            "vgSupporterEndTime": 4102444800,  # 2100-01-01
        }

        CURRENCY_PATCHES = {
            "gold": 99999,
            "essence": 99999,
            "opal": 99999,
            "silver": 99999,
            "epic_key": 99,
            "seasonal_key": 99,
        }

        def patch_player_info(obj: dict) -> bool:
            changed = False
            for key, val in PLAYER_PATCHES.items():
                if key in obj and obj[key] != val:
                    old = obj[key]
                    obj[key] = val
                    print(f"\033[33m[PATCH]\033[0m {key}: {old} -> {val}", file=sys.stderr)
                    changed = True
            # Patch currency dict
            cur = obj.get("currency")
            if isinstance(cur, dict):
                for key, val in CURRENCY_PATCHES.items():
                    if key in cur and cur[key] != val:
                        old = cur[key]
                        cur[key] = val
                        print(f"\033[33m[PATCH]\033[0m currency.{key}: {old} -> {val}", file=sys.stderr)
                        changed = True
            # Patch skillProgressionInfo — fill in all ranked data so the profile
            # tabs actually render. The client parser FUN_10051cde8 reads each mode.
            SKILL_PROG_PATCH = {
                "skillTier": 29,
                "seasonMaxSkillTier": 29,
                "eloEarned": 3000.0,
                "eloEarnedDecay": 0.0,
                "eloEarnedDecayStart": 0,
                "eloBucket": 29,
                "skillTierProgress": 0.95,
                "skillTierSilverLine": 0.8333,
                "skillTierGoldLine": 0.9166,
                "skillTierBronzeLine": 0.0,
            }
            spi = obj.get("skillProgressionInfo")
            if isinstance(spi, dict):
                # Ensure all three ranked modes exist (only if spi already present)
                for mode in ("ranked", "5v5_pvp_ranked", "blitz_pvp_ranked"):
                    if mode not in spi:
                        spi[mode] = dict(SKILL_PROG_PATCH)
                        changed = True
                for mode, data in spi.items():
                    if isinstance(data, dict):
                        for key, target in SKILL_PROG_PATCH.items():
                            if key in data and data[key] != target:
                                data[key] = target
                                changed = True
                            elif key not in data:
                                data[key] = target
                                changed = True
                if changed:
                    print(f"\033[33m[PATCH]\033[0m skillProgressionInfo: all modes patched to Vainglorious", file=sys.stderr)
            # Patch trophyCase — set all trophies to Vainglorious (12)
            # The trophy renderer FUN_100265bd4 checks a flag at +0x18f21 which is
            # set to true when any trophy value > 0. Patching -1 → 12 ensures this.
            trophies = obj.get("trophyCase")
            if isinstance(trophies, list):
                patched_count = 0
                for trophy in trophies:
                    if isinstance(trophy, dict) and trophy.get("value", 0) != 12:
                        trophy["value"] = 12
                        patched_count += 1
                # Ensure all 19 seasons × 2 trophy types are present
                existing = {(t.get("season"), t.get("trophy_name"))
                            for t in trophies if isinstance(t, dict)}
                for season in range(0, 19):
                    for name in ("individual_skill_tier", "individual_5v5_skill_tier"):
                        if (season, name) not in existing:
                            trophies.append({
                                "season": season,
                                "value_type": "skill_tier",
                                "trophy_type": "individual",
                                "value": 29,
                                "trophy_name": name,
                            })
                            patched_count += 1
                if patched_count:
                    print(f"\033[33m[PATCH]\033[0m trophyCase: {patched_count} trophies patched/added ({len(trophies)} total)", file=sys.stderr)
                    changed = True
            return changed

        def patch_features(rv: dict) -> bool:
            """Patch constants.featuresEnabled and experimentDetails to re-enable disabled features."""
            changed = False

            # Patch constants.featuresEnabled
            constants = rv.get("constants")
            if isinstance(constants, dict):
                features = constants.get("featuresEnabled")
                if isinstance(features, dict):
                    for flag in ("inGameChat", "leaderboards", "liveEvents"):
                        if flag in features and not features[flag]:
                            features[flag] = True
                            print(f"\033[35m[FEATURE]\033[0m featuresEnabled.{flag}: false -> true", file=sys.stderr)
                            changed = True
                    # Also enable leaderboards full friends list
                    if "leaderboardsAlwaysQueryOfflineFriends" in features:
                        features["leaderboardsAlwaysQueryOfflineFriends"] = True
                        changed = True

            # Patch experimentDetails — activate key disabled experiments
            # These experiment IDs gate menu panel visibility (from RE analysis)
            FORCE_ACTIVE = {
                "experiment_free_tab_visibility",
                "experiment_friend_auto_favorite_1",
                "enable_feature_leaderboards",
                "enable_feature_liveEvents",
                "enable_feature_leaderboards_full_friends_list",
                "inGameChat_featureFlag",
            }
            experiments = rv.get("experimentDetails")
            if isinstance(experiments, list):
                for exp in experiments:
                    eid = exp.get("experimentId", "")
                    if eid in FORCE_ACTIVE and not exp.get("isActive"):
                        exp["isActive"] = True
                        print(f"\033[35m[FEATURE]\033[0m experiment {eid}: activated", file=sys.stderr)
                        changed = True

            # Enable state updates (WebSocket notify channel)
            if "enableStateUpdates" in rv:
                rv["enableStateUpdates"] = True
                rv["missedStateUpdateMessagesThreshold"] = 5
                # Rewrite notifyUrl to point to our push server
                if "notifyUrl" in rv:
                    old_url = rv["notifyUrl"]
                    # Extract playerUUID path from ws://host:port/ws/<uuid>
                    ws_path = old_url.rsplit("/", 1)[-1] if "/" in old_url else _player_uuid
                    rv["notifyUrl"] = f"ws://{HOST_IP}:2112/ws/{ws_path}"
                    rv["notifyFallbackUrl"] = f"http://{HOST_IP}:2112/lp/{ws_path}"
                    print(f"\033[35m[FEATURE]\033[0m notifyUrl: {old_url} -> {rv['notifyUrl']}", file=sys.stderr)
                print(f"\033[35m[FEATURE]\033[0m enableStateUpdates: true", file=sys.stderr)
                changed = True

            # Patch seasonalData — season ended 2020-04-09, extend to future
            # so the client doesn't think ranked is expired.
            # Parser reads endSeasonEpoch and seasonIndex from constants.seasonalData.
            if isinstance(constants, dict):
                sd = constants.get("seasonalData")
                if isinstance(sd, dict):
                    now = int(_time.time())
                    if sd.get("endSeasonEpoch", 0) < now:
                        sd["endSeasonEpoch"] = now + 86400 * 365  # 1 year from now
                        print(f"\033[35m[FEATURE]\033[0m seasonalData.endSeasonEpoch: extended to {sd['endSeasonEpoch']}", file=sys.stderr)
                        changed = True
                    if sd.get("seasonIndex", 0) != 18:
                        sd["seasonIndex"] = 18
                        changed = True

            return changed

        modified = False

        # Patch returnValue.playerInfo (startSessionForPlayer, getPlayerInfo)
        rv = res.get("returnValue", res)
        if isinstance(rv, dict):
            pi = rv.get("playerInfo")
            if isinstance(pi, dict):
                modified |= patch_player_info(pi)
            modified |= patch_player_info(rv)
            # Patch handle at returnValue level too (startSessionForPlayer has it here)
            if "handle" in rv and rv["handle"] != "vphone":
                print(f"\033[33m[PATCH]\033[0m handle: {rv['handle']} -> vphone", file=sys.stderr)
                rv["handle"] = "vphone"
                modified = True
            # Patch feature flags (only in startSessionForPlayer response)
            modified |= patch_features(rv)

        # Also check top-level playerInfo
        pi = res.get("playerInfo")
        if isinstance(pi, dict):
            modified |= patch_player_info(pi)

        # MARK: - Inject data for empty responses (engine hides panels with no data)

        modified |= self._inject_social_data(method, res)

        return modified

    def _inject_social_data(self, method: str, res: dict) -> bool:
        """Inject fake friends/leaderboard/live-event data into empty responses.

        The E.V.I.L. engine hides UI panels when the server returns empty data.
        By injecting synthetic entries, we force the panels to render.
        """
        global _player_uuid
        modified = False

        # ── Track player UUID/handle from session bootstrap ──
        if method == "startSessionForPlayer":
            rv = res.get("returnValue", res)
            if isinstance(rv, dict):
                uuid = rv.get("playerUUID")
                if uuid:
                    _player_uuid = uuid
                handle = rv.get("handle")
                if handle:
                    _player_handle = handle

        # ── Leaderboard injection ──
        # Server returns {"returnValue": {}} when feature is disabled server-side.
        # Parser FUN_100516908 reads returnValue.events[] as an array of event objects.
        # Each event has: id, type, name, startDate, endDate, clientRepresentation[].
        # Each clientRepresentation entry has a "type" field compared to "leaderboardPanel"
        # or "leaderboardsPopup" at the string addresses in __TEXT.__cstring.
        # The actual ranked player data is in the event's data fields.
        if method == "getLeaderboardData":
            rv = res.get("returnValue")
            if not rv or not isinstance(rv, dict) or not rv.get("events"):
                now = int(_time.time())
                leaders = [dict(e) for e in FAKE_LEADERS]
                for e in leaders:
                    if e["playerUUID"] == "PLACEHOLDER":
                        e["playerUUID"] = _player_uuid
                res["returnValue"] = {
                    "events": [
                        {
                            "id": "leaderboard_ranked_season",
                            "type": "leaderboard",
                            "name": "Ranked Season",
                            "startDate": now - 86400 * 30,
                            "endDate": now + 86400 * 30,
                            "leaderboard": leaders,
                            "lastUpdated": now,
                            "currentSeason": 99,
                            "clientRepresentation": [
                                {
                                    "type": "leaderboardPanel",
                                    "target": "leaderboard_ranked_season",
                                    "leaderboardId": "leaderboard_ranked_season",
                                    "leaderboardTitle": "Ranked",
                                },
                                {
                                    "type": "leaderboardsPopup",
                                    "target": "leaderboard_ranked_season",
                                    "leaderboardId": "leaderboard_ranked_season",
                                    "leaderboardTitle": "Ranked",
                                },
                            ],
                            "eventLeaderboardProgress": {
                                "leaderboard": leaders,
                            },
                        },
                    ],
                }
                print(f"\033[35m[INJECT]\033[0m getLeaderboardData: {len(leaders)} entries in 1 event", file=sys.stderr)
                modified = True

        # ── Friends list injection ──
        # Server returns {"returnValue": {"confirmed": [], "pending": [], "numOffline": 0}}
        # Parser FUN_1004edef0 reads confirmed/pending arrays and builds the roster.
        # FUN_100266a50 shows "SAD_AND_EMPTY" message when confirmed is empty.
        if method == "friendListAll":
            rv = res.get("returnValue")
            if not isinstance(rv, dict):
                res["returnValue"] = rv = {}
            confirmed = rv.get("confirmed")
            if not confirmed or not isinstance(confirmed, list) or len(confirmed) == 0:
                rv["confirmed"] = list(FAKE_FRIENDS)
                rv["pending"] = rv.get("pending", [])
                rv["numFriends"] = len(FAKE_FRIENDS)
                online = sum(1 for f in FAKE_FRIENDS if f["availability"] != "offline")
                rv["numOffline"] = len(FAKE_FRIENDS) - online
                print(f"\033[35m[INJECT]\033[0m friendListAll: {len(FAKE_FRIENDS)} friends ({online} online)", file=sys.stderr)
                modified = True

        # ── Trophy case injection ──
        # The getTrophyCase RPC (case 0x13 in the dispatcher FUN_100503314)
        # populates the trophy arrays and sets the +0x18f21 flag via FUN_1002656cc.
        # The client may or may not call this RPC. If it does, inject data.
        # Response schema from RE: returnValue.success=true, returnValue.trophyCase=[entries],
        # plus teamUUID/name/tag/numMembers for guild trophies.
        if method == "getTrophyCase":
            rv = res.get("returnValue")
            if not isinstance(rv, dict) or not rv.get("trophyCase"):
                trophies = []
                for season in range(0, 19):
                    trophies.append({
                        "season": season,
                        "value_type": "skill_tier",
                        "trophy_type": "individual",
                        "value": 29,  # Vainglorious Gold (0-29 scale: tier = val/3+1, sub = val%3)
                        "trophy_name": "individual_skill_tier",
                    })
                    trophies.append({
                        "season": season,
                        "value_type": "skill_tier",
                        "trophy_type": "individual",
                        "value": 29,
                        "trophy_name": "individual_5v5_skill_tier",
                    })
                if not isinstance(rv, dict):
                    res["returnValue"] = rv = {}
                rv["success"] = True
                rv["trophyCase"] = trophies
                rv["teamUUID"] = ""
                rv["name"] = ""
                rv["tag"] = ""
                rv["numMembers"] = 0
                rv["maxMembers"] = 50
                print(f"\033[35m[INJECT]\033[0m getTrophyCase: {len(trophies)} trophies (all Vainglorious)", file=sys.stderr)
                modified = True

        # ── Season rewards manifest injection ──
        if method == "getSeasonRewardsManifest":
            rv = res.get("returnValue")
            if not isinstance(rv, dict) or not rv.get("seasonRewards"):
                season_rewards = []
                for season in range(0, 19):
                    season_rewards.append({
                        "season": season,
                        "rewards": [
                            {"type": "skin", "name": f"season_{season}_reward_skin", "tier": min(season % 4 + 1, 4)},
                            {"type": "badge", "name": f"season_{season}_badge", "tier": 12},
                        ],
                    })
                if not isinstance(rv, dict):
                    res["returnValue"] = rv = {}
                rv["success"] = True
                rv["seasonRewards"] = season_rewards
                rv["currentSeason"] = 18
                print(f"\033[35m[INJECT]\033[0m getSeasonRewardsManifest: {len(season_rewards)} seasons", file=sys.stderr)
                modified = True

        # ── Ascension display data injection ──
        if method == "getAscensionDisplayData":
            rv = res.get("returnValue")
            if not isinstance(rv, dict) or not rv.get("ascensionData"):
                if not isinstance(rv, dict):
                    res["returnValue"] = rv = {}
                rv["success"] = True
                rv["ascensionData"] = {
                    "currentRank": 50,
                    "maxRank": 50,
                    "currentXP": 99999,
                    "rankUpXP": 100000,
                    "seasonIndex": 18,
                    "combinedRank": 15,
                    "rewards": [],
                }
                print(f"\033[35m[INJECT]\033[0m getAscensionDisplayData: rank 50", file=sys.stderr)
                modified = True

        # ── Live events injection ──
        if method == "getLiveEventData":
            rv = res.get("returnValue")
            if not rv or not isinstance(rv, dict) or not rv.get("events"):
                now = int(_time.time())
                res["returnValue"] = {
                    "events": [{
                        "eventType": "generic",
                        "panelTitle": "Community Cup",
                        "startDate": now - 86400,
                        "endDate": now + 86400 * 6,
                        "eventProgressBars": [],
                        "eventLeaderboardProgress": {},
                    }]
                }
                print(f"\033[35m[INJECT]\033[0m getLiveEventData: 1 event", file=sys.stderr)
                modified = True

        # ── Party system ──
        # Schema from FUN_10050b6a8: returnValue.{success, partyUUID, partyQueueMode,
        #   partyQueueDifficulty, members[{uuid, handle, isDev, isCaptain, status, team, slot, qbanLevel}]}
        modified |= self._handle_party(method, res)

        # ── Dead endpoint catch-all ──
        # For any RPC the server returns empty/error, give a valid response
        # so the client parser doesn't choke.
        modified |= self._handle_dead_endpoint(method, res, req_body)

        return modified

    def _handle_party(self, method: str, res: dict) -> bool:
        """Handle party system RPCs with synthetic responses."""
        global _party_uuid, _party_members

        if method == "createParty":
            _party_uuid = str(_uuid.uuid4())
            _party_members = [_make_party_member(_player_handle, _player_uuid, is_captain=True)]
            res["returnValue"] = {
                "success": True,
                "partyUUID": _party_uuid,
                "partyQueueMode": "casual_5v5",
                "partyQueueDifficulty": 0,
                "members": list(_party_members),
            }
            res["code"] = 0
            print(f"\033[35m[PARTY]\033[0m createParty: {_party_uuid[:8]}", file=sys.stderr)
            return True

        if method == "createQuintParty":
            _party_uuid = str(_uuid.uuid4())
            _party_members = [_make_party_member(_player_handle, _player_uuid, is_captain=True)]
            res["returnValue"] = {
                "success": True,
                "partyUUID": _party_uuid,
                "partyQueueMode": "casual_5v5",
                "partyQueueDifficulty": 0,
                "members": list(_party_members),
            }
            res["code"] = 0
            print(f"\033[35m[PARTY]\033[0m createQuintParty: {_party_uuid[:8]}", file=sys.stderr)
            return True

        if method in ("partyMembers", "queryPartyInfo", "queryPartyInvites"):
            res["returnValue"] = {
                "success": True,
                "partyUUID": _party_uuid or "",
                "partyQueueMode": "casual_5v5",
                "partyQueueDifficulty": 0,
                "members": list(_party_members),
            }
            res["code"] = 0
            print(f"\033[35m[PARTY]\033[0m {method}: {len(_party_members)} members", file=sys.stderr)
            return True

        if method == "partyInviteSend":
            # Pretend it worked — add a fake member to the party
            fake_member = _make_party_member(
                "TakaJungle", str(_uuid.uuid4()), is_captain=False, team=0, slot=len(_party_members))
            _party_members.append(fake_member)
            res["returnValue"] = {
                "success": True,
                "partyUUID": _party_uuid or "",
                "partyQueueMode": "casual_5v5",
                "partyQueueDifficulty": 0,
                "members": list(_party_members),
            }
            res["code"] = 0
            print(f"\033[35m[PARTY]\033[0m partyInviteSend: now {len(_party_members)} members", file=sys.stderr)
            return True

        if method in ("partyInviteConfirm", "partyInviteReject", "partyMemberKick",
                       "partyMemberMove", "partyChangeQueueMode", "partyBalanceTeams"):
            res["returnValue"] = {
                "success": True,
                "partyUUID": _party_uuid or "",
                "partyQueueMode": "casual_5v5",
                "partyQueueDifficulty": 0,
                "members": list(_party_members),
            }
            res["code"] = 0
            print(f"\033[35m[PARTY]\033[0m {method}: ok", file=sys.stderr)
            return True

        if method in ("leaveParty", "destroyQuintParty", "leaveQuintParty"):
            _party_uuid = None
            _party_members = []
            res["returnValue"] = True
            res["code"] = 0
            print(f"\033[35m[PARTY]\033[0m {method}: party dissolved", file=sys.stderr)
            return True

        if method in ("joinQuintParty", "updateQuintPartyState"):
            res["returnValue"] = {
                "success": True,
                "partyUUID": _party_uuid or str(_uuid.uuid4()),
                "partyQueueMode": "casual_5v5",
                "partyQueueDifficulty": 0,
                "members": list(_party_members) if _party_members else [
                    _make_party_member(_player_handle, _player_uuid, is_captain=True)
                ],
            }
            res["code"] = 0
            print(f"\033[35m[PARTY]\033[0m {method}: ok", file=sys.stderr)
            return True

        if method in ("partyLobbyEnter", "partyLobbyExit"):
            res["returnValue"] = True
            res["code"] = 0
            print(f"\033[35m[PARTY]\033[0m {method}: ok", file=sys.stderr)
            return True

        return False

    def _handle_dead_endpoint(self, method: str, res: dict, req_body: dict | None = None) -> bool:
        """Catch-all: return valid responses for dead endpoints the client may call.

        Response types from RE analysis (GhidraRpcSchemaExtractor):
        - basicResult:      {code, returnValue, success, reason}
        - playerInfoUpdate: {returnValue: {handle, skillTier, ...}} (72 fields)
        - simpleCallback:   minimal ack
        - sessionBootstrap: full session data
        """
        rv = res.get("returnValue")
        code = res.get("code")

        # Skip if the server already gave a real response
        if code is not None and code == 0 and rv is not None:
            return False
        # Skip methods we already handle above
        if method in ("friendListAll", "getLeaderboardData", "getLiveEventData",
                       "getTrophyCase", "getSeasonRewardsManifest",
                       "getAscensionDisplayData", "startSessionForPlayer",
                       "createGuestPlayer", "getPlayerForGuestAccount",
                       "getPlayerFromPlatform", "authenticate",
                       "createParty", "createQuintParty", "partyMembers",
                       "partyInviteSend", "partyInviteConfirm", "partyInviteReject",
                       "partyMemberKick", "partyMemberMove", "partyChangeQueueMode",
                       "partyBalanceTeams", "leaveParty", "destroyQuintParty",
                       "leaveQuintParty", "joinQuintParty", "updateQuintPartyState",
                       "partyLobbyEnter", "partyLobbyExit", "queryPartyInfo",
                       "queryPartyInvites"):
            return False

        # ── notifyGameResults: client sends match results to server post-match ──
        # Response type: playerInfoUpdate. The client sends this after the spoils
        # screen, but in CE mode the spoils screen is skipped so this is never sent.
        # If/when we re-enable the spoils screen, this will fire. Log the request
        # and return a full playerInfoUpdate so the client can process rewards.
        if method == "notifyGameResults":
            # Log the FULL request for analysis — this is where match result data lives
            print(f"\033[33;1m[MATCH-RESULTS]\033[0m notifyGameResults RECEIVED!", file=sys.stderr)
            if req_body:
                import json as _json
                print(f"\033[33;1m[MATCH-RESULTS]\033[0m request body: {_json.dumps(req_body, indent=2)[:2000]}", file=sys.stderr)
            res["code"] = 0
            res["returnValue"] = {
                "handle": _player_handle,
                "playerUUID": _player_uuid,
                "skillTier": 29,
                "level": 30,
                "completed": 40001,
                "completed_non_tutorial": 40001,
                "wins": 20001,
                "wins_ranked": 5000,
                "wins_casual": 10000,
                "wins_blitz": 3000,
                "wins_aral": 2001,
                "winStreak": 3,
                "winsToday": 1,
                "wins_season": 150,
                "xp": 7500,
                "levelMinXP": 5000,
                "levelMaxXP": 10000,
                "currency": {
                    "gold": 100200, "essence": 99999, "opal": 99999,
                    "silver": 99999, "epic_key": 99, "seasonal_key": 99,
                },
                "karma": 160.0,
                "karmaLevel": 2,
                "karmaProgress": 0.85,
                "karmaSilverBonus": 0.05,
                "isDev": False,
                "canUseAllHeroes": True,
                "skillProgressionInfo": {
                    "ranked": {
                        "skillTier": 29, "seasonMaxSkillTier": 29,
                        "eloEarned": 3020.0, "seasonEloEarned": 3020.0,
                        "eloEarnedDelta": 20.0,
                        "skillTierProgress": 0.96, "skillTierBronzeLine": 0.0,
                        "skillTierSilverLine": 0.8333, "skillTierGoldLine": 0.9166,
                    },
                    "5v5_pvp_ranked": {
                        "skillTier": 29, "seasonMaxSkillTier": 29,
                        "eloEarned": 3020.0, "seasonEloEarned": 3020.0,
                        "eloEarnedDelta": 20.0,
                        "skillTierProgress": 0.96, "skillTierBronzeLine": 0.0,
                        "skillTierSilverLine": 0.8333, "skillTierGoldLine": 0.9166,
                    },
                    "blitz_pvp_ranked": {
                        "skillTier": 29, "seasonMaxSkillTier": 29,
                        "eloEarned": 3020.0, "seasonEloEarned": 3020.0,
                        "eloEarnedDelta": 20.0,
                        "skillTierProgress": 0.96, "skillTierBronzeLine": 0.0,
                        "skillTierSilverLine": 0.8333, "skillTierGoldLine": 0.9166,
                    },
                },
                "trophyCase": [
                    {"season": s, "trophy_type": t, "value": 29, "trophy_name": "Vainglorious"}
                    for s in range(19)
                    for t in ("individual_skill_tier", "individual_5v5_skill_tier")
                ],
                "tutorialState": "complete",
                "guildUUID": "",
                "teamUUID": "",
            }
            print(f"\033[33;1m[MATCH-RESULTS]\033[0m returned playerInfoUpdate with match rewards", file=sys.stderr)
            return True

        # ── notifyExitPostMatch: log request for analysis ──
        if method == "notifyExitPostMatch":
            print(f"\033[36m[MATCH]\033[0m notifyExitPostMatch called", file=sys.stderr)
            if req_body:
                import json as _json
                keys = list(req_body.keys()) if isinstance(req_body, dict) else []
                print(f"\033[36m[MATCH]\033[0m   request keys: {keys}", file=sys.stderr)

        # ── updateMatchInfo + recordMatchExperienceMetrics: log and return playerInfoUpdate ──
        if method in ("updateMatchInfo", "recordMatchExperienceMetrics"):
            print(f"\033[33;1m[MATCH-INFO]\033[0m {method} RECEIVED!", file=sys.stderr)
            if req_body:
                import json as _json
                print(f"\033[33;1m[MATCH-INFO]\033[0m request body: {_json.dumps(req_body, indent=2)[:2000]}", file=sys.stderr)
            if rv is None or (isinstance(rv, dict) and not rv):
                res["code"] = 0
                res["returnValue"] = {
                    "handle": _player_handle,
                    "playerUUID": _player_uuid,
                    "skillTier": 29,
                    "level": 30,
                    "wins": 20001,
                    "completed": 40001,
                    "currency": {"gold": 100200, "essence": 99999, "opal": 99999,
                                 "silver": 99999, "epic_key": 99, "seasonal_key": 99},
                }
                return True

        # Methods that expect basicResult: {code: 0, returnValue: true, success: true, reason: ""}
        BASIC_RESULT_METHODS = {
            "endSession", "joinLobby", "exitLobby", "acceptMatch", "rejectMatch",
            "notifyExitPostMatch", "queryPendingMatch", "updatePlatformPlayerConfig",
            "presenceBroadcast", "presenceSetReceiveBroadcast",
            "setPresenceInvisibility", "spectateFriend", "askInGameFriendToPlay",
            "leaveTeam", "teamInviteConfirm", "teamInviteReject",
            "teamInviteSend", "teamMemberKick", "queryTeamInvites",
            "storeRequestPurchaseSKU", "storePrepareIAP", "storeProcessIAP",
            "storeRecordPendingGift", "storeCancelPendingGift",
            "dismissReliableMessage", "processMessage",
            "queryPlayerInboxMessages",
            "addDeviceToken", "setPlayerHandle", "setTutorialState",
            "report", "reportHonorPlayer",
            "notifyPlayerAction",
            "createAccountForPlayer", "askRegistrationConsent",
        }

        # Methods that expect simpleCallback (fire-and-forget)
        SIMPLE_CALLBACK_METHODS = {
            "friendDelete", "friendAddFavorite", "friendDeleteFavorite",
            "friendReplyFromInGame", "friendsListUpdate",
            "friendNotify", "friendRequestConfirm", "friendRequestReject",
            "friendRequestIssueByHandle",
            "equippedEmoji", "equippedHat", "equippedPingPack",
        }

        # Methods that return playerInfoUpdate (inventory mutations etc.)
        PLAYER_INFO_METHODS = {
            "forgeCard", "forgeEssence", "weaveHeroSkin",
            "equipToSlot", "openRewardChest", "openInventoryChest",
            "purchaseCardPack", "purchaseDailyPick",
            "collectProgressiveChest", "collectHeroChest",
            "redeemQuestForPlayer", "skipQuestForPlayer",
            "attemptRedeemAscensionChest", "attemptRedeemAscensionRankUpChest",
            "attemptRedeemAscensionSeasonEndChest", "attemptRedeemSeasonalAscensionChest",
            "buyAscensionSeasonalBundle",
            "spectatorExitMatch",
            "verifyGovernmentId", "isGovernmentIdVerified",
            "getBuffManifest", "getForgeManifest",
            "getRewardsManifest", "getRewardChestDefinitions",
            "getProgressiveChestDescriptions",
            "getQuestDisplayDataForPlayer", "getQuestDisplayDataForPlayerAndType",
            "getCardBoxManifest", "refreshCardBoxManifest",
            "getPlayerCardInventory", "getSkinManifest",
            "setTutorialState", "getHeroMastery",
            "getDailyPicker", "getInventoryGroups", "getPlayerSkinProgress",
            "getTalentsData",
        }

        if method in BASIC_RESULT_METHODS:
            if rv is None or (isinstance(rv, dict) and not rv):
                res["code"] = 0
                res["returnValue"] = True
                res["success"] = True
                res["reason"] = ""
                print(f"\033[90m[DEAD]\033[0m {method}: basicResult", file=sys.stderr)
                return True

        if method in SIMPLE_CALLBACK_METHODS:
            if rv is None or (isinstance(rv, dict) and not rv):
                res["code"] = 0
                res["returnValue"] = True
                print(f"\033[90m[DEAD]\033[0m {method}: simpleCallback", file=sys.stderr)
                return True

        if method in PLAYER_INFO_METHODS:
            if rv is None or (isinstance(rv, dict) and not rv):
                res["code"] = 0
                res["returnValue"] = {
                    "handle": _player_handle,
                    "playerUUID": _player_uuid,
                    "skillTier": 29,
                    "level": 30,
                    "wins": 20000,
                    "completed": 40000,
                    "currency": {"gold": 99999, "essence": 99999, "opal": 99999,
                                 "silver": 99999, "epic_key": 99, "seasonal_key": 99},
                }
                print(f"\033[90m[DEAD]\033[0m {method}: playerInfoUpdate", file=sys.stderr)
                return True

        return False

    def _track_match(self, method: str, res: dict) -> bool:
        """Track match lifecycle and rewrite game server host for interception."""
        global _current_match_id, _current_match_state, _current_game_host, _current_game_port
        modified = False

        rv = res.get("returnValue", res)
        if not isinstance(rv, dict):
            return False

        state = rv.get("state")
        if not state:
            return False

        # Detect state transitions
        if state != _current_match_state:
            prev = _current_match_state
            _current_match_state = state
            print(f"\033[36m[MATCH]\033[0m state: {prev} -> {state}", file=sys.stderr)

        # When match starts playing, capture game server info and start proxy
        match_id = rv.get("matchId")
        game_host = rv.get("host")
        game_port = rv.get("port")

        if state == "playing" and game_host and game_port and match_id:
            if match_id != _current_match_id:
                # New match — start game proxy
                _current_match_id = match_id
                _current_game_host = game_host
                _current_game_port = game_port

                # Log the FULL original update response for key analysis
                # The encryption key might be in a field we're not tracking
                print(f"\033[36m[MATCH]\033[0m NEW match {match_id[:8]} at {game_host}:{game_port}", file=sys.stderr)
                print(f"\033[36m[MATCH]\033[0m Full update RV keys: {sorted(rv.keys())}", file=sys.stderr)
                for k in sorted(rv.keys()):
                    v = rv[k]
                    if k not in ("host", "port", "matchId", "state", "prevState", "ttl",
                                 "numPlayers", "numQueuedEntries", "notify", "version",
                                 "lastVersion", "expiry", "timestamp", "site"):
                        print(f"\033[36m[MATCH]\033[0m   EXTRA FIELD rv.{k} = {str(v)[:200]}", file=sys.stderr)
                try:
                    start_match_proxy(match_id, game_host, game_port, game_port)
                except Exception as e:
                    print(f"\033[31m[MATCH]\033[0m proxy start failed: {e}", file=sys.stderr)

                # Match RPC data is saved by vg_game_proxy in its match dir

            # Rewrite host to our proxy
            rv["host"] = HOST_IP
            print(f"\033[36m[MATCH]\033[0m rewrite host: {game_host} -> {HOST_IP}:{game_port}", file=sys.stderr)
            modified = True

        # Match ended
        if state in ("post_match", "menus") and _current_match_id:
            ended_id = _current_match_id
            print(f"\033[36m[MATCH]\033[0m ended {ended_id[:8]}", file=sys.stderr)
            try:
                stop_match_proxy(ended_id)
            except Exception:
                pass
            _current_match_id = None
            _current_game_host = None
            _current_game_port = None

        return modified

    def done(self):
        self._log_handle.close()
        # Clean up any active match proxies
        if _current_match_id:
            try:
                stop_match_proxy(_current_match_id)
            except Exception:
                pass
        print(f"\n[vg_interceptor] {self._count} VG requests logged to {LOG_FILE}", file=sys.stderr)


addons = [VGInterceptor()]
