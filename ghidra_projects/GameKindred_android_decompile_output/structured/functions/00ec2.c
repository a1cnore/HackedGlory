// functions/00ec2 — 46 functions
#include "libGameKindred.h"




void FUN_00ec200c(void)

{
  FUN_00ec2018(DAT_032107d0);
  return;
}




undefined8 * FUN_00ec2018(uint *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = *param_1;
  if (uVar3 == 0) {
    FUN_00ec2220(param_1,param_1[1] + 0x80);
    iVar4 = 0x80;
    do {
      puVar2 = operator_new(0x60);
      *puVar2 = &PTR_FUN_02821ad8;
      memset(puVar2 + 1,0,0x44);
      *(undefined4 *)((long)puVar2 + 0x4c) = 9;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      local_50 = puVar2;
      FUN_00ec22a0(param_1,&local_50);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    uVar3 = *param_1;
  }
  puVar2 = *(undefined8 **)(*(long *)(param_1 + 2) + (ulong)(uVar3 - 1) * 8);
  *param_1 = uVar3 - 1;
  *puVar2 = &PTR_FUN_02821ad8;
  memset(puVar2 + 1,0,0x44);
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  *(undefined4 *)((long)puVar2 + 0x4c) = 9;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ec2118(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != (undefined8 *)0x0) {
    if (*(int *)((long)param_1 + 0x4c) - 7U < 2) {
      lVar3 = param_1[10];
      while (lVar3 != 0) {
        lVar3 = *(long *)(lVar3 + 0x58);
        FUN_00ec2118();
      }
    }
    else if (*(int *)((long)param_1 + 0x4c) == 4) {
      puVar4 = (undefined4 *)param_1[10];
      if (*(long *)(puVar4 + 2) != 0) {
        *puVar4 = 0;
        puVar4 = (undefined4 *)param_1[10];
      }
      if (puVar4 != (undefined4 *)0x0) {
        if (*(void **)(puVar4 + 2) != (void *)0x0) {
          operator_delete__(*(void **)(puVar4 + 2));
        }
        operator_delete(puVar4);
      }
    }
    *(undefined4 *)((long)param_1 + 0x4c) = 9;
    memset(param_1 + 1,0,0x44);
    param_1[10] = 0;
    param_1[0xb] = 0;
    uVar2 = DAT_032107d0;
    local_40 = param_1;
    (**(code **)*param_1)(param_1);
    FUN_00ec22a0(uVar2,&local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ec2220(uint *param_1,uint param_2)

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




void FUN_00ec22a0(uint *param_1,undefined8 *param_2)

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
    FUN_00ec2220(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00ec232c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02821af8;
  param_1[1] = 0;
  return;
}




void FUN_00ec2340(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x10);
  FUN_00ec2370();
  DAT_032107d8 = pvVar1;
  return;
}




void FUN_00ec2370(undefined8 *param_1)

{
  long lVar1;
  void *__s;
  int iVar2;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = 0x10;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00ec2c84(param_1,0x10);
  do {
    __s = operator_new(0xd0);
    memset(__s,0,0xb8);
    *(undefined8 *)((long)__s + 0xbc) = 0xffffffffffffffff;
    FUN_00ec2624(__s);
    local_50 = __s;
    FUN_00ec2d04(param_1,&local_50);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ec2414(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_032107d8;
  if (DAT_032107d8 != (void *)0x0) {
    FUN_00ec244c(DAT_032107d8);
    operator_delete(pvVar1);
  }
  DAT_032107d8 = (void *)0x0;
  return;
}




void FUN_00ec244c(uint *param_1)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  
  uVar1 = (ulong)*param_1;
  if (*param_1 != 0) {
    uVar3 = 0;
    do {
      pvVar2 = *(void **)(*(long *)(param_1 + 2) + uVar3 * 8);
      if (pvVar2 != (void *)0x0) {
        FUN_00ec2624(pvVar2);
        operator_delete(pvVar2);
        uVar1 = (ulong)*param_1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
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




void FUN_00ec24b8(void)

{
  FUN_00ec24c4(DAT_032107d8);
  return;
}




void * FUN_00ec24c4(uint *param_1)

{
  long lVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = *param_1;
  if (uVar3 == 0) {
    FUN_00ec2c84(param_1,param_1[1] + 0x10);
    iVar4 = 0x10;
    do {
      pvVar2 = operator_new(0xd0);
      memset(pvVar2,0,0xb8);
      *(undefined8 *)((long)pvVar2 + 0xbc) = 0xffffffffffffffff;
      FUN_00ec2624(pvVar2);
      local_50 = pvVar2;
      FUN_00ec2d04(param_1,&local_50);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    uVar3 = *param_1;
  }
  pvVar2 = *(void **)(*(long *)(param_1 + 2) + (ulong)(uVar3 - 1) * 8);
  *param_1 = uVar3 - 1;
  memset(pvVar2,0,0xb8);
  *(undefined8 *)((long)pvVar2 + 0xbc) = 0xffffffffffffffff;
  FUN_00ec2624(pvVar2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ec25ac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != 0) {
    FUN_00ec2624(param_1);
    uVar2 = DAT_032107d8;
    local_40 = param_1;
    FUN_00ec2624(param_1);
    FUN_00ec2d04(uVar2,&local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ec2624(long param_1)

{
  FUN_00ec2118(*(undefined8 *)(param_1 + 0xa8));
  *(undefined8 *)(param_1 + 0xa8) = 0;
  FUN_00ec2118(*(undefined8 *)(param_1 + 0xb0));
  *(undefined8 *)(param_1 + 0xb0) = 0;
  memset((void *)(param_1 + 0x20),0,0x44);
  memset((void *)(param_1 + 100),0,0x44);
  *(undefined8 *)(param_1 + 0xc4) = 0xbf80000000000000;
  *(undefined1 *)(param_1 + 0xcc) = 0;
  return;
}




void FUN_00ec2684(void *param_1)

{
  memset(param_1,0,0xb8);
  *(undefined8 *)((long)param_1 + 0xbc) = 0xffffffffffffffff;
  FUN_00ec2624(param_1);
  return;
}




void thunk_FUN_00ec2624(long param_1)

{
  FUN_00ec2118(*(undefined8 *)(param_1 + 0xa8));
  *(undefined8 *)(param_1 + 0xa8) = 0;
  FUN_00ec2118(*(undefined8 *)(param_1 + 0xb0));
  *(undefined8 *)(param_1 + 0xb0) = 0;
  memset((void *)(param_1 + 0x20),0,0x44);
  memset((void *)(param_1 + 100),0,0x44);
  *(undefined8 *)(param_1 + 0xc4) = 0xbf80000000000000;
  *(undefined1 *)(param_1 + 0xcc) = 0;
  return;
}




long FUN_00ec26bc(long param_1)

{
  return param_1 + 0x20;
}




long FUN_00ec26c4(long param_1)

{
  return param_1 + 100;
}




undefined4 FUN_00ec26cc(long param_1)

{
  return *(undefined4 *)(param_1 + 0xbc);
}




undefined4 FUN_00ec26d4(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc0);
}




undefined4 FUN_00ec26dc(long param_1)

{
  return *(undefined4 *)(param_1 + 200);
}




undefined1 FUN_00ec26e4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xcc);
}




void FUN_00ec26ec(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc4) = param_2;
  return;
}




undefined4 FUN_00ec26f4(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc4);
}




bool FUN_00ec26fc(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00ec0550(auStack_48,param_1 + 0x20);
  uVar3 = FUN_00ec0f2c(auStack_48);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    FUN_00ec0f0c(auStack_48);
    plVar4 = (long *)FUN_00ec07d0();
    (**(code **)(*plVar4 + 0x30))(plVar4,param_1);
  }
  FUN_00ec0e7c(auStack_48);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ec2790(long param_1)

{
  FUN_00ec0550(param_1 + 0x20);
  return;
}




uint FUN_00ec2798(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00ec0550(auStack_48,param_1 + 0x20);
  uVar3 = FUN_00ec0f2c(auStack_48);
  uVar2 = 0;
  if ((uVar3 & 1) != 0) {
    FUN_00ec0f0c(auStack_48);
    plVar4 = (long *)FUN_00ec07d0();
    uVar2 = (**(code **)(*plVar4 + 0x38))(plVar4,param_1);
  }
  FUN_00ec0e7c(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ec282c(long param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  long lVar5;
  undefined1 auStack_80 [64];
  int local_40;
  long local_38;
  
  iVar2 = _DAT_0000004c;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)(param_1 + 0xa8);
  if (lVar5 == 0) {
    piVar4 = (int *)&DAT_0000004c;
    *param_3 = 0;
    if (iVar2 != 9) goto LAB_00ec289c;
  }
  else {
    piVar4 = (int *)(lVar5 + 0x4c);
    if (*piVar4 != 9) {
      *param_3 = 0;
      goto LAB_00ec289c;
    }
  }
  *piVar4 = 8;
  *(undefined8 *)(lVar5 + 0x50) = 0;
LAB_00ec289c:
  FUN_00e6a50c(auStack_80,0x40,param_2);
  uVar3 = FUN_00e6a474(param_2);
  local_40 = FUN_0091ed5c(param_2,uVar3,0x12345678);
  for (lVar5 = *(long *)(lVar5 + 0x50); (lVar5 != 0 && (*(int *)(lVar5 + 0x48) != local_40));
      lVar5 = *(long *)(lVar5 + 0x58)) {
  }
  *param_3 = *(undefined4 *)(lVar5 + 0x50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ec2918(long param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  long lVar5;
  undefined1 auStack_80 [64];
  int local_40;
  long local_38;
  
  iVar2 = _DAT_0000004c;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)(param_1 + 0xa8);
  if (lVar5 == 0) {
    piVar4 = (int *)&DAT_0000004c;
    *param_3 = 0;
    if (iVar2 != 9) goto LAB_00ec2988;
  }
  else {
    piVar4 = (int *)(lVar5 + 0x4c);
    if (*piVar4 != 9) {
      *param_3 = 0;
      goto LAB_00ec2988;
    }
  }
  *piVar4 = 8;
  *(undefined8 *)(lVar5 + 0x50) = 0;
LAB_00ec2988:
  FUN_00e6a50c(auStack_80,0x40,param_2);
  uVar3 = FUN_00e6a474(param_2);
  local_40 = FUN_0091ed5c(param_2,uVar3,0x12345678);
  for (lVar5 = *(long *)(lVar5 + 0x50); (lVar5 != 0 && (*(int *)(lVar5 + 0x48) != local_40));
      lVar5 = *(long *)(lVar5 + 0x58)) {
  }
  *param_3 = *(undefined4 *)(lVar5 + 0x50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ec2a04(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  long lVar5;
  undefined1 auStack_80 [64];
  int local_40;
  long local_38;
  
  iVar2 = _DAT_0000004c;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)(param_1 + 0xa8);
  if (lVar5 == 0) {
    piVar4 = (int *)&DAT_0000004c;
    *param_3 = 0;
    if (iVar2 != 9) goto LAB_00ec2a74;
  }
  else {
    piVar4 = (int *)(lVar5 + 0x4c);
    if (*piVar4 != 9) {
      *param_3 = 0;
      goto LAB_00ec2a74;
    }
  }
  *piVar4 = 8;
  *(undefined8 *)(lVar5 + 0x50) = 0;
LAB_00ec2a74:
  FUN_00e6a50c(auStack_80,0x40,param_2);
  uVar3 = FUN_00e6a474(param_2);
  local_40 = FUN_0091ed5c(param_2,uVar3,0x12345678);
  for (lVar5 = *(long *)(lVar5 + 0x50); (lVar5 != 0 && (*(int *)(lVar5 + 0x48) != local_40));
      lVar5 = *(long *)(lVar5 + 0x58)) {
  }
  *param_3 = *(undefined1 *)(lVar5 + 0x50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ec2af0(long param_1,undefined8 param_2,byte *param_3)

{
  long lVar1;
  undefined4 uVar2;
  int *piVar3;
  long lVar4;
  long *plVar5;
  byte local_90 [16];
  void *local_80;
  int local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(param_1 + 0xa8);
  if ((lVar4 == 0) || (*(int *)(lVar4 + 0x4c) != 9)) {
    FUN_008fce60(param_3,&DAT_0320ffa8);
    lVar4 = *(long *)(param_1 + 0xa8);
    if (*(int *)(lVar4 + 0x4c) != 9) {
      plVar5 = (long *)(lVar4 + 0x50);
      goto LAB_00ec2b68;
    }
  }
  plVar5 = (long *)(lVar4 + 0x50);
  *plVar5 = 0;
  *(undefined4 *)(lVar4 + 0x4c) = 8;
LAB_00ec2b68:
  FUN_00e6a50c(local_90,0x40,param_2);
  uVar2 = FUN_00e6a474(param_2);
  local_50 = FUN_0091ed5c(param_2,uVar2,0x12345678);
  for (lVar4 = *plVar5; (lVar4 != 0 && (*(int *)(lVar4 + 0x48) != local_50));
      lVar4 = *(long *)(lVar4 + 0x58)) {
  }
  piVar3 = *(int **)(lVar4 + 0x50);
  if ((piVar3 == (int *)0x0) || (*piVar3 == 0)) {
    if ((*param_3 & 1) == 0) {
      param_3[0] = 0;
      param_3[1] = 0;
    }
    else {
      **(undefined1 **)(param_3 + 0x10) = 0;
      param_3[8] = 0;
      param_3[9] = 0;
      param_3[10] = 0;
      param_3[0xb] = 0;
      param_3[0xc] = 0;
      param_3[0xd] = 0;
      param_3[0xe] = 0;
      param_3[0xf] = 0;
    }
  }
  else {
    FUN_008fa54c(local_90,*(undefined8 *)(piVar3 + 2));
    FUN_008fce60(param_3,local_90);
    if ((local_90[0] & 1) != 0) {
      operator_delete(local_80);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ec2c38(long param_1)

{
  FUN_00ec0550(param_1 + 0x20);
  return;
}




void FUN_00ec2c40(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 0xa8) + 0x50);
  *param_1 = &PTR_FUN_02821af8;
  param_1[1] = uVar1;
  return;
}




void FUN_00ec2c5c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0xa8);
  *param_1 = &PTR_FUN_02821af8;
  param_1[1] = uVar1;
  return;
}




undefined8 FUN_00ec2c74(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}




undefined8 FUN_00ec2c7c(void)

{
  return 0;
}




void FUN_00ec2c84(uint *param_1,uint param_2)

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




void FUN_00ec2d04(uint *param_1,undefined8 *param_2)

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
    FUN_00ec2c84(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00ec2d8c(undefined8 *param_1)

{
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_02821b18;
  return;
}




void FUN_00ec2da8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02821b18;
  FUN_00ec2e00();
  FUN_00ec2e88(param_1);
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




void FUN_00ec2e00(long param_1)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar3 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(param_1 + 0x20) + uVar3 * 8) + 0x20))();
      uVar2 = (ulong)*(uint *)(param_1 + 0x18);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
    if (*(uint *)(param_1 + 0x18) != 0) {
      uVar3 = 0;
      do {
        plVar1 = *(long **)(*(long *)(param_1 + 0x20) + uVar3 * 8);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
          uVar2 = (ulong)*(uint *)(param_1 + 0x18);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar2);
    }
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}




void FUN_00ec2e88(long param_1)

{
  long *plVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 8) != 0) {
    uVar2 = 0;
    do {
      FUN_00ec33fc(*(undefined8 *)(*(long *)(param_1 + 0x10) + uVar2 * 8));
      (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + uVar2 * 8) + 0x28))();
      plVar1 = *(long **)(*(long *)(param_1 + 0x10) + uVar2 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 8));
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}




void FUN_00ec2f04(void *param_1)

{
  FUN_00ec2da8();
  operator_delete(param_1);
  return;
}




void FUN_00ec2f28(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + uVar1 * 8) + 0x30))();
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 8));
  }
  return;
}




undefined8 FUN_00ec2f74(long param_1,long *param_2)

{
  long lVar1;
  long *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_2;
  FUN_00ec2fe4(param_1 + 8,&local_30);
  (**(code **)(*param_2 + 0x20))(param_2);
  FUN_00ec3438(param_2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ec2fe4(uint *param_1,undefined8 *param_2)

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
    FUN_00ec3270(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}

