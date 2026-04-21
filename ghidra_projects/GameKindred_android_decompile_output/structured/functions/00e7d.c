// functions/00e7d — 102 functions
#include "libGameKindred.h"




void thunk_FUN_00e7d398(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e7d3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)**(undefined8 **)(param_1 + 8) + 0x20))();
  return;
}




void thunk_FUN_00e7d3ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e7d3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)**(undefined8 **)(param_1 + 8) + 0x28))();
  return;
}




void thunk_FUN_00e7d174(void)

{
  return;
}




void FUN_00e7d004(long param_1)

{
  FUN_00f2e270(*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




void FUN_00e7d02c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  if (param_3 != (undefined8 *)0x0) {
    lVar2 = FUN_01988738(DAT_032105c0,0);
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_032105c0) {
      lVar2 = 0;
    }
    lVar2 = *(long *)(lVar2 + 0x28);
    *(undefined4 *)(lVar2 + 0x30) = *(undefined4 *)((long)param_3 + 0x34);
    uVar1 = *(undefined4 *)((long)param_3 + 0x2c);
    *(undefined8 *)(lVar2 + 0x24) = *(undefined8 *)((long)param_3 + 0x24);
    *(undefined4 *)(lVar2 + 0x2c) = uVar1;
    uVar1 = *(undefined4 *)(param_3 + 1);
    *(undefined8 *)(lVar2 + 0x14) = *param_3;
    *(undefined4 *)(lVar2 + 0x1c) = uVar1;
  }
  return;
}




void FUN_00e7d09c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02820948;
  param_1[5] = 0;
  return;
}




void FUN_00e7d0b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02820948;
  FUN_01985bd0();
  return;
}




void FUN_00e7d0c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02820948;
  FUN_01985bd0();
  operator_delete(param_1);
  return;
}




void FUN_00e7d0fc(undefined4 param_1,long param_2)

{
  *(undefined4 *)(*(long *)(param_2 + 0x28) + 0x30) = param_1;
  return;
}




void FUN_00e7d108(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_4 + 0x28);
  *(undefined4 *)(lVar1 + 0x24) = param_1;
  *(undefined4 *)(lVar1 + 0x28) = param_2;
  *(undefined4 *)(lVar1 + 0x2c) = param_3;
  return;
}




void FUN_00e7d118(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_4 + 0x28);
  *(undefined4 *)(lVar1 + 0x14) = param_1;
  *(undefined4 *)(lVar1 + 0x18) = param_2;
  *(undefined4 *)(lVar1 + 0x1c) = param_3;
  return;
}




void FUN_00e7d128(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02820948;
  param_1[5] = 0;
  return;
}




void FUN_00e7d140(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e7d148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00e7d14c(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_02820978;
  param_1[2] = DAT_032105d8;
  return;
}




void FUN_00e7d174(void)

{
  return;
}




void FUN_00e7d17c(void)

{
  return;
}




void FUN_00e7d180(void)

{
  return;
}




void FUN_00e7d184(void)

{
  return;
}




void FUN_00e7d188(void)

{
  return;
}




void FUN_00e7d18c(void)

{
  return;
}




void FUN_00e7d190(void)

{
  return;
}




void FUN_00e7d194(void)

{
  return;
}




void FUN_00e7d198(void)

{
  return;
}




void FUN_00e7d19c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}




void FUN_00e7d1a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e7d1b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x50))
            (*(long **)(param_1 + 0x10),*(undefined4 *)(param_1 + 8));
  return;
}




void FUN_00e7d1bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e7d1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x58))();
  return;
}




void FUN_00e7d1cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e7d1dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x60))(*(long **)(param_1 + 0x10),1);
  return;
}




void FUN_00e7d1e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e7d1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x60))(*(long **)(param_1 + 0x10),0);
  return;
}




void FUN_00e7d1f4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e7d1fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}




void FUN_00e7d200(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e7d20c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x68))();
  return;
}




void FUN_00e7d210(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e7d21c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x70))();
  return;
}




void FUN_00e7d220(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e7d230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x78))();
  return;
}




void FUN_00e7d234(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e7d244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x80))();
  return;
}




void FUN_00e7d248(long param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00e7d258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x88))(*(long **)(param_1 + 0x10),param_2 & 1);
  return;
}




void FUN_00e7d25c(long param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00e7d26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x90))(*(long **)(param_1 + 0x10),param_2 & 1);
  return;
}




void FUN_00e7d270(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e7d27c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x98))();
  return;
}




void FUN_00e7d280(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e7d28c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0xa0))();
  return;
}




void FUN_00e7d290(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e7d29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0xa8))();
  return;
}




void FUN_00e7d2a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e7d2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0xb0))();
  return;
}




void FUN_00e7d2b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e7d2bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0xb8))();
  return;
}




void FUN_00e7d2c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e7d2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0xc0))();
  return;
}




void FUN_00e7d2d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e7d2dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 200))();
  return;
}




void FUN_00e7d2e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028209d8;
  param_1[1] = &DAT_032105d0;
  return;
}




void FUN_00e7d2fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028209d8;
  param_1[1] = 0;
  return;
}




void FUN_00e7d310(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xe7d314);
  (*pcVar1)();
}




void FUN_00e7d314(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e7d324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)**(undefined8 **)(param_1 + 8) + 0x10))();
  return;
}




undefined8 FUN_00e7d328(long param_1)

{
  return **(undefined8 **)(param_1 + 8);
}




void FUN_00e7d334(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e7d344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)**(undefined8 **)(param_1 + 8) + 0x18))();
  return;
}




void FUN_00e7d348(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e7d358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)**(undefined8 **)(param_1 + 8) + 0x30))();
  return;
}




void FUN_00e7d35c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e7d36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)**(undefined8 **)(param_1 + 8) + 0x38))();
  return;
}




void FUN_00e7d370(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e7d380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)**(undefined8 **)(param_1 + 8) + 0x40))();
  return;
}




void FUN_00e7d384(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e7d394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)**(undefined8 **)(param_1 + 8) + 0x48))();
  return;
}




void FUN_00e7d398(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e7d3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)**(undefined8 **)(param_1 + 8) + 0x20))();
  return;
}




void FUN_00e7d3ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e7d3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)**(undefined8 **)(param_1 + 8) + 0x28))();
  return;
}




void FUN_00e7d3c0(undefined8 param_1)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte local_68 [16];
  void *local_58;
  byte local_50 [8];
  ulong local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00e7012c(&DAT_0320ffc0,0);
  FUN_008fa54c(local_50,uVar4);
  pvVar1 = (void *)((ulong)local_50 | 1);
  uVar3 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
    uVar3 = local_48;
  }
  if (uVar3 == 0) {
LAB_00e7d450:
    uVar5 = 0;
  }
  else {
    do {
      uVar5 = uVar3;
      if (uVar5 == 0) goto LAB_00e7d450;
      uVar3 = uVar5 - 1;
    } while (*(char *)((long)pvVar1 + (uVar5 - 1)) != '/');
  }
  FUN_0093ddb0(local_68,local_50,0,uVar5,local_50);
  FUN_008fcdb8(param_1,local_68);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e7d4bc(void)

{
  return;
}




void FUN_00e7d4c0(void)

{
  return;
}




undefined8 FUN_00e7d4c4(void)

{
  return DAT_032105d0;
}




void FUN_00e7d4d0(undefined8 param_1,undefined8 param_2)

{
  DAT_032105d8 = param_1;
  DAT_032105d0 = (long *)FUN_0091fc78();
                    /* WARNING: Could not recover jumptable at 0x00e7d508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_032105d0 + 0x10))(DAT_032105d0,param_2);
  return;
}




void FUN_00e7d50c(void)

{
  (**(code **)(*DAT_032105d0 + 0x18))();
  if (DAT_032105d0 != (long *)0x0) {
    (**(code **)(*DAT_032105d0 + 8))();
  }
  DAT_032105d0 = (long *)0x0;
  if (DAT_032105d8 != (long *)0x0) {
    (**(code **)(*DAT_032105d8 + 8))();
  }
  DAT_032105d8 = (long *)0x0;
  return;
}




void FUN_00e7d56c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00e7d57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_032105d0 + 0x20))();
  return;
}




void FUN_00e7d580(void)

{
                    /* WARNING: Could not recover jumptable at 0x00e7d590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_032105d0 + 0x28))();
  return;
}




void FUN_00e7d594(undefined4 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00e7d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_032105d0 + 0x30))(DAT_032105d0,param_1,param_2);
  return;
}




void FUN_00e7d5b4(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00e78248();
  if ((uVar1 & 1) != 0) {
    FUN_00e78608(&DAT_032105e0,2,PTR_s___Main_OS_Serial_Queue_02bf24e8);
    return;
  }
  return;
}




void FUN_00e7d5ec(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00e78714(&DAT_032105e0);
  if ((uVar1 & 1) != 0) {
    FUN_00e7bae8(&DAT_032105e0,1);
    FUN_00e78724(&DAT_032105e0);
    return;
  }
  return;
}




void FUN_00e7d638(void)

{
  FUN_00e78714(&DAT_032105e0);
  return;
}




void FUN_00e7d644(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00e78714(&DAT_032105e0);
  if ((uVar1 & 1) != 0) {
    FUN_00e7bae8(&DAT_032105e0,0);
    return;
  }
  return;
}




void FUN_00e7d678(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x18);
  FUN_008fcdb8(pvVar1,&DAT_0320ffa8);
  FUN_00e7d764(pvVar1,param_1);
  DAT_032106d8 = pvVar1;
  return;
}




void FUN_00e7d6c0(undefined8 param_1)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (DAT_032106d8 == 0) {
    FUN_008fa54c(local_40,"en");
    FUN_008fce60(param_1,local_40);
    if ((local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
  }
  else {
    FUN_008fce60(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e7d748(undefined8 param_1)

{
  if (DAT_032106d8 != 0) {
    FUN_00e7d764(DAT_032106d8,param_1);
    return;
  }
  return;
}




void FUN_00e7d764(undefined8 param_1)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_40);
  FUN_008fce60(param_1,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e7d7cc(void)

{
  byte *pbVar1;
  
  pbVar1 = DAT_032106d8;
  if (DAT_032106d8 != (byte *)0x0) {
    if ((*DAT_032106d8 & 1) != 0) {
      operator_delete(*(void **)(DAT_032106d8 + 0x10));
    }
    operator_delete(pbVar1);
  }
  DAT_032106d8 = (byte *)0x0;
  return;
}




void FUN_00e7d80c(undefined8 param_1,undefined8 param_2)

{
  FUN_008fcdb8(param_1,&DAT_0320ffa8);
  FUN_00e7d764(param_1,param_2);
  return;
}




void FUN_00e7d840(undefined8 *param_1)

{
  FUN_00e7de2c();
  *(undefined4 *)(param_1 + 0x9d) = 0;
  *param_1 = &PTR_FUN_02820ab8;
  FUN_00e7e0f0(param_1 + 0x9e);
  param_1[0xd8] = 0;
  return;
}




void FUN_00e7d880(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02820ab8;
  FUN_00e7e1c4(param_1 + 0x9e);
  FUN_00e7de78(param_1);
  return;
}




void FUN_00e7d8b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02820ab8;
  FUN_00e7e1c4(param_1 + 0x9e);
  FUN_00e7de78(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00e7d8f8(long param_1,long param_2)

{
  if (param_2 != 0) {
    *(long *)(param_1 + 0x6c0) = param_2;
  }
  return 1;
}




void FUN_00e7d908(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x6c0) = param_2;
  return;
}




void FUN_00e7d910(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00e6f144(param_1 + 8);
  if ((uVar1 & 1) != 0) {
    FUN_00e7dcb0(param_1 + 8);
  }
  *(undefined8 *)(param_1 + 0x6c0) = 0;
  *(undefined4 *)(param_1 + 0x4e8) = 0;
  return;
}




void FUN_00e7d94c(long param_1)

{
  *(undefined8 *)(param_1 + 0x6c0) = 0;
  return;
}




undefined4
FUN_00e7d954(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined4 uVar4;
  
  lVar1 = param_1 + 8;
  uVar2 = FUN_00e7dc48(lVar1,1);
  uVar4 = 0;
  if ((uVar2 & 1) != 0) {
    plVar3 = *(long **)(param_1 + 0x6c0);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,param_1);
    }
    uVar2 = FUN_00e6f164(lVar1,param_2,param_3,param_4,param_5);
    if ((uVar2 & 1) == 0) {
      FUN_00e7dcb0(lVar1);
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
      *(undefined4 *)(param_1 + 0x4e8) = 1;
      FUN_00e7e094(param_1,2);
      FUN_00e7e99c(param_1 + 0x4f0,param_1);
    }
  }
  return uVar4;
}




void FUN_00e7da18(long param_1)

{
  int iVar1;
  long *plVar2;
  
  FUN_00e7e9e4(param_1 + 0x4f0,param_1);
  FUN_00e7dcb0(param_1 + 8);
  iVar1 = *(int *)(param_1 + 0x4e8);
  *(undefined4 *)(param_1 + 0x4e8) = 0;
  if ((iVar1 == 2) && (plVar2 = *(long **)(param_1 + 0x6c0), plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00e7da68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x20))(plVar2,param_1);
    return;
  }
  return;
}




bool FUN_00e7da78(long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = FUN_00e6f144(param_1 + 8);
  bVar1 = false;
  if ((uVar2 & 1) != 0) {
    bVar1 = *(int *)(param_1 + 0x4e8) == 1;
  }
  return bVar1;
}




bool FUN_00e7dab4(long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = FUN_00e6f144(param_1 + 8);
  bVar1 = false;
  if ((uVar2 & 1) != 0) {
    bVar1 = *(int *)(param_1 + 0x4e8) == 2;
  }
  return bVar1;
}




bool FUN_00e7daf0(long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = FUN_00e6f144(param_1 + 8);
  bVar1 = false;
  if ((uVar2 & 1) == 0) {
    bVar1 = *(int *)(param_1 + 0x4e8) == 0;
  }
  return bVar1;
}




void FUN_00e7db2c(long param_1)

{
  FUN_00e7e674(param_1 + 0x4f0);
  return;
}




void FUN_00e7db34(long param_1)

{
  FUN_00e7e98c(param_1 + 0x4f0);
  return;
}




void FUN_00e7db3c(long param_1,uint param_2)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = *(long **)(param_1 + 0x6c0);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x4e8) == 1) {
      uVar2 = FUN_00e6f9d0(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        (**(code **)(**(long **)(param_1 + 0x6c0) + 0x28))(*(long **)(param_1 + 0x6c0),param_1);
LAB_00e7dc10:
        FUN_00e7da18(param_1);
        return;
      }
      *(undefined4 *)(param_1 + 0x4e8) = 2;
      uVar2 = (**(code **)(**(long **)(param_1 + 0x6c0) + 0x18))
                        (*(long **)(param_1 + 0x6c0),param_1);
      if ((uVar2 & 1) == 0) goto LAB_00e7dc10;
      plVar1 = *(long **)(param_1 + 0x6c0);
    }
    if (((param_2 & 1) != 0) && (plVar1 != (long *)0x0)) {
      (**(code **)(*plVar1 + 0x30))(plVar1,param_1);
      plVar1 = *(long **)(param_1 + 0x6c0);
    }
    if (((param_2 >> 1 & 1) != 0) && (plVar1 != (long *)0x0)) {
      (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
      plVar1 = *(long **)(param_1 + 0x6c0);
    }
    if (((param_2 >> 2 & 1) != 0) && (plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00e7dc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x40))(plVar1,param_1);
      return;
    }
  }
  return;
}




void FUN_00e7dc24(long param_1)

{
  FUN_00e6efe8();
  *(undefined4 *)(param_1 + 0x4bc) = 0;
  return;
}




bool FUN_00e7dc48(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = FUN_00e6f060();
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    FUN_00e7dc80(param_1);
  }
  return bVar1;
}




void FUN_00e7dc80(undefined8 param_1)

{
  FUN_00e6f0f4(param_1,1);
  FUN_00e6f64c(param_1);
  FUN_00e6f5d4(param_1);
  return;
}




void FUN_00e7dcb0(undefined8 param_1)

{
  FUN_00e7dcd4();
  FUN_00e6f02c(param_1);
  return;
}




void FUN_00e7dcd4(long param_1)

{
  long lVar1;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = 0;
  if (0 < *(int *)(param_1 + 0x4bc)) {
    FUN_00e6f0bc(param_1,param_1 + 0xc,*(int *)(param_1 + 0x4bc),&local_2c);
    *(undefined4 *)(param_1 + 0x4bc) = 0;
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_2c);
  }
  return;
}




ulong FUN_00e7dd50(long param_1,void *param_2,uint param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x4bc) + param_3 < 0x4b0) {
    memmove((void *)(param_1 + *(int *)(param_1 + 0x4bc) + 0xc),param_2,(ulong)param_3);
    *(uint *)(param_1 + 0x4bc) = *(int *)(param_1 + 0x4bc) + param_3;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    uVar1 = FUN_00e7dcd4(param_1);
    if (0x4af < param_3) {
      uVar2 = FUN_00e6f0bc(param_1,param_2,param_3,param_4);
      return uVar2;
    }
    memmove((void *)(param_1 + *(int *)(param_1 + 0x4bc) + 0xc),param_2,(ulong)param_3);
    *(uint *)(param_1 + 0x4bc) = *(int *)(param_1 + 0x4bc) + param_3;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = uVar1;
    }
  }
  return (ulong)param_3;
}




void FUN_00e7de2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02820af8;
  FUN_00e7dc24(param_1 + 1);
  param_1[0x99] = 0;
  param_1[0x9a] = 0xbf80000000000000;
  param_1[0x9c] = 0;
  param_1[0x9b] = 0;
  return;
}




void FUN_00e7de78(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1 + 1;
  *param_1 = &PTR_FUN_02820af8;
  uVar1 = FUN_00e6f144(puVar2);
  if ((uVar1 & 1) != 0) {
    FUN_00e7dcb0(puVar2);
  }
  FUN_00e6eff8(puVar2);
  return;
}




void FUN_00e7debc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xe7dec0);
  (*pcVar1)();
}




void FUN_00e7dec0(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00e6f144(param_1 + 8);
  if ((uVar1 & 1) != 0) {
    FUN_00e7dcb0(param_1 + 8);
  }
  *(undefined4 *)(param_1 + 0x4d4) = 0xbf800000;
  return;
}




void FUN_00e7defc(float param_1,long *param_2)

{
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  *(float *)((long)param_2 + 0x4d4) = param_1;
  if (param_1 == 0.0) {
                    /* WARNING: Could not recover jumptable at 0x00e7df18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x10))();
    return;
  }
  return;
}




void FUN_00e7df20(float param_1,long *param_2)

{
  if ((0.0 <= param_1) && (0.0 <= *(float *)((long)param_2 + 0x4d4))) {
    param_1 = *(float *)((long)param_2 + 0x4d4) - param_1;
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    *(float *)((long)param_2 + 0x4d4) = param_1;
    if (param_1 == 0.0) {
                    /* WARNING: Could not recover jumptable at 0x00e7df54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x10))();
      return;
    }
  }
  return;
}




void FUN_00e7df5c(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_00e6f078(param_1 + 8);
  if (0 < iVar1) {
    *(int *)(param_1 + 0x4cc) = *(int *)(param_1 + 0x4cc) + iVar1;
  }
  return;
}




void FUN_00e7df94(long param_1,long param_2,int param_3,int *param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  int local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_4c = 0;
  if (param_3 != 0) {
    do {
      uVar3 = FUN_00e6f144(param_1 + 8);
      if ((uVar3 & 1) == 0) {
LAB_00e7e024:
        uVar4 = 0;
        goto LAB_00e7e028;
      }
      iVar2 = FUN_00e7dd50(param_1 + 8,param_2,param_3,&local_4c);
      if (param_4 != (int *)0x0) {
        *param_4 = local_4c;
      }
      if (local_4c != 0) goto LAB_00e7e024;
      param_2 = param_2 + iVar2;
      param_3 = param_3 - iVar2;
      *(int *)(param_1 + 0x4d0) = *(int *)(param_1 + 0x4d0) + iVar2;
    } while (param_3 != 0);
  }
  uVar4 = 1;
LAB_00e7e028:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

