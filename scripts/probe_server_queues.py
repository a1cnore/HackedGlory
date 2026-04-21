#!/usr/bin/env python3
"""
probe_server_queues.py — Test which joinLobby queue names the Vainglory server accepts.

Creates a guest session, then tries joinLobby with each candidate queue name.
Records success (state: pending_auto) vs error for each.

Usage:
    python3 probe_server_queues.py
    python3 probe_server_queues.py --server https://rpc.kindred-live.net
"""

from __future__ import annotations

import argparse
import json
import ssl
import sys
import time
import urllib.request

# Disable SSL verification (server uses production certs but we don't care)
SSL_CTX = ssl.create_default_context()
SSL_CTX.check_hostname = False
SSL_CTX.verify_mode = ssl.CERT_NONE

# Queue names to probe — derived from CFF0 game mode names + binary string analysis
QUEUE_NAMES = [
    # Confirmed working
    "casual_aral",
    "ranked",
    # Confirmed working
    "5v5_pvp_ranked",
    "5v5_pvp_casual",
    "blitz_pvp_ranked",
    # Speculative (from Ghidra + CFF0 naming)
    "casual_5v5",
    "casual_3v3",
    "ranked_3v3",
    "ranked_5v5",
    "casual_blitz",
    "ranked_aral",
    "ranked_blitz",
    "blitz_pvp_casual",
    "private_aral",
    "private_5v5",
    "private_3v3",
    "private_blitz",
    "practice_5v5",
    "practice_3v3",
    "practice",
    "coopbots_5v5",
    "coopbots_3v3",
    "coopbots_aral",
    "solobots_5v5",
    "solobots_3v3",
    "solobots_aral",
    # Experimental / special modes
    "horde",
    "horde_casual",
    "rumble",
    "rumble_casual",
    "aram",
    "aram_casual",
    "one_for_all",
    "one_for_all_5v5",
    # Alternative naming patterns
    "5v5_pvp_casual",
    "5v5_pvp_ranked",
    "3v3_pvp_casual",
    "3v3_pvp_ranked",
    "casual",
    "blitz",
    "private",
    # Draft modes
    "draft_5v5",
    "draft_3v3",
    "private_draft_5v5",
    "private_draft_3v3",
    # Bot variants
    "hidden_bots_5v5",
    "hidden_bots_3v3",
    "hidden_bots_aral",
    "all_bots_5v5",
    "all_bots_3v3",
    # Map viewer
    "map_viewer_5v5",
    # PVE
    "kraken_raid_boss",
    "pve_kraken",
]


_current_token: str = ""


def rpc_call(url: str, method: str, params: list) -> dict:
    """Make a JSON-RPC call and return the parsed response.

    Automatically rotates the session token — each response returns a fresh
    sessionToken that must be used for the next request.
    """
    global _current_token
    body = json.dumps({"method": method, "params": params}).encode()
    req = urllib.request.Request(
        f"{url}/JSONRpc/{method}",
        data=body,
        headers={"Content-Type": "application/json"},
        method="POST",
    )
    try:
        with urllib.request.urlopen(req, context=SSL_CTX, timeout=15) as resp:
            res = json.loads(resp.read())
    except urllib.error.HTTPError as e:
        try:
            res = json.loads(e.read())
        except Exception:
            return {"error": f"HTTP {e.code}", "code": e.code}
    except Exception as e:
        return {"error": str(e)}
    # Rotate token
    new_token = res.get("sessionToken")
    if new_token:
        _current_token = new_token
    return res


def create_session(auth_url: str) -> tuple[str, str]:
    """Create a guest session. Returns (session_token, platform_url)."""
    global _current_token
    print("[*] Creating guest player...", file=sys.stderr)
    res = rpc_call(
        auth_url,
        "createGuestPlayer",
        ["kindred", "en", "CH", "production", "en", "iOS (26.4)",
         "unhandled-platform", "", "147219", 1, "HW_ID_UNKNOWN", "iPhone17,2", ""],
    )
    rv = res.get("returnValue", {})
    player_jwt = rv.get("playerUUID", "")
    start_url = rv.get("startSessionUrl", auth_url.rsplit(":", 1)[0])
    if not player_jwt:
        print(f"[!] createGuestPlayer failed: {json.dumps(res)[:300]}", file=sys.stderr)
        sys.exit(1)
    print(f"[+] Guest player created, startSessionUrl={start_url}", file=sys.stderr)

    print("[*] Starting session...", file=sys.stderr)
    res2 = rpc_call(
        start_url,
        "startSessionForPlayer",
        [player_jwt, "147219", 1, "CH", "production", "en",
         "iOS (26.4)", "unhandled-platform", "HW_ID_UNKNOWN", "iPhone17,2", ""],
    )
    session_token = res2.get("sessionToken", "")
    rv2 = res2.get("returnValue", {})
    platform_url = rv2.get("platformUrl", start_url)
    if not session_token:
        print(f"[!] startSessionForPlayer failed: {json.dumps(res2)[:300]}", file=sys.stderr)
        sys.exit(1)
    _current_token = session_token
    handle = rv2.get("handle", "?")
    print(f"[+] Session started: handle={handle}, platformUrl={platform_url}", file=sys.stderr)
    return session_token, platform_url


def probe_queue(platform_url: str, queue_name: str) -> dict:
    """Try joinLobby with a queue name. Returns the response.

    Uses _current_token which is automatically rotated by rpc_call.
    """
    # Exit any current lobby first
    rpc_call(platform_url, "exitLobby", [_current_token])
    time.sleep(0.3)

    # NOTE: params[1] must be a JSON string, not an object — the server rejects raw objects
    lobby_payload = json.dumps({
        "lobby": queue_name,
        "elo": 0,
        "playerHandle": "probe",
        "equippedHat": "",
        "equippedEmoji": "",
        "equippedPingPack": "SOCIAL_PINGS_DEFAULT_PACK",
        "sites": [{
            "site": "GCP_EUROPE_WEST1",
            "host": "34.78.92.211",
            "avg": 30.0,
            "stdDev": 5.0,
            "max": 50.0,
            "current": 25.0,
        }],
    })

    res = rpc_call(
        platform_url,
        "joinLobby",
        [_current_token, lobby_payload, "147219"],
    )

    # Leave queue after probing
    time.sleep(0.2)
    rpc_call(platform_url, "exitLobby", [_current_token])

    return res


def main():
    parser = argparse.ArgumentParser(description="Probe Vainglory server queue names")
    parser.add_argument("--server", default="https://rpc.kindred-live.net",
                        help="Auth server URL (default: %(default)s)")
    parser.add_argument("--port", type=int, default=443,
                        help="Auth server port (default: %(default)s)")
    parser.add_argument("--only", nargs="*", help="Only test these queue names")
    args = parser.parse_args()

    auth_url = f"{args.server}:{args.port}"
    session_token, platform_url = create_session(auth_url)

    queues = args.only if args.only else QUEUE_NAMES
    results = []

    print(f"\n{'Queue Name':<30} {'Status':<15} {'Details'}", file=sys.stderr)
    print("-" * 75, file=sys.stderr)

    for name in queues:
        res = probe_queue(platform_url, name)
        rv = res.get("returnValue", {})
        code = res.get("code")
        error = res.get("error")

        if isinstance(rv, dict) and rv.get("state") == "pending_auto":
            status = "OK"
            detail = f"state=pending_auto, players={rv.get('numPlayers', '?')}"
        elif isinstance(rv, dict) and rv.get("success") is True:
            status = "OK"
            detail = f"success=true, state={rv.get('state', '?')}"
        elif error:
            status = "ERROR"
            detail = str(error)[:50]
        else:
            status = f"code={code}"
            reason = res.get("reason", "")
            if isinstance(rv, dict):
                detail = f"rv={json.dumps(rv)[:50]}"
            else:
                detail = f"rv={rv}, reason={reason}"[:50]

        color = "\033[32m" if status == "OK" else "\033[31m"
        print(f"{name:<30} {color}{status:<15}\033[0m {detail}", file=sys.stderr)
        results.append({"queue": name, "status": status, "detail": detail, "raw": res})

    # Summary
    ok = [r for r in results if r["status"] == "OK"]
    print(f"\n{'='*75}", file=sys.stderr)
    print(f"Results: {len(ok)}/{len(results)} queues accepted", file=sys.stderr)
    if ok:
        print(f"Working queues: {', '.join(r['queue'] for r in ok)}", file=sys.stderr)

    # Clean up
    rpc_call(platform_url, "endSession", [_current_token])

    # Output JSON for programmatic use
    print(json.dumps({"working": [r["queue"] for r in ok], "results": results}, indent=2))


if __name__ == "__main__":
    main()
