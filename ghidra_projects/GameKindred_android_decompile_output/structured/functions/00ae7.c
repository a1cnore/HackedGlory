// functions/00ae7 — 13 functions
#include "libGameKindred.h"




void FUN_00ae7080(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  undefined8 local_a0;
  long local_98;
  
  lVar11 = tpidr_el0;
  local_98 = *(long *)(lVar11 + 0x28);
  FUN_00f017e8();
  plVar1 = param_1 + 0x11;
  *param_1 = (long)&PTR_FUN_027d8e88;
  FUN_00f0d160(plVar1);
  plVar2 = param_1 + 0x37;
  FUN_00abaee8(plVar2,0);
  plVar3 = param_1 + 0xf6;
  FUN_00f13ca4(plVar3);
  plVar4 = param_1 + 0x10d;
  FUN_00f0e4a8(plVar4);
  plVar5 = param_1 + 0x12d;
  *(undefined2 *)((long)param_1 + 0x964) = 0;
  *(undefined1 *)((long)param_1 + 0x966) = 0;
  param_1[299] = -1;
  *(undefined4 *)(param_1 + 300) = 0xffffffff;
  FUN_00f0e4a8(plVar5);
  plVar6 = param_1 + 0x14b;
  FUN_00f0e4a8(plVar6);
  plVar7 = param_1 + 0x169;
  FUN_00f13ca4(plVar7);
  lVar12 = 0;
  do {
    FUN_00f0e4a8((long)param_1 + lVar12 + 0xc00);
    lVar12 = lVar12 + 0xf0;
  } while (lVar12 != 0x2d0);
  plVar8 = param_1 + 0x1da;
  FUN_00ae8184(plVar8);
  *(undefined2 *)(param_1 + 0x264) = 0x100;
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  local_a0 = 0x3f00000000000000;
  (**(code **)(*param_1 + 0x28))(param_1,&local_a0);
  FUN_00f0e548(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar4,&DAT_01bee7f6,2);
  uVar10 = *(uint *)((long)param_1 + 0x8ec);
  if ((uVar10 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x8ec) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x1980;
    FUN_0091ada4(plVar4);
  }
  if ((*(float *)(param_1 + 0x117) != 0.0) || (*(float *)((long)param_1 + 0x8bc) != 0.5)) {
    param_1[0x117] = 0x3f00000000000000;
    FUN_0091ada4(plVar4);
  }
  FUN_00f0e548(plVar6,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  local_a0 = CONCAT44(local_a0._4_4_,0xffe0e0e0);
  FUN_00f0e670(plVar6,&local_a0,2);
  uVar10 = *(uint *)((long)param_1 + 0xadc);
  if ((uVar10 & 0x7f80) != 0x1300) {
    *(uint *)((long)param_1 + 0xadc) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x1300;
    FUN_0091ada4(plVar6);
  }
  FUN_00f0e540(plVar5,PTR_s_build___MenuPartsCommon_tga_02be3530);
  FUN_00f0e670(plVar5,&DAT_01bee7fa,2);
  if ((*(float *)(param_1 + 0x1b) != 0.0) || (*(float *)((long)param_1 + 0xdc) != 0.5)) {
    param_1[0x1b] = 0x3f00000000000000;
    FUN_0091ada4(plVar1);
  }
  if ((*(float *)(param_1 + 0x100) != 0.0) || (*(float *)((long)param_1 + 0x804) != 0.5)) {
    param_1[0x100] = 0x3f00000000000000;
    FUN_0091ada4(plVar3);
  }
  *(uint *)((long)param_1 + 0x834) = *(uint *)((long)param_1 + 0x834) | 0x10;
  FUN_00f0e578(param_1 + 0xd2,"generic_x");
  *(uint *)((long)param_1 + 0x534) = *(uint *)((long)param_1 + 0x534) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x624) = *(uint *)((long)param_1 + 0x624) & 0xfffffffb;
  FUN_00b09144(0x3ecccccd,plVar2);
  lVar12 = NEON_fmov(0xc1200000,4);
  param_1[0x42] = lVar12;
  FUN_00b0914c(plVar2,1);
  lVar12 = 0;
  iVar13 = -1;
  *(uint *)((long)param_1 + 0xbcc) = *(uint *)((long)param_1 + 0xbcc) & 0xfffffffb;
  do {
    lVar9 = (long)param_1 + lVar12 + 0xc00;
    FUN_00f023ec(plVar7,lVar9,1);
    FUN_00f0e548(lVar9,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
    FUN_00f13f08(0x41f00000,0x40400000,lVar9);
    uVar10 = *(uint *)((long)param_1 + lVar12 + 0xc84);
    if ((uVar10 & 0x7f80) != 0x2600) {
      *(uint *)((long)param_1 + lVar12 + 0xc84) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x2600;
      FUN_0091ada4(lVar9);
    }
    if ((*(float *)((long)param_1 + lVar12 + 0xc40) != 0.0) ||
       (*(float *)((long)param_1 + lVar12 + 0xc44) != (float)iVar13 * 6.0)) {
      *(undefined4 *)((long)param_1 + lVar12 + 0xc40) = 0;
      *(float *)((long)param_1 + lVar12 + 0xc44) = (float)iVar13 * 6.0;
      FUN_0091ada4(lVar9);
    }
    local_a0 = 0x3f0000003f000000;
    (**(code **)(*(long *)((long)param_1 + lVar12 + 0xc00) + 0x28))(lVar9,&local_a0);
    lVar12 = lVar12 + 0xf0;
    iVar13 = iVar13 + 1;
  } while (lVar12 != 0x2d0);
  if ((*(float *)(param_1 + 0x1e4) != 0.0) || (*(float *)((long)param_1 + 0xf24) != 0.5)) {
    param_1[0x1e4] = 0x3f00000000000000;
    FUN_0091ada4(plVar8);
  }
  *(uint *)((long)param_1 + 0xf54) = *(uint *)((long)param_1 + 0xf54) & 0xfffffffb;
  if (*(long *)(lVar11 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ae7558(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_027d8e88;
  FUN_00f04710(param_1 + 0x37);
  param_1[0x1da] = &PTR_FUN_027d9088;
  param_1[0x245] = &PTR_FUN_028266f0;
  param_1[0x25c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x25f);
  FUN_00f13d08(param_1 + 0x245);
  param_1[0x227] = &PTR_FUN_028266f0;
  param_1[0x23e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x241);
  FUN_00f13d08(param_1 + 0x227);
  param_1[0x209] = &PTR_FUN_028266f0;
  param_1[0x220] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x223);
  FUN_00f13d08(param_1 + 0x209);
  param_1[0x1eb] = &PTR_FUN_028266f0;
  param_1[0x202] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x205);
  FUN_00f13d08(param_1 + 0x1eb);
  FUN_00f01868(param_1 + 0x1da);
  lVar1 = 0;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0xde0) = &PTR_FUN_028266f0;
    *(undefined ***)((long)param_1 + lVar1 + 0xe98) = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar1 + 0xeb0);
    FUN_00f13d08((long)param_1 + lVar1 + 0xde0);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != -0x2d0);
  FUN_00f13d08(param_1 + 0x169);
  param_1[0x14b] = &PTR_FUN_028266f0;
  param_1[0x162] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x165);
  FUN_00f13d08(param_1 + 0x14b);
  param_1[0x12d] = &PTR_FUN_028266f0;
  param_1[0x144] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x147);
  FUN_00f13d08(param_1 + 0x12d);
  param_1[0x10d] = &PTR_FUN_028266f0;
  param_1[0x124] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x127);
  FUN_00f13d08(param_1 + 0x10d);
  FUN_00f13d08(param_1 + 0xf6);
  param_1[0xd2] = &PTR_FUN_028266f0;
  param_1[0xe9] = &PTR_FUN_02826850;
  param_1[0x37] = &PTR_FUN_027d5388;
  FUN_00f0a79c(param_1 + 0xec);
  FUN_00f13d08(param_1 + 0xd2);
  param_1[0xb4] = &PTR_FUN_028266f0;
  param_1[0xcb] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xce);
  FUN_00f13d08(param_1 + 0xb4);
  param_1[0x96] = &PTR_FUN_028266f0;
  param_1[0xad] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xb0);
  FUN_00f13d08(param_1 + 0x96);
  FUN_00f01868(param_1 + 0x85);
  FUN_009c825c(param_1 + 0x37);
  FUN_00f0d3a4(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00ae777c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d9088;
  param_1[0x6b] = &PTR_FUN_028266f0;
  param_1[0x82] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x85);
  FUN_00f13d08(param_1 + 0x6b);
  param_1[0x4d] = &PTR_FUN_028266f0;
  param_1[100] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x67);
  FUN_00f13d08(param_1 + 0x4d);
  param_1[0x2f] = &PTR_FUN_028266f0;
  param_1[0x46] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x49);
  FUN_00f13d08(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_028266f0;
  param_1[0x28] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2b);
  FUN_00f13d08(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00ae7834(void *param_1)

{
  FUN_00ae7558();
  operator_delete(param_1);
  return;
}




void FUN_00ae7858(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,byte param_5
                 ,undefined8 param_6,byte param_7)

{
  FUN_00f0d75c(param_1 + 0x88);
  *(undefined1 *)(param_1 + 0x964) = 0;
  *(undefined4 *)(param_1 + 0x958) = param_3;
  *(undefined4 *)(param_1 + 0x95c) = param_4;
  FUN_00ae7dfc(param_1);
  *(undefined8 *)(param_1 + 0x1318) = param_6;
  *(byte *)(param_1 + 0x1320) = param_5 & 1;
  *(byte *)(param_1 + 0x966) = param_7 & 1;
  *(uint *)(param_1 + 0x23c) = *(uint *)(param_1 + 0x23c) | 4;
  return;
}




void FUN_00ae78d0(long param_1,undefined4 param_2,undefined4 param_3,byte param_4)

{
  *(undefined4 *)(param_1 + 0x958) = param_2;
  *(byte *)(param_1 + 0x964) = param_4 & 1;
  *(undefined4 *)(param_1 + 0x95c) = param_3;
  FUN_00ae7dfc();
  return;
}




void FUN_00ae78e4(undefined8 param_1,undefined8 param_2,float param_3,float param_4,long param_5,
                 uint param_6)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 local_98;
  void *local_90;
  ulong local_88 [2];
  void *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  *(char *)(param_5 + 0x1321) = (char)(param_6 & 1);
  *(uint *)(param_5 + 0x834) =
       *(uint *)(param_5 + 0x834) & 0xffffffe0 |
       *(uint *)(param_5 + 0x834) & 0xf | (~param_6 & 1) << 4;
  *(uint *)(param_5 + 0x8ec) =
       *(uint *)(param_5 + 0x8ec) & 0xfffffff8 |
       *(uint *)(param_5 + 0x8ec) & 3 | (~param_6 & 1) << 2;
  *(uint *)(param_5 + 0xadc) =
       *(uint *)(param_5 + 0xadc) & 0xfffffff8 | *(uint *)(param_5 + 0xadc) & 3 | (param_6 & 1) << 2
  ;
  uVar4 = FUN_0092ea9c();
  lVar1 = param_5 + 0x88;
  ppuVar2 = &PTR_s_build___Fonts_Brandon_Light_60_f_02be9c18;
  if ((uVar4 & 1) == 0) {
    ppuVar2 = &PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10;
  }
  FUN_00f0d378(lVar1,*ppuVar2);
  FUN_00f13f08(param_1,param_2,param_5 + 0x868);
  FUN_00f13f08(param_3 + (float)param_1,param_4 + (float)param_2,param_5 + 0x7b0);
  if ((*(float *)(param_5 + 0x9a8) != 30.0) || (*(float *)(param_5 + 0x9ac) != 0.0)) {
    *(undefined8 *)(param_5 + 0x9a8) = 0x41f00000;
    FUN_0091ada4(param_5 + 0x968);
  }
  local_88[0] = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_5 + 0x968) + 0x28))(param_5 + 0x968,local_88);
  fVar6 = (float)FUN_00f13e54(param_5 + 0x7b0);
  FUN_00f0db64(fVar6 + -316.0,0,0x3f800000,lVar1);
  if ((*(float *)(param_5 + 200) != 66.0) || (*(float *)(param_5 + 0xcc) != 0.0)) {
    *(undefined8 *)(param_5 + 200) = 0x42840000;
    FUN_0091ada4(lVar1);
  }
  local_88[0] = 0x3f00000000000000;
  (**(code **)(*(long *)(param_5 + 0x88) + 0x28))(lVar1,local_88);
  local_88[0] = 0;
  local_88[1] = 0;
  local_78 = (void *)0x0;
  fVar6 = (float)param_1 + -50.0;
  uVar5 = FUN_00f08be8(param_5 + 0x158);
  thunk_FUN_00e7051c(&local_98,uVar5);
  FUN_00e70a24(&local_98,local_88);
  if ((*(float *)(param_5 + 0xb88) != fVar6) || (*(float *)(param_5 + 0xb8c) != 0.0)) {
    *(float *)(param_5 + 0xb88) = fVar6;
    *(undefined4 *)(param_5 + 0xb8c) = 0;
    FUN_0091ada4(param_5 + 0xb48);
  }
  local_70 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_5 + 0xb48) + 0x28))(param_5 + 0xb48,&local_70);
  if ((*(byte *)(param_5 + 0xbcc) & 4) != 0) {
    fVar6 = fVar6 + -56.0;
  }
  if ((*(float *)(param_5 + 0x1f8) != fVar6) || (*(float *)(param_5 + 0x1fc) != 0.0)) {
    *(float *)(param_5 + 0x1f8) = fVar6;
    *(undefined4 *)(param_5 + 0x1fc) = 0;
    FUN_0091ada4(param_5 + 0x1b8);
  }
  fVar6 = (float)param_2 * 0.5 + -2.0;
  if ((*(float *)(param_5 + 0xa98) != 0.0) || (*(float *)(param_5 + 0xa9c) != fVar6)) {
    *(undefined4 *)(param_5 + 0xa98) = 0;
    *(float *)(param_5 + 0xa9c) = fVar6;
    FUN_0091ada4(param_5 + 0xa58);
  }
  FUN_00f13f08(param_1,0x40000000,param_5 + 0xa58);
  FUN_00ae7c20(param_1,param_2,param_5 + 0xed0);
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = 0;
    local_90 = (void *)0x0;
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ae7be4(long param_1,uint param_2)

{
  *(char *)(param_1 + 0x1321) = (char)(param_2 & 1);
  *(uint *)(param_1 + 0x834) =
       *(uint *)(param_1 + 0x834) & 0xffffffe0 |
       *(uint *)(param_1 + 0x834) & 0xf | (~param_2 & 1) << 4;
  *(uint *)(param_1 + 0x8ec) =
       *(uint *)(param_1 + 0x8ec) & 0xfffffff8 |
       *(uint *)(param_1 + 0x8ec) & 3 | (~param_2 & 1) << 2;
  *(uint *)(param_1 + 0xadc) =
       *(uint *)(param_1 + 0xadc) & 0xfffffff8 | *(uint *)(param_1 + 0xadc) & 3 | (param_2 & 1) << 2
  ;
  return;
}




void FUN_00ae7c20(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  undefined8 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar1 = param_3 + 0x88;
  FUN_00f13f08(param_1,0x40800000,lVar1);
  lVar2 = param_3 + 0x178;
  FUN_00f13f08(param_1,0x40800000,lVar2);
  lVar3 = param_3 + 0x268;
  FUN_00f13f08(0x40800000,param_2,lVar3);
  plVar4 = (long *)(param_3 + 0x358);
  FUN_00f13f08(0x40800000,param_2,plVar4);
  fVar6 = (float)param_2 * -0.5;
  if ((*(float *)(param_3 + 200) != 0.0) || (*(float *)(param_3 + 0xcc) != fVar6)) {
    *(undefined4 *)(param_3 + 200) = 0;
    *(float *)(param_3 + 0xcc) = fVar6;
    FUN_0091ada4(lVar1);
  }
  local_70 = 0x3f00000000000000;
  (**(code **)(*(long *)(param_3 + 0x88) + 0x28))(lVar1,&local_70);
  fVar6 = (float)param_2 * 0.5;
  if ((*(float *)(param_3 + 0x1b8) != 0.0) || (*(float *)(param_3 + 0x1bc) != fVar6)) {
    *(undefined4 *)(param_3 + 0x1b8) = 0;
    *(float *)(param_3 + 0x1bc) = fVar6;
    FUN_0091ada4(lVar2);
  }
  local_70 = 0x3f00000000000000;
  (**(code **)(*(long *)(param_3 + 0x178) + 0x28))(lVar2,&local_70);
  if ((*(float *)(param_3 + 0x2a8) != 0.0) || (*(float *)(param_3 + 0x2ac) != 0.0)) {
    *(undefined8 *)(param_3 + 0x2a8) = 0;
    FUN_0091ada4(lVar3);
  }
  local_70 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_3 + 0x268) + 0x28))(lVar3,&local_70);
  if ((*(float *)(param_3 + 0x398) != (float)param_1) || (*(float *)(param_3 + 0x39c) != 0.0)) {
    *(float *)(param_3 + 0x398) = (float)param_1;
    *(undefined4 *)(param_3 + 0x39c) = 0;
    FUN_0091ada4(plVar4);
  }
  local_70 = 0x3f0000003f000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_70);
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ae7dfc(undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 uVar12;
  
  if (*(char *)(param_3 + 0x964) != '\0') {
    FUN_00f0e578(param_3 + 0x968,"generic_crown");
    if ((~*(uint *)(param_3 + 0x10c) & 0x7f80) != 0) {
      *(uint *)(param_3 + 0x10c) = *(uint *)(param_3 + 0x10c) | 0x7f80;
      FUN_0091ada4(param_3 + 0x88);
    }
    uVar7 = *(uint *)(param_3 + 0x9ec) | 4;
LAB_00ae7e58:
    *(uint *)(param_3 + 0x9ec) = uVar7;
    goto LAB_00ae7f34;
  }
  uVar7 = *(uint *)(param_3 + 0x10c);
  if ((uVar7 & 0x7f80) != 0x5900) {
    *(uint *)(param_3 + 0x10c) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x5900;
    FUN_0091ada4(param_3 + 0x88);
  }
  iVar2 = *(int *)(param_3 + 0x95c);
  uVar3 = *(uint *)(param_3 + 0x9ec);
  uVar7 = uVar3 | 4;
  *(uint *)(param_3 + 0x9ec) = uVar7;
  if (iVar2 - 3U < 2) {
LAB_00ae7ec0:
    iVar2 = *(int *)(param_3 + 0x958);
    *(undefined1 *)(param_3 + 0x965) = 0;
    if (iVar2 - 2U < 2) goto LAB_00ae7f1c;
    if (iVar2 != 0) {
      if (iVar2 != 1) goto LAB_00ae7f10;
      *(undefined1 *)(param_3 + 0x965) = 1;
      if ((~*(uint *)(param_3 + 0x10c) & 0x7f80) != 0) {
        *(uint *)(param_3 + 0x10c) = *(uint *)(param_3 + 0x10c) | 0x7f80;
        FUN_0091ada4(param_3 + 0x88);
        uVar7 = *(uint *)(param_3 + 0x9ec);
      }
      uVar7 = uVar7 & 0xfffffffb;
      goto LAB_00ae7e58;
    }
    pcVar5 = "generic_clock";
  }
  else {
    if (iVar2 == -1) {
LAB_00ae7f10:
      *(uint *)(param_3 + 0x9ec) = uVar3 & 0xfffffffb;
      goto LAB_00ae7f34;
    }
    if (iVar2 == 1) goto LAB_00ae7ec0;
    *(undefined1 *)(param_3 + 0x965) = 0;
LAB_00ae7f1c:
    pcVar5 = "generic_exclamation_point_circle";
  }
  FUN_00f0e578(param_3 + 0x968,pcVar5);
LAB_00ae7f34:
  if (*(char *)(param_3 + 0x966) == '\0') {
    puVar6 = &DAT_01bee7fa;
  }
  else {
    puVar6 = &DAT_031339e0;
  }
  FUN_00f0d7fc(param_3 + 0x88,puVar6);
  lVar1 = param_3 + 0x868;
  uVar10 = FUN_00f0e700(lVar1);
  FUN_00f0e700(lVar1);
  uVar4 = *(undefined1 *)(param_3 + 0x1321);
  uVar12 = param_2;
  fVar8 = (float)FUN_00f13e54(param_3 + 0x7b0);
  fVar11 = (float)uVar12;
  fVar9 = (float)FUN_00f0e700(lVar1);
  FUN_00ae78e4(uVar10,param_2,fVar8 - fVar9,(float)uVar12 - fVar11,param_3,uVar4);
  return;
}




void FUN_00ae7fc4(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x960) = param_2;
  return;
}




void FUN_00ae7fcc(long param_1)

{
  FUN_00f0d75c(param_1 + 0x88);
  return;
}




void FUN_00ae7fd4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00e6ce7c("MENU_PARTY_SLOT_EMPTY",0);
  FUN_00f0d75c(param_1 + 0x88,uVar1);
  FUN_00f0d7fc(param_1 + 0x88,&DAT_031339dc);
  *(undefined8 *)(param_1 + 0x958) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x960) = 0xffffffff;
  *(uint *)(param_1 + 0x23c) = *(uint *)(param_1 + 0x23c) & 0xfffffffb;
  *(uint *)(param_1 + 0xbcc) = *(uint *)(param_1 + 0xbcc) & 0xfffffffb;
  *(uint *)(param_1 + 0x9ec) = *(uint *)(param_1 + 0x9ec) & 0xfffffffb;
  *(undefined1 *)(param_1 + 0x964) = 0;
  return;
}

