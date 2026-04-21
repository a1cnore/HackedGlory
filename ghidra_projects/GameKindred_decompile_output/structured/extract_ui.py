#!/usr/bin/env python3
"""
extract_ui.py — Extract UI-related functions from Ghidra decompile output.

Uses dylib_seeds.json as ground truth, builds call graph, expands via
UI indicators, and extracts annotated functions into structured/ui/.
"""

import json
import os
import re
import sys
from collections import defaultdict
from pathlib import Path

SCRIPT_DIR = Path(__file__).parent
FUNCTIONS_DIR = SCRIPT_DIR / "functions"
UI_DIR = SCRIPT_DIR / "ui"
SEEDS_FILE = SCRIPT_DIR / "dylib_seeds.json"

# ── Function signature regex ──
# Matches: type [modifiers] FUN_xxx(...) or thunk_FUN_xxx(...)
# Types can be: void, long, uint, ulong, byte, int, char, bool, float, double,
# undefined, undefined1-8, code *, void *, long *, short, ushort, ulonglong, longlong, etc.
FUNC_SIG_RE = re.compile(
    r'^([\w\s\*]+?)\s+'               # return type (greedy but stops at func name)
    r'((?:thunk_)?FUN_[0-9a-fA-F]+)'  # function name
    r'\s*\(',                          # opening paren
    re.MULTILINE
)

# Matches FUN_xxx references in function bodies (for call graph)
FUNC_REF_RE = re.compile(r'(?:thunk_)?FUN_[0-9a-fA-F]+')

# UI string patterns
UI_STRING_PATTERNS = [
    'MENU_', 'PANEL_', 'POPUP_', 'DIALOG_', 'SCREEN_',
    'BUTTON_', 'TAB_', 'WIDGET_', 'UI::EVENT',
    'main_nav_', 'secondary_nav_', 'MAIN_MENU_',
]

# Visibility mask
VIS_MASK = '0xfffffffb'

# Known UI infrastructure functions (NOT including FUN_1004e0150 — too common,
# called by thousands of functions and would cause BFS explosion)
UI_INFRA = {
    'FUN_1001e6c4c',  # setTabVisible
    'FUN_1001fc9c4',  # register sidebar panel
    'FUN_1002afb68',  # tab registration
    'FUN_100220a38',  # popup creation
    'FUN_100221f98',  # full profile panel
}

# String localizer — used for tagging but NOT for BFS expansion threshold
STRING_LOCALIZER = 'FUN_1004e0150'

# Gate functions
CE_GATE = 'FUN_100131560'
GUEST_GATE = 'FUN_10014e20c'


def parse_functions(filepath):
    """Parse a .c file into individual function blocks.

    Returns list of dicts: {name, return_type, params, body, start_line, end_line}
    """
    with open(filepath, 'r') as f:
        content = f.read()

    lines = content.split('\n')
    functions = []

    # Find all function signatures with their line numbers
    sig_positions = []
    for i, line in enumerate(lines):
        # Skip forward declarations (single line like "undefined FUN_xxx;")
        if line.strip().endswith(';'):
            continue
        m = FUNC_SIG_RE.match(line)
        if m:
            # Verify this is a function definition (has { on next non-blank line)
            for j in range(i + 1, min(i + 4, len(lines))):
                if lines[j].strip() == '{':
                    sig_positions.append((i, m.group(1).strip(), m.group(2)))
                    break

    # Extract function bodies
    for idx, (sig_line, ret_type, func_name) in enumerate(sig_positions):
        # Find the start — look backward for comments/annotations
        start = sig_line
        for k in range(sig_line - 1, -1, -1):
            stripped = lines[k].strip()
            if stripped == '' or stripped.startswith('/*') or stripped.startswith('*') or stripped.startswith('//'):
                start = k
            else:
                break
        # Skip leading blank lines
        while start < sig_line and lines[start].strip() == '':
            start += 1

        # Find the end — next function's start or EOF
        if idx + 1 < len(sig_positions):
            # End is where next function's comment block starts
            next_start = sig_positions[idx + 1][0]
            end = next_start
            # Walk backward from next function to find end of current
            while end > sig_line and lines[end - 1].strip() == '':
                end -= 1
        else:
            end = len(lines)
            while end > sig_line and lines[end - 1].strip() == '':
                end -= 1

        body = '\n'.join(lines[sig_line:end])
        full_block = '\n'.join(lines[start:end])

        functions.append({
            'name': func_name,
            'return_type': ret_type,
            'body': body,
            'full_block': full_block,
            'start_line': start + 1,  # 1-indexed
            'end_line': end,
            'file': filepath.name,
        })

    return functions


def build_registry(functions_dir):
    """Parse all function files and build the master registry."""
    registry = {}  # func_name -> func_info
    file_functions = defaultdict(list)  # filename -> [func_names]

    c_files = sorted(functions_dir.glob('*.c'))
    total_parsed = 0

    for cfile in c_files:
        funcs = parse_functions(cfile)
        for f in funcs:
            registry[f['name']] = f
            file_functions[cfile.name].append(f['name'])
        total_parsed += len(funcs)

        # Validate against header comment
        with open(cfile) as fh:
            header = fh.readline()
        m = re.search(r'(\d+) functions', header)
        if m:
            expected = int(m.group(1))
            actual = len(funcs)
            if actual != expected:
                print(f"  WARNING: {cfile.name}: expected {expected} functions, parsed {actual}")

    print(f"Parsed {total_parsed} functions from {len(c_files)} files")
    return registry, file_functions


def build_call_graph(registry):
    """Build caller/callee adjacency lists from function bodies."""
    callees = defaultdict(set)  # func -> set of functions it calls
    callers = defaultdict(set)  # func -> set of functions that call it

    all_func_names = set(registry.keys())

    for func_name, info in registry.items():
        refs = set(FUNC_REF_RE.findall(info['body']))
        # Remove self-references
        refs.discard(func_name)
        # Only keep references to known functions
        # But also keep references to functions we don't have (they might be in classes/)
        callees[func_name] = refs
        for ref in refs:
            callers[ref].add(func_name)

    return callees, callers


def tag_ui_indicators(registry):
    """Tag each function with UI indicator counts."""
    for func_name, info in registry.items():
        body = info['body']

        # Count UI string patterns
        ui_string_count = sum(body.count(pat) for pat in UI_STRING_PATTERNS)

        # Count visibility mask
        vis_mask_count = body.count(VIS_MASK)

        # CE gate calls
        ce_gate_count = body.count(CE_GATE)

        # Guest gate calls
        guest_gate_count = body.count(GUEST_GATE)

        # UI infra calls
        ui_infra_count = sum(1 for fn in UI_INFRA if fn in body)

        total_score = ui_string_count + vis_mask_count + ce_gate_count + guest_gate_count + ui_infra_count

        info['ui_indicators'] = {
            'ui_strings': ui_string_count,
            'vis_mask': vis_mask_count,
            'ce_gate': ce_gate_count,
            'guest_gate': guest_gate_count,
            'ui_infra': ui_infra_count,
            'total': total_score,
        }


def load_seeds(seeds_file):
    """Load dylib seeds and return {func_name: component}."""
    with open(seeds_file) as f:
        data = json.load(f)

    seeds = {}
    seed_details = {}
    for func_name, info in data['seeds'].items():
        seeds[func_name] = info['component']
        seed_details[func_name] = info

    return seeds, seed_details, data


def expand_seeds(seeds, registry, callees_graph, callers_graph):
    """BFS expand from seed functions using UI indicators."""
    ui_functions = dict(seeds)  # func_name -> component

    # Phase 1: Add thunk pairs
    for func_name in list(ui_functions.keys()):
        thunk_name = f"thunk_{func_name}"
        base_name = func_name.replace("thunk_", "") if func_name.startswith("thunk_") else None

        if thunk_name in registry and thunk_name not in ui_functions:
            ui_functions[thunk_name] = ui_functions[func_name]
        if base_name and base_name in registry and base_name not in ui_functions:
            ui_functions[base_name] = ui_functions[func_name]

    # Phase 2: BFS expansion — immediate callers/callees with UI indicators
    # Use progressively tighter thresholds to prevent explosion:
    #   Iteration 1: require 2+ UI indicators (strong signal)
    #   Iteration 2: require 3+ UI indicators (very strong signal)
    #   Iteration 3+: require 4+ UI indicators
    # Also: only expand through callees (not callers) after iteration 1
    # to prevent pulling in every function that happens to call a UI function
    changed = True
    iterations = 0
    while changed and iterations < 3:
        changed = False
        iterations += 1
        new_additions = {}

        # Tighten threshold each iteration
        threshold = 2 if iterations == 1 else (3 if iterations == 2 else 4)
        # Only follow callers in first iteration (prevents explosion)
        follow_callers = iterations <= 1

        for func_name, component in list(ui_functions.items()):
            if func_name not in registry:
                continue

            # Check callees — functions this UI function calls
            for callee in callees_graph.get(func_name, set()):
                if callee in ui_functions or callee not in registry:
                    continue
                indicators = registry[callee]['ui_indicators']
                if indicators['total'] >= threshold:
                    new_additions[callee] = component

            # Check callers — functions that call this UI function
            # (only in first iteration to limit spread)
            if follow_callers:
                for caller in callers_graph.get(func_name, set()):
                    if caller in ui_functions or caller not in registry:
                        continue
                    indicators = registry[caller]['ui_indicators']
                    if indicators['total'] >= threshold:
                        new_additions[caller] = component

        if new_additions:
            changed = True
            for fn, comp in new_additions.items():
                # Add thunk pairs too
                ui_functions[fn] = comp
                thunk = f"thunk_{fn}"
                base = fn.replace("thunk_", "") if fn.startswith("thunk_") else None
                if thunk in registry:
                    ui_functions[thunk] = comp
                if base and base in registry:
                    ui_functions[base] = comp

        print(f"  Expansion iteration {iterations} (threshold={threshold}, callers={'yes' if follow_callers else 'no'}): "
              f"added {len(new_additions)} functions (total: {len(ui_functions)})")

    # Phase 3: UI-dense functions (3+ indicators) not yet included
    for func_name, info in registry.items():
        if func_name in ui_functions:
            continue
        if info['ui_indicators']['total'] >= 3:
            # Try to assign component based on string patterns
            component = classify_by_strings(info['body'])
            if component:
                ui_functions[func_name] = component
            else:
                # Assign based on primary caller component
                caller_components = set()
                for caller in callers_graph.get(func_name, set()):
                    if caller in ui_functions:
                        caller_components.add(ui_functions[caller])
                if len(caller_components) == 1:
                    ui_functions[func_name] = caller_components.pop()
                else:
                    ui_functions[func_name] = 'misc_ui'

    return ui_functions


def classify_by_strings(body):
    """Classify a function's component based on UI string patterns in its body."""
    component_scores = defaultdict(int)

    string_component_map = {
        'MENU_PROFILE': 'profile',
        'MENU_FRIENDS': 'social',
        'MENU_LEADERBOARDS': 'nav_bar',
        'MENU_PLAY': 'nav_bar',
        'MENU_MATCHING': 'nav_bar',
        'MENU_MARKET': 'market',
        'MENU_PARTY': 'main_menu',
        'MENU_SOCIAL': 'social',
        'MENU_BAG': 'bag',
        'MENU_HOME': 'main_menu',
        'MENU_HEROES': 'bag',
        'MENU_ACADEMY': 'academy',
        'MENU_CURRENCY': 'market',
        'MENU_GUILD': 'social',
        'MENU_SEASON': 'season',
        'MENU_TROPHY': 'trophies',
        'MENU_RANKED': 'progression',
        'MENU_SKILL': 'progression',
        'main_nav_home': 'main_menu',
        'main_nav_heroes': 'bag',
        'main_nav_market': 'market',
        'main_nav_social': 'social',
        'main_nav_party': 'main_menu',
        'secondary_nav_': 'nav_bar',
    }

    for pattern, component in string_component_map.items():
        count = body.count(pattern)
        if count > 0:
            component_scores[component] += count

    if not component_scores:
        return None

    return max(component_scores, key=component_scores.get)


def map_component_to_file(component, func_name):
    """Map a component name to a target file path under ui/."""
    component_file_map = {
        'nav_bar': 'nav_bar.c',
        'tab_system': 'tab_system.c',
        'sidebar': 'sidebar.c',
        'main_menu': 'main_menu.c',
        'profile': 'profile/profile_panel.c',
        'social': 'social/social_panel.c',
        'trophies': 'trophies/trophy_panel.c',
        'market': 'market/market_tabs.c',
        'bag': 'bag/bag_constructor.c',
        'season': 'season/season_panel.c',
        'academy': 'academy/academy_constructor.c',
        'progression': 'progression/progression_display.c',
        'gates': 'gates/ce_gate.c',
        'misc_ui': 'misc_ui.c',
    }
    return component_file_map.get(component, 'misc_ui.c')


def generate_annotation(func_name, info, component, seed_details, callees_graph, callers_graph):
    """Generate annotation comment for an extracted function."""
    indicators = info['ui_indicators']

    lines = [f" * {func_name}"]

    # Check if it's a seed
    if func_name in seed_details:
        sd = seed_details[func_name]
        lines.append(f" * {sd.get('desc', '')}")
        lines.append(f" * VA: 0x{func_name.replace('FUN_', '').replace('thunk_FUN_', '')} | Source: functions/{info['file']}:{info['start_line']}")
        if 'fptr_offset' in sd:
            lines.append(f" * Fptr: __DATA+{sd['fptr_offset']}")
        if 'layer' in sd:
            lines.append(f" * Dylib: Layer {sd['layer']}")
        if 'layout' in sd:
            layout_str = ', '.join(f"{k}={v}" for k, v in sd['layout'].items())
            lines.append(f" * Layout: {layout_str}")
        if 'notes' in sd:
            lines.append(f" * Notes: {sd['notes']}")
    else:
        lines.append(f" * VA: 0x{func_name.replace('FUN_', '').replace('thunk_FUN_', '')} | Source: functions/{info['file']}:{info['start_line']}")

    # Gate status
    gate_parts = []
    if indicators['ce_gate'] > 0:
        gate_parts.append(f"CE-gate: YES ({indicators['ce_gate']}x)")
    else:
        gate_parts.append("CE-gate: NO")
    if indicators['guest_gate'] > 0:
        gate_parts.append(f"Guest-gate: YES ({indicators['guest_gate']}x)")
    else:
        gate_parts.append("Guest-gate: NO")
    lines.append(f" * {' | '.join(gate_parts)}")

    # UI indicators summary
    if indicators['ui_strings'] > 0 or indicators['vis_mask'] > 0:
        parts = []
        if indicators['ui_strings'] > 0:
            parts.append(f"UI strings: {indicators['ui_strings']}")
        if indicators['vis_mask'] > 0:
            parts.append(f"Vis masks: {indicators['vis_mask']}")
        if indicators['ui_infra'] > 0:
            parts.append(f"UI infra calls: {indicators['ui_infra']}")
        lines.append(f" * Indicators: {', '.join(parts)}")

    # Callers/callees (abbreviated)
    callee_list = sorted(callees_graph.get(func_name, set()))[:8]
    caller_list = sorted(callers_graph.get(func_name, set()))[:8]
    if callee_list:
        callee_str = ', '.join(callee_list)
        if len(callees_graph.get(func_name, set())) > 8:
            callee_str += f" (+{len(callees_graph[func_name]) - 8} more)"
        lines.append(f" * Callees: {callee_str}")
    if caller_list:
        caller_str = ', '.join(caller_list)
        if len(callers_graph.get(func_name, set())) > 8:
            caller_str += f" (+{len(callers_graph[func_name]) - 8} more)"
        lines.append(f" * Callers: {caller_str}")

    return "/*\n" + "\n".join(lines) + "\n */\n"


def extract_to_ui(ui_functions, registry, seed_details, callees_graph, callers_graph):
    """Extract UI functions into structured/ui/ directory."""
    # Group functions by target file
    file_groups = defaultdict(list)
    for func_name, component in sorted(ui_functions.items()):
        if func_name not in registry:
            continue
        target_file = map_component_to_file(component, func_name)
        file_groups[target_file].append(func_name)

    # Create directories and write files
    os.makedirs(UI_DIR, exist_ok=True)

    total_extracted = 0
    total_lines = 0
    index_entries = []

    for target_file, func_names in sorted(file_groups.items()):
        target_path = UI_DIR / target_file
        os.makedirs(target_path.parent, exist_ok=True)

        # Sort by function address
        func_names.sort(key=lambda n: n.replace('thunk_', ''))

        component = ui_functions[func_names[0]]

        with open(target_path, 'w') as f:
            f.write(f"// ui/{target_file} — {len(func_names)} UI functions ({component})\n")
            f.write(f"// Extracted by extract_ui.py from structured/functions/\n")
            f.write(f'#include "GameKindred.h"\n')

            for func_name in func_names:
                info = registry[func_name]
                annotation = generate_annotation(
                    func_name, info, component, seed_details,
                    callees_graph, callers_graph
                )

                f.write(f"\n\n\n{annotation}{info['full_block']}\n")

                total_extracted += 1
                total_lines += info['end_line'] - info['start_line'] + 1

                # Index entry
                gate_str = ""
                if info['ui_indicators']['ce_gate'] > 0:
                    gate_str = " [CE-GATED]"
                if info['ui_indicators']['guest_gate'] > 0:
                    gate_str += " [GUEST-GATED]"
                is_seed = " *SEED*" if func_name in seed_details else ""
                index_entries.append(
                    f"| `{func_name}` | `{component}` | `ui/{target_file}` | "
                    f"`functions/{info['file']}:{info['start_line']}` | "
                    f"{info['ui_indicators']['total']}{gate_str}{is_seed} |"
                )

        print(f"  Wrote {target_path} ({len(func_names)} functions)")

    # Write index
    write_index(index_entries, total_extracted, total_lines, ui_functions, seed_details)

    # Write dylib cross-reference
    write_dylib_xref(seed_details, ui_functions, registry)

    return total_extracted, total_lines


def write_index(entries, total_extracted, total_lines, ui_functions, seed_details):
    """Write _index.md with all extracted functions."""
    with open(UI_DIR / '_index.md', 'w') as f:
        f.write("# UI Function Index\n\n")
        f.write(f"**Total extracted**: {total_extracted} functions, ~{total_lines} lines\n")
        f.write(f"**Seed functions**: {len([k for k in ui_functions if k in seed_details])}\n")
        f.write(f"**Expanded functions**: {total_extracted - len([k for k in ui_functions if k in seed_details])}\n\n")

        # Component summary
        component_counts = defaultdict(int)
        for fn, comp in ui_functions.items():
            component_counts[comp] += 1
        f.write("## Components\n\n")
        for comp, count in sorted(component_counts.items(), key=lambda x: -x[1]):
            f.write(f"- **{comp}**: {count} functions\n")
        f.write("\n")

        f.write("## All Functions\n\n")
        f.write("| Function | Component | UI File | Source | Score |\n")
        f.write("|----------|-----------|---------|--------|-------|\n")
        for entry in entries:
            f.write(entry + "\n")


def write_dylib_xref(seed_details, ui_functions, registry):
    """Write _dylib_xref.md cross-referencing dylib patches."""
    with open(UI_DIR / '_dylib_xref.md', 'w') as f:
        f.write("# Dylib Patch Cross-Reference\n\n")
        f.write("Cross-reference between vg_unlock.m patches and extracted UI functions.\n\n")

        # Group by layer
        by_layer = defaultdict(list)
        for func_name, info in seed_details.items():
            layer = info.get('layer', 0)
            by_layer[layer].append((func_name, info))

        layer_names = {
            1: "Constants Parser Replacements",
            2: "Nav Bar Refresh Hook",
            3: "setTabVisible Hook (Sidebar Tab Hiding)",
            4: "Trophy Panel Visibility",
            5: "Profile Panel Redirects",
            6: "Sidebar Panel Registration",
            7: "Guest Gate Bypass",
            8: "CE Gate Caller Hooks",
            9: "Trophy Data Population & Ranked KV",
        }

        for layer in sorted(by_layer.keys()):
            name = layer_names.get(layer, f"Layer {layer}")
            f.write(f"## Layer {layer}: {name}\n\n")

            for func_name, info in sorted(by_layer[layer]):
                target = map_component_to_file(ui_functions.get(func_name, 'unknown'), func_name)
                status = "EXTRACTED" if func_name in registry else "NOT IN REGISTRY"
                f.write(f"### `{func_name}`\n")
                f.write(f"- **Description**: {info.get('desc', 'N/A')}\n")
                f.write(f"- **UI File**: `ui/{target}`\n")
                f.write(f"- **Status**: {status}\n")
                if 'fptr_offset' in info:
                    f.write(f"- **Fptr**: `__DATA+{info['fptr_offset']}`\n")
                if 'layout' in info:
                    f.write(f"- **Object Layout**:\n")
                    for offset, desc in info['layout'].items():
                        f.write(f"  - `{offset}`: {desc}\n")
                if 'notes' in info:
                    f.write(f"- **Notes**: {info['notes']}\n")
                f.write("\n")


def generate_stubs(ui_functions, registry):
    """Generate stub comments for source files where functions were extracted."""
    # Group by source file
    by_file = defaultdict(list)
    for func_name in ui_functions:
        if func_name in registry:
            by_file[registry[func_name]['file']].append(func_name)

    stubs_dir = UI_DIR / '_stubs'
    os.makedirs(stubs_dir, exist_ok=True)

    for filename, func_names in sorted(by_file.items()):
        stub_path = stubs_dir / f"{filename}.stubs"
        with open(stub_path, 'w') as f:
            f.write(f"# Stub replacements for {filename}\n")
            f.write(f"# {len(func_names)} functions extracted to ui/\n\n")
            for fn in sorted(func_names, key=lambda n: registry[n]['start_line']):
                info = registry[fn]
                target = map_component_to_file(ui_functions[fn], fn)
                f.write(f"Line {info['start_line']}-{info['end_line']}: "
                       f"{fn} -> ui/{target}\n")

    print(f"  Wrote stub references to {stubs_dir} ({len(by_file)} files)")


def verify(ui_functions, registry, seed_details, callees_graph):
    """Run verification checks."""
    print("\n=== Verification ===\n")
    errors = 0
    warnings = 0

    # Check 1: All seeds present
    for func_name in seed_details:
        if func_name not in ui_functions:
            # Check if it's in registry at all
            if func_name in registry:
                print(f"  ERROR: Seed {func_name} not in UI set despite being in registry")
                errors += 1
            else:
                # Try thunk variant
                thunk = f"thunk_{func_name}"
                if thunk in ui_functions:
                    pass  # OK, thunk is included
                else:
                    print(f"  WARNING: Seed {func_name} not found in any function file")
                    warnings += 1

    # Check 2: No function in UI set that's not in registry
    orphans = [fn for fn in ui_functions if fn not in registry]
    if orphans:
        print(f"  WARNING: {len(orphans)} UI functions not in registry (may be in classes/)")
        for fn in orphans[:10]:
            print(f"    {fn}")
        warnings += len(orphans)

    # Check 3: Gate consistency
    for func_name in ui_functions:
        if func_name not in registry:
            continue
        info = registry[func_name]
        if info['ui_indicators']['ce_gate'] > 0:
            if CE_GATE not in info['body']:
                print(f"  ERROR: {func_name} tagged CE-gate but {CE_GATE} not in body")
                errors += 1

    # Check 4: Unique per file
    seen = set()
    for func_name in ui_functions:
        if func_name in seen:
            print(f"  ERROR: Duplicate function {func_name}")
            errors += 1
        seen.add(func_name)

    print(f"\nVerification complete: {errors} errors, {warnings} warnings")
    return errors == 0


def print_stats(registry, ui_functions, seed_details):
    """Print summary statistics."""
    print("\n=== Statistics ===\n")

    # Component breakdown
    component_counts = defaultdict(int)
    component_lines = defaultdict(int)
    for fn, comp in ui_functions.items():
        component_counts[comp] += 1
        if fn in registry:
            component_lines[comp] += registry[fn]['end_line'] - registry[fn]['start_line'] + 1

    print(f"{'Component':<20} {'Functions':>10} {'Lines':>10} {'Seeds':>8}")
    print("-" * 52)
    total_funcs = 0
    total_lines = 0
    total_seeds = 0
    for comp in sorted(component_counts.keys()):
        seed_count = sum(1 for fn in ui_functions if ui_functions[fn] == comp and fn in seed_details)
        print(f"{comp:<20} {component_counts[comp]:>10} {component_lines[comp]:>10} {seed_count:>8}")
        total_funcs += component_counts[comp]
        total_lines += component_lines[comp]
        total_seeds += seed_count
    print("-" * 52)
    print(f"{'TOTAL':<20} {total_funcs:>10} {total_lines:>10} {total_seeds:>8}")

    # Top gated functions
    print("\n=== Top CE-Gated UI Functions ===\n")
    gated = [(fn, registry[fn]['ui_indicators']['ce_gate'])
             for fn in ui_functions if fn in registry and registry[fn]['ui_indicators']['ce_gate'] > 0]
    gated.sort(key=lambda x: -x[1])
    for fn, count in gated[:20]:
        print(f"  {fn}: {count} gate calls (component: {ui_functions[fn]})")


def main():
    print("=" * 60)
    print("UI Function Extraction — GameKindred Decompile")
    print("=" * 60)

    # Step 1: Load seeds
    print("\n[1/7] Loading dylib seeds...")
    seeds, seed_details, seeds_data = load_seeds(SEEDS_FILE)
    print(f"  Loaded {len(seeds)} seed functions")

    # Step 2: Parse all function files
    print("\n[2/7] Parsing function files...")
    registry, file_functions = build_registry(FUNCTIONS_DIR)

    # Step 3: Build call graph
    print("\n[3/7] Building call graph...")
    callees_graph, callers_graph = build_call_graph(registry)
    total_edges = sum(len(v) for v in callees_graph.values())
    print(f"  Built call graph: {len(callees_graph)} nodes, {total_edges} edges")

    # Step 4: Tag UI indicators
    print("\n[4/7] Tagging UI indicators...")
    tag_ui_indicators(registry)
    ui_dense = sum(1 for fn in registry if registry[fn]['ui_indicators']['total'] >= 3)
    print(f"  Functions with 3+ UI indicators: {ui_dense}")

    # Step 5: Expand seeds
    print("\n[5/7] Expanding from seeds...")
    ui_functions = expand_seeds(seeds, registry, callees_graph, callers_graph)
    print(f"  Total UI functions identified: {len(ui_functions)}")

    # Step 6: Extract
    print("\n[6/7] Extracting to structured/ui/...")
    total_extracted, total_lines = extract_to_ui(
        ui_functions, registry, seed_details, callees_graph, callers_graph
    )
    generate_stubs(ui_functions, registry)
    print(f"  Extracted {total_extracted} functions (~{total_lines} lines)")

    # Step 7: Verify
    print("\n[7/7] Verifying...")
    verify(ui_functions, registry, seed_details, callees_graph)

    # Stats
    print_stats(registry, ui_functions, seed_details)

    print("\nDone!")


if __name__ == '__main__':
    main()
