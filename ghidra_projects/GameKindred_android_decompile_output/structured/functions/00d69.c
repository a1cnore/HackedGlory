// functions/00d69 — 27 functions
#include "libGameKindred.h"




void FUN_00d690e4(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  uint uVar8;
  int local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00d67c68(param_1 + 0xa0,param_2,&local_4c);
  if ((uVar4 & 1) != 0) {
    lVar1 = param_1 + 0x168;
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x168))(lVar1,PTR_s___RSRC___02bed668);
    puVar5 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar5 = param_3;
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x168))(lVar1,PTR_s___RSRC_VALUE___02bed670);
    puVar6 = (undefined8 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar6 = param_4;
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x168))(lVar1,PTR_s___PARENT___02bed638);
    plVar7 = (long *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar1,uVar3);
    *plVar7 = param_1;
    uVar8 = *(uint *)(param_1 + 0x160);
    if (uVar8 != 0) {
      uVar4 = 0;
      do {
        if (*(int *)(param_1 + 0xa0 + uVar4 * 4) == local_4c) {
          (**(code **)(param_1 + 0xa0 + uVar4 * 8 + 0x40))(lVar1);
          uVar8 = *(uint *)(param_1 + 0x160);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar8);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d69224(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  puVar1 = PTR_s___PARENT___02bed638;
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___PARENT___02bed638);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_2 = *puVar3;
  }
  return;
}




void thunk_FUN_00d69224(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  puVar1 = PTR_s___PARENT___02bed638;
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___PARENT___02bed638);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_2 = *puVar3;
  }
  return;
}




void FUN_00d69294(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  puVar1 = PTR_s___PARENT___02bed638;
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___PARENT___02bed638);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_2 = *puVar3;
  }
  puVar1 = PTR_s___COMBAT_PARAMS___02bed6d0;
  if (param_3 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___COMBAT_PARAMS___02bed6d0);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_3 = *puVar3;
  }
  return;
}




void thunk_FUN_00d69294(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  puVar1 = PTR_s___PARENT___02bed638;
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___PARENT___02bed638);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_2 = *puVar3;
  }
  puVar1 = PTR_s___COMBAT_PARAMS___02bed6d0;
  if (param_3 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___COMBAT_PARAMS___02bed6d0);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_3 = *puVar3;
  }
  return;
}




void thunk_FUN_00d69294(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  puVar1 = PTR_s___PARENT___02bed638;
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___PARENT___02bed638);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_2 = *puVar3;
  }
  puVar1 = PTR_s___COMBAT_PARAMS___02bed6d0;
  if (param_3 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___COMBAT_PARAMS___02bed6d0);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_3 = *puVar3;
  }
  return;
}




void thunk_FUN_00d69354(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  puVar1 = PTR_s___PARENT___02bed638;
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___PARENT___02bed638);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_2 = *puVar3;
  }
  puVar1 = PTR_s___COMBAT_HEAL_PARAMS___02bed6d8;
  if (param_3 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___COMBAT_HEAL_PARAMS___02bed6d8);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_3 = *puVar3;
  }
  return;
}




void FUN_00d69354(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  puVar1 = PTR_s___PARENT___02bed638;
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___PARENT___02bed638);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_2 = *puVar3;
  }
  puVar1 = PTR_s___COMBAT_HEAL_PARAMS___02bed6d8;
  if (param_3 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___COMBAT_HEAL_PARAMS___02bed6d8);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_3 = *puVar3;
  }
  return;
}




void FUN_00d69408(long *param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = PTR_s___PARENT___02bed638;
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___PARENT___02bed638);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_2 = *puVar3;
  }
  puVar1 = PTR_s___ABILITY_BEHAVIOR_NAME_HASH___02bed6b8;
  if (param_3 != (undefined4 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___ABILITY_BEHAVIOR_NAME_HASH___02bed6b8);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_3 = *puVar4;
  }
  puVar1 = PTR_s___PRE_ABILITY_TRIGGERED_INT_DATA_02bed6c0;
  if (param_4 != (undefined4 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___PRE_ABILITY_TRIGGERED_INT_DATA_02bed6c0);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_4 = *puVar4;
  }
  puVar1 = PTR_s___PRE_ABILITY_TRIGGERED_FLOAT_DA_02bed6c8;
  if (param_5 != (undefined4 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___PRE_ABILITY_TRIGGERED_FLOAT_DA_02bed6c8);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_5 = *puVar4;
  }
  return;
}




void FUN_00d69554(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = PTR_s___PARENT___02bed638;
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___PARENT___02bed638);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_2 = *puVar3;
  }
  puVar1 = PTR_s___ABILITY_BEHAVIOR_NAME_HASH___02bed6b8;
  if (param_3 != (undefined4 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___ABILITY_BEHAVIOR_NAME_HASH___02bed6b8);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_3 = *puVar4;
  }
  return;
}




void thunk_FUN_00d69554(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = PTR_s___PARENT___02bed638;
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___PARENT___02bed638);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_2 = *puVar3;
  }
  puVar1 = PTR_s___ABILITY_BEHAVIOR_NAME_HASH___02bed6b8;
  if (param_3 != (undefined4 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___ABILITY_BEHAVIOR_NAME_HASH___02bed6b8);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_3 = *puVar4;
  }
  return;
}




void thunk_FUN_00d69554(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = PTR_s___PARENT___02bed638;
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___PARENT___02bed638);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_2 = *puVar3;
  }
  puVar1 = PTR_s___ABILITY_BEHAVIOR_NAME_HASH___02bed6b8;
  if (param_3 != (undefined4 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___ABILITY_BEHAVIOR_NAME_HASH___02bed6b8);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_3 = *puVar4;
  }
  return;
}




void FUN_00d69610(long *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = PTR_s___PARENT___02bed638;
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___PARENT___02bed638);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_2 = *puVar3;
  }
  puVar1 = PTR_s___BESTOWER___02bed640;
  if (param_3 != (undefined4 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___BESTOWER___02bed640);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_3 = *puVar4;
  }
  puVar1 = PTR_s___BUFF_DATA___02bed678;
  if (param_4 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___BUFF_DATA___02bed678);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_4 = *puVar3;
  }
  puVar1 = PTR_s___DURATION___02bed680;
  if (param_5 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___DURATION___02bed680);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_5 = *puVar3;
  }
  return;
}




void thunk_FUN_00d69610(long *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
                       undefined8 *param_5)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = PTR_s___PARENT___02bed638;
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___PARENT___02bed638);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_2 = *puVar3;
  }
  puVar1 = PTR_s___BESTOWER___02bed640;
  if (param_3 != (undefined4 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___BESTOWER___02bed640);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_3 = *puVar4;
  }
  puVar1 = PTR_s___BUFF_DATA___02bed678;
  if (param_4 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___BUFF_DATA___02bed678);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_4 = *puVar3;
  }
  puVar1 = PTR_s___DURATION___02bed680;
  if (param_5 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___DURATION___02bed680);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_5 = *puVar3;
  }
  return;
}




void FUN_00d69760(long *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = PTR_s___PARENT___02bed638;
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___PARENT___02bed638);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_2 = *puVar3;
  }
  puVar1 = PTR_s___SPEED___02bed690;
  if (param_3 != (undefined4 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___SPEED___02bed690);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_3 = *puVar4;
  }
  puVar1 = PTR_s___LOCATION_X___02bed6a0;
  if (param_4 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___LOCATION_X___02bed6a0);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_4 = *puVar3;
  }
  puVar1 = PTR_s___LOCATION_Z___02bed6b0;
  if (param_5 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___LOCATION_Z___02bed6b0);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_5 = *puVar3;
  }
  puVar1 = PTR_s___CANCEL_FLAG___02bed688;
  if (param_6 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___CANCEL_FLAG___02bed688);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_6 = *puVar3;
  }
  return;
}




void thunk_FUN_00d69760(long *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
                       undefined8 *param_5,undefined8 *param_6)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = PTR_s___PARENT___02bed638;
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___PARENT___02bed638);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_2 = *puVar3;
  }
  puVar1 = PTR_s___SPEED___02bed690;
  if (param_3 != (undefined4 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___SPEED___02bed690);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_3 = *puVar4;
  }
  puVar1 = PTR_s___LOCATION_X___02bed6a0;
  if (param_4 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___LOCATION_X___02bed6a0);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_4 = *puVar3;
  }
  puVar1 = PTR_s___LOCATION_Z___02bed6b0;
  if (param_5 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___LOCATION_Z___02bed6b0);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_5 = *puVar3;
  }
  puVar1 = PTR_s___CANCEL_FLAG___02bed688;
  if (param_6 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___CANCEL_FLAG___02bed688);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_6 = *puVar3;
  }
  return;
}




void FUN_00d69900(long *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = PTR_s___PARENT___02bed638;
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___PARENT___02bed638);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_2 = *puVar3;
  }
  puVar1 = PTR_s___SPEED___02bed690;
  if (param_3 != (undefined4 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___SPEED___02bed690);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_3 = *puVar4;
  }
  puVar1 = PTR_s___HEIGHT___02bed698;
  if (param_4 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___HEIGHT___02bed698);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_4 = *puVar3;
  }
  puVar1 = PTR_s___CANCEL_FLAG___02bed688;
  if (param_5 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___CANCEL_FLAG___02bed688);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_5 = *puVar3;
  }
  return;
}




void thunk_FUN_00d69900(long *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
                       undefined8 *param_5)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = PTR_s___PARENT___02bed638;
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___PARENT___02bed638);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_2 = *puVar3;
  }
  puVar1 = PTR_s___SPEED___02bed690;
  if (param_3 != (undefined4 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___SPEED___02bed690);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_3 = *puVar4;
  }
  puVar1 = PTR_s___HEIGHT___02bed698;
  if (param_4 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___HEIGHT___02bed698);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_4 = *puVar3;
  }
  puVar1 = PTR_s___CANCEL_FLAG___02bed688;
  if (param_5 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___CANCEL_FLAG___02bed688);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_5 = *puVar3;
  }
  return;
}




void FUN_00d69a50(long *param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined8 *param_5)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = PTR_s___PARENT___02bed638;
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___PARENT___02bed638);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_2 = *puVar3;
  }
  puVar1 = PTR_s___ATTR___02bed650;
  if (param_3 != (undefined4 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___ATTR___02bed650);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_3 = *puVar4;
  }
  puVar1 = PTR_s___ATTR_PART___02bed658;
  if (param_4 != (undefined4 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___ATTR_PART___02bed658);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_4 = *puVar4;
  }
  puVar1 = PTR_s___ATTR_VALUE___02bed660;
  if (param_5 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___ATTR_VALUE___02bed660);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_5 = *puVar3;
  }
  return;
}




void FUN_00d69b9c(long *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = PTR_s___PARENT___02bed638;
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___PARENT___02bed638);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_2 = *puVar3;
  }
  puVar1 = PTR_s___RSRC___02bed668;
  if (param_3 != (undefined4 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___RSRC___02bed668);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_3 = *puVar4;
  }
  puVar1 = PTR_s___RSRC_VALUE___02bed670;
  if (param_4 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___RSRC_VALUE___02bed670);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_4 = *puVar3;
  }
  return;
}




void FUN_00d69ca0(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = PTR_s___PARENT___02bed638;
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___PARENT___02bed638);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x18))(param_1,uVar2);
    *param_2 = *puVar3;
  }
  puVar1 = PTR_s___LOCATION_X___02bed6a0;
  if (param_3 != (undefined4 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___LOCATION_X___02bed6a0);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x18))(param_1,uVar2);
    *param_3 = *puVar4;
    param_3[1] = 0;
    puVar1 = PTR_s___LOCATION_Z___02bed6b0;
    uVar2 = FUN_00e6a474(PTR_s___LOCATION_Z___02bed6b0);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x18))(param_1,uVar2);
    param_3[2] = *puVar4;
  }
  return;
}




void FUN_00d69d94(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  puVar1 = PTR_s___PARENT___02bed638;
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___PARENT___02bed638);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x18))(param_1,uVar2);
    *param_2 = *puVar3;
  }
  puVar1 = PTR_s___ACTOR___02bed648;
  if (param_3 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___ACTOR___02bed648);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x18))(param_1,uVar2);
    *param_3 = *puVar3;
  }
  return;
}




void thunk_FUN_00d69d94(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  puVar1 = PTR_s___PARENT___02bed638;
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___PARENT___02bed638);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x18))(param_1,uVar2);
    *param_2 = *puVar3;
  }
  puVar1 = PTR_s___ACTOR___02bed648;
  if (param_3 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___ACTOR___02bed648);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x18))(param_1,uVar2);
    *param_3 = *puVar3;
  }
  return;
}




void FUN_00d69e4c(long *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
                 undefined8 param_5,undefined8 *param_6)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_s___PARENT___02bed638;
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___PARENT___02bed638);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_2 = *puVar3;
  }
  puVar1 = PTR_s___BESTOWER___02bed640;
  if (param_3 != (undefined4 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___BESTOWER___02bed640);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_3 = *puVar4;
  }
  puVar1 = PTR_s___REAPPLYING_VAR1_FLOAT___02bed700;
  if (param_4 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___REAPPLYING_VAR1_FLOAT___02bed700);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    uVar5 = (**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_4 = uVar5;
  }
  puVar1 = PTR_s___REAPPLYING_VAR1_INT___02bed710;
  if (param_6 != (undefined8 *)0x0) {
    uVar2 = FUN_00e6a474(PTR_s___REAPPLYING_VAR1_INT___02bed710);
    uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
    uVar5 = (**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *param_6 = uVar5;
  }
  return;
}




float FUN_00d69f90(long param_1)

{
  if ((*(byte *)(param_1 + 0x340) >> 4 & 1) == 0) {
    return 1.0 - *(float *)(param_1 + 0x318) / *(float *)(param_1 + 0x31c);
  }
  return 1.0;
}




undefined1  [16] FUN_00d69fb8(void)

{
  return ZEXT816(0x3f800000);
}




void FUN_00d69fc0(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = (*(code *)**(undefined8 **)(param_1 + 0x168))(param_1 + 0x168,PTR_s___VAR1_INT___02bed6f0)
  ;
  puVar2 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(param_1 + 0x168,uVar1);
  *puVar2 = param_2;
  return;
}

