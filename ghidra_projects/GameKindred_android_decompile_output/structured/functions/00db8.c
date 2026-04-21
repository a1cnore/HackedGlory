// functions/00db8 — 19 functions
#include "libGameKindred.h"




void FUN_00db80e4(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,2,0x19,0);
  return;
}




void FUN_00db80f8(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,5,0x19,0);
  return;
}




void FUN_00db810c(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,3,0x19,0);
  return;
}




void FUN_00db8120(undefined8 param_1,undefined8 param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_00d5048c();
  fVar2 = (float)FUN_00d59f54(uVar1,1,2,0x19,0);
  *param_3 = fVar2 + -0.2;
  return;
}




void FUN_00db8164(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  float fVar12;
  undefined8 uVar13;
  float __x;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_180 [4];
  float local_170;
  float fStack_16c;
  float local_168;
  float local_160;
  float fStack_15c;
  float local_158;
  undefined1 auStack_150 [48];
  undefined8 local_120;
  float local_118;
  undefined1 auStack_c8 [40];
  long local_a0;
  
  lVar2 = tpidr_el0;
  local_a0 = *(long *)(lVar2 + 0x28);
  uVar8 = FUN_00ceab48();
  if ((uVar8 & 1) != 0) {
    lVar9 = FUN_00d5048c(param_1);
    FUN_00d55794(lVar9,&local_160,0);
    iVar4 = FUN_00d51964(param_1);
    if (iVar4 != 0) {
      uVar11 = 0;
      do {
        lVar10 = FUN_00d51954(param_1,uVar11);
        if ((((*(byte *)(lVar10 + 0x2f6) >> 5 & 1) != 0) &&
            (uVar8 = FUN_00d6a814(lVar10,0x10), (uVar8 & 1) == 0)) &&
           (uVar8 = FUN_00da2ddc(lVar10), (uVar8 & 1) == 0)) {
          FUN_00d55794(lVar10,&local_170,0);
          fVar12 = (local_160 - local_170) * (local_160 - local_170) +
                   (fStack_15c - fStack_16c) * (fStack_15c - fStack_16c) +
                   (local_158 - local_168) * (local_158 - local_168);
          fVar14 = SQRT(fVar12);
          if (NAN(fVar14)) {
            fVar14 = sqrtf(fVar12);
          }
          fVar12 = (float)FUN_00d59f54(lVar9,1,3,0x19,0);
          fVar14 = fVar14 * fVar12;
          uVar8 = FUN_00d44008(*(undefined4 *)(lVar9 + 0x260),
                               PTR_s_Buff_Phinn_Talent_ExtraPolite_02bf2038);
          fVar12 = fVar14 + fVar14;
          if ((uVar8 & 1) == 0) {
            fVar12 = fVar14;
          }
          fVar15 = local_160 - local_170;
          fVar16 = fStack_15c - fStack_16c;
          fVar17 = local_158 - local_168;
          __x = fVar15 * fVar15 + fVar16 * fVar16 + fVar17 * fVar17;
          uVar13 = DAT_03218f68;
          fVar14 = DAT_03218f70;
          if (1e-08 <= __x) {
            fVar14 = SQRT(__x);
            if (NAN(fVar14)) {
              fVar14 = sqrtf(__x);
            }
            uVar13 = CONCAT44(fVar16 / fVar14,fVar15 / fVar14);
            fVar14 = fVar17 / fVar14;
          }
          local_120 = CONCAT44((float)((ulong)uVar13 >> 0x20) * fVar12 + fStack_16c,
                               (float)uVar13 * fVar12 + local_170);
          local_118 = fVar12 * fVar14 + local_168;
          uVar5 = FUN_00da2eb4(lVar10);
          FUN_00da32b0(auStack_c8,&local_170,&local_120,uVar5);
          FUN_00da32dc(auStack_c8,local_180,0);
          uVar13 = FUN_00d59f54(lVar9,1,4,0x19,0);
          fVar12 = (float)local_180._4_8_ - fStack_16c;
          fVar14 = SUB84(local_180._4_8_,4) - local_168;
          fVar14 = (local_180[0] - local_170) * (local_180[0] - local_170) + fVar12 * fVar12 +
                   fVar14 * fVar14;
          fVar12 = SQRT(fVar14);
          if (NAN(fVar12)) {
            fVar12 = sqrtf(fVar14);
          }
          puVar3 = PTR_s_Buff_DisplacementLock_02beb3f0;
          uVar5 = *(undefined4 *)(lVar9 + 0x260);
          uVar1 = *(undefined4 *)(lVar10 + 0x260);
          fVar12 = fVar12 / (float)uVar13;
          uVar6 = FUN_00ceb350();
          FUN_00cfe864(fVar12,0,0,&local_120,uVar5,uVar1,puVar3,uVar6,1,0,0);
          FUN_00ce20fc(&local_120);
          FUN_00cb6efc(uVar13,lVar10,local_180,1);
          FUN_00cfee84(1.0 / fVar12,0x3f000000,auStack_150,*(undefined4 *)(lVar10 + 0x260),1);
          FUN_00ce20fc(auStack_150);
        }
        uVar11 = uVar11 + 1;
        uVar7 = FUN_00d51964(param_1);
      } while (uVar11 < uVar7);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_a0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00db849c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [16];
  undefined4 local_68 [2];
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_78);
  uVar3 = FUN_00da06d4(auStack_78,PTR_s_Buff_Phinn_Talent_Phaster_02bf2048);
  lVar4 = FUN_00cfa6cc(auStack_78);
  *(undefined1 *)(lVar4 + 0x10) = 1;
  uVar5 = FUN_00cfa9e4(auStack_78);
  FUN_00cf3048(uVar5,"Ability02",0,0,0,"AttackToIdleCombat");
  plVar6 = (long *)FUN_00cfab04(auStack_78);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x58))();
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))(plVar6,"Effect_Phinn_B_Charging");
  local_68[0] = 0;
  local_60 = 1;
  plVar6 = (long *)(**(code **)(*plVar6 + 0x60))(plVar6,local_68);
  (**(code **)(*plVar6 + 0xb0))(plVar6,1);
  uVar5 = FUN_00cfab94(auStack_78);
  lVar4 = FUN_00d09310();
  uVar7 = FUN_00d099d4(*(undefined4 *)(lVar4 + 0x22c));
  FUN_00cf4164(0x3f800000,uVar7,uVar5,"Sound_Phinn_Grunt_004_01",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar5,"Sound_Phinn_Grunt_005_02");
  FUN_00cf41bc(uVar5,"Sound_Phinn_Grunt_005_03");
  uVar5 = FUN_00cfa294(auStack_78);
  FUN_00cf7570(uVar5,FUN_00db8120);
  lVar4 = FUN_00d09310();
  uVar7 = FUN_00d099d4(*(undefined4 *)(lVar4 + 0x22c));
  uVar5 = FUN_00cfab94(auStack_78);
  FUN_00cf4164(0x3f800000,uVar7,uVar5,"Sound_Phinn_Ability_B",0,0,0xffffffff,0,1);
  uVar5 = FUN_00cfa294(auStack_78);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar5,0);
  plVar6 = (long *)FUN_00cfab04(auStack_78);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x58))();
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))(plVar6,"Effect_Phinn_B");
  (**(code **)(*plVar6 + 0x78))(plVar6,0);
  FUN_00da0c40(auStack_78,FUN_00db8814);
  FUN_00cf98bc(auStack_78);
  FUN_00da0670(auStack_78,uVar3);
  FUN_00d9b0f8();
  puVar2 = PTR_s_Buff_Phinn_Talent_Phaster_AllyBu_02bf2058;
  uVar3 = FUN_00cf9ab4();
  FUN_00cf456c(uVar3,puVar2,FUN_00db8828,1,0);
  puVar2 = PTR_s_Buff_Phinn_PoliteCompany_Fortifi_02bf0598;
  uVar3 = FUN_00cf9ab4(auStack_78);
  FUN_00cf456c(uVar3,puVar2,FUN_00db8828,1,0);
  FUN_00cf9eec(auStack_78);
  FUN_00da0a68(auStack_78,FUN_00db8814);
  plVar6 = (long *)FUN_00cfb134(auStack_78);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x60))();
  plVar6 = (long *)(**(code **)(*plVar6 + 0x10))(0x3e99999a);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x18))(0x3f4ccccd);
  (**(code **)(*plVar6 + 0x20))(0x41200000);
  FUN_00cfa09c(auStack_78);
  uVar3 = FUN_00cf9cf4(auStack_78);
  FUN_00cf2e48(uVar3,FUN_00db8164);
  FUN_00cf9eec(auStack_78);
  lVar4 = FUN_00cfa6cc(auStack_78);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00da06d4(auStack_78,PTR_s_Buff_Phinn_Talent_FriendlyCavil_02bf2028);
  FUN_00d9b0f8();
  plVar6 = (long *)FUN_00cfa8c4();
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6,PTR_s_Ability__Phinn__A_02bee9d0);
  local_68[0] = 0;
  local_60 = 1;
  (**(code **)(*plVar6 + 0x20))(plVar6,local_68);
  FUN_00cfb5c4(auStack_78);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db8814(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,9,0x19,0);
  return;
}




void FUN_00db8828(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,5,0x19,0);
  return;
}




void FUN_00db883c(undefined8 param_1,undefined8 param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_00d5048c();
  fVar2 = (float)FUN_00d59f54(uVar1,2,2,0x19,0);
  *param_3 = fVar2 + -0.5 + 0.01;
  return;
}




void FUN_00db8888(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,2,0x19,0);
  return;
}




void FUN_00db889c(void)

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
  FUN_00cfa6cc(auStack_48);
  FUN_00cfb05c(auStack_48);
  FUN_00cf98bc(auStack_48);
  uVar2 = FUN_00cf9ab4(auStack_48);
  FUN_00cf456c(uVar2,PTR_s_Buff_GloballyVisible_02bebad8,FUN_00db8888,1,0);
  FUN_00cf9eec(auStack_48);
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d099d4(*(undefined4 *)(lVar3 + 0x230));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"Sound_Phinn_Ability_C_Start",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"Ability03",0,1,0,"AttackToIdleCombat");
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0,uVar2,"Effect_Phinn_C",1,0,1,0,0);
  FUN_00cfb0a4(auStack_48);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3f000000);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d099d4(*(undefined4 *)(lVar3 + 0x234));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"Sound_Phinn_Ability_C_Impact",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7570(uVar2,FUN_00db883c);
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d099d4(*(undefined4 *)(lVar3 + 0x230));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"Sound_Phinn_Ability_C_Pull",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfb17c(auStack_48);
  uVar2 = FUN_00cfcad8(uVar2,0x55,"C_Hook_Start");
  FUN_00cfcba8(uVar2,2);
  FUN_00cf98bc(auStack_48);
  uVar2 = FUN_00cf9ab4(auStack_48);
  FUN_00cf456c(uVar2,PTR_s_Buff_Phinn_WhiffedWithPull_02bf05a0,FUN_00db8b14,1,0);
  FUN_00cf9eec(auStack_48);
  FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e9eb852);
  lVar3 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00db8b14(undefined8 param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d59f54(param_1,2,4,0x19,0);
  return fVar1 + 0.2;
}




void FUN_00db8b44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_00cfb05c(auStack_58);
  uVar2 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar2,param_1,0,1,FUN_00cfb9b0,"AttackToIdleCombat");
  uVar3 = FUN_00cfab94(auStack_58);
  lVar4 = FUN_00d09310();
  uVar2 = FUN_00d09d70(*(undefined4 *)(lVar4 + 0x36c));
  FUN_00cf4164(0x3f800000,uVar2,uVar3,"Sound_Flicker_basic_Attack_1",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf3428(0x3ecccccd,uVar2,param_2,1,"Bone_Lantern",0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf32cc(0,uVar2,param_3,0,0,1,0,0);
  FUN_00cf99dc(auStack_58);
  uVar2 = FUN_00cfa00c(auStack_58);
  FUN_00cf6bb0(uVar2,param_4);
  FUN_00cf9eec(auStack_58);
  FUN_00cfb0a4(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db8cd4(void)

{
  FUN_00db8b44("Attack","Effect_Flicker_Attack","Effect_Flicker_Impact",FUN_00cfb6d0);
  return;
}




void FUN_00db8cf8(void)

{
  FUN_00db8b44("AltAttack","Effect_Flicker_Attack","Effect_Flicker_Impact",FUN_00cfb6d0);
  return;
}




void FUN_00db8d1c(void)

{
  FUN_00db8b44("CritAttack","Effect_Flicker_Attack","Effect_Flicker_Crit_Impact",FUN_00cfb8b4);
  return;
}




void FUN_00db8d40(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cfa6cc(auStack_38);
  FUN_00cfb05c(auStack_38);
  plVar2 = (long *)FUN_00cfac6c(auStack_38);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"ability1");
  (**(code **)(*plVar2 + 0x18))(0x3e800000);
  uVar3 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar3,"Ability01",0,1,0,"AttackToIdleCombat");
  uVar3 = FUN_00cfa294(auStack_38);
  FUN_00cf7580(uVar3,FUN_00db8ea4);
  FUN_00cf7578(uVar3,0);
  uVar4 = FUN_00cfab94(auStack_38);
  lVar5 = FUN_00d09310();
  uVar3 = FUN_00d09d70(*(undefined4 *)(lVar5 + 0x374));
  FUN_00cf4164(0x3f800000,uVar3,uVar4,"Sound_Flicker_Ability_A_Cast",0,0,0xffffffff,0,1);
  plVar2 = (long *)FUN_00cfb1c4(auStack_38);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"*Flicker_FairyTrap*",0);
  (**(code **)(*plVar2 + 0x20))(plVar2,FUN_00e60680);
  lVar5 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar5 + 0x10) = 0;
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db8ea4(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,6,0x19,0);
  return;
}




void FUN_00db8eb8(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  plVar2 = (long *)FUN_00cfaa2c(auStack_48);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"Ability02");
  (**(code **)(*plVar2 + 0x28))();
  plVar2 = (long *)FUN_00cfac6c(auStack_48);
  (**(code **)(*plVar2 + 0x50))(plVar2,"ability2");
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7580(uVar3,FUN_00db9020);
  FUN_00cf7578(uVar3,0);
  FUN_00cfb0a4(auStack_48);
  uVar4 = FUN_00cfab94(auStack_48);
  lVar5 = FUN_00d09310();
  uVar3 = FUN_00d09d70(*(undefined4 *)(lVar5 + 0x378));
  FUN_00cf4164(0x3f800000,uVar3,uVar4,"Sound_Flicker_Ability_B_Cast",0,0,0xffffffff,0,1);
  FUN_00cf98bc(auStack_48);
  uVar3 = FUN_00cf9ab4(auStack_48);
  FUN_00cf456c(uVar3,PTR_s_Buff_Flicker_B_Field_02bf05e8,FUN_00db9034,1,0);
  FUN_00cf9eec(auStack_48);
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7580(uVar3,FUN_00db9034);
  FUN_00cf7578(uVar3,0);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

