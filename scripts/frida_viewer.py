#!/usr/bin/env python3
"""
frida_viewer.py — View and analyze Frida hook output from match captures.

Reads the JSONL output from frida_match_hook.js and presents:
  - Game events (abilities, kills, levels) with entity positions
  - Entity state timeline
  - Network packet correlation with game events
  - Entity struct field discovery results

Usage:
  python3 frida_viewer.py <capture.jsonl>
  python3 frida_viewer.py <capture.jsonl> --events      # only game events
  python3 frida_viewer.py <capture.jsonl> --entities     # entity state timeline
  python3 frida_viewer.py <capture.jsonl> --network      # raw TCP correlation
  python3 frida_viewer.py <capture.jsonl> --discovery    # entity struct fields
  python3 frida_viewer.py <capture.jsonl> --xor          # XOR scan results
"""

from __future__ import annotations

import argparse
import json
import sys
from collections import Counter, defaultdict
from pathlib import Path


def load_entries(path: Path) -> list[dict]:
    entries = []
    with open(path) as f:
        for line in f:
            line = line.strip()
            if not line:
                continue
            # Frida console output may have non-JSON prefixes
            # Try to find JSON in the line
            for start in range(len(line)):
                if line[start] == '{':
                    try:
                        entry = json.loads(line[start:])
                        entries.append(entry)
                        break
                    except json.JSONDecodeError:
                        continue
    return entries


def show_summary(entries: list[dict]):
    types = Counter(e.get("type", "?") for e in entries)
    print(f"Total entries: {len(entries)}")
    print(f"\nEvent types:")
    for t, count in types.most_common():
        print(f"  {t:<30} {count:>6}")

    # Time range
    timestamps = [e["ts"] for e in entries if "ts" in e]
    if timestamps:
        duration = (max(timestamps) - min(timestamps)) / 1000
        print(f"\nDuration: {duration:.1f}s")

    # XOR key
    for e in entries:
        if e.get("type") == "xor_key_extracted":
            print(f"\nXOR Key: {e.get('key', '?')}")
            break


def show_events(entries: list[dict]):
    print("\n=== Game Events ===\n")
    for e in entries:
        t = e.get("type", "")
        if not t.startswith("game_"):
            continue
        ts = e.get("ts", 0)
        if t == "game_ability":
            pos = e.get("pos", [0, 0, 0])
            print(f"[{ts}] ABILITY team={e.get('team')} slot={e.get('slot')} "
                  f"pos=({pos[0]:.1f}, {pos[1]:.1f}, {pos[2]:.1f})")
        elif t == "game_kill":
            kp = e.get("killerPos", [0, 0])
            print(f"[{ts}] KILL   team={e.get('killerTeam')} "
                  f"pos=({kp[0]:.1f}, {kp[1]:.1f})")
        elif t == "game_level":
            pos = e.get("pos", [0, 0])
            print(f"[{ts}] LEVEL  team={e.get('team')} "
                  f"pos=({pos[0]:.1f}, {pos[1]:.1f})")
        elif t == "game_gold":
            print(f"[{ts}] GOLD   {e}")


def show_entities(entries: list[dict]):
    print("\n=== Entity State Timeline ===\n")
    polls = [e for e in entries if e.get("type") == "entity_poll"]
    if not polls:
        print("No entity poll data. Make sure pollEntities is enabled.")
        return

    print(f"Total polls: {len(polls)}")
    # Show first and last poll
    for label, poll in [("First", polls[0]), ("Last", polls[-1])]:
        print(f"\n{label} poll ({poll.get('count', 0)} entities):")
        for ent in poll.get("entities", []):
            pos = ent.get("pos", [0, 0, 0])
            print(f"  team={ent.get('team')} type={ent.get('typeId')} "
                  f"pos=({pos[0]:.1f}, {pos[1]:.1f}, {pos[2]:.1f}) "
                  f"hp={ent.get('health', '?')}/{ent.get('maxHealth', '?')}")


def show_network(entries: list[dict]):
    print("\n=== Network Traffic ===\n")
    sent = [e for e in entries if e.get("type") == "tcp_send"]
    recv = [e for e in entries if e.get("type") == "tcp_recv"]
    print(f"TCP sent: {len(sent)} packets")
    print(f"TCP recv: {len(recv)} packets")

    # Show first few packets
    for label, pkts in [("C->S", sent[:10]), ("S->C", recv[:10])]:
        print(f"\n{label} first packets:")
        for p in pkts:
            hex_str = p.get("hex", "")
            print(f"  #{p.get('seq', '?'):>4} {p.get('len', 0):>6}B  {hex_str[:80]}")


def show_discovery(entries: list[dict]):
    print("\n=== Entity Struct Discovery ===\n")
    discs = [e for e in entries if e.get("type") == "entity_discovery"]
    if not discs:
        print("No entity discovery data. Play a match with analytics hooks enabled.")
        return

    print(f"Discovered {len(discs)} entities\n")
    for d in discs:
        print(f"Entity @ {d.get('addr', '?')}:")
        print(f"  typeId={d.get('typeId')} team={d.get('team')} "
              f"pos=({d.get('pos_x', 0):.1f}, {d.get('pos_y', 0):.1f})")
        fields = d.get("fields", {})
        if fields:
            print(f"  Non-zero float fields:")
            for off, val in sorted(fields.items()):
                if off.endswith("_i"):
                    print(f"    {off}: {val} (int)")
                else:
                    print(f"    {off}: {val:.2f}")
        print()


def show_xor(entries: list[dict]):
    print("\n=== XOR Scan Results ===\n")
    for e in entries:
        if e.get("type") == "xor_key_extracted":
            print(f"Key: {e.get('key')} (from {e.get('source')})")
        elif e.get("type") == "xor_scan":
            print(f"Region: {e.get('region')}")
            print(f"EOR instructions: {e.get('eor_instructions')}")
            print(f"AND #7 instructions: {e.get('and7_instructions')}")
            eor_addrs = e.get("eor_addrs", [])
            if eor_addrs:
                print(f"EOR locations (first 20): {', '.join(eor_addrs)}")
            and7_addrs = e.get("and7_addrs", [])
            if and7_addrs:
                print(f"AND #7 locations: {', '.join(and7_addrs)}")


def show_analytics(entries: list[dict]):
    print("\n=== Analytics Log ===\n")
    for e in entries:
        if e.get("type") == "analytics":
            src = e.get("source", "?")
            evt = e.get("event", "?")
            fmt = e.get("format", "")
            sev = e.get("severity", 0)
            print(f"[sev={sev}] {src}:{e.get('line', '?')} {evt}")
            if fmt:
                print(f"  fmt: {fmt[:120]}")


def main():
    parser = argparse.ArgumentParser(description="View Frida match hook output")
    parser.add_argument("file", type=Path, help="JSONL capture file")
    parser.add_argument("--events", action="store_true", help="Show game events")
    parser.add_argument("--entities", action="store_true", help="Show entity timeline")
    parser.add_argument("--network", action="store_true", help="Show network traffic")
    parser.add_argument("--discovery", action="store_true", help="Show entity struct discovery")
    parser.add_argument("--xor", action="store_true", help="Show XOR scan results")
    parser.add_argument("--analytics", action="store_true", help="Show analytics log")
    args = parser.parse_args()

    entries = load_entries(args.file)
    if not entries:
        print(f"No entries found in {args.file}")
        sys.exit(1)

    show_summary(entries)

    show_any = args.events or args.entities or args.network or args.discovery or args.xor or args.analytics
    if not show_any:
        # Show everything
        show_events(entries)
        show_entities(entries)
        show_discovery(entries)
        show_xor(entries)
    else:
        if args.events:
            show_events(entries)
        if args.entities:
            show_entities(entries)
        if args.network:
            show_network(entries)
        if args.discovery:
            show_discovery(entries)
        if args.xor:
            show_xor(entries)
        if args.analytics:
            show_analytics(entries)


if __name__ == "__main__":
    main()
