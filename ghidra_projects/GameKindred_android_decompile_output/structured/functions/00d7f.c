// functions/00d7f — 42 functions
#include "libGameKindred.h"




undefined1  [16] FUN_00d7f008(long param_1)

{
  long *plVar1;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  plVar1 = *(long **)(param_1 + 0x7b8);
  if ((plVar1 != (long *)0x0) && ((*(byte *)(param_1 + 0x7d8) >> 1 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00d7f030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))(plVar1,param_1 + 0x7c0);
    auVar2._4_4_ = extraout_var;
    auVar2._0_4_ = extraout_s0;
    auVar2._8_8_ = extraout_var_00;
    return auVar2;
  }
  return ZEXT816(0);
}




void FUN_00d7f034(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281e7f0;
  thunk_FUN_00ef4010(param_1 + 1);
  return;
}




void FUN_00d7f048(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281e7f0;
  thunk_FUN_00ef4010(param_1 + 1);
  operator_delete(param_1);
  return;
}




undefined1  [16] FUN_00d7f07c(void)

{
  return ZEXT816(0xbf800000);
}




void FUN_00d7f084(void)

{
  return;
}




void FUN_00d7f08c(void)

{
  return;
}




uint FUN_00d7f094(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00ef09b4(param_1,param_4);
  local_58 = *param_2;
  local_50 = param_2[1];
  local_54 = 0;
  local_68 = *param_3;
  local_60 = param_3[1];
  local_78 = 0x412000003c23d70a;
  local_64 = 0;
  local_70 = 0x3c23d70a;
  uVar3 = FUN_00ef0108(param_4,&local_58,&local_7c,0,&local_78);
  if ((uVar3 & 1) != 0) {
    local_54 = local_7c;
  }
  uVar3 = FUN_00ef0108(param_4,&local_68,&local_80,0,&local_78);
  if ((uVar3 & 1) != 0) {
    local_64 = local_80;
  }
  uVar2 = FUN_00ef09f8(param_1,&local_58,&local_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined1 FUN_00d7f188(float param_1,long param_2,float *param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = (float)FUN_01988c78();
  uVar2 = FUN_00ef0f78(fVar4 * param_1,param_2);
  if ((uVar2 & 1) == 0) {
    uVar1 = 2;
  }
  else {
    lVar3 = param_2 + (ulong)(*(int *)(param_2 + 0x764) - 1) * 0xc;
    fVar4 = *(float *)(param_2 + 0x768) - *(float *)(lVar3 + 0x164);
    fVar5 = *(float *)(param_2 + 0x76c) - *(float *)(lVar3 + 0x168);
    fVar6 = *(float *)(param_2 + 0x770) - *(float *)(lVar3 + 0x16c);
    uVar1 = fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6 < 0.010000001;
    fVar4 = *(float *)(param_2 + 0x770);
    fVar5 = *(float *)(param_2 + 0x768);
    fVar6 = *(float *)(param_2 + 0x76c);
    if ((bool)uVar1) {
      fVar4 = *(float *)(lVar3 + 0x16c);
      fVar5 = *(float *)(lVar3 + 0x164);
      fVar6 = *(float *)(lVar3 + 0x168);
    }
    *param_3 = fVar5;
    param_3[1] = fVar6;
    param_3[2] = fVar4;
    fVar4 = (float)FUN_00ef1174(param_2);
    param_3[3] = fVar4;
    param_3[4] = fVar5;
    param_3[5] = fVar6;
  }
  return uVar1;
}




void FUN_00d7f260(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = &PTR_FUN_0281e8b0;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 1);
  param_1[1] = *param_2;
  return;
}




undefined8 FUN_00d7f284(long param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x10);
  *param_2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)((long)param_2 + 0xc) = DAT_03218f30;
  *(undefined4 *)((long)param_2 + 0x14) = DAT_03218f38;
  return 0;
}




long FUN_00d7f2b4(long param_1)

{
  return param_1 + 8;
}




void FUN_00d7f2bc(undefined4 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined4 param_5)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_0281e8f0;
  thunk_FUN_00ef0978(param_2 + 1);
  param_2[0xf1] = *param_3;
  uVar1 = *param_4;
  *(undefined4 *)(param_2 + 0xf3) = param_1;
  *(undefined4 *)((long)param_2 + 0x79c) = param_5;
  param_2[0xf2] = uVar1;
  return;
}




undefined8
FUN_00d7f324(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
            undefined8 *param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_00d7f094(param_4 + 8,param_4 + 0x788,param_4 + 0x790,*(undefined4 *)(param_4 + 0x79c))
  ;
  if ((uVar1 & 1) == 0) {
    uVar2 = 2;
  }
  else {
    *(undefined4 *)(param_5 + 1) = *(undefined4 *)(param_4 + 0x778);
    *param_5 = *(undefined8 *)(param_4 + 0x770);
    uVar3 = FUN_00ef1174(param_4 + 8);
    uVar2 = 0;
    *(undefined4 *)((long)param_5 + 0xc) = uVar3;
    *(undefined4 *)(param_5 + 2) = param_2;
    *(undefined4 *)((long)param_5 + 0x14) = param_3;
  }
  return uVar2;
}




void FUN_00d7f394(long param_1)

{
  FUN_00d7f188(*(undefined4 *)(param_1 + 0x798),param_1 + 8);
  return;
}




long FUN_00d7f3a0(long param_1)

{
  return param_1 + 0x16c;
}




long FUN_00d7f3a8(long param_1)

{
  return param_1 + (ulong)(*(int *)(param_1 + 0x76c) - 1) * 0xc + 0x16c;
}




void FUN_00d7f3c0(undefined4 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_0281e930;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_3 + 1);
  param_2[1] = *param_3;
  *(undefined4 *)((long)param_2 + 0x1c) = *(undefined4 *)(param_4 + 1);
  uVar1 = *param_4;
  *(undefined4 *)(param_2 + 4) = param_1;
  *(undefined8 *)((long)param_2 + 0x14) = uVar1;
  return;
}




undefined8 FUN_00d7f3f8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  float fVar2;
  float __x;
  float fVar3;
  float fVar4;
  
  if (0.0 < *(float *)(param_1 + 0x20)) {
    fVar4 = *(float *)(param_1 + 0x14) - *(float *)(param_1 + 8);
    fVar3 = *(float *)(param_1 + 0x1c) - *(float *)(param_1 + 0x10);
    __x = fVar4 * fVar4 + 0.0 + fVar3 * fVar3;
    if (1.1920929e-07 <= ABS(__x)) {
      fVar2 = SQRT(__x);
      if (NAN(fVar2)) {
        fVar2 = sqrtf(__x);
      }
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x10);
      uVar1 = *(undefined8 *)(param_1 + 8);
      *(float *)((long)param_2 + 0xc) = fVar4 / fVar2;
      *(float *)(param_2 + 2) = 0.0 / fVar2;
      *param_2 = uVar1;
      *(float *)((long)param_2 + 0x14) = fVar3 / fVar2;
      return 0;
    }
  }
  return 2;
}




undefined8 FUN_00d7f4b4(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined8 uVar3;
  float __x;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = *(float *)(param_1 + 0x20);
  fVar2 = (float)FUN_01988c78();
  uVar3 = *(undefined8 *)(param_1 + 0x14);
  fVar4 = (float)uVar3 - (float)*param_2;
  fVar5 = (float)((ulong)uVar3 >> 0x20) - (float)((ulong)*param_2 >> 0x20);
  fVar7 = *(float *)(param_1 + 0x1c) - *(float *)(param_2 + 1);
  __x = fVar4 * fVar4 + fVar5 * fVar5 + fVar7 * fVar7;
  if (1.1920929e-07 <= ABS(__x)) {
    fVar6 = fVar6 * fVar2;
    fVar2 = SQRT(__x);
    if (NAN(fVar2)) {
      fVar2 = sqrtf(__x);
    }
    uVar3 = 0;
    *(ulong *)((long)param_2 + 0xc) = CONCAT44(fVar5 / fVar2,fVar4 / fVar2);
    *(float *)((long)param_2 + 0x14) = fVar7 / fVar2;
    if (fVar6 * fVar6 <= __x) {
      *param_2 = CONCAT44((fVar5 / fVar2) * fVar6 + (float)((ulong)*param_2 >> 0x20),
                          (fVar4 / fVar2) * fVar6 + (float)*param_2);
      *(float *)(param_2 + 1) = fVar6 * (fVar7 / fVar2) + *(float *)(param_2 + 1);
      return 0;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
    uVar3 = 1;
  }
  *(undefined4 *)(param_2 + 1) = uVar1;
  *param_2 = *(undefined8 *)(param_1 + 0x14);
  return uVar3;
}




long FUN_00d7f5b8(long param_1)

{
  return param_1 + 0x14;
}




float FUN_00d7f5c0(long param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (*(float *)(param_1 + 0x20) <= 0.0) {
    fVar1 = -1.0;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x14) - *param_2;
    fVar2 = *(float *)(param_1 + 0x18) - param_2[1];
    fVar3 = *(float *)(param_1 + 0x1c) - param_2[2];
    fVar2 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
    fVar1 = SQRT(fVar2);
    if (NAN(fVar1)) {
      fVar1 = sqrtf(fVar2);
    }
    fVar1 = fVar1 / *(float *)(param_1 + 0x20);
  }
  return fVar1;
}




undefined8 FUN_00d7f640(void)

{
  return 0;
}




void FUN_00d7f648(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281e8f0;
  thunk_FUN_00ef4010(param_1 + 1);
  return;
}




void FUN_00d7f65c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281e8f0;
  thunk_FUN_00ef4010(param_1 + 1);
  operator_delete(param_1);
  return;
}




void FUN_00d7f690(void)

{
  return;
}




void FUN_00d7f698(undefined4 param_1,undefined1 *param_2,undefined1 param_3,undefined4 param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined4 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_2 = param_3;
  *(undefined4 *)(param_2 + 4) = param_4;
  *(undefined4 *)(param_2 + 0x98) = param_1;
  *(undefined4 *)(param_2 + 0x9c) = param_8;
  uVar3 = param_5[5];
  uVar2 = param_5[4];
  uVar1 = param_5[6];
  uVar7 = param_5[1];
  uVar6 = *param_5;
  uVar5 = param_5[3];
  uVar4 = param_5[2];
  *(undefined8 *)(param_2 + 0x40) = param_5[7];
  *(undefined8 *)(param_2 + 0x38) = uVar1;
  *(undefined8 *)(param_2 + 0x30) = uVar3;
  *(undefined8 *)(param_2 + 0x28) = uVar2;
  *(undefined8 *)(param_2 + 0x20) = uVar5;
  *(undefined8 *)(param_2 + 0x18) = uVar4;
  *(undefined8 *)(param_2 + 0x10) = uVar7;
  *(undefined8 *)(param_2 + 8) = uVar6;
  uVar1 = *param_6;
  *(undefined8 *)(param_2 + 0x50) = param_6[1];
  *(undefined8 *)(param_2 + 0x48) = uVar1;
  uVar3 = param_7[5];
  uVar2 = param_7[4];
  uVar1 = param_7[6];
  uVar7 = param_7[1];
  uVar6 = *param_7;
  uVar5 = param_7[3];
  uVar4 = param_7[2];
  *(undefined8 *)(param_2 + 0x90) = param_7[7];
  *(undefined8 *)(param_2 + 0x88) = uVar1;
  *(undefined8 *)(param_2 + 0x80) = uVar3;
  *(undefined8 *)(param_2 + 0x78) = uVar2;
  *(undefined8 *)(param_2 + 0x70) = uVar5;
  *(undefined8 *)(param_2 + 0x68) = uVar4;
  *(undefined8 *)(param_2 + 0x60) = uVar7;
  *(undefined8 *)(param_2 + 0x58) = uVar6;
  return;
}




void FUN_00d7f6e4(undefined4 param_1,long param_2,long param_3)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_88 [64];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  piVar1 = (int *)(param_2 + 0x260);
  if (param_2 == 0) {
    piVar1 = &DAT_01bc8f90;
  }
  FUN_00daa4a4(auStack_88,*piVar1,*(undefined4 *)(param_3 + 0x260),0xffffffff,0xffffffff,0xee,
               0xffffffff);
  if (param_2 != 0) {
    for (lVar3 = *(long *)(param_2 + 0x18); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x20)) {
      if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_02c7bf48) {
        FUN_00d6c368(lVar3,param_1,auStack_88);
        break;
      }
    }
    if (*(int *)(param_2 + 0x260) == *(int *)(param_3 + 0x260)) goto LAB_00d7f7d4;
  }
  for (lVar3 = *(long *)(param_3 + 0x18); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x20)) {
    if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_02c7bf48) {
      FUN_00d6c368(lVar3,param_1,auStack_88);
      break;
    }
  }
LAB_00d7f7d4:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d7f800(float param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined8 local_268 [64];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_00ceab48();
  if ((((uVar4 & 1) != 0) && (uVar2 = FUN_01985cbc(param_2,local_268,0x40,DAT_031aa0b0), uVar2 != 0)
      ) && (param_1 = ABS(param_1), 0.0 < param_1)) {
    uVar4 = 0;
    do {
      uVar5 = local_268[uVar4];
      iVar3 = FUN_00d7bcf4(uVar5);
      if (iVar3 == param_3) {
        fVar6 = (float)FUN_00d7bce4(uVar5);
        fVar7 = (float)FUN_00d7bce4(uVar5);
        if (param_1 < fVar7) {
          FUN_00d7bcec(fVar6 - param_1,uVar5);
          break;
        }
        fVar6 = (float)FUN_00d7bce4(uVar5);
        param_1 = param_1 - fVar6;
        FUN_00d7bcec(0,uVar5);
      }
      uVar4 = uVar4 + 1;
      if ((uVar2 <= uVar4) || (param_1 <= 0.0)) break;
    } while( true );
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00d7f914(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
                 undefined4 param_5)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_88 [48];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_01985d44(param_3,DAT_031aa0b0);
  if (lVar2 != 0) {
    FUN_00d7bcd4(param_1,lVar2,param_4,param_5);
    FUN_00d043c0(param_1,auStack_88,*(undefined4 *)(param_3 + 0x260),param_4,0);
    FUN_00ce20fc(auStack_88);
  }
  if (0.0 < (float)param_1) {
    FUN_00d7f6e4(param_1,6,param_2,param_3);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d7f9ec(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x260);
  uVar3 = FUN_00d7bcf4(param_2);
  fVar4 = (float)FUN_00d7bce4(param_2);
  FUN_00d043c0(-fVar4,auStack_68,uVar1,uVar3,0);
  FUN_00ce20fc(auStack_68);
  FUN_01985ca8(param_2);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d7fa78(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  undefined1 auStack_78 [48];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  fVar4 = (float)FUN_00d7bce4(param_4);
  if ((float)param_1 < -fVar4) {
    fVar4 = (float)FUN_00d7bce4(param_4);
    param_1 = (ulong)(uint)-fVar4;
  }
  uVar1 = *(undefined4 *)(param_3 + 0x260);
  uVar3 = FUN_00d7bcf4(param_4);
  FUN_00d043c0(param_1,auStack_78,uVar1,uVar3,0);
  FUN_00ce20fc(auStack_78);
  fVar4 = (float)FUN_00d7bce4(param_4);
  FUN_00d7bcec((float)param_1 + fVar4,param_4);
  if (0.0 < (float)param_1) {
    FUN_00d7f6e4(param_1,6,param_2,param_3);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d7fb5c(long param_1)

{
  *(undefined4 *)(param_1 + 0x180) = 0;
  memset((void *)(param_1 + 0x19c),0,0x44);
  *(undefined4 *)(param_1 + 0x18c) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x188) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x184) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x198) = 0xff7fffff;
  *(undefined4 *)(param_1 + 0x194) = 0xff7fffff;
  *(undefined4 *)(param_1 + 400) = 0xff7fffff;
  FUN_00d7fbc0(param_1 + 0x1d0,10);
  return;
}




void FUN_00d7fbc0(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (param_1[1] < param_2) {
    puVar3 = operator_new__((ulong)param_2 << 4);
    uVar2 = *param_1;
    puVar4 = *(undefined8 **)(param_1 + 2);
    if (uVar2 != 0) {
      puVar5 = puVar3;
      puVar6 = puVar4;
      do {
        *puVar5 = *puVar6;
        puVar1 = puVar6 + 1;
        puVar6 = puVar6 + 2;
        *(undefined4 *)(puVar5 + 1) = *(undefined4 *)puVar1;
        puVar5 = puVar5 + 2;
      } while (puVar6 != puVar4 + (ulong)uVar2 * 2);
    }
    param_1[1] = param_2;
    if (puVar4 != (undefined8 *)0x0) {
      operator_delete__(puVar4);
    }
    *(undefined8 **)(param_1 + 2) = puVar3;
  }
  return;
}




void FUN_00d7fc50(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x184) = *param_2;
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_3 + 1);
  uVar1 = *param_3;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 400) = uVar1;
  return;
}




void FUN_00d7fc7c(undefined4 param_1,undefined4 param_2,undefined8 *param_3,float *param_4,
                 uint param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  *(undefined4 *)((long)param_3 + 0x18c) = 0x7f7fffff;
  *(undefined4 *)(param_3 + 0x31) = 0x7f7fffff;
  *(undefined4 *)((long)param_3 + 0x184) = 0x7f7fffff;
  *(undefined4 *)(param_3 + 0x33) = 0xff7fffff;
  *(undefined4 *)((long)param_3 + 0x194) = 0xff7fffff;
  *(undefined4 *)(param_3 + 0x32) = 0xff7fffff;
  if (param_5 != 0) {
    uVar1 = (ulong)param_5;
    puVar2 = param_3;
    do {
      *puVar2 = *(undefined8 *)param_4;
      fVar4 = *param_4;
      fVar5 = param_4[1];
      fVar6 = *(float *)((long)param_3 + 0x194);
      uVar3 = NEON_fminnm(*(undefined4 *)(param_3 + 0x31),0);
      *(undefined4 *)(param_3 + 0x31) = uVar3;
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      *(float *)((long)param_3 + 0x194) = fVar6;
      fVar6 = *(float *)((long)param_3 + 0x184);
      if (fVar4 <= *(float *)((long)param_3 + 0x184)) {
        fVar6 = fVar4;
      }
      *(float *)((long)param_3 + 0x184) = fVar6;
      fVar6 = *(float *)((long)param_3 + 0x18c);
      if (fVar5 <= *(float *)((long)param_3 + 0x18c)) {
        fVar6 = fVar5;
      }
      *(float *)((long)param_3 + 0x18c) = fVar6;
      fVar6 = *(float *)(param_3 + 0x32);
      if (*(float *)(param_3 + 0x32) <= fVar4) {
        fVar6 = fVar4;
      }
      fVar4 = *(float *)(param_3 + 0x33);
      if (*(float *)(param_3 + 0x33) <= fVar5) {
        fVar4 = fVar5;
      }
      uVar1 = uVar1 - 1;
      *(float *)(param_3 + 0x32) = fVar6;
      *(float *)(param_3 + 0x33) = fVar4;
      param_4 = param_4 + 2;
      puVar2 = puVar2 + 1;
    } while (uVar1 != 0);
  }
  *(uint *)(param_3 + 0x30) = param_5;
  *(undefined4 *)(param_3 + 0x31) = param_1;
  *(undefined4 *)((long)param_3 + 0x194) = param_2;
  return;
}




void FUN_00d7fd30(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x19c) = param_2;
  return;
}




void FUN_00d7fd38(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x1a0) = param_2;
  *(undefined8 *)(param_1 + 0x1a8) = param_3;
  return;
}




void FUN_00d7fd40(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x1b0) = param_2;
  *(undefined8 *)(param_1 + 0x1b8) = param_3;
  return;
}




void FUN_00d7fd48(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x1c0) = param_2;
  *(undefined8 *)(param_1 + 0x1c8) = param_3;
  return;
}




undefined8 FUN_00d7fd50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x180) != 0) {
    uVar1 = FUN_019bb50c(param_2,param_3,param_1,*(int *)(param_1 + 0x180),param_4);
    return uVar1;
  }
  return 0;
}




void FUN_00d7fd78(long param_1,long param_2,uint param_3)

{
  ulong uVar1;
  
  if (param_3 != 0) {
    uVar1 = 0;
    do {
      if (*(uint *)(param_1 + 0x180) <= uVar1) {
        return;
      }
      *(undefined8 *)(param_2 + uVar1 * 8) = *(undefined8 *)(param_1 + uVar1 * 8);
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_3);
  }
  return;
}




uint FUN_00d7fda8(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 local_80;
  undefined4 uStack_7c;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  if (*(int *)(param_1 + 0x19c) == 0) {
    if (param_5 != 0) {
      uVar8 = 0;
      uVar10 = 0;
      do {
        puVar4 = (undefined4 *)(param_3 + uVar8 * 0x10);
        uVar19 = puVar4[3];
        uVar7 = FUN_019ba9d8(uVar19,param_1 + 0x184,param_1 + 400,puVar4);
        if ((uVar7 & 1) != 0) {
          if (*(int *)(param_1 + 0x180) == 0) {
LAB_00d7ffc0:
            *(undefined8 *)(param_2 + (ulong)uVar10 * 8) = *(undefined8 *)(param_4 + uVar8 * 8);
            uVar10 = uVar10 + 1;
          }
          else {
            local_80 = *puVar4;
            uStack_7c = *(undefined4 *)(param_3 + uVar8 * 0x10 + 8);
            uVar9 = 0;
            do {
              uVar7 = FUN_019bb398(uVar19,&local_80,param_1 + (ulong)uVar9 * 8,
                                   param_1 + (ulong)(uVar9 + 1) * 8,param_1 + (ulong)(uVar9 + 2) * 8
                                  );
              if ((uVar7 & 1) != 0) goto LAB_00d7ffc0;
              uVar9 = uVar9 + 3;
            } while (uVar9 < *(uint *)(param_1 + 0x180));
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != param_5);
      goto LAB_00d7ffe4;
    }
  }
  else if (param_5 != 0) {
    fVar11 = *(float *)(param_1 + 0x184);
    uVar8 = 0;
    uVar10 = 0;
    do {
      fVar12 = *(float *)(param_3 + uVar8 * 0x10);
      if (fVar11 <= fVar12) {
        lVar3 = param_3 + uVar8 * 0x10;
        fVar14 = *(float *)(lVar3 + 4);
        if ((((*(float *)(param_1 + 0x188) <= fVar14) &&
             (fVar13 = *(float *)(lVar3 + 8), *(float *)(param_1 + 0x18c) <= fVar13)) &&
            (fVar12 <= *(float *)(param_1 + 400))) &&
           ((fVar14 <= *(float *)(param_1 + 0x194) && (fVar13 <= *(float *)(param_1 + 0x198))))) {
          if (*(uint *)(param_1 + 0x180) == 0) {
LAB_00d7ff14:
            *(undefined8 *)(param_2 + (ulong)uVar10 * 8) = *(undefined8 *)(param_4 + uVar8 * 8);
            uVar10 = uVar10 + 1;
          }
          else {
            uVar9 = 0;
            do {
              pfVar1 = (float *)(param_1 + (ulong)uVar9 * 8);
              pfVar2 = (float *)(param_1 + (ulong)(uVar9 + 1) * 8);
              fVar15 = *pfVar1;
              fVar14 = pfVar1[1];
              fVar18 = *pfVar2;
              fVar20 = pfVar2[1];
              pfVar1 = (float *)(param_1 + (ulong)(uVar9 + 2) * 8);
              fVar16 = *pfVar1;
              fVar17 = pfVar1[1];
              bVar6 = (fVar12 - fVar16) * (fVar20 - fVar17) - (fVar18 - fVar16) * (fVar13 - fVar17)
                      < 0.0;
              if (((fVar12 - fVar18) * (fVar14 - fVar20) - (fVar13 - fVar20) * (fVar15 - fVar18) <
                   0.0 == bVar6) &&
                 (bVar6 == (fVar12 - fVar15) * (fVar17 - fVar14) -
                           (fVar13 - fVar14) * (fVar16 - fVar15) < 0.0)) goto LAB_00d7ff14;
              uVar9 = uVar9 + 3;
            } while (uVar9 < *(uint *)(param_1 + 0x180));
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != param_5);
    goto LAB_00d7ffe4;
  }
  uVar10 = 0;
LAB_00d7ffe4:
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

