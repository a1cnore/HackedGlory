// functions/00ac3 — 33 functions
#include "libGameKindred.h"




void thunk_FUN_00ac3064(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 uStack_58;
  void *pvStack_50;
  undefined8 uStack_48;
  void *pvStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  thunk_FUN_00e7051c(&uStack_48,param_1 + 0xbc8);
  uVar3 = FUN_00e70b88(&uStack_48,&DAT_03210450);
  if ((uVar3 & 1) == 0) {
    uVar4 = FUN_00e6ce7c("MENU_CHAT_ENTER_YOUR_CHAT",0);
    FUN_00b02c3c(param_1 + 0x808,uVar4,0);
    uVar5 = 0;
  }
  else {
    uVar2 = FUN_00e70b14(&uStack_48);
    if (*(uint *)(param_1 + 0x40e0) < uVar2) {
      FUN_00e71810(&uStack_58,&uStack_48,0);
      FUN_00910394(&uStack_48,&uStack_58);
      if (pvStack_50 != (void *)0x0) {
        operator_delete__(pvStack_50);
        uStack_58 = 0;
        pvStack_50 = (void *)0x0;
      }
    }
    FUN_00b02c3c(param_1 + 0x808,param_1 + 0xbc8,0);
    uVar5 = 1;
  }
  *(undefined1 *)(param_1 + 0x40ea) = uVar5;
  FUN_00ed04ac(0,0,param_1 + 0x2d0);
  FUN_00ac19ec(param_1);
  if (pvStack_40 != (void *)0x0) {
    operator_delete__(pvStack_40);
    uStack_48 = 0;
    pvStack_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00ac31c4(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_KEYBOARD_OPENED");
  if (DAT_03133ac0 != 0) {
    pcStack_58 = thunk_FUN_00ac324c;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_48 = 0;
    uStack_50 = param_1;
    uStack_30 = uVar2;
    FUN_009693a0(DAT_03133ac0 + 8,&pcStack_58);
  }
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ac3064(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  thunk_FUN_00e7051c(&local_48,param_1 + 0xbc8);
  uVar3 = FUN_00e70b88(&local_48,&DAT_03210450);
  if ((uVar3 & 1) == 0) {
    uVar4 = FUN_00e6ce7c("MENU_CHAT_ENTER_YOUR_CHAT",0);
    FUN_00b02c3c(param_1 + 0x808,uVar4,0);
    uVar5 = 0;
  }
  else {
    uVar2 = FUN_00e70b14(&local_48);
    if (*(uint *)(param_1 + 0x40e0) < uVar2) {
      FUN_00e71810(&local_58,&local_48,0);
      FUN_00910394(&local_48,&local_58);
      if (local_50 != (void *)0x0) {
        operator_delete__(local_50);
        local_58 = 0;
        local_50 = (void *)0x0;
      }
    }
    FUN_00b02c3c(param_1 + 0x808,param_1 + 0xbc8,0);
    uVar5 = 1;
  }
  *(undefined1 *)(param_1 + 0x40ea) = uVar5;
  FUN_00ed04ac(0,0,param_1 + 0x2d0);
  FUN_00ac19ec(param_1);
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




void FUN_00ac3188(long param_1)

{
  *(uint *)(param_1 + 0x297c) = *(uint *)(param_1 + 0x297c) & 0xfffffffb;
  FUN_00ac0980(param_1,1);
  FUN_00ac0eb0(param_1,&DAT_03210450);
  return;
}




void FUN_00ac31c4(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  code *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_KEYBOARD_OPENED");
  if (DAT_03133ac0 != 0) {
    local_58 = thunk_FUN_00ac324c;
    local_40 = 0;
    uStack_38 = 0;
    local_48 = 0;
    uStack_50 = param_1;
    local_30 = uVar2;
    FUN_009693a0(DAT_03133ac0 + 8,&local_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00ac324c(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_KEYBOARD_OPENED");
  if (DAT_03133ac0 != 0) {
    FUN_00ac3d98(DAT_03133ac0,uVar2,thunk_FUN_00ac324c,param_1);
  }
  FUN_00f00298(auStack_3c,auStack_40);
  fVar3 = *(float *)(param_1 + 0x44);
  fVar5 = *(float *)(param_1 + 0x174);
  fVar4 = (float)FUN_00aa16b4(1);
  FUN_00ed04ac(0,(fVar4 - (fVar3 + fVar5)) + 54.0,param_1 + 0x2d0);
  FUN_00ac19ec(param_1);
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ac324c(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_KEYBOARD_OPENED");
  if (DAT_03133ac0 != 0) {
    FUN_00ac3d98(DAT_03133ac0,uVar2,thunk_FUN_00ac324c,param_1);
  }
  FUN_00f00298(auStack_3c,auStack_40);
  fVar3 = *(float *)(param_1 + 0x44);
  fVar5 = *(float *)(param_1 + 0x174);
  fVar4 = (float)FUN_00aa16b4(1);
  FUN_00ed04ac(0,(fVar4 - (fVar3 + fVar5)) + 54.0,param_1 + 0x2d0);
  FUN_00ac19ec(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ac3310(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x4070) + 0x40))();
  if (iVar1 == 2) {
    uVar2 = FUN_00e81200(param_3);
    FUN_009482d0(param_4);
    uVar2 = uVar2 & 1;
  }
  else {
    uVar2 = 0;
    if (iVar1 == 1) {
      uVar3 = FUN_00e70b04(param_2);
      if ((uVar3 & 1) != 0) {
        param_2 = FUN_00e829e0();
        param_2 = param_2 + 0xd8;
      }
      FUN_00ac3418(param_1,param_2,param_3);
      FUN_009482d0(param_4);
      uVar2 = 1;
    }
  }
  return uVar2;
}




void FUN_00ac33b8(long param_1,byte *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  
  if ((*(long **)(param_1 + 0x4070) != (long *)0x0) &&
     (uVar1 = (**(code **)(**(long **)(param_1 + 0x4070) + 0x30))(), (uVar1 & 1) != 0)) {
    pbVar2 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      pbVar2 = param_2 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x00ac3408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x4070) + 0x50))(*(long **)(param_1 + 0x4070),pbVar2);
    return;
  }
  return;
}




void FUN_00ac3418(long param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  undefined1 *puVar7;
  byte local_90 [16];
  void *local_80;
  byte local_78 [16];
  void *local_68;
  ulong local_60;
  ulong local_58;
  void *local_50;
  undefined1 auStack_44 [8];
  undefined1 local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_60 = 0;
  local_58 = 0;
  local_50 = (void *)0x0;
  FUN_00e70a24(param_2,&local_60);
  pvVar1 = (void *)((ulong)&local_60 | 1);
  uVar4 = local_60 >> 1 & 0x7f;
  if ((local_60 & 1) != 0) {
    pvVar1 = local_50;
    uVar4 = local_58;
  }
  uVar5 = FUN_0091ed5c(pvVar1,uVar4 & 0xffffffff,0x12345678);
  lVar6 = 0;
  puVar7 = auStack_44;
  do {
    uVar3 = (uint)lVar6;
    lVar6 = lVar6 + 4;
    *puVar7 = (&DAT_02be9bbc)[uVar5 >> (ulong)(uVar3 & 0x1f) & 0xf];
    puVar7 = puVar7 + 1;
  } while (lVar6 != 0x20);
  local_3c = 0;
  FUN_009697c8(local_90,param_1 + 0x40a0,auStack_44);
  FUN_008fcdb8(local_78,local_90);
  FUN_008fce60(param_3,local_78);
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ac3540(long param_1,undefined8 param_2)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (((*(long **)(param_1 + 0x4070) == (long *)0x0) ||
      (iVar3 = (**(code **)(**(long **)(param_1 + 0x4070) + 0x40))(), iVar3 != 2)) &&
     (uVar4 = FUN_00e70b04(param_2), (uVar4 & 1) == 0)) {
    local_50[0] = 0;
    local_50[1] = 0;
    local_40 = (void *)0x0;
    FUN_00ac3418(param_1,param_2,local_50);
    if ((*(long **)(param_1 + 0x4070) != (long *)0x0) &&
       (uVar4 = (**(code **)(**(long **)(param_1 + 0x4070) + 0x30))(), (uVar4 & 1) != 0)) {
      pvVar1 = (void *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        pvVar1 = local_40;
      }
      (**(code **)(**(long **)(param_1 + 0x4070) + 0x58))(*(long **)(param_1 + 0x4070),pvVar1);
    }
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ac3620(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_138 [256];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e6c1c0(auStack_138,0x100,&DAT_01baf1cd);
  FUN_008fa54c(param_1,auStack_138);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ac368c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  code *local_78;
  long *plStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_00ce1c44();
  plVar1 = param_1 + 0x80;
  *param_1 = (long)&PTR_FUN_027d5dc0;
  FUN_00ab6c24(plVar1,0);
  *(undefined1 *)(param_1 + 0x71) = 1;
  local_78 = (code *)0x3f00000000000000;
  (**(code **)(*param_1 + 0x28))(param_1,&local_78);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00ab703c(0,0x44750000,0x44750000,plVar1,0,&DAT_03210450,&DAT_01bee7fa,&DAT_03218ef8,0);
  if ((*(float *)(param_1 + 0x88) != 490.0) || (*(float *)((long)param_1 + 0x444) != 0.0)) {
    param_1[0x88] = 0x43f50000;
    FUN_0091ada4(plVar1);
  }
  local_78 = (code *)0x3f0000003f000000;
  (**(code **)(param_1[0x80] + 0x28))(plVar1,&local_78);
  plVar1 = param_1 + 0x22;
  if ((*(float *)(param_1 + 0x2a) != 0.0) || (*(float *)((long)param_1 + 0x154) != 0.0)) {
    param_1[0x2a] = 0;
    FUN_0091ada4(plVar1);
  }
  local_78 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0x22] + 0x28))(plVar1,&local_78);
  plVar2 = param_1 + 0x48;
  if ((*(float *)(param_1 + 0x50) != 0.0) || (*(float *)((long)param_1 + 0x284) != 0.0)) {
    param_1[0x50] = 0;
    FUN_0091ada4(plVar2);
  }
  local_78 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0x48] + 0x28))(plVar2,&local_78);
  FUN_00b0360c(param_1,PTR_s_build___Fonts_Brandon_Regular_30_02be9c38,&DAT_01bee7fa);
  FUN_00b03834(param_1,3);
  FUN_00ce1cbc(param_1,1);
  *(uint *)((long)param_1 + 0x194) = *(uint *)((long)param_1 + 0x194) & 0xffffffef;
  FUN_00f04710(plVar1);
  FUN_00f0d9a4(plVar1,0);
  *(uint *)((long)param_1 + 0x2c4) = *(uint *)((long)param_1 + 0x2c4) & 0xffffffef;
  FUN_00f04710(plVar2);
  FUN_00f0d9a4(plVar2,0);
  local_50 = DAT_03210c64;
  local_78 = thunk_FUN_00ce1ef0;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(param_1 + 0x81,&local_78);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ac38fc(undefined1 param_1 [16],float param_2,long *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,ulong param_7,uint param_8)

{
  long *plVar1;
  long *plVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined8 local_a8;
  void *local_a0;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  FUN_00f13ca4();
  *param_3 = (long)&PTR_FUN_027d5ec0;
  FUN_00f0e4a8(param_3 + 0x17);
  plVar1 = param_3 + 0x35;
  FUN_00f0d160(plVar1);
  plVar2 = param_3 + 0x5b;
  FUN_00f0d160(plVar2);
  (**(code **)(*param_3 + 0x78))(param_3,param_3 + 0x17,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar1,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar2,1);
  uVar6 = FUN_0092ea9c();
  uVar7 = FUN_00e70b88(param_4,&DAT_03210450);
  if (((uVar7 & 1) != 0) || ((param_8 & 1) != 0)) {
    ppuVar3 = &PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80;
    if ((uVar6 & 1) == 0) {
      ppuVar3 = &PTR_s_build___Fonts_Brandon_Bold_30_fo_02be9c70;
    }
    puVar4 = &DAT_03134020;
    if ((param_8 & 1) == 0) {
      puVar4 = &DAT_0313401c;
    }
    FUN_00f0d92c(plVar1,*ppuVar3,puVar4);
    if ((param_7 & 1) != 0) {
      param_4 = FUN_00e6ce7c("MENU_CHAT_PLAYER_LABEL_YOU",0);
    }
    thunk_FUN_00e7051c(&local_88,param_4);
    uVar7 = FUN_00e70b88(param_6,&DAT_03210450);
    if ((uVar7 & 1) != 0) {
      FUN_00e705c8(&local_98,"   ([TIMESTAMP_VAL])");
      FUN_00e705c8(&local_a8,"[TIMESTAMP_VAL]");
      FUN_00e71248(&local_98,0,&local_a8,param_6);
      if (local_a0 != (void *)0x0) {
        operator_delete__(local_a0);
        local_a8 = 0;
        local_a0 = (void *)0x0;
      }
      FUN_00e70c34(&local_88,&local_98);
      if (local_90 != (void *)0x0) {
        operator_delete__(local_90);
        local_98 = 0;
        local_90 = (void *)0x0;
      }
    }
    FUN_00f0d75c(plVar1,&local_88);
    if (local_80 != (void *)0x0) {
      operator_delete__(local_80);
      local_88 = 0;
      local_80 = (void *)0x0;
    }
  }
  FUN_00f0d9a4(plVar2,0);
  fVar10 = *(float *)(param_3 + 0x3d);
  FUN_00f0d4e0(plVar1);
  fVar8 = param_2 + 4.0;
  if ((*(float *)(param_3 + 99) != fVar10) ||
     (param_2 = *(float *)((long)param_3 + 0x31c), param_2 != fVar8)) {
    *(float *)(param_3 + 99) = fVar10;
    *(float *)((long)param_3 + 0x31c) = fVar8;
    FUN_0091ada4(plVar2);
  }
  ppuVar3 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  if ((uVar6 & 1) == 0) {
    ppuVar3 = &PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10;
  }
  puVar4 = &DAT_03134028;
  if ((param_7 & 1) == 0) {
    puVar4 = &DAT_01bee7fa;
  }
  FUN_00f0d92c(plVar2,*ppuVar3,puVar4);
  FUN_00f0d75c(plVar2,param_5);
  uVar9 = (**(code **)(*param_3 + 0x58))(param_3,0,0,1,1);
  local_88 = CONCAT44(param_2,uVar9);
  FUN_00f13f18(param_3,&local_88);
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ac3bcc(void)

{
  return;
}




void FUN_00ac3bd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d5dc0;
  FUN_009c7fa8(param_1 + 0x80);
  FUN_00abd150(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00ac3c10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d5ec0;
  FUN_00f0d3a4(param_1 + 0x5b);
  FUN_00f0d3a4(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ac3c7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d5ec0;
  FUN_00f0d3a4(param_1 + 0x5b);
  FUN_00f0d3a4(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00ac3cf0(void)

{
  return;
}




void FUN_00ac3cf4(void)

{
  return;
}




void FUN_00ac3cf8(void)

{
  return;
}




void FUN_00ac3cfc(void)

{
  return;
}




void FUN_00ac3d00(void)

{
  return;
}




void FUN_00ac3d04(void)

{
  return;
}




void FUN_00ac3d08(void)

{
  return;
}




void FUN_00ac3d0c(void)

{
  return;
}




void FUN_00ac3d10(void)

{
  return;
}




void FUN_00ac3d18(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
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




void FUN_00ac3d98(long param_1,int param_2,long param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 != 0) {
    plVar2 = *(long **)(param_1 + 0x10);
    lVar3 = (ulong)uVar1 * 0x30;
    do {
      if ((((int)plVar2[5] == param_2) && (plVar2[1] == param_4)) && (*plVar2 == param_3)) {
        FUN_0099c2fc((uint *)(param_1 + 8),plVar2,plVar2 + 6);
        return;
      }
      lVar3 = lVar3 + -0x30;
      plVar2 = plVar2 + 6;
    } while (lVar3 != 0);
  }
  return;
}




void FUN_00ac3dec(undefined8 param_1)

{
  FUN_008fa54c(param_1,&DAT_01baf201);
  return;
}




void FUN_00ac3dfc(undefined8 param_1)

{
  FUN_008fa54c(param_1,"useKarmaFiltering");
  return;
}




void FUN_00ac3e18(undefined8 *param_1)

{
  FUN_00b23fec();
  *param_1 = &PTR_FUN_027d6068;
  param_1[0x17] = &PTR_FUN_027d6228;
  FUN_00f0e4a8(param_1 + 0x229);
  *(byte *)(param_1 + 0x14e) = *(byte *)(param_1 + 0x14e) | 0x40;
  return;
}




void FUN_00ac3e68(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  float local_80;
  undefined1 auStack_7c [4];
  code *local_78;
  long *plStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  plVar1 = param_1 + 0xba;
  FUN_00f0dac8(param_1 + 0xf3,0);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x150,1);
  plVar2 = param_1 + 0x20;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f023ec(plVar2,plVar1,1);
  FUN_00f023ec(plVar2,param_1 + 0x167,1);
  FUN_00f0a814(param_1 + 0x1e,PTR_s_build___MenuPartsCommon_tga_02be3530);
  uVar4 = FUN_01997f5c("dialog_background");
  *(undefined4 *)(param_1 + 0x228) = uVar4;
  FUN_00f0025c(auStack_7c,&local_80);
  FUN_00ed7d08(plVar1,0);
  FUN_00f0d378(param_1 + 0xf3,PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98);
  if ((*(float *)(param_1 + 0xc2) != 16.0) ||
     (*(float *)((long)param_1 + 0x614) != local_80 + -30.0)) {
    *(undefined4 *)(param_1 + 0xc2) = 0x41800000;
    *(float *)((long)param_1 + 0x614) = local_80 + -30.0;
    FUN_0091ada4(plVar1);
  }
  local_78 = (code *)0x3f80000000000000;
  (**(code **)(param_1[0xba] + 0x28))(plVar1,&local_78);
  FUN_00f01a4c(param_1 + 0x167,1);
  local_50 = DAT_03210f58;
  *(uint *)((long)param_1 + 0xb04) = *(uint *)((long)param_1 + 0xb04) | 0x10;
  local_78 = thunk_FUN_00ac4398;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(param_1 + 0x151,&local_78);
  local_78 = thunk_FUN_00ac4398;
  local_50 = DAT_03210f84;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(param_1 + 0x151,&local_78);
  local_50 = DAT_03210fc0;
  local_78 = FUN_00ac407c;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(param_1 + 0xbb,&local_78);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

