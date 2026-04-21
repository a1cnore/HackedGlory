// functions/00a20 — 2 functions
#include "libGameKindred.h"




void FUN_00a20078(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,long *param_8,long param_9,long param_10,long *param_11
                 ,undefined1 *param_12,uint param_13,uint param_14)

{
  uint uVar1;
  undefined1 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulong uVar10;
  long *plVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  float *pfVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ushort uVar20;
  ushort uVar21;
  ushort uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  ushort uVar26;
  ushort uVar27;
  ushort uVar28;
  ushort uVar29;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  long local_98;
  
  lVar3 = tpidr_el0;
  local_98 = *(long *)(lVar3 + 0x28);
  fVar23 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 8));
  fVar23 = (float)(int)(*(float *)(param_9 + 0x10) * fVar23);
  if (fVar23 <= 0.0) goto LAB_00a20d78;
  fVar25 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 10));
  fVar25 = (float)(int)(*(float *)(param_9 + 0x14) * fVar25);
  if (fVar25 < 0.0) goto LAB_00a20d78;
  fVar5 = fVar23 * param_6;
  param_1 = param_1 - (float)(int)(fVar23 * param_4);
  param_2 = param_2 - (float)(int)(fVar25 * param_5);
  fVar4 = fVar25 * param_7;
  fVar19 = (float)NEON_fminnm(param_3 * 360.0,0x43b40000);
  if (fVar19 <= 0.0) {
    fVar19 = 0.0;
  }
  local_a0 = (float)(int)(fVar5 + param_1);
  local_9c = (float)(int)(fVar4 + param_2);
  fVar17 = sinf(-(fVar19 * 0.017453292));
  fVar18 = cosf(fVar19 * 0.017453292);
  fVar24 = fVar23 + param_1;
  local_b8 = (float)(int)(fVar5 + param_1) - fVar17 * 9999.0;
  fStack_b4 = (float)(int)(fVar4 + param_2) - fVar18 * 9999.0;
  local_c0 = fVar24;
  fStack_bc = param_2;
  local_a8 = param_1;
  local_a4 = param_2;
  uVar10 = FUN_019bb8ec(&local_a0,&local_b8,&local_a8,&local_c0,&local_b0);
  if ((uVar10 & 1) == 0) {
    fVar17 = fVar25 + param_2;
    local_c0 = fVar24;
    fStack_bc = fVar17;
    local_a8 = fVar24;
    local_a4 = param_2;
    uVar10 = FUN_019bb8ec(&local_a0,&local_b8,&local_a8,&local_c0,&local_b0);
    if ((((uVar10 & 1) == 0) &&
        (local_c0 = param_1, fStack_bc = fVar17, local_a8 = fVar24, local_a4 = fVar17,
        uVar10 = FUN_019bb8ec(&local_a0,&local_b8,&local_a8,&local_c0,&local_b0), (uVar10 & 1) == 0)
        ) && (local_c0 = param_1, fStack_bc = param_2, local_a8 = param_1, local_a4 = fVar17,
             uVar10 = FUN_019bb8ec(&local_a0,&local_b8,&local_a8,&local_c0,&local_b0),
             (uVar10 & 1) == 0)) goto LAB_00a20d78;
  }
  uVar26 = 0;
  uVar20 = 0x3f80;
  uVar21 = uVar20;
  uVar22 = uVar26;
  if ((param_13 & 1) == 0) {
    uVar21 = uVar26;
    uVar22 = uVar20;
  }
  fVar17 = (1.0 - param_6) * fVar23;
  fVar18 = 0.0;
  if ((param_14 & 1) == 0) {
    fVar18 = 1.0;
    uVar20 = uVar26;
  }
  fVar24 = (1.0 - param_7) * fVar25;
  if (fVar19 <= 315.0) {
    if (225.0 < fVar19) {
      pfVar15 = (float *)*param_8;
      fVar19 = local_ac;
      goto LAB_00a204fc;
    }
    if (135.0 < fVar19) {
      pfVar15 = (float *)*param_8;
      fVar19 = local_b0;
      goto LAB_00a2071c;
    }
    if (45.0 < fVar19) {
      pfVar15 = (float *)*param_8;
      fVar24 = local_ac;
      goto LAB_00a20934;
    }
    pfVar15 = (float *)*param_8;
  }
  else {
    pfVar15 = (float *)*param_8;
    uVar26 = *(ushort *)(param_10 + 4);
    uVar27 = *(ushort *)(param_10 + 6);
    uVar28 = *(ushort *)(param_10 + 8);
    uVar29 = *(ushort *)(param_10 + 10);
    uVar1 = *(uint *)(*(long *)(*param_11 + 8) + 0x3c);
    *pfVar15 = local_a0;
    pfVar15[1] = local_9c;
    pfVar15[2] = 0.0;
    fVar9 = (float)NEON_ucvtf((uint)uVar29);
    fVar6 = (float)NEON_ucvtf((uint)uVar27);
    *(undefined1 *)(pfVar15 + 3) = *param_12;
    puVar12 = param_12 + 1;
    *(undefined1 *)((long)pfVar15 + 0xd) = *puVar12;
    puVar13 = param_12 + 2;
    fVar7 = (float)NEON_ucvtf((uint)uVar28);
    fVar19 = (float)NEON_ucvtf((uint)uVar26);
    *(undefined1 *)((long)pfVar15 + 0xe) = *puVar13;
    puVar14 = param_12 + 3;
    uVar2 = *puVar14;
    pfVar15[4] = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar7 * param_6 + fVar19);
    pfVar15[5] = 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar9 * param_7 + fVar6);
    *(undefined1 *)((long)pfVar15 + 0xf) = uVar2;
    lVar16 = *param_8;
    fVar19 = (local_b0 - param_1) / fVar23;
    plVar11 = param_8 + 1;
    *param_8 = lVar16 + 0x18;
    fVar6 = 1.0 - fVar19;
    if ((param_13 & 1) == 0) {
      fVar6 = fVar19;
    }
    *(int *)plVar11 = (int)*plVar11 + 1;
    uVar26 = *(ushort *)(param_10 + 4);
    uVar27 = *(ushort *)(param_10 + 10);
    fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 6));
    fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 8));
    uVar1 = *(uint *)(*(long *)(*param_11 + 8) + 0x3c);
    *(float *)(lVar16 + 0x18) = local_b0;
    *(float *)(lVar16 + 0x1c) = local_ac;
    *(undefined4 *)(lVar16 + 0x20) = 0;
    fVar8 = (float)NEON_ucvtf((uint)uVar27);
    *(undefined1 *)(lVar16 + 0x24) = *param_12;
    fVar19 = (float)NEON_ucvtf((uint)uVar26);
    *(undefined1 *)(lVar16 + 0x25) = *puVar12;
    *(undefined1 *)(lVar16 + 0x26) = *puVar13;
    uVar2 = *puVar14;
    *(float *)(lVar16 + 0x28) = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar6 * fVar9 + fVar19);
    *(float *)(lVar16 + 0x2c) =
         1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar18 * fVar8 + fVar7);
    *(undefined1 *)(lVar16 + 0x27) = uVar2;
    lVar16 = *param_8;
    *param_8 = lVar16 + 0x18;
    *(int *)plVar11 = (int)*plVar11 + 1;
    uVar26 = *(ushort *)(param_10 + 6);
    uVar27 = *(ushort *)(param_10 + 8);
    uVar28 = *(ushort *)(param_10 + 10);
    fVar19 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 4));
    uVar1 = *(uint *)(*(long *)(*param_11 + 8) + 0x3c);
    *(float *)(lVar16 + 0x18) = local_a0 - fVar5;
    *(float *)(lVar16 + 0x1c) = local_9c - fVar4;
    *(undefined4 *)(lVar16 + 0x20) = 0;
    fVar7 = (float)NEON_ucvtf((uint)uVar27);
    fVar9 = (float)NEON_ucvtf((uint)uVar28);
    *(undefined1 *)(lVar16 + 0x24) = *param_12;
    fVar6 = (float)NEON_ucvtf((uint)uVar26);
    *(undefined1 *)(lVar16 + 0x25) = *puVar12;
    *(undefined1 *)(lVar16 + 0x26) = *puVar13;
    *(undefined1 *)(lVar16 + 0x27) = *puVar14;
    *(float *)(lVar16 + 0x28) =
         (1.0 / (float)(uVar1 & 0x3fff)) * ((float)((uint)uVar21 << 0x10) * fVar7 + fVar19);
    *(float *)(lVar16 + 0x2c) =
         1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar18 * fVar9 + fVar6);
    pfVar15 = (float *)(*param_8 + 0x18);
    *param_8 = (long)pfVar15;
    *(int *)plVar11 = (int)*plVar11 + 1;
    local_b0 = local_a0 - fVar5;
    fVar19 = local_9c - fVar4;
LAB_00a204fc:
    plVar11 = param_8 + 1;
    local_ac = fVar24 + local_9c;
    uVar26 = *(ushort *)(param_10 + 4);
    uVar27 = *(ushort *)(param_10 + 10);
    fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 6));
    fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 8));
    uVar1 = *(uint *)(*(long *)(*param_11 + 8) + 0x3c);
    *pfVar15 = local_a0;
    pfVar15[1] = local_9c;
    pfVar15[2] = 0.0;
    fVar8 = (float)NEON_ucvtf((uint)uVar27);
    *(undefined1 *)(pfVar15 + 3) = *param_12;
    *(undefined1 *)((long)pfVar15 + 0xd) = param_12[1];
    fVar6 = (float)NEON_ucvtf((uint)uVar26);
    *(undefined1 *)((long)pfVar15 + 0xe) = param_12[2];
    uVar2 = param_12[3];
    pfVar15[4] = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar9 * param_6 + fVar6);
    pfVar15[5] = 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar8 * param_7 + fVar7);
    *(undefined1 *)((long)pfVar15 + 0xf) = uVar2;
    lVar16 = *param_8;
    fVar6 = (fVar25 - (fVar19 - param_2)) / fVar25;
    *param_8 = lVar16 + 0x18;
    fVar7 = 1.0 - fVar6;
    if ((param_14 & 1) == 0) {
      fVar7 = fVar6;
    }
    *(int *)plVar11 = (int)*plVar11 + 1;
    uVar26 = *(ushort *)(param_10 + 4);
    uVar27 = *(ushort *)(param_10 + 10);
    fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 6));
    fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 8));
    uVar1 = *(uint *)(*(long *)(*param_11 + 8) + 0x3c);
    *(float *)(lVar16 + 0x18) = local_b0;
    *(float *)(lVar16 + 0x1c) = fVar19;
    *(undefined4 *)(lVar16 + 0x20) = 0;
    fVar8 = (float)NEON_ucvtf((uint)uVar27);
    *(undefined1 *)(lVar16 + 0x24) = *param_12;
    *(undefined1 *)(lVar16 + 0x25) = param_12[1];
    fVar19 = (float)NEON_ucvtf((uint)uVar26);
    *(undefined1 *)(lVar16 + 0x26) = param_12[2];
    uVar2 = param_12[3];
    *(float *)(lVar16 + 0x28) =
         (1.0 / (float)(uVar1 & 0x3fff)) * ((float)((uint)uVar21 << 0x10) * fVar9 + fVar19);
    *(float *)(lVar16 + 0x2c) =
         1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar7 * fVar8 + fVar6);
    *(undefined1 *)(lVar16 + 0x27) = uVar2;
    lVar16 = *param_8;
    *param_8 = lVar16 + 0x18;
    *(int *)plVar11 = (int)*plVar11 + 1;
    uVar26 = *(ushort *)(param_10 + 6);
    uVar27 = *(ushort *)(param_10 + 8);
    uVar28 = *(ushort *)(param_10 + 10);
    fVar19 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 4));
    uVar1 = *(uint *)(*(long *)(*param_11 + 8) + 0x3c);
    *(float *)(lVar16 + 0x18) = local_a0 - fVar5;
    *(float *)(lVar16 + 0x1c) = local_ac;
    *(undefined4 *)(lVar16 + 0x20) = 0;
    fVar7 = (float)NEON_ucvtf((uint)uVar27);
    fVar9 = (float)NEON_ucvtf((uint)uVar28);
    fVar6 = (float)NEON_ucvtf((uint)uVar26);
    *(undefined1 *)(lVar16 + 0x24) = *param_12;
    *(undefined1 *)(lVar16 + 0x25) = param_12[1];
    *(undefined1 *)(lVar16 + 0x26) = param_12[2];
    *(undefined1 *)(lVar16 + 0x27) = param_12[3];
    *(float *)(lVar16 + 0x28) =
         (1.0 / (float)(uVar1 & 0x3fff)) * ((float)((uint)uVar21 << 0x10) * fVar7 + fVar19);
    *(float *)(lVar16 + 0x2c) =
         1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) *
               ((float)((uint)uVar20 << 0x10) * fVar9 + fVar6);
    pfVar15 = (float *)(*param_8 + 0x18);
    *param_8 = (long)pfVar15;
    *(int *)plVar11 = (int)*plVar11 + 1;
    fVar19 = local_a0 - fVar5;
LAB_00a2071c:
    puVar14 = param_12 + 3;
    puVar13 = param_12 + 2;
    puVar12 = param_12 + 1;
    plVar11 = param_8 + 1;
    local_b0 = fVar17 + local_a0;
    fVar24 = fVar24 + local_9c;
    uVar21 = *(ushort *)(param_10 + 4);
    uVar26 = *(ushort *)(param_10 + 10);
    fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 6));
    fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 8));
    uVar1 = *(uint *)(*(long *)(*param_11 + 8) + 0x3c);
    *pfVar15 = local_a0;
    pfVar15[1] = local_9c;
    pfVar15[2] = 0.0;
    fVar8 = (float)NEON_ucvtf((uint)uVar26);
    *(undefined1 *)(pfVar15 + 3) = *param_12;
    *(undefined1 *)((long)pfVar15 + 0xd) = *puVar12;
    fVar6 = (float)NEON_ucvtf((uint)uVar21);
    *(undefined1 *)((long)pfVar15 + 0xe) = *puVar13;
    uVar2 = *puVar14;
    pfVar15[4] = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar9 * param_6 + fVar6);
    pfVar15[5] = 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar8 * param_7 + fVar7);
    *(undefined1 *)((long)pfVar15 + 0xf) = uVar2;
    lVar16 = *param_8;
    fVar6 = (fVar19 - param_1) / fVar23;
    *param_8 = lVar16 + 0x18;
    fVar7 = 1.0 - fVar6;
    if ((param_13 & 1) == 0) {
      fVar7 = fVar6;
    }
    *(int *)plVar11 = (int)*plVar11 + 1;
    uVar21 = *(ushort *)(param_10 + 4);
    uVar26 = *(ushort *)(param_10 + 10);
    fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 6));
    fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 8));
    uVar1 = *(uint *)(*(long *)(*param_11 + 8) + 0x3c);
    *(float *)(lVar16 + 0x18) = fVar19;
    *(float *)(lVar16 + 0x1c) = local_ac;
    *(undefined4 *)(lVar16 + 0x20) = 0;
    fVar8 = (float)NEON_ucvtf((uint)uVar26);
    *(undefined1 *)(lVar16 + 0x24) = *param_12;
    fVar19 = (float)NEON_ucvtf((uint)uVar21);
    *(undefined1 *)(lVar16 + 0x25) = *puVar12;
    *(undefined1 *)(lVar16 + 0x26) = *puVar13;
    uVar2 = *puVar14;
    *(float *)(lVar16 + 0x28) = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar7 * fVar9 + fVar19);
    *(float *)(lVar16 + 0x2c) =
         1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) *
               ((float)((uint)uVar20 << 0x10) * fVar8 + fVar6);
    *(undefined1 *)(lVar16 + 0x27) = uVar2;
    lVar16 = *param_8;
    *param_8 = lVar16 + 0x18;
    *(int *)plVar11 = (int)*plVar11 + 1;
    uVar21 = *(ushort *)(param_10 + 4);
    uVar26 = *(ushort *)(param_10 + 8);
    uVar27 = *(ushort *)(param_10 + 10);
    fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 6));
    uVar1 = *(uint *)(*(long *)(*param_11 + 8) + 0x3c);
    *(float *)(lVar16 + 0x18) = local_b0;
    *(float *)(lVar16 + 0x1c) = fVar24;
    *(undefined4 *)(lVar16 + 0x20) = 0;
    fVar9 = (float)NEON_ucvtf((uint)uVar27);
    fVar7 = (float)NEON_ucvtf((uint)uVar26);
    *(undefined1 *)(lVar16 + 0x24) = *param_12;
    fVar19 = (float)NEON_ucvtf((uint)uVar21);
    *(undefined1 *)(lVar16 + 0x25) = *puVar12;
    *(undefined1 *)(lVar16 + 0x26) = *puVar13;
    *(undefined1 *)(lVar16 + 0x27) = *puVar14;
    *(float *)(lVar16 + 0x28) =
         (1.0 / (float)(uVar1 & 0x3fff)) * ((float)((uint)uVar22 << 0x10) * fVar7 + fVar19);
    *(float *)(lVar16 + 0x2c) =
         1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) *
               ((float)((uint)uVar20 << 0x10) * fVar9 + fVar6);
    pfVar15 = (float *)(*param_8 + 0x18);
    *param_8 = (long)pfVar15;
    *(int *)plVar11 = (int)*plVar11 + 1;
LAB_00a20934:
    puVar14 = param_12 + 3;
    puVar13 = param_12 + 2;
    puVar12 = param_12 + 1;
    plVar11 = param_8 + 1;
    fVar17 = fVar17 + local_a0;
    local_ac = local_9c - fVar4;
    uVar20 = *(ushort *)(param_10 + 4);
    uVar21 = *(ushort *)(param_10 + 10);
    fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 6));
    fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 8));
    uVar1 = *(uint *)(*(long *)(*param_11 + 8) + 0x3c);
    *pfVar15 = local_a0;
    pfVar15[1] = local_9c;
    pfVar15[2] = 0.0;
    fVar9 = (float)NEON_ucvtf((uint)uVar21);
    *(undefined1 *)(pfVar15 + 3) = *param_12;
    fVar19 = (float)NEON_ucvtf((uint)uVar20);
    *(undefined1 *)((long)pfVar15 + 0xd) = *puVar12;
    *(undefined1 *)((long)pfVar15 + 0xe) = *puVar13;
    uVar2 = *puVar14;
    pfVar15[4] = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar7 * param_6 + fVar19);
    pfVar15[5] = 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar9 * param_7 + fVar6);
    *(undefined1 *)((long)pfVar15 + 0xf) = uVar2;
    lVar16 = *param_8;
    fVar25 = (fVar25 - (fVar24 - param_2)) / fVar25;
    *param_8 = lVar16 + 0x18;
    fVar19 = 1.0 - fVar25;
    if ((param_14 & 1) == 0) {
      fVar19 = fVar25;
    }
    *(int *)plVar11 = (int)*plVar11 + 1;
    uVar20 = *(ushort *)(param_10 + 4);
    uVar21 = *(ushort *)(param_10 + 10);
    fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 6));
    fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 8));
    uVar1 = *(uint *)(*(long *)(*param_11 + 8) + 0x3c);
    *(float *)(lVar16 + 0x18) = local_b0;
    *(float *)(lVar16 + 0x1c) = fVar24;
    *(undefined4 *)(lVar16 + 0x20) = 0;
    fVar24 = (float)NEON_ucvtf((uint)uVar21);
    *(undefined1 *)(lVar16 + 0x24) = *param_12;
    *(undefined1 *)(lVar16 + 0x25) = *puVar12;
    fVar25 = (float)NEON_ucvtf((uint)uVar20);
    *(undefined1 *)(lVar16 + 0x26) = *puVar13;
    uVar2 = *puVar14;
    *(float *)(lVar16 + 0x28) =
         (1.0 / (float)(uVar1 & 0x3fff)) * ((float)((uint)uVar22 << 0x10) * fVar7 + fVar25);
    *(float *)(lVar16 + 0x2c) =
         1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar19 * fVar24 + fVar6);
    *(undefined1 *)(lVar16 + 0x27) = uVar2;
    lVar16 = *param_8;
    *param_8 = lVar16 + 0x18;
    *(int *)plVar11 = (int)*plVar11 + 1;
    uVar20 = *(ushort *)(param_10 + 6);
    uVar21 = *(ushort *)(param_10 + 8);
    uVar26 = *(ushort *)(param_10 + 10);
    fVar25 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 4));
    uVar1 = *(uint *)(*(long *)(*param_11 + 8) + 0x3c);
    *(float *)(lVar16 + 0x18) = fVar17;
    *(float *)(lVar16 + 0x1c) = local_ac;
    *(undefined4 *)(lVar16 + 0x20) = 0;
    fVar24 = (float)NEON_ucvtf((uint)uVar21);
    fVar6 = (float)NEON_ucvtf((uint)uVar26);
    fVar19 = (float)NEON_ucvtf((uint)uVar20);
    *(undefined1 *)(lVar16 + 0x24) = *param_12;
    *(undefined1 *)(lVar16 + 0x25) = *puVar12;
    *(undefined1 *)(lVar16 + 0x26) = *puVar13;
    *(undefined1 *)(lVar16 + 0x27) = *puVar14;
    *(float *)(lVar16 + 0x28) =
         (1.0 / (float)(uVar1 & 0x3fff)) * ((float)((uint)uVar22 << 0x10) * fVar24 + fVar25);
    *(float *)(lVar16 + 0x2c) =
         1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar18 * fVar6 + fVar19);
    pfVar15 = (float *)(*param_8 + 0x18);
    *param_8 = (long)pfVar15;
    *(int *)plVar11 = (int)*plVar11 + 1;
    local_b0 = fVar17;
  }
  puVar14 = param_12 + 3;
  puVar13 = param_12 + 2;
  puVar12 = param_12 + 1;
  plVar11 = param_8 + 1;
  local_a4 = local_9c - fVar4;
  local_a8 = local_a0;
  uVar22 = *(ushort *)(param_10 + 4);
  uVar20 = *(ushort *)(param_10 + 10);
  fVar19 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 6));
  fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 8));
  uVar1 = *(uint *)(*(long *)(*param_11 + 8) + 0x3c);
  *pfVar15 = local_a0;
  pfVar15[1] = local_9c;
  pfVar15[2] = 0.0;
  fVar17 = (float)NEON_ucvtf((uint)uVar20);
  *(undefined1 *)(pfVar15 + 3) = *param_12;
  fVar25 = (float)NEON_ucvtf((uint)uVar22);
  *(undefined1 *)((long)pfVar15 + 0xd) = *puVar12;
  *(undefined1 *)((long)pfVar15 + 0xe) = *puVar13;
  uVar2 = *puVar14;
  pfVar15[4] = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar4 * param_6 + fVar25);
  pfVar15[5] = 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar17 * param_7 + fVar19);
  *(undefined1 *)((long)pfVar15 + 0xf) = uVar2;
  lVar16 = *param_8;
  *param_8 = lVar16 + 0x18;
  fVar23 = (local_b0 - (local_a0 - fVar5)) / fVar23;
  fVar25 = 1.0 - fVar23;
  if ((param_13 & 1) == 0) {
    fVar25 = fVar23;
  }
  *(int *)plVar11 = (int)*plVar11 + 1;
  uVar22 = *(ushort *)(param_10 + 4);
  uVar20 = *(ushort *)(param_10 + 10);
  fVar19 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 6));
  fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 8));
  uVar1 = *(uint *)(*(long *)(*param_11 + 8) + 0x3c);
  *(float *)(lVar16 + 0x18) = local_b0;
  *(float *)(lVar16 + 0x1c) = local_ac;
  *(undefined4 *)(lVar16 + 0x20) = 0;
  fVar5 = (float)NEON_ucvtf((uint)uVar20);
  *(undefined1 *)(lVar16 + 0x24) = *param_12;
  fVar23 = (float)NEON_ucvtf((uint)uVar22);
  *(undefined1 *)(lVar16 + 0x25) = *puVar12;
  *(undefined1 *)(lVar16 + 0x26) = *puVar13;
  uVar2 = *puVar14;
  *(float *)(lVar16 + 0x28) = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar25 * fVar4 + fVar23);
  *(float *)(lVar16 + 0x2c) =
       1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar18 * fVar5 + fVar19);
  *(undefined1 *)(lVar16 + 0x27) = uVar2;
  lVar16 = *param_8;
  *param_8 = lVar16 + 0x18;
  *(int *)plVar11 = (int)*plVar11 + 1;
  uVar22 = *(ushort *)(param_10 + 6);
  uVar20 = *(ushort *)(param_10 + 8);
  uVar21 = *(ushort *)(param_10 + 10);
  fVar23 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 4));
  uVar1 = *(uint *)(*(long *)(*param_11 + 8) + 0x3c);
  *(float *)(lVar16 + 0x18) = local_a0;
  *(float *)(lVar16 + 0x1c) = local_a4;
  *(undefined4 *)(lVar16 + 0x20) = 0;
  fVar19 = (float)NEON_ucvtf((uint)uVar20);
  fVar4 = (float)NEON_ucvtf((uint)uVar21);
  *(undefined1 *)(lVar16 + 0x24) = *param_12;
  fVar25 = (float)NEON_ucvtf((uint)uVar22);
  *(undefined1 *)(lVar16 + 0x25) = *puVar12;
  *(undefined1 *)(lVar16 + 0x26) = *puVar13;
  *(undefined1 *)(lVar16 + 0x27) = *puVar14;
  *(float *)(lVar16 + 0x28) = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar19 * param_6 + fVar23);
  *(float *)(lVar16 + 0x2c) =
       1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar18 * fVar4 + fVar25);
  *param_8 = *param_8 + 0x18;
  *(int *)plVar11 = (int)*plVar11 + 1;
LAB_00a20d78:
  if (*(long *)(lVar3 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a20e44(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,float param_8,long *param_9,long param_10,long param_11
                 ,long *param_12,undefined1 *param_13,uint param_14,uint param_15,
                 undefined8 param_16,float param_17)

{
  uint uVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  float *pfVar9;
  float *pfVar10;
  long lVar11;
  float *pfVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ushort uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  ushort uVar29;
  ushort uVar30;
  ushort uVar31;
  ushort uVar32;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  undefined4 local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  long local_98;
  
  lVar3 = tpidr_el0;
  local_98 = *(long *)(lVar3 + 0x28);
  fVar21 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 8));
  fVar21 = (float)(int)(*(float *)(param_10 + 0x10) * fVar21 * param_8);
  if (ABS(fVar21) < 0.1) goto LAB_00a21b8c;
  fVar22 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 10));
  fVar22 = (float)(int)(*(float *)(param_10 + 0x14) * fVar22 * param_17);
  if (ABS(fVar22) < 0.1) goto LAB_00a21b8c;
  param_1 = param_1 - (float)(int)(fVar21 * param_4);
  fVar19 = fVar21 * param_6;
  param_2 = param_2 - (float)(int)(fVar22 * param_5);
  fVar18 = fVar22 * param_7;
  fVar17 = (float)NEON_fminnm(param_3 * 360.0,0x43b40000);
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  local_a0 = (float)(int)(fVar19 + param_1);
  local_9c = (float)(int)(fVar18 + param_2);
  fVar14 = sinf(-(fVar17 * 0.017453292));
  fVar15 = cosf(fVar17 * 0.017453292);
  fVar20 = fVar21 + param_1;
  local_b8 = (float)(int)(fVar19 + param_1) - fVar14 * 9999.0;
  fStack_b4 = (float)(int)(fVar18 + param_2) - fVar15 * 9999.0;
  local_c0 = fVar20;
  fStack_bc = param_2;
  local_a8 = param_1;
  local_a4 = param_2;
  uVar4 = FUN_019bb8ec(&local_a0,&local_b8,&local_a8,&local_c0,&local_b0);
  if ((uVar4 & 1) == 0) {
    fVar14 = fVar22 + param_2;
    local_c0 = fVar20;
    fStack_bc = fVar14;
    local_a8 = fVar20;
    local_a4 = param_2;
    uVar4 = FUN_019bb8ec(&local_a0,&local_b8,&local_a8,&local_c0,&local_b0);
    if ((((uVar4 & 1) == 0) &&
        (local_c0 = param_1, fStack_bc = fVar14, local_a8 = fVar20, local_a4 = fVar14,
        uVar4 = FUN_019bb8ec(&local_a0,&local_b8,&local_a8,&local_c0,&local_b0), (uVar4 & 1) == 0))
       && (local_c0 = param_1, fStack_bc = param_2, local_a8 = param_1, local_a4 = fVar14,
          uVar4 = FUN_019bb8ec(&local_a0,&local_b8,&local_a8,&local_c0,&local_b0), (uVar4 & 1) == 0)
       ) goto LAB_00a21b8c;
  }
  fVar15 = 1.0;
  uVar23 = 0;
  fVar14 = fVar15;
  if ((param_14 & 1) == 0) {
    uVar23 = 0x3f80;
    fVar14 = 0.0;
  }
  fVar20 = (1.0 - param_6) * fVar21;
  fVar16 = fVar15;
  fVar28 = 0.0;
  if ((param_15 & 1) == 0) {
    fVar16 = 0.0;
    fVar28 = fVar15;
  }
  fVar15 = (1.0 - param_7) * fVar22;
  if (45.0 <= fVar17) {
    if (fVar17 < 135.0) {
      pfVar10 = (float *)*param_9;
      pfVar9 = &local_b0;
      pfVar13 = (float *)((ulong)pfVar9 | 4);
      pfVar12 = (float *)((ulong)&local_a8 | 4);
      goto LAB_00a212f4;
    }
    if (fVar17 < 225.0) {
      pfVar10 = (float *)*param_9;
      pfVar9 = &local_b0;
      pfVar13 = (float *)((ulong)pfVar9 | 4);
      pfVar12 = (float *)((ulong)&local_a8 | 4);
      goto LAB_00a21524;
    }
    pfVar10 = (float *)*param_9;
    if (fVar17 < 315.0) {
      pfVar9 = &local_b0;
      pfVar13 = (float *)((ulong)pfVar9 | 4);
      pfVar12 = (float *)((ulong)&local_a8 | 4);
      goto LAB_00a21744;
    }
    pfVar9 = &local_b0;
    pfVar12 = (float *)((ulong)pfVar9 | 4);
  }
  else {
    local_a8 = fVar20 + local_a0;
    local_a4 = local_9c - fVar18;
    pfVar10 = (float *)*param_9;
    uVar29 = *(ushort *)(param_11 + 4);
    uVar30 = *(ushort *)(param_11 + 6);
    uVar31 = *(ushort *)(param_11 + 8);
    uVar32 = *(ushort *)(param_11 + 10);
    uVar1 = *(uint *)(*(long *)(*param_12 + 8) + 0x3c);
    *pfVar10 = local_a0;
    pfVar10[1] = local_9c;
    pfVar10[2] = 0.0;
    fVar24 = (float)NEON_ucvtf((uint)uVar32);
    fVar26 = (float)NEON_ucvtf((uint)uVar30);
    *(undefined1 *)(pfVar10 + 3) = *param_13;
    puVar5 = param_13 + 1;
    *(undefined1 *)((long)pfVar10 + 0xd) = *puVar5;
    puVar7 = param_13 + 2;
    fVar27 = (float)NEON_ucvtf((uint)uVar31);
    fVar17 = (float)NEON_ucvtf((uint)uVar29);
    *(undefined1 *)((long)pfVar10 + 0xe) = *puVar7;
    puVar8 = param_13 + 3;
    uVar2 = *puVar8;
    pfVar10[4] = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar27 * param_6 + fVar17);
    pfVar10[5] = 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar24 * param_7 + fVar26);
    *(undefined1 *)((long)pfVar10 + 0xf) = uVar2;
    lVar11 = *param_9;
    plVar6 = param_9 + 1;
    *param_9 = lVar11 + 0x18;
    *(int *)plVar6 = (int)*plVar6 + 1;
    uVar29 = *(ushort *)(param_11 + 4);
    uVar30 = *(ushort *)(param_11 + 10);
    fVar24 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 6));
    fVar26 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 8));
    uVar1 = *(uint *)(*(long *)(*param_12 + 8) + 0x3c);
    *(float *)(lVar11 + 0x18) = local_a8;
    *(float *)(lVar11 + 0x1c) = local_9c - fVar18;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined1 *)(lVar11 + 0x24) = *param_13;
    fVar27 = (float)NEON_ucvtf((uint)uVar30);
    fVar17 = (float)NEON_ucvtf((uint)uVar29);
    *(undefined1 *)(lVar11 + 0x25) = *puVar5;
    *(undefined1 *)(lVar11 + 0x26) = *puVar7;
    uVar2 = *puVar8;
    *(float *)(lVar11 + 0x28) =
         (1.0 / (float)(uVar1 & 0x3fff)) * ((float)((uint)uVar23 << 0x10) * fVar26 + fVar17);
    *(float *)(lVar11 + 0x2c) =
         1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar16 * fVar27 + fVar24);
    *(undefined1 *)(lVar11 + 0x27) = uVar2;
    lVar11 = *param_9;
    fVar17 = (local_b0 - param_1) / fVar21;
    *param_9 = lVar11 + 0x18;
    fVar26 = 1.0 - fVar17;
    if ((param_14 & 1) == 0) {
      fVar26 = fVar17;
    }
    *(int *)plVar6 = (int)*plVar6 + 1;
    uVar29 = *(ushort *)(param_11 + 4);
    uVar30 = *(ushort *)(param_11 + 10);
    fVar17 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 6));
    fVar27 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 8));
    uVar1 = *(uint *)(*(long *)(*param_12 + 8) + 0x3c);
    *(float *)(lVar11 + 0x18) = local_b0;
    *(undefined4 *)(lVar11 + 0x1c) = local_ac;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    fVar24 = (float)NEON_ucvtf((uint)uVar30);
    *(undefined1 *)(lVar11 + 0x24) = *param_13;
    fVar25 = (float)NEON_ucvtf((uint)uVar29);
    *(undefined1 *)(lVar11 + 0x25) = *puVar5;
    *(undefined1 *)(lVar11 + 0x26) = *puVar7;
    uVar2 = *puVar8;
    *(float *)(lVar11 + 0x28) = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar26 * fVar27 + fVar25);
    *(float *)(lVar11 + 0x2c) =
         1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar16 * fVar24 + fVar17);
    *(undefined1 *)(lVar11 + 0x27) = uVar2;
    pfVar10 = (float *)(*param_9 + 0x18);
    *param_9 = (long)pfVar10;
    pfVar12 = (float *)((ulong)&local_a8 | 4);
    *(int *)plVar6 = (int)*plVar6 + 1;
    pfVar9 = &local_a8;
    pfVar13 = pfVar12;
LAB_00a212f4:
    plVar6 = param_9 + 1;
    fVar17 = *pfVar9;
    fVar26 = *pfVar13;
    local_a8 = fVar20 + local_a0;
    local_a4 = fVar15 + local_9c;
    pfVar9 = &local_a8;
    uVar29 = *(ushort *)(param_11 + 4);
    uVar30 = *(ushort *)(param_11 + 10);
    fVar27 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 6));
    fVar24 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 8));
    uVar1 = *(uint *)(*(long *)(*param_12 + 8) + 0x3c);
    *pfVar10 = local_a0;
    pfVar10[1] = local_9c;
    pfVar10[2] = 0.0;
    fVar25 = (float)NEON_ucvtf((uint)uVar30);
    *(undefined1 *)(pfVar10 + 3) = *param_13;
    fVar20 = (float)NEON_ucvtf((uint)uVar29);
    *(undefined1 *)((long)pfVar10 + 0xd) = param_13[1];
    *(undefined1 *)((long)pfVar10 + 0xe) = param_13[2];
    uVar2 = param_13[3];
    pfVar10[4] = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar24 * param_6 + fVar20);
    pfVar10[5] = 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar25 * param_7 + fVar27);
    *(undefined1 *)((long)pfVar10 + 0xf) = uVar2;
    lVar11 = *param_9;
    *param_9 = lVar11 + 0x18;
    *(int *)plVar6 = (int)*plVar6 + 1;
    uVar29 = *(ushort *)(param_11 + 4);
    uVar30 = *(ushort *)(param_11 + 10);
    fVar20 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 6));
    fVar27 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 8));
    uVar1 = *(uint *)(*(long *)(*param_12 + 8) + 0x3c);
    *(float *)(lVar11 + 0x18) = local_a8;
    *(float *)(lVar11 + 0x1c) = local_a4;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    fVar24 = (float)NEON_ucvtf((uint)uVar30);
    *(undefined1 *)(lVar11 + 0x24) = *param_13;
    fVar25 = (float)NEON_ucvtf((uint)uVar29);
    *(undefined1 *)(lVar11 + 0x25) = param_13[1];
    *(undefined1 *)(lVar11 + 0x26) = param_13[2];
    uVar2 = param_13[3];
    *(float *)(lVar11 + 0x28) =
         (1.0 / (float)(uVar1 & 0x3fff)) * ((float)((uint)uVar23 << 0x10) * fVar27 + fVar25);
    *(float *)(lVar11 + 0x2c) =
         1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar28 * fVar24 + fVar20);
    *(undefined1 *)(lVar11 + 0x27) = uVar2;
    lVar11 = *param_9;
    *param_9 = lVar11 + 0x18;
    fVar20 = 1.0 - (fVar22 - (fVar26 - param_2)) / fVar22;
    fVar27 = 1.0 - fVar20;
    if ((param_15 & 1) == 0) {
      fVar27 = fVar20;
    }
    *(int *)plVar6 = (int)*plVar6 + 1;
    uVar29 = *(ushort *)(param_11 + 6);
    uVar30 = *(ushort *)(param_11 + 10);
    fVar20 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 4));
    fVar24 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 8));
    uVar1 = *(uint *)(*(long *)(*param_12 + 8) + 0x3c);
    *(float *)(lVar11 + 0x18) = fVar17;
    *(float *)(lVar11 + 0x1c) = fVar26;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    fVar17 = (float)NEON_ucvtf((uint)uVar30);
    *(undefined1 *)(lVar11 + 0x24) = *param_13;
    fVar26 = (float)NEON_ucvtf((uint)uVar29);
    *(undefined1 *)(lVar11 + 0x25) = param_13[1];
    *(undefined1 *)(lVar11 + 0x26) = param_13[2];
    *(undefined1 *)(lVar11 + 0x27) = param_13[3];
    *(float *)(lVar11 + 0x28) =
         (1.0 / (float)(uVar1 & 0x3fff)) * ((float)((uint)uVar23 << 0x10) * fVar24 + fVar20);
    *(float *)(lVar11 + 0x2c) =
         1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar27 * fVar17 + fVar26);
    pfVar10 = (float *)(*param_9 + 0x18);
    *param_9 = (long)pfVar10;
    *(int *)plVar6 = (int)*plVar6 + 1;
    pfVar13 = pfVar12;
LAB_00a21524:
    puVar8 = param_13 + 3;
    puVar7 = param_13 + 2;
    puVar5 = param_13 + 1;
    plVar6 = param_9 + 1;
    fVar20 = *pfVar9;
    fVar17 = *pfVar13;
    local_a4 = fVar15 + local_9c;
    local_a8 = local_a0 - fVar19;
    uVar23 = *(ushort *)(param_11 + 4);
    uVar29 = *(ushort *)(param_11 + 10);
    fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 6));
    fVar26 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 8));
    uVar1 = *(uint *)(*(long *)(*param_12 + 8) + 0x3c);
    *pfVar10 = local_a0;
    pfVar10[1] = local_9c;
    pfVar10[2] = 0.0;
    fVar27 = (float)NEON_ucvtf((uint)uVar29);
    *(undefined1 *)(pfVar10 + 3) = *param_13;
    fVar24 = (float)NEON_ucvtf((uint)uVar23);
    *(undefined1 *)((long)pfVar10 + 0xd) = *puVar5;
    *(undefined1 *)((long)pfVar10 + 0xe) = *puVar7;
    uVar2 = *puVar8;
    pfVar10[4] = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar26 * param_6 + fVar24);
    pfVar10[5] = 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar27 * param_7 + fVar15);
    *(undefined1 *)((long)pfVar10 + 0xf) = uVar2;
    lVar11 = *param_9;
    *param_9 = lVar11 + 0x18;
    *(int *)plVar6 = (int)*plVar6 + 1;
    uVar23 = *(ushort *)(param_11 + 4);
    uVar29 = *(ushort *)(param_11 + 10);
    fVar26 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 6));
    fVar24 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 8));
    uVar1 = *(uint *)(*(long *)(*param_12 + 8) + 0x3c);
    *(float *)(lVar11 + 0x18) = local_a0 - fVar19;
    *(float *)(lVar11 + 0x1c) = local_a4;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    fVar27 = (float)NEON_ucvtf((uint)uVar29);
    *(undefined1 *)(lVar11 + 0x24) = *param_13;
    fVar15 = (float)NEON_ucvtf((uint)uVar23);
    *(undefined1 *)(lVar11 + 0x25) = *puVar5;
    *(undefined1 *)(lVar11 + 0x26) = *puVar7;
    uVar2 = *puVar8;
    *(float *)(lVar11 + 0x28) = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar14 * fVar24 + fVar15);
    *(float *)(lVar11 + 0x2c) =
         1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar28 * fVar27 + fVar26);
    *(undefined1 *)(lVar11 + 0x27) = uVar2;
    lVar11 = *param_9;
    fVar15 = (fVar20 - param_1) / fVar21;
    *param_9 = lVar11 + 0x18;
    fVar26 = 1.0 - fVar15;
    if ((param_14 & 1) == 0) {
      fVar26 = fVar15;
    }
    *(int *)plVar6 = (int)*plVar6 + 1;
    uVar23 = *(ushort *)(param_11 + 6);
    uVar29 = *(ushort *)(param_11 + 10);
    fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 4));
    fVar27 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 8));
    uVar1 = *(uint *)(*(long *)(*param_12 + 8) + 0x3c);
    *(float *)(lVar11 + 0x18) = fVar20;
    *(float *)(lVar11 + 0x1c) = fVar17;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    fVar20 = (float)NEON_ucvtf((uint)uVar29);
    *(undefined1 *)(lVar11 + 0x24) = *param_13;
    fVar17 = (float)NEON_ucvtf((uint)uVar23);
    *(undefined1 *)(lVar11 + 0x25) = *puVar5;
    *(undefined1 *)(lVar11 + 0x26) = *puVar7;
    uVar2 = *puVar8;
    *(float *)(lVar11 + 0x28) = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar26 * fVar27 + fVar15);
    *(float *)(lVar11 + 0x2c) =
         1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar28 * fVar20 + fVar17);
    *(undefined1 *)(lVar11 + 0x27) = uVar2;
    pfVar10 = (float *)(*param_9 + 0x18);
    *param_9 = (long)pfVar10;
    *(int *)plVar6 = (int)*plVar6 + 1;
    pfVar9 = &local_a8;
    pfVar13 = pfVar12;
LAB_00a21744:
    puVar8 = param_13 + 3;
    puVar7 = param_13 + 2;
    plVar6 = param_9 + 1;
    puVar5 = param_13 + 1;
    fVar17 = *pfVar9;
    fVar26 = *pfVar13;
    pfVar9 = &local_a8;
    local_a8 = local_a0 - fVar19;
    local_a4 = local_9c - fVar18;
    uVar23 = *(ushort *)(param_11 + 4);
    uVar29 = *(ushort *)(param_11 + 10);
    fVar20 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 6));
    fVar28 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 8));
    uVar1 = *(uint *)(*(long *)(*param_12 + 8) + 0x3c);
    *pfVar10 = local_a0;
    pfVar10[1] = local_9c;
    pfVar10[2] = 0.0;
    fVar15 = (float)NEON_ucvtf((uint)uVar29);
    fVar27 = (float)NEON_ucvtf((uint)uVar23);
    *(undefined1 *)(pfVar10 + 3) = *param_13;
    *(undefined1 *)((long)pfVar10 + 0xd) = *puVar5;
    *(undefined1 *)((long)pfVar10 + 0xe) = *puVar7;
    uVar2 = *puVar8;
    pfVar10[4] = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar28 * param_6 + fVar27);
    pfVar10[5] = 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar15 * param_7 + fVar20);
    *(undefined1 *)((long)pfVar10 + 0xf) = uVar2;
    lVar11 = *param_9;
    *param_9 = lVar11 + 0x18;
    *(int *)plVar6 = (int)*plVar6 + 1;
    uVar23 = *(ushort *)(param_11 + 4);
    uVar29 = *(ushort *)(param_11 + 10);
    fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 6));
    fVar20 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 8));
    uVar1 = *(uint *)(*(long *)(*param_12 + 8) + 0x3c);
    *(float *)(lVar11 + 0x18) = local_a0 - fVar19;
    *(float *)(lVar11 + 0x1c) = local_9c - fVar18;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    fVar28 = (float)NEON_ucvtf((uint)uVar29);
    *(undefined1 *)(lVar11 + 0x24) = *param_13;
    fVar19 = (float)NEON_ucvtf((uint)uVar23);
    *(undefined1 *)(lVar11 + 0x25) = *puVar5;
    *(undefined1 *)(lVar11 + 0x26) = *puVar7;
    uVar2 = *puVar8;
    *(float *)(lVar11 + 0x28) = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar14 * fVar20 + fVar19);
    *(float *)(lVar11 + 0x2c) =
         1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar16 * fVar28 + fVar15);
    *(undefined1 *)(lVar11 + 0x27) = uVar2;
    lVar11 = *param_9;
    *param_9 = lVar11 + 0x18;
    fVar22 = 1.0 - (fVar22 - (fVar26 - param_2)) / fVar22;
    fVar19 = 1.0 - fVar22;
    if ((param_15 & 1) == 0) {
      fVar19 = fVar22;
    }
    *(int *)plVar6 = (int)*plVar6 + 1;
    uVar23 = *(ushort *)(param_11 + 6);
    uVar29 = *(ushort *)(param_11 + 10);
    fVar22 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 4));
    fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 8));
    uVar1 = *(uint *)(*(long *)(*param_12 + 8) + 0x3c);
    *(float *)(lVar11 + 0x18) = fVar17;
    *(float *)(lVar11 + 0x1c) = fVar26;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    fVar20 = (float)NEON_ucvtf((uint)uVar29);
    *(undefined1 *)(lVar11 + 0x24) = *param_13;
    fVar17 = (float)NEON_ucvtf((uint)uVar23);
    *(undefined1 *)(lVar11 + 0x25) = *puVar5;
    *(undefined1 *)(lVar11 + 0x26) = *puVar7;
    *(undefined1 *)(lVar11 + 0x27) = *puVar8;
    *(float *)(lVar11 + 0x28) = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar14 * fVar15 + fVar22);
    *(float *)(lVar11 + 0x2c) =
         1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar19 * fVar20 + fVar17);
    pfVar10 = (float *)(*param_9 + 0x18);
    *param_9 = (long)pfVar10;
    *(int *)plVar6 = (int)*plVar6 + 1;
  }
  puVar8 = param_13 + 3;
  puVar7 = param_13 + 2;
  plVar6 = param_9 + 1;
  puVar5 = param_13 + 1;
  fVar15 = *pfVar9;
  fVar22 = *pfVar12;
  local_a4 = local_9c - fVar18;
  local_a8 = local_a0;
  uVar23 = *(ushort *)(param_11 + 4);
  uVar29 = *(ushort *)(param_11 + 10);
  fVar17 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 6));
  fVar18 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 8));
  uVar1 = *(uint *)(*(long *)(*param_12 + 8) + 0x3c);
  *pfVar10 = local_a0;
  pfVar10[1] = local_9c;
  pfVar10[2] = 0.0;
  fVar14 = (float)NEON_ucvtf((uint)uVar29);
  *(undefined1 *)(pfVar10 + 3) = *param_13;
  fVar19 = (float)NEON_ucvtf((uint)uVar23);
  *(undefined1 *)((long)pfVar10 + 0xd) = *puVar5;
  *(undefined1 *)((long)pfVar10 + 0xe) = *puVar7;
  uVar2 = *puVar8;
  pfVar10[4] = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar18 * param_6 + fVar19);
  pfVar10[5] = 1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar14 * param_7 + fVar17);
  *(undefined1 *)((long)pfVar10 + 0xf) = uVar2;
  lVar11 = *param_9;
  *param_9 = lVar11 + 0x18;
  *(int *)plVar6 = (int)*plVar6 + 1;
  uVar23 = *(ushort *)(param_11 + 6);
  uVar29 = *(ushort *)(param_11 + 10);
  fVar19 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 4));
  fVar18 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 8));
  uVar1 = *(uint *)(*(long *)(*param_12 + 8) + 0x3c);
  *(float *)(lVar11 + 0x18) = local_a0;
  *(float *)(lVar11 + 0x1c) = local_a4;
  *(undefined4 *)(lVar11 + 0x20) = 0;
  *(undefined1 *)(lVar11 + 0x24) = *param_13;
  fVar14 = (float)NEON_ucvtf((uint)uVar29);
  fVar17 = (float)NEON_ucvtf((uint)uVar23);
  *(undefined1 *)(lVar11 + 0x25) = *puVar5;
  *(undefined1 *)(lVar11 + 0x26) = *puVar7;
  uVar2 = *puVar8;
  *(float *)(lVar11 + 0x28) = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar18 * param_6 + fVar19);
  *(float *)(lVar11 + 0x2c) =
       1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar16 * fVar14 + fVar17);
  *(undefined1 *)(lVar11 + 0x27) = uVar2;
  lVar11 = *param_9;
  fVar21 = (fVar15 - param_1) / fVar21;
  *param_9 = lVar11 + 0x18;
  fVar19 = 1.0 - fVar21;
  if ((param_14 & 1) == 0) {
    fVar19 = fVar21;
  }
  *(int *)plVar6 = (int)*plVar6 + 1;
  uVar23 = *(ushort *)(param_11 + 6);
  uVar29 = *(ushort *)(param_11 + 10);
  fVar21 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 4));
  fVar17 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 8));
  uVar1 = *(uint *)(*(long *)(*param_12 + 8) + 0x3c);
  *(float *)(lVar11 + 0x18) = fVar15;
  *(float *)(lVar11 + 0x1c) = fVar22;
  *(undefined4 *)(lVar11 + 0x20) = 0;
  fVar18 = (float)NEON_ucvtf((uint)uVar29);
  fVar22 = (float)NEON_ucvtf((uint)uVar23);
  *(undefined1 *)(lVar11 + 0x24) = *param_13;
  *(undefined1 *)(lVar11 + 0x25) = *puVar5;
  *(undefined1 *)(lVar11 + 0x26) = *puVar7;
  *(undefined1 *)(lVar11 + 0x27) = *puVar8;
  *(float *)(lVar11 + 0x28) = (1.0 / (float)(uVar1 & 0x3fff)) * (fVar19 * fVar17 + fVar21);
  *(float *)(lVar11 + 0x2c) =
       1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * (fVar16 * fVar18 + fVar22);
  *param_9 = *param_9 + 0x18;
  *(int *)plVar6 = (int)*plVar6 + 1;
LAB_00a21b8c:
  if (*(long *)(lVar3 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

