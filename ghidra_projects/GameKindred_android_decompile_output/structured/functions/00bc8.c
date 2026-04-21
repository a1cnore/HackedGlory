// functions/00bc8 — 30 functions
#include "libGameKindred.h"




void FUN_00bc8028(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_027ebdc8;
  FUN_00bc8118();
  puVar2 = (uint *)FUN_00a012b4();
  lVar4 = (ulong)*puVar2 << 5;
  puVar1 = *(undefined8 **)(puVar2 + 2);
  do {
    puVar3 = puVar1;
    if (lVar4 == 0) goto LAB_00bc8078;
    lVar4 = lVar4 + -0x20;
    puVar1 = puVar3 + 4;
  } while ((undefined8 *)*puVar3 != param_1);
  FUN_00910480(puVar2,puVar3);
LAB_00bc8078:
  lVar4 = FUN_00a022d4();
  lVar5 = (ulong)*(uint *)(lVar4 + 0x20) << 5;
  puVar1 = *(undefined8 **)(lVar4 + 0x28);
  do {
    puVar3 = puVar1;
    if (lVar5 == 0) goto LAB_00bc80a4;
    lVar5 = lVar5 + -0x20;
    puVar1 = puVar3 + 4;
  } while ((undefined8 *)*puVar3 != param_1);
  FUN_00910480((uint *)(lVar4 + 0x20),puVar3);
LAB_00bc80a4:
  if ((void *)param_1[9] != (void *)0x0) {
    operator_delete__((void *)param_1[9]);
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
    param_1[6] = 0;
    param_1[7] = 0;
  }
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete__((void *)param_1[5]);
    param_1[4] = 0;
    param_1[5] = 0;
  }
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  *param_1 = &PTR_FUN_027ebde8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bc8118(long param_1)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  
  FUN_00c1deec(*(undefined8 *)(param_1 + 8));
  if (*(long **)(param_1 + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x10))();
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x50) + 0x10))();
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x28) + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x18))();
        uVar2 = *(uint *)(param_1 + 0x20);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x18) + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x18))();
        uVar2 = *(uint *)(param_1 + 0x10);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  uVar2 = *(uint *)(param_1 + 0x30);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x38) + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(param_1 + 0x30);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  uVar2 = *(uint *)(param_1 + 0x40);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x48) + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(param_1 + 0x40);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}




void FUN_00bc826c(void *param_1)

{
  FUN_00bc8028();
  operator_delete(param_1);
  return;
}




undefined8 FUN_00bc8290(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((*(long *)(param_1 + 0x58) == 0) || (uVar1 = FUN_00bf6cbc(), (uVar1 & 1) == 0)) {
    if (*(int *)(param_1 + 0x20) != 0) {
      uVar1 = 0;
      do {
        uVar2 = FUN_00bc8eb8(*(undefined8 *)(*(long *)(param_1 + 0x28) + uVar1 * 8));
        if ((uVar2 & 1) == 0) goto LAB_00bc8310;
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 0x20));
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      uVar1 = 0;
      do {
        uVar2 = FUN_00bc8290(*(undefined8 *)(*(long *)(param_1 + 0x38) + uVar1 * 8));
        if ((uVar2 & 1) != 0) goto LAB_00bc8310;
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 0x30));
    }
    uVar3 = 0;
  }
  else {
LAB_00bc8310:
    uVar3 = 1;
  }
  return uVar3;
}




void FUN_00bc8320(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00bc8290();
  if ((uVar1 & 1) != 0) {
    FUN_00bc8118(param_1);
    FUN_00bc835c(param_1);
    return;
  }
  return;
}




void FUN_00bc835c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  void *pvVar3;
  
  uVar1 = FUN_00a022d4();
  uVar2 = FUN_009e35e0();
  if ((uVar2 & 1) != 0) {
    pvVar3 = operator_new(0x18);
    FUN_00bf66c4();
    *(void **)(param_1 + 0x58) = pvVar3;
    FUN_00bf684c(pvVar3,uVar1);
    FUN_00c1d9d0(0x41c80000,0x41c80000,*(undefined8 *)(param_1 + 8),
                 *(undefined8 *)(*(long *)(param_1 + 0x58) + 8));
  }
  FUN_00bc8618(param_1);
  FUN_00bc852c(param_1);
  FUN_00bc8a10(param_1);
  FUN_00bc8860(param_1);
  return;
}




void FUN_00bc83e4(long param_1,uint *param_2)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  uint *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar6 = (ulong)*param_2;
  if (*param_2 != 0) {
    uVar9 = 0;
    do {
      lVar8 = *(long *)(*(long *)(param_2 + 2) + uVar9 * 8);
      if ((*(char *)(lVar8 + 0xd8) == '\0') || (*(char *)(lVar8 + 0xd9) == '\0')) {
        pvVar3 = operator_new(0x30);
        FUN_00bc8c7c();
        local_60 = pvVar3;
        FUN_00bc8e24(pvVar3,*(undefined8 *)(*(long *)(param_2 + 2) + uVar9 * 8));
        FUN_00bc6854(param_1 + 0x20,&local_60);
        FUN_00c1d9d0(0x41c80000,0x41c80000,*(undefined8 *)(param_1 + 8),
                     *(undefined8 *)
                      (*(long *)(*(long *)(param_1 + 0x28) +
                                (ulong)(*(int *)(param_1 + 0x20) - 1) * 8) + 8));
        uVar6 = (ulong)*param_2;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar6);
  }
  puVar4 = (uint *)FUN_00a012b4();
  lVar8 = (ulong)*puVar4 << 5;
  plVar2 = *(long **)(puVar4 + 2);
  do {
    plVar5 = plVar2;
    if (lVar8 == 0) goto LAB_00bc84d0;
    lVar8 = lVar8 + -0x20;
    plVar2 = plVar5 + 4;
  } while (*plVar5 != param_1);
  FUN_00910480(puVar4,plVar5);
LAB_00bc84d0:
  lVar8 = FUN_00a022d4();
  lVar7 = (ulong)*(uint *)(lVar8 + 0x20) << 5;
  plVar2 = *(long **)(lVar8 + 0x28);
  do {
    plVar5 = plVar2;
    if (lVar7 == 0) goto LAB_00bc84fc;
    lVar7 = lVar7 + -0x20;
    plVar2 = plVar5 + 4;
  } while (*plVar5 != param_1);
  FUN_00910480((uint *)(lVar8 + 0x20),plVar5);
LAB_00bc84fc:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bc852c(long param_1)

{
  long lVar1;
  void *pvVar2;
  ulong uVar3;
  void *local_60;
  ulong local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00a01ce0(&local_58);
  if ((int)local_58 != 0) {
    uVar3 = 0;
    do {
      pvVar2 = operator_new(0x30);
      FUN_00bc8c7c();
      local_60 = pvVar2;
      FUN_00bc8e24(pvVar2,*(undefined8 *)((long)local_50 + uVar3 * 8));
      FUN_00bc6854(param_1 + 0x20,&local_60);
      FUN_00c1d9d0(0x41c80000,0x41c80000,*(undefined8 *)(param_1 + 8),
                   *(undefined8 *)
                    (*(long *)(*(long *)(param_1 + 0x28) + (ulong)(*(int *)(param_1 + 0x20) - 1) * 8
                              ) + 8));
      uVar3 = uVar3 + 1;
    } while (uVar3 < (local_58 & 0xffffffff));
  }
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bc8618(long param_1)

{
  long lVar1;
  bool bVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  void *local_58;
  void *local_50;
  ulong local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00a01a90(&local_48,9);
  if ((int)local_48 != 0) {
    uVar5 = 0;
    bVar2 = false;
    do {
      lVar6 = *(long *)((long)local_40 + uVar5 * 8);
      if ((*(char *)(lVar6 + 0xd8) == '\0') || (*(char *)(lVar6 + 0xd9) == '\0')) {
        bVar2 = true;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (local_48 & 0xffffffff));
    if (bVar2) {
      pvVar3 = operator_new(0x60);
      FUN_00bc7f64();
      local_50 = pvVar3;
      FUN_00c1dc7c(*(undefined8 *)((long)pvVar3 + 8),1);
      FUN_00c1db24(*(undefined8 *)((long)pvVar3 + 8),0);
      pvVar4 = operator_new(0x30);
      FUN_00bc7c2c(pvVar4,9);
      local_58 = pvVar4;
      FUN_00c1d9d0(0x41c80000,0x41c80000,*(undefined8 *)((long)pvVar3 + 8),
                   *(undefined8 *)((long)pvVar4 + 8));
      FUN_00bc8750(param_1 + 0x40,&local_58);
      FUN_00bc83e4(pvVar3,&local_48);
      FUN_00c1d9d0(DAT_03218ef8,_DAT_03218efc,*(undefined8 *)(param_1 + 8),
                   *(undefined8 *)((long)pvVar3 + 8));
      FUN_00bc87d8(param_1 + 0x30,&local_50);
    }
  }
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




void FUN_00bc8750(uint *param_1,undefined8 *param_2)

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
    FUN_00bc8afc(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00bc87d8(uint *param_1,undefined8 *param_2)

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
    FUN_00bc8b7c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00bc8860(long param_1)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pvVar3 = operator_new(0x18);
  FUN_00bc7a54();
  local_50 = pvVar3;
  FUN_00bc7b30(pvVar3,1);
  lVar1 = param_1 + 0x10;
  FUN_00bc8988(lVar1,&local_50);
  FUN_00c1d9d0(0x41c80000,0x41c80000,*(undefined8 *)(param_1 + 8),
               *(undefined8 *)((long)local_50 + 8));
  pvVar3 = operator_new(0x18);
  FUN_00bc7a54();
  local_50 = pvVar3;
  FUN_00bc7b30(pvVar3,3);
  FUN_00bc8988(lVar1,&local_50);
  FUN_00c1d9d0(0x41c80000,0x41c80000,*(undefined8 *)(param_1 + 8),
               *(undefined8 *)((long)local_50 + 8));
  pvVar3 = operator_new(0x18);
  FUN_00bc7a54();
  local_50 = pvVar3;
  FUN_00bc7b30(pvVar3,7);
  FUN_00bc8988(lVar1,&local_50);
  FUN_00c1d9d0(0x41c80000,0x41c80000,*(undefined8 *)(param_1 + 8),
               *(undefined8 *)((long)local_50 + 8));
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bc8988(uint *param_1,undefined8 *param_2)

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
    FUN_00bc8bfc(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00bc8a10(long param_1)

{
  void *pvVar1;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    return;
  }
  pvVar1 = operator_new(0x28);
  FUN_00bd0d98();
  *(void **)(param_1 + 0x50) = pvVar1;
  thunk_FUN_00ce048c(pvVar1);
  FUN_00c1d9d0(0x41c80000,0x41c80000,*(undefined8 *)(param_1 + 8),
               *(undefined8 *)(*(long *)(param_1 + 0x50) + 8));
  return;
}




void FUN_00bc8a70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ebde8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bc8ab4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ebde8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void thunk_FUN_00bc8320(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00bc8290();
  if ((uVar1 & 1) != 0) {
    FUN_00bc8118(param_1);
    FUN_00bc835c(param_1);
    return;
  }
  return;
}




void FUN_00bc8afc(uint *param_1,uint param_2)

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




void FUN_00bc8b7c(uint *param_1,uint param_2)

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




void FUN_00bc8bfc(uint *param_1,uint param_2)

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




void FUN_00bc8c7c(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR___cxa_pure_virtual_027eb9b8;
  pvVar2 = operator_new(0x2cd0);
  FUN_00c1df00();
  param_1[1] = pvVar2;
  param_1[2] = 0;
  *(undefined8 **)((long)pvVar2 + 0x9b8) = param_1;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *param_1 = &PTR_thunk_FUN_00bc8f98_027ebe08;
  pcStack_40 = thunk_FUN_00bc8f04;
  local_48 = param_1;
  FUN_00f02e98(0x3f000000,&local_48,0,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bc8d28(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_thunk_FUN_00bc8f98_027ebe08;
  if (*(char *)(param_1 + 5) != '\0') {
    puVar3 = (uint *)FUN_00a016d4();
    lVar5 = (ulong)*puVar3 << 5;
    lVar2 = *(long *)(puVar3 + 2);
    do {
      lVar4 = lVar2;
      if (lVar5 == 0) goto LAB_00bc8d90;
      lVar5 = lVar5 + -0x20;
      lVar2 = lVar4 + 0x20;
    } while (*(undefined8 **)(lVar4 + 8) != param_1);
    FUN_009e48d4(puVar3,lVar4);
  }
LAB_00bc8d90:
  pcStack_30 = thunk_FUN_00bc8f04;
  local_38 = param_1;
  FUN_00f03390(&local_38);
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  *param_1 = &PTR___cxa_pure_virtual_027eb9b8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bc8e00(void *param_1)

{
  FUN_00bc8d28();
  operator_delete(param_1);
  return;
}




void FUN_00bc8e24(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_58;
  long lStack_50;
  long local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_008fce60(param_1 + 0x10,param_2 + 0x48);
    FUN_00c1e4fc(*(undefined8 *)(param_1 + 8),param_2);
    uVar2 = FUN_00a016d4();
    local_58 = 0;
    pcStack_40 = thunk_FUN_00bc9248;
    lStack_50 = param_1;
    local_48 = param_1;
    FUN_009e47b4(uVar2,&local_58);
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00bc8eb8(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    lVar1 = param_1 + 0x11;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
  }
  lVar1 = FUN_00a016b4(lVar1);
  if (lVar1 != 0) {
    FUN_00c1e4fc(*(undefined8 *)(param_1 + 8),lVar1);
  }
  return lVar1 != 0;
}




void FUN_00bc8f04(long param_1)

{
  long lVar1;
  long lVar2;
  long local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    lVar2 = param_1 + 0x11;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
  }
  lVar2 = FUN_00a016b4(lVar2);
  if (lVar2 != 0) {
    lVar2 = FUN_009f652c();
    if (lVar2 == 0) {
      FUN_00a01758(0,0);
      pcStack_30 = thunk_FUN_00bc8f04;
      local_38 = param_1;
      FUN_00f03390(&local_38);
    }
    else {
      FUN_00c1eb1c(*(undefined8 *)(param_1 + 8));
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bc8f98(long param_1)

{
  long *plVar1;
  bool bVar2;
  size_t __n;
  size_t sVar3;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  char *__s2;
  long *plVar10;
  long lVar11;
  size_t sVar12;
  long *plVar13;
  ulong local_90;
  size_t local_88;
  long *local_80;
  undefined1 auStack_78 [32];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (*(char *)(param_1 + 0x29) != '\0') goto LAB_00bc8fcc;
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    lVar7 = param_1 + 0x11;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x20);
  }
  lVar7 = FUN_00a016b4(lVar7);
  if (lVar7 == 0) goto LAB_00bc8fcc;
  if ((*(char *)(lVar7 + 0xd8) != '\0') && (*(char *)(lVar7 + 0xd9) == '\0')) {
    uVar8 = FUN_009f6658(lVar7);
    bVar2 = (uVar8 & 1) != 0;
    if (bVar2) {
      uVar9 = FUN_009b8d90();
      FUN_009bb728(uVar9,(byte *)(param_1 + 0x10),*(long *)(lVar7 + 8) + 0x30);
    }
    *(bool *)(param_1 + 0x29) = bVar2;
    uVar9 = FUN_009b8d90();
    FUN_009ba61c(uVar9,&DAT_0320ffa8);
    uVar9 = FUN_009b8d90();
    FUN_009baadc(uVar9,&DAT_0320ffa8);
    uVar9 = FUN_009b8d90();
    FUN_009badcc(uVar9,&DAT_0320ffa8);
    goto LAB_00bc8fcc;
  }
  local_90 = 0;
  local_88 = 0;
  local_80 = (long *)0x0;
  FUN_009f5e94((byte *)(lVar7 + 0x60),&local_90,1);
  plVar13 = local_80;
  sVar12 = local_88;
  uVar8 = local_90 >> 1 & 0x7f;
  __n = uVar8;
  if ((local_90 & 1) != 0) {
    __n = local_88;
  }
  sVar3 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar3 = DAT_0320ffb0;
  }
  if (__n == sVar3) {
    plVar10 = (long *)((ulong)&local_90 | 1);
    plVar1 = plVar10;
    if ((local_90 & 1) != 0) {
      plVar1 = local_80;
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((local_90 & 1) == 0) {
      if (__n != 0) {
        lVar11 = -uVar8;
        do {
          if ((char)*plVar10 != *__s2) goto LAB_00bc90d0;
          plVar10 = (long *)((long)plVar10 + 1);
          lVar11 = lVar11 + 1;
          __s2 = __s2 + 1;
        } while (lVar11 != 0);
      }
      goto LAB_00bc8fcc;
    }
    if ((__n != 0) && (iVar5 = memcmp(plVar1,__s2,__n), iVar5 != 0)) goto LAB_00bc9154;
  }
  else {
LAB_00bc90d0:
    if ((local_90 & 1) == 0) {
      plVar13 = (long *)((ulong)&local_90 | 1);
      sVar12 = uVar8;
    }
LAB_00bc9154:
    if (7 < (long)sVar12) {
      plVar1 = (long *)((long)plVar13 + sVar12);
      plVar10 = plVar13;
      do {
        if ((sVar12 - 7 == 0) || (plVar10 = memchr(plVar10,0x76,sVar12 - 7), plVar10 == (long *)0x0)
           ) break;
        if (*plVar10 == 0x2f2f3a6f65646976) {
          if ((plVar10 != plVar1) && (plVar10 == plVar13)) {
            if ((*(byte *)(lVar7 + 0x60) & 1) == 0) {
              lVar7 = lVar7 + 0x61;
            }
            else {
              lVar7 = *(long *)(lVar7 + 0x70);
            }
            FUN_00a02210("watch_video",lVar7);
            FUN_00a01758();
            goto LAB_00bc91f4;
          }
          break;
        }
        plVar10 = (long *)((long)plVar10 + 1);
        sVar12 = (long)plVar1 - (long)plVar10;
      } while (7 < (long)sVar12);
    }
    uVar6 = FUN_00f048a4("UI::EVENT_TILE_NAVIGATING_TO_LINK");
    FUN_00f048e0(auStack_78,uVar6,0);
    FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_78,1);
LAB_00bc91f4:
    uVar9 = FUN_009b8d90();
    FUN_009bb46c(uVar9,&local_90,&DAT_0320ffa8,0,0);
    if ((local_90 & 1) == 0) goto LAB_00bc8fcc;
  }
  operator_delete(local_80);
LAB_00bc8fcc:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void thunk_FUN_00bc8f98(long param_1)

{
  long *plVar1;
  bool bVar2;
  size_t __n;
  size_t sVar3;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  char *__s2;
  long *plVar10;
  long lVar11;
  size_t sVar12;
  long *plVar13;
  ulong uStack_90;
  size_t sStack_88;
  long *plStack_80;
  undefined1 auStack_78 [32];
  long lStack_58;
  
  lVar4 = tpidr_el0;
  lStack_58 = *(long *)(lVar4 + 0x28);
  if (*(char *)(param_1 + 0x29) != '\0') goto LAB_00bc8fcc;
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    lVar7 = param_1 + 0x11;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x20);
  }
  lVar7 = FUN_00a016b4(lVar7);
  if (lVar7 == 0) goto LAB_00bc8fcc;
  if ((*(char *)(lVar7 + 0xd8) != '\0') && (*(char *)(lVar7 + 0xd9) == '\0')) {
    uVar8 = FUN_009f6658(lVar7);
    bVar2 = (uVar8 & 1) != 0;
    if (bVar2) {
      uVar9 = FUN_009b8d90();
      FUN_009bb728(uVar9,(byte *)(param_1 + 0x10),*(long *)(lVar7 + 8) + 0x30);
    }
    *(bool *)(param_1 + 0x29) = bVar2;
    uVar9 = FUN_009b8d90();
    FUN_009ba61c(uVar9,&DAT_0320ffa8);
    uVar9 = FUN_009b8d90();
    FUN_009baadc(uVar9,&DAT_0320ffa8);
    uVar9 = FUN_009b8d90();
    FUN_009badcc(uVar9,&DAT_0320ffa8);
    goto LAB_00bc8fcc;
  }
  uStack_90 = 0;
  sStack_88 = 0;
  plStack_80 = (long *)0x0;
  FUN_009f5e94((byte *)(lVar7 + 0x60),&uStack_90,1);
  plVar13 = plStack_80;
  sVar12 = sStack_88;
  uVar8 = uStack_90 >> 1 & 0x7f;
  __n = uVar8;
  if ((uStack_90 & 1) != 0) {
    __n = sStack_88;
  }
  sVar3 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar3 = DAT_0320ffb0;
  }
  if (__n == sVar3) {
    plVar10 = (long *)((ulong)&uStack_90 | 1);
    plVar1 = plVar10;
    if ((uStack_90 & 1) != 0) {
      plVar1 = plStack_80;
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((uStack_90 & 1) == 0) {
      if (__n != 0) {
        lVar11 = -uVar8;
        do {
          if ((char)*plVar10 != *__s2) goto LAB_00bc90d0;
          plVar10 = (long *)((long)plVar10 + 1);
          lVar11 = lVar11 + 1;
          __s2 = __s2 + 1;
        } while (lVar11 != 0);
      }
      goto LAB_00bc8fcc;
    }
    if ((__n != 0) && (iVar5 = memcmp(plVar1,__s2,__n), iVar5 != 0)) goto LAB_00bc9154;
  }
  else {
LAB_00bc90d0:
    if ((uStack_90 & 1) == 0) {
      plVar13 = (long *)((ulong)&uStack_90 | 1);
      sVar12 = uVar8;
    }
LAB_00bc9154:
    if (7 < (long)sVar12) {
      plVar1 = (long *)((long)plVar13 + sVar12);
      plVar10 = plVar13;
      do {
        if ((sVar12 - 7 == 0) || (plVar10 = memchr(plVar10,0x76,sVar12 - 7), plVar10 == (long *)0x0)
           ) break;
        if (*plVar10 == 0x2f2f3a6f65646976) {
          if ((plVar10 != plVar1) && (plVar10 == plVar13)) {
            if ((*(byte *)(lVar7 + 0x60) & 1) == 0) {
              lVar7 = lVar7 + 0x61;
            }
            else {
              lVar7 = *(long *)(lVar7 + 0x70);
            }
            FUN_00a02210("watch_video",lVar7);
            FUN_00a01758();
            goto LAB_00bc91f4;
          }
          break;
        }
        plVar10 = (long *)((long)plVar10 + 1);
        sVar12 = (long)plVar1 - (long)plVar10;
      } while (7 < (long)sVar12);
    }
    uVar6 = FUN_00f048a4("UI::EVENT_TILE_NAVIGATING_TO_LINK");
    FUN_00f048e0(auStack_78,uVar6,0);
    FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_78,1);
LAB_00bc91f4:
    uVar9 = FUN_009b8d90();
    FUN_009bb46c(uVar9,&uStack_90,&DAT_0320ffa8,0,0);
    if ((uStack_90 & 1) == 0) goto LAB_00bc8fcc;
  }
  operator_delete(plStack_80);
LAB_00bc8fcc:
  if (*(long *)(lVar4 + 0x28) != lStack_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void thunk_FUN_00bc8f98(long param_1)

{
  long *plVar1;
  bool bVar2;
  size_t __n;
  size_t sVar3;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  char *__s2;
  long *plVar10;
  long lVar11;
  size_t sVar12;
  long *plVar13;
  ulong uStack_90;
  size_t sStack_88;
  long *plStack_80;
  undefined1 auStack_78 [32];
  long lStack_58;
  
  lVar4 = tpidr_el0;
  lStack_58 = *(long *)(lVar4 + 0x28);
  if (*(char *)(param_1 + 0x29) != '\0') goto LAB_00bc8fcc;
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    lVar7 = param_1 + 0x11;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x20);
  }
  lVar7 = FUN_00a016b4(lVar7);
  if (lVar7 == 0) goto LAB_00bc8fcc;
  if ((*(char *)(lVar7 + 0xd8) != '\0') && (*(char *)(lVar7 + 0xd9) == '\0')) {
    uVar8 = FUN_009f6658(lVar7);
    bVar2 = (uVar8 & 1) != 0;
    if (bVar2) {
      uVar9 = FUN_009b8d90();
      FUN_009bb728(uVar9,(byte *)(param_1 + 0x10),*(long *)(lVar7 + 8) + 0x30);
    }
    *(bool *)(param_1 + 0x29) = bVar2;
    uVar9 = FUN_009b8d90();
    FUN_009ba61c(uVar9,&DAT_0320ffa8);
    uVar9 = FUN_009b8d90();
    FUN_009baadc(uVar9,&DAT_0320ffa8);
    uVar9 = FUN_009b8d90();
    FUN_009badcc(uVar9,&DAT_0320ffa8);
    goto LAB_00bc8fcc;
  }
  uStack_90 = 0;
  sStack_88 = 0;
  plStack_80 = (long *)0x0;
  FUN_009f5e94((byte *)(lVar7 + 0x60),&uStack_90,1);
  plVar13 = plStack_80;
  sVar12 = sStack_88;
  uVar8 = uStack_90 >> 1 & 0x7f;
  __n = uVar8;
  if ((uStack_90 & 1) != 0) {
    __n = sStack_88;
  }
  sVar3 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar3 = DAT_0320ffb0;
  }
  if (__n == sVar3) {
    plVar10 = (long *)((ulong)&uStack_90 | 1);
    plVar1 = plVar10;
    if ((uStack_90 & 1) != 0) {
      plVar1 = plStack_80;
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((uStack_90 & 1) == 0) {
      if (__n != 0) {
        lVar11 = -uVar8;
        do {
          if ((char)*plVar10 != *__s2) goto LAB_00bc90d0;
          plVar10 = (long *)((long)plVar10 + 1);
          lVar11 = lVar11 + 1;
          __s2 = __s2 + 1;
        } while (lVar11 != 0);
      }
      goto LAB_00bc8fcc;
    }
    if ((__n != 0) && (iVar5 = memcmp(plVar1,__s2,__n), iVar5 != 0)) goto LAB_00bc9154;
  }
  else {
LAB_00bc90d0:
    if ((uStack_90 & 1) == 0) {
      plVar13 = (long *)((ulong)&uStack_90 | 1);
      sVar12 = uVar8;
    }
LAB_00bc9154:
    if (7 < (long)sVar12) {
      plVar1 = (long *)((long)plVar13 + sVar12);
      plVar10 = plVar13;
      do {
        if ((sVar12 - 7 == 0) || (plVar10 = memchr(plVar10,0x76,sVar12 - 7), plVar10 == (long *)0x0)
           ) break;
        if (*plVar10 == 0x2f2f3a6f65646976) {
          if ((plVar10 != plVar1) && (plVar10 == plVar13)) {
            if ((*(byte *)(lVar7 + 0x60) & 1) == 0) {
              lVar7 = lVar7 + 0x61;
            }
            else {
              lVar7 = *(long *)(lVar7 + 0x70);
            }
            FUN_00a02210("watch_video",lVar7);
            FUN_00a01758();
            goto LAB_00bc91f4;
          }
          break;
        }
        plVar10 = (long *)((long)plVar10 + 1);
        sVar12 = (long)plVar1 - (long)plVar10;
      } while (7 < (long)sVar12);
    }
    uVar6 = FUN_00f048a4("UI::EVENT_TILE_NAVIGATING_TO_LINK");
    FUN_00f048e0(auStack_78,uVar6,0);
    FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_78,1);
LAB_00bc91f4:
    uVar9 = FUN_009b8d90();
    FUN_009bb46c(uVar9,&uStack_90,&DAT_0320ffa8,0,0);
    if ((uStack_90 & 1) == 0) goto LAB_00bc8fcc;
  }
  operator_delete(plStack_80);
LAB_00bc8fcc:
  if (*(long *)(lVar4 + 0x28) != lStack_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void thunk_FUN_00bc8f04(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  code *pcStack_30;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    lVar2 = param_1 + 0x11;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
  }
  lVar2 = FUN_00a016b4(lVar2);
  if (lVar2 != 0) {
    lVar2 = FUN_009f652c();
    if (lVar2 == 0) {
      FUN_00a01758(0,0);
      pcStack_30 = thunk_FUN_00bc8f04;
      lStack_38 = param_1;
      FUN_00f03390(&lStack_38);
    }
    else {
      FUN_00c1eb1c(*(undefined8 *)(param_1 + 8));
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

