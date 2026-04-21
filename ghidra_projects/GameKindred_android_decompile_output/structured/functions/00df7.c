// functions/00df7 — 15 functions
#include "libGameKindred.h"




void FUN_00df70a0(int param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  char *pcVar6;
  code *pcVar7;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  lVar2 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_58);
  FUN_00cf7b3c(uVar3,1);
  plVar4 = (long *)FUN_00cfaa2c(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"FastAttack");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,"AttackToIdleCombat");
  (**(code **)(*plVar4 + 0x10))(0x3fc00000);
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7570(uVar3,FUN_00cf7700);
  FUN_00cf7578(uVar3,FUN_00cfb9b0);
  plVar4 = (long *)FUN_00cfac24(auStack_58);
  pcVar7 = *(code **)(*plVar4 + 0x58);
  if (param_1 == 0xb4) {
    plVar4 = (long *)(*pcVar7)(plVar4,"Sound_Silvernail_Default_Attack_01");
    plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,"Sound_Silvernail_Default_Attack_02");
    pcVar6 = "Sound_Silvernail_Default_Attack_03";
    pcVar7 = *(code **)(*plVar4 + 0x18);
  }
  else {
    pcVar6 = "Sound_Silvernail_Crit_Attack_01";
  }
  plVar4 = (long *)(*pcVar7)(plVar4,pcVar6);
  lVar2 = FUN_00d09310();
  FUN_00d0a2b0(*(undefined4 *)(lVar2 + 0x4f0));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uVar3 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar3,param_1,"Projectile");
  FUN_00cfacb4(auStack_58);
  FUN_00cf50b0(0x3f800000);
  FUN_00cf98bc(auStack_58);
  uVar3 = FUN_00cf9d84(auStack_58);
  FUN_00cf49b0(uVar3,PTR_s_Buff_Silvernail_AmmoCharge_Loade_02bf1610);
  FUN_00cf9eec(auStack_58);
  uVar3 = FUN_00cf9f34(auStack_58);
  uVar5 = FUN_00d9ab88();
  FUN_00d9b128(uVar5,PTR_s_Buff_Silvernail_Talent_TalentA_02bf2230);
  FUN_00d9b0f8(uVar3);
  uVar5 = FUN_00cfa294();
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar5,0);
  FUN_00d9b0f8(uVar3);
  uVar5 = FUN_00cfb17c();
  FUN_00cfcad8(uVar5,param_1,"Projectile");
  FUN_00d9b0f8(uVar3);
  FUN_00cfacb4();
  FUN_00cf50b0(0x3f800000);
  lVar2 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df72e4(void)

{
  FUN_00df70a0(0xb4);
  return;
}




void FUN_00df72ec(void)

{
  FUN_00df70a0(0xb5);
  return;
}




bool FUN_00df72f4(void)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar2 = FUN_00d50ef8();
  lVar2 = *(long *)(lVar2 + 0x40);
  fVar3 = (*(float *)(lVar2 + 0x218) + 1.0) *
          (*(float *)(lVar2 + 0xb0) + *(float *)(lVar2 + 0x164) * (*(float *)(lVar2 + 0x2cc) + 1.0))
  ;
  if (DAT_031b28d8 <= fVar3) {
    fVar3 = DAT_031b28d8;
  }
  fVar4 = DAT_031b2818;
  if (DAT_031b2818 <= fVar3) {
    fVar4 = fVar3;
  }
  iVar1 = rand();
  return (float)iVar1 * 4.656613e-10 + 0.0 < fVar4;
}




void FUN_00df7388(undefined8 param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  code *pcVar8;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  uVar2 = FUN_00cfb05c(auStack_58);
  FUN_00cf7b3c(uVar2,1);
  plVar3 = (long *)FUN_00cfaa2c(auStack_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,param_1);
  (**(code **)(*plVar3 + 0x18))(plVar3,"AttackToIdleCombat");
  lVar4 = FUN_00cf9f7c(auStack_58);
  lVar5 = FUN_00cefb20(lVar4 + 0x10);
  lVar4 = lVar4 + 0xb0;
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Silvernail_AmmoCharge_Loade_02bf1610;
  lVar5 = FUN_00cfa6cc(lVar4);
  *(undefined1 *)(lVar5 + 0x10) = 1;
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7570(uVar2,FUN_00cf76f0);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  plVar3 = (long *)FUN_00cfac24(auStack_58);
  pcVar8 = *(code **)(*plVar3 + 0x58);
  if (param_2 == 0xb2) {
    plVar3 = (long *)(*pcVar8)(plVar3,"Sound_Silvernail_Default_Attack_01");
    plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Silvernail_Default_Attack_02");
    pcVar7 = "Sound_Silvernail_Default_Attack_03";
    pcVar8 = *(code **)(*plVar3 + 0x18);
  }
  else {
    pcVar7 = "Sound_Silvernail_Crit_Attack_01";
  }
  plVar3 = (long *)(*pcVar8)(plVar3,pcVar7);
  lVar5 = FUN_00d09310();
  FUN_00d0a2b0(*(undefined4 *)(lVar5 + 0x4f0));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar2 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar2,param_2,param_3);
  lVar5 = FUN_00cf9f7c(lVar4);
  lVar6 = FUN_00cf2970(lVar5 + 0x10);
  *(code **)(lVar6 + 8) = FUN_00df72f4;
  uVar2 = FUN_00cf9634(lVar5 + 200);
  uVar2 = FUN_00cfc5fc(uVar2,PTR_s_Ability__Silvernail__DefaultFast_02befaf0);
  FUN_00cfc60c(uVar2,FUN_00cfc7c0);
  uVar2 = FUN_00cf9634(lVar5 + 0xb0);
  uVar2 = FUN_00cfc5fc(uVar2,PTR_s_Ability__Silvernail__CritFastAtt_02befaf8);
  FUN_00cfc60c(uVar2,FUN_00cfc7c0);
  lVar4 = FUN_00cfa6cc(lVar4);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df7588(void)

{
  FUN_00df7388("Attack",0xb2,"Projectile");
  return;
}




void FUN_00df75a0(void)

{
  FUN_00df7388("AltAttack",0xb2,"Projectile");
  return;
}




void FUN_00df75b8(void)

{
  FUN_00df7388("CritAttack",0xb3,"Projectile");
  return;
}




void FUN_00df75d0(undefined8 param_1,float *param_2,float *param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_68 = 0x412000003e800000;
  local_60 = 0x3e800000;
  uVar2 = FUN_00da2eb4();
  uVar3 = FUN_00ef00a0(uVar2,param_3,&local_58,&local_68);
  if ((uVar3 & 1) == 0) {
    uVar2 = FUN_00da2eb4(param_1);
    FUN_00ef01b8(uVar2,param_2,param_3,&local_6c,0,0);
    fVar7 = (float)*(undefined8 *)param_3 - (float)*(undefined8 *)param_2;
    fVar8 = (float)((ulong)*(undefined8 *)param_3 >> 0x20) -
            (float)((ulong)*(undefined8 *)param_2 >> 0x20);
    fVar9 = param_3[2] - param_2[2];
    fVar4 = fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9;
    fVar6 = DAT_03218f70;
    uVar2 = DAT_03218f68;
    if (1e-08 <= fVar4) {
      fVar5 = SQRT(fVar4);
      if (NAN(fVar5)) {
        fVar5 = sqrtf(fVar4);
      }
      fVar4 = (*param_3 - *param_2) * (*param_3 - *param_2) +
              (param_3[1] - param_2[1]) * (param_3[1] - param_2[1]) +
              (param_3[2] - param_2[2]) * (param_3[2] - param_2[2]);
      fVar6 = fVar9 / fVar5;
      uVar2 = CONCAT44(fVar8 / fVar5,fVar7 / fVar5);
    }
    fVar7 = SQRT(fVar4);
    if (NAN(fVar7)) {
      fVar7 = sqrtf(fVar4);
    }
    fVar4 = param_2[2];
    *(ulong *)param_3 =
         CONCAT44((float)((ulong)*(undefined8 *)param_2 >> 0x20) +
                  (float)((ulong)uVar2 >> 0x20) * local_6c * fVar7,
                  (float)*(undefined8 *)param_2 + (float)uVar2 * local_6c * fVar7);
    param_3[2] = fVar6 * local_6c * fVar7 + fVar4;
    uVar2 = FUN_00da2eb4(param_1);
    uVar3 = FUN_00ef00a0(uVar2,param_3,&local_58,&local_68);
    if ((uVar3 & 1) == 0) {
      param_3[2] = param_2[2];
      local_58 = *(undefined8 *)param_2;
    }
    else {
      param_3[2] = local_50;
    }
    *(undefined8 *)param_3 = local_58;
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00df7794(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  float fVar2;
  undefined4 local_e8 [2];
  undefined1 auStack_e0 [40];
  undefined1 auStack_b8 [112];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  fVar2 = (float)FUN_00d59f54(param_1,2,5,0x19,0);
  thunk_FUN_00d9ff34(local_e8,PTR_s_Buff_Silvernail_A_Tower_AttachPo_02bf1630);
  FUN_00d4e934(auStack_b8,local_e8[0]);
  FUN_00d4db40(auStack_b8,param_1);
  FUN_00d4daf4(auStack_b8,1,0,0,0);
  FUN_00d4dca4(auStack_b8,"Silvernail_GroundedBolt",0);
  FUN_00d4ddc4(auStack_b8);
  FUN_00d4db48(fVar2 + 0.01,auStack_b8,param_2);
  FUN_00d4eb08(auStack_e0,param_2,param_3,0);
  FUN_00d9e840(auStack_b8,param_4,200,auStack_e0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df78b4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_98;
  float fStack_94;
  float local_90;
  float local_88;
  float fStack_84;
  float local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  FUN_00d55794(param_3,&local_88,0);
  FUN_00d55794(param_4,&local_98,0);
  fVar9 = local_98 - local_88;
  fVar6 = fStack_94 - fStack_84;
  fVar8 = local_90 - local_80;
  fVar4 = fVar9 * fVar9 + fVar6 * fVar6 + fVar8 * fVar8;
  fVar3 = SQRT(fVar4);
  if (NAN(fVar3)) {
    fVar3 = sqrtf(fVar4);
  }
  fVar5 = (float)DAT_03218f68;
  fVar7 = DAT_03218f68._4_4_;
  fVar2 = DAT_03218f70;
  if (1e-08 <= fVar4) {
    fVar2 = SQRT(fVar4);
    if (NAN(fVar2)) {
      fVar2 = sqrtf(fVar4);
    }
    fVar5 = fVar9 / fVar2;
    fVar7 = fVar6 / fVar2;
    fVar2 = fVar8 / fVar2;
  }
  fVar10 = (float)*param_2 - local_88;
  fVar11 = (float)((ulong)*param_2 >> 0x20) - fStack_84;
  fVar12 = *(float *)(param_2 + 1) - local_80;
  fVar9 = fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12;
  fVar4 = DAT_03218f70;
  fVar6 = (float)DAT_03218f68;
  fVar8 = DAT_03218f68._4_4_;
  if (1e-08 <= fVar9) {
    fVar8 = SQRT(fVar9);
    if (NAN(fVar8)) {
      fVar8 = sqrtf(fVar9);
    }
    fVar4 = fVar12 / fVar8;
    fVar6 = fVar10 / fVar8;
    fVar8 = fVar11 / fVar8;
  }
  fVar3 = (fVar3 * 0.5) / (fVar2 * fVar4 + fVar7 * fVar8 + fVar5 * fVar6);
  *param_1 = CONCAT44(fStack_84 + fVar8 * fVar3,local_88 + fVar6 * fVar3);
  *(float *)(param_1 + 1) = local_80 + fVar4 * fVar3;
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00df7a7c(float *param_1,float *param_2,undefined8 *param_3,float *param_4)

{
  long lVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float local_9c;
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  float local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  fVar3 = (float)*(undefined8 *)param_2;
  fVar5 = (float)*param_3;
  fVar4 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  fVar9 = (float)((ulong)*param_3 >> 0x20);
  fVar6 = fVar5 - fVar3;
  fVar7 = fVar9 - fVar4;
  fVar8 = *(float *)(param_3 + 1) - param_2[2];
  local_88 = CONCAT44((fVar4 + fVar9) * 0.5,(fVar3 + fVar5) * 0.5);
  local_80 = (param_2[2] + *(float *)(param_3 + 1)) * 0.5;
  fVar4 = fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8;
  fVar3 = SQRT(fVar4);
  if (NAN(fVar3)) {
    fVar3 = sqrtf(fVar4);
  }
  local_90 = fVar8 / fVar3;
  local_98 = CONCAT44(fVar7 / fVar3,fVar6 / fVar3);
  fVar3 = *param_2;
  fVar7 = param_2[1];
  fVar12 = *param_4;
  fVar8 = param_4[1];
  fVar11 = param_2[2];
  fVar13 = param_4[2];
  fVar6 = fVar12 - fVar3;
  fVar14 = fVar8 - fVar7;
  fVar9 = fVar13 - fVar11;
  fVar5 = fVar6 * fVar6 + fVar14 * fVar14 + fVar9 * fVar9;
  fVar4 = SQRT(fVar5);
  if (NAN(fVar4)) {
    fVar4 = sqrtf(fVar5);
  }
  fVar10 = (fVar14 / fVar4) * DAT_03218f80 - (fVar9 / fVar4) * DAT_03218f7c;
  fVar9 = (fVar9 / fVar4) * DAT_03218f78 - DAT_03218f80 * (fVar6 / fVar4);
  fVar6 = (fVar6 / fVar4) * DAT_03218f7c - (fVar14 / fVar4) * DAT_03218f78;
  FUN_019bbd68(&local_a8,&local_98,&local_88);
  fVar5 = fVar6 * fVar6 + fVar10 * fVar10 + fVar9 * fVar9;
  fVar4 = SQRT(fVar5);
  if (NAN(fVar4)) {
    fVar4 = sqrtf(fVar5);
  }
  fVar5 = (fVar10 / fVar4) * local_a8 + (fVar9 / fVar4) * fStack_a4 + (fVar6 / fVar4) * local_a0;
  bVar2 = 1e-06 <= ABS(fVar5);
  if (bVar2) {
    fVar3 = (fVar3 + fVar12) * 0.5;
    fVar7 = (fVar7 + fVar8) * 0.5;
    fVar8 = (fVar11 + fVar13) * 0.5;
    fVar5 = -(fVar3 * local_a8 + fVar7 * fStack_a4 + fVar8 * local_a0 + local_9c) / fVar5;
    *param_1 = fVar3 + (fVar10 / fVar4) * fVar5;
    param_1[1] = fVar7 + (fVar9 / fVar4) * fVar5;
    param_1[2] = fVar8 + (fVar6 / fVar4) * fVar5;
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}




void FUN_00df7cd8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 local_78 [8];
  float local_70;
  undefined1 local_68 [8];
  float local_60;
  undefined1 local_58 [8];
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d59f54(param_2,2,5,0x19,0);
  FUN_00d55794(param_3,local_58,0);
  FUN_00d55794(param_4,local_68,0);
  FUN_00d55794(param_5,local_78,0);
  uVar2 = FUN_00df7a7c(param_1,local_58,local_68,local_78);
  if ((uVar2 & 1) == 0) {
    uVar3 = NEON_fmov(0x40400000,4);
    *param_1 = CONCAT44((local_58._4_4_ + local_68._4_4_ + local_78._4_4_) /
                        (float)((ulong)uVar3 >> 0x20),
                        (local_58._0_4_ + local_68._0_4_ + local_78._0_4_) / (float)uVar3);
    *(float *)(param_1 + 1) = (local_50 + local_60 + local_70) / 3.0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df7ddc(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar7;
  undefined8 uVar6;
  float __x;
  float fVar8;
  undefined1 local_68 [8];
  float local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  fVar2 = (float)FUN_00d59f54(param_2,2,5,0x19,0);
  FUN_00d55794(param_2,local_68,0);
  fVar5 = (float)*param_3 - (float)*param_4;
  fVar7 = (float)((ulong)*param_3 >> 0x20) - (float)((ulong)*param_4 >> 0x20);
  fVar8 = *(float *)(param_3 + 1) - *(float *)(param_4 + 1);
  __x = fVar5 * fVar5 + fVar7 * fVar7 + fVar8 * fVar8;
  fVar3 = SQRT(__x);
  if (NAN(fVar3)) {
    fVar3 = sqrtf(__x);
  }
  uVar6 = CONCAT44(fVar7,fVar5);
  if (ABS(fVar3) < 0.2) {
    fVar5 = (float)*param_3 - local_68._0_4_;
    fVar7 = (float)((ulong)*param_3 >> 0x20) - local_68._4_4_;
    fVar8 = *(float *)(param_3 + 1) - local_60;
    __x = fVar5 * fVar5 + fVar7 * fVar7 + fVar8 * fVar8;
    fVar3 = SQRT(__x);
    if (NAN(fVar3)) {
      fVar3 = sqrtf(__x);
    }
    uVar6 = CONCAT44(fVar7,fVar5);
    if (ABS(fVar3) < 0.2) {
      fVar8 = (float)((ulong)DAT_03218f68 >> 0x20);
      __x = (float)DAT_03218f68 * (float)DAT_03218f68 + fVar8 * fVar8 + DAT_03218f70 * DAT_03218f70;
      uVar6 = DAT_03218f68;
      fVar8 = DAT_03218f70;
    }
  }
  uVar4 = DAT_03218f68;
  fVar3 = DAT_03218f70;
  if (1e-08 <= __x) {
    fVar3 = SQRT(__x);
    if (NAN(fVar3)) {
      fVar3 = sqrtf(__x);
    }
    uVar4 = CONCAT44((float)((ulong)uVar6 >> 0x20) / fVar3,(float)uVar6 / fVar3);
    fVar3 = fVar8 / fVar3;
  }
  fVar8 = *(float *)(param_4 + 1);
  *param_1 = CONCAT44((float)((ulong)uVar4 >> 0x20) * fVar2 + (float)((ulong)*param_4 >> 0x20),
                      (float)uVar4 * fVar2 + (float)*param_4);
  *(float *)(param_1 + 1) = fVar2 * fVar3 + fVar8;
  FUN_00df75d0(param_2,param_4,param_1);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00df7fcc(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 auStack_98 [16];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00d50ef8();
  local_78 = FUN_00d51820(param_4);
  uStack_74 = param_2;
  local_70 = param_3;
  FUN_00d55794(uVar3,&local_88,0);
  FUN_00df75d0(uVar3,&local_88,&local_78);
  iVar2 = FUN_00df7794(uVar3,&local_78,6,&local_68);
  if (iVar2 != 1) {
    *(undefined4 *)(param_5 + 1) = local_70;
    local_88 = CONCAT44(uStack_74,local_78);
    goto LAB_00df8118;
  }
  FUN_00d55794(local_68,auStack_98,0);
  FUN_00df7ddc(&local_a8,uVar3,&local_78,auStack_98);
  iVar2 = FUN_00df7794(uVar3,&local_a8,6,&local_68);
  if (iVar2 == 3) {
    if (((local_68 != 0) && (local_60 != 0)) && (local_58 != 0)) {
      FUN_00df7cd8(&local_a8,uVar3);
    }
LAB_00df80fc:
    FUN_00df75d0(uVar3,auStack_98,&local_a8);
  }
  else {
    if (iVar2 == 2) {
      if ((local_68 != 0) && (local_60 != 0)) {
        FUN_00df78b4(&local_a8,&local_a8);
      }
      goto LAB_00df80fc;
    }
    if (iVar2 != 1) {
      *(undefined4 *)(param_5 + 1) = local_80;
      goto LAB_00df8118;
    }
  }
  *(undefined4 *)(param_5 + 1) = local_a0;
  local_88 = local_a8;
LAB_00df8118:
  *param_5 = local_88;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

