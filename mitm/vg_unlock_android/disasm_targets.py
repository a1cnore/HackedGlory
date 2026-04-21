"""Disassemble the prologue of each fptr target to confirm it's a real function (not a ret-stub)."""
from __future__ import annotations
import struct
from pathlib import Path
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_ARM

data = Path("D:/libGameKindred_real.so").read_bytes()
def u16(o): return struct.unpack_from('<H', data, o)[0]
def u32(o): return struct.unpack_from('<I', data, o)[0]
def u64(o): return struct.unpack_from('<Q', data, o)[0]

e_shoff = u64(0x28); e_shentsize = u16(0x3a); e_shnum = u16(0x3c); e_shstrndx = u16(0x3e)
shstr_hdr = e_shoff + e_shstrndx * e_shentsize
shstr_off = u64(shstr_hdr + 0x18); shstr_size = u64(shstr_hdr + 0x20)
shstr = data[shstr_off:shstr_off + shstr_size]
def sname(i): return shstr[i:shstr.find(b'\0', i)].decode()

sections = {}
for i in range(e_shnum):
    h = e_shoff + i * e_shentsize
    sections[sname(u32(h))] = (u64(h + 0x10), u64(h + 0x18), u64(h + 0x20))

def vaddr_to_off(v):
    for _nm, (a, o, s) in sections.items():
        if a and a <= v < a + s:
            return o + (v - a)
    return None

md = Cs(CS_ARCH_ARM64, CS_MODE_ARM)
targets = [
    ("trophy_panel_correct", 0xa67e3c),
    ("profile_data",         0xa0c2f8),
    ("profile_ranked",       0xa02b60),
    ("profile_body",         0xa6e6f4),
    ("profile_loader",       0xae08f8),
    ("season_update",        0xe01c54),
    ("social_feat",          0x99f5e0),
    ("skill_tier",           0xe020b4),
    ("data_fetch",           0xad240c),
    ("tab_init",             0xe02408),
    ("market_tabs",          0xad676c),
]
for nm, va in targets:
    off = vaddr_to_off(va)
    bs = data[off:off + 24]
    print(f"=== {nm:25s} 0x{va:x} ===")
    for ins in md.disasm(bs, va):
        print(f"  {ins.address:08x}  {ins.mnemonic:6s} {ins.op_str}")
    print()
