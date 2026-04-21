// functions/00dac — 25 functions
#include "libGameKindred.h"




void FUN_00dac00c(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,2,0x19,0);
  return;
}




void FUN_00dac020(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,5,0x19,0);
  return;
}




void FUN_00dac034(void)

{
  FUN_00cfc038(PTR_s_Buff_Adagio_Withdraw_02bf01e0);
  return;
}




void FUN_00dac044(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                 uint param_5,undefined4 param_6)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [16];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_68);
  FUN_00cfb05c(auStack_68);
  plVar2 = (long *)FUN_00cfaa2c(auStack_68);
  (**(code **)(*plVar2 + 0x58))(plVar2,param_1);
  if (param_5 == 0) {
    uVar5 = FUN_00cfa294(auStack_68);
    FUN_00cf7478(0x3dcccccd);
    FUN_00cf7578(uVar5,0);
  }
  else {
    uVar3 = FUN_00cfab94();
    uVar6 = *param_3;
    lVar4 = FUN_00d09310();
    uVar5 = FUN_00d09b78(*(undefined4 *)(lVar4 + 0x2b0));
    FUN_00cf4164(0x3f800000,uVar5,uVar3,uVar6,0,0,0xffffffff,0,1);
    if (param_5 != 1) {
      lVar4 = (ulong)param_5 - 1;
      do {
        param_3 = param_3 + 1;
        FUN_00cf41bc(uVar3,*param_3);
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    uVar5 = FUN_00cfa294(auStack_68);
    FUN_00cf7478(0x3dcccccd);
    FUN_00cf7578(uVar5,0);
    uVar3 = FUN_00cfab94(auStack_68);
    uVar6 = *param_4;
    lVar4 = FUN_00d09310();
    uVar5 = FUN_00d09b78(*(undefined4 *)(lVar4 + 0x2b0));
    FUN_00cf4164(0x3f800000,uVar5,uVar3,uVar6,0,0,0xffffffff,0,1);
    if (1 < param_5) {
      lVar4 = (ulong)param_5 - 1;
      do {
        param_4 = param_4 + 1;
        FUN_00cf41bc(uVar3,*param_4);
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  uVar5 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar5,FUN_00cfb9b0);
  uVar5 = FUN_00cfaa74(auStack_68);
  FUN_00cf32cc(0,uVar5,param_2,0,0,1,0,0);
  FUN_00cf99dc(auStack_68);
  plVar2 = (long *)FUN_00cfa09c(auStack_68);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))();
  (**(code **)(*plVar2 + 0x58))(plVar2,param_6);
  FUN_00cfb0a4(auStack_68);
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00dac28c(void)

{
  FUN_00dac044("Attack","Effect_Alpha_AA",&PTR_s_Sound_Alpha_Attack_Heavy_1_02bee3f8,
               &PTR_s_Sound_Alpha_Impact_Heavy_1_02bee428,3,0);
  return;
}




void FUN_00dac2b8(void)

{
  FUN_00dac044("AltAttack","Effect_Alpha_AA_Alt",&PTR_s_Sound_Alpha_Attack_Heavy_1_02bee3f8,
               &PTR_s_Sound_Alpha_Impact_Heavy_1_02bee428,3,0);
  return;
}




void FUN_00dac2e4(void)

{
  FUN_00dac044("CritAttack","Effect_Alpha_AA_Crit",&PTR_s_Sound_Alpha_Crit_1_02bee410,
               &PTR_s_Sound_Alpha_Impact_Heavy_1_02bee428,3,2);
  return;
}




void FUN_00dac310(undefined8 param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d59f54(param_2,0,4,0x19,0);
  *param_3 = fVar1 + -0.2;
  return;
}




void FUN_00dac354(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,4,0x19,0);
  return;
}




void FUN_00dac368(undefined8 param_1,undefined8 param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = FUN_00d5048c();
  fVar2 = (float)FUN_00d59f54(uVar1,0,2,0x19,0);
  fVar3 = (float)FUN_00d59f54(uVar1,0,5,0x19,0);
  *param_3 = fVar2 / fVar3 + 0.1;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00dac3d8(undefined8 param_1)

{
  byte *pbVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  uint local_98;
  float local_94;
  undefined4 local_90;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined2 local_53;
  undefined1 local_51;
  undefined1 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) == 0) {
    uVar8 = 0x811c9dc5;
    uVar5 = FUN_00d5048c(param_1);
    iVar3 = FUN_00d504c4(param_1);
    uVar4 = FUN_00d9e99c(uVar5);
    pbVar1 = (byte *)"Effect_Alpha_A_Warning_A";
    pbVar6 = (byte *)"Effect_Alpha_A_Warning_OD_A";
    if ((uVar4 & 1) == 0) {
      pbVar1 = (byte *)"Effect_Alpha_A_Warning_E";
      pbVar6 = (byte *)"Effect_Alpha_A_Warning_OD_E";
    }
    if (iVar3 != 5) {
      pbVar6 = pbVar1;
    }
    fVar9 = (float)FUN_00d59f54(uVar5,0,2,0x19,0);
    fVar10 = (float)FUN_00d59f54(uVar5,0,5,0x19,0);
    fVar11 = (float)FUN_00d59f54(uVar5,0,4,0x19,0);
    uVar7 = (uint)*pbVar6;
    local_94 = fVar11 + fVar9 / fVar10 + -0.1;
    uStack_a0 = 0;
    local_a8 = 0;
    uStack_b0 = 0;
    local_b8 = 0;
    if (*pbVar6 != 0) {
      do {
        pbVar6 = pbVar6 + 1;
        uVar8 = (uVar8 ^ uVar7) * 0x1000193;
        uVar7 = (uint)*pbVar6;
      } while (*pbVar6 != 0);
    }
    local_90 = 0xffffffff;
    local_84 = 0xff000000;
    local_7c = _DAT_03218ef8;
    local_74 = DAT_03218f40;
    local_6c = DAT_03218f48;
    local_8c = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_53 = 1;
    local_51 = 0;
    local_54 = 0;
    local_58 = 0;
    local_98 = uVar8;
    uStack_a0 = FUN_00d5babc(uVar5);
    local_50 = 1;
    uVar5 = FUN_00d5048c(param_1);
    FUN_00d5a548(uVar5,&local_b8);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dac5a8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_48);
  FUN_00cf7b3c(uVar3,1);
  uVar3 = FUN_00cf9cf4(auStack_48);
  FUN_00cf2e48(uVar3,FUN_00dac3d8);
  uVar3 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar3,"Ability01_Charge",0,1,0,"AttackToIdle");
  uVar4 = FUN_00cfab94(auStack_48);
  lVar2 = FUN_00d09310();
  uVar3 = FUN_00d09b78(*(undefined4 *)(lVar2 + 0x2b4));
  FUN_00cf4164(0x3f800000,uVar3,uVar4,"Sound_Alpha_Ability_A_Charge",0,0,0xffffffff,0,1);
  uVar5 = FUN_00ceab48();
  uVar3 = FUN_00cfa294(auStack_48);
  if ((uVar5 & 1) == 0) {
    FUN_00cf7570(uVar3,FUN_00dac310);
    uVar4 = FUN_00cfab94(auStack_48);
    lVar2 = FUN_00d09310();
    uVar3 = FUN_00d09b78(*(undefined4 *)(lVar2 + 0x2b8));
    FUN_00cf4164(0x3f800000,uVar3,uVar4,"Sound_Alpha_Ability_A_Scan",0,0,0xffffffff,0,1);
    uVar3 = FUN_00cfa294(auStack_48);
    FUN_00cf7478(0x3e4ccccd);
  }
  else {
    FUN_00cf7580(uVar3,FUN_00dac354);
  }
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_48);
  uVar3 = FUN_00cfcad8(uVar3,4,"EyeLaserShot");
  FUN_00cfcba8(uVar3,2);
  FUN_00cf98bc(auStack_48);
  uVar3 = FUN_00cf9ab4(auStack_48);
  FUN_00cf4540(uVar3,PTR_s_Buff_Alpha_Dash_Shot_Lock_02bf0238,FUN_00dac368,1,0);
  FUN_00cf9eec(auStack_48);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00dac7a8(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  
  lVar2 = FUN_00d50ef8();
  lVar3 = *(long *)(lVar2 + 0x18);
  while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  iVar1 = FUN_00d53990(lVar3,4);
  if (iVar1 == 2) {
    uVar5 = 0x400;
  }
  else {
    lVar3 = *(long *)(lVar2 + 0x18);
    while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_02c7bf48))) {
      lVar3 = *(long *)(lVar3 + 0x20);
    }
    uVar4 = FUN_00d6bbac(lVar3,DAT_031b8218,0);
    uVar5 = 0x400;
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
    }
  }
  return uVar5;
}




void FUN_00dac850(undefined8 param_1,undefined8 param_2,float *param_3)

{
  ulong uVar1;
  float fVar2;
  
  fVar2 = (float)FUN_00d59f54(param_2,0,9,0x19,0);
  *param_3 = fVar2;
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    *param_3 = *param_3 + 0.1;
  }
  return;
}




void FUN_00dac8a4(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,9,0x19,0);
  return;
}




void FUN_00dac8b8(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [16];
  code *local_98;
  undefined4 local_90;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_a8);
  uVar2 = FUN_00cfad44(auStack_a8);
  FUN_00cf2ec0(uVar2,FUN_00dac7a8);
  uVar2 = FUN_00cfab94(auStack_a8);
  lVar3 = FUN_00d09310();
  uVar6 = FUN_00d09b78(*(undefined4 *)(lVar3 + 0x2c0));
  FUN_00cf4164(0x3f800000,uVar6,uVar2,"Sound_Alpha_Ability_A_Attack",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfab94(auStack_a8);
  lVar3 = FUN_00d09310();
  uVar6 = FUN_00d09b78(*(undefined4 *)(lVar3 + 700));
  FUN_00cf4164(0x3f800000,uVar6,uVar2,"Sound_Alpha_Ability_A_Dash",0,0,0xffffffff,0,1);
  lVar3 = FUN_00cfa6cc(auStack_a8);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  uVar2 = FUN_00cfb05c(auStack_a8);
  FUN_00cf7b3c(uVar2,2);
  uVar2 = FUN_00cfa9e4(auStack_a8);
  FUN_00cf3048(uVar2,"Ability01_Jump",0,0,0,"AttackToIdle");
  uVar2 = FUN_00cfaa74(auStack_a8);
  FUN_00cf32cc(0x3f000000,uVar2,"Effect_Alpha_A_Dash",0,0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_a8);
  FUN_00cf7580(uVar2,FUN_00dacccc);
  FUN_00cf7578(uVar2,0);
  FUN_00cf98bc(auStack_a8);
  uVar2 = FUN_00cf9ab4(auStack_a8);
  FUN_00cf456c(uVar2,PTR_s_Buff_Alpha_ThrusterPfx_02bf0240,FUN_00dac8a4,1,0);
  FUN_00cf9eec(auStack_a8);
  plVar4 = (long *)FUN_00cfa12c(auStack_a8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(0,0xc0000000,0xc0800000,0xc0000000);
  local_98 = FUN_00dac8a4;
  local_90 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xa8))(plVar4,&local_98);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  uVar2 = FUN_00cfa294(auStack_a8);
  FUN_00cf7570(uVar2,FUN_00dac850);
  FUN_00cfb56c(auStack_a8);
  FUN_00d4d9e8(&local_98);
  FUN_00d4daf4(&local_98,0,1,0,0);
  FUN_00d4dabc(&local_98,0x40000);
  uVar2 = FUN_00cfaf84(auStack_a8);
  FUN_00cf5504(uVar2,&local_98,0,FUN_00dacce0,0,1,0);
  plVar4 = (long *)FUN_00cfa09c(auStack_a8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  (**(code **)(*plVar4 + 0x30))(plVar4,0);
  FUN_00cf9eec(auStack_a8);
  FUN_00cf98bc(auStack_a8);
  lVar3 = FUN_00cf9f7c(auStack_a8);
  lVar5 = FUN_00cefb20(lVar3 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Alpha_Talent_PrimeTime_02bf1cd8;
  uVar2 = FUN_00cf9ab4(lVar3 + 0xb0);
  FUN_00cf456c(uVar2,PTR_s_Buff_Alpha_Talent_PrimeTimeForti_02bf1ce8,FUN_00daccf4,1,0);
  uVar2 = FUN_00cf9d84(auStack_a8);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Alpha_B_Stacks_Debuff_02bf0208);
  FUN_00cf9eec(auStack_a8);
  uVar2 = FUN_00cfb05c(auStack_a8);
  FUN_00cf7b3c(uVar2,1);
  uVar2 = FUN_00cfa9e4(auStack_a8);
  FUN_00cf3048(uVar2,"Ability01_End",0,1,0,0);
  uVar2 = FUN_00cfaa74(auStack_a8);
  FUN_00cf32cc(0x3f000000,uVar2,"Effect_Alpha_A_Hit",0,0,1,0,0);
  uVar2 = FUN_00cfaa74(auStack_a8);
  FUN_00cf3428(0x40400000,uVar2,"Effect_Alpha_Blade",1,"Bone_Sword",0,1,0,0);
  FUN_00cfacb4(auStack_a8);
  uVar2 = FUN_00cfa294(auStack_a8);
  FUN_00cf7580(uVar2,FUN_00dacd0c);
  FUN_00cf7578(uVar2,0);
  FUN_00cf9994(auStack_a8);
  lVar3 = FUN_00cfa6cc(auStack_a8);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  FUN_00cfb0a4(auStack_a8);
  FUN_00cfb5c4(auStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dacccc(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,8,0x19,0);
  return;
}




void FUN_00dacce0(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,3,0x19,0);
  return;
}




void FUN_00daccf4(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e3fc,1,9);
  return;
}




void FUN_00dacd0c(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,10,0x19,0);
  return;
}




void FUN_00dacd20(undefined8 param_1,undefined8 param_2,float *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_68 [4];
  float local_58 [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d5048c();
  uVar3 = FUN_00d51778(param_1);
  FUN_00d55794(lVar2,local_68,0);
  FUN_00d55794(uVar3,local_58,0);
  fVar6 = (local_68[0] - local_58[0]) * (local_68[0] - local_58[0]) + 0.0 +
          (local_68[2] - local_58[2]) * (local_68[2] - local_58[2]);
  fVar5 = SQRT(fVar6);
  local_68[1] = 0.0;
  local_58[1] = 0.0;
  if (NAN(fVar5)) {
    fVar5 = sqrtf(fVar6);
  }
  lVar4 = *(long *)(lVar2 + 0x40);
  fVar6 = (*(float *)(lVar4 + 0x1e0) + 1.0) *
          (*(float *)(lVar4 + 0x78) + *(float *)(lVar4 + 300) * (*(float *)(lVar4 + 0x294) + 1.0));
  if (DAT_031afcb0 <= fVar6) {
    fVar6 = DAT_031afcb0;
  }
  fVar7 = DAT_031afbf0;
  if (DAT_031afbf0 <= fVar6) {
    fVar7 = fVar6;
  }
  fVar6 = (float)FUN_00d59f54(lVar2,1,10,0x19,0);
  fVar6 = (fVar5 - (fVar7 + 0.5)) / fVar6;
  if (fVar6 <= 0.1) {
    fVar6 = 0.1;
  }
  *param_3 = fVar6;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dace80(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,10,0x19,0);
  return;
}




void FUN_00dace94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined1 local_58 [8];
  float local_50;
  undefined1 local_48 [8];
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d55794(param_2,local_48,0);
  FUN_00d557c4(param_2,local_58,&DAT_03218f68);
  *param_4 = CONCAT44(local_58._4_4_ * 0.5 + local_48._4_4_,local_58._0_4_ * 0.5 + local_48._0_4_);
  *(float *)(param_4 + 1) = local_50 * 0.5 + local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dacf38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 local_58 [8];
  float local_50;
  undefined1 local_48 [8];
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d55794(param_2,local_48,0);
  FUN_00d557c4(param_2,local_58,&DAT_03218f68);
  uVar2 = NEON_fmov(0x40600000,4);
  *param_4 = CONCAT44(local_58._4_4_ * (float)((ulong)uVar2 >> 0x20) + local_48._4_4_,
                      local_58._0_4_ * (float)uVar2 + local_48._0_4_);
  *(float *)(param_4 + 1) = local_50 * 3.5 + local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dacfdc(void)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_78 [48];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00d5048c();
  uVar2 = *(ushort *)(lVar3 + 0x88) & 0x1f;
  if ((uVar2 == 0x1f) || (1 < *(ushort *)(lVar3 + (ulong)uVar2 * 0x38 + 0x90) - 3)) {
    fVar7 = (float)FUN_00d59f54(lVar3,1,1,0x19,0);
    lVar6 = *(long *)(lVar3 + 0x18);
    while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_02c7bf48))) {
      lVar6 = *(long *)(lVar6 + 0x20);
    }
    uVar4 = FUN_00d6bbac(lVar6,DAT_031b8238,0);
    if ((uVar4 & 1) != 0) {
      fVar8 = (float)FUN_00d59f54(lVar3,1,2,0x19,0);
      uVar2 = FUN_00d6bb44(lVar6,DAT_031b8238);
      fVar7 = fVar7 + fVar8 * (float)uVar2;
    }
    fVar9 = *(float *)(*(long *)(lVar3 + 0x40) + 0x308);
    fVar10 = fVar9 - fVar7 * fVar9;
    fVar8 = -(fVar7 * fVar9);
    if (fVar10 <= 0.0) {
      fVar8 = -(fVar7 * fVar9) - (fVar10 + -1.0);
    }
    if (fVar8 <= -1.0) {
      uVar4 = FUN_00ceab48();
      if ((uVar4 & 1) == 0) {
        plVar5 = (long *)FUN_00d5bae0(lVar3);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x118))(fVar8,plVar5,2,3,0);
          (**(code **)(*plVar5 + 0x148))(fVar8,plVar5,lVar3);
        }
      }
      else {
        FUN_00d043c0(fVar8,auStack_78,*(undefined4 *)(lVar3 + 0x260),0,0);
        FUN_00ce20fc(auStack_78);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

