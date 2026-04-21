// functions/00dfc — 18 functions
#include "libGameKindred.h"




void FUN_00dfc168(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  long lVar1;
  
  lVar1 = FUN_00d5048c();
  *param_3 = *(undefined4 *)(*(long *)(lVar1 + 0x40) + 0x48);
  *param_4 = 0;
  *param_5 = 0;
  return;
}




void FUN_00dfc1ac(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_b8 [16];
  undefined4 local_a8 [2];
  undefined4 local_a0;
  undefined1 auStack_98 [96];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_b8);
  FUN_00d4d9e8(auStack_98);
  FUN_00d4daf4(auStack_98,0,1,0,0);
  FUN_00d4dabc(auStack_98,0x40000);
  uVar2 = FUN_00cfb05c(auStack_b8);
  FUN_00cf7b3c(uVar2,1);
  plVar3 = (long *)FUN_00cfaa2c(auStack_b8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Attack");
  (**(code **)(*plVar3 + 0x18))(plVar3,"AttackToIdleCombat");
  plVar3 = (long *)FUN_00cfab04(auStack_b8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_LanceBall_Lance_AA");
  plVar3 = (long *)FUN_00cfac24(auStack_b8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_LanceBall_Lance_Attack_Quick");
  lVar4 = FUN_00d09310();
  FUN_00d0a304(*(undefined4 *)(lVar4 + 0x518));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar2 = FUN_00cfa294(auStack_b8);
  FUN_00cf7570(uVar2,FUN_00cf76f0);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfaf3c(auStack_b8);
  uVar2 = FUN_00cf5ac8(0x3f800000,uVar2,FUN_00dfbfcc,FUN_00dfbfdc);
  FUN_00cf5ae0(uVar2,auStack_98);
  uVar2 = FUN_00cfa00c(auStack_b8);
  FUN_00cf6bb0(uVar2,FUN_00dfc168);
  plVar3 = (long *)FUN_00cf9b44(auStack_b8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))
                             (plVar3,PTR_s_Buff_LanceBall_Lance_PlayAAPfx_02bf17b8);
  local_a8[0] = 0x3dcccccd;
  local_a0 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_a8);
  FUN_00cf9eec(auStack_b8);
  FUN_00cfb0a4(auStack_b8);
  FUN_00cfb5c4(auStack_b8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dfc38c(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,undefined8 param_4,
                 undefined8 param_5,float *param_6,float *param_7)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float __x;
  undefined8 uVar5;
  undefined8 local_a0;
  float local_98;
  float local_90;
  float fStack_8c;
  float local_88;
  undefined1 auStack_80 [32];
  undefined1 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00d55794(param_5,&local_90,0);
  fVar3 = (float)FUN_00d51820(param_4);
  fVar3 = fVar3 - local_90;
  param_3 = param_3 - local_88;
  __x = fVar3 * fVar3 + 0.0 + param_3 * param_3;
  uVar5 = DAT_03218f68;
  fVar4 = DAT_03218f70;
  if (1e-08 <= __x) {
    fVar4 = SQRT(__x);
    if (NAN(fVar4)) {
      fVar4 = sqrtf(__x);
    }
    uVar5 = CONCAT44(0.0 / fVar4,fVar3 / fVar4);
    fVar4 = param_3 / fVar4;
  }
  fVar3 = (float)FUN_00d50cc8(param_4);
  local_a0 = CONCAT44(fStack_8c + (float)((ulong)uVar5 >> 0x20) * fVar3,
                      local_90 + (float)uVar5 * fVar3);
  local_98 = fVar4 * fVar3 + local_88;
  uVar2 = FUN_00da2eb4(param_5);
  FUN_00da32b0(auStack_80,&local_90,&local_a0,uVar2);
  local_60 = 1;
  FUN_00da32dc(auStack_80,param_7,0);
  fVar4 = (*param_7 - local_90) * (*param_7 - local_90) + 0.0 +
          (param_7[2] - local_88) * (param_7[2] - local_88);
  fVar3 = SQRT(fVar4);
  if (NAN(fVar3)) {
    fVar3 = sqrtf(fVar4);
  }
  fVar4 = (float)FUN_00d59f54(param_5,0,2,0x19,0);
  *param_6 = fVar3 / fVar4;
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00dfc544(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,2,0x19,0);
  return;
}




void thunk_FUN_00dfc38c(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,
                       undefined8 param_4,undefined8 param_5,float *param_6,float *param_7)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float __x;
  undefined8 uVar5;
  undefined8 uStack_a0;
  float fStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  undefined1 auStack_80 [32];
  undefined1 uStack_60;
  long lStack_58;
  
  lVar1 = tpidr_el0;
  lStack_58 = *(long *)(lVar1 + 0x28);
  FUN_00d55794(param_5,&fStack_90,0);
  fVar3 = (float)FUN_00d51820(param_4);
  fVar3 = fVar3 - fStack_90;
  param_3 = param_3 - fStack_88;
  __x = fVar3 * fVar3 + 0.0 + param_3 * param_3;
  uVar5 = DAT_03218f68;
  fVar4 = DAT_03218f70;
  if (1e-08 <= __x) {
    fVar4 = SQRT(__x);
    if (NAN(fVar4)) {
      fVar4 = sqrtf(__x);
    }
    uVar5 = CONCAT44(0.0 / fVar4,fVar3 / fVar4);
    fVar4 = param_3 / fVar4;
  }
  fVar3 = (float)FUN_00d50cc8(param_4);
  uStack_a0 = CONCAT44(fStack_8c + (float)((ulong)uVar5 >> 0x20) * fVar3,
                       fStack_90 + (float)uVar5 * fVar3);
  fStack_98 = fVar4 * fVar3 + fStack_88;
  uVar2 = FUN_00da2eb4(param_5);
  FUN_00da32b0(auStack_80,&fStack_90,&uStack_a0,uVar2);
  uStack_60 = 1;
  FUN_00da32dc(auStack_80,param_7,0);
  fVar4 = (*param_7 - fStack_90) * (*param_7 - fStack_90) + 0.0 +
          (param_7[2] - fStack_88) * (param_7[2] - fStack_88);
  fVar3 = SQRT(fVar4);
  if (NAN(fVar3)) {
    fVar3 = sqrtf(fVar4);
  }
  fVar4 = (float)FUN_00d59f54(param_5,0,2,0x19,0);
  *param_6 = fVar3 / fVar4;
  if (*(long *)(lVar1 + 0x28) != lStack_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00dfc55c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 auStack_5c [4];
  undefined1 local_58 [8];
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d50ef8();
  FUN_00d55794(uVar2,local_58,0);
  FUN_00dfc38c(param_1,uVar2,auStack_5c,&local_68);
  *param_2 = local_68;
  *(undefined4 *)(param_2 + 1) = local_60;
  fVar3 = (float)*param_2 - local_58._0_4_;
  fVar4 = (float)((ulong)*param_2 >> 0x20) - local_58._4_4_;
  local_50 = *(float *)(param_2 + 1) - local_50;
  *param_3 = CONCAT44(fVar4,fVar3);
  *(float *)(param_3 + 1) = local_50;
  if (((1.1920929e-07 <= ABS(local_50)) || (1.1920929e-07 <= ABS(fVar3))) ||
     (1.1920929e-07 <= ABS(fVar4))) {
    fVar4 = fVar3 * fVar3 + fVar4 * fVar4 + local_50 * local_50;
    fVar3 = SQRT(fVar4);
    if (NAN(fVar3)) {
      fVar3 = sqrtf(fVar4);
    }
    *param_3 = CONCAT44((float)((ulong)*param_3 >> 0x20) / fVar3,(float)*param_3 / fVar3);
    *(float *)(param_3 + 1) = *(float *)(param_3 + 1) / fVar3;
  }
  else {
    FUN_00d557c4(uVar2,param_3,&DAT_03218f68);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00dfc6a4(undefined8 param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d59f54(param_2,0,2,0x19,0);
  *param_3 = fVar1 - DAT_02befc88;
  return;
}




void FUN_00dfc6e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00d55794(param_2,param_4,0);
  return;
}




void FUN_00dfc6f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  uVar2 = NEON_fmov(0x40b00000,4);
  *param_4 = CONCAT44(local_58._4_4_ * (float)((ulong)uVar2 >> 0x20) + local_48._4_4_,
                      local_58._0_4_ * (float)uVar2 + local_48._0_4_);
  *(float *)(param_4 + 1) = local_50 * 5.5 + local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dfc79c(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d5048c();
  uVar2 = FUN_00d59f54(uVar1,0,5,0x19,0);
  *param_3 = uVar2;
  *param_4 = 2;
  *param_5 = 0;
  return;
}




void FUN_00dfc7f0(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [64];
  undefined4 local_58;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_a8);
  FUN_00cfa6cc(auStack_a8);
  uVar2 = FUN_00cfb05c(auStack_a8);
  FUN_00cf7b3c(uVar2,1);
  uVar2 = FUN_00cfa9e4(auStack_a8);
  FUN_00cf3048(uVar2,"Ability01",0,1,0,"AttackToIdleCombat");
  plVar3 = (long *)FUN_00cfb1c4(auStack_a8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"*LanceBall_Lance_A_LandingIndicator*",0);
  (**(code **)(*plVar3 + 0x20))(plVar3,FUN_00dfc55c);
  plVar3 = (long *)FUN_00cfab04(auStack_a8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_LanceBall_Lance_A_Cast");
  plVar3 = (long *)FUN_00cfab04(auStack_a8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"Bone_Weapon");
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_LanceBall_Lance_A_Weapon");
  plVar3 = (long *)FUN_00cfac24(auStack_a8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_LanceBall_Lance_Ability_A");
  lVar4 = FUN_00d09310();
  FUN_00d0a304(*(undefined4 *)(lVar4 + 0x51c));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  FUN_00cf98bc(auStack_a8);
  uVar2 = FUN_00cf9c1c(auStack_a8);
  FUN_00cf816c(uVar2,thunk_FUN_00dfc38c,1,0);
  FUN_00cf9eec(auStack_a8);
  uVar5 = FUN_00ceab48();
  uVar2 = FUN_00cfa294(auStack_a8);
  if ((uVar5 & 1) == 0) {
    FUN_00cf7570(uVar2,FUN_00dfc6a4);
    plVar3 = (long *)FUN_00cfac24(auStack_a8);
    plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_LanceBall_Lance_Ability_A_Hit");
    lVar4 = FUN_00d09310();
    FUN_00d0a304(*(undefined4 *)(lVar4 + 0x51c));
    (**(code **)(*plVar3 + 0x28))(plVar3);
    uVar2 = FUN_00cfa294(auStack_a8);
    FUN_00cf7478(DAT_02befc88);
  }
  else {
    FUN_00cf7580(uVar2,FUN_00dfc544);
  }
  FUN_00cf7578(uVar2,0);
  plVar3 = (long *)FUN_00cfab04(auStack_a8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_LanceBall_Lance_A_Impact");
  uVar2 = FUN_00cfa294(auStack_a8);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar2,0);
  FUN_00cfb56c(auStack_a8);
  FUN_00d4d9e8(auStack_98);
  FUN_00d4dabc(auStack_98,0x40000);
  FUN_00d4dacc(auStack_98,0x100000);
  FUN_00d4daf4(auStack_98,0,1,0,0);
  FUN_00d4dcdc(auStack_98,1);
  local_58 = 0x3f266666;
  uVar2 = FUN_00cfaf3c(auStack_a8);
  uVar2 = FUN_00cf5ac8(0x3f800000,uVar2,FUN_00dfc6e8,FUN_00dfc6f8);
  FUN_00cf5ae0(uVar2,auStack_98);
  uVar2 = FUN_00cfa00c(auStack_a8);
  FUN_00cf6bb0(uVar2,FUN_00dfc79c);
  lVar4 = FUN_00cf9f7c(auStack_a8);
  lVar6 = FUN_00da1124(lVar4 + 0x10);
  lVar4 = lVar4 + 200;
  *(undefined4 *)(lVar6 + 0x18) = 0;
  *(undefined4 *)(lVar6 + 8) = 0;
  *(undefined4 *)(lVar6 + 0x10) = 1;
  FUN_00cf9eec(lVar4);
  FUN_00cf98bc(lVar4);
  uVar2 = FUN_00cf9ab4(lVar4);
  FUN_00cf456c(uVar2,PTR_s_Buff_LanceBall_Lance_A_Recovery_02bf17c0,FUN_00dfcbac,1,0);
  FUN_00cf9eec(auStack_a8);
  uVar2 = FUN_00cfa294(auStack_a8);
  FUN_00cf7580(uVar2,FUN_00dfcbc0);
  FUN_00cf7578(uVar2,0);
  lVar4 = FUN_00cfa6cc(auStack_a8);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cfb0a4(auStack_a8);
  uVar2 = FUN_00cfa324(auStack_a8);
  FUN_00cf868c(uVar2,"LanceBall_Lance_A_LandingIndicator");
  FUN_00cfb5c4(auStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dfcbac(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,4,0x19,0);
  return;
}




void FUN_00dfcbc0(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,3,0x19,0);
  return;
}




void FUN_00dfcbd4(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_c8 [16];
  code *local_b8;
  undefined4 local_b0;
  code *local_a8;
  undefined4 local_a0;
  undefined1 auStack_98 [64];
  undefined4 local_58;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_c8);
  FUN_00cfa6cc(auStack_c8);
  uVar2 = FUN_00cfb05c(auStack_c8);
  FUN_00cf7b3c(uVar2,2);
  uVar2 = FUN_00cfa9e4(auStack_c8);
  FUN_00cf3048(uVar2,"Ability02",0,1,0,"AttackToIdleCombat");
  plVar3 = (long *)FUN_00cfab04(auStack_c8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_LanceBall_Lance_B_Impact");
  plVar3 = (long *)FUN_00cfac24(auStack_c8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_LanceBall_Lance_Ability_B_Sweep");
  lVar4 = FUN_00d09310();
  FUN_00d0a304(*(undefined4 *)(lVar4 + 0x520));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar2 = FUN_00cfa294(auStack_c8);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  FUN_00d4d9e8(auStack_98);
  FUN_00d4daf4(auStack_98,0,1,0,0);
  FUN_00d4dabc(auStack_98,0x40000);
  FUN_00d4dba0(0x42b40000,auStack_98);
  FUN_00d4dcdc(auStack_98,1);
  local_58 = 0x3f266666;
  uVar2 = FUN_00cfaf84(auStack_c8);
  FUN_00cf5504(uVar2,auStack_98,0,FUN_00dfce5c,0,1,0);
  plVar3 = (long *)FUN_00cfa684(auStack_c8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  local_a8 = FUN_00dfce70;
  local_a0 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,&local_a8);
  local_b8 = FUN_00dfce84;
  local_b0 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x28))(plVar3,&local_b8);
  (**(code **)(*plVar3 + 0x80))();
  FUN_00cf9eec(auStack_c8);
  FUN_00cf9ea4(auStack_c8);
  uVar2 = FUN_00cfa294(auStack_c8);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,0);
  lVar4 = FUN_00cfa6cc(auStack_c8);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  uVar2 = FUN_00cfa294(auStack_c8);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfa9e4(auStack_c8);
  FUN_00cf3048(uVar2,"Idle",0,1,0,0);
  FUN_00cfb5c4(auStack_c8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dfce5c(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,1,0x19,0);
  return;
}




void FUN_00dfce70(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,2,0x19,0);
  return;
}




void FUN_00dfce84(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,3,0x19,0);
  return;
}




void FUN_00dfce98(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_48 [16];
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_48);
  FUN_00cf7b3c(uVar3,1);
  FUN_00cf9ea4(auStack_48);
  plVar4 = (long *)FUN_00cfaa2c(auStack_48);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"Ability03");
  (**(code **)(*plVar4 + 0x18))(plVar4,"AttackToIdleCombat");
  plVar4 = (long *)FUN_00cfab04(auStack_48);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))();
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_LanceBall_Lance_C_Roll");
  plVar4 = (long *)FUN_00cfac24(auStack_48);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_LanceBall_Lance_Ability_C");
  lVar2 = FUN_00d09310();
  FUN_00d0a304(*(undefined4 *)(lVar2 + 0x524));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  plVar4 = (long *)FUN_00cfa12c(auStack_48);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x88))();
  local_38 = FUN_00dfd024;
  local_30 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xa8))(plVar4,&local_38);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3f19999a);
  FUN_00cf7578(uVar3,0);
  FUN_00cfb56c(auStack_48);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

