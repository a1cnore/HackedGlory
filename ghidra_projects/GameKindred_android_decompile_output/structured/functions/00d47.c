// functions/00d47 — 38 functions
#include "libGameKindred.h"




void FUN_00d471d8(void *param_1)

{
  FUN_00d468dc();
  operator_delete(param_1);
  return;
}




void FUN_00d471fc(long *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_00d67c54(param_2);
  iVar2 = FUN_00d66cf4(param_2);
  if (iVar1 == iVar2) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x30);
  }
  else {
    iVar1 = FUN_00d66cf4(param_2);
    if (iVar1 != 0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x38);
  }
                    /* WARNING: Could not recover jumptable at 0x00d47274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
  return;
}




void FUN_00d47278(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xd4727c);
  (*pcVar1)();
}




undefined8 FUN_00d4727c(void)

{
  return 1;
}




void FUN_00d47284(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xd47288);
  (*pcVar1)();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d47288(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  FUN_00d468c8();
  param_1[2] = 3;
  param_1[3] = 0;
  *param_1 = &PTR_thunk_FUN_00d468dc_0281b9e0;
  uVar1 = DAT_03214ce8;
  *(undefined4 *)(param_1 + 4) = DAT_03214ce8;
  uVar2 = _DAT_03218ef8;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = uVar1;
  param_1[5] = uVar2;
  return;
}




void FUN_00d472ec(undefined4 param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 0x10) = param_3;
  *(undefined4 *)(param_2 + 0x14) = param_1;
  return;
}




void FUN_00d472f8(long param_1,long param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(long *)(param_1 + 0x18) = param_2 + 0x28;
  uVar2 = 1;
  if ((param_3 & 1) == 0) {
    uVar2 = 2;
  }
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  return;
}




void FUN_00d4731c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x30) = 3;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}




void FUN_00d47330(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar3 = FUN_00d66d28(param_2);
  lVar4 = FUN_01985d44(uVar3,DAT_031a9318);
  uVar2 = DAT_03214ce8;
  plVar5 = (long *)(lVar4 + 0x28);
  if (lVar4 == 0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
LAB_00d473c0:
    uVar3 = 0;
    *(undefined4 *)(param_1 + 0x40) = uVar2;
  }
  else {
    iVar1 = *(int *)(lVar4 + 0x30);
    *(long **)(param_1 + 0x38) = plVar5;
    *(int *)(param_1 + 0x40) = iVar1;
    if (iVar1 != *(int *)(lVar4 + 0x30)) {
      *(undefined8 *)(param_1 + 0x38) = 0;
      goto LAB_00d473c0;
    }
    uVar3 = (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  FUN_00d77630(*(undefined4 *)(param_1 + 0x14),uVar3,*(undefined4 *)(param_1 + 0x10));
  if (*(int *)(param_1 + 0x30) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x30) == 3) {
    plVar5 = *(long **)(param_1 + 0x38);
    uVar3 = 0;
    if (plVar5 != (long *)0x0) {
      if (*(int *)(param_1 + 0x40) == (int)plVar5[1]) {
        uVar3 = (**(code **)(*plVar5 + 0x10))();
      }
      else {
        *(undefined8 *)(param_1 + 0x38) = 0;
        uVar3 = 0;
        *(undefined4 *)(param_1 + 0x40) = DAT_03214ce8;
      }
    }
    FUN_00d77670(uVar3,param_1 + 0x28);
    return;
  }
  plVar5 = *(long **)(param_1 + 0x18);
  if (plVar5 == (long *)0x0) {
    return;
  }
  if (*(int *)(param_1 + 0x20) != (int)plVar5[1]) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x20) = DAT_03214ce8;
    return;
  }
  lVar4 = (**(code **)(*plVar5 + 0x10))();
  if (lVar4 == 0) {
    return;
  }
  plVar5 = *(long **)(param_1 + 0x18);
  if (plVar5 != (long *)0x0) {
    if (*(int *)(param_1 + 0x20) == (int)plVar5[1]) {
      lVar4 = (**(code **)(*plVar5 + 0x10))();
      lVar6 = FUN_00d66d28(param_2);
      if (lVar6 == lVar4) {
        return;
      }
      goto LAB_00d474d8;
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x20) = DAT_03214ce8;
  }
  FUN_00d66d28(param_2);
LAB_00d474d8:
  plVar5 = *(long **)(param_1 + 0x38);
  if (plVar5 == (long *)0x0) {
    uVar3 = 0;
  }
  else if (*(int *)(param_1 + 0x40) == (int)plVar5[1]) {
    uVar3 = (**(code **)(*plVar5 + 0x10))();
  }
  else {
    *(undefined8 *)(param_1 + 0x38) = 0;
    uVar3 = 0;
    *(undefined4 *)(param_1 + 0x40) = DAT_03214ce8;
  }
  plVar5 = *(long **)(param_1 + 0x18);
  if (plVar5 == (long *)0x0) {
    uVar7 = 0;
  }
  else if (*(int *)(param_1 + 0x20) == (int)plVar5[1]) {
    uVar7 = (**(code **)(*plVar5 + 0x10))();
  }
  else {
    *(undefined8 *)(param_1 + 0x18) = 0;
    uVar7 = 0;
    *(undefined4 *)(param_1 + 0x20) = DAT_03214ce8;
  }
  FUN_00d77648(uVar3,uVar7,*(undefined4 *)(param_1 + 0x30));
  return;
}




void FUN_00d47588(long param_1)

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
        FUN_01985ca8(uVar3);
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




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d4762c(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_0281ba30;
  param_1[1] = 0;
  param_1[4] = 0xbf80000000000000;
  uVar1 = DAT_03214ce8;
  *(undefined4 *)(param_1 + 7) = DAT_03214ce8;
  uVar2 = _DAT_03218ef8;
  *(undefined4 *)(param_1 + 10) = uVar1;
  param_1[0xb] = 3;
  *(undefined2 *)(param_1 + 0xc) = 0;
  param_1[8] = uVar2;
  param_1[9] = 0;
  return;
}




void FUN_00d47690(long param_1,undefined4 param_2,undefined8 *param_3)

{
  *(undefined4 *)(param_1 + 0x58) = param_2;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(param_1 + 0x10) = *param_3;
  return;
}




void FUN_00d476a8(long param_1,long param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(long *)(param_1 + 0x30) = param_2 + 0x28;
  uVar2 = 1;
  if ((param_3 & 1) == 0) {
    uVar2 = 2;
  }
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  return;
}




void FUN_00d476cc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x5c) = 3;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  return;
}




void FUN_00d476e0(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x24) = param_1;
  *(undefined4 *)(param_3 + 0x28) = param_2;
  return;
}




void FUN_00d476e8(long param_1)

{
  *(undefined1 *)(param_1 + 0x60) = 1;
  return;
}




void FUN_00d476f4(long param_1)

{
  *(undefined1 *)(param_1 + 0x61) = 1;
  return;
}




void FUN_00d47700(long param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  
  uVar4 = FUN_00d66d28(*param_2);
  lVar5 = FUN_01985d44(uVar4,DAT_031a9318);
  lVar7 = 0;
  if (lVar5 != 0) {
    lVar7 = lVar5 + 0x28;
  }
  puVar1 = &DAT_03214ce8;
  if (lVar5 != 0) {
    puVar1 = (undefined4 *)(lVar7 + 8);
  }
  uVar2 = *puVar1;
  *(long *)(param_1 + 0x48) = lVar7;
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  uVar4 = FUN_00d66d28(*param_2);
  fVar9 = (float)FUN_00a83478(param_1 + 0x10,param_2,uVar4);
  *(float *)(param_1 + 0x20) = fVar9;
  if (*(char *)(param_1 + 0x60) != '\0') {
    uVar3 = FUN_00d66cf4(*param_2);
    fVar9 = *(float *)(param_1 + 0x20) * (float)uVar3;
    *(float *)(param_1 + 0x20) = fVar9;
  }
  plVar6 = *(long **)(param_1 + 0x48);
  uVar4 = 0;
  if (plVar6 != (long *)0x0) {
    if (*(int *)(param_1 + 0x50) == (int)plVar6[1]) {
      uVar4 = (**(code **)(*plVar6 + 0x10))();
      fVar9 = *(float *)(param_1 + 0x20);
    }
    else {
      *(undefined8 *)(param_1 + 0x48) = 0;
      uVar4 = 0;
      *(undefined4 *)(param_1 + 0x50) = DAT_03214ce8;
    }
  }
  FUN_00d77630(fVar9,uVar4,*(undefined4 *)(param_1 + 0x58));
  if (*(int *)(param_1 + 0x5c) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x5c) == 3) {
    plVar6 = *(long **)(param_1 + 0x48);
    uVar4 = 0;
    if (plVar6 != (long *)0x0) {
      if (*(int *)(param_1 + 0x50) == (int)plVar6[1]) {
        uVar4 = (**(code **)(*plVar6 + 0x10))();
      }
      else {
        *(undefined8 *)(param_1 + 0x48) = 0;
        uVar4 = 0;
        *(undefined4 *)(param_1 + 0x50) = DAT_03214ce8;
      }
    }
    FUN_00d77670(uVar4,param_1 + 0x40);
    return;
  }
  plVar6 = *(long **)(param_1 + 0x30);
  if (plVar6 == (long *)0x0) {
    return;
  }
  if (*(int *)(param_1 + 0x38) != (int)plVar6[1]) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x38) = DAT_03214ce8;
    return;
  }
  lVar7 = (**(code **)(*plVar6 + 0x10))();
  if (lVar7 == 0) {
    return;
  }
  plVar6 = *(long **)(param_1 + 0x30);
  if (plVar6 != (long *)0x0) {
    if (*(int *)(param_1 + 0x38) == (int)plVar6[1]) {
      lVar7 = (**(code **)(*plVar6 + 0x10))();
      lVar5 = FUN_00d66d28(*param_2);
      if (lVar5 == lVar7) {
        return;
      }
      goto LAB_00d478d0;
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x38) = DAT_03214ce8;
  }
  FUN_00d66d28(*param_2);
LAB_00d478d0:
  plVar6 = *(long **)(param_1 + 0x48);
  if (plVar6 == (long *)0x0) {
    uVar4 = 0;
  }
  else if (*(int *)(param_1 + 0x50) == (int)plVar6[1]) {
    uVar4 = (**(code **)(*plVar6 + 0x10))();
  }
  else {
    *(undefined8 *)(param_1 + 0x48) = 0;
    uVar4 = 0;
    *(undefined4 *)(param_1 + 0x50) = DAT_03214ce8;
  }
  plVar6 = *(long **)(param_1 + 0x30);
  if (plVar6 == (long *)0x0) {
    uVar8 = 0;
  }
  else if (*(int *)(param_1 + 0x38) == (int)plVar6[1]) {
    uVar8 = (**(code **)(*plVar6 + 0x10))();
  }
  else {
    *(undefined8 *)(param_1 + 0x30) = 0;
    uVar8 = 0;
    *(undefined4 *)(param_1 + 0x38) = DAT_03214ce8;
  }
  FUN_00d77648(uVar4,uVar8,*(undefined4 *)(param_1 + 0x5c));
  return;
}




void FUN_00d47970(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x48);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x50) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x48);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x50) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x48) = 0;
            uVar3 = 0;
            *(undefined4 *)(param_1 + 0x50) = DAT_03214ce8;
          }
        }
        FUN_01985ca8(uVar3);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x50) = DAT_03214ce8;
    }
  }
  return;
}




void FUN_00d47a14(long param_1,undefined8 *param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  ulong uVar7;
  float fVar8;
  
  plVar2 = *(long **)(param_1 + 0x48);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x50) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        if (*(char *)(param_1 + 0x61) != '\0') {
          uVar4 = FUN_00d66d28(*param_2);
          uVar7 = FUN_00a83478(param_1 + 0x10,param_2,uVar4);
          *(int *)(param_1 + 0x20) = (int)uVar7;
          if (*(char *)(param_1 + 0x60) != '\0') {
            uVar1 = FUN_00d66cf4(*param_2);
            fVar5 = *(float *)(param_1 + 0x20) * (float)uVar1;
            uVar7 = (ulong)(uint)fVar5;
            *(float *)(param_1 + 0x20) = fVar5;
          }
          plVar2 = *(long **)(param_1 + 0x48);
          uVar4 = 0;
          if (plVar2 != (long *)0x0) {
            if (*(int *)(param_1 + 0x50) == (int)plVar2[1]) {
              uVar4 = (**(code **)(*plVar2 + 0x10))();
              uVar7 = (ulong)*(uint *)(param_1 + 0x20);
            }
            else {
              *(undefined8 *)(param_1 + 0x48) = 0;
              uVar4 = 0;
              *(undefined4 *)(param_1 + 0x50) = DAT_03214ce8;
            }
          }
          FUN_00d77688(uVar7,uVar4);
        }
        if (0.0 <= *(float *)(param_1 + 0x24)) {
          fVar5 = (float)FUN_00d67b34(*param_2);
          fVar6 = (float)FUN_00d67b3c(*param_2);
          fVar5 = powf(fVar5 / fVar6,*(float *)(param_1 + 0x28));
          fVar6 = *(float *)(param_1 + 0x20);
          fVar8 = *(float *)(param_1 + 0x24);
          plVar2 = *(long **)(param_1 + 0x48);
          uVar4 = 0;
          if (plVar2 != (long *)0x0) {
            if (*(int *)(param_1 + 0x50) == (int)plVar2[1]) {
              uVar4 = (**(code **)(*plVar2 + 0x10))();
            }
            else {
              *(undefined8 *)(param_1 + 0x48) = 0;
              uVar4 = 0;
              *(undefined4 *)(param_1 + 0x50) = DAT_03214ce8;
            }
          }
          FUN_00d77688((1.0 - fVar5) * fVar8 + fVar5 * fVar6,uVar4);
          return;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x50) = DAT_03214ce8;
    }
  }
  return;
}




void FUN_00d47bb4(void *param_1)

{
  FUN_00d468dc();
  operator_delete(param_1);
  return;
}




void FUN_00d47bd8(void)

{
  return;
}




void FUN_00d47be0(undefined8 *param_1)

{
  FUN_00d468c8();
  *param_1 = &PTR_FUN_0281ba70;
  FUN_00da1f24(param_1 + 2);
  return;
}




long FUN_00d47c14(long param_1)

{
  FUN_00da1f84(param_1 + 0x10);
  return param_1 + 0x10;
}




long FUN_00d47c3c(long param_1)

{
  FUN_00da1fa0(param_1 + 0x10);
  return param_1 + 0x10;
}




long FUN_00d47c64(long param_1)

{
  FUN_00da1fc0(param_1 + 0x10);
  return param_1 + 0x10;
}




void FUN_00d47c8c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_00d66d28(param_2);
  FUN_00d67b84(param_2);
  lVar3 = FUN_00d9e390();
  if (lVar3 != 0) {
    iVar1 = FUN_00d5cf60(lVar3);
    if (iVar1 != -1) {
      FUN_00d5cf60(lVar3);
      lVar3 = FUN_00d9e390();
    }
  }
  FUN_00da2188(param_1 + 0x10,uVar2,lVar3,param_2);
  return;
}




void FUN_00d47d10(void *param_1)

{
  FUN_00d468dc();
  operator_delete(param_1);
  return;
}




void FUN_00d47d34(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  FUN_00d468c8();
  puVar1 = param_1 + 2;
  *param_1 = &PTR_FUN_0281bab0;
  FUN_00da1f24(puVar1);
  *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) & 0xf0;
  FUN_00da2058(0xbf800000,puVar1);
  FUN_00da2070(puVar1,1);
  FUN_00da2088(puVar1,1);
  return;
}




long FUN_00d47d9c(long param_1)

{
  FUN_00da1f84(param_1 + 0x10);
  return param_1 + 0x10;
}




long FUN_00d47dc4(long param_1)

{
  FUN_00da1fa0(param_1 + 0x10);
  return param_1 + 0x10;
}




long FUN_00d47dec(long param_1)

{
  FUN_00da1fc0(param_1 + 0x10);
  return param_1 + 0x10;
}




void FUN_00d47e14(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) & 0xfc | param_2 & 3;
  return;
}




void FUN_00d47e24(long param_1)

{
  *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) | 4;
  return;
}




void FUN_00d47e34(long param_1)

{
  *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) | 8;
  return;
}




void FUN_00d47e44(long *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    return;
  }
  iVar1 = FUN_00d67c54(param_2);
  iVar2 = FUN_00d66cf4(param_2);
  if (iVar1 != iVar2) {
    iVar1 = FUN_00d66cf4(param_2);
    if (iVar1 == 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x38);
      goto LAB_00d47ed0;
    }
    uVar3 = (**(code **)(*param_1 + 0x50))(param_1);
    if ((uVar3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x40);
      goto LAB_00d47ed0;
    }
    uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
    if ((uVar3 & 1) == 0) {
      return;
    }
    (**(code **)(*param_1 + 0x38))(param_1,param_2);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x30);
LAB_00d47ed0:
                    /* WARNING: Could not recover jumptable at 0x00d47ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
  return;
}




void FUN_00d47f14(long *param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  
  uVar6 = FUN_00ceab48();
  if ((uVar6 & 1) != 0) {
    return;
  }
  bVar1 = *(byte *)(param_1 + 0xf) & 3;
  if (bVar1 == 3) {
    FUN_00d66d28(param_2);
    iVar4 = FUN_00d5cf60();
  }
  else {
    if (bVar1 == 2) {
      FUN_00d67b84(param_2);
      lVar8 = FUN_00d9e390();
      if (lVar8 != 0) {
        FUN_00cedce4();
        FUN_00d9e390();
        cVar2 = FUN_00d55870();
        cVar3 = FUN_00d55870(lVar8);
        if (cVar2 != cVar3) {
          return;
        }
      }
      goto LAB_00d47fb4;
    }
    if (bVar1 != 1) goto LAB_00d47fb4;
    iVar4 = FUN_00d67b84(param_2);
  }
  iVar5 = FUN_00cedce4();
  if (iVar4 != iVar5) {
    return;
  }
LAB_00d47fb4:
  uVar7 = FUN_00d66d28(param_2);
  FUN_00d67b84(param_2);
  lVar8 = FUN_00d9e390();
  if ((lVar8 != 0) && (iVar4 = FUN_00d5cf60(lVar8), iVar4 != -1)) {
    FUN_00d5cf60(lVar8);
    lVar8 = FUN_00d9e390();
  }
  FUN_00da2188(param_1 + 2,uVar7,lVar8,param_2);
  uVar6 = (**(code **)(*param_1 + 0x50))(param_1);
  if ((uVar6 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00d48044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1,param_2);
  return;
}

