// functions/00dd6 — 29 functions
#include "libGameKindred.h"




void FUN_00dd6060(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,2,0x19,0);
  return;
}




void FUN_00dd6074(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,3,0x19,0);
  return;
}




void FUN_00dd6088(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,6,0x19,0);
  return;
}




void FUN_00dd609c(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,7,0x19,0);
  return;
}




void FUN_00dd60b0(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 local_bc;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [40];
  long local_58 [3];
  
  lVar1 = tpidr_el0;
  local_58[2] = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_00d5048c(param_1);
    FUN_00d55794(uVar4,auStack_b8,0);
    FUN_00d4d634(auStack_80);
    FUN_00d4d66c(auStack_80,uVar4);
    FUN_00d4d678(auStack_80,"Lyra_Portal");
    uVar2 = FUN_00d9e840(auStack_80,local_58,2,0);
    if (uVar2 != 0) {
      uVar3 = 0;
      do {
        lVar5 = *(long *)(local_58[uVar3] + 0x18);
        while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_02c7bf48))) {
          lVar5 = *(long *)(lVar5 + 0x20);
        }
        uVar6 = FUN_00d6bbac(lVar5,DAT_031ba724,&local_bc);
        if ((uVar6 & 1) == 0) {
          FUN_00d5ba88(local_58[uVar3]);
          FUN_008ff608();
        }
        else {
          FUN_00d009d0(auStack_a8,*(undefined4 *)(local_58[uVar3] + 0x260),local_bc);
          FUN_00ce20fc(auStack_a8);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 != uVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58[2]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd61e8(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                 float *param_5,float *param_6)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = FUN_00d50ef8();
  FUN_00d55794(uVar1,param_5,0);
  fVar2 = (float)FUN_00d51820(param_4);
  fVar2 = fVar2 - *param_5;
  param_2 = param_2 - param_5[1];
  param_3 = param_3 - param_5[2];
  *param_6 = fVar2;
  param_6[1] = param_2;
  fVar2 = fVar2 * fVar2 + param_2 * param_2 + param_3 * param_3;
  param_6[2] = param_3;
  if (1e-08 <= fVar2) {
    fVar3 = SQRT(fVar2);
    if (NAN(fVar3)) {
      fVar3 = sqrtf(fVar2);
    }
    *(ulong *)param_6 =
         CONCAT44((float)((ulong)*(undefined8 *)param_6 >> 0x20) / fVar3,
                  (float)*(undefined8 *)param_6 / fVar3);
    param_6[2] = param_6[2] / fVar3;
  }
  else {
    param_6[2] = DAT_03218f70;
    *(undefined8 *)param_6 = DAT_03218f68;
  }
  return;
}




void FUN_00dd62bc(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                 float *param_5,float *param_6)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  float local_60;
  float local_58 [2];
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d50ef8();
  FUN_00d55794(uVar2,local_58,0);
  fVar4 = (float)FUN_00d51820(param_4);
  *param_5 = fVar4;
  param_5[1] = param_2;
  param_5[2] = param_3;
  local_78 = 0x412000003e800000;
  local_70 = 0x3e800000;
  uVar2 = FUN_00da2eb4(uVar2);
  uVar3 = FUN_00ef00a0(uVar2,param_5,&local_68,&local_78);
  if ((uVar3 & 1) != 0) {
    param_5[2] = local_60;
    *(undefined8 *)param_5 = local_68;
  }
  local_58[0] = local_58[0] - *param_5;
  local_50 = local_50 - param_5[2];
  *param_6 = local_58[0];
  fVar4 = local_58[0] * local_58[0] + 0.0 + local_50 * local_50;
  param_6[2] = local_50;
  param_6[1] = 0.0;
  if (1e-08 <= fVar4) {
    fVar5 = SQRT(fVar4);
    if (NAN(fVar5)) {
      fVar5 = sqrtf(fVar4);
    }
    *(ulong *)param_6 =
         CONCAT44((float)((ulong)*(undefined8 *)param_6 >> 0x20) / fVar5,
                  (float)*(undefined8 *)param_6 / fVar5);
    param_6[2] = param_6[2] / fVar5;
  }
  else {
    param_6[2] = DAT_03218f70;
    *(undefined8 *)param_6 = DAT_03218f68;
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00dd6414(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,undefined8 param_4,
                 undefined8 param_5,float *param_6)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float __x;
  float fVar4;
  float fVar5;
  float local_58 [2];
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d55794(param_5,local_58,0);
  fVar2 = (float)FUN_00d51820(param_4);
  fVar2 = fVar2 - local_58[0];
  local_50 = param_3 - local_50;
  __x = fVar2 * fVar2 + 0.0 + local_50 * local_50;
  fVar4 = (float)DAT_03218f68;
  fVar5 = DAT_03218f68._4_4_;
  fVar3 = DAT_03218f70;
  if (1e-08 <= __x) {
    fVar3 = SQRT(__x);
    if (NAN(fVar3)) {
      fVar3 = sqrtf(__x);
    }
    __x = 0.0;
    fVar4 = fVar2 / fVar3;
    fVar5 = 0.0 / fVar3;
    fVar3 = local_50 / fVar3;
  }
  fVar2 = (float)FUN_00d51820(param_4);
  *param_6 = fVar4 + fVar2;
  param_6[1] = fVar5 + __x;
  param_6[2] = fVar3 + param_3;
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00dd651c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  lVar2 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_38);
  FUN_00cf7b3c(uVar3,1);
  uVar3 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar3,"Ability03_Depart",0,1,0,0);
  uVar3 = FUN_00cfaa74(auStack_38);
  FUN_00cf32cc(0,uVar3,"Effect_Lyra_Portal_Use",0,0,1,0,0);
  uVar3 = FUN_00cf9cf4(auStack_38);
  FUN_00cf2e48(uVar3,FUN_00dd60b0);
  plVar4 = (long *)FUN_00cfb1c4(auStack_38);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"*Lyra_Portal*",0);
  (**(code **)(*plVar4 + 0x20))(plVar4,FUN_00dd61e8);
  plVar4 = (long *)FUN_00cfb1c4(auStack_38);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"*Lyra_Portal*",0);
  (**(code **)(*plVar4 + 0x20))(plVar4,FUN_00dd62bc);
  uVar3 = FUN_00cfa294(auStack_38);
  FUN_00cf7580(uVar3,FUN_00dd6774);
  FUN_00cf7578(uVar3,0);
  plVar4 = (long *)FUN_00cfb44c(auStack_38);
  (**(code **)(*plVar4 + 0x50))(plVar4,FUN_00dd6414);
  uVar5 = FUN_00cfab94(auStack_38);
  lVar2 = FUN_00d09310();
  uVar3 = FUN_00d09c20(*(undefined4 *)(lVar2 + 0x300));
  FUN_00cf4164(0x3f800000,uVar3,uVar5,"Sound_Lyra_Ability_C_Start",0,0,0xffffffff,0,1);
  FUN_00cf98bc(auStack_38);
  uVar3 = FUN_00cf9ab4(auStack_38);
  FUN_00cf456c(uVar3,PTR_s_Buff_Lyra_PortalRecentlyUsed_02bf0bd8,FUN_00dd6788,1,0);
  uVar3 = FUN_00cf9ab4(auStack_38);
  FUN_00cf456c(uVar3,PTR_s_Buff_Lyra_PortalSpeedBoost_02bf0be8,FUN_00dd679c,1,0);
  uVar3 = FUN_00cf9ab4(auStack_38);
  FUN_00cf44e8(0x3f000000,uVar3,PTR_s_Buff_Lyra_PortalExitAnimOverride_02bf0bf0,1,0);
  FUN_00cf9eec(auStack_38);
  lVar2 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd6774(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,3,0x19,0);
  return;
}




void FUN_00dd6788(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,6,0x19,0);
  return;
}




void FUN_00dd679c(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,9,0x19,0);
  return;
}




void FUN_00dd67b0(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfb05c(auStack_48);
  plVar2 = (long *)FUN_00cfaa2c(auStack_48);
  (**(code **)(*plVar2 + 0x58))(plVar2,param_1);
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7570(uVar3,FUN_00cf76f0);
  FUN_00cf7578(uVar3,FUN_00cfb9b0);
  plVar2 = (long *)FUN_00cfac24(auStack_48);
  if (param_3 - 0x45U < 3) {
    plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Malene_Evil_Auto_Attack_1");
    plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Malene_Evil_Auto_Attack_2");
    plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Malene_Evil_Auto_Attack_3");
    lVar4 = FUN_00d09310();
    uVar5 = *(undefined4 *)(lVar4 + 0x48c);
  }
  else {
    plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Malene_Good_Auto_Attack_1");
    plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Malene_Good_Auto_Attack_2");
    plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Malene_Good_Auto_Attack_3");
    lVar4 = FUN_00d09310();
    uVar5 = *(undefined4 *)(lVar4 + 0x488);
  }
  FUN_00d0a0b8(uVar5);
  (**(code **)(*plVar2 + 0x28))(plVar2);
  uVar3 = FUN_00cfb17c(auStack_48);
  FUN_00cfcad8(uVar3,param_3,param_2);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd6924(void)

{
  FUN_00dd67b0("Attack","AA",0x44);
  return;
}




void FUN_00dd693c(void)

{
  FUN_00dd67b0("AltAttack","AA",0x48);
  return;
}




void FUN_00dd6954(void)

{
  FUN_00dd67b0("CritAttack","AA",0x49);
  return;
}




void FUN_00dd696c(void)

{
  FUN_00dd67b0("DarkAttack","AA",0x45);
  return;
}




void FUN_00dd6984(void)

{
  FUN_00dd67b0("DarkAltAttack","AA",0x46);
  return;
}




void FUN_00dd699c(void)

{
  FUN_00dd67b0("DarkCritAttack","AA",0x47);
  return;
}




void FUN_00dd69b4(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfb05c(auStack_38);
  FUN_00cf7b3c(uVar2,1);
  plVar3 = (long *)FUN_00cfaa2c(auStack_38);
  (**(code **)(*plVar3 + 0x58))(plVar3,"LightEmpoweredAttack");
  uVar2 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  FUN_00cf98bc(auStack_38);
  uVar2 = FUN_00cf9d84(auStack_38);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Malene_LightEmpoweredAuto_02bf0c58);
  FUN_00cf9eec(auStack_38);
  uVar4 = FUN_00cfab94(auStack_38);
  lVar5 = FUN_00d09310();
  uVar2 = FUN_00d0a0b8(*(undefined4 *)(lVar5 + 0x490));
  FUN_00cf4164(0x3f800000,uVar2,uVar4,"Sound_Malene_Good_Empowered_Attack",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfb17c(auStack_38);
  FUN_00cfcad8(uVar2,0x4a,"AA");
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd6adc(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfb05c(auStack_38);
  FUN_00cf7b3c(uVar2,1);
  plVar3 = (long *)FUN_00cfaa2c(auStack_38);
  (**(code **)(*plVar3 + 0x58))(plVar3,"DarkEmpoweredAttack");
  uVar2 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  FUN_00cf98bc(auStack_38);
  uVar2 = FUN_00cf9d84(auStack_38);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Malene_DarkEmpoweredAuto_02bf0c60);
  FUN_00cf9eec(auStack_38);
  plVar3 = (long *)FUN_00cfac24(auStack_38);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Malene_Evil_Empowered_Attack");
  lVar4 = FUN_00d09310();
  FUN_00d0a0b8(*(undefined4 *)(lVar4 + 0x494));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar2 = FUN_00cfb17c(auStack_38);
  FUN_00cfcad8(uVar2,0x4b,"AA");
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd6bfc(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  lVar2 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_38);
  FUN_00cf7b3c(uVar3,1);
  plVar4 = (long *)FUN_00cfaa2c(auStack_38);
  (**(code **)(*plVar4 + 0x50))(plVar4,"AbilityA1");
  plVar4 = (long *)FUN_00cfac24(auStack_38);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Malene_Good_Ability_A_Cast");
  lVar2 = FUN_00d09310();
  FUN_00d0a0b8(*(undefined4 *)(lVar2 + 0x498));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uVar3 = FUN_00cfa294(auStack_38);
  FUN_00cf7580(uVar3,FUN_00dd6d14);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_38);
  uVar3 = FUN_00cfcad8(uVar3,0x4c,"CenterBody");
  FUN_00cfcba8(uVar3,0);
  lVar2 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd6d14(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,3,0x19,0);
  return;
}




void FUN_00dd6d28(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfa444(auStack_38);
  FUN_00cf2fa4(uVar2,PTR_s_Buff_Malene_B2_ShadowWalk_02bf0c80,2);
  lVar3 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  uVar2 = FUN_00cfb05c(auStack_38);
  FUN_00cf7b3c(uVar2,1);
  plVar4 = (long *)FUN_00cfaa2c(auStack_38);
  (**(code **)(*plVar4 + 0x50))(plVar4,"AbilityA2");
  plVar4 = (long *)FUN_00cfac24(auStack_38);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Malene_Evil_Ability_A_Cast");
  lVar3 = FUN_00d09310();
  FUN_00d0a0b8(*(undefined4 *)(lVar3 + 0x49c));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uVar2 = FUN_00cfa294(auStack_38);
  FUN_00cf7580(uVar2,FUN_00dd6e9c);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfb17c(auStack_38);
  uVar2 = FUN_00cfcad8(uVar2,0x4d,"CenterBody");
  FUN_00cfcba8(uVar2,1);
  uVar2 = FUN_00cfb17c(auStack_38);
  uVar2 = FUN_00cfcad8(uVar2,0x4d,"LeftShard");
  FUN_00cfcba8(uVar2,1);
  uVar2 = FUN_00cfb17c(auStack_38);
  uVar2 = FUN_00cfcad8(uVar2,0x4d,"RightShard");
  FUN_00cfcba8(uVar2,1);
  lVar3 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd6e9c(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,3,0x19,0);
  return;
}




void FUN_00dd6eb0(void)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_48 [16];
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  plVar2 = (long *)FUN_00cfaa2c(auStack_48);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"AbilityB1");
  (**(code **)(*plVar2 + 0x28))();
  plVar2 = (long *)FUN_00cf9afc(auStack_48);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))
                             (plVar2,PTR_s_Buff_Malene_B1_MirrorsBlessing_02bf0c78);
  local_38 = FUN_00da63a4;
  local_30 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_38);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd6f6c(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d5048c();
  uVar2 = FUN_00d59f54(uVar1,3,3,0x19,0);
  *param_3 = uVar2;
  return;
}




void FUN_00dd6fa4(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,3,0x19,0);
  return;
}




void FUN_00dd6fb8(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_68 [16];
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_68);
  uVar2 = FUN_00cfa444(auStack_68);
  FUN_00cf2fa4(uVar2,PTR_s_Buff_Malene_B2_ShadowWalk_02bf0c80,2);
  lVar3 = FUN_00cf9f7c(auStack_68);
  lVar4 = FUN_00cefb20(lVar3 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Malene_Talent_TalentA_02bee068;
  plVar5 = (long *)FUN_00cf9afc(lVar3 + 0xb0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))
                             (plVar5,PTR_s_Buff_Malene_B2_ShadowBurstSelf_02bf0c98);
  local_58 = FUN_00dd6fa4;
  local_50 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_58);
  plVar5 = (long *)FUN_00cfac24(auStack_68);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5,"Sound_Malene_Evil_Ability_B");
  lVar3 = FUN_00d09310();
  FUN_00d0a0b8(*(undefined4 *)(lVar3 + 0x4a4));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  FUN_00cf98bc(auStack_68);
  uVar2 = FUN_00cf9d84(auStack_68);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Malene_DarkFormAnimOverride_02bf0c50);
  FUN_00cf9eec(auStack_68);
  FUN_00cfa2dc(auStack_68);
  plVar5 = (long *)FUN_00cf9afc(auStack_68);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s_Buff_Malene_B2_ShadowWalk_02bf0c80);
  local_58 = FUN_00dd6fa4;
  local_50 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_58);
  plVar5 = (long *)FUN_00cfb1c4(auStack_68);
  (**(code **)(*plVar5 + 0x50))(plVar5,"*Malene_ShadowBurst*",1);
  plVar5 = (long *)FUN_00cf9afc(auStack_68);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s_Buff_SelfProjectile_02beb4b8);
  local_58 = FUN_00dd6fa4;
  local_50 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(plVar5,&local_58);
  (**(code **)(*plVar5 + 0x48))(plVar5,0x4e);
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

