// functions/00c7a — 33 functions
#include "libGameKindred.h"




void FUN_00c7a1ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c7a1b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x240))();
  return;
}




void FUN_00c7a1bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028029f8;
  param_1[0xb3] = &PTR_FUN_027d3cc8;
  param_1[0xca] = &PTR_FUN_027d3e40;
  if ((void *)param_1[0xdc] != (void *)0x0) {
    operator_delete__((void *)param_1[0xdc]);
    param_1[0xdc] = 0;
    param_1[0xdb] = 0;
  }
  FUN_00f0d3a4(param_1 + 0xb3);
  FUN_00f0d3a4(param_1 + 0x8d);
  FUN_00f0d3a4(param_1 + 0x67);
  param_1[0x49] = &PTR_FUN_028266f0;
  param_1[0x60] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 99);
  FUN_00f13d08(param_1 + 0x49);
  FUN_00ecf74c(param_1);
  return;
}




void FUN_00c7a260(void *param_1)

{
  FUN_00c7a1bc();
  operator_delete(param_1);
  return;
}




void FUN_00c7a284(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  float local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_00f13db4();
  local_40 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  uStack_3c = param_2;
  FUN_00f13f18(param_3 + 0x49,&local_40);
  plVar1 = param_3 + 0x8d;
  FUN_00f0dad0(local_40 + -64.0,plVar1,1);
  plVar2 = param_3 + 0x67;
  FUN_00f07940(0x42000000,0x42000000,plVar2,0,param_3,0);
  FUN_00f07b18(0x41200000,param_3 + 0xb3,3,plVar2,1);
  FUN_00f07d68(param_3 + 0xb3,plVar2);
  FUN_00f07b18(0x40800000,plVar1,0,plVar2,2);
  FUN_00f07b18(0,plVar1,3,plVar2,3);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c7a390(long *param_1)

{
  FUN_00f0d75c(param_1 + 0x67);
                    /* WARNING: Could not recover jumptable at 0x00c7a3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




int FUN_00c7a3c0(long param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if ((float)param_2 + -64.0 <= 0.0) {
    iVar1 = 100;
  }
  else {
    uVar2 = FUN_00f0d704(param_1 + 0x338);
    iVar1 = FUN_00f0d678(param_1 + 0x468,(int)((float)param_2 + -64.0));
    iVar1 = (int)((float)(uVar2 >> 0x20) + 32.0 + 4.0 + (float)iVar1 + 32.0);
  }
  return iVar1;
}




void FUN_00c7a44c(long *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)((long)param_1 + 0x84);
  if (((param_2 ^ uVar1 >> 2) & 1) != 0) {
    *(uint *)((long)param_1 + 0x84) = uVar1 & 0xfffffff8 | uVar1 & 3 | (param_2 & 1) << 2;
                    /* WARNING: Could not recover jumptable at 0x00c7a46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xe8))();
    return;
  }
  return;
}




void FUN_00c7a474(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c7a480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x240))();
  return;
}




void FUN_00c7a484(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_50;
  void *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(uint *)((long)param_1 + 0x61c) = *(uint *)((long)param_1 + 0x61c) | 4;
  local_40 = param_2;
  FUN_00cb61fc(&local_50,param_2);
  FUN_00b252ac(param_1 + 0xb3,&local_50,1,1);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
    local_50 = 0;
    local_48 = (void *)0x0;
  }
  FUN_00b25438(param_1 + 0xb3,&local_40);
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c7a530(long *param_1)

{
  FUN_00f0d75c(param_1 + 0x8d);
                    /* WARNING: Could not recover jumptable at 0x00c7a55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00c7a560(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  code *local_78;
  long *plStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_00ecf178();
  plVar1 = param_1 + 0x49;
  param_1[0x48] = 0;
  *param_1 = (long)&PTR_FUN_02802b50;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x67;
  FUN_00f0d160(plVar2);
  uVar4 = FUN_00e6a474("homepanel_cornerwidget_free_tile");
  uVar5 = FUN_0091ed5c("homepanel_cornerwidget_free_tile",uVar4,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0x80000000 |
       *(uint *)((long)param_1 + 0x84) & 0x7fff | (uVar5 & 0xffff) << 0xf;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  lVar7 = FUN_00c7a958(param_1,1);
  param_1[0x8d] = lVar7;
  FUN_00f0e548(plVar1,PTR_s_build___VGX_common_atlas_02be3540,"corner_widget_linktile_bg");
  uVar5 = *(uint *)((long)param_1 + 0x2cc);
  if ((uVar5 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x2cc) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x6c00;
    FUN_0091ada4(plVar1);
  }
  local_78 = (code *)CONCAT44(local_78._4_4_,0xffa0a0a0);
  FUN_00f0e670(plVar1,&local_78,2);
  FUN_00f0d378(plVar2,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  FUN_00f0d7fc(plVar2,&DAT_01bbec5e);
  uVar8 = FUN_00e6ce7c("QUEST_BUTTON_FREE",0);
  FUN_00f0d75c(plVar2,uVar8);
  local_50 = DAT_03210c64;
  local_78 = FUN_00c7a758;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(param_1 + 1,&local_78);
  iVar6 = (**(code **)(*param_1 + 0x100))(param_1,0x3d4);
  FUN_00f13f08(0x44750000,(float)iVar6,param_1);
  (**(code **)(*param_1 + 0x90))(param_1);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c7a758(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c7a764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x240))();
  return;
}




void FUN_00c7a768(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02802b50;
  FUN_00f0d3a4(param_1 + 0x67);
  param_1[0x49] = &PTR_FUN_028266f0;
  param_1[0x60] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 99);
  FUN_00f13d08(param_1 + 0x49);
  FUN_00ecf74c(param_1);
  return;
}




void FUN_00c7a7cc(void *param_1)

{
  FUN_00c7a768();
  operator_delete(param_1);
  return;
}




void FUN_00c7a7f0(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long lVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f13db4();
  local_30 = (**(code **)(*param_3 + 0x48))(param_3);
  uStack_2c = param_2;
  FUN_00f13f18(param_3 + 0x49,&local_30);
  FUN_00f07940(0x42000000,0x42000000,param_3 + 0x67,0,param_3,0);
  FUN_00f07940(0xc2700000,0,param_3[0x8d],8,param_3,5);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c7a898(long *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)((long)param_1 + 0x84);
  if (((param_2 ^ uVar1 >> 2) & 1) != 0) {
    *(uint *)((long)param_1 + 0x84) = uVar1 & 0xfffffff8 | uVar1 & 3 | (param_2 & 1) << 2;
                    /* WARNING: Could not recover jumptable at 0x00c7a8b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xe8))();
    return;
  }
  return;
}




void FUN_00c7a8c0(long param_1)

{
  FUN_00b1a8e8(*(undefined8 *)(param_1 + 0x468));
  return;
}




void FUN_00c7a8c8(long *param_1)

{
  FUN_00f0d75c(param_1 + 0x67);
                    /* WARNING: Could not recover jumptable at 0x00c7a8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00c7a8f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c7a904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x240))();
  return;
}




int FUN_00c7a908(long param_1,uint param_2)

{
  ulong uVar1;
  
  if (0.0 < (float)param_2 + -64.0) {
    uVar1 = FUN_00f0d704(param_1 + 0x338);
    return (int)((float)(uVar1 >> 0x20) + 64.0);
  }
  return 100;
}




void * FUN_00c7a958(long *param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x6a0);
  FUN_00b1a1c4();
  *(uint *)((long)pvVar1 + 0x84) =
       *(uint *)((long)pvVar1 + 0x84) & 0xffffffc0 |
       *(uint *)((long)pvVar1 + 0x84) & 0x1f | (param_2 & 1) << 5;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void FUN_00c7a9c0(code *param_1)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  long lVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  code *local_78;
  code *pcStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  FUN_00ecf178();
  pcVar1 = param_1 + 0x248;
  *(long *)(param_1 + 0x240) = 0;
  *(undefined ***)param_1 = &PTR_FUN_02802ca8;
  FUN_00f0e4a8(pcVar1);
  pcVar2 = param_1 + 0x338;
  FUN_00f0d160(pcVar2);
  pcVar3 = param_1 + 0x468;
  FUN_00b25254(pcVar3);
  uVar5 = FUN_00e6a474("homepanel_cornerwidget_quests_tile");
  uVar6 = FUN_0091ed5c("homepanel_cornerwidget_quests_tile",uVar5,0x1234);
  *(uint *)(param_1 + 0x84) =
       *(uint *)(param_1 + 0x84) & 0x80000000 |
       *(uint *)(param_1 + 0x84) & 0x7fff | (uVar6 & 0xffff) << 0xf;
  (**(code **)(*(long *)param_1 + 0x78))(param_1,pcVar1,1);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,pcVar2,1);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,pcVar3,1);
  lVar8 = FUN_00c7a958(param_1,1);
  *(long *)(param_1 + 0x5c8) = lVar8;
  FUN_00f0e548(pcVar1,PTR_s_build___VGX_common_atlas_02be3540,"corner_widget_linktile_bg");
  uVar6 = *(uint *)(param_1 + 0x2cc);
  if ((uVar6 & 0x7f80) != 0x6c00) {
    *(uint *)(param_1 + 0x2cc) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x6c00;
    FUN_0091ada4(pcVar1);
  }
  local_78 = (code *)CONCAT44(local_78._4_4_,0xffc0c0c0);
  FUN_00f0e670(pcVar1,&local_78,2);
  FUN_00f0d378(pcVar2,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  FUN_00f0d7fc(pcVar2,&DAT_01bbec95);
  uVar9 = FUN_00e6ce7c("QUEST_BUTTON_QUESTS",0);
  FUN_00f0d75c(pcVar2,uVar9);
  FUN_00f0d378(pcVar3,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80);
  FUN_00f0d7fc(pcVar3,&DAT_01bbec95);
  uVar9 = FUN_00e6ce7c("MENU_MARKET_FEATURED_TIME_LEFT",0);
  FUN_00b252ac(pcVar3,uVar9,0,0);
  FUN_00f0d9b0(pcVar3,1);
  pcStack_70 = thunk_FUN_00c7afa4;
  local_78 = param_1;
  FUN_00f02e98(0x3f000000,&local_78,0,1);
  local_50 = DAT_03210c64;
  local_78 = FUN_00c7ac50;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  pcStack_70 = param_1;
  FUN_009693a0(param_1 + 8,&local_78);
  iVar7 = (**(code **)(*(long *)param_1 + 0x100))(param_1,0x3d4);
  FUN_00f13f08(0x44750000,(float)iVar7,param_1);
  (**(code **)(*(long *)param_1 + 0x90))(param_1);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c7ac50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c7ac5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x240))();
  return;
}




void FUN_00c7ac60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02802ca8;
  param_1[0x8d] = &PTR_FUN_027d3cc8;
  param_1[0xa4] = &PTR_FUN_027d3e40;
  if ((void *)param_1[0xb6] != (void *)0x0) {
    operator_delete__((void *)param_1[0xb6]);
    param_1[0xb6] = 0;
    param_1[0xb5] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x8d);
  FUN_00f0d3a4(param_1 + 0x67);
  param_1[0x49] = &PTR_FUN_028266f0;
  param_1[0x60] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 99);
  FUN_00f13d08(param_1 + 0x49);
  FUN_00ecf74c(param_1);
  return;
}




void FUN_00c7acfc(void *param_1)

{
  FUN_00c7ac60();
  operator_delete(param_1);
  return;
}




void FUN_00c7ad20(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  float local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_00f13db4();
  local_40 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  uStack_3c = param_2;
  FUN_00f13f18(param_3 + 0x49,&local_40);
  plVar1 = param_3 + 0x8d;
  FUN_00f0dad0(local_40 + -64.0,plVar1,1);
  plVar2 = param_3 + 0x67;
  FUN_00f07940(0x42000000,0x42000000,plVar2,0,param_3,0);
  FUN_00f07b18(0x40800000,plVar1,0,plVar2,2);
  FUN_00f07b18(0,plVar1,3,plVar2,3);
  FUN_00f07940(0xc2700000,0,param_3[0xb9],8,param_3,5);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c7ae24(long *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)((long)param_1 + 0x84);
  if (((param_2 ^ uVar1 >> 2) & 1) != 0) {
    *(uint *)((long)param_1 + 0x84) = uVar1 & 0xfffffff8 | uVar1 & 3 | (param_2 & 1) << 2;
                    /* WARNING: Could not recover jumptable at 0x00c7ae44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xe8))();
    return;
  }
  return;
}




void FUN_00c7ae4c(long param_1)

{
  FUN_00b1a8e8(*(undefined8 *)(param_1 + 0x5c8));
  return;
}




void FUN_00c7ae54(long *param_1)

{
  FUN_00f0d75c(param_1 + 0x67);
                    /* WARNING: Could not recover jumptable at 0x00c7ae80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00c7ae84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c7ae90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x240))();
  return;
}




void FUN_00c7ae94(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  void *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = param_2;
  uVar2 = FUN_00e6ce7c("MENU_HOME_PANEL_EXPIRING_QUEST_BODY",0);
  thunk_FUN_00e7051c(&local_50,uVar2);
  FUN_00e705c8(&local_60,"[TIMERTEXT]");
  FUN_00e705c8(&local_70,
               "[NUMBER_HOURS][TIME_UNIT_HOURS][NUMBER_MINUTES][TIME_UNIT_MINUTES][NUMBER_SECONDS][TIME_UNIT_SECONDS]"
              );
  FUN_00e71248(&local_50,0,&local_60,&local_70);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_70 = 0;
    local_68 = (void *)0x0;
  }
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
    local_60 = 0;
    local_58 = (void *)0x0;
  }
  FUN_00b252ac(param_1 + 0x8d,&local_50,1,1);
  FUN_00b25438(param_1 + 0x8d,&local_40);
  *(uint *)((long)param_1 + 0x4ec) = *(uint *)((long)param_1 + 0x4ec) | 4;
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
    local_50 = 0;
    local_48 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c7afa4(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  timespec local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00b252ec(param_1 + 0x468);
  lVar5 = *(long *)(param_1 + 0x5b8);
  iVar2 = clock_gettime(1,&local_48);
  lVar4 = local_48.tv_nsec - *(long *)(param_1 + 0x5a0);
  lVar3 = local_48.tv_sec - *(long *)(param_1 + 0x598);
  if (lVar4 < 0) {
    lVar3 = lVar3 + -1;
    lVar4 = (local_48.tv_nsec + 1000000000) - *(long *)(param_1 + 0x5a0);
  }
  if ((long)((double)lVar5 + (double)(lVar4 + lVar3 * 1000000000) * -1e-09) < 1) {
    *(uint *)(param_1 + 0x4ec) = *(uint *)(param_1 + 0x4ec) & 0xfffffffb;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}




void thunk_FUN_00c7afa4(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  timespec tStack_48;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  FUN_00b252ec(param_1 + 0x468);
  lVar5 = *(long *)(param_1 + 0x5b8);
  iVar2 = clock_gettime(1,&tStack_48);
  lVar4 = tStack_48.tv_nsec - *(long *)(param_1 + 0x5a0);
  lVar3 = tStack_48.tv_sec - *(long *)(param_1 + 0x598);
  if (lVar4 < 0) {
    lVar3 = lVar3 + -1;
    lVar4 = (tStack_48.tv_nsec + 1000000000) - *(long *)(param_1 + 0x5a0);
  }
  if ((long)((double)lVar5 + (double)(lVar4 + lVar3 * 1000000000) * -1e-09) < 1) {
    *(uint *)(param_1 + 0x4ec) = *(uint *)(param_1 + 0x4ec) & 0xfffffffb;
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}

