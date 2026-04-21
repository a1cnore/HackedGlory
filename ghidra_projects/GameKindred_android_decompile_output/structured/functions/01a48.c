// functions/01a48 — 1 functions
#include "libGameKindred.h"




void FUN_01a48178(uint *param_1,uint *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  ulong uVar34;
  uint local_a0 [4];
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  ulong uVar30;
  
  if (param_3 != 0) {
    uVar26 = *param_1;
    uVar10 = param_1[1];
    uVar13 = param_1[4];
    uVar11 = param_1[5];
    uVar25 = param_1[6];
    uVar22 = param_1[7];
    uVar16 = param_1[2];
    uVar23 = param_1[3];
    do {
      uVar14 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
      local_a0[0] = uVar14 >> 0x10 | uVar14 << 0x10;
      iVar1 = uVar22 + ((uVar13 >> 6 | uVar13 << 0x1a) ^ (uVar13 >> 0xb | uVar13 << 0x15) ^
                       (uVar13 >> 0x19 | uVar13 << 7)) +
              (uVar25 & (uVar13 ^ 0xffffffff) ^ uVar11 & uVar13) + local_a0[0] + 0x428a2f98;
      uVar14 = iVar1 + uVar23;
      uVar15 = ((uVar16 ^ uVar10) & uVar26 ^ uVar16 & uVar10) +
               ((uVar26 >> 2 | uVar26 << 0x1e) ^ (uVar26 >> 0xd | uVar26 << 0x13) ^
               (uVar26 >> 0x16 | uVar26 << 10)) + iVar1;
      uVar17 = (param_2[1] & 0xff00ff00) >> 8 | (param_2[1] & 0xff00ff) << 8;
      local_a0[1] = uVar17 >> 0x10 | uVar17 << 0x10;
      iVar1 = uVar25 + local_a0[1] + (uVar14 & uVar13 ^ uVar11 & (uVar14 ^ 0xffffffff)) +
              ((uVar14 >> 6 | uVar14 * 0x4000000) ^ (uVar14 >> 0xb | uVar14 * 0x200000) ^
              (uVar14 >> 0x19 | uVar14 * 0x80)) + 0x71374491;
      uVar17 = iVar1 + uVar16;
      uVar28 = ((uVar15 >> 2 | uVar15 * 0x40000000) ^ (uVar15 >> 0xd | uVar15 * 0x80000) ^
               (uVar15 >> 0x16 | uVar15 * 0x400)) +
               (uVar15 & uVar10 ^ uVar10 & uVar26 ^ uVar15 & uVar26) + iVar1;
      uVar18 = (param_2[2] & 0xff00ff00) >> 8 | (param_2[2] & 0xff00ff) << 8;
      local_a0[2] = uVar18 >> 0x10 | uVar18 << 0x10;
      iVar1 = uVar11 + local_a0[2] + (uVar17 & uVar14 ^ uVar13 & (uVar17 ^ 0xffffffff)) +
              ((uVar17 >> 6 | uVar17 * 0x4000000) ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^
              (uVar17 >> 0x19 | uVar17 * 0x80)) + -0x4a3f0431;
      uVar18 = iVar1 + uVar10;
      uVar32 = ((uVar28 >> 2 | uVar28 * 0x40000000) ^ (uVar28 >> 0xd | uVar28 * 0x80000) ^
               (uVar28 >> 0x16 | uVar28 * 0x400)) + ((uVar28 ^ uVar15) & uVar26 ^ uVar28 & uVar15) +
               iVar1;
      uVar27 = (param_2[3] & 0xff00ff00) >> 8 | (param_2[3] & 0xff00ff) << 8;
      local_a0[3] = uVar27 >> 0x10 | uVar27 << 0x10;
      iVar1 = uVar13 + local_a0[3] + (uVar18 & uVar17 ^ uVar14 & (uVar18 ^ 0xffffffff)) +
              ((uVar18 >> 6 | uVar18 * 0x4000000) ^ (uVar18 >> 0xb | uVar18 * 0x200000) ^
              (uVar18 >> 0x19 | uVar18 * 0x80)) + -0x164a245b;
      uVar27 = iVar1 + uVar26;
      uVar31 = ((uVar32 >> 2 | uVar32 * 0x40000000) ^ (uVar32 >> 0xd | uVar32 * 0x80000) ^
               (uVar32 >> 0x16 | uVar32 * 0x400)) + ((uVar32 ^ uVar28) & uVar15 ^ uVar32 & uVar28) +
               iVar1;
      uVar9 = (param_2[4] & 0xff00ff00) >> 8 | (param_2[4] & 0xff00ff) << 8;
      local_90 = uVar9 >> 0x10 | uVar9 << 0x10;
      iVar1 = uVar14 + local_90 + (uVar27 & uVar18 ^ uVar17 & (uVar27 ^ 0xffffffff)) +
              ((uVar27 >> 6 | uVar27 * 0x4000000) ^ (uVar27 >> 0xb | uVar27 * 0x200000) ^
              (uVar27 >> 0x19 | uVar27 * 0x80)) + 0x3956c25b;
      uVar15 = iVar1 + uVar15;
      uVar14 = ((uVar31 >> 2 | uVar31 * 0x40000000) ^ (uVar31 >> 0xd | uVar31 * 0x80000) ^
               (uVar31 >> 0x16 | uVar31 * 0x400)) + ((uVar31 ^ uVar32) & uVar28 ^ uVar31 & uVar32) +
               iVar1;
      uVar9 = (param_2[5] & 0xff00ff00) >> 8 | (param_2[5] & 0xff00ff) << 8;
      local_8c = uVar9 >> 0x10 | uVar9 << 0x10;
      iVar1 = uVar17 + local_8c + (uVar15 & uVar27 ^ uVar18 & (uVar15 ^ 0xffffffff)) +
              ((uVar15 >> 6 | uVar15 * 0x4000000) ^ (uVar15 >> 0xb | uVar15 * 0x200000) ^
              (uVar15 >> 0x19 | uVar15 * 0x80)) + 0x59f111f1;
      uVar28 = iVar1 + uVar28;
      uVar17 = ((uVar14 >> 2 | uVar14 * 0x40000000) ^ (uVar14 >> 0xd | uVar14 * 0x80000) ^
               (uVar14 >> 0x16 | uVar14 * 0x400)) + ((uVar14 ^ uVar31) & uVar32 ^ uVar14 & uVar31) +
               iVar1;
      uVar9 = (param_2[6] & 0xff00ff00) >> 8 | (param_2[6] & 0xff00ff) << 8;
      local_88 = uVar9 >> 0x10 | uVar9 << 0x10;
      iVar1 = local_88 + uVar18 + (uVar28 & uVar15 ^ uVar27 & (uVar28 ^ 0xffffffff)) +
              ((uVar28 >> 6 | uVar28 * 0x4000000) ^ (uVar28 >> 0xb | uVar28 * 0x200000) ^
              (uVar28 >> 0x19 | uVar28 * 0x80)) + -0x6dc07d5c;
      uVar32 = iVar1 + uVar32;
      uVar18 = ((uVar17 >> 2 | uVar17 * 0x40000000) ^ (uVar17 >> 0xd | uVar17 * 0x80000) ^
               (uVar17 >> 0x16 | uVar17 * 0x400)) + ((uVar17 ^ uVar14) & uVar31 ^ uVar17 & uVar14) +
               iVar1;
      uVar9 = (param_2[7] & 0xff00ff00) >> 8 | (param_2[7] & 0xff00ff) << 8;
      local_84 = uVar9 >> 0x10 | uVar9 << 0x10;
      iVar1 = local_84 + uVar27 + (uVar32 & uVar28 ^ uVar15 & (uVar32 ^ 0xffffffff)) +
              ((uVar32 >> 6 | uVar32 * 0x4000000) ^ (uVar32 >> 0xb | uVar32 * 0x200000) ^
              (uVar32 >> 0x19 | uVar32 * 0x80)) + -0x54e3a12b;
      uVar31 = iVar1 + uVar31;
      uVar27 = ((uVar18 >> 2 | uVar18 * 0x40000000) ^ (uVar18 >> 0xd | uVar18 * 0x80000) ^
               (uVar18 >> 0x16 | uVar18 * 0x400)) + ((uVar18 ^ uVar17) & uVar14 ^ uVar18 & uVar17) +
               iVar1;
      uVar9 = (param_2[8] & 0xff00ff00) >> 8 | (param_2[8] & 0xff00ff) << 8;
      local_80 = uVar9 >> 0x10 | uVar9 << 0x10;
      iVar1 = local_80 + uVar15 + (uVar31 & uVar32 ^ uVar28 & (uVar31 ^ 0xffffffff)) +
              ((uVar31 >> 6 | uVar31 * 0x4000000) ^ (uVar31 >> 0xb | uVar31 * 0x200000) ^
              (uVar31 >> 0x19 | uVar31 * 0x80)) + -0x27f85568;
      uVar14 = iVar1 + uVar14;
      uVar15 = ((uVar27 >> 2 | uVar27 * 0x40000000) ^ (uVar27 >> 0xd | uVar27 * 0x80000) ^
               (uVar27 >> 0x16 | uVar27 * 0x400)) + ((uVar27 ^ uVar18) & uVar17 ^ uVar27 & uVar18) +
               iVar1;
      uVar9 = (param_2[9] & 0xff00ff00) >> 8 | (param_2[9] & 0xff00ff) << 8;
      local_7c = uVar9 >> 0x10 | uVar9 << 0x10;
      iVar1 = local_7c + uVar28 + (uVar14 & uVar31 ^ uVar32 & (uVar14 ^ 0xffffffff)) +
              ((uVar14 >> 6 | uVar14 * 0x4000000) ^ (uVar14 >> 0xb | uVar14 * 0x200000) ^
              (uVar14 >> 0x19 | uVar14 * 0x80)) + 0x12835b01;
      uVar17 = iVar1 + uVar17;
      uVar28 = ((uVar15 >> 2 | uVar15 * 0x40000000) ^ (uVar15 >> 0xd | uVar15 * 0x80000) ^
               (uVar15 >> 0x16 | uVar15 * 0x400)) + ((uVar15 ^ uVar27) & uVar18 ^ uVar15 & uVar27) +
               iVar1;
      uVar9 = (param_2[10] & 0xff00ff00) >> 8 | (param_2[10] & 0xff00ff) << 8;
      local_78 = uVar9 >> 0x10 | uVar9 << 0x10;
      iVar1 = local_78 + uVar32 + (uVar17 & uVar14 ^ uVar31 & (uVar17 ^ 0xffffffff)) +
              ((uVar17 >> 6 | uVar17 * 0x4000000) ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^
              (uVar17 >> 0x19 | uVar17 * 0x80)) + 0x243185be;
      uVar18 = iVar1 + uVar18;
      uVar32 = ((uVar28 >> 2 | uVar28 * 0x40000000) ^ (uVar28 >> 0xd | uVar28 * 0x80000) ^
               (uVar28 >> 0x16 | uVar28 * 0x400)) + ((uVar28 ^ uVar15) & uVar27 ^ uVar28 & uVar15) +
               iVar1;
      uVar9 = (param_2[0xb] & 0xff00ff00) >> 8 | (param_2[0xb] & 0xff00ff) << 8;
      local_74 = uVar9 >> 0x10 | uVar9 << 0x10;
      iVar1 = local_74 + uVar31 + (uVar18 & uVar17 ^ uVar14 & (uVar18 ^ 0xffffffff)) +
              ((uVar18 >> 6 | uVar18 * 0x4000000) ^ (uVar18 >> 0xb | uVar18 * 0x200000) ^
              (uVar18 >> 0x19 | uVar18 * 0x80)) + 0x550c7dc3;
      uVar27 = iVar1 + uVar27;
      uVar31 = ((uVar32 >> 2 | uVar32 * 0x40000000) ^ (uVar32 >> 0xd | uVar32 * 0x80000) ^
               (uVar32 >> 0x16 | uVar32 * 0x400)) + ((uVar32 ^ uVar28) & uVar15 ^ uVar32 & uVar28) +
               iVar1;
      uVar9 = (param_2[0xc] & 0xff00ff00) >> 8 | (param_2[0xc] & 0xff00ff) << 8;
      local_70 = uVar9 >> 0x10 | uVar9 << 0x10;
      iVar1 = local_70 + uVar14 + (uVar27 & uVar18 ^ uVar17 & (uVar27 ^ 0xffffffff)) +
              ((uVar27 >> 6 | uVar27 * 0x4000000) ^ (uVar27 >> 0xb | uVar27 * 0x200000) ^
              (uVar27 >> 0x19 | uVar27 * 0x80)) + 0x72be5d74;
      uVar15 = iVar1 + uVar15;
      uVar14 = ((uVar31 >> 2 | uVar31 * 0x40000000) ^ (uVar31 >> 0xd | uVar31 * 0x80000) ^
               (uVar31 >> 0x16 | uVar31 * 0x400)) + ((uVar31 ^ uVar32) & uVar28 ^ uVar31 & uVar32) +
               iVar1;
      uVar9 = (param_2[0xd] & 0xff00ff00) >> 8 | (param_2[0xd] & 0xff00ff) << 8;
      local_6c = uVar9 >> 0x10 | uVar9 << 0x10;
      iVar1 = local_6c + uVar17 + (uVar15 & uVar27 ^ uVar18 & (uVar15 ^ 0xffffffff)) +
              ((uVar15 >> 6 | uVar15 * 0x4000000) ^ (uVar15 >> 0xb | uVar15 * 0x200000) ^
              (uVar15 >> 0x19 | uVar15 * 0x80)) + -0x7f214e02;
      uVar28 = iVar1 + uVar28;
      uVar17 = ((uVar14 >> 2 | uVar14 * 0x40000000) ^ (uVar14 >> 0xd | uVar14 * 0x80000) ^
               (uVar14 >> 0x16 | uVar14 * 0x400)) + ((uVar14 ^ uVar31) & uVar32 ^ uVar14 & uVar31) +
               iVar1;
      uVar9 = (param_2[0xe] & 0xff00ff00) >> 8 | (param_2[0xe] & 0xff00ff) << 8;
      local_68 = uVar9 >> 0x10 | uVar9 << 0x10;
      iVar1 = local_68 + uVar18 + (uVar28 & uVar15 ^ uVar27 & (uVar28 ^ 0xffffffff)) +
              ((uVar28 >> 6 | uVar28 * 0x4000000) ^ (uVar28 >> 0xb | uVar28 * 0x200000) ^
              (uVar28 >> 0x19 | uVar28 * 0x80)) + -0x6423f959;
      uVar32 = iVar1 + uVar32;
      uVar18 = ((uVar17 >> 2 | uVar17 * 0x40000000) ^ (uVar17 >> 0xd | uVar17 * 0x80000) ^
               (uVar17 >> 0x16 | uVar17 * 0x400)) + ((uVar17 ^ uVar14) & uVar31 ^ uVar17 & uVar14) +
               iVar1;
      uVar9 = (param_2[0xf] & 0xff00ff00) >> 8 | (param_2[0xf] & 0xff00ff) << 8;
      local_64 = uVar9 >> 0x10 | uVar9 << 0x10;
      iVar1 = local_64 + uVar27 + (uVar32 & uVar28 ^ uVar15 & (uVar32 ^ 0xffffffff)) +
              ((uVar32 >> 6 | uVar32 * 0x4000000) ^ (uVar32 >> 0xb | uVar32 * 0x200000) ^
              (uVar32 >> 0x19 | uVar32 * 0x80)) + -0x3e640e8c;
      uVar27 = ((uVar18 >> 2 | uVar18 * 0x40000000) ^ (uVar18 >> 0xd | uVar18 * 0x80000) ^
               (uVar18 >> 0x16 | uVar18 * 0x400)) + (uVar18 & (uVar17 ^ uVar14) ^ uVar17 & uVar14) +
               iVar1;
      uVar31 = iVar1 + uVar31;
      piVar12 = &DAT_01e3dd98;
      uVar30 = 0x12;
      do {
        iVar29 = (int)uVar30;
        iVar4 = piVar12[-6];
        uVar24 = (ulong)(iVar29 - 1) & 9;
        uVar33 = (ulong)(iVar29 + 0xc) & 0xe;
        uVar9 = local_a0[uVar33];
        uVar2 = iVar29 - 2U & 8;
        uVar7 = local_a0[uVar24];
        uVar9 = local_a0[uVar2] + local_a0[(ulong)(iVar29 + 7) & 9] +
                ((uVar7 >> 0x12 | uVar7 << 0xe) ^ uVar7 >> 3 ^ (uVar7 >> 7 | uVar7 << 0x19)) +
                ((uVar9 >> 0x13 | uVar9 << 0xd) ^ uVar9 >> 10 ^ (uVar9 >> 0x11 | uVar9 << 0xf));
        iVar3 = piVar12[-5];
        iVar5 = piVar12[-4];
        iVar1 = (uVar31 & uVar32 ^ uVar28 & (uVar31 ^ 0xffffffff)) + uVar15 +
                ((uVar31 >> 6 | uVar31 << 0x1a) ^ (uVar31 >> 0xb | uVar31 << 0x15) ^
                (uVar31 >> 0x19 | uVar31 << 7)) + piVar12[-7] + uVar9;
        uVar20 = uVar30 & 10;
        local_a0[uVar2] = uVar9;
        uVar14 = iVar1 + uVar14;
        uVar15 = ((uVar27 >> 2 | uVar27 << 0x1e) ^ (uVar27 >> 0xd | uVar27 << 0x13) ^
                 (uVar27 >> 0x16 | uVar27 << 10)) + ((uVar27 ^ uVar18) & uVar17 ^ uVar27 & uVar18) +
                 iVar1;
        uVar21 = (ulong)(iVar29 + 0xd) & 0xf;
        uVar9 = local_a0[uVar20];
        uVar8 = local_a0[uVar21];
        uVar9 = local_a0[uVar30 + 8 & 10] + uVar7 +
                ((uVar9 >> 0x12 | uVar9 << 0xe) ^ uVar9 >> 3 ^ (uVar9 >> 7 | uVar9 << 0x19)) +
                ((uVar8 >> 0x13 | uVar8 << 0xd) ^ uVar8 >> 10 ^ (uVar8 >> 0x11 | uVar8 << 0xf));
        local_a0[uVar24] = uVar9;
        iVar1 = iVar4 + uVar28 + (uVar14 & uVar31 ^ uVar32 & (uVar14 ^ 0xffffffff)) +
                ((uVar14 >> 6 | uVar14 * 0x4000000) ^ (uVar14 >> 0xb | uVar14 * 0x200000) ^
                (uVar14 >> 0x19 | uVar14 * 0x80)) + uVar9;
        uVar17 = iVar1 + uVar17;
        uVar28 = ((uVar15 >> 2 | uVar15 * 0x40000000) ^ (uVar15 >> 0xd | uVar15 * 0x80000) ^
                 (uVar15 >> 0x16 | uVar15 * 0x400)) + ((uVar15 ^ uVar27) & uVar18 ^ uVar15 & uVar27)
                 + iVar1;
        uVar9 = local_a0[uVar2 | 3];
        uVar34 = (ulong)(iVar29 + 0xe) & 8;
        uVar7 = local_a0[uVar34];
        uVar19 = (ulong)(iVar29 + 2) & 0xc;
        uVar9 = local_a0[uVar20] + local_a0[(ulong)(iVar29 + 9) & 0xb] +
                ((uVar9 >> 0x12 | uVar9 << 0xe) ^ uVar9 >> 3 ^ (uVar9 >> 7 | uVar9 << 0x19)) +
                ((uVar7 >> 0x13 | uVar7 << 0xd) ^ uVar7 >> 10 ^ (uVar7 >> 0x11 | uVar7 << 0xf));
        local_a0[uVar20] = uVar9;
        iVar4 = piVar12[-3];
        iVar6 = piVar12[-2];
        uVar20 = (ulong)(iVar29 + 1) & 0xb;
        iVar1 = iVar3 + uVar32 + uVar9 + (uVar17 & uVar14 ^ uVar31 & (uVar17 ^ 0xffffffff)) +
                ((uVar17 >> 6 | uVar17 * 0x4000000) ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^
                (uVar17 >> 0x19 | uVar17 * 0x80));
        uVar9 = local_a0[uVar19];
        uVar18 = iVar1 + uVar18;
        uVar32 = ((uVar28 >> 2 | uVar28 * 0x40000000) ^ (uVar28 >> 0xd | uVar28 * 0x80000) ^
                 (uVar28 >> 0x16 | uVar28 * 0x400)) + ((uVar28 ^ uVar15) & uVar27 ^ uVar28 & uVar15)
                 + iVar1;
        uVar7 = local_a0[uVar24];
        uVar9 = local_a0[uVar20] + local_a0[(ulong)(iVar29 + 10) & 0xc] +
                ((uVar9 >> 0x12 | uVar9 << 0xe) ^ uVar9 >> 3 ^ (uVar9 >> 7 | uVar9 << 0x19)) +
                ((uVar7 >> 0x13 | uVar7 << 0xd) ^ uVar7 >> 10 ^ (uVar7 >> 0x11 | uVar7 << 0xf));
        local_a0[uVar20] = uVar9;
        iVar1 = iVar5 + uVar31 + uVar9 + (uVar18 & uVar17 ^ uVar14 & (uVar18 ^ 0xffffffff)) +
                ((uVar18 >> 6 | uVar18 * 0x4000000) ^ (uVar18 >> 0xb | uVar18 * 0x200000) ^
                (uVar18 >> 0x19 | uVar18 * 0x80));
        uVar9 = local_a0[uVar2 | 5];
        uVar27 = iVar1 + uVar27;
        uVar31 = ((uVar32 >> 2 | uVar32 * 0x40000000) ^ (uVar32 >> 0xd | uVar32 * 0x80000) ^
                 (uVar32 >> 0x16 | uVar32 * 0x400)) + ((uVar32 ^ uVar28) & uVar15 ^ uVar32 & uVar28)
                 + iVar1;
        uVar7 = local_a0[(ulong)(iVar29 + 0x10) & 10];
        uVar9 = local_a0[uVar19] + local_a0[(ulong)(iVar29 + 0xb) & 0xd] +
                ((uVar9 >> 0x12 | uVar9 << 0xe) ^ uVar9 >> 3 ^ (uVar9 >> 7 | uVar9 << 0x19)) +
                ((uVar7 >> 0x13 | uVar7 << 0xd) ^ uVar7 >> 10 ^ (uVar7 >> 0x11 | uVar7 << 0xf));
        uVar20 = (ulong)(iVar29 + 3) & 0xd;
        local_a0[uVar19] = uVar9;
        uVar19 = (ulong)(iVar29 + 4) & 0xe;
        iVar3 = piVar12[-1];
        iVar1 = iVar4 + uVar14 + uVar9 + (uVar27 & uVar18 ^ uVar17 & (uVar27 ^ 0xffffffff)) +
                ((uVar27 >> 6 | uVar27 * 0x4000000) ^ (uVar27 >> 0xb | uVar27 * 0x200000) ^
                (uVar27 >> 0x19 | uVar27 * 0x80));
        uVar9 = local_a0[uVar19];
        uVar15 = iVar1 + uVar15;
        uVar14 = ((uVar31 >> 2 | uVar31 * 0x40000000) ^ (uVar31 >> 0xd | uVar31 * 0x80000) ^
                 (uVar31 >> 0x16 | uVar31 * 0x400)) + ((uVar31 ^ uVar32) & uVar28 ^ uVar31 & uVar32)
                 + iVar1;
        uVar7 = local_a0[(ulong)(iVar29 + 0x11) & 0xb];
        uVar9 = local_a0[uVar20] + local_a0[uVar33] +
                ((uVar9 >> 0x12 | uVar9 << 0xe) ^ uVar9 >> 3 ^ (uVar9 >> 7 | uVar9 << 0x19)) +
                ((uVar7 >> 0x13 | uVar7 << 0xd) ^ uVar7 >> 10 ^ (uVar7 >> 0x11 | uVar7 << 0xf));
        local_a0[uVar20] = uVar9;
        uVar2 = local_a0[uVar2 | 7];
        iVar1 = iVar6 + uVar17 + uVar9 + (uVar15 & uVar27 ^ uVar18 & (uVar15 ^ 0xffffffff)) +
                ((uVar15 >> 6 | uVar15 * 0x4000000) ^ (uVar15 >> 0xb | uVar15 * 0x200000) ^
                (uVar15 >> 0x19 | uVar15 * 0x80));
        uVar9 = local_a0[(ulong)(iVar29 + 0x12) & 0xc];
        uVar28 = iVar1 + uVar28;
        uVar17 = ((uVar14 >> 2 | uVar14 * 0x40000000) ^ (uVar14 >> 0xd | uVar14 * 0x80000) ^
                 (uVar14 >> 0x16 | uVar14 * 0x400)) + ((uVar14 ^ uVar31) & uVar32 ^ uVar14 & uVar31)
                 + iVar1;
        iVar4 = *piVar12;
        uVar20 = uVar30 + 6;
        uVar24 = (ulong)(iVar29 + 5) & 0xf;
        uVar9 = local_a0[uVar19] + local_a0[uVar21] +
                ((uVar2 >> 0x12 | uVar2 << 0xe) ^ uVar2 >> 3 ^ (uVar2 >> 7 | uVar2 << 0x19)) +
                ((uVar9 >> 0x13 | uVar9 << 0xd) ^ uVar9 >> 10 ^ (uVar9 >> 0x11 | uVar9 << 0xf));
        local_a0[uVar19] = uVar9;
        uVar2 = local_a0[uVar20 & 8];
        uVar7 = local_a0[(ulong)(iVar29 + 0x13) & 0xd];
        iVar1 = iVar3 + uVar18 + uVar9 + (uVar28 & uVar15 ^ uVar27 & (uVar28 ^ 0xffffffff)) +
                ((uVar28 >> 6 | uVar28 * 0x4000000) ^ (uVar28 >> 0xb | uVar28 * 0x200000) ^
                (uVar28 >> 0x19 | uVar28 * 0x80));
        uVar32 = iVar1 + uVar32;
        uVar18 = ((uVar17 >> 2 | uVar17 * 0x40000000) ^ (uVar17 >> 0xd | uVar17 * 0x80000) ^
                 (uVar17 >> 0x16 | uVar17 * 0x400)) + ((uVar17 ^ uVar14) & uVar31 ^ uVar17 & uVar14)
                 + iVar1;
        uVar9 = local_a0[uVar24] + local_a0[uVar34] +
                ((uVar2 >> 0x12 | uVar2 << 0xe) ^ uVar2 >> 3 ^ (uVar2 >> 7 | uVar2 << 0x19)) +
                ((uVar7 >> 0x13 | uVar7 << 0xd) ^ uVar7 >> 10 ^ (uVar7 >> 0x11 | uVar7 << 0xf));
        local_a0[uVar24] = uVar9;
        iVar1 = iVar4 + uVar27 + uVar9 + (uVar32 & uVar28 ^ uVar15 & (uVar32 ^ 0xffffffff)) +
                ((uVar32 >> 6 | uVar32 * 0x4000000) ^ (uVar32 >> 0xb | uVar32 * 0x200000) ^
                (uVar32 >> 0x19 | uVar32 * 0x80));
        uVar31 = iVar1 + uVar31;
        uVar27 = ((uVar18 >> 2 | uVar18 * 0x40000000) ^ (uVar18 >> 0xd | uVar18 * 0x80000) ^
                 (uVar18 >> 0x16 | uVar18 * 0x400)) + (uVar18 & (uVar17 ^ uVar14) ^ uVar17 & uVar14)
                 + iVar1;
        piVar12 = piVar12 + 8;
        uVar30 = uVar30 + 8;
      } while (uVar20 < 0x40);
      uVar26 = uVar27 + uVar26;
      param_3 = param_3 + -1;
      param_2 = param_2 + 0x10;
      uVar10 = uVar18 + uVar10;
      uVar16 = uVar17 + uVar16;
      uVar23 = uVar14 + uVar23;
      uVar25 = uVar28 + uVar25;
      uVar13 = uVar31 + uVar13;
      uVar11 = uVar32 + uVar11;
      uVar22 = uVar15 + uVar22;
      *param_1 = uVar26;
      param_1[1] = uVar10;
      param_1[2] = uVar16;
      param_1[3] = uVar23;
      param_1[4] = uVar13;
      param_1[5] = uVar11;
      param_1[6] = uVar25;
      param_1[7] = uVar22;
    } while (param_3 != 0);
  }
  return;
}

