// functions/00ae6 — 12 functions
#include "libGameKindred.h"




void thunk_FUN_00ae6eb8(long param_1)

{
  if (*(char *)(param_1 + 0x3dbe) != '\0') {
    FUN_00916048(param_1 + 0x3ce0);
    return;
  }
  FUN_009160ec(param_1 + 0x3d80);
  FUN_00b093e4(param_1 + 0xba8);
  return;
}




void thunk_FUN_00ae6f04(long param_1)

{
  if (*(char *)(param_1 + 0x3dbe) != '\0') {
    FUN_00916160(param_1 + 0x3ce0);
    return;
  }
  FUN_00916100(param_1 + 0x3d80);
  FUN_00b093e4(param_1 + 0x5b0);
  return;
}




void FUN_00ae6448(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined4 uVar14;
  bool bVar15;
  ulong uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 local_b8;
  void *local_b0;
  undefined8 local_a8;
  void *local_a0;
  long local_98;
  
  lVar13 = tpidr_el0;
  local_98 = *(long *)(lVar13 + 0x28);
  FUN_00f13f08();
  uVar16 = FUN_0092ea9c();
  FUN_00ae5830(param_3,*(undefined1 *)(param_3 + 0x3dbf));
  lVar6 = param_3 + 0x2da8;
  FUN_00b1eae8(lVar6,*(undefined4 *)(param_3 + 0x3db0));
  bVar15 = (uVar16 & 1) == 0;
  ppuVar11 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78;
  if (bVar15) {
    ppuVar11 = &PTR_s_build___Fonts_Brandon_Bold_24_fo_02be9c68;
  }
  lVar7 = param_3 + 0x3088;
  fVar19 = 1.5;
  uVar14 = 0x43cb0000;
  if (bVar15) {
    fVar19 = 1.0;
    uVar14 = 0x43c10000;
  }
  FUN_00f0d378(lVar7,*ppuVar11);
  uVar17 = FUN_00e6ce7c("GENERIC_3V3",0);
  FUN_00f0d75c(lVar7,uVar17);
  lVar8 = param_3 + 0x3588;
  FUN_00f0d378(lVar8,*ppuVar11);
  uVar17 = FUN_00e6ce7c("GENERIC_5V5",0);
  FUN_00f0d75c(lVar8,uVar17);
  FUN_00f13f08(param_1,param_2,param_3 + 0xb8);
  FUN_00f07940(0,0,param_3 + 0xb8,0,*(undefined8 *)(param_3 + 0xd8),0);
  FUN_00f13f08(param_1,param_2,param_3 + 0x11a0);
  FUN_00f07940(0,0,param_3 + 0x11a0,0,*(undefined8 *)(param_3 + 0x11c0),0);
  lVar1 = param_3 + 0x170;
  fVar20 = (float)param_2 * 0.2;
  FUN_00f07940(0x42100000,fVar20,lVar1,0,*(undefined8 *)(param_3 + 400),0);
  FUN_00f07b18(0x41f00000,lVar6,3,lVar1,1);
  lVar2 = param_3 + 0x260;
  FUN_00f07b18(0,lVar6,5,lVar1,5);
  FUN_00f0db64(uVar14,0,0x3f800000,lVar2);
  FUN_00f07b18(0x41700000,lVar2,3,lVar6,1);
  FUN_00f07b18(0,lVar2,5,lVar6,5);
  lVar1 = param_3 + 0xba8;
  if ((*(float *)(param_3 + 0xbf0) != fVar19) || (*(float *)(param_3 + 0xbf4) != fVar19)) {
    *(float *)(param_3 + 0xbf0) = fVar19;
    *(float *)(param_3 + 0xbf4) = fVar19;
    FUN_0091ada4(lVar1);
  }
  lVar3 = param_3 + 0x390;
  if ((*(float *)(param_3 + 0x3d8) != fVar19) || (*(float *)(param_3 + 0x3dc) != fVar19)) {
    *(float *)(param_3 + 0x3d8) = fVar19;
    *(float *)(param_3 + 0x3dc) = fVar19;
    FUN_0091ada4(lVar3);
  }
  lVar4 = param_3 + 0x480;
  fVar18 = fVar19 * 0.85;
  if ((*(float *)(param_3 + 0x4c8) != fVar18) || (*(float *)(param_3 + 0x4cc) != fVar18)) {
    *(float *)(param_3 + 0x4c8) = fVar18;
    *(float *)(param_3 + 0x4cc) = fVar18;
    FUN_0091ada4(lVar4);
  }
  fVar18 = 0.9;
  lVar5 = param_3 + 0x5b0;
  if (*(char *)(param_3 + 0x3dbe) != '\0') {
    fVar19 = fVar19 * 0.9;
  }
  if ((*(float *)(param_3 + 0x5f8) != fVar19) || (*(float *)(param_3 + 0x5fc) != fVar19)) {
    *(float *)(param_3 + 0x5f8) = fVar19;
    *(float *)(param_3 + 0x5fc) = fVar19;
    FUN_0091ada4(lVar5);
  }
  FUN_00f07940(0xc2940000,fVar20,lVar1,1,*(undefined8 *)(param_3 + 0xbc8),1);
  FUN_00f07b18(0x80000000,lVar5,1,lVar1,3);
  FUN_00f07b18(0,lVar5,5,lVar1,5);
  ppuVar11 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78;
  if ((uVar16 & 1) == 0) {
    ppuVar11 = &PTR_s_build___Fonts_Brandon_Bold_24_fo_02be9c68;
  }
  lVar1 = param_3 + 0x1470;
  FUN_00ac5da8(lVar1,*ppuVar11);
  lVar5 = param_3 + 0x2078;
  FUN_00b2a6b8(lVar5,*ppuVar11);
  uVar17 = FUN_00f08be8(param_3 + 6000);
  thunk_FUN_00e7051c(&local_a8,uVar17);
  FUN_00e705c8(&local_b8,&DAT_01bb02b2);
  FUN_00ac5fdc(lVar1,&local_b8);
  if (local_b0 != (void *)0x0) {
    operator_delete__(local_b0);
    local_b8 = 0;
    local_b0 = (void *)0x0;
  }
  fVar19 = (float)FUN_00ac6098(lVar1);
  FUN_00ac5fdc(lVar1,&local_a8);
  lVar9 = param_3 + 0x1290;
  FUN_00f13f08(((float)param_1 - *(float *)(param_3 + 0x2de8)) * 0.5,fVar19 + 4.0,lVar9);
  FUN_00f07b18(0,lVar9,0,lVar6,2);
  FUN_00f07b18(0,lVar9,3,lVar6,3);
  lVar6 = param_3 + 0x1380;
  uVar17 = FUN_00f0e700(lVar9);
  FUN_00f13f08(uVar17,fVar19 + 4.0,lVar6);
  FUN_00f07b18(0,lVar6,3,lVar9,1);
  FUN_00f07b18(0,lVar6,5,lVar9,5);
  FUN_00f07940(0,0,lVar5,7,lVar9,7);
  FUN_00ac5dd0(lVar1);
  if ((*(byte *)(param_3 + 0x20fc) >> 2 & 1) == 0) {
    FUN_00f07940(0,0,lVar1,7,lVar9,7);
  }
  else {
    FUN_00f07b18(0x41700000,lVar1,3,lVar5,1);
    FUN_00f07b18(0,lVar1,5,lVar5,5);
  }
  bVar15 = (uVar16 & 1) == 0;
  ppuVar11 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78;
  if (bVar15) {
    fVar18 = 1.0;
    ppuVar11 = &PTR_s_build___Fonts_Brandon_Bold_24_fo_02be9c68;
  }
  ppuVar12 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  if (bVar15) {
    ppuVar12 = &PTR_s_build___Fonts_Brandon_Regular_40_02be9c48;
  }
  FUN_00f0d378(param_3 + 0x3a88,*ppuVar11);
  FUN_00f07940(0,0,param_3 + 0x3a88,5,lVar6,5);
  *(uint *)(param_3 + 0x3b0c) =
       *(uint *)(param_3 + 0x3b0c) & 0xfffffffb | (uint)*(byte *)(param_3 + 0x3dc2) << 2;
  lVar5 = param_3 + 0x3bb8;
  fVar19 = (float)FUN_00f0e700(lVar9);
  fVar20 = (float)FUN_00f0e700(lVar6);
  FUN_00f13f08(fVar19 + fVar20,0x40000000,lVar5);
  FUN_00f07b18(0,lVar5,0,lVar9,2);
  lVar10 = param_3 + 0x2c78;
  FUN_00f07b18(0,lVar5,3,lVar9,3);
  FUN_00f0d378(lVar10,*ppuVar12);
  if ((*(float *)(param_3 + 0x2cc0) != fVar18) || (*(float *)(param_3 + 0x2cc4) != fVar18)) {
    *(float *)(param_3 + 0x2cc0) = fVar18;
    *(float *)(param_3 + 0x2cc4) = fVar18;
    FUN_0091ada4(lVar10);
  }
  FUN_00f07b18(0x41700000,lVar10,3,lVar1,1);
  lVar1 = param_3 + 0x31b8;
  FUN_00f07940(0xc1f00000,0,lVar1,2,lVar6,2);
  FUN_00f07b18(0x80000000,lVar7,2,lVar1,0);
  FUN_00f07b18(0,lVar7,4,lVar1,4);
  lVar6 = param_3 + 0x36b8;
  FUN_00f07b18(0xc1700000,lVar6,1,lVar1,3);
  FUN_00f07b18(0,lVar6,5,lVar1,5);
  FUN_00f07b18(0x80000000,lVar8,2,lVar6,0);
  FUN_00f07b18(0,lVar8,4,lVar6,4);
  if (*(byte *)(param_3 + 0x3dc2) == 0) {
    FUN_00f07b18(0xc1700000,lVar3,1,lVar6,3);
    FUN_00f07b18(0,lVar3,2,lVar6,2);
    FUN_00f07940(0,0xc0a00000,lVar4,8,lVar3,8);
  }
  else {
    *(uint *)(param_3 + 0x323c) = *(uint *)(param_3 + 0x323c) & 0xfffffffb;
    *(uint *)(param_3 + 0x373c) = *(uint *)(param_3 + 0x373c) & 0xfffffffb;
    *(uint *)(param_3 + 0x310c) = *(uint *)(param_3 + 0x310c) & 0xfffffffb;
    *(uint *)(param_3 + 0x360c) = *(uint *)(param_3 + 0x360c) & 0xfffffffb;
    *(uint *)(param_3 + 0x2e2c) = *(uint *)(param_3 + 0x2e2c) & 0xfffffffb;
    FUN_00f07b18(0x41700000,lVar3,3,lVar2,1);
    FUN_00f07b18(0,lVar3,5,lVar2,5);
    FUN_00f07940(0,0xc0a00000,lVar4,8,lVar3,8);
  }
  if ((*(byte *)(param_3 + 0x373c) >> 2 & 1) != 0) {
    uVar17 = FUN_00f080a0(lVar2,7,lVar6,7);
    FUN_00f0db64(uVar17,0,0x3f800000,lVar2);
  }
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a8 = 0;
    local_a0 = (void *)0x0;
  }
  if (*(long *)(lVar13 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ae6cb4(long param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4,
                 undefined8 param_5)

{
  *(undefined4 *)(param_1 + 0x3ca8) = param_2;
  FUN_0091630c(param_1 + 0x3cb0,param_3);
  *(undefined4 *)(param_1 + 0x3cc0) = *param_4;
  FUN_008fce60(param_1 + 0x3cc8,param_5);
  return;
}




void FUN_00ae6d08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  FUN_00910394(param_1 + 0x3d08);
  lVar1 = param_1 + 0x3d40;
  FUN_00910394(lVar1,param_3);
  uVar3 = FUN_00e70b04(lVar1);
  lVar2 = param_1 + 0x3d08;
  if ((uVar3 & 1) == 0) {
    lVar2 = lVar1;
  }
  FUN_00f0d75c(param_1 + 0x3a88,lVar2);
  return;
}




long FUN_00ae6d70(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = FUN_00e70b04(param_1 + 0x3d50);
  lVar1 = param_1 + 0x3d18;
  if ((uVar2 & 1) == 0) {
    lVar1 = param_1 + 0x3d50;
  }
  return lVar1;
}




void FUN_00ae6dac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(char *)(param_1 + 0x3dbd) == '\0') && (*(char *)(param_1 + 0x3dbe) == '\0')) {
    uVar2 = FUN_00f048a4("UI::EVENT_MENU_FRIENDS_SELECTED");
    FUN_00f048e0(auStack_58,uVar2,param_1);
    FUN_00f04760(param_1,auStack_58,1);
  }
  FUN_00f0490c(param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ae6e48(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_MENU_FRIENDS_DELETE_DIALOG");
  FUN_00f048e0(auStack_48,uVar2,param_1);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ae6eb8(long param_1)

{
  if (*(char *)(param_1 + 0x3dbe) != '\0') {
    FUN_00916048(param_1 + 0x3ce0);
    return;
  }
  FUN_009160ec(param_1 + 0x3d80);
  FUN_00b093e4(param_1 + 0xba8);
  return;
}




void FUN_00ae6f04(long param_1)

{
  if (*(char *)(param_1 + 0x3dbe) != '\0') {
    FUN_00916160(param_1 + 0x3ce0);
    return;
  }
  FUN_00916100(param_1 + 0x3d80);
  FUN_00b093e4(param_1 + 0x5b0);
  return;
}




void FUN_00ae6f50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d8bf8;
  FUN_00f0d3a4(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00ae6fbc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d8d40;
  param_1[0x160] = &PTR_FUN_028266f0;
  param_1[0x177] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x17a);
  FUN_00f13d08(param_1 + 0x160);
  param_1[0x142] = &PTR_FUN_028266f0;
  param_1[0x159] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x15c);
  FUN_00f13d08(param_1 + 0x142);
  FUN_00ac6220(param_1 + 0xd7);
  FUN_00ac6220(param_1 + 0x6c);
  FUN_00f0d3a4(param_1 + 0x46);
  param_1[0x28] = &PTR_FUN_028266f0;
  param_1[0x3f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x42);
  FUN_00f13d08(param_1 + 0x28);
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}

