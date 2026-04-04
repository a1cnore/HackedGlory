#!/bin/zsh
set -euo pipefail

SCRIPT_DIR="${0:a:h}"
VPHONE_ROOT="${SCRIPT_DIR:h:h}"
GAME_BINARY="$VPHONE_ROOT/vgf/Payload/GameKindred.app/GameKindred"

# MARK: - Colors

C_RESET="\033[0m"
C_BOLD="\033[1m"
C_GREEN="\033[32m"
C_YELLOW="\033[33m"
C_DIM="\033[2m"

step() { echo "${C_GREEN}[+]${C_RESET} $1" }
warn() { echo "${C_YELLOW}[!]${C_RESET} $1" }
info() { echo "${C_DIM}[*]${C_RESET} $1" }

# MARK: - 1. mitmproxy

if command -v mitmdump &>/dev/null; then
    step "mitmproxy already installed: $(mitmdump --version 2>&1 | head -1)"
else
    step "Installing mitmproxy via brew..."
    brew install mitmproxy
fi

# MARK: - 2. CA cert

CA_CERT="$HOME/.mitmproxy/mitmproxy-ca-cert.pem"
if [[ -f "$CA_CERT" ]]; then
    step "CA cert exists: $CA_CERT"
else
    step "Generating mitmproxy CA cert..."
    mitmdump --set block_global=false &
    MITM_PID=$!
    sleep 2
    kill $MITM_PID 2>/dev/null || true
    wait $MITM_PID 2>/dev/null || true
    if [[ -f "$CA_CERT" ]]; then
        step "CA cert generated: $CA_CERT"
    else
        warn "CA cert generation failed — run mitmdump manually once"
    fi
fi

# MARK: - 3. SSL bypass dylib

step "Building ssl_bypass.dylib..."
"$SCRIPT_DIR/ssl_bypass/build.sh"
DYLIB="$SCRIPT_DIR/ssl_bypass/ssl_bypass.dylib"

if [[ ! -f "$DYLIB" ]]; then
    warn "ssl_bypass.dylib build failed"
    exit 1
fi

# MARK: - 4. Inject dylib into GameKindred

if [[ ! -f "$GAME_BINARY" ]]; then
    warn "GameKindred binary not found at: $GAME_BINARY"
    warn "Extract the IPA first: unzip Vainglory.ipa -d vgf/"
    exit 1
fi

# Check if already injected
if otool -L "$GAME_BINARY" 2>/dev/null | grep -q ssl_bypass; then
    step "ssl_bypass.dylib already injected into GameKindred"
else
    # Find insert_dylib
    INSERT_DYLIB=""
    if command -v insert_dylib &>/dev/null; then
        INSERT_DYLIB="insert_dylib"
    elif [[ -x "$VPHONE_ROOT/vphone-cli/.tools/bin/insert_dylib" ]]; then
        INSERT_DYLIB="$VPHONE_ROOT/vphone-cli/.tools/bin/insert_dylib"
    fi

    if [[ -z "$INSERT_DYLIB" ]]; then
        warn "insert_dylib not found. Run: cd vphone-cli && make setup_tools"
        exit 1
    fi

    step "Injecting ssl_bypass.dylib into GameKindred..."
    "$INSERT_DYLIB" --weak --inplace --all-yes @rpath/ssl_bypass.dylib "$GAME_BINARY"
    step "Injection complete"
fi

# Copy dylib into app bundle
cp "$DYLIB" "$(dirname "$GAME_BINARY")/ssl_bypass.dylib"
step "Copied ssl_bypass.dylib into app bundle"

# MARK: - 5. pfctl anchor

ANCHOR_FILE="/etc/pf.anchors/vg_mitm"
BRIDGE_IF="bridge100"

# Detect bridge interface
if ifconfig "$BRIDGE_IF" &>/dev/null; then
    GATEWAY_IP=$(ifconfig "$BRIDGE_IF" 2>/dev/null | awk '/inet / { print $2 }')
    step "Bridge interface: $BRIDGE_IF (gateway: ${GATEWAY_IP:-unknown})"
else
    warn "Bridge interface $BRIDGE_IF not found — is the VM running?"
    warn "pfctl rules will use $BRIDGE_IF — adjust if your interface differs"
    GATEWAY_IP="192.168.64.1"
fi

step "Installing pfctl anchor at $ANCHOR_FILE..."
if sudo tee "$ANCHOR_FILE" > /dev/null 2>&1 <<EOF
rdr pass on $BRIDGE_IF proto tcp from any to any port 443 -> 127.0.0.1 port 8080
rdr pass on $BRIDGE_IF proto tcp from any to any port 80 -> 127.0.0.1 port 8080
EOF
then
    step "pfctl anchor installed"
else
    warn "Could not write pfctl anchor (sudo required). Run manually:"
    echo "  sudo tee /etc/pf.anchors/vg_mitm > /dev/null <<'RULES'"
    echo "  rdr pass on $BRIDGE_IF proto tcp from any to any port 443 -> 127.0.0.1 port 8080"
    echo "  rdr pass on $BRIDGE_IF proto tcp from any to any port 80 -> 127.0.0.1 port 8080"
    echo "  RULES"
fi

# MARK: - Done

echo ""
echo "${C_BOLD}Setup complete.${C_RESET} Manual steps on the VM:"
echo ""
echo "  1. Re-install the patched IPA via vphone Install menu"
echo "     (the GameKindred binary now includes ssl_bypass.dylib)"
echo ""
echo "  2. Push the mitmproxy CA cert to the VM:"
echo "     ${C_DIM}$CA_CERT${C_RESET}"
echo "     Use the vphone file browser to upload it"
echo ""
echo "  3. On the VM: Settings > General > About > Certificate Trust Settings"
echo "     Enable full trust for the mitmproxy CA"
echo ""
echo "  4. Run ${C_BOLD}./run.sh${C_RESET} to start the transparent proxy"
echo ""
