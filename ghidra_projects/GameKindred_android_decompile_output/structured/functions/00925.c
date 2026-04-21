// functions/00925 — 31 functions
#include "libGameKindred.h"




void FUN_00925040(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 2);
    puVar2 = *(undefined4 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 2;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        lVar3 = lVar3 + -4;
        *puVar4 = *puVar5;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined4 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined4 **)(param_1 + 2) = puVar1;
  }
  return;
}




undefined1  [16] FUN_009250c0(long param_1,uint *param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined1 auVar7 [16];
  
  puVar4 = (undefined8 *)(param_1 + 8);
  puVar5 = puVar4;
  if ((undefined8 *)*puVar4 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar4;
    puVar5 = (undefined8 *)(param_1 + 8);
    do {
      while (puVar4 = puVar3, *param_2 < *(uint *)((long)puVar4 + 0x1c)) {
        puVar3 = (undefined8 *)*puVar4;
        puVar5 = puVar4;
        if ((undefined8 *)*puVar4 == (undefined8 *)0x0) goto LAB_00925138;
      }
      if (*param_2 <= *(uint *)((long)puVar4 + 0x1c)) break;
      puVar5 = puVar4 + 1;
      puVar3 = (undefined8 *)*puVar5;
    } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
  }
LAB_00925138:
  pvVar6 = (void *)*puVar5;
  bVar1 = pvVar6 == (void *)0x0;
  if (bVar1) {
    pvVar6 = operator_new(0x28);
    uVar2 = *(undefined4 *)*param_4;
    *(undefined8 *)((long)pvVar6 + 0x20) = 0;
    *(undefined4 *)((long)pvVar6 + 0x1c) = uVar2;
    FUN_00925194(param_1,puVar4,puVar5,pvVar6);
  }
  auVar7[8] = bVar1;
  auVar7._0_8_ = pvVar6;
  auVar7._9_7_ = 0;
  return auVar7;
}




void FUN_00925194(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_0090d468(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




void FUN_009251e8(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 * 0xc);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 * 0xc;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -0xc;
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar2 + 1);
        *puVar4 = *puVar2;
        puVar4 = (undefined8 *)((long)puVar4 + 0xc);
        puVar2 = (undefined8 *)((long)puVar2 + 0xc);
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




undefined8 FUN_0092527c(void)

{
  return 0;
}




undefined8 FUN_00925284(void)

{
  return 0;
}




uint FUN_0092528c(uint param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  uint local_40;
  uint uStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00da17a8();
  uVar2 = 0;
  if ((uVar3 & 1) != 0) {
    uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
    local_40 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
    uStack_3c = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = FUN_00925308(&local_40,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00925308(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort uStack_50;
  undefined1 auStack_4e [6];
  undefined4 local_48;
  ushort local_44 [2];
  undefined8 local_40;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_44[0] = 0xa00;
  local_44[1] = 0x8e04;
  local_40 = *param_1;
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_44;
    uVar5 = 0xc;
  }
  else {
    iVar3 = FUN_00ce2730(10);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_50 + lVar2);
    local_48 = 0;
    FUN_00ce2768((ulong)local_44 | 2,10,auStack_4e + lVar2,&local_48);
    *puVar6 = (ushort)local_48 >> 8 | (ushort)local_48 << 8;
  }
  uVar4 = FUN_0094271c(puVar6,uVar5);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_009253e0(byte param_1)

{
  long lVar1;
  uint uVar2;
  byte local_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30[0] = param_1 & 1;
  uVar2 = FUN_00925438(local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00925438(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_40 [2];
  undefined1 local_3c;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40[0] = 0x300;
  local_40[1] = 0x7b04;
  local_3c = *param_1;
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_40;
    uVar5 = 5;
  }
  else {
    iVar3 = FUN_00ce2730(3);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_50 + lVar2);
    local_44 = 0;
    FUN_00ce2768((ulong)local_40 | 2,3,auStack_4e + lVar2,&local_44);
    *puVar6 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  uVar4 = FUN_0094271c(puVar6,uVar5);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00925510(void)

{
  long lVar1;
  uint uVar2;
  undefined1 local_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30[0] = 0;
  uVar2 = FUN_00925564(local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00925564(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_40 [2];
  undefined1 local_3c;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40[0] = 0x300;
  local_40[1] = 0x5504;
  local_3c = *param_1;
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_40;
    uVar5 = 5;
  }
  else {
    iVar3 = FUN_00ce2730(3);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_50 + lVar2);
    local_44 = 0;
    FUN_00ce2768((ulong)local_40 | 2,3,auStack_4e + lVar2,&local_44);
    *puVar6 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  uVar4 = FUN_0094271c(puVar6,uVar5);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_0092563c(void)

{
  long lVar1;
  uint uVar2;
  undefined1 local_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30[0] = 0;
  uVar2 = FUN_00925690(local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00925690(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_40 [2];
  undefined1 local_3c;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40[0] = 0x300;
  local_40[1] = 0x5604;
  local_3c = *param_1;
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_40;
    uVar5 = 5;
  }
  else {
    iVar3 = FUN_00ce2730(3);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_50 + lVar2);
    local_44 = 0;
    FUN_00ce2768((ulong)local_40 | 2,3,auStack_4e + lVar2,&local_44);
    *puVar6 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  uVar4 = FUN_0094271c(puVar6,uVar5);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00925768(void)

{
  long lVar1;
  uint uVar2;
  undefined1 local_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30[0] = 0;
  uVar2 = FUN_009257bc(local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_009257bc(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_40 [2];
  undefined1 local_3c;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40[0] = 0x300;
  local_40[1] = 0x5704;
  local_3c = *param_1;
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_40;
    uVar5 = 5;
  }
  else {
    iVar3 = FUN_00ce2730(3);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_50 + lVar2);
    local_44 = 0;
    FUN_00ce2768((ulong)local_40 | 2,3,auStack_4e + lVar2,&local_44);
    *puVar6 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  uVar4 = FUN_0094271c(puVar6,uVar5);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00925894(void)

{
  long lVar1;
  uint uVar2;
  undefined1 local_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30[0] = 0;
  uVar2 = FUN_009258e8(local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_009258e8(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_40 [2];
  undefined1 local_3c;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40[0] = 0x300;
  local_40[1] = 0x5804;
  local_3c = *param_1;
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_40;
    uVar5 = 5;
  }
  else {
    iVar3 = FUN_00ce2730(3);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_50 + lVar2);
    local_44 = 0;
    FUN_00ce2768((ulong)local_40 | 2,3,auStack_4e + lVar2,&local_44);
    *puVar6 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  uVar4 = FUN_0094271c(puVar6,uVar5);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_009259c0(int param_1)

{
  long lVar1;
  uint uVar2;
  int local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30[0] = param_1 << 0x18;
  uVar2 = FUN_00925a1c(local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00925a1c(undefined4 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_40 [2];
  undefined4 uStack_3c;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_3c = *param_1;
  local_40[0] = 0x600;
  local_40[1] = 0x5d04;
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_40;
    uVar5 = 8;
  }
  else {
    iVar3 = FUN_00ce2730(6);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_50 + lVar2);
    local_44 = 0;
    FUN_00ce2768((ulong)local_40 | 2,6,auStack_4e + lVar2,&local_44);
    *puVar6 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  uVar4 = FUN_0094271c(puVar6,uVar5);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00925af0(uint param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  uint local_30;
  uint local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar3 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_30 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar2 = FUN_00e6a474(param_2);
  uVar3 = FUN_0091ed5c(param_2,uVar2,0x12345678);
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  local_2c = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar3 = FUN_00925b70(&local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00925b70(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort uStack_50;
  undefined1 auStack_4e [6];
  undefined4 local_48;
  ushort local_44 [2];
  undefined8 local_40;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_44[0] = 0xa00;
  local_44[1] = 0x5e04;
  local_40 = *param_1;
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_44;
    uVar5 = 0xc;
  }
  else {
    iVar3 = FUN_00ce2730(10);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_50 + lVar2);
    local_48 = 0;
    FUN_00ce2768((ulong)local_44 | 2,10,auStack_4e + lVar2,&local_48);
    *puVar6 = (ushort)local_48 >> 8 | (ushort)local_48 << 8;
  }
  uVar4 = FUN_0094271c(puVar6,uVar5);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00925c48(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  uint local_38 [2];
  uint local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  thunk_FUN_00d9ff34(local_38,param_1);
  uVar2 = (local_38[0] & 0xff00ff00) >> 8 | (local_38[0] & 0xff00ff) << 8;
  local_30[0] = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = FUN_00925cb0(local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00925cb0(undefined4 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_40 [2];
  undefined4 uStack_3c;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_3c = *param_1;
  local_40[0] = 0x600;
  local_40[1] = 0x5f04;
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_40;
    uVar5 = 8;
  }
  else {
    iVar3 = FUN_00ce2730(6);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_50 + lVar2);
    local_44 = 0;
    FUN_00ce2768((ulong)local_40 | 2,6,auStack_4e + lVar2,&local_44);
    *puVar6 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  uVar4 = FUN_0094271c(puVar6,uVar5);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00925d84(undefined1 param_1)

{
  long lVar1;
  uint uVar2;
  undefined1 local_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30[0] = param_1;
  uVar2 = FUN_00925dd8(local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00925dd8(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_40 [2];
  undefined1 local_3c;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40[0] = 0x300;
  local_40[1] = 0x6004;
  local_3c = *param_1;
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_40;
    uVar5 = 5;
  }
  else {
    iVar3 = FUN_00ce2730(3);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_50 + lVar2);
    local_44 = 0;
    FUN_00ce2768((ulong)local_40 | 2,3,auStack_4e + lVar2,&local_44);
    *puVar6 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  uVar4 = FUN_0094271c(puVar6,uVar5);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00925eb0(undefined1 param_1)

{
  long lVar1;
  uint uVar2;
  undefined1 local_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30[0] = param_1;
  uVar2 = FUN_00925f04(local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00925f04(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_40 [2];
  undefined1 local_3c;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40[0] = 0x300;
  local_40[1] = 0x6104;
  local_3c = *param_1;
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_40;
    uVar5 = 5;
  }
  else {
    iVar3 = FUN_00ce2730(3);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_50 + lVar2);
    local_44 = 0;
    FUN_00ce2768((ulong)local_40 | 2,3,auStack_4e + lVar2,&local_44);
    *puVar6 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  uVar4 = FUN_0094271c(puVar6,uVar5);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00925fdc(undefined1 param_1)

{
  long lVar1;
  uint uVar2;
  undefined1 local_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30[0] = param_1;
  uVar2 = FUN_00926030(local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint thunk_FUN_0092563c(void)

{
  long lVar1;
  uint uVar2;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  auStack_30[0] = 0;
  uVar2 = FUN_00925690(auStack_30,0);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint thunk_FUN_00925894(void)

{
  long lVar1;
  uint uVar2;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  auStack_30[0] = 0;
  uVar2 = FUN_009258e8(auStack_30,0);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

