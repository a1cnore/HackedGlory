// functions/00b25 — 18 functions
#include "libGameKindred.h"




void FUN_00b250d0(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined2 local_50;
  undefined1 local_4e;
  undefined1 local_4d;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(int *)(param_1 + 0x1140) != 0) {
    lVar6 = FUN_00965ecc(param_1);
    local_4e = 0xff;
    local_50 = 0xffff;
    local_4d = (undefined1)(int)(*(float *)(lVar6 + 0x18) * 255.0);
    fVar10 = *(float *)(param_1 + 0x1130);
    fVar11 = *(float *)(param_1 + 0x1134);
    lVar6 = FUN_00f0a7d4(param_1 + 0xf0,*(undefined4 *)(param_1 + 0x1140));
    fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 8));
    uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0xf0) + 8) + 0x3c);
    fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 10));
    fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 4));
    fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 6));
    fVar4 = 0.0 - fVar3 * 0.0;
    fVar7 = 0.0 - fVar7 * 0.0;
    fVar9 = 1.0 / (float)(uVar1 & 0x3fff);
    FUN_00965b68(SUB42(fVar4,0),fVar7,SUB42(fVar10 + fVar4,0),SUB42(fVar11 + fVar7,0),0,
                 fVar9 * fVar8,1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * fVar5,
                 (fVar8 + fVar3) * fVar9,param_2,&local_50,0);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b25210(long param_1)

{
  FUN_00b250d0(param_1 + -0xb8);
  return;
}




undefined8 FUN_00b25218(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0xf0) + 8) + 0x30;
  return 1;
}




undefined8 FUN_00b25230(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0x38) + 8) + 0x30;
  return 1;
}




void FUN_00b25248(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b25250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x180))();
  return;
}




void FUN_00b25254(undefined8 *param_1)

{
  FUN_00f0d160();
  *param_1 = &PTR_FUN_027d3cc8;
  param_1[0x17] = &PTR_FUN_027d3e40;
  FUN_00e70314(param_1 + 0x26);
  FUN_00e70510(param_1 + 0x28);
  param_1[0x2a] = 0;
  *(undefined2 *)(param_1 + 0x2b) = 0;
  FUN_00f0d998(param_1,1);
  return;
}




void FUN_00b252ac(long param_1,undefined8 param_2,byte param_3,byte param_4)

{
  FUN_00910394(param_1 + 0x140);
  *(byte *)(param_1 + 0x158) = param_3 & 1;
  *(byte *)(param_1 + 0x159) = param_4 & 1;
  FUN_00b252ec(param_1);
  return;
}




void FUN_00b252ec(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_58;
  void *local_50;
  timespec local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (-1 < param_1[0x2a]) {
    FUN_00e70510(&local_58);
    lVar6 = param_1[0x2a];
    clock_gettime(1,&local_48);
    lVar4 = local_48.tv_nsec - param_1[0x27];
    lVar3 = local_48.tv_sec - param_1[0x26];
    if (lVar4 < 0) {
      lVar3 = lVar3 + -1;
      lVar4 = local_48.tv_nsec + (1000000000 - param_1[0x27]);
    }
    uVar5 = (ulong)((double)lVar6 + (double)(lVar4 + lVar3 * 1000000000) * -1e-09);
    uVar5 = uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU);
    if (*(char *)((long)param_1 + 0x159) == '\0') {
      FUN_00cb55c0(&local_48,param_1 + 0x28,uVar5,(char)param_1[0x2b]);
    }
    else {
      FUN_00cb6178(&local_48,param_1 + 0x28,uVar5,(char)param_1[0x2b]);
    }
    FUN_00910394(&local_58,&local_48);
    if ((void *)local_48.tv_nsec != (void *)0x0) {
      operator_delete__((void *)local_48.tv_nsec);
      local_48.tv_sec = 0;
      local_48.tv_nsec = 0;
    }
    uVar2 = FUN_00f08be8(param_1 + 0x1a);
    uVar5 = FUN_00e70ca0(&local_58,uVar2,0xffffffff);
    if ((uVar5 & 1) == 0) {
      (**(code **)(*param_1 + 0x138))(param_1,&local_58);
    }
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
      local_58 = 0;
      local_50 = (void *)0x0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b25438(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x150) = *param_2;
  FUN_00e70314(param_1 + 0x130);
  FUN_00b252ec(param_1);
  return;
}




void FUN_00b25468(long *param_1)

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
  undefined4 uVar10;
  long lVar11;
  code *local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar11 = tpidr_el0;
  local_68 = *(long *)(lVar11 + 0x28);
  FUN_00f017e8();
  plVar1 = param_1 + 0x11;
  *param_1 = (long)&PTR_FUN_027de6f0;
  FUN_00ab6c24(plVar1,0);
  plVar2 = param_1 + 0x2c9;
  FUN_00ab6c24(plVar2,0);
  plVar3 = param_1 + 0x581;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x59f;
  FUN_00f0e4a8(plVar4);
  plVar5 = param_1 + 0x5bd;
  FUN_00f0e4a8(plVar5);
  plVar6 = param_1 + 0x5db;
  FUN_00f017e8(plVar6);
  plVar7 = param_1 + 0x5ec;
  param_1[0x5db] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8(plVar7);
  plVar8 = param_1 + 0x60a;
  FUN_00f0e4a8(plVar8);
  plVar9 = param_1 + 0x628;
  FUN_00f0e4a8(plVar9);
  *(undefined1 *)(param_1 + 0x646) = 1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  FUN_00f023ec(plVar6,plVar9,1);
  FUN_00f023ec(plVar6,plVar7,1);
  FUN_00f023ec(plVar6,plVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f0d92c(param_1 + 0xf5,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80,&DAT_01bee7fa);
  local_98 = (code *)CONCAT44(local_98._4_4_,0xff404040);
  FUN_00ab7588(0x3f800000,plVar1,&local_98);
  FUN_00b09144(0,plVar1);
  uVar10 = DAT_03210c64;
  local_98 = FUN_00b25844;
  local_80 = 0;
  local_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  local_70 = uVar10;
  FUN_009693a0(param_1 + 0x12,&local_98);
  FUN_00ab7520(plVar1,1);
  FUN_00ab75b0(0x3f000000,plVar1,&DAT_01bee7fa);
  if ((*(float *)(param_1 + 0x2d1) != 0.0) || (*(float *)((long)param_1 + 0x168c) != 0.0)) {
    param_1[0x2d1] = 0;
    FUN_0091ada4(plVar2);
  }
  local_98 = (code *)0x3f000000;
  (**(code **)(param_1[0x2c9] + 0x28))(plVar2,&local_98);
  FUN_00f0d92c(param_1 + 0x3ad,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80,&DAT_01bee7fa);
  local_98 = (code *)CONCAT44(local_98._4_4_,0xff404040);
  FUN_00ab7588(0x3f800000,plVar2,&local_98);
  FUN_00b09144(0,plVar2);
  local_98 = FUN_00b25844;
  local_88 = 0;
  local_80 = 0;
  local_78 = 1;
  plStack_90 = param_1;
  local_70 = uVar10;
  FUN_009693a0(param_1 + 0x2ca,&local_98);
  FUN_00ab7520(plVar2,1);
  FUN_00ab75b0(0x3f000000,plVar2,&DAT_01bee7fa);
  FUN_00f0e548(plVar7,PTR_s_build___MenuPartsCommon_tga_02be3530,"square_button_fill_left");
  FUN_00f0e548(plVar8,PTR_s_build___MenuPartsCommon_tga_02be3530,"square_button_fill_right");
  FUN_00f0e548(plVar9,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"square_button_left");
  FUN_00f0e548(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"square_button_right");
  FUN_00f0e548(plVar5,PTR_s_build___MenuPartsCommon_tga_02be3530,"square_button_middle");
  if (*(long *)(lVar11 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b25844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00b25ddc(param_1,param_2,param_5);
  return;
}




void FUN_00b2584c(float param_1,undefined1 param_2 [16],float param_3,long param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  float fVar3;
  ulong uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar4 = (ulong)(uint)(param_1 * 0.94);
  lVar1 = param_4 + 0x88;
  FUN_00ab703c(0,uVar4,uVar4,lVar1,0,param_5,&DAT_01bee7fa,&DAT_03218ef8,0);
  FUN_00ab7628(param_3 * 92.0,lVar1);
  fVar3 = (float)FUN_00f13e54(lVar1);
  fVar5 = 4.0;
  fVar3 = 4.0 - fVar3 * 0.5;
  FUN_00f13e54(lVar1);
  if ((*(float *)(param_4 + 200) != fVar3) || (*(float *)(param_4 + 0xcc) != fVar5 * 0.5)) {
    *(float *)(param_4 + 200) = fVar3;
    *(float *)(param_4 + 0xcc) = fVar5 * 0.5;
    FUN_0091ada4(lVar1);
  }
  local_70 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_4 + 0x88) + 0x28))(lVar1,&local_70);
  lVar1 = param_4 + 0x1648;
  FUN_00ab703c(0,uVar4,uVar4,lVar1,0,param_6,&DAT_01bee7fa,&DAT_03218ef8,0);
  FUN_00ab7628(param_3 * 92.0,lVar1);
  fVar3 = (float)FUN_00f13e54(lVar1);
  fVar5 = fVar3 * 0.5 + -4.0;
  FUN_00f13e54(lVar1);
  fVar3 = (float)uVar4 * 0.5;
  if ((*(float *)(param_4 + 0x1688) != fVar5) ||
     (uVar4 = (ulong)(uint)*(float *)(param_4 + 0x168c), *(float *)(param_4 + 0x168c) != fVar3)) {
    *(float *)(param_4 + 0x1688) = fVar5;
    *(float *)(param_4 + 0x168c) = fVar3;
    FUN_0091ada4(lVar1);
  }
  local_70 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_4 + 0x1648) + 0x28))(lVar1,&local_70);
  lVar1 = param_4 + 0x2de8;
  FUN_00f0e700(lVar1);
  fVar3 = (float)uVar4 * 0.5;
  if ((*(float *)(param_4 + 0x2c48) != -(param_1 * 0.965)) ||
     (*(float *)(param_4 + 0x2c4c) != fVar3)) {
    *(float *)(param_4 + 0x2c48) = -(param_1 * 0.965);
    *(float *)(param_4 + 0x2c4c) = fVar3;
    FUN_0091ada4(param_4 + 0x2c08);
  }
  local_70 = 0x3f0000003f800000;
  (**(code **)(*(long *)(param_4 + 0x2c08) + 0x28))(param_4 + 0x2c08,&local_70);
  if ((*(float *)(param_4 + 0x2fa0) != *(float *)(param_4 + 0x2c48)) ||
     (*(float *)(param_4 + 0x2fa4) != *(float *)(param_4 + 0x2c4c))) {
    *(float *)(param_4 + 0x2fa0) = *(float *)(param_4 + 0x2c48);
    *(float *)(param_4 + 0x2fa4) = *(float *)(param_4 + 0x2c4c);
    FUN_0091ada4(param_4 + 0x2f60);
  }
  local_70 = 0x3f0000003f800000;
  param_1 = param_1 * 0.965;
  (**(code **)(*(long *)(param_4 + 0x2f60) + 0x28))(param_4 + 0x2f60,&local_70);
  if ((*(float *)(param_4 + 0x2e28) != 0.0) || (*(float *)(param_4 + 0x2e2c) != fVar3)) {
    *(undefined4 *)(param_4 + 0x2e28) = 0;
    *(float *)(param_4 + 0x2e2c) = fVar3;
    FUN_0091ada4(lVar1);
  }
  local_70 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_4 + 0x2de8) + 0x28))(lVar1,&local_70);
  FUN_00f13f08(param_1 + param_1,uVar4,lVar1);
  uVar6 = 0;
  if (*(char *)(param_4 + 0x3230) != '\0') {
    uVar6 = 0x3f800000;
  }
  lVar1 = param_4 + 0x3140;
  if ((*(float *)(param_4 + 0x3180) != *(float *)(param_4 + 0x2e28)) ||
     (*(float *)(param_4 + 0x3184) != *(float *)(param_4 + 0x2e2c))) {
    *(float *)(param_4 + 0x3180) = *(float *)(param_4 + 0x2e28);
    *(float *)(param_4 + 0x3184) = *(float *)(param_4 + 0x2e2c);
    FUN_0091ada4(lVar1);
  }
  local_70 = CONCAT44(0x3f000000,uVar6);
  (**(code **)(*(long *)(param_4 + 0x3140) + 0x28))(lVar1,&local_70);
  FUN_00f13f08(param_1 + 2.0,(float)uVar4 + -4.0,lVar1);
  if ((*(float *)(param_4 + 0x2d38) != param_1) || (*(float *)(param_4 + 0x2d3c) != fVar3)) {
    *(float *)(param_4 + 0x2d38) = param_1;
    *(float *)(param_4 + 0x2d3c) = fVar3;
    FUN_0091ada4(param_4 + 0x2cf8);
  }
  local_70 = 0x3f00000000000000;
  (**(code **)(*(long *)(param_4 + 0x2cf8) + 0x28))(param_4 + 0x2cf8,&local_70);
  if ((*(float *)(param_4 + 0x3090) != *(float *)(param_4 + 0x2d38)) ||
     (*(float *)(param_4 + 0x3094) != *(float *)(param_4 + 0x2d3c))) {
    *(float *)(param_4 + 0x3090) = *(float *)(param_4 + 0x2d38);
    *(float *)(param_4 + 0x3094) = *(float *)(param_4 + 0x2d3c);
    FUN_0091ada4(param_4 + 0x3050);
  }
  local_70 = 0x3f00000000000000;
  (**(code **)(*(long *)(param_4 + 0x3050) + 0x28))(param_4 + 0x3050,&local_70);
  FUN_00b25c6c(param_4);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b25c6c(long param_1)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 *puVar3;
  byte bVar4;
  long lVar5;
  undefined4 local_50;
  undefined4 local_4c;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  pbVar1 = (byte *)(param_1 + 0x3230);
  puVar3 = &DAT_01bee7fa;
  if (*pbVar1 != 0) {
    puVar3 = &DAT_01bee7f6;
  }
  FUN_00ab7570(0x3f800000,param_1 + 0x88,puVar3);
  puVar3 = &DAT_01bee7f6;
  if (*pbVar1 != 0) {
    puVar3 = &DAT_01bee7fa;
  }
  FUN_00ab7570(0x3f800000,param_1 + 0x1648,puVar3);
  local_50 = 0;
  if (*pbVar1 != 0) {
    local_50 = 0x3f800000;
  }
  if (NAN(*(float *)(param_1 + 0x3180)) || NAN(*(float *)(param_1 + 0x3184))) {
    FUN_0091ada4(param_1 + 0x3140);
  }
  local_4c = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x3140) + 0x28))((long *)(param_1 + 0x3140),&local_50);
  bVar4 = *pbVar1;
  *(uint *)(param_1 + 0x2fe4) = *(uint *)(param_1 + 0x2fe4) & 0xfffffffb | (uint)bVar4 << 2;
  uVar2 = ((uint)bVar4 << 2 ^ 4) & 0xfc;
  *(uint *)(param_1 + 0x2d7c) = *(uint *)(param_1 + 0x2d7c) & 0xfffffffb | (uint)bVar4 << 2;
  *(uint *)(param_1 + 0x30d4) = *(uint *)(param_1 + 0x30d4) & 0xfffffffb | uVar2;
  *(uint *)(param_1 + 0x2c8c) = *(uint *)(param_1 + 0x2c8c) & 0xfffffffb | uVar2;
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b25db8(long param_1,byte param_2)

{
  if (*(byte *)(param_1 + 0x3230) == (param_2 & 1)) {
    return;
  }
  *(byte *)(param_1 + 0x3230) = param_2 & 1;
  FUN_00b25c6c();
  return;
}




void FUN_00b25ddc(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((bool)*(char *)(param_1 + 0x3230) != (param_3 == 0)) {
    *(char *)(param_1 + 0x3230) = param_3 == 0;
    FUN_00b25c6c(param_1);
    uVar2 = FUN_00f048a4("UI::EVENT_CONTROL_TOGGLED");
    FUN_00f048e0(auStack_48,uVar2,0);
    FUN_00f04760(param_1,auStack_48,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b25e7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027de6f0;
  param_1[0x628] = &PTR_FUN_028266f0;
  param_1[0x63f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x642);
  FUN_00f13d08(param_1 + 0x628);
  param_1[0x60a] = &PTR_FUN_028266f0;
  param_1[0x621] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x624);
  FUN_00f13d08(param_1 + 0x60a);
  param_1[0x5ec] = &PTR_FUN_028266f0;
  param_1[0x603] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x606);
  FUN_00f13d08(param_1 + 0x5ec);
  FUN_00f01868(param_1 + 0x5db);
  param_1[0x5bd] = &PTR_FUN_028266f0;
  param_1[0x5d4] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x5d7);
  FUN_00f13d08(param_1 + 0x5bd);
  param_1[0x59f] = &PTR_FUN_028266f0;
  param_1[0x5b6] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x5b9);
  FUN_00f13d08(param_1 + 0x59f);
  param_1[0x581] = &PTR_FUN_028266f0;
  param_1[0x598] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x59b);
  FUN_00f13d08(param_1 + 0x581);
  FUN_009c7fa8(param_1 + 0x2c9);
  FUN_009c7fa8(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00b25fbc(void *param_1)

{
  FUN_00b25e7c();
  operator_delete(param_1);
  return;
}




void FUN_00b25fe0(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_0092ea9c();
  if (*(int *)(param_1 + 0x28) == 1) {
    ppuVar3 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
    ppuVar4 = &PTR_s_build___Fonts_Brandon_Regular_40_02be9c48;
  }
  else {
    if (*(int *)(param_1 + 0x28) != 0) goto LAB_00b26070;
    ppuVar3 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98;
    ppuVar4 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  }
  if ((uVar2 & 1) == 0) {
    ppuVar3 = ppuVar4;
  }
  FUN_008fa54c(local_50,*ppuVar3);
  FUN_008fce60(param_2,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
LAB_00b26070:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

