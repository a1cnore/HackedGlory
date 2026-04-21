// functions/00d1a — 47 functions
#include "libGameKindred.h"




void FUN_00d1a00c(void)

{
  return;
}




void FUN_00d1a010(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x24) = param_1;
  return;
}




undefined8 FUN_00d1a018(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  
  uVar1 = *(uint *)(param_2 + 0x1228);
  uVar2 = *(uint *)(param_2 + 0x680);
  if (uVar1 != 0) {
    uVar5 = 0;
    lVar4 = param_2 + 0x1028;
    do {
      uVar3 = FUN_00e0b624(0x40400000,lVar4,param_2 + 0x1478);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x40;
    } while (uVar5 < uVar1);
  }
  if (uVar2 != 0) {
    uVar5 = 0;
    lVar4 = param_2 + 0x380;
    fVar6 = 0.0;
    do {
      uVar3 = FUN_00e0b624(0,lVar4,param_2 + 0x1478);
      if ((uVar3 & 1) != 0) {
        fVar6 = fVar6 + *(float *)(lVar4 + 0x28);
      }
      if (*(float *)(param_1 + 0x24) <= fVar6) {
        return 1;
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x40;
    } while (uVar5 < uVar2);
  }
  return 2;
}




void FUN_00d1a0f4(void)

{
  return;
}




void FUN_00d1a0f8(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x24) = param_1;
  return;
}




undefined8 FUN_00d1a100(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  
  plVar4 = *(long **)(param_2 + 0x1428);
  plVar3 = (long *)*plVar4;
  if (plVar3 == (long *)0x0) {
    lVar2 = 0;
  }
  else if ((int)plVar4[1] == (int)plVar3[1]) {
    lVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  else {
    *plVar4 = 0;
    lVar2 = 0;
    *(undefined4 *)(plVar4 + 1) = DAT_03214ce8;
  }
  uVar1 = *(ushort *)(lVar2 + 0x88) & 0x1f;
  if ((uVar1 == 0x1f) || (1 < *(ushort *)(lVar2 + (ulong)uVar1 * 0x38 + 0x90) - 3)) {
    lVar2 = *(long *)(lVar2 + 0x40);
    fVar5 = (*(float *)(lVar2 + 0x1a0) + 1.0) *
            (*(float *)(lVar2 + 0x38) + *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0)
            );
    if (DAT_031500a0 <= fVar5) {
      fVar5 = DAT_031500a0;
    }
    fVar6 = DAT_0314ffe0;
    if (DAT_0314ffe0 <= fVar5) {
      fVar6 = fVar5;
    }
    if (*(float *)(lVar2 + 0x308) < *(float *)(param_1 + 0x24) * fVar6) {
      return 1;
    }
  }
  return 2;
}




void FUN_00d1a204(void)

{
  return;
}




undefined8 FUN_00d1a208(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  
  if ((1 < *(uint *)(param_2 + 0x270)) && (*(int *)(param_2 + 0x378) != 0)) {
    uVar3 = 0;
    iVar2 = 0;
    pfVar4 = (float *)(param_2 + 0xa0);
    fVar5 = 0.0;
    do {
      fVar6 = *pfVar4;
      iVar1 = (int)uVar3;
      if (*pfVar4 <= fVar5) {
        fVar6 = fVar5;
        iVar1 = iVar2;
      }
      iVar2 = iVar1;
      uVar3 = uVar3 + 1;
      pfVar4 = pfVar4 + 0x10;
      fVar5 = fVar6;
    } while (*(uint *)(param_2 + 0x270) != uVar3);
    *(long *)(param_2 + 0x1420) = param_2 + (long)iVar2 * 0x40 + 0x70;
    return 1;
  }
  return 2;
}




void FUN_00d1a268(void)

{
  return;
}




void FUN_00d1a26c(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x24) = param_1;
  return;
}




undefined8 FUN_00d1a274(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  
  plVar4 = *(long **)(param_2 + 0x1420);
  plVar3 = (long *)*plVar4;
  if (plVar3 == (long *)0x0) {
    lVar2 = 0;
  }
  else if ((int)plVar4[1] == (int)plVar3[1]) {
    lVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  else {
    *plVar4 = 0;
    lVar2 = 0;
    *(undefined4 *)(plVar4 + 1) = DAT_03214ce8;
  }
  uVar1 = *(ushort *)(lVar2 + 0x88) & 0x1f;
  if ((uVar1 == 0x1f) || (1 < *(ushort *)(lVar2 + (ulong)uVar1 * 0x38 + 0x90) - 3)) {
    lVar2 = *(long *)(lVar2 + 0x40);
    fVar5 = (*(float *)(lVar2 + 0x1a0) + 1.0) *
            (*(float *)(lVar2 + 0x38) + *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0)
            );
    if (DAT_031500a0 <= fVar5) {
      fVar5 = DAT_031500a0;
    }
    fVar6 = DAT_0314ffe0;
    if (DAT_0314ffe0 <= fVar5) {
      fVar6 = fVar5;
    }
    if (*(float *)(lVar2 + 0x308) < *(float *)(param_1 + 0x24) * fVar6) {
      return 1;
    }
  }
  return 2;
}




void FUN_00d1a378(void)

{
  return;
}




void FUN_00d1a37c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




void FUN_00d1a384(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float local_48;
  float fStack_44;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d25570(param_2);
  FUN_00d55794(uVar2,&local_48,0);
  uVar3 = 2;
  switch(*(undefined4 *)(param_1 + 0x24)) {
  case 2:
    lVar4 = 0x19f0;
    lVar5 = 0x19f4;
    lVar6 = 0x19f8;
    break;
  default:
    goto switchD_00d1a3e4_caseD_3;
  case 4:
    lVar4 = 0x1b30;
    lVar5 = 0x1b34;
    lVar6 = 0x1b38;
    break;
  case 5:
    lVar4 = 0x1b70;
    lVar5 = 0x1b74;
    lVar6 = 0x1b78;
    break;
  case 6:
    lVar4 = 0x1bb0;
    lVar5 = 0x1bb4;
    lVar6 = 0x1bb8;
  }
  local_48 = local_48 - *(float *)(param_2 + lVar4);
  fStack_44 = fStack_44 - *(float *)(param_2 + lVar5);
  local_40 = local_40 - *(float *)(param_2 + lVar6);
  uVar3 = 2;
  if (local_48 * local_48 + fStack_44 * fStack_44 + local_40 * local_40 < 100.0) {
    uVar3 = 1;
  }
switchD_00d1a3e4_caseD_3:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




void FUN_00d1a4a0(void)

{
  return;
}




void FUN_00d1a4a4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float local_38 [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d25570(param_2);
  FUN_00d55794(uVar2,local_38,0);
  local_38[0] = local_38[0] - *(float *)(param_2 + 0x143c);
  fVar4 = (float)local_38._4_8_ - (float)*(undefined8 *)(param_2 + 0x1440);
  fVar5 = SUB84(local_38._4_8_,4) - (float)((ulong)*(undefined8 *)(param_2 + 0x1440) >> 0x20);
  uVar3 = 2;
  if (local_38[0] * local_38[0] + fVar4 * fVar4 + fVar5 * fVar5 < 2.25) {
    uVar3 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




void FUN_00d1a538(void)

{
  return;
}




undefined4 FUN_00d1a53c(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (*(long *)(param_2 + 0x14f8) != 0) {
    if (*(int *)(param_2 + 0x1500) == *(int *)(*(long *)(param_2 + 0x14f8) + 8)) {
      fVar2 = *(float *)(param_2 + 0x1508) - *(float *)(param_2 + 0x143c);
      fVar3 = (float)*(undefined8 *)(param_2 + 0x150c) - (float)*(undefined8 *)(param_2 + 0x1440);
      fVar4 = (float)((ulong)*(undefined8 *)(param_2 + 0x150c) >> 0x20) -
              (float)((ulong)*(undefined8 *)(param_2 + 0x1440) >> 0x20);
      uVar1 = 2;
      if (fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4 < 100.0) {
        uVar1 = 1;
      }
      return uVar1;
    }
    *(undefined8 *)(param_2 + 0x14f8) = 0;
    *(undefined4 *)(param_2 + 0x1500) = DAT_03214ce8;
  }
  return 2;
}




void FUN_00d1a5b8(void)

{
  return;
}




void FUN_00d1a5bc(undefined8 *param_1)

{
  FUN_00d0aac4();
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *param_1 = &PTR_FUN_02815a48;
  param_1[5] = 0x40400000;
  *(undefined4 *)(param_1 + 7) = DAT_03218f38;
  param_1[6] = DAT_03218f30;
  return;
}




undefined4 FUN_00d1a614(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}




void thunk_FUN_00d1a624(long param_1,long param_2)

{
  float fVar1;
  float __x;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  fVar4 = *(float *)(param_2 + 0x30);
  if (*(long *)(param_2 + 0x1478) != 0) {
    if (*(int *)(param_2 + 0x1480) == *(int *)(*(long *)(param_2 + 0x1478) + 8)) {
      fVar5 = (float)*(undefined8 *)(param_2 + 0x1488) - (float)uVar2;
      fVar3 = (float)((ulong)uVar2 >> 0x20);
      fVar6 = (float)((ulong)*(undefined8 *)(param_2 + 0x1488) >> 0x20) - fVar3;
      fVar7 = *(float *)(param_2 + 0x1490) - fVar4;
      __x = fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7;
      if (0.01 < __x) {
        fVar1 = SQRT(__x);
        if (NAN(fVar1)) {
          fVar1 = sqrtf(__x);
        }
        uVar2 = CONCAT44(fVar3 + fVar6 / fVar1 + fVar6 / fVar1,
                         (float)uVar2 + fVar5 / fVar1 + fVar5 / fVar1);
        fVar4 = fVar4 + fVar7 / fVar1 + fVar7 / fVar1;
      }
    }
    else {
      *(undefined8 *)(param_2 + 0x1478) = 0;
      *(undefined4 *)(param_2 + 0x1480) = DAT_03214ce8;
    }
  }
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(float *)(param_1 + 0x38) = fVar4;
  return;
}




void FUN_00d1a624(long param_1,long param_2)

{
  float fVar1;
  float __x;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  fVar4 = *(float *)(param_2 + 0x30);
  if (*(long *)(param_2 + 0x1478) != 0) {
    if (*(int *)(param_2 + 0x1480) == *(int *)(*(long *)(param_2 + 0x1478) + 8)) {
      fVar5 = (float)*(undefined8 *)(param_2 + 0x1488) - (float)uVar2;
      fVar3 = (float)((ulong)uVar2 >> 0x20);
      fVar6 = (float)((ulong)*(undefined8 *)(param_2 + 0x1488) >> 0x20) - fVar3;
      fVar7 = *(float *)(param_2 + 0x1490) - fVar4;
      __x = fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7;
      if (0.01 < __x) {
        fVar1 = SQRT(__x);
        if (NAN(fVar1)) {
          fVar1 = sqrtf(__x);
        }
        uVar2 = CONCAT44(fVar3 + fVar6 / fVar1 + fVar6 / fVar1,
                         (float)uVar2 + fVar5 / fVar1 + fVar5 / fVar1);
        fVar4 = fVar4 + fVar7 / fVar1 + fVar7 / fVar1;
      }
    }
    else {
      *(undefined8 *)(param_2 + 0x1478) = 0;
      *(undefined4 *)(param_2 + 0x1480) = DAT_03214ce8;
    }
  }
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(float *)(param_1 + 0x38) = fVar4;
  return;
}




void thunk_FUN_00d1a624(long param_1,long param_2)

{
  float fVar1;
  float __x;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  fVar4 = *(float *)(param_2 + 0x30);
  if (*(long *)(param_2 + 0x1478) != 0) {
    if (*(int *)(param_2 + 0x1480) == *(int *)(*(long *)(param_2 + 0x1478) + 8)) {
      fVar5 = (float)*(undefined8 *)(param_2 + 0x1488) - (float)uVar2;
      fVar3 = (float)((ulong)uVar2 >> 0x20);
      fVar6 = (float)((ulong)*(undefined8 *)(param_2 + 0x1488) >> 0x20) - fVar3;
      fVar7 = *(float *)(param_2 + 0x1490) - fVar4;
      __x = fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7;
      if (0.01 < __x) {
        fVar1 = SQRT(__x);
        if (NAN(fVar1)) {
          fVar1 = sqrtf(__x);
        }
        uVar2 = CONCAT44(fVar3 + fVar6 / fVar1 + fVar6 / fVar1,
                         (float)uVar2 + fVar5 / fVar1 + fVar5 / fVar1);
        fVar4 = fVar4 + fVar7 / fVar1 + fVar7 / fVar1;
      }
    }
    else {
      *(undefined8 *)(param_2 + 0x1478) = 0;
      *(undefined4 *)(param_2 + 0x1480) = DAT_03214ce8;
    }
  }
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(float *)(param_1 + 0x38) = fVar4;
  return;
}




void FUN_00d1a6f4(void)

{
  return;
}




void thunk_FUN_00d1a624(long param_1,long param_2)

{
  float fVar1;
  float __x;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  fVar4 = *(float *)(param_2 + 0x30);
  if (*(long *)(param_2 + 0x1478) != 0) {
    if (*(int *)(param_2 + 0x1480) == *(int *)(*(long *)(param_2 + 0x1478) + 8)) {
      fVar5 = (float)*(undefined8 *)(param_2 + 0x1488) - (float)uVar2;
      fVar3 = (float)((ulong)uVar2 >> 0x20);
      fVar6 = (float)((ulong)*(undefined8 *)(param_2 + 0x1488) >> 0x20) - fVar3;
      fVar7 = *(float *)(param_2 + 0x1490) - fVar4;
      __x = fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7;
      if (0.01 < __x) {
        fVar1 = SQRT(__x);
        if (NAN(fVar1)) {
          fVar1 = sqrtf(__x);
        }
        uVar2 = CONCAT44(fVar3 + fVar6 / fVar1 + fVar6 / fVar1,
                         (float)uVar2 + fVar5 / fVar1 + fVar5 / fVar1);
        fVar4 = fVar4 + fVar7 / fVar1 + fVar7 / fVar1;
      }
    }
    else {
      *(undefined8 *)(param_2 + 0x1478) = 0;
      *(undefined4 *)(param_2 + 0x1480) = DAT_03214ce8;
    }
  }
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(float *)(param_1 + 0x38) = fVar4;
  return;
}




void FUN_00d1a6fc(void)

{
  return;
}




void FUN_00d1a700(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02815b48;
  *(undefined4 *)((long)param_1 + 0x24) = 3;
  return;
}




undefined4 FUN_00d1a738(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  FUN_00d25570(param_2);
  uVar1 = FUN_00da0118();
  uVar2 = 1;
  if (*(uint *)(param_1 + 0x24) <= uVar1) {
    uVar2 = 2;
  }
  return uVar2;
}




void FUN_00d1a770(void)

{
  return;
}




void FUN_00d1a774(undefined8 param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(undefined8 **)(param_2 + 0x1420) == (undefined8 *)0x0) {
    uVar3 = 2;
  }
  else {
    lVar5 = (**(code **)(*(long *)**(undefined8 **)(param_2 + 0x1420) + 0x10))();
    lVar6 = *(long *)(lVar5 + 0x18);
    while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_02c7bf48))) {
      lVar6 = *(long *)(lVar6 + 0x20);
    }
    uVar3 = FUN_00e6a474("Buff_Blackfeather_HeartThrob");
    uVar3 = FUN_0091ed5c("Buff_Blackfeather_HeartThrob",uVar3,0x12345678);
    FUN_00d9ff84(local_40,uVar3);
    uVar4 = FUN_00d6bb44(lVar6,local_40[0]);
    bVar2 = FUN_00d9ffd8(lVar5);
    uVar3 = 1;
    if (uVar4 < 5 && (bVar2 & 1 < uVar4) == 0) {
      uVar3 = 2;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




void FUN_00d1a874(void)

{
  return;
}




void FUN_00d1a878(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(undefined8 **)(param_2 + 0x1420) == (undefined8 *)0x0) {
    uVar2 = 2;
  }
  else {
    lVar4 = (**(code **)(*(long *)**(undefined8 **)(param_2 + 0x1420) + 0x10))();
    lVar4 = *(long *)(lVar4 + 0x18);
    while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_02c7bf48))) {
      lVar4 = *(long *)(lVar4 + 0x20);
    }
    uVar2 = FUN_00e6a474("Buff_Krul_Spectral_Smite_Debuf");
    uVar2 = FUN_0091ed5c("Buff_Krul_Spectral_Smite_Debuf",uVar2,0x12345678);
    FUN_00d9ff84(local_40,uVar2);
    uVar3 = FUN_00d6bb44(lVar4,local_40[0]);
    uVar2 = 1;
    if (uVar3 < 8) {
      uVar2 = 2;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}




void FUN_00d1a950(void)

{
  return;
}




void FUN_00d1a954(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




void FUN_00d1a95c(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float __x;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_c0 [56];
  undefined8 local_88;
  undefined4 local_80;
  undefined1 auStack_78 [16];
  undefined8 local_68;
  float local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_2 + 0x1478) != 0) {
    if (*(int *)(param_2 + 0x1480) == *(int *)(*(long *)(param_2 + 0x1478) + 8)) {
      lVar3 = FUN_00d25570(param_2);
      fVar9 = (float)*(undefined8 *)(param_2 + 0x1508) - (float)*(undefined8 *)(param_2 + 0x28);
      fVar10 = (float)((ulong)*(undefined8 *)(param_2 + 0x1508) >> 0x20) -
               (float)((ulong)*(undefined8 *)(param_2 + 0x28) >> 0x20);
      fVar11 = *(float *)(param_2 + 0x1510) - *(float *)(param_2 + 0x30);
      __x = fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11;
      if (0.01 < __x) {
        lVar6 = *(long *)(lVar3 + 0x18);
        while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_02e3ef78))) {
          lVar6 = *(long *)(lVar6 + 0x20);
        }
        uVar2 = FUN_00d588cc(lVar3,*(undefined8 *)(param_1 + 0x28));
        fVar7 = (float)FUN_00d53b5c(lVar6,uVar2);
        fVar8 = SQRT(__x);
        if (NAN(fVar8)) {
          fVar8 = sqrtf(__x);
        }
        local_68 = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x28) >> 0x20) +
                            (fVar10 / fVar8) * fVar7,
                            (float)*(undefined8 *)(param_2 + 0x28) + (fVar9 / fVar8) * fVar7);
        local_60 = fVar7 * (fVar11 / fVar8) + *(float *)(param_2 + 0x30);
        local_88 = 0x4000000040000000;
        local_80 = 0x40000000;
        uVar4 = FUN_00da2eb4(lVar3);
        uVar5 = FUN_00ef00a0(uVar4,&local_68,auStack_78,&local_88);
        if ((uVar5 & 1) != 0) {
          FUN_00cfe06c(auStack_c0,*(undefined4 *)(lVar3 + 0x260),auStack_78,uVar2);
          FUN_00ce20fc(auStack_c0);
          uVar4 = 1;
          goto LAB_00d1aaec;
        }
      }
    }
    else {
      *(undefined8 *)(param_2 + 0x1478) = 0;
      *(undefined4 *)(param_2 + 0x1480) = DAT_03214ce8;
    }
  }
  uVar4 = 2;
LAB_00d1aaec:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}




void FUN_00d1ab20(void)

{
  return;
}




void FUN_00d1ab24(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02815bd0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  return;
}




void FUN_00d1ab58(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x24) = param_1;
  return;
}




undefined4 FUN_00d1ab60(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  float fVar3;
  
  uVar1 = FUN_00e6a474("__VOICE_ASSISTANT__");
  uVar1 = FUN_0091ed5c("__VOICE_ASSISTANT__",uVar1,0x12345678);
  puVar2 = (undefined8 *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar1);
  fVar3 = (float)(**(code **)(*(long *)*puVar2 + 0x18))();
  uVar1 = 2;
  if (*(float *)(param_1 + 0x24) <= fVar3) {
    uVar1 = 1;
  }
  return uVar1;
}




void FUN_00d1abe8(void)

{
  return;
}




void FUN_00d1abec(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined8 *)(param_1 + 0x30) = param_3;
  *(undefined1 *)(param_1 + 0x4c) = param_5;
  *(undefined4 *)(param_1 + 0x44) = param_7;
  *(undefined4 *)(param_1 + 0x48) = param_6;
  *(undefined4 *)(param_1 + 0x40) = param_4;
  *(undefined8 *)(param_1 + 0x38) = param_8;
  return;
}




undefined8 FUN_00d1ac04(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 local_3d8;
  float local_3d0;
  undefined8 local_3c8;
  undefined4 local_3c0;
  long local_3b8;
  undefined1 auStack_3b0 [792];
  long local_98;
  
  lVar1 = tpidr_el0;
  local_98 = *(long *)(lVar1 + 0x28);
  uVar6 = FUN_00d6eb50();
  uVar2 = FUN_00d6e9d4(uVar6,*(undefined8 *)(param_1 + 0x28));
  uVar6 = FUN_00d6eb50();
  lVar7 = FUN_00d6eb5c(uVar6,*(undefined8 *)(param_1 + 0x28));
  local_3b8 = 0;
  FUN_019889cc(&local_3b8,1,DAT_02e3ef88,0);
  lVar11 = local_3b8;
  if (*(int *)(*(long *)(local_3b8 + 8) + 0xa4) != DAT_02e3ef88) {
    lVar11 = 0;
  }
  plVar10 = *(long **)(*(long *)(lVar11 + 0x290) + 0x158);
  puVar9 = (undefined8 *)*plVar10;
  local_3c0 = DAT_03218f38;
  local_3c8 = DAT_03218f30;
  local_3d0 = DAT_03218f70;
  local_3d8 = DAT_03218f68;
  do {
    if (puVar9 == (undefined8 *)0x0) {
LAB_00d1aeb0:
      FUN_00d4d1ec(auStack_3b0);
      uVar4 = FUN_00ceb350();
      lVar11 = *(long *)(param_1 + 0x38);
      if (lVar11 != 0) {
        uVar5 = FUN_00e6a474(lVar11);
        uVar5 = FUN_0091ed5c(lVar11,uVar5,0x12345678);
        puVar8 = (undefined4 *)
                 (**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar5);
        *puVar8 = uVar4;
      }
      iVar3 = strcmp(*(char **)(lVar7 + 8),"Player");
      if (iVar3 == 0) {
        FUN_008ff604(uVar2,*(undefined4 *)(param_1 + 0x40),uVar4,*(undefined1 *)(param_1 + 0x4c),
                     &local_3c8,&local_3d8,*(undefined4 *)(param_1 + 0x48),
                     *(undefined4 *)(param_1 + 0x44),1);
      }
      else {
        FUN_008ff600(uVar2,*(undefined4 *)(param_1 + 0x40),uVar4,*(undefined1 *)(param_1 + 0x4c),
                     &local_3c8,&local_3d8,*(undefined4 *)(param_1 + 0x48),
                     *(undefined4 *)(param_1 + 0x44),0xffffffff,0,0xffffffff);
      }
      if (*(long *)(lVar1 + 0x28) == local_98) {
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    iVar3 = strcmp((char *)*puVar9,*(char **)(param_1 + 0x30));
    if (iVar3 == 0) {
      local_3c8 = *(undefined8 *)(*plVar10 + 0x18);
      local_3c0 = *(undefined4 *)(*plVar10 + 0x20);
      lVar11 = *plVar10;
      fVar15 = *(float *)(lVar11 + 0x28);
      fVar16 = *(float *)(lVar11 + 0x2c);
      fVar18 = *(float *)(lVar11 + 0x24) * 0.017453292 * 0.5;
      fVar12 = cosf(fVar18);
      fVar19 = fVar15 * 0.017453292 * 0.5;
      fVar15 = cosf(fVar19);
      fVar20 = fVar16 * 0.017453292 * 0.5;
      fVar16 = cosf(fVar20);
      fVar18 = sinf(fVar18);
      fVar19 = sinf(fVar19);
      fVar20 = sinf(fVar20);
      fVar17 = fVar16 * fVar15 * fVar18 + fVar12 * fVar19 * fVar20;
      fVar13 = fVar12 * fVar15 * fVar16 - fVar18 * fVar19 * fVar20;
      fVar14 = fVar16 * fVar12 * fVar19 - fVar15 * fVar18 * fVar20;
      fVar12 = fVar12 * fVar15 * fVar20 + fVar16 * fVar18 * fVar19;
      fVar15 = (fVar14 * DAT_0314b2c0 + fVar17 * 0.0 + DAT_0314b2b8 * fVar13) -
               fVar12 * DAT_0314b2bc;
      fVar16 = DAT_0314b2b8 * fVar12 +
               fVar14 * 0.0 + (DAT_0314b2bc * fVar13 - fVar17 * DAT_0314b2c0);
      fVar18 = fVar12 * 0.0 +
               ((fVar17 * DAT_0314b2bc + fVar13 * DAT_0314b2c0) - DAT_0314b2b8 * fVar14);
      fVar19 = ((fVar13 * 0.0 - DAT_0314b2b8 * fVar17) - fVar14 * DAT_0314b2bc) -
               fVar12 * DAT_0314b2c0;
      local_3d0 = fVar13 * fVar18 + (fVar19 * -fVar12 - fVar15 * fVar14) + fVar16 * fVar17;
      local_3d8 = CONCAT44((fVar13 * fVar16 + (fVar15 * fVar12 - fVar19 * fVar14)) - fVar18 * fVar17
                           ,((fVar13 * fVar15 - fVar19 * fVar17) - fVar16 * fVar12) +
                            fVar18 * fVar14);
      goto LAB_00d1aeb0;
    }
    plVar10 = plVar10 + 1;
    puVar9 = (undefined8 *)*plVar10;
  } while( true );
}




void FUN_00d1afb4(void)

{
  return;
}




void FUN_00d1afb8(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02815c58;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  return;
}




void FUN_00d1afec(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




undefined8 FUN_00d1aff4(void)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d01e48(auStack_48,0,0);
  FUN_00ce20fc(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

