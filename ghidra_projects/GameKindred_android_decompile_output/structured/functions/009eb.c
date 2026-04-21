// functions/009eb — 6 functions
#include "libGameKindred.h"




void FUN_009eb734(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 extraout_x0;
  long lVar5;
  undefined8 extraout_x0_00;
  float extraout_s0;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  void *local_98;
  ulong local_90;
  void *local_88;
  void *local_80;
  byte local_78 [8];
  ulong local_70;
  void *local_68;
  byte local_60 [8];
  ulong local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_009e83a0(param_1,param_2,"title");
  uVar3 = FUN_00e6ce7c(uVar3,0);
  FUN_00910394(param_3,uVar3);
  uVar4 = FUN_00e70b04(param_3);
  if ((uVar4 & 1) != 0) {
    uVar3 = FUN_009e83a0(uVar4,param_2,"title");
    uVar4 = FUN_00e705a0(param_3,uVar3);
  }
  uVar3 = FUN_009e83a0(uVar4,param_2,"atlastexture");
  FUN_008fa54c(local_60,uVar3);
  FUN_008fce60(param_3 + 0xe0,local_60);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  uVar3 = FUN_009e83a0();
  uVar3 = FUN_008fa54c(local_60,uVar3);
  uVar3 = FUN_009e83a0(uVar3,param_2,"pfxname");
  uVar3 = FUN_008fa54c(local_78,uVar3);
  uVar4 = (ulong)(local_60[0] >> 1);
  if ((local_60[0] & 1) != 0) {
    uVar4 = local_58;
  }
  if (uVar4 != 0) {
    uVar4 = (ulong)(local_78[0] >> 1);
    if ((local_78[0] & 1) != 0) {
      uVar4 = local_70;
    }
    if (uVar4 != 0) {
      *(undefined1 *)(param_3 + 0x1b4) = 1;
      FUN_008fce60(param_3 + 0x128,local_60);
      uVar3 = FUN_008fce60(param_3 + 0x140,local_78);
      uVar3 = FUN_009e82a8(uVar3,param_2,"pfxscale");
      *(float *)(param_3 + 0x1ac) = extraout_s0;
      if (extraout_s0 < 1e-05) {
        *(undefined4 *)(param_3 + 0x1ac) = 0x3f800000;
      }
    }
  }
  uVar3 = FUN_009e83a0(uVar3,param_2,"image");
  FUN_008fa54c(&local_90,uVar3);
  FUN_008fce60(param_3 + 0xf8,&local_90);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  uVar3 = FUN_009e83a0();
  FUN_008fa54c(&local_90,uVar3);
  FUN_008fce60(param_3 + 0x110,&local_90);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  uVar3 = FUN_009396ec(param_3 + 0x110);
  uVar3 = FUN_009e83a0(uVar3,param_2,"body");
  uVar3 = FUN_00e6ce7c(uVar3,0);
  lVar1 = param_3 + 0x10;
  FUN_00910394(lVar1,uVar3);
  uVar4 = FUN_00e70b04(lVar1);
  if ((uVar4 & 1) != 0) {
    uVar3 = FUN_009e83a0(uVar4,param_2,"body");
    uVar4 = FUN_00e705a0(lVar1,uVar3);
  }
  uVar3 = FUN_009e83a0(uVar4,param_2,"accept");
  uVar3 = FUN_00e6ce7c(uVar3,0);
  lVar5 = param_3 + 0x20;
  FUN_00910394(lVar5,uVar3);
  uVar4 = FUN_00e70b04(lVar5);
  if ((uVar4 & 1) != 0) {
    uVar3 = FUN_009e83a0(uVar4,param_2,"accept");
    uVar4 = FUN_00e705a0(lVar5,uVar3);
  }
  uVar3 = FUN_009e83a0(uVar4,param_2,"onAccept");
  FUN_008fa54c(&local_90,uVar3);
  FUN_008fce60(param_3 + 0x30,&local_90);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  uVar3 = FUN_009e83a0();
  uVar3 = FUN_00e6ce7c(uVar3,0);
  lVar5 = param_3 + 0x60;
  FUN_00910394(lVar5,uVar3);
  uVar4 = FUN_00e70b04(lVar5);
  if ((uVar4 & 1) != 0) {
    uVar3 = FUN_009e83a0(uVar4,param_2,"reject");
    uVar4 = FUN_00e705a0(lVar5,uVar3);
  }
  uVar3 = FUN_009e83a0(uVar4,param_2,"onReject");
  FUN_008fa54c(&local_90,uVar3);
  FUN_008fce60(param_3 + 0x70,&local_90);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  uVar3 = FUN_009e83a0();
  uVar3 = FUN_00e6ce7c(uVar3,0);
  lVar5 = param_3 + 0xa0;
  FUN_00910394(lVar5,uVar3);
  uVar4 = FUN_00e70b04(lVar5);
  if ((uVar4 & 1) != 0) {
    uVar3 = FUN_009e83a0(uVar4,param_2,"alt");
    uVar4 = FUN_00e705a0(lVar5,uVar3);
  }
  uVar3 = FUN_009e83a0(uVar4,param_2,"onAlt");
  FUN_008fa54c(&local_90,uVar3);
  FUN_008fce60(param_3 + 0xb0,&local_90);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  uVar3 = FUN_009e83a0();
  FUN_00e705c8(&local_a0,"[AWARD]");
  FUN_008fa54c(&local_90,uVar3);
  FUN_00e70570(&local_b0,&local_90);
  FUN_00e713f0(lVar1,0,&local_a0,&local_b0);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  uVar3 = 0;
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
    local_a0 = 0;
    local_98 = (void *)0x0;
    uVar3 = extraout_x0;
  }
  FUN_009e83a0(uVar3,param_2,"skin_name");
  lVar5 = FUN_00cc7618();
  if (lVar5 != 0) {
    FUN_00e705c8(&local_90,"[SKIN NAME]");
    FUN_00cc78d0(&local_a0,lVar5,1);
    FUN_00e713f0(lVar1,0,&local_90,&local_a0);
    if (local_98 != (void *)0x0) {
      operator_delete__(local_98);
      local_a0 = 0;
      local_98 = (void *)0x0;
    }
    if (local_88 != (void *)0x0) {
      operator_delete__(local_88);
      local_90 = 0;
      local_88 = (void *)0x0;
    }
  }
  uVar3 = FUN_009e83a0();
  uVar4 = FUN_00ce9bf0();
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_00ce9b48(uVar3);
    FUN_00e705c8(&local_90,"[HERO NAME]");
    uVar3 = FUN_00e6ce7c(*(undefined8 *)(lVar5 + 0x18),0);
    FUN_00e713f0(lVar1,0,&local_90,uVar3);
    if (local_88 != (void *)0x0) {
      operator_delete__(local_88);
      local_90 = 0;
      local_88 = (void *)0x0;
    }
  }
  uVar3 = FUN_009e83a0();
  FUN_00e705c8(&local_a0,"[DISCOUNT]");
  FUN_008fa54c(&local_90,uVar3);
  FUN_00e70570(&local_b0,&local_90);
  FUN_00e713f0(lVar1,0,&local_a0,&local_b0);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  uVar3 = 0;
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
    local_a0 = 0;
    local_98 = (void *)0x0;
    uVar3 = extraout_x0_00;
  }
  uVar3 = FUN_009e83a0(uVar3,param_2,"amount");
  FUN_00e705c8(&local_a0,"[AMOUNT]");
  FUN_008fa54c(&local_90,uVar3);
  FUN_00e70570(&local_b0,&local_90);
  FUN_00e713f0(lVar1,0,&local_a0,&local_b0);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
    local_a0 = 0;
    local_98 = (void *)0x0;
  }
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009ebd9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_00e6ce7c(param_3,0);
  thunk_FUN_00e7051c(param_1,uVar1);
  uVar2 = FUN_00e70b04(param_1);
  if ((uVar2 & 1) != 0) {
    FUN_00e705a0(param_1,param_3);
  }
  return;
}




void FUN_009ebdec(uint *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if (*param_1 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 2);
    do {
      if ((code *)*puVar1 == (code *)0x0) {
        (*(code *)puVar1[3])(puVar1[2],param_2);
      }
      else {
        (*(code *)*puVar1)(param_2);
      }
      puVar1 = puVar1 + 4;
    } while (puVar1 != (undefined8 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x20));
  }
  return;
}




void FUN_009ebe58(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  
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
    uVar1 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar1 = uVar3;
    }
    FUN_009ed138(param_1,uVar1);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar2 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x28;
  *(undefined4 *)(lVar2 + -0x20) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar2 + -0x28) = *param_2;
  FUN_008fcdb8(lVar2 + -0x18,param_2 + 2);
  return;
}




void FUN_009ebef4(uint *param_1,undefined4 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
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
    FUN_009ed8a4(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x80;
  *(undefined4 *)(lVar1 + -0x80) = *param_2;
  FUN_008fcdb8(lVar1 + -0x78,param_2 + 2);
  FUN_008fcdb8(lVar1 + -0x60,param_2 + 8);
  FUN_008fcdb8(lVar1 + -0x48,param_2 + 0xe);
  FUN_008fcdb8(lVar1 + -0x30,param_2 + 0x14);
  FUN_008fcdb8(lVar1 + -0x18,param_2 + 0x1a);
  return;
}




void FUN_009ebfc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  byte local_70 [16];
  void *local_60;
  undefined1 auStack_58 [8];
  undefined1 *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  fVar4 = (float)FUN_009e82a8(param_1,param_2,param_4);
  uVar2 = 0;
  if (0.0 < fVar4) {
    FUN_008fa54c(local_70,param_5);
    local_50 = local_70;
    lVar3 = FUN_009edb34(param_3,local_70,&DAT_01b9af6e,&local_50,auStack_58);
    *(int *)(lVar3 + 0x38) = (int)fVar4;
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    uVar2 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

