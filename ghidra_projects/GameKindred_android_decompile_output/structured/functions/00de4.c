// functions/00de4 — 16 functions
#include "libGameKindred.h"




void FUN_00de4270(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,4,1);
  return;
}




void FUN_00de427c(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,6,1);
  return;
}




void FUN_00de4288(undefined8 param_1,undefined8 param_2,float *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = FUN_00d5048c();
  lVar2 = *(long *)(lVar1 + 0x40);
  fVar3 = (*(float *)(lVar2 + 0x1b0) + 1.0) *
          (*(float *)(lVar2 + 0x48) + *(float *)(lVar2 + 0xfc) * (*(float *)(lVar2 + 0x264) + 1.0));
  if (DAT_031b1cf0 <= fVar3) {
    fVar3 = DAT_031b1cf0;
  }
  fVar4 = (float)DAT_031b1c30;
  if ((float)DAT_031b1c30 <= fVar3) {
    fVar4 = fVar3;
  }
  *param_3 = fVar4;
  FUN_00cfb800(lVar1,param_3,param_6,1);
  fVar3 = (float)thunk_FUN_00d086f0(lVar1,2,0xb);
  *param_3 = fVar3 + *param_3;
  *param_4 = 0;
  *param_5 = 0;
  return;
}




void FUN_00de4354(void)

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
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0,uVar2,"Effect_Taka_MortalStrike",0,0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
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
  FUN_00cf6bb0(uVar2,FUN_00de4288);
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




void FUN_00de45d8(undefined8 param_1,undefined8 param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_00d5048c();
  fVar2 = (float)FUN_00d59f54(uVar1,0,3,0x19,0);
  *param_3 = fVar2 * 0.6;
  return;
}




void FUN_00de461c(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,3,0x19,0);
  return;
}




void FUN_00de4630(undefined8 param_1,undefined8 param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_00d5048c();
  fVar2 = (float)FUN_00d59f54(uVar1,0,3,0x19,0);
  *param_3 = fVar2 * 0.4;
  return;
}




void FUN_00de4674(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [16];
  code *local_58;
  undefined4 local_50;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_68);
  uVar2 = FUN_00cfb05c(auStack_68);
  uVar2 = FUN_00cf7b2c(uVar2,2);
  FUN_00cf7b3c(uVar2,1);
  lVar3 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  uVar2 = FUN_00cfaa74(auStack_68);
  FUN_00cf32cc(0,uVar2,"Effect_Taka_SpinFlippy",1,0,1,0,0);
  uVar2 = FUN_00cfa9e4(auStack_68);
  FUN_00cf3048(uVar2,"Ability01_Dash",0,1,0,"AttackToIdle");
  uVar2 = FUN_00cfab94(auStack_68);
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d09734(*(undefined4 *)(lVar3 + 0x140));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Taka_Ability_A",0,0,0xffffffff,0,1);
  FUN_00cf98bc(auStack_68);
  uVar2 = FUN_00cf9ab4(auStack_68);
  FUN_00cf456c(uVar2,PTR_s_Buff_Dodge_02beb3d8,FUN_00de461c,1,0);
  uVar2 = FUN_00cf9ab4(auStack_68);
  FUN_00cf456c(uVar2,PTR_s_Buff_Taka_AssassinsAcceleration_02bf10a0,FUN_00de4270,1,0);
  FUN_00cf9eec(auStack_68);
  plVar4 = (long *)FUN_00cfa12c(auStack_68);
  local_48[0] = 0x40000000;
  local_40 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x98))(plVar4,local_48,0);
  local_58 = FUN_00de461c;
  local_50 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xa8))(plVar4,&local_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,1);
  (**(code **)(*plVar4 + 0xb8))(0x41700000);
  uVar2 = FUN_00cfa294(auStack_68);
  FUN_00cf7570(uVar2,FUN_00de45d8);
  FUN_00cf99dc(auStack_68);
  FUN_00cfa09c(auStack_68);
  FUN_00cf9eec(auStack_68);
  uVar2 = FUN_00cfa294(auStack_68);
  FUN_00cf7570(uVar2,FUN_00de4630);
  uVar2 = FUN_00cfab94(auStack_68);
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d09734(*(undefined4 *)(lVar3 + 0x140));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Taka_Ability_A_Impact",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar2,0);
  FUN_00cfb56c(auStack_68);
  lVar3 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  FUN_00cfb0a4(auStack_68);
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de4924(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d5048c();
  uVar2 = FUN_00d59f54(uVar1,1,2,0x19,0);
  *param_3 = uVar2;
  return;
}




void FUN_00de495c(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,2,0x19,0);
  return;
}




void FUN_00de4970(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  plVar2 = (long *)FUN_00cf9afc(auStack_48);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))
                             (plVar2,PTR_s_Buff_Taka_AssassinsAcceleration_02bf10a0);
  local_38 = FUN_00de4270;
  local_30 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_38);
  plVar2 = (long *)FUN_00cf9afc(auStack_48);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))
                             (plVar2,PTR_s_Buff_Taka_SmokeBombInvisibility_02bf10c0);
  local_38 = FUN_00de495c;
  local_30 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_38);
  FUN_00cf9ea4(auStack_48);
  FUN_00cfb0a4(auStack_48);
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7570(uVar3,FUN_00de4924);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de4a68(undefined1 param_1 [16],undefined4 param_2,float param_3,undefined8 param_4,
                 long param_5,undefined8 *param_6)

{
  long lVar1;
  float fVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  float local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00d55794(param_5,&local_88,0);
  uVar6 = FUN_00d51830(param_4);
  local_78 = CONCAT44(param_2,uVar6);
  local_70 = param_3;
  lVar3 = FUN_00d51778(param_4);
  if (lVar3 == 0) {
    fVar14 = 1.0;
  }
  else {
    lVar3 = FUN_00d51778(param_4);
    fVar14 = 1.0;
    if ((*(byte *)(lVar3 + 0x2f4) & 1) != 0) {
      fVar14 = -0.2;
    }
  }
  lVar3 = FUN_00d51778(param_4);
  if (lVar3 == 0) {
    fVar12 = 0.0;
  }
  else {
    lVar3 = FUN_00d51778(param_4);
    fVar12 = 0.0;
    if ((*(byte *)(lVar3 + 0x2f5) & 0x10) != 0) {
      fVar12 = 0.5;
    }
  }
  fVar2 = local_70;
  fVar15 = (float)local_78;
  fVar10 = (float)local_88 - fVar15;
  fVar16 = (float)((ulong)local_78 >> 0x20);
  fVar13 = (float)((ulong)local_88 >> 0x20) - fVar16;
  fVar7 = local_80 - local_70;
  fVar9 = fVar10 * fVar10 + fVar13 * fVar13 + fVar7 * fVar7;
  if (0.01 < fVar9) {
    fVar8 = SQRT(fVar9);
    if (NAN(fVar8)) {
      fVar8 = sqrtf(fVar9);
    }
    lVar3 = *(long *)(param_5 + 0x40);
    local_a8 = 0x4000000040000000;
    fVar9 = (*(float *)(lVar3 + 0x1e0) + 1.0) *
            (*(float *)(lVar3 + 0x78) + *(float *)(lVar3 + 300) * (*(float *)(lVar3 + 0x294) + 1.0))
    ;
    if (DAT_031b1d20 <= fVar9) {
      fVar9 = DAT_031b1d20;
    }
    fVar11 = (float)DAT_031b1c60;
    if ((float)DAT_031b1c60 <= fVar9) {
      fVar11 = fVar9;
    }
    fVar12 = fVar12 + fVar14 + fVar11;
    local_70 = fVar2 + (-fVar7 / fVar8) * fVar12;
    local_78 = CONCAT44(fVar16 + (-fVar13 / fVar8) * fVar12,fVar15 + (-fVar10 / fVar8) * fVar12);
    local_a0 = 0x40000000;
    uVar4 = FUN_00da2eb4(param_5);
    uVar5 = FUN_00ef00a0(uVar4,&local_78,&local_98,&local_a8);
    if ((uVar5 & 1) != 0) {
      *(undefined4 *)(param_6 + 1) = local_90;
      goto LAB_00de4c40;
    }
  }
  *(float *)(param_6 + 1) = local_80;
  local_98 = local_88;
LAB_00de4c40:
  *param_6 = local_98;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de4c78(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,undefined8 param_4,
                 long param_5,undefined4 *param_6,undefined8 *param_7)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
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
  uVar4 = FUN_00d5048c();
  uVar7 = FUN_00d59f54(uVar4,2,5,0x19,0);
  *param_6 = uVar7;
  FUN_00d55794(param_5,&local_98,0);
  local_88 = (float)FUN_00d51830(param_4);
  fStack_84 = fStack_94;
  local_80 = param_3;
  lVar5 = FUN_00d51778(param_4);
  if (lVar5 == 0) {
    fVar12 = 1.0;
  }
  else {
    lVar5 = FUN_00d51778(param_4);
    fVar12 = 1.0;
    if ((*(byte *)(lVar5 + 0x2f4) & 1) != 0) {
      fVar12 = -0.2;
    }
  }
  lVar5 = FUN_00d51778(param_4);
  if (lVar5 == 0) {
    fVar11 = 0.0;
  }
  else {
    lVar5 = FUN_00d51778(param_4);
    fVar11 = 0.0;
    if ((*(byte *)(lVar5 + 0x2f5) & 0x10) != 0) {
      fVar11 = 0.5;
    }
  }
  fVar3 = local_80;
  fVar2 = local_88;
  fVar13 = local_88 - local_98;
  fVar14 = fStack_84 - fStack_94;
  fVar15 = local_80 - local_90;
  fVar9 = fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15;
  if (fVar9 <= 0.01) {
    *(float *)(param_7 + 1) = local_90;
    local_a8 = CONCAT44(fStack_94,local_98);
  }
  else {
    fVar8 = SQRT(fVar9);
    if (NAN(fVar8)) {
      fVar8 = sqrtf(fVar9);
    }
    lVar5 = *(long *)(param_5 + 0x40);
    local_b8 = 0x4000000040000000;
    fVar9 = (*(float *)(lVar5 + 0x1e0) + 1.0) *
            (*(float *)(lVar5 + 0x78) + *(float *)(lVar5 + 300) * (*(float *)(lVar5 + 0x294) + 1.0))
    ;
    if (DAT_031b1d20 <= fVar9) {
      fVar9 = DAT_031b1d20;
    }
    fVar10 = (float)DAT_031b1c60;
    if ((float)DAT_031b1c60 <= fVar9) {
      fVar10 = fVar9;
    }
    fVar11 = fVar11 + fVar12 + fVar10;
    fVar12 = (fVar13 / fVar8) * fVar11;
    fVar9 = (fVar14 / fVar8) * fVar11;
    fVar11 = (fVar15 / fVar8) * fVar11;
    local_88 = fVar2 + fVar12;
    fStack_84 = fStack_84 + fVar9;
    local_80 = fVar3 + fVar11;
    local_b0 = 0x40000000;
    uVar4 = FUN_00da2eb4(param_5);
    uVar6 = FUN_00ef00a0(uVar4,&local_88,&local_a8,&local_b8);
    if ((uVar6 & 1) == 0) {
      *param_7 = CONCAT44(fStack_84 - fVar9,local_88 - fVar12);
      *(float *)(param_7 + 1) = local_80 - fVar11;
      goto LAB_00de4e94;
    }
    *(undefined4 *)(param_7 + 1) = local_a0;
  }
  *param_7 = local_a8;
LAB_00de4e94:
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00de4ecc(undefined8 param_1,undefined8 param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float local_58 [4];
  float local_48 [3];
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d55794(param_2,local_48,0);
  FUN_00de4c78(param_1,param_2,&local_3c,local_58);
  fVar2 = (float)local_48._4_8_ - (float)local_58._4_8_;
  fVar3 = SUB84(local_48._4_8_,4) - SUB84(local_58._4_8_,4);
  fVar3 = (local_48[0] - local_58[0]) * (local_48[0] - local_58[0]) + fVar2 * fVar2 + fVar3 * fVar3;
  fVar2 = SQRT(fVar3);
  if (NAN(fVar2)) {
    fVar2 = sqrtf(fVar3);
  }
  fVar3 = fVar2 / local_3c;
  if (fVar2 / local_3c <= 0.1) {
    fVar3 = 0.1;
  }
  *param_3 = fVar3;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de4f9c(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_00d5048c();
  fVar2 = (float)FUN_00d59f54(uVar1,2,3,0x19,0);
  *param_2 = (int)fVar2;
  return;
}




void FUN_00de4fd8(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00d51964();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00d51954(param_1,0);
  }
  *param_2 = uVar2;
  return;
}

