"""Find all .data.rel.ro offsets whose RELATIVE relocation points to a given
function vaddr — i.e., all fptrs that reference that function."""
from __future__ import annotations
import struct, sys
from pathlib import Path

data = Path("D:/libGameKindred_real.so").read_bytes()
def u16(o): return struct.unpack_from('<H', data, o)[0]
def u32(o): return struct.unpack_from('<I', data, o)[0]
def u64(o): return struct.unpack_from('<Q', data, o)[0]
def s64(o): return struct.unpack_from('<q', data, o)[0]

e_shoff = u64(0x28); e_shentsize = u16(0x3a); e_shnum = u16(0x3c); e_shstrndx = u16(0x3e)
shstr_hdr = e_shoff + e_shstrndx * e_shentsize
shstr_off = u64(shstr_hdr + 0x18); shstr_size = u64(shstr_hdr + 0x20)
shstr = data[shstr_off:shstr_off + shstr_size]
def sname(i): return shstr[i:shstr.find(b'\0', i)].decode()

sections = {}
for i in range(e_shnum):
    h = e_shoff + i * e_shentsize
    nm = sname(u32(h))
    sections[nm] = (u64(h + 0x10), u64(h + 0x18), u64(h + 0x20))

_, rela_o, rela_s = sections[".rela.dyn"]
drr_a, drr_o, drr_s = sections[".data.rel.ro"]

# Search for fptrs matching targets we suspect should exist
targets = [int(x, 0) for x in (sys.argv[1:] or ["0xa67e3c"])]
print(f"Scanning {rela_s // 24} R_AARCH64_RELATIVE entries for pointers to: {', '.join(hex(t) for t in targets)}")
print()

hits = {t: [] for t in targets}
for i in range(rela_s // 24):
    r_off = u64(rela_o + i * 24)
    r_info = u64(rela_o + i * 24 + 8)
    r_addend = s64(rela_o + i * 24 + 16)
    if (r_info & 0xffffffff) != 1027:
        continue
    if r_addend in hits:
        hits[r_addend].append(r_off)

for t, offs in hits.items():
    print(f"Function 0x{t:x} is referenced by {len(offs)} pointer(s) in .data.rel.ro or elsewhere:")
    for o in offs:
        section = "?"
        for nm, (a, so, sz) in sections.items():
            if a and a <= o < a + sz:
                section = nm
                break
        print(f"  at vaddr 0x{o:08x}  ({section})")
    print()
