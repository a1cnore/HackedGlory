#!/bin/zsh
set -euo pipefail

SCRIPT_DIR="${0:a:h}"
cd "$SCRIPT_DIR"

echo "[*] Building vg_unlock.dylib for arm64 iOS..."

xcrun -sdk iphoneos clang -arch arm64 \
    -shared \
    -o vg_unlock.dylib \
    vg_unlock.m \
    -install_name @executable_path/vg_unlock.dylib \
    -framework Foundation \
    -Wno-deprecated-declarations

echo "[*] Ad-hoc signing..."
codesign -f -s - vg_unlock.dylib

echo "[+] Built: $SCRIPT_DIR/vg_unlock.dylib"
file vg_unlock.dylib
codesign -dv vg_unlock.dylib 2>&1 | head -5
