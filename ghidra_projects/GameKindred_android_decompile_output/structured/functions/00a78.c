// functions/00a78 — 4 functions
#include "libGameKindred.h"




undefined4 FUN_00a78150(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined4 *puVar4;
  
  plVar1 = (long *)(param_1 + 0x11318);
  plVar2 = (long *)*plVar1;
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x11320) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        lVar3 = (**(code **)(*(long *)*plVar1 + 0x10))();
        puVar4 = (undefined4 *)(lVar3 + 0x260);
        goto LAB_00a781d4;
      }
    }
    else {
      *plVar1 = 0;
      *(int *)(param_1 + 0x11320) = DAT_03214ce8;
    }
  }
  puVar4 = &DAT_01bc8f90;
LAB_00a781d4:
  return *puVar4;
}




void FUN_00a781e4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  
  fVar9 = *(float *)(param_1 + 10);
  if ((*(float *)(param_1 + 0x20a4) != fVar9) ||
     (*(float *)((long)param_1 + 0x10524) != *(float *)((long)param_1 + 0x54))) {
    *(float *)(param_1 + 0x20a4) = fVar9;
    *(float *)((long)param_1 + 0x10524) = *(float *)((long)param_1 + 0x54);
    FUN_0091ada4(param_1 + 0x209a);
  }
  FUN_00f01c20(param_1 + 0x2141);
  plVar1 = param_1 + 0x20ab;
  fVar5 = fVar9;
  if ((*(float *)(param_1 + 0x20b5) != 0.0) || (*(float *)((long)param_1 + 0x105ac) != 0.0)) {
    *(undefined4 *)((long)param_1 + 0x105ac) = 0;
    *(undefined4 *)(param_1 + 0x20b5) = 0;
    FUN_0091ada4(plVar1);
  }
  plVar2 = param_1 + 0x20c9;
  if (*(float *)(param_1 + 0x20d3) == 0.5) {
    fVar10 = 1.0;
    fVar5 = 1.0;
    if (*(float *)((long)param_1 + 0x1069c) == 1.0) goto LAB_00a78314;
  }
  fVar10 = fVar5;
  param_1[0x20d3] = 0x3f8000003f000000;
  FUN_0091ada4(plVar2);
LAB_00a78314:
  fVar5 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  (**(code **)(*param_1 + 0x48))(param_1);
  fVar6 = fVar10 * -0.5;
  if ((*(float *)(param_1 + 0x20b3) != fVar5 * -0.5) ||
     (fVar10 = *(float *)((long)param_1 + 0x1059c), fVar10 != fVar6)) {
    *(float *)(param_1 + 0x20b3) = fVar5 * -0.5;
    *(float *)((long)param_1 + 0x1059c) = fVar6;
    FUN_0091ada4(plVar1);
  }
  fVar9 = fVar9 * 0.5;
  (**(code **)(*param_1 + 0x48))(param_1);
  if ((*(float *)(param_1 + 0x20d1) != 0.0) || (*(float *)((long)param_1 + 0x1068c) != fVar10 * 0.5)
     ) {
    *(float *)(param_1 + 0x20d1) = 0.0;
    *(float *)((long)param_1 + 0x1068c) = fVar10 * 0.5;
    FUN_0091ada4(plVar2);
  }
  fVar5 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  fVar10 = fVar9;
  FUN_00f13f08(fVar5 - fVar9,fVar9,plVar1);
  uVar7 = (**(code **)(*param_1 + 0x48))(param_1);
  (**(code **)(*param_1 + 0x48))(param_1);
  fVar5 = fVar10;
  FUN_00f0eac0(plVar1);
  FUN_00f13f08(uVar7,fVar10 - fVar5,plVar2);
  plVar2 = param_1 + 0x20e7;
  if ((*(float *)(param_1 + 0x20f1) != 0.0) || (*(float *)((long)param_1 + 0x1078c) != 0.0)) {
    *(undefined4 *)((long)param_1 + 0x1078c) = 0;
    *(undefined4 *)(param_1 + 0x20f1) = 0;
    FUN_0091ada4(plVar2);
  }
  plVar3 = param_1 + 0x2105;
  if ((*(float *)(param_1 + 0x210f) != 0.0) || (*(float *)((long)param_1 + 0x1087c) != 0.5)) {
    param_1[0x210f] = 0x3f00000000000000;
    FUN_0091ada4(plVar3);
  }
  fVar5 = *(float *)(param_1 + 0x212d);
  plVar4 = param_1 + 0x2123;
  if ((fVar5 != 1.0) || (fVar5 = *(float *)((long)param_1 + 0x1096c), fVar5 != 1.0)) {
    lVar8 = NEON_fmov(0x3f800000,4);
    param_1[0x212d] = lVar8;
    FUN_0091ada4(plVar4);
  }
  fVar10 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  FUN_00f0e700(plVar2);
  fVar10 = fVar5 + fVar10 * -0.5;
  (**(code **)(*param_1 + 0x48))(param_1);
  if ((*(float *)(param_1 + 0x20ef) != fVar10) ||
     (*(float *)((long)param_1 + 0x1077c) != fVar5 * -0.5)) {
    *(float *)(param_1 + 0x20ef) = fVar10;
    *(float *)((long)param_1 + 0x1077c) = fVar5 * -0.5;
    FUN_0091ada4(plVar2);
  }
  fVar5 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  fVar10 = *(float *)(param_1 + 0x210d);
  if ((fVar10 != fVar5 * -0.5) || (fVar10 = *(float *)((long)param_1 + 0x1086c), fVar10 != 0.0)) {
    *(float *)(param_1 + 0x210d) = fVar5 * -0.5;
    *(float *)((long)param_1 + 0x1086c) = 0.0;
    FUN_0091ada4(plVar3);
  }
  fVar5 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  (**(code **)(*param_1 + 0x48))(param_1);
  if ((*(float *)(param_1 + 0x212b) != fVar5 * 0.5) ||
     (*(float *)((long)param_1 + 0x1095c) != fVar10 * 0.5)) {
    *(float *)(param_1 + 0x212b) = fVar5 * 0.5;
    *(float *)((long)param_1 + 0x1095c) = fVar10 * 0.5;
    FUN_0091ada4(plVar4);
  }
  fVar5 = (float)FUN_00f0e700(plVar1);
  fVar10 = 5.0;
  FUN_00f13f08(fVar5 + -5.0,0x40a00000,plVar2);
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_00f13f08(0x40a00000,plVar3);
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_00f13f08(0x40a00000,fVar10 - fVar9,plVar4);
  return;
}




void FUN_00a786d4(long param_1,int param_2,int param_3)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  plVar1 = (long *)(param_1 + 0x11318);
  plVar3 = (long *)*plVar1;
  if (plVar3 != (long *)0x0) {
    if (*(int *)(param_1 + 0x11320) == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
      if (lVar4 != 0) {
        lVar4 = (**(code **)(*(long *)*plVar1 + 0x10))();
        if (*(int *)(lVar4 + 0x260) == param_2) {
          uVar5 = FUN_00d6eb50();
          iVar2 = FUN_00d6e9d4(uVar5,PTR_s__Item_HealingFlask__02beb0b0);
          if (iVar2 == param_3) {
            FUN_00a76150(param_1);
            return;
          }
        }
      }
    }
    else {
      *plVar1 = 0;
      *(int *)(param_1 + 0x11320) = DAT_03214ce8;
    }
  }
  return;
}




void FUN_00a787a0(long *param_1)

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
  long *plVar22;
  long *plVar23;
  long *plVar24;
  uint *puVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  long lVar28;
  int iVar29;
  int iVar30;
  undefined8 uVar31;
  uint uVar32;
  ulong uVar33;
  long *plVar34;
  ulong uVar35;
  float fVar36;
  long lVar37;
  code *local_c0;
  long *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  ulong local_a0;
  undefined4 local_98;
  long local_90;
  
  lVar28 = tpidr_el0;
  local_90 = *(long *)(lVar28 + 0x28);
  FUN_00b89cd8();
  plVar34 = param_1 + 0x19;
  *param_1 = (long)&PTR_FUN_027cdbc0;
  FUN_00f017e8(plVar34);
  *plVar34 = (long)&PTR_FUN_027c1f80;
  FUN_00e70510(param_1 + 0x2a);
  plVar1 = param_1 + 0x2c;
  FUN_00f017e8(plVar1);
  plVar2 = param_1 + 0x3d;
  param_1[0x2c] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x5b;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x79;
  FUN_00f0e4a8();
  plVar5 = param_1 + 0x97;
  FUN_00f0e4a8();
  plVar6 = param_1 + 0xb5;
  FUN_00f017e8(plVar6);
  plVar7 = param_1 + 0xc6;
  param_1[0xb5] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8();
  plVar8 = param_1 + 0xe4;
  FUN_00f0e4a8();
  plVar9 = param_1 + 0x102;
  FUN_00f0e4a8();
  plVar10 = param_1 + 0x120;
  FUN_00f017e8(plVar10);
  plVar11 = param_1 + 0x131;
  param_1[0x120] = (long)&PTR_FUN_027c1f80;
  FUN_00f0bdbc(plVar11,0);
  plVar12 = param_1 + 0x14a;
  param_1[0x131] = (long)&PTR_FUN_027c3260;
  FUN_00abaee8(plVar12,1);
  plVar13 = param_1 + 0x209;
  FUN_00abaee8(plVar13,1);
  FUN_00f13ca4();
  plVar14 = param_1 + 0x2df;
  FUN_00f0d160();
  FUN_00f0e4a8(param_1 + 0x305);
  FUN_00f0e4a8(param_1 + 0x323);
  plVar15 = param_1 + 0x341;
  FUN_00f0e4a8();
  plVar16 = param_1 + 0x35f;
  FUN_00f0e4a8();
  plVar17 = param_1 + 0x37d;
  FUN_00b08d84();
  plVar18 = param_1 + 0x3cb;
  FUN_00f0d160();
  plVar19 = param_1 + 0x3f1;
  FUN_00f0bdbc(plVar19,0);
  plVar20 = param_1 + 0x40a;
  param_1[0x3f1] = (long)&PTR_FUN_027c3260;
  FUN_00ab6c24(plVar20,1);
  plVar21 = param_1 + 0x6c2;
  FUN_00abaee8(plVar21,1);
  plVar22 = param_1 + 0x781;
  FUN_00f017e8();
  plVar23 = param_1 + 0x792;
  param_1[0x781] = (long)&PTR_FUN_027c1f80;
  FUN_00a291cc();
  plVar24 = param_1 + 0x7b2;
  FUN_00ab6c24(plVar24,1);
  param_1[0xa6b] = 0;
  param_1[0xa6a] = 0;
  *(undefined4 *)(param_1 + 0xa6c) = 0x3f800000;
  *(undefined2 *)((long)param_1 + 0x5364) = 0;
  puVar25 = (uint *)(param_1 + 0xa6a);
  (**(code **)(*param_1 + 0x78))(param_1,plVar34,1);
  FUN_00f023ec(plVar34,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f023ec(plVar1,plVar4,1);
  FUN_00f023ec(plVar1,plVar5,1);
  iVar29 = FUN_00924c98();
  if (0 < iVar29) {
    iVar29 = 0;
    do {
      local_c0 = (code *)FUN_00a79a00(plVar1,1);
      FUN_00a79978(puVar25,&local_c0);
      iVar29 = iVar29 + 1;
      iVar30 = FUN_00924c98();
    } while (iVar29 < iVar30);
  }
  FUN_00f023ec(plVar1,plVar6,1);
  FUN_00f023ec(plVar6,plVar7,1);
  FUN_00f023ec(plVar6,plVar8,1);
  FUN_00f023ec(plVar6,plVar9,1);
  FUN_00f023ec(plVar1,plVar10,1);
  FUN_00f023ec(plVar10,plVar11,1);
  FUN_00f023ec(plVar11,plVar13,1);
  FUN_00f023ec(plVar11,param_1 + 0x2c8,1);
  FUN_00f023ec(param_1 + 0x2c8,plVar14,1);
  FUN_00f023ec(plVar11,plVar12,1);
  FUN_00f023ec(plVar10,plVar18,1);
  FUN_00f023ec(plVar10,plVar17,1);
  FUN_00f023ec(param_1 + 0x3b1,plVar16,1);
  FUN_00f023ec(param_1 + 0x3b1,plVar15,1);
  FUN_00f023ec(plVar10,plVar19,1);
  FUN_00f023ec(plVar19,plVar21,1);
  FUN_00f023ec(plVar19,plVar20,1);
  FUN_00f023ec(plVar34,plVar22,1);
  FUN_00f023ec(plVar22,plVar24,1);
  FUN_00f023ec(plVar22,plVar23,1);
  FUN_00f0e548(plVar2,PTR_s_build___HUDPartsCommon_atlas_02be3440,"white_background");
  *(uint *)((long)param_1 + 0x26c) = *(uint *)((long)param_1 + 0x26c) | 0x10;
  (**(code **)(param_1[0x3d] + 0x40))(0x41000000,plVar2);
  if ((*(uint *)((long)param_1 + 0x26c) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x26c) = *(uint *)((long)param_1 + 0x26c) & 0xffff807f;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0e548(plVar3,PTR_s_build___HUDPartsCommon_atlas_02be3440,"white_background");
  *(uint *)((long)param_1 + 0x35c) = *(uint *)((long)param_1 + 0x35c) | 0x10;
  (**(code **)(param_1[0x5b] + 0x40))(0x41000000,plVar3);
  FUN_00f0e670(plVar3,&DAT_01bee7f6,2);
  uVar32 = *(uint *)((long)param_1 + 0x35c);
  if ((uVar32 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0x35c) = uVar32 & 0xffff8000 | uVar32 & 0x7f | 0x5280;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0e548(plVar4,PTR_s_build___HUDPartsCommon_atlas_02be3440,"white_background");
  if ((*(uint *)((long)param_1 + 0x44c) & 0x7f80) != 0x1f80) {
    *(uint *)((long)param_1 + 0x44c) = *(uint *)((long)param_1 + 0x44c) & 0xffff807f | 0x1f80;
    FUN_0091ada4(plVar4);
  }
  FUN_00f0e548(plVar5,PTR_s_build___HUDPartsCommon_atlas_02be3440,"vert_glass_shadow");
  FUN_00f0e670(plVar5,&DAT_01bee7f6,2);
  if ((*(uint *)((long)param_1 + 0x53c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x53c) = *(uint *)((long)param_1 + 0x53c) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar5);
  }
  *(byte *)(param_1 + 0xb2) = *(byte *)(param_1 + 0xb2) | 2;
  FUN_00f0e548(plVar7,PTR_s_build___HUDPartsCommon_atlas_02be3440,"white_background");
  local_c0 = (code *)CONCAT44(local_c0._4_4_,0xff595959);
  FUN_00f0e670(plVar7,&local_c0,2);
  if ((*(float *)(param_1 + 0xd0) != 0.0) || (*(float *)((long)param_1 + 0x684) != 0.5)) {
    param_1[0xd0] = 0x3f00000000000000;
    FUN_0091ada4(plVar7);
  }
  *(uint *)((long)param_1 + 0x6b4) = *(uint *)((long)param_1 + 0x6b4) | 0x10;
  (**(code **)(param_1[0xc6] + 0x40))(0x41000000,plVar7);
  uVar26 = DAT_03210f58;
  local_c0 = thunk_FUN_00a7b15c;
  local_a8 = 0;
  local_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  local_98 = uVar26;
  FUN_009693a0(param_1 + 199,&local_c0);
  local_c0 = thunk_FUN_00a7b15c;
  uVar27 = DAT_03210f84;
  local_a8 = 0;
  local_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  local_98 = uVar27;
  FUN_009693a0(param_1 + 199,&local_c0);
  FUN_00f0e548(plVar8,PTR_s_build___HUDPartsCommon_atlas_02be3440,"white_background");
  if ((*(float *)(param_1 + 0xee) != 0.0) || (*(float *)((long)param_1 + 0x774) != 0.5)) {
    param_1[0xee] = 0x3f00000000000000;
    FUN_0091ada4(plVar8);
  }
  FUN_00f0e548(plVar9,PTR_s_build___HUDPartsCommon_atlas_02be3440,"circle_button_fill");
  *(uint *)((long)param_1 + 0x894) = *(uint *)((long)param_1 + 0x894) | 0x10;
  (**(code **)(param_1[0x102] + 0x40))(0x41000000,plVar9);
  local_c0 = FUN_00a79a6c;
  local_a8 = 0;
  local_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  local_98 = uVar26;
  FUN_009693a0(param_1 + 0x103,&local_c0);
  local_c0 = FUN_00a79a6c;
  local_a8 = 0;
  local_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  local_98 = uVar27;
  FUN_009693a0(param_1 + 0x103,&local_c0);
  if ((*(float *)(param_1 + 0x10c) != 0.5) || (*(float *)((long)param_1 + 0x864) != 0.5)) {
    param_1[0x10c] = 0x3f0000003f000000;
    FUN_0091ada4(plVar9);
  }
  FUN_00f0e548(plVar23,PTR_s_build___HUDPartsCommon_atlas_02be3440,"hud_replay_controls");
  if ((*(float *)(param_1 + 0x79c) != 0.5) || (*(float *)((long)param_1 + 0x3ce4) != 0.5)) {
    param_1[0x79c] = 0x3f0000003f000000;
    FUN_0091ada4(plVar23);
  }
  FUN_00e705c8(&local_c0,&DAT_01e277f2);
  FUN_00ab703c(0x42800000,0,0x44480000,plVar24,0,&local_c0,&DAT_01bee7fa,&DAT_03218ef8,0);
  if (local_b8 != (long *)0x0) {
    operator_delete__(local_b8);
    local_c0 = (code *)0x0;
    local_b8 = (long *)0x0;
  }
  FUN_00ab7588(0x3f800000,plVar24,&DAT_01bee7f6);
  *(uint *)((long)param_1 + 0x3e14) = *(uint *)((long)param_1 + 0x3e14) | 0x10;
  FUN_00b09144(0,plVar24);
  if ((*(float *)(param_1 + 0x7bc) != 0.5) || (*(float *)((long)param_1 + 0x3de4) != 0.5)) {
    param_1[0x7bc] = 0x3f0000003f000000;
    FUN_0091ada4(plVar24);
  }
  FUN_00ab7628(0x42dccccd,plVar24);
  lVar37 = NEON_fmov(0x41a00000,4);
  param_1[0x7bd] = lVar37;
  if ((*(uint *)((long)param_1 + 0x3c8c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x3c8c) = *(uint *)((long)param_1 + 0x3c8c) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar22);
  }
  plVar1 = param_1 + 0x1e5;
  FUN_00f0e578(plVar1,"hud_plus");
  FUN_00f0e670(plVar1,&DAT_03131298,2);
  fVar36 = (float)FUN_00f0e700(plVar1);
  fVar36 = 56.0 / fVar36;
  if ((*(float *)(param_1 + 0x1ee) != fVar36) || (*(float *)((long)param_1 + 0xf74) != fVar36)) {
    *(float *)(param_1 + 0x1ee) = fVar36;
    *(float *)((long)param_1 + 0xf74) = fVar36;
    FUN_0091ada4(plVar1);
  }
  uVar32 = *(uint *)((long)param_1 + 0xdcc);
  if ((uVar32 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0xdcc) = uVar32 & 0xffff8000 | uVar32 & 0x7f | 0x1980;
    FUN_0091ada4(param_1 + 0x1a9);
  }
  FUN_00abb1c8(0x3f800000,plVar12,&DAT_01ba14a0);
  FUN_00b09144(0,plVar12);
  FUN_00abb1e0(0x3f666666,plVar12,&DAT_01bee7fa);
  param_1[0x155] = 0x4100000041000000;
  if ((*(float *)(param_1 + 0x154) != 0.5) || (*(float *)((long)param_1 + 0xaa4) != 0.5)) {
    param_1[0x154] = 0x3f0000003f000000;
    FUN_0091ada4(plVar12);
  }
  FUN_00abb218(0x3f800000,0x3fc00000,plVar12);
  local_c0 = thunk_FUN_00a7ae70;
  local_a8 = 0;
  local_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  local_98 = uVar26;
  FUN_009693a0(param_1 + 0x14b,&local_c0);
  local_c0 = thunk_FUN_00a7ae70;
  local_a8 = 0;
  local_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  local_98 = uVar27;
  FUN_009693a0(param_1 + 0x14b,&local_c0);
  plVar1 = param_1 + 0x2a4;
  FUN_00f0e578(plVar1,"hud_minus");
  FUN_00f0e670(plVar1,&DAT_03131298,2);
  fVar36 = (float)FUN_00f0e700(plVar1);
  fVar36 = 56.0 / fVar36;
  if ((*(float *)(param_1 + 0x2ad) != fVar36) || (*(float *)((long)param_1 + 0x156c) != fVar36)) {
    *(float *)(param_1 + 0x2ad) = fVar36;
    *(float *)((long)param_1 + 0x156c) = fVar36;
    FUN_0091ada4(plVar1);
  }
  uVar32 = *(uint *)((long)param_1 + 0x15a4);
  if ((uVar32 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x15a4) = uVar32 & 0xffff8000 | uVar32 & 0x7f | 0x5900;
    FUN_0091ada4(plVar1);
  }
  uVar32 = *(uint *)((long)param_1 + 0x13c4);
  if ((uVar32 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x13c4) = uVar32 & 0xffff8000 | uVar32 & 0x7f | 0x1980;
    FUN_0091ada4(param_1 + 0x268);
  }
  FUN_00abb1c8(0x3f800000,plVar13,&DAT_01ba14a0);
  FUN_00b09144(0,plVar13);
  FUN_00abb1e0(0x3f666666,plVar13,&DAT_01bee7fa);
  param_1[0x214] = 0x4100000041000000;
  if ((*(float *)(param_1 + 0x213) != 0.5) || (*(float *)((long)param_1 + 0x109c) != 0.5)) {
    param_1[0x213] = 0x3f0000003f000000;
    FUN_0091ada4(plVar13);
  }
  FUN_00abb218(0x3f800000,0x3fc00000,plVar13);
  local_c0 = thunk_FUN_00a7afb4;
  local_a8 = 0;
  local_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  local_98 = uVar26;
  FUN_009693a0(param_1 + 0x20a,&local_c0);
  local_c0 = thunk_FUN_00a7afb4;
  local_a8 = 0;
  local_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  local_98 = uVar27;
  FUN_009693a0(param_1 + 0x20a,&local_c0);
  FUN_00f0d92c(plVar14,PTR_s_build___Fonts_Brandon_Light_80_f_02be9c20,&DAT_01bee7fa);
  uVar32 = *(uint *)((long)param_1 + 0x177c);
  if ((uVar32 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x177c) = uVar32 & 0xffff8000 | uVar32 & 0x7f | 0x6600;
    FUN_0091ada4(plVar14);
  }
  FUN_00f0da80(plVar14,&DAT_03131298);
  FUN_00f0da30(plVar14,1);
  if ((*(float *)(param_1 + 0x2e9) != 0.5) || (*(float *)((long)param_1 + 0x174c) != 0.5)) {
    param_1[0x2e9] = 0x3f0000003f000000;
    FUN_0091ada4(plVar14);
  }
  FUN_00f0e548(plVar16,PTR_s_build___HUDPartsCommon_atlas_02be3440,"circle_button_play");
  if ((*(float *)(param_1 + 0x369) != 0.5) || (*(float *)((long)param_1 + 0x1b4c) != 0.5)) {
    param_1[0x369] = 0x3f0000003f000000;
    FUN_0091ada4(plVar16);
  }
  if ((*(float *)(param_1 + 0x368) != 1.9090909) ||
     (*(float *)((long)param_1 + 0x1b44) != 1.9090909)) {
    param_1[0x368] = 0x3ff45d173ff45d17;
    FUN_0091ada4(plVar16);
  }
  FUN_00f0e548(plVar15,PTR_s_build___HUDPartsCommon_atlas_02be3440,"hud_replay_pause");
  if ((*(float *)(param_1 + 0x34b) != 0.5) || (*(float *)((long)param_1 + 0x1a5c) != 0.5)) {
    param_1[0x34b] = 0x3f0000003f000000;
    FUN_0091ada4(plVar15);
  }
  if ((*(float *)(param_1 + 0x34a) != 1.1351352) ||
     (*(float *)((long)param_1 + 0x1a54) != 1.1351352)) {
    param_1[0x34a] = 0x3f914c1c3f914c1c;
    FUN_0091ada4(plVar15);
  }
  uVar32 = *(uint *)((long)param_1 + 0x1c6c);
  if ((uVar32 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x1c6c) = uVar32 & 0xffff8000 | uVar32 & 0x7f | 0x6600;
    FUN_0091ada4(plVar17);
    uVar32 = *(uint *)((long)param_1 + 0x1c6c);
  }
  *(uint *)((long)param_1 + 0x1c6c) = uVar32 | 0x10;
  (**(code **)(param_1[0x37d] + 0x40))(0x41000000,plVar17);
  FUN_00b09144(0xbf800000,plVar17);
  local_c0 = FUN_00a79a84;
  local_a8 = 0;
  local_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  local_98 = uVar26;
  FUN_009693a0(param_1 + 0x37e,&local_c0);
  local_c0 = FUN_00a79a84;
  local_a8 = 0;
  local_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  local_98 = uVar27;
  FUN_009693a0(param_1 + 0x37e,&local_c0);
  *(uint *)((long)param_1 + 0x1b7c) = *(uint *)((long)param_1 + 0x1b7c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x1a8c) = *(uint *)((long)param_1 + 0x1a8c) | 4;
  FUN_00f0d92c(plVar18,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50,&DAT_01bee7fa);
  if ((*(uint *)((long)param_1 + 0x1edc) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x1edc) = *(uint *)((long)param_1 + 0x1edc) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar18);
  }
  FUN_00f0da80(plVar18,&DAT_03131298);
  FUN_00f0da30(plVar18,1);
  if ((*(float *)(param_1 + 0x3d5) != 0.0) || (*(float *)((long)param_1 + 0x1eac) != 0.0)) {
    param_1[0x3d5] = 0;
    FUN_0091ada4(plVar18);
  }
  uVar31 = FUN_00e6ce7c("HUD_EXIT_REPLAY",0);
  FUN_00ab703c(0x41f00000,0,0x44480000,plVar20,0,uVar31,&DAT_01bee7fa,&DAT_03218ef8,0);
  FUN_00ab7588(0x3f800000,plVar20,&DAT_01bee7f6);
  local_98 = DAT_03210c64;
  local_c0 = thunk_FUN_00a7b104;
  local_a8 = 0;
  local_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  FUN_009693a0(param_1 + 0x40b,&local_c0);
  *(uint *)((long)param_1 + 0x20d4) = *(uint *)((long)param_1 + 0x20d4) | 0x10;
  FUN_00b09144(0,plVar20);
  if ((*(float *)(param_1 + 0x414) != 0.5) || (*(float *)((long)param_1 + 0x20a4) != 0.5)) {
    param_1[0x414] = 0x3f0000003f000000;
    FUN_0091ada4(plVar20);
  }
  uVar32 = *(uint *)((long)param_1 + 0x200c);
  if ((uVar32 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x200c) = uVar32 & 0xffff8000 | uVar32 & 0x7f | 0x6600;
    FUN_0091ada4(plVar19);
  }
  plVar1 = param_1 + 0x75d;
  FUN_00f0e578(plVar1,"hud_replay_details");
  fVar36 = (float)FUN_00f0e700(plVar1);
  fVar36 = 56.0 / fVar36;
  if ((*(float *)(param_1 + 0x766) != fVar36) || (*(float *)((long)param_1 + 0x3b34) != fVar36)) {
    *(float *)(param_1 + 0x766) = fVar36;
    *(float *)((long)param_1 + 0x3b34) = fVar36;
    FUN_0091ada4(plVar1);
  }
  FUN_00abb1c8(0x3f000000,plVar21,&DAT_01bee7f6);
  FUN_00b09144(0,plVar21);
  param_1[0x6cd] = 0x4100000041000000;
  if ((*(float *)(param_1 + 0x6cc) != 0.5) || (*(float *)((long)param_1 + 0x3664) != 0.5)) {
    param_1[0x6cc] = 0x3f0000003f000000;
    FUN_0091ada4(plVar21);
  }
  FUN_00abb218(0x3f800000,0x3fc00000,plVar21);
  local_c0 = thunk_FUN_00a7af1c;
  local_a8 = 0;
  local_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  local_98 = uVar26;
  FUN_009693a0(param_1 + 0x6c3,&local_c0);
  local_c0 = thunk_FUN_00a7af1c;
  local_a8 = 0;
  local_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  local_98 = uVar27;
  FUN_009693a0(param_1 + 0x6c3,&local_c0);
  uVar33 = (ulong)*puVar25;
  if (*puVar25 != 0) {
    uVar35 = 0;
    do {
      lVar37 = *(long *)(param_1[0xa6b] + uVar35 * 8);
      if (lVar37 != 0) {
        uVar31 = FUN_00924ca4(uVar35 & 0xffffffff);
        FUN_00a79aa0(lVar37,uVar31);
        *(uint *)(lVar37 + 0x13c) = *(uint *)(lVar37 + 0x13c) | 0x10;
        (**(code **)(*(long *)(lVar37 + 0xb8) + 0x40))(0x41000000,(long *)(lVar37 + 0xb8));
        local_c0 = FUN_00a79c14;
        local_b0 = 0;
        local_a8 = 0;
        local_b8 = param_1;
        local_a0 = uVar35;
        local_98 = uVar26;
        FUN_009693a0(lVar37 + 0xc0,&local_c0);
        local_c0 = FUN_00a79c14;
        local_b0 = 0;
        local_a8 = 0;
        local_b8 = param_1;
        local_a0 = uVar35;
        local_98 = uVar27;
        FUN_009693a0(lVar37 + 0xc0,&local_c0);
        *(uint *)(lVar37 + 0x824) = *(uint *)(lVar37 + 0x824) | 0x10;
        (**(code **)(*(long *)(lVar37 + 0x7a0) + 0x40))(0x41000000,lVar37 + 0x7a0);
        local_c0 = FUN_00a79c14;
        local_b0 = 0;
        local_a8 = 0;
        local_b8 = param_1;
        local_a0 = uVar35;
        local_98 = uVar26;
        FUN_009693a0(lVar37 + 0x7a8,&local_c0);
        local_c0 = FUN_00a79c14;
        local_b0 = 0;
        local_a8 = 0;
        local_b8 = param_1;
        local_a0 = uVar35;
        local_98 = uVar27;
        FUN_009693a0(lVar37 + 0x7a8,&local_c0);
        uVar33 = (ulong)*puVar25;
      }
      uVar35 = uVar35 + 1;
    } while (uVar35 < uVar33);
  }
  local_c0 = (code *)CONCAT44(local_c0._4_4_,0x3f800000);
  FUN_009399dc(0,&local_c0,0,0,0,0,0,0);
  uVar33 = FUN_0094276c();
  if ((uVar33 & 1) == 0) {
    *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xfffffffb;
  }
  (**(code **)(*param_1 + 0x150))(param_1);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 8;
  FUN_00a79c1c(param_1,0);
  if (*(long *)(lVar28 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

