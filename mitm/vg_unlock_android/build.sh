#!/bin/bash
# Build libvg_unlock.so for Android arm64-v8a
#
# Requires: Android NDK (set NDK_HOME or ANDROID_NDK_HOME)
#
# Usage: ./build.sh
#        ./build.sh clean

set -e

NDK="${NDK_HOME:-${ANDROID_NDK_HOME:-$HOME/Library/Android/sdk/ndk/26.1.10909125}}"
TOOLCHAIN="$NDK/toolchains/llvm/prebuilt/darwin-x86_64"
CC="$TOOLCHAIN/bin/aarch64-linux-android21-clang"
STRIP="$TOOLCHAIN/bin/llvm-strip"

SRC="vg_unlock_android.c"
OUT="libvg_unlock.so"

if [ "$1" = "clean" ]; then
    rm -f "$OUT"
    echo "Cleaned."
    exit 0
fi

if [ ! -f "$CC" ]; then
    echo "ERROR: NDK compiler not found at $CC"
    echo "Set NDK_HOME to your Android NDK path"
    exit 1
fi

echo "Building $OUT for arm64-v8a..."
"$CC" -shared -fPIC -O2 -Wall \
    -o "$OUT" "$SRC" \
    -llog \
    -Wl,-soname,libvg_unlock.so

"$STRIP" "$OUT"

echo "Built: $OUT ($(wc -c < "$OUT") bytes)"
echo ""
echo "Next steps:"
echo "  1. Fill in TODO_OFFSET values from Ghidra RE"
echo "  2. Copy $OUT into APK lib/arm64-v8a/"
echo "  3. Add System.loadLibrary(\"vg_unlock\") to smali"
echo "  4. Rebuild + re-sign APK"
