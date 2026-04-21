// functions/00c0f — 3 functions
#include "libGameKindred.h"




void FUN_00c0f75c(long param_1)

{
  uint *puVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  
  puVar1 = (uint *)(param_1 + 0x9210);
  uVar4 = *puVar1;
  plVar2 = (long *)(param_1 + 0x9218);
  if (uVar4 != 0) {
    uVar5 = 0;
    do {
      plVar3 = *(long **)(*plVar2 + uVar5 * 8);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
        *(undefined8 *)(*plVar2 + uVar5 * 8) = 0;
        uVar4 = *puVar1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  if (*plVar2 != 0) {
    *puVar1 = 0;
  }
  return;
}




void FUN_00c0f7d4(void *param_1)

{
  FUN_00c0ecd8();
  operator_delete(param_1);
  return;
}




void FUN_00c0f7f8(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *plVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 local_90;
  void *local_88;
  float local_80;
  undefined4 uStack_7c;
  long local_78;
  
  lVar10 = tpidr_el0;
  local_78 = *(long *)(lVar10 + 0x28);
  iVar9 = *(int *)((long)param_3 + 0x9234);
  (**(code **)(*param_3 + 0x48))();
  plVar1 = param_3 + 0x81;
  param_2 = param_2 + -24.0;
  local_90 = CONCAT44(param_2,param_2);
  param_2 = param_2 + -0.1054;
  FUN_00f13f18(plVar1,&local_90);
  plVar2 = param_3 + 0x9f;
  local_90 = CONCAT44(param_2,param_2);
  FUN_00f13f18(plVar2,&local_90);
  plVar17 = param_3 + 0xbd;
  local_90 = CONCAT44(param_2,param_2);
  FUN_00f13f18(plVar17,&local_90);
  FUN_00f07940(0,0,plVar2,8,plVar1,8);
  FUN_00f07940(0,0,plVar17,8,plVar1,8);
  FUN_00f07940(0,0,param_3 + 0xdb,8,plVar17,8);
  fVar20 = 0.0;
  FUN_00f07940(0,0,plVar2,0,param_3 + 0x11f,0);
  if (((0.0 < param_2) && (0 < *(int *)((long)param_3 + 0x923c))) &&
     (*(char *)((long)param_3 + 0x9254) == '\0')) {
    FUN_00c10108(param_3);
  }
  fVar18 = (float)FUN_00f0e700(plVar2);
  fVar18 = fVar18 * 0.1;
  fVar20 = fVar20 * 0.1;
  if (iVar9 == 0) {
    FUN_00f07940(fVar18,-fVar20,param_3 + 0x191,8,plVar2,3);
    FUN_00f13f08(0x42800000,0x42800000,param_3 + 0x101);
  }
  else {
    fVar18 = -fVar18;
    FUN_00f07940(fVar18,-fVar20,param_3 + 0x191,8,plVar2,2);
    FUN_00f13f08(0x42800000,0x42800000,param_3 + 0x101);
  }
  FUN_00f07940(fVar18,fVar20,param_3 + 0x101,8,plVar2,iVar9 != 0);
  plVar17 = param_3 + 0x56;
  FUN_00f13238(plVar17);
  if (iVar9 == 0) {
    uVar19 = 0xc1c80000;
    uVar15 = 5;
    uVar16 = 5;
  }
  else {
    uVar19 = 0x41c80000;
    uVar15 = 7;
    uVar16 = 7;
  }
  FUN_00f07940(uVar19,0,plVar17,uVar15,param_3,uVar16);
  FUN_00c1047c(param_3);
  FUN_00c10ab4(param_3);
  fVar20 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar18 = (float)FUN_00f13e54(plVar17);
  uStack_7c = 0x42ac0000;
  plVar3 = param_3 + 0x16b;
  FUN_00f0d4e0(plVar3);
  plVar4 = param_3 + 0x136;
  local_80 = fVar20 - (fVar18 + 86.0);
  FUN_00f13f18(plVar4,&local_80);
  if (((DAT_0313ac10 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_0313ac10), iVar13 != 0)) {
    FUN_00e70510(&DAT_0313ac00);
    __cxa_atexit(FUN_0090e338,&DAT_0313ac00,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_0313ac10);
  }
  plVar7 = param_3 + 0x309;
  uVar15 = FUN_00f08be8(param_3 + 0x36c);
  FUN_00910394(&DAT_0313ac00,uVar15);
  FUN_00e705c8(&local_90,"99.9K");
  FUN_00c88770(plVar7,&local_90);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  if (((DAT_0313ac28 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_0313ac28), iVar13 != 0)) {
    FUN_00e70510(&DAT_0313ac18);
    __cxa_atexit(FUN_0090e338,&DAT_0313ac18,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_0313ac28);
  }
  uVar14 = FUN_009f1f70(0x1d);
  plVar8 = param_3 + 0x1244;
  if ((uVar14 & 1) == 0) {
    FUN_00e70e18(plVar8,&DAT_01bb6d43,(int)param_3[0x1249]);
  }
  else {
    FUN_00e70e18((double)*(float *)((long)param_3 + 0x9244),plVar8,&DAT_01b9f3eb);
  }
  FUN_00910394(&DAT_0313ac18,plVar8);
  plVar8 = param_3 + 0x273;
  FUN_00e705c8(&local_90,&DAT_01ba09f0);
  FUN_00c88770(plVar8,&local_90);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  if (((DAT_0313ac40 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_0313ac40), iVar13 != 0)) {
    FUN_00e70510(&DAT_0313ac30);
    __cxa_atexit(FUN_0090e338,&DAT_0313ac30,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_0313ac40);
  }
  plVar5 = param_3 + 0x1b7;
  uVar15 = FUN_00f08be8(param_3 + 0x1d1);
  FUN_00910394(&DAT_0313ac30,uVar15);
  FUN_00e705c8(&local_90,&DAT_01bbbc99);
  FUN_00f0d75c(plVar5,&local_90);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  if (((DAT_0313ac58 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_0313ac58), iVar13 != 0)) {
    FUN_00e70510(&DAT_0313ac48);
    __cxa_atexit(FUN_0090e338,&DAT_0313ac48,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_0313ac58);
  }
  plVar6 = param_3 + 0x1dd;
  uVar15 = FUN_00f08be8(param_3 + 0x240);
  FUN_00910394(&DAT_0313ac48,uVar15);
  FUN_00e705c8(&local_90,"19");
  FUN_00c88770(plVar6,&local_90);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  *(undefined4 *)(param_3 + 0x272) = 0x40c00000;
  *(undefined4 *)(param_3 + 0x39e) = 0x40c00000;
  *(undefined4 *)(param_3 + 0x308) = 0x40c00000;
  FUN_00c8861c(plVar6);
  FUN_00c8861c(plVar7);
  FUN_00c8861c(plVar8);
  FUN_00f07940(0,0,plVar8,5,plVar4,5);
  FUN_00f07940(0xc3808000,0,plVar7,7,plVar8,7);
  FUN_00f07940(0xc3808000,0,plVar5,7,plVar7,7);
  FUN_00f07940(0,0,plVar6,7,plVar5,5);
  FUN_00f07940(0x41a00000,0,plVar3,7,plVar4,7);
  FUN_00f07940(0,0,param_3 + 0x14d,8,plVar3,8);
  fVar20 = (float)FUN_00f080a0(plVar3,7,plVar5,7);
  FUN_00f0db64(fVar20 + -20.0,0,0x3f800000,plVar3);
  fVar20 = (float)FUN_00f01c20(plVar3);
  FUN_00f13f08(fVar20 + 8.0,0x40800000,param_3 + 0x14d);
  FUN_00c88770(plVar7,&DAT_0313ac00);
  FUN_00c88770(plVar8,&DAT_0313ac18);
  FUN_00f0d75c(plVar5,&DAT_0313ac30);
  FUN_00c88770(plVar6,&DAT_0313ac48);
  if (iVar9 == 0) {
    uVar21 = 0xc1800000;
    FUN_00f07b18(0xc1800000,plVar4,1,plVar17,3);
    FUN_00f07b18(0xc1200000,plVar4,0,plVar17,0);
    FUN_00f07b18(0xc1800000,param_3 + 0x39f,1,plVar17,3);
    FUN_00f07b18(0,param_3 + 0x39f,2,plVar17,2);
    uVar15 = 1;
    uVar16 = 3;
  }
  else {
    uVar21 = 0x41800000;
    FUN_00f07b18(0x41800000,plVar4,3,plVar17,1);
    FUN_00f07b18(0xc1200000,plVar4,0,plVar17,0);
    FUN_00f07b18(0x41800000,param_3 + 0x39f,3,plVar17,1);
    FUN_00f07b18(0,param_3 + 0x39f,2,plVar17,2);
    uVar15 = 3;
    uVar16 = 1;
  }
  FUN_00f07b18(uVar21,param_3 + 0xde2,uVar15,plVar17,uVar16);
  FUN_00f07b18(0,param_3 + 0xde2,2,plVar17,2);
  plVar17 = param_3 + 0x1a;
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_00f13f08(0x42f30000,plVar17);
  uVar19 = 7;
  uVar11 = 0x41400000;
  uVar12 = 5;
  if (iVar9 != 0) {
    uVar19 = 5;
    uVar11 = 0xc1400000;
    uVar12 = 7;
  }
  FUN_00f07940(uVar11,0,plVar17,uVar12,plVar1,uVar12);
  fVar20 = (float)FUN_00f080a0(plVar2,8,param_3,uVar19);
  plVar1 = param_3 + 0x38;
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_00f13f08(ABS(fVar20) + 180.0,plVar1);
  if (iVar9 == 0) {
    uVar19 = 0x80000000;
    uVar15 = 1;
    uVar16 = 3;
  }
  else {
    uVar15 = 3;
    uVar16 = 1;
    uVar19 = 0;
  }
  FUN_00f07b18(uVar19,plVar1,uVar15,plVar17,uVar16);
  FUN_00f07b18(0,plVar1,5,plVar17,5);
  if (*(long *)(lVar10 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

