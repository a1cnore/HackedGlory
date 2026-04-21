// functions/00a75 — 8 functions
#include "libGameKindred.h"




void FUN_00a75120(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00a751cc(param_1,param_2,param_5);
  return;
}




void FUN_00a75128(uint *param_1,undefined8 *param_2)

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
    FUN_00a75210(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00a751b4(void)

{
  return;
}




undefined4 FUN_00a751b8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x550);
}




void FUN_00a751c0(long param_1,uint param_2)

{
  FUN_00a78150(*(undefined8 *)(*(long *)(param_1 + 0x558) + (ulong)param_2 * 8));
  return;
}




void FUN_00a751cc(long param_1,undefined8 param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_009bbfb0();
  uVar1 = FUN_00a78150(*(undefined8 *)(*(long *)(param_1 + 0x558) + (param_3 & 0xffffffff) * 8));
  FUN_009bd8c4(uVar2,uVar1,0);
  return;
}




void FUN_00a75210(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a75290(long *param_1,long param_2,byte param_3)

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
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  byte *pbVar22;
  float *pfVar23;
  float *pfVar24;
  uint *puVar25;
  undefined4 *puVar26;
  long lVar27;
  char cVar28;
  long *plVar29;
  undefined8 uVar30;
  long lVar31;
  long *plVar32;
  int iVar33;
  uint uVar34;
  undefined4 uVar35;
  long *plVar36;
  float fVar37;
  float fVar38;
  ulong local_a0 [2];
  void *local_90;
  undefined4 local_84;
  long local_80;
  
  lVar27 = tpidr_el0;
  local_80 = *(long *)(lVar27 + 0x28);
  FUN_00f13ca4();
  plVar36 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027cda78;
  FUN_00f13ca4(plVar36);
  plVar29 = param_1 + 0x2e;
  FUN_00f13ca4(plVar29);
  FUN_00a3fdfc();
  plVar1 = param_1 + 0x6e;
  FUN_00a437dc();
  plVar2 = param_1 + 0x75a;
  FUN_00a37c70();
  plVar3 = param_1 + 0xd54;
  FUN_00a2d0fc();
  plVar4 = param_1 + 0x1e03;
  FUN_00a57518(plVar4,1,param_3 & 1);
  plVar5 = param_1 + 0x1f9d;
  FUN_00a45df0();
  plVar32 = param_1 + 0x209a;
  FUN_00f017e8(plVar32);
  plVar6 = param_1 + 0x20ab;
  *plVar32 = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8(plVar6);
  plVar7 = param_1 + 0x20c9;
  FUN_00f0e4a8(plVar7);
  plVar8 = param_1 + 0x20e7;
  FUN_00f0e4a8();
  plVar9 = param_1 + 0x2105;
  FUN_00f0e4a8();
  plVar10 = param_1 + 0x2123;
  FUN_00f0e4a8();
  plVar11 = param_1 + 0x2141;
  FUN_00f13ca4(plVar11);
  plVar12 = param_1 + 0x2158;
  FUN_00f0e4a8();
  plVar13 = param_1 + 0x2176;
  FUN_00f0e4a8();
  plVar14 = param_1 + 0x2194;
  FUN_00f0e4a8();
  plVar15 = param_1 + 0x21b2;
  FUN_00f0d160();
  plVar16 = param_1 + 0x21d8;
  FUN_00f13ca4(plVar16);
  plVar17 = param_1 + 0x21ef;
  FUN_00f0d160();
  plVar18 = param_1 + 0x2215;
  FUN_00f0d160();
  plVar19 = param_1 + 0x223b;
  FUN_00f0d160();
  FUN_00e70510(param_1 + 0x2261);
  plVar20 = param_1 + 0x2263;
  *plVar20 = 0;
  iVar33 = DAT_03214ce8;
  plVar21 = param_1 + 0x2264;
  pbVar22 = (byte *)(param_1 + 0x2265);
  *(int *)plVar21 = DAT_03214ce8;
  *pbVar22 = param_3 & 1;
  lVar31 = 0;
  if (param_2 != 0) {
    iVar33 = *(int *)(param_2 + 0x30);
    lVar31 = param_2 + 0x28;
  }
  *plVar20 = lVar31;
  *(int *)plVar21 = iVar33;
  (**(code **)(*param_1 + 0x78))(param_1,plVar32,1);
  FUN_00f023ec(plVar32,plVar6,1);
  FUN_00f023ec(plVar32,plVar7,1);
  FUN_00f023ec(plVar32,plVar8,1);
  FUN_00f023ec(plVar32,plVar9,1);
  FUN_00f023ec(plVar32,plVar10,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar36,1);
  FUN_00f023ec(plVar36,plVar11,1);
  FUN_00f023ec(plVar11,plVar13,1);
  FUN_00f023ec(plVar11,plVar12,1);
  FUN_00f023ec(plVar11,plVar14,1);
  FUN_00f023ec(plVar11,plVar15,1);
  FUN_00f023ec(plVar11,plVar5,1);
  FUN_00f023ec(plVar36,plVar4,1);
  FUN_00f023ec(plVar36,plVar2,1);
  FUN_00f023ec(plVar36,plVar16,1);
  FUN_00f023ec(plVar16,plVar29,1);
  FUN_00f023ec(plVar29,param_1 + 0x45,1);
  FUN_00f023ec(plVar29,plVar17,1);
  FUN_00f023ec(plVar16,plVar3,1);
  FUN_00f023ec(plVar16,plVar1,1);
  plVar32 = plVar18;
  if (*pbVar22 != 0) {
    FUN_00f023ec(plVar11,plVar18,1);
    plVar32 = plVar19;
  }
  FUN_00f023ec(plVar29,plVar32,1);
  local_a0[0] = 0x3f0000003f000000;
  (**(code **)(*param_1 + 0x28))(param_1,local_a0);
  uVar34 = *(uint *)((long)param_1 + 0x84) | 4;
  *(uint *)((long)param_1 + 0x84) = uVar34;
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) | 4;
  if ((*(float *)(param_1 + 0x21) != DAT_03218ef8) ||
     (*(float *)((long)param_1 + 0x10c) != _DAT_03218efc)) {
    param_1[0x21] = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4(plVar36);
    uVar34 = *(uint *)((long)param_1 + 0x84);
  }
  *(uint *)((long)param_1 + 0x84) = uVar34 | 0x10;
  if ((*(float *)(param_1 + 0x38) != 0.5) || (*(float *)((long)param_1 + 0x1c4) != 0.0)) {
    param_1[0x38] = 0x3f000000;
    FUN_0091ada4(plVar29);
  }
  *(uint *)((long)param_1 + 500) = *(uint *)((long)param_1 + 500) | 4;
  plVar29 = (long *)*plVar20;
  if (plVar29 == (long *)0x0) {
    uVar30 = 0;
  }
  else if ((int)*plVar21 == (int)plVar29[1]) {
    uVar30 = (**(code **)(*plVar29 + 0x10))();
  }
  else {
    *plVar20 = 0;
    uVar30 = 0;
    *(int *)plVar21 = DAT_03214ce8;
  }
  cVar28 = FUN_00d55870(uVar30);
  puVar26 = &DAT_0313323c;
  if (cVar28 != '\x01') {
    puVar26 = &DAT_03133240;
  }
  local_84 = *puVar26;
  FUN_00f0e548(plVar6,PTR_s_build___HUDPartsCommon_atlas_02be3440,"white_background");
  FUN_00f0e670(plVar6,&DAT_01bee7f6,2);
  uVar34 = *(uint *)((long)param_1 + 0x105dc);
  if ((uVar34 & 0x7f80) != 0x2c80) {
    *(uint *)((long)param_1 + 0x105dc) = uVar34 & 0xffff8000 | uVar34 & 0x7f | 0x2c80;
    FUN_0091ada4(plVar6);
  }
  FUN_00f0e548(plVar7,PTR_s_build___HUDPartsCommon_atlas_02be3440,"white_background");
  FUN_00f0e670(plVar7,&DAT_01bee7f6,2);
  uVar34 = *(uint *)((long)param_1 + 0x106cc);
  if ((uVar34 & 0x7f80) != 0x2c80) {
    *(uint *)((long)param_1 + 0x106cc) = uVar34 & 0xffff8000 | uVar34 & 0x7f | 0x2c80;
    FUN_0091ada4(plVar7);
  }
  FUN_00f0e548(plVar8,PTR_s_build___HUDPartsCommon_atlas_02be3440,"white_background");
  uVar34 = *(uint *)((long)param_1 + 0x107bc);
  if ((uVar34 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x107bc) = uVar34 & 0xffff8000 | uVar34 & 0x7f | 0x1980;
    FUN_0091ada4(plVar8);
  }
  FUN_00f0e548(plVar9,PTR_s_build___HUDPartsCommon_atlas_02be3440,"white_background");
  uVar34 = *(uint *)((long)param_1 + 0x108ac);
  if ((uVar34 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x108ac) = uVar34 & 0xffff8000 | uVar34 & 0x7f | 0x1980;
    FUN_0091ada4(plVar9);
  }
  FUN_00f0e548(plVar10,PTR_s_build___HUDPartsCommon_atlas_02be3440,"white_background");
  uVar34 = *(uint *)((long)param_1 + 0x1099c);
  if ((uVar34 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x1099c) = uVar34 & 0xffff8000 | uVar34 & 0x7f | 0x1980;
    FUN_0091ada4(plVar10);
  }
  pfVar23 = (float *)(param_1 + 0x214b);
  pfVar24 = (float *)((long)param_1 + 0x10a5c);
  if ((*pfVar23 != 0.5) || (*pfVar24 != 0.5)) {
    param_1[0x214b] = 0x3f0000003f000000;
    FUN_0091ada4(plVar11);
  }
  FUN_00f0e540(plVar12,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  uVar30 = FUN_00d5bc38(param_2);
  FUN_00a1ffcc(plVar12,uVar30);
  if ((*(float *)(param_1 + 0x2162) != *pfVar23) ||
     (*(float *)((long)param_1 + 0x10b14) != *pfVar24)) {
    *(float *)(param_1 + 0x2162) = *pfVar23;
    *(float *)((long)param_1 + 0x10b14) = *pfVar24;
    FUN_0091ada4(plVar12);
  }
  FUN_00f0e548(plVar13,PTR_s_build___HUDPartsCommon_atlas_02be3440,"circle_button_fill");
  FUN_00f0e670(plVar13,&local_84,2);
  uVar34 = *(uint *)((long)param_1 + 0x10c34);
  if ((uVar34 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x10c34) = uVar34 & 0xffff8000 | uVar34 & 0x7f | 0x6600;
    FUN_0091ada4(plVar13);
  }
  if ((*(float *)(param_1 + 0x2180) != *pfVar23) ||
     (*(float *)((long)param_1 + 0x10c04) != *pfVar24)) {
    *(float *)(param_1 + 0x2180) = *pfVar23;
    *(float *)((long)param_1 + 0x10c04) = *pfVar24;
    FUN_0091ada4(plVar13);
  }
  FUN_00f0e548(plVar14,PTR_s_build___HUDPartsCommon_atlas_02be3440,"circle_button_fill");
  FUN_00f0e670(plVar14,&DAT_01bee7f6,2);
  puVar25 = (uint *)((long)param_1 + 0x10d24);
  uVar34 = *puVar25;
  if ((uVar34 & 0x7f80) != 0x5900) {
    *puVar25 = uVar34 & 0xffff8000 | uVar34 & 0x7f | 0x5900;
    FUN_0091ada4(plVar14);
    uVar34 = *puVar25;
  }
  *puVar25 = uVar34 & 0xfffffffb;
  if ((*(float *)(param_1 + 0x219e) != *pfVar23) ||
     (*(float *)((long)param_1 + 0x10cf4) != *pfVar24)) {
    *(float *)(param_1 + 0x219e) = *pfVar23;
    *(float *)((long)param_1 + 0x10cf4) = *pfVar24;
    FUN_0091ada4(plVar14);
  }
  FUN_00f0d92c(plVar15,PTR_s_build___Fonts_NorthwoodHigh_Regu_02be9cd0,&DAT_01bee7fa);
  fVar37 = *pfVar23;
  fVar38 = *pfVar24;
  if ((*(float *)(param_1 + 0x21bc) != fVar37) || (*(float *)((long)param_1 + 0x10de4) != fVar38)) {
    *(float *)(param_1 + 0x21bc) = fVar37;
    *(float *)((long)param_1 + 0x10de4) = fVar38;
    FUN_0091ada4(plVar15);
    fVar37 = *pfVar23;
    fVar38 = *pfVar24;
  }
  if ((*(float *)(param_1 + 0x1fa7) != fVar37) || (*(float *)((long)param_1 + 0xfd3c) != fVar38)) {
    *(float *)(param_1 + 0x1fa7) = fVar37;
    *(float *)((long)param_1 + 0xfd3c) = fVar38;
    FUN_0091ada4(plVar5);
  }
  FUN_008fa54c(local_a0,PTR_s_build___Fonts_Futura_Medium_30_S_02be9d08);
  FUN_00a47954(plVar5,local_a0);
  if ((local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  *(uint *)((long)param_1 + 0xfd6c) = *(uint *)((long)param_1 + 0xfd6c) & 0xfffffffb;
  FUN_00a76150(param_1);
  plVar29 = (long *)*plVar20;
  if (plVar29 == (long *)0x0) {
    uVar30 = 0;
  }
  else if ((int)*plVar21 == (int)plVar29[1]) {
    uVar30 = (**(code **)(*plVar29 + 0x10))();
  }
  else {
    *plVar20 = 0;
    uVar30 = 0;
    *(int *)plVar21 = DAT_03214ce8;
  }
  FUN_00a57b14(plVar4,uVar30,1);
  if ((*(float *)(param_1 + 0x1e0d) != 0.5) || (*(float *)((long)param_1 + 0xf06c) != 0.5)) {
    param_1[0x1e0d] = 0x3f0000003f000000;
    FUN_0091ada4(plVar4);
  }
  FUN_00a57b00(plVar4,1);
  if (*pbVar22 == 0) {
    FUN_00f0d92c(plVar17,PTR_s_build___Fonts_Brandon_Bold_30_fo_02be9c70,&local_84);
    FUN_00f0da58(plVar17,1);
  }
  else {
    FUN_00f0d92c(plVar17,PTR_s_build___Fonts_Brandon_Bold_24_fo_02be9c68,&local_84);
    FUN_00f0da30(plVar17,1);
    local_a0[0] = 0x4000000040000000;
    FUN_00f0da8c(plVar17,local_a0);
    FUN_00f0da80(plVar17,&DAT_01bee7f6);
  }
  lVar31 = (**(code **)(*(long *)*plVar20 + 0x10))();
  uVar30 = FUN_00cec840(*(undefined4 *)(lVar31 + 0x260));
  FUN_00f0d75c(plVar17,uVar30);
  FUN_00a3ff9c(0,param_1 + 0x45,param_2,0,1,*pbVar22);
  FUN_00f0d92c(plVar19,PTR_s_build___Fonts_Brandon_Bold_24_fo_02be9c68,&DAT_01bee7fa);
  FUN_00f0da30(plVar19,1);
  FUN_00f0da80(plVar19,&DAT_01bee7f6);
  local_a0[0] = 0x4000000040000000;
  FUN_00f0da8c(plVar19,local_a0);
  if ((*(float *)(param_1 + 0x2245) != 0.5) || (*(float *)((long)param_1 + 0x1122c) != 0.5)) {
    param_1[0x2245] = 0x3f0000003f000000;
    FUN_0091ada4(plVar19);
  }
  pfVar23 = (float *)(param_1 + 0x2244);
  if ((*pfVar23 != 0.8) || (*(float *)((long)param_1 + 0x11224) != 0.8)) {
    pfVar23[0] = 0.8;
    pfVar23[1] = 0.8;
    FUN_0091ada4(plVar19);
  }
  if ((*(float *)(param_1 + 0x221f) != 0.5) || (*(float *)((long)param_1 + 0x110fc) != 0.5)) {
    param_1[0x221f] = 0x3f0000003f000000;
    FUN_0091ada4(plVar18);
  }
  if (*pbVar22 == 0) {
    FUN_00f0dac8(plVar18,3);
    FUN_00f0d92c(plVar18,PTR_s_build___Fonts_Brandon_Bold_24_fo_02be9c68,&local_84);
  }
  else {
    FUN_00f0d92c(plVar18,PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78,&local_84);
    FUN_00f0da30(plVar18,1);
    local_a0[0] = 0x4000000040000000;
    FUN_00f0da8c(plVar18,local_a0);
    FUN_00f0da80(plVar18,&DAT_01bee7f6);
  }
  plVar29 = (long *)*plVar20;
  if (plVar29 == (long *)0x0) {
    uVar30 = 0;
  }
  else if ((int)*plVar21 == (int)plVar29[1]) {
    uVar30 = (**(code **)(*plVar29 + 0x10))();
  }
  else {
    *plVar20 = 0;
    uVar30 = 0;
    *(int *)plVar21 = DAT_03214ce8;
  }
  FUN_00a2dcd4(plVar3,uVar30,1,*pbVar22);
  FUN_00a2e764(plVar3,1);
  uVar35 = 2;
  if (*pbVar22 != 0) {
    uVar35 = 3;
  }
  FUN_00a44298(plVar1,uVar35);
  plVar29 = (long *)*plVar20;
  if (plVar29 == (long *)0x0) {
    uVar30 = 0;
  }
  else if ((int)*plVar21 == (int)plVar29[1]) {
    uVar30 = (**(code **)(*plVar29 + 0x10))();
  }
  else {
    *plVar20 = 0;
    uVar30 = 0;
    *(int *)plVar21 = DAT_03214ce8;
  }
  FUN_00a43bcc(plVar1,uVar30);
  FUN_00a459a0(0x3f000000,plVar1,1,4,1);
  plVar29 = (long *)*plVar20;
  if (plVar29 == (long *)0x0) {
    uVar30 = 0;
  }
  else if ((int)*plVar21 == (int)plVar29[1]) {
    uVar30 = (**(code **)(*plVar29 + 0x10))();
  }
  else {
    *plVar20 = 0;
    uVar30 = 0;
    *(int *)plVar21 = DAT_03214ce8;
  }
  FUN_00a37e68(plVar2,uVar30,1,*pbVar22);
  FUN_00a38d54(plVar2,1);
  FUN_00a38d68(0x3f000000,plVar2,1,4,1);
  FUN_00a762c0(param_1);
  uVar30 = FUN_00d7e3d0();
  FUN_00e6ea58(uVar30,param_1,0xe4cbad13,FUN_00a762d8,0);
  if (*(long *)(lVar27 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

