#!/usr/bin/env python3
"""
vg_push_server — WebSocket push server for Vainglory client notifications.

Zero external dependencies — uses only Python stdlib.

The E.V.I.L. engine connects to ws://<host>:2112/ws/<playerUUID> after
startSessionForPlayer when enableStateUpdates=true.

Message format (from RE of FUN_1004edef0 stateUpdateCallback parser):
  The parser reads a JSON dict with this structure:
  {
    "httpStatus": 200,           // optional, 0x130=304 means "not modified"
    "tag": "<version-uuid>",     // string, stored at output+0x18
    "time": "<timestamp>",       // string, stored at output+0x00
    "text": {                    // NESTED dict — this is where events live
      "code": 0,                 // short/int, stored at output+0x140
      // Then ONE of these event keys (checked in cascade):
      "quintPartyStateUpdate": {...},  // party state changed
      "quintPartyJoinRequest": {...},  // incoming party invite
      "quintPartyPlayerLeft": {...},   // someone left party
      "quintPartyMemberKick": {...},   // someone kicked
      // OR if none of the above, check "type" field:
      "type": "stateUpdate",           // → read "states" dict + "counts" array
      "type": "friendsListUpdate",     // → trigger friend list refresh
    }
  }

Usage:
  python3 vg_push_server.py         # start server with interactive console
"""

from __future__ import annotations

import asyncio
import base64
import hashlib
import json
import os
import struct
import sys
import time
import uuid as _uuid
from pathlib import Path

HOST = "0.0.0.0"
PORT = 2112

# ── Traffic log watcher ──
# The interceptor writes JSONL to this file. We tail it to see client reactions.
LOG_BASE = Path(os.environ.get("VG_LOG_DIR", Path(__file__).parent))
TRAFFIC_LOG = LOG_BASE / "vg_traffic.jsonl"

_log_watch_enabled: bool = True    # toggle with `log on` / `log off`
_log_watch_verbose: bool = False   # toggle with `log verbose` — show full JSON
_log_filter: str | None = None     # filter to specific method substring
_last_push_time: float = 0.0      # timestamp of last push, for latency calc

# ── WebSocket frame helpers (RFC 6455) ──

WS_MAGIC = b"258EAFA5-E914-47DA-95CA-5AB5353BE70"


def _ws_accept_key(client_key: str) -> str:
    digest = hashlib.sha1(client_key.encode() + WS_MAGIC).digest()
    return base64.b64encode(digest).decode()


def _ws_encode_frame(payload: bytes, opcode: int = 0x1) -> bytes:
    header = bytes([0x80 | opcode])
    length = len(payload)
    if length < 126:
        header += bytes([length])
    elif length < 65536:
        header += bytes([126]) + struct.pack("!H", length)
    else:
        header += bytes([127]) + struct.pack("!Q", length)
    return header + payload


def _ws_decode_frame(data: bytes) -> tuple[int, bytes, int]:
    if len(data) < 2:
        return -1, b"", 0
    opcode = data[0] & 0x0F
    masked = bool(data[1] & 0x80)
    length = data[1] & 0x7F
    offset = 2
    if length == 126:
        if len(data) < 4: return -1, b"", 0
        length = struct.unpack("!H", data[2:4])[0]
        offset = 4
    elif length == 127:
        if len(data) < 10: return -1, b"", 0
        length = struct.unpack("!Q", data[2:10])[0]
        offset = 10
    if masked:
        if len(data) < offset + 4 + length: return -1, b"", 0
        mask = data[offset:offset + 4]
        offset += 4
        payload = bytearray(data[offset:offset + length])
        for i in range(length):
            payload[i] ^= mask[i % 4]
        return opcode, bytes(payload), offset + length
    else:
        if len(data) < offset + length: return -1, b"", 0
        return opcode, data[offset:offset + length], offset + length


# ── Connected clients ──

class WSClient:
    __slots__ = ("uuid", "reader", "writer", "addr")

    def __init__(self, uuid: str, reader: asyncio.StreamReader,
                 writer: asyncio.StreamWriter, addr: str):
        self.uuid = uuid
        self.reader = reader
        self.writer = writer
        self.addr = addr

    async def send_text(self, text: str):
        frame = _ws_encode_frame(text.encode("utf-8"), opcode=0x1)
        self.writer.write(frame)
        await self.writer.drain()

    def close(self):
        try:
            self.writer.close()
        except Exception:
            pass


_clients: dict[str, WSClient] = {}


# ════════════════════════════════════════════════════════════════
# Known friends list — mirrors FAKE_FRIENDS from vg_interceptor
# ════════════════════════════════════════════════════════════════

KNOWN_FRIENDS: dict[str, dict] = {}  # handle → {uuid, availability, skillTier, ...}

_FRIEND_DEFS = [
    ("CatherineMain", "online",  11, 30, "Stormguard", "SG"),
    ("GwenSniper",    "offline", 10, 28, "Halcyon",    "HC"),
    ("TakaJungle",    "online",  12, 30, "",           ""),
    ("VoxCarry",      "online",  10, 27, "Grangor",    "GR"),
    ("CelesteMid",    "offline", 11, 29, "Halcyon",    "HC"),
    ("ArdanSupport",  "online",   9, 25, "",           ""),
    ("KrulWP",        "online",  10, 26, "Stormguard", "SG"),
    ("Skaarf",        "offline",  8, 22, "",           ""),
]

for _h, _a, _st, _lv, _gn, _gt in _FRIEND_DEFS:
    KNOWN_FRIENDS[_h] = {
        "uuid": str(_uuid.uuid4()),
        "availability": _a,
        "skillTier": _st,
        "level": _lv,
        "guildName": _gn,
        "guildTag": _gt,
    }

# Known queue modes
QUEUE_MODES = {
    "5v5":        "casual_5v5",
    "3v3":        "casual_3v3",
    "ranked":     "ranked_5v5",
    "ranked5":    "ranked_5v5",
    "ranked3":    "ranked_3v3",
    "blitz":      "blitz_pvp_ranked",
    "aral":       "casual_aral",
    "casual_5v5": "casual_5v5",
    "casual_3v3": "casual_3v3",
    "ranked_5v5": "ranked_5v5",
    "ranked_3v3": "ranked_3v3",
    "blitz_pvp_ranked": "blitz_pvp_ranked",
    "casual_aral": "casual_aral",
}

def _resolve_mode(s: str) -> str:
    return QUEUE_MODES.get(s.lower(), s)


# ════════════════════════════════════════════════════════════════
# Party state tracking (mirrors interceptor's _party_* globals)
# ════════════════════════════════════════════════════════════════

_party_uuid: str | None = None
_party_mode: str = "casual_5v5"
_party_members: list[dict] = []


def _make_member(handle: str, player_uuid: str, is_captain: bool = False,
                 slot: int = 0, team: int = 0) -> dict:
    """Build a party member entry matching FUN_10050b6a8 schema."""
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


def _party_add_member(handle: str, uuid: str | None = None) -> dict:
    """Add a member to the tracked party. Returns the member dict."""
    global _party_uuid
    if uuid is None:
        friend = KNOWN_FRIENDS.get(handle)
        uuid = friend["uuid"] if friend else str(_uuid.uuid4())
    if _party_uuid is None:
        _party_uuid = str(_uuid.uuid4())
    slot = len(_party_members)
    member = _make_member(handle, uuid, is_captain=(slot == 0), slot=slot)
    _party_members.append(member)
    return member


def _party_remove_member(handle: str) -> dict | None:
    """Remove a member by handle. Returns the removed member or None."""
    global _party_uuid
    for i, m in enumerate(_party_members):
        if m["handle"].lower() == handle.lower():
            removed = _party_members.pop(i)
            # Re-number slots
            for j, m2 in enumerate(_party_members):
                m2["slot"] = j
            if not _party_members:
                _party_uuid = None
            return removed
    return None


def _party_state_dict() -> dict:
    """Current party state as the client expects it."""
    return {
        "success": True,
        "partyUUID": _party_uuid or "",
        "partyQueueMode": _party_mode,
        "partyQueueDifficulty": 0,
        "members": list(_party_members),
    }


def _friend_uuid(handle: str) -> str:
    """Look up a friend's UUID by handle, or generate one."""
    f = KNOWN_FRIENDS.get(handle)
    return f["uuid"] if f else str(_uuid.uuid4())


# ════════════════════════════════════════════════════════════════
# Push message builders — exact schemas from FUN_1004edef0 RE
# ════════════════════════════════════════════════════════════════

def _wrap_push(text_payload: dict) -> dict:
    """Wrap a push event in the envelope the client parser expects.

    FUN_1004edef0 reads: httpStatus, tag, time, then text.{code, ...events}.
    """
    return {
        "httpStatus": 200,
        "tag": str(_uuid.uuid4()),
        "time": str(int(time.time())),
        "text": {
            "code": 0,
            **text_payload,
        },
    }


# ── Friends / Social ──

def msg_friends_list_update() -> dict:
    """Trigger client to refresh friends list.

    Parser checks text.type == "friendsListUpdate" after the quint party cascade.
    Also include the key-based form as fallback.
    """
    return _wrap_push({
        "type": "friendsListUpdate",
        "friendsListUpdate": True,
    })


def msg_state_update(states: dict[str, str], counts: list[int] | None = None) -> dict:
    """Generic state update — parser reads text.type=="stateUpdate", text.states, text.counts.

    `states` is a dict of key→value string pairs.
    `counts` is an optional array of ints.
    """
    payload: dict = {"type": "stateUpdate", "states": states}
    if counts is not None:
        payload["counts"] = counts
    return _wrap_push(payload)


def msg_friend_request(from_handle: str, from_uuid: str) -> dict:
    """Simulate an incoming friend request via stateUpdate."""
    return _wrap_push({
        "type": "stateUpdate",
        "states": {
            "friendRequest": from_handle,
            "friendRequestUUID": from_uuid,
        },
    })


def msg_presence_update(player_uuid: str, availability: str) -> dict:
    """Push a presence change for a player (online/offline/in_match)."""
    return _wrap_push({
        "type": "stateUpdate",
        "states": {
            "presenceUpdate": player_uuid,
            "availability": availability,
        },
    })


# ── Party (quintParty* events) ──
# Inner objects use the full party response schema from FUN_10050b6a8:
# {success, partyUUID, partyQueueMode, partyQueueDifficulty, members[]}

def msg_party_state_update(party_uuid: str, queue_mode: str,
                           members: list[dict], difficulty: int = 0) -> dict:
    """Party state changed. Parser checks text.quintPartyStateUpdate (first in cascade)."""
    return _wrap_push({
        "quintPartyStateUpdate": {
            "success": True,
            "partyUUID": party_uuid,
            "partyQueueMode": queue_mode,
            "partyQueueDifficulty": difficulty,
            "members": members,
        },
    })


def msg_party_join_request(from_handle: str, from_uuid: str, party_uuid: str,
                           queue_mode: str = "casual_5v5") -> dict:
    """Incoming party invite. Parser checks text.quintPartyJoinRequest (second in cascade).

    Uses full party schema so the popup can show inviter name + queue mode.
    """
    return _wrap_push({
        "quintPartyJoinRequest": {
            "success": True,
            "partyUUID": party_uuid,
            "partyQueueMode": queue_mode,
            "partyQueueDifficulty": 0,
            "playerUUID": from_uuid,
            "handle": from_handle,
            "members": [
                {
                    "uuid": from_uuid,
                    "handle": from_handle,
                    "isDev": False,
                    "isCaptain": True,
                    "status": "ready",
                    "team": 0,
                    "slot": 0,
                    "qbanLevel": 0,
                },
            ],
        },
    })


def msg_party_player_left(player_uuid: str, handle: str, party_uuid: str,
                          remaining_members: list[dict],
                          queue_mode: str = "casual_5v5") -> dict:
    """Someone left the party. Parser checks text.quintPartyPlayerLeft (third in cascade)."""
    return _wrap_push({
        "quintPartyPlayerLeft": {
            "playerUUID": player_uuid,
            "handle": handle,
            "partyUUID": party_uuid,
            "partyQueueMode": queue_mode,
            "partyQueueDifficulty": 0,
            "members": remaining_members,
        },
    })


def msg_party_member_kick(player_uuid: str, handle: str, party_uuid: str,
                          remaining_members: list[dict],
                          queue_mode: str = "casual_5v5") -> dict:
    """Someone was kicked. Parser checks text.quintPartyMemberKick (fourth in cascade)."""
    return _wrap_push({
        "quintPartyMemberKick": {
            "playerUUID": player_uuid,
            "handle": handle,
            "partyUUID": party_uuid,
            "partyQueueMode": queue_mode,
            "partyQueueDifficulty": 0,
            "members": remaining_members,
        },
    })


# ── Match / Queue ──

def msg_match_found(num_players: int = 6) -> dict:
    """Simulate a match being found — pushes the matched_partners state."""
    return _wrap_push({
        "type": "stateUpdate",
        "states": {
            "state": "matched_partners",
            "numPlayers": str(num_players),
        },
        "counts": [num_players],
    })


def msg_queue_update(state: str, num_players: int = 1, **extra) -> dict:
    """Push a queue/match state update.

    state: menus, pending_auto, matched_partners, match_pending, playing, post_match
    """
    states = {"state": state, "numPlayers": str(num_players)}
    states.update({k: str(v) for k, v in extra.items()})
    return _wrap_push({
        "type": "stateUpdate",
        "states": states,
        "counts": [num_players],
    })


# ── Generic / Invites ──

def msg_pending_invite(invite_type: str, from_handle: str, from_uuid: str) -> dict:
    """Generic invite notification (party, team, guild).

    invite_type: "partyInvite", "teamInvite", "guildInvite"
    """
    return _wrap_push({
        "type": "stateUpdate",
        "states": {
            invite_type: from_handle,
            f"{invite_type}UUID": from_uuid,
        },
    })


def msg_reliable_message(text: str, code: int = 0) -> dict:
    """Send a reliable message — the client will call dismissReliableMessage after showing it."""
    return _wrap_push({
        "type": "stateUpdate",
        "states": {"reliableMessage": text},
        "counts": [code],
    })


def msg_guild_invite(from_handle: str, from_uuid: str, guild_name: str = "Stormguard",
                     guild_tag: str = "SG") -> dict:
    """Push a guild invite notification via stateUpdate."""
    return _wrap_push({
        "type": "stateUpdate",
        "states": {
            "guildInvite": from_handle,
            "guildInviteUUID": from_uuid,
            "guildInviteName": guild_name,
            "guildInviteTag": guild_tag,
        },
    })


def msg_team_invite(from_handle: str, from_uuid: str, team_name: str = "Nova",
                    team_tag: str = "NV") -> dict:
    """Push a team invite notification via stateUpdate."""
    return _wrap_push({
        "type": "stateUpdate",
        "states": {
            "teamInvite": from_handle,
            "teamInviteUUID": from_uuid,
            "teamInviteName": team_name,
            "teamInviteTag": team_tag,
        },
    })


# ════════════════════════════════════════════════════════════════
# Traffic log watcher — tail vg_traffic.jsonl for client reactions
# ════════════════════════════════════════════════════════════════

# Category colors for log display (matches interceptor)
_LOG_COLORS = {
    "auth":      "\033[36m",    # cyan
    "social":    "\033[35m",    # magenta
    "inventory": "\033[33m",    # yellow
    "match":     "\033[31m",    # red
    "other":     "\033[37m",    # white
}


async def _tail_traffic_log():
    """Background task: tail vg_traffic.jsonl and print new entries."""
    # Wait for file to exist
    while not TRAFFIC_LOG.exists():
        await asyncio.sleep(2)

    with open(TRAFFIC_LOG, "r") as f:
        # Seek to end — only show new entries
        f.seek(0, 2)

        while True:
            line = f.readline()
            if not line:
                await asyncio.sleep(0.15)
                continue

            if not _log_watch_enabled:
                continue

            line = line.strip()
            if not line:
                continue

            try:
                entry = json.loads(line)
            except json.JSONDecodeError:
                continue

            method = entry.get("method", "?")
            category = entry.get("category", "other")
            status = entry.get("status", 0)

            # Apply filter if set
            if _log_filter and _log_filter.lower() not in method.lower():
                continue

            # Calculate latency from last push
            latency_str = ""
            if _last_push_time > 0:
                delta_ms = (time.time() - _last_push_time) * 1000
                if delta_ms < 10000:  # only show if within 10s of a push
                    latency_str = f" \033[2m+{delta_ms:.0f}ms\033[0m"

            color = _LOG_COLORS.get(category, _LOG_COLORS["other"])
            status_color = "\033[32m" if 200 <= status < 300 else "\033[31m"

            print(
                f"\033[2m  ← \033[0m"
                f"{color}{category:<10}\033[0m "
                f"{method:<40} "
                f"{status_color}{status}\033[0m"
                f"{latency_str}",
                file=sys.stderr,
            )

            # Verbose mode: show response body
            if _log_watch_verbose:
                res = entry.get("res")
                if res:
                    # Truncate large responses
                    res_str = json.dumps(res, indent=2)
                    if len(res_str) > 500:
                        res_str = res_str[:500] + "\n    ... (truncated)"
                    for rline in res_str.split("\n"):
                        print(f"\033[2m    {rline}\033[0m", file=sys.stderr)

                req = entry.get("req")
                if req:
                    req_str = json.dumps(req)
                    if len(req_str) > 200:
                        req_str = req_str[:200] + "..."
                    print(f"\033[2m    req: {req_str}\033[0m", file=sys.stderr)


# ════════════════════════════════════════════════════════════════
# Push to clients
# ════════════════════════════════════════════════════════════════

async def push_to_all(data: dict):
    global _last_push_time
    if not _clients:
        print("[WS] No clients connected", file=sys.stderr)
        return
    _last_push_time = time.time()
    msg = json.dumps(data)
    for uid, client in list(_clients.items()):
        try:
            await client.send_text(msg)
            print(f"\033[36m[WS PUSH]\033[0m → {uid}: {msg[:200]}", file=sys.stderr)
        except Exception as e:
            print(f"\033[31m[WS ERR]\033[0m  {uid}: {e}", file=sys.stderr)
            _clients.pop(uid, None)


# ════════════════════════════════════════════════════════════════
# Connection handler
# ════════════════════════════════════════════════════════════════

async def handle_connection(reader: asyncio.StreamReader, writer: asyncio.StreamWriter):
    addr = writer.get_extra_info("peername")
    addr_str = f"{addr[0]}:{addr[1]}" if addr else "?"

    # Read full HTTP request
    request = b""
    try:
        while True:
            line = await asyncio.wait_for(reader.readline(), timeout=10)
            request += line
            if line == b"\r\n" or not line:
                break
    except asyncio.TimeoutError:
        writer.close()
        return

    request_text = request.decode("utf-8", errors="replace")

    # Check for WebSocket upgrade
    if "upgrade: websocket" not in request_text.lower():
        # HTTP long-poll fallback
        print(f"\033[33m[LP]\033[0m  ← {addr_str}: long-poll request", file=sys.stderr)
        await asyncio.sleep(30)
        body = b'{"messages":[]}'
        writer.write(f"HTTP/1.1 200 OK\r\nContent-Type: application/json\r\nContent-Length: {len(body)}\r\n\r\n".encode() + body)
        await writer.drain()
        writer.close()
        return

    # Parse WebSocket upgrade
    lines = request_text.split("\r\n")
    path = lines[0].split(" ")[1] if lines and "GET " in lines[0] else "/"

    ws_key = ""
    for line in lines:
        if line.lower().startswith("sec-websocket-key:"):
            ws_key = line.split(":", 1)[1].strip()
            break

    if not ws_key:
        writer.write(b"HTTP/1.1 400 Bad Request\r\n\r\n")
        await writer.drain()
        writer.close()
        return

    # Send upgrade response
    accept = _ws_accept_key(ws_key)
    writer.write((
        "HTTP/1.1 101 Switching Protocols\r\n"
        "Upgrade: websocket\r\n"
        "Connection: Upgrade\r\n"
        f"Sec-WebSocket-Accept: {accept}\r\n"
        "\r\n"
    ).encode())
    await writer.drain()

    # Extract player UUID from path /ws/<uuid>
    parts = path.strip("/").split("/")
    player_uuid = parts[-1] if len(parts) >= 2 else "unknown"

    client = WSClient(player_uuid, reader, writer, addr_str)
    _clients[player_uuid] = client
    print(f"\033[32m[WS CONN]\033[0m {player_uuid} from {addr_str} (total: {len(_clients)})", file=sys.stderr)

    # WebSocket read loop — log everything the client sends
    buf = b""
    try:
        while True:
            data = await reader.read(65536)
            if not data:
                break
            buf += data

            while buf:
                opcode, payload, consumed = _ws_decode_frame(buf)
                if consumed == 0:
                    break
                buf = buf[consumed:]

                if opcode == 0x8:  # close
                    writer.write(_ws_encode_frame(b"", opcode=0x8))
                    await writer.drain()
                    raise ConnectionError("close frame")
                elif opcode == 0x9:  # ping
                    writer.write(_ws_encode_frame(payload, opcode=0xA))  # pong
                    await writer.drain()
                    print(f"\033[36m[WS PING]\033[0m ← {player_uuid}", file=sys.stderr)
                elif opcode == 0x1:  # text
                    text = payload.decode("utf-8", errors="replace")
                    print(f"\033[33m[WS RECV]\033[0m ← {player_uuid}: {text}", file=sys.stderr)
                    # Try to parse as JSON for pretty logging
                    try:
                        parsed = json.loads(text)
                        print(f"\033[33m[WS JSON]\033[0m ← {json.dumps(parsed, indent=2)}", file=sys.stderr)
                    except json.JSONDecodeError:
                        pass
                elif opcode == 0x2:  # binary
                    print(f"\033[33m[WS BIN]\033[0m  ← {player_uuid}: {len(payload)} bytes: {payload[:64].hex()}", file=sys.stderr)
                elif opcode == 0xA:  # pong
                    print(f"\033[36m[WS PONG]\033[0m ← {player_uuid}", file=sys.stderr)
                else:
                    print(f"\033[33m[WS ???]\033[0m  ← {player_uuid}: opcode={opcode} {len(payload)} bytes", file=sys.stderr)

    except (ConnectionError, asyncio.IncompleteReadError, OSError):
        pass
    finally:
        _clients.pop(player_uuid, None)
        client.close()
        print(f"\033[31m[WS DISC]\033[0m {player_uuid} ({len(_clients)} remaining)", file=sys.stderr)


# ════════════════════════════════════════════════════════════════
# Interactive console
# ════════════════════════════════════════════════════════════════

def _print_help():
    C = "\033[1m"
    R = "\033[0m"
    G = "\033[32m"
    Y = "\033[33m"
    M = "\033[35m"
    D = "\033[2m"
    print(f"""
{C}═══ VG Push Console ═══{R}

  {G}── Party ──{R}
  {C}party-invite [NAME] [MODE]{R}    quintPartyJoinRequest popup {D}(default: TakaJungle casual_5v5){R}
  {C}party-create [MODE]{R}           init local party + push quintPartyStateUpdate
  {C}party-add NAME{R}               add member to party + push state update
  {C}party-remove NAME{R}            remove member + push state update
  {C}party-leave [NAME]{R}           quintPartyPlayerLeft notification
  {C}party-kick [NAME]{R}            quintPartyMemberKick notification
  {C}party-mode MODE{R}              change queue mode + push state update
  {C}party-show{R}                   print current tracked party state
  {C}party-dissolve{R}               clear party + push empty state
    {D}Modes: 5v5 3v3 ranked ranked5 ranked3 blitz aral{R}

  {G}── Friends / Social ──{R}
  {C}friend-refresh{R}               friendsListUpdate → client re-fetches
  {C}friend-req [NAME]{R}            fake incoming friend request
  {C}friend-online NAME{R}           push presence → online
  {C}friend-offline NAME{R}          push presence → offline
  {C}friend-ingame NAME{R}           push presence → in_match
  {C}friend-list{R}                  show known friends + status

  {G}── Invites ──{R}
  {C}guild-invite [NAME]{R}          guildInvite stateUpdate
  {C}team-invite [NAME]{R}           teamInvite stateUpdate
  {C}invite TYPE NAME{R}             generic invite (partyInvite/teamInvite/guildInvite)

  {G}── Match / Queue ──{R}
  {C}match-found [N]{R}              push matched_partners state (N players, default 6)
  {C}queue [N]{R}                    push pending_auto with N players
  {C}queue-state STATE [N]{R}        push any queue state (menus/pending_auto/matched_partners/
                                   match_pending/playing/post_match)

  {G}── Sequences ──{R}
  {C}seq party-flow [NAME]{R}        invite → wait 2s → accept → state update
  {C}seq matchmaking [N]{R}          queue(1) → +1 every 2s → match-found at N
  {C}seq friend-wave{R}              all friends go online one by one (1s apart)
  {C}seq spam [N]{R}                 send N rapid party invites for stress testing

  {G}── Generic / Debug ──{R}
  {C}state KEY VALUE{R}              stateUpdate with states={{KEY: VALUE}}
  {C}message TEXT{R}                 reliable message (shown to user, must dismiss)
  {C}try-invite NAME [MODE]{R}       old-schema invite (minimal fields) for A/B testing
  {C}try-field KEY {{json}}{R}        push with custom key in text envelope

  {Y}── Raw ──{R}
  {C}{{json}}{R}                      send JSON wrapped in {{tag, time, text}} envelope
  {C}rawraw {{json}}{R}               send raw JSON with NO wrapping

  {M}── Traffic Log (tails vg_traffic.jsonl) ──{R}
  {C}log{R}                          show log watcher status
  {C}log on{R}                       enable traffic log watcher  {D}(default: on){R}
  {C}log off{R}                      disable traffic log watcher
  {C}log verbose{R}                  toggle verbose mode (show req/res bodies)
  {C}log filter [SUBSTR]{R}          filter to methods containing SUBSTR (empty = clear)
  {C}log last [N]{R}                 show last N log entries {D}(default: 10){R}

  {M}── Server ──{R}
  {C}clients{R}                      list connected clients
  {C}ping{R}                         send WebSocket ping frame
  {C}help{R}                         show this help
  {C}quit{R}                         exit
""", file=sys.stderr)


async def stdin_loop():
    global _party_uuid, _party_mode, _party_members
    global _log_watch_enabled, _log_watch_verbose, _log_filter

    loop = asyncio.get_event_loop()
    _print_help()

    while True:
        try:
            line = await loop.run_in_executor(None, sys.stdin.readline)
        except (EOFError, KeyboardInterrupt):
            break
        line = line.strip()
        if not line:
            continue

        parts = line.split()
        cmd = parts[0].lower() if parts else ""

        # ────────────────────────────────────────
        # Server
        # ────────────────────────────────────────
        if cmd == "quit":
            break

        elif cmd == "help":
            _print_help()

        elif cmd == "clients":
            if _clients:
                for uid, c in _clients.items():
                    print(f"  {uid} from {c.addr}", file=sys.stderr)
            else:
                print("  (no clients connected)", file=sys.stderr)

        elif cmd == "ping":
            for uid, c in list(_clients.items()):
                try:
                    c.writer.write(_ws_encode_frame(b"ping", opcode=0x9))
                    await c.writer.drain()
                    print(f"  pinged {uid}", file=sys.stderr)
                except Exception as e:
                    print(f"  ping failed {uid}: {e}", file=sys.stderr)

        # ────────────────────────────────────────
        # Party
        # ────────────────────────────────────────
        elif cmd == "party-invite":
            name = parts[1] if len(parts) > 1 else "TakaJungle"
            mode = _resolve_mode(parts[2]) if len(parts) > 2 else "casual_5v5"
            puuid = str(_uuid.uuid4())
            await push_to_all(msg_party_join_request(
                name, _friend_uuid(name), puuid, queue_mode=mode))
            print(f"  → party invite from {name} ({mode})", file=sys.stderr)

        elif cmd == "party-create":
            mode = _resolve_mode(parts[1]) if len(parts) > 1 else "casual_5v5"
            _party_uuid = str(_uuid.uuid4())
            _party_mode = mode
            _party_members = [_make_member("vphone", "self-uuid", is_captain=True, slot=0)]
            await push_to_all(msg_party_state_update(
                _party_uuid, _party_mode, _party_members))
            print(f"  → party created: {_party_uuid[:8]} ({_party_mode})", file=sys.stderr)

        elif cmd == "party-add":
            if len(parts) < 2:
                print("  Usage: party-add NAME", file=sys.stderr)
            else:
                name = parts[1]
                if _party_uuid is None:
                    _party_uuid = str(_uuid.uuid4())
                    _party_mode = "casual_5v5"
                    _party_members = [_make_member("vphone", "self-uuid", is_captain=True, slot=0)]
                member = _party_add_member(name)
                await push_to_all(msg_party_state_update(
                    _party_uuid, _party_mode, _party_members))
                print(f"  → added {name} (slot {member['slot']}), {len(_party_members)} members", file=sys.stderr)

        elif cmd == "party-remove":
            if len(parts) < 2:
                print("  Usage: party-remove NAME", file=sys.stderr)
            else:
                name = parts[1]
                removed = _party_remove_member(name)
                if removed:
                    if _party_uuid:
                        await push_to_all(msg_party_state_update(
                            _party_uuid, _party_mode, _party_members))
                    print(f"  → removed {name}, {len(_party_members)} remaining", file=sys.stderr)
                else:
                    print(f"  {name} not in party", file=sys.stderr)

        elif cmd == "party-leave":
            name = parts[1] if len(parts) > 1 else "TakaJungle"
            fuuid = _friend_uuid(name)
            removed = _party_remove_member(name)
            await push_to_all(msg_party_player_left(
                fuuid, name, _party_uuid or str(_uuid.uuid4()),
                list(_party_members), _party_mode))
            print(f"  → {name} left party", file=sys.stderr)

        elif cmd == "party-kick":
            name = parts[1] if len(parts) > 1 else "TakaJungle"
            fuuid = _friend_uuid(name)
            removed = _party_remove_member(name)
            await push_to_all(msg_party_member_kick(
                fuuid, name, _party_uuid or str(_uuid.uuid4()),
                list(_party_members), _party_mode))
            print(f"  → {name} kicked from party", file=sys.stderr)

        elif cmd == "party-mode":
            if len(parts) < 2:
                print(f"  Current mode: {_party_mode}", file=sys.stderr)
                print("  Usage: party-mode MODE  (5v5/3v3/ranked/blitz/aral)", file=sys.stderr)
            else:
                _party_mode = _resolve_mode(parts[1])
                if _party_uuid and _party_members:
                    await push_to_all(msg_party_state_update(
                        _party_uuid, _party_mode, _party_members))
                print(f"  → mode changed to {_party_mode}", file=sys.stderr)

        elif cmd == "party-show":
            if _party_uuid:
                print(f"  Party: {_party_uuid[:8]}  Mode: {_party_mode}", file=sys.stderr)
                for m in _party_members:
                    cap = " (captain)" if m["isCaptain"] else ""
                    print(f"    [{m['slot']}] {m['handle']}{cap}  uuid={m['uuid'][:8]}", file=sys.stderr)
            else:
                print("  (no active party)", file=sys.stderr)

        elif cmd == "party-dissolve":
            old_uuid = _party_uuid
            _party_uuid = None
            _party_members = []
            _party_mode = "casual_5v5"
            if old_uuid:
                await push_to_all(msg_party_state_update(old_uuid, _party_mode, []))
            print("  → party dissolved", file=sys.stderr)

        # ────────────────────────────────────────
        # Friends / Social
        # ────────────────────────────────────────
        elif cmd == "friend-refresh":
            await push_to_all(msg_friends_list_update())
            print("  → friendsListUpdate pushed", file=sys.stderr)

        elif cmd == "friend-req":
            name = parts[1] if len(parts) > 1 else "TakaJungle"
            await push_to_all(msg_friend_request(name, _friend_uuid(name)))
            print(f"  → friend request from {name}", file=sys.stderr)

        elif cmd == "friend-online":
            if len(parts) < 2:
                print("  Usage: friend-online NAME", file=sys.stderr)
            else:
                name = parts[1]
                fuuid = _friend_uuid(name)
                if name in KNOWN_FRIENDS:
                    KNOWN_FRIENDS[name]["availability"] = "online"
                await push_to_all(msg_presence_update(fuuid, "online"))
                print(f"  → {name} is now online", file=sys.stderr)

        elif cmd == "friend-offline":
            if len(parts) < 2:
                print("  Usage: friend-offline NAME", file=sys.stderr)
            else:
                name = parts[1]
                fuuid = _friend_uuid(name)
                if name in KNOWN_FRIENDS:
                    KNOWN_FRIENDS[name]["availability"] = "offline"
                await push_to_all(msg_presence_update(fuuid, "offline"))
                print(f"  → {name} is now offline", file=sys.stderr)

        elif cmd == "friend-ingame":
            if len(parts) < 2:
                print("  Usage: friend-ingame NAME", file=sys.stderr)
            else:
                name = parts[1]
                fuuid = _friend_uuid(name)
                if name in KNOWN_FRIENDS:
                    KNOWN_FRIENDS[name]["availability"] = "in_match"
                await push_to_all(msg_presence_update(fuuid, "in_match"))
                print(f"  → {name} is now in-game", file=sys.stderr)

        elif cmd == "friend-list":
            print("  Known friends:", file=sys.stderr)
            for h, f in KNOWN_FRIENDS.items():
                status_color = "\033[32m" if f["availability"] == "online" else (
                    "\033[33m" if f["availability"] == "in_match" else "\033[90m")
                guild = f" [{f['guildTag']}]" if f["guildTag"] else ""
                print(f"    {status_color}{f['availability']:<10}\033[0m {h}{guild}  "
                      f"T{f['skillTier']} L{f['level']}  uuid={f['uuid'][:8]}",
                      file=sys.stderr)

        # ────────────────────────────────────────
        # Invites (guild / team / generic)
        # ────────────────────────────────────────
        elif cmd == "guild-invite":
            name = parts[1] if len(parts) > 1 else "TakaJungle"
            guild = parts[2] if len(parts) > 2 else "Stormguard"
            tag = parts[3] if len(parts) > 3 else "SG"
            await push_to_all(msg_guild_invite(name, _friend_uuid(name), guild, tag))
            print(f"  → guild invite from {name} ({guild} [{tag}])", file=sys.stderr)

        elif cmd == "team-invite":
            name = parts[1] if len(parts) > 1 else "TakaJungle"
            team = parts[2] if len(parts) > 2 else "Nova"
            tag = parts[3] if len(parts) > 3 else "NV"
            await push_to_all(msg_team_invite(name, _friend_uuid(name), team, tag))
            print(f"  → team invite from {name} ({team} [{tag}])", file=sys.stderr)

        elif cmd == "invite":
            if len(parts) >= 3:
                await push_to_all(msg_pending_invite(parts[1], parts[2], _friend_uuid(parts[2])))
            else:
                print("  Usage: invite partyInvite|teamInvite|guildInvite NAME", file=sys.stderr)

        # ────────────────────────────────────────
        # Match / Queue
        # ────────────────────────────────────────
        elif cmd == "match-found":
            n = int(parts[1]) if len(parts) > 1 else 6
            await push_to_all(msg_match_found(n))
            print(f"  → match found ({n} players)", file=sys.stderr)

        elif cmd == "queue":
            n = int(parts[1]) if len(parts) > 1 else 1
            await push_to_all(msg_queue_update("pending_auto", n))
            print(f"  → queue: pending_auto ({n} players)", file=sys.stderr)

        elif cmd == "queue-state":
            if len(parts) < 2:
                print("  Usage: queue-state STATE [N]", file=sys.stderr)
                print("  States: menus pending_auto matched_partners match_pending playing post_match", file=sys.stderr)
            else:
                state = parts[1]
                n = int(parts[2]) if len(parts) > 2 else 1
                await push_to_all(msg_queue_update(state, n))
                print(f"  → queue state: {state} ({n} players)", file=sys.stderr)

        # ────────────────────────────────────────
        # Sequences (multi-step automated flows)
        # ────────────────────────────────────────
        elif cmd == "seq":
            if len(parts) < 2:
                print("  Usage: seq party-flow|matchmaking|friend-wave|spam [args]", file=sys.stderr)
            else:
                seq_name = parts[1].lower()

                if seq_name == "party-flow":
                    name = parts[2] if len(parts) > 2 else "TakaJungle"
                    mode = _resolve_mode(parts[3]) if len(parts) > 3 else "casual_5v5"
                    print(f"  → seq party-flow: {name} ({mode})", file=sys.stderr)

                    # Step 1: send invite
                    puuid = str(_uuid.uuid4())
                    await push_to_all(msg_party_join_request(
                        name, _friend_uuid(name), puuid, queue_mode=mode))
                    print(f"    [1/3] invite sent", file=sys.stderr)

                    await asyncio.sleep(2)

                    # Step 2: create party with us + them
                    _party_uuid = puuid
                    _party_mode = mode
                    _party_members = [
                        _make_member("vphone", "self-uuid", is_captain=True, slot=0),
                        _make_member(name, _friend_uuid(name), is_captain=False, slot=1),
                    ]
                    await push_to_all(msg_party_state_update(
                        _party_uuid, _party_mode, _party_members))
                    print(f"    [2/3] party state pushed (2 members)", file=sys.stderr)

                    await asyncio.sleep(1)

                    # Step 3: send another state update to confirm
                    await push_to_all(msg_party_state_update(
                        _party_uuid, _party_mode, _party_members))
                    print(f"    [3/3] state confirmed", file=sys.stderr)

                elif seq_name == "matchmaking":
                    target = int(parts[2]) if len(parts) > 2 else 6
                    print(f"  → seq matchmaking: target {target} players", file=sys.stderr)

                    for i in range(1, target + 1):
                        await push_to_all(msg_queue_update("pending_auto", i))
                        print(f"    [{i}/{target}] pending_auto ({i} players)", file=sys.stderr)
                        if i < target:
                            await asyncio.sleep(2)

                    await asyncio.sleep(1)
                    await push_to_all(msg_match_found(target))
                    print(f"    → match found!", file=sys.stderr)

                elif seq_name == "friend-wave":
                    print(f"  → seq friend-wave: all friends coming online", file=sys.stderr)
                    for i, (name, info) in enumerate(KNOWN_FRIENDS.items()):
                        info["availability"] = "online"
                        await push_to_all(msg_presence_update(info["uuid"], "online"))
                        print(f"    [{i+1}/{len(KNOWN_FRIENDS)}] {name} → online", file=sys.stderr)
                        if i < len(KNOWN_FRIENDS) - 1:
                            await asyncio.sleep(1)
                    # Trigger re-fetch so client sees updated statuses
                    await push_to_all(msg_friends_list_update())
                    print(f"    → friendsListUpdate sent", file=sys.stderr)

                elif seq_name == "spam":
                    count = int(parts[2]) if len(parts) > 2 else 5
                    print(f"  → seq spam: {count} rapid invites", file=sys.stderr)
                    names = list(KNOWN_FRIENDS.keys())
                    for i in range(count):
                        name = names[i % len(names)]
                        await push_to_all(msg_party_join_request(
                            name, _friend_uuid(name), str(_uuid.uuid4())))
                        print(f"    [{i+1}/{count}] invite from {name}", file=sys.stderr)
                        await asyncio.sleep(0.3)

                elif seq_name == "party-fill":
                    # Fill party with all online friends
                    mode = _resolve_mode(parts[2]) if len(parts) > 2 else "casual_5v5"
                    _party_uuid = str(_uuid.uuid4())
                    _party_mode = mode
                    _party_members = [_make_member("vphone", "self-uuid", is_captain=True, slot=0)]
                    online = [(h, f) for h, f in KNOWN_FRIENDS.items() if f["availability"] == "online"]
                    print(f"  → seq party-fill: adding {len(online)} online friends ({mode})", file=sys.stderr)
                    for i, (name, info) in enumerate(online):
                        _party_add_member(name, info["uuid"])
                        await push_to_all(msg_party_state_update(
                            _party_uuid, _party_mode, _party_members))
                        print(f"    [{i+1}/{len(online)}] added {name}", file=sys.stderr)
                        if i < len(online) - 1:
                            await asyncio.sleep(1.5)

                elif seq_name == "full-session":
                    # Simulate: friends come online → party invite → accept → queue → match
                    name = parts[2] if len(parts) > 2 else "TakaJungle"
                    mode = _resolve_mode(parts[3]) if len(parts) > 3 else "casual_5v5"
                    print(f"  → seq full-session: {name} ({mode})", file=sys.stderr)

                    # Friends come online
                    for h, info in list(KNOWN_FRIENDS.items())[:3]:
                        info["availability"] = "online"
                        await push_to_all(msg_presence_update(info["uuid"], "online"))
                        print(f"    {h} → online", file=sys.stderr)
                        await asyncio.sleep(0.8)

                    await push_to_all(msg_friends_list_update())
                    await asyncio.sleep(1)

                    # Party invite
                    puuid = str(_uuid.uuid4())
                    await push_to_all(msg_party_join_request(
                        name, _friend_uuid(name), puuid, queue_mode=mode))
                    print(f"    invite from {name}", file=sys.stderr)
                    await asyncio.sleep(3)

                    # Accept → party formed
                    _party_uuid = puuid
                    _party_mode = mode
                    _party_members = [
                        _make_member("vphone", "self-uuid", is_captain=False, slot=0),
                        _make_member(name, _friend_uuid(name), is_captain=True, slot=1),
                    ]
                    await push_to_all(msg_party_state_update(
                        _party_uuid, _party_mode, _party_members))
                    print(f"    party formed ({len(_party_members)} members)", file=sys.stderr)
                    await asyncio.sleep(2)

                    # Queue
                    for i in range(1, 7):
                        await push_to_all(msg_queue_update("pending_auto", i))
                        print(f"    queue: {i}/6", file=sys.stderr)
                        await asyncio.sleep(1.5)

                    # Match found
                    await push_to_all(msg_match_found(6))
                    print(f"    match found!", file=sys.stderr)

                else:
                    print(f"  Unknown sequence: {seq_name}", file=sys.stderr)
                    print("  Available: party-flow, matchmaking, friend-wave, spam, party-fill, full-session", file=sys.stderr)

        # ────────────────────────────────────────
        # Generic / Debug
        # ────────────────────────────────────────
        elif cmd == "state":
            if len(parts) >= 3:
                await push_to_all(msg_state_update({parts[1]: parts[2]}))
            else:
                print("  Usage: state KEY VALUE", file=sys.stderr)

        elif cmd == "message":
            text = line.split(" ", 1)[1] if " " in line else "Hello from push server"
            await push_to_all(msg_reliable_message(text))
            print(f"  → reliable message: {text}", file=sys.stderr)

        elif cmd == "try-invite":
            # Old-schema party invite for A/B testing
            name = parts[1] if len(parts) > 1 else "TakaJungle"
            mode = _resolve_mode(parts[2]) if len(parts) > 2 else "casual_5v5"
            old_msg = _wrap_push({
                "quintPartyJoinRequest": {
                    "playerUUID": _friend_uuid(name),
                    "handle": name,
                    "partyUUID": str(_uuid.uuid4()),
                    "partyQueueMode": mode,
                },
            })
            await push_to_all(old_msg)
            print(f"  → old-schema invite from {name} (compare with party-invite)", file=sys.stderr)

        elif cmd == "try-field":
            # Send a custom key in the text envelope
            if len(parts) >= 3:
                key = parts[1]
                json_str = line.split(" ", 2)[2]
                try:
                    val = json.loads(json_str)
                    await push_to_all(_wrap_push({key: val}))
                    print(f"  → sent {key}: {json_str[:100]}", file=sys.stderr)
                except json.JSONDecodeError as e:
                    print(f"  Bad JSON: {e}", file=sys.stderr)
            else:
                print("  Usage: try-field KEY {json_value}", file=sys.stderr)

        elif cmd == "try-states":
            # Send multiple state key-value pairs at once
            if len(parts) >= 3 and len(parts) % 2 == 1:
                states = {}
                for i in range(1, len(parts), 2):
                    states[parts[i]] = parts[i + 1]
                await push_to_all(msg_state_update(states))
                print(f"  → stateUpdate: {states}", file=sys.stderr)
            else:
                print("  Usage: try-states KEY1 VAL1 KEY2 VAL2 ...", file=sys.stderr)

        elif cmd == "try-party-raw":
            # Send quintPartyStateUpdate with a raw JSON payload
            if len(parts) >= 2:
                json_str = line.split(" ", 1)[1]
                try:
                    val = json.loads(json_str)
                    await push_to_all(_wrap_push({"quintPartyStateUpdate": val}))
                    print(f"  → raw quintPartyStateUpdate sent", file=sys.stderr)
                except json.JSONDecodeError as e:
                    print(f"  Bad JSON: {e}", file=sys.stderr)
            else:
                print('  Usage: try-party-raw {"partyUUID":"...","members":[...]}', file=sys.stderr)

        # ────────────────────────────────────────
        # Raw
        # ────────────────────────────────────────
        elif line.startswith("rawraw "):
            try:
                data = json.loads(line[7:])
                await push_to_all(data)
            except json.JSONDecodeError as e:
                print(f"  Bad JSON: {e}", file=sys.stderr)

        elif line.startswith("{"):
            try:
                inner = json.loads(line)
                await push_to_all(_wrap_push(inner))
            except json.JSONDecodeError as e:
                print(f"  Bad JSON: {e}", file=sys.stderr)

        # ────────────────────────────────────────
        # Traffic log watcher
        # ────────────────────────────────────────
        elif cmd == "log":
            if len(parts) == 1:
                status = "\033[32mon\033[0m" if _log_watch_enabled else "\033[31moff\033[0m"
                verbose = "\033[32mon\033[0m" if _log_watch_verbose else "\033[31moff\033[0m"
                filt = _log_filter or "(none)"
                print(f"  Log watcher: {status}  Verbose: {verbose}  Filter: {filt}", file=sys.stderr)
                print(f"  Watching: {TRAFFIC_LOG}", file=sys.stderr)
            elif parts[1] == "on":
                _log_watch_enabled = True
                print("  → log watcher enabled", file=sys.stderr)
            elif parts[1] == "off":
                _log_watch_enabled = False
                print("  → log watcher disabled", file=sys.stderr)
            elif parts[1] == "verbose":
                _log_watch_verbose = not _log_watch_verbose
                state = "on" if _log_watch_verbose else "off"
                print(f"  → verbose mode: {state}", file=sys.stderr)
            elif parts[1] == "filter":
                _log_filter = parts[2] if len(parts) > 2 else None
                if _log_filter:
                    print(f"  → filtering to methods containing '{_log_filter}'", file=sys.stderr)
                else:
                    print("  → filter cleared (showing all)", file=sys.stderr)
            elif parts[1] == "last":
                n = int(parts[2]) if len(parts) > 2 else 10
                if TRAFFIC_LOG.exists():
                    # Read last N lines
                    with open(TRAFFIC_LOG, "r") as f:
                        all_lines = f.readlines()
                    tail = all_lines[-n:] if len(all_lines) >= n else all_lines
                    print(f"  Last {len(tail)} log entries:", file=sys.stderr)
                    for tl in tail:
                        tl = tl.strip()
                        if not tl:
                            continue
                        try:
                            entry = json.loads(tl)
                            method = entry.get("method", "?")
                            category = entry.get("category", "other")
                            status = entry.get("status", 0)
                            ts = entry.get("ts", "")
                            color = _LOG_COLORS.get(category, _LOG_COLORS["other"])
                            status_color = "\033[32m" if 200 <= status < 300 else "\033[31m"
                            print(
                                f"    \033[2m{ts}\033[0m "
                                f"{color}{category:<10}\033[0m "
                                f"{method:<40} "
                                f"{status_color}{status}\033[0m",
                                file=sys.stderr,
                            )
                            if _log_watch_verbose:
                                res = entry.get("res")
                                if res:
                                    res_str = json.dumps(res, indent=2)
                                    if len(res_str) > 400:
                                        res_str = res_str[:400] + "\n      ..."
                                    for rl in res_str.split("\n"):
                                        print(f"      \033[2m{rl}\033[0m", file=sys.stderr)
                        except json.JSONDecodeError:
                            print(f"    {tl[:120]}", file=sys.stderr)
                else:
                    print(f"  {TRAFFIC_LOG} not found", file=sys.stderr)
            else:
                print("  Usage: log [on|off|verbose|filter SUBSTR|last N]", file=sys.stderr)

        # ────────────────────────────────────────
        # Legacy aliases (backwards compat)
        # ────────────────────────────────────────
        elif cmd == "friends":
            await push_to_all(msg_friends_list_update())

        elif cmd == "presence":
            if len(parts) == 3:
                await push_to_all(msg_presence_update(parts[1], parts[2]))
            else:
                print("  Usage: presence UUID online|offline|in_match", file=sys.stderr)

        else:
            print(f"  Unknown: {line}  (type 'help' for commands)", file=sys.stderr)


# ════════════════════════════════════════════════════════════════
# Server
# ════════════════════════════════════════════════════════════════

async def run_server():
    server = await asyncio.start_server(handle_connection, HOST, PORT)
    print(f"\033[1m[WS]\033[0m Push server on ws://{HOST}:{PORT}", file=sys.stderr)
    print(f"[WS] Client connects to ws://192.168.64.1:{PORT}/ws/<playerUUID>", file=sys.stderr)
    print(f"[WS] Traffic log watcher: {TRAFFIC_LOG}", file=sys.stderr)

    stdin_task = asyncio.create_task(stdin_loop())
    log_tail_task = asyncio.create_task(_tail_traffic_log())
    async with server:
        await asyncio.gather(server.serve_forever(), stdin_task, log_tail_task,
                             return_exceptions=True)


def main():
    global HOST, PORT
    import argparse
    parser = argparse.ArgumentParser(description="VG WebSocket push server")
    parser.add_argument("--host", default=HOST)
    parser.add_argument("--port", type=int, default=PORT)
    args = parser.parse_args()
    HOST = args.host
    PORT = args.port

    try:
        asyncio.run(run_server())
    except KeyboardInterrupt:
        print("\n[WS] Shutting down", file=sys.stderr)


if __name__ == "__main__":
    main()
