// functions/00bba — 15 functions
#include "libGameKindred.h"




void thunk_FUN_00bbac0c(long param_1)

{
  FUN_00f01a4c(param_1 + 0x4100,1);
  FUN_00f023ec(param_1 + 0x908,param_1 + 0x4100,1);
  if (*(char *)(param_1 + 0x6d04) != '\0') {
    return;
  }
  FUN_00bba994(param_1);
  return;
}




void thunk_FUN_00bbacb4(long param_1)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  
  *(undefined1 *)(param_1 + 0x1d858) = 1;
  pbVar4 = (byte *)FUN_00ac9cd0(param_1 + 0xde28);
  uVar1 = (ulong)(*pbVar4 >> 1);
  if ((*pbVar4 & 1) != 0) {
    uVar1 = *(ulong *)(pbVar4 + 8);
  }
  bVar2 = false;
  if (uVar1 == 0xb) {
    iVar3 = FUN_0090d610(pbVar4,0,0xffffffffffffffff,"invite_only",0xb);
    bVar2 = iVar3 == 0;
  }
  *(bool *)(param_1 + 0x1d768) = bVar2;
  return;
}




void thunk_FUN_00bbad38(long param_1)

{
  FUN_00f01a4c(param_1 + 0xdb50,1);
  FUN_00f023ec(param_1 + 0x908,param_1 + 0xdb50,1);
  if (*(char *)(param_1 + 0x10754) != '\0') {
    return;
  }
  FUN_00bba994(param_1);
  return;
}




void FUN_00bba958(long param_1)

{
  FUN_00bba994();
  FUN_00ac9484(param_1 + 0x43d8,0);
  FUN_00ac9484(param_1 + 0xde28,0);
  return;
}




void FUN_00bba994(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  FUN_00f01a4c(param_1 + 0x13c,1);
  FUN_00f01a4c(param_1 + 0x820,1);
  FUN_00f01a4c(param_1 + 0xda2,1);
  FUN_00f01a4c(param_1 + 0x1486,1);
  FUN_00f01a4c(param_1 + 0x1b6a,1);
  lVar3 = 3;
  plVar2 = param_1 + 0x20ec;
  do {
    FUN_00f01a4c(plVar2,1);
    lVar3 = lVar3 + -1;
    plVar2 = plVar2 + 0x7b2;
  } while (lVar3 != 0);
  FUN_00f01a4c(param_1 + 0x3802,1);
  plVar2 = param_1 + 0x121;
  FUN_00f023ec(plVar2,param_1 + 0x13c,1);
  FUN_00f023ec(plVar2,param_1 + 0x820,1);
  FUN_00f023ec(plVar2,param_1 + 0xda2,1);
  FUN_00f023ec(plVar2,param_1 + 0x1486,1);
  FUN_00f023ec(plVar2,param_1 + 0x1b6a,1);
  lVar3 = 3;
  plVar1 = param_1 + 0x20ec;
  do {
    FUN_00f023ec(plVar2,plVar1,1);
    lVar3 = lVar3 + -1;
    plVar1 = plVar1 + 0x7b2;
  } while (lVar3 != 0);
  FUN_00f023ec(plVar2,param_1 + 0x3802,1);
                    /* WARNING: Could not recover jumptable at 0x00bbab10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1);
  return;
}




void FUN_00bbab14(long param_1,ulong param_2)

{
  if ((param_2 & 1) == 0) {
    if (*(float *)(param_1 + 0x38c) != 0.0) {
      *(undefined4 *)(param_1 + 0x38c) = 0;
      FUN_0091ada4(param_1 + 0x348);
    }
    if (*(char *)(param_1 + 0x1d858) != '\0') {
      FUN_00bb9ce8(param_1,param_1 + 0x1d770);
      return;
    }
  }
  return;
}




void FUN_00bbab78(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e6b5ec(*(undefined4 *)(param_1 + 0x40f8),0);
  *(undefined4 *)(param_1 + 0x1d688) = uVar1;
  *(undefined1 *)(param_1 + 0x1d858) = 1;
  return;
}




void FUN_00bbabc0(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x1d858) = 1;
  uVar1 = FUN_00ac9cd0(param_1 + 0x43d8);
  FUN_008fce60(param_1 + 0x1d690,uVar1);
  return;
}




void FUN_00bbac0c(long param_1)

{
  FUN_00f01a4c(param_1 + 0x4100,1);
  FUN_00f023ec(param_1 + 0x908,param_1 + 0x4100,1);
  if (*(char *)(param_1 + 0x6d04) != '\0') {
    return;
  }
  FUN_00bba994(param_1);
  return;
}




void FUN_00bbac68(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x1d858) = 1;
  uVar1 = FUN_00b0423c(param_1 + 0x6fe8);
  FUN_008fce60(param_1 + 0x1d6a8,uVar1);
  return;
}




void FUN_00bbacb4(long param_1)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  
  *(undefined1 *)(param_1 + 0x1d858) = 1;
  pbVar4 = (byte *)FUN_00ac9cd0(param_1 + 0xde28);
  uVar1 = (ulong)(*pbVar4 >> 1);
  if ((*pbVar4 & 1) != 0) {
    uVar1 = *(ulong *)(pbVar4 + 8);
  }
  bVar2 = false;
  if (uVar1 == 0xb) {
    iVar3 = FUN_0090d610(pbVar4,0,0xffffffffffffffff,"invite_only",0xb);
    bVar2 = iVar3 == 0;
  }
  *(bool *)(param_1 + 0x1d768) = bVar2;
  return;
}




void FUN_00bbad38(long param_1)

{
  FUN_00f01a4c(param_1 + 0xdb50,1);
  FUN_00f023ec(param_1 + 0x908,param_1 + 0xdb50,1);
  if (*(char *)(param_1 + 0x10754) != '\0') {
    return;
  }
  FUN_00bba994(param_1);
  return;
}




void FUN_00bbad98(long param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x1d858) = 1;
  iVar1 = *(int *)(param_1 + 0xdb48) * 3 + -3;
  if (*(int *)(param_1 + 0xdb48) == 0) {
    iVar1 = -1;
  }
  *(int *)(param_1 + 0x1d68c) = iVar1;
  return;
}




void FUN_00bbadd0(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar4 = param_1 + (long)param_3 * 0x3d90;
  uVar2 = FUN_00f08be8(lVar4 + ((ulong)*(byte *)(lVar4 + 0x10e70) & 1) * 0x130 + 0x10ce0);
  thunk_FUN_00e7051c(&local_48,uVar2);
  *(undefined1 *)(param_1 + 0x1d858) = 1;
  if (param_3 == 2) {
    uVar3 = 0xd708;
  }
  else if (param_3 == 1) {
    uVar3 = 0xd6f0;
  }
  else {
    if (param_3 != 0) goto LAB_00bbae7c;
    uVar3 = 55000;
  }
  FUN_00e70a24(&local_48,param_1 + (ulong)(uVar3 | 0x10000));
LAB_00bbae7c:
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bbaeb4(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar6 = param_1 + (long)param_3 * 0x3d90;
  lVar1 = lVar6 + 0x127f8;
  uVar4 = FUN_00f08be8(lVar1 + ((ulong)*(byte *)(lVar6 + 0x12b68) & 1) * 0x130 + 0x1e0);
  thunk_FUN_00e7051c(&local_58,uVar4);
  *(undefined1 *)(param_1 + 0x1d858) = 1;
  FUN_00e71810(&local_68,&local_58,0,7);
  FUN_00e71810(&local_78,&local_58,0,8);
  FUN_00e705c8(&local_88,"http://");
  uVar5 = FUN_00e70b88(&local_68,&local_88);
  uVar3 = 0;
  if ((uVar5 & 1) != 0) {
    FUN_00e705c8(&local_98,"https://");
    uVar3 = FUN_00e70b88(&local_78,&local_98);
    if (local_90 != (void *)0x0) {
      operator_delete__(local_90);
      local_98 = 0;
      local_90 = (void *)0x0;
    }
  }
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = 0;
    local_80 = (void *)0x0;
  }
  if ((uVar3 & 1) != 0) {
    FUN_00e705c8(&local_88,"http://");
    FUN_00e70c34(&local_88,&local_58);
    FUN_00910394(&local_58,&local_88);
    FUN_00abc73c(lVar1,&local_58);
    if (local_80 != (void *)0x0) {
      operator_delete__(local_80);
      local_88 = 0;
      local_80 = (void *)0x0;
    }
  }
  if (param_3 == 2) {
    uVar3 = 0xd750;
  }
  else if (param_3 == 1) {
    uVar3 = 0xd738;
  }
  else {
    if (param_3 != 0) goto LAB_00bbb040;
    uVar3 = 0xd720;
  }
  FUN_00e70a24(&local_58,param_1 + (ulong)(uVar3 | 0x10000));
LAB_00bbb040:
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = 0;
    local_70 = (void *)0x0;
  }
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

