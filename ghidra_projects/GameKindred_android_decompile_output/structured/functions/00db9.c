// functions/00db9 — 14 functions
#include "libGameKindred.h"




void FUN_00db9020(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,5,0x19,0);
  return;
}




void FUN_00db9034(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,3,0x19,0);
  return;
}




void FUN_00db9048(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cfa6cc(auStack_38);
  uVar2 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar2,"Ability03",0,1,0,"AttackToIdleCombat");
  plVar3 = (long *)FUN_00cfac6c(auStack_38);
  (**(code **)(*plVar3 + 0x50))(plVar3,"ability3");
  uVar4 = FUN_00cfab94(auStack_38);
  lVar5 = FUN_00d09310();
  uVar2 = FUN_00d09d70(*(undefined4 *)(lVar5 + 0x37c));
  FUN_00cf4164(0x3f800000,uVar2,uVar4,"Sound_Flicker_Ability_C_Cast",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_38);
  FUN_00cf7580(uVar2,FUN_00db91a8);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cf979c(auStack_38);
  uVar2 = FUN_00cf630c(uVar2,1);
  uVar2 = FUN_00cf6318(uVar2,0);
  FUN_00cf6324(uVar2,1);
  uVar2 = FUN_00cf9ab4(auStack_38);
  FUN_00cf456c(uVar2,PTR_s_Buff_Flicker_C_Control_02bf05f8,FUN_00db91bc,1,0);
  FUN_00cf9eec(auStack_38);
  lVar5 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar5 + 0x10) = 0;
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db91a8(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,6,0x19,0);
  return;
}




void FUN_00db91bc(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,4,0x19,0);
  return;
}




void FUN_00db91d0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar2,"Die",0,1,0,0);
  uVar2 = FUN_00cfaa74(auStack_38);
  FUN_00cf32cc(0,uVar2,"Effect_Death",1,0,1,0,0);
  uVar2 = FUN_00cfaa74(auStack_38);
  FUN_00cf32cc(0,uVar2,"Effect_Flicker_Death",0,0,0,0,0);
  uVar2 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3fee147b);
  FUN_00cf7578(uVar2,0);
  FUN_00cfa714(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db92c8(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
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
  uVar5 = FUN_00d098d8(*(undefined4 *)(lVar3 + 0x1cc));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Fortress_Attack_Small_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Fortress_Attack_Small_2");
  FUN_00cf41bc(uVar2,"Sound_Fortress_Attack_Small_3");
  FUN_00cf41bc(uVar2,"Sound_Fortress_Attack_Small_4");
  plVar4 = (long *)FUN_00cfac6c(auStack_48);
  (**(code **)(*plVar4 + 0x50))(plVar4,"defaultAttackVO");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e947ae1);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0,uVar2,"Effect_Fortress_Attack_Hit",0,0,1,0,0);
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d098d8(*(undefined4 *)(lVar3 + 0x1cc));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Fortress_Attack_Impact_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Fortress_Attack_Impact_2");
  FUN_00cf41bc(uVar2,"Sound_Fortress_Attack_Impact_3");
  FUN_00cf41bc(uVar2,"Sound_Fortress_Attack_Impact_4");
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




void FUN_00db94dc(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfb05c(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"AltAttack",0,1,FUN_00cfb9b0,"AttackToIdle");
  plVar3 = (long *)FUN_00cfac6c(auStack_48);
  (**(code **)(*plVar3 + 0x50))(plVar3,"altAttackVO");
  uVar2 = FUN_00cfab94(auStack_48);
  lVar4 = FUN_00d09310();
  uVar5 = FUN_00d098d8(*(undefined4 *)(lVar4 + 0x1cc));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Fortress_Attack_Medium_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Fortress_Attack_Medium_2");
  FUN_00cf41bc(uVar2,"Sound_Fortress_Attack_Medium_3");
  FUN_00cf41bc(uVar2,"Sound_Fortress_Attack_Medium_4");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e947ae1);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0,uVar2,"Effect_Fortress_Attack_Alt_Hit",0,0,1,0,0);
  uVar2 = FUN_00cfab94(auStack_48);
  lVar4 = FUN_00d09310();
  uVar5 = FUN_00d098d8(*(undefined4 *)(lVar4 + 0x1cc));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Fortress_Attack_Impact_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Fortress_Attack_Impact_2");
  FUN_00cf41bc(uVar2,"Sound_Fortress_Attack_Impact_3");
  FUN_00cf41bc(uVar2,"Sound_Fortress_Attack_Impact_4");
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




void FUN_00db96f0(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  FUN_00cfb05c(auStack_58);
  uVar2 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar2,"CritAttack",0,1,FUN_00cfb9b0,"AttackToIdle");
  plVar3 = (long *)FUN_00cfac6c(auStack_58);
  (**(code **)(*plVar3 + 0x50))(plVar3,"critAttackVO");
  uVar2 = FUN_00cfab94(auStack_58);
  lVar4 = FUN_00d09310();
  uVar5 = FUN_00d098d8(*(undefined4 *)(lVar4 + 0x1cc));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Fortress_Attack_Medium_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Fortress_Attack_Medium_1");
  FUN_00cf41bc(uVar2,"Sound_Fortress_Attack_Medium_1");
  FUN_00cf41bc(uVar2,"Sound_Fortress_Attack_Medium_1");
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e947ae1);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf32cc(0,uVar2,"Effect_Fortress_Attack_Crit_Hit",0,0,1,0,0);
  uVar2 = FUN_00cfab94(auStack_58);
  lVar4 = FUN_00d09310();
  uVar5 = FUN_00d098d8(*(undefined4 *)(lVar4 + 0x1cc));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Fortress_Attack_Impact_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Fortress_Attack_Impact_2");
  FUN_00cf41bc(uVar2,"Sound_Fortress_Attack_Impact_3");
  FUN_00cf41bc(uVar2,"Sound_Fortress_Attack_Impact_4");
  FUN_00cf99dc(auStack_58);
  uVar2 = FUN_00cfa00c(auStack_58);
  FUN_00cf6bb0(uVar2,FUN_00cfb8b4);
  FUN_00cfb0a4(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db98fc(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,undefined8 param_4,
                 long param_5,undefined4 *param_6,undefined8 *param_7)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float local_98;
  float fStack_94;
  float local_90;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d44008(*(undefined4 *)(param_5 + 0x260),
                       PTR_s_Buff_Fortress_Talent_Longtooth_02bf1e98);
  fVar8 = 24.0;
  uVar5 = 0x41c00000;
  if ((uVar2 & 1) == 0) {
    uVar5 = 0x41900000;
  }
  *param_6 = uVar5;
  FUN_00d55794(param_5,&local_98,0);
  fVar6 = (float)FUN_00d51830(param_4);
  lVar3 = FUN_00d51778(param_4);
  if (lVar3 == 0) {
    fVar10 = 2.0;
  }
  else {
    lVar3 = FUN_00d51778(param_4);
    fVar10 = 2.0;
    if ((*(byte *)(lVar3 + 0x2f4) & 1) != 0) {
      fVar10 = 1.3;
    }
  }
  lVar3 = FUN_00d51778(param_4);
  if (lVar3 == 0) {
    fVar11 = 0.0;
  }
  else {
    lVar3 = FUN_00d51778(param_4);
    fVar11 = 0.0;
    if ((*(byte *)(lVar3 + 0x2f5) & 0x10) != 0) {
      fVar11 = 0.5;
    }
  }
  fVar14 = local_98 - fVar6;
  fVar13 = fStack_94 - fVar8;
  fVar12 = local_90 - param_3;
  fVar9 = fVar14 * fVar14 + fVar13 * fVar13 + fVar12 * fVar12;
  if (0.01 < fVar9) {
    fVar7 = SQRT(fVar9);
    if (NAN(fVar7)) {
      fVar7 = sqrtf(fVar9);
    }
    fVar10 = fVar10 + fVar11;
    fVar9 = fVar10 * (fVar14 / fVar7);
    fVar11 = fVar10 * (fVar13 / fVar7);
    fVar10 = fVar10 * (fVar12 / fVar7);
    local_a8 = fVar6 + fVar9;
    fStack_a4 = fVar8 + fVar11;
    local_a0 = param_3 + fVar10;
    local_c8 = 0x4000000040000000;
    local_c0 = 0x40000000;
    uVar4 = FUN_00da2eb4(param_5);
    uVar2 = FUN_00ef00a0(uVar4,&local_a8,&local_b8,&local_c8);
    if (((uVar2 & 1) != 0) &&
       (fVar10 * fVar10 + fVar9 * fVar9 + fVar11 * fVar11 <
        (local_98 - fVar6) * (local_98 - fVar6) + (fStack_94 - fVar8) * (fStack_94 - fVar8) +
        (local_90 - param_3) * (local_90 - param_3))) {
      *(undefined4 *)(param_7 + 1) = local_b0;
      goto LAB_00db9afc;
    }
  }
  *(float *)(param_7 + 1) = local_90;
  local_b8 = CONCAT44(fStack_94,local_98);
LAB_00db9afc:
  *param_7 = local_b8;
  if (*(long *)(lVar1 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00db9b3c(undefined8 param_1,undefined8 param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float __x;
  float local_58;
  float fStack_54;
  float local_50;
  float local_48;
  float fStack_44;
  float local_40;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d55794(param_2,&local_48,0);
  FUN_00db98fc(param_1,param_2,&local_3c,&local_58);
  __x = (local_48 - local_58) * (local_48 - local_58) +
        (fStack_44 - fStack_54) * (fStack_44 - fStack_54) +
        (local_40 - local_50) * (local_40 - local_50);
  fVar2 = SQRT(__x);
  if (NAN(fVar2)) {
    fVar2 = sqrtf(__x);
  }
  *param_3 = fVar2 / local_3c;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db9c04(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfb05c(auStack_48);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar3,"Ability01_Dash",0,1,0,0);
  plVar4 = (long *)FUN_00cfac6c(auStack_48);
  (**(code **)(*plVar4 + 0x50))(plVar4,"lungeAttackVO");
  uVar3 = FUN_00cfab94(auStack_48);
  lVar2 = FUN_00d09310();
  uVar5 = FUN_00d098d8(*(undefined4 *)(lVar2 + 0x1cc));
  FUN_00cf4164(0x3f800000,uVar5,uVar3,"Sound_Fortress_Ability_A_Leap_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar3,"Sound_Fortress_Ability_A_Leap_2");
  uVar3 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0,uVar3,"Effect_Fortress_Lunge_LaunchDust",0,0,1,0,0);
  uVar3 = FUN_00cfaa74(auStack_48);
  FUN_00cf3428(0,uVar3,"Effect_Fortress_Lunge_Ribbons",1,"Bone_Shoulders",0,1,0,0);
  FUN_00cf98bc(auStack_48);
  uVar3 = FUN_00cf9c1c(auStack_48);
  FUN_00cf816c(uVar3,FUN_00db98fc,1,0);
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7570(uVar3,FUN_00db9b3c);
  FUN_00cfb56c(auStack_48);
  uVar3 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar3,"Ability01",0,1,0,"AttackToIdleCombat");
  uVar3 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0,uVar3,"Effect_Fortress_Attack_Hit",0,0,1,0,0);
  FUN_00cf9eec(auStack_48);
  FUN_00cf99dc(auStack_48);
  plVar4 = (long *)FUN_00cfa09c(auStack_48);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"Damage",0);
  (**(code **)(*plVar4 + 0x70))(plVar4,1);
  uVar3 = FUN_00cf9ab4(auStack_48);
  FUN_00cf456c(uVar3,PTR_s_Buff_Fortress_Prey_02bf0638,FUN_00db9f04,1,0);
  FUN_00cf9eec(auStack_48);
  uVar3 = FUN_00cfab94(auStack_48);
  lVar2 = FUN_00d09310();
  uVar5 = FUN_00d098d8(*(undefined4 *)(lVar2 + 0x1cc));
  FUN_00cf4164(0x3f800000,uVar5,uVar3,"Sound_Fortress_Attack_Impact_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar3,"Sound_Fortress_Attack_Impact_2");
  FUN_00cf41bc(uVar3,"Sound_Fortress_Attack_Impact_4");
  FUN_00cf41bc(uVar3,"Sound_Fortress_Attack_Impact_5");
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




void FUN_00db9f04(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,4,0x19,0);
  return;
}




void FUN_00db9f18(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  uVar2 = FUN_00cfb05c(auStack_58);
  FUN_00cf7b3c(uVar2,1);
  lVar3 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  uVar2 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar2,"Ability02",0,1,0,"AttackToIdleCombat");
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf3428(0,uVar2,"Effect_Fortress_TailSwipe",1,"Bone_Footlf",0,1,0,0);
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf3428(0,uVar2,"Effect_Fortress_TailSwipe_Tail",1,"Bone_Tail4",0,1,0,0);
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf3428(0,uVar2,"Effect_Fortress_Aura_Tail",1,"Bone_Tail1",0,1,0,0);
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf3428(0,uVar2,"Effect_Fortress_Aura_Tail",1,"Bone_Tail2",0,1,0,0);
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf3428(0,uVar2,"Effect_Fortress_Aura_Tail",1,"Bone_Tail3",0,1,0,0);
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf3428(0,uVar2,"Effect_Fortress_Aura_Tail",1,"Bone_Tail4",0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf32cc(0,uVar2,"Effect_Fortress_B",0,0,1,0,0);
  uVar2 = FUN_00cfab94(auStack_58);
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d098d8(*(undefined4 *)(lVar3 + 0x1cc));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Fortress_Ability_B_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Fortress_Ability_B_2");
  FUN_00cf41bc(uVar2,"Sound_Fortress_Ability_B_3");
  FUN_00cf41bc(uVar2,"Sound_Fortress_Ability_B_4");
  uVar2 = FUN_00cfab94(auStack_58);
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d098d8(*(undefined4 *)(lVar3 + 0x1cc));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Fortress_Ability_B_Impact_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Fortress_Ability_B_Impact_2");
  FUN_00cf41bc(uVar2,"Sound_Fortress_Ability_B_Impact_3");
  FUN_00cf41bc(uVar2,"Sound_Fortress_Ability_B_Impact_4");
  FUN_00cf99dc(auStack_58);
  plVar4 = (long *)FUN_00cfa09c(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  (**(code **)(*plVar4 + 0x38))(plVar4,"Damage",1);
  uVar2 = FUN_00cf9ab4(auStack_58);
  FUN_00cf456c(uVar2,PTR_s_Buff_Fortress_Bleeding_02bf0620,FUN_00dba2c8,1,0);
  FUN_00cf9eec(auStack_58);
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  lVar3 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  FUN_00cfb0a4(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

