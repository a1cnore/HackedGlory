// functions/00a7e — 79 functions
#include "libGameKindred.h"




long FUN_00a7e080(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x48) = param_2;
  return param_1 + 0x18;
}




long FUN_00a7e090(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x50) = param_2;
  return param_1 + 0x18;
}




void FUN_00a7e0a0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d66d28(*param_2);
  FUN_00a7deb4(param_1 + 0x18,param_2,uVar1);
  return;
}




void FUN_00a7e0dc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d66d28(*param_2);
  FUN_00a7dfdc(param_1 + 0x18,param_2,uVar1);
  return;
}




void FUN_00a7e118(undefined8 *param_1)

{
  undefined4 uVar1;
  
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_027ce200;
  param_1[1] = 0;
  uVar1 = DAT_03214ce8;
  *(undefined4 *)(param_1 + 6) = 1;
  *(undefined4 *)(param_1 + 5) = uVar1;
  return;
}




void FUN_00a7e14c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}




void FUN_00a7e154(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  
  uVar3 = FUN_00d66d28(*param_2);
  lVar4 = FUN_01985d44(uVar3,DAT_0312f988);
  uVar2 = DAT_03214ce8;
  if (lVar4 == 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    iVar1 = *(int *)(lVar4 + 0x30);
    *(long **)(param_1 + 0x20) = (long *)(lVar4 + 0x28);
    *(int *)(param_1 + 0x28) = iVar1;
    if (iVar1 == *(int *)(lVar4 + 0x30)) {
      lVar4 = (**(code **)(*(long *)(lVar4 + 0x28) + 0x10))();
      if (lVar4 == 0) {
        return;
      }
      plVar5 = *(long **)(param_1 + 0x20);
      uVar3 = 0;
      if (plVar5 != (long *)0x0) {
        if (*(int *)(param_1 + 0x28) == (int)plVar5[1]) {
          uVar3 = (**(code **)(*plVar5 + 0x10))();
        }
        else {
          *(undefined8 *)(param_1 + 0x20) = 0;
          uVar3 = 0;
          *(undefined4 *)(param_1 + 0x28) = DAT_03214ce8;
        }
      }
      FUN_009d84d8(uVar3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                   *(undefined4 *)(param_1 + 0x30));
      return;
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  return;
}




void FUN_00a7e238(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x28) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x20);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x28) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x20) = 0;
            uVar3 = 0;
            *(undefined4 *)(param_1 + 0x28) = DAT_03214ce8;
          }
        }
        FUN_01985ca8(uVar3);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x28) = DAT_03214ce8;
    }
  }
  return;
}




void FUN_00a7e2dc(void)

{
  return;
}




void FUN_00a7e2e4(void)

{
  return;
}




void FUN_00a7e2ec(long param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}




void FUN_00a7e2f4(long param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 1;
  return;
}




void FUN_00a7e300(long param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 2;
  return;
}




void FUN_00a7e30c(undefined8 *param_1)

{
  *(undefined8 *)((long)param_1 + 0xd) = 0;
  *param_1 = &PTR_FUN_027ce2b0;
  param_1[1] = 0;
  return;
}




void FUN_00a7e324(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 8) = param_1;
  return;
}




void FUN_00a7e32c(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xc) = param_1;
  return;
}




void FUN_00a7e334(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x10) = param_1;
  return;
}




void FUN_00a7e33c(long param_1)

{
  *(undefined1 *)(param_1 + 0x14) = 1;
  return;
}




void FUN_00a7e348(long param_1,float *param_2)

{
  undefined8 uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  
  FUN_009bbfb0();
  uVar1 = FUN_009bd5c8();
  pfVar2 = (float *)FUN_009b812c();
  fVar3 = (float)*(undefined8 *)(pfVar2 + 1) - (float)*(undefined8 *)(param_2 + 1);
  fVar4 = (float)((ulong)*(undefined8 *)(pfVar2 + 1) >> 0x20) -
          (float)((ulong)*(undefined8 *)(param_2 + 1) >> 0x20);
  fVar4 = (*pfVar2 - *param_2) * (*pfVar2 - *param_2) + fVar3 * fVar3 + fVar4 * fVar4;
  fVar3 = SQRT(fVar4);
  if (NAN(fVar3)) {
    fVar3 = sqrtf(fVar4);
  }
  fVar3 = 1.0 - (fVar3 / 18.0) * (fVar3 / 18.0);
  fVar3 = (float)NEON_fminnm(*(float *)(param_1 + 8) * fVar3 + (1.0 - fVar3) * 0.0,0x3f800000);
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  if (fVar3 <= 0.0) {
    return;
  }
  FUN_009b85e4(fVar3,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),uVar1);
  return;
}




void FUN_00a7e414(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x14) == '\0') {
    uVar2 = FUN_009bbfb0();
    uVar3 = FUN_009bc11c(uVar2,param_2);
    if ((uVar3 & 1) == 0) goto LAB_00a7e470;
  }
  FUN_00d55794(param_2,auStack_48,0);
  FUN_00a7e348(param_1,auStack_48);
LAB_00a7e470:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a7e498(undefined8 *param_1)

{
  FUN_00cfc438();
  *(undefined8 *)((long)param_1 + 0x25) = 0;
  param_1[4] = 0;
  *param_1 = &PTR_thunk_FUN_00cfc44c_027ce2f0;
  param_1[3] = &PTR_FUN_027ce2b0;
  param_1[2] = &PTR_FUN_027ce528;
  *(undefined4 *)(param_1 + 6) = 0;
  return;
}




long FUN_00a7e4f8(long param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  return param_1 + 0x18;
}




long FUN_00a7e508(long param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 1;
  return param_1 + 0x18;
}




long FUN_00a7e51c(long param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 2;
  return param_1 + 0x18;
}




long FUN_00a7e530(long param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 3;
  return param_1 + 0x18;
}




void FUN_00a7e544(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  
  FUN_00cedce4();
  lVar3 = FUN_00d9e390();
  if (lVar3 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 != 0) {
    if (iVar1 == 3) goto LAB_00a7e5ec;
    if (iVar1 != 2) goto LAB_00a7e598;
  }
  lVar4 = FUN_00d5048c(param_2);
  if (lVar3 != lVar4) {
    iVar1 = *(int *)(param_1 + 0x30);
LAB_00a7e598:
    if ((iVar1 - 1U < 2) && (iVar1 = FUN_00d51964(param_2), iVar1 != 0)) {
      uVar6 = 0;
      do {
        lVar4 = FUN_00d51954(param_2,uVar6);
        if (lVar4 == lVar3) goto LAB_00a7e5ec;
        uVar6 = uVar6 + 1;
        uVar2 = FUN_00d51964(param_2);
      } while (uVar6 < uVar2);
    }
    return;
  }
LAB_00a7e5ec:
  uVar5 = FUN_00d5048c(param_2);
  FUN_00a7e414(param_1 + 0x18,uVar5);
  return;
}




void FUN_00a7e610(undefined8 *param_1)

{
  *(undefined8 *)((long)param_1 + 0x25) = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_027ce370;
  param_1[1] = 0;
  param_1[3] = &PTR_FUN_027ce2b0;
  param_1[2] = &PTR_FUN_027ce528;
  *(undefined4 *)(param_1 + 6) = 0;
  return;
}




long FUN_00a7e654(long param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  return param_1 + 0x18;
}




long FUN_00a7e664(long param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 1;
  return param_1 + 0x18;
}




long FUN_00a7e678(long param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 2;
  return param_1 + 0x18;
}




void FUN_00a7e68c(long param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  
  FUN_00cedce4();
  lVar3 = FUN_00d9e390();
  if (lVar3 != 0) {
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 == 0) {
      lVar4 = FUN_00d66d28(*param_2);
      if (lVar3 == lVar4) {
LAB_00a7e72c:
        uVar5 = FUN_00d66d28(*param_2);
        FUN_00a7e414(param_1 + 0x18,uVar5);
        return;
      }
    }
    else if (iVar1 == 1) {
      iVar1 = FUN_00d67bf4(*param_2);
      if (iVar1 != 0) {
        uVar6 = 0;
        do {
          lVar4 = FUN_00d67bdc(*param_2,uVar6);
          if (lVar3 == lVar4) goto LAB_00a7e72c;
          uVar6 = uVar6 + 1;
          uVar2 = FUN_00d67bf4(*param_2);
        } while (uVar6 < uVar2);
      }
    }
    else if (iVar1 == 2) goto LAB_00a7e72c;
  }
  return;
}




void FUN_00a7e750(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  float local_48;
  undefined4 local_44;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cedce4();
  lVar2 = FUN_00d9e390();
  if ((lVar2 != 0) && (lVar3 = FUN_00d66d28(*param_2), lVar2 == lVar3)) {
    FUN_009bbfb0();
    lVar2 = FUN_009bd5c8();
    uVar4 = FUN_00d66d28(*param_2);
    FUN_00d55794(uVar4,&local_48,0);
    local_48 = local_48 + *(float *)(lVar2 + 0x70);
    local_40 = local_40 + *(float *)(lVar2 + 0x78);
    local_44 = *(undefined4 *)(lVar2 + 0x418);
    FUN_009b81fc(lVar2,&local_48,2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a7e818(void)

{
  undefined8 uVar1;
  
  FUN_009bbfb0();
  uVar1 = FUN_009bd5c8();
  FUN_009b8248(uVar1,&DAT_03218f30);
  return;
}




void FUN_00a7e838(void)

{
  FUN_009bbfb0();
  FUN_009bd5c8();
  FUN_009b8570();
  return;
}




void FUN_00a7e850(void)

{
  FUN_009bbfb0();
  FUN_009bd5c8();
  FUN_009b850c();
  return;
}




void FUN_00a7e868(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_009bbfb0();
  FUN_009bd5c8();
  FUN_009b8570();
  local_30 = 0xbf31a9fc;
  local_38 = 0x3fc00000427270a4;
  FUN_009bbfb0();
  uVar2 = FUN_009bd5c8();
  FUN_009b81fc(uVar2,&local_38,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00a7e8e0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined8 local_48;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  fVar4 = *(float *)(param_3 + 0x18);
  if (ABS(fVar4) < 1.1920929e-07) {
    FUN_009bbfb0();
    FUN_009bd5c8();
    FUN_009b8570();
    fVar4 = *(float *)(param_3 + 0x18);
  }
  uVar3 = 0;
  fVar4 = *(float *)(param_2 + 8) + fVar4;
  *(float *)(param_3 + 0x18) = fVar4;
  if (fVar4 <= 2.5) {
    local_40 = fVar4 / 2.5 + fVar4 / 2.5;
    if (1.0 <= local_40) {
      local_40 = local_40 + -2.0;
      local_40 = local_40 * local_40 * local_40 + 2.0;
      fVar4 = local_40 * 7.904999;
      fVar5 = local_40 * 0.0;
      local_40 = local_40 * 2.8270001;
    }
    else {
      fVar4 = local_40 * 7.904999 * local_40 * local_40;
      fVar5 = local_40 * 0.0 * local_40 * local_40;
      local_40 = local_40 * local_40 * local_40 * 2.8270001;
    }
    local_48 = CONCAT44(fVar5 + 1.5,fVar4 + 60.61);
    local_40 = local_40 + -0.694;
    FUN_009bbfb0();
    uVar2 = FUN_009bd5c8();
    uVar3 = 1;
    FUN_009b81fc(uVar2,&local_48,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a7ea24(void)

{
  return;
}




void FUN_00a7ea30(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00a7ea54(void)

{
  return;
}




void FUN_00a7ea64(void)

{
  return;
}




void FUN_00a7ea6c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00a8a280();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  return;
}




void FUN_00a7ea90(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a7ea98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}




void FUN_00a7ea9c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a7eaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}




void FUN_00a7eaa8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a7eab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}




void FUN_00a7eab4(void)

{
  return;
}




void FUN_00a7eabc(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00a89ba8();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  return;
}




undefined8 FUN_00a7eae0(long *param_1)

{
  (**(code **)(*param_1 + 0x28))();
  return 0;
}




void FUN_00a7eb00(void)

{
  return;
}




void FUN_00a7eb04(void)

{
  return;
}




void FUN_00a7eb0c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00a8a8cc();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  return;
}




void FUN_00a7eb30(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a7eb38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}




void FUN_00a7eb3c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a7eb44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}




void FUN_00a7eb48(void)

{
  return;
}




void FUN_00a7eb50(void)

{
  return;
}




void FUN_00a7eb54(void)

{
  return;
}




void FUN_00a7eb58(void)

{
  return;
}




void FUN_00a7eb5c(void)

{
  return;
}




undefined4 FUN_00a7eb60(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  long lVar3;
  
  lVar3 = *param_1;
  uVar1 = FUN_00e6a474(param_2);
  uVar1 = FUN_0091ed5c(param_2,uVar1,0x12345678);
  puVar2 = (undefined4 *)(**(code **)(*(long *)(lVar3 + 0x68) + 0x18))((long *)(lVar3 + 0x68),uVar1)
  ;
  return *puVar2;
}




undefined4 FUN_00a7ebb4(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  long lVar3;
  
  lVar3 = *param_1;
  uVar1 = FUN_00e6a474(param_2);
  uVar1 = FUN_0091ed5c(param_2,uVar1,0x12345678);
  puVar2 = (undefined4 *)(**(code **)(*(long *)(lVar3 + 0x68) + 0x18))((long *)(lVar3 + 0x68),uVar1)
  ;
  return *puVar2;
}




undefined1 FUN_00a7ec08(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  long lVar3;
  
  lVar3 = *param_1;
  uVar1 = FUN_00e6a474(param_2);
  uVar1 = FUN_0091ed5c(param_2,uVar1,0x12345678);
  puVar2 = (undefined1 *)(**(code **)(*(long *)(lVar3 + 0x68) + 0x18))((long *)(lVar3 + 0x68),uVar1)
  ;
  return *puVar2;
}




void FUN_00a7ec5c(void)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0;
  FUN_019889cc(&local_30,1,DAT_0312f158,0);
  bVar2 = false;
  if (local_30 != 0) {
    iVar3 = FUN_009c6274();
    bVar2 = iVar3 != 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}




void FUN_00a7eccc(int param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0;
  FUN_019889cc(&local_30,1,DAT_0312f158,0);
  bVar2 = false;
  if (local_30 != 0) {
    iVar3 = FUN_009c6274();
    bVar2 = iVar3 == param_1;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}




undefined8 FUN_00a7ed40(void)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN_00cedce4();
  lVar1 = FUN_00d9e390();
  if (lVar1 != 0) {
    for (lVar1 = *(long *)(lVar1 + 0x18); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x20)) {
      if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_03133530) {
        uVar2 = FUN_00d78a44();
        return uVar2;
      }
    }
  }
  return 0;
}




void FUN_00a7ed90(long param_1)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar1 = FUN_00940c10();
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 8);
  if ((*(ulong *)(param_1 + 0x10) & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(lVar1 + ((long)*(ulong *)(param_1 + 0x10) >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x00a7edc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




void FUN_00a7edc4(void)

{
  return;
}




void FUN_00a7edcc(long param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == (byte *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar2 = (uint)*param_2;
    uVar1 = 0x811c9dc5;
    if (*param_2 != 0) {
      do {
        param_2 = param_2 + 1;
        uVar1 = (uVar1 ^ uVar2) * 0x1000193;
        uVar2 = (uint)*param_2;
      } while (*param_2 != 0);
    }
  }
  *(uint *)(param_1 + 0x10) = uVar1;
  return;
}




void FUN_00a7ee10(long param_1)

{
  long lVar1;
  undefined1 auStack_50 [40];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00984fe4(auStack_50,*(undefined4 *)(param_1 + 0x10));
  FUN_00ce20fc(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a7ee68(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_027ce5d0;
  return;
}




void FUN_00a7ee80(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00a7ee88(void)

{
  return;
}




void FUN_00a7ee90(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  
  FUN_00d66d28(*param_2);
  plVar1 = (long *)FUN_00d5bae0();
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a7eeb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x150))(plVar1,1);
    return;
  }
  return;
}




void FUN_00a7eec8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ce650;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  return;
}




void FUN_00a7eee0(long param_1)

{
  *(undefined1 *)(param_1 + 0x19) = 1;
  return;
}




void FUN_00a7eeec(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_3 + 0x18) == '\0') {
    local_40 = 0;
    FUN_019889cc(&local_40,1,DAT_0312f158,0);
    lVar2 = local_40;
    if (local_40 != 0) {
      uVar3 = FUN_00a1ffc0();
      FUN_00e6ea58(uVar3,param_3,0xf6119432,FUN_00a7efb4,0);
      FUN_009c6144(lVar2);
      *(undefined1 *)(param_3 + 0x18) = 1;
      goto LAB_00a7ef6c;
    }
  }
  else {
LAB_00a7ef6c:
    if (*(char *)(param_3 + 0x19) == '\0') {
      uVar3 = 1;
      goto LAB_00a7ef8c;
    }
    uVar3 = FUN_00a1ffc0();
    FUN_00e6ec98(uVar3,param_3);
  }
  uVar3 = 0;
LAB_00a7ef8c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




void FUN_00a7efb4(long param_1)

{
  *(undefined1 *)(param_1 + 0x19) = 1;
  return;
}




void FUN_00a7efe8(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}




void FUN_00a7eff4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}




undefined8 thunk_FUN_00a7ed40(void)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN_00cedce4();
  lVar1 = FUN_00d9e390();
  if (lVar1 != 0) {
    for (lVar1 = *(long *)(lVar1 + 0x18); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x20)) {
      if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_03133530) {
        uVar2 = FUN_00d78a44();
        return uVar2;
      }
    }
  }
  return 0;
}

