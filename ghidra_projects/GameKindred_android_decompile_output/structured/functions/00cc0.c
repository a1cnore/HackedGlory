// functions/00cc0 — 26 functions
#include "libGameKindred.h"




void FUN_00cc0128(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00cbff60(param_1,param_3);
  return;
}




void FUN_00cc0130(void)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  byte local_88 [16];
  void *local_78;
  byte local_70 [16];
  void *local_60;
  ulong local_58 [2];
  void *local_48;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  FUN_0096c088(local_40);
  FUN_008fa54c(local_58,"[PLAYER_UUID]");
  lVar3 = FUN_009580b8();
  FUN_00937db8(local_40,local_58,lVar3 + 0x5508);
  if (((byte)local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  local_48 = (void *)0x0;
  FUN_009580b8();
  uVar4 = FUN_0095fdf0();
  FUN_00e70a24(uVar4,local_58);
  FUN_008fa54c(local_70,"[PLAYER_HANDLE]");
  FUN_00937db8(local_40,local_70,local_58);
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  FUN_008fa54c(local_70,"[LANGUAGE]");
  uVar4 = FUN_00939a50();
  FUN_008fa54c(local_88,uVar4);
  FUN_00937db8(local_40,local_70,local_88);
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  pvVar1 = (void *)((ulong)local_40 | 1);
  if ((local_40[0] & 1) != 0) {
    pvVar1 = local_30;
  }
  FUN_00aa25b0(pvVar1,1);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cc0288(long param_1)

{
  FUN_00b6e130(param_1 + 0x1d08,1);
  return;
}




void FUN_00cc0298(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 local_68;
  float local_60;
  float fStack_5c;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  FUN_00f00298(&fStack_5c,&local_60);
  FUN_00b07d08(fStack_5c + -200.0,local_60 + -100.0,param_1,0);
  local_68 = NEON_fmov(0x40a00000,4);
  FUN_00b0877c(param_1,&local_68);
  FUN_00b07b80(fStack_5c + -200.0,local_60 + -100.0,param_1);
  FUN_00f13f08(param_1 + 0x1d08);
  lVar1 = param_1 + 0x28560;
  lVar2 = param_1 + 0x28430;
  FUN_00f07b18(0x42400000,lVar1,3,lVar2,1);
  FUN_00f07b18(0,lVar1,5,lVar2,5);
  lVar3 = param_1 + 0x28690;
  FUN_00f07b18(0x42400000,lVar3,3,lVar1,1);
  FUN_00f07b18(0,lVar3,5,lVar1,5);
  FUN_00f07b18(0x42400000,param_1 + 0x287c0,3,lVar3,1);
  FUN_00f07b18(0,param_1 + 0x287c0,5,lVar3,5);
  FUN_00f07940(0,0,param_1 + 0x27d08,1,lVar2,1);
  FUN_00f07b18(0x41f00000,param_1 + 0x27d08,0,param_1 + 0x168,0);
  uVar5 = FUN_0093dbe8();
  *(uint *)(param_1 + 0x285e4) =
       *(uint *)(param_1 + 0x285e4) & 0xfffffff8 |
       *(uint *)(param_1 + 0x285e4) & 3 | (~uVar5 & 1) << 2;
  uVar5 = FUN_0093dbe8();
  *(uint *)(param_1 + 0x28714) =
       *(uint *)(param_1 + 0x28714) & 0xfffffff8 |
       *(uint *)(param_1 + 0x28714) & 3 | (~uVar5 & 1) << 2;
  uVar5 = FUN_0093dbe8();
  *(uint *)(param_1 + 0x28844) =
       *(uint *)(param_1 + 0x28844) & 0xfffffff8 |
       *(uint *)(param_1 + 0x28844) & 3 | (~uVar5 & 1) << 2;
  FUN_009580b8();
  uVar6 = FUN_0095fdf0();
  FUN_00f0d75c(lVar2,uVar6);
  FUN_00b0828c(param_1);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cc04e4(long *param_1)

{
  undefined8 uVar1;
  
  FUN_009580b8();
  uVar1 = FUN_0095fdf0();
  FUN_00f0d75c(param_1 + 0x5086,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00cc0528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x118))(param_1);
  return;
}




void FUN_00cc052c(long param_1)

{
  FUN_00cc04e4(param_1 + -0x1cf0);
  return;
}




void FUN_00cc053c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280bb68;
  param_1[0x39e] = &PTR_FUN_0280bca0;
  FUN_00f0d3a4(param_1 + 0x50f8);
  FUN_00f0d3a4(param_1 + 0x50d2);
  FUN_00f0d3a4(param_1 + 0x50ac);
  FUN_00f0d3a4(param_1 + 0x5086);
  FUN_00f01868(param_1 + 0x5075);
  param_1[0x4fa1] = &PTR_FUN_027d15d8;
  FUN_0099ccc4(param_1 + 0x506d);
  FUN_00f0d3a4(param_1 + 0x5046);
  FUN_00f0d3a4(param_1 + 0x5020);
  FUN_00f0d3a4(param_1 + 0x4ffa);
  param_1[0x4fdc] = &PTR_FUN_028266f0;
  param_1[0x4ff3] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4ff6);
  FUN_00f13d08(param_1 + 0x4fdc);
  param_1[0x4fb2] = &PTR_FUN_02826f38;
  param_1[0x4fc9] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x4fcc);
  FUN_00f13d08(param_1 + 0x4fb2);
  FUN_00f01868(param_1 + 0x4fa1);
  FUN_00b6dc90(param_1 + 0x3a1);
  FUN_00948d58(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  return;
}




void FUN_00cc06d4(void *param_1)

{
  FUN_00cc053c();
  operator_delete(param_1);
  return;
}




void FUN_00cc06f8(long param_1)

{
  FUN_00cc053c(param_1 + -0x1cf0);
  return;
}




void FUN_00cc0704(long param_1)

{
  FUN_00cc053c((void *)(param_1 + -0x1cf0));
  operator_delete((void *)(param_1 + -0x1cf0));
  return;
}




void FUN_00cc0730(long *param_1)

{
  undefined8 uVar1;
  
  FUN_00b06f74();
  *param_1 = (long)&PTR_FUN_0280c038;
  FUN_00bc7f64(param_1 + 0x39e);
  FUN_00b0780c(param_1,param_1[0x39f]);
  uVar1 = FUN_00e6ce7c("QUEST_BUTTON_QUESTS",0);
  FUN_00b078b8(param_1,uVar1);
  FUN_00b075b8(param_1,1);
  (**(code **)(*param_1 + 0x118))(param_1);
  FUN_00bc835c(param_1 + 0x39e);
  return;
}




void FUN_00cc07b8(undefined8 param_1)

{
  void *pvVar1;
  
  FUN_00a01758();
  pvVar1 = operator_new(0x1d50);
  FUN_00cc0730();
  FUN_00b07a8c(pvVar1,param_1);
  FUN_00aa18e0(pvVar1,0,1,0,1);
  return;
}




void FUN_00cc0808(long param_1)

{
  long lVar1;
  float fVar2;
  undefined8 local_48;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(&fStack_3c,&local_40);
  fVar2 = fStack_3c - 200.0;
  if (2300.0 <= fStack_3c - 200.0) {
    fVar2 = 2300.0;
  }
  FUN_00b07d08(fVar2,local_40 - 100.0,param_1,0);
  local_48 = NEON_fmov(0x40a00000,4);
  FUN_00b0877c(param_1,&local_48);
  FUN_00b07b80(fVar2,local_40 - 100.0,param_1);
  FUN_00f13f08(*(undefined8 *)(param_1 + 0x1cf8));
  FUN_00b0828c(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cc08dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280c038;
  FUN_00bc8028(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  return;
}




void FUN_00cc0918(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280c038;
  FUN_00bc8028(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00cc095c(long *param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  
  FUN_00b06f74();
  *param_1 = (long)&PTR_FUN_0280c168;
  param_1[0x39e] = (long)&PTR___cxa_pure_virtual_027ee7a0;
  pvVar1 = operator_new(0x5ae8);
  FUN_00c4af04();
  param_1[0x39f] = (long)pvVar1;
  *(long **)((long)pvVar1 + 0xb8) = param_1 + 0x39e;
  param_1[0x39e] = (long)&PTR_FUN_027ee770;
  memset(param_1 + 0x3a0,0,0x51);
  FUN_00b0780c(param_1,pvVar1);
  uVar2 = FUN_00e6ce7c("RETRIEVE_CREDENTIALS_TITLE",0);
  FUN_00b078b8(param_1,uVar2);
  FUN_00b075b8(param_1,0);
  FUN_00cc0a3c(param_1);
  (**(code **)(*param_1 + 0x118))(param_1);
  FUN_00b08788(param_1,0);
  return;
}




void FUN_00cc0a3c(long param_1)

{
  long lVar1;
  long local_58;
  long lStack_50;
  long local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x1d50) == '\0') {
    local_58 = 0;
    pcStack_40 = thunk_FUN_00cc0c14;
    lStack_50 = param_1;
    local_48 = param_1;
    FUN_00cc1240(param_1 + 0x1d10,&local_58);
    lStack_50 = 0;
    pcStack_40 = thunk_FUN_00cc0db4;
    local_58 = param_1;
    local_48 = param_1;
    FUN_009e4694(param_1 + 0x1d00,&local_58);
    *(char *)(param_1 + 0x1d50) = '\x01';
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cc0ae0(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1d58);
  FUN_00cc095c();
  FUN_00b07a8c(pvVar1,param_1);
  FUN_00aa18e0(pvVar1,"RetrieveCredentialsPopupNode",1,0,1);
  return;
}




void FUN_00cc0b30(void)

{
  FUN_00aa1954("RetrieveCredentialsPopupNode");
  return;
}




void FUN_00cc0b3c(long param_1)

{
  long lVar1;
  float fVar2;
  undefined8 local_48;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(&fStack_3c,&local_40);
  fVar2 = fStack_3c - 200.0;
  if (2300.0 <= fStack_3c - 200.0) {
    fVar2 = 2300.0;
  }
  FUN_00b07d08(fVar2,local_40 - 100.0,param_1,0);
  local_48 = 0x4248000042480000;
  FUN_00b0877c(param_1,&local_48);
  FUN_00b07b80(fVar2,local_40 - 100.0,param_1);
  FUN_00f13f08(*(undefined8 *)(param_1 + 0x1cf8));
  FUN_00b0828c(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cc0c14(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  long local_58 [3];
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fce60(param_1 + 0x1d20);
  FUN_008fce60(param_1 + 0x1d38,param_2 + 0x18);
  FUN_00c4bcc0(*(undefined8 *)(param_1 + 0x1cf8),0);
  FUN_00e70510(&local_68);
  FUN_00e70510(&local_78);
  FUN_00e70510(&local_88);
  FUN_00e70510(&local_98);
  uVar2 = FUN_00e6ce7c("CONFIRM_NPL_LINK_TITLE",0);
  FUN_00910394(&local_68,uVar2);
  uVar2 = FUN_00e6ce7c("CONFIRM_NPL_LINK_DESCRIPTION",0);
  FUN_00910394(&local_78,uVar2);
  uVar2 = FUN_00e6ce7c("GENERIC_BUTTON_CONTINUE",0);
  FUN_00910394(&local_88,uVar2);
  uVar2 = FUN_00e6ce7c("MAIN_BUTTON_BACK",0);
  FUN_00910394(&local_98,uVar2);
  lVar3 = FUN_00cc2ad4(&local_68,&local_78,&local_88,&local_98);
  local_58[1] = 0;
  pcStack_40 = thunk_FUN_00cc0f34;
  local_58[0] = param_1;
  local_58[2] = param_1;
  FUN_009e4694(lVar3 + 0x1cf0,local_58);
  local_58[1] = 0;
  pcStack_40 = FUN_00cc1368;
  local_58[0] = param_1;
  local_58[2] = param_1;
  FUN_009e4694(lVar3 + 0x1d00,local_58);
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = 0;
    local_90 = (void *)0x0;
  }
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = 0;
    local_80 = (void *)0x0;
  }
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = 0;
    local_70 = (void *)0x0;
  }
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cc0db4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  long local_58 [3];
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00c4bcc0(*(undefined8 *)(param_1 + 0x1cf8),0);
  FUN_00e70510(&local_68);
  FUN_00e70510(&local_78);
  FUN_00e70510(&local_88);
  FUN_00e70510(&local_98);
  uVar2 = FUN_00e6ce7c("CONFIRM_NPL_LINK_TITLE",0);
  FUN_00910394(&local_68,uVar2);
  uVar2 = FUN_00e6ce7c("DECLINE_NPL_LINK_DESCRIPTION",0);
  FUN_00910394(&local_78,uVar2);
  uVar2 = FUN_00e6ce7c("GENERIC_BUTTON_CONTINUE",0);
  FUN_00910394(&local_88,uVar2);
  uVar2 = FUN_00e6ce7c("MAIN_BUTTON_BACK",0);
  FUN_00910394(&local_98,uVar2);
  lVar3 = FUN_00cc2ad4(&local_68,&local_78,&local_88,&local_98);
  local_58[1] = 0;
  pcStack_40 = thunk_FUN_00cc100c;
  local_58[0] = param_1;
  local_58[2] = param_1;
  FUN_009e4694(lVar3 + 0x1cf0,local_58);
  local_58[1] = 0;
  pcStack_40 = FUN_00cc1368;
  local_58[0] = param_1;
  local_58[2] = param_1;
  FUN_009e4694(lVar3 + 0x1d00,local_58);
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = 0;
    local_90 = (void *)0x0;
  }
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = 0;
    local_80 = (void *)0x0;
  }
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = 0;
    local_70 = (void *)0x0;
  }
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cc0f34(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  byte local_68 [16];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a09558();
  if ((*(byte *)(param_1 + 0x1d20) & 1) == 0) {
    lVar3 = param_1 + 0x1d21;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x1d30);
  }
  FUN_008fa54c(local_50,lVar3);
  if ((*(byte *)(param_1 + 0x1d38) & 1) == 0) {
    lVar3 = param_1 + 0x1d39;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x1d48);
  }
  FUN_008fa54c(local_68,lVar3);
  FUN_00a09850(uVar2,local_50,local_68);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_00c4bcc0(*(undefined8 *)(param_1 + 0x1cf8),0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00cc0c14(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_98;
  void *pvStack_90;
  undefined8 uStack_88;
  void *pvStack_80;
  undefined8 uStack_78;
  void *pvStack_70;
  undefined8 uStack_68;
  void *pvStack_60;
  long alStack_58 [3];
  code *pcStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  FUN_008fce60(param_1 + 0x1d20);
  FUN_008fce60(param_1 + 0x1d38,param_2 + 0x18);
  FUN_00c4bcc0(*(undefined8 *)(param_1 + 0x1cf8),0);
  FUN_00e70510(&uStack_68);
  FUN_00e70510(&uStack_78);
  FUN_00e70510(&uStack_88);
  FUN_00e70510(&uStack_98);
  uVar2 = FUN_00e6ce7c("CONFIRM_NPL_LINK_TITLE",0);
  FUN_00910394(&uStack_68,uVar2);
  uVar2 = FUN_00e6ce7c("CONFIRM_NPL_LINK_DESCRIPTION",0);
  FUN_00910394(&uStack_78,uVar2);
  uVar2 = FUN_00e6ce7c("GENERIC_BUTTON_CONTINUE",0);
  FUN_00910394(&uStack_88,uVar2);
  uVar2 = FUN_00e6ce7c("MAIN_BUTTON_BACK",0);
  FUN_00910394(&uStack_98,uVar2);
  lVar3 = FUN_00cc2ad4(&uStack_68,&uStack_78,&uStack_88,&uStack_98);
  alStack_58[1] = 0;
  pcStack_40 = thunk_FUN_00cc0f34;
  alStack_58[0] = param_1;
  alStack_58[2] = param_1;
  FUN_009e4694(lVar3 + 0x1cf0,alStack_58);
  alStack_58[1] = 0;
  pcStack_40 = FUN_00cc1368;
  alStack_58[0] = param_1;
  alStack_58[2] = param_1;
  FUN_009e4694(lVar3 + 0x1d00,alStack_58);
  if (pvStack_90 != (void *)0x0) {
    operator_delete__(pvStack_90);
    uStack_98 = 0;
    pvStack_90 = (void *)0x0;
  }
  if (pvStack_80 != (void *)0x0) {
    operator_delete__(pvStack_80);
    uStack_88 = 0;
    pvStack_80 = (void *)0x0;
  }
  if (pvStack_70 != (void *)0x0) {
    operator_delete__(pvStack_70);
    uStack_78 = 0;
    pvStack_70 = (void *)0x0;
  }
  if (pvStack_60 != (void *)0x0) {
    operator_delete__(pvStack_60);
    uStack_68 = 0;
    pvStack_60 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00cc0db4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_98;
  void *pvStack_90;
  undefined8 uStack_88;
  void *pvStack_80;
  undefined8 uStack_78;
  void *pvStack_70;
  undefined8 uStack_68;
  void *pvStack_60;
  long alStack_58 [3];
  code *pcStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  FUN_00c4bcc0(*(undefined8 *)(param_1 + 0x1cf8),0);
  FUN_00e70510(&uStack_68);
  FUN_00e70510(&uStack_78);
  FUN_00e70510(&uStack_88);
  FUN_00e70510(&uStack_98);
  uVar2 = FUN_00e6ce7c("CONFIRM_NPL_LINK_TITLE",0);
  FUN_00910394(&uStack_68,uVar2);
  uVar2 = FUN_00e6ce7c("DECLINE_NPL_LINK_DESCRIPTION",0);
  FUN_00910394(&uStack_78,uVar2);
  uVar2 = FUN_00e6ce7c("GENERIC_BUTTON_CONTINUE",0);
  FUN_00910394(&uStack_88,uVar2);
  uVar2 = FUN_00e6ce7c("MAIN_BUTTON_BACK",0);
  FUN_00910394(&uStack_98,uVar2);
  lVar3 = FUN_00cc2ad4(&uStack_68,&uStack_78,&uStack_88,&uStack_98);
  alStack_58[1] = 0;
  pcStack_40 = thunk_FUN_00cc100c;
  alStack_58[0] = param_1;
  alStack_58[2] = param_1;
  FUN_009e4694(lVar3 + 0x1cf0,alStack_58);
  alStack_58[1] = 0;
  pcStack_40 = FUN_00cc1368;
  alStack_58[0] = param_1;
  alStack_58[2] = param_1;
  FUN_009e4694(lVar3 + 0x1d00,alStack_58);
  if (pvStack_90 != (void *)0x0) {
    operator_delete__(pvStack_90);
    uStack_98 = 0;
    pvStack_90 = (void *)0x0;
  }
  if (pvStack_80 != (void *)0x0) {
    operator_delete__(pvStack_80);
    uStack_88 = 0;
    pvStack_80 = (void *)0x0;
  }
  if (pvStack_70 != (void *)0x0) {
    operator_delete__(pvStack_70);
    uStack_78 = 0;
    pvStack_70 = (void *)0x0;
  }
  if (pvStack_60 != (void *)0x0) {
    operator_delete__(pvStack_60);
    uStack_68 = 0;
    pvStack_60 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00cc0f34(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  byte abStack_68 [16];
  void *pvStack_58;
  byte abStack_50 [16];
  void *pvStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a09558();
  if ((*(byte *)(param_1 + 0x1d20) & 1) == 0) {
    lVar3 = param_1 + 0x1d21;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x1d30);
  }
  FUN_008fa54c(abStack_50,lVar3);
  if ((*(byte *)(param_1 + 0x1d38) & 1) == 0) {
    lVar3 = param_1 + 0x1d39;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x1d48);
  }
  FUN_008fa54c(abStack_68,lVar3);
  FUN_00a09850(uVar2,abStack_50,abStack_68);
  if ((abStack_68[0] & 1) != 0) {
    operator_delete(pvStack_58);
  }
  if ((abStack_50[0] & 1) != 0) {
    operator_delete(pvStack_40);
  }
  FUN_00c4bcc0(*(undefined8 *)(param_1 + 0x1cf8),0);
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

