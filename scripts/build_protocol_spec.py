#!/usr/bin/env python3

from __future__ import annotations

import argparse
import json
import re
import string
from pathlib import Path


PRINTABLE = set(string.printable)
HOST_RE = re.compile(
    r"(https?://[^\s\"'<>]+|ws://[^\s\"'<>]+|[A-Za-z0-9.-]+\.(?:com|net|org|gg|io|me|tv|cloud|app|co|dev|games|online)(?:/[^\s\"'<>]*)?)"
)
TOKEN_RE = re.compile(r"[A-Za-z_][A-Za-z0-9_]{2,}")

METHOD_PREFIXES = (
    "accept",
    "add",
    "ask",
    "attempt",
    "authenticate",
    "buy",
    "change",
    "collect",
    "create",
    "delete",
    "destroy",
    "dismiss",
    "end",
    "equip",
    "exit",
    "forge",
    "friend",
    "get",
    "guild",
    "is",
    "join",
    "leave",
    "link",
    "notify",
    "open",
    "party",
    "presence",
    "process",
    "purchase",
    "query",
    "redeem",
    "record",
    "refresh",
    "reject",
    "report",
    "set",
    "skip",
    "spectate",
    "spectator",
    "start",
    "store",
    "team",
    "update",
    "verify",
    "weave",
)

FIELD_PREFIXES = (
    "session",
    "notify",
    "platform",
    "player",
    "chat",
    "team",
    "enable",
    "missed",
    "ping",
    "sip",
    "turn",
    "stun",
    "owned",
    "curr",
    "client",
    "skill",
    "wins",
    "level",
    "entitlement",
    "karma",
    "spender",
    "account",
    "penalty",
    "trophy",
    "tutorial",
    "party",
    "guild",
    "rank",
    "season",
    "ascension",
    "elo",
    "match",
    "state",
    "game",
    "proxy",
    "support",
    "linked",
    "link",
)


def extract_strings(binary_path: Path, min_len: int = 4) -> list[str]:
    data = binary_path.read_bytes()
    out: list[str] = []
    buf: list[str] = []
    for byte in data:
        ch = chr(byte)
        if ch in PRINTABLE and ch not in "\r\n\t\x0b\x0c":
            buf.append(ch)
            continue
        if len(buf) >= min_len:
            out.append("".join(buf))
        buf = []
    if len(buf) >= min_len:
        out.append("".join(buf))
    return out


def is_method_candidate(token: str) -> bool:
    return token.startswith(METHOD_PREFIXES) and not token.endswith(("Info", "Data", "Queue", "Helper"))


def is_field_candidate(token: str) -> bool:
    return token.startswith(FIELD_PREFIXES) and token[0].islower()


def categorize_methods(methods: list[str]) -> dict[str, list[str]]:
    buckets = {
        "auth_identity": [],
        "social_guild_party": [],
        "inventory_progression": [],
        "ranked_match": [],
        "other": [],
    }
    for method in methods:
        lower = method.lower()
        if any(key in lower for key in ("account", "guest", "auth", "session", "playerfromplatform", "handle")):
            buckets["auth_identity"].append(method)
        elif any(key in lower for key in ("friend", "guild", "party", "team", "presence", "lobby")):
            buckets["social_guild_party"].append(method)
        elif any(key in lower for key in ("inventory", "skin", "card", "forge", "quest", "reward", "chest", "talent")):
            buckets["inventory_progression"].append(method)
        elif any(key in lower for key in ("match", "leaderboard", "liveevent", "season", "ascension", "spectat", "honor")):
            buckets["ranked_match"].append(method)
        else:
            buckets["other"].append(method)
    return {name: sorted(set(values)) for name, values in buckets.items()}


def build_spec(binary_path: Path) -> dict:
    strings_list = extract_strings(binary_path)

    hosts = sorted({match for s in strings_list for match in HOST_RE.findall(s)})
    tokens = sorted({token for s in strings_list for token in TOKEN_RE.findall(s)})
    methods = sorted({token for token in tokens if is_method_candidate(token)})
    fields = sorted({token for token in tokens if is_field_candidate(token)})

    realtime_clues = sorted(
        {
            s
            for s in strings_list
            if any(
                key in s
                for key in (
                    "WebSocket",
                    "websocket",
                    "LongPoll",
                    "notifyUrl",
                    "notifyFallbackUrl",
                    "processMessage",
                    "dismissReliableMessage",
                    "enableStateUpdates",
                )
            )
        }
    )

    ranked_fields = sorted(
        {
            token
            for token in tokens
            if any(
                key in token
                for key in (
                    "rank",
                    "season",
                    "ascension",
                    "elo",
                    "skillTier",
                    "wins_ranked",
                )
            )
        }
    )

    session_fields = sorted(
        {
            token
            for token in tokens
            if token
            in {
                "sessionToken",
                "notifyUrl",
                "notifyFallbackUrl",
                "platformUrl",
                "state",
                "playerInfo",
                "playerUUID",
                "startSessionUrl",
                "linked",
                "linkResult",
                "supportUrls",
                "chatUrl",
                "chatPass",
                "teamUUID",
                "enableStateUpdates",
                "missedStateUpdateMessagesThreshold",
                "pingHostPortInfo",
                "sipPass",
                "sipUrl",
                "sipRealm",
                "sipPort",
                "sipTransport",
                "turnPass",
                "turnUrl",
                "turnRealm",
                "turnPort",
                "turnTransport",
                "stunUrl",
                "stunPort",
                "stunTransport",
            }
        }
    )

    anchor_indexes = [idx for idx, value in enumerate(strings_list) if value == "JSONRpc"]
    cluster_tokens = set()
    if anchor_indexes:
        for anchor in anchor_indexes:
            start = max(anchor - 180, 0)
            end = min(anchor + 260, len(strings_list))
            for value in strings_list[start:end]:
                cluster_tokens.update(TOKEN_RE.findall(value))

    rpc_methods_near_jsonrpc = sorted({token for token in cluster_tokens if is_method_candidate(token)})
    rpc_fields_near_jsonrpc = sorted({token for token in cluster_tokens if is_field_candidate(token)})

    return {
        "binary": str(binary_path),
        "hosts_and_urls": hosts,
        "method_candidates": methods,
        "method_categories": categorize_methods(methods),
        "rpc_methods_near_jsonrpc": rpc_methods_near_jsonrpc,
        "rpc_fields_near_jsonrpc": rpc_fields_near_jsonrpc,
        "session_fields": session_fields,
        "ranked_fields": ranked_fields,
        "realtime_clues": realtime_clues,
        "field_candidates": fields,
    }


def main() -> None:
    parser = argparse.ArgumentParser(description="Build a machine-readable protocol spec from the Vainglory client binary.")
    parser.add_argument(
        "--binary",
        default="Payload/GameKindred.app/GameKindred",
        help="Path to the iOS client binary.",
    )
    parser.add_argument(
        "--output",
        default="reports/generated/protocol_spec.json",
        help="Where to write the extracted spec.",
    )
    args = parser.parse_args()

    binary_path = Path(args.binary)
    spec = build_spec(binary_path)

    output = Path(args.output)
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text(json.dumps(spec, indent=2, sort_keys=True) + "\n")


if __name__ == "__main__":
    main()
