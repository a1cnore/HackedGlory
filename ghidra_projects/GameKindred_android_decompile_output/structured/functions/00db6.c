// functions/00db6 — 31 functions
#include "libGameKindred.h"




void FUN_00db6014(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_00d99344(param_2);
  if (lVar1 != 0) {
    FUN_00d99c88(lVar1,param_1 + 8,*(undefined4 *)(param_1 + 0xc));
    return;
  }
  return;
}




void FUN_00db6050(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db60c4(void)

{
  long lVar1;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00db611c(void)

{
  return 0x400;
}




void FUN_00db6124(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfad44(auStack_38);
  FUN_00cf2ec0(uVar2,FUN_00db611c);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db6188(void)

{
  FUN_00cfc038(PTR_s_Buff_Withdraw_02beb458);
  return;
}




void FUN_00db6198(void)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cf98bc(auStack_38);
  FUN_00cfb014(auStack_38);
  plVar2 = (long *)FUN_00cf9b44(auStack_38);
  (**(code **)(*plVar2 + 0x70))(plVar2,PTR_s_Buff_Emote_Dance_02beb468);
  FUN_00cf9eec(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db6220(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_48 [16];
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  lVar2 = FUN_00cf9f7c(auStack_48);
  lVar3 = FUN_00cf2970(lVar2 + 0x10);
  lVar2 = lVar2 + 0xb0;
  *(code **)(lVar3 + 8) = FUN_00cfc020;
  FUN_00cf98bc(lVar2);
  FUN_00cfb014(lVar2);
  plVar4 = (long *)FUN_00cf9b44(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,PTR_s_Buff_Emote_Taunt_02beb470);
  local_38[0] = 0x40000000;
  local_30 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_38);
  FUN_00cf9eec(lVar2);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db62ec(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"Die",0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3fee147b);
  FUN_00cf7578(uVar2,0);
  FUN_00cf98bc(auStack_48);
  plVar3 = (long *)FUN_00cf9c64(auStack_48);
  (**(code **)(*plVar3 + 0x58))(0x40000000);
  FUN_00cf9eec(auStack_48);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x40000000);
  FUN_00cf7578(uVar2,0);
  FUN_00cfa714(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db63e0(void)

{
  long lVar1;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cfa714(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db6438(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar2,"Die",0,1,0,0);
  uVar2 = FUN_00cfaa74(auStack_38);
  FUN_00cf32cc(0,uVar2,"Effect_Death",1,0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3fee147b);
  FUN_00cf7578(uVar2,0);
  FUN_00cfa714(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db6504(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfaa74(auStack_38);
  FUN_00cf32cc(0,uVar2,"Effect_MinionSpawn_L",1,0,1,0,0);
  uVar2 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar2,"Spawn",0,1,0,"AttackToIdle");
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db65b0(void)

{
  long lVar1;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cfa36c(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db6608(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 *param_5,undefined8 *param_6)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00d50ef8();
  FUN_00d55794(uVar3,auStack_48,0);
  uVar3 = FUN_00d50ef8(param_4);
  FUN_00d557c4(uVar3,&local_58,&DAT_03218f68);
  uVar2 = FUN_00ceb364();
  uVar2 = FUN_00d4c6b4(0x41700000,&DAT_02bebbe8,auStack_48,auStack_48,uVar2);
  *param_5 = uVar2;
  param_5[1] = param_2;
  param_5[2] = param_3;
  *(undefined4 *)(param_6 + 1) = local_50;
  *param_6 = local_58;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db66bc(void)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  plVar2 = (long *)FUN_00cfb1c4(auStack_38);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"*GlaiveTutorial*",0);
  (**(code **)(*plVar2 + 0x20))(plVar2,FUN_00db6608);
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db6748(void)

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
  FUN_00cf44e8(0x42700000,uVar2,PTR_s_Buff_Debug_Camera_02beb508,1,0);
  FUN_00cf9eec(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db67d0(undefined8 param_1,long param_2,float *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = *(long *)(param_2 + 0x40);
  fVar2 = (*(float *)(lVar1 + 0x1a0) + 1.0) *
          (*(float *)(lVar1 + 0x38) + *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0));
  if (DAT_031b0420 <= fVar2) {
    fVar2 = DAT_031b0420;
  }
  fVar3 = DAT_031b0360;
  if (DAT_031b0360 <= fVar2) {
    fVar3 = fVar2;
  }
  *param_3 = fVar3 * 0.33;
  *param_4 = 0;
  *param_5 = 0;
  return;
}




void FUN_00db6838(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_3 = 0;
  *(undefined4 *)(param_3 + 1) = 0x41f00000;
  return;
}




void FUN_00db6848(void)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  plVar2 = (long *)FUN_00cfb44c(auStack_38);
  (**(code **)(*plVar2 + 0x50))(plVar2,FUN_00db6838);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db68b4(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auStack_a8 [16];
  undefined4 local_98 [2];
  undefined4 local_90;
  undefined1 auStack_88 [96];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_a8);
  FUN_00d4d9e8(auStack_88);
  FUN_00d4daf4(auStack_88,1,1,1,0);
  FUN_00d4dabc(auStack_88,0x40000);
  uVar2 = FUN_00cfaf84(auStack_a8);
  FUN_00cf5460(0x41400000,uVar2,auStack_88,0,0,1,0);
  uVar2 = FUN_00cfa5ac(auStack_a8);
  local_98[0] = 0x4b189680;
  local_90 = 1;
  FUN_00cf6d54(uVar2,local_98);
  plVar3 = (long *)FUN_00cfa99c(auStack_a8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  local_98[0] = 0x49742400;
  local_90 = 1;
  (**(code **)(*plVar3 + 0x10))(plVar3,3,local_98);
  plVar3 = (long *)FUN_00cfa8c4(auStack_a8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,3);
  local_98[0] = 0;
  local_90 = 1;
  (**(code **)(*plVar3 + 0x20))(plVar3,local_98);
  plVar3 = (long *)FUN_00cfa8c4(auStack_a8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,4);
  local_98[0] = 0;
  local_90 = 1;
  (**(code **)(*plVar3 + 0x20))(plVar3,local_98);
  FUN_00cf9eec(auStack_a8);
  FUN_00cfb5c4(auStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db6a18(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cf98bc(auStack_38);
  uVar2 = FUN_00cfa00c(auStack_38);
  FUN_00cf6bb0(uVar2,FUN_00db67d0);
  FUN_00cf9eec(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db6a8c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [96];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_98);
  FUN_00d4d9e8(auStack_88);
  FUN_00d4daf4(auStack_88,1,0,0,0);
  FUN_00d4dabc(auStack_88,0x40000);
  uVar2 = FUN_00cfaf84(auStack_98);
  FUN_00cf5460(0x41400000,uVar2,auStack_88,0,0,1,0);
  uVar2 = FUN_00cfa00c(auStack_98);
  FUN_00cf6bb0(uVar2,FUN_00db67d0);
  FUN_00cf9eec(auStack_98);
  FUN_00cfb5c4(auStack_98);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db6b48(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cf9874(auStack_38);
  uVar2 = FUN_00cfa00c(auStack_38);
  FUN_00cf6bb0(uVar2,FUN_00db67d0);
  FUN_00cf9eec(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db6bbc(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [96];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_98);
  FUN_00d4d9e8(auStack_88);
  FUN_00d4dabc(auStack_88,0x10);
  FUN_00d4daf4(auStack_88,1,0,0,0);
  uVar2 = FUN_00cfaf84(auStack_98);
  FUN_00cf5460(0x447a0000,uVar2,auStack_88,0,0,1,0);
  uVar2 = FUN_00cfa00c(auStack_98);
  FUN_00cf6bb0(uVar2,FUN_00db67d0);
  FUN_00cf9eec(auStack_98);
  FUN_00cfb5c4(auStack_98);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db6c7c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [96];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_98);
  FUN_00d4d9e8(auStack_88);
  FUN_00d4daf4(auStack_88,1,0,0,0);
  FUN_00d4dabc(auStack_88,0x2000);
  uVar2 = FUN_00cfad8c(auStack_98);
  FUN_00cf60d0(uVar2,auStack_88,1);
  uVar2 = FUN_00cfa00c(auStack_98);
  FUN_00cf6bb0(uVar2,FUN_00db67d0);
  FUN_00cfb5c4(auStack_98);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db6d20(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [96];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_98);
  FUN_00d4d9e8(auStack_88);
  FUN_00d4daf4(auStack_88,1,0,0,0);
  FUN_00d4dabc(auStack_88,0x8000);
  FUN_00cf9eec(auStack_98);
  uVar2 = FUN_00cfad8c(auStack_98);
  FUN_00cf60d0(uVar2,auStack_88,1);
  uVar2 = FUN_00cf9d84(auStack_98);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Invulnerable_02beb400);
  uVar2 = FUN_00cfa00c(auStack_98);
  FUN_00cf6bb0(uVar2,FUN_00db67d0);
  FUN_00cfb5c4(auStack_98);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db6de4(void)

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
  FUN_00cf44e8(0x3f800000,uVar2,PTR_s_Buff_Stunned_02beb430,1,0);
  FUN_00cf9eec(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db6e68(void)

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
  FUN_00cf44e8(0x3f800000,uVar2,PTR_s_Buff_Stasis_02beb480,1,0);
  FUN_00cf9eec(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db6eec(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  *param_3 = 0x23;
  return;
}




void FUN_00db6ef8(void)

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
  uVar2 = FUN_00cf44e8(0x40400000,uVar2,PTR_s_Buff_Debug_CrowdControl_02beb518,1,0);
  FUN_00cf45cc(uVar2,FUN_00db6eec);
  FUN_00cf9eec(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db6f88(void)

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
  FUN_00cf44e8(0x41200000,uVar2,PTR_s_Buff_Slow_02beb440,1,0);
  FUN_00cf9eec(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

