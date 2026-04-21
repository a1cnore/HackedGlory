// functions/00de5 — 13 functions
#include "libGameKindred.h"




bool FUN_00de5018(void)

{
  int iVar1;
  
  iVar1 = FUN_00d51964();
  return iVar1 != 0;
}




void FUN_00de5034(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00cfb05c();
  FUN_00cf7b3c(uVar2,1);
  lVar3 = FUN_00cfa6cc(param_1);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  uVar2 = FUN_00cfa9e4(param_1);
  FUN_00cf3048(uVar2,"Ability03_Start",0,1,0,0);
  uVar2 = FUN_00cfaa74(param_1);
  FUN_00cf32cc(0,uVar2,"Effect_Taka_Dash_Charge",0,0,1,0,0);
  uVar2 = FUN_00cfab94(param_1);
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d09734(*(undefined4 *)(lVar3 + 0x148));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Taka_Abilty_C",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(param_1);
  FUN_00cf7478(0x3f000000);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfb05c(param_1);
  FUN_00cf7b3c(uVar2,2);
  FUN_00cf98bc(param_1);
  uVar2 = FUN_00cf9ab4(param_1);
  uVar2 = FUN_00cf456c(uVar2,PTR_s_Buff_Taka_AssassinsAcceleration_02bf10a0,FUN_00de4270,1,0);
  FUN_00cf4598(uVar2,FUN_00de4f9c);
  uVar2 = FUN_00cfa9e4(param_1);
  FUN_00cf3048(uVar2,"Ability03_Finish",0,0,0,0);
  uVar2 = FUN_00cfaa74(param_1);
  FUN_00cf32cc(0,uVar2,"Effect_Taka_Dash_Launch",0,0,1,0,0);
  plVar4 = (long *)FUN_00cfa12c(param_1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(0xbf800000,0x3e4ccccd,0xbfc00000,0xbf800000);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,1);
  local_58[0] = 0x42a00000;
  local_50 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xa0))(plVar4,local_58);
  (**(code **)(*plVar4 + 0xb8))(0x41700000);
  uVar2 = FUN_00cfa294(param_1);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar2,0);
  FUN_00cfb56c(param_1);
  FUN_00cf9eec(param_1);
  FUN_00cf99dc(param_1);
  uVar2 = FUN_00cfab4c(param_1);
  FUN_00cf3a9c(0,uVar2,"Effect_Taka_Dash_Cut",0);
  plVar4 = (long *)FUN_00cfa09c(param_1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  (**(code **)(*plVar4 + 0x38))(plVar4,"Damage",2);
  uVar2 = FUN_00cf9ab4(param_1);
  FUN_00cf456c(uVar2,PTR_s_Buff_Taka_MortalWound_02bf10a8,FUN_00de5354,1,0);
  FUN_00cf9eec(param_1);
  uVar2 = FUN_00cfab94(param_1);
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d09734(*(undefined4 *)(lVar3 + 0x148));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Taka_Abilty_C_Impact",0,0,0xffffffff,0,1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de5354(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,4,0x19,0);
  return;
}




void FUN_00de5368(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [96];
  undefined1 auStack_b8 [96];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_128);
  FUN_00de5034(auStack_128);
  FUN_00d4d9e8(auStack_b8);
  FUN_00d4daf4(auStack_b8,0,1,0,0);
  FUN_00d4d354(auStack_b8,0);
  FUN_00d4dabc(auStack_b8,1);
  FUN_00d4d9e8(auStack_118);
  FUN_00d4daf4(auStack_118,0,1,0,0);
  FUN_00d4d354(auStack_118,0);
  FUN_00d4dabc(auStack_118,0x40000);
  lVar2 = FUN_00cf9f7c(auStack_128);
  lVar3 = FUN_00cefb20(lVar2 + 0x10);
  lVar5 = lVar2 + 0xb0;
  *(undefined **)(lVar3 + 8) = PTR_s_Buff_Taka_Talent_XXXRetsu_02bf20a0;
  uVar4 = FUN_00cfaf84(lVar5);
  FUN_00cf5460(0x41000000,uVar4,auStack_b8,0,1,0,0);
  uVar4 = FUN_00cf9634(lVar5);
  uVar4 = FUN_00cfc5fc(uVar4,PTR_s_Ability__Taka__C_TalentB_02bef5f8);
  uVar4 = FUN_00cfc60c(uVar4,FUN_00de4fd8);
  FUN_00cfc61c(uVar4,FUN_00de5018);
  FUN_00cf9eec(lVar5);
  uVar4 = FUN_00cfaf84(lVar5);
  FUN_00cf5460(0x41000000,uVar4,auStack_118,0,1,0,0);
  uVar4 = FUN_00cf9634(lVar5);
  uVar4 = FUN_00cfc5fc(uVar4,PTR_s_Ability__Taka__C_TalentB_02bef5f8);
  uVar4 = FUN_00cfc60c(uVar4,FUN_00de4fd8);
  FUN_00cfc61c(uVar4,FUN_00de5018);
  FUN_00cf9eec(lVar5);
  uVar4 = FUN_00cfa294(lVar2 + 200);
  FUN_00cf7478(0x3f000000);
  FUN_00cf7578(uVar4,0);
  lVar5 = FUN_00cfa6cc(auStack_128);
  *(undefined1 *)(lVar5 + 0x10) = 0;
  FUN_00cfb5c4(auStack_128);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de5554(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [96];
  undefined1 auStack_a8 [96];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_118);
  FUN_00de5034(auStack_118);
  FUN_00d4d9e8(auStack_a8);
  FUN_00d4daf4(auStack_a8,0,1,0,0);
  FUN_00d4d354(auStack_a8,0);
  FUN_00d4dabc(auStack_a8,1);
  FUN_00d4d9e8(auStack_108);
  FUN_00d4daf4(auStack_108,0,1,0,0);
  FUN_00d4d354(auStack_108,0);
  FUN_00d4dabc(auStack_108,0x40000);
  uVar2 = FUN_00cfaf84(auStack_118);
  FUN_00cf5460(0x41000000,uVar2,auStack_a8,0,1,0,0);
  uVar2 = FUN_00cf9634(auStack_118);
  uVar2 = FUN_00cfc5fc(uVar2,PTR_s_Ability__Taka__C_TalentC_02bef600);
  uVar2 = FUN_00cfc60c(uVar2,FUN_00de4fd8);
  FUN_00cfc61c(uVar2,FUN_00de5018);
  FUN_00cf9eec(auStack_118);
  uVar2 = FUN_00cfaf84(auStack_118);
  FUN_00cf5460(0x41000000,uVar2,auStack_108,0,1,0,0);
  uVar2 = FUN_00cf9634(auStack_118);
  uVar2 = FUN_00cfc5fc(uVar2,PTR_s_Ability__Taka__C_TalentC_02bef600);
  uVar2 = FUN_00cfc60c(uVar2,FUN_00de4fd8);
  FUN_00cfc61c(uVar2,FUN_00de5018);
  FUN_00cf9eec(auStack_118);
  lVar3 = FUN_00cfa6cc(auStack_118);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  FUN_00cfb0a4(auStack_118);
  FUN_00cfb5c4(auStack_118);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de56f8(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00de5034(auStack_38);
  uVar2 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3f19999a);
  FUN_00cf7578(uVar2,0);
  lVar3 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de5788(void)

{
  FUN_00cfc038(PTR_s_Buff_Taka_Withdraw_02bf10c8);
  return;
}




void FUN_00de5798(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf32cc(0x3f800000,uVar2,"Effect_Turret_Warning",1,0,1,0,0);
  FUN_00cf34e4(uVar2,3);
  uVar2 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar2,"Attack_BuildUp",0,0,0,"AttackToIdle");
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf3358(0x3f19999a,uVar2,"Effect_TurretChargeUp",1,"Projectile_RedLight",0,1,0,0);
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf3358(0x3f19999a,uVar2,"Effect_TurretSpotlight",1,"Projectile_Spotlight",0,1,0,0);
  uVar2 = FUN_00cfab94(auStack_58);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d09494(*(undefined4 *)(lVar3 + 0x30));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"build://Sounds/Turret.assetbundle/turret_reload_01.mp3",0,0,
               0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"build://Sounds/Turret.assetbundle/turret_reload_02.mp3");
  FUN_00cf41bc(uVar2,"build://Sounds/Turret.assetbundle/turret_reload_03.mp3");
  FUN_00cf41bc(uVar2,"build://Sounds/Turret.assetbundle/turret_reload_04.mp3");
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3ecccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf3358(0x3f800000,uVar2,"Effect_TurretMuzzleFlare",1,"Projectile_TurretBarrelTip",0,1,0,0);
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf32cc(0x3f800000,uVar2,"Effect_TurretDustup",1,0,1,0,0);
  uVar2 = FUN_00cfab94(auStack_58);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d09494(*(undefined4 *)(lVar3 + 0x34));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"build://Sounds/Turret.assetbundle/turret_fires_01.mp3",0,0,
               0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"build://Sounds/Turret.assetbundle/turret_fires_02.mp3");
  FUN_00cf41bc(uVar2,"build://Sounds/Turret.assetbundle/turret_fires_03.mp3");
  FUN_00cf41bc(uVar2,"build://Sounds/Turret.assetbundle/turret_fires_04.mp3");
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf3358(0x3f800000,uVar2,"Effect_SparkBursts",1,"SparkEmissions",0,1,0,0);
  FUN_00cf99dc(auStack_58);
  uVar2 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar2,0x70,"Projectile_TurretBarrelTip");
  uVar2 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar2,"Attack_Recoil",0,0,0,"AttackToIdle");
  FUN_00cfb0a4(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de5ac0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0x3f800000,uVar2,"Effect_Turret_Warning",1,0,1,0,0);
  FUN_00cf34e4(uVar2,3);
  uVar2 = FUN_00cfab94(auStack_48);
  FUN_00cf4164(0x3f800000,0x3f800000,uVar2,"build://Sounds/Turret.assetbundle/turret_focus.mp3",0,0,
               0xffffffff,0,1);
  FUN_00cf41dc(uVar2,1);
  FUN_00cf99dc(auStack_48);
  FUN_00cfb05c(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de5ba8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfb05c(auStack_38);
  FUN_00cf7b2c(uVar2,1);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de5c08(undefined8 param_1,long param_2,float *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  if ((*(uint *)(param_2 + 0x2f4) & 1) == 0) {
    lVar2 = *(long *)(param_2 + 0x40);
    if ((*(uint *)(param_2 + 0x2f4) >> 3 & 1) == 0) {
      fVar3 = *(float *)(lVar2 + 0x308) * 0.25;
      if (fVar3 <= 0.0) {
        fVar3 = 0.0;
      }
    }
    else {
      fVar4 = (*(float *)(lVar2 + 0x1a0) + 1.0) *
              (*(float *)(lVar2 + 0x38) +
              *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0));
      if (DAT_031b1e90 <= fVar4) {
        fVar4 = DAT_031b1e90;
      }
      fVar3 = DAT_031b1dd0;
      if (DAT_031b1dd0 <= fVar4) {
        fVar3 = fVar4;
      }
      fVar3 = fVar3 * 0.15;
    }
    uVar1 = 2;
  }
  else {
    uVar1 = 3;
    fVar3 = *(float *)(*(long *)(param_2 + 0x40) + 0x308) * 0.25;
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
  }
  *param_3 = fVar3;
  *param_4 = 2;
  *param_5 = uVar1;
  return;
}




void FUN_00de5cbc(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [96];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_b8);
  FUN_00d4d9e8(auStack_a8);
  FUN_00d4daf4(auStack_a8,0,1,0,0);
  FUN_00d4dabc(auStack_a8,0x40000);
  uVar2 = FUN_00cfa9e4(auStack_b8);
  FUN_00cf3048(uVar2,"Die",0,0,0,0);
  uVar2 = FUN_00cfab94(auStack_b8);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d09494(*(undefined4 *)(lVar3 + 0x3c));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"build://Sounds/Turret.assetbundle/turret_death.mp3",0,0,
               0xffffffff,0,1);
  uVar2 = FUN_00cfaa74(auStack_b8);
  FUN_00cf32cc(0xbf800000,uVar2,"Effect_TurretDeath_State",1,0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_b8);
  FUN_00cf7478(0x3f800000);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfaa74(auStack_b8);
  FUN_00cf3428(0x40400000,uVar2,"Effect_TurretDeath_ExplosionSmall",0,"Bone_HeadWobble",0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_b8);
  FUN_00cf7478(0x3f19999a);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfaa74(auStack_b8);
  FUN_00cf3428(0x40400000,uVar2,"Effect_TurretDeath_ExplosionSmall",0,"Bone_SearchLight",0,1,0,0);
  uVar2 = FUN_00cfaa74(auStack_b8);
  FUN_00cf3428(0x40800000,uVar2,"Effect_TurretDeath_DebrisTrail",1,"Bone_SearchLight",0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_b8);
  FUN_00cf7478(0x3f4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfaa74(auStack_b8);
  FUN_00cf32cc(0x3f800000,uVar2,"Effect_TurretDustup",1,0,1,0,0);
  uVar2 = FUN_00cfab94(auStack_b8);
  FUN_00cf4164(0x3f800000,0x3ecccccd,uVar2,
               "build://Sounds/Turret.assetbundle/turret_onfire_loop.mp3",0,1,0xffffffff,0,1);
  uVar2 = FUN_00cfaf84(auStack_b8);
  FUN_00cf5460(0x40f00000,uVar2,auStack_a8,0,0,0,0);
  uVar2 = FUN_00cfa00c(auStack_b8);
  FUN_00cf6bb0(uVar2,FUN_00de5c08);
  FUN_00cfb5c4(auStack_b8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de5f80(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [96];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_b8);
  FUN_00d4d9e8(auStack_a8);
  FUN_00d4daf4(auStack_a8,0,1,0,0);
  FUN_00d4dabc(auStack_a8,0x40000);
  uVar2 = FUN_00cfa9e4(auStack_b8);
  FUN_00cf3048(uVar2,"Die",0,0,0,0);
  uVar2 = FUN_00cfab94(auStack_b8);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d09494(*(undefined4 *)(lVar3 + 0x3c));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"build://Sounds/Turret.assetbundle/turret_death.mp3",0,0,
               0xffffffff,0,1);
  uVar2 = FUN_00cfaa74(auStack_b8);
  FUN_00cf32cc(0xbf800000,uVar2,"Effect_TurretDeath_State_lt",1,0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_b8);
  FUN_00cf7478(0x3f800000);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfaa74(auStack_b8);
  FUN_00cf3428(0x40400000,uVar2,"Effect_TurretDeath_ExplosionSmall",0,"Bone_HeadWobble",0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_b8);
  FUN_00cf7478(0x3f19999a);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfaa74(auStack_b8);
  FUN_00cf3428(0x40400000,uVar2,"Effect_TurretDeath_ExplosionSmall",0,"Bone_SearchLight",0,1,0,0);
  uVar2 = FUN_00cfaa74(auStack_b8);
  FUN_00cf3428(0x40800000,uVar2,"Effect_TurretDeath_DebrisTrail",1,"Bone_SearchLight",0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_b8);
  FUN_00cf7478(0x3f4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfab94(auStack_b8);
  FUN_00cf4164(0x3f800000,0x3ecccccd,uVar2,
               "build://Sounds/Turret.assetbundle/turret_onfire_loop.mp3",0,1,0xffffffff,0,1);
  uVar2 = FUN_00cfaf84(auStack_b8);
  FUN_00cf5460(0x40f00000,uVar2,auStack_a8,0,0,0,0);
  uVar2 = FUN_00cfa00c(auStack_b8);
  FUN_00cf6bb0(uVar2,FUN_00de5c08);
  FUN_00cfb5c4(auStack_b8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

