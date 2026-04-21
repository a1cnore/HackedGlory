// functions/01a49 — 1 functions
#include "libGameKindred.h"




void FUN_01a49394(ulong *param_1,ulong *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  
  if (param_3 != 0) {
    uVar12 = *param_1;
    uVar16 = param_1[1];
    uVar9 = param_1[2];
    uVar5 = param_1[3];
    uVar17 = param_1[4];
    uVar18 = param_1[5];
    uVar7 = param_1[6];
    uVar19 = param_1[7];
    do {
      uVar13 = (*param_2 & 0xff00ff00ff00ff00) >> 8 | (*param_2 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar25 = uVar13 >> 0x20 | uVar13 << 0x20;
      uVar13 = (param_2[1] & 0xff00ff00ff00ff00) >> 8 | (param_2[1] & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      local_a8 = uVar13 >> 0x20 | uVar13 << 0x20;
      lVar1 = uVar19 + (uVar7 & (uVar17 ^ 0xffffffffffffffff) ^ uVar18 & uVar17) + uVar25 +
              ((uVar17 >> 0x12 | uVar17 << 0x2e) ^ (uVar17 >> 0xe | uVar17 << 0x32) ^
              (uVar17 >> 0x29 | uVar17 << 0x17)) + 0x428a2f98d728ae22;
      uVar13 = lVar1 + uVar5;
      uVar24 = ((uVar12 >> 0x22 | uVar12 << 0x1e) ^ (uVar12 >> 0x1c | uVar12 << 0x24) ^
               (uVar12 >> 0x27 | uVar12 << 0x19)) + ((uVar9 ^ uVar16) & uVar12 ^ uVar9 & uVar16) +
               lVar1;
      lVar1 = uVar7 + local_a8 + (uVar13 & uVar17 ^ uVar18 & (uVar13 ^ 0xffffffffffffffff)) +
              ((uVar13 >> 0x12 | uVar13 << 0x2e) ^ (uVar13 >> 0xe | uVar13 << 0x32) ^
              (uVar13 >> 0x29 | uVar13 * 0x800000)) + 0x7137449123ef65cd;
      uVar11 = lVar1 + uVar9;
      uVar3 = ((uVar24 >> 0x22 | uVar24 * 0x40000000) ^ (uVar24 >> 0x1c | uVar24 << 0x24) ^
              (uVar24 >> 0x27 | uVar24 * 0x2000000)) +
              (uVar24 & uVar16 ^ uVar16 & uVar12 ^ uVar24 & uVar12) + lVar1;
      uVar15 = (param_2[2] & 0xff00ff00ff00ff00) >> 8 | (param_2[2] & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      uVar26 = uVar15 >> 0x20 | uVar15 << 0x20;
      uVar15 = (param_2[3] & 0xff00ff00ff00ff00) >> 8 | (param_2[3] & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      local_68 = uVar15 >> 0x20 | uVar15 << 0x20;
      lVar1 = uVar18 + uVar26 + (uVar11 & uVar13 ^ uVar17 & (uVar11 ^ 0xffffffffffffffff)) +
              ((uVar11 >> 0x12 | uVar11 << 0x2e) ^ (uVar11 >> 0xe | uVar11 << 0x32) ^
              (uVar11 >> 0x29 | uVar11 * 0x800000)) + -0x4a3f043013b2c4d1;
      uVar15 = lVar1 + uVar16;
      uVar2 = ((uVar3 >> 0x22 | uVar3 * 0x40000000) ^ (uVar3 >> 0x1c | uVar3 << 0x24) ^
              (uVar3 >> 0x27 | uVar3 * 0x2000000)) + ((uVar3 ^ uVar24) & uVar12 ^ uVar3 & uVar24) +
              lVar1;
      uVar14 = (param_2[4] & 0xff00ff00ff00ff00) >> 8 | (param_2[4] & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      local_70 = uVar14 >> 0x20 | uVar14 << 0x20;
      lVar1 = uVar17 + local_68 + (uVar15 & uVar11 ^ uVar13 & (uVar15 ^ 0xffffffffffffffff)) +
              ((uVar15 >> 0x12 | uVar15 << 0x2e) ^ (uVar15 >> 0xe | uVar15 << 0x32) ^
              (uVar15 >> 0x29 | uVar15 * 0x800000)) + -0x164a245a7e762444;
      uVar14 = lVar1 + uVar12;
      uVar10 = ((uVar2 >> 0x22 | uVar2 * 0x40000000) ^ (uVar2 >> 0x1c | uVar2 << 0x24) ^
               (uVar2 >> 0x27 | uVar2 * 0x2000000)) + ((uVar2 ^ uVar3) & uVar24 ^ uVar2 & uVar3) +
               lVar1;
      uVar23 = (param_2[5] & 0xff00ff00ff00ff00) >> 8 | (param_2[5] & 0xff00ff00ff00ff) << 8;
      uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
      local_78 = uVar23 >> 0x20 | uVar23 << 0x20;
      lVar1 = uVar13 + local_70 + (uVar14 & uVar15 ^ uVar11 & (uVar14 ^ 0xffffffffffffffff)) +
              ((uVar14 >> 0x12 | uVar14 << 0x2e) ^ (uVar14 >> 0xe | uVar14 << 0x32) ^
              (uVar14 >> 0x29 | uVar14 * 0x800000)) + 0x3956c25bf348b538;
      uVar24 = lVar1 + uVar24;
      uVar13 = ((uVar10 >> 0x22 | uVar10 * 0x40000000) ^ (uVar10 >> 0x1c | uVar10 << 0x24) ^
               (uVar10 >> 0x27 | uVar10 * 0x2000000)) + ((uVar10 ^ uVar2) & uVar3 ^ uVar10 & uVar2)
               + lVar1;
      uVar23 = (param_2[6] & 0xff00ff00ff00ff00) >> 8 | (param_2[6] & 0xff00ff00ff00ff) << 8;
      uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
      local_80 = uVar23 >> 0x20 | uVar23 << 0x20;
      lVar1 = uVar11 + local_78 + (uVar24 & uVar14 ^ uVar15 & (uVar24 ^ 0xffffffffffffffff)) +
              ((uVar24 >> 0x12 | uVar24 << 0x2e) ^ (uVar24 >> 0xe | uVar24 << 0x32) ^
              (uVar24 >> 0x29 | uVar24 * 0x800000)) + 0x59f111f1b605d019;
      uVar3 = lVar1 + uVar3;
      uVar11 = ((uVar13 >> 0x22 | uVar13 * 0x40000000) ^ (uVar13 >> 0x1c | uVar13 << 0x24) ^
               (uVar13 >> 0x27 | uVar13 * 0x2000000)) +
               ((uVar13 ^ uVar10) & uVar2 ^ uVar13 & uVar10) + lVar1;
      uVar23 = (param_2[7] & 0xff00ff00ff00ff00) >> 8 | (param_2[7] & 0xff00ff00ff00ff) << 8;
      uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
      local_88 = uVar23 >> 0x20 | uVar23 << 0x20;
      lVar1 = uVar15 + local_80 + (uVar3 & uVar24 ^ uVar14 & (uVar3 ^ 0xffffffffffffffff)) +
              ((uVar3 >> 0x12 | uVar3 << 0x2e) ^ (uVar3 >> 0xe | uVar3 << 0x32) ^
              (uVar3 >> 0x29 | uVar3 * 0x800000)) + -0x6dc07d5b50e6b065;
      uVar2 = lVar1 + uVar2;
      uVar15 = ((uVar11 >> 0x22 | uVar11 * 0x40000000) ^ (uVar11 >> 0x1c | uVar11 << 0x24) ^
               (uVar11 >> 0x27 | uVar11 * 0x2000000)) +
               ((uVar11 ^ uVar13) & uVar10 ^ uVar11 & uVar13) + lVar1;
      uVar23 = (param_2[8] & 0xff00ff00ff00ff00) >> 8 | (param_2[8] & 0xff00ff00ff00ff) << 8;
      uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
      local_90 = uVar23 >> 0x20 | uVar23 << 0x20;
      lVar1 = uVar14 + local_88 + (uVar2 & uVar3 ^ uVar24 & (uVar2 ^ 0xffffffffffffffff)) +
              ((uVar2 >> 0x12 | uVar2 << 0x2e) ^ (uVar2 >> 0xe | uVar2 << 0x32) ^
              (uVar2 >> 0x29 | uVar2 * 0x800000)) + -0x54e3a12a25927ee8;
      uVar10 = lVar1 + uVar10;
      uVar14 = ((uVar15 >> 0x22 | uVar15 * 0x40000000) ^ (uVar15 >> 0x1c | uVar15 << 0x24) ^
               (uVar15 >> 0x27 | uVar15 * 0x2000000)) +
               ((uVar15 ^ uVar11) & uVar13 ^ uVar15 & uVar11) + lVar1;
      uVar23 = (param_2[9] & 0xff00ff00ff00ff00) >> 8 | (param_2[9] & 0xff00ff00ff00ff) << 8;
      uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
      local_98 = uVar23 >> 0x20 | uVar23 << 0x20;
      lVar1 = uVar24 + local_90 + (uVar10 & uVar2 ^ uVar3 & (uVar10 ^ 0xffffffffffffffff)) +
              ((uVar10 >> 0x12 | uVar10 << 0x2e) ^ (uVar10 >> 0xe | uVar10 << 0x32) ^
              (uVar10 >> 0x29 | uVar10 * 0x800000)) + -0x27f855675cfcfdbe;
      uVar13 = lVar1 + uVar13;
      uVar24 = ((uVar14 >> 0x22 | uVar14 * 0x40000000) ^ (uVar14 >> 0x1c | uVar14 << 0x24) ^
               (uVar14 >> 0x27 | uVar14 * 0x2000000)) +
               ((uVar14 ^ uVar15) & uVar11 ^ uVar14 & uVar15) + lVar1;
      uVar23 = (param_2[10] & 0xff00ff00ff00ff00) >> 8 | (param_2[10] & 0xff00ff00ff00ff) << 8;
      uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
      local_a0 = uVar23 >> 0x20 | uVar23 << 0x20;
      lVar1 = uVar3 + local_98 + (uVar13 & uVar10 ^ uVar2 & (uVar13 ^ 0xffffffffffffffff)) +
              ((uVar13 >> 0x12 | uVar13 << 0x2e) ^ (uVar13 >> 0xe | uVar13 << 0x32) ^
              (uVar13 >> 0x29 | uVar13 * 0x800000)) + 0x12835b0145706fbe;
      uVar11 = lVar1 + uVar11;
      uVar3 = ((uVar24 >> 0x22 | uVar24 * 0x40000000) ^ (uVar24 >> 0x1c | uVar24 << 0x24) ^
              (uVar24 >> 0x27 | uVar24 * 0x2000000)) +
              ((uVar24 ^ uVar14) & uVar15 ^ uVar24 & uVar14) + lVar1;
      uVar23 = (param_2[0xb] & 0xff00ff00ff00ff00) >> 8 | (param_2[0xb] & 0xff00ff00ff00ff) << 8;
      uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar23 >> 0x20 | uVar23 << 0x20;
      lVar1 = uVar2 + local_a0 + (uVar11 & uVar13 ^ uVar10 & (uVar11 ^ 0xffffffffffffffff)) +
              ((uVar11 >> 0x12 | uVar11 << 0x2e) ^ (uVar11 >> 0xe | uVar11 << 0x32) ^
              (uVar11 >> 0x29 | uVar11 * 0x800000)) + 0x243185be4ee4b28c;
      uVar15 = lVar1 + uVar15;
      uVar2 = ((uVar3 >> 0x22 | uVar3 * 0x40000000) ^ (uVar3 >> 0x1c | uVar3 << 0x24) ^
              (uVar3 >> 0x27 | uVar3 * 0x2000000)) + ((uVar3 ^ uVar24) & uVar14 ^ uVar3 & uVar24) +
              lVar1;
      uVar23 = (param_2[0xc] & 0xff00ff00ff00ff00) >> 8 | (param_2[0xc] & 0xff00ff00ff00ff) << 8;
      uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar23 >> 0x20 | uVar23 << 0x20;
      lVar1 = uVar10 + uVar4 + (uVar15 & uVar11 ^ uVar13 & (uVar15 ^ 0xffffffffffffffff)) +
              ((uVar15 >> 0x12 | uVar15 << 0x2e) ^ (uVar15 >> 0xe | uVar15 << 0x32) ^
              (uVar15 >> 0x29 | uVar15 * 0x800000)) + 0x550c7dc3d5ffb4e2;
      uVar14 = lVar1 + uVar14;
      uVar10 = ((uVar2 >> 0x22 | uVar2 * 0x40000000) ^ (uVar2 >> 0x1c | uVar2 << 0x24) ^
               (uVar2 >> 0x27 | uVar2 * 0x2000000)) + ((uVar2 ^ uVar3) & uVar24 ^ uVar2 & uVar3) +
               lVar1;
      lVar1 = uVar13 + uVar6 + (uVar14 & uVar15 ^ uVar11 & (uVar14 ^ 0xffffffffffffffff)) +
              ((uVar14 >> 0x12 | uVar14 << 0x2e) ^ (uVar14 >> 0xe | uVar14 << 0x32) ^
              (uVar14 >> 0x29 | uVar14 * 0x800000)) + 0x72be5d74f27b896f;
      uVar24 = lVar1 + uVar24;
      uVar13 = (param_2[0xd] & 0xff00ff00ff00ff00) >> 8 | (param_2[0xd] & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar13 >> 0x20 | uVar13 << 0x20;
      uVar23 = ((uVar10 >> 0x22 | uVar10 * 0x40000000) ^ (uVar10 >> 0x1c | uVar10 << 0x24) ^
               (uVar10 >> 0x27 | uVar10 * 0x2000000)) + ((uVar10 ^ uVar2) & uVar3 ^ uVar10 & uVar2)
               + lVar1;
      uVar13 = (param_2[0xe] & 0xff00ff00ff00ff00) >> 8 | (param_2[0xe] & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar20 = uVar13 >> 0x20 | uVar13 << 0x20;
      lVar1 = uVar11 + uVar8 + (uVar24 & uVar14 ^ uVar15 & (uVar24 ^ 0xffffffffffffffff)) +
              ((uVar24 >> 0x12 | uVar24 << 0x2e) ^ (uVar24 >> 0xe | uVar24 << 0x32) ^
              (uVar24 >> 0x29 | uVar24 * 0x800000)) + -0x7f214e01c4e9694f;
      uVar3 = lVar1 + uVar3;
      uVar11 = ((uVar23 >> 0x22 | uVar23 * 0x40000000) ^ (uVar23 >> 0x1c | uVar23 << 0x24) ^
               (uVar23 >> 0x27 | uVar23 * 0x2000000)) +
               ((uVar23 ^ uVar10) & uVar2 ^ uVar23 & uVar10) + lVar1;
      uVar13 = (param_2[0xf] & 0xff00ff00ff00ff00) >> 8 | (param_2[0xf] & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar21 = uVar13 >> 0x20 | uVar13 << 0x20;
      lVar1 = uVar15 + uVar20 + (uVar3 & uVar24 ^ uVar14 & (uVar3 ^ 0xffffffffffffffff)) +
              ((uVar3 >> 0x12 | uVar3 << 0x2e) ^ (uVar3 >> 0xe | uVar3 << 0x32) ^
              (uVar3 >> 0x29 | uVar3 * 0x800000)) + -0x6423f958da38edcb;
      uVar2 = lVar1 + uVar2;
      uVar15 = ((uVar11 >> 0x22 | uVar11 * 0x40000000) ^ (uVar11 >> 0x1c | uVar11 << 0x24) ^
               (uVar11 >> 0x27 | uVar11 * 0x2000000)) +
               ((uVar11 ^ uVar23) & uVar10 ^ uVar11 & uVar23) + lVar1;
      lVar1 = uVar14 + uVar21 + (uVar2 & uVar3 ^ uVar24 & (uVar2 ^ 0xffffffffffffffff)) +
              ((uVar2 >> 0x12 | uVar2 << 0x2e) ^ (uVar2 >> 0xe | uVar2 << 0x32) ^
              (uVar2 >> 0x29 | uVar2 * 0x800000)) + -0x3e640e8b3096d96c;
      uVar10 = lVar1 + uVar10;
      uVar14 = ((uVar15 >> 0x22 | uVar15 * 0x40000000) ^ (uVar15 >> 0x1c | uVar15 << 0x24) ^
               (uVar15 >> 0x27 | uVar15 * 0x2000000)) +
               (uVar15 & (uVar11 ^ uVar23) ^ uVar11 & uVar23) + lVar1;
      uVar13 = 0x10;
      plVar22 = &DAT_01e3dfe8;
      do {
        uVar25 = local_98 + uVar25 +
                 ((local_a8 >> 1 | local_a8 << 0x3f) ^ local_a8 >> 7 ^
                 (local_a8 >> 8 | local_a8 << 0x38)) +
                 ((uVar20 >> 0x13 | uVar20 << 0x2d) ^ uVar20 >> 6 ^ (uVar20 >> 0x3d | uVar20 << 3));
        lVar1 = (uVar10 & uVar2 ^ uVar3 & (uVar10 ^ 0xffffffffffffffff)) + uVar24 +
                ((uVar10 >> 0x12 | uVar10 << 0x2e) ^ (uVar10 >> 0xe | uVar10 << 0x32) ^
                (uVar10 >> 0x29 | uVar10 << 0x17)) + plVar22[-0xf] + uVar25;
        uVar23 = lVar1 + uVar23;
        uVar24 = ((uVar14 >> 0x22 | uVar14 << 0x1e) ^ (uVar14 >> 0x1c | uVar14 << 0x24) ^
                 (uVar14 >> 0x27 | uVar14 << 0x19)) + ((uVar14 ^ uVar15) & uVar11 ^ uVar14 & uVar15)
                 + lVar1;
        local_a8 = local_a0 + local_a8 +
                   ((uVar26 >> 1 | uVar26 << 0x3f) ^ uVar26 >> 7 ^ (uVar26 >> 8 | uVar26 << 0x38)) +
                   ((uVar21 >> 0x13 | uVar21 << 0x2d) ^ uVar21 >> 6 ^ (uVar21 >> 0x3d | uVar21 << 3)
                   );
        lVar1 = (uVar23 & uVar10 ^ uVar2 & (uVar23 ^ 0xffffffffffffffff)) + uVar3 +
                ((uVar23 >> 0x12 | uVar23 << 0x2e) ^ (uVar23 >> 0xe | uVar23 << 0x32) ^
                (uVar23 >> 0x29 | uVar23 * 0x800000)) + plVar22[-0xe] + local_a8;
        uVar11 = lVar1 + uVar11;
        uVar3 = ((uVar24 >> 0x22 | uVar24 * 0x40000000) ^ (uVar24 >> 0x1c | uVar24 << 0x24) ^
                (uVar24 >> 0x27 | uVar24 * 0x2000000)) +
                ((uVar24 ^ uVar14) & uVar15 ^ uVar24 & uVar14) + lVar1;
        uVar26 = uVar4 + uVar26 +
                 ((local_68 >> 1 | local_68 << 0x3f) ^ local_68 >> 7 ^
                 (local_68 >> 8 | local_68 << 0x38)) +
                 ((uVar25 >> 0x13 | uVar25 << 0x2d) ^ uVar25 >> 6 ^ (uVar25 >> 0x3d | uVar25 * 8));
        lVar1 = (uVar11 & uVar23 ^ uVar10 & (uVar11 ^ 0xffffffffffffffff)) + uVar2 +
                ((uVar11 >> 0x12 | uVar11 << 0x2e) ^ (uVar11 >> 0xe | uVar11 << 0x32) ^
                (uVar11 >> 0x29 | uVar11 * 0x800000)) + plVar22[-0xd] + uVar26;
        uVar15 = lVar1 + uVar15;
        local_68 = uVar6 + local_68 +
                   ((local_70 >> 1 | local_70 << 0x3f) ^ local_70 >> 7 ^
                   (local_70 >> 8 | local_70 << 0x38)) +
                   ((local_a8 >> 0x13 | local_a8 << 0x2d) ^ local_a8 >> 6 ^
                   (local_a8 >> 0x3d | local_a8 * 8));
        uVar2 = ((uVar3 >> 0x22 | uVar3 * 0x40000000) ^ (uVar3 >> 0x1c | uVar3 << 0x24) ^
                (uVar3 >> 0x27 | uVar3 * 0x2000000)) + ((uVar3 ^ uVar24) & uVar14 ^ uVar3 & uVar24)
                + lVar1;
        lVar1 = (uVar15 & uVar11 ^ uVar23 & (uVar15 ^ 0xffffffffffffffff)) + uVar10 +
                ((uVar15 >> 0x12 | uVar15 << 0x2e) ^ (uVar15 >> 0xe | uVar15 << 0x32) ^
                (uVar15 >> 0x29 | uVar15 * 0x800000)) + plVar22[-0xc] + local_68;
        uVar14 = lVar1 + uVar14;
        local_70 = uVar8 + local_70 +
                   ((local_78 >> 1 | local_78 << 0x3f) ^ local_78 >> 7 ^
                   (local_78 >> 8 | local_78 << 0x38)) +
                   ((uVar26 >> 0x13 | uVar26 << 0x2d) ^ uVar26 >> 6 ^ (uVar26 >> 0x3d | uVar26 * 8))
        ;
        uVar10 = ((uVar2 >> 0x22 | uVar2 * 0x40000000) ^ (uVar2 >> 0x1c | uVar2 << 0x24) ^
                 (uVar2 >> 0x27 | uVar2 * 0x2000000)) + ((uVar2 ^ uVar3) & uVar24 ^ uVar2 & uVar3) +
                 lVar1;
        lVar1 = (uVar14 & uVar15 ^ uVar11 & (uVar14 ^ 0xffffffffffffffff)) + uVar23 +
                ((uVar14 >> 0x12 | uVar14 << 0x2e) ^ (uVar14 >> 0xe | uVar14 << 0x32) ^
                (uVar14 >> 0x29 | uVar14 * 0x800000)) + plVar22[-0xb] + local_70;
        uVar24 = lVar1 + uVar24;
        uVar23 = ((uVar10 >> 0x22 | uVar10 * 0x40000000) ^ (uVar10 >> 0x1c | uVar10 << 0x24) ^
                 (uVar10 >> 0x27 | uVar10 * 0x2000000)) +
                 ((uVar10 ^ uVar2) & uVar3 ^ uVar10 & uVar2) + lVar1;
        local_78 = uVar20 + local_78 +
                   ((local_80 >> 1 | local_80 << 0x3f) ^ local_80 >> 7 ^
                   (local_80 >> 8 | local_80 << 0x38)) +
                   ((local_68 >> 0x13 | local_68 << 0x2d) ^ local_68 >> 6 ^
                   (local_68 >> 0x3d | local_68 * 8));
        lVar1 = (uVar24 & uVar14 ^ uVar15 & (uVar24 ^ 0xffffffffffffffff)) + uVar11 +
                ((uVar24 >> 0x12 | uVar24 << 0x2e) ^ (uVar24 >> 0xe | uVar24 << 0x32) ^
                (uVar24 >> 0x29 | uVar24 * 0x800000)) + plVar22[-10] + local_78;
        uVar3 = lVar1 + uVar3;
        uVar11 = ((uVar23 >> 0x22 | uVar23 * 0x40000000) ^ (uVar23 >> 0x1c | uVar23 << 0x24) ^
                 (uVar23 >> 0x27 | uVar23 * 0x2000000)) +
                 ((uVar23 ^ uVar10) & uVar2 ^ uVar23 & uVar10) + lVar1;
        local_80 = uVar21 + local_80 +
                   ((local_88 >> 1 | local_88 << 0x3f) ^ local_88 >> 7 ^
                   (local_88 >> 8 | local_88 << 0x38)) +
                   ((local_70 >> 0x13 | local_70 << 0x2d) ^ local_70 >> 6 ^
                   (local_70 >> 0x3d | local_70 * 8));
        lVar1 = (uVar3 & uVar24 ^ uVar14 & (uVar3 ^ 0xffffffffffffffff)) + uVar15 +
                ((uVar3 >> 0x12 | uVar3 << 0x2e) ^ (uVar3 >> 0xe | uVar3 << 0x32) ^
                (uVar3 >> 0x29 | uVar3 * 0x800000)) + plVar22[-9] + local_80;
        uVar2 = lVar1 + uVar2;
        local_88 = uVar25 + local_88 +
                   ((local_90 >> 1 | local_90 << 0x3f) ^ local_90 >> 7 ^
                   (local_90 >> 8 | local_90 << 0x38)) +
                   ((local_78 >> 0x13 | local_78 << 0x2d) ^ local_78 >> 6 ^
                   (local_78 >> 0x3d | local_78 * 8));
        uVar15 = ((uVar11 >> 0x22 | uVar11 * 0x40000000) ^ (uVar11 >> 0x1c | uVar11 << 0x24) ^
                 (uVar11 >> 0x27 | uVar11 * 0x2000000)) +
                 ((uVar11 ^ uVar23) & uVar10 ^ uVar11 & uVar23) + lVar1;
        lVar1 = (uVar2 & uVar3 ^ uVar24 & (uVar2 ^ 0xffffffffffffffff)) + uVar14 +
                ((uVar2 >> 0x12 | uVar2 << 0x2e) ^ (uVar2 >> 0xe | uVar2 << 0x32) ^
                (uVar2 >> 0x29 | uVar2 * 0x800000)) + plVar22[-8] + local_88;
        uVar10 = lVar1 + uVar10;
        uVar14 = ((uVar15 >> 0x22 | uVar15 * 0x40000000) ^ (uVar15 >> 0x1c | uVar15 << 0x24) ^
                 (uVar15 >> 0x27 | uVar15 * 0x2000000)) +
                 ((uVar15 ^ uVar11) & uVar23 ^ uVar15 & uVar11) + lVar1;
        local_90 = local_a8 + local_90 +
                   ((local_98 >> 1 | local_98 << 0x3f) ^ local_98 >> 7 ^
                   (local_98 >> 8 | local_98 << 0x38)) +
                   ((local_80 >> 0x13 | local_80 << 0x2d) ^ local_80 >> 6 ^
                   (local_80 >> 0x3d | local_80 * 8));
        lVar1 = (uVar10 & uVar2 ^ uVar3 & (uVar10 ^ 0xffffffffffffffff)) + uVar24 +
                ((uVar10 >> 0x12 | uVar10 << 0x2e) ^ (uVar10 >> 0xe | uVar10 << 0x32) ^
                (uVar10 >> 0x29 | uVar10 * 0x800000)) + plVar22[-7] + local_90;
        uVar23 = lVar1 + uVar23;
        local_98 = uVar26 + local_98 +
                   ((local_a0 >> 1 | local_a0 << 0x3f) ^ local_a0 >> 7 ^
                   (local_a0 >> 8 | local_a0 << 0x38)) +
                   ((local_88 >> 0x13 | local_88 << 0x2d) ^ local_88 >> 6 ^
                   (local_88 >> 0x3d | local_88 * 8));
        uVar24 = ((uVar14 >> 0x22 | uVar14 * 0x40000000) ^ (uVar14 >> 0x1c | uVar14 << 0x24) ^
                 (uVar14 >> 0x27 | uVar14 * 0x2000000)) +
                 ((uVar14 ^ uVar15) & uVar11 ^ uVar14 & uVar15) + lVar1;
        lVar1 = (uVar23 & uVar10 ^ uVar2 & (uVar23 ^ 0xffffffffffffffff)) + uVar3 +
                ((uVar23 >> 0x12 | uVar23 << 0x2e) ^ (uVar23 >> 0xe | uVar23 << 0x32) ^
                (uVar23 >> 0x29 | uVar23 * 0x800000)) + plVar22[-6] + local_98;
        uVar11 = lVar1 + uVar11;
        local_a0 = local_68 + local_a0 +
                   ((uVar4 >> 1 | uVar4 << 0x3f) ^ uVar4 >> 7 ^ (uVar4 >> 8 | uVar4 << 0x38)) +
                   ((local_90 >> 0x13 | local_90 << 0x2d) ^ local_90 >> 6 ^
                   (local_90 >> 0x3d | local_90 * 8));
        uVar3 = ((uVar24 >> 0x22 | uVar24 * 0x40000000) ^ (uVar24 >> 0x1c | uVar24 << 0x24) ^
                (uVar24 >> 0x27 | uVar24 * 0x2000000)) +
                ((uVar24 ^ uVar14) & uVar15 ^ uVar24 & uVar14) + lVar1;
        lVar1 = (uVar11 & uVar23 ^ uVar10 & (uVar11 ^ 0xffffffffffffffff)) + uVar2 +
                ((uVar11 >> 0x12 | uVar11 << 0x2e) ^ (uVar11 >> 0xe | uVar11 << 0x32) ^
                (uVar11 >> 0x29 | uVar11 * 0x800000)) + plVar22[-5] + local_a0;
        uVar15 = lVar1 + uVar15;
        uVar2 = ((uVar3 >> 0x22 | uVar3 * 0x40000000) ^ (uVar3 >> 0x1c | uVar3 << 0x24) ^
                (uVar3 >> 0x27 | uVar3 * 0x2000000)) + ((uVar3 ^ uVar24) & uVar14 ^ uVar3 & uVar24)
                + lVar1;
        uVar4 = local_70 + uVar4 +
                ((uVar6 >> 1 | uVar6 << 0x3f) ^ uVar6 >> 7 ^ (uVar6 >> 8 | uVar6 << 0x38)) +
                ((local_98 >> 0x13 | local_98 << 0x2d) ^ local_98 >> 6 ^
                (local_98 >> 0x3d | local_98 * 8));
        lVar1 = (uVar15 & uVar11 ^ uVar23 & (uVar15 ^ 0xffffffffffffffff)) + uVar10 +
                ((uVar15 >> 0x12 | uVar15 << 0x2e) ^ (uVar15 >> 0xe | uVar15 << 0x32) ^
                (uVar15 >> 0x29 | uVar15 * 0x800000)) + plVar22[-4] + uVar4;
        uVar6 = local_78 + uVar6 +
                ((uVar8 >> 1 | uVar8 << 0x3f) ^ uVar8 >> 7 ^ (uVar8 >> 8 | uVar8 << 0x38)) +
                ((local_a0 >> 0x13 | local_a0 << 0x2d) ^ local_a0 >> 6 ^
                (local_a0 >> 0x3d | local_a0 * 8));
        uVar14 = lVar1 + uVar14;
        uVar10 = ((uVar2 >> 0x22 | uVar2 * 0x40000000) ^ (uVar2 >> 0x1c | uVar2 << 0x24) ^
                 (uVar2 >> 0x27 | uVar2 * 0x2000000)) + ((uVar2 ^ uVar3) & uVar24 ^ uVar2 & uVar3) +
                 lVar1;
        lVar1 = (uVar14 & uVar15 ^ uVar11 & (uVar14 ^ 0xffffffffffffffff)) + uVar23 +
                ((uVar14 >> 0x12 | uVar14 << 0x2e) ^ (uVar14 >> 0xe | uVar14 << 0x32) ^
                (uVar14 >> 0x29 | uVar14 * 0x800000)) + plVar22[-3] + uVar6;
        uVar24 = lVar1 + uVar24;
        uVar8 = local_80 + uVar8 +
                ((uVar20 >> 1 | uVar20 << 0x3f) ^ uVar20 >> 7 ^ (uVar20 >> 8 | uVar20 << 0x38)) +
                ((uVar4 >> 0x13 | uVar4 << 0x2d) ^ uVar4 >> 6 ^ (uVar4 >> 0x3d | uVar4 * 8));
        uVar23 = ((uVar10 >> 0x22 | uVar10 * 0x40000000) ^ (uVar10 >> 0x1c | uVar10 << 0x24) ^
                 (uVar10 >> 0x27 | uVar10 * 0x2000000)) +
                 ((uVar10 ^ uVar2) & uVar3 ^ uVar10 & uVar2) + lVar1;
        lVar1 = (uVar24 & uVar14 ^ uVar15 & (uVar24 ^ 0xffffffffffffffff)) + uVar11 +
                ((uVar24 >> 0x12 | uVar24 << 0x2e) ^ (uVar24 >> 0xe | uVar24 << 0x32) ^
                (uVar24 >> 0x29 | uVar24 * 0x800000)) + plVar22[-2] + uVar8;
        uVar3 = lVar1 + uVar3;
        uVar20 = local_88 + uVar20 +
                 ((uVar21 >> 1 | uVar21 << 0x3f) ^ uVar21 >> 7 ^ (uVar21 >> 8 | uVar21 << 0x38)) +
                 ((uVar6 >> 0x13 | uVar6 << 0x2d) ^ uVar6 >> 6 ^ (uVar6 >> 0x3d | uVar6 * 8));
        uVar11 = ((uVar23 >> 0x22 | uVar23 * 0x40000000) ^ (uVar23 >> 0x1c | uVar23 << 0x24) ^
                 (uVar23 >> 0x27 | uVar23 * 0x2000000)) +
                 ((uVar23 ^ uVar10) & uVar2 ^ uVar23 & uVar10) + lVar1;
        lVar1 = (uVar3 & uVar24 ^ uVar14 & (uVar3 ^ 0xffffffffffffffff)) + uVar15 +
                ((uVar3 >> 0x12 | uVar3 << 0x2e) ^ (uVar3 >> 0xe | uVar3 << 0x32) ^
                (uVar3 >> 0x29 | uVar3 * 0x800000)) + plVar22[-1] + uVar20;
        uVar2 = lVar1 + uVar2;
        uVar21 = local_90 + uVar21 +
                 ((uVar25 >> 1 | uVar25 << 0x3f) ^ uVar25 >> 7 ^ (uVar25 >> 8 | uVar25 << 0x38)) +
                 ((uVar8 >> 0x13 | uVar8 << 0x2d) ^ uVar8 >> 6 ^ (uVar8 >> 0x3d | uVar8 * 8));
        uVar15 = ((uVar11 >> 0x22 | uVar11 * 0x40000000) ^ (uVar11 >> 0x1c | uVar11 << 0x24) ^
                 (uVar11 >> 0x27 | uVar11 * 0x2000000)) +
                 ((uVar11 ^ uVar23) & uVar10 ^ uVar11 & uVar23) + lVar1;
        uVar13 = uVar13 + 0x10;
        lVar1 = (uVar2 & uVar3 ^ uVar24 & (uVar2 ^ 0xffffffffffffffff)) + uVar14 +
                ((uVar2 >> 0x12 | uVar2 << 0x2e) ^ (uVar2 >> 0xe | uVar2 << 0x32) ^
                (uVar2 >> 0x29 | uVar2 * 0x800000)) + *plVar22 + uVar21;
        uVar10 = lVar1 + uVar10;
        uVar14 = ((uVar15 >> 0x22 | uVar15 * 0x40000000) ^ (uVar15 >> 0x1c | uVar15 << 0x24) ^
                 (uVar15 >> 0x27 | uVar15 * 0x2000000)) +
                 (uVar15 & (uVar11 ^ uVar23) ^ uVar11 & uVar23) + lVar1;
        plVar22 = plVar22 + 0x10;
      } while (uVar13 < 0x50);
      uVar12 = uVar14 + uVar12;
      uVar16 = uVar15 + uVar16;
      uVar9 = uVar11 + uVar9;
      uVar5 = uVar23 + uVar5;
      uVar17 = uVar10 + uVar17;
      uVar18 = uVar2 + uVar18;
      uVar7 = uVar3 + uVar7;
      uVar19 = uVar24 + uVar19;
      *param_1 = uVar12;
      param_1[1] = uVar16;
      param_1[2] = uVar9;
      param_1[3] = uVar5;
      param_1[4] = uVar17;
      param_1[5] = uVar18;
      param_1[6] = uVar7;
      param_1[7] = uVar19;
      param_3 = param_3 + -1;
      param_2 = param_2 + 0x10;
    } while (param_3 != 0);
  }
  return;
}

