#!/usr/bin/env python3
"""
RSC0 mesh extractor v2 for Vainglory (E.V.I.L. engine).

Corrected vertex format based on reverse-engineered attribute table:
- Stride: computed from attribute table (max attr end + 2 prefix, aligned to 4)
- Position: big-endian float3 at byte offset +2 within each vertex
- Vertex/index counts from submesh descriptor (attr_pos - 16 / attr_pos - 20)
- Index buffer: uint16 LE, located right after vertex data

The first 2 bytes of each vertex are a prefix (bone/submesh index) not described
by the attribute table. All float attributes appear to be big-endian.
"""

from __future__ import annotations

import argparse
import math
import struct
import sys
from pathlib import Path


ATTR_TABLE_MARKER = bytes([0x00, 0x04, 0x03, 0x00, 0x00, 0x00, 0x00, 0x01])
POS_OFFSET = 2  # BE float3 starts at byte 2 within each vertex


def parse_rsc0(data: bytes) -> dict | None:
    """Parse RSC0 header, find attribute table, and extract mesh metadata."""
    if data[:4] != b"RSC0":
        return None

    path_count = struct.unpack_from("<H", data, 0x24)[0]
    pos = 0x26
    paths = []
    for _ in range(path_count):
        end = data.find(b"\x00", pos)
        if end == -1:
            break
        paths.append(data[pos:end].decode("utf-8", "ignore"))
        pos = end + 1

    mesh_start = pos
    if mesh_start >= len(data):
        return None

    flag = data[mesh_start]
    if flag != 4:
        return None

    header_vertex_count = struct.unpack_from("<I", data, mesh_start + 8)[0]
    bbox = struct.unpack_from("<6f", data, mesh_start + 12)

    # Find attribute table marker
    attr_pos = data.find(ATTR_TABLE_MARKER, mesh_start)
    if attr_pos < 0 or attr_pos - 20 < mesh_start:
        return None

    # Read submesh descriptor (right before attribute table)
    index_count = struct.unpack_from("<I", data, attr_pos - 20)[0]
    vertex_count = struct.unpack_from("<I", data, attr_pos - 16)[0]
    attr_count = struct.unpack_from("<H", data, attr_pos - 2)[0]

    if vertex_count > 200000 or index_count > 2000000 or attr_count > 20:
        return None

    # Parse attribute entries
    dtype_sizes = {1: 1, 2: 2, 4: 4, 5: 2}
    attrs = []
    max_attr_end = 0
    for i in range(attr_count):
        off = attr_pos + i * 8
        b = data[off : off + 8]
        dtype_names = {1: "ubyte", 2: "short", 4: "float", 5: "half"}
        sem_names = {
            0x01: "POSITION", 0x02: "NORMAL", 0x05: "TANGENT",
            0x09: "TEXCOORD0", 0x0A: "TEXCOORD1", 0x17: "BLENDWEIGHT",
        }
        attr_size = dtype_sizes.get(b[1], 1) * b[2]
        attr_end = b[3] + attr_size
        max_attr_end = max(max_attr_end, attr_end)
        attrs.append({
            "stream": b[0], "type": b[1], "count": b[2],
            "offset": b[3], "semantic": b[7],
            "type_name": dtype_names.get(b[1], f"?{b[1]}"),
            "size": attr_size,
            "semantic_name": sem_names.get(b[7], f"0x{b[7]:02x}"),
        })

    # Stride = max attribute end + 2 (prefix bytes) + padding to 4-byte alignment
    stride = ((max_attr_end + 2) + 3) & ~3

    vdata_start = attr_pos + attr_count * 8

    # Extract character name from paths
    name = "unknown"
    for p in paths:
        if "/Characters/" in p:
            parts = p.split("/")
            idx = parts.index("Characters") + 1
            if idx < len(parts):
                name = parts[idx]
            break

    return {
        "name": name,
        "paths": paths,
        "mesh_start": mesh_start,
        "header_vertex_count": header_vertex_count,
        "vertex_count": vertex_count,
        "index_count": index_count,
        "bbox": bbox,
        "attrs": attrs,
        "stride": stride,
        "vdata_start": vdata_start,
    }


def extract_mesh(data: bytes, info: dict) -> dict | None:
    """Extract positions and indices from parsed RSC0 mesh."""
    vdata_start = info["vdata_start"]
    vertex_count = info["vertex_count"]
    index_count = info["index_count"]
    stride = info["stride"]

    # Extract positions (BE float3 at offset +2)
    positions = []
    valid = 0
    for i in range(vertex_count):
        off = vdata_start + i * stride + POS_OFFSET
        if off + 12 > len(data):
            positions.append((0.0, 0.0, 0.0))
            continue
        x, y, z = struct.unpack_from(">3f", data, off)
        if (
            math.isfinite(x) and math.isfinite(y) and math.isfinite(z)
            and abs(x) < 10000 and abs(y) < 10000 and abs(z) < 10000
        ):
            positions.append((x, y, z))
            valid += 1
        else:
            positions.append((0.0, 0.0, 0.0))

    if valid < vertex_count * 0.5:
        return None

    # Extract indices
    idx_start = vdata_start + vertex_count * stride
    indices = []
    for i in range(index_count):
        off = idx_start + i * 2
        if off + 2 > len(data):
            break
        idx = struct.unpack_from("<H", data, off)[0]
        if idx < vertex_count:
            indices.append(idx)

    # Build triangles
    triangles = []
    for i in range(0, len(indices) - 2, 3):
        triangles.append((indices[i], indices[i + 1], indices[i + 2]))

    # Filter degenerate triangles
    triangles = [
        (a, b, c) for a, b, c in triangles
        if a != b and b != c and a != c
    ]

    return {
        "name": info["name"],
        "positions": positions,
        "triangles": triangles,
        "vertex_count": vertex_count,
        "valid_positions": valid,
    }


def write_obj(mesh: dict, output: Path) -> None:
    """Write mesh data as Wavefront OBJ."""
    with open(output, "w") as f:
        f.write(f"# Extracted from Vainglory RSC0: {mesh['name']}\n")
        f.write(f"# {mesh['vertex_count']} vertices, {len(mesh['triangles'])} triangles\n")
        f.write(f"# Valid positions: {mesh['valid_positions']}/{mesh['vertex_count']}\n\n")

        for x, y, z in mesh["positions"]:
            f.write(f"v {x:.6f} {y:.6f} {z:.6f}\n")

        f.write(f"\ng {mesh['name']}\n")
        for i0, i1, i2 in mesh["triangles"]:
            f.write(f"f {i0 + 1} {i1 + 1} {i2 + 1}\n")


def main():
    parser = argparse.ArgumentParser(description="Extract meshes from Vainglory RSC0 files (v2)")
    parser.add_argument("input", type=Path, help="RSC0 file or directory to scan")
    parser.add_argument("-o", "--output", type=Path, default=Path("extracted_meshes"), help="Output directory")
    parser.add_argument("--list", action="store_true", help="List mesh files without extracting")
    parser.add_argument("--min-verts", type=int, default=100, help="Minimum vertex count to extract")
    args = parser.parse_args()

    args.output.mkdir(parents=True, exist_ok=True)

    if args.input.is_dir():
        files = sorted(args.input.rglob("*"))
    else:
        files = [args.input]

    extracted = 0
    for filepath in files:
        if not filepath.is_file():
            continue

        data = filepath.read_bytes()
        info = parse_rsc0(data)
        if info is None:
            continue

        if info["vertex_count"] < args.min_verts:
            continue

        if args.list:
            print(
                f"{filepath}: {info['name']} "
                f"(v={info['vertex_count']}, idx={info['index_count']}, "
                f"stride={info['stride']}, attrs={len(info['attrs'])})"
            )
            for a in info["attrs"]:
                print(f"  {a['type_name']}x{a['count']} @{a['offset']} = {a['semantic_name']}")
            continue

        print(f"\nExtracting: {filepath}", file=sys.stderr)
        print(f"  {info['name']}: {info['vertex_count']} verts, {info['index_count']} indices, stride={info['stride']}", file=sys.stderr)

        mesh = extract_mesh(data, info)
        if mesh is None:
            print("  FAILED: too few valid positions", file=sys.stderr)
            continue

        obj_name = f"{mesh['name']}_{filepath.name[:8]}_v2"
        obj_path = args.output / f"{obj_name}.obj"
        write_obj(mesh, obj_path)
        extracted += 1
        print(
            f"  -> {obj_path} "
            f"({mesh['valid_positions']} valid verts, {len(mesh['triangles'])} tris)",
            file=sys.stderr,
        )

    if not args.list:
        print(f"\nExtracted {extracted} meshes", file=sys.stderr)


if __name__ == "__main__":
    main()
