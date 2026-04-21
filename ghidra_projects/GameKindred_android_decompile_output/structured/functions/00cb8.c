// functions/00cb8 — 1 functions
#include "libGameKindred.h"




void FUN_00cb8428(float param_1,float param_2,float param_3,float param_4,float param_5,
                 long *param_6,long param_7,long param_8,long *param_9,undefined1 *param_10)

{
  uint uVar1;
  undefined1 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 *puVar8;
  long *plVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  float in_w12;
  float *pfVar12;
  float *pfVar13;
  long lVar14;
  float *pfVar15;
  float *pfVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ushort uVar20;
  ushort uVar21;
  ushort uVar22;
  ushort uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float unaff_s15;
  float fVar28;
  float local_98;
  float local_94;
  float local_90;
  float fStack_8c;
  long local_88;
  
  lVar3 = tpidr_el0;
  local_88 = *(long *)(lVar3 + 0x28);
  fVar18 = (float)NEON_fminnm(param_3 * 360.0,0x43b40000);
  if (fVar18 <= 0.0) {
    fVar18 = 0.0;
  }
  fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
  fVar25 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 10));
  fVar24 = (float)(int)(*(float *)(param_7 + 0x10) * fVar4);
  fVar4 = (float)(int)(*(float *)(param_7 + 0x14) * fVar25);
  fVar27 = (float)(int)(fVar24 * 0.5);
  fVar28 = (float)(int)(fVar4 * 0.5);
  param_1 = param_1 - (float)(int)(fVar24 * param_4);
  param_2 = param_2 - (float)(int)(fVar4 * param_5);
  fVar25 = (float)(int)(fVar27 + param_1);
  fVar26 = (float)(int)(fVar28 + param_2);
  if ((fVar18 < 0.0) || (45.0 <= fVar18)) {
    if ((45.0 <= fVar18) && (fVar18 < 90.0)) {
      unaff_s15 = fVar27 + fVar25;
      fVar17 = 45.0 - (fVar18 + -45.0);
LAB_00cb858c:
      local_98 = unaff_s15;
      fVar17 = tanf(fVar17 * 0.017453292);
      in_w12 = fVar26 - fVar27 * fVar17;
      goto LAB_00cb86f8;
    }
    if ((90.0 <= fVar18) && (fVar18 < 135.0)) {
      unaff_s15 = fVar27 + fVar25;
      fVar17 = fVar18 + -90.0;
LAB_00cb860c:
      local_98 = unaff_s15;
      fVar17 = tanf(fVar17 * 0.017453292);
      in_w12 = fVar26 + fVar27 * fVar17;
      goto LAB_00cb86f8;
    }
    if ((135.0 <= fVar18) && (fVar18 < 180.0)) {
      fVar17 = tanf((45.0 - (fVar18 + -135.0)) * 0.017453292);
      unaff_s15 = fVar25 + fVar28 * fVar17;
LAB_00cb86f0:
      local_98 = unaff_s15;
      in_w12 = fVar28 + fVar26;
      goto LAB_00cb86f8;
    }
    if ((180.0 <= fVar18) && (fVar18 < 225.0)) {
      fVar17 = tanf((fVar18 + -180.0) * 0.017453292);
      unaff_s15 = fVar25 - fVar28 * fVar17;
      goto LAB_00cb86f0;
    }
    if ((225.0 <= fVar18) && (fVar18 < 270.0)) {
      unaff_s15 = fVar25 - fVar27;
      fVar17 = 45.0 - (fVar18 + -225.0);
      goto LAB_00cb860c;
    }
    if ((270.0 <= fVar18) && (fVar18 < 315.0)) {
      unaff_s15 = fVar25 - fVar27;
      fVar17 = fVar18 + -270.0;
      goto LAB_00cb858c;
    }
    if (315.0 <= fVar18) {
      fVar17 = tanf((45.0 - (fVar18 + -315.0)) * 0.017453292);
      unaff_s15 = fVar25 - fVar28 * fVar17;
      goto LAB_00cb8530;
    }
  }
  else {
    fVar17 = tanf(fVar18 * 0.017453292);
    unaff_s15 = fVar25 + fVar28 * fVar17;
LAB_00cb8530:
    in_w12 = fVar26 - fVar28;
    local_98 = unaff_s15;
LAB_00cb86f8:
    local_94 = in_w12;
  }
  if (45.0 <= fVar18) {
    if (fVar18 < 135.0) {
      pfVar13 = (float *)*param_6;
      pfVar12 = &local_98;
      pfVar16 = (float *)((ulong)pfVar12 | 4);
      pfVar15 = (float *)((ulong)&local_90 | 4);
      goto LAB_00cb896c;
    }
    if (fVar18 < 225.0) {
      pfVar13 = (float *)*param_6;
      pfVar12 = &local_98;
      pfVar16 = (float *)((ulong)pfVar12 | 4);
      pfVar15 = (float *)((ulong)&local_90 | 4);
      goto LAB_00cb8b84;
    }
    pfVar13 = (float *)*param_6;
    if (315.0 <= fVar18) {
      pfVar12 = &local_98;
      pfVar15 = (float *)((ulong)pfVar12 | 4);
      goto LAB_00cb8fa8;
    }
    pfVar12 = &local_98;
    pfVar16 = (float *)((ulong)pfVar12 | 4);
    pfVar15 = (float *)((ulong)&local_90 | 4);
  }
  else {
    local_90 = fVar27 + fVar25;
    fStack_8c = fVar26 - fVar28;
    pfVar13 = (float *)*param_6;
    uVar20 = *(ushort *)(param_8 + 4);
    uVar21 = *(ushort *)(param_8 + 6);
    uVar22 = *(ushort *)(param_8 + 8);
    uVar23 = *(ushort *)(param_8 + 10);
    uVar1 = *(uint *)(*(long *)(*param_9 + 8) + 0x3c);
    *pfVar13 = fVar25;
    pfVar13[1] = fVar26;
    pfVar13[2] = 0.0;
    fVar6 = (float)NEON_ucvtf((uint)uVar23);
    fVar17 = (float)NEON_ucvtf((uint)uVar21);
    *(undefined1 *)(pfVar13 + 3) = *param_10;
    puVar8 = param_10 + 1;
    *(undefined1 *)((long)pfVar13 + 0xd) = *puVar8;
    puVar10 = param_10 + 2;
    fVar5 = (float)NEON_ucvtf((uint)uVar22);
    *(undefined1 *)((long)pfVar13 + 0xe) = *puVar10;
    fVar18 = (float)NEON_ucvtf((uint)uVar20);
    puVar11 = param_10 + 3;
    uVar2 = *puVar11;
    pfVar13[4] = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar5 * 0.5 + fVar18);
    pfVar13[5] = 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar6 * 0.5 + fVar17);
    *(undefined1 *)((long)pfVar13 + 0xf) = uVar2;
    lVar14 = *param_6;
    plVar9 = param_6 + 1;
    *param_6 = lVar14 + 0x18;
    *(int *)plVar9 = (int)*plVar9 + 1;
    uVar20 = *(ushort *)(param_8 + 6);
    uVar21 = *(ushort *)(param_8 + 10);
    fVar18 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
    fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
    uVar1 = *(uint *)(*(long *)(*param_9 + 8) + 0x3c);
    *(float *)(lVar14 + 0x18) = fVar27 + fVar25;
    *(float *)(lVar14 + 0x1c) = fVar26 - fVar28;
    *(undefined4 *)(lVar14 + 0x20) = 0;
    *(undefined1 *)(lVar14 + 0x24) = *param_10;
    fVar17 = (float)NEON_ucvtf((uint)uVar20);
    fVar6 = (float)NEON_ucvtf((uint)uVar21);
    *(undefined1 *)(lVar14 + 0x25) = *puVar8;
    *(undefined1 *)(lVar14 + 0x26) = *puVar10;
    uVar2 = *puVar11;
    *(float *)(lVar14 + 0x28) = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar18 + fVar5);
    *(float *)(lVar14 + 0x2c) = 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar17 + fVar6);
    *(undefined1 *)(lVar14 + 0x27) = uVar2;
    lVar14 = *param_6;
    *param_6 = lVar14 + 0x18;
    *(int *)plVar9 = (int)*plVar9 + 1;
    uVar20 = *(ushort *)(param_8 + 6);
    uVar21 = *(ushort *)(param_8 + 10);
    fVar18 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
    fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
    uVar1 = *(uint *)(*(long *)(*param_9 + 8) + 0x3c);
    *(float *)(lVar14 + 0x18) = unaff_s15;
    *(float *)(lVar14 + 0x1c) = in_w12;
    *(undefined4 *)(lVar14 + 0x20) = 0;
    *(undefined1 *)(lVar14 + 0x24) = *param_10;
    fVar17 = (float)NEON_ucvtf((uint)uVar20);
    fVar6 = (float)NEON_ucvtf((uint)uVar21);
    *(undefined1 *)(lVar14 + 0x25) = *puVar8;
    *(undefined1 *)(lVar14 + 0x26) = *puVar10;
    uVar2 = *puVar11;
    *(float *)(lVar14 + 0x28) =
         (1.0 / (float)(uVar1 & 0x3fff)) * (((unaff_s15 - param_1) / fVar24) * fVar5 + fVar18);
    *(float *)(lVar14 + 0x2c) = 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar17 + fVar6);
    *(undefined1 *)(lVar14 + 0x27) = uVar2;
    pfVar13 = (float *)(*param_6 + 0x18);
    *param_6 = (long)pfVar13;
    pfVar15 = (float *)((ulong)&local_90 | 4);
    *(int *)plVar9 = (int)*plVar9 + 1;
    pfVar12 = &local_90;
    pfVar16 = pfVar15;
LAB_00cb896c:
    plVar9 = param_6 + 1;
    fVar18 = *pfVar12;
    fVar17 = *pfVar16;
    pfVar12 = &local_90;
    local_90 = fVar27 + fVar25;
    fStack_8c = fVar28 + fVar26;
    uVar20 = *(ushort *)(param_8 + 6);
    uVar21 = *(ushort *)(param_8 + 10);
    fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
    fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
    uVar1 = *(uint *)(*(long *)(*param_9 + 8) + 0x3c);
    *pfVar13 = fVar25;
    pfVar13[1] = fVar26;
    pfVar13[2] = 0.0;
    *(undefined1 *)(pfVar13 + 3) = *param_10;
    fVar19 = (float)NEON_ucvtf((uint)uVar21);
    fVar6 = (float)NEON_ucvtf((uint)uVar20);
    *(undefined1 *)((long)pfVar13 + 0xd) = param_10[1];
    *(undefined1 *)((long)pfVar13 + 0xe) = param_10[2];
    uVar2 = param_10[3];
    pfVar13[4] = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar7 * 0.5 + fVar5);
    pfVar13[5] = 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar19 * 0.5 + fVar6);
    *(undefined1 *)((long)pfVar13 + 0xf) = uVar2;
    lVar14 = *param_6;
    *param_6 = lVar14 + 0x18;
    *(int *)plVar9 = (int)*plVar9 + 1;
    uVar20 = *(ushort *)(param_8 + 8);
    uVar21 = *(ushort *)(param_8 + 10);
    fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 6));
    fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
    uVar1 = *(uint *)(*(long *)(*param_9 + 8) + 0x3c);
    *(float *)(lVar14 + 0x18) = fVar27 + fVar25;
    *(float *)(lVar14 + 0x1c) = fVar28 + fVar26;
    *(undefined4 *)(lVar14 + 0x20) = 0;
    fVar19 = (float)NEON_ucvtf((uint)uVar21);
    *(undefined1 *)(lVar14 + 0x24) = *param_10;
    fVar7 = (float)NEON_ucvtf((uint)uVar20);
    *(undefined1 *)(lVar14 + 0x25) = param_10[1];
    *(undefined1 *)(lVar14 + 0x26) = param_10[2];
    uVar2 = param_10[3];
    *(float *)(lVar14 + 0x28) = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar5 + fVar7);
    *(float *)(lVar14 + 0x2c) =
         1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar19 * 0.0 + fVar6);
    *(undefined1 *)(lVar14 + 0x27) = uVar2;
    lVar14 = *param_6;
    *param_6 = lVar14 + 0x18;
    *(int *)plVar9 = (int)*plVar9 + 1;
    uVar20 = *(ushort *)(param_8 + 4);
    uVar21 = *(ushort *)(param_8 + 6);
    uVar22 = *(ushort *)(param_8 + 8);
    uVar23 = *(ushort *)(param_8 + 10);
    uVar1 = *(uint *)(*(long *)(*param_9 + 8) + 0x3c);
    *(float *)(lVar14 + 0x18) = fVar18;
    *(float *)(lVar14 + 0x1c) = fVar17;
    *(undefined4 *)(lVar14 + 0x20) = 0;
    fVar7 = (float)NEON_ucvtf((uint)uVar23);
    fVar5 = (float)NEON_ucvtf((uint)uVar21);
    *(undefined1 *)(lVar14 + 0x24) = *param_10;
    *(undefined1 *)(lVar14 + 0x25) = param_10[1];
    fVar18 = (float)NEON_ucvtf((uint)uVar20);
    fVar6 = (float)NEON_ucvtf((uint)uVar22);
    *(undefined1 *)(lVar14 + 0x26) = param_10[2];
    *(undefined1 *)(lVar14 + 0x27) = param_10[3];
    *(float *)(lVar14 + 0x28) = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar18 + fVar6);
    *(float *)(lVar14 + 0x2c) =
         1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) *
               (((fVar4 - (fVar17 - param_2)) / fVar4) * fVar7 + fVar5);
    pfVar13 = (float *)(*param_6 + 0x18);
    *param_6 = (long)pfVar13;
    *(int *)plVar9 = (int)*plVar9 + 1;
    pfVar16 = pfVar15;
LAB_00cb8b84:
    puVar11 = param_10 + 3;
    puVar10 = param_10 + 2;
    puVar8 = param_10 + 1;
    plVar9 = param_6 + 1;
    fVar19 = *pfVar12;
    fVar18 = *pfVar16;
    local_90 = fVar25 - fVar27;
    fStack_8c = fVar28 + fVar26;
    uVar20 = *(ushort *)(param_8 + 6);
    uVar21 = *(ushort *)(param_8 + 10);
    fVar17 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
    fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
    uVar1 = *(uint *)(*(long *)(*param_9 + 8) + 0x3c);
    *pfVar13 = fVar25;
    pfVar13[1] = fVar26;
    pfVar13[2] = 0.0;
    *(undefined1 *)(pfVar13 + 3) = *param_10;
    fVar7 = (float)NEON_ucvtf((uint)uVar21);
    fVar5 = (float)NEON_ucvtf((uint)uVar20);
    *(undefined1 *)((long)pfVar13 + 0xd) = *puVar8;
    *(undefined1 *)((long)pfVar13 + 0xe) = *puVar10;
    uVar2 = *puVar11;
    pfVar13[4] = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar6 * 0.5 + fVar17);
    pfVar13[5] = 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar7 * 0.5 + fVar5);
    *(undefined1 *)((long)pfVar13 + 0xf) = uVar2;
    lVar14 = *param_6;
    *param_6 = lVar14 + 0x18;
    *(int *)plVar9 = (int)*plVar9 + 1;
    uVar20 = *(ushort *)(param_8 + 6);
    uVar21 = *(ushort *)(param_8 + 10);
    fVar17 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
    fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
    uVar1 = *(uint *)(*(long *)(*param_9 + 8) + 0x3c);
    *(float *)(lVar14 + 0x18) = fVar25 - fVar27;
    *(float *)(lVar14 + 0x1c) = fVar28 + fVar26;
    *(undefined4 *)(lVar14 + 0x20) = 0;
    *(undefined1 *)(lVar14 + 0x24) = *param_10;
    fVar7 = (float)NEON_ucvtf((uint)uVar21);
    fVar5 = (float)NEON_ucvtf((uint)uVar20);
    *(undefined1 *)(lVar14 + 0x25) = *puVar8;
    *(undefined1 *)(lVar14 + 0x26) = *puVar10;
    uVar2 = *puVar11;
    *(float *)(lVar14 + 0x28) = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar6 * 0.0 + fVar17);
    *(float *)(lVar14 + 0x2c) = 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar7 * 0.0 + fVar5)
    ;
    *(undefined1 *)(lVar14 + 0x27) = uVar2;
    lVar14 = *param_6;
    *param_6 = lVar14 + 0x18;
    *(int *)plVar9 = (int)*plVar9 + 1;
    uVar20 = *(ushort *)(param_8 + 6);
    uVar21 = *(ushort *)(param_8 + 10);
    fVar17 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
    fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
    uVar1 = *(uint *)(*(long *)(*param_9 + 8) + 0x3c);
    *(float *)(lVar14 + 0x18) = fVar19;
    *(float *)(lVar14 + 0x1c) = fVar18;
    *(undefined4 *)(lVar14 + 0x20) = 0;
    fVar6 = (float)NEON_ucvtf((uint)uVar21);
    *(undefined1 *)(lVar14 + 0x24) = *param_10;
    fVar18 = (float)NEON_ucvtf((uint)uVar20);
    *(undefined1 *)(lVar14 + 0x25) = *puVar8;
    *(undefined1 *)(lVar14 + 0x26) = *puVar10;
    uVar2 = *puVar11;
    *(float *)(lVar14 + 0x28) =
         (1.0 / (float)(uVar1 & 0x3fff)) * (((fVar19 - param_1) / fVar24) * fVar5 + fVar17);
    *(float *)(lVar14 + 0x2c) =
         1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar6 * 0.0 + fVar18);
    *(undefined1 *)(lVar14 + 0x27) = uVar2;
    pfVar13 = (float *)(*param_6 + 0x18);
    *param_6 = (long)pfVar13;
    *(int *)plVar9 = (int)*plVar9 + 1;
    pfVar12 = &local_90;
    pfVar16 = pfVar15;
  }
  puVar11 = param_10 + 3;
  puVar10 = param_10 + 2;
  plVar9 = param_6 + 1;
  puVar8 = param_10 + 1;
  fVar18 = *pfVar12;
  fVar17 = *pfVar16;
  pfVar12 = &local_90;
  local_90 = fVar25 - fVar27;
  fStack_8c = fVar26 - fVar28;
  uVar20 = *(ushort *)(param_8 + 6);
  uVar21 = *(ushort *)(param_8 + 10);
  fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
  fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
  uVar1 = *(uint *)(*(long *)(*param_9 + 8) + 0x3c);
  *pfVar13 = fVar25;
  pfVar13[1] = fVar26;
  pfVar13[2] = 0.0;
  *(undefined1 *)(pfVar13 + 3) = *param_10;
  fVar19 = (float)NEON_ucvtf((uint)uVar21);
  fVar6 = (float)NEON_ucvtf((uint)uVar20);
  *(undefined1 *)((long)pfVar13 + 0xd) = *puVar8;
  *(undefined1 *)((long)pfVar13 + 0xe) = *puVar10;
  uVar2 = *puVar11;
  pfVar13[4] = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar7 * 0.5 + fVar5);
  pfVar13[5] = 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar19 * 0.5 + fVar6);
  *(undefined1 *)((long)pfVar13 + 0xf) = uVar2;
  lVar14 = *param_6;
  *param_6 = lVar14 + 0x18;
  *(int *)plVar9 = (int)*plVar9 + 1;
  uVar20 = *(ushort *)(param_8 + 6);
  uVar21 = *(ushort *)(param_8 + 10);
  fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
  fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
  uVar1 = *(uint *)(*(long *)(*param_9 + 8) + 0x3c);
  *(float *)(lVar14 + 0x18) = fVar25 - fVar27;
  *(float *)(lVar14 + 0x1c) = fVar26 - fVar28;
  *(undefined4 *)(lVar14 + 0x20) = 0;
  *(undefined1 *)(lVar14 + 0x24) = *param_10;
  fVar27 = (float)NEON_ucvtf((uint)uVar20);
  fVar7 = (float)NEON_ucvtf((uint)uVar21);
  *(undefined1 *)(lVar14 + 0x25) = *puVar8;
  *(undefined1 *)(lVar14 + 0x26) = *puVar10;
  uVar2 = *puVar11;
  *(float *)(lVar14 + 0x28) = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar6 * 0.0 + fVar5);
  *(float *)(lVar14 + 0x2c) = 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar27 + fVar7);
  *(undefined1 *)(lVar14 + 0x27) = uVar2;
  lVar14 = *param_6;
  *param_6 = lVar14 + 0x18;
  *(int *)plVar9 = (int)*plVar9 + 1;
  uVar20 = *(ushort *)(param_8 + 6);
  uVar21 = *(ushort *)(param_8 + 10);
  fVar27 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
  fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
  uVar1 = *(uint *)(*(long *)(*param_9 + 8) + 0x3c);
  *(float *)(lVar14 + 0x18) = fVar18;
  *(float *)(lVar14 + 0x1c) = fVar17;
  *(undefined4 *)(lVar14 + 0x20) = 0;
  fVar6 = (float)NEON_ucvtf((uint)uVar21);
  *(undefined1 *)(lVar14 + 0x24) = *param_10;
  fVar18 = (float)NEON_ucvtf((uint)uVar20);
  *(undefined1 *)(lVar14 + 0x25) = *puVar8;
  *(undefined1 *)(lVar14 + 0x26) = *puVar10;
  *(undefined1 *)(lVar14 + 0x27) = *puVar11;
  *(float *)(lVar14 + 0x28) = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar5 * 0.0 + fVar27);
  *(float *)(lVar14 + 0x2c) =
       1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) *
             (((fVar4 - (fVar17 - param_2)) / fVar4) * fVar6 + fVar18);
  pfVar13 = (float *)(*param_6 + 0x18);
  *param_6 = (long)pfVar13;
  *(int *)plVar9 = (int)*plVar9 + 1;
LAB_00cb8fa8:
  fStack_8c = fVar26 - fVar28;
  puVar11 = param_10 + 3;
  puVar10 = param_10 + 2;
  plVar9 = param_6 + 1;
  puVar8 = param_10 + 1;
  fVar17 = *pfVar12;
  fVar18 = *pfVar15;
  uVar20 = *(ushort *)(param_8 + 6);
  uVar21 = *(ushort *)(param_8 + 10);
  fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
  fVar27 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
  uVar1 = *(uint *)(*(long *)(*param_9 + 8) + 0x3c);
  *pfVar13 = fVar25;
  pfVar13[1] = fVar26;
  pfVar13[2] = 0.0;
  *(undefined1 *)(pfVar13 + 3) = *param_10;
  fVar28 = (float)NEON_ucvtf((uint)uVar21);
  fVar26 = (float)NEON_ucvtf((uint)uVar20);
  *(undefined1 *)((long)pfVar13 + 0xd) = *puVar8;
  *(undefined1 *)((long)pfVar13 + 0xe) = *puVar10;
  uVar2 = *puVar11;
  pfVar13[4] = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar27 * 0.5 + fVar4);
  pfVar13[5] = 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar28 * 0.5 + fVar26);
  *(undefined1 *)((long)pfVar13 + 0xf) = uVar2;
  lVar14 = *param_6;
  *param_6 = lVar14 + 0x18;
  *(int *)plVar9 = (int)*plVar9 + 1;
  uVar20 = *(ushort *)(param_8 + 6);
  uVar21 = *(ushort *)(param_8 + 10);
  fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
  fVar27 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
  uVar1 = *(uint *)(*(long *)(*param_9 + 8) + 0x3c);
  *(float *)(lVar14 + 0x18) = fVar25;
  *(float *)(lVar14 + 0x1c) = fStack_8c;
  *(undefined4 *)(lVar14 + 0x20) = 0;
  *(undefined1 *)(lVar14 + 0x24) = *param_10;
  fVar26 = (float)NEON_ucvtf((uint)uVar20);
  fVar28 = (float)NEON_ucvtf((uint)uVar21);
  *(undefined1 *)(lVar14 + 0x25) = *puVar8;
  *(undefined1 *)(lVar14 + 0x26) = *puVar10;
  uVar2 = *puVar11;
  *(float *)(lVar14 + 0x28) = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar27 * 0.5 + fVar4);
  *(float *)(lVar14 + 0x2c) = 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar26 + fVar28);
  *(undefined1 *)(lVar14 + 0x27) = uVar2;
  lVar14 = *param_6;
  *param_6 = lVar14 + 0x18;
  *(int *)plVar9 = (int)*plVar9 + 1;
  uVar20 = *(ushort *)(param_8 + 6);
  uVar21 = *(ushort *)(param_8 + 10);
  fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
  fVar26 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
  uVar1 = *(uint *)(*(long *)(*param_9 + 8) + 0x3c);
  *(float *)(lVar14 + 0x18) = fVar17;
  *(float *)(lVar14 + 0x1c) = fVar18;
  *(undefined4 *)(lVar14 + 0x20) = 0;
  *(undefined1 *)(lVar14 + 0x24) = *param_10;
  fVar18 = (float)NEON_ucvtf((uint)uVar20);
  fVar27 = (float)NEON_ucvtf((uint)uVar21);
  *(undefined1 *)(lVar14 + 0x25) = *puVar8;
  *(undefined1 *)(lVar14 + 0x26) = *puVar10;
  uVar2 = *puVar11;
  *(float *)(lVar14 + 0x28) =
       (1.0 / (float)(uVar1 & 0x3fff)) * (((fVar17 - param_1) / fVar24) * fVar26 + fVar4);
  *(float *)(lVar14 + 0x2c) = 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar18 + fVar27);
  *(undefined1 *)(lVar14 + 0x27) = uVar2;
  *param_6 = *param_6 + 0x18;
  *(int *)plVar9 = (int)*plVar9 + 1;
  if (*(long *)(lVar3 + 0x28) == local_88) {
    return;
  }
  local_90 = fVar25;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

