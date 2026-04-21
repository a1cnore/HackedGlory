// functions/00cc3 — 33 functions
#include "libGameKindred.h"




void FUN_00cc301c(void *param_1)

{
  FUN_00cc2fa8();
  operator_delete(param_1);
  return;
}




void FUN_00cc3040(undefined8 param_1,undefined4 *param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1db0);
  FUN_00cc3128();
  FUN_00b07a80(*param_2,param_2[1],pvVar1);
  FUN_0090d22c(param_1);
  FUN_00f12f34((long)pvVar1 + 0x1cf0,param_1);
  FUN_00aa18e0(pvVar1,"WEBVIEW_POPUP",1,0,1);
  return;
}




void FUN_00cc30b4(long param_1,undefined8 param_2)

{
  FUN_0090d22c(param_2);
  FUN_00f12f34(param_1 + 0x1cf0,param_2);
  return;
}




void FUN_00cc30e8(void)

{
  FUN_00aa1954("WEBVIEW_POPUP");
  return;
}




void FUN_00cc30f4(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  *(uint *)(param_1 + 0x1d74) = *(uint *)(param_1 + 0x1d74) & 0xfffffffb;
  uVar1 = FUN_009580c4();
  if ((uVar1 & 1) != 0) {
    lVar2 = FUN_009580b8();
    FUN_009658c8(lVar2 + 0x18);
    return;
  }
  return;
}




void FUN_00cc3128(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 local_58;
  long *plStack_50;
  long *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00b06f74();
  plVar1 = param_1 + 0x39e;
  *param_1 = (long)&PTR_FUN_0280cae8;
  FUN_00f12c04(plVar1);
  FUN_00b0780c(param_1,plVar1);
  uVar3 = FUN_00f1379c();
  FUN_00f173d8(uVar3,plVar1);
  FUN_00b0781c(param_1,uVar3);
  FUN_00b075b8(param_1,1);
  (**(code **)(*param_1 + 0x118))(param_1);
  uVar4 = FUN_00a9b890();
  if ((uVar4 & 1) != 0) {
    uVar3 = FUN_00a9bbb4();
    local_58 = 0;
    pcStack_40 = FUN_00cc347c;
    plStack_50 = param_1;
    local_48 = param_1;
    FUN_00cc33ec(uVar3,&local_58);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cc3200(undefined8 param_1,char *param_2)

{
  if (*param_2 != '\0') {
    FUN_00aa1954("WEBVIEW_POPUP");
    return;
  }
  return;
}




void FUN_00cc3218(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f13018(&local_48,param_1 + 0x1cf0);
  uVar2 = FUN_00b07e60(param_1);
  FUN_00f13018(&local_58,param_1 + 0x1cf0);
  uVar3 = FUN_00e70b88(uVar2,&local_58);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if ((uVar3 & 1) != 0) {
    FUN_00b078b8(param_1,&local_48);
  }
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cc32d4(undefined8 param_1)

{
  long lVar1;
  undefined8 local_48;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(&fStack_3c,&local_40);
  local_48 = 0;
  FUN_00b0877c(param_1,&local_48);
  FUN_00b07d08(fStack_3c + -200.0,local_40 + -100.0,param_1,0);
  FUN_00b0828c(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cc3374(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  uVar3 = (uint)((ulong)((long)param_3 - (long)param_2) >> 5);
  if (uVar4 == uVar3) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 0x20);
    if (puVar1 != param_3) {
      do {
        uVar5 = param_3[2];
        param_2[3] = param_3[3];
        param_2[2] = uVar5;
        puVar2 = param_3 + 4;
        uVar5 = *param_3;
        param_2[1] = param_3[1];
        *param_2 = uVar5;
        param_2 = param_2 + 4;
        param_3 = puVar2;
      } while (puVar1 != puVar2);
      uVar4 = *param_1;
    }
    *param_1 = uVar4 - uVar3;
  }
  return;
}




void FUN_00cc33ec(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    if (uVar4 < 0x20) {
      uVar3 = uVar4 << 1;
    }
    else if (uVar4 == 0xffffffff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uVar4 + 0x10) - (uVar4 & 0xf);
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar2 = uVar3;
    }
    FUN_00cc3494(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  uVar5 = param_2[2];
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  *(undefined8 *)(lVar1 + -8) = param_2[3];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  uVar5 = *param_2;
  *(undefined8 *)(lVar1 + -0x18) = param_2[1];
  *(undefined8 *)(lVar1 + -0x20) = uVar5;
  return;
}




void FUN_00cc347c(undefined8 param_1,char *param_2)

{
  if (*param_2 != '\0') {
    FUN_00aa1954("WEBVIEW_POPUP");
    return;
  }
  return;
}




void FUN_00cc3494(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 5);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 5;
      puVar4 = puVar1;
      do {
        uVar5 = puVar2[2];
        lVar3 = lVar3 + -0x20;
        puVar4[3] = puVar2[3];
        puVar4[2] = uVar5;
        uVar5 = *puVar2;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = puVar4 + 4;
        puVar2 = puVar2 + 4;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00cc3520(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *local_78;
  long lStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_009f1f64();
  FUN_009f2198(uVar3,0x19,0);
  puVar2 = PTR_s_build___MenuPartsCommon_tga_02be3530;
  uVar3 = FUN_00e6ce7c("GAMEPLAY_REMINDER_SETTINGS_TITLE",0);
  uVar4 = FUN_00e6ce7c("GAMEPLAY_REMINDER_SETTINGS_DESCRIPTION",0);
  uVar5 = FUN_00e6ce7c("GAMEPLAY_REMINDER_SETTINGS_SUB_DESCRIPTION",0);
  uVar6 = FUN_00e6ce7c("GAMEPLAY_REMINDER_SETTINGS_KEEP_ON",0);
  uVar7 = FUN_00e6ce7c("GAMEPLAY_REMINDER_SETTINGS_TURN_OFF",0);
  lStack_70 = FUN_00cc364c(puVar2,"tutorial_arrow",uVar3,uVar4,uVar5,uVar6,uVar7,&DAT_03218f18);
  local_78 = FUN_00cc36f8;
  local_50 = DAT_0313cdbc;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  FUN_009693a0(lStack_70 + 8,&local_78);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void * FUN_00cc364c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 *param_8)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x3588);
  FUN_00cc3ad0(pvVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  FUN_00b07a80(*param_8,param_8[1],pvVar1);
  FUN_00aa18e0(pvVar1,0,1,0,1);
  return pvVar1;
}




void FUN_00cc36f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009f1f64();
  FUN_009f2198(uVar1,0x19,1);
  FUN_00b07af8(param_1);
  return;
}




void FUN_00cc3728(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  code *local_78;
  long lStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  puVar2 = PTR_s_build___ModalCommon_atlas_02be3658;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00e6ce7c("AUTO_BUY_POPUP_TITLE",0);
  uVar4 = FUN_00e6ce7c("AUTO_BUY_POPUP_BODY_1",0);
  uVar5 = FUN_00e6ce7c("AUTO_BUY_POPUP_BODY_2",0);
  uVar6 = FUN_00e6ce7c("AUTO_BUY_POPUP_ON_BTN",0);
  uVar7 = FUN_00e6ce7c("AUTO_BUY_POPUP_OFF_BTN",0);
  lVar8 = FUN_00cc364c(puVar2,"autobuy_image",uVar3,uVar4,uVar5,uVar6,uVar7,&DAT_03218f18);
  local_50 = DAT_0313cdbc;
  local_78 = FUN_00cc3878;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  lStack_70 = lVar8;
  FUN_009693a0(lVar8 + 8,&local_78);
  local_50 = DAT_0313cdc0;
  local_78 = FUN_00cc38a8;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  lStack_70 = lVar8;
  FUN_009693a0(lVar8 + 8,&local_78);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cc3878(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009f1f64();
  FUN_009f2198(uVar1,0x1a,0);
  FUN_00b07af8(param_1);
  return;
}




void FUN_00cc38a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009f1f64();
  FUN_009f2198(uVar1,0x1a,1);
  FUN_00b07af8(param_1);
  return;
}




void FUN_00cc38d8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  code *local_78;
  long lStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  puVar2 = PTR_s_build___ModalCommon_atlas_02be3658;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00e6ce7c("AUTO_UPGRADE_POPUP_TITLE",0);
  uVar4 = FUN_00e6ce7c("AUTO_UPGRADE_POPUP_BODY_1",0);
  uVar5 = FUN_00e6ce7c("AUTO_UPGRADE_POPUP_BODY_2",0);
  uVar6 = FUN_00e6ce7c("AUTO_UPGRADE_POPUP_ON_BTN",0);
  uVar7 = FUN_00e6ce7c("AUTO_UPGRADE_POPUP_OFF_BTN",0);
  lVar8 = FUN_00cc364c(puVar2,"autoupgrade_image",uVar3,uVar4,uVar5,uVar6,uVar7,&DAT_03218f18);
  local_50 = DAT_0313cdbc;
  local_78 = FUN_00cc3a28;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  lStack_70 = lVar8;
  FUN_009693a0(lVar8 + 8,&local_78);
  local_50 = DAT_0313cdc0;
  local_78 = FUN_00cc3a58;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  lStack_70 = lVar8;
  FUN_009693a0(lVar8 + 8,&local_78);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cc3a28(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009f1f64();
  FUN_009f2198(uVar1,0x1b,1);
  FUN_00b07af8(param_1);
  return;
}




void FUN_00cc3a58(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009f1f64();
  FUN_009f2198(uVar1,0x1b,0);
  FUN_00b07af8(param_1);
  return;
}




void FUN_00cc3a88(undefined8 param_1)

{
  FUN_00f04694(param_1,DAT_0313cdbc);
  FUN_00f04694(param_1,DAT_0313cdc0);
  thunk_FUN_00b07fec(param_1);
  FUN_00cb9a60();
  return;
}




void FUN_00cc3ad0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  
  FUN_00b06f74();
  plVar1 = param_1 + 0x39e;
  *param_1 = (long)&PTR_FUN_0280cc18;
  FUN_00ca6d0c(plVar1);
  FUN_00ca7048(plVar1,param_2,param_3,param_5,param_6,param_7,param_8);
  FUN_00b0780c(param_1,plVar1);
  FUN_00b078b8(param_1,param_4);
  FUN_00b075b8(param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00cc3b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x118))(param_1);
  return;
}




void FUN_00cc3b9c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_58;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(auStack_4c,auStack_50);
  uVar3 = 0x448fc000;
  uVar2 = FUN_00b07b44(0x45200000,0x448fc000,param_1);
  local_58 = 0;
  FUN_00b0877c(param_1,&local_58);
  FUN_00f13f18(param_1 + 0x1cf0,&DAT_01bc529c);
  FUN_00ca70c4(param_1 + 0x1cf0);
  FUN_00b07d08(uVar2,uVar3,param_1,0);
  FUN_00b0828c(param_1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cc3c68(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009f1f64();
  FUN_009f2198(uVar1,0x19,1);
  FUN_00b07af8(param_1);
  return;
}




void FUN_00cc3c98(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009f1f64();
  FUN_009f2198(uVar1,0x1a,0);
  FUN_00b07af8(param_1);
  return;
}




void FUN_00cc3cc8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009f1f64();
  FUN_009f2198(uVar1,0x1a,1);
  FUN_00b07af8(param_1);
  return;
}




void FUN_00cc3cf8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009f1f64();
  FUN_009f2198(uVar1,0x1b,1);
  FUN_00b07af8(param_1);
  return;
}




void FUN_00cc3d28(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009f1f64();
  FUN_009f2198(uVar1,0x1b,0);
  FUN_00b07af8(param_1);
  return;
}




void FUN_00cc3d58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280cc18;
  param_1[0x39e] = &PTR_FUN_02808800;
  param_1[0x568] = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x689);
  FUN_00c925cc(param_1 + 0x568);
  param_1[0x41f] = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x540);
  FUN_00c925cc(param_1 + 0x41f);
  FUN_00f0d3a4(param_1 + 0x3f9);
  FUN_00f0d3a4(param_1 + 0x3d3);
  param_1[0x3b5] = &PTR_FUN_028266f0;
  param_1[0x3cc] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3cf);
  FUN_00f13d08(param_1 + 0x3b5);
  FUN_00f13d08(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  return;
}




void FUN_00cc3e48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280cc18;
  param_1[0x39e] = &PTR_FUN_02808800;
  param_1[0x568] = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x689);
  FUN_00c925cc(param_1 + 0x568);
  param_1[0x41f] = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x540);
  FUN_00c925cc(param_1 + 0x41f);
  FUN_00f0d3a4(param_1 + 0x3f9);
  FUN_00f0d3a4(param_1 + 0x3d3);
  param_1[0x3b5] = &PTR_FUN_028266f0;
  param_1[0x3cc] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3cf);
  FUN_00f13d08(param_1 + 0x3b5);
  FUN_00f13d08(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00cc3f40(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  void *pvVar2;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined4 local_60;
  undefined2 local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0x5030);
  FUN_00a86fa0(auStack_110,param_1);
  FUN_00a87024(auStack_100,param_1 + 0x10);
  FUN_008fcdb8(auStack_f0,param_1 + 0x20);
  FUN_008fcdb8(auStack_d8,param_1 + 0x38);
  FUN_008fcdb8(auStack_c0,param_1 + 0x50);
  FUN_008fcdb8(auStack_a8,param_1 + 0x68);
  FUN_008fcdb8(auStack_90,param_1 + 0x80);
  FUN_008fcdb8(auStack_78,param_1 + 0x98);
  local_5c = *(undefined2 *)(param_1 + 0xb4);
  local_60 = *(undefined4 *)(param_1 + 0xb0);
  FUN_00cc405c(pvVar2,auStack_110,param_2,param_3 & 1);
  FUN_00a87a10(auStack_110);
  FUN_00aa18e0(pvVar2,"INVENTORY_CHEST_POPUP",1,0,1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

