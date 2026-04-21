// functions/00dd4 — 18 functions
#include "libGameKindred.h"




void FUN_00dd4098(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,4,0x19,0);
  return;
}




void FUN_00dd40ac(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  float fVar14;
  float __x;
  float fVar15;
  float fVar16;
  float local_8b8 [3];
  char local_8ac [4];
  undefined8 local_8a8;
  float local_8a0;
  float local_898;
  float fStack_894;
  float local_890;
  float local_888 [2];
  float local_880;
  undefined1 auStack_878 [88];
  undefined1 auStack_820 [112];
  undefined1 auStack_7b0 [112];
  undefined1 auStack_740 [64];
  undefined4 local_700;
  long local_6e0 [200];
  long local_a0;
  
  lVar2 = tpidr_el0;
  local_a0 = *(long *)(lVar2 + 0x28);
  uVar7 = FUN_00ceab48();
  if ((uVar7 & 1) != 0) {
    lVar8 = FUN_00d5048c(param_1);
    FUN_00d55794(lVar8,local_888,0);
    FUN_00d4d9e8(auStack_740);
    FUN_00d4daf4(auStack_740,0,1,0,lVar8);
    FUN_00d50cc8(param_1);
    FUN_00d4db48(auStack_740,local_888);
    FUN_00d4dba0(0x42b40000,auStack_740);
    FUN_00d4dabc(auStack_740,0x40000);
    FUN_00d4dcdc(auStack_740,1);
    local_700 = 0x3f266666;
    uVar4 = FUN_00d9e840(auStack_740,local_6e0,200,0);
    if (0 < (int)uVar4) {
      uVar7 = (ulong)uVar4;
      plVar13 = local_6e0;
      do {
        lVar11 = *plVar13;
        FUN_00d9e1e0(lVar8,lVar11,&local_898);
        uVar6 = *(undefined4 *)(lVar8 + 0x260);
        uVar1 = *(undefined4 *)(lVar11 + 0x260);
        lVar9 = FUN_00d5029c(param_1);
        uVar12 = *(undefined8 *)(lVar9 + 8);
        FUN_00d59f54(lVar8,1,5,8,0);
        FUN_00daa148(auStack_7b0,uVar6,uVar1,1,2,&local_898,uVar12,0,1);
        FUN_00910c08(auStack_7b0);
        uVar6 = *(undefined4 *)(lVar8 + 0x260);
        uVar1 = *(undefined4 *)(lVar11 + 0x260);
        lVar9 = FUN_00d5029c(param_1);
        uVar12 = *(undefined8 *)(lVar9 + 8);
        FUN_00d59f54(lVar8,1,5,5,0);
        FUN_00daa148(auStack_820,uVar6,uVar1,0,2,&local_898,uVar12,0,1);
        FUN_00910c08(auStack_820);
        puVar3 = PTR_s_Buff_Lance_PlayBImpactPfx_02bf0b30;
        uVar6 = *(undefined4 *)(lVar8 + 0x260);
        uVar1 = *(undefined4 *)(lVar11 + 0x260);
        uVar5 = FUN_00ceb350();
        fVar15 = 0.0;
        FUN_00cfe864(0x3dcccccd,0,auStack_878,uVar6,uVar1,puVar3,uVar5,1,0,0);
        FUN_00ce20fc(auStack_878);
        if (((*(byte *)(lVar11 + 0x2f6) >> 5 & 1) != 0) &&
           (uVar10 = FUN_00d6a814(lVar11,0x10), (uVar10 & 1) == 0)) {
          FUN_00d55794(lVar11,&local_898,0);
          fVar14 = (float)FUN_00d51820(param_1);
          fVar14 = fVar14 - local_888[0];
          fVar15 = fVar15 - local_880;
          __x = fVar14 * fVar14 + 0.0 + fVar15 * fVar15;
          uVar12 = DAT_03218f68;
          fVar16 = DAT_03218f70;
          if (1e-08 <= __x) {
            fVar16 = SQRT(__x);
            if (NAN(fVar16)) {
              fVar16 = sqrtf(__x);
            }
            uVar12 = CONCAT44(0.0 / fVar16,fVar14 / fVar16);
            fVar16 = fVar15 / fVar16;
          }
          fVar15 = (float)FUN_00d59f54(lVar8,1,6,0x19,0);
          local_8a8 = CONCAT44(fStack_894 + (float)((ulong)uVar12 >> 0x20) * fVar15,
                               local_898 + (float)uVar12 * fVar15);
          local_8a0 = fVar16 * fVar15 + local_890;
          uVar6 = FUN_00da2eb4(lVar11);
          FUN_00da32b0(auStack_878,&local_898,&local_8a8,uVar6);
          local_8ac[0] = '\0';
          FUN_00da32dc(auStack_878,local_8b8,local_8ac);
          uVar12 = FUN_00da2eb4(lVar11);
          uVar10 = FUN_00ef00a0(uVar12,local_8b8,0,0);
          if ((uVar10 & 1) == 0) {
            uVar6 = FUN_00da2eb4(lVar11);
            FUN_00da32b0(auStack_7b0,local_888,&local_8a8,uVar6);
            FUN_00da32dc(auStack_7b0,local_8b8,local_8ac);
          }
          uVar12 = FUN_00d59f54(lVar8,1,7,0x19,0);
          fVar15 = fStack_894 - (float)local_8b8._4_8_;
          fVar16 = local_890 - SUB84(local_8b8._4_8_,4);
          fVar16 = (local_898 - local_8b8[0]) * (local_898 - local_8b8[0]) + fVar15 * fVar15 +
                   fVar16 * fVar16;
          fVar15 = SQRT(fVar16);
          if (NAN(fVar15)) {
            fVar15 = sqrtf(fVar16);
          }
          puVar3 = PTR_s_Buff_DisplacementLock_02beb3f0;
          uVar6 = *(undefined4 *)(lVar8 + 0x260);
          uVar1 = *(undefined4 *)(lVar11 + 0x260);
          fVar15 = fVar15 / (float)uVar12;
          uVar5 = FUN_00ceb350();
          FUN_00cfe864(fVar15,0,0,auStack_7b0,uVar6,uVar1,puVar3,uVar5,1,0,0);
          FUN_00ce20fc(auStack_7b0);
          puVar3 = PTR_s_Buff_Lance_B_StunPending_02bf0b38;
          if (local_8ac[0] != '\0') {
            uVar6 = *(undefined4 *)(lVar8 + 0x260);
            uVar1 = *(undefined4 *)(lVar11 + 0x260);
            uVar5 = FUN_00ceb350();
            FUN_00cfe864(fVar15,0,0,auStack_820,uVar6,uVar1,puVar3,uVar5,1,0,0);
            FUN_00ce20fc(auStack_820);
          }
          FUN_00cb6efc(uVar12,lVar11,local_8b8,1);
        }
        uVar7 = uVar7 - 1;
        plVar13 = plVar13 + 1;
      } while (uVar7 != 0);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_a0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00dd458c(void)

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
  plVar2 = (long *)FUN_00cf9dcc(auStack_38);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Lance_CircleStrafing_02bf0b20);
  FUN_00cf98bc(auStack_38);
  uVar3 = FUN_00cf9d84(auStack_38);
  FUN_00cf49b0(uVar3,PTR_s_Buff_Lance_PauseStaminaRegen_02bf0ab0);
  FUN_00cf9eec(auStack_38);
  FUN_00cfa6cc(auStack_38);
  uVar3 = FUN_00cfb05c(auStack_38);
  FUN_00cf7b3c(uVar3,2);
  uVar3 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar3,"Ability02",0,1,0,"AttackToIdleCombat");
  uVar3 = FUN_00cfaa74(auStack_38);
  FUN_00cf32cc(0,uVar3,"Effect_Lance_B_Impact",0,0,1,0,0);
  uVar4 = FUN_00cfab94(auStack_38);
  lVar5 = FUN_00d09310();
  uVar3 = FUN_00d09bcc(*(undefined4 *)(lVar5 + 0x2e0));
  FUN_00cf4164(0x3f800000,uVar3,uVar4,"Sound_Lance_Ability_B_Sweep",0,0,0xffffffff,0,1);
  plVar2 = (long *)FUN_00cfac6c(auStack_38);
  (**(code **)(*plVar2 + 0x50))(plVar2,"gythian wall");
  uVar3 = FUN_00cfa294(auStack_38);
  FUN_00cf7580(uVar3,FUN_00dd47a0);
  FUN_00cf7578(uVar3,0);
  FUN_00cf98bc(auStack_38);
  uVar3 = FUN_00cf9ab4(auStack_38);
  FUN_00cf456c(uVar3,PTR_s_Buff_Lance_Guard_02bf0ad0,FUN_00dd47b4,1,0);
  FUN_00cf9eec(auStack_38);
  uVar3 = FUN_00cf9cf4(auStack_38);
  FUN_00cf2e48(uVar3,FUN_00dd40ac);
  FUN_00cf9ea4(auStack_38);
  FUN_00cfb0a4(auStack_38);
  uVar3 = FUN_00cfa294(auStack_38);
  FUN_00cf7580(uVar3,FUN_00dd47c8);
  FUN_00cf7578(uVar3,0);
  lVar5 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar5 + 0x10) = 0;
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd47a0(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,2,0x19,0);
  return;
}




void FUN_00dd47b4(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,4,0x19,0);
  return;
}




void FUN_00dd47c8(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,3,0x19,0);
  return;
}




void FUN_00dd47dc(undefined8 param_1,undefined8 param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_00d5048c();
  fVar2 = (float)thunk_FUN_00d086f0(uVar1,4,1);
  *param_3 = fVar2;
  fVar2 = (float)FUN_00d59f54(uVar1,2,2,0x19,0);
  *param_3 = fVar2 + *param_3;
  return;
}




void FUN_00dd4834(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,2,0x19,0);
  return;
}




void FUN_00dd4848(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  float fVar7;
  float fVar8;
  undefined8 local_78;
  float local_70;
  float local_68;
  undefined4 uStack_64;
  float local_60;
  float local_58 [2];
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d5048c();
  lVar3 = *(long *)(lVar2 + 0x18);
  while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  uVar4 = FUN_00d6bbac(lVar3,DAT_031ba3b8,0);
  FUN_00d55794(lVar2,local_58,0);
  FUN_00d557c4(lVar2,&local_68,&DAT_03218f68);
  local_78._0_4_ = (float)FUN_00d51820(param_4);
  local_78._0_4_ = (float)local_78 - local_58[0];
  local_70 = param_3 - local_50;
  local_78._4_4_ = 0.0;
  fVar8 = (float)local_78 * (float)local_78 + 0.0 + local_70 * local_70;
  if (1e-08 <= fVar8) {
    fVar7 = SQRT(fVar8);
    if (NAN(fVar7)) {
      fVar7 = sqrtf(fVar8);
    }
    local_78 = CONCAT44(local_78._4_4_ / fVar7,(float)local_78 / fVar7);
    local_70 = local_70 / fVar7;
  }
  else {
    local_78 = CONCAT44(uStack_64,local_68);
    local_70 = local_60;
  }
  if ((uVar4 & 1) == 0) {
    lVar3 = *(long *)(lVar2 + 0x18);
    while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_0314f724))) {
      lVar3 = *(long *)(lVar3 + 0x20);
    }
    FUN_00d60b0c(lVar3,&local_78,1);
  }
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) goto LAB_00dd4a90;
  if ((uVar4 & 1) == 0) {
LAB_00dd4a6c:
    pcVar6 = "Ability03_RollForward";
  }
  else {
    fVar8 = atan2f(local_60,local_68);
    fVar7 = atan2f(local_70,(float)local_78);
    fVar7 = fmodf(fVar7 - fVar8,6.2831855);
    fVar8 = fVar7 - 6.2831855;
    if (fVar7 <= 3.1415927) {
      fVar8 = fVar7;
    }
    fVar7 = fVar8 + 6.2831855;
    if (-3.1415927 <= fVar8) {
      fVar7 = fVar8;
    }
    if (ABS(fVar7) <= 2.3561945) {
      if (fVar7 <= 0.7853982) {
        if (-0.7853982 <= fVar7) goto LAB_00dd4a6c;
        pcVar6 = "Ability03_RollLeft";
      }
      else {
        pcVar6 = "Ability03_RollRight";
      }
    }
    else {
      pcVar6 = "Ability03_RollBackward";
    }
  }
  FUN_00d5a450(0x3f800000,lVar2,pcVar6,0,0,"AttackToIdleCombat");
LAB_00dd4a90:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00dd4abc(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  FUN_00cf98bc(auStack_58);
  FUN_00cf9ea4(auStack_58);
  uVar3 = FUN_00cf9f34(auStack_58);
  uVar4 = FUN_00d9ab88();
  FUN_00d9b128(uVar4,PTR_s_Buff_Lance_Talent_Striker_02bedff0);
  FUN_00d9b100(uVar3);
  uVar3 = FUN_00cf9ab4();
  FUN_00cf4540(uVar3,PTR_s_Buff_Lance_PauseStaminaRegen_02bf0ab0,FUN_00dd47dc,1,0);
  uVar3 = FUN_00cf9f34(auStack_58);
  uVar4 = FUN_00d9ab88();
  FUN_00d9b128(uVar4,PTR_s_Buff_Lance_Talent_Rollout_02bee018);
  FUN_00d9b0f8(uVar3);
  uVar3 = FUN_00cf9ab4();
  FUN_00cf456c(uVar3,PTR_s_Buff_Lance_Rollout_Projectile_02bee028,FUN_00dd4834,1,0);
  FUN_00cf9eec(auStack_58);
  uVar3 = FUN_00cf9cf4(auStack_58);
  FUN_00cf2e48(uVar3,FUN_00dd4848);
  uVar3 = FUN_00cfaa74(auStack_58);
  FUN_00cf32cc(0,uVar3,"Effect_Lance_Roll",1,0,1,0,0);
  uVar4 = FUN_00cfab94(auStack_58);
  lVar2 = FUN_00d09310();
  uVar3 = FUN_00d09bcc(*(undefined4 *)(lVar2 + 0x2e4));
  FUN_00cf4164(0x3f800000,uVar3,uVar4,"Sound_Lance_Ability_C",0,0,0xffffffff,0,1);
  plVar5 = (long *)FUN_00cfac6c(auStack_58);
  (**(code **)(*plVar5 + 0x50))(plVar5,"roll");
  plVar5 = (long *)FUN_00cfa12c(auStack_58);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x88))();
  local_48 = FUN_00dd4834;
  local_40 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0xa8))(plVar5,&local_48);
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7580(uVar3,FUN_00dd4834);
  FUN_00cf7578(uVar3,0);
  FUN_00cfb56c(auStack_58);
  lVar2 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_58);
  FUN_00cf98bc(auStack_58);
  uVar3 = FUN_00cf9ab4(auStack_58);
  FUN_00cf456c(uVar3,PTR_s_Buff_Lance_EmpoweredAutoattackAv_02bf0ab8,FUN_00dd4d2c,1,0);
  FUN_00cf9eec(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd4d2c(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,4,0x19,0);
  return;
}




void FUN_00dd4d40(void)

{
  FUN_00cfc038(PTR_s_Buff_Lance_Withdraw_02bf0b48);
  return;
}




void FUN_00dd4d50(undefined8 param_1,float *param_2)

{
  uint uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar2 = FUN_00d51778();
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x2f4);
    if ((uVar1 >> 4 & 1) == 0) {
      lVar2 = FUN_00d5048c(param_1);
      lVar2 = *(long *)(lVar2 + 0x40);
      if ((uVar1 >> 0xc & 1) == 0) {
        fVar5 = *(float *)(lVar2 + 0x1b0);
        fVar3 = *(float *)(lVar2 + 0x48) +
                *(float *)(lVar2 + 0xfc) * (*(float *)(lVar2 + 0x264) + 1.0);
        fVar6 = DAT_031b17f0;
        fVar4 = DAT_031b1730;
      }
      else {
        fVar5 = *(float *)(lVar2 + 0x1b4);
        fVar3 = *(float *)(lVar2 + 0x4c) +
                *(float *)(lVar2 + 0x100) * (*(float *)(lVar2 + 0x268) + 1.0);
        fVar6 = DAT_031b17f4;
        fVar4 = DAT_031b1734;
      }
      fVar3 = (fVar5 + 1.0) * fVar3;
      if (fVar6 <= fVar3) {
        fVar3 = fVar6;
      }
      if (fVar4 <= fVar3) {
        fVar4 = fVar3;
      }
    }
    else {
      lVar2 = FUN_00d5048c(param_1);
      lVar2 = *(long *)(lVar2 + 0x40);
      fVar3 = (*(float *)(lVar2 + 0x210) + 1.0) *
              (*(float *)(lVar2 + 0xa8) +
              *(float *)(lVar2 + 0x15c) * (*(float *)(lVar2 + 0x2c4) + 1.0));
      if (DAT_031b1850 <= fVar3) {
        fVar3 = DAT_031b1850;
      }
      fVar4 = DAT_031b1790;
      if (DAT_031b1790 <= fVar3) {
        fVar4 = fVar3;
      }
    }
    *param_2 = fVar4;
  }
  return;
}




void FUN_00dd4e8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  FUN_00dd4d50(param_1,param_3);
  *param_5 = 4;
  *param_4 = 0;
  return;
}




void FUN_00dd4ec0(undefined8 param_1,float *param_2)

{
  FUN_00dd4d50();
  *param_2 = *param_2 * 1.5;
  return;
}




void FUN_00dd4ef0(undefined8 param_1,float *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_00d5048c();
  lVar1 = *(long *)(lVar1 + 0x40);
  fVar2 = (*(float *)(lVar1 + 0x1b0) + 1.0) *
          (*(float *)(lVar1 + 0x48) + *(float *)(lVar1 + 0xfc) * (*(float *)(lVar1 + 0x264) + 1.0));
  if (DAT_031b17f0 <= fVar2) {
    fVar2 = DAT_031b17f0;
  }
  fVar3 = DAT_031b1730;
  if (DAT_031b1730 <= fVar2) {
    fVar3 = fVar2;
  }
  *param_2 = fVar3;
  return;
}




void FUN_00dd4f68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  FUN_00dd4ef0(param_1,param_3);
  *param_5 = 4;
  *param_4 = 0;
  return;
}




void FUN_00dd4f9c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfb05c(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"Attack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3f19999a);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfb17c(auStack_48);
  uVar2 = FUN_00cfcad8(uVar2,0x4f,"GunMuzzle");
  FUN_00cfcbbc(uVar2,FUN_00dd4d50);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

