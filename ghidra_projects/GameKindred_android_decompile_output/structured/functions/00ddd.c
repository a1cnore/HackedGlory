// functions/00ddd — 23 functions
#include "libGameKindred.h"




void FUN_00ddd030(void)

{
  FUN_00ddcd68("CritAttack","Effect_Reim_AA_Crit_Ice","Effect_Reim_AA_Crit",
               &PTR_s_Sound_Reim_Crit_Attack_1_02bef340,3,&PTR_s_Sound_Reim_Crit_Impact_1_02bef358,3
               ,2);
  return;
}




void FUN_00ddd068(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfad44(auStack_38);
  FUN_00cf2ec0(uVar2,FUN_00ddcd38);
  lVar3 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  FUN_00cfb05c(auStack_38);
  plVar4 = (long *)FUN_00cfaa2c(auStack_38);
  (**(code **)(*plVar4 + 0x50))(plVar4,"Ability01");
  plVar4 = (long *)FUN_00cfab04(auStack_38);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Reim_A_Cast");
  (**(code **)(*plVar4 + 0x78))(plVar4,1);
  uVar5 = FUN_00cfab94(auStack_38);
  lVar3 = FUN_00d09310();
  uVar2 = FUN_00d09ad0(*(undefined4 *)(lVar3 + 0x27c));
  FUN_00cf4164(0x3f800000,uVar2,uVar5,"Sound_Reim_Ability_A_Start",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfb17c(auStack_38);
  FUN_00cfcad8(uVar2,0x56,"CenterBody");
  uVar2 = FUN_00cfa294(auStack_38);
  FUN_00cf7580(uVar2,FUN_00ddd1cc);
  FUN_00cf7578(uVar2,0);
  lVar3 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ddd1cc(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,3,0x19,0);
  return;
}




void FUN_00ddd1e0(undefined8 param_1,undefined8 param_2,float *param_3)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float local_48 [2];
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d50ef8();
  FUN_00d55794(uVar2,param_2,0);
  uVar2 = FUN_00d50ef8(param_1);
  FUN_00d557c4(uVar2,local_48,&DAT_03218f68);
  fVar3 = atan2f(local_40,local_48[0]);
  *param_3 = fVar3;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ddd26c(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_a8 [16];
  code *local_98;
  undefined4 local_90;
  undefined1 auStack_88 [96];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_a8);
  plVar2 = (long *)FUN_00cfaa2c(auStack_a8);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"Ability02");
  (**(code **)(*plVar2 + 0x28))();
  uVar3 = FUN_00cfa294(auStack_a8);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  plVar2 = (long *)FUN_00cfac24(auStack_a8);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Reim_Ability_B");
  lVar4 = FUN_00d09310();
  (**(code **)(*plVar2 + 0x28))(*(undefined4 *)(lVar4 + 0x280),plVar2);
  plVar2 = (long *)FUN_00cfaabc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,"Effect_Reim_B_AOE_Range",FUN_00ddd1e0);
  FUN_00d4d9e8(auStack_88);
  FUN_00d4dabc(auStack_88,0x40000);
  FUN_00d4daf4(auStack_88,0,1,0,0);
  uVar3 = FUN_00cfaf84(auStack_a8);
  FUN_00cf5504(uVar3,auStack_88,0,FUN_00ddd430,0,1,0);
  plVar2 = (long *)FUN_00cfa09c(auStack_a8);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))();
  (**(code **)(*plVar2 + 0x38))(plVar2,"Damage",1);
  plVar2 = (long *)FUN_00cf9b44(auStack_a8);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x70))(plVar2,PTR_s_Buff_Reim_Immobilize_02bf0de8);
  local_98 = FUN_00ddd444;
  local_90 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_98);
  FUN_00cf9eec(auStack_a8);
  FUN_00cfb5c4(auStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ddd430(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,2,0x19,0);
  return;
}




void FUN_00ddd444(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,3,0x19,0);
  return;
}




void FUN_00ddd458(void)

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
  FUN_00cf2ec0(uVar2,FUN_00ddcd38);
  lVar3 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  FUN_00cfb05c(auStack_48);
  plVar4 = (long *)FUN_00cfaa2c(auStack_48);
  (**(code **)(*plVar4 + 0x50))(plVar4,"Ability03");
  plVar4 = (long *)FUN_00cfab04(auStack_48);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"Bone_RightHand");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Reim_C_Cast");
  (**(code **)(*plVar4 + 0x78))(plVar4,1);
  plVar4 = (long *)FUN_00cfab04(auStack_48);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"Bone_LeftHand");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Reim_C_Cast");
  (**(code **)(*plVar4 + 0x78))(plVar4,1);
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d09ad0(*(undefined4 *)(lVar3 + 0x280));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Reim_Ability_C_Start",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7580(uVar2,FUN_00ddd670);
  FUN_00cf7578(uVar2,0);
  plVar4 = (long *)FUN_00cfb1c4(auStack_48);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"*Reim_C*",0);
  (**(code **)(*plVar4 + 0x20))(plVar4,FUN_00e60680);
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d09ad0(*(undefined4 *)(lVar3 + 0x280));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Reim_Ability_C_Yell",0,0,0xffffffff,0,1);
  lVar3 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ddd670(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,3,0x19,0);
  return;
}




void FUN_00ddd684(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  char *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  
  lVar2 = FUN_00d5048c();
  lVar2 = *(long *)(lVar2 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  uVar3 = FUN_00d6bbac(lVar2,DAT_0315cf30,0);
  uVar4 = 0x5b;
  pcVar1 = "GunMuzzleTip_Ability02_Attack";
  if ((uVar3 & 1) == 0) {
    uVar4 = 0x59;
    pcVar1 = "GunMuzzleTip_Attack";
  }
  *param_3 = uVar4;
  *param_4 = pcVar1;
  return;
}




void FUN_00ddd710(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  char *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  
  lVar2 = FUN_00d5048c();
  lVar2 = *(long *)(lVar2 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  uVar3 = FUN_00d6bbac(lVar2,DAT_0315cf30,0);
  uVar4 = 0x5b;
  pcVar1 = "GunMuzzleTip_Ability02_AltAttack";
  if ((uVar3 & 1) == 0) {
    uVar4 = 0x59;
    pcVar1 = "GunMuzzleTip_AltAttack";
  }
  *param_3 = uVar4;
  *param_4 = pcVar1;
  return;
}




void FUN_00ddd79c(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  char *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  
  lVar2 = FUN_00d5048c();
  lVar2 = *(long *)(lVar2 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  uVar3 = FUN_00d6bbac(lVar2,DAT_0315cf30,0);
  uVar4 = 0x5c;
  pcVar1 = "GunMuzzleTip_Ability02_CritAttack";
  if ((uVar3 & 1) == 0) {
    uVar4 = 0x5a;
    pcVar1 = "GunMuzzleTip_CritAttack";
  }
  *param_3 = uVar4;
  *param_4 = pcVar1;
  return;
}




void FUN_00ddd828(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 local_758;
  undefined4 uStack_754;
  undefined4 local_750;
  undefined1 auStack_748 [96];
  undefined1 auStack_6e8 [96];
  long local_688;
  long local_680;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar7 = FUN_00ceab48();
  if ((uVar7 & 1) != 0) {
    lVar8 = FUN_00d5048c(param_4);
    uVar7 = FUN_00d44008(*(undefined4 *)(lVar8 + 0x260),PTR_s_Buff_Ringo_Talent_BulletSplit_02bee0e0
                        );
    if ((uVar7 & 1) != 0) {
      lVar8 = FUN_00d5048c(param_4);
      uVar7 = FUN_00d44008(*(undefined4 *)(lVar8 + 0x260),PTR_s_Buff_Ringo_TwirlingSilver_02beba50);
      if ((uVar7 & 1) != 0) {
        uVar9 = FUN_00d5048c(param_4);
        local_758 = FUN_00d51830(param_4);
        uStack_754 = param_2;
        local_750 = param_3;
        FUN_00d4d9e8(auStack_6e8);
        FUN_00d4daf4(auStack_6e8,0,1,0,0);
        FUN_00d4db40(auStack_6e8,uVar9);
        FUN_00d4dabc(auStack_6e8,0x40000);
        uVar9 = FUN_00d5048c(param_4);
        FUN_00d5a3d0(uVar9,DAT_031ac4f0,2,9);
        FUN_00d4db48(auStack_6e8,&local_758);
        FUN_00d4dc44(auStack_6e8,1);
        FUN_00d4dc24(auStack_6e8,1);
        iVar2 = FUN_00d9e840(auStack_6e8,&local_688,200,0);
        if ((iVar2 != 0) &&
           ((lVar10 = FUN_00d51778(param_4), lVar8 = local_688, lVar10 != local_688 ||
            (lVar8 = local_680, iVar2 != 1)))) {
          if (((DAT_031b1b00 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_031b1b00), iVar2 != 0))
          {
            DAT_031b1af8 = 0x3e3270a0;
            __cxa_guard_release(&DAT_031b1b00);
          }
          FUN_00d5048c(param_4);
          uVar3 = FUN_00d5ba88();
          FUN_00d5048c(param_4);
          uVar4 = FUN_00d5ba88();
          uVar5 = FUN_00d5ba88(lVar8);
          uVar6 = FUN_00ceb350();
          FUN_00d02a78(0,auStack_748,uVar3,uVar4,uVar5,0x59,&DAT_031b1af8,uVar6);
          FUN_00ce20fc(auStack_748);
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ddda38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [16];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_68);
  FUN_00cfb05c(auStack_68);
  uVar2 = FUN_00cfa9e4(auStack_68);
  FUN_00cf3048(uVar2,param_1,0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfa294(auStack_68);
  FUN_00cf7570(uVar2,FUN_00cf76f0);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfab94(auStack_68);
  if ((param_5 & 1) == 0) {
    lVar3 = FUN_00d09310();
    uVar4 = FUN_00d09440(*(undefined4 *)(lVar3 + 0x74));
    FUN_00cf4164(0x3f800000,uVar4,uVar2,"Sound_Ringo_Attack_1",0,0,0xffffffff,0,1);
    FUN_00cf41bc(uVar2,"Sound_Ringo_Attack_2");
    FUN_00cf41bc(uVar2,"Sound_Ringo_Attack_3");
    uVar2 = FUN_00cfaa74(auStack_68);
    FUN_00cf3358(0x3f800000,uVar2,param_2,0,param_3,0,1,0,0);
  }
  else {
    FUN_00cf4164(0x3f800000,0x3f000000,uVar2,"Sound_Ringo_Perk_Stance",0,0,0xffffffff,0,1);
    uVar2 = FUN_00cfab94(auStack_68);
    lVar3 = FUN_00d09310();
    uVar4 = FUN_00d09440(*(undefined4 *)(lVar3 + 0x74));
    FUN_00cf4164(0x3f800000,uVar4,uVar2,"Sound_Ringo_Attack_1",0,0,0xffffffff,0,1);
    FUN_00cf41bc(uVar2,"Sound_Ringo_Attack_2");
    FUN_00cf41bc(uVar2,"Sound_Ringo_Attack_3");
    uVar2 = FUN_00cfaa74(auStack_68);
    FUN_00cf3358(0x3f800000,uVar2,param_2,0,param_3,0,1,0,0);
    FUN_00cf98bc(auStack_68);
    uVar2 = FUN_00cf9d84(auStack_68);
    FUN_00cf49b0(uVar2,PTR_s_Buff_Ringo_DoubleDown_CritNext_02beba38);
    FUN_00cf9eec(auStack_68);
  }
  uVar2 = FUN_00cf9cf4(auStack_68);
  FUN_00cf2e48(uVar2,FUN_00ddd828);
  uVar2 = FUN_00cfb17c(auStack_68);
  FUN_00cfcb68(uVar2,param_4);
  FUN_00cfb0a4(auStack_68);
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dddcc4(void)

{
  FUN_00ddda38("Attack","Effect_Ringo_MuzzleFlash","GunMuzzleTip_Attack",FUN_00ddd684,0);
  return;
}




void FUN_00dddcec(void)

{
  FUN_00ddda38("AltAttack","Effect_Ringo_MuzzleFlash","GunMuzzleTip_Attack",FUN_00ddd710,0);
  return;
}




void FUN_00dddd14(void)

{
  FUN_00ddda38("CritAttack","Effect_Ringo_CritMuzzleFlash","GunMuzzleTip_CritAttack",FUN_00ddd79c,0)
  ;
  return;
}




void FUN_00dddd3c(void)

{
  FUN_00ddda38("CritAttack","Effect_Ringo_CritMuzzleFlash","GunMuzzleTip_CritAttack",FUN_00ddd79c,1)
  ;
  return;
}




void FUN_00dddd64(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  FUN_00cf3048(uVar3,"AchillesCut",0,1,0,"AttackToIdle");
  uVar3 = FUN_00cfab94(auStack_48);
  lVar2 = FUN_00d09310();
  uVar4 = FUN_00d09440(*(undefined4 *)(lVar2 + 0x78));
  FUN_00cf4164(0x3f800000,uVar4,uVar3,"Sound_Ringo_Ability_A",0,0,0xffffffff,0,1);
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfaa74(auStack_48);
  FUN_00cf3358(0x3f800000,uVar3,"Effect_Ringo_MuzzleFlash",0,"Projectile_RightHandThrow",0,1,0,0);
  uVar3 = FUN_00cfb17c(auStack_48);
  FUN_00cfcad8(uVar3,0x5d,"Projectile_RightHandThrow");
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_48);
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dddef4(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00d59f54(param_2,1,2,0x19,0);
  *param_3 = uVar1;
  return;
}




void FUN_00dddf2c(float param_1,undefined8 param_2,float *param_3)

{
  *param_3 = param_1 * 1.5;
  return;
}




void FUN_00dddf3c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cf98bc(auStack_38);
  uVar2 = FUN_00cf9ab4(auStack_38);
  FUN_00cf4540(uVar2,PTR_s_Buff_Ringo_TwirlingSilver_02beba50,FUN_00dddef4,1,0);
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dddfc4(void)

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
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"HeartOfTheMatter",0,1,0,0);
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0,uVar2,"Effect_Ringo_Ability03_Drink",1,0,1,0,0);
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf3428(0x3ff9999a,uVar2,"Effect_Ringo_Ability03_Aura",1,"Bone_HeartOfTheMatter_Aura",0,1,0,0
              );
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d09440(*(undefined4 *)(lVar3 + 0x80));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"Sound_Ringo_Ability_C_Intro",0,0,0xffffffff,0,1);
  lVar3 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  uVar2 = FUN_00cfb05c(auStack_48);
  FUN_00cf7b3c(uVar2,1);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3fd9999a);
  FUN_00cf7578(uVar2,0);
  FUN_00cf99dc(auStack_48);
  uVar2 = FUN_00cfab4c(auStack_48);
  FUN_00cf3a9c(0x3f800000,uVar2,"Effect_Ringo_Ult_Tell",1);
  FUN_00cf9eec(auStack_48);
  uVar2 = FUN_00cfab94(auStack_48);
  FUN_00cf4164(0x3f800000,0x3f000000,uVar2,"Sound_Ringo_Ability_C",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e800000);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfb17c(auStack_48);
  FUN_00cfcad8(uVar2,0x5e,"Projectile_HeartOfTheMatter_Mouth");
  FUN_00cf98bc(auStack_48);
  uVar2 = FUN_00cf9ab4(auStack_48);
  FUN_00cf44e8(0x40400000,uVar2,PTR_s_Buff_Revealed_02bebaf8,1,0);
  FUN_00cf9eec(auStack_48);
  lVar3 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  FUN_00cfb0a4(auStack_48);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3ecccccd);
  FUN_00cf7578(uVar2,0);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

