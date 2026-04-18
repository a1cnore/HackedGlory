#!/usr/bin/env python3
"""
extract_balance_db.py — Extract the full Vainglory game balance database.

Decrypts all CFF0 definition files and extracts hero stats, item data,
talent info, and game mode settings into a structured JSON database.

Usage:
    python3 extract_balance_db.py <Data_dir> <output_json>
"""

from __future__ import annotations
import json
import os
import struct
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).parent))
from decrypt_cff0 import parse_cff0, find_symb_name, decrypt_inst

# ── Hero stat struct offsets (verified against Vox, Catherine, Ringo) ──
# Block 0, DEF0 type 0x804

HERO_STAT_OFFSETS = {
    124: ("health_base", "float"),
    128: ("health_per_level", "float"),
    132: ("health_regen", "float"),
    136: ("health_regen_per_level", "float"),
    140: ("energy_base", "float"),
    144: ("energy_per_level", "float"),
    148: ("energy_regen", "float"),
    152: ("energy_regen_per_level", "float"),
    156: ("weapon_base", "float"),
    160: ("weapon_per_level", "float"),
    172: ("armor_base", "float"),
    176: ("armor_per_level", "float"),
    180: ("shield_base", "float"),
    184: ("shield_per_level", "float"),
    196: ("range", "float"),
    200: ("atk_speed_ratio", "float"),
    204: ("atk_speed_per_level", "float"),
    220: ("perk_crystal_ratio", "float"),
    232: ("move_speed", "float"),
}

# ── Item struct offsets (verified against WeaponBlade, Sorrowblade, etc.) ──

ITEM_OFFSETS = {
    24: ("tier", "uint"),
    36: ("recipe_cost", "uint"),
    40: ("sell_value", "uint"),
}

# ── Known hero names (to filter out non-hero entities) ──

KNOWN_HEROES = {
    "Adagio", "Alpha", "Amael", "Anka", "Ardan", "Baptiste", "Baron",
    "Blackfeather", "Caine", "Catherine", "Celeste", "Churnwalker",
    "Flicker", "Fortress", "Glaive", "Grace", "Grumpjaw", "Gwen",
    "Idris", "Inara", "Ishtar", "Joule", "Karas", "Kensei", "Kestrel",
    "Kinetic", "Koshka", "Lance", "Leo", "Lorelai", "Lyra", "Maaya",
    "Magnus", "Malene", "Miho", "Ozo", "Petal", "Phinn", "Reim",
    "Reza", "Ringo", "SAW", "Samuel", "Sanfeng", "Sayoc", "Shin",
    "Silvernail", "Skaarf", "Skye", "Taka", "Tony", "Varya", "Viola",
    "Vox", "Warhawk", "Yates", "Ylva",
}


def read_field(data: bytes, offset: int, ftype: str):
    if offset + 4 > len(data):
        return None
    if ftype == "float":
        return round(struct.unpack_from('<f', data, offset)[0], 4)
    elif ftype == "uint":
        return struct.unpack_from('<I', data, offset)[0]
    elif ftype == "int":
        return struct.unpack_from('<i', data, offset)[0]
    return None


def extract_hero(dec: bytes, name: str) -> dict | None:
    stats = {}
    for offset, (label, ftype) in HERO_STAT_OFFSETS.items():
        val = read_field(dec, offset, ftype)
        if val is not None:
            stats[label] = val

    hp = stats.get("health_base", 0)
    if hp < 100 or hp > 5000:
        return None

    result = {
        "name": name,
        "stats": stats,
        "level_12": {
            "health": round(stats.get("health_base", 0) + stats.get("health_per_level", 0) * 11, 1),
            "energy": round(stats.get("energy_base", 0) + stats.get("energy_per_level", 0) * 11, 1),
            "weapon": round(stats.get("weapon_base", 0) + stats.get("weapon_per_level", 0) * 11, 1),
            "armor": round(stats.get("armor_base", 0) + stats.get("armor_per_level", 0) * 11, 1),
            "shield": round(stats.get("shield_base", 0) + stats.get("shield_per_level", 0) * 11, 1),
            "atk_speed_pct": round((stats.get("atk_speed_ratio", 1) + stats.get("atk_speed_per_level", 0) * 11) * 100, 1),
        },
    }

    # Scan for ability data — extract all sensible floats from the ability region
    ability_floats = []
    for i in range(300, min(len(dec) - 4, 5000), 4):
        f = struct.unpack_from('<f', dec, i)[0]
        u = struct.unpack_from('<I', dec, i)[0]
        if u != 0 and 0.001 < abs(f) < 100000 and f == f:
            ability_floats.append({"offset": i, "value": round(f, 4)})

    if ability_floats:
        result["ability_region_floats"] = ability_floats[:80]

    return result


def extract_item(dec: bytes, name: str) -> dict | None:
    stats = {}
    for offset, (label, ftype) in ITEM_OFFSETS.items():
        val = read_field(dec, offset, ftype)
        if val is not None and val > 0:
            stats[label] = val

    if not stats.get("recipe_cost") and not stats.get("sell_value"):
        return None

    total_cost = stats.get("recipe_cost", 0)
    sell_value = stats.get("sell_value", 0)

    # Scan block for stat bonuses — look for recognizable float values
    bonus_floats = {}
    for i in range(100, min(len(dec) - 4, 600), 4):
        f = struct.unpack_from('<f', dec, i)[0]
        u = struct.unpack_from('<I', dec, i)[0]
        if u != 0 and 0.01 < abs(f) < 10000 and f == f and i not in {112, 148}:
            bonus_floats[i] = round(f, 4)

    return {
        "name": name,
        "tier": stats.get("tier", 0),
        "recipe_cost": total_cost,
        "sell_value": sell_value,
        "total_cost_estimate": sell_value * 2 if sell_value else total_cost,
        "bonus_floats": bonus_floats if bonus_floats else None,
    }


def extract_talent(dec: bytes, name: str) -> dict | None:
    floats = {}
    for i in range(0, min(len(dec) - 4, 400), 4):
        f = struct.unpack_from('<f', dec, i)[0]
        u = struct.unpack_from('<I', dec, i)[0]
        if u != 0 and 0.001 < abs(f) < 100000 and f == f:
            floats[i] = round(f, 4)
    return {"name": name, "data_size": len(dec), "floats": floats if floats else None}


def extract_game_mode(dec: bytes, name: str) -> dict | None:
    floats = {}
    for i in range(0, min(len(dec) - 4, 800), 4):
        f = struct.unpack_from('<f', dec, i)[0]
        u = struct.unpack_from('<I', dec, i)[0]
        if u != 0 and 0.001 < abs(f) < 100000 and f == f:
            floats[i] = round(f, 4)
    return {"name": name, "data_size": len(dec), "floats": floats if floats else None}


def main():
    if len(sys.argv) < 3:
        print(f"Usage: {sys.argv[0]} <Data_dir> <output_json>")
        sys.exit(1)

    data_dir = Path(sys.argv[1])
    output_path = Path(sys.argv[2])

    heroes = {}
    items = {}
    talents = {}
    game_modes = {}
    minions = {}
    other = {}
    errors = 0

    file_count = 0
    for dirpath, _, filenames in os.walk(data_dir):
        for fname in filenames:
            fpath = Path(dirpath) / fname
            try:
                raw = fpath.read_bytes()
                if raw[:4] != b'CFF0':
                    continue
                file_count += 1

                name = find_symb_name(raw)
                if not name:
                    continue
                clean = name.strip('*')

                parsed = parse_cff0(raw)
                if not parsed or not parsed["blocks"]:
                    continue

                block0 = parsed["blocks"][0]
                if "inst_decrypted" not in block0:
                    continue
                dec = block0["inst_decrypted"]

                # Classify and extract
                if clean in KNOWN_HEROES:
                    result = extract_hero(dec, clean)
                    if result:
                        heroes[clean] = result
                elif clean.startswith("Item_"):
                    result = extract_item(dec, clean)
                    if result:
                        items[clean] = result
                elif clean.startswith("Talent_"):
                    result = extract_talent(dec, clean)
                    if result:
                        talents[clean] = result
                elif clean.startswith("GameMode_"):
                    result = extract_game_mode(dec, clean)
                    if result:
                        game_modes[clean] = result
                elif clean.startswith(("Minion_", "HF_Minion", "5v5_Minion")):
                    minions[clean] = {"data_size": len(dec)}
                elif clean.startswith("ItemStore_"):
                    other[clean] = {"type": "item_store", "data_size": len(dec)}
                elif clean.endswith("Manifest") or clean.endswith("Manifest*"):
                    pass
                else:
                    # Check if it might be an unrecognized hero
                    hp = read_field(dec, 124, "float")
                    if hp and 400 < hp < 2000 and len(dec) > 5000:
                        result = extract_hero(dec, clean)
                        if result:
                            heroes[clean] = result
                            continue
                    other[clean] = {"data_size": len(dec)}

            except Exception as e:
                errors += 1

    # Build output
    db = {
        "_meta": {
            "game": "Vainglory",
            "version": "4.13.4",
            "build": "147219",
            "files_scanned": file_count,
            "extraction_method": "CFF0 INST decryption (Jenkins lookup3 + XOR stream cipher)",
        },
        "heroes": dict(sorted(heroes.items())),
        "items": dict(sorted(items.items())),
        "talents": dict(sorted(talents.items())),
        "game_modes": dict(sorted(game_modes.items())),
        "summary": {
            "heroes": len(heroes),
            "items": len(items),
            "talents": len(talents),
            "game_modes": len(game_modes),
            "other_entities": len(other),
            "errors": errors,
        },
    }

    output_path.write_text(json.dumps(db, indent=2))

    # Print summary
    print(f"Vainglory Balance Database Extraction")
    print(f"{'=' * 50}")
    print(f"Files scanned:  {file_count}")
    print(f"Heroes:         {len(heroes)}")
    print(f"Items:          {len(items)}")
    print(f"Talents:        {len(talents)}")
    print(f"Game modes:     {len(game_modes)}")
    print(f"Other:          {len(other)}")
    print(f"Errors:         {errors}")
    print()

    # Print hero stat table
    print(f"{'Hero':<16} {'HP':>5}→{'L12':>5} {'En':>5}→{'L12':>5} {'Wep':>4}→{'L12':>4} "
          f"{'Arm':>3}→{'L12':>3} {'Shd':>3}→{'L12':>3} {'Rng':>4} {'Spd':>4} {'AS%':>6}")
    print("-" * 110)
    for name in sorted(heroes.keys()):
        h = heroes[name]
        s = h["stats"]
        l = h["level_12"]
        print(f"{name:<16} "
              f"{s.get('health_base',0):>5.0f}→{l['health']:>5.0f} "
              f"{s.get('energy_base',0):>5.0f}→{l['energy']:>5.0f} "
              f"{s.get('weapon_base',0):>4.0f}→{l['weapon']:>4.0f} "
              f"{s.get('armor_base',0):>3.0f}→{l['armor']:>3.0f} "
              f"{s.get('shield_base',0):>3.0f}→{l['shield']:>3.0f} "
              f"{s.get('range',0):>4.1f} "
              f"{s.get('move_speed',0):>4.1f} "
              f"{l.get('atk_speed_pct',100):>5.1f}%")

    print()
    print(f"\nItem costs (top 20 by sell value):")
    print(f"{'Item':<30} {'Tier':>4} {'Recipe':>7} {'Sell':>7} {'~Total':>7}")
    print("-" * 60)
    for name in sorted(items.keys(), key=lambda n: items[n].get("sell_value", 0), reverse=True)[:20]:
        it = items[name]
        print(f"{name:<30} {it.get('tier',0):>4} {it.get('recipe_cost',0):>7} "
              f"{it.get('sell_value',0):>7} {it.get('total_cost_estimate',0):>7}")

    print(f"\nOutput: {output_path}")


if __name__ == "__main__":
    main()
