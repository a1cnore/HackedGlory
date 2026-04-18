#!/usr/bin/env python3
"""
extract_textures.py — Extract textures from Vainglory Data/ asset bundles.

Supports:
  - Format 18/17: WebP textures (extracted as .webp)
  - Format 7/9: PVRTC/ETC2 compressed textures (wrapped in PVR v3 container)
  - Format 0/1/8/10/20: Other GPU formats (raw dump with PVR header)

Usage:
    python3 extract_textures.py <Data_dir> <output_dir> [--webp-only] [--min-size 256]
"""

from __future__ import annotations
import argparse
import os
import struct
import sys
from pathlib import Path


# PVRTC pixel format codes for PVR v3 header
PVR_FORMATS = {
    0: (0, "PVRTC 2bpp RGB"),
    1: (1, "PVRTC 2bpp RGBA"),
    7: (2, "PVRTC 4bpp RGB"),      # Most common in VG
    8: (3, "PVRTC 4bpp RGBA"),
    9: (6, "ETC1"),                  # Second most common
    10: (22, "ETC2 RGB"),
    17: (0, "WebP lossy (custom)"),
    18: (0, "WebP lossy (custom)"),
    20: (27, "ASTC 4x4"),
}


def write_pvr_header(f, width: int, height: int, fmt: int, data_size: int, mip_count: int):
    """Write a PVR v3 header so standard tools can read the texture."""
    pvr_version = 0x03525650  # "PVR\x03"
    flags = 0
    # Map our format codes to PVR pixel format
    pvr_fmt = PVR_FORMATS.get(fmt, (2, "unknown"))[0]
    color_space = 0  # linear
    channel_type = 0  # unsigned byte normalized
    depth = 1
    surfaces = 1
    faces = 1
    metadata_size = 0

    f.write(struct.pack('<I', pvr_version))
    f.write(struct.pack('<I', flags))
    f.write(struct.pack('<Q', pvr_fmt))
    f.write(struct.pack('<I', color_space))
    f.write(struct.pack('<I', channel_type))
    f.write(struct.pack('<I', height))
    f.write(struct.pack('<I', width))
    f.write(struct.pack('<I', depth))
    f.write(struct.pack('<I', surfaces))
    f.write(struct.pack('<I', faces))
    f.write(struct.pack('<I', mip_count))
    f.write(struct.pack('<I', metadata_size))


def extract_webp(data: bytes, offset: int = 28) -> bytes | None:
    """Extract the largest WebP mipmap from a texture container."""
    # Search for RIFF/WEBP starting from the mipmap data region
    pos = offset
    while pos < len(data) - 12:
        idx = data.find(b'RIFF', pos)
        if idx == -1:
            return None
        if data[idx + 8:idx + 12] == b'WEBP':
            riff_size = struct.unpack_from('<I', data, idx + 4)[0] + 8
            return data[idx:idx + riff_size]
        pos = idx + 4
    return None


def extract_pvrtc(data: bytes, width: int, height: int, fmt: int, mip_count: int) -> bytes | None:
    """Extract PVRTC/ETC data and wrap in PVR v3 container."""
    # Texture data starts after the 28-byte header
    tex_data = data[28:]
    if len(tex_data) < 16:
        return None

    out = bytearray()
    # Write PVR header
    import io
    buf = io.BytesIO()
    write_pvr_header(buf, width, height, fmt, len(tex_data), mip_count)
    out.extend(buf.getvalue())
    out.extend(tex_data)
    return bytes(out)


def parse_texture_header(data: bytes) -> dict | None:
    """Parse the Vainglory texture container header."""
    if len(data) < 28:
        return None

    total_size = struct.unpack_from('<I', data, 0)[0]
    mip_count = struct.unpack_from('<I', data, 4)[0]
    fmt = struct.unpack_from('<I', data, 12)[0]
    width = struct.unpack_from('<I', data, 16)[0]
    height = struct.unpack_from('<I', data, 20)[0]

    if mip_count < 1 or mip_count > 20:
        return None
    if width < 4 or width > 8192 or height < 4 or height > 8192:
        return None
    if (width & (width - 1)) != 0 or (height & (height - 1)) != 0:
        return None

    return {
        "total_size": total_size,
        "mip_count": mip_count,
        "format": fmt,
        "width": width,
        "height": height,
    }


def main():
    parser = argparse.ArgumentParser(description="Extract Vainglory textures")
    parser.add_argument("data_dir", help="Path to Data/ directory")
    parser.add_argument("output_dir", help="Output directory for extracted textures")
    parser.add_argument("--webp-only", action="store_true", help="Only extract WebP textures")
    parser.add_argument("--min-size", type=int, default=64, help="Minimum texture dimension (default: 64)")
    parser.add_argument("--max-files", type=int, default=0, help="Max files to extract (0=all)")
    args = parser.parse_args()

    data_dir = Path(args.data_dir)
    output_dir = Path(args.output_dir)
    output_dir.mkdir(parents=True, exist_ok=True)

    # Create subdirectories by format
    (output_dir / "webp").mkdir(exist_ok=True)
    (output_dir / "pvr").mkdir(exist_ok=True)

    extracted = 0
    skipped = 0
    errors = 0

    for dirpath, _, filenames in os.walk(data_dir):
        for fname in filenames:
            fpath = Path(dirpath) / fname
            try:
                data = fpath.read_bytes()

                # Skip non-texture files
                if data[:4] in (b'RSC0', b'CFF0', b'OggS', b'ID3\x03'):
                    continue
                if data[:2] == b'\xff\xfb':
                    continue

                info = parse_texture_header(data)
                if info is None:
                    continue
                if info["total_size"] != len(data):
                    continue
                if info["width"] < args.min_size or info["height"] < args.min_size:
                    skipped += 1
                    continue

                fmt = info["format"]
                w, h = info["width"], info["height"]
                short_hash = fname[:12]
                base_name = f"{w}x{h}_{short_hash}"

                if fmt in (17, 18):
                    # WebP texture
                    webp = extract_webp(data)
                    if webp:
                        out_path = output_dir / "webp" / f"{base_name}.webp"
                        out_path.write_bytes(webp)
                        extracted += 1
                    else:
                        errors += 1
                elif not args.webp_only:
                    # GPU compressed texture — wrap in PVR
                    pvr = extract_pvrtc(data, w, h, fmt, info["mip_count"])
                    if pvr:
                        out_path = output_dir / "pvr" / f"{base_name}_fmt{fmt}.pvr"
                        out_path.write_bytes(pvr)
                        extracted += 1
                    else:
                        errors += 1

                if args.max_files and extracted >= args.max_files:
                    break

            except Exception as e:
                errors += 1

        if args.max_files and extracted >= args.max_files:
            break

    print(f"Texture Extraction Complete")
    print(f"{'=' * 40}")
    print(f"Extracted: {extracted}")
    print(f"Skipped (too small): {skipped}")
    print(f"Errors: {errors}")
    print(f"Output: {output_dir}")


if __name__ == "__main__":
    main()
