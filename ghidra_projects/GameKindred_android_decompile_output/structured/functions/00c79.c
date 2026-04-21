// functions/00c79 — 34 functions
#include "libGameKindred.h"




void FUN_00c7951c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c79528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
  return;
}




void FUN_00c7952c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c79538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0xb8))();
  return;
}




void FUN_00c7953c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c79548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
  return;
}




void FUN_00c7954c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c79558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))();
  return;
}




void FUN_00c7955c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c79568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x20))();
  return;
}




void FUN_00c7956c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c79578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x28))();
  return;
}




void FUN_00c7957c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c79588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x30))();
  return;
}




void FUN_00c7958c(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 0xe0) + 0x84);
  *(uint *)(*(long *)(param_1 + 0xe0) + 0x84) = uVar1 & 0xfffffff8 | uVar1 & 3 | (param_2 & 1) << 2;
  return;
}




void FUN_00c795a8(void *param_1)

{
  FUN_00f13d08();
  operator_delete(param_1);
  return;
}




void FUN_00c795cc(long *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00f13db4();
  lVar5 = 0;
  uVar3 = 0;
  *(uint *)(param_1[0x1f] + 0x84) = *(uint *)(param_1[0x1f] + 0x84) & 0xfffffffb;
  do {
    FUN_00f13f08(0x43040000,0x43040000,*(undefined8 *)((long)param_1 + lVar5 + 0xe8));
    local_60 = 0x4304000043040000;
    FUN_00c93b48(*(undefined8 *)((long)param_1 + lVar5 + 0xe8),&local_60);
    lVar4 = lVar5 + 0xe8;
    lVar5 = lVar5 + 8;
    uVar3 = (*(uint *)(*(long *)((long)param_1 + lVar4) + 0x84) >> 2 & 1) + uVar3;
  } while (lVar5 != 0x28);
  fVar7 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  fVar8 = 0.0;
  if (uVar3 != 0 && uVar3 - 1 != 0) {
    fVar8 = (fVar7 + -64.0 + (float)uVar3 * -132.0) / (float)(uVar3 - 1);
  }
  lVar5 = 0;
  iVar2 = 0;
  do {
    lVar4 = param_1[lVar5 + 0x1e];
    if ((*(byte *)(lVar4 + 0x84) >> 2 & 1) != 0) {
      lVar6 = param_1[(long)iVar2 + 0x1d];
      FUN_00f07b18(fVar8,lVar4,3,lVar6,1);
      FUN_00f07b18(0,lVar4,5,lVar6,5);
      iVar2 = (int)lVar5 + 1;
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 4);
  (**(code **)(*(long *)param_1[0x1b] + 0x138))();
  FUN_00f07a18(0,0,param_1[0x1b],8);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c7975c(long param_1,ulong param_2,undefined8 param_3)

{
  FUN_00b1a8e8(*(long *)(param_1 + (param_2 & 0xffffffff) * 8 + 0xe8) + 0xbd0,param_3);
  return;
}




void FUN_00c79770(long *param_1)

{
  FUN_00c95600(param_1[0x19]);
                    /* WARNING: Could not recover jumptable at 0x00c7979c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00c797a0(long *param_1)

{
  FUN_00c95600(param_1[0x1a]);
                    /* WARNING: Could not recover jumptable at 0x00c797cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00c797d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c797dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0xb8))();
  return;
}




void FUN_00c797e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c797ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
  return;
}




void FUN_00c797f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c797fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
  return;
}




void FUN_00c79800(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c7980c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))();
  return;
}




void FUN_00c79810(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c7981c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x20))();
  return;
}




void FUN_00c79820(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c7982c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x30))();
  return;
}




void FUN_00c79830(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c7983c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x28))();
  return;
}




void * FUN_00c79840(long *param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x158);
  FUN_00f1306c();
  *(uint *)((long)pvVar1 + 0x84) =
       *(uint *)((long)pvVar1 + 0x84) & 0xffffffc0 |
       *(uint *)((long)pvVar1 + 0x84) & 0x1f | (param_2 & 1) << 5;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void * FUN_00c798a8(long *param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x670);
  FUN_00c95460();
  *(uint *)((long)pvVar1 + 0x84) =
       *(uint *)((long)pvVar1 + 0x84) & 0xffffffc0 |
       *(uint *)((long)pvVar1 + 0x84) & 0x1f | (param_2 & 1) << 5;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void * FUN_00c79910(long *param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1270);
  FUN_00c95cec();
  *(uint *)((long)pvVar1 + 0x84) =
       *(uint *)((long)pvVar1 + 0x84) & 0xffffffc0 |
       *(uint *)((long)pvVar1 + 0x84) & 0x1f | (param_2 & 1) << 5;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void FUN_00c79978(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  code *local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  FUN_00ecf178();
  plVar1 = param_1 + 0x49;
  param_1[0x48] = 0;
  *param_1 = (long)&PTR_FUN_028028a0;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x67;
  FUN_00f1306c(plVar2);
  plVar3 = param_1 + 0x92;
  FUN_00f0d160(plVar3);
  plVar4 = param_1 + 0xb8;
  FUN_00b25254(plVar4);
  uVar6 = FUN_00e6a474("homepanel_cornerwidget_battlepass_tile");
  uVar7 = FUN_0091ed5c("homepanel_cornerwidget_battlepass_tile",uVar6,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0x80000000 |
       *(uint *)((long)param_1 + 0x84) & 0x7fff | (uVar7 & 0xffff) << 0xf;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f133a4(plVar2,plVar3,1);
  FUN_00f133a4(plVar2,plVar4,1);
  FUN_00f0e6e8(plVar1,0);
  FUN_00f0e548(plVar1,PTR_s_build___VGX_common_atlas_02be3540,"corner_widget_linktile_bg");
  uVar7 = *(uint *)((long)param_1 + 0x2cc);
  if ((uVar7 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x2cc) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x6600;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0d7fc(plVar3,&DAT_01bbebde);
  FUN_00f0d9b0(plVar3,1);
  FUN_00f0d378(plVar3,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  uVar8 = FUN_00e6ce7c("MENU_MARKET_FEATURED_TIME_LEFT",0);
  FUN_00b252ac(plVar4,uVar8,0,0);
  FUN_00f0d7fc(plVar4,&DAT_01bbebde);
  FUN_00f0d9b0(plVar4,1);
  FUN_00f0d378(plVar4,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80);
  local_60 = DAT_03210c64;
  local_88 = FUN_00c79bac;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  FUN_009693a0(param_1 + 1,&local_88);
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c79bac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c79bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x240))();
  return;
}




void FUN_00c79bbc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028028a0;
  param_1[0xb8] = &PTR_FUN_027d3cc8;
  param_1[0xcf] = &PTR_FUN_027d3e40;
  if ((void *)param_1[0xe1] != (void *)0x0) {
    operator_delete__((void *)param_1[0xe1]);
    param_1[0xe1] = 0;
    param_1[0xe0] = 0;
  }
  FUN_00f0d3a4(param_1 + 0xb8);
  FUN_00f0d3a4(param_1 + 0x92);
  param_1[0x67] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x7e);
  FUN_00f13d08(param_1 + 0x67);
  param_1[0x49] = &PTR_FUN_028266f0;
  param_1[0x60] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 99);
  FUN_00f13d08(param_1 + 0x49);
  FUN_00ecf74c(param_1);
  return;
}




void FUN_00c79c7c(void *param_1)

{
  FUN_00c79bbc();
  operator_delete(param_1);
  return;
}




void FUN_00c79ca0(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  float local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_00f13db4();
  local_50 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  uStack_4c = param_2;
  FUN_00f13f18(param_3 + 0x49,&local_50);
  plVar1 = param_3 + 0x92;
  FUN_00f0dad0(local_50 + -64.0,plVar1,1);
  plVar2 = param_3 + 0xb8;
  FUN_00f0dad0(local_50 + -64.0,plVar2,1);
  FUN_00f07b18(0x40800000,plVar2,0,plVar1,2);
  FUN_00f07b18(0,plVar2,3,plVar1,3);
  FUN_00f13238(param_3 + 0x67);
  FUN_00f07940(0x42000000,0x42000000,param_3 + 0x67,0,param_3,0);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




int FUN_00c79dac(long param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if ((float)param_2 + -64.0 <= 0.0) {
    iVar1 = 100;
  }
  else {
    iVar2 = (int)((float)param_2 + -64.0);
    iVar1 = FUN_00f0d678(param_1 + 0x490,iVar2);
    iVar2 = FUN_00f0d678(param_1 + 0x5c0,iVar2);
    iVar1 = (int)((float)iVar1 + 32.0 + 4.0 + (float)iVar2 + 32.0);
  }
  return iVar1;
}




void FUN_00c79e34(long *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)((long)param_1 + 0x84);
  if (((param_2 ^ uVar1 >> 2) & 1) != 0) {
    *(uint *)((long)param_1 + 0x84) = uVar1 & 0xfffffff8 | uVar1 & 3 | (param_2 & 1) << 2;
                    /* WARNING: Could not recover jumptable at 0x00c79e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xe8))();
    return;
  }
  return;
}




void FUN_00c79e5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c79e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x240))();
  return;
}




void FUN_00c79e6c(long *param_1)

{
  FUN_00f0d75c(param_1 + 0x92);
                    /* WARNING: Could not recover jumptable at 0x00c79e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00c79e9c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_40;
  void *local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_2;
  FUN_00cb61fc(&local_40,param_2);
  FUN_00b252ac(param_1 + 0x5c0,&local_40,1,1);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
    local_40 = 0;
    local_38 = (void *)0x0;
  }
  FUN_00b25438(param_1 + 0x5c0,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c79f20(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  code *local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  FUN_00ecf178();
  plVar1 = param_1 + 0x49;
  param_1[0x48] = 0;
  *param_1 = (long)&PTR_FUN_028029f8;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x67;
  FUN_00f0d160(plVar2);
  plVar3 = param_1 + 0x8d;
  FUN_00f0d160(plVar3);
  plVar4 = param_1 + 0xb3;
  FUN_00b25254(plVar4);
  uVar6 = FUN_00e6a474("homepanel_cornerwidget_events_tile");
  uVar7 = FUN_0091ed5c("homepanel_cornerwidget_events_tile",uVar6,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0x80000000 |
       *(uint *)((long)param_1 + 0x84) & 0x7fff | (uVar7 & 0xffff) << 0xf;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_00f0e548(plVar1,PTR_s_build___VGX_common_atlas_02be3540,"corner_widget_linktile_bg");
  uVar7 = *(uint *)((long)param_1 + 0x2cc);
  if ((uVar7 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x2cc) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x6c00;
    FUN_0091ada4(plVar1);
  }
  local_88 = (code *)CONCAT44(local_88._4_4_,0xffe0e0e0);
  FUN_00f0e670(plVar1,&local_88,2);
  FUN_00f0d378(plVar2,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  FUN_00f0d7fc(plVar2,&DAT_01bee7fa);
  uVar8 = FUN_00e6ce7c("MENU_EVENTS_POPUP_TITLE",0);
  FUN_00f0d75c(plVar2,uVar8);
  FUN_00f0d378(plVar4,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80);
  uVar8 = FUN_00e6ce7c("MENU_MARKET_FEATURED_TIME_LEFT",0);
  FUN_00b252ac(plVar4,uVar8,0,0);
  FUN_00f0d7fc(plVar4,&DAT_01bbec42);
  *(uint *)((long)param_1 + 0x61c) = *(uint *)((long)param_1 + 0x61c) & 0xfffffffb;
  FUN_00f0d378(plVar3,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80);
  FUN_00f0d7fc(plVar3,&DAT_01bbec42);
  FUN_00f0d9b0(plVar3,1);
  local_60 = DAT_03210c64;
  local_88 = FUN_00c7a1ac;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  FUN_009693a0(param_1 + 1,&local_88);
  (**(code **)(*param_1 + 0x90))(param_1);
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

