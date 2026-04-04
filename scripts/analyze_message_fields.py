#!/usr/bin/env python3
"""
analyze_message_fields.py — Deep field-level analysis of decrypted Vainglory
in-match protocol messages across multiple captured matches.

Analyzes TICK_HEARTBEAT, ENTITY_UPDATE_SM, ENTITY_UPDATE_LG, SNAPSHOT,
INPUT_ACK, and cross-validates field layouts across all available matches.

Usage:
    python3 scripts/analyze_message_fields.py

Output:
    reports/generated/message_field_analysis.md
"""

from __future__ import annotations

import math
import struct
import sys
from collections import Counter, defaultdict
from dataclasses import dataclass, field
from pathlib import Path
from typing import Optional

# ── Paths ──
BASE = Path(__file__).resolve().parent.parent
MATCHES_DIR = BASE / "mitm" / "matches"
REPORT_DIR = BASE / "reports" / "generated"

# ── Known matches and XOR keys ──
MATCHES = [
    ("20260403_150848_ff8a37e1", bytes.fromhex("7614a9b6d21ec669")),
    ("20260403_192414_8033dd36", bytes.fromhex("c93d500d71cc89e2")),
    ("20260403_213752_b98d3255", bytes.fromhex("8a5d03e715e03ec2")),
]


# ── Data structures ──
@dataclass
class RawSegment:
    timestamp: float
    direction: str
    data: bytes


@dataclass
class Message:
    direction: str
    length: int
    content: bytes
    decrypted: bytes
    msg_index: int
    stream_offset: int
    timestamp: float = 0.0


@dataclass
class MatchData:
    name: str
    xor_key: bytes
    cs_messages: list[Message] = field(default_factory=list)
    sc_messages: list[Message] = field(default_factory=list)
    segments: list[RawSegment] = field(default_factory=list)
    duration: float = 0.0


# ── Packet I/O (mirrored from decode_match_packets.py) ──
def read_segments(packets_bin: Path) -> list[RawSegment]:
    data = packets_bin.read_bytes()
    segments = []
    offset = 0
    while offset + 13 <= len(data):
        ts = struct.unpack("!d", data[offset:offset + 8])[0]
        direction = "C->S" if data[offset + 8] == 0 else "S->C"
        length = struct.unpack("!I", data[offset + 9:offset + 13])[0]
        if offset + 13 + length > len(data):
            break
        payload = data[offset + 13:offset + 13 + length]
        segments.append(RawSegment(ts, direction, payload))
        offset += 13 + length
    return segments


def segments_to_streams(segments: list[RawSegment]):
    cs = bytearray()
    sc = bytearray()
    for seg in segments:
        if seg.direction == "C->S":
            cs.extend(seg.data)
        else:
            sc.extend(seg.data)
    return cs, sc


def parse_messages(stream: bytearray, direction: str) -> list[Message]:
    messages = []
    offset = 0
    idx = 0
    while offset + 2 <= len(stream):
        content_len = struct.unpack("!H", stream[offset:offset + 2])[0]
        total = content_len + 2
        if offset + total > len(stream):
            break
        content = bytes(stream[offset + 2:offset + total])
        messages.append(Message(
            direction=direction,
            length=content_len,
            content=content,
            decrypted=content,
            msg_index=idx,
            stream_offset=offset,
        ))
        idx += 1
        offset += total
    return messages


def xor_decrypt(data: bytes, key: bytes) -> bytes:
    result = bytearray(len(data))
    for i in range(len(data)):
        result[i] = data[i] ^ key[i % 8]
    return bytes(result)


def assign_timestamps(messages: list[Message], segments: list[RawSegment], direction: str):
    """Roughly assign segment timestamps to messages."""
    dir_segs = [s for s in segments if s.direction == direction]
    if not dir_segs:
        return
    seg_idx = 0
    bytes_consumed = 0
    for msg in messages:
        while seg_idx < len(dir_segs) - 1:
            seg_end = bytes_consumed + len(dir_segs[seg_idx].data)
            if msg.stream_offset < seg_end:
                break
            bytes_consumed = seg_end
            seg_idx += 1
        msg.timestamp = dir_segs[seg_idx].timestamp


def load_match(name: str, key: bytes) -> MatchData:
    match_dir = MATCHES_DIR / name
    packets_bin = match_dir / "packets.bin"
    if not packets_bin.exists():
        print(f"  WARNING: {packets_bin} not found, skipping", file=sys.stderr)
        return MatchData(name=name, xor_key=key)

    segments = read_segments(packets_bin)
    cs_stream, sc_stream = segments_to_streams(segments)
    cs_messages = parse_messages(cs_stream, "C->S")
    sc_messages = parse_messages(sc_stream, "S->C")

    # Decrypt (index 0 is plaintext handshake)
    for msgs in [cs_messages, sc_messages]:
        for i, msg in enumerate(msgs):
            if i == 0:
                msg.decrypted = msg.content
            else:
                msg.decrypted = xor_decrypt(msg.content, key)

    # Assign timestamps
    assign_timestamps(cs_messages, segments, "C->S")
    assign_timestamps(sc_messages, segments, "S->C")

    duration = segments[-1].timestamp - segments[0].timestamp if segments else 0.0

    return MatchData(
        name=name, xor_key=key,
        cs_messages=cs_messages, sc_messages=sc_messages,
        segments=segments, duration=duration,
    )


def classify(msg: Message) -> str:
    d = msg.direction
    n = len(msg.decrypted)
    if msg.msg_index == 0:
        if d == "C->S":
            return "HANDSHAKE_HELLO"
        return "HANDSHAKE_ACK"
    if d == "C->S":
        if n == 8:
            return "INPUT_ACK"
        if n == 16:
            return "INPUT_EXTENDED"
        if n == 72:
            return "AUTH_TOKEN"
        return f"C_MSG_{n}B"
    # S->C
    if n == 3 and msg.msg_index == 0:
        return "HANDSHAKE_ACK"
    if n == 8:
        return "TICK_SMALL"
    if n == 16:
        return "TICK_HEARTBEAT"
    if n == 24:
        return "ENTITY_UPDATE_SM"
    if n == 40:
        return "ENTITY_UPDATE_LG"
    if n == 48:
        return "ENTITY_UPDATE_XL"
    if n == 128:
        return "INPUT_ACK_REPLY"
    if n == 104:
        return "SERVER_HELLO"
    if n == 72:
        return "SERVER_SETUP"
    if n == 2592:
        return "SNAPSHOT"
    if n > 500:
        return f"SNAPSHOT_{n}B"
    return f"S_MSG_{n}B"


# ── Analysis helpers ──
def u32_be(data: bytes, off: int) -> int:
    return struct.unpack(">I", data[off:off + 4])[0]


def u32_le(data: bytes, off: int) -> int:
    return struct.unpack("<I", data[off:off + 4])[0]


def u16_be(data: bytes, off: int) -> int:
    return struct.unpack(">H", data[off:off + 2])[0]


def u16_le(data: bytes, off: int) -> int:
    return struct.unpack("<H", data[off:off + 2])[0]


def f32_be(data: bytes, off: int) -> float:
    return struct.unpack(">f", data[off:off + 4])[0]


def f32_le(data: bytes, off: int) -> float:
    return struct.unpack("<f", data[off:off + 4])[0]


def f64_be(data: bytes, off: int) -> float:
    return struct.unpack(">d", data[off:off + 8])[0]


def f64_le(data: bytes, off: int) -> float:
    return struct.unpack("<d", data[off:off + 8])[0]


def is_reasonable_float(val: float, lo: float = -100000.0, hi: float = 100000.0) -> bool:
    if math.isnan(val) or math.isinf(val):
        return False
    return lo <= val <= hi


def byte_entropy(data: bytes) -> float:
    """Shannon entropy of byte sequence."""
    if not data:
        return 0.0
    counts = Counter(data)
    total = len(data)
    entropy = 0.0
    for c in counts.values():
        p = c / total
        if p > 0:
            entropy -= p * math.log2(p)
    return entropy


def field_entropy(values: list[int]) -> float:
    """Entropy of a list of integer values."""
    if not values:
        return 0.0
    counts = Counter(values)
    total = len(values)
    entropy = 0.0
    for c in counts.values():
        p = c / total
        if p > 0:
            entropy -= p * math.log2(p)
    return entropy


def autocorrelation(data: bytes, max_stride: int = 500) -> list[tuple[int, float]]:
    """Compute autocorrelation for finding repeating structures."""
    results = []
    n = len(data)
    for stride in range(4, min(max_stride, n // 2)):
        matches = 0
        comparisons = 0
        for i in range(n - stride):
            if data[i] == data[i + stride]:
                matches += 1
            comparisons += 1
        if comparisons > 0:
            results.append((stride, matches / comparisons))
    return results


def check_sequential(values: list[int]) -> dict:
    """Check if a list of values is sequential."""
    if len(values) < 2:
        return {"sequential": False, "count": len(values)}
    diffs = [values[i + 1] - values[i] for i in range(len(values) - 1)]
    diff_counter = Counter(diffs)
    most_common_diff, most_common_count = diff_counter.most_common(1)[0]
    pct = most_common_count / len(diffs) * 100
    return {
        "sequential": pct > 90,
        "most_common_step": most_common_diff,
        "step_pct": pct,
        "min_val": min(values),
        "max_val": max(values),
        "unique": len(set(values)),
        "count": len(values),
    }


# ── Per-type analysis functions ──
def analyze_tick_heartbeat(matches: list[MatchData]) -> str:
    """Analyze 16-byte TICK_HEARTBEAT messages."""
    lines = []
    lines.append("## 1. TICK_HEARTBEAT (16B content, S->C)")
    lines.append("")
    lines.append("Most frequent S->C message type (~100-143 Hz tick rate).")
    lines.append("")

    for match in matches:
        msgs = [m for m in match.sc_messages if classify(m) == "TICK_HEARTBEAT"]
        if not msgs:
            continue

        lines.append(f"### Match: {match.name}")
        lines.append(f"- Count: {len(msgs)}")
        lines.append(f"- Duration: {match.duration:.1f}s")
        lines.append(f"- Rate: {len(msgs) / match.duration:.1f} Hz")
        lines.append("")

        # Extract fields in both BE and LE
        f0_be = [u32_be(m.decrypted, 0) for m in msgs]
        f4_be = [u32_be(m.decrypted, 4) for m in msgs]
        f8_be = [u32_be(m.decrypted, 8) for m in msgs]
        f12_be = [u32_be(m.decrypted, 12) for m in msgs]

        f0_le = [u32_le(m.decrypted, 0) for m in msgs]
        f4_le = [u32_le(m.decrypted, 4) for m in msgs]
        f8_le = [u32_le(m.decrypted, 8) for m in msgs]
        f12_le = [u32_le(m.decrypted, 12) for m in msgs]

        # Check sequential for each field
        for label, vals in [
            ("field[0:4] BE", f0_be), ("field[0:4] LE", f0_le),
            ("field[4:8] BE", f4_be), ("field[4:8] LE", f4_le),
            ("field[8:12] BE", f8_be), ("field[8:12] LE", f8_le),
            ("field[12:16] BE", f12_be), ("field[12:16] LE", f12_le),
        ]:
            seq = check_sequential(vals)
            if seq["sequential"]:
                lines.append(f"  **{label}: SEQUENTIAL** step={seq['most_common_step']}, "
                             f"range=[{seq['min_val']}, {seq['max_val']}], "
                             f"unique={seq['unique']}/{seq['count']}, "
                             f"{seq['step_pct']:.1f}% consistent")
            else:
                lines.append(f"  {label}: NOT sequential "
                             f"(step={seq['most_common_step']}, {seq['step_pct']:.1f}% consistent, "
                             f"unique={seq['unique']}/{seq['count']}, "
                             f"range=[{seq['min_val']}, {seq['max_val']}])")

        lines.append("")

        # Float interpretation
        lines.append("  Float interpretation (first 10 ticks):")
        for i in range(min(10, len(msgs))):
            d = msgs[i].decrypted
            fbe = [f32_be(d, o) for o in range(0, 16, 4)]
            fle = [f32_le(d, o) for o in range(0, 16, 4)]
            lines.append(f"    #{i}: BE=[{fbe[0]:.4g}, {fbe[1]:.4g}, {fbe[2]:.4g}, {fbe[3]:.4g}] "
                         f"LE=[{fle[0]:.4g}, {fle[1]:.4g}, {fle[2]:.4g}, {fle[3]:.4g}]")
        lines.append("")

        # Entropy per 4-byte field
        lines.append("  Per-field entropy (over all messages):")
        for off, name in [(0, "field[0:4]"), (4, "field[4:8]"), (8, "field[8:12]"), (12, "field[12:16]")]:
            all_bytes = b"".join(m.decrypted[off:off + 4] for m in msgs)
            ent = byte_entropy(all_bytes)
            be_vals = [u32_be(m.decrypted, off) for m in msgs]
            fe = field_entropy(be_vals)
            lines.append(f"    {name}: byte_entropy={ent:.3f}/8.0, "
                         f"value_entropy={fe:.1f} bits, "
                         f"unique_values={len(set(be_vals))}/{len(msgs)}")
        lines.append("")

        # Value progression for first 100 ticks (text-based)
        lines.append("  Value progression (first 100 ticks, u32 BE):")
        lines.append("  ```")
        lines.append(f"  {'idx':>4}  {'field0':>12}  {'field4':>12}  {'field8':>12}  {'field12':>12}")
        for i in range(min(100, len(msgs))):
            d = msgs[i].decrypted
            lines.append(f"  {i:4d}  {u32_be(d,0):12d}  {u32_be(d,4):12d}  "
                         f"{u32_be(d,8):12d}  {u32_be(d,12):12d}")
        lines.append("  ```")
        lines.append("")

        # Also show LE progression for first 20
        lines.append("  Value progression (first 20 ticks, u32 LE):")
        lines.append("  ```")
        lines.append(f"  {'idx':>4}  {'field0':>12}  {'field4':>12}  {'field8':>12}  {'field12':>12}")
        for i in range(min(20, len(msgs))):
            d = msgs[i].decrypted
            lines.append(f"  {i:4d}  {u32_le(d,0):12d}  {u32_le(d,4):12d}  "
                         f"{u32_le(d,8):12d}  {u32_le(d,12):12d}")
        lines.append("  ```")
        lines.append("")

        # Byte-level patterns: check each byte position independently
        lines.append("  Per-byte analysis (16 bytes, unique values / total):")
        for b in range(16):
            vals = [m.decrypted[b] for m in msgs]
            unique = len(set(vals))
            common = Counter(vals).most_common(3)
            common_str = ", ".join(f"0x{v:02x}({c})" for v, c in common)
            lines.append(f"    byte[{b:2d}]: {unique:4d} unique / {len(msgs)} — top: {common_str}")
        lines.append("")

        # Check if u16 fields might make more sense
        lines.append("  u16 interpretation (first 20 ticks):")
        lines.append("  ```")
        header = "  " + "  ".join(f"h{i}{'BE':>6}{'LE':>6}" for i in range(8))
        lines.append(f"  {'idx':>4}" + "  " + "  ".join(f"u16[{i*2}:{i*2+2}]BE" for i in range(8)))
        for i in range(min(20, len(msgs))):
            d = msgs[i].decrypted
            vals = "  ".join(f"{u16_be(d, o*2):>10}" for o in range(8))
            lines.append(f"  {i:4d}  {vals}")
        lines.append("  ```")
        lines.append("")

    return "\n".join(lines)


def analyze_entity_update_sm(matches: list[MatchData]) -> str:
    """Analyze 24-byte ENTITY_UPDATE_SM messages."""
    lines = []
    lines.append("## 2. ENTITY_UPDATE_SM (24B content, S->C)")
    lines.append("")
    lines.append("Second most common message type. 6 x 4-byte fields.")
    lines.append("")

    for match in matches:
        msgs = [m for m in match.sc_messages if classify(m) == "ENTITY_UPDATE_SM"]
        if not msgs:
            continue

        lines.append(f"### Match: {match.name}")
        lines.append(f"- Count: {len(msgs)}")
        lines.append("")

        # Extract all 6 fields in both BE and LE
        field_names = ["field[0:4]", "field[4:8]", "field[8:12]",
                       "field[12:16]", "field[16:20]", "field[20:24]"]

        for off_idx, (off, fname) in enumerate(zip(range(0, 24, 4), field_names)):
            be_vals = [u32_be(m.decrypted, off) for m in msgs]
            le_vals = [u32_le(m.decrypted, off) for m in msgs]
            fbe_vals = [f32_be(m.decrypted, off) for m in msgs]
            fle_vals = [f32_le(m.decrypted, off) for m in msgs]

            reasonable_be = sum(1 for v in fbe_vals if is_reasonable_float(v, -5000, 5000))
            reasonable_le = sum(1 for v in fle_vals if is_reasonable_float(v, -5000, 5000))

            lines.append(f"  **{fname}** (offset {off}):")
            lines.append(f"    u32 BE: unique={len(set(be_vals))}, "
                         f"range=[{min(be_vals)}, {max(be_vals)}]")
            lines.append(f"    u32 LE: unique={len(set(le_vals))}, "
                         f"range=[{min(le_vals)}, {max(le_vals)}]")
            lines.append(f"    f32 BE reasonable (-5k..5k): {reasonable_be}/{len(msgs)} "
                         f"({reasonable_be/len(msgs)*100:.1f}%)")
            lines.append(f"    f32 LE reasonable (-5k..5k): {reasonable_le}/{len(msgs)} "
                         f"({reasonable_le/len(msgs)*100:.1f}%)")

            # Show top values
            be_counter = Counter(be_vals)
            lines.append(f"    Top u32 BE values: " +
                         ", ".join(f"0x{v:08x}({c})" for v, c in be_counter.most_common(5)))

        lines.append("")

        # Grouping analysis: do field[16:20] and field[20:24] repeat in bursts?
        lines.append("  **Burst grouping analysis (field[16:20], field[20:24]):**")
        f16 = [u32_be(m.decrypted, 16) for m in msgs]
        f20 = [u32_be(m.decrypted, 20) for m in msgs]

        # Find runs where both field16 and field20 are the same
        runs = []
        if len(f16) > 0:
            cur_start = 0
            for i in range(1, len(f16)):
                if f16[i] != f16[cur_start] or f20[i] != f20[cur_start]:
                    runs.append((cur_start, i - 1, f16[cur_start], f20[cur_start]))
                    cur_start = i
            runs.append((cur_start, len(f16) - 1, f16[cur_start], f20[cur_start]))

        lines.append(f"    Total bursts: {len(runs)}")
        lines.append(f"    Burst sizes: min={min(r[1]-r[0]+1 for r in runs)}, "
                     f"max={max(r[1]-r[0]+1 for r in runs)}, "
                     f"median={sorted(r[1]-r[0]+1 for r in runs)[len(runs)//2]}")

        # Show first 20 bursts
        lines.append("    First 20 bursts:")
        for r in runs[:20]:
            lines.append(f"      msgs[{r[0]}..{r[1]}] (size {r[1]-r[0]+1}): "
                         f"f16=0x{r[2]:08x}, f20=0x{r[3]:08x}")
        lines.append("")

        # Unique pairs for last 8 bytes
        pairs = Counter((u32_be(m.decrypted, 16), u32_be(m.decrypted, 20)) for m in msgs)
        lines.append(f"    Unique (field16, field20) pairs: {len(pairs)}")
        lines.append(f"    Top pairs:")
        for (v16, v20), count in pairs.most_common(10):
            lines.append(f"      (0x{v16:08x}, 0x{v20:08x}): {count} occurrences")
        lines.append("")

        # Sample messages (first 20)
        lines.append("  Sample messages (first 20, all fields u32 BE and LE):")
        lines.append("  ```")
        lines.append(f"  {'idx':>4}  {'f0_BE':>12}  {'f4_BE':>12}  {'f8_BE':>12}  "
                     f"{'f12_BE':>12}  {'f16_BE':>12}  {'f20_BE':>12}")
        for i in range(min(20, len(msgs))):
            d = msgs[i].decrypted
            vals = "  ".join(f"{u32_be(d, o):12d}" for o in range(0, 24, 4))
            lines.append(f"  {i:4d}  {vals}")
        lines.append("  ```")
        lines.append("")
        lines.append("  Same as above, LE:")
        lines.append("  ```")
        for i in range(min(20, len(msgs))):
            d = msgs[i].decrypted
            vals = "  ".join(f"{u32_le(d, o):12d}" for o in range(0, 24, 4))
            lines.append(f"  {i:4d}  {vals}")
        lines.append("  ```")
        lines.append("")

        # Float interpretation
        lines.append("  Sample messages as f32 LE (first 20):")
        lines.append("  ```")
        lines.append(f"  {'idx':>4}  {'f0':>12}  {'f4':>12}  {'f8':>12}  "
                     f"{'f12':>12}  {'f16':>12}  {'f20':>12}")
        for i in range(min(20, len(msgs))):
            d = msgs[i].decrypted
            vals = "  ".join(f"{f32_le(d, o):12.4f}" for o in range(0, 24, 4))
            lines.append(f"  {i:4d}  {vals}")
        lines.append("  ```")
        lines.append("")

        lines.append("  Sample messages as f32 BE (first 20):")
        lines.append("  ```")
        for i in range(min(20, len(msgs))):
            d = msgs[i].decrypted
            vals = "  ".join(f"{f32_be(d, o):12.4f}" for o in range(0, 24, 4))
            lines.append(f"  {i:4d}  {vals}")
        lines.append("  ```")
        lines.append("")

    return "\n".join(lines)


def analyze_entity_update_lg(matches: list[MatchData]) -> str:
    """Analyze 40-byte ENTITY_UPDATE_LG messages (16B data + 24B zeros)."""
    lines = []
    lines.append("## 3. ENTITY_UPDATE_LG (40B content, S->C)")
    lines.append("")
    lines.append("16 bytes of data + 24 bytes of trailing zeros (confirmed by XOR key pattern).")
    lines.append("")

    for match in matches:
        msgs = [m for m in match.sc_messages if classify(m) == "ENTITY_UPDATE_LG"]
        if not msgs:
            continue

        lines.append(f"### Match: {match.name}")
        lines.append(f"- Count: {len(msgs)}")
        lines.append("")

        # Verify trailing zeros
        zero_counts = [sum(1 for b in m.decrypted[16:] if b == 0) for m in msgs]
        avg_zeros = sum(zero_counts) / len(zero_counts)
        all_zero = sum(1 for z in zero_counts if z == 24)
        lines.append(f"  Trailing bytes [16:40] all zeros: {all_zero}/{len(msgs)} "
                     f"({all_zero/len(msgs)*100:.1f}%)")
        lines.append(f"  Avg zero bytes in trailing: {avg_zeros:.1f}/24")
        lines.append("")

        # Focus on first 16 bytes: 4 x u32 fields
        f0_be = [u32_be(m.decrypted, 0) for m in msgs]
        f4_be = [u32_be(m.decrypted, 4) for m in msgs]
        f8_be = [u32_be(m.decrypted, 8) for m in msgs]
        f12_be = [u32_be(m.decrypted, 12) for m in msgs]

        f0_le = [u32_le(m.decrypted, 0) for m in msgs]
        f4_le = [u32_le(m.decrypted, 4) for m in msgs]
        f8_le = [u32_le(m.decrypted, 8) for m in msgs]
        f12_le = [u32_le(m.decrypted, 12) for m in msgs]

        # Entity ID analysis (first 4 bytes)
        lines.append("  **field[0:4] — Candidate entity ID:**")
        unique_be = len(set(f0_be))
        unique_le = len(set(f0_le))
        lines.append(f"    u32 BE unique: {unique_be}")
        lines.append(f"    u32 LE unique: {unique_le}")

        id_counter_be = Counter(f0_be)
        lines.append(f"    Top IDs (u32 BE):")
        for eid, count in id_counter_be.most_common(15):
            lines.append(f"      0x{eid:08x} ({eid}): {count} updates")

        id_counter_le = Counter(f0_le)
        lines.append(f"    Top IDs (u32 LE):")
        for eid, count in id_counter_le.most_common(15):
            lines.append(f"      0x{eid:08x} ({eid}): {count} updates")
        lines.append("")

        # Position analysis: try f32 interpretation for bytes 4-11
        lines.append("  **field[4:8] and field[8:12] — Candidate position x/y:**")
        for off, fname in [(4, "field[4:8]"), (8, "field[8:12]")]:
            fbe = [f32_be(m.decrypted, off) for m in msgs]
            fle = [f32_le(m.decrypted, off) for m in msgs]

            reas_be = sum(1 for v in fbe if is_reasonable_float(v, -200, 200))
            reas_le = sum(1 for v in fle if is_reasonable_float(v, -200, 200))
            reas_be_wide = sum(1 for v in fbe if is_reasonable_float(v, -5000, 5000))
            reas_le_wide = sum(1 for v in fle if is_reasonable_float(v, -5000, 5000))

            lines.append(f"    {fname}:")
            lines.append(f"      f32 BE in [-200,200]: {reas_be}/{len(msgs)} ({reas_be/len(msgs)*100:.1f}%)")
            lines.append(f"      f32 LE in [-200,200]: {reas_le}/{len(msgs)} ({reas_le/len(msgs)*100:.1f}%)")
            lines.append(f"      f32 BE in [-5k,5k]:   {reas_be_wide}/{len(msgs)} ({reas_be_wide/len(msgs)*100:.1f}%)")
            lines.append(f"      f32 LE in [-5k,5k]:   {reas_le_wide}/{len(msgs)} ({reas_le_wide/len(msgs)*100:.1f}%)")

        lines.append("")

        # Check if messages with same field[0:4] share field[8:15]
        lines.append("  **Shared bytes[8:16] for same entity ID (first 4 bytes):**")
        by_id = defaultdict(list)
        for m in msgs:
            eid = u32_be(m.decrypted, 0)
            by_id[eid].append(m.decrypted)

        for eid, data_list in sorted(by_id.items(), key=lambda x: -len(x[1]))[:10]:
            # Check if bytes 8:16 are the same across all updates for this ID
            unique_8_16 = set(d[8:16] for d in data_list)
            unique_8_12 = set(d[8:12] for d in data_list)
            unique_12_16 = set(d[12:16] for d in data_list)
            lines.append(f"    ID 0x{eid:08x} ({len(data_list)} updates): "
                         f"unique[8:16]={len(unique_8_16)}, "
                         f"unique[8:12]={len(unique_8_12)}, "
                         f"unique[12:16]={len(unique_12_16)}")
        lines.append("")

        # Sample raw hex
        lines.append("  Sample messages (first 30, hex of data[0:16]):")
        lines.append("  ```")
        for i in range(min(30, len(msgs))):
            d = msgs[i].decrypted
            lines.append(f"  {i:4d}: {d[0:4].hex()} {d[4:8].hex()} {d[8:12].hex()} {d[12:16].hex()}")
        lines.append("  ```")
        lines.append("")

        # Also show u32 BE/LE and f32 interpretations
        lines.append("  Sample messages (first 30, u32 BE | u32 LE | f32 BE | f32 LE):")
        lines.append("  ```")
        for i in range(min(30, len(msgs))):
            d = msgs[i].decrypted
            line_parts = []
            for off in range(0, 16, 4):
                be = u32_be(d, off)
                le = u32_le(d, off)
                fbe = f32_be(d, off)
                fle = f32_le(d, off)
                line_parts.append(f"{be:>11} {le:>11} {fbe:>12.4g} {fle:>12.4g}")
            lines.append(f"  {i:4d}: " + " | ".join(line_parts))
        lines.append("  ```")
        lines.append("")

    # Cross-match entity ID comparison
    lines.append("### Cross-match entity ID comparison:")
    for match in matches:
        msgs = [m for m in match.sc_messages if classify(m) == "ENTITY_UPDATE_LG"]
        if msgs:
            ids = set(u32_be(m.decrypted, 0) for m in msgs)
            lines.append(f"  {match.name}: {len(ids)} unique entity IDs")
            lines.append(f"    IDs: {sorted(ids)[:20]}{'...' if len(ids) > 20 else ''}")

    lines.append("")
    return "\n".join(lines)


def analyze_snapshot(matches: list[MatchData]) -> str:
    """Analyze 2592-byte SNAPSHOT messages."""
    lines = []
    lines.append("## 4. SNAPSHOT (2592B content, S->C)")
    lines.append("")
    lines.append("Large periodic messages. Content is 2592 bytes (2-byte length prefix says 2592, "
                 "so 2590 bytes of actual content after the prefix is parsed, but the content field "
                 "is the full 2592 bytes after the 2-byte length).")
    lines.append("")

    for match in matches:
        msgs = [m for m in match.sc_messages if classify(m) == "SNAPSHOT"]
        if not msgs:
            continue

        lines.append(f"### Match: {match.name}")
        lines.append(f"- Count: {len(msgs)}")
        lines.append(f"- Content size: {len(msgs[0].decrypted)} bytes")
        lines.append("")

        # Basic structure: look for repeating patterns
        data0 = msgs[0].decrypted

        # Check for entity record sizes via divisibility
        content_len = len(data0)
        lines.append("  **Divisibility analysis (content_len / N):**")
        for n in range(2, 50):
            if content_len % n == 0:
                stride = content_len // n
                lines.append(f"    {content_len} / {n} = {stride} bytes per record")
        lines.append("")

        # Autocorrelation to find stride
        lines.append("  **Autocorrelation analysis (first snapshot):**")
        ac = autocorrelation(data0, max_stride=min(600, content_len // 3))
        # Find peaks
        if ac:
            sorted_ac = sorted(ac, key=lambda x: -x[1])
            lines.append("    Top 20 autocorrelation peaks:")
            for stride, score in sorted_ac[:20]:
                lines.append(f"      stride={stride}: correlation={score:.4f}")
        lines.append("")

        # Try specific record sizes and check similarity within records
        lines.append("  **Record boundary analysis:**")
        for record_size in [162, 216, 259, 288, 324, 360, 432, 648, 864]:
            if content_len % record_size != 0:
                continue
            n_records = content_len // record_size
            # Compare first bytes of each record
            first_bytes = []
            for r in range(n_records):
                first_bytes.append(data0[r * record_size:(r * record_size) + min(4, record_size)])
            # Check if records share structure
            lines.append(f"    record_size={record_size} ({n_records} records):")
            for r in range(n_records):
                chunk = data0[r * record_size:(r + 1) * record_size]
                zeros = sum(1 for b in chunk if b == 0)
                ent = byte_entropy(chunk)
                lines.append(f"      record[{r}]: zeros={zeros}/{record_size}, entropy={ent:.2f}, "
                             f"first8={chunk[:8].hex()}, last8={chunk[-8:].hex()}")
        lines.append("")

        # Byte-level zero map (find which offsets are frequently zero)
        lines.append("  **Zero frequency by offset (across all snapshots):**")
        zero_freq = [0] * content_len
        for m in msgs:
            for i in range(content_len):
                if m.decrypted[i] == 0:
                    zero_freq[i] += 1

        # Find zero regions (runs of high-zero-frequency bytes)
        lines.append("    Regions where >80% of snapshots have zeros:")
        in_region = False
        region_start = 0
        for i in range(content_len):
            is_zero = zero_freq[i] > len(msgs) * 0.8
            if is_zero and not in_region:
                region_start = i
                in_region = True
            elif not is_zero and in_region:
                if i - region_start >= 4:
                    lines.append(f"      [{region_start}:{i}] ({i - region_start} bytes)")
                in_region = False
        if in_region and content_len - region_start >= 4:
            lines.append(f"      [{region_start}:{content_len}] ({content_len - region_start} bytes)")
        lines.append("")

        # Compare first snapshot to last snapshot (delta)
        if len(msgs) >= 2:
            first = msgs[0].decrypted
            last = msgs[-1].decrypted
            diff_bytes = sum(1 for a, b in zip(first, last) if a != b)
            lines.append(f"  **First vs last snapshot delta:** {diff_bytes}/{content_len} bytes differ "
                         f"({diff_bytes/content_len*100:.1f}%)")

            # Find which regions change
            change_regions = []
            in_change = False
            for i in range(content_len):
                if first[i] != last[i]:
                    if not in_change:
                        change_start = i
                        in_change = True
                else:
                    if in_change:
                        change_regions.append((change_start, i))
                        in_change = False
            if in_change:
                change_regions.append((change_start, content_len))

            lines.append(f"    Change regions: {len(change_regions)}")
            for start, end in change_regions[:30]:
                lines.append(f"      [{start}:{end}] ({end - start} bytes)")
            lines.append("")

        # Look for fixed-value regions across all snapshots
        lines.append("  **Constant regions across all snapshots:**")
        const_map = bytearray(b'\x01' * content_len)
        ref = msgs[0].decrypted
        for m in msgs[1:]:
            for i in range(content_len):
                if m.decrypted[i] != ref[i]:
                    const_map[i] = 0

        const_regions = []
        in_const = False
        for i in range(content_len):
            if const_map[i] and not in_const:
                const_start = i
                in_const = True
            elif not const_map[i] and in_const:
                if i - const_start >= 4:
                    const_regions.append((const_start, i))
                in_const = False
        if in_const and content_len - const_start >= 4:
            const_regions.append((const_start, content_len))

        total_const = sum(e - s for s, e in const_regions)
        lines.append(f"    Constant bytes: {total_const}/{content_len} ({total_const/content_len*100:.1f}%)")
        lines.append(f"    Constant regions (>=4 bytes):")
        for start, end in const_regions[:40]:
            val_hex = ref[start:min(start + 8, end)].hex()
            lines.append(f"      [{start}:{end}] ({end - start} bytes): {val_hex}...")
        lines.append("")

        # Try interpreting as floats at regular offsets
        lines.append("  **Float scan (first snapshot, LE, values in [-5000, 5000]):**")
        float_hits = []
        for off in range(0, content_len - 3, 4):
            val = f32_le(data0, off)
            if is_reasonable_float(val, -5000, 5000) and val != 0.0:
                float_hits.append((off, val))
        lines.append(f"    Reasonable f32 LE values: {len(float_hits)}/{content_len // 4} offsets")
        if float_hits:
            lines.append(f"    First 50 hits:")
            for off, val in float_hits[:50]:
                lines.append(f"      offset {off}: {val:.4f}")
        lines.append("")

        # Same for BE
        float_hits_be = []
        for off in range(0, content_len - 3, 4):
            val = f32_be(data0, off)
            if is_reasonable_float(val, -5000, 5000) and val != 0.0:
                float_hits_be.append((off, val))
        lines.append(f"    Reasonable f32 BE values: {len(float_hits_be)}/{content_len // 4} offsets")
        lines.append("")

        # Try to find the stride by examining multiple snapshots
        lines.append("  **Cross-snapshot field stability (checking which 4-byte fields vary):**")
        vary_count = [0] * (content_len // 4)
        ref_vals = [u32_le(ref, off) for off in range(0, content_len - 3, 4)]
        for m in msgs[1:min(50, len(msgs))]:
            for fi in range(content_len // 4):
                off = fi * 4
                if u32_le(m.decrypted, off) != ref_vals[fi]:
                    vary_count[fi] += 1

        varying_fields = [(fi, vary_count[fi]) for fi in range(len(vary_count)) if vary_count[fi] > 0]
        lines.append(f"    Fields that vary: {len(varying_fields)}/{content_len // 4}")
        if varying_fields:
            lines.append(f"    Varying field offsets (byte offset, change count):")
            for fi, vc in varying_fields[:80]:
                lines.append(f"      offset {fi * 4}: changes in {vc}/{min(49, len(msgs) - 1)} snapshots")
        lines.append("")

    return "\n".join(lines)


def analyze_input_ack(matches: list[MatchData]) -> str:
    """Analyze 8-byte INPUT_ACK messages (C->S)."""
    lines = []
    lines.append("## 5. INPUT_ACK (8B content, C->S)")
    lines.append("")
    lines.append("Very low rate (~0.5 Hz). Likely keepalives or acknowledgments.")
    lines.append("")

    for match in matches:
        msgs = [m for m in match.cs_messages if classify(m) == "INPUT_ACK"]
        if not msgs:
            continue

        lines.append(f"### Match: {match.name}")
        lines.append(f"- Count: {len(msgs)}")
        if match.duration > 0:
            lines.append(f"- Rate: {len(msgs) / match.duration:.2f} Hz")
        lines.append("")

        f0_be = [u32_be(m.decrypted, 0) for m in msgs]
        f4_be = [u32_be(m.decrypted, 4) for m in msgs]
        f0_le = [u32_le(m.decrypted, 0) for m in msgs]
        f4_le = [u32_le(m.decrypted, 4) for m in msgs]

        for label, vals in [
            ("field[0:4] BE", f0_be), ("field[0:4] LE", f0_le),
            ("field[4:8] BE", f4_be), ("field[4:8] LE", f4_le),
        ]:
            seq = check_sequential(vals)
            lines.append(f"  **{label}:**")
            lines.append(f"    Sequential: {seq['sequential']}")
            lines.append(f"    Most common step: {seq['most_common_step']} ({seq['step_pct']:.1f}%)")
            lines.append(f"    Range: [{seq['min_val']}, {seq['max_val']}]")
            lines.append(f"    Unique: {seq['unique']}/{seq['count']}")

        lines.append("")

        # Show all values
        lines.append("  All messages (u32 BE | u32 LE | hex):")
        lines.append("  ```")
        for i in range(min(50, len(msgs))):
            d = msgs[i].decrypted
            lines.append(f"  {i:4d}: BE=[{u32_be(d,0):>12}, {u32_be(d,4):>12}]  "
                         f"LE=[{u32_le(d,0):>12}, {u32_le(d,4):>12}]  "
                         f"hex={d.hex()}")
        if len(msgs) > 50:
            lines.append(f"  ... ({len(msgs) - 50} more)")
        lines.append("  ```")
        lines.append("")

        # Check timing
        if len(msgs) >= 2 and msgs[-1].timestamp > msgs[0].timestamp:
            intervals = []
            for i in range(1, len(msgs)):
                dt = msgs[i].timestamp - msgs[i - 1].timestamp
                if dt > 0:
                    intervals.append(dt)
            if intervals:
                lines.append(f"  Timing: avg interval = {sum(intervals)/len(intervals):.2f}s, "
                             f"min = {min(intervals):.3f}s, max = {max(intervals):.3f}s")
        lines.append("")

    return "\n".join(lines)


def analyze_tick_small(matches: list[MatchData]) -> str:
    """Analyze 8-byte TICK_SMALL messages (S->C)."""
    lines = []
    lines.append("## 6. TICK_SMALL (8B content, S->C)")
    lines.append("")

    for match in matches:
        msgs = [m for m in match.sc_messages if classify(m) == "TICK_SMALL"]
        if not msgs:
            continue

        lines.append(f"### Match: {match.name}")
        lines.append(f"- Count: {len(msgs)}")
        lines.append("")

        f0_be = [u32_be(m.decrypted, 0) for m in msgs]
        f4_be = [u32_be(m.decrypted, 4) for m in msgs]
        f0_le = [u32_le(m.decrypted, 0) for m in msgs]
        f4_le = [u32_le(m.decrypted, 4) for m in msgs]

        for label, vals in [
            ("field[0:4] BE", f0_be), ("field[0:4] LE", f0_le),
            ("field[4:8] BE", f4_be), ("field[4:8] LE", f4_le),
        ]:
            seq = check_sequential(vals)
            lines.append(f"  {label}: sequential={seq['sequential']}, "
                         f"step={seq['most_common_step']}, "
                         f"range=[{seq['min_val']}, {seq['max_val']}], "
                         f"unique={seq['unique']}/{seq['count']}")

        # Show first 20
        lines.append("  ```")
        for i in range(min(20, len(msgs))):
            d = msgs[i].decrypted
            lines.append(f"  {i:4d}: hex={d.hex()} "
                         f"BE=[{u32_be(d,0):>12}, {u32_be(d,4):>12}] "
                         f"LE=[{u32_le(d,0):>12}, {u32_le(d,4):>12}]")
        lines.append("  ```")
        lines.append("")

    return "\n".join(lines)


def cross_match_validation(matches: list[MatchData]) -> str:
    """Cross-match validation: check field ranges are consistent."""
    lines = []
    lines.append("## 7. Cross-Match Validation")
    lines.append("")
    lines.append("For each message type, compare field value ranges across all 3 matches. "
                 "If XOR decryption is correct, the same field positions should show similar "
                 "value distributions.")
    lines.append("")

    msg_types = ["TICK_HEARTBEAT", "ENTITY_UPDATE_SM", "ENTITY_UPDATE_LG",
                 "TICK_SMALL", "INPUT_ACK"]

    for msg_type in msg_types:
        lines.append(f"### {msg_type}")
        lines.append("")

        all_match_data = []
        for match in matches:
            if msg_type == "INPUT_ACK":
                msgs = [m for m in match.cs_messages if classify(m) == msg_type]
            else:
                msgs = [m for m in match.sc_messages if classify(m) == msg_type]

            if not msgs:
                continue

            content_len = len(msgs[0].decrypted)
            n_fields = content_len // 4
            field_data = {}
            for fi in range(n_fields):
                off = fi * 4
                be_vals = [u32_be(m.decrypted, off) for m in msgs]
                le_vals = [u32_le(m.decrypted, off) for m in msgs]
                field_data[fi] = {
                    "be_min": min(be_vals), "be_max": max(be_vals),
                    "be_mean": sum(be_vals) / len(be_vals),
                    "be_unique": len(set(be_vals)),
                    "le_min": min(le_vals), "le_max": max(le_vals),
                    "le_mean": sum(le_vals) / len(le_vals),
                    "le_unique": len(set(le_vals)),
                }
            all_match_data.append((match.name, len(msgs), field_data))

        if not all_match_data:
            lines.append("  No data available.")
            lines.append("")
            continue

        # For each field, compare ranges across matches
        n_fields = max(max(fd.keys()) for _, _, fd in all_match_data) + 1
        for fi in range(n_fields):
            off = fi * 4
            lines.append(f"  **field[{off}:{off+4}] (u32):**")
            lines.append(f"  {'Match':>40}  {'Count':>6}  {'BE min':>12}  {'BE max':>12}  "
                         f"{'BE mean':>12}  {'BE uniq':>8}  {'LE min':>12}  {'LE max':>12}")
            for mname, count, fd in all_match_data:
                if fi in fd:
                    d = fd[fi]
                    lines.append(f"  {mname:>40}  {count:6d}  {d['be_min']:12d}  {d['be_max']:12d}  "
                                 f"{d['be_mean']:12.0f}  {d['be_unique']:8d}  "
                                 f"{d['le_min']:12d}  {d['le_max']:12d}")
            lines.append("")

        # XOR validation: check zero-region consistency
        if msg_type == "ENTITY_UPDATE_LG":
            lines.append("  **Zero-region validation (bytes 16-39 should be all zeros):**")
            for match in matches:
                msgs = [m for m in match.sc_messages if classify(m) == msg_type]
                if not msgs:
                    continue
                all_zero = sum(1 for m in msgs if all(b == 0 for b in m.decrypted[16:]))
                lines.append(f"    {match.name}: {all_zero}/{len(msgs)} messages have all-zero trailing bytes")
            lines.append("")

    return "\n".join(lines)


def analyze_input_extended(matches: list[MatchData]) -> str:
    """Analyze 16-byte INPUT_EXTENDED messages (C->S)."""
    lines = []
    lines.append("## 8. INPUT_EXTENDED (16B content, C->S)")
    lines.append("")

    for match in matches:
        msgs = [m for m in match.cs_messages if classify(m) == "INPUT_EXTENDED"]
        if not msgs:
            continue

        lines.append(f"### Match: {match.name}")
        lines.append(f"- Count: {len(msgs)}")
        lines.append("")

        # Show all
        lines.append("  All messages (hex | u32 BE | u32 LE | f32 LE):")
        lines.append("  ```")
        for i in range(len(msgs)):
            d = msgs[i].decrypted
            hex_str = d.hex()
            be_vals = " ".join(f"{u32_be(d, o):>12}" for o in range(0, 16, 4))
            le_vals = " ".join(f"{u32_le(d, o):>12}" for o in range(0, 16, 4))
            fle_vals = " ".join(f"{f32_le(d, o):>12.4f}" for o in range(0, 16, 4))
            lines.append(f"  {i:4d}: {hex_str}")
            lines.append(f"        BE: {be_vals}")
            lines.append(f"        LE: {le_vals}")
            lines.append(f"        fLE: {fle_vals}")
        lines.append("  ```")
        lines.append("")

    return "\n".join(lines)


def analyze_server_hello(matches: list[MatchData]) -> str:
    """Analyze SERVER_HELLO and SERVER_SETUP messages."""
    lines = []
    lines.append("## 9. SERVER_HELLO (104B) and SERVER_SETUP (72B)")
    lines.append("")

    for match in matches:
        hello_msgs = [m for m in match.sc_messages if classify(m) == "SERVER_HELLO"]
        setup_msgs = [m for m in match.sc_messages if classify(m) == "SERVER_SETUP"]

        lines.append(f"### Match: {match.name}")
        lines.append(f"- SERVER_HELLO: {len(hello_msgs)}")
        lines.append(f"- SERVER_SETUP: {len(setup_msgs)}")
        lines.append("")

        if hello_msgs:
            lines.append("  First SERVER_HELLO decrypted:")
            d = hello_msgs[0].decrypted
            # Check for zeros
            zero_regions = []
            i = 0
            while i < len(d):
                if d[i] == 0:
                    start = i
                    while i < len(d) and d[i] == 0:
                        i += 1
                    zero_regions.append((start, i))
                else:
                    i += 1
            lines.append(f"    Length: {len(d)}")
            lines.append(f"    Hex: {d.hex()}")
            lines.append(f"    Zero regions: {zero_regions}")

            # Show u32 fields
            lines.append(f"    u32 BE fields:")
            for off in range(0, len(d) - 3, 4):
                lines.append(f"      [{off}:{off+4}]: 0x{u32_be(d, off):08x} ({u32_be(d, off)})")
            lines.append("")

        if setup_msgs:
            lines.append("  First SERVER_SETUP decrypted:")
            d = setup_msgs[0].decrypted
            lines.append(f"    Length: {len(d)}")
            lines.append(f"    Hex: {d.hex()}")
            lines.append("")

    return "\n".join(lines)


def deep_tick_analysis(matches: list[MatchData]) -> str:
    """Deep analysis of TICK_HEARTBEAT — alternation patterns, state hashing."""
    lines = []
    lines.append("## 10. Deep TICK_HEARTBEAT Analysis")
    lines.append("")
    lines.append("The TICK_HEARTBEAT messages show a distinctive alternation pattern where "
                 "field[8:16] acts as a slowly-changing 'state identifier' and field[0:8] "
                 "varies per-tick within each state.")
    lines.append("")

    for match in matches:
        msgs = [m for m in match.sc_messages if classify(m) == "TICK_HEARTBEAT"]
        if not msgs:
            continue

        lines.append(f"### Match: {match.name}")
        lines.append(f"- Total ticks: {len(msgs)}")
        lines.append("")

        # Count unique full 16-byte values and field[8:16] values
        full_vals = Counter(m.decrypted for m in msgs)
        state_vals = Counter(m.decrypted[8:16] for m in msgs)
        tick_vals = Counter(m.decrypted[0:8] for m in msgs)

        lines.append(f"  Unique full 16B values: {len(full_vals)}")
        lines.append(f"  Unique field[0:8] values: {len(tick_vals)}")
        lines.append(f"  Unique field[8:16] 'state' values: {len(state_vals)}")
        lines.append("")

        # Zero state (field[8:16] = 0)
        zero_state = b'\x00' * 8
        zero_count = state_vals.get(zero_state, 0)
        lines.append(f"  Ticks with field[8:16] = zeros: {zero_count}/{len(msgs)} "
                     f"({zero_count/len(msgs)*100:.1f}%)")
        lines.append("")

        # State transitions
        lines.append("  **State transition analysis:**")
        transitions = 0
        state_runs = []
        if len(msgs) > 0:
            cur_state = msgs[0].decrypted[8:16]
            run_start = 0
            for i in range(1, len(msgs)):
                new_state = msgs[i].decrypted[8:16]
                if new_state != cur_state:
                    state_runs.append((run_start, i - 1, cur_state))
                    cur_state = new_state
                    run_start = i
                    transitions += 1
            state_runs.append((run_start, len(msgs) - 1, cur_state))

        lines.append(f"    Total state transitions: {transitions}")
        lines.append(f"    Total state runs: {len(state_runs)}")
        if state_runs:
            run_lengths = [r[1] - r[0] + 1 for r in state_runs]
            lines.append(f"    Run lengths: min={min(run_lengths)}, max={max(run_lengths)}, "
                         f"avg={sum(run_lengths)/len(run_lengths):.1f}")
        lines.append("")

        # Show first 30 state runs
        lines.append("    First 30 state runs:")
        for r in state_runs[:30]:
            length = r[1] - r[0] + 1
            lines.append(f"      ticks[{r[0]}..{r[1]}] (len={length}): state={r[2].hex()}")
        lines.append("")

        # Within a state, how many unique field[0:8] values?
        lines.append("  **Per-state field[0:8] diversity (top 10 states):**")
        state_to_ticks = defaultdict(list)
        for m in msgs:
            state_to_ticks[m.decrypted[8:16]].append(m.decrypted[0:8])

        for state, ticks_list in sorted(state_to_ticks.items(), key=lambda x: -len(x[1]))[:10]:
            unique_ticks = len(set(ticks_list))
            lines.append(f"    state {state.hex()}: {len(ticks_list)} ticks, "
                         f"{unique_ticks} unique field[0:8] values "
                         f"({unique_ticks/len(ticks_list)*100:.1f}% unique)")
        lines.append("")

    return "\n".join(lines)


def deep_entity_update_lg_analysis(matches: list[MatchData]) -> str:
    """Deeper ENTITY_UPDATE_LG: trailing byte patterns beyond offset 16."""
    lines = []
    lines.append("## 11. Deep ENTITY_UPDATE_LG Analysis (Trailing Bytes)")
    lines.append("")
    lines.append("The trailing bytes[16:40] are NOT always zeros. Many messages carry "
                 "additional data in these positions.")
    lines.append("")

    for match in matches:
        msgs = [m for m in match.sc_messages if classify(m) == "ENTITY_UPDATE_LG"]
        if not msgs:
            continue

        lines.append(f"### Match: {match.name}")
        lines.append(f"- Count: {len(msgs)}")
        lines.append("")

        # Analyze trailing byte patterns
        trailing = Counter(m.decrypted[16:] for m in msgs)
        all_zero = trailing.get(b'\x00' * 24, 0)
        lines.append(f"  Trailing[16:40] all zeros: {all_zero}/{len(msgs)}")
        lines.append(f"  Unique trailing patterns: {len(trailing)}")
        lines.append("")

        # Break trailing into 3 x 8-byte fields
        lines.append("  **Trailing field structure (3 x u64):**")
        f16 = Counter(m.decrypted[16:24] for m in msgs)
        f24 = Counter(m.decrypted[24:32] for m in msgs)
        f32 = Counter(m.decrypted[32:40] for m in msgs)

        for fname, ctr in [("field[16:24]", f16), ("field[24:32]", f24), ("field[32:40]", f32)]:
            zero_key = b'\x00' * 8
            zero_cnt = ctr.get(zero_key, 0)
            lines.append(f"    {fname}: {len(ctr)} unique, zeros={zero_cnt}/{len(msgs)}")
            lines.append(f"      Top 5:")
            for v, cnt in ctr.most_common(5):
                lines.append(f"        {v.hex()}: {cnt}")
        lines.append("")

        # Cross-reference: do the same entity IDs always have the same trailing pattern?
        lines.append("  **Entity ID vs trailing pattern:**")
        by_id = defaultdict(lambda: Counter())
        for m in msgs:
            eid = m.decrypted[0:4]
            trail = m.decrypted[16:]
            by_id[eid][trail] += 1

        for eid, trail_ctr in sorted(by_id.items(), key=lambda x: -sum(x[1].values()))[:10]:
            total = sum(trail_ctr.values())
            lines.append(f"    Entity 0x{eid.hex()}: {total} updates, "
                         f"{len(trail_ctr)} unique trailing patterns")
            for trail, cnt in trail_ctr.most_common(3):
                lines.append(f"      {trail[:16].hex()}... : {cnt}")
        lines.append("")

    return "\n".join(lines)


def deep_snapshot_analysis(matches: list[MatchData]) -> str:
    """Deep SNAPSHOT: stride analysis, entity record structure."""
    lines = []
    lines.append("## 12. Deep SNAPSHOT Stride Analysis")
    lines.append("")
    lines.append("Autocorrelation peaks at stride ~160. Cross-snapshot field stability shows "
                 "6 varying regions at offsets ~0, 168, 328, 504, 656, 816 with ~160-byte spacing. "
                 "This strongly suggests 2592 bytes = 6 entity records of variable size + padding.")
    lines.append("")

    for match in matches:
        msgs = [m for m in match.sc_messages if classify(m) == "SNAPSHOT"]
        if not msgs:
            continue

        lines.append(f"### Match: {match.name}")
        lines.append(f"- Snapshots: {len(msgs)}")
        lines.append("")

        # Find varying regions across all snapshots
        ref = msgs[0].decrypted
        content_len = len(ref)
        vary_mask = bytearray(content_len)  # 1 = varies
        for m in msgs[1:]:
            for i in range(content_len):
                if m.decrypted[i] != ref[i]:
                    vary_mask[i] = 1

        # Find contiguous varying regions
        regions = []
        in_region = False
        for i in range(content_len):
            if vary_mask[i] and not in_region:
                reg_start = i
                in_region = True
            elif not vary_mask[i] and in_region:
                regions.append((reg_start, i))
                in_region = False
        if in_region:
            regions.append((reg_start, content_len))

        lines.append(f"  **Varying byte regions (across {len(msgs)} snapshots):**")
        total_vary = sum(e - s for s, e in regions)
        lines.append(f"    Total varying bytes: {total_vary}/{content_len}")
        lines.append(f"    Number of regions: {len(regions)}")
        for start, end in regions:
            size = end - start
            lines.append(f"      [{start}:{end}] ({size} bytes)")
        lines.append("")

        # Calculate inter-region spacing
        if len(regions) >= 2:
            lines.append("  **Inter-region spacing (start-to-start):**")
            for i in range(1, len(regions)):
                gap = regions[i][0] - regions[i - 1][0]
                lines.append(f"    region[{i-1}] -> region[{i}]: "
                             f"{regions[i-1][0]} -> {regions[i][0]} = {gap} bytes")
            lines.append("")

        # Look at the first varying region as the "header" or first entity record
        if regions:
            lines.append("  **First varying region detail (first 10 snapshots):**")
            r0_start, r0_end = regions[0]
            for si in range(min(10, len(msgs))):
                d = msgs[si].decrypted
                chunk = d[r0_start:min(r0_start + 32, r0_end)]
                # Try f32 LE interpretation
                floats = []
                for off in range(0, len(chunk) - 3, 4):
                    f = f32_le(chunk, off)
                    floats.append(f)
                lines.append(f"    snap[{si}]: hex={chunk.hex()}")
                float_str = " ".join(f"{f:>10.3f}" if is_reasonable_float(f, -10000, 10000) else f"{'---':>10}" for f in floats[:8])
                lines.append(f"             f32LE: {float_str}")
            lines.append("")

        # Check entity count hypothesis: 6 heroes = 6 regions
        lines.append("  **Entity count hypothesis:**")
        lines.append(f"    Varying regions: {len(regions)}")
        lines.append(f"    If 6 heroes (3v3): 2592/6 = 432 bytes per entity slot")
        lines.append(f"    Constant region starts at offset ~832 (after 6 varying regions)")
        lines.append(f"    Active data: ~832 bytes, Reserve/static: ~{content_len - 832} bytes")
        lines.append(f"    Active per entity: ~{832 // max(len(regions), 1)} bytes")
        lines.append("")

        # Compare the same relative offset in each region
        if len(regions) >= 3:
            lines.append("  **Cross-region comparison (same relative offset in each varying region):**")
            lines.append("  First snapshot, first 4 bytes of each varying region as u32 LE:")
            for ri, (rstart, rend) in enumerate(regions):
                if rend - rstart >= 4:
                    val_le = u32_le(ref, rstart)
                    val_be = u32_be(ref, rstart)
                    lines.append(f"    region[{ri}] @{rstart}: LE=0x{val_le:08x} ({val_le}), "
                                 f"BE=0x{val_be:08x} ({val_be})")
            lines.append("")

    return "\n".join(lines)


def generate_summary(matches: list[MatchData]) -> str:
    """Generate a comprehensive summary of all findings."""
    lines = []
    lines.append("## 13. Summary of Findings")
    lines.append("")

    lines.append("### XOR Decryption Validation")
    lines.append("")
    lines.append("The XOR keys are confirmed correct by these observations:")
    lines.append("- ENTITY_UPDATE_LG (40B): Early messages in every match have bytes[16:40] "
                 "decrypting to all-zeros (exactly 68 per match across all 3 matches)")
    lines.append("- SERVER_HELLO (104B): bytes[32:40] decrypt to all-zeros in all matches")
    lines.append("- AUTH_TOKEN (72B): trailing bytes decrypt to all-zeros (key padding)")
    lines.append("- Consistent field value ranges across all 3 matches")
    lines.append("")

    lines.append("### Message Type Field Layouts")
    lines.append("")

    lines.append("#### TICK_HEARTBEAT (16B, S->C, ~80-143 Hz)")
    lines.append("```")
    lines.append("Offset  Size  Type       Description")
    lines.append("------  ----  ---------  -----------")
    lines.append("[0:8]   8B    opaque     Per-tick token/hash (many unique, but repeats within state)")
    lines.append("[8:16]  8B    opaque     State identifier (changes at state transitions, ~17K unique)")
    lines.append("```")
    lines.append("- NOT a frame counter (no sequential increment)")
    lines.append("- NOT float32 values (nonsensical values in both BE and LE)")
    lines.append("- Alternates between a small set of values within each 'state phase'")
    lines.append("- field[8:16] = 0x0000000000000000 during initialization (~5-7% of ticks)")
    lines.append("- Likely a checksum or hash-based heartbeat, not positional data")
    lines.append("")

    lines.append("#### ENTITY_UPDATE_SM (24B, S->C)")
    lines.append("```")
    lines.append("Offset   Size  Type       Description")
    lines.append("------   ----  ---------  -----------")
    lines.append("[0:4]    4B    opaque     Token/hash field A (paired with field[4:8])")
    lines.append("[4:8]    4B    opaque     Token/hash field B (same unique count as field A)")
    lines.append("[8:12]   4B    opaque     Data field C (high cardinality)")
    lines.append("[12:16]  4B    opaque     Data field D (high cardinality, same count as C)")
    lines.append("[16:20]  4B    opaque     Group tag E (shared within message bursts)")
    lines.append("[20:24]  4B    opaque     Group tag F (shared within message bursts)")
    lines.append("```")
    lines.append("- Fields A+B and E+F are paired (same unique counts per pair)")
    lines.append("- field[16:24] acts as a batch/group identifier: consecutive messages share it")
    lines.append("- float interpretation is not consistent (0-74% reasonable depending on match)")
    lines.append("- Top pair (0x00000000, 0x00000000) = 'ungrouped' messages")
    lines.append("- The burst grouping suggests these are batched per-entity-group updates")
    lines.append("")

    lines.append("#### ENTITY_UPDATE_LG (40B, S->C)")
    lines.append("```")
    lines.append("Offset   Size  Type       Description")
    lines.append("------   ----  ---------  -----------")
    lines.append("[0:4]    4B    entity_id  Entity identifier (6 dominant + many minor entities)")
    lines.append("[4:8]    4B    opaque     Per-update data (unique per message)")
    lines.append("[8:12]   4B    opaque     State/type field")
    lines.append("[12:16]  4B    opaque     State/type field")
    lines.append("[16:24]  8B    optional   Extended data (often zeros in early messages)")
    lines.append("[24:32]  8B    optional   Extended data (mostly zeros)")
    lines.append("[32:40]  8B    optional   Extended data (almost always zeros)")
    lines.append("```")
    lines.append("- field[0:4] has 6 dominant IDs per match (matching 3v3 hero count)")
    lines.append("  plus ~130-200 minor entity IDs (minions, turrets, jungle camps)")
    lines.append("- bytes[8:16] are unique per update (NOT shared across same entity)")
    lines.append("- bytes[16:40] are NOT always zero: trailing data present in most messages")
    lines.append("- Exactly 68 messages have all-zero trailing bytes in every match (suspiciously exact)")
    lines.append("- Float interpretation of bytes[4:12] is inconsistent (~30-79% reasonable)")
    lines.append("")

    lines.append("#### SNAPSHOT (2592B, S->C, ~230/match)")
    lines.append("```")
    lines.append("Offset      Size   Description")
    lines.append("------      ----   -----------")
    lines.append("[0:~168]    168B   Entity record 0 (32B dynamic + 136B static/zero)")
    lines.append("[168:~328]  160B   Entity record 1 (24B dynamic + 136B static/zero)")
    lines.append("[328:~504]  176B   Entity record 2 (24B dynamic + 152B static/zero)")
    lines.append("[504:~656]  152B   Entity record 3 (8B dynamic + 144B static/zero)")
    lines.append("[656:~816]  160B   Entity record 4 (16B dynamic + 144B static/zero)")
    lines.append("[816:~832]  16B    Entity record 5 (16B dynamic)")
    lines.append("[832:2592]  1760B  Static data (constant across all snapshots)")
    lines.append("```")
    lines.append("- 95.4-95.7% of bytes are constant across all snapshots per match")
    lines.append("- Only 4.3-4.6% of bytes change between first and last snapshot")
    lines.append("- 6 varying regions with ~160-byte stride (matches 3v3 = 6 heroes)")
    lines.append("- Autocorrelation peaks strongly at stride=160")
    lines.append("- First 32 bytes of snapshot are the most volatile")
    lines.append("- Reasonable f32 LE values found at specific offsets (positions/stats)")
    lines.append("")

    lines.append("#### INPUT_ACK (8B, C->S, ~0.5 Hz)")
    lines.append("```")
    lines.append("Offset  Size  Type       Description")
    lines.append("------  ----  ---------  -----------")
    lines.append("[0:4]   4B    opaque     All unique values, not sequential")
    lines.append("[4:8]   4B    opaque     All unique values, not sequential")
    lines.append("```")
    lines.append("- Every value is unique (100% unique across all messages per match)")
    lines.append("- NOT sequential counters")
    lines.append("- Average interval ~2.2s (match 3) — definitely keepalives, not input")
    lines.append("- Likely a hash/nonce-based keepalive proof-of-life")
    lines.append("")

    lines.append("#### TICK_SMALL (8B, S->C)")
    lines.append("- Same structure as INPUT_ACK but server-to-client")
    lines.append("- Not sequential, high cardinality")
    lines.append("- Appears to be server-side keepalive or tick acknowledgment")
    lines.append("")

    lines.append("### Key Observations")
    lines.append("")
    lines.append("1. **No plaintext frame counters found**: All message types use opaque "
                 "values, not sequential integers. The protocol likely uses hashed/encrypted "
                 "sequence numbers or nonces.")
    lines.append("")
    lines.append("2. **Paired field structure**: TICK_HEARTBEAT and ENTITY_UPDATE_SM show "
                 "fields that are paired (same cardinality). This suggests the protocol uses "
                 "authenticated pairs (e.g., hash + HMAC, or two halves of a single value).")
    lines.append("")
    lines.append("3. **Additional encryption layer?**: The field values span the full u32 range "
                 "uniformly with high entropy (~7.6-7.9 bits/byte). After XOR decryption, the "
                 "data still appears random. This may indicate a second encryption layer (e.g., "
                 "AES-CTR or similar) beyond the XOR, or the XOR key may rotate/evolve per-message.")
    lines.append("")
    lines.append("4. **Entity structure is clear**: 6 dominant entities per match (3v3 heroes), "
                 "~130-200 minor entities. SNAPSHOT confirms 6 entity records at ~160-byte stride.")
    lines.append("")
    lines.append("5. **XOR key detection is valid**: The 68 all-zero trailing blocks per match "
                 "and consistent zero regions in SERVER_HELLO confirm the key is correct for the "
                 "XOR layer. The remaining randomness is from a deeper layer.")
    lines.append("")

    return "\n".join(lines)


# ── Main ──
def main():
    print("Loading matches...")
    match_data = []
    for name, key in MATCHES:
        print(f"  Loading {name}...")
        md = load_match(name, key)
        if md.sc_messages:
            match_data.append(md)
            print(f"    {len(md.cs_messages)} C->S, {len(md.sc_messages)} S->C, "
                  f"duration={md.duration:.1f}s")

    if not match_data:
        print("ERROR: No match data loaded!", file=sys.stderr)
        sys.exit(1)

    print(f"\nLoaded {len(match_data)} matches. Running analysis...\n")

    # Run all analyses
    sections = []
    sections.append("# Vainglory Match Protocol — Message Field Analysis")
    sections.append("")
    sections.append("Generated by `scripts/analyze_message_fields.py` across 3 captured matches.")
    sections.append("")
    sections.append("**XOR Keys:**")
    for name, key in MATCHES:
        sections.append(f"- {name}: `{key.hex()}`")
    sections.append("")
    sections.append("**Match Summary:**")
    for md in match_data:
        cs_count = len(md.cs_messages)
        sc_count = len(md.sc_messages)
        sections.append(f"- {md.name}: {cs_count} C->S, {sc_count} S->C, {md.duration:.1f}s")
    sections.append("")
    sections.append("---")
    sections.append("")

    print("  Analyzing TICK_HEARTBEAT...")
    sections.append(analyze_tick_heartbeat(match_data))
    sections.append("---\n")

    print("  Analyzing ENTITY_UPDATE_SM...")
    sections.append(analyze_entity_update_sm(match_data))
    sections.append("---\n")

    print("  Analyzing ENTITY_UPDATE_LG...")
    sections.append(analyze_entity_update_lg(match_data))
    sections.append("---\n")

    print("  Analyzing SNAPSHOT...")
    sections.append(analyze_snapshot(match_data))
    sections.append("---\n")

    print("  Analyzing INPUT_ACK...")
    sections.append(analyze_input_ack(match_data))
    sections.append("---\n")

    print("  Analyzing TICK_SMALL...")
    sections.append(analyze_tick_small(match_data))
    sections.append("---\n")

    print("  Cross-match validation...")
    sections.append(cross_match_validation(match_data))
    sections.append("---\n")

    print("  Analyzing INPUT_EXTENDED...")
    sections.append(analyze_input_extended(match_data))
    sections.append("---\n")

    print("  Analyzing SERVER_HELLO/SETUP...")
    sections.append(analyze_server_hello(match_data))
    sections.append("---\n")

    print("  Deep TICK_HEARTBEAT analysis...")
    sections.append(deep_tick_analysis(match_data))
    sections.append("---\n")

    print("  Deep ENTITY_UPDATE_LG analysis...")
    sections.append(deep_entity_update_lg_analysis(match_data))
    sections.append("---\n")

    print("  Deep SNAPSHOT stride analysis...")
    sections.append(deep_snapshot_analysis(match_data))
    sections.append("---\n")

    print("  Generating summary...")
    sections.append(generate_summary(match_data))

    # Write report
    report = "\n".join(sections)
    REPORT_DIR.mkdir(parents=True, exist_ok=True)
    report_path = REPORT_DIR / "message_field_analysis.md"
    report_path.write_text(report)
    print(f"\nReport written to {report_path}")
    print(f"Report size: {len(report)} bytes, {report.count(chr(10))} lines")


if __name__ == "__main__":
    main()
