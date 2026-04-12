#!/bin/bash
# Build libvg_unlock.so for Android arm64-v8a
#
# Requires: Android NDK (set NDK_HOME or ANDROID_NDK_HOME)
#
# Usage: ./build.sh
#        ./build.sh clean
#        ./build.sh --parser-patches --profile-redirects

set -e

NDK="${NDK_HOME:-${ANDROID_NDK_HOME:-$HOME/Library/Android/sdk/ndk/26.1.10909125}}"
case "$(uname -s)" in
    Darwin)
        HOST_TAG="darwin-x86_64"
        ;;
    Linux)
        HOST_TAG="linux-x86_64"
        ;;
    *)
        echo "ERROR: unsupported host OS for build.sh"
        echo "Use build.ps1 on Windows."
        exit 1
        ;;
esac

TOOLCHAIN="$NDK/toolchains/llvm/prebuilt/$HOST_TAG"
CC="$TOOLCHAIN/bin/aarch64-linux-android21-clang"
STRIP="$TOOLCHAIN/bin/llvm-strip"
CFLAGS_EXTRA="${CFLAGS_EXTRA:-}"

SRC="vg_unlock_android.c"
OUT="libvg_unlock.so"
LOADER_SRC="vg_gamekindred_loader.c"
LOADER_ASM_SRC="vg_gamekindred_loader_trampolines.S"
LOADER_OUT="libvg_loader.so"

while [ $# -gt 0 ]; do
    case "$1" in
        clean)
            rm -f "$OUT" "$LOADER_OUT"
            echo "Cleaned."
            exit 0
            ;;
        --experimental-hooks)
            CFLAGS_EXTRA="$CFLAGS_EXTRA -DVG_ENABLE_EXPERIMENTAL_HOOKS=1"
            ;;
        --parser-patches)
            CFLAGS_EXTRA="$CFLAGS_EXTRA -DVG_ENABLE_PARSER_PATCHES=1"
            ;;
        --profile-redirects)
            CFLAGS_EXTRA="$CFLAGS_EXTRA -DVG_ENABLE_PROFILE_REDIRECTS=1"
            ;;
        --guest-bypass)
            CFLAGS_EXTRA="$CFLAGS_EXTRA -DVG_ENABLE_GUEST_BYPASS=1"
            ;;
        --no-visual-toast)
            LOADER_CFLAGS_EXTRA="$LOADER_CFLAGS_EXTRA -DVG_ENABLE_VISUAL_TOAST=0"
            ;;
        *)
            echo "ERROR: unknown argument: $1"
            exit 1
            ;;
    esac
    shift
done

if [ ! -f "$CC" ]; then
    echo "ERROR: NDK compiler not found at $CC"
    echo "Set NDK_HOME to your Android NDK path"
    exit 1
fi

build_shared_library() {
    local output="$1"
    local soname="$2"
    shift 2

    "$CC" -shared -fPIC -O2 -Wall "$@" \
        -o "$output" \
        -llog -ldl \
        -Wl,-soname,"$soname"

    "$STRIP" "$output"
}

echo "Building $OUT for arm64-v8a..."
build_shared_library "$OUT" libvg_unlock.so "$SRC" $CFLAGS_EXTRA

echo "Building $LOADER_OUT for arm64-v8a..."
build_shared_library "$LOADER_OUT" libGameKindred.so "$LOADER_SRC" "$LOADER_ASM_SRC" $LOADER_CFLAGS_EXTRA

echo "Built: $OUT ($(wc -c < "$OUT") bytes)"
echo "Built: $LOADER_OUT ($(wc -c < "$LOADER_OUT") bytes)"
echo ""
echo "Next steps:"
echo "  1. The default Android build leaves all patch groups OFF; enable them explicitly only for targeted testing"
echo "  2. The loader shim now shows a toast on launch by default so you can visually confirm injection; pass --no-visual-toast to suppress it"
echo "  3. Run patch_xapk.py to inject via the loader shim path; the legacy DT_NEEDED path is blocked unless you explicitly pass --allow-unsafe-dt-needed for comparison testing"
echo "  4. Re-sign the patched APK/XAPK if you did not pass --sign-debug"