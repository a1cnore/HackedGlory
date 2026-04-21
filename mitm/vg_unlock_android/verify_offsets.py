"""Verify every FPTR_* offset in vg_unlock_android.c against libGameKindred_real.so.

For each fptr offset:
 - confirm it falls within .data.rel.ro (or .data / .rodata)
 - read the 8-byte pointer at that offset (after applying base relocation via rela.dyn)
 - disassemble the first 32 bytes of the target function using capstone if available
 - print a verdict
"""
from __future__ import annotations
import struct, sys
from pathlib import Path

try:
    from capstone import Cs, CS_ARCH_ARM64, CS_MODE_ARM
    HAVE_CS = True
except ImportError:
    HAVE_CS = False

LIB = Path("D:/libGameKindred_real.so")
data = LIB.read_bytes()

# ELF64 parse
def u16(o): return struct.unpack_from('<H', data, o)[0]
def u32(o): return struct.unpack_from('<I', data, o)[0]
def u64(o): return struct.unpack_from('<Q', data, o)[0]
def s64(o): return struct.unpack_from('<q', data, o)[0]

assert data[:4] == b'\x7fELF' and data[4] == 2  # ELF64
e_shoff = u64(0x28)
e_shentsize = u16(0x3a)
e_shnum = u16(0x3c)
e_shstrndx = u16(0x3e)

# shstrtab
shstr_hdr = e_shoff + e_shstrndx * e_shentsize
shstr_off = u64(shstr_hdr + 0x18)
shstr_size = u64(shstr_hdr + 0x20)
shstr = data[shstr_off:shstr_off + shstr_size]

def sname(i):
    return shstr[i:shstr.find(b'\0', i)].decode()

sections = {}
for i in range(e_shnum):
    h = e_shoff + i * e_shentsize
    nm = sname(u32(h))
    sh_addr = u64(h + 0x10)
    sh_offset = u64(h + 0x18)
    sh_size = u64(h + 0x20)
    sections[nm] = (sh_addr, sh_offset, sh_size)

for nm in (".text", ".data.rel.ro", ".data", ".rodata", ".got", ".rela.dyn"):
    if nm in sections:
        a, o, s = sections[nm]
        print(f"{nm:15s} vaddr=0x{a:08x} off=0x{o:08x} size=0x{s:08x}")
print()

text_a, text_o, text_s = sections[".text"]
drr_a, drr_o, drr_s = sections.get(".data.rel.ro", (0, 0, 0))

# rela.dyn — R_AARCH64_RELATIVE entries give us initialized pointer values in .data.rel.ro
relocs_by_addr = {}
if ".rela.dyn" in sections:
    _, rela_o, rela_s = sections[".rela.dyn"]
    ent = 24  # Elf64_Rela
    for i in range(rela_s // ent):
        r_off = u64(rela_o + i * ent)
        r_info = u64(rela_o + i * ent + 8)
        r_addend = s64(rela_o + i * ent + 16)
        r_type = r_info & 0xffffffff
        # R_AARCH64_RELATIVE = 1027
        if r_type == 1027:
            relocs_by_addr[r_off] = r_addend

print(f"loaded {len(relocs_by_addr)} R_AARCH64_RELATIVE entries\n")

# From vg_unlock_android.c
FPTRS = {
    # Layer 1 parsers
    "FPTR_FEATURES_ENABLED":    (0x26bac28, 0x83f318),
    "FPTR_FREE_TAB_VISIBILITY": (0x26bab38, 0x83ec48),
    "FPTR_GOLDEN_ARROW":        (0x26bab98, 0x83f00c),
    "FPTR_TUTORIAL_POPUP":      (0x26bab68, 0x83ef2c),
    # Layer 4
    "FPTR_TROPHY_PANEL":        (0x26d4df8, 0xa67e3c),
    "FPTR_PROFILE_DATA":        (0x26dc200, 0xa0c2f8),
    # Layer 5
    "FPTR_PROFILE_EEB60":       (0x26f34c8, 0xaf7920),
    "FPTR_PROFILE_F505C":       (0x26f34a8, 0xaf7980),
    "FPTR_PROFILE_FA7B0":       (0x26f3888, 0xaf7950),
    # Layer 7
    "FPTR_GUEST_VTABLE12":      (0x2720e70, 0xd91dec),
    # Layer 8 experimental
    "FPTR_PROFILE_RANKED":      (0x26d5630, 0xa02b60),
    "FPTR_PROFILE_BODY":        (0x26e52e8, 0xa6e6f4),
    "FPTR_PROFILE_LOADER":      (0x26eec18, 0xae08f8),
    "FPTR_SEASON_UPDATE":       (0x26d8080, 0xe01c54),
    "FPTR_SOCIAL_FEAT":         (0x26d1440, 0x99f5e0),
    "FPTR_SKILL_TIER":          (0x26da510, 0xe020b4),
    "FPTR_DATA_FETCH":          (0x26ed4f8, 0xad240c),
    "FPTR_TAB_INIT":            (0x26c97b0, 0xe02408),
    "FPTR_MARKET_TABS":         (0x26ed788, 0xad676c),
}

def vaddr_to_off(v):
    # simple scan
    for nm, (a, o, s) in sections.items():
        if a and a <= v < a + s:
            return o + (v - a)
    return None

def disasm_prologue(func_v, nbytes=32):
    off = vaddr_to_off(func_v)
    if off is None:
        return f"  [no file offset for vaddr 0x{func_v:x}]"
    if not HAVE_CS:
        bs = data[off:off + nbytes]
        return f"  raw: {bs.hex()}"
    md = Cs(CS_ARCH_ARM64, CS_MODE_ARM)
    out = []
    for ins in md.disasm(data[off:off + nbytes], func_v):
        out.append(f"  {ins.address:08x}  {ins.mnemonic:6s} {ins.op_str}")
    return "\n".join(out)

print(f"{'FPTR':30s}  {'offset':>10s}  {'section':15s}  {'stored->target':25s}  {'expected':>10s}  match?")
print("-" * 120)
for name, (fptr_off, expected_func) in FPTRS.items():
    # determine section
    section = "?"
    for snm, (a, o, s) in sections.items():
        if a and a <= fptr_off < a + s:
            section = snm
            break

    # read stored pointer (this is the *file* value — actual runtime value is addend from rela.dyn)
    file_off = vaddr_to_off(fptr_off)
    if file_off is None:
        print(f"{name:30s}  0x{fptr_off:08x}  NOT IN ANY SECTION")
        continue
    raw_ptr = u64(file_off)

    # check if there's a relocation for this address
    reloc_target = relocs_by_addr.get(fptr_off)

    actual = reloc_target if reloc_target is not None else raw_ptr
    match = "YES" if actual == expected_func else "NO"
    src = "reloc" if reloc_target is not None else "raw"

    print(f"{name:30s}  0x{fptr_off:08x}  {section:15s}  {src}:0x{actual:09x}  0x{expected_func:08x}  {match}")
    if match == "NO":
        print(f"  disasm at actual 0x{actual:x}:")
        print(disasm_prologue(actual))
        print(f"  disasm at expected 0x{expected_func:x}:")
        print(disasm_prologue(expected_func))
