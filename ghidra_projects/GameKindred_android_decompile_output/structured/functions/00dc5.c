// functions/00dc5 — 24 functions
#include "libGameKindred.h"




void FUN_00dc505c(undefined8 param_1)

{
  FUN_00d59f54(param_1,4,3,0x19,0);
  return;
}




void FUN_00dc5070(undefined8 param_1)

{
  FUN_00d59f54(param_1,4,2,0x19,0);
  return;
}




void FUN_00dc5084(undefined8 param_1)

{
  FUN_00d59f54(param_1,4,4,0x19,0);
  return;
}




float FUN_00dc5098(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_00d59f54(param_1,5,7,0x19,0);
  fVar2 = (float)FUN_00d59f54(param_1,5,9,0x19,0);
  return fVar1 / fVar2;
}




void FUN_00dc50f0(undefined8 param_1)

{
  FUN_00d59f54(param_1,5,7,0x19,0);
  return;
}




void FUN_00dc5104(undefined8 param_1)

{
  FUN_00d59f54(param_1,5,9,0x19,0);
  return;
}




void FUN_00dc5118(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 auStack_e8 [16];
  undefined4 local_d8 [2];
  undefined4 local_d0;
  code *local_c8;
  undefined4 local_c0;
  code *local_b8;
  undefined4 local_b0;
  code *local_a8;
  undefined4 local_a0;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_e8);
  lVar2 = FUN_00cfa6cc(auStack_e8);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_e8);
  FUN_00cf7b3c(uVar3,1);
  FUN_00cf9ea4(auStack_e8);
  uVar3 = FUN_00cfa9e4(auStack_e8);
  FUN_00cf3048(uVar3,"LeapStartUp",0,1,0,0);
  uVar3 = FUN_00cfab94(auStack_e8);
  lVar2 = FUN_00d09310();
  uVar5 = FUN_00d0a064(*(undefined4 *)(lVar2 + 0x480));
  FUN_00cf4164(0x3f800000,uVar5,uVar3,"Sound_Tony_Ability_C_Startup",0,0,0xffffffff,0,1);
  plVar4 = (long *)FUN_00cfab04(auStack_e8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"Bone_Rightjet");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Tony_C_R_Thruster");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,1);
  local_a8._0_4_ = 0x3fc00000;
  local_a0 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,&local_a8);
  (**(code **)(*plVar4 + 0xb0))(plVar4,0);
  plVar4 = (long *)FUN_00cfab04(auStack_e8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"Bone_Leftjet");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Tony_C_L_Thruster");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,1);
  local_a8._0_4_ = 0x3fc00000;
  local_a0 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,&local_a8);
  (**(code **)(*plVar4 + 0xb0))(plVar4,0);
  plVar4 = (long *)FUN_00cfab04(auStack_e8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Tony_C_Trail");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,1);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,0x3f800000);
  local_a0 = 1;
  (**(code **)(*plVar4 + 0x60))(plVar4,&local_a8);
  plVar4 = (long *)FUN_00cfb1c4(auStack_e8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"*Tony_C_WarningIndicator*",0);
  (**(code **)(*plVar4 + 0x20))(plVar4,FUN_00e60680);
  uVar3 = FUN_00cfa294(auStack_e8);
  FUN_00cf7580(uVar3,FUN_00dc56b4);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfab94(auStack_e8);
  lVar2 = FUN_00d09310();
  uVar5 = FUN_00d0a064(*(undefined4 *)(lVar2 + 0x480));
  FUN_00cf4164(0x3f800000,uVar5,uVar3,"Sound_Tony_Ability_C_Rush",0,0,0xffffffff,0,1);
  uVar3 = FUN_00cfa9e4(auStack_e8);
  FUN_00cf3048(uVar3,"Leap",0,1,0,0);
  plVar4 = (long *)FUN_00cfa12c(auStack_e8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x90))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,1);
  local_a8 = FUN_00dc56c8;
  local_a0 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xa0))(plVar4,&local_a8);
  (**(code **)(*plVar4 + 0xb8))(0x41200000);
  uVar3 = FUN_00cfa294(auStack_e8);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  FUN_00cfb56c(auStack_e8);
  FUN_00d4d9e8(&local_a8);
  FUN_00d4dabc(&local_a8,0x200000);
  FUN_00d4daf4(&local_a8,0,1,0,0);
  uVar3 = FUN_00cfa9e4(auStack_e8);
  FUN_00cf3048(uVar3,"LeapLanding",0,1,0,"AttackToIdleCombat");
  uVar3 = FUN_00cfaf84(auStack_e8);
  FUN_00cf5460(0x40600000,uVar3,&local_a8,0,0,0,0);
  uVar3 = FUN_00cfaa74(auStack_e8);
  FUN_00cf32cc(0,uVar3,"Effect_Tony_C_Impact",0,0,1,0,0);
  plVar4 = (long *)FUN_00cfb134(auStack_e8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(0x3f19999a);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x3f000000);
  (**(code **)(*plVar4 + 0x20))(0x41700000);
  plVar4 = (long *)FUN_00cfa684(auStack_e8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  local_b8 = FUN_00dc5104;
  local_b0 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,&local_b8);
  local_c8 = FUN_00dc50f0;
  local_c0 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x20))(plVar4,&local_c8);
  local_d8[0] = 0x41200000;
  local_d0 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,local_d8);
  (**(code **)(*plVar4 + 0x48))();
  FUN_00cfa09c(auStack_e8);
  uVar3 = FUN_00cf9ab4(auStack_e8);
  FUN_00cf456c(uVar3,PTR_s_Buff_Stunned_02beb430,FUN_00dc56dc,1,0);
  uVar3 = FUN_00cf9ab4(auStack_e8);
  FUN_00cf456c(uVar3,PTR_s_Buff_Tony_C_SnapCamera_02bf08a0,FUN_00dc5098,1,0);
  FUN_00cf9eec(auStack_e8);
  uVar3 = FUN_00cfab94(auStack_e8);
  lVar2 = FUN_00d09310();
  uVar5 = FUN_00d0a064(*(undefined4 *)(lVar2 + 0x480));
  FUN_00cf4164(0x3f800000,uVar5,uVar3,"Sound_Tony_Ability_C_Uppercut",0,0,0xffffffff,0,1);
  uVar3 = FUN_00cfa294(auStack_e8);
  FUN_00cf7580(uVar3,FUN_00dc56f0);
  FUN_00cf7578(uVar3,0);
  lVar2 = FUN_00cfa6cc(auStack_e8);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_e8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dc56b4(undefined8 param_1)

{
  FUN_00d59f54(param_1,5,2,0x19,0);
  return;
}




void FUN_00dc56c8(undefined8 param_1)

{
  FUN_00d59f54(param_1,5,5,0x19,0);
  return;
}




void FUN_00dc56dc(undefined8 param_1)

{
  FUN_00d59f54(param_1,5,10,0x19,0);
  return;
}




void FUN_00dc56f0(undefined8 param_1)

{
  FUN_00d59f54(param_1,5,4,0x19,0);
  return;
}




void FUN_00dc5704(void)

{
  FUN_00cfc038(PTR_s_Buff_Tony_Withdraw_02bf08b0);
  return;
}




void FUN_00dc5714(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d50460();
  thunk_FUN_00d9ff34(local_30,uVar2);
  *param_3 = local_30[0];
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dc5770(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [16];
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_88);
  uVar2 = FUN_00cfb05c(auStack_88);
  FUN_00cf7b3c(uVar2,1);
  lVar3 = FUN_00cf9f7c(auStack_88);
  lVar4 = FUN_00cefb20(lVar3 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Reza_B_EmpoweredAttack_02beb600;
  uVar2 = FUN_00cfa9e4(lVar3 + 0xb0);
  FUN_00cf3048(uVar2,"EmpoweredDefAttack",0,1,FUN_00cfb9b0,"AttackToIdleCombat");
  uVar2 = FUN_00cfa9e4(lVar3 + 200);
  FUN_00cf3048(uVar2,param_1,0,1,FUN_00cfb9b0,"AttackToIdleCombat");
  uVar2 = FUN_00cfab94(lVar3 + 0xb0);
  lVar4 = FUN_00d09310();
  uVar5 = FUN_00d09f14(*(undefined4 *)(lVar4 + 0x3f0));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Reza_Ability_B_Empowered_Attack",0,0,0xffffffff,0,1);
  if (param_4 == 0) {
    uVar2 = FUN_00cfa294(auStack_88);
    FUN_00cf7478(0x3e4ccccd);
    FUN_00cf7578(uVar2,FUN_00cfb9b0);
  }
  else {
    uVar2 = FUN_00cfab94(lVar3 + 200);
    uVar5 = *param_2;
    lVar3 = FUN_00d09310();
    uVar6 = FUN_00d09f14(*(undefined4 *)(lVar3 + 0x3f0));
    FUN_00cf4164(0x3f800000,uVar6,uVar2,uVar5,0,0,0xffffffff,0,1);
    if (param_4 != 1) {
      lVar3 = (ulong)param_4 - 1;
      do {
        param_2 = param_2 + 1;
        FUN_00cf41bc(uVar2,*param_2);
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    uVar2 = FUN_00cfa294(auStack_88);
    FUN_00cf7478(0x3e4ccccd);
    FUN_00cf7578(uVar2,FUN_00cfb9b0);
    uVar2 = FUN_00cfab94(auStack_88);
    uVar5 = *param_3;
    lVar3 = FUN_00d09310();
    uVar6 = FUN_00d09f14(*(undefined4 *)(lVar3 + 0x3f0));
    FUN_00cf4164(0x3f800000,uVar6,uVar2,uVar5,0,0,0xffffffff,0,1);
    if (1 < param_4) {
      lVar3 = (ulong)param_4 - 1;
      do {
        param_3 = param_3 + 1;
        FUN_00cf41bc(uVar2,*param_3);
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
  }
  FUN_00cf98bc(auStack_88);
  uVar2 = FUN_00cf9ab4(auStack_88);
  uVar2 = FUN_00cf44e8(0x3e4ccccd,uVar2,PTR_s_Buff_Reza_EmpoweredAttackPfx_OnR_02beb630,1,0);
  FUN_00cf45cc(uVar2,FUN_00dc5714);
  FUN_00cf9eec(auStack_88);
  FUN_00cf99dc(auStack_88);
  lVar3 = FUN_00cf9f7c(auStack_88);
  lVar4 = FUN_00cefb20(lVar3 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Reza_B_EmpoweredAttack_02beb600;
  uVar2 = FUN_00cf9ab4(lVar3 + 0xb0);
  FUN_00cf44e8(0x3e4ccccd,uVar2,PTR_s_Buff_Reza_EmpoweredAttackPfx_02beb628,1,0);
  uVar2 = FUN_00cfa00c(auStack_88);
  FUN_00cf6bb0(uVar2,param_5);
  FUN_00cfb0a4(auStack_88);
  FUN_00cfb5c4(auStack_88);
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00dc5ab0(void)

{
  FUN_00dc5770("Attack",&PTR_s_Sound_Reza_Basic_Attack_01_02beed48,
               &PTR_s_Sound_Reza_Impacts_01_02beed68,3,FUN_00cfb6d0);
  return;
}




void FUN_00dc5ad8(void)

{
  FUN_00dc5770("AltAttack",&PTR_s_Sound_Reza_Basic_Attack_01_02beed48,
               &PTR_s_Sound_Reza_Impacts_01_02beed68,3,FUN_00cfb6d0);
  return;
}




void FUN_00dc5b00(void)

{
  FUN_00dc5770("CritAttack",&PTR_s_Sound_Reza_Crit_Attack_02beed60,
               &PTR_s_Sound_Reza_Crit_Impact_02beed80,1,FUN_00cfb8b4);
  return;
}




void FUN_00dc5b28(void)

{
  FUN_00dc5770("C_NetherformAttack",&PTR_s_Sound_Reza_Basic_Attack_01_02beed48,
               &PTR_s_Sound_Reza_Impacts_01_02beed68,3,FUN_00cfb760);
  return;
}




void FUN_00dc5b50(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  lVar2 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_38);
  FUN_00cf7b3c(uVar3,1);
  uVar3 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar3,"Ability01",0,1,0,"AttackToIdleCombat");
  plVar4 = (long *)FUN_00cfab04(auStack_38);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Reza_A_Cast");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,0);
  (**(code **)(*plVar4 + 0xb0))(plVar4,0);
  uVar5 = FUN_00cfab94(auStack_38);
  lVar2 = FUN_00d09310();
  uVar3 = FUN_00d09f14(*(undefined4 *)(lVar2 + 0x3f8));
  FUN_00cf4164(0x3f800000,uVar3,uVar5,"Sound_Reza_Ability_A_Projectile",0,0,0xffffffff,0,1);
  uVar3 = FUN_00cfa294(auStack_38);
  FUN_00cf7580(uVar3,FUN_00dc5cc4);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_38);
  uVar3 = FUN_00cfcad8(uVar3,0x57,"CenterBody");
  FUN_00cfcba8(uVar3,0);
  lVar2 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dc5cc4(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,5,0x19,0);
  return;
}




void FUN_00dc5cd8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return;
}




void FUN_00dc5ce4(undefined8 param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d59f54(param_2,1,6,0x19,0);
  *param_3 = fVar1 + 0.2;
  return;
}




void FUN_00dc5d28(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_58 [16];
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  FUN_00cfa6cc(auStack_58);
  uVar2 = FUN_00cfb05c(auStack_58);
  FUN_00cf7b3c(uVar2,1);
  uVar2 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar2,"Ability02",0,1,0,"AttackToIdleCombat");
  plVar3 = (long *)FUN_00cfab04(auStack_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Reza_B_Cast");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,0);
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7580(uVar2,FUN_00dc5ffc);
  FUN_00cf7578(uVar2,0);
  plVar3 = (long *)FUN_00cfa12c(auStack_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x88))();
  local_48[0] = 0x3e4ccccd;
  local_40 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xa8))(plVar3,local_48);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  FUN_00cf98bc(auStack_58);
  uVar2 = FUN_00cf9ab4(auStack_58);
  uVar2 = FUN_00cf4540(uVar2,PTR_s_Buff_SelfProjectile_02beb4b8,FUN_00dc5ce4,1,0);
  FUN_00cf45cc(uVar2,FUN_00dc66d4);
  FUN_00cf9eec(auStack_58);
  uVar4 = FUN_00cfab94(auStack_58);
  lVar5 = FUN_00d09310();
  uVar2 = FUN_00d09f14(*(undefined4 *)(lVar5 + 0x400));
  FUN_00cf4164(0x3f800000,uVar2,uVar4,"Sound_Reza_Ability_B_Dashing",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar2,0);
  FUN_00cfb56c(auStack_58);
  FUN_00cf98bc(auStack_58);
  uVar2 = FUN_00cf9ab4(auStack_58);
  uVar2 = FUN_00cf44e8(0x40400000,uVar2,PTR_s_Buff_SpeedDecayingUsingBuffVar_02beb4d0,1,0);
  FUN_00cf45d4(uVar2,FUN_00dc5cd8);
  uVar2 = FUN_00cf9ab4(auStack_58);
  FUN_00cf456c(uVar2,PTR_s_Buff_Reza_B_EmpoweredAttack_02beb600,FUN_00dc6010,1,0);
  FUN_00cf9eec(auStack_58);
  lVar5 = FUN_00cf9f7c(auStack_58);
  lVar6 = FUN_00cefb20(lVar5 + 0x10);
  lVar5 = lVar5 + 0xb0;
  *(undefined **)(lVar6 + 8) = PTR_s_Buff_Reza_Talent_BurningBarrier_02bee2e0;
  FUN_00cf98bc(lVar5);
  uVar2 = FUN_00cf9ab4(lVar5);
  FUN_00cf456c(uVar2,PTR_s_Buff_Reza_BurningBarrier_Barrier_02bee2d8,FUN_00dc6010,1,0);
  FUN_00cf9eec(lVar5);
  lVar5 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar5 + 0x10) = 0;
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dc5ffc(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,5,0x19,0);
  return;
}

