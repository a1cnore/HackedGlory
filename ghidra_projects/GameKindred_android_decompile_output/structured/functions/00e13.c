// functions/00e13 — 19 functions
#include "libGameKindred.h"




bool FUN_00e13088(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = FUN_00d66d28(*param_1);
  return (*(byte *)(lVar1 + 0x2f8) & 0x20) == 0;
}




void FUN_00e130ac(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_Backpack");
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Baron_B_JumpStartup");
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_LeftJet");
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Baron_B_JumpStartup_LeftJet");
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_RightJet");
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Baron_B_JumpStartup_RightJet");
  plVar3 = (long *)FUN_00e13b48(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Ability02_Charging_Idle");
  plVar3 = (long *)FUN_00d2df94(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"Sound_Baron_Ability_B_Windup");
  lVar4 = FUN_00d09310();
  FUN_00d09cc8(*(undefined4 *)(lVar4 + 0x334));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar5 = FUN_00d29f44(lVar2);
  local_48 = FUN_00e1320c;
  local_40 = 3;
  FUN_00d47690(uVar5,2,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1320c(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,6,0x19,0);
  return;
}




void FUN_00e13220(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  lVar2 = lVar2 + 0x10;
  uVar3 = FUN_00d29f44(lVar2);
  local_48 = FUN_00e133fc;
  local_40 = 3;
  FUN_00d47690(uVar3,1,&local_48);
  plVar4 = (long *)FUN_00d2ccac(lVar2);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Ability__Baron__QuickAttack_02bee638);
  plVar4 = (long *)FUN_00d2945c(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,"Bone_Backpack");
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Baron_B_Thruster_Buff");
  plVar4 = (long *)FUN_00d2945c(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,"Bone_LeftJet");
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Baron_B_LeftThruster_Buff");
  plVar4 = (long *)FUN_00d2945c(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,"Bone_RightJet");
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Baron_B_RightThruster_Buff");
  plVar4 = (long *)FUN_00d2945c(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,"Bone_Weapon");
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Baron_B_Weapon_Buff");
  plVar4 = (long *)FUN_00d2df94(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,"Sound_Baron_B_Land_SpeedBoost_Loop");
  lVar2 = FUN_00d09310();
  FUN_00d09cc8(*(undefined4 *)(lVar2 + 0x334));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  lVar2 = FUN_00d64980(param_1);
  plVar4 = (long *)FUN_00d2cc5c(lVar2 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"Sound_Baron_B_Land_SpeedBoost_End");
  lVar2 = FUN_00d09310();
  FUN_00d09cc8(*(undefined4 *)(lVar2 + 0x334));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e133fc(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,0xc,5,0);
  return;
}




void FUN_00e13410(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00d65010();
  uVar2 = FUN_00d29a18(lVar1 + 0x10);
  FUN_00d46cdc(uVar2,0x11);
  return;
}




void FUN_00e13430(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  float local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d66d28();
  FUN_00d5cf60();
  uVar2 = FUN_00d9e390();
  fVar5 = (float)FUN_00d59f54(uVar2,3,3,0x19,0);
  fVar6 = (float)FUN_00d59f54(uVar2,3,8,0x19,0);
  FUN_00d67d04(fVar5 - fVar6,param_1);
  lVar3 = FUN_00d65010(param_1);
  plVar4 = (long *)FUN_00d2945c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x98))(plVar4,2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Baron_C_AllyPreWarning");
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  lVar3 = FUN_00d64980(param_1);
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Baron_C_Warning_Everybody_02bf0378);
  local_50 = 1;
  local_58[0] = fVar6;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e13564(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_68 [4];
  float local_58 [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d66d28(*param_1);
  FUN_00d5cf60();
  uVar2 = FUN_00d9e390();
  uVar3 = FUN_00d66d28(*param_1);
  FUN_00d55794(uVar3,local_58,0);
  FUN_00d55794(param_2,local_68,0);
  fVar6 = (float)local_58._4_8_ - (float)local_68._4_8_;
  fVar7 = SUB84(local_58._4_8_,4) - SUB84(local_68._4_8_,4);
  fVar6 = (local_58[0] - local_68[0]) * (local_58[0] - local_68[0]) + fVar6 * fVar6 + fVar7 * fVar7;
  fVar7 = SQRT(fVar6);
  if (NAN(fVar7)) {
    fVar7 = sqrtf(fVar6);
  }
  fVar6 = (float)FUN_00d59f54(uVar2,3,6,0x19,0);
  if (fVar6 <= fVar7) {
    fVar4 = (float)FUN_00d59f54(uVar2,3,4,0x19,0);
    fVar5 = (float)FUN_00d59f54(uVar2,3,5,0x19,0);
    fVar6 = (fVar4 + -1.0) * ((fVar7 - fVar6) / (fVar5 - fVar6)) + 1.0;
  }
  else {
    fVar6 = 1.0;
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(fVar6);
  }
  return;
}




void FUN_00e136c0(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d426b0(*param_1);
  uVar3 = FUN_00d66d28(*param_1);
  FUN_00d55794(uVar3,auStack_48,0);
  FUN_00d4dabc(param_2,0x40000);
  FUN_00d4daf4(param_2,0,1,0,uVar2);
  FUN_00d59f54(uVar2,3,5,0x19,0);
  FUN_00d4db48(param_2,auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1377c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_68 [16];
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d66d28();
  FUN_00d5cf60();
  lVar2 = FUN_00d9e390();
  lVar3 = FUN_00d63f30(param_1);
  plVar4 = (long *)FUN_00d2945c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Baron_C_Warning_A");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,1);
  (**(code **)(*plVar4 + 0x80))(plVar4,0);
  plVar4 = (long *)FUN_00d2cc5c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"Sound_Baron_Ability_C_Start");
  lVar3 = FUN_00d09310();
  FUN_00d09cc8(*(undefined4 *)(lVar3 + 0x340));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uVar5 = FUN_00d66d28(param_1);
  FUN_00d55794(uVar5,auStack_68,0);
  lVar2 = *(long *)(lVar2 + 0x40);
  fVar8 = 1.0;
  fVar6 = (*(float *)(lVar2 + 0x1b4) + 1.0) *
          (*(float *)(lVar2 + 0x4c) + *(float *)(lVar2 + 0x100) * (*(float *)(lVar2 + 0x268) + 1.0))
  ;
  if (DAT_031b89f4 <= fVar6) {
    fVar6 = DAT_031b89f4;
  }
  fVar7 = DAT_031b8930._4_4_;
  if (DAT_031b8930._4_4_ <= fVar6) {
    fVar7 = fVar6;
  }
  if (fVar7 <= 0.0) {
    fVar8 = 0.2;
  }
  else if (fVar7 < 300.0) {
    fVar8 = (fVar7 / 300.0) * 0.8 + 0.2;
  }
  lVar2 = FUN_00d64980(param_1);
  lVar2 = lVar2 + 0x10;
  uVar5 = FUN_00da63b8(lVar2);
  FUN_00d9c89c(uVar5,FUN_00e136c0);
  plVar4 = (long *)FUN_00d2b818(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x40))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"Damage at Center",3);
  local_58 = FUN_00e13564;
  local_50 = 5;
  (**(code **)(*plVar4 + 0x88))(plVar4,&local_58);
  plVar4 = (long *)FUN_00d2cf7c(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_GloballyVisibleTrueSight_02bebae0);
  local_58 = FUN_00e13ae4;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  plVar4 = (long *)FUN_00d2cf7c(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_ShowGloballyVisible_02bebb20);
  local_58 = FUN_00e13ae4;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  plVar4 = (long *)FUN_00e13af8(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x40))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(fVar8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x3f800000);
  (**(code **)(*plVar4 + 0x20))(0x41700000);
  plVar4 = (long *)FUN_00d2cc5c(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"Sound_Baron_Ability_C_Impact");
  lVar3 = FUN_00d09310();
  FUN_00d09cc8(*(undefined4 *)(lVar3 + 0x348));
  plVar4 = (long *)(**(code **)(*plVar4 + 0x28))(plVar4);
  (**(code **)(*plVar4 + 0x38))();
  plVar4 = (long *)FUN_00d2887c(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_DelayedKill_02beb3e0);
  local_58 = (code *)CONCAT44(local_58._4_4_,0x3f800000);
  local_50 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00e13ae4(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,7,0x19,0);
  return;
}




void FUN_00e13af8(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a3ab8();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_00e13b48(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a2cd0();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_00e13b98(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d2887c(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Untargetable_02beb408);
  plVar2 = (long *)FUN_00d2887c(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e13bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Invulnerable_02beb400);
  return;
}




void FUN_00e13bf4(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    return;
  }
  lVar4 = FUN_00d65010(param_1);
  uVar2 = FUN_00cedce4();
  uVar5 = FUN_00d66d28(param_1);
  uVar3 = FUN_00ced2e0(uVar2,uVar5);
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_00ceab64();
    if ((uVar3 & 1) != 0) {
      FUN_00d66d28(param_1);
      cVar1 = FUN_00d55870();
      if (cVar1 == '\x02') goto LAB_00e13c60;
    }
    plVar6 = (long *)FUN_00d3bcb8(lVar4 + 0x10);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,"u_crystal_color");
    plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(0x40cc0000);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(0x42b28000);
    lVar4 = *plVar6;
    uVar2 = 0x42e58000;
  }
  else {
LAB_00e13c60:
    plVar6 = (long *)FUN_00d3bcb8(lVar4 + 0x10);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,"u_crystal_color");
    plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(0x435f0000);
    uVar2 = 0x4137999a;
    plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(0x4137999a);
    lVar4 = *plVar6;
  }
  (**(code **)(lVar4 + 0x38))(uVar2);
  return;
}




void FUN_00e13d20(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    return;
  }
  lVar5 = FUN_00d65010(param_1);
  uVar4 = FUN_00ceab64();
  if ((uVar4 & 1) == 0) {
    uVar1 = FUN_00d6a078(param_1);
    uVar2 = FUN_00cedf10();
    if (uVar1 == (uVar2 & 0xff)) goto LAB_00e13d6c;
  }
  else {
LAB_00e13d6c:
    uVar4 = FUN_00ceab64();
    if (((uVar4 & 1) == 0) || (iVar3 = FUN_00d6a078(param_1), iVar3 != 2)) {
      plVar6 = (long *)FUN_00d3bcb8(lVar5 + 0x10);
      plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,"u_crystal_color");
      plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(0x40cc0000);
      plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(0x42b28000);
      lVar5 = *plVar6;
      uVar7 = 0x42e58000;
      goto LAB_00e13e28;
    }
  }
  plVar6 = (long *)FUN_00d3bcb8(lVar5 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,"u_crystal_color");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(0x435f0000);
  uVar7 = 0x4137999a;
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(0x4137999a);
  lVar5 = *plVar6;
LAB_00e13e28:
  (**(code **)(lVar5 + 0x38))(uVar7);
  return;
}




void FUN_00e13e44(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long local_60;
  undefined8 local_58;
  undefined1 auStack_50 [40];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  FUN_00d69294(param_1,&local_58,&local_60);
  lVar5 = FUN_00d66d28(local_58);
  uVar6 = FUN_00daa58c(local_60,lVar5);
  if ((uVar6 & 1) != 0) {
    lVar7 = *(long *)(local_60 + 0x28);
    if ((lVar7 != 0) &&
       (((*(uint *)(lVar7 + 0x2f4) >> 0xc & 1) != 0 ||
        ((((*(uint *)(lVar7 + 0x2f4) & 1) != 0 && ((*(byte *)(local_60 + 0xc) >> 4 & 1) == 0)) &&
         ((uVar1 = *(ushort *)(lVar7 + 0x88) & 0x1f, uVar1 == 0x1f ||
          (1 < *(ushort *)(lVar7 + (ulong)uVar1 * 0x38 + 0x90) - 3)))))))) {
      uVar2 = *(undefined4 *)(lVar5 + 0x260);
      uVar4 = FUN_00d66d34(local_58);
      FUN_00d009d0(auStack_50,uVar2,uVar4);
      FUN_00ce20fc(auStack_50);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00e13f20(undefined8 *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_00d66d28(*param_1);
  lVar1 = *(long *)(lVar1 + 0x40);
  fVar2 = (*(float *)(lVar1 + 0x1a0) + 1.0) *
          (*(float *)(lVar1 + 0x38) + *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0));
  if (DAT_031b8b80 <= fVar2) {
    fVar2 = DAT_031b8b80;
  }
  fVar3 = DAT_031b8ac0;
  if (DAT_031b8ac0 <= fVar2) {
    fVar3 = fVar2;
  }
  return fVar3 * 0.05;
}




float FUN_00e13f90(undefined8 *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_00d66d28(*param_1);
  lVar1 = *(long *)(lVar1 + 0x40);
  fVar2 = (*(float *)(lVar1 + 0x1a8) + 1.0) *
          (*(float *)(lVar1 + 0x40) + *(float *)(lVar1 + 0xf4) * (*(float *)(lVar1 + 0x25c) + 1.0));
  if (DAT_031b8b88 <= fVar2) {
    fVar2 = DAT_031b8b88;
  }
  fVar3 = DAT_031b8ac8;
  if (DAT_031b8ac8 <= fVar2) {
    fVar3 = fVar2;
  }
  return fVar3 * 0.05;
}

