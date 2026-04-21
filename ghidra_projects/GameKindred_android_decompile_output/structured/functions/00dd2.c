// functions/00dd2 — 14 functions
#include "libGameKindred.h"




void FUN_00dd2054(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                 long param_5,undefined4 *param_6,undefined8 *param_7)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  float local_98;
  float fStack_94;
  float local_90;
  float local_88;
  float fStack_84;
  float local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d5048c();
  uVar7 = FUN_00d59f54(uVar2,0,4,0x19,0);
  *param_6 = uVar7;
  FUN_00d55794(param_5,&local_88,0);
  fVar8 = (float)FUN_00d51830(param_4);
  lVar3 = FUN_00d51778(param_4);
  if (lVar3 == 0) {
    bVar6 = 0;
  }
  else {
    lVar3 = FUN_00d51778(param_4);
    bVar6 = *(byte *)(lVar3 + 0x2f4) & 1;
  }
  lVar3 = FUN_00d51778(param_4);
  if (lVar3 == 0) {
    bVar5 = 0;
  }
  else {
    lVar3 = FUN_00d51778(param_4);
    bVar5 = *(byte *)(lVar3 + 0x2f5) >> 4 & 1;
  }
  fVar15 = local_88 - fVar8;
  fVar14 = fStack_84 - param_2;
  fVar13 = local_80 - param_3;
  fVar10 = fVar15 * fVar15 + fVar14 * fVar14 + fVar13 * fVar13;
  if (0.01 < fVar10) {
    fVar9 = SQRT(fVar10);
    if (NAN(fVar9)) {
      fVar9 = sqrtf(fVar10);
    }
    lVar3 = *(long *)(param_5 + 0x40);
    fVar10 = (*(float *)(lVar3 + 0x1e0) + 1.0) *
             (*(float *)(lVar3 + 0x78) + *(float *)(lVar3 + 300) * (*(float *)(lVar3 + 0x294) + 1.0)
             );
    if (DAT_031b14d0 <= fVar10) {
      fVar10 = DAT_031b14d0;
    }
    fVar11 = DAT_031b1410;
    if (DAT_031b1410 <= fVar10) {
      fVar11 = fVar10;
    }
    if (bVar6 == 0) {
      fVar10 = 0.5;
    }
    else {
      fVar10 = -*(float *)(*(long *)(param_5 + 0x38) + 0x68);
    }
    fVar12 = 0.0;
    if (bVar5 != 0) {
      fVar12 = -*(float *)(*(long *)(param_5 + 0x38) + 0x68);
    }
    fVar12 = fVar11 + fVar10 + fVar12;
    fVar15 = (fVar15 / fVar9) * fVar12;
    fVar10 = (fVar14 / fVar9) * fVar12;
    fVar12 = (fVar13 / fVar9) * fVar12;
    local_98 = fVar8 + fVar15;
    fStack_94 = param_2 + fVar10;
    local_90 = param_3 + fVar12;
    local_b8 = 0x4000000040000000;
    local_b0 = 0x40000000;
    uVar2 = FUN_00da2eb4(param_5);
    uVar4 = FUN_00ef00a0(uVar2,&local_98,&local_a8,&local_b8);
    if (((uVar4 & 1) != 0) &&
       (fVar12 * fVar12 + fVar15 * fVar15 + fVar10 * fVar10 <
        (local_88 - fVar8) * (local_88 - fVar8) + (fStack_84 - param_2) * (fStack_84 - param_2) +
        (local_80 - param_3) * (local_80 - param_3))) {
      *(undefined4 *)(param_7 + 1) = local_a0;
      goto LAB_00dd22a8;
    }
  }
  *(float *)(param_7 + 1) = local_80;
  local_a8 = CONCAT44(fStack_84,local_88);
LAB_00dd22a8:
  *param_7 = local_a8;
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00dd22e4(undefined8 param_1,undefined8 param_2,float *param_3)

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
  FUN_00dd2054(param_1,param_2,&local_3c,&local_58);
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




void FUN_00dd23ac(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d5048c();
  uVar2 = FUN_00d59f54(uVar1,0,3,0x19,0);
  *param_3 = uVar2;
  return;
}




void FUN_00dd23e4(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,3,0x19,0);
  return;
}




void FUN_00dd23f8(void)

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
  uVar2 = FUN_00cfb05c(auStack_48);
  FUN_00cf7b3c(uVar2,1);
  lVar3 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"Ability01",0,0,0,0);
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d0968c(*(undefined4 *)(lVar3 + 0x114));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Krul_ability_b_1",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0,uVar2,"Effect_Hero009_BW_Dash",1,0,1,0,0);
  FUN_00cf98bc(auStack_48);
  uVar2 = FUN_00cf9ab4(auStack_48);
  FUN_00cf456c(uVar2,PTR_s_Buff_Krul_DeadMansRush_Barrier_02beba18,FUN_00dd23e4,1,0);
  uVar2 = FUN_00cf9c1c(auStack_48);
  FUN_00cf816c(uVar2,FUN_00dd2054,1,0);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7570(uVar2,FUN_00dd22e4);
  FUN_00cf9eec(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"Ability01_Attack",0,1,0,0);
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0,uVar2,"Effect_Hero009_LFP_Sucking",0,0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar2,0);
  FUN_00cfb56c(auStack_48);
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d0968c(*(undefined4 *)(lVar3 + 0x114));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Krul_attack_impact_1",0,0,0xffffffff,0,1);
  FUN_00cf99dc(auStack_48);
  plVar4 = (long *)FUN_00cfa09c(auStack_48);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"WEAPON_DAMAGE",0);
  (**(code **)(*plVar4 + 0x70))(plVar4,1);
  FUN_00cf9eec(auStack_48);
  FUN_00cfacb4(auStack_48);
  FUN_00cf50b0(0x3f333333);
  lVar3 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar2,0);
  FUN_00cfb0a4(auStack_48);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,0);
  FUN_00cfb0ec(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd26f4(undefined8 param_1,long param_2,float *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  lVar3 = *(long *)(param_2 + 0x18);
  while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  uVar2 = FUN_00d5048c();
  uVar1 = FUN_00d6bb44(lVar3,DAT_0315cf0c);
  fVar4 = (float)FUN_00d59f54(uVar2,1,2,0x19,0);
  fVar5 = (float)FUN_00d59f54(uVar2,1,3,0x19,0);
  *param_3 = fVar4 + fVar5 * (float)uVar1;
  *param_4 = 2;
  *param_5 = 1;
  return;
}




void FUN_00dd27d4(undefined8 param_1,undefined8 param_2)

{
  FUN_00daa534(param_2,&DAT_03218ef8);
  return;
}




float FUN_00dd27e8(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_758 [64];
  undefined1 auStack_718 [16];
  undefined1 auStack_708 [96];
  long local_6a8 [200];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00d517cc();
  lVar4 = FUN_00d50ef8(param_1);
  if (lVar3 == 0) {
    fVar10 = 0.0;
  }
  else {
    lVar3 = *(long *)(lVar3 + 0x18);
    while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_02c7bf48))) {
      lVar3 = *(long *)(lVar3 + 0x20);
    }
    uVar2 = FUN_00d6bb44(lVar3,DAT_0315cf0c);
    fVar10 = (float)uVar2;
  }
  uVar5 = FUN_00d50ef8(param_1);
  fVar8 = (float)FUN_00d59f54(uVar5,1,4,0x19,0);
  uVar5 = FUN_00d50ef8(param_1);
  fVar9 = (float)FUN_00d59f54(uVar5,1,5,0x19,0);
  fVar8 = fVar8 + fVar10 * fVar9;
  uVar6 = FUN_00d44008(*(undefined4 *)(lVar4 + 0x260),PTR_s_Buff_Krul_Talent_HealingSmite_02bedfc0);
  if ((uVar6 & 1) != 0) {
    FUN_00d55794(lVar4,auStack_718,0);
    FUN_00d4d9e8(auStack_708);
    FUN_00d4dabc(auStack_708,1);
    FUN_00d4db40(auStack_708,lVar4);
    FUN_00d4daf4(auStack_708,1,0,0,0);
    FUN_00d5a3d0(lVar4,DAT_031abfe0,2,9);
    FUN_00d4db48(auStack_708,auStack_718);
    fVar10 = (float)FUN_00d5a3d0(lVar4,DAT_031abfe0,0,9);
    fVar8 = fVar8 * fVar10;
    uVar2 = FUN_00d9e840(auStack_708,local_6a8,200,0);
    if (uVar2 != 0) {
      uVar6 = (ulong)uVar2;
      plVar7 = local_6a8;
      do {
        if (*plVar7 != 0) {
          FUN_00daa4a4(fVar8,auStack_758,*(undefined4 *)(lVar4 + 0x260),
                       *(undefined4 *)(*plVar7 + 0x260),0xffffffff,0xffffffff,0xee,0xffffffff);
          FUN_00910c0c(auStack_758);
        }
        uVar6 = uVar6 - 1;
        plVar7 = plVar7 + 1;
      } while (uVar6 != 0);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return fVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd2a08(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [16];
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  uVar2 = FUN_00cfb05c(auStack_58);
  FUN_00cf7b3c(uVar2,1);
  FUN_00cfa6cc(auStack_58);
  uVar2 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar2,"Ability02",0,1,0,"AttackToIdle");
  uVar2 = FUN_00cfab94(auStack_58);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d0968c(*(undefined4 *)(lVar3 + 0x118));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"Krul_ability_a_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Krul_ability_a_2");
  FUN_00cf41bc(uVar2,"Krul_ability_a_3");
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf32cc(0,uVar2,"Effect_Hero009_BW",0,0,1,0,0);
  FUN_00cf9eec(auStack_58);
  FUN_00cf99dc(auStack_58);
  uVar2 = FUN_00cfab4c(auStack_58);
  FUN_00cf3a9c(0,uVar2,"Effect_Hero009_BW_AOE",0);
  FUN_00cf9eec(auStack_58);
  uVar2 = FUN_00cfab94(auStack_58);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d0968c(*(undefined4 *)(lVar3 + 0x118));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"Krul_attack_impact_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Krul_attack_impact_2");
  FUN_00cf41bc(uVar2,"Krul_attack_impact_3");
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar2,0);
  FUN_00cf99dc(auStack_58);
  uVar2 = FUN_00cfa00c(auStack_58);
  uVar2 = FUN_00cf6bb0(uVar2,FUN_00dd26f4);
  FUN_00cf6bb8(uVar2,FUN_00dd27d4);
  FUN_00cf9eec(auStack_58);
  FUN_00cf98bc(auStack_58);
  uVar2 = FUN_00cfa5ac(auStack_58);
  local_48 = FUN_00dd27e8;
  local_40 = 4;
  FUN_00cf6d54(uVar2,&local_48);
  FUN_00cf9eec(auStack_58);
  FUN_00cf99dc(auStack_58);
  uVar2 = FUN_00cf9d84(auStack_58);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Krul_Spectral_Smite_Debuf_02beba08);
  FUN_00cf9eec(auStack_58);
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar2,0);
  lVar3 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  FUN_00cfb0a4(auStack_58);
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,0);
  FUN_00cfb0ec(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd2d04(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cfa6cc(auStack_38);
  FUN_00cfb05c(auStack_38);
  uVar2 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar2,"Ability03",0,1,0,"AttackToIdle");
  uVar2 = FUN_00cfab94(auStack_38);
  FUN_00cf4164(0x3f800000,0x3f000000,uVar2,"Krul_ability_c_throw",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3ea8f5c3);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfb17c(auStack_38);
  uVar2 = FUN_00cfcad8(uVar2,0x35,"ThrowSword");
  FUN_00cfcba8(uVar2,1);
  lVar3 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  FUN_00cfb0a4(auStack_38);
  uVar2 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,0);
  FUN_00cfb0ec(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd2e40(void)

{
  FUN_00cfc038(PTR_s_Buff_Krul_Withdraw_02beba30);
  return;
}




bool FUN_00dd2e50(void)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00d50ef8();
  iVar1 = FUN_00d5c238(uVar2,1);
  return iVar1 != 0;
}




void FUN_00dd2e74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00d55794(param_2,param_4,0);
  return;
}




void FUN_00dd2e84(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  ulong local_58;
  float local_50;
  undefined1 local_48 [8];
  float local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00d55794(param_2,local_48,0);
  FUN_00d557c4(param_2,&local_58,&DAT_03218f68);
  fVar3 = (float)local_58;
  local_58 = (ulong)(uint)(float)local_58;
  fVar4 = fVar3 * fVar3 + 0.0 + local_50 * local_50;
  uVar5 = DAT_03218f68;
  fVar3 = DAT_03218f70;
  if (1e-08 <= fVar4) {
    fVar3 = SQRT(fVar4);
    if (NAN(fVar3)) {
      fVar3 = sqrtf(fVar4);
    }
    uVar5 = CONCAT44((float)(local_58 >> 0x20) / fVar3,(float)local_58 / fVar3);
    fVar3 = local_50 / fVar3;
  }
  lVar1 = *(long *)(param_2 + 0x40);
  fVar7 = *(float *)(*(long *)(param_2 + 0x38) + 100);
  fVar4 = (*(float *)(lVar1 + 0x1e0) + 1.0) *
          (*(float *)(lVar1 + 0x78) + *(float *)(lVar1 + 300) * (*(float *)(lVar1 + 0x294) + 1.0));
  if (DAT_031b1670 <= fVar4) {
    fVar4 = DAT_031b1670;
  }
  fVar6 = DAT_031b15b0;
  if (DAT_031b15b0 <= fVar4) {
    fVar6 = fVar4;
  }
  fVar4 = fVar6 + (*(float *)(*(long *)(param_2 + 0x38) + 0x68) *
                  (fVar7 + *(float *)(param_2 + 0x2e8))) / fVar7 + 0.5;
  *param_4 = CONCAT44((float)(uVar5 >> 0x20) * fVar4 + local_48._4_4_,
                      (float)uVar5 * fVar4 + local_48._0_4_);
  *(float *)(param_4 + 1) = fVar3 * fVar4 + local_40;
  if (*(long *)(lVar2 + 0x28) != local_38) {
    local_58 = uVar5;
    local_50 = fVar3;
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

