// functions/00e02 — 11 functions
#include "libGameKindred.h"




void FUN_00e02080(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_68 [16];
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_68);
  lVar2 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_68);
  FUN_00cf7b3c(uVar3,1);
  plVar4 = (long *)FUN_00cfab04(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,"Wrist");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Warhawk_C_Wrist");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,1);
  local_58._0_4_ = 0x3e19999a;
  local_50 = 1;
  (**(code **)(*plVar4 + 0x60))(plVar4,&local_58);
  plVar4 = (long *)FUN_00cfaa2c(auStack_68);
  (**(code **)(*plVar4 + 0x50))(plVar4,"Ability03_Aiming");
  plVar4 = (long *)FUN_00cfac24(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Warhawk_C_LockOn");
  lVar2 = FUN_00d09310();
  FUN_00d0a4fc(*(undefined4 *)(lVar2 + 0x62c));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  plVar4 = (long *)FUN_00cfb1c4(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"*Warhawk_C_Warning*",0);
  (**(code **)(*plVar4 + 0x20))(plVar4,FUN_00e60680);
  uVar3 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfafcc(auStack_68);
  FUN_00cf52e0(uVar3,"Warhawk_C_Warning");
  plVar4 = (long *)FUN_00cf9b44(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,PTR_s_Buff_Warhawk_C_Control_02bf1930);
  local_58 = (code *)CONCAT44(local_58._4_4_,0x40000000);
  local_50 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  FUN_00cf9eec(auStack_68);
  plVar4 = (long *)FUN_00cf9afc(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))
                             (plVar4,PTR_s_Buff_Warhawk_Enhanced_BasicAttac_02bf18e8);
  local_58 = FUN_00e0190c;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  lVar2 = FUN_00cf9f7c(auStack_68);
  lVar5 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Warhawk_Talent_TalentC_02bf2338;
  plVar4 = (long *)FUN_00cf9afc(lVar2 + 200);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Warhawk_C_Targets_02bf1918);
  local_58._0_4_ = 0x3fc00000;
  local_50 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  plVar4 = (long *)FUN_00cf9afc(lVar2 + 0xb0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Warhawk_C_TargetsTalent_02bf1920)
  ;
  local_58 = (code *)CONCAT44(local_58._4_4_,0x3fc00000);
  local_50 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  lVar2 = FUN_00cf9f7c(auStack_68);
  lVar5 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Warhawk_C_Targets_02bf1918;
  plVar4 = (long *)FUN_00cfa75c(lVar2 + 0xb0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Ability__Warhawk__C_Aim_02befec0,3,1);
  (**(code **)(*plVar4 + 0x30))();
  lVar2 = FUN_00cf9f7c(auStack_68);
  lVar5 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Warhawk_C_TargetsTalent_02bf1920;
  plVar4 = (long *)FUN_00cfa75c(lVar2 + 0xb0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Ability__Warhawk__C_Aim_02befec0,3,1);
  (**(code **)(*plVar4 + 0x30))();
  lVar2 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e023e4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_58 [16];
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  lVar2 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfafcc(auStack_58);
  FUN_00cf52e0(uVar3,"Warhawk_C_Warning");
  plVar4 = (long *)FUN_00cf9b44(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,PTR_s_Buff_Warhawk_C_Control_02bf1930);
  local_48 = (code *)CONCAT44(local_48._4_4_,0x40000000);
  local_40 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  FUN_00cf9eec(auStack_58);
  plVar4 = (long *)FUN_00cfaa2c(auStack_58);
  (**(code **)(*plVar4 + 0x50))(plVar4,"Ability03");
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3f000000);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfafcc(auStack_58);
  FUN_00cf52e0(uVar3,"Warhawk_C_Warning");
  uVar3 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar3,0xc9,"GunEmpoweredHigher");
  FUN_00cfcbb0();
  FUN_00cf9eec(auStack_58);
  plVar4 = (long *)FUN_00cfac24(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Warhawk_C_Fire");
  lVar2 = FUN_00d09310();
  FUN_00d0a4fc(*(undefined4 *)(lVar2 + 0x62c));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  plVar4 = (long *)FUN_00cf9afc(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))
                             (plVar4,PTR_s_Buff_Warhawk_Enhanced_BasicAttac_02bf18e8);
  local_48 = FUN_00e0190c;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  lVar2 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e025a4(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auStack_58 [16];
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  FUN_00cf9ea4(auStack_58);
  FUN_00cf98bc(auStack_58);
  uVar2 = FUN_00cf9ab4(auStack_58);
  FUN_00cf44e8(0x40800000,uVar2,PTR_s_Buff_Withdraw_02beb458,1,0);
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x40000000);
  FUN_00cf7578(uVar2,0);
  plVar3 = (long *)FUN_00cfab04(auStack_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"Bone_LauncherHandle");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Warhawk_Withdraw");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,0);
  local_48[0] = 0x40733333;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x60))(plVar3,local_48);
  plVar3 = (long *)FUN_00cfab04(auStack_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Warhawk_Withdraw_Ground");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,0);
  local_48[0] = 0x3fcccccd;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x60))(plVar3,local_48);
  FUN_00cf9eec(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e02734(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [16];
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_00cfb5b4(auStack_68);
  FUN_00cfb05c(auStack_68);
  plVar4 = (long *)FUN_00cfaa2c(auStack_68);
  (**(code **)(*plVar4 + 0x58))(plVar4,param_1);
  plVar4 = (long *)FUN_00cfac24(auStack_68);
  ppuVar1 = &PTR_s_Sound_Miho_Crit_Attack_01_02befef0;
  if (param_3 != 2) {
    ppuVar1 = &PTR_s_Sound_Miho_Default_Attack_01_02befed8;
  }
  ppuVar2 = &PTR_s_Sound_Miho_Crit_Impact_01_02beff20;
  if (param_3 != 2) {
    ppuVar2 = &PTR_s_Sound_Miho_Default_Impact_01_02beff08;
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,*ppuVar1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,ppuVar1[1]);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,ppuVar1[2]);
  lVar5 = FUN_00d09310();
  FUN_00d0a550(*(undefined4 *)(lVar5 + 0x63c));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  plVar4 = (long *)FUN_00cfab04(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"Bone_Sword");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Miho_Sword");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,0);
  local_58[0] = 0x3ee66666;
  local_50 = 1;
  (**(code **)(*plVar4 + 0x60))(plVar4,local_58);
  uVar6 = FUN_00cfa294(auStack_68);
  FUN_00cf7570(uVar6,FUN_00cf76f0);
  FUN_00cf7578(uVar6,FUN_00cfb9b0);
  plVar4 = (long *)FUN_00cfa0e4(auStack_68);
  (**(code **)(*plVar4 + 0x58))(plVar4,param_3);
  plVar4 = (long *)FUN_00cfac24(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,*ppuVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,ppuVar2[1]);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,ppuVar2[2]);
  lVar5 = FUN_00d09310();
  FUN_00d0a550(*(undefined4 *)(lVar5 + 0x63c));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  plVar4 = (long *)FUN_00cfab04(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,param_2);
  (**(code **)(*plVar4 + 0x78))(plVar4,0);
  FUN_00cfb0a4(auStack_68);
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0298c(void)

{
  FUN_00e02734("Attack","Effect_Miho_AA",0);
  return;
}




void FUN_00e029a4(void)

{
  FUN_00e02734("AltAttack","Effect_Miho_AA_Alt",0);
  return;
}




void FUN_00e029bc(void)

{
  FUN_00e02734("CritAttack","Effect_Miho_AA_Crit",2);
  return;
}




void FUN_00e029d4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_c8 [16];
  undefined4 local_b8 [2];
  undefined4 local_b0;
  undefined4 local_a8 [2];
  undefined4 local_a0;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_c8);
  lVar2 = FUN_00cfa6cc(auStack_c8);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_c8);
  FUN_00cf7b3c(uVar3,1);
  plVar4 = (long *)FUN_00cfaa2c(auStack_c8);
  (**(code **)(*plVar4 + 0x50))(plVar4,"Ability01");
  plVar4 = (long *)FUN_00cfac24(auStack_c8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Miho_AbilityA_01");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,"Sound_Miho_AbilityA_02");
  lVar2 = FUN_00d09310();
  FUN_00d0a550(*(undefined4 *)(lVar2 + 0x64c));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uVar3 = FUN_00cfa294(auStack_c8);
  FUN_00cf7478(0x3ecccccd);
  FUN_00cf7578(uVar3,0);
  plVar4 = (long *)FUN_00cfab04(auStack_c8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Miho_A_DashStartup");
  (**(code **)(*plVar4 + 0x78))(plVar4,0);
  plVar4 = (long *)FUN_00cf9afc(auStack_c8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"Buff_Miho_A_Vanish");
  local_a8[0] = 0x3e4ccccd;
  local_a0 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_a8);
  plVar4 = (long *)FUN_00cf9afc(auStack_c8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"Buff_Dodge");
  local_a8[0] = 0x3e99999a;
  local_a0 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_a8);
  plVar4 = (long *)FUN_00cfac6c(auStack_c8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"ability1");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x3dcccccd);
  (**(code **)(*plVar4 + 0x20))();
  plVar4 = (long *)FUN_00cf9afc(auStack_c8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_SelfProjectile_02beb4b8);
  local_a8[0] = 0x3e99999a;
  local_a0 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,local_a8);
  (**(code **)(*plVar4 + 0x48))(plVar4,0xd4);
  plVar4 = (long *)FUN_00cfa12c(auStack_c8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x88))();
  local_a8[0] = 0x3e4ccccd;
  local_a0 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xa8))(plVar4,local_a8);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  uVar3 = FUN_00cfa294(auStack_c8);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  FUN_00cfb56c(auStack_c8);
  FUN_00d4d9e8(local_a8);
  FUN_00d4daf4(local_a8,0,1,0,0);
  FUN_00d4dabc(local_a8,0x40000);
  uVar3 = FUN_00cfaf84(auStack_c8);
  FUN_00cf5460(0x40200000,uVar3,local_a8,0,0,0,0);
  plVar4 = (long *)FUN_00cf9b44(auStack_c8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,PTR_s_Buff_Miho_A_ApplyDamage_02bf19c0);
  local_b8[0] = 0x3e99999a;
  local_b0 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_b8);
  plVar4 = (long *)FUN_00cfab04(auStack_c8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"Bone_Sword");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Miho_Sword");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,0);
  local_b8[0] = 0x3f800000;
  local_b0 = 1;
  (**(code **)(*plVar4 + 0x60))(plVar4,local_b8);
  plVar4 = (long *)FUN_00cfab04(auStack_c8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Miho_A_Dash_Cut");
  (**(code **)(*plVar4 + 0x78))(plVar4,0);
  plVar4 = (long *)FUN_00cf9dcc(auStack_c8);
  (**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Miho_C_SlashCounter_02bf1960);
  lVar2 = FUN_00cfa6cc(auStack_c8);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_c8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e02df0(void)

{
  undefined8 uVar1;
  undefined8 in_x3;
  
  uVar1 = FUN_00d5048c();
  FUN_00d55794(uVar1,in_x3,0);
  return;
}




void FUN_00e02e18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  undefined1 local_58 [8];
  float local_50;
  undefined1 local_48 [8];
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d5048c();
  FUN_00d55794(uVar2,local_48,0);
  FUN_00d557c4(uVar2,local_58,&DAT_03218f68);
  fVar3 = (float)FUN_00d50cc8(param_1);
  *param_4 = CONCAT44(local_58._4_4_ * fVar3 + local_48._4_4_,
                      local_58._0_4_ * fVar3 + local_48._0_4_);
  *(float *)(param_4 + 1) = fVar3 * local_50 + local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e02ec0(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_c8 [16];
  undefined4 local_b8 [2];
  undefined4 local_b0;
  undefined4 local_a8 [2];
  undefined4 local_a0;
  undefined4 local_68;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_c8);
  lVar2 = FUN_00cfa6cc(auStack_c8);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_c8);
  FUN_00cf7b3c(uVar3,1);
  FUN_00cf9ea4(auStack_c8);
  plVar4 = (long *)FUN_00cfac6c(auStack_c8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"ability2");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x3dcccccd);
  (**(code **)(*plVar4 + 0x20))();
  plVar4 = (long *)FUN_00cfaa2c(auStack_c8);
  (**(code **)(*plVar4 + 0x50))(plVar4,"Ability02_Prep");
  plVar4 = (long *)FUN_00cf9afc(auStack_c8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Miho_C_SlashCounter_02bf1960);
  local_a8[0] = 0x40000000;
  local_a0 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_a8);
  plVar4 = (long *)FUN_00cfab04(auStack_c8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"Bone_Sword");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Miho_Sword");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,0);
  local_a8[0] = 0x3f800000;
  local_a0 = 1;
  (**(code **)(*plVar4 + 0x60))(plVar4,local_a8);
  uVar3 = FUN_00cfa294(auStack_c8);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar3,0);
  plVar4 = (long *)FUN_00cfab04(auStack_c8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))();
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Miho_B_Slash_Primary");
  plVar4 = (long *)FUN_00cfac24(auStack_c8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Miho_AbilityB_Slash1");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,"Sound_Miho_AbilityB_Slash2");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,"Sound_Miho_AbilityB_Slash3");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,"Sound_Miho_AbilityB_Slash4");
  lVar2 = FUN_00d09310();
  FUN_00d0a550(*(undefined4 *)(lVar2 + 0x650));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  FUN_00d4d9e8(local_a8);
  FUN_00d4dabc(local_a8,0x40000);
  FUN_00d4daf4(local_a8,0,1,0,0);
  FUN_00d4dcdc(local_a8,1);
  local_68 = 0x3f266666;
  uVar3 = FUN_00cfaf3c(auStack_c8);
  uVar3 = FUN_00cf5ac8(0x3f4ccccd,uVar3,FUN_00e02df0,FUN_00e02e18);
  FUN_00cf5ae0(uVar3,local_a8);
  plVar4 = (long *)FUN_00cf9b44(auStack_c8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,PTR_s_Buff_Miho_B_ApplyDamage_02bf19c8);
  local_b8[0] = 0x3dcccccd;
  local_b0 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_b8);
  uVar3 = FUN_00cfa294(auStack_c8);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  lVar2 = FUN_00cf9f7c(auStack_c8);
  lVar5 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Miho_C_SlashCounter_02bf1960;
  plVar4 = (long *)FUN_00cfa75c(lVar2 + 0xb0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Ability__Miho__B_Slash_02beff60,3,1);
  (**(code **)(*plVar4 + 0x30))();
  lVar2 = FUN_00cfa6cc(auStack_c8);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_c8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

