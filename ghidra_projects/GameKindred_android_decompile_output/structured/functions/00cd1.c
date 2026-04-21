// functions/00cd1 — 11 functions
#include "libGameKindred.h"




bool FUN_00cd114c(long param_1)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  
  uVar1 = (ulong)(*(byte *)(param_1 + 0x9d8) >> 1);
  if ((*(byte *)(param_1 + 0x9d8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x9e0);
  }
  bVar2 = false;
  if (uVar1 == 6) {
    iVar3 = FUN_0090d610(param_1 + 0x9d8,0,0xffffffffffffffff,"REVEAL",6);
    bVar2 = iVar3 == 0;
  }
  return bVar2;
}




void FUN_00cd11a4(long param_1,uint param_2,byte *param_3)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar1 = param_3 + 1;
  }
  if ((param_2 & 1) != 0) {
    FUN_00afd018();
    return;
  }
  FUN_00afd1b0(param_1 + 0x4ef0,pbVar1);
  return;
}




void FUN_00cd11cc(long *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_009b8d90();
  if ((*(byte *)(lVar2 + 0xe1b8) & 1) == 0) {
    if (*(byte *)(lVar2 + 0xe1b8) >> 1 != 0) {
      return;
    }
  }
  else if (*(long *)(lVar2 + 0xe1c0) != 0) {
    return;
  }
  uVar3 = FUN_00cd114c(param_1 + 0xb1);
  if (((uVar3 & 1) == 0) && (uVar3 = (**(code **)(*param_1 + 0x108))(param_1), (uVar3 & 1) != 0)) {
    uVar4 = FUN_009b8d90();
    if ((*(byte *)(param_1 + 0x1d3) & 1) == 0) {
      uVar3 = (ulong)(*(byte *)(param_1 + 0x1d3) >> 1);
    }
    else {
      uVar3 = param_1[0x1d4];
    }
    plVar1 = param_1 + 0x1e9;
    if (uVar3 != 0) {
      plVar1 = param_1 + 0x1d3;
    }
    FUN_009bb728(uVar4,param_1 + 3000,plVar1);
                    /* WARNING: Could not recover jumptable at 0x00cd1278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x118))(param_1);
    return;
  }
  return;
}




void FUN_00cd127c(long param_1)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_80 [2];
  undefined1 auStack_70 [4];
  undefined4 local_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  FUN_00f00298(&local_6c,auStack_70);
  pfVar1 = (float *)(param_1 + 0x4f30);
  if ((*pfVar1 != 0.0) || (*(float *)(param_1 + 0x4f34) != -160.0)) {
    pfVar1[0] = 0.0;
    pfVar1[1] = -160.0;
    FUN_0091ada4(param_1 + 0x4ef0);
  }
  FUN_00f13f08(local_6c,local_6c,param_1 + 0x4ef0);
  fVar5 = (float)FUN_00f01fcc(param_1 + 0x50d0,1,0,1,1);
  if (*(float *)(param_1 + 0x5110) != fVar5 * -0.5) {
    *(float *)(param_1 + 0x5110) = fVar5 * -0.5;
    FUN_0091ada4(param_1 + 0x50d0);
  }
  fVar6 = 0.0;
  lVar2 = param_1 + 0x4e28;
  FUN_00f0bc10(0,0,0x41a00000,local_80);
  FUN_00f0c168(lVar2,local_80);
  (**(code **)(*(long *)(param_1 + 0x4e28) + 0x90))(lVar2);
  lVar3 = param_1 + 0x33f8;
  fVar5 = (float)FUN_00f01c20(lVar3);
  fVar8 = *(float *)(param_1 + 0x4e6c);
  FUN_00f13e54(lVar2);
  fVar8 = fVar8 + fVar6;
  FUN_00f0d4e0(lVar3);
  fVar8 = fVar8 + fVar6 * 0.5;
  fVar6 = fVar8 + 10.0;
  if ((*(float *)(param_1 + 0x3438) != fVar5 * -0.5) ||
     (fVar8 = *(float *)(param_1 + 0x343c), fVar8 != fVar6)) {
    *(float *)(param_1 + 0x3438) = fVar5 * -0.5;
    *(float *)(param_1 + 0x343c) = fVar6;
    FUN_0091ada4(lVar3);
  }
  lVar2 = param_1 + 0x588;
  FUN_00b01bd0(lVar2);
  fVar5 = *(float *)(param_1 + 0x4e6c);
  FUN_00f01c20(param_1 + 0xf88);
  fVar5 = fVar5 + fVar8 * -0.5 + -160.0;
  if ((*(float *)(param_1 + 0x5c8) != -20.0) || (*(float *)(param_1 + 0x5cc) != fVar5)) {
    *(undefined4 *)(param_1 + 0x5c8) = 0xc1a00000;
    *(float *)(param_1 + 0x5cc) = fVar5;
    FUN_0091ada4(lVar2);
  }
  local_80[0] = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x588) + 0x28))(lVar2,local_80);
  FUN_00f0db64(0x43c80000,0,0x3f800000,param_1 + 0x150);
  FUN_00f0db64(0x43c80000,0,0x3f800000,param_1 + 0x428);
  lVar2 = param_1 + 0x88;
  FUN_00f0bc10(0,0,0,local_80);
  FUN_00f0c168(lVar2,local_80);
  (**(code **)(*(long *)(param_1 + 0x88) + 0x90))(lVar2);
  if ((*(float *)(param_1 + 200) != 0.0) || (*(float *)(param_1 + 0xcc) != -580.0)) {
    *(undefined8 *)(param_1 + 200) = 0xc411000000000000;
    FUN_0091ada4(lVar2);
  }
  local_80[0] = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x88) + 0x28))(lVar2,local_80);
  fVar5 = -240.0;
  lVar2 = param_1 + 0x3868;
  if (*(float *)(param_1 + 0x38ac) != -240.0) {
    *(undefined4 *)(param_1 + 0x38ac) = 0xc3700000;
    fVar5 = -240.0;
    FUN_0091ada4(lVar2);
  }
  fVar7 = *(float *)(param_1 + 0x38a8);
  fVar6 = (float)FUN_00f01c20(lVar2);
  fVar8 = *(float *)(param_1 + 0x38ac);
  fVar7 = fVar7 - fVar6 * 0.5;
  FUN_00f01c20(lVar2);
  fVar8 = fVar8 - fVar5 * 0.5;
  if ((*(float *)(param_1 + 0x55e8) != fVar7) || (*(float *)(param_1 + 0x55ec) != fVar8)) {
    *(float *)(param_1 + 0x55e8) = fVar7;
    *(float *)(param_1 + 0x55ec) = fVar8;
    FUN_0091ada4(param_1 + 0x55a8);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cd15f8(long *param_1)

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
  undefined **ppuVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  long lVar19;
  undefined4 uVar20;
  undefined8 local_a8;
  long *plStack_a0;
  void *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_78;
  
  lVar15 = tpidr_el0;
  local_78 = *(long *)(lVar15 + 0x28);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x9de,1);
  plVar1 = param_1 + 0x11;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 0x2a;
  FUN_00f023ec(plVar1,plVar2,1);
  plVar3 = param_1 + 0x50;
  FUN_00f023ec(plVar1,plVar3,1);
  plVar4 = param_1 + 0x67;
  FUN_00f023ec(plVar3,plVar4,1);
  plVar5 = param_1 + 0x85;
  FUN_00f023ec(plVar3,plVar5,1);
  plVar7 = param_1 + 0x6e1;
  FUN_00f023ec(plVar1,plVar7,1);
  plVar8 = param_1 + 0x6a5;
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  plVar9 = param_1 + 0x6c3;
  (**(code **)(*param_1 + 0x78))(param_1,plVar9,1);
  plVar1 = param_1 + 0xb1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar10 = param_1 + 0x9c5;
  (**(code **)(*param_1 + 0x78))(param_1,plVar10,1);
  plVar6 = param_1 + 0x1f1;
  FUN_00f023ec(plVar10,plVar6,1);
  plVar11 = param_1 + 0xa1a;
  FUN_00f023ec(plVar10,plVar11,1);
  plVar10 = param_1 + 0x67f;
  (**(code **)(*param_1 + 0x78))(param_1,plVar10,1);
  plVar12 = param_1 + 0x70d;
  (**(code **)(*param_1 + 0x78))(param_1,plVar12,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xab5,1);
  uVar16 = FUN_0092ea9c();
  FUN_00ab703c(0x41c00000,0x43d70000,0x43d70000,plVar12,0,&DAT_03210450,&DAT_01bee7fa,&DAT_03218ef8,
               0);
  FUN_00ab7628(0x44340000,plVar12);
  FUN_00b13264(param_1 + 0x75b,1);
  uVar14 = *(uint *)((long)param_1 + 0x38ec);
  *(uint *)((long)param_1 + 0x3c14) = *(uint *)((long)param_1 + 0x3c14) & 0xfffffffb;
  if ((uVar14 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x38ec) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x6600;
    FUN_0091ada4(plVar12);
  }
  FUN_00b09144(0xbf800000,plVar12);
  FUN_00b094a4(plVar12,&DAT_0320ffa8);
  local_80 = DAT_03210c64;
  *(undefined1 *)((long)param_1 + 0x4e22) = 0;
  local_a8 = FUN_00cd1e6c;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = (void *)0x0;
  plStack_a0 = param_1;
  FUN_009693a0(param_1 + 0x70e,&local_a8);
  FUN_00b0914c(plVar12,1);
  if ((*(float *)(param_1 + 0xabf) != 0.0) || (*(float *)((long)param_1 + 0x55fc) != 0.0)) {
    *(undefined4 *)((long)param_1 + 0x55fc) = 0;
    *(undefined4 *)(param_1 + 0xabf) = 0;
    FUN_0091ada4(param_1 + 0xab5);
  }
  uVar17 = FUN_00d6eb50();
  uVar17 = FUN_00d6eb5c(uVar17,"*KindredScreenAscensionProfileEffects*");
  FUN_00afc274(param_1 + 0x9de,uVar17);
  FUN_00f0d92c(plVar2,PTR_s_build___Fonts_Brandon_Regular_60_02be9c58,&DAT_01bee7fa);
  FUN_00f0da30(plVar2,1);
  FUN_00f0dac8(plVar2,3);
  uVar14 = *(uint *)((long)param_1 + 0x1d4);
  if ((uVar14 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x1d4) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x6600;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0e548(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  uVar14 = *(uint *)((long)param_1 + 0x3bc);
  if ((uVar14 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x3bc) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x3300;
    FUN_0091ada4(plVar4);
  }
  uVar20 = 0x42700000;
  FUN_00f13f08(0x43dc0000,plVar4);
  if ((*(float *)(param_1 + 0x71) != 0.5) || (*(float *)((long)param_1 + 0x38c) != 0.5)) {
    param_1[0x71] = 0x3f0000003f000000;
    FUN_0091ada4(plVar4);
  }
  FUN_00f0d92c(plVar5,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88,&DAT_01bee7fa);
  FUN_00f0da30(plVar5,1);
  uVar14 = *(uint *)((long)param_1 + 0x4ac);
  if ((uVar14 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x4ac) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x6600;
    FUN_0091ada4(plVar5);
  }
  if ((*(float *)(param_1 + 0x8f) != 0.5) || (*(float *)((long)param_1 + 0x47c) != 0.5)) {
    param_1[0x8f] = 0x3f0000003f000000;
    FUN_0091ada4(plVar5);
  }
  uVar18 = FUN_00f0e700(plVar4);
  local_a8 = (code *)CONCAT44(uVar20,uVar18);
  FUN_00f13f18(plVar3,&local_a8);
  if ((*(float *)(param_1 + 0x5a) != 0.5) || (*(float *)((long)param_1 + 0x2d4) != 0.5)) {
    param_1[0x5a] = 0x3f0000003f000000;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0d378(plVar7,PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10);
  uVar14 = *(uint *)((long)param_1 + 0x378c);
  if ((uVar14 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x378c) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x6600;
    FUN_0091ada4(plVar7);
  }
  FUN_00f0dac8(plVar7,3);
  *(uint *)((long)param_1 + 0x378c) = *(uint *)((long)param_1 + 0x378c) & 0xfffffffb;
  FUN_00f0e548(plVar8,PTR_s_build___Chests_tga_02be35c0,"chest_stacked");
  if ((*(float *)(param_1 + 0x6af) != 0.5) || (*(float *)((long)param_1 + 0x357c) != 0.5)) {
    param_1[0x6af] = 0x3f0000003f000000;
    FUN_0091ada4(plVar8);
  }
  *(uint *)((long)param_1 + 0x35ac) = *(uint *)((long)param_1 + 0x35ac) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x6ae) != 1.1) || (*(float *)((long)param_1 + 0x3574) != 1.1)) {
    param_1[0x6ae] = 0x3f8ccccd3f8ccccd;
    FUN_0091ada4(plVar8);
  }
  FUN_00f0e540(plVar9,PTR_s_build___Chests_tga_02be35c0);
  if ((*(float *)(param_1 + 0x6cd) != 0.5) || (*(float *)((long)param_1 + 0x366c) != 0.5)) {
    param_1[0x6cd] = 0x3f0000003f000000;
    FUN_0091ada4(plVar9);
  }
  if ((*(float *)(param_1 + 0x6cc) != 2.2) || (*(float *)((long)param_1 + 0x3664) != 2.2)) {
    param_1[0x6cc] = 0x400ccccd400ccccd;
    FUN_0091ada4(plVar9);
  }
  *(uint *)((long)param_1 + 0x369c) = *(uint *)((long)param_1 + 0x369c) & 0xfffffffb;
  FUN_00b3ee24(0x3ee66666,plVar1);
  local_80 = FUN_00f048a4("UI::EVENT_MENU_OPEN_CHEST");
  local_a8 = FUN_00cd1e78;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = (void *)0x0;
  plStack_a0 = param_1;
  FUN_009693a0(param_1 + 0xb2,&local_a8);
  FUN_008fa54c(&local_a8,"IDLE_CLOSED");
  FUN_00b013a0(0xbf800000,plVar1,&local_a8);
  if (((ulong)local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
  FUN_00b028dc(plVar1,0);
  ppuVar13 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
  if ((uVar16 & 1) == 0) {
    ppuVar13 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78;
  }
  FUN_00f0d92c(plVar10,*ppuVar13,&DAT_01bee7fa);
  uVar14 = *(uint *)((long)param_1 + 0x347c);
  if ((uVar14 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x347c) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x6600;
    FUN_0091ada4(plVar10);
  }
  FUN_00f0dac8(plVar10,3);
  FUN_00f0dad0(0x43fa0000,plVar10,1);
  if ((*(float *)(param_1 + 0x689) != 0.0) || (*(float *)((long)param_1 + 0x344c) != 0.5)) {
    param_1[0x689] = 0x3f00000000000000;
    FUN_0091ada4(plVar10);
  }
  FUN_00ab703c(0x41c00000,0x438c0000,0x445c0000,plVar6,0,&DAT_03210450,&DAT_01bee7fa,&DAT_03218ef8,0
              );
  FUN_00ab7628(0x42dc0000,plVar6);
  *(uint *)((long)param_1 + 0x1334) = *(uint *)((long)param_1 + 0x1334) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x1484) = *(uint *)((long)param_1 + 0x1484) & 0xfffffffb;
  FUN_00f0d92c(param_1 + 0x2d5,PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0,&DAT_01bee7fa);
  *(uint *)((long)param_1 + 0x100c) = *(uint *)((long)param_1 + 0x100c) & 0xffffffef;
  FUN_00b0914c(plVar6,1);
  FUN_00b1ace4(plVar11,1);
  *(uint *)((long)param_1 + 0x5154) = *(uint *)((long)param_1 + 0x5154) & 0xfffffffb;
  if ((*(float *)(param_1 + 0xa23) != 1.0) || (*(float *)((long)param_1 + 0x511c) != 1.0)) {
    lVar19 = NEON_fmov(0x3f800000,4);
    param_1[0xa23] = lVar19;
    FUN_0091ada4(plVar11);
  }
  if (*(long *)(lVar15 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cd1e6c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00cd1e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x120))();
  return;
}




void FUN_00cd1e78(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00cd1e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x118))();
  return;
}




void FUN_00cd1e84(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00cd1e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x118))();
  return;
}




void FUN_00cd1e90(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00cd1e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x120))();
  return;
}




void FUN_00cd1e9c(long *param_1,long *param_2)

{
  long *plVar1;
  char *pcVar2;
  void *pvVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong local_70 [2];
  void *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar1 = param_1 + 0xb1;
  param_1[0xbc0] = -1;
  uVar6 = FUN_00cd114c(plVar1);
  if ((uVar6 & 1) == 0) {
    *(int *)(param_1 + 0xb8a) = (int)param_2[1];
    param_1[0xb89] = *param_2;
    FUN_008fce60(param_1 + 0xb8b,param_2 + 2);
    FUN_008fce60(param_1 + 0xb8e,param_2 + 5);
    FUN_00cd2f88(param_1 + 0xb91,param_2 + 8);
    FUN_008fce60(param_1 + 0xb93,param_2 + 10);
    lVar8 = param_2[0xd];
    param_1[0xb97] = param_2[0xe];
    param_1[0xb96] = lVar8;
    lVar8 = param_2[0xf];
    param_1[0xb99] = param_2[0x10];
    param_1[0xb98] = lVar8;
    lVar8 = param_2[0x11];
    param_1[0xb9b] = param_2[0x12];
    param_1[0xb9a] = lVar8;
    FUN_008fce60(param_1 + 0xb9c,param_2 + 0x13);
    lVar8 = param_2[0x16];
    param_1[0xba0] = param_2[0x17];
    param_1[0xb9f] = lVar8;
    lVar8 = param_2[0x18];
    param_1[0xba2] = param_2[0x19];
    param_1[0xba1] = lVar8;
    lVar8 = param_2[0x1a];
    param_1[0xba4] = param_2[0x1b];
    param_1[0xba3] = lVar8;
    FUN_008fce60(param_1 + 0xba5,param_2 + 0x1c);
    param_1[0xba8] = param_2[0x1f];
    FUN_008fce60(param_1 + 0xba9,param_2 + 0x20);
    param_1[0xbac] = param_2[0x23];
    (**(code **)(*param_1 + 0x130))(param_1);
    FUN_00f0d75c(param_1 + 0x2a,param_1 + 0xbad);
    FUN_00f0d7fc(param_1 + 0x85,param_1 + 0xbb3);
    iVar5 = FUN_00cd6e08(param_1 + 0xb89);
    pcVar2 = "MENU_PROGRESSIVE_REWARD_DAILY_CHEST_SUBTITLE_NEXT";
    if (1 < iVar5) {
      pcVar2 = "MENU_PROGRESSIVE_REWARD_DAILY_CHEST_SUBTITLE_READY";
    }
    uVar7 = FUN_00e6ce7c(pcVar2,0);
    FUN_00f0d75c(param_1 + 0x85,uVar7);
    local_70[0] = FUN_00cd7228(param_1 + 0xb89);
    FUN_00b25438(param_1 + 0x6e1,local_70);
    FUN_00b015a0(plVar1,param_1 + 0xb8b);
    FUN_008fa54c(local_70,"IDLE_CLOSED");
    FUN_00b013a0(0xbf800000,plVar1,local_70);
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    *(uint *)((long)param_1 + 0x378c) =
         *(uint *)((long)param_1 + 0x378c) & 0xfffffff8 |
         *(uint *)((long)param_1 + 0x378c) & 3 | (uint)(iVar5 < 2) << 2;
    *(uint *)((long)param_1 + 0x35ac) =
         *(uint *)((long)param_1 + 0x35ac) & 0xfffffff8 |
         *(uint *)((long)param_1 + 0x35ac) & 3 | (uint)(iVar5 < 2) << 2;
    *(uint *)((long)param_1 + 0x369c) =
         *(uint *)((long)param_1 + 0x369c) & 0xfffffff8 |
         *(uint *)((long)param_1 + 0x369c) & 3 | (uint)(iVar5 == 2) << 2;
    *(uint *)((long)param_1 + 0x60c) =
         *(uint *)((long)param_1 + 0x60c) & 0xfffffff8 |
         *(uint *)((long)param_1 + 0x60c) & 3 | (uint)(0 < iVar5) << 2;
    *(uint *)((long)param_1 + 0x100c) =
         *(uint *)((long)param_1 + 0x100c) & 0xfffffff8 |
         *(uint *)((long)param_1 + 0x100c) & 3 | (uint)(0 < iVar5) << 2;
    (**(code **)(*param_1 + 0x100))(param_1);
  }
  FUN_009697c8(local_70,param_2 + 5,&DAT_01bb05c9);
  pvVar3 = (void *)((ulong)local_70 | 1);
  if ((local_70[0] & 1) != 0) {
    pvVar3 = local_60;
  }
  FUN_00b1a8e8(param_1 + 0xab5,pvVar3);
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void thunk_FUN_00cd11cc(long *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_009b8d90();
  if ((*(byte *)(lVar2 + 0xe1b8) & 1) == 0) {
    if (*(byte *)(lVar2 + 0xe1b8) >> 1 != 0) {
      return;
    }
  }
  else if (*(long *)(lVar2 + 0xe1c0) != 0) {
    return;
  }
  uVar3 = FUN_00cd114c(param_1 + 0xb1);
  if (((uVar3 & 1) == 0) && (uVar3 = (**(code **)(*param_1 + 0x108))(param_1), (uVar3 & 1) != 0)) {
    uVar4 = FUN_009b8d90();
    if ((*(byte *)(param_1 + 0x1d3) & 1) == 0) {
      uVar3 = (ulong)(*(byte *)(param_1 + 0x1d3) >> 1);
    }
    else {
      uVar3 = param_1[0x1d4];
    }
    plVar1 = param_1 + 0x1e9;
    if (uVar3 != 0) {
      plVar1 = param_1 + 0x1d3;
    }
    FUN_009bb728(uVar4,param_1 + 3000,plVar1);
                    /* WARNING: Could not recover jumptable at 0x00cd1278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x118))(param_1);
    return;
  }
  return;
}

