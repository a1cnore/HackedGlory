// functions/00de9 — 19 functions
#include "libGameKindred.h"




void FUN_00de91b8(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_48 [16];
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  plVar2 = (long *)FUN_00cfb1c4(auStack_48);
  uVar3 = (**(code **)(*plVar2 + 0x50))(plVar2,"*GenericLocator*",0);
  plVar2 = (long *)FUN_00cf9b8c(auStack_48);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Vox_Soundwave_02bf1230,uVar3);
  local_38 = FUN_00de92c0;
  local_30 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_38);
  FUN_00cfb0a4(auStack_48);
  uVar4 = FUN_00cfab94(auStack_48);
  lVar5 = FUN_00d09310();
  uVar3 = FUN_00d09884(*(undefined4 *)(lVar5 + 0x1b4));
  FUN_00cf4164(0x3f800000,uVar3,uVar4,"Sound_Vox_Ability_B_Cast",0,0,0xffffffff,0,1);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de92c0(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,5,0x19,0);
  return;
}




void FUN_00de92d4(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,undefined8 param_4,
                 float *param_5,float *param_6)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = FUN_00d50ef8();
  FUN_00d55794(uVar1,param_5,0);
  fVar2 = (float)FUN_00d51820(param_4);
  fVar2 = fVar2 - *param_5;
  param_3 = param_3 - param_5[2];
  *param_6 = fVar2;
  fVar2 = fVar2 * fVar2 + 0.0 + param_3 * param_3;
  param_6[2] = param_3;
  param_6[1] = 0.0;
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
  param_5[1] = param_5[1] + 1.0;
  return;
}




void FUN_00de93b8(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [96];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_98);
  FUN_00cf98bc(auStack_98);
  uVar2 = FUN_00cf9ab4(auStack_98);
  FUN_00cf44e8(0x3f400000,uVar2,PTR_s_Buff_GloballyVisible_02bebad8,1,0);
  FUN_00cf9eec(auStack_98);
  FUN_00d4d9e8(auStack_88);
  FUN_00d4daf4(auStack_88,0,1,0,0);
  FUN_00d4db48(0x447a0000,auStack_88,&DAT_03218f30);
  uVar2 = FUN_00cfadd4(auStack_98);
  FUN_00cf5df8(uVar2,PTR_s_Buff_Vox_Resonance_02bf1238,auStack_88,0,1);
  uVar2 = FUN_00cf9ab4(auStack_98);
  FUN_00cf456c(uVar2,PTR_s_Buff_Vox_Resonance_02bf1238,FUN_00d8f3b8,0,0);
  FUN_00cf9eec(auStack_98);
  FUN_00cfb05c(auStack_98);
  FUN_00cfa6cc(auStack_98);
  uVar2 = FUN_00cfa9e4(auStack_98);
  FUN_00cf3048(uVar2,"Ability03",0,1,0,"AttackToIdleCombat");
  uVar2 = FUN_00cfa294(auStack_98);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfb17c(auStack_98);
  uVar2 = FUN_00cfcad8(uVar2,0x78,"BasicAttack_RightHand");
  FUN_00cfcba8(uVar2,1);
  plVar3 = (long *)FUN_00cfb1c4(auStack_98);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"*GenericLocator*",0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x20))(plVar3,FUN_00de92d4);
  uVar2 = (**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)FUN_00cf9b8c(auStack_98);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Vox_C_WaitForIt_02bf1250,uVar2);
  (**(code **)(*plVar3 + 0x20))(plVar3,FUN_00e6047c);
  uVar4 = FUN_00cfab94(auStack_98);
  lVar5 = FUN_00d09310();
  uVar2 = FUN_00d09884(*(undefined4 *)(lVar5 + 0x1b4));
  FUN_00cf4164(0x3f800000,uVar2,uVar4,"Sound_Vox_Ability_C_Cast",0,0,0xffffffff,0,1);
  lVar5 = FUN_00cfa6cc(auStack_98);
  *(undefined1 *)(lVar5 + 0x10) = 0;
  FUN_00cfb0a4(auStack_98);
  FUN_00cfb5c4(auStack_98);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de9610(undefined8 param_1,ulong param_2,ulong param_3)

{
  undefined8 uVar1;
  
  FUN_00cf98bc();
  if ((param_2 & 1) != 0) {
    uVar1 = FUN_00cfa834(param_1);
    FUN_00cf4dc4(uVar1,PTR_s_Buff_HeroPLU_EngineStacks_02bebb88,0,1);
  }
  if ((param_3 & 1) != 0) {
    uVar1 = FUN_00cf9d84(param_1);
    FUN_00cf49b0(uVar1,PTR_s_Buff_HeroPLU_EngineOverheat_02bebb98);
  }
  FUN_00cf9eec(param_1);
  return;
}




void FUN_00de9684(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00cfa444();
  FUN_00cf2fa4(uVar1,PTR_s_Buff_HeroPLU_EngineRecovery_02bebb90,0x400);
  uVar1 = FUN_00cfa444(param_1);
  FUN_00cf2fa4(uVar1,PTR_s_Buff_HeroPLU_EngineOverheat_02bebb98,0x400);
  return;
}




void FUN_00de96d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  FUN_00cfb05c();
  uVar1 = FUN_00cfa9e4(param_1);
  FUN_00cf3048(uVar1,param_2,0,1,FUN_00cfb9b0,"AttackToIdleCombat");
  uVar1 = FUN_00cfab94(param_1);
  FUN_00cf4164(0x3f800000,0x3f800000,uVar1,"Sound_HeroPLU_Punch_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar1,"Sound_HeroPLU_Punch_2");
  FUN_00cf41bc(uVar1,"Sound_HeroPLU_Punch_3");
  uVar1 = FUN_00cfa294(param_1);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar1,FUN_00cfb9b0);
  uVar1 = FUN_00cfab94(param_1);
  FUN_00cf4164(0x3f800000,0x3f800000,uVar1,"Sound_HeroPLU_Basic_Impact_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar1,"Sound_HeroPLU_Basic_Impact_2");
  FUN_00cf41bc(uVar1,"Sound_HeroPLU_Basic_Impact_3");
  FUN_00cf99dc(param_1);
  uVar1 = FUN_00cfa00c(param_1);
  FUN_00cf6bb0(uVar1,param_4);
  FUN_00cfb0a4(param_1);
  return;
}




void FUN_00de9820(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00de96d0(auStack_38,"Attack",param_3,FUN_00cfb6d0);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de9888(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00de96d0(auStack_38,"AltAttack",param_3,FUN_00cfb6d0);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de98f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00de96d0(auStack_38,"CritAttack",param_3,FUN_00cfb8b4);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de9958(undefined8 param_1,undefined8 param_2,float *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  lVar2 = FUN_00d5048c();
  lVar2 = *(long *)(lVar2 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  iVar1 = FUN_00d6bb44(lVar2,DAT_031a92e0);
  lVar2 = FUN_00d5048c(param_1);
  lVar2 = *(long *)(lVar2 + 0x40);
  fVar4 = (*(float *)(lVar2 + 0x1b0) + 1.0) *
          (*(float *)(lVar2 + 0x48) + *(float *)(lVar2 + 0xfc) * (*(float *)(lVar2 + 0x264) + 1.0));
  if (DAT_031b2220 <= fVar4) {
    fVar4 = DAT_031b2220;
  }
  fVar5 = (float)DAT_031b2160;
  if ((float)DAT_031b2160 <= fVar4) {
    fVar5 = fVar4;
  }
  uVar3 = FUN_00d5048c(param_1);
  fVar4 = (float)FUN_00d59f54(uVar3,0,7,0x19,0);
  *param_3 = fVar4 * (float)iVar1 + fVar5;
  *param_4 = 0;
  *param_5 = 0;
  return;
}




void FUN_00de9a68(undefined8 param_1,long param_2,float *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  *param_3 = *(float *)(*(long *)(param_2 + 0x40) + 0x308) * 0.5;
  *param_4 = 0;
  *param_5 = 2;
  return;
}




void FUN_00de9a8c(undefined8 param_1,undefined8 param_2,float *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  long lVar1;
  
  lVar1 = FUN_00d5048c();
  *param_3 = *(float *)(*(long *)(lVar1 + 0x40) + 0x308) * 0.5;
  *param_4 = 0;
  *param_5 = 2;
  return;
}




void FUN_00de9adc(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auStack_48 [16];
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  uVar2 = FUN_00cf9d84(auStack_48);
  FUN_00cf49b0(uVar2,PTR_s_Buff_HeroPLU_EngineOverheat_02bebb98);
  plVar3 = (long *)FUN_00cfa954(auStack_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  local_38[0] = 0xc1200000;
  local_30 = 1;
  (**(code **)(*plVar3 + 0x10))(plVar3,3,local_38);
  FUN_00de96d0(auStack_48,"Ability02End");
  FUN_00de9610(auStack_48,1,0);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de9ba4(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  undefined8 local_90;
  float local_88;
  undefined1 local_80 [8];
  float local_78;
  undefined1 local_70 [8];
  float local_68;
  undefined1 auStack_60 [32];
  undefined1 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d55794(param_2,local_70,0);
  FUN_00d557c4(param_2,local_80,&DAT_03218f68);
  uVar2 = FUN_00d59f54(param_2,0,9,0x19,0);
  *param_3 = uVar2;
  fVar3 = (float)FUN_00d59f54(param_2,0,8,0x19,0);
  local_90 = CONCAT44(local_70._4_4_ - local_80._4_4_ * fVar3,
                      local_70._0_4_ - local_80._0_4_ * fVar3);
  local_88 = local_68 - fVar3 * local_78;
  uVar2 = FUN_00da2eb4(param_2);
  FUN_00da32b0(auStack_60,local_70,&local_90,uVar2);
  local_40 = 1;
  FUN_00da32dc(auStack_60,param_4,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de9cac(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,9,0x19,0);
  return;
}




void FUN_00de9cc0(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,8,0x19,0);
  return;
}




void FUN_00de9cd4(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_68 [16];
  code *local_58;
  undefined4 local_50;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_68);
  FUN_00cfa6cc(auStack_68);
  FUN_00de9610(auStack_68,1,1);
  uVar2 = FUN_00cfb05c(auStack_68);
  FUN_00cf7b3c(uVar2,1);
  uVar2 = FUN_00cfa9e4(auStack_68);
  FUN_00cf3048(uVar2,"CritAttack",0,1,FUN_00cfb9b0,"AttackToIdleCombat");
  plVar3 = (long *)FUN_00cfab04(auStack_68);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_HeroPLU_Explosion");
  uVar2 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  FUN_00cf98bc(auStack_68);
  uVar2 = FUN_00cfa00c(auStack_68);
  FUN_00cf6bb0(uVar2,FUN_00de9a8c);
  uVar2 = FUN_00cf9c1c(auStack_68);
  FUN_00cf816c(uVar2,FUN_00de9ba4,0,0);
  uVar2 = FUN_00cf9ab4(auStack_68);
  FUN_00cf44e8(0x40000000,uVar2,PTR_s_Buff_Stunned_02beb430,1,0);
  FUN_00cf9eec(auStack_68);
  FUN_00cf99dc(auStack_68);
  uVar2 = FUN_00cfa00c(auStack_68);
  FUN_00cf6bb0(uVar2,FUN_00de9a68);
  plVar3 = (long *)FUN_00cfa684(auStack_68);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  local_48 = FUN_00de9cac;
  local_40 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,&local_48);
  local_58 = FUN_00de9cc0;
  local_50 = 3;
  (**(code **)(*plVar3 + 0x20))(plVar3,&local_58);
  uVar2 = FUN_00cf9ab4(auStack_68);
  FUN_00cf44e8(0x40000000,uVar2,PTR_s_Buff_Stunned_02beb430,1,0);
  FUN_00cf9eec(auStack_68);
  lVar4 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cfb0a4(auStack_68);
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de9eec(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auStack_48 [16];
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00de9684(auStack_48);
  FUN_00cf98bc(auStack_48);
  uVar2 = FUN_00cf9ab4(auStack_48);
  FUN_00cf44e8(0xbf800000,uVar2,PTR_s_Buff_HeroPLU_EngineStacks_02bebb88,1,0);
  FUN_00cf9eec(auStack_48);
  uVar2 = FUN_00cfab94(auStack_48);
  FUN_00cf4164(0x3f800000,0x3f800000,uVar2,"Sound_HeroPLU_Rev_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_HeroPLU_Rev_2");
  FUN_00cf41bc(uVar2,"Sound_HeroPLU_Rev_3");
  plVar3 = (long *)FUN_00cfa8c4(auStack_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Ability__HeroPLU__B_02bef728);
  local_38 = FUN_00dea094;
  local_30 = 3;
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_38);
  plVar3 = (long *)FUN_00cfb1c4(auStack_48);
  (**(code **)(*plVar3 + 0x50))(plVar3,"*HeroPLUSmokeCloud*",1);
  plVar3 = (long *)FUN_00cfab04(auStack_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Taka_SmokeBomb");
  plVar3 = (long *)FUN_00cfa954(auStack_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  local_38 = FUN_00dea0a8;
  local_30 = 3;
  (**(code **)(*plVar3 + 0x10))(plVar3,3,&local_38);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

