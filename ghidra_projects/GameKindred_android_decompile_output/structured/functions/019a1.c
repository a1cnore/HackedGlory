// functions/019a1 — 40 functions
#include "libGameKindred.h"




byte thunk_FUN_019a1414(long param_1)

{
  return *(byte *)(param_1 + 0xc) >> 4;
}




undefined1  [16] FUN_019a103c(undefined8 param_1,long param_2,int param_3,char param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  uVar2 = *(uint *)(param_2 + 8);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      if (*(char *)(param_2 + 0xc + (uVar4 & 0xffffffff)) == param_4) {
        lVar1 = param_2 + uVar4 * 4;
        uVar3 = *(uint *)(lVar1 + 0x14);
        param_2 = param_2 + (ulong)uVar3;
        if (uVar2 - 1 == (int)uVar4) {
          param_3 = param_3 - (int)param_2;
        }
        else {
          param_3 = *(int *)(lVar1 + 0x18) - uVar3;
        }
        goto LAB_019a1098;
      }
      uVar4 = uVar4 + 1;
    } while ((uint)uVar4 < uVar2);
  }
  param_3 = 0;
  param_2 = 0;
LAB_019a1098:
  auVar5._8_4_ = param_3;
  auVar5._0_8_ = param_2;
  auVar5._12_4_ = 0;
  return auVar5;
}




undefined1  [16] FUN_019a10a0(undefined8 param_1,long param_2,int param_3,char param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  uVar2 = *(uint *)(param_2 + 8);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      if (*(char *)(param_2 + 0xc + (uVar4 & 0xffffffff)) == param_4) {
        lVar1 = param_2 + uVar4 * 4;
        uVar3 = *(uint *)(lVar1 + 0x14);
        param_2 = param_2 + (ulong)uVar3;
        if (uVar2 - 1 == (int)uVar4) {
          param_3 = param_3 - (int)param_2;
        }
        else {
          param_3 = *(int *)(lVar1 + 0x18) - uVar3;
        }
        goto LAB_019a10fc;
      }
      uVar4 = uVar4 + 1;
    } while ((uint)uVar4 < uVar2);
  }
  param_3 = 0;
  param_2 = 0;
LAB_019a10fc:
  auVar5._8_4_ = param_3;
  auVar5._0_8_ = param_2;
  auVar5._12_4_ = 0;
  return auVar5;
}




void FUN_019a1104(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  long lVar2;
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  puVar1 = (uint *)((long)param_1 + (ulong)(param_2 & 0xfffffffc));
  local_3c = param_3;
  local_3c = FUN_0091ed5c(&local_3c,4,param_4);
  for (; param_1 < puVar1; param_1 = param_1 + 1) {
    param_4 = local_3c ^ (param_4 >> 0x1f | param_4 << 1) ^ *param_1;
    *param_1 = param_4;
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_019a1194(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  uint local_3c;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  puVar3 = (uint *)((long)param_1 + (ulong)(param_2 & 0xfffffffc));
  local_3c = param_3;
  local_3c = FUN_0091ed5c(&local_3c,4,param_4);
  for (; param_1 < puVar3; param_1 = param_1 + 1) {
    uVar1 = param_4 >> 0x1f;
    uVar2 = param_4 << 1;
    param_4 = *param_1;
    *param_1 = local_3c ^ (uVar1 | uVar2) ^ param_4;
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_019a1224(ulong param_1)

{
  long lVar1;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = *(undefined4 *)(&DAT_02bf7408 + (param_1 & 0xffffffff) * 4);
  FUN_0091ed5c(&local_2c,4);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_019a1280(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,param_1 + 4);
  lVar1 = param_1 + 4 + (uVar2 & 0xffffffff);
  uVar2 = (**(code **)(*param_2 + 0x18))(param_2,lVar1);
  lVar1 = lVar1 + (uVar2 & 0xffffffff);
  uVar2 = (**(code **)(*param_2 + 0x20))(param_2,lVar1);
  lVar1 = lVar1 + (uVar2 & 0xffffffff);
  uVar2 = (**(code **)(*param_2 + 0x28))(param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x019a1308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x30))(param_2,lVar1 + (uVar2 & 0xffffffff));
  return;
}




undefined8 FUN_019a130c(void *param_1,void *param_2)

{
  memmove(param_2,param_1,0x47);
  return 0x47;
}




undefined8
FUN_019a1334(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
            undefined1 *param_5,undefined4 *param_6)

{
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = *param_1;
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = param_1[1];
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = param_1[2];
  }
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = param_1[3];
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = *(undefined4 *)(param_1 + 4);
  }
  return 8;
}




undefined8
FUN_019a1378(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,undefined8 *param_4,
            undefined4 *param_5,undefined4 *param_6,undefined1 *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = *param_1;
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = param_1[1];
  }
  uVar2 = *(undefined8 *)(param_1 + 10);
  uVar1 = *(undefined8 *)(param_1 + 2);
  param_4[2] = *(undefined8 *)(param_1 + 0x12);
  param_4[1] = uVar2;
  *param_4 = uVar1;
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = *(undefined4 *)(param_1 + 0x1a);
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = *(undefined4 *)(param_1 + 0x1e);
  }
  if (param_7 != (undefined1 *)0x0) {
    *param_7 = param_1[0x22];
  }
  return 0x23;
}




undefined8
FUN_019a13cc(undefined1 *param_1,undefined1 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = *param_1;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 1);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 5);
  }
  return 9;
}




void FUN_019a13f8(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = 0x30435352;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  return;
}




void FUN_019a1410(void)

{
  return;
}




byte FUN_019a1414(long param_1)

{
  return *(byte *)(param_1 + 0xc) >> 4;
}




void FUN_019a1420(long param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)(param_1 + 0xc) & 0xef;
  if ((param_2 & 1) != 0) {
    bVar1 = *(byte *)(param_1 + 0xc) | 0x10;
  }
  bVar2 = bVar1 & 0xdf;
  if ((param_2 & 2) != 0) {
    bVar2 = bVar1 | 0x20;
  }
  bVar1 = bVar2 & 0xbf;
  if ((param_2 & 4) != 0) {
    bVar1 = bVar2 | 0x40;
  }
  bVar2 = bVar1 & 0x7f;
  if ((param_2 & 8) != 0) {
    bVar2 = bVar1 | 0x80;
  }
  *(byte *)(param_1 + 0xc) = bVar2;
  return;
}




void FUN_019a146c(long param_1,uint *param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 0xc) >> 4;
  if (bVar1 == 0) {
    *param_2 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_019a1224(bVar1);
    *param_2 = uVar2;
    uVar2 = *(uint *)(param_1 + 4) ^ uVar2;
  }
  *param_3 = uVar2;
  return;
}




int FUN_019a14c4(undefined1 *param_1,undefined1 *param_2,byte *param_3,undefined4 *param_4,
                undefined4 *param_5)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = *param_1;
  }
  bVar1 = param_1[1];
  uVar2 = (ulong)bVar1;
  if (param_3 != (byte *)0x0) {
    *param_3 = bVar1;
  }
  uVar3 = 2;
  if ((param_4 != (undefined4 *)0x0) && (bVar1 != 0)) {
    puVar4 = (undefined4 *)(param_1 + 2);
    do {
      uVar2 = uVar2 - 1;
      *param_4 = *puVar4;
      param_4 = param_4 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar2 != 0);
    uVar3 = (uint)bVar1 << 2 | 2;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = *(undefined4 *)(param_1 + uVar3);
  }
  return uVar3 + 4;
}




undefined8
FUN_019a1518(long param_1,long *param_2,undefined1 *param_3,byte *param_4,byte *param_5,
            undefined1 *param_6,undefined4 *param_7)

{
  if (param_2 != (long *)0x0) {
    *param_2 = param_1;
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = *(undefined1 *)(param_1 + 0x21);
  }
  if (param_4 != (byte *)0x0) {
    *param_4 = *(byte *)(param_1 + 0x22) & 0xf;
  }
  if (param_5 != (byte *)0x0) {
    *param_5 = *(byte *)(param_1 + 0x22) >> 4;
  }
  if (param_6 != (undefined1 *)0x0) {
    *param_6 = *(undefined1 *)(param_1 + 0x23);
  }
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = *(undefined4 *)(param_1 + 0x24);
  }
  return 0x28;
}




undefined8
FUN_019a156c(void *param_1,void *param_2,undefined1 *param_3,undefined1 *param_4,byte *param_5,
            undefined1 *param_6)

{
  if (param_2 != (void *)0x0) {
    memmove(param_2,param_1,0x300);
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = *(undefined1 *)((long)param_1 + 0x300);
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = *(undefined1 *)((long)param_1 + 0x301);
  }
  if (param_5 != (byte *)0x0) {
    *param_5 = *(byte *)((long)param_1 + 0x301) >> 4;
  }
  if (param_6 != (undefined1 *)0x0) {
    *param_6 = *(undefined1 *)((long)param_1 + 0x302);
  }
  return 0x303;
}




undefined8 FUN_019a15f4(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,long *param_4)

{
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = *param_1;
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = param_1[1];
  }
  if (param_4 != (long *)0x0) {
    *param_4 = (long)(param_1 + 2);
  }
  return 0x23;
}




void FUN_019a1620(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 1) = 0;
  *param_1 = 0x30444853;
  return;
}




void FUN_019a1634(long param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  uVar2 = (*(code *)PTR_FUN_02bf24b8)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = uVar2;
  uVar1 = (*(code *)PTR_FUN_02bf24b0)(*(undefined2 *)(param_1 + 8));
  *(undefined2 *)(param_1 + 8) = uVar1;
  uVar1 = (*(code *)PTR_FUN_02bf24b0)(*(undefined2 *)(param_1 + 10));
  *(undefined2 *)(param_1 + 10) = uVar1;
  return;
}




void FUN_019a1690(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}




void FUN_019a1698(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_02bf24b8)(*param_1);
  *param_1 = uVar1;
  uVar1 = (*(code *)PTR_FUN_02bf24b8)(param_1[1]);
  param_1[1] = uVar1;
  return;
}




void FUN_019a16dc(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  param_1[5] = 0;
  *param_1 = 0x30484354;
  return;
}




void FUN_019a16f8(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = (*(code *)PTR_FUN_02bf24b8)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = uVar1;
  uVar2 = (*(code *)PTR_FUN_02bf24c0)(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = uVar2;
  return;
}




void FUN_019a1744(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_02bf24b8)(*(undefined4 *)(param_1 + 0x24));
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  return;
}




void FUN_019a1778(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = 0;
  do {
    uVar2 = (*(code *)PTR_FUN_02bf24c8)(*(undefined4 *)(param_1 + lVar1));
    *(undefined4 *)(param_1 + lVar1) = uVar2;
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x300);
  return;
}




void FUN_019a17c4(void)

{
  return;
}




void * FUN_019a17c8(undefined8 *param_1,undefined8 *param_2,void *param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar2 = *param_1;
  *(uint *)(param_2 + 1) = uVar1;
  uVar1 = uVar1 >> 0x10;
  if (uVar1 <= param_4) {
    param_4 = uVar1;
  }
  *param_2 = uVar2;
  memmove(param_3,(void *)((long)param_1 + 0xc),(ulong)(param_4 << 3));
  return (void *)((long)param_1 + 0xc + (ulong)*(ushort *)((long)param_2 + 10) * 8);
}




undefined8 * FUN_019a1820(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  param_2[2] = param_1[2];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return param_1 + 3;
}




int FUN_019a1834(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_1;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = param_1[1];
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = param_1[2];
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = param_1[3];
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = param_1[4];
  }
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = param_1[5];
  }
  if (param_8 != (undefined4 *)0x0) {
    *param_8 = param_1[6];
  }
  return param_1[6] * 0xc + 0x1c;
}




undefined4 FUN_019a189c(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  
  if (param_1 == (uint *)0x0) {
    uVar5 = 2;
  }
  else {
    lVar6 = (long)(int)param_1[2] + -1;
    if (*param_1 < 0xb) {
      uVar5 = 0;
      *(long *)(param_1 + 4) = *(long *)(param_1 + 4) + (int)param_1[6] * lVar6;
      param_1[6] = -param_1[6];
    }
    else {
      uVar1 = param_1[0xc];
      uVar2 = param_1[0xd];
      uVar3 = param_1[0xe];
      lVar4 = (lVar6 << 0x20) >> 0x21;
      param_1[0xc] = -uVar1;
      param_1[0xd] = -uVar2;
      param_1[0xe] = -uVar3;
      uVar5 = 0;
      *(long *)(param_1 + 4) = *(long *)(param_1 + 4) + (long)(int)uVar1 * (long)(int)lVar6;
      *(long *)(param_1 + 6) = *(long *)(param_1 + 6) + (int)uVar2 * lVar4;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + (int)uVar3 * lVar4;
      if (*(long *)(param_1 + 10) != 0) {
        *(long *)(param_1 + 10) =
             *(long *)(param_1 + 10) + (long)(int)param_1[0xf] * (long)(int)lVar6;
        param_1[0xf] = -param_1[0xf];
      }
    }
  }
  return uVar5;
}




undefined8 FUN_019a1948(uint param_1,uint param_2,long param_3,uint *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  
  if ((int)param_2 < 1) {
    return 2;
  }
  if ((int)param_1 < 1) {
    return 2;
  }
  if (param_4 == (uint *)0x0) {
    return 2;
  }
  if (param_3 != 0) {
    if (*(int *)(param_3 + 8) != 0) {
      uVar12 = *(uint *)(param_3 + 0x18);
      if ((int)uVar12 < 1) {
        return 2;
      }
      uVar19 = *(uint *)(param_3 + 0x14);
      if ((int)uVar19 < 1) {
        return 2;
      }
      if ((int)(*(uint *)(param_3 + 0x10) | *(uint *)(param_3 + 0xc)) < 0) {
        return 2;
      }
      if ((int)param_1 < (int)((*(uint *)(param_3 + 0xc) & 0xfffffffe) + uVar19)) {
        return 2;
      }
      bVar1 = (int)param_2 < (int)((*(uint *)(param_3 + 0x10) & 0xfffffffe) + uVar12);
      param_1 = uVar19;
      param_2 = uVar12;
      if (bVar1) {
        return 2;
      }
    }
    if (*(int *)(param_3 + 0x1c) != 0) {
      param_1 = *(uint *)(param_3 + 0x20);
      if ((int)param_1 < 1) {
        return 2;
      }
      param_2 = *(uint *)(param_3 + 0x24);
      if ((int)param_2 < 1) {
        return 2;
      }
    }
  }
  param_4[1] = param_1;
  param_4[2] = param_2;
  if ((int)param_2 < 1) {
    return 2;
  }
  if ((int)param_1 < 1) {
    return 2;
  }
  uVar12 = *param_4;
  if (0xc < uVar12) {
    return 2;
  }
  if ((param_4[3] == 0) && (*(long *)(param_4 + 0x1c) == 0)) {
    iVar5 = *(int *)(&DAT_01e1c48c + (ulong)uVar12 * 4);
    lVar14 = (long)(int)param_1;
    lVar15 = iVar5 * lVar14 * (long)(int)param_2;
    if (uVar12 < 0xb) {
      lVar18 = 0;
      lVar17 = 0;
      param_1 = 0;
      uVar19 = 0;
    }
    else {
      iVar6 = param_1 + 2;
      iVar7 = param_2 + 2;
      if (-1 < (int)(param_1 + 1)) {
        iVar6 = param_1 + 1;
      }
      uVar19 = iVar6 >> 1;
      if (-1 < (int)(param_2 + 1)) {
        iVar7 = param_2 + 1;
      }
      lVar17 = (long)(int)uVar19 * (long)(iVar7 >> 1);
      if (uVar12 == 0xc) {
        lVar18 = (long)(int)param_1 * (long)(int)param_2;
      }
      else {
        lVar18 = 0;
        param_1 = 0;
      }
    }
    lVar13 = FUN_019a2d40(lVar18 + lVar15 + lVar17 * 2,1);
    if (lVar13 == 0) {
      return 1;
    }
    *(long *)(param_4 + 0x1c) = lVar13;
    *(long *)(param_4 + 4) = lVar13;
    uVar16 = (uint)(iVar5 * lVar14);
    if (uVar12 < 0xb) {
      param_4[6] = uVar16;
      *(long *)(param_4 + 8) = lVar15;
    }
    else {
      lVar13 = lVar13 + lVar15;
      param_4[0xc] = uVar16;
      param_4[0xd] = uVar19;
      *(long *)(param_4 + 0x10) = lVar15;
      *(long *)(param_4 + 0x12) = lVar17;
      param_4[0xe] = uVar19;
      *(long *)(param_4 + 6) = lVar13;
      *(long *)(param_4 + 8) = lVar13 + lVar17;
      *(long *)(param_4 + 0x14) = lVar17;
      if (uVar12 == 0xc) {
        *(long *)(param_4 + 10) = lVar13 + lVar17 * 2;
      }
      *(long *)(param_4 + 0x16) = lVar18;
      param_4[0xf] = param_1;
    }
  }
  uVar12 = *param_4;
  if (0xc < uVar12) {
    return 2;
  }
  uVar19 = param_4[1];
  lVar14 = (long)(int)uVar19;
  uVar16 = param_4[2];
  if (uVar12 < 0xb) {
    uVar8 = param_4[6];
    uVar4 = -uVar8;
    if (-1 < (int)uVar8) {
      uVar4 = uVar8;
    }
    if (*(long *)(param_4 + 4) == 0) {
      return 2;
    }
    if ((int)uVar4 < (int)(*(int *)(&DAT_01e1c48c + (ulong)uVar12 * 4) * uVar19)) {
      return 2;
    }
    if (*(ulong *)(param_4 + 8) < (ulong)(lVar14 + (long)(int)uVar4 * ((long)(int)uVar16 + -1))) {
      return 2;
    }
  }
  else {
    uVar8 = param_4[0xc];
    uVar10 = param_4[0xd];
    uVar4 = uVar19 + 2;
    uVar9 = param_4[0xe];
    uVar11 = param_4[0xf];
    iVar5 = uVar16 + 2;
    if (-1 < (int)(uVar19 + 1)) {
      uVar4 = uVar19 + 1;
    }
    lVar15 = (long)(int)uVar16 + -1;
    if (-1 < (int)(uVar16 + 1)) {
      iVar5 = uVar16 + 1;
    }
    uVar16 = -uVar8;
    if (-1 < (int)uVar8) {
      uVar16 = uVar8;
    }
    iVar5 = (iVar5 >> 1) + -1;
    uVar8 = -uVar10;
    if (-1 < (int)uVar10) {
      uVar8 = uVar10;
    }
    lVar17 = (long)((ulong)uVar4 << 0x20) >> 0x21;
    uVar10 = -uVar9;
    if (-1 < (int)uVar9) {
      uVar10 = uVar9;
    }
    uVar9 = -uVar11;
    if (-1 < (int)uVar11) {
      uVar9 = uVar11;
    }
    bVar1 = *(ulong *)(param_4 + 0x10) < (ulong)(lVar14 + (int)uVar16 * lVar15);
    bVar2 = *(ulong *)(param_4 + 0x12) < (ulong)(lVar17 + (long)(int)uVar8 * (long)iVar5);
    bVar3 = *(ulong *)(param_4 + 0x14) < (ulong)(lVar17 + (long)(int)uVar10 * (long)iVar5);
    iVar5 = (int)uVar4 >> 1;
    if (uVar12 == 0xc) {
      if ((int)uVar9 < (int)uVar19 ||
          (*(long *)(param_4 + 8) == 0 ||
          (*(long *)(param_4 + 6) == 0 ||
          (*(long *)(param_4 + 4) == 0 ||
          ((int)uVar10 < iVar5 ||
          ((int)uVar8 < iVar5 || ((int)uVar16 < (int)uVar19 || ((bVar1 || bVar2) || bVar3)))))))) {
        return 2;
      }
      if (*(ulong *)(param_4 + 0x16) < (ulong)(lVar14 + (int)uVar9 * lVar15)) {
        return 2;
      }
      if (*(long *)(param_4 + 10) == 0) {
        return 2;
      }
    }
    else if (*(long *)(param_4 + 8) == 0 ||
             (*(long *)(param_4 + 6) == 0 ||
             (*(long *)(param_4 + 4) == 0 ||
             ((int)uVar10 < iVar5 ||
             ((int)uVar8 < iVar5 || ((int)uVar16 < (int)uVar19 || ((bVar1 || bVar2) || bVar3)))))))
    {
      return 2;
    }
  }
  return 0;
}




undefined4 FUN_019a1cdc(void *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 != (void *)0x0) && ((param_2 & 0xffffff00) == 0x200)) {
    memset(param_1,0,0x78);
    uVar1 = 1;
  }
  return uVar1;
}




void FUN_019a1d14(long param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xc) == 0) {
      free(*(void **)(param_1 + 0x70));
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  return;
}




void FUN_019a1d48(void *param_1,void *param_2)

{
  if (((param_1 != (void *)0x0) && (param_2 != (void *)0x0)) &&
     (memcpy(param_2,param_1,0x78), *(long *)((long)param_1 + 0x70) != 0)) {
    *(undefined4 *)((long)param_2 + 0xc) = 1;
    *(undefined8 *)((long)param_2 + 0x70) = 0;
  }
  return;
}




void FUN_019a1d94(void *param_1,void *param_2)

{
  if (((param_1 != (void *)0x0) && (param_2 != (void *)0x0)) &&
     (memcpy(param_2,param_1,0x78), *(long *)((long)param_1 + 0x70) != 0)) {
    *(undefined4 *)((long)param_1 + 0xc) = 1;
    *(undefined8 *)((long)param_1 + 0x70) = 0;
  }
  return;
}




void FUN_019a1ddc(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int local_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_2c = 0;
  iVar3 = FUN_019a1e5c(*param_1,param_1[1],0,0,0,&local_2c,0);
  iVar1 = 4;
  if (iVar3 != 7 && iVar3 != 0 || local_2c == 0) {
    iVar1 = iVar3;
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}




void FUN_019a1e5c(int *param_1,ulong param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6
                 ,undefined4 *param_7,undefined8 *param_8)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  ulong uVar14;
  ulong uVar15;
  int *piVar16;
  int *piVar17;
  ulong uVar18;
  int *piVar19;
  ulong uVar20;
  uint uVar21;
  uint local_70;
  uint uStack_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_70 = 0;
  uStack_6c = 0;
  if (param_8 == (undefined8 *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(param_8 + 2);
  }
  uVar9 = 7;
  if ((param_1 == (int *)0x0) || (uVar20 = param_2 - 0xc, param_2 < 0xc)) goto LAB_019a225c;
  if (*param_1 == 0x46464952) {
    if ((param_1[2] == 0x50424557) && (param_1[1] - 0xcU < 0xffffffeb)) {
      uVar15 = (ulong)(uint)param_1[1];
      if (((iVar8 == 0) || (uVar15 <= param_2 - 8)) && (7 < uVar20)) {
        piVar19 = param_1 + 3;
        bVar4 = true;
        goto LAB_019a1ee8;
      }
LAB_019a2074:
      uVar9 = 7;
      goto LAB_019a225c;
    }
  }
  else {
    bVar4 = false;
    uVar15 = 0;
    piVar19 = param_1;
    uVar20 = param_2;
LAB_019a1ee8:
    if (*piVar19 != 0x58385056) {
      uVar12 = 0;
      uVar11 = 0;
      uVar7 = 0;
      bVar6 = false;
      uVar21 = 0;
      uVar10 = 0;
joined_r0x019a1f14:
      if (param_5 != (uint *)0x0) {
        *param_5 = uVar7 >> 4 & 1;
      }
      if (param_6 != (uint *)0x0) {
        *param_6 = uVar11;
      }
      if (param_7 != (undefined4 *)0x0) {
        *param_7 = 0;
      }
      local_70 = uVar21;
      uStack_6c = uVar10;
      if (((!bVar6) || (param_8 != (undefined8 *)0x0)) || (piVar16 = (int *)0x0, (uVar7 & 3) == 0))
      {
        piVar16 = (int *)0x0;
        if (3 < uVar20) {
          if ((bVar4 && bVar6) || ((!bVar4 && !bVar6 && (*piVar19 == 0x48504c41)))) {
            piVar16 = (int *)0x0;
            if (7 < uVar20) {
              uVar18 = 0;
              uVar14 = 0x16;
              piVar17 = (int *)0x0;
              do {
                uVar7 = piVar19[1];
                if (0xfffffff6 < uVar7) goto LAB_019a2258;
                uVar2 = uVar7 + 9 & 0xfffffffe;
                uVar14 = (ulong)(uVar2 + (int)uVar14);
                if ((bool)(bVar4 & uVar15 < uVar14)) goto LAB_019a2258;
                piVar16 = piVar17;
                if ((*piVar19 == 0x20385056) || (*piVar19 == 0x4c385056)) goto LAB_019a20a8;
                if (uVar20 < uVar2) break;
                uVar20 = uVar20 - uVar2;
                piVar16 = piVar19 + 2;
                uVar5 = (ulong)uVar7;
                if (*piVar19 != 0x48504c41) {
                  piVar16 = piVar17;
                  uVar5 = uVar18;
                }
                uVar18 = uVar5;
                piVar17 = piVar16;
                piVar19 = (int *)((long)piVar19 + (ulong)uVar2);
              } while (7 < uVar20);
            }
          }
          else {
            uVar18 = 0;
            piVar16 = (int *)0x0;
LAB_019a20a8:
            uVar7 = (uint)(*piVar19 == 0x4c385056);
            uVar14 = uVar20 - 8;
            if (7 < uVar20) {
              if ((*piVar19 == 0x4c385056) || (*piVar19 == 0x20385056)) {
                uVar20 = (ulong)(uint)piVar19[1];
                if ((0xb < uVar15) && (uVar15 - 0xc < uVar20)) goto LAB_019a2258;
                if ((iVar8 != 0) && (uVar14 < uVar20)) goto LAB_019a20c8;
                piVar19 = piVar19 + 2;
              }
              else {
                uVar7 = FUN_019a7090(piVar19,uVar20);
                uVar14 = uVar20;
              }
              if (0xfffffff6 < uVar20) goto LAB_019a2258;
              if ((param_7 != (undefined4 *)0x0) && (uVar11 == 0 && uVar12 == 0)) {
                uVar13 = 1;
                if (uVar7 != 0) {
                  uVar13 = 2;
                }
                *param_7 = uVar13;
              }
              if (uVar7 == 0) {
                if (9 < uVar14) {
                  iVar8 = FUN_019a5848(piVar19,uVar14,uVar20 & 0xffffffff,&uStack_6c,&local_70);
                  goto joined_r0x019a22dc;
                }
              }
              else if (4 < uVar14) {
                iVar8 = FUN_019a70c0(piVar19,uVar14,&uStack_6c,&local_70,param_5);
joined_r0x019a22dc:
                if (iVar8 == 0) goto LAB_019a2258;
                if ((bVar6) && ((uVar9 = 3, uVar10 != uStack_6c || (uVar21 != local_70))))
                goto LAB_019a225c;
                if (param_8 != (undefined8 *)0x0) {
                  *param_8 = param_1;
                  param_8[1] = param_2;
                  param_8[4] = piVar16;
                  param_8[5] = uVar18;
                  param_8[6] = uVar20;
                  param_8[7] = uVar15;
                  *(uint *)(param_8 + 8) = uVar7;
                  *(undefined4 *)((long)param_8 + 0x44) = 0;
                  param_8[2] = 0;
                  param_8[3] = (long)piVar19 - (long)param_1;
                }
                goto joined_r0x019a2338;
              }
            }
          }
        }
LAB_019a20c8:
        uVar9 = 7;
        if ((param_8 != (undefined8 *)0x0) || (!bVar6)) goto LAB_019a225c;
      }
joined_r0x019a2338:
      if (param_5 != (uint *)0x0) {
        *param_5 = *param_5 | (uint)(piVar16 != (int *)0x0);
      }
      if (param_3 != (uint *)0x0) {
        *param_3 = uStack_6c;
      }
      if (param_4 == (uint *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        *param_4 = local_70;
      }
      goto LAB_019a225c;
    }
    if (piVar19[1] == 10) {
      bVar6 = uVar20 < 0x12;
      uVar20 = uVar20 - 0x12;
      if (bVar6) goto LAB_019a2074;
      uVar10 = *(uint3 *)(piVar19 + 3) + 1;
      uVar21 = *(uint3 *)((long)piVar19 + 0xf) + 1;
      if (((ulong)uVar10 * (ulong)uVar21 >> 0x20 == 0) && (bVar4)) {
        pbVar1 = (byte *)(piVar19 + 2);
        uVar7 = (uint)*pbVar1;
        piVar19 = (int *)((long)piVar19 + 0x12);
        bVar6 = true;
        uVar11 = *pbVar1 >> 1 & 1;
        uVar12 = uVar7 & 1;
        goto joined_r0x019a1f14;
      }
    }
  }
LAB_019a2258:
  uVar9 = 3;
LAB_019a225c:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}

