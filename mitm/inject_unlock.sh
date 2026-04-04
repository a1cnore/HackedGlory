#!/bin/zsh
set -euo pipefail

SCRIPT_DIR="${0:a:h}"
VPHONE_ROOT="${SCRIPT_DIR:h:h}"
GAME_BINARY="$VPHONE_ROOT/vgf/Payload/GameKindred.app/GameKindred"
INSERT_DYLIB="$VPHONE_ROOT/vphone-cli/.tools/bin/insert_dylib"

step() { echo "\033[32m[+]\033[0m $1" }
warn() { echo "\033[33m[!]\033[0m $1" }

# 1. Build
step "Building vg_unlock.dylib..."
"$SCRIPT_DIR/vg_unlock/build.sh"

DYLIB="$SCRIPT_DIR/vg_unlock/vg_unlock.dylib"
if [[ ! -f "$DYLIB" ]]; then
    warn "Build failed"
    exit 1
fi

# 2. Copy into app bundle
cp "$DYLIB" "$(dirname "$GAME_BINARY")/vg_unlock.dylib"
step "Copied vg_unlock.dylib into app bundle"

# 3. Inject load command if not already present
if otool -L "$GAME_BINARY" 2>/dev/null | grep -q vg_unlock; then
    step "vg_unlock.dylib already injected"
else
    if [[ ! -x "$INSERT_DYLIB" ]]; then
        warn "insert_dylib not found at: $INSERT_DYLIB"
        warn "Trying system PATH..."
        INSERT_DYLIB="insert_dylib"
    fi
    step "Injecting vg_unlock.dylib into GameKindred..."
    "$INSERT_DYLIB" --weak --inplace --all-yes @executable_path/vg_unlock.dylib "$GAME_BINARY"
    step "Injection complete"
fi

echo ""
step "Done. Re-package the IPA and install on the VM."
