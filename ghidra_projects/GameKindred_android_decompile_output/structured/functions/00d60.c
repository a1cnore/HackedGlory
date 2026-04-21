// functions/00d60 — 26 functions
#include "libGameKindred.h"




void FUN_00d60008(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_88 [4];
  undefined8 local_78;
  float local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  local_78 = 0;
  local_70 = 0.0;
  uVar3 = FUN_00d610a0(param_1,&local_78);
  if ((uVar3 & 1) != 0) {
    fVar5 = fmodf(*(float *)(param_1 + 0x7e0),6.2831855);
    fVar8 = local_70;
    fVar10 = fVar5 + 6.2831855;
    if (0.0 <= fVar5) {
      fVar10 = fVar5;
    }
    *(float *)(param_1 + 0x7e0) = fVar10;
    fVar10 = (float)local_78;
    fVar5 = local_78._4_4_;
    fVar6 = (float)NEON_fminnm((float)local_78 * (float)DAT_03218f68 +
                               local_78._4_4_ * DAT_03218f68._4_4_ + local_70 * DAT_03218f70,
                               0x3f800000);
    fVar11 = -1.0;
    fVar9 = -1.0;
    if (fVar6 <= -1.0) {
      fVar6 = -1.0;
    }
    fVar7 = acosf(fVar6);
    fVar12 = *(float *)(param_1 + 0x7e0);
    fVar6 = 6.2831855 - fVar7;
    if (0.0 <= fVar10 * DAT_03218f88 + fVar5 * DAT_03218f8c + fVar8 * DAT_03218f90) {
      fVar6 = fVar7;
    }
    if ((fVar6 <= fVar12) || (fVar6 - fVar12 <= 3.1415927)) {
      if ((fVar6 < fVar12) && (3.1415927 < fVar12 - fVar6)) {
        fVar6 = fVar6 + 6.2831855;
      }
    }
    else {
      fVar6 = fVar6 - 6.2831855;
    }
    lVar1 = 0x14;
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar1 = 0x18;
    }
    fVar10 = *(float *)(*(long *)(param_1 + 0x28) + lVar1);
    fVar8 = (float)FUN_01988c78();
    fVar8 = fVar12 + (fVar12 - fVar6) / (fVar10 * (1.0 / (fVar8 * -60.0)));
    if (0.0 <= fVar12 - fVar6) {
      fVar9 = 1.0;
    }
    if (0.0 <= fVar8 - fVar6) {
      fVar11 = 1.0;
    }
    if (fVar9 == fVar11) {
      fVar6 = fVar8;
    }
    *(float *)(param_1 + 0x7e0) = fVar6;
    local_88[1] = 0.0;
    local_88[0] = cosf(fVar6);
    local_88[2] = sinf(*(float *)(param_1 + 0x7e0));
    FUN_00d580b0(uVar4,local_88);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00d601f8(long param_1)

{
  return *(long *)(param_1 + 0x18) == 0;
}




void FUN_00d60208(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined8 uVar11;
  float local_68 [4];
  float local_58;
  float fStack_54;
  float local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if ((*(byte *)(param_4 + 0x818) & 1) == 0) goto LAB_00d603c4;
  lVar6 = *(long *)(param_4 + 0x10);
  uVar2 = *(ushort *)(lVar6 + 0x88) & 0x1f;
  if ((uVar2 == 0x1f) || (*(short *)(lVar6 + (ulong)uVar2 * 0x38 + 0x90) != 2)) {
    *(byte *)(param_4 + 0x818) = *(byte *)(param_4 + 0x818) & 0xfe;
  }
  else {
    FUN_00d55794(lVar6,param_4 + 0x7c8,0);
    FUN_00d557c4(lVar6,param_4 + 0x7d4,&DAT_03218f68);
    fVar7 = (float)FUN_00d9ee8c(lVar6);
    fVar8 = (float)FUN_01988c78();
    lVar1 = param_4 + 0x30;
    uVar4 = FUN_00ef0f78(fVar7 * fVar8,lVar1);
    if ((uVar4 & 1) == 0) {
      FUN_00d5ff84(param_4);
      *(byte *)(param_4 + 0x818) = *(byte *)(param_4 + 0x818) & 0xfe;
      goto LAB_00d603c4;
    }
    local_50 = *(float *)(param_4 + 0x7a0);
    local_58 = (float)*(undefined8 *)(param_4 + 0x798);
    fStack_54 = (float)((ulong)*(undefined8 *)(param_4 + 0x798) >> 0x20);
    uVar9 = FUN_00ef1174(lVar1);
    *(undefined4 *)(param_4 + 0x7bc) = uVar9;
    *(undefined4 *)(param_4 + 0x7c0) = param_2;
    *(undefined4 *)(param_4 + 0x7c4) = param_3;
    FUN_00d58004(lVar6,&local_58);
    lVar5 = lVar1 + (ulong)(*(int *)(param_4 + 0x794) - 1) * 0xc;
    uVar11 = *(undefined8 *)(lVar5 + 0x168);
    fVar7 = local_58 - *(float *)(lVar5 + 0x164);
    fVar8 = fStack_54 - (float)uVar11;
    fVar10 = local_50 - (float)((ulong)uVar11 >> 0x20);
    fVar8 = fVar7 * fVar7 + fVar8 * fVar8 + fVar10 * fVar10;
    fVar7 = SQRT(fVar8);
    if (NAN(fVar7)) {
      fVar7 = sqrtf(fVar8);
    }
    if (0.1 <= fVar7) goto LAB_00d603c4;
    FUN_00d55794(lVar6,local_68,0);
    lVar5 = lVar1 + (ulong)(*(int *)(param_4 + 0x794) - 1) * 0xc;
    uVar11 = *(undefined8 *)(lVar5 + 0x168);
    local_68[0] = local_68[0] - *(float *)(lVar5 + 0x164);
    fVar7 = (float)local_68._4_8_ - (float)uVar11;
    fVar8 = SUB84(local_68._4_8_,4) - (float)((ulong)uVar11 >> 0x20);
    fVar8 = local_68[0] * local_68[0] + fVar7 * fVar7 + fVar8 * fVar8;
    fVar7 = SQRT(fVar8);
    if (NAN(fVar7)) {
      fVar7 = sqrtf(fVar8);
    }
    if (0.1 <= fVar7) {
      FUN_00d60ff4(param_4);
    }
    else {
      *(byte *)(param_4 + 0x818) = *(byte *)(param_4 + 0x818) & 0xfe;
    }
    FUN_00d58004(lVar6,lVar1 + (ulong)(*(int *)(param_4 + 0x794) - 1) * 0xc + 0x164);
  }
  FUN_00d5ff84(param_4);
LAB_00d603c4:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d60430(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    FUN_00d613a4(param_1);
    return;
  }
  FUN_00d6140c(param_1);
  return;
}




void FUN_00d60468(undefined1 param_1 [16],float param_2,float param_3,long param_4,
                 undefined8 *param_5)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_78;
  float local_70;
  float local_68;
  float fStack_64;
  float local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*(char *)(*(long *)(param_4 + 0x28) + 0x1c) != '\0') {
    lVar6 = *(long *)(param_4 + 0x10);
    *(undefined8 *)(param_4 + 0x7b0) = *param_5;
    *(undefined4 *)(param_4 + 0x7b8) = *(undefined4 *)(param_5 + 1);
    FUN_00d55794(lVar6,&local_68,1);
    if ((*(byte *)(lVar6 + 0x2f8) & 0x81) == 0) {
      if (((*(byte *)(lVar6 + 0x2f4) >> 1 & 1) == 0) ||
         (local_68 = local_68 - *(float *)(param_4 + 0x7b0),
         fVar8 = fStack_64 - (float)*(undefined8 *)(param_4 + 0x7b4),
         local_60 = local_60 - (float)((ulong)*(undefined8 *)(param_4 + 0x7b4) >> 0x20),
         param_2 = local_60 * local_60, param_3 = fStack_64,
         0.2 <= local_68 * local_68 + fVar8 * fVar8 + param_2)) {
        lVar1 = param_4 + 0x30;
        uVar3 = FUN_00da2eb4(lVar6);
        FUN_00ef09b4(lVar1,uVar3);
        uVar5 = FUN_00ef09f8(lVar1,&local_68,param_4 + 0x7b0);
        uVar4 = 0;
        if ((uVar5 & 1) != 0) {
          FUN_00d5ff84(param_4);
          *(byte *)(param_4 + 0x818) = *(byte *)(param_4 + 0x818) | 1;
          uVar3 = FUN_00ef1174(lVar1);
          uVar4 = 1;
          *(undefined4 *)(param_4 + 0x7bc) = uVar3;
          *(float *)(param_4 + 0x7c0) = param_2;
          *(float *)(param_4 + 0x7c4) = param_3;
        }
        goto LAB_00d60640;
      }
      FUN_00d6074c(param_4,param_4 + 0x7b0);
    }
    else {
      uVar4 = 0;
      if ((*(byte *)(param_4 + 0x818) & 6) != 0) goto LAB_00d60640;
      fVar9 = (float)*param_5 - local_68;
      fVar10 = (float)((ulong)*param_5 >> 0x20) - fStack_64;
      local_78 = CONCAT44(fVar10,fVar9);
      fVar11 = *(float *)(param_5 + 1) - local_60;
      fVar8 = fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11;
      if (1e-08 <= fVar8) {
        fVar7 = SQRT(fVar8);
        if (NAN(fVar7)) {
          local_70 = fVar11;
          fVar7 = sqrtf(fVar8);
        }
        local_70 = fVar11 / fVar7;
        local_78 = CONCAT44(fVar10 / fVar7,fVar9 / fVar7);
      }
      else {
        local_70 = DAT_03218f70;
        local_78 = DAT_03218f68;
      }
      FUN_00d60670(param_4,&local_78,1);
    }
  }
  uVar4 = 0;
LAB_00d60640:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}




void FUN_00d60670(long param_1,undefined8 *param_2,uint param_3)

{
  undefined4 uVar1;
  float fVar2;
  float __x;
  
  if (((*(byte *)(param_1 + 0x818) >> 5 & 1) == 0) || ((param_3 & 1) != 0)) {
    *(byte *)(param_1 + 0x818) = *(byte *)(param_1 + 0x818) & 0xfb | 2;
    *(undefined4 *)(param_1 + 0x800) = *(undefined4 *)(param_2 + 1);
    *(undefined8 *)(param_1 + 0x7f8) = *param_2;
    uVar1 = DAT_03214ce8;
    __x = *(float *)(param_1 + 0x7f8) * *(float *)(param_1 + 0x7f8) +
          *(float *)(param_1 + 0x7fc) * *(float *)(param_1 + 0x7fc) +
          *(float *)(param_1 + 0x800) * *(float *)(param_1 + 0x800);
    *(undefined8 *)(param_1 + 0x7e8) = 0;
    *(undefined4 *)(param_1 + 0x7f0) = uVar1;
    if (1e-08 <= __x) {
      fVar2 = SQRT(__x);
      if (NAN(fVar2)) {
        fVar2 = sqrtf(__x);
      }
      *(ulong *)(param_1 + 0x7f8) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x7f8) >> 0x20) / fVar2,
                    (float)*(undefined8 *)(param_1 + 0x7f8) / fVar2);
      *(float *)(param_1 + 0x800) = *(float *)(param_1 + 0x800) / fVar2;
    }
    else {
      *(undefined4 *)(param_1 + 0x800) = DAT_03218f70;
      *(undefined8 *)(param_1 + 0x7f8) = DAT_03218f68;
    }
  }
  return;
}




void FUN_00d6074c(long param_1,long param_2)

{
  ulong uVar1;
  
  *(byte *)(param_1 + 0x818) = *(byte *)(param_1 + 0x818) & 0xfe;
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    FUN_00d5ff84(param_1);
    return;
  }
  if (param_2 != 0) {
    FUN_00d60dac(0x3e800000,param_1,param_2);
    return;
  }
  return;
}




long FUN_00d607ac(long param_1)

{
  return param_1 + 0x7b0;
}




long FUN_00d607b4(long param_1)

{
  return param_1 + 0x7bc;
}




float FUN_00d607bc(long param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = atan2f(*(float *)(param_1 + 0x7c4),*(float *)(param_1 + 0x7bc));
  fVar2 = atan2f(*(float *)(param_1 + 0x7dc),*(float *)(param_1 + 0x7d4));
  fVar2 = fVar2 - fVar1;
  fVar1 = fVar2 + 6.2831855;
  if (-3.1415927 <= fVar2) {
    fVar1 = fVar2;
  }
  return fVar1 * 57.295776;
}




long FUN_00d6083c(long param_1)

{
  return param_1 + 0x7c8;
}




void FUN_00d60844(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_03214ce8;
  *(undefined8 *)(param_1 + 0x7e8) = 0;
  *(byte *)(param_1 + 0x818) = *(byte *)(param_1 + 0x818) & 0xf9;
  *(undefined4 *)(param_1 + 0x7f0) = uVar1;
  return;
}




void FUN_00d60868(long param_1,undefined8 *param_2,uint param_3)

{
  undefined4 uVar1;
  
  if (((*(byte *)(param_1 + 0x818) >> 5 & 1) != 0) && ((param_3 & 1) == 0)) {
    return;
  }
  *(byte *)(param_1 + 0x818) = *(byte *)(param_1 + 0x818) & 0xf9 | 4;
  *(undefined4 *)(param_1 + 0x800) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x7f8) = *param_2;
  uVar1 = DAT_03214ce8;
  *(undefined8 *)(param_1 + 0x7e8) = 0;
  *(undefined4 *)(param_1 + 0x7f0) = uVar1;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d608ac(long param_1,long param_2,ulong param_3,uint param_4)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float local_68;
  float fStack_64;
  float local_60;
  float local_58 [2];
  float local_50;
  float local_48 [2];
  float local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x818);
  if (((bVar1 >> 5 & 1) == 0) || ((param_4 & 1) != 0)) {
    lVar5 = *(long *)(param_1 + 0x10);
    if (lVar5 == param_2) {
      *(byte *)(param_1 + 0x818) = bVar1 & 0xf9;
      iVar4 = DAT_03214ce8;
      lVar3 = 0;
      *(undefined8 *)(param_1 + 0x7e8) = 0;
    }
    else {
      lVar3 = param_2 + 0x28;
      *(byte *)(param_1 + 0x818) = bVar1 | 6;
      *(long *)(param_1 + 0x7e8) = lVar3;
      iVar4 = *(int *)(param_2 + 0x30);
    }
    *(int *)(param_1 + 0x7f0) = iVar4;
    if (((param_3 & 1) != 0) && (lVar3 != 0)) {
      if (iVar4 == *(int *)(lVar3 + 8)) {
        FUN_00d55794(lVar5,local_48,0);
        FUN_00d55794(param_2,local_58,0);
        local_68 = local_58[0] - local_48[0];
        local_60 = local_50 - local_40;
        fVar7 = local_68 * local_68 + 0.0 + local_60 * local_60;
        fStack_64 = 0.0;
        if (1e-08 <= fVar7) {
          fVar6 = SQRT(fVar7);
          if (NAN(fVar6)) {
            fVar6 = sqrtf(fVar7);
          }
          local_68 = local_68 / fVar6;
          fStack_64 = fStack_64 / fVar6;
          local_60 = local_60 / fVar6;
        }
        else {
          local_60 = DAT_03218f70;
          local_68 = (float)DAT_03218f68;
          fStack_64 = DAT_03218f68._4_4_;
        }
        FUN_00d580b0(lVar5,&local_68);
        fVar7 = acosf(local_68 * (float)DAT_03218f68 + fStack_64 * DAT_03218f68._4_4_ +
                      local_60 * DAT_03218f70);
        *(float *)(param_1 + 0x7e0) = fVar7;
        if (local_68 * DAT_03218f88 + fStack_64 * (float)_DAT_03218f8c +
            local_60 * (float)((ulong)_DAT_03218f8c >> 0x20) < 0.0) {
          *(float *)(param_1 + 0x7e0) = 6.2831855 - fVar7;
        }
      }
      else {
        *(undefined8 *)(param_1 + 0x7e8) = 0;
        *(int *)(param_1 + 0x7f0) = DAT_03214ce8;
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00d60ab8(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(param_1 + 0x7e8);
  uVar2 = 0;
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x7f0) != (int)plVar1[1]) {
      *(undefined8 *)(param_1 + 0x7e8) = 0;
      *(undefined4 *)(param_1 + 0x7f0) = DAT_03214ce8;
      return 0;
    }
    uVar2 = (**(code **)(*plVar1 + 0x10))();
  }
  return uVar2;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d60b0c(long param_1,float *param_2,uint param_3)

{
  float fVar1;
  
  if (((*(byte *)(param_1 + 0x818) >> 5 & 1) == 0) || ((param_3 & 1) != 0)) {
    FUN_00d60670(param_1,param_2,param_3 & 1);
    FUN_00d580b0(*(undefined8 *)(param_1 + 0x10),param_2);
    fVar1 = acosf(*param_2 * (float)DAT_03218f68 + param_2[1] * DAT_03218f68._4_4_ +
                  param_2[2] * DAT_03218f70);
    *(float *)(param_1 + 0x7e0) = fVar1;
    if (*param_2 * DAT_03218f88 + (float)*(undefined8 *)(param_2 + 1) * (float)_DAT_03218f8c +
        (float)((ulong)*(undefined8 *)(param_2 + 1) >> 0x20) * (float)((ulong)_DAT_03218f8c >> 0x20)
        < 0.0) {
      *(float *)(param_1 + 0x7e0) = 6.2831855 - fVar1;
    }
  }
  return;
}




void FUN_00d60bd0(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_03214ce8;
  *(undefined8 *)(param_1 + 0x7e8) = 0;
  *(byte *)(param_1 + 0x818) = *(byte *)(param_1 + 0x818) & 0xd9;
  *(undefined4 *)(param_1 + 0x7f0) = uVar1;
  return;
}




void FUN_00d60bf8(long param_1,undefined8 param_2)

{
  FUN_00d580b0(*(undefined8 *)(param_1 + 0x10));
  FUN_00d60670(param_1,param_2,1);
  *(byte *)(param_1 + 0x818) = *(byte *)(param_1 + 0x818) | 0x20;
  return;
}




void FUN_00d60c3c(long param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x818) & 0xf9;
  *(byte *)(param_1 + 0x818) = bVar1 | 4;
  *(undefined4 *)(param_1 + 0x800) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x7f8) = *param_2;
  uVar2 = DAT_03214ce8;
  *(undefined8 *)(param_1 + 0x7e8) = 0;
  *(undefined4 *)(param_1 + 0x7f0) = uVar2;
  *(byte *)(param_1 + 0x818) = bVar1 | 0x24;
  return;
}




void FUN_00d60c80(long param_1,long param_2)

{
  byte bVar1;
  undefined4 uVar2;
  
  if (*(long *)(param_1 + 0x10) == param_2) {
    bVar1 = *(byte *)(param_1 + 0x818) & 0xf9;
    *(byte *)(param_1 + 0x818) = bVar1;
    uVar2 = DAT_03214ce8;
    *(undefined8 *)(param_1 + 0x7e8) = 0;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x818) | 6;
    *(byte *)(param_1 + 0x818) = bVar1;
    *(long *)(param_1 + 0x7e8) = param_2 + 0x28;
    uVar2 = *(undefined4 *)(param_2 + 0x30);
  }
  *(undefined4 *)(param_1 + 0x7f0) = uVar2;
  *(byte *)(param_1 + 0x818) = bVar1 | 0x20;
  return;
}




undefined4 FUN_00d60cd0(long param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = 0;
  if (((*(byte *)(param_1 + 0x818) ^ 0xff) & 0x21) == 0) {
    fVar2 = atan2f(*(float *)(param_1 + 0x7c4),*(float *)(param_1 + 0x7bc));
    fVar3 = fmodf(fVar2 - *(float *)(param_1 + 0x7e0),6.2831855);
    fVar2 = fVar3 - 6.2831855;
    if (fVar3 <= 3.1415927) {
      fVar2 = fVar3;
    }
    fVar3 = fVar2 + 6.2831855;
    if (-3.1415927 <= fVar2) {
      fVar3 = fVar2;
    }
    if (ABS(fVar3) <= 2.3561945) {
      if (-0.7853982 <= fVar3) {
        uVar1 = 4;
        if (fVar3 <= 0.7853982) {
          uVar1 = 1;
        }
      }
      else {
        uVar1 = 3;
      }
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1;
}




byte FUN_00d60da0(long param_1)

{
  return *(byte *)(param_1 + 0x818) & 1;
}




void FUN_00d60dac(float param_1,long param_2,float *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float local_48;
  float fStack_44;
  float fStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)(param_2 + 0x10);
  if (param_1 <= 0.0) {
    FUN_00d58004(lVar4,param_3);
    *(undefined4 *)(param_2 + 0x810) = DAT_03218f38;
    uVar3 = DAT_03218f30;
    *(undefined4 *)(param_2 + 0x814) = 0;
    *(undefined8 *)(param_2 + 0x808) = uVar3;
    uVar1 = *(ushort *)(lVar4 + 0x88) & 0x1f;
    if (((uVar1 == 0x1f) || (1 < *(ushort *)(lVar4 + (ulong)uVar1 * 0x38 + 0x90) - 3)) &&
       ((*(byte *)(param_2 + 0x818) & 1) != 0)) {
      FUN_00d60ff4(param_2);
    }
  }
  else {
    FUN_00d55794(lVar4,&local_48,1);
    fVar5 = (float)*(undefined8 *)(param_3 + 1) - fStack_44;
    fVar6 = (float)((ulong)*(undefined8 *)(param_3 + 1) >> 0x20) - fStack_40;
    fVar6 = (*param_3 - local_48) * (*param_3 - local_48) + fVar5 * fVar5 + fVar6 * fVar6;
    fVar5 = SQRT(fVar6);
    if (NAN(fVar5)) {
      fVar5 = sqrtf(fVar6);
    }
    if (fVar5 <= 0.01) {
      param_1 = 0.0;
      *(undefined4 *)(param_2 + 0x810) = DAT_03218f38;
      *(undefined8 *)(param_2 + 0x808) = DAT_03218f30;
    }
    else {
      fVar5 = param_3[2];
      *(ulong *)(param_2 + 0x808) =
           CONCAT44(((float)((ulong)*(undefined8 *)param_3 >> 0x20) - fStack_44) / param_1,
                    ((float)*(undefined8 *)param_3 - local_48) / param_1);
      *(float *)(param_2 + 0x810) = (fVar5 - fStack_40) / param_1;
    }
    *(float *)(param_2 + 0x814) = param_1;
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




byte FUN_00d60f2c(long param_1)

{
  return *(byte *)(param_1 + 0x818) >> 3 & 3;
}




void FUN_00d60f38(long param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_48 [16];
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_1 + 0x818) >> 3 & 3) != param_2) {
    *(byte *)(param_1 + 0x818) = *(byte *)(param_1 + 0x818) & 0xe7 | (byte)((param_2 & 3) << 3);
    local_38 = NEON_fmov(0x40f00000,4);
    local_30 = 0x40f00000;
    uVar2 = FUN_00ef00a0(param_2,param_1 + 0x7b0,auStack_48,&local_38);
    if ((uVar2 & 1) == 0) {
      *(byte *)(param_1 + 0x818) = *(byte *)(param_1 + 0x818) & 0xfe;
      uVar2 = FUN_00ceab48();
      if ((uVar2 & 1) != 0) {
        FUN_00d5ff84(param_1);
      }
    }
    else {
      FUN_00d60468(param_1,auStack_48);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00d60ff4(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  FUN_00d55794(uVar4,auStack_48,1);
  uVar2 = FUN_00da2eb4(uVar4);
  FUN_00ef09b4(param_1 + 0x30,uVar2);
  uVar3 = FUN_00ef09f8(param_1 + 0x30,auStack_48,param_1 + 0x7b0);
  if ((uVar3 & 1) != 0) {
    *(byte *)(param_1 + 0x818) = *(byte *)(param_1 + 0x818) | 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

