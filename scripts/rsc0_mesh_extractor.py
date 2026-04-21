#!/usr/bin/env python3
"""
RSC0 mesh extractor for Vainglory (E.V.I.L. engine).

Extracts 3D geometry from proprietary RSC0 resource containers and exports
as Wavefront OBJ files.

Format findings:
- RSC0 header: 32 bytes (magic + sizes + padding)
- Path table: count(uint16) + null-terminated strings
- Mesh metadata: flag, submesh info, bone indices, attribute table
- Vertex data: 64 bytes per vertex, big-endian float3 position at offset +2
- Index buffer: uint16 LE indices at end of file
"""

from __future__ import annotations

import argparse
import math
import struct
import sys
from pathlib import Path


def parse_rsc0_header(data: bytes) -> dict:
    """Parse the RSC0 container header and path table."""
    assert data[:4] == b"RSC0", f"Not RSC0: {data[:4]}"
    data_size = struct.unpack_from("<I", data, 4)[0]
    path_count = struct.unpack_from("<H", data, 0x24)[0]

    paths = []
    pos = 0x26
    for _ in range(path_count):
        end = data.find(b"\x00", pos)
        paths.append(data[pos:end].decode("utf-8", "ignore"))
        pos = end + 1

    return {"data_size": data_size, "paths": paths, "mesh_start": pos}


def find_index_buffer(data: bytes, max_vertex_idx: int) -> tuple[int, int, list[int]]:
    """Find the index buffer by scanning from the end of file.

    Returns (start_offset, index_count, indices).
    """
    fsize = len(data)

    end = fsize
    while end > 2 and data[end - 2 : end] == b"\x00\x00":
        end -= 2

    start = end
    consecutive_valid = 0
    for off in range(end - 2, max(0, end - 200000), -2):
        idx = struct.unpack_from("<H", data, off)[0]
        if idx < max_vertex_idx:
            consecutive_valid += 1
            start = off
        else:
            if consecutive_valid > 100:
                break
            consecutive_valid = 0
            start = off + 2

    num_indices = (end - start) // 2
    indices = [struct.unpack_from("<H", data, start + i * 2)[0] for i in range(num_indices)]
    return start, num_indices, indices


def extract_mesh(filepath: Path) -> dict | None:
    """Extract mesh data from an RSC0 file."""
    data = filepath.read_bytes()
    if data[:4] != b"RSC0":
        return None

    header = parse_rsc0_header(data)
    paths = header["paths"]
    name = "unknown"
    for p in paths:
        if "/Characters/" in p:
            parts = p.split("/")
            idx = parts.index("Characters") + 1
            if idx < len(parts):
                name = parts[idx]
            break

    mesh_start = header["mesh_start"]
    flag = data[mesh_start]

    if flag not in (4, 5):
        print(f"  Unknown flag: {flag}, skipping", file=sys.stderr)
        return None

    vertex_count_header = struct.unpack_from("<I", data, mesh_start + 8)[0]
    bbox = struct.unpack_from("<6f", data, mesh_start + 12)

    print(f"  Name: {name}", file=sys.stderr)
    print(f"  Flag: {flag}, vertices(hdr): {vertex_count_header}", file=sys.stderr)
    print(
        f"  BBox: ({bbox[0]:.1f},{bbox[1]:.1f},{bbox[2]:.1f})-({bbox[3]:.1f},{bbox[4]:.1f},{bbox[5]:.1f})",
        file=sys.stderr,
    )

    # Find the index buffer using header vertex count as upper bound
    idx_start, idx_count, indices = find_index_buffer(data, vertex_count_header + 100)
    if idx_count < 3:
        print("  No valid index buffer found!", file=sys.stderr)
        return None

    # Skip the 16-byte draw-call header at the start of the index region
    # It contains [0,0,0,0,draw_call_count,0,0,0] as uint16 which creates degenerate triangles
    if idx_count > 8 and all(indices[i] == 0 for i in range(4)):
        indices = indices[8:]
        idx_count -= 8
        idx_start += 16

    max_idx = max(indices) if indices else 0
    actual_vertex_count = max_idx + 1
    print(f"  Index buffer: {idx_count} indices at 0x{idx_start:x}, max_idx={max_idx}", file=sys.stderr)

    # Vertex data: stride=64, big-endian float3 position at offset +2
    stride = 64
    pos_offset = 2

    # Find the attribute table marker (00 04 03 00 00 00 00 01) to locate vertex data start
    attr_pattern = bytes([0x00, 0x04, 0x03, 0x00, 0x00, 0x00, 0x00, 0x01])
    attr_pos = data.find(attr_pattern, mesh_start, idx_start)
    if attr_pos >= 0:
        # Attribute table has 12-byte header before the pattern
        attr_count = struct.unpack_from("<H", data, attr_pos - 2)[0]
        vdata_start = attr_pos + attr_count * 8
        # Recompute vertex count from available space
        available = idx_start - vdata_start
        actual_vertex_count = available // stride
        print(f"  Attribute table at 0x{attr_pos:x}, {attr_count} attrs", file=sys.stderr)
    else:
        vdata_start = idx_start - stride * actual_vertex_count
        if vdata_start < mesh_start:
            available = idx_start - mesh_start
            actual_vertex_count = available // stride
            vdata_start = idx_start - stride * actual_vertex_count

    print(f"  Vertex data: 0x{vdata_start:x}, {actual_vertex_count} vertices, stride={stride}", file=sys.stderr)

    # Extract positions (big-endian float3 at offset +2 within each 64-byte vertex)
    positions = []
    valid = 0
    for i in range(actual_vertex_count):
        off = vdata_start + i * stride + pos_offset
        if off + 12 > len(data):
            positions.append((0.0, 0.0, 0.0))
            continue
        x, y, z = struct.unpack_from(">3f", data, off)
        if math.isfinite(x) and math.isfinite(y) and math.isfinite(z) and abs(x) < 10000 and abs(y) < 10000 and abs(z) < 10000:
            positions.append((x, y, z))
            valid += 1
        else:
            positions.append((0.0, 0.0, 0.0))

    print(f"  Valid positions: {valid}/{actual_vertex_count} ({valid*100//actual_vertex_count}%)", file=sys.stderr)

    if valid < actual_vertex_count * 0.5:
        print("  Too few valid positions, extraction unreliable", file=sys.stderr)
        return None

    # Build triangle list from indices
    valid_indices = [i for i in indices if i < actual_vertex_count]
    triangles = []
    for i in range(0, len(valid_indices) - 2, 3):
        triangles.append((valid_indices[i], valid_indices[i + 1], valid_indices[i + 2]))

    print(f"  Triangles: {len(triangles)}", file=sys.stderr)

    return {
        "name": name,
        "positions": positions,
        "indices": triangles,
        "vertex_count": actual_vertex_count,
    }


def write_obj(mesh: dict, output: Path) -> None:
    """Write mesh data as Wavefront OBJ."""
    with open(output, "w") as f:
        f.write(f"# Extracted from Vainglory RSC0: {mesh['name']}\n")
        f.write(f"# {len(mesh['positions'])} vertices, {len(mesh['indices'])} triangles\n\n")

        for x, y, z in mesh["positions"]:
            f.write(f"v {x:.6f} {y:.6f} {z:.6f}\n")

        f.write(f"\ng {mesh['name']}\n")
        for i0, i1, i2 in mesh["indices"]:
            f.write(f"f {i0+1} {i1+1} {i2+1}\n")


def main():
    parser = argparse.ArgumentParser(description="Extract meshes from Vainglory RSC0 files")
    parser.add_argument("input", type=Path, help="RSC0 file or directory to scan")
    parser.add_argument("-o", "--output", type=Path, default=Path("extracted_meshes"), help="Output directory")
    parser.add_argument("--list", action="store_true", help="List character files without extracting")
    args = parser.parse_args()

    args.output.mkdir(parents=True, exist_ok=True)

    if args.input.is_dir():
        files = sorted(args.input.rglob("*"))
    else:
        files = [args.input]

    for filepath in files:
        if not filepath.is_file():
            continue

        data = filepath.read_bytes()
        if data[:4] != b"RSC0":
            continue

        header = parse_rsc0_header(data)
        has_character = any("/Characters/" in p for p in header["paths"])
        has_guob = any(".guob" in p for p in header["paths"])

        if not (has_character and has_guob):
            continue

        mesh_start = header["mesh_start"]
        flag = data[mesh_start]
        if flag != 4:
            continue

        vertex_count = struct.unpack_from("<I", data, mesh_start + 8)[0]
        name = "?"
        for p in header["paths"]:
            if "/Characters/" in p:
                parts = p.split("/")
                idx = parts.index("Characters") + 1
                if idx < len(parts):
                    name = parts[idx]
                break

        if args.list:
            print(f"{filepath}: {name} (flag={flag}, verts={vertex_count}, size={len(data)})")
            continue

        print(f"\nExtracting: {filepath}", file=sys.stderr)
        mesh = extract_mesh(filepath)
        if mesh:
            obj_name = f"{mesh['name']}_{filepath.name[:8]}"
            obj_path = args.output / f"{obj_name}.obj"
            write_obj(mesh, obj_path)
            print(f"  -> {obj_path} ({mesh['vertex_count']} verts, {len(mesh['indices'])} tris)")
        else:
            print(f"  FAILED", file=sys.stderr)


if __name__ == "__main__":
    main()
