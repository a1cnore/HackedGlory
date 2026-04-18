#!/usr/bin/env python3
"""
vg_match_dashboard.py -- Vainglory decrypted match dashboard.

Decrypts and analyzes captured match traffic to produce a detailed
scoreboard with player roster, heroes, entity tracking, positions,
stat progressions, and a timeline of key events.

Usage:
  python3 vg_match_dashboard.py <match_dir>
  python3 vg_match_dashboard.py mitm/matches/20260403_213752_b98d3255

The match directory must contain:
  - match_meta.json  (with match_id)
  - packets.bin      (raw captured TCP frames)
"""

from __future__ import annotations

import argparse
import hashlib
import json
import struct
import sys
from bisect import bisect_left
from collections import Counter, defaultdict
from dataclasses import dataclass, field
from datetime import datetime, timezone
from pathlib import Path
from typing import Optional

# ── Crypto ──

SALT = bytes.fromhex(
    "467c46341a2f5f1ea778c8d74b1ca88b459d33ab9685e0e3f378e7b493322ceb"
    "4036be8b31396d3330ddaa6d7031415efe903f60be8834c53299e3e8877c3a26"
)


def _make_cipher(match_id: str):
    from Crypto.Cipher import Blowfish

    key = hashlib.md5(SALT + match_id.encode()).digest()
    return Blowfish.new(key, Blowfish.MODE_ECB)


def _swap4(b: bytes) -> bytes:
    return b[3::-1] + b[7:3:-1]


def decrypt_msg(bf, msg: bytes) -> bytes:
    out = bytearray()
    for j in range(0, len(msg) - len(msg) % 8, 8):
        out.extend(_swap4(bf.decrypt(_swap4(msg[j : j + 8]))))
    return bytes(out)


# ── Data Structures ──


@dataclass
class Player:
    slot: int = 0
    handle: str = ""
    uuid: str = ""
    entity_id: int = 0xFFFF
    team: int = 0  # 1=Blue, 2=Red
    hero: str = ""
    hero_type_id: int = 0
    snapshot_profile_id: int = 0
    snapshot_active: bool = False
    spawn_pos_x: float = 0.0
    spawn_pos_y: float = 0.0
    spawn_health: float = 0.0
    spawn_health_max: float = 0.0
    scalar_stats: dict[int, float] = field(default_factory=dict)
    extended_props: dict[tuple[int, int], tuple[int, int]] = field(default_factory=dict)
    interaction_props: dict[tuple[int, int], tuple[int, int]] = field(default_factory=dict)
    talent_offer_ids: list[int] = field(default_factory=list)
    talent_choice_id: int = 0
    hero_interaction_families: set[int] = field(default_factory=set)
    minion_interaction_families: set[int] = field(default_factory=set)
    ability_followup_scalar_types: set[int] = field(default_factory=set)
    ability_followup_prop_families: set[int] = field(default_factory=set)
    farm_reward_types: set[int] = field(default_factory=set)
    item_like_ids: set[int] = field(default_factory=set)
    xp_like_gain_events: int = 0
    gold_like_gain_events: int = 0
    kill_window_gain_events: int = 0
    assist_window_gain_events: int = 0
    level_like_events: int = 0
    estimated_level_like: int = 0
    prop_counters: dict[int, int] = field(default_factory=dict)
    gold_updates: int = 0
    xp_updates: int = 0
    cs: int = 0
    state_updates: int = 0
    # Most plausible total-gold / total-xp candidates from opcode-1086 so far.
    gold_counter: int = 0  # candidate total gold from type 0x4d
    xp_counter: int = 0  # candidate total xp from type 0x3e
    # Stat snapshots from opcode 1053 (byte[8] = stat type, float = value)
    move_speed: float = 0.0  # stat_type=3
    stat_0: float = 0.0  # stat_type=0 (attack-related)
    stat_2: float = 0.0  # stat_type=2
    stat_6: float = 0.0  # stat_type=6 (HP delta)
    stat_8: float = 0.0  # stat_type=8 (cooldown/AS)
    # Latest position from opcode 1070
    pos_x: float = 0.0
    pos_y: float = 0.0
    pos_updates: int = 0
    # State from opcode 1067
    last_state: int = 0
    recent_damage_ts: float = 0.0
    # Death tracking
    deaths: int = 0
    kills: int = 0
    assists: int = 0


@dataclass
class MatchState:
    match_id: str = ""
    game_mode: str = ""
    players_per_team: int = 3
    duration: float = 0.0
    start_ts: float = 0.0
    end_ts: float = 0.0
    players: list[Player] = field(default_factory=list)
    # Hero catalog from opcode 1107 (index -> name)
    hero_catalog: list[str] = field(default_factory=list)
    # Opcode statistics
    opcode_counts: Counter = field(default_factory=Counter)
    total_messages: int = 0
    # Timeline events
    events: list[tuple[float, str]] = field(default_factory=list)
    activated_entities: set[int] = field(default_factory=set)
    winning_team: int = 0
    losing_team: int = 0
    winner_focus_entity_id: int = 0xFFFFFFFF


# ── Packet Parser ──


def parse_packets(packets_bin: Path, match_id: str) -> list[tuple[float, str, int, bytes]]:
    """Parse packets.bin and decrypt all messages.

    Each TCP frame in packets.bin is stored as:
      [8B BE double timestamp][1B direction (0=C->S, 1=S->C)][4B BE u32 length][payload]

    Each frame payload may contain multiple game messages, each prefixed with a
    2-byte BE length header: [2B msg_len][msg_data of msg_len bytes].
    The msg_data is Blowfish ECB encrypted (with LE word swap).

    Returns list of (timestamp, direction, opcode, decrypted_bytes).
    """
    bf = _make_cipher(match_id)
    data = packets_bin.read_bytes()

    messages = []
    offset = 0
    while offset + 13 <= len(data):
        ts = struct.unpack("!d", data[offset : offset + 8])[0]
        direction = data[offset + 8]
        sz = struct.unpack("!I", data[offset + 9 : offset + 13])[0]
        if offset + 13 + sz > len(data):
            break

        raw = data[offset + 13 : offset + 13 + sz]
        dir_str = "C->S" if direction == 0 else "S->C"

        # Split frame into individual [2B len][data] sub-messages
        pos = 0
        while pos + 2 <= len(raw):
            msg_len = struct.unpack(">H", raw[pos : pos + 2])[0]
            if msg_len == 0 or pos + 2 + msg_len > len(raw):
                break
            msg_data = raw[pos + 2 : pos + 2 + msg_len]
            if len(msg_data) >= 8:
                dec = decrypt_msg(bf, msg_data)
                if len(dec) >= 2:
                    opcode = struct.unpack(">H", dec[0:2])[0]
                    messages.append((ts, dir_str, opcode, dec))
            elif len(msg_data) >= 2:
                # Small unencrypted messages (< 8 bytes can't be decrypted)
                opcode = struct.unpack(">H", msg_data[0:2])[0]
                messages.append((ts, dir_str, opcode, msg_data))
            pos += 2 + msg_len

        offset += 13 + sz

    return messages


# ── Protocol Decoders ──

# Opcode constants
OP_UUID = 1000  # Player UUID announcement (C->S first, then S->C for others)
OP_GAME_SETUP = 1001  # Game setup info
OP_HANDLE = 1005  # Player handle announcement
OP_PLAYER_INFO = 1006  # Detailed player info with entity mapping
OP_ENTITY_SPAWN = 1011  # Per-entity spawn/setup blob
OP_HERO_CATALOG = 1107  # Hero/skin name definitions
OP_HERO_ASSIGN = 1108  # Hero assignments + game mode
OP_SNAPSHOT = 1114  # Periodic scoreboard snapshots (6x161B records)
OP_SNAPSHOT_PRE = 1113  # Earlier snapshot variant seen in shorter / pre-match captures
OP_GAMEMODE_NAME = 1135  # Game mode name
OP_ENTITY_SCALAR = 1052  # Entity scalar/stat record (24B): [2B 0][2B eid][...][4B float][1B type]
OP_ENTITY_STAT = 1053  # Entity stat updates (16B): [2B 0][2B eid][4B float][1B type][5B]
OP_POSITION = 1070  # Entity position (16B): [2B 0][2B eid][4B X][4B Y][2B 0]
OP_MATCH_RESULT_BURST = 1077  # Late 7-message end-of-match burst; target team looks like winner
OP_ENTITY_PROP = 1086  # Entity property (24B): [2B 0][2B eid][...][1B type][...]
OP_ENTITY_PROP_EXT = 1087  # Entity extended property stream (40B-ish) with typed u16 codes
OP_ENTITY_STATE = 1067  # Entity state (16B): [2B 0][2B eid][1B idx][1B state][...]
OP_MISC_1016 = 1016  # Per-entity float updates

# Snapshot record constants
SNAP_RECORD_SIZE = 161
SNAP_RECORD_START = 1  # payload offset of first record
SNAP_HANDLE_OFFSET = 24  # within record
SNAP_UUID_OFFSET = 104  # within record
SNAP_ENTITY_OFFSET = 18  # within record
SNAP_TEAM_OFFSET = 15  # within record (1=Blue, 2=Red)
SNAP_SLOT_OFFSET = 8  # within record

# Hero assignment constants (opcode 1108)
HERO_REC_OFFSET = 168  # first hero record in payload
HERO_REC_SIZE = 168
HERO_NAME_OFFSET = 33  # within record

SCOREBOARD_COUNTER_MAX = 100_000
CS_TARGET_DEDUPE_SECONDS = 3.0


def decode_prop_counter_total(payload: bytes) -> int:
    return struct.unpack(">I", payload[9:13])[0] * 256 + payload[13]


def is_plausible_scoreboard_counter(value: int) -> bool:
    return 0 < value <= SCOREBOARD_COUNTER_MAX


def decode_snapshot(payload: bytes, state: MatchState, ts: float | None = None):
    """Decode opcode 1114 snapshot to extract/update player roster."""
    if len(payload) < SNAP_RECORD_START + 6 * SNAP_RECORD_SIZE:
        return

    for slot in range(6):
        rec_off = SNAP_RECORD_START + slot * SNAP_RECORD_SIZE
        rec = payload[rec_off : rec_off + SNAP_RECORD_SIZE]
        if len(rec) < SNAP_RECORD_SIZE:
            break

        handle = rec[SNAP_HANDLE_OFFSET : SNAP_HANDLE_OFFSET + 32]
        handle = handle.split(b"\x00")[0].decode("ascii", errors="replace")

        uuid_raw = rec[SNAP_UUID_OFFSET : SNAP_UUID_OFFSET + 36]
        uuid = uuid_raw.split(b"\x00")[0].decode("ascii", errors="replace")

        entity_id = struct.unpack(">H", rec[SNAP_ENTITY_OFFSET : SNAP_ENTITY_OFFSET + 2])[0]
        team = rec[SNAP_TEAM_OFFSET]
        slot_idx = rec[SNAP_SLOT_OFFSET]
        active_flag = rec[9] == 1 and rec[10] == 1

        # Gold-like counter at rec[16:18]
        hero_type_id = struct.unpack(">H", rec[16:18])[0]
        profile_id = struct.unpack(">I", rec[20:24])[0]

        # Update or create player
        if slot < len(state.players):
            p = state.players[slot]
        else:
            p = Player(slot=slot)
            state.players.append(p)

        p.slot = slot_idx if slot_idx < 6 else slot
        p.handle = handle or p.handle
        p.uuid = uuid if uuid and "-" in uuid else p.uuid
        if entity_id != 0xFFFF:
            p.entity_id = entity_id
        if team in (1, 2):
            p.team = team
        if hero_type_id != 0xFFFF and hero_type_id != 0:
            p.hero_type_id = hero_type_id
        if profile_id != 0:
            p.snapshot_profile_id = profile_id
        if active_flag:
            p.snapshot_active = True
            if ts is not None and entity_id not in state.activated_entities:
                state.activated_entities.add(entity_id)
                name = p.handle or f"Entity {entity_id}"
                hero_suffix = f" ({p.hero})" if p.hero else ""
                state.events.append((ts - state.start_ts, f"{name}{hero_suffix} became active"))


def decode_hero_assignments(payload: bytes, state: MatchState):
    """Decode opcode 1108 to extract game mode.

    The 1108 sub-message (72B) contains the game mode string.
    Hero picks in ARAL are server-assigned and not transmitted as plaintext
    hero names in any known sub-message.  The hero catalog (opcode 1107)
    only contains the full alphabetical list of all heroes and skins.
    """
    if len(payload) < 5:
        return

    state.players_per_team = payload[3]

    # Game mode at offset 5 (after 00 00 00 03 2a)
    gm_raw = payload[5:]
    gm = gm_raw.split(b"\x00")[0].decode("ascii", errors="replace").strip("*")
    if gm:
        state.game_mode = gm


def decode_player_info(payload: bytes, state: MatchState):
    """Decode opcode 1006 to extract handle-entity-uuid mapping.

    Each 1006 sub-message is 224B (222B payload after opcode):
      [44B handle (null-padded)][20B zeros][36B UUID][62B zeros][2B entity_id][58B data]

    The 1006 messages are sent once per player in slot order (0-5), so the
    first 1006 message is slot 0, second is slot 1, etc.
    """
    if len(payload) < 164:
        return

    handle = payload[:44].split(b"\x00")[0].decode("ascii", errors="replace")
    uuid = payload[64:100].split(b"\x00")[0].decode("ascii", errors="replace")
    entity_id = struct.unpack(">H", payload[162:164])[0]

    if not handle or entity_id < 1000 or entity_id > 2000:
        return

    # Try to update existing player by entity_id
    for p in state.players:
        if p.entity_id == entity_id:
            p.handle = handle
            if uuid and "-" in uuid:
                p.uuid = uuid
            # Extract team from payload[210] (1=Blue, 2=Red)
            if len(payload) > 210 and payload[210] in (1, 2):
                p.team = payload[210]
            return

    # If not found, the 1006 messages arrive in slot order.
    # Assign to the next empty slot.
    slot = len([p for p in state.players if p.handle])
    if slot < len(state.players):
        p = state.players[slot]
    else:
        p = Player(slot=slot)
        state.players.append(p)

    p.handle = handle
    p.entity_id = entity_id
    if uuid and "-" in uuid:
        p.uuid = uuid
    if len(payload) > 210 and payload[210] in (1, 2):
        p.team = payload[210]


def decode_entity_spawn(payload: bytes, state: MatchState):
    """Decode opcode 1011 spawn/setup records for hero entities."""
    if len(payload) < 120:
        return

    entity_id = struct.unpack(">H", payload[10:12])[0]
    p = _get_player_by_entity(state, entity_id)
    if not p:
        return

    spawn_team = struct.unpack(">I", payload[12:16])[0]
    if spawn_team in (1, 2):
        p.team = spawn_team

    p.hero_type_id = struct.unpack(">I", payload[0:4])[0]

    spawn_x = struct.unpack(">f", payload[18:22])[0]
    spawn_y = struct.unpack(">f", payload[22:26])[0]
    if abs(spawn_x) <= 200:
        p.spawn_pos_x = spawn_x
    if abs(spawn_y) <= 200:
        p.spawn_pos_y = spawn_y

    spawn_health = struct.unpack(">f", payload[138:142])[0]
    spawn_health_max = struct.unpack(">f", payload[142:146])[0]
    if 0 < spawn_health <= 5000:
        p.spawn_health = spawn_health
    if 0 < spawn_health_max <= 5000:
        p.spawn_health_max = spawn_health_max


def _update_player_by_entity(state: MatchState, entity_id: int, **kwargs):
    """Find player by entity_id and update fields."""
    for p in state.players:
        if p.entity_id == entity_id:
            for k, v in kwargs.items():
                if v:
                    setattr(p, k, v)
            return


def _get_player_by_entity(state: MatchState, entity_id: int) -> Optional[Player]:
    for p in state.players:
        if p.entity_id == entity_id:
            return p
    return None


def detect_match_winner(
    messages: list[tuple[float, str, int, bytes]], state: MatchState
):
    """Infer winner from the late 1077 post-match burst.

    Complete ended matches often emit 7 consecutive opcode-1077 messages that all
    target the same player entity. The best current interpretation is that this
    target belongs to the winning side's post-match focus / summary card.
    """
    expected_sources = {p.entity_id for p in state.players if p.team in (1, 2)}
    if len(expected_sources) < 6:
        return

    current_group: list[tuple[float, int, int, int]] = []
    best_group: list[tuple[float, int, int, int]] = []

    def maybe_commit(group: list[tuple[float, int, int, int]]):
        nonlocal best_group
        if len(group) < 7:
            return
        player_sources = {source_id for _, source_id, _, _ in group if source_id != 0xFFFFFFFF}
        has_sentinel = any(source_id == 0xFFFFFFFF for _, source_id, _, _ in group)
        if player_sources == expected_sources and has_sentinel:
            best_group = group[:]

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

        if (
            current_group
            and (
                target_id != current_group[0][2]
                or winner_team_hint != current_group[0][3]
                or ts - current_group[-1][0] > 0.25
            )
        ):
            maybe_commit(current_group)
            current_group = []

        current_group.append((ts, source_id, target_id, winner_team_hint))

    maybe_commit(current_group)
    if not best_group:
        return

    _, _, target_id, winner_team_hint = best_group[0]
    target_player = _get_player_by_entity(state, target_id)

    winning_team = 0
    if target_player and target_player.team in (1, 2):
        winning_team = target_player.team
        if winner_team_hint in (1, 2) and winner_team_hint != winning_team:
            state.events.append(
                (
                    best_group[-1][0] - state.start_ts,
                    f"winner hint mismatch: burst targeted {target_player.handle or f'Entity {target_id}'} on team {winning_team} but payload hinted team {winner_team_hint}",
                )
            )
    elif winner_team_hint in (1, 2):
        winning_team = winner_team_hint

    if winning_team not in (1, 2):
        return

    state.winning_team = winning_team
    state.losing_team = 1 if winning_team == 2 else 2
    state.winner_focus_entity_id = target_id

    focus_name = (
        target_player.handle if target_player and target_player.handle else f"Entity {target_id}"
    )
    team_name = "Blue" if state.winning_team == 1 else "Red"
    state.events.append(
        (
            best_group[-1][0] - state.start_ts,
            f"Team {team_name} win detected from end burst targeting winning-side {focus_name}",
        )
    )


def decode_position(payload: bytes, state: MatchState):
    """Decode opcode 1070: [2B 0][2B entity_id][4B BE float X][4B BE float Y][2B 0]."""
    if len(payload) < 12:
        return
    entity_id = struct.unpack(">H", payload[2:4])[0]
    p = _get_player_by_entity(state, entity_id)
    if p:
        p.pos_x = struct.unpack(">f", payload[4:8])[0]
        p.pos_y = struct.unpack(">f", payload[8:12])[0]
        p.pos_updates += 1


def decode_entity_scalar(payload: bytes, state: MatchState):
    """Decode opcode 1052 as a per-entity typed scalar stream."""
    if len(payload) < 13:
        return

    entity_id = struct.unpack(">H", payload[2:4])[0]
    p = _get_player_by_entity(state, entity_id)
    if not p:
        return

    scalar_value = struct.unpack(">f", payload[8:12])[0]
    scalar_type = payload[12]
    p.scalar_stats[scalar_type] = scalar_value


def decode_entity_stat(payload: bytes, state: MatchState, ts: float):
    """Decode opcode 1053: [2B 0][2B entity][4B BE float][1B stat_type][5B rest]."""
    if len(payload) < 9:
        return
    entity_id = struct.unpack(">H", payload[2:4])[0]
    p = _get_player_by_entity(state, entity_id)
    if not p:
        return

    fv = struct.unpack(">f", payload[4:8])[0]
    stat_type = payload[8]

    if stat_type == 0:
        p.stat_0 = fv  # Attack-related stat
    elif stat_type == 2:
        p.stat_2 = fv
    elif stat_type == 3:
        if fv > 0:
            p.move_speed = fv  # Movement speed (2.5 base)
    elif stat_type == 6:
        # HP delta -- large negative = damage, 15.0 = base regen, positive bursts = healing
        if fv < -500 and p.stat_6 >= -500:
            # Significant damage spike -- possible death
            elapsed = ts - state.start_ts
            name = p.handle or f"Entity {entity_id}"
            hero_suffix = f" ({p.hero})" if p.hero else ""
            state.events.append(
                (elapsed, f"{name}{hero_suffix} took massive hit: {fv:.0f}")
            )
            p.recent_damage_ts = ts
        p.stat_6 = fv
    elif stat_type == 8:
        p.stat_8 = fv  # Cooldown / attack speed


def decode_entity_state(payload: bytes, state: MatchState, ts: float):
    """Decode opcode 1067: [2B 0][2B eid][1B idx][1B state][...]."""
    if len(payload) < 6:
        return

    entity_id = struct.unpack(">H", payload[2:4])[0]
    p = _get_player_by_entity(state, entity_id)
    if not p:
        return

    state_index = payload[4]
    state_value = payload[5]
    p.state_updates += 1

    if state_index == 0 and state_value == 3 and p.last_state != 3:
        p.deaths += 1
        elapsed = ts - state.start_ts
        name = p.handle or f"Entity {entity_id}"
        hero_suffix = f" ({p.hero})" if p.hero else ""
        state.events.append((elapsed, f"{name}{hero_suffix} death state detected"))

    if state_index == 0 and state_value == 1 and p.last_state == 3:
        elapsed = ts - state.start_ts
        name = p.handle or f"Entity {entity_id}"
        hero_suffix = f" ({p.hero})" if p.hero else ""
        state.events.append((elapsed, f"{name}{hero_suffix} respawn state detected"))

    if state_index == 0:
        p.last_state = state_value

    if state_value == 1:
        p.recent_damage_ts = 0.0


def decode_entity_prop_ext(payload: bytes, state: MatchState):
    """Decode opcode 1087 as a family/target keyed extended-property stream."""
    if len(payload) < 32:
        return

    entity_id = struct.unpack(">H", payload[2:4])[0]
    p = _get_player_by_entity(state, entity_id)
    if not p:
        return

    prop_family = payload[8]
    target_id = struct.unpack(">H", payload[6:8])[0]
    prop_value = struct.unpack(">H", payload[14:16])[0]
    aux_value = struct.unpack(">I", payload[28:32])[0]

    if target_id in (0, entity_id):
        p.extended_props[(prop_family, target_id)] = (prop_value, aux_value)
    else:
        p.interaction_props[(prop_family, target_id)] = (prop_value, aux_value)


def detect_interaction_timeline_events(
    messages: list[tuple[float, str, int, bytes]], state: MatchState
):
    """Emit first-seen interaction events from opcode-1087 target-directed updates."""
    seen_hero_like: set[int] = set()
    seen_minion_like: set[int] = set()

    for ts, dir_str, opcode, dec in messages:
        if dir_str != "S->C" or opcode != OP_ENTITY_PROP_EXT:
            continue

        payload = dec[2:]
        if len(payload) < 16:
            continue

        entity_id = struct.unpack(">H", payload[2:4])[0]
        target_id = struct.unpack(">H", payload[6:8])[0]
        if entity_id not in range(1500, 1506):
            continue

        source_player = _get_player_by_entity(state, entity_id)
        name = source_player.handle if source_player and source_player.handle else f"Entity {entity_id}"

        if target_id in range(1500, 1506) and target_id != entity_id:
            if source_player:
                source_player.hero_interaction_families.add(payload[8])
            if entity_id not in seen_hero_like:
                seen_hero_like.add(entity_id)
                target_player = _get_player_by_entity(state, target_id)
                target_name = (
                    target_player.handle if target_player and target_player.handle else f"Entity {target_id}"
                )
                state.events.append(
                    (
                        ts - state.start_ts,
                        f"{name} ability-like hero interaction family 0x{payload[8]:02x} targeted {target_name}",
                    )
                )
            continue

        if target_id not in range(2000, 2100):
            continue

        if source_player:
            source_player.minion_interaction_families.add(payload[8])
        if entity_id in seen_minion_like:
            continue

        seen_minion_like.add(entity_id)
        state.events.append(
            (
                ts - state.start_ts,
                f"{name} minion-like interaction family 0x{payload[8]:02x} targeted entity {target_id}",
            )
        )


def detect_kill_like_interactions(
    messages: list[tuple[float, str, int, bytes]], state: MatchState
):
    """Attribute one tentative killer per death from combat or reward windows."""
    counter_delta_events: list[tuple[float, int, int]] = []
    last_counter: dict[int, dict[int, int]] = defaultdict(dict)

    for ts, dir_str, opcode, dec in messages:
        if dir_str != "S->C" or opcode != OP_ENTITY_PROP:
            continue

        payload = dec[2:]
        if len(payload) < 14:
            continue

        entity_id = struct.unpack(">H", payload[2:4])[0]
        prop_type = payload[8]
        if entity_id not in range(1500, 1506) or prop_type not in (0x3E, 0x4D):
            continue

        combined = decode_prop_counter_total(payload)
        if not is_plausible_scoreboard_counter(combined):
            continue

        previous = last_counter[entity_id].get(prop_type)
        last_counter[entity_id][prop_type] = combined
        if previous is None or combined <= previous:
            continue

        delta = combined - previous
        if delta > 4096:
            continue
        counter_delta_events.append((ts, entity_id, delta))

    counter_delta_times = [ts for ts, _, _ in counter_delta_events]
    last_death_ts: dict[int, float] = {}

    for i, (ts, dir_str, opcode, dec) in enumerate(messages):
        if dir_str != "S->C" or opcode != OP_ENTITY_STATE:
            continue

        payload = dec[2:]
        if len(payload) < 6 or payload[4] != 0 or payload[5] != 3:
            continue

        dead_entity = struct.unpack(">H", payload[2:4])[0]
        if dead_entity not in range(1500, 1506):
            continue
        if ts - last_death_ts.get(dead_entity, float("-inf")) < 1.0:
            continue
        last_death_ts[dead_entity] = ts

        killer_id = None
        reason = ""
        latest_by_source: dict[int, tuple[float, int]] = {}
        for ts2, dir_str2, opcode2, dec2 in reversed(messages[:i]):
            if ts - ts2 > 1.0:
                break
            if dir_str2 != "S->C" or opcode2 != OP_ENTITY_PROP_EXT:
                continue

            payload2 = dec2[2:]
            if len(payload2) < 16:
                continue

            source_id = struct.unpack(">H", payload2[2:4])[0]
            target_id = struct.unpack(">H", payload2[6:8])[0]
            if (
                source_id not in range(1500, 1506)
                or target_id != dead_entity
                or source_id == dead_entity
            ):
                continue
            if source_id not in latest_by_source:
                latest_by_source[source_id] = (ts2, payload2[8])

        if latest_by_source:
            killer_id = max(latest_by_source.items(), key=lambda item: item[1][0])[0]
            _, family = latest_by_source[killer_id]
            reason = f"family 0x{family:02x}"
        else:
            reward_totals: dict[int, int] = defaultdict(int)
            reward_idx = bisect_left(counter_delta_times, ts)
            while (
                reward_idx < len(counter_delta_events)
                and counter_delta_events[reward_idx][0] - ts <= 0.5
            ):
                _, source_id, delta = counter_delta_events[reward_idx]
                if source_id != dead_entity:
                    reward_totals[source_id] += delta
                reward_idx += 1
            if len(reward_totals) == 1:
                killer_id = next(iter(reward_totals))
                reason = "reward window"
            elif len(reward_totals) >= 2:
                ranked = sorted(
                    reward_totals.items(),
                    key=lambda item: (item[1], -item[0]),
                    reverse=True,
                )
                if ranked[0][1] >= ranked[1][1] * 2:
                    killer_id = ranked[0][0]
                    reason = "dominant reward window"

        if killer_id is None:
            continue

        source_player = _get_player_by_entity(state, killer_id)
        target_player = _get_player_by_entity(state, dead_entity)
        if source_player:
            source_player.kills += 1
        source_name = (
            source_player.handle if source_player and source_player.handle else f"Entity {killer_id}"
        )
        target_name = (
            target_player.handle if target_player and target_player.handle else f"Entity {dead_entity}"
        )
        state.events.append(
            (
                ts - state.start_ts,
                f"{source_name} kill on {target_name} via {reason}",
            )
        )


def detect_assist_like_interactions(
    messages: list[tuple[float, str, int, bytes]], state: MatchState
):
    """Find death windows with multiple distinct hero-target interaction sources."""
    last_death_ts: dict[int, float] = {}

    for i, (ts, dir_str, opcode, dec) in enumerate(messages):
        if dir_str != "S->C" or opcode != OP_ENTITY_STATE:
            continue

        payload = dec[2:]
        if len(payload) < 6 or payload[4] != 0 or payload[5] != 3:
            continue

        dead_entity = struct.unpack(">H", payload[2:4])[0]
        if dead_entity not in range(1500, 1506):
            continue
        if ts - last_death_ts.get(dead_entity, float("-inf")) < 1.0:
            continue
        last_death_ts[dead_entity] = ts

        sources: set[int] = set()
        for ts2, dir_str2, opcode2, dec2 in reversed(messages[:i]):
            if ts - ts2 > 1.0:
                break
            if dir_str2 != "S->C" or opcode2 != OP_ENTITY_PROP_EXT:
                continue

            payload2 = dec2[2:]
            if len(payload2) < 16:
                continue
            source_id = struct.unpack(">H", payload2[2:4])[0]
            target_id = struct.unpack(">H", payload2[6:8])[0]
            if source_id in range(1500, 1506) and target_id == dead_entity and source_id != dead_entity:
                sources.add(source_id)

        if len(sources) < 2:
            continue

        dead_player = _get_player_by_entity(state, dead_entity)
        name = dead_player.handle if dead_player and dead_player.handle else f"Entity {dead_entity}"
        state.events.append(
            (
                ts - state.start_ts,
                f"assist-like window on {name} involved {len(sources)} attackers",
            )
        )


def detect_talent_like_choices(
    messages: list[tuple[float, str, int, bytes]], state: MatchState
):
    """Infer ARAL talent-like offer/choice IDs from early self-targeted 1087 family 0xbc."""
    if "aral" not in state.game_mode.lower():
        return

    constants = {45, 121, 122, 123, 173, 174, 254, 255, 273}
    by_entity: dict[int, list[tuple[float, int]]] = defaultdict(list)

    for ts, dir_str, opcode, dec in messages:
        if dir_str != "S->C" or opcode != OP_ENTITY_PROP_EXT:
            continue

        payload = dec[2:]
        if len(payload) < 16:
            continue

        entity_id = struct.unpack(">H", payload[2:4])[0]
        target_id = struct.unpack(">H", payload[6:8])[0]
        if entity_id not in range(1500, 1506) or target_id != entity_id or payload[8] != 0xBC:
            continue

        value = struct.unpack(">H", payload[14:16])[0]
        if value not in constants:
            by_entity[entity_id].append((ts, value))

    for entity_id, seq in by_entity.items():
        player = _get_player_by_entity(state, entity_id)
        if not player or not seq:
            continue

        offers: list[int] = []
        choice_id = 0
        seen_offer_phase = True
        for _, value in seq:
            if seen_offer_phase and len(offers) < 3 and value not in offers:
                offers.append(value)
                continue
            seen_offer_phase = False
            if value not in offers:
                choice_id = value
                break

        if not choice_id:
            distinct = []
            for _, value in seq:
                if value not in distinct:
                    distinct.append(value)
            if len(distinct) == 1:
                choice_id = distinct[0]
            elif len(distinct) > 1:
                choice_id = distinct[-1]

        player.talent_offer_ids = offers
        player.talent_choice_id = choice_id

        if choice_id:
            state.events.append(
                (
                    seq[0][0] - state.start_ts,
                    f"{player.handle or f'Entity {entity_id}'} talent-like choice {choice_id}",
                )
            )


def detect_ability_followup_channels(
    messages: list[tuple[float, str, int, bytes]], state: MatchState
):
    """Infer recurring self-state channels that follow hero-target interactions."""
    scalar_counts_by_entity: dict[int, Counter[int]] = defaultdict(Counter)
    prop_counts_by_entity: dict[int, Counter[int]] = defaultdict(Counter)

    seen: set[tuple[int, int, int, int]] = set()
    for i, (ts, dir_str, opcode, dec) in enumerate(messages):
        if dir_str != "S->C" or opcode != OP_ENTITY_PROP_EXT:
            continue

        payload = dec[2:]
        if len(payload) < 16:
            continue

        source_id = struct.unpack(">H", payload[2:4])[0]
        target_id = struct.unpack(">H", payload[6:8])[0]
        if source_id not in range(1500, 1506) or target_id not in range(1500, 1506) or source_id == target_id:
            continue

        key = (source_id, target_id, int(ts * 5), payload[8])
        if key in seen:
            continue
        seen.add(key)

        seen_scalar_types: set[int] = set()
        seen_prop_families: set[int] = set()
        for ts2, dir_str2, opcode2, dec2 in messages[i + 1 :]:
            if ts2 - ts > 0.25:
                break
            if dir_str2 != "S->C":
                continue

            payload2 = dec2[2:]
            if opcode2 == OP_ENTITY_SCALAR and len(payload2) >= 13:
                entity_id = struct.unpack(">H", payload2[2:4])[0]
                if entity_id == source_id:
                    seen_scalar_types.add(payload2[12])
            elif opcode2 == OP_ENTITY_PROP_EXT and len(payload2) >= 16:
                entity_id = struct.unpack(">H", payload2[2:4])[0]
                target_id2 = struct.unpack(">H", payload2[6:8])[0]
                if entity_id == source_id and target_id2 == source_id:
                    seen_prop_families.add(payload2[8])

        for scalar_type in seen_scalar_types:
            scalar_counts_by_entity[source_id][scalar_type] += 1
        for prop_family in seen_prop_families:
            prop_counts_by_entity[source_id][prop_family] += 1

    for entity_id in set(scalar_counts_by_entity) | set(prop_counts_by_entity):
        player = _get_player_by_entity(state, entity_id)
        if not player:
            continue

        scalar_types = {
            scalar_type
            for scalar_type, count in scalar_counts_by_entity[entity_id].items()
            if count >= 3
        }
        prop_families = {
            prop_family
            for prop_family, count in prop_counts_by_entity[entity_id].items()
            if count >= 3
        }
        if not scalar_types and not prop_families:
            continue

        player.ability_followup_scalar_types.update(scalar_types)
        player.ability_followup_prop_families.update(prop_families)

        parts = []
        if scalar_types:
            parts.append(
                f"1052 types {', '.join(str(t) for t in sorted(scalar_types))}"
            )
        if prop_families:
            parts.append(
                f"1087 families {', '.join(f'0x{t:02x}' for t in sorted(prop_families))}"
            )
        state.events.append(
            (
                0.0,
                f"{player.handle or f'Entity {entity_id}'} cooldown-like followup channels {'; '.join(parts)}",
            )
        )


def detect_resource_gain_events(
    messages: list[tuple[float, str, int, bytes]], state: MatchState
):
    """Emit raw total-XP / total-gold gain windows around farm and kill events."""
    last_counter: dict[int, dict[int, int]] = defaultdict(dict)
    active_farm_windows: list[dict] = []
    active_kill_windows: list[dict] = []
    recent_hero_interactions: list[tuple[float, int, int]] = []
    last_death_ts: dict[int, float] = {}
    last_cs_target_ts: dict[tuple[int, int], float] = defaultdict(lambda: float("-inf"))

    for ts, dir_str, opcode, dec in messages:
        if dir_str != "S->C":
            continue

        payload = dec[2:]
        recent_hero_interactions = [
            item for item in recent_hero_interactions if ts - item[0] <= 1.0
        ]
        active_farm_windows = [w for w in active_farm_windows if ts <= w["expires"]]
        active_kill_windows = [w for w in active_kill_windows if ts <= w["expires"]]

        if opcode == OP_ENTITY_PROP_EXT and len(payload) >= 16:
            source_id = struct.unpack(">H", payload[2:4])[0]
            target_id = struct.unpack(">H", payload[6:8])[0]
            if source_id in range(1500, 1506):
                if target_id in range(1500, 1506) and target_id != source_id:
                    recent_hero_interactions.append((ts, source_id, target_id))
                elif target_id in range(2000, 2100):
                    active_farm_windows.append(
                        {
                            "source": source_id,
                            "target": target_id,
                            "expires": ts + 0.25,
                            "emitted": set(),
                            "counted_cs": False,
                        }
                    )

        elif opcode == OP_ENTITY_STATE and len(payload) >= 6 and payload[4] == 0 and payload[5] == 3:
            dead_entity = struct.unpack(">H", payload[2:4])[0]
            if dead_entity in range(1500, 1506) and ts - last_death_ts.get(dead_entity, float("-inf")) >= 1.0:
                last_death_ts[dead_entity] = ts
                latest_by_source: dict[int, float] = {}
                for interaction_ts, source_id, target_id in recent_hero_interactions:
                    if target_id == dead_entity and source_id != dead_entity:
                        latest_by_source[source_id] = interaction_ts
                if latest_by_source:
                    killer = max(latest_by_source.items(), key=lambda item: item[1])[0]
                    active_kill_windows.append(
                        {
                            "dead": dead_entity,
                            "killer": killer,
                            "attackers": set(latest_by_source),
                            "expires": ts + 0.25,
                            "emitted": set(),
                        }
                    )

        elif opcode == OP_ENTITY_PROP and len(payload) >= 14:
            entity_id = struct.unpack(">H", payload[2:4])[0]
            prop_type = payload[8]
            if entity_id not in range(1500, 1506) or prop_type not in (0x3E, 0x4D):
                continue

            combined = decode_prop_counter_total(payload)
            if not is_plausible_scoreboard_counter(combined):
                continue

            previous = last_counter[entity_id].get(prop_type)
            last_counter[entity_id][prop_type] = combined
            if previous is None or combined <= previous:
                continue

            delta = combined - previous
            if delta > 4096:
                continue

            channel_name = "xp" if prop_type == 0x3E else "gold"
            player = _get_player_by_entity(state, entity_id)
            name = player.handle if player and player.handle else f"Entity {entity_id}"

            for window in active_farm_windows:
                if window["source"] != entity_id or prop_type in window["emitted"]:
                    continue
                window["emitted"].add(prop_type)
                if player:
                    if prop_type == 0x3E:
                        player.xp_like_gain_events += 1
                    else:
                        player.gold_like_gain_events += 1
                    if not window["counted_cs"]:
                        cs_key = (entity_id, window["target"])
                        if ts - last_cs_target_ts[cs_key] >= CS_TARGET_DEDUPE_SECONDS:
                            player.cs += 1
                            last_cs_target_ts[cs_key] = ts
                        window["counted_cs"] = True
                state.events.append(
                    (
                        ts - state.start_ts,
                        f"{name} farm {channel_name} gain +{delta}",
                    )
                )
                break

            for window in active_kill_windows:
                role = None
                if entity_id == window["killer"]:
                    role = "kill-window"
                elif entity_id in window["attackers"]:
                    role = "assist-window"
                if role is None or (role, prop_type) in window["emitted"]:
                    continue
                window["emitted"].add((role, prop_type))
                if player:
                    if prop_type == 0x3E:
                        player.xp_like_gain_events += 1
                    else:
                        player.gold_like_gain_events += 1
                    if role == "kill-window":
                        player.kill_window_gain_events += 1
                    else:
                        player.assist_window_gain_events += 1
                state.events.append(
                    (
                        ts - state.start_ts,
                        f"{name} {role} {channel_name} gain +{delta}",
                    )
                )


def detect_level_like_milestones(
    messages: list[tuple[float, str, int, bytes]], state: MatchState
):
    """Infer level-like milestones from xp-like updates plus clustered stat changes."""
    prev_stats: dict[int, dict[int, float]] = defaultdict(dict)
    last_level_ts: dict[int, float] = defaultdict(lambda: float("-inf"))
    base_level = 4 if "aral" in state.game_mode.lower() else 1

    for i, (ts, dir_str, opcode, dec) in enumerate(messages):
        if dir_str != "S->C":
            continue

        payload = dec[2:]
        if opcode == OP_ENTITY_PROP and len(payload) >= 14 and payload[8] in (0x3E, 0x42):
            entity_id = struct.unpack(">H", payload[2:4])[0]
            player = _get_player_by_entity(state, entity_id)
            if (
                entity_id not in range(1500, 1506)
                or ts - last_level_ts[entity_id] < 5.0
                or not is_plausible_scoreboard_counter(decode_prop_counter_total(payload))
            ):
                continue
            if payload[8] == 0x42 and player and player.level_like_events >= 1:
                continue

            lookahead_seconds = 0.35 if payload[8] == 0x42 else 0.25
            lookahead_messages = 80 if payload[8] == 0x42 else 60
            changed_types: set[int] = set()
            for ts2, dir_str2, opcode2, dec2 in messages[i + 1 : i + lookahead_messages]:
                if ts2 - ts > lookahead_seconds:
                    break
                if dir_str2 != "S->C" or opcode2 != OP_ENTITY_STAT:
                    continue

                payload2 = dec2[2:]
                if len(payload2) < 9 or struct.unpack(">H", payload2[2:4])[0] != entity_id:
                    continue

                stat_type = payload2[8]
                stat_value = struct.unpack(">f", payload2[4:8])[0]
                old_value = prev_stats[entity_id].get(stat_type)
                if old_value is not None and stat_value == stat_value:
                    if stat_type in (0, 2, 3, 8) and 0.75 < abs(stat_value - old_value) < 100:
                        changed_types.add(stat_type)
                    elif stat_type in (13, 14, 15) and abs(stat_value - old_value) > 0.4:
                        changed_types.add(stat_type)
                prev_stats[entity_id][stat_type] = stat_value

            if len(changed_types) >= 2:
                player = _get_player_by_entity(state, entity_id)
                if player:
                    player.level_like_events += 1
                    player.estimated_level_like = base_level + player.level_like_events
                    name = player.handle or f"Entity {entity_id}"
                    state.events.append(
                        (
                            ts - state.start_ts,
                            f"{name} level-like milestone -> approx level {player.estimated_level_like}",
                        )
                    )
                last_level_ts[entity_id] = ts

        elif opcode == OP_ENTITY_STAT and len(payload) >= 9:
            entity_id = struct.unpack(">H", payload[2:4])[0]
            if entity_id in range(1500, 1506):
                prev_stats[entity_id][payload[8]] = struct.unpack(">f", payload[4:8])[0]


def detect_item_like_loadout_events(
    messages: list[tuple[float, str, int, bytes]], state: MatchState
):
    """Infer item-like self-loadout changes from later self-targeted 1087 family 0xbc values."""
    constants = {45, 121, 122, 123, 173, 174, 254, 255, 273}
    first_ts = state.start_ts

    for ts, dir_str, opcode, dec in messages:
        if dir_str != "S->C" or opcode != OP_ENTITY_PROP_EXT or ts - first_ts < 30.0:
            continue

        payload = dec[2:]
        if len(payload) < 16:
            continue

        entity_id = struct.unpack(">H", payload[2:4])[0]
        target_id = struct.unpack(">H", payload[6:8])[0]
        if entity_id not in range(1500, 1506) or target_id != entity_id or payload[8] != 0xBC:
            continue

        value = struct.unpack(">H", payload[14:16])[0]
        if value in constants:
            continue

        player = _get_player_by_entity(state, entity_id)
        if not player or value in player.item_like_ids or value in player.talent_offer_ids or value == player.talent_choice_id:
            continue

        player.item_like_ids.add(value)
        state.events.append(
            (
                ts - state.start_ts,
                f"{player.handle or f'Entity {entity_id}'} item-like loadout id {value}",
            )
        )


def detect_farm_reward_channels(
    messages: list[tuple[float, str, int, bytes]], state: MatchState
):
    """Infer recurring 1086 reward families that follow minion-like interactions."""
    counts_by_entity: dict[int, Counter[int]] = defaultdict(Counter)

    for i, (ts, dir_str, opcode, dec) in enumerate(messages):
        if dir_str != "S->C" or opcode != OP_ENTITY_PROP_EXT:
            continue

        payload = dec[2:]
        if len(payload) < 16:
            continue

        source_id = struct.unpack(">H", payload[2:4])[0]
        target_id = struct.unpack(">H", payload[6:8])[0]
        if source_id not in range(1500, 1506) or target_id not in range(2000, 2100):
            continue

        seen_types: set[int] = set()
        for ts2, dir_str2, opcode2, dec2 in messages[i + 1 :]:
            if ts2 - ts > 0.25:
                break
            if dir_str2 != "S->C" or opcode2 != OP_ENTITY_PROP:
                continue

            payload2 = dec2[2:]
            if len(payload2) < 14:
                continue
            entity_id = struct.unpack(">H", payload2[2:4])[0]
            if entity_id != source_id:
                continue
            seen_types.add(payload2[8])

        for prop_type in seen_types:
            counts_by_entity[source_id][prop_type] += 1

    for entity_id, counter in counts_by_entity.items():
        player = _get_player_by_entity(state, entity_id)
        if not player:
            continue

        reward_types = {prop_type for prop_type, count in counter.items() if count >= 3}
        if not reward_types:
            continue

        player.farm_reward_types.update(reward_types)
        state.events.append(
            (
                0.0,
                f"{player.handle or f'Entity {entity_id}'} farm reward channel types {', '.join(f'0x{t:02x}' for t in sorted(reward_types))}",
            )
        )


def detect_post_death_counter_pulses(
    messages: list[tuple[float, str, int, bytes]], state: MatchState
):
    """Find synchronized opcode-1086 counter pulses immediately after deaths."""
    last_death_ts: dict[int, float] = {}

    for i, (ts, dir_str, opcode, dec) in enumerate(messages):
        if dir_str != "S->C" or opcode != OP_ENTITY_STATE:
            continue

        payload = dec[2:]
        if len(payload) < 6 or payload[4] != 0 or payload[5] != 3:
            continue

        dead_entity = struct.unpack(">H", payload[2:4])[0]
        if dead_entity not in range(1500, 1506):
            continue
        if ts - last_death_ts.get(dead_entity, float("-inf")) < 1.0:
            continue
        last_death_ts[dead_entity] = ts

        affected_by_type: dict[int, set[int]] = defaultdict(set)
        for ts2, dir_str2, opcode2, dec2 in messages[i + 1 :]:
            if ts2 - ts > 0.25:
                break
            if dir_str2 != "S->C" or opcode2 != OP_ENTITY_PROP:
                continue

            payload2 = dec2[2:]
            if len(payload2) < 14:
                continue
            entity_id = struct.unpack(">H", payload2[2:4])[0]
            if entity_id not in range(1500, 1506) or entity_id == dead_entity:
                continue
            affected_by_type[payload2[8]].add(entity_id)

        if not affected_by_type:
            continue

        prop_type, affected = max(
            affected_by_type.items(), key=lambda item: (len(item[1]), -item[0])
        )
        if len(affected) < 2:
            continue

        dead_player = _get_player_by_entity(state, dead_entity)
        name = dead_player.handle if dead_player and dead_player.handle else f"Entity {dead_entity}"
        state.events.append(
            (
                ts - state.start_ts,
                f"{name} death reward pulse type 0x{prop_type:02x} affected {len(affected)} players",
            )
        )


def decode_entity_prop(payload: bytes, state: MatchState):
    """Decode opcode 1086: property updates with counter tracking.

    Structure: [2B 0][2B eid][2B 0][2B eid][1B type][5B counter-ish payload][2B aux][6B 0]
    The 0x3e / 0x4d families behave like the best current total-XP / total-gold
    candidates, but only when the raw 5-byte value stays in a plausible scoreboard range.
    """
    if len(payload) < 14:
        return
    entity_id = struct.unpack(">H", payload[2:4])[0]
    p = _get_player_by_entity(state, entity_id)
    if not p:
        return

    prop_type = payload[8]
    combined = decode_prop_counter_total(payload)

    p.prop_counters[prop_type] = max(p.prop_counters.get(prop_type, 0), combined)

    if prop_type == 0x4D and is_plausible_scoreboard_counter(combined):
        if combined >= p.gold_counter:
            if combined > p.gold_counter:
                p.gold_updates += 1
            p.gold_counter = combined
    elif prop_type == 0x3E and is_plausible_scoreboard_counter(combined):
        if combined >= p.xp_counter:
            if combined > p.xp_counter:
                p.xp_updates += 1
            p.xp_counter = combined


# ── Main Analysis ──


def analyze_match(match_dir: Path) -> MatchState:
    """Full analysis of a captured match directory."""
    meta_path = match_dir / "match_meta.json"
    packets_path = match_dir / "packets.bin"

    if not packets_path.exists():
        print(f"Error: {packets_path} not found", file=sys.stderr)
        sys.exit(1)

    match_id = None
    meta = {}

    if meta_path.exists():
        with open(meta_path) as f:
            meta = json.load(f)
        match_id = meta.get("match_id")

    if not match_id:
        # Live match: derive match ID from directory name + traffic log
        dir_prefix = match_dir.name.split("_")[-1]  # e.g. "2becf48d"
        # Try traffic log
        traffic_log = match_dir.parent.parent / "vg_traffic.jsonl"
        if traffic_log.exists():
            with open(traffic_log) as f:
                for line in f:
                    try:
                        d = json.loads(line)
                        rv = d.get("res", {}).get("returnValue", {}) if isinstance(d.get("res"), dict) else {}
                        if isinstance(rv, dict) and rv.get("matchId", "").startswith(dir_prefix):
                            match_id = rv["matchId"]
                    except (json.JSONDecodeError, AttributeError):
                        pass
        if not match_id:
            print(f"Error: Cannot determine match ID for {match_dir.name}", file=sys.stderr)
            print(f"  No match_meta.json and no matching entry in traffic log.", file=sys.stderr)
            sys.exit(1)
    state = MatchState(match_id=match_id)

    if "start_time" in meta:
        try:
            dt = datetime.fromisoformat(meta["start_time"])
            state.start_ts = dt.timestamp()
        except (ValueError, TypeError):
            pass

    print(f"Decrypting match {match_id[:8]}...", file=sys.stderr)
    messages = parse_packets(packets_path, match_id)
    state.total_messages = len(messages)

    if not messages:
        print("Error: No messages decrypted", file=sys.stderr)
        sys.exit(1)

    # Use first/last message timestamps for duration
    first_ts = messages[0][0]
    last_ts = messages[-1][0]
    state.duration = last_ts - first_ts
    if state.start_ts == 0:
        state.start_ts = first_ts

    print(f"Processing {len(messages)} messages...", file=sys.stderr)

    # Multi-pass: first pass for roster, second for stats
    # Pass 1: Roster setup (snapshots, hero assignments, player info, catalog)
    for ts, dir_str, opcode, dec in messages:
        state.opcode_counts[opcode] += 1
        payload = dec[2:]

        if opcode in (OP_SNAPSHOT, OP_SNAPSHOT_PRE) and dir_str == "S->C":
            decode_snapshot(payload, state, ts)
        elif opcode == OP_HERO_ASSIGN and dir_str == "S->C":
            decode_hero_assignments(payload, state)
        elif opcode == OP_PLAYER_INFO and dir_str == "S->C":
            decode_player_info(payload, state)
        elif opcode == OP_ENTITY_SPAWN and dir_str == "S->C":
            decode_entity_spawn(payload, state)
        elif opcode == OP_HERO_CATALOG and dir_str == "S->C":
            hero = payload.split(b"\x00")[0].decode("ascii", errors="replace").strip("*")
            if hero:
                state.hero_catalog.append(hero)
        elif opcode == OP_GAMEMODE_NAME and dir_str == "S->C":
            gm = payload.split(b"\x00")[0].decode("ascii", errors="replace").strip("*")
            if gm:
                state.game_mode = gm

    # Pass 2: Entity tracking (positions, stats, properties)
    for ts, dir_str, opcode, dec in messages:
        if dir_str != "S->C":
            continue
        payload = dec[2:]

        if opcode == OP_POSITION:
            decode_position(payload, state)
        elif opcode == OP_ENTITY_SCALAR:
            decode_entity_scalar(payload, state)
        elif opcode == OP_ENTITY_STAT:
            decode_entity_stat(payload, state, ts)
        elif opcode == OP_ENTITY_PROP:
            decode_entity_prop(payload, state)
        elif opcode == OP_ENTITY_PROP_EXT:
            decode_entity_prop_ext(payload, state)
        elif opcode == OP_ENTITY_STATE:
            decode_entity_state(payload, state, ts)

    detect_talent_like_choices(messages, state)
    detect_interaction_timeline_events(messages, state)
    detect_kill_like_interactions(messages, state)
    detect_assist_like_interactions(messages, state)
    detect_ability_followup_channels(messages, state)
    detect_resource_gain_events(messages, state)
    detect_level_like_milestones(messages, state)
    detect_item_like_loadout_events(messages, state)
    detect_farm_reward_channels(messages, state)
    detect_post_death_counter_pulses(messages, state)
    detect_match_winner(messages, state)

    return state


# ── Display ──

C_RESET = "\033[0m"
C_BOLD = "\033[1m"
C_DIM = "\033[2m"
C_CYAN = "\033[36m"
C_BLUE = "\033[34m"
C_GREEN = "\033[32m"
C_RED = "\033[31m"
C_YELLOW = "\033[33m"
C_MAGENTA = "\033[35m"
C_WHITE = "\033[97m"
C_BG_BLUE = "\033[44m"
C_BG_RED = "\033[41m"


def format_duration(seconds: float) -> str:
    if seconds <= 0:
        return "--:--"
    m, s = divmod(int(seconds), 60)
    return f"{m}:{s:02d}"


def format_counter(counter: int) -> str:
    """Format a plausible raw scoreboard counter total."""
    if counter <= 0:
        return "-"
    return f"{counter:,}"


def print_dashboard(state: MatchState):
    """Print a richly formatted terminal dashboard."""
    W = 88

    # Header
    print()
    print(f"{C_BOLD}{C_CYAN}{'=' * W}{C_RESET}")
    print(f"{C_BOLD}{C_CYAN}  VAINGLORY MATCH DASHBOARD{C_RESET}")
    print(f"{C_BOLD}{C_CYAN}{'=' * W}{C_RESET}")

    # Match info
    mid = state.match_id[:8] if state.match_id else "unknown"
    mode = state.game_mode or "Unknown"
    dur = format_duration(state.duration)
    print(f"  Match ID:    {C_WHITE}{mid}{C_RESET}")
    print(f"  Game Mode:   {C_WHITE}{mode}{C_RESET}")
    print(f"  Duration:    {C_WHITE}{dur}{C_RESET}")
    if state.winning_team in (1, 2):
        winner_label = "TEAM BLUE" if state.winning_team == 1 else "TEAM RED"
        winner_color = C_CYAN if state.winning_team == 1 else C_RED
        print(f"  Winner:      {winner_color}{C_BOLD}{winner_label}{C_RESET}")
    print(f"  Messages:    {C_DIM}{state.total_messages:,} decrypted{C_RESET}")
    if state.hero_catalog:
        base_count = sum(1 for h in state.hero_catalog if "_Skin_" not in h and not h.startswith("Hero"))
        print(f"  Hero Pool:   {C_DIM}{base_count} heroes ({len(state.hero_catalog)} with skins){C_RESET}")
    print()

    # Team rosters
    blue_players = [p for p in state.players if p.team == 1]
    red_players = [p for p in state.players if p.team == 2]

    # Scoreboard header
    print(
        f"{C_BOLD}  {'PLAYER':<20s} {'HERO':<12s} {'LVL':>4s} {'K':>3s} {'D':>3s} {'CS':>4s} {'GOLD':>7s} {'XP':>7s} {'POS':>15s}{C_RESET}"
    )
    print(f"  {'-' * 84}")

    # Blue team
    print(f"  {C_BG_BLUE}{C_WHITE}{C_BOLD} TEAM BLUE (1) {C_RESET}")
    base_level = 4 if "aral" in state.game_mode.lower() else 1 if state.game_mode else 0

    for p in blue_players:
        _print_player_row(p, base_level)

    print()

    # Red team
    print(f"  {C_BG_RED}{C_WHITE}{C_BOLD} TEAM RED  (2) {C_RESET}")
    for p in red_players:
        _print_player_row(p, base_level)

    # Unassigned players (if any)
    other = [p for p in state.players if p.team not in (1, 2)]
    if other:
        print(f"\n  {C_DIM}UNASSIGNED{C_RESET}")
        for p in other:
            _print_player_row(p, base_level)

    print()

    # Entity stat details
    print(f"{C_BOLD}  ENTITY STAT TRACKING{C_RESET}")
    print(f"  {'-' * 68}")
    print(
        f"  {'PLAYER':<20s} {'EID':>5s} {'STAT0':>7s} {'STAT2':>7s} "
        f"{'HP_D':>7s} {'STAT8':>7s}"
    )
    for p in state.players:
        eid_str = f"{p.entity_id}" if p.entity_id != 0xFFFF else "----"
        name = p.handle[:18] if p.handle else f"Slot {p.slot}"
        tc = C_CYAN if p.team == 1 else C_RED if p.team == 2 else C_DIM
        print(
            f"  {tc}{name:<20s}{C_RESET} {eid_str:>5s} "
            f"{p.stat_0:>7.1f} {p.stat_2:>7.1f} "
            f"{p.stat_6:>7.0f} {p.stat_8:>7.1f}"
        )
    print()

    # Position map (simple ASCII rendering)
    _print_position_map(state)

    # Timeline of key events
    if state.events:
        print(f"{C_BOLD}  MATCH TIMELINE{C_RESET}")
        print(f"  {'-' * 68}")
        # Deduplicate and show up to 20 events
        seen = set()
        shown = 0
        for elapsed, desc in state.events:
            key = (int(elapsed), desc[:30])
            if key not in seen:
                seen.add(key)
                print(f"  {C_DIM}[{format_duration(elapsed)}]{C_RESET} {desc}")
                shown += 1
                if shown >= 20:
                    remaining = len(state.events) - shown
                    if remaining > 0:
                        print(f"  {C_DIM}... and {remaining} more events{C_RESET}")
                    break
        print()

    # Opcode frequency table
    print(f"{C_BOLD}  PROTOCOL OPCODES (top 15){C_RESET}")
    print(f"  {'-' * 68}")
    print(f"  {'OPCODE':>7s}  {'HEX':>7s}  {'COUNT':>7s}  {'DESCRIPTION':<30s}")
    opcode_labels = {
        1000: "Player UUID",
        1001: "Game setup",
        1005: "Player handle",
        1006: "Player info + entity map",
        1012: "Client movement input",
        1016: "Entity float update",
        1045: "Unknown (16B)",
        1053: "Entity stat update",
        1054: "Entity stat (24B)",
        1067: "Entity state change",
        1070: "Entity position",
        1077: "Match-result burst",
        1086: "Entity property counters",
        1087: "Entity data (40B)",
        1107: "Hero/skin catalog",
        1108: "Game mode config",
        1114: "Scoreboard snapshot",
        1135: "Game mode name",
    }
    for opcode, count in state.opcode_counts.most_common(15):
        label = opcode_labels.get(opcode, "")
        print(f"  {opcode:>7d}  0x{opcode:04x}  {count:>7,}  {label}")

    print()
    print(f"{C_BOLD}{C_CYAN}{'=' * W}{C_RESET}")
    print()


def _print_player_row(p: Player, base_level: int):
    """Print one player's gameplay-focused scoreboard row."""
    name = p.handle[:18] if p.handle else f"Slot {p.slot}"
    hero = p.hero[:10] if p.hero else "--"
    level = str(base_level + p.level_like_events) if p.snapshot_active and base_level else "-"
    kills = str(p.kills)
    deaths = str(p.deaths)
    cs = str(p.cs)
    gold = format_counter(p.gold_counter)
    xp = format_counter(p.xp_counter)

    if p.pos_updates > 0:
        pos = f"({p.pos_x:>6.1f},{p.pos_y:>5.1f})"
    else:
        pos = "          -"

    tc = C_CYAN if p.team == 1 else C_RED if p.team == 2 else C_DIM
    print(
        f"  {tc}{name:<20s}{C_RESET} {hero:<12s} {level:>4s} {kills:>3s} {deaths:>3s} {cs:>4s} "
        f"{gold:>7s} {xp:>7s} {pos:>15s}"
    )


def _print_position_map(state: MatchState):
    """Render a simple ASCII position map of player last-known positions."""
    players_with_pos = [p for p in state.players if p.pos_updates > 0]
    if not players_with_pos:
        return

    print(f"{C_BOLD}  POSITION MAP (last known){C_RESET}")
    print(f"  {'-' * 68}")

    # ARAL map runs roughly X: -85 to +85, Y: -10 to +15
    MAP_W = 60
    MAP_H = 12
    X_MIN, X_MAX = -85.0, 85.0
    Y_MIN, Y_MAX = -10.0, 15.0

    grid = [[" " for _ in range(MAP_W)] for _ in range(MAP_H)]

    # Draw lane center line
    cy = int((0 - Y_MIN) / (Y_MAX - Y_MIN) * (MAP_H - 1))
    cy = max(0, min(MAP_H - 1, cy))
    for x in range(MAP_W):
        grid[MAP_H - 1 - cy][x] = C_DIM + "." + C_RESET

    # Use slot number as marker (1-6) for uniqueness
    for p in players_with_pos:
        gx = int((p.pos_x - X_MIN) / (X_MAX - X_MIN) * (MAP_W - 1))
        gy = int((p.pos_y - Y_MIN) / (Y_MAX - Y_MIN) * (MAP_H - 1))
        gx = max(0, min(MAP_W - 1, gx))
        gy = max(0, min(MAP_H - 1, gy))

        tc = C_CYAN if p.team == 1 else C_RED
        marker = str(p.slot + 1)  # 1-indexed for readability
        grid[MAP_H - 1 - gy][gx] = tc + C_BOLD + marker + C_RESET

    # Render
    print(f"  +{'-' * MAP_W}+  Y={Y_MAX:.0f}")
    for row in grid:
        print(f"  |{''.join(row)}|")
    print(f"  +{'-' * MAP_W}+  Y={Y_MIN:.0f}")
    print(f"  X={X_MIN:.0f}{' ' * (MAP_W - 14)}X={X_MAX:.0f}")

    # Legend
    legend_parts = []
    for p in players_with_pos:
        tc = C_CYAN if p.team == 1 else C_RED
        marker = str(p.slot + 1)
        name = p.handle[:12] if p.handle else f"Slot {p.slot}"
        legend_parts.append(f"{tc}{C_BOLD}{marker}{C_RESET}={name}")
    print(f"  {' '.join(legend_parts)}")
    print()


# ── Entry Point ──


def main():
    parser = argparse.ArgumentParser(
        description="Vainglory decrypted match dashboard",
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog="""Examples:
  %(prog)s mitm/matches/20260403_213752_b98d3255
  %(prog)s --replay 20260403_213752_b98d3255""",
    )
    parser.add_argument(
        "match_dir",
        nargs="?",
        type=Path,
        help="Path to match directory (containing match_meta.json + packets.bin)",
    )
    parser.add_argument(
        "--replay",
        type=str,
        help="Match directory name (looked up under mitm/matches/)",
    )
    args = parser.parse_args()

    if args.replay:
        match_dir = Path(__file__).parent / "matches" / args.replay
    elif args.match_dir:
        match_dir = args.match_dir
        if not match_dir.exists():
            # Try relative to mitm/matches/
            alt = Path(__file__).parent / "matches" / str(args.match_dir)
            if alt.exists():
                match_dir = alt
    else:
        # Default: use the latest match directory
        matches_dir = Path(__file__).parent / "matches"
        if matches_dir.exists():
            dirs = sorted(
                [d for d in matches_dir.iterdir() if d.is_dir()],
                key=lambda d: d.name,
            )
            if dirs:
                match_dir = dirs[-1]
                print(f"Using latest match: {match_dir.name}", file=sys.stderr)
            else:
                parser.error("No match directories found")
        else:
            parser.error("No match directory specified and mitm/matches/ not found")

    if not match_dir.exists():
        print(f"Error: Directory not found: {match_dir}", file=sys.stderr)
        sys.exit(1)

    state = analyze_match(match_dir)
    print_dashboard(state)


if __name__ == "__main__":
    main()
