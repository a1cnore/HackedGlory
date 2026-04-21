// functions/00998 — 56 functions
#include "libGameKindred.h"




void FUN_009980b0(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_009980dc(DAT_02e3efb8);
  return;
}




void * FUN_009980dc(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  void *__s;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    __s = (void *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x4c2d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c2d0) = uVar2;
    __s = (void *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    memset(__s,0,0x50);
    FUN_0099b698(__s);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return __s;
}




void FUN_009981b4(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_009981e0(DAT_02e3efb8);
  return;
}




void * FUN_009981e0(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  void *__s;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    __s = (void *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x4c2d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c2d0) = uVar2;
    __s = (void *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    memset(__s,0,0x48);
    FUN_0099b9c8(__s);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return __s;
}




void FUN_009982b8(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_009982e4(DAT_02e3efb8);
  return;
}




undefined8 * FUN_009982e4(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x4c2d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c2d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    FUN_0099afa0(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_009983b8(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_009983e4(DAT_02e3efb8);
  return;
}




undefined8 * FUN_009983e4(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x4c2d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c2d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_0099adec(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_009984b8(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_009984e4(DAT_02e3efb8);
  return;
}




undefined8 * FUN_009984e4(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x4c2d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c2d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_0099acf4(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_009985b8(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_009985e4(DAT_02e3efb8);
  return;
}




undefined8 * FUN_009985e4(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x4c2d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c2d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_0099aee0(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_009986b8(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_009986e4(DAT_02e3efb8);
  return;
}




undefined8 * FUN_009986e4(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x4c2d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c2d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_0099b8e4(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_009987b8(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_009987e4(DAT_02e3efb8);
  return;
}




undefined8 * FUN_009987e4(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x4c2d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c2d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_0099abd4(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_009988b8(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_009988e4(DAT_02e3efb8);
  return;
}




undefined8 * FUN_009988e4(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x4c2d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c2d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_0099ac50(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_009989b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027be818;
  DAT_02e3efb8 = 0;
  return;
}




void FUN_009989d4(undefined8 param_1)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc(0);
  }
  FUN_00998a10(DAT_02e3efb8,param_1);
  return;
}




void FUN_00998a10(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  
  (**(code **)*param_2)(param_2);
  *(int *)(param_1 + 0x4c2e0) = *(int *)(param_1 + 0x4c2e0) + -1;
  iVar3 = (int)(param_1 + 0x10);
  if (*(short *)(param_1 + 0x4c2d0) == -1) {
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 3) * 0x4ec5;
    *(short *)(param_1 + 0x4c2d2) = sVar2;
    *(short *)(param_1 + 0x4c2d0) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x4c2d2);
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 3) * 0x4ec5;
    *(short *)(param_1 + 0x4c2d2) = sVar2;
    *(short *)(param_1 + 0x10 + (ulong)uVar1 * 0x68) = sVar2;
  }
  *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + -1;
  return;
}




void FUN_00998adc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027be818;
  DAT_02e3efb8 = 0;
  operator_delete(param_1);
  return;
}




void FUN_00998afc(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00998b20(void)

{
  return;
}




void FUN_00998b24(void)

{
  return;
}




void FUN_00998b28(void)

{
  return;
}




undefined1  [16] FUN_00998b2c(void)

{
  return ZEXT816(0);
}




undefined8 FUN_00998b34(void)

{
  return 0;
}




undefined8 FUN_00998b3c(void)

{
  return 0;
}




undefined8 FUN_00998b44(void)

{
  return 0;
}




undefined8 FUN_00998b4c(void)

{
  return 0;
}




void FUN_00998b5c(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00998b88(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00998bb4(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00998bd8(void)

{
  return;
}




void FUN_00998be4(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00998c0c(long param_1)

{
  FUN_00d9a258(param_1 + 8);
  return;
}




void FUN_00998c14(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_027beba8;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  return;
}




void FUN_00998c48(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x24) = param_2 & 1;
  return;
}




undefined8 FUN_00998c54(long param_1)

{
  FUN_009253e0(*(undefined1 *)(param_1 + 0x24));
  return 1;
}




void FUN_00998c70(void)

{
  return;
}




void FUN_00998c74(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_027bec30;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  return;
}




void FUN_00998ca8(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x24) = param_2 & 1;
  return;
}




undefined8 FUN_00998cb4(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d05f10(auStack_48,*(undefined1 *)(param_1 + 0x24));
  FUN_00ce20fc(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00998d0c(void)

{
  return;
}




void FUN_00998d10(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_027becb8;
  param_1[5] = 0;
  return;
}




void FUN_00998d44(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




undefined8 FUN_00998d4c(long param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  char *__s2;
  char *__s1;
  undefined8 uVar5;
  
  uVar1 = FUN_00e6a474("__HUD__");
  uVar1 = FUN_0091ed5c("__HUD__",uVar1,0x12345678);
  puVar3 = (undefined8 *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar1);
  uVar5 = *puVar3;
  lVar4 = FUN_009c7448(uVar5);
  if (lVar4 == 0) {
LAB_00998dd4:
    uVar5 = 2;
  }
  else {
    __s1 = *(char **)(param_1 + 0x28);
    if (__s1 != (char *)0x0) {
      __s2 = (char *)FUN_009c7448(uVar5);
      iVar2 = strcmp(__s1,__s2);
      if (iVar2 != 0) goto LAB_00998dd4;
    }
    uVar5 = 1;
  }
  return uVar5;
}




void FUN_00998df0(void)

{
  return;
}




void FUN_00998df4(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_027bed40;
  param_1[5] = 0;
  return;
}




void FUN_00998e28(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




undefined8 FUN_00998e30(long param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  char *__s2;
  char *__s1;
  undefined8 uVar5;
  
  uVar1 = FUN_00e6a474("__HUD__");
  uVar1 = FUN_0091ed5c("__HUD__",uVar1,0x12345678);
  puVar3 = (undefined8 *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar1);
  uVar5 = *puVar3;
  lVar4 = FUN_009c7458(uVar5);
  if (lVar4 == 0) {
LAB_00998eb8:
    uVar5 = 2;
  }
  else {
    __s1 = *(char **)(param_1 + 0x28);
    if (__s1 != (char *)0x0) {
      __s2 = (char *)FUN_009c7458(uVar5);
      iVar2 = strcmp(__s1,__s2);
      if (iVar2 != 0) goto LAB_00998eb8;
    }
    uVar5 = 1;
  }
  return uVar5;
}




void FUN_00998ed4(void)

{
  return;
}




void FUN_00998ed8(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_027bedc8;
  param_1[5] = 0;
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfc;
  return;
}




void FUN_00998f18(long param_1,undefined8 param_2,byte param_3,byte param_4)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(byte *)(param_1 + 0x30) = param_3 & 1 | (param_4 & 1) << 1 | *(byte *)(param_1 + 0x30) & 0xfc;
  return;
}




undefined8 FUN_00998f3c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  code *local_78;
  long lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00f00438(*(undefined8 *)(param_1 + 0x28));
  lStack_70 = param_1;
  local_58 = param_2;
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    local_50 = DAT_03210f58;
    local_78 = FUN_00999044;
    local_68 = 0;
    uStack_60 = 0;
    FUN_009693a0(lVar2 + 8,&local_78);
    puVar3 = &DAT_03210f84;
  }
  else {
    local_50 = DAT_03210f60;
    local_78 = FUN_00999044;
    local_68 = 0;
    uStack_60 = 0;
    FUN_009693a0(lVar2 + 8,&local_78);
    puVar3 = &DAT_03210f8c;
  }
  local_50 = *puVar3;
  local_78 = FUN_00999044;
  local_68 = 0;
  uStack_60 = 0;
  lStack_70 = param_1;
  local_58 = param_2;
  FUN_009693a0(lVar2 + 8,&local_78);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

