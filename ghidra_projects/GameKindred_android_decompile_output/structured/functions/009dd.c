// functions/009dd — 39 functions
#include "libGameKindred.h"




void FUN_009dd0e4(long param_1)

{
  FUN_00bbfaa8(0x3e4ccccd,param_1 + 0x89d0,0,0);
  *(undefined4 *)(param_1 + 0xde20) = 0;
  FUN_009dd9d4(param_1,1,0);
  return;
}




void thunk_FUN_009dddb4(long param_1)

{
  uint uVar1;
  byte bVar2;
  
  bVar2 = *(byte *)(*(long *)(param_1 + 0x89d8) + 0xc0);
  FUN_00bbfaa8(0x3e4ccccd,param_1 + 0x89d0,(bVar2 & 1) == 0,0);
  uVar1 = bVar2 & 1;
  *(uint *)(param_1 + 0xde20) = uVar1 << 1 ^ 2;
  FUN_009dd9d4(param_1,uVar1,0);
  return;
}




void thunk_FUN_009dde64(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0093d8d0();
  if ((uVar1 & 1) != 0) {
    FUN_00ec5e88(0,&PTR_PTR_02be3300);
  }
  FUN_00a73170(param_1 + 0x138,1);
  FUN_00a79c1c(param_1 + 0x3668,0);
  return;
}




void FUN_009dd138(long param_1)

{
  FUN_00a73170(param_1 + 0x138,0);
  FUN_00a79c1c(param_1 + 0x3668,1);
  return;
}




void FUN_009dd16c(long param_1)

{
  FUN_00a73170(param_1 + 0x138,1);
  FUN_00a79c1c(param_1 + 0x3668,0);
  return;
}




void FUN_009dd1a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c3760;
  FUN_009a83e0();
  FUN_009b52b4();
  DAT_0312fb40 = 0;
  FUN_009dd410(param_1 + 0x1418);
  FUN_00bbf854(param_1 + 0x113a);
  FUN_00a79f9c(param_1 + 0x6cd);
  FUN_009dd584(param_1 + 0x42d);
  param_1[0x412] = &PTR_FUN_027ccf98;
  param_1[0x423] = &PTR_FUN_027cd0a8;
  FUN_00f0a79c(param_1 + 0x426);
  FUN_00f01868(param_1 + 0x412);
  param_1[0x353] = &PTR_FUN_027d5388;
  param_1[0x3ee] = &PTR_FUN_028266f0;
  param_1[0x405] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x408);
  FUN_00f13d08(param_1 + 0x3ee);
  param_1[0x3d0] = &PTR_FUN_028266f0;
  param_1[999] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3ea);
  FUN_00f13d08(param_1 + 0x3d0);
  param_1[0x3b2] = &PTR_FUN_028266f0;
  param_1[0x3c9] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3cc);
  FUN_00f13d08(param_1 + 0x3b2);
  FUN_00f01868(param_1 + 0x3a1);
  FUN_009c825c(param_1 + 0x353);
  param_1[0x294] = &PTR_FUN_027d5388;
  param_1[0x32f] = &PTR_FUN_028266f0;
  param_1[0x346] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x349);
  FUN_00f13d08(param_1 + 0x32f);
  param_1[0x311] = &PTR_FUN_028266f0;
  param_1[0x328] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x32b);
  FUN_00f13d08(param_1 + 0x311);
  param_1[0x2f3] = &PTR_FUN_028266f0;
  param_1[0x30a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x30d);
  FUN_00f13d08(param_1 + 0x2f3);
  FUN_00f01868(param_1 + 0x2e2);
  FUN_009c825c(param_1 + 0x294);
  FUN_00f01868(param_1 + 0x283);
  param_1[0x27] = &PTR_FUN_027cd6c0;
  FUN_00a315bc(param_1 + 0x24f);
  FUN_00a49d70(param_1 + 0x1e6);
  FUN_00a74b80(param_1 + 0x137);
  FUN_00a74b80(param_1 + 0x88);
  FUN_00f13d08(param_1 + 0x6f);
  param_1[0x51] = &PTR_FUN_028266f0;
  param_1[0x68] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6b);
  FUN_00f13d08(param_1 + 0x51);
  FUN_00f13d08(param_1 + 0x38);
  FUN_00f01868(param_1 + 0x27);
  FUN_00f01868(param_1 + 0x16);
  FUN_00f01868(param_1 + 5);
  FUN_01985bd0(param_1);
  return;
}




void FUN_009dd410(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_027cc7e8;
  if ((void *)param_1[0x7a9] != (void *)0x0) {
    operator_delete__((void *)param_1[0x7a9]);
    param_1[0x7a9] = 0;
    param_1[0x7a8] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x780);
  FUN_00f01868(param_1 + 0x76f);
  lVar2 = -0x4b0;
  puVar1 = param_1 + 0x751;
  do {
    *puVar1 = &PTR_FUN_028266f0;
    puVar1[0x17] = &PTR_FUN_02826850;
    FUN_00f0a79c(puVar1 + 0x1a);
    FUN_00f13d08(puVar1);
    lVar2 = lVar2 + 0xf0;
    puVar1 = puVar1 + -0x1e;
  } while (lVar2 != 0);
  FUN_00f0d3a4(param_1 + 0x6b3);
  FUN_00f01868(param_1 + 0x6a2);
  FUN_009c7fa8(param_1 + 0x3ea);
  FUN_009c7fa8(param_1 + 0x132);
  FUN_00f0d3a4(param_1 + 0x10c);
  FUN_00f0d3a4(param_1 + 0xe6);
  FUN_00f01868(param_1 + 0xd5);
  FUN_00f0d3a4(param_1 + 0xaf);
  param_1[0x91] = &PTR_FUN_028266f0;
  param_1[0xa8] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xab);
  FUN_00f13d08(param_1 + 0x91);
  param_1[0x73] = &PTR_FUN_028266f0;
  param_1[0x8a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x8d);
  FUN_00f13d08(param_1 + 0x73);
  param_1[0x55] = &PTR_FUN_028266f0;
  param_1[0x6c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6f);
  FUN_00f13d08(param_1 + 0x55);
  FUN_00f01868(param_1 + 0x44);
  FUN_00f13d08(param_1 + 0x2b);
  *param_1 = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_009dd584(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cd7c0;
  if ((void *)param_1[0x29f] != (void *)0x0) {
    operator_delete__((void *)param_1[0x29f]);
    param_1[0x29f] = 0;
    param_1[0x29e] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x278);
  param_1[0x25a] = &PTR_FUN_028266f0;
  param_1[0x271] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x274);
  FUN_00f13d08(param_1 + 0x25a);
  FUN_009de02c(param_1 + 0x192);
  FUN_009de02c(param_1 + 0xca);
  param_1[0xac] = &PTR_FUN_028266f0;
  param_1[0xc3] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xc6);
  FUN_00f13d08(param_1 + 0xac);
  param_1[0x8e] = &PTR_FUN_028266f0;
  param_1[0xa5] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa8);
  FUN_00f13d08(param_1 + 0x8e);
  param_1[0x70] = &PTR_FUN_028266f0;
  param_1[0x87] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x8a);
  FUN_00f13d08(param_1 + 0x70);
  param_1[0x52] = &PTR_FUN_028266f0;
  param_1[0x69] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6c);
  FUN_00f13d08(param_1 + 0x52);
  FUN_00f01868(param_1 + 0x41);
  FUN_00f01868(param_1 + 0x30);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_009dd6a8(void *param_1)

{
  FUN_009dd1a0();
  operator_delete(param_1);
  return;
}




void FUN_009dd6cc(long param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_2 + 4);
  bVar2 = true;
  if ((iVar1 != 2) && (iVar1 != 4)) {
    bVar2 = iVar1 == 5;
  }
  *(byte *)(param_1 + 0xde34) = *(byte *)(param_1 + 0xde34) & 0xfe | bVar2;
  FUN_00a681e4(0x3f000000,param_1 + 0xa0c0,bVar2,4,1);
  if ((*(byte *)(param_1 + 0xde34) & 1) == 0) {
    return;
  }
  FUN_00a68810(param_1 + 0xa0c0,param_2);
  return;
}




void FUN_009dd764(long param_1)

{
  long lVar1;
  
  DAT_0312fb48 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312fb48 + 1;
  lVar1 = param_1 + (ulong)DAT_0312fb48 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009de100;
  *(code **)(lVar1 + 0xb8) = FUN_009de124;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 1;
  *(uint *)(lVar1 + 0xa4) = DAT_0312fb48;
  *(undefined4 *)(lVar1 + 0xa8) = 0xde38;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,4,FUN_009dd7d4,0);
  return;
}




void FUN_009dd7d4(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  
  FUN_00bc05a0(param_1 + 0x89d0);
  uVar2 = FUN_0094276c();
  if ((uVar2 & 1) != 0) {
    uVar1 = FUN_00a21d4c();
    FUN_00a7303c(param_1 + 0x138,uVar1);
    return;
  }
  lVar3 = FUN_00f00438("plaques-player");
  *(uint *)(lVar3 + 0x84) =
       *(uint *)(lVar3 + 0x84) & 0xfffffff8 |
       *(uint *)(lVar3 + 0x84) & 3 | (~(uint)*(byte *)(param_1 + 0xde34) >> 2 & 1) << 2;
  lVar3 = FUN_00f00438("plaques-hero");
  *(uint *)(lVar3 + 0x84) =
       *(uint *)(lVar3 + 0x84) & 0xfffffff8 |
       *(uint *)(lVar3 + 0x84) & 3 | (~(uint)*(byte *)(param_1 + 0xde34) >> 2 & 1) << 2;
  lVar3 = FUN_00f00438("plaques-all");
  *(uint *)(lVar3 + 0x84) =
       *(uint *)(lVar3 + 0x84) & 0xfffffff8 |
       *(uint *)(lVar3 + 0x84) & 3 | (~(uint)*(byte *)(param_1 + 0xde34) >> 2 & 1) << 2;
  return;
}




void FUN_009dd890(long param_1,ulong param_2)

{
  FUN_00a66cac(param_1 + 0xa0c0);
  FUN_00a72b60(param_1 + 0x138);
  if ((param_2 & 1) != 0) {
    *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 4;
  }
  FUN_009dd9d4(param_1,1,0);
  return;
}




void FUN_009dd8e0(long param_1,ulong param_2)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  
  lVar1 = DAT_03210d00;
  if ((param_2 & 1) != 0) {
    *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 4;
    return;
  }
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcad4(puVar3);
    *(undefined ***)puVar3 = &PTR_FUN_02825268;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3f000000,puVar3);
  FUN_00f022a0(param_1 + 0x28,puVar3);
  return;
}




void FUN_009dd9d4(long param_1,byte param_2)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  byte bVar5;
  ushort uVar6;
  ushort *puVar7;
  undefined4 uVar8;
  
  pbVar1 = (byte *)(param_1 + 0xde34);
  bVar5 = 0;
  bVar2 = param_2 & 1;
  if (((*pbVar1 & 1) != 0) && ((param_2 & 1) != 0)) {
    bVar5 = *(byte *)(param_1 + 0xde29) >> 5 & 1;
  }
  FUN_00a681e4(0x3e4ccccd,param_1 + 0xa0c0,bVar5,4,1);
  FUN_00a746b0(0x3e4ccccd,param_1 + 0x2168,bVar2,2,1);
  FUN_00a73094(0x3e4ccccd,param_1 + 0x138,bVar2,4,1,0);
  uVar4 = FUN_00f00438("plaques-all");
  lVar3 = DAT_03210d00;
  uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efdd74(puVar7);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  uVar8 = 0x3f800000;
  if ((param_2 & 1) == 0) {
    uVar8 = 0;
  }
  FUN_00efddc4(uVar8,puVar7);
  FUN_00efcac4(0x3ecccccd,puVar7);
  FUN_00f01980(uVar4);
  FUN_00f022a0(uVar4,puVar7);
  if ((param_2 & 1) == 0) {
    uVar4 = FUN_00efed6c(0x3e4ccccd);
    lVar3 = DAT_03210d00;
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar7;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
      *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
      FUN_00efc8e8(puVar7);
      *(undefined ***)puVar7 = &PTR_FUN_02825148;
      *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    }
    FUN_00f01980(param_1 + 0xb0);
    FUN_00f02308(param_1 + 0xb0,uVar4,puVar7,0);
  }
  else {
    FUN_00f01980(param_1 + 0xb0);
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 4;
  }
  *pbVar1 = *pbVar1 & 0xfd | bVar2 << 1;
  return;
}




bool FUN_009ddc58(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00f02710(param_1 + 0x28,1);
  return lVar1 != 0;
}




void FUN_009ddc7c(long param_1,uint param_2,undefined4 param_3)

{
  FUN_009dd9d4(param_1,0,0);
  FUN_009b52b4();
  FUN_00bbfaa8(0x3e4ccccd,param_1 + 0x89d0,1,0);
  FUN_00bbfc50(param_1 + 0x89d0,param_2 & 1,param_3);
  FUN_00a73250(param_1 + 0x138);
  *(undefined4 *)(param_1 + 0xde20) = 2;
  return;
}




void FUN_009ddcfc(void)

{
  return;
}




void FUN_009ddd00(long param_1)

{
  FUN_00a73310(param_1 + 0x138);
  return;
}




void FUN_009ddd08(long param_1)

{
  FUN_00a73318(param_1 + 0x138);
  return;
}




void FUN_009ddd10(long param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0xde28) = param_2;
  return;
}




undefined4 FUN_009ddd1c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xde20);
}




void FUN_009ddd28(long param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_00a731a4(param_1 + 0x138);
    FUN_00bbfce8(param_1 + 0x89d0);
    return;
  }
  return;
}




void FUN_009ddd64(long param_1,uint param_2)

{
  undefined4 uVar1;
  
  FUN_00bbfaa8(0x3e4ccccd,param_1 + 0x89d0,param_2 & 1,0);
  uVar1 = 2;
  if ((param_2 & 1) == 0) {
    uVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0xde20) = uVar1;
  return;
}




void FUN_009dddb4(long param_1)

{
  uint uVar1;
  byte bVar2;
  
  bVar2 = *(byte *)(*(long *)(param_1 + 0x89d8) + 0xc0);
  FUN_00bbfaa8(0x3e4ccccd,param_1 + 0x89d0,(bVar2 & 1) == 0,0);
  uVar1 = bVar2 & 1;
  *(uint *)(param_1 + 0xde20) = uVar1 << 1 ^ 2;
  FUN_009dd9d4(param_1,uVar1,0);
  return;
}




void FUN_009dde18(long param_1)

{
  FUN_00bbfaa8(0x3e4ccccd,param_1 + 0x89d0,0,0);
  *(undefined4 *)(param_1 + 0xde20) = 0;
  FUN_009dd9d4(param_1,1,0);
  return;
}




void FUN_009dde64(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0093d8d0();
  if ((uVar1 & 1) != 0) {
    FUN_00ec5e88(0,&PTR_PTR_02be3300);
  }
  FUN_00a73170(param_1 + 0x138,1);
  FUN_00a79c1c(param_1 + 0x3668,0);
  return;
}




void FUN_009ddeb0(long param_1,ulong param_2)

{
  bool bVar1;
  
  bVar1 = (param_2 & 1) == 0;
  if (bVar1) {
    FUN_00a73170(param_1 + 0x138,1);
  }
  else {
    FUN_00a73170(param_1 + 0x138,0);
  }
  FUN_00a79c1c(param_1 + 0x3668,!bVar1);
  return;
}




void FUN_009ddf00(long param_1)

{
  FUN_00a73170(param_1 + 0x138,0);
  FUN_00a79c1c(param_1 + 0x3668,1);
  return;
}




void FUN_009ddf34(long param_1)

{
  FUN_00a73170(param_1 + 0x138,1);
  FUN_00a79c1c(param_1 + 0x3668,0);
  return;
}




void FUN_009ddf68(void *param_1)

{
  FUN_00ec5ed8();
  operator_delete(param_1);
  return;
}




void FUN_009ddf8c(void)

{
  return;
}




void FUN_009ddf90(void)

{
  thunk_FUN_00ecb45c(3);
  FUN_008fa130(1,0);
  return;
}




void FUN_009ddfb0(void)

{
  return;
}




void FUN_009ddfb4(void)

{
  thunk_FUN_00ecb45c(4);
  return;
}




void FUN_009ddfbc(void)

{
  return;
}




void FUN_009ddfc0(void)

{
  return;
}




void FUN_009ddfc4(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00ec5f3c();
  if (((uVar1 & 1) != 0) && (uVar1 = FUN_00ec5f5c(), (uVar1 & 1) != 0)) {
    thunk_FUN_00ecb45c(2);
    return;
  }
  thunk_FUN_00ecb45c(1);
  return;
}




void FUN_009ddff4(void)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00ec5f3c();
  if (((uVar1 & 1) == 0) || (uVar1 = FUN_00ec5f5c(), (uVar1 & 1) == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
  }
  thunk_FUN_00ecb45c(uVar2);
  FUN_008fa130(0,0);
  return;
}

