// functions/00dde — 24 functions
#include "libGameKindred.h"




float FUN_00dde238(long param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar2 = *(long *)(param_1 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  iVar1 = FUN_00d535a4(lVar2,0);
  if (iVar1 == 0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = (float)FUN_00d53a18(lVar2,0);
    fVar4 = (float)FUN_00d5a3d0(param_1,DAT_0320ebd0,2,9);
    fVar3 = -(fVar3 * fVar4);
  }
  return fVar3;
}




void FUN_00dde2cc(undefined8 param_1,undefined8 param_2,undefined8 *param_3,uint param_4,
                 undefined4 param_5)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 auStack_78 [16];
  code *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_78);
  FUN_00cfb05c(auStack_78);
  uVar2 = FUN_00cfa9e4(auStack_78);
  FUN_00cf3048(uVar2,param_1,0,1,FUN_00cfb9b0,"AttackToIdleCombat");
  uVar3 = FUN_00ceab48();
  uVar2 = FUN_00cfa294(auStack_78);
  if ((uVar3 & 1) == 0) {
    FUN_00cf7478(0x3dcccccd,uVar2);
    FUN_00cf7578(uVar2,FUN_00cfb9b0);
    if (0 < (int)param_4) {
      uVar4 = FUN_00cfab94(auStack_78);
      uVar8 = *param_3;
      lVar5 = FUN_00d09310();
      uVar2 = FUN_00d0992c(*(undefined4 *)(lVar5 + 0x1e0));
      FUN_00cf4164(0x3f800000,uVar2,uVar4,uVar8,0,0,0xffffffff,0,1);
      if (param_4 != 1) {
        lVar5 = (ulong)param_4 - 1;
        do {
          param_3 = param_3 + 1;
          FUN_00cf41bc(uVar4,*param_3);
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
    }
    plVar7 = (long *)FUN_00cfac6c(auStack_78);
    (**(code **)(*plVar7 + 0x50))(plVar7,"autoAttackVO");
    uVar2 = FUN_00cfa294(auStack_78);
    FUN_00cf7478(0x3e4ccccd);
  }
  else {
    FUN_00cf7478(0x3e947ae1,uVar2);
  }
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfaa74(auStack_78);
  FUN_00cf32cc(0,uVar2,param_2,0,0,1,0,0);
  uVar4 = FUN_00cfab94(auStack_78);
  lVar5 = FUN_00d09310();
  uVar2 = FUN_00d0992c(*(undefined4 *)(lVar5 + 0x1e4));
  FUN_00cf4164(0x3f800000,uVar2,uVar4,"Sound_Rona_Impact_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar4,"Sound_Rona_Impact_2");
  FUN_00cf41bc(uVar4,"Sound_Rona_Impact_3");
  FUN_00cf41bc(uVar4,"Sound_Rona_Impact_4");
  lVar5 = FUN_00cf9f7c(auStack_78);
  lVar6 = FUN_00cefb20(lVar5 + 0x10);
  *(undefined **)(lVar6 + 8) = PTR_s_Buff_Rona_Talent_HeroicBrawler_02bf2080;
  plVar7 = (long *)FUN_00cfa8c4(lVar5 + 0xb0);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x50))(plVar7,PTR_s_Ability__Rona__A_02bef3c0);
  local_68 = FUN_00dde238;
  local_60 = 3;
  (**(code **)(*plVar7 + 0x28))(plVar7,&local_68);
  FUN_00cf99dc(auStack_78);
  plVar7 = (long *)FUN_00cfa09c(auStack_78);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x50))();
  (**(code **)(*plVar7 + 0x58))(plVar7,param_5);
  FUN_00cfb0a4(auStack_78);
  FUN_00cfb5c4(auStack_78);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dde5bc(void)

{
  FUN_00dde2cc("Attack","Effect_Rona_AA_R1",&PTR_s_Sound_Rona_BasicAttack_1_02bef3c8,4,0);
  return;
}




void FUN_00dde5e0(void)

{
  FUN_00dde2cc("AltAttack","Effect_Rona_AA_L1",&PTR_s_Sound_Rona_AltAttack_1_02bef3e8,4,0);
  return;
}




void FUN_00dde604(void)

{
  FUN_00dde2cc("CritAttack","Effect_Rona_AA_Crit1",&PTR_s_Sound_Rona_CritAttack_1_02bef408,4,2);
  return;
}




void FUN_00dde628(void)

{
  FUN_00dde2cc("Ability02_DefaultAttack","Effect_Rona_B_AA",&PTR_s_Sound_Rona_BasicAttack_1_02bef3c8
               ,4,1);
  return;
}




void FUN_00dde64c(void)

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
  FUN_00cf9eec(auStack_38);
  uVar2 = FUN_00cfc038(PTR_s_Buff_Rona_Withdraw_02bf0e60);
  FUN_00cf95ac(auStack_38,uVar2);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dde6e0(undefined8 param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d59f54(param_2,0,2,0x19,0);
  *param_3 = fVar1 + 0.1;
  return;
}




void FUN_00dde724(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,2,0x19,0);
  return;
}




void FUN_00dde738(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_00ceab48();
  if (((uVar4 & 1) != 0) && (iVar2 = FUN_00d51964(param_1), iVar2 != 0)) {
    uVar7 = 0;
    uVar6 = 0;
    do {
      lVar5 = FUN_00d51954(param_1,uVar6);
      uVar6 = uVar6 + 1;
      uVar7 = (*(uint *)(lVar5 + 0x2f4) & 1) + uVar7;
      uVar3 = FUN_00d51964(param_1);
    } while (uVar6 < uVar3);
    if (uVar7 != 0) {
      lVar5 = FUN_00d5048c(param_1);
      fVar8 = (float)FUN_00d59f54(lVar5,0,4,0x19,0);
      FUN_00d043c0(fVar8 * (float)uVar7,auStack_68,*(undefined4 *)(lVar5 + 0x260),3,0);
      FUN_00ce20fc(auStack_68);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dde814(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d5048c();
  uVar2 = FUN_00d59f54(uVar1,0,2,0x19,0);
  *param_3 = uVar2;
  return;
}




void FUN_00dde84c(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_98 [16];
  code *local_88;
  undefined4 local_80;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_98);
  FUN_00cf98bc(auStack_98);
  uVar2 = FUN_00cf9d84(auStack_98);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Rona_Whirlwind_02bf0e50);
  FUN_00cf9eec(auStack_98);
  FUN_00cfa6cc(auStack_98);
  FUN_00cfb05c(auStack_98);
  uVar2 = FUN_00cfa9e4(auStack_98);
  FUN_00cf3048(uVar2,"Ability01_Dash",0,1,0,0);
  plVar3 = (long *)FUN_00cfac6c(auStack_98);
  (**(code **)(*plVar3 + 0x50))(plVar3,"autoAttackVO");
  plVar3 = (long *)FUN_00cfa12c(auStack_98);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  local_88 = FUN_00dde724;
  local_80 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xa8))(plVar3,&local_88);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  FUN_00cfb0a4(auStack_98);
  uVar2 = FUN_00cfa294(auStack_98);
  FUN_00cf7570(uVar2,FUN_00dde6e0);
  FUN_00cfb56c(auStack_98);
  FUN_00d4d9e8(&local_88);
  FUN_00d4dabc(&local_88,0x40000);
  FUN_00d4daf4(&local_88,0,1,0,0);
  FUN_00d4dcdc(&local_88,1);
  uVar2 = FUN_00cfaf84(auStack_98);
  FUN_00cf5504(uVar2,&local_88,0,FUN_00ddea7c,0,1,0);
  plVar3 = (long *)FUN_00cfa09c(auStack_98);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"Damage",0);
  uVar2 = FUN_00cf9cf4(auStack_98);
  FUN_00cf2e48(uVar2,FUN_00dde738);
  FUN_00cf9eec(auStack_98);
  uVar2 = FUN_00cfa9e4(auStack_98);
  FUN_00cf3048(uVar2,"Ability01_Attack",0,1,0,"AttackToIdleCombat");
  plVar3 = (long *)FUN_00cfb1c4(auStack_98);
  (**(code **)(*plVar3 + 0x50))(plVar3,"*Rona_RupturedGround*",0);
  lVar4 = FUN_00cfa6cc(auStack_98);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cfb5c4(auStack_98);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ddea7c(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,3,0x19,0);
  return;
}




void FUN_00ddea90(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_58 [16];
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  FUN_00cf98bc(auStack_58);
  uVar2 = FUN_00cf9d84(auStack_58);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Rona_Whirlwind_02bf0e50);
  FUN_00cf9eec(auStack_58);
  FUN_00cfa6cc(auStack_58);
  uVar2 = FUN_00cfb05c(auStack_58);
  FUN_00cf7b3c(uVar2,1);
  uVar2 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar2,"Ability02",0,1,0,"AttackToIdleCombat");
  plVar3 = (long *)FUN_00cfa12c(auStack_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(0x3f800000,0x3e4ccccd,0x3fa66666,0x3f4ccccd);
  local_48 = FUN_00ddedb4;
  local_40 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xa8))(plVar3,&local_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb8))(0x41700000);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  uVar4 = FUN_00ceab48();
  uVar2 = FUN_00cfa294(auStack_58);
  if ((uVar4 & 1) == 0) {
    FUN_00cf7580(uVar2,FUN_00ddeddc);
    FUN_00cf7578(uVar2,FUN_00cfb9b0);
    uVar5 = FUN_00cfab94(auStack_58);
    lVar6 = FUN_00d09310();
    uVar2 = FUN_00d0992c(*(undefined4 *)(lVar6 + 0x1f0));
    FUN_00cf4164(0x3f800000,uVar2,uVar5,"Sound_Rona_Ability_B_AxeSwing_Medium",0,0,0xffffffff,0,1);
    uVar2 = FUN_00cfa294(auStack_58);
    FUN_00cf7580(uVar2,FUN_00ddedf0);
  }
  else {
    FUN_00cf7580(uVar2,FUN_00ddedc8);
  }
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  FUN_00cfb56c(auStack_58);
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf32cc(0,uVar2,"Effect_Rona_B_1",0,0,1,0,0);
  FUN_00cf99dc(auStack_58);
  plVar3 = (long *)FUN_00cfa09c(auStack_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"Damage",1);
  FUN_00cf9eec(auStack_58);
  plVar3 = (long *)FUN_00cfa954(auStack_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  local_48 = FUN_00ddee04;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x10))(plVar3,3,&local_48);
  plVar3 = (long *)FUN_00cf9afc(auStack_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Rona_SecondHitAvailable_02bf0e40)
  ;
  local_48 = FUN_00ddee18;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
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




void FUN_00ddedb4(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,0xb,0x19,0);
  return;
}




void FUN_00ddedc8(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,0xc,0x19,0);
  return;
}




void FUN_00ddeddc(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,0xd,0x19,0);
  return;
}




void FUN_00ddedf0(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,0xe,0x19,0);
  return;
}




void FUN_00ddee04(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,2,0x19,0);
  return;
}




void FUN_00ddee18(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,3,0x19,0);
  return;
}




void FUN_00ddee2c(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,0xf,0x19,0);
  return;
}




void FUN_00ddee40(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cfacfc(auStack_38);
  FUN_00cf8958(0x42480000);
  FUN_00cf98bc(auStack_38);
  uVar2 = FUN_00cf9d84(auStack_38);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Rona_SecondHitAvailable_02bf0e40);
  uVar2 = FUN_00cf9ab4(auStack_38);
  FUN_00cf44e8(0xbf800000,uVar2,PTR_s_Buff_Rona_Whirlwind_02bf0e50,1,0);
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ddeef0(undefined8 param_1,undefined8 param_2,float *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined8 param_6)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  *param_4 = 0;
  *param_5 = 0;
  lVar1 = FUN_00d5048c();
  fVar2 = (float)thunk_FUN_00d086f0(lVar1,0,1);
  fVar3 = (float)FUN_00d59f54(lVar1,1,6,0x19,0);
  fVar4 = (float)FUN_00d59f54(lVar1,1,5,2,0);
  fVar6 = *(float *)(*(long *)(lVar1 + 0x40) + 0x314);
  fVar5 = (float)FUN_00d59f54(lVar1,1,6,0x19,0);
  *param_3 = (fVar4 / (fVar2 * fVar3 + 1.0)) * (fVar6 * fVar5 + 1.0);
  FUN_00cfb800(lVar1,param_3,param_6,0);
  return;
}




void FUN_00ddefcc(undefined8 param_1,undefined8 param_2,float *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined1 *param_6)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar1 = FUN_00d5048c();
  fVar2 = (float)thunk_FUN_00d086f0(lVar1,0,1);
  fVar3 = (float)FUN_00d59f54(lVar1,1,6,0x19,0);
  fVar4 = (float)FUN_00d59f54(lVar1,1,5,0x19,0);
  fVar6 = *(float *)(*(long *)(lVar1 + 0x40) + 0x314);
  fVar5 = (float)FUN_00d59f54(lVar1,1,6,0x19,0);
  *param_3 = (fVar4 / (fVar2 * fVar3 + 1.0)) * (fVar6 * fVar5 + 1.0);
  *param_4 = 2;
  *param_5 = 1;
  *param_6 = 0;
  return;
}

