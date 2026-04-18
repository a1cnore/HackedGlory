#!/usr/bin/env python3
"""
RSC0 mesh extractor for Vainglory (E.V.I.L. engine).

Extracts 3D geometry from proprietary RSC0 resource containers and exports
as Wavefront OBJ files.

The RSC0 format stores interleaved vertex + index data for character meshes.
Since the vertex stride/format varies, this script tries multiple interpretations
and picks the one that produces the most geometrically valid output.
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

    # Scan backwards from end to find where valid uint16 indices stop
    # Valid = all values < max_vertex_idx and not all zeros
    # Use a sliding window to be robust against padding

    # Start from end, find first non-padding
    end = fsize
    while end > 2 and data[end - 2:end] == b"\x00\x00":
        end -= 2

    # Now scan backwards to find where indices become invalid
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


def score_vertex_interpretation(
    data: bytes,
    vdata_start: int,
    stride: int,
    vertex_count: int,
    pos_offset: int,
    pos_format: str,
) -> tuple[float, list[tuple[float, float, float]]]:
    """Score a vertex format interpretation by checking geometric validity.

    Returns (score, positions).
    """
    positions = []
    valid_pos = 0
    min_coords = [1e9, 1e9, 1e9]
    max_coords = [-1e9, -1e9, -1e9]

    for i in range(vertex_count):
        off = vdata_start + i * stride + pos_offset
        if off + 12 > len(data):
            break

        if pos_format == "float3":
            x, y, z = struct.unpack_from("<3f", data, off)
        elif pos_format == "half3":
            hx, hy, hz = struct.unpack_from("<3H", data, off)
            x, y, z = _half(hx), _half(hy), _half(hz)
        else:
            break

        positions.append((x, y, z))

        if math.isfinite(x) and math.isfinite(y) and math.isfinite(z):
            if abs(x) < 500 and abs(y) < 500 and abs(z) < 500:
                valid_pos += 1
                for j, v in enumerate((x, y, z)):
                    min_coords[j] = min(min_coords[j], v)
                    max_coords[j] = max(max_coords[j], v)

    if not positions:
        return 0.0, []

    ratio = valid_pos / len(positions)

    # Check that we have a reasonable bounding box (not all zeros, not degenerate)
    extents = [max_coords[j] - min_coords[j] for j in range(3)]
    has_volume = all(e > 0.1 for e in extents)
    aspect_ok = max(extents) / (min(extents) + 0.001) < 100

    score = ratio * 100
    if has_volume:
        score += 20
    if aspect_ok:
        score += 10

    return score, positions


def _half(h: int) -> float:
    """IEEE 754 half-float to float."""
    sign = (h >> 15) & 1
    exp = (h >> 10) & 0x1F
    frac = h & 0x3FF
    if exp == 0:
        return (-1) ** sign * 2 ** (-14) * (frac / 1024.0) if frac else 0.0
    if exp == 31:
        return float("nan") if frac else (-1) ** sign * float("inf")
    return (-1) ** sign * 2 ** (exp - 15) * (1.0 + frac / 1024.0)


def extract_mesh(filepath: Path, vertex_count_override: int | None = None) -> dict | None:
    """Extract mesh data from an RSC0 file.

    Returns dict with 'positions', 'indices', 'name' or None.
    """
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

    # Parse the mesh header to get vertex count
    mesh_start = header["mesh_start"]
    flag = data[mesh_start]

    if flag not in (4, 5):
        print(f"  Unknown flag: {flag}, skipping", file=sys.stderr)
        return None

    submesh_count = struct.unpack_from("<H", data, mesh_start + 2)[0]
    vertex_count_header = struct.unpack_from("<I", data, mesh_start + 8)[0]
    bbox = struct.unpack_from("<6f", data, mesh_start + 12)

    vertex_count = vertex_count_override or vertex_count_header
    print(f"  Name: {name}", file=sys.stderr)
    print(f"  Flag: {flag}, submeshes: {submesh_count}, vertices: {vertex_count}", file=sys.stderr)
    print(
        f"  BBox: ({bbox[0]:.1f},{bbox[1]:.1f},{bbox[2]:.1f})-({bbox[3]:.1f},{bbox[4]:.1f},{bbox[5]:.1f})",
        file=sys.stderr,
    )

    # Find the index buffer from the end of file
    idx_start, idx_count, indices = find_index_buffer(data, vertex_count + 100)
    print(f"  Index buffer: {idx_count} indices at 0x{idx_start:x}", file=sys.stderr)

    if idx_count < 3:
        print("  No valid index buffer found!", file=sys.stderr)
        return None

    # Filter indices to valid range
    max_idx = max(indices)
    actual_vertex_count = max_idx + 1
    print(f"  Max index: {max_idx}, actual vertex count: {actual_vertex_count}", file=sys.stderr)

    # Try different vertex format interpretations
    best_score = 0
    best_result = None

    for stride in range(24, 81, 4):
        for pos_format in ["float3"]:
            pos_size = 12 if pos_format == "float3" else 6

            # Try vertex data ending right at index buffer start
            vdata_start = idx_start - stride * actual_vertex_count
            if vdata_start < mesh_start:
                continue

            score, positions = score_vertex_interpretation(
                data, vdata_start, stride, actual_vertex_count, 0, pos_format
            )

            if score > best_score:
                best_score = score
                best_result = {
                    "stride": stride,
                    "vdata_start": vdata_start,
                    "pos_format": pos_format,
                    "positions": positions,
                    "score": score,
                }

            # Also try with small offsets (alignment padding between sections)
            for pad in [2, 4, 8, 12, 16, 20, 24, 32]:
                vdata_start2 = idx_start - stride * actual_vertex_count - pad
                if vdata_start2 < mesh_start:
                    continue

                score2, positions2 = score_vertex_interpretation(
                    data, vdata_start2, stride, actual_vertex_count, 0, pos_format
                )
                if score2 > best_score:
                    best_score = score2
                    best_result = {
                        "stride": stride,
                        "vdata_start": vdata_start2,
                        "pos_format": pos_format,
                        "positions": positions2,
                        "score": score2,
                    }

    if best_result:
        print(
            f"  Best format: stride={best_result['stride']}, "
            f"start=0x{best_result['vdata_start']:x}, "
            f"format={best_result['pos_format']}, "
            f"score={best_result['score']:.1f}",
            file=sys.stderr,
        )

        # Validate indices against actual vertex count
        valid_indices = [i for i in indices if i < len(best_result["positions"])]
        # Group into triangles
        triangles = []
        for i in range(0, len(valid_indices) - 2, 3):
            triangles.append((valid_indices[i], valid_indices[i + 1], valid_indices[i + 2]))

        return {
            "name": name,
            "positions": best_result["positions"],
            "indices": triangles,
            "score": best_result["score"],
            "stride": best_result["stride"],
        }

    print("  Could not determine vertex format!", file=sys.stderr)
    return None


def write_obj(mesh: dict, output: Path) -> None:
    """Write mesh data as Wavefront OBJ."""
    with open(output, "w") as f:
        f.write(f"# Extracted from Vainglory RSC0: {mesh['name']}\n")
        f.write(f"# {len(mesh['positions'])} vertices, {len(mesh['indices'])} triangles\n")
        f.write(f"# Score: {mesh['score']:.1f}, stride: {mesh['stride']}\n\n")

        for x, y, z in mesh["positions"]:
            if math.isfinite(x) and math.isfinite(y) and math.isfinite(z):
                f.write(f"v {x:.6f} {y:.6f} {z:.6f}\n")
            else:
                f.write("v 0 0 0\n")

        f.write(f"\ng {mesh['name']}\n")
        for i0, i1, i2 in mesh["indices"]:
            # OBJ indices are 1-based
            f.write(f"f {i0+1} {i1+1} {i2+1}\n")


def main():
    parser = argparse.ArgumentParser(description="Extract meshes from Vainglory RSC0 files")
    parser.add_argument("input", type=Path, help="RSC0 file or directory to scan")
    parser.add_argument("-o", "--output", type=Path, default=Path("extracted_meshes"), help="Output directory")
    parser.add_argument("--vertex-count", type=int, help="Override vertex count")
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
        mesh = extract_mesh(filepath, args.vertex_count)
        if mesh:
            obj_path = args.output / f"{mesh['name']}.obj"
            write_obj(mesh, obj_path)
            print(f"  → {obj_path} ({len(mesh['positions'])} verts, {len(mesh['indices'])} tris)")
        else:
            print(f"  FAILED: {filepath}", file=sys.stderr)


if __name__ == "__main__":
    main()
