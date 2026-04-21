// functions/00d7e — 45 functions
#include "libGameKindred.h"




void FUN_00d7e088(int param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long local_648 [192];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_019889cc(local_648,0xc0,DAT_02c7bf58,0);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      lVar4 = local_648[lVar3];
      if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_02c7bf58) {
        lVar4 = 0;
      }
      if (*(int *)(lVar4 + 0x28) == param_1) goto LAB_00d7e110;
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  lVar4 = 0;
LAB_00d7e110:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}




void FUN_00d7e13c(undefined4 param_1,long param_2,undefined4 param_3,long param_4,
                 undefined8 *param_5,byte param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_2 + 0x28) = param_3;
  uVar1 = *(undefined4 *)(param_4 + 0x30);
  *(long *)(param_2 + 0x30) = param_4 + 0x28;
  *(undefined4 *)(param_2 + 0x38) = uVar1;
  *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_5 + 1);
  uVar2 = *param_5;
  *(undefined4 *)(param_2 + 0x5c) = param_1;
  *(byte *)(param_2 + 0x78) = *(byte *)(param_2 + 0x78) & 0xfc | param_6 & 3;
  *(undefined8 *)(param_2 + 0x50) = uVar2;
  return;
}




void FUN_00d7e174(undefined4 param_1,long param_2,undefined4 param_3,long param_4,long param_5,
                 byte param_6)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_2 + 0x28) = param_3;
  uVar1 = *(undefined4 *)(param_4 + 0x30);
  *(long *)(param_2 + 0x30) = param_4 + 0x28;
  *(undefined4 *)(param_2 + 0x38) = uVar1;
  uVar1 = *(undefined4 *)(param_5 + 0x30);
  *(long *)(param_2 + 0x40) = param_5 + 0x28;
  *(undefined4 *)(param_2 + 0x48) = uVar1;
  FUN_00d7da54();
  *(undefined4 *)(param_2 + 0x5c) = param_1;
  *(byte *)(param_2 + 0x78) = *(byte *)(param_2 + 0x78) & 0xfc | param_6 & 3;
  return;
}




void FUN_00d7e1d8(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x70) = param_1;
  *(undefined4 *)(param_3 + 0x74) = param_2;
  return;
}




void FUN_00d7e1e0(long param_1,undefined4 param_2,long param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x28) = param_2;
  uVar1 = *(undefined4 *)(param_3 + 0x30);
  *(long *)(param_1 + 0x30) = param_3 + 0x28;
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) | 4;
  *(undefined8 *)(param_1 + 0x60) = *param_4;
  *(undefined8 *)(param_1 + 0x68) = *param_5;
  return;
}




undefined8 FUN_00d7e214(long param_1,float *param_2)

{
  float fVar1;
  
  if ((0.0 < *(float *)(param_1 + 0x70)) && (*(float *)(param_1 + 0x70) < 6.2831855)) {
    fVar1 = atan2f(param_2[2] - *(float *)(param_1 + 0x58),*param_2 - *(float *)(param_1 + 0x50));
    for (fVar1 = ABS(*(float *)(param_1 + 0x74) - fVar1); 6.2831855 <= fVar1;
        fVar1 = fVar1 - 6.2831855) {
    }
    if (*(float *)(param_1 + 0x70) * 0.5 < fVar1) {
      return 0;
    }
  }
  return 1;
}




void FUN_00d7e2b0(void *param_1)

{
  FUN_01985bd0();
  operator_delete(param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d7e2d4(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1[6] = 0;
  *param_1 = &PTR_thunk_FUN_01985bd0_0281e7c0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  uVar1 = DAT_03214ce8;
  uVar3 = NEON_fmov(0xbf800000,4);
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 7) = uVar1;
  *(undefined4 *)(param_1 + 9) = uVar1;
  *(undefined4 *)(param_1 + 0xb) = DAT_03218f38;
  uVar2 = DAT_03218f30;
  *(undefined4 *)((long)param_1 + 0x5c) = 0;
  param_1[10] = uVar2;
  uVar2 = _DAT_03218ef8;
  param_1[0xe] = uVar3;
  param_1[0xc] = uVar2;
  param_1[0xd] = uVar2;
  *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) & 0xf8;
  return;
}




void FUN_00d7e354(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d7e35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00d7e360(void)

{
  DAT_031aa240 = operator_new(0x20);
  DAT_031aa240[2] = 0;
  DAT_031aa240[3] = 0;
  *DAT_031aa240 = &PTR_FUN_02820520;
  DAT_031aa240[1] = DAT_031aa240 + 2;
  return;
}




void FUN_00d7e39c(void)

{
  if (DAT_031aa240 != (long *)0x0) {
    (**(code **)(*DAT_031aa240 + 8))();
  }
  DAT_031aa240 = (long *)0x0;
  return;
}




undefined8 FUN_00d7e3d0(void)

{
  return DAT_031aa240;
}




void FUN_00d7e3dc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_0281e7f0;
  thunk_FUN_00ef0978(param_1 + 1);
  param_1[0xf1] = *param_2;
  uVar1 = *param_3;
  param_1[0xf3] = param_4 + 0x28;
  param_1[0xf2] = uVar1;
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_4 + 0x30);
  return;
}




undefined8
FUN_00d7e440(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
            undefined8 *param_5)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  plVar2 = *(long **)(param_4 + 0x798);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_4 + 0x7a0) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        plVar2 = *(long **)(param_4 + 0x798);
        uVar4 = 0;
        if (plVar2 != (long *)0x0) {
          if (*(int *)(param_4 + 0x7a0) == (int)plVar2[1]) {
            uVar4 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            *(undefined8 *)(param_4 + 0x798) = 0;
            uVar4 = 0;
            *(undefined4 *)(param_4 + 0x7a0) = DAT_03214ce8;
          }
        }
        uVar1 = FUN_00da2eb4(uVar4);
        uVar5 = FUN_00d7f094(param_4 + 8,param_4 + 0x788,param_4 + 0x790,uVar1);
        if ((uVar5 & 1) != 0) {
          *(undefined4 *)(param_5 + 1) = *(undefined4 *)(param_4 + 0x778);
          *param_5 = *(undefined8 *)(param_4 + 0x770);
          uVar1 = FUN_00ef1174(param_4 + 8);
          *(undefined4 *)((long)param_5 + 0xc) = uVar1;
          *(undefined4 *)(param_5 + 2) = param_2;
          *(undefined4 *)((long)param_5 + 0x14) = param_3;
          return 0;
        }
      }
    }
    else {
      *(undefined8 *)(param_4 + 0x798) = 0;
      *(undefined4 *)(param_4 + 0x7a0) = DAT_03214ce8;
    }
  }
  return 2;
}




undefined8 FUN_00d7e534(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x798);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x7a0) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x798);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x7a0) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x798) = 0;
            uVar3 = 0;
            *(undefined4 *)(param_1 + 0x7a0) = DAT_03214ce8;
          }
        }
        FUN_00d9ee8c(uVar3);
        uVar3 = FUN_00d7f188(param_1 + 8,param_2);
        return uVar3;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x798) = 0;
      *(undefined4 *)(param_1 + 0x7a0) = DAT_03214ce8;
    }
  }
  return 2;
}




long FUN_00d7e5ec(long param_1)

{
  return param_1 + 0x16c;
}




long FUN_00d7e5f4(long param_1)

{
  return param_1 + (ulong)(*(int *)(param_1 + 0x76c) - 1) * 0xc + 0x16c;
}




void FUN_00d7e60c(undefined4 param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_0281e830;
  param_2[1] = param_4 + 0x28;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_4 + 0x30);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 1);
  uVar1 = *param_3;
  *(undefined4 *)(param_2 + 6) = param_1;
  param_2[3] = uVar1;
  return;
}




undefined8 FUN_00d7e640(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float __x;
  float fVar5;
  float fVar6;
  
  plVar1 = *(long **)(param_1 + 8);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x10) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 8);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x10) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 8) = 0;
            uVar3 = 0;
            *(undefined4 *)(param_1 + 0x10) = DAT_03214ce8;
          }
        }
        FUN_00d55794(uVar3,param_1 + 0x24,0);
        fVar5 = *(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x18);
        fVar6 = *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x20);
        __x = fVar5 * fVar5 + 0.0 + fVar6 * fVar6;
        if (1.1920929e-07 <= ABS(__x)) {
          fVar4 = SQRT(__x);
          if (NAN(fVar4)) {
            fVar4 = sqrtf(__x);
          }
          *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x20);
          uVar3 = *(undefined8 *)(param_1 + 0x18);
          *(float *)((long)param_2 + 0xc) = fVar5 / fVar4;
          *(float *)(param_2 + 2) = 0.0 / fVar4;
          *param_2 = uVar3;
          *(float *)((long)param_2 + 0x14) = fVar6 / fVar4;
          return 0;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x10) = DAT_03214ce8;
    }
  }
  return 2;
}




undefined8 FUN_00d7e78c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar4 = (float)FUN_01988c78();
  plVar1 = *(long **)(param_1 + 8);
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) - fVar4;
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x10) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 8);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x10) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 8) = 0;
            uVar3 = 0;
            *(undefined4 *)(param_1 + 0x10) = DAT_03214ce8;
          }
        }
        FUN_00d55794(uVar3,param_1 + 0x24,0);
      }
    }
    else {
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x10) = DAT_03214ce8;
    }
  }
  fVar8 = *(float *)(param_1 + 0x30);
  fVar4 = (float)FUN_01988c78();
  if (fVar8 <= fVar4) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    uVar3 = 1;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x2c);
    *param_2 = *(undefined8 *)(param_1 + 0x24);
  }
  else {
    fVar6 = (float)*(undefined8 *)(param_1 + 0x24) - (float)*param_2;
    fVar7 = (float)((ulong)*(undefined8 *)(param_1 + 0x24) >> 0x20) -
            (float)((ulong)*param_2 >> 0x20);
    fVar9 = *(float *)(param_1 + 0x2c) - *(float *)(param_2 + 1);
    fVar4 = fVar6 * fVar6 + fVar7 * fVar7 + fVar9 * fVar9;
    fVar8 = SQRT(fVar4);
    if (NAN(fVar8)) {
      fVar8 = sqrtf(fVar4);
    }
    fVar4 = *(float *)(param_1 + 0x30);
    fVar5 = (float)FUN_01988c78();
    uVar3 = 0;
    *(ulong *)((long)param_2 + 0xc) = CONCAT44(fVar7 / fVar8,fVar6 / fVar8);
    *param_2 = CONCAT44((float)((ulong)*param_2 >> 0x20) + (fVar7 / fVar4) * fVar5,
                        (float)*param_2 + (fVar6 / fVar4) * fVar5);
    *(float *)(param_2 + 1) = (fVar9 / fVar4) * fVar5 + *(float *)(param_2 + 1);
    *(float *)((long)param_2 + 0x14) = fVar9 / fVar8;
  }
  return uVar3;
}




long FUN_00d7e92c(long param_1)

{
  return param_1 + 0x24;
}




undefined4 FUN_00d7e934(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}




void FUN_00d7e93c(undefined8 *param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_0281e870;
  param_1[1] = param_2 + 0x28;
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x24) = *param_3;
  return;
}




void FUN_00d7e96c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d7e974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}




undefined8 FUN_00d7e978(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  plVar3 = *(long **)(param_1 + 8);
  if (plVar3 != (long *)0x0) {
    if (*(int *)(param_1 + 0x10) == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
      if (lVar4 != 0) {
        iVar2 = *(int *)(param_1 + 0x24);
        plVar3 = *(long **)(param_1 + 8);
        uVar5 = 0;
        if (plVar3 != (long *)0x0) {
          if (*(int *)(param_1 + 0x10) == (int)plVar3[1]) {
            uVar5 = (**(code **)(*plVar3 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 8) = 0;
            uVar5 = 0;
            *(undefined4 *)(param_1 + 0x10) = DAT_03214ce8;
          }
        }
        puVar1 = (undefined8 *)(param_1 + 0x18);
        if (iVar2 == -0x7ee3623b || iVar2 == 0) {
          FUN_00d55794(uVar5,puVar1,0);
        }
        else {
          FUN_00d584f4(uVar5,(int *)(param_1 + 0x24),puVar1);
        }
        *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x20);
        *param_2 = *puVar1;
        return 0;
      }
    }
    else {
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x10) = DAT_03214ce8;
    }
  }
  return 2;
}




long FUN_00d7ea90(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00d7ea98(long param_1)

{
  *(undefined1 *)(param_1 + 0x7d8) = 0;
  *(undefined8 *)(param_1 + 2000) = 0;
  *(undefined8 *)(param_1 + 0x7c8) = 0;
  *(undefined8 *)(param_1 + 0x7c0) = 0;
  *(undefined8 *)(param_1 + 0x7b8) = 0;
  return;
}




void FUN_00d7eab4(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  *(undefined4 *)(param_1 + 0x7c8) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x7c0) = *param_2;
  *(undefined8 *)(param_1 + 0x7cc) = *param_3;
  *(undefined4 *)(param_1 + 0x7d4) = *(undefined4 *)(param_3 + 1);
  if (*(undefined8 **)(param_1 + 0x7b8) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x7b8))();
    *(undefined8 *)(param_1 + 0x7b8) = 0;
  }
  *(undefined1 *)(param_1 + 0x7d8) = 0;
  return;
}




void FUN_00d7eb10(long param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar4 = *(long **)(param_1 + 0x7b8);
  if (plVar4 == (long *)0x0) {
    *(undefined4 *)(param_1 + 0x7d4) = DAT_03218f38;
    *(undefined8 *)(param_1 + 0x7cc) = DAT_03218f30;
  }
  else {
    lVar1 = param_1 + 0x7c0;
    iVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,lVar1);
    if (iVar3 == 0) goto LAB_00d7ebc0;
    uStack_44 = 0x7f7fffff;
    local_40 = 0x3e800000;
    local_48 = 0x3e800000;
    FUN_00ef00a0(param_2,lVar1,lVar1,&local_48);
    if (*(undefined8 **)(param_1 + 0x7b8) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(param_1 + 0x7b8))();
      *(undefined8 *)(param_1 + 0x7b8) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x7d8) = 0;
LAB_00d7ebc0:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d7ebe8(undefined8 param_1)

{
  FUN_00d7ec10();
  FUN_00d7ec6c(param_1,0);
  return;
}




ulong FUN_00d7ec10(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  if (*(undefined8 **)(param_1 + 0x7b8) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x7b8))();
    *(undefined8 *)(param_1 + 0x7b8) = 0;
  }
  uVar1 = param_1 + 7U & 0xfffffffffffffff8;
  FUN_00d7f260(uVar1,param_2);
  *(ulong *)(param_1 + 0x7b8) = uVar1;
  return uVar1;
}




undefined8 FUN_00d7ec6c(long param_1,undefined1 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x7b8) + 0x10))
                    (*(long **)(param_1 + 0x7b8),param_1 + 0x7c0);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else if (*(undefined8 **)(param_1 + 0x7b8) == (undefined8 *)0x0) {
    param_2 = 0;
    uVar2 = 0;
  }
  else {
    (**(code **)**(undefined8 **)(param_1 + 0x7b8))();
    param_2 = 0;
    uVar2 = 0;
    *(undefined8 *)(param_1 + 0x7b8) = 0;
  }
  *(undefined1 *)(param_1 + 0x7d8) = param_2;
  return uVar2;
}




bool FUN_00d7ecd8(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *in_x4;
  
  lVar2 = FUN_00d7ed38();
  uVar3 = FUN_00d7ec6c(param_1,1);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    *(undefined4 *)(in_x4 + 1) = *(undefined4 *)(lVar2 + 0x174);
    *in_x4 = *(undefined8 *)(lVar2 + 0x16c);
  }
  return bVar1;
}




undefined8 * FUN_00d7ed38(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*(undefined8 **)(param_1 + 0x7b8) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x7b8))();
    *(undefined8 *)(param_1 + 0x7b8) = 0;
  }
  puVar2 = (undefined8 *)(param_1 + 7U & 0xfffffffffffffff8);
  *puVar2 = &PTR_FUN_0281e7f0;
  thunk_FUN_00ef0978(puVar2 + 1);
  puVar2[0xf1] = *param_2;
  uVar1 = *param_3;
  puVar2[0xf3] = param_4 + 0x28;
  puVar2[0xf2] = uVar1;
  *(undefined4 *)(puVar2 + 0xf4) = *(undefined4 *)(param_4 + 0x30);
  *(undefined8 **)(param_1 + 0x7b8) = puVar2;
  return puVar2;
}




void FUN_00d7edd0(undefined8 param_1)

{
  FUN_00d7edf8();
  FUN_00d7ec6c(param_1,6);
  return;
}




ulong FUN_00d7edf8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  
  if (*(undefined8 **)(param_2 + 0x7b8) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_2 + 0x7b8))();
    *(undefined8 *)(param_2 + 0x7b8) = 0;
  }
  uVar1 = param_2 + 7U & 0xfffffffffffffff8;
  FUN_00d7f3c0(param_1,uVar1,param_3,param_4);
  *(ulong *)(param_2 + 0x7b8) = uVar1;
  return uVar1;
}




void FUN_00d7ee6c(undefined4 param_1,long param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (*(undefined8 **)(param_2 + 0x7b8) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_2 + 0x7b8))();
    *(undefined8 *)(param_2 + 0x7b8) = 0;
  }
  puVar1 = (undefined8 *)(param_2 + 7U & 0xfffffffffffffff8);
  *puVar1 = &PTR_FUN_0281e830;
  puVar1[1] = param_4 + 0x28;
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_4 + 0x30);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  *(undefined4 *)(puVar1 + 6) = param_1;
  puVar1[3] = uVar2;
  *(undefined8 **)(param_2 + 0x7b8) = puVar1;
  FUN_00d7ec6c(param_2,6);
  return;
}




void FUN_00d7ef00(undefined8 param_1)

{
  FUN_00d7ef28();
  FUN_00d7ec6c(param_1,2);
  return;
}




void FUN_00d7ef28(long param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  if (*(undefined8 **)(param_1 + 0x7b8) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x7b8))();
    *(undefined8 *)(param_1 + 0x7b8) = 0;
  }
  puVar2 = (undefined8 *)(param_1 + 7U & 0xfffffffffffffff8);
  *puVar2 = &PTR_FUN_0281e870;
  puVar2[1] = param_2 + 0x28;
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  puVar2[3] = 0;
  *(undefined4 *)(puVar2 + 4) = 0;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x24) = *param_3;
  *(undefined8 **)(param_1 + 0x7b8) = puVar2;
  return;
}




long FUN_00d7efa4(long param_1)

{
  long lVar1;
  
  if (*(long **)(param_1 + 0x7b8) != (long *)0x0) {
    lVar1 = (**(code **)(**(long **)(param_1 + 0x7b8) + 0x28))();
    return lVar1;
  }
  return param_1 + 0x7c0;
}




long FUN_00d7efd4(long param_1)

{
  return param_1 + 0x7c0;
}




long FUN_00d7efdc(long param_1)

{
  return param_1 + 0x7cc;
}




byte FUN_00d7efe4(long param_1)

{
  return *(byte *)(param_1 + 0x7d8) & 1;
}




byte FUN_00d7eff0(long param_1)

{
  return *(byte *)(param_1 + 0x7d8) >> 1 & 1;
}




byte FUN_00d7effc(long param_1)

{
  return *(byte *)(param_1 + 0x7d8) >> 2 & 1;
}

