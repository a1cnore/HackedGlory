// functions/00c2e — 5 functions
#include "libGameKindred.h"




void FUN_00c2e680(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 byte *param_9,undefined8 param_10,undefined1 param_11,byte param_12,byte param_13,
                 byte param_14,byte param_15,int param_16,int param_17,int param_18)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  byte *pbVar4;
  undefined *puVar5;
  
  FUN_00f0d75c();
  uVar2 = FUN_00e70b04(param_4);
  *(uint *)(param_2 + 0x604) =
       *(uint *)(param_2 + 0x604) & 0xfffffff8 | *(uint *)(param_2 + 0x604) & 3 | (~uVar2 & 1) << 2;
  FUN_00ac5fdc(param_2 + 0x580,param_4);
  uVar2 = FUN_00e70b04(param_5);
  *(uint *)(param_2 + 0x120c) =
       *(uint *)(param_2 + 0x120c) & 0xfffffff8 |
       *(uint *)(param_2 + 0x120c) & 3 | (~uVar2 & 1) << 2;
  FUN_00b2a900(param_2 + 0x1188,param_5);
  FUN_008fce60(param_2 + 0x2be8,param_7);
  FUN_008fce60(param_2 + 0x2c00,param_8);
  FUN_00c2e948(param_2,param_2 + 0x2be8,param_2 + 0x2c00);
  FUN_00f0d75c(param_2 + 0x1d88,param_6);
  FUN_00f0d7fc(param_2 + 0x1d88,param_10);
  *(undefined4 *)(param_2 + 0x2c18) = param_1;
  FUN_00c2e9a0(param_2,param_17);
  *(uint *)(param_2 + 0x26a4) =
       *(uint *)(param_2 + 0x26a4) & 0xfffffff8 |
       *(uint *)(param_2 + 0x26a4) & 3 | ((uint)(0 < param_17) & (param_13 ^ 1)) << 2;
  FUN_00c2ea98(param_2,param_18);
  *(uint *)(param_2 + 0x27fc) =
       *(uint *)(param_2 + 0x27fc) & 0xfffffff8 |
       *(uint *)(param_2 + 0x27fc) & 3 | ((uint)(0 < param_18) & (param_13 ^ 1)) << 2;
  FUN_00b1d77c(param_2 + 0x2250,param_16);
  uVar2 = 0;
  if ((0 < param_16) && ((param_13 & 1) == 0)) {
    FUN_00ceace8();
    uVar2 = FUN_00ceaea8();
    uVar2 = (uVar2 & 1) << 2;
  }
  *(uint *)(param_2 + 0x22d4) = *(uint *)(param_2 + 0x22d4) & 0xfffffffb | uVar2;
  *(undefined1 *)(param_2 + 0x2be0) = param_11;
  *(uint *)(param_2 + 0x22c) = *(uint *)(param_2 + 0x22c) | 4;
  *(uint *)(param_2 + 0x13c) = *(uint *)(param_2 + 0x13c) | 4;
  if ((param_15 & 1) != 0) {
    *(uint *)(param_2 + 0x2b74) = *(uint *)(param_2 + 0x2b74) | 4;
  }
  *(uint *)(param_2 + 0x21e4) =
       *(uint *)(param_2 + 0x21e4) & 0xfffffff8 |
       *(uint *)(param_2 + 0x21e4) & 3 | (param_12 & 1) << 2;
  bVar1 = *param_9;
  uVar2 = (uint)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar2 = *(uint *)(param_9 + 8);
  }
  if (uVar2 == 0) {
    uVar2 = *(uint *)(param_2 + 0x20f4) & 0xfffffffb;
  }
  else {
    pbVar4 = *(byte **)(param_9 + 0x10);
    if ((bVar1 & 1) == 0) {
      pbVar4 = param_9 + 1;
    }
    FUN_00f0e578(param_2 + 0x2070,pbVar4);
    uVar2 = *(uint *)(param_2 + 0x20f4) | 4;
  }
  *(uint *)(param_2 + 0x20f4) = uVar2;
  if ((param_13 & 1) == 0) {
    puVar3 = &DAT_01bbc998;
    puVar5 = &UNK_01bbc99c;
  }
  else {
    puVar3 = &DAT_01bbc990;
    puVar5 = &DAT_01bbc994;
  }
  if ((param_14 & 1) == 0) {
    puVar5 = puVar3;
  }
  FUN_00f0d7fc(param_2 + 0x388,puVar5);
  FUN_00c2ebc8(param_2);
  return;
}




void FUN_00c2e948(long param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  
  FUN_00f0e628(param_1 + 0x1a8);
  pbVar1 = *(byte **)(param_2 + 0x10);
  pbVar2 = *(byte **)(param_3 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
  }
  if ((*param_3 & 1) == 0) {
    pbVar2 = param_3 + 1;
  }
  FUN_00f0e548(param_1 + 0x1a8,pbVar1,pbVar2);
  return;
}




void FUN_00c2e9a0(long param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  undefined8 extraout_x1;
  ulong uVar3;
  
  uVar3 = param_2 & 0xffffffff;
  if (((DAT_0313b628 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&DAT_0313b628,param_2,uVar3), iVar2 != 0)) {
    FUN_00e70510(&DAT_0313b618,extraout_x1,uVar3);
    __cxa_atexit(FUN_0090e338,&DAT_0313b618,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_0313b628);
  }
  FUN_00e70e18(&DAT_0313b618,&DAT_01bb6d43,uVar3);
  lVar1 = param_1 + 0x29c0;
  FUN_00f0d75c(lVar1,&DAT_0313b618);
  FUN_00f07b18(0xc1200000,lVar1,0,param_1 + 0x28d0,2);
  FUN_00f07b18(0,lVar1,4,param_1 + 0x28d0,4);
  FUN_00f13238(param_1 + 0x2620);
  return;
}




void FUN_00c2ea98(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  if (0 < param_2) {
    iVar3 = 0;
    lVar2 = 0;
    do {
      lVar1 = FUN_00a4c67c(param_1 + 0x2778,1);
      FUN_00f0e548(lVar1,PTR_s_build___InventoryCommon_atlas_02be34e0,"64x64_hero_mastery_star");
      if ((*(float *)(lVar1 + 0x48) != 0.8) || (*(float *)(lVar1 + 0x4c) != 0.8)) {
        *(undefined8 *)(lVar1 + 0x48) = 0x3f4ccccd3f4ccccd;
        FUN_0091ada4(lVar1);
      }
      if (iVar3 == 0) {
        if ((*(float *)(lVar1 + 0x40) != 0.0) || (*(float *)(lVar1 + 0x44) != 0.0)) {
          *(undefined8 *)(lVar1 + 0x40) = 0;
          FUN_0091ada4(lVar1);
        }
      }
      else {
        FUN_00f07b18(0,lVar1,3,lVar2,1);
        FUN_00f07b18(0,lVar1,0,lVar2,0);
      }
      iVar3 = iVar3 + 1;
      lVar2 = lVar1;
    } while (param_2 != iVar3);
  }
  FUN_00f13238(param_1 + 0x2778);
  return;
}




void FUN_00c2ebc8(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 local_88;
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  plVar1 = param_3 + 0x35;
  uVar8 = FUN_00f0e700(plVar1);
  local_88 = CONCAT44(param_2,uVar8);
  FUN_00f13f18(param_3 + 0x53,&local_88);
  uVar11 = FUN_00f0e700(plVar1);
  FUN_00f0e700(plVar1);
  param_2 = param_2 * 0.4;
  FUN_00f13f08(uVar11,param_2,param_3 + 0x3d7);
  fVar9 = (float)FUN_00f0e700(plVar1);
  FUN_00f0e700(plVar1);
  FUN_00f13f08(fVar9 + 8.0,param_2 + 8.0,param_3 + 0x55e);
  plVar2 = param_3 + 0x71;
  fVar9 = (float)FUN_00f0e700(plVar1);
  FUN_00f0db64(fVar9 * 0.9,0,0x3f800000,plVar2);
  plVar4 = param_3 + 0x3b1;
  fVar9 = (float)FUN_00f0e700(plVar1);
  FUN_00f0db64(fVar9 * 0.9,0,0x3f800000,plVar4);
  FUN_00f07940(0,0,param_3 + 0x3d7,2,plVar1,2);
  FUN_00f07940(0,0,param_3 + 0x53,2,plVar1,2);
  fVar12 = 0.5;
  plVar5 = param_3 + 0x3f5;
  FUN_00f0bc10(0,0x3f000000,0x41a00000,&local_88);
  FUN_00f0c168(plVar5,&local_88);
  (**(code **)(param_3[0x3f5] + 0x90))(plVar5);
  plVar3 = param_3 + 0x97;
  FUN_00f0bc10(0,0x3f000000,0x41f00000,&local_88);
  FUN_00f0c168(plVar3,&local_88);
  (**(code **)(param_3[0x97] + 0x90))(plVar3);
  fVar9 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  (**(code **)(*param_3 + 0x48))(param_3);
  fVar10 = fVar12 * 0.52;
  if ((*(float *)(param_3 + 0x3fd) != fVar9 * 0.5) ||
     (fVar12 = *(float *)((long)param_3 + 0x1fec), fVar12 != fVar10)) {
    *(float *)(param_3 + 0x3fd) = fVar9 * 0.5;
    *(float *)((long)param_3 + 0x1fec) = fVar10;
    FUN_0091ada4(plVar5);
  }
  local_88 = 0x3f0000003f000000;
  (**(code **)(param_3[0x3f5] + 0x28))(plVar5,&local_88);
  fVar9 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  (**(code **)(*param_3 + 0x48))(param_3);
  fVar10 = fVar12 * 0.73;
  if ((*(float *)(param_3 + 0x79) != fVar9 * 0.5) ||
     (fVar12 = *(float *)((long)param_3 + 0x3cc), fVar12 != fVar10)) {
    *(float *)(param_3 + 0x79) = fVar9 * 0.5;
    *(float *)((long)param_3 + 0x3cc) = fVar10;
    FUN_0091ada4(plVar2);
  }
  local_88 = 0x3f0000003f000000;
  (**(code **)(param_3[0x71] + 0x28))(plVar2,&local_88);
  fVar9 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  (**(code **)(*param_3 + 0x48))(param_3);
  fVar10 = fVar12 * 0.83;
  if ((*(float *)(param_3 + 0x3b9) != fVar9 * 0.5) ||
     (fVar12 = *(float *)((long)param_3 + 0x1dcc), fVar12 != fVar10)) {
    *(float *)(param_3 + 0x3b9) = fVar9 * 0.5;
    *(float *)((long)param_3 + 0x1dcc) = fVar10;
    FUN_0091ada4(plVar4);
  }
  local_88 = 0x3f0000003f000000;
  (**(code **)(param_3[0x3b1] + 0x28))(plVar4,&local_88);
  fVar9 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  (**(code **)(*param_3 + 0x48))(param_3);
  if ((*(float *)(param_3 + 0x9f) != fVar9 * 0.5) ||
     (*(float *)((long)param_3 + 0x4fc) != fVar12 * 0.9)) {
    *(float *)(param_3 + 0x9f) = fVar9 * 0.5;
    *(float *)((long)param_3 + 0x4fc) = fVar12 * 0.9;
    FUN_0091ada4(plVar3);
  }
  local_88 = 0x3f0000003f000000;
  (**(code **)(param_3[0x97] + 0x28))(plVar3,&local_88);
  FUN_00f07940(0,0,param_3 + 0x55e,8,plVar1,8);
  if ((char)param_3[0x57c] == '\x02') {
    uVar8 = 0x41a00000;
    uVar11 = 8;
    uVar7 = 6;
  }
  else {
    uVar11 = 4;
    uVar7 = 4;
    uVar8 = 0;
    *(byte *)(param_3 + 0x50) = *(byte *)(param_3 + 0x50) | 1;
  }
  FUN_00f07940(0,uVar8,param_3 + 0x4ef,uVar11,plVar1,uVar7);
  FUN_00f07940(0,0,param_3 + 0x17,8,plVar1,8);
  if (*(long *)(lVar6 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

