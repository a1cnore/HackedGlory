// functions/00e6e — 19 functions
#include "libGameKindred.h"




void thunk_FUN_00e6e91c(uint *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uVar3 = 0;
  uVar4 = 0;
  do {
    uVar1 = uVar3 & 0x18;
    uVar3 = uVar3 + 8;
    auStack_40[uVar4] = (char)(param_1[uVar4 >> 2 & 0x3fffffff] >> (ulong)uVar1);
    uVar4 = uVar4 + 1;
  } while (uVar4 != 8);
  FUN_00e6ddac(param_1,&DAT_01bee9a0,(0x37 - (*param_1 >> 3) & 0x3f) + 1);
  FUN_00e6ddac(param_1,auStack_40,8);
  uVar3 = 0;
  uVar4 = 0;
  do {
    uVar1 = uVar3 & 0x18;
    uVar3 = uVar3 + 8;
    *(char *)(param_2 + uVar4) = (char)(param_1[(uVar4 >> 2 & 0x3fffffff) + 2] >> (ulong)uVar1);
    uVar4 = uVar4 + 1;
  } while (uVar4 != 0x10);
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e6e91c(uint *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 local_40 [8];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = 0;
  uVar4 = 0;
  do {
    uVar1 = uVar3 & 0x18;
    uVar3 = uVar3 + 8;
    local_40[uVar4] = (char)(param_1[uVar4 >> 2 & 0x3fffffff] >> (ulong)uVar1);
    uVar4 = uVar4 + 1;
  } while (uVar4 != 8);
  FUN_00e6ddac(param_1,&DAT_01bee9a0,(0x37 - (*param_1 >> 3) & 0x3f) + 1);
  FUN_00e6ddac(param_1,local_40,8);
  uVar3 = 0;
  uVar4 = 0;
  do {
    uVar1 = uVar3 & 0x18;
    uVar3 = uVar3 + 8;
    *(char *)(param_2 + uVar4) = (char)(param_1[(uVar4 >> 2 & 0x3fffffff) + 2] >> (ulong)uVar1);
    uVar4 = uVar4 + 1;
  } while (uVar4 != 0x10);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e6ea00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02820520;
  FUN_00e6ed58(param_1 + 1,param_1[2]);
  return;
}




void FUN_00e6ea20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02820520;
  FUN_00e6ed58(param_1 + 1,param_1[2]);
  operator_delete(param_1);
  return;
}




void FUN_00e6ea58(long param_1,long param_2,uint param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  long *plVar7;
  undefined8 local_60;
  void *local_58;
  long local_50;
  long lStack_48;
  uint local_3c;
  undefined1 auStack_38 [8];
  uint *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  plVar5 = (long *)(param_1 + 0x10);
  plVar7 = (long *)*plVar5;
  plVar4 = plVar5;
  local_50 = param_2;
  lStack_48 = param_4;
  local_3c = param_3;
  if (plVar7 != (long *)0x0) {
    do {
      if (*(uint *)(plVar7 + 4) >= param_3) {
        plVar4 = plVar7;
      }
      plVar7 = (long *)plVar7[*(uint *)(plVar7 + 4) < param_3];
    } while (plVar7 != (long *)0x0);
    if ((plVar4 != plVar5) && (*(uint *)(plVar4 + 4) <= param_3)) {
      uVar1 = *(uint *)(plVar4 + 5);
      if (uVar1 != 0) {
        uVar6 = 0;
        do {
          plVar5 = (long *)(plVar4[6] + (ulong)uVar6 * 0x10);
          if (*plVar5 == param_2) {
            plVar5[1] = param_4;
            *plVar5 = param_2;
            goto LAB_00e6eb54;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar1);
      }
      FUN_00e6eb78(plVar4 + 5,&local_50);
      goto LAB_00e6eb54;
    }
  }
  local_60 = 0;
  local_58 = (void *)0x0;
  FUN_00e6eb78(&local_60,&local_50);
  local_30 = &local_3c;
  lVar3 = FUN_00e6ee34(param_1 + 8,&local_3c,&DAT_01bee9e0,&local_30,auStack_38);
  FUN_00e6ef5c(lVar3 + 0x28,&local_60);
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
    local_60 = 0;
    local_58 = (void *)0x0;
  }
LAB_00e6eb54:
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00e6eb78(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    if (uVar4 < 0x20) {
      uVar3 = uVar4 << 1;
    }
    else if (uVar4 == 0xffffffff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uVar4 + 0x10) - (uVar4 & 0xf);
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar2 = uVar3;
    }
    FUN_00e6edb0(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  uVar5 = *param_2;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x10;
  *(undefined8 *)(lVar1 + -8) = param_2[1];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  return;
}




void FUN_00e6ec00(long param_1,long param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  plVar3 = (long *)(param_1 + 0x10);
  plVar5 = (long *)*plVar3;
  plVar4 = plVar3;
  if (plVar5 != (long *)0x0) {
    do {
      if (*(uint *)(plVar5 + 4) >= param_3) {
        plVar4 = plVar5;
      }
      plVar5 = (long *)plVar5[*(uint *)(plVar5 + 4) < param_3];
    } while (plVar5 != (long *)0x0);
    if ((plVar4 != plVar3) && (*(uint *)(plVar4 + 4) <= param_3)) {
      uVar7 = *(uint *)(plVar4 + 5);
      uVar2 = uVar7 - 1;
      uVar6 = (ulong)uVar2;
      if (-1 < (int)uVar2) {
        uVar8 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | uVar6 << 4;
        do {
          lVar9 = plVar4[6];
          if (*(long *)(lVar9 + uVar6 * 0x10) == param_2) {
            lVar1 = lVar9 + (ulong)uVar7 * 0x10;
            puVar10 = (undefined8 *)(lVar1 + -0x10);
            if ((undefined8 *)(lVar9 + uVar8) != puVar10) {
              uVar11 = *puVar10;
              ((undefined8 *)(lVar9 + uVar8))[1] = *(undefined8 *)(lVar1 + -8);
              *(undefined8 *)(lVar9 + uVar8) = uVar11;
              uVar7 = *(uint *)(plVar4 + 5);
            }
            uVar7 = uVar7 - 1;
            *(uint *)(plVar4 + 5) = uVar7;
          }
          uVar2 = (int)uVar6 - 1;
          uVar6 = (ulong)uVar2;
          uVar8 = uVar8 - 0x10;
        } while (-1 < (int)uVar2);
      }
    }
  }
  return;
}




void FUN_00e6ec98(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  plVar4 = *(long **)(param_1 + 8);
  while ((long *)(param_1 + 0x10) != plVar4) {
    uVar7 = *(uint *)(plVar4 + 5);
    uVar2 = uVar7 - 1;
    uVar5 = (ulong)uVar2;
    if (-1 < (int)uVar2) {
      uVar8 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | uVar5 << 4;
      do {
        lVar9 = plVar4[6];
        if (*(long *)(lVar9 + uVar5 * 0x10) == param_2) {
          lVar1 = lVar9 + (ulong)uVar7 * 0x10;
          puVar10 = (undefined8 *)(lVar1 + -0x10);
          if ((undefined8 *)(lVar9 + uVar8) != puVar10) {
            uVar11 = *puVar10;
            ((undefined8 *)(lVar9 + uVar8))[1] = *(undefined8 *)(lVar1 + -8);
            *(undefined8 *)(lVar9 + uVar8) = uVar11;
            uVar7 = *(uint *)(plVar4 + 5);
          }
          uVar7 = uVar7 - 1;
          *(uint *)(plVar4 + 5) = uVar7;
        }
        uVar2 = (int)uVar5 - 1;
        uVar5 = (ulong)uVar2;
        uVar8 = uVar8 - 0x10;
      } while (-1 < (int)uVar2);
    }
    plVar6 = (long *)plVar4[1];
    if ((long *)plVar4[1] == (long *)0x0) {
      plVar6 = plVar4 + 2;
      bVar3 = *(long **)*plVar6 != plVar4;
      plVar4 = (long *)*plVar6;
      if (bVar3) {
        do {
          lVar9 = *plVar6;
          plVar6 = (long *)(lVar9 + 0x10);
          plVar4 = (long *)*plVar6;
        } while (*plVar4 != lVar9);
      }
    }
    else {
      do {
        plVar4 = plVar6;
        plVar6 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
  }
  return;
}




void FUN_00e6ed58(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00e6ed58(param_1,*param_2);
    FUN_00e6ed58(param_1,param_2[1]);
    if ((void *)param_2[6] != (void *)0x0) {
      operator_delete__((void *)param_2[6]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_00e6edb0(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 4);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 4;
      puVar4 = puVar1;
      do {
        uVar5 = *puVar2;
        lVar3 = lVar3 + -0x10;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = puVar4 + 2;
        puVar2 = puVar2 + 2;
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




undefined1  [16] FUN_00e6ee34(long param_1,uint *param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined1 auVar7 [16];
  
  puVar4 = (undefined8 *)(param_1 + 8);
  puVar5 = puVar4;
  if ((undefined8 *)*puVar4 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar4;
    puVar5 = (undefined8 *)(param_1 + 8);
    do {
      while (puVar4 = puVar3, *param_2 < *(uint *)(puVar4 + 4)) {
        puVar3 = (undefined8 *)*puVar4;
        puVar5 = puVar4;
        if ((undefined8 *)*puVar4 == (undefined8 *)0x0) goto LAB_00e6eeac;
      }
      if (*param_2 <= *(uint *)(puVar4 + 4)) break;
      puVar5 = puVar4 + 1;
      puVar3 = (undefined8 *)*puVar5;
    } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
  }
LAB_00e6eeac:
  pvVar6 = (void *)*puVar5;
  bVar1 = pvVar6 == (void *)0x0;
  if (bVar1) {
    pvVar6 = operator_new(0x38);
    uVar2 = *(undefined4 *)*param_4;
    *(undefined8 *)((long)pvVar6 + 0x28) = 0;
    *(undefined8 *)((long)pvVar6 + 0x30) = 0;
    *(undefined4 *)((long)pvVar6 + 0x20) = uVar2;
    FUN_00e6ef08(param_1,puVar4,puVar5,pvVar6);
  }
  auVar7[8] = bVar1;
  auVar7._0_8_ = pvVar6;
  auVar7._9_7_ = 0;
  return auVar7;
}




void FUN_00e6ef08(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_0090d468(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




void FUN_00e6ef5c(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_1 != param_2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    FUN_00e6edb0(param_1,*param_2);
    if (*param_2 == 0) {
      uVar1 = 0;
    }
    else {
      puVar3 = *(undefined8 **)(param_1 + 2);
      lVar4 = (ulong)*param_2 << 4;
      puVar2 = *(undefined8 **)(param_2 + 2);
      do {
        uVar5 = *puVar2;
        lVar4 = lVar4 + -0x10;
        puVar3[1] = puVar2[1];
        *puVar3 = uVar5;
        puVar3 = puVar3 + 2;
        puVar2 = puVar2 + 2;
      } while (lVar4 != 0);
      uVar1 = *param_2;
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_00e6efd8(void)

{
  signal(0xd,(__sighandler_t)0x1);
  return;
}




void FUN_00e6efe4(void)

{
  return;
}




void FUN_00e6efe8(undefined8 *param_1)

{
  *param_1 = 0xffffffff;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}




int FUN_00e6eff8(int *param_1)

{
  int __fd;
  
  __fd = *param_1;
  if (__fd != -1) {
    __fd = close(__fd);
    *param_1 = -1;
  }
  return __fd;
}




void thunk_FUN_00e6efd8(void)

{
  signal(0xd,(__sighandler_t)0x1);
  return;
}




void thunk_FUN_00e6efe4(void)

{
  return;
}

