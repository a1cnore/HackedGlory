// functions/00dd3 — 21 functions
#include "libGameKindred.h"




float FUN_00dd3010(long param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar2 = *(long *)(param_1 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  iVar1 = FUN_00d535a4(lVar2,0);
  if (iVar1 == 0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = (float)FUN_00d53a18(lVar2,0);
    fVar4 = (float)FUN_00d5a3d0(param_1,DAT_031ac004,1,9);
    fVar3 = -(fVar3 * fVar4);
  }
  return fVar3;
}




float FUN_00dd30a4(long param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar2 = *(long *)(param_1 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  iVar1 = FUN_00d535a4(lVar2,2);
  if (iVar1 == 0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = (float)FUN_00d53a18(lVar2,2);
    fVar4 = (float)FUN_00d5a3d0(param_1,DAT_031ac004,2,9);
    fVar3 = -(fVar3 * fVar4);
  }
  return fVar3;
}




void FUN_00dd3138(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  long lVar1;
  
  lVar1 = FUN_00d517cc();
  if (lVar1 != 0) {
    lVar1 = FUN_00d517cc(param_1);
    *param_4 = *(undefined4 *)(lVar1 + 0x260);
  }
  return;
}




void FUN_00dd3170(long param_1,undefined8 param_2,undefined8 *param_3,uint param_4,
                 undefined8 param_5,undefined8 param_6,undefined4 param_7,uint param_8)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_e8 [16];
  code *local_d8;
  undefined4 local_d0;
  code *local_c8;
  undefined4 local_c0;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_e8);
  plVar2 = (long *)FUN_00cf9afc(auStack_e8);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Lance_CircleStrafing_02bf0b20);
  local_c8 = FUN_00dd3570;
  local_c0 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,&local_c8);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,FUN_00dd3138);
  (**(code **)(*plVar2 + 0x60))(plVar2,FUN_00dd2e50);
  FUN_00d4d9e8(&local_c8);
  FUN_00d4daf4(&local_c8,0,1,0,0);
  FUN_00d4dabc(&local_c8,0x40000);
  uVar3 = FUN_00cfb05c(auStack_e8);
  FUN_00cf7b3c(uVar3,1);
  plVar2 = (long *)FUN_00cfaa2c(auStack_e8);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,param_2);
  (**(code **)(*plVar2 + 0x18))(plVar2,"AttackToIdleCombat");
  uVar3 = FUN_00cfaa74(auStack_e8);
  FUN_00cf32cc(0,uVar3,param_5,1,0,1,0,0);
  uVar4 = FUN_00cfab94(auStack_e8);
  uVar6 = *param_3;
  lVar5 = FUN_00d09310();
  uVar3 = FUN_00d09bcc(*(undefined4 *)(lVar5 + 0x2d0));
  FUN_00cf4164(0x3f800000,uVar3,uVar4,uVar6,0,0,0xffffffff,0,1);
  if (1 < param_4) {
    lVar5 = (ulong)param_4 - 1;
    do {
      param_3 = param_3 + 1;
      FUN_00cf41bc(uVar4,*param_3);
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  uVar3 = FUN_00cfa294(auStack_e8);
  if (param_1 == 0) {
    FUN_00cf7570(uVar3,FUN_00cf76f0);
  }
  else {
    FUN_00cf7580(uVar3,param_1);
  }
  FUN_00cf7578(uVar3,FUN_00cfb9b0);
  FUN_00cf99dc(auStack_e8);
  plVar2 = (long *)FUN_00cfa09c(auStack_e8);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))();
  (**(code **)(*plVar2 + 0x58))(plVar2,param_7);
  FUN_00cf9eec(auStack_e8);
  uVar3 = FUN_00cfaf3c(auStack_e8);
  uVar3 = FUN_00cf5ac8(0x3f800000,uVar3,FUN_00dd2e74,FUN_00dd2e84);
  uVar3 = FUN_00cf5ae0(uVar3,&local_c8);
  FUN_00cf5b20(uVar3,1);
  plVar2 = (long *)FUN_00cfa09c(auStack_e8);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x20))(plVar2,"DefaultAttackAOE");
  (**(code **)(*plVar2 + 0x70))(plVar2,param_7);
  FUN_00cf99dc(auStack_e8);
  uVar3 = FUN_00cf9ab4(auStack_e8);
  FUN_00cf44e8(0x3dcccccd,uVar3,param_6,1,0);
  if ((param_8 & 1) == 0) {
    FUN_00cf9eec(auStack_e8);
  }
  else {
    plVar2 = (long *)FUN_00cfa09c();
    plVar2 = (long *)(**(code **)(*plVar2 + 0x50))();
    (**(code **)(*plVar2 + 0x30))(plVar2,2);
    FUN_00cf9eec(auStack_e8);
    plVar2 = (long *)FUN_00cf9dcc(auStack_e8);
    (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Lance_EmpoweredAutoattackAv_02bf0ab8);
  }
  uVar3 = FUN_00cf9f34(auStack_e8);
  uVar4 = FUN_00d9ab88();
  FUN_00d9b128(uVar4,PTR_s_Buff_Lance_Talent_Striker_02bedff0);
  FUN_00d9b0f8(uVar3);
  plVar2 = (long *)FUN_00cfa8c4();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Ability__Lance__A_02bef0c0);
  local_d8 = FUN_00dd3010;
  local_d0 = 3;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_d8);
  FUN_00d9b0f8(uVar3);
  plVar2 = (long *)FUN_00cfa8c4();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Ability__Lance__C_02bef0c8);
  local_d8 = FUN_00dd30a4;
  local_d0 = 3;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_d8);
  FUN_00cfb0a4(auStack_e8);
  FUN_00cfb5c4(auStack_e8);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd3570(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,10,0x19,0);
  return;
}




void FUN_00dd3584(void)

{
  FUN_00dd3170(0,"Attack",&PTR_s_Sound_Lance_Attack_1_02bef0d8,3,"Effect_Lance_AA",
               PTR_s_Buff_Lance_PlayAutoAttackImpactP_02bf0ae0,0,0);
  return;
}




void FUN_00dd35bc(void)

{
  FUN_00dd3170(0,"AltAttack",&PTR_s_Sound_Lance_Attack_1_02bef0d8,3,"Effect_Lance_AA",
               PTR_s_Buff_Lance_PlayAutoAttackImpactP_02bf0ae0,0,0);
  return;
}




void FUN_00dd35f4(void)

{
  FUN_00dd3170(0,"CritAttack",&PTR_s_Sound_Lance_Attack_1_02bef0d8,3,"Effect_Lance_AA_Crit",
               PTR_s_Buff_Lance_PlayCritAttackImpactP_02bf0b00,2,0);
  return;
}




void FUN_00dd362c(void)

{
  FUN_00dd3170(FUN_00dd3668,"EmpoweredAttack",&PTR_s_Sound_Lance_Quick_Attack_02bef108,1,
               "Effect_Lance_Empowered_AA",PTR_s_Buff_Lance_PlayEmpoweredAutoAtta_02bf0b18,1,1);
  return;
}




void FUN_00dd3668(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,5,0x19,0);
  return;
}




void FUN_00dd367c(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,undefined8 param_4,
                 undefined8 param_5,float *param_6,float *param_7)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float __x;
  undefined8 uVar5;
  undefined8 local_a0;
  float local_98;
  float local_90;
  float fStack_8c;
  float local_88;
  undefined1 auStack_80 [32];
  undefined1 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00d55794(param_5,&local_90,0);
  fVar3 = (float)FUN_00d51820(param_4);
  fVar3 = fVar3 - local_90;
  param_3 = param_3 - local_88;
  __x = fVar3 * fVar3 + 0.0 + param_3 * param_3;
  uVar5 = DAT_03218f68;
  fVar4 = DAT_03218f70;
  if (1e-08 <= __x) {
    fVar4 = SQRT(__x);
    if (NAN(fVar4)) {
      fVar4 = sqrtf(__x);
    }
    uVar5 = CONCAT44(0.0 / fVar4,fVar3 / fVar4);
    fVar4 = param_3 / fVar4;
  }
  fVar3 = (float)FUN_00d50cc8(param_4);
  local_a0 = CONCAT44(fStack_8c + (float)((ulong)uVar5 >> 0x20) * fVar3,
                      local_90 + (float)uVar5 * fVar3);
  local_98 = fVar4 * fVar3 + local_88;
  uVar2 = FUN_00da2eb4(param_5);
  FUN_00da32b0(auStack_80,&local_90,&local_a0,uVar2);
  local_60 = 1;
  FUN_00da32dc(auStack_80,param_7,0);
  fVar4 = (*param_7 - local_90) * (*param_7 - local_90) + 0.0 +
          (param_7[2] - local_88) * (param_7[2] - local_88);
  fVar3 = SQRT(fVar4);
  if (NAN(fVar3)) {
    fVar3 = sqrtf(fVar4);
  }
  fVar4 = (float)FUN_00d59f54(param_5,0,2,0x19,0);
  *param_6 = fVar3 / fVar4;
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00dd3834(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,2,0x19,0);
  return;
}




void thunk_FUN_00dd367c(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,
                       undefined8 param_4,undefined8 param_5,float *param_6,float *param_7)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float __x;
  undefined8 uVar5;
  undefined8 uStack_a0;
  float fStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  undefined1 auStack_80 [32];
  undefined1 uStack_60;
  long lStack_58;
  
  lVar1 = tpidr_el0;
  lStack_58 = *(long *)(lVar1 + 0x28);
  FUN_00d55794(param_5,&fStack_90,0);
  fVar3 = (float)FUN_00d51820(param_4);
  fVar3 = fVar3 - fStack_90;
  param_3 = param_3 - fStack_88;
  __x = fVar3 * fVar3 + 0.0 + param_3 * param_3;
  uVar5 = DAT_03218f68;
  fVar4 = DAT_03218f70;
  if (1e-08 <= __x) {
    fVar4 = SQRT(__x);
    if (NAN(fVar4)) {
      fVar4 = sqrtf(__x);
    }
    uVar5 = CONCAT44(0.0 / fVar4,fVar3 / fVar4);
    fVar4 = param_3 / fVar4;
  }
  fVar3 = (float)FUN_00d50cc8(param_4);
  uStack_a0 = CONCAT44(fStack_8c + (float)((ulong)uVar5 >> 0x20) * fVar3,
                       fStack_90 + (float)uVar5 * fVar3);
  fStack_98 = fVar4 * fVar3 + fStack_88;
  uVar2 = FUN_00da2eb4(param_5);
  FUN_00da32b0(auStack_80,&fStack_90,&uStack_a0,uVar2);
  uStack_60 = 1;
  FUN_00da32dc(auStack_80,param_7,0);
  fVar4 = (*param_7 - fStack_90) * (*param_7 - fStack_90) + 0.0 +
          (param_7[2] - fStack_88) * (param_7[2] - fStack_88);
  fVar3 = SQRT(fVar4);
  if (NAN(fVar3)) {
    fVar3 = sqrtf(fVar4);
  }
  fVar4 = (float)FUN_00d59f54(param_5,0,2,0x19,0);
  *param_6 = fVar3 / fVar4;
  if (*(long *)(lVar1 + 0x28) != lStack_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00dd384c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 auStack_5c [4];
  undefined1 local_58 [8];
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d50ef8();
  FUN_00d55794(uVar2,local_58,0);
  FUN_00dd367c(param_1,uVar2,auStack_5c,&local_68);
  *param_2 = local_68;
  *(undefined4 *)(param_2 + 1) = local_60;
  fVar3 = (float)*param_2 - local_58._0_4_;
  fVar4 = (float)((ulong)*param_2 >> 0x20) - local_58._4_4_;
  local_50 = *(float *)(param_2 + 1) - local_50;
  *param_3 = CONCAT44(fVar4,fVar3);
  *(float *)(param_3 + 1) = local_50;
  if (((1.1920929e-07 <= ABS(local_50)) || (1.1920929e-07 <= ABS(fVar3))) ||
     (1.1920929e-07 <= ABS(fVar4))) {
    fVar4 = fVar3 * fVar3 + fVar4 * fVar4 + local_50 * local_50;
    fVar3 = SQRT(fVar4);
    if (NAN(fVar3)) {
      fVar3 = sqrtf(fVar4);
    }
    *param_3 = CONCAT44((float)((ulong)*param_3 >> 0x20) / fVar3,(float)*param_3 / fVar3);
    *(float *)(param_3 + 1) = *(float *)(param_3 + 1) / fVar3;
  }
  else {
    FUN_00d557c4(uVar2,param_3,&DAT_03218f68);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00dd3994(undefined8 param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d59f54(param_2,0,2,0x19,0);
  *param_3 = fVar1 - DAT_02bef110;
  return;
}




void FUN_00dd39d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00d55794(param_2,param_4,0);
  return;
}




void FUN_00dd39e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 local_58 [8];
  float local_50;
  undefined1 local_48 [8];
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d55794(param_2,local_48,0);
  FUN_00d557c4(param_2,local_58,&DAT_03218f68);
  uVar2 = NEON_fmov(0x40b00000,4);
  *param_4 = CONCAT44(local_58._4_4_ * (float)((ulong)uVar2 >> 0x20) + local_48._4_4_,
                      local_58._0_4_ * (float)uVar2 + local_48._0_4_);
  *(float *)(param_4 + 1) = local_50 * 5.5 + local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd3a8c(undefined8 param_1,undefined8 param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_00d5048c();
  fVar2 = (float)thunk_FUN_00d086f0(uVar1,4,1);
  *param_3 = fVar2;
  fVar2 = (float)FUN_00d59f54(uVar1,0,2,0x19,0);
  *param_3 = fVar2 + *param_3;
  fVar2 = (float)FUN_00d59f54(uVar1,0,3,0x19,0);
  *param_3 = fVar2 + *param_3;
  return;
}




void FUN_00dd3b08(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,3,0x19,0);
  return;
}




void FUN_00dd3b1c(undefined8 param_1,undefined8 param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = FUN_00d5048c();
  fVar2 = (float)FUN_00d59f54(uVar1,0,5,0x19,0);
  fVar3 = (float)FUN_00d59f54(uVar1,0,6,0x19,0);
  if (fVar3 <= fVar2) {
    fVar2 = fVar3;
  }
  *param_3 = fVar2;
  return;
}




void FUN_00dd3b84(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_b8 [16];
  undefined4 local_a8 [2];
  undefined4 local_a0;
  undefined1 auStack_98 [64];
  undefined4 local_58;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_b8);
  plVar2 = (long *)FUN_00cf9dcc(auStack_b8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Lance_CircleStrafing_02bf0b20);
  FUN_00cf9ea4(auStack_b8);
  FUN_00cfa6cc(auStack_b8);
  uVar3 = FUN_00cfb05c(auStack_b8);
  FUN_00cf7b3c(uVar3,1);
  uVar3 = FUN_00cfa9e4(auStack_b8);
  FUN_00cf3048(uVar3,"Ability01",0,1,0,"AttackToIdleCombat");
  plVar2 = (long *)FUN_00cfb1c4(auStack_b8);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"*Lance_A_LandingIndicator*",0);
  (**(code **)(*plVar2 + 0x20))(plVar2,FUN_00dd384c);
  uVar3 = FUN_00cfaa74(auStack_b8);
  FUN_00cf32cc(0,uVar3,"Effect_Lance_A_Cast",0,0,1,0,0);
  uVar3 = FUN_00cfaa74(auStack_b8);
  FUN_00cf3428(0,uVar3,"Effect_Lance_A_Weapon",1,"Bone_Weapon",0,1,0,0);
  uVar4 = FUN_00cfab94(auStack_b8);
  lVar5 = FUN_00d09310();
  uVar3 = FUN_00d09bcc(*(undefined4 *)(lVar5 + 0x2dc));
  FUN_00cf4164(0x3f800000,uVar3,uVar4,"Sound_Lance_Ability_A_Sweep",0,0,0xffffffff,0,1);
  plVar2 = (long *)FUN_00cfac6c(auStack_b8);
  (**(code **)(*plVar2 + 0x50))(plVar2,"impale");
  FUN_00cf98bc(auStack_b8);
  uVar3 = FUN_00cf9ab4(auStack_b8);
  FUN_00cf4540(uVar3,PTR_s_Buff_Lance_PauseStaminaRegen_02bf0ab0,FUN_00dd3a8c,1,0);
  uVar3 = FUN_00cf9c1c(auStack_b8);
  FUN_00cf816c(uVar3,thunk_FUN_00dd367c,1,0);
  FUN_00cf9eec(auStack_b8);
  uVar6 = FUN_00ceab48();
  uVar3 = FUN_00cfa294(auStack_b8);
  if ((uVar6 & 1) == 0) {
    FUN_00cf7570(uVar3,FUN_00dd3994);
    uVar4 = FUN_00cfab94(auStack_b8);
    lVar5 = FUN_00d09310();
    uVar3 = FUN_00d09bcc(*(undefined4 *)(lVar5 + 0x2dc));
    FUN_00cf4164(0x3f800000,uVar3,uVar4,"Sound_Lance_Ability_A_Hit",0,0,0xffffffff,0,1);
    uVar3 = FUN_00cfa294(auStack_b8);
    FUN_00cf7478(DAT_02bef110);
  }
  else {
    FUN_00cf7580(uVar3,FUN_00dd3834);
  }
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfaa74(auStack_b8);
  FUN_00cf32cc(0,uVar3,"Effect_Lance_A_Impact",0,0,1,0,0);
  uVar3 = FUN_00cfa294(auStack_b8);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  FUN_00cfb56c(auStack_b8);
  FUN_00d4d9e8(auStack_98);
  FUN_00d4dabc(auStack_98,0x40000);
  FUN_00d4dacc(auStack_98,0x100000);
  FUN_00d4daf4(auStack_98,0,1,0,0);
  FUN_00d4dcdc(auStack_98,1);
  local_58 = 0x3f266666;
  uVar3 = FUN_00cfaf3c(auStack_b8);
  uVar3 = FUN_00cf5ac8(0x3f800000,uVar3,FUN_00dd39d8,FUN_00dd39e8);
  FUN_00cf5ae0(uVar3,auStack_98);
  plVar2 = (long *)FUN_00cfa09c(auStack_b8);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))();
  (**(code **)(*plVar2 + 0x38))(plVar2,"Damage",0);
  uVar3 = FUN_00cf9ab4(auStack_b8);
  FUN_00cf4540(uVar3,PTR_s_Buff_Lance_Immobilize_02bf0b28,FUN_00dd3b1c,1,0);
  lVar5 = FUN_00cf9f7c(auStack_b8);
  lVar7 = FUN_00da1124(lVar5 + 0x10);
  *(undefined4 *)(lVar7 + 0x18) = 0;
  *(undefined4 *)(lVar7 + 8) = 0;
  *(undefined4 *)(lVar7 + 0x10) = 1;
  lVar7 = FUN_00cf9f7c(lVar5 + 0xb0);
  lVar8 = FUN_00db4148(lVar7 + 0x10);
  if (PTR_s_Ability__Lance__A_02bef0c0 == (undefined *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar11 = (uint)(byte)*PTR_s_Ability__Lance__A_02bef0c0;
    uVar9 = 0x811c9dc5;
    pbVar10 = PTR_s_Ability__Lance__A_02bef0c0;
    if (*PTR_s_Ability__Lance__A_02bef0c0 != 0) {
      do {
        uVar12 = (uint)pbVar10[1];
        uVar9 = (uVar9 ^ uVar11) * 0x1000193;
        uVar11 = uVar12;
        pbVar10 = pbVar10 + 1;
      } while (uVar12 != 0);
    }
  }
  *(uint *)(lVar8 + 8) = uVar9;
  plVar2 = (long *)FUN_00cfa8c4(lVar7 + 0xb0);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Ability__Lance__C_02bef0c8);
  local_a8[0] = 0;
  local_a0 = 1;
  (**(code **)(*plVar2 + 0x20))(plVar2,local_a8);
  lVar5 = lVar5 + 200;
  FUN_00cf9eec(lVar5);
  FUN_00cf98bc(lVar5);
  uVar3 = FUN_00cf9ab4(lVar5);
  FUN_00cf456c(uVar3,PTR_s_Buff_Lance_Recovery_02bf0ac0,FUN_00dd4098,1,0);
  FUN_00cf9eec(auStack_b8);
  uVar3 = FUN_00cfa294(auStack_b8);
  FUN_00cf7580(uVar3,FUN_00dd3b08);
  FUN_00cf7578(uVar3,0);
  lVar5 = FUN_00cfa6cc(auStack_b8);
  *(undefined1 *)(lVar5 + 0x10) = 0;
  FUN_00cfb0a4(auStack_b8);
  uVar3 = FUN_00cfa324(auStack_b8);
  FUN_00cf868c(uVar3,"Lance_A_LandingIndicator");
  FUN_00cfb5c4(auStack_b8);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

