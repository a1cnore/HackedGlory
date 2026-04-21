// functions/00c54 — 11 functions
#include "libGameKindred.h"




void FUN_00c54014(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fdb60;
  param_1[0xba0] = &PTR_FUN_028266f0;
  param_1[2999] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xbba);
  FUN_00f13d08(param_1 + 0xba0);
  FUN_00f13d08(param_1 + 0xb89);
  FUN_00f0d3a4(param_1 + 0xb63);
  FUN_00f13d08(param_1 + 0xb4c);
  FUN_00c540d4(param_1 + 0x5c1);
  FUN_00c540d4(param_1 + 0x36);
  param_1[0x18] = &PTR_FUN_028266f0;
  param_1[0x2f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x32);
  FUN_00f13d08(param_1 + 0x18);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c540d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fdca8;
  FUN_00f0d3a4(param_1 + 0x563);
  FUN_00f0d3a4(param_1 + 0x53d);
  param_1[0x512] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x529);
  FUN_00f13d08(param_1 + 0x512);
  FUN_00f0d3a4(param_1 + 0x4ec);
  FUN_00ab3254(param_1 + 0x472);
  param_1[0x454] = &PTR_FUN_028266f0;
  param_1[0x46b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x46e);
  FUN_00f13d08(param_1 + 0x454);
  FUN_00b1df14(param_1 + 0x2e6);
  param_1[0x2bd] = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x2d4);
  FUN_00f13d08(param_1 + 0x2bd);
  FUN_00f0d3a4(param_1 + 0x297);
  FUN_00ab3254(param_1 + 0x21d);
  param_1[0x1ff] = &PTR_FUN_028266f0;
  param_1[0x216] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x219);
  FUN_00f13d08(param_1 + 0x1ff);
  FUN_00b1df14(param_1 + 0x91);
  param_1[0x68] = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x7f);
  FUN_00f13d08(param_1 + 0x68);
  param_1[0x3d] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x54);
  FUN_00f13d08(param_1 + 0x3d);
  FUN_00f0d3a4(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c54254(void *param_1)

{
  FUN_00c54014();
  operator_delete(param_1);
  return;
}




void FUN_00c54278(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  long lVar1;
  
  *(undefined4 *)(param_1 + 0x2df8) = param_2;
  lVar1 = param_1 + 0x1b0;
  (**(code **)(*(long *)(param_1 + 0x1b0) + 0xe8))(lVar1);
  *(undefined4 *)(param_1 + 0x2dfc) = param_4;
  *(undefined4 *)(param_1 + 0x2e00) = param_5;
  (**(code **)(*(long *)(param_1 + 0x1b0) + 0xe8))(lVar1);
  *(undefined1 *)(param_1 + 0x2e04) = 1;
  (**(code **)(*(long *)(param_1 + 0x1b0) + 0xe8))(lVar1);
  *(undefined4 *)(param_1 + 0x5a50) = param_3;
  lVar1 = param_1 + 0x2e08;
  (**(code **)(*(long *)(param_1 + 0x2e08) + 0xe8))(lVar1);
  *(undefined4 *)(param_1 + 0x5a54) = param_6;
  *(undefined4 *)(param_1 + 0x5a58) = param_7;
  (**(code **)(*(long *)(param_1 + 0x2e08) + 0xe8))(lVar1);
  *(undefined1 *)(param_1 + 0x5a5c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00c5435c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x2e08) + 0xe8))(lVar1);
  return;
}




void FUN_00c54360(long *param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x589) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00c5436c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_00c54370(long *param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)((long)param_1 + 0x2c4c) = param_2;
  *(undefined4 *)(param_1 + 0x58a) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00c54380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_00c54384(long *param_1,byte param_2)

{
  *(byte *)((long)param_1 + 0x2c54) = param_2 & 1;
                    /* WARNING: Could not recover jumptable at 0x00c54398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_00c5439c(long param_1)

{
  undefined4 uVar1;
  
  FUN_00f13db4();
  uVar1 = FUN_00f13e54(param_1 + 0x5c48);
  FUN_00f0db64(uVar1,0,0x3f800000,param_1 + 0x5b18);
  FUN_00f07940(0,0,param_1 + 0x5b18,7,param_1 + 0x5c48,7);
  return;
}




void FUN_00c543fc(undefined1 param_1 [16],float param_2,long *param_3)

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
  long *plVar11;
  long *plVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  undefined8 uVar16;
  float local_80;
  float fStack_7c;
  long local_78;
  
  lVar15 = tpidr_el0;
  local_78 = *(long *)(lVar15 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_3 + 0x17;
  *param_3 = (long)&PTR_FUN_027fdca8;
  FUN_00f0d160();
  plVar2 = param_3 + 0x3d;
  FUN_00f1306c(plVar2);
  FUN_00f0ac5c();
  plVar3 = param_3 + 0x91;
  FUN_00b1dc5c(plVar3);
  plVar4 = param_3 + 0x1ff;
  FUN_00f0e4a8();
  plVar5 = param_3 + 0x21d;
  FUN_00b1d5d8();
  plVar6 = param_3 + 0x297;
  FUN_00f0d160(plVar6);
  plVar7 = param_3 + 0x2bd;
  FUN_00f0ac5c(plVar7);
  plVar8 = param_3 + 0x2e6;
  FUN_00b1dc5c(plVar8);
  plVar9 = param_3 + 0x454;
  FUN_00f0e4a8(plVar9);
  plVar10 = param_3 + 0x472;
  FUN_00b1d5d8(plVar10);
  plVar11 = param_3 + 0x4ec;
  FUN_00f0d160(plVar11);
  plVar12 = param_3 + 0x512;
  FUN_00f1306c(plVar12);
  plVar13 = param_3 + 0x53d;
  FUN_00f0d160();
  FUN_00f0d160();
  param_3[0x589] = -1;
  *(undefined4 *)(param_3 + 0x58a) = 0xffffffff;
  *(undefined1 *)((long)param_3 + 0x2c54) = 0;
  (**(code **)(*param_3 + 0x78))(param_3,plVar2,1);
  FUN_00f133d8(plVar2,plVar7,1);
  FUN_00f0ad94(plVar7,plVar8,1);
  FUN_00f133d8(plVar2,param_3 + 0x68,1);
  FUN_00f0ad94(param_3 + 0x68,plVar3,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar9,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar10,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar11,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar4,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar5,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar6,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar1,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar12,1);
  FUN_00f133a4(plVar12,plVar13,1);
  FUN_00f133a4(plVar12,param_3 + 0x563,1);
  FUN_00f0d378(plVar1,PTR_s_build___Fonts_Brandon_Bold_190_f_02be9cb8);
  uVar14 = *(uint *)((long)param_3 + 0x13c);
  if ((uVar14 & 0x7f80) != 0x2100) {
    *(uint *)((long)param_3 + 0x13c) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x2100;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0d378(plVar13,PTR_s_build___Fonts_Brandon_Regular_60_02be9c58);
  uVar16 = FUN_00e6ce7c("MENU_SKILL_RESET_STARTING_SKILL_TIER",0);
  FUN_00f0d75c(plVar13,uVar16);
  FUN_00f0d378(param_3 + 0x563,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  FUN_00b1ded0(plVar8);
  FUN_00b1ded0(plVar3);
  if ((*(float *)(param_3 + 0x47b) != 1.3) || (*(float *)((long)param_3 + 0x23dc) != 1.3)) {
    param_3[0x47b] = 0x3fa666663fa66666;
    FUN_0091ada4(plVar10);
  }
  if ((*(float *)(param_3 + 0x226) != 1.3) || (*(float *)((long)param_3 + 0x1134) != 1.3)) {
    param_3[0x226] = 0x3fa666663fa66666;
    FUN_0091ada4(plVar5);
  }
  FUN_00f0e548(plVar9,PTR_s_build___MenuPartsCommon_tga_02be3530,"menu_fuzzy_dot");
  local_80 = (float)FUN_00f01c20(plVar10);
  local_80 = local_80 * 2.9;
  param_2 = param_2 * 2.9;
  fStack_7c = param_2;
  FUN_00f13f18(plVar9,&local_80);
  FUN_00f0e548(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"menu_fuzzy_dot");
  local_80 = (float)FUN_00f01c20(plVar5);
  local_80 = local_80 * 2.9;
  fStack_7c = param_2 * 2.9;
  FUN_00f13f18(plVar4,&local_80);
  FUN_00f0d378(plVar6,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  uVar16 = FUN_00e6ce7c("GENERIC_5V5",0);
  FUN_00f0d75c(plVar6,uVar16);
  FUN_00f0d378(plVar11,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  uVar16 = FUN_00e6ce7c("GENERIC_3V3",0);
  FUN_00f0d75c(plVar11,uVar16);
  if (*(long *)(lVar15 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c54898(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_80;
  float fStack_7c;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  FUN_00c54c98();
  FUN_00f13db4(param_1);
  plVar1 = param_1 + 0x17;
  fVar6 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  FUN_00f0db64(fVar6 * 0.95,0x3dcccccd,0x3f4ccccd,plVar1);
  FUN_00f07940(0,0x430c0000,plVar1,8,param_1,4);
  FUN_00f07b18(0,param_1 + 0x563,0,param_1 + 0x53d,2);
  FUN_00f07b18(0,param_1 + 0x563,4,param_1 + 0x53d,4);
  plVar3 = param_1 + 0x512;
  FUN_00f13238(plVar3);
  fVar7 = 0.0;
  FUN_00f07940(0,plVar3,6,param_1,6);
  fVar6 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  FUN_00f080a0(plVar1,6,plVar3,4);
  plVar3 = param_1 + 0x68;
  fVar9 = fVar7 + 50.0;
  local_80 = (float)FUN_00b1e834(param_1 + 0x91);
  fStack_7c = fVar7;
  FUN_00f13f18(plVar3,&local_80);
  fVar7 = 0.5;
  FUN_00f0ad74(plVar3);
  FUN_00f0ad30(plVar3);
  if ((*(float *)(param_1 + 0x2ef) != 0.77) || (*(float *)((long)param_1 + 0x177c) != 0.77)) {
    param_1[0x2ef] = 0x3f451eb83f451eb8;
    FUN_0091ada4(param_1 + 0x2e6);
  }
  plVar4 = param_1 + 0x2bd;
  local_80 = (float)FUN_00b1e834(param_1 + 0x2e6);
  local_80 = local_80 * 0.77;
  fStack_7c = fVar7 * 0.77;
  FUN_00f13f18(plVar4,&local_80);
  FUN_00f0ad74(0x3f000000,0x3f000000,plVar4);
  FUN_00f0ad30(plVar4);
  fVar7 = (float)FUN_00b1e834(param_1 + 0x91);
  fVar8 = -0.4;
  FUN_00f07b18(fVar7 * -0.4,plVar4,3,plVar3,1);
  FUN_00f07b18(0xc2480000,plVar4,2,plVar3,2);
  plVar2 = param_1 + 0x3d;
  FUN_00f13238(plVar2);
  fVar7 = (float)FUN_00f13e54(plVar2);
  fVar7 = (fVar6 + -40.0) / fVar7;
  fVar8 = fVar9 / fVar8;
  if (fVar8 <= fVar7) {
    fVar7 = fVar8;
  }
  if ((fVar7 < 1.0) &&
     ((*(float *)(param_1 + 0x46) != fVar7 || (*(float *)((long)param_1 + 0x234) != fVar7)))) {
    *(float *)(param_1 + 0x46) = fVar7;
    *(float *)((long)param_1 + 0x234) = fVar7;
    FUN_0091ada4(plVar2);
  }
  FUN_00f07940(0,fVar9 * 0.5 + -50.0,plVar2,8,plVar1,6);
  plVar1 = param_1 + 0x21d;
  FUN_00f07940(0,0xc2c80000,plVar1,6,plVar3,6);
  plVar3 = param_1 + 0x472;
  FUN_00f07940(0,fVar7 * 50.0 + -100.0,plVar3,6,plVar4,6);
  FUN_00f07940(0,0,param_1 + 0x454,8,plVar3,8);
  FUN_00f07940(0,0,param_1 + 0x1ff,8,plVar1,8);
  FUN_00f07b18(0,param_1 + 0x297,0,plVar1,2);
  FUN_00f07b18(0,param_1 + 0x297,4,plVar1,4);
  FUN_00f07b18(0,param_1 + 0x4ec,0,plVar3,2);
  FUN_00f07b18(0,param_1 + 0x4ec,4,plVar3,4);
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c54c98(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x2c54) == '\0') {
    if ((-1 < *(int *)(param_1 + 0x2c50)) && (-1 < *(int *)(param_1 + 0x2c4c))) {
      uVar4 = FUN_00e6ce7c("MENU_SKILL_RESET_STARTING_SKILL_TIER",0);
      FUN_00f0d75c(param_1 + 0x29e8,uVar4);
      uVar4 = FUN_00e6ce7c("MENU_SKILL_RESET_NEW_SKILL_TIERS",0);
      thunk_FUN_00e7051c(&local_58,uVar4);
      local_48 = 0;
      uStack_40 = 0;
      uVar2 = FUN_00cb41f0(*(undefined4 *)(param_1 + 0x2c4c));
      FUN_00919be4(&local_48,&DAT_01bb6d43,uVar2);
      FUN_00e705c8(&local_68,"[SKILL_TIER_5V5]");
      FUN_00e705c8(&local_78,&local_48);
      FUN_00e71248(&local_58,0,&local_68,&local_78);
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
      FUN_00e705c8(&local_68,"[SKILL_SUBTIER_5V5]");
      uVar4 = FUN_00cb67d4(*(undefined4 *)(param_1 + 0x2c4c));
      FUN_00e71248(&local_58,0,&local_68,uVar4);
      if (local_60 != (void *)0x0) {
        operator_delete__(local_60);
        local_68 = 0;
        local_60 = (void *)0x0;
      }
      uVar2 = FUN_00cb41f0(*(undefined4 *)(param_1 + 0x2c50));
      FUN_00919be4(&local_48,&DAT_01bb6d43,uVar2);
      FUN_00e705c8(&local_68,"[SKILL_TIER_3V3]");
      FUN_00e705c8(&local_78,&local_48);
      FUN_00e71248(&local_58,0,&local_68,&local_78);
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
      FUN_00e705c8(&local_68,"[SKILL_SUBTIER_3V3]");
      iVar9 = *(int *)(param_1 + 0x2c50);
      goto LAB_00c54f40;
    }
    pcVar3 = "MENU_SKILL_RESET_STARTING_SKILL_TIER";
  }
  else {
    pcVar3 = "MENU_SKILL_RESET_MAXIMUM_SKILL_TIER";
  }
  uVar4 = FUN_00e6ce7c(pcVar3,0);
  FUN_00f0d75c(param_1 + 0x29e8,uVar4);
  fVar10 = (float)*(int *)(param_1 + 0x2c4c);
  if ((float)*(int *)(param_1 + 0x2c4c) <= (float)*(int *)(param_1 + 0x2c50)) {
    fVar10 = (float)*(int *)(param_1 + 0x2c50);
  }
  iVar9 = (int)fVar10;
  uVar2 = FUN_00cb41f0(iVar9);
  uVar4 = FUN_00e6ce7c("MENU_SKILL_RESET_OLD_SKILL_TIER",0);
  thunk_FUN_00e7051c(&local_58,uVar4);
  local_48 = 0;
  uStack_40 = 0;
  FUN_00919be4(&local_48,&DAT_01bb6d43,uVar2);
  FUN_00e705c8(&local_68,"[SKILL_TIER]");
  FUN_00e705c8(&local_78,&local_48);
  FUN_00e71248(&local_58,0,&local_68,&local_78);
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
  FUN_00e705c8(&local_68,"[SKILL_SUBTIER]");
LAB_00c54f40:
  uVar4 = FUN_00cb67d4(iVar9);
  FUN_00e71248(&local_58,0,&local_68,uVar4);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  FUN_00f0d75c(param_1 + 0x2b18,&local_58);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  FUN_00cb47e8(&local_58,*(undefined4 *)(param_1 + 0x2c48),0,0,1);
  FUN_00f0d75c(param_1 + 0xb8,&local_58);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (*(int *)(param_1 + 0x2c4c) < -1) {
    uVar5 = *(uint *)(param_1 + 0x116c) & 0xfffffffb;
    uVar6 = *(uint *)(param_1 + 0x50c) & 0xfffffffb;
    uVar7 = *(uint *)(param_1 + 0x107c) & 0xfffffffb;
    uVar8 = *(uint *)(param_1 + 0x153c) & 0xfffffffb;
  }
  else {
    FUN_00b1d77c(param_1 + 0x10e8);
    FUN_00b1e298(param_1 + 0x488,*(undefined4 *)(param_1 + 0x2c4c));
    FUN_00b1e284(param_1 + 0x488,0);
    uVar5 = *(uint *)(param_1 + 0x116c) | 4;
    uVar6 = *(uint *)(param_1 + 0x50c) | 4;
    uVar7 = *(uint *)(param_1 + 0x107c) | 4;
    uVar8 = *(uint *)(param_1 + 0x153c) | 4;
  }
  *(uint *)(param_1 + 0x116c) = uVar5;
  *(uint *)(param_1 + 0x50c) = uVar6;
  *(uint *)(param_1 + 0x107c) = uVar7;
  *(uint *)(param_1 + 0x153c) = uVar8;
  if (*(int *)(param_1 + 0x2c50) < -1) {
    uVar5 = *(uint *)(param_1 + 0x2414) & 0xfffffffb;
    uVar6 = *(uint *)(param_1 + 0x17b4) & 0xfffffffb;
    uVar7 = *(uint *)(param_1 + 0x2324) & 0xfffffffb;
    uVar8 = *(uint *)(param_1 + 0x27e4) & 0xfffffffb;
  }
  else {
    FUN_00b1d77c(param_1 + 0x2390);
    FUN_00b1e298(param_1 + 0x1730,*(undefined4 *)(param_1 + 0x2c50));
    FUN_00b1e284(param_1 + 0x1730,0);
    uVar5 = *(uint *)(param_1 + 0x2414) | 4;
    uVar6 = *(uint *)(param_1 + 0x17b4) | 4;
    uVar7 = *(uint *)(param_1 + 0x2324) | 4;
    uVar8 = *(uint *)(param_1 + 0x27e4) | 4;
  }
  *(uint *)(param_1 + 0x2414) = uVar5;
  *(uint *)(param_1 + 0x17b4) = uVar6;
  *(uint *)(param_1 + 0x2324) = uVar7;
  *(uint *)(param_1 + 0x27e4) = uVar8;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

