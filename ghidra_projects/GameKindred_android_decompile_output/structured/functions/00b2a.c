// functions/00b2a — 13 functions
#include "libGameKindred.h"




void FUN_00b2a0dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ded30;
  if ((void *)param_1[0x2c0] != (void *)0x0) {
    operator_delete__((void *)param_1[0x2c0]);
    param_1[0x2c0] = 0;
    param_1[0x2bf] = 0;
  }
  if ((void *)param_1[0x2be] != (void *)0x0) {
    operator_delete__((void *)param_1[0x2be]);
    param_1[0x2be] = 0;
    param_1[0x2bd] = 0;
  }
  if ((void *)param_1[700] != (void *)0x0) {
    operator_delete__((void *)param_1[700]);
    param_1[700] = 0;
    param_1[699] = 0;
  }
  FUN_00b1df14(param_1 + 0x14d);
  FUN_00b29e44(param_1);
  return;
}




void FUN_00b2a15c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ded30;
  if ((void *)param_1[0x2c0] != (void *)0x0) {
    operator_delete__((void *)param_1[0x2c0]);
    param_1[0x2c0] = 0;
    param_1[0x2bf] = 0;
  }
  if ((void *)param_1[0x2be] != (void *)0x0) {
    operator_delete__((void *)param_1[0x2be]);
    param_1[0x2be] = 0;
    param_1[0x2bd] = 0;
  }
  if ((void *)param_1[700] != (void *)0x0) {
    operator_delete__((void *)param_1[700]);
    param_1[700] = 0;
    param_1[699] = 0;
  }
  FUN_00b1df14(param_1 + 0x14d);
  FUN_00b29e44(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00b2a1e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027dee98;
  if ((void *)param_1[0x663] != (void *)0x0) {
    operator_delete__((void *)param_1[0x663]);
    param_1[0x663] = 0;
    param_1[0x662] = 0;
  }
  if ((void *)param_1[0x661] != (void *)0x0) {
    operator_delete__((void *)param_1[0x661]);
    param_1[0x661] = 0;
    param_1[0x660] = 0;
  }
  if ((void *)param_1[0x65f] != (void *)0x0) {
    operator_delete__((void *)param_1[0x65f]);
    param_1[0x65f] = 0;
    param_1[0x65e] = 0;
  }
  if ((void *)param_1[0x65d] != (void *)0x0) {
    operator_delete__((void *)param_1[0x65d]);
    param_1[0x65d] = 0;
    param_1[0x65c] = 0;
  }
  if ((void *)param_1[0x65b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x65b]);
    param_1[0x65b] = 0;
    param_1[0x65a] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x634);
  FUN_00f0d3a4(param_1 + 0x60e);
  FUN_00f0d3a4(param_1 + 0x5e8);
  FUN_00f0d3a4(param_1 + 0x5c2);
  param_1[0x5a4] = &PTR_FUN_028266f0;
  param_1[0x5bb] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x5be);
  FUN_00f13d08(param_1 + 0x5a4);
  param_1[0x586] = &PTR_FUN_028266f0;
  param_1[0x59d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x5a0);
  FUN_00f13d08(param_1 + 0x586);
  param_1[0x568] = &PTR_FUN_028266f0;
  param_1[0x57f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x582);
  FUN_00f13d08(param_1 + 0x568);
  FUN_00f0d3a4(param_1 + 0x542);
  param_1[0x429] = &PTR_FUN_027d70a0;
  FUN_00f0d3a4(param_1 + 0x51a);
  FUN_00f0d3a4(param_1 + 0x4f4);
  param_1[0x4d6] = &PTR_FUN_028266f0;
  param_1[0x4ed] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4f0);
  FUN_00f13d08(param_1 + 0x4d6);
  FUN_00f0d3a4(param_1 + 0x4b0);
  FUN_00af8c0c(param_1 + 0x43a);
  FUN_00f01868(param_1 + 0x429);
  FUN_00b1df14(param_1 + 699);
  FUN_00b1df14(param_1 + 0x14d);
  FUN_00b29e44(param_1);
  return;
}




void FUN_00b2a3c0(void *param_1)

{
  FUN_00b2a1e4();
  operator_delete(param_1);
  return;
}




void FUN_00b2a3e4(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined **ppuVar6;
  uint uVar7;
  long lVar8;
  undefined4 local_70 [2];
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027d8d40;
  FUN_00f017e8(plVar1);
  plVar2 = param_1 + 0x28;
  param_1[0x17] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x46;
  FUN_00f0d160(plVar3);
  FUN_00b159b8(param_1 + 0x6c);
  FUN_00b159b8(param_1 + 0xd7);
  plVar4 = param_1 + 0x142;
  FUN_00f0e4a8(plVar4);
  plVar5 = param_1 + 0x160;
  FUN_00f0e4a8(plVar5);
  param_1[0x17e] = 0;
  *(undefined4 *)(param_1 + 0x17f) = 0x41000000;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f023ec(plVar1,plVar4,1);
  FUN_00f023ec(plVar1,plVar5,1);
  ppuVar6 = &PTR_s_build___HUDPartsCommon_atlas_02be3440;
  if ((param_2 & 1) == 0) {
    ppuVar6 = &PTR_s_build___MenuPartsCommon_tga_02be3530;
  }
  FUN_00f0e548(plVar2,*ppuVar6,"white_background");
  FUN_00f0e670(plVar2,&DAT_01bee7f6,2);
  uVar7 = *(uint *)((long)param_1 + 0x1c4);
  if ((uVar7 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1c4) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x2600;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0d9a4(plVar3,0);
  local_70[0] = 0xffe0e0e0;
  FUN_00f0d7fc(plVar3,local_70);
  if ((*(uint *)((long)param_1 + 0x2b4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x2b4) = *(uint *)((long)param_1 + 0x2b4) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar3);
  }
  if ((*(uint *)((long)param_1 + 0x3e4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x3e4) = *(uint *)((long)param_1 + 0x3e4) & 0xffff807f | 0x3f80;
    FUN_0091ada4(param_1 + 0x6c);
  }
  if ((*(uint *)((long)param_1 + 0x73c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x73c) = *(uint *)((long)param_1 + 0x73c) & 0xffff807f | 0x3f80;
    FUN_0091ada4(param_1 + 0xd7);
  }
  FUN_00f0e548(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  uVar7 = *(uint *)((long)param_1 + 0xa94);
  if ((uVar7 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0xa94) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x2600;
    FUN_0091ada4(plVar4);
  }
  FUN_00f0e548(plVar5,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  uVar7 = *(uint *)((long)param_1 + 0xb84);
  if ((uVar7 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0xb84) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x2600;
    FUN_0091ada4(plVar5);
  }
  *(uint *)((long)param_1 + 0x3e4) = *(uint *)((long)param_1 + 0x3e4) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x73c) = *(uint *)((long)param_1 + 0x73c) & 0xfffffffb;
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b2a6b8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x230;
  FUN_00f0d378(lVar1);
  if ((*(byte *)(param_1 + 0x3e4) >> 2 & 1) != 0) {
    FUN_00b15ad8(0x41600000,0x40c00000,0x41900000,param_1 + 0x360,lVar1,1);
  }
  if ((*(byte *)(param_1 + 0x73c) >> 2 & 1) != 0) {
    FUN_00b15ad8(0x41600000,0x40c00000,0x41900000,param_1 + 0x6b8,lVar1,0);
  }
  FUN_00b2a72c(param_1);
  return;
}




void FUN_00b2a72c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined8 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar1 = param_1 + 0x230;
  fVar4 = (float)FUN_00f0d4e0(lVar1);
  fVar5 = 10.0;
  fVar4 = fVar4 + 10.0;
  FUN_00f0d4e0(lVar1);
  fVar5 = fVar5 + *(float *)(param_1 + 0xbf8) + *(float *)(param_1 + 0xbf8) + 2.0;
  FUN_00f13f08(fVar4,fVar5,param_1 + 0x140);
  lVar2 = param_1 + 0xb8;
  FUN_00f07940(0,0,lVar1,8,lVar2,8);
  FUN_00f07940(0,0,param_1 + 0x140,8,lVar2,8);
  lVar1 = param_1 + 0xa10;
  FUN_00f13f08(fVar4,*(undefined4 *)(param_1 + 0xbf8),lVar1);
  if ((*(float *)(param_1 + 0xa50) != 0.0) || (*(float *)(param_1 + 0xa54) != fVar5 * -0.5)) {
    *(undefined4 *)(param_1 + 0xa50) = 0;
    *(float *)(param_1 + 0xa54) = fVar5 * -0.5;
    FUN_0091ada4(lVar1);
  }
  local_60 = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 0xa10) + 0x28))(lVar1,&local_60);
  lVar1 = param_1 + 0xb00;
  FUN_00f13f08(fVar4,*(undefined4 *)(param_1 + 0xbf8),lVar1);
  if ((*(float *)(param_1 + 0xb40) != 0.0) || (*(float *)(param_1 + 0xb44) != fVar5 * 0.5)) {
    *(undefined4 *)(param_1 + 0xb40) = 0;
    *(float *)(param_1 + 0xb44) = fVar5 * 0.5;
    FUN_0091ada4(lVar1);
  }
  local_60 = 0x3f8000003f000000;
  (**(code **)(*(long *)(param_1 + 0xb00) + 0x28))(lVar1,&local_60);
  *(float *)(param_1 + 0xbf0) = fVar4;
  *(float *)(param_1 + 0xbf4) = fVar5;
  FUN_00f13f18(param_1,param_1 + 0xbf0);
  FUN_00f07940(0,0,lVar2,8,param_1,8);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b2a900(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x230;
  FUN_00f0d75c(lVar1);
  if ((*(byte *)(param_1 + 0x3e4) >> 2 & 1) != 0) {
    FUN_00b15ad8(0x41600000,0x40c00000,0x41900000,param_1 + 0x360,lVar1,1);
  }
  if ((*(byte *)(param_1 + 0x73c) >> 2 & 1) != 0) {
    FUN_00b15ad8(0x41600000,0x40c00000,0x41900000,param_1 + 0x6b8,lVar1,0);
  }
  FUN_00b2a72c(param_1);
  return;
}




void FUN_00b2a974(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xbf8) = param_1;
  FUN_00b2a72c();
  return;
}




undefined4 FUN_00b2a97c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xbf0);
}




undefined4 FUN_00b2a984(long param_1)

{
  return *(undefined4 *)(param_1 + 0xbf4);
}




void FUN_00b2a98c(undefined4 param_1,long *param_2,undefined8 param_3,long param_4,long param_5,
                 undefined4 param_6,undefined4 param_7)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  undefined1 auStack_100 [128];
  long local_80;
  
  lVar10 = tpidr_el0;
  local_80 = *(long *)(lVar10 + 0x28);
  FUN_00b08d84();
  plVar1 = param_2 + 0x4e;
  *param_2 = (long)&PTR_FUN_027df000;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_2 + 0x6c;
  FUN_00b14dd4(plVar2,0);
  plVar3 = param_2 + 0x102;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_2 + 0x120;
  FUN_00f0e4a8(plVar4);
  plVar5 = param_2 + 0x13e;
  FUN_00f0d160(plVar5);
  plVar6 = param_2 + 0x164;
  FUN_00f017e8(plVar6);
  plVar7 = param_2 + 0x175;
  param_2[0x164] = (long)&PTR_FUN_027c1f80;
  FUN_00b123bc(plVar7);
  plVar8 = param_2 + 0x222;
  FUN_00b123bc(plVar8);
  *(undefined4 *)(param_2 + 0x2cf) = 0xffffffff;
  *(undefined1 *)((long)param_2 + 0x167c) = 0;
  FUN_008fcdb8(param_2 + 0x2d0,param_3);
  *(undefined4 *)(param_2 + 0x2d6) = param_1;
  param_2[0x2d3] = param_4;
  *(undefined4 *)((long)param_2 + 0x16a4) = param_7;
  *(undefined4 *)(param_2 + 0x2d4) = param_6;
  param_2[0x2d5] = param_5;
  (**(code **)(*param_2 + 0x78))(param_2,plVar2,1);
  (**(code **)(*param_2 + 0x78))(param_2,plVar3,1);
  (**(code **)(*param_2 + 0x78))(param_2,plVar6,1);
  FUN_00f023ec(plVar6,plVar8,1);
  FUN_00f023ec(plVar6,plVar7,1);
  (**(code **)(*param_2 + 0x78))(param_2,plVar4,1);
  (**(code **)(*param_2 + 0x78))(param_2,plVar5,1);
  (**(code **)(*param_2 + 0x78))(param_2,plVar1,1);
  FUN_00b1326c(0x3f800000,plVar2,&DAT_01bee7f6);
  FUN_00b132e8(0,plVar2,&DAT_01bee7f6);
  uVar11 = FUN_00e6a488(param_2[0x2d5]);
  if ((uVar11 & 1) == 0) {
    FUN_00e6a8a8(auStack_100,"build://Splash_%s.png",param_2[0x2d5]);
    FUN_00f0e6e8(plVar3,0);
    FUN_00f0e540(plVar3,auStack_100);
    FUN_00f0e578(plVar3,"full_splash_1k");
  }
  else {
    FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
    FUN_00f0e670(plVar3,&DAT_01bee7fe,2);
  }
  if ((~*(uint *)((long)param_2 + 0x894) & 0x7f80) != 0) {
    *(uint *)((long)param_2 + 0x894) = *(uint *)((long)param_2 + 0x894) | 0x7f80;
    FUN_0091ada4(plVar3);
  }
  if ((*(float *)(param_2 + 0x10c) != 0.5) || (*(float *)((long)param_2 + 0x864) != 0.5)) {
    param_2[0x10c] = 0x3f0000003f000000;
    FUN_0091ada4(plVar3);
  }
  uVar12 = *(uint *)((long)param_2 + 0xc2c) & 0xfffffff8 |
           *(uint *)((long)param_2 + 0xc2c) & 3 |
           (uint)((((char)param_2[0x2d4] != '\0' || *(char *)((long)param_2 + 0x16a1) != '\0') ||
                  *(char *)((long)param_2 + 0x16a2) != '\0') ||
                 *(char *)((long)param_2 + 0x16a3) != '\0') << 2;
  *(uint *)((long)param_2 + 0xc2c) = uVar12;
  if ((*(float *)(param_2 + 0x17f) != 1.0) || (*(float *)((long)param_2 + 0xbfc) != 1.0)) {
    lVar13 = NEON_fmov(0x3f800000,4);
    param_2[0x17f] = lVar13;
    FUN_0091ada4(plVar7);
    uVar12 = *(uint *)((long)param_2 + 0xc2c);
  }
  if ((uVar12 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_2 + 0xc2c) = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x2600;
    FUN_0091ada4(plVar7);
  }
  *(uint *)((long)param_2 + 0x10a4) = *(uint *)((long)param_2 + 0x10a4) & 0xfffffffb;
  uVar9 = *(uint *)((long)param_2 + 0x1194);
  uVar12 = uVar9 & 0xfffffff8 |
           uVar9 & 3 |
           (uint)(((*(char *)((long)param_2 + 0x16a4) != '\0' ||
                   *(char *)((long)param_2 + 0x16a5) != '\0') ||
                  *(char *)((long)param_2 + 0x16a6) != '\0') ||
                 *(char *)((long)param_2 + 0x16a7) != '\0') << 2;
  *(uint *)((long)param_2 + 0x1194) = uVar12;
  if ((~uVar9 & 0x7f80) != 0) {
    *(uint *)((long)param_2 + 0x1194) = uVar12 | 0x7f80;
    FUN_0091ada4(plVar8);
  }
  uVar12 = *(uint *)((long)param_2 + 0x160c);
  if ((uVar12 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_2 + 0x160c) = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0xc80;
    FUN_0091ada4(param_2 + 0x2b1);
  }
  FUN_00f0e670(param_2 + 0x2b1,&DAT_01bee7fa,2);
  FUN_00b128a0(0x3f800000,plVar8,(char *)((long)param_2 + 0x16a4));
  uVar11 = FUN_00e70b88(param_2[0x2d3],&DAT_03210450);
  if ((uVar11 & 1) != 0) {
    FUN_00f0e548(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
    *(byte *)(param_2 + 0x13b) = *(byte *)(param_2 + 0x13b) | 2;
    FUN_00f0e670(plVar4,&DAT_01bee7f6,2);
    uVar12 = *(uint *)((long)param_2 + 0x984);
    if ((uVar12 & 0x7f80) != 0x5280) {
      *(uint *)((long)param_2 + 0x984) = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x5280;
      FUN_0091ada4(plVar4);
    }
  }
  FUN_00f0d92c(plVar5,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90,&DAT_01bee7fa);
  FUN_00f0d75c(plVar5,param_2[0x2d3]);
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar1,&DAT_01bee7f6,2);
  uVar12 = *(uint *)((long)param_2 + 0x2f4);
  if ((uVar12 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_2 + 0x2f4) = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar1);
  }
  if ((*(float *)(param_2 + 0x58) != 0.5) || (*(float *)((long)param_2 + 0x2c4) != 0.5)) {
    param_2[0x58] = 0x3f0000003f000000;
    FUN_0091ada4(plVar1);
  }
  FUN_00b0914c(param_2,1);
  (**(code **)(*param_2 + 0x170))(param_2);
  if (*(long *)(lVar10 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b2af3c(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  fVar3 = (float)(**(code **)(*param_3 + 0x48))();
  (**(code **)(*param_3 + 0x48))(param_3);
  param_2 = param_2 + 22.0;
  FUN_00f13f08(fVar3 + 22.0,param_3 + 0x6c);
  local_50 = 0x3f0000003f000000;
  FUN_00b12ff0(param_3 + 0x6c,&local_50);
  uVar4 = (**(code **)(*param_3 + 0x48))(param_3);
  local_50 = CONCAT44(param_2,uVar4);
  FUN_00f13f18(param_3 + 0x102,&local_50);
  uVar4 = (**(code **)(*param_3 + 0x48))(param_3);
  local_50 = CONCAT44(param_2,uVar4);
  FUN_00f13f18(param_3 + 0x4e,&local_50);
  fVar3 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  param_2 = param_2 * -0.5;
  if ((*(float *)(param_3 + 0x16c) != fVar3 * -0.5) ||
     (*(float *)((long)param_3 + 0xb64) != param_2)) {
    *(float *)(param_3 + 0x16c) = fVar3 * -0.5;
    *(float *)((long)param_3 + 0xb64) = param_2;
    FUN_0091ada4(param_3 + 0x164);
  }
  fVar3 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  plVar1 = param_3 + 0x175;
  param_2 = param_2 * 0.935;
  FUN_00b1265c(fVar3 * 0.95,param_2,0x40800000,plVar1);
  fVar5 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar5 = (fVar5 - fVar3 * 0.95) * 0.5;
  (**(code **)(*param_3 + 0x48))(param_3);
  fVar3 = param_2 * 0.5;
  if ((*(float *)(param_3 + 0x17d) != fVar5) ||
     (param_2 = *(float *)((long)param_3 + 0xbec), param_2 != fVar3)) {
    *(float *)(param_3 + 0x17d) = fVar5;
    *(float *)((long)param_3 + 0xbec) = fVar3;
    FUN_0091ada4(plVar1);
  }
  local_50 = 0x3f0000003f000000;
  (**(code **)(param_3[0x175] + 0x28))(plVar1,&local_50);
  plVar1 = param_3 + 0x222;
  uVar6 = (**(code **)(*param_3 + 0x48))(param_3);
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_00b1265c(uVar6,plVar1);
  (**(code **)(*param_3 + 0x48))(param_3);
  fVar3 = param_2 * 0.5;
  if ((*(float *)(param_3 + 0x22a) != 0.0) ||
     (param_2 = *(float *)((long)param_3 + 0x1154), param_2 != fVar3)) {
    *(undefined4 *)(param_3 + 0x22a) = 0;
    *(float *)((long)param_3 + 0x1154) = fVar3;
    FUN_0091ada4(plVar1);
  }
  local_50 = 0x3f0000003f000000;
  (**(code **)(param_3[0x222] + 0x28))(plVar1,&local_50);
  plVar1 = param_3 + 0x120;
  (**(code **)(*param_3 + 0x48))(param_3);
  fVar3 = param_2 * 0.5;
  if ((*(float *)(param_3 + 0x128) != 0.0) ||
     (param_2 = *(float *)((long)param_3 + 0x944), param_2 != fVar3)) {
    *(undefined4 *)(param_3 + 0x128) = 0;
    *(float *)((long)param_3 + 0x944) = fVar3;
    FUN_0091ada4(plVar1);
  }
  local_50 = 0x3f8000003f000000;
  (**(code **)(param_3[0x120] + 0x28))(plVar1,&local_50);
  uVar6 = (**(code **)(*param_3 + 0x48))(param_3);
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_00f13f08(uVar6,param_2 * 0.4,plVar1);
  plVar1 = param_3 + 0x13e;
  fVar3 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  FUN_00f0db64((fVar3 + -36.0) / 1.1,0,0x3f800000,plVar1);
  fVar3 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar5 = 18.0;
  fVar7 = 18.0 - fVar3 * 0.5;
  (**(code **)(*param_3 + 0x48))(param_3);
  fVar3 = fVar5 * 0.5 + -12.0;
  if ((*(float *)(param_3 + 0x146) != fVar7) || (*(float *)((long)param_3 + 0xa34) != fVar3)) {
    *(float *)(param_3 + 0x146) = fVar7;
    *(float *)((long)param_3 + 0xa34) = fVar3;
    FUN_0091ada4(plVar1);
  }
  local_50 = 0x3f80000000000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_50);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

