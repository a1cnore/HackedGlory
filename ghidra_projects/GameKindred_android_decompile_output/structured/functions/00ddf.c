// functions/00ddf — 25 functions
#include "libGameKindred.h"




void FUN_00ddf0b4(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d5048c();
  uVar2 = FUN_00d59f54(uVar1,1,7,0x19,0);
  *param_3 = uVar2;
  return;
}




void FUN_00ddf0ec(void)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_58 [16];
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  FUN_00cfa6cc(auStack_58);
  FUN_00cf98bc(auStack_58);
  uVar2 = FUN_00cf9d84(auStack_58);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Rona_Whirlwind_02bf0e50);
  FUN_00cf9eec(auStack_58);
  uVar2 = FUN_00cfb05c(auStack_58);
  FUN_00cf7b3c(uVar2,1);
  uVar2 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar2,"Ability02_FollowUp",0,1,0,"AttackToIdleCombat");
  uVar3 = FUN_00ceab48();
  uVar2 = FUN_00cfa294(auStack_58);
  if ((uVar3 & 1) == 0) {
    FUN_00cf7580(uVar2,FUN_00ddeddc);
    FUN_00cf7578(uVar2,FUN_00cfb9b0);
    uVar4 = FUN_00cfab94(auStack_58);
    lVar6 = FUN_00d09310();
    uVar2 = FUN_00d0992c(*(undefined4 *)(lVar6 + 0x1f0));
    FUN_00cf4164(0x3f800000,uVar2,uVar4,"Sound_Rona_Ability_B_AxeSwing_Heavy",0,0,0xffffffff,0,1);
    uVar2 = FUN_00cfa294(auStack_58);
    FUN_00cf7580(uVar2,FUN_00ddedf0);
  }
  else {
    FUN_00cf7580(uVar2,FUN_00ddedc8);
  }
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf32cc(0,uVar2,"Effect_Rona_B_2",0,0,1,0,0);
  FUN_00cf99dc(auStack_58);
  uVar2 = FUN_00cfa00c(auStack_58);
  FUN_00cf6bb0(uVar2,FUN_00ddeef0);
  uVar2 = FUN_00cfa00c(auStack_58);
  FUN_00cf6bb0(uVar2,FUN_00ddefcc);
  uVar2 = FUN_00cf9ab4(auStack_58);
  FUN_00cf4540(uVar2,PTR_s_Buff_MortalWound_02beb418,FUN_00ddf0b4,1,0);
  FUN_00cf9eec(auStack_58);
  FUN_00cf98bc(auStack_58);
  uVar2 = FUN_00cf9d84(auStack_58);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Rona_SecondHitAvailable_02bf0e40);
  FUN_00cf9eec(auStack_58);
  plVar5 = (long *)FUN_00cfa954(auStack_58);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))();
  local_48 = (code *)((ulong)local_48._4_4_ << 0x20);
  local_40 = 1;
  (**(code **)(*plVar5 + 0x20))(plVar5,3,&local_48);
  plVar5 = (long *)FUN_00cf9afc(auStack_58);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))
                             (plVar5,PTR_s_Buff_Rona_AttackFasterAfterSecon_02bf0e48);
  local_48 = FUN_00ddf3dc;
  local_40 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_48);
  FUN_00cfacb4(auStack_58);
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7580(uVar2,FUN_00ddee2c);
  FUN_00cf7578(uVar2,0);
  lVar6 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar6 + 0x10) = 0;
  FUN_00cfb0a4(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ddf3dc(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,9,0x19,0);
  return;
}




void FUN_00ddf3f0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cf98bc(auStack_38);
  uVar2 = FUN_00cf9d84(auStack_38);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Rona_Whirlwind_02bf0e50);
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00ddf468(void)

{
  int iVar1;
  long lVar2;
  
  FUN_00d50ef8();
  lVar2 = FUN_00d9eb64();
  if (lVar2 != 0) {
    iVar1 = FUN_00d53990(lVar2,1);
    if (iVar1 == 2) {
      return 2;
    }
    iVar1 = FUN_00d53990(lVar2,2);
    if (iVar1 == 2) {
      return 2;
    }
  }
  return 0;
}




void FUN_00ddf4cc(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  uVar2 = FUN_00cfad44(auStack_58);
  FUN_00cf2ec0(uVar2,FUN_00ddf468);
  FUN_00cfb05c(auStack_58);
  uVar2 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar2,param_1,0,1,FUN_00cfb9b0,"AttackToIdleCombat");
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar3 = FUN_00cfab94(auStack_58);
  lVar4 = FUN_00d09310();
  uVar2 = FUN_00d09c74(*(undefined4 *)(lVar4 + 0x308));
  FUN_00cf4164(0x3f800000,uVar2,uVar3,"Sound_Samuel_basic_attack_01",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar3,"Sound_Samuel_basic_attack_02");
  FUN_00cf41bc(uVar3,"Sound_Samuel_basic_attack_03");
  FUN_00cf41bc(uVar3,"Sound_Samuel_basic_attack_04");
  uVar2 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar2,param_3,param_2);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ddf62c(void)

{
  FUN_00ddf4cc("Attack","DefaultAttackShot",0x5f);
  return;
}




void FUN_00ddf644(void)

{
  FUN_00ddf4cc("AltAttack","AltAttackShot",0x5f);
  return;
}




void FUN_00ddf65c(void)

{
  FUN_00ddf4cc("CritAttack","DefaultAttackShot",0x60);
  return;
}




void FUN_00ddf674(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  uVar2 = FUN_00cfad44(auStack_48);
  FUN_00cf2ec0(uVar2,FUN_00ddf468);
  FUN_00cfb05c(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"EmpoweredAttack",0,1,FUN_00cfb9b0,"AttackToIdleCombat");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  FUN_00cf99dc(auStack_48);
  uVar2 = FUN_00cf9ab4(auStack_48);
  FUN_00cf44e8(0x3e4ccccd,uVar2,PTR_s_Buff_Samuel_PlayHitByEmpoweredAt_02bf0e88,1,0);
  uVar2 = FUN_00cfa00c(auStack_48);
  FUN_00cf6bb0(uVar2,FUN_00cfb760);
  plVar3 = (long *)FUN_00cfa09c(auStack_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  (**(code **)(*plVar3 + 0x20))(plVar3,"EmpoweredAttackBonusDamage");
  uVar2 = FUN_00cfb17c(auStack_48);
  uVar2 = FUN_00cfcad8(uVar2,0x61,"CenterBody");
  FUN_00cfcba8(uVar2,4);
  FUN_00cf9eec(auStack_48);
  FUN_00cf98bc(auStack_48);
  uVar2 = FUN_00cf9d84(auStack_48);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Samuel_EmpoweredAttackAvail_02bf0e70);
  FUN_00cf9eec(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ddf7f8(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00d59f54(param_2,1,5,0x19,0);
  *param_3 = uVar1;
  return;
}




void FUN_00ddf830(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,5,0x19,0);
  return;
}




void FUN_00ddf844(undefined8 param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d59f54(param_2,1,5,0x19,0);
  *param_3 = fVar1 + 0.6;
  return;
}




void FUN_00ddf888(ulong param_1)

{
  char *pcVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar8;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00cfb5b4(auStack_58);
  uVar4 = FUN_00cfad44(auStack_58);
  FUN_00cf2ec0(uVar4,FUN_00ddf468);
  uVar4 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar4,"Ability01",0,0,0,"AttackToIdle");
  plVar5 = (long *)FUN_00cfac6c(auStack_58);
  (**(code **)(*plVar5 + 0x50))(plVar5,"ability1");
  uVar6 = FUN_00cfab94(auStack_58);
  lVar7 = FUN_00d09310();
  uVar4 = FUN_00d09c74(*(undefined4 *)(lVar7 + 0x314));
  bVar3 = (param_1 & 1) == 0;
  pcVar1 = "Sound_Samuel_ability_a_empowered";
  if (bVar3) {
    pcVar1 = "Sound_Samuel_ability_a_fire";
  }
  uVar8 = 0x62;
  if (!bVar3) {
    uVar8 = 99;
  }
  FUN_00cf4164(0x3f800000,uVar4,uVar6,pcVar1,0,0,0xffffffff,0,1);
  FUN_00cf98bc(auStack_58);
  uVar4 = FUN_00cf9ab4(auStack_58);
  FUN_00cf4540(uVar4,PTR_s_Buff_Samuel_A_Strafing_02bf0e98,FUN_00ddf844,1,0);
  FUN_00cf4600();
  uVar4 = FUN_00cf9ab4(auStack_58);
  FUN_00cf456c(uVar4,PTR_s_Buff_Samuel_A_SpeedBoost_02bf0e90,FUN_00ddf830,1,0);
  FUN_00cf9eec(auStack_58);
  uVar4 = FUN_00cfa294(auStack_58);
  FUN_00cf7580(uVar4,FUN_00ddfaa8);
  FUN_00cf7578(uVar4,0);
  uVar4 = FUN_00cfb17c(auStack_58);
  uVar4 = FUN_00cfcad8(uVar4,uVar8,"AShot1");
  FUN_00cfcba8(uVar4,0);
  FUN_00cfb0a4(auStack_58);
  uVar4 = FUN_00cfa294(auStack_58);
  FUN_00cf7580(uVar4,FUN_00ddf830);
  FUN_00cf7578(uVar4,0);
  uVar4 = FUN_00cfb17c(auStack_58);
  uVar4 = FUN_00cfcad8(uVar4,uVar8,"AShot2");
  FUN_00cfcba8(uVar4,0);
  FUN_00cfacb4(auStack_58);
  FUN_00cf50b0(0x3e99999a);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ddfaa8(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,4,0x19,0);
  return;
}




void FUN_00ddfabc(void)

{
  FUN_00ddf888(0);
  return;
}




void FUN_00ddfac4(void)

{
  FUN_00ddf888(1);
  return;
}




void FUN_00ddfacc(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfad44(auStack_38);
  FUN_00cf2ec0(uVar2,FUN_00ddf468);
  FUN_00cfa6cc(auStack_38);
  uVar2 = FUN_00cfb05c(auStack_38);
  FUN_00cf7b3c(uVar2,1);
  plVar3 = (long *)FUN_00cfac6c(auStack_38);
  (**(code **)(*plVar3 + 0x50))(plVar3,"ability2");
  uVar2 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar2,"Ability02",0,1,0,"AttackToIdle");
  plVar3 = (long *)FUN_00cfb1c4(auStack_38);
  uVar2 = (**(code **)(*plVar3 + 0x50))(plVar3,"*Samuel_DarkField*",0);
  plVar3 = (long *)FUN_00cf9b8c(auStack_38);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))
                             (plVar3,PTR_s_Buff_Samuel_B_DarkFieldForming_02bf0ea8,uVar2);
  (**(code **)(*plVar3 + 0x20))(plVar3,FUN_00e604a8);
  uVar2 = FUN_00cfa294(auStack_38);
  FUN_00cf7580(uVar2,FUN_00ddfc18);
  FUN_00cf7578(uVar2,0);
  lVar4 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ddfc18(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,3,0x19,0);
  return;
}




void FUN_00ddfc2c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfad44(auStack_38);
  FUN_00cf2ec0(uVar2,FUN_00ddf468);
  lVar3 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  FUN_00cfb05c(auStack_38);
  uVar2 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar2,"Ability03",0,1,0,"AttackToIdle");
  uVar4 = FUN_00cfab94(auStack_38);
  lVar3 = FUN_00d09310();
  uVar2 = FUN_00d09c74(*(undefined4 *)(lVar3 + 0x31c));
  FUN_00cf4164(0x3f800000,uVar2,uVar4,"Sound_Samuel_ability_c_cast",0,0,0xffffffff,0,1);
  plVar5 = (long *)FUN_00cfb1c4(auStack_38);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,"*Samuel_NightmareShotWarningIndicator*",0);
  (**(code **)(*plVar5 + 0x20))(plVar5,FUN_00e60680);
  plVar5 = (long *)FUN_00cfac6c(auStack_38);
  (**(code **)(*plVar5 + 0x50))(plVar5,"ability3");
  uVar2 = FUN_00cfa294(auStack_38);
  FUN_00cf7580(uVar2,FUN_00ddfdac);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfb17c(auStack_38);
  FUN_00cfcad8(uVar2,100,"OverHead");
  lVar3 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ddfdac(undefined8 param_1)

{
  FUN_00d59f54(param_1,4,2,0x19,0);
  return;
}




void FUN_00ddfdc0(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_a0 [88];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_00d5048c(param_1);
    lVar7 = *(long *)(lVar6 + 0x18);
    while ((lVar7 != 0 && (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_02c7bf48))) {
      lVar7 = *(long *)(lVar7 + 0x20);
    }
    uVar5 = FUN_00d6bbac(lVar7,DAT_031bae9c,0);
    puVar3 = PTR_s_Buff_SAW_HeroicPerk_SpinUp_02bf0ee0;
    if ((uVar5 & 1) == 0) {
      uVar1 = *(undefined4 *)(lVar6 + 0x260);
      uVar8 = thunk_FUN_00d086f0(lVar6,3,1);
      uVar4 = FUN_00ceb350();
      FUN_00cfe864(uVar8,0,0,auStack_a0,uVar1,uVar1,puVar3,uVar4,1,0,0);
      FUN_00ce20fc(auStack_a0);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ddfec8(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,3,1);
  return;
}




float FUN_00ddfed4(long param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar2 = *(long *)(param_1 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  iVar1 = FUN_00d535a4(lVar2,1);
  if (iVar1 == 0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = (float)FUN_00d53a18(lVar2,1);
    fVar4 = (float)FUN_00d5a3d0(param_1,DAT_031ac508,1,9);
    fVar3 = -(fVar3 * fVar4);
  }
  return fVar3;
}




void FUN_00ddff68(void)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 local_150;
  float local_148;
  undefined8 local_140;
  float local_138;
  undefined8 local_130;
  float local_128;
  undefined8 local_124;
  float local_11c;
  undefined1 auStack_118 [64];
  undefined4 local_d8;
  undefined1 auStack_a0 [96];
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar4 = FUN_00d50ef8();
  uVar5 = FUN_00d44008(*(undefined4 *)(lVar4 + 0x260),PTR_s_Buff_SAW_Talent_PiercingBullets_02bee130
                      );
  bVar2 = false;
  if ((uVar5 & 1) != 0) {
    FUN_00d4d9e8(auStack_a0);
    FUN_00d4db40(auStack_a0,lVar4);
    FUN_00d4daf4(auStack_a0,0,1,0,0);
    FUN_00d4dabc(auStack_a0,0x40000);
    FUN_00d4e61c(auStack_118,auStack_a0);
    FUN_00d55794(lVar4,&local_140,0);
    FUN_00d557c4(lVar4,&local_150,&DAT_03218f68);
    fVar7 = (float)local_150 * (float)local_150 + local_150._4_4_ * local_150._4_4_ +
            local_148 * local_148;
    fVar6 = SQRT(fVar7);
    if (NAN(fVar6)) {
      fVar6 = sqrtf(fVar7);
    }
    uVar9 = NEON_fmov(0x3fc00000,4);
    fVar7 = (float)local_150 / fVar6;
    fVar8 = (float)((ulong)local_150 >> 0x20) / fVar6;
    local_150 = CONCAT44(fVar8,fVar7);
    local_148 = local_148 / fVar6;
    local_130 = local_140;
    local_11c = local_148 * 1.5 + local_138;
    local_124 = CONCAT44(fVar8 * (float)((ulong)uVar9 >> 0x20) + (float)((ulong)local_140 >> 0x20),
                         fVar7 * (float)uVar9 + (float)local_140);
    local_128 = local_138;
    FUN_00d4e838(0x3e19999a,auStack_118,&local_130);
    FUN_00d4dcdc(auStack_118,1);
    local_d8 = 0x3f266666;
    iVar3 = FUN_00d9e840(auStack_118,auStack_40,1,0);
    bVar2 = iVar3 != 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}

