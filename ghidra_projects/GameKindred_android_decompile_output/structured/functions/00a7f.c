// functions/00a7f — 70 functions
#include "libGameKindred.h"




void FUN_00a7f000(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 1;
  return;
}




void FUN_00a7f010(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_40 = 0;
  FUN_019889cc(&local_40,1,DAT_0312f158,0);
  uVar3 = 0;
  if (local_40 != 0) {
    if (*(int *)(param_1 + 1) == 1) {
      pcVar1 = (code *)0x0;
      if (param_2 != 0) {
        pcVar1 = FUN_00a7f0d4;
      }
      FUN_009c7428(local_40,*param_1,pcVar1,param_2);
    }
    else if (*(int *)(param_1 + 1) == 0) {
      pcVar1 = (code *)0x0;
      if (param_2 != 0) {
        pcVar1 = FUN_00a7f0d4;
      }
      FUN_009c73e8(local_40,*param_1,pcVar1,param_2);
    }
    uVar3 = 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




void FUN_00a7f0d4(long param_1)

{
  *(undefined1 *)(param_1 + 0x19) = 1;
  return;
}




void FUN_00a7f0e0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  FUN_019889cc(&local_40,1,DAT_0312f158,0);
  lVar2 = local_40;
  if (local_40 != 0) {
    lVar4 = FUN_009c7448(local_40);
    if (lVar4 != 0) {
      pcVar5 = (char *)FUN_009c7448(lVar2);
      iVar3 = strcmp(pcVar5,(char *)*param_1);
      if (iVar3 == 0) {
        FUN_009c73f8(lVar2);
      }
    }
    lVar4 = FUN_009c7458(lVar2);
    if (lVar4 != 0) {
      pcVar5 = (char *)FUN_009c7458(lVar2);
      iVar3 = strcmp(pcVar5,(char *)*param_1);
      if (iVar3 == 0) {
        FUN_009c7438(lVar2);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a7f1a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ce678;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  return;
}




void FUN_00a7f1b8(long param_1)

{
  FUN_00a7f010(param_1 + 0x10,0);
  return;
}




byte FUN_00a7f1c4(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  if (*(char *)(param_3 + 0x18) == '\0') {
    uVar1 = FUN_00a7f010(param_1 + 0x10,param_3);
    if ((uVar1 & 1) == 0) {
      *(undefined1 *)(param_3 + 0x19) = 1;
    }
    else {
      *(undefined1 *)(param_3 + 0x18) = 1;
    }
  }
  return *(byte *)(param_3 + 0x19) ^ 1;
}




void FUN_00a7f210(long param_1,undefined8 param_2,long param_3)

{
  if ((*(char *)(param_3 + 0x18) != '\0') && (*(char *)(param_3 + 0x19) == '\0')) {
    FUN_00a7f0e0(param_1 + 0x10);
    *(undefined1 *)(param_3 + 0x19) = 1;
  }
  return;
}




void FUN_00a7f24c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ce6a0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  return;
}




void FUN_00a7f264(long param_1)

{
  *(undefined1 *)(param_1 + 0x19) = 1;
  return;
}




void FUN_00a7f270(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ce6c8;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_00e70510(param_1 + 3);
  return;
}




void FUN_00a7f290(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}




long FUN_00a7f298(long param_1)

{
  FUN_00910394(param_1 + 0x18);
  return param_1;
}




byte FUN_00a7f2c0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_3 + 0x18) == '\0') {
    local_40 = 0;
    FUN_019889cc(&local_40,1,DAT_0312f158,0);
    if (local_40 == 0) {
      *(undefined1 *)(param_3 + 0x19) = 1;
    }
    else {
      FUN_009c7408(local_40,*(undefined4 *)(param_1 + 0x10),param_1 + 0x18,FUN_00a7f264,param_3);
      *(undefined1 *)(param_3 + 0x18) = 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return *(byte *)(param_3 + 0x19) ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a7f36c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(char *)(param_3 + 0x18) != '\0') && (*(char *)(param_3 + 0x19) == '\0')) {
    local_40 = 0;
    FUN_019889cc(&local_40,1,DAT_0312f158,0);
    if (local_40 != 0) {
      FUN_009c7418();
    }
    *(undefined1 *)(param_3 + 0x19) = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00a7f3f8(long param_1)

{
  FUN_00910394(param_1 + 0x10);
  return param_1;
}




void FUN_00a7f420(long param_1)

{
  long lVar1;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0;
  FUN_019889cc(&local_30,1,DAT_0312f158,0);
  if (local_30 != 0) {
    FUN_009c73a0(local_30,param_1 + 0x10);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a7f490(void)

{
  long lVar1;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0;
  FUN_019889cc(&local_30,1,DAT_0312f158,0);
  if (local_30 != 0) {
    FUN_009c73b0();
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a7f4f8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_027ce710;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  return;
}




void FUN_00a7f518(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  return;
}




void FUN_00a7f524(long param_1)

{
  *(undefined1 *)(param_1 + 0x1c) = 1;
  return;
}




void FUN_00a7f530(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a7f538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}




void FUN_00a7f53c(void)

{
  long lVar1;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0;
  FUN_019889cc(&local_30,1,DAT_0312f158,0);
  if (local_30 != 0) {
    FUN_009c70ac();
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a7f5a4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_50 [16];
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  FUN_019889cc(&local_40,1,DAT_0312f158,0);
  lVar2 = local_40;
  if (local_40 != 0) {
    (**(code **)(param_1 + 0x10))(param_2,*(undefined4 *)(param_1 + 0x18),auStack_50);
    FUN_009c6b1c(0x3f800000,DAT_03218ef8,_DAT_03218efc,lVar2,auStack_50,1,0,
                 *(undefined1 *)(param_1 + 0x1c));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a7f654(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_027ce768;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  return;
}




void FUN_00a7f674(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  return;
}




void FUN_00a7f680(long param_1)

{
  *(undefined1 *)(param_1 + 0x1c) = 1;
  return;
}




void FUN_00a7f68c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a7f694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}




void FUN_00a7f698(void)

{
  long lVar1;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0;
  FUN_019889cc(&local_30,1,DAT_0312f158,0);
  if (local_30 != 0) {
    FUN_009c70ac();
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a7f700(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined4 uVar6;
  long local_58;
  long local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_50 = 0;
  FUN_019889cc(&local_50,1,DAT_0312f158,0);
  lVar1 = local_50;
  if (local_50 != 0) {
    (**(code **)(param_1 + 0x10))(param_2,*(undefined4 *)(param_1 + 0x18),&local_58);
    lVar3 = local_58;
    if (local_58 == 0) {
      FUN_009c70ac(lVar1);
    }
    else {
      plVar4 = *(long **)(param_3 + 0x18);
      lVar5 = 0;
      if (plVar4 != (long *)0x0) {
        if (*(int *)(param_3 + 0x20) == (int)plVar4[1]) {
          lVar5 = (**(code **)(*plVar4 + 0x10))();
        }
        else {
          *(undefined8 *)(param_3 + 0x18) = 0;
          lVar5 = 0;
          *(undefined4 *)(param_3 + 0x20) = DAT_03214ce8;
        }
      }
      if (lVar3 != lVar5) {
        FUN_009c6c94(0x3f800000,DAT_03218ef8,_DAT_03218efc,lVar1,local_58,1,0,
                     *(undefined1 *)(param_1 + 0x1c));
        lVar1 = 0;
        uVar6 = DAT_03214ce8;
        if (local_58 != 0) {
          uVar6 = *(undefined4 *)(local_58 + 0x30);
          lVar1 = local_58 + 0x28;
        }
        *(long *)(param_3 + 0x18) = lVar1;
        *(undefined4 *)(param_3 + 0x20) = uVar6;
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a7f858(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 1;
  *param_1 = &PTR_FUN_027ce7c0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 4) = 0x100;
  return;
}




void FUN_00a7f880(long param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x10) = *param_2;
  return;
}




void FUN_00a7f894(long param_1,byte param_2)

{
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(byte *)(param_1 + 0x21) = param_2 & 1;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a7f8a8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  FUN_019889cc(&local_40,1,DAT_0312f158,0);
  lVar2 = local_40;
  if (local_40 != 0) {
    uVar3 = FUN_00a7f954(param_1 + 0x10,param_2,0);
    FUN_009c6dfc(0x3f800000,DAT_03218ef8,_DAT_03218efc,lVar2,uVar3,1,*(undefined1 *)(param_1 + 0x20)
                 ,*(undefined1 *)(param_1 + 0x21));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00a7f954(uint *param_1,undefined8 param_2,undefined8 param_3)

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
                    /* WARNING: Could not recover jumptable at 0x00a7f9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)param_1)();
    return uVar2;
  case 3:
    UNRECOVERED_JUMPTABLE = *(code **)param_1;
    FUN_00cb6990(param_2);
                    /* WARNING: Could not recover jumptable at 0x00a7f9d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x00a7f9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)param_1)(param_2);
    return uVar2;
  case 5:
                    /* WARNING: Could not recover jumptable at 0x00a7fa08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)param_1)(param_2,param_3);
    return uVar2;
  case 6:
    plVar3 = (long *)FUN_00cb6a58(param_2);
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




void FUN_00a7fa64(void)

{
  long lVar1;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0;
  FUN_019889cc(&local_30,1,DAT_0312f158,0);
  if (local_30 != 0) {
    FUN_009c70ac();
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00a7facc(long param_1,undefined8 *param_2,undefined8 param_3)

{
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x10) = *param_2;
  FUN_00910394(param_1 + 0x20,param_3);
  return param_1;
}




void FUN_00a7fb08(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 local_58;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = 0;
  FUN_019889cc(&local_50,1,DAT_0312f158,0);
  lVar2 = local_50;
  if (local_50 != 0) {
    uVar3 = FUN_00a7f954(param_1 + 0x10,param_2,0);
    local_58 = 0x3f0000003f000000;
    FUN_009c653c(0x3f000000,0xbf800000,lVar2,param_1 + 0x20,uVar3,&local_58,0,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a7fbc4(void)

{
  long lVar1;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0;
  FUN_019889cc(&local_30,1,DAT_0312f158,0);
  if (local_30 != 0) {
    FUN_009c6aac();
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a7fc2c(int param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  FUN_019889cc(&local_40,1,DAT_0312f158,0);
  lVar2 = local_40;
  if (local_40 != 0) {
    if (param_1 == 1) {
      FUN_009c61c8(local_40,-(param_2 & 1));
      FUN_009c3560(0x3e4ccccd,lVar2,1);
    }
    else if ((param_2 & 1) == 0) {
      FUN_009c6214(local_40,param_1);
    }
    else {
      FUN_009c61d8();
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a7fce8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00a8bb90();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  return;
}




void FUN_00a7fd0c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a7fd14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}




void FUN_00a7fd18(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a7fd20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}




void FUN_00a7fd24(void)

{
  return;
}




void FUN_00a7fd30(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00a8b794();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  return;
}




void FUN_00a7fd54(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a7fd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}




void FUN_00a7fd60(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a7fd68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}




void FUN_00a7fd6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ce6c8;
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return;
}




void FUN_00a7fda8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ce6c8;
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}




void FUN_00a7fde4(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00a8b9fc();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  return;
}




void FUN_00a7fe08(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a7fe10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}




void FUN_00a7fe14(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a7fe1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}




void FUN_00a7fe20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ce8e8;
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}




void FUN_00a7fe5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ce8e8;
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}




void FUN_00a7fea0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00a8d238();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  return;
}




void FUN_00a7fec4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a7fecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}




void FUN_00a7fed0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a7fed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}




void FUN_00a7fedc(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a7fee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}




void FUN_00a7feec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ce940;
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete__((void *)param_1[5]);
    param_1[4] = 0;
    param_1[5] = 0;
  }
  return;
}




void FUN_00a7ff28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ce940;
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete__((void *)param_1[5]);
  }
  operator_delete(param_1);
  return;
}




void FUN_00a7ff68(void)

{
  return;
}




void FUN_00a7ff6c(void)

{
  return;
}




void FUN_00a7ff78(void)

{
  return;
}




void FUN_00a7ff7c(void)

{
  return;
}




void FUN_00a7ff80(void)

{
  return;
}




long FUN_00a7ff84(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00a7ff8c(void)

{
  return;
}




void FUN_00a7ff90(void)

{
  return;
}




void FUN_00a7ff94(void)

{
  return;
}




void FUN_00a7ff9c(long param_1,long *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  long lVar4;
  uint *puVar5;
  long *plVar6;
  
  plVar6 = (long *)(*param_2 + 0x68);
  uVar1 = (**(code **)(*plVar6 + 8))(plVar6,*(undefined4 *)(param_1 + 0x10));
  puVar3 = (undefined4 *)(**(code **)(*plVar6 + 0x10))(plVar6,uVar1);
  *puVar3 = 0;
  lVar4 = FUN_00a1f354();
  if ((lVar4 != 0) && (uVar2 = FUN_00a1a0f4(lVar4,param_1 + 0x14), 0xffff < uVar2)) {
    puVar5 = (uint *)(**(code **)(*(long *)(*param_2 + 0x68) + 0x10))
                               ((long *)(*param_2 + 0x68),*(undefined4 *)(param_1 + 0x10));
    *puVar5 = uVar2;
  }
  return;
}

