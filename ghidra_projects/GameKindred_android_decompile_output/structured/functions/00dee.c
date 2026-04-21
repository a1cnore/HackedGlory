// functions/00dee — 21 functions
#include "libGameKindred.h"




void FUN_00dee018(undefined8 param_1)

{
  FUN_00d59f54(param_1,8,8,0x19,0);
  return;
}




void FUN_00dee02c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfad44(auStack_38);
  FUN_00cf2ec0(uVar2,FUN_00dedc98);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dee090(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

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
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,param_1);
  (**(code **)(*plVar4 + 0x18))(plVar4,"AttackToIdleCombat");
  plVar4 = (long *)FUN_00cfac24(auStack_68);
  ppuVar1 = &PTR_s_Sound_Kensei_Default_Attack_01_02bef820;
  if (param_4 != 2) {
    ppuVar1 = &PTR_s_Sound_Kensei_Default_Attack_01_02bef808;
  }
  ppuVar2 = &PTR_s_Sound_Kensei_Default_Attack_Hit__02bef850;
  if (param_4 != 2) {
    ppuVar2 = &PTR_s_Sound_Kensei_Default_Attack_Hit__02bef838;
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,*ppuVar1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,ppuVar1[1]);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,ppuVar1[2]);
  lVar5 = FUN_00d09310();
  FUN_00d0a10c(*(undefined4 *)(lVar5 + 0x4b4));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uVar6 = FUN_00cfa294(auStack_68);
  FUN_00cf7570(uVar6,FUN_00cf76f0);
  FUN_00cf7578(uVar6,FUN_00cfb9b0);
  FUN_00cf99dc(auStack_68);
  plVar4 = (long *)FUN_00cfa09c(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  (**(code **)(*plVar4 + 0x58))(plVar4,param_4);
  plVar4 = (long *)FUN_00cf9b44(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,param_2);
  local_58[0] = 0x3dcccccd;
  local_50 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_58);
  FUN_00cf9eec(auStack_68);
  plVar4 = (long *)FUN_00cfab04(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"Bone_Weapon");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,param_3);
  (**(code **)(*plVar4 + 0x78))(plVar4,1);
  plVar4 = (long *)FUN_00cfac24(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,*ppuVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,ppuVar2[1]);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,ppuVar2[2]);
  lVar5 = FUN_00d09310();
  FUN_00d0a10c(*(undefined4 *)(lVar5 + 0x4b4));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  FUN_00cfb0a4(auStack_68);
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dee2ec(void)

{
  FUN_00dee090("Attack",PTR_s_Buff_Kensei_DefaultAttack_Effect_02bf13b8,"Effect_Kensei_AA_Trail",0);
  return;
}




void FUN_00dee310(void)

{
  FUN_00dee090("AltAttack",PTR_s_Buff_Kensei_AltAttack_EffectOnHi_02bf13c0,"Effect_Kensei_AA_Trail",
               0);
  return;
}




void FUN_00dee334(void)

{
  FUN_00dee090("CritAttack",PTR_s_Buff_Kensei_CritAttack_EffectOnH_02bf13c8,
               "Effect_Kensei_AA_Crit_Trail",2);
  return;
}




void FUN_00dee358(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined1 auStack_160 [16];
  undefined4 local_150 [2];
  undefined4 local_148;
  code *local_140;
  undefined4 local_138;
  undefined4 local_130 [2];
  undefined4 local_128;
  code *local_d0;
  undefined4 local_c8;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_160);
  uVar2 = FUN_00cfb05c(auStack_160);
  FUN_00cf7b3c(uVar2,1);
  lVar3 = FUN_00cfa6cc(auStack_160);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  lVar4 = FUN_00cf9f7c(auStack_160);
  lVar5 = FUN_00cefb20(lVar4 + 0x10);
  lVar3 = lVar4 + 0xb0;
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Kensei_B_EmpoweredByB_02bf13e8;
  plVar6 = (long *)FUN_00cfaa2c(lVar3);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6,"Ability01_Enhanced");
  (**(code **)(*plVar6 + 0x18))(plVar6,"AttackToIdleCombat");
  plVar6 = (long *)FUN_00cfab04(lVar3);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x58))();
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))(plVar6,"Effect_Kensei_A_Attack_Emp");
  (**(code **)(*plVar6 + 0x78))(plVar6,1);
  plVar6 = (long *)FUN_00cfac24(lVar3);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x58))(plVar6,"Sound_Kensei_A_Empowered");
  lVar3 = FUN_00d09310();
  FUN_00d0a10c(*(undefined4 *)(lVar3 + 0x4b8));
  (**(code **)(*plVar6 + 0x28))(plVar6);
  lVar4 = lVar4 + 200;
  plVar6 = (long *)FUN_00cfac24(lVar4);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x58))(plVar6,"Sound_Kensei_A");
  lVar3 = FUN_00d09310();
  FUN_00d0a10c(*(undefined4 *)(lVar3 + 0x4b8));
  (**(code **)(*plVar6 + 0x28))(plVar6);
  lVar3 = FUN_00cf9f7c(lVar4);
  lVar5 = FUN_00cefb20(lVar3 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Kensei_A_StepCounter_02bf13d0;
  plVar6 = (long *)FUN_00cfaa2c(lVar3 + 200);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6,"Ability01_A");
  (**(code **)(*plVar6 + 0x18))(plVar6,"AttackToIdleCombat");
  plVar6 = (long *)FUN_00cfab04(lVar3 + 200);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x58))();
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))(plVar6,"Effect_Kensei_A_Attack01");
  (**(code **)(*plVar6 + 0x78))(plVar6,1);
  uVar2 = FUN_00cf9f34(lVar4);
  uVar7 = FUN_00d9ab88();
  FUN_00d9b158(uVar7,PTR_s_Buff_Kensei_A_StepCounter_02bf13d0,2,2);
  FUN_00d9b108();
  FUN_00d9b0f8(uVar2);
  plVar6 = (long *)FUN_00cfaa2c();
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6,"Ability01_B");
  (**(code **)(*plVar6 + 0x18))(plVar6,"AttackToIdleCombat");
  FUN_00d9b0f8(uVar2);
  plVar6 = (long *)FUN_00cfab04();
  plVar6 = (long *)(**(code **)(*plVar6 + 0x58))();
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))(plVar6,"Effect_Kensei_A_Attack02");
  (**(code **)(*plVar6 + 0x78))(plVar6,1);
  uVar2 = FUN_00cf9f34(lVar4);
  uVar7 = FUN_00d9ab88();
  FUN_00d9b158(uVar7,PTR_s_Buff_Kensei_A_StepCounter_02bf13d0,2,1);
  FUN_00d9b108();
  FUN_00d9b0f8(uVar2);
  plVar6 = (long *)FUN_00cfaa2c();
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6,"Ability01_C");
  (**(code **)(*plVar6 + 0x18))(plVar6,"AttackToIdleCombat");
  FUN_00d9b0f8(uVar2);
  plVar6 = (long *)FUN_00cfab04();
  plVar6 = (long *)(**(code **)(*plVar6 + 0x58))();
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))(plVar6,"Effect_Kensei_A_Attack02");
  (**(code **)(*plVar6 + 0x78))(plVar6,1);
  lVar3 = FUN_00cf9f7c(auStack_160);
  lVar4 = FUN_00cefb20(lVar3 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Kensei_A_StepCounter_02bf13d0;
  plVar6 = (long *)FUN_00cf9afc(lVar3 + 200);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6,PTR_s_Buff_Kensei_A_StepCounter_02bf13d0);
  local_d0 = FUN_00deea90;
  local_c8 = 3;
  plVar6 = (long *)(**(code **)(*plVar6 + 0x18))(plVar6,&local_d0);
  local_130[0] = 3;
  local_128 = 1;
  (**(code **)(*plVar6 + 0x20))(plVar6,local_130);
  uVar2 = FUN_00cfa294(auStack_160);
  FUN_00cf7580(uVar2,FUN_00deeaa4);
  FUN_00cf7578(uVar2,0);
  plVar6 = (long *)FUN_00cf9afc(auStack_160);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6,PTR_s_Buff_SelfProjectile_02beb4b8);
  local_d0 = (code *)CONCAT44(local_d0._4_4_,0x3e4ccccd);
  local_c8 = 1;
  plVar6 = (long *)(**(code **)(*plVar6 + 0x18))(plVar6,&local_d0);
  (**(code **)(*plVar6 + 0x48))(plVar6,0x85);
  lVar4 = FUN_00cf9f7c(auStack_160);
  lVar5 = FUN_00cefb20(lVar4 + 0x10);
  lVar3 = lVar4 + 0xb0;
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Kensei_B_EmpoweredByB_02bf13e8;
  plVar6 = (long *)FUN_00cf9afc(lVar3);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6,PTR_s_Buff_Kensei_B_EmpoweredByB_02bf13e8);
  local_d0 = FUN_00deeab8;
  local_c8 = 3;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_d0);
  plVar6 = (long *)FUN_00cfa12c(lVar3);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x88))();
  local_d0 = FUN_00deeacc;
  local_c8 = 3;
  plVar6 = (long *)(**(code **)(*plVar6 + 0xa8))(plVar6,&local_d0);
  (**(code **)(*plVar6 + 0xb0))(plVar6,1);
  uVar2 = FUN_00cfa294(lVar3);
  FUN_00cf7580(uVar2,FUN_00deeacc);
  FUN_00cf7578(uVar2,0);
  plVar6 = (long *)FUN_00cfa12c(lVar4 + 200);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x88))();
  local_d0 = FUN_00deeae0;
  local_c8 = 3;
  plVar6 = (long *)(**(code **)(*plVar6 + 0xa8))(plVar6,&local_d0);
  (**(code **)(*plVar6 + 0xb0))(plVar6,1);
  uVar2 = FUN_00cfa294(lVar4 + 200);
  FUN_00cf7580(uVar2,FUN_00deeae0);
  FUN_00cf7578(uVar2,0);
  FUN_00cfb56c(auStack_160);
  FUN_00d4d9e8(&local_d0);
  FUN_00d4daf4(&local_d0,0,1,0,0);
  FUN_00d4dba0(0x42700000,&local_d0);
  FUN_00d4dabc(&local_d0,0x40000);
  FUN_00d4d9e8(local_130);
  FUN_00d4daf4(local_130,0,1,0,0);
  FUN_00d4dabc(local_130,0x40000);
  uVar2 = FUN_00cfaf84(auStack_160);
  FUN_00cf5460(0x40a00000,uVar2,&local_d0,0,0,1,0);
  uVar2 = FUN_00cfaf84(auStack_160);
  FUN_00cf5460(0x3fa66666,uVar2,local_130,0,0,1,0);
  plVar6 = (long *)FUN_00cf9b44(auStack_160);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x70))(plVar6,PTR_s_Buff_Kensei_A_DealDamage_02bf13d8);
  local_140 = (code *)CONCAT44(local_140._4_4_,0x3e4ccccd);
  local_138 = 1;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_140);
  lVar3 = FUN_00cf9f7c(auStack_160);
  lVar4 = FUN_00cefb20(lVar3 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Kensei_B_EmpoweredByB_02bf13e8;
  plVar6 = (long *)FUN_00cf9b44(lVar3 + 0xb0);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x70))(plVar6,PTR_s_Buff_Kensei_A_Slow_02bf13e0);
  local_140 = FUN_00d90338;
  local_138 = 3;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_140);
  FUN_00cf9eec(auStack_160);
  plVar6 = (long *)FUN_00cf9afc(auStack_160);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6,PTR_s_Buff_Kensei_A_StepCounter_02bf13d0);
  local_140 = FUN_00deea90;
  local_138 = 3;
  plVar6 = (long *)(**(code **)(*plVar6 + 0x18))(plVar6,&local_140);
  local_150[0] = 0;
  local_148 = 1;
  (**(code **)(*plVar6 + 0x20))(plVar6,local_150);
  uVar2 = FUN_00cfa834(auStack_160);
  FUN_00cf4dc4(uVar2,PTR_s_Buff_Kensei_A_StepCounter_02bf13d0,0xffffffff,0);
  FUN_00cf98bc(auStack_160);
  uVar2 = FUN_00cf9d84(auStack_160);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Kensei_B_EmpoweredByB_02bf13e8);
  FUN_00cf9eec(auStack_160);
  lVar3 = FUN_00cfa6cc(auStack_160);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  FUN_00cfb5c4(auStack_160);
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00deea90(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,7,0x19,0);
  return;
}




void FUN_00deeaa4(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,10,0x19,0);
  return;
}




void FUN_00deeab8(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,4,0x19,0);
  return;
}




void FUN_00deeacc(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,6,0x19,0);
  return;
}




void FUN_00deeae0(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,4,0x19,0);
  return;
}




void FUN_00deeaf4(void)

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
  plVar4 = (long *)FUN_00cfaa2c(auStack_68);
  (**(code **)(*plVar4 + 0x50))(plVar4,"Ability02_AttackAndLeap");
  plVar4 = (long *)FUN_00cfab04(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"Bone_Weapon");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Kensei_B_Attack");
  (**(code **)(*plVar4 + 0x78))(plVar4,1);
  plVar4 = (long *)FUN_00cfac24(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Kensei_B_Attack");
  lVar3 = FUN_00d09310();
  FUN_00d0a10c(*(undefined4 *)(lVar3 + 0x4bc));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uVar2 = FUN_00cfa294(auStack_68);
  FUN_00cf7580(uVar2,FUN_00deef28);
  FUN_00cf7578(uVar2,0);
  FUN_00cf99dc(auStack_68);
  plVar4 = (long *)FUN_00cfa09c(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"DAMAGE",1);
  (**(code **)(*plVar4 + 0x70))(plVar4,1);
  plVar4 = (long *)FUN_00cfac24(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))
                             (plVar4,PTR_s_Sound_Kensei_Default_Attack_Hit__02bef838);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))
                             (plVar4,PTR_s_Sound_Kensei_Default_Attack_Hit__02bef840);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))
                             (plVar4,PTR_s_Sound_Kensei_Default_Attack_Hit__02bef848);
  lVar3 = FUN_00d09310();
  FUN_00d0a10c(*(undefined4 *)(lVar3 + 0x4bc));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  plVar4 = (long *)FUN_00cf9b44(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))
                             (plVar4,PTR_s_Buff_Kensei_DefaultAttack_Effect_02bf13b8);
  local_48 = (code *)CONCAT44(local_48._4_4_,0x3dcccccd);
  local_40 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  FUN_00cf9eec(auStack_68);
  FUN_00cf9ea4(auStack_68);
  plVar4 = (long *)FUN_00cfa12c(auStack_68);
  local_48 = FUN_00deef3c;
  local_40 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x80))(plVar4,&local_48);
  local_58 = FUN_00deef50;
  local_50 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xa8))(plVar4,&local_58);
  (**(code **)(*plVar4 + 0xb0))(plVar4,0);
  uVar2 = FUN_00cfa294(auStack_68);
  FUN_00cf7580(uVar2,FUN_00deef50);
  FUN_00cf7578(uVar2,0);
  plVar4 = (long *)FUN_00cfab04(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Kensei_B_Landing");
  (**(code **)(*plVar4 + 0x78))(plVar4,0);
  FUN_00cfb56c(auStack_68);
  plVar4 = (long *)FUN_00cf9afc(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Kensei_B_EmpoweredByB_02bf13e8);
  local_48 = FUN_00deeab8;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  FUN_00cfacb4(auStack_68);
  FUN_00cf50b0(0x3e99999a);
  lVar3 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_00cf9f7c(auStack_68);
  lVar5 = FUN_00cefb20(lVar3 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Kensei_Talent_TalentB_02bf2148;
  plVar4 = (long *)FUN_00cf9afc(lVar3 + 0xb0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Invulnerable_02beb400);
  local_48 = FUN_00deef64;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  plVar4 = (long *)FUN_00cf9afc(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))
                             (plVar4,PTR_s_Buff_Kensei_B_FortifiedHealth_Co_02bf13f8);
  local_48 = FUN_00deef7c;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  uVar2 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(0x3ecccccd);
  FUN_00cf7578(uVar2,0);
  plVar4 = (long *)FUN_00cfaa2c(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"Ability02_Stance");
  (**(code **)(*plVar4 + 0x20))();
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00deef28(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,7,0x19,0);
  return;
}




void FUN_00deef3c(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,5,0x19,0);
  return;
}




void FUN_00deef50(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,6,0x19,0);
  return;
}




void FUN_00deef64(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ec34,2,9);
  return;
}




void FUN_00deef7c(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,8,0x19,0);
  return;
}




float FUN_00deef90(undefined8 param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d59f54(param_1,2,5,0x19,0);
  return fVar1 + 0.2;
}




void FUN_00deefc0(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,5,0x19,0);
  return;
}




void FUN_00deefd4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
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
  lVar2 = FUN_00cf9f7c(auStack_68);
  lVar4 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Kensei_B_EmpoweredByB_02bf13e8;
  plVar5 = (long *)FUN_00cfaa2c(lVar2 + 0xb0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,"Ability03_Enhanced");
  (**(code **)(*plVar5 + 0x18))(plVar5,"AttackToIdleCombat");
  plVar5 = (long *)FUN_00cfac24(lVar2 + 0xb0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5,"Sound_Kensei_C_Dash");
  lVar4 = FUN_00d09310();
  FUN_00d0a10c(*(undefined4 *)(lVar4 + 0x4c0));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  plVar5 = (long *)FUN_00cfaa2c(lVar2 + 200);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,"Ability03");
  (**(code **)(*plVar5 + 0x18))(plVar5,"AttackToIdleCombat");
  plVar5 = (long *)FUN_00cfac24(lVar2 + 200);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5,"Sound_Kensei_C_Dash_Empowered");
  lVar2 = FUN_00d09310();
  FUN_00d0a10c(*(undefined4 *)(lVar2 + 0x4c0));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  lVar2 = FUN_00cf9f7c(auStack_68);
  lVar4 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Kensei_B_EmpoweredByB_02bf13e8;
  plVar5 = (long *)FUN_00cf9afc(lVar2 + 0xb0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s_Buff_Kensei_B_EmpoweredByB_02bf13e8);
  local_58 = FUN_00deeab8;
  local_50 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_58);
  uVar3 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(0x3ecccccd);
  FUN_00cf7578(uVar3,0);
  plVar5 = (long *)FUN_00cfab04(auStack_68);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x68))(plVar5,"Bone_Weapon");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Kensei_C_Cast");
  (**(code **)(*plVar5 + 0x78))(plVar5,1);
  uVar3 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  lVar2 = FUN_00cf9f7c(auStack_68);
  lVar4 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Kensei_B_EmpoweredByB_02bf13e8;
  plVar5 = (long *)FUN_00cfab04(lVar2 + 200);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Kensei_C_Dash");
  local_58._0_4_ = 0x3eb33333;
  local_50 = 1;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x60))(plVar5,&local_58);
  (**(code **)(*plVar5 + 0x78))(plVar5,1);
  plVar5 = (long *)FUN_00cfab04(lVar2 + 0xb0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Kensei_C_Dash_Empowered");
  local_58 = (code *)CONCAT44(local_58._4_4_,0x3eb33333);
  local_50 = 1;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x60))(plVar5,&local_58);
  (**(code **)(*plVar5 + 0x78))(plVar5,1);
  uVar3 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  plVar5 = (long *)FUN_00cf9afc(auStack_68);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s_Buff_SelfProjectile_02beb4b8);
  local_58 = FUN_00deef90;
  local_50 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(plVar5,&local_58);
  (**(code **)(*plVar5 + 0x48))(plVar5,0x86);
  plVar5 = (long *)FUN_00cfa12c(auStack_68);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x88))();
  local_58 = FUN_00deefc0;
  local_50 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0xa8))(plVar5,&local_58);
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  uVar3 = FUN_00cfa294(auStack_68);
  FUN_00cf7580(uVar3,FUN_00deefc0);
  FUN_00cf7578(uVar3,0);
  FUN_00cfb56c(auStack_68);
  uVar3 = FUN_00cfa294(auStack_68);
  FUN_00cf7580(uVar3,FUN_00def42c);
  FUN_00cf7578(uVar3,0);
  FUN_00cf98bc(auStack_68);
  uVar3 = FUN_00cf9d84(auStack_68);
  FUN_00cf49b0(uVar3,PTR_s_Buff_Kensei_B_EmpoweredByB_02bf13e8);
  FUN_00cf9eec(auStack_68);
  lVar2 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

