// functions/00cba — 47 functions
#include "libGameKindred.h"




void thunk_FUN_00cbaca8(void)

{
  long lVar1;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  void *pvStack_98;
  byte bStack_88;
  void *pvStack_78;
  byte bStack_70;
  void *pvStack_60;
  byte bStack_48;
  void *pvStack_38;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  FUN_00aff894(auStack_b0);
  FUN_00c28a80(auStack_b0);
  FUN_00cbad48("MENU_PROFILE_GOVERNMENT_ID_POPUP",auStack_b0);
  if ((bStack_48 & 1) != 0) {
    operator_delete(pvStack_38);
  }
  if ((bStack_70 & 1) != 0) {
    operator_delete(pvStack_60);
  }
  if ((bStack_88 & 1) != 0) {
    operator_delete(pvStack_78);
  }
  if (pvStack_98 != (void *)0x0) {
    operator_delete__(pvStack_98);
    uStack_a0 = 0;
    pvStack_98 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00cbaca8(void)

{
  long lVar1;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  void *pvStack_98;
  byte bStack_88;
  void *pvStack_78;
  byte bStack_70;
  void *pvStack_60;
  byte bStack_48;
  void *pvStack_38;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  FUN_00aff894(auStack_b0);
  FUN_00c28a80(auStack_b0);
  FUN_00cbad48("MENU_PROFILE_GOVERNMENT_ID_POPUP",auStack_b0);
  if ((bStack_48 & 1) != 0) {
    operator_delete(pvStack_38);
  }
  if ((bStack_70 & 1) != 0) {
    operator_delete(pvStack_60);
  }
  if ((bStack_88 & 1) != 0) {
    operator_delete(pvStack_78);
  }
  if (pvStack_98 != (void *)0x0) {
    operator_delete__(pvStack_98);
    uStack_a0 = 0;
    pvStack_98 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00cba3e4(void)

{
  long lVar1;
  ulong uVar2;
  byte abStack_40 [16];
  void *pvStack_30;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00affa30();
  if ((uVar2 & 1) != 0) {
    FUN_008fa54c(abStack_40,"MENU_PROFILE_EARLY_OFFER_POPUP");
    FUN_00affa44(abStack_40);
    if ((abStack_40[0] & 1) != 0) {
      operator_delete(pvStack_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00cba3e4(void)

{
  long lVar1;
  ulong uVar2;
  byte abStack_40 [16];
  void *pvStack_30;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00affa30();
  if ((uVar2 & 1) != 0) {
    FUN_008fa54c(abStack_40,"MENU_PROFILE_EARLY_OFFER_POPUP");
    FUN_00affa44(abStack_40);
    if ((abStack_40[0] & 1) != 0) {
      operator_delete(pvStack_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cba020(long *param_1)

{
  undefined8 uVar1;
  
  FUN_00b06f74();
  *param_1 = (long)&PTR_FUN_02809ab8;
  FUN_00b79020(param_1 + 0x39e);
  FUN_00b0780c(param_1,param_1 + 0x39e);
  FUN_00b075b8(param_1,1);
  uVar1 = FUN_00e6ce7c("MAIN_MENU_ACADEMY",0);
  FUN_00b078b8(param_1,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00cba09c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x118))(param_1);
  return;
}




void FUN_00cba0a0(long param_1)

{
  long lVar1;
  float fVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 local_48;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(&fStack_3c,&local_40);
  uVar4 = (ulong)(uint)(local_40 - 100.0);
  fVar2 = fStack_3c - 200.0;
  if (2300.0 <= fStack_3c - 200.0) {
    fVar2 = 2300.0;
  }
  local_48 = 0x41200000;
  FUN_00b0877c(param_1,&local_48);
  uVar3 = FUN_00b07b80(fVar2,param_1);
  FUN_00b07b44(param_1);
  FUN_00b07d08(param_1,0);
  FUN_00b0828c(param_1);
  *(int *)(param_1 + 0x4954) = (int)uVar3;
  *(int *)(param_1 + 0x4958) = (int)uVar4;
  FUN_00f13f08(uVar3,uVar4,param_1 + 0x1cf0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cba19c(long param_1)

{
  thunk_FUN_00b07e7c();
  FUN_00b79418(param_1 + 0x1cf0,1);
  return;
}




void FUN_00cba1c8(long param_1)

{
  thunk_FUN_00b07fec();
  FUN_00b79418(param_1 + 0x1cf0,0);
  return;
}




void FUN_00cba1f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02809ab8;
  FUN_00b79104(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  return;
}




void FUN_00cba230(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02809ab8;
  FUN_00b79104(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00cba274(long param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x378) != 0)) {
    uVar1 = FUN_009b8d9c();
    return uVar1;
  }
  return 0;
}




void FUN_00cba28c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  void *local_98;
  byte local_88;
  void *local_78;
  byte local_70;
  void *local_60;
  byte local_48;
  void *local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00aff894(auStack_b0);
  FUN_00c25dbc(auStack_b0,param_1);
  plVar2 = (long *)FUN_00cba344("MENU_PROFILE_EARLY_OFFER_POPUP",auStack_b0);
  (**(code **)(*plVar2 + 0x148))(plVar2,param_1);
  if ((local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
    local_a0 = 0;
    local_98 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cba344(undefined8 param_1,long param_2)

{
  long lVar1;
  void *pvVar2;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_50,param_1);
  FUN_008fce60(param_2 + 0x68,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  pvVar2 = operator_new(0xd8);
  FUN_00cba454();
  *(void **)(param_2 + 0x80) = pvVar2;
  FUN_00affc48(DAT_03139948,param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(param_2 + 0x80));
}




void FUN_00cba3e4(void)

{
  long lVar1;
  ulong uVar2;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00affa30();
  if ((uVar2 & 1) != 0) {
    FUN_008fa54c(local_40,"MENU_PROFILE_EARLY_OFFER_POPUP");
    FUN_00affa44(local_40);
    if ((local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cba454(long *param_1)

{
  FUN_00aff644();
  *param_1 = (long)&PTR_FUN_02809be8;
  FUN_00bcf178(param_1 + 0x17);
                    /* WARNING: Could not recover jumptable at 0x00cba49c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x18],1);
  return;
}




void FUN_00cba4a0(long param_1)

{
  FUN_00bcf260(param_1 + 0xb8);
  return;
}




void FUN_00cba4a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_00aff684();
  FUN_00f13f08(param_1,param_2,*(undefined8 *)(param_3 + 0xc0));
  return;
}




void FUN_00cba4e4(long param_1)

{
  FUN_00c25f58(*(undefined8 *)(param_1 + 0xc0));
  return;
}




void FUN_00cba4ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02809be8;
  FUN_00bcf1d0(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00cba520(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02809be8;
  FUN_00bcf1d0(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void * FUN_00cba55c(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1db8);
  FUN_00cba5b0();
  FUN_00b07a80(*param_1,param_1[1],pvVar1);
  FUN_00aa18e0(pvVar1,0,1,0,1);
  return pvVar1;
}




void FUN_00cba5b0(long *param_1)

{
  undefined8 uVar1;
  
  FUN_00b06f74();
  *param_1 = (long)&PTR_FUN_02809d48;
  FUN_00bde520(param_1 + 0x39e);
  *(undefined4 *)(param_1 + 0x39d) = 0x3f333333;
  FUN_00b0780c(param_1,param_1[0x39f]);
  uVar1 = FUN_00e6ce7c("MENU_GENERIC_FREE_CHESTS",0);
  FUN_00b078b8(param_1,uVar1);
  FUN_00b075b8(param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00cba634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x118))(param_1);
  return;
}




void FUN_00cba638(long param_1)

{
  long lVar1;
  byte local_5e8 [16];
  void *local_5d8;
  undefined8 local_5d0 [117];
  undefined1 auStack_228 [348];
  undefined4 local_cc;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_5d0[0] = 0;
  FUN_00b0877c(param_1,local_5d0);
  FUN_00b07b44(0x44dac000,0x446d8000,param_1);
  FUN_00b07d08(param_1,0);
  FUN_00b0828c(param_1);
  FUN_0097374c(local_5d0);
  local_cc = 6;
  FUN_008fa54c(local_5e8,"market_chest");
  FUN_008fce60(auStack_228,local_5e8);
  if ((local_5e8[0] & 1) != 0) {
    operator_delete(local_5d8);
  }
  FUN_008fa54c(local_5e8,&DAT_01e277f2);
  FUN_00bcf3f4(param_1 + 0x1d00,local_5e8,local_5d0,0,0);
  if ((local_5e8[0] & 1) != 0) {
    operator_delete(local_5d8);
  }
  FUN_00f07a18(0xc2200000,0x44228000,*(undefined8 *)(param_1 + 0x1cf8),0);
  FUN_00973e08(local_5d0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cba760(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02809d48;
  FUN_00bde61c(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  return;
}




void FUN_00cba79c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02809d48;
  FUN_00bde61c(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00cba7e0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *local_58;
  long *plStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00b06f74();
  *param_1 = (long)&PTR_FUN_02809e78;
  FUN_00bcf6d4(param_1 + 0x39e);
  FUN_00b0780c(param_1,param_1[0x39f]);
  uVar2 = FUN_00e6ce7c("QUEST_BUTTON_FREE",0);
  FUN_00b078b8(param_1,uVar2);
  FUN_00b075b8(param_1,1);
  (**(code **)(*param_1 + 0x118))(param_1);
  local_30 = FUN_00f048a4("UI::EVENT_CLOSE_FREEPOPUPNODE");
  local_58 = thunk_FUN_00b07af8;
  local_40 = 0;
  uStack_38 = 0;
  local_48 = 0;
  plStack_50 = param_1;
  FUN_009693a0(param_1 + 1,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cba8bc(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1d30);
  FUN_00cba7e0();
  FUN_00b07a8c(pvVar1,param_1);
  FUN_00aa18e0(pvVar1,0,1,0,1);
  return;
}




void FUN_00cba908(long param_1)

{
  long lVar1;
  undefined8 local_48;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(auStack_3c,auStack_40);
  FUN_00b07b44(0x44b68000,0x44390000,param_1);
  FUN_00b07d08(param_1,0);
  local_48 = NEON_fmov(0x40a00000,4);
  FUN_00b0877c(param_1,&local_48);
  FUN_00f13f08(0x44b68000,0x44390000,*(undefined8 *)(param_1 + 0x1cf8));
  FUN_00b0828c(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cba9bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02809e78;
  FUN_00bcf798(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  return;
}




void FUN_00cba9f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02809e78;
  FUN_00bcf798(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00cbaa3c(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1d50);
  FUN_00cbaa98();
  FUN_00b07a80(*param_1,param_1[1],pvVar1);
  FUN_00aa18e0(pvVar1,"CREATE_GUILD",1,0,1);
  return;
}




void FUN_00cbaa8c(void)

{
  FUN_00aa1954("CREATE_GUILD");
  return;
}




void FUN_00cbaa98(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *local_58;
  long *plStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00b06f74();
  *param_1 = (long)&PTR_FUN_02809fa8;
  FUN_00bc93fc(param_1 + 0x39e);
  FUN_00b0780c(param_1,param_1[0x39f]);
  local_30 = DAT_0313b138;
  local_58 = thunk_FUN_00b07af8;
  local_40 = 0;
  uStack_38 = 0;
  local_48 = 0;
  plStack_50 = param_1;
  FUN_009693a0(param_1 + 1,&local_58);
  uVar2 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_TITLE",0);
  FUN_00b078b8(param_1,uVar2);
  (**(code **)(*param_1 + 0x118))(param_1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cbab68(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  undefined8 local_48;
  float local_40;
  undefined1 auStack_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(auStack_3c,&local_40);
  local_48 = 0;
  FUN_00b0877c(param_1,&local_48);
  fVar3 = local_40 + -100.0;
  uVar2 = FUN_00b07b80(0x44c80000,param_1);
  local_48 = CONCAT44(fVar3,uVar2);
  FUN_00f13f18(*(undefined8 *)(param_1 + 0x1cf8),&local_48);
  FUN_00b07d08(0x44c80000,local_40 + -100.0,param_1,0);
  FUN_00b0828c(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cbac28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02809fa8;
  FUN_00bc9730(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  return;
}




void FUN_00cbac64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02809fa8;
  FUN_00bc9730(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00cbaca8(void)

{
  long lVar1;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  void *local_98;
  byte local_88;
  void *local_78;
  byte local_70;
  void *local_60;
  byte local_48;
  void *local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00aff894(auStack_b0);
  FUN_00c28a80(auStack_b0);
  FUN_00cbad48("MENU_PROFILE_GOVERNMENT_ID_POPUP",auStack_b0);
  if ((local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
    local_a0 = 0;
    local_98 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cbad48(undefined8 param_1,long param_2)

{
  long lVar1;
  void *pvVar2;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_50,param_1);
  FUN_008fce60(param_2 + 0x68,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  pvVar2 = operator_new(200);
  FUN_00cbae58();
  *(void **)(param_2 + 0x80) = pvVar2;
  FUN_00affc48(DAT_03139948,param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(param_2 + 0x80));
}




void FUN_00cbade8(void)

{
  long lVar1;
  ulong uVar2;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00affa30();
  if ((uVar2 & 1) != 0) {
    FUN_008fa54c(local_40,"MENU_PROFILE_GOVERNMENT_ID_POPUP");
    FUN_00affa44(local_40);
    if ((local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cbae58(long *param_1)

{
  FUN_00aff644();
  *param_1 = (long)&PTR_FUN_0280a0d8;
  FUN_00bcfc60(param_1 + 0x17);
                    /* WARNING: Could not recover jumptable at 0x00cbaea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x18],1);
  return;
}




void FUN_00cbaea4(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_00aff684();
  FUN_00f13f08(param_1,param_2,*(undefined8 *)(param_3 + 0xc0));
  return;
}




void FUN_00cbaee0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00cbaeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xc0) + 0x138))();
  return;
}




void FUN_00cbaef0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280a0d8;
  FUN_00bcfcb4(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00cbaf24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280a0d8;
  FUN_00bcfcb4(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00cbaf60(undefined8 param_1,undefined4 *param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x13070);
  FUN_00cbafd0(pvVar1,param_1);
  FUN_00b07a80(*param_2,param_2[1],pvVar1);
  FUN_00aa18e0(pvVar1,"GUILD_FILTER",1,0,1);
  return;
}




void FUN_00cbafc4(void)

{
  FUN_00aa1954("GUILD_FILTER");
  return;
}




void FUN_00cbafd0(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  code *local_78;
  long *plStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00b06f74();
  *param_1 = (long)&PTR_FUN_0280a230;
  FUN_00c29168(param_1 + 0x39e,param_2);
  FUN_00b0780c(param_1,param_1 + 0x39e);
  local_50 = DAT_0313b2b4;
  local_78 = thunk_FUN_00b07af8;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(param_1 + 1,&local_78);
  uVar2 = FUN_00e6ce7c("MENU_GUILD_SEARCH_FILTER_POPUP_TITLE",0);
  FUN_00b078b8(param_1,uVar2);
  FUN_00b075b8(param_1,1);
  (**(code **)(*param_1 + 0x118))(param_1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

