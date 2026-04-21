// functions/00de0 — 19 functions
#include "libGameKindred.h"




void FUN_00de010c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  long lVar1;
  
  lVar1 = FUN_00d517cc();
  if (lVar1 != 0) {
    lVar1 = FUN_00d517cc(param_1);
    *param_4 = *(undefined4 *)(lVar1 + 0x260);
  }
  return;
}




void FUN_00de0144(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [16];
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_68);
  uVar2 = FUN_00cfb05c(auStack_68);
  FUN_00cf7b3c(uVar2,1);
  plVar3 = (long *)FUN_00cf9afc(auStack_68);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_SAW_Strafe_02bf0f08);
  local_58 = (code *)CONCAT44(local_58._4_4_,0x3fc00000);
  local_50 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,&local_58);
  (**(code **)(*plVar3 + 0x58))(plVar3,FUN_00de010c);
  uVar2 = FUN_00cfa9e4(auStack_68);
  FUN_00cf3048(uVar2,param_1,0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfab94(auStack_68);
  lVar4 = FUN_00d09310();
  uVar6 = FUN_00d095e4(*(undefined4 *)(lVar4 + 0xec));
  FUN_00cf4164(0x3f800000,uVar6,uVar2,"Sound_SAW_basic_shoot_01",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_SAW_basic_shoot_02");
  FUN_00cf41bc(uVar2,"Sound_SAW_basic_shoot_03");
  uVar2 = FUN_00cfaa74(auStack_68);
  FUN_00cf3358(0x3f800000,uVar2,"Effect_SAW_MuzzleFlash",0,"GunMuzzleTip_Attack",0,1,0,0);
  uVar2 = FUN_00cfaa74(auStack_68);
  FUN_00cf32cc(0x3f800000,uVar2,"Effect_SAW_Shell_Casing",0,0,1,0,0);
  FUN_00cf9eec(auStack_68);
  uVar2 = FUN_00cf9cf4(auStack_68);
  FUN_00cf2e48(uVar2,FUN_00ddfdc0);
  lVar4 = FUN_00cf9f7c(auStack_68);
  lVar5 = FUN_00cf2970(lVar4 + 0x10);
  *(code **)(lVar5 + 8) = FUN_00ddff68;
  uVar2 = FUN_00cfb17c(lVar4 + 0xb0);
  FUN_00cfcad8(uVar2,param_2,"CenterGun");
  uVar2 = FUN_00cfb17c(lVar4 + 200);
  FUN_00cfcad8(uVar2,param_2,"GunMuzzleTip_Attack");
  lVar4 = FUN_00cf9f7c(auStack_68);
  lVar5 = FUN_00cefb20(lVar4 + 0x10);
  lVar4 = lVar4 + 0xb0;
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_SAW_Talent_RoadRage_02bee110;
  FUN_00cf98bc(lVar4);
  plVar3 = (long *)FUN_00cfa8c4(lVar4);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Ability__SAW__A_02bef4b0);
  local_58 = FUN_00ddfed4;
  local_50 = 3;
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_58);
  FUN_00cf9eec(lVar4);
  FUN_00cfb0a4(auStack_68);
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de0414(void)

{
  FUN_00de0144("Attack",0x65);
  return;
}




void FUN_00de0424(void)

{
  FUN_00de0144("AltAttack",0x65);
  return;
}




void FUN_00de0434(void)

{
  FUN_00de0144("CritAttack",0x66);
  return;
}




void FUN_00de0444(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_90 [88];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00ceab48();
  if (((uVar5 & 1) != 0) && (uVar5 = FUN_00da0288(0x3eb33333), (uVar5 & 1) != 0)) {
    lVar6 = FUN_00d5048c(param_1);
    puVar3 = PTR_s_Buff_SAW_RoadieRun_02bf0ee8;
    uVar1 = *(undefined4 *)(lVar6 + 0x260);
    uVar7 = FUN_00d59f54(lVar6,1,2,0x19,0);
    uVar4 = FUN_00ceb350();
    FUN_00cfe864(uVar7,0,0,auStack_90,uVar1,uVar1,puVar3,uVar4,1,0,0);
    FUN_00ce20fc(auStack_90);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de051c(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,2,0x19,0);
  return;
}




void FUN_00de0530(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_68 [16];
  code *local_58;
  undefined4 local_50;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_68);
  uVar2 = FUN_00cfb05c(auStack_68);
  FUN_00cf7b3c(uVar2,1);
  lVar3 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  uVar2 = FUN_00cfa9e4(auStack_68);
  FUN_00cf3048(uVar2,"Shank",0,1,0,0);
  uVar2 = FUN_00cfab94(auStack_68);
  FUN_00cf4164(0x3f800000,0x3f000000,uVar2,"Sound_SAW_ability_1_stab_01",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_SAW_ability_1_stab_02");
  FUN_00cf41bc(uVar2,"Sound_SAW_ability_1_stab_03");
  uVar2 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(0x3e2b020c);
  FUN_00cf7578(uVar2,0);
  FUN_00cf99dc(auStack_68);
  uVar2 = FUN_00cfaa74(auStack_68);
  FUN_00cf32cc(0,uVar2,"Effect_SAW_Shank",0,0,1,0,0);
  plVar4 = (long *)FUN_00cfa09c(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x20))(plVar4,"Damage");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x20))(plVar4,"ExecuteDamage");
  (**(code **)(*plVar4 + 0x70))(plVar4,1);
  FUN_00cf9eec(auStack_68);
  FUN_00cfacb4(auStack_68);
  FUN_00cfb0a4(auStack_68);
  FUN_00cf98bc(auStack_68);
  uVar2 = FUN_00cf9d84(auStack_68);
  FUN_00cf49b0(uVar2,PTR_s_Buff_SAW_RoadieRun_02bf0ee8);
  FUN_00cf9eec(auStack_68);
  uVar2 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(0x3e2b020c);
  FUN_00cf7578(uVar2,0);
  FUN_00cf9eec(auStack_68);
  uVar2 = FUN_00cfa9e4(auStack_68);
  FUN_00cf3048(uVar2,"LeapBack",0,1,0,"AttackToIdle");
  uVar2 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(0x3e2b020c);
  FUN_00cf7578(uVar2,0);
  plVar4 = (long *)FUN_00cfa12c(auStack_68);
  local_48 = FUN_00de08a8;
  local_40 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,&local_48);
  local_58 = FUN_00de08bc;
  local_50 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xa0))(plVar4,&local_58);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  lVar3 = FUN_00cf9f7c(auStack_68);
  lVar5 = FUN_00cefb20(lVar3 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_SAW_Talent_RoadRage_02bee110;
  plVar4 = (long *)FUN_00cf9afc(lVar3 + 0xb0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_SAW_HeroicPerk_SpinUp_02bf0ee0);
  local_48 = FUN_00ddfec8;
  local_40 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  local_58 = FUN_00de08d0;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
  uVar2 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(0x3ecccccd);
  FUN_00cf7578(uVar2,0);
  FUN_00cfb56c(auStack_68);
  lVar3 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de08a8(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,6,0x19,0);
  return;
}




void FUN_00de08bc(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,5,0x19,0);
  return;
}




int FUN_00de08d0(undefined4 param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d5a3d0(param_1,DAT_031ac508,2,9);
  return (int)fVar1;
}




void FUN_00de08fc(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d095e4(*(undefined4 *)(lVar3 + 0xf0));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"Sound_SAW_ability_1_draw_knife",0,0,0xffffffff,0,1);
  FUN_00cf98bc(auStack_48);
  uVar4 = FUN_00cf9ab4(auStack_48);
  FUN_00cf456c(uVar4,PTR_s_Buff_SAW_RoadieRun_02bf0ee8,FUN_00de051c,1,0);
  uVar4 = FUN_00cf9d84(auStack_48);
  FUN_00cf49b0(uVar4,PTR_s_Buff_SAW_HeroicPerk_SpinUp_02bf0ee0);
  uVar4 = FUN_00cf9d84(auStack_48);
  FUN_00cf49b0(uVar4,PTR_s_Buff_SAW_Strafe_02bf0f08);
  FUN_00cf9eec(auStack_48);
  uVar4 = FUN_00cfa294(auStack_48);
  FUN_00cf7580(uVar4,FUN_00de051c);
  FUN_00cf7578(uVar4,0);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de0a2c(void)

{
  undefined8 uVar1;
  undefined8 in_x3;
  
  uVar1 = FUN_00d5048c();
  FUN_00d55794(uVar1,in_x3,0);
  return;
}




void FUN_00de0a54(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
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




void FUN_00de0bd8(undefined8 param_1,long param_2,float *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = FUN_00d5048c();
  fVar3 = (float)FUN_00d59f54(uVar1,2,2,0x19,0);
  fVar3 = fVar3 + fVar3;
  *param_3 = fVar3;
  if (*(char *)(param_2 + 0x2f6) < '\0') {
    uVar1 = FUN_00d5048c(param_1);
    fVar3 = (float)FUN_00d59f54(uVar1,2,7,0x19,0);
    fVar3 = fVar3 * *param_3;
    *param_3 = fVar3;
  }
  lVar2 = FUN_00d5048c(param_1);
  fVar4 = (float)FUN_00d084cc(*(undefined8 *)(lVar2 + 0x38),2,4);
  *param_3 = fVar3 / fVar4;
  *param_4 = 2;
  *param_5 = 1;
  return;
}




void FUN_00de0c9c(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d5048c();
  uVar2 = FUN_00d59f54(uVar1,2,5,0x19,0);
  *param_3 = uVar2;
  return;
}




void FUN_00de0cd4(void)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = FUN_00d5048c();
  lVar3 = *(long *)(lVar2 + 0x18);
  while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  uVar1 = FUN_00d5401c(lVar3,PTR_s_Ability__SAW__A_02bef4b0);
  FUN_00d5a0ac(lVar2,uVar1,0,0);
  return;
}




void FUN_00de0d38(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                 float *param_5)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float __x;
  float local_58;
  float fStack_54;
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d5048c();
  FUN_00d55794(uVar2,&local_58,0);
  fVar3 = (float)FUN_00d51820(param_4);
  fVar3 = fVar3 - local_58;
  param_3 = param_3 - local_50;
  __x = fVar3 * fVar3 + (param_2 - fStack_54) * (param_2 - fStack_54) + param_3 * param_3;
  fVar5 = DAT_03218f88;
  fVar4 = DAT_03218f90;
  if (0.001 <= __x) {
    fVar4 = SQRT(__x);
    if (NAN(fVar4)) {
      fVar4 = sqrtf(__x);
    }
    fVar5 = fVar3 / fVar4;
    fVar4 = param_3 / fVar4;
  }
  fVar5 = atan2f(fVar4,fVar5);
  *param_5 = fVar5;
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00de0e18(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_110 [16];
  undefined4 local_100 [2];
  undefined4 local_f8;
  undefined1 auStack_f0 [96];
  long local_90;
  
  lVar1 = tpidr_el0;
  local_90 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_110);
  uVar2 = FUN_00d6eb50();
  uVar2 = FUN_00d6eb5c(uVar2,PTR_s__SAW__02beb380);
  lVar3 = FUN_00cfa6cc(auStack_110);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  FUN_00cfb05c(auStack_110);
  uVar4 = FUN_00cf9cf4(auStack_110);
  FUN_00cf2e48(uVar4,FUN_00de0cd4);
  FUN_00cf98bc(auStack_110);
  uVar4 = FUN_00cf9ab4(auStack_110);
  FUN_00cf44e8(0x40400000,uVar4,PTR_s_Buff_SAW_SuppressingFire_SoundFx_02bf0ef8,1,0);
  uVar4 = FUN_00cf9d84(auStack_110);
  FUN_00cf49b0(uVar4,PTR_s_Buff_SAW_RoadieRun_02bf0ee8);
  FUN_00cf9eec(auStack_110);
  uVar4 = FUN_00cfa9e4(auStack_110);
  FUN_00cf3048(uVar4,"SuppressingFire",1,1,0,0);
  uVar4 = FUN_00cfa294(auStack_110);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar4,0);
  uVar4 = FUN_00cfaa74(auStack_110);
  FUN_00cf3428(0x40000000,uVar4,"Effect_SAW_Flamethrower",1,"Bone_Gun",0,1,0,0);
  FUN_00cf34b8(0,uVar4,FUN_00de0d38);
  FUN_00cf34fc(uVar4,0);
  FUN_00d4d9e8(auStack_f0);
  FUN_00d4dabc(auStack_f0,0x40000);
  FUN_00d4daf4(auStack_f0,0,1,0,0);
  fVar7 = (float)FUN_00d084cc(uVar2,2,4);
  if (0.0 < fVar7) {
    uVar6 = 0;
    do {
      uVar4 = FUN_00cfa294(auStack_110);
      fVar7 = (float)FUN_00d084cc(uVar2,2,3);
      fVar8 = (float)FUN_00d084cc(uVar2,2,4);
      FUN_00cf7478(fVar7 / (fVar8 + -1.0),uVar4);
      FUN_00cf7578(uVar4,0);
      if (uVar6 < 5) {
        plVar5 = (long *)FUN_00cf9afc(auStack_110);
        plVar5 = (long *)(**(code **)(*plVar5 + 0x50))
                                   (plVar5,PTR_s_Buff_SAW_SuppressingFire_BuildSp_02bf0f00);
        local_100[0] = 0x3ecccccd;
        local_f8 = 1;
        (**(code **)(*plVar5 + 0x18))(plVar5,local_100);
      }
      uVar4 = FUN_00cfaf3c(auStack_110);
      uVar4 = FUN_00cf5ac8(0x3fa00000,uVar4,FUN_00de0a2c,FUN_00de0a54);
      FUN_00cf5ae0(uVar4,auStack_f0);
      uVar4 = FUN_00cfa00c(auStack_110);
      FUN_00cf6bb0(uVar4,FUN_00de0bd8);
      uVar4 = FUN_00cf9ab4(auStack_110);
      FUN_00cf4540(uVar4,PTR_s_Buff_SAW_SuppressingFire_Slow_02bf0ef0,FUN_00de0c9c,1,0);
      FUN_00cf9eec(auStack_110);
      uVar6 = uVar6 + 1;
      fVar7 = (float)FUN_00d084cc(uVar2,2,4);
    } while ((float)uVar6 < fVar7);
  }
  FUN_00cf98bc(auStack_110);
  plVar5 = (long *)FUN_00cfa8c4(auStack_110);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s_Ability__SAW__A_02bef4b0);
  local_100[0] = 0;
  local_f8 = 1;
  (**(code **)(*plVar5 + 0x20))(plVar5,local_100);
  FUN_00cf9eec(auStack_110);
  lVar3 = FUN_00cfa6cc(auStack_110);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  FUN_00cfb0a4(auStack_110);
  uVar2 = FUN_00cfa294(auStack_110);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfa9e4(auStack_110);
  FUN_00cf3048(uVar2,"Idle",1,0,0,0);
  FUN_00cfb5c4(auStack_110);
  if (*(long *)(lVar1 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

