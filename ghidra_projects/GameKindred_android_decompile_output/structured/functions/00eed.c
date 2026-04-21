// functions/00eed — 4 functions
#include "libGameKindred.h"




void FUN_00eed33c(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
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
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  int *piVar29;
  int iVar30;
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
  int local_1f8 [7];
  undefined4 local_1dc [7];
  undefined4 local_1c0 [7];
  int local_1a4 [7];
  undefined4 local_188 [7];
  undefined4 local_16c [7];
  undefined4 local_150 [7];
  undefined4 local_134 [7];
  undefined4 local_118 [7];
  undefined4 local_fc [7];
  int local_e0 [7];
  undefined4 local_c4 [7];
  undefined4 local_a8 [7];
  undefined4 local_8c [7];
  long local_70;
  
  lVar19 = tpidr_el0;
  local_70 = *(long *)(lVar19 + 0x28);
  lVar25 = *(long *)(param_1 + 0x1b8);
  lVar21 = *(long *)(param_2 + 0x58);
  lVar27 = 0;
  do {
    piVar29 = (int *)(lVar21 + lVar27 * 4);
    psVar3 = (short *)(param_3 + lVar27 * 2);
    lVar31 = (long)piVar29[0x20] * (long)psVar3[0x20];
    lVar32 = (long)piVar29[0x10] * (long)psVar3[0x10];
    lVar34 = (long)piVar29[0x30] * (long)psVar3[0x30];
    lVar35 = (long)piVar29[8] * (long)psVar3[8];
    lVar38 = (long)piVar29[0x38] * (long)psVar3[0x38];
    uVar6 = (long)(*piVar29 * (int)*psVar3) << 0xd | 0x400;
    lVar36 = (long)piVar29[0x18] * (long)psVar3[0x18];
    lVar26 = (lVar34 + lVar32) * 0x2362;
    lVar28 = lVar32 * 0x13a3 + lVar34 * -0x2c1f;
    lVar37 = (long)piVar29[0x28] * (long)psVar3[0x28];
    lVar39 = (lVar36 + lVar35) * 0x2ab7;
    lVar20 = uVar6 + lVar31 * 0x28c6;
    lVar24 = uVar6 + lVar31 * 0xa12;
    lVar40 = uVar6 + lVar31 * -0x1c37;
    lVar33 = lVar26 + lVar32 * 0x8bd;
    lVar26 = lVar26 + lVar34 * -0x3704;
    lVar42 = (lVar37 + lVar35) * 0x2652;
    lVar32 = lVar33 + lVar20;
    lVar20 = lVar20 - lVar33;
    lVar33 = lVar26 + lVar24;
    lVar24 = lVar24 - lVar26;
    lVar26 = lVar28 + lVar40;
    lVar40 = lVar40 - lVar28;
    lVar34 = (lVar37 + lVar36) * -0x511 + lVar38 * -0x2000;
    lVar28 = lVar39 + lVar36 * -0xd92 + lVar34;
    lVar34 = lVar42 + lVar37 * -0x4bf7 + lVar34;
    lVar41 = (lVar37 - lVar36) * 0x2cf8;
    lVar22 = (lVar37 + lVar35) * 0x1814;
    lVar23 = (lVar35 - lVar36) * 0xef2 + lVar38 * -0x2000;
    lVar4 = lVar22 + lVar35 * -0x21f5 + lVar23;
    lVar23 = lVar41 + lVar36 * 0x1599 + lVar23;
    iVar1 = ((int)(lVar35 - lVar36) - (int)lVar37) + (int)lVar38;
    lVar35 = lVar39 + lVar35 * -0x2410 + lVar42 + lVar38 * 0x2000;
    lVar22 = lVar41 + lVar37 * -0x361a + lVar22 + lVar38 * 0x2000;
    local_a8[lVar27] = (int)((ulong)(lVar33 - lVar28) >> 0xb);
    iVar30 = (int)(uVar6 + lVar31 * -0x2d42 >> 0xb);
    local_1c0[lVar27] = (int)((ulong)(lVar34 + lVar26) >> 0xb);
    local_c4[lVar27] = (int)((ulong)(lVar26 - lVar34) >> 0xb);
    local_e0[lVar27] = iVar30 + iVar1 * -4;
    local_16c[lVar27] = (int)((ulong)(lVar23 + lVar24) >> 0xb);
    local_118[lVar27] = (int)((ulong)(lVar24 - lVar23) >> 0xb);
    lVar26 = lVar27 + 1;
    local_150[lVar27] = (int)((ulong)(lVar4 + lVar20) >> 0xb);
    local_8c[lVar27] = (int)((ulong)(lVar32 - lVar35) >> 0xb);
    local_fc[lVar27] = (int)((ulong)(lVar40 - lVar22) >> 0xb);
    local_1a4[lVar27] = iVar30 + iVar1 * 4;
    local_1dc[lVar27] = (int)((ulong)(lVar28 + lVar33) >> 0xb);
    local_1f8[lVar27] = (int)((ulong)(lVar35 + lVar32) >> 0xb);
    local_188[lVar27] = (int)((ulong)(lVar22 + lVar40) >> 0xb);
    local_134[lVar27] = (int)((ulong)(lVar20 - lVar4) >> 0xb);
    lVar27 = lVar26;
  } while ((int)lVar26 != 7);
  lVar27 = 0;
  piVar29 = local_1f8;
  lVar25 = lVar25 + 0x80;
  do {
    iVar7 = piVar29[3];
    iVar9 = piVar29[4];
    iVar10 = piVar29[1];
    iVar8 = piVar29[5];
    iVar11 = piVar29[6];
    iVar12 = piVar29[2];
    iVar1 = *piVar29 * 0x2000 + 0x20000;
    iVar14 = (iVar9 - iVar11) * 0x1c37;
    iVar15 = (iVar7 + iVar10) * 0x1def;
    iVar16 = (iVar8 + iVar10) * 0x13a3;
    iVar13 = iVar1 + (iVar11 + iVar12) * 0x28c6;
    iVar30 = iVar14 + iVar11 * -0x27d + iVar13;
    iVar2 = iVar15 + (iVar10 - iVar7) * -0x573 + iVar16;
    puVar5 = (undefined1 *)(*(long *)(param_4 + lVar27) + (ulong)param_5);
    *puVar5 = *(undefined1 *)(lVar25 + ((ulong)((uint)(iVar2 + iVar30) >> 0x12) & 0x3ff));
    iVar17 = (iVar12 - iVar9) * 0xa12;
    iVar18 = (iVar8 + iVar7) * -0x2c1f;
    iVar14 = iVar1 + iVar9 * -0x3aeb + iVar17 + iVar14;
    iVar7 = iVar15 + (iVar10 - iVar7) * 0x573 + iVar18;
    puVar5[6] = *(undefined1 *)(lVar25 + ((ulong)((uint)(iVar30 - iVar2) >> 0x12) & 0x3ff));
    puVar5[1] = *(undefined1 *)(lVar25 + ((ulong)((uint)(iVar7 + iVar14) >> 0x12) & 0x3ff));
    iVar13 = iVar17 + iVar12 * -0x4f0f + iVar13;
    iVar18 = iVar16 + iVar8 * 0x3bde + iVar18;
    puVar5[5] = *(undefined1 *)(lVar25 + ((ulong)((uint)(iVar14 - iVar7) >> 0x12) & 0x3ff));
    lVar27 = lVar27 + 8;
    puVar5[2] = *(undefined1 *)(lVar25 + ((ulong)((uint)(iVar18 + iVar13) >> 0x12) & 0x3ff));
    puVar5[4] = *(undefined1 *)(lVar25 + ((ulong)((uint)(iVar13 - iVar18) >> 0x12) & 0x3ff));
    piVar29 = piVar29 + 7;
    puVar5[3] = *(undefined1 *)
                 (lVar25 + ((ulong)((uint)(iVar1 + (iVar9 - (iVar11 + iVar12)) * 0x2d41) >> 0x12) &
                           0x3ff));
  } while (lVar27 != 0x70);
  if (*(long *)(lVar19 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00eed754(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  long lVar5;
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
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  int *piVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  int local_190 [6];
  undefined4 local_178 [6];
  undefined4 local_160 [6];
  undefined4 local_148 [6];
  undefined4 local_130 [6];
  undefined4 local_118 [6];
  undefined4 local_100 [6];
  undefined4 local_e8 [6];
  undefined4 local_d0 [6];
  undefined4 local_b8 [6];
  undefined4 local_a0 [6];
  undefined4 local_88 [6];
  long local_70;
  
  lVar16 = tpidr_el0;
  local_70 = *(long *)(lVar16 + 0x28);
  lVar19 = *(long *)(param_1 + 0x1b8);
  lVar18 = *(long *)(param_2 + 0x58);
  lVar21 = 0;
  do {
    piVar25 = (int *)(lVar18 + lVar21 * 4);
    psVar4 = (short *)(param_3 + lVar21 * 2);
    lVar17 = (long)piVar25[0x10] * (long)psVar4[0x10];
    lVar26 = (long)piVar25[8] * (long)psVar4[8];
    lVar27 = (long)piVar25[0x18] * (long)psVar4[0x18];
    lVar29 = (long)piVar25[0x38] * (long)psVar4[0x38];
    lVar22 = (long)(piVar25[0x30] * (int)psVar4[0x30]);
    uVar9 = (long)(*piVar25 * (int)*psVar4) << 0xd | 0x400;
    lVar28 = (long)piVar25[0x28] * (long)psVar4[0x28];
    lVar31 = lVar17 * 0x2000 + lVar22 * -0x2000;
    lVar5 = lVar17 * 0x2bb6 + lVar22 * 0x2000;
    lVar23 = lVar17 * 0xbb6 + lVar22 * -0x2000;
    lVar17 = (long)piVar25[0x20] * (long)psVar4[0x20] * 0x2731 + uVar9;
    lVar20 = uVar9 + (long)piVar25[0x20] * (long)psVar4[0x20] * -0x2731;
    lVar22 = lVar31 + uVar9;
    lVar31 = uVar9 - lVar31;
    lVar6 = lVar5 + lVar17;
    lVar17 = lVar17 - lVar5;
    lVar7 = lVar23 + lVar20;
    lVar20 = lVar20 - lVar23;
    lVar30 = (lVar28 + lVar26 + lVar29) * 0x1b8d;
    lVar34 = lVar30 + (lVar28 + lVar26) * 0x85b;
    lVar23 = lVar27 * -0x1151 + lVar26 * -0x15a4 + lVar29 * -0x3f74 + lVar30;
    lVar32 = ((lVar26 - lVar29) + (lVar27 - lVar28)) * 0x1151;
    lVar24 = lVar32 + (lVar26 - lVar29) * 0x187e;
    lVar32 = lVar32 + (lVar27 - lVar28) * -0x3b21;
    lVar33 = (lVar29 + lVar28) * -0x2175;
    lVar5 = lVar27 * 0x29cf + lVar26 * 0x8f7 + lVar34;
    lVar34 = lVar27 * -0x1151 + lVar28 * -0x2f50 + lVar33 + lVar34;
    lVar33 = lVar27 * -0x29cf + lVar29 * 0x32c6 + lVar30 + lVar33;
    local_a0[lVar21] = (int)((ulong)(lVar22 - lVar24) >> 0xb);
    local_130[lVar21] = (int)((ulong)(lVar32 + lVar31) >> 0xb);
    local_e8[lVar21] = (int)((ulong)(lVar31 - lVar32) >> 0xb);
    local_118[lVar21] = (int)((ulong)(lVar23 + lVar17) >> 0xb);
    local_190[lVar21] = (int)((ulong)(lVar5 + lVar6) >> 0xb);
    local_88[lVar21] = (int)((ulong)(lVar6 - lVar5) >> 0xb);
    local_160[lVar21] = (int)((ulong)(lVar34 + lVar7) >> 0xb);
    lVar5 = lVar21 + 1;
    local_b8[lVar21] = (int)((ulong)(lVar7 - lVar34) >> 0xb);
    local_d0[lVar21] = (int)((ulong)(lVar20 - lVar33) >> 0xb);
    local_178[lVar21] = (int)((ulong)(lVar24 + lVar22) >> 0xb);
    local_148[lVar21] = (int)((ulong)(lVar33 + lVar20) >> 0xb);
    local_100[lVar21] = (int)((ulong)(lVar17 - lVar23) >> 0xb);
    lVar21 = lVar5;
  } while ((int)lVar5 != 6);
  lVar21 = 0;
  piVar25 = local_190;
  lVar19 = lVar19 + 0x80;
  do {
    iVar11 = piVar25[1];
    iVar10 = piVar25[3];
    iVar12 = piVar25[5];
    iVar13 = piVar25[2];
    iVar1 = *piVar25 * 0x2000 + 0x20000;
    iVar14 = (iVar12 + iVar11) * 0xbb6;
    iVar15 = (iVar11 - iVar10) - iVar12;
    iVar2 = iVar1 + piVar25[4] * 0x16a1;
    iVar11 = iVar14 + (iVar10 + iVar11) * 0x2000;
    iVar3 = iVar2 + iVar13 * 0x2731;
    puVar8 = (undefined1 *)(*(long *)(param_4 + lVar21) + (ulong)param_5);
    iVar1 = iVar1 + piVar25[4] * -0x2d42;
    *puVar8 = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar11 + iVar3) >> 0x12) & 0x3ff));
    puVar8[5] = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar3 - iVar11) >> 0x12) & 0x3ff));
    iVar14 = iVar14 + (iVar12 - iVar10) * 0x2000;
    puVar8[1] = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar1 + iVar15 * 0x2000) >> 0x12) & 0x3ff))
    ;
    iVar2 = iVar2 + iVar13 * -0x2731;
    puVar8[4] = *(undefined1 *)
                 (lVar19 + ((ulong)((uint)(iVar1 + iVar15 * -0x2000) >> 0x12) & 0x3ff));
    lVar21 = lVar21 + 8;
    puVar8[2] = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar14 + iVar2) >> 0x12) & 0x3ff));
    piVar25 = piVar25 + 6;
    puVar8[3] = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar2 - iVar14) >> 0x12) & 0x3ff));
  } while (lVar21 != 0x60);
  if (*(long *)(lVar16 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00eedac0(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  long *plVar1;
  int iVar2;
  short *psVar3;
  long lVar4;
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
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  int *piVar21;
  long lVar22;
  long lVar23;
  int iVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  int local_138 [5];
  undefined4 local_124 [5];
  int local_110 [5];
  undefined4 local_fc [5];
  undefined4 local_e8 [5];
  undefined4 local_d4 [5];
  undefined4 local_c0 [5];
  int local_ac [5];
  undefined4 local_98 [5];
  undefined4 local_84 [5];
  long local_70;
  
  lVar15 = tpidr_el0;
  local_70 = *(long *)(lVar15 + 0x28);
  lVar18 = *(long *)(param_1 + 0x1b8);
  lVar16 = *(long *)(param_2 + 0x58);
  lVar19 = 0;
  do {
    piVar21 = (int *)(lVar16 + lVar19 * 4);
    psVar3 = (short *)(param_3 + lVar19 * 2);
    lVar27 = (long)piVar21[0x20] * (long)psVar3[0x20];
    lVar20 = (long)piVar21[8] * (long)psVar3[8];
    lVar17 = (long)piVar21[0x28] * (long)psVar3[0x28];
    lVar4 = (long)piVar21[0x38] * (long)psVar3[0x38] + (long)piVar21[0x18] * (long)psVar3[0x18];
    lVar22 = (long)piVar21[0x18] * (long)psVar3[0x18] - (long)piVar21[0x38] * (long)psVar3[0x38];
    uVar8 = (long)(*piVar21 * (int)*psVar3) << 0xd | 0x400;
    lVar25 = ((long)piVar21[0x30] * (long)psVar3[0x30] + (long)piVar21[0x10] * (long)psVar3[0x10]) *
             0x1a9a;
    lVar26 = uVar8 + lVar27 * 0x249d;
    lVar29 = uVar8 + lVar27 * -0xdfc;
    lVar28 = lVar25 + (long)piVar21[0x10] * (long)psVar3[0x10] * 0x1071;
    lVar25 = lVar25 + (long)piVar21[0x30] * (long)psVar3[0x30] * -0x45a4;
    lVar5 = lVar22 * 0x9e3 + lVar17 * 0x2000;
    lVar23 = lVar17 * 0x2000 + lVar22 * -0x19e3;
    lVar6 = lVar28 + lVar26;
    lVar26 = lVar26 - lVar28;
    lVar28 = lVar25 + lVar29;
    lVar29 = lVar29 - lVar25;
    iVar13 = ((int)lVar20 - (int)lVar17) - (int)lVar22;
    lVar17 = lVar4 * 0x1e6f + lVar20 * 0x2cb3 + lVar5;
    lVar5 = lVar4 * -0x1e6f + lVar20 * 0x714 + lVar5;
    lVar25 = (lVar4 * -0x12cf + lVar20 * 0x2853) - lVar23;
    lVar23 = lVar23 + lVar4 * -0x12cf + lVar20 * 0x148c;
    iVar24 = (int)(uVar8 + lVar27 * -0x2d42 >> 0xb);
    local_ac[lVar19] = iVar24 + iVar13 * -4;
    local_138[lVar19] = (int)((ulong)(lVar17 + lVar6) >> 0xb);
    local_84[lVar19] = (int)((ulong)(lVar6 - lVar17) >> 0xb);
    local_124[lVar19] = (int)((ulong)(lVar25 + lVar28) >> 0xb);
    local_c0[lVar19] = (int)((ulong)(lVar29 - lVar23) >> 0xb);
    lVar4 = lVar19 + 1;
    local_98[lVar19] = (int)((ulong)(lVar28 - lVar25) >> 0xb);
    local_e8[lVar19] = (int)((ulong)(lVar5 + lVar26) >> 0xb);
    local_110[lVar19] = iVar24 + iVar13 * 4;
    local_fc[lVar19] = (int)((ulong)(lVar23 + lVar29) >> 0xb);
    local_d4[lVar19] = (int)((ulong)(lVar26 - lVar5) >> 0xb);
    lVar19 = lVar4;
  } while ((int)lVar4 != 5);
  lVar19 = 0;
  piVar21 = local_138;
  lVar18 = lVar18 + 0x80;
  do {
    iVar9 = piVar21[3];
    plVar1 = (long *)(param_4 + lVar19);
    lVar19 = lVar19 + 8;
    iVar24 = piVar21[4] + piVar21[2];
    iVar14 = piVar21[2] - piVar21[4];
    iVar13 = *piVar21 * 0x2000 + 0x20000;
    iVar12 = (iVar9 + piVar21[1]) * 0x1a9a;
    iVar10 = iVar13 + iVar14 * 0xb50;
    iVar11 = iVar12 + piVar21[1] * 0x1071;
    iVar2 = iVar10 + iVar24 * 0x194c;
    puVar7 = (undefined1 *)(*plVar1 + (ulong)param_5);
    *puVar7 = *(undefined1 *)(lVar18 + ((ulong)((uint)(iVar11 + iVar2) >> 0x12) & 0x3ff));
    iVar12 = iVar12 + iVar9 * -0x45a4;
    iVar10 = iVar10 + iVar24 * -0x194c;
    puVar7[4] = *(undefined1 *)(lVar18 + ((ulong)((uint)(iVar2 - iVar11) >> 0x12) & 0x3ff));
    puVar7[1] = *(undefined1 *)(lVar18 + ((ulong)((uint)(iVar12 + iVar10) >> 0x12) & 0x3ff));
    piVar21 = piVar21 + 5;
    puVar7[3] = *(undefined1 *)(lVar18 + ((ulong)((uint)(iVar10 - iVar12) >> 0x12) & 0x3ff));
    puVar7[2] = *(undefined1 *)
                 (lVar18 + ((ulong)((uint)(iVar13 + iVar14 * -0x2d40) >> 0x12) & 0x3ff));
  } while (lVar19 != 0x50);
  if (*(long *)(lVar15 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00eeddc8(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  int *piVar12;
  short *psVar13;
  uint uVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  short sVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  int local_e8 [8];
  int local_c8 [4];
  int local_b8 [4];
  int local_a8 [4];
  int local_98 [4];
  int local_88 [4];
  int local_78 [4];
  long local_68;
  
  lVar9 = tpidr_el0;
  piVar12 = local_e8;
  psVar13 = (short *)(param_3 + 0x40);
  uVar14 = 5;
  local_68 = *(long *)(lVar9 + 0x28);
  lVar11 = *(long *)(param_1 + 0x1b8);
  piVar10 = *(int **)(param_2 + 0x58);
  do {
    sVar18 = psVar13[-0x10];
    if ((((psVar13[-0x18] == 0 && sVar18 == 0) && (sVar18 = 0, psVar13[-8] == 0)) &&
        (sVar18 = 0, *psVar13 == 0)) &&
       (((sVar18 = 0, psVar13[8] == 0 && (sVar18 = 0, psVar13[0x10] == 0)) &&
        (sVar18 = 0, psVar13[0x18] == 0)))) {
      iVar16 = (int)psVar13[-0x20] * *piVar10 * 4;
      *piVar12 = iVar16;
      piVar12[4] = iVar16;
      piVar12[8] = iVar16;
      piVar12[0xc] = iVar16;
      piVar12[0x10] = iVar16;
      piVar12[0x14] = iVar16;
      piVar12[0x18] = iVar16;
      lVar15 = 0x1c;
    }
    else {
      lVar15 = (long)piVar10[0x38] * (long)psVar13[0x18];
      lVar21 = (long)piVar10[0x28] * (long)psVar13[8];
      lVar24 = (long)piVar10[0x18] * (long)psVar13[-8];
      lVar17 = (long)piVar10[8] * (long)psVar13[-0x18];
      uVar4 = (long)(*piVar10 * (int)psVar13[-0x20]) << 0xd | 0x400;
      lVar27 = ((long)piVar10[0x30] * (long)psVar13[0x10] + (long)piVar10[0x10] * (long)sVar18) *
               0x1151;
      lVar19 = lVar27 + (long)piVar10[0x10] * (long)sVar18 * 0x187e;
      lVar27 = lVar27 + (long)piVar10[0x30] * (long)psVar13[0x10] * -0x3b21;
      lVar20 = uVar4 + (long)(piVar10[0x20] * (int)*psVar13) * 0x2000;
      lVar22 = uVar4 + (long)(piVar10[0x20] * (int)*psVar13) * -0x2000;
      lVar25 = (lVar17 + lVar15) * -0x1ccd;
      lVar26 = (lVar24 + lVar21) * -0x5203;
      lVar2 = lVar20 + lVar19;
      lVar20 = lVar20 - lVar19;
      lVar19 = lVar22 + lVar27;
      lVar22 = lVar22 - lVar27;
      lVar23 = (lVar17 + lVar21 + lVar24 + lVar15) * 0x25a1;
      lVar28 = lVar23 + (lVar24 + lVar15) * -0x3ec5;
      lVar23 = lVar23 + (lVar17 + lVar21) * -0xc7c;
      lVar17 = lVar25 + lVar17 * 0x300b + lVar23;
      lVar27 = lVar25 + lVar15 * 0x98e + lVar28;
      lVar23 = lVar26 + lVar21 * 0x41b3 + lVar23;
      lVar28 = lVar26 + lVar24 * 0x6254 + lVar28;
      iVar16 = (int)((ulong)(lVar20 - lVar27) >> 0xb);
      *piVar12 = (int)((ulong)(lVar17 + lVar2) >> 0xb);
      lVar15 = 0x10;
      piVar12[0x1c] = (int)((ulong)(lVar2 - lVar17) >> 0xb);
      piVar12[4] = (int)((ulong)(lVar28 + lVar19) >> 0xb);
      piVar12[0x18] = (int)((ulong)(lVar19 - lVar28) >> 0xb);
      piVar12[8] = (int)((ulong)(lVar23 + lVar22) >> 0xb);
      piVar12[0x14] = (int)((ulong)(lVar22 - lVar23) >> 0xb);
      piVar12[0xc] = (int)((ulong)(lVar27 + lVar20) >> 0xb);
    }
    uVar14 = uVar14 - 1;
    piVar12[lVar15] = iVar16;
    piVar12 = piVar12 + 1;
    piVar10 = piVar10 + 1;
    psVar13 = psVar13 + 1;
  } while (1 < uVar14);
  lVar15 = 0;
  piVar12 = local_e8;
  lVar11 = lVar11 + 0x80;
  do {
    iVar5 = piVar12[3];
    plVar1 = (long *)(param_4 + lVar15);
    lVar15 = lVar15 + 8;
    iVar16 = *piVar12 + 0x10 + piVar12[2];
    iVar8 = (*piVar12 + 0x10) - piVar12[2];
    iVar7 = (iVar5 + piVar12[1]) * 0x1151;
    iVar6 = iVar7 + piVar12[1] * 0x187e;
    puVar3 = (undefined1 *)(*plVar1 + (ulong)param_5);
    *puVar3 = *(undefined1 *)(lVar11 + ((ulong)((uint)(iVar6 + iVar16 * 0x2000) >> 0x12) & 0x3ff));
    iVar7 = iVar7 + iVar5 * -0x3b21;
    puVar3[3] = *(undefined1 *)(lVar11 + ((ulong)((uint)(iVar16 * 0x2000 - iVar6) >> 0x12) & 0x3ff))
    ;
    puVar3[1] = *(undefined1 *)(lVar11 + ((ulong)((uint)(iVar7 + iVar8 * 0x2000) >> 0x12) & 0x3ff));
    piVar12 = piVar12 + 4;
    puVar3[2] = *(undefined1 *)(lVar11 + ((ulong)((uint)(iVar8 * 0x2000 - iVar7) >> 0x12) & 0x3ff));
  } while (lVar15 != 0x40);
  if (*(long *)(lVar9 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

