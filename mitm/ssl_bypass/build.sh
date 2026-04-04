#!/bin/zsh
set -euo pipefail

SCRIPT_DIR="${0:a:h}"
cd "$SCRIPT_DIR"

echo "[*] Building ssl_bypass.dylib for arm64 iOS..."

xcrun -sdk iphoneos clang -arch arm64 \
    -shared \
    -framework Foundation \
    -framework Security \
    -o ssl_bypass.dylib \
    ssl_bypass.m fishhook.c \
    -install_name @executable_path/ssl_bypass.dylib \
    -Wno-deprecated-declarations

echo "[+] Built: $SCRIPT_DIR/ssl_bypass.dylib"
