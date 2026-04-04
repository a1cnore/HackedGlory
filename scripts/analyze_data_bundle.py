#!/usr/bin/env python3

from __future__ import annotations

import argparse
import json
import re
from collections import Counter
from pathlib import Path


PRINTABLE_PATH_RE = re.compile(rb"/[A-Za-z0-9_./-]{8,}")


def iter_files(root: Path):
    for path in root.rglob("*"):
        if path.is_file():
            yield path


def classify_magic(magic: bytes) -> str:
    if magic == b"RSC0":
        return "RSC0"
    if magic == b"CFF0":
        return "CFF0"
    if magic.startswith(b"ID3"):
        return "ID3"
    if magic == b"OggS":
        return "OggS"
    if magic == b"\x00\x00\x00\x00":
        return "ZERO"
    return magic.hex()


def extract_paths(blob: bytes, limit: int = 8) -> list[str]:
    values = []
    seen = set()
    for match in PRINTABLE_PATH_RE.finditer(blob):
        value = match.group().decode("utf-8", "ignore")
        if value not in seen:
            values.append(value)
            seen.add(value)
        if len(values) >= limit:
            break
    return values


def build_inventory(data_root: Path) -> dict:
    total_files = 0
    header_counter: Counter[str] = Counter()
    size_by_header: Counter[str] = Counter()
    rsc0_examples = []
    cff0_examples = []
    path_rich_examples = []

    for path in iter_files(data_root):
        total_files += 1
        blob = path.read_bytes()
        magic = blob[:4]
        header = classify_magic(magic)
        header_counter[header] += 1
        size_by_header[header] += len(blob)

        if header == "RSC0" and len(rsc0_examples) < 15:
            paths = extract_paths(blob, limit=6)
            if paths:
                rsc0_examples.append(
                    {
                        "path": str(path),
                        "size": len(blob),
                        "paths": paths,
                    }
                )

        if header == "CFF0" and len(cff0_examples) < 10:
            cff0_examples.append(
                {
                    "path": str(path),
                    "size": len(blob),
                    "paths": extract_paths(blob, limit=6),
                }
            )

        if len(path_rich_examples) < 20:
            paths = extract_paths(blob, limit=10)
            if len(paths) >= 3:
                path_rich_examples.append(
                    {
                        "path": str(path),
                        "size": len(blob),
                        "header": header,
                        "paths": paths,
                    }
                )

    top_headers = [
        {
            "header": header,
            "count": count,
            "total_size": size_by_header[header],
        }
        for header, count in header_counter.most_common(20)
    ]

    return {
        "data_root": str(data_root),
        "total_files": total_files,
        "top_headers": top_headers,
        "rsc0_examples": rsc0_examples,
        "cff0_examples": cff0_examples,
        "path_rich_examples": path_rich_examples,
    }


def main() -> None:
    parser = argparse.ArgumentParser(description="Inventory Vainglory Data bundle headers and embedded paths.")
    parser.add_argument(
        "--data-root",
        default="Payload/GameKindred.app/Data",
        help="Path to the extracted Data directory.",
    )
    parser.add_argument(
        "--output",
        default="reports/generated/data_bundle_inventory.json",
        help="Where to write the JSON inventory.",
    )
    args = parser.parse_args()

    data_root = Path(args.data_root)
    inventory = build_inventory(data_root)

    output = Path(args.output)
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text(json.dumps(inventory, indent=2, sort_keys=True) + "\n")


if __name__ == "__main__":
    main()
