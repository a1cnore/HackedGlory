"""Disassemble 128 bytes of each target to understand argument use."""
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
    for a, o, s in sections.values():
        if a and a <= v < a + s:
            return o + (v - a)
    return None

md = Cs(CS_ARCH_ARM64, CS_MODE_ARM)
# Look at how each function uses x0-x7 (arg regs) within first 128 bytes
targets = [
    ("tab_init",         0xe02408),
    ("market_tabs",      0xad676c),
    ("profile_body",     0xa6e6f4),
    ("social_feat",      0x99f5e0),
]
for nm, va in targets:
    off = vaddr_to_off(va)
    bs = data[off:off + 200]
    print(f"=== {nm} @ 0x{va:x} ===")
    args_used = set()
    for ins in md.disasm(bs, va):
        # Find register references
        ops = ins.op_str
        for r in ("w0","w1","w2","w3","w4","w5","w6","w7","x0","x1","x2","x3","x4","x5","x6","x7","s0","s1","s2","s3","d0","d1","d2","d3"):
            if r in ops and r not in args_used:
                args_used.add(r)
        print(f"  {ins.address:08x}  {ins.mnemonic:6s} {ins.op_str}")
    print(f"  args seen: {sorted(args_used)}")
    print()
