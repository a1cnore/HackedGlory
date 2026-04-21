// functions/00b70 — 19 functions
#include "libGameKindred.h"




void FUN_00b70208(long param_1)

{
  FUN_00cb0174();
  *(uint *)(param_1 + 0x147c) = *(uint *)(param_1 + 0x147c) & 0xfffffffb;
  *(uint *)(param_1 + 0x2a3c) = *(uint *)(param_1 + 0x2a3c) | 4;
  FUN_00b16058(param_1 + 0x29b8);
  return;
}




void FUN_00b70248(long param_1)

{
  FUN_00cb0174();
  *(uint *)(param_1 + 0x147c) = *(uint *)(param_1 + 0x147c) & 0xfffffffb;
  *(uint *)(param_1 + 0x2a3c) = *(uint *)(param_1 + 0x2a3c) | 4;
  FUN_00b16058(param_1 + 0x29b8);
  return;
}




void FUN_00b70288(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e6ce7c("MENU_DIALOG_END_SEASON_REWARDS_TITLE",0);
  thunk_FUN_00e7051c(&local_48,uVar2);
  FUN_00e705c8(&local_58,"[SEASON_NAME]");
  FUN_00cb488c(&local_68,0,1,0);
  FUN_00e71248(&local_48,0,&local_58,&local_68);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  FUN_00e705c8(&local_58,"[PREVIOUS_SEASON_NAME]");
  FUN_00cb48d4(&local_68,0,1,0);
  FUN_00e71248(&local_48,0,&local_58,&local_68);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  FUN_00f0d75c(param_1 + 0xcb8,&local_48);
  FUN_00f0db64(0x44660000,0,0x3f800000,param_1 + 0xcb8);
  uVar2 = FUN_00e6ce7c("MENU_DIALOG_END_SEASON_REWARDS_TEXT",0);
  thunk_FUN_00e7051c(&local_58,uVar2);
  FUN_00e705c8(&local_68,"[SEASON_NAME]");
  FUN_00cb488c(&local_78,0,1,0);
  FUN_00e713f0(&local_58,0,&local_68,&local_78);
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
  FUN_00e705c8(&local_68,"[PREVIOUS_SEASON_NAME]");
  FUN_00cb48d4(&local_78,0,1,0);
  FUN_00e713f0(&local_58,0,&local_68,&local_78);
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
  FUN_00f0d75c(param_1 + 0xde8,&local_58);
  uVar2 = FUN_00e6ce7c("MENU_DIALOG_COLLECT_REWARDS",0);
  thunk_FUN_00e7051c(&local_68,uVar2);
  FUN_00e705c8(&local_78,"[PREVIOUS_SEASON_NAME]");
  FUN_00cb48d4(&local_88,0,1,0);
  FUN_00e71248(&local_68,0,&local_78,&local_88);
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
  FUN_00ab7498(param_1 + 0x13f8,&local_68);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
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




void FUN_00b70554(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_008fc96c();
  if (lVar3 == 0) goto LAB_00b70674;
  FUN_00e70510(&local_48);
  uVar1 = *(uint *)(lVar3 + 0x60);
  if (uVar1 == 0) {
    FUN_00e70e18(&local_48,&DAT_01bb6d43,1);
    FUN_00af01c0(0,param_1 + 0xf18);
    FUN_00f0d75c(param_1 + 0x12c8,&local_48);
LAB_00b70630:
    fVar4 = 0.0;
  }
  else {
    FUN_00e70e18(&local_48,&DAT_01bb6d43,uVar1);
    FUN_00af01c0((float)uVar1,param_1 + 0xf18);
    FUN_00f0d75c(param_1 + 0x12c8,&local_48);
    fVar4 = -20.0;
    if ((uVar1 % 10 != 1) && (uVar1 % 10 != 4)) goto LAB_00b70630;
  }
  if ((*(float *)(param_1 + 0x1308) != fVar4) || (*(float *)(param_1 + 0x130c) != 30.0)) {
    *(float *)(param_1 + 0x1308) = fVar4;
    *(undefined4 *)(param_1 + 0x130c) = 0x41f00000;
    FUN_0091ada4(param_1 + 0x12c8);
  }
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
LAB_00b70674:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b7069c(long param_1)

{
  FUN_00cb0174();
  *(uint *)(param_1 + 0x147c) = *(uint *)(param_1 + 0x147c) & 0xfffffffb;
  *(uint *)(param_1 + 0x2a3c) = *(uint *)(param_1 + 0x2a3c) | 4;
  FUN_00b16058(param_1 + 0x29b8);
  return;
}




void FUN_00b706dc(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_031341c4,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b70748(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_031341c4,0);
  FUN_00f04760(param_1 + -200,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b707b4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 local_68;
  long *plStack_60;
  long *local_58;
  code *pcStack_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027e5bf0;
  FUN_00f11234(plVar1);
  plVar2 = param_1 + 0x4b;
  FUN_00ecfd6c(plVar2,0);
  FUN_00f13ca4(param_1 + 0xf2);
  param_1[0xf2] = (long)&PTR_FUN_02825e18;
  FUN_00f0bcb4(param_1 + 0x109);
  FUN_00f0bcb4(param_1 + 0x10d);
  FUN_0099cc90(param_1 + 0x111);
  param_1[0x118] = 0;
  param_1[0x117] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00ed026c(plVar2,param_1 + 0xf2,1);
  FUN_00f112f0(plVar1,0);
  FUN_00ed0680(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,
               PTR_s_scrollbar_button_fill_top_02be3518,PTR_s_scrollbar_button_fill_middle_02be3520,
               PTR_s_scrollbar_button_fill_bottom_02be3528);
  FUN_00ed04d8(plVar2,1,0);
  FUN_00ed04ac(0,0,plVar2);
  *(undefined4 *)(param_1 + 0x110) = 1;
  lVar4 = FUN_00cdbb18();
  local_68 = 0;
  pcStack_50 = FUN_00b711ec;
  plStack_60 = param_1;
  local_58 = param_1;
  FUN_00ad97b4(lVar4 + 0x30,&local_68);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b7093c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_027e5bf0;
  lVar2 = FUN_00cdbb18();
  lVar4 = (ulong)*(uint *)(lVar2 + 0x30) << 5;
  lVar1 = *(long *)(lVar2 + 0x38);
  do {
    lVar3 = lVar1;
    if (lVar4 == 0) goto LAB_00b7098c;
    lVar4 = lVar4 + -0x20;
    lVar1 = lVar3 + 0x20;
  } while (*(undefined8 **)(lVar3 + 8) != param_1);
  FUN_00ad98d8((uint *)(lVar2 + 0x30),lVar3);
LAB_00b7098c:
  FUN_00b709dc(param_1);
  if ((void *)param_1[0x118] != (void *)0x0) {
    operator_delete__((void *)param_1[0x118]);
    param_1[0x118] = 0;
    param_1[0x117] = 0;
  }
  FUN_0099ccc4(param_1 + 0x111);
  FUN_00f13d08(param_1 + 0xf2);
  FUN_00ed00e0(param_1 + 0x4b);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b709dc(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = *(uint *)(param_1 + 0x8b8);
  if (uVar2 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x8c0) + lVar4);
      if (plVar1 == (long *)0x0) {
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x8c0) + uVar5 * 8);
      }
      else {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(param_1 + 0x8b8);
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x8c0) + lVar4);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
      *puVar3 = 0;
    } while (uVar5 < uVar2);
  }
  if (*(long *)(param_1 + 0x8c0) != 0) {
    *(undefined4 *)(param_1 + 0x8b8) = 0;
  }
  FUN_00b70c0c();
  return;
}




void FUN_00b70a5c(void *param_1)

{
  FUN_00b7093c();
  operator_delete(param_1);
  return;
}




void thunk_FUN_00b70a84(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uStack_68;
  float fStack_64;
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [4];
  long lStack_58;
  
  lVar3 = tpidr_el0;
  lStack_58 = *(long *)(lVar3 + 0x28);
  *(int *)((long)param_3 + 0x884) = (int)param_3[0x117];
  FUN_00f00298(auStack_5c,auStack_60);
  fVar5 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  uVar2 = *(uint *)(param_3 + 0x117);
  fVar7 = (float)NEON_fminnm(param_2,0x447a0000);
  fVar6 = (float)uVar2;
  fVar5 = (fVar5 + -60.0) / 3.0;
  fVar8 = fVar5 * fVar6;
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      fVar6 = fVar7;
      FUN_00f13f08(fVar5,*(undefined8 *)(param_3[0x118] + uVar4 * 8));
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_3 + 0x117));
  }
  *(float *)(param_3 + 0x10d) = fVar5;
  *(float *)((long)param_3 + 0x86c) = fVar7;
  param_3[0x10e] = 0x41f00000;
  plVar1 = param_3 + 0xf2;
  (**(code **)(param_3[0xf2] + 0x138))(plVar1,param_3 + 0x10d);
  (**(code **)(param_3[0xf2] + 0x90))(plVar1);
  if ((*(float *)(param_3 + 0xfc) != 0.0) || (*(float *)((long)param_3 + 0x7e4) != 0.0)) {
    param_3[0xfc] = 0;
    FUN_0091ada4(plVar1);
  }
  uStack_68 = (**(code **)(*param_3 + 0x50))(param_3);
  fStack_64 = fVar6;
  FUN_00f13f18(param_3 + 0x17,&uStack_68);
  FUN_00ed02d8(fVar8 + (float)(uVar2 - 1) * 30.0,fVar7,param_3 + 0x4b);
  if (*(long *)(lVar3 + 0x28) == lStack_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b70a84(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 local_68;
  float fStack_64;
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [4];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  *(int *)((long)param_3 + 0x884) = (int)param_3[0x117];
  FUN_00f00298(auStack_5c,auStack_60);
  fVar5 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  uVar2 = *(uint *)(param_3 + 0x117);
  fVar7 = (float)NEON_fminnm(param_2,0x447a0000);
  fVar6 = (float)uVar2;
  fVar5 = (fVar5 + -60.0) / 3.0;
  fVar8 = fVar5 * fVar6;
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      fVar6 = fVar7;
      FUN_00f13f08(fVar5,*(undefined8 *)(param_3[0x118] + uVar4 * 8));
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_3 + 0x117));
  }
  *(float *)(param_3 + 0x10d) = fVar5;
  *(float *)((long)param_3 + 0x86c) = fVar7;
  param_3[0x10e] = 0x41f00000;
  plVar1 = param_3 + 0xf2;
  (**(code **)(param_3[0xf2] + 0x138))(plVar1,param_3 + 0x10d);
  (**(code **)(param_3[0xf2] + 0x90))(plVar1);
  if ((*(float *)(param_3 + 0xfc) != 0.0) || (*(float *)((long)param_3 + 0x7e4) != 0.0)) {
    param_3[0xfc] = 0;
    FUN_0091ada4(plVar1);
  }
  local_68 = (**(code **)(*param_3 + 0x50))(param_3);
  fStack_64 = fVar6;
  FUN_00f13f18(param_3 + 0x17,&local_68);
  FUN_00ed02d8(fVar8 + (float)(uVar2 - 1) * 30.0,fVar7,param_3 + 0x4b);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b70a84(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uStack_68;
  float fStack_64;
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [4];
  long lStack_58;
  
  lVar3 = tpidr_el0;
  lStack_58 = *(long *)(lVar3 + 0x28);
  *(int *)((long)param_3 + 0x884) = (int)param_3[0x117];
  FUN_00f00298(auStack_5c,auStack_60);
  fVar5 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  uVar2 = *(uint *)(param_3 + 0x117);
  fVar7 = (float)NEON_fminnm(param_2,0x447a0000);
  fVar6 = (float)uVar2;
  fVar5 = (fVar5 + -60.0) / 3.0;
  fVar8 = fVar5 * fVar6;
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      fVar6 = fVar7;
      FUN_00f13f08(fVar5,*(undefined8 *)(param_3[0x118] + uVar4 * 8));
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_3 + 0x117));
  }
  *(float *)(param_3 + 0x10d) = fVar5;
  *(float *)((long)param_3 + 0x86c) = fVar7;
  param_3[0x10e] = 0x41f00000;
  plVar1 = param_3 + 0xf2;
  (**(code **)(param_3[0xf2] + 0x138))(plVar1,param_3 + 0x10d);
  (**(code **)(param_3[0xf2] + 0x90))(plVar1);
  if ((*(float *)(param_3 + 0xfc) != 0.0) || (*(float *)((long)param_3 + 0x7e4) != 0.0)) {
    param_3[0xfc] = 0;
    FUN_0091ada4(plVar1);
  }
  uStack_68 = (**(code **)(*param_3 + 0x50))(param_3);
  fStack_64 = fVar6;
  FUN_00f13f18(param_3 + 0x17,&uStack_68);
  FUN_00ed02d8(fVar8 + (float)(uVar2 - 1) * 30.0,fVar7,param_3 + 0x4b);
  if (*(long *)(lVar3 + 0x28) == lStack_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b70c0c(void)

{
  long lVar1;
  undefined8 uVar2;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00cae8f0();
  FUN_008fa54c(local_40,uVar2);
  FUN_00affa44(local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b70c74(long param_1,byte *param_2)

{
  void *pvVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  ulong *puVar5;
  byte *pbVar6;
  long lVar7;
  byte local_e0 [8];
  ulong local_d8;
  void *local_d0;
  byte local_c8 [16];
  void *local_b8;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  byte local_78 [16];
  void *local_68;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  FUN_00b709dc();
  *(byte **)(param_1 + 0x8c8) = param_2;
  if (param_2 != (byte *)0x0) {
    if (*(int *)(param_2 + 0x50) != 0) {
      lVar7 = *(long *)(param_2 + 0x58);
      do {
        FUN_008fcdb8(local_60,lVar7);
        FUN_00b70e84(param_1,local_60);
        if ((local_60[0] & 1) != 0) {
          operator_delete(local_50);
        }
        param_2 = *(byte **)(param_1 + 0x8c8);
        lVar7 = lVar7 + 0x18;
      } while (lVar7 != *(long *)(param_2 + 0x58) + (ulong)*(uint *)(param_2 + 0x50) * 0x18);
    }
    if ((*param_2 & 1) == 0) {
      if (*param_2 >> 1 == 0) goto LAB_00b70e50;
    }
    else if (*(long *)(param_2 + 8) == 0) goto LAB_00b70e50;
    FUN_0099ce80(param_1 + 0x888,param_1,thunk_FUN_00b71088);
    FUN_008fa54c(local_c8,"TALENTS.UPGRADE.");
    pbVar6 = *(byte **)(param_1 + 0x8c8);
    uVar2 = *(ulong *)(pbVar6 + 8);
    pbVar3 = *(byte **)(pbVar6 + 0x10);
    if ((*pbVar6 & 1) == 0) {
      pbVar3 = pbVar6 + 1;
      uVar2 = (ulong)(*pbVar6 >> 1);
    }
    puVar5 = (ulong *)FUN_0090de84(local_c8,pbVar3,uVar2);
    local_a0 = (void *)puVar5[2];
    uStack_a8 = puVar5[1];
    local_b0 = *puVar5;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    FUN_008fa54c(local_e0,&DAT_01bb05c9);
    uVar2 = (ulong)(local_e0[0] >> 1);
    pvVar1 = (void *)((ulong)local_e0 | 1);
    if ((local_e0[0] & 1) != 0) {
      uVar2 = local_d8;
      pvVar1 = local_d0;
    }
    puVar5 = (ulong *)FUN_0090de84(&local_b0,pvVar1,uVar2);
    local_80 = (void *)puVar5[2];
    uStack_88 = puVar5[1];
    local_90 = *puVar5;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    FUN_008fcdb8(local_78,&local_90);
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if ((local_e0[0] & 1) != 0) {
      operator_delete(local_d0);
    }
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    if ((local_c8[0] & 1) != 0) {
      operator_delete(local_b8);
    }
    pvVar1 = (void *)((ulong)local_78 | 1);
    if ((local_78[0] & 1) != 0) {
      pvVar1 = local_68;
    }
    FUN_0099cd34(param_1 + 0x888,pvVar1);
    if ((local_78[0] & 1) != 0) {
      operator_delete(local_68);
    }
  }
LAB_00b70e50:
  FUN_00b70a84(param_1);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b70e84(long param_1,byte *param_2)

{
  long lVar1;
  void *pvVar2;
  void *local_70;
  code *local_68;
  long lStack_60;
  void *local_58;
  undefined8 uStack_50;
  ulong local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*param_2 & 1) == 0) {
    if (*param_2 >> 1 == 0) goto LAB_00b70f9c;
  }
  else if (*(long *)(param_2 + 8) == 0) goto LAB_00b70f9c;
  pvVar2 = operator_new(0x12b8);
  FUN_00ca509c(pvVar2,param_2);
  local_70 = pvVar2;
  FUN_00b70ff8(param_1 + 0x8b8,&local_70);
  FUN_00f023ec(param_1 + 0x790,local_70,1);
  local_48 = (ulong)*(uint *)(param_1 + 0x8b8);
  local_40 = DAT_03210c64;
  local_68 = FUN_00b71080;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  lStack_60 = param_1;
  FUN_009693a0((long)local_70 + 8,&local_68);
  pvVar2 = local_70;
  FUN_008fa54c(&local_68,"TALENTS.UPGRADE.");
  FUN_00ca57b0(pvVar2,1,&local_68);
  if (((ulong)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  pvVar2 = local_70;
  FUN_008fa54c(&local_68,"TALENTS.NEWTALENT.");
  FUN_00ca57b0(pvVar2,1,&local_68);
  if (((ulong)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
LAB_00b70f9c:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined1  [16] FUN_00b70fc8(long param_1)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  if (*(int *)(param_1 + 0x8b8) != 0) {
    FUN_00f13e54(param_1 + 0x790);
    auVar1._4_4_ = extraout_var;
    auVar1._0_4_ = extraout_s0;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  return ZEXT416(DAT_03218ef8);
}




void FUN_00b70ff8(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00b71238(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}

