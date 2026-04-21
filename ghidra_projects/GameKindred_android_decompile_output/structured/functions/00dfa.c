// functions/00dfa — 30 functions
#include "libGameKindred.h"




void FUN_00dfa034(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,3,0x19,0);
  return;
}




float FUN_00dfa048(void)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  
  lVar1 = FUN_00d50ef8();
  uVar2 = FUN_00d44008(*(undefined4 *)(lVar1 + 0x260),PTR_s_Buff_Yates_Talent_TalentC_02bf2240);
  if ((uVar2 & 1) == 0) {
    fVar3 = 0.5;
  }
  else {
    fVar3 = (float)FUN_00d5a3d0(lVar1,DAT_0320ecb0,3,9);
    fVar3 = fVar3 * 0.5;
  }
  return fVar3;
}




void FUN_00dfa0ac(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00dfa048();
  *param_3 = uVar1;
  return;
}




float FUN_00dfa0d0(void)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  
  lVar1 = FUN_00d50ef8();
  uVar2 = FUN_00d44008(*(undefined4 *)(lVar1 + 0x260),PTR_s_Buff_Yates_Talent_TalentC_02bf2240);
  if ((uVar2 & 1) == 0) {
    fVar3 = 0.5;
  }
  else {
    fVar3 = (float)FUN_00d5a3d0(lVar1,DAT_0320ecb0,3,9);
    fVar3 = fVar3 * 0.5;
  }
  return fVar3;
}




void FUN_00dfa134(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00dfa0d0();
  *param_3 = uVar1;
  return;
}




float FUN_00dfa158(void)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  
  lVar1 = FUN_00d50ef8();
  uVar2 = FUN_00d44008(*(undefined4 *)(lVar1 + 0x260),PTR_s_Buff_Yates_Talent_TalentC_02bf2240);
  if ((uVar2 & 1) == 0) {
    fVar3 = 0.4;
  }
  else {
    fVar3 = (float)FUN_00d5a3d0(lVar1,DAT_0320ecb0,3,9);
    fVar3 = fVar3 * 0.4;
  }
  return fVar3;
}




void FUN_00dfa1c0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00dfa158();
  *param_3 = uVar1;
  return;
}




undefined1  [16] FUN_00dfa1e4(void)

{
  long lVar1;
  ulong uVar2;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar3 [16];
  
  lVar1 = FUN_00d50ef8();
  uVar2 = FUN_00d44008(*(undefined4 *)(lVar1 + 0x260),PTR_s_Buff_Yates_Talent_TalentC_02bf2240);
  if ((uVar2 & 1) != 0) {
    FUN_00d5a3d0(lVar1,DAT_0320ecb0,3,9);
    auVar3._4_4_ = extraout_var;
    auVar3._0_4_ = extraout_s0;
    auVar3._8_8_ = extraout_var_00;
    return auVar3;
  }
  return ZEXT816(0x3f800000);
}




void FUN_00dfa244(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00dfa1e4();
  *param_3 = uVar1;
  return;
}




float FUN_00dfa268(void)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  
  lVar1 = FUN_00d50ef8();
  uVar2 = FUN_00d44008(*(undefined4 *)(lVar1 + 0x260),PTR_s_Buff_Yates_Talent_TalentC_02bf2240);
  if ((uVar2 & 1) == 0) {
    fVar3 = 0.2;
  }
  else {
    fVar3 = (float)FUN_00d5a3d0(lVar1,DAT_0320ecb0,3,9);
    fVar3 = fVar3 * 0.2;
  }
  return fVar3;
}




void FUN_00dfa2d0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00dfa268();
  *param_3 = uVar1;
  return;
}




float FUN_00dfa2f4(void)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  
  lVar1 = FUN_00d50ef8();
  uVar2 = FUN_00d44008(*(undefined4 *)(lVar1 + 0x260),PTR_s_Buff_Yates_Talent_TalentC_02bf2240);
  if ((uVar2 & 1) == 0) {
    fVar3 = 0.1;
  }
  else {
    fVar3 = (float)FUN_00d5a3d0(lVar1,DAT_0320ecb0,3,9);
    fVar3 = fVar3 * 0.1;
  }
  return fVar3;
}




void FUN_00dfa35c(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00dfa2f4();
  *param_3 = uVar1;
  return;
}




float FUN_00dfa380(void)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  
  lVar1 = FUN_00d50ef8();
  uVar2 = FUN_00d44008(*(undefined4 *)(lVar1 + 0x260),PTR_s_Buff_Yates_Talent_TalentC_02bf2240);
  if ((uVar2 & 1) == 0) {
    fVar3 = 0.2;
  }
  else {
    fVar3 = (float)FUN_00d5a3d0(lVar1,DAT_0320ecb0,3,9);
    fVar3 = fVar3 * 0.2;
  }
  return fVar3;
}




void FUN_00dfa3e8(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00dfa380();
  *param_3 = uVar1;
  return;
}




float FUN_00dfa40c(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_00dfa048();
  fVar2 = (float)FUN_00dfa0d0(param_1);
  return fVar1 + fVar2;
}




float FUN_00dfa444(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = (float)FUN_00dfa048();
  fVar2 = (float)FUN_00dfa0d0(param_1);
  fVar3 = (float)FUN_00dfa158(param_1);
  fVar4 = (float)FUN_00dfa1e4(param_1);
  fVar5 = (float)FUN_00dfa268(param_1);
  fVar6 = (float)FUN_00dfa2f4(param_1);
  return fVar1 + fVar2 + fVar3 + fVar4 + fVar5 + fVar6;
}




float FUN_00dfa4ac(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (float)FUN_00dfa158();
  fVar2 = (float)FUN_00dfa1e4(param_1);
  fVar3 = (float)FUN_00dfa268(param_1);
  fVar4 = (float)FUN_00dfa2f4(param_1);
  return fVar1 + fVar2 + fVar3 + fVar4;
}




float FUN_00dfa4fc(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)FUN_00dfa1e4();
  fVar2 = (float)FUN_00dfa268(param_1);
  fVar3 = (float)FUN_00dfa2f4(param_1);
  return fVar1 + fVar2 + fVar3;
}




float FUN_00dfa540(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_00dfa268();
  fVar2 = (float)FUN_00dfa2f4(param_1);
  return fVar1 + fVar2;
}




void FUN_00dfa578(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_58 [16];
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  lVar2 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_58);
  FUN_00cf7b3c(uVar3,1);
  lVar2 = FUN_00cf9f7c(auStack_58);
  lVar4 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Yates_Talent_TalentC_02bf2240;
  plVar5 = (long *)FUN_00cfaa2c(lVar2 + 200);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,"Ability03");
  (**(code **)(*plVar5 + 0x18))(plVar5,"AttackToIdleCombat");
  plVar5 = (long *)FUN_00cfaa2c(lVar2 + 0xb0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,"Ability03");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(0x40000000);
  (**(code **)(*plVar5 + 0x18))(plVar5,"AttackToIdleCombat");
  plVar5 = (long *)FUN_00cf9afc(auStack_58);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))
                             (plVar5,PTR_s_Buff_Yates_C_PlayTeleportEffect_02bf1718);
  local_48 = FUN_00dfa40c;
  local_40 = 4;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_48);
  plVar5 = (long *)FUN_00cf9afc(auStack_58);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s_Buff_Yates_C_IsCasting_02bf1708);
  local_48 = FUN_00dfa444;
  local_40 = 4;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_48);
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7570(uVar3,FUN_00dfa0ac);
  plVar5 = (long *)FUN_00cfab04(auStack_58);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Yates_C_Leap");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x78))(plVar5,1);
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7570(uVar3,FUN_00dfa134);
  plVar5 = (long *)FUN_00cfab04(auStack_58);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Yates_C_Leap_Air");
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  plVar5 = (long *)FUN_00cf9afc(auStack_58);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s_Buff_Yates_C_Untouchable_02bf1728);
  local_48 = FUN_00dfa4ac;
  local_40 = 4;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_48);
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7570(uVar3,FUN_00dfa1c0);
  plVar5 = (long *)FUN_00cf9afc(auStack_58);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))
                             (plVar5,PTR_s_Buff_Yates_C_PostTeleport_HideSe_02bf1720);
  local_48 = FUN_00dfa1e4;
  local_40 = 4;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_48);
  plVar5 = (long *)FUN_00cfb44c(auStack_58);
  (**(code **)(*plVar5 + 0x58))();
  plVar5 = (long *)FUN_00cf9afc(auStack_58);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))
                             (plVar5,PTR_s_Buff_Yates_C_LandingIndicator_02bf1710);
  local_48 = FUN_00dfa4fc;
  local_40 = 4;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_48);
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7570(uVar3,FUN_00dfa244);
  plVar5 = (long *)FUN_00cf9afc(auStack_58);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s_Buff_Yates_C_LandingEffect_02bf1730);
  local_48 = FUN_00dfa540;
  local_40 = 4;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_48);
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7570(uVar3,FUN_00dfa2d0);
  plVar5 = (long *)FUN_00cfac24(auStack_58);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5,"Sound_Yates_C_Impact");
  lVar2 = FUN_00d09310();
  FUN_00d0a1b4(*(undefined4 *)(lVar2 + 0x510));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7570(uVar3,FUN_00dfa35c);
  plVar5 = (long *)FUN_00cfb134(auStack_58);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x68))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(0x3e99999a);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(0x3f4ccccd);
  (**(code **)(*plVar5 + 0x20))(0x41700000);
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7570(uVar3,FUN_00dfa3e8);
  lVar2 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dfa9bc(void)

{
  FUN_00cfc038(PTR_s_Buff_Yates_Withdraw_02bf1748);
  return;
}




undefined8 * FUN_00dfa9cc(long param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  puVar2 = (undefined4 *)(param_1 + 0x28);
  do {
    if (*(long *)(puVar2 + -8) == 0) {
      puVar1 = (undefined8 *)(puVar2 + -6);
      *puVar1 = &PTR_FUN_0281fc50;
      puVar2[-4] = 0;
      puVar2[-2] = 0;
      *puVar2 = 0;
      puVar2[2] = 0;
      puVar2[4] = 1;
      *(code **)(puVar2 + 6) = FUN_00d998d4;
      puVar2[8] = 4;
      *(undefined8 **)(puVar2 + -8) = puVar1;
      return puVar1;
    }
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 0x12;
  } while (uVar3 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}




uint FUN_00dfaa58(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  float fVar3;
  float fVar5;
  undefined8 uVar4;
  undefined1 local_58 [8];
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00dfab24(param_1 + 0x20,param_2,0,auStack_50);
  FUN_00dfab24(param_1 + 0x30,param_2,0,local_58);
  fVar3 = auStack_50._0_4_ - local_58._0_4_;
  fVar5 = auStack_50._4_4_ - local_58._4_4_;
  fVar3 = fVar3 * fVar3 + fVar5 * fVar5;
  fVar5 = SQRT(fVar3);
  if (NAN(fVar5)) {
    fVar5 = sqrtf(fVar3);
  }
  uVar4 = FUN_00a82290(param_1 + 8,param_2,0);
  uVar2 = FUN_00d99988(fVar5,uVar4,param_1 + 8,*(undefined4 *)(param_1 + 0x18));
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dfab24(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  switch(*(undefined4 *)(param_1 + 1)) {
  case 1:
    FUN_00cfb5e0(param_2,param_4);
    break;
  case 2:
    local_30[0] = *(undefined4 *)param_1;
    FUN_00cfb62c(param_2,local_30,param_4);
    break;
  case 3:
    local_30[0] = *(undefined4 *)param_1;
    FUN_00da2924(local_30,param_4);
    break;
  case 4:
    *param_4 = 0;
    (*(code *)*param_1)(param_2,param_4);
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00dfabe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 int param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [16];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_00cfb5b4(auStack_68);
  FUN_00cfb05c(auStack_68);
  plVar4 = (long *)FUN_00cfaa2c(auStack_68);
  (**(code **)(*plVar4 + 0x58))(plVar4,param_1);
  plVar4 = (long *)FUN_00cfac24(auStack_68);
  ppuVar1 = &PTR_s_Sound_Inara_Crit_Attack_01_02befc10;
  if (param_5 != 2) {
    ppuVar1 = &PTR_s_Sound_Inara_Default_Attack_01_02befbf8;
  }
  ppuVar2 = &PTR_s_Sound_Inara_Crit_Attack_Hit_01_02befc30;
  if (param_5 != 2) {
    ppuVar2 = &PTR_s_Sound_Inara_Default_Attack_Hit_0_02befc20;
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,*ppuVar1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,ppuVar1[1]);
  lVar5 = FUN_00d09310();
  FUN_00d0a358(*(undefined4 *)(lVar5 + 0x52c));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uVar6 = FUN_00cfa294(auStack_68);
  FUN_00cf7570(uVar6,FUN_00cf76f0);
  FUN_00cf7578(uVar6,FUN_00cfb9b0);
  plVar4 = (long *)FUN_00cfac24(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,*ppuVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,ppuVar2[1]);
  lVar5 = FUN_00d09310();
  FUN_00d0a10c(*(undefined4 *)(lVar5 + 0x52c));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  plVar4 = (long *)FUN_00cfab04(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))();
  (**(code **)(*plVar4 + 0x48))(plVar4,param_2);
  plVar4 = (long *)FUN_00cfab04(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"Bone_Weapon_Left");
  (**(code **)(*plVar4 + 0x48))(plVar4,param_3);
  plVar4 = (long *)FUN_00cfab04(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"Bone_Weapon_Right");
  (**(code **)(*plVar4 + 0x48))(plVar4,param_4);
  plVar4 = (long *)FUN_00cfa0e4(auStack_68);
  (**(code **)(*plVar4 + 0x58))(plVar4,param_5);
  FUN_00cfb0a4(auStack_68);
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dfae00(void)

{
  FUN_00dfabe4("Attack","Effect_Inara_AA","Effect_Nothing","Effect_Nothing",0);
  return;
}




void FUN_00dfae24(void)

{
  FUN_00dfabe4("AltAttack","Effect_Inara_AA_Alt","Effect_Nothing","Effect_Nothing",0);
  return;
}




void FUN_00dfae48(void)

{
  FUN_00dfabe4("CritAttack","Effect_Inara_AA_Crit","Effect_Inara_AA_Crit_Weapon",
               "Effect_Inara_AA_Crit_Weapon",2);
  return;
}




void FUN_00dfae6c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_68 [16];
  undefined4 local_58 [2];
  undefined4 local_50;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_68);
  lVar2 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_68);
  FUN_00cf7b3c(uVar3,1);
  lVar2 = FUN_00cf9f7c(auStack_68);
  lVar4 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Inara_Talent_TalentC_02bf2270;
  plVar5 = (long *)FUN_00cf9afc(lVar2 + 0xb0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s_Buff_Invulnerable_02beb400);
  local_48 = FUN_00dfb168;
  local_40 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_48);
  plVar5 = (long *)FUN_00cfac24(auStack_68);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5,"Sound_Inara_Leap_Startup");
  lVar2 = FUN_00d09310();
  FUN_00d0a358(*(undefined4 *)(lVar2 + 0x530));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  FUN_00cf99dc(auStack_68);
  plVar5 = (long *)FUN_00cf9b44(auStack_68);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x70))
                             (plVar5,PTR_s_Buff_Inara_B_CancelMarkOnHero_02bf1790);
  local_48 = (code *)CONCAT44(local_48._4_4_,0x3ecccccd);
  local_40 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_48);
  FUN_00cf9eec(auStack_68);
  plVar5 = (long *)FUN_00cfaa2c(auStack_68);
  (**(code **)(*plVar5 + 0x50))(plVar5,"JungleDashAttack");
  plVar5 = (long *)FUN_00cfa12c(auStack_68);
  local_48 = FUN_00dfb180;
  local_40 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x98))(plVar5,&local_48,0);
  local_58[0] = 0x3ecccccd;
  local_50 = 1;
  plVar5 = (long *)(**(code **)(*plVar5 + 0xa8))(plVar5,local_58);
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  plVar5 = (long *)FUN_00cfab04(auStack_68);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x68))(plVar5,"Bone_CenterMass");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Inara_Perk_Leap");
  local_48 = (code *)CONCAT44(local_48._4_4_,0x3ecccccd);
  local_40 = 1;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x60))(plVar5,&local_48);
  (**(code **)(*plVar5 + 0x78))(plVar5,1);
  uVar3 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(0x3f000000);
  FUN_00cf7578(uVar3,0);
  FUN_00cfb56c(auStack_68);
  plVar5 = (long *)FUN_00cfac24(auStack_68);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5,"Sound_Inara_Leap_Impact");
  lVar2 = FUN_00d09310();
  FUN_00d0a358(*(undefined4 *)(lVar2 + 0x530));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  plVar5 = (long *)FUN_00cfa0e4(auStack_68);
  (**(code **)(*plVar5 + 0x58))(plVar5,1);
  plVar5 = (long *)FUN_00cfab04(auStack_68);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Inara_Perk_Attack");
  (**(code **)(*plVar5 + 0x78))(plVar5,1);
  lVar2 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_68);
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

