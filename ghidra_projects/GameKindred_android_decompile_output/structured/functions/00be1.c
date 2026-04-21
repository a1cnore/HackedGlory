// functions/00be1 — 40 functions
#include "libGameKindred.h"




void FUN_00be1048(void *param_1)

{
  FUN_00be0f08();
  operator_delete(param_1);
  return;
}




void FUN_00be106c(long param_1,undefined8 param_2,byte param_3,byte param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_48;
  long lStack_40;
  long local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(byte *)(param_1 + 0x30) = param_4 & 1;
  FUN_00c55264(*(undefined8 *)(param_1 + 8),param_2,(param_4 ^ param_3 ^ 0xff) & 1);
  uVar2 = FUN_0093dbe8();
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_00cc7c44();
    if ((uVar2 & 1) != 0) {
      FUN_00cc7c38();
      FUN_00be111c(param_1);
    }
    uVar3 = FUN_00cc7c38();
    local_48 = 0;
    pcStack_30 = thunk_FUN_00be111c;
    lStack_40 = param_1;
    local_38 = param_1;
    FUN_00be16a0(uVar3,&local_48);
    *(undefined1 *)(param_1 + 0x32) = 1;
  }
  else {
    FUN_00cc7c38();
    FUN_00be111c(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00be111c(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 0x31) == '\0') {
    plVar2 = (long *)FUN_00cc75b0();
    plVar2 = (long *)*plVar2;
    lVar4 = *plVar2;
    while (lVar4 != 0) {
      uVar3 = FUN_0093dbe8();
      if (((((uVar3 & 1) == 0) || (*(char *)(*plVar2 + 0x34) == '\0')) &&
          (iVar1 = strcmp(*(char **)(*plVar2 + 0x10),(char *)**(undefined8 **)(param_1 + 0x28)),
          iVar1 == 0)) &&
         ((uVar3 = FUN_00cce580(*plVar2), (uVar3 & 1) != 0 &&
          ((*(char *)(param_1 + 0x30) == '\0' || (*(int *)(*plVar2 + 0x20) != 0)))))) {
        FUN_00be1248(param_1);
      }
      plVar2 = plVar2 + 1;
      lVar4 = *plVar2;
    }
    *(undefined1 *)(param_1 + 0x31) = 1;
    FUN_00be12d8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00be11cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 8) + 0x138))();
    return;
  }
  return;
}




undefined8 FUN_00be11d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




uint FUN_00be11d8(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = FUN_00ce9cb8(**(undefined8 **)(param_1 + 0x28));
  iVar2 = FUN_00e6a474(*(undefined8 *)(lVar3 + 0x20));
  if (iVar2 != 0) {
    uVar1 = **(byte **)(lVar3 + 0x20) - 0x61;
    if (uVar1 < 0x1a) {
      return uVar1;
    }
    uVar1 = **(byte **)(lVar3 + 0x20) - 0x41;
    if (uVar1 < 0x1a) {
      return uVar1;
    }
  }
  return 0xffffffff;
}




void FUN_00be1230(long param_1)

{
  FUN_00be11d8(param_1 + -0x10);
  return;
}




undefined8 FUN_00be1238(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




undefined8 FUN_00be1240(long param_1)

{
  return *(undefined8 *)(param_1 + -8);
}




void FUN_00be1248(long param_1,undefined8 param_2)

{
  long lVar1;
  void *pvVar2;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0x20);
  FUN_00be28b4();
  local_40 = pvVar2;
  FUN_00be290c(pvVar2,param_2,*(undefined1 *)(param_1 + 0x30));
  FUN_00be1380(param_1 + 0x18,&local_40);
  FUN_00c555e4(*(undefined8 *)(param_1 + 8),*(undefined8 *)((long)local_40 + 8));
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00be12d8(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  
  uVar3 = FUN_0093dbe8();
  if ((((uVar3 & 1) == 0) && (*(char *)(param_1 + 0x31) != '\0')) &&
     (lVar4 = FUN_00a07af0(), lVar4 != 0)) {
    FUN_00a07af0();
    uVar3 = FUN_00a07ed0();
    if (((uVar3 & 1) != 0) && (*(int *)(param_1 + 0x18) != 0)) {
      plVar7 = *(long **)(param_1 + 0x20);
      do {
        plVar8 = plVar7 + 1;
        lVar4 = *plVar7;
        uVar6 = *(undefined8 *)(lVar4 + 0x10);
        uVar5 = FUN_00a07af0();
        uVar1 = FUN_00a07f2c(uVar5,uVar6);
        uVar5 = FUN_00a07af0();
        uVar2 = FUN_00a07fb0(uVar5,uVar6);
        FUN_00be2934(lVar4,uVar2 & 1,uVar1 & 1);
        plVar7 = plVar8;
      } while (plVar8 != (long *)(*(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x18) * 8))
      ;
    }
  }
  return;
}




void thunk_FUN_00be12d8(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  
  uVar3 = FUN_0093dbe8();
  if ((((uVar3 & 1) == 0) && (*(char *)(param_1 + 0x31) != '\0')) &&
     (lVar4 = FUN_00a07af0(), lVar4 != 0)) {
    FUN_00a07af0();
    uVar3 = FUN_00a07ed0();
    if (((uVar3 & 1) != 0) && (*(int *)(param_1 + 0x18) != 0)) {
      plVar7 = *(long **)(param_1 + 0x20);
      do {
        plVar8 = plVar7 + 1;
        lVar4 = *plVar7;
        uVar6 = *(undefined8 *)(lVar4 + 0x10);
        uVar5 = FUN_00a07af0();
        uVar1 = FUN_00a07f2c(uVar5,uVar6);
        uVar5 = FUN_00a07af0();
        uVar2 = FUN_00a07fb0(uVar5,uVar6);
        FUN_00be2934(lVar4,uVar2 & 1,uVar1 & 1);
        plVar7 = plVar8;
      } while (plVar8 != (long *)(*(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x18) * 8))
      ;
    }
  }
  return;
}




void FUN_00be1380(uint *param_1,undefined8 *param_2)

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
    FUN_00be17c0(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00be1408(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ef0d0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00be144c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ef0d0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00be1490(uint *param_1,undefined8 *param_2)

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
    FUN_00be1524(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  uVar5 = param_2[2];
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  *(undefined8 *)(lVar1 + -8) = param_2[3];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  uVar5 = *param_2;
  *(undefined8 *)(lVar1 + -0x18) = param_2[1];
  *(undefined8 *)(lVar1 + -0x20) = uVar5;
  return;
}




void thunk_FUN_00be12d8(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  
  uVar3 = FUN_0093dbe8();
  if ((((uVar3 & 1) == 0) && (*(char *)(param_1 + 0x31) != '\0')) &&
     (lVar4 = FUN_00a07af0(), lVar4 != 0)) {
    FUN_00a07af0();
    uVar3 = FUN_00a07ed0();
    if (((uVar3 & 1) != 0) && (*(int *)(param_1 + 0x18) != 0)) {
      plVar7 = *(long **)(param_1 + 0x20);
      do {
        plVar8 = plVar7 + 1;
        lVar4 = *plVar7;
        uVar6 = *(undefined8 *)(lVar4 + 0x10);
        uVar5 = FUN_00a07af0();
        uVar1 = FUN_00a07f2c(uVar5,uVar6);
        uVar5 = FUN_00a07af0();
        uVar2 = FUN_00a07fb0(uVar5,uVar6);
        FUN_00be2934(lVar4,uVar2 & 1,uVar1 & 1);
        plVar7 = plVar8;
      } while (plVar8 != (long *)(*(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x18) * 8))
      ;
    }
  }
  return;
}




void FUN_00be1524(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 5);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 5;
      puVar4 = puVar1;
      do {
        uVar5 = puVar2[2];
        lVar3 = lVar3 + -0x20;
        puVar4[3] = puVar2[3];
        puVar4[2] = uVar5;
        uVar5 = *puVar2;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = puVar4 + 4;
        puVar2 = puVar2 + 4;
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




void FUN_00be15b0(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  uVar3 = (uint)((ulong)((long)param_3 - (long)param_2) >> 5);
  if (uVar4 == uVar3) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 0x20);
    if (puVar1 != param_3) {
      do {
        uVar5 = param_3[2];
        param_2[3] = param_3[3];
        param_2[2] = uVar5;
        puVar2 = param_3 + 4;
        uVar5 = *param_3;
        param_2[1] = param_3[1];
        *param_2 = uVar5;
        param_2 = param_2 + 4;
        param_3 = puVar2;
      } while (puVar1 != puVar2);
      uVar4 = *param_1;
    }
    *param_1 = uVar4 - uVar3;
  }
  return;
}




void FUN_00be1628(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  uVar3 = (uint)((ulong)((long)param_3 - (long)param_2) >> 5);
  if (uVar4 == uVar3) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 0x20);
    if (puVar1 != param_3) {
      do {
        uVar5 = param_3[2];
        param_2[3] = param_3[3];
        param_2[2] = uVar5;
        puVar2 = param_3 + 4;
        uVar5 = *param_3;
        param_2[1] = param_3[1];
        *param_2 = uVar5;
        param_2 = param_2 + 4;
        param_3 = puVar2;
      } while (puVar1 != puVar2);
      uVar4 = *param_1;
    }
    *param_1 = uVar4 - uVar3;
  }
  return;
}




void FUN_00be16a0(uint *param_1,undefined8 *param_2)

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
    FUN_00be1734(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  uVar5 = param_2[2];
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  *(undefined8 *)(lVar1 + -8) = param_2[3];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  uVar5 = *param_2;
  *(undefined8 *)(lVar1 + -0x18) = param_2[1];
  *(undefined8 *)(lVar1 + -0x20) = uVar5;
  return;
}




void thunk_FUN_00be111c(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 0x31) == '\0') {
    plVar2 = (long *)FUN_00cc75b0();
    plVar2 = (long *)*plVar2;
    lVar4 = *plVar2;
    while (lVar4 != 0) {
      uVar3 = FUN_0093dbe8();
      if (((((uVar3 & 1) == 0) || (*(char *)(*plVar2 + 0x34) == '\0')) &&
          (iVar1 = strcmp(*(char **)(*plVar2 + 0x10),(char *)**(undefined8 **)(param_1 + 0x28)),
          iVar1 == 0)) &&
         ((uVar3 = FUN_00cce580(*plVar2), (uVar3 & 1) != 0 &&
          ((*(char *)(param_1 + 0x30) == '\0' || (*(int *)(*plVar2 + 0x20) != 0)))))) {
        FUN_00be1248(param_1);
      }
      plVar2 = plVar2 + 1;
      lVar4 = *plVar2;
    }
    *(undefined1 *)(param_1 + 0x31) = 1;
    FUN_00be12d8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00be11cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 8) + 0x138))();
    return;
  }
  return;
}




void FUN_00be1734(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 5);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 5;
      puVar4 = puVar1;
      do {
        uVar5 = puVar2[2];
        lVar3 = lVar3 + -0x20;
        puVar4[3] = puVar2[3];
        puVar4[2] = uVar5;
        uVar5 = *puVar2;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = puVar4 + 4;
        puVar2 = puVar2 + 4;
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




void FUN_00be17c0(uint *param_1,uint param_2)

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




void FUN_00be1840(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR___cxa_pure_virtual_027ef120;
  pvVar1 = operator_new(0xe8);
  FUN_00c559d4();
  param_1[1] = pvVar1;
  param_1[2] = 0;
  *(undefined8 **)((long)pvVar1 + 200) = param_1;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_027ef0f0;
  *(undefined2 *)(param_1 + 4) = 0;
  return;
}




void FUN_00be189c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ef0f0;
  FUN_00be1904();
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  *param_1 = &PTR___cxa_pure_virtual_027ef120;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00be1904(long param_1)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  plVar1 = *(long **)(param_1 + 0x18);
  plVar3 = plVar1;
  if (uVar2 != 0) {
    do {
      if ((long *)*plVar3 != (long *)0x0) {
        (**(code **)(*(long *)*plVar3 + 8))();
        uVar2 = *(uint *)(param_1 + 0x10);
        plVar1 = *(long **)(param_1 + 0x18);
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1 + uVar2);
  }
  if (plVar1 != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  FUN_00c55bd8(*(undefined8 *)(param_1 + 8));
  *(undefined1 *)(param_1 + 0x21) = 0;
  return;
}




void FUN_00be1970(void *param_1)

{
  FUN_00be189c();
  operator_delete(param_1);
  return;
}




void FUN_00be1994(long param_1,byte param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong local_50;
  undefined8 *local_48;
  code *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x21) == '\0') {
    *(byte *)(param_1 + 0x20) = param_2 & 1;
    puVar2 = (undefined8 *)FUN_00ce9af4();
    local_50 = 0;
    local_48 = (undefined8 *)0x0;
    plVar5 = (long *)*puVar2;
    lVar3 = *plVar5;
    if (lVar3 == 0) {
      uVar4 = 0;
    }
    else {
      do {
        if (*(char *)(lVar3 + 8) != '\0') {
          FUN_00be1a9c(&local_50,plVar5);
        }
        plVar5 = plVar5 + 1;
        lVar3 = *plVar5;
      } while (lVar3 != 0);
      uVar4 = local_50 & 0xffffffff;
    }
    local_40 = FUN_00ce9c44;
    FUN_00be1edc(local_48,local_48 + uVar4,&local_40);
    puVar2 = local_48;
    if ((int)local_50 != 0) {
      do {
        puVar6 = puVar2 + 1;
        FUN_00be1b24(param_1,*puVar2);
        puVar2 = puVar6;
      } while (puVar6 != local_48 + (local_50 & 0xffffffff));
    }
    FUN_00c55a18(*(undefined8 *)(param_1 + 8),param_2 & 1);
    *(undefined1 *)(param_1 + 0x21) = 1;
    if (local_48 != (undefined8 *)0x0) {
      operator_delete__(local_48);
      local_50 = 0;
      local_48 = (undefined8 *)0x0;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00be1a9c(uint *param_1,undefined8 *param_2)

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
    FUN_00be1e5c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00be1b24(long param_1,undefined8 param_2)

{
  long lVar1;
  void *pvVar2;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0x38);
  FUN_00be0e54();
  local_40 = pvVar2;
  FUN_00be106c(pvVar2,param_2,*(uint *)(param_1 + 0x10) & 1,*(undefined1 *)(param_1 + 0x20));
  FUN_00be1d8c((uint *)(param_1 + 0x10),&local_40);
  FUN_00c55ae0(*(undefined8 *)(param_1 + 8),*(undefined8 *)((long)local_40 + 8));
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00be1bbc(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00be1d1c(&local_38,param_1 + 0x10);
  uVar2 = FUN_00be1c34(&local_38,param_2);
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
    local_38 = 0;
    local_30 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00be1c34(uint *param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  uint uVar5;
  
  uVar3 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 2) + 0x18))();
  if (*param_1 != 0) {
    plVar4 = *(long **)(param_1 + 2);
    uVar5 = 0;
    do {
      plVar1 = (long *)0x0;
      if (*plVar4 != 0) {
        plVar1 = (long *)(*plVar4 + 0x10);
      }
      uVar2 = (**(code **)*plVar1)(plVar1);
      if (param_2 <= uVar2) {
        if (param_2 - uVar5 <= uVar2 - param_2) {
          return uVar3;
        }
        uVar3 = (**(code **)(*plVar1 + 8))(plVar1);
        return uVar3;
      }
      uVar3 = (**(code **)(*plVar1 + 8))(plVar1);
      plVar4 = plVar4 + 1;
      uVar5 = uVar2;
    } while (plVar4 != (long *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 8));
  }
  return 0;
}




void FUN_00be1d1c(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00be2834(param_1,*param_2);
  uVar1 = *param_2;
  if (uVar1 != 0) {
    lVar4 = (ulong)uVar1 << 3;
    puVar2 = *(undefined8 **)(param_2 + 2);
    puVar3 = *(undefined8 **)(param_1 + 2);
    do {
      lVar4 = lVar4 + -8;
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
  }
  *param_1 = uVar1;
  return;
}




void FUN_00be1d70(undefined8 param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    FUN_00be1994(param_1,0);
    return;
  }
  return;
}




void FUN_00be1d80(undefined8 param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
  FUN_00be1904();
  return;
}




void FUN_00be1d8c(uint *param_1,undefined8 *param_2)

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
    FUN_00be2834(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00be1e14(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027ef120;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00be1e58(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbe1e5c);
  (*pcVar1)();
}




void FUN_00be1e5c(uint *param_1,uint param_2)

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




void FUN_00be1edc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
LAB_00be1f94:
  puVar11 = param_2 + -1;
  puVar12 = param_1;
LAB_00be1fb4:
  param_1 = puVar12;
  lVar7 = (long)param_2 - (long)param_1;
  uVar6 = lVar7 >> 3;
  switch(uVar6) {
  case 0:
  case 1:
    return;
  case 2:
    uVar6 = (*(code *)*param_3)(param_2[-1],*param_1);
    if ((uVar6 & 1) != 0) {
      uVar8 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = uVar8;
      return;
    }
    return;
  case 3:
    FUN_00be22f8(param_1,param_1 + 1,puVar11,param_3);
    return;
  case 4:
    FUN_00be23f0(param_1,param_1 + 1,param_1 + 2,puVar11,param_3);
    return;
  case 5:
    FUN_00be24c0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,puVar11,param_3);
    return;
  }
  if (lVar7 < 0xf8) {
    FUN_00be25c8(param_1,param_2,param_3);
    return;
  }
  uVar4 = uVar6;
  if ((long)uVar6 < 0) {
    uVar4 = uVar6 + 1;
  }
  puVar12 = (undefined8 *)((long)param_1 + (uVar4 & 0x3ffffffffffffffe) * 4);
  if (lVar7 < 0x1f39) {
    iVar3 = FUN_00be22f8(param_1,puVar12,puVar11,param_3);
  }
  else {
    uVar4 = uVar6 + 3;
    if (-1 < (long)uVar6) {
      uVar4 = uVar6;
    }
    lVar7 = (uVar4 & 0x7ffffffffffffffc) * 2;
    iVar3 = FUN_00be24c0(param_1,(long)param_1 + lVar7,puVar12,(long)puVar12 + lVar7,puVar11,param_3
                        );
  }
  uVar6 = (*(code *)*param_3)(*param_1,*puVar12);
  puVar13 = puVar11;
  puVar10 = param_2 + -2;
  if ((uVar6 & 1) == 0) {
LAB_00be2058:
    puVar13 = puVar10;
    if (param_1 != puVar13) goto code_r0x00be2060;
    puVar12 = param_1 + 1;
    uVar6 = (*(code *)*param_3)(*param_1,*puVar11);
    if ((uVar6 & 1) == 0) {
      if (puVar12 == puVar11) {
        return;
      }
      puVar12 = param_1 + 2;
      while (uVar6 = (*(code *)*param_3)(*param_1,puVar12[-1]), (uVar6 & 1) == 0) {
        puVar12 = puVar12 + 1;
        if (param_2 == puVar12) {
          return;
        }
      }
      uVar8 = puVar12[-1];
      puVar12[-1] = *puVar11;
      *puVar11 = uVar8;
    }
    if (puVar12 == puVar11) {
      return;
    }
    while( true ) {
      puVar13 = puVar12 + -1;
      do {
        puVar12 = puVar13;
        puVar13 = puVar12 + 1;
        uVar6 = (*(code *)*param_3)(*param_1,*puVar13);
      } while ((uVar6 & 1) == 0);
      puVar12 = puVar12 + 2;
      do {
        puVar11 = puVar11 + -1;
        uVar6 = (*(code *)*param_3)(*param_1,*puVar11);
      } while ((uVar6 & 1) != 0);
      if (puVar11 <= puVar13) break;
      uVar8 = *puVar13;
      *puVar13 = *puVar11;
      *puVar11 = uVar8;
    }
    uVar5 = 4;
    param_1 = puVar13;
    goto LAB_00be1f58;
  }
  goto LAB_00be2088;
code_r0x00be2060:
  uVar6 = (*(code *)*param_3)(*puVar13,*puVar12);
  puVar10 = puVar13 + -1;
  if ((uVar6 & 1) != 0) goto code_r0x00be2074;
  goto LAB_00be2058;
code_r0x00be2074:
  uVar8 = *param_1;
  iVar3 = iVar3 + 1;
  *param_1 = *puVar13;
  *puVar13 = uVar8;
LAB_00be2088:
  puVar10 = param_1 + 1;
  puVar9 = puVar10;
  puVar1 = puVar12;
  if (puVar10 < puVar13) {
    while( true ) {
      puVar12 = puVar1;
      puVar10 = puVar9 + -1;
      do {
        puVar9 = puVar10;
        puVar10 = puVar9 + 1;
        uVar6 = (*(code *)*param_3)(*puVar10,*puVar12);
      } while ((uVar6 & 1) != 0);
      puVar9 = puVar9 + 2;
      do {
        puVar13 = puVar13 + -1;
        uVar6 = (*(code *)*param_3)(*puVar13,*puVar12);
      } while ((uVar6 & 1) == 0);
      if (puVar13 < puVar10) break;
      uVar8 = *puVar10;
      iVar3 = iVar3 + 1;
      *puVar10 = *puVar13;
      *puVar13 = uVar8;
      puVar1 = puVar13;
      if (puVar12 != puVar10) {
        puVar1 = puVar12;
      }
    }
  }
  if ((puVar10 != puVar12) && (uVar6 = (*(code *)*param_3)(*puVar12,*puVar10), (uVar6 & 1) != 0)) {
    uVar8 = *puVar10;
    iVar3 = iVar3 + 1;
    *puVar10 = *puVar12;
    *puVar12 = uVar8;
  }
  if (iVar3 == 0) {
    uVar6 = FUN_00be2698(param_1,puVar10,param_3);
    uVar4 = FUN_00be2698(puVar10 + 1,param_2,param_3);
    if ((uVar4 & 1) != 0) goto LAB_00be1f7c;
    puVar12 = puVar10 + 1;
    if ((uVar6 & 1) != 0) goto LAB_00be1fb4;
  }
  if ((long)param_2 - (long)puVar10 <= (long)puVar10 - (long)param_1) {
    FUN_00be1edc(puVar10 + 1,param_2,param_3);
    param_2 = puVar10;
    goto LAB_00be1f94;
  }
  FUN_00be1edc(param_1,puVar10,param_3);
  puVar12 = puVar10 + 1;
  goto LAB_00be1fb4;
LAB_00be1f7c:
  bVar2 = (uVar6 & 1) == 0;
  if (bVar2) {
    param_2 = puVar10;
  }
  uVar5 = 1;
  if (bVar2) {
    uVar5 = 2;
  }
LAB_00be1f58:
  if (4 < uVar5) {
    return;
  }
  if ((1 << (ulong)uVar5 & 0x15U) == 0) {
    return;
  }
  goto LAB_00be1f94;
}

