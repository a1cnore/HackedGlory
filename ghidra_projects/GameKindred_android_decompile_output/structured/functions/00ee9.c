// functions/00ee9 — 7 functions
#include "libGameKindred.h"




void FUN_00ee90ac(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  long *plVar1;
  long lVar2;
  short *psVar3;
  undefined1 *puVar4;
  ulong uVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  long lVar17;
  int local_3c [9];
  long local_18;
  
  lVar12 = tpidr_el0;
  local_18 = *(long *)(lVar12 + 0x28);
  lVar14 = *(long *)(param_1 + 0x1b8);
  lVar15 = *(long *)(param_2 + 0x58);
  lVar13 = 0;
  do {
    piVar16 = (int *)(lVar15 + lVar13 * 4);
    psVar3 = (short *)(param_3 + lVar13 * 2);
    iVar9 = piVar16[0x10];
    sVar7 = psVar3[0x10];
    iVar10 = piVar16[8];
    sVar8 = psVar3[8];
    uVar5 = (long)(*piVar16 * (int)*psVar3) << 0xd | 0x400;
    lVar17 = uVar5 + (long)iVar9 * (long)sVar7 * 0x16a1;
    lVar2 = lVar13 + 1;
    local_3c[lVar13] = (int)((ulong)((long)iVar10 * (long)sVar8 * 0x2731 + lVar17) >> 0xb);
    local_3c[lVar13 + 6] = (int)((ulong)(lVar17 + (long)iVar10 * (long)sVar8 * -0x2731) >> 0xb);
    local_3c[lVar13 + 3] = (int)(uVar5 + (long)iVar9 * (long)sVar7 * -0x2d42 >> 0xb);
    lVar13 = lVar2;
  } while ((int)lVar2 != 3);
  lVar13 = 0;
  piVar16 = local_3c;
  lVar14 = lVar14 + 0x80;
  do {
    iVar10 = piVar16[1];
    iVar6 = piVar16[2];
    plVar1 = (long *)(param_4 + lVar13);
    lVar13 = lVar13 + 8;
    iVar9 = *piVar16 * 0x2000 + 0x20000;
    iVar11 = iVar9 + iVar6 * 0x16a1;
    puVar4 = (undefined1 *)(*plVar1 + (ulong)param_5);
    *puVar4 = *(undefined1 *)(lVar14 + ((ulong)((uint)(iVar11 + iVar10 * 0x2731) >> 0x12) & 0x3ff));
    puVar4[2] = *(undefined1 *)
                 (lVar14 + ((ulong)((uint)(iVar11 + iVar10 * -0x2731) >> 0x12) & 0x3ff));
    piVar16 = piVar16 + 3;
    puVar4[1] = *(undefined1 *)(lVar14 + ((ulong)((uint)(iVar9 + iVar6 * -0x2d42) >> 0x12) & 0x3ff))
    ;
  } while (lVar13 != 0x18);
  if (*(long *)(lVar12 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ee91f0(long param_1,long param_2,short *param_3,long *param_4,uint param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  int *piVar9;
  long lVar10;
  
  piVar9 = *(int **)(param_2 + 0x58);
  iVar4 = piVar9[1];
  sVar6 = param_3[9];
  iVar8 = *piVar9 * (int)*param_3 + 4;
  iVar5 = piVar9[9];
  sVar7 = param_3[1];
  lVar1 = *(long *)(param_1 + 0x1b8) + 0x80;
  iVar2 = iVar8 + piVar9[8] * (int)param_3[8];
  iVar8 = iVar8 - piVar9[8] * (int)param_3[8];
  iVar3 = iVar5 * sVar6 + iVar4 * sVar7;
  lVar10 = *param_4;
  *(undefined1 *)(lVar10 + (ulong)param_5) =
       *(undefined1 *)(lVar1 + ((ulong)((uint)(iVar3 + iVar2) >> 3) & 0x3ff));
  iVar4 = iVar4 * sVar7 - iVar5 * sVar6;
  ((undefined1 *)(lVar10 + (ulong)param_5))[1] =
       *(undefined1 *)(lVar1 + ((ulong)((uint)(iVar2 - iVar3) >> 3) & 0x3ff));
  lVar10 = param_4[1];
  *(undefined1 *)(lVar10 + (ulong)param_5) =
       *(undefined1 *)(lVar1 + ((ulong)((uint)(iVar4 + iVar8) >> 3) & 0x3ff));
  ((undefined1 *)(lVar10 + (ulong)param_5))[1] =
       *(undefined1 *)(lVar1 + ((ulong)((uint)(iVar8 - iVar4) >> 3) & 0x3ff));
  return;
}




void FUN_00ee928c(long param_1,long param_2,ushort *param_3,long *param_4,uint param_5)

{
  *(undefined1 *)(*param_4 + (ulong)param_5) =
       *(undefined1 *)
        (*(long *)(param_1 + 0x1b8) +
         ((ulong)(**(int **)(param_2 + 0x58) * (uint)*param_3 + 4 >> 3) & 0x3ff) + 0x80);
  return;
}




void FUN_00ee92bc(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
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
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  int local_190 [72];
  long local_70;
  
  lVar20 = tpidr_el0;
  local_70 = *(long *)(lVar20 + 0x28);
  lVar22 = *(long *)(param_1 + 0x1b8);
  lVar27 = *(long *)(param_2 + 0x58);
  lVar25 = 0;
  do {
    piVar4 = (int *)(lVar27 + lVar25 * 4);
    psVar5 = (short *)(param_3 + lVar25 * 2);
    lVar31 = (long)piVar4[0x10] * (long)psVar5[0x10];
    lVar33 = (long)piVar4[0x20] * (long)psVar5[0x20];
    lVar23 = (long)piVar4[8] * (long)psVar5[8];
    lVar21 = (long)piVar4[0x28] * (long)psVar5[0x28];
    lVar29 = (long)piVar4[0x38] * (long)psVar5[0x38];
    lVar26 = (long)piVar4[0x18] * (long)psVar5[0x18] * -0x2731;
    uVar9 = (long)(*piVar4 * (int)*psVar5) << 0xd | 0x400;
    lVar30 = (lVar21 + lVar23) * 0x1d17;
    lVar32 = (lVar29 + lVar23) * 0xf7a;
    lVar24 = (lVar23 - lVar21) - lVar29;
    lVar23 = (long)piVar4[0x30] * (long)psVar5[0x30] * 0x16a1 + uVar9;
    lVar28 = uVar9 + (long)piVar4[0x30] * (long)psVar5[0x30] * -0x2d42;
    lVar6 = (lVar33 + lVar31) * 0x2a87 + lVar33 * -0x7dc + lVar23;
    lVar7 = lVar30 + (long)piVar4[0x18] * (long)psVar5[0x18] * 0x2731 + lVar32;
    lVar30 = lVar26 + (lVar21 - lVar29) * -0x2c91 + lVar30;
    lVar32 = (lVar21 - lVar29) * 0x2c91 + lVar26 + lVar32;
    lVar29 = lVar28 + (lVar31 - lVar33) * 0x16a1;
    lVar21 = lVar23 + (lVar33 + lVar31) * -0x2a87 + lVar31 * 0x22ab;
    lVar26 = lVar23 + lVar31 * -0x22ab + lVar33 * 0x7dc;
    lVar23 = lVar25 + 1;
    local_190[lVar25] = (int)((ulong)(lVar7 + lVar6) >> 0xb);
    local_190[lVar25 + 0x40] = (int)((ulong)(lVar6 - lVar7) >> 0xb);
    local_190[lVar25 + 8] = (int)((ulong)(lVar24 * 0x2731 + lVar29) >> 0xb);
    local_190[lVar25 + 0x38] = (int)((ulong)(lVar29 + lVar24 * -0x2731) >> 0xb);
    local_190[lVar25 + 0x10] = (int)((ulong)(lVar30 + lVar21) >> 0xb);
    local_190[lVar25 + 0x30] = (int)((ulong)(lVar21 - lVar30) >> 0xb);
    local_190[lVar25 + 0x18] = (int)((ulong)(lVar32 + lVar26) >> 0xb);
    local_190[lVar25 + 0x28] = (int)((ulong)(lVar26 - lVar32) >> 0xb);
    local_190[lVar25 + 0x20] = (int)((ulong)(lVar28 + (lVar31 - lVar33) * -0x2d42) >> 0xb);
    lVar25 = lVar23;
  } while ((int)lVar23 != 8);
  lVar25 = 0;
  lVar22 = lVar22 + 0x80;
  do {
    iVar12 = local_190[lVar25 + 1];
    iVar10 = local_190[lVar25 + 2];
    iVar11 = local_190[lVar25 + 4];
    iVar13 = local_190[lVar25 + 5];
    iVar14 = local_190[lVar25 + 7];
    iVar16 = local_190[lVar25 + 3] * -0x2731;
    iVar1 = local_190[lVar25] * 0x2000 + 0x20000;
    iVar17 = (iVar13 + iVar12) * 0x1d17;
    iVar18 = (iVar14 + iVar12) * 0xf7a;
    iVar19 = (iVar12 - iVar13) - iVar14;
    iVar12 = local_190[lVar25 + 6] * 0x16a1 + iVar1;
    iVar1 = iVar1 + local_190[lVar25 + 6] * -0x2d42;
    iVar2 = (iVar11 + iVar10) * 0x2a87 + iVar11 * -0x7dc + iVar12;
    iVar3 = iVar17 + local_190[lVar25 + 3] * 0x2731 + iVar18;
    puVar8 = (undefined1 *)(*(long *)(param_4 + lVar25) + (ulong)param_5);
    *puVar8 = *(undefined1 *)(lVar22 + ((ulong)((uint)(iVar3 + iVar2) >> 0x12) & 0x3ff));
    iVar15 = iVar1 + (iVar10 - iVar11) * 0x16a1;
    puVar8[8] = *(undefined1 *)(lVar22 + ((ulong)((uint)(iVar2 - iVar3) >> 0x12) & 0x3ff));
    puVar8[1] = *(undefined1 *)
                 (lVar22 + ((ulong)((uint)(iVar19 * 0x2731 + iVar15) >> 0x12) & 0x3ff));
    iVar17 = iVar16 + (iVar13 - iVar14) * -0x2c91 + iVar17;
    iVar2 = iVar12 + (iVar11 + iVar10) * -0x2a87 + iVar10 * 0x22ab;
    puVar8[7] = *(undefined1 *)
                 (lVar22 + ((ulong)((uint)(iVar15 + iVar19 * -0x2731) >> 0x12) & 0x3ff));
    iVar18 = (iVar13 - iVar14) * 0x2c91 + iVar16 + iVar18;
    puVar8[2] = *(undefined1 *)(lVar22 + ((ulong)((uint)(iVar17 + iVar2) >> 0x12) & 0x3ff));
    iVar12 = iVar12 + iVar10 * -0x22ab + iVar11 * 0x7dc;
    puVar8[6] = *(undefined1 *)(lVar22 + ((ulong)((uint)(iVar2 - iVar17) >> 0x12) & 0x3ff));
    puVar8[3] = *(undefined1 *)(lVar22 + ((ulong)((uint)(iVar18 + iVar12) >> 0x12) & 0x3ff));
    lVar25 = lVar25 + 8;
    puVar8[5] = *(undefined1 *)(lVar22 + ((ulong)((uint)(iVar12 - iVar18) >> 0x12) & 0x3ff));
    puVar8[4] = *(undefined1 *)
                 (lVar22 + ((ulong)((uint)(iVar1 + (iVar10 - iVar11) * -0x2d42) >> 0x12) & 0x3ff));
  } while (lVar25 != 0x48);
  if (*(long *)(lVar20 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ee9658(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  short *psVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  int iVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  int iVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  int iVar33;
  int iVar34;
  long lVar35;
  long lVar36;
  int local_1b0 [80];
  long local_70;
  
  lVar20 = tpidr_el0;
  local_70 = *(long *)(lVar20 + 0x28);
  lVar25 = *(long *)(param_1 + 0x1b8);
  lVar23 = *(long *)(param_2 + 0x58);
  lVar26 = 0;
  do {
    piVar4 = (int *)(lVar23 + lVar26 * 4);
    psVar5 = (short *)(param_3 + lVar26 * 2);
    lVar32 = (long)piVar4[0x20] * (long)psVar5[0x20];
    lVar27 = (long)piVar4[8] * (long)psVar5[8];
    lVar22 = (long)piVar4[0x28] * (long)psVar5[0x28];
    lVar6 = (long)piVar4[0x38] * (long)psVar5[0x38] + (long)piVar4[0x18] * (long)psVar5[0x18];
    lVar24 = (long)piVar4[0x18] * (long)psVar5[0x18] - (long)piVar4[0x38] * (long)psVar5[0x38];
    uVar10 = (long)(*piVar4 * (int)*psVar5) << 0xd | 0x400;
    lVar30 = ((long)piVar4[0x30] * (long)psVar5[0x30] + (long)piVar4[0x10] * (long)psVar5[0x10]) *
             0x1a9a;
    lVar31 = uVar10 + lVar32 * 0x249d;
    lVar36 = uVar10 + lVar32 * -0xdfc;
    lVar35 = lVar30 + (long)piVar4[0x10] * (long)psVar5[0x10] * 0x1071;
    lVar30 = lVar30 + (long)piVar4[0x30] * (long)psVar5[0x30] * -0x45a4;
    lVar7 = lVar24 * 0x9e3 + lVar22 * 0x2000;
    lVar28 = lVar22 * 0x2000 + lVar24 * -0x19e3;
    lVar8 = lVar35 + lVar31;
    lVar31 = lVar31 - lVar35;
    lVar35 = lVar30 + lVar36;
    lVar36 = lVar36 - lVar30;
    iVar17 = ((int)lVar27 - (int)lVar22) - (int)lVar24;
    lVar22 = lVar6 * 0x1e6f + lVar27 * 0x2cb3 + lVar7;
    lVar7 = lVar6 * -0x1e6f + lVar27 * 0x714 + lVar7;
    lVar24 = (lVar6 * -0x12cf + lVar27 * 0x2853) - lVar28;
    lVar28 = lVar28 + lVar6 * -0x12cf + lVar27 * 0x148c;
    iVar29 = (int)(uVar10 + lVar32 * -0x2d42 >> 0xb);
    local_1b0[lVar26 + 0x38] = iVar29 + iVar17 * -4;
    local_1b0[lVar26] = (int)((ulong)(lVar22 + lVar8) >> 0xb);
    local_1b0[lVar26 + 0x48] = (int)((ulong)(lVar8 - lVar22) >> 0xb);
    local_1b0[lVar26 + 8] = (int)((ulong)(lVar24 + lVar35) >> 0xb);
    local_1b0[lVar26 + 0x30] = (int)((ulong)(lVar36 - lVar28) >> 0xb);
    lVar6 = lVar26 + 1;
    local_1b0[lVar26 + 0x40] = (int)((ulong)(lVar35 - lVar24) >> 0xb);
    local_1b0[lVar26 + 0x20] = (int)((ulong)(lVar7 + lVar31) >> 0xb);
    local_1b0[lVar26 + 0x10] = iVar29 + iVar17 * 4;
    local_1b0[lVar26 + 0x18] = (int)((ulong)(lVar28 + lVar36) >> 0xb);
    local_1b0[lVar26 + 0x28] = (int)((ulong)(lVar31 - lVar7) >> 0xb);
    lVar26 = lVar6;
  } while ((int)lVar6 != 8);
  lVar26 = 0;
  lVar25 = lVar25 + 0x80;
  do {
    iVar12 = local_1b0[lVar26 + 1];
    iVar11 = local_1b0[lVar26 + 4];
    iVar13 = local_1b0[lVar26 + 5];
    iVar34 = local_1b0[lVar26 + 7] + local_1b0[lVar26 + 3];
    iVar21 = local_1b0[lVar26 + 3] - local_1b0[lVar26 + 7];
    iVar17 = local_1b0[lVar26] * 0x2000 + 0x20000;
    iVar33 = (local_1b0[lVar26 + 6] + local_1b0[lVar26 + 2]) * 0x1a9a;
    iVar14 = iVar17 + iVar11 * 0x249d;
    iVar15 = iVar33 + local_1b0[lVar26 + 2] * 0x1071;
    iVar33 = iVar33 + local_1b0[lVar26 + 6] * -0x45a4;
    iVar1 = iVar21 * 0x9e3 + iVar13 * 0x2000;
    iVar18 = iVar13 * 0x2000 + iVar21 * -0x19e3;
    iVar29 = iVar15 + iVar14;
    iVar2 = iVar34 * 0x1e6f + iVar12 * 0x2cb3 + iVar1;
    puVar9 = (undefined1 *)(*(long *)(param_4 + lVar26) + (ulong)param_5);
    *puVar9 = *(undefined1 *)(lVar25 + ((ulong)((uint)(iVar2 + iVar29) >> 0x12) & 0x3ff));
    iVar16 = iVar17 + iVar11 * -0xdfc;
    iVar3 = iVar33 + iVar16;
    iVar19 = (iVar34 * -0x12cf + iVar12 * 0x2853) - iVar18;
    puVar9[9] = *(undefined1 *)(lVar25 + ((ulong)((uint)(iVar29 - iVar2) >> 0x12) & 0x3ff));
    puVar9[1] = *(undefined1 *)(lVar25 + ((ulong)((uint)(iVar19 + iVar3) >> 0x12) & 0x3ff));
    iVar17 = iVar17 + iVar11 * -0x2d42;
    iVar29 = (iVar12 - iVar21) * 0x2000 + iVar13 * -0x2000;
    iVar16 = iVar16 - iVar33;
    puVar9[8] = *(undefined1 *)(lVar25 + ((ulong)((uint)(iVar3 - iVar19) >> 0x12) & 0x3ff));
    puVar9[2] = *(undefined1 *)(lVar25 + ((ulong)((uint)(iVar29 + iVar17) >> 0x12) & 0x3ff));
    iVar18 = iVar18 + iVar34 * -0x12cf + iVar12 * 0x148c;
    puVar9[7] = *(undefined1 *)(lVar25 + ((ulong)((uint)(iVar17 - iVar29) >> 0x12) & 0x3ff));
    iVar14 = iVar14 - iVar15;
    iVar1 = iVar34 * -0x1e6f + iVar12 * 0x714 + iVar1;
    puVar9[3] = *(undefined1 *)(lVar25 + ((ulong)((uint)(iVar18 + iVar16) >> 0x12) & 0x3ff));
    lVar26 = lVar26 + 8;
    puVar9[6] = *(undefined1 *)(lVar25 + ((ulong)((uint)(iVar16 - iVar18) >> 0x12) & 0x3ff));
    puVar9[4] = *(undefined1 *)(lVar25 + ((ulong)((uint)(iVar1 + iVar14) >> 0x12) & 0x3ff));
    puVar9[5] = *(undefined1 *)(lVar25 + ((ulong)((uint)(iVar14 - iVar1) >> 0x12) & 0x3ff));
  } while (lVar26 != 0x50);
  if (*(long *)(lVar20 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ee9a30(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  int *piVar2;
  short *psVar3;
  undefined1 *puVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
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
  int iVar21;
  int iVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
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
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  int local_1d0 [88];
  long local_70;
  
  lVar24 = tpidr_el0;
  local_70 = *(long *)(lVar24 + 0x28);
  lVar30 = *(long *)(param_1 + 0x1b8);
  lVar25 = *(long *)(param_2 + 0x58);
  lVar31 = 0;
  do {
    piVar2 = (int *)(lVar25 + lVar31 * 4);
    psVar3 = (short *)(param_3 + lVar31 * 2);
    lVar35 = (long)piVar2[0x10] * (long)psVar3[0x10];
    lVar36 = (long)piVar2[0x20] * (long)psVar3[0x20];
    lVar37 = (long)piVar2[0x30] * (long)psVar3[0x30];
    lVar32 = (long)piVar2[0x38] * (long)psVar3[0x38];
    lVar39 = (long)piVar2[8] * (long)psVar3[8];
    lVar40 = (long)piVar2[0x18] * (long)psVar3[0x18];
    lVar34 = (long)piVar2[0x28] * (long)psVar3[0x28];
    uVar5 = (long)(*piVar2 * (int)*psVar3) << 0xd | 0x400;
    lVar33 = (lVar37 + lVar35) - lVar36;
    lVar44 = uVar5 + lVar33 * 0x2b6c;
    lVar27 = (lVar40 + lVar39) * 0x1c6a;
    lVar29 = (lVar34 + lVar39) * 0x1574;
    lVar41 = (lVar32 + lVar40) * -0x398b;
    lVar28 = (lVar36 - lVar35) * 0xdc9;
    lVar42 = lVar44 + (lVar36 - lVar37) * 0x517e;
    lVar26 = lVar44 + (lVar37 + lVar35) * -0x24fb;
    lVar45 = lVar44 + lVar28 + lVar35 * -0x306f;
    lVar43 = lVar42 + lVar37 * 0x43b5;
    lVar38 = lVar26 + lVar37 * -0x193d;
    lVar26 = lVar35 * -0x2c83 + lVar36 * 0x3e39 + lVar26;
    lVar35 = (lVar40 + lVar39 + lVar34 + lVar32) * 0xcc0;
    lVar44 = lVar35 + (lVar32 + lVar39) * 3000;
    lVar37 = lVar35 + (lVar34 + lVar40) * -0x2537;
    lVar35 = lVar40 * -0x2ef3 + lVar34 * 0x200b + lVar32 * -0x35ea + lVar35;
    lVar28 = lVar42 + lVar36 * -0x3a4c + lVar28;
    lVar34 = lVar29 + lVar34 * -0x2626 + lVar37;
    lVar37 = lVar27 + lVar40 * 0x4258 + lVar41 + lVar37;
    lVar29 = lVar27 + lVar39 * -0x1d8a + lVar29 + lVar44;
    lVar44 = lVar41 + lVar32 * 0x4347 + lVar44;
    local_1d0[lVar31 + 0x30] = (int)((ulong)(lVar26 - lVar35) >> 0xb);
    local_1d0[lVar31 + 0x48] = (int)((ulong)(lVar28 - lVar37) >> 0xb);
    local_1d0[lVar31] = (int)((ulong)(lVar29 + lVar43) >> 0xb);
    local_1d0[lVar31 + 0x10] = (int)((ulong)(lVar34 + lVar38) >> 0xb);
    lVar27 = lVar31 + 1;
    local_1d0[lVar31 + 0x50] = (int)((ulong)(lVar43 - lVar29) >> 0xb);
    local_1d0[lVar31 + 0x40] = (int)((ulong)(lVar38 - lVar34) >> 0xb);
    local_1d0[lVar31 + 0x38] = (int)((ulong)(lVar45 - lVar44) >> 0xb);
    local_1d0[lVar31 + 0x20] = (int)((ulong)(lVar35 + lVar26) >> 0xb);
    local_1d0[lVar31 + 8] = (int)((ulong)(lVar37 + lVar28) >> 0xb);
    local_1d0[lVar31 + 0x18] = (int)((ulong)(lVar44 + lVar45) >> 0xb);
    local_1d0[lVar31 + 0x28] = (int)(uVar5 + lVar33 * -0x2d41 >> 0xb);
    lVar31 = lVar27;
  } while ((int)lVar27 != 8);
  lVar31 = 0;
  lVar30 = lVar30 + 0x80;
  do {
    iVar11 = local_1d0[lVar31 + 1];
    iVar10 = local_1d0[lVar31 + 2];
    iVar12 = local_1d0[lVar31 + 3];
    iVar6 = local_1d0[lVar31 + 4];
    iVar8 = local_1d0[lVar31 + 5];
    iVar7 = local_1d0[lVar31 + 6];
    iVar9 = local_1d0[lVar31 + 7];
    puVar4 = (undefined1 *)(*(long *)(param_4 + lVar31) + (ulong)param_5);
    iVar18 = (iVar12 + iVar11) * 0x1c6a;
    iVar1 = local_1d0[lVar31] * 0x2000 + 0x20000;
    iVar23 = (iVar7 + iVar10) - iVar6;
    iVar19 = (iVar8 + iVar11) * 0x1574;
    iVar13 = iVar1 + iVar23 * 0x2b6c;
    iVar14 = iVar13 + (iVar6 - iVar7) * 0x517e;
    iVar20 = (iVar12 + iVar11 + iVar8 + iVar9) * 0xcc0;
    iVar15 = iVar20 + (iVar9 + iVar11) * 3000;
    iVar16 = iVar14 + iVar7 * 0x43b5;
    iVar11 = iVar18 + iVar11 * -0x1d8a + iVar19 + iVar15;
    iVar21 = (iVar6 - iVar10) * 0xdc9;
    *puVar4 = *(undefined1 *)(lVar30 + ((ulong)((uint)(iVar11 + iVar16) >> 0x12) & 0x3ff));
    iVar22 = (iVar9 + iVar12) * -0x398b;
    iVar17 = iVar20 + (iVar8 + iVar12) * -0x2537;
    iVar14 = iVar14 + iVar6 * -0x3a4c + iVar21;
    iVar18 = iVar18 + iVar12 * 0x4258 + iVar22 + iVar17;
    puVar4[10] = *(undefined1 *)(lVar30 + ((ulong)((uint)(iVar16 - iVar11) >> 0x12) & 0x3ff));
    puVar4[1] = *(undefined1 *)(lVar30 + ((ulong)((uint)(iVar18 + iVar14) >> 0x12) & 0x3ff));
    iVar11 = iVar13 + (iVar7 + iVar10) * -0x24fb;
    iVar17 = iVar19 + iVar8 * -0x2626 + iVar17;
    iVar7 = iVar11 + iVar7 * -0x193d;
    puVar4[9] = *(undefined1 *)(lVar30 + ((ulong)((uint)(iVar14 - iVar18) >> 0x12) & 0x3ff));
    puVar4[2] = *(undefined1 *)(lVar30 + ((ulong)((uint)(iVar17 + iVar7) >> 0x12) & 0x3ff));
    iVar14 = iVar13 + iVar21 + iVar10 * -0x306f;
    iVar15 = iVar22 + iVar9 * 0x4347 + iVar15;
    puVar4[8] = *(undefined1 *)(lVar30 + ((ulong)((uint)(iVar7 - iVar17) >> 0x12) & 0x3ff));
    puVar4[3] = *(undefined1 *)(lVar30 + ((ulong)((uint)(iVar15 + iVar14) >> 0x12) & 0x3ff));
    iVar11 = iVar10 * -0x2c83 + iVar6 * 0x3e39 + iVar11;
    iVar20 = iVar12 * -0x2ef3 + iVar8 * 0x200b + iVar9 * -0x35ea + iVar20;
    puVar4[7] = *(undefined1 *)(lVar30 + ((ulong)((uint)(iVar14 - iVar15) >> 0x12) & 0x3ff));
    puVar4[4] = *(undefined1 *)(lVar30 + ((ulong)((uint)(iVar20 + iVar11) >> 0x12) & 0x3ff));
    lVar31 = lVar31 + 8;
    puVar4[6] = *(undefined1 *)(lVar30 + ((ulong)((uint)(iVar11 - iVar20) >> 0x12) & 0x3ff));
    puVar4[5] = *(undefined1 *)
                 (lVar30 + ((ulong)((uint)(iVar1 + iVar23 * -0x2d41) >> 0x12) & 0x3ff));
  } while (lVar31 != 0x58);
  if (*(long *)(lVar24 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ee9ed8(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  short *psVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  long lVar26;
  long lVar27;
  long lVar28;
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
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  int local_1f0 [96];
  long local_70;
  
  lVar26 = tpidr_el0;
  local_70 = *(long *)(lVar26 + 0x28);
  lVar29 = *(long *)(param_1 + 0x1b8);
  lVar28 = *(long *)(param_2 + 0x58);
  lVar31 = 0;
  do {
    piVar6 = (int *)(lVar28 + lVar31 * 4);
    psVar7 = (short *)(param_3 + lVar31 * 2);
    lVar27 = (long)piVar6[0x10] * (long)psVar7[0x10];
    lVar35 = (long)piVar6[8] * (long)psVar7[8];
    lVar36 = (long)piVar6[0x18] * (long)psVar7[0x18];
    lVar38 = (long)piVar6[0x38] * (long)psVar7[0x38];
    lVar32 = (long)(piVar6[0x30] * (int)psVar7[0x30]);
    uVar12 = (long)(*piVar6 * (int)*psVar7) << 0xd | 0x400;
    lVar37 = (long)piVar6[0x28] * (long)psVar7[0x28];
    lVar40 = lVar27 * 0x2000 + lVar32 * -0x2000;
    lVar8 = lVar27 * 0x2bb6 + lVar32 * 0x2000;
    lVar33 = lVar27 * 0xbb6 + lVar32 * -0x2000;
    lVar27 = (long)piVar6[0x20] * (long)psVar7[0x20] * 0x2731 + uVar12;
    lVar30 = uVar12 + (long)piVar6[0x20] * (long)psVar7[0x20] * -0x2731;
    lVar32 = lVar40 + uVar12;
    lVar40 = uVar12 - lVar40;
    lVar9 = lVar8 + lVar27;
    lVar27 = lVar27 - lVar8;
    lVar10 = lVar33 + lVar30;
    lVar30 = lVar30 - lVar33;
    lVar39 = (lVar37 + lVar35 + lVar38) * 0x1b8d;
    lVar43 = lVar39 + (lVar37 + lVar35) * 0x85b;
    lVar33 = lVar36 * -0x1151 + lVar35 * -0x15a4 + lVar38 * -0x3f74 + lVar39;
    lVar41 = ((lVar35 - lVar38) + (lVar36 - lVar37)) * 0x1151;
    lVar34 = lVar41 + (lVar35 - lVar38) * 0x187e;
    lVar41 = lVar41 + (lVar36 - lVar37) * -0x3b21;
    lVar42 = (lVar38 + lVar37) * -0x2175;
    lVar8 = lVar36 * 0x29cf + lVar35 * 0x8f7 + lVar43;
    lVar43 = lVar36 * -0x1151 + lVar37 * -0x2f50 + lVar42 + lVar43;
    lVar42 = lVar36 * -0x29cf + lVar38 * 0x32c6 + lVar39 + lVar42;
    local_1f0[lVar31 + 0x50] = (int)((ulong)(lVar32 - lVar34) >> 0xb);
    local_1f0[lVar31 + 0x20] = (int)((ulong)(lVar41 + lVar40) >> 0xb);
    local_1f0[lVar31 + 0x38] = (int)((ulong)(lVar40 - lVar41) >> 0xb);
    local_1f0[lVar31 + 0x28] = (int)((ulong)(lVar33 + lVar27) >> 0xb);
    local_1f0[lVar31] = (int)((ulong)(lVar8 + lVar9) >> 0xb);
    local_1f0[lVar31 + 0x58] = (int)((ulong)(lVar9 - lVar8) >> 0xb);
    local_1f0[lVar31 + 0x10] = (int)((ulong)(lVar43 + lVar10) >> 0xb);
    lVar8 = lVar31 + 1;
    local_1f0[lVar31 + 0x48] = (int)((ulong)(lVar10 - lVar43) >> 0xb);
    local_1f0[lVar31 + 0x40] = (int)((ulong)(lVar30 - lVar42) >> 0xb);
    local_1f0[lVar31 + 8] = (int)((ulong)(lVar34 + lVar32) >> 0xb);
    local_1f0[lVar31 + 0x18] = (int)((ulong)(lVar42 + lVar30) >> 0xb);
    local_1f0[lVar31 + 0x30] = (int)((ulong)(lVar27 - lVar33) >> 0xb);
    lVar31 = lVar8;
  } while ((int)lVar8 != 8);
  lVar31 = 0;
  lVar29 = lVar29 + 0x80;
  do {
    iVar17 = local_1f0[lVar31 + 1];
    iVar15 = local_1f0[lVar31 + 4];
    iVar18 = local_1f0[lVar31 + 5];
    iVar16 = local_1f0[lVar31 + 2];
    iVar19 = local_1f0[lVar31 + 3];
    iVar13 = local_1f0[lVar31 + 6];
    iVar14 = local_1f0[lVar31 + 7];
    iVar1 = local_1f0[lVar31] * 0x2000 + 0x20000;
    iVar23 = (iVar18 + iVar17 + iVar14) * 0x1b8d;
    iVar20 = iVar13 * 0x2000 + iVar16 * 0x2bb6;
    iVar2 = iVar1 + iVar15 * 0x2731;
    iVar21 = iVar23 + (iVar18 + iVar17) * 0x85b;
    iVar3 = iVar20 + iVar2;
    iVar4 = iVar19 * 0x29cf + iVar17 * 0x8f7 + iVar21;
    puVar11 = (undefined1 *)(*(long *)(param_4 + lVar31) + (ulong)param_5);
    *puVar11 = *(undefined1 *)(lVar29 + ((ulong)((uint)(iVar4 + iVar3) >> 0x12) & 0x3ff));
    iVar25 = iVar16 * 0x2000 + iVar13 * -0x2000;
    iVar24 = ((iVar17 - iVar14) + (iVar19 - iVar18)) * 0x1151;
    iVar5 = iVar25 + iVar1;
    iVar22 = iVar24 + (iVar17 - iVar14) * 0x187e;
    puVar11[0xb] = *(undefined1 *)(lVar29 + ((ulong)((uint)(iVar3 - iVar4) >> 0x12) & 0x3ff));
    iVar13 = iVar13 * -0x2000 + iVar16 * 0xbb6;
    puVar11[1] = *(undefined1 *)(lVar29 + ((ulong)((uint)(iVar22 + iVar5) >> 0x12) & 0x3ff));
    iVar4 = (iVar14 + iVar18) * -0x2175;
    iVar15 = iVar1 + iVar15 * -0x2731;
    iVar21 = iVar19 * -0x1151 + iVar18 * -0x2f50 + iVar4 + iVar21;
    iVar3 = iVar13 + iVar15;
    puVar11[10] = *(undefined1 *)(lVar29 + ((ulong)((uint)(iVar5 - iVar22) >> 0x12) & 0x3ff));
    iVar15 = iVar15 - iVar13;
    puVar11[2] = *(undefined1 *)(lVar29 + ((ulong)((uint)(iVar21 + iVar3) >> 0x12) & 0x3ff));
    iVar4 = iVar19 * -0x29cf + iVar14 * 0x32c6 + iVar23 + iVar4;
    puVar11[9] = *(undefined1 *)(lVar29 + ((ulong)((uint)(iVar3 - iVar21) >> 0x12) & 0x3ff));
    iVar1 = iVar1 - iVar25;
    puVar11[3] = *(undefined1 *)(lVar29 + ((ulong)((uint)(iVar4 + iVar15) >> 0x12) & 0x3ff));
    iVar24 = iVar24 + (iVar19 - iVar18) * -0x3b21;
    lVar31 = lVar31 + 8;
    puVar11[8] = *(undefined1 *)(lVar29 + ((ulong)((uint)(iVar15 - iVar4) >> 0x12) & 0x3ff));
    iVar2 = iVar2 - iVar20;
    puVar11[4] = *(undefined1 *)(lVar29 + ((ulong)((uint)(iVar24 + iVar1) >> 0x12) & 0x3ff));
    iVar23 = iVar19 * -0x1151 + iVar17 * -0x15a4 + iVar14 * -0x3f74 + iVar23;
    puVar11[7] = *(undefined1 *)(lVar29 + ((ulong)((uint)(iVar1 - iVar24) >> 0x12) & 0x3ff));
    puVar11[5] = *(undefined1 *)(lVar29 + ((ulong)((uint)(iVar23 + iVar2) >> 0x12) & 0x3ff));
    puVar11[6] = *(undefined1 *)(lVar29 + ((ulong)((uint)(iVar2 - iVar23) >> 0x12) & 0x3ff));
  } while (lVar31 != 0x60);
  if (*(long *)(lVar26 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

