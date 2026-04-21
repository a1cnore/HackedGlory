// functions/00d79 — 45 functions
#include "libGameKindred.h"




void FUN_00d79034(undefined8 *param_1)

{
  long lVar1;
  
  *(undefined4 *)(param_1 + 5) = 0xfe;
  *param_1 = &PTR_FUN_0281e460;
  *(undefined2 *)((long)param_1 + 0xec) = 1;
  lVar1 = 0x68;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  do {
    ((undefined8 *)((long)param_1 + lVar1))[1] = 0xffff0000ffff;
    *(undefined8 *)((long)param_1 + lVar1) = 0xffff0000ffff;
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0xb8);
  *(undefined8 *)((long)param_1 + 0xe4) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xdc) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xd4) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xcc) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xc4) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xbc) = 0xffffffffffffffff;
  return;
}




void FUN_00d790a8(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d790b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




undefined1  [16] FUN_00d790b4(long param_1,uint *param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined1 auVar6 [16];
  
  puVar3 = (undefined8 *)(param_1 + 8);
  puVar4 = puVar3;
  if ((undefined8 *)*puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar3;
    puVar4 = (undefined8 *)(param_1 + 8);
    do {
      while (puVar3 = puVar2, *param_2 < *(uint *)((long)puVar3 + 0x1c)) {
        puVar2 = (undefined8 *)*puVar3;
        puVar4 = puVar3;
        if ((undefined8 *)*puVar3 == (undefined8 *)0x0) goto LAB_00d7912c;
      }
      if (*param_2 <= *(uint *)((long)puVar3 + 0x1c)) break;
      puVar4 = puVar3 + 1;
      puVar2 = (undefined8 *)*puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
  }
LAB_00d7912c:
  pvVar5 = (void *)*puVar4;
  bVar1 = pvVar5 == (void *)0x0;
  if (bVar1) {
    pvVar5 = operator_new(0x20);
    *(undefined4 *)((long)pvVar5 + 0x1c) = *param_3;
    FUN_00d79180(param_1,puVar3,puVar4,pvVar5);
  }
  auVar6[8] = bVar1;
  auVar6._0_8_ = pvVar5;
  auVar6._9_7_ = 0;
  return auVar6;
}




void FUN_00d79180(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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




undefined1  [16] FUN_00d791d4(long param_1,uint *param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined1 auVar6 [16];
  
  puVar3 = (undefined8 *)(param_1 + 8);
  puVar4 = puVar3;
  if ((undefined8 *)*puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar3;
    puVar4 = (undefined8 *)(param_1 + 8);
    do {
      while (puVar3 = puVar2, *param_2 < *(uint *)((long)puVar3 + 0x1c)) {
        puVar2 = (undefined8 *)*puVar3;
        puVar4 = puVar3;
        if ((undefined8 *)*puVar3 == (undefined8 *)0x0) goto LAB_00d7924c;
      }
      if (*param_2 <= *(uint *)((long)puVar3 + 0x1c)) break;
      puVar4 = puVar3 + 1;
      puVar2 = (undefined8 *)*puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
  }
LAB_00d7924c:
  pvVar5 = (void *)*puVar4;
  bVar1 = pvVar5 == (void *)0x0;
  if (bVar1) {
    pvVar5 = operator_new(0x20);
    *(undefined4 *)((long)pvVar5 + 0x1c) = *param_3;
    FUN_00d79180(param_1,puVar3,puVar4,pvVar5);
  }
  auVar6[8] = bVar1;
  auVar6._0_8_ = pvVar5;
  auVar6._9_7_ = 0;
  return auVar6;
}




undefined8 FUN_00d792a0(long param_1,uint *param_2)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar4;
  if (plVar5 != (long *)0x0) {
    uVar1 = *param_2;
    plVar3 = plVar4;
    do {
      bVar2 = *(uint *)((long)plVar5 + 0x1c) < uVar1;
      if (!bVar2) {
        plVar3 = plVar5;
      }
      plVar5 = (long *)plVar5[bVar2];
    } while (plVar5 != (long *)0x0);
    if (plVar3 != plVar4) {
      if (uVar1 < *(uint *)((long)plVar3 + 0x1c)) {
        return 0;
      }
      FUN_00d79308();
      return 1;
    }
  }
  return 0;
}




long * FUN_00d79308(undefined8 *param_1,void *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)((long)param_2 + 8);
  if (*(long **)((long)param_2 + 8) == (long *)0x0) {
    plVar1 = (long *)((long)param_2 + 0x10);
    plVar3 = (long *)*plVar1;
    if ((void *)*plVar3 != param_2) {
      do {
        lVar2 = *plVar1;
        plVar1 = (long *)(lVar2 + 0x10);
        plVar3 = (long *)*plVar1;
      } while (*plVar3 != lVar2);
    }
  }
  else {
    do {
      plVar3 = plVar1;
      plVar1 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
  if ((void *)*param_1 == param_2) {
    *param_1 = plVar3;
  }
  param_1[2] = param_1[2] + -1;
  FUN_009343e8(param_1[1],param_2);
  operator_delete(param_2);
  return plVar3;
}




long FUN_00d7939c(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  
  uVar4 = FUN_0091ed5c(0,0,*param_2);
  uVar2 = *param_1;
  if (uVar2 != 0) {
    lVar5 = *(long *)(param_1 + 2);
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar4 / uVar2;
    }
    uVar3 = uVar4 - uVar3 * uVar2;
    while ((*(uint *)(lVar5 + (ulong)uVar3 * 8) != uVar4 &&
           (*(int *)(lVar5 + (ulong)uVar3 * 8 + 4) != -1))) {
      uVar1 = uVar2;
      if (0 < (int)uVar3) {
        uVar1 = uVar3;
      }
      uVar3 = uVar1 - 1;
    }
    if ((uVar3 != 0xffffffff) &&
       (uVar2 = *(uint *)(lVar5 + (ulong)uVar3 * 8 + 4), uVar2 != 0xffffffff)) {
      return *(long *)(param_1 + 8) + (ulong)uVar2 * 4;
    }
  }
  return 0;
}




long FUN_00d79434(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar4 = FUN_0091ed5c(0,0,*param_2);
  uVar2 = *param_1;
  if (uVar2 != 0) {
    lVar5 = *(long *)(param_1 + 2);
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar4 / uVar2;
    }
    uVar3 = uVar4 - uVar3 * uVar2;
    while ((*(uint *)(lVar5 + (ulong)uVar3 * 8) != uVar4 &&
           (*(int *)(lVar5 + (ulong)uVar3 * 8 + 4) != -1))) {
      uVar1 = uVar2;
      if (0 < (int)uVar3) {
        uVar1 = uVar3;
      }
      uVar3 = uVar1 - 1;
    }
    if (uVar3 != 0xffffffff) {
      uVar6 = (ulong)*(uint *)(lVar5 + (ulong)uVar3 * 8 + 4);
      goto LAB_00d794b0;
    }
  }
  uVar6 = 0xffffffff;
LAB_00d794b0:
  return *(long *)(param_1 + 8) + uVar6 * 4;
}




void FUN_00d794c4(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_0281e490;
  *(undefined4 *)((long)param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 7) = DAT_03214ce8;
  FUN_00d7fb5c(param_1 + 8);
  return;
}




void FUN_00d79508(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  DAT_0312f998 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312f998 + 1;
  lVar2 = param_1 + (ulong)DAT_0312f998 * 0x2e8;
  *(code **)(lVar2 + 0xb0) = FUN_00d79814;
  *(code **)(lVar2 + 0xb8) = FUN_00d79874;
  *(uint *)(lVar2 + 0xa4) = DAT_0312f998;
  *(undefined4 *)(lVar2 + 0xa8) = 0x220;
  *(uint *)(lVar2 + 0x2d8) = *(uint *)(lVar2 + 0x2d8) & 0x80000000 | 0x10;
  *(long *)(param_1 + 0x13fb8) = lVar2;
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_01986780(param_1,5,FUN_00d795a8,0);
  return;
}




void FUN_00d795a8(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 auStack_40 [12];
  float local_34;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar3 = *(long **)(param_1 + 0x30);
  if (plVar3 == (long *)0x0) {
LAB_00d79608:
    if (*(char *)(param_1 + 0x28) == '\0') {
      uVar4 = (ulong)*(uint *)(param_1 + 0x2c);
    }
    else {
      uVar4 = FUN_00cedce4();
    }
    local_30 = FUN_00d9e390(uVar4);
    if (local_30 == 0) {
      uVar2 = 0;
      local_30 = 0;
      goto LAB_00d79694;
    }
    uVar2 = *(undefined4 *)(local_30 + 0x30);
    *(long *)(param_1 + 0x30) = local_30 + 0x28;
    *(undefined4 *)(param_1 + 0x38) = uVar2;
  }
  else {
    if (*(int *)(param_1 + 0x38) != (int)plVar3[1]) {
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x38) = DAT_03214ce8;
      goto LAB_00d79608;
    }
    local_30 = (**(code **)(*plVar3 + 0x10))();
    if (local_30 == 0) goto LAB_00d79608;
  }
  FUN_00d55794(local_30,auStack_40,0);
  local_34 = *(float *)(*(long *)(local_30 + 0x38) + 100);
  local_34 = (*(float *)(*(long *)(local_30 + 0x38) + 0x68) *
             (local_34 + *(float *)(local_30 + 0x2e8))) / local_34;
  uVar2 = FUN_00d7fda8(param_1 + 0x40,&local_30,auStack_40,&local_30,1);
LAB_00d79694:
  FUN_00d80024(param_1 + 0x40,&local_30,uVar2);
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d796c4(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00d7fc50(param_1 + 0x40,param_3,param_4);
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}




void FUN_00d796f8(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_00d7fc7c(param_1 + 0x40,param_3,param_4);
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}




void FUN_00d7972c(long param_1)

{
  FUN_00d7fc50(param_1 + 0x40);
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}




void FUN_00d79758(long param_1)

{
  FUN_00d7fc7c(param_1 + 0x40);
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}




void FUN_00d79784(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281e490;
  if ((void *)param_1[0x43] != (void *)0x0) {
    operator_delete__((void *)param_1[0x43]);
    param_1[0x43] = 0;
    param_1[0x42] = 0;
  }
  FUN_01985bd0(param_1);
  return;
}




void FUN_00d797c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281e490;
  if ((void *)param_1[0x43] != (void *)0x0) {
    operator_delete__((void *)param_1[0x43]);
    param_1[0x43] = 0;
    param_1[0x42] = 0;
  }
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




undefined8 * FUN_00d79814(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_0281e490;
  *(undefined4 *)((long)param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 7) = DAT_03214ce8;
  FUN_00d7fb5c(param_1 + 8);
  return param_1;
}




void FUN_00d79874(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d7987c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00d79880(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = &PTR_thunk_FUN_01985bd0_0281e4c0;
  param_1[6] = 0;
  return;
}




void FUN_00d798a0(void *param_1)

{
  FUN_01985bd0();
  operator_delete(param_1);
  return;
}




void FUN_00d798c4(long param_1)

{
  long lVar1;
  
  DAT_02c7bf28 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_02c7bf28 + 1;
  lVar1 = param_1 + (ulong)DAT_02c7bf28 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00d79b70;
  *(code **)(lVar1 + 0xb8) = FUN_00d79b8c;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x10;
  *(uint *)(lVar1 + 0xa4) = DAT_02c7bf28;
  *(undefined4 *)(lVar1 + 0xa8) = 0x38;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,3,FUN_00d79934,0);
  return;
}




void FUN_00d79934(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined4 local_138;
  float fStack_134;
  float local_130;
  float local_e0;
  float local_dc;
  float local_d8;
  undefined1 auStack_88 [48];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  fVar8 = (float)FUN_01988c78();
  lVar7 = *(long *)(param_4 + 0x10);
  fVar8 = *(float *)(param_4 + 0x28) - fVar8;
  fVar9 = 0.0;
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  *(float *)(param_4 + 0x28) = fVar8;
  if (lVar7 == 0) {
    lVar7 = 0;
  }
  else if (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_02c09220) {
    lVar7 = 0;
  }
  if (fVar8 == 0.0) {
    uVar6 = FUN_00ceab48();
    if ((uVar6 & 1) != 0) {
      uVar1 = *(undefined4 *)(lVar7 + 0x260);
      local_e0 = (float)FUN_00d79c84(*(undefined8 *)(param_4 + 0x30));
      local_dc = fVar9;
      local_d8 = param_3;
      FUN_00cfe614(auStack_88,uVar1,&local_e0);
      FUN_00ce20fc(auStack_88);
      puVar3 = PTR_s_Buff_SpawnStage_Recharge_02bf1068;
      uVar1 = *(undefined4 *)(lVar7 + 0x260);
      uVar4 = FUN_00ceb350();
      FUN_00cfe864(0x40000000,0,0,&local_e0,uVar1,uVar1,puVar3,uVar4,7,0,0);
      FUN_00ce20fc(&local_e0);
      puVar3 = PTR_s_Buff_Shop_AllowStorePurchase_02beba80;
      uVar1 = *(undefined4 *)(lVar7 + 0x260);
      uVar4 = FUN_00ceb350();
      uVar5 = FUN_00d74134();
      FUN_00cfe864(0x3fc00000,0,0,&local_138,uVar1,uVar1,puVar3,uVar4,1,uVar5,0);
      FUN_00ce20fc(&local_138);
    }
    FUN_01985ca8(param_4);
  }
  else {
    fVar9 = 0.3;
    if (((fVar8 <= 0.3) && (0.1 < fVar8)) && (uVar6 = FUN_00ceab48(), (uVar6 & 1) != 0)) {
      FUN_00d55794(lVar7,&local_e0,0);
      fVar8 = (float)FUN_00d79c84(*(undefined8 *)(param_4 + 0x30));
      if (((0.1 <= ABS(local_e0 - fVar8)) || (0.1 <= ABS(local_dc - fVar9))) ||
         (0.1 <= ABS(local_d8 - param_3))) {
        local_138 = FUN_00d79c84(*(undefined8 *)(param_4 + 0x30));
        fStack_134 = fVar9;
        local_130 = param_3;
        FUN_00cb6f00(lVar7,&local_138,1);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d79b54(undefined4 param_1,long param_2,undefined8 param_3)

{
  *(undefined4 *)(param_2 + 0x28) = param_1;
  *(undefined8 *)(param_2 + 0x30) = param_3;
  return;
}




void FUN_00d79b60(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x28) = param_1;
  return;
}




undefined4 FUN_00d79b68(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}




void FUN_00d79b70(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = &PTR_thunk_FUN_01985bd0_0281e4c0;
  param_1[6] = 0;
  return;
}




void FUN_00d79b8c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d79b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00d79b98(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  DAT_0312ee10 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312ee10 + 1;
  lVar2 = param_1 + (ulong)DAT_0312ee10 * 0x2e8;
  *(code **)(lVar2 + 0xb0) = FUN_00d79ed4;
  *(code **)(lVar2 + 0xb8) = FUN_00d79ee8;
  *(uint *)(lVar2 + 0xa4) = DAT_0312ee10;
  *(undefined4 *)(lVar2 + 0xa8) = 0x40;
  *(uint *)(lVar2 + 0x2d8) = *(uint *)(lVar2 + 0x2d8) & 0x80000000 | 0x10;
  *(long *)(param_1 + 0x13fb8) = lVar2;
  uVar1 = FUN_019888d4();
  FUN_01989130(uVar1,PTR_DAT_02beace0,FUN_00d79c1c);
  return;
}




void FUN_00d79c1c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  if (param_3 != 0) {
    lVar2 = FUN_01988738(DAT_0312ee10,0);
    *(long *)(lVar2 + 0x28) = param_3;
    uVar1 = *(undefined4 *)(param_3 + 0x20);
    *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(param_3 + 0x18);
    *(undefined4 *)(lVar2 + 0x38) = uVar1;
  }
  return;
}




undefined4 FUN_00d79c60(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 0x28) + 8);
}




undefined4 FUN_00d79c6c(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 0x28) + 0xc);
}




undefined4 FUN_00d79c78(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x10);
}




undefined4 FUN_00d79c84(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}




undefined4 FUN_00d79c90(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x14);
}




undefined8 FUN_00d79c9c(long param_1)

{
  return **(undefined8 **)(param_1 + 0x28);
}




void FUN_00d79ca8(long param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x30) = *param_2;
  return;
}




void FUN_00d79cbc(char param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long local_b8 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_019889cc(local_b8,0x10,DAT_0312ee10,0);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      lVar3 = local_b8[uVar4];
      if ((*(char *)(*(long *)(lVar3 + 0x28) + 8) == param_1) &&
         (*(int *)(*(long *)(lVar3 + 0x28) + 0xc) == param_2)) goto LAB_00d79d3c;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  lVar3 = 0;
LAB_00d79d3c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}




void FUN_00d79d64(char param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long local_b8 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_019889cc(local_b8,0x10,DAT_0312ee10,0);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      lVar3 = local_b8[uVar4];
      lVar5 = *(long *)(lVar3 + 0x28);
      if (((*(char *)(lVar5 + 8) == param_1) && (*(int *)(lVar5 + 0xc) == 0)) &&
         (*(int *)(lVar5 + 0x10) == param_2)) goto LAB_00d79dec;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  lVar3 = 0;
LAB_00d79dec:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}




void FUN_00d79e14(char param_1,int param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long local_d8 [16];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_019889cc(local_d8,0x10,DAT_0312ee10,0);
  if (uVar2 != 0) {
    uVar4 = (ulong)uVar2;
    plVar5 = local_d8;
    do {
      lVar3 = *(long *)(*plVar5 + 0x28);
      if ((*(char *)(lVar3 + 8) == param_1) && (*(int *)(lVar3 + 0xc) == param_2)) {
        (*param_3)(*plVar5,param_4);
      }
      uVar4 = uVar4 - 1;
      plVar5 = plVar5 + 1;
    } while (uVar4 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d79ed4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281e4f0;
  return;
}




void FUN_00d79ee8(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d79ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00d79ef4(void *param_1)

{
  FUN_01985bd0();
  operator_delete(param_1);
  return;
}




void FUN_00d79f18(undefined8 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  param_1[5] = 0;
  *param_1 = &PTR_thunk_FUN_01985bd0_0281e520;
  uVar1 = DAT_03214ce8;
  puVar3 = param_1 + 6;
  do {
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = uVar1;
    puVar3 = puVar3 + 2;
  } while (puVar3 != param_1 + 0x46);
  puVar3 = param_1 + 0x46;
  do {
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = uVar1;
    puVar3 = puVar3 + 2;
  } while (puVar3 != param_1 + 0x50);
  param_1[0x50] = 0;
  param_1[0x52] = 0;
  *(undefined1 *)(param_1 + 0x51) = 0xff;
  lVar2 = FUN_01985d44(param_1,DAT_031a9b44);
  param_1[5] = lVar2;
  FUN_00d7fd38(lVar2 + 0x28,FUN_00d7a008,param_1);
  FUN_00d7fd40(param_1[5] + 0x28,FUN_00d7a014,param_1);
  FUN_00d7fd48(param_1[5] + 0x28,FUN_00d7a020,param_1);
  FUN_00d7fd30(param_1[5] + 0x28,1);
  return;
}

