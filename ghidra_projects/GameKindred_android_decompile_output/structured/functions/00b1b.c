// functions/00b1b — 19 functions
#include "libGameKindred.h"




void FUN_00b1b034(undefined8 param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ushort uVar8;
  ushort *puVar9;
  float fVar10;
  float fVar11;
  byte local_90 [16];
  void *local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  lVar1 = param_2 + 0x88;
  fVar11 = *(float *)(param_2 + 0x3e0);
  fVar10 = (float)FUN_00f0e700(lVar1);
  fVar11 = fVar11 / fVar10;
  FUN_00f01980(lVar1);
  uVar2 = *(uint *)(param_2 + 0x10c);
  *(uint *)(param_2 + 0x10c) = uVar2 | 4;
  if ((uVar2 & 0x7f80) != 0x2600) {
    *(uint *)(param_2 + 0x10c) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x2604;
    FUN_0091ada4(lVar1);
  }
  fVar10 = fVar11 * 2.25;
  if ((*(float *)(param_2 + 0xd0) != fVar10) || (*(float *)(param_2 + 0xd4) != fVar10)) {
    *(float *)(param_2 + 0xd0) = fVar10;
    *(float *)(param_2 + 0xd4) = fVar10;
    FUN_0091ada4(lVar1);
  }
  fVar10 = (float)param_1;
  if (0.0 < fVar10) {
    uVar5 = FUN_00efed6c(param_1);
    FUN_00f022a0(lVar1,uVar5);
  }
  uVar5 = FUN_00eff63c(fVar11,fVar11,0x3e4ccccd,FUN_009a7624);
  uVar6 = FUN_00efee28(0x3f3d70a4,0x3e4ccccd,0);
  uVar7 = FUN_00acb4f8();
  FUN_00efcea4(uVar7,uVar5,uVar6,0);
  FUN_00f022a0(lVar1,uVar7);
  lVar4 = DAT_03210d00;
  uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar8 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar8 * 0x40);
    if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = *puVar9;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efc8e8(puVar9);
    puVar9[8] = 0;
    puVar9[9] = 0;
    puVar9[10] = 0;
    puVar9[0xb] = 0;
    puVar9[0xc] = 0;
    puVar9[0xd] = 0;
    puVar9[0xe] = 0;
    puVar9[0xf] = 0;
    puVar9[0x14] = 0;
    puVar9[0x10] = 0;
    puVar9[0x11] = 0;
    puVar9[0x12] = 0;
    puVar9[0x13] = 0;
    *(undefined ***)puVar9 = &PTR_FUN_027d0db0;
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_008fa54c(local_90,"build://Sounds/UI.assetbundle/sfx_ice_rewarded.mp3");
  FUN_00a99c48(puVar9,local_90,0,0);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  FUN_00f022a0(lVar1,puVar9);
  uVar5 = FUN_00eff63c(fVar11 * 0.85,fVar11 * 0.85,0,0);
  uVar6 = FUN_00efee28(0x3f800000,0,0);
  uVar7 = FUN_00acb4f8();
  FUN_00efcea4(uVar7,uVar5,uVar6,0);
  FUN_00f022a0(lVar1,uVar7);
  uVar5 = FUN_00eff63c(fVar11,fVar11,0,0);
  uVar6 = FUN_00efee28(0x3f19999a,0,0);
  uVar7 = FUN_00acb4f8();
  FUN_00efcea4(uVar7,uVar5,uVar6,0);
  FUN_00f022a0(lVar1,uVar7);
  uVar5 = FUN_00efee28(0,0x3ecccccd,0);
  FUN_00f022a0(lVar1,uVar5);
  lVar4 = DAT_03210d00;
  uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar8 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar8 * 0x40 + 0x10);
    if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = *puVar9;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efc8e8(puVar9);
    *(undefined ***)puVar9 = &PTR_FUN_02825148;
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_00f022a0(lVar1,puVar9);
  lVar1 = param_2 + 0x200;
  FUN_00f01980(lVar1);
  uVar2 = *(uint *)(param_2 + 0x284);
  *(uint *)(param_2 + 0x284) = uVar2 | 4;
  if ((uVar2 & 0x7f80) != 0) {
    *(uint *)(param_2 + 0x284) = uVar2 & 0xffff807f | 4;
    FUN_0091ada4(lVar1);
  }
  if ((*(float *)(param_2 + 0x248) != 1.0) || (*(float *)(param_2 + 0x24c) != 1.0)) {
    uVar5 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(param_2 + 0x248) = uVar5;
    FUN_0091ada4(lVar1);
  }
  if (0.0 < fVar10) {
    uVar5 = FUN_00efed6c(param_1);
    FUN_00f022a0(lVar1,uVar5);
  }
  uVar5 = FUN_00eff63c(0x40200000,0x40200000,0x3f19999a,0);
  uVar6 = FUN_00efee28(0x3f800000,0x3f19999a,0);
  uVar7 = FUN_00acb4f8();
  FUN_00efcea4(uVar7,uVar5,uVar6,0);
  FUN_00f022a0(lVar1,uVar7);
  uVar5 = FUN_00eff63c(0x40d33333,0x40d33333,0x40000000,FUN_009a7608);
  uVar6 = FUN_00efee28(0,0x40000000,FUN_009a7608);
  uVar7 = FUN_00acb4f8();
  FUN_00efcea4(uVar7,uVar5,uVar6,0);
  FUN_00f022a0(lVar1,uVar7);
  lVar1 = param_2 + 0x2f0;
  FUN_00f01980(lVar1);
  uVar2 = *(uint *)(param_2 + 0x374);
  *(uint *)(param_2 + 0x374) = uVar2 | 4;
  if ((uVar2 & 0x7f80) != 0) {
    *(uint *)(param_2 + 0x374) = uVar2 & 0xffff807f | 4;
    FUN_0091ada4(lVar1);
  }
  if ((*(float *)(param_2 + 0x338) != 1.0) || (*(float *)(param_2 + 0x33c) != 1.0)) {
    uVar5 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(param_2 + 0x338) = uVar5;
    FUN_0091ada4(lVar1);
  }
  if (0.0 < fVar10) {
    uVar5 = FUN_00efed6c(param_1);
    FUN_00f022a0(lVar1,uVar5);
  }
  uVar5 = FUN_00efed6c(0x3e99999a);
  FUN_00f022a0(lVar1,uVar5);
  uVar5 = FUN_00eff63c(0x40200000,0x40200000,0x3f051eb8,0);
  uVar6 = FUN_00efee28(0x3ecccccd,0x3f051eb8,0);
  uVar7 = FUN_00acb4f8();
  FUN_00efcea4(uVar7,uVar5,uVar6,0);
  FUN_00f022a0(lVar1,uVar7);
  uVar5 = FUN_00eff63c(0x40d33333,0x40d33333,0x40000000,FUN_009a7608);
  uVar6 = FUN_00efee28(0,0x40000000,FUN_009a7608);
  uVar7 = FUN_00acb4f8();
  FUN_00efcea4(uVar7,uVar5,uVar6,0);
  FUN_00f022a0(lVar1,uVar7);
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b1b66c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_00f1306c();
  lVar2 = 0;
  *param_1 = (long)&PTR_FUN_027dd3c8;
  do {
    FUN_00f0e4a8((long)param_1 + lVar2 + 0x158);
    lVar2 = lVar2 + 0xf0;
  } while (lVar2 != 0x3c0);
  lVar2 = 0;
  do {
    lVar1 = (long)param_1 + lVar2 + 0x158;
    (**(code **)(*param_1 + 0x78))(param_1,lVar1,1);
    FUN_00f0e548(lVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
    lVar2 = lVar2 + 0xf0;
  } while (lVar2 != 0x3c0);
  return;
}




void FUN_00b1b718(undefined8 param_1,float param_2,undefined8 param_3,long param_4)

{
  float fVar1;
  float fVar2;
  
  FUN_00f13f08(param_1,param_3,param_4 + 0x158);
  fVar1 = (float)param_3;
  fVar2 = param_2 - (fVar1 + fVar1);
  FUN_00f13f08(param_3,fVar2,param_4 + 0x248);
  FUN_00f13f08(param_1,param_3,param_4 + 0x338);
  FUN_00f13f08(param_3,fVar2,param_4 + 0x428);
  if ((*(float *)(param_4 + 0x198) != 0.0) || (*(float *)(param_4 + 0x19c) != 0.0)) {
    *(undefined8 *)(param_4 + 0x198) = 0;
    FUN_0091ada4(param_4 + 0x158);
  }
  fVar2 = (float)param_1 - fVar1;
  if ((*(float *)(param_4 + 0x288) != fVar2) || (*(float *)(param_4 + 0x28c) != fVar1)) {
    *(float *)(param_4 + 0x288) = fVar2;
    *(float *)(param_4 + 0x28c) = fVar1;
    FUN_0091ada4(param_4 + 0x248);
  }
  if ((*(float *)(param_4 + 0x378) != 0.0) || (*(float *)(param_4 + 0x37c) != param_2 - fVar1)) {
    *(undefined4 *)(param_4 + 0x378) = 0;
    *(float *)(param_4 + 0x37c) = param_2 - fVar1;
    FUN_0091ada4(param_4 + 0x338);
  }
  if ((*(float *)(param_4 + 0x468) != 0.0) || (*(float *)(param_4 + 0x46c) != fVar1)) {
    *(undefined4 *)(param_4 + 0x468) = 0;
    *(float *)(param_4 + 0x46c) = fVar1;
    FUN_0091ada4(param_4 + 0x428);
  }
  FUN_00f13238(param_4);
  return;
}




void FUN_00b1b85c(long *param_1,byte param_2)

{
  long *plVar1;
  long *plVar2;
  undefined **ppuVar3;
  char *pcVar4;
  long lVar5;
  bool bVar6;
  code *local_78;
  long *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  FUN_00b08d84();
  plVar1 = param_1 + 0x4e;
  *param_1 = (long)&PTR_FUN_027cbcd8;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x6c;
  FUN_00f0d160(plVar2);
  *(undefined1 *)(param_1 + 0x92) = 0;
  *(byte *)((long)param_1 + 0x491) = param_2 & 1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  bVar6 = (param_2 & 1) == 0;
  ppuVar3 = &PTR_s_build___HUDPartsCommon_atlas_02be3440;
  if (bVar6) {
    ppuVar3 = &PTR_s_build___MenuPartsCommon_tga_02be3530;
  }
  pcVar4 = "checkbox_hud_empty";
  if (bVar6) {
    pcVar4 = "checkbox_empty";
  }
  FUN_00f0e548(plVar1,*ppuVar3,pcVar4);
  FUN_00f0d378(plVar2,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40);
  FUN_00e705c8(&local_78,"Label");
  FUN_00f0d75c(plVar2,&local_78);
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
  }
  local_50 = DAT_03210c64;
  local_78 = thunk_FUN_00b1bd24;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  local_70 = param_1;
  FUN_009693a0(param_1 + 1,&local_78);
  FUN_00b09144(0,param_1);
  FUN_00b1b9dc(param_1);
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b1bd24(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  *(byte *)(param_1 + 0x490) = *(byte *)(param_1 + 0x490) ^ 1;
  FUN_00b1b9dc();
  uVar2 = FUN_00f048a4("UI::EVENT_CONTROL_TOGGLED");
  FUN_00f048e0(auStack_48,uVar2,*(undefined1 *)(param_1 + 0x490));
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b1b9dc(long param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  bVar6 = *(char *)(param_1 + 0x491) == '\0';
  pcVar3 = "checkbox_hud_filled";
  if (bVar6) {
    pcVar3 = "checkbox_filled";
  }
  lVar1 = param_1 + 0x270;
  pcVar4 = "checkbox_hud_empty";
  if (bVar6) {
    pcVar4 = "checkbox_empty";
  }
  if (*(char *)(param_1 + 0x490) != '\0') {
    pcVar4 = pcVar3;
  }
  FUN_00f0e578(lVar1,pcVar4);
  bVar6 = *(char *)(param_1 + 0x490) != '\0';
  fVar8 = 25.0;
  if (bVar6) {
    fVar8 = 31.0;
  }
  fVar8 = *(float *)(param_1 + 0x2b8) * fVar8;
  fVar9 = 28.0;
  if (bVar6) {
    fVar9 = 26.0;
  }
  fVar9 = *(float *)(param_1 + 700) * fVar9;
  if ((*(float *)(param_1 + 0x2b0) != fVar8) || (*(float *)(param_1 + 0x2b4) != fVar9)) {
    *(float *)(param_1 + 0x2b0) = fVar8;
    *(float *)(param_1 + 0x2b4) = fVar9;
    FUN_0091ada4(lVar1);
  }
  local_50 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x270) + 0x28))(lVar1,&local_50);
  fVar8 = 60.0;
  lVar2 = param_1 + 0x360;
  fVar9 = (float)*(undefined8 *)(param_1 + 0x2b8) * 60.0;
  fVar7 = (float)((ulong)*(undefined8 *)(param_1 + 0x2b8) >> 0x20) * 28.0;
  if ((*(float *)(param_1 + 0x3a0) != fVar9) ||
     (fVar8 = *(float *)(param_1 + 0x3a4), fVar8 != fVar7)) {
    *(ulong *)(param_1 + 0x3a0) = CONCAT44(fVar7,fVar9);
    FUN_0091ada4(lVar2);
  }
  local_50 = 0x3f00000000000000;
  (**(code **)(*(long *)(param_1 + 0x360) + 0x28))(lVar2,&local_50);
  fVar10 = *(float *)(param_1 + 0x3a0);
  fVar7 = (float)FUN_00f0d4e0(lVar2);
  FUN_00f0eac0(lVar1);
  fVar9 = fVar8;
  FUN_00f0d4e0(lVar2);
  if (fVar8 <= fVar9) {
    fVar8 = fVar9;
  }
  FUN_00f13f08(fVar10 + fVar7,fVar8,param_1);
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00b1bb80(undefined1 param_1 [16],float param_2,long *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)(**(code **)(*param_3 + 0x48))();
  fVar2 = (float)DAT_03218f08;
  if ((fVar1 != 0.0) &&
     ((**(code **)(*param_3 + 0x48))(param_3), fVar2 = (float)DAT_03218f08, param_2 != 0.0)) {
    fVar2 = (float)FUN_00f080a0(param_3 + 0x4e,8,param_3,0);
    fVar1 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    fVar2 = fVar2 / fVar1;
  }
  return fVar2;
}




void FUN_00b1bc14(long param_1,undefined8 param_2,byte *param_3)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar1 = param_3 + 1;
  }
  FUN_00f0d378(param_1 + 0x360,pbVar1);
  FUN_00f0d75c(param_1 + 0x360,param_2);
  FUN_00b1b9dc(param_1);
  return;
}




void FUN_00b1bc68(long param_1)

{
  FUN_00f0d75c(param_1 + 0x360);
  FUN_00b1b9dc(param_1);
  return;
}




void FUN_00b1bc90(long param_1,byte *param_2)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
  }
  FUN_00f0d378(param_1 + 0x360,pbVar1);
  FUN_00b1b9dc(param_1);
  return;
}




void FUN_00b1bcc8(float param_1,long param_2)

{
  if ((*(float *)(param_2 + 0x2b8) != param_1) || (*(float *)(param_2 + 700) != param_1)) {
    *(float *)(param_2 + 0x2b8) = param_1;
    *(float *)(param_2 + 700) = param_1;
    FUN_0091ada4(param_2 + 0x270);
  }
  FUN_00b1b9dc(param_2);
  return;
}




void FUN_00b1bd10(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x490) = param_2 & 1;
  FUN_00b1b9dc();
  return;
}




undefined1 FUN_00b1bd1c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x490);
}




void FUN_00b1bd24(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(byte *)(param_1 + 0x490) = *(byte *)(param_1 + 0x490) ^ 1;
  FUN_00b1b9dc();
  uVar2 = FUN_00f048a4("UI::EVENT_CONTROL_TOGGLED");
  FUN_00f048e0(auStack_48,uVar2,*(undefined1 *)(param_1 + 0x490));
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b1bda4(undefined8 *param_1)

{
  FUN_00f13ca4();
  *param_1 = &PTR_FUN_027dd138;
  FUN_00f0bdbc(param_1 + 0x17,0);
  param_1[0x17] = &PTR_FUN_027c3260;
  FUN_00f0e4a8(param_1 + 0x30);
  FUN_00f0e4a8(param_1 + 0x4e);
  FUN_00f0e4a8(param_1 + 0x6c);
  FUN_00b1be10(param_1);
  return;
}




void FUN_00b1be10(long *param_1)

{
  long *plVar1;
  
  plVar1 = param_1 + 0x17;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,param_1 + 0x30,1);
  FUN_00f023ec(plVar1,param_1 + 0x4e,1);
  FUN_00f023ec(plVar1,param_1 + 0x6c,1);
  FUN_00f0e548(param_1 + 0x30,PTR_s_build___MenuPartsCommon_tga_02be3530,"splash_glass_shadow");
  *(byte *)(param_1 + 0x4b) = *(byte *)(param_1 + 0x4b) | 1;
  FUN_00f0e548(param_1 + 0x4e,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e548(param_1 + 0x6c,PTR_s_build___MenuPartsCommon_tga_02be3530,"splash_glass_shadow");
  FUN_00b1bf6c(param_1);
  return;
}




void FUN_00b1bee4(float param_1,float param_2,long param_3)

{
  float fVar1;
  
  if (param_2 <= 2.0) {
    param_2 = 2.0;
  }
  fVar1 = param_1 * 0.1;
  if (fVar1 <= 4.0) {
    fVar1 = 4.0;
  }
  param_1 = param_1 - (fVar1 + fVar1);
  if (param_1 <= 4.0) {
    param_1 = 4.0;
  }
  FUN_00f13f08(fVar1,param_2,param_3 + 0x180);
  FUN_00f13f08(fVar1,param_2,param_3 + 0x360);
  FUN_00f13f08(param_1,param_2,param_3 + 0x270);
  FUN_00b1bf6c(param_3);
  return;
}




void FUN_00b1bf6c(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f0bc10(0,0,0,auStack_48);
  FUN_00f0c168(param_1 + 0xb8,auStack_48);
  (**(code **)(*(long *)(param_1 + 0xb8) + 0x90))(param_1 + 0xb8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b1bfec(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  float fVar5;
  undefined8 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  FUN_00f017e8();
  plVar1 = param_1 + 0x11;
  *param_1 = (long)&PTR_FUN_027dd518;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x2f;
  FUN_00f0d160(plVar2);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f0d92c(plVar2,PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78,&DAT_01bee7f6);
  FUN_00f0d75c(plVar2,param_2);
  uVar3 = *(uint *)((long)param_1 + 0x1fc);
  if ((uVar3 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x1fc) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x7280;
    FUN_0091ada4(plVar2);
  }
  if ((*(float *)(param_1 + 0x37) != 0.0) || (*(float *)((long)param_1 + 0x1bc) != 0.0)) {
    param_1[0x37] = 0;
    FUN_0091ada4(plVar2);
  }
  local_50 = 0x3f0000003f000000;
  (**(code **)(param_1[0x2f] + 0x28))(plVar2,&local_50);
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"splash_glass_shadow");
  uVar3 = *(uint *)((long)param_1 + 0x10c);
  *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) | 1;
  if ((uVar3 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x10c) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x6600;
    FUN_0091ada4(plVar1);
  }
  fVar5 = (float)FUN_00f0d548(plVar2);
  FUN_00f13f08(fVar5 + 80.0,0x42800000,plVar1);
  if ((*(float *)(param_1 + 0x19) != 0.0) || (*(float *)((long)param_1 + 0xcc) != 0.0)) {
    param_1[0x19] = 0;
    FUN_0091ada4(plVar1);
  }
  local_50 = 0x3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_50);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

