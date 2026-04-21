// functions/00aa0 — 37 functions
#include "libGameKindred.h"




void FUN_00aa0018(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
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




void FUN_00aa0098(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = *param_1;
  uVar2 = (uint)((ulong)((long)param_3 - (long)param_2) >> 3);
  if (uVar1 == uVar2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 2);
    for (; (undefined8 *)(lVar3 + (ulong)uVar1 * 8) != param_3; param_3 = param_3 + 1) {
      *param_2 = *param_3;
      param_2 = param_2 + 1;
    }
    *param_1 = uVar1 - uVar2;
  }
  return;
}




undefined8 FUN_00aa0104(void)

{
  return DAT_03133ab0;
}




void FUN_00aa0110(undefined8 *param_1)

{
  FUN_00f017e8();
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0xffffffffffffffff;
  *param_1 = &PTR_FUN_027d16d8;
  DAT_03133ab0 = param_1;
  return;
}




void FUN_00aa0158(undefined8 *param_1)

{
  long *plVar1;
  void *pvVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  
  *param_1 = &PTR_FUN_027d16d8;
  puVar5 = (uint *)(param_1 + 0x11);
  uVar3 = *puVar5;
  if (uVar3 != 0) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      plVar1 = *(long **)(param_1[0x12] + lVar6);
      if (plVar1 == (long *)0x0) {
        puVar4 = (undefined8 *)(param_1[0x12] + uVar7 * 8);
      }
      else {
        (**(code **)(*plVar1 + 8))();
        uVar3 = *(uint *)(param_1 + 0x11);
        puVar4 = (undefined8 *)(param_1[0x12] + lVar6);
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 8;
      *puVar4 = 0;
    } while (uVar7 < uVar3);
  }
  pvVar2 = (void *)param_1[0x12];
  if (pvVar2 != (void *)0x0) {
    *puVar5 = 0;
  }
  DAT_03133ab0 = 0;
  if ((void *)param_1[0x14] != (void *)0x0) {
    operator_delete__((void *)param_1[0x14]);
    pvVar2 = (void *)param_1[0x12];
    param_1[0x13] = 0;
    param_1[0x14] = 0;
  }
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
    puVar5[0] = 0;
    puVar5[1] = 0;
    param_1[0x12] = 0;
  }
  FUN_00f01868(param_1);
  return;
}




void FUN_00aa021c(void *param_1)

{
  FUN_00aa0158();
  operator_delete(param_1);
  return;
}




void FUN_00aa0240(long *param_1,undefined4 param_2,long *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar2 = operator_new(0xe0);
  FUN_00b89cd8();
  puVar2[0x19] = param_3;
  *(undefined4 *)(puVar2 + 0x1a) = param_2;
  *(undefined4 *)((long)puVar2 + 0xd4) = param_2;
  *puVar2 = &PTR_FUN_027d17d8;
  *(undefined4 *)(puVar2 + 0x1b) = param_2;
  FUN_00f023ec(puVar2,param_3,1);
  local_50 = puVar2;
  FUN_00aa0324(param_1 + 0x11,&local_50);
  (**(code **)(*param_1 + 0x78))(param_1,local_50,1);
  (**(code **)(*param_3 + 0x138))(param_3);
  local_58 = param_2;
  uStack_54 = param_2;
  FUN_00aa03ac(param_1 + 0x13,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aa0324(uint *param_1,undefined8 *param_2)

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
    FUN_00aa0f6c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00aa03ac(uint *param_1,undefined8 *param_2)

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
    FUN_00aa0fec(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00aa0434(long param_1,int param_2)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0xa8) != param_2) {
    if (*(int *)(param_1 + 0xa8) != -1) {
      FUN_00aa04c4(param_1,0);
    }
    FUN_00aa04c4(param_1,1,param_2);
    uVar1 = 0xffffffff;
    do {
      uVar1 = (ulong)((int)uVar1 + 1);
    } while (*(int *)(*(long *)(param_1 + 0xa0) + uVar1 * 8) != param_2);
    FUN_00aa0538(param_1,*(undefined4 *)(*(long *)(param_1 + 0xa0) + uVar1 * 8 + 4));
    *(int *)(param_1 + 0xa8) = param_2;
  }
  return;
}




bool FUN_00aa04b4(long param_1)

{
  return *(int *)(param_1 + 0xa8) == -1;
}




void FUN_00aa04c4(long param_1,uint param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  
  if (*(uint *)(param_1 + 0x88) != 0) {
    uVar2 = 0;
    do {
      lVar1 = *(long *)(*(long *)(param_1 + 0x90) + (ulong)uVar2 * 8);
      if (*(int *)(lVar1 + 0xd8) == param_3) goto LAB_00aa04f4;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x88));
  }
  lVar1 = 0;
LAB_00aa04f4:
  FUN_00aa0b34(param_1,param_2 & 1,lVar1);
  return;
}




int * FUN_00aa0500(long param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  
  if (*(uint *)(param_1 + 0x98) != 0) {
    uVar2 = 0;
    do {
      piVar1 = (int *)(*(long *)(param_1 + 0xa0) + (ulong)uVar2 * 8);
      if (*piVar1 == param_2) {
        return piVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x98));
  }
  return (int *)0x0;
}




void FUN_00aa0538(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (uVar1 == 0) {
    *(int *)(param_1 + 0xac) = param_2;
  }
  else {
    uVar2 = 0;
    do {
      lVar3 = *(long *)(*(long *)(param_1 + 0x90) + (ulong)uVar2 * 8);
      if (*(int *)(lVar3 + 0xd8) == *(int *)(param_1 + 0xac)) {
        if (lVar3 == 0) {
          *(int *)(param_1 + 0xac) = param_2;
          goto LAB_00aa05b4;
        }
        (**(code **)(**(long **)(lVar3 + 200) + 0x158))(*(long **)(lVar3 + 200),0);
        uVar1 = *(uint *)(param_1 + 0x88);
        break;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
    *(int *)(param_1 + 0xac) = param_2;
    if (uVar1 != 0) {
LAB_00aa05b4:
      uVar2 = 0;
      do {
        lVar3 = *(long *)(*(long *)(param_1 + 0x90) + (ulong)uVar2 * 8);
        if (*(int *)(lVar3 + 0xd8) == param_2) {
          if (lVar3 == 0) {
            return;
          }
          *(uint *)(*(long *)(lVar3 + 200) + 0x84) = *(uint *)(*(long *)(lVar3 + 200) + 0x84) | 4;
                    /* WARNING: Could not recover jumptable at 0x00aa0608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(**(long **)(lVar3 + 200) + 0x158))(*(long **)(lVar3 + 200),1);
          return;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar1);
    }
  }
  return;
}




undefined4 FUN_00aa0618(long param_1)

{
  return *(undefined4 *)(param_1 + 0xa8);
}




undefined4 FUN_00aa0620(long param_1)

{
  return *(undefined4 *)(param_1 + 0xac);
}




void FUN_00aa0628(long param_1,int param_2,undefined4 param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(uint *)(param_1 + 0x88) != 0) {
    uVar4 = 0;
    do {
      plVar5 = *(long **)(*(long *)(param_1 + 0x90) + (ulong)uVar4 * 8);
      if ((int)plVar5[0x1b] == param_2) goto LAB_00aa0690;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x88));
  }
  plVar5 = (long *)0x0;
LAB_00aa0690:
  puVar3 = operator_new(0xe0);
  lVar2 = plVar5[0x1a];
  FUN_00b89cd8();
  puVar3[0x19] = param_4;
  *(int *)(puVar3 + 0x1a) = (int)lVar2;
  *(int *)((long)puVar3 + 0xd4) = param_2;
  *puVar3 = &PTR_FUN_027d17d8;
  *(undefined4 *)(puVar3 + 0x1b) = param_3;
  FUN_00f023ec(puVar3,param_4,1);
  local_60 = puVar3;
  FUN_00aa0324(param_1 + 0x88,&local_60);
  (**(code **)(*plVar5 + 0x78))(plVar5,local_60,1);
  (**(code **)(*param_4 + 0x138))(param_4);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00aa0738(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  
  if (*(uint *)(param_1 + 0x88) != 0) {
    uVar2 = 0;
    do {
      lVar1 = *(long *)(*(long *)(param_1 + 0x90) + (ulong)uVar2 * 8);
      if (*(int *)(lVar1 + 0xd8) == param_2) {
        return lVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x88));
  }
  return 0;
}




void FUN_00aa0770(long param_1,int param_2)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  
  if (*(uint *)(param_1 + 0x88) == 0) {
    return;
  }
  lVar2 = 0;
  while (lVar4 = *(long *)(*(long *)(param_1 + 0x90) + lVar2 * 8), *(int *)(lVar4 + 0xd8) != param_2
        ) {
    lVar2 = lVar2 + 1;
    if (*(uint *)(param_1 + 0x88) <= (uint)lVar2) {
      return;
    }
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(uint *)(param_1 + 0x98) == 0) {
    return;
  }
  uVar3 = 0;
  while (piVar1 = (int *)(*(long *)(param_1 + 0xa0) + (ulong)uVar3 * 8),
        *piVar1 != *(int *)(lVar4 + 0xd0)) {
    uVar3 = uVar3 + 1;
    if (*(uint *)(param_1 + 0x98) <= uVar3) {
      return;
    }
  }
  if (piVar1 == (int *)0x0) {
    return;
  }
  do {
    if (piVar1[1] == param_2) {
      return;
    }
    if (piVar1[1] == *piVar1) {
      return;
    }
    FUN_00aa085c(param_1);
    if (*(uint *)(param_1 + 0x98) == 0) {
      return;
    }
    uVar3 = 0;
    while (piVar1 = (int *)(*(long *)(param_1 + 0xa0) + (ulong)uVar3 * 8),
          *piVar1 != *(int *)(lVar4 + 0xd0)) {
      uVar3 = uVar3 + 1;
      if (*(uint *)(param_1 + 0x98) <= uVar3) {
        return;
      }
    }
  } while (piVar1 != (int *)0x0);
  return;
}




void FUN_00aa085c(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  long lVar5;
  
  if (param_2 == -1) {
    if (*(int *)(param_1 + 0xa8) == -1) {
      return;
    }
    if (*(uint *)(param_1 + 0x98) != 0) {
      piVar3 = *(int **)(param_1 + 0xa0);
      uVar4 = 0;
      do {
        if (*piVar3 == *(int *)(param_1 + 0xa8)) goto LAB_00aa08e0;
        uVar4 = uVar4 + 1;
        piVar3 = piVar3 + 2;
      } while (uVar4 < *(uint *)(param_1 + 0x98));
    }
  }
  else if (*(uint *)(param_1 + 0x98) != 0) {
    uVar4 = 0;
    do {
      piVar3 = (int *)(*(long *)(param_1 + 0xa0) + (ulong)uVar4 * 8);
      if (*piVar3 == param_2) goto LAB_00aa08e0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x98));
  }
  piVar3 = (int *)0x0;
LAB_00aa08e0:
  iVar1 = piVar3[1];
  uVar4 = 0;
  do {
    lVar5 = *(long *)(*(long *)(param_1 + 0x90) + (ulong)uVar4 * 8);
    uVar4 = uVar4 + 1;
  } while (*(int *)(lVar5 + 0xd8) != iVar1);
  lVar5 = *(long *)(lVar5 + 0x20);
  if (lVar5 == param_1) {
    if (lVar5 != 0) {
      if (param_2 != -1) {
        return;
      }
      FUN_00aa0d2c(param_1);
      return;
    }
  }
  else {
    iVar2 = *(int *)(lVar5 + 0xd8);
    piVar3[1] = iVar2;
    if ((param_2 == -1) || (*(int *)(param_1 + 0xa8) == param_2)) {
      FUN_00aa0538(param_1,iVar2);
    }
  }
  FUN_00aa04c4(param_1,0,iVar1);
  return;
}




void FUN_00aa0978(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x88);
  if (*(uint *)(param_1 + 0x88) != 0) {
    uVar3 = 0;
    do {
      lVar2 = *(long *)(*(long *)(param_1 + 0x90) + uVar3 * 8);
      if (lVar2 != 0) {
        FUN_00aa0770(param_1,*(undefined4 *)(lVar2 + 0xd8));
        uVar1 = (ulong)*(uint *)(param_1 + 0x88);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return;
}




void FUN_00aa09c8(long param_1,int param_2,ulong param_3)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(int *)(param_1 + 0xac) != param_2) {
    if (*(uint *)(param_1 + 0x88) != 0) {
      uVar4 = 0;
      do {
        lVar6 = *(long *)(*(long *)(param_1 + 0x90) + (ulong)uVar4 * 8);
        if (*(int *)(lVar6 + 0xd8) == param_2) goto LAB_00aa0a2c;
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_1 + 0x88));
    }
    lVar6 = 0;
LAB_00aa0a2c:
    if ((param_3 & 1) == 0) {
      FUN_00aa0b34(param_1,1,lVar6);
      uVar5 = 0xffffffff;
      do {
        uVar5 = (ulong)((int)uVar5 + 1);
      } while (*(int *)(*(long *)(param_1 + 0xa0) + uVar5 * 8) != *(int *)(lVar6 + 0xd0));
      *(int *)(*(long *)(param_1 + 0xa0) + uVar5 * 8 + 4) = param_2;
      FUN_00aa0538(param_1,param_2);
    }
    else if (lVar6 != 0) {
      FUN_00aa0434(param_1,*(undefined4 *)(lVar6 + 0xd0));
      if ((*(int *)(lVar6 + 0xd0) != param_2) && (*(uint *)(param_1 + 0x98) != 0)) {
        uVar4 = 0;
        piVar3 = (int *)(*(long *)(param_1 + 0xa0) + 4);
        do {
          piVar1 = (int *)(*(long *)(param_1 + 0xa0) + (ulong)uVar4 * 8);
          if (*piVar1 == *(int *)(lVar6 + 0xd0)) {
            if ((piVar1 != (int *)0x0) && (*piVar3 != param_2)) {
              FUN_00aa0bb0(param_1,param_2);
            }
            break;
          }
          uVar4 = uVar4 + 1;
          piVar3 = piVar3 + 2;
        } while (uVar4 < *(uint *)(param_1 + 0x98));
      }
    }
    FUN_00f048e0(auStack_58,DAT_03133768,0);
    FUN_00f04760(param_1,auStack_58,1);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00aa0b34(undefined8 param_1,uint param_2,long *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*(long *)param_3[0x19] + 0x170))();
  if ((uVar1 & 1) == 0) {
    uVar2 = 5;
  }
  else {
    uVar2 = 1;
  }
  (**(code **)(*param_3 + 0x138))(0x3eb33333,param_3,param_2 & 1,uVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00aa0bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_3[0x19] + 0x148))((long *)param_3[0x19],param_2 & 1);
  return;
}




void FUN_00aa0bb0(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  
  if (*(uint *)(param_1 + 0x88) != 0) {
    uVar2 = 0;
    do {
      lVar1 = *(long *)(*(long *)(param_1 + 0x90) + (ulong)uVar2 * 8);
      if (*(int *)(lVar1 + 0xd8) == param_2) {
        if (lVar1 == 0) {
          return;
        }
        if ((*(int *)(param_1 + 0xac) != *(int *)(lVar1 + 0xd4)) &&
           (*(int *)(lVar1 + 0xd4) != *(int *)(lVar1 + 0xd0))) {
          FUN_00aa0bb0(param_1);
        }
        FUN_00aa09c8(param_1,param_2,0);
        return;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x88));
  }
  return;
}




void FUN_00aa0c40(long param_1)

{
  uint uVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 0x88) != 0) {
    uVar1 = 0;
    do {
      lVar2 = *(long *)(*(long *)(param_1 + 0x90) + (ulong)uVar1 * 8);
      if (*(int *)(lVar2 + 0xd8) == *(int *)(param_1 + 0xac)) {
        if (lVar2 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00aa0c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(lVar2 + 200) + 0x140))();
        return;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x88));
  }
  return;
}




void FUN_00aa0c8c(long param_1,int param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (uVar1 == 0) {
    plVar4 = (long *)0x0;
  }
  else {
    uVar3 = 0;
    do {
      plVar4 = *(long **)(*(long *)(param_1 + 0x90) + (ulong)uVar3 * 8);
      if ((int)plVar4[0x1b] == param_2) goto LAB_00aa0cc8;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
    plVar4 = (long *)0x0;
LAB_00aa0cc8:
    uVar3 = 0;
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x90) + (ulong)uVar3 * 8);
      if (*(int *)(lVar5 + 0xd8) == param_3) goto LAB_00aa0cf4;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  lVar5 = 0;
LAB_00aa0cf4:
  uVar2 = FUN_00f02540(lVar5);
  if ((uVar2 & 1) != 0) {
    FUN_00f01a4c(lVar5,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00aa0d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x78))(plVar4,lVar5,1);
  return;
}




void FUN_00aa0d2c(long param_1)

{
  if (*(int *)(param_1 + 0xa8) != -1) {
    FUN_00aa04c4(param_1,0);
  }
  *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
  FUN_00aa0538(param_1,0xffffffff);
  return;
}




void FUN_00aa0d70(long param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      lVar3 = *(long *)(*(long *)(param_1 + 0x90) + (ulong)uVar2 * 8);
      if (lVar3 == 0) {
        return;
      }
      if ((*(int *)(lVar3 + 0xd0) == param_2) && (*(int *)(lVar3 + 0xd8) < param_3)) {
        *(uint *)(*(long *)(lVar3 + 200) + 0x84) =
             *(uint *)(*(long *)(lVar3 + 200) + 0x84) & 0xfffffffb;
        uVar1 = *(uint *)(param_1 + 0x88);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}




void FUN_00aa0dc4(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 0x88) != 0) {
    uVar1 = 0;
    do {
      lVar2 = *(long *)(*(long *)(param_1 + 0x90) + (ulong)uVar1 * 8);
      if (*(int *)(lVar2 + 0xd8) == *(int *)(param_1 + 0xac)) {
        if (lVar2 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00aa0e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(lVar2 + 200) + 0x158))(*(long **)(lVar2 + 200),param_2 & 1);
        return;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x88));
  }
  return;
}




void FUN_00aa0e14(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 0x88) != 0) {
    uVar1 = 0;
    do {
      lVar2 = *(long *)(*(long *)(param_1 + 0x90) + (ulong)uVar1 * 8);
      if (*(int *)(lVar2 + 0xd8) == *(int *)(param_1 + 0xac)) {
        if (lVar2 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00aa0e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(lVar2 + 200) + 0x180))(*(long **)(lVar2 + 200),param_2 & 1);
        return;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x88));
  }
  return;
}




void FUN_00aa0e64(long param_1)

{
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffff7;
  return;
}




void FUN_00aa0e74(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  FUN_00b89cd8();
  param_1[0x19] = param_5;
  *(undefined4 *)(param_1 + 0x1a) = param_2;
  *(undefined4 *)((long)param_1 + 0xd4) = param_3;
  *param_1 = &PTR_FUN_027d17d8;
  *(undefined4 *)(param_1 + 0x1b) = param_4;
  FUN_00f023ec(param_1,param_5,1);
  return;
}




void FUN_00aa0edc(long param_1,uint param_2)

{
  (**(code **)(**(long **)(param_1 + 200) + 0x150))(*(long **)(param_1 + 200),param_2 & 1);
  if (((param_2 & 1) != 0) && ((*(byte *)(*(long *)(param_1 + 200) + 0x2c34) >> 3 & 1) != 0)) {
    FUN_00aa0d70(DAT_03133ab0,*(undefined4 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd8));
    return;
  }
  return;
}




void FUN_00aa0f40(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}




void FUN_00aa0f48(void *param_1)

{
  FUN_00f13d08();
  operator_delete(param_1);
  return;
}




void FUN_00aa0f6c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
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




void FUN_00aa0fec(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
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

