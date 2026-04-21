// functions/00cd2 — 25 functions
#include "libGameKindred.h"




void FUN_00cd2170(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00cd7228(param_1 + 0x5c48);
  if ((*(long *)(param_1 + 0x5e00) < lVar1) && (0 < *(long *)(param_1 + 0x5e00))) {
    FUN_00cd5fd0();
  }
  else {
    FUN_00b252ec(param_1 + 0x3708);
  }
  uVar2 = FUN_00cd7228(param_1 + 0x5c48);
  *(undefined8 *)(param_1 + 0x5e00) = uVar2;
  return;
}




void FUN_00cd21d0(undefined1 param_1 [16],float param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [4];
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  FUN_00cd127c();
  FUN_00f00298(auStack_74,auStack_78);
  fVar5 = *(float *)(param_3 + 0x4e6c);
  FUN_00f01c20(param_3 + 0xf88);
  fVar5 = fVar5 + param_2 * -0.5 + -160.0 + 40.0;
  if ((*(float *)(param_3 + 0x3568) != 0.0) || (*(float *)(param_3 + 0x356c) != fVar5)) {
    *(undefined4 *)(param_3 + 0x3568) = 0;
    *(float *)(param_3 + 0x356c) = fVar5;
    FUN_0091ada4(param_3 + 0x3528);
  }
  local_70 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_3 + 0x3528) + 0x28))(param_3 + 0x3528,&local_70);
  fVar4 = -50.0;
  fVar5 = (float)*(undefined8 *)(param_3 + 0x3568) + -50.0;
  fVar3 = (float)((ulong)*(undefined8 *)(param_3 + 0x3568) >> 0x20) + -80.0;
  if ((*(float *)(param_3 + 0x3658) != fVar5) ||
     (fVar4 = *(float *)(param_3 + 0x365c), fVar4 != fVar3)) {
    *(ulong *)(param_3 + 0x3658) = CONCAT44(fVar3,fVar5);
    FUN_0091ada4(param_3 + 0x3618);
  }
  fVar5 = *(float *)(param_3 + 0x4e6c);
  plVar1 = (long *)(param_3 + 0x588);
  FUN_00f01c20(param_3 + 0xf88);
  fVar5 = fVar5 + fVar4 * -0.5 + -160.0 + 40.0;
  if ((*(float *)(param_3 + 0x5c8) != 30.0) || (*(float *)(param_3 + 0x5cc) != fVar5)) {
    *(undefined4 *)(param_3 + 0x5c8) = 0x41f00000;
    *(float *)(param_3 + 0x5cc) = fVar5;
    FUN_0091ada4(plVar1);
  }
  local_70 = 0x3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_70);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cd2374(void)

{
  FUN_00cd6960(0);
  return;
}




void FUN_00cd237c(long param_1)

{
  undefined8 uVar1;
  
  FUN_008fce60(param_1 + 24000,&DAT_0313df98);
  uVar1 = FUN_00e6ce7c("MENU_PROFILE_ASCENSION_DAILY_REWARD_TITLE",0);
  FUN_00910394(param_1 + 0x5d68,uVar1);
  *(undefined4 *)(param_1 + 0x5d98) = 0xffffffff;
  FUN_00f0d998(param_1 + 0x3708,1);
  FUN_00b3ee24(0x3ecccccd,param_1 + 0x588);
  FUN_00f0e578(param_1 + 0x3618,"chest_battered_closed");
  uVar1 = FUN_00e6ce7c("MENU_MARKET_DAILY_CHEST_TIMER",0);
  FUN_00b252ac(param_1 + 0x3708,uVar1,1,0);
  uVar1 = FUN_00e6ce7c("GENERIC_DIALOG_OPEN",0);
  FUN_00ab7498(param_1 + 0xf88,uVar1);
  return;
}




void FUN_00cd2458(long param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00cd70a4(param_1 + 0x5c48);
  FUN_00cd698c(uVar1 & 1);
  return;
}




void FUN_00cd2478(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_DISPLAY_PROGRESSIVE_REWARD_CHEST_INFO");
  FUN_00f048e0(auStack_48,uVar2,param_1 + 24000);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cd24ec(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  void *pvVar5;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined8 local_88 [2];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  long local_58 [3];
  
  lVar2 = tpidr_el0;
  local_58[2] = *(long *)(lVar2 + 0x28);
  FUN_008fce60(param_1 + 24000,&DAT_0313dfb0);
  FUN_008fce60(param_1 + 0x5dd8,&DAT_031339f8);
  uVar3 = FUN_00e6ce7c("MENU_MARKET_MYSTERY_TITLE",0);
  FUN_00910394(param_1 + 0x5d68,uVar3);
  uVar3 = FUN_00e6ce7c("MENU_PROGRESSIVE_REWARD_RARE_CHEST_TITLE",0);
  FUN_00910394(param_1 + 0x5d88,uVar3);
  uVar3 = FUN_00e6ce7c("MENU_MARKET_MYSTERY_CHEST_BASIC_INFO_TITLE",0);
  FUN_00910394(param_1 + 0x5d78,uVar3);
  *(undefined4 *)(param_1 + 0x5d98) = 0xffe19400;
  uVar3 = FUN_00e6ce7c("MENU_MARKET_MYSTERY_CHEST_BASIC_INFO_DESC_1",0);
  thunk_FUN_00e7051c(auStack_78,uVar3);
  uVar3 = FUN_00e6ce7c("MENU_MARKET_MYSTERY_CHEST_BASIC_INFO_DESC_2",0);
  thunk_FUN_00e7051c(auStack_68,uVar3);
  uVar3 = FUN_00e6ce7c("MENU_MARKET_MYSTERY_CHEST_BASIC_INFO_DESC_3",0);
  thunk_FUN_00e7051c(local_58,uVar3);
  uVar3 = FUN_00e6ce7c("MENU_PROFILE_ASCENSION_SEASON_CHEST_PRIMARY_1",0);
  thunk_FUN_00e7051c(auStack_a8,uVar3);
  uVar3 = FUN_00e6ce7c("MENU_PROFILE_ASCENSION_SEASON_CHEST_PRIMARY_2",0);
  thunk_FUN_00e7051c(auStack_98,uVar3);
  uVar3 = FUN_00e6ce7c("MENU_PROFILE_ASCENSION_SEASON_CHEST_PRIMARY_3",0);
  thunk_FUN_00e7051c(local_88,uVar3);
  lVar4 = FUN_00940ba4();
  uVar1 = *(uint *)(lVar4 + 8);
  if (1 < (int)uVar1) {
    uVar1 = 2;
  }
  uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  FUN_00910394(param_1 + 0x5da0,auStack_78 + (ulong)uVar1 * 0x10);
  FUN_00910394(param_1 + 0x5db0,auStack_a8 + (ulong)uVar1 * 0x10);
  lVar4 = 0;
  do {
    pvVar5 = *(void **)((long)local_88 + lVar4 + 8);
    if (pvVar5 != (void *)0x0) {
      operator_delete__(pvVar5);
      *(undefined8 *)((long)local_88 + lVar4) = 0;
      *(undefined8 *)((long)local_88 + lVar4 + 8) = 0;
    }
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != -0x30);
  lVar4 = 0;
  do {
    pvVar5 = *(void **)((long)local_58 + lVar4 + 8);
    if (pvVar5 != (void *)0x0) {
      operator_delete__(pvVar5);
      *(undefined8 *)((long)local_58 + lVar4) = 0;
      *(undefined8 *)((long)local_58 + lVar4 + 8) = 0;
    }
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != -0x30);
  if (*(long *)(lVar2 + 0x28) == local_58[2]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cd271c(long param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00cd70a4(param_1 + 0x5c48);
  FUN_00cd69b8(uVar1 & 1);
  return;
}




void FUN_00cd273c(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_DISPLAY_PROGRESSIVE_REWARD_CHEST_INFO");
  FUN_00f048e0(auStack_48,uVar2,param_1 + 24000);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cd27b0(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  void *pvVar5;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined8 local_88 [2];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  long local_58 [3];
  
  lVar2 = tpidr_el0;
  local_58[2] = *(long *)(lVar2 + 0x28);
  FUN_008fce60(param_1 + 24000,&DAT_0313dfc8);
  FUN_008fce60(param_1 + 0x5dd8,&DAT_03133a10);
  uVar3 = FUN_00e6ce7c("MENU_MARKET_MYSTERY_TITLE",0);
  FUN_00910394(param_1 + 0x5d68,uVar3);
  uVar3 = FUN_00e6ce7c("MENU_PROGRESSIVE_REWARD_EPIC_CHEST_TITLE",0);
  FUN_00910394(param_1 + 0x5d88,uVar3);
  uVar3 = FUN_00e6ce7c("MENU_MARKET_MYSTERY_CHEST_EPIC_INFO_TITLE",0);
  FUN_00910394(param_1 + 0x5d78,uVar3);
  *(undefined4 *)(param_1 + 0x5d98) = 0xffe550b2;
  uVar3 = FUN_00e6ce7c("MENU_MARKET_MYSTERY_CHEST_EPIC_INFO_DESC_1",0);
  thunk_FUN_00e7051c(auStack_78,uVar3);
  uVar3 = FUN_00e6ce7c("MENU_MARKET_MYSTERY_CHEST_EPIC_INFO_DESC_2",0);
  thunk_FUN_00e7051c(auStack_68,uVar3);
  uVar3 = FUN_00e6ce7c("MENU_MARKET_MYSTERY_CHEST_EPIC_INFO_DESC_3",0);
  thunk_FUN_00e7051c(local_58,uVar3);
  uVar3 = FUN_00e6ce7c("MENU_MARKET_EPIC_CHEST_PRIMARY_1",0);
  thunk_FUN_00e7051c(auStack_a8,uVar3);
  uVar3 = FUN_00e6ce7c("MENU_MARKET_EPIC_CHEST_PRIMARY_2",0);
  thunk_FUN_00e7051c(auStack_98,uVar3);
  uVar3 = FUN_00e6ce7c("MENU_MARKET_EPIC_CHEST_PRIMARY_3",0);
  thunk_FUN_00e7051c(local_88,uVar3);
  lVar4 = FUN_00940ba4();
  uVar1 = *(uint *)(lVar4 + 8);
  if (1 < (int)uVar1) {
    uVar1 = 2;
  }
  uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  FUN_00910394(param_1 + 0x5da0,auStack_78 + (ulong)uVar1 * 0x10);
  FUN_00910394(param_1 + 0x5db0,auStack_a8 + (ulong)uVar1 * 0x10);
  FUN_00b3ee24(0x3ef0a3d7,param_1 + 0x588);
  lVar4 = 0;
  do {
    pvVar5 = *(void **)((long)local_88 + lVar4 + 8);
    if (pvVar5 != (void *)0x0) {
      operator_delete__(pvVar5);
      *(undefined8 *)((long)local_88 + lVar4) = 0;
      *(undefined8 *)((long)local_88 + lVar4 + 8) = 0;
    }
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != -0x30);
  lVar4 = 0;
  do {
    pvVar5 = *(void **)((long)local_58 + lVar4 + 8);
    if (pvVar5 != (void *)0x0) {
      operator_delete__(pvVar5);
      *(undefined8 *)((long)local_58 + lVar4) = 0;
      *(undefined8 *)((long)local_58 + lVar4 + 8) = 0;
    }
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != -0x30);
  if (*(long *)(lVar2 + 0x28) == local_58[2]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cd29f0(void *param_1)

{
  FUN_00cd2a74();
  operator_delete(param_1);
  return;
}




void FUN_00cd2a14(long param_1)

{
  FUN_00cd6ff4(param_1 + 0x5c48);
  return;
}




bool FUN_00cd2a20(long param_1)

{
  return *(int *)(param_1 + 0x5df0) != 0;
}




void FUN_00cd2a38(void)

{
  return;
}




void FUN_00cd2a3c(void)

{
  return;
}




void FUN_00cd2a40(void)

{
  return;
}




void FUN_00cd2a44(void *param_1)

{
  FUN_00cd2a74();
  operator_delete(param_1);
  return;
}




void FUN_00cd2a68(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00cd2a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x128))();
  return;
}




void FUN_00cd2a74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280d4d0;
  FUN_008fefd4(param_1 + 0xbbe,1);
  FUN_00cd0dac(param_1 + 0xb89);
  param_1[0xab5] = &PTR_FUN_027d15d8;
  FUN_0099ccc4(param_1 + 0xb81);
  FUN_00f0d3a4(param_1 + 0xb5a);
  FUN_00f0d3a4(param_1 + 0xb34);
  FUN_00f0d3a4(param_1 + 0xb0e);
  param_1[0xaf0] = &PTR_FUN_028266f0;
  param_1[0xb07] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xb0a);
  FUN_00f13d08(param_1 + 0xaf0);
  param_1[0xac6] = &PTR_FUN_02826f38;
  param_1[0xadd] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0xae0);
  FUN_00f13d08(param_1 + 0xac6);
  FUN_00f01868(param_1 + 0xab5);
  param_1[0xa1a] = &PTR_FUN_027dd280;
  FUN_00f0d3a4(param_1 + 0xa8e);
  FUN_00f0d3a4(param_1 + 0xa68);
  FUN_00f13d08(param_1 + 0xa4f);
  param_1[0xa31] = &PTR_FUN_028266f0;
  param_1[0xa48] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa4b);
  FUN_00f13d08(param_1 + 0xa31);
  FUN_00f13d08(param_1 + 0xa1a);
  FUN_00afc0a4(param_1 + 0x9de);
  FUN_00f13d08(param_1 + 0x9c5);
  FUN_009c7fa8(param_1 + 0x70d);
  param_1[0x6e1] = &PTR_FUN_027d3cc8;
  param_1[0x6f8] = &PTR_FUN_027d3e40;
  if ((void *)param_1[0x70a] != (void *)0x0) {
    operator_delete__((void *)param_1[0x70a]);
    param_1[0x70a] = 0;
    param_1[0x709] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x6e1);
  param_1[0x6c3] = &PTR_FUN_028266f0;
  param_1[0x6da] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6dd);
  FUN_00f13d08(param_1 + 0x6c3);
  param_1[0x6a5] = &PTR_FUN_028266f0;
  param_1[0x6bc] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6bf);
  FUN_00f13d08(param_1 + 0x6a5);
  FUN_00f0d3a4(param_1 + 0x67f);
  param_1[0x660] = &PTR_FUN_028266f0;
  param_1[0x677] = &PTR_FUN_02826850;
  param_1[0x1f1] = &PTR_FUN_027d51f0;
  FUN_00f0a79c(param_1 + 0x67a);
  FUN_00f13d08(param_1 + 0x660);
  param_1[0x642] = &PTR_FUN_028266f0;
  param_1[0x659] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x65c);
  FUN_00f13d08(param_1 + 0x642);
  FUN_00f0d3a4(param_1 + 0x61c);
  param_1[0x5fe] = &PTR_FUN_028266f0;
  param_1[0x615] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x618);
  FUN_00f13d08(param_1 + 0x5fe);
  FUN_00f01868(param_1 + 0x5ed);
  param_1[0x5cf] = &PTR_FUN_028266f0;
  param_1[0x5e6] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x5e9);
  FUN_00f13d08(param_1 + 0x5cf);
  param_1[0x1f1] = &PTR_FUN_027d5058;
  FUN_00f13d08(param_1 + 0x598);
  FUN_00f01868(param_1 + 0x587);
  FUN_00f13d08(param_1 + 0x553);
  FUN_00f01868(param_1 + 0x542);
  FUN_00f0d3a4(param_1 + 0x51c);
  FUN_00f0d3a4(param_1 + 0x4f6);
  param_1[0x4d8] = &PTR_FUN_028266f0;
  param_1[0x4ef] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4f2);
  FUN_00f13d08(param_1 + 0x4d8);
  param_1[0x4ba] = &PTR_FUN_028266f0;
  param_1[0x4d1] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4d4);
  FUN_00f13d08(param_1 + 0x4ba);
  FUN_00f01868(param_1 + 0x4a9);
  FUN_009c7fa8(param_1 + 0x1f1);
  FUN_00b029f4(param_1 + 0xb1);
  param_1[0x85] = &PTR_FUN_027d3cc8;
  param_1[0x9c] = &PTR_FUN_027d3e40;
  if ((void *)param_1[0xae] != (void *)0x0) {
    operator_delete__((void *)param_1[0xae]);
    param_1[0xae] = 0;
    param_1[0xad] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x85);
  param_1[0x67] = &PTR_FUN_028266f0;
  param_1[0x7e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x81);
  FUN_00f13d08(param_1 + 0x67);
  FUN_00f13d08(param_1 + 0x50);
  FUN_00f0d3a4(param_1 + 0x2a);
  FUN_00f13d08(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00cd2e88(void *param_1)

{
  FUN_00cd2a74();
  operator_delete(param_1);
  return;
}




void FUN_00cd2eac(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00cd2eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x128))();
  return;
}




void FUN_00cd2eb8(long param_1)

{
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_008fa718(param_1 + 0x50);
  FUN_008fa718(param_1 + 0x98);
  FUN_0099ce88(param_1 + 0xe0);
  FUN_0099ce88(param_1 + 0x100);
  FUN_00cd6d6c(param_1);
  return;
}




void FUN_00cd2f04(long param_1)

{
  FUN_0099cedc(param_1 + 0x100);
  FUN_0099cedc(param_1 + 0xe0);
  if ((*(byte *)(param_1 + 0x98) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xa8));
  }
  if ((*(byte *)(param_1 + 0x50) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x60));
  }
  if (*(void **)(param_1 + 0x48) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x38));
  }
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x20));
  return;
}




void FUN_00cd2f88(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    FUN_00cd2ff4(param_1,*param_2);
    uVar1 = *param_2;
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 3;
      puVar2 = *(undefined8 **)(param_2 + 2);
      puVar3 = *(undefined8 **)(param_1 + 2);
      do {
        lVar4 = lVar4 + -8;
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (lVar4 != 0);
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_00cd2ff4(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar5;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}

