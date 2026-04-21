// functions/00de3 — 14 functions
#include "libGameKindred.h"




float FUN_00de329c(undefined8 param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)thunk_FUN_00d086f0(param_1,4,1);
  iVar1 = FUN_00d5c238(param_1,2);
  if (iVar1 == 0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = (float)FUN_00d59f54(param_1,2,5,0x19,0);
  }
  return fVar2 + fVar3;
}




void FUN_00de3304(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,0,1);
  return;
}




void FUN_00de3310(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac560,1,9);
  return;
}




void FUN_00de3328(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float local_48;
  float fStack_44;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d50ef8();
  uVar3 = FUN_00da01e4();
  FUN_00d55794(uVar3,&local_48,0);
  fVar4 = (float)FUN_00d51820(param_4);
  fVar5 = (float)FUN_00d59f54(uVar2,4,2,0x19,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((fVar4 - local_48) * (fVar4 - local_48) +
                   (param_2 - fStack_44) * (param_2 - fStack_44) +
                   (param_3 - local_40) * (param_3 - local_40) < fVar5 * fVar5);
}




void FUN_00de33e8(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,undefined8 param_4,
                 undefined8 *param_5,float *param_6)

{
  long lVar1;
  float fVar2;
  undefined8 uVar3;
  ulong uVar4;
  float fVar5;
  float __x;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float local_58;
  undefined4 uStack_54;
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d50ef8();
  uVar3 = FUN_00da01e4();
  FUN_00d55794(uVar3,&local_58,0);
  uVar4 = FUN_00de3328(param_4);
  if ((uVar4 & 1) == 0) {
    fVar5 = (float)FUN_00d51820(param_4);
    fVar5 = fVar5 - local_58;
    local_50 = param_3 - local_50;
    fVar8 = local_50 * local_50;
    __x = fVar5 * fVar5 + 0.0 + fVar8;
    fVar6 = (float)DAT_03218f68;
    fVar2 = DAT_03218f70;
    if (1e-08 <= __x) {
      fVar8 = SQRT(__x);
      if (NAN(fVar8)) {
        fVar8 = sqrtf(__x);
      }
      param_3 = local_50 / fVar8;
      fVar6 = fVar5 / fVar8;
      fVar2 = param_3;
    }
    *param_6 = fVar2;
    param_6[1] = 0.0;
    param_6[2] = -fVar6;
    uVar7 = FUN_00d51820(param_4);
    *(undefined4 *)param_5 = uVar7;
    *(float *)((long)param_5 + 4) = fVar8;
    *(float *)(param_5 + 1) = param_3;
  }
  else {
    param_6[2] = DAT_03218f70;
    *(ulong *)param_6 = CONCAT44(DAT_03218f68._4_4_,(float)DAT_03218f68);
    *(float *)(param_5 + 1) = local_50;
    *param_5 = CONCAT44(uStack_54,local_58);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00de3520(undefined8 param_1,undefined8 *param_2)

{
  char *pcVar1;
  uint uVar2;
  
  uVar2 = FUN_00de3328();
  pcVar1 = "*Skye_MissileVolley*";
  if ((uVar2 & 1) == 0) {
    pcVar1 = "*Skye_LineMissileVolley*";
  }
  *param_2 = pcVar1;
  return;
}




void FUN_00de355c(void)

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
  uVar2 = FUN_00cfad44(auStack_48);
  FUN_00cf2ec0(uVar2,FUN_00de251c);
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0x3f800000,uVar2,"Effect_Skye_C_Launch",1,0,1,0,0);
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d09980(*(undefined4 *)(lVar3 + 0x214));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Skye_Ability_C_Launch_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Skye_Ability_C_Launch_2");
  FUN_00cf41bc(uVar2,"Sound_Skye_Ability_C_Launch_3");
  FUN_00cf41bc(uVar2,"Sound_Skye_Ability_C_Launch_4");
  plVar4 = (long *)FUN_00cfb1c4(auStack_48);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"Uses actor name callback",0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x20))(plVar4,FUN_00de33e8);
  (**(code **)(*plVar4 + 0x30))(plVar4,FUN_00de3520);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de36bc(void)

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
  FUN_00cf32cc(0,uVar2,"Effect_Skye_Death",1,0,1,0,0);
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




void FUN_00de37b4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfc038(PTR_s_Buff_Skye_Withdraw_02bf1050);
  FUN_00cf95ac(auStack_38,uVar2);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de3820(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfb05c(auStack_48);
  uVar2 = FUN_00ceab48();
  uVar3 = FUN_00cfa294(auStack_48);
  if ((uVar2 & 1) == 0) {
    FUN_00cf7478(0x3e4ccccd,uVar3);
    FUN_00cf7578(uVar3,FUN_00cfb9b0);
    uVar3 = FUN_00cfa9e4(auStack_48);
    FUN_00cf3048(uVar3,"Attack",0,1,FUN_00cfb9b0,"AttackToIdle");
    uVar4 = FUN_00cfab94(auStack_48);
    lVar5 = FUN_00d09310();
    uVar3 = FUN_00d09734(*(undefined4 *)(lVar5 + 0x13c));
    FUN_00cf4164(0x3f800000,uVar3,uVar4,"Sound_Taka_Basic_Attack_1",0,0,0xffffffff,0,1);
    FUN_00cf41bc(uVar4,"Sound_Taka_Basic_Attack_2");
    FUN_00cf41bc(uVar4,"Sound_Taka_Basic_Attack_3");
    FUN_00cf41bc(uVar4,"Sound_Taka_Basic_Attack_4");
    uVar3 = FUN_00cfa294(auStack_48);
    FUN_00cf7478(0x3dcccccd);
    FUN_00cf7578(uVar3,FUN_00cfb9b0);
    uVar3 = FUN_00cfaa74(auStack_48);
    FUN_00cf32cc(0,uVar3,"Effect_Taka_Attack",1,0,1,0,0);
  }
  else {
    FUN_00cf7478(0x3e99999a,uVar3);
    FUN_00cf7578(uVar3,FUN_00cfb9b0);
  }
  FUN_00cf99dc(auStack_48);
  uVar3 = FUN_00cfa00c(auStack_48);
  FUN_00cf6bb0(uVar3,FUN_00cfb6d0);
  FUN_00cf9eec(auStack_48);
  uVar4 = FUN_00cfab94(auStack_48);
  lVar5 = FUN_00d09310();
  uVar3 = FUN_00d09734(*(undefined4 *)(lVar5 + 0x13c));
  FUN_00cf4164(0x3f800000,uVar3,uVar4,"Sound_Taka_Basic_Impact_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar4,"Sound_Taka_Basic_Impact_2");
  FUN_00cf41bc(uVar4,"Sound_Taka_Basic_Impact_3");
  FUN_00cf98bc(auStack_48);
  uVar3 = FUN_00cf9d84(auStack_48);
  FUN_00cf49b0(uVar3,PTR_s_Buff_Taka_HeroicPerk_Ki_02bf1088);
  FUN_00cf9eec(auStack_48);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de3a84(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfb05c(auStack_48);
  uVar2 = FUN_00ceab48();
  uVar3 = FUN_00cfa294(auStack_48);
  if ((uVar2 & 1) == 0) {
    FUN_00cf7478(0x3e4ccccd,uVar3);
    FUN_00cf7578(uVar3,FUN_00cfb9b0);
    uVar3 = FUN_00cfa9e4(auStack_48);
    FUN_00cf3048(uVar3,"AltAttack",0,1,FUN_00cfb9b0,"AttackToIdle");
    uVar4 = FUN_00cfab94(auStack_48);
    lVar5 = FUN_00d09310();
    uVar3 = FUN_00d09734(*(undefined4 *)(lVar5 + 0x13c));
    FUN_00cf4164(0x3f800000,uVar3,uVar4,"Sound_Taka_Basic_Attack_1",0,0,0xffffffff,0,1);
    FUN_00cf41bc(uVar4,"Sound_Taka_Basic_Attack_2");
    FUN_00cf41bc(uVar4,"Sound_Taka_Basic_Attack_3");
    FUN_00cf41bc(uVar4,"Sound_Taka_Basic_Attack_4");
    uVar3 = FUN_00cfa294(auStack_48);
    FUN_00cf7478(0x3dcccccd);
    FUN_00cf7578(uVar3,FUN_00cfb9b0);
    uVar3 = FUN_00cfaa74(auStack_48);
    FUN_00cf32cc(0,uVar3,"Effect_Taka_Attack_Alt",1,0,1,0,0);
  }
  else {
    FUN_00cf7478(0x3e99999a,uVar3);
    FUN_00cf7578(uVar3,FUN_00cfb9b0);
  }
  FUN_00cf99dc(auStack_48);
  uVar3 = FUN_00cfa00c(auStack_48);
  FUN_00cf6bb0(uVar3,FUN_00cfb6d0);
  FUN_00cf9eec(auStack_48);
  uVar4 = FUN_00cfab94(auStack_48);
  lVar5 = FUN_00d09310();
  uVar3 = FUN_00d09734(*(undefined4 *)(lVar5 + 0x13c));
  FUN_00cf4164(0x3f800000,uVar3,uVar4,"Sound_Taka_Basic_Impact_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar4,"Sound_Taka_Basic_Impact_2");
  FUN_00cf41bc(uVar4,"Sound_Taka_Basic_Impact_3");
  FUN_00cf98bc(auStack_48);
  uVar3 = FUN_00cf9d84(auStack_48);
  FUN_00cf49b0(uVar3,PTR_s_Buff_Taka_HeroicPerk_Ki_02bf1088);
  FUN_00cf9eec(auStack_48);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de3ce8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfb05c(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"CritAttack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar3 = FUN_00cfab94(auStack_48);
  lVar4 = FUN_00d09310();
  uVar2 = FUN_00d09734(*(undefined4 *)(lVar4 + 0x13c));
  FUN_00cf4164(0x3f800000,uVar2,uVar3,"Sound_Taka_Crit_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar3,"Sound_Taka_Crit_2");
  FUN_00cf41bc(uVar3,"Sound_Taka_Crit_3");
  uVar5 = FUN_00ceab48();
  uVar2 = FUN_00cfa294(auStack_48);
  if ((uVar5 & 1) == 0) {
    FUN_00cf7478(0x3e800000,uVar2);
    FUN_00cf7578(uVar2,FUN_00cfb9b0);
    uVar2 = FUN_00cfaa74(auStack_48);
    FUN_00cf32cc(0,uVar2,"Effect_Taka_Attack_Crit",1,0,1,0,0);
    uVar2 = FUN_00cfa294(auStack_48);
    FUN_00cf7478(0x3d4ccccd);
  }
  else {
    FUN_00cf7478(0x3e99999a,uVar2);
  }
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  FUN_00cf99dc(auStack_48);
  uVar2 = FUN_00cfa00c(auStack_48);
  FUN_00cf6bb0(uVar2,FUN_00cfb8b4);
  FUN_00cf9eec(auStack_48);
  uVar3 = FUN_00cfab94(auStack_48);
  lVar4 = FUN_00d09310();
  uVar2 = FUN_00d09734(*(undefined4 *)(lVar4 + 0x13c));
  FUN_00cf4164(0x3f800000,uVar2,uVar3,"Sound_Taka_Crit_Impact_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar3,"Sound_Taka_Crit_Impact_2");
  FUN_00cf41bc(uVar3,"Sound_Taka_Crit_Impact_3");
  FUN_00cf98bc(auStack_48);
  uVar2 = FUN_00cf9d84(auStack_48);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Taka_HeroicPerk_Ki_02bf1088);
  FUN_00cf9eec(auStack_48);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de3f38(undefined8 param_1,undefined8 param_2,float *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = FUN_00d5048c();
  lVar1 = *(long *)(lVar1 + 0x40);
  fVar3 = (*(float *)(lVar1 + 0x1b0) + 1.0) *
          (*(float *)(lVar1 + 0x48) + *(float *)(lVar1 + 0xfc) * (*(float *)(lVar1 + 0x264) + 1.0));
  if (DAT_031b1cf0 <= fVar3) {
    fVar3 = DAT_031b1cf0;
  }
  fVar4 = (float)DAT_031b1c30;
  if ((float)DAT_031b1c30 <= fVar3) {
    fVar4 = fVar3;
  }
  *param_3 = fVar4;
  uVar2 = FUN_00d5048c(param_1);
  fVar3 = (float)thunk_FUN_00d086f0(uVar2,2,0xb);
  *param_3 = fVar3 + *param_3;
  *param_4 = 0;
  *param_5 = 0;
  return;
}




void FUN_00de3fec(void)

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
  FUN_00cf3048(uVar2,"MortalStrike",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d09734(*(undefined4 *)(lVar3 + 0x13c));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"Sound_Taka_Crit_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Taka_Crit_2");
  FUN_00cf41bc(uVar2,"Sound_Taka_Crit_3");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0,uVar2,"Effect_Taka_MortalStrike",1,0,1,0,0);
  FUN_00cf98bc(auStack_48);
  uVar2 = FUN_00cf9ab4(auStack_48);
  FUN_00cf456c(uVar2,PTR_s_Buff_Taka_AssassinsAcceleration_02bf10a0,FUN_00de4270,1,0);
  uVar2 = FUN_00cf9d84(auStack_48);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Taka_HeroicPerk_Ki_02bf1088);
  uVar2 = FUN_00cf9ab4(auStack_48);
  FUN_00cf456c(uVar2,PTR_s_Buff_Taka_SpeedBoost_02bf10b0,FUN_00de427c,1,0);
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0,uVar2,"Effect_Taka_MortalStrike_Hit",0,0,1,0,0);
  FUN_00cf9eec(auStack_48);
  FUN_00cf99dc(auStack_48);
  uVar2 = FUN_00cfa00c(auStack_48);
  FUN_00cf6bb0(uVar2,FUN_00de3f38);
  FUN_00cf9eec(auStack_48);
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d09734(*(undefined4 *)(lVar3 + 0x13c));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"Sound_Taka_Crit_Impact_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Taka_Crit_Impact_2");
  FUN_00cf41bc(uVar2,"Sound_Taka_Crit_Impact_3");
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

