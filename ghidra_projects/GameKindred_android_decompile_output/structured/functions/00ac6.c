// functions/00ac6 — 20 functions
#include "libGameKindred.h"




void FUN_00ac6004(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0xbfc) = param_1;
  *(undefined4 *)(param_3 + 0xc00) = param_2;
  FUN_00ac5dd0();
  return;
}




void FUN_00ac6010(float param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_2 + 0x3e4);
  uVar2 = (uint)(param_1 * 255.0);
  if ((uVar1 >> 7 & 0xff) != uVar2) {
    *(uint *)(param_2 + 0x3e4) = uVar1 & 0xffff8000 | uVar1 & 0x7f | (uVar2 & 0xff) << 7;
    FUN_0091ada4(param_2 + 0x360);
  }
  uVar1 = *(uint *)(param_2 + 0x73c);
  if ((uVar1 >> 7 & 0xff) == uVar2) {
    return;
  }
  *(uint *)(param_2 + 0x73c) = uVar1 & 0xffff8000 | uVar1 & 0x7f | (uVar2 & 0xff) << 7;
  FUN_0091ada4(param_2 + 0x6b8);
  return;
}




void FUN_00ac6084(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0xbf8) = param_2 & 1;
  FUN_00ac5dd0();
  return;
}




undefined4 FUN_00ac6090(long param_1)

{
  return *(undefined4 *)(param_1 + 0xbf0);
}




undefined4 FUN_00ac6098(long param_1)

{
  return *(undefined4 *)(param_1 + 0xbf4);
}




void FUN_00ac60a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d6650;
  param_1[0x160] = &PTR_FUN_028266f0;
  param_1[0x177] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x17a);
  FUN_00f13d08(param_1 + 0x160);
  param_1[0x142] = &PTR_FUN_028266f0;
  param_1[0x159] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x15c);
  FUN_00f13d08(param_1 + 0x142);
  FUN_00ac6220(param_1 + 0xd7);
  FUN_00ac6220(param_1 + 0x6c);
  FUN_00f0d3a4(param_1 + 0x46);
  param_1[0x28] = &PTR_FUN_028266f0;
  param_1[0x3f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x42);
  FUN_00f13d08(param_1 + 0x28);
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ac615c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d6650;
  param_1[0x160] = &PTR_FUN_028266f0;
  param_1[0x177] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x17a);
  FUN_00f13d08(param_1 + 0x160);
  param_1[0x142] = &PTR_FUN_028266f0;
  param_1[0x159] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x15c);
  FUN_00f13d08(param_1 + 0x142);
  FUN_00ac6220(param_1 + 0xd7);
  FUN_00ac6220(param_1 + 0x6c);
  FUN_00f0d3a4(param_1 + 0x46);
  param_1[0x28] = &PTR_FUN_028266f0;
  param_1[0x3f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x42);
  FUN_00f13d08(param_1 + 0x28);
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00ac6220(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d6798;
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




void FUN_00ac62bc(void *param_1)

{
  FUN_00ac6220();
  operator_delete(param_1);
  return;
}




void FUN_00ac62e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  uint uVar14;
  undefined4 uVar15;
  long lVar16;
  float fVar17;
  bool bVar18;
  uint uVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  code *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  long local_88;
  
  lVar16 = tpidr_el0;
  local_88 = *(long *)(lVar16 + 0x28);
  FUN_00ecfb1c();
  puVar1 = param_1 + 6;
  FUN_00f017e8(puVar1);
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *param_1 = &PTR_FUN_027d6898;
  param_1[6] = &PTR_FUN_027d6910;
  FUN_00f0e4a8();
  puVar2 = param_1 + 0x37;
  FUN_00f11234(puVar2);
  puVar3 = param_1 + 0x6b;
  FUN_00f0e4a8();
  FUN_00f0e4a8();
  FUN_00f0e4a8();
  puVar4 = param_1 + 0xc5;
  FUN_00f017e8(puVar4);
  puVar5 = param_1 + 0xd6;
  param_1[0xc5] = &PTR_FUN_027c1f80;
  FUN_00f017e8(puVar5);
  puVar6 = param_1 + 0xe7;
  param_1[0xd6] = &PTR_FUN_027c1f80;
  FUN_00b02aa0(puVar6);
  puVar7 = param_1 + 0x156;
  FUN_00b02aa0();
  puVar8 = param_1 + 0x1c5;
  FUN_00ab6c24(puVar8,0);
  puVar9 = param_1 + 0x47d;
  FUN_00ab6c24(puVar9,0);
  puVar10 = param_1 + 0x735;
  FUN_00ab6c24(puVar10,0);
  puVar11 = param_1 + 0x9ed;
  FUN_00b25254(puVar11);
  *(undefined4 *)(param_1 + 0xa19) = 0;
  (**(code **)(param_1[6] + 0x78))(puVar1,param_1 + 0x19,1);
  (**(code **)(param_1[6] + 0x78))(puVar1,puVar2,1);
  FUN_00f023ec(puVar2,puVar3,1);
  FUN_00f023ec(puVar2,puVar4,1);
  FUN_00f023ec(puVar4,puVar6,1);
  FUN_00f023ec(puVar4,puVar7,1);
  FUN_00f023ec(puVar2,puVar5,1);
  FUN_00f023ec(puVar5,puVar8,1);
  FUN_00f023ec(puVar5,puVar9,1);
  FUN_00f023ec(puVar5,puVar10,1);
  FUN_00f023ec(puVar2,puVar11,1);
  (**(code **)(param_1[6] + 0x78))(puVar1,param_1 + 0x89,1);
  (**(code **)(param_1[6] + 0x78))(puVar1,param_1 + 0xa7,1);
  uVar19 = FUN_0092ea9c();
  *(uint *)((long)param_1 + 0xb4) = *(uint *)((long)param_1 + 0xb4) & 0xfffffffb;
  FUN_00f0e548(param_1 + 0x19,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) | 0x10;
  FUN_00f112f0(puVar2,1);
  uVar14 = *(uint *)((long)param_1 + 0x3dc);
  if ((uVar14 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x3dc) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x6600;
    FUN_0091ada4(puVar3);
  }
  FUN_00f0e548(param_1 + 0x89,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e548(param_1 + 0xa7,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  if ((*(float *)(param_1 + 0x1cf) != 0.5) || (*(float *)((long)param_1 + 0xe7c) != 0.5)) {
    param_1[0x1cf] = 0x3f0000003f000000;
    FUN_0091ada4(puVar8);
  }
  if ((*(float *)(param_1 + 0x487) != 0.5) || (*(float *)((long)param_1 + 0x243c) != 0.5)) {
    param_1[0x487] = 0x3f0000003f000000;
    FUN_0091ada4(puVar9);
  }
  if ((*(float *)(param_1 + 0x73f) != 0.5) || (*(float *)((long)param_1 + 0x39fc) != 0.5)) {
    param_1[0x73f] = 0x3f0000003f000000;
    FUN_0091ada4(puVar10);
  }
  FUN_00b036e0(puVar6,0);
  FUN_00b036e0(puVar7,3);
  FUN_00f0dac8(param_1 + 0x2a9,0);
  FUN_00f0dac8(param_1 + 0x561,0);
  FUN_00f0dac8(param_1 + 0x819,0);
  uVar14 = *(uint *)((long)param_1 + 0x7bc);
  if ((uVar14 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x7bc) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x6c00;
    FUN_0091ada4(puVar6);
  }
  uVar14 = *(uint *)((long)param_1 + 0xb34);
  if ((uVar14 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0xb34) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x6c00;
    FUN_0091ada4(puVar7);
  }
  uVar14 = *(uint *)((long)param_1 + 0xeac);
  if ((uVar14 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0xeac) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x6c00;
    FUN_0091ada4(puVar8);
  }
  uVar14 = *(uint *)((long)param_1 + 0x246c);
  if ((uVar14 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x246c) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x6c00;
    FUN_0091ada4(puVar9);
  }
  uVar14 = *(uint *)((long)param_1 + 0x3a2c);
  if ((uVar14 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x3a2c) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x6c00;
    FUN_0091ada4(puVar10);
  }
  FUN_00f0e548(puVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  bVar18 = (uVar19 & 1) == 0;
  ppuVar12 = &PTR_s_build___Fonts_Brandon_Light_80_f_02be9c20;
  if (bVar18) {
    ppuVar12 = &PTR_s_build___Fonts_Brandon_Light_60_f_02be9c18;
  }
  ppuVar13 = &PTR_s_build___Fonts_Brandon_Light_60_f_02be9c18;
  if (bVar18) {
    ppuVar13 = &PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10;
  }
  FUN_00b035dc(puVar6,*ppuVar12);
  FUN_00b035dc(puVar7,*ppuVar13);
  FUN_00ab703c(0x41c00000,0x42c80000,0x43c80000,puVar8,0,&DAT_03210450,&DAT_01bee7fa,&DAT_03218ef8,0
              );
  FUN_00ab703c(0x41c00000,0x42c80000,0x43c80000,puVar9,0,&DAT_03210450,&DAT_01bee7fa,&DAT_03218ef8,0
              );
  FUN_00ab703c(0x41c00000,0x42c80000,0x43c80000,puVar10,0,&DAT_03210450,&DAT_01bee7fa,&DAT_03218ef8,
               0);
  uVar15 = DAT_03210c64;
  local_b8 = FUN_00ac69fc;
  local_a0 = 0;
  local_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  local_90 = uVar15;
  FUN_009693a0(param_1 + 0x1c6,&local_b8);
  local_b8 = FUN_00ac69fc;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 1;
  local_b0 = param_1;
  local_90 = uVar15;
  FUN_009693a0(param_1 + 0x47e,&local_b8);
  local_b8 = FUN_00ac69fc;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 2;
  local_b0 = param_1;
  local_90 = uVar15;
  FUN_009693a0(param_1 + 0x736,&local_b8);
  uVar20 = FUN_0092ea9c();
  fVar21 = 1.2;
  fVar22 = 1.5;
  fVar17 = fVar22;
  if ((uVar20 & 1) == 0) {
    fVar17 = fVar21;
  }
  if ((*(float *)(param_1 + 0x1ce) != fVar17) || (*(float *)((long)param_1 + 0xe74) != fVar17)) {
    *(float *)(param_1 + 0x1ce) = fVar17;
    *(float *)((long)param_1 + 0xe74) = fVar17;
    FUN_0091ada4(puVar8);
  }
  uVar20 = FUN_0092ea9c();
  fVar17 = fVar22;
  if ((uVar20 & 1) == 0) {
    fVar17 = fVar21;
  }
  if ((*(float *)(param_1 + 0x486) != fVar17) || (*(float *)((long)param_1 + 0x2434) != fVar17)) {
    *(float *)(param_1 + 0x486) = fVar17;
    *(float *)((long)param_1 + 0x2434) = fVar17;
    FUN_0091ada4(puVar9);
  }
  uVar20 = FUN_0092ea9c();
  if ((uVar20 & 1) == 0) {
    fVar22 = fVar21;
  }
  if ((*(float *)(param_1 + 0x73e) != fVar22) || (*(float *)((long)param_1 + 0x39f4) != fVar22)) {
    *(float *)(param_1 + 0x73e) = fVar22;
    *(float *)((long)param_1 + 0x39f4) = fVar22;
    FUN_0091ada4(puVar10);
  }
  FUN_00f0d378(puVar11,PTR_s_build___Fonts_Brandon_Bold_130_f_02be9cb0);
  FUN_00e705c8(&local_b8,"[NUMBER_SECONDS]");
  FUN_00b252ac(puVar11,&local_b8,0,1);
  if (local_b0 != (undefined8 *)0x0) {
    operator_delete__(local_b0);
    local_b8 = (code *)0x0;
    local_b0 = (undefined8 *)0x0;
  }
  *(uint *)((long)param_1 + 0x4fec) = *(uint *)((long)param_1 + 0x4fec) & 0xfffffffb;
  if (*(long *)(lVar16 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ac69fc(undefined8 param_1)

{
  undefined8 in_x4;
  
  FUN_00ecfca4(param_1,in_x4);
  return;
}




void FUN_00ac6a04(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)*param_1)();
  (**(code **)(*param_1 + 8))(param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00ac6a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,param_4,&DAT_03210450,&DAT_03210450);
  return;
}




void FUN_00ac6a6c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  (**(code **)*param_1)();
  (**(code **)(*param_1 + 8))(param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00ac6ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,param_4,param_5,&DAT_03210450);
  return;
}




void FUN_00ac6ad8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  (**(code **)*param_1)();
  (**(code **)(*param_1 + 8))(param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00ac6b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,param_4,param_5,param_6);
  return;
}




void FUN_00ac6b4c(long param_1,undefined8 param_2)

{
  FUN_00b02c3c(param_1 + 0x738,param_2,3);
  FUN_0091ada4(param_1 + 0x30);
  return;
}




void FUN_00ac6b78(long param_1,undefined8 param_2)

{
  FUN_00b02c3c(param_1 + 0xab0,param_2,3);
  FUN_0091ada4(param_1 + 0x30);
  return;
}




void FUN_00ac6ba4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  
  FUN_00ab7498(param_1 + 0xe28);
  FUN_00ab7498(param_1 + 0x23e8,param_3);
  FUN_00ab7498(param_1 + 0x39a8,param_4);
  uVar1 = FUN_00e70b04(param_2);
  *(uint *)(param_1 + 0xeac) =
       *(uint *)(param_1 + 0xeac) & 0xfffffff8 | *(uint *)(param_1 + 0xeac) & 3 | (~uVar1 & 1) << 2;
  uVar1 = FUN_00e70b04(param_3);
  *(uint *)(param_1 + 0x246c) =
       *(uint *)(param_1 + 0x246c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x246c) & 3 | (~uVar1 & 1) << 2;
  uVar1 = FUN_00e70b04(param_4);
  *(uint *)(param_1 + 0x3a2c) =
       *(uint *)(param_1 + 0x3a2c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x3a2c) & 3 | (~uVar1 & 1) << 2;
  FUN_0091ada4(param_1 + 0x30);
  return;
}




void FUN_00ac6c54(float param_1,long param_2)

{
  long lVar1;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (0.0 < param_1) {
    *(float *)(param_2 + 0x50c8) = param_1;
    local_30 = (long)param_1;
    *(uint *)(param_2 + 0x4fec) = *(uint *)(param_2 + 0x4fec) | 4;
    FUN_00b25438(param_2 + 0x4f68,&local_30);
    *(uint *)(param_2 + 0x734) = *(uint *)(param_2 + 0x734) & 0xfffffffb;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00ac6ce0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  float fStack_58;
  float fStack_54;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar2 = tpidr_el0;
  lStack_48 = *(long *)(lVar2 + 0x28);
  FUN_00f00298(&fStack_54,&fStack_58);
  lVar1 = param_1 + 200;
  FUN_00f13f08(fStack_54,fStack_58,lVar1);
  if ((*(float *)(param_1 + 0x108) != 0.0) || (*(float *)(param_1 + 0x10c) != 0.0)) {
    *(undefined8 *)(param_1 + 0x108) = 0;
    FUN_0091ada4(lVar1);
  }
  uStack_50 = 0;
  (**(code **)(*(long *)(param_1 + 200) + 0x28))(lVar1,&uStack_50);
  if ((*(float *)(param_1 + 0x1f8) != fStack_54 * 0.5) ||
     (*(float *)(param_1 + 0x1fc) != fStack_58 * 0.5)) {
    *(float *)(param_1 + 0x1f8) = fStack_54 * 0.5;
    *(float *)(param_1 + 0x1fc) = fStack_58 * 0.5;
    FUN_0091ada4(param_1 + 0x1b8);
  }
  uStack_50 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x1b8) + 0x28))(param_1 + 0x1b8,&uStack_50);
  lVar1 = param_1 + 0x358;
  FUN_00f13f08(fStack_54,fStack_58,lVar1);
  if ((*(float *)(param_1 + 0x398) != 0.0) || (*(float *)(param_1 + 0x39c) != 0.0)) {
    *(undefined8 *)(param_1 + 0x398) = 0;
    FUN_0091ada4(lVar1);
  }
  uStack_50 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x358) + 0x28))(lVar1,&uStack_50);
  FUN_00f13f08(fStack_54,0x40800000,param_1 + 0x448);
  FUN_00f13f08(fStack_54,0x40800000,param_1 + 0x538);
  if ((*(float *)(param_1 + 0x778) != 0.0) || (*(float *)(param_1 + 0x77c) != -468.0)) {
    *(undefined8 *)(param_1 + 0x778) = 0xc3ea000000000000;
    FUN_0091ada4(param_1 + 0x738);
  }
  uStack_50 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x738) + 0x28))(param_1 + 0x738,&uStack_50);
  lVar1 = param_1 + 0xab0;
  if ((*(float *)(param_1 + 0xaf0) != 0.0) || (*(float *)(param_1 + 0xaf4) != 0.0)) {
    *(undefined8 *)(param_1 + 0xaf0) = 0;
    FUN_0091ada4(lVar1);
  }
  uStack_50 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0xab0) + 0x28))(lVar1,&uStack_50);
  FUN_00b03710(fStack_54 * 0.9,lVar1);
  if ((*(float *)(param_1 + 0x6f0) != 0.0) || (*(float *)(param_1 + 0x6f4) != 468.0)) {
    *(undefined8 *)(param_1 + 0x6f0) = 0x43ea000000000000;
    FUN_0091ada4(param_1 + 0x6b0);
  }
  FUN_00f08be8(param_1 + 0x2bd8);
  uVar3 = FUN_00e70b04();
  if ((uVar3 & 1) == 0) {
LAB_00ac6f74:
    plVar4 = (long *)(param_1 + 0x23e8);
    FUN_00f08be8(param_1 + 0x4198);
    uVar3 = FUN_00e70b04();
    if ((uVar3 & 1) == 0) {
      if ((*(float *)(param_1 + 0xe68) != fStack_54 * 0.25) || (*(float *)(param_1 + 0xe6c) != 0.0))
      {
        *(float *)(param_1 + 0xe68) = fStack_54 * 0.25;
        *(undefined4 *)(param_1 + 0xe6c) = 0;
        FUN_0091ada4(param_1 + 0xe28);
      }
      uStack_50 = 0x3f0000003f000000;
      (**(code **)(*(long *)(param_1 + 0xe28) + 0x28))(param_1 + 0xe28,&uStack_50);
      if ((*(float *)(param_1 + 0x39e8) != 0.0) || (*(float *)(param_1 + 0x39ec) != 0.0)) {
        *(undefined8 *)(param_1 + 0x39e8) = 0;
        FUN_0091ada4(param_1 + 0x39a8);
      }
      uStack_50 = 0x3f0000003f000000;
      (**(code **)(*(long *)(param_1 + 0x39a8) + 0x28))(param_1 + 0x39a8,&uStack_50);
      if ((*(float *)(param_1 + 0x2428) == fStack_54 * -0.25) &&
         (*(float *)(param_1 + 0x242c) == 0.0)) goto LAB_00ac70ec;
      *(float *)(param_1 + 0x2428) = fStack_54 * -0.25;
      *(undefined4 *)(param_1 + 0x242c) = 0;
    }
    else {
      if ((*(float *)(param_1 + 0x2428) != fStack_54 * -0.166) ||
         (*(float *)(param_1 + 0x242c) != 0.0)) {
        *(float *)(param_1 + 0x2428) = fStack_54 * -0.166;
        *(undefined4 *)(param_1 + 0x242c) = 0;
        FUN_0091ada4(plVar4);
      }
      uStack_50 = 0x3f0000003f000000;
      (**(code **)(*(long *)(param_1 + 0x23e8) + 0x28))(plVar4,&uStack_50);
      plVar4 = (long *)(param_1 + 0xe28);
      if ((*(float *)(param_1 + 0xe68) == fStack_54 * 0.166) && (*(float *)(param_1 + 0xe6c) == 0.0)
         ) goto LAB_00ac70ec;
      *(float *)(param_1 + 0xe68) = fStack_54 * 0.166;
      *(undefined4 *)(param_1 + 0xe6c) = 0;
    }
  }
  else {
    FUN_00f08be8(param_1 + 0x4198);
    uVar3 = FUN_00e70b04();
    if ((uVar3 & 1) == 0) goto LAB_00ac6f74;
    plVar4 = (long *)(param_1 + 0xe28);
    if ((*(float *)(param_1 + 0xe68) == 0.0) && (*(float *)(param_1 + 0xe6c) == 0.0))
    goto LAB_00ac70ec;
    *(undefined8 *)(param_1 + 0xe68) = 0;
  }
  FUN_0091ada4(plVar4);
LAB_00ac70ec:
  uStack_50 = 0x3f0000003f000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&uStack_50);
  FUN_00f07940(0,0,param_1 + 0x4f68,8,param_1 + 0x6b0,8);
  if (*(long *)(lVar2 + 0x28) == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ac6ce0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  float local_58;
  float local_54;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00f00298(&local_54,&local_58);
  lVar1 = param_1 + 200;
  FUN_00f13f08(local_54,local_58,lVar1);
  if ((*(float *)(param_1 + 0x108) != 0.0) || (*(float *)(param_1 + 0x10c) != 0.0)) {
    *(undefined8 *)(param_1 + 0x108) = 0;
    FUN_0091ada4(lVar1);
  }
  local_50 = 0;
  (**(code **)(*(long *)(param_1 + 200) + 0x28))(lVar1,&local_50);
  if ((*(float *)(param_1 + 0x1f8) != local_54 * 0.5) ||
     (*(float *)(param_1 + 0x1fc) != local_58 * 0.5)) {
    *(float *)(param_1 + 0x1f8) = local_54 * 0.5;
    *(float *)(param_1 + 0x1fc) = local_58 * 0.5;
    FUN_0091ada4(param_1 + 0x1b8);
  }
  local_50 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x1b8) + 0x28))(param_1 + 0x1b8,&local_50);
  lVar1 = param_1 + 0x358;
  FUN_00f13f08(local_54,local_58,lVar1);
  if ((*(float *)(param_1 + 0x398) != 0.0) || (*(float *)(param_1 + 0x39c) != 0.0)) {
    *(undefined8 *)(param_1 + 0x398) = 0;
    FUN_0091ada4(lVar1);
  }
  local_50 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x358) + 0x28))(lVar1,&local_50);
  FUN_00f13f08(local_54,0x40800000,param_1 + 0x448);
  FUN_00f13f08(local_54,0x40800000,param_1 + 0x538);
  if ((*(float *)(param_1 + 0x778) != 0.0) || (*(float *)(param_1 + 0x77c) != -468.0)) {
    *(undefined8 *)(param_1 + 0x778) = 0xc3ea000000000000;
    FUN_0091ada4(param_1 + 0x738);
  }
  local_50 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x738) + 0x28))(param_1 + 0x738,&local_50);
  lVar1 = param_1 + 0xab0;
  if ((*(float *)(param_1 + 0xaf0) != 0.0) || (*(float *)(param_1 + 0xaf4) != 0.0)) {
    *(undefined8 *)(param_1 + 0xaf0) = 0;
    FUN_0091ada4(lVar1);
  }
  local_50 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0xab0) + 0x28))(lVar1,&local_50);
  FUN_00b03710(local_54 * 0.9,lVar1);
  if ((*(float *)(param_1 + 0x6f0) != 0.0) || (*(float *)(param_1 + 0x6f4) != 468.0)) {
    *(undefined8 *)(param_1 + 0x6f0) = 0x43ea000000000000;
    FUN_0091ada4(param_1 + 0x6b0);
  }
  FUN_00f08be8(param_1 + 0x2bd8);
  uVar3 = FUN_00e70b04();
  if ((uVar3 & 1) == 0) {
LAB_00ac6f74:
    plVar4 = (long *)(param_1 + 0x23e8);
    FUN_00f08be8(param_1 + 0x4198);
    uVar3 = FUN_00e70b04();
    if ((uVar3 & 1) == 0) {
      if ((*(float *)(param_1 + 0xe68) != local_54 * 0.25) || (*(float *)(param_1 + 0xe6c) != 0.0))
      {
        *(float *)(param_1 + 0xe68) = local_54 * 0.25;
        *(undefined4 *)(param_1 + 0xe6c) = 0;
        FUN_0091ada4(param_1 + 0xe28);
      }
      local_50 = 0x3f0000003f000000;
      (**(code **)(*(long *)(param_1 + 0xe28) + 0x28))(param_1 + 0xe28,&local_50);
      if ((*(float *)(param_1 + 0x39e8) != 0.0) || (*(float *)(param_1 + 0x39ec) != 0.0)) {
        *(undefined8 *)(param_1 + 0x39e8) = 0;
        FUN_0091ada4(param_1 + 0x39a8);
      }
      local_50 = 0x3f0000003f000000;
      (**(code **)(*(long *)(param_1 + 0x39a8) + 0x28))(param_1 + 0x39a8,&local_50);
      if ((*(float *)(param_1 + 0x2428) == local_54 * -0.25) &&
         (*(float *)(param_1 + 0x242c) == 0.0)) goto LAB_00ac70ec;
      *(float *)(param_1 + 0x2428) = local_54 * -0.25;
      *(undefined4 *)(param_1 + 0x242c) = 0;
    }
    else {
      if ((*(float *)(param_1 + 0x2428) != local_54 * -0.166) ||
         (*(float *)(param_1 + 0x242c) != 0.0)) {
        *(float *)(param_1 + 0x2428) = local_54 * -0.166;
        *(undefined4 *)(param_1 + 0x242c) = 0;
        FUN_0091ada4(plVar4);
      }
      local_50 = 0x3f0000003f000000;
      (**(code **)(*(long *)(param_1 + 0x23e8) + 0x28))(plVar4,&local_50);
      plVar4 = (long *)(param_1 + 0xe28);
      if ((*(float *)(param_1 + 0xe68) == local_54 * 0.166) && (*(float *)(param_1 + 0xe6c) == 0.0))
      goto LAB_00ac70ec;
      *(float *)(param_1 + 0xe68) = local_54 * 0.166;
      *(undefined4 *)(param_1 + 0xe6c) = 0;
    }
  }
  else {
    FUN_00f08be8(param_1 + 0x4198);
    uVar3 = FUN_00e70b04();
    if ((uVar3 & 1) == 0) goto LAB_00ac6f74;
    plVar4 = (long *)(param_1 + 0xe28);
    if ((*(float *)(param_1 + 0xe68) == 0.0) && (*(float *)(param_1 + 0xe6c) == 0.0))
    goto LAB_00ac70ec;
    *(undefined8 *)(param_1 + 0xe68) = 0;
  }
  FUN_0091ada4(plVar4);
LAB_00ac70ec:
  local_50 = 0x3f0000003f000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_50);
  FUN_00f07940(0,0,param_1 + 0x4f68,8,param_1 + 0x6b0,8);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

