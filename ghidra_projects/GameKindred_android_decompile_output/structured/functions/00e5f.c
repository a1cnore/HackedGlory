// functions/00e5f — 29 functions
#include "libGameKindred.h"




undefined8 FUN_00e5f0fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x34) == 1) {
    uVar1 = FUN_00d80ee4(param_2);
    return uVar1;
  }
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar1 = FUN_00d80fec(param_2);
    return uVar1;
  }
  return 0;
}




void FUN_00e5f128(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028204a8;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 1) = 0x7f7fffff;
  *(undefined4 *)((long)param_1 + 0xc) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 2) = 0x7f7fffff;
  *(undefined8 *)((long)param_1 + 0x1c) = 0xbf800000bf800000;
  *(undefined8 *)((long)param_1 + 0x14) = 0xbf800000;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xc0;
  return;
}




long FUN_00e5f16c(float param_1,float param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined1 local_88 [8];
  float local_80;
  undefined1 auStack_78 [56];
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(float *)(param_3 + 0x1c) = param_1;
  *(float *)(param_3 + 0x14) = param_2 / param_1;
  FUN_00d80bb8(param_4,local_88);
  lVar3 = FUN_00d80fec(param_4);
  if (lVar3 != 0) {
    if (((DAT_0320e258 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0320e258), iVar2 != 0)) {
      DAT_0320e250 = 0x3e3270a0;
      __cxa_guard_release(&DAT_0320e258);
    }
    FUN_00d58298(lVar3,&DAT_0320e250,auStack_78);
    *(ulong *)(param_3 + 8) =
         CONCAT44(local_88._4_4_ - SUB84(auStack_78._48_8_,4),
                  local_88._0_4_ - (float)auStack_78._48_8_);
    *(float *)(param_3 + 0x10) = local_80 - local_40;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e5f268(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d80ee4(param_3);
  uVar1 = FUN_00d59f98(uVar1,param_4);
  FUN_00e5f16c(param_1,uVar1,param_2,param_3);
  return;
}




void FUN_00e5f2c4(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x20) = param_1;
  return;
}




long FUN_00e5f2cc(long param_1)

{
  long lVar1;
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  thunk_FUN_00d9ff34(local_30);
  *(undefined4 *)(param_1 + 0x24) = local_30[0];
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00e5f324(float param_1,long param_2,byte param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_2 + 0x1c);
  fVar1 = *(float *)(param_2 + 0x14);
  *(float *)(param_2 + 0x18) = param_1;
  *(byte *)(param_2 + 0x28) = *(byte *)(param_2 + 0x28) & 0xfc | param_3 & 3;
  fVar2 = (float)FUN_00e5f388();
  *(float *)(param_2 + 0x14) = (fVar3 * fVar1 - fVar2) / fVar3 + param_1;
  return param_2;
}




float FUN_00e5f388(long param_1)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  
  bVar1 = *(byte *)(param_1 + 0x28) & 3;
  if (bVar1 == 2) {
    fVar2 = *(float *)(param_1 + 0x1c) * 3.1415927 * *(float *)(param_1 + 0x18);
    fVar3 = 0.25;
  }
  else {
    if (bVar1 == 1) {
      return *(float *)(param_1 + 0x1c) *
             (*(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x18) + -0.33333334);
    }
    if ((*(byte *)(param_1 + 0x28) & 3) != 0) {
      return 0.0;
    }
    fVar2 = *(float *)(param_1 + 0x1c) * *(float *)(param_1 + 0x18);
    fVar3 = 0.5;
  }
  return fVar2 * fVar3;
}




void FUN_00e5f3f8(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xfb | (param_2 & 1) << 2;
  return;
}




void FUN_00e5f410(long param_1)

{
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 8;
  return;
}




void FUN_00e5f420(long param_1)

{
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 0x10;
  return;
}




void FUN_00e5f430(long param_1)

{
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 0x20;
  return;
}




void FUN_00e5f440(ulong param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  long lVar2;
  float *pfVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float __x;
  float fVar12;
  undefined8 local_a8;
  float local_a0;
  undefined1 local_98 [8];
  float local_90;
  undefined8 local_88;
  float local_80;
  float local_78;
  float fStack_74;
  float fStack_70;
  float local_68;
  float fStack_64;
  float local_60;
  float local_58;
  float fStack_54;
  float local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00d81774(param_3,1);
  FUN_00d80bb8(param_3,&local_58);
  pfVar3 = (float *)FUN_00d81388(param_3);
  local_68 = *pfVar3 - local_58;
  local_60 = pfVar3[2] - local_50;
  fVar8 = local_68 * local_68 + 0.0 + local_60 * local_60;
  fStack_64 = 0.0;
  if (1e-08 <= fVar8) {
    fVar9 = SQRT(fVar8);
    if (NAN(fVar9)) {
      fVar9 = sqrtf(fVar8);
    }
    local_68 = local_68 / fVar9;
    fStack_64 = fStack_64 / fVar9;
    local_60 = local_60 / fVar9;
  }
  else {
    local_60 = DAT_03218f70;
    local_68 = (float)DAT_03218f68;
    fStack_64 = (float)((ulong)DAT_03218f68 >> 0x20);
  }
  fVar8 = *(float *)(param_2 + 0x14);
  if ((fVar8 <= 0.0) || ((float)param_1 <= fVar8)) {
LAB_00e5f650:
    FUN_00d80c00(param_3,&local_78);
    if (((*(float *)(param_2 + 0x14) <= 0.0) &&
        (local_68 * local_78 + fStack_64 * fStack_74 + local_60 * fStack_70 < 0.0)) &&
       (0.0 < *(float *)(param_2 + 0x18))) {
      *(float *)(param_2 + 0x14) = *(float *)(param_2 + 0x18);
      local_60 = fStack_70;
      local_68 = local_78;
      fStack_64 = fStack_74;
      fVar8 = (float)FUN_00e5f388(param_2);
      local_88 = CONCAT44(fStack_64 * fVar8 + fStack_54,local_68 * fVar8 + local_58);
      local_80 = fVar8 * local_60 + local_50;
      FUN_00d81390(param_3,&local_88);
    }
    FUN_00e5f84c(param_1,param_2,param_3);
    uVar5 = 0;
    if (0.0 < *(float *)(param_2 + 0x14)) goto LAB_00e5f814;
    lVar4 = FUN_00e5f9c8(param_2,param_3);
    if (lVar4 != 0) {
      uVar6 = FUN_00e5f9ec(param_2,param_3);
      uVar5 = 0;
      if ((uVar6 & 1) == 0) goto LAB_00e5f814;
      puVar7 = (undefined8 *)FUN_00d81388(param_3);
      uVar5 = *puVar7;
      fVar12 = *(float *)(puVar7 + 1);
      FUN_00d80bb8(param_3,&local_88);
      fVar10 = local_80 - fVar12;
      fVar11 = (float)uVar5;
      fVar8 = (float)local_88 - fVar11;
      __x = *(float *)(param_2 + 8) * *(float *)(param_2 + 8) +
            *(float *)(param_2 + 0x10) * *(float *)(param_2 + 0x10);
      fVar9 = SQRT(__x);
      fVar8 = fVar8 * fVar8 + fVar10 * fVar10;
      if (NAN(fVar9)) {
        fVar9 = sqrtf(__x);
      }
      if ((__x < fVar8) && (2.0 <= fVar8)) {
        uVar5 = 0;
        goto LAB_00e5f814;
      }
      FUN_00d80c00(param_3,local_98);
      local_a0 = (fVar12 - fVar9 * local_90) + 0.0;
      local_a8 = CONCAT44(*(float *)(param_2 + 0xc) +
                          ((float)((ulong)uVar5 >> 0x20) - local_98._4_4_ * fVar9),
                          (fVar11 - local_98._0_4_ * fVar9) + 0.0);
      FUN_00d80be4(param_3,&local_a8);
    }
  }
  else {
    FUN_00e5f84c(fVar8,param_2,param_3);
    *(undefined4 *)(param_2 + 0x14) = 0;
    lVar4 = FUN_00e5f9c8(param_2,param_3);
    if (lVar4 != 0) {
      FUN_00d80b90(param_3,lVar4,1);
      pfVar3 = (float *)FUN_00d81388(param_3);
      fStack_64 = 0.0;
      local_68 = *pfVar3 - local_58;
      local_60 = pfVar3[2] - local_50;
      fVar9 = local_68 * local_68 + 0.0 + local_60 * local_60;
      if (1e-08 <= fVar9) {
        fVar10 = SQRT(fVar9);
        if (NAN(fVar10)) {
          fVar10 = sqrtf(fVar9);
        }
        local_68 = local_68 / fVar10;
        fStack_64 = fStack_64 / fVar10;
        local_60 = local_60 / fVar10;
      }
      else {
        local_60 = DAT_03218f70;
        local_68 = (float)DAT_03218f68;
        fStack_64 = (float)((ulong)DAT_03218f68 >> 0x20);
      }
      if (0.0 < *(float *)(param_2 + 0x20)) {
        *(float *)(param_2 + 0x1c) = *(float *)(param_2 + 0x20);
      }
      bVar1 = *(byte *)(param_2 + 0x28);
      if ((bVar1 >> 4 & 1) == 0) {
        FUN_00d80ca0(param_3,&local_68);
        bVar1 = *(byte *)(param_2 + 0x28);
      }
      if ((bVar1 >> 3 & 1) != 0) {
        FUN_00d817d0(param_3);
        bVar1 = *(byte *)(param_2 + 0x28);
      }
      param_1 = (ulong)(uint)((float)param_1 - fVar8);
      if ((bVar1 >> 5 & 1) != 0) {
        FUN_00d81468(param_3);
      }
      goto LAB_00e5f650;
    }
  }
  uVar5 = 2;
LAB_00e5f814:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}




void FUN_00e5f84c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  float *pfVar3;
  float fVar4;
  float __x;
  float local_68;
  float fStack_64;
  float local_60;
  undefined8 local_58;
  float local_50;
  float local_48;
  float fStack_44;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d80bb8(param_3,&local_48);
  uVar2 = FUN_00e5f9ec(param_2,param_3);
  if ((uVar2 & 1) != 0) {
    pfVar3 = (float *)FUN_00d81388(param_3);
    fVar4 = *pfVar3 - local_48;
    local_58 = (ulong)(uint)fVar4;
    local_50 = pfVar3[2] - local_40;
    __x = fVar4 * fVar4 + 0.0 + local_50 * local_50;
    fVar4 = SQRT(__x);
    if (NAN(fVar4)) {
      fVar4 = sqrtf(__x);
    }
    if (1.1920929e-07 <= ABS(fVar4)) {
      local_58 = CONCAT44((float)(local_58 >> 0x20) / fVar4,(float)local_58 / fVar4);
      local_50 = local_50 / fVar4;
      goto LAB_00e5f930;
    }
  }
  FUN_00d80c00(param_3,&local_58);
LAB_00e5f930:
  fVar4 = (float)FUN_00e5fa84(*(undefined4 *)(param_2 + 0x14),param_1,param_2);
  local_68 = fVar4 * (float)local_58 + local_48;
  fStack_64 = fVar4 * local_58._4_4_ + fStack_44;
  local_60 = fVar4 * local_50 + local_40;
  FUN_00d80be4(param_3,&local_68);
  if ((*(byte *)(param_2 + 0x28) >> 4 & 1) == 0) {
    FUN_00d80ca0(param_3,&local_58);
  }
  *(float *)(param_2 + 0x14) = *(float *)(param_2 + 0x14) - (float)param_1;
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00e5f9c8(long param_1,undefined8 param_2)

{
  if ((*(byte *)(param_1 + 0x28) >> 2 & 1) == 0) {
    FUN_00d81070();
    return;
  }
  FUN_00d80f68(param_2);
  return;
}




bool FUN_00e5f9dc(long param_1)

{
  return 0.0 < *(float *)(param_1 + 0x14);
}




uint FUN_00e5f9ec(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*(int *)(param_1 + 0x24) == 0) || (lVar3 = FUN_00e5f9c8(param_1), lVar3 == 0)) ||
     (lVar3 = FUN_00d9ea34(), lVar3 == 0)) {
    uVar2 = 1;
  }
  else {
    FUN_00d9ff84(local_40,*(undefined4 *)(param_1 + 0x24));
    uVar2 = FUN_00d6bbac(lVar3,local_40[0],0);
    uVar2 = uVar2 ^ 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00e5fa84(undefined8 param_1,float param_2,long param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 0.0;
  if ((*(byte *)(param_3 + 0x28) & 3) == 0) {
    fVar1 = (float)FUN_00e5faf4(param_1,param_3);
    fVar2 = (float)FUN_00e5faf4((float)param_1 - param_2,param_3);
    fVar1 = (fVar1 + fVar2) * 0.5 * param_2;
  }
  return fVar1;
}




float FUN_00e5faf4(float param_1,long param_2)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *(float *)(param_2 + 0x18);
  if (*(float *)(param_2 + 0x14) <= 0.0) {
    fVar2 = -fVar2;
    if (fVar2 < param_1) {
      bVar1 = *(byte *)(param_2 + 0x28) & 3;
      if (bVar1 == 2) {
        fVar3 = *(float *)(param_2 + 0x1c);
        fVar2 = cosf((param_1 / fVar2) * 1.5707964);
        fVar3 = fVar3 - fVar3 * fVar2;
      }
      else if (bVar1 == 1) {
        fVar3 = (param_1 / fVar2) * (param_1 / fVar2) * *(float *)(param_2 + 0x1c);
      }
      else {
        if ((*(byte *)(param_2 + 0x28) & 3) != 0) goto LAB_00e5fb84;
        fVar3 = (param_1 / fVar2) * *(float *)(param_2 + 0x1c);
      }
      return fVar3 + 0.0;
    }
  }
  else if (param_1 < fVar2) {
    bVar1 = *(byte *)(param_2 + 0x28) & 3;
    if (bVar1 == 2) {
      fVar3 = *(float *)(param_2 + 0x1c);
      fVar2 = sinf(((fVar2 - param_1) / fVar2) * 1.5707964);
      return fVar3 - fVar3 * fVar2;
    }
    if (bVar1 == 1) {
      fVar4 = *(float *)(param_2 + 0x1c);
      fVar2 = (fVar2 - param_1) / fVar2;
      fVar3 = fVar2 * fVar4;
      fVar2 = fVar2 + -2.0;
    }
    else {
      if ((*(byte *)(param_2 + 0x28) & 3) != 0) goto LAB_00e5fb84;
      fVar4 = *(float *)(param_2 + 0x1c);
      fVar2 = (param_1 - fVar2) / (0.0 - fVar2);
      fVar3 = 0.0 - fVar4;
    }
    return fVar4 + fVar2 * fVar3;
  }
LAB_00e5fb84:
  return *(float *)(param_2 + 0x1c);
}




void FUN_00e5fc3c(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_028204d0;
  param_1[1] = 0;
  *(undefined1 *)((long)param_1 + 0x14) = 1;
  return;
}




void FUN_00e5fc5c(undefined4 param_1,float param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  float *pfVar3;
  float fVar4;
  float __x;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_78;
  float local_70;
  float local_68 [2];
  float local_60;
  float local_58 [2];
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(param_3 + 8) = param_1;
  if (*(char *)(param_3 + 0x14) == '\0') {
    FUN_00d80bb8(param_4,local_58);
  }
  else {
    uVar2 = FUN_00d81070(param_4);
    FUN_00d55794(uVar2,local_58,0);
  }
  pfVar3 = (float *)FUN_00d81388(param_4);
  fVar6 = *pfVar3 - local_58[0];
  fVar7 = pfVar3[2] - local_50;
  __x = fVar6 * fVar6 + 0.0 + fVar7 * fVar7;
  fVar4 = (float)DAT_03218f68;
  fVar5 = DAT_03218f70;
  if (1e-08 <= __x) {
    fVar5 = SQRT(__x);
    if (NAN(fVar5)) {
      fVar5 = sqrtf(__x);
    }
    fVar4 = fVar6 / fVar5;
    fVar5 = fVar7 / fVar5;
  }
  FUN_00d80bb8(param_4,local_68);
  local_68[0] = (fVar4 * param_2 + local_58[0]) - local_68[0];
  local_60 = (fVar5 * param_2 + local_50) - local_60;
  fVar5 = local_68[0] * local_68[0] + 0.0 + local_60 * local_60;
  fVar4 = SQRT(fVar5);
  local_78 = (ulong)(uint)local_68[0];
  if (NAN(fVar4)) {
    local_70 = local_60;
    fVar4 = sqrtf(fVar5);
  }
  *(float *)(param_3 + 0xc) = fVar4;
  if (fVar4 <= 0.0) {
    local_70 = DAT_03218f70;
    local_78 = CONCAT44(DAT_03218f68._4_4_,(float)DAT_03218f68);
  }
  else {
    local_70 = local_60 / fVar4;
    local_78 = CONCAT44(0.0 / fVar4,local_68[0] / fVar4);
  }
  FUN_00d80ca0(param_4,&local_78);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00e5fe1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d80f68(param_3);
  uVar1 = FUN_00d59f98(uVar1,param_4);
  FUN_00e5fc5c(param_1,uVar1,param_2,param_3);
  return;
}




void FUN_00e5fe74(long param_1)

{
  *(undefined1 *)(param_1 + 0x14) = 0;
  return;
}




void FUN_00e5fe7c(float param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  float fVar2;
  float local_88;
  float fStack_84;
  float local_80;
  float local_78;
  float fStack_74;
  float local_70;
  float local_68;
  float fStack_64;
  float local_60;
  float local_58;
  float fStack_54;
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d80c00(param_3,&local_58);
  fVar2 = *(float *)(param_2 + 0xc) - *(float *)(param_2 + 0x10);
  param_1 = *(float *)(param_2 + 8) * param_1;
  if (fVar2 <= param_1) {
    param_1 = fVar2;
  }
  FUN_00d80bb8(param_3,&local_68);
  local_78 = param_1 * local_58 + local_68;
  fStack_74 = param_1 * fStack_54 + fStack_64;
  local_70 = param_1 * local_50 + local_60;
  local_88 = fVar2 * local_58 + local_68;
  fStack_84 = fVar2 * fStack_54 + fStack_64;
  local_80 = fVar2 * local_50 + local_60;
  FUN_00d80be4(param_3,&local_78);
  FUN_00d81390(param_3,&local_88);
  param_1 = param_1 + *(float *)(param_2 + 0x10);
  *(float *)(param_2 + 0x10) = param_1;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(ABS(param_1 - *(float *)(param_2 + 0xc)) < 1.1920929e-07);
}




void FUN_00e5ff9c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 2) = 0;
  uVar1 = NEON_fmov(0xbf800000,4);
  param_1[1] = uVar1;
  *param_1 = &PTR_FUN_028204f8;
  *(undefined4 *)((long)param_1 + 0x1c) = DAT_03218f70;
  uVar1 = DAT_03218f68;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = uVar1;
  return;
}




void FUN_00e5ffd8(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 8) = param_1;
  return;
}




void FUN_00e5ffe0(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xc) = param_1;
  return;
}




void FUN_00e5ffe8(long param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}




void FUN_00e5fff4(float param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar19;
  ulong uVar18;
  float fVar20;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_a8;
  float fStack_a4;
  float local_a0;
  undefined8 local_98;
  float local_90;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)FUN_00d81388(param_3);
  local_98 = *puVar2;
  local_90 = *(float *)(puVar2 + 1);
  FUN_00d80bb8(param_3,&local_a8);
  lVar3 = FUN_00d81070(param_3);
  if ((lVar3 == 0) || (*(char *)(param_2 + 0x20) == '\0')) {
LAB_00e60188:
    fVar13 = *(float *)(param_2 + 8);
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
      if (0.0 < *(float *)(param_2 + 0xc)) {
        fVar12 = *(float *)(param_2 + 0xc) - *(float *)(param_2 + 0x10);
        fVar11 = ((float)local_98 - local_a8) * ((float)local_98 - local_a8) +
                 (local_98._4_4_ - fStack_a4) * (local_98._4_4_ - fStack_a4) +
                 (local_90 - local_a0) * (local_90 - local_a0);
        fVar13 = SQRT(fVar11);
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
        if (NAN(fVar13)) {
          fVar13 = sqrtf(fVar11);
        }
        if (1.1920929e-07 <= ABS(fVar12)) {
          fVar13 = fVar13 / fVar12;
          goto LAB_00e60194;
        }
        fVar13 = fVar13 + 0.1;
      }
    }
    else {
LAB_00e60194:
      fVar13 = fVar13 * param_1;
    }
    *(float *)(param_2 + 0x10) = *(float *)(param_2 + 0x10) + param_1;
    fVar14 = (float)local_98 - local_a8;
    fVar15 = (float)((ulong)local_98 >> 0x20) - fStack_a4;
    fVar11 = local_90 - local_a0;
    fVar12 = fVar14 * fVar14 + fVar15 * fVar15 + fVar11 * fVar11;
    if ((fVar13 * fVar13 <= fVar12) && (0.001 <= ABS(fVar12))) {
      if (1e-06 <= fVar12) {
        fVar16 = SQRT(fVar12);
        if (NAN(fVar16)) {
          fVar16 = sqrtf(fVar12);
        }
        uVar7 = CONCAT44(fVar15 / fVar16,fVar14 / fVar16);
        fVar11 = fVar11 / fVar16;
        if (lVar3 != 0) goto LAB_00e602e8;
LAB_00e602f8:
        uVar6 = NEON_fmov(0x3f800000,4);
        uVar8 = NEON_fmov(0xbf800000,4);
        fVar12 = (float)*(undefined8 *)(param_2 + 0x14);
        fVar17 = fVar12 - (float)uVar7;
        fVar14 = (float)((ulong)*(undefined8 *)(param_2 + 0x14) >> 0x20);
        fVar15 = (float)(uVar7 >> 0x20);
        fVar19 = fVar14 - fVar15;
        fVar20 = *(float *)(param_2 + 0x1c) - fVar11;
        fVar12 = fVar12 - fVar17;
        fVar14 = fVar14 - fVar19;
        uVar5 = CONCAT44(fVar14,fVar12);
        fVar16 = *(float *)(param_2 + 0x1c) - fVar20;
        uVar18 = uVar6 ^ (uVar6 ^ uVar8) & CONCAT44(-(uint)(fVar19 < 0.0),-(uint)(fVar17 < 0.0));
        uVar6 = uVar6 ^ (uVar6 ^ uVar8) &
                        CONCAT44(-(uint)(fVar14 - fVar15 < 0.0),-(uint)(fVar12 - (float)uVar7 < 0.0)
                                );
        fVar12 = -1.0;
        if (0.0 <= fVar20) {
          fVar12 = 1.0;
        }
        fVar14 = -1.0;
        if (0.0 <= fVar16 - fVar11) {
          fVar14 = 1.0;
        }
        iVar9 = -(uint)((float)uVar18 == (float)uVar6);
        iVar10 = -(uint)((float)(uVar18 >> 0x20) == (float)(uVar6 >> 0x20));
        uVar7 = uVar5 ^ (uVar5 ^ uVar7) &
                        CONCAT17(~(byte)((uint)iVar10 >> 0x18),
                                 CONCAT16(~(byte)((uint)iVar10 >> 0x10),
                                          CONCAT15(~(byte)((uint)iVar10 >> 8),
                                                   CONCAT14(~(byte)iVar10,
                                                            CONCAT13(~(byte)((uint)iVar9 >> 0x18),
                                                                     CONCAT12(~(byte)((uint)iVar9 >>
                                                                                     0x10),
                                                                              CONCAT11(~(byte)((uint
                                                  )iVar9 >> 8),~(byte)iVar9)))))));
        if (fVar12 == fVar14) {
          fVar11 = fVar16;
        }
        *(ulong *)(param_2 + 0x14) = uVar7;
      }
      else {
        uVar7 = CONCAT44(DAT_03218f68._4_4_,(float)DAT_03218f68);
        fVar11 = DAT_03218f70;
        if (lVar3 == 0) goto LAB_00e602f8;
LAB_00e602e8:
        if (*(char *)(param_2 + 0x20) == '\0') goto LAB_00e602f8;
        *(ulong *)(param_2 + 0x14) = uVar7;
      }
      *(float *)(param_2 + 0x1c) = fVar11;
      local_b8 = fVar13 * (float)uVar7 + local_a8;
      fStack_b4 = fVar13 * (float)(uVar7 >> 0x20) + fStack_a4;
      local_b0 = fVar13 * fVar11 + local_a0;
      FUN_00d80be4(param_3,&local_b8);
      fVar13 = *(float *)(param_2 + 0x14);
      if (1.1920929e-07 <=
          ABS(fVar13 * fVar13 + *(float *)(param_2 + 0x18) * *(float *)(param_2 + 0x18) +
              *(float *)(param_2 + 0x1c) * *(float *)(param_2 + 0x1c))) {
        FUN_00d80ca0(param_3,(float *)(param_2 + 0x14));
      }
      uVar4 = 0;
      goto LAB_00e603e0;
    }
  }
  else {
    FUN_00d55794(lVar3,&local_b8,0);
    fVar14 = (float)local_98 - local_b8;
    fVar11 = local_a8 - local_b8;
    fVar15 = local_90 - local_b0;
    fVar12 = fVar14 * fVar14 + (local_98._4_4_ - fStack_b4) * (local_98._4_4_ - fStack_b4) +
             fVar15 * fVar15;
    fVar13 = SQRT(fVar12);
    fVar16 = fStack_a4 - fStack_b4;
    fVar17 = local_a0 - local_b0;
    if (NAN(fVar13)) {
      fVar13 = sqrtf(fVar12);
    }
    fVar16 = fVar11 * fVar11 + fVar16 * fVar16 + fVar17 * fVar17;
    fVar11 = SQRT(fVar16);
    if (NAN(fVar11)) {
      fVar11 = sqrtf(fVar16);
    }
    if (fVar11 <= fVar13) {
      fVar13 = (float)DAT_03218f68;
      fVar11 = DAT_03218f70;
      if (1e-06 <= fVar12) {
        fVar11 = SQRT(fVar12);
        if (NAN(fVar11)) {
          fVar11 = sqrtf(fVar12);
        }
        fVar13 = fVar14 / fVar11;
        fVar11 = fVar15 / fVar11;
      }
      fVar12 = SQRT(fVar16);
      if (NAN(fVar12)) {
        fVar12 = sqrtf(fVar16);
      }
      local_a8 = local_b8 + fVar13 * fVar12;
      local_a0 = fVar11 * fVar12 + local_b0;
      goto LAB_00e60188;
    }
  }
  FUN_00d80be4(param_3,&local_98);
  uVar4 = 2;
LAB_00e603e0:
  if (*(long *)(lVar1 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

