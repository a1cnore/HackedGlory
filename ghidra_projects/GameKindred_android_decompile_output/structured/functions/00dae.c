// functions/00dae — 21 functions
#include "libGameKindred.h"




void FUN_00dae014(undefined8 param_1,undefined8 param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float local_58 [4];
  float local_48 [3];
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d55794(param_2,local_48,0);
  FUN_00dadde0(param_1,param_2,&local_3c,local_58);
  fVar2 = (float)local_48._4_8_ - (float)local_58._4_8_;
  fVar3 = SUB84(local_48._4_8_,4) - SUB84(local_58._4_8_,4);
  fVar3 = (local_48[0] - local_58[0]) * (local_48[0] - local_58[0]) + fVar2 * fVar2 + fVar3 * fVar3;
  fVar2 = SQRT(fVar3);
  if (NAN(fVar2)) {
    fVar2 = sqrtf(fVar3);
  }
  fVar3 = fVar2 / local_3c;
  if (fVar2 / local_3c <= 0.1) {
    fVar3 = 0.1;
  }
  *param_3 = fVar3;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dae0e4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [96];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_a8);
  FUN_00cfb05c(auStack_a8);
  lVar2 = FUN_00cfa6cc(auStack_a8);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfa9e4(auStack_a8);
  FUN_00cf3048(uVar3,"Ability01",1,1,0,0);
  FUN_00cf98bc(auStack_a8);
  uVar3 = FUN_00cf9c1c(auStack_a8);
  FUN_00cf816c(uVar3,FUN_00dadde0,1,0);
  FUN_00cf9eec(auStack_a8);
  uVar3 = FUN_00cfaa74(auStack_a8);
  FUN_00cf32cc(0,uVar3,"Effect_Ardan_A_Dash",1,0,1,0,0);
  uVar3 = FUN_00cfaa74(auStack_a8);
  FUN_00cf3428(0,uVar3,"Effect_Ardan_Thruster",1,"Bone_ThrusterL",FUN_00dae014,1,0,0);
  uVar3 = FUN_00cfaa74(auStack_a8);
  FUN_00cf3428(0,uVar3,"Effect_Ardan_Thruster",1,"Bone_ThrusterR",FUN_00dae014,1,0,0);
  uVar3 = FUN_00cfab94(auStack_a8);
  lVar2 = FUN_00d09310();
  uVar5 = FUN_00d097dc(*(undefined4 *)(lVar2 + 0x168));
  FUN_00cf4164(0x3f800000,uVar5,uVar3,"Sound_Ardan_Thruster",0,0,0xffffffff,0,1);
  uVar3 = FUN_00cfa294(auStack_a8);
  FUN_00cf7570(uVar3,FUN_00dae014);
  FUN_00cfb56c(auStack_a8);
  uVar3 = FUN_00cfa9e4(auStack_a8);
  FUN_00cf3048(uVar3,"Ability01End",0,1,0,"AttackToIdleCombat");
  FUN_00cf99dc(auStack_a8);
  uVar3 = FUN_00cf9ab4(auStack_a8);
  FUN_00cf456c(uVar3,PTR_s_Buff_Ardan_SpeedBoost_02bf02d0,FUN_00dae490,1,0);
  uVar3 = FUN_00cf9ab4(auStack_a8);
  FUN_00cf456c(uVar3,PTR_s_Buff_Ardan_Barrier_02bf02c8,FUN_00dae4a4,1,0);
  FUN_00cf9eec(auStack_a8);
  FUN_00cf99dc(auStack_a8);
  uVar3 = FUN_00cfab4c(auStack_a8);
  FUN_00cf3a9c(0,uVar3,"Effect_Ardan_A_Landing",0);
  FUN_00cf9eec(auStack_a8);
  FUN_00d4d9e8(auStack_98);
  FUN_00d4dabc(auStack_98,0x40000);
  FUN_00d4daf4(auStack_98,0,1,0,0);
  uVar3 = FUN_00cfaf84(auStack_a8);
  FUN_00cf5504(uVar3,auStack_98,0,FUN_00dae4b8,0,0,1);
  uVar3 = FUN_00cf9ab4(auStack_a8);
  FUN_00cf456c(uVar3,PTR_s_Buff_Ardan_A_Slow_02bf02d8,FUN_00dae4cc,1,0);
  plVar4 = (long *)FUN_00cfa09c(auStack_a8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  (**(code **)(*plVar4 + 0x38))(plVar4,"Damage",0);
  uVar3 = FUN_00cfab94(auStack_a8);
  lVar2 = FUN_00d09310();
  uVar5 = FUN_00d097dc(*(undefined4 *)(lVar2 + 0x168));
  FUN_00cf4164(0x3f800000,uVar5,uVar3,"Sound_Ardan_ImpactAOE",0,0,0xffffffff,0,1);
  FUN_00cf9eec(auStack_a8);
  lVar2 = FUN_00cfa6cc(auStack_a8);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_a8);
  uVar3 = FUN_00cfa294(auStack_a8);
  FUN_00cf7580(uVar3,FUN_00dae4e0);
  FUN_00cf7578(uVar3,0);
  FUN_00cfb0ec(auStack_a8);
  FUN_00cfb5c4(auStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dae490(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,0xd,0x19,0);
  return;
}




void FUN_00dae4a4(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,5,0x19,0);
  return;
}




void FUN_00dae4b8(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,2,0x19,0);
  return;
}




void FUN_00dae4cc(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,8,0x19,0);
  return;
}




void FUN_00dae4e0(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,0xf,0x19,0);
  return;
}




void FUN_00dae4f4(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [16];
  undefined4 local_68 [2];
  undefined4 local_60;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_78);
  uVar2 = FUN_00cfb05c(auStack_78);
  FUN_00cf7b3c(uVar2,1);
  lVar3 = FUN_00cfa6cc(auStack_78);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  uVar2 = FUN_00cfa9e4(auStack_78);
  FUN_00cf3048(uVar2,"Ability02",1,1,0,0);
  uVar2 = FUN_00cfaa74(auStack_78);
  FUN_00cf32cc(0,uVar2,"Effect_Ardan_A_Dash",1,0,1,0,0);
  plVar4 = (long *)FUN_00cfa12c(auStack_78);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(0x3f800000,0x3e4ccccd,0x3fa66666,0x3f4ccccd);
  local_58 = FUN_00dae8e8;
  local_50 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xa0))(plVar4,&local_58);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  plVar4 = (long *)FUN_00cfab04(auStack_78);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"Bone_ThrusterL");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Ardan_Thruster");
  (**(code **)(*plVar4 + 0x78))(plVar4,1);
  plVar4 = (long *)FUN_00cfab04(auStack_78);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"Bone_ThrusterR");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Ardan_Thruster");
  (**(code **)(*plVar4 + 0x78))(plVar4,1);
  uVar2 = FUN_00cfab94(auStack_78);
  lVar3 = FUN_00d09310();
  uVar6 = FUN_00d097dc(*(undefined4 *)(lVar3 + 0x174));
  FUN_00cf4164(0x3f800000,uVar6,uVar2,"Sound_Ardan_Thruster",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_78);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar2,0);
  FUN_00cfb56c(auStack_78);
  uVar2 = FUN_00cfa9e4(auStack_78);
  FUN_00cf3048(uVar2,"Ability02End",0,1,0,"AttackToIdleCombat");
  uVar2 = FUN_00cfaa74(auStack_78);
  FUN_00cf32cc(0,uVar2,"Effect_Ardan_B",0,0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_78);
  FUN_00cf7580(uVar2,FUN_00dae8fc);
  FUN_00cf7578(uVar2,0);
  FUN_00cf99dc(auStack_78);
  plVar4 = (long *)FUN_00cfa09c(auStack_78);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  (**(code **)(*plVar4 + 0x38))(plVar4,"DAMAGE",1);
  lVar3 = FUN_00cf9f7c(auStack_78);
  lVar5 = FUN_00cefb20(lVar3 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Ardan_Talent_KnockoutPunch_02bf1d00;
  plVar4 = (long *)FUN_00cfa684(lVar3 + 0xb0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  local_58 = FUN_00dae910;
  local_50 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
  local_68[0] = 0x41a00000;
  local_60 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,local_68);
  (**(code **)(*plVar4 + 0x80))();
  FUN_00cf9eec(auStack_78);
  uVar2 = FUN_00cfab94(auStack_78);
  lVar3 = FUN_00d09310();
  uVar6 = FUN_00d097dc(*(undefined4 *)(lVar3 + 0x174));
  FUN_00cf4164(0x3f800000,uVar6,uVar2,"Sound_Ardan_Ability_B",0,0,0xffffffff,0,1);
  lVar3 = FUN_00cfa6cc(auStack_78);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  FUN_00cfb0a4(auStack_78);
  FUN_00cfacb4(auStack_78);
  FUN_00cf50b0(0x3f333333);
  uVar2 = FUN_00cfa294(auStack_78);
  FUN_00cf7580(uVar2,FUN_00dae928);
  FUN_00cf7578(uVar2,0);
  FUN_00cfb0ec(auStack_78);
  FUN_00cfb5c4(auStack_78);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dae8e8(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,3,0x19,0);
  return;
}




void FUN_00dae8fc(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,4,0x19,0);
  return;
}




void FUN_00dae910(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e588,0,9);
  return;
}




void FUN_00dae928(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,5,0x19,0);
  return;
}




void FUN_00dae93c(undefined8 param_1,ulong *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  uint local_48 [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d50ef8();
  FUN_00d55794(uVar2,local_48,0);
  local_48[1] = 0;
  *(uint *)(param_2 + 1) = local_48[2];
  *param_2 = (ulong)local_48[0];
  FUN_00d557c4(uVar2,param_3,&DAT_03218f68);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dae9c8(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d5048c();
  uVar2 = FUN_00d59f54(uVar1,2,5,0x19,0);
  *param_3 = uVar2;
  return;
}




void FUN_00daea00(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d5048c();
  FUN_00d59f54(uVar1,2,5,0x19,0);
  *param_3 = 0x40c00000;
  *param_4 = 0x40a00000;
  return;
}




void FUN_00daea48(undefined8 param_1,float *param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = FUN_00d50ef8();
  fVar2 = (float)FUN_00d59f54(uVar1,2,4,0x19,0);
  fVar3 = (float)FUN_00d59f54(uVar1,2,6,0x19,0);
  *param_2 = fVar2 + fVar3 * 0.5;
  return;
}




void FUN_00daeab4(undefined8 param_1,float *param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = FUN_00d50ef8();
  fVar2 = (float)FUN_00d59f54(uVar1,2,4,0x19,0);
  fVar3 = (float)FUN_00d59f54(uVar1,2,6,0x19,0);
  *param_2 = fVar2 + fVar3 * -0.5;
  return;
}




void FUN_00daeb20(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined1 auStack_a8 [16];
  code *local_98;
  undefined4 local_90;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_a8);
  lVar2 = FUN_00cfa6cc(auStack_a8);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfafcc(auStack_a8);
  FUN_00cf52e0(uVar3,"ArdanArena");
  uVar3 = FUN_00cf9d84(auStack_a8);
  FUN_00cf49b0(uVar3,PTR_s_Buff_Ardan_Arena_WarningIndicato_02bf02a8);
  uVar3 = FUN_00cf9d84(auStack_a8);
  FUN_00cf49b0(uVar3,PTR_s_Buff_Ardan_Arena_02bf02b0);
  FUN_00cf9eec(auStack_a8);
  FUN_00cfb05c(auStack_a8);
  uVar3 = FUN_00cfa9e4(auStack_a8);
  FUN_00cf3048(uVar3,"Ability03",0,1,0,"AttackToIdleCombat");
  uVar4 = FUN_00cfab94(auStack_a8);
  lVar2 = FUN_00d09310();
  uVar3 = FUN_00d097dc(*(undefined4 *)(lVar2 + 0x178));
  FUN_00cf4164(0x3f800000,uVar3,uVar4,"sound_ardanUltStart",0,0,0xffffffff,0,1);
  plVar5 = (long *)FUN_00cfb1c4(auStack_a8);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,"*ArdanArenaWarningIndicator*",0);
  (**(code **)(*plVar5 + 0x20))(plVar5,FUN_00e60680);
  plVar5 = (long *)FUN_00cfa12c(auStack_a8);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x90))();
  local_98 = (code *)CONCAT44(local_98._4_4_,0x3f800000);
  local_90 = 1;
  plVar5 = (long *)(**(code **)(*plVar5 + 0xa8))(plVar5,&local_98);
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  uVar3 = FUN_00cfaa74(auStack_a8);
  FUN_00cf3428(0,uVar3,"Effect_Ardan_Thruster",1,"Bone_ThrusterL",FUN_00dae9c8,1,0,0);
  uVar3 = FUN_00cfaa74(auStack_a8);
  FUN_00cf3428(0,uVar3,"Effect_Ardan_Thruster",1,"Bone_ThrusterR",FUN_00dae9c8,1,0,0);
  uVar3 = FUN_00cfaa74(auStack_a8);
  FUN_00cf3428(0,uVar3,"Effect_Ardan_Thrusters_Lg",1,"Bone_BackPack",FUN_00dae9c8,1,0,0);
  uVar3 = FUN_00cfa294(auStack_a8);
  FUN_00cf7570(uVar3,FUN_00dae9c8);
  FUN_00cfb56c(auStack_a8);
  uVar3 = FUN_00cfaa74(auStack_a8);
  FUN_00cf3428(0x3e800000,uVar3,"Effect_Ardan_PowerFist",1,"Bone_RightHand",0,1,0,0);
  uVar3 = FUN_00cfa294(auStack_a8);
  FUN_00cf7580(uVar3,FUN_00daefc4);
  FUN_00cf7578(uVar3,0);
  FUN_00cf9eec(auStack_a8);
  FUN_00d4d9e8(&local_98);
  FUN_00d4daf4(&local_98,0,1,0,0);
  FUN_00d4dabc(&local_98,1);
  uVar3 = FUN_00cfaf84(auStack_a8);
  uVar3 = FUN_00cf5460(0,uVar3,&local_98,0,0,1,0);
  uVar3 = FUN_00cf55c8(uVar3,FUN_00daea48);
  FUN_00cf55e0(uVar3,FUN_00daeab4);
  uVar3 = FUN_00cf9ab4(auStack_a8);
  FUN_00cf456c(uVar3,PTR_s_Buff_Stunned_02beb430,FUN_00daefd8,1,0);
  uVar3 = FUN_00cf9ab4(auStack_a8);
  FUN_00cf456c(uVar3,PTR_s_Buff_Ardan_Arena_Stunned_02bf02c0,FUN_00daefd8,1,0);
  uVar3 = FUN_00cf9ab4(auStack_a8);
  FUN_00cf456c(uVar3,PTR_s_Buff_Ardan_Arena_StunImmune_02bf02b8,FUN_00daefec,1,0);
  plVar5 = (long *)FUN_00cfa09c(auStack_a8);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))();
  (**(code **)(*plVar5 + 0x38))(plVar5,"Damage",2);
  FUN_00cf9eec(auStack_a8);
  plVar5 = (long *)FUN_00cfa8c4(auStack_a8);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s_Ability__Ardan__B_02bee550);
  local_98 = FUN_00daf000;
  local_90 = 3;
  (**(code **)(*plVar5 + 0x20))(plVar5,&local_98);
  plVar5 = (long *)FUN_00cfb1c4(auStack_a8);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,"*ArdanArena*",1);
  (**(code **)(*plVar5 + 0x20))(plVar5,FUN_00dae93c);
  uVar3 = FUN_00cf9ab4(auStack_a8);
  FUN_00cf44e8(0x40e00000,uVar3,PTR_s_Buff_GloballyVisible_02bebad8,1,0);
  lVar2 = FUN_00cfa6cc(auStack_a8);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_a8);
  uVar3 = FUN_00cfa294(auStack_a8);
  FUN_00cf7580(uVar3,FUN_00daf014);
  FUN_00cf7578(uVar3,0);
  FUN_00cfb0ec(auStack_a8);
  FUN_00cfb5c4(auStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00daefc4(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,9,0x19,0);
  return;
}




void FUN_00daefd8(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,2,0x19,0);
  return;
}




void FUN_00daefec(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,7,0x19,0);
  return;
}

