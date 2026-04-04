#!/usr/bin/env python3
"""
vg_match_schema.py — Vainglory match protocol schema and decoder.

Protocol stack (wire → plaintext):
  1. TCP framing: [2B BE content_length] [content_bytes]
  2. Blowfish ECB decryption (8-byte blocks, 16-byte key)
  3. Plaintext: [2B BE opcode] [payload]

Blowfish key derivation:
  key = MD5(HARDCODED_SALT_64B + handshake_key_material)
  - HARDCODED_SALT: 64 bytes baked into the binary
  - handshake_key_material: runtime value from SERVER_HELLO (extract via Frida)

The pattern seen in zero-padded regions (e.g., 8a5d03e715e03ec2) is
Blowfish(key, 0x0000000000000000) — NOT an XOR key.

Opcodes (from Ghidra FUN_100123fa0 switch):
  0x3e9 (1001) = FULL_STATE_UPDATE    — 104B payload, hero/entity full state
  0x3ea (1002) = ENTITY_ACTION_A      — entity ID + action
  0x3eb (1003) = ENTITY_ACTION_B      — entity ID + action
  0x3ec (1004) = POSITION_UPDATE      — 4B payload (entity pos?)
  0x3ed (1005) = STATE_DELTA          — large payload, partial state
  0x3ee (1006) = MATCH_EVENT          — kills, objectives, etc.
  0x3ef (1007) = TICK_SYNC_A          — tick synchronization
  0x3f0 (1008) = TICK_SYNC_B
  0x3f1 (1009) = TICK_SYNC_C
  0x3f2 (1010) = SNAPSHOT             — 2590B payload, full world state
  0x3f3 (1011) = ENTITY_SPAWN         — new entity on map
  0x3f4-0x3f8 (1012-1016)             — various state updates
  0x40c-0x48e (1036-1166)             — extended opcodes

Entity struct layout (from Ghidra):
  +0x250: float pos_x
  +0x254: float pos_z_offset
  +0x258: float pos_y
  +0x264: byte  team (1=Left/Blue, 2=Right/Red)
  +0x268: uint  entity_type_id
  +0x2a0: float health (speculative)
  +0x2a4: float max_health (speculative)
  +0x2a8: float energy/mana (speculative)
  +0x2ec: float pos_z_ground
  +0x2f4: byte  flags

Stat IDs (from FUN_1000eff84, 130+ types):
  0x00 = ATTACK_SPEED
  0x07 = CRYSTAL_POWER
  0x10 = WEAPON_POWER
  0x12 = CRIT_CHANCE
  0x13 = LIFESTEAL
  0x16 = ARMOR
  0x18 = SHIELD
  0x2c = COOLDOWN
  0x6e = DAMAGE
  ...
"""

from __future__ import annotations

import hashlib
import struct
from dataclasses import dataclass, field
from pathlib import Path

# ── Blowfish key derivation constants ──

HARDCODED_SALT = bytes.fromhex(
    "467c46341a2f5f1e"
    "a778c8d74b1ca88b"
    "459d33ab9685e0e3"
    "f378e7b493322ceb"
    "4036be8b31396d33"
    "30ddaa6d7031415e"
    "fe903f60be8834c5"
    "3299e3e8877c3a26"
)

# ── Opcode definitions ──

OPCODES = {
    0x3e9: "FULL_STATE",
    0x3ea: "ENTITY_ACT_A",
    0x3eb: "ENTITY_ACT_B",
    0x3ec: "POS_UPDATE",
    0x3ed: "STATE_DELTA",
    0x3ee: "MATCH_EVENT",
    0x3ef: "TICK_SYNC_A",
    0x3f0: "TICK_SYNC_B",
    0x3f1: "TICK_SYNC_C",
    0x3f2: "SNAPSHOT",
    0x3f3: "ENTITY_SPAWN",
    0x3f4: "STATE_UPD_A",
    0x3f5: "STATE_UPD_B",
    0x3f6: "STATE_UPD_C",
    0x3f7: "STATE_UPD_D",
    0x3f8: "STATE_UPD_E",
    0x40c: "EXT_1036",
    0x411: "EXT_1041",
    0x412: "EXT_1042",
    0x413: "EXT_1043",
    0x414: "EXT_1044",
    0x424: "EXT_1060",
    0x426: "EXT_1062",
    0x42a: "EXT_1066",
    0x42d: "EXT_1069",
    0x436: "EXT_1078",
    0x438: "EXT_1080",
    0x448: "EXT_1096",
    0x449: "EXT_1097",
    0x44a: "EXT_1098",
    0x450: "EXT_1104",
    0x455: "HERO_SELECT",
    0x456: "HERO_LOCK",
    0x457: "ABILITY_UP",
    0x458: "ITEM_BUY",
    0x45d: "KILL_EVENT",
    0x45e: "DEATH_EVENT",
    0x45f: "ASSIST_EVENT",
    0x460: "GOLD_EARNED",
    0x461: "LEVEL_UP",
    0x462: "TURRET_KILL",
    0x463: "OBJECTIVE",
    0x464: "BUFF_APPLY",
    0x465: "BUFF_REMOVE",
    0x466: "ABILITY_CAST",
    0x467: "ABILITY_HIT",
    0x468: "DAMAGE_DEALT",
    0x469: "HEAL_RECV",
    0x46a: "SHIELD_RECV",
    0x46b: "MINION_KILL",
    0x46d: "RECALL_START",
    0x46e: "RECALL_END",
    0x472: "VISION_UPD",
    0x474: "PING_EVENT",
    0x47a: "CHAT_MSG",
    0x47b: "EMOTE",
    0x484: "SURRENDER_VOTE",
    0x485: "GAME_END",
    0x486: "POST_MATCH",
    0x48e: "EXT_1166",
}


# ── Data structures ──

@dataclass
class HeroState:
    player_uuid: str = ""
    hero_key: str = ""
    skin_key: str = ""
    team: int = 0
    slot: int = 0
    pos_x: float = 0.0
    pos_y: float = 0.0
    health: float = 0.0
    max_health: float = 0.0
    energy: float = 0.0
    max_energy: float = 0.0
    gold: int = 0
    level: int = 1
    kills: int = 0
    deaths: int = 0
    assists: int = 0
    cs: int = 0
    items: list[str] = field(default_factory=list)
    alive: bool = True


@dataclass
class GameEvent:
    game_time: float = 0.0
    opcode: int = 0
    opcode_name: str = ""
    raw_payload: bytes = b""
    parsed: dict = field(default_factory=dict)


@dataclass
class MatchSnapshot:
    match_id: str = ""
    game_time: float = 0.0
    tick: int = 0
    heroes: list[HeroState] = field(default_factory=list)
    events: list[GameEvent] = field(default_factory=list)


@dataclass
class MatchState:
    match_id: str = ""
    game_mode: str = ""
    num_players: int = 6
    start_time: float = 0.0
    game_time: float = 0.0
    tick: int = 0
    heroes: list[HeroState] = field(default_factory=list)
    events: list[GameEvent] = field(default_factory=list)
    blowfish_key: bytes = b""
    blowfish_zeros: bytes = b""


# ── Key derivation ──

def derive_blowfish_key(handshake_key: bytes = b"") -> bytes:
    """Derive the 16-byte Blowfish key from the hardcoded salt + handshake key material."""
    h = hashlib.md5()
    h.update(HARDCODED_SALT)
    if handshake_key:
        h.update(handshake_key)
    return h.digest()


def detect_blowfish_zeros(messages: list[bytes]) -> bytes:
    """Detect Blowfish(zeros) pattern from the repeating 8-byte pattern in messages.

    In encrypted messages, zero-padded regions all encrypt to the same 8-byte
    value: Blowfish(key, 0x0000000000000000). This pattern repeats extensively
    in entity update messages (trailing zeros).
    """
    from collections import Counter
    patterns: Counter[bytes] = Counter()

    for msg in messages:
        # Look at trailing 8-byte blocks of 40-byte messages (ENTITY_UPDATE_LG)
        if len(msg) == 42:  # 2B length + 40B content
            content = msg[2:]
            for i in range(16, 40, 8):
                pat = content[i:i + 8]
                if len(pat) == 8:
                    patterns[pat] += 1

    if patterns:
        return patterns.most_common(1)[0][0]
    return b"\x00" * 8


# ── Message parsing ──

def parse_raw_messages(stream: bytes) -> list[tuple[int, bytes]]:
    """Parse length-prefixed messages from a byte stream.

    Returns list of (content_length, raw_content) tuples.
    The 2-byte BE length prefix is plaintext (not encrypted).
    """
    messages = []
    offset = 0
    while offset + 2 <= len(stream):
        content_len = struct.unpack("!H", stream[offset:offset + 2])[0]
        total = content_len + 2
        if offset + total > len(stream):
            break
        content = stream[offset + 2:offset + total]
        messages.append((content_len, bytes(content)))
        offset += total
    return messages


def decrypt_message(content: bytes, bf_key: bytes) -> bytes | None:
    """Blowfish ECB decrypt message content. Returns plaintext or None on error."""
    if len(content) % 8 != 0:
        return None
    try:
        from Crypto.Cipher import Blowfish
        bf = Blowfish.new(bf_key, Blowfish.MODE_ECB)
        return bf.decrypt(content)
    except Exception:
        return None


def parse_opcode(plaintext: bytes) -> tuple[int, bytes]:
    """Extract opcode and payload from plaintext message content."""
    if len(plaintext) < 2:
        return 0, b""
    # First 2 bytes: big-endian opcode (byte-swapped in ARM64 code)
    opcode = struct.unpack("!H", plaintext[:2])[0]
    payload = plaintext[2:]
    return opcode, payload


def opcode_name(opcode: int) -> str:
    return OPCODES.get(opcode, f"UNK_{opcode:#06x}")
