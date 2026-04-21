// functions/00a4d — 21 functions
#include "libGameKindred.h"




void FUN_00a4d054(long param_1,uint param_2,undefined8 param_3,uint param_4)

{
  FUN_00b89d24(param_1 + 0xb8,param_2 & 1,param_3,param_4 & 1);
  return;
}




void FUN_00a4d064(long param_1)

{
  FUN_00f0e700(param_1 + 0xa0);
  return;
}




void FUN_00a4d06c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0093d96c();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00a4d0b0(param_1,param_2);
  FUN_00a4ced8(param_1);
  return;
}




void FUN_00a4d0b0(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  void *pvVar4;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab64();
  if (((((uVar3 & 1) == 0) && (cVar2 = FUN_00d55870(param_2), cVar2 == *(char *)(param_1 + 0x248)))
      && ((*(byte *)(param_2 + 0x2f4) >> 1 & 1) != 0)) &&
     (*(uint *)(param_1 + 0x238) < (uint)*(byte *)(param_1 + 0x249))) {
    pvVar4 = operator_new(0xdc0);
    FUN_00a4d184(pvVar4,param_2);
    *(uint *)((long)pvVar4 + 0x84) = *(uint *)((long)pvVar4 + 0x84) | 4;
    local_50 = pvVar4;
    FUN_00a4de4c(param_1 + 0x238,&local_50);
    FUN_00f023ec(param_1 + 0x180,local_50,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a4d184(undefined1 param_1 [16],float param_2,long *param_3,long param_4)

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
  undefined4 *puVar11;
  long lVar12;
  bool bVar13;
  char cVar14;
  char cVar15;
  int iVar16;
  uint uVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  undefined4 local_bc;
  undefined8 local_b8;
  long *plStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  long local_88;
  
  lVar12 = tpidr_el0;
  local_88 = *(long *)(lVar12 + 0x28);
  FUN_00f017e8();
  *param_3 = (long)&PTR_FUN_027c1f80;
  FUN_00932160(param_3 + 0x11);
  plVar1 = param_3 + 0x14;
  *param_3 = (long)&PTR_FUN_027cabe0;
  param_3[0x11] = (long)&PTR_FUN_027cacf8;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_3 + 0x32;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_3 + 0x50;
  FUN_00f0e4a8();
  plVar4 = param_3 + 0x6e;
  FUN_00f0d160(plVar4);
  plVar5 = param_3 + 0x94;
  FUN_00f0e4a8();
  plVar6 = param_3 + 0xb2;
  FUN_00f0e4a8();
  plVar7 = param_3 + 0xd0;
  FUN_00f0e4a8(plVar7);
  plVar8 = param_3 + 0xee;
  FUN_00ca2b40(plVar8,1);
  plVar9 = param_3 + 0x176;
  FUN_00f0e4a8(plVar9);
  plVar10 = param_3 + 0x194;
  FUN_00f0e4a8(plVar10);
  *(undefined4 *)(param_3 + 0x1b2) = 0;
  FUN_00e70510(param_3 + 0x1b4);
  FUN_00e70510(param_3 + 0x1b6);
  param_3[0x1b3] = param_4;
  uVar18 = FUN_00cec840(*(undefined4 *)(param_4 + 0x260));
  FUN_00910394(param_3 + 0x1b6,uVar18);
  (**(code **)(*param_3 + 0x78))(param_3,plVar2,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar1,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar3,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar4,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar7,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar8,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar10,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar9,1);
  cVar14 = FUN_00d55870(param_4);
  cVar15 = FUN_00cedf10();
  bVar13 = cVar14 == cVar15;
  iVar16 = FUN_00cedce4();
  if ((iVar16 != -1) && (lVar19 = FUN_00d9e390(), lVar19 != 0)) {
    cVar14 = FUN_00d55870();
    cVar15 = FUN_00d55870(param_4);
    bVar13 = cVar14 == cVar15;
  }
  puVar11 = &DAT_031325dc;
  if (!bVar13) {
    puVar11 = &DAT_031325e0;
  }
  local_bc = *puVar11;
  FUN_00f0e540(plVar1,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  uVar18 = FUN_00d5bc38(param_4);
  FUN_00a1ffcc(plVar1,uVar18);
  if ((*(float *)(param_3 + 0x1e) != 0.5) || (*(float *)((long)param_3 + 0xf4) != 0.5)) {
    param_3[0x1e] = 0x3f0000003f000000;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0e548(plVar2,PTR_s_build___HUDPartsCommon_atlas_02be3440,"circle_button_fill");
  FUN_00f0e670(plVar2,&local_bc,2);
  FUN_00f0eac0(plVar1);
  fVar22 = param_2 + 10.0;
  FUN_00f0e700(plVar2);
  fVar22 = fVar22 / param_2;
  if ((*(float *)(param_3 + 0x3b) != fVar22) ||
     (param_2 = *(float *)((long)param_3 + 0x1dc), param_2 != fVar22)) {
    *(float *)(param_3 + 0x3b) = fVar22;
    *(float *)((long)param_3 + 0x1dc) = fVar22;
    FUN_0091ada4(plVar2);
  }
  uVar17 = *(uint *)((long)param_3 + 0x214);
  if ((uVar17 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_3 + 0x214) = uVar17 & 0xffff8000 | uVar17 & 0x7f | 0xc80;
    FUN_0091ada4(plVar2);
  }
  if ((*(float *)(param_3 + 0x3c) != 0.5) || (*(float *)((long)param_3 + 0x1e4) != 0.5)) {
    param_3[0x3c] = 0x3f0000003f000000;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0e548(plVar3,PTR_s_build___HUDPartsCommon_atlas_02be3440,"circle_button_fill");
  FUN_00f0e670(plVar3,&DAT_01bee7f6,2);
  FUN_00f0eac0(plVar1);
  fVar22 = param_2;
  FUN_00f0e700(plVar2);
  param_2 = param_2 / fVar22;
  if ((*(float *)(param_3 + 0x59) != param_2) || (*(float *)((long)param_3 + 0x2cc) != param_2)) {
    *(float *)(param_3 + 0x59) = param_2;
    *(float *)((long)param_3 + 0x2cc) = param_2;
    FUN_0091ada4(plVar3);
  }
  uVar17 = *(uint *)((long)param_3 + 0x304);
  if ((uVar17 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_3 + 0x304) = uVar17 & 0xffff8000 | uVar17 & 0x7f | 0x3300;
    FUN_0091ada4(plVar3);
    uVar17 = *(uint *)((long)param_3 + 0x304);
  }
  *(uint *)((long)param_3 + 0x304) = uVar17 & 0xfffffffb;
  if ((*(float *)(param_3 + 0x5a) != 0.5) || (*(float *)((long)param_3 + 0x2d4) != 0.5)) {
    param_3[0x5a] = 0x3f0000003f000000;
    FUN_0091ada4(plVar3);
  }
  uVar18 = FUN_00f0eac0(plVar1);
  fVar22 = (float)FUN_00f0eac0(plVar1);
  FUN_00f13f08(uVar18,fVar22 * 0.1,plVar8);
  FUN_00ca2d44(0,plVar8);
  local_b8 = (code *)CONCAT44(local_b8._4_4_,0xff94d70f);
  FUN_00f0e670(param_3 + 0x123,&local_b8,2);
  if (bVar13) {
    uVar17 = 4;
  }
  else {
    uVar17 = FUN_00ceab64();
    uVar17 = (uVar17 & 1) << 2;
  }
  fVar21 = 0.0;
  *(uint *)((long)param_3 + 0x7f4) = *(uint *)((long)param_3 + 0x7f4) & 0xfffffffb | uVar17;
  FUN_00f07940(0,plVar8,6,plVar1,6);
  FUN_00f0e548(plVar7,PTR_s_build___HUDPartsCommon_atlas_02be3440,"white_background");
  FUN_00f0e670(plVar7,&DAT_01bee7f6,2);
  *(uint *)((long)param_3 + 0x704) =
       *(uint *)((long)param_3 + 0x704) & 0xfffffff8 |
       *(uint *)((long)param_3 + 0x704) & 3 | (*(uint *)((long)param_3 + 0x7f4) >> 2 & 1) << 2;
  fVar22 = (float)FUN_00f13e54(plVar8);
  local_b8 = (code *)CONCAT44(fVar21 + 10.0,fVar22 + 10.0);
  FUN_00f13f18(plVar7,&local_b8);
  FUN_00f07940(0,0,plVar7,8,plVar8,8);
  if (bVar13) {
    uVar17 = 4;
  }
  else {
    uVar17 = FUN_00ceab64();
    uVar17 = (uVar17 & 1) << 2;
  }
  *(uint *)((long)param_3 + 0xc34) = *(uint *)((long)param_3 + 0xc34) & 0xfffffffb | uVar17;
  FUN_00f0e548(plVar9,PTR_s_build___HUDPartsCommon_atlas_02be3440,"plaque_ult_pip");
  fVar22 = DAT_03218ef8;
  if ((*(float *)(param_3 + 0x180) != DAT_03218ef8) ||
     (fVar22 = _DAT_03218efc, *(float *)((long)param_3 + 0xc04) != _DAT_03218efc)) {
    param_3[0x180] = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4(plVar9);
  }
  fVar21 = (float)FUN_00f0e700(plVar1);
  local_b8 = (code *)CONCAT44(fVar22 * 0.2,fVar21 * 0.2);
  FUN_00f13f18(plVar9,&local_b8);
  FUN_00f07940(0,0,plVar9,0,plVar1,0);
  *(uint *)((long)param_3 + 0xd24) =
       *(uint *)((long)param_3 + 0xd24) & 0xfffffff8 |
       *(uint *)((long)param_3 + 0xd24) & 3 | (*(uint *)((long)param_3 + 0xc34) >> 2 & 1) << 2;
  FUN_00f0e548(plVar10,PTR_s_build___HUDPartsCommon_atlas_02be3440,"plaque_ult_pip");
  FUN_00f0e670(plVar10,&DAT_01bee7f6,2);
  fVar22 = DAT_03218ef8;
  if ((*(float *)(param_3 + 0x19e) != DAT_03218ef8) ||
     (fVar22 = _DAT_03218efc, *(float *)((long)param_3 + 0xcf4) != _DAT_03218efc)) {
    param_3[0x19e] = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4(plVar10);
  }
  fVar21 = (float)FUN_00f0e700(plVar9);
  local_b8 = (code *)CONCAT44(fVar22 + 5.0,fVar21 + 5.0);
  FUN_00f13f18(plVar10,&local_b8);
  fVar22 = 0.0;
  FUN_00f07940(0,plVar10,8,plVar9,8);
  FUN_00f0d92c(plVar4,PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98,&DAT_01bee7fa);
  if ((*(float *)(param_3 + 0x78) != 0.5) || (*(float *)((long)param_3 + 0x3c4) != 0.5)) {
    param_3[0x78] = 0x3f0000003f000000;
    FUN_0091ada4(plVar4);
  }
  uVar20 = FUN_0093d96c();
  if ((uVar20 & 1) != 0) {
    (**(code **)(*param_3 + 0x78))(param_3,plVar5,1);
    (**(code **)(*param_3 + 0x78))(param_3,plVar6,1);
    local_90 = DAT_03210f58;
    *(uint *)((long)param_3 + 0x124) = *(uint *)((long)param_3 + 0x124) | 0x10;
    local_b8 = thunk_FUN_00a4dbfc;
    local_a0 = 0;
    uStack_98 = 0;
    local_a8 = 0;
    plStack_b0 = param_3;
    FUN_009693a0(param_3 + 0x15,&local_b8);
    local_b8 = thunk_FUN_00a4dbfc;
    local_90 = DAT_03210f84;
    local_a0 = 0;
    uStack_98 = 0;
    local_a8 = 0;
    plStack_b0 = param_3;
    FUN_009693a0(param_3 + 0x15,&local_b8);
    FUN_00f0eac0(plVar1);
    fVar21 = fVar22 + 14.0;
    FUN_00f0e700(plVar2);
    fVar21 = fVar21 / fVar22;
    if ((*(float *)(param_3 + 0x3b) != fVar21) ||
       (fVar22 = *(float *)((long)param_3 + 0x1dc), fVar22 != fVar21)) {
      *(float *)(param_3 + 0x3b) = fVar21;
      *(float *)((long)param_3 + 0x1dc) = fVar21;
      FUN_0091ada4(plVar2);
    }
    FUN_00f0d92c(plVar4,PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0,&DAT_01bee7fa);
    FUN_00f0e548(plVar5,PTR_s_build___HUDPartsCommon_atlas_02be3440,"speaker_icon");
    fVar21 = (float)FUN_00f0eac0(plVar2);
    fVar22 = fVar22 * 0.4;
    if ((*(float *)(param_3 + 0x9c) != fVar21 * 0.4) ||
       (*(float *)((long)param_3 + 0x4e4) != fVar22)) {
      *(float *)(param_3 + 0x9c) = fVar21 * 0.4;
      *(float *)((long)param_3 + 0x4e4) = fVar22;
      FUN_0091ada4(plVar5);
    }
    (**(code **)(param_3[0x94] + 0x28))(plVar5,&DAT_03218f08);
    *(uint *)((long)param_3 + 0x524) = *(uint *)((long)param_3 + 0x524) & 0xfffffffb;
    FUN_00f0e548(plVar6,PTR_s_build___HUDPartsCommon_atlas_02be3440,"voip_mute");
    fVar21 = (float)FUN_00f0eac0(plVar2);
    if ((*(float *)(param_3 + 0xba) != fVar21 * 0.4) ||
       (*(float *)((long)param_3 + 0x5d4) != fVar22 * 0.4)) {
      *(float *)(param_3 + 0xba) = fVar21 * 0.4;
      *(float *)((long)param_3 + 0x5d4) = fVar22 * 0.4;
      FUN_0091ada4(plVar6);
    }
    (**(code **)(param_3[0xb2] + 0x28))(plVar6,&DAT_03218f08);
    *(uint *)((long)param_3 + 0x614) = *(uint *)((long)param_3 + 0x614) & 0xfffffffb;
  }
  if (*(long *)(lVar12 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00a4dbfc(long param_1)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = FUN_0092e920();
  if (((uVar3 & 1) != 0) && (uVar3 = FUN_00931d34(), (uVar3 & 1) != 0)) {
    lVar4 = FUN_00931cb0(param_1 + 0xdb0);
    if ((lVar4 != 0) && (*(long *)(param_1 + 0xd98) != 0)) {
      cVar1 = FUN_00cedf10();
      cVar2 = FUN_00d55870(*(undefined8 *)(param_1 + 0xd98));
      if (cVar1 == cVar2) {
        FUN_00931ff8(param_1 + 0xdb0,*(char *)(lVar4 + 0x20) == '\0');
        *(uint *)(param_1 + 0x614) =
             *(uint *)(param_1 + 0x614) & 0xfffffffb | (uint)*(byte *)(lVar4 + 0x20) << 2;
      }
    }
  }
  return;
}




undefined8 FUN_00a4dad0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  
  if (*(long *)(param_1 + 0xd98) == 0) {
    uVar2 = 0;
  }
  else {
    for (lVar1 = *(long *)(*(long *)(param_1 + 0xd98) + 0x18); lVar1 != 0;
        lVar1 = *(long *)(lVar1 + 0x20)) {
      if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_02c7bf28) {
        fVar5 = (float)FUN_00d79b68();
        FUN_00e70e18(param_1 + 0xda0,&DAT_01bb6d43,(int)((float)(int)fVar5 + 0.99));
        FUN_00f0d75c(param_1 + 0x370,param_1 + 0xda0);
        uVar2 = 1;
        uVar3 = *(uint *)(param_1 + 0x3f4) | 4;
        uVar4 = *(uint *)(param_1 + 0x304) | 4;
        goto LAB_00a4db80;
      }
    }
    uVar2 = 0;
    uVar3 = *(uint *)(param_1 + 0x3f4) & 0xfffffffb;
    uVar4 = *(uint *)(param_1 + 0x304) & 0xfffffffb;
LAB_00a4db80:
    *(uint *)(param_1 + 0x3f4) = uVar3;
    *(uint *)(param_1 + 0x304) = uVar4;
  }
  return uVar2;
}




void FUN_00a4db94(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x214);
  uVar2 = 0xff;
  if ((param_2 & 1) == 0) {
    uVar2 = 0x66;
  }
  *(uint *)(param_1 + 0x524) =
       *(uint *)(param_1 + 0x524) & 0xfffffff8 | *(uint *)(param_1 + 0x524) & 3 | (param_2 & 1) << 2
  ;
  if ((uVar1 >> 7 & 0xff) == uVar2) {
    return;
  }
  *(uint *)(param_1 + 0x214) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar2 << 7;
  FUN_0091ada4(param_1 + 400);
  return;
}




undefined4 FUN_00a4dbdc(long param_1)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_01bc8f90;
  if (*(long *)(param_1 + 0xd98) != 0) {
    puVar1 = (undefined4 *)(*(long *)(param_1 + 0xd98) + 0x260);
  }
  return *puVar1;
}




void FUN_00a4dbfc(long param_1)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = FUN_0092e920();
  if (((uVar3 & 1) != 0) && (uVar3 = FUN_00931d34(), (uVar3 & 1) != 0)) {
    lVar4 = FUN_00931cb0(param_1 + 0xdb0);
    if ((lVar4 != 0) && (*(long *)(param_1 + 0xd98) != 0)) {
      cVar1 = FUN_00cedf10();
      cVar2 = FUN_00d55870(*(undefined8 *)(param_1 + 0xd98));
      if (cVar1 == cVar2) {
        FUN_00931ff8(param_1 + 0xdb0,*(char *)(lVar4 + 0x20) == '\0');
        *(uint *)(param_1 + 0x614) =
             *(uint *)(param_1 + 0x614) & 0xfffffffb | (uint)*(byte *)(lVar4 + 0x20) << 2;
      }
    }
  }
  return;
}




void FUN_00a4dc90(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e70b34(param_2,param_1 + 0xdb0);
  if ((uVar1 & 1) != 0) {
    FUN_00a4dcd0(param_1);
    return;
  }
  return;
}




void FUN_00a4dcd0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = FUN_0093d96c();
  if ((((uVar2 & 1) != 0) && (uVar2 = FUN_0092e920(), (uVar2 & 1) != 0)) &&
     (uVar2 = thunk_FUN_00ec5f5c(), (uVar2 & 1) != 0)) {
    uVar2 = FUN_0093201c(param_1 + 0xdb0);
    if ((uVar2 & 1) == 0) {
      uVar1 = FUN_00931fe4();
    }
    else {
      uVar1 = 1;
    }
    uVar2 = FUN_009320c8(param_1 + 0xdb0);
    *(uint *)(param_1 + 0x614) =
         *(uint *)(param_1 + 0x614) & 0xfffffff8 | *(uint *)(param_1 + 0x614) & 3 | (uVar1 & 1) << 2
    ;
    if (((uVar2 & 1) != 0) && ((uVar1 & 1) == 0)) {
      *(undefined4 *)(param_1 + 0xd90) = 0x3f000000;
    }
  }
  return;
}




void FUN_00a4dd54(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e70b34(param_2,param_1 + 0xd28);
  if ((uVar1 & 1) != 0) {
    FUN_00a4dcd0(param_1 + -0x88);
    return;
  }
  return;
}




void FUN_00a4dd94(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e70b34(param_2,param_1 + 0xdb0);
  if (((uVar1 & 1) == 0) &&
     ((*(long *)(param_1 + 0xd98) == 0 ||
      (uVar1 = FUN_00e70b34(param_2,param_1 + 0xdb0), (uVar1 & 1) == 0)))) {
    return;
  }
  FUN_00a4ddfc(param_1);
  return;
}




void FUN_00a4ddfc(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x214);
  *(uint *)(param_1 + 0x614) = *(uint *)(param_1 + 0x614) & 0xfffffffb;
  if ((uVar1 & 0x7f80) == 0x3300) {
    return;
  }
  *(uint *)(param_1 + 0x214) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x3300;
  FUN_0091ada4(param_1 + 400);
  return;
}




void FUN_00a4de38(long param_1)

{
  FUN_00a4dd94(param_1 + -0x88);
  return;
}




void thunk_FUN_00a4dcd0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = FUN_0093d96c();
  if ((((uVar2 & 1) != 0) && (uVar2 = FUN_0092e920(), (uVar2 & 1) != 0)) &&
     (uVar2 = thunk_FUN_00ec5f5c(), (uVar2 & 1) != 0)) {
    uVar2 = FUN_0093201c(param_1 + 0xdb0);
    if ((uVar2 & 1) == 0) {
      uVar1 = FUN_00931fe4();
    }
    else {
      uVar1 = 1;
    }
    uVar2 = FUN_009320c8(param_1 + 0xdb0);
    *(uint *)(param_1 + 0x614) =
         *(uint *)(param_1 + 0x614) & 0xfffffff8 | *(uint *)(param_1 + 0x614) & 3 | (uVar1 & 1) << 2
    ;
    if (((uVar2 & 1) != 0) && ((uVar1 & 1) == 0)) {
      *(undefined4 *)(param_1 + 0xd90) = 0x3f000000;
    }
  }
  return;
}




void FUN_00a4de44(long param_1)

{
  FUN_00a4dcd0(param_1 + -0x88);
  return;
}




void FUN_00a4de4c(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00a4e210(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00a4ded4(long param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  uVar3 = FUN_0093d96c();
  if (((uVar3 & 1) == 0) || (uVar3 = FUN_00ceab64(), (uVar3 & 1) != 0)) {
    return;
  }
  lVar4 = FUN_00d9e390(param_2);
  if (lVar4 != 0) {
    if (*(uint *)(param_1 + 0x238) != 0) {
      uVar3 = 0;
      bVar2 = false;
      do {
        lVar5 = *(long *)(*(long *)(param_1 + 0x240) + uVar3 * 8);
        if (lVar5 != 0) {
          lVar5 = *(long *)(lVar5 + 0xd98);
          piVar1 = &DAT_01bc8f90;
          if (lVar5 != 0) {
            piVar1 = (int *)(lVar5 + 0x260);
          }
          bVar2 = (bool)(bVar2 | *piVar1 == param_2);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0x238));
      if (bVar2) goto LAB_00a4df70;
    }
    FUN_00a4d0b0(param_1,lVar4);
  }
LAB_00a4df70:
  FUN_00a4ced8(param_1);
  return;
}




void FUN_00a4df80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cabe0;
  param_1[0x11] = &PTR_FUN_027cacf8;
  if ((void *)param_1[0x1b7] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1b7]);
    param_1[0x1b7] = 0;
    param_1[0x1b6] = 0;
  }
  if ((void *)param_1[0x1b5] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1b5]);
    param_1[0x1b5] = 0;
    param_1[0x1b4] = 0;
  }
  param_1[0x194] = &PTR_FUN_028266f0;
  param_1[0x1ab] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1ae);
  FUN_00f13d08(param_1 + 0x194);
  param_1[0x176] = &PTR_FUN_028266f0;
  param_1[0x18d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 400);
  FUN_00f13d08(param_1 + 0x176);
  param_1[0xee] = &PTR_FUN_02807d58;
  FUN_00f13d08(param_1 + 0x141);
  param_1[0x123] = &PTR_FUN_028266f0;
  param_1[0x13a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x13d);
  FUN_00f13d08(param_1 + 0x123);
  param_1[0x105] = &PTR_FUN_028266f0;
  param_1[0x11c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x11f);
  FUN_00f13d08(param_1 + 0x105);
  FUN_00f13d08(param_1 + 0xee);
  param_1[0xd0] = &PTR_FUN_028266f0;
  param_1[0xe7] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xea);
  FUN_00f13d08(param_1 + 0xd0);
  param_1[0xb2] = &PTR_FUN_028266f0;
  param_1[0xc9] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xcc);
  FUN_00f13d08(param_1 + 0xb2);
  param_1[0x94] = &PTR_FUN_028266f0;
  param_1[0xab] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xae);
  FUN_00f13d08(param_1 + 0x94);
  FUN_00f0d3a4(param_1 + 0x6e);
  param_1[0x50] = &PTR_FUN_028266f0;
  param_1[0x67] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6a);
  FUN_00f13d08(param_1 + 0x50);
  param_1[0x32] = &PTR_FUN_028266f0;
  param_1[0x49] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4c);
  FUN_00f13d08(param_1 + 0x32);
  param_1[0x14] = &PTR_FUN_028266f0;
  param_1[0x2b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2e);
  FUN_00f13d08(param_1 + 0x14);
  FUN_009321e0(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}

