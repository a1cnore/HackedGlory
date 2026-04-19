#!/usr/bin/env python3
"""Slice Vainglory ability and item icon atlases into individual PNGs using ffmpeg."""

import json
import os
import subprocess
import sys
import struct
import zlib

ASSETS_DIR = os.path.join(os.path.dirname(__file__), "..", "reports", "extracted_assets")
DASHBOARD_ICONS = os.path.join(
    os.path.dirname(__file__), "..", "..", "vg_server", "dashboard", "public", "icons"
)

ABILITY_ATLAS = os.path.join(ASSETS_DIR, "ability_icon_atlas_2048.png")
ITEM_ATLAS = os.path.join(ASSETS_DIR, "item_icon_atlas_2048.png")

# Grid parameters (verified by visual inspection)
ABILITY_CELL = 128  # 16x16 grid in 2048x2048
ABILITY_COLS = 16
ABILITY_ROWS = 16

ITEM_CELL = 256  # 8x8 grid in 2048x2048
ITEM_COLS = 8
ITEM_ROWS = 8

OUTPUT_SIZE = 64  # Scale icons to 64x64 for web

# Threshold: if a cell's average alpha is below this, it's considered empty
ALPHA_THRESHOLD = 10


def is_cell_empty(atlas_path, cell_size, col, row):
    """Check if a grid cell is mostly transparent by extracting raw RGBA and averaging alpha."""
    x = col * cell_size
    y = row * cell_size
    # Extract raw RGBA pixels for the cell
    result = subprocess.run(
        [
            "ffmpeg", "-y",
            "-i", atlas_path,
            "-vf", f"crop={cell_size}:{cell_size}:{x}:{y}",
            "-f", "rawvideo",
            "-pix_fmt", "rgba",
            "pipe:1",
        ],
        capture_output=True,
    )
    if result.returncode != 0:
        return True
    data = result.stdout
    if len(data) == 0:
        return True
    # Sum alpha channel (every 4th byte starting at index 3)
    total_alpha = 0
    pixel_count = len(data) // 4
    if pixel_count == 0:
        return True
    for i in range(3, len(data), 4):
        total_alpha += data[i]
    avg_alpha = total_alpha / pixel_count
    return avg_alpha < ALPHA_THRESHOLD


def extract_cell(atlas_path, cell_size, col, row, output_path):
    """Crop a single cell from the atlas, scale to OUTPUT_SIZE, and save as PNG."""
    x = col * cell_size
    y = row * cell_size
    result = subprocess.run(
        [
            "ffmpeg", "-y",
            "-i", atlas_path,
            "-vf", f"crop={cell_size}:{cell_size}:{x}:{y},scale={OUTPUT_SIZE}:{OUTPUT_SIZE}",
            "-update", "1",
            output_path,
        ],
        capture_output=True,
    )
    return result.returncode == 0


def slice_atlas(atlas_path, cols, rows, cell_size, out_dir, prefix):
    """Slice an atlas into individual icons, skipping empty cells."""
    os.makedirs(out_dir, exist_ok=True)
    manifest = []
    total = cols * rows
    extracted = 0

    for row in range(rows):
        for col in range(cols):
            idx = row * cols + col + 1
            sys.stdout.write(f"\r  Checking {prefix} cell r{row}_c{col} ({idx}/{total})")
            sys.stdout.flush()

            if is_cell_empty(atlas_path, cell_size, col, row):
                continue

            filename = f"{prefix}_r{row}_c{col}.png"
            output_path = os.path.join(out_dir, filename)
            if extract_cell(atlas_path, cell_size, col, row, output_path):
                manifest.append({
                    "filename": filename,
                    "row": row,
                    "col": col,
                    "grid_position": f"r{row}_c{col}",
                })
                extracted += 1

    print(f"\r  Extracted {extracted}/{total} {prefix} icons" + " " * 30)
    return manifest


def main():
    print("Slicing Vainglory icon atlases...")

    abilities_dir = os.path.join(DASHBOARD_ICONS, "abilities")
    items_dir = os.path.join(DASHBOARD_ICONS, "items")

    print(f"\n[1/2] Ability atlas ({ABILITY_COLS}x{ABILITY_ROWS} grid, {ABILITY_CELL}px cells)")
    ability_manifest = slice_atlas(
        ABILITY_ATLAS, ABILITY_COLS, ABILITY_ROWS, ABILITY_CELL, abilities_dir, "ability"
    )

    print(f"\n[2/2] Item atlas ({ITEM_COLS}x{ITEM_ROWS} grid, {ITEM_CELL}px cells)")
    item_manifest = slice_atlas(
        ITEM_ATLAS, ITEM_COLS, ITEM_ROWS, ITEM_CELL, items_dir, "item"
    )

    # Write combined manifest
    manifest = {
        "abilities": {
            "source": "ability_icon_atlas_2048.png",
            "grid": {"cols": ABILITY_COLS, "rows": ABILITY_ROWS, "cell_size": ABILITY_CELL},
            "output_size": OUTPUT_SIZE,
            "icons": ability_manifest,
        },
        "items": {
            "source": "item_icon_atlas_2048.png",
            "grid": {"cols": ITEM_COLS, "rows": ITEM_ROWS, "cell_size": ITEM_CELL},
            "output_size": OUTPUT_SIZE,
            "icons": item_manifest,
        },
    }

    manifest_path = os.path.join(DASHBOARD_ICONS, "icon_manifest.json")
    os.makedirs(DASHBOARD_ICONS, exist_ok=True)
    with open(manifest_path, "w") as f:
        json.dump(manifest, f, indent=2)

    print(f"\nManifest written to {manifest_path}")
    print(f"Total: {len(ability_manifest)} abilities + {len(item_manifest)} items")


if __name__ == "__main__":
    main()
