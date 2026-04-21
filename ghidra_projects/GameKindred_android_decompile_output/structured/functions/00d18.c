// functions/00d18 — 72 functions
#include "libGameKindred.h"




void FUN_00d18024(void)

{
  return;
}




void FUN_00d18028(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02814e10;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}




void FUN_00d1805c(undefined4 param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  *(undefined8 *)(param_2 + 0x28) = param_3;
  *(undefined4 *)(param_2 + 0x30) = param_1;
  *(undefined4 *)(param_2 + 0x34) = param_4;
  return;
}




undefined8 FUN_00d1806c(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  float *pfVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  int iVar7;
  float fVar8;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = FUN_00e6a474(uVar6);
    uVar2 = FUN_0091ed5c(uVar6,uVar2,0x12345678);
    puVar5 = (undefined4 *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar2)
    ;
    *puVar5 = uVar1;
  }
  else if (*(int *)(param_1 + 0x34) == 1) {
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = FUN_00e6a474(uVar6);
    uVar1 = FUN_0091ed5c(uVar6,uVar1,0x12345678);
    piVar3 = (int *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar1);
    iVar7 = *piVar3;
    fVar8 = *(float *)(param_1 + 0x30);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = FUN_00e6a474(uVar6);
    uVar1 = FUN_0091ed5c(uVar6,uVar1,0x12345678);
    pfVar4 = (float *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar1);
    *pfVar4 = fVar8 + (float)iVar7;
  }
  return 1;
}




void FUN_00d1817c(void)

{
  return;
}




void FUN_00d18180(undefined8 *param_1)

{
  FUN_00d0aac4();
  param_1[5] = 0;
  *param_1 = &PTR_FUN_02814e98;
  *(undefined4 *)(param_1 + 6) = 0;
  return;
}




void FUN_00d181b8(long param_1,undefined8 param_2,uint param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(uint *)(param_1 + 0x30) = param_3 & 1;
  return;
}




undefined8 FUN_00d181c8(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = FUN_00e6a474(uVar3);
  uVar2 = FUN_0091ed5c(uVar3,uVar2,0x12345678);
  uVar3 = (**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar2);
  *(bool *)uVar3 = iVar1 != 0;
  return 1;
}




void FUN_00d18240(void)

{
  return;
}




void FUN_00d18244(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02814f20;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  return;
}




void FUN_00d18278(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x24) = param_2 & 1;
  return;
}




undefined8 FUN_00d18284(long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  plVar6 = (long *)*param_2;
  if (plVar6 == (long *)0x0) {
    uVar2 = 0;
  }
  else if ((int)param_2[1] == (int)plVar6[1]) {
    uVar2 = (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  else {
    *param_2 = 0;
    uVar2 = 0;
    *(undefined4 *)(param_2 + 1) = DAT_03214ce8;
  }
  plVar6 = (long *)param_2[0x284];
  if (plVar6 != (long *)0x0) {
    if (*(char *)(param_1 + 0x24) == '\0') {
      lVar4 = FUN_00d0add0("__SUGGESTED_TARGET__",param_2);
      if (lVar4 != 0) {
        return 2;
      }
      plVar6 = (long *)param_2[0x284];
    }
    plVar3 = (long *)*plVar6;
    if (plVar3 != (long *)0x0) {
      if ((int)plVar6[1] == (int)plVar3[1]) {
        lVar4 = (**(code **)(*plVar3 + 0x10))();
        if (lVar4 != 0) {
          FUN_00d24960(param_2,uVar2,lVar4,param_2 + 0x30f);
          uVar1 = FUN_00e6a474("__SUGGESTED_TARGET__");
          uVar1 = FUN_0091ed5c("__SUGGESTED_TARGET__",uVar1,0x12345678);
          puVar5 = (undefined8 *)(**(code **)(param_2[0x2d1] + 0x10))(param_2 + 0x2d1,uVar1);
          *puVar5 = param_2 + 0x30f;
          FUN_00d256f0(param_2,0x12);
          return 1;
        }
      }
      else {
        *plVar6 = 0;
        *(undefined4 *)(plVar6 + 1) = DAT_03214ce8;
      }
    }
  }
  return 2;
}




void FUN_00d183dc(void)

{
  return;
}




void FUN_00d183e0(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02814fa8;
  *(undefined4 *)((long)param_1 + 0x24) = 2;
  return;
}




void FUN_00d18418(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




undefined8 FUN_00d18420(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  char *pcVar3;
  
  switch(*(undefined4 *)(param_1 + 0x24)) {
  case 0:
    pcVar3 = "__TREASURE_CHEST__";
    break;
  case 1:
    pcVar3 = "__LAST_HURT_ME__";
    break;
  case 2:
    pcVar3 = "__SUGGESTED_TARGET__";
    break;
  case 3:
    pcVar3 = "__CALL_FOR_HELP__";
    break;
  default:
    return 2;
  }
  uVar1 = FUN_00e6a474(pcVar3);
  uVar1 = FUN_0091ed5c(pcVar3,uVar1,0x12345678);
  puVar2 = (undefined8 *)
           (**(code **)(*(long *)(param_2 + 0x1688) + 0x10))((long *)(param_2 + 0x1688),uVar1);
  *puVar2 = 0;
  return 1;
}




void FUN_00d184f0(void)

{
  return;
}




undefined4 FUN_00d184f4(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (450.0 / *(float *)(param_2 + 0x48) < *(float *)(param_2 + 0x40) / 57.0) {
    uVar1 = 1;
  }
  return uVar1;
}




void FUN_00d18524(void)

{
  return;
}




void FUN_00d18528(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02815030;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  return;
}




void FUN_00d1855c(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00d0ab34(*(undefined8 *)(param_1 + 0x10));
  if (iVar1 == 1) {
    if (*(int *)(param_1 + 0x24) == 1) {
      uVar2 = 2;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    if (iVar1 != 2) goto LAB_00d185c8;
    if (*(int *)(param_1 + 0x24) == 2) {
      uVar2 = 4;
    }
    else {
      uVar2 = 3;
    }
  }
  *(undefined4 *)(param_2 + 0x1980) = uVar2;
LAB_00d185c8:
  *(int *)(param_1 + 0x24) = iVar1;
  return;
}




void FUN_00d185d8(void)

{
  return;
}




undefined8 FUN_00d185dc(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 0x1980) == 1) {
    uVar1 = FUN_00d0ab34(*(undefined8 *)(param_1 + 0x10));
    return uVar1;
  }
  return 2;
}




void FUN_00d185f8(void)

{
  return;
}




void FUN_00d185fc(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_028150b8;
  *(undefined8 *)((long)param_1 + 0x24) = 0x20000002d;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  return;
}




void FUN_00d1863c(undefined4 param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_2 + 0x24) = param_3;
  *(undefined4 *)(param_2 + 0x28) = param_4;
  *(undefined4 *)(param_2 + 0x2c) = param_1;
  return;
}




undefined8 FUN_00d18648(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar2 = FUN_00d25570(param_2);
  uVar1 = (ulong)*(uint *)(param_1 + 0x24);
  lVar2 = *(long *)(lVar2 + 0x40) + uVar1 * 4;
  fVar3 = (*(float *)(lVar2 + 0x1a0) + 1.0) *
          (*(float *)(lVar2 + 0x38) + *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0));
  if ((float)(&DAT_031500a0)[uVar1] <= fVar3) {
    fVar3 = (float)(&DAT_031500a0)[uVar1];
  }
  fVar4 = (float)(&DAT_0314ffe0)[uVar1];
  if ((float)(&DAT_0314ffe0)[uVar1] <= fVar3) {
    fVar4 = fVar3;
  }
  switch(*(undefined4 *)(param_1 + 0x28)) {
  case 0:
    if (*(float *)(param_1 + 0x2c) < fVar4) {
      return 1;
    }
    break;
  case 1:
    if (fVar4 < *(float *)(param_1 + 0x2c)) {
      return 1;
    }
    break;
  case 2:
    if (fVar4 == *(float *)(param_1 + 0x2c)) {
      return 1;
    }
    break;
  case 3:
    if (*(float *)(param_1 + 0x2c) <= fVar4) {
      return 1;
    }
    break;
  case 4:
    if (fVar4 <= *(float *)(param_1 + 0x2c)) {
      return 1;
    }
  }
  return 2;
}




void FUN_00d18738(void)

{
  return;
}




void FUN_00d1873c(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02815140;
  *(undefined8 *)((long)param_1 + 0x24) = 0x200000010;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  return;
}




void FUN_00d1877c(undefined4 param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_2 + 0x24) = param_3;
  *(undefined4 *)(param_2 + 0x28) = param_4;
  *(undefined4 *)(param_2 + 0x2c) = param_1;
  return;
}




undefined8 FUN_00d18788(long param_1,undefined8 param_2)

{
  long lVar1;
  float fVar2;
  
  lVar1 = FUN_00d25570(param_2);
  if (*(uint *)(param_1 + 0x28) < 5) {
    fVar2 = *(float *)(*(long *)(lVar1 + 0x40) + (ulong)*(uint *)(param_1 + 0x24) * 4 + 0x308);
    switch(*(uint *)(param_1 + 0x28)) {
    case 0:
      if (*(float *)(param_1 + 0x2c) < fVar2) {
        return 1;
      }
      break;
    case 1:
      if (fVar2 < *(float *)(param_1 + 0x2c)) {
        return 1;
      }
      break;
    case 2:
      if (fVar2 == *(float *)(param_1 + 0x2c)) {
        return 1;
      }
      break;
    case 3:
      if (*(float *)(param_1 + 0x2c) <= fVar2) {
        return 1;
      }
      break;
    case 4:
      if (fVar2 <= *(float *)(param_1 + 0x2c)) {
        return 1;
      }
    }
  }
  return 2;
}




void FUN_00d18830(void)

{
  return;
}




void FUN_00d18834(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_028151c8;
  param_1[5] = 0;
  return;
}




void FUN_00d18868(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




undefined4 FUN_00d18870(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
    uVar1 = (**(code **)(param_1 + 0x28))(param_2);
    uVar2 = 1;
    if ((uVar1 & 1) == 0) {
      uVar2 = 2;
    }
    return uVar2;
  }
  return 2;
}




void FUN_00d188a4(void)

{
  return;
}




void FUN_00d188a8(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02815250;
  param_1[5] = 0;
  return;
}




void FUN_00d188dc(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




undefined4 FUN_00d188e4(long param_1,long param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = FUN_00e6a474(uVar3);
  uVar1 = FUN_0091ed5c(uVar3,uVar1,0x12345678);
  pcVar2 = (char *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar1);
  uVar1 = 1;
  if (*pcVar2 == '\0') {
    uVar1 = 2;
  }
  return uVar1;
}




void FUN_00d18954(void)

{
  return;
}




void FUN_00d18958(undefined8 *param_1)

{
  FUN_00d0aac4();
  *(undefined8 *)((long)param_1 + 0x24) = 2;
  *param_1 = &PTR_FUN_028152d8;
  param_1[6] = 0;
  return;
}




void FUN_00d18994(undefined4 param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 0x24) = param_3;
  *(undefined4 *)(param_2 + 0x28) = param_1;
  return;
}




void FUN_00d189a0(undefined4 param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  *(undefined4 *)(param_2 + 0x24) = param_3;
  *(undefined8 *)(param_2 + 0x30) = param_4;
  *(undefined4 *)(param_2 + 0x28) = param_1;
  return;
}




undefined8 FUN_00d189b0(long param_1,long param_2)

{
  undefined4 uVar1;
  float *pfVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = (float)FUN_009bc24c();
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 == 0) {
    fVar5 = 0.0;
  }
  else {
    uVar1 = FUN_00e6a474(lVar3);
    uVar1 = FUN_0091ed5c(lVar3,uVar1,0x12345678);
    pfVar2 = (float *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar1);
    fVar5 = *pfVar2;
  }
  if (*(uint *)(param_1 + 0x24) < 5) {
    fVar5 = fVar5 + *(float *)(param_1 + 0x28);
    switch(*(uint *)(param_1 + 0x24)) {
    case 0:
      if (fVar5 < fVar4) {
        return 1;
      }
      break;
    case 1:
      if (fVar4 < fVar5) {
        return 1;
      }
      break;
    case 2:
      if (fVar4 == fVar5) {
        return 1;
      }
      break;
    case 3:
      if (fVar5 <= fVar4) {
        return 1;
      }
      break;
    case 4:
      if (fVar4 <= fVar5) {
        return 1;
      }
    }
  }
  return 2;
}




void FUN_00d18a9c(void)

{
  return;
}




void FUN_00d18aa0(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02815360;
  *(undefined4 *)((long)param_1 + 0x24) = 0xbf800000;
  return;
}




void FUN_00d18ad8(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x24) = param_1;
  return;
}




undefined4 FUN_00d18ae0(long param_1,long param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)FUN_009bc24c();
  uVar1 = 1;
  fVar3 = fVar2 - *(float *)(param_2 + 0x6c);
  if ((1.1920929e-07 <= ABS(fVar3)) &&
     (uVar1 = 1,
     (uint)(int)(fVar2 / *(float *)(param_1 + 0x24)) <=
     (uint)(int)(fVar3 / *(float *)(param_1 + 0x24)))) {
    uVar1 = 2;
  }
  return uVar1;
}




void FUN_00d18b44(void)

{
  return;
}




void FUN_00d18b48(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_028153e8;
  param_1[5] = 0;
  param_1[6] = 2;
  return;
}




void FUN_00d18b80(undefined4 param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  *(undefined8 *)(param_2 + 0x28) = param_3;
  *(undefined4 *)(param_2 + 0x30) = param_4;
  *(undefined4 *)(param_2 + 0x34) = param_1;
  return;
}




undefined8 FUN_00d18b90(long param_1,undefined8 param_2)

{
  code *pcVar1;
  float fVar2;
  
  pcVar1 = *(code **)(param_1 + 0x28);
  if (pcVar1 != (code *)0x0) {
    switch(*(undefined4 *)(param_1 + 0x30)) {
    case 0:
      fVar2 = (float)(*pcVar1)(param_2);
      if (*(float *)(param_1 + 0x34) < fVar2) {
        return 1;
      }
      break;
    case 1:
      fVar2 = (float)(*pcVar1)(param_2);
      if (fVar2 < *(float *)(param_1 + 0x34)) {
        return 1;
      }
      break;
    case 2:
      fVar2 = (float)(*pcVar1)(param_2);
      if (fVar2 == *(float *)(param_1 + 0x34)) {
        return 1;
      }
      break;
    case 3:
      fVar2 = (float)(*pcVar1)(param_2);
      if (*(float *)(param_1 + 0x34) <= fVar2) {
        return 1;
      }
      break;
    case 4:
      fVar2 = (float)(*pcVar1)(param_2);
      if (fVar2 <= *(float *)(param_1 + 0x34)) {
        return 1;
      }
    }
  }
  return 2;
}




void FUN_00d18c50(void)

{
  return;
}




void FUN_00d18c54(void)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_6c8 [96];
  undefined1 auStack_668 [1600];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d4d9e8(auStack_6c8);
  FUN_00d4dabc(auStack_6c8,0x10);
  iVar2 = FUN_00d9e840(auStack_6c8,auStack_668,200,0);
  uVar3 = 1;
  if (iVar2 != 0) {
    uVar3 = 2;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




void FUN_00d18cc8(void)

{
  return;
}




void FUN_00d18ccc(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02815470;
  *(undefined4 *)((long)param_1 + 0x2c) = DAT_03218f38;
  *(undefined8 *)((long)param_1 + 0x24) = DAT_03218f30;
  return;
}




void FUN_00d18d14(long param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x24) = *param_2;
  return;
}




undefined4 FUN_00d18d28(long param_1,long param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *(float *)(param_2 + 0x28) - *(float *)(param_1 + 0x24);
  fVar3 = (float)*(undefined8 *)(param_2 + 0x2c) - (float)*(undefined8 *)(param_1 + 0x28);
  fVar4 = (float)((ulong)*(undefined8 *)(param_2 + 0x2c) >> 0x20) -
          (float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
  uVar1 = 2;
  if (fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4 < 2.25) {
    uVar1 = 1;
  }
  return uVar1;
}




void FUN_00d18d68(void)

{
  return;
}




undefined4 FUN_00d18d6c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  lVar1 = FUN_00d25570(param_2);
  lVar1 = *(long *)(lVar1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  uVar2 = FUN_00d6bbac(lVar1,DAT_0315c934,0);
  uVar3 = 1;
  if ((uVar2 & 1) == 0) {
    uVar3 = 2;
  }
  return uVar3;
}




void FUN_00d18dcc(void)

{
  return;
}




void FUN_00d18dd0(undefined8 *param_1)

{
  FUN_00d0aac4();
  param_1[5] = 0;
  *param_1 = &PTR_FUN_028154f8;
  *(undefined4 *)(param_1 + 6) = 0;
  return;
}




void FUN_00d18e08(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x30) = param_3;
  return;
}




void FUN_00d18e14(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_198 [96];
  undefined1 auStack_138 [256];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_00d4d9e8(auStack_198);
    FUN_00d4dca4(auStack_198,*(undefined8 *)(param_1 + 0x28),0);
    iVar2 = FUN_00d9e840(auStack_198,auStack_138,0x20,0);
    if (iVar2 == *(int *)(param_1 + 0x30)) {
      uVar3 = 1;
      goto LAB_00d18e84;
    }
  }
  uVar3 = 2;
LAB_00d18e84:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




void FUN_00d18eac(void)

{
  return;
}




void FUN_00d18eb0(undefined8 *param_1)

{
  FUN_00d0aac4();
  param_1[5] = 0;
  *param_1 = &PTR_FUN_02815580;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}




void FUN_00d18ee8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




undefined8 FUN_00d18ef0(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  uVar1 = FUN_00e6a474("__VOICE_ASSISTANT__");
  uVar1 = FUN_0091ed5c("__VOICE_ASSISTANT__",uVar1,0x12345678);
  puVar2 = (undefined8 *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar1);
  if (*(char *)(param_1 + 0x30) == '\0') {
    uVar3 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,*(undefined8 *)(param_1 + 0x28));
    if ((uVar3 & 1) == 0) {
      return 1;
    }
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  return 2;
}




void FUN_00d18f88(void)

{
  return;
}




void FUN_00d18f8c(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02815608;
  *(undefined1 *)((long)param_1 + 0x32) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  param_1[5] = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 1;
  return;
}




void FUN_00d18fd4(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,byte param_5
                 )

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x34) = param_3;
  *(undefined4 *)(param_1 + 0x38) = param_4;
  *(byte *)(param_1 + 0x32) = param_5 & 1;
  return;
}




undefined8 FUN_00d18fe8(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x31) == '\0') {
    uVar1 = FUN_00e6a474("__VOICE_ASSISTANT__");
    uVar1 = FUN_0091ed5c("__VOICE_ASSISTANT__",uVar1,0x12345678);
    puVar3 = (undefined8 *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar1)
    ;
    plVar5 = (long *)*puVar3;
    if (*(char *)(param_1 + 0x30) != '\0') {
      uVar4 = (**(code **)(*plVar5 + 8))(plVar5,*(undefined8 *)(param_1 + 0x28));
      if ((uVar4 & 1) != 0) {
        return 1;
      }
      uVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,*(undefined8 *)(param_1 + 0x28));
      if ((uVar4 & 1) != 0) {
        *(undefined1 *)(param_1 + 0x31) = 1;
        goto LAB_00d19008;
      }
    }
    (**(code **)*plVar5)
              (plVar5,*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x34),
               *(undefined4 *)(param_1 + 0x38),*(undefined1 *)(param_1 + 0x32));
    uVar2 = 1;
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  else {
LAB_00d19008:
    uVar2 = 2;
  }
  return uVar2;
}

