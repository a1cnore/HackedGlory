// functions/00dc1 — 20 functions
#include "libGameKindred.h"




void FUN_00dc116c(void)

{
  FUN_00dc0ef0("Attack","Effect_Grumpjaw_Attack",FUN_00cfb6d0,
               &PTR_s_Sound_Grumpjaw_Attack_1_02beeb68,3,
               &PTR_s_Sound_Grumpjaw_Attack_Impact_1_02beeb80,3);
  return;
}




void FUN_00dc11a0(void)

{
  FUN_00dc0ef0("AltAttack","Effect_Grumpjaw_Attack_Alt",FUN_00cfb6d0,
               &PTR_s_Sound_Grumpjaw_Attack_1_02beeb68,3,
               &PTR_s_Sound_Grumpjaw_Attack_Impact_1_02beeb80,3);
  return;
}




void FUN_00dc11d4(void)

{
  FUN_00dc0ef0("CritAttack","Effect_Grumpjaw_Attack_Crit",FUN_00cfb8b4,
               &PTR_s_Sound_Grumpjaw_Crit_02beeba8,1,&PTR_s_Sound_Grumpjaw_Crit_Impact_02beebb0,1);
  return;
}




void FUN_00dc1208(void)

{
  FUN_00dc0ef0("Ability02_Frenzy","Effect_Grumpjaw_Frenzy_Attack",FUN_00cfb760,
               &PTR_s_Sound_Grumpjaw_Ability_B_Bite_02beebc0,1,
               &PTR_s_Sound_Grumpjaw_Attack_Impact_1_02beeb80,3);
  return;
}




void FUN_00dc123c(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                 undefined8 param_5,float *param_6)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float local_58;
  float fStack_54;
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d5048c();
  FUN_00d55794(uVar2,&local_58,0);
  fVar3 = (float)FUN_00d51820(param_4);
  fVar3 = (fVar3 - local_58) * (fVar3 - local_58) + (param_2 - fStack_54) * (param_2 - fStack_54) +
          (param_3 - local_50) * (param_3 - local_50);
  fVar4 = SQRT(fVar3);
  if (NAN(fVar4)) {
    fVar4 = sqrtf(fVar3);
  }
  fVar3 = (float)FUN_00d59f54(uVar2,1,7,0x19,0);
  *param_6 = fVar4 / fVar3;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dc130c(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,7,0x19,0);
  return;
}




float FUN_00dc1320(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  auVar6 = FUN_00d50ef8();
  uVar2 = auVar6._0_8_;
  FUN_00dc123c(param_1,auVar6._8_8_,&local_4c);
  fVar3 = (float)FUN_00d59f54(uVar2,1,8,0x19,0);
  fVar4 = (float)FUN_00d59f54(uVar2,1,0xc,0x19,0);
  fVar5 = (float)FUN_00d59f54(uVar2,1,9,0x19,0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return fVar3 + local_4c + fVar4 + fVar5 + 0.1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dc13fc(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,8,0x19,0);
  return;
}




void FUN_00dc1410(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,0xc,0x19,0);
  return;
}




void FUN_00dc1424(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,9,0x19,0);
  return;
}




void FUN_00dc1438(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d50ef8();
  FUN_00d55794(uVar2,auStack_48,0);
  FUN_00d557c4(uVar2,auStack_58,&DAT_03218f68);
  FUN_00d4db40(param_2,uVar2);
  FUN_00d4dabc(param_2,0x40000);
  FUN_00d4daf4(param_2,0,1,0,0);
  FUN_00d4db48(0x40600000,param_2,auStack_48);
  FUN_00d4dba0(0x42c80000,param_2);
  FUN_00d4dcdc(param_2,1);
  *(undefined4 *)(param_2 + 0x40) = 0x3f59999a;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dc1514(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d50ef8();
  FUN_00d55794(uVar2,auStack_48,0);
  FUN_00d557c4(uVar2,auStack_58,&DAT_03218f68);
  FUN_00d4db40(param_2,uVar2);
  FUN_00d4dabc(param_2,0x40000);
  FUN_00d4daf4(param_2,0,1,0,0);
  FUN_00d4db48(0x3f4ccccd,param_2,auStack_48);
  FUN_00d4dcdc(param_2,1);
  *(undefined4 *)(param_2 + 0x40) = 0x3f59999a;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dc15e4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [16];
  code *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_78);
  lVar2 = FUN_00cfa6cc(auStack_78);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  FUN_00cfb05c(auStack_78);
  uVar3 = FUN_00cfa51c(auStack_78);
  FUN_00cfc91c(uVar3,PTR_s_Buff_Grumpjaw_Eating_02bf0768,FUN_00dc1320);
  uVar3 = FUN_00cfa9e4(auStack_78);
  FUN_00cf3048(uVar3,"Ability01_Charge",0,1,0,"AttackToIdle");
  uVar3 = FUN_00cfab94(auStack_78);
  lVar2 = FUN_00d09310();
  uVar6 = FUN_00d09e18(*(undefined4 *)(lVar2 + 0x3ac));
  FUN_00cf4164(0x3f800000,uVar6,uVar3,"Sound_Grumpjaw_Ability_A_Breathe",0,0,0xffffffff,0,1);
  uVar3 = FUN_00cfa294(auStack_78);
  FUN_00cf7580(uVar3,FUN_00dc13fc);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfab94(auStack_78);
  lVar2 = FUN_00d09310();
  uVar6 = FUN_00d09e18(*(undefined4 *)(lVar2 + 0x3ac));
  FUN_00cf4164(0x3f800000,uVar6,uVar3,"Sound_Grumpjaw_Ability_A_Charge",0,0,0xffffffff,0,1);
  uVar3 = FUN_00cfaa74(auStack_78);
  FUN_00cf32cc(0x3f000000,uVar3,"Effect_Grumpjaw_A_Charge",1,0,1,0,0);
  FUN_00cf98bc(auStack_78);
  lVar2 = FUN_00cf9f7c(auStack_78);
  lVar4 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Grumpjaw_Talent_Rampage_02bedf38;
  uVar3 = FUN_00cf9ab4(lVar2 + 0xb0);
  FUN_00cf44e8(0x40000000,uVar3,PTR_s_Buff_Grumpjaw_Rampage_SelfProjec_02bedf48,1,0);
  plVar5 = (long *)FUN_00cfa12c(auStack_78);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x90))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0xb0))(plVar5,1);
  local_68 = FUN_00dc130c;
  local_60 = 3;
  (**(code **)(*plVar5 + 0xa0))(plVar5,&local_68);
  FUN_00cf9eec(auStack_78);
  uVar3 = FUN_00cfa294(auStack_78);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  FUN_00cfb56c(auStack_78);
  lVar2 = FUN_00cf9f7c(auStack_78);
  lVar4 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Grumpjaw_Talent_Rampage_02bedf38;
  uVar3 = FUN_00cf9d84(lVar2 + 0xb0);
  FUN_00cf49b0(uVar3,PTR_s_Buff_Grumpjaw_Rampage_SelfProjec_02bedf48);
  uVar3 = FUN_00cfab94(auStack_78);
  lVar2 = FUN_00d09310();
  uVar6 = FUN_00d09e18(*(undefined4 *)(lVar2 + 0x3ac));
  FUN_00cf4164(0x3f800000,uVar6,uVar3,"Sound_Grumpjaw_Ability_A_Stop",0,0,0xffffffff,0,1);
  plVar5 = (long *)FUN_00cfac6c(auStack_78);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,"ability1");
  (**(code **)(*plVar5 + 0x18))(0x3e800000);
  uVar3 = FUN_00cfa9e4(auStack_78);
  FUN_00cf3048(uVar3,"Ability01_Thrashing",0,1,0,"AttackToIdle");
  uVar3 = FUN_00cfa294(auStack_78);
  FUN_00cf7580(uVar3,FUN_00dc1410);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfab94(auStack_78);
  lVar2 = FUN_00d09310();
  uVar6 = FUN_00d09e18(*(undefined4 *)(lVar2 + 0x3ac));
  FUN_00cf4164(0x3f800000,uVar6,uVar3,"Sound_Grumpjaw_Ability_A_Swipe",0,0,0xffffffff,0,1);
  uVar3 = FUN_00cfaa74(auStack_78);
  FUN_00cf32cc(0,uVar3,"Effect_Grumpjaw_A_Attack",1,0,1,0,0);
  uVar3 = FUN_00cfaeac(auStack_78);
  FUN_00cf531c(uVar3,FUN_00dc1438);
  uVar3 = FUN_00cfaeac(auStack_78);
  FUN_00cf531c(uVar3,FUN_00dc1514);
  plVar5 = (long *)FUN_00cf9b44(auStack_78);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x70))(plVar5,PTR_s_Buff_Grumpjaw_A_BiteSlow_02bf0750);
  local_68 = FUN_00dc1a94;
  local_60 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_68);
  plVar5 = (long *)FUN_00cf9b44(auStack_78);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x70))(plVar5,PTR_s_Buff_Grumpjaw_A_Damage_02bf0758);
  local_68 = (code *)CONCAT44(local_68._4_4_,0x3e4ccccd);
  local_60 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_68);
  FUN_00cf9eec(auStack_78);
  uVar3 = FUN_00cfa294(auStack_78);
  FUN_00cf7580(uVar3,FUN_00dc1424);
  FUN_00cf7578(uVar3,0);
  lVar2 = FUN_00cfa6cc(auStack_78);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_78);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dc1a94(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,10,0x19,0);
  return;
}




void FUN_00dc1aa8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
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
  uVar3 = FUN_00cfa9e4(auStack_68);
  FUN_00cf3048(uVar3,"Ability02",0,1,0,"AttackToIdle");
  uVar3 = FUN_00cfab94(auStack_68);
  lVar2 = FUN_00d09310();
  uVar6 = FUN_00d09e18(*(undefined4 *)(lVar2 + 0x3b0));
  FUN_00cf4164(0x3f800000,uVar6,uVar3,"Sound_Grumpjaw_Ability_B_Kick",0,0,0xffffffff,0,1);
  uVar3 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfab94(auStack_68);
  lVar2 = FUN_00d09310();
  uVar6 = FUN_00d09e18(*(undefined4 *)(lVar2 + 0x3b0));
  FUN_00cf4164(0x3f800000,uVar6,uVar3,"Sounds_Grumpjaw_Ability_B_Headbutt",0,0,0xffffffff,0,1);
  plVar4 = (long *)FUN_00cfac6c(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"ability2");
  (**(code **)(*plVar4 + 0x18))(0x3e800000);
  plVar4 = (long *)FUN_00cf9afc(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Grumpjaw_B_Frenzy_02bf0760);
  local_58 = FUN_00dc1dc0;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  lVar2 = FUN_00cf9f7c(auStack_68);
  lVar5 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Grumpjaw_Talent_Reconstitut_02bedf20;
  plVar4 = (long *)FUN_00cf9afc(lVar2 + 0xb0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))
                             (plVar4,PTR_s_Buff_Grumpjaw_Reconstitution_Lif_02bedf30);
  local_58 = FUN_00dc1dc0;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  FUN_00cf9eec(auStack_68);
  plVar4 = (long *)FUN_00cfa12c(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(0x3f000000,0x3f800000,0x3f800000,0x3f800000);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,1);
  local_58 = FUN_00dc1dd4;
  local_50 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xa0))(plVar4,&local_58);
  (**(code **)(*plVar4 + 0xb8))(0x41700000);
  uVar3 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  FUN_00cfb56c(auStack_68);
  FUN_00cf99dc(auStack_68);
  plVar4 = (long *)FUN_00cfa09c(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  (**(code **)(*plVar4 + 0x38))(plVar4,"INITIAL_HIT",2);
  FUN_00cf9eec(auStack_68);
  FUN_00cfacb4(auStack_68);
  FUN_00cf50b0(0x3f333333);
  lVar2 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dc1dc0(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,3,0x19,0);
  return;
}




void FUN_00dc1dd4(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,2,0x19,0);
  return;
}




void FUN_00dc1de8(undefined8 param_1,undefined8 param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_00d5048c();
  fVar2 = (float)FUN_00d59f54(uVar1,3,5,0x19,0);
  *param_3 = fVar2 + 0.1;
  return;
}




void FUN_00dc1e2c(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,5,0x19,0);
  return;
}




void FUN_00dc1e40(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_68 [16];
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_68);
  FUN_00cfa6cc(auStack_68);
  uVar2 = FUN_00cfb05c(auStack_68);
  FUN_00cf7b3c(uVar2,1);
  uVar3 = FUN_00cfab94(auStack_68);
  lVar4 = FUN_00d09310();
  uVar2 = FUN_00d09e18(*(undefined4 *)(lVar4 + 0x3b4));
  FUN_00cf4164(0x3f800000,uVar2,uVar3,"Sound_Grumpjaw_Ability_C_Roar",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa9e4(auStack_68);
  FUN_00cf3048(uVar2,"Ability03_C_Windup",0,1,0,"AttackToIdle");
  uVar2 = FUN_00cfaa74(auStack_68);
  FUN_00cf32cc(0x3f666666,uVar2,"Effect_Grumpjaw_C_Warning",0,0,1,0,0);
  plVar5 = (long *)FUN_00cfac6c(auStack_68);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,"ability3");
  (**(code **)(*plVar5 + 0x18))(0x3f000000);
  FUN_00cf9eec(auStack_68);
  uVar2 = FUN_00cfa294(auStack_68);
  FUN_00cf7580(uVar2,FUN_00dc2140);
  FUN_00cf7578(uVar2,0);
  FUN_00cf98bc(auStack_68);
  uVar2 = FUN_00cf9ab4(auStack_68);
  FUN_00cf4540(uVar2,PTR_s_Buff_Grumpjaw_C_SelfProjectile_02bf0778,FUN_00dc1de8,1,0);
  FUN_00cf9eec(auStack_68);
  plVar5 = (long *)FUN_00cfa12c(auStack_68);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x88))();
  local_58 = FUN_00dc1e2c;
  local_50 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0xa8))(plVar5,&local_58);
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  uVar2 = FUN_00cfa294(auStack_68);
  FUN_00cf7580(uVar2,FUN_00dc1e2c);
  FUN_00cf7578(uVar2,0);
  FUN_00cfb56c(auStack_68);
  uVar2 = FUN_00cfaa74(auStack_68);
  FUN_00cf32cc(0,uVar2,"Effect_Grumpjaw_C_Charge",1,0,1,0,0);
  uVar2 = FUN_00cfadd4(auStack_68);
  FUN_00cf5da8(uVar2,PTR_s_Buff_Grumpjaw_C_Grabbed_02bf0780,0,1);
  FUN_00cf5e7c();
  FUN_00cf5e8c();
  lVar4 = FUN_00cf9f7c(auStack_68);
  lVar6 = FUN_00da1124(lVar4 + 0x10);
  *(undefined4 *)(lVar6 + 0x18) = 0;
  *(undefined4 *)(lVar6 + 8) = 0;
  *(undefined4 *)(lVar6 + 0x10) = 1;
  uVar2 = FUN_00cf9634(lVar4 + 0xb0);
  FUN_00cfc5fc(uVar2,PTR_s_Ability__Grumpjaw__Eat_02beebe0);
  FUN_00cf9eec(auStack_68);
  uVar2 = FUN_00cfa9e4(auStack_68);
  FUN_00cf3048(uVar2,"Ability03_C_RunStop",0,1,0,"AttackToIdle");
  uVar2 = FUN_00cfa294(auStack_68);
  FUN_00cf7580(uVar2,FUN_00dc2154);
  FUN_00cf7578(uVar2,0);
  lVar4 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

