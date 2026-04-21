// functions/00c88 — 25 functions
#include "libGameKindred.h"




void FUN_00c880bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00c883cc(param_1,param_2,param_5);
  return;
}




void FUN_00c880c4(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  *param_1 = &PTR_FUN_02805088;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x15a8) = &PTR_FUN_027cb008;
    *(undefined ***)((long)param_1 + lVar1 + 0x1840) = &PTR_FUN_028266f0;
    *(undefined ***)((long)param_1 + lVar1 + 0x18f8) = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar1 + 0x1910);
    FUN_00f13d08((long)param_1 + lVar1 + 0x1840);
    *(undefined ***)((long)param_1 + lVar1 + 0x1750) = &PTR_FUN_028266f0;
    *(undefined ***)((long)param_1 + lVar1 + 0x1808) = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar1 + 0x1820);
    FUN_00f13d08((long)param_1 + lVar1 + 0x1750);
    *(undefined ***)((long)param_1 + lVar1 + 0x1660) = &PTR_FUN_028266f0;
    *(undefined ***)((long)param_1 + lVar1 + 0x1718) = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar1 + 0x1730);
    FUN_00f13d08((long)param_1 + lVar1 + 0x1660);
    FUN_00f13d08((long)param_1 + lVar1 + 0x15a8);
    lVar1 = lVar1 + -0x388;
  } while (lVar1 != -0x11a8);
  FUN_00f0d3a4(param_1 + 0xcb);
  param_1[0xad] = &PTR_FUN_028266f0;
  param_1[0xc4] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 199);
  FUN_00f13d08(param_1 + 0xad);
  param_1[0x17] = &PTR_FUN_027dc928;
  param_1[0x82] = &PTR_FUN_02826f38;
  param_1[0x99] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x9c);
  FUN_00f13d08(param_1 + 0x82);
  param_1[0x58] = &PTR_FUN_02826f38;
  param_1[0x6f] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x72);
  FUN_00f13d08(param_1 + 0x58);
  param_1[0x2e] = &PTR_FUN_02826f38;
  param_1[0x45] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x48);
  FUN_00f13d08(param_1 + 0x2e);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c8824c(void *param_1)

{
  FUN_00c880c4();
  operator_delete(param_1);
  return;
}




void FUN_00c88270(float param_1,long param_2)

{
  FUN_00f13f08(param_2 + 0xb8);
  FUN_00f0dad0(param_1 + -80.0,param_2 + 0x658,1);
  return;
}




void FUN_00c882b4(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  
  uVar2 = FUN_0092ea9c();
  fVar5 = 124.0;
  if ((uVar2 & 1) == 0) {
    fVar5 = 90.0;
  }
  fVar4 = 40.0;
  lVar1 = param_1 + 0xb8;
  FUN_00f07940(0,0x42200000,param_1 + 0x658,4,lVar1,4);
  uVar2 = 0;
  plVar3 = (long *)(param_1 + 0x788);
  do {
    (**(code **)(*plVar3 + 0x48))(plVar3);
    fVar4 = fVar4 * 0.5;
    FUN_00f07940(fVar5 * (float)(uVar2 & 0xffffffff) - (fVar5 * 5.0 * 0.5 - fVar5 * 0.5),fVar4,
                 plVar3,8,lVar1,8);
    uVar2 = uVar2 + 1;
    plVar3 = plVar3 + 0x71;
  } while (uVar2 != 5);
  FUN_00f07940(0,0xc0d00000,param_1 + 0x568,4,lVar1,6);
  return;
}




void FUN_00c883a8(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x84);
  *(uint *)(param_1 + 0x84) = uVar1 & 0xfffffff8 | uVar1 & 3 | (uint)((uVar1 & 4) == 0) << 2;
  if ((uVar1 >> 2 & 1) != 0) {
    return;
  }
  FUN_00c882b4();
  return;
}




void FUN_00c883cc(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar1 = 0;
  if (param_3 + 1 != *(int *)(param_1 + 0x1930)) {
    iVar1 = param_3 + 1;
  }
  *(int *)(param_1 + 0x1930) = iVar1;
  FUN_00b19bec(param_1 + 0x788,iVar1 != 0);
  lVar4 = param_1 + 0xb10;
  uVar5 = 1;
  do {
    FUN_00b19bec(lVar4,uVar5 < *(uint *)(param_1 + 0x1930));
    uVar5 = uVar5 + 1;
    lVar4 = lVar4 + 0x388;
  } while (uVar5 != 5);
  uVar3 = FUN_00f048a4("EVENT_SELECT_MATCH_RATING");
  FUN_00f048e0(auStack_58,uVar3,*(undefined4 *)(param_1 + 0x1930));
  FUN_00f04760(param_1,auStack_58,1);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c88494(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  FUN_00f1306c();
  plVar1 = param_1 + 0x2b;
  *param_1 = (long)&PTR_FUN_028051d0;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x49;
  FUN_00f0d160(plVar2);
  plVar3 = param_1 + 0x6f;
  FUN_00f0d160(plVar3);
  *(undefined4 *)(param_1 + 0x95) = 0;
  *(undefined1 *)((long)param_1 + 0x4ac) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_00f0e540(plVar1,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  local_58 = 0x3f0000003f000000;
  (**(code **)(param_1[0x49] + 0x28))(plVar2,&local_58);
  FUN_00f0d378(plVar2,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  FUN_00e705c8(&local_58,"19");
  FUN_00f0d75c(plVar2,&local_58);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_50 = (void *)0x0;
  }
  local_58 = 0x3f0000003f000000;
  (**(code **)(param_1[0x6f] + 0x28))(plVar3,&local_58);
  FUN_00f0d378(plVar3,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  *(uint *)((long)param_1 + 0x3fc) = *(uint *)((long)param_1 + 0x3fc) & 0xffffffbb;
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c8861c(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_1 + 0x4a8);
  uVar1 = 5;
  uVar2 = 7;
  if (*(char *)(param_1 + 0x4ac) == '\0') {
    uVar1 = 7;
    fVar3 = -*(float *)(param_1 + 0x4a8);
    uVar2 = 5;
  }
  FUN_00f07940(fVar3,0,param_1 + 0x158,uVar2,param_1 + 0x248,uVar1);
  FUN_00f07940(0,0,param_1 + 0x378,8,param_1 + 0x248,8);
  FUN_00f13238(param_1);
  return;
}




void FUN_00c88690(long param_1)

{
  FUN_00f0eaf4(param_1 + 0x158);
  return;
}




void FUN_00c88698(long param_1,undefined8 param_2)

{
  FUN_00f0d378(param_1 + 0x248);
  FUN_00f0d378(param_1 + 0x378,param_2);
  return;
}




void FUN_00c886c8(long param_1,undefined8 param_2)

{
  FUN_00f0e628(param_1 + 0x158);
  FUN_00f0e540(param_1 + 0x158,param_2);
  return;
}




void FUN_00c886f8(long param_1)

{
  FUN_00f0e578(param_1 + 0x158);
  return;
}




void FUN_00c88700(float param_1,long param_2)

{
  if ((*(float *)(param_2 + 0x1a0) == param_1) && (*(float *)(param_2 + 0x1a4) == param_1)) {
    return;
  }
  *(float *)(param_2 + 0x1a0) = param_1;
  *(float *)(param_2 + 0x1a4) = param_1;
  FUN_0091ada4(param_2 + 0x158);
  return;
}




void FUN_00c88730(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00f0e670(param_1 + 0x158,param_2,2);
  FUN_00f0d7fc(param_1 + 0x248,param_3);
  FUN_00f0d7fc(param_1 + 0x378,param_3);
  return;
}




void FUN_00c88770(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_00f08be8(param_1 + 99);
  uVar2 = FUN_00e70b88(param_2,uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = FUN_00f08be8(param_1 + 0x89);
    uVar2 = FUN_00e70b88(param_2,uVar1);
    if ((uVar2 & 1) == 0) {
      return;
    }
  }
  FUN_00f0d75c(param_1 + 0x49,param_2);
  FUN_00f0d75c(param_1 + 0x6f,param_2);
                    /* WARNING: Could not recover jumptable at 0x00c887e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_00c887f0(long param_1,undefined8 param_2)

{
  FUN_00f0da80(param_1 + 0x248);
  FUN_00f0da80(param_1 + 0x378,param_2);
  return;
}




void FUN_00c88820(long param_1,uint param_2)

{
  FUN_00f0da30(param_1 + 0x248,param_2 & 1);
  FUN_00f0da30(param_1 + 0x378,param_2 & 1);
  return;
}




void FUN_00c88854(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  ushort *puVar8;
  ushort *puVar9;
  undefined8 uVar10;
  
  lVar1 = param_1 + 0x248;
  uVar5 = FUN_00f0d81c(lVar1);
  uVar3 = *(uint *)(param_1 + 0x3fc);
  lVar2 = param_1 + 0x378;
  *(uint *)(param_1 + 0x3fc) = uVar3 | 4;
  if ((uVar3 & 0x7f80) != 0x6600) {
    *(uint *)(param_1 + 0x3fc) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x6604;
    FUN_0091ada4(lVar2);
  }
  if ((*(float *)(param_1 + 0x3c0) != 3.0) || (*(float *)(param_1 + 0x3c4) != 3.0)) {
    uVar10 = NEON_fmov(0x40400000,4);
    *(undefined8 *)(param_1 + 0x3c0) = uVar10;
    FUN_0091ada4(lVar2);
  }
  uVar10 = FUN_00eff63c(0x3f800000,0x3f800000,0x3e99999a,FUN_009a71a4);
  uVar6 = FUN_00efee28(0x3f800000,0x3e99999a,FUN_009a71a4);
  lVar4 = DAT_03210d00;
  uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar8 = (ushort *)0x0;
  }
  else {
    puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar8;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efcd98(puVar8);
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar8,uVar10,uVar6,0);
  uVar10 = FUN_00eff224(0x3dcccccd,lVar2,&DAT_01bee7fa,0);
  uVar5 = FUN_00eff224(0x3f4ccccd,lVar2,uVar5,FUN_009a71a4);
  lVar4 = DAT_03210d00;
  uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar9;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efc8e8(puVar9);
    *(undefined ***)puVar9 = &PTR_FUN_02825148;
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_00f01980(lVar2);
  FUN_00f02308(lVar2,puVar8,uVar10,uVar5,puVar9,0);
  uVar5 = FUN_00efed6c(0x3f99999a);
  lVar2 = DAT_03210d00;
  uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar8 = (ushort *)0x0;
  }
  else {
    puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar8;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efc8e8(puVar8);
    *(undefined ***)puVar8 = &PTR_FUN_02825100;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  *(uint *)(param_1 + 0x2cc) = *(uint *)(param_1 + 0x2cc) & 0xfffffffb;
  FUN_00f01980(lVar1);
  FUN_00f02308(lVar1,uVar5,puVar8,0);
  return;
}




void FUN_00c88ba8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028051d0;
  FUN_00f0d3a4(param_1 + 0x6f);
  FUN_00f0d3a4(param_1 + 0x49);
  param_1[0x2b] = &PTR_FUN_028266f0;
  param_1[0x42] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x45);
  FUN_00f13d08(param_1 + 0x2b);
  *param_1 = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c88c2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028051d0;
  FUN_00f0d3a4(param_1 + 0x6f);
  FUN_00f0d3a4(param_1 + 0x49);
  param_1[0x2b] = &PTR_FUN_028266f0;
  param_1[0x42] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x45);
  FUN_00f13d08(param_1 + 0x2b);
  *param_1 = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c88cb8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e6ce7c(*(undefined8 *)(param_2 + 0x10),0);
  FUN_00910394(param_1 + 0x70,uVar2);
  FUN_008fa54c(local_50,*(undefined8 *)(param_2 + 8));
  FUN_008fce60(param_1 + 0x38,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x60);
  FUN_008fa54c(local_50,*(undefined8 *)(param_2 + 0x28));
  FUN_008fce60(param_1 + 0x88,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0x5c);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long * FUN_00c88d84(int *param_1)

{
  long *plVar1;
  
  if (*param_1 == 1) {
    plVar1 = operator_new(0xcf0);
    FUN_00c89d68();
  }
  else {
    if (*param_1 != 0) {
      return (long *)0x0;
    }
    plVar1 = operator_new(0x698);
    FUN_00c88df0();
  }
  (**(code **)(*plVar1 + 0x138))(plVar1,param_1);
  return plVar1;
}




void FUN_00c88df0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  undefined4 local_60 [2];
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  FUN_00f13ca4();
  *param_1 = (long)&PTR_FUN_02805320;
  param_1[0x17] = (long)&PTR_FUN_02805490;
  FUN_00bead5c(param_1 + 0x18);
  FUN_00f10d7c(param_1 + 0x2e);
  FUN_00af6b6c(param_1 + 0x4f);
  plVar1 = param_1 + 0x6c;
  FUN_00f13ca4(plVar1);
  plVar2 = param_1 + 0x83;
  FUN_00f0d160(plVar2);
  plVar3 = param_1 + 0xa9;
  FUN_00f0d160(plVar3);
  *(undefined1 *)((long)param_1 + 0x67c) = 0;
  *(undefined4 *)(param_1 + 0xcf) = 0x437a0000;
  FUN_008fa54c(param_1 + 0xd0,&DAT_01b9f8c3);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2e,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x4f,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_00f0d378(plVar2,PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98);
  FUN_00f0d378(plVar3,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  uVar4 = *(uint *)((long)param_1 + 0x5cc);
  if ((uVar4 & 0x7f80) != 0x5e00) {
    *(uint *)((long)param_1 + 0x5cc) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x5e00;
    FUN_0091ada4(plVar3);
  }
  local_60[0] = 0xffb0917e;
  FUN_00f0d7fc(plVar3,local_60);
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c88fa0(long *param_1,undefined4 *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  char *__s2;
  long lVar5;
  char *pcVar6;
  long lVar7;
  void *__s1;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  FUN_008fce60(param_1 + 0x19,param_2 + 2);
  FUN_008fce60(param_1 + 0x1c,param_2 + 8);
  FUN_008fce60(param_1 + 0x1f,param_2 + 0xe);
  FUN_008fce60(param_1 + 0x22,param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x25) = param_2[0x1a];
  FUN_00910394(param_1 + 0x26,param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x28) = param_2[0x20];
  FUN_008fce60(param_1 + 0x29,param_2 + 0x22);
  *(undefined8 *)((long)param_1 + 0x165) = *(undefined8 *)((long)param_2 + 0xa5);
  param_1[0x2c] = *(long *)(param_2 + 0x28);
  if (*(char *)((long)param_1 + 0x16c) != '\0') {
    FUN_00c89234(param_1);
  }
  FUN_00e70510(&local_58);
  if ((int)param_1[0x25] < 0) {
    FUN_00e70e18(&local_58,&DAT_01bb6d43,(int)param_1[0x25]);
  }
  else {
    if ((*(byte *)(param_1 + 0xd0) & 1) == 0) {
      lVar7 = (long)param_1 + 0x681;
    }
    else {
      lVar7 = param_1[0xd2];
    }
    FUN_00e70e18(&local_58,"%s%d",lVar7);
  }
  FUN_00f0d75c(param_1 + 0x83,&local_58);
  FUN_00f0d75c(param_1 + 0xa9,param_1 + 0x26);
  bVar2 = *(byte *)(param_1 + 0x22);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = param_1[0x23];
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    __s1 = (void *)param_1[0x24];
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)((long)param_1 + 0x111);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar6 = (char *)((long)param_1 + 0x111);
        lVar7 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar6 != *__s2) goto LAB_00c89150;
          pcVar6 = pcVar6 + 1;
          lVar7 = lVar7 + 1;
          __s2 = __s2 + 1;
        } while (lVar7 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(__s1,__s2,__n), iVar4 != 0)) goto LAB_00c89150;
    *(undefined1 *)((long)param_1 + 0x67c) = 0;
    if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
      lVar7 = (long)param_1 + 0xe1;
    }
    else {
      lVar7 = param_1[0x1e];
    }
    if ((*(byte *)(param_1 + 0x1f) & 1) == 0) {
      lVar5 = (long)param_1 + 0xf9;
    }
    else {
      lVar5 = param_1[0x21];
    }
    FUN_00f0e548(param_1 + 0x2e,lVar7,lVar5);
    *(uint *)((long)param_1 + 0x2fc) = *(uint *)((long)param_1 + 0x2fc) & 0xfffffffb;
    *(uint *)((long)param_1 + 500) = *(uint *)((long)param_1 + 500) | 4;
    (**(code **)(*param_1 + 0x140))(param_1);
  }
  else {
LAB_00c89150:
    *(undefined1 *)((long)param_1 + 0x67c) = 1;
    FUN_009396ec(param_1 + 0x22);
    FUN_0096bce8(param_1 + 0x22,param_1 + 0x17,param_1 + 0x4f);
    *(uint *)((long)param_1 + 0x2fc) = *(uint *)((long)param_1 + 0x2fc) | 4;
    *(uint *)((long)param_1 + 500) = *(uint *)((long)param_1 + 500) & 0xfffffffb;
  }
  (**(code **)(*param_1 + 0x158))(param_1);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

