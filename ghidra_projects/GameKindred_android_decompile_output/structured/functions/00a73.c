// functions/00a73 — 23 functions
#include "libGameKindred.h"




void FUN_00a7303c(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 2) {
    uVar1 = *(uint *)(param_1 + 0x38c) & 0xfffffffb;
    uVar2 = *(uint *)(param_1 + 0x904) & 0xfffffffb;
  }
  else {
    uVar2 = (uint)(0.0 < *(float *)(param_1 + 0x12d8));
    uVar1 = *(uint *)(param_1 + 0x38c) & 0xfffffff8 | *(uint *)(param_1 + 0x38c) & 3 | uVar2 << 2;
    uVar2 = *(uint *)(param_1 + 0x904) & 0xfffffff8 | *(uint *)(param_1 + 0x904) & 3 | uVar2 << 2;
  }
  *(uint *)(param_1 + 0x38c) = uVar1;
  *(uint *)(param_1 + 0x904) = uVar2;
  return;
}




void FUN_00a73080(long param_1)

{
  *(uint *)(param_1 + 0xe7c) = *(uint *)(param_1 + 0xe7c) | 4;
  return;
}




void FUN_00a73094(undefined8 param_1,long param_2,uint param_3,undefined8 param_4,uint param_5,
                 uint param_6)

{
  undefined8 uVar1;
  
  FUN_00b89d24(param_2 + 0x240,param_3 & 1,3,param_5 & 1);
  if ((*(byte *)(param_2 + 0x12dc) & 1) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = 3;
  }
  FUN_00a49d60(param_1,param_2 + 0xdf8,(param_3 | param_6) & 1,uVar1,1);
  FUN_00a3170c(param_1,param_2 + 0x1140,param_3 & 1,1,1);
  if ((*(byte *)(param_2 + 0x12dc) & 1) == 0) {
    return;
  }
  FUN_00b89d24(param_1,param_2 + 0x88,param_3 & 1,3,param_5 & 1);
  return;
}




void FUN_00a73170(long param_1,uint param_2)

{
  FUN_00a751b4(param_1 + 0x308,param_2 & 1);
  FUN_00a751b4(param_1 + 0x880,param_2 & 1);
  return;
}




void FUN_00a731a4(long param_1,undefined8 param_2)

{
  char cVar1;
  uint *puVar2;
  
  cVar1 = FUN_00d55870(param_2);
  if (cVar1 == '\x01') {
    FUN_00a74fe4(param_1 + 0x308,param_2);
    puVar2 = (uint *)(param_1 + 0x38c);
  }
  else {
    cVar1 = FUN_00d55870(param_2);
    if (cVar1 != '\x02') goto LAB_00a7321c;
    FUN_00a74fe4(param_1 + 0x880,param_2);
    puVar2 = (uint *)(param_1 + 0x904);
  }
  *puVar2 = *puVar2 & 0xfffffff8 | *puVar2 & 3 | (uint)(0.0 < *(float *)(param_1 + 0x12d8)) << 2;
LAB_00a7321c:
  FUN_00a72b8c(param_1);
  return;
}




void FUN_00a7322c(long param_1)

{
  FUN_00a3201c(param_1 + 0x1140);
  return;
}




void FUN_00a73238(long param_1)

{
  FUN_00a32b0c(param_1 + 0x1140);
  return;
}




void FUN_00a73244(long param_1)

{
  FUN_00a32fe0(param_1 + 0x1140);
  return;
}




void FUN_00a73250(long param_1)

{
  thunk_FUN_00a74c4c(param_1 + 0x308);
  thunk_FUN_00a74c4c(param_1 + 0x880);
  return;
}




undefined8 FUN_00a73278(long param_1,char param_2)

{
  undefined8 uVar1;
  
  if (param_2 == '\x02') {
    uVar1 = FUN_00a751b8(param_1 + 0x880);
    return uVar1;
  }
  if (param_2 == '\x01') {
    uVar1 = FUN_00a751b8(param_1 + 0x308);
    return uVar1;
  }
  return 0;
}




long FUN_00a732a4(long param_1,char param_2)

{
  long lVar1;
  
  if (param_2 == '\x02') {
    lVar1 = param_1 + 0x880;
  }
  else {
    lVar1 = 0;
    if (param_2 == '\x01') {
      return param_1 + 0x308;
    }
  }
  return lVar1;
}




undefined8 FUN_00a732d0(long param_1,char param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  if (param_2 == '\x02') {
    param_1 = param_1 + 0x880;
  }
  else {
    if (param_2 != '\x01') {
      return 0xffffffff;
    }
    param_1 = param_1 + 0x308;
  }
  uVar1 = FUN_00a751c0(param_1,param_3);
  return uVar1;
}




void FUN_00a73308(long param_1)

{
  FUN_00a49fc8(param_1 + 0xdf8);
  return;
}




void FUN_00a73310(long param_1)

{
  FUN_00a49fd0(param_1 + 0xdf8);
  return;
}




void FUN_00a73318(long param_1)

{
  FUN_00a49fd8(param_1 + 0xdf8);
  return;
}




void FUN_00a73320(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cd6c0;
  FUN_00a315bc(param_1 + 0x228);
  FUN_00a49d70(param_1 + 0x1bf);
  FUN_00a74b80(param_1 + 0x110);
  FUN_00a74b80(param_1 + 0x61);
  FUN_00f13d08(param_1 + 0x48);
  param_1[0x2a] = &PTR_FUN_028266f0;
  param_1[0x41] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x44);
  FUN_00f13d08(param_1 + 0x2a);
  FUN_00f13d08(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00a733b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cd6c0;
  FUN_00a315bc(param_1 + 0x228);
  FUN_00a49d70(param_1 + 0x1bf);
  FUN_00a74b80(param_1 + 0x110);
  FUN_00a74b80(param_1 + 0x61);
  FUN_00f13d08(param_1 + 0x48);
  param_1[0x2a] = &PTR_FUN_028266f0;
  param_1[0x41] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x44);
  FUN_00f13d08(param_1 + 0x2a);
  FUN_00f13d08(param_1 + 0x11);
  FUN_00f01868(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00a73448(undefined1 param_1 [16],float param_2,long *param_3)

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
  uint uVar12;
  long lVar13;
  ulong uVar14;
  float fVar15;
  float local_84;
  ulong local_80;
  long local_78;
  
  lVar13 = tpidr_el0;
  local_78 = *(long *)(lVar13 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_3 + 0x17;
  *param_3 = (long)&PTR_FUN_027cd7c0;
  FUN_00b89cd8(plVar1);
  plVar2 = param_3 + 0x30;
  FUN_00f017e8(plVar2);
  plVar3 = param_3 + 0x41;
  param_3[0x30] = (long)&PTR_FUN_027c1f80;
  FUN_00f017e8(plVar3);
  param_3[0x41] = (long)&PTR_FUN_027c1f80;
  plVar4 = param_3 + 0x52;
  FUN_00f0e4a8(plVar4);
  plVar5 = param_3 + 0x70;
  FUN_00f0e4a8(plVar5);
  plVar6 = param_3 + 0x8e;
  FUN_00f0e4a8(plVar6);
  plVar7 = param_3 + 0xac;
  FUN_00f0e4a8(plVar7);
  plVar8 = param_3 + 0xca;
  FUN_00a746c0(plVar8,1);
  plVar9 = param_3 + 0x192;
  FUN_00a746c0(plVar9,0);
  plVar10 = param_3 + 0x25a;
  FUN_00f0e4a8();
  plVar11 = param_3 + 0x278;
  FUN_00f0d160(plVar11);
  FUN_00e70510(param_3 + 0x29e);
  (**(code **)(*param_3 + 0x78))(param_3,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00f023ec(plVar3,plVar4,1);
  FUN_00f023ec(plVar3,plVar5,1);
  FUN_00f023ec(plVar3,plVar6,1);
  FUN_00f023ec(plVar3,plVar7,1);
  FUN_00f023ec(plVar2,plVar10,1);
  FUN_00f023ec(plVar2,plVar8,1);
  FUN_00f023ec(plVar2,plVar9,1);
  FUN_00f023ec(plVar2,plVar11,1);
  FUN_00f0e548(plVar4,PTR_s_build___HUDPartsCommon_atlas_02be3440,"white_background");
  FUN_00f0e670(plVar4,&DAT_01bee7f6,2);
  uVar12 = *(uint *)((long)param_3 + 0x314);
  if ((uVar12 & 0x7f80) != 0x2c80) {
    *(uint *)((long)param_3 + 0x314) = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x2c80;
    FUN_0091ada4(plVar4);
  }
  FUN_00f0e548(plVar5,PTR_s_build___HUDPartsCommon_atlas_02be3440,"white_background");
  uVar12 = *(uint *)((long)param_3 + 0x404);
  if ((uVar12 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_3 + 0x404) = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x1980;
    FUN_0091ada4(plVar5);
  }
  FUN_00f0e548(plVar6,PTR_s_build___HUDPartsCommon_atlas_02be3440,"white_background");
  uVar12 = *(uint *)((long)param_3 + 0x4f4);
  if ((uVar12 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_3 + 0x4f4) = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x1980;
    FUN_0091ada4(plVar6);
  }
  FUN_00f0e548(plVar7,PTR_s_build___HUDPartsCommon_atlas_02be3440,"white_background");
  uVar12 = *(uint *)((long)param_3 + 0x5e4);
  if ((uVar12 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_3 + 0x5e4) = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x1980;
    FUN_0091ada4(plVar7);
  }
  FUN_00f0d92c(plVar11,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40,&DAT_01bee7fa);
  uVar12 = *(uint *)((long)param_3 + 0x1444);
  if ((uVar12 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_3 + 0x1444) = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x6600;
    FUN_0091ada4(plVar11);
  }
  FUN_00f0da80(plVar11,&DAT_03131298);
  FUN_00f0da30(plVar11,1);
  if ((*(float *)(param_3 + 0x282) != 0.0) || (*(float *)((long)param_3 + 0x1414) != 0.0)) {
    param_3[0x282] = 0;
    FUN_0091ada4(plVar11);
  }
  FUN_00f0e548(plVar10,PTR_s_build___HUDPartsCommon_atlas_02be3440,"hud_scoreboard_cross_swords");
  if ((*(float *)(param_3 + 0x262) != 0.0) || (*(float *)((long)param_3 + 0x1314) != 0.0)) {
    param_3[0x262] = 0;
    FUN_0091ada4(plVar10);
  }
  local_80 = 0x3f0000003f000000;
  (**(code **)(param_3[0x25a] + 0x28))(plVar10,&local_80);
  FUN_00f0e700(plVar10);
  param_2 = 28.0 / param_2;
  if ((*(float *)(param_3 + 0x263) != param_2) || (*(float *)((long)param_3 + 0x131c) != param_2)) {
    *(float *)(param_3 + 0x263) = param_2;
    *(float *)((long)param_3 + 0x131c) = param_2;
    FUN_0091ada4(plVar10);
  }
  fVar15 = (float)FUN_00f0eac0(plVar10);
  fVar15 = fVar15 * 0.5 + 10.0;
  if ((*(float *)(param_3 + 0xd2) != -fVar15) || (*(float *)((long)param_3 + 0x694) != 0.0)) {
    *(float *)(param_3 + 0xd2) = -fVar15;
    *(undefined4 *)((long)param_3 + 0x694) = 0;
    FUN_0091ada4(plVar8);
  }
  local_80 = 0x3f0000003f800000;
  (**(code **)(param_3[0xca] + 0x28))(plVar8,&local_80);
  if ((*(float *)(param_3 + 0x19a) != fVar15) || (*(float *)((long)param_3 + 0xcd4) != 0.0)) {
    *(float *)(param_3 + 0x19a) = fVar15;
    *(undefined4 *)((long)param_3 + 0xcd4) = 0;
    FUN_0091ada4(plVar9);
  }
  local_80 = 0x3f00000000000000;
  (**(code **)(param_3[0x192] + 0x28))(plVar9,&local_80);
  FUN_00a739d4(param_3);
  local_84 = 1.0;
  local_80 = local_80 & 0xffffffff00000000;
  FUN_009399dc(&local_80,&local_84,0,0,0,0,0,0);
  FUN_00ceace8();
  uVar14 = FUN_00ceaf9c();
  if ((uVar14 & 1) == 0) {
    if ((int)local_80 != 1) goto LAB_00a73990;
  }
  else {
    local_80 = CONCAT44(local_80._4_4_,1);
  }
  if (local_84 <= 0.0) {
    *(uint *)((long)param_3 + 0x84) = *(uint *)((long)param_3 + 0x84) & 0xfffffffb;
  }
  else {
    fVar15 = (float)NEON_fminnm(local_84,0x40800000);
    if (fVar15 <= 0.5) {
      fVar15 = 0.5;
    }
    if ((*(float *)(param_3 + 9) != fVar15) || (*(float *)((long)param_3 + 0x4c) != fVar15)) {
      *(float *)(param_3 + 9) = fVar15;
      *(float *)((long)param_3 + 0x4c) = fVar15;
      FUN_0091ada4(param_3);
    }
  }
LAB_00a73990:
  FUN_00a73abc(param_3);
  if (*(long *)(lVar13 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a739d4(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00a74124(0x47c15c00,param_1 + 0x650,6,99);
  FUN_00a74124(0x47c15c00,param_1 + 0xc90,6,99);
  lVar1 = param_1 + 0x13c0;
  FUN_00e705c8(&local_48,"99:99");
  FUN_00f0d75c(lVar1,&local_48);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  fVar3 = (float)FUN_00f0d4e0(lVar1);
  fVar3 = fVar3 * -0.5 + -2.5;
  if (*(float *)(param_1 + 0x1400) != fVar3) {
    *(float *)(param_1 + 0x1400) = fVar3;
    FUN_0091ada4(lVar1);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a73abc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_78 [4];
  float local_74;
  undefined8 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  FUN_00a739d4();
  FUN_00f00298(&local_74,auStack_78);
  lVar1 = param_1 + 0x650;
  fVar10 = (local_74 * 0.5) / *(float *)(param_1 + 0x48);
  fVar6 = (float)FUN_00f0d4e0(param_1 + 0xb48);
  fVar6 = fVar6 * 0.5 + 10.0;
  if ((*(float *)(param_1 + 0x1c0) != fVar10) || (*(float *)(param_1 + 0x1c4) != fVar6)) {
    *(float *)(param_1 + 0x1c0) = fVar10;
    *(float *)(param_1 + 0x1c4) = fVar6;
    FUN_0091ada4(param_1 + 0x180);
  }
  local_70 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x180) + 0x28))(param_1 + 0x180,&local_70);
  FUN_00a74274(lVar1);
  FUN_00a74274(param_1 + 0xc90);
  lVar2 = param_1 + 0x290;
  fVar6 = (float)FUN_00f13e54(lVar1);
  fVar10 = (float)FUN_00f13e54(param_1 + 0xc90);
  fVar9 = 120.0;
  FUN_00f13e54(lVar1);
  fVar9 = fVar9 + -5.0;
  FUN_00f13f08(fVar6 + fVar10 + 120.0,lVar2);
  lVar1 = param_1 + 0x380;
  FUN_00f0e700(lVar2);
  fVar9 = fVar9 + -2.0;
  FUN_00f13f08(0x40000000,lVar1);
  lVar3 = param_1 + 0x470;
  uVar7 = FUN_00f0e700(lVar1);
  local_70 = CONCAT44(fVar9,uVar7);
  FUN_00f13f18(lVar3,&local_70);
  lVar4 = param_1 + 0x560;
  uVar8 = FUN_00f0e700(lVar2);
  FUN_00f13f08(uVar8,0x40000000,lVar4);
  if ((*(float *)(param_1 + 0x2d0) != 0.0) || (*(float *)(param_1 + 0x2d4) != 0.0)) {
    *(undefined8 *)(param_1 + 0x2d0) = 0;
    FUN_0091ada4(lVar2);
  }
  local_70 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x290) + 0x28))(lVar2,&local_70);
  fVar6 = (float)FUN_00f0e700(lVar2);
  if ((*(float *)(param_1 + 0x3c0) != fVar6 * -0.5) || (*(float *)(param_1 + 0x3c4) != 0.0)) {
    *(float *)(param_1 + 0x3c0) = fVar6 * -0.5;
    *(undefined4 *)(param_1 + 0x3c4) = 0;
    FUN_0091ada4(lVar1);
  }
  local_70 = 0x3f00000000000000;
  (**(code **)(*(long *)(param_1 + 0x380) + 0x28))(lVar1,&local_70);
  fVar6 = (float)FUN_00f0e700(lVar2);
  fVar10 = *(float *)(param_1 + 0x4b0);
  if ((fVar10 != fVar6 * 0.5) || (fVar10 = *(float *)(param_1 + 0x4b4), fVar10 != 0.0)) {
    *(float *)(param_1 + 0x4b0) = fVar6 * 0.5;
    *(undefined4 *)(param_1 + 0x4b4) = 0;
    FUN_0091ada4(lVar3);
  }
  local_70 = 0x3f0000003f800000;
  (**(code **)(*(long *)(param_1 + 0x470) + 0x28))(lVar3,&local_70);
  FUN_00f0e700(lVar2);
  fVar6 = fVar10 * 0.5;
  if ((*(float *)(param_1 + 0x5a0) != 0.0) ||
     (fVar10 = *(float *)(param_1 + 0x5a4), fVar10 != fVar6)) {
    *(undefined4 *)(param_1 + 0x5a0) = 0;
    *(float *)(param_1 + 0x5a4) = fVar6;
    FUN_0091ada4(lVar4);
  }
  local_70 = 0x3f8000003f000000;
  (**(code **)(*(long *)(param_1 + 0x560) + 0x28))(lVar4,&local_70);
  fVar6 = *(float *)(param_1 + 0x2d4);
  FUN_00f0eac0(lVar2);
  fVar6 = fVar6 + fVar10 * 0.5 + 10.0;
  if (*(float *)(param_1 + 0x1404) != fVar6) {
    *(float *)(param_1 + 0x1404) = fVar6;
    FUN_0091ada4(param_1 + 0x13c0);
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a73dcc(long param_1)

{
  float fVar1;
  
  FUN_00a73e40();
  FUN_009bbfb0();
  fVar1 = (float)FUN_009bc268();
  FUN_00e70e18(param_1 + 0x14f0,"%d:%02d",(int)fVar1 / 0x3c,(int)fVar1 % 0x3c);
  FUN_00f0d75c(param_1 + 0x13c0,param_1 + 0x14f0);
  return;
}




void FUN_00a73e40(long param_1)

{
  long lVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  long *plVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  long local_230 [3];
  undefined **local_218 [3];
  long local_200 [16];
  long local_180 [32];
  long local_80;
  
  lVar1 = tpidr_el0;
  local_80 = *(long *)(lVar1 + 0x28);
  FUN_00d4d28c(local_218);
  local_218[0] = &PTR_FUN_0281d988;
  uVar4 = FUN_00d9e840(local_218,local_180,0x20,0);
  if (uVar4 == 0) {
    iVar9 = 0;
    iVar10 = 0;
  }
  else {
    iVar10 = 0;
    iVar9 = 0;
    uVar12 = (ulong)uVar4;
    plVar14 = local_180;
    do {
      uVar4 = *(ushort *)(*plVar14 + 0x88) & 0x1f;
      if ((uVar4 == 0x1f) || (1 < *(ushort *)(*plVar14 + (ulong)uVar4 * 0x38 + 0x90) - 3)) {
        cVar3 = FUN_00d55870();
        if (cVar3 == '\x01') {
          iVar10 = iVar10 + 1;
        }
        else {
          iVar9 = iVar9 + 1;
        }
      }
      uVar12 = uVar12 - 1;
      plVar14 = plVar14 + 1;
    } while (uVar12 != 0);
  }
  FUN_00d4d54c(local_230);
  uVar4 = FUN_00d9e840(local_230,local_200,0x10,0);
  uVar12 = (ulong)uVar4;
  FUN_00ceace8();
  uVar6 = FUN_00ceb054();
  if ((uVar6 & 1) == 0) {
    if (uVar4 == 0) {
      iVar13 = 0;
      iVar11 = 0;
      fVar15 = 0.0;
      fVar16 = 0.0;
      goto LAB_00a740b0;
    }
    iVar13 = 0;
    iVar11 = 0;
    plVar14 = local_200;
    uVar6 = uVar12;
    do {
      cVar3 = FUN_00d55870(*plVar14);
      lVar8 = *(long *)(*plVar14 + 0x40);
      fVar15 = (*(float *)(lVar8 + 0x244) + 1.0) *
               (*(float *)(lVar8 + 0xdc) +
               *(float *)(lVar8 + 400) * (*(float *)(lVar8 + 0x2f8) + 1.0));
      if (DAT_03133214 <= fVar15) {
        fVar15 = DAT_03133214;
      }
      fVar16 = DAT_03133154;
      if (DAT_03133154 <= fVar15) {
        fVar16 = fVar15;
      }
      if (cVar3 == '\x01') {
        iVar11 = (int)(fVar16 + (float)iVar11);
      }
      else {
        iVar13 = (int)(fVar16 + (float)iVar13);
      }
      uVar6 = uVar6 - 1;
      plVar14 = plVar14 + 1;
    } while (uVar6 != 0);
  }
  else {
    local_230[0] = 0;
    FUN_019889cc(local_230,1,DAT_0312edf0,0);
    lVar8 = local_230[0];
    uVar5 = FUN_00d704ac(1);
    plVar14 = (long *)(lVar8 + 0x28);
    piVar7 = (int *)(**(code **)(*plVar14 + 0x18))(plVar14,uVar5);
    iVar11 = *piVar7;
    uVar5 = FUN_00d704ac(2);
    piVar7 = (int *)(**(code **)(*plVar14 + 0x18))(plVar14,uVar5);
    iVar13 = *piVar7;
  }
  if (uVar4 == 0) {
    fVar15 = 0.0;
    fVar16 = 0.0;
  }
  else {
    fVar16 = 0.0;
    fVar15 = 0.0;
    plVar14 = local_200;
    do {
      cVar3 = FUN_00d55870(*plVar14);
      fVar17 = *(float *)(*(long *)(*plVar14 + 0x40) + 0x324);
      fVar2 = fVar15 + fVar17;
      if (cVar3 != '\x01') {
        fVar2 = fVar15;
        fVar16 = fVar16 + fVar17;
      }
      fVar15 = fVar2;
      uVar12 = uVar12 - 1;
      plVar14 = plVar14 + 1;
    } while (uVar12 != 0);
  }
LAB_00a740b0:
  FUN_00a74124(fVar15,param_1 + 0x650,iVar10,iVar11);
  FUN_00a74124(fVar16,param_1 + 0xc90,iVar9,iVar13);
  if (*(long *)(lVar1 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void thunk_FUN_00a73abc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_78 [4];
  float fStack_74;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar5 = tpidr_el0;
  lStack_68 = *(long *)(lVar5 + 0x28);
  FUN_00a739d4();
  FUN_00f00298(&fStack_74,auStack_78);
  lVar1 = param_1 + 0x650;
  fVar10 = (fStack_74 * 0.5) / *(float *)(param_1 + 0x48);
  fVar6 = (float)FUN_00f0d4e0(param_1 + 0xb48);
  fVar6 = fVar6 * 0.5 + 10.0;
  if ((*(float *)(param_1 + 0x1c0) != fVar10) || (*(float *)(param_1 + 0x1c4) != fVar6)) {
    *(float *)(param_1 + 0x1c0) = fVar10;
    *(float *)(param_1 + 0x1c4) = fVar6;
    FUN_0091ada4(param_1 + 0x180);
  }
  uStack_70 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x180) + 0x28))(param_1 + 0x180,&uStack_70);
  FUN_00a74274(lVar1);
  FUN_00a74274(param_1 + 0xc90);
  lVar2 = param_1 + 0x290;
  fVar6 = (float)FUN_00f13e54(lVar1);
  fVar10 = (float)FUN_00f13e54(param_1 + 0xc90);
  fVar9 = 120.0;
  FUN_00f13e54(lVar1);
  fVar9 = fVar9 + -5.0;
  FUN_00f13f08(fVar6 + fVar10 + 120.0,lVar2);
  lVar1 = param_1 + 0x380;
  FUN_00f0e700(lVar2);
  fVar9 = fVar9 + -2.0;
  FUN_00f13f08(0x40000000,lVar1);
  lVar3 = param_1 + 0x470;
  uVar7 = FUN_00f0e700(lVar1);
  uStack_70 = CONCAT44(fVar9,uVar7);
  FUN_00f13f18(lVar3,&uStack_70);
  lVar4 = param_1 + 0x560;
  uVar8 = FUN_00f0e700(lVar2);
  FUN_00f13f08(uVar8,0x40000000,lVar4);
  if ((*(float *)(param_1 + 0x2d0) != 0.0) || (*(float *)(param_1 + 0x2d4) != 0.0)) {
    *(undefined8 *)(param_1 + 0x2d0) = 0;
    FUN_0091ada4(lVar2);
  }
  uStack_70 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x290) + 0x28))(lVar2,&uStack_70);
  fVar6 = (float)FUN_00f0e700(lVar2);
  if ((*(float *)(param_1 + 0x3c0) != fVar6 * -0.5) || (*(float *)(param_1 + 0x3c4) != 0.0)) {
    *(float *)(param_1 + 0x3c0) = fVar6 * -0.5;
    *(undefined4 *)(param_1 + 0x3c4) = 0;
    FUN_0091ada4(lVar1);
  }
  uStack_70 = 0x3f00000000000000;
  (**(code **)(*(long *)(param_1 + 0x380) + 0x28))(lVar1,&uStack_70);
  fVar6 = (float)FUN_00f0e700(lVar2);
  fVar10 = *(float *)(param_1 + 0x4b0);
  if ((fVar10 != fVar6 * 0.5) || (fVar10 = *(float *)(param_1 + 0x4b4), fVar10 != 0.0)) {
    *(float *)(param_1 + 0x4b0) = fVar6 * 0.5;
    *(undefined4 *)(param_1 + 0x4b4) = 0;
    FUN_0091ada4(lVar3);
  }
  uStack_70 = 0x3f0000003f800000;
  (**(code **)(*(long *)(param_1 + 0x470) + 0x28))(lVar3,&uStack_70);
  FUN_00f0e700(lVar2);
  fVar6 = fVar10 * 0.5;
  if ((*(float *)(param_1 + 0x5a0) != 0.0) ||
     (fVar10 = *(float *)(param_1 + 0x5a4), fVar10 != fVar6)) {
    *(undefined4 *)(param_1 + 0x5a0) = 0;
    *(float *)(param_1 + 0x5a4) = fVar6;
    FUN_0091ada4(lVar4);
  }
  uStack_70 = 0x3f8000003f000000;
  (**(code **)(*(long *)(param_1 + 0x560) + 0x28))(lVar4,&uStack_70);
  fVar6 = *(float *)(param_1 + 0x2d4);
  FUN_00f0eac0(lVar2);
  fVar6 = fVar6 + fVar10 * 0.5 + 10.0;
  if (*(float *)(param_1 + 0x1404) != fVar6) {
    *(float *)(param_1 + 0x1404) = fVar6;
    FUN_0091ada4(param_1 + 0x13c0);
  }
  if (*(long *)(lVar5 + 0x28) == lStack_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

