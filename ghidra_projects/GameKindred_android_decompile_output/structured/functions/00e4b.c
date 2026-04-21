// functions/00e4b — 21 functions
#include "libGameKindred.h"




void FUN_00e4b16c(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,0xc,0x19,0);
  return;
}




void FUN_00e4b180(undefined8 *param_1,float *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = FUN_00d66d28(*param_1);
  fVar2 = (float)FUN_00d59f54(uVar1,1,9,5,0);
  fVar3 = (float)FUN_00d59f54(uVar1,1,8,0x19,0);
  fVar4 = (float)FUN_00d59f54(uVar1,1,10,0x19,0);
  *param_2 = (fVar2 * fVar3) / fVar4;
  *param_3 = 0xbf800000;
  return;
}




void FUN_00e4b218(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2dfe4(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,5,FUN_00e4b180);
  lVar2 = FUN_00d634b4(param_1);
  FUN_00d2a320(lVar2 + 0x10);
  lVar2 = FUN_00d65d0c(param_1);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Kensei_B_EmpoweredByB_02bf13e8);
  local_38 = FUN_00deeab8;
  local_30 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_38);
  FUN_00d2a320(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4b2e4(undefined8 param_1)

{
  long lVar1;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_00e4b348;
  local_30 = 3;
  FUN_00d42a20(0,0x3f800000,param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4b348(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,0xb,0x19,0);
  return;
}




void FUN_00e4b35c(undefined8 param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_00d63f30();
  uVar4 = FUN_00d2d01c(lVar3 + 0x10);
  uVar4 = FUN_00d9b5f4(uVar4,PTR_s_Buff_Kensei_Talent_TalentC_02bf2138);
  FUN_00d9b5b0();
  FUN_00e0c91c();
  FUN_00d9b5b0(uVar4);
  plVar5 = (long *)FUN_00d2cf7c();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))
                             (plVar5,PTR_s_Buff_Kensei_Talent_TalentC_UltRe_02bf2158);
  local_48[0] = 0x3f800000;
  local_40 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,local_48);
  lVar3 = FUN_00d64980(param_1);
  lVar3 = lVar3 + 0x10;
  plVar5 = (long *)FUN_00d2945c(lVar3);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x68))(plVar5,"CenterBody");
  lVar6 = FUN_00d66d28(param_1);
  pcVar1 = "Effect_Kensei_C_Impact";
  if ((*(uint *)(lVar6 + 0x2f4) & 0x110) != 0) {
    pcVar1 = "Effect_Kensei_C_Impact_Small";
  }
  (**(code **)(*plVar5 + 0x48))(plVar5,pcVar1);
  plVar5 = (long *)FUN_00d2cc5c(lVar3);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,"Sound_Kensei_C_HitExplosion_01");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(plVar5,"Sound_Kensei_C_HitExplosion_02");
  lVar6 = FUN_00d09310();
  FUN_00d0a10c(*(undefined4 *)(lVar6 + 0x4c0));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  FUN_00d39534(lVar3);
  plVar5 = (long *)FUN_00d2b818(lVar3);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x40))();
  (**(code **)(*plVar5 + 0x38))(plVar5,"DAMAGE",2);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4b4fc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d426b0();
  FUN_00d55794(lVar2,auStack_48,0);
  FUN_00d4dabc(param_2,1);
  FUN_00d4daf4(param_2,0,1,0,lVar2);
  lVar2 = *(long *)(lVar2 + 0x40);
  fVar3 = (*(float *)(lVar2 + 0x1e4) + 1.0) *
          (*(float *)(lVar2 + 0x7c) + *(float *)(lVar2 + 0x130) * (*(float *)(lVar2 + 0x298) + 1.0))
  ;
  if (DAT_031bbed4 <= fVar3) {
    fVar3 = DAT_031bbed4;
  }
  fVar4 = DAT_031bbe10._4_4_;
  if (DAT_031bbe10._4_4_ <= fVar3) {
    fVar4 = fVar3;
  }
  FUN_00d4db48(fVar4,param_2,auStack_48);
  FUN_00d4dc64(param_2,1);
  FUN_00d4dc84(param_2,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4b5f8(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64d7c();
  lVar3 = FUN_00d4891c(0x3dcccccd,uVar2,0);
  lVar3 = FUN_00d29e8c(lVar3 + 0x10);
  FUN_00d39bdc(lVar3 + 0x10);
  uVar2 = FUN_00d39b7c(lVar3 + 0x88);
  uVar2 = FUN_00d9cef8(uVar2,FUN_00e4b4fc);
  FUN_00d9cb80(uVar2,PTR_s_Buff_Ylva_Perk_Detected_02bf1418);
  plVar4 = (long *)FUN_00d2cf7c(lVar3 + 0x88);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Ylva_Perk_Detected_02bf1418);
  local_48 = FUN_00e4b6c8;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4b6c8(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,0,1);
  return;
}




void FUN_00e4b6d4(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x98))(plVar2,2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ylva_Perk_Ping");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00e4b744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x80))(plVar2,0);
  return;
}




undefined1  [16] FUN_00e4b748(undefined8 param_1)

{
  ulong uVar1;
  float fVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  undefined8 uVar5;
  
  auVar3 = FUN_00d59f54(param_1,0,4,0x19,0);
  uVar5 = auVar3._8_8_;
  uVar4 = auVar3._0_8_;
  uVar1 = FUN_00d44be0(param_1,PTR_s_Buff_Ylva_Talent_TalentA_02bee340);
  if ((uVar1 & 1) != 0) {
    fVar2 = (float)FUN_00d5a3d0(param_1,DAT_031ac920,0,9);
    uVar4 = (ulong)(uint)(auVar3._0_4_ * fVar2);
    uVar5 = 0;
  }
  auVar3._8_8_ = uVar5;
  auVar3._0_8_ = uVar4;
  return auVar3;
}




void FUN_00e4b7c0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d67b78();
  uVar3 = FUN_00d9ea34();
  fVar5 = (float)FUN_00e4b748(uVar2);
  thunk_FUN_00d9ff34(&local_50,PTR_s_Buff_Ylva_A_Charging_02bf1420);
  uVar4 = FUN_00d6bbac(uVar3,local_50,&local_4c);
  if ((uVar4 & 1) == 0) {
    thunk_FUN_00d9ff34(local_58,PTR_s_Buff_Ylva_A_Charge_Control_02bf1428);
    uVar4 = FUN_00d6bbac(uVar3,local_58[0],&local_4c);
    fVar6 = 0.0;
    if ((uVar4 & 1) != 0) {
      fVar6 = (float)FUN_00d6b9f8(0,uVar3,local_4c);
      fVar7 = (float)FUN_00d59f54(uVar2,0,5,0x19,0);
      fVar6 = fVar6 / (fVar7 - fVar5);
    }
  }
  else {
    fVar6 = (float)FUN_00d6b9f8(uVar3,local_4c);
    fVar6 = 1.0 - fVar6 / fVar5;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar6);
}




void FUN_00e4b8c4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  code *local_78;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00d67dcc(param_1,FUN_00e4b7c0);
  lVar2 = FUN_00d63f30(param_1);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Ylva_A_Charging_02bf1420);
  local_78 = FUN_00e4b748;
  local_70 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_78);
  lVar2 = FUN_00d65010(param_1);
  lVar2 = lVar2 + 0x10;
  uVar4 = FUN_00d29f44(lVar2);
  local_78 = FUN_00e4bc88;
  local_70 = 3;
  FUN_00d47690(uVar4,2,&local_78);
  uVar4 = FUN_00d45f10(lVar2);
  FUN_00d9886c(uVar4,PTR_s_Ability__Ylva__A_02bef8c0,PTR_s_Ability__Ylva__A_Cancel_02bef8c8);
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Idle","Ability01_Idle");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"IdleCombat","Ability01_Idle");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"IdleSheath","Ability01_Idle");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"IdleBrush","Ability01_Idle");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Move","Ability01_Move");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStart","Ability01_MoveStart");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStop","Ability01_MoveStop");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveCombat","Ability01_Move");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStartCombat","Ability01_MoveStart");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStopCombat","Ability01_MoveStop");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveSheath","Ability01_Move");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveBrush","Ability01_Move");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStartBrush","Ability01_MoveStart");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStopBrush","Ability01_MoveStop");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Sprint","Ability01_Move");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Attack","Ability01_Idle");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"AltAttack","Ability01_Idle");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"CritAttack","Ability01_Idle");
  lVar2 = FUN_00d64980(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Ylva_A_Charging_02bf1420);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Ylva_A_Charged_02bf1430);
  plVar3 = (long *)FUN_00e213ac(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Ylva__A_02bef8c0);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4bc88(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,6,0x19,0);
  return;
}




void FUN_00e4bc9c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_00d2945c(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_RightHand");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ylva_A_Charging");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0x3f800000,0,0);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)FUN_00d3bc68(lVar1);
  (**(code **)(*plVar2 + 0x48))();
  plVar2 = (long *)FUN_00d2df94(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Sound_Ylva_A_Charging");
  lVar1 = FUN_00d09310();
  FUN_00d0a208(*(undefined4 *)(lVar1 + 0x57c));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_00d6624c(param_1);
  plVar2 = (long *)FUN_00d2887c(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e4bd84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Ylva_A_Charged_02bf1430);
  return;
}




uint FUN_00e4bd88(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  FUN_00d426b0(*param_1);
  uVar2 = FUN_00d9ea34();
  uVar1 = FUN_00d6bbac(uVar2,DAT_031bbd98,0);
  return ~uVar1 & 1;
}




void FUN_00e4bdbc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = FUN_00d63f30();
  lVar1 = FUN_00d29e8c(lVar1 + 0x10);
  lVar2 = FUN_00d29edc(lVar1 + 0x10);
  *(code **)(lVar2 + 8) = FUN_00e4bd88;
  FUN_00d2a320(lVar1 + 0x88);
  lVar1 = FUN_00d65010(param_1);
  lVar1 = lVar1 + 0x10;
  plVar3 = (long *)FUN_00d2945c(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_RightHand");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Ylva_A_Charged");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0x3f800000,0,0);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)FUN_00d3bc68(lVar1);
  (**(code **)(*plVar3 + 0x38))();
  plVar3 = (long *)FUN_00d2df94(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"Sound_Ylva_A_Charging_Complete");
  lVar1 = FUN_00d09310();
  FUN_00d0a208(*(undefined4 *)(lVar1 + 0x57c));
                    /* WARNING: Could not recover jumptable at 0x00e4beb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3);
  return;
}




void FUN_00e4beb4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65e5c();
  FUN_00d29f94(lVar2 + 0x10);
  lVar2 = FUN_00d65010(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_CenterMass");
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Ylva_B_Adrenaline");
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_48 = FUN_00e4bfa0;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,0xf,1,&local_48);
  uVar4 = FUN_00d29f44(lVar2);
  local_48 = FUN_00e4bfb4;
  local_40 = 3;
  FUN_00d47690(uVar4,1,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4bfa0(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,5,0x19,0);
  return;
}




void FUN_00e4bfb4(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,6,0x19,0);
  return;
}




void FUN_00e4bfc8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d69294(param_1,&local_30,&local_38);
  uVar2 = FUN_00d66d28(local_30);
  uVar3 = FUN_00d092ac(uVar2,3,8,9,1);
  *(undefined4 *)(local_38 + 8) = 2;
  *(undefined4 *)(local_38 + 0x5c) = 0;
  uVar4 = 0;
  if ((*(ushort *)(local_38 + 0xc) & 4) != 0) {
    uVar4 = uVar3;
  }
  *(undefined4 *)(local_38 + 0x54) = uVar4;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

