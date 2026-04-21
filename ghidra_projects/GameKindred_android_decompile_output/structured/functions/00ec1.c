// functions/00ec1 — 38 functions
#include "libGameKindred.h"




void FUN_00ec1068(long param_1,undefined8 param_2,byte param_3,uint param_4)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x4c) == 9) {
    *(undefined4 *)(param_1 + 0x4c) = 8;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  lVar1 = FUN_00ec0f3c(param_1,param_2,param_4 & 1);
  if (*(int *)(lVar1 + 0x4c) == 9) {
    *(undefined4 *)(lVar1 + 0x4c) = 0;
  }
  *(byte *)(lVar1 + 0x50) = param_3 & 1;
  return;
}




void FUN_00ec10bc(long param_1,undefined8 param_2,void *param_3,uint param_4)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0x4c) == 9) {
    *(undefined4 *)(param_1 + 0x4c) = 8;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  lVar2 = FUN_00ec0f3c(param_1,param_2,param_4 & 1);
  if (*(int *)(lVar2 + 0x4c) == 9) {
    *(undefined4 *)(lVar2 + 0x4c) = 4;
    puVar3 = operator_new(0x10);
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined8 **)(lVar2 + 0x50) = puVar3;
  }
  iVar1 = FUN_00e6a474(param_3);
  FUN_0091aea8(*(long *)(lVar2 + 0x50),(ulong)(iVar1 + 1),0);
  memmove(*(void **)(*(long *)(lVar2 + 0x50) + 8),param_3,(ulong)(iVar1 + 1));
  return;
}




void FUN_00ec1164(long param_1,undefined8 param_2,byte *param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  byte *__src;
  
  if (*(int *)(param_1 + 0x4c) == 9) {
    *(undefined4 *)(param_1 + 0x4c) = 8;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  lVar2 = FUN_00ec0f3c(param_1,param_2,param_4 & 1);
  if (*(int *)(lVar2 + 0x4c) == 9) {
    *(undefined4 *)(lVar2 + 0x4c) = 4;
    puVar3 = operator_new(0x10);
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined8 **)(lVar2 + 0x50) = puVar3;
  }
  else {
    puVar3 = *(undefined8 **)(lVar2 + 0x50);
  }
  uVar1 = (uint)(*param_3 >> 1);
  if ((*param_3 & 1) != 0) {
    uVar1 = *(uint *)(param_3 + 8);
  }
  FUN_0091aea8(puVar3,(ulong)(uVar1 + 1),0);
  __src = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    __src = param_3 + 1;
  }
  memmove(*(void **)(*(long *)(lVar2 + 0x50) + 8),__src,(ulong)(uVar1 + 1));
  return;
}




void FUN_00ec1220(undefined8 *param_1)

{
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_02821a80;
  FUN_00ec1244(param_1 + 5);
  return;
}




void FUN_00ec1244(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar3 = 0x10;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00ec1b04(param_1,0x10);
  do {
    pvVar2 = operator_new(0x58);
    FUN_00ec05cc();
    local_40 = pvVar2;
    FUN_00ec18a8(param_1,&local_40);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ec12c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02821a80;
  FUN_00ec1328();
  FUN_00ec13c8(param_1);
  FUN_00ec1450(param_1 + 5);
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  if ((void *)param_1[2] != (void *)0x0) {
    operator_delete__((void *)param_1[2]);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}




void FUN_00ec1328(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      local_40 = *(undefined8 **)(*(long *)(param_1 + 0x20) + uVar3 * 8);
      if (local_40 != (undefined8 *)0x0) {
        (**(code **)*local_40)();
        FUN_00ec18a8(param_1 + 0x28,&local_40);
        uVar2 = *(uint *)(param_1 + 0x18);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ec13c8(long param_1)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 8) != 0) {
    uVar3 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + uVar3 * 8) + 0x18))();
      uVar2 = (ulong)*(uint *)(param_1 + 8);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
    if (*(uint *)(param_1 + 8) != 0) {
      uVar3 = 0;
      do {
        plVar1 = *(long **)(*(long *)(param_1 + 0x10) + uVar3 * 8);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
          uVar2 = (ulong)*(uint *)(param_1 + 8);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar2);
    }
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}




void FUN_00ec1450(uint *param_1)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = *param_1;
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 2) + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *param_1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}




void FUN_00ec14b0(void *param_1)

{
  FUN_00ec12c8();
  operator_delete(param_1);
  return;
}




void FUN_00ec14d4(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  
  uVar5 = *(int *)(param_1 + 0x18) - 1;
  if (0 < (int)uVar5) {
    lVar6 = (ulong)uVar5 << 3;
    do {
      uVar2 = FUN_00ec06d8(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6));
      if (((uVar2 & 1) != 0) &&
         (uVar2 = FUN_00ec07c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6)), (uVar2 & 1) == 0
         )) {
        lVar3 = *(long *)(param_1 + 0x20);
        uVar1 = *(uint *)(param_1 + 0x18);
        puVar4 = (undefined8 *)(lVar3 + (ulong)uVar1 * 8 + -8);
        if ((undefined8 *)(lVar3 + lVar6) != puVar4) {
          *(undefined8 *)(lVar3 + lVar6) = *puVar4;
        }
        *(uint *)(param_1 + 0x18) = uVar1 - 1;
      }
      uVar5 = uVar5 - 1;
      lVar6 = lVar6 + -8;
    } while (0 < (int)uVar5);
  }
  if (*(int *)(param_1 + 8) != 0) {
    uVar2 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + uVar2 * 8) + 0x20))();
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 8));
  }
  return;
}




undefined8 FUN_00ec159c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00ec1c3c(param_3,param_2,param_1);
  local_40 = param_3;
  FUN_00ec161c(param_1 + 8,&local_40);
  (**(code **)(*param_3 + 0x10))(param_3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ec161c(uint *param_1,undefined8 *param_2)

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
    FUN_00ec1b84(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00ec16a4(long param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  char *__s2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
  if (*(int *)(param_1 + 8) != 0) {
    uVar4 = 0;
    lVar5 = -8;
    do {
      plVar3 = *(long **)(*(long *)(param_1 + 0x10) + uVar4 * 8);
      __s2 = (char *)FUN_00ec1c7c(plVar3);
      iVar2 = strcmp(param_2,__s2);
      if (iVar2 == 0) {
        uVar1 = *(uint *)(param_1 + 8);
        if (-lVar5 != (ulong)uVar1 * 8) {
          *(undefined8 *)(*(long *)(param_1 + 0x10) + uVar4 * 8) =
               *(undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)uVar1 * 8 + -8);
        }
        *(uint *)(param_1 + 8) = uVar1 - 1;
        (**(code **)(*plVar3 + 0x18))(plVar3);
        if (plVar3 == (long *)0x0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00ec1760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 8))(plVar3);
        return;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + -8;
    } while (uVar4 < *(uint *)(param_1 + 8));
  }
  return;
}




void FUN_00ec1778(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = FUN_00ec17f8(param_1 + 0x28);
  if (local_40 != 0) {
    FUN_00ec0dc4(local_40,param_2,param_3);
    FUN_00ec18a8(param_1 + 0x18,&local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_40);
}




undefined8 FUN_00ec17f8(uint *param_1)

{
  long lVar1;
  void *pvVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = *param_1;
  if (uVar3 == 0) {
    FUN_00ec1b04(param_1,param_1[1] + 0x10);
    iVar5 = 0x10;
    do {
      pvVar2 = operator_new(0x58);
      FUN_00ec05cc();
      local_40 = pvVar2;
      FUN_00ec18a8(param_1,&local_40);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    uVar3 = *param_1;
  }
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 - 1) * 8);
  *param_1 = uVar3 - 1;
  FUN_00ec05cc(uVar4);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ec18a8(uint *param_1,undefined8 *param_2)

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
    FUN_00ec1b04(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00ec1930(long param_1,char *param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  char *__s2;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar6 = 0;
    lVar7 = -8;
    do {
      puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x20) + uVar6 * 8);
      __s2 = (char *)FUN_00ec06b8(puVar5);
      iVar3 = strcmp(param_2,__s2);
      if (iVar3 == 0) {
        uVar1 = *(uint *)(param_1 + 0x18);
        if (-lVar7 != (ulong)uVar1 * 8) {
          *(undefined8 *)(*(long *)(param_1 + 0x20) + uVar6 * 8) =
               *(undefined8 *)(*(long *)(param_1 + 0x20) + (ulong)uVar1 * 8 + -8);
        }
        *(uint *)(param_1 + 0x18) = uVar1 - 1;
        local_50 = puVar5;
        if (puVar5 != (undefined8 *)0x0) {
          (**(code **)*puVar5)(puVar5);
          FUN_00ec18a8(param_1 + 0x28,&local_50);
        }
        uVar4 = 1;
        goto LAB_00ec19f8;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + -8;
    } while (uVar6 < *(uint *)(param_1 + 0x18));
  }
  uVar4 = 0;
LAB_00ec19f8:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}




undefined8 FUN_00ec1a24(long param_1,char *param_2)

{
  int iVar1;
  char *__s2;
  ulong uVar2;
  
  if (*(int *)(param_1 + 8) != 0) {
    uVar2 = 0;
    do {
      __s2 = (char *)FUN_00ec1c7c(*(undefined8 *)(*(long *)(param_1 + 0x10) + uVar2 * 8));
      iVar1 = strcmp(param_2,__s2);
      if (iVar1 == 0) {
        return *(undefined8 *)(*(long *)(param_1 + 0x10) + uVar2 * 8);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 8));
  }
  return 0;
}




undefined8 FUN_00ec1a94(long param_1,char *param_2)

{
  int iVar1;
  char *__s2;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar2 = 0;
    do {
      __s2 = (char *)FUN_00ec06b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + uVar2 * 8));
      iVar1 = strcmp(param_2,__s2);
      if (iVar1 == 0) {
        return *(undefined8 *)(*(long *)(param_1 + 0x20) + uVar2 * 8);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x18));
  }
  return 0;
}




void FUN_00ec1b04(uint *param_1,uint param_2)

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




void FUN_00ec1b84(uint *param_1,uint param_2)

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




void FUN_00ec1c04(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_02821aa0;
  param_1[1] = 0;
  return;
}




void FUN_00ec1c20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02821aa0;
  param_1[5] = 0;
  return;
}




void FUN_00ec1c3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_00e6a50c((undefined8 *)(param_1 + 8),0x20,param_2);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}




long FUN_00ec1c7c(long param_1)

{
  return param_1 + 8;
}




void FUN_00ec1c84(void)

{
  return;
}




void FUN_00ec1c88(void)

{
  return;
}




void FUN_00ec1c8c(void)

{
  return;
}




void FUN_00ec1c90(void)

{
  DAT_032107c8 = operator_new(0x20);
  DAT_032107c8[2] = 0;
  DAT_032107c8[3] = 0;
  *DAT_032107c8 = &PTR_FUN_02820520;
  DAT_032107c8[1] = DAT_032107c8 + 2;
  return;
}




void FUN_00ec1ccc(void)

{
  if (DAT_032107c8 != (long *)0x0) {
    (**(code **)(*DAT_032107c8 + 8))();
  }
  DAT_032107c8 = (long *)0x0;
  return;
}




undefined8 FUN_00ec1d00(void)

{
  return DAT_032107c8;
}




void FUN_00ec1d0c(undefined8 *param_1)

{
  long lVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_FUN_02821ad8;
  if (*(int *)((long)param_1 + 0x4c) - 7U < 2) {
    lVar1 = param_1[10];
    while (lVar1 != 0) {
      lVar1 = *(long *)(lVar1 + 0x58);
      FUN_00ec2118();
    }
  }
  else if (*(int *)((long)param_1 + 0x4c) == 4) {
    puVar2 = (undefined4 *)param_1[10];
    if (*(long *)(puVar2 + 2) != 0) {
      *puVar2 = 0;
      puVar2 = (undefined4 *)param_1[10];
    }
    if (puVar2 != (undefined4 *)0x0) {
      if (*(void **)(puVar2 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(puVar2 + 2));
      }
      operator_delete(puVar2);
    }
  }
  *(undefined4 *)((long)param_1 + 0x4c) = 9;
  memset(param_1 + 1,0,0x44);
  param_1[10] = 0;
  operator_delete(param_1);
  return;
}




void FUN_00ec1dd0(undefined8 *param_1)

{
  long lVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_FUN_02821ad8;
  if (*(int *)((long)param_1 + 0x4c) - 7U < 2) {
    lVar1 = param_1[10];
    while (lVar1 != 0) {
      lVar1 = *(long *)(lVar1 + 0x58);
      FUN_00ec2118();
    }
  }
  else if (*(int *)((long)param_1 + 0x4c) == 4) {
    puVar2 = (undefined4 *)param_1[10];
    if (*(long *)(puVar2 + 2) != 0) {
      *puVar2 = 0;
      puVar2 = (undefined4 *)param_1[10];
    }
    if (puVar2 != (undefined4 *)0x0) {
      if (*(void **)(puVar2 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(puVar2 + 2));
      }
      operator_delete(puVar2);
    }
  }
  *(undefined4 *)((long)param_1 + 0x4c) = 9;
  memset(param_1 + 1,0,0x44);
  param_1[10] = 0;
  param_1[0xb] = 0;
  return;
}




void FUN_00ec1e94(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x10);
  FUN_00ec1ec4();
  DAT_032107d0 = pvVar1;
  return;
}




void FUN_00ec1ec4(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar3 = 0x80;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00ec2220(param_1,0x80);
  do {
    puVar2 = operator_new(0x60);
    *puVar2 = &PTR_FUN_02821ad8;
    memset(puVar2 + 1,0,0x44);
    *(undefined4 *)((long)puVar2 + 0x4c) = 9;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    local_50 = puVar2;
    FUN_00ec22a0(param_1,&local_50);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ec1f74(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_032107d0;
  if (DAT_032107d0 != (void *)0x0) {
    FUN_00ec1fac(DAT_032107d0);
    operator_delete(pvVar1);
  }
  DAT_032107d0 = (void *)0x0;
  return;
}




void FUN_00ec1fac(uint *param_1)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = *param_1;
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 2) + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *param_1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}

