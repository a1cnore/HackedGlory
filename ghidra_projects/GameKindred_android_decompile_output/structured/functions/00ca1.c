// functions/00ca1 — 16 functions
#include "libGameKindred.h"




void FUN_00ca10e8(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  undefined8 uVar9;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar7 = FUN_00f02540();
  if ((uVar7 & 1) != 0) {
    local_70 = (**(code **)(**(long **)(param_3 + 0x20) + 0x48))();
    uStack_6c = param_2;
    FUN_00f13f18(param_3,&local_70);
  }
  lVar1 = param_3 + 0x4b8;
  FUN_00f0d92c(lVar1,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50,&DAT_01bc02d0);
  lVar2 = param_3 + 0x6d8;
  FUN_00f0d92c(lVar2,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50,&DAT_01bc02d0);
  lVar3 = param_3 + 0x3c8;
  FUN_00f0e578(lVar3,"shiny_checkbox_off");
  lVar4 = param_3 + 0x5e8;
  FUN_00f0e578(lVar4,"shiny_checkbox_off");
  FUN_00f13f08(0x42900000,0x42900000,lVar3);
  FUN_00f13f08(0x42900000,0x42900000,lVar4);
  if ((*(float *)(param_3 + 0x410) != 0.75) || (*(float *)(param_3 + 0x414) != 0.75)) {
    uVar9 = NEON_fmov(0x3f400000,4);
    *(undefined8 *)(param_3 + 0x410) = uVar9;
    FUN_0091ada4(lVar3);
  }
  if ((*(float *)(param_3 + 0x630) != 0.75) || (*(float *)(param_3 + 0x634) != 0.75)) {
    uVar9 = NEON_fmov(0x3f400000,4);
    *(undefined8 *)(param_3 + 0x630) = uVar9;
    FUN_0091ada4(lVar4);
  }
  FUN_00f07b18(0x41b00000,lVar4,0,lVar3,2);
  FUN_00f07b18(0,lVar4,3,lVar3,3);
  FUN_00f07b18(0x42000000,lVar1,3,lVar3,1);
  FUN_00f07b18(0x42000000,lVar2,3,lVar4,1);
  fVar8 = (float)FUN_00f080a0(lVar1,7,param_3,5);
  FUN_00f0db64(fVar8 + -16.0,0,0x3f800000,lVar1);
  FUN_00f0db64(fVar8 + -16.0,0,0x3f800000,lVar2);
  FUN_00f07b18(0,lVar1,5,lVar3,5);
  FUN_00f07b18(0,lVar2,5,lVar4,5);
  FUN_00f13238(param_3 + 0x140);
  FUN_00f07b18(0,param_3 + 0x298,4,param_3,4);
  pcVar5 = "shiny_checkbox_off";
  if (*(char *)(param_3 + 0x808) != '\0') {
    pcVar5 = "shiny_checkbox_on";
  }
  FUN_00f0e578(lVar3,pcVar5);
  pcVar5 = "shiny_checkbox_off";
  if (*(char *)(param_3 + 0x809) != '\0') {
    pcVar5 = "shiny_checkbox_on";
  }
  FUN_00f0e578(lVar4,pcVar5);
  FUN_00f07b18(0,param_3 + 0x140,4,param_3,4);
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ca139c(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  ushort *puVar7;
  
  if (*(char *)(param_1 + 0x80a) == '\0') {
    uVar2 = *(uint *)(param_1 + 0x13c);
    lVar1 = param_1 + 0xb8;
    *(uint *)(param_1 + 0x13c) = uVar2 | 4;
    if ((uVar2 & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x13c) = uVar2 & 0xffff807f | 4;
      FUN_0091ada4(lVar1);
    }
    if ((*(float *)(param_1 + 0xf8) != 0.0) || (*(float *)(param_1 + 0xfc) != 24.0)) {
      *(undefined8 *)(param_1 + 0xf8) = 0x41c0000000000000;
      FUN_0091ada4(lVar1);
    }
    uVar4 = FUN_00efee28(0x3f800000,0x3f000000,FUN_0091aa80);
    uVar5 = FUN_00efef08(0,0,0x3f000000,FUN_0091aa80);
    lVar3 = DAT_03210d00;
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar7;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
      *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
      FUN_00efcd98(puVar7);
      *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    }
    FUN_00efcea4(puVar7,uVar4,uVar5,0);
    FUN_00f01980(lVar1);
    FUN_00f022a0(lVar1,puVar7);
    *(undefined1 *)(param_1 + 0x80a) = 1;
  }
  return;
}




void FUN_00ca1524(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  FUN_00f13ca4();
  plVar2 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_02807838;
  FUN_00f1306c(plVar2);
  plVar1 = param_1 + 0x42;
  FUN_00f0cbb4(plVar1);
  FUN_00b1d5d8(param_1 + 0x8a);
  FUN_00f0d160(param_1 + 0x104);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f133a4(plVar2,plVar1,1);
  FUN_00f0d090(plVar1,param_1 + 0x8a,1);
  FUN_00f133a4(plVar2,param_1 + 0x104,1);
  return;
}




void FUN_00ca15d8(long *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  
  FUN_00b1d77c(param_1 + 0x8a);
  iVar1 = FUN_00cb421c(param_2);
  if (iVar1 == 0) {
    puVar2 = &DAT_01bc02d4;
  }
  else if (iVar1 == 1) {
    puVar2 = &DAT_01bc02d8;
  }
  else {
    if (iVar1 != 2) goto LAB_00ca1644;
    puVar2 = &DAT_01bc02dc;
  }
  FUN_00f0d7fc(param_1 + 0x104,puVar2);
LAB_00ca1644:
  *(uint *)((long)param_1 + 0x8a4) =
       *(uint *)((long)param_1 + 0x8a4) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x8a4) & 3 | (uint)(0 < param_3) << 2;
  if (((DAT_0313ca90 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0313ca90), iVar1 != 0)) {
    FUN_00e70510(&DAT_0313ca80);
    __cxa_atexit(FUN_0090e338,&DAT_0313ca80,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_0313ca90);
  }
  FUN_00e70e18(&DAT_0313ca80,&DAT_01bb6d43,param_3);
  FUN_00f0d75c(param_1 + 0x104,&DAT_0313ca80);
                    /* WARNING: Could not recover jumptable at 0x00ca16a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00ca16f4(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_00f02540();
  if ((uVar4 & 1) != 0) {
    uVar5 = (**(code **)(**(long **)(param_3 + 0x20) + 0x48))();
    local_40 = CONCAT44(param_2,uVar5);
    FUN_00f13f18(param_3,&local_40);
  }
  lVar1 = param_3 + 0x450;
  local_40 = 0x4000000000000000;
  FUN_00b1da7c(lVar1,PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0);
  FUN_00b1daac(0x3f19999a,lVar1);
  FUN_00b1d944(lVar1,1);
  FUN_00b1d9c0(lVar1,&local_40,0xdc403020);
  lVar2 = param_3 + 0x210;
  FUN_00f0d07c(lVar2,2);
  FUN_00f13f08(0x432a0000,0x432a0000,lVar2);
  FUN_00f07940(0,0,lVar1,8,lVar2,8);
  FUN_00f0cd00(lVar2);
  lVar1 = param_3 + 0x820;
  FUN_00f0d378(lVar1,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  FUN_00f0da30(lVar1,1);
  FUN_00f0da80(lVar1,&DAT_01bc02e0);
  FUN_00f0da8c(lVar1,&local_40);
  FUN_00f07b18(0x41000000,lVar1,0,lVar2,2);
  FUN_00f07b18(0,lVar1,4,lVar2,4);
  FUN_00f13238(param_3 + 0xb8);
  FUN_00f07940(0,0x41c00000,param_3 + 0xb8,8,param_3,8);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ca189c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  FUN_00f13ca4();
  plVar2 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_02807980;
  FUN_00f1306c(plVar2);
  plVar1 = param_1 + 0x42;
  FUN_00f0e4a8(plVar1);
  FUN_00f0d160(param_1 + 0x60);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f133a4(plVar2,plVar1,1);
  FUN_00f133a4(plVar2,param_1 + 0x60,1);
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"brawl_trophy");
  return;
}




void FUN_00ca1948(long *param_1,ulong param_2)

{
  int iVar1;
  undefined8 extraout_x1;
  ulong uVar2;
  
  uVar2 = param_2 & 0xffffffff;
  if (((DAT_0313caa8 & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&DAT_0313caa8,param_2,uVar2), iVar1 != 0)) {
    FUN_00e70510(&DAT_0313ca98,extraout_x1,uVar2);
    __cxa_atexit(FUN_0090e338,&DAT_0313ca98,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_0313caa8);
  }
  FUN_00e70e18(&DAT_0313ca98,&DAT_01bb6d43,uVar2);
  FUN_00f0d75c(param_1 + 0x60,&DAT_0313ca98);
                    /* WARNING: Could not recover jumptable at 0x00ca19ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00ca1a04(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_00f02540();
  if ((uVar4 & 1) != 0) {
    uVar5 = (**(code **)(**(long **)(param_3 + 0x20) + 0x48))();
    local_40 = CONCAT44(param_2,uVar5);
    FUN_00f13f18(param_3,&local_40);
  }
  lVar1 = param_3 + 0x210;
  local_40 = 0x4000000000000000;
  FUN_00f13f08(0x432a0000,0x432a0000,lVar1);
  lVar2 = param_3 + 0x300;
  FUN_00f0d378(lVar2,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  FUN_00f0da30(lVar2,1);
  FUN_00f0da80(lVar2,&DAT_01bc02e0);
  FUN_00f0da8c(lVar2,&local_40);
  FUN_00f07b18(0x41000000,lVar2,0,lVar1,2);
  FUN_00f07b18(0,lVar2,4,lVar1,4);
  FUN_00f13238(param_3 + 0xb8);
  FUN_00f07940(0,0,param_3 + 0xb8,8,param_3,8);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ca1b34(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  
  FUN_00f13ca4();
  plVar3 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_02807ac8;
  FUN_00f1306c(plVar3);
  plVar1 = param_1 + 0x42;
  FUN_00f0d160(plVar1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_00f133a4(plVar3,plVar1,1);
  FUN_00f0d378(plVar1,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  uVar2 = FUN_00e6ce7c("PLAY_MENU_TILE_BANNED",0);
  FUN_00f0d75c(plVar1,uVar2);
  return;
}




void FUN_00ca1bd8(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00f02540();
  if ((uVar3 & 1) != 0) {
    local_40 = (**(code **)(*(long *)param_3[4] + 0x48))();
    uStack_3c = param_2;
    FUN_00f13f18(param_3,&local_40);
  }
  plVar1 = param_3 + 0x42;
  fVar4 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  FUN_00f0dad0(fVar4 + -64.0,plVar1,1);
  FUN_00f0dac8(plVar1,3);
  FUN_00f07940(0,0,plVar1,8,param_3,8);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ca1ca0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028075a8;
  FUN_00f0d3a4(param_1 + 0x42);
  param_1[0x17] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x2e);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ca1cfc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028075a8;
  FUN_00f0d3a4(param_1 + 0x42);
  param_1[0x17] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x2e);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00ca1d60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028076f0;
  FUN_00f0d3a4(param_1 + 0xdb);
  param_1[0xbd] = &PTR_FUN_028266f0;
  param_1[0xd4] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xd7);
  FUN_00f13d08(param_1 + 0xbd);
  FUN_00f0d3a4(param_1 + 0x97);
  param_1[0x79] = &PTR_FUN_028266f0;
  param_1[0x90] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x93);
  FUN_00f13d08(param_1 + 0x79);
  FUN_00f0d3a4(param_1 + 0x53);
  param_1[0x28] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x3f);
  FUN_00f13d08(param_1 + 0x28);
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ca1e24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028076f0;
  FUN_00f0d3a4(param_1 + 0xdb);
  param_1[0xbd] = &PTR_FUN_028266f0;
  param_1[0xd4] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xd7);
  FUN_00f13d08(param_1 + 0xbd);
  FUN_00f0d3a4(param_1 + 0x97);
  param_1[0x79] = &PTR_FUN_028266f0;
  param_1[0x90] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x93);
  FUN_00f13d08(param_1 + 0x79);
  FUN_00f0d3a4(param_1 + 0x53);
  param_1[0x28] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x3f);
  FUN_00f13d08(param_1 + 0x28);
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00ca1ef0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02807838;
  FUN_00f0d3a4(param_1 + 0x104);
  FUN_00ab3254(param_1 + 0x8a);
  param_1[0x42] = &PTR_FUN_028263c0;
  FUN_00f01868(param_1 + 0x76);
  FUN_00f13d08(param_1 + 0x42);
  param_1[0x17] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x2e);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ca1f78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02807838;
  FUN_00f0d3a4(param_1 + 0x104);
  FUN_00ab3254(param_1 + 0x8a);
  param_1[0x42] = &PTR_FUN_028263c0;
  FUN_00f01868(param_1 + 0x76);
  FUN_00f13d08(param_1 + 0x42);
  param_1[0x17] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x2e);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}

