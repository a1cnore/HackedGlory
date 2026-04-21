// functions/00de2 — 25 functions
#include "libGameKindred.h"




void FUN_00de2044(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar2,"Spawn",0,1,0,0);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de20b8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [16];
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  lVar2 = FUN_00cf9f7c(auStack_58);
  lVar3 = FUN_00cf2970(lVar2 + 0x10);
  lVar2 = lVar2 + 0xb0;
  *(code **)(lVar3 + 8) = FUN_00cfc020;
  plVar4 = (long *)FUN_00cf9afc(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Emote_Taunt_02beb470);
  local_48[0] = 0x40000000;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_48);
  uVar5 = FUN_00cfa294(lVar2);
  FUN_00cf7478(0x3f000000);
  FUN_00cf7578(uVar5,0);
  uVar5 = FUN_00cfaa74(lVar2);
  FUN_00cf32cc(0,uVar5,"Effect_Hero010_TauntFire",0,0,1,1,0);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de21c0(undefined8 param_1,undefined8 param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = FUN_00d5048c();
  fVar2 = (float)thunk_FUN_00d086f0(uVar1,6,1);
  uVar1 = FUN_00d5048c(param_1);
  fVar3 = (float)thunk_FUN_00d086f0(uVar1,2,1);
  *param_3 = fVar2 + fVar3;
  return;
}




void FUN_00de2218(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  FUN_00cfb05c(auStack_58);
  uVar2 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar2,param_1,0,1,FUN_00cfb9b0,"AttackToIdleCombat");
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e947ae1);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf3358(0x3f800000,uVar2,"Effect_Skye_AA_MF",0,param_2,0,1,0,0);
  uVar2 = FUN_00cfab94(auStack_58);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d09980(*(undefined4 *)(lVar3 + 0x208));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"Sound_Skye_Basic_Attack_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Skye_Basic_Attack_2");
  FUN_00cf41bc(uVar2,"Sound_Skye_Basic_Attack_3");
  FUN_00cf41bc(uVar2,"Sound_Skye_Basic_Attack_4");
  uVar2 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar2,param_3,param_2);
  FUN_00cf98bc(auStack_58);
  uVar2 = FUN_00cf9ab4(auStack_58);
  FUN_00cf4540(uVar2,PTR_s_Buff_Skye_JumpJets_Pending_02bf0fe8,FUN_00de21c0,1,0);
  FUN_00cf9eec(auStack_58);
  FUN_00cfb0a4(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de23e0(void)

{
  FUN_00de2218("Attack","LeftGun",0x6c);
  return;
}




void FUN_00de23f8(void)

{
  FUN_00de2218("AltAttack","RightGun",0x6c);
  return;
}




void FUN_00de2410(void)

{
  FUN_00de2218("Attack","LeftGun",0x6d);
  return;
}




void FUN_00de2428(void)

{
  FUN_00de2218("AttackRight","LeftGun",0x6c);
  return;
}




void FUN_00de2440(void)

{
  FUN_00de2218("AttackLeft","RightGun",0x6c);
  return;
}




void FUN_00de2458(void)

{
  FUN_00de2218("AttackRight","LeftGun",0x6d);
  return;
}




void FUN_00de2470(void)

{
  FUN_00de2218("AttackLeft","RightGun",0x6d);
  return;
}




void FUN_00de2488(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_00d5048c();
  uVar1 = FUN_00da01e4();
  FUN_00d518f4(param_1,uVar1);
  return;
}




void FUN_00de24b4(undefined8 param_1,undefined8 param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = FUN_00d5048c();
  fVar2 = (float)FUN_00d59f54(uVar1,0,6,0x19,0);
  fVar3 = (float)FUN_00d59f54(uVar1,0,7,0x19,0);
  if (fVar3 <= fVar2) {
    fVar2 = fVar3;
  }
  *param_3 = fVar2;
  return;
}




long FUN_00de251c(void)

{
  long lVar1;
  
  FUN_00d50ef8();
  lVar1 = FUN_00da01e4();
  return (ulong)(lVar1 == 0) << 10;
}




void FUN_00de2540(void)

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
  uVar2 = FUN_00cf4540(uVar2,PTR_s_Buff_Skye_Barrage_02bf0fe0,FUN_00de24b4,1,0);
  FUN_00cf45a0(uVar2,FUN_00cfbdbc,1);
  FUN_00cf9eec(auStack_38);
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de25e0(void)

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
  FUN_00cf49b0(uVar2,PTR_s_Buff_Skye_Barrage_02bf0fe0);
  FUN_00cf9eec(auStack_38);
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de2660(undefined8 param_1)

{
  long lVar1;
  
  FUN_00d5048c();
  lVar1 = FUN_00da01e4();
  if (lVar1 != 0) {
    FUN_00d518f4(param_1,lVar1);
    return;
  }
  return;
}




void FUN_00de269c(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float __x;
  undefined1 auStack_f8 [16];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_d8 [8];
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 auStack_90 [32];
  undefined1 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00d50ef8();
  lVar4 = FUN_00da01e4();
  if (lVar4 == 0) {
    FUN_00d55794(uVar3,param_6,0);
  }
  else {
    fVar7 = (float)FUN_00d51820(param_4);
    local_c8 = CONCAT44(param_2,fVar7);
    local_c0 = param_3;
    FUN_00d55794(lVar4,local_d8,0);
    fVar7 = fVar7 - local_d8._0_4_;
    param_2 = param_2 - local_d8._4_4_;
    param_3 = param_3 - local_d0;
    __x = fVar7 * fVar7 + param_2 * param_2 + param_3 * param_3;
    fVar8 = (float)FUN_00d50cc8(param_4);
    fVar9 = (float)FUN_00d50cc8(param_4);
    if (fVar8 * fVar9 < __x) {
      uVar5 = DAT_03218f68;
      fVar8 = DAT_03218f70;
      if (1e-08 <= __x) {
        fVar8 = SQRT(__x);
        if (NAN(fVar8)) {
          fVar8 = sqrtf(__x);
        }
        uVar5 = CONCAT44(param_2 / fVar8,fVar7 / fVar8);
        fVar8 = param_3 / fVar8;
      }
      fVar7 = (float)FUN_00d50cc8(param_4);
      fVar7 = fVar7 + *(float *)(*(long *)(lVar4 + 0x38) + 0x68);
      local_c0 = fVar8 * fVar7 + local_d0;
      local_c8 = CONCAT44(local_d8._4_4_ + (float)((ulong)uVar5 >> 0x20) * fVar7,
                          local_d8._0_4_ + (float)uVar5 * fVar7);
    }
    uVar2 = FUN_00da2eb4(uVar3);
    FUN_00da32b0(auStack_90,local_d8,&local_c8,uVar2);
    local_70 = 1;
    FUN_00da32dc(auStack_90,param_6,0);
    local_e0 = 0x3e800000;
    local_e8 = 0x412000003e800000;
    uVar5 = FUN_00da2eb4(uVar3);
    uVar6 = FUN_00ef00a0(uVar5,param_6,param_6,&local_e8);
    if ((uVar6 & 1) == 0) {
      FUN_00d55794(uVar3,auStack_f8,0);
      uVar2 = FUN_00da2eb4(uVar3);
      FUN_00da32b0(auStack_b8,auStack_f8,&local_c8,uVar2);
      local_98 = 1;
      FUN_00da32dc(auStack_90,param_6,0);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00de28bc(undefined8 param_1,undefined8 param_2,float *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  float fVar3;
  float fVar4;
  float __x;
  float local_68;
  float fStack_64;
  float local_60;
  float local_58;
  float fStack_54;
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d5048c();
  fVar3 = (float)FUN_00d59f54(uVar2,2,2,0x19,0);
  FUN_00de269c(param_1,extraout_x1,&local_58);
  FUN_00d55794(uVar2,&local_68,0);
  __x = (local_68 - local_58) * (local_68 - local_58) +
        (fStack_64 - fStack_54) * (fStack_64 - fStack_54) +
        (local_60 - local_50) * (local_60 - local_50);
  fVar4 = SQRT(__x);
  if (NAN(fVar4)) {
    fVar4 = sqrtf(__x);
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.1;
  }
  else {
    fVar3 = fVar4 / fVar3 + 0.1;
  }
  *param_3 = fVar3;
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00de29b8(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,2,0x19,0);
  return;
}




void FUN_00de29cc(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float __x;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  ulong local_110;
  float local_108;
  float local_100 [2];
  float local_f8;
  float local_f0 [2];
  float local_e8;
  float local_e0 [2];
  float local_d8;
  undefined1 auStack_d0 [88];
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  lVar5 = FUN_00d5048c();
  auVar15 = FUN_00da01e4();
  if (auVar15._0_8_ != 0) {
    FUN_00de269c(param_1,auVar15._8_8_,local_e0);
    FUN_00d55794(lVar5,local_f0,0);
    FUN_00d55794(auVar15._0_8_,local_100,0);
    fVar12 = local_100[0] - local_f0[0];
    fVar11 = local_f8 - local_e8;
    __x = fVar12 * fVar12 + 0.0 + fVar11 * fVar11;
    fVar9 = (float)DAT_03218f68;
    fVar10 = DAT_03218f70;
    if (1e-08 <= __x) {
      fVar10 = SQRT(__x);
      if (NAN(fVar10)) {
        fVar10 = sqrtf(__x);
      }
      fVar9 = fVar12 / fVar10;
      fVar10 = fVar11 / fVar10;
    }
    fVar11 = atan2f(fVar10,fVar9);
    fVar14 = local_e0[0] - local_f0[0];
    fVar13 = local_d8 - local_e8;
    fVar12 = fVar14 * fVar14 + 0.0 + fVar13 * fVar13;
    fVar9 = (float)DAT_03218f68;
    fVar10 = DAT_03218f70;
    if (1e-08 <= fVar12) {
      fVar10 = SQRT(fVar12);
      if (NAN(fVar10)) {
        fVar10 = sqrtf(fVar12);
      }
      fVar9 = fVar14 / fVar10;
      fVar10 = fVar13 / fVar10;
    }
    fVar9 = atan2f(fVar10,fVar9);
    fVar10 = fmodf(fVar9 - fVar11,6.2831855);
    fVar11 = 0.1;
    fVar9 = fVar10 - 6.2831855;
    if (fVar10 <= 3.1415927) {
      fVar9 = fVar10;
    }
    local_f0[0] = local_e0[0] - local_f0[0];
    local_108 = local_d8 - local_e8;
    fVar10 = fVar9 + 6.2831855;
    if (-3.1415927 <= fVar9) {
      fVar10 = fVar9;
    }
    if (fVar10 <= 0.31415927) {
      if (-0.31415927 <= fVar10) {
        uVar8 = 0;
        if (__x < fVar12) {
          uVar8 = 1;
          local_f0[0] = local_100[0] - local_e0[0];
          local_108 = local_f8 - local_d8;
        }
      }
      else {
        uVar8 = 2;
      }
    }
    else {
      uVar8 = 3;
    }
    fVar9 = local_f0[0] * local_f0[0] + 0.0 + local_108 * local_108;
    local_110 = (ulong)(uint)local_f0[0];
    if (1e-08 <= fVar9) {
      fVar10 = SQRT(fVar9);
      if (NAN(fVar10)) {
        fVar10 = sqrtf(fVar9);
      }
      local_110 = CONCAT44((float)(local_110 >> 0x20) / fVar10,(float)local_110 / fVar10);
      local_108 = local_108 / fVar10;
    }
    else {
      local_108 = DAT_03218f70;
      local_110 = CONCAT44(DAT_03218f68._4_4_,(float)DAT_03218f68);
    }
    lVar6 = *(long *)(lVar5 + 0x18);
    while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_0314f724))) {
      lVar6 = *(long *)(lVar6 + 0x20);
    }
    FUN_00d60b0c(lVar6,&local_110,1);
    uVar7 = FUN_00ceab48();
    if ((uVar7 & 1) != 0) {
      fVar9 = (float)FUN_00d59f54(lVar5,2,2,0x19,0);
      if (0.0 < fVar9) {
        fVar10 = SQRT(fVar12);
        if (NAN(fVar10)) {
          fVar10 = sqrtf(fVar12);
        }
        fVar11 = fVar10 / fVar9 + 1.0;
      }
      puVar3 = PTR_s_Buff_Skye_Executing_B_Dash_02bf1000;
      uVar1 = *(undefined4 *)(lVar5 + 0x260);
      uVar4 = FUN_00ceb350();
      FUN_00cfe864(fVar11,0,0,auStack_d0,uVar1,uVar1,puVar3,uVar4,1,uVar8,0);
      FUN_00ce20fc(auStack_d0);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00de2d50(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,undefined8 param_4,
                 undefined8 param_5,float *param_6)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float local_48 [2];
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d5048c();
  lVar2 = FUN_00da01e4();
  if (lVar2 == 0) {
    *param_6 = 0.0;
  }
  else {
    FUN_00d55794(lVar2,local_48,0);
    fVar3 = (float)FUN_00d51820(param_4);
    fVar3 = atan2f(param_3 - local_40,fVar3 - local_48[0]);
    *param_6 = fVar3;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de2de0(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                 undefined8 param_5,float *param_6)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float __x;
  float local_48;
  float fStack_44;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d5048c();
  lVar2 = FUN_00da01e4();
  if (lVar2 == 0) {
    *param_6 = 0.0;
  }
  else {
    FUN_00d55794(lVar2,&local_48,0);
    fVar3 = (float)FUN_00d51820(param_4);
    __x = (local_48 - fVar3) * (local_48 - fVar3) + (fStack_44 - param_2) * (fStack_44 - param_2) +
          (local_40 - param_3) * (local_40 - param_3);
    fVar3 = SQRT(__x);
    if (NAN(fVar3)) {
      fVar3 = sqrtf(__x);
    }
    *param_6 = fVar3;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00de2e98(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar2 = FUN_00d50ef8();
  lVar2 = *(long *)(lVar2 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  iVar1 = FUN_00d535a4(lVar2,0);
  if (iVar1 == 0) {
    fVar5 = 0.0;
  }
  else {
    fVar4 = (float)FUN_00d539d0(lVar2,0);
    fVar5 = (float)FUN_00d539e8(lVar2,0);
    uVar3 = FUN_00d50ef8(param_1);
    fVar6 = (float)FUN_00d59f54(uVar3,2,8,0x19,0);
    fVar5 = fVar5 - fVar4 * fVar6;
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
  }
  return fVar5;
}




void FUN_00de2f4c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_58 [16];
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  uVar2 = FUN_00cfad44(auStack_58);
  FUN_00cf2ec0(uVar2,FUN_00de251c);
  uVar2 = FUN_00cf9cf4(auStack_58);
  FUN_00cf2e48(uVar2,FUN_00de2660);
  uVar2 = FUN_00cf9ab4(auStack_58);
  FUN_00cf456c(uVar2,PTR_s_Buff_Skye_LockedOn_Target_02bf0fc0,FUN_00de329c,1,0);
  FUN_00cf9eec(auStack_58);
  FUN_00cf98bc(auStack_58);
  uVar2 = FUN_00cf9d84(auStack_58);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Skye_CircleStrafing_02bf0fd0);
  uVar2 = FUN_00cf9d84(auStack_58);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Skye_Barrage_02bf0fe0);
  uVar2 = FUN_00cf9ab4(auStack_58);
  uVar2 = FUN_00cf44e8(0x3f1c28f6,uVar2,PTR_s_Buff_Skye_Firing_B_Missiles_02bf1008,1,0);
  uVar2 = FUN_00cf45a0(uVar2,FUN_00de2d50,1);
  FUN_00cf45a0(uVar2,FUN_00de2de0,2);
  uVar3 = FUN_00cfab94(auStack_58);
  lVar4 = FUN_00d09310();
  uVar2 = FUN_00d09980(*(undefined4 *)(lVar4 + 0x210));
  FUN_00cf4164(0x3f800000,uVar2,uVar3,"Sound_Skye_Ability_B_Jet_Dash_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar3,"Sound_Skye_Ability_B_Jet_Dash_2");
  FUN_00cf41bc(uVar3,"Sound_Skye_Ability_B_Jet_Dash_3");
  uVar2 = FUN_00cf9cf4(auStack_58);
  FUN_00cf2e48(uVar2,FUN_00de29cc);
  FUN_00cf9eec(auStack_58);
  FUN_00cfa6cc(auStack_58);
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf32cc(0,uVar2,"Effect_Skye_B_Launch",0,0,1,0,0);
  plVar5 = (long *)FUN_00cfa12c(auStack_58);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,FUN_00de269c);
  local_48 = FUN_00de29b8;
  local_40 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0xa0))(plVar5,&local_48);
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7570(uVar2,FUN_00de28bc);
  FUN_00cfb56c(auStack_58);
  FUN_00cf98bc(auStack_58);
  uVar2 = FUN_00cf9d84(auStack_58);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Skye_Executing_B_Dash_02bf1000);
  FUN_00cf9eec(auStack_58);
  FUN_00cf9ea4(auStack_58);
  FUN_00cf98bc(auStack_58);
  uVar2 = FUN_00cf9ab4(auStack_58);
  FUN_00cf456c(uVar2,PTR_s_Buff_Skye_CircleStrafing_02bf0fd0,FUN_00de3304,1,0);
  plVar5 = (long *)FUN_00cfa8c4(auStack_58);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s_Ability__Skye__A_02bef588);
  local_48 = FUN_00de2e98;
  local_40 = 4;
  (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
  lVar4 = FUN_00cf9f7c(auStack_58);
  lVar6 = FUN_00cefb20(lVar4 + 0x10);
  *(undefined **)(lVar6 + 8) = PTR_s_Buff_Skye_Talent_EnhancedThruste_02bee1c0;
  uVar2 = FUN_00cf9ab4(lVar4 + 0xb0);
  FUN_00cf456c(uVar2,PTR_s_Buff_Skye_EnhancedThrustersSpeed_02bee1d8,FUN_00de3310,1,0);
  FUN_00cf9eec(auStack_58);
  lVar4 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cfb0a4(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

