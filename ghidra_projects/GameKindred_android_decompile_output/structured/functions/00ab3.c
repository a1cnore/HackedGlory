// functions/00ab3 — 13 functions
#include "libGameKindred.h"




void FUN_00ab3154(uint *param_1,uint param_2)

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




void FUN_00ab31d4(uint *param_1,uint param_2)

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




void FUN_00ab3254(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027dd718;
  FUN_00f0d3a4(param_1 + 0x53);
  param_1[0x35] = &PTR_FUN_028266f0;
  param_1[0x4c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4f);
  FUN_00f13d08(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ab32dc(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  undefined8 local_70;
  void *local_68;
  undefined2 local_5c [2];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  iVar4 = 0;
  local_5c[0] = 0x41;
  do {
    plVar3 = operator_new(0x130);
    FUN_00f0d25c(plVar3,param_2);
    local_5c[0] = CONCAT11(local_5c[0]._1_1_,(char)iVar4 + 'A');
    FUN_00e705c8(&local_70,local_5c);
    (**(code **)(*plVar3 + 0x138))(plVar3,&local_70);
    if (local_68 != (void *)0x0) {
      operator_delete__(local_68);
      local_70 = 0;
      local_68 = (void *)0x0;
    }
    uVar1 = *(uint *)((long)plVar3 + 0x84);
    if ((uVar1 & 0x7f80) != 0x1980) {
      *(uint *)((long)plVar3 + 0x84) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x1980;
      FUN_0091ada4(plVar3);
    }
    FUN_00ed1ed4(param_1,iVar4,plVar3);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x1a);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ab33d8(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = FUN_00965ecc();
  fVar4 = *(float *)(lVar1 + 4);
  lVar1 = FUN_00965ecc(param_3);
  fVar2 = *(float *)(lVar1 + 0x14);
  fVar4 = *(float *)((long)param_2 + 0x44) - (fVar4 - *(float *)(lVar1 + 0xc)) / fVar2;
  (**(code **)(*param_2 + 0x48))(param_2);
  fVar3 = fVar2;
  (**(code **)(*param_3 + 0x48))(param_3);
  if (fVar4 <= -(fVar2 - fVar3)) {
    fVar4 = -(fVar2 - fVar3);
  }
  if (*(float *)((long)param_2 + 0x44) != fVar4) {
    *(float *)((long)param_2 + 0x44) = fVar4;
    FUN_0091ada4(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00ab347c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x138))(param_2);
  return;
}




void FUN_00ab3480(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_00965ecc();
  fVar4 = *(float *)(lVar1 + 4);
  lVar1 = FUN_00965ecc(param_3);
  fVar3 = *(float *)(lVar1 + 0x14);
  fVar5 = (fVar4 - *(float *)(lVar1 + 0xc)) / fVar3;
  lVar1 = FUN_00ed5aa8(param_2);
  fVar5 = *(float *)(lVar1 + 0x44) - fVar5;
  plVar2 = (long *)FUN_00ed5aa8(param_2);
  (**(code **)(*plVar2 + 0x48))();
  fVar4 = fVar3;
  (**(code **)(*param_3 + 0x48))(param_3);
  if (fVar5 <= -(fVar3 - fVar4)) {
    fVar5 = -(fVar3 - fVar4);
  }
  lVar1 = FUN_00ed5aa8(param_2);
  if (*(float *)(lVar1 + 0x44) != fVar5) {
    *(float *)(lVar1 + 0x44) = fVar5;
    FUN_0091ada4();
  }
                    /* WARNING: Could not recover jumptable at 0x00ab3534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x140))(param_2);
  return;
}




void FUN_00ab3538(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined **ppuVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_80;
  long local_78;
  
  lVar7 = tpidr_el0;
  local_78 = *(long *)(lVar7 + 0x28);
  FUN_00b0bb00();
  plVar1 = param_1 + 0x49f;
  *param_1 = (long)&PTR_FUN_027d4918;
  param_1[0x3de] = (long)&PTR_FUN_027d4af0;
  FUN_00f017e8(plVar1);
  plVar2 = param_1 + 0x4b0;
  param_1[0x49f] = (long)&PTR_FUN_027c1f80;
  FUN_00f017e8(plVar2);
  plVar3 = param_1 + 0x4c1;
  param_1[0x4b0] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x4df;
  FUN_00f0e4a8(plVar4);
  plVar5 = param_1 + 0x4fd;
  FUN_00f0d160(plVar5);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00f023ec(plVar2,plVar4,1);
  FUN_00f023ec(plVar1,plVar5,1);
  uVar8 = FUN_0092ea9c();
  *(undefined4 *)(param_1 + 0x523) = *(undefined4 *)(param_2 + 0x98);
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"arrow_down");
  FUN_00f13f08(0x421c0000,0x41a80000,plVar3);
  *(byte *)(param_1 + 0x4dc) = *(byte *)(param_1 + 0x4dc) | 2;
  FUN_00f0e548(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
  fVar10 = 29.0;
  FUN_00f13f08(0x41500000,plVar4);
  fVar9 = (float)FUN_00f0e700(plVar3);
  FUN_00f0e700(plVar3);
  if ((*(float *)(param_1 + 0x4e7) != fVar9 * 0.5) ||
     (*(float *)((long)param_1 + 0x273c) != fVar10 + -6.0)) {
    *(float *)(param_1 + 0x4e7) = fVar9 * 0.5;
    *(float *)((long)param_1 + 0x273c) = fVar10 + -6.0;
    FUN_0091ada4(plVar4);
  }
  local_80 = 0x3f000000;
  (**(code **)(param_1[0x4df] + 0x28))(plVar4,&local_80);
  ppuVar6 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  if ((uVar8 & 1) == 0) {
    ppuVar6 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  FUN_00f0d378(plVar5,*ppuVar6);
  FUN_00f0d75c(plVar5,param_2 + 0x88);
  fVar9 = (float)FUN_00f0e700(plVar3);
  fVar10 = *(float *)(param_1 + 0x505);
  if ((fVar10 != fVar9 + 4.0) || (fVar10 = *(float *)((long)param_1 + 0x282c), fVar10 != 0.0)) {
    *(float *)(param_1 + 0x505) = fVar9 + 4.0;
    *(undefined4 *)((long)param_1 + 0x282c) = 0;
    FUN_0091ada4(plVar5);
  }
  local_80 = 0;
  (**(code **)(param_1[0x4fd] + 0x28))(plVar5,&local_80);
  FUN_00f0d4e0(plVar5);
  fVar9 = fVar10 * 0.5;
  FUN_00f01c54(plVar2,0,0,1,1);
  fVar9 = fVar9 - fVar10 * 0.5;
  if (*(float *)((long)param_1 + 0x25c4) != fVar9) {
    *(float *)((long)param_1 + 0x25c4) = fVar9;
    FUN_0091ada4(plVar2);
  }
  fVar9 = (float)FUN_00f01c54(plVar1,0,0,1,1);
  (**(code **)(*param_1 + 0x48))(param_1);
  fVar11 = fVar10 * -0.5;
  FUN_00f0d4e0(plVar5);
  fVar10 = (fVar11 - fVar10) + -20.0;
  if ((*(float *)(param_1 + 0x4a7) != fVar9 * -0.5) ||
     (*(float *)((long)param_1 + 0x253c) != fVar10)) {
    *(float *)(param_1 + 0x4a7) = fVar9 * -0.5;
    *(float *)((long)param_1 + 0x253c) = fVar10;
    FUN_0091ada4(plVar1);
  }
  local_80 = 0;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_80);
  if (*(long *)(lVar7 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ab38a8(undefined8 param_1)

{
  FUN_00ab38b0(param_1,0);
  return;
}




void FUN_00ab38b0(long param_1,ulong param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 uVar6;
  
  param_1 = param_1 + 0x24f8;
  FUN_00f01980(param_1);
  bVar5 = (param_2 & 1) == 0;
  uVar2 = 0x3f666666;
  uVar3 = 0x3f800000;
  if (bVar5) {
    uVar2 = 0;
    uVar3 = 0;
  }
  pcVar1 = FUN_009a816c;
  uVar4 = 0x3ecccccd;
  if (bVar5) {
    pcVar1 = FUN_00ab3980;
    uVar4 = 0x3dcccccd;
  }
  uVar6 = FUN_00efed6c(uVar2);
  FUN_00f022a0(param_1,uVar6);
  uVar6 = FUN_00efee28(uVar3,uVar4,pcVar1);
  FUN_00f022a0(param_1,uVar6);
  return;
}




void FUN_00ab3950(undefined8 param_1)

{
  FUN_00ab38b0(param_1,1);
  return;
}




void FUN_00ab3958(undefined8 param_1)

{
  FUN_00b0ded8();
  FUN_00ab38b0(param_1,1);
  return;
}




float FUN_00ab3980(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  fVar1 = param_1 / param_4 + -1.0;
  return param_2 - (fVar1 * fVar1 * fVar1 * fVar1 + -1.0) * param_3;
}




void FUN_00ab39a8(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,uint *param_8)

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
  undefined **ppuVar15;
  undefined **ppuVar16;
  long lVar17;
  bool bVar18;
  uint uVar19;
  ulong uVar20;
  code *pcVar21;
  long lVar22;
  float fVar23;
  undefined4 uVar24;
  code *local_e8;
  long *local_e0;
  ulong local_d8 [2];
  void *local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  long local_b0;
  
  lVar17 = tpidr_el0;
  local_b0 = *(long *)(lVar17 + 0x28);
  FUN_00acaa5c();
  plVar1 = param_3 + 0x6b;
  *param_3 = (long)&PTR_FUN_027d4b38;
  FUN_00abaee8(plVar1,0);
  FUN_00b27c04(param_3 + 0x12a,0);
  FUN_00b26098(param_3 + 0x147);
  plVar2 = param_3 + 0x15d;
  FUN_00f017e8(plVar2);
  plVar3 = param_3 + 0x16e;
  param_3[0x15d] = (long)&PTR_FUN_027c1f80;
  FUN_00f0d160();
  plVar4 = param_3 + 0x194;
  FUN_00f0d160();
  plVar5 = param_3 + 0x1ba;
  FUN_00f017e8(plVar5);
  plVar6 = param_3 + 0x1cb;
  param_3[0x1ba] = (long)&PTR_FUN_027c1f80;
  FUN_00f017e8(plVar6);
  plVar7 = param_3 + 0x1dc;
  param_3[0x1cb] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8();
  plVar8 = param_3 + 0x1fa;
  FUN_00b25254();
  plVar10 = param_3 + 0x226;
  FUN_00f017e8(plVar10);
  param_3[0x226] = (long)&PTR_FUN_027c1f80;
  FUN_00f0d160();
  plVar11 = param_3 + 0x25d;
  FUN_00f017e8(plVar11);
  plVar12 = param_3 + 0x26e;
  param_3[0x25d] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8();
  plVar13 = param_3 + 0x28c;
  FUN_00f0eda4();
  plVar14 = param_3 + 0x2ac;
  FUN_00f017e8(plVar14);
  param_3[0x2ac] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8();
  FUN_00b1ade8();
  FUN_008fcdb8(param_3 + 0x358,param_7);
  plVar9 = param_3 + 0x4e;
  memset(param_3 + 0x35b,0,0x41);
  uVar20 = FUN_00f02540(plVar9);
  if ((uVar20 & 1) != 0) {
    FUN_00f01a4c(plVar9,1);
  }
  (**(code **)(*param_3 + 0x78))(param_3,plVar9,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar2,1);
  FUN_00f023ec(plVar2,plVar1,1);
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00f023ec(plVar2,plVar4,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar5,1);
  FUN_00f023ec(plVar5,plVar6,1);
  FUN_00f023ec(plVar6,plVar7,1);
  FUN_00f023ec(plVar6,plVar8,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar11,1);
  FUN_00f023ec(plVar11,plVar13,1);
  FUN_00f023ec(plVar11,plVar12,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar10,1);
  (**(code **)(*param_3 + 0x78))(param_3,param_3 + 0x237,1);
  (**(code **)(*param_3 + 0x78))(param_3,param_3 + 0x12a,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar14,1);
  FUN_00f023ec(plVar14,param_3 + 0x2bd,1);
  FUN_00f023ec(plVar14,param_3 + 0x2db,1);
  if (*param_8 != 0) {
    lVar22 = 0;
    uVar20 = 0;
    do {
      pcVar21 = operator_new(0x2920);
      FUN_00ab3538(pcVar21,*(long *)(param_8 + 2) + lVar22);
      local_e8 = pcVar21;
      FUN_00ab42b0(param_3 + 0x35b,&local_e8);
      FUN_00f023ec(plVar10,local_e8,1);
      FUN_00ab75d0(0x42480000,0x43700000,0x43700000,local_e8);
      FUN_00ab7510(0x447a0000,local_e8);
      FUN_00ab7628(0x42f00000,local_e8);
      FUN_00ab7638(0x40000000,local_e8);
      uVar20 = uVar20 + 1;
      lVar22 = lVar22 + 0xa0;
    } while (uVar20 < *param_8);
  }
  uVar20 = FUN_0092ea9c();
  FUN_00f0e578(param_3 + 0x106,"circle_button_question");
  uVar19 = *(uint *)((long)param_3 + 0x3dc);
  if ((uVar19 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_3 + 0x3dc) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x5f80;
    FUN_0091ada4(plVar1);
  }
  fVar23 = 1.0;
  if ((uVar20 & 1) == 0) {
    fVar23 = 0.8;
  }
  if ((*(float *)(param_3 + 0x74) != fVar23) || (*(float *)((long)param_3 + 0x3a4) != fVar23)) {
    *(float *)(param_3 + 0x74) = fVar23;
    *(float *)((long)param_3 + 0x3a4) = fVar23;
    FUN_0091ada4(plVar1);
  }
  FUN_00b09144(0xbf800000,plVar1);
  uVar19 = FUN_00e70b88(param_6,&DAT_03210450);
  local_c0 = DAT_03210c64;
  *(uint *)((long)param_3 + 0x3dc) =
       *(uint *)((long)param_3 + 0x3dc) & 0xfffffff8 |
       *(uint *)((long)param_3 + 0x3dc) & 3 | (uVar19 & 1) << 2;
  local_e8 = FUN_00ab4338;
  local_d8[1] = 0;
  local_c8 = (void *)0x0;
  local_d8[0] = 0;
  local_e0 = param_3;
  FUN_009693a0(param_3 + 0x6c,&local_e8);
  FUN_00b0914c(plVar1,1);
  bVar18 = (uVar20 & 1) == 0;
  ppuVar16 = &PTR_s_build___Fonts_Brandon_Light_96_f_02be9c28;
  if (bVar18) {
    ppuVar16 = &PTR_s_build___Fonts_Brandon_Light_80_f_02be9c20;
  }
  ppuVar15 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  if (bVar18) {
    ppuVar15 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  FUN_00f0d378(plVar3,*ppuVar16);
  FUN_00f0d75c(plVar3,param_4);
  *(uint *)((long)param_3 + 0xbf4) = *(uint *)((long)param_3 + 0xbf4) | 0x10;
  FUN_00f0d92c(plVar4,*ppuVar15,&DAT_01bee7fa);
  FUN_00f0dac8(plVar4,1);
  if ((*(uint *)((long)param_3 + 0xd24) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_3 + 0xd24) = *(uint *)((long)param_3 + 0xd24) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar4);
  }
  FUN_00f0d75c(plVar4,param_5);
  *(uint *)((long)param_3 + 0xd24) = *(uint *)((long)param_3 + 0xd24) | 0x10;
  FUN_00f0e548(plVar7,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_clock");
  FUN_00f13f08(0x42180000,0x42180000,plVar7);
  uVar19 = *(uint *)((long)param_3 + 0xf64);
  if ((uVar19 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_3 + 0xf64) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar7);
  }
  fVar23 = (float)FUN_00f0e700(plVar7);
  if ((*(float *)(param_3 + 0x1e4) != fVar23 * 0.5) || (*(float *)((long)param_3 + 0xf24) != 0.0)) {
    *(float *)(param_3 + 0x1e4) = fVar23 * 0.5;
    *(undefined4 *)((long)param_3 + 0xf24) = 0;
    FUN_0091ada4(plVar7);
  }
  local_e8 = (code *)0x3f0000003f000000;
  (**(code **)(param_3[0x1dc] + 0x28))(plVar7,&local_e8);
  ppuVar16 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  if ((uVar20 & 1) == 0) {
    ppuVar16 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78;
  }
  FUN_00f0d378(plVar8,*ppuVar16);
  if ((*(uint *)((long)param_3 + 0x1054) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_3 + 0x1054) = *(uint *)((long)param_3 + 0x1054) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar8);
  }
  fVar23 = (float)FUN_00f0e700(plVar7);
  if ((*(float *)(param_3 + 0x202) != fVar23 + 10.0) || (*(float *)((long)param_3 + 0x1014) != 0.0))
  {
    *(float *)(param_3 + 0x202) = fVar23 + 10.0;
    *(undefined4 *)((long)param_3 + 0x1014) = 0;
    FUN_0091ada4(plVar8);
  }
  local_e8 = (code *)0x3f00000000000000;
  (**(code **)(param_3[0x1fa] + 0x28))(plVar8,&local_e8);
  ppuVar16 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  if ((uVar20 & 1) == 0) {
    ppuVar16 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  FUN_00f0d378(param_3 + 0x237,*ppuVar16);
  *(uint *)((long)param_3 + 0x123c) = *(uint *)((long)param_3 + 0x123c) & 0xfffffffb;
  FUN_00f0e548(plVar13,PTR_s_build___MenuPartsCommon_tga_02be3530,"circle_button_fill");
  FUN_00f0e670(plVar13,&DAT_01bee7f6,2);
  uVar19 = *(uint *)((long)param_3 + 0x14e4);
  if ((uVar19 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_3 + 0x14e4) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar13);
  }
  FUN_00f0eea0(plVar13,FUN_00ab4350,param_3);
  fVar23 = (float)FUN_00f0e700(plVar13);
  fVar23 = 560.0 / fVar23;
  if ((*(float *)(param_3 + 0x295) != fVar23) || (*(float *)((long)param_3 + 0x14ac) != fVar23)) {
    *(float *)(param_3 + 0x295) = fVar23;
    *(float *)((long)param_3 + 0x14ac) = fVar23;
    FUN_0091ada4(plVar13);
  }
  FUN_00f0e548(plVar12,PTR_s_build___MenuPartsCommon_tga_02be3530,"circle_deserter_icon_backdrop");
  FUN_00f13f08(0x44098000,0x44098000,plVar12);
  uVar19 = *(uint *)((long)param_3 + 0x13f4);
  if ((uVar19 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_3 + 0x13f4) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x6600;
    FUN_0091ada4(plVar12);
  }
  thunk_FUN_00e7051c(&local_e8,param_6);
  FUN_008fcdb8(local_d8,&DAT_0320ffa8);
  local_c0 = 1;
  local_bc = 0x41a00000;
  FUN_009c82b4(param_3 + 0x148,&local_e8);
  if ((local_d8[0] & 1) != 0) {
    operator_delete(local_c8);
  }
  if (local_e0 != (long *)0x0) {
    operator_delete__(local_e0);
    local_e8 = (code *)0x0;
    local_e0 = (long *)0x0;
  }
  param_3[0x14d] = (long)plVar1;
  param_3[0x157] = 0x41a00000;
  *(undefined4 *)(param_3 + 0x15c) = 3;
  param_3[0x159] = 0x447a00003deb851f;
  *(undefined1 *)((long)param_3 + 0xae4) = 1;
  FUN_00f0e548(param_3 + 0x2bd,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  *(uint *)((long)param_3 + 0x166c) = *(uint *)((long)param_3 + 0x166c) & 0xfffffffb;
  uVar24 = FUN_00f0eac0(plVar13);
  *(undefined4 *)(param_3 + 0x357) = uVar24;
  FUN_00f13f08(param_1,param_2,param_3);
  FUN_00ab43c0(param_3);
  if (*(long *)(lVar17 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

