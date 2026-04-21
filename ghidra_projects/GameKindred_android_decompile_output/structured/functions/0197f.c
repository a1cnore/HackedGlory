// functions/0197f — 13 functions
#include "libGameKindred.h"




void FUN_0197f034(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = *param_1;
  local_30 = *(undefined4 *)(param_1 + 1);
  local_48 = param_1[2];
  local_40 = *(undefined4 *)(param_1 + 3);
  local_58 = param_1[4];
  local_50 = *(undefined4 *)(param_1 + 5);
  local_68 = param_1[6];
  local_60 = *(undefined4 *)(param_1 + 7);
  FUN_0197eec4(&local_38,&local_48,&local_58,&local_68,param_2,param_3,param_4,param_5);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0197f0d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 float *param_5,float *param_6,float *param_7,float *param_8,undefined4 *param_9,
                 float *param_10)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_88;
  float fStack_84;
  float local_80;
  float local_78;
  float fStack_74;
  float local_70;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_0197f034();
  uVar5 = param_1[6];
  uVar8 = *param_1;
  fVar12 = *(float *)(param_1 + 1);
  uVar9 = param_1[2];
  uVar10 = param_1[4];
  uVar11 = param_1[6];
  fVar13 = *(float *)(param_1 + 3);
  fVar14 = *(float *)(param_1 + 5);
  fVar15 = *(float *)(param_1 + 7);
  param_4[7] = param_1[7];
  param_4[6] = uVar5;
  fVar16 = (local_88 - local_78) * 0.5;
  fVar4 = local_78 + fVar16;
  uVar5 = param_1[4];
  fVar7 = (fStack_84 - fStack_74) * 0.5;
  fVar3 = fStack_74 + fVar7;
  param_4[5] = param_1[5];
  param_4[4] = uVar5;
  uVar5 = param_1[2];
  param_4[3] = param_1[3];
  param_4[2] = uVar5;
  uVar6 = param_1[1];
  uVar5 = *param_1;
  param_4[6] = CONCAT44((float)((ulong)uVar11 >> 0x20) +
                        (float)((ulong)uVar8 >> 0x20) * fVar4 +
                        (float)((ulong)uVar9 >> 0x20) * fVar3 +
                        (float)((ulong)uVar10 >> 0x20) * local_80,
                        (float)uVar11 +
                        (float)uVar8 * fVar4 + (float)uVar9 * fVar3 + (float)uVar10 * local_80);
  *(float *)(param_4 + 7) = fVar15 + fVar4 * fVar12 + fVar3 * fVar13 + fVar14 * local_80;
  param_4[1] = uVar6;
  *param_4 = uVar5;
  *param_5 = (local_88 - local_78) * -0.5;
  *param_6 = fVar16;
  *param_7 = fVar7;
  *param_8 = (fStack_84 - fStack_74) * -0.5;
  *param_9 = 0;
  *param_10 = local_80 - local_70;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0197f22c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  
  if ((DAT_03214308 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_03214308);
    if (iVar1 != 0) {
      DAT_032142f8 = 0xbf8000003f800000;
      DAT_03214300 = -1.0;
      __cxa_guard_release(&DAT_03214308);
    }
  }
  if ((DAT_03214320 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_03214320);
    if (iVar1 != 0) {
      DAT_03214310 = NEON_fmov(0xbf800000,4);
      DAT_03214318 = -1.0;
      __cxa_guard_release(&DAT_03214320);
    }
  }
  if ((DAT_03214338 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_03214338);
    if (iVar1 != 0) {
      DAT_03214328 = NEON_fmov(0x3f800000,4);
      DAT_03214330 = -1.0;
      __cxa_guard_release(&DAT_03214338);
    }
  }
  if ((DAT_03214350 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_03214350);
    if (iVar1 != 0) {
      DAT_03214340 = 0x3f800000bf800000;
      DAT_03214348 = -1.0;
      __cxa_guard_release(&DAT_03214350);
    }
  }
  if ((DAT_03214368 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_03214368);
    if (iVar1 != 0) {
      DAT_03214358 = 0xbf8000003f800000;
      DAT_03214360 = 1.0;
      __cxa_guard_release(&DAT_03214368);
    }
  }
  if ((DAT_03214380 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_03214380);
    if (iVar1 != 0) {
      DAT_03214370 = NEON_fmov(0xbf800000,4);
      DAT_03214378 = 1.0;
      __cxa_guard_release(&DAT_03214380);
    }
  }
  if ((DAT_03214398 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_03214398);
    if (iVar1 != 0) {
      DAT_03214388 = NEON_fmov(0x3f800000,4);
      DAT_03214390 = 1.0;
      __cxa_guard_release(&DAT_03214398);
    }
  }
  if ((DAT_032143b0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_032143b0);
    if (iVar1 != 0) {
      DAT_032143a0 = 0x3f800000bf800000;
      DAT_032143a8 = 1.0;
      __cxa_guard_release(&DAT_032143b0);
    }
  }
  fVar2 = (float)*param_1 * (float)DAT_032142f8;
  fVar3 = (float)((ulong)*param_1 >> 0x20) * (float)DAT_032142f8;
  fVar4 = (float)param_1[2] * DAT_032142f8._4_4_;
  fVar5 = (float)((ulong)param_1[2] >> 0x20) * DAT_032142f8._4_4_;
  uVar8 = param_1[6];
  fVar6 = (float)param_1[4] * DAT_03214300;
  fVar7 = (float)((ulong)param_1[4] >> 0x20) * DAT_03214300;
  *(float *)(param_2 + 1) =
       *(float *)(param_1 + 7) +
       (float)DAT_032142f8 * *(float *)(param_1 + 1) + DAT_032142f8._4_4_ * *(float *)(param_1 + 3)
       + DAT_03214300 * *(float *)(param_1 + 5);
  *param_2 = CONCAT44((float)((ulong)uVar8 >> 0x20) + fVar3 + fVar5 + fVar7,
                      (float)uVar8 + fVar2 + fVar4 + fVar6);
  fVar2 = (float)*param_1 * (float)DAT_03214310;
  fVar3 = (float)((ulong)*param_1 >> 0x20) * (float)DAT_03214310;
  fVar4 = (float)param_1[2] * DAT_03214310._4_4_;
  fVar5 = (float)((ulong)param_1[2] >> 0x20) * DAT_03214310._4_4_;
  uVar8 = param_1[6];
  fVar6 = (float)param_1[4] * DAT_03214318;
  fVar7 = (float)((ulong)param_1[4] >> 0x20) * DAT_03214318;
  *(float *)((long)param_2 + 0x14) =
       *(float *)(param_1 + 7) +
       (float)DAT_03214310 * *(float *)(param_1 + 1) + DAT_03214310._4_4_ * *(float *)(param_1 + 3)
       + DAT_03214318 * *(float *)(param_1 + 5);
  *(ulong *)((long)param_2 + 0xc) =
       CONCAT44((float)((ulong)uVar8 >> 0x20) + fVar3 + fVar5 + fVar7,
                (float)uVar8 + fVar2 + fVar4 + fVar6);
  fVar2 = (float)*param_1 * (float)DAT_03214328;
  fVar3 = (float)((ulong)*param_1 >> 0x20) * (float)DAT_03214328;
  fVar4 = (float)param_1[2] * DAT_03214328._4_4_;
  fVar5 = (float)((ulong)param_1[2] >> 0x20) * DAT_03214328._4_4_;
  uVar8 = param_1[6];
  fVar6 = (float)param_1[4] * DAT_03214330;
  fVar7 = (float)((ulong)param_1[4] >> 0x20) * DAT_03214330;
  *(float *)(param_2 + 4) =
       *(float *)(param_1 + 7) +
       (float)DAT_03214328 * *(float *)(param_1 + 1) + DAT_03214328._4_4_ * *(float *)(param_1 + 3)
       + DAT_03214330 * *(float *)(param_1 + 5);
  param_2[3] = CONCAT44((float)((ulong)uVar8 >> 0x20) + fVar3 + fVar5 + fVar7,
                        (float)uVar8 + fVar2 + fVar4 + fVar6);
  fVar2 = (float)*param_1 * (float)DAT_03214340;
  fVar3 = (float)((ulong)*param_1 >> 0x20) * (float)DAT_03214340;
  fVar4 = (float)param_1[2] * DAT_03214340._4_4_;
  fVar5 = (float)((ulong)param_1[2] >> 0x20) * DAT_03214340._4_4_;
  uVar8 = param_1[6];
  fVar6 = (float)param_1[4] * DAT_03214348;
  fVar7 = (float)((ulong)param_1[4] >> 0x20) * DAT_03214348;
  *(float *)((long)param_2 + 0x2c) =
       *(float *)(param_1 + 7) +
       (float)DAT_03214340 * *(float *)(param_1 + 1) + DAT_03214340._4_4_ * *(float *)(param_1 + 3)
       + DAT_03214348 * *(float *)(param_1 + 5);
  *(ulong *)((long)param_2 + 0x24) =
       CONCAT44((float)((ulong)uVar8 >> 0x20) + fVar3 + fVar5 + fVar7,
                (float)uVar8 + fVar2 + fVar4 + fVar6);
  fVar2 = (float)*param_1 * (float)DAT_03214358;
  fVar3 = (float)((ulong)*param_1 >> 0x20) * (float)DAT_03214358;
  fVar4 = (float)param_1[2] * DAT_03214358._4_4_;
  fVar5 = (float)((ulong)param_1[2] >> 0x20) * DAT_03214358._4_4_;
  uVar8 = param_1[6];
  fVar6 = (float)param_1[4] * DAT_03214360;
  fVar7 = (float)((ulong)param_1[4] >> 0x20) * DAT_03214360;
  *(float *)(param_2 + 7) =
       *(float *)(param_1 + 7) +
       (float)DAT_03214358 * *(float *)(param_1 + 1) + DAT_03214358._4_4_ * *(float *)(param_1 + 3)
       + DAT_03214360 * *(float *)(param_1 + 5);
  param_2[6] = CONCAT44((float)((ulong)uVar8 >> 0x20) + fVar3 + fVar5 + fVar7,
                        (float)uVar8 + fVar2 + fVar4 + fVar6);
  fVar2 = (float)*param_1 * (float)DAT_03214370;
  fVar3 = (float)((ulong)*param_1 >> 0x20) * (float)DAT_03214370;
  fVar4 = (float)param_1[2] * DAT_03214370._4_4_;
  fVar5 = (float)((ulong)param_1[2] >> 0x20) * DAT_03214370._4_4_;
  uVar8 = param_1[6];
  fVar6 = (float)param_1[4] * DAT_03214378;
  fVar7 = (float)((ulong)param_1[4] >> 0x20) * DAT_03214378;
  *(float *)((long)param_2 + 0x44) =
       *(float *)(param_1 + 7) +
       (float)DAT_03214370 * *(float *)(param_1 + 1) + DAT_03214370._4_4_ * *(float *)(param_1 + 3)
       + DAT_03214378 * *(float *)(param_1 + 5);
  *(ulong *)((long)param_2 + 0x3c) =
       CONCAT44((float)((ulong)uVar8 >> 0x20) + fVar3 + fVar5 + fVar7,
                (float)uVar8 + fVar2 + fVar4 + fVar6);
  fVar2 = (float)*param_1 * (float)DAT_03214388;
  fVar3 = (float)((ulong)*param_1 >> 0x20) * (float)DAT_03214388;
  fVar4 = (float)param_1[2] * DAT_03214388._4_4_;
  fVar5 = (float)((ulong)param_1[2] >> 0x20) * DAT_03214388._4_4_;
  uVar8 = param_1[6];
  fVar6 = (float)param_1[4] * DAT_03214390;
  fVar7 = (float)((ulong)param_1[4] >> 0x20) * DAT_03214390;
  *(float *)(param_2 + 10) =
       *(float *)(param_1 + 7) +
       (float)DAT_03214388 * *(float *)(param_1 + 1) + DAT_03214388._4_4_ * *(float *)(param_1 + 3)
       + DAT_03214390 * *(float *)(param_1 + 5);
  param_2[9] = CONCAT44((float)((ulong)uVar8 >> 0x20) + fVar3 + fVar5 + fVar7,
                        (float)uVar8 + fVar2 + fVar4 + fVar6);
  fVar2 = (float)*param_1 * (float)DAT_032143a0;
  fVar3 = (float)((ulong)*param_1 >> 0x20) * (float)DAT_032143a0;
  fVar4 = (float)param_1[2] * DAT_032143a0._4_4_;
  fVar5 = (float)((ulong)param_1[2] >> 0x20) * DAT_032143a0._4_4_;
  uVar8 = param_1[6];
  fVar6 = (float)param_1[4] * DAT_032143a8;
  fVar7 = (float)((ulong)param_1[4] >> 0x20) * DAT_032143a8;
  *(float *)((long)param_2 + 0x5c) =
       *(float *)(param_1 + 7) +
       (float)DAT_032143a0 * *(float *)(param_1 + 1) + DAT_032143a0._4_4_ * *(float *)(param_1 + 3)
       + DAT_032143a8 * *(float *)(param_1 + 5);
  *(ulong *)((long)param_2 + 0x54) =
       CONCAT44((float)((ulong)uVar8 >> 0x20) + fVar3 + fVar5 + fVar7,
                (float)uVar8 + fVar2 + fVar4 + fVar6);
  return;
}




void FUN_0197f874(long param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  
  FUN_0197fe60();
  lVar1 = param_1 + 0x140;
  *(undefined4 *)(param_1 + 0x138) = 0;
  FUN_0199d248(lVar1);
  lVar2 = param_1 + 0x160;
  FUN_0199fb64(lVar2);
  param_1 = param_1 + 0x178;
  FUN_0199fb64(param_1);
  FUN_0199fc70(lVar2,4);
  iVar3 = FUN_0199cf54();
  if (iVar3 == 1) {
    uVar4 = 0x15;
  }
  else {
    uVar4 = 5;
  }
  FUN_0199fccc(lVar2,0,param_2,param_2,1,uVar4,0);
  FUN_0199fc70(param_1,4);
  FUN_0199fccc(param_1,0,param_2,param_2,1,0xf,0);
  FUN_0199d318(lVar1,param_2,param_2);
  FUN_0199d4b4(lVar1,0,param_1,1,0);
  FUN_0199d50c(lVar1,lVar2,1,0);
  return;
}




long FUN_0197f96c(long param_1,undefined4 *param_2)

{
  if (*(int *)(param_1 + 0x138) == 0) {
    *param_2 = 0;
    *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
    FUN_0197fee0(param_1,param_1 + 0x140,param_1 + 0x160);
  }
  else {
    param_1 = 0;
    *param_2 = 0xffffffff;
  }
  return param_1;
}




void FUN_0197f9c4(long param_1)

{
  *(undefined4 *)(param_1 + 0x138) = 0;
  return;
}




void FUN_0197f9cc(long param_1,uint param_2)

{
  if ((-1 < (int)param_2) && (param_2 < *(uint *)(param_1 + 0x138))) {
    FUN_0197ffd4(param_1 + (long)(int)param_2 * 0x138);
    return;
  }
  return;
}




void FUN_0197f9f0(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,undefined4 param_8,undefined8 param_9,
                 undefined8 param_10,undefined8 param_11,int param_12,undefined8 param_13)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  float local_180;
  float fStack_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_16c;
  undefined1 auStack_168 [144];
  float local_d8 [6];
  undefined8 local_c0;
  undefined8 uStack_b8;
  float local_b0;
  undefined4 local_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  undefined4 local_9c;
  
  lVar1 = tpidr_el0;
  lVar8 = *(long *)(lVar1 + 0x28);
  local_16c = 0xffffffff;
  uVar4 = FUN_019800c4();
  lVar5 = FUN_0197f96c(uVar4,&local_16c);
  if (lVar5 != 0) {
    local_d8[0] = 1.0 / (param_2 - param_1);
    local_d8[5] = 1.0 / (param_3 - param_4);
    local_b0 = 1.0 / (param_6 - param_5);
    local_a8 = -((param_1 + param_2) * local_d8[0]);
    fStack_a4 = -((param_3 + param_4) * local_d8[5]);
    local_a0 = -((param_5 + param_6) * local_b0);
    local_d8[0] = local_d8[0] + local_d8[0];
    local_d8[5] = local_d8[5] + local_d8[5];
    local_b0 = local_b0 * -2.0;
    local_d8[3] = 0.0;
    local_d8[4] = 0.0;
    local_d8[1] = 0.0;
    local_d8[2] = 0.0;
    uStack_b8 = 0;
    local_c0 = 0;
    local_ac = 0;
    local_9c = 0x3f800000;
    uVar2 = FUN_01980088(lVar5);
    uVar3 = FUN_01980090(lVar5);
    fStack_17c = param_7 / (float)uVar3;
    local_174 = 0;
    local_180 = param_7 / (float)uVar2;
    local_178 = param_8;
    FUN_0197ff60(lVar5,param_13,local_d8,&local_180);
    if (param_12 == 0) {
      uVar4 = FUN_01980098(lVar5);
      uVar6 = FUN_019800a0(lVar5);
      FUN_0199cd4c(auStack_168,uVar4,uVar6);
      FUN_0199cee8(0,0x3f800000,0,0,auStack_168);
      FUN_0199cf00(0x3f800000,auStack_168);
      FUN_0199c960(param_10,auStack_168,0);
    }
    else {
      uVar4 = FUN_01997b18(1);
      uVar6 = FUN_01980098(lVar5);
      uVar7 = FUN_019800a0(lVar5);
      FUN_0199b72c(auStack_168,"Shadow task - ShadowGeneratorDirPCF",param_11,param_12,uVar4,uVar6,
                   uVar7,1);
      FUN_0199cee8(0,0x3f800000,0,0,auStack_168);
      FUN_0199cf00(0x3f800000,auStack_168);
      FUN_0199c960(param_10,auStack_168,0);
      FUN_0199b7a8(auStack_168);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_16c);
}




void FUN_0197fc5c(float param_1,float param_2,float param_3,float param_4,undefined4 param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined4 param_9,
                 undefined8 param_10)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  float local_170;
  float fStack_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_15c;
  undefined1 auStack_158 [144];
  float local_c8 [6];
  undefined8 local_b0;
  undefined8 uStack_a8;
  float local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  float local_90;
  undefined4 local_8c;
  
  lVar1 = tpidr_el0;
  lVar8 = *(long *)(lVar1 + 0x28);
  local_15c = 0xffffffff;
  uVar4 = FUN_019800c4();
  lVar5 = FUN_0197f96c(uVar4,&local_15c);
  if (lVar5 != 0) {
    fVar9 = (float)FUN_01980080(lVar5);
    local_c8[5] = tanf(param_1 * -0.017453292 * 0.5 + 1.5707964);
    local_c8[0] = local_c8[5] / fVar9;
    local_a0 = (param_2 + param_3) / (param_2 - param_3);
    local_90 = ((param_2 + param_2) * param_3) / (param_2 - param_3);
    local_94 = 0;
    local_c8[3] = 0.0;
    local_c8[4] = 0.0;
    local_c8[1] = 0.0;
    local_c8[2] = 0.0;
    uStack_a8 = 0;
    local_b0 = 0;
    local_9c = 0xbf800000;
    local_8c = 0;
    uVar2 = FUN_01980088(lVar5);
    uVar3 = FUN_01980090(lVar5);
    fStack_16c = param_4 / (float)uVar3;
    local_164 = 0;
    local_170 = param_4 / (float)uVar2;
    local_168 = param_5;
    FUN_0197ff60(lVar5,param_10,local_c8,&local_170);
    uVar4 = FUN_01997b18(1);
    uVar6 = FUN_01980098(lVar5);
    uVar7 = FUN_019800a0(lVar5);
    FUN_0199b72c(auStack_158,"Shadow task - ShadowGeneratorSpotPCF",param_8,param_9,uVar4,uVar6,
                 uVar7,1);
    FUN_0199cee8(0,0x3f800000,0,0,auStack_158);
    FUN_0199cf00(0x3f800000,auStack_158);
    FUN_0199c960(param_7,auStack_158,0);
    FUN_0199b7a8(auStack_158);
  }
  if (*(long *)(lVar1 + 0x28) == lVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_15c);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0197fe60(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_02bae6a8;
  FUN_0199cb3c(param_1 + 1);
  FUN_0199b368(param_1 + 6);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x24] = 0x3f80000000000000;
  param_1[0x23] = 0;
  param_1[0x22] = 0x3f800000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0x3f80000000000000;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0x3f800000;
  uVar1 = _DAT_03218ef8;
  param_1[0x26] = DAT_03218f00;
  param_1[0x25] = uVar1;
  return;
}




void FUN_0197fee0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0xd8) = param_2;
  *(long *)(param_1 + 0xe0) = param_3;
  *(undefined8 *)(param_1 + 0x120) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0x3f800000;
  uVar1 = DAT_03218fa0;
  *(undefined8 *)(param_1 + 0x130) = DAT_03218fa8;
  *(undefined8 *)(param_1 + 0x128) = uVar1;
  FUN_0199cc60(param_1 + 8);
  FUN_0199cba0(param_1 + 8,*(uint *)(param_3 + 8) & 0x3fff,*(uint *)(param_3 + 8) >> 0xe & 0x3fff);
  return;
}




void FUN_0197ff60(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2[6];
  *(undefined8 *)(param_1 + 0x70) = param_2[7];
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  uVar1 = param_2[4];
  *(undefined8 *)(param_1 + 0x60) = param_2[5];
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  uVar1 = param_2[2];
  *(undefined8 *)(param_1 + 0x50) = param_2[3];
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x40) = param_2[1];
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x80) = param_3[1];
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  uVar1 = param_3[2];
  *(undefined8 *)(param_1 + 0x90) = param_3[3];
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  uVar1 = param_3[4];
  *(undefined8 *)(param_1 + 0xa0) = param_3[5];
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  uVar1 = param_3[6];
  *(undefined8 *)(param_1 + 0xb0) = param_3[7];
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  FUN_009b3960(param_1 + 0xe8);
  uVar1 = *param_4;
  *(undefined8 *)(param_1 + 0x130) = param_4[1];
  *(undefined8 *)(param_1 + 0x128) = uVar1;
  return;
}




void FUN_0197ffd4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_01997b28();
  FUN_0199b2ec(uVar1,"Shadowing.mMap",0,param_1);
  FUN_0199b23c(uVar1,"Shadowing.mParams",0,param_1 + 0x128);
  FUN_0199b23c(uVar1,"Shadowing.mViewProjRow0",0,param_1 + 0xe8);
  FUN_0199b23c(uVar1,"Shadowing.mViewProjRow1",0,param_1 + 0xf8);
  FUN_0199b23c(uVar1,"Shadowing.mViewProjRow2",0,param_1 + 0x108);
  FUN_0199b23c(uVar1,"Shadowing.mViewProjRow3",0,param_1 + 0x118);
  return;
}

