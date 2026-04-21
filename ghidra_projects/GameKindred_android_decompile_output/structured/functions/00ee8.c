// functions/00ee8 — 5 functions
#include "libGameKindred.h"




void FUN_00ee8324(long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  int *piVar18;
  long lVar19;
  short *psVar20;
  uint uVar21;
  int iVar22;
  long lVar23;
  short sVar24;
  int iVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  int iVar31;
  long lVar32;
  int iVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  int local_170 [16];
  int local_130 [8];
  int local_110 [8];
  int local_f0 [8];
  int local_d0 [8];
  int local_b0 [8];
  int local_90 [8];
  long local_70;
  
  lVar15 = tpidr_el0;
  piVar18 = local_170;
  psVar20 = (short *)(param_3 + 0x40);
  uVar21 = 9;
  local_70 = *(long *)(lVar15 + 0x28);
  lVar16 = *(long *)(param_1 + 0x1b8);
  piVar17 = *(int **)(param_2 + 0x58);
  do {
    sVar24 = psVar20[-0x10];
    if ((((psVar20[-0x18] == 0 && sVar24 == 0) && (sVar24 = 0, psVar20[-8] == 0)) &&
        (sVar24 = 0, *psVar20 == 0)) &&
       (((sVar24 = 0, psVar20[8] == 0 && (sVar24 = 0, psVar20[0x10] == 0)) &&
        (sVar24 = 0, psVar20[0x18] == 0)))) {
      iVar22 = (int)psVar20[-0x20] * *piVar17 * 4;
      *piVar18 = iVar22;
      piVar18[8] = iVar22;
      piVar18[0x10] = iVar22;
      piVar18[0x18] = iVar22;
      piVar18[0x20] = iVar22;
      piVar18[0x28] = iVar22;
      piVar18[0x30] = iVar22;
      lVar19 = 0x38;
    }
    else {
      lVar19 = (long)piVar17[0x38] * (long)psVar20[0x18];
      lVar28 = (long)piVar17[0x28] * (long)psVar20[8];
      lVar32 = (long)piVar17[0x18] * (long)psVar20[-8];
      lVar23 = (long)piVar17[8] * (long)psVar20[-0x18];
      uVar5 = (long)(*piVar17 * (int)psVar20[-0x20]) << 0xd | 0x400;
      lVar36 = ((long)piVar17[0x30] * (long)psVar20[0x10] + (long)piVar17[0x10] * (long)sVar24) *
               0x1151;
      lVar26 = lVar36 + (long)piVar17[0x10] * (long)sVar24 * 0x187e;
      lVar36 = lVar36 + (long)piVar17[0x30] * (long)psVar20[0x10] * -0x3b21;
      lVar27 = uVar5 + (long)(piVar17[0x20] * (int)*psVar20) * 0x2000;
      lVar29 = uVar5 + (long)(piVar17[0x20] * (int)*psVar20) * -0x2000;
      lVar34 = (lVar23 + lVar19) * -0x1ccd;
      lVar35 = (lVar32 + lVar28) * -0x5203;
      lVar3 = lVar27 + lVar26;
      lVar27 = lVar27 - lVar26;
      lVar26 = lVar29 + lVar36;
      lVar29 = lVar29 - lVar36;
      lVar30 = (lVar23 + lVar28 + lVar32 + lVar19) * 0x25a1;
      lVar37 = lVar30 + (lVar32 + lVar19) * -0x3ec5;
      lVar30 = lVar30 + (lVar23 + lVar28) * -0xc7c;
      lVar23 = lVar34 + lVar23 * 0x300b + lVar30;
      lVar36 = lVar34 + lVar19 * 0x98e + lVar37;
      lVar30 = lVar35 + lVar28 * 0x41b3 + lVar30;
      lVar37 = lVar35 + lVar32 * 0x6254 + lVar37;
      iVar22 = (int)((ulong)(lVar27 - lVar36) >> 0xb);
      *piVar18 = (int)((ulong)(lVar23 + lVar3) >> 0xb);
      lVar19 = 0x20;
      piVar18[0x38] = (int)((ulong)(lVar3 - lVar23) >> 0xb);
      piVar18[8] = (int)((ulong)(lVar37 + lVar26) >> 0xb);
      piVar18[0x30] = (int)((ulong)(lVar26 - lVar37) >> 0xb);
      piVar18[0x10] = (int)((ulong)(lVar30 + lVar29) >> 0xb);
      piVar18[0x28] = (int)((ulong)(lVar29 - lVar30) >> 0xb);
      piVar18[0x18] = (int)((ulong)(lVar36 + lVar27) >> 0xb);
    }
    uVar21 = uVar21 - 1;
    piVar18[lVar19] = iVar22;
    piVar18 = piVar18 + 1;
    piVar17 = piVar17 + 1;
    psVar20 = psVar20 + 1;
  } while (1 < uVar21);
  lVar19 = 0;
  lVar16 = lVar16 + 0x80;
  piVar18 = local_170 + 4;
  do {
    iVar22 = piVar18[-3];
    iVar25 = piVar18[-2];
    pbVar4 = (byte *)(*(long *)(param_4 + lVar19) + (param_5 & 0xffffffff));
    if (((iVar22 == 0 && iVar25 == 0) && (iVar25 = 0, piVar18[-1] == 0)) &&
       ((iVar25 = 0, *piVar18 == 0 &&
        (((iVar25 = 0, piVar18[1] == 0 && (iVar25 = 0, piVar18[2] == 0)) &&
         (iVar25 = 0, piVar18[3] == 0)))))) {
      bVar8 = *(byte *)(lVar16 + ((ulong)(piVar18[-4] + 0x10U >> 5) & 0x3ff));
      *pbVar4 = bVar8;
      iVar22 = (uint)bVar8 * 0x1010101;
      pbVar4[7] = (byte)iVar22;
      *(short *)(pbVar4 + 5) = (short)iVar22;
      *(int *)(pbVar4 + 1) = iVar22;
    }
    else {
      iVar7 = piVar18[3];
      iVar6 = piVar18[-1];
      iVar9 = piVar18[1];
      iVar1 = piVar18[-4] + 0x10 + *piVar18;
      iVar14 = (piVar18[-4] + 0x10) - *piVar18;
      iVar12 = (iVar7 + iVar22) * -0x1ccd;
      iVar33 = (piVar18[2] + iVar25) * 0x1151;
      iVar10 = iVar33 + iVar25 * 0x187e;
      iVar33 = iVar33 + piVar18[2] * -0x3b21;
      iVar31 = (iVar6 + iVar7 + iVar9 + iVar22) * 0x25a1;
      iVar13 = (iVar6 + iVar9) * -0x5203;
      iVar11 = iVar31 + (iVar6 + iVar7) * -0x3ec5;
      iVar31 = iVar31 + (iVar9 + iVar22) * -0xc7c;
      iVar25 = iVar10 + iVar1 * 0x2000;
      iVar22 = iVar12 + iVar22 * 0x300b + iVar31;
      *pbVar4 = *(byte *)(lVar16 + ((ulong)((uint)(iVar22 + iVar25) >> 0x12) & 0x3ff));
      iVar2 = iVar33 + iVar14 * 0x2000;
      iVar6 = iVar13 + iVar6 * 0x6254 + iVar11;
      iVar33 = iVar14 * 0x2000 - iVar33;
      pbVar4[7] = *(byte *)(lVar16 + ((ulong)((uint)(iVar25 - iVar22) >> 0x12) & 0x3ff));
      pbVar4[1] = *(byte *)(lVar16 + ((ulong)((uint)(iVar6 + iVar2) >> 0x12) & 0x3ff));
      iVar31 = iVar13 + iVar9 * 0x41b3 + iVar31;
      pbVar4[6] = *(byte *)(lVar16 + ((ulong)((uint)(iVar2 - iVar6) >> 0x12) & 0x3ff));
      iVar10 = iVar1 * 0x2000 - iVar10;
      pbVar4[2] = *(byte *)(lVar16 + ((ulong)((uint)(iVar31 + iVar33) >> 0x12) & 0x3ff));
      iVar11 = iVar12 + iVar7 * 0x98e + iVar11;
      pbVar4[5] = *(byte *)(lVar16 + ((ulong)((uint)(iVar33 - iVar31) >> 0x12) & 0x3ff));
      pbVar4[3] = *(byte *)(lVar16 + ((ulong)((uint)(iVar11 + iVar10) >> 0x12) & 0x3ff));
      pbVar4[4] = *(byte *)(lVar16 + ((ulong)((uint)(iVar10 - iVar11) >> 0x12) & 0x3ff));
    }
    lVar19 = lVar19 + 8;
    piVar18 = piVar18 + 8;
  } while (lVar19 != 0x40);
  if (*(long *)(lVar15 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ee8794(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  int *piVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  int local_134 [7];
  undefined4 local_118 [7];
  undefined4 local_fc [7];
  undefined4 local_e0 [7];
  undefined4 local_c4 [7];
  undefined4 local_a8 [7];
  undefined4 local_8c [11];
  
  lVar21 = tpidr_el0;
  lVar29 = *(long *)(lVar21 + 0x28);
  lVar23 = *(long *)(param_1 + 0x1b8);
  lVar22 = *(long *)(param_2 + 0x58);
  lVar27 = 0;
  do {
    piVar28 = (int *)(lVar22 + lVar27 * 4);
    psVar4 = (short *)(param_3 + lVar27 * 2);
    lVar37 = (long)piVar28[0x10] * (long)psVar4[0x10];
    lVar38 = (long)piVar28[0x20] * (long)psVar4[0x20];
    lVar24 = (long)piVar28[0x30] * (long)psVar4[0x30];
    lVar25 = (long)piVar28[8] * (long)psVar4[8];
    lVar30 = (long)piVar28[0x18] * (long)psVar4[0x18];
    lVar32 = (long)piVar28[0x28] * (long)psVar4[0x28];
    uVar8 = (long)(*piVar28 * (int)*psVar4) << 0xd | 0x400;
    lVar33 = (lVar37 - lVar38) * 0xa12;
    lVar35 = (lVar30 + lVar25) * 0x1def;
    lVar36 = uVar8 + (lVar24 + lVar37) * 0x28c6;
    lVar34 = (lVar38 - lVar24) * 0x1c37;
    lVar26 = (lVar32 + lVar25) * 0x13a3;
    lVar5 = lVar34 + lVar24 * -0x27d + lVar36;
    lVar31 = (lVar32 + lVar30) * -0x2c1f;
    lVar6 = lVar26 + lVar35 + (lVar25 - lVar30) * -0x573;
    lVar36 = lVar33 + lVar37 * -0x4f0f + lVar36;
    lVar30 = lVar35 + (lVar25 - lVar30) * 0x573 + lVar31;
    lVar31 = lVar26 + lVar32 * 0x3bde + lVar31;
    lVar34 = uVar8 + lVar38 * -0x3aeb + lVar33 + lVar34;
    lVar25 = lVar27 + 1;
    local_8c[lVar27] = (int)((ulong)(lVar5 - lVar6) >> 0xb);
    local_134[lVar27] = (int)((ulong)(lVar6 + lVar5) >> 0xb);
    local_fc[lVar27] = (int)((ulong)(lVar31 + lVar36) >> 0xb);
    local_c4[lVar27] = (int)((ulong)(lVar36 - lVar31) >> 0xb);
    local_118[lVar27] = (int)((ulong)(lVar30 + lVar34) >> 0xb);
    local_a8[lVar27] = (int)((ulong)(lVar34 - lVar30) >> 0xb);
    local_e0[lVar27] = (int)(uVar8 + (lVar38 - (lVar24 + lVar37)) * 0x2d41 >> 0xb);
    lVar27 = lVar25;
  } while ((int)lVar25 != 7);
  lVar27 = 0;
  piVar28 = local_134;
  lVar23 = lVar23 + 0x80;
  do {
    iVar9 = piVar28[3];
    iVar11 = piVar28[4];
    iVar12 = piVar28[1];
    iVar10 = piVar28[5];
    iVar13 = piVar28[6];
    iVar14 = piVar28[2];
    iVar1 = *piVar28 * 0x2000 + 0x20000;
    iVar16 = (iVar11 - iVar13) * 0x1c37;
    iVar17 = (iVar9 + iVar12) * 0x1def;
    iVar18 = (iVar10 + iVar12) * 0x13a3;
    iVar15 = iVar1 + (iVar13 + iVar14) * 0x28c6;
    iVar2 = iVar16 + iVar13 * -0x27d + iVar15;
    iVar3 = iVar17 + (iVar12 - iVar9) * -0x573 + iVar18;
    puVar7 = (undefined1 *)(*(long *)(param_4 + lVar27) + (ulong)param_5);
    *puVar7 = *(undefined1 *)(lVar23 + ((ulong)((uint)(iVar3 + iVar2) >> 0x12) & 0x3ff));
    iVar19 = (iVar14 - iVar11) * 0xa12;
    iVar20 = (iVar10 + iVar9) * -0x2c1f;
    iVar16 = iVar1 + iVar11 * -0x3aeb + iVar19 + iVar16;
    iVar9 = iVar17 + (iVar12 - iVar9) * 0x573 + iVar20;
    puVar7[6] = *(undefined1 *)(lVar23 + ((ulong)((uint)(iVar2 - iVar3) >> 0x12) & 0x3ff));
    puVar7[1] = *(undefined1 *)(lVar23 + ((ulong)((uint)(iVar9 + iVar16) >> 0x12) & 0x3ff));
    iVar15 = iVar19 + iVar14 * -0x4f0f + iVar15;
    iVar20 = iVar18 + iVar10 * 0x3bde + iVar20;
    puVar7[5] = *(undefined1 *)(lVar23 + ((ulong)((uint)(iVar16 - iVar9) >> 0x12) & 0x3ff));
    puVar7[2] = *(undefined1 *)(lVar23 + ((ulong)((uint)(iVar20 + iVar15) >> 0x12) & 0x3ff));
    lVar27 = lVar27 + 8;
    puVar7[4] = *(undefined1 *)(lVar23 + ((ulong)((uint)(iVar15 - iVar20) >> 0x12) & 0x3ff));
    piVar28 = piVar28 + 7;
    puVar7[3] = *(undefined1 *)
                 (lVar23 + ((ulong)((uint)(iVar1 + (iVar11 - (iVar13 + iVar14)) * 0x2d41) >> 0x12) &
                           0x3ff));
  } while (lVar27 != 0x38);
  if (*(long *)(lVar21 + 0x28) == lVar29) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ee8ae8(long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  int iVar1;
  short *psVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  int local_c8 [6];
  int local_b0 [6];
  undefined4 local_98 [6];
  undefined4 local_80 [6];
  int local_68 [6];
  undefined4 local_50 [6];
  long local_38;
  
  lVar13 = tpidr_el0;
  local_38 = *(long *)(lVar13 + 0x28);
  lVar19 = *(long *)(param_1 + 0x1b8);
  lVar21 = *(long *)(param_2 + 0x58);
  lVar18 = 0;
  do {
    piVar20 = (int *)(lVar21 + lVar18 * 4);
    psVar2 = (short *)(param_3 + lVar18 * 2);
    lVar15 = (long)piVar20[8] * (long)psVar2[8];
    lVar23 = (long)piVar20[0x18] * (long)psVar2[0x18];
    lVar22 = (long)piVar20[0x28] * (long)psVar2[0x28];
    uVar5 = (long)(*piVar20 * (int)*psVar2) << 0xd | 0x400;
    lVar14 = (lVar22 + lVar15) * 0xbb6;
    iVar11 = ((int)lVar15 - (int)lVar23) - (int)lVar22;
    lVar16 = uVar5 + (long)piVar20[0x20] * (long)psVar2[0x20] * 0x16a1;
    lVar3 = lVar14 + (lVar23 + lVar15) * 0x2000;
    lVar14 = lVar14 + (lVar22 - lVar23) * 0x2000;
    lVar22 = (long)piVar20[0x10] * (long)psVar2[0x10] * 0x2731 + lVar16;
    lVar16 = lVar16 + (long)piVar20[0x10] * (long)psVar2[0x10] * -0x2731;
    lVar15 = lVar18 + 1;
    iVar17 = (int)(uVar5 + (long)piVar20[0x20] * (long)psVar2[0x20] * -0x2d42 >> 0xb);
    local_68[lVar18] = iVar17 + iVar11 * -4;
    local_b0[lVar18] = iVar17 + iVar11 * 4;
    local_c8[lVar18] = (int)((ulong)(lVar3 + lVar22) >> 0xb);
    local_50[lVar18] = (int)((ulong)(lVar22 - lVar3) >> 0xb);
    local_98[lVar18] = (int)((ulong)(lVar14 + lVar16) >> 0xb);
    local_80[lVar18] = (int)((ulong)(lVar16 - lVar14) >> 0xb);
    lVar18 = lVar15;
  } while ((int)lVar15 != 6);
  lVar18 = 0;
  piVar20 = local_c8;
  lVar19 = lVar19 + 0x80;
  do {
    iVar7 = piVar20[1];
    iVar6 = piVar20[3];
    iVar8 = piVar20[5];
    iVar9 = piVar20[2];
    iVar11 = *piVar20 * 0x2000 + 0x20000;
    iVar10 = (iVar8 + iVar7) * 0xbb6;
    iVar12 = (iVar7 - iVar6) - iVar8;
    iVar17 = iVar11 + piVar20[4] * 0x16a1;
    iVar7 = iVar10 + (iVar6 + iVar7) * 0x2000;
    iVar1 = iVar17 + iVar9 * 0x2731;
    puVar4 = (undefined1 *)(*(long *)(param_4 + lVar18) + (param_5 & 0xffffffff));
    iVar11 = iVar11 + piVar20[4] * -0x2d42;
    *puVar4 = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar7 + iVar1) >> 0x12) & 0x3ff));
    puVar4[5] = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar1 - iVar7) >> 0x12) & 0x3ff));
    iVar10 = iVar10 + (iVar8 - iVar6) * 0x2000;
    puVar4[1] = *(undefined1 *)
                 (lVar19 + ((ulong)((uint)(iVar11 + iVar12 * 0x2000) >> 0x12) & 0x3ff));
    iVar17 = iVar17 + iVar9 * -0x2731;
    puVar4[4] = *(undefined1 *)
                 (lVar19 + ((ulong)((uint)(iVar11 + iVar12 * -0x2000) >> 0x12) & 0x3ff));
    lVar18 = lVar18 + 8;
    puVar4[2] = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar10 + iVar17) >> 0x12) & 0x3ff));
    piVar20 = piVar20 + 6;
    puVar4[3] = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar17 - iVar10) >> 0x12) & 0x3ff));
  } while (lVar18 != 0x30);
  if (*(long *)(lVar13 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ee8d1c(long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  int local_9c [5];
  undefined4 local_88 [5];
  undefined4 local_74 [5];
  undefined4 local_60 [5];
  undefined4 local_4c [5];
  long local_38;
  
  lVar15 = tpidr_el0;
  local_38 = *(long *)(lVar15 + 0x28);
  lVar21 = *(long *)(param_1 + 0x1b8);
  lVar22 = *(long *)(param_2 + 0x58);
  lVar19 = 0;
  do {
    piVar20 = (int *)(lVar22 + lVar19 * 4);
    psVar5 = (short *)(param_3 + lVar19 * 2);
    lVar6 = (long)piVar20[0x20] * (long)psVar5[0x20] + (long)piVar20[0x10] * (long)psVar5[0x10];
    lVar18 = (long)piVar20[0x10] * (long)psVar5[0x10] - (long)piVar20[0x20] * (long)psVar5[0x20];
    uVar9 = (long)(*piVar20 * (int)*psVar5) << 0xd | 0x400;
    lVar16 = ((long)piVar20[0x18] * (long)psVar5[0x18] + (long)piVar20[8] * (long)psVar5[8]) *
             0x1a9a;
    lVar23 = uVar9 + lVar18 * 0xb50;
    lVar17 = lVar16 + (long)piVar20[8] * (long)psVar5[8] * 0x1071;
    lVar16 = lVar16 + (long)piVar20[0x18] * (long)psVar5[0x18] * -0x45a4;
    lVar7 = lVar23 + lVar6 * 0x194c;
    lVar23 = lVar23 + lVar6 * -0x194c;
    lVar6 = lVar19 + 1;
    local_9c[lVar19] = (int)((ulong)(lVar17 + lVar7) >> 0xb);
    local_4c[lVar19] = (int)((ulong)(lVar7 - lVar17) >> 0xb);
    local_88[lVar19] = (int)((ulong)(lVar16 + lVar23) >> 0xb);
    local_60[lVar19] = (int)((ulong)(lVar23 - lVar16) >> 0xb);
    local_74[lVar19] = (int)(uVar9 + lVar18 * -0x2d40 >> 0xb);
    lVar19 = lVar6;
  } while ((int)lVar6 != 5);
  lVar19 = 0;
  piVar20 = local_9c;
  lVar21 = lVar21 + 0x80;
  do {
    iVar10 = piVar20[3];
    plVar1 = (long *)(param_4 + lVar19);
    lVar19 = lVar19 + 8;
    iVar3 = piVar20[4] + piVar20[2];
    iVar14 = piVar20[2] - piVar20[4];
    iVar2 = *piVar20 * 0x2000 + 0x20000;
    iVar13 = (iVar10 + piVar20[1]) * 0x1a9a;
    iVar11 = iVar2 + iVar14 * 0xb50;
    iVar12 = iVar13 + piVar20[1] * 0x1071;
    iVar4 = iVar11 + iVar3 * 0x194c;
    puVar8 = (undefined1 *)(*plVar1 + (param_5 & 0xffffffff));
    *puVar8 = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar12 + iVar4) >> 0x12) & 0x3ff));
    iVar13 = iVar13 + iVar10 * -0x45a4;
    iVar11 = iVar11 + iVar3 * -0x194c;
    puVar8[4] = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar4 - iVar12) >> 0x12) & 0x3ff));
    puVar8[1] = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar13 + iVar11) >> 0x12) & 0x3ff));
    piVar20 = piVar20 + 5;
    puVar8[3] = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar11 - iVar13) >> 0x12) & 0x3ff));
    puVar8[2] = *(undefined1 *)
                 (lVar21 + ((ulong)((uint)(iVar2 + iVar14 * -0x2d40) >> 0x12) & 0x3ff));
  } while (lVar19 != 0x28);
  if (*(long *)(lVar15 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ee8f24(long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  short *psVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  int iVar15;
  int local_58 [8];
  int local_38 [4];
  int local_28 [4];
  long local_18;
  
  lVar8 = tpidr_el0;
  local_18 = *(long *)(lVar8 + 0x28);
  lVar12 = *(long *)(param_1 + 0x1b8);
  lVar14 = *(long *)(param_2 + 0x58);
  lVar11 = 0;
  do {
    piVar13 = (int *)(lVar14 + lVar11 * 4);
    psVar4 = (short *)(param_3 + lVar11 * 2);
    lVar2 = lVar11 + 1;
    iVar3 = piVar13[0x10] * (int)psVar4[0x10] + *piVar13 * (int)*psVar4;
    iVar6 = *piVar13 * (int)*psVar4 - piVar13[0x10] * (int)psVar4[0x10];
    lVar10 = ((long)piVar13[0x18] * (long)psVar4[0x18] + (long)piVar13[8] * (long)psVar4[8]) *
             0x1151 + 0x400;
    iVar9 = (int)((ulong)(lVar10 + (long)piVar13[8] * (long)psVar4[8] * 0x187e) >> 0xb);
    iVar15 = (int)((ulong)(lVar10 + (long)piVar13[0x18] * (long)psVar4[0x18] * -0x3b21) >> 0xb);
    local_58[lVar11] = iVar9 + iVar3 * 4;
    local_28[lVar11] = iVar3 * 4 - iVar9;
    local_58[lVar11 + 4] = iVar15 + iVar6 * 4;
    local_38[lVar11] = iVar6 * 4 - iVar15;
    lVar11 = lVar2;
  } while ((int)lVar2 != 4);
  lVar11 = 0;
  piVar13 = local_58;
  lVar12 = lVar12 + 0x80;
  do {
    iVar6 = piVar13[3];
    plVar1 = (long *)(param_4 + lVar11);
    lVar11 = lVar11 + 8;
    iVar3 = *piVar13 + 0x10 + piVar13[2];
    iVar7 = (*piVar13 + 0x10) - piVar13[2];
    iVar15 = (iVar6 + piVar13[1]) * 0x1151;
    iVar9 = iVar15 + piVar13[1] * 0x187e;
    puVar5 = (undefined1 *)(*plVar1 + (param_5 & 0xffffffff));
    *puVar5 = *(undefined1 *)(lVar12 + ((ulong)((uint)(iVar9 + iVar3 * 0x2000) >> 0x12) & 0x3ff));
    iVar15 = iVar15 + iVar6 * -0x3b21;
    puVar5[3] = *(undefined1 *)(lVar12 + ((ulong)((uint)(iVar3 * 0x2000 - iVar9) >> 0x12) & 0x3ff));
    puVar5[1] = *(undefined1 *)(lVar12 + ((ulong)((uint)(iVar15 + iVar7 * 0x2000) >> 0x12) & 0x3ff))
    ;
    piVar13 = piVar13 + 4;
    puVar5[2] = *(undefined1 *)(lVar12 + ((ulong)((uint)(iVar7 * 0x2000 - iVar15) >> 0x12) & 0x3ff))
    ;
  } while (lVar11 != 0x20);
  if (*(long *)(lVar8 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

