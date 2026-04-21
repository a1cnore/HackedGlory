// functions/00dc9 — 7 functions
#include "libGameKindred.h"




void FUN_00dc9344(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined8 local_68;
  float local_60;
  float local_58;
  float fStack_54;
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  fVar3 = (float)FUN_00d51820();
  uVar2 = FUN_00d5048c(param_4);
  FUN_00d55794(uVar2,&local_58,0);
  fVar3 = fVar3 - local_58;
  param_2 = param_2 - fStack_54;
  if (((0.01 <= ABS(fVar3)) || (0.01 <= ABS(param_2))) || (0.01 <= ABS(param_3 - local_50))) {
    local_68 = CONCAT44(param_2,fVar3);
    local_60 = param_3 - local_50;
  }
  else {
    uVar2 = FUN_00d5048c(param_4);
    FUN_00d557c4(uVar2,&local_68,&DAT_03218f68);
    fVar3 = (float)local_68;
    param_2 = local_68._4_4_;
  }
  fVar4 = fVar3 * fVar3 + param_2 * param_2 + local_60 * local_60;
  fVar3 = SQRT(fVar4);
  if (NAN(fVar3)) {
    fVar3 = sqrtf(fVar4);
  }
  local_60 = (local_60 / fVar3) * 1.2;
  fVar4 = ((float)local_68 / fVar3) * 1.2;
  fVar3 = (*(float *)((ulong)&local_68 | 4) / fVar3) * 1.2;
  local_68 = CONCAT44(fVar3,fVar4);
  *(float *)(param_7 + 1) = local_60 + local_50;
  *param_7 = CONCAT44(fVar3 + fStack_54,fVar4 + local_58);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00dc94c0(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,float *param_7)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float __x;
  float local_68;
  float local_64;
  float local_60;
  float local_58;
  float fStack_54;
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  fVar3 = (float)FUN_00d51820();
  uVar2 = FUN_00d5048c(param_4);
  FUN_00d55794(uVar2,&local_58,0);
  if (((0.01 <= ABS(fVar3 - local_58)) || (0.01 <= ABS(param_2 - fStack_54))) ||
     (0.01 <= ABS(param_3 - local_50))) {
    local_60 = param_3 - local_50;
    local_68 = fVar3 - local_58;
    local_64 = param_2 - fStack_54;
  }
  else {
    uVar2 = FUN_00d5048c(param_4);
    FUN_00d557c4(uVar2,&local_68,&DAT_03218f68);
  }
  __x = local_68 * local_68 + local_64 * local_64 + local_60 * local_60;
  fVar3 = SQRT(__x);
  if (NAN(fVar3)) {
    fVar3 = sqrtf(__x);
  }
  local_68 = local_68 / fVar3;
  local_64 = local_64 / fVar3;
  local_60 = local_60 / fVar3;
  fVar3 = (float)FUN_00d50cc8(param_4);
  local_68 = fVar3 * local_68;
  local_64 = fVar3 * local_64;
  local_60 = fVar3 * local_60;
  *param_7 = local_68 + local_58;
  param_7[1] = local_64 + fStack_54;
  param_7[2] = local_60 + local_50;
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00dc9644(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [16];
  undefined4 local_98 [2];
  undefined4 local_90;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_a8);
  uVar2 = FUN_00cfb05c(auStack_a8);
  FUN_00cf7b3c(uVar2,1);
  lVar3 = FUN_00cfa6cc(auStack_a8);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  plVar4 = (long *)FUN_00cfaa2c(auStack_a8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"Ability02");
  (**(code **)(*plVar4 + 0x18))(plVar4,"AttackToIdle");
  uVar5 = FUN_00cfab94(auStack_a8);
  lVar3 = FUN_00d09310();
  uVar2 = FUN_00d096e0(*(undefined4 *)(lVar3 + 300));
  FUN_00cf4164(0x3f800000,uVar2,uVar5,"sound_joule_ablity2",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_a8);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,0);
  plVar4 = (long *)FUN_00cfab04(auStack_a8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))();
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Joule_B");
  plVar4 = (long *)FUN_00cf9afc(auStack_a8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Joule_Thunderstrike_02beb9d0);
  local_98[0] = 0x40000000;
  local_90 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_98);
  FUN_00d4d9e8(local_98);
  FUN_00d4daf4(local_98,0,1,0,0);
  FUN_00d4dabc(local_98,0x40000);
  uVar2 = FUN_00cfaf3c(auStack_a8);
  FUN_00cf5ac8(0x3fcccccd,uVar2,FUN_00dc9344,FUN_00dc94c0);
  FUN_00cf5ae0(uVar2,local_98);
  plVar4 = (long *)FUN_00cfa09c(auStack_a8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  (**(code **)(*plVar4 + 0x38))(plVar4,"Damage",1);
  FUN_00cf9eec(auStack_a8);
  FUN_00cfacb4(auStack_a8);
  FUN_00cf50b0(0x3f000000);
  uVar2 = FUN_00cfa294(auStack_a8);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar2,0);
  lVar3 = FUN_00cfa6cc(auStack_a8);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  FUN_00cfb5c4(auStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dc988c(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined8 local_68;
  float local_60;
  float local_58;
  float fStack_54;
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  fVar3 = (float)FUN_00d51820();
  uVar2 = FUN_00d5048c(param_4);
  FUN_00d55794(uVar2,&local_58,0);
  fVar3 = fVar3 - local_58;
  param_2 = param_2 - fStack_54;
  if (((0.01 <= ABS(fVar3)) || (0.01 <= ABS(param_2))) || (0.01 <= ABS(param_3 - local_50))) {
    local_68 = CONCAT44(param_2,fVar3);
    local_60 = param_3 - local_50;
  }
  else {
    uVar2 = FUN_00d5048c(param_4);
    FUN_00d557c4(uVar2,&local_68,&DAT_03218f68);
    fVar3 = (float)local_68;
    param_2 = local_68._4_4_;
  }
  fVar4 = fVar3 * fVar3 + param_2 * param_2 + local_60 * local_60;
  fVar3 = SQRT(fVar4);
  if (NAN(fVar3)) {
    fVar3 = sqrtf(fVar4);
  }
  local_60 = (local_60 / fVar3) * 1.2;
  fVar4 = ((float)local_68 / fVar3) * 1.2;
  fVar3 = (*(float *)((ulong)&local_68 | 4) / fVar3) * 1.2;
  local_68 = CONCAT44(fVar3,fVar4);
  *(float *)(param_7 + 1) = local_60 + local_50;
  *param_7 = CONCAT44(fVar3 + fStack_54,fVar4 + local_58);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00dc9a08(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,float *param_7)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float __x;
  float local_68;
  float local_64;
  float local_60;
  float local_58;
  float fStack_54;
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  fVar3 = (float)FUN_00d51820();
  uVar2 = FUN_00d5048c(param_4);
  FUN_00d55794(uVar2,&local_58,0);
  if (((0.01 <= ABS(fVar3 - local_58)) || (0.01 <= ABS(param_2 - fStack_54))) ||
     (0.01 <= ABS(param_3 - local_50))) {
    local_60 = param_3 - local_50;
    local_68 = fVar3 - local_58;
    local_64 = param_2 - fStack_54;
  }
  else {
    uVar2 = FUN_00d5048c(param_4);
    FUN_00d557c4(uVar2,&local_68,&DAT_03218f68);
  }
  __x = local_68 * local_68 + local_64 * local_64 + local_60 * local_60;
  fVar3 = SQRT(__x);
  if (NAN(fVar3)) {
    fVar3 = sqrtf(__x);
  }
  local_68 = local_68 / fVar3;
  local_64 = local_64 / fVar3;
  local_60 = local_60 / fVar3;
  fVar3 = (float)FUN_00d50cc8(param_4);
  local_68 = fVar3 * local_68;
  local_64 = fVar3 * local_64;
  local_60 = fVar3 * local_60;
  *param_7 = local_68 + local_58;
  param_7[1] = local_64 + fStack_54;
  param_7[2] = local_60 + local_50;
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00dc9b8c(undefined8 param_1,long param_2,float *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  
  uVar1 = FUN_00d5048c();
  fVar4 = (float)FUN_00d59f54(uVar1,2,0,0x19,0);
  *param_3 = fVar4 * 0.25;
  if ((*(byte *)(param_2 + 0x2f5) >> 4 & 1) != 0) {
    uVar1 = FUN_00d5048c(param_1);
    fVar4 = (float)FUN_00d59f54(uVar1,2,6,0x19,0);
    *param_3 = fVar4 * *param_3;
  }
  *param_4 = 2;
  *param_5 = 1;
  lVar2 = FUN_00d5048c(param_1);
  uVar3 = FUN_00d44008(*(undefined4 *)(lVar2 + 0x260),PTR_s_Buff_Joule_Talent_BackupButton_02bf1fb0)
  ;
  if ((uVar3 & 1) != 0) {
    uVar1 = FUN_00d5048c(param_1);
    fVar4 = (float)FUN_00d5a3d0(uVar1,DAT_0320e9e0,3,9);
    *param_3 = fVar4 * *param_3;
  }
  return;
}




void FUN_00dc9c78(void)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined1 auStack_110 [16];
  undefined4 local_100 [2];
  undefined4 local_f8;
  undefined4 local_f0 [2];
  undefined4 local_e8;
  undefined1 auStack_e0 [96];
  long local_80;
  
  lVar1 = tpidr_el0;
  local_80 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_110);
  lVar5 = FUN_00cfa6cc(auStack_110);
  *(undefined1 *)(lVar5 + 0x10) = 1;
  FUN_00cfb05c(auStack_110);
  FUN_00cf98bc(auStack_110);
  uVar6 = FUN_00cf9ab4(auStack_110);
  FUN_00cf44e8(0x400ccccd,uVar6,PTR_s_Buff_GloballyVisible_02bebad8,1,0);
  FUN_00cf9eec(auStack_110);
  uVar6 = FUN_00cfa9e4(auStack_110);
  FUN_00cf3048(uVar6,"Ability03",0,1,0,"AttackToIdle");
  uVar6 = FUN_00cfab94(auStack_110);
  FUN_00cf4164(0x3f800000,0x3f000000,uVar6,"sound_joule_ablity3",0,0,0xffffffff,0,1);
  uVar6 = FUN_00cfaa74(auStack_110);
  FUN_00cf32cc(0,uVar6,"Effect_Joule_ProtonCannon_Charge",1,0,1,0,0);
  uVar6 = FUN_00cfaa74(auStack_110);
  uVar2 = FUN_00cf32cc(0,uVar6,"Effect_Joule_Laser_Target",1,0,1,1,0);
  FUN_00cf34b8(0,uVar6,FUN_00cfbcdc);
  uVar6 = FUN_00cfa294(auStack_110);
  FUN_00cf7478(0x3f19999a);
  FUN_00cf7578(uVar6,0);
  uVar6 = FUN_00cfaa74(auStack_110);
  uVar3 = FUN_00cf32cc(0xbf800000,uVar6,"Effect_Joule_Beam_Secondary",1,0,1,1,0);
  uVar6 = FUN_00cfaa74(auStack_110);
  uVar4 = FUN_00cf32cc(0xbf800000,uVar6,"Effect_Joule_ProtonCannon_Beam",1,0,1,1,0);
  uVar6 = FUN_00cfb29c(auStack_110);
  FUN_00cf3f74(uVar6,uVar2,1);
  FUN_00d4d9e8(auStack_e0);
  FUN_00d4dabc(auStack_e0,0x40000);
  FUN_00d4daf4(auStack_e0,0,1,0,0);
  plVar7 = (long *)FUN_00cfa12c(auStack_110);
  local_f0[0] = 0x3f99999a;
  local_e8 = 1;
  plVar7 = (long *)(**(code **)(*plVar7 + 0x70))(plVar7,local_f0);
  local_100[0] = 0x4019999a;
  local_f8 = 1;
  (**(code **)(*plVar7 + 0xa0))(plVar7,local_100);
  uVar6 = FUN_00cfaf3c(auStack_110);
  FUN_00cf5ac8(0x3fe00000,uVar6,FUN_00dc988c,FUN_00dc9a08);
  FUN_00cf5ae0(uVar6,auStack_e0);
  uVar6 = FUN_00cfa00c(auStack_110);
  FUN_00cf6bb0(uVar6,FUN_00dc9b8c);
  FUN_00cf9eec(auStack_110);
  uVar6 = FUN_00cfa294(auStack_110);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar6,0);
  plVar7 = (long *)FUN_00cfa12c(auStack_110);
  local_f0[0] = 0x3f866666;
  local_e8 = 1;
  plVar7 = (long *)(**(code **)(*plVar7 + 0x70))(plVar7,local_f0);
  local_100[0] = 0x40066666;
  local_f8 = 1;
  (**(code **)(*plVar7 + 0xa0))(plVar7,local_100);
  uVar6 = FUN_00cfaf3c(auStack_110);
  FUN_00cf5ac8(0x3fe00000,uVar6,FUN_00dc988c,FUN_00dc9a08);
  FUN_00cf5ae0(uVar6,auStack_e0);
  uVar6 = FUN_00cfa00c(auStack_110);
  FUN_00cf6bb0(uVar6,FUN_00dc9b8c);
  FUN_00cf9eec(auStack_110);
  uVar6 = FUN_00cfa294(auStack_110);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar6,0);
  plVar7 = (long *)FUN_00cfa12c(auStack_110);
  local_f0[0] = 0x3f066666;
  local_e8 = 1;
  plVar7 = (long *)(**(code **)(*plVar7 + 0x70))(plVar7,local_f0);
  local_100[0] = 0x3f866666;
  local_f8 = 1;
  (**(code **)(*plVar7 + 0xa0))(plVar7,local_100);
  uVar6 = FUN_00cfaf3c(auStack_110);
  FUN_00cf5ac8(0x3fe00000,uVar6,FUN_00dc988c,FUN_00dc9a08);
  FUN_00cf5ae0(uVar6,auStack_e0);
  uVar6 = FUN_00cfa00c(auStack_110);
  FUN_00cf6bb0(uVar6,FUN_00dc9b8c);
  FUN_00cf9eec(auStack_110);
  uVar6 = FUN_00cfa294(auStack_110);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar6,0);
  plVar7 = (long *)FUN_00cfa12c(auStack_110);
  local_f0[0] = 0x3ecccccd;
  local_e8 = 1;
  plVar7 = (long *)(**(code **)(*plVar7 + 0x70))(plVar7,local_f0);
  local_100[0] = 0x3f4ccccd;
  local_f8 = 1;
  (**(code **)(*plVar7 + 0xa0))(plVar7,local_100);
  uVar6 = FUN_00cfaf3c(auStack_110);
  FUN_00cf5ac8(0x3fe00000,uVar6,FUN_00dc988c,FUN_00dc9a08);
  FUN_00cf5ae0(uVar6,auStack_e0);
  uVar6 = FUN_00cfa00c(auStack_110);
  FUN_00cf6bb0(uVar6,FUN_00dc9b8c);
  FUN_00cf9eec(auStack_110);
  uVar6 = FUN_00cfa294(auStack_110);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar6,0);
  plVar7 = (long *)FUN_00cfa12c(auStack_110);
  local_f0[0] = 0x3d4ccccd;
  local_e8 = 1;
  plVar7 = (long *)(**(code **)(*plVar7 + 0x70))(plVar7,local_f0);
  local_100[0] = 0x3dcccccd;
  local_f8 = 1;
  (**(code **)(*plVar7 + 0xa0))(plVar7,local_100);
  uVar6 = FUN_00cfaf3c(auStack_110);
  FUN_00cf5ac8(0x3fe00000,uVar6,FUN_00dc988c,FUN_00dc9a08);
  FUN_00cf5ae0(uVar6,auStack_e0);
  uVar6 = FUN_00cfa00c(auStack_110);
  FUN_00cf6bb0(uVar6,FUN_00dc9b8c);
  FUN_00cf9eec(auStack_110);
  uVar6 = FUN_00cfa294(auStack_110);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar6,0);
  uVar6 = FUN_00cfaf3c(auStack_110);
  FUN_00cf5ac8(0x3fe00000,uVar6,FUN_00dc988c,FUN_00dc9a08);
  FUN_00cf5ae0(uVar6,auStack_e0);
  uVar6 = FUN_00cfa00c(auStack_110);
  FUN_00cf6bb0(uVar6,FUN_00dc9b8c);
  FUN_00cf9eec(auStack_110);
  uVar6 = FUN_00cfa294(auStack_110);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar6,0);
  FUN_00cfb56c(auStack_110);
  uVar6 = FUN_00cfb29c(auStack_110);
  FUN_00cf3f74(uVar6,uVar4,1);
  uVar6 = FUN_00cfb29c(auStack_110);
  FUN_00cf3f74(uVar6,uVar3,0);
  lVar5 = FUN_00cfa6cc(auStack_110);
  *(undefined1 *)(lVar5 + 0x10) = 0;
  FUN_00cfb0a4(auStack_110);
  FUN_00cfb5c4(auStack_110);
  if (*(long *)(lVar1 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

