// functions/00b72 — 18 functions
#include "libGameKindred.h"




void thunk_FUN_00b729b4(void)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  byte abStack_40 [8];
  ulong uStack_38;
  void *pvStack_30;
  long lStack_28;
  
  lVar2 = tpidr_el0;
  lStack_28 = *(long *)(lVar2 + 0x28);
  FUN_00ec52d8(abStack_40);
  uVar1 = (ulong)(abStack_40[0] >> 1);
  if ((abStack_40[0] & 1) != 0) {
    uVar1 = uStack_38;
  }
  if (uVar1 == 0xb) {
    iVar4 = FUN_0090d610(abStack_40,0,0xffffffffffffffff,"google-play",0xb);
    bVar3 = iVar4 == 0;
  }
  else {
    bVar3 = false;
  }
  if ((abStack_40[0] & 1) != 0) {
    operator_delete(pvStack_30);
  }
  if (bVar3) {
    FUN_00ec52b0();
  }
  if (*(long *)(lVar2 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b723d0(long *param_1,long *param_2,long *param_3)

{
  param_1[0x405] = *param_2;
  param_1[0x406] = *param_3;
                    /* WARNING: Could not recover jumptable at 0x00b723e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_00b723ec(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(int *)(param_1 + 0x19c0) != 0) {
    uVar5 = 0;
    do {
      plVar4 = *(long **)(*(long *)(param_1 + 0x19c8) + uVar5 * 8);
      if ((int)plVar4[0x14c] == 3) {
        iVar1 = FUN_00f04924(param_2);
        pcVar3 = *(code **)(*plVar4 + 0x148);
LAB_00b72468:
        (*pcVar3)(plVar4,(int)ABS((float)((int)uVar5 - iVar1)) < 1);
      }
      else if ((int)plVar4[0x14c] == 1) {
        iVar1 = FUN_00f04924(param_2);
        pcVar3 = *(code **)(*plVar4 + 0x140);
        goto LAB_00b72468;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x19c0));
  }
  iVar1 = FUN_00f04924(param_2);
  FUN_00b09454(param_1 + 0x620,0 < iVar1);
  uVar2 = FUN_00f04924(param_2);
  FUN_00b09454(param_1 + 0xc18,uVar2 < *(int *)(param_1 + 0x19c0) - 1U);
  *(uint *)(param_1 + 0x1d64) =
       *(uint *)(param_1 + 0x1d64) & 0xfffffff8 |
       *(uint *)(param_1 + 0x1d64) & 3 | (*(byte *)(param_1 + 0xe84) >> 4 & 1) << 2;
  return;
}




void FUN_00b724f4(long param_1,undefined8 param_2)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  ulong uVar4;
  
  if (*(int *)(param_1 + 0x19c0) != 0) {
    uVar4 = 0;
    do {
      plVar3 = *(long **)(*(long *)(param_1 + 0x19c8) + uVar4 * 8);
      if ((int)plVar3[0x14c] == 3) {
        iVar1 = FUN_00f04924(param_2);
        pcVar2 = *(code **)(*plVar3 + 0x150);
LAB_00b72570:
        (*pcVar2)(plVar3,(int)ABS((float)((int)uVar4 - iVar1)) < 2);
      }
      else if ((int)plVar3[0x14c] == 2) {
        iVar1 = FUN_00f04924(param_2);
        pcVar2 = *(code **)(*plVar3 + 0x140);
        goto LAB_00b72570;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x19c0));
  }
  return;
}




void FUN_00b725a4(long param_1)

{
  FUN_00ed4308(param_1 + 200);
  return;
}




void FUN_00b725ac(long param_1)

{
  FUN_00ed42e4(param_1 + 200);
  return;
}




void FUN_00b725b4(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_30 = param_2;
  if (param_2 != 0) {
    FUN_00ed026c(param_1 + 0x19,param_2,1);
    FUN_00b72668(param_1 + 0x338,&local_30);
    (**(code **)(*param_1 + 0x150))(param_1);
  }
  uVar1 = *(uint *)(param_1 + 0x338);
  *(uint *)((long)param_1 + 0x61c) = uVar1;
  *(uint *)((long)param_1 + 0x6a4) =
       *(uint *)((long)param_1 + 0x6a4) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x6a4) & 3 | (uint)(1 < uVar1) << 2;
  *(uint *)((long)param_1 + 0xc9c) =
       *(uint *)((long)param_1 + 0xc9c) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0xc9c) & 3 | (uint)(1 < uVar1) << 2;
  *(uint *)((long)param_1 + 0x1f7c) =
       *(uint *)((long)param_1 + 0x1f7c) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x1f7c) & 3 | (uint)(uVar1 == 0) << 2;
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b72668(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00b734d4(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00b726f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1368);
  FUN_00b289f4(pvVar1,param_2,param_3,param_4,param_5);
  FUN_00b725b4(param_1,pvVar1);
  return;
}




void FUN_00b72754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1610);
  FUN_00b28c04(pvVar1,param_2,param_3,param_4,param_5);
  FUN_00b725b4(param_1,pvVar1);
  return;
}




void FUN_00b727b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x3338);
  FUN_00b28dc8(pvVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  FUN_00b725b4(param_1,pvVar1);
  return;
}




void FUN_00b72854(long param_1,int param_2)

{
  long *plVar1;
  ulong uVar2;
  
  if (0 < param_2) {
    uVar2 = 0;
    do {
      if (*(uint *)(param_1 + 0x19c0) <= uVar2) break;
      plVar1 = *(long **)(*(long *)(param_1 + 0x19c8) + uVar2 * 8);
      (**(code **)(*plVar1 + 0x140))(plVar1,1);
      uVar2 = uVar2 + 1;
    } while ((long)uVar2 < (long)param_2);
  }
  FUN_00b09454(param_1 + 0x620,0);
  FUN_00b09454(param_1 + 0xc18,1 < *(uint *)(param_1 + 0x19c0));
  return;
}




void FUN_00b728d4(undefined4 param_1,long *param_2)

{
  *(undefined4 *)(param_2 + 0x407) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00b728e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x150))();
  return;
}




void FUN_00b728e4(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  byte local_40 [8];
  ulong local_38;
  void *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if ((param_2 & 1) == 0) {
    *(uint *)(param_1 + 0x1294) = *(uint *)(param_1 + 0x1294) & 0xfffffffb;
  }
  else {
    FUN_00ec52d8(local_40);
    uVar1 = (ulong)(local_40[0] >> 1);
    if ((local_40[0] & 1) != 0) {
      uVar1 = local_38;
    }
    if (uVar1 == 0xb) {
      iVar3 = FUN_0090d610(local_40,0,0xffffffffffffffff,"google-play",0xb);
      uVar4 = (uint)(iVar3 == 0) << 2;
    }
    else {
      uVar4 = 0;
    }
    *(uint *)(param_1 + 0x1294) = *(uint *)(param_1 + 0x1294) & 0xfffffffb | uVar4;
    if ((local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b729b4(void)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  byte local_40 [8];
  ulong local_38;
  void *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  FUN_00ec52d8(local_40);
  uVar1 = (ulong)(local_40[0] >> 1);
  if ((local_40[0] & 1) != 0) {
    uVar1 = local_38;
  }
  if (uVar1 == 0xb) {
    iVar4 = FUN_0090d610(local_40,0,0xffffffffffffffff,"google-play",0xb);
    bVar3 = iVar4 == 0;
  }
  else {
    bVar3 = false;
  }
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (bVar3) {
    FUN_00ec52b0();
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b72a60(undefined8 param_1)

{
  long lVar1;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  undefined8 local_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00b71c88();
  FUN_00e705c8(&local_38,"Summer Season 2016");
  FUN_00e705c8(&local_48,"Maximum Fame Level Achieved in Summer Season 2016");
  FUN_00e705c8(&local_58,"BIRTHDAY SUITS");
  FUN_00b726f0(param_1,&local_38,&local_48,&local_58,0x5a);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
    local_38 = 0;
    local_30 = (void *)0x0;
  }
  FUN_00e705c8(&local_38,"Spring Season 2016");
  FUN_00e705c8(&local_48,"Maximum Fame Level Achieved in Spring Season 2016");
  FUN_00e705c8(&local_58,"BIRTHDAY SUITS");
  FUN_00b726f0(param_1,&local_38,&local_48,&local_58,0x46);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
    local_38 = 0;
    local_30 = (void *)0x0;
  }
  FUN_00e705c8(&local_38,"Winter Season 2016");
  FUN_00e705c8(&local_48,"Maximum Fame Level Achieved in Winter Season 2016");
  FUN_00e705c8(&local_58,"BIRTHDAY SUITS");
  FUN_00b726f0(param_1,&local_38,&local_48,&local_58,10);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
    local_38 = 0;
    local_30 = (void *)0x0;
  }
  FUN_00e705c8(&local_38,"Autumn Season 2015");
  FUN_00e705c8(&local_48,"Maximum Fame Level Achieved in Autumn Season 2015");
  FUN_00e705c8(&local_58,"BIRTHDAY SUITS");
  FUN_00b726f0(param_1,&local_38,&local_48,&local_58,0x15);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
    local_38 = 0;
    local_30 = (void *)0x0;
  }
  FUN_00b72854(param_1,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b72c94(undefined8 param_1)

{
  long lVar1;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  undefined8 local_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00b71c88();
  FUN_00e705c8(&local_38,"Summer Season 2016");
  FUN_00e705c8(&local_48,"Maximum Skill Tier Achieved in Summer Season 2016");
  FUN_00e705c8(&local_58,"BIRTHDAY SUITS");
  FUN_00b72754(param_1,&local_38,&local_48,&local_58,0x12);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
    local_38 = 0;
    local_30 = (void *)0x0;
  }
  FUN_00e705c8(&local_38,"Spring Season 2016");
  FUN_00e705c8(&local_48,"Maximum Skill Tier Achieved in Spring Season 2016");
  FUN_00e705c8(&local_58,"BIRTHDAY SUITS");
  FUN_00b72754(param_1,&local_38,&local_48,&local_58,0x13);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
    local_38 = 0;
    local_30 = (void *)0x0;
  }
  FUN_00e705c8(&local_38,"Winter Season 2016");
  FUN_00e705c8(&local_48,"Maximum Skill Tier Achieved in Winter Season 2016");
  FUN_00e705c8(&local_58,"BIRTHDAY SUITS");
  FUN_00b72754(param_1,&local_38,&local_48,&local_58,0x14);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
    local_38 = 0;
    local_30 = (void *)0x0;
  }
  FUN_00e705c8(&local_38,"Autumn Season 2015");
  FUN_00e705c8(&local_48,"Maximum Skill Tier Achieved in Autumn Season 2015");
  FUN_00e705c8(&local_58,"BIRTHDAY SUITS");
  FUN_00b72754(param_1,&local_38,&local_48,&local_58,0x15);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
    local_38 = 0;
    local_30 = (void *)0x0;
  }
  FUN_00b72854(param_1,2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b72ec8(undefined8 param_1)

{
  long lVar1;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  undefined8 local_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00b71c88();
  FUN_00e705c8(&local_38,"Autumn Season 2017");
  FUN_00e705c8(&local_48,"Maximum Skill Tier and Fame Level Achieved in Autumn Season 2016");
  FUN_00e705c8(&local_58,"BIRTHDAY SUITS");
  FUN_00e705c8(&local_68,"SURPRISE!");
  FUN_00e705c8(&local_78,"SurpriseBirthday");
  FUN_00b727b8(param_1,&local_38,&local_48,&local_58,&local_68,&local_78,0xffffffff,0xffffffff,0x12)
  ;
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
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
    local_38 = 0;
    local_30 = (void *)0x0;
  }
  FUN_00e705c8(&local_38,"Autumn Season 2016");
  FUN_00e705c8(&local_48,"Maximum Skill Tier and Fame Level Achieved in Autumn Season 2016");
  FUN_00e705c8(&local_58,"BIRTHDAY SUITS");
  FUN_00e705c8(&local_68,"SURPRISE!");
  FUN_00e705c8(&local_78,"SurpriseBirthday");
  FUN_00b727b8(param_1,&local_38,&local_48,&local_58,&local_68,&local_78,0x10,0x5a,0x12);
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
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
    local_38 = 0;
    local_30 = (void *)0x0;
  }
  FUN_00e705c8(&local_38,"Summer Season 2016");
  FUN_00e705c8(&local_48,"Maximum Skill Tier and Fame Level Achieved in Summer Season 2016");
  FUN_00e705c8(&local_58,"BIRTHDAY SUITS");
  FUN_00e705c8(&local_68,"SURPRISE!");
  FUN_00e705c8(&local_78,"SurpriseBirthday");
  FUN_00b727b8(param_1,&local_38,&local_48,&local_58,&local_68,&local_78,6,0x5a,0x12);
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
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
    local_38 = 0;
    local_30 = (void *)0x0;
  }
  FUN_00e705c8(&local_38,"Summer Season 2016");
  FUN_00e705c8(&local_48,"Maximum Fame Level Achieved in Summer Season 2016");
  FUN_00e705c8(&local_58,"BIRTHDAY SUITS");
  FUN_00b726f0(param_1,&local_38,&local_48,&local_58,0x5a);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
    local_38 = 0;
    local_30 = (void *)0x0;
  }
  FUN_00e705c8(&local_38,"Summer Season 2016");
  FUN_00e705c8(&local_48,"Maximum Skill Tier Achieved in Summer Season 2016");
  FUN_00e705c8(&local_58,"BIRTHDAY SUITS");
  FUN_00b72754(param_1,&local_38,&local_48,&local_58,0x12);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
    local_38 = 0;
    local_30 = (void *)0x0;
  }
  FUN_00e705c8(&local_38,"Spring Season 2016");
  FUN_00e705c8(&local_48,"Maximum Skill Tier and Fame Level Achieved in Spring Season 2016");
  FUN_00e705c8(&local_58,"BIRTHDAY SUITS");
  FUN_00e705c8(&local_68,"SURPRISE!");
  FUN_00e705c8(&local_78,"SurpriseBirthday");
  FUN_00b727b8(param_1,&local_38,&local_48,&local_58,&local_68,&local_78,0x12,0x50,0x1c);
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
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
    local_38 = 0;
    local_30 = (void *)0x0;
  }
  FUN_00e705c8(&local_38,"Winter Season 2016");
  FUN_00e705c8(&local_48,"Maximum Skill Tier and Fame Level Achieved in Winter Season 2016");
  FUN_00e705c8(&local_58,"BIRTHDAY SUITS");
  FUN_00e705c8(&local_68,"SURPRISE!");
  FUN_00e705c8(&local_78,"SurpriseBirthday");
  FUN_00b727b8(param_1,&local_38,&local_48,&local_58,&local_68,&local_78,0xc,0x46,0x16);
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
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
    local_38 = 0;
    local_30 = (void *)0x0;
  }
  FUN_00e705c8(&local_38,"Autumn Season 2015");
  FUN_00e705c8(&local_48,"Maximum Skill Tier and Fame Level Achieved in Autumn Season 2015");
  FUN_00e705c8(&local_58,"BIRTHDAY SUITS");
  FUN_00e705c8(&local_68,"SURPRISE!");
  FUN_00e705c8(&local_78,"SurpriseBirthday");
  FUN_00b727b8(param_1,&local_38,&local_48,&local_58,&local_68,&local_78,0x19,0xb,0x19);
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
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
    local_38 = 0;
    local_30 = (void *)0x0;
  }
  FUN_00b72854(param_1,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

