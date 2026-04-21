// functions/00ca4 — 24 functions
#include "libGameKindred.h"




void FUN_00ca4074(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  
  if (*(long **)(param_1 + 0x140) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x140) + 8))();
  }
  *(undefined8 *)(param_1 + 0x140) = 0;
  if (*(long **)(param_1 + 0x148) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x148) + 8))();
  }
  *(undefined8 *)(param_1 + 0x148) = 0;
  plVar1 = operator_new(0x1a8);
  FUN_00f13ca4();
  *plVar1 = (long)&PTR_FUN_02807ea0;
  FUN_00f0e4a8(plVar1 + 0x17);
  (**(code **)(*plVar1 + 0x78))(plVar1,plVar1 + 0x17,1);
  *(long **)(param_1 + 0x148) = plVar1;
  FUN_00ca3a20(plVar1,param_2,param_3);
  FUN_00f0d75c(param_1 + 0x240,param_4);
  FUN_00f023ec(param_1 + 0xb8,*(undefined8 *)(param_1 + 0x148),1);
  FUN_00ca3d94(param_1);
  return;
}




void FUN_00ca4154(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_02808130;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x35;
  FUN_00f0fe84(plVar2);
  plVar3 = param_1 + 0x5f;
  FUN_00f0e4a8(plVar3);
  FUN_00f13ca4(param_1 + 0x7d);
  FUN_00f13ca4(param_1 + 0x94);
  plVar4 = param_1 + 0xab;
  FUN_00ca3af8(plVar4);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x94,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x7d,1);
  FUN_00ca3f3c(0x3f800000,plVar4,PTR_s_build___MenuHomepagePartsCommon__02be35e8,"quest_item_glow");
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  uVar6 = *(uint *)((long)param_1 + 0x37c);
  if ((uVar6 & 0x7f80) != 0x1e80) {
    *(uint *)((long)param_1 + 0x37c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x1e80;
    FUN_0091ada4(plVar3);
  }
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) & 0xffffffbf;
  FUN_00f0e548(plVar1,PTR_s_build___MenuHomepagePartsCommon__02be35e8,"quest_normal_state");
  uVar6 = *(uint *)((long)param_1 + 0x13c);
  if ((uVar6 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x13c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar1);
    uVar6 = *(uint *)((long)param_1 + 0x13c);
  }
  uVar5 = *(uint *)((long)param_1 + 0x22c);
  *(uint *)((long)param_1 + 0x13c) = uVar6 & 0xfffffffb;
  uVar6 = uVar5 & 0xfffffffb;
  *(uint *)((long)param_1 + 0x22c) = uVar6;
  if ((uVar5 & 0x7f80) != 0x6b00) {
    *(uint *)((long)param_1 + 0x22c) = uVar5 & 0xffff807b | 0x6b00;
    FUN_0091ada4(plVar2);
    uVar6 = *(uint *)((long)param_1 + 0x22c);
  }
  *(uint *)((long)param_1 + 0x22c) = uVar6 & 0xffffffbf;
  FUN_00f0ff6c(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530);
  FUN_00f0ff74(plVar2,0,0,0,0,"quest_item_highlight_top",0,0,0,0,0,0,0,0,0,0,0,
               "quest_item_highlight_mid",0,0,0,0,0,0,0,0,0,0,0,"quest_item_highlight_bot",0,0,0,0,0
               ,0,0);
  return;
}




void FUN_00ca442c(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x22c) =
       *(uint *)(param_1 + 0x22c) & 0xfffffff8 | *(uint *)(param_1 + 0x22c) & 3 | (param_2 & 1) << 2
  ;
  return;
}




void FUN_00ca4440(long param_1)

{
  FUN_00ca3fb0(param_1 + 0x558);
  return;
}




void FUN_00ca4448(long param_1)

{
  FUN_00ca4074(param_1 + 0x558);
  return;
}




void FUN_00ca4450(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  undefined4 local_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar1 = ~param_2 & 1;
  *(uint *)(param_1 + 0x46c) =
       *(uint *)(param_1 + 0x46c) & 0xfffffff8 | *(uint *)(param_1 + 0x46c) & 3 | uVar1 << 2;
  *(uint *)(param_1 + 0x524) =
       *(uint *)(param_1 + 0x524) & 0xfffffff8 | *(uint *)(param_1 + 0x524) & 3 | uVar1 << 2;
  *(uint *)(param_1 + 0x5dc) =
       *(uint *)(param_1 + 0x5dc) & 0xfffffff8 | *(uint *)(param_1 + 0x5dc) & 3 | uVar1 << 2;
  if ((~param_2 & 1) == 0) {
    local_2c = 0xff969696;
  }
  else {
    local_2c = 0xffffffff;
  }
  FUN_00f0e670(param_1 + 0xb8,&local_2c,2);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ca44ec(long param_1)

{
  if (*(long **)(param_1 + 0x698) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x698) + 8))();
  }
  *(undefined8 *)(param_1 + 0x698) = 0;
  if (*(long **)(param_1 + 0x6a0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x6a0) + 8))();
  }
  *(undefined8 *)(param_1 + 0x6a0) = 0;
  return;
}




float FUN_00ca4538(undefined1 param_1 [16],float param_2,long param_3)

{
  float fVar1;
  
  FUN_00f01c54(param_3 + 0x4a0,1,0,0,1);
  fVar1 = param_2 + 100.0;
  if (param_2 + 100.0 <= 420.0) {
    fVar1 = 420.0;
  }
  return fVar1;
}




void FUN_00ca4578(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  
  lVar1 = param_3 + 0xb8;
  uVar6 = param_2;
  FUN_00f13f08(lVar1);
  lVar2 = param_3 + 0x1a8;
  FUN_00f10374(lVar2,1);
  uVar7 = uVar6;
  FUN_00f10374(lVar2,7);
  FUN_00f10644(0,param_1,0,uVar6,param_2,uVar7,lVar2);
  FUN_00f13f08(param_1,param_2,lVar2);
  FUN_00f07940(0,0,lVar2,8,param_3,8);
  lVar2 = param_3 + 0x558;
  fVar8 = (float)param_2 + -100.0;
  fVar4 = fVar8;
  if (fVar8 <= 420.0) {
    fVar4 = 420.0;
  }
  FUN_00f13f08(0x43d20000,fVar4,lVar2);
  lVar3 = param_3 + 1000;
  FUN_00f13f08(0x43c80000,fVar8,lVar3);
  fVar4 = (float)FUN_00f13e54(lVar2);
  fVar5 = (float)FUN_00f13e54(lVar3);
  FUN_00f13f08(((float)param_1 - fVar4) - fVar5,fVar8,param_3 + 0x4a0);
  FUN_00f07940(0,0,lVar2,7,lVar1,7);
  FUN_00f07940(0,0,lVar3,5,lVar1,5);
  FUN_00f07940(0,0,lVar2,7,param_3,7);
  FUN_00f07940(0,0,lVar3,5,param_3,5);
  FUN_00f07940(0,0,param_3 + 0x4a0,5,lVar3,7);
  lVar2 = param_3 + 0x2f8;
  FUN_00f0e700(lVar2);
  FUN_00f13f08(param_1,lVar2);
  FUN_00f07940(0,0,lVar2,6,param_3,6);
  FUN_00f07940(0,0,lVar2,6,lVar1,6);
  return;
}




void FUN_00ca4770(long *param_1)

{
  FUN_00f13ca4();
  *param_1 = (long)&PTR_FUN_02808278;
  FUN_00b25254(param_1 + 0x17);
                    /* WARNING: Could not recover jumptable at 0x00ca47bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x17,1);
  return;
}




void FUN_00ca47c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02808278;
  param_1[0x17] = &PTR_FUN_027d3cc8;
  param_1[0x2e] = &PTR_FUN_027d3e40;
  if ((void *)param_1[0x40] != (void *)0x0) {
    operator_delete__((void *)param_1[0x40]);
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ca4824(void *param_1)

{
  FUN_00ca47c0();
  operator_delete(param_1);
  return;
}




void FUN_00ca4848(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long lVar1;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f13f08();
  local_40 = (**(code **)(*param_3 + 0x48))(param_3);
  uStack_3c = param_2;
  FUN_00f13f18(param_3 + 0x17,&local_40);
  FUN_00f07940(0,0,param_3 + 0x17,8,param_3,8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ca48d8(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  plVar1 = param_3 + 0x17;
  uVar2 = *(uint *)((long)param_3 + 0x13c);
  if ((uVar2 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_3 + 0x13c) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x3300;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0d378(plVar1,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50);
  local_40 = 0xffffc591;
  FUN_00f0d7fc(plVar1,&local_40);
  FUN_00f0d998(plVar1,1);
  FUN_00f0dac8(plVar1,3);
  uVar4 = FUN_00e6ce7c("MENU_LANDING_PAGE_SIDEBAR_QUEST_TILE_TIME_REMAINING",0);
  FUN_00b252ac(plVar1,uVar4,1,1);
  local_40 = (**(code **)(*param_3 + 0x58))(param_3,1,0,0,1);
  uStack_3c = param_2;
  FUN_00f13f18(param_3,&local_40);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ca49e4(long param_1)

{
  if ((*(byte *)(param_1 + 0x84) >> 2 & 1) == 0) {
    return;
  }
  FUN_00b25438(param_1 + 0xb8);
  return;
}




void FUN_00ca49f8(long param_1,undefined8 param_2)

{
  FUN_00b252ac(param_1 + 0xb8,param_2,1,1);
  return;
}




void FUN_00ca4a08(long param_1,uint param_2)

{
  FUN_00f0d9b0(param_1 + 0xb8,param_2 & 1);
  return;
}




void FUN_00ca4a14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02807ea0;
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ca4a70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02807ea0;
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00ca4ad4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02808130;
  FUN_00ca3c60(param_1 + 0xab);
  FUN_00f13d08(param_1 + 0x94);
  FUN_00f13d08(param_1 + 0x7d);
  param_1[0x5f] = &PTR_FUN_028266f0;
  param_1[0x76] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x79);
  FUN_00f13d08(param_1 + 0x5f);
  param_1[0x35] = &PTR_FUN_02826f38;
  param_1[0x4c] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x4f);
  FUN_00f13d08(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ca4b98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02808130;
  FUN_00ca3c60(param_1 + 0xab);
  FUN_00f13d08(param_1 + 0x94);
  FUN_00f13d08(param_1 + 0x7d);
  param_1[0x5f] = &PTR_FUN_028266f0;
  param_1[0x76] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x79);
  FUN_00f13d08(param_1 + 0x5f);
  param_1[0x35] = &PTR_FUN_02826f38;
  param_1[0x4c] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x4f);
  FUN_00f13d08(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00ca4c64(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  
  FUN_00f13ca4();
  plVar7 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_028083c0;
  FUN_00f0e4a8(plVar7);
  plVar1 = param_1 + 0x35;
  FUN_00f0d160(plVar1);
  plVar2 = param_1 + 0x5b;
  FUN_00f0d160(plVar2);
  plVar3 = param_1 + 0x81;
  FUN_00f0d160(plVar3);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  uVar5 = FUN_00f13624();
  FUN_00f13be8(uVar5,10);
  FUN_00f1515c(uVar5,plVar7,0,10);
  FUN_00f1515c(uVar5,plVar1,0,10);
  FUN_00f1515c(uVar5,plVar2,0,10);
  FUN_00f1515c(uVar5,plVar3,1,10);
  FUN_00f13fd8(param_1,uVar5);
  uVar6 = FUN_0092ea9c();
  ppuVar4 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
  if ((uVar6 & 1) == 0) {
    ppuVar4 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78;
  }
  FUN_00f0d92c(plVar1,*ppuVar4,&DAT_01bee7fa);
  FUN_00f0d92c(plVar2,*ppuVar4,&DAT_01bee7fa);
  FUN_00f0d92c(plVar3,*ppuVar4,&DAT_01bee7fa);
  FUN_00f0d7fc(plVar3,&DAT_01bc03d0);
  return;
}




void FUN_00ca4e00(undefined8 param_1,undefined8 param_2,long param_3,uint param_4,int param_5,
                 undefined8 param_6)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (param_4 < 4) {
    puVar5 = (&PTR_s_stat_offense_02808500)[(int)param_4];
  }
  else {
    puVar5 = &DAT_01e277f2;
  }
  FUN_00f0e548(param_3 + 0xb8,PTR_s_build___MenuPartsCommon_tga_02be3530,puVar5);
  FUN_00e70510(&local_58);
  FUN_00cb1d0c(param_1,param_5,&local_58,0);
  FUN_00f0d75c(param_3 + 0x2d8,&local_58);
  FUN_00f0d75c(param_3 + 0x1a8,param_6);
  if ((float)param_2 == 0.0) {
    uVar4 = FUN_00f02540(param_3 + 0x408);
    if ((uVar4 & 1) != 0) {
      FUN_00f01a4c(param_3 + 0x408,1);
    }
  }
  else {
    FUN_00e70510(&local_68);
    pcVar2 = "(+[MODIFIER_VALUE])";
    if ((float)param_2 <= 0.0) {
      pcVar2 = "([MODIFIER_VALUE])";
    }
    FUN_00e705c8(&local_78,pcVar2);
    iVar1 = 2;
    if (1 < param_5 - 5U) {
      iVar1 = param_5;
    }
    FUN_00cb1d0c(param_2,iVar1,&local_68,0);
    FUN_00e705c8(&local_88,"[MODIFIER_VALUE]");
    FUN_00e71248(&local_78,0,&local_88,&local_68);
    if (local_80 != (void *)0x0) {
      operator_delete__(local_80);
      local_88 = 0;
      local_80 = (void *)0x0;
    }
    FUN_00f0d75c(param_3 + 0x408,&local_78);
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
  }
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ca4fac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028083c0;
  FUN_00f0d3a4(param_1 + 0x81);
  FUN_00f0d3a4(param_1 + 0x5b);
  FUN_00f0d3a4(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}

