// functions/00db0 — 20 functions
#include "libGameKindred.h"




void FUN_00db0088(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar2,"Idle",1,1,0,0);
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db0104(void)

{
  long lVar1;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cfa714(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00db015c(long param_1)

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
    fVar4 = (float)FUN_00d59f54(param_1,2,9,0x19,0);
    fVar3 = -(fVar3 * fVar4);
  }
  return fVar3;
}




void FUN_00db01ec(undefined8 param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_78 [16];
  undefined4 local_68 [2];
  undefined4 local_60;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_78);
  plVar2 = (long *)FUN_00cf9afc(auStack_78);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Baron_B_Charging_02bf0358);
  local_58 = (code *)CONCAT44(local_58._4_4_,0x3f000000);
  local_50 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,&local_58);
  local_68[0] = 0;
  local_60 = 1;
  (**(code **)(*plVar2 + 0x20))(plVar2,local_68);
  FUN_00cfb05c(auStack_78);
  plVar2 = (long *)FUN_00cfaa2c(auStack_78);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,param_1);
  (**(code **)(*plVar2 + 0x18))(plVar2,"AttackToIdleCombat");
  uVar3 = FUN_00cfa294(auStack_78);
  FUN_00cf7570(uVar3,FUN_00cf76f0);
  FUN_00cf7578(uVar3,FUN_00cfb9b0);
  uVar4 = FUN_00cfab94(auStack_78);
  lVar5 = FUN_00d09310();
  uVar3 = FUN_00d09cc8(*(undefined4 *)(lVar5 + 0x328));
  FUN_00cf4164(0x3f800000,uVar3,uVar4,"Sound_Baron_Rocket_Fire",0,0,0xffffffff,0,1);
  if (param_3 != 0) {
    uVar3 = FUN_00cfaa74(auStack_78);
    FUN_00cf3358(0x3f800000,uVar3,param_3,0,"RocketLauncher_Attack",0,1,0,0);
  }
  uVar3 = FUN_00cfaa74(auStack_78);
  FUN_00cf3428(0x3f400000,uVar3,"Effect_Baron_Weapon_Idle",1,"Bone_Weapon",0,1,0,0);
  uVar3 = FUN_00cfb17c(auStack_78);
  FUN_00cfcad8(uVar3,param_2,"RocketLauncher_Attack");
  FUN_00cf98bc(auStack_78);
  plVar2 = (long *)FUN_00cfa8c4(auStack_78);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Ability__Baron__B_02bee618);
  local_58 = FUN_00db015c;
  local_50 = 3;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_58);
  FUN_00cf9eec(auStack_78);
  FUN_00cfb0a4(auStack_78);
  FUN_00cfb5c4(auStack_78);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db0428(void)

{
  FUN_00db01ec("Attack",10,0);
  return;
}




void FUN_00db043c(void)

{
  FUN_00db01ec("AltAttack",10,0);
  return;
}




void FUN_00db0450(void)

{
  FUN_00db01ec("CritAttack",0xb,"Effect_Baron_CritAttack_MuzzleFlash");
  return;
}




void FUN_00db0468(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [16];
  code *local_78;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_88);
  lVar2 = FUN_00cfa6cc(auStack_88);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_88);
  FUN_00cf7b3c(uVar3,1);
  uVar3 = FUN_00cfa9e4(auStack_88);
  FUN_00cf3048(uVar3,"QuickAttack",0,1,0,"AttackToIdleCombat");
  FUN_00cf98bc(auStack_88);
  uVar3 = FUN_00cf9d84(auStack_88);
  FUN_00cf49b0(uVar3,PTR_s_Buff_Baron_B_QuickAttackAvailabl_02bf0360);
  FUN_00cf9eec(auStack_88);
  uVar3 = FUN_00cfab94(auStack_88);
  lVar2 = FUN_00d09310();
  uVar6 = FUN_00d09cc8(*(undefined4 *)(lVar2 + 0x33c));
  FUN_00cf4164(0x3f800000,uVar6,uVar3,"Sound_Baron_Ability_B_QuickAttack",0,0,0xffffffff,0,1);
  uVar3 = FUN_00cfa294(auStack_88);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_88);
  FUN_00cfcad8(uVar3,0xc,"RocketLauncher_QuickAttack");
  uVar3 = FUN_00cfaa74(auStack_88);
  FUN_00cf3358(0x3f800000,uVar3,"Effect_Baron_CritAttack_MuzzleFlash",0,"RocketLauncher_QuickAttack"
               ,0,1,0,0);
  FUN_00cf98bc(auStack_88);
  plVar4 = (long *)FUN_00cfa8c4(auStack_88);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Ability__Baron__B_02bee618);
  local_78 = FUN_00db015c;
  local_70 = 3;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_78);
  FUN_00cf9eec(auStack_88);
  uVar3 = FUN_00cfa294(auStack_88);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_88);
  FUN_00cfcad8(uVar3,0xc,"RocketLauncher_QuickAttack");
  uVar3 = FUN_00cfaa74(auStack_88);
  FUN_00cf3358(0x3f800000,uVar3,"Effect_Baron_CritAttack_MuzzleFlash",0,"RocketLauncher_QuickAttack"
               ,0,1,0,0);
  FUN_00cf98bc(auStack_88);
  plVar4 = (long *)FUN_00cfa8c4(auStack_88);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Ability__Baron__B_02bee618);
  local_78 = FUN_00db015c;
  local_70 = 3;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_78);
  FUN_00cf9eec(auStack_88);
  lVar2 = FUN_00cf9f7c(auStack_88);
  lVar5 = FUN_00cefb20(lVar2 + 0x10);
  lVar2 = lVar2 + 0xb0;
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Baron_Talent_TurboJets_02bedec8;
  uVar3 = FUN_00cfa294(lVar2);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(lVar2);
  FUN_00cfcad8(uVar3,0xc,"RocketLauncher_QuickAttack");
  uVar3 = FUN_00cfaa74(lVar2);
  FUN_00cf3358(0x3f800000,uVar3,"Effect_Baron_CritAttack_MuzzleFlash",0,"RocketLauncher_QuickAttack"
               ,0,1,0,0);
  uVar3 = FUN_00cfaa74(auStack_88);
  FUN_00cf3428(0x3f400000,uVar3,"Effect_Baron_Weapon_Idle",1,"Bone_Weapon",0,1,0,0);
  lVar2 = FUN_00cfa6cc(auStack_88);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_88);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db07c4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  char *pcVar2;
  
  FUN_00d5048c();
  uVar1 = FUN_00da2ddc();
  if ((uVar1 & 1) == 0) {
    pcVar2 = "Ability01";
  }
  else {
    pcVar2 = "Ability01_Midair";
  }
  FUN_00d9ff34(param_2,pcVar2);
  return;
}




void FUN_00db0804(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  undefined1 auStack_a0 [88];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_3 = 0xd;
  lVar6 = FUN_00d5048c();
  lVar11 = *(long *)(lVar6 + 0x18);
  while ((lVar11 != 0 && (*(int *)(*(long *)(lVar11 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar11 = *(long *)(lVar11 + 0x20);
  }
  uVar2 = FUN_00d6b630(lVar11,DAT_031b88f8,0xffffffff);
  lVar9 = *(long *)(lVar6 + 0x18);
  while ((lVar9 != 0 && (*(int *)(*(long *)(lVar9 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar9 = *(long *)(lVar9 + 0x20);
  }
  iVar3 = FUN_00d53990(lVar9,2);
  iVar4 = FUN_00d6bf28(lVar11,uVar2);
  if (iVar3 == 2) {
    if (iVar4 != 1) {
      pcVar10 = "Ability_A_Attack2_Fly";
LAB_00db0950:
      *param_4 = pcVar10;
      puVar7 = PTR_s_Buff_Baron_Perk_A_AlternateTubes_02bf0338;
      uVar2 = *(undefined4 *)(lVar6 + 0x260);
      uVar5 = FUN_00ceb350();
      uVar8 = 1;
      goto LAB_00db0990;
    }
    pcVar10 = "Ability_A_Attack1_Fly";
  }
  else {
    if (iVar4 != 1) {
      pcVar10 = "Ability_A_Attack2";
      goto LAB_00db0950;
    }
    pcVar10 = "Ability_A_Attack1";
  }
  *param_4 = pcVar10;
  puVar7 = PTR_s_Buff_Baron_Perk_A_AlternateTubes_02bf0338;
  uVar2 = *(undefined4 *)(lVar6 + 0x260);
  uVar5 = FUN_00ceb350();
  uVar8 = 0;
LAB_00db0990:
  FUN_00cfe864(0xbf800000,0,0,auStack_a0,uVar2,uVar2,puVar7,uVar5,1,uVar8,0);
  FUN_00ce20fc(auStack_a0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db09cc(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  FUN_00cfb05c(auStack_48);
  uVar3 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3094(uVar3,FUN_00db07c4,0,0,0,"AttackToIdle");
  uVar3 = FUN_00cfab94(auStack_48);
  lVar2 = FUN_00d09310();
  uVar6 = FUN_00d09cc8(*(undefined4 *)(lVar2 + 0x32c));
  FUN_00cf4164(0x3f800000,uVar6,uVar3,"Sound_Baron_Ability_A_Fire",0,0,0xffffffff,0,1);
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7580(uVar3,FUN_00db0bf4);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_48);
  FUN_00cfcb68(uVar3,FUN_00db0804);
  lVar2 = FUN_00cf9f7c(auStack_48);
  lVar4 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Baron_Talent_EndlessMortars_02beded8;
  plVar5 = (long *)FUN_00cfb1c4(lVar2 + 0xb0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,"*Baron_A_Warning_Talent*",0);
  (**(code **)(*plVar5 + 0x20))(plVar5,FUN_00e60680);
  plVar5 = (long *)FUN_00cfb1c4(lVar2 + 200);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,"*Baron_A_Warning*",0);
  (**(code **)(*plVar5 + 0x20))(plVar5,FUN_00e60680);
  uVar3 = FUN_00cfab94(auStack_48);
  lVar2 = FUN_00d09310();
  uVar6 = FUN_00d09cc8(*(undefined4 *)(lVar2 + 0x330));
  FUN_00cf4164(0x3f800000,uVar6,uVar3,"Sound_Baron_Ability_A_Whistle",0,0,0xffffffff,0,1);
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7580(uVar3,FUN_00db0c08);
  FUN_00cf7578(uVar3,0);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db0bf4(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,7,0x19,0);
  return;
}




void FUN_00db0c08(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,8,0x19,0);
  return;
}




void FUN_00db0c1c(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                 undefined8 param_5,float *param_6)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_68;
  float fStack_64;
  float local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d5048c();
  FUN_00d55794(lVar2,&local_68,0);
  uVar3 = FUN_00d44008(*(undefined4 *)(lVar2 + 0x260),PTR_s_Buff_Baron_Talent_TurboJets_02bedec8);
  if ((uVar3 & 1) == 0) {
    fVar4 = (float)FUN_00d59f54(lVar2,2,3,0x19,0);
    fVar7 = (float)FUN_00d51820(param_4);
    fVar7 = (local_68 - fVar7) * (local_68 - fVar7) + (fStack_64 - param_2) * (fStack_64 - param_2)
            + (local_60 - param_3) * (local_60 - param_3);
    fVar6 = SQRT(fVar7);
    if (NAN(fVar6)) {
      fVar6 = sqrtf(fVar7);
    }
    fVar7 = (float)FUN_00d59f54(lVar2,2,4,0xd,0);
    if (fVar7 <= 0.1) {
      fVar7 = 0.1;
    }
    fVar5 = (float)FUN_00d59f54(lVar2,2,5,0xd,0);
    if (fVar4 < fVar6) {
      fVar4 = fVar7 + (fVar6 - fVar4) * fVar5;
      if (fVar7 <= fVar4) {
        fVar7 = fVar4;
      }
      *param_6 = fVar4;
    }
  }
  else {
    fVar7 = 0.1;
  }
  *param_6 = fVar7;
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00db0d78(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                 undefined8 param_5,float *param_6)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  float __x;
  float local_48;
  float fStack_44;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    uVar3 = FUN_00d5048c(param_4);
    FUN_00d55794(uVar3,&local_48,0);
    fVar4 = (float)FUN_00d51820(param_4);
    __x = (local_48 - fVar4) * (local_48 - fVar4) + (fStack_44 - param_2) * (fStack_44 - param_2) +
          (local_40 - param_3) * (local_40 - param_3);
    fVar4 = SQRT(__x);
    if (NAN(fVar4)) {
      fVar4 = sqrtf(__x);
    }
    *param_6 = fVar4;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db0e2c(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                 undefined8 param_5,float *param_6)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float local_58;
  float fStack_54;
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d55794(param_5,&local_58,0);
  fVar2 = (float)FUN_00d51820(param_4);
  fVar2 = (local_58 - fVar2) * (local_58 - fVar2) + (fStack_54 - param_2) * (fStack_54 - param_2) +
          (local_50 - param_3) * (local_50 - param_3);
  fVar3 = SQRT(fVar2);
  if (NAN(fVar3)) {
    fVar3 = sqrtf(fVar2);
  }
  fVar2 = (float)FUN_00d59f54(param_5,2,8,0x19,0);
  *param_6 = fVar3 / fVar2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db0efc(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,8,0x19,0);
  return;
}




void FUN_00db0f10(undefined8 param_1,undefined8 param_2,float *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  float fVar3;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    FUN_00db0e2c(param_1,param_2,param_3);
    uVar2 = FUN_00d5048c(param_1);
    fVar3 = (float)FUN_00d59f54(uVar2,2,0xd,0x19,0);
    *param_3 = fVar3 + *param_3;
  }
  return;
}




void FUN_00db0f7c(undefined8 param_1,undefined8 param_2,float *param_3,float *param_4)

{
  long lVar1;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_3 = 1.6667;
  local_3c = 0.0;
  FUN_00db0e2c(param_1,param_2,&local_3c);
  *param_4 = local_3c * *param_3;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db0ff4(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [16];
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  FUN_00cf98bc(auStack_58);
  uVar2 = FUN_00cf9ab4(auStack_58);
  FUN_00cf4540(uVar2,PTR_s_Buff_Baron_B_Charging_02bf0358,FUN_00db0c1c,1,0);
  FUN_00cf4600();
  FUN_00cf9eec(auStack_58);
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7570(uVar2,FUN_00db0c1c);
  FUN_00cfa6cc(auStack_58);
  FUN_00cfb05c(auStack_58);
  uVar2 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar2,"Ability02",0,1,0,0);
  FUN_00cf30d8();
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf3358(0x3e800000,uVar2,"Effect_Baron_B_Jump",1,"CenterBody",0,1,0,0);
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf3428(0x3e800000,uVar2,"Effect_Baron_B_Jump_LeftJet",1,"Bone_LeftJet",0,1,0,0);
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf3428(0x3e800000,uVar2,"Effect_Baron_B_Jump_RightJet",1,"Bone_RightJet",0,1,0,0);
  uVar2 = FUN_00cfab94(auStack_58);
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d09cc8(*(undefined4 *)(lVar3 + 0x338));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Baron_Ability_B_TakeOff",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7580(uVar2,FUN_00db13cc);
  FUN_00cf7578(uVar2,0);
  FUN_00cf98bc(auStack_58);
  uVar2 = FUN_00cf9ab4(auStack_58);
  FUN_00cf4540(uVar2,PTR_s_Buff_Revealed_02bebaf8,FUN_00db0e2c,1,0);
  FUN_00cf9eec(auStack_58);
  plVar4 = (long *)FUN_00cfa12c(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x90))();
  local_48 = FUN_00db0efc;
  local_40 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xa0))(plVar4,&local_48);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  FUN_00cf98bc(auStack_58);
  uVar2 = FUN_00cf9bd4(auStack_58);
  FUN_00cf834c(uVar2,FUN_00db0f7c,0,0);
  uVar2 = FUN_00cf9ab4(auStack_58);
  uVar2 = FUN_00cf4540(uVar2,PTR_s_Buff_Baron_B_OverdriveBlock_02bf0368,FUN_00db0f10,1,0);
  FUN_00cf45c4(uVar2,FUN_00cfbfb8);
  FUN_00cf9eec(auStack_58);
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7570(uVar2,FUN_00db0e2c);
  FUN_00cfb56c(auStack_58);
  uVar2 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar2,"Ability02_Landing",0,0,0,"AttackToIdle");
  FUN_00cf30d8();
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf32cc(0x3f800000,uVar2,"Effect_Baron_B_Landing",0,0,1,0,0);
  uVar2 = FUN_00cfab94(auStack_58);
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d09cc8(*(undefined4 *)(lVar3 + 0x338));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Baron_Ability_B_Land",0,0,0xffffffff,0,1);
  FUN_00cfacb4(auStack_58);
  FUN_00cf50b0(0);
  FUN_00cf98bc(auStack_58);
  uVar2 = FUN_00cf9ab4(auStack_58);
  FUN_00cf456c(uVar2,PTR_s_Buff_Baron_B_QuickAttackAvailabl_02bf0360,FUN_00db13e0,1,0);
  FUN_00cf9eec(auStack_58);
  lVar3 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

