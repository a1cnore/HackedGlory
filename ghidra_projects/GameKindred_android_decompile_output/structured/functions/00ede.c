// functions/00ede — 20 functions
#include "libGameKindred.h"




void FUN_00ede030(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x240);
  if (*(int *)(param_1 + 0x6c) != 0) {
    (**(code **)(*(long *)(param_1 + 0x290) + 0x10))();
  }
  *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1;
  return;
}




void FUN_00ede06c(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  puVar4 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x58);
  *(undefined8 **)(param_1 + 0x280) = puVar4;
  *(undefined4 *)(puVar4 + 2) = 0;
  *puVar4 = FUN_00ede210;
  iVar3 = *(int *)(param_1 + 0x90) * *(int *)(param_1 + 0x88);
  *(int *)((long)puVar4 + 0x4c) = iVar3;
  if (*(int *)(param_1 + 0x1a4) == 2) {
    puVar4[1] = FUN_00ede224;
    puVar4[3] = FUN_00ede354;
    uVar5 = (**(code **)(*(long *)(param_1 + 8) + 8))(param_1,1,iVar3);
    puVar4[8] = uVar5;
    puVar4 = *(undefined8 **)(param_1 + 0x280);
  }
  else {
    puVar4[1] = FUN_00ede564;
    puVar4[3] = FUN_00ede5b4;
    puVar4[8] = 0;
  }
  uVar5 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x400);
  puVar4[4] = uVar5;
  uVar5 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x400);
  puVar4[5] = uVar5;
  uVar5 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x800);
  puVar4[6] = uVar5;
  lVar6 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x800);
  lVar1 = puVar4[4];
  lVar2 = puVar4[5];
  lVar8 = puVar4[6];
  lVar7 = 0;
  lVar9 = -0xe25100;
  lVar10 = -0xb2f480;
  lVar11 = 0x2c8d00;
  lVar12 = 0x5b6900;
  puVar4[7] = lVar6;
  do {
    *(int *)(lVar1 + lVar7 * 4) = (int)((ulong)lVar10 >> 0x10);
    *(int *)(lVar2 + lVar7 * 4) = (int)((ulong)lVar9 >> 0x10);
    *(long *)(lVar8 + lVar7 * 8) = lVar12;
    *(long *)(lVar6 + lVar7 * 8) = lVar11;
    lVar7 = lVar7 + 1;
    lVar11 = lVar11 + -0x581a;
    lVar12 = lVar12 + -0xb6d2;
    lVar9 = lVar9 + 0x1c5a2;
    lVar10 = lVar10 + 0x166e9;
  } while (lVar7 != 0x100);
  return;
}




void FUN_00ede210(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x280);
  *(undefined4 *)(lVar1 + 0x48) = 0;
  *(undefined4 *)(lVar1 + 0x50) = *(undefined4 *)(param_1 + 0x8c);
  return;
}




void FUN_00ede224(long param_1,undefined8 param_2,int *param_3,undefined8 param_4,long param_5,
                 uint *param_6,int param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  lVar6 = *(long *)(param_1 + 0x280);
  if (*(int *)(lVar6 + 0x48) == 0) {
    uVar2 = *(uint *)(lVar6 + 0x50);
    uVar3 = *param_6;
    if (1 < uVar2) {
      uVar2 = 2;
    }
    local_58 = *(undefined8 *)(param_5 + (ulong)uVar3 * 8);
    uVar1 = param_7 - uVar3;
    if (uVar2 <= param_7 - uVar3) {
      uVar1 = uVar2;
    }
    if (uVar1 < 2) {
      local_50 = *(undefined8 *)(lVar6 + 0x40);
      *(undefined4 *)(lVar6 + 0x48) = 1;
    }
    else {
      local_50 = *(undefined8 *)(param_5 + (ulong)(uVar3 + 1) * 8);
    }
    (**(code **)(lVar6 + 0x18))(param_1,param_2,*param_3,&local_58);
    iVar4 = *(int *)(lVar6 + 0x48);
    *param_6 = *param_6 + uVar1;
    *(uint *)(lVar6 + 0x50) = *(int *)(lVar6 + 0x50) - uVar1;
    if (iVar4 != 0) goto LAB_00ede328;
  }
  else {
    FUN_00ee1260(lVar6 + 0x40,0,param_5 + (ulong)*param_6 * 8,0,1,*(undefined4 *)(lVar6 + 0x4c));
    *(undefined4 *)(lVar6 + 0x48) = 0;
    *param_6 = *param_6 + 1;
    *(int *)(lVar6 + 0x50) = *(int *)(lVar6 + 0x50) + -1;
  }
  *param_3 = *param_3 + 1;
LAB_00ede328:
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ede354(long param_1,long *param_2,uint param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  byte *pbVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  long lVar24;
  int iVar25;
  ulong uVar26;
  long lVar27;
  
  lVar9 = *(long *)(param_1 + 0x280);
  uVar6 = *(uint *)(param_1 + 0x88);
  lVar8 = *(long *)(param_1 + 0x1b8);
  lVar12 = *(long *)(lVar9 + 0x20);
  lVar3 = *(long *)(lVar9 + 0x28);
  lVar2 = *(long *)(lVar9 + 0x30);
  lVar9 = *(long *)(lVar9 + 0x38);
  pbVar15 = *(byte **)(*param_2 + (ulong)(param_3 << 1) * 8);
  pbVar16 = *(byte **)(*param_2 + (ulong)(param_3 << 1 | 1) * 8);
  pbVar19 = *(byte **)(param_2[1] + (ulong)param_3 * 8);
  pbVar18 = *(byte **)(param_2[2] + (ulong)param_3 * 8);
  puVar11 = (undefined1 *)*param_4;
  puVar10 = (undefined1 *)param_4[1];
  uVar4 = uVar6 >> 1;
  pbVar17 = pbVar16;
  pbVar20 = pbVar19;
  if (uVar4 != 0) {
    uVar5 = (ulong)(uVar4 - 1);
    lVar13 = uVar5 * 2 + 2;
    pbVar20 = pbVar19 + uVar5 + 1;
    lVar1 = uVar5 * 6 + 6;
    pbVar17 = pbVar16 + lVar13;
    iVar14 = -uVar4;
    pbVar7 = pbVar18;
    pbVar21 = pbVar15;
    puVar22 = puVar10;
    puVar23 = puVar11;
    do {
      uVar26 = (ulong)*pbVar21;
      iVar14 = iVar14 + 1;
      lVar27 = (long)*(int *)(lVar12 + (ulong)*pbVar7 * 4);
      lVar24 = (long)*(int *)(lVar3 + (ulong)*pbVar19 * 4);
      iVar25 = (int)((ulong)(*(long *)(lVar2 + (ulong)*pbVar7 * 8) +
                            *(long *)(lVar9 + (ulong)*pbVar19 * 8)) >> 0x10);
      *puVar23 = *(undefined1 *)(lVar8 + lVar27 + uVar26);
      puVar23[1] = *(undefined1 *)(lVar8 + uVar26 + (long)iVar25);
      puVar23[2] = *(undefined1 *)(lVar8 + lVar24 + uVar26);
      uVar26 = (ulong)pbVar21[1];
      pbVar21 = pbVar21 + 2;
      puVar23[3] = *(undefined1 *)(lVar8 + lVar27 + uVar26);
      puVar23[4] = *(undefined1 *)(lVar8 + uVar26 + (long)iVar25);
      puVar23[5] = *(undefined1 *)(lVar8 + lVar24 + uVar26);
      uVar26 = (ulong)*pbVar16;
      puVar23 = puVar23 + 6;
      *puVar22 = *(undefined1 *)(lVar8 + lVar27 + uVar26);
      puVar22[1] = *(undefined1 *)(lVar8 + uVar26 + (long)iVar25);
      puVar22[2] = *(undefined1 *)(lVar8 + lVar24 + uVar26);
      uVar26 = (ulong)pbVar16[1];
      pbVar16 = pbVar16 + 2;
      puVar22[3] = *(undefined1 *)(lVar8 + lVar27 + uVar26);
      puVar22[4] = *(undefined1 *)(lVar8 + uVar26 + (long)iVar25);
      puVar22[5] = *(undefined1 *)(lVar8 + lVar24 + uVar26);
      puVar22 = puVar22 + 6;
      pbVar7 = pbVar7 + 1;
      pbVar19 = pbVar19 + 1;
    } while (iVar14 != 0);
    pbVar18 = pbVar18 + uVar5 + 1;
    uVar6 = *(uint *)(param_1 + 0x88);
    pbVar15 = pbVar15 + lVar13;
    puVar11 = puVar11 + lVar1;
    puVar10 = puVar10 + lVar1;
  }
  if ((uVar6 & 1) != 0) {
    uVar5 = (ulong)*pbVar15;
    lVar13 = (long)*(int *)(lVar12 + (ulong)*pbVar18 * 4);
    lVar12 = (long)*(int *)(lVar3 + (ulong)*pbVar20 * 4);
    iVar14 = (int)((ulong)(*(long *)(lVar2 + (ulong)*pbVar18 * 8) +
                          *(long *)(lVar9 + (ulong)*pbVar20 * 8)) >> 0x10);
    *puVar11 = *(undefined1 *)(lVar8 + lVar13 + uVar5);
    puVar11[1] = *(undefined1 *)(lVar8 + uVar5 + (long)iVar14);
    puVar11[2] = *(undefined1 *)(lVar8 + lVar12 + uVar5);
    uVar5 = (ulong)*pbVar17;
    *puVar10 = *(undefined1 *)(lVar8 + lVar13 + uVar5);
    puVar10[1] = *(undefined1 *)(lVar8 + uVar5 + (long)iVar14);
    puVar10[2] = *(undefined1 *)(lVar8 + lVar12 + uVar5);
  }
  return;
}




void FUN_00ede564(long param_1,undefined8 param_2,int *param_3,undefined8 param_4,long param_5,
                 uint *param_6)

{
  (**(code **)(*(long *)(param_1 + 0x280) + 0x18))
            (param_1,param_2,*param_3,param_5 + (ulong)*param_6 * 8);
  *param_6 = *param_6 + 1;
  *param_3 = *param_3 + 1;
  return;
}




void FUN_00ede5b4(long param_1,long *param_2,ulong param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  long lVar21;
  
  lVar11 = *(long *)(param_1 + 0x280);
  uVar5 = *(uint *)(param_1 + 0x88);
  lVar10 = *(long *)(param_1 + 0x1b8);
  lVar1 = *(long *)(lVar11 + 0x20);
  lVar2 = *(long *)(lVar11 + 0x28);
  lVar13 = *(long *)(lVar11 + 0x30);
  lVar11 = *(long *)(lVar11 + 0x38);
  pbVar14 = *(byte **)(*param_2 + (param_3 & 0xffffffff) * 8);
  pbVar16 = *(byte **)(param_2[1] + (param_3 & 0xffffffff) * 8);
  pbVar15 = *(byte **)(param_2[2] + (param_3 & 0xffffffff) * 8);
  puVar12 = (undefined1 *)*param_4;
  uVar3 = uVar5 >> 1;
  pbVar17 = pbVar16;
  if (uVar3 != 0) {
    uVar18 = (ulong)(uVar3 - 1);
    pbVar17 = pbVar16 + uVar18 + 1;
    iVar4 = -uVar3;
    pbVar6 = pbVar15;
    pbVar7 = pbVar14;
    puVar8 = puVar12;
    do {
      uVar20 = (ulong)*pbVar7;
      iVar4 = iVar4 + 1;
      lVar21 = (long)*(int *)(lVar1 + (ulong)*pbVar6 * 4);
      lVar9 = (long)*(int *)(lVar2 + (ulong)*pbVar16 * 4);
      iVar19 = (int)((ulong)(*(long *)(lVar13 + (ulong)*pbVar6 * 8) +
                            *(long *)(lVar11 + (ulong)*pbVar16 * 8)) >> 0x10);
      *puVar8 = *(undefined1 *)(lVar10 + lVar21 + uVar20);
      puVar8[1] = *(undefined1 *)(lVar10 + uVar20 + (long)iVar19);
      puVar8[2] = *(undefined1 *)(lVar10 + lVar9 + uVar20);
      uVar20 = (ulong)pbVar7[1];
      pbVar7 = pbVar7 + 2;
      puVar8[3] = *(undefined1 *)(lVar10 + lVar21 + uVar20);
      puVar8[4] = *(undefined1 *)(lVar10 + uVar20 + (long)iVar19);
      puVar8[5] = *(undefined1 *)(lVar10 + lVar9 + uVar20);
      puVar8 = puVar8 + 6;
      pbVar6 = pbVar6 + 1;
      pbVar16 = pbVar16 + 1;
    } while (iVar4 != 0);
    uVar5 = *(uint *)(param_1 + 0x88);
    pbVar15 = pbVar15 + uVar18 + 1;
    pbVar14 = pbVar14 + uVar18 * 2 + 2;
    puVar12 = puVar12 + uVar18 * 6 + 6;
  }
  if ((uVar5 & 1) != 0) {
    uVar18 = (ulong)*pbVar14;
    lVar11 = *(long *)(lVar11 + (ulong)*pbVar17 * 8);
    lVar13 = *(long *)(lVar13 + (ulong)*pbVar15 * 8);
    iVar4 = *(int *)(lVar2 + (ulong)*pbVar17 * 4);
    *puVar12 = *(undefined1 *)(lVar10 + (long)*(int *)(lVar1 + (ulong)*pbVar15 * 4) + uVar18);
    puVar12[1] = *(undefined1 *)(lVar10 + uVar18 + (long)(int)((ulong)(lVar13 + lVar11) >> 0x10));
    puVar12[2] = *(undefined1 *)(lVar10 + (long)iVar4 + uVar18);
  }
  return;
}




void FUN_00ede714(long param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  puVar4 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x30);
  *(undefined8 **)(param_1 + 600) = puVar4;
  *puVar4 = FUN_00ede7dc;
  puVar4[2] = 0;
  puVar4[3] = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x1a4);
    *(undefined4 *)(puVar4 + 4) = uVar2;
    if (param_2 == 0) {
      uVar5 = (**(code **)(*(long *)(param_1 + 8) + 0x10))
                        (param_1,1,*(int *)(param_1 + 0x90) * *(int *)(param_1 + 0x88));
      puVar4[3] = uVar5;
    }
    else {
      pcVar6 = *(code **)(*(long *)(param_1 + 8) + 0x20);
      iVar1 = *(int *)(param_1 + 0x90);
      iVar3 = *(int *)(param_1 + 0x88);
      uVar5 = FUN_00ee124c(*(undefined4 *)(param_1 + 0x8c),uVar2);
      uVar5 = (*pcVar6)(param_1,1,0,iVar1 * iVar3,uVar5,*(undefined4 *)(puVar4 + 4));
      puVar4[2] = uVar5;
    }
  }
  return;
}




void FUN_00ede7dc(long *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  
  lVar4 = param_1[0x4b];
  if (param_2 == 3) {
    if (*(long *)(lVar4 + 0x10) == 0) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 3;
      (*(code *)*puVar2)();
    }
    pcVar3 = FUN_00ede980;
  }
  else if (param_2 == 2) {
    if (*(long *)(lVar4 + 0x10) == 0) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 3;
      (*(code *)*puVar2)();
    }
    pcVar3 = FUN_00edea98;
  }
  else {
    if (param_2 != 0) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 3;
      (*(code *)*puVar2)();
      goto LAB_00ede8b4;
    }
    if (*(int *)((long)param_1 + 0x6c) != 0) {
      *(code **)(lVar4 + 8) = FUN_00ede8c4;
      if (*(long *)(lVar4 + 0x18) == 0) {
        uVar1 = (**(code **)(param_1[1] + 0x38))
                          (param_1,*(undefined8 *)(lVar4 + 0x10),0,*(undefined4 *)(lVar4 + 0x20),1);
        *(undefined8 *)(lVar4 + 0x18) = uVar1;
      }
      goto LAB_00ede8b4;
    }
    pcVar3 = *(code **)(param_1[0x50] + 8);
  }
  *(code **)(lVar4 + 8) = pcVar3;
LAB_00ede8b4:
  *(undefined4 *)(lVar4 + 0x24) = 0;
  *(undefined4 *)(lVar4 + 0x28) = 0;
  return;
}




void FUN_00ede8c4(long param_1)

{
  long lVar1;
  long in_x4;
  uint *in_x5;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(param_1 + 600);
  (**(code **)(*(long *)(param_1 + 0x280) + 8))();
  (**(code **)(*(long *)(param_1 + 0x290) + 8))
            (param_1,*(undefined8 *)(lVar3 + 0x18),in_x4 + (ulong)*in_x5 * 8,0);
  *in_x5 = *in_x5;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ede980(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,int *param_6)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  uint uVar6;
  
  lVar5 = *(long *)(param_1 + 600);
  puVar4 = (uint *)(lVar5 + 0x28);
  uVar6 = *puVar4;
  if (uVar6 == 0) {
    uVar2 = (**(code **)(*(long *)(param_1 + 8) + 0x38))
                      (param_1,*(undefined8 *)(lVar5 + 0x10),*(undefined4 *)(lVar5 + 0x24),
                       *(undefined4 *)(lVar5 + 0x20),1);
    uVar6 = *(uint *)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x18) = uVar2;
  }
  else {
    uVar2 = *(undefined8 *)(lVar5 + 0x18);
  }
  (**(code **)(*(long *)(param_1 + 0x280) + 8))
            (param_1,param_2,param_3,param_4,uVar2,puVar4,*(uint *)(lVar5 + 0x20));
  uVar3 = *puVar4;
  iVar1 = uVar3 - uVar6;
  if (uVar6 <= uVar3 && iVar1 != 0) {
    (**(code **)(*(long *)(param_1 + 0x290) + 8))
              (param_1,*(long *)(lVar5 + 0x18) + (ulong)uVar6 * 8,0,iVar1);
    *param_6 = *param_6 + iVar1;
    uVar3 = *puVar4;
  }
  uVar6 = *(uint *)(lVar5 + 0x20);
  if (uVar6 <= uVar3) {
    *(uint *)(lVar5 + 0x24) = *(int *)(lVar5 + 0x24) + uVar6;
    *(undefined4 *)(lVar5 + 0x28) = 0;
  }
  return;
}




void FUN_00edea98(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long in_x4;
  uint *in_x5;
  int in_w6;
  uint uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 600);
  uVar5 = *(uint *)(lVar6 + 0x28);
  if (uVar5 == 0) {
    lVar4 = (**(code **)(*(long *)(param_1 + 8) + 0x38))
                      (param_1,*(undefined8 *)(lVar6 + 0x10),*(undefined4 *)(lVar6 + 0x24),
                       *(undefined4 *)(lVar6 + 0x20),0);
    uVar5 = *(uint *)(lVar6 + 0x28);
    *(long *)(lVar6 + 0x18) = lVar4;
  }
  else {
    lVar4 = *(long *)(lVar6 + 0x18);
  }
  uVar1 = *(int *)(lVar6 + 0x20) - uVar5;
  uVar2 = in_w6 - *in_x5;
  uVar3 = *(int *)(param_1 + 0x8c) - *(int *)(lVar6 + 0x24);
  if (uVar1 <= uVar2) {
    uVar2 = uVar1;
  }
  if (uVar2 <= uVar3) {
    uVar3 = uVar2;
  }
  (**(code **)(*(long *)(param_1 + 0x290) + 8))
            (param_1,lVar4 + (ulong)uVar5 * 8,in_x4 + (ulong)*in_x5 * 8,uVar3);
  *in_x5 = *in_x5 + uVar3;
  uVar3 = *(int *)(lVar6 + 0x28) + uVar3;
  *(uint *)(lVar6 + 0x28) = uVar3;
  if (*(uint *)(lVar6 + 0x20) <= uVar3) {
    *(uint *)(lVar6 + 0x24) = *(int *)(lVar6 + 0x24) + *(uint *)(lVar6 + 0x20);
    *(undefined4 *)(lVar6 + 0x28) = 0;
  }
  return;
}




void FUN_00edeb7c(long *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  code *pcVar13;
  int *piVar14;
  
  puVar9 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x100);
  param_1[0x50] = (long)puVar9;
  *puVar9 = FUN_00eded80;
  puVar9[1] = FUN_00eded98;
  *(undefined4 *)(puVar9 + 2) = 0;
  if ((int)param_1[0x32] != 0) {
    puVar11 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar11 + 5) = 0x1a;
    (*(code *)*puVar11)(param_1);
  }
  if (0 < (int)param_1[7]) {
    lVar12 = 0;
    piVar14 = (int *)(param_1[0x26] + 0x24);
    do {
      iVar2 = piVar14[-7];
      iVar3 = *piVar14;
      lVar8 = param_1[0x35];
      iVar4 = (int)param_1[0x34];
      iVar6 = 0;
      if (*(int *)((long)param_1 + 0x1ac) != 0) {
        iVar6 = (piVar14[1] * piVar14[-6]) / *(int *)((long)param_1 + 0x1ac);
      }
      iVar5 = *(int *)((long)param_1 + 0x1a4);
      *(int *)((long)puVar9 + lVar12 * 4 + 0xc0) = iVar6;
      if (piVar14[4] == 0) {
        puVar9[lVar12 + 0xd] = FUN_00edeee4;
      }
      else {
        iVar7 = 0;
        if ((int)lVar8 != 0) {
          iVar7 = (iVar3 * iVar2) / (int)lVar8;
        }
        if ((iVar7 == iVar4) && (iVar6 == iVar5)) {
          puVar9[lVar12 + 0xd] = FUN_00edeeec;
        }
        else {
          if ((iVar7 << 1 == iVar4) && (iVar6 == iVar5)) {
            puVar9[lVar12 + 0xd] = FUN_00edeef4;
          }
          else if ((iVar7 << 1 == iVar4) && (iVar6 << 1 == iVar5)) {
            puVar9[lVar12 + 0xd] = FUN_00edef48;
          }
          else {
            iVar2 = 0;
            if (iVar7 != 0) {
              iVar2 = iVar4 / iVar7;
            }
            if (iVar4 == iVar2 * iVar7) {
              iVar3 = 0;
              if (iVar6 != 0) {
                iVar3 = iVar5 / iVar6;
              }
              if (iVar5 == iVar3 * iVar6) {
                puVar1 = (undefined1 *)((long)puVar9 + lVar12 + 0xf2);
                puVar9[lVar12 + 0xd] = FUN_00edeff4;
                puVar1[-10] = (char)iVar2;
                *puVar1 = (char)iVar3;
                goto LAB_00eded20;
              }
            }
            puVar11 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar11 + 5) = 0x27;
            (*(code *)*puVar11)(param_1);
          }
LAB_00eded20:
          pcVar13 = *(code **)(param_1[1] + 0x10);
          uVar10 = FUN_00ee124c((int)param_1[0x11],(long)(int)param_1[0x34]);
          uVar10 = (*pcVar13)(param_1,1,uVar10,*(undefined4 *)((long)param_1 + 0x1a4));
          puVar9[lVar12 + 3] = uVar10;
        }
      }
      lVar12 = lVar12 + 1;
      piVar14 = piVar14 + 0x18;
    } while (lVar12 < (int)param_1[7]);
  }
  return;
}




void FUN_00eded80(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x280);
  *(undefined4 *)(lVar1 + 0xb8) = *(undefined4 *)(param_1 + 0x1a4);
  *(undefined4 *)(lVar1 + 0xbc) = *(undefined4 *)(param_1 + 0x8c);
  return;
}




void FUN_00eded98(long param_1,long param_2,int *param_3,undefined8 param_4,long param_5,
                 uint *param_6,int param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)(param_1 + 0x280);
  iVar4 = *(int *)(param_1 + 0x1a4);
  iVar3 = *(int *)(lVar7 + 0xb8);
  if (iVar4 <= iVar3) {
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar5 = *(long *)(param_1 + 0x130);
      lVar8 = 0;
      lVar6 = lVar7 + 0x18;
      do {
        (**(code **)(lVar7 + 0x68 + lVar8 * 8))
                  (param_1,lVar5,
                   *(long *)(param_2 + lVar8 * 8) +
                   (ulong)(uint)(*(int *)(lVar7 + 0x68 + lVar8 * 4 + 0x58) * *param_3) * 8,lVar6);
        lVar8 = lVar8 + 1;
        lVar5 = lVar5 + 0x60;
        lVar6 = lVar6 + 8;
      } while (lVar8 < *(int *)(param_1 + 0x38));
      iVar4 = *(int *)(param_1 + 0x1a4);
    }
    iVar3 = 0;
    *(undefined4 *)(lVar7 + 0xb8) = 0;
  }
  uVar2 = param_7 - *param_6;
  uVar1 = *(uint *)(lVar7 + 0xbc);
  if ((uint)(iVar4 - iVar3) <= *(uint *)(lVar7 + 0xbc)) {
    uVar1 = iVar4 - iVar3;
  }
  if (uVar1 <= uVar2) {
    uVar2 = uVar1;
  }
  (**(code **)(*(long *)(param_1 + 0x288) + 8))
            (param_1,lVar7 + 0x18,iVar3,param_5 + (ulong)*param_6 * 8,uVar2);
  *param_6 = *param_6 + uVar2;
  iVar4 = *(int *)(lVar7 + 0xb8) + uVar2;
  *(int *)(lVar7 + 0xb8) = iVar4;
  *(uint *)(lVar7 + 0xbc) = *(int *)(lVar7 + 0xbc) - uVar2;
  if (*(int *)(param_1 + 0x1a4) <= iVar4) {
    *param_3 = *param_3 + 1;
  }
  return;
}




void FUN_00edeee4(void)

{
  undefined8 *in_x3;
  
  *in_x3 = 0;
  return;
}




void FUN_00edeeec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  *param_4 = param_3;
  return;
}




void FUN_00edeef4(long param_1,undefined8 param_2,long param_3,long *param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  
  iVar5 = *(int *)(param_1 + 0x1a4);
  if (0 < iVar5) {
    lVar3 = *param_4;
    lVar4 = 0;
    do {
      if (*(uint *)(param_1 + 0x88) != 0) {
        puVar6 = *(undefined1 **)(lVar3 + lVar4 * 8);
        puVar1 = puVar6 + *(uint *)(param_1 + 0x88);
        puVar7 = *(undefined1 **)(param_3 + lVar4 * 8);
        do {
          uVar2 = *puVar7;
          *puVar6 = uVar2;
          puVar6[1] = uVar2;
          puVar6 = puVar6 + 2;
          puVar7 = puVar7 + 1;
        } while (puVar6 < puVar1);
        iVar5 = *(int *)(param_1 + 0x1a4);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar5);
  }
  return;
}




void FUN_00edef48(long param_1,undefined8 param_2,long param_3,long *param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  if (0 < *(int *)(param_1 + 0x1a4)) {
    lVar6 = *param_4;
    lVar8 = 0;
    uVar7 = 0;
    do {
      if (*(uint *)(param_1 + 0x88) == 0) {
        uVar3 = 0;
      }
      else {
        puVar4 = *(undefined1 **)(lVar6 + uVar7 * 8);
        puVar1 = puVar4 + *(uint *)(param_1 + 0x88);
        puVar5 = *(undefined1 **)(param_3 + lVar8 * 8);
        do {
          uVar2 = *puVar5;
          *puVar4 = uVar2;
          puVar4[1] = uVar2;
          puVar4 = puVar4 + 2;
          puVar5 = puVar5 + 1;
        } while (puVar4 < puVar1);
        uVar3 = *(undefined4 *)(param_1 + 0x88);
      }
      FUN_00ee1260(lVar6,uVar7 & 0xffffffff,lVar6,(uint)uVar7 | 1,1,uVar3);
      uVar7 = uVar7 + 2;
      lVar8 = lVar8 + 1;
    } while ((int)uVar7 < *(int *)(param_1 + 0x1a4));
  }
  return;
}




void FUN_00edeff4(long param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  void *pvVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  void *__s;
  long lVar8;
  
  if (0 < *(int *)(param_1 + 0x1a4)) {
    lVar7 = *param_4;
    lVar8 = 0;
    uVar6 = 0;
    lVar1 = *(long *)(param_1 + 0x280) + (long)*(int *)(param_2 + 4);
    bVar3 = *(byte *)(lVar1 + 0xf2);
    bVar4 = *(byte *)(lVar1 + 0xe8);
    do {
      if (*(uint *)(param_1 + 0x88) != 0) {
        __s = *(void **)(lVar7 + uVar6 * 8);
        pvVar2 = (void *)((long)__s + (ulong)*(uint *)(param_1 + 0x88));
        pbVar5 = *(byte **)(param_3 + lVar8 * 8);
        do {
          if (bVar4 != 0) {
            memset(__s,(uint)*pbVar5,(ulong)bVar4);
            __s = (void *)((long)__s + (ulong)(bVar4 - 1) + 1);
          }
          pbVar5 = pbVar5 + 1;
        } while (__s < pvVar2);
      }
      if (1 < bVar3) {
        FUN_00ee1260(lVar7,uVar6 & 0xffffffff,lVar7,(int)uVar6 + 1,bVar3 - 1,
                     *(undefined4 *)(param_1 + 0x88));
      }
      uVar6 = uVar6 + bVar3;
      lVar8 = lVar8 + 1;
    } while ((int)uVar6 < *(int *)(param_1 + 0x1a4));
  }
  return;
}

