// functions/00c78 — 18 functions
#include "libGameKindred.h"




void FUN_00c7806c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined *puVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 uVar15;
  byte local_b0 [16];
  void *local_a0;
  code *local_98;
  long *plStack_90;
  void *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar11 = tpidr_el0;
  local_68 = *(long *)(lVar11 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x18;
  param_1[0x17] = 0;
  *param_1 = (long)&PTR_FUN_02802610;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x36;
  FUN_00f0e4a8();
  plVar3 = param_1 + 0x54;
  FUN_00c939c4(plVar3,0);
  plVar4 = param_1 + 0x1ce;
  FUN_00f13ca4(plVar4);
  plVar5 = param_1 + 0x1e5;
  FUN_00f13ca4(plVar5);
  FUN_00b1d5d8();
  FUN_00b1d5d8();
  plVar6 = param_1 + 0x2f0;
  FUN_00f0d160(plVar6);
  plVar7 = param_1 + 0x316;
  FUN_00f0d160(plVar7);
  plVar8 = param_1 + 0x33c;
  FUN_00f0d160(plVar8);
  plVar9 = param_1 + 0x362;
  FUN_00f0d160(plVar9);
  plVar10 = param_1 + 0x388;
  FUN_00f0d160();
  FUN_00b1a1c4(param_1 + 0x3ae);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x3ae,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_00f023ec(plVar4,plVar6,1);
  FUN_00f023ec(plVar4,plVar5,1);
  FUN_00f023ec(plVar5,param_1 + 0x276,1);
  FUN_00f023ec(plVar5,plVar9,1);
  FUN_00f023ec(plVar5,param_1 + 0x1fc,1);
  FUN_00f023ec(plVar5,plVar8,1);
  FUN_00f023ec(plVar5,plVar2,1);
  FUN_00f023ec(plVar5,plVar7,1);
  FUN_00f023ec(plVar5,plVar10,1);
  FUN_00f0e548(plVar1,PTR_s_build___VGX_common_atlas_02be3540,"corner_widget_profile_bg");
  uVar14 = *(uint *)((long)param_1 + 0x144);
  if ((uVar14 & 0x7f80) != 0x7100) {
    *(uint *)((long)param_1 + 0x144) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x7100;
    FUN_0091ada4(plVar1);
  }
  uVar13 = FUN_00e6a474("homepanel_profile_avatar");
  uVar14 = FUN_0091ed5c("homepanel_profile_avatar",uVar13,0x1234);
  *(uint *)((long)param_1 + 0x324) =
       *(uint *)((long)param_1 + 0x324) & 0x80000000 |
       *(uint *)((long)param_1 + 0x324) & 0x7fff | (uVar14 & 0xffff) << 0xf;
  FUN_00c9228c(plVar3,0);
  puVar12 = PTR_s_build___VGX_common_atlas_02be3540;
  FUN_008fa54c(&local_98,"player_avatar_placeholder");
  FUN_008fa54c(local_b0,"player_avatar_placeholder");
  FUN_00c93a88(plVar3,puVar12,&local_98,local_b0);
  if ((local_b0[0] & 1) != 0) {
    operator_delete(local_a0);
  }
  if (((byte)local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  local_70 = DAT_03210c64;
  local_98 = FUN_00c7860c;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = (void *)0x0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 0x55,&local_98);
  FUN_00f0d378(plVar6,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50);
  FUN_00f0d7fc(plVar6,&DAT_01bbea84);
  FUN_00b1da7c(param_1 + 0x1fc,PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78);
  FUN_00b1da7c(param_1 + 0x276,PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78);
  FUN_00f0d378(plVar8,PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78);
  FUN_00f0d378(plVar9,PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78);
  FUN_00f0d378(plVar7,PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78);
  FUN_00f0d378(plVar10,PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78);
  FUN_00f0d7fc(plVar8,&DAT_01bbea84);
  uVar15 = FUN_00e6ce7c("GENERIC_3V3",0);
  FUN_00f0d75c(plVar8,uVar15);
  FUN_00f0d7fc(plVar9,&DAT_01bbea84);
  uVar15 = FUN_00e6ce7c("GENERIC_5V5",0);
  FUN_00f0d75c(plVar9,uVar15);
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"brawl_trophy");
  uVar14 = *(uint *)((long)param_1 + 0x234);
  if ((uVar14 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x234) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x2600;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0d7fc(plVar7,&DAT_01bbea84);
  FUN_00f0d7fc(plVar10,&DAT_01bbea84);
  uVar15 = FUN_00e6ce7c("MENU_PLAY_MENU_MODE_BLITZ_SELECTION_TITLE",0);
  FUN_00f0d75c(plVar10,uVar15);
  plVar1 = param_1 + 0x19;
  local_70 = DAT_03210f58;
  local_98 = FUN_00c7861c;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = (void *)0x0;
  plStack_90 = param_1;
  FUN_009693a0(plVar1,&local_98);
  local_98 = FUN_00c7861c;
  local_70 = DAT_03210f84;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = (void *)0x0;
  plStack_90 = param_1;
  FUN_009693a0(plVar1,&local_98);
  local_70 = DAT_03210f60;
  local_98 = FUN_00c78688;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = (void *)0x0;
  plStack_90 = param_1;
  FUN_009693a0(plVar1,&local_98);
  local_98 = FUN_00c78688;
  local_70 = DAT_03210f8c;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = (void *)0x0;
  plStack_90 = param_1;
  FUN_009693a0(plVar1,&local_98);
  local_70 = DAT_03210fa4;
  local_98 = FUN_00c786f4;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = (void *)0x0;
  plStack_90 = param_1;
  FUN_009693a0(plVar1,&local_98);
  *(uint *)((long)param_1 + 0x144) = *(uint *)((long)param_1 + 0x144) | 0x10;
  FUN_00c78760(param_1);
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (*(long *)(lVar11 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c7860c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c78618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0xb8))();
  return;
}




void FUN_00c7861c(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_03210f84,0);
  FUN_00f04760(param_1 + 0x2a0,auStack_48,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c78688(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_03210f8c,0);
  FUN_00f04760(param_1 + 0x2a0,auStack_48,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c786f4(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_03210fa4,0);
  FUN_00f04760(param_1 + 0x2a0,auStack_48,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c78760(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00f13624();
  FUN_00f13fd8(param_1 + 0xf28,plVar1);
  (**(code **)(*plVar1 + 0x68))(plVar1,param_1 + 0x13b0,0,2);
  (**(code **)(*plVar1 + 0x68))(plVar1,param_1 + 0x1b10,1,10);
  (**(code **)(*plVar1 + 0x68))(plVar1,param_1 + 0xfe0,0,2);
  (**(code **)(*plVar1 + 0x68))(plVar1,param_1 + 0x19e0,1,10);
  (**(code **)(*plVar1 + 0x68))(plVar1,param_1 + 0x1b0,0,2);
                    /* WARNING: Could not recover jumptable at 0x00c78840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x68))(plVar1,param_1 + 0x1c40,1,10);
  return;
}




void FUN_00c78844(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02802610;
  param_1[0x3ae] = &PTR_FUN_027d15d8;
  FUN_0099ccc4(param_1 + 0x47a);
  FUN_00f0d3a4(param_1 + 0x453);
  FUN_00f0d3a4(param_1 + 0x42d);
  FUN_00f0d3a4(param_1 + 0x407);
  param_1[0x3e9] = &PTR_FUN_028266f0;
  param_1[0x400] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x403);
  FUN_00f13d08(param_1 + 0x3e9);
  param_1[0x3bf] = &PTR_FUN_02826f38;
  param_1[0x3d6] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x3d9);
  FUN_00f13d08(param_1 + 0x3bf);
  FUN_00f01868(param_1 + 0x3ae);
  FUN_00f0d3a4(param_1 + 0x388);
  FUN_00f0d3a4(param_1 + 0x362);
  FUN_00f0d3a4(param_1 + 0x33c);
  FUN_00f0d3a4(param_1 + 0x316);
  FUN_00f0d3a4(param_1 + 0x2f0);
  FUN_00ab3254(param_1 + 0x276);
  FUN_00ab3254(param_1 + 0x1fc);
  FUN_00f13d08(param_1 + 0x1e5);
  FUN_00f13d08(param_1 + 0x1ce);
  FUN_00aad654(param_1 + 0x54);
  param_1[0x36] = &PTR_FUN_028266f0;
  param_1[0x4d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x50);
  FUN_00f13d08(param_1 + 0x36);
  param_1[0x18] = &PTR_FUN_028266f0;
  param_1[0x2f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x32);
  FUN_00f13d08(param_1 + 0x18);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c789dc(void *param_1)

{
  FUN_00c78844();
  operator_delete(param_1);
  return;
}




void FUN_00c78a00(long param_1)

{
  FUN_00b1a8e8(param_1 + 0x1d70);
  return;
}




void FUN_00c78a0c(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float local_78;
  float fStack_74;
  float local_70;
  float local_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  FUN_00f13db4();
  local_70 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  local_6c = param_2;
  FUN_00f13f18(param_3 + 0x18,&local_70);
  plVar1 = param_3 + 0x54;
  fVar6 = local_6c + -64.0;
  FUN_00f13f08(fVar6,fVar6,plVar1);
  local_78 = fVar6;
  fStack_74 = fVar6;
  FUN_00c93b48(plVar1,&local_78);
  FUN_00f07a18(0x42000000,0,plVar1,7);
  FUN_00f07940(0xc1600000,0x41600000,param_3 + 0x3ae,8,plVar1,1);
  plVar1 = param_3 + 0x1ce;
  FUN_00f13f08(((local_70 + -32.0) - fVar6) + -14.0 + -32.0,local_6c + -64.0,plVar1);
  FUN_00f07a18(0xc2000000,0,plVar1,5);
  plVar3 = param_3 + 0x2f0;
  uVar5 = FUN_00f13e54(plVar1);
  FUN_00f0db64(uVar5,0,0x3f800000,plVar3);
  FUN_00f07940(0,0xc1000000,plVar3,3,plVar1,7);
  FUN_00f13f08(0x42a00000,0x42a00000,param_3 + 0x1fc);
  FUN_00f13f08(0x42a00000,0x42a00000,param_3 + 0x276);
  plVar2 = param_3 + 0x36;
  FUN_00f13f08(0x42a00000,0x42a00000,plVar2);
  fVar6 = (float)FUN_00f0e700(plVar2);
  FUN_00f0db64(fVar6 * 0.8,0,0x3f800000,param_3 + 0x316);
  fVar6 = 0.0;
  FUN_00f07940(0,0,param_3 + 0x316,8,plVar2,8);
  plVar2 = param_3 + 0x1e5;
  uVar5 = FUN_00f13e54(plVar1);
  FUN_00f13e54(plVar1);
  FUN_00f13f08(uVar5,(fVar6 + -8.0) * 0.5,plVar2);
  FUN_00f13db4(plVar2);
  FUN_00f07940(0,0x41000000,plVar2,0,plVar1,7);
  FUN_009580b8();
  uVar5 = FUN_0095fdf0();
  FUN_00f0d75c(plVar3,uVar5);
  (**(code **)(*param_3 + 0xe8))(param_3);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c78c8c(long *param_1)

{
  FUN_00f0d75c(param_1 + 0x2f0);
                    /* WARNING: Could not recover jumptable at 0x00c78cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00c78cc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c78ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0xb8))();
  return;
}




void FUN_00c78cd0(long *param_1,int param_2,int param_3,int param_4)

{
  long lVar1;
  uint uVar2;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00b1d77c(param_1 + 0x1fc);
  FUN_00b1d77c(param_1 + 0x276,param_3);
  FUN_00e70510(&local_58);
  FUN_00e70e18(&local_58,&DAT_01bb6d43,param_4);
  FUN_00f0d75c(param_1 + 0x316,&local_58);
  *(uint *)((long)param_1 + 0x1434) =
       *(uint *)((long)param_1 + 0x1434) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x1434) & 3 | (uint)(0 < param_3) << 2;
  uVar2 = (uint)(0 < param_4);
  *(uint *)((long)param_1 + 0x1b94) =
       *(uint *)((long)param_1 + 0x1b94) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x1b94) & 3 | (uint)(0 < param_3) << 2;
  *(uint *)((long)param_1 + 0x1064) =
       *(uint *)((long)param_1 + 0x1064) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x1064) & 3 | (uint)(0 < param_2) << 2;
  *(uint *)((long)param_1 + 0x1a64) =
       *(uint *)((long)param_1 + 0x1a64) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x1a64) & 3 | (uint)(0 < param_2) << 2;
  *(uint *)((long)param_1 + 0x234) =
       *(uint *)((long)param_1 + 0x234) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x234) & 3 | uVar2 << 2;
  *(uint *)((long)param_1 + 0x1cc4) =
       *(uint *)((long)param_1 + 0x1cc4) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x1cc4) & 3 | uVar2 << 2;
  *(uint *)((long)param_1 + 0x1934) =
       *(uint *)((long)param_1 + 0x1934) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x1934) & 3 | (uint)(0 < param_4) << 2;
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c78e00(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x1df4) =
       *(uint *)(param_1 + 0x1df4) & 0xfffffff8 |
       *(uint *)(param_1 + 0x1df4) & 3 | (param_2 & 1) << 2;
  FUN_00b1a8f8(param_1 + 0x1d70);
  return;
}




void FUN_00c78e20(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_03210f84,0);
  FUN_00f04760(param_1 + 0x2a0,auStack_48,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c78e8c(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_03210f8c,0);
  FUN_00f04760(param_1 + 0x2a0,auStack_48,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c78ef8(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_03210fa4,0);
  FUN_00f04760(param_1 + 0x2a0,auStack_48,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c78f64(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  byte local_90 [16];
  void *local_80;
  code *local_78;
  undefined8 *puStack_70;
  void *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00f13ca4();
  param_1[0x17] = 0;
  *param_1 = &PTR_thunk_FUN_00f13d08_02802758;
  uVar6 = FUN_00c79840(param_1,1);
  param_1[0x18] = uVar6;
  uVar6 = FUN_00c798a8(uVar6,1);
  param_1[0x19] = uVar6;
  uVar6 = FUN_00c798a8(param_1[0x18],1);
  param_1[0x1a] = uVar6;
  *(uint *)(param_1[0x18] + 0x84) = *(uint *)(param_1[0x18] + 0x84) & 0xfffffffb;
  uVar6 = FUN_00c79840(param_1,1);
  param_1[0x1b] = uVar6;
  uVar6 = FUN_00b04958(uVar6,1);
  param_1[0x1c] = uVar6;
  uVar6 = FUN_00c79910(uVar6,1);
  param_1[0x1d] = uVar6;
  uVar6 = FUN_00c79910(param_1[0x1c],1);
  param_1[0x1e] = uVar6;
  uVar6 = FUN_00c79910(param_1[0x1c],1);
  param_1[0x1f] = uVar6;
  uVar6 = FUN_00c79910(param_1[0x1c],1);
  param_1[0x20] = uVar6;
  uVar6 = FUN_00c79910(param_1[0x1b],1);
  lVar7 = param_1[0x1d];
  param_1[0x21] = uVar6;
  uVar4 = FUN_00e6a474("homepanel_overflow_nav_button_tiv");
  uVar5 = FUN_0091ed5c("homepanel_overflow_nav_button_tiv",uVar4,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar5 & 0xffff) << 0xf;
  lVar7 = param_1[0x1e];
  uVar4 = FUN_00e6a474("homepanel_overflow_nav_button_news");
  uVar5 = FUN_0091ed5c("homepanel_overflow_nav_button_news",uVar4,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar5 & 0xffff) << 0xf;
  lVar7 = param_1[0x1f];
  uVar4 = FUN_00e6a474("homepanel_overflow_nav_button_leaderboards");
  uVar5 = FUN_0091ed5c("homepanel_overflow_nav_button_leaderboards",uVar4,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar5 & 0xffff) << 0xf;
  lVar7 = param_1[0x20];
  uVar4 = FUN_00e6a474("homepanel_overflow_nav_button_academy");
  uVar5 = FUN_0091ed5c("homepanel_overflow_nav_button_academy",uVar4,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar5 & 0xffff) << 0xf;
  lVar7 = param_1[0x21];
  uVar4 = FUN_00e6a474("homepanel_overflow_nav_button_settings");
  uVar5 = FUN_0091ed5c("homepanel_overflow_nav_button_settings",uVar4,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar5 & 0xffff) << 0xf;
  uVar6 = param_1[0x19];
  FUN_008fa54c(&local_78,"ice_icon_small");
  FUN_00c9579c(uVar6,&local_78);
  if (((byte)local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  local_60 = 0;
  uStack_58 = 0;
  uVar4 = DAT_03210c64;
  local_78 = FUN_00c7951c;
  local_68 = (void *)0x0;
  puStack_70 = param_1;
  local_50 = uVar4;
  FUN_009693a0(param_1[0x19] + 8,&local_78);
  uVar6 = param_1[0x1a];
  FUN_008fa54c(&local_78,"glory_icon_small");
  FUN_00c9579c(uVar6,&local_78);
  if (((ulong)local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  local_78 = FUN_00c7952c;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = (void *)0x0;
  puStack_70 = param_1;
  local_50 = uVar4;
  FUN_009693a0(param_1[0x1a] + 8,&local_78);
  FUN_00c9228c(param_1[0x1e],0);
  puVar3 = PTR_s_build___MenuHomepagePartsCommon__02be35e8;
  uVar6 = param_1[0x1e];
  FUN_008fa54c(&local_78,"secondary_nav_news");
  FUN_008fa54c(local_90,"secondary_nav_news_hit");
  FUN_00c93a88(uVar6,puVar3,&local_78,local_90);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (((ulong)local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  local_78 = FUN_00c7953c;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = (void *)0x0;
  puStack_70 = param_1;
  local_50 = uVar4;
  FUN_009693a0(param_1[0x1e] + 8,&local_78);
  FUN_00c9228c(param_1[0x21],0);
  puVar3 = PTR_s_build___MenuHomepagePartsCommon__02be35e8;
  uVar6 = param_1[0x21];
  FUN_008fa54c(&local_78,"secondary_nav_settings");
  FUN_008fa54c(local_90,"secondary_nav_settings_hit");
  FUN_00c93a88(uVar6,puVar3,&local_78,local_90);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (((ulong)local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  local_78 = FUN_00c7954c;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = (void *)0x0;
  puStack_70 = param_1;
  local_50 = uVar4;
  FUN_009693a0(param_1[0x21] + 8,&local_78);
  FUN_00c9228c(param_1[0x1f],0);
  puVar3 = PTR_s_build___MenuHomepagePartsCommon__02be35e8;
  uVar6 = param_1[0x1f];
  FUN_008fa54c(&local_78,"secondary_nav_leaderboards");
  FUN_008fa54c(local_90,"secondary_nav_leaderboards_hit");
  FUN_00c93a88(uVar6,puVar3,&local_78,local_90);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (((ulong)local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  local_78 = FUN_00c7955c;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = (void *)0x0;
  puStack_70 = param_1;
  local_50 = uVar4;
  FUN_009693a0(param_1[0x1f] + 8,&local_78);
  FUN_00c9228c(param_1[0x20],0);
  puVar3 = PTR_s_build___MenuHomepagePartsCommon__02be35e8;
  uVar6 = param_1[0x20];
  FUN_008fa54c(&local_78,"secondary_nav_academy");
  FUN_008fa54c(local_90,"secondary_nav_academy_hit");
  FUN_00c93a88(uVar6,puVar3,&local_78,local_90);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (((ulong)local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  local_78 = FUN_00c7956c;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = (void *)0x0;
  puStack_70 = param_1;
  local_50 = uVar4;
  FUN_009693a0(param_1[0x20] + 8,&local_78);
  FUN_00c9228c(param_1[0x1d],0);
  puVar3 = PTR_s_build___MenuHomepagePartsCommon__02be35e8;
  uVar6 = param_1[0x1d];
  FUN_008fa54c(&local_78,"secondary_nav_today");
  FUN_008fa54c(local_90,"secondary_nav_today_hit");
  FUN_00c93a88(uVar6,puVar3,&local_78,local_90);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (((ulong)local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  local_78 = FUN_00c7957c;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = (void *)0x0;
  puStack_70 = param_1;
  local_50 = uVar4;
  FUN_009693a0(param_1[0x1d] + 8,&local_78);
  *(uint *)(param_1[0x1c] + 0x84) = *(uint *)(param_1[0x1c] + 0x84) | 4;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

