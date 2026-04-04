#!/usr/bin/env python3
"""
decode_match_packets.py — Decode Vainglory in-match binary packets.

Reads packets.bin captures from vg_game_proxy and decodes:
  1. Framing: 2-byte BE length prefix
  2. Blowfish ECB decryption (LE word order, key from match ID)
  3. Opcode-based message classification (0x0b-0x490, 171 types)
  4. Human-readable output with hero names, game events, positions

Key derivation (automatic):
  key = MD5(64B_hardcoded_salt + match_id_uuid_string)
  The match ID is read from match_meta.json in the capture directory.
  Blowfish uses little-endian 4-byte half swap (ARM64 native word order).

Usage:
  python3 decode_match_packets.py <match_dir>              # auto key from match_meta.json
  python3 decode_match_packets.py --bf-key <hex> <match_dir>  # explicit key
  python3 decode_match_packets.py --all mitm/matches/      # decode all captures
"""

from __future__ import annotations

import argparse
import hashlib
import json
import struct
import sys
from collections import Counter
from dataclasses import dataclass, field
from pathlib import Path

# Hardcoded salt from game binary (FUN_100346560)
_BF_SALT = bytes.fromhex(
    "467c46341a2f5f1ea778c8d74b1ca88b459d33ab9685e0e3f378e7b493322ceb"
    "4036be8b31396d3330ddaa6d7031415efe903f60be8834c53299e3e8877c3a26"
)


def derive_blowfish_key(match_id: str) -> bytes:
    """Derive 16-byte Blowfish key from match UUID string."""
    return hashlib.md5(_BF_SALT + match_id.encode("utf-8")).digest()


def _swap4(b: bytes) -> bytes:
    """Swap byte order of each 4-byte half (LE <-> BE for ARM64 Blowfish)."""
    return b[3::-1] + b[7:3:-1]

try:
    from Crypto.Cipher import Blowfish as _Blowfish
    HAS_BLOWFISH = True
except ImportError:
    HAS_BLOWFISH = False


# ── Packet binary format (from vg_game_proxy.py) ──
# [8B timestamp (double BE)][1B direction (0=C->S, 1=S->C)][4B length (uint32 BE)][data]

@dataclass
class RawSegment:
    timestamp: float
    direction: str  # "C->S" or "S->C"
    data: bytes


@dataclass
class Message:
    """A single application-level message after framing."""
    direction: str
    length: int       # content length (from 2B prefix)
    raw: bytes        # full message including 2B prefix
    content: bytes    # content after 2B prefix (before decryption)
    decrypted: bytes  # content after XOR decryption
    msg_index: int    # sequential index within direction stream
    stream_offset: int  # byte offset in the direction's stream


@dataclass
class MatchCapture:
    match_id: str
    match_dir: Path
    segments: list[RawSegment] = field(default_factory=list)
    cs_messages: list[Message] = field(default_factory=list)
    sc_messages: list[Message] = field(default_factory=list)
    xor_key: bytes = b'\x00' * 8
    bf_key: bytes | None = None   # 16-byte Blowfish key (if provided)
    handshake_ip: str = ""
    handshake_port: int = 0
    handshake_version: int = 0


def read_segments(packets_bin: Path) -> list[RawSegment]:
    """Read raw TCP segments from packets.bin."""
    data = packets_bin.read_bytes()
    segments = []
    offset = 0
    while offset + 13 <= len(data):
        ts = struct.unpack("!d", data[offset:offset+8])[0]
        direction = "C->S" if data[offset+8] == 0 else "S->C"
        length = struct.unpack("!I", data[offset+9:offset+13])[0]
        if offset + 13 + length > len(data):
            break
        payload = data[offset+13:offset+13+length]
        segments.append(RawSegment(ts, direction, payload))
        offset += 13 + length
    return segments


def segments_to_streams(segments: list[RawSegment]) -> tuple[bytearray, bytearray]:
    """Concatenate segments into C->S and S->C byte streams."""
    cs = bytearray()
    sc = bytearray()
    for seg in segments:
        if seg.direction == "C->S":
            cs.extend(seg.data)
        else:
            sc.extend(seg.data)
    return cs, sc


def parse_messages(stream: bytearray, direction: str) -> list[Message]:
    """Parse length-prefixed messages from a byte stream."""
    messages = []
    offset = 0
    idx = 0
    while offset + 2 <= len(stream):
        content_len = struct.unpack("!H", stream[offset:offset+2])[0]
        total = content_len + 2
        if offset + total > len(stream):
            break
        raw = bytes(stream[offset:offset+total])
        content = bytes(stream[offset+2:offset+total])
        messages.append(Message(
            direction=direction,
            length=content_len,
            raw=raw,
            content=content,
            decrypted=content,  # will be set later
            msg_index=idx,
            stream_offset=offset,
        ))
        idx += 1
        offset += total
    return messages


def detect_xor_key(sc_messages: list[Message], cs_messages: list[Message] | None = None) -> bytes:
    """Detect the 8-byte XOR key.

    Primary method: Extract from C->S AUTH_TOKEN message (index 1).
    The AUTH_TOKEN is 72 bytes of content. The raw (pre-decryption) bytes
    at positions 40-47 ARE the XOR key — because the plaintext at those
    positions is zeros, and XOR(0, key) = key.

    Fallback: Find the most common 8-byte pattern in trailing regions
    of 42-byte S->C messages (encrypted zeros produce repeating key).
    """
    # Primary: extract from AUTH_TOKEN (C->S message index 1)
    if cs_messages and len(cs_messages) >= 2:
        auth_msg = cs_messages[1]
        if len(auth_msg.content) == 72:
            key = auth_msg.content[40:48]
            # Verify: bytes 48-55 should be the same (key repeated)
            if key == auth_msg.content[48:56]:
                return key

    # Fallback: detect from S->C zero-padded regions
    patterns: Counter[bytes] = Counter()
    for msg in sc_messages:
        if len(msg.content) == 40:
            for i in range(16, 40, 8):
                pat = msg.content[i:i+8]
                if len(pat) == 8:
                    patterns[pat] += 1

    if not patterns:
        for msg in sc_messages:
            if 100 < len(msg.content) < 200:
                for i in range(8, len(msg.content) - 16, 8):
                    pat = msg.content[i:i+8]
                    patterns[pat] += 1

    if patterns:
        key, count = patterns.most_common(1)[0]
        return key
    return b'\x00' * 8


def xor_decrypt(data: bytes, key: bytes) -> bytes:
    """XOR decrypt data with repeating 8-byte key."""
    result = bytearray(len(data))
    for i in range(len(data)):
        result[i] = data[i] ^ key[i % 8]
    return bytes(result)


# ── Blowfish ECB decryption ──

# Valid opcode range for in-match protocol messages (BE uint16 at offset 0)
OPCODE_MIN = 0x000B
OPCODE_MAX = 0x0490


def blowfish_ecb_decrypt(data: bytes, key: bytes) -> bytes:
    """Decrypt data using Blowfish ECB with LE word order (ARM64 native).

    The game's Blowfish reads each 8-byte block as two little-endian uint32
    values (L, R), while standard Blowfish uses big-endian. We swap each
    4-byte half before and after decryption to compensate.

    If the data length is not a multiple of 8, the trailing partial block
    is left as-is (the game protocol always sends 8-aligned content).
    """
    if not HAS_BLOWFISH:
        raise RuntimeError("pycryptodome is required for Blowfish: pip install pycryptodome")
    cipher = _Blowfish.new(key, _Blowfish.MODE_ECB)
    aligned = len(data) & ~7
    if aligned == 0:
        return data
    result = bytearray()
    for i in range(0, aligned, 8):
        block = data[i:i + 8]
        # LE->BE swap, decrypt, BE->LE swap
        be_block = _swap4(block)
        dec_be = cipher.decrypt(be_block)
        result.extend(_swap4(dec_be))
    if aligned < len(data):
        result.extend(data[aligned:])
    return bytes(result)


def check_opcode(decrypted: bytes) -> tuple[int | None, bool]:
    """Extract and validate the opcode (first 2 bytes BE uint16).

    Returns (opcode, is_valid).  opcode is None if data is too short.
    """
    if len(decrypted) < 2:
        return None, False
    opcode = struct.unpack("!H", decrypted[0:2])[0]
    return opcode, OPCODE_MIN <= opcode <= OPCODE_MAX


def parse_handshake(cs_messages: list[Message]) -> tuple[str, int, int]:
    """Parse the C->S handshake message (first message, plaintext)."""
    if not cs_messages:
        return "", 0, 0
    msg = cs_messages[0]
    if len(msg.content) < 132:
        return "", 0, 0

    version = struct.unpack("!H", msg.content[0:2])[0]

    # IP string starts at offset 2, null-terminated, padded to 128 bytes
    ip_bytes = msg.content[2:130]
    null_pos = ip_bytes.find(b'\x00')
    ip = ip_bytes[:null_pos].decode('ascii', errors='replace') if null_pos > 0 else ""

    # Port is last 2 bytes
    port = struct.unpack("!H", msg.content[130:132])[0]

    return ip, port, version


def classify_message(msg: Message, is_handshake: bool = False) -> str:
    """Classify a message by type based on size and content patterns."""
    content_len = len(msg.decrypted)
    d = msg.direction

    if is_handshake:
        if d == "C->S" and content_len >= 132:
            return "HANDSHAKE_HELLO"
        if d == "S->C" and content_len <= 5:
            return "HANDSHAKE_ACK"

    if d == "C->S":
        if content_len == 8:
            return "INPUT_ACK"  # Tiny client messages — input or keepalive
        if content_len == 16:
            return "INPUT_EXTENDED"
        if content_len == 72:
            return "AUTH_TOKEN"  # Second C->S message (auth)
        return f"C_MSG_{content_len}B"

    # S->C messages
    if content_len == 3 and msg.msg_index == 0:
        return "HANDSHAKE_ACK"
    if content_len == 8:
        return "TICK_SMALL"  # Small tick/ack
    if content_len == 16:
        return "TICK_HEARTBEAT"  # 18B total, most common
    if content_len == 24:
        return "ENTITY_UPDATE_SM"  # 26B total, second most common
    if content_len == 40:
        return "ENTITY_UPDATE_LG"  # 42B total
    if content_len == 48:
        return "ENTITY_UPDATE_XL"  # 50B total
    if content_len == 128:
        return "INPUT_ACK_REPLY"  # 130B total, matches C->S count
    if content_len == 104:
        return "SERVER_HELLO"  # First encrypted S->C
    if content_len == 72:
        return "SERVER_SETUP"  # Second encrypted S->C
    if content_len > 500:
        return f"SNAPSHOT_{content_len}B"  # Large = world snapshot
    return f"S_MSG_{content_len}B"


def analyze_decrypted_content(msg: Message, msg_type: str) -> dict:
    """Extract structured fields from decrypted message content."""
    data = msg.decrypted
    info: dict = {}

    if msg_type == "TICK_HEARTBEAT" and len(data) == 16:
        # Try parsing as game tick: could be frame_number + timestamp
        info["field_0_u32"] = struct.unpack("!I", data[0:4])[0]
        info["field_4_u32"] = struct.unpack("!I", data[4:8])[0]
        info["field_8_u32"] = struct.unpack("!I", data[8:12])[0]
        info["field_12_u32"] = struct.unpack("!I", data[12:16])[0]
        # Also try as floats
        info["field_0_f32"] = struct.unpack("!f", data[0:4])[0]
        info["field_4_f32"] = struct.unpack("!f", data[4:8])[0]

    elif msg_type == "ENTITY_UPDATE_SM" and len(data) == 24:
        # 24 bytes: possibly entity_id(4) + x(4) + y(4) + z(4) + state(4) + flags(4)
        info["field_0_u32"] = struct.unpack("!I", data[0:4])[0]
        info["field_4_f32"] = struct.unpack("!f", data[4:8])[0]
        info["field_8_f32"] = struct.unpack("!f", data[8:12])[0]
        info["field_12_f32"] = struct.unpack("!f", data[12:16])[0]
        info["field_16_u32"] = struct.unpack("!I", data[16:20])[0]
        info["field_20_u32"] = struct.unpack("!I", data[20:24])[0]

    elif msg_type == "ENTITY_UPDATE_LG" and len(data) == 40:
        # First 16 bytes are data, rest are zeros
        info["field_0_u32"] = struct.unpack("!I", data[0:4])[0]
        info["field_4_u32"] = struct.unpack("!I", data[4:8])[0]
        info["field_8_u32"] = struct.unpack("!I", data[8:12])[0]
        info["field_12_u32"] = struct.unpack("!I", data[12:16])[0]
        info["trailing_zeros"] = sum(1 for b in data[16:] if b == 0)

    elif msg_type == "INPUT_ACK" and len(data) == 8:
        info["field_0_u32"] = struct.unpack("!I", data[0:4])[0]
        info["field_4_u32"] = struct.unpack("!I", data[4:8])[0]

    return info


def decode_match(match_dir: Path, verbose: bool = False,
                 bf_key: bytes | None = None) -> MatchCapture:
    """Decode all packets from a match capture directory.

    If bf_key (16 bytes) is provided, encrypted messages are decrypted with
    Blowfish ECB instead of XOR, and opcodes are validated.
    """
    packets_bin = match_dir / "packets.bin"
    if not packets_bin.exists():
        print(f"Error: {packets_bin} not found", file=sys.stderr)
        sys.exit(1)

    # Load metadata
    meta_path = match_dir / "match_meta.json"
    match_id = "unknown"
    if meta_path.exists():
        try:
            meta = json.loads(meta_path.read_text())
            match_id = meta.get("match_id", "unknown")
        except Exception:
            pass

    capture = MatchCapture(match_id=match_id, match_dir=match_dir, bf_key=bf_key)

    # Step 1: Read raw segments
    capture.segments = read_segments(packets_bin)
    print(f"Read {len(capture.segments)} TCP segments from {packets_bin}")

    # Step 2: Concatenate into streams and parse messages
    cs_stream, sc_stream = segments_to_streams(capture.segments)
    capture.cs_messages = parse_messages(cs_stream, "C->S")
    capture.sc_messages = parse_messages(sc_stream, "S->C")
    print(f"Parsed {len(capture.cs_messages)} C->S + {len(capture.sc_messages)} S->C messages")

    # Step 3: Parse handshake (plaintext)
    capture.handshake_ip, capture.handshake_port, capture.handshake_version = \
        parse_handshake(capture.cs_messages)
    print(f"Handshake: version={capture.handshake_version}, "
          f"IP={capture.handshake_ip}, port={capture.handshake_port}")

    use_blowfish = bf_key is not None and len(bf_key) == 16

    if use_blowfish:
        print(f"Blowfish key: {bf_key.hex()}")
        print("Decryption mode: Blowfish ECB (8-byte blocks)")
    else:
        # Step 4: Detect XOR key
        capture.xor_key = detect_xor_key(capture.sc_messages, capture.cs_messages)
        print(f"XOR key: {capture.xor_key.hex()}")

    # Step 5: Decrypt all messages (skip handshake messages)
    # C->S #0 (handshake) and S->C #0 (ack) are plaintext
    for msgs in [capture.cs_messages, capture.sc_messages]:
        for i, msg in enumerate(msgs):
            if i == 0:
                msg.decrypted = msg.content  # handshake is plaintext
            elif use_blowfish:
                msg.decrypted = blowfish_ecb_decrypt(msg.content, bf_key)
            else:
                msg.decrypted = xor_decrypt(msg.content, capture.xor_key)

    # Step 6: Classify and analyze messages
    all_msgs = []
    for msg in capture.cs_messages:
        is_hs = (msg.msg_index == 0)
        msg_type = classify_message(msg, is_hs)
        all_msgs.append((msg, msg_type))

    for msg in capture.sc_messages:
        is_hs = (msg.msg_index == 0)
        msg_type = classify_message(msg, is_hs)
        all_msgs.append((msg, msg_type))

    # Print summary
    print(f"\n{'='*70}")
    print(f"Match: {match_id[:8]}...")
    if use_blowfish:
        print(f"Blowfish Key: {bf_key.hex()}")
    else:
        print(f"XOR Key: {capture.xor_key.hex()}")
    print(f"{'='*70}")

    # ── Blowfish opcode validation ──
    if use_blowfish:
        valid_count = 0
        invalid_count = 0
        opcode_dist: Counter[int] = Counter()
        invalid_examples: list[tuple[str, int, int, bytes]] = []
        for msgs, direction in [(capture.cs_messages, "C->S"), (capture.sc_messages, "S->C")]:
            for i, msg in enumerate(msgs):
                if i == 0:
                    continue  # skip plaintext handshake
                opcode, is_valid = check_opcode(msg.decrypted)
                if opcode is not None:
                    if is_valid:
                        valid_count += 1
                        opcode_dist[opcode] += 1
                    else:
                        invalid_count += 1
                        if len(invalid_examples) < 10:
                            invalid_examples.append((direction, i, opcode, msg.decrypted[:16]))
        total = valid_count + invalid_count
        if total > 0:
            pct = valid_count / total * 100
            print(f"\n--- Blowfish Opcode Validation ---")
            print(f"  Valid opcodes ({OPCODE_MIN:#06x}-{OPCODE_MAX:#06x}): "
                  f"{valid_count}/{total} ({pct:.1f}%)")
            if invalid_count:
                print(f"  Invalid opcodes: {invalid_count}")
                for d, idx, op, sample in invalid_examples[:5]:
                    print(f"    {d} #{idx}: opcode={op:#06x} dec={sample.hex()}")
            if pct >= 80:
                print(f"  [+] Key looks CORRECT (>= 80% valid opcodes)")
            elif pct >= 50:
                print(f"  [?] Key might be correct ({pct:.0f}% valid)")
            else:
                print(f"  [-] Key likely WRONG (< 50% valid opcodes)")

            if opcode_dist:
                print(f"\n  Top opcodes (decrypted):")
                for op, count in opcode_dist.most_common(15):
                    print(f"    {op:#06x}: {count:>6}")

    # Message type distribution
    cs_types: Counter[str] = Counter()
    sc_types: Counter[str] = Counter()
    for msg in capture.cs_messages:
        is_hs = (msg.msg_index == 0)
        t = classify_message(msg, is_hs)
        cs_types[t] += 1
    for msg in capture.sc_messages:
        is_hs = (msg.msg_index == 0)
        t = classify_message(msg, is_hs)
        sc_types[t] += 1

    print(f"\nC->S Message Types ({len(capture.cs_messages)} total):")
    for t, count in cs_types.most_common():
        print(f"  {t:<25} {count:>6}")

    print(f"\nS->C Message Types ({len(capture.sc_messages)} total):")
    for t, count in sc_types.most_common():
        print(f"  {t:<25} {count:>6}")

    # Show handshake sequence
    print(f"\n--- Handshake Sequence ---")
    for i, msg in enumerate(capture.cs_messages[:3]):
        is_hs = (i == 0)
        t = classify_message(msg, is_hs)
        print(f"  C->S #{i}: {t} ({len(msg.content)}B)")
        print(f"    Raw:  {msg.content[:40].hex()}")
        print(f"    Dec:  {msg.decrypted[:40].hex()}")

    for i, msg in enumerate(capture.sc_messages[:5]):
        is_hs = (i == 0)
        t = classify_message(msg, is_hs)
        print(f"  S->C #{i}: {t} ({len(msg.content)}B)")
        print(f"    Raw:  {msg.content[:40].hex()}")
        print(f"    Dec:  {msg.decrypted[:40].hex()}")

    # Detailed analysis of common message types
    if verbose:
        print(f"\n--- Sample Decoded Messages ---")
        shown: Counter[str] = Counter()
        for msg in capture.sc_messages[1:]:  # skip handshake
            t = classify_message(msg, False)
            if shown[t] >= 3:
                continue
            shown[t] += 1
            info = analyze_decrypted_content(msg, t)
            if info:
                print(f"\n  S->C #{msg.msg_index} {t}:")
                print(f"    Decrypted: {msg.decrypted[:40].hex()}")
                for k, v in info.items():
                    if isinstance(v, float):
                        print(f"    {k}: {v:.4f}")
                    else:
                        print(f"    {k}: {v}")

    # Check tick timing
    print(f"\n--- Tick Timing Analysis ---")
    tick_msgs = [msg for msg in capture.sc_messages
                 if classify_message(msg, False) == "TICK_HEARTBEAT"]
    if len(tick_msgs) >= 10:
        # Correlate with TCP segment timestamps
        # Since we don't have per-message timestamps, use the segment times
        total_time = capture.segments[-1].timestamp - capture.segments[0].timestamp
        print(f"  Match duration: {total_time:.1f}s")
        print(f"  Total ticks: {len(tick_msgs)}")
        print(f"  Tick rate: {len(tick_msgs)/total_time:.1f} Hz")

    # Analyze ENTITY_UPDATE_LG trailing zeros
    eu_msgs = [msg for msg in capture.sc_messages
               if classify_message(msg, False) == "ENTITY_UPDATE_LG"]
    if eu_msgs:
        zero_counts = []
        for msg in eu_msgs:
            zeros = sum(1 for b in msg.decrypted[16:] if b == 0)
            zero_counts.append(zeros)
        avg_zeros = sum(zero_counts) / len(zero_counts)
        print(f"\n  ENTITY_UPDATE_LG: {len(eu_msgs)} messages")
        print(f"  Avg trailing zeros: {avg_zeros:.1f} / 24 bytes")

    # Unique first-4-bytes in ENTITY_UPDATE_LG (potential entity IDs)
    if eu_msgs:
        entity_ids = Counter()
        for msg in eu_msgs:
            eid = struct.unpack("!I", msg.decrypted[0:4])[0]
            entity_ids[eid] += 1
        print(f"  Unique entity IDs (first 4 bytes): {len(entity_ids)}")
        print(f"  Top entity IDs:")
        for eid, count in entity_ids.most_common(10):
            print(f"    0x{eid:08x} ({eid}): {count} updates")

    return capture


def main():
    parser = argparse.ArgumentParser(
        description="Decode Vainglory in-match binary packets")
    parser.add_argument("match_dir", type=Path,
                        help="Path to match directory (containing packets.bin)")
    parser.add_argument("-v", "--verbose", action="store_true",
                        help="Show detailed message decoding")
    parser.add_argument("--all", action="store_true",
                        help="Decode all matches in the matches/ directory")
    parser.add_argument("--bf-key", type=str, default=None, metavar="HEX",
                        help="16-byte Blowfish key as 32-char hex string "
                             "(from patched binary stderr dump)")
    args = parser.parse_args()

    # Determine Blowfish key: explicit --bf-key or auto-derive from match_meta.json
    bf_key = None
    if args.bf_key:
        try:
            bf_key = bytes.fromhex(args.bf_key)
        except ValueError:
            print(f"Error: --bf-key must be a valid hex string, got: {args.bf_key!r}",
                  file=sys.stderr)
            sys.exit(1)
        if len(bf_key) != 16:
            print(f"Error: --bf-key must be exactly 16 bytes (32 hex chars), "
                  f"got {len(bf_key)} bytes", file=sys.stderr)
            sys.exit(1)
        print(f"Using explicit Blowfish key: {bf_key.hex()}")
    else:
        # Auto-derive from match_meta.json
        meta_path = args.match_dir / "match_meta.json"
        if meta_path.exists():
            try:
                meta = json.loads(meta_path.read_text())
                match_id = meta.get("match_id", "")
                if match_id:
                    bf_key = derive_blowfish_key(match_id)
                    print(f"Auto-derived key from match {match_id[:8]}: {bf_key.hex()}")
            except Exception as e:
                print(f"Warning: could not read match_meta.json: {e}", file=sys.stderr)

    if bf_key and not HAS_BLOWFISH:
        print("Error: pycryptodome required for Blowfish: pip install pycryptodome",
              file=sys.stderr)
        sys.exit(1)

    if args.all:
        matches_dir = args.match_dir
        for mdir in sorted(matches_dir.iterdir()):
            if mdir.is_dir() and (mdir / "packets.bin").exists():
                print(f"\n{'#'*70}")
                print(f"# {mdir.name}")
                print(f"{'#'*70}")
                decode_match(mdir, args.verbose, bf_key=bf_key)
                print()
    else:
        decode_match(args.match_dir, args.verbose, bf_key=bf_key)


if __name__ == "__main__":
    main()
