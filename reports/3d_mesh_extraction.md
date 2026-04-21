# Vainglory 3D Mesh Extraction — Full Process Report

Status: **Work in progress** — vertex positions decoded, index buffer interpretation still producing distorted renders.

## Summary

Reverse-engineered the proprietary RSC0 resource container format used by Super Evil Megacorp's E.V.I.L. engine to extract 3D character meshes from Vainglory (build 4.13.4). The vertex position format is confirmed but the rendered meshes still show distortion, likely due to incorrect index buffer interpretation (triangle list vs triangle strip vs indexed strip with restarts).

## Asset Structure

### File formats in `Payload/GameKindred.app/Data/` (48,187 files)

| Header | Count | Total Size | Contents |
|--------|-------|-----------|----------|
| `RSC0` | 18,136 | 719 MB | Resource containers: geometry (.guob) + materials (.shadergraph) |
| `7c55xxxx` | ~3,500 | ~475 MB | Textures (mip levels scale 4x each) |
| `a055xxxx` | 289 | 101 MB | Texture variant (possibly with alpha) |
| `fffb*/ID3` | ~15,000 | ~333 MB | Audio (MP3) |
| `OggS` | 200 | 49 MB | Audio (OGG) |
| `CFF0` | 942 | 17 MB | Definition files (hero stats, scene nodes, shader defs) |

### RSC0 container format

```
Offset  Size  Field
0x00    4     Magic "RSC0"
0x04    4     data_size (= file_size - 32)
0x08    4     data_size (repeated)
0x0C    20    zeros
0x20    4     file_size (redundant)
0x24    2     path_count (uint16 LE)
0x26    var   null-terminated UTF-8 path strings
```

Character RSC0 files contain 2-3 paths like:
- `/Characters/Hero030/Art/hero030_crimson.guob_mat.shadergraph`
- `/Characters/Hero030/Art/hero030_crimson.crimson_mat.shadergraph`

### CFF0 container format (decrypted)

See `scripts/decrypt_cff0.py` for full implementation. Structure:
- `CFF0` header → block offsets
- `DEF0` section → type hash, key_index for decryption
- `INST` section → encrypted struct data (Jenkins lookup3 XOR cipher)
- `PTCH` section → relocation entries
- `SYMB` section → human-readable name (e.g. `*KindredMenuPartyHatGoldMesh*`)

Decryption: `decrypted[i] = master_key ^ ROL1(prev_encrypted) ^ encrypted[i]` where master_key = jenkins_lookup3(KEY_TABLE[key_index], inst_data_length).

CFF0 "Mesh" files (17 found) are **scene graph node definitions**, not vertex data. They contain transforms, camera params, and `build://` references to external .mesh/.skeleton files.

## RSC0 Mesh Data Structure (confirmed)

### Mesh header (after path strings)

```
+0x00  1    flag (4 = mesh with geometry)
+0x01  1    padding
+0x02  2    submesh_count (uint16 LE)
+0x04  4    padding
+0x08  4    header_vertex_count (uint32 LE) — purpose unclear, doesn't always match actual count
+0x0C  24   bounding box (6 × float32 LE: min_x, min_y, min_z, max_x, max_y, max_z)
```

Followed by per-submesh bone index lists and nested sub-section descriptors.

### Attribute table

Located by searching for marker bytes `00 04 03 00 00 00 00 01`. Structure:

```
Table header (12 bytes before marker):
  +0   1    version? (always 0x01)
  +1   1    base type? (always 0x04)
  +2   2    flags/size
  +4   2    ?
  +6   2    stride hint (0x0040 = 64)
  +8   2    padding
  +10  2    attribute_count (uint16 LE)

Per-attribute entry (8 bytes each, starting at marker):
  [0]  stream_index
  [1]  data_type: 1=ubyte, 2=short, 4=float, 5=half
  [2]  component_count (1-4)
  [3]  byte_offset within vertex (AFTER the 2-byte prefix)
  [4-6] padding
  [7]  semantic: 0x01=POSITION, 0x02=NORMAL, 0x05=TANGENT, 0x09=TEXCOORD0, 0x0A=TEXCOORD1, 0x17=BLENDWEIGHT
```

Typical layout (stride 64):
| Semantic | Type | Count | Offset | Size | GPU Attribute |
|----------|------|-------|--------|------|---------------|
| POSITION | float | 3 | 0 | 12B | `_Vertex` |
| NORMAL | float | 3 | 12 | 12B | `_Normal` |
| TANGENT | float | 4 | 24 | 16B | `_MultiTexCoord3` |
| TEXCOORD0 | half | 2 | 40 | 4B | `_MultiTexCoord0` |
| TEXCOORD1 | float | 3 | 44 | 12B | `_MultiTexCoord1` |
| BLENDWEIGHT | ubyte | 3 | 56 | 3B | `_MultiTexCoord6/7` |

**Note**: these describe the GPU-side format. The file stores data with a 2-byte prefix per vertex not described by the table.

### Submesh descriptor (before attribute table)

```
attr_pos - 20:  index_count (uint32 LE)
attr_pos - 16:  vertex_count (uint32 LE)
attr_pos - 2:   attribute_count (uint16 LE)
```

### Vertex data

Starts immediately after the attribute table entries. Each vertex is **64 bytes** (for the typical 6-attribute layout):

```
+00 (2 bytes):   uint16 LE prefix (bone/submesh index — purpose not fully confirmed)
+02 (12 bytes):  float3 BIG-ENDIAN position (x, y, z) ← CONFIRMED
+14 (12 bytes):  float3 BE — likely normal (not unit length, magnitudes 0.2–1.9)
+26 (16 bytes):  float4 BE — likely tangent (xyz in [-2,+2], w ≈ -0.96)
+42 (14 bytes):  constant per-mesh (material/bone references)
+56 (7 bytes):   sparse bone data
+63 (1 byte):    per-vertex ID/hash
```

**Position format confirmed by**:
1. Android native library (`libGameKindred.so`) analysis: `glVertexAttribPointer` call site decoded, attribute binding table found
2. Byte-level variance analysis: bytes 2,6,10 have near-constant exponent bytes (`0x42`, `0x42/43`, `0xC1`), consistent with BE floats in specific magnitude ranges
3. ASCII silhouette rendering shows recognizable character shape from positions
4. Both iOS and Android use identical RSC0 format

### Index buffer

Located immediately after vertex data (at `vdata_start + vertex_count * stride`).

**Format: uint16 BIG-ENDIAN** (confirmed by comparing BE vs LE edge lengths; LE produces values > 30000 for many indices).

**Topology: likely TRIANGLE STRIP** (not triangle list):
- Degenerate triangles (repeated indices like `i, i, j`) appear frequently → strip restart markers
- Reading as triangle list produces median edge length of 62+ units (too high)
- Reading as triangle strip produces more triangles with some improvement
- The header value `9` at the index region may indicate 9 strip segments

**This is the remaining unsolved problem**: the strip-to-list conversion still produces some very long edges (median ~48 units). The correct interpretation may involve:
- Per-draw-call base vertex offsets
- Primitive restart index (0xFFFF or specific sentinel)
- A different strip restart convention
- The "9 draw calls" header splitting the index buffer into sub-ranges with separate vertex base offsets

### Vertex shader (from GLSL embedded in Android binary)

```glsl
uniform mat4 _ModelViewProjectionMatrix;
attribute highp vec4 _Vertex;

void main() {
    gl_Position = (_ModelViewProjectionMatrix * _Vertex);
    // ... UV, color processing ...
}
```

**No bone/skeletal transform in the vertex shader.** `_Bones` uniform is used only for UV atlas transforms, not vertex position skinning. This means positions should render correctly as-is without bone matrices.

## What Works

- ✅ RSC0 container parsing (header, paths, attribute table)
- ✅ Vertex position extraction (BE float3 at offset +2, stride 64)
- ✅ Index buffer location (after vertex data)
- ✅ Index endianness (big-endian uint16)
- ✅ CFF0 decryption (Jenkins lookup3 XOR cipher)
- ✅ 160+ mesh files identified and partially extracted
- ✅ Three.js viewer with orbit controls (`scripts/viewer.html`, `scripts/multi_viewer.html`)
- ✅ Point cloud rendering confirms character silhouettes

## What Doesn't Work Yet

- ❌ **Triangle connectivity**: meshes render as stretched curtain-like planes, not solid surfaces
- ❌ Index buffer primitive topology not fully decoded (list vs strip vs indexed strip)
- ❌ Normal vectors not unit-length (may need post-load normalization or different encoding)
- ❌ UV coordinates not extracted (half2 at offset 40, not attempted)
- ❌ Textures not extracted (7c55/a055 files, format unknown — likely PVR/ASTC)

## Attempts Log

### Attempt 1: LE float3 positions
Tried reading positions as little-endian float3 at various offsets within 64-byte stride. All offsets produced garbage or near-zero values. **Failed.**

### Attempt 2: Half-float positions
Scanned for IEEE 754 half-precision float triplets. Found some matches but values were in [-2,+2] range (normalized data, not positions). **Failed.**

### Attempt 3: Quantized uint16 positions
Tried mapping uint16 values to bbox range. Some offsets gave positions within bbox but spatially incoherent. **Failed.**

### Attempt 4: BE float3 at offset +2 (CURRENT)
Big-endian float3 at byte offset 2 within each 64-byte vertex. Produces individually valid coordinates spanning the model bbox. Confirmed by Android native library analysis. **Positions correct, connectivity wrong.**

### Attempt 5: LE uint16 indices
Read index buffer as little-endian uint16. Produced valid-looking index values (0–7230) but terrible mesh connectivity (avg edge 35+ units). **Wrong endianness.**

### Attempt 6: BE uint16 indices
Read as big-endian uint16. Better than LE (avg edge improved) but still produces stretched triangles. **Correct endianness, wrong topology.**

### Attempt 7: Triangle strip interpretation
Converted BE uint16 indices from strip to list with degenerate-triangle restarts. Produced more triangles (24K vs 9K) with slightly better edge lengths. **Improvement but still distorted.**

### Attempt 8: Outlier filtering
Removed vertices outside 5th-95th percentile bbox. Reduced stretched triangles but didn't fix fundamental connectivity issue. **Cosmetic only.**

## Scripts

| Script | Purpose |
|--------|---------|
| `scripts/rsc0_mesh_extractor.py` | v1 extractor (LE indices, now outdated) |
| `scripts/extract_meshes_v2.py` | v2 extractor (BE indices, triangle list) |
| `scripts/decrypt_cff0.py` | CFF0 decryption with Jenkins lookup3 |
| `scripts/analyze_data_bundle.py` | RSC0/CFF0 file header inventory |
| `scripts/viewer.html` | Single-model three.js OBJ viewer |
| `scripts/multi_viewer.html` | 10-model grid viewer for comparison |

## Extracted Files

94 OBJ files in `extracted_meshes/`, including:
- `*_v2.obj` — v2 extractor output (BE indices, triangle list, ~160 files originally)
- `*_STRIP.obj` — triangle strip interpretation
- `*_filtered.obj` — outlier vertices removed
- `test_cube.obj` — viewer validation cube

## Key File Locations

- iOS app bundle: `Payload/GameKindred.app/`
- Android XAPK: `Vainglory_unpatched.xapk` (contains APK + 1.4GB OBB)
- Android native lib: `/tmp/vgf_android/apk_contents/lib/arm64-v8a/libGameKindred.so` (45MB, arm64, stripped)
- Android OBB uses identical RSC0 format to iOS

## Next Steps to Fix Rendering

1. **Decode the draw-call structure**: The 16-byte header before the index buffer (`[0, 0, 9, 0]` as uint32) likely describes 9 sub-ranges within the strip. Find where each draw call's indices start/end and whether they use per-call base vertex offsets.

2. **Ghidra: trace the mesh rendering path**: Decompile the function that calls `drawIndexedPrimitives:indexCount:indexType:indexBuffer:indexBufferOffset:` (iOS) or `glDrawElements` (Android). The parameters will reveal:
   - `indexType`: GL_UNSIGNED_SHORT (confirmed) vs GL_UNSIGNED_INT
   - `mode`: GL_TRIANGLES (list) vs GL_TRIANGLE_STRIP (strip)
   - `indexBufferOffset`: per-draw-call offsets into the index buffer
   - `baseVertex`: if the engine uses `glDrawElementsBaseVertex`

3. **Check if indices need byte-swapping at LOAD TIME**: The engine might swap BE→LE when loading from disk into GPU memory. The raw file might be BE but the draw call uses LE indices after a load-time conversion. If so, the positions might also be swapped at load time.

4. **Alternative: brute-force the draw mode**: Generate OBJs with GL_TRIANGLES, GL_TRIANGLE_STRIP, and GL_TRIANGLE_FAN interpretations and compare renders. Also try primitive restart with index 0xFFFF.

5. **Try a known simple mesh**: Find a mesh with very few vertices (like a ground shadow plane with ~90 verts) where the correct triangulation can be visually verified.

## Confidence Levels

- **High**: RSC0 header parsing, path extraction, attribute table location, position format (BE float3 @+2), index endianness (BE uint16)
- **Medium**: Vertex stride (64 bytes), submesh descriptor fields, vertex prefix meaning
- **Low**: Index buffer topology (strip vs list), draw-call sub-ranges, normal encoding
- **Unknown**: Texture format (7c55 files), skeleton/animation data, per-bone transforms at runtime
