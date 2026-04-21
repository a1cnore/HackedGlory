// functions/00df8 — 16 functions
#include "libGameKindred.h"




void FUN_00df8144(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  undefined1 local_58 [8];
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d50ef8();
  fVar3 = (float)FUN_00d51820(param_4);
  FUN_00d557c4(uVar2,local_58,&DAT_03218f68);
  *param_5 = CONCAT44(param_2 + local_58._4_4_ * 5.8,fVar3 + local_58._0_4_ * 5.8);
  *(float *)(param_5 + 1) = param_3 + local_50 * 5.8;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00df8208(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_68;
  float local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d50ef8();
  fVar3 = (float)FUN_00d51820(param_4);
  FUN_00d557c4(uVar2,&local_68,&DAT_03218f68);
  fVar5 = (float)((ulong)_DAT_03218f7c >> 0x20);
  fVar7 = (float)((ulong)local_68 >> 0x20);
  fVar6 = DAT_03218f78 * fVar7 - (float)_DAT_03218f7c * (float)local_68;
  fVar7 = (float)_DAT_03218f7c * local_60 - fVar5 * fVar7;
  fVar8 = fVar5 * (float)local_68 - DAT_03218f78 * local_60;
  fVar5 = fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8;
  if (1e-08 <= fVar5) {
    fVar4 = SQRT(fVar5);
    if (NAN(fVar4)) {
      fVar4 = sqrtf(fVar5);
    }
    fVar7 = fVar7 / fVar4;
    fVar8 = fVar8 / fVar4;
    fVar6 = fVar6 / fVar4;
  }
  else {
    fVar7 = -(float)_DAT_03218f88;
    fVar8 = -(float)((ulong)_DAT_03218f88 >> 0x20);
    fVar6 = -DAT_03218f90;
  }
  *param_5 = CONCAT44(fVar8 * 0.8660254 * 5.8 +
                      (param_2 - (float)((ulong)local_68 >> 0x20) * 5.8 * 0.5),
                      fVar7 * 0.8660254 * 5.8 + (fVar3 - (float)local_68 * 5.8 * 0.5));
  *(float *)(param_5 + 1) = fVar6 * 0.8660254 * 5.8 + param_3 + local_60 * 5.8 * -0.5;
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00df83b4(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_68;
  float fStack_64;
  float fStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d50ef8();
  fVar3 = (float)FUN_00d51820(param_4);
  FUN_00d557c4(uVar2,&local_68,&DAT_03218f68);
  fVar5 = (float)((ulong)_DAT_03218f7c >> 0x20);
  fVar6 = local_68 * (float)_DAT_03218f7c - DAT_03218f78 * fStack_64;
  fVar7 = fStack_64 * fVar5 - fStack_60 * (float)_DAT_03218f7c;
  fVar8 = fStack_60 * DAT_03218f78 - local_68 * fVar5;
  fVar5 = fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8;
  if (1e-08 <= fVar5) {
    fVar4 = SQRT(fVar5);
    if (NAN(fVar4)) {
      fVar4 = sqrtf(fVar5);
    }
    fVar7 = fVar7 / fVar4;
    fVar8 = fVar8 / fVar4;
    fVar6 = fVar6 / fVar4;
  }
  else {
    fVar7 = -(float)_DAT_03218f88;
    fVar8 = -(float)((ulong)_DAT_03218f88 >> 0x20);
    fVar6 = -DAT_03218f90;
  }
  *param_5 = CONCAT44(fVar8 * 0.8660254 * 5.8 + (param_2 - fStack_64 * 5.8 * 0.5),
                      fVar7 * 0.8660254 * 5.8 + (fVar3 - local_68 * 5.8 * 0.5));
  *(float *)(param_5 + 1) = fVar6 * 0.8660254 * 5.8 + param_3 + fStack_60 * 5.8 * -0.5;
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00df8564(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_58 [16];
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  lVar2 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  FUN_00cfb05c(auStack_58);
  plVar3 = (long *)FUN_00cfaa2c(auStack_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"Ability01");
  (**(code **)(*plVar3 + 0x18))(plVar3,"AttackToIdleCombat");
  plVar3 = (long *)FUN_00cfac24(auStack_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Silvernail_A_Shot");
  lVar2 = FUN_00d09310();
  FUN_00d0a2b0(*(undefined4 *)(lVar2 + 0x4f4));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar4 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar4,0);
  plVar3 = (long *)FUN_00cfab04(auStack_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,"Projectile_A");
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Silvernail_A");
  plVar3 = (long *)FUN_00cf9afc(auStack_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))
                             (plVar3,PTR_s_Buff_Silvernail_A_Tower_LimitChe_02bf1620);
  local_48[0] = 0x3dcccccd;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_48);
  lVar5 = FUN_00cf9f7c(auStack_58);
  lVar6 = FUN_00cefb20(lVar5 + 0x10);
  lVar2 = lVar5 + 0xb0;
  *(undefined **)(lVar6 + 8) = PTR_s_Buff_Silvernail_Talent_TalentC_02bf2210;
  plVar3 = (long *)FUN_00cfb1c4(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"*Silvernail_GroundedBolt*",1);
  (**(code **)(*plVar3 + 0x20))(plVar3,FUN_00df8144);
  plVar3 = (long *)FUN_00cfb1c4(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"*Silvernail_GroundedBolt*",1);
  (**(code **)(*plVar3 + 0x20))(plVar3,FUN_00df8208);
  plVar3 = (long *)FUN_00cfb1c4(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"*Silvernail_GroundedBolt*",1);
  (**(code **)(*plVar3 + 0x20))(plVar3,FUN_00df83b4);
  plVar3 = (long *)FUN_00cfb1c4(lVar5 + 200);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"*Silvernail_GroundedBolt*",1);
  (**(code **)(*plVar3 + 0x20))(plVar3,FUN_00df7fcc);
  uVar4 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar4,0);
  lVar2 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df87f4(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,int param_5
                 ,undefined8 *param_6)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 local_68 [8];
  float local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d50ef8();
  fVar3 = (float)FUN_00d51820(param_4);
  FUN_00d55794(uVar2,local_68,0);
  fVar6 = fVar3 - local_68._0_4_;
  fVar7 = param_2 - local_68._4_4_;
  local_60 = param_3 - local_60;
  fVar5 = fVar6 * fVar6 + fVar7 * fVar7 + local_60 * local_60;
  uVar2 = DAT_03218f68;
  fVar4 = DAT_03218f70;
  if (1e-08 <= fVar5) {
    fVar4 = SQRT(fVar5);
    if (NAN(fVar4)) {
      fVar4 = sqrtf(fVar5);
    }
    uVar2 = CONCAT44(fVar7 / fVar4,fVar6 / fVar4);
    fVar4 = local_60 / fVar4;
  }
  fVar5 = (float)param_5 * 3.0;
  *param_6 = CONCAT44(param_2 + (float)((ulong)uVar2 >> 0x20) * fVar5,fVar3 + (float)uVar2 * fVar5);
  *(float *)(param_6 + 1) = param_3 + fVar5 * fVar4;
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00df8928(undefined8 param_1,undefined8 param_2)

{
  FUN_00df87f4(param_1,1,param_2);
  return;
}




void FUN_00df8934(undefined8 param_1,undefined8 param_2)

{
  FUN_00df87f4(param_1,0xffffffff,param_2);
  return;
}




void FUN_00df8940(void)

{
  undefined4 *in_x3;
  
  FUN_00df87f4();
  *in_x3 = 0;
  return;
}




void FUN_00df8964(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  FUN_00df87f4(param_1,0,param_2);
  *param_3 = 0;
  return;
}




void FUN_00df8990(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  FUN_00df87f4(param_1,1,param_2);
  *param_3 = 0;
  return;
}




void FUN_00df89bc(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  FUN_00df87f4(param_1,0xffffffff,param_2);
  *param_3 = 0;
  return;
}




void FUN_00df89e8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [16];
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_68);
  lVar2 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  FUN_00cfb05c(auStack_68);
  plVar3 = (long *)FUN_00cfaa2c(auStack_68);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"Ability02");
  (**(code **)(*plVar3 + 0x18))(plVar3,"AttackToIdleCombat");
  plVar3 = (long *)FUN_00cfac24(auStack_68);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Silvernail_B");
  lVar2 = FUN_00d09310();
  FUN_00d0a2b0(*(undefined4 *)(lVar2 + 0x4f8));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar4 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar4,0);
  plVar3 = (long *)FUN_00cfac24(auStack_68);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Silvernail_B_Throw");
  lVar2 = FUN_00d09310();
  FUN_00d0a2b0(*(undefined4 *)(lVar2 + 0x4f8));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar4 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar4,0);
  plVar3 = (long *)FUN_00cfaabc(auStack_68);
  (**(code **)(*plVar3 + 0x50))(plVar3,"Effect_Silvernail_B_Warning",FUN_00df8964);
  uVar4 = FUN_00cfb17c(auStack_68);
  FUN_00cfcad8(uVar4,0xb6,"Projectile_B");
  uVar4 = FUN_00cf9f34(auStack_68);
  uVar5 = FUN_00d9ab88();
  FUN_00d9b128(uVar5,PTR_s_Buff_Silvernail_Talent_TalentB_02bf2220);
  FUN_00d9b0f8(uVar4);
  plVar3 = (long *)FUN_00cfaabc();
  (**(code **)(*plVar3 + 0x50))(plVar3,"Effect_Silvernail_B_Warning",FUN_00df8990);
  FUN_00d9b0f8(uVar4);
  plVar3 = (long *)FUN_00cfaabc();
  (**(code **)(*plVar3 + 0x50))(plVar3,"Effect_Silvernail_B_Warning",FUN_00df89bc);
  FUN_00d9b0f8(uVar4);
  uVar5 = FUN_00cfb17c();
  FUN_00cfcb70(uVar5,0xb6,"Projectile_B",FUN_00df8928);
  FUN_00d9b0f8(uVar4);
  uVar4 = FUN_00cfb17c();
  FUN_00cfcb70(uVar4,0xb6,"Projectile_B",FUN_00df8934);
  plVar3 = (long *)FUN_00cf9afc(auStack_68);
  (**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Silvernail_AmmoCharge_Loade_02bf1610);
  plVar3 = (long *)FUN_00cf9afc(auStack_68);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))
                             (plVar3,PTR_s_Buff_Silvernail_B_MovespeedBoost_02bf1680);
  local_58 = FUN_00df8cd0;
  local_50 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_58);
  uVar4 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar4,0);
  lVar2 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df8cd0(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,7,0x19,0);
  return;
}




void FUN_00df8ce4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_48);
  FUN_00cf7b3c(uVar3,1);
  plVar4 = (long *)FUN_00cfaa2c(auStack_48);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"Ability03");
  (**(code **)(*plVar4 + 0x18))(plVar4,"AttackToIdleCombat");
  plVar4 = (long *)FUN_00cfac24(auStack_48);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Silvernail_C");
  lVar2 = FUN_00d09310();
  FUN_00d0a2b0(*(undefined4 *)(lVar2 + 0x4fc));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  plVar4 = (long *)FUN_00cfab04(auStack_48);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,"Projectile_C");
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Silvernail_C_Cast");
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  plVar4 = (long *)FUN_00cfac24(auStack_48);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Silvernail_C_Fire");
  lVar2 = FUN_00d09310();
  FUN_00d0a2b0(*(undefined4 *)(lVar2 + 0x4fc));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uVar3 = FUN_00cfb17c(auStack_48);
  FUN_00cfcad8(uVar3,0xb7,"Projectile_C");
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df8ec8(void)

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
  FUN_00cf7478(0x40400000);
  FUN_00cf7578(uVar5,0);
  uVar5 = FUN_00cfaa74(lVar2);
  FUN_00cf32cc(0,uVar5,"Effect_Silvernail_Taunt",0,0,1,1,0);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df8fd0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfb05c(auStack_48);
  plVar2 = (long *)FUN_00cfaa2c(auStack_48);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,param_1);
  (**(code **)(*plVar2 + 0x18))(plVar2,"AttackToIdleCombat");
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7570(uVar3,FUN_00cf76f0);
  FUN_00cf7578(uVar3,FUN_00cfb9b0);
  plVar2 = (long *)FUN_00cfa0e4(auStack_48);
  (**(code **)(*plVar2 + 0x58))(plVar2,param_3);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

