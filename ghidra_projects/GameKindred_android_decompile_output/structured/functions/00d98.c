// functions/00d98 — 53 functions
#include "libGameKindred.h"




void FUN_00d98024(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_00d66d28(*param_2);
  lVar3 = FUN_00d9f258(uVar2,param_1 + 0x20);
  if (lVar3 != 0) {
    uVar1 = FUN_00d98098(param_1 + 0x10,param_2,uVar2);
    *(undefined4 *)(param_1 + 0x24) = uVar1;
    FUN_00d6e568(lVar3,uVar1);
    return;
  }
  return;
}




ulong FUN_00d98098(uint *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  uint *puVar4;
  undefined8 uVar5;
  
  uVar2 = (ulong)param_1[2];
  switch(uVar2) {
  case 0:
    break;
  case 1:
    uVar2 = (ulong)*param_1;
    break;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x00d980f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)param_1)();
    return uVar2;
  case 3:
    UNRECOVERED_JUMPTABLE = *(code **)param_1;
    FUN_00d42698(param_2);
                    /* WARNING: Could not recover jumptable at 0x00d98118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x00d98130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)param_1)(param_2);
    return uVar2;
  case 5:
                    /* WARNING: Could not recover jumptable at 0x00d9814c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)param_1)(param_2,param_3);
    return uVar2;
  case 6:
    plVar3 = (long *)FUN_00d427bc(param_2);
    uVar2 = 0;
    if (plVar3 != (long *)0x0) {
      uVar5 = *(undefined8 *)param_1;
      uVar1 = FUN_00e6a474(uVar5);
      uVar1 = FUN_0091ed5c(uVar5,uVar1,0x12345678);
      puVar4 = (uint *)(**(code **)(*plVar3 + 0x18))(plVar3,uVar1);
      uVar2 = (ulong)*puVar4;
    }
    break;
  default:
    FUN_00e6a2fc(0);
    uVar2 = 0;
  }
  return uVar2;
}




void FUN_00d981a8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_00d66d28(*param_2);
  lVar2 = FUN_00d9f258(uVar1,param_1 + 0x20);
  if (lVar2 != 0) {
    FUN_00d6e568(lVar2,-(uint)*(byte *)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}




void FUN_00d981ec(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = FUN_00d66d28(*param_2);
  lVar4 = FUN_00d9f258(uVar3,param_1 + 0x20);
  if (lVar4 != 0) {
    iVar1 = *(int *)(param_1 + 0x24);
    iVar2 = FUN_00d98098(param_1 + 0x10,param_2,uVar3);
    *(int *)(param_1 + 0x24) = iVar2;
    if (*(char *)(param_1 + 0x28) != '\0') {
      iVar2 = ((iVar2 + iVar1) - (uint)*(byte *)(lVar4 + 0x68)) - (int)*(char *)(lVar4 + 0x69);
      *(int *)(param_1 + 0x24) = iVar2;
    }
    FUN_00d6e568(lVar4,iVar2 - iVar1);
    return;
  }
  return;
}




void FUN_00d98290(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_0281f098;
  *(undefined2 *)(param_1 + 5) = 0;
  return;
}




void FUN_00d982b4(long param_1,undefined8 param_2,undefined8 *param_3,byte param_4)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_3 + 1);
  uVar1 = *param_3;
  *(byte *)(param_1 + 0x28) = param_4 & 1;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}




void FUN_00d982d4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined2 *)(param_1 + 0x28) = 0x101;
  return;
}




void FUN_00d982e4(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  uint uVar8;
  uint local_78 [12];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_00d66d28(*param_2);
    lVar6 = *(long *)(lVar5 + 0x18);
    while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_02e3ef78))) {
      lVar6 = *(long *)(lVar6 + 0x20);
    }
    uVar2 = FUN_00d5401c(lVar6,*(undefined8 *)(param_1 + 0x10));
    if (*(char *)(param_1 + 0x29) == '\0') {
      uVar3 = FUN_00d98098(param_1 + 0x18,param_2,0);
    }
    else {
      pbVar7 = *(byte **)(param_1 + 0x10);
      if (pbVar7 == (byte *)0x0) {
        local_78[0] = 0;
      }
      else {
        uVar8 = (uint)*pbVar7;
        local_78[0] = 0x811c9dc5;
        if (*pbVar7 != 0) {
          do {
            pbVar7 = pbVar7 + 1;
            local_78[0] = (local_78[0] ^ uVar8) * 0x1000193;
            uVar8 = (uint)*pbVar7;
          } while (*pbVar7 != 0);
        }
      }
      uVar3 = FUN_00d98410(param_2,local_78);
    }
    FUN_00d040ec(local_78,*(undefined4 *)(lVar5 + 0x260),uVar2,uVar3,*(undefined1 *)(param_1 + 0x28)
                );
    FUN_00ce20fc(local_78);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d98410(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  FUN_00d66d28(*param_1);
  lVar2 = FUN_00d9eb64();
  if (lVar2 != 0) {
    uVar1 = FUN_00d5412c(lVar2,*param_2);
    FUN_00d53a44(lVar2,uVar1);
    return;
  }
  return;
}




void FUN_00d98460(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281f0d8;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(byte *)((long)param_1 + 0x2c) = *(byte *)((long)param_1 + 0x2c) & 0xf8;
  return;
}




void FUN_00d98490(long param_1,undefined8 param_2,undefined8 *param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(param_1 + 0x18) = *param_3;
  return;
}




void FUN_00d984a8(long param_1)

{
  *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) | 1;
  return;
}




void FUN_00d984b8(long param_1)

{
  *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) | 2;
  return;
}




void FUN_00d984c8(long param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) | 4;
  return;
}




void FUN_00d984e0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d66d28(*param_2);
  FUN_00d9859c(param_1,param_2);
  FUN_00d9852c(param_1,uVar1);
  return;
}




void FUN_00d9852c(float param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00d9eb38(param_3);
  uVar1 = FUN_00d5401c(uVar2,*(undefined8 *)(param_2 + 0x10));
  if ((*(byte *)(param_2 + 0x2c) >> 2 & 1) == 0) {
    FUN_00d53bbc(uVar2,uVar1,(int)(param_1 - *(float *)(param_2 + 0x28)));
  }
  else {
    FUN_00d53bf0(param_1 / *(float *)(param_2 + 0x28),uVar2,uVar1);
  }
  *(float *)(param_2 + 0x28) = param_1;
  return;
}




undefined1  [16] FUN_00d9859c(long param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined1 auVar5 [16];
  
  uVar3 = FUN_00d66d28(*param_2);
  auVar5 = FUN_00a83478(param_1 + 0x18,param_2,uVar3);
  bVar1 = *(byte *)(param_1 + 0x2c);
  if ((bVar1 & 1) != 0) {
    uVar2 = FUN_00d66cf4(*param_2);
    bVar1 = *(byte *)(param_1 + 0x2c);
    auVar5 = ZEXT416((uint)(auVar5._0_4_ * (float)uVar2));
  }
  if ((bVar1 >> 1 & 1) != 0) {
    fVar4 = -0.0;
    if ((bVar1 & 4) != 0) {
      fVar4 = 1.0;
    }
    auVar5 = ZEXT416((uint)(fVar4 - auVar5._0_4_));
  }
  return auVar5;
}




void FUN_00d9862c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d66d28(*param_2);
  uVar2 = 0;
  if ((*(byte *)(param_1 + 0x2c) & 4) != 0) {
    uVar2 = 0x3f800000;
  }
  FUN_00d9852c(uVar2,param_1,uVar1);
  return;
}




void FUN_00d98670(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d66d28(*param_2);
  FUN_00d9859c(param_1,param_2);
  FUN_00d9852c(param_1,uVar1);
  return;
}




void FUN_00d986bc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_0281f118;
  param_1[5] = 0;
  return;
}




void FUN_00d986e0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00d986e8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 1);
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x2c) = 1;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}




void FUN_00d98704(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 1);
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}




void thunk_FUN_00d98720(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_00d66d28(*param_2);
  uVar3 = FUN_00a83478(param_1 + 0x18,param_2,uVar2);
  uVar2 = FUN_00d66d28(*param_2);
  uVar1 = FUN_00d588cc(uVar2,*(undefined8 *)(param_1 + 0x10));
  uVar2 = FUN_00d9eb38(uVar2);
  if (*(int *)(param_1 + 0x2c) == 0) {
    FUN_00d53be4((float)uVar3 - *(float *)(param_1 + 0x28),uVar2,uVar1);
    *(float *)(param_1 + 0x28) = (float)uVar3;
  }
  else if (*(int *)(param_1 + 0x2c) == 1) {
    FUN_00d53bcc(uVar3,uVar2,uVar1);
    return;
  }
  return;
}




void FUN_00d98720(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_00d66d28(*param_2);
  uVar3 = FUN_00a83478(param_1 + 0x18,param_2,uVar2);
  uVar2 = FUN_00d66d28(*param_2);
  uVar1 = FUN_00d588cc(uVar2,*(undefined8 *)(param_1 + 0x10));
  uVar2 = FUN_00d9eb38(uVar2);
  if (*(int *)(param_1 + 0x2c) == 0) {
    FUN_00d53be4((float)uVar3 - *(float *)(param_1 + 0x28),uVar2,uVar1);
    *(float *)(param_1 + 0x28) = (float)uVar3;
  }
  else if (*(int *)(param_1 + 0x2c) == 1) {
    FUN_00d53bcc(uVar3,uVar2,uVar1);
    return;
  }
  return;
}




void thunk_FUN_00d98720(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_00d66d28(*param_2);
  uVar3 = FUN_00a83478(param_1 + 0x18,param_2,uVar2);
  uVar2 = FUN_00d66d28(*param_2);
  uVar1 = FUN_00d588cc(uVar2,*(undefined8 *)(param_1 + 0x10));
  uVar2 = FUN_00d9eb38(uVar2);
  if (*(int *)(param_1 + 0x2c) == 0) {
    FUN_00d53be4((float)uVar3 - *(float *)(param_1 + 0x28),uVar2,uVar1);
    *(float *)(param_1 + 0x28) = (float)uVar3;
  }
  else if (*(int *)(param_1 + 0x2c) == 1) {
    FUN_00d53bcc(uVar3,uVar2,uVar1);
    return;
  }
  return;
}




void FUN_00d987d8(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00d66d28(*param_2);
  uVar1 = FUN_00d588cc(uVar2,*(undefined8 *)(param_1 + 0x10));
  uVar2 = FUN_00d9eb38(uVar2);
  if (*(int *)(param_1 + 0x2c) == 0) {
    FUN_00d53be4(-*(float *)(param_1 + 0x28),uVar2,uVar1);
  }
  else if (*(int *)(param_1 + 0x2c) == 1) {
    FUN_00d53bd8(uVar2,uVar1);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}




void FUN_00d98850(undefined8 *param_1)

{
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_0281f158;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00d9886c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}




void FUN_00d98874(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}




void FUN_00d98880(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    (**(code **)(param_1 + 0x20))(*param_2);
  }
  uVar1 = FUN_00d66d28(*param_2);
  FUN_00d59fb0(uVar1,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}




void FUN_00d988c4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d66d28(*param_2);
  FUN_00d59fb0(uVar1,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10));
  return;
}




void FUN_00d988f0(long *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x00d98928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,param_2);
  return;
}




void FUN_00d9892c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x428) != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x428) + 0x28);
  }
  *param_2 = uVar1;
  return;
}




void FUN_00d98940(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00d6a1f8(*param_1);
  *param_2 = uVar1;
  param_2[1] = 0;
  uVar1 = FUN_00d6a25c(*param_1);
  param_2[2] = uVar1;
  return;
}




void FUN_00d98994(undefined8 *param_1)

{
  FUN_00d6a1f8(*param_1);
  return;
}




void FUN_00d9899c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281f198;
  param_1[1] = 0;
  param_1[2] = &PTR_FUN_0281f2c8;
  FUN_00d9ff84(param_1 + 3,0xffffffff);
  *(undefined8 *)((long)param_1 + 0x26) = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0xffffffff;
  return;
}




void FUN_00d98a08(long param_1)

{
  *(undefined4 *)(param_1 + 0x48) = 1;
  return;
}




long FUN_00d98a14(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return param_1 + 0x10;
}




void FUN_00d98a24(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d9ff84(local_40,0xffffffff);
  if (*(int *)(param_1 + 0x18) == local_40[0]) {
    uVar2 = FUN_00d67b1c(*param_2);
    *(undefined4 *)(param_1 + 0x18) = uVar2;
  }
  if (*(int *)(param_1 + 0x48) == 0) {
    uVar3 = FUN_00d66d28(*param_2);
  }
  else {
    uVar3 = FUN_00d426b0();
  }
  FUN_00d98ac8(param_1 + 0x10,param_2,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d98ac8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_90 [24];
  undefined1 local_78;
  ulong local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(char *)(param_1 + 0x1d) != '\0') && (uVar2 = FUN_00ceab48(), (uVar2 & 1) == 0))
  goto LAB_00d98c50;
  uStack_48 = *(undefined8 *)(param_1 + 0x28);
  local_50 = *(ulong *)(param_1 + 0x20);
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
    switch(*(undefined4 *)(param_1 + 0x18)) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      (**(code **)(param_1 + 0x30))(param_2,&local_50);
    }
  }
  FUN_00d04aec(auStack_90,*(undefined4 *)(param_3 + 0x260),*(undefined4 *)(param_1 + 8),
               *(undefined8 *)(param_1 + 0x10));
  if (*(int *)(param_1 + 0xc) != -1) {
    FUN_00d04b90(auStack_90);
  }
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 1:
    FUN_00d04d2c(local_50 & 0xffffffff,auStack_90);
    break;
  case 2:
    FUN_00d04d3c(auStack_90,local_50 & 0xffffffff);
    break;
  case 3:
    uVar2 = local_50;
LAB_00d98c04:
    uVar2 = uVar2 & 0xffffffff;
    goto LAB_00d98c14;
  case 4:
    FUN_00d04d54(auStack_90,local_50 & 0xff);
    break;
  case 5:
    FUN_00d04d68(auStack_90,&local_50);
    break;
  case 6:
    uVar2 = FUN_00ceab48();
    if ((uVar2 & 1) != 0) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
      goto LAB_00d98c04;
    }
    uVar2 = 0xffffffff;
LAB_00d98c14:
    FUN_00d04d48(auStack_90,uVar2);
  }
  uVar2 = FUN_00ceab48();
  if (((uVar2 & 1) == 0) ||
     ((*(char *)(param_1 + 0x1d) == '\0' && (uVar2 = FUN_00ceab48(), (uVar2 & 1) != 0)))) {
    local_78 = 1;
  }
  if (*(char *)(param_1 + 0x1c) != '\0') {
    FUN_00d04b98(auStack_90);
  }
  FUN_00ce20fc(auStack_90);
LAB_00d98c50:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d98c78(long param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_01bc8f90;
  if (*(long *)(param_1 + 0x428) != 0) {
    puVar1 = (undefined4 *)(*(long *)(param_1 + 0x428) + 0x18);
  }
  *param_2 = *puVar1;
  return;
}




void FUN_00d98c9c(long param_1,undefined4 *param_2)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_00d9d984(param_1 + 8);
  if (iVar1 == 0) {
    puVar3 = &DAT_01bc8f90;
  }
  else {
    lVar2 = FUN_00d9d9a0(param_1 + 8,0);
    puVar3 = (undefined4 *)(lVar2 + 0x260);
  }
  *param_2 = *puVar3;
  return;
}




void FUN_00d98cec(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_009bc24c();
  *param_2 = uVar1;
  return;
}




void FUN_00d98d10(long param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(*(long *)(param_1 + 0x420) + 0x10);
  return;
}




void FUN_00d98d20(long param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(*(long *)(param_1 + 0x420) + 8);
  return;
}




long FUN_00d98d30(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return param_1 + 0x10;
}




void FUN_00d98d40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d5048c(param_2);
  FUN_009837bc(param_1 + 0x10,param_2,uVar1);
  return;
}




long FUN_00d98d74(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return param_1 + 0x18;
}




void FUN_00d98d84(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_0281f1d8;
  param_1[1] = 0;
  param_1[3] = &PTR_FUN_0281f2e0;
  FUN_00d9ff84(param_1 + 4,0xffffffff);
  *(undefined8 *)((long)param_1 + 0x2e) = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0xffffffff;
  param_1[7] = 0;
  return;
}




void FUN_00d98df0(long param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}




void FUN_00d98dfc(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    lVar1 = FUN_00d80f68(*param_2);
  }
  else {
    lVar1 = param_2[1];
  }
  if (lVar1 != 0) {
    FUN_00d98e50(param_1 + 0x18,param_2,lVar1);
    return;
  }
  return;
}




void FUN_00d98e50(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_90 [24];
  undefined1 local_78;
  ulong local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(char *)(param_1 + 0x1d) != '\0') && (uVar2 = FUN_00ceab48(), (uVar2 & 1) == 0))
  goto LAB_00d98fd8;
  uStack_48 = *(undefined8 *)(param_1 + 0x28);
  local_50 = *(ulong *)(param_1 + 0x20);
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
    switch(*(undefined4 *)(param_1 + 0x18)) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      (**(code **)(param_1 + 0x30))(param_2,&local_50);
    }
  }
  FUN_00d04aec(auStack_90,*(undefined4 *)(param_3 + 0x260),*(undefined4 *)(param_1 + 8),
               *(undefined8 *)(param_1 + 0x10));
  if (*(int *)(param_1 + 0xc) != -1) {
    FUN_00d04b90(auStack_90);
  }
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 1:
    FUN_00d04d2c(local_50 & 0xffffffff,auStack_90);
    break;
  case 2:
    FUN_00d04d3c(auStack_90,local_50 & 0xffffffff);
    break;
  case 3:
    uVar2 = local_50;
LAB_00d98f8c:
    uVar2 = uVar2 & 0xffffffff;
    goto LAB_00d98f9c;
  case 4:
    FUN_00d04d54(auStack_90,local_50 & 0xff);
    break;
  case 5:
    FUN_00d04d68(auStack_90,&local_50);
    break;
  case 6:
    uVar2 = FUN_00ceab48();
    if ((uVar2 & 1) != 0) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
      goto LAB_00d98f8c;
    }
    uVar2 = 0xffffffff;
LAB_00d98f9c:
    FUN_00d04d48(auStack_90,uVar2);
  }
  uVar2 = FUN_00ceab48();
  if (((uVar2 & 1) == 0) ||
     ((*(char *)(param_1 + 0x1d) == '\0' && (uVar2 = FUN_00ceab48(), (uVar2 & 1) != 0)))) {
    local_78 = 1;
  }
  if (*(char *)(param_1 + 0x1c) != '\0') {
    FUN_00d04b98(auStack_90);
  }
  FUN_00ce20fc(auStack_90);
LAB_00d98fd8:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

