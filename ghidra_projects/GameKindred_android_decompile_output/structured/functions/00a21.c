// functions/00a21 — 5 functions
#include "libGameKindred.h"




void FUN_00a21c68(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,undefined8 param_8,long param_9,long param_10,
                 long *param_11,undefined8 param_12)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar2 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 10));
  param_7 = *(float *)(param_9 + 0x14) * param_7;
  param_6 = *(float *)(param_9 + 0x10) * param_6;
  fVar7 = param_7 * fVar2;
  fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 6));
  fVar1 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 8));
  param_1 = param_1 - fVar1 * param_4 * param_6;
  fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 4));
  fVar5 = (param_2 - fVar2 * param_5 * param_7) + (1.0 - param_3) * fVar7;
  fVar6 = 1.0 / (float)(*(uint *)(*(long *)(*param_11 + 8) + 0x3c) & 0x3fff);
  FUN_00965b68(param_1,fVar5,SUB42(param_6 * fVar1 + param_1,0),fVar7 * param_3 + fVar5,0,
               fVar6 * fVar4,1.0 - ((1.0 - param_3) * fVar2 + fVar3) * fVar6,
               SUB42((fVar1 + fVar4) * fVar6,0),param_8,param_12,0);
  return;
}




void FUN_00a21d40(undefined4 param_1)

{
  DAT_031312c8 = param_1;
  return;
}




undefined4 FUN_00a21d4c(void)

{
  return DAT_031312c8;
}




bool FUN_00a21d58(long *param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  uVar3 = thunk_FUN_0092e85c();
  bVar1 = false;
  if (((uVar3 & 1) == 0) && (plVar4 = (long *)*param_1, bVar1 = false, plVar4 != (long *)0x0)) {
    if ((int)param_1[1] == (int)plVar4[1]) {
      lVar5 = (**(code **)(*plVar4 + 0x10))();
      bVar1 = false;
      if ((lVar5 != 0) && (lVar5 = FUN_00d9eb38(), bVar1 = false, lVar5 != 0)) {
        uVar3 = FUN_0093d828();
        bVar1 = false;
        if ((uVar3 & 1) != 0) {
          iVar2 = FUN_00d53ba4(lVar5,param_2);
          bVar1 = iVar2 == 4;
        }
      }
    }
    else {
      *param_1 = 0;
      bVar1 = false;
      *(undefined4 *)(param_1 + 1) = DAT_03214ce8;
    }
  }
  return bVar1;
}




void FUN_00a21dfc(long *param_1)

{
  uint uVar1;
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
  uint uVar15;
  ushort uVar16;
  long lVar17;
  undefined8 uVar18;
  uint uVar19;
  long *plVar20;
  ushort *puVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long lVar25;
  float fVar26;
  float fVar27;
  code *local_b0;
  long *plStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  long local_80;
  
  lVar17 = tpidr_el0;
  local_80 = *(long *)(lVar17 + 0x28);
  FUN_00f13ca4();
  *param_1 = (long)&PTR_FUN_027c88b0;
  puVar21 = (ushort *)(param_1 + 0x17);
  plVar20 = param_1 + 0x37;
  *puVar21 = *puVar21 & 0x8000 | 0x3ff;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x34] = (long)param_1;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = DAT_03214ce8;
  FUN_00f13ca4(plVar20);
  FUN_00f0e4a8();
  plVar22 = param_1 + 0x6c;
  FUN_00f0eda4();
  FUN_00f0e4a8();
  FUN_00f0e4a8();
  FUN_00f0e4a8();
  plVar23 = param_1 + 0xe6;
  FUN_00f0eda4();
  plVar24 = param_1 + 0x106;
  FUN_00f0d25c(plVar24,DAT_031312a0);
  plVar2 = param_1 + 300;
  FUN_00f0e4a8();
  plVar3 = param_1 + 0x14a;
  FUN_00f0d25c(plVar3,DAT_031312a8);
  plVar4 = param_1 + 0x170;
  FUN_00f0d25c(plVar4,PTR_s_build___Fonts_Avenir_Medium_24_f_02be9cf0);
  plVar5 = param_1 + 0x196;
  FUN_00f0e4a8();
  plVar6 = param_1 + 0x1b4;
  FUN_00f0eda4();
  plVar7 = param_1 + 0x1d5;
  param_1[0x1d4] = 0;
  FUN_00f13ca4();
  FUN_00f0e4a8();
  plVar8 = param_1 + 0x20a;
  FUN_00f13ca4(plVar8);
  lVar25 = 0;
  do {
    FUN_00f0e4a8((long)param_1 + lVar25 + 0x1108);
    lVar25 = lVar25 + 0xf0;
  } while (lVar25 != 0x4b0);
  plVar9 = param_1 + 0x2b7;
  FUN_00f0e4a8(plVar9);
  plVar10 = param_1 + 0x2d5;
  FUN_00f11234(plVar10);
  plVar11 = param_1 + 0x309;
  FUN_00f13ca4(plVar11);
  plVar12 = param_1 + 800;
  FUN_00f0e4a8(plVar12);
  plVar13 = param_1 + 0x33e;
  FUN_00f0e4a8(plVar13);
  plVar14 = param_1 + 0x35c;
  FUN_00afbfb0();
  FUN_00e70314(param_1 + 0x398);
  FUN_00e70314(param_1 + 0x39a);
  lVar25 = NEON_fmov(0x3f800000,4);
  param_1[0x39c] = lVar25;
  *(undefined4 *)((long)param_1 + 0x1cec) = 3;
  *(undefined4 *)(param_1 + 0x39d) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x1cf2) = 0;
  *(undefined2 *)(param_1 + 0x39e) = 0xff;
  (**(code **)(*param_1 + 0x78))(param_1,plVar20,1);
  FUN_00f023ec(plVar20,param_1 + 0x4e,1);
  FUN_00f023ec(plVar20,plVar9,1);
  FUN_00f023ec(plVar20,plVar22,1);
  FUN_00f023ec(plVar20,param_1 + 0x8c,1);
  FUN_00f023ec(plVar20,param_1 + 0xaa,1);
  FUN_00f023ec(plVar20,param_1 + 200,1);
  FUN_00f023ec(plVar20,plVar23,1);
  FUN_00f023ec(plVar20,plVar2,1);
  FUN_00f023ec(plVar20,plVar3,1);
  FUN_00f023ec(plVar20,plVar24,1);
  FUN_00f023ec(plVar20,plVar4,1);
  FUN_00f023ec(plVar20,plVar6,1);
  FUN_00f023ec(plVar20,plVar5,1);
  FUN_00f023ec(plVar20,plVar10,1);
  FUN_00f023ec(plVar10,plVar11,1);
  FUN_00f023ec(plVar11,plVar12,1);
  FUN_00f023ec(plVar11,plVar13,1);
  FUN_00f023ec(plVar20,plVar7,1);
  FUN_00f023ec(plVar7,param_1 + 0x1ec,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  lVar25 = 0;
  do {
    FUN_00f023ec(plVar8,(long)param_1 + lVar25 + 0x1108,1);
    lVar25 = lVar25 + 0xf0;
  } while (lVar25 != 0x4b0);
  (**(code **)(*param_1 + 0x78))(param_1,plVar14,1);
  fVar27 = 0.5;
  if ((*(float *)(param_1 + 0x41) != 0.5) ||
     (fVar26 = fVar27, *(float *)((long)param_1 + 0x20c) != 0.5)) {
    param_1[0x41] = 0x3f0000003f000000;
    FUN_0091ada4(plVar20);
    fVar27 = *(float *)(param_1 + 0x41);
    fVar26 = *(float *)((long)param_1 + 0x20c);
  }
  if ((*(float *)(param_1 + 0x76) != fVar27) || (*(float *)((long)param_1 + 0x3b4) != fVar26)) {
    *(float *)(param_1 + 0x76) = fVar27;
    *(float *)((long)param_1 + 0x3b4) = fVar26;
    FUN_0091ada4(plVar22);
    fVar27 = *(float *)(param_1 + 0x41);
    fVar26 = *(float *)((long)param_1 + 0x20c);
  }
  if ((*(float *)(param_1 + 0x96) != fVar27) || (*(float *)((long)param_1 + 0x4b4) != fVar26)) {
    *(float *)(param_1 + 0x96) = fVar27;
    *(float *)((long)param_1 + 0x4b4) = fVar26;
    FUN_0091ada4(param_1 + 0x8c);
    fVar27 = *(float *)(param_1 + 0x41);
    fVar26 = *(float *)((long)param_1 + 0x20c);
  }
  if ((*(float *)(param_1 + 0xb4) != fVar27) || (*(float *)((long)param_1 + 0x5a4) != fVar26)) {
    *(float *)(param_1 + 0xb4) = fVar27;
    *(float *)((long)param_1 + 0x5a4) = fVar26;
    FUN_0091ada4(param_1 + 0xaa);
    fVar27 = *(float *)(param_1 + 0x41);
    fVar26 = *(float *)((long)param_1 + 0x20c);
  }
  if ((*(float *)(param_1 + 0xd2) != fVar27) || (*(float *)((long)param_1 + 0x694) != fVar26)) {
    *(float *)(param_1 + 0xd2) = fVar27;
    *(float *)((long)param_1 + 0x694) = fVar26;
    FUN_0091ada4(param_1 + 200);
    fVar27 = *(float *)(param_1 + 0x41);
    fVar26 = *(float *)((long)param_1 + 0x20c);
  }
  if ((*(float *)(param_1 + 0xf0) != fVar27) || (*(float *)((long)param_1 + 0x784) != fVar26)) {
    *(float *)(param_1 + 0xf0) = fVar27;
    *(float *)((long)param_1 + 0x784) = fVar26;
    FUN_0091ada4(plVar23);
    fVar27 = *(float *)(param_1 + 0x41);
    fVar26 = *(float *)((long)param_1 + 0x20c);
  }
  if ((*(float *)(param_1 + 0x110) != fVar27) || (*(float *)((long)param_1 + 0x884) != fVar26)) {
    *(float *)(param_1 + 0x110) = fVar27;
    *(float *)((long)param_1 + 0x884) = fVar26;
    FUN_0091ada4(plVar24);
    fVar27 = *(float *)(param_1 + 0x41);
    fVar26 = *(float *)((long)param_1 + 0x20c);
  }
  if ((*(float *)(param_1 + 0x17a) != fVar27) || (*(float *)((long)param_1 + 0xbd4) != fVar26)) {
    *(float *)(param_1 + 0x17a) = fVar27;
    *(float *)((long)param_1 + 0xbd4) = fVar26;
    FUN_0091ada4(plVar4);
    fVar27 = *(float *)(param_1 + 0x41);
    fVar26 = *(float *)((long)param_1 + 0x20c);
  }
  if ((*(float *)(param_1 + 0x1be) != fVar27) || (*(float *)((long)param_1 + 0xdf4) != fVar26)) {
    *(float *)(param_1 + 0x1be) = fVar27;
    *(float *)((long)param_1 + 0xdf4) = fVar26;
    FUN_0091ada4(plVar6);
    fVar27 = *(float *)(param_1 + 0x41);
    fVar26 = *(float *)((long)param_1 + 0x20c);
  }
  if ((*(float *)(param_1 + 0x1a0) != fVar27) || (*(float *)((long)param_1 + 0xd04) != fVar26)) {
    *(float *)(param_1 + 0x1a0) = fVar27;
    *(float *)((long)param_1 + 0xd04) = fVar26;
    FUN_0091ada4(plVar5);
    fVar27 = *(float *)(param_1 + 0x41);
    fVar26 = *(float *)((long)param_1 + 0x20c);
  }
  if ((*(float *)(param_1 + 0x1df) != fVar27) || (*(float *)((long)param_1 + 0xefc) != fVar26)) {
    *(float *)(param_1 + 0x1df) = fVar27;
    *(float *)((long)param_1 + 0xefc) = fVar26;
    FUN_0091ada4(plVar7);
    fVar27 = *(float *)(param_1 + 0x41);
    fVar26 = *(float *)((long)param_1 + 0x20c);
  }
  if ((*(float *)(param_1 + 0x2df) != fVar27) || (*(float *)((long)param_1 + 0x16fc) != fVar26)) {
    *(float *)(param_1 + 0x2df) = fVar27;
    *(float *)((long)param_1 + 0x16fc) = fVar26;
    FUN_0091ada4(plVar10);
    fVar27 = *(float *)(param_1 + 0x41);
    fVar26 = *(float *)((long)param_1 + 0x20c);
  }
  if ((*(float *)(param_1 + 0x313) != fVar27) || (*(float *)((long)param_1 + 0x189c) != fVar26)) {
    *(float *)(param_1 + 0x313) = fVar27;
    *(float *)((long)param_1 + 0x189c) = fVar26;
    FUN_0091ada4(plVar11);
  }
  if ((*(float *)(param_1 + 0x32a) != 0.5) || (*(float *)((long)param_1 + 0x1954) != 1.0)) {
    param_1[0x32a] = 0x3f8000003f000000;
    FUN_0091ada4(plVar12);
  }
  if ((*(float *)(param_1 + 0x348) != 0.5) || (*(float *)((long)param_1 + 0x1a44) != 0.0)) {
    param_1[0x348] = 0x3f000000;
    FUN_0091ada4(plVar13);
  }
  *(uint *)((long)param_1 + 0xf2c) = *(uint *)((long)param_1 + 0xf2c) | 4;
  if ((*(uint *)((long)param_1 + 0xfe4) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0xfe4) = *(uint *)((long)param_1 + 0xfe4) & 0xffff807f;
    FUN_0091ada4(param_1 + 0x1ec);
  }
  *(uint *)((long)param_1 + 0x172c) = *(uint *)((long)param_1 + 0x172c) | 4;
  FUN_00f112f0(plVar10,1);
  FUN_00f0e548(plVar12,PTR_s_build___HUDPartsCommon_atlas_02be3440,"vert_glass_shadow");
  *(byte *)(param_1 + 0x33b) = *(byte *)(param_1 + 0x33b) | 2;
  uVar19 = *(uint *)((long)param_1 + 0x1984);
  if ((uVar19 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x1984) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x5900;
    FUN_0091ada4(plVar12);
    uVar19 = *(uint *)((long)param_1 + 0x1984);
  }
  *(uint *)((long)param_1 + 0x1984) = uVar19 | 4;
  FUN_00f0e548(plVar13,PTR_s_build___HUDPartsCommon_atlas_02be3440,"vert_glass_shadow");
  *(byte *)(param_1 + 0x359) = *(byte *)(param_1 + 0x359) & 0xfd;
  uVar19 = *(uint *)((long)param_1 + 0x1a74);
  if ((uVar19 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x1a74) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x5900;
    FUN_0091ada4(plVar13);
    uVar19 = *(uint *)((long)param_1 + 0x1a74);
  }
  *(uint *)((long)param_1 + 0x1a74) = uVar19 | 4;
  *(uint *)((long)param_1 + 0x18cc) = *(uint *)((long)param_1 + 0x18cc) & 0xfffffffb;
  FUN_00f0eea0(plVar22,FUN_00a22cc8,param_1);
  FUN_00f0eea0(plVar23,FUN_00a22d74,param_1);
  FUN_00f0dac8(plVar24,0);
  FUN_00f0d7fc(plVar24,&DAT_01b9f234);
  FUN_00f0da80(plVar24,&DAT_03131298);
  FUN_00f0da30(plVar24,1);
  FUN_00f0e548(plVar2,PTR_s_build___HUDPartsCommon_atlas_02be3440,"generic_corner");
  if ((*(float *)(param_1 + 0x136) != 1.0) || (*(float *)((long)param_1 + 0x9b4) != 0.0)) {
    param_1[0x136] = 0x3f800000;
    FUN_0091ada4(plVar2);
  }
  uVar19 = *(uint *)((long)param_1 + 0x9e4);
  if ((uVar19 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0x9e4) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x5280;
    FUN_0091ada4(plVar2);
  }
  if ((*(float *)(param_1 + 0x135) != 1.8) || (*(float *)((long)param_1 + 0x9ac) != 1.8)) {
    param_1[0x135] = 0x3fe666663fe66666;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0e670(plVar2,&DAT_01bee7f6,2);
  *(uint *)((long)param_1 + 0x9e4) = *(uint *)((long)param_1 + 0x9e4) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x154) != 1.0) || (*(float *)((long)param_1 + 0xaa4) != 0.0)) {
    param_1[0x154] = 0x3f800000;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0d7fc(plVar3,&DAT_01b9f234);
  *(uint *)((long)param_1 + 0xad4) = *(uint *)((long)param_1 + 0xad4) & 0xfffffffb;
  FUN_00f0dac8(plVar4,0);
  FUN_00f0d7fc(plVar4,&DAT_01b9f234);
  FUN_00f0da80(plVar4,&DAT_03131298);
  FUN_00f0da30(plVar4,1);
  uVar19 = *(uint *)((long)param_1 + 0xc04);
  if ((uVar19 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0xc04) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x5f80;
    FUN_0091ada4(plVar4);
  }
  FUN_00f0e540(plVar5,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  uVar19 = *(uint *)((long)param_1 + 0xd34);
  if ((uVar19 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0xd34) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x5f80;
    FUN_0091ada4(plVar5);
    uVar19 = *(uint *)((long)param_1 + 0xd34);
  }
  *(uint *)((long)param_1 + 0xd34) = uVar19 & 0xfffffffb;
  FUN_00f0e540(plVar6,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  FUN_00f0e578(plVar6,"ability_energy_ring");
  uVar19 = *(uint *)((long)param_1 + 0xe24);
  if ((uVar19 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0xe24) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x5f80;
    FUN_0091ada4(plVar6);
    uVar19 = *(uint *)((long)param_1 + 0xe24);
  }
  *(uint *)((long)param_1 + 0xe24) = uVar19 & 0xfffffffb;
  FUN_00f0eea0(plVar6,FUN_00a22e20,param_1);
  *(uint *)((long)param_1 + 0x10d4) = *(uint *)((long)param_1 + 0x10d4) | 4;
  FUN_00f0e548(plVar9,PTR_s_build___HUDPartsCommon_atlas_02be3440,"generic_gradient_vertical");
  FUN_00f0e670(plVar9,&DAT_01bee7f6,2);
  *(byte *)(param_1 + 0x2d2) = *(byte *)(param_1 + 0x2d2) | 2;
  uVar19 = *(uint *)((long)param_1 + 0x163c);
  if ((uVar19 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x163c) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x7280;
    FUN_0091ada4(plVar9);
    uVar19 = *(uint *)((long)param_1 + 0x163c);
  }
  *(uint *)((long)param_1 + 0x163c) = uVar19 | 4;
  *(uint *)((long)param_1 + 0x5d4) = *(uint *)((long)param_1 + 0x5d4) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x6c4) = *(uint *)((long)param_1 + 0x6c4) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x366) != 0.5) || (*(float *)((long)param_1 + 0x1b34) != 0.5)) {
    param_1[0x366] = 0x3f0000003f000000;
    FUN_0091ada4(plVar14);
  }
  uVar18 = FUN_00d6eb50();
  uVar18 = FUN_00d6eb5c(uVar18,"*KindredHUDEffects*");
  FUN_00966a10();
  FUN_00afc274(plVar14,uVar18);
  plVar20 = param_1 + 1;
  local_88 = DAT_03210f84;
  local_b0 = FUN_00a22ed0;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  FUN_009693a0(plVar20,&local_b0);
  local_b0 = FUN_00a22ed0;
  local_88 = DAT_03210f58;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  FUN_009693a0(plVar20,&local_b0);
  local_88 = DAT_03210f94;
  local_b0 = thunk_FUN_00a26590;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  FUN_009693a0(plVar20,&local_b0);
  local_88 = DAT_03210f8c;
  local_b0 = thunk_FUN_00a26468;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  FUN_009693a0(plVar20,&local_b0);
  local_b0 = thunk_FUN_00a26468;
  local_88 = DAT_03210f60;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  FUN_009693a0(plVar20,&local_b0);
  local_88 = DAT_03210f98;
  local_b0 = FUN_00a22ee0;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  FUN_009693a0(plVar20,&local_b0);
  local_88 = DAT_03210fa4;
  local_b0 = FUN_00a22f04;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  FUN_009693a0(plVar20,&local_b0);
  local_88 = DAT_03210fa0;
  local_b0 = FUN_00a22f0c;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  FUN_009693a0(plVar20,&local_b0);
  uVar16 = *(ushort *)(param_1 + 0x17);
  uVar15 = uVar16 & 0xffff83ff;
  uVar19 = (uVar16 + 0x400 & 0x7c00 | uVar15) + 0x400;
  uVar1 = (uVar19 & 0x7c00 | uVar15) + 0x400;
  plVar22 = param_1 + (ulong)(uVar16 >> 10 & 0x1f) * 7 + 0x18;
  plVar23 = param_1 + (ulong)(uVar16 + 0x400 >> 10 & 0x1f) * 7 + 0x18;
  plVar24 = param_1 + (ulong)(uVar19 >> 10 & 0x1f) * 7 + 0x18;
  plVar20 = param_1 + (ulong)(uVar1 >> 10 & 0x1f) * 7 + 0x18;
  plVar22[2] = 0;
  plVar22[1] = (long)FUN_00a22f28;
  plVar22[4] = 0;
  plVar22[3] = (long)FUN_00a23324;
  plVar22[6] = 0;
  plVar22[5] = (long)FUN_00a23414;
  *(undefined4 *)plVar22 = 0;
  plVar23[2] = 0;
  plVar23[1] = (long)FUN_00a23430;
  plVar23[3] = (long)FUN_00a2356c;
  plVar23[4] = 0;
  *(undefined4 *)plVar23 = 1;
  plVar23[5] = 0;
  plVar23[6] = 0;
  plVar24[2] = 0;
  plVar24[1] = (long)FUN_00a23634;
  *(undefined4 *)plVar24 = 2;
  plVar24[5] = 0;
  plVar24[6] = 0;
  plVar24[3] = (long)FUN_00a236d0;
  plVar24[4] = 0;
  plVar20[2] = 0;
  plVar20[1] = (long)FUN_00a23730;
  *(undefined4 *)plVar20 = 3;
  plVar20[4] = 0;
  plVar20[3] = (long)FUN_00a23868;
  plVar20[6] = 0;
  plVar20[5] = (long)FUN_00a23970;
  *(ushort *)(param_1 + 0x17) =
       ((ushort)uVar1 & 0x7c00 | (ushort)uVar15) + 0x400 & 0x7c00 | (ushort)uVar15;
  FUN_00a23974(puVar21,0,1);
  FUN_00a23974(puVar21,0,3);
  FUN_00a23974(puVar21,2,0);
  FUN_00a23974(puVar21,2,1);
  FUN_00a23974(puVar21,2,3);
  FUN_00a23974(puVar21,1,0);
  FUN_00a23974(puVar21,1,2);
  FUN_00a23974(puVar21,1,3);
  FUN_00a23974(puVar21,3,0);
  FUN_00a23974(puVar21,3,1);
  FUN_00a239fc(puVar21,0,0,0);
  if (*(long *)(lVar17 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

