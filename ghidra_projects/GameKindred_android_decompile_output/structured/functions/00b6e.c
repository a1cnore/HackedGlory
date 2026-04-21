// functions/00b6e — 23 functions
#include "libGameKindred.h"




void thunk_FUN_00b6ef80(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_009580b8();
  if (*(int *)(lVar1 + 0x55d8) != 0) {
    uVar2 = FUN_00e6ce7c("MENU_LPQ_NOTIFICATION_TITLE",0);
    uVar3 = FUN_00e6ce7c("MENU_ACCOUNT_CANNOT_LOGOUT_LPQ",0);
    uVar4 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00a9b8b8(uVar2,uVar3,uVar4,0,0);
    return;
  }
  FUN_00ecf888(param_1 + 0x20b20,0);
  FUN_00900b6c(0);
  FUN_009580b8();
  FUN_0095e12c();
  FUN_00cbe4c8();
  return;
}




void FUN_00b6e130(long param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  if ((param_2 & 1) != 0) {
    FUN_00b6df4c(param_1);
    FUN_00b6e230(param_1);
    FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/ui_menu_layer_slide.mp3",0,0);
    uVar1 = 0;
    if (*(int *)(param_1 + 0x25ffc) == 0) {
      uVar1 = FUN_0093d888();
      uVar1 = (uVar1 & 1) << 2;
    }
    *(uint *)(param_1 + 0x21abc) = *(uint *)(param_1 + 0x21abc) & 0xfffffffb | uVar1;
    FUN_00b6bdfc(param_1 + 0x170f8,0);
    FUN_00b6bdfc(param_1 + 0x1bd60,1);
  }
  FUN_00b67b38(param_1 + 0x8ae8,param_2 & 1);
  uVar2 = FUN_00e80f58();
  if (((uVar2 & 1) == 0) || (uVar2 = thunk_FUN_00ec9300(), (uVar2 & 1) != 0)) {
    *(uint *)(param_1 + 0x20ba4) = *(uint *)(param_1 + 0x20ba4) & 0xfffffffb;
  }
  uVar2 = FUN_00e80f58();
  if (((uVar2 & 1) != 0) && ((param_2 & 1) != 0)) {
    lVar3 = FUN_009580b8();
    FUN_009658c8(lVar3 + 0x18);
    return;
  }
  return;
}




void FUN_00b6e230(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar8 = (**(code **)(*param_3 + 0x48))();
  uVar6 = FUN_0092ea9c();
  if ((uVar6 & 1) != 0) {
    FUN_00f0d92c(param_3 + 0x42de,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40,&DAT_01bee7fa);
    if ((*(float *)(param_3 + 0x42e7) != 1.0) || (*(float *)((long)param_3 + 0x2173c) != 1.0)) {
      lVar9 = NEON_fmov(0x3f800000,4);
      param_3[0x42e7] = lVar9;
      FUN_0091ada4(param_3 + 0x42de);
    }
    FUN_00f0d92c(param_3 + 0x4304,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40,&DAT_01bee7fa);
    if ((*(float *)(param_3 + 0x430d) != 1.0) || (*(float *)((long)param_3 + 0x2186c) != 1.0)) {
      lVar9 = NEON_fmov(0x3f800000,4);
      param_3[0x430d] = lVar9;
      FUN_0091ada4(param_3 + 0x4304);
    }
    FUN_00f0d92c(param_3 + 0x44ec,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40,&DAT_01bee7fa);
    if ((*(float *)(param_3 + 0x44f5) != 1.0) || (*(float *)((long)param_3 + 0x227ac) != 1.0)) {
      lVar9 = NEON_fmov(0x3f800000,4);
      param_3[0x44f5] = lVar9;
      FUN_0091ada4(param_3 + 0x44ec);
    }
    FUN_00f0d92c(param_3 + 0x4bd3,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40,&DAT_01bee7fa);
    if ((*(float *)(param_3 + 0x4bdc) != 1.0) || (*(float *)((long)param_3 + 0x25ee4) != 1.0)) {
      lVar9 = NEON_fmov(0x3f800000,4);
      param_3[0x4bdc] = lVar9;
      FUN_0091ada4(param_3 + 0x4bd3);
    }
  }
  *(uint *)((long)param_3 + 0x809c) = *(uint *)((long)param_3 + 0x809c) & 0xfffffffb;
  FUN_00f07940(0,0x42000000,param_3 + 0x1003,4,param_3,4);
  plVar1 = param_3 + 0xfd7;
  FUN_00f13f08(uVar8,plVar1);
  plVar2 = param_3 + 0x115d;
  local_70 = FUN_00f13e54(plVar1);
  uStack_6c = param_2;
  FUN_00f13f18(plVar2,&local_70);
  plVar3 = param_3 + 0x2e1f;
  local_70 = FUN_00f13e54(plVar1);
  uStack_6c = param_2;
  FUN_00f13f18(plVar3,&local_70);
  plVar4 = param_3 + 0x37ac;
  local_70 = FUN_00f13e54(plVar1);
  uStack_6c = param_2;
  FUN_00f13f18(plVar4,&local_70);
  FUN_00b68ab0(plVar2);
  FUN_00b6c130(plVar3);
  FUN_00b6c130(plVar4);
  FUN_00b315d0(param_3 + 0x3a);
  FUN_00f07940(0,0,plVar1,4,param_3,4);
  FUN_00f07940(0,0,plVar2,4,plVar1,4);
  FUN_00f07940(0,0,plVar3,4,plVar1,4);
  FUN_00f07940(0,0,plVar4,4,plVar1,4);
  FUN_00f07940(0,0,param_3 + 0x42de,4,param_3 + 0x4164,6);
  FUN_00f07940(0,0,param_3 + 0x4304,4,param_3 + 0x42de,6);
  FUN_00f07940(0,0x42480000,param_3 + 0x4bd3,4,param_3 + 0x4304,6);
  FUN_00f07940(0,0x42480000,param_3 + 0x46ac,4,param_3 + 0x4bd3,6);
  plVar1 = param_3 + 0x4139;
  FUN_00f13238(plVar1);
  FUN_00f07940(0,0,plVar1,1,param_3,1);
  FUN_00f07940(0,0,param_3 + 0x44ec,4,param_3 + 0x4372,6);
  FUN_00f07940(0,0,param_3 + 0x4512,5,param_3 + 0x4372,7);
  FUN_00f13238(param_3 + 0x4347);
  fVar7 = (float)FUN_00f0d4e0(param_3 + 0x44ec);
  FUN_00f07940(fVar7 * -0.5,0,param_3 + 0x4347,1,plVar1,2);
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b6e230(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long lStack_68;
  
  lVar5 = tpidr_el0;
  lStack_68 = *(long *)(lVar5 + 0x28);
  uVar8 = (**(code **)(*param_3 + 0x48))();
  uVar6 = FUN_0092ea9c();
  if ((uVar6 & 1) != 0) {
    FUN_00f0d92c(param_3 + 0x42de,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40,&DAT_01bee7fa);
    if ((*(float *)(param_3 + 0x42e7) != 1.0) || (*(float *)((long)param_3 + 0x2173c) != 1.0)) {
      lVar9 = NEON_fmov(0x3f800000,4);
      param_3[0x42e7] = lVar9;
      FUN_0091ada4(param_3 + 0x42de);
    }
    FUN_00f0d92c(param_3 + 0x4304,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40,&DAT_01bee7fa);
    if ((*(float *)(param_3 + 0x430d) != 1.0) || (*(float *)((long)param_3 + 0x2186c) != 1.0)) {
      lVar9 = NEON_fmov(0x3f800000,4);
      param_3[0x430d] = lVar9;
      FUN_0091ada4(param_3 + 0x4304);
    }
    FUN_00f0d92c(param_3 + 0x44ec,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40,&DAT_01bee7fa);
    if ((*(float *)(param_3 + 0x44f5) != 1.0) || (*(float *)((long)param_3 + 0x227ac) != 1.0)) {
      lVar9 = NEON_fmov(0x3f800000,4);
      param_3[0x44f5] = lVar9;
      FUN_0091ada4(param_3 + 0x44ec);
    }
    FUN_00f0d92c(param_3 + 0x4bd3,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40,&DAT_01bee7fa);
    if ((*(float *)(param_3 + 0x4bdc) != 1.0) || (*(float *)((long)param_3 + 0x25ee4) != 1.0)) {
      lVar9 = NEON_fmov(0x3f800000,4);
      param_3[0x4bdc] = lVar9;
      FUN_0091ada4(param_3 + 0x4bd3);
    }
  }
  *(uint *)((long)param_3 + 0x809c) = *(uint *)((long)param_3 + 0x809c) & 0xfffffffb;
  FUN_00f07940(0,0x42000000,param_3 + 0x1003,4,param_3,4);
  plVar1 = param_3 + 0xfd7;
  FUN_00f13f08(uVar8,plVar1);
  plVar2 = param_3 + 0x115d;
  uStack_70 = FUN_00f13e54(plVar1);
  uStack_6c = param_2;
  FUN_00f13f18(plVar2,&uStack_70);
  plVar3 = param_3 + 0x2e1f;
  uStack_70 = FUN_00f13e54(plVar1);
  uStack_6c = param_2;
  FUN_00f13f18(plVar3,&uStack_70);
  plVar4 = param_3 + 0x37ac;
  uStack_70 = FUN_00f13e54(plVar1);
  uStack_6c = param_2;
  FUN_00f13f18(plVar4,&uStack_70);
  FUN_00b68ab0(plVar2);
  FUN_00b6c130(plVar3);
  FUN_00b6c130(plVar4);
  FUN_00b315d0(param_3 + 0x3a);
  FUN_00f07940(0,0,plVar1,4,param_3,4);
  FUN_00f07940(0,0,plVar2,4,plVar1,4);
  FUN_00f07940(0,0,plVar3,4,plVar1,4);
  FUN_00f07940(0,0,plVar4,4,plVar1,4);
  FUN_00f07940(0,0,param_3 + 0x42de,4,param_3 + 0x4164,6);
  FUN_00f07940(0,0,param_3 + 0x4304,4,param_3 + 0x42de,6);
  FUN_00f07940(0,0x42480000,param_3 + 0x4bd3,4,param_3 + 0x4304,6);
  FUN_00f07940(0,0x42480000,param_3 + 0x46ac,4,param_3 + 0x4bd3,6);
  plVar1 = param_3 + 0x4139;
  FUN_00f13238(plVar1);
  FUN_00f07940(0,0,plVar1,1,param_3,1);
  FUN_00f07940(0,0,param_3 + 0x44ec,4,param_3 + 0x4372,6);
  FUN_00f07940(0,0,param_3 + 0x4512,5,param_3 + 0x4372,7);
  FUN_00f13238(param_3 + 0x4347);
  fVar7 = (float)FUN_00f0d4e0(param_3 + 0x44ec);
  FUN_00f07940(fVar7 * -0.5,0,param_3 + 0x4347,1,plVar1,2);
  if (*(long *)(lVar5 + 0x28) == lStack_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b6e230(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long lStack_68;
  
  lVar5 = tpidr_el0;
  lStack_68 = *(long *)(lVar5 + 0x28);
  uVar8 = (**(code **)(*param_3 + 0x48))();
  uVar6 = FUN_0092ea9c();
  if ((uVar6 & 1) != 0) {
    FUN_00f0d92c(param_3 + 0x42de,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40,&DAT_01bee7fa);
    if ((*(float *)(param_3 + 0x42e7) != 1.0) || (*(float *)((long)param_3 + 0x2173c) != 1.0)) {
      lVar9 = NEON_fmov(0x3f800000,4);
      param_3[0x42e7] = lVar9;
      FUN_0091ada4(param_3 + 0x42de);
    }
    FUN_00f0d92c(param_3 + 0x4304,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40,&DAT_01bee7fa);
    if ((*(float *)(param_3 + 0x430d) != 1.0) || (*(float *)((long)param_3 + 0x2186c) != 1.0)) {
      lVar9 = NEON_fmov(0x3f800000,4);
      param_3[0x430d] = lVar9;
      FUN_0091ada4(param_3 + 0x4304);
    }
    FUN_00f0d92c(param_3 + 0x44ec,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40,&DAT_01bee7fa);
    if ((*(float *)(param_3 + 0x44f5) != 1.0) || (*(float *)((long)param_3 + 0x227ac) != 1.0)) {
      lVar9 = NEON_fmov(0x3f800000,4);
      param_3[0x44f5] = lVar9;
      FUN_0091ada4(param_3 + 0x44ec);
    }
    FUN_00f0d92c(param_3 + 0x4bd3,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40,&DAT_01bee7fa);
    if ((*(float *)(param_3 + 0x4bdc) != 1.0) || (*(float *)((long)param_3 + 0x25ee4) != 1.0)) {
      lVar9 = NEON_fmov(0x3f800000,4);
      param_3[0x4bdc] = lVar9;
      FUN_0091ada4(param_3 + 0x4bd3);
    }
  }
  *(uint *)((long)param_3 + 0x809c) = *(uint *)((long)param_3 + 0x809c) & 0xfffffffb;
  FUN_00f07940(0,0x42000000,param_3 + 0x1003,4,param_3,4);
  plVar1 = param_3 + 0xfd7;
  FUN_00f13f08(uVar8,plVar1);
  plVar2 = param_3 + 0x115d;
  uStack_70 = FUN_00f13e54(plVar1);
  uStack_6c = param_2;
  FUN_00f13f18(plVar2,&uStack_70);
  plVar3 = param_3 + 0x2e1f;
  uStack_70 = FUN_00f13e54(plVar1);
  uStack_6c = param_2;
  FUN_00f13f18(plVar3,&uStack_70);
  plVar4 = param_3 + 0x37ac;
  uStack_70 = FUN_00f13e54(plVar1);
  uStack_6c = param_2;
  FUN_00f13f18(plVar4,&uStack_70);
  FUN_00b68ab0(plVar2);
  FUN_00b6c130(plVar3);
  FUN_00b6c130(plVar4);
  FUN_00b315d0(param_3 + 0x3a);
  FUN_00f07940(0,0,plVar1,4,param_3,4);
  FUN_00f07940(0,0,plVar2,4,plVar1,4);
  FUN_00f07940(0,0,plVar3,4,plVar1,4);
  FUN_00f07940(0,0,plVar4,4,plVar1,4);
  FUN_00f07940(0,0,param_3 + 0x42de,4,param_3 + 0x4164,6);
  FUN_00f07940(0,0,param_3 + 0x4304,4,param_3 + 0x42de,6);
  FUN_00f07940(0,0x42480000,param_3 + 0x4bd3,4,param_3 + 0x4304,6);
  FUN_00f07940(0,0x42480000,param_3 + 0x46ac,4,param_3 + 0x4bd3,6);
  plVar1 = param_3 + 0x4139;
  FUN_00f13238(plVar1);
  FUN_00f07940(0,0,plVar1,1,param_3,1);
  FUN_00f07940(0,0,param_3 + 0x44ec,4,param_3 + 0x4372,6);
  FUN_00f07940(0,0,param_3 + 0x4512,5,param_3 + 0x4372,7);
  FUN_00f13238(param_3 + 0x4347);
  fVar7 = (float)FUN_00f0d4e0(param_3 + 0x44ec);
  FUN_00f07940(fVar7 * -0.5,0,param_3 + 0x4347,1,plVar1,2);
  if (*(long *)(lVar5 + 0x28) == lStack_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b6e6f4(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  
  *(uint *)(param_1 + 0x809c) = *(uint *)(param_1 + 0x809c) & 0xfffffffb;
  FUN_00b67100(param_1 + 0x8ae8,param_2,1);
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 4;
  uVar1 = FUN_009480e0();
  *(byte *)(param_1 + 0x25ff8) = (byte)uVar1 & 1;
  uVar2 = thunk_FUN_00ec9510();
  uVar1 = (uVar1 | uVar2) ^ 1;
  uVar2 = FUN_0093dbe8();
  *(uint *)(param_1 + 0x20ba4) =
       *(uint *)(param_1 + 0x20ba4) & 0xfffffff8 |
       *(uint *)(param_1 + 0x20ba4) & 3 | (uVar1 & (uVar2 ^ 0xffffffff) & 1) << 2;
  uVar2 = FUN_0093dbe8();
  FUN_00ecf888(param_1 + 0x20b20,uVar1 & (uVar2 ^ 0xffffffff) & 1);
  uVar2 = FUN_0093dbe8();
  *(uint *)(param_1 + 0x21774) =
       *(uint *)(param_1 + 0x21774) & 0xfffffff8 |
       *(uint *)(param_1 + 0x21774) & 3 | (uVar1 & (uVar2 ^ 0xffffffff) & 1) << 2;
  if (*(char *)(param_1 + 0x25ff8) != '\0') {
    return;
  }
  FUN_00b32074(param_1 + 0x1d0,1);
  return;
}




void FUN_00b6e7e8(long param_1)

{
  FUN_00b6e6f4(param_1 + -0x1a0);
  return;
}




void FUN_00b6e7f0(long param_1,uint param_2)

{
  if ((param_2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x254) >> 2 & 1) != 0) {
      FUN_00b6d9e8(param_1,param_1 + 0x1d0,0,1);
    }
    if (*(int *)(param_1 + 0x25ffc) != 0) {
      FUN_00b6e858(param_1,0);
    }
  }
  FUN_00b67c70(param_1 + 0x8ae8,param_2 & 1);
  return;
}




void FUN_00b6e858(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_SWITCH_TO_TAB");
  FUN_00f048e0(auStack_58,uVar2,param_2);
  FUN_00f04760(param_1,auStack_58,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b6e8d4(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if ((param_2 & 1) != 0) {
    uVar1 = FUN_009b8d90();
    FUN_009baadc(uVar1,&DAT_0320ffa8);
    uVar1 = FUN_009b8d90();
    FUN_009ba7b0(uVar1,&DAT_0320ffa8);
    return;
  }
  return;
}




void FUN_00b6e910(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00e705c8(&local_48,&DAT_01e277f2);
  FUN_00910394(param_1 + 0x25fd8,&local_48);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  iVar1 = *(int *)(param_2 + 0x40);
  if (iVar1 == -0xb) {
    uVar4 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
    pcVar3 = "PLAYER_PROFILE_ERROR_RESERVED";
  }
  else if (iVar1 == -10) {
    uVar4 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
    pcVar3 = "PLAYER_PROFILE_ERROR_TAKEN";
  }
  else {
    if (iVar1 == 0) {
      FUN_009006f8(2);
      if ((*(byte *)(param_1 + 0x254) >> 2 & 1) != 0) {
        FUN_00b6d9e8(param_1,param_1 + 0x1d0,0,0);
      }
      goto LAB_00b6ea44;
    }
    uVar4 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
    pcVar3 = "PLAYER_PROFILE_ERROR";
  }
  uVar5 = FUN_00e6ce7c(pcVar3,0);
  uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00a9b8b8(uVar4,uVar5,uVar6,0,0);
  FUN_009006f8(1);
LAB_00b6ea44:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b6ea6c(long param_1)

{
  FUN_00b6e910(param_1 + -0x1a0);
  return;
}




void FUN_00b6ea74(long param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_00e705c8(&local_48,&DAT_01e277f2);
  FUN_00910394(param_1 + 0x25fd8,&local_48);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  iVar4 = *(int *)(param_2 + 0x40);
  if (iVar4 == -0xb) {
    uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
    pcVar5 = "PLAYER_PROFILE_ERROR_RESERVED";
  }
  else if (iVar4 == -10) {
    uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
    pcVar5 = "PLAYER_PROFILE_ERROR_TAKEN";
  }
  else {
    if (iVar4 == 0) {
      if (*(char *)(param_2 + 0x44) != '\0') {
        FUN_009006f8(2);
        if ((*(byte *)(param_1 + 0x254) >> 2 & 1) != 0) {
          FUN_00b6d9e8(param_1,param_1 + 0x1d0,0,0);
        }
        goto LAB_00b6ec90;
      }
      pbVar11 = (byte *)(param_2 + 0x48);
      bVar2 = *pbVar11;
      uVar9 = *(ulong *)(param_2 + 0x50);
      uVar10 = (ulong)(bVar2 >> 1);
      uVar1 = uVar10;
      if ((bVar2 & 1) != 0) {
        uVar1 = uVar9;
      }
      if (uVar1 == 0x12) {
        iVar4 = FUN_0090d610(pbVar11,0,0xffffffffffffffff,"insufficient_funds",0x12);
        if (iVar4 == 0) {
          uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
          pcVar5 = "PLAYER_PROFILE_ERROR_INSUFFICIENT_FUNDS";
          goto LAB_00b6ec54;
        }
        bVar2 = *(byte *)(param_2 + 0x48);
        uVar9 = *(ulong *)(param_2 + 0x50);
        uVar10 = (ulong)(bVar2 >> 1);
      }
      if ((bVar2 & 1) != 0) {
        uVar10 = uVar9;
      }
      if (uVar10 != 0x13) goto LAB_00b6ec38;
      iVar4 = FUN_0090d610(pbVar11,0,0xffffffffffffffff,"ProfanePlayerHandle",0x13);
      uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
      if (iVar4 == 0) {
        uVar7 = FUN_00e6ce7c("MENU_GUILD_ERROR_PROFANITY",0);
        uVar8 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
        FUN_00a9b8b8(uVar6,uVar7,uVar8,0,0);
        goto LAB_00b6ec90;
      }
    }
    else {
LAB_00b6ec38:
      uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
    }
    pcVar5 = "PLAYER_PROFILE_ERROR";
  }
LAB_00b6ec54:
  uVar7 = FUN_00e6ce7c(pcVar5,0);
  uVar8 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00a9b8b8(uVar6,uVar7,uVar8,0,0);
  FUN_009006f8(1);
LAB_00b6ec90:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b6ecd8(long param_1)

{
  FUN_00b6ea74(param_1 + -0x1a0);
  return;
}




void FUN_00b6ece0(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x28) != 0) {
    return;
  }
  FUN_00b68eb8(param_1 + 0x8ae8);
  return;
}




void FUN_00b6ecf8(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x28) != 0) {
    return;
  }
  FUN_00b68eb8(param_1 + 0x8930);
  return;
}




void FUN_00b6ed10(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_0313377c,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b6ed7c(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_0313377c,0);
  FUN_00f04760(param_1 + -0x1b8,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b6ede8(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  *(uint *)(param_1 + 0x20a4c) =
       *(uint *)(param_1 + 0x20a4c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x20a4c) & 3 | (uint)(param_2 == 0) << 2;
  if (param_2 == 0) {
    uVar1 = FUN_0093d888();
    uVar1 = (uVar1 & 1) << 2;
  }
  *(uint *)(param_1 + 0x21abc) = *(uint *)(param_1 + 0x21abc) & 0xfffffffb | uVar1;
  return;
}




void FUN_00b6ee4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f04924(param_2);
  FUN_00b6ee78(param_1,uVar1);
  return;
}




void FUN_00b6ee78(long param_1,uint param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  
  uVar1 = *(uint *)(param_1 + 0x25ffc);
  if (((uVar1 < 3) && (param_2 < 3)) && (uVar1 != param_2)) {
    plVar2 = *(long **)(param_1 + 0x8000 + (ulong)uVar1 * 8);
    if ((plVar2 != (long *)0x0) &&
       (plVar3 = *(long **)(param_1 + 0x8000 + (ulong)param_2 * 8), plVar3 != (long *)0x0)) {
      (**(code **)(*plVar2 + 0x138))(0x3e4ccccd,plVar2,0,param_2 <= uVar1,1);
      (**(code **)(*plVar3 + 0x138))(0x3e4ccccd,plVar3,1,param_2 > uVar1,1);
    }
    FUN_00b6ede8(param_1,param_2);
    *(uint *)(param_1 + 0x25ffc) = param_2;
  }
  return;
}




void FUN_00b6ef48(long param_1)

{
  FUN_00b32020(param_1 + 0x1d0);
  FUN_00b6d9e8(param_1,param_1 + 0x1d0,1,0);
  return;
}




void FUN_00b6ef80(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_009580b8();
  if (*(int *)(lVar1 + 0x55d8) != 0) {
    uVar2 = FUN_00e6ce7c("MENU_LPQ_NOTIFICATION_TITLE",0);
    uVar3 = FUN_00e6ce7c("MENU_ACCOUNT_CANNOT_LOGOUT_LPQ",0);
    uVar4 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00a9b8b8(uVar2,uVar3,uVar4,0,0);
    return;
  }
  FUN_00ecf888(param_1 + 0x20b20,0);
  FUN_00900b6c(0);
  FUN_009580b8();
  FUN_0095e12c();
  FUN_00cbe4c8();
  return;
}

