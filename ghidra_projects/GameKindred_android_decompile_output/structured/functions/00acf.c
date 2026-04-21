// functions/00acf — 5 functions
#include "libGameKindred.h"




void FUN_00acf034(long param_1,uint param_2)

{
  param_2 = param_2 & 1;
  FUN_00b09454(param_1 + 0x5698,param_2);
  FUN_00b09454(param_1 + 0x50a0,param_2);
  FUN_00b09454(param_1 + 0x2560,param_2);
  FUN_00b09454(param_1 + 0x3ae0,param_2);
  return;
}




void FUN_00acf090(long param_1)

{
  if (*(char *)(param_1 + 0x5e10) != '\0') {
    FUN_00acf0c0();
    *(char *)(param_1 + 0x5e10) = '\0';
  }
  return;
}




void FUN_00acf0c0(undefined1 param_1 [16],undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  float *pfVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_98 [2];
  long local_88;
  
  lVar6 = tpidr_el0;
  local_88 = *(long *)(lVar6 + 0x28);
  uVar10 = (**(code **)(*param_3 + 0x48))();
  local_98[0] = 0x3f000000;
  (**(code **)(*param_3 + 0x28))(param_3,local_98);
  fVar11 = 0.5;
  plVar1 = param_3 + 0x28;
  if ((*(float *)(param_3 + 0x32) != 0.5) || (*(float *)((long)param_3 + 0x194) != 0.0)) {
    param_3[0x32] = 0x3f000000;
    FUN_0091ada4(plVar1);
  }
  FUN_00f13f08(uVar10,param_2,plVar1);
  if ((*(float *)(param_3 + 0x30) != 0.0) || (*(float *)((long)param_3 + 0x184) != 0.0)) {
    param_3[0x30] = 0;
    FUN_0091ada4(plVar1);
  }
  local_98[0] = 0x3f000000;
  (**(code **)(param_3[0x28] + 0x28))(plVar1,local_98);
  plVar1 = param_3 + 0x82;
  fVar12 = (float)uVar10;
  FUN_00f13f08(fVar12 + 8.0,0x40800000,plVar1);
  if ((*(float *)(param_3 + 0x8a) != 0.0) || (*(float *)((long)param_3 + 0x454) != 0.0)) {
    param_3[0x8a] = 0;
    FUN_0091ada4(plVar1);
  }
  local_98[0] = 0x3f8000003f000000;
  (**(code **)(param_3[0x82] + 0x28))(plVar1,local_98);
  fVar13 = (float)param_2;
  fVar14 = fVar13 * 0.75;
  plVar1 = param_3 + 0xa0;
  FUN_00f13f08(0x40800000,fVar14,plVar1);
  fVar16 = fVar12 * -0.5;
  if ((*(float *)(param_3 + 0xa8) != fVar16) || (*(float *)((long)param_3 + 0x544) != 0.0)) {
    *(float *)(param_3 + 0xa8) = fVar16;
    *(undefined4 *)((long)param_3 + 0x544) = 0;
    FUN_0091ada4(plVar1);
  }
  local_98[0] = 0x3f800000;
  (**(code **)(param_3[0xa0] + 0x28))(plVar1,local_98);
  plVar1 = param_3 + 0xbe;
  FUN_00f13f08(0x40800000,plVar1);
  fVar15 = fVar12 * 0.5;
  if ((*(float *)(param_3 + 0xc6) != fVar15) || (*(float *)((long)param_3 + 0x634) != 0.0)) {
    *(float *)(param_3 + 0xc6) = fVar15;
    *(undefined4 *)((long)param_3 + 0x634) = 0;
    FUN_0091ada4(plVar1);
  }
  local_98[0] = 0;
  (**(code **)(param_3[0xbe] + 0x28))(plVar1,local_98);
  fVar7 = 0.0;
  if ((*(byte *)((long)param_3 + 0x7ec) >> 2 & 1) != 0) {
    plVar1 = param_3 + 0x13a;
    FUN_00f01c20(plVar1);
    fVar14 = fVar14 * 0.5 + 20.0;
    if ((*(float *)(param_3 + 0x142) != 0.0) || (*(float *)((long)param_3 + 0xa14) != fVar14)) {
      *(undefined4 *)(param_3 + 0x142) = 0;
      *(float *)((long)param_3 + 0xa14) = fVar14;
      FUN_0091ada4(plVar1);
    }
    local_98[0] = 0x3f0000003f000000;
    (**(code **)(param_3[0x13a] + 0x28))(plVar1,local_98);
    fVar7 = (float)FUN_00f01c20(plVar1);
    fVar7 = fVar7 * -0.5 + 0.0 + -20.0;
    if ((*(float *)(param_3 + 0x106) != fVar7) || (*(float *)((long)param_3 + 0x834) != fVar14)) {
      *(float *)(param_3 + 0x106) = fVar7;
      *(float *)((long)param_3 + 0x834) = fVar14;
      FUN_0091ada4(param_3 + 0xfe);
    }
    local_98[0] = 0x3f0000003f800000;
    (**(code **)(param_3[0xfe] + 0x28))(param_3 + 0xfe,local_98);
    plVar2 = param_3 + 0x11c;
    fVar8 = (float)FUN_00f01c20(plVar1);
    fVar7 = *(float *)(param_3 + 0x124);
    fVar8 = fVar8 * 0.5 + 0.0 + 20.0;
    if ((fVar7 != fVar8) || (fVar7 = *(float *)((long)param_3 + 0x924), fVar7 != fVar14)) {
      *(float *)(param_3 + 0x124) = fVar8;
      *(float *)((long)param_3 + 0x924) = fVar14;
      FUN_0091ada4(plVar2);
    }
    local_98[0] = 0x3f00000000000000;
    (**(code **)(*plVar2 + 0x28))(plVar2,local_98);
    FUN_00f01c20(plVar1);
    fVar7 = fVar7 + 40.0;
  }
  if ((*(float *)(param_3 + 0x2d6) != 0.0) || (*(float *)((long)param_3 + 0x16b4) != fVar7)) {
    *(undefined4 *)(param_3 + 0x2d6) = 0;
    *(float *)((long)param_3 + 0x16b4) = fVar7;
    FUN_0091ada4(param_3 + 0x2ce);
  }
  local_98[0] = 0x3f000000;
  (**(code **)(param_3[0x2ce] + 0x28))(param_3 + 0x2ce,local_98);
  plVar1 = param_3 + 0x46;
  if ((*(float *)(param_3 + 0x4e) != 0.0) || (*(float *)((long)param_3 + 0x274) != fVar7)) {
    *(undefined4 *)(param_3 + 0x4e) = 0;
    *(float *)((long)param_3 + 0x274) = fVar7;
    FUN_0091ada4(plVar1);
  }
  local_98[0] = 0x3f000000;
  (**(code **)(param_3[0x46] + 0x28))(plVar1,local_98);
  plVar2 = param_3 + 0x460;
  fVar14 = 0.0;
  FUN_00f0db64(fVar12 + -40.0,0,0x3f800000,plVar2);
  FUN_00f0d4e0(plVar2);
  fVar14 = fVar14 * 0.5 + 20.0;
  if ((*(float *)(param_3 + 0x468) != 0.0) || (*(float *)((long)param_3 + 0x2344) != fVar14)) {
    *(undefined4 *)(param_3 + 0x468) = 0;
    *(float *)((long)param_3 + 0x2344) = fVar14;
    FUN_0091ada4(plVar2);
  }
  local_98[0] = 0x3f0000003f000000;
  (**(code **)(param_3[0x460] + 0x28))(plVar2,local_98);
  plVar3 = param_3 + 0x2df;
  plVar4 = param_3 + 0x486;
  fVar14 = (float)FUN_00ac6090(plVar3);
  fVar8 = 0.0;
  FUN_00f0db64((fVar12 + -60.0) - (fVar14 + fVar14),0,0x3f800000,plVar4);
  FUN_00f0d4e0(plVar2);
  fVar14 = fVar8 + 40.0;
  FUN_00f0d4e0(plVar4);
  fVar14 = fVar14 + fVar8 * 0.5;
  if ((*(float *)(param_3 + 0x48e) != 0.0) || (*(float *)((long)param_3 + 0x2474) != fVar14)) {
    *(undefined4 *)(param_3 + 0x48e) = 0;
    *(float *)((long)param_3 + 0x2474) = fVar14;
    FUN_0091ada4(plVar4);
  }
  local_98[0] = 0x3f0000003f000000;
  (**(code **)(param_3[0x486] + 0x28))(plVar4,local_98);
  fVar8 = (float)FUN_00ac6098(plVar3);
  fVar8 = fVar14 + fVar8 * -0.5;
  if ((*(float *)(param_3 + 0x2e7) != fVar16 + 20.0) ||
     (*(float *)((long)param_3 + 0x173c) != fVar8)) {
    *(float *)(param_3 + 0x2e7) = fVar16 + 20.0;
    *(float *)((long)param_3 + 0x173c) = fVar8;
    FUN_0091ada4(plVar3);
  }
  plVar2 = param_3 + 0x4ac;
  fVar8 = (float)FUN_00f01c20(plVar4);
  fVar9 = (float)FUN_00f01c20(plVar2);
  fVar8 = fVar8 * 0.5 + 0.0 + fVar9 * 0.5 + 20.0;
  if ((*(float *)(param_3 + 0x4b4) != fVar8) || (*(float *)((long)param_3 + 0x25a4) != fVar14)) {
    *(float *)(param_3 + 0x4b4) = fVar8;
    *(float *)((long)param_3 + 0x25a4) = fVar14;
    FUN_0091ada4(plVar2);
  }
  local_98[0] = 0x3f0000003f000000;
  (**(code **)(param_3[0x4ac] + 0x28))(plVar2,local_98);
  fVar14 = 260.0;
  FUN_00f13f08(uVar10,plVar1);
  if ((*(float *)(param_3 + 0x50) != 0.5) || (*(float *)((long)param_3 + 0x284) != 0.0)) {
    param_3[0x50] = 0x3f000000;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0e700(plVar1);
  plVar2 = param_3 + 0x28a;
  fVar7 = fVar7 + fVar14;
  fVar8 = (float)FUN_00f0eac0(plVar2);
  plVar3 = param_3 + 0x2a8;
  fVar9 = (float)FUN_00f01c20(plVar3);
  if (fVar8 <= fVar9) {
    fVar8 = fVar9;
  }
  fVar9 = (fVar15 + -20.0) - fVar8 * 0.5;
  FUN_00f0eac0(plVar2);
  fVar14 = fVar14 * 0.5;
  fVar8 = fVar7 + 20.0 + fVar14;
  if ((*(float *)(param_3 + 0x292) != fVar9) || (*(float *)((long)param_3 + 0x1494) != fVar8)) {
    *(float *)(param_3 + 0x292) = fVar9;
    *(float *)((long)param_3 + 0x1494) = fVar8;
    FUN_0091ada4(plVar2);
  }
  local_98[0] = 0x3f0000003f000000;
  (**(code **)(param_3[0x28a] + 0x28))(plVar2,local_98);
  FUN_00f0eac0(plVar2);
  fVar8 = fVar8 + fVar14 * 0.4;
  if ((*(float *)(param_3 + 0x2b0) != fVar9) || (*(float *)((long)param_3 + 0x1584) != fVar8)) {
    *(float *)(param_3 + 0x2b0) = fVar9;
    *(float *)((long)param_3 + 0x1584) = fVar8;
    FUN_0091ada4(plVar3);
  }
  local_98[0] = 0x3f000000;
  (**(code **)(param_3[0x2a8] + 0x28))(plVar3,local_98);
  fVar14 = 26.0;
  if (0x13 < *(uint *)(param_3 + 0xb9f)) {
    fVar14 = 0.0;
  }
  fVar14 = fVar7 + 213.0 + fVar14;
  if ((*(float *)(param_3 + 0x179) != 0.0) || (*(float *)((long)param_3 + 0xbcc) != fVar14)) {
    *(undefined4 *)(param_3 + 0x179) = 0;
    *(float *)((long)param_3 + 0xbcc) = fVar14;
    FUN_0091ada4(param_3 + 0x171);
  }
  local_98[0] = 0x3f0000003f000000;
  (**(code **)(param_3[0x171] + 0x28))(param_3 + 0x171,local_98);
  fVar7 = fVar7 + 446.0;
  if ((*(float *)(param_3 + 0x573) != 0.0) || (*(float *)((long)param_3 + 0x2b9c) != fVar7)) {
    *(undefined4 *)(param_3 + 0x573) = 0;
    *(float *)((long)param_3 + 0x2b9c) = fVar7;
    FUN_0091ada4(param_3 + 0x56b);
  }
  local_98[0] = 0x3f000000;
  (**(code **)(param_3[0x56b] + 0x28))(param_3 + 0x56b,local_98);
  plVar2 = param_3 + 100;
  if ((*(float *)(param_3 + 0x6c) != 0.0) || (*(float *)((long)param_3 + 0x364) != fVar7)) {
    *(undefined4 *)(param_3 + 0x6c) = 0;
    *(float *)((long)param_3 + 0x364) = fVar7;
    FUN_0091ada4(plVar2);
  }
  local_98[0] = 0x3f000000;
  (**(code **)(param_3[100] + 0x28))(plVar2,local_98);
  fVar7 = fVar13 - fVar7;
  FUN_00f13f08(uVar10,plVar2);
  if ((*(float *)(param_3 + 0x6e) != 0.5) || (*(float *)((long)param_3 + 0x374) != 0.0)) {
    param_3[0x6e] = 0x3f000000;
    FUN_0091ada4(plVar2);
  }
  if ((*(float *)(param_3 + 0x5cf) != 0.5) || (*(float *)((long)param_3 + 0x2e7c) != 0.0)) {
    param_3[0x5cf] = 0x3f000000;
    FUN_0091ada4(param_3 + 0x5c5);
  }
  plVar2 = param_3 + 0x604;
  FUN_00f01c20(plVar2);
  if ((*(float *)(param_3 + 0x60c) != 0.0) || (*(float *)((long)param_3 + 0x3064) != fVar7 * 0.5)) {
    *(undefined4 *)(param_3 + 0x60c) = 0;
    *(float *)((long)param_3 + 0x3064) = fVar7 * 0.5;
    FUN_0091ada4(plVar2);
  }
  local_98[0] = 0x3f000000;
  (**(code **)(param_3[0x604] + 0x28))(plVar2,local_98);
  fVar14 = 0.0;
  FUN_00f0bc10(0,0,0x41600000,local_98);
  FUN_00f0c168(param_3 + 0x5ac,local_98);
  (**(code **)(param_3[0x5ac] + 0x90))(param_3 + 0x5ac);
  plVar2 = param_3 + 0x595;
  uVar10 = FUN_00f01c54(plVar2,0,0,1,1);
  FUN_00f01c54(plVar2,0,0,1,1);
  FUN_00f13f08(uVar10,plVar2);
  plVar3 = param_3 + 0x641;
  if ((*(float *)(param_3 + 0x649) != 0.0) || (*(float *)((long)param_3 + 0x324c) != 0.0)) {
    param_3[0x649] = 0;
    FUN_0091ada4(plVar3);
  }
  local_98[0] = 0x3f000000;
  (**(code **)(param_3[0x641] + 0x28))(plVar3,local_98);
  FUN_00f01c20(plVar3);
  if ((*(float *)(param_3 + 0x6b3) != 0.0) || (*(float *)((long)param_3 + 0x359c) != fVar14 + 14.0))
  {
    *(undefined4 *)(param_3 + 0x6b3) = 0;
    *(float *)((long)param_3 + 0x359c) = fVar14 + 14.0;
    FUN_0091ada4(param_3 + 0x6ab);
  }
  local_98[0] = 0;
  (**(code **)(param_3[0x6ab] + 0x28))(param_3 + 0x6ab,local_98);
  plVar3 = param_3 + 0x62a;
  uVar10 = FUN_00f01c54(plVar3,0,0,1,1);
  FUN_00f01c54(plVar3,0,0,1,1);
  FUN_00f13f08(uVar10,plVar3);
  if ((*(float *)(param_3 + 0x584) != fVar16) || (*(float *)((long)param_3 + 0x2c24) != 20.0)) {
    *(float *)(param_3 + 0x584) = fVar16;
    *(undefined4 *)((long)param_3 + 0x2c24) = 0x41a00000;
    FUN_0091ada4(param_3 + 0x57c);
  }
  if ((*(byte *)((long)param_3 + 0x31d4) & 4) != 0) {
    fVar11 = 0.25;
  }
  if ((*(float *)(param_3 + 0x59d) != fVar12 * fVar11) ||
     (*(float *)((long)param_3 + 0x2cec) != 0.0)) {
    *(float *)(param_3 + 0x59d) = fVar12 * fVar11;
    *(undefined4 *)((long)param_3 + 0x2cec) = 0;
    FUN_0091ada4(plVar2);
  }
  local_98[0] = 0x3f000000;
  (**(code **)(param_3[0x595] + 0x28))(plVar2,local_98);
  fVar11 = *(float *)(param_3 + 0x632);
  if ((fVar11 != fVar12 * 0.75) || (fVar11 = *(float *)((long)param_3 + 0x3194), fVar11 != 0.0)) {
    *(float *)(param_3 + 0x632) = fVar12 * 0.75;
    *(undefined4 *)((long)param_3 + 0x3194) = 0;
    FUN_0091ada4(plVar3);
  }
  local_98[0] = 0x3f000000;
  (**(code **)(param_3[0x62a] + 0x28))(plVar3,local_98);
  plVar2 = param_3 + 0xad3;
  FUN_00f01c20(plVar2);
  fVar14 = (fVar13 - fVar11 * 0.5) + -20.0;
  fVar11 = (float)FUN_00f01c20(plVar2);
  pfVar5 = (float *)(param_3 + 0xadb);
  fVar11 = (fVar15 - fVar11 * 0.5) + -20.0;
  if ((*pfVar5 != fVar11) || (*(float *)((long)param_3 + 0x56dc) != fVar14)) {
    *pfVar5 = fVar11;
    *(float *)((long)param_3 + 0x56dc) = fVar14;
    FUN_0091ada4(plVar2);
  }
  local_98[0] = 0x3f0000003f000000;
  (**(code **)(param_3[0xad3] + 0x28))(plVar2,local_98);
  fVar13 = *pfVar5;
  plVar2 = param_3 + 0xa14;
  fVar11 = (float)FUN_00f01c20(plVar2);
  pfVar5 = (float *)(param_3 + 0xa1c);
  fVar11 = (fVar13 - fVar11) + -20.0;
  if ((*pfVar5 != fVar11) || (*(float *)((long)param_3 + 0x50e4) != fVar14)) {
    *pfVar5 = fVar11;
    *(float *)((long)param_3 + 0x50e4) = fVar14;
    FUN_0091ada4(plVar2);
  }
  local_98[0] = 0x3f0000003f000000;
  (**(code **)(param_3[0xa14] + 0x28))(plVar2,local_98);
  fVar11 = (float)FUN_00f01c20(plVar2);
  fVar11 = fVar11 * 0.5 - *pfVar5;
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  fVar11 = (fVar15 + -60.0) - fVar11;
  plVar2 = param_3 + 0x75c;
  FUN_00ab75d0(0,fVar11,fVar11,plVar2);
  fVar11 = (float)FUN_00f01c20(plVar2);
  fVar13 = *(float *)(param_3 + 0x764);
  fVar11 = fVar16 + fVar11 * 0.5 + 20.0;
  if ((fVar13 != fVar11) || (fVar13 = *(float *)((long)param_3 + 0x3b24), fVar13 != fVar14)) {
    *(float *)(param_3 + 0x764) = fVar11;
    *(float *)((long)param_3 + 0x3b24) = fVar14;
    FUN_0091ada4(plVar2);
  }
  local_98[0] = 0x3f0000003f000000;
  (**(code **)(param_3[0x75c] + 0x28))(plVar2,local_98);
  if ((*(byte *)((long)param_3 + 0x39ac) >> 2 & 1) != 0) {
    plVar2 = param_3 + 0x736;
    FUN_00f0dac8(plVar2,3);
    FUN_00f0dad0(fVar12 + -40.0,plVar2,1);
    FUN_00f0e700(plVar1);
    if ((*(float *)(param_3 + 0x73e) != 0.5) ||
       (*(float *)((long)param_3 + 0x39f4) != fVar13 + 213.0)) {
      *(undefined4 *)(param_3 + 0x73e) = 0x3f000000;
      *(float *)((long)param_3 + 0x39f4) = fVar13 + 213.0;
      FUN_0091ada4(plVar2);
    }
    local_98[0] = 0x3f0000003f000000;
    (**(code **)(*plVar2 + 0x28))(plVar2,local_98);
  }
  if (*(long *)(lVar6 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00acfe10(long param_1)

{
  *(undefined1 *)(param_1 + 0x5e10) = 1;
  return;
}




void FUN_00acfe20(long param_1,long param_2,uint param_3)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  void *pvVar10;
  float fVar11;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  void *local_78;
  undefined4 local_6c;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  *(undefined1 *)(param_1 + 0x5e13) = 1;
  *(uint *)(param_1 + 0x764) = *(uint *)(param_1 + 0x764) | 4;
  *(uint *)(param_1 + 0x39ac) = *(uint *)(param_1 + 0x39ac) & 0xfffffffb;
  FUN_008fce60(param_1 + 0x5c90);
  FUN_008fce60(param_1 + 0x5ca8,param_2 + 0x18);
  FUN_008fce60(param_1 + 0x5cc0,param_2 + 0x30);
  FUN_008fce60(param_1 + 0x5cd8,param_2 + 0x48);
  uVar6 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x5cf8) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x5cf0) = uVar6;
  *(undefined8 *)(param_1 + 0x5d00) = *(undefined8 *)(param_2 + 0x70);
  FUN_008fce60(param_1 + 0x5d08,param_2 + 0x78);
  FUN_008fce60(param_1 + 0x5d20,param_2 + 0x90);
  FUN_008fce60(param_1 + 0x5d38,param_2 + 0xa8);
  FUN_008fce60(param_1 + 0x5d50,param_2 + 0xc0);
  FUN_008fce60(param_1 + 0x5d68,param_2 + 0xd8);
  FUN_008fce60(param_1 + 0x5d80,param_2 + 0xf0);
  FUN_008fce60(param_1 + 0x5d98,param_2 + 0x108);
  FUN_008fce60(param_1 + 0x5db0,param_2 + 0x120);
  FUN_008fce60(param_1 + 0x5dc8,param_2 + 0x138);
  *(undefined1 *)(param_1 + 0x5de0) = *(undefined1 *)(param_2 + 0x150);
  FUN_00e70570(&local_68,param_2 + 0x18);
  FUN_00f0d75c(param_1 + 0x2300,&local_68);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  FUN_00e70570(&local_68,param_2 + 0x30);
  FUN_00ac5fdc(param_1 + 0x16f8,&local_68);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  uVar6 = FUN_00cb50d8(param_2 + 0x78,0);
  thunk_FUN_00e7051c(&local_68,uVar6);
  local_6c = 0xff000000;
  bVar2 = *(byte *)(param_2 + 0x78);
  uVar4 = (ulong)(bVar2 >> 1);
  __n = uVar4;
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 0x80);
  }
  sVar1 = (ulong)(DAT_03210718 >> 1);
  if ((DAT_03210718 & 1) != 0) {
    sVar1 = DAT_03210720;
  }
  if (__n == sVar1) {
    pvVar10 = *(void **)(param_2 + 0x88);
    if ((bVar2 & 1) == 0) {
      pvVar10 = (void *)(param_2 + 0x79);
    }
    pcVar7 = DAT_03210728;
    if ((DAT_03210718 & 1) == 0) {
      pcVar7 = &DAT_03210719;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar8 = (char *)(param_2 + 0x79);
        lVar9 = -uVar4;
        do {
          if (*pcVar8 != *pcVar7) goto LAB_00ad0080;
          pcVar8 = pcVar8 + 1;
          lVar9 = lVar9 + 1;
          pcVar7 = pcVar7 + 1;
        } while (lVar9 != 0);
      }
    }
    else if ((__n != 0) && (iVar5 = memcmp(pvVar10,pcVar7,__n), iVar5 != 0)) goto LAB_00ad0080;
    local_6c = 0xff90e0a1;
    goto LAB_00ad0238;
  }
LAB_00ad0080:
  sVar1 = (ulong)(DAT_03210730 >> 1);
  if ((DAT_03210730 & 1) != 0) {
    sVar1 = DAT_03210738;
  }
  if (__n == sVar1) {
    pvVar10 = *(void **)(param_2 + 0x88);
    if ((bVar2 & 1) == 0) {
      pvVar10 = (void *)(param_2 + 0x79);
    }
    pcVar7 = DAT_03210740;
    if ((DAT_03210730 & 1) == 0) {
      pcVar7 = &DAT_03210731;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar8 = (char *)(param_2 + 0x79);
        lVar9 = -uVar4;
        do {
          if (*pcVar8 != *pcVar7) goto LAB_00ad0110;
          pcVar8 = pcVar8 + 1;
          lVar9 = lVar9 + 1;
          pcVar7 = pcVar7 + 1;
        } while (lVar9 != 0);
      }
    }
    else if ((__n != 0) && (iVar5 = memcmp(pvVar10,pcVar7,__n), iVar5 != 0)) goto LAB_00ad0110;
    local_6c = 0xff90d8e0;
    goto LAB_00ad0238;
  }
LAB_00ad0110:
  sVar1 = (ulong)(DAT_03210748 >> 1);
  if ((DAT_03210748 & 1) != 0) {
    sVar1 = DAT_03210750;
  }
  if (__n == sVar1) {
    pvVar10 = *(void **)(param_2 + 0x88);
    if ((bVar2 & 1) == 0) {
      pvVar10 = (void *)(param_2 + 0x79);
    }
    pcVar7 = DAT_03210758;
    if ((DAT_03210748 & 1) == 0) {
      pcVar7 = &DAT_03210749;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar8 = (char *)(param_2 + 0x79);
        lVar9 = -uVar4;
        do {
          if (*pcVar8 != *pcVar7) goto LAB_00ad019c;
          pcVar8 = pcVar8 + 1;
          lVar9 = lVar9 + 1;
          pcVar7 = pcVar7 + 1;
        } while (lVar9 != 0);
      }
    }
    else if ((__n != 0) && (iVar5 = memcmp(pvVar10,pcVar7,__n), iVar5 != 0)) goto LAB_00ad019c;
    local_6c = 0xff4f5ed3;
  }
  else {
LAB_00ad019c:
    sVar1 = (ulong)(DAT_03210760 >> 1);
    if ((DAT_03210760 & 1) != 0) {
      sVar1 = DAT_03210768;
    }
    if (__n == sVar1) {
      pvVar10 = *(void **)(param_2 + 0x88);
      if ((bVar2 & 1) == 0) {
        pvVar10 = (void *)(param_2 + 0x79);
      }
      pcVar7 = DAT_03210770;
      if ((DAT_03210760 & 1) == 0) {
        pcVar7 = &DAT_03210761;
      }
      if ((bVar2 & 1) == 0) {
        if (__n != 0) {
          pcVar8 = (char *)(param_2 + 0x79);
          lVar9 = -uVar4;
          do {
            if (*pcVar8 != *pcVar7) goto LAB_00ad0238;
            pcVar8 = pcVar8 + 1;
            lVar9 = lVar9 + 1;
            pcVar7 = pcVar7 + 1;
          } while (lVar9 != 0);
        }
      }
      else if ((__n != 0) && (iVar5 = memcmp(pvVar10,pcVar7,__n), iVar5 != 0)) goto LAB_00ad0238;
      local_6c = 0xffffffff;
    }
  }
LAB_00ad0238:
  FUN_00f0d75c(param_1 + 0x2430,&local_68);
  FUN_00f0d7fc(param_1 + 0x2430,&local_6c);
  FUN_00cb6184(&local_80,*(undefined4 *)(param_2 + 0x70),0);
  FUN_00cb6184(&local_90,*(int *)(param_2 + 0x70) + 1,0);
  uVar6 = FUN_00e6ce7c("MENU_PROFILE_GUILD_OVERVIEW_PRIMETIME_VALUE",0);
  thunk_FUN_00e7051c(&local_a0,uVar6);
  FUN_00e705c8(&local_b0,"[START_HOUR]");
  FUN_00e71248(&local_a0,0,&local_b0,&local_80);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  FUN_00e705c8(&local_b0,"[END_HOUR]");
  FUN_00e71248(&local_a0,0,&local_b0,&local_90);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  FUN_00f0d75c(param_1 + 0x3020,&local_a0);
  FUN_00e70510(&local_b0);
  if (*(int *)(param_2 + 0x74) < 0) {
    *(uint *)(param_1 + 0x31d4) = *(uint *)(param_1 + 0x31d4) & 0xfffffffb;
  }
  else {
    *(uint *)(param_1 + 0x31d4) = *(uint *)(param_1 + 0x31d4) | 4;
    FUN_00e70e18(&local_b0,&DAT_01bb6d43,*(undefined4 *)(param_2 + 0x74));
    FUN_00f0d75c(param_1 + 0x3428,&local_b0);
    FUN_00b1d77c(param_1 + 0x3558,*(undefined4 *)(param_2 + 0x74));
  }
  FUN_00e70e18(&local_b0,"%d/%d",*(undefined4 *)(param_2 + 0x60),*(undefined4 *)(param_2 + 100));
  FUN_00f0d75c(param_1 + 0x1540,&local_b0);
  lVar9 = param_1 + 0xb88;
  FUN_00acdd70(lVar9,*(undefined4 *)(param_2 + 0x68));
  iVar5 = *(int *)(param_2 + 0x68);
  if (iVar5 < 0x3c) {
    if (iVar5 < 0x32) {
      fVar11 = *(float *)(&DAT_01baf4e8 + (ulong)(0x13 < iVar5) * 4);
    }
    else {
      fVar11 = 0.65;
    }
  }
  else {
    fVar11 = 0.45;
  }
  *(float *)(param_1 + 0x5e08) = fVar11;
  if ((*(float *)(param_1 + 0xbd0) != fVar11) || (*(float *)(param_1 + 0xbd4) != fVar11)) {
    *(float *)(param_1 + 0xbd0) = fVar11;
    *(float *)(param_1 + 0xbd4) = fVar11;
    FUN_0091ada4(lVar9);
  }
  FUN_00acd880(lVar9);
  FUN_008fce60(param_1 + 0x5de8,param_2);
  FUN_00acef0c(param_1,param_3 & 1);
  FUN_00acf034(param_1,1);
  *(undefined1 *)(param_1 + 0x5e12) = 0;
  *(undefined1 *)(param_1 + 0x5e10) = 1;
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
    local_a0 = 0;
    local_98 = (void *)0x0;
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

