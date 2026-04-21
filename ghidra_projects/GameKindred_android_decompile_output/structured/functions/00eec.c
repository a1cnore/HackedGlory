// functions/00eec — 7 functions
#include "libGameKindred.h"




void FUN_00eec280(long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  short *psVar5;
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
  int iVar21;
  int iVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  int iVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  int local_130 [48];
  long local_70;
  
  lVar23 = tpidr_el0;
  local_70 = *(long *)(lVar23 + 0x28);
  lVar29 = *(long *)(param_1 + 0x1b8);
  lVar30 = *(long *)(param_2 + 0x58);
  lVar28 = 0;
  do {
    piVar4 = (int *)(lVar30 + lVar28 * 4);
    psVar5 = (short *)(param_3 + lVar28 * 2);
    lVar25 = (long)piVar4[8] * (long)psVar5[8];
    lVar32 = (long)piVar4[0x18] * (long)psVar5[0x18];
    lVar31 = (long)piVar4[0x28] * (long)psVar5[0x28];
    uVar8 = (long)(*piVar4 * (int)*psVar5) << 0xd | 0x400;
    lVar24 = (lVar31 + lVar25) * 0xbb6;
    iVar21 = ((int)lVar25 - (int)lVar32) - (int)lVar31;
    lVar26 = uVar8 + (long)piVar4[0x20] * (long)psVar5[0x20] * 0x16a1;
    lVar6 = lVar24 + (lVar32 + lVar25) * 0x2000;
    lVar24 = lVar24 + (lVar31 - lVar32) * 0x2000;
    lVar31 = (long)piVar4[0x10] * (long)psVar5[0x10] * 0x2731 + lVar26;
    lVar26 = lVar26 + (long)piVar4[0x10] * (long)psVar5[0x10] * -0x2731;
    lVar25 = lVar28 + 1;
    iVar27 = (int)(uVar8 + (long)piVar4[0x20] * (long)psVar5[0x20] * -0x2d42 >> 0xb);
    local_130[lVar28 + 0x20] = iVar27 + iVar21 * -4;
    local_130[lVar28 + 8] = iVar27 + iVar21 * 4;
    local_130[lVar28] = (int)((ulong)(lVar6 + lVar31) >> 0xb);
    local_130[lVar28 + 0x28] = (int)((ulong)(lVar31 - lVar6) >> 0xb);
    local_130[lVar28 + 0x10] = (int)((ulong)(lVar24 + lVar26) >> 0xb);
    local_130[lVar28 + 0x18] = (int)((ulong)(lVar26 - lVar24) >> 0xb);
    lVar28 = lVar25;
  } while ((int)lVar25 != 8);
  lVar28 = 0;
  lVar29 = lVar29 + 0x80;
  do {
    iVar13 = local_130[lVar28 + 1];
    iVar11 = local_130[lVar28 + 4];
    iVar14 = local_130[lVar28 + 5];
    iVar9 = local_130[lVar28 + 6];
    iVar10 = local_130[lVar28 + 7];
    iVar12 = local_130[lVar28 + 2];
    iVar15 = local_130[lVar28 + 3];
    puVar7 = (undefined1 *)(*(long *)(param_4 + lVar28) + (param_5 & 0xffffffff));
    iVar21 = local_130[lVar28] * 0x2000 + 0x20000;
    iVar19 = (iVar14 + iVar13 + iVar10) * 0x1b8d;
    iVar16 = iVar9 * 0x2000 + iVar12 * 0x2bb6;
    iVar27 = iVar21 + iVar11 * 0x2731;
    iVar17 = iVar19 + (iVar14 + iVar13) * 0x85b;
    iVar1 = iVar16 + iVar27;
    iVar2 = iVar15 * 0x29cf + iVar13 * 0x8f7 + iVar17;
    *puVar7 = *(undefined1 *)(lVar29 + ((ulong)((uint)(iVar2 + iVar1) >> 0x12) & 0x3ff));
    iVar22 = iVar12 * 0x2000 + iVar9 * -0x2000;
    iVar20 = ((iVar13 - iVar10) + (iVar15 - iVar14)) * 0x1151;
    iVar3 = iVar22 + iVar21;
    iVar18 = iVar20 + (iVar13 - iVar10) * 0x187e;
    puVar7[0xb] = *(undefined1 *)(lVar29 + ((ulong)((uint)(iVar1 - iVar2) >> 0x12) & 0x3ff));
    iVar9 = iVar9 * -0x2000 + iVar12 * 0xbb6;
    puVar7[1] = *(undefined1 *)(lVar29 + ((ulong)((uint)(iVar18 + iVar3) >> 0x12) & 0x3ff));
    iVar2 = (iVar10 + iVar14) * -0x2175;
    iVar11 = iVar21 + iVar11 * -0x2731;
    iVar17 = iVar15 * -0x1151 + iVar14 * -0x2f50 + iVar2 + iVar17;
    iVar1 = iVar9 + iVar11;
    puVar7[10] = *(undefined1 *)(lVar29 + ((ulong)((uint)(iVar3 - iVar18) >> 0x12) & 0x3ff));
    puVar7[2] = *(undefined1 *)(lVar29 + ((ulong)((uint)(iVar17 + iVar1) >> 0x12) & 0x3ff));
    iVar11 = iVar11 - iVar9;
    iVar2 = iVar15 * -0x29cf + iVar10 * 0x32c6 + iVar19 + iVar2;
    puVar7[9] = *(undefined1 *)(lVar29 + ((ulong)((uint)(iVar1 - iVar17) >> 0x12) & 0x3ff));
    iVar20 = iVar20 + (iVar15 - iVar14) * -0x3b21;
    puVar7[3] = *(undefined1 *)(lVar29 + ((ulong)((uint)(iVar2 + iVar11) >> 0x12) & 0x3ff));
    iVar21 = iVar21 - iVar22;
    lVar28 = lVar28 + 8;
    puVar7[8] = *(undefined1 *)(lVar29 + ((ulong)((uint)(iVar11 - iVar2) >> 0x12) & 0x3ff));
    iVar27 = iVar27 - iVar16;
    puVar7[4] = *(undefined1 *)(lVar29 + ((ulong)((uint)(iVar20 + iVar21) >> 0x12) & 0x3ff));
    iVar19 = iVar15 * -0x1151 + iVar13 * -0x15a4 + iVar10 * -0x3f74 + iVar19;
    puVar7[7] = *(undefined1 *)(lVar29 + ((ulong)((uint)(iVar21 - iVar20) >> 0x12) & 0x3ff));
    puVar7[5] = *(undefined1 *)(lVar29 + ((ulong)((uint)(iVar19 + iVar27) >> 0x12) & 0x3ff));
    puVar7[6] = *(undefined1 *)(lVar29 + ((ulong)((uint)(iVar27 - iVar19) >> 0x12) & 0x3ff));
  } while (lVar28 != 0x30);
  if (*(long *)(lVar23 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00eec5d4(long param_1,long param_2,long param_3,long param_4,ulong param_5)

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
  undefined1 *puVar10;
  ulong uVar11;
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
  int iVar30;
  int local_110 [40];
  long local_70;
  
  lVar20 = tpidr_el0;
  local_70 = *(long *)(lVar20 + 0x28);
  lVar26 = *(long *)(param_1 + 0x1b8);
  lVar27 = *(long *)(param_2 + 0x58);
  lVar25 = 0;
  do {
    piVar6 = (int *)(lVar27 + lVar25 * 4);
    psVar7 = (short *)(param_3 + lVar25 * 2);
    lVar8 = (long)piVar6[0x20] * (long)psVar7[0x20] + (long)piVar6[0x10] * (long)psVar7[0x10];
    lVar24 = (long)piVar6[0x10] * (long)psVar7[0x10] - (long)piVar6[0x20] * (long)psVar7[0x20];
    uVar11 = (long)(*piVar6 * (int)*psVar7) << 0xd | 0x400;
    lVar22 = ((long)piVar6[0x18] * (long)psVar7[0x18] + (long)piVar6[8] * (long)psVar7[8]) * 0x1a9a;
    lVar28 = uVar11 + lVar24 * 0xb50;
    lVar23 = lVar22 + (long)piVar6[8] * (long)psVar7[8] * 0x1071;
    lVar22 = lVar22 + (long)piVar6[0x18] * (long)psVar7[0x18] * -0x45a4;
    lVar9 = lVar28 + lVar8 * 0x194c;
    lVar28 = lVar28 + lVar8 * -0x194c;
    lVar8 = lVar25 + 1;
    local_110[lVar25] = (int)((ulong)(lVar23 + lVar9) >> 0xb);
    local_110[lVar25 + 0x20] = (int)((ulong)(lVar9 - lVar23) >> 0xb);
    local_110[lVar25 + 8] = (int)((ulong)(lVar22 + lVar28) >> 0xb);
    local_110[lVar25 + 0x18] = (int)((ulong)(lVar28 - lVar22) >> 0xb);
    local_110[lVar25 + 0x10] = (int)(uVar11 + lVar24 * -0x2d40 >> 0xb);
    lVar25 = lVar8;
  } while ((int)lVar8 != 8);
  lVar25 = 0;
  lVar26 = lVar26 + 0x80;
  do {
    iVar13 = local_110[lVar25 + 1];
    iVar12 = local_110[lVar25 + 4];
    iVar14 = local_110[lVar25 + 5];
    puVar10 = (undefined1 *)(*(long *)(param_4 + lVar25) + (param_5 & 0xffffffff));
    iVar30 = local_110[lVar25 + 7] + local_110[lVar25 + 3];
    iVar21 = local_110[lVar25 + 3] - local_110[lVar25 + 7];
    iVar1 = local_110[lVar25] * 0x2000 + 0x20000;
    iVar29 = (local_110[lVar25 + 6] + local_110[lVar25 + 2]) * 0x1a9a;
    iVar15 = iVar1 + iVar12 * 0x249d;
    iVar16 = iVar29 + local_110[lVar25 + 2] * 0x1071;
    iVar29 = iVar29 + local_110[lVar25 + 6] * -0x45a4;
    iVar2 = iVar21 * 0x9e3 + iVar14 * 0x2000;
    iVar18 = iVar14 * 0x2000 + iVar21 * -0x19e3;
    iVar3 = iVar16 + iVar15;
    iVar4 = iVar30 * 0x1e6f + iVar13 * 0x2cb3 + iVar2;
    *puVar10 = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar4 + iVar3) >> 0x12) & 0x3ff));
    iVar17 = iVar1 + iVar12 * -0xdfc;
    iVar5 = iVar29 + iVar17;
    iVar19 = (iVar30 * -0x12cf + iVar13 * 0x2853) - iVar18;
    puVar10[9] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar3 - iVar4) >> 0x12) & 0x3ff));
    iVar1 = iVar1 + iVar12 * -0x2d42;
    iVar17 = iVar17 - iVar29;
    puVar10[1] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar19 + iVar5) >> 0x12) & 0x3ff));
    iVar3 = (iVar13 - iVar21) * 0x2000 + iVar14 * -0x2000;
    puVar10[8] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar5 - iVar19) >> 0x12) & 0x3ff));
    puVar10[2] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar3 + iVar1) >> 0x12) & 0x3ff));
    iVar18 = iVar18 + iVar30 * -0x12cf + iVar13 * 0x148c;
    iVar15 = iVar15 - iVar16;
    puVar10[7] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar1 - iVar3) >> 0x12) & 0x3ff));
    iVar2 = iVar30 * -0x1e6f + iVar13 * 0x714 + iVar2;
    puVar10[3] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar18 + iVar17) >> 0x12) & 0x3ff));
    lVar25 = lVar25 + 8;
    puVar10[6] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar17 - iVar18) >> 0x12) & 0x3ff));
    puVar10[4] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar2 + iVar15) >> 0x12) & 0x3ff));
    puVar10[5] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar15 - iVar2) >> 0x12) & 0x3ff));
  } while (lVar25 != 0x28);
  if (*(long *)(lVar20 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00eec8c4(long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  int *piVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int local_e8 [16];
  int local_a8 [8];
  int local_88 [8];
  long local_68;
  
  lVar14 = tpidr_el0;
  local_68 = *(long *)(lVar14 + 0x28);
  lVar19 = *(long *)(param_1 + 0x1b8);
  lVar20 = *(long *)(param_2 + 0x58);
  lVar18 = 0;
  do {
    piVar17 = (int *)(lVar20 + lVar18 * 4);
    psVar4 = (short *)(param_3 + lVar18 * 2);
    lVar1 = lVar18 + 1;
    iVar2 = piVar17[0x10] * (int)psVar4[0x10] + *piVar17 * (int)*psVar4;
    iVar12 = *piVar17 * (int)*psVar4 - piVar17[0x10] * (int)psVar4[0x10];
    lVar16 = ((long)piVar17[0x18] * (long)psVar4[0x18] + (long)piVar17[8] * (long)psVar4[8]) *
             0x1151 + 0x400;
    iVar15 = (int)((ulong)(lVar16 + (long)piVar17[8] * (long)psVar4[8] * 0x187e) >> 0xb);
    iVar21 = (int)((ulong)(lVar16 + (long)piVar17[0x18] * (long)psVar4[0x18] * -0x3b21) >> 0xb);
    local_e8[lVar18] = iVar15 + iVar2 * 4;
    local_88[lVar18] = iVar2 * 4 - iVar15;
    local_e8[lVar18 + 8] = iVar21 + iVar12 * 4;
    local_a8[lVar18] = iVar12 * 4 - iVar21;
    lVar18 = lVar1;
  } while ((int)lVar1 != 8);
  lVar18 = 0;
  lVar19 = lVar19 + 0x80;
  piVar17 = local_e8 + 4;
  do {
    iVar15 = piVar17[-3];
    iVar21 = piVar17[-1];
    iVar6 = piVar17[3];
    iVar7 = piVar17[1];
    iVar2 = piVar17[-4] + 0x10 + *piVar17;
    iVar13 = (piVar17[-4] + 0x10) - *piVar17;
    iVar10 = (iVar15 + iVar6) * -0x1ccd;
    iVar23 = (piVar17[2] + piVar17[-2]) * 0x1151;
    iVar8 = iVar23 + piVar17[-2] * 0x187e;
    iVar23 = iVar23 + piVar17[2] * -0x3b21;
    iVar22 = (iVar15 + iVar7 + iVar21 + iVar6) * 0x25a1;
    iVar11 = (iVar21 + iVar7) * -0x5203;
    iVar9 = iVar22 + (iVar21 + iVar6) * -0x3ec5;
    iVar22 = iVar22 + (iVar15 + iVar7) * -0xc7c;
    iVar12 = iVar8 + iVar2 * 0x2000;
    iVar15 = iVar10 + iVar15 * 0x300b + iVar22;
    puVar5 = (undefined1 *)(*(long *)(param_4 + lVar18) + (param_5 & 0xffffffff));
    iVar21 = iVar11 + iVar21 * 0x6254 + iVar9;
    *puVar5 = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar15 + iVar12) >> 0x12) & 0x3ff));
    iVar3 = iVar23 + iVar13 * 0x2000;
    iVar23 = iVar13 * 0x2000 - iVar23;
    puVar5[7] = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar12 - iVar15) >> 0x12) & 0x3ff));
    puVar5[1] = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar21 + iVar3) >> 0x12) & 0x3ff));
    iVar22 = iVar11 + iVar7 * 0x41b3 + iVar22;
    puVar5[6] = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar3 - iVar21) >> 0x12) & 0x3ff));
    iVar8 = iVar2 * 0x2000 - iVar8;
    puVar5[2] = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar22 + iVar23) >> 0x12) & 0x3ff));
    iVar9 = iVar10 + iVar6 * 0x98e + iVar9;
    puVar5[5] = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar23 - iVar22) >> 0x12) & 0x3ff));
    lVar18 = lVar18 + 8;
    puVar5[3] = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar9 + iVar8) >> 0x12) & 0x3ff));
    puVar5[4] = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar8 - iVar9) >> 0x12) & 0x3ff));
    piVar17 = piVar17 + 8;
  } while (lVar18 != 0x20);
  if (*(long *)(lVar14 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00eecb40(long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  short *psVar4;
  undefined1 *puVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  short sVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  long lVar21;
  long lVar22;
  int local_70 [6];
  undefined4 local_58 [6];
  undefined4 local_40 [6];
  long local_28;
  
  piVar20 = local_70;
  lVar17 = tpidr_el0;
  local_28 = *(long *)(lVar17 + 0x28);
  lVar21 = *(long *)(param_1 + 0x1b8);
  lVar19 = *(long *)(param_2 + 0x58);
  lVar18 = 0;
  do {
    piVar3 = (int *)(lVar19 + lVar18 * 4);
    psVar4 = (short *)(param_3 + lVar18 * 2);
    iVar13 = piVar3[0x10];
    sVar11 = psVar4[0x10];
    iVar14 = piVar3[8];
    sVar12 = psVar4[8];
    uVar6 = (long)(*piVar3 * (int)*psVar4) << 0xd | 0x400;
    lVar22 = uVar6 + (long)iVar13 * (long)sVar11 * 0x16a1;
    lVar1 = lVar18 + 1;
    local_70[lVar18] = (int)((ulong)((long)iVar14 * (long)sVar12 * 0x2731 + lVar22) >> 0xb);
    local_40[lVar18] = (int)((ulong)(lVar22 + (long)iVar14 * (long)sVar12 * -0x2731) >> 0xb);
    local_58[lVar18] = (int)(uVar6 + (long)iVar13 * (long)sVar11 * -0x2d42 >> 0xb);
    lVar18 = lVar1;
  } while ((int)lVar1 != 6);
  lVar18 = 0;
  lVar21 = lVar21 + 0x80;
  do {
    iVar8 = piVar20[1];
    iVar7 = piVar20[3];
    iVar9 = piVar20[5];
    iVar10 = piVar20[2];
    iVar13 = *piVar20 * 0x2000 + 0x20000;
    iVar15 = (iVar9 + iVar8) * 0xbb6;
    iVar16 = (iVar8 - iVar7) - iVar9;
    iVar14 = iVar13 + piVar20[4] * 0x16a1;
    iVar8 = iVar15 + (iVar7 + iVar8) * 0x2000;
    iVar2 = iVar14 + iVar10 * 0x2731;
    puVar5 = (undefined1 *)(*(long *)(param_4 + lVar18) + (param_5 & 0xffffffff));
    iVar13 = iVar13 + piVar20[4] * -0x2d42;
    *puVar5 = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar8 + iVar2) >> 0x12) & 0x3ff));
    puVar5[5] = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar2 - iVar8) >> 0x12) & 0x3ff));
    iVar15 = iVar15 + (iVar9 - iVar7) * 0x2000;
    puVar5[1] = *(undefined1 *)
                 (lVar21 + ((ulong)((uint)(iVar13 + iVar16 * 0x2000) >> 0x12) & 0x3ff));
    iVar14 = iVar14 + iVar10 * -0x2731;
    puVar5[4] = *(undefined1 *)
                 (lVar21 + ((ulong)((uint)(iVar13 + iVar16 * -0x2000) >> 0x12) & 0x3ff));
    lVar18 = lVar18 + 8;
    puVar5[2] = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar15 + iVar14) >> 0x12) & 0x3ff));
    piVar20 = piVar20 + 6;
    puVar5[3] = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar14 - iVar15) >> 0x12) & 0x3ff));
  } while (lVar18 != 0x18);
  if (*(long *)(lVar17 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00eeccf8(long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  short *psVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long local_58;
  long lStack_50;
  undefined4 local_48 [4];
  long alStack_38 [5];
  
  lVar3 = tpidr_el0;
  lVar5 = 0;
  alStack_38[4] = *(long *)(lVar3 + 0x28);
  lVar7 = *(long *)(param_1 + 0x1b8);
  plVar6 = alStack_38;
  puVar8 = (undefined8 *)(*(long *)(param_2 + 0x58) + 0x20);
  do {
    psVar1 = (short *)(param_3 + 0x10 + lVar5);
    iVar9 = (int)puVar8[-4] * (int)psVar1[-8];
    iVar10 = (int)((ulong)puVar8[-4] >> 0x20) * (int)psVar1[-7];
    iVar11 = (int)*puVar8 * (int)*psVar1;
    iVar12 = (int)((ulong)*puVar8 >> 0x20) * (int)psVar1[1];
    lVar5 = lVar5 + 4;
    plVar6[-3] = (long)iVar12 + (long)iVar10;
    plVar6[-4] = (long)iVar11 + (long)iVar9;
    plVar6[1] = (long)iVar10 - (long)iVar12;
    *plVar6 = (long)iVar9 - (long)iVar11;
    plVar6 = plVar6 + 2;
    puVar8 = puVar8 + 1;
  } while (lVar5 != 8);
  lVar5 = 0;
  plVar6 = &local_58;
  lVar7 = lVar7 + 0x80;
  do {
    lVar4 = plVar6[3];
    iVar9 = (int)*plVar6 + 4;
    iVar10 = iVar9 + (int)plVar6[2];
    iVar9 = iVar9 - (int)plVar6[2];
    iVar12 = ((int)lVar4 + (int)plVar6[1]) * 0x1151;
    iVar11 = iVar12 + (int)plVar6[1] * 0x187e;
    puVar2 = (undefined1 *)(*(long *)(param_4 + lVar5) + (param_5 & 0xffffffff));
    *puVar2 = *(undefined1 *)(lVar7 + ((ulong)((uint)(iVar11 + iVar10 * 0x2000) >> 0x10) & 0x3ff));
    iVar12 = iVar12 + (int)lVar4 * -0x3b21;
    puVar2[3] = *(undefined1 *)(lVar7 + ((ulong)((uint)(iVar10 * 0x2000 - iVar11) >> 0x10) & 0x3ff))
    ;
    puVar2[1] = *(undefined1 *)(lVar7 + ((ulong)((uint)(iVar12 + iVar9 * 0x2000) >> 0x10) & 0x3ff));
    lVar5 = lVar5 + 8;
    plVar6 = plVar6 + 4;
    puVar2[2] = *(undefined1 *)(lVar7 + ((ulong)((uint)(iVar9 * 0x2000 - iVar12) >> 0x10) & 0x3ff));
  } while (lVar5 != 0x10);
  if (*(long *)(lVar3 + 0x28) == alStack_38[4]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00eece44(long param_1,long param_2,short *param_3,long *param_4,uint param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x1b8) + 0x80;
  iVar2 = **(int **)(param_2 + 0x58) * (int)*param_3 + 4;
  iVar3 = (*(int **)(param_2 + 0x58))[1] * (int)param_3[1];
  lVar4 = *param_4;
  *(undefined1 *)(lVar4 + (ulong)param_5) =
       *(undefined1 *)(lVar1 + ((ulong)((uint)(iVar2 + iVar3) >> 3) & 0x3ff));
  ((undefined1 *)(lVar4 + (ulong)param_5))[1] =
       *(undefined1 *)(lVar1 + ((ulong)((uint)(iVar2 - iVar3) >> 3) & 0x3ff));
  return;
}




void FUN_00eece94(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
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
  long lVar16;
  long lVar17;
  int *piVar18;
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
  int iVar43;
  long lVar44;
  int iVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  int local_270 [16];
  undefined4 local_230 [8];
  undefined4 local_210 [8];
  undefined4 local_1f0 [8];
  undefined4 local_1d0 [8];
  undefined4 local_1b0 [8];
  undefined4 local_190 [8];
  undefined4 local_170 [8];
  undefined4 local_150 [8];
  undefined4 local_130 [8];
  undefined4 local_110 [8];
  undefined4 local_f0 [8];
  undefined4 local_d0 [8];
  undefined4 local_b0 [8];
  undefined4 local_90 [8];
  long local_70;
  
  lVar16 = tpidr_el0;
  local_70 = *(long *)(lVar16 + 0x28);
  lVar25 = *(long *)(param_1 + 0x1b8);
  lVar17 = *(long *)(param_2 + 0x58);
  lVar26 = 0;
  do {
    piVar18 = (int *)(lVar17 + lVar26 * 4);
    psVar4 = (short *)(param_3 + lVar26 * 2);
    lVar33 = (long)piVar18[0x20] * (long)psVar4[0x20];
    lVar35 = (long)piVar18[0x10] * (long)psVar4[0x10];
    lVar36 = (long)piVar18[0x30] * (long)psVar4[0x30];
    lVar31 = (long)piVar18[0x38] * (long)psVar4[0x38];
    lVar19 = (long)piVar18[8] * (long)psVar4[8];
    lVar21 = (long)piVar18[0x18] * (long)psVar4[0x18];
    uVar6 = (long)(*piVar18 * (int)*psVar4) << 0xd | 0x400;
    lVar29 = (lVar35 - lVar36) * 0x8d4;
    lVar23 = (long)piVar18[0x28] * (long)psVar4[0x28];
    lVar37 = (lVar35 - lVar36) * 0x2c63;
    lVar39 = (lVar21 + lVar19) * 0x2b4e;
    lVar46 = (lVar23 + lVar19) * 0x27e9;
    lVar38 = (lVar23 + lVar19) * 0x1555;
    lVar41 = (lVar23 + lVar21) * 0x470;
    lVar44 = (lVar23 - lVar21) * 0x2d09;
    lVar28 = lVar33 * 0x29cf + uVar6;
    lVar32 = uVar6 + lVar33 * -0x29cf;
    lVar30 = lVar33 * 0x1151 + uVar6;
    lVar34 = uVar6 + lVar33 * -0x1151;
    lVar27 = lVar37 + lVar36 * 0x5203;
    lVar48 = lVar29 + lVar35 * 0x1ccd;
    lVar37 = lVar37 + lVar35 * -0x133e;
    lVar29 = lVar29 + lVar36 * -0x1050;
    lVar33 = lVar27 + lVar28;
    lVar28 = lVar28 - lVar27;
    lVar27 = lVar48 + lVar30;
    lVar30 = lVar30 - lVar48;
    lVar35 = lVar37 + lVar34;
    lVar34 = lVar34 - lVar37;
    lVar37 = lVar29 + lVar32;
    lVar32 = lVar32 - lVar29;
    lVar48 = (lVar19 - lVar21) * 0xd23;
    lVar42 = (lVar31 + lVar21) * -0x1555;
    lVar47 = (lVar31 + lVar19) * 0x22fc;
    lVar22 = (lVar31 + lVar21) * -0x27e9;
    lVar29 = lVar39 + lVar19 * -0x492a + lVar46 + lVar47;
    lVar20 = (lVar19 - lVar31) * 0x1cb6;
    lVar36 = lVar48 + lVar19 * -0x3abe + lVar38 + lVar20;
    lVar39 = lVar39 + lVar21 * 0x24d + lVar41 + lVar42;
    lVar40 = (lVar31 + lVar23) * -0x2b4e;
    lVar24 = (lVar31 - lVar23) * 0xd23;
    lVar21 = lVar48 + lVar21 * 0x3f1a + lVar44 + lVar22;
    lVar48 = lVar41 + lVar23 * -0x2406 + lVar46 + lVar40;
    lVar40 = lVar42 + lVar31 * 0x2218 + lVar47 + lVar40;
    lVar20 = lVar22 + lVar31 * 0x6485 + lVar20 + lVar24;
    lVar24 = lVar44 + lVar23 * -0x1886 + lVar38 + lVar24;
    local_90[lVar26] = (int)((ulong)(lVar33 - lVar29) >> 0xb);
    local_110[lVar26] = (int)((ulong)(lVar32 - lVar20) >> 0xb);
    local_270[lVar26 + 8] = (int)((ulong)(lVar39 + lVar27) >> 0xb);
    local_1d0[lVar26] = (int)((ulong)(lVar24 + lVar34) >> 0xb);
    lVar19 = lVar26 + 1;
    local_b0[lVar26] = (int)((ulong)(lVar27 - lVar39) >> 0xb);
    local_d0[lVar26] = (int)((ulong)(lVar35 - lVar48) >> 0xb);
    local_f0[lVar26] = (int)((ulong)(lVar37 - lVar40) >> 0xb);
    local_130[lVar26] = (int)((ulong)(lVar34 - lVar24) >> 0xb);
    local_150[lVar26] = (int)((ulong)(lVar30 - lVar21) >> 0xb);
    local_270[lVar26] = (int)((ulong)(lVar29 + lVar33) >> 0xb);
    local_230[lVar26] = (int)((ulong)(lVar48 + lVar35) >> 0xb);
    local_210[lVar26] = (int)((ulong)(lVar40 + lVar37) >> 0xb);
    local_1f0[lVar26] = (int)((ulong)(lVar20 + lVar32) >> 0xb);
    local_1b0[lVar26] = (int)((ulong)(lVar21 + lVar30) >> 0xb);
    local_190[lVar26] = (int)((ulong)(lVar36 + lVar28) >> 0xb);
    local_170[lVar26] = (int)((ulong)(lVar28 - lVar36) >> 0xb);
    lVar26 = lVar19;
  } while ((int)lVar19 != 8);
  lVar26 = 0;
  lVar25 = lVar25 + 0x80;
  piVar18 = local_270 + 4;
  do {
    iVar7 = piVar18[-3];
    iVar8 = piVar18[-1];
    iVar9 = piVar18[3];
    iVar10 = piVar18[1];
    iVar1 = piVar18[-4] + 0x10 + *piVar18;
    iVar15 = (piVar18[-4] + 0x10) - *piVar18;
    iVar13 = (iVar7 + iVar9) * -0x1ccd;
    iVar45 = (piVar18[2] + piVar18[-2]) * 0x1151;
    iVar11 = iVar45 + piVar18[-2] * 0x187e;
    iVar45 = iVar45 + piVar18[2] * -0x3b21;
    iVar43 = (iVar7 + iVar10 + iVar8 + iVar9) * 0x25a1;
    iVar14 = (iVar8 + iVar10) * -0x5203;
    iVar12 = iVar43 + (iVar8 + iVar9) * -0x3ec5;
    iVar43 = iVar43 + (iVar7 + iVar10) * -0xc7c;
    iVar2 = iVar11 + iVar1 * 0x2000;
    iVar7 = iVar13 + iVar7 * 0x300b + iVar43;
    puVar5 = (undefined1 *)(*(long *)(param_4 + lVar26) + (ulong)param_5);
    iVar8 = iVar14 + iVar8 * 0x6254 + iVar12;
    *puVar5 = *(undefined1 *)(lVar25 + ((ulong)((uint)(iVar7 + iVar2) >> 0x12) & 0x3ff));
    iVar3 = iVar45 + iVar15 * 0x2000;
    iVar45 = iVar15 * 0x2000 - iVar45;
    puVar5[7] = *(undefined1 *)(lVar25 + ((ulong)((uint)(iVar2 - iVar7) >> 0x12) & 0x3ff));
    puVar5[1] = *(undefined1 *)(lVar25 + ((ulong)((uint)(iVar8 + iVar3) >> 0x12) & 0x3ff));
    iVar43 = iVar14 + iVar10 * 0x41b3 + iVar43;
    puVar5[6] = *(undefined1 *)(lVar25 + ((ulong)((uint)(iVar3 - iVar8) >> 0x12) & 0x3ff));
    iVar11 = iVar1 * 0x2000 - iVar11;
    puVar5[2] = *(undefined1 *)(lVar25 + ((ulong)((uint)(iVar43 + iVar45) >> 0x12) & 0x3ff));
    iVar12 = iVar13 + iVar9 * 0x98e + iVar12;
    puVar5[5] = *(undefined1 *)(lVar25 + ((ulong)((uint)(iVar45 - iVar43) >> 0x12) & 0x3ff));
    lVar26 = lVar26 + 8;
    puVar5[3] = *(undefined1 *)(lVar25 + ((ulong)((uint)(iVar12 + iVar11) >> 0x12) & 0x3ff));
    puVar5[4] = *(undefined1 *)(lVar25 + ((ulong)((uint)(iVar11 - iVar12) >> 0x12) & 0x3ff));
    piVar18 = piVar18 + 8;
  } while (lVar26 != 0x80);
  if (*(long *)(lVar16 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

