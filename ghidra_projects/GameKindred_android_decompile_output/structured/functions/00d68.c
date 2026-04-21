// functions/00d68 — 19 functions
#include "libGameKindred.h"




void FUN_00d68034(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
    while (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x90))(plVar2,param_1,param_2);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    }
  }
  return;
}




void FUN_00d68098(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
    while (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x68))(plVar2,param_1);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    }
  }
  return;
}




void FUN_00d680ec(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  long *plVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
    while (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x70))(plVar2,param_1,param_2,param_3,param_4);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    }
  }
  return;
}




void FUN_00d68168(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
    while (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x78))(plVar2,param_1,param_2);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    }
  }
  return;
}




void FUN_00d681cc(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
    while (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x80))(plVar2,param_1,param_2);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    }
  }
  return;
}




void FUN_00d68230(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
    while (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0xa8))(plVar2,param_1);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    }
  }
  return;
}




void FUN_00d68284(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
    while (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0xb0))(plVar2,param_1,param_2);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    }
  }
  return;
}




void FUN_00d682e8(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
    while (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0xb8))(plVar2,param_1);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    }
  }
  return;
}




void FUN_00d6833c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  uint uVar7;
  int local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00d67c68(param_1 + 0xa0,param_2,&local_4c);
  if ((uVar4 & 1) != 0) {
    lVar1 = param_1 + 0x168;
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x168))(lVar1,PTR_s___COMBAT_PARAMS___02bed6d0);
    puVar5 = (undefined8 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar5 = param_3;
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x168))(lVar1,PTR_s___PARENT___02bed638);
    plVar6 = (long *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar1,uVar3);
    *plVar6 = param_1;
    uVar7 = *(uint *)(param_1 + 0x160);
    if (uVar7 != 0) {
      uVar4 = 0;
      do {
        if (*(int *)(param_1 + 0xa0 + uVar4 * 4) == local_4c) {
          (**(code **)(param_1 + 0xa0 + uVar4 * 8 + 0x40))(lVar1);
          uVar7 = *(uint *)(param_1 + 0x160);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar7);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d68448(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  uint uVar7;
  int local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00d67c68(param_1 + 0xa0,param_2,&local_4c);
  if ((uVar4 & 1) != 0) {
    lVar1 = param_1 + 0x168;
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x168))
                      (lVar1,PTR_s___COMBAT_HEAL_PARAMS___02bed6d8);
    puVar5 = (undefined8 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar5 = param_3;
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x168))(lVar1,PTR_s___PARENT___02bed638);
    plVar6 = (long *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar1,uVar3);
    *plVar6 = param_1;
    uVar7 = *(uint *)(param_1 + 0x160);
    if (uVar7 != 0) {
      uVar4 = 0;
      do {
        if (*(int *)(param_1 + 0xa0 + uVar4 * 4) == local_4c) {
          (**(code **)(param_1 + 0xa0 + uVar4 * 8 + 0x40))(lVar1);
          uVar7 = *(uint *)(param_1 + 0x160);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar7);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d68554(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  uint uVar6;
  int local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00d67c68(param_1 + 0xa0,param_2,&local_4c);
  if ((uVar4 & 1) != 0) {
    lVar1 = param_1 + 0x168;
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x168))(lVar1,PTR_s___PARENT___02bed638);
    plVar5 = (long *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar1,uVar3);
    *plVar5 = param_1;
    uVar6 = *(uint *)(param_1 + 0x160);
    if (uVar6 != 0) {
      uVar4 = 0;
      do {
        if (*(int *)(param_1 + 0xa0 + uVar4 * 4) == local_4c) {
          (**(code **)(param_1 + 0xa0 + uVar4 * 8 + 0x40))(lVar1);
          uVar6 = *(uint *)(param_1 + 0x160);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar6);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d6862c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  uint uVar7;
  int local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00d67c68(param_1 + 0xa0,param_2,&local_4c);
  if ((uVar4 & 1) != 0) {
    lVar1 = param_1 + 0x168;
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x168))(lVar1,PTR_s___PARENT___02bed638);
    plVar5 = (long *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar1,uVar3);
    *plVar5 = param_1;
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x168))(lVar1,PTR_s___ACTOR___02bed648);
    puVar6 = (undefined8 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar6 = param_3;
    uVar7 = *(uint *)(param_1 + 0x160);
    if (uVar7 != 0) {
      uVar4 = 0;
      do {
        if (*(int *)(param_1 + 0xa0 + uVar4 * 4) == local_4c) {
          (**(code **)(param_1 + 0xa0 + uVar4 * 8 + 0x40))(lVar1);
          uVar7 = *(uint *)(param_1 + 0x160);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar7);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d68738(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined4 *puVar6;
  uint uVar7;
  int local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00d67c68(param_1 + 0xa0,param_2,&local_4c);
  if ((uVar4 & 1) != 0) {
    lVar1 = param_1 + 0x168;
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x168))(lVar1,PTR_s___PARENT___02bed638);
    plVar5 = (long *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar1,uVar3);
    *plVar5 = param_1;
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x168))
                      (lVar1,PTR_s___ABILITY_BEHAVIOR_NAME_HASH___02bed6b8);
    puVar6 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar6 = param_3;
    uVar7 = *(uint *)(param_1 + 0x160);
    if (uVar7 != 0) {
      uVar4 = 0;
      do {
        if (*(int *)(param_1 + 0xa0 + uVar4 * 4) == local_4c) {
          (**(code **)(param_1 + 0xa0 + uVar4 * 8 + 0x40))(lVar1);
          uVar7 = *(uint *)(param_1 + 0x160);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar7);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d68844(float param_1,long param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  int local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00d67c68(param_2 + 0xa0,param_3,&local_5c);
  if ((uVar4 & 1) != 0) {
    lVar1 = param_2 + 0x168;
    uVar3 = (*(code *)**(undefined8 **)(param_2 + 0x168))(lVar1,PTR_s___PARENT___02bed638);
    plVar5 = (long *)(**(code **)(*(long *)(param_2 + 0x168) + 0x10))(lVar1,uVar3);
    *plVar5 = param_2;
    uVar3 = (*(code *)**(undefined8 **)(param_2 + 0x168))
                      (lVar1,PTR_s___ABILITY_BEHAVIOR_NAME_HASH___02bed6b8);
    puVar6 = (undefined4 *)(**(code **)(*(long *)(param_2 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar6 = param_4;
    uVar3 = (*(code *)**(undefined8 **)(param_2 + 0x168))
                      (lVar1,PTR_s___PRE_ABILITY_TRIGGERED_INT_DATA_02bed6c0);
    puVar6 = (undefined4 *)(**(code **)(*(long *)(param_2 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar6 = param_5;
    uVar3 = (*(code *)**(undefined8 **)(param_2 + 0x168))
                      (lVar1,PTR_s___PRE_ABILITY_TRIGGERED_FLOAT_DA_02bed6c8);
    piVar7 = (int *)(**(code **)(*(long *)(param_2 + 0x168) + 0x10))(lVar1,uVar3);
    *piVar7 = (int)param_1;
    uVar8 = *(uint *)(param_2 + 0x160);
    if (uVar8 != 0) {
      uVar4 = 0;
      do {
        if (*(int *)(param_2 + 0xa0 + uVar4 * 4) == local_5c) {
          (**(code **)(param_2 + 0xa0 + uVar4 * 8 + 0x40))(lVar1);
          uVar8 = *(uint *)(param_2 + 0x160);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar8);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d689c4(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined4 *puVar6;
  uint uVar7;
  int local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00d67c68(param_1 + 0xa0,param_2,&local_4c);
  if ((uVar4 & 1) != 0) {
    lVar1 = param_1 + 0x168;
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x168))(lVar1,PTR_s___PARENT___02bed638);
    plVar5 = (long *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar1,uVar3);
    *plVar5 = param_1;
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x168))
                      (lVar1,PTR_s___ABILITY_BEHAVIOR_NAME_HASH___02bed6b8);
    puVar6 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar6 = param_3;
    uVar7 = *(uint *)(param_1 + 0x160);
    if (uVar7 != 0) {
      uVar4 = 0;
      do {
        if (*(int *)(param_1 + 0xa0 + uVar4 * 4) == local_4c) {
          (**(code **)(param_1 + 0xa0 + uVar4 * 8 + 0x40))(lVar1);
          uVar7 = *(uint *)(param_1 + 0x160);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar7);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d68ad0(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  long *plVar7;
  uint uVar8;
  int local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00d67c68(param_1 + 0xa0,param_2,&local_4c);
  if ((uVar4 & 1) != 0) {
    lVar1 = param_1 + 0x168;
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x168))(lVar1,PTR_s___BUFF_DATA___02bed678);
    puVar5 = (undefined8 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar5 = param_5;
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x168))(lVar1,PTR_s___BESTOWER___02bed640);
    puVar6 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar6 = param_3;
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x168))(lVar1,PTR_s___DURATION___02bed680);
    puVar5 = (undefined8 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar5 = param_4;
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




void FUN_00d68c44(undefined4 param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5
                 )

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  int local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00d67c68(param_2 + 0xa0,param_3,&local_5c);
  if ((uVar4 & 1) != 0) {
    lVar1 = param_2 + 0x168;
    uVar3 = (*(code *)**(undefined8 **)(param_2 + 0x168))(lVar1,PTR_s___PARENT___02bed638);
    plVar5 = (long *)(**(code **)(*(long *)(param_2 + 0x168) + 0x10))(lVar1,uVar3);
    *plVar5 = param_2;
    uVar3 = (*(code *)**(undefined8 **)(param_2 + 0x168))(lVar1,PTR_s___SPEED___02bed690);
    puVar6 = (undefined4 *)(**(code **)(*(long *)(param_2 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar6 = param_1;
    uVar3 = (*(code *)**(undefined8 **)(param_2 + 0x168))(lVar1,PTR_s___LOCATION_X___02bed6a0);
    plVar5 = (long *)(**(code **)(*(long *)(param_2 + 0x168) + 0x10))(lVar1,uVar3);
    *plVar5 = param_4;
    uVar3 = (*(code *)**(undefined8 **)(param_2 + 0x168))(lVar1,PTR_s___LOCATION_Z___02bed6b0);
    plVar5 = (long *)(**(code **)(*(long *)(param_2 + 0x168) + 0x10))(lVar1,uVar3);
    *plVar5 = param_4 + 8;
    uVar3 = (*(code *)**(undefined8 **)(param_2 + 0x168))(lVar1,PTR_s___CANCEL_FLAG___02bed688);
    puVar7 = (undefined8 *)(**(code **)(*(long *)(param_2 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar7 = param_5;
    uVar8 = *(uint *)(param_2 + 0x160);
    if (uVar8 != 0) {
      uVar4 = 0;
      do {
        if (*(int *)(param_2 + 0xa0 + uVar4 * 4) == local_5c) {
          (**(code **)(param_2 + 0xa0 + uVar4 * 8 + 0x40))(lVar1);
          uVar8 = *(uint *)(param_2 + 0x160);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar8);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d68df4(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  int local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00d67c68(param_2 + 0xa0,param_3,&local_5c);
  if ((uVar4 & 1) != 0) {
    lVar1 = param_2 + 0x168;
    uVar3 = (*(code *)**(undefined8 **)(param_2 + 0x168))(lVar1,PTR_s___PARENT___02bed638);
    plVar5 = (long *)(**(code **)(*(long *)(param_2 + 0x168) + 0x10))(lVar1,uVar3);
    *plVar5 = param_2;
    uVar3 = (*(code *)**(undefined8 **)(param_2 + 0x168))(lVar1,PTR_s___SPEED___02bed690);
    puVar6 = (undefined4 *)(**(code **)(*(long *)(param_2 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar6 = param_1;
    uVar3 = (*(code *)**(undefined8 **)(param_2 + 0x168))(lVar1,PTR_s___HEIGHT___02bed698);
    puVar7 = (undefined8 *)(**(code **)(*(long *)(param_2 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar7 = param_4;
    uVar3 = (*(code *)**(undefined8 **)(param_2 + 0x168))(lVar1,PTR_s___CANCEL_FLAG___02bed688);
    puVar7 = (undefined8 *)(**(code **)(*(long *)(param_2 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar7 = param_5;
    uVar8 = *(uint *)(param_2 + 0x160);
    if (uVar8 != 0) {
      uVar4 = 0;
      do {
        if (*(int *)(param_2 + 0xa0 + uVar4 * 4) == local_5c) {
          (**(code **)(param_2 + 0xa0 + uVar4 * 8 + 0x40))(lVar1);
          uVar8 = *(uint *)(param_2 + 0x160);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar8);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d68f70(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

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
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x168))(lVar1,PTR_s___ATTR___02bed650);
    puVar5 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar5 = param_3;
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x168))(lVar1,PTR_s___ATTR_PART___02bed658);
    puVar5 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar5 = param_4;
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x168))(lVar1,PTR_s___ATTR_VALUE___02bed660);
    puVar6 = (undefined8 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar6 = param_5;
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

