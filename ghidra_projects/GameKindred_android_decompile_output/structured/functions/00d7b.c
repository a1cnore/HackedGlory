// functions/00d7b — 45 functions
#include "libGameKindred.h"




void FUN_00d7b06c(uint *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
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
    FUN_00d7bb4c(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  FUN_008fcdb8(lVar1 + -0x20,param_2);
  *(undefined4 *)(lVar1 + -8) = *(undefined4 *)(param_2 + 0x18);
  return;
}




void FUN_00d7b100(long param_1,long *param_2)

{
  byte *pbVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  size_t sVar6;
  undefined4 uVar7;
  char *__s;
  uint uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  
  puVar9 = (undefined8 *)*param_2;
  do {
    if (puVar9 == (undefined8 *)0x0) {
      FUN_00d7b21c(param_1 + 0x28,0);
      return;
    }
    uVar4 = FUN_00d6eb50();
    uVar4 = FUN_00d6eb5c(uVar4,*puVar9);
    uVar5 = FUN_01985d44(param_1,DAT_031aa094);
    uVar8 = *(uint *)(param_1 + 0x28);
    if (uVar8 != 0) {
      lVar10 = 0;
      uVar11 = 0;
      do {
        __s = (char *)*puVar9;
        pbVar1 = (byte *)(*(long *)(param_1 + 0x30) + lVar10);
        sVar6 = strlen(__s);
        uVar2 = (ulong)(*pbVar1 >> 1);
        if ((*pbVar1 & 1) != 0) {
          uVar2 = *(ulong *)(pbVar1 + 8);
        }
        if (sVar6 == uVar2) {
          iVar3 = FUN_0090d610(pbVar1,0,0xffffffffffffffff,__s,sVar6);
          if (iVar3 == 0) {
            uVar7 = *(undefined4 *)(*(long *)(param_1 + 0x30) + lVar10 + 0x18);
            goto LAB_00d7b1d4;
          }
          uVar8 = *(uint *)(param_1 + 0x28);
        }
        uVar11 = uVar11 + 1;
        lVar10 = lVar10 + 0x20;
      } while (uVar11 < uVar8);
    }
    uVar7 = 0;
LAB_00d7b1d4:
    FUN_00d7ac00(uVar5,*puVar9,uVar4);
    FUN_00d7ac30(uVar5,uVar7);
    param_2 = param_2 + 1;
    puVar9 = (undefined8 *)*param_2;
  } while( true );
}




void FUN_00d7b21c(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 << 5;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x10);
      do {
        if ((*(byte *)(puVar2 + -2) & 1) != 0) {
          operator_delete((void *)*puVar2);
        }
        lVar1 = lVar1 + -0x20;
        puVar2 = puVar2 + 4;
      } while (lVar1 != 0);
    }
    if ((param_2 & 1) != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_00d7b294(undefined8 param_1,void *param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined1 auStack_448 [1024];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_3 != 0) {
    memset(param_2,0,(ulong)param_3 << 3);
  }
  uVar3 = FUN_01985d00(param_1,auStack_448,param_3,DAT_031aa094);
  if ((uVar3 != 0) && (param_3 != 0)) {
    uVar1 = -param_3;
    if (uVar1 < -uVar3) {
      uVar1 = -uVar3;
    }
    memcpy(param_2,auStack_448,(ulong)~uVar1 * 8 + 8);
  }
  if (param_3 <= uVar3) {
    uVar3 = param_3;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




void FUN_00d7b35c(undefined8 param_1,void *param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined1 auStack_448 [1024];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_3 != 0) {
    memset(param_2,0,(ulong)param_3 << 3);
  }
  uVar3 = FUN_01985cbc(param_1,auStack_448,param_3,DAT_031aa094);
  if ((uVar3 != 0) && (param_3 != 0)) {
    uVar1 = -param_3;
    if (uVar1 < -uVar3) {
      uVar1 = -uVar3;
    }
    memcpy(param_2,auStack_448,(ulong)~uVar1 * 8 + 8);
  }
  if (param_3 <= uVar3) {
    uVar3 = param_3;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




long FUN_00d7b424(undefined8 param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long local_78 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d7b294(param_1,local_78,8);
  if (uVar2 != 0) {
    lVar4 = 0;
    do {
      lVar3 = local_78[lVar4];
      if (*(int *)(lVar3 + 0x40) == param_2) goto LAB_00d7b480;
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < uVar2);
  }
  lVar3 = 0;
LAB_00d7b480:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d7b4ac(undefined8 param_1,undefined4 param_2)

{
  FUN_00d7b424(param_1,param_2);
  return;
}




void FUN_00d7b4b4(undefined8 param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long local_78 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d7b294(param_1,local_78,8);
  if (uVar2 != 0) {
    lVar3 = 0;
    do {
      if (*(int *)(local_78[lVar3] + 0x40) == param_2) goto LAB_00d7b514;
      lVar3 = lVar3 + 1;
    } while ((uint)lVar3 < uVar2);
  }
  lVar3 = 0xffffffff;
LAB_00d7b514:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}




undefined8 FUN_00d7b53c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x38);
  if (plVar1 == (long *)0x0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x40) == (int)plVar1[1]) {
    lVar2 = (**(code **)(*plVar1 + 0x10))();
    if (lVar2 == 0) {
      return 0;
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 == (long *)0x0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x40) == (int)plVar1[1]) {
      uVar3 = (**(code **)(*plVar1 + 0x10))();
      return uVar3;
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = DAT_03214ce8;
  return 0;
}




void FUN_00d7b5c0(void)

{
  long lVar1;
  int iVar2;
  undefined4 local_20 [2];
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  if ((DAT_031aa0a8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_031aa0a8);
    if (iVar2 != 0) {
      thunk_FUN_00d9ff34(local_20,"talent_none");
      DAT_031aa0a0 = local_20[0];
      __cxa_guard_release(&DAT_031aa0a8);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(DAT_031aa0a0);
}




void FUN_00d7b658(undefined8 param_1,uint *param_2,long param_3,long param_4,long param_5,
                 uint param_6)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long local_a8 [8];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d7b294(param_1,local_a8,8);
  *param_2 = uVar2;
  if (param_6 != 0) {
    uVar5 = 0;
    while( true ) {
      if (uVar5 < uVar2) {
        lVar4 = local_a8[uVar5];
        *(undefined4 *)(param_3 + uVar5 * 4) = *(undefined4 *)(lVar4 + 0x40);
        uVar3 = FUN_00d7ae38(lVar4);
        *(undefined4 *)(param_4 + uVar5 * 4) = uVar3;
        uVar2 = FUN_00d7ae40(lVar4);
        uVar2 = uVar2 & 1;
      }
      else {
        uVar2 = 0;
        *(undefined4 *)(param_3 + uVar5 * 4) = 0;
        *(undefined4 *)(param_4 + uVar5 * 4) = 0;
      }
      *(uint *)(param_5 + uVar5 * 4) = uVar2;
      if ((ulong)param_6 - 1 == uVar5) break;
      uVar2 = *param_2;
      uVar5 = uVar5 + 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d7b744(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d9ff84(local_40);
  uVar2 = FUN_00d7b424(param_1,local_40[0]);
  FUN_00d7ac30(uVar2,param_3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d7b7b0(long param_1,long param_2)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  plVar2 = *(long **)(param_1 + 0x38);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x40) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        plVar2 = *(long **)(param_1 + 0x38);
        uVar4 = 0;
        if (plVar2 != (long *)0x0) {
          if (*(int *)(param_1 + 0x40) == (int)plVar2[1]) {
            uVar4 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x38) = 0;
            uVar4 = 0;
            *(undefined4 *)(param_1 + 0x40) = DAT_03214ce8;
          }
        }
        FUN_00d7ad30(uVar4);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x40) = DAT_03214ce8;
    }
  }
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(long *)(param_1 + 0x38) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  (**(code **)(*(long *)(param_2 + 0x28) + 0x10))();
  FUN_00d7ac44();
  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}




void FUN_00d7b87c(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  plVar2 = *(long **)(param_1 + 0x38);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x40) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        plVar2 = *(long **)(param_1 + 0x38);
        uVar4 = 0;
        if (plVar2 != (long *)0x0) {
          if (*(int *)(param_1 + 0x40) == (int)plVar2[1]) {
            uVar4 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x38) = 0;
            uVar4 = 0;
            *(undefined4 *)(param_1 + 0x40) = DAT_03214ce8;
          }
        }
        FUN_00d7ad30(uVar4);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x40) = DAT_03214ce8;
    }
  }
  uVar1 = DAT_03214ce8;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  return;
}




void FUN_00d7b938(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  plVar2 = *(long **)(param_1 + 0x38);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x40) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        plVar2 = *(long **)(param_1 + 0x38);
        uVar4 = 0;
        if (plVar2 != (long *)0x0) {
          if (*(int *)(param_1 + 0x40) == (int)plVar2[1]) {
            uVar4 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x38) = 0;
            uVar4 = 0;
            *(undefined4 *)(param_1 + 0x40) = DAT_03214ce8;
          }
        }
        FUN_00d7ad30(uVar4);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x40) = DAT_03214ce8;
    }
  }
  uVar1 = DAT_03214ce8;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  return;
}




void FUN_00d7b9f0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x38);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x40) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x38);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x40) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x38) = 0;
            uVar3 = 0;
            *(undefined4 *)(param_1 + 0x40) = DAT_03214ce8;
          }
        }
        FUN_00d7ac38(uVar3,0);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x40) = DAT_03214ce8;
    }
  }
  return;
}




void FUN_00d7ba98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281e5b0;
  FUN_00d7b21c(param_1 + 5,1);
  FUN_01985bd0(param_1);
  return;
}




void FUN_00d7bad0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281e5b0;
  FUN_00d7b21c(param_1 + 5,1);
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00d7bb10(undefined8 *param_1)

{
  undefined4 uVar1;
  
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_0281e5b0;
  uVar1 = DAT_03214ce8;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}




void FUN_00d7bb40(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d7bb48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00d7bb4c(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  void *pvVar7;
  
  if (param_1[1] < param_2) {
    pvVar3 = operator_new__((ulong)param_2 << 5);
    pvVar4 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar2 = (void *)((long)pvVar4 + (ulong)*param_1 * 0x20);
      pvVar7 = pvVar3;
      do {
        FUN_008fcdb8(pvVar7,pvVar4);
        puVar1 = (undefined4 *)((long)pvVar4 + 0x18);
        pvVar4 = (void *)((long)pvVar4 + 0x20);
        *(undefined4 *)((long)pvVar7 + 0x18) = *puVar1;
        pvVar7 = (void *)((long)pvVar7 + 0x20);
      } while (pvVar4 != pvVar2);
      pvVar4 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar6 = (ulong)*param_1 << 5;
        puVar5 = (undefined8 *)((long)pvVar4 + 0x10);
        do {
          if ((*(byte *)(puVar5 + -2) & 1) != 0) {
            operator_delete((void *)*puVar5);
          }
          lVar6 = lVar6 + -0x20;
          puVar5 = puVar5 + 4;
        } while (lVar6 != 0);
        pvVar4 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
    }
    *(void **)(param_1 + 2) = pvVar3;
  }
  return;
}




void FUN_00d7bc24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  *param_1 = &PTR_FUN_0281e5e0;
  param_1[5] = &PTR_FUN_0281e610;
  *(undefined8 *)((long)param_1 + 0x34) = 0x10;
  return;
}




void FUN_00d7bc74(long param_1)

{
  long lVar1;
  
  DAT_031aa0b0 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_031aa0b0 + 1;
  lVar1 = param_1 + (ulong)DAT_031aa0b0 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00d7be4c;
  *(code **)(lVar1 + 0xb8) = FUN_00d7bea0;
  *(uint *)(lVar1 + 0xa4) = DAT_031aa0b0;
  *(undefined4 *)(lVar1 + 0xa8) = 0x40;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x40;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  return;
}




void FUN_00d7bcd4(undefined4 param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_2 + 0x34) = param_3;
  *(undefined4 *)(param_2 + 0x38) = param_1;
  *(undefined4 *)(param_2 + 0x3c) = param_4;
  return;
}




undefined4 FUN_00d7bce4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}




void FUN_00d7bcec(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x38) = param_1;
  return;
}




undefined4 FUN_00d7bcf4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}




void FUN_00d7bcfc(int param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long local_238 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_019889cc(local_238,0x40,DAT_031aa0b0,0);
  if (0 < iVar2) {
    lVar4 = 0;
    do {
      lVar3 = local_238[lVar4];
      if (*(int *)(lVar3 + 0x3c) == param_1) goto LAB_00d7bd6c;
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar2);
  }
  lVar3 = 0;
LAB_00d7bd6c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}




void FUN_00d7bd94(long param_1)

{
  FUN_0198931c(param_1 + 0x28);
  FUN_01985bd0(param_1);
  return;
}




void FUN_00d7bdbc(void *param_1)

{
  FUN_0198931c((long)param_1 + 0x28);
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00d7bdec(long param_1)

{
  FUN_0198931c();
  FUN_01985bd0(param_1 + -0x28);
  return;
}




void FUN_00d7be10(long param_1)

{
  FUN_0198931c();
  FUN_01985bd0((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




long FUN_00d7be3c(long param_1)

{
  return param_1 + -0x28;
}




long FUN_00d7be44(long param_1)

{
  return param_1 + -0x28;
}




undefined8 * FUN_00d7be4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  *param_1 = &PTR_FUN_0281e5e0;
  param_1[5] = &PTR_FUN_0281e610;
  *(undefined8 *)((long)param_1 + 0x34) = 0x10;
  return param_1;
}




void FUN_00d7bea0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d7bea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00d7beac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_0281e640;
  param_1[5] = &PTR_FUN_0281e670;
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}




void FUN_00d7befc(long param_1)

{
  long lVar1;
  
  DAT_0312e6d4 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312e6d4 + 1;
  lVar1 = param_1 + (ulong)DAT_0312e6d4 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00d7c0fc;
  *(code **)(lVar1 + 0xb8) = FUN_00d7c150;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 2000;
  *(uint *)(lVar1 + 0xa4) = DAT_0312e6d4;
  *(undefined4 *)(lVar1 + 0xa8) = 0x50;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,4,FUN_00d7bf6c,0);
  return;
}




void FUN_00d7bf6c(long param_1)

{
  if (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_0312e6d4) {
    param_1 = 0;
  }
  FUN_00d7bfec(param_1);
  return;
}




void FUN_00d7bf88(undefined4 param_1,long param_2,undefined8 param_3)

{
  *(undefined4 *)(param_2 + 0x40) = param_1;
  *(undefined4 *)(param_2 + 0x44) = param_1;
  *(undefined8 *)(param_2 + 0x38) = param_3;
  return;
}




void FUN_00d7bf94(float param_1,long param_2)

{
  if (0.0 < param_1) {
    *(float *)(param_2 + 0x44) = param_1;
    if (*(float *)(param_2 + 0x40) < param_1) {
      *(float *)(param_2 + 0x40) = param_1;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00d7bfc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_2 + 0x38) + 0x10))();
  return;
}




void FUN_00d7bfc8(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x48) = param_2 & 1;
  return;
}




undefined1 FUN_00d7bfd4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x48);
}




void FUN_00d7bfdc(long param_1)

{
  *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x44);
  return;
}




void FUN_00d7bfec(long param_1)

{
  float fVar1;
  
  if (*(char *)(param_1 + 0x48) == '\0') {
    fVar1 = (float)FUN_01988c78();
    fVar1 = *(float *)(param_1 + 0x44) - fVar1;
    *(float *)(param_1 + 0x44) = fVar1;
    if (fVar1 <= 0.0) {
                    /* WARNING: Could not recover jumptable at 0x00d7c040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_1);
      return;
    }
  }
  return;
}

