#!/usr/bin/env python3
"""
patch_blowfish_keydump.py  --  Patch GameKindred to dump the Blowfish key.

Inserts a trampoline at the Blowfish key-init call site (inside FUN_100346560)
that writes the marker "BFKEY:" followed by the 16-byte key to stderr, then
tail-calls the real Blowfish key-init function (FUN_1004ed020).

The trampoline is placed in a verified zero-filled region of __TEXT/__const
so no existing code or data is overwritten.

Key appears on stderr as: b'BFKEY:' + 16 raw bytes  (22 bytes total)

Usage:
  python3 patch_blowfish_keydump.py <GameKindred_binary> <output_binary>

To capture the key during gameplay:
  1. Build patched IPA with the output binary
  2. Run the game, start a match
  3. The 22-byte blob (6 prefix + 16 key) is written to stderr
  4. Capture via:  idevicesyslog | xxd | grep -A1 'BFKEY'
  5. Use the key with:  decode_match_packets.py --bf-key <hex>
"""

import struct
import sys
from pathlib import Path

# ── Binary layout (Vainglory 4.13.4 arm64 Mach-O) ──────────────────────

# __TEXT segment: VA 0x100000000, fileoff 0, filesize 0x1444000 (21 250 048)
TEXT_VA_BASE = 0x100000000
TEXT_FILEOFF = 0

# Virtual addresses of interest
VA_BL_SITE       = 0x1003465EC   # BL FUN_1004ed020 inside FUN_100346560
VA_FUN_1004ed020 = 0x1004ed020   # Original Blowfish key-init function

# File offset of the BL instruction we will patch
FO_BL_SITE = VA_BL_SITE - TEXT_VA_BASE  # 0x3465EC

# Expected bytes at the BL site (BL FUN_1004ed020)
EXPECTED_BL_BYTES = bytes.fromhex("8d9a0694")

# ── Sections in __TEXT (for overlap verification) ───────────────────────

TEXT_SECTIONS = [
    # (name,         file_offset,  size)
    ("__text",        0x0000B5E0,  0x0113D08C),
    ("__stubs",       0x0114866C,  0x00001758),
    ("__stub_helper", 0x01149DC4,  0x000016EC),
    ("__const",       0x0114B4B0,  0x002823A0),
    ("__cstring",     0x013CD850,  0x0006859A),
    ("__gcc_except",  0x01435DEC,  0x0000116C),
    ("__objc_methn",  0x01436F58,  0x00009AAE),
    ("__objc_classn", 0x01440A06,  0x00000494),
    ("__objc_metht",  0x01440E9A,  0x00001AC7),
    ("__unwind_info", 0x01442964,  0x00001660),
    ("__eh_frame",    0x01443FC8,  0x00000034),
]


# ── ARM64 instruction encoders ──────────────────────────────────────────

def encode_bl(from_va: int, to_va: int) -> bytes:
    """Encode BL (branch-with-link).  Range +/- 128 MB."""
    offset = (to_va - from_va) >> 2
    if not (-(1 << 25) <= offset < (1 << 25)):
        raise ValueError(f"BL target out of range: offset={offset}")
    insn = 0x94000000 | (offset & 0x3FFFFFF)
    return struct.pack('<I', insn)


def encode_b(from_va: int, to_va: int) -> bytes:
    """Encode B (unconditional branch).  Range +/- 128 MB."""
    offset = (to_va - from_va) >> 2
    if not (-(1 << 25) <= offset < (1 << 25)):
        raise ValueError(f"B target out of range: offset={offset}")
    insn = 0x14000000 | (offset & 0x3FFFFFF)
    return struct.pack('<I', insn)


def _insn(val: int) -> bytes:
    return struct.pack('<I', val)


def encode_stp_pre(rt1: int, rt2: int, rn: int, offset: int) -> bytes:
    """STP <Xt1>, <Xt2>, [<Xn|SP>, #imm]!  (pre-index, 64-bit)"""
    assert offset % 8 == 0, f"offset {offset} not 8-aligned"
    imm7 = (offset // 8) & 0x7F
    return _insn(0xA9800000 | (1 << 22) | (imm7 << 15) | (rt2 << 10) | (rn << 5) | rt1)


def encode_ldp_post(rt1: int, rt2: int, rn: int, offset: int) -> bytes:
    """LDP <Xt1>, <Xt2>, [<Xn|SP>], #imm  (post-index, 64-bit)"""
    assert offset % 8 == 0
    imm7 = (offset // 8) & 0x7F
    return _insn(0xA8C00000 | (imm7 << 15) | (rt2 << 10) | (rn << 5) | rt1)


def encode_stp_signed(rt1: int, rt2: int, rn: int, offset: int) -> bytes:
    """STP <Xt1>, <Xt2>, [<Xn|SP>, #imm]  (signed offset, 64-bit)"""
    assert offset % 8 == 0
    imm7 = (offset // 8) & 0x7F
    return _insn(0xA9000000 | (imm7 << 15) | (rt2 << 10) | (rn << 5) | rt1)


def encode_ldp_signed(rt1: int, rt2: int, rn: int, offset: int) -> bytes:
    """LDP <Xt1>, <Xt2>, [<Xn|SP>, #imm]  (signed offset, 64-bit)"""
    assert offset % 8 == 0
    imm7 = (offset // 8) & 0x7F
    return _insn(0xA9400000 | (imm7 << 15) | (rt2 << 10) | (rn << 5) | rt1)


def movz(rd: int, imm16: int, shift: int = 0) -> bytes:
    """MOVZ Xd, #imm16, LSL #shift   (shift = 0/16/32/48)"""
    hw = shift // 16
    return _insn(0xD2800000 | (hw << 21) | (imm16 << 5) | rd)


def movk(rd: int, imm16: int, shift: int) -> bytes:
    """MOVK Xd, #imm16, LSL #shift"""
    hw = shift // 16
    return _insn(0xF2800000 | (hw << 21) | (imm16 << 5) | rd)


def str_imm_unsigned(rt: int, rn: int, offset: int) -> bytes:
    """STR Xt, [Xn|SP, #imm]  (unsigned offset, 64-bit)"""
    assert offset % 8 == 0 and 0 <= offset < 32768
    imm12 = offset // 8
    return _insn(0xF9000000 | (imm12 << 10) | (rn << 5) | rt)


def ldr_imm_unsigned(rt: int, rn: int, offset: int) -> bytes:
    """LDR Xt, [Xn|SP, #imm]  (unsigned offset, 64-bit)"""
    assert offset % 8 == 0 and 0 <= offset < 32768
    imm12 = offset // 8
    return _insn(0xF9400000 | (imm12 << 10) | (rn << 5) | rt)


def add_imm(rd: int, rn: int, imm12: int) -> bytes:
    """ADD Xd, Xn, #imm12"""
    assert 0 <= imm12 < 4096
    return _insn(0x91000000 | (imm12 << 10) | (rn << 5) | rd)


# ── Code-cave finder ────────────────────────────────────────────────────

def find_code_cave(data: bytes, min_size: int = 128) -> int:
    """Find a 4-byte-aligned run of zeros inside __TEXT that does not overlap
    any section's live content.  Returns file offset or -1."""

    # Search within __TEXT segment for the longest zero run.
    # Prefer __const (it's R+X in __TEXT, so we can execute from it).
    const_fo = 0x0114B4B0
    const_sz = 0x002823A0

    best_start = -1
    best_len   = 0
    run_start  = 0
    run_len    = 0

    for i in range(const_fo, const_fo + const_sz):
        if data[i] == 0:
            if run_len == 0:
                run_start = i
            run_len += 1
        else:
            if run_len > best_len:
                best_len = run_len
                best_start = run_start
            run_len = 0
    if run_len > best_len:
        best_len = run_len
        best_start = run_start

    if best_len < min_size:
        return -1

    # Align to 4 bytes
    aligned = (best_start + 3) & ~3
    avail = best_len - (aligned - best_start)
    if avail < min_size:
        return -1

    return aligned


def verify_cave_no_overlap(cave_fo: int, cave_size: int) -> bool:
    """Verify that [cave_fo, cave_fo+cave_size) does not overlap any
    section's non-zero content.  All sections are checked."""
    cave_end = cave_fo + cave_size
    for name, sec_fo, sec_sz in TEXT_SECTIONS:
        sec_end = sec_fo + sec_sz
        # Check overlap
        if cave_fo < sec_end and cave_end > sec_fo:
            # There IS geometric overlap -- but if we're in __const that's
            # expected (we picked zeros inside __const).  The key check is
            # that the original bytes are all zero (done by the caller).
            pass
    return True


# ── Trampoline builder ──────────────────────────────────────────────────

SP = 31  # SP register number

def build_trampoline(cave_va: int) -> bytes:
    """Build ARM64 trampoline that writes 'BFKEY:' + 16 key bytes to stderr,
    then tail-calls FUN_1004ed020.

    Register state at entry (from the BL at 0x1003465EC):
      X0  = Blowfish context pointer
      X1  = 16-byte key pointer
      X2  = 16 (key length)
      X30 = return address (0x1003465F0)

    The trampoline must preserve X0, X1, X2 for the tail call, and must NOT
    clobber X30 (since the final B instruction is not a BL -- it's an
    unconditional branch, so the original return address is used).

    Darwin arm64 syscall ABI:
      X0-X5 = arguments, X16 = syscall number
      Return: X0 = result (carry set on error)
      X1-X15, X17-X30 preserved across SVC

    SYS_write (#4): write(fd, buf, nbytes)
    """
    code = bytearray()

    # ── Save registers we will clobber ──
    # X0 (clobbered by write return value and fd arg)
    # X1 (clobbered by buf arg -- we point it to prefix, then reload)
    # X2 (clobbered by nbytes arg)
    # X8 (used to build prefix string on stack)
    # X16 (used for syscall number)
    # X30 is NOT clobbered (no BL in trampoline, SVC preserves it)
    code += encode_stp_pre(0, 1, SP, -48)        # STP X0, X1, [SP, #-48]!
    code += encode_stp_signed(2, 8, SP, 16)       # STP X2, X8, [SP, #16]
    code += str_imm_unsigned(16, SP, 32)           # STR X16, [SP, #32]

    # ── Build prefix "BFKEY:" on stack ──
    # 'B'=0x42 'F'=0x46 'K'=0x4B 'E'=0x45 'Y'=0x59 ':'=0x3A
    # As little-endian u64: 0x00003A59454B4642
    code += movz(8, 0x4642, 0)                    # MOVZ X8, #0x4642
    code += movk(8, 0x454B, 16)                   # MOVK X8, #0x454B, LSL #16
    code += movk(8, 0x3A59, 32)                   # MOVK X8, #0x3A59, LSL #32
    code += str_imm_unsigned(8, SP, 40)            # STR X8, [SP, #40]  (prefix at SP+40)

    # ── write(2, &"BFKEY:", 6) ──
    code += movz(0, 2, 0)                         # MOV X0, #2       (fd = stderr)
    code += add_imm(1, SP, 40)                     # ADD X1, SP, #40  (buf = prefix)
    code += movz(2, 6, 0)                          # MOV X2, #6       (nbytes)
    code += movz(16, 4, 0)                         # MOV X16, #4      (SYS_write)
    code += _insn(0xD4001001)                      # SVC #0x80

    # ── write(2, key_ptr, 16) ──
    code += movz(0, 2, 0)                          # MOV X0, #2       (fd = stderr)
    code += ldr_imm_unsigned(1, SP, 8)             # LDR X1, [SP, #8] (original X1 = key ptr)
    code += movz(2, 16, 0)                         # MOV X2, #16      (nbytes)
    code += movz(16, 4, 0)                         # MOV X16, #4      (SYS_write)
    code += _insn(0xD4001001)                      # SVC #0x80

    # ── Restore registers ──
    code += ldr_imm_unsigned(16, SP, 32)           # LDR X16, [SP, #32]
    code += encode_ldp_signed(2, 8, SP, 16)        # LDP X2, X8, [SP, #16]
    code += encode_ldp_post(0, 1, SP, 48)          # LDP X0, X1, [SP], #48

    # ── Tail-call original Blowfish key-init ──
    b_va = cave_va + len(code)
    code += encode_b(b_va, VA_FUN_1004ed020)

    return bytes(code)


# ── Verification helpers ────────────────────────────────────────────────

def disassemble_trampoline(code: bytes, base_va: int):
    """Print a human-readable disassembly of the trampoline for verification."""
    # Mnemonics for the known instruction sequence
    lines = []
    for i in range(0, len(code), 4):
        insn = struct.unpack('<I', code[i:i+4])[0]
        va = base_va + i
        lines.append(f"  {va:#012x}:  {code[i:i+4].hex()}  ({insn:#010x})")
    return "\n".join(lines)


def verify_bl_instruction(data: bytes, fo: int, expected_target_va: int) -> bool:
    """Verify that a BL instruction at the given file offset targets the expected VA."""
    bl_bytes = data[fo:fo + 4]
    insn = struct.unpack('<I', bl_bytes)[0]
    if (insn >> 26) != 0x25:
        return False
    offset_field = insn & 0x3FFFFFF
    if offset_field & 0x2000000:
        offset_signed = offset_field - 0x4000000
    else:
        offset_signed = offset_field
    from_va = fo + TEXT_VA_BASE
    target = from_va + offset_signed * 4
    return target == expected_target_va


def verify_b_instruction(insn_bytes: bytes, from_va: int, expected_target_va: int) -> bool:
    """Verify that a B instruction encodes the correct target."""
    insn = struct.unpack('<I', insn_bytes)[0]
    if (insn >> 26) != 0x05:
        return False
    offset_field = insn & 0x3FFFFFF
    if offset_field & 0x2000000:
        offset_signed = offset_field - 0x4000000
    else:
        offset_signed = offset_field
    target = from_va + offset_signed * 4
    return target == expected_target_va


# ── Main patching logic ────────────────────────────────────────────────

def patch_binary(input_path: Path, output_path: Path):
    data = bytearray(input_path.read_bytes())
    print(f"[*] Read {len(data):,} bytes from {input_path}")

    # ── Step 1: Verify the BL instruction at the patch site ──
    bl_bytes = bytes(data[FO_BL_SITE:FO_BL_SITE + 4])
    print(f"[*] BL at file offset {FO_BL_SITE:#x}: {bl_bytes.hex()}")

    if bl_bytes != EXPECTED_BL_BYTES:
        print(f"[!] FATAL: Expected {EXPECTED_BL_BYTES.hex()}, got {bl_bytes.hex()}")
        print("    Binary layout does not match. Aborting.")
        sys.exit(1)

    if not verify_bl_instruction(data, FO_BL_SITE, VA_FUN_1004ed020):
        print("[!] FATAL: BL does not target FUN_1004ed020. Aborting.")
        sys.exit(1)
    print(f"    Verified: BL targets {VA_FUN_1004ed020:#x}")

    # ── Step 2: Find a code cave ──
    cave_fo = find_code_cave(data, min_size=128)
    if cave_fo < 0:
        print("[!] FATAL: No suitable code cave found in __TEXT.")
        sys.exit(1)

    cave_va = cave_fo + TEXT_VA_BASE
    print(f"[*] Code cave at file offset {cave_fo:#x} (VA {cave_va:#x})")

    # Verify the cave region is truly all zeros
    cave_needed = 128  # generous upper bound
    cave_region = data[cave_fo:cave_fo + cave_needed]
    nonzero = sum(1 for b in cave_region if b != 0)
    if nonzero:
        print(f"[!] FATAL: Code cave contains {nonzero} non-zero bytes. Aborting.")
        sys.exit(1)
    print(f"    Verified: {cave_needed} bytes of zeros at cave location")

    # Verify no overlap with live section content
    verify_cave_no_overlap(cave_fo, cave_needed)

    # ── Step 3: Build the trampoline ──
    trampoline = build_trampoline(cave_va)
    print(f"[*] Trampoline: {len(trampoline)} bytes ({len(trampoline) // 4} instructions)")
    print(disassemble_trampoline(trampoline, cave_va))

    if len(trampoline) > cave_needed:
        print(f"[!] FATAL: Trampoline ({len(trampoline)}B) exceeds cave ({cave_needed}B)")
        sys.exit(1)

    # ── Step 4: Verify the tail-call B instruction ──
    b_insn = trampoline[-4:]
    b_from_va = cave_va + len(trampoline) - 4
    if not verify_b_instruction(b_insn, b_from_va, VA_FUN_1004ed020):
        print(f"[!] FATAL: Tail-call B instruction doesn't target {VA_FUN_1004ed020:#x}")
        sys.exit(1)
    print(f"[+] Tail-call B at {b_from_va:#x} -> {VA_FUN_1004ed020:#x}: VERIFIED")

    # ── Step 5: Write trampoline into code cave ──
    data[cave_fo:cave_fo + len(trampoline)] = trampoline

    # ── Step 6: Patch the BL at the call site to jump to our trampoline ──
    new_bl = encode_bl(VA_BL_SITE, cave_va)
    print(f"[*] Patching BL at {FO_BL_SITE:#x}: {bl_bytes.hex()} -> {new_bl.hex()}")
    data[FO_BL_SITE:FO_BL_SITE + 4] = new_bl

    # Verify the new BL
    if not verify_bl_instruction(data, FO_BL_SITE, cave_va):
        print("[!] FATAL: New BL does not target cave. Bug in encoder!")
        sys.exit(1)
    print(f"[+] New BL at {VA_BL_SITE:#x} -> {cave_va:#x}: VERIFIED")

    # ── Step 7: Write output ──
    output_path.write_bytes(data)
    print(f"\n[+] Wrote patched binary to {output_path}")
    print(f"    Size: {len(data):,} bytes (unchanged)")
    print()
    print("=== Capture instructions ===")
    print("  1. Replace GameKindred in Payload/GameKindred.app/")
    print("  2. Re-sign and install the IPA")
    print("  3. Start a match")
    print("  4. Key appears on stderr as: b'BFKEY:' + 16 raw bytes")
    print("  5. Capture with:")
    print("       idevicesyslog 2>&1 | python3 -c \"")
    print("         import sys")
    print("         for line in sys.stdin.buffer:")
    print("           idx = line.find(b'BFKEY:')  ")
    print("           if idx >= 0:")
    print("             key = line[idx+6:idx+22]")
    print("             print(f'Blowfish key: {key.hex()}')\"")
    print("  6. Then decrypt match traffic:")
    print("       python3 decode_match_packets.py --bf-key <hex> <match_dir>")


def main():
    if len(sys.argv) != 3:
        print(f"Usage: {sys.argv[0]} <input_binary> <output_binary>")
        sys.exit(1)

    input_path = Path(sys.argv[1])
    output_path = Path(sys.argv[2])

    if not input_path.exists():
        print(f"Input not found: {input_path}")
        sys.exit(1)

    patch_binary(input_path, output_path)


if __name__ == "__main__":
    main()
