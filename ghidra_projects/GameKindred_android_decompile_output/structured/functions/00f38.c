// functions/00f38 — 8 functions
#include "libGameKindred.h"




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f383b0(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00f384c8();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00f384c8(undefined8 *param_1,int param_2,ushort *param_3,long param_4,long param_5,
                 long param_6,long param_7,float *param_8,undefined8 *param_9,undefined8 *param_10)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  if (param_2 != 0) {
    uVar2 = param_2 - 1;
    uVar27 = *param_10;
    fVar28 = *(float *)(param_10 + 1);
    uVar29 = *param_9;
    fVar30 = *(float *)(param_9 + 1);
    fVar20 = 0.0 - *param_8;
    fVar15 = 1.0 - *param_8;
    fVar10 = 1.0 - param_8[1];
    fVar7 = 0.0 - param_8[1];
    uVar31 = NEON_fmov(0x3f800000,4);
    puVar6 = param_1;
    do {
      uVar1 = *param_3;
      fVar11 = *(float *)(param_5 + (ulong)uVar1 * 8);
      fVar12 = *(float *)(param_5 + (ulong)((uint)uVar1 << 1 | 1) * 4);
      fVar26 = *(float *)(param_6 + (ulong)(uint)uVar1 * 4) * 0.017453292;
      fVar8 = sinf(fVar26);
      fVar26 = cosf(fVar26);
      fVar18 = (float)uVar29;
      fVar24 = (float)((ulong)uVar29 >> 0x20);
      fVar21 = (float)uVar27;
      fVar23 = (float)((ulong)uVar27 >> 0x20);
      fVar13 = (fVar18 * fVar8 + fVar21 * fVar26) * fVar11;
      fVar14 = (fVar24 * fVar8 + fVar23 * fVar26) * fVar11;
      fVar11 = fVar11 * (fVar30 * fVar8 + fVar28 * fVar26);
      fVar9 = fVar12 * (fVar30 * fVar26 - fVar28 * fVar8);
      fVar18 = (fVar21 * -fVar8 + fVar18 * fVar26) * fVar12;
      fVar12 = (fVar23 * -fVar8 + fVar24 * fVar26) * fVar12;
      puVar5 = (undefined8 *)(param_4 + (ulong)uVar1 * 0xc);
      uVar19 = *puVar5;
      fVar21 = *(float *)(puVar5 + 1);
      fVar8 = (float)uVar19;
      fVar23 = fVar8 + fVar20 * fVar13;
      fVar26 = (float)((ulong)uVar19 >> 0x20);
      fVar25 = fVar26 + fVar20 * fVar14;
      fVar8 = fVar8 + fVar15 * fVar13;
      fVar26 = fVar26 + fVar15 * fVar14;
      fVar32 = fVar21 + fVar20 * fVar11;
      fVar33 = fVar10 * fVar9;
      fVar9 = fVar7 * fVar9;
      fVar13 = fVar10 * fVar18;
      fVar14 = fVar10 * fVar12;
      fVar21 = fVar21 + fVar15 * fVar11;
      uVar22 = CONCAT44(fVar14 + fVar25,fVar13 + fVar23);
      fVar18 = fVar7 * fVar18;
      fVar12 = fVar7 * fVar12;
      fVar24 = fVar33 + fVar32;
      fVar11 = fVar9 + fVar21;
      puVar5 = (undefined8 *)(param_7 + (ulong)uVar1 * 0x10);
      uVar17 = puVar5[1];
      uVar16 = *puVar5;
      uVar19 = CONCAT44(fVar12 + fVar26,fVar18 + fVar8);
      param_2 = param_2 + -1;
      *(float *)(puVar6 + 1) = fVar11;
      *puVar6 = uVar19;
      *(undefined8 *)((long)puVar6 + 0x1c) = 0x3f800000;
      *(undefined8 *)((long)puVar6 + 0x14) = uVar17;
      *(undefined8 *)((long)puVar6 + 0xc) = uVar16;
      *(float *)((long)puVar6 + 0x2c) = fVar33 + fVar21;
      *(ulong *)((long)puVar6 + 0x24) = CONCAT44(fVar14 + fVar26,fVar13 + fVar8);
      puVar6[8] = uVar31;
      puVar6[7] = uVar17;
      puVar6[6] = uVar16;
      *(float *)(puVar6 + 10) = fVar24;
      puVar6[9] = uVar22;
      *(undefined8 *)((long)puVar6 + 100) = 0x3f80000000000000;
      *(undefined8 *)((long)puVar6 + 0x5c) = uVar17;
      *(undefined8 *)((long)puVar6 + 0x54) = uVar16;
      *(float *)((long)puVar6 + 0x74) = fVar24;
      *(undefined8 *)((long)puVar6 + 0x6c) = uVar22;
      puVar6[0x11] = 0x3f80000000000000;
      puVar6[0x10] = uVar17;
      puVar6[0xf] = uVar16;
      *(float *)(puVar6 + 0x13) = fVar9 + fVar32;
      puVar6[0x12] = CONCAT44(fVar12 + fVar25,fVar18 + fVar23);
      *(undefined4 *)((long)puVar6 + 0xac) = 0;
      *(undefined4 *)(puVar6 + 0x16) = 0;
      *(undefined8 *)((long)puVar6 + 0xa4) = uVar17;
      *(undefined8 *)((long)puVar6 + 0x9c) = uVar16;
      *(float *)((long)puVar6 + 0xbc) = fVar11;
      *(undefined8 *)((long)puVar6 + 0xb4) = uVar19;
      puVar6[0x1a] = 0x3f800000;
      puVar6[0x19] = uVar17;
      puVar6[0x18] = uVar16;
      puVar6 = puVar6 + 0x1b;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
    param_1 = param_1 + (ulong)uVar2 * 0x1b + 0x1b;
  }
  if (*(long *)(lVar3 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}




void FUN_00f38814(void)

{
  FUN_00f384c8();
  return;
}




void FUN_00f38820(undefined8 *param_1,int param_2,ushort *param_3,long param_4,long param_5,
                 long param_6,long param_7,float *param_8,long param_9,float *param_10)

{
  float *pfVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  
  lVar5 = tpidr_el0;
  lVar6 = *(long *)(lVar5 + 0x28);
  if (param_2 != 0) {
    uVar3 = param_2 - 1;
    fVar18 = 0.0 - *param_8;
    fVar17 = 1.0 - *param_8;
    fVar14 = 1.0 - param_8[1];
    fVar9 = 0.0 - param_8[1];
    fVar10 = *param_10;
    fVar11 = param_10[1];
    fVar12 = param_10[2];
    puVar7 = param_1;
    do {
      uVar2 = *param_3;
      uVar8 = (ulong)uVar2;
      fVar27 = *(float *)(param_5 + uVar8 * 8);
      fVar26 = *(float *)(param_5 + (ulong)((uint)uVar2 << 1 | 1) * 4);
      fVar21 = *(float *)(param_6 + (ulong)(uint)uVar2 * 4) * 0.017453292;
      fVar13 = sinf(fVar21);
      fVar21 = cosf(fVar21);
      pfVar1 = (float *)(param_9 + uVar8 * 0xc);
      fVar23 = *pfVar1;
      fVar24 = pfVar1[1];
      fVar25 = pfVar1[2];
      fVar22 = fVar23 * fVar23 + fVar24 * fVar24 + fVar25 * fVar25;
      fVar15 = SQRT(fVar22);
      if (NAN(fVar15)) {
        fVar15 = sqrtf(fVar22);
      }
      fVar19 = DAT_03218f7c;
      fVar20 = DAT_03218f78;
      fVar28 = DAT_03218f80;
      if (1e-06 <= ABS(fVar15)) {
        fVar15 = SQRT(fVar22);
        if (NAN(fVar15)) {
          fVar15 = sqrtf(fVar22);
        }
        fVar19 = fVar24 / fVar15;
        fVar20 = fVar23 / fVar15;
        fVar28 = fVar25 / fVar15;
      }
      fVar25 = fVar12 * fVar19 - fVar11 * fVar28;
      fVar24 = fVar10 * fVar28 - fVar12 * fVar20;
      fVar22 = fVar11 * fVar20 - fVar10 * fVar19;
      fVar23 = fVar22 * fVar22 + fVar25 * fVar25 + fVar24 * fVar24;
      fVar15 = SQRT(fVar23);
      if (NAN(fVar15)) {
        fVar15 = sqrtf(fVar23);
      }
      fVar29 = (float)DAT_03218f68;
      fVar30 = DAT_03218f68._4_4_;
      fVar31 = DAT_03218f70;
      if (1e-06 <= ABS(fVar15)) {
        fVar15 = SQRT(fVar23);
        if (NAN(fVar15)) {
          fVar15 = sqrtf(fVar23);
        }
        fVar29 = fVar25 / fVar15;
        fVar30 = fVar24 / fVar15;
        fVar31 = fVar22 / fVar15;
      }
      pfVar1 = (float *)(param_4 + uVar8 * 0xc);
      fVar23 = fVar27 * (fVar13 * fVar20 + fVar21 * fVar29);
      fVar24 = fVar27 * (fVar13 * fVar19 + fVar21 * fVar30);
      fVar27 = fVar27 * (fVar13 * fVar28 + fVar21 * fVar31);
      fVar15 = fVar26 * (fVar21 * fVar20 - fVar29 * fVar13);
      fVar22 = fVar26 * (fVar21 * fVar19 - fVar30 * fVar13);
      fVar26 = fVar26 * (fVar21 * fVar28 - fVar31 * fVar13);
      fVar34 = fVar14 * fVar15;
      fVar35 = fVar14 * fVar22;
      fVar36 = fVar14 * fVar26;
      fVar15 = fVar9 * fVar15;
      fVar22 = fVar9 * fVar22;
      fVar26 = fVar9 * fVar26;
      fVar29 = *pfVar1 + fVar18 * fVar23;
      fVar30 = pfVar1[1] + fVar18 * fVar24;
      fVar31 = pfVar1[2] + fVar18 * fVar27;
      fVar13 = *pfVar1 + fVar17 * fVar23;
      fVar23 = pfVar1[1] + fVar17 * fVar24;
      fVar24 = pfVar1[2] + fVar17 * fVar27;
      fVar19 = fVar34 + fVar29;
      fVar20 = fVar35 + fVar30;
      fVar28 = fVar36 + fVar31;
      fVar21 = fVar15 + fVar13;
      fVar27 = fVar22 + fVar23;
      fVar25 = fVar26 + fVar24;
      puVar4 = (undefined8 *)(param_7 + uVar8 * 0x10);
      uVar33 = puVar4[1];
      uVar32 = *puVar4;
      uVar16 = NEON_fmov(0x3f800000,4);
      *(float *)(puVar7 + 1) = fVar25;
      param_3 = param_3 + 1;
      param_2 = param_2 + -1;
      *puVar7 = CONCAT44(fVar27,fVar21);
      *(undefined8 *)((long)puVar7 + 0x1c) = 0x3f800000;
      *(undefined8 *)((long)puVar7 + 0x14) = uVar33;
      *(undefined8 *)((long)puVar7 + 0xc) = uVar32;
      *(float *)((long)puVar7 + 0x2c) = fVar36 + fVar24;
      *(ulong *)((long)puVar7 + 0x24) = CONCAT44(fVar35 + fVar23,fVar34 + fVar13);
      puVar7[8] = uVar16;
      puVar7[7] = uVar33;
      puVar7[6] = uVar32;
      *(float *)(puVar7 + 10) = fVar28;
      puVar7[9] = CONCAT44(fVar20,fVar19);
      *(undefined8 *)((long)puVar7 + 100) = 0x3f80000000000000;
      *(undefined8 *)((long)puVar7 + 0x5c) = uVar33;
      *(undefined8 *)((long)puVar7 + 0x54) = uVar32;
      *(float *)((long)puVar7 + 0x74) = fVar28;
      *(ulong *)((long)puVar7 + 0x6c) = CONCAT44(fVar20,fVar19);
      puVar7[0x11] = 0x3f80000000000000;
      puVar7[0x10] = uVar33;
      puVar7[0xf] = uVar32;
      *(float *)(puVar7 + 0x13) = fVar26 + fVar31;
      puVar7[0x12] = CONCAT44(fVar22 + fVar30,fVar15 + fVar29);
      *(undefined4 *)((long)puVar7 + 0xac) = 0;
      *(undefined4 *)(puVar7 + 0x16) = 0;
      *(undefined8 *)((long)puVar7 + 0xa4) = uVar33;
      *(undefined8 *)((long)puVar7 + 0x9c) = uVar32;
      *(float *)((long)puVar7 + 0xbc) = fVar25;
      *(ulong *)((long)puVar7 + 0xb4) = CONCAT44(fVar27,fVar21);
      puVar7[0x1a] = 0x3f800000;
      puVar7[0x19] = uVar33;
      puVar7[0x18] = uVar32;
      puVar7 = puVar7 + 0x1b;
    } while (param_2 != 0);
    param_1 = param_1 + (ulong)uVar3 * 0x1b + 0x1b;
  }
  if (*(long *)(lVar5 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f38cc8(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00f38ddc();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f38ddc(long param_1,int param_2,ushort *param_3,long param_4,long param_5,long param_6,
                 long param_7,undefined8 *param_8,undefined8 *param_9)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  if (param_2 != 0) {
    uVar21 = *param_8;
    fVar23 = *(float *)(param_8 + 1);
    uVar25 = *param_9;
    fVar27 = *(float *)(param_9 + 1);
    iVar8 = 0;
    lVar7 = param_1;
    do {
      uVar1 = *param_3;
      uVar9 = (ulong)uVar1;
      fVar12 = *(float *)(param_5 + uVar9 * 8);
      fVar13 = *(float *)(param_5 + (ulong)((uint)uVar1 << 1 | 1) * 4);
      fVar19 = *(float *)(param_6 + uVar9 * 4) * 0.017453292;
      fVar10 = sinf(fVar19);
      fVar19 = cosf(fVar19);
      fVar24 = (float)uVar25;
      fVar26 = (float)((ulong)uVar25 >> 0x20);
      fVar20 = (float)uVar21;
      fVar22 = (float)((ulong)uVar21 >> 0x20);
      puVar5 = (undefined8 *)(param_4 + (ulong)(uint)uVar1 * 0xc);
      puVar6 = (undefined8 *)(param_7 + uVar9 * 0x10);
      uVar18 = puVar6[1];
      uVar16 = *puVar6;
      uVar11 = *puVar5;
      fVar14 = *(float *)(puVar5 + 1);
      lVar4 = 0;
      puVar6 = &DAT_01bf82f0;
      do {
        puVar5 = (undefined8 *)(lVar7 + lVar4);
        lVar4 = lVar4 + 0x24;
        fVar15 = (float)*puVar6;
        fVar17 = (float)((ulong)*puVar6 >> 0x20);
        *puVar5 = CONCAT44((float)((ulong)uVar11 >> 0x20) +
                           (fVar22 * fVar10 + fVar26 * fVar19) * fVar12 * fVar15 +
                           (fVar26 * -fVar10 + fVar22 * fVar19) * fVar13 * fVar17,
                           (float)uVar11 + (fVar20 * fVar10 + fVar24 * fVar19) * fVar12 * fVar15 +
                           (fVar24 * -fVar10 + fVar20 * fVar19) * fVar13 * fVar17);
        *(float *)(puVar5 + 1) =
             fVar14 + fVar12 * (fVar23 * fVar10 + fVar27 * fVar19) * fVar15 +
             fVar13 * (fVar23 * fVar19 - fVar27 * fVar10) * fVar17;
        *(ulong *)((long)puVar5 + 0x1c) = CONCAT44(fVar17 + 0.5,fVar15 + 0.5);
        *(undefined8 *)((long)puVar5 + 0x14) = uVar18;
        *(undefined8 *)((long)puVar5 + 0xc) = uVar16;
        puVar6 = puVar6 + 1;
      } while (lVar4 != 0x288);
      iVar8 = iVar8 + 1;
      lVar7 = lVar7 + 0x288;
      param_3 = param_3 + 1;
    } while (iVar8 != param_2);
    param_1 = param_1 + (ulong)(param_2 - 1) * 0x288 + 0x288;
  }
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}




void FUN_00f38fec(void)

{
  FUN_00f38ddc();
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f38ff8(long param_1,int param_2,ushort *param_3,long param_4,long param_5,long param_6,
                 long param_7,long param_8,float *param_9)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  if (param_2 != 0) {
    uVar16 = *(undefined8 *)(param_9 + 1);
    fVar18 = *param_9;
    fVar17 = (float)((ulong)uVar16 >> 0x20);
    iVar9 = 0;
    lVar7 = param_1;
    do {
      uVar1 = *param_3;
      uVar8 = (ulong)uVar1;
      fVar13 = *(float *)(param_5 + uVar8 * 8);
      fVar14 = *(float *)(param_5 + (ulong)((uint)uVar1 << 1 | 1) * 4);
      fVar22 = *(float *)(param_6 + uVar8 * 4) * 0.017453292;
      fVar10 = sinf(fVar22);
      fVar22 = cosf(fVar22);
      lVar5 = uVar8 + (ulong)(uint)uVar1 * 2;
      puVar6 = (undefined8 *)(param_8 + lVar5 * 4);
      uVar25 = *puVar6;
      fVar26 = *(float *)(puVar6 + 1);
      fVar19 = (float)uVar25;
      fVar24 = (float)((ulong)uVar25 >> 0x20);
      fVar23 = fVar19 * fVar19 + fVar24 * fVar24 + fVar26 * fVar26;
      fVar15 = SQRT(fVar23);
      if (NAN(fVar15)) {
        fVar15 = sqrtf(fVar23);
      }
      uVar25 = _DAT_03218f78;
      fVar29 = DAT_03218f80;
      if (1e-06 <= ABS(fVar15)) {
        fVar15 = SQRT(fVar23);
        if (NAN(fVar15)) {
          fVar15 = sqrtf(fVar23);
        }
        uVar25 = CONCAT44(fVar24 / fVar15,fVar19 / fVar15);
        fVar29 = fVar26 / fVar15;
      }
      fVar19 = (float)((ulong)uVar25 >> 0x20);
      fVar15 = (float)uVar25;
      fVar23 = (float)uVar16;
      fVar26 = fVar23 * fVar15 - fVar18 * fVar19;
      fVar27 = fVar17 * fVar19 - fVar23 * fVar29;
      fVar28 = fVar18 * fVar29 - fVar17 * fVar15;
      fVar24 = fVar26 * fVar26 + fVar27 * fVar27 + fVar28 * fVar28;
      fVar23 = SQRT(fVar24);
      if (NAN(fVar23)) {
        fVar23 = sqrtf(fVar24);
      }
      uVar25 = DAT_03218f68;
      fVar11 = DAT_03218f70;
      if (1e-06 <= ABS(fVar23)) {
        fVar23 = SQRT(fVar24);
        if (NAN(fVar23)) {
          fVar23 = sqrtf(fVar24);
        }
        uVar25 = CONCAT44(fVar28 / fVar23,fVar27 / fVar23);
        fVar11 = fVar26 / fVar23;
      }
      puVar6 = (undefined8 *)(param_4 + lVar5 * 4);
      puVar2 = (undefined8 *)(param_7 + uVar8 * 0x10);
      uVar21 = puVar2[1];
      uVar20 = *puVar2;
      lVar5 = 0;
      fVar24 = (float)((ulong)uVar25 >> 0x20);
      uVar12 = *puVar6;
      fVar23 = *(float *)(puVar6 + 1);
      puVar6 = &DAT_01bf82f0;
      do {
        puVar2 = (undefined8 *)(lVar7 + lVar5);
        lVar5 = lVar5 + 0x24;
        fVar26 = (float)*puVar6;
        fVar27 = (float)((ulong)*puVar6 >> 0x20);
        *puVar2 = CONCAT44((float)((ulong)uVar12 >> 0x20) +
                           (fVar19 * fVar10 + fVar24 * fVar22) * fVar13 * fVar26 +
                           (fVar19 * fVar22 + fVar24 * -fVar10) * fVar14 * fVar27,
                           (float)uVar12 +
                           (fVar15 * fVar10 + (float)uVar25 * fVar22) * fVar13 * fVar26 +
                           (fVar15 * fVar22 + (float)uVar25 * -fVar10) * fVar14 * fVar27);
        *(float *)(puVar2 + 1) =
             fVar23 + fVar13 * (fVar10 * fVar29 + fVar22 * fVar11) * fVar26 +
             fVar14 * (fVar22 * fVar29 - fVar11 * fVar10) * fVar27;
        *(ulong *)((long)puVar2 + 0x1c) = CONCAT44(fVar27 + 0.5,fVar26 + 0.5);
        *(undefined8 *)((long)puVar2 + 0x14) = uVar21;
        *(undefined8 *)((long)puVar2 + 0xc) = uVar20;
        puVar6 = puVar6 + 1;
      } while (lVar5 != 0x288);
      iVar9 = iVar9 + 1;
      lVar7 = lVar7 + 0x288;
      param_3 = param_3 + 1;
    } while (iVar9 != param_2);
    param_1 = param_1 + (ulong)(param_2 - 1) * 0x288 + 0x288;
  }
  if (*(long *)(lVar3 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}

