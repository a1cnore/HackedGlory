// functions/019aa — 34 functions
#include "libGameKindred.h"




void FUN_019aa098(long param_1)

{
  byte *pbVar1;
  long *plVar2;
  long lVar3;
  byte *pbVar4;
  long lVar5;
  uint uVar6;
  
  lVar3 = 0;
  uVar6 = 0x10;
  pbVar4 = (byte *)(param_1 + -1);
  do {
    pbVar1 = (byte *)(param_1 + -0x20 + lVar3);
    lVar3 = lVar3 + 1;
    uVar6 = uVar6 + *pbVar4 + (uint)*pbVar1;
    pbVar4 = pbVar4 + 0x20;
  } while (lVar3 != 0x10);
  lVar3 = 0;
  lVar5 = ((ulong)(uVar6 >> 5) & 0xff) * 0x101010101010101;
  do {
    plVar2 = (long *)(param_1 + lVar3);
    lVar3 = lVar3 + 0x20;
    *plVar2 = lVar5;
    plVar2[1] = lVar5;
  } while (lVar3 != 0x200);
  return;
}




void FUN_019aa0ec(long param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  bVar1 = *(byte *)(param_1 + -0x21);
  iVar3 = 0;
  lVar4 = param_1 + -0x20;
  do {
    bVar2 = *(byte *)(param_1 + -1);
    lVar5 = 0;
    do {
      *(undefined *)(param_1 + lVar5) =
           (&DAT_01e1d261)[(ulong)*(byte *)(lVar4 + lVar5) + ((ulong)bVar2 - (ulong)bVar1)];
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x10);
    iVar3 = iVar3 + 1;
    param_1 = param_1 + 0x20;
  } while (iVar3 != 0x10);
  return;
}




void FUN_019aa140(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0;
  do {
    uVar2 = *(undefined8 *)(param_1 + -0x20);
    ((undefined8 *)(param_1 + lVar1))[1] = *(undefined8 *)(param_1 + -0x18);
    *(undefined8 *)(param_1 + lVar1) = uVar2;
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x200);
  return;
}




void FUN_019aa160(long *param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = 0x11;
  do {
    uVar1 = uVar1 - 1;
    lVar2 = (ulong)*(byte *)((long)param_1 + -1) * 0x101010101010101;
    *param_1 = lVar2;
    param_1[1] = lVar2;
    param_1 = param_1 + 4;
  } while (1 < uVar1);
  return;
}




void FUN_019aa184(long param_1)

{
  byte *pbVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  uVar3 = 8;
  lVar5 = -1;
  do {
    pbVar1 = (byte *)(param_1 + lVar5);
    lVar5 = lVar5 + 0x20;
    uVar3 = uVar3 + *pbVar1;
  } while (lVar5 != 0x1ff);
  lVar5 = 0;
  lVar4 = ((ulong)(uVar3 >> 4) & 0xff) * 0x101010101010101;
  do {
    plVar2 = (long *)(param_1 + lVar5);
    lVar5 = lVar5 + 0x20;
    *plVar2 = lVar4;
    plVar2[1] = lVar4;
  } while (lVar5 != 0x200);
  return;
}




void FUN_019aa1c8(long param_1)

{
  byte *pbVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = 0;
  uVar3 = 8;
  do {
    pbVar1 = (byte *)(param_1 + -0x20 + lVar5);
    lVar5 = lVar5 + 1;
    uVar3 = uVar3 + *pbVar1;
  } while (lVar5 != 0x10);
  lVar5 = 0;
  lVar4 = ((ulong)(uVar3 >> 4) & 0xff) * 0x101010101010101;
  do {
    plVar2 = (long *)(param_1 + lVar5);
    lVar5 = lVar5 + 0x20;
    *plVar2 = lVar4;
    plVar2[1] = lVar4;
  } while (lVar5 != 0x200);
  return;
}




void FUN_019aa210(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    puVar1 = (undefined8 *)(param_1 + lVar2);
    lVar2 = lVar2 + 0x20;
    *puVar1 = 0x8080808080808080;
    puVar1[1] = 0x8080808080808080;
  } while (lVar2 != 0x200);
  return;
}




void FUN_019aa230(long param_1)

{
  byte *pbVar1;
  long lVar2;
  byte *pbVar3;
  uint uVar4;
  
  lVar2 = 0;
  uVar4 = 8;
  pbVar3 = (byte *)(param_1 + -1);
  do {
    pbVar1 = (byte *)(param_1 + -0x20 + lVar2);
    lVar2 = lVar2 + 1;
    uVar4 = uVar4 + *pbVar1 + (uint)*pbVar3;
    pbVar3 = pbVar3 + 0x20;
  } while (lVar2 != 8);
  lVar2 = 0;
  do {
    *(ulong *)(param_1 + lVar2) = ((ulong)(uVar4 >> 4) & 0xff) * 0x101010101010101;
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x100);
  return;
}




void FUN_019aa280(long param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  bVar1 = *(byte *)(param_1 + -0x21);
  iVar3 = 0;
  lVar4 = param_1 + -0x20;
  do {
    bVar2 = *(byte *)(param_1 + -1);
    lVar5 = 0;
    do {
      *(undefined *)(param_1 + lVar5) =
           (&DAT_01e1d261)[(ulong)*(byte *)(lVar4 + lVar5) + ((ulong)bVar2 - (ulong)bVar1)];
      lVar5 = lVar5 + 1;
    } while (lVar5 != 8);
    iVar3 = iVar3 + 1;
    param_1 = param_1 + 0x20;
  } while (iVar3 != 8);
  return;
}




void FUN_019aa2d4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + -0x20);
  lVar2 = 0;
  do {
    *(undefined8 *)(param_1 + lVar2) = uVar1;
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x100);
  return;
}




void FUN_019aa2f0(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    plVar1 = (long *)(param_1 + lVar2);
    lVar2 = lVar2 + 0x20;
    *plVar1 = (ulong)*(byte *)((long)plVar1 + -1) * 0x101010101010101;
  } while ((int)lVar2 != 0x100);
  return;
}




void FUN_019aa318(long param_1)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = 4;
  lVar3 = -1;
  do {
    pbVar1 = (byte *)(param_1 + lVar3);
    lVar3 = lVar3 + 0x20;
    uVar2 = uVar2 + *pbVar1;
  } while (lVar3 != 0xff);
  lVar3 = 0;
  do {
    *(ulong *)(param_1 + lVar3) = ((ulong)(uVar2 >> 3) & 0xff) * 0x101010101010101;
    lVar3 = lVar3 + 0x20;
  } while (lVar3 != 0x100);
  return;
}




void FUN_019aa358(long param_1)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = 0;
  uVar2 = 4;
  do {
    pbVar1 = (byte *)(param_1 + -0x20 + lVar3);
    lVar3 = lVar3 + 1;
    uVar2 = uVar2 + *pbVar1;
  } while (lVar3 != 8);
  lVar3 = 0;
  do {
    *(ulong *)(param_1 + lVar3) = ((ulong)(uVar2 >> 3) & 0xff) * 0x101010101010101;
    lVar3 = lVar3 + 0x20;
  } while (lVar3 != 0x100);
  return;
}




void FUN_019aa39c(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + lVar1) = 0x8080808080808080;
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x100);
  return;
}




void FUN_019aa3b8(void)

{
  int iVar1;
  
  if (PTR_LOOP_02bf7458 != PTR_FUN_02bf7450) {
    FUN_019ab52c();
    DAT_0321a790 = FUN_019aa530;
    DAT_0321a780 = FUN_019aa628;
    DAT_0321a788 = FUN_019aa674;
    DAT_0321a7d0 = FUN_019aa6bc;
    DAT_0321a7a0 = FUN_019aa710;
    DAT_0321a7b8 = FUN_019aa7a8;
    DAT_0321a7c8 = FUN_019aaa38;
    DAT_0321a7a8 = FUN_019aaa50;
    DAT_0321a7b0 = FUN_019aaa6c;
    DAT_0321a7e0 = FUN_019aaae0;
    DAT_0321a758 = FUN_019aab50;
    DAT_0321a778 = FUN_019aabd0;
    DAT_0321a798 = FUN_019aac40;
    DAT_0321a768 = FUN_019aacbc;
    DAT_0321a770 = FUN_019aad30;
    DAT_0321a7c0 = FUN_019aadf4;
    DAT_0321a7d8 = FUN_019aaeb0;
    DAT_0321a760 = FUN_019aaf10;
    if ((PTR_FUN_02bf7450 != (undefined *)0x0) &&
       (iVar1 = (*(code *)PTR_FUN_02bf7450)(4), iVar1 != 0)) {
      FUN_019ab530();
    }
    PTR_LOOP_02bf7458 = PTR_FUN_02bf7450;
  }
  return;
}




void FUN_019aa530(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  short sVar9;
  int iVar7;
  short sVar10;
  undefined8 uVar8;
  short sVar12;
  int iVar11;
  int iVar13;
  int iVar14;
  short sVar16;
  short sVar17;
  undefined8 uVar15;
  short sVar18;
  short sVar21;
  int iVar19;
  short sVar22;
  undefined8 uVar20;
  short sVar24;
  int iVar23;
  int iVar25;
  int iVar26;
  short sVar28;
  short sVar29;
  undefined8 uVar27;
  short sVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48 [7];
  
  lVar3 = tpidr_el0;
  lVar4 = 0;
  local_48[6] = *(long *)(lVar3 + 0x28);
  plVar6 = local_48 + 2;
  do {
    puVar1 = (undefined8 *)(param_1 + 0x18 + lVar4);
    uVar27 = puVar1[-1];
    uVar8 = *puVar1;
    uVar15 = puVar1[-3];
    uVar20 = puVar1[-2];
    lVar4 = lVar4 + 8;
    sVar9 = (short)((ulong)uVar8 >> 0x10);
    sVar10 = (short)((ulong)uVar8 >> 0x20);
    sVar12 = (short)((ulong)uVar8 >> 0x30);
    sVar16 = (short)((ulong)uVar15 >> 0x10);
    sVar17 = (short)((ulong)uVar15 >> 0x20);
    sVar18 = (short)((ulong)uVar15 >> 0x30);
    iVar31 = (int)(short)uVar8 + (int)(short)uVar15;
    iVar32 = (int)sVar9 + (int)sVar16;
    iVar33 = (int)sVar10 + (int)sVar17;
    iVar34 = (int)sVar12 + (int)sVar18;
    sVar28 = (short)((ulong)uVar27 >> 0x10);
    sVar29 = (short)((ulong)uVar27 >> 0x20);
    sVar30 = (short)((ulong)uVar27 >> 0x30);
    sVar21 = (short)((ulong)uVar20 >> 0x10);
    sVar22 = (short)((ulong)uVar20 >> 0x20);
    sVar24 = (short)((ulong)uVar20 >> 0x30);
    iVar35 = (int)(short)uVar27 + (int)(short)uVar20;
    iVar36 = (int)sVar28 + (int)sVar21;
    iVar37 = (int)sVar29 + (int)sVar22;
    iVar38 = (int)sVar30 + (int)sVar24;
    iVar19 = (int)(short)uVar20 - (int)(short)uVar27;
    iVar23 = (int)sVar21 - (int)sVar28;
    iVar25 = (int)sVar22 - (int)sVar29;
    iVar26 = (int)sVar24 - (int)sVar30;
    iVar7 = (int)(short)uVar15 - (int)(short)uVar8;
    iVar11 = (int)sVar16 - (int)sVar9;
    iVar13 = (int)sVar17 - (int)sVar10;
    iVar14 = (int)sVar18 - (int)sVar12;
    plVar6[-1] = CONCAT44(iVar26 + iVar14,iVar25 + iVar13);
    plVar6[-2] = CONCAT44(iVar23 + iVar11,iVar19 + iVar7);
    plVar6[1] = CONCAT44(iVar34 - iVar38,iVar33 - iVar37);
    *plVar6 = CONCAT44(iVar32 - iVar36,iVar31 - iVar35);
    plVar6[-3] = CONCAT44(iVar38 + iVar34,iVar37 + iVar33);
    plVar6[-4] = CONCAT44(iVar36 + iVar32,iVar35 + iVar31);
    plVar6[3] = CONCAT44(iVar14 - iVar26,iVar13 - iVar25);
    plVar6[2] = CONCAT44(iVar11 - iVar23,iVar7 - iVar19);
    plVar6 = plVar6 + 2;
  } while (lVar4 != 8);
  lVar4 = 0;
  piVar5 = (int *)&uStack_50;
  do {
    puVar2 = (undefined2 *)(param_2 + lVar4);
    lVar4 = lVar4 + 0x80;
    iVar7 = *piVar5 + piVar5[-1];
    iVar13 = piVar5[-1] - *piVar5;
    iVar11 = piVar5[-2] + 3 + piVar5[1];
    iVar14 = (piVar5[-2] + 3) - piVar5[1];
    piVar5 = piVar5 + 4;
    *puVar2 = (short)((uint)(iVar7 + iVar11) >> 3);
    puVar2[0x10] = (short)((uint)(iVar13 + iVar14) >> 3);
    puVar2[0x20] = (short)((uint)(iVar11 - iVar7) >> 3);
    puVar2[0x30] = (short)((uint)(iVar14 - iVar13) >> 3);
  } while (lVar4 != 0x200);
  if (*(long *)(lVar3 + 0x28) == local_48[6]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_019aa628(long param_1,long param_2,int param_3)

{
  FUN_019aaf60();
  if (param_3 != 0) {
    FUN_019aaf60(param_1 + 0x20,param_2 + 4);
    return;
  }
  return;
}




void FUN_019aa674(long param_1,long param_2)

{
  (*DAT_0321a780)(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x019aa6b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0321a780)(param_1 + 0x40,param_2 + 0x80,1);
  return;
}




void FUN_019aa6bc(short *param_1,long param_2)

{
  short sVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  sVar1 = *param_1;
  lVar2 = 0;
  do {
    lVar3 = 0;
    do {
      uVar4 = (sVar1 + 4 >> 3) + (uint)*(byte *)(param_2 + lVar3);
      if (0xff < uVar4) {
        uVar4 = ((int)uVar4 >> 0x1f & 0xffffff01U) + 0xff;
      }
      *(char *)(param_2 + lVar3) = (char)uVar4;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 4);
    lVar2 = lVar2 + 1;
    param_2 = param_2 + 0x20;
  } while (lVar2 != 4);
  return;
}




void FUN_019aa710(short *param_1,long param_2)

{
  if (*param_1 != 0) {
    (*DAT_0321a7d0)(param_1,param_2);
  }
  if (param_1[0x10] != 0) {
    (*DAT_0321a7d0)(param_1 + 0x10,param_2 + 4);
  }
  if (param_1[0x20] != 0) {
    (*DAT_0321a7d0)(param_1 + 0x20,param_2 + 0x80);
  }
  if (param_1[0x30] != 0) {
                    /* WARNING: Could not recover jumptable at 0x019aa798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_0321a7d0)(param_1 + 0x30,param_2 + 0x84);
    return;
  }
  return;
}




void FUN_019aa7a8(short *param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  
  sVar7 = param_1[4];
  iVar3 = *param_1 + 4;
  iVar1 = sVar7 * 0x14e7b >> 0x10;
  iVar4 = iVar3 + iVar1;
  iVar2 = param_1[1] * 0x14e7b >> 0x10;
  uVar9 = (uint)*param_2 + (iVar4 + iVar2 >> 3);
  iVar5 = param_1[1] * 0x8a8c >> 0x10;
  if (0xff < uVar9) {
    uVar9 = ((int)uVar9 >> 0x1f & 0xffffff01U) + 0xff;
  }
  *param_2 = (byte)uVar9;
  uVar9 = (uint)param_2[1] + (iVar4 + iVar5 >> 3);
  if (0xff < uVar9) {
    uVar9 = ((int)uVar9 >> 0x1f & 0xffffff01U) + 0xff;
  }
  uVar8 = (uint)param_2[2] + (iVar4 - iVar5 >> 3);
  param_2[1] = (byte)uVar9;
  if (0xff < uVar8) {
    uVar8 = ((int)uVar8 >> 0x1f & 0xffffff01U) + 0xff;
  }
  iVar6 = sVar7 * 0x8a8c >> 0x10;
  param_2[2] = (byte)uVar8;
  uVar9 = (uint)param_2[3] + (iVar4 - iVar2 >> 3);
  if (0xff < uVar9) {
    uVar9 = ((int)uVar9 >> 0x1f & 0xffffff01U) + 0xff;
  }
  iVar4 = iVar6 + iVar3;
  param_2[3] = (byte)uVar9;
  uVar9 = (uint)param_2[0x20] + (iVar4 + iVar2 >> 3);
  if (0xff < uVar9) {
    uVar9 = ((int)uVar9 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[0x20] = (byte)uVar9;
  uVar9 = (uint)param_2[0x21] + (iVar4 + iVar5 >> 3);
  if (0xff < uVar9) {
    uVar9 = ((int)uVar9 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[0x21] = (byte)uVar9;
  uVar9 = (uint)param_2[0x22] + (iVar4 - iVar5 >> 3);
  if (0xff < uVar9) {
    uVar9 = ((int)uVar9 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[0x22] = (byte)uVar9;
  uVar9 = (uint)param_2[0x23] + (iVar4 - iVar2 >> 3);
  if (0xff < uVar9) {
    uVar9 = ((int)uVar9 >> 0x1f & 0xffffff01U) + 0xff;
  }
  iVar6 = iVar3 - iVar6;
  param_2[0x23] = (byte)uVar9;
  uVar9 = (uint)param_2[0x40] + (iVar6 + iVar2 >> 3);
  if (0xff < uVar9) {
    uVar9 = ((int)uVar9 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[0x40] = (byte)uVar9;
  uVar9 = (uint)param_2[0x41] + (iVar6 + iVar5 >> 3);
  if (0xff < uVar9) {
    uVar9 = ((int)uVar9 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[0x41] = (byte)uVar9;
  uVar9 = (uint)param_2[0x42] + (iVar6 - iVar5 >> 3);
  if (0xff < uVar9) {
    uVar9 = ((int)uVar9 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[0x42] = (byte)uVar9;
  uVar9 = (uint)param_2[0x43] + (iVar6 - iVar2 >> 3);
  if (0xff < uVar9) {
    uVar9 = ((int)uVar9 >> 0x1f & 0xffffff01U) + 0xff;
  }
  iVar3 = iVar3 - iVar1;
  param_2[0x43] = (byte)uVar9;
  uVar9 = (uint)param_2[0x60] + (iVar3 + iVar2 >> 3);
  if (0xff < uVar9) {
    uVar9 = ((int)uVar9 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[0x60] = (byte)uVar9;
  uVar9 = (uint)param_2[0x61] + (iVar3 + iVar5 >> 3);
  if (0xff < uVar9) {
    uVar9 = ((int)uVar9 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[0x61] = (byte)uVar9;
  uVar9 = (uint)param_2[0x62] + (iVar3 - iVar5 >> 3);
  if (0xff < uVar9) {
    uVar9 = ((int)uVar9 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[0x62] = (byte)uVar9;
  uVar9 = (uint)param_2[99] + (iVar3 - iVar2 >> 3);
  if (0xff < uVar9) {
    uVar9 = ((int)uVar9 >> 0x1f & 0xffffff01U) + 0xff;
  }
  param_2[99] = (byte)uVar9;
  return;
}




void FUN_019aaa38(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_019ab110(param_1,param_2,1,0x10,param_3,param_4,param_5);
  return;
}




void FUN_019aaa50(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_019ab110(param_1,1,param_2,0x10,param_3,param_4,param_5);
  return;
}




void FUN_019aaa6c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  FUN_019ab110(param_1,param_3,1,8,param_4,param_5,param_6);
  FUN_019ab110(param_2,param_3,1,8,param_4,param_5,param_6);
  return;
}




void FUN_019aaae0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  FUN_019ab110(param_1,1,param_3,8,param_4,param_5,param_6);
  FUN_019ab110(param_2,1,param_3 & 0xffffffff,8,param_4,param_5,param_6);
  return;
}




void FUN_019aab50(long param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  
  param_1 = param_1 + (param_2 << 2);
  uVar1 = 4;
  do {
    FUN_019ab33c(param_1,param_2,1,0x10,param_3,param_4,param_5);
    uVar1 = uVar1 - 1;
    param_1 = param_1 + (param_2 << 2);
  } while (1 < uVar1);
  return;
}




void FUN_019aabd0(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  
  uVar1 = 4;
  do {
    param_1 = param_1 + 4;
    FUN_019ab33c(param_1,1,param_2,0x10,param_3,param_4,param_5);
    uVar1 = uVar1 - 1;
  } while (1 < uVar1);
  return;
}




void FUN_019aac40(long param_1,long param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  FUN_019ab33c(param_1 + (param_3 << 2),param_3,1,8,param_4,param_5,param_6);
  FUN_019ab33c(param_2 + (param_3 << 2),param_3,1,8,param_4,param_5,param_6);
  return;
}




void FUN_019aacbc(long param_1,long param_2,ulong param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  FUN_019ab33c(param_1 + 4,1,param_3,8,param_4,param_5,param_6);
  FUN_019ab33c(param_2 + 4,1,param_3 & 0xffffffff,8,param_4,param_5,param_6);
  return;
}




void FUN_019aad30(long param_1,int param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = 0;
  do {
    bVar2 = *(byte *)((param_1 - param_2) + lVar6);
    bVar3 = *(byte *)(param_1 + lVar6);
    lVar5 = (ulong)*(byte *)(param_1 + (long)param_2 * -2 + lVar6) -
            (ulong)*(byte *)(param_1 + param_2 + lVar6);
    if ((int)((uint)(byte)(&DAT_01e1d560)[lVar5] +
             (uint)(byte)(&DAT_01e1d560)[(ulong)bVar2 - (ulong)bVar3] * 4) <=
        (int)(param_3 << 1 | 1U)) {
      iVar1 = ((uint)bVar3 - (uint)bVar2) * 3 + (int)(char)(&DAT_01e1cc84)[lVar5];
      cVar4 = (&DAT_01e1d0f1)[iVar1 + 4 >> 3];
      *(undefined *)((param_1 - param_2) + lVar6) =
           (&DAT_01e1d261)[(long)(char)(&DAT_01e1d0f1)[iVar1 + 3 >> 3] + (ulong)bVar2];
      *(undefined *)(param_1 + lVar6) = (&DAT_01e1d261)[(ulong)bVar3 - (long)cVar4];
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x10);
  return;
}




void FUN_019aadf4(byte *param_1,int param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  long lVar5;
  
  lVar5 = 0x10;
  do {
    bVar4 = param_1[-1];
    bVar2 = *param_1;
    if ((int)((uint)(byte)(&DAT_01e1d560)[(ulong)param_1[-2] - (ulong)param_1[1]] +
             (uint)(byte)(&DAT_01e1d560)[(ulong)bVar4 - (ulong)bVar2] * 4) <=
        (int)(param_3 << 1 | 1U)) {
      iVar1 = ((uint)bVar2 - (uint)bVar4) * 3 +
              (int)(char)(&DAT_01e1cc84)[(ulong)param_1[-2] - (ulong)param_1[1]];
      cVar3 = (&DAT_01e1d0f1)[iVar1 + 4 >> 3];
      param_1[-1] = (&DAT_01e1d261)[(long)(char)(&DAT_01e1d0f1)[iVar1 + 3 >> 3] + (ulong)bVar4];
      *param_1 = (&DAT_01e1d261)[(ulong)bVar2 - (long)cVar3];
    }
    lVar5 = lVar5 + -1;
    param_1 = param_1 + param_2;
  } while (lVar5 != 0);
  return;
}




void FUN_019aaeb0(long param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  
  param_1 = param_1 + (param_2 << 2);
  uVar1 = 4;
  do {
    FUN_019aad30(param_1,param_2,param_3);
    uVar1 = uVar1 - 1;
    param_1 = param_1 + (param_2 << 2);
  } while (1 < uVar1);
  return;
}




void FUN_019aaf10(long param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = 4;
  do {
    param_1 = param_1 + 4;
    FUN_019aadf4(param_1,param_2,param_3);
    uVar1 = uVar1 - 1;
  } while (1 < uVar1);
  return;
}




void FUN_019aaf60(long param_1,byte *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  short sVar8;
  int iVar6;
  short sVar9;
  undefined8 uVar7;
  short sVar11;
  int iVar10;
  int iVar12;
  int iVar13;
  short sVar15;
  short sVar16;
  undefined8 uVar14;
  short sVar18;
  int iVar17;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined8 uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  undefined8 uVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int local_58 [16];
  long local_18;
  
  lVar2 = tpidr_el0;
  puVar4 = (undefined8 *)(param_1 + 0x10);
  local_18 = *(long *)(lVar2 + 0x28);
  lVar3 = 0;
  do {
    uVar22 = puVar4[-1];
    uVar7 = *puVar4;
    uVar14 = puVar4[-2];
    puVar4 = puVar4 + 1;
    uVar30 = *puVar4;
    lVar1 = lVar3 + 0x40;
    sVar8 = (short)((ulong)uVar7 >> 0x10);
    sVar9 = (short)((ulong)uVar7 >> 0x20);
    sVar11 = (short)((ulong)uVar7 >> 0x30);
    sVar15 = (short)((ulong)uVar14 >> 0x10);
    sVar16 = (short)((ulong)uVar14 >> 0x20);
    sVar18 = (short)((ulong)uVar14 >> 0x30);
    iVar31 = (int)(short)uVar7 + (int)(short)uVar14;
    iVar32 = (int)sVar8 + (int)sVar15;
    iVar33 = (int)sVar9 + (int)sVar16;
    iVar34 = (int)sVar11 + (int)sVar18;
    iVar6 = (int)(short)uVar14 - (int)(short)uVar7;
    iVar10 = (int)sVar15 - (int)sVar8;
    iVar12 = (int)sVar16 - (int)sVar9;
    iVar13 = (int)sVar18 - (int)sVar11;
    iVar17 = (int)(short)((ulong)uVar22 >> 0x10);
    iVar19 = (int)(short)((ulong)uVar22 >> 0x20);
    iVar20 = (int)(short)((ulong)uVar22 >> 0x30);
    iVar23 = (int)(short)((ulong)uVar30 >> 0x10);
    iVar25 = (int)(short)((ulong)uVar30 >> 0x20);
    iVar27 = (int)(short)((ulong)uVar30 >> 0x30);
    iVar21 = ((short)uVar30 * 0x8a8c >> 0x10) + ((short)uVar22 * 0x14e7b >> 0x10);
    iVar24 = (iVar23 * 0x8a8c >> 0x10) + (iVar17 * 0x14e7b >> 0x10);
    iVar26 = (iVar25 * 0x8a8c >> 0x10) + (iVar19 * 0x14e7b >> 0x10);
    iVar28 = (iVar27 * 0x8a8c >> 0x10) + (iVar20 * 0x14e7b >> 0x10);
    iVar29 = ((short)uVar22 * 0x8a8c >> 0x10) - ((short)uVar30 * 0x14e7b >> 0x10);
    iVar17 = (iVar17 * 0x8a8c >> 0x10) - (iVar23 * 0x14e7b >> 0x10);
    iVar19 = (iVar19 * 0x8a8c >> 0x10) - (iVar25 * 0x14e7b >> 0x10);
    iVar20 = (iVar20 * 0x8a8c >> 0x10) - (iVar27 * 0x14e7b >> 0x10);
    *(int *)((long)local_58 + lVar3) = iVar21 + iVar31;
    *(int *)((long)local_58 + lVar3 + 4) = iVar29 + iVar6;
    *(int *)((long)local_58 + lVar3 + 8) = iVar6 - iVar29;
    *(int *)((long)local_58 + lVar3 + 0xc) = iVar31 - iVar21;
    *(int *)((long)local_58 + lVar3 + 0x10) = iVar24 + iVar32;
    *(int *)((long)local_58 + lVar3 + 0x14) = iVar17 + iVar10;
    *(int *)((long)local_58 + lVar3 + 0x18) = iVar10 - iVar17;
    *(int *)((long)local_58 + lVar3 + 0x1c) = iVar32 - iVar24;
    *(int *)((long)local_58 + lVar3 + 0x20) = iVar26 + iVar33;
    *(int *)((long)local_58 + lVar3 + 0x24) = iVar19 + iVar12;
    *(int *)((long)local_58 + lVar3 + 0x28) = iVar12 - iVar19;
    *(int *)((long)local_58 + lVar3 + 0x2c) = iVar33 - iVar26;
    *(int *)((long)local_58 + lVar3 + 0x30) = iVar28 + iVar34;
    *(int *)((long)local_58 + lVar3 + 0x34) = iVar20 + iVar13;
    *(int *)((long)local_58 + lVar3 + 0x38) = iVar13 - iVar20;
    *(int *)((long)local_58 + lVar3 + 0x3c) = iVar34 - iVar28;
    lVar3 = lVar1;
  } while (lVar1 != 0x40);
  lVar3 = 0;
  do {
    iVar12 = *(int *)((long)local_58 + lVar3 + 0x20);
    iVar13 = *(int *)((long)local_58 + lVar3 + 0x30);
    iVar17 = *(int *)((long)local_58 + lVar3 + 0x10);
    iVar6 = *(int *)((long)local_58 + lVar3) + 4;
    iVar10 = iVar6 + iVar12;
    iVar6 = iVar6 - iVar12;
    iVar12 = (iVar13 * 0x8a8c >> 0x10) + (iVar17 * 0x14e7b >> 0x10);
    uVar5 = (uint)*param_2 + (iVar12 + iVar10 >> 3);
    iVar13 = (iVar17 * 0x8a8c >> 0x10) - (iVar13 * 0x14e7b >> 0x10);
    if (0xff < uVar5) {
      uVar5 = ((int)uVar5 >> 0x1f & 0xffffff01U) + 0xff;
    }
    *param_2 = (byte)uVar5;
    uVar5 = (uint)param_2[1] + (iVar13 + iVar6 >> 3);
    if (0xff < uVar5) {
      uVar5 = ((int)uVar5 >> 0x1f & 0xffffff01U) + 0xff;
    }
    param_2[1] = (byte)uVar5;
    uVar5 = (uint)param_2[2] + (iVar6 - iVar13 >> 3);
    if (0xff < uVar5) {
      uVar5 = ((int)uVar5 >> 0x1f & 0xffffff01U) + 0xff;
    }
    param_2[2] = (byte)uVar5;
    uVar5 = (uint)param_2[3] + (iVar10 - iVar12 >> 3);
    if (0xff < uVar5) {
      uVar5 = ((int)uVar5 >> 0x1f & 0xffffff01U) + 0xff;
    }
    lVar3 = lVar3 + 4;
    param_2[3] = (byte)uVar5;
    param_2 = param_2 + 0x20;
  } while ((int)lVar3 != 0x10);
  if (*(long *)(lVar2 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

