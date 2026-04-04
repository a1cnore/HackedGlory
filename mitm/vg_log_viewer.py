#!/usr/bin/env python3
"""
vg_log_viewer — real-time tail and replay for Vainglory MITM traffic logs.

Usage:
    python vg_log_viewer.py --follow vg_traffic.jsonl
    python vg_log_viewer.py --replay vg_traffic.jsonl
    python vg_log_viewer.py --replay vg_traffic.jsonl --filter match
    python vg_log_viewer.py --replay vg_traffic.jsonl --method notifyGameResults
    python vg_log_viewer.py --stats vg_traffic.jsonl
"""

from __future__ import annotations

import argparse
import json
import sys
import time
from collections import Counter
from pathlib import Path

# MARK: - ANSI colors

C_RESET = "\033[0m"
C_DIM = "\033[2m"
C_BOLD = "\033[1m"
CATEGORY_COLORS = {
    "auth": "\033[36m",
    "social": "\033[35m",
    "inventory": "\033[33m",
    "match": "\033[31m",
    "ranked": "\033[31m",
    "other": "\033[37m",
}

# MARK: - Display

def format_entry(entry: dict, idx: int) -> str:
    category = entry.get("category", "other")
    method = entry.get("method", "?")
    status = entry.get("status", 0)
    ts = entry.get("ts", "")
    extracted = entry.get("extracted") or {}
    host = entry.get("host", "")

    color = CATEGORY_COLORS.get(category, CATEGORY_COLORS["other"])
    status_color = "\033[32m" if 200 <= status < 300 else "\033[31m"

    extras = ""
    if extracted:
        parts = [f"{k}={v}" for k, v in list(extracted.items())[:4]]
        extras = f" {C_DIM}{', '.join(parts)}{C_RESET}"

    ts_short = ts[11:23] if len(ts) > 23 else ts

    return (
        f"{C_DIM}{idx:>4} {ts_short}{C_RESET} "
        f"{color}{C_BOLD}{category:<10}{C_RESET} "
        f"{method:<40} "
        f"{status_color}{status}{C_RESET} "
        f"{C_DIM}{host}{C_RESET}"
        f"{extras}"
    )


def print_entry(entry: dict, idx: int, category_filter: str | None, method_filter: str | None) -> bool:
    if category_filter and entry.get("category") != category_filter:
        return False
    if method_filter and entry.get("method") != method_filter:
        return False
    print(format_entry(entry, idx))
    return True


def parse_line(line: str) -> dict | None:
    line = line.strip()
    if not line:
        return None
    try:
        return json.loads(line)
    except json.JSONDecodeError:
        return None

# MARK: - Modes

def replay(path: Path, category_filter: str | None, method_filter: str | None) -> None:
    idx = 0
    with open(path) as f:
        for line in f:
            entry = parse_line(line)
            if entry:
                idx += 1
                print_entry(entry, idx, category_filter, method_filter)


def follow(path: Path, category_filter: str | None, method_filter: str | None) -> None:
    idx = 0
    print(f"{C_DIM}[viewer] following {path} (Ctrl+C to stop){C_RESET}", file=sys.stderr)

    with open(path) as f:
        # Read existing content first
        for line in f:
            entry = parse_line(line)
            if entry:
                idx += 1
                print_entry(entry, idx, category_filter, method_filter)

        # Tail for new lines
        try:
            while True:
                line = f.readline()
                if line:
                    entry = parse_line(line)
                    if entry:
                        idx += 1
                        print_entry(entry, idx, category_filter, method_filter)
                else:
                    time.sleep(0.2)
        except KeyboardInterrupt:
            pass

    print(f"\n{C_DIM}[viewer] {idx} entries displayed{C_RESET}", file=sys.stderr)


def stats(path: Path) -> None:
    method_counts: Counter[str] = Counter()
    category_counts: Counter[str] = Counter()
    hosts: Counter[str] = Counter()
    status_counts: Counter[int] = Counter()
    total = 0
    first_ts = None
    last_ts = None
    match_results: list[dict] = []

    with open(path) as f:
        for line in f:
            entry = parse_line(line)
            if not entry:
                continue
            total += 1
            method = entry.get("method", "?")
            method_counts[method] += 1
            category_counts[entry.get("category", "other")] += 1
            hosts[entry.get("host", "?")] += 1
            status_counts[entry.get("status", 0)] += 1

            ts = entry.get("ts", "")
            if not first_ts:
                first_ts = ts
            last_ts = ts

            if method == "notifyGameResults" and entry.get("extracted"):
                match_results.append(entry["extracted"])

    print(f"{C_BOLD}Session Summary{C_RESET}")
    print(f"  Total requests: {total}")
    print(f"  Time range: {first_ts or '?'} → {last_ts or '?'}")
    print()

    print(f"{C_BOLD}By Category{C_RESET}")
    for cat, count in category_counts.most_common():
        color = CATEGORY_COLORS.get(cat, "")
        print(f"  {color}{cat:<15}{C_RESET} {count}")
    print()

    print(f"{C_BOLD}By Host{C_RESET}")
    for host, count in hosts.most_common():
        print(f"  {host:<40} {count}")
    print()

    print(f"{C_BOLD}Top Methods{C_RESET}")
    for method, count in method_counts.most_common(20):
        print(f"  {method:<40} {count}")
    print()

    print(f"{C_BOLD}Status Codes{C_RESET}")
    for code, count in sorted(status_counts.items()):
        print(f"  {code:<6} {count}")

    if match_results:
        print(f"\n{C_BOLD}Match Results{C_RESET}")
        for r in match_results:
            parts = [f"{k}={v}" for k, v in r.items()]
            print(f"  {', '.join(parts)}")

# MARK: - CLI

def main() -> None:
    parser = argparse.ArgumentParser(description="Vainglory MITM log viewer")
    group = parser.add_mutually_exclusive_group(required=True)
    group.add_argument("--follow", metavar="FILE", help="Tail-follow a JSONL log file")
    group.add_argument("--replay", metavar="FILE", help="Replay a JSONL log file")
    group.add_argument("--stats", metavar="FILE", help="Print summary statistics")
    parser.add_argument("--filter", metavar="CATEGORY", help="Filter by category (auth, social, inventory, match, other)")
    parser.add_argument("--method", metavar="NAME", help="Filter by exact method name")
    args = parser.parse_args()

    path = Path(args.follow or args.replay or args.stats)
    if not path.exists():
        print(f"File not found: {path}", file=sys.stderr)
        sys.exit(1)

    if args.follow:
        follow(path, args.filter, args.method)
    elif args.replay:
        replay(path, args.filter, args.method)
    elif args.stats:
        stats(path)


if __name__ == "__main__":
    main()
