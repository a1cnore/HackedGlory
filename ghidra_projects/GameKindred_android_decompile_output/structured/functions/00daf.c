// functions/00daf — 18 functions
#include "libGameKindred.h"




void FUN_00daf000(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,8,0x19,0);
  return;
}




void FUN_00daf014(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,10,0x19,0);
  return;
}




float FUN_00daf028(void)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = FUN_00d50ef8();
  lVar2 = *(long *)(lVar1 + 0x40);
  fVar3 = (*(float *)(lVar2 + 0x1b0) + 1.0) *
          (*(float *)(lVar2 + 0x48) + *(float *)(lVar2 + 0xfc) * (*(float *)(lVar2 + 0x264) + 1.0));
  if (DAT_031affd0 <= fVar3) {
    fVar3 = DAT_031affd0;
  }
  fVar4 = DAT_031aff10;
  if (DAT_031aff10 <= fVar3) {
    fVar4 = fVar3;
  }
  fVar3 = (float)thunk_FUN_00d086f0(lVar1,5,1);
  return (fVar3 + 1.0) * fVar4;
}




void FUN_00daf0ac(undefined8 param_1,undefined8 param_2,undefined4 param_3,ulong param_4,
                 undefined8 *param_5,uint param_6,undefined8 *param_7,uint param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_88 [16];
  code *local_78;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_88);
  FUN_00cfb05c(auStack_88);
  uVar2 = FUN_00cfa9e4(auStack_88);
  FUN_00cf3048(uVar2,param_1,0,1,FUN_00cfb9b0,"AttackToIdleCombat");
  uVar3 = FUN_00cfab94(auStack_88);
  uVar8 = *param_5;
  lVar4 = FUN_00d09310();
  uVar2 = FUN_00d09e6c(*(undefined4 *)(lVar4 + 0x3bc));
  FUN_00cf4164(0x3f800000,uVar2,uVar3,uVar8,0,0,0xffffffff,0,1);
  if (1 < param_6) {
    lVar4 = (ulong)param_6 - 1;
    do {
      param_5 = param_5 + 1;
      FUN_00cf41bc(uVar3,*param_5);
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  uVar2 = FUN_00cfa294(auStack_88);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfaa74(auStack_88);
  FUN_00cf32cc(0,uVar2,param_2,0,0,1,0,0);
  uVar3 = FUN_00cfab94(auStack_88);
  uVar8 = *param_7;
  lVar4 = FUN_00d09310();
  uVar2 = FUN_00d09e6c(*(undefined4 *)(lVar4 + 0x3bc));
  FUN_00cf4164(0x3f800000,uVar2,uVar3,uVar8,0,0,0xffffffff,0,1);
  if (1 < param_8) {
    lVar4 = (ulong)param_8 - 1;
    do {
      param_7 = param_7 + 1;
      FUN_00cf41bc(uVar3,*param_7);
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  plVar5 = (long *)FUN_00cfa0e4(auStack_88);
  if ((param_4 & 1) == 0) {
    (**(code **)(*plVar5 + 0x58))(plVar5,param_3);
    puVar7 = auStack_88;
  }
  else {
    plVar5 = (long *)(**(code **)(*plVar5 + 0x50))();
    local_78 = FUN_00daf028;
    local_70 = 4;
    plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(plVar5,&local_78,0,0);
    (**(code **)(*plVar5 + 0x70))(plVar5,param_3);
    lVar4 = FUN_00cf9f7c(auStack_88);
    lVar6 = FUN_00cefb20(lVar4 + 0x10);
    *(undefined **)(lVar6 + 8) = PTR_s_Buff_Baptiste_Talent_TheReaper_02bee290;
    puVar7 = (undefined1 *)(lVar4 + 0xb0);
  }
  plVar5 = (long *)FUN_00cf9afc(puVar7);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s_Buff_Baptiste_PerkSoulStacks_02bf02e0)
  ;
  (**(code **)(*plVar5 + 0x60))(plVar5,FUN_00cfbf58);
  FUN_00cfb0a4(auStack_88);
  FUN_00cfb5c4(auStack_88);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00daf360(void)

{
  FUN_00daf0ac("Attack","Effect_Baptiste_AA",0,0,&PTR_s_Sound_Baptiste_Basic_Attack_1_02bee568,3,
               &PTR_s_Sound_Baptiste_Basic_Impact_1_02bee580,3);
  return;
}




void FUN_00daf394(void)

{
  FUN_00daf0ac("AltAttack","Effect_Baptiste_AA_Alt",0,0,
               &PTR_s_Sound_Baptiste_Basic_Attack_1_02bee568,3,
               &PTR_s_Sound_Baptiste_Basic_Impact_1_02bee580,3);
  return;
}




void FUN_00daf3c8(void)

{
  FUN_00daf0ac("CritAttack","Effect_Baptiste_AA_Crit",2,0,&PTR_s_Sound_Baptiste_Crit_Attack_02bee5a8
               ,1,&PTR_s_Sound_Baptiste_Crit_Attack_02bee5b0,1);
  return;
}




void FUN_00daf3fc(void)

{
  FUN_00daf0ac("AttackEmpowered","Effect_Baptiste_AA_Empowered",0,1,
               &PTR_s_Sound_Baptiste_Empowered_Attack__02bee5c0,2,
               &PTR_s_Sound_Baptiste_Empowered_Attack__02bee5d0,2);
  return;
}




void FUN_00daf430(void)

{
  FUN_00daf0ac("AltAttackEmpowered","Effect_Baptiste_AA_Alt_Empowered",0,1,
               &PTR_s_Sound_Baptiste_Empowered_Attack__02bee5c0,2,
               &PTR_s_Sound_Baptiste_Empowered_Attack__02bee5d0,2);
  return;
}




void FUN_00daf464(void)

{
  FUN_00daf0ac("CritAttackEmpowered","Effect_Baptiste_AA_Crit_Empowered",2,1,
               &PTR_s_Sound_Baptiste_Empowered_Attack__02bee5c0,2,
               &PTR_s_Sound_Baptiste_Empowered_Attack__02bee5d0,2);
  return;
}




void FUN_00daf498(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_48);
  FUN_00cf7b3c(uVar3,1);
  uVar3 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar3,"Ability01",0,1,0,"AttackToIdle");
  plVar4 = (long *)FUN_00cfac6c(auStack_48);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"ability1");
  (**(code **)(*plVar4 + 0x18))(0x3e800000);
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  uVar5 = FUN_00cfab94(auStack_48);
  lVar2 = FUN_00d09310();
  uVar3 = FUN_00d09e6c(*(undefined4 *)(lVar2 + 0x3c0));
  FUN_00cf4164(0x3f800000,uVar3,uVar5,"Sound_Baptiste_Ability_A_Cast_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar5,"Sound_Baptiste_Ability_A_Cast_2");
  FUN_00cf41bc(uVar5,"Sound_Baptiste_Ability_A_Cast_3");
  lVar2 = FUN_00cf9f7c(auStack_48);
  lVar6 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar6 + 8) = PTR_s_Buff_Baptiste_PerkEmpowered_02bf02e8;
  uVar3 = FUN_00cfb17c(lVar2 + 0xb0);
  FUN_00cfcad8(uVar3,7,"CenterBody");
  uVar3 = FUN_00cfb17c(lVar2 + 200);
  FUN_00cfcad8(uVar3,6,"CenterBody");
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3dcccccd);
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




void FUN_00daf678(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d5048c();
  uVar2 = FUN_00d59f54(uVar1,1,3,0x19,0);
  *param_3 = uVar2;
  *param_4 = 2;
  *param_5 = 1;
  return;
}




void FUN_00daf6d0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d50ef8();
  FUN_00d59f54(uVar1,1,5,0x19,0);
  return;
}




void FUN_00daf6f4(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,5,0x19,0);
  return;
}




void FUN_00daf708(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_00d51830();
  *param_5 = uVar2;
  param_5[1] = param_2;
  param_5[2] = param_3;
  uVar1 = FUN_00d50ef8(param_4);
  FUN_00d557c4(uVar1,param_6,&DAT_03218f68);
  return;
}




void FUN_00daf754(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,uint *param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00d517cc();
  if (lVar3 != 0) {
    FUN_00d55794(lVar3,local_58,0);
    *param_2 = local_58[0];
    *param_3 = local_50;
  }
  uVar4 = FUN_00d50ef8(param_1);
  uVar2 = FUN_00d44be0(uVar4,PTR_s_Buff_Baptiste_PerkEmpowered_02bf02e8);
  *param_4 = uVar2 & 1;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00daf7f8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined1 auStack_48 [16];
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_48);
  FUN_00cf7b3c(uVar3,1);
  uVar3 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar3,"Ability02",0,1,0,"AttackToIdle");
  uVar4 = FUN_00cfab94(auStack_48);
  lVar2 = FUN_00d09310();
  uVar3 = FUN_00d09e6c(*(undefined4 *)(lVar2 + 0x3c4));
  FUN_00cf4164(0x3f800000,uVar3,uVar4,"Sound_Baptiste_Ability_B_Cast",0,0,0xffffffff,0,1);
  plVar5 = (long *)FUN_00cfac6c(auStack_48);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,"ability2");
  (**(code **)(*plVar5 + 0x18))(0x3f000000);
  FUN_00cf99dc(auStack_48);
  uVar3 = FUN_00cfab4c(auStack_48);
  FUN_00cf3ac8(0x3f99999a,uVar3,"Effect_Baptiste_B_Channeling_Target",0,"CenterBody");
  FUN_00cf9eec(auStack_48);
  FUN_00cf9ea4(auStack_48);
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3f19999a);
  FUN_00cf7578(uVar3,0);
  FUN_00cf99dc(auStack_48);
  plVar5 = (long *)FUN_00cf9b44(auStack_48);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x70))(plVar5,PTR_s_Buff_Baptiste_B_TetherTarget_02bf0300)
  ;
  local_38 = FUN_00daf6f4;
  local_30 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(plVar5,&local_38);
  (**(code **)(*plVar5 + 0x58))(plVar5,FUN_00daf754);
  FUN_00cf9eec(auStack_48);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00daf9e0(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_88 [16];
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_88);
  lVar2 = FUN_00cfa6cc(auStack_88);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_88);
  FUN_00cf7b3c(uVar3,1);
  uVar3 = FUN_00cfa9e4(auStack_88);
  FUN_00cf3048(uVar3,"Ability03",0,1,0,"AttackToIdle");
  uVar3 = FUN_00cfab94(auStack_88);
  lVar2 = FUN_00d09310();
  uVar7 = FUN_00d09e6c(*(undefined4 *)(lVar2 + 0x3c8));
  FUN_00cf4164(0x3f800000,uVar7,uVar3,"Sound_Baptiste_Ability_C_Cast",0,0,0xffffffff,0,1);
  plVar4 = (long *)FUN_00cfac6c(auStack_88);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"ability3");
  (**(code **)(*plVar4 + 0x18))(0x3f000000);
  uVar3 = FUN_00cfaa74(auStack_88);
  FUN_00cf32cc(0,uVar3,"Effect_Baptiste_Ultimate_Channeling",1,0,1,0,0);
  uVar3 = FUN_00cfa294(auStack_88);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  plVar4 = (long *)FUN_00cfb134(auStack_88);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(0x3e4ccccd);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x3f800000);
  (**(code **)(*plVar4 + 0x20))(0x41400000);
  uVar3 = FUN_00cfa294(auStack_88);
  FUN_00cf7478(0x3f000000);
  FUN_00cf7578(uVar3,0);
  lVar2 = FUN_00cf9f7c(auStack_88);
  lVar5 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Baptiste_PerkEmpowered_02bf02e8;
  uVar3 = FUN_00cfb17c(lVar2 + 0xb0);
  uVar3 = FUN_00cfcad8(uVar3,9,"ZombieForwardLeft");
  FUN_00cfcba8(uVar3,1);
  uVar3 = FUN_00cfb17c(lVar2 + 0xb0);
  uVar3 = FUN_00cfcad8(uVar3,9,"ZombieForwardRight");
  FUN_00cfcba8(uVar3,1);
  uVar3 = FUN_00cfb17c(lVar2 + 200);
  uVar3 = FUN_00cfcad8(uVar3,8,"ZombieForwardLeft");
  FUN_00cfcba8(uVar3,1);
  uVar3 = FUN_00cfb17c(lVar2 + 200);
  uVar3 = FUN_00cfcad8(uVar3,8,"ZombieForwardRight");
  FUN_00cfcba8(uVar3,1);
  plVar4 = (long *)FUN_00cfb1c4(auStack_88);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s__Baptiste_Zombie__02beb1e8,1);
  uVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,"ZombieFarLeft");
  plVar4 = (long *)FUN_00cf9b8c(auStack_88);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Baptiste_Zombie_02bf0320,uVar3);
  (**(code **)(*plVar4 + 0x20))(plVar4,FUN_00e604a8);
  plVar4 = (long *)FUN_00cfb1c4(auStack_88);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s__Baptiste_Zombie__02beb1e8,1);
  uVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,"ZombieForwardLeft");
  plVar4 = (long *)FUN_00cf9b8c(auStack_88);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Baptiste_Zombie_02bf0320,uVar3);
  (**(code **)(*plVar4 + 0x20))(plVar4,FUN_00e604a8);
  plVar4 = (long *)FUN_00cfb1c4(auStack_88);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s__Baptiste_Zombie__02beb1e8,1);
  uVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,"ZombieForwardRight");
  plVar4 = (long *)FUN_00cf9b8c(auStack_88);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Baptiste_Zombie_02bf0320,uVar3);
  (**(code **)(*plVar4 + 0x20))(plVar4,FUN_00e604a8);
  plVar4 = (long *)FUN_00cfb1c4(auStack_88);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s__Baptiste_Zombie__02beb1e8,1);
  uVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,"ZombieFarRight");
  plVar4 = (long *)FUN_00cf9b8c(auStack_88);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Baptiste_Zombie_02bf0320,uVar3);
  (**(code **)(*plVar4 + 0x20))(plVar4,FUN_00e604a8);
  lVar2 = FUN_00cf9f7c(auStack_88);
  lVar5 = FUN_00cefb20(lVar2 + 0x10);
  lVar2 = lVar2 + 0xb0;
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Baptiste_Talent_ArmyOfSouls_02bee280;
  lVar5 = FUN_00cf9f7c(lVar2);
  lVar6 = FUN_00cefb20(lVar5 + 0x10);
  *(undefined **)(lVar6 + 8) = PTR_s_Buff_Baptiste_PerkEmpowered_02bf02e8;
  uVar3 = FUN_00cfb17c(lVar5 + 0xb0);
  uVar3 = FUN_00cfcad8(uVar3,9,"TalentArmyOfSoulsLeft");
  FUN_00cfcba8(uVar3,1);
  uVar3 = FUN_00cfb17c(lVar5 + 0xb0);
  uVar3 = FUN_00cfcad8(uVar3,9,"TalentArmyOfSoulsRight");
  FUN_00cfcba8(uVar3,1);
  uVar3 = FUN_00cfb17c(lVar5 + 200);
  uVar3 = FUN_00cfcad8(uVar3,8,"TalentArmyOfSoulsLeft");
  FUN_00cfcba8(uVar3,1);
  uVar3 = FUN_00cfb17c(lVar5 + 200);
  uVar3 = FUN_00cfcad8(uVar3,8,"TalentArmyOfSoulsRight");
  FUN_00cfcba8(uVar3,1);
  plVar4 = (long *)FUN_00cfb1c4(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s__Baptiste_Zombie__02beb1e8,0);
  uVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,"TalentArmyOfSoulsLeft");
  plVar4 = (long *)FUN_00cf9b8c(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Baptiste_Zombie_02bf0320,uVar3);
  (**(code **)(*plVar4 + 0x20))(plVar4,FUN_00e604a8);
  plVar4 = (long *)FUN_00cfb1c4(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s__Baptiste_Zombie__02beb1e8,0);
  uVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,"TalentArmyOfSoulsFarLeft");
  plVar4 = (long *)FUN_00cf9b8c(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Baptiste_Zombie_02bf0320,uVar3);
  (**(code **)(*plVar4 + 0x20))(plVar4,FUN_00e604a8);
  plVar4 = (long *)FUN_00cfb1c4(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s__Baptiste_Zombie__02beb1e8,0);
  uVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,"TalentArmyOfSoulsRight");
  plVar4 = (long *)FUN_00cf9b8c(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Baptiste_Zombie_02bf0320,uVar3);
  (**(code **)(*plVar4 + 0x20))(plVar4,FUN_00e604a8);
  plVar4 = (long *)FUN_00cfb1c4(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s__Baptiste_Zombie__02beb1e8,0);
  uVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,"TalentArmyOfSoulsFarRight");
  plVar4 = (long *)FUN_00cf9b8c(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Baptiste_Zombie_02bf0320,uVar3);
  (**(code **)(*plVar4 + 0x20))(plVar4,FUN_00e604a8);
  uVar3 = FUN_00cfa294(auStack_88);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  lVar2 = FUN_00cfa6cc(auStack_88);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_88);
  FUN_00cfb5c4(auStack_88);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

