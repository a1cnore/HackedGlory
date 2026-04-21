// functions/00d9c — 59 functions
#include "libGameKindred.h"




undefined8 FUN_00d9c014(undefined8 param_1)

{
  FUN_00d9ffcc();
  return param_1;
}




void FUN_00d9c038(long param_1)

{
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 1;
  return;
}




void FUN_00d9c048(long param_1,undefined8 *param_2)

{
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 4;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 8) = *param_2;
  return;
}




void FUN_00d9c068(long param_1)

{
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 2;
  return;
}




void FUN_00d9c078(undefined4 *param_1,undefined8 param_2,long param_3,long param_4)

{
  byte bVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  undefined1 auStack_6f8 [112];
  long local_688 [200];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00d4e934(auStack_6f8,*param_1);
  bVar1 = *(byte *)(param_1 + 6);
  if ((bVar1 & 1) != 0) {
    FUN_00d4e980(auStack_6f8,*(undefined4 *)(param_3 + 0x260));
    bVar1 = *(byte *)(param_1 + 6);
  }
  if ((bVar1 >> 1 & 1) != 0) {
    FUN_00d4dc24(auStack_6f8,0);
    bVar1 = *(byte *)(param_1 + 6);
  }
  if ((bVar1 >> 2 & 1) != 0) {
    uVar3 = FUN_00d9c180(param_1 + 2,param_2,0);
    FUN_00d4e988(auStack_6f8,uVar3);
  }
  uVar4 = FUN_00d9e840(auStack_6f8,local_688,200,0);
  if (uVar4 != 0) {
    uVar5 = (ulong)uVar4;
    plVar6 = local_688;
    do {
      if (*plVar6 != param_4) {
        FUN_00d518f4(param_2);
      }
      uVar5 = uVar5 - 1;
      plVar6 = plVar6 + 1;
    } while (uVar5 != 0);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00d9c180(uint *param_1,undefined8 param_2,undefined8 param_3)

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
                    /* WARNING: Could not recover jumptable at 0x00d9c1dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)param_1)();
    return uVar2;
  case 3:
    UNRECOVERED_JUMPTABLE = *(code **)param_1;
    FUN_00cfb5cc(param_2);
                    /* WARNING: Could not recover jumptable at 0x00d9c200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x00d9c218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)param_1)(param_2);
    return uVar2;
  case 5:
                    /* WARNING: Could not recover jumptable at 0x00d9c234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)param_1)(param_2,param_3);
    return uVar2;
  case 6:
    plVar3 = (long *)FUN_00cfb6c8(param_2);
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




void FUN_00d9c290(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00d518f4(param_2,param_3);
  return;
}




void FUN_00d9c29c(long param_1)

{
  FUN_00d9ff2c();
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xf8;
  return;
}




undefined8 FUN_00d9c2d0(undefined8 param_1)

{
  FUN_00d9ffcc();
  return param_1;
}




void FUN_00d9c2f4(long param_1)

{
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 1;
  return;
}




void FUN_00d9c304(long param_1,undefined8 *param_2)

{
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 4;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 8) = *param_2;
  return;
}




void FUN_00d9c324(long param_1)

{
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 2;
  return;
}




void FUN_00d9c334(undefined4 *param_1,long param_2,long param_3,long param_4)

{
  byte bVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  undefined1 auStack_6f8 [112];
  long local_688 [200];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00d4e934(auStack_6f8,*param_1);
  bVar1 = *(byte *)(param_1 + 6);
  if ((bVar1 & 1) != 0) {
    FUN_00d4e980(auStack_6f8,*(undefined4 *)(param_3 + 0x260));
    bVar1 = *(byte *)(param_1 + 6);
  }
  if ((bVar1 >> 1 & 1) != 0) {
    FUN_00d4dc24(auStack_6f8,0);
    bVar1 = *(byte *)(param_1 + 6);
  }
  if ((bVar1 >> 2 & 1) != 0) {
    uVar3 = FUN_00d98098(param_1 + 2,param_2,0);
    FUN_00d4e988(auStack_6f8,uVar3);
  }
  uVar4 = FUN_00d9e840(auStack_6f8,local_688,200,0);
  if (uVar4 != 0) {
    uVar5 = (ulong)uVar4;
    plVar6 = local_688;
    do {
      if (*plVar6 != param_4) {
        FUN_00d9d98c(param_2 + 8);
      }
      uVar5 = uVar5 - 1;
      plVar6 = plVar6 + 1;
    } while (uVar5 != 0);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d9c440(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_00d9d98c(param_2 + 8,param_3);
  return;
}




void FUN_00d9c44c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d66d28(*param_2);
  FUN_00d9d98c(param_2 + 1,uVar1);
  return;
}




void FUN_00d9c478(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d66d28(*param_2);
  FUN_00d9d9a8(param_2 + 1,uVar1);
  return;
}




void FUN_00d9c4a4(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = FUN_00d44c78(*param_2);
  if (lVar1 != 0) {
    FUN_00d9d98c(param_2 + 1,lVar1);
    return;
  }
  return;
}




void FUN_00d9c4e0(undefined8 param_1,long param_2)

{
  if (*(long *)(*(long *)(param_2 + 0x428) + 0x20) != 0) {
    FUN_00d9d98c(param_2 + 8);
    return;
  }
  return;
}




void FUN_00d9c4fc(undefined8 param_1,long param_2)

{
  if (*(long *)(*(long *)(param_2 + 0x430) + 0x10) != 0) {
    FUN_00d9d98c(param_2 + 8);
    return;
  }
  return;
}




void FUN_00d9c518(undefined8 param_1,long param_2)

{
  if (*(long *)(*(long *)(param_2 + 0x428) + 0x28) != 0) {
    FUN_00d9d98c(param_2 + 8);
    return;
  }
  return;
}




void FUN_00d9c534(undefined8 param_1,long param_2)

{
  if (*(long *)(param_2 + 0x438) != 0) {
    FUN_00d9d98c(param_2 + 8);
    return;
  }
  return;
}




void FUN_00d9c54c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281f5a0;
  param_1[1] = 0;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfe;
  return;
}




void FUN_00d9c56c(long param_1)

{
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 1;
  return;
}




void FUN_00d9c57c(long param_1)

{
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
  return;
}




void FUN_00d9c58c(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined1 auStack_6e8 [96];
  long local_688 [200];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    FUN_00d5bc5c();
  }
  else {
    FUN_00d5bc6c(*(undefined8 *)(param_2 + 0x440));
  }
  lVar3 = FUN_00d9e390();
  if (lVar3 != 0) {
    FUN_00d9d98c(param_2 + 8,lVar3);
    if ((*(byte *)(param_1 + 0x10) >> 1 & 1) != 0) {
      FUN_00d4d9e8(auStack_6e8);
      FUN_00d4dabc(auStack_6e8,1);
      FUN_00d4daf4(auStack_6e8,1,0,1,lVar3);
      uVar2 = FUN_00d9e840(auStack_6e8,local_688,200,0);
      if (uVar2 != 0) {
        uVar4 = (ulong)uVar2;
        plVar5 = local_688;
        do {
          if (*plVar5 != lVar3) {
            FUN_00d9d98c(param_2 + 8);
          }
          uVar4 = uVar4 - 1;
          plVar5 = plVar5 + 1;
        } while (uVar4 != 0);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d9c68c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_0281f5e0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}




void FUN_00d9c6a8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00d9c6b0(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}




void FUN_00d9c6bc(long param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined1 auStack_6b0 [40];
  long local_688 [200];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d4d634(auStack_6b0);
  uVar3 = FUN_00d66d28(*param_2);
  FUN_00d4d66c(auStack_6b0,uVar3);
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_00d4d678(auStack_6b0);
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_00d4d680(auStack_6b0);
  }
  uVar2 = FUN_00d9e840(auStack_6b0,local_688,200,0);
  if (uVar2 != 0) {
    uVar4 = (ulong)uVar2;
    plVar5 = local_688;
    do {
      if (*plVar5 != 0) {
        FUN_00d9d98c(param_2 + 1);
      }
      uVar4 = uVar4 - 1;
      plVar5 = plVar5 + 1;
    } while (uVar4 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d9c790(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281f620;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}




void FUN_00d9c7a8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00d9c7b0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}




void FUN_00d9c7b8(long param_1,long *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  uint *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    if (*(long **)(param_1 + 0x10) == (long *)0x0) {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      lVar4 = *param_2;
      uVar1 = FUN_00e6a474(uVar5);
      uVar1 = FUN_0091ed5c(uVar5,uVar1,0x12345678);
      puVar3 = (uint *)(**(code **)(*(long *)(lVar4 + 0x168) + 0x18))(lVar4 + 0x168,uVar1);
      uVar2 = (ulong)*puVar3;
    }
    else {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
    }
    lVar4 = FUN_00d9e390(uVar2);
    if (lVar4 != 0) {
      FUN_00d9d98c(param_2 + 1,lVar4);
      return;
    }
  }
  return;
}




void FUN_00d9c860(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00d9c868(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d5048c(param_2);
  FUN_00d9bb1c(param_1 + 0x10,param_2,uVar1);
  return;
}




void FUN_00d9c89c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00d9c8a4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d66d28(*param_2);
  FUN_00d9bc80(param_1 + 0x10,param_2,uVar1);
  return;
}




void FUN_00d9c8dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}




void FUN_00d9c8e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d5048c(param_2);
  FUN_00d9bdd0(param_1 + 0x10,param_2,uVar1);
  return;
}




void FUN_00d9c91c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}




void FUN_00d9c928(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d66d28(*param_2);
  FUN_00d9bee0(param_1 + 0x10,param_2,uVar1);
  return;
}




long FUN_00d9c960(long param_1)

{
  long lVar1;
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  thunk_FUN_00d9ff34(auStack_30);
  FUN_00d9ffcc(param_1 + 0x10,auStack_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return param_1 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d9c9bc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00d426b0(*param_2);
  if (*(char *)(param_1 + 0x30) == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00d66d28(*param_2);
  }
  FUN_00d9c334(param_1 + 0x10,param_2,uVar1,uVar2);
  return;
}




void FUN_00d9ca20(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_0281f660;
  return;
}




void FUN_00d9ca38(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00d9ca40(long param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined1 auStack_6e8 [96];
  undefined8 auStack_688 [200];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d4d9e8(auStack_6e8);
  (**(code **)(param_1 + 0x10))(*param_2,auStack_6e8);
  uVar2 = FUN_00d9e840(auStack_6e8,auStack_688,200,0);
  if (uVar2 != 0) {
    uVar3 = (ulong)uVar2;
    puVar4 = auStack_688;
    do {
      FUN_00d9d98c(param_2 + 1,*puVar4);
      uVar3 = uVar3 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar3 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d9cae8(long param_1)

{
  FUN_00d9ff2c();
  FUN_00d9ff2c(param_1 + 4);
  FUN_00d9ff2c(param_1 + 8);
  FUN_00d9ff2c(param_1 + 0xc);
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfe;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  return;
}




int * FUN_00d9cb40(int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1;
  if ((*param_1 == 0) || (piVar1 = param_1 + 1, *piVar1 == 0)) {
    FUN_00d9ff34(piVar1);
  }
  return param_1;
}




long FUN_00d9cb80(long param_1)

{
  if ((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 0xc) != 0)) {
    return param_1;
  }
  FUN_00d9ff34();
  return param_1;
}




void FUN_00d9cbb8(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00d9cbc0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}




void FUN_00d9cbc8(long param_1)

{
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 1;
  return;
}




void FUN_00d9cbd8(int *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 local_78 [2];
  undefined4 local_70 [2];
  undefined4 local_68 [2];
  undefined4 local_60 [2];
  undefined4 local_58 [2];
  undefined4 local_50 [2];
  undefined4 local_48 [2];
  undefined4 local_40 [2];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar1 = *param_1;
  if (param_1[4] == -1) {
    if (iVar1 != 0) {
      FUN_00d9ff84(local_40,iVar1);
      uVar3 = FUN_00d6bbac(param_2,local_40[0],0);
      uVar4 = 0;
      if ((uVar3 & 1) == 0) goto LAB_00d9cd88;
    }
    if (param_1[1] != 0) {
      FUN_00d9ff84(local_48);
      uVar3 = FUN_00d6bbac(param_2,local_48[0],0);
      uVar4 = 0;
      if ((uVar3 & 1) == 0) goto LAB_00d9cd88;
    }
    if (param_1[2] != 0) {
      FUN_00d9ff84(local_50);
      uVar3 = FUN_00d6bbac(param_2,local_50[0],0);
      uVar4 = 0;
      if ((uVar3 & 1) != 0) goto LAB_00d9cd88;
    }
    if (param_1[3] != 0) {
      FUN_00d9ff84(local_58);
      uVar3 = FUN_00d6bbac(param_2,local_58[0],0);
LAB_00d9cd78:
      uVar4 = 0;
      if ((uVar3 & 1) != 0) goto LAB_00d9cd88;
    }
  }
  else {
    if (iVar1 != 0) {
      FUN_00d9ff84(local_60,iVar1);
      uVar3 = FUN_00d6bca8(param_2,local_60[0],param_1[4],0);
      uVar4 = 0;
      if ((uVar3 & 1) == 0) goto LAB_00d9cd88;
    }
    if (param_1[1] != 0) {
      FUN_00d9ff84(local_68);
      uVar3 = FUN_00d6bca8(param_2,local_68[0],param_1[4],0);
      uVar4 = 0;
      if ((uVar3 & 1) == 0) goto LAB_00d9cd88;
    }
    if (param_1[2] != 0) {
      FUN_00d9ff84(local_70);
      uVar3 = FUN_00d6bca8(param_2,local_70[0],param_1[4],0);
      uVar4 = 0;
      if ((uVar3 & 1) != 0) goto LAB_00d9cd88;
    }
    if (param_1[3] != 0) {
      FUN_00d9ff84(local_78);
      uVar3 = FUN_00d6bca8(param_2,local_78[0],param_1[4],0);
      goto LAB_00d9cd78;
    }
  }
  uVar4 = 1;
LAB_00d9cd88:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}




uint FUN_00d9cdb0(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined1 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 local_6d0;
  undefined4 local_6c8;
  undefined1 auStack_6c0 [40];
  undefined8 local_698 [200];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_00d55794(param_3,&local_6d0,0);
  if (*(short *)(param_2 + 0x58) < 0) {
    local_6c8 = *(undefined4 *)(param_2 + 0x1c);
    local_6d0 = *(undefined8 *)(param_2 + 0x14);
  }
  FUN_00d4eb08(auStack_6c0,&local_6d0,200,0);
  puVar1 = (undefined1 *)0x0;
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    puVar1 = auStack_6c0;
  }
  uVar3 = FUN_00d9e840(param_2,local_698,200,puVar1);
  if (uVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar7 = 0;
    uVar6 = 0;
    puVar8 = local_698;
    do {
      uVar4 = FUN_00d9ea08(*puVar8);
      uVar5 = FUN_00d9cbd8(param_1,uVar4);
      if ((uVar5 & 1) != 0) {
        *(undefined8 *)(param_4 + (ulong)uVar6 * 8) = *puVar8;
        uVar6 = uVar6 + 1;
        if (*(uint *)(param_1 + 0x14) <= uVar6) break;
      }
      uVar7 = uVar7 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar7 < uVar3);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}




void FUN_00d9ced8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_0281f6a0;
  FUN_00d9cae8(param_1 + 3);
  return;
}




long FUN_00d9cef8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return param_1 + 0x18;
}




void FUN_00d9cf08(long param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined1 auStack_6e8 [96];
  undefined8 auStack_688 [200];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d4d9e8(auStack_6e8);
  (**(code **)(param_1 + 0x10))(*param_2,auStack_6e8);
  uVar3 = FUN_00d66d28(*param_2);
  uVar2 = FUN_00d9cdb0(param_1 + 0x18,auStack_6e8,uVar3,auStack_688);
  if (uVar2 != 0) {
    uVar4 = (ulong)uVar2;
    puVar5 = auStack_688;
    do {
      FUN_00d9d98c(param_2 + 1,*puVar5);
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar4 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d9cfbc(undefined8 *param_1)

{
  FUN_00cfc438();
  *param_1 = &PTR_FUN_0281f6e0;
  param_1[2] = 0;
  FUN_00d9cae8(param_1 + 3);
  return;
}




long FUN_00d9cff4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return param_1 + 0x18;
}

