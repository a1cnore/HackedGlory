#!/usr/bin/env python3
"""
decrypt_cff0.py — Decrypt and parse Vainglory CFF0 definition files.

Decrypts the INST sections using the Jenkins lookup3 XOR stream cipher
found in the GameKindred binary, then applies PTCH relocations and
extracts readable struct data.

Usage:
    python3 decrypt_cff0.py <cff0_file>                # Dump single file
    python3 decrypt_cff0.py --scan <Data_dir>           # Scan all CFF0 files
    python3 decrypt_cff0.py --hero <Data_dir> <name>    # Dump specific hero
"""

from __future__ import annotations
import argparse
import json
import os
import struct
import sys
from pathlib import Path


# ── Jenkins lookup3 hash (from Ghidra decompilation of FUN_100015208) ──

def jenkins_lookup3(data: bytes, seed: int = 0x12345678) -> int:
    length = len(data)
    a = b = 0x9e3779b9 & 0xFFFFFFFF
    c = seed & 0xFFFFFFFF
    pos = 0
    remaining = length

    while remaining >= 12:
        a = (a + struct.unpack_from('<I', data, pos)[0]) & 0xFFFFFFFF
        b = (b + struct.unpack_from('<I', data, pos + 4)[0]) & 0xFFFFFFFF
        c = (c + struct.unpack_from('<I', data, pos + 8)[0]) & 0xFFFFFFFF
        a = (a - (b + c) ^ (c >> 13)) & 0xFFFFFFFF
        b = (b - (c + a) ^ (a << 8)) & 0xFFFFFFFF
        c = (c - (a + b) ^ (b >> 13)) & 0xFFFFFFFF
        a = (a - (b + c) ^ (c >> 12)) & 0xFFFFFFFF
        b = (b - (c + a) ^ (a << 16)) & 0xFFFFFFFF
        c = (c - (a + b) ^ (b >> 5)) & 0xFFFFFFFF
        a = (a - (b + c) ^ (c >> 3)) & 0xFFFFFFFF
        b = (b - (c + a) ^ (a << 10)) & 0xFFFFFFFF
        c = (c - (a + b) ^ (b >> 15)) & 0xFFFFFFFF
        pos += 12
        remaining -= 12

    c = (c + length) & 0xFFFFFFFF
    if remaining >= 11: c = (c + data[pos + 10] * 0x1000000) & 0xFFFFFFFF
    if remaining >= 10: c = (c + data[pos + 9] * 0x10000) & 0xFFFFFFFF
    if remaining >= 9:  c = (c + data[pos + 8] * 0x100) & 0xFFFFFFFF
    if remaining >= 8:  b = (b + data[pos + 7] * 0x1000000) & 0xFFFFFFFF
    if remaining >= 7:  b = (b + data[pos + 6] * 0x10000) & 0xFFFFFFFF
    if remaining >= 6:  b = (b + data[pos + 5] * 0x100) & 0xFFFFFFFF
    if remaining >= 5:  b = (b + data[pos + 4]) & 0xFFFFFFFF
    if remaining >= 4:  a = (a + data[pos + 3] * 0x1000000) & 0xFFFFFFFF
    if remaining >= 3:  a = (a + data[pos + 2] * 0x10000) & 0xFFFFFFFF
    if remaining >= 2:  a = (a + data[pos + 1] * 0x100) & 0xFFFFFFFF
    if remaining >= 1:  a = (a + data[pos]) & 0xFFFFFFFF

    a = (a - (b + c) ^ (c >> 13)) & 0xFFFFFFFF
    b = (b - (c + a) ^ (a << 8)) & 0xFFFFFFFF
    c = (c - (a + b) ^ (b >> 13)) & 0xFFFFFFFF
    a = (a - (b + c) ^ (c >> 12)) & 0xFFFFFFFF
    b = (b - (c + a) ^ (a << 16)) & 0xFFFFFFFF
    c = (c - (a + b) ^ (b >> 5)) & 0xFFFFFFFF
    a = (a - (b + c) ^ (c >> 3)) & 0xFFFFFFFF
    b = (b - (c + a) ^ (a << 10)) & 0xFFFFFFFF
    c = (c - (a + b) ^ (b >> 15)) & 0xFFFFFFFF
    return c


# ── Decryption key table (from DAT_101873140 in GameKindred binary) ──

KEY_TABLE = [
    0x6e0da13b, 0x50daa98f, 0x2d5ffa4f, 0x56c6c3eb,
    0xcad31ddd, 0x04f7be6a, 0xd5c4e961, 0x7fe2ef92,
    0xccbb8a6d, 0x19b6875b, 0x433b604c, 0xba7b1ee4,
    0x9dea872e, 0xa8c2e10a, 0xed30a2ff, 0x16a8f9a4,
]


def decrypt_inst(data: bytes, key_index: int, data_len: int) -> bytes:
    """Decrypt INST section data.

    Algorithm (from Ghidra decompilation of FUN_1010b8c4c):
    1. Derive master key: jenkins_lookup3(KEY_TABLE[key_index] as 4 bytes, seed=data_len)
    2. For each 32-bit word: decrypted = master_key XOR ROL1(prev_encrypted) XOR encrypted
    """
    if key_index == 0 or key_index > 15:
        return data

    key_val = KEY_TABLE[key_index]
    key_bytes = struct.pack('<I', key_val)
    master_key = jenkins_lookup3(key_bytes, data_len)

    result = bytearray(data)
    state = data_len & 0xFFFFFFFF

    for i in range(0, len(result) - 3, 4):
        encrypted = struct.unpack_from('<I', result, i)[0]
        prev_state = state
        state = encrypted
        rol1 = ((prev_state >> 31) | (prev_state << 1)) & 0xFFFFFFFF
        decrypted = (master_key ^ rol1 ^ encrypted) & 0xFFFFFFFF
        struct.pack_into('<I', result, i, decrypted)

    return bytes(result)


# ── CFF0 file parser ──

def parse_cff0(data: bytes) -> dict:
    """Parse a CFF0 definition file and decrypt its INST sections."""
    if data[:4] != b'CFF0':
        return None

    total_size = struct.unpack_from('<I', data, 4)[0]
    num_blocks = struct.unpack_from('<I', data, 8)[0]
    block_offsets = []
    block_offsets.append(struct.unpack_from('<I', data, 20)[0])
    if num_blocks > 1:
        block_offsets.append(struct.unpack_from('<I', data, 24)[0])

    blocks = []
    for block_idx, block_off in enumerate(block_offsets):
        block = {"offset": block_off}

        # Parse DEF0 header
        if data[block_off:block_off + 4] != b'DEF0':
            continue
        def0_size = struct.unpack_from('<I', data, block_off + 4)[0]
        def0_type = struct.unpack_from('<I', data, block_off + 8)[0]
        def0_hash = struct.unpack_from('<I', data, block_off + 12)[0]
        key_index = data[block_off + 9]  # byte 9 of DEF0 section
        block["def0"] = {"size": def0_size, "type": hex(def0_type), "hash": hex(def0_hash), "key_index": key_index}

        # Find sections within this block
        pos = block_off + def0_size + 4  # skip DEF0 magic + data
        end = block_offsets[block_idx + 1] if block_idx + 1 < len(block_offsets) else total_size

        inst_off = inst_size = None
        ptch_off = ptch_size = None
        symb_off = symb_name = None

        scan = block_off
        while scan < end - 8:
            magic = data[scan:scan + 4]
            section_size = struct.unpack_from('<I', data, scan + 4)[0]
            if section_size < 8 or scan + section_size > end:
                scan += 4
                continue
            if magic == b'INST':
                inst_off = scan + 8
                inst_size = section_size - 8
            elif magic == b'PTCH':
                ptch_off = scan
                ptch_size = section_size
            elif magic == b'SYMB':
                symb_off = scan
                # Extract symbol name
                name_start = scan + 16
                name_end = data.find(b'\x00', name_start, scan + section_size)
                if name_end > 0:
                    symb_name = data[name_start:name_end].decode('ascii', errors='replace')
            scan += section_size

        block["symb"] = symb_name

        # Decrypt INST
        if inst_off is not None and inst_size is not None:
            encrypted = data[inst_off:inst_off + inst_size]
            decrypted = decrypt_inst(encrypted, key_index, inst_size)
            block["inst_decrypted"] = decrypted
            block["inst_size"] = inst_size

        # Parse PTCH
        if ptch_off is not None:
            ptch_count = struct.unpack_from('<I', data, ptch_off + 8)[0]
            entries = []
            for i in range(ptch_count):
                ent_off = ptch_off + 16 + i * 8
                if ent_off + 8 > ptch_off + ptch_size:
                    break
                inst_byte_off = struct.unpack_from('<I', data, ent_off)[0]
                value = struct.unpack_from('<I', data, ent_off + 4)[0]
                entries.append((inst_byte_off, value))
            block["ptch_entries"] = entries

        blocks.append(block)

    return {"blocks": blocks, "total_size": total_size, "num_blocks": num_blocks}


def extract_floats(decrypted: bytes, offset: int = 0, count: int = None) -> list:
    """Extract float values from decrypted INST data."""
    if count is None:
        count = len(decrypted) // 4
    values = []
    for i in range(min(count, len(decrypted) // 4)):
        off = offset + i * 4
        if off + 4 > len(decrypted):
            break
        v = struct.unpack_from('<I', decrypted, off)[0]
        f = struct.unpack_from('<f', decrypted, off)[0]
        values.append({"offset": off, "uint32": v, "float32": f})
    return values


def find_symb_name(data: bytes) -> str | None:
    """Quick extract of the SYMB name from a CFF0 file."""
    pos = 0
    while True:
        idx = data.find(b'SYMB', pos)
        if idx == -1:
            return None
        name_start = idx + 16
        name_end = data.find(b'\x00', name_start, idx + 64)
        if name_end > 0:
            name = data[name_start:name_end].decode('ascii', errors='replace')
            if name.startswith('*') and name.endswith('*'):
                return name
        pos = idx + 4


def dump_hero_stats(decrypted: bytes, name: str):
    """Search for and display known hero stat values in decrypted INST data."""
    print(f"\n{'=' * 60}")
    print(f"  {name} — Decrypted INST stats")
    print(f"{'=' * 60}")

    # Search for recognizable float patterns in the known stat region (offsets ~100-300)
    print("\nPotential hero base stats (offsets 100-300):")
    for i in range(100, min(300, len(decrypted) - 4), 4):
        f = struct.unpack_from('<f', decrypted, i)[0]
        u = struct.unpack_from('<I', decrypted, i)[0]
        if u == 0:
            continue
        if 0.001 < abs(f) < 100000 and f == f:
            print(f"  +{i:4d}: {f:>12.4f}")


def main():
    parser = argparse.ArgumentParser(description="Decrypt Vainglory CFF0 definition files")
    parser.add_argument("path", help="CFF0 file or Data directory")
    parser.add_argument("--scan", action="store_true", help="Scan directory for all CFF0 files")
    parser.add_argument("--hero", type=str, help="Find and dump a specific hero by name")
    parser.add_argument("--json", action="store_true", help="Output as JSON")
    parser.add_argument("--floats", action="store_true", help="Dump all float values")
    args = parser.parse_args()

    path = Path(args.path)

    if args.scan or args.hero:
        # Scan directory
        for dirpath, _, filenames in os.walk(path):
            for fname in filenames:
                fpath = Path(dirpath) / fname
                try:
                    data = fpath.read_bytes()
                    if data[:4] != b'CFF0':
                        continue
                    name = find_symb_name(data)
                    if args.hero:
                        if name and args.hero.lower() in name.lower():
                            parsed = parse_cff0(data)
                            for block in parsed["blocks"]:
                                if "inst_decrypted" in block:
                                    dump_hero_stats(block["inst_decrypted"], name)
                        continue
                    if name:
                        print(f"{fpath}: {name}")
                except Exception:
                    pass
    else:
        # Single file
        data = path.read_bytes()
        parsed = parse_cff0(data)
        if parsed is None:
            print("Not a CFF0 file")
            sys.exit(1)

        for i, block in enumerate(parsed["blocks"]):
            print(f"\nBlock {i}:")
            print(f"  SYMB: {block.get('symb', 'none')}")
            print(f"  DEF0: {block.get('def0', {})}")
            if "inst_decrypted" in block:
                dec = block["inst_decrypted"]
                print(f"  INST: {block['inst_size']} bytes (decrypted)")
                if args.floats:
                    dump_hero_stats(dec, block.get('symb', 'unknown'))
                else:
                    # Show a summary of non-zero float values
                    floats = []
                    for j in range(0, min(400, len(dec) - 4), 4):
                        f = struct.unpack_from('<f', dec, j)[0]
                        u = struct.unpack_from('<I', dec, j)[0]
                        if u != 0 and 0.001 < abs(f) < 100000 and f == f:
                            floats.append((j, f))
                    if floats:
                        print(f"  First notable floats ({len(floats)}):")
                        for off, val in floats[:20]:
                            print(f"    +{off:4d}: {val:.4f}")
            if "ptch_entries" in block:
                print(f"  PTCH: {len(block['ptch_entries'])} entries")


if __name__ == "__main__":
    main()
