// functions/00b6f — 21 functions
#include "libGameKindred.h"




void thunk_FUN_00b6f038(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0093d888();
  if ((uVar1 & 1) != 0) {
    FUN_00900cb8();
    uVar1 = FUN_0093d8f8();
    if ((uVar1 & 1) == 0) {
      uVar1 = FUN_0093d8d0();
      if ((uVar1 & 1) != 0) {
        FUN_00ec5e88(0,&PTR_PTR_02be9be8);
        return;
      }
    }
    else {
      *(uint *)(param_1 + 0x22914) = *(uint *)(param_1 + 0x22914) ^ 4;
    }
  }
  return;
}




void FUN_00b6f028(long param_1)

{
  FUN_00b6d9e8(param_1,param_1 + 0x1d0,0,0);
  return;
}




void FUN_00b6f038(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0093d888();
  if ((uVar1 & 1) != 0) {
    FUN_00900cb8();
    uVar1 = FUN_0093d8f8();
    if ((uVar1 & 1) == 0) {
      uVar1 = FUN_0093d8d0();
      if ((uVar1 & 1) != 0) {
        FUN_00ec5e88(0,&PTR_PTR_02be9be8);
        return;
      }
    }
    else {
      *(uint *)(param_1 + 0x22914) = *(uint *)(param_1 + 0x22914) ^ 4;
    }
  }
  return;
}




void FUN_00b6f0a0(void)

{
  ulong uVar1;
  
  uVar1 = FUN_0093d8d0();
  if ((uVar1 & 1) != 0) {
    FUN_00ec5e88(0,&PTR_PTR_02be9be8);
    return;
  }
  return;
}




void FUN_00b6f0cc(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_00f04924(param_2);
  if (iVar1 == 0) {
    uVar2 = FUN_0093d8d0();
    if ((uVar2 & 1) == 0) {
      return;
    }
    uVar3 = 0;
  }
  else {
    iVar1 = FUN_00f04924(param_2);
    if ((iVar1 != 1) || (uVar2 = FUN_0093d8f8(), (uVar2 & 1) == 0)) {
      return;
    }
    uVar3 = 1;
  }
  FUN_00ec5e88(uVar3,&PTR_PTR_02be9be8);
  return;
}




void FUN_00b6f13c(void)

{
  ulong uVar1;
  
  uVar1 = FUN_0093d8f8();
  if ((uVar1 & 1) != 0) {
    FUN_00ec5e88(1,&PTR_PTR_02be9be8);
    return;
  }
  return;
}




void FUN_00b6f168(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  byte local_50 [8];
  ulong local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar4 = FUN_009580b8();
  if (*(char *)(lVar4 + 0x568c) != '\0') goto LAB_00b6f2a4;
  FUN_008fcdb8(local_50,param_2);
  FUN_00cb4120(local_50);
  uVar6 = (ulong)(local_50[0] >> 1);
  uVar1 = uVar6;
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 8) {
    iVar3 = FUN_0090d610(local_50,0,0xffffffffffffffff,"overview",8);
    if (iVar3 != 0) {
      uVar6 = (ulong)(local_50[0] >> 1);
      goto LAB_00b6f208;
    }
    uVar5 = 0;
LAB_00b6f28c:
    FUN_00b6ee78(param_1,uVar5);
  }
  else {
LAB_00b6f208:
    uVar1 = uVar6;
    if ((local_50[0] & 1) != 0) {
      uVar1 = local_48;
    }
    if (uVar1 == 9) {
      iVar3 = FUN_0090d610(local_50,0,0xffffffffffffffff,"ranked5v5",9);
      if (iVar3 == 0) {
        uVar5 = 1;
        goto LAB_00b6f28c;
      }
      uVar6 = (ulong)(local_50[0] >> 1);
    }
    if ((local_50[0] & 1) != 0) {
      uVar6 = local_48;
    }
    if ((uVar6 == 9) &&
       (iVar3 = FUN_0090d610(local_50,0,0xffffffffffffffff,"ranked3v3",9), iVar3 == 0)) {
      uVar5 = 2;
      goto LAB_00b6f28c;
    }
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
LAB_00b6f2a4:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b6f2cc(long param_1,uint param_2)

{
  FUN_00b68e30(param_1 + 0x8ae8,param_2 & 1);
  return;
}




void FUN_00b6f2dc(long param_1)

{
  FUN_00ac9484(param_1 + 0x23560,0);
  return;
}




void FUN_00b6f2f0(void)

{
  FUN_008fa130(0,0);
  thunk_FUN_00ecb45c(1);
  return;
}




void FUN_00b6f310(undefined8 *param_1)

{
  FUN_00b89cd8();
  FUN_00948cd8(param_1 + 0x19);
  *param_1 = &PTR_FUN_027e56e8;
  param_1[0x19] = &PTR_FUN_027e5858;
  FUN_00f13ca4(param_1 + 0x1c);
  FUN_00f11234(param_1 + 0x33);
  FUN_00ecfd6c(param_1 + 0x67,0);
  FUN_00f017e8(param_1 + 0x10e);
  param_1[0x10e] = &PTR_FUN_027c1f80;
  FUN_00f0e4a8(param_1 + 0x11f);
  FUN_00f0e4a8(param_1 + 0x13d);
  FUN_00f0e4a8(param_1 + 0x15b);
  FUN_00f0e4a8(param_1 + 0x179);
  FUN_00f0d160(param_1 + 0x197);
  FUN_00f0d160(param_1 + 0x1bd);
  FUN_00af0110(param_1 + 0x1e3);
  FUN_00f0d160(param_1 + 0x259);
  FUN_00ab6c24(param_1 + 0x27f,0);
  FUN_00b15e58(param_1 + 0x537,0);
  FUN_00b6f3f4(param_1);
  FUN_00b6f88c(param_1);
  return;
}




void FUN_00b6f3f4(long *param_1)

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
  undefined **ppuVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  code *local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar12 = tpidr_el0;
  local_68 = *(long *)(lVar12 + 0x28);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x1c,1);
  plVar1 = param_1 + 0x179;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x11f,1);
  plVar2 = param_1 + 0x13d;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  plVar3 = param_1 + 0x15b;
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  plVar4 = param_1 + 0x33;
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  plVar5 = param_1 + 0x67;
  FUN_00f023ec(plVar4,plVar5,1);
  plVar6 = param_1 + 0x10e;
  FUN_00ed026c(plVar5,plVar6,1);
  plVar7 = param_1 + 0x197;
  FUN_00f023ec(plVar6,plVar7,1);
  plVar8 = param_1 + 0x1bd;
  FUN_00f023ec(plVar6,plVar8,1);
  plVar9 = param_1 + 0x1e3;
  FUN_00f023ec(plVar6,plVar9,1);
  plVar6 = param_1 + 0x259;
  FUN_00f023ec(plVar9,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x27f,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x537,1);
  *(uint *)((long)param_1 + 0x164) = *(uint *)((long)param_1 + 0x164) | 0x10;
  FUN_00f112f0(plVar4,1);
  FUN_00ed04d8(plVar5,0,1);
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"corner_shadow");
  uVar11 = *(uint *)((long)param_1 + 0xc4c);
  if ((uVar11 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0xc4c) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x5f80;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0e670(plVar1,&DAT_01bee7f6,2);
  FUN_00f0e548(param_1 + 0x11f,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"menu_brushstroke_vert_r");
  FUN_00f0e670(plVar2,&DAT_01bee7f6,2);
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"menu_brushstroke_vert_l");
  FUN_00f0e670(plVar3,&DAT_01bee7f6,2);
  FUN_00f0d378(plVar7,PTR_s_build___Fonts_NorthwoodHigh_Regu_02be9ce8);
  uVar11 = *(uint *)((long)param_1 + 0xd3c);
  if ((uVar11 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0xd3c) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x5280;
    FUN_0091ada4(plVar7);
  }
  uVar13 = FUN_0092ea9c();
  ppuVar10 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  if ((uVar13 & 1) == 0) {
    ppuVar10 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  FUN_00f0d92c(plVar8,*ppuVar10,&DAT_01bee7fa);
  FUN_00f0dac8(plVar8,0);
  FUN_00f0dad0(0x446b3334,plVar8,1);
  FUN_00af0228(plVar9,8);
  FUN_00f13f08(0x45000000,0x45000000,plVar9);
  if ((*(float *)(param_1 + 0x1ec) != 0.75) || (*(float *)((long)param_1 + 0xf64) != 0.75)) {
    lVar14 = NEON_fmov(0x3f400000,4);
    param_1[0x1ec] = lVar14;
    FUN_0091ada4(plVar9);
  }
  FUN_00f0d92c(plVar6,PTR_s_build___Fonts_NorthwoodHigh_Regu_02be9ce8,&DAT_01bb5e64);
  uVar11 = *(uint *)((long)param_1 + 0x134c);
  if ((uVar11 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x134c) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x7280;
    FUN_0091ada4(plVar6);
  }
  if ((*(float *)(param_1 + 0x263) != 0.5) || (*(float *)((long)param_1 + 0x131c) != 0.5)) {
    param_1[0x263] = 0x3f0000003f000000;
    FUN_0091ada4(plVar6);
  }
  FUN_00ab703c(0x42800000,0x42c80000,0x447a0000,param_1 + 0x27f,0,&DAT_03210450,&DAT_01bee7fa,
               &DAT_03218ef8,0);
  local_70 = DAT_03210c64;
  local_98 = FUN_00b7069c;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 1;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 0x280,&local_98);
  lVar14 = NEON_fmov(0x41c00000,4);
  param_1[0x28a] = lVar14;
  if ((*(float *)(param_1 + 0x540) != 2.5) || (*(float *)((long)param_1 + 0x2a04) != 2.5)) {
    lVar14 = NEON_fmov(0x40200000,4);
    param_1[0x540] = lVar14;
    FUN_0091ada4(param_1 + 0x537);
  }
  if (*(long *)(lVar12 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b6f88c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_68;
  float local_64;
  undefined8 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_00f00298(&local_64,&local_68);
  fVar4 = local_68;
  FUN_00f13f08(local_64,local_68,param_1 + 0xe0);
  lVar1 = param_1 + 0x198;
  if ((*(float *)(param_1 + 0x1d8) != 0.0) || (*(float *)(param_1 + 0x1dc) != 0.0)) {
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    FUN_0091ada4(lVar1);
  }
  local_60 = 0;
  (**(code **)(*(long *)(param_1 + 0x198) + 0x28))(lVar1,&local_60);
  fVar5 = local_64;
  lVar2 = param_1 + 0x13f8;
  fVar6 = local_68 + -100.0;
  FUN_00f13e54(lVar2);
  FUN_00f13f08(fVar5,(fVar6 - fVar4 * 0.5) + -40.0,lVar1);
  lVar1 = param_1 + 0x8f8;
  FUN_00f13f08(0x44900000,local_68,lVar1);
  if ((*(float *)(param_1 + 0x938) != local_64 * 0.5) || (*(float *)(param_1 + 0x93c) != 0.0)) {
    *(float *)(param_1 + 0x938) = local_64 * 0.5;
    *(undefined4 *)(param_1 + 0x93c) = 0;
    FUN_0091ada4(lVar1);
  }
  local_60 = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x8f8) + 0x28))(lVar1,&local_60);
  fVar4 = local_64 * 0.5 + -576.0;
  if ((*(float *)(param_1 + 0xb18) != fVar4) || (*(float *)(param_1 + 0xb1c) != 0.0)) {
    *(float *)(param_1 + 0xb18) = fVar4;
    *(undefined4 *)(param_1 + 0xb1c) = 0;
    FUN_0091ada4(param_1 + 0xad8);
  }
  local_60 = 0x3f800000;
  (**(code **)(*(long *)(param_1 + 0xad8) + 0x28))(param_1 + 0xad8,&local_60);
  fVar4 = local_64 * 0.5 + 576.0;
  if ((*(float *)(param_1 + 0xa28) != fVar4) || (*(float *)(param_1 + 0xa2c) != 0.0)) {
    *(float *)(param_1 + 0xa28) = fVar4;
    *(undefined4 *)(param_1 + 0xa2c) = 0;
    FUN_0091ada4(param_1 + 0x9e8);
  }
  local_60 = 0;
  (**(code **)(*(long *)(param_1 + 0x9e8) + 0x28))(param_1 + 0x9e8,&local_60);
  lVar1 = param_1 + 0xbc8;
  if ((*(float *)(param_1 + 0xc08) != local_64 * 0.5) ||
     (*(float *)(param_1 + 0xc0c) != local_68 * 0.5)) {
    *(float *)(param_1 + 0xc08) = local_64 * 0.5;
    *(float *)(param_1 + 0xc0c) = local_68 * 0.5;
    FUN_0091ada4(lVar1);
  }
  local_60 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0xbc8) + 0x28))(lVar1,&local_60);
  FUN_00f13f08(local_64,local_64,lVar1);
  if ((*(float *)(param_1 + 0xcf8) != 0.0) || (*(float *)(param_1 + 0xcfc) != 205.0)) {
    *(undefined8 *)(param_1 + 0xcf8) = 0x434d000000000000;
    FUN_0091ada4(param_1 + 0xcb8);
  }
  local_60 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0xcb8) + 0x28))(param_1 + 0xcb8,&local_60);
  local_60 = 0x3f0000003f000000;
  if ((*(float *)(param_1 + 0xf58) != 0.0) || (*(float *)(param_1 + 0xf5c) != local_68 * 0.4)) {
    *(undefined4 *)(param_1 + 0xf58) = 0;
    *(float *)(param_1 + 0xf5c) = local_68 * 0.4;
    FUN_0091ada4(param_1 + 0xf18);
  }
  (**(code **)(*(long *)(param_1 + 0xf18) + 0x28))(param_1 + 0xf18,&local_60);
  if ((*(float *)(param_1 + 0x1438) != local_64 * 0.5) ||
     (*(float *)(param_1 + 0x143c) != local_68 + -100.0)) {
    *(float *)(param_1 + 0x1438) = local_64 * 0.5;
    *(float *)(param_1 + 0x143c) = local_68 + -100.0;
    FUN_0091ada4(lVar2);
  }
  local_60 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x13f8) + 0x28))(lVar2,&local_60);
  lVar1 = param_1 + 0x29b8;
  fVar6 = local_64 * 0.5;
  fVar4 = (float)FUN_00f01fcc(lVar1,0,0,1,1);
  fVar6 = fVar6 - fVar4 * 0.5;
  fVar5 = local_68 + -100.0;
  fVar4 = local_68;
  FUN_00f01fcc(lVar1,0,0,1,1);
  fVar5 = fVar5 - fVar4 * 0.5;
  if ((*(float *)(param_1 + 0x29f8) != fVar6) || (*(float *)(param_1 + 0x29fc) != fVar5)) {
    *(float *)(param_1 + 0x29f8) = fVar6;
    *(float *)(param_1 + 0x29fc) = fVar5;
    FUN_0091ada4(lVar1);
  }
  local_60 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x29b8) + 0x28))(lVar1,&local_60);
  lVar1 = param_1 + 0xde8;
  if ((*(float *)(param_1 + 0xe28) != 0.0) || (*(float *)(param_1 + 0xe2c) != local_68 * 0.7)) {
    *(undefined4 *)(param_1 + 0xe28) = 0;
    *(float *)(param_1 + 0xe2c) = local_68 * 0.7;
    FUN_0091ada4(lVar1);
  }
  local_60 = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 0xde8) + 0x28))(lVar1,&local_60);
  fVar5 = *(float *)(param_1 + 0x8b0);
  fVar4 = local_64;
  if (fVar5 != local_64 * 0.5) {
    *(float *)(param_1 + 0x8b0) = local_64 * 0.5;
    FUN_0091ada4(param_1 + 0x870);
    fVar4 = local_64;
  }
  fVar6 = *(float *)(param_1 + 0xe2c);
  FUN_00f0d4e0(lVar1);
  FUN_00ed02d8(fVar4,fVar6 + fVar5,param_1 + 0x338);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b6fd34(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_027e56e8;
  param_1[0x19] = &PTR_FUN_027e5858;
  param_1[0x537] = &PTR_FUN_027d47d0;
  lVar2 = -0x4b0;
  puVar1 = param_1 + 0x5c6;
  do {
    *puVar1 = &PTR_FUN_028266f0;
    puVar1[0x17] = &PTR_FUN_02826850;
    FUN_00f0a79c(puVar1 + 0x1a);
    FUN_00f13d08(puVar1);
    lVar2 = lVar2 + 0xf0;
    puVar1 = puVar1 + -0x1e;
  } while (lVar2 != 0);
  FUN_00f13d08(param_1 + 0x537);
  FUN_009c7fa8(param_1 + 0x27f);
  FUN_00f0d3a4(param_1 + 0x259);
  FUN_00af8c0c(param_1 + 0x1e3);
  FUN_00f0d3a4(param_1 + 0x1bd);
  FUN_00f0d3a4(param_1 + 0x197);
  param_1[0x179] = &PTR_FUN_028266f0;
  param_1[400] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x193);
  FUN_00f13d08(param_1 + 0x179);
  param_1[0x15b] = &PTR_FUN_028266f0;
  param_1[0x172] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x175);
  FUN_00f13d08(param_1 + 0x15b);
  param_1[0x13d] = &PTR_FUN_028266f0;
  param_1[0x154] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x157);
  FUN_00f13d08(param_1 + 0x13d);
  param_1[0x11f] = &PTR_FUN_028266f0;
  param_1[0x136] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x139);
  FUN_00f13d08(param_1 + 0x11f);
  FUN_00f01868(param_1 + 0x10e);
  FUN_00ed00e0(param_1 + 0x67);
  FUN_00f13d08(param_1 + 0x33);
  FUN_00f13d08(param_1 + 0x1c);
  FUN_00948d58(param_1 + 0x19);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b6feb0(long param_1)

{
  FUN_00b6fd34(param_1 + -200);
  return;
}




void FUN_00b6feb8(void *param_1)

{
  FUN_00b6fd34();
  operator_delete(param_1);
  return;
}




void FUN_00b6fedc(long param_1)

{
  FUN_00b6fd34((void *)(param_1 + -200));
  operator_delete((void *)(param_1 + -200));
  return;
}




void FUN_00b6ff04(long param_1)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = FUN_009b8d90();
  bVar2 = *(byte *)(lVar4 + 0xe1b8);
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(lVar4 + 0xe1c0);
  }
  if (((uVar1 == 0x12) &&
      (iVar3 = FUN_0090d610((byte *)(lVar4 + 0xe1b8),0,0xffffffffffffffff,"endOfSeasonRewards",0x12)
      , iVar3 == 0)) && ((*(uint *)(param_1 + 0x2a3c) >> 2 & 1) != 0)) {
    *(uint *)(param_1 + 0x2a3c) = *(uint *)(param_1 + 0x2a3c) & 0xfffffffb;
  }
  return;
}




void FUN_00b6ff7c(void)

{
  return;
}




void FUN_00b6ff80(undefined8 param_1,uint param_2)

{
  FUN_00b6ff88(param_1,param_2 & 1);
  return;
}




void FUN_00b6ff88(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(auStack_3c,auStack_40);
  if ((param_2 & 1) == 0) {
    *(uint *)(param_1 + 0xf9c) = *(uint *)(param_1 + 0xf9c) & 0xfffffffb;
    lVar2 = DAT_03210d00;
    uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar3 == 0xffff) {
      puVar4 = (ushort *)0x0;
    }
    else {
      puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
      if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = *puVar4;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efdd74(puVar4);
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    FUN_00efcac4(0x3f000000,puVar4);
    FUN_00efddc4(0,puVar4);
    FUN_00efcb24(puVar4,FUN_0091aa80);
    FUN_00f01980(param_1 + 0x198);
    FUN_00f022a0(param_1 + 0x198,puVar4);
  }
  else {
    *(uint *)(param_1 + 0xf9c) = *(uint *)(param_1 + 0xf9c) | 4;
    *(uint *)(param_1 + 0x147c) = *(uint *)(param_1 + 0x147c) | 4;
    *(uint *)(param_1 + 0x2a3c) = *(uint *)(param_1 + 0x2a3c) & 0xfffffffb;
    FUN_00b16600(param_1 + 0x29b8);
    lVar2 = DAT_03210d00;
    uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar3 == 0xffff) {
      puVar4 = (ushort *)0x0;
    }
    else {
      puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
      if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = *puVar4;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efdd74(puVar4);
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    FUN_00efcac4(0x3f000000,puVar4);
    FUN_00efddc4(0x3f800000,puVar4);
    FUN_00efcb24(puVar4,FUN_00a269a4);
    FUN_00f01980(param_1 + 0x198);
    FUN_00f022a0(param_1 + 0x198,puVar4);
    FUN_00f01980(param_1 + 0x338);
    if (*(float *)(param_1 + 0x37c) != 0.0) {
      *(undefined4 *)(param_1 + 0x37c) = 0;
      FUN_0091ada4(param_1 + 0x338);
    }
    FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/sfx_season_sun_fly_dial.mp3",0,0);
    FUN_00b70288(param_1);
    FUN_00b70554(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

