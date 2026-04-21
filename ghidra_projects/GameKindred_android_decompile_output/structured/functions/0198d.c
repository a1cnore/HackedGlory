// functions/0198d — 15 functions
#include "libGameKindred.h"




void FUN_0198d1bc(long param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
                 int param_6,ulong param_7,ulong param_8,long param_9,long param_10,long param_11,
                 long param_12,long param_13,long param_14)

{
  ushort *puVar1;
  float *pfVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  float *pfVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 uVar36;
  
  if (param_6 != 0) {
    lVar8 = 0;
    lVar9 = 0;
    lVar10 = 0;
    do {
      puVar1 = (ushort *)(param_4 + 4 + lVar8);
      pfVar2 = (float *)(param_3 + 8 + lVar8);
      fVar12 = pfVar2[-2];
      fVar11 = pfVar2[-1];
      fVar13 = *pfVar2;
      fVar15 = pfVar2[1];
      puVar3 = (undefined8 *)(param_1 + (ulong)puVar1[-2] * 0x40);
      uVar28 = puVar3[6];
      puVar4 = (undefined8 *)(param_1 + (ulong)puVar1[-1] * 0x40);
      puVar5 = (undefined8 *)(param_1 + (ulong)*puVar1 * 0x40);
      uVar36 = puVar4[6];
      uVar24 = puVar5[6];
      puVar6 = (undefined8 *)(param_1 + (ulong)puVar1[1] * 0x40);
      uVar25 = puVar6[6];
      pfVar2 = (float *)(param_9 + lVar9);
      fVar27 = *pfVar2;
      fVar30 = pfVar2[1];
      fVar14 = pfVar2[2];
      pfVar2 = (float *)(param_11 + 8 + lVar9);
      pfVar7 = (float *)(param_13 + lVar9);
      fVar16 = (float)*puVar3 * fVar12 + (float)*puVar4 * fVar11 + (float)*puVar5 * fVar13 +
               (float)*puVar6 * fVar15;
      fVar17 = (float)((ulong)*puVar3 >> 0x20) * fVar12 + (float)((ulong)*puVar4 >> 0x20) * fVar11 +
               (float)((ulong)*puVar5 >> 0x20) * fVar13 + (float)((ulong)*puVar6 >> 0x20) * fVar15;
      fVar18 = fVar12 * *(float *)(puVar3 + 1) + fVar11 * *(float *)(puVar4 + 1) +
               fVar13 * *(float *)(puVar5 + 1) + fVar15 * *(float *)(puVar6 + 1);
      fVar19 = (float)puVar3[2] * fVar12 + (float)puVar4[2] * fVar11 + (float)puVar5[2] * fVar13 +
               (float)puVar6[2] * fVar15;
      fVar20 = (float)((ulong)puVar3[2] >> 0x20) * fVar12 +
               (float)((ulong)puVar4[2] >> 0x20) * fVar11 +
               (float)((ulong)puVar5[2] >> 0x20) * fVar13 +
               (float)((ulong)puVar6[2] >> 0x20) * fVar15;
      fVar21 = fVar12 * *(float *)(puVar3 + 3) + fVar11 * *(float *)(puVar4 + 3) +
               fVar13 * *(float *)(puVar5 + 3) + fVar15 * *(float *)(puVar6 + 3);
      fVar31 = pfVar2[-2];
      fVar32 = pfVar2[-1];
      fVar22 = (float)puVar3[4] * fVar12 + (float)puVar4[4] * fVar11 + (float)puVar5[4] * fVar13 +
               (float)puVar6[4] * fVar15;
      fVar23 = (float)((ulong)puVar3[4] >> 0x20) * fVar12 +
               (float)((ulong)puVar4[4] >> 0x20) * fVar11 +
               (float)((ulong)puVar5[4] >> 0x20) * fVar13 +
               (float)((ulong)puVar6[4] >> 0x20) * fVar15;
      fVar29 = *pfVar7;
      fVar34 = pfVar7[1];
      fVar26 = fVar12 * *(float *)(puVar3 + 5) + fVar11 * *(float *)(puVar4 + 5) +
               fVar13 * *(float *)(puVar5 + 5) + fVar15 * *(float *)(puVar6 + 5);
      fVar33 = *pfVar2;
      fVar35 = pfVar7[2];
      *(float *)((undefined8 *)(param_10 + lVar10) + 1) =
           fVar12 * *(float *)(puVar3 + 7) + fVar11 * *(float *)(puVar4 + 7) +
           fVar13 * *(float *)(puVar5 + 7) + fVar15 * *(float *)(puVar6 + 7) +
           fVar18 * fVar27 + fVar21 * fVar30 + fVar26 * fVar14;
      *(undefined8 *)(param_10 + lVar10) =
           CONCAT44((float)((ulong)uVar28 >> 0x20) * fVar12 +
                    (float)((ulong)uVar36 >> 0x20) * fVar11 +
                    (float)((ulong)uVar24 >> 0x20) * fVar13 +
                    (float)((ulong)uVar25 >> 0x20) * fVar15 +
                    fVar17 * fVar27 + fVar20 * fVar30 + fVar23 * fVar14,
                    (float)uVar28 * fVar12 + (float)uVar36 * fVar11 + (float)uVar24 * fVar13 +
                    (float)uVar25 * fVar15 + fVar16 * fVar27 + fVar19 * fVar30 + fVar22 * fVar14);
      puVar3 = (undefined8 *)(param_14 + lVar10);
      *(float *)((undefined8 *)(param_12 + lVar10) + 1) =
           fVar18 * fVar31 + fVar21 * fVar32 + fVar26 * fVar33;
      *(undefined8 *)(param_12 + lVar10) =
           CONCAT44(fVar17 * fVar31 + fVar20 * fVar32 + fVar23 * fVar33,
                    fVar16 * fVar31 + fVar19 * fVar32 + fVar22 * fVar33);
      *(float *)(puVar3 + 1) = fVar18 * fVar29 + fVar21 * fVar34 + fVar26 * fVar35;
      *puVar3 = CONCAT44(fVar17 * fVar29 + fVar20 * fVar34 + fVar23 * fVar35,
                         fVar16 * fVar29 + fVar19 * fVar34 + fVar22 * fVar35);
      param_6 = param_6 + -1;
      lVar10 = lVar10 + (param_8 & 0xffffffff);
      lVar9 = lVar9 + (param_7 & 0xffffffff);
      lVar8 = lVar8 + (param_5 & 0xffffffff);
      *(float *)((long)puVar3 + 0xc) = pfVar7[3];
    } while (param_6 != 0);
  }
  return;
}




void FUN_0198d498(long param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
                 int param_6,ulong param_7,uint param_8,long param_9,long param_10,long param_11,
                 long param_12)

{
  ushort *puVar1;
  float *pfVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  undefined8 uVar29;
  
  if (param_6 != 0) {
    lVar7 = 0;
    lVar8 = 0;
    lVar9 = 0;
    do {
      puVar1 = (ushort *)(param_4 + 4 + lVar8);
      pfVar2 = (float *)(param_3 + 8 + lVar8);
      fVar11 = pfVar2[-2];
      fVar10 = pfVar2[-1];
      fVar12 = *pfVar2;
      fVar15 = pfVar2[1];
      puVar3 = (undefined8 *)(param_1 + (ulong)puVar1[-2] * 0x40);
      uVar27 = puVar3[6];
      puVar4 = (undefined8 *)(param_1 + (ulong)puVar1[-1] * 0x40);
      puVar5 = (undefined8 *)(param_1 + (ulong)*puVar1 * 0x40);
      uVar29 = puVar4[6];
      uVar23 = puVar5[6];
      puVar6 = (undefined8 *)(param_1 + (ulong)puVar1[1] * 0x40);
      uVar24 = puVar6[6];
      pfVar2 = (float *)(param_9 + 4 + lVar7);
      fVar13 = (float)*puVar3 * fVar11 + (float)*puVar4 * fVar10 + (float)*puVar5 * fVar12 +
               (float)*puVar6 * fVar15;
      fVar14 = (float)((ulong)*puVar3 >> 0x20) * fVar11 + (float)((ulong)*puVar4 >> 0x20) * fVar10 +
               (float)((ulong)*puVar5 >> 0x20) * fVar12 + (float)((ulong)*puVar6 >> 0x20) * fVar15;
      fVar16 = fVar11 * *(float *)(puVar3 + 1) + fVar10 * *(float *)(puVar4 + 1) +
               fVar12 * *(float *)(puVar5 + 1) + fVar15 * *(float *)(puVar6 + 1);
      fVar17 = (float)puVar3[2] * fVar11 + (float)puVar4[2] * fVar10 + (float)puVar5[2] * fVar12 +
               (float)puVar6[2] * fVar15;
      fVar18 = (float)((ulong)puVar3[2] >> 0x20) * fVar11 +
               (float)((ulong)puVar4[2] >> 0x20) * fVar10 +
               (float)((ulong)puVar5[2] >> 0x20) * fVar12 +
               (float)((ulong)puVar6[2] >> 0x20) * fVar15;
      fVar19 = fVar11 * *(float *)(puVar3 + 3) + fVar10 * *(float *)(puVar4 + 3) +
               fVar12 * *(float *)(puVar5 + 3) + fVar15 * *(float *)(puVar6 + 3);
      fVar20 = pfVar2[-1];
      fVar26 = *pfVar2;
      fVar21 = (float)puVar3[4] * fVar11 + (float)puVar4[4] * fVar10 + (float)puVar5[4] * fVar12 +
               (float)puVar6[4] * fVar15;
      fVar22 = (float)((ulong)puVar3[4] >> 0x20) * fVar11 +
               (float)((ulong)puVar4[4] >> 0x20) * fVar10 +
               (float)((ulong)puVar5[4] >> 0x20) * fVar12 +
               (float)((ulong)puVar6[4] >> 0x20) * fVar15;
      fVar28 = pfVar2[1];
      fVar25 = fVar11 * *(float *)(puVar3 + 5) + fVar10 * *(float *)(puVar4 + 5) +
               fVar12 * *(float *)(puVar5 + 5) + fVar15 * *(float *)(puVar6 + 5);
      pfVar2 = (float *)(param_11 + 8 + lVar7);
      *(float *)((undefined8 *)(param_10 + lVar9) + 1) =
           fVar11 * *(float *)(puVar3 + 7) + fVar10 * *(float *)(puVar4 + 7) +
           fVar12 * *(float *)(puVar5 + 7) + fVar15 * *(float *)(puVar6 + 7) +
           fVar16 * fVar20 + fVar19 * fVar26 + fVar25 * fVar28;
      *(undefined8 *)(param_10 + lVar9) =
           CONCAT44((float)((ulong)uVar27 >> 0x20) * fVar11 +
                    (float)((ulong)uVar29 >> 0x20) * fVar10 +
                    (float)((ulong)uVar23 >> 0x20) * fVar12 +
                    (float)((ulong)uVar24 >> 0x20) * fVar15 +
                    fVar14 * fVar20 + fVar18 * fVar26 + fVar22 * fVar28,
                    (float)uVar27 * fVar11 + (float)uVar29 * fVar10 + (float)uVar23 * fVar12 +
                    (float)uVar24 * fVar15 + fVar13 * fVar20 + fVar17 * fVar26 + fVar21 * fVar28);
      fVar10 = pfVar2[-2];
      fVar11 = pfVar2[-1];
      fVar12 = *pfVar2;
      puVar3 = (undefined8 *)(param_12 + lVar9);
      param_6 = param_6 + -1;
      lVar9 = lVar9 + (ulong)param_8;
      lVar8 = lVar8 + (param_5 & 0xffffffff);
      lVar7 = lVar7 + (param_7 & 0xffffffff);
      *(float *)(puVar3 + 1) = fVar16 * fVar10 + fVar19 * fVar11 + fVar25 * fVar12;
      *puVar3 = CONCAT44(fVar14 * fVar10 + fVar18 * fVar11 + fVar22 * fVar12,
                         fVar13 * fVar10 + fVar17 * fVar11 + fVar21 * fVar12);
    } while (param_6 != 0);
  }
  return;
}




void FUN_0198d72c(long param_1,undefined8 param_2,long param_3,ushort *param_4,undefined8 param_5,
                 int param_6,uint param_7,uint param_8,long param_9,long param_10)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  float fVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  
  if (param_6 * 3 != 0) {
    uVar10 = (ulong)*param_4;
    pfVar6 = (float *)(param_10 + 8);
    pfVar7 = (float *)(param_9 + 4);
    uVar9 = 1;
    do {
      puVar2 = (undefined8 *)(param_1 + uVar10 * 0x40);
      iVar8 = (int)uVar9;
      uVar14 = *puVar2;
      uVar15 = puVar2[2];
      uVar16 = puVar2[4];
      uVar18 = puVar2[6];
      puVar3 = (undefined8 *)(param_1 + (ulong)param_4[uVar9] * 0x40);
      fVar11 = *(float *)(param_3 + uVar9 * 4);
      fVar12 = *(float *)(param_3 + (ulong)(iVar8 - 1) * 4);
      uVar1 = iVar8 + 2;
      fVar21 = *(float *)(param_3 + (ulong)(iVar8 + 1U) * 4);
      uVar23 = *puVar3;
      uVar25 = puVar3[2];
      uVar27 = puVar3[4];
      uVar29 = puVar3[6];
      uVar10 = (ulong)param_4[uVar1];
      puVar4 = (undefined8 *)(param_1 + (ulong)param_4[iVar8 + 1U] * 0x40);
      uVar20 = *puVar4;
      uVar32 = puVar4[2];
      uVar33 = puVar4[4];
      uVar30 = puVar4[6];
      puVar5 = (undefined8 *)(param_1 + uVar10 * 0x40);
      fVar31 = *(float *)(param_3 + (ulong)uVar1 * 4);
      uVar13 = puVar5[6];
      uVar24 = *puVar5;
      uVar26 = puVar5[2];
      uVar28 = puVar5[4];
      fVar19 = pfVar7[-1];
      fVar17 = *pfVar7;
      fVar22 = pfVar7[1];
      uVar9 = (ulong)(iVar8 + 3);
      *pfVar6 = fVar12 * *(float *)(puVar2 + 7) + fVar11 * *(float *)(puVar3 + 7) +
                fVar21 * *(float *)(puVar4 + 7) + fVar31 * *(float *)(puVar5 + 7) +
                (fVar12 * *(float *)(puVar2 + 1) + fVar11 * *(float *)(puVar3 + 1) +
                 fVar21 * *(float *)(puVar4 + 1) + fVar31 * *(float *)(puVar5 + 1)) * fVar19 +
                (fVar12 * *(float *)(puVar2 + 3) + fVar11 * *(float *)(puVar3 + 3) +
                 fVar21 * *(float *)(puVar4 + 3) + fVar31 * *(float *)(puVar5 + 3)) * fVar17 +
                (fVar12 * *(float *)(puVar2 + 5) + fVar11 * *(float *)(puVar3 + 5) +
                 fVar21 * *(float *)(puVar4 + 5) + fVar31 * *(float *)(puVar5 + 5)) * fVar22;
      *(ulong *)(pfVar6 + -2) =
           CONCAT44((float)((ulong)uVar18 >> 0x20) * fVar12 +
                    (float)((ulong)uVar29 >> 0x20) * fVar11 +
                    (float)((ulong)uVar30 >> 0x20) * fVar21 +
                    (float)((ulong)uVar13 >> 0x20) * fVar31 +
                    ((float)((ulong)uVar14 >> 0x20) * fVar12 +
                     (float)((ulong)uVar23 >> 0x20) * fVar11 +
                     (float)((ulong)uVar20 >> 0x20) * fVar21 +
                    (float)((ulong)uVar24 >> 0x20) * fVar31) * fVar19 +
                    ((float)((ulong)uVar15 >> 0x20) * fVar12 +
                     (float)((ulong)uVar25 >> 0x20) * fVar11 +
                     (float)((ulong)uVar32 >> 0x20) * fVar21 +
                    (float)((ulong)uVar26 >> 0x20) * fVar31) * fVar17 +
                    ((float)((ulong)uVar16 >> 0x20) * fVar12 +
                     (float)((ulong)uVar27 >> 0x20) * fVar11 +
                     (float)((ulong)uVar33 >> 0x20) * fVar21 +
                    (float)((ulong)uVar28 >> 0x20) * fVar31) * fVar22,
                    (float)uVar18 * fVar12 + (float)uVar29 * fVar11 + (float)uVar30 * fVar21 +
                    (float)uVar13 * fVar31 +
                    ((float)uVar14 * fVar12 + (float)uVar23 * fVar11 + (float)uVar20 * fVar21 +
                    (float)uVar24 * fVar31) * fVar19 +
                    ((float)uVar15 * fVar12 + (float)uVar25 * fVar11 + (float)uVar32 * fVar21 +
                    (float)uVar26 * fVar31) * fVar17 +
                    ((float)uVar16 * fVar12 + (float)uVar27 * fVar11 + (float)uVar33 * fVar21 +
                    (float)uVar28 * fVar31) * fVar22);
      pfVar6 = (float *)((long)pfVar6 + (ulong)param_8);
      pfVar7 = (float *)((long)pfVar7 + (ulong)param_7);
    } while (uVar1 < (uint)(param_6 * 3));
  }
  return;
}




void FUN_0198d94c(long param_1)

{
  long lVar1;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = *(undefined8 *)(param_1 + 0x50);
  local_30 = *(undefined4 *)(param_1 + 0x58);
  FUN_00f2e380(&local_38,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0198d9a8(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar6 = 0;
  do {
    if ((float)(&DAT_03215478)[uVar6] != *(float *)(param_1 + 0x20 + uVar6 * 4)) {
      DAT_0321561c = DAT_0321561c | 0x38;
      break;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x10);
  lVar7 = 0;
  do {
    *(undefined4 *)((long)&DAT_03215478 + lVar7) = *(undefined4 *)(param_1 + 0x20 + lVar7);
    lVar7 = lVar7 + 4;
  } while (lVar7 != 0x40);
  puVar3 = *(uint **)(param_1 + 0x60);
  lVar7 = *(long *)(param_1 + 0x68);
  uVar4 = *puVar3;
  uVar1 = puVar3[4];
  uVar2 = puVar3[5];
  puVar3 = (uint *)(lVar7 + 8);
  if (DAT_03215638 != puVar3) {
    glBindBuffer(0x8893,*puVar3 & 0x3fff);
    DAT_03215638 = puVar3;
  }
  FUN_00f013dc(lVar7 + 0x10,0xffff,0);
  FUN_00f01570(DAT_032157d0);
  uVar6 = FUN_0199d23c(puVar3);
  uVar5 = *(undefined4 *)(&DAT_01e1bb94 + (uVar6 & 0xffffffff) * 4);
  uVar6 = FUN_0199d23c(puVar3);
  glDrawElements(*(undefined4 *)(&DAT_01e1bbac + (ulong)uVar4 * 4),uVar2,uVar5,
                 (ulong)*(uint *)(&DAT_01e1bba0 + (uVar6 & 0xffffffff) * 4) * (ulong)uVar1);
  return;
}




void FUN_0198dab4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0199b638();
  *param_1 = &PTR_FUN_02baf210;
  param_1[2] = param_3;
  param_1[3] = param_2;
  return;
}




void FUN_0198daf8(long param_1,undefined8 param_2,long *param_3,long *param_4,long param_5,
                 undefined8 param_6)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  float *pfVar4;
  float *pfVar5;
  long lVar6;
  float fVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  long lVar18;
  int *piVar19;
  undefined8 *puVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 local_a0;
  undefined4 uStack_98;
  float afStack_94 [3];
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  plVar16 = (long *)(param_5 + -8);
  lVar9 = (**(code **)(*plVar16 + 0x10))(plVar16);
  puVar10 = (undefined8 *)(**(code **)(*plVar16 + 0x18))(plVar16);
  plVar16 = (long *)FUN_0198b210(*(undefined8 *)(param_1 + 0x18),lVar9);
  if (plVar16 != (long *)0x0) {
    lVar11 = (**(code **)(*param_4 + 0x48))(param_4);
    lVar18 = *plVar16;
    if (lVar18 != 0) {
      lVar9 = *(long *)(lVar9 + 0x10);
      uVar1 = *(undefined1 *)(param_5 + 3);
      do {
        if (lVar11 == 0) {
LAB_0198dcc0:
          uVar17 = *(undefined8 *)(param_1 + 0x10);
          if (lVar9 == 0) {
            uVar12 = *(undefined8 *)(lVar18 + 8);
          }
          else {
            uVar12 = FUN_0198bca4(lVar9,lVar18);
          }
          plVar13 = (long *)(**(code **)(*param_3 + 0x10))(param_3,uVar17,uVar12,uVar1);
          if (plVar13 != (long *)0x0) {
            piVar19 = *(int **)(param_1 + 0x10);
            do {
              while (*piVar19 != 0) {
                ClearExclusiveLocal();
              }
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar19,0x10);
              if (bVar3) {
                *piVar19 = 100;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            lVar14 = FUN_00f016d4(piVar19 + (ulong)(uint)piVar19[10] * 4 + 2,0x77);
            *piVar19 = 0;
            puVar20 = (undefined8 *)(lVar14 + 7U & 0xfffffffffffffff8);
            puVar20[2] = 0;
            puVar20[3] = 0;
            *puVar20 = &PTR_FUN_02baf1e0;
            puVar20[1] = plVar13;
            uVar17 = (**(code **)(*plVar13 + 0x10))(plVar13);
            puVar20[3] = uVar17;
            *puVar20 = &PTR_FUN_02baf258;
            uVar17 = puVar10[6];
            puVar20[0xb] = puVar10[7];
            puVar20[10] = uVar17;
            uVar17 = puVar10[4];
            puVar20[9] = puVar10[5];
            puVar20[8] = uVar17;
            uVar17 = puVar10[2];
            puVar20[7] = puVar10[3];
            puVar20[6] = uVar17;
            uVar12 = puVar10[1];
            uVar17 = *puVar10;
            puVar20[0xc] = lVar18;
            puVar20[0xd] = plVar16;
            puVar20[5] = uVar12;
            puVar20[4] = uVar17;
            FUN_0199bb10(param_6,puVar20);
          }
        }
        else {
          lVar14 = 0;
          afStack_94[1] = (float)*(undefined8 *)(lVar18 + 0x28);
          afStack_94[2] = (float)((ulong)*(undefined8 *)(lVar18 + 0x28) >> 0x20);
          afStack_94[0] = (float)((ulong)*(undefined8 *)(lVar18 + 0x20) >> 0x20);
          local_70 = *(undefined4 *)(lVar18 + 0x20);
          local_80 = afStack_94[2];
          local_88 = CONCAT44(afStack_94[1],afStack_94[0]);
          local_78 = *(undefined8 *)(lVar18 + 0x18);
          fVar21 = *(float *)(puVar10 + 6);
          local_a0 = puVar10[6];
          uStack_98 = *(undefined4 *)(puVar10 + 7);
          afStack_94[0] = fVar21;
          afStack_94[1] = (float)*(undefined4 *)((long)puVar10 + 0x34);
          afStack_94[2] = (float)*(undefined4 *)(puVar10 + 7);
          puVar20 = puVar10;
          while( true ) {
            lVar15 = 0;
            do {
              fVar22 = *(float *)((long)puVar20 + lVar15 * 4);
              pfVar4 = (float *)((long)&local_78 + lVar15);
              pfVar5 = (float *)((long)&local_88 + lVar15);
              lVar15 = lVar15 + 4;
              fVar23 = fVar22 * *pfVar4;
              fVar22 = fVar22 * *pfVar5;
              fVar7 = fVar23;
              if (fVar22 <= fVar23) {
                fVar7 = fVar22;
              }
              fVar21 = fVar21 + fVar7;
              *(float *)((long)&local_a0 + lVar14 * 4) = fVar21;
              if (fVar22 <= fVar23) {
                fVar22 = fVar23;
              }
              afStack_94[lVar14] = fVar22 + afStack_94[lVar14];
            } while (lVar15 != 0xc);
            lVar14 = lVar14 + 1;
            if (lVar14 == 3) break;
            fVar21 = *(float *)((long)&local_a0 + lVar14 * 4);
            puVar20 = (undefined8 *)((long)puVar20 + 4);
          }
          iVar8 = FUN_019ba5c8(lVar11 + 0x44,6,&local_a0,afStack_94);
          if (iVar8 != 1) goto LAB_0198dcc0;
        }
        lVar18 = *(long *)(lVar18 + 0x58);
      } while (lVar18 != 0);
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0198dde8(void *param_1)

{
  FUN_0199b65c();
  operator_delete(param_1);
  return;
}




void FUN_0198de0c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  FUN_0198e850(param_1 + 1,1);
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  FUN_0198ea3c(param_1 + 6,1);
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  FUN_0198ec28(param_1 + 0xb,1);
  FUN_0198de80(param_1,0);
  return;
}




void FUN_0198de80(long param_1,uint param_2)

{
  param_2 = param_2 & 1;
  FUN_0198dfc4(param_1 + 8,param_2);
  FUN_0198e088(param_1 + 0x30,param_2);
  FUN_0198e14c(param_1 + 0x58,param_2);
  return;
}




void FUN_0198dec0(long param_1)

{
  FUN_0198de80(param_1,0);
  FUN_0198def8(param_1 + 0x58);
  FUN_0198df3c(param_1 + 0x30);
  FUN_0198df80(param_1 + 8);
  return;
}




void FUN_0198def8(undefined8 *param_1)

{
  FUN_0198e14c(param_1,0);
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}




void FUN_0198df3c(undefined8 *param_1)

{
  FUN_0198e088(param_1,0);
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}




void FUN_0198df80(undefined8 *param_1)

{
  FUN_0198dfc4(param_1,0);
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}




void FUN_0198dfc4(uint *param_1,ulong param_2)

{
  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  
  uVar1 = *param_1;
  uVar3 = (ulong)uVar1;
  param_1[8] = 0;
  param_1[9] = 0;
  if ((param_2 & 1) != 0) {
    if (uVar1 != 0) {
      lVar4 = *(long *)(param_1 + 2);
      uVar3 = 0;
      do {
        piVar5 = *(int **)(lVar4 + uVar3 * 8);
        lVar7 = -0xff;
        piVar5[0x1001] = 0;
        piVar8 = piVar5;
        do {
          iVar6 = (int)lVar7;
          lVar7 = lVar7 + 1;
          *piVar8 = iVar6 + 0x100;
          piVar8 = piVar8 + 0x10;
        } while (lVar7 != 0);
        piVar5[0x1000] = 0;
        uVar3 = uVar3 + 1;
      } while (uVar3 < *param_1);
    }
    FUN_0198ee14(param_1 + 4,param_1);
    return;
  }
  if (uVar1 != 0) {
    uVar9 = 0;
    do {
      pvVar2 = *(void **)(*(long *)(param_1 + 2) + uVar9 * 8);
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
        uVar3 = (ulong)*param_1;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar3);
  }
  if (*(long *)(param_1 + 2) != 0) {
    *param_1 = 0;
  }
  if (*(long *)(param_1 + 6) != 0) {
    param_1[4] = 0;
  }
  return;
}

