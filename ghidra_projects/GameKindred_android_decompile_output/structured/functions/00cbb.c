// functions/00cbb — 29 functions
#include "libGameKindred.h"




void FUN_00cbb0cc(long param_1)

{
  long lVar1;
  undefined8 local_48;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(auStack_3c,auStack_40);
  FUN_00c29be8(param_1 + 0x1cf0);
  local_48 = 0;
  FUN_00b0877c(param_1,&local_48);
  FUN_00f13e54(param_1 + 0x1cf0);
  FUN_00b07b44(param_1);
  FUN_00b07d08(param_1,0);
  FUN_00b0828c(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cbb168(long *param_1)

{
  thunk_FUN_00b07e7c();
                    /* WARNING: Could not recover jumptable at 0x00cbb190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x118))(param_1);
  return;
}




void FUN_00cbb198(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280a230;
  FUN_00c2a1ec(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  return;
}




void FUN_00cbb1d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280a230;
  FUN_00c2a1ec(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00cbb218(undefined8 param_1,uint param_2)

{
  ulong uVar1;
  void *pvVar2;
  
  if ((DAT_0313d9a0 != (void *)0x0) && (uVar1 = FUN_00aa1934(DAT_0313d9a0), (uVar1 & 1) != 0)) {
    return;
  }
  pvVar2 = operator_new(0x67200);
  FUN_00cbb2b0(pvVar2,param_1,param_2 & 1);
  DAT_0313d9a0 = pvVar2;
  FUN_00aa18e0(pvVar2,0,1,0,1);
  return;
}




void FUN_00cbb29c(void)

{
  if (DAT_0313d9a0 != 0) {
    FUN_00aa1934();
    return;
  }
  return;
}




void FUN_00cbb2b0(long *param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  
  FUN_00b06f74();
  FUN_00948cd8(param_1 + 0x39e);
  plVar1 = param_1 + 0x3a1;
  *param_1 = (long)&PTR_FUN_0280a360;
  param_1[0x39e] = (long)&PTR_FUN_0280a498;
  FUN_00b48dbc(plVar1);
  plVar2 = param_1 + 0xcd91;
  FUN_00b15e58(plVar2,0);
  FUN_00b0780c(param_1,plVar2);
  FUN_00b0780c(param_1,plVar1);
  *(uint *)((long)param_1 + 0x1d8c) = *(uint *)((long)param_1 + 0x1d8c) & 0xfffffffb;
  FUN_00b4bc90(plVar1,param_3 & 1);
  FUN_00b16058(plVar2);
  (**(code **)(*param_1 + 0x118))(param_1);
  uVar3 = FUN_009580b8();
  FUN_0095e21c(uVar3,param_2,1);
  return;
}




void FUN_00cbb388(long param_1)

{
  long lVar1;
  undefined4 local_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(&fStack_3c,&local_40);
  fStack_44 = local_40 + -100.0;
  local_48 = FUN_00b07b80(fStack_3c + -200.0,param_1);
  FUN_00b07d08(fStack_3c + -200.0,local_40 + -100.0,param_1,0);
  FUN_00b0828c(param_1);
  FUN_00f07a18(0,0,param_1 + 0x66c88,8);
  param_1 = param_1 + 0x1d08;
  FUN_00f13f18(param_1,&local_48);
  FUN_00b4972c(param_1,1);
  FUN_00b4bb0c(param_1,1);
  FUN_00a9f780(param_1,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cbb480(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x1d08;
  FUN_00b4972c(lVar1,0);
  FUN_00b4bb0c(lVar1,0);
  FUN_00a9f780(lVar1,0);
  thunk_FUN_00b07fec(param_1);
  DAT_0313d9a0 = 0;
  return;
}




void FUN_00cbb4d8(long param_1)

{
  *(uint *)(param_1 + 0x1d8c) = *(uint *)(param_1 + 0x1d8c) | 4;
  FUN_00b4a0f0(param_1 + 0x1d08);
  *(uint *)(param_1 + 0x66d0c) = *(uint *)(param_1 + 0x66d0c) & 0xfffffffb;
  return;
}




void FUN_00cbb520(long param_1)

{
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 4;
  FUN_00b4a0f0(param_1 + 0x18);
  *(uint *)(param_1 + 0x6501c) = *(uint *)(param_1 + 0x6501c) & 0xfffffffb;
  return;
}




void FUN_00cbb564(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  param_1[0x39e] = &PTR_FUN_0280a498;
  *param_1 = &PTR_FUN_0280a360;
  param_1[0xcd91] = &PTR_FUN_027d47d0;
  lVar2 = -0x4b0;
  puVar1 = param_1 + 0xce20;
  do {
    *puVar1 = &PTR_FUN_028266f0;
    puVar1[0x17] = &PTR_FUN_02826850;
    FUN_00f0a79c(puVar1 + 0x1a);
    FUN_00f13d08(puVar1);
    lVar2 = lVar2 + 0xf0;
    puVar1 = puVar1 + -0x1e;
  } while (lVar2 != 0);
  FUN_00f13d08(param_1 + 0xcd91);
  FUN_00b49538(param_1 + 0x3a1);
  FUN_00948d58(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  return;
}




void FUN_00cbb630(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  param_1[0x39e] = &PTR_FUN_0280a498;
  *param_1 = &PTR_FUN_0280a360;
  param_1[0xcd91] = &PTR_FUN_027d47d0;
  lVar2 = -0x4b0;
  puVar1 = param_1 + 0xce20;
  do {
    *puVar1 = &PTR_FUN_028266f0;
    puVar1[0x17] = &PTR_FUN_02826850;
    FUN_00f0a79c(puVar1 + 0x1a);
    FUN_00f13d08(puVar1);
    lVar2 = lVar2 + 0xf0;
    puVar1 = puVar1 + -0x1e;
  } while (lVar2 != 0);
  FUN_00f13d08(param_1 + 0xcd91);
  FUN_00b49538(param_1 + 0x3a1);
  FUN_00948d58(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00cbb704(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  param_1[-0x39e] = &PTR_FUN_0280a360;
  *param_1 = &PTR_FUN_0280a498;
  param_1[0xc9f3] = &PTR_FUN_027d47d0;
  lVar2 = -0x4b0;
  puVar1 = param_1 + 0xca82;
  do {
    *puVar1 = &PTR_FUN_028266f0;
    puVar1[0x17] = &PTR_FUN_02826850;
    FUN_00f0a79c(puVar1 + 0x1a);
    FUN_00f13d08(puVar1);
    lVar2 = lVar2 + 0xf0;
    puVar1 = puVar1 + -0x1e;
  } while (lVar2 != 0);
  FUN_00f13d08(param_1 + 0xc9f3);
  FUN_00b49538(param_1 + 3);
  FUN_00948d58(param_1);
  FUN_00b08b68(param_1 + -0x39e);
  return;
}




void FUN_00cbb7d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar1 = param_1 + -0x39e;
  *puVar1 = &PTR_FUN_0280a360;
  *param_1 = &PTR_FUN_0280a498;
  param_1[0xc9f3] = &PTR_FUN_027d47d0;
  lVar3 = -0x4b0;
  puVar2 = param_1 + 0xca82;
  do {
    *puVar2 = &PTR_FUN_028266f0;
    puVar2[0x17] = &PTR_FUN_02826850;
    FUN_00f0a79c(puVar2 + 0x1a);
    FUN_00f13d08(puVar2);
    lVar3 = lVar3 + 0xf0;
    puVar2 = puVar2 + -0x1e;
  } while (lVar3 != 0);
  FUN_00f13d08(param_1 + 0xc9f3);
  FUN_00b49538(param_1 + 3);
  FUN_00948d58(param_1);
  FUN_00b08b68(puVar1);
  operator_delete(puVar1);
  return;
}




void FUN_00cbb8a4(undefined8 param_1)

{
  ulong uVar1;
  void *pvVar2;
  
  if ((DAT_0313d9a8 != (void *)0x0) && (uVar1 = FUN_00aa1934(DAT_0313d9a8), (uVar1 & 1) != 0)) {
    return;
  }
  pvVar2 = operator_new(0x1b9c8);
  FUN_00cbb934(pvVar2,param_1);
  DAT_0313d9a8 = pvVar2;
  FUN_00aa18e0(pvVar2,0,1,0,1);
  return;
}




void FUN_00cbb920(void)

{
  if (DAT_0313d9a8 != 0) {
    FUN_00aa1934();
    return;
  }
  return;
}




void FUN_00cbb934(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  FUN_00b06f74();
  FUN_00948cd8(param_1 + 0x39e);
  *param_1 = (long)&PTR_FUN_0280a830;
  param_1[0x39e] = (long)&PTR_FUN_0280a968;
  FUN_00b77b80(param_1 + 0x3a1);
  plVar1 = param_1 + 0x368a;
  FUN_00b15e58(plVar1,0);
  FUN_00b0780c(param_1,plVar1);
  FUN_00b0780c(param_1,param_1 + 0x3a1);
  *(uint *)((long)param_1 + 0x1d8c) = *(uint *)((long)param_1 + 0x1d8c) & 0xfffffffb;
  FUN_00b16058(plVar1);
  (**(code **)(*param_1 + 0x118))(param_1);
  uVar2 = FUN_009580b8();
  FUN_0095e34c(uVar2,param_2,1);
  return;
}




void FUN_00cbb9f4(long param_1)

{
  long lVar1;
  undefined4 local_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(&fStack_3c,&local_40);
  fStack_44 = local_40 + -100.0;
  local_48 = FUN_00b07b80(fStack_3c + -200.0,param_1);
  FUN_00b07d08(fStack_3c + -200.0,local_40 + -100.0,param_1,0);
  FUN_00b0828c(param_1);
  FUN_00f07a18(0,0,param_1 + 0x1b450,8);
  param_1 = param_1 + 0x1d08;
  FUN_00f13f18(param_1,&local_48);
  FUN_00b77fe4(param_1,1);
  FUN_00b78f1c(param_1,1);
  FUN_00b78f14(param_1,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cbbaec(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x1d08;
  FUN_00b77fe4(lVar1,0);
  FUN_00b78f1c(lVar1,0);
  FUN_00b78f14(lVar1,0);
  thunk_FUN_00b07fec(param_1);
  DAT_0313d9a8 = 0;
  return;
}




void FUN_00cbbb44(long param_1)

{
  *(uint *)(param_1 + 0x1d8c) = *(uint *)(param_1 + 0x1d8c) | 4;
  FUN_00b784ec(param_1 + 0x1d08);
  *(uint *)(param_1 + 0x1b4d4) = *(uint *)(param_1 + 0x1b4d4) & 0xfffffffb;
  return;
}




void FUN_00cbbb8c(long param_1)

{
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 4;
  FUN_00b784ec(param_1 + 0x18);
  *(uint *)(param_1 + 0x197e4) = *(uint *)(param_1 + 0x197e4) & 0xfffffffb;
  return;
}




void FUN_00cbbbd0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  param_1[0x39e] = &PTR_FUN_0280a968;
  *param_1 = &PTR_FUN_0280a830;
  param_1[0x368a] = &PTR_FUN_027d47d0;
  lVar2 = -0x4b0;
  puVar1 = param_1 + 0x3719;
  do {
    *puVar1 = &PTR_FUN_028266f0;
    puVar1[0x17] = &PTR_FUN_02826850;
    FUN_00f0a79c(puVar1 + 0x1a);
    FUN_00f13d08(puVar1);
    lVar2 = lVar2 + 0xf0;
    puVar1 = puVar1 + -0x1e;
  } while (lVar2 != 0);
  FUN_00f13d08(param_1 + 0x368a);
  FUN_00b77e80(param_1 + 0x3a1);
  FUN_00948d58(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  return;
}




void FUN_00cbbc9c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  param_1[0x39e] = &PTR_FUN_0280a968;
  *param_1 = &PTR_FUN_0280a830;
  param_1[0x368a] = &PTR_FUN_027d47d0;
  lVar2 = -0x4b0;
  puVar1 = param_1 + 0x3719;
  do {
    *puVar1 = &PTR_FUN_028266f0;
    puVar1[0x17] = &PTR_FUN_02826850;
    FUN_00f0a79c(puVar1 + 0x1a);
    FUN_00f13d08(puVar1);
    lVar2 = lVar2 + 0xf0;
    puVar1 = puVar1 + -0x1e;
  } while (lVar2 != 0);
  FUN_00f13d08(param_1 + 0x368a);
  FUN_00b77e80(param_1 + 0x3a1);
  FUN_00948d58(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00cbbd70(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  param_1[-0x39e] = &PTR_FUN_0280a830;
  *param_1 = &PTR_FUN_0280a968;
  param_1[0x32ec] = &PTR_FUN_027d47d0;
  lVar2 = -0x4b0;
  puVar1 = param_1 + 0x337b;
  do {
    *puVar1 = &PTR_FUN_028266f0;
    puVar1[0x17] = &PTR_FUN_02826850;
    FUN_00f0a79c(puVar1 + 0x1a);
    FUN_00f13d08(puVar1);
    lVar2 = lVar2 + 0xf0;
    puVar1 = puVar1 + -0x1e;
  } while (lVar2 != 0);
  FUN_00f13d08(param_1 + 0x32ec);
  FUN_00b77e80(param_1 + 3);
  FUN_00948d58(param_1);
  FUN_00b08b68(param_1 + -0x39e);
  return;
}




void FUN_00cbbe3c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar1 = param_1 + -0x39e;
  *puVar1 = &PTR_FUN_0280a830;
  *param_1 = &PTR_FUN_0280a968;
  param_1[0x32ec] = &PTR_FUN_027d47d0;
  lVar3 = -0x4b0;
  puVar2 = param_1 + 0x337b;
  do {
    *puVar2 = &PTR_FUN_028266f0;
    puVar2[0x17] = &PTR_FUN_02826850;
    FUN_00f0a79c(puVar2 + 0x1a);
    FUN_00f13d08(puVar2);
    lVar3 = lVar3 + 0xf0;
    puVar2 = puVar2 + -0x1e;
  } while (lVar3 != 0);
  FUN_00f13d08(param_1 + 0x32ec);
  FUN_00b77e80(param_1 + 3);
  FUN_00948d58(param_1);
  FUN_00b08b68(puVar1);
  operator_delete(puVar1);
  return;
}




void FUN_00cbbf10(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1d18);
  FUN_00cbbf6c();
  FUN_00b07a80(*param_1,param_1[1],pvVar1);
  FUN_00aa18e0(pvVar1,"GUILD_INVITES",1,0,1);
  return;
}




void FUN_00cbbf60(void)

{
  FUN_00aa1954("GUILD_INVITES");
  return;
}




void FUN_00cbbf6c(long *param_1)

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
  *param_1 = (long)&PTR_FUN_0280ad00;
  FUN_00bcfdd8(param_1 + 0x39e);
  FUN_00b0780c(param_1,param_1[0x39f]);
  local_30 = DAT_0313b430;
  local_58 = thunk_FUN_00b07af8;
  local_40 = 0;
  uStack_38 = 0;
  local_48 = 0;
  plStack_50 = param_1;
  FUN_009693a0(param_1 + 1,&local_58);
  uVar2 = FUN_00e6ce7c("MENU_GUILD_INVITES_POPUP_TITLE",0);
  FUN_00b078b8(param_1,uVar2);
  (**(code **)(*param_1 + 0x118))(param_1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

