#!/usr/bin/env python3
"""
Split monolithic Ghidra CppExporter output into structured per-class/namespace files.

Handles brace counting correctly by stripping string/char literals before counting.

Android variant — processes libGameKindred.c/.h from the Android arm64 decompile.
"""

import os
import re
import sys
import shutil
from collections import defaultdict

INPUT_C = "/Users/marvinkleinpass/ghidra_projects/GameKindred_android_decompile_output/libGameKindred.c"
INPUT_H = "/Users/marvinkleinpass/ghidra_projects/GameKindred_android_decompile_output/libGameKindred.h"
OUTPUT_DIR = "/Users/marvinkleinpass/ghidra_projects/GameKindred_android_decompile_output/structured"

# Regex to strip string and char literals for accurate brace counting
STR_RE = re.compile(r'"(?:[^"\\]|\\.)*"')
CHR_RE = re.compile(r"'(?:[^'\\]|\\.)*'")


def strip_literals(line):
    """Remove string and char literals so braces inside them aren't counted."""
    line = STR_RE.sub('', line)
    line = CHR_RE.sub('', line)
    return line


def ensure_dir(path):
    os.makedirs(path, exist_ok=True)


def extract_func_name(sig):
    m = re.search(r'([\w:~]+)\s*\(', sig)
    return m.group(1) if m else "unknown"


def classify(name):
    # C++ namespaced
    if '::' in name:
        parts = name.rsplit('::', 1)
        ns = parts[0].replace('::', '/')
        return f"classes/{ns}"
    # FUN_xxx / thunk_FUN_xxx by address prefix
    m = re.match(r'(?:thunk_)?FUN_([0-9a-f]+)', name)
    if m:
        addr = m.group(1)
        prefix = addr[:5] if len(addr) >= 5 else addr
        return f"functions/{prefix}"
    return "functions/named"


def main():
    print("=" * 60)
    print("libGameKindred (Android) Decompilation Splitter")
    print("=" * 60)

    size_mb = os.path.getsize(INPUT_C) / (1024 * 1024)
    print(f"Input: libGameKindred.c ({size_mb:.1f} MB)")

    if os.path.exists(OUTPUT_DIR):
        shutil.rmtree(OUTPUT_DIR)

    # Copy header
    print("\n--- Headers ---")
    ensure_dir(os.path.join(OUTPUT_DIR, "headers"))
    shutil.copy2(INPUT_H, os.path.join(OUTPUT_DIR, "headers", "libGameKindred.h"))
    print(f"  headers/libGameKindred.h — {os.path.getsize(INPUT_H) / (1024*1024):.1f} MB")
    os.symlink("headers/libGameKindred.h", os.path.join(OUTPUT_DIR, "libGameKindred.h"))

    # Parse
    print("\n--- Parsing (with string-aware brace counting) ---")

    groups = defaultdict(list)
    preamble = []
    func_buf = []
    depth = 0
    in_func = False
    func_count = 0

    with open(INPUT_C, 'r', errors='replace') as f:
        for line in f:
            cleaned = strip_literals(line)
            opens = cleaned.count('{')
            closes = cleaned.count('}')

            if not in_func:
                if opens > 0 and depth == 0:
                    # Entering a function body
                    in_func = True
                    func_buf.append(line)
                    depth = opens - closes
                    if depth <= 0:
                        # Single-line function
                        text = ''.join(func_buf)
                        name = "unknown"
                        for fl in func_buf:
                            if '(' in fl and not fl.strip().startswith('//'):
                                name = extract_func_name(fl.strip())
                                if name != "unknown":
                                    break
                        groups[classify(name)].append((name, text))
                        func_buf = []
                        depth = 0
                        in_func = False
                        func_count += 1
                else:
                    # Could be signature lines, comments, or globals
                    func_buf.append(line)
                    # If we accumulate too many lines without hitting a {,
                    # flush older lines as preamble/interstitial
                    if func_count == 0 and len(func_buf) > 100:
                        preamble.extend(func_buf[:-10])
                        func_buf = func_buf[-10:]
            else:
                func_buf.append(line)
                depth += opens - closes
                if depth <= 0:
                    # Function complete
                    text = ''.join(func_buf)
                    name = "unknown"
                    for fl in func_buf:
                        fl_s = fl.strip()
                        if '(' in fl_s and not fl_s.startswith('//') and not fl_s.startswith('{') \
                                and not fl_s.startswith('*') and not fl_s.startswith('('):
                            candidate = extract_func_name(fl_s)
                            if candidate != "unknown" and not candidate.startswith('('):
                                name = candidate
                                break
                    groups[classify(name)].append((name, text))
                    func_buf = []
                    depth = 0
                    in_func = False
                    func_count += 1
                    if func_count % 50000 == 0:
                        print(f"  ... {func_count} functions")

    # Any remaining buffer is trailing content
    if func_buf and func_count == 0:
        preamble.extend(func_buf)

    print(f"  Total functions: {func_count}")
    print(f"  Categories: {len(groups)}")

    # Write globals
    ensure_dir(OUTPUT_DIR)
    globals_path = os.path.join(OUTPUT_DIR, "globals.c")
    with open(globals_path, 'w') as f:
        f.write('#include "libGameKindred.h"\n\n')
        f.write(''.join(preamble))
    print(f"  globals.c — {os.path.getsize(globals_path) / 1024:.0f} KB")

    # Write function files
    print("\n--- Writing files ---")
    class_count = 0
    func_file_count = 0

    for category in sorted(groups.keys()):
        funcs = groups[category]
        filepath = os.path.join(OUTPUT_DIR, category + ".c")
        ensure_dir(os.path.dirname(filepath))

        with open(filepath, 'w') as f:
            f.write(f'// {category} — {len(funcs)} functions\n')
            f.write('#include "libGameKindred.h"\n\n')
            for name, body in funcs:
                f.write(body)
                f.write("\n")

        if category.startswith("classes/"):
            class_count += 1
        else:
            func_file_count += 1

    print(f"  Class/namespace files: {class_count}")
    print(f"  Function group files: {func_file_count}")

    # Top classes
    print("\n--- Top classes/namespaces ---")
    class_groups = {k: v for k, v in groups.items() if k.startswith("classes/")}
    for cat in sorted(class_groups.keys(), key=lambda k: -len(class_groups[k]))[:30]:
        funcs = class_groups[cat]
        size_kb = sum(len(b) for _, b in funcs) / 1024
        print(f"  {cat}.c — {len(funcs)} functions ({size_kb:.0f} KB)")

    # Top function groups
    print("\n--- Top function groups by size ---")
    func_groups = {k: v for k, v in groups.items() if not k.startswith("classes/")}
    for cat in sorted(func_groups.keys(), key=lambda k: -sum(len(b) for _, b in func_groups[k]))[:15]:
        funcs = func_groups[cat]
        size_kb = sum(len(b) for _, b in funcs) / 1024
        print(f"  {cat}.c — {len(funcs)} functions ({size_kb:.0f} KB)")

    # Summary
    print("\n--- Summary ---")
    total_size = 0
    file_count = 0
    for root, dirs, files in os.walk(OUTPUT_DIR):
        for fn in files:
            total_size += os.path.getsize(os.path.join(root, fn))
            file_count += 1
    print(f"  Output files: {file_count}")
    print(f"  Total size: {total_size / (1024*1024):.1f} MB")
    print(f"  Location: {OUTPUT_DIR}/")
    print("\nDone!")


if __name__ == "__main__":
    main()
