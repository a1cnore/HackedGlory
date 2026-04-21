// functions/00dc8 — 25 functions
#include "libGameKindred.h"




void FUN_00dc817c(undefined8 param_1)

{
  FUN_00d59f54(param_1,4,3,0x19,0);
  return;
}




void FUN_00dc8190(undefined8 param_1)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    return;
  }
  uVar3 = FUN_00d5048c(param_1);
  uVar2 = FUN_00dc66e0(uVar3,0);
  pcVar1 = "Ability03_RangedLeap";
  if ((uVar2 & 1) == 0) {
    pcVar1 = "Ability03_MeleeLeap";
  }
  FUN_00d5a450(0x3f800000,uVar3,pcVar1,0,1,"AttackToIdle");
  return;
}




undefined1  [16] FUN_00dc8204(void)

{
  return ZEXT816(0x3f800000);
}




void FUN_00dc820c(undefined8 param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00dc66e0(param_1,0);
  uVar2 = 10;
  if ((uVar1 & 1) == 0) {
    uVar2 = 8;
  }
  FUN_00d59f54(param_1,4,uVar2,0x19,0);
  return;
}




void FUN_00dc8250(undefined8 param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00dc66e0(param_1,0);
  uVar2 = 0xb;
  if ((uVar1 & 1) == 0) {
    uVar2 = 9;
  }
  FUN_00d59f54(param_1,4,uVar2,0x19,0);
  return;
}




void FUN_00dc8294(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00dc8250(param_2);
  *param_3 = uVar1;
  return;
}




void FUN_00dc82bc(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 auStack_c8 [16];
  code *local_b8;
  undefined4 local_b0;
  code *local_a8;
  undefined4 local_a0;
  undefined1 auStack_98 [96];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_c8);
  FUN_00d4d9e8(auStack_98);
  FUN_00d4daf4(auStack_98,0,1,0,0);
  FUN_00d4dabc(auStack_98,0x40000);
  lVar2 = FUN_00cfa6cc(auStack_c8);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  FUN_00cf98bc(auStack_c8);
  uVar3 = FUN_00cf9ab4(auStack_c8);
  FUN_00cf44e8(0x3f4ccccd,uVar3,PTR_s_Buff_Idris_DontCatch_02bf08c8,1,0);
  FUN_00cf9eec(auStack_c8);
  uVar3 = FUN_00cfb05c(auStack_c8);
  uVar3 = FUN_00cf7b2c(uVar3,2);
  FUN_00cf7b3c(uVar3,1);
  FUN_00cf98bc(auStack_c8);
  uVar3 = FUN_00cf9d84(auStack_c8);
  FUN_00cf49b0(uVar3,PTR_s_Buff_Idris_C_AttachmentHandler_02bf0928);
  uVar3 = FUN_00cf9ab4(auStack_c8);
  FUN_00cf456c(uVar3,PTR_s_Buff_Idris_StaminaPaused_02bf08d8,FUN_00dc7644,1,0);
  FUN_00cf9eec(auStack_c8);
  uVar3 = FUN_00cf9cf4(auStack_c8);
  FUN_00cf2e48(uVar3,FUN_00dc8190);
  plVar4 = (long *)FUN_00cfab04(auStack_c8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Idris_C_SweepOnLeap");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,0);
  (**(code **)(*plVar4 + 0x100))(plVar4,FUN_00dc6b38);
  uVar3 = FUN_00cfab94(auStack_c8);
  lVar2 = FUN_00d09310();
  uVar5 = FUN_00d09dc4(*(undefined4 *)(lVar2 + 0x3a0));
  FUN_00cf4164(0x3f800000,uVar5,uVar3,"Sound_Idris_Ability_C_Spear",0,0,0xffffffff,0,1);
  uVar3 = FUN_00cfa294(auStack_c8);
  FUN_00cf7580(uVar3,FUN_00dc8620);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfaf84(auStack_c8);
  FUN_00cf5504(uVar3,auStack_98,0,FUN_00dc8634,0,0,0);
  plVar4 = (long *)FUN_00cfa09c(auStack_c8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  (**(code **)(*plVar4 + 0x38))(plVar4,"Sweep Damage",4);
  FUN_00cf9eec(auStack_c8);
  uVar3 = FUN_00cfab94(auStack_c8);
  lVar2 = FUN_00d09310();
  uVar5 = FUN_00d09dc4(*(undefined4 *)(lVar2 + 0x39c));
  FUN_00cf4164(0x3f800000,uVar5,uVar3,"Sound_Idris_Ability_C_Leap",0,0,0xffffffff,0,1);
  plVar4 = (long *)FUN_00cfa12c(auStack_c8);
  local_a8 = FUN_00dc820c;
  local_a0 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x80))(plVar4,&local_a8);
  local_b8 = FUN_00dc8250;
  local_b0 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xa8))(plVar4,&local_b8);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  uVar3 = FUN_00cfa294(auStack_c8);
  FUN_00cf7570(uVar3,FUN_00dc8294);
  FUN_00cfb56c(auStack_c8);
  FUN_00cf98bc(auStack_c8);
  uVar3 = FUN_00cf9ab4(auStack_c8);
  FUN_00cf456c(uVar3,PTR_s_Buff_Idris_PostAbilityBonuses_02bf0900,FUN_00dc7818,1,0);
  FUN_00cf9eec(auStack_c8);
  lVar2 = FUN_00cfa6cc(auStack_c8);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_c8);
  FUN_00cfb5c4(auStack_c8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dc8620(undefined8 param_1)

{
  FUN_00d59f54(param_1,4,7,0x19,0);
  return;
}




void FUN_00dc8634(undefined8 param_1)

{
  FUN_00d59f54(param_1,4,2,0x19,0);
  return;
}




void FUN_00dc8648(void)

{
  FUN_00cfc038(PTR_s_Buff_Idris_Withdraw_02bf0950);
  return;
}




void FUN_00dc8658(void)

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
  FUN_00cfb05c(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"Attack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d096e0(*(undefined4 *)(lVar3 + 0x124));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"sound_joule_basic_attack_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"sound_joule_basic_attack_2");
  FUN_00cf41bc(uVar2,"sound_joule_basic_attack_3");
  FUN_00cf41bc(uVar2,"sound_joule_basic_attack_4");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e6b851f);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0,uVar2,"Effect_Joule_Attack_Basic",1,0,1,0,0);
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d096e0(*(undefined4 *)(lVar3 + 0x124));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"sound_joule_attack_impact_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"sound_joule_attack_impact_2");
  FUN_00cf41bc(uVar2,"sound_joule_attack_impact_3");
  FUN_00cf99dc(auStack_48);
  uVar2 = FUN_00cfa00c(auStack_48);
  FUN_00cf6bb0(uVar2,FUN_00cfb6d0);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dc8840(void)

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
  FUN_00cfb05c(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"AltAttack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d096e0(*(undefined4 *)(lVar3 + 0x124));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"sound_joule_basic_attack_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"sound_joule_basic_attack_2");
  FUN_00cf41bc(uVar2,"sound_joule_basic_attack_3");
  FUN_00cf41bc(uVar2,"sound_joule_basic_attack_4");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e6b851f);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0,uVar2,"Effect_Joule_Attack_Alt_Basic",1,0,1,0,0);
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d096e0(*(undefined4 *)(lVar3 + 0x124));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"sound_joule_attack_impact_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"sound_joule_attack_impact_2");
  FUN_00cf41bc(uVar2,"sound_joule_attack_impact_3");
  FUN_00cf99dc(auStack_48);
  uVar2 = FUN_00cfa00c(auStack_48);
  FUN_00cf6bb0(uVar2,FUN_00cfb6d0);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dc8a28(void)

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
  FUN_00cfb05c(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"CritAttack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d096e0(*(undefined4 *)(lVar3 + 0x124));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"sound_joule_basic_attack_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"sound_joule_basic_attack_2");
  FUN_00cf41bc(uVar2,"sound_joule_basic_attack_3");
  FUN_00cf41bc(uVar2,"sound_joule_basic_attack_4");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e6b851f);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0,uVar2,"Effect_Joule_Attack_Crit_Basic",1,0,1,0,0);
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d096e0(*(undefined4 *)(lVar3 + 0x124));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"sound_joule_attack_impact_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"sound_joule_attack_impact_2");
  FUN_00cf41bc(uVar2,"sound_joule_attack_impact_3");
  FUN_00cf99dc(auStack_48);
  uVar2 = FUN_00cfa00c(auStack_48);
  FUN_00cf6bb0(uVar2,FUN_00cfb8b4);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dc8c10(undefined8 param_1,undefined8 param_2,undefined4 *param_3,float *param_4)

{
  undefined8 uVar1;
  float fVar2;
  
  *param_3 = 0x40b66666;
  uVar1 = FUN_00d5048c();
  fVar2 = (float)FUN_00d59f54(uVar1,0,7,0x19,0);
  *param_4 = fVar2 * 5.7;
  return;
}




void FUN_00dc8c60(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,7,0x19,0);
  return;
}




void FUN_00dc8c74(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  *param_3 = 0x3f41bacf;
  return;
}




void FUN_00dc8c84(float param_1,undefined8 param_2,float *param_3)

{
  *param_3 = param_1 * 0.7;
  return;
}




void FUN_00dc8c98(void)

{
  long lVar1;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cfa36c(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00dc8cf0(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_00d59f54(param_1,0,8,0x19,0);
  fVar2 = (float)FUN_00d59f54(param_1,0,6,0x19,0);
  return fVar1 + fVar2;
}




void FUN_00dc8d48(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,8,0x19,0);
  return;
}




void FUN_00dc8d5c(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  FUN_00d50ef8();
  uVar1 = FUN_00dc8cf0();
  *param_2 = uVar1;
  return;
}




void FUN_00dc8d84(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00cfaf84(param_2);
  uVar2 = FUN_00cf5504(uVar2,param_1,0,FUN_00dc8d48,0,1,0);
  uVar2 = FUN_00cf55c8(uVar2,FUN_00dc8d5c);
  FUN_00cf55d0(uVar2,FUN_00dc8d48);
  plVar3 = (long *)FUN_00cfa09c(param_2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Damage",0);
  local_48 = FUN_00dc8eac;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x88))(plVar3,&local_48);
  plVar3 = (long *)FUN_00cf9b44(param_2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))
                             (plVar3,PTR_s_Buff_Joule_RocketLeap_Knockback__02beb9c0);
  local_48 = FUN_00dc8ec0;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  FUN_00cf9eec(param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dc8eac(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,4,0x19,0);
  return;
}




void FUN_00dc8ec0(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,2,0x19,0);
  return;
}




void FUN_00dc8ed4(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_c8 [16];
  code *local_b8;
  undefined4 local_b0;
  code *local_a8;
  undefined4 local_a0;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_c8);
  FUN_00cfb05c(auStack_c8);
  lVar2 = FUN_00cfa6cc(auStack_c8);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  plVar3 = (long *)FUN_00cfb1c4(auStack_c8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"*JoulePreTarget*",0);
  (**(code **)(*plVar3 + 0x20))(plVar3,FUN_00e60680);
  uVar4 = FUN_00cfa9e4(auStack_c8);
  FUN_00cf3048(uVar4,"Ability01",0,1,FUN_00dc8c84,"AttackToIdle");
  uVar4 = FUN_00cfab94(auStack_c8);
  lVar2 = FUN_00d09310();
  uVar6 = FUN_00d096e0(*(undefined4 *)(lVar2 + 0x128));
  FUN_00cf4164(0x3f800000,uVar6,uVar4,"sound_joule_ablity1",0,0,0x539,0,1);
  uVar4 = FUN_00cfaa74(auStack_c8);
  FUN_00cf3428(0xbf800000,uVar4,"Effect_Joule_MechJets",1,"Bone_LFootMech",FUN_00dc8c74,1,0,0);
  uVar4 = FUN_00cfaa74(auStack_c8);
  FUN_00cf3428(0xbf800000,uVar4,"Effect_Joule_MechJets",1,"Bone_RFootMech",FUN_00dc8c74,1,0,0);
  uVar4 = FUN_00cfaa74(auStack_c8);
  FUN_00cf3428(0xbf800000,uVar4,"Effect_Joule_Buttjet",1,"Bone_Buttjet",FUN_00dc8c74,1,0,0);
  uVar4 = FUN_00cfaa74(auStack_c8);
  FUN_00cf32cc(0,uVar4,"Effect_Joule_Jump_Takeoff",0,0,1,0,0);
  uVar4 = FUN_00cfa294(auStack_c8);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar4,0);
  FUN_00cf98bc(auStack_c8);
  plVar3 = (long *)FUN_00cfa12c(auStack_c8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  local_a8 = FUN_00dc8c60;
  local_a0 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xa8))(plVar3,&local_a8);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  uVar4 = FUN_00cf9bd4(auStack_c8);
  FUN_00cf834c(uVar4,FUN_00dc8c10,1,0);
  FUN_00cf9eec(auStack_c8);
  uVar4 = FUN_00cfa294(auStack_c8);
  FUN_00cf7580(uVar4,FUN_00dc8c60);
  FUN_00cf7578(uVar4,0);
  FUN_00cfb56c(auStack_c8);
  plVar3 = (long *)FUN_00cfb134(auStack_c8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(0x3f000000);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x3f19999a);
  (**(code **)(*plVar3 + 0x20))(0x41200000);
  uVar4 = FUN_00cfaa74(auStack_c8);
  FUN_00cf32cc(0,uVar4,"Effect_Joule_Jump_Land",0,0,1,0,0);
  FUN_00d4d9e8(&local_a8);
  FUN_00d4daf4(&local_a8,0,1,0,0);
  FUN_00d4dabc(&local_a8,0x40000);
  uVar4 = FUN_00cfaf84(auStack_c8);
  FUN_00cf5504(uVar4,&local_a8,0,FUN_00dc8d48,0,1,0);
  plVar3 = (long *)FUN_00cfa09c(auStack_c8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"Damage",0);
  lVar2 = FUN_00cf9f7c(auStack_c8);
  lVar5 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Joule_Talent_RocketLeapfrog_02bf1f88;
  plVar3 = (long *)FUN_00cf9b44(lVar2 + 200);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))(plVar3,PTR_s_Buff_Stunned_02beb430);
  local_b8 = FUN_00dc8ec0;
  local_b0 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_b8);
  FUN_00cf9eec(auStack_c8);
  lVar2 = FUN_00cf9f7c(auStack_c8);
  lVar5 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Joule_Talent_RocketLeapfrog_02bf1f88;
  FUN_00dc8d84(&local_a8,lVar2 + 200);
  uVar4 = FUN_00cfa294(auStack_c8);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar4,0);
  lVar2 = FUN_00cfa6cc(auStack_c8);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_c8);
  FUN_00cfb5c4(auStack_c8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

