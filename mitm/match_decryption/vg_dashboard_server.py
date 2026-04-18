#!/usr/bin/env python3
"""
vg_dashboard_server.py -- HTTP server for the Vainglory match dashboard.

Serves the HTML dashboard at / and exposes a JSON API at /api/state.
Re-reads and re-decrypts packets.bin on every API call to support live matches.

Usage:
  python3 vg_dashboard_server.py [--port 8888]
"""

from __future__ import annotations

import argparse
import hashlib
import json
import struct
import sys
import urllib.parse
from collections import Counter
from http.server import HTTPServer, SimpleHTTPRequestHandler
from pathlib import Path
from typing import Optional

# ── Crypto ──

SALT = bytes.fromhex(
    "467c46341a2f5f1ea778c8d74b1ca88b459d33ab9685e0e3f378e7b493322ceb"
    "4036be8b31396d3330ddaa6d7031415efe903f60be8834c53299e3e8877c3a26"
)


def _swap4(b: bytes) -> bytes:
    return b[3::-1] + b[7:3:-1]


def make_cipher(match_id: str):
    from Crypto.Cipher import Blowfish
    key = hashlib.md5(SALT + match_id.encode()).digest()
    return Blowfish.new(key, Blowfish.MODE_ECB)


def decrypt_msg(bf, msg: bytes) -> bytes:
    out = bytearray()
    for j in range(0, len(msg) - len(msg) % 8, 8):
        out.extend(_swap4(bf.decrypt(_swap4(msg[j:j + 8]))))
    return bytes(out)


# ── Opcode constants ──

OP_UUID = 1000
OP_GAME_SETUP = 1001
OP_HANDLE = 1005
OP_PLAYER_INFO = 1006
OP_HERO_CATALOG = 1107
OP_HERO_ASSIGN = 1108
OP_SNAPSHOT = 1114
OP_GAMEMODE_NAME = 1135
OP_ENTITY_STAT = 1053
OP_POSITION = 1070
OP_MATCH_RESULT_BURST = 1077
OP_ENTITY_PROP = 1086
OP_ENTITY_STATE = 1067

# Snapshot record constants
SNAP_RECORD_SIZE = 161
SNAP_RECORD_START = 1
SNAP_HANDLE_OFFSET = 24
SNAP_UUID_OFFSET = 104
SNAP_ENTITY_OFFSET = 18
SNAP_TEAM_OFFSET = 15
SNAP_SLOT_OFFSET = 8


# ── Packet Parser ──

def parse_packets(packets_bin: Path, match_id: str):
    """Parse packets.bin and decrypt all messages.

    Each TCP frame in packets.bin is stored as:
      [8B BE double timestamp][1B direction (0=C->S, 1=S->C)][4B BE u32 length][payload]

    Each frame payload may contain multiple game messages, each prefixed with a
    2-byte BE length header: [2B msg_len][msg_data of msg_len bytes].
    """
    bf = make_cipher(match_id)
    try:
        data = packets_bin.read_bytes()
    except Exception:
        return []

    messages = []
    offset = 0
    while offset + 13 <= len(data):
        ts = struct.unpack("!d", data[offset:offset + 8])[0]
        direction = data[offset + 8]
        sz = struct.unpack("!I", data[offset + 9:offset + 13])[0]
        if offset + 13 + sz > len(data):
            break

        raw = data[offset + 13:offset + 13 + sz]
        dir_str = "C->S" if direction == 0 else "S->C"

        pos = 0
        while pos + 2 <= len(raw):
            msg_len = struct.unpack(">H", raw[pos:pos + 2])[0]
            if msg_len == 0 or pos + 2 + msg_len > len(raw):
                break
            msg_data = raw[pos + 2:pos + 2 + msg_len]
            if len(msg_data) >= 8:
                dec = decrypt_msg(bf, msg_data)
                if len(dec) >= 2:
                    opcode = struct.unpack(">H", dec[0:2])[0]
                    messages.append((ts, dir_str, opcode, dec))
            elif len(msg_data) >= 2:
                opcode = struct.unpack(">H", msg_data[0:2])[0]
                messages.append((ts, dir_str, opcode, msg_data))
            pos += 2 + msg_len

        offset += 13 + sz

    return messages


# ── Protocol Decoders ──

def _get_player(players, entity_id):
    for p in players:
        if p["entity_id"] == entity_id:
            return p
    return None


def detect_match_winner(messages, players):
    expected_sources = {p["entity_id"] for p in players if p["team"] in (1, 2)}
    if len(expected_sources) < 6:
        return 0, 0, 0xFFFFFFFF

    current_group = []
    best_group = []

    def maybe_commit(group):
        nonlocal best_group
        if len(group) < 7:
            return
        player_sources = {src for _, src, _, _ in group if src != 0xFFFFFFFF}
        has_sentinel = any(src == 0xFFFFFFFF for _, src, _, _ in group)
        if player_sources == expected_sources and has_sentinel:
            best_group = list(group)

    for ts, dir_str, opcode, dec in messages:
        if dir_str != "S->C" or opcode != OP_MATCH_RESULT_BURST:
            maybe_commit(current_group)
            current_group = []
            continue

        payload = dec[2:]
        if len(payload) < 16:
            maybe_commit(current_group)
            current_group = []
            continue

        source_id = struct.unpack(">I", payload[0:4])[0]
        target_id = struct.unpack(">I", payload[4:8])[0]
        winner_team_hint = struct.unpack(">I", payload[12:16])[0]
        if target_id not in expected_sources:
            maybe_commit(current_group)
            current_group = []
            continue

        if current_group and (
            target_id != current_group[0][2]
            or winner_team_hint != current_group[0][3]
            or ts - current_group[-1][0] > 0.25
        ):
            maybe_commit(current_group)
            current_group = []

        current_group.append((ts, source_id, target_id, winner_team_hint))

    maybe_commit(current_group)
    if not best_group:
        return 0, 0, 0xFFFFFFFF

    _, _, target_id, winner_team_hint = best_group[0]
    target_player = _get_player(players, target_id)

    winning_team = 0
    if target_player and target_player["team"] in (1, 2):
        winning_team = target_player["team"]
    elif winner_team_hint in (1, 2):
        winning_team = winner_team_hint

    if winning_team not in (1, 2):
        return 0, 0, 0xFFFFFFFF

    losing_team = 1 if winning_team == 2 else 2
    return winning_team, losing_team, target_id


def decode_snapshot(payload, players):
    if len(payload) < SNAP_RECORD_START + 6 * SNAP_RECORD_SIZE:
        return
    for slot in range(6):
        rec_off = SNAP_RECORD_START + slot * SNAP_RECORD_SIZE
        rec = payload[rec_off:rec_off + SNAP_RECORD_SIZE]
        if len(rec) < SNAP_RECORD_SIZE:
            break

        handle = rec[SNAP_HANDLE_OFFSET:SNAP_HANDLE_OFFSET + 32]
        handle = handle.split(b"\x00")[0].decode("ascii", errors="replace")

        entity_id = struct.unpack(">H", rec[SNAP_ENTITY_OFFSET:SNAP_ENTITY_OFFSET + 2])[0]
        team = rec[SNAP_TEAM_OFFSET]
        slot_idx = rec[SNAP_SLOT_OFFSET]
        gold_snap = struct.unpack(">H", rec[16:18])[0]

        if slot < len(players):
            p = players[slot]
        else:
            p = _new_player(slot)
            players.append(p)

        p["slot"] = slot_idx if slot_idx < 6 else slot
        p["handle"] = handle or p["handle"]
        if entity_id != 0xFFFF:
            p["entity_id"] = entity_id
        if team in (1, 2):
            p["team"] = team
        if gold_snap != 0xFFFF:
            p["gold"] = max(p["gold"], gold_snap)


def decode_hero_assignments(payload, state):
    if len(payload) < 5:
        return
    gm_raw = payload[5:]
    gm = gm_raw.split(b"\x00")[0].decode("ascii", errors="replace").strip("*")
    if gm:
        state["game_mode"] = gm


def decode_player_info(payload, players):
    if len(payload) < 164:
        return
    handle = payload[:44].split(b"\x00")[0].decode("ascii", errors="replace")
    entity_id = struct.unpack(">H", payload[162:164])[0]

    if not handle or entity_id < 1000 or entity_id > 2000:
        return

    for p in players:
        if p["entity_id"] == entity_id:
            p["handle"] = handle
            if len(payload) > 210 and payload[210] in (1, 2):
                p["team"] = payload[210]
            return

    slot = len([p for p in players if p["handle"]])
    if slot < len(players):
        p = players[slot]
    else:
        p = _new_player(slot)
        players.append(p)

    p["handle"] = handle
    p["entity_id"] = entity_id
    if len(payload) > 210 and payload[210] in (1, 2):
        p["team"] = payload[210]


def decode_position(payload, players):
    if len(payload) < 12:
        return
    entity_id = struct.unpack(">H", payload[2:4])[0]
    p = _get_player(players, entity_id)
    if p:
        p["pos_x"] = round(struct.unpack(">f", payload[4:8])[0], 1)
        p["pos_y"] = round(struct.unpack(">f", payload[8:12])[0], 1)
        p["moves"] += 1


def decode_entity_stat(payload, players, events, ts, start_ts):
    if len(payload) < 9:
        return
    entity_id = struct.unpack(">H", payload[2:4])[0]
    p = _get_player(players, entity_id)
    if not p:
        return

    fv = struct.unpack(">f", payload[4:8])[0]
    stat_type = payload[8]

    if stat_type == 0:
        p["stat0"] = round(fv, 1)
    elif stat_type == 2:
        p["stat2"] = round(fv, 1)
    elif stat_type == 3:
        if fv > 0:
            p["speed"] = round(fv, 1)
    elif stat_type == 6:
        if fv < -500 and p["hp_delta"] >= -500:
            elapsed = ts - start_ts
            name = p["handle"] or f"Entity {entity_id}"
            events.append({"time_s": round(elapsed, 1), "text": f"{name} took massive hit: {fv:.0f}"})
        p["hp_delta"] = round(fv, 0)
    elif stat_type == 8:
        p["stat8"] = round(fv, 1)


def decode_entity_prop(payload, players):
    if len(payload) < 14:
        return
    entity_id = struct.unpack(">H", payload[2:4])[0]
    p = _get_player(players, entity_id)
    if not p:
        return

    prop_type = payload[8]
    major = struct.unpack(">I", payload[9:13])[0]
    minor = payload[13]
    combined = major * 256 + minor

    if prop_type == 0x4D:
        p["gold"] = max(p["gold"], combined)
    elif prop_type == 0x3E:
        p["xp"] = max(p["xp"], combined)


def _new_player(slot):
    return {
        "slot": slot,
        "handle": "",
        "team": 0,
        "entity_id": 0xFFFF,
        "pos_x": 0.0,
        "pos_y": 0.0,
        "gold": 0,
        "xp": 0,
        "speed": 0.0,
        "moves": 0,
        "stat0": 0.0,
        "stat2": 0.0,
        "hp_delta": 0.0,
        "stat8": 0.0,
    }


# ── Match Analysis ──

def resolve_match_id(match_dir: Path) -> Optional[str]:
    """Resolve the full match ID from match_meta.json or traffic log."""
    meta_path = match_dir / "match_meta.json"
    if meta_path.exists():
        try:
            with open(meta_path) as f:
                meta = json.load(f)
            mid = meta.get("match_id")
            if mid:
                return mid
        except (json.JSONDecodeError, IOError):
            pass

    # Live match: extract short ID from directory name
    dir_prefix = match_dir.name.split("_")[-1]
    traffic_log = match_dir.parent.parent / "vg_traffic.jsonl"
    if traffic_log.exists():
        try:
            with open(traffic_log) as f:
                for line in f:
                    try:
                        d = json.loads(line)
                        rv = d.get("res", {}).get("returnValue", {}) if isinstance(d.get("res"), dict) else {}
                        if isinstance(rv, dict) and rv.get("matchId", "").startswith(dir_prefix):
                            return rv["matchId"]
                    except (json.JSONDecodeError, AttributeError):
                        pass
        except IOError:
            pass

    return None


def analyze_match(match_dir: Path) -> dict:
    """Analyze a match directory and return JSON-serializable state."""
    packets_path = match_dir / "packets.bin"
    if not packets_path.exists():
        return {"error": f"packets.bin not found in {match_dir}"}

    match_id = resolve_match_id(match_dir)
    if not match_id:
        return {"error": f"Cannot determine match ID for {match_dir.name}"}

    messages = parse_packets(packets_path, match_id)
    if not messages:
        return {"error": "No messages decrypted", "match_id": match_id[:8]}

    first_ts = messages[0][0]
    last_ts = messages[-1][0]
    duration = last_ts - first_ts
    start_ts = first_ts

    players = []
    events = []
    opcode_counts = Counter()
    game_mode = ""
    hero_catalog = []

    state_ref = {"game_mode": ""}

    # Pass 1: Roster setup
    for ts, dir_str, opcode, dec in messages:
        opcode_counts[opcode] += 1
        payload = dec[2:]

        if opcode == OP_SNAPSHOT and dir_str == "S->C":
            decode_snapshot(payload, players)
        elif opcode == OP_HERO_ASSIGN and dir_str == "S->C":
            decode_hero_assignments(payload, state_ref)
        elif opcode == OP_PLAYER_INFO and dir_str == "S->C":
            decode_player_info(payload, players)
        elif opcode == OP_HERO_CATALOG and dir_str == "S->C":
            hero = payload.split(b"\x00")[0].decode("ascii", errors="replace").strip("*")
            if hero:
                hero_catalog.append(hero)
        elif opcode == OP_GAMEMODE_NAME and dir_str == "S->C":
            gm = payload.split(b"\x00")[0].decode("ascii", errors="replace").strip("*")
            if gm:
                state_ref["game_mode"] = gm

    # Pass 2: Entity tracking
    for ts, dir_str, opcode, dec in messages:
        if dir_str != "S->C":
            continue
        payload = dec[2:]

        if opcode == OP_POSITION:
            decode_position(payload, players)
        elif opcode == OP_ENTITY_STAT:
            decode_entity_stat(payload, players, events, ts, start_ts)
        elif opcode == OP_ENTITY_PROP:
            decode_entity_prop(payload, players)

    file_size_kb = packets_path.stat().st_size / 1024
    winning_team, losing_team, winner_focus_entity_id = detect_match_winner(messages, players)

    return {
        "match_id": match_id[:8],
        "game_mode": state_ref["game_mode"],
        "duration_s": round(duration, 1),
        "total_messages": len(messages),
        "file_size_kb": round(file_size_kb, 1),
        "winning_team": winning_team,
        "losing_team": losing_team,
        "winner_focus_entity_id": winner_focus_entity_id,
        "players": players,
        "events": events,
        "opcode_counts": {str(k): v for k, v in opcode_counts.most_common(20)},
    }


def find_latest_match_dir() -> Optional[Path]:
    """Find the most recently modified match directory."""
    matches_dir = Path(__file__).parent / "matches"
    if not matches_dir.exists():
        return None
    dirs = [d for d in matches_dir.iterdir() if d.is_dir() and (d / "packets.bin").exists()]
    if not dirs:
        return None
    return max(dirs, key=lambda d: d.stat().st_mtime)


# ── HTTP Server ──

HTML_PATH = Path(__file__).parent / "vg_dashboard.html"


class DashboardHandler(SimpleHTTPRequestHandler):
    def do_GET(self):
        parsed = urllib.parse.urlparse(self.path)

        if parsed.path == "/" or parsed.path == "/index.html":
            self._serve_html()
        elif parsed.path == "/api/state":
            self._serve_api(parsed.query)
        else:
            self.send_error(404, "Not Found")

    def _serve_html(self):
        try:
            content = HTML_PATH.read_bytes()
            self.send_response(200)
            self.send_header("Content-Type", "text/html; charset=utf-8")
            self.send_header("Content-Length", str(len(content)))
            self.end_headers()
            self.wfile.write(content)
        except FileNotFoundError:
            self.send_error(500, "vg_dashboard.html not found")

    def _serve_api(self, query_string):
        params = urllib.parse.parse_qs(query_string)
        match_dir_str = params.get("match_dir", [None])[0]

        if match_dir_str:
            match_dir = Path(match_dir_str)
            if not match_dir.exists() and not match_dir.is_absolute():
                # Try relative to mitm/matches/
                match_dir = Path(__file__).parent / "matches" / match_dir_str
            if not match_dir.exists() and not Path(match_dir_str).is_absolute():
                # Try as bare directory name under matches/
                match_dir = Path(__file__).parent / "matches" / Path(match_dir_str).name
        else:
            match_dir = find_latest_match_dir()

        if not match_dir or not match_dir.exists():
            result = {"error": "No match directory found"}
        else:
            try:
                result = analyze_match(match_dir)
            except Exception as e:
                result = {"error": str(e)}

        body = json.dumps(result, ensure_ascii=False).encode("utf-8")
        self.send_response(200)
        self.send_header("Content-Type", "application/json; charset=utf-8")
        self.send_header("Access-Control-Allow-Origin", "*")
        self.send_header("Content-Length", str(len(body)))
        self.end_headers()
        self.wfile.write(body)

    def log_message(self, format, *args):
        # Quieter logging
        if "/api/state" not in str(args):
            SimpleHTTPRequestHandler.log_message(self, format, *args)


def main():
    parser = argparse.ArgumentParser(description="Vainglory Match Dashboard Server")
    parser.add_argument("--port", type=int, default=8888, help="HTTP port (default: 8888)")
    args = parser.parse_args()

    server = HTTPServer(("0.0.0.0", args.port), DashboardHandler)
    print(f"Dashboard server running at http://localhost:{args.port}/")
    print(f"API endpoint: http://localhost:{args.port}/api/state")

    latest = find_latest_match_dir()
    if latest:
        print(f"Latest match: {latest.name}")

    try:
        server.serve_forever()
    except KeyboardInterrupt:
        print("\nShutting down.")
        server.server_close()


if __name__ == "__main__":
    main()
