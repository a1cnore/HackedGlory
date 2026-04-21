// functions/10004 — 499 functions
#include "GameKindred.h"




void FUN_100040054(void)

{
  if ((DAT_10184df38 & 1) == 0) {
    DAT_10184df30 = DAT_101872e38;
    DAT_10184df38 = 1;
  }
  return;
}




void FUN_100040080(long param_1)

{
  long lVar1;
  
  DAT_10184df40 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184df40 + 1;
  lVar1 = param_1 + (ulong)DAT_10184df40 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_10004036c;
  *(code **)(lVar1 + 0xb8) = FUN_1000403cc;
  *(uint *)(lVar1 + 0xa4) = DAT_10184df40;
  *(undefined4 *)(lVar1 + 0xa8) = 0x50;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x10;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0990(param_1,0x828f09a8,thunk_FUN_1000401e8,0);
  return;
}




void thunk_FUN_1000401e8(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  float fVar6;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dd68) {
    lVar4 = 0;
  }
  lVar4 = *(long *)(lVar4 + 0x40);
  fVar6 = *(float *)(lVar4 + 0xac) + *(float *)(lVar4 + 0x160) * (*(float *)(lVar4 + 0x2c8) + 1.0);
  NEON_fminnm(fVar6 + fVar6 * *(float *)(lVar4 + 0x214),DAT_101dc2d74);
  iVar5 = (int)DAT_101dc2cb4;
  iVar3 = *(int *)(param_1 + 0x48);
  if (iVar3 != iVar5) {
    plVar1 = *(long **)(param_1 + 0x38);
    uVar2 = 0;
    if (plVar1 != (long *)0x0) {
      if (*(int *)(param_1 + 0x40) == (int)plVar1[1]) {
        uVar2 = (**(code **)(*plVar1 + 0x10))(DAT_101dc2cb4,DAT_101dc2cb4,DAT_101dc2d74,0x3f800000);
        iVar3 = *(int *)(param_1 + 0x48);
      }
      else {
        uVar2 = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined4 *)(param_1 + 0x40) = DAT_101dc0b88;
      }
    }
    FUN_10003fc10(uVar2,iVar5 - iVar3);
    *(int *)(param_1 + 0x48) = iVar5;
  }
  return;
}




void FUN_1000400f4(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long local_c8 [16];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  uVar1 = FUN_1010a1958(local_c8,0x10,DAT_10184df40,0);
  if (uVar1 != 0) {
    uVar5 = (ulong)uVar1;
    plVar6 = local_c8;
    do {
      lVar4 = *plVar6;
      if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184df40) {
        lVar4 = 0;
      }
      plVar2 = *(long **)(lVar4 + 0x38);
      if (plVar2 != (long *)0x0) {
        if (*(int *)(lVar4 + 0x40) == (int)plVar2[1]) {
          lVar3 = (**(code **)(*plVar2 + 0x10))();
          if (lVar3 == param_1) {
            FUN_1010a01dc(lVar4);
          }
        }
        else {
          *(undefined8 *)(lVar4 + 0x38) = 0;
          *(undefined4 *)(lVar4 + 0x40) = DAT_101dc0b88;
        }
      }
      plVar6 = plVar6 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1000401e8(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  float fVar6;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dd68) {
    lVar4 = 0;
  }
  lVar4 = *(long *)(lVar4 + 0x40);
  fVar6 = *(float *)(lVar4 + 0xac) + *(float *)(lVar4 + 0x160) * (*(float *)(lVar4 + 0x2c8) + 1.0);
  NEON_fminnm(fVar6 + fVar6 * *(float *)(lVar4 + 0x214),DAT_101dc2d74);
  iVar5 = (int)DAT_101dc2cb4;
  iVar3 = *(int *)(param_1 + 0x48);
  if (iVar3 != iVar5) {
    plVar1 = *(long **)(param_1 + 0x38);
    uVar2 = 0;
    if (plVar1 != (long *)0x0) {
      if (*(int *)(param_1 + 0x40) == (int)plVar1[1]) {
        uVar2 = (**(code **)(*plVar1 + 0x10))(DAT_101dc2cb4,DAT_101dc2cb4,DAT_101dc2d74,0x3f800000);
        iVar3 = *(int *)(param_1 + 0x48);
      }
      else {
        uVar2 = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined4 *)(param_1 + 0x40) = DAT_101dc0b88;
      }
    }
    FUN_10003fc10(uVar2,iVar5 - iVar3);
    *(int *)(param_1 + 0x48) = iVar5;
  }
  return;
}




void FUN_1000402bc(long param_1)

{
  FUN_1010a1da8(param_1 + 0x28);
  FUN_1010a0064(param_1);
  return;
}




void FUN_1000402e4(long param_1)

{
  void *pvVar1;
  
  FUN_1010a1da8(param_1 + 0x28);
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100040310(long param_1)

{
  FUN_1010a1da8();
  FUN_1010a0064(param_1 + -0x28);
  return;
}




void FUN_100040334(long param_1)

{
  void *pvVar1;
  
  FUN_1010a1da8();
  pvVar1 = (void *)FUN_1010a0064(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




long FUN_10004035c(long param_1)

{
  return param_1 + -0x28;
}




long FUN_100040364(long param_1)

{
  return param_1 + -0x28;
}




undefined8 * FUN_10004036c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  *param_1 = &PTR_FUN_10144c5c0;
  param_1[5] = &PTR_FUN_10144c5f0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 9) = 0;
  return param_1;
}




void FUN_1000403cc(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000403d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_1000403d8(void)

{
  if ((DAT_10184df48 & 1) == 0) {
    DAT_10184df40 = DAT_101872e38;
    DAT_10184df48 = 1;
  }
  return;
}




void FUN_100040404(void)

{
  if ((DAT_10184dd70 & 1) == 0) {
    DAT_10184dd68 = DAT_101872e38;
    DAT_10184dd70 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100040430(void)

{
  uRam0000000101dc2d08 = 0x7f7fffff7f7fffff;
  _DAT_101dc2d00 = 0x7f7fffff7f7fffff;
  uRam0000000101dc2d18 = 0x7f7fffff7f7fffff;
  _DAT_101dc2d10 = 0x7f7fffff7f7fffff;
  uRam0000000101dc2d28 = 0x7f7fffff7f7fffff;
  _DAT_101dc2d20 = 0x7f7fffff7f7fffff;
  uRam0000000101dc2d38 = 0x7f7fffff7f7fffff;
  _DAT_101dc2d30 = 0x7f7fffff7f7fffff;
  DAT_101dc2d40 = 0x7f7fffff;
  DAT_101dc2d44 = 0x7f7fffff;
  DAT_101dc2d48 = 0x7f7fffff;
  DAT_101dc2d4c = 0x3f800000;
  uRam0000000101dc2d58 = 0x7f7fffff7f7fffff;
  _DAT_101dc2d50 = 0x7f7fffff7f7fffff;
  DAT_101dc2d60 = 0x7f7fffff;
  DAT_101dc2d64 = 0x3eb33333;
  uRam0000000101dc2d70 = 0x7f7fffff7f7fffff;
  _DAT_101dc2d68 = 0x7f7fffff7f7fffff;
  uRam0000000101dc2d80 = 0x7f7fffff7f7fffff;
  _DAT_101dc2d78 = 0x7f7fffff7f7fffff;
  uRam0000000101dc2d90 = 0x7f7fffff7f7fffff;
  _DAT_101dc2d88 = 0x7f7fffff7f7fffff;
  uRam0000000101dc2da0 = 0x7f7fffff7f7fffff;
  _DAT_101dc2d98 = 0x7f7fffff7f7fffff;
  DAT_101dc2da8 = 0x7f7fffff;
  DAT_101dc2dac = 0x7f7fffff;
  DAT_101dc2db0 = 0x7f7fffff;
  uRam0000000101dc2c48 = 0xff7fffffff7fffff;
  _DAT_101dc2c40 = 0xff7fffffff7fffff;
  DAT_101dc2c50 = 0;
  DAT_101dc2c58 = 0;
  uRam0000000101dc2c64 = 0xff7fffffff7fffff;
  _DAT_101dc2c5c = 0xff7fffffff7fffff;
  DAT_101dc2c6c = 0xff7fffff;
  DAT_101dc2c70 = 0xff7fffff;
  DAT_101dc2c74 = NEON_fmov(0xbf800000,4);
  DAT_101dc2c7c = 0x3f000000;
  DAT_101dc2c80 = 0;
  DAT_101dc2c88 = 0;
  uRam0000000101dc2c98 = 0xff7fffffff7fffff;
  _DAT_101dc2c90 = 0xff7fffffff7fffff;
  uRam0000000101dc2ca8 = 0xff7fffffff7fffff;
  _DAT_101dc2ca0 = 0xff7fffffff7fffff;
  uRam0000000101dc2cb8 = 0xff7fffffff7fffff;
  _DAT_101dc2cb0 = 0xff7fffffff7fffff;
  uRam0000000101dc2cc8 = 0xbf800000bf800000;
  _DAT_101dc2cc0 = 0xbf80000000000000;
  DAT_101dc2cd0 = 0xbf800000;
  DAT_101dc2cd4 = 0xff7fffff;
  DAT_101dc2cd8 = 0xff7fffff;
  DAT_101dc2cdc = 0xff7fffff;
  DAT_101dc2ce0 = 0;
  DAT_101dc2ce4 = 0xff7fffff;
  DAT_101dc2ce8 = 0;
  DAT_101dc2cf0 = 0;
  return;
}




undefined8 * FUN_1000404fc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  long lVar8;
  ushort *puVar9;
  code *local_a0;
  undefined8 *puStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  puVar1 = param_1 + 5;
  FUN_100653378(puVar1);
  *param_1 = &PTR_FUN_10144c620;
  param_1[5] = &PTR_FUN_10144c660;
  param_1[0x1c] = &PTR_FUN_10144c7c0;
  uVar4 = DAT_101dc0b88;
  lVar8 = 0x128;
  do {
    puVar3 = (undefined8 *)((long)param_1 + lVar8);
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = uVar4;
    puVar3[2] = 0;
    *(undefined4 *)(puVar3 + 3) = uVar4;
    *(undefined4 *)(puVar3 + 5) = 0;
    puVar3[4] = 0;
    *(undefined4 *)((long)puVar3 + 0x3c) = 0;
    *(undefined8 *)((long)puVar3 + 0x2c) = 0;
    *(undefined8 *)((long)puVar3 + 0x31) = 0;
    lVar8 = lVar8 + 0x40;
  } while (puVar3 + 8 != param_1 + 0xc5);
  puVar3 = param_1 + 0xc9;
  param_1[0xc6] = 0;
  param_1[0xc5] = 0;
  param_1[200] = 0;
  param_1[199] = 0;
  thunk_FUN_100652c08(puVar3);
  puVar2 = param_1 + 0xe7;
  thunk_FUN_100652c08(puVar2);
  param_1[0x105] = 0;
  param_1[0x106] = 0x3f80000000000000;
  uVar5 = DAT_101dc1cb8;
  param_1[0x10f] = DAT_101dc1cb8;
  param_1[0x110] = uVar5;
  param_1[0x111] = DAT_101873a38;
  param_1[0x113] = 0;
  param_1[0x112] = 0;
  *(undefined1 *)(param_1 + 0x114) = 0;
  *(uint *)((long)param_1 + 0xac) = *(uint *)((long)param_1 + 0xac) | 0x10;
  (**(code **)(param_1[5] + 0x78))(puVar1,puVar3,1);
  FUN_100642bd8(puVar3,puVar2,1);
  FUN_100652cac(puVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_ability_level_dot_lit");
  local_a0 = (code *)&DAT_3f0000003f000000;
  (**(code **)(param_1[0xc9] + 0x28))(puVar3,&local_a0);
  FUN_10064e47c(0x41b00000,0x41b00000,puVar3);
  *(uint *)((long)param_1 + 0x6cc) = *(uint *)((long)param_1 + 0x6cc) & 0xfffffffb;
  FUN_100652dd4(puVar3,&DAT_10115a17c,2);
  FUN_100652cac(puVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_ability_level_dot_lit");
  local_a0 = (code *)&DAT_3f0000003f000000;
  (**(code **)(param_1[0xe7] + 0x28))(puVar2,&local_a0);
  FUN_10064e47c(0x41b00000,0x41b00000,puVar2);
  if ((*(uint *)((long)param_1 + 0x7bc) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x7bc) = *(uint *)((long)param_1 + 0x7bc) & 0xffff807f;
    FUN_1000200a0(puVar2);
  }
  FUN_100652dd4(puVar2,&DAT_10115a17c,2);
  uVar5 = FUN_10064081c(0x3e4ccccd);
  FUN_100640db8(0x3f800000,0x3f800000,0,0);
  FUN_100640840(0x3f666666,0x3d4ccccd,0);
  uVar6 = FUN_100640db8(0x400ccccd,0x400ccccd,0x3f400000,FUN_10001f160);
  FUN_100640840(0,0x3f666666,FUN_10001f4ac);
  lVar8 = DAT_101dbd2f8;
  uVar7 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar9;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar7;
    *(int *)(lVar8 + 0x20014) = *(int *)(lVar8 + 0x20014) + 1;
    FUN_10063f1bc(puVar9);
    *(int *)(lVar8 + 0x20020) = *(int *)(lVar8 + 0x20020) + 1;
  }
  FUN_10063f2a4(puVar9,uVar6);
  lVar8 = DAT_101dbd2f8;
  uVar7 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar9;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar7;
    *(int *)(lVar8 + 0x20014) = *(int *)(lVar8 + 0x20014) + 1;
    FUN_10063f564(puVar9);
    *(int *)(lVar8 + 0x20020) = *(int *)(lVar8 + 0x20020) + 1;
  }
  FUN_10063f614(puVar9,uVar5);
  FUN_10063f664(puVar9);
  FUN_100642b14(puVar2,puVar9);
  FUN_100653464(puVar1,FUN_100040a80,param_1);
  local_78 = DAT_101dbd458;
  local_a0 = FUN_100041370;
  puVar1 = param_1 + 6;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  puStack_98 = param_1;
  FUN_10001554c(puVar1,&local_a0);
  local_78 = DAT_101dbd484;
  local_a0 = FUN_100041378;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  puStack_98 = param_1;
  FUN_10001554c(puVar1,&local_a0);
  local_78 = DAT_101dbd470;
  local_a0 = FUN_100041380;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  puStack_98 = param_1;
  FUN_10001554c(puVar1,&local_a0);
  local_78 = DAT_101dbd45c;
  local_a0 = FUN_100041388;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  puStack_98 = param_1;
  FUN_10001554c(puVar1,&local_a0);
  local_78 = DAT_101dbd488;
  local_a0 = FUN_100041390;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  puStack_98 = param_1;
  FUN_10001554c(puVar1,&local_a0);
  local_78 = DAT_101dbd460;
  local_a0 = FUN_100041398;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  puStack_98 = param_1;
  FUN_10001554c(puVar1,&local_a0);
  local_78 = DAT_101dbd48c;
  local_a0 = FUN_1000413a0;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  puStack_98 = param_1;
  FUN_10001554c(puVar1,&local_a0);
  local_78 = DAT_101dbd4a4;
  local_a0 = thunk_FUN_100042750;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  puStack_98 = param_1;
  FUN_10001554c(puVar1,&local_a0);
  return param_1;
}




void FUN_100040a80(undefined8 param_1,long param_2,long *param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  undefined1 uVar2;
  bool bVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined2 local_148;
  undefined1 local_146;
  undefined1 local_145;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  float local_130 [32];
  long local_b0;
  
  local_b0 = *(long *)PTR____stack_chk_guard_101444218;
  uVar6 = FUN_10011bb18();
  local_134 = CONCAT13((char)(int)(*(float *)(param_2 + 0x18) * 255.0),0xffffff);
  fVar11 = (float)FUN_1010a1cd4();
  uVar4 = local_134;
  DAT_101dc2db4 = DAT_101dc2db4 + fVar11 * 6.2831855;
  if (6.2831855 <= DAT_101dc2db4) {
    DAT_101dc2db4 = DAT_101dc2db4 - 6.2831855;
  }
  uVar22 = 0xffffffff;
  local_130[0] = 0.0;
  local_130[1] = -NAN;
  local_130[4] = -NAN;
  local_130[5] = 0.0;
  local_130[10] = -NAN;
  local_130[0xb] = 0.0;
  uVar18 = 0x8000000080009;
  local_130[2] = 7.34697e-40;
  local_130[3] = 7.34684e-40;
  local_130[6] = 1.4013e-45;
  local_130[7] = -NAN;
  local_130[8] = 0.0;
  local_130[9] = 1.12104e-44;
  FUN_1000428cc(param_1,param_2,param_3,param_5,local_134,uVar6,local_130);
  lVar10 = 0xc;
  do {
    FUN_1000428cc(DAT_101dc2db4,param_1,param_2,param_3,param_5,uVar4,uVar6,(long)local_130 + lVar10
                 );
    lVar10 = lVar10 + 0xc;
  } while (lVar10 != 0x30);
  lVar10 = 0;
  do {
    fVar11 = (float)uVar18;
    lVar8 = param_5 + lVar10;
    if (*(char *)(lVar8 + 0x160) != '\0') {
      plVar7 = *(long **)(lVar8 + 0x128);
      if (plVar7 == (long *)0x0) {
LAB_100040c68:
        local_140 = *(undefined8 *)(param_5 + lVar10 + 0x148);
        local_138 = *(undefined4 *)(param_5 + lVar10 + 0x150);
      }
      else {
        if (*(int *)(param_5 + lVar10 + 0x130) != (int)plVar7[1]) {
          *(undefined8 *)(lVar8 + 0x128) = 0;
          *(undefined4 *)(param_5 + lVar10 + 0x130) = DAT_101dc0b88;
          goto LAB_100040c68;
        }
        lVar8 = (**(code **)(*plVar7 + 0x10))();
        if (lVar8 == 0) goto LAB_100040c68;
        FUN_100345b68(lVar8,&local_140,0);
        FUN_1004654a0(lVar8);
        FUN_1004d26c0(local_130,0x80,"icon_hero_%s");
      }
      fVar12 = (float)FUN_10004165c(param_5,&local_140);
      iVar1 = *(int *)(param_5 + lVar10 + 0x164);
      fVar13 = (float)(int)fVar12;
      fVar24 = (float)(int)fVar11;
      fVar11 = (float)DAT_101873a38;
      fVar12 = DAT_101873a38._4_4_;
      if (iVar1 - 2U < 3) {
        bVar3 = false;
LAB_100040cec:
        lVar8 = FUN_10011bc4c(iVar1,0);
        bVar5 = lVar8 == 0;
        if (lVar8 == 0) {
          fVar14 = *(float *)(param_5 + lVar10 + 0x15c);
          fVar14 = fVar14 - (float)(int)fVar14;
          if (!bVar3) {
            fVar14 = 1.0 - fVar14;
            goto LAB_100040e98;
          }
        }
        else {
          fVar14 = *(float *)(param_2 + 0x10);
          fVar16 = *(float *)(param_2 + 0x14);
          lVar9 = FUN_1006575c4(param_3,lVar8);
          fVar19 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 8));
          fVar23 = fVar14 * fVar11 * fVar19;
          fVar15 = fVar13 - fVar23 * 0.5;
          fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 10));
          fVar14 = fVar16 * fVar12 * fVar14;
          fVar17 = fVar24 - fVar14 * 0.5;
          fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 4));
          fVar20 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 6));
          fVar25 = 1.0 / (float)*(int *)(*(long *)(*param_3 + 8) + 0x48);
          FUN_100043664(fVar15,fVar17,fVar15 + fVar23,fVar17 + fVar14,0,SUB42(fVar25 * fVar16,0),
                        SUB42(1.0 - fVar20 * (1.0 / (float)*(int *)(*(long *)(*param_3 + 8) + 0x4c))
                              ,0),SUB42(fVar25 * (fVar19 + fVar16),0),param_1,&local_134,0);
          fVar14 = *(float *)(param_2 + 0x10);
          fVar16 = *(float *)(param_2 + 0x14);
          lVar9 = FUN_1006575c4(param_3,lVar8);
          fVar19 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 8));
          fVar23 = fVar14 * fVar11 * fVar19;
          fVar15 = fVar13 - fVar23 * 0.5;
          fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 10));
          fVar14 = fVar16 * fVar12 * fVar14;
          fVar17 = fVar24 - fVar14 * 0.5;
          fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 4));
          fVar20 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 6));
          fVar25 = 1.0 / (float)*(int *)(*(long *)(*param_3 + 8) + 0x48);
          FUN_100043664(fVar15,fVar17,fVar15 + fVar23,fVar17 + fVar14,0,SUB42(fVar25 * fVar16,0),
                        SUB42(1.0 - fVar20 * (1.0 / (float)*(int *)(*(long *)(*param_3 + 8) + 0x4c))
                              ,0),SUB42(fVar25 * (fVar19 + fVar16),0),param_1,&local_134,0);
          fVar14 = *(float *)(param_5 + lVar10 + 0x15c);
          fVar14 = fVar14 - (float)(int)fVar14;
          if (!bVar3) {
            bVar5 = false;
            fVar14 = 1.0 - fVar14;
          }
        }
      }
      else {
        if (iVar1 == 5) {
          fVar11 = 1.0;
          bVar3 = true;
          fVar12 = 1.0;
          goto LAB_100040cec;
        }
        if (iVar1 == 6) {
          bVar3 = false;
          fVar11 = 0.85;
          fVar12 = fVar11;
          goto LAB_100040cec;
        }
        fVar14 = *(float *)(param_5 + lVar10 + 0x15c);
        fVar14 = (1.0 - fVar14) + (float)(int)fVar14;
LAB_100040e98:
        lVar8 = 0;
        bVar5 = true;
      }
      local_148 = (undefined2)local_134;
      local_146 = local_134._2_1_;
      fVar16 = (float)NEON_ucvtf(local_134 >> 0x18);
      uVar22 = 0x3f333333;
      fVar16 = fVar16 * 0.7 - fVar14 * fVar16 * 0.7;
      uVar18 = (ulong)(uint)fVar16;
      uVar2 = (undefined1)(int)fVar16;
      local_145 = uVar2;
      if (!bVar5) {
        fVar14 = fVar14 * 1.5;
        fVar16 = *(float *)(param_2 + 0x10);
        fVar20 = *(float *)(param_2 + 0x14);
        lVar9 = FUN_1006575c4(param_3,lVar8);
        fVar23 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 8));
        fVar25 = (fVar14 + fVar11 * fVar11 * fVar16) * fVar23;
        fVar17 = fVar13 - fVar25 * 0.5;
        fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 10));
        fVar16 = (fVar14 + fVar12 * fVar12 * fVar20) * fVar16;
        fVar19 = fVar24 - fVar16 * 0.5;
        fVar20 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 4));
        fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 6));
        fVar26 = 1.0 / (float)*(int *)(*(long *)(*param_3 + 8) + 0x48);
        FUN_100043664(fVar17,fVar19,fVar17 + fVar25,fVar19 + fVar16,0,SUB42(fVar26 * fVar20,0),
                      SUB42(1.0 - fVar15 * (1.0 / (float)*(int *)(*(long *)(*param_3 + 8) + 0x4c)),0
                           ),SUB42(fVar26 * (fVar23 + fVar20),0),param_1,&local_148,0);
        fVar16 = *(float *)(param_2 + 0x10);
        fVar20 = *(float *)(param_2 + 0x14);
        local_145 = uVar2;
        lVar8 = FUN_1006575c4(param_3,lVar8);
        fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(lVar8 + 8));
        fVar15 = (fVar14 + 0.5 + fVar11 * fVar11 * fVar16) * fVar15;
        fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar8 + 10));
        uVar18 = (ulong)(uint)(fVar24 - (fVar14 + 0.5 + fVar12 * fVar12 * fVar20) * fVar11 * 0.5);
        NEON_ucvtf((uint)*(ushort *)(lVar8 + 4));
        NEON_ucvtf((uint)*(ushort *)(lVar8 + 6));
        uVar22 = (ulong)(uint)((fVar13 - fVar15 * 0.5) + fVar15);
        FUN_100043664(param_1,&local_148,0);
      }
    }
    fVar11 = (float)uVar18;
    uVar21 = (undefined4)uVar22;
    lVar10 = lVar10 + 0x40;
    if (lVar10 == 0x500) {
      FUN_1000320fc();
      FUN_100033428();
      local_130[0] = (float)FUN_10002e594();
      local_130[1] = fVar11;
      local_130[2] = (float)uVar21;
      fVar24 = (float)FUN_10004165c(param_5,local_130);
      FUN_10064142c(local_130,&local_140);
      fVar19 = *(float *)(param_2 + 0x14);
      fVar14 = (local_130[0] * *(float *)(param_2 + 0x10) * 40.800003) / (float)local_140;
      fVar17 = (float)(int)(*(float *)(param_2 + 0x10) * 4.0);
      local_148 = 0xffff;
      local_146 = 0xff;
      local_145 = (undefined1)(int)(*(float *)(param_2 + 0x18) * 76.5);
      fVar16 = fVar14 * 0.5;
      fVar20 = fVar24 - fVar16;
      fVar25 = fVar20 - fVar17;
      fVar23 = (fVar11 + -3.0) - fVar19 * 24.0;
      lVar10 = *(long *)(param_5 + 0x628);
      fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(lVar10 + 8));
      NEON_ucvtf((uint)*(ushort *)(lVar10 + 10));
      fVar12 = (float)NEON_ucvtf((uint)*(ushort *)(lVar10 + 4));
      fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(lVar10 + 6));
      fVar27 = 1.0 / (float)*(int *)(*(long *)(*param_3 + 8) + 0x48);
      fVar26 = fVar14 + fVar17 * 2.0 + fVar25;
      FUN_100043664(fVar25,fVar23 - (float)(int)(fVar19 * 4.0),fVar26,fVar23,0,
                    SUB42(fVar27 * fVar12,0),
                    SUB42(1.0 - fVar13 * (1.0 / (float)*(int *)(*(long *)(*param_3 + 8) + 0x4c)),0),
                    SUB42(fVar27 * (fVar15 + fVar12),0),param_1,&local_148,0);
      fVar15 = fVar19 * 24.0 + fVar11 + -3.0;
      lVar10 = *(long *)(param_5 + 0x628);
      fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(lVar10 + 8));
      NEON_ucvtf((uint)*(ushort *)(lVar10 + 10));
      fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar10 + 4));
      fVar12 = (float)NEON_ucvtf((uint)*(ushort *)(lVar10 + 6));
      fVar13 = 1.0 / (float)*(int *)(*(long *)(*param_3 + 8) + 0x48);
      FUN_100043664(fVar25,fVar15,fVar26,fVar15 + (float)(int)(fVar19 * 4.0),0,
                    SUB42(fVar13 * fVar11,0),
                    SUB42(1.0 - fVar12 * (1.0 / (float)*(int *)(*(long *)(*param_3 + 8) + 0x4c)),0),
                    SUB42(fVar13 * (fVar14 + fVar11),0),param_1,&local_148,0);
      lVar10 = *(long *)(param_5 + 0x628);
      fVar12 = (float)NEON_ucvtf((uint)*(ushort *)(lVar10 + 8));
      NEON_ucvtf((uint)*(ushort *)(lVar10 + 10));
      fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(lVar10 + 4));
      fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(lVar10 + 6));
      fVar11 = 1.0 / (float)*(int *)(*(long *)(*param_3 + 8) + 0x48);
      fVar15 = fVar23 + fVar19 * 48.0;
      FUN_100043664(fVar25,fVar23,fVar20,fVar15,0,SUB42(fVar11 * fVar13,0),
                    SUB42(1.0 - fVar14 * (1.0 / (float)*(int *)(*(long *)(*param_3 + 8) + 0x4c)),0),
                    SUB42(fVar11 * (fVar12 + fVar13),0),param_1,&local_148,0);
      fVar16 = fVar16 + fVar24;
      lVar10 = *(long *)(param_5 + 0x628);
      fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(lVar10 + 8));
      NEON_ucvtf((uint)*(ushort *)(lVar10 + 10));
      fVar24 = (float)NEON_ucvtf((uint)*(ushort *)(lVar10 + 4));
      fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar10 + 6));
      fVar12 = 1.0 / (float)*(int *)(*(long *)(*param_3 + 8) + 0x48);
      FUN_100043664(fVar16,fVar23,fVar16 + fVar17,fVar15,0,SUB42(fVar12 * fVar24,0),
                    SUB42(1.0 - fVar11 * (1.0 / (float)*(int *)(*(long *)(*param_3 + 8) + 0x4c)),0),
                    SUB42(fVar12 * (fVar13 + fVar24),0),param_1,&local_148,0);
      if (*(long *)PTR____stack_chk_guard_101444218 == local_b0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
  } while( true );
}




void FUN_100041370(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100041fd8(param_1,param_4);
  return;
}




void FUN_100041378(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100041f50(param_1,param_4);
  return;
}




void FUN_100041380(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000420a4(param_1,param_4);
  return;
}




void FUN_100041388(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100042474(param_1,param_4);
  return;
}




void FUN_100041390(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100042180(param_1,param_4);
  return;
}




void FUN_100041398(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100042810(param_1,param_4);
  return;
}




void FUN_1000413a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10004252c(param_1,param_4);
  return;
}




void thunk_FUN_100042750(void)

{
  FUN_100042750();
  return;
}




void FUN_1000413ac(void)

{
  return;
}




void FUN_1000413b0(long param_1)

{
  long lVar1;
  
  DAT_10184df50 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184df50 + 1;
  lVar1 = param_1 + (ulong)DAT_10184df50 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = thunk_FUN_1000404fc;
  *(code **)(lVar1 + 0xb8) = FUN_10004384c;
  *(uint *)(lVar1 + 0xa4) = DAT_10184df50;
  *(undefined4 *)(lVar1 + 0xa8) = 0x8a8;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 2;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,4,FUN_10004141c,0);
  return;
}




void FUN_10004141c(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  
  lVar7 = 0;
  do {
    lVar1 = param_1 + lVar7;
    if (*(char *)(lVar1 + 0x160) != '\0') {
      fVar9 = (float)FUN_1010a1cd4();
      fVar9 = *(float *)(lVar1 + 0x15c) - fVar9;
      *(float *)(lVar1 + 0x15c) = fVar9;
      uVar2 = DAT_101dc0b88;
      if (fVar9 <= 0.0) {
        lVar1 = param_1 + lVar7;
        *(undefined8 *)(lVar1 + 0x128) = 0;
        *(undefined4 *)(lVar1 + 0x130) = uVar2;
        *(undefined8 *)(lVar1 + 0x138) = 0;
        *(undefined4 *)(lVar1 + 0x140) = uVar2;
        *(undefined4 *)(lVar1 + 0x150) = 0;
        *(undefined8 *)(lVar1 + 0x148) = 0;
        *(undefined4 *)(lVar1 + 0x164) = 0;
        *(undefined8 *)(lVar1 + 0x154) = 0;
        *(undefined8 *)(lVar1 + 0x159) = 0;
      }
      else {
        lVar1 = param_1 + lVar7;
        plVar4 = *(long **)(lVar1 + 0x128);
        if (plVar4 != (long *)0x0) {
          if (*(int *)(lVar1 + 0x130) == (int)plVar4[1]) {
            lVar5 = (**(code **)(*plVar4 + 0x10))();
            uVar2 = DAT_101dc0b88;
            if ((lVar5 != 0) && ((*(byte *)(lVar5 + 0x2fc) & 0x1f) == 0)) {
              *(undefined8 *)(lVar1 + 0x128) = 0;
              *(undefined4 *)(lVar1 + 0x130) = uVar2;
              FUN_100345b68(lVar5,param_1 + lVar7 + 0x148,0);
            }
          }
          else {
            *(undefined8 *)(lVar1 + 0x128) = 0;
            *(undefined4 *)(lVar1 + 0x130) = DAT_101dc0b88;
          }
        }
      }
    }
    lVar7 = lVar7 + 0x40;
  } while (lVar7 != 0x500);
  if ((*(byte *)(param_1 + 0x8a0) >> 3 & 1) != 0) {
    fVar9 = (float)FUN_1010a1cd4();
    *(float *)(param_1 + 0x89c) = *(float *)(param_1 + 0x89c) + fVar9;
  }
  lVar7 = FUN_10011bb18();
  iVar3 = FUN_10011b9c4();
  if (iVar3 != 0) {
    uVar8 = 0;
    do {
      if ((~*(byte *)(lVar7 + 0x6d) & 3) == 0) {
        FUN_10001d778(lVar7);
      }
      uVar8 = uVar8 + 1;
      uVar6 = FUN_10011b9c4();
      lVar7 = lVar7 + 0x70;
    } while (uVar8 < (uVar6 & 0xffffffff));
  }
  FUN_100041588(param_1);
  return;
}




void FUN_100041588(undefined1 param_1 [16],float param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  float fVar5;
  undefined4 local_28;
  float fStack_24;
  
  if (*(long *)(param_3 + 0x828) != 0) {
    iVar1 = FUN_100465104();
    lVar2 = *(long *)(param_3 + 0x828);
    if ((iVar1 == 0) ||
       (((uVar4 = (ulong)*(ushort *)(lVar2 + 0x88) & 0x1f, (int)uVar4 != 0x1f &&
         (*(short *)(lVar2 + uVar4 * 0x38 + 0x90) == 4)) || ((*(byte *)(lVar2 + 0x2f8) & 0x83) != 0)
        ))) {
      FUN_100465104();
      *(uint *)(param_3 + 0x6cc) = *(uint *)(param_3 + 0x6cc) & 0xfffffffb;
      lVar2 = *(long *)(param_3 + 0x828);
    }
    uVar3 = FUN_10045154c(lVar2);
    local_28 = FUN_10004165c(param_3,uVar3);
    fStack_24 = param_2;
    fVar5 = (float)FUN_10064efd0(&local_28,param_3 + 0x28);
    if ((0.1 <= ABS(*(float *)(param_3 + 0x688) - fVar5)) ||
       (0.1 <= ABS(*(float *)(param_3 + 0x68c) - param_2))) {
      *(uint *)(param_3 + 0x6cc) = *(uint *)(param_3 + 0x6cc) & 0xfffffffb;
    }
  }
  return;
}




void FUN_10004165c(long param_1,float *param_2)

{
  undefined8 *puVar1;
  float fVar3;
  undefined8 uVar2;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  puVar1 = (undefined8 *)FUN_10003d5bc(param_1 + 0x28);
  fVar4 = *param_2;
  if ((*(byte *)(param_1 + 0x100) & 1) != 0) {
    fVar4 = -*param_2;
  }
  fVar7 = param_2[2];
  if ((*(byte *)(param_1 + 0x100) & 2) != 0) {
    fVar7 = -param_2[2];
  }
  if (*(float *)(param_1 + 0x830) != 0.0) {
    fVar6 = (float)((ulong)*(undefined8 *)(param_1 + 0x84c) >> 0x20) * fVar4;
    fVar4 = (float)*(undefined8 *)(param_1 + 0x84c) * fVar4 +
            (float)*(undefined8 *)(param_1 + 0x854) * fVar7;
    fVar7 = fVar6 + (float)((ulong)*(undefined8 *)(param_1 + 0x854) >> 0x20) * fVar7;
  }
  fVar9 = (float)*(undefined8 *)(param_1 + 0x864);
  fVar5 = fVar9 * *(float *)(param_1 + 0x838);
  fVar10 = (float)((ulong)*(undefined8 *)(param_1 + 0x864) >> 0x20);
  fVar8 = fVar10 * *(float *)(param_1 + 0x838);
  fVar6 = (float)*puVar1;
  fVar3 = (float)((ulong)*puVar1 >> 0x20);
  uVar2 = NEON_fminnm(CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x86c) >> 0x20) +
                               fVar7 * *(float *)(param_1 + 0x874),
                               (float)*(undefined8 *)(param_1 + 0x86c) +
                               fVar4 * *(float *)(param_1 + 0x874)),
                      CONCAT44((fVar10 + fVar3) - fVar8,(fVar9 + fVar6) - fVar5),4);
  NEON_fmaxnm(CONCAT44(fVar8 + fVar3,fVar5 + fVar6),uVar2,4);
  return;
}




void FUN_100041704(long param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  byte *pbVar8;
  long lVar9;
  float fVar10;
  undefined4 uVar11;
  
  *(long *)(param_1 + 0x828) = param_2;
  *(undefined8 *)(param_1 + 0x85c) = *param_3;
  lVar5 = FUN_10011bb24();
  if (lVar5 == 0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x83c) = *(undefined8 *)(lVar5 + 0x18);
  *(undefined8 *)(param_1 + 0x844) = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(param_1 + 0x830) = *(undefined8 *)(lVar5 + 0x20);
  *(undefined4 *)(param_1 + 0x838) = *(undefined4 *)(lVar5 + 0x30);
  lVar9 = param_1 + 0x28;
  uVar6 = (uint)(*(float *)(lVar5 + 8) * 255.0);
  uVar1 = *(uint *)(param_1 + 0xac);
  if (uVar6 != (uVar1 >> 7 & 0xff)) {
    *(uint *)(param_1 + 0xac) = uVar1 & 0xffff8000 | uVar1 & 0x7f | (uVar6 & 0xff) << 7;
    FUN_1000200a0(lVar9);
  }
  FUN_100652ca4(lVar9,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(lVar9,"white_background");
  if ((param_2 == 0) || (iVar4 = FUN_100345bbc(param_2), iVar4 == 0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_100345bbc(param_2);
    iVar4 = iVar4 + -1;
  }
  plVar7 = *(long **)(lVar5 + 0x60);
  if (plVar7 == (long *)0x0) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    if (*plVar7 != 0) {
      lVar9 = 0;
      do {
        lVar3 = lVar9 + 1;
        lVar9 = lVar9 + 1;
      } while (plVar7[lVar3] != 0);
    }
  }
  if (iVar4 < (int)lVar9) {
    pbVar8 = (byte *)plVar7[iVar4];
    fVar10 = *(float *)(param_1 + 0x830) + *(float *)(pbVar8 + 4);
    *(float *)(param_1 + 0x830) = fVar10;
    bVar2 = *(byte *)(param_1 + 0x100) & 0xfe | *pbVar8;
    *(byte *)(param_1 + 0x100) = bVar2;
    *(byte *)(param_1 + 0x100) =
         bVar2 & 0xfd | *(char *)(*(long *)(*(long *)(lVar5 + 0x60) + (long)iVar4 * 8) + 1) << 1;
  }
  else {
    fVar10 = *(float *)(param_1 + 0x830);
  }
  uVar11 = 0x3c8efa35;
  fVar10 = (float)___sincosf_stret(fVar10 * 0.017453292);
  *(undefined4 *)(param_1 + 0x84c) = uVar11;
  *(float *)(param_1 + 0x850) = fVar10;
  *(float *)(param_1 + 0x854) = -fVar10;
  *(undefined4 *)(param_1 + 0x858) = uVar11;
  FUN_1000418a4(param_1);
  return;
}




void FUN_1000418a4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0xf8;
  uVar2 = FUN_1006575c4(lVar1,"white_background");
  *(undefined8 *)(param_1 + 0x628) = uVar2;
  uVar2 = FUN_1006575c4(lVar1,"recall_swoop");
  *(undefined8 *)(param_1 + 0x630) = uVar2;
  uVar2 = FUN_1006575c4(lVar1,"hud_minimap_timer_circle");
  *(undefined8 *)(param_1 + 0x638) = uVar2;
  uVar2 = FUN_1006575c4(lVar1,"hud_minimap_timer_circle_empty");
  *(undefined8 *)(param_1 + 0x640) = uVar2;
  return;
}




void FUN_100041914(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x888) = param_1;
  *(undefined4 *)(param_3 + 0x88c) = param_2;
  FUN_100041920();
  return;
}




void FUN_100041920(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  
  puVar1 = (undefined8 *)FUN_10003d5bc(param_1 + 0x28);
  uVar2 = *puVar1;
  fVar3 = (float)puVar1[2] *
          (float)*(undefined8 *)(param_1 + 0x85c) * (float)*(undefined8 *)(param_1 + 0x888);
  fVar4 = (float)((ulong)puVar1[2] >> 0x20) *
          (float)((ulong)*(undefined8 *)(param_1 + 0x85c) >> 0x20) *
          (float)((ulong)*(undefined8 *)(param_1 + 0x888) >> 0x20);
  *(ulong *)(param_1 + 0x864) = CONCAT44(fVar4,fVar3);
  *(ulong *)(param_1 + 0x86c) =
       CONCAT44((float)((ulong)uVar2 >> 0x20) +
                fVar4 * (float)((ulong)*(undefined8 *)(param_1 + 0x844) >> 0x20),
                (float)uVar2 + fVar3 * (float)*(undefined8 *)(param_1 + 0x844));
  *(float *)(param_1 + 0x874) = fVar3 / (*(float *)(param_1 + 0x834) * *(float *)(param_1 + 0x83c));
  return;
}




void FUN_100041980(long param_1,undefined8 param_2,long *param_3,int param_4)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  long *plVar4;
  float fVar5;
  undefined4 uVar6;
  
  lVar2 = 0;
  fVar5 = 3.4028235e+38;
  do {
    if (*(char *)(param_1 + lVar2 + 0x160) == '\0') {
      plVar4 = (long *)(param_1 + lVar2 + 0x128);
      goto LAB_1000419fc;
    }
    lVar2 = lVar2 + 0x40;
  } while (lVar2 != 0x500);
  lVar2 = 0;
  plVar4 = (long *)0x0;
  do {
    lVar1 = param_1 + lVar2;
    if ((*(char *)(lVar1 + 0x160) != '\0') && (*(float *)(lVar1 + 0x15c) < fVar5)) {
      plVar4 = (long *)(lVar1 + 0x128);
      fVar5 = *(float *)(lVar1 + 0x15c);
    }
    lVar2 = lVar2 + 0x40;
  } while (lVar2 != 0x500);
LAB_1000419fc:
  if ((int)param_2 == -1) {
    lVar2 = 0;
    puVar3 = &DAT_101dc0b88;
  }
  else {
    lVar1 = FUN_100345d90(param_2);
    lVar2 = 0;
    puVar3 = &DAT_101dc0b88;
    if (lVar1 != 0) {
      lVar2 = lVar1 + 0x28;
      puVar3 = (undefined4 *)(lVar1 + 0x30);
    }
  }
  uVar6 = *puVar3;
  *plVar4 = lVar2;
  *(undefined4 *)(plVar4 + 1) = uVar6;
  lVar2 = *param_3;
  *(int *)(plVar4 + 5) = (int)param_3[1];
  plVar4[4] = lVar2;
  uVar6 = 0x41000000;
  if (param_4 != 3) {
    uVar6 = 0x40800000;
  }
  *(undefined4 *)((long)plVar4 + 0x34) = uVar6;
  *(undefined1 *)(plVar4 + 7) = 1;
  *(int *)((long)plVar4 + 0x3c) = param_4;
  return;
}




void FUN_100041a98(long param_1,undefined4 param_2)

{
  *(byte *)(param_1 + 0x8a0) = *(byte *)(param_1 + 0x8a0) | 1;
  *(undefined4 *)(param_1 + 0x898) = param_2;
  return;
}




void FUN_100041aac(long param_1)

{
  *(byte *)(param_1 + 0x8a0) = *(byte *)(param_1 + 0x8a0) & 0xfe;
  return;
}




float FUN_100041abc(float param_1,float param_2,long param_3)

{
  float fVar1;
  
  fVar1 = (param_1 - *(float *)(param_3 + 0x86c)) / *(float *)(param_3 + 0x874);
  if (*(float *)(param_3 + 0x830) != 0.0) {
    fVar1 = *(float *)(param_3 + 0x84c) * fVar1 -
            *(float *)(param_3 + 0x854) *
            ((param_2 - *(float *)(param_3 + 0x870)) / *(float *)(param_3 + 0x874));
  }
  if ((*(byte *)(param_3 + 0x100) & 1) != 0) {
    fVar1 = -fVar1;
  }
  return fVar1;
}




void FUN_100041b28(void)

{
  int iVar1;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [24];
  
  FUN_100041b6c(auStack_28);
  iVar1 = FUN_1000e8d1c(0,auStack_28,auStack_38);
  if (iVar1 != 0) {
    FUN_1000e8dc8(auStack_28,0,auStack_38);
  }
  return;
}




void FUN_100041b6c(float *param_1,undefined1 param_2 [16],float param_3,float param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (float)FUN_100041abc();
  FUN_1000320fc();
  FUN_100033428();
  lVar1 = FUN_10002e54c();
  fVar3 = *(float *)(lVar1 + 0x34);
  fVar4 = *(float *)(lVar1 + 0x38);
  fVar2 = fVar2 - *(float *)(lVar1 + 0x30);
  param_3 = param_3 - fVar3;
  param_4 = param_4 - fVar4;
  *param_1 = *(float *)(lVar1 + 0x30);
  param_1[1] = fVar3;
  fVar3 = 1.0 / SQRT(fVar2 * fVar2 + param_3 * param_3 + param_4 * param_4);
  param_1[2] = fVar4;
  param_1[3] = fVar2 * fVar3;
  param_1[4] = param_3 * fVar3;
  param_1[5] = param_4 * fVar3;
  return;
}




void FUN_100041bf8(void)

{
  return;
}




void FUN_100041c10(void)

{
  return;
}




void FUN_100041c28(long param_1)

{
  FUN_100643064(param_1 + 0x28);
  FUN_100041920(param_1);
  return;
}




void FUN_100041c50(long param_1)

{
  FUN_100643064();
  FUN_100041920(param_1 + -0x28);
  return;
}




void FUN_100041c74(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float local_68;
  float fStack_64;
  float local_60;
  undefined8 local_58;
  float local_50;
  long local_48;
  float local_40;
  float fStack_3c;
  float local_38;
  
  if ((*(byte *)(param_1 + 0x8a0) >> 4 & 1) == 0) {
    iVar1 = FUN_10034cb58();
    if (iVar1 == 0) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x828) + 0x18);
      while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184da98))) {
        lVar3 = *(long *)(lVar3 + 0x20);
      }
      FUN_100059f38(lVar3,1);
    }
    else {
      lVar3 = FUN_1000320fc();
      lVar3 = *(long *)(lVar3 + 0x18);
      while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184de60))) {
        lVar3 = *(long *)(lVar3 + 0x20);
      }
      FUN_10005e278(lVar3,1);
    }
    *(byte *)(param_1 + 0x8a0) = *(byte *)(param_1 + 0x8a0) | 0x10;
    FUN_1000320fc();
    uVar4 = FUN_100033428();
    FUN_10002e61c(uVar4,1);
  }
  iVar1 = FUN_1000e8d1c(0,param_2,&local_40);
  if (iVar1 != 0) {
    local_48 = 0;
    uVar2 = 1;
    FUN_1010a1958(&local_48,1,DAT_10184dac8,0);
    local_58 = CONCAT44(fStack_3c,local_40);
    local_50 = local_38;
    iVar1 = FUN_1000e8ef4(&local_58);
    if ((*(byte *)(param_1 + 0x8a0) >> 2 & 1) != 0) {
      uVar2 = FUN_100644ed8(param_3);
      uVar2 = uVar2 ^ 1;
    }
    FUN_1000320fc();
    lVar3 = FUN_100033428();
    fStack_3c = *(float *)(lVar3 + 0x74);
    if (iVar1 == 0) {
      fVar6 = SQRT(((float)local_58 - local_40) * ((float)local_58 - local_40) +
                   (local_58._4_4_ - fStack_3c) * (local_58._4_4_ - fStack_3c) +
                   (local_50 - local_38) * (local_50 - local_38));
      fVar7 = *(float *)(*(long *)(local_48 + 0x290) + 0xd0);
      fVar7 = (float)NEON_fminnm(fVar6,fVar7 + fVar7 / (fVar6 * -0.05 + -1.0));
      fVar7 = fVar7 / fVar6;
      fVar6 = 1.0 - fVar7;
      local_68 = fVar7 * local_40 + (float)local_58 * fVar6;
      fStack_64 = fVar7 * fStack_3c + local_58._4_4_ * fVar6;
      local_60 = fVar7 * local_38 + local_50 * fVar6;
      FUN_1000320fc();
      uVar4 = FUN_100033428();
      pfVar5 = &local_68;
    }
    else {
      FUN_1000320fc();
      uVar4 = FUN_100033428();
      pfVar5 = &local_40;
    }
    FUN_10002e63c(uVar4,pfVar5,uVar2);
  }
  return;
}




undefined8 FUN_100041e5c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_60 [32];
  undefined8 local_40;
  undefined4 local_38;
  
  lVar2 = *(long *)(param_1 + 0x828);
  if (lVar2 != 0) {
    for (lVar5 = *(long *)(lVar2 + 0x18); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x20)) {
      if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == DAT_10184da98) {
        uVar4 = (ulong)*(ushort *)(lVar2 + 0x88) & 0x1f;
        if (((int)uVar4 != 0x1f) && (*(ushort *)(lVar2 + uVar4 * 0x38 + 0x90) - 3 < 2)) {
          return 0;
        }
        if ((*(byte *)(lVar2 + 0x2f8) >> 1 & 1) != 0) {
          return 0;
        }
        uVar3 = FUN_1003a3e24();
        iVar1 = FUN_1000e8dc8(param_2,uVar3,&local_40);
        if (iVar1 == 0) {
          return 0;
        }
        FUN_10005ecec(0x3f800000,auStack_60,&local_40,0);
        iVar1 = FUN_10005f394(lVar5 + 0x260,auStack_60);
        if (iVar1 == 0) {
          return 0;
        }
        if (param_3 != (undefined8 *)0x0) {
          *param_3 = local_40;
          *(undefined4 *)(param_3 + 1) = local_38;
        }
        return 1;
      }
    }
  }
  return 0;
}




void FUN_100041f50(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  
  *(byte *)(param_1 + 0x8a0) = *(byte *)(param_1 + 0x8a0) | 0xe;
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if (((uVar1 & 1) != 0) || (DAT_101dbd4d8 == DAT_101dbd450)) {
    lVar2 = param_2[4];
    *(long *)(param_1 + 0x890) = lVar2;
    FUN_100641584(lVar2,param_1 + 0x28);
    *(ulong *)(param_1 + 0x878) =
         CONCAT44((int)(float)((ulong)param_2[5] >> 0x20),(int)(float)param_2[5]);
  }
  return;
}




void FUN_100041fd8(long param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  byte bVar4;
  
  FUN_100041f50();
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if (((((uVar2 & 1) != 0) || (DAT_101dbd4d8 == DAT_101dbd450)) &&
      (uVar2 = FUN_10034cb58(), (uVar2 & 1) == 0)) && (*(long *)(param_1 + 0x828) != 0)) {
    for (lVar3 = *(long *)(*(long *)(param_1 + 0x828) + 0x18); lVar3 != 0;
        lVar3 = *(long *)(lVar3 + 0x20)) {
      if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_10184da98) {
        iVar1 = FUN_100059fd0((int)*(float *)(param_2 + 5),(int)*(float *)((long)param_2 + 0x2c),
                              lVar3,param_2[4]);
        bVar4 = 0x80;
        if (iVar1 == 0) {
          bVar4 = 0;
        }
        *(byte *)(param_1 + 0x8a0) = bVar4 | *(byte *)(param_1 + 0x8a0) & 0x7f;
        return;
      }
    }
  }
  return;
}




void FUN_1000420a4(long param_1,long *param_2)

{
  bool bVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  undefined4 local_60;
  float fStack_5c;
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [16];
  
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if (((uVar2 & 1) != 0) || (DAT_101dbd4d8 == DAT_101dbd450)) {
    fVar4 = (float)(int)*(float *)((long)param_2 + 0x2c);
    FUN_100041b6c(auStack_58,(int)*(float *)(param_2 + 5),param_1);
    FUN_100041e5c(param_1,auStack_58,auStack_40);
    local_60 = FUN_10004165c(param_1,auStack_40);
    fStack_5c = fVar4;
    fVar3 = (float)FUN_10064efd0(&local_60,param_1 + 0x28);
    bVar1 = false;
    if ((*(float *)(param_1 + 0x688) == fVar3) &&
       (bVar1 = false, !NAN(*(float *)(param_1 + 0x68c)) && !NAN(fVar4))) {
      bVar1 = *(float *)(param_1 + 0x68c) == fVar4;
    }
    if (!bVar1) {
      *(float *)(param_1 + 0x688) = fVar3;
      *(float *)(param_1 + 0x68c) = fVar4;
      FUN_1000200a0(param_1 + 0x648);
    }
    *(uint *)(param_1 + 0x6cc) = *(uint *)(param_1 + 0x6cc) | 4;
  }
  return;
}




void FUN_100042180(long param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_a0;
  undefined4 local_9c;
  float local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined1 auStack_88 [24];
  
  if ((*(byte *)(param_1 + 0x8a0) >> 1 & 1) == 0) {
    return;
  }
  *(byte *)(param_1 + 0x8a0) = *(byte *)(param_1 + 0x8a0) | 8;
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if (((uVar2 & 1) == 0) && (DAT_101dbd4d8 != DAT_101dbd450)) {
    return;
  }
  FUN_100041b6c(auStack_88,(int)*(float *)(param_2 + 5),(int)*(float *)((long)param_2 + 0x2c),
                param_1);
  fVar10 = *(float *)(param_1 + 0x89c);
  uVar6 = (uint)*(byte *)(param_1 + 0x8a0);
  if ((*(byte *)(param_1 + 0x8a0) & 1) == 0) {
    uVar2 = FUN_10031615c(0x15);
    if ((((uVar2 & 1) == 0) && (uVar2 = FUN_10034cb58(), (uVar2 & 1) == 0)) && (fVar10 <= 0.11)) {
      uVar6 = (uint)*(byte *)(param_1 + 0x8a0);
      goto LAB_10004227c;
    }
LAB_100042254:
    uVar6 = (uint)*(byte *)(param_1 + 0x8a0);
    if ((*(byte *)(param_1 + 0x8a0) >> 5 & 1) != 0) goto LAB_10004227c;
    FUN_100041c74(param_1,auStack_88,param_2);
  }
  else {
    if (0.11 < fVar10) goto LAB_100042254;
LAB_10004227c:
    if ((uVar6 >> 4 & 1) != 0) {
      return;
    }
    uVar2 = FUN_10034cb58();
    if ((uVar2 & 1) != 0) {
      return;
    }
    uVar2 = FUN_10031615c(0x15);
    if ((uVar2 & 1) != 0) {
      return;
    }
    iVar1 = FUN_100060af0();
    if (iVar1 == 0) {
      return;
    }
    fVar10 = (float)(int)(float)param_2[5];
    fVar8 = (float)(int)(float)((ulong)param_2[5] >> 0x20);
    FUN_1000320fc();
    lVar3 = FUN_100033428();
    lVar4 = FUN_10002e584();
    fVar11 = *(float *)(lVar4 + 4) * 0.0055555557 * 3.1415927;
    iVar1 = FUN_100060af0();
    bVar5 = *(byte *)(param_1 + 0x8a0);
    uVar6 = (uint)bVar5;
    if (((iVar1 != 0) && ((bVar5 >> 5 & 1) == 0)) &&
       (fVar7 = fVar10 - (float)*(undefined8 *)(param_1 + 0x878),
       fVar9 = fVar8 - (float)((ulong)*(undefined8 *)(param_1 + 0x878) >> 0x20), fVar13 = 20.0,
       20.0 < SQRT(fVar7 * fVar7 + fVar9 * fVar9))) {
      uVar6 = bVar5 | 0x20;
      *(char *)(param_1 + 0x8a0) = (char)uVar6;
      fVar9 = *(float *)(lVar3 + 0x420);
      fVar12 = *(float *)(lVar3 + 0x428);
      fVar7 = (float)___sincosf_stret(fVar11);
      *(float *)(param_1 + 0x880) = fVar9 * fVar13 + fVar7 * fVar12;
      *(float *)(param_1 + 0x884) = fVar12 * fVar13 - fVar9 * fVar7;
    }
    bVar5 = (byte)uVar6;
    if ((uVar6 >> 5 & 1) == 0) goto LAB_100042270;
    uVar2 = FUN_100060af0();
    if ((uVar2 & 1) != 0) {
      fVar12 = *(float *)(param_1 + 0x878);
      fVar13 = *(float *)(param_1 + 0x87c);
      FUN_100641464(&uStack_8c,&local_90);
      iVar1 = FUN_100126cb8(uStack_8c,local_90);
      fVar7 = 11.0;
      fVar9 = 11.0;
      if (iVar1 == 0) {
        fVar7 = 9.0;
      }
      fVar15 = *(float *)(param_1 + 0x880);
      fVar14 = *(float *)(param_1 + 0x884);
      fVar11 = (float)___sincosf_stret(fVar11);
      FUN_1000320fc();
      lVar4 = FUN_100033428();
      local_9c = *(undefined4 *)(lVar4 + 0x424);
      uVar2 = (ulong)*(ushort *)(*(long *)(param_1 + 0x828) + 0x88) & 0x1f;
      if (((int)uVar2 == 0x1f) ||
         (1 < *(ushort *)(*(long *)(param_1 + 0x828) + uVar2 * 0x38 + 0x90) - 3)) {
        NEON_fminnm(fVar15 + (fVar10 - fVar12) * 0.015,fVar7);
        fVar10 = (float)NEON_fminnm(fVar14 + (fVar8 - fVar13) * 0.015,0x40c00000);
        if (fVar10 <= -5.0) {
          fVar10 = -5.0;
        }
        local_a0 = -fVar7 * fVar9 - fVar10 * fVar11;
        local_98 = -fVar7 * fVar11 + fVar9 * fVar10;
        if ((*(byte *)(param_1 + 0x100) & 1) != 0) {
          local_a0 = -local_a0;
        }
        if ((*(byte *)(param_1 + 0x100) & 2) != 0) {
          local_98 = -local_98;
        }
        FUN_10002e688(lVar3,&local_a0);
      }
      bVar5 = *(byte *)(param_1 + 0x8a0) | 0x40;
      goto LAB_100042270;
    }
  }
  bVar5 = *(byte *)(param_1 + 0x8a0);
LAB_100042270:
  *(byte *)(param_1 + 0x8a0) = bVar5 & 0xfb;
  return;
}




void FUN_100042474(long param_1,long *param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined1 auStack_48 [24];
  
  if ((*(byte *)(param_1 + 0x8a0) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x8a0) = *(byte *)(param_1 + 0x8a0) | 8;
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
    if (((uVar1 & 1) != 0) || (DAT_101dbd4d8 == DAT_101dbd450)) {
      FUN_100041b6c(auStack_48,(int)*(float *)(param_2 + 5),(int)*(float *)((long)param_2 + 0x2c),
                    param_1);
      bVar2 = *(byte *)(param_1 + 0x8a0);
      if ((bVar2 & 0x81) == 0) {
        FUN_100041c74(param_1,auStack_48,param_2);
        bVar2 = *(byte *)(param_1 + 0x8a0);
      }
      *(byte *)(param_1 + 0x8a0) = bVar2 & 0xfb;
    }
  }
  return;
}




void FUN_10004252c(long param_1,long *param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_48 [24];
  
  if (((*(byte *)(param_1 + 0x8a0) >> 1 & 1) != 0) &&
     (((uVar3 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8), (uVar3 & 1) != 0 ||
       (DAT_101dbd4d8 == DAT_101dbd450)) && (*(long *)(param_1 + 0x890) == param_2[4])))) {
    uVar3 = FUN_10034cb58();
    if (((uVar3 & 1) == 0) && (*(long *)(param_1 + 0x828) != 0)) {
      for (lVar7 = *(long *)(*(long *)(param_1 + 0x828) + 0x18); lVar7 != 0;
          lVar7 = *(long *)(lVar7 + 0x20)) {
        if (*(int *)(*(long *)(lVar7 + 8) + 0xa4) == DAT_10184da98) {
          FUN_100059f38(lVar7,0);
          FUN_100041b6c(auStack_48,(int)*(float *)(param_2 + 5),
                        (int)*(float *)((long)param_2 + 0x2c),param_1);
          if ((*(byte *)(param_1 + 0x8a0) & 1) == 0) {
            if ((*(byte *)(param_1 + 0x8a0) & 0x60) != 0x40) {
              FUN_1000320fc();
              lVar5 = FUN_100033428();
              FUN_1000320fc();
              lVar6 = FUN_100033428();
              if (((*(float *)(lVar5 + 0x420) == *(float *)(lVar6 + 0x70)) &&
                  (*(float *)(lVar5 + 0x424) == *(float *)(lVar6 + 0x74))) &&
                 (*(float *)(lVar5 + 0x428) == *(float *)(lVar6 + 0x78))) {
                FUN_1000320fc();
                lVar5 = FUN_100033428();
                if ((*(byte *)(lVar5 + 0x7c) >> 4 & 1) == 0) {
                  if (*(byte *)(param_1 + 0x8a0) < 0x10) {
                    FUN_100041e5c(param_1,auStack_48,0);
                  }
                  break;
                }
              }
              if ((*(byte *)(param_1 + 0x8a0) >> 4 & 1) == 0) {
                FUN_10005a130(lVar7);
              }
              break;
            }
            uVar3 = FUN_10034cb58();
            if ((uVar3 & 1) == 0) {
              FUN_1000320fc();
              uVar4 = FUN_100033428();
              FUN_1000320fc();
              lVar7 = FUN_100033428();
              FUN_10002e688(uVar4,lVar7 + 0x70);
            }
            bVar1 = *(byte *)(param_1 + 0x8a0) & 0xbf;
          }
          else {
            bVar1 = FUN_100059df4(lVar7,auStack_48,*(undefined4 *)(param_1 + 0x898));
            bVar1 = *(byte *)(param_1 + 0x8a0) & 0xfe | bVar1 ^ 1;
          }
          *(byte *)(param_1 + 0x8a0) = bVar1;
          break;
        }
      }
    }
    else {
      iVar2 = FUN_10034cb58();
      if (iVar2 != 0) {
        lVar7 = FUN_1000320fc();
        for (lVar7 = *(long *)(lVar7 + 0x18); lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x20)) {
          if (*(int *)(*(long *)(lVar7 + 8) + 0xa4) == DAT_10184de60) {
            FUN_10005e278(lVar7,0);
            break;
          }
        }
      }
    }
  }
  FUN_100042750(param_1);
  return;
}




void FUN_100042750(long param_1)

{
  int iVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x8a0) >> 4 & 1) != 0) {
    iVar1 = FUN_10034cb58();
    if (iVar1 == 0) {
      lVar2 = *(long *)(*(long *)(param_1 + 0x828) + 0x18);
      while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184da98))) {
        lVar2 = *(long *)(lVar2 + 0x20);
      }
      FUN_100059f38(lVar2,0);
    }
    else {
      lVar2 = FUN_1000320fc();
      lVar2 = *(long *)(lVar2 + 0x18);
      while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184de60))) {
        lVar2 = *(long *)(lVar2 + 0x20);
      }
      FUN_10005e278(lVar2,0);
    }
  }
  if ((*(byte *)(param_1 + 0x8a0) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x8a0) = *(byte *)(param_1 + 0x8a0) & 0x45;
    *(undefined4 *)(param_1 + 0x89c) = 0;
    if (*(long *)(param_1 + 0x890) != 0) {
      FUN_100641598();
      *(undefined8 *)(param_1 + 0x890) = 0;
    }
  }
  return;
}




void FUN_100042810(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  
  FUN_10004252c();
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if (((((uVar1 & 1) != 0) || (DAT_101dbd4d8 == DAT_101dbd450)) &&
      (uVar1 = FUN_10034cb58(), (uVar1 & 1) == 0)) && (*(long *)(param_1 + 0x828) != 0)) {
    for (lVar2 = *(long *)(*(long *)(param_1 + 0x828) + 0x18); lVar2 != 0;
        lVar2 = *(long *)(lVar2 + 0x20)) {
      if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_10184da98) {
        FUN_10005a0f4((int)*(float *)(param_2 + 5),(int)*(float *)((long)param_2 + 0x2c),lVar2,
                      param_2[4]);
        return;
      }
    }
  }
  return;
}




void FUN_1000428cc(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4,long *param_5,
                  long param_6,undefined4 param_7,long param_8,uint *param_9,undefined8 param_10)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  byte *pbVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 local_a8;
  undefined4 local_a4;
  
  local_a4 = param_7;
  iVar2 = FUN_10011b9c4();
  if (iVar2 != 0) {
    uVar8 = 0;
    pbVar9 = (byte *)(param_8 + 0x6d);
    do {
      if (((*pbVar9 ^ 0xff) & 5) == 0) {
        lVar3 = (**(code **)(**(long **)(pbVar9 + -0x55) + 0x10))();
        uVar1 = *(uint *)(lVar3 + 0x2f4);
        if (((*param_9 & (uVar1 ^ 0xffffffff)) == 0) &&
           (((param_9[1] == 0xffffffff || ((param_9[1] & uVar1) != 0)) &&
            ((param_9[2] & uVar1) == 0)))) {
          fVar10 = (float)FUN_10004165c(param_6,pbVar9 + -0x35);
          iVar7 = (int)fVar10;
          iVar2 = (int)(float)param_2;
          plVar4 = *(long **)(pbVar9 + -0x45);
          if (plVar4 == (long *)0x0) {
LAB_100042b0c:
            if (*(int *)(pbVar9 + -0x29) == 9) {
              param_2 = (ulong)(uint)(float)iVar2;
              local_a8 = *(undefined4 *)(pbVar9 + -0x15);
              lVar3 = *(long *)(pbVar9 + -0x25);
              fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 8));
              fVar10 = *(float *)(pbVar9 + -0xd) * *(float *)(param_4 + 0x10) * fVar13;
              fVar11 = (float)iVar7 - fVar10 * 0.5;
              fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 10));
              fVar16 = *(float *)(param_4 + 0x14) * *(float *)(pbVar9 + -0xd) * fVar16;
              fVar12 = (float)iVar2 - fVar16 * 0.5;
              fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 4));
              fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 6));
              fVar17 = 1.0 / (float)*(int *)(*(long *)(*param_5 + 8) + 0x48);
              FUN_100043664(fVar11,fVar12,fVar11 + fVar10,fVar12 + fVar16,0,SUB42(fVar17 * fVar14,0)
                            ,1.0 - fVar15 * (1.0 / (float)*(int *)(*(long *)(*param_5 + 8) + 0x4c)),
                            fVar17 * (fVar13 + fVar14),param_3,&local_a8,0);
              local_a8 = *(undefined4 *)(pbVar9 + -0x11);
              FUN_100063d54((float)iVar7,param_2,*(undefined4 *)(pbVar9 + -9),0x3f000000,0,
                            (short)*(undefined4 *)(pbVar9 + -0xd),*(undefined4 *)(pbVar9 + -0xd),
                            param_3,param_4,*(undefined8 *)(pbVar9 + -0x1d),param_5,&local_a8);
            }
            else {
              lVar3 = FUN_10011bb24();
              lVar6 = *(long *)(pbVar9 + -0x1d);
              if (lVar6 != 0) {
                fVar11 = *(float *)(lVar3 + 0x68) * 0.28125;
                fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 8));
                fVar13 = *(float *)(param_4 + 0x10) * fVar11 * fVar16;
                fVar12 = (float)iVar7 - fVar13 * 0.5;
                fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 10));
                fVar10 = *(float *)(param_4 + 0x14) * fVar11 * fVar10;
                fVar11 = (float)iVar2 - fVar10 * 0.5;
                param_2 = (ulong)(uint)fVar11;
                fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 4));
                fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 6));
                fVar17 = 1.0 / (float)*(int *)(*(long *)(*param_5 + 8) + 0x48);
                FUN_100043664(fVar12,param_2,fVar12 + fVar13,fVar11 + fVar10,0,
                              SUB42(fVar17 * fVar14,0),
                              1.0 - fVar15 * (1.0 / (float)*(int *)(*(long *)(*param_5 + 8) + 0x4c))
                              ,fVar17 * (fVar16 + fVar14),param_3,&local_a4,0);
              }
              lVar3 = *(long *)(pbVar9 + -0x25);
              if (lVar3 != 0) {
                local_a8 = *(undefined4 *)(pbVar9 + -0x15);
                fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 8));
                fVar13 = *(float *)(pbVar9 + -0xd) * *(float *)(param_4 + 0x10) * fVar10;
                fVar11 = (float)iVar7 - fVar13 * 0.5;
                fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 10));
                fVar16 = *(float *)(param_4 + 0x14) * *(float *)(pbVar9 + -0xd) * fVar16;
                fVar12 = (float)iVar2 - fVar16 * 0.5;
                param_2 = (ulong)(uint)fVar12;
                fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 4));
                fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 6));
                fVar17 = 1.0 / (float)*(int *)(*(long *)(*param_5 + 8) + 0x48);
                FUN_100043664(fVar11,param_2,fVar11 + fVar13,fVar12 + fVar16,0,
                              SUB42(fVar17 * fVar14,0),
                              1.0 - fVar15 * (1.0 / (float)*(int *)(*(long *)(*param_5 + 8) + 0x4c))
                              ,fVar17 * (fVar10 + fVar14),param_3,&local_a8,0);
              }
            }
          }
          else {
            if (*(int *)(pbVar9 + -0x3d) != (int)plVar4[1]) {
              pbVar9[-0x45] = 0;
              pbVar9[-0x44] = 0;
              pbVar9[-0x43] = 0;
              pbVar9[-0x42] = 0;
              pbVar9[-0x41] = 0;
              pbVar9[-0x40] = 0;
              pbVar9[-0x3f] = 0;
              pbVar9[-0x3e] = 0;
              *(undefined4 *)(pbVar9 + -0x3d) = DAT_101dc0b88;
              goto LAB_100042b0c;
            }
            lVar3 = (**(code **)(*plVar4 + 0x10))();
            if (((lVar3 == 0) ||
                (lVar3 = (**(code **)(**(long **)(pbVar9 + -0x45) + 0x10))(),
                *(float *)(lVar3 + 0x44) <= 0.0)) || ((pbVar9[-1] >> 1 & 1) != 0))
            goto LAB_100042b0c;
            fVar10 = 0.625;
            if (*(int *)(pbVar9 + -0x29) != 0xb) {
              fVar10 = 1.0;
            }
            param_2 = (ulong)(uint)(float)iVar2;
            lVar3 = *(long *)(param_6 + 0x638);
            fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 8));
            fVar14 = *(float *)(param_4 + 0x10) * fVar10 * fVar13;
            fVar11 = (float)iVar7 - fVar14 * 0.5;
            fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 10));
            fVar16 = *(float *)(param_4 + 0x14) * fVar10 * fVar16;
            fVar12 = (float)iVar2 - fVar16 * 0.5;
            fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 4));
            fVar17 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 6));
            fVar18 = 1.0 / (float)*(int *)(*(long *)(*param_5 + 8) + 0x48);
            FUN_100043664(fVar11,fVar12,fVar11 + fVar14,fVar12 + fVar16,0,SUB42(fVar18 * fVar15,0),
                          1.0 - fVar17 * (1.0 / (float)*(int *)(*(long *)(*param_5 + 8) + 0x4c)),
                          fVar18 * (fVar13 + fVar15),param_3,&DAT_10115a168,0);
            FUN_100063164((float)iVar7,param_2,*(undefined4 *)(pbVar9 + -9),0x3f000000,0,0,
                          0x3f000000,fVar10,param_3,param_4,*(undefined8 *)(param_6 + 0x640),param_5
                          ,&local_a4,0,0,param_10,fVar10);
          }
          if ((*pbVar9 >> 3 & 1) != 0) {
            param_2 = (ulong)(uint)(float)iVar7;
            FUN_100042e00(param_1,param_2,(float)iVar2,0x3f333333,param_3,param_4 + 0x10,
                          *(undefined8 *)(param_6 + 0x630),param_5);
            FUN_100042e00((float)param_1 + 3.1415927,param_2,(float)iVar2,0x3f333333,param_3,
                          param_4 + 0x10,*(undefined8 *)(param_6 + 0x630),param_5);
          }
        }
      }
      uVar8 = uVar8 + 1;
      uVar5 = FUN_10011b9c4();
      pbVar9 = pbVar9 + 0x70;
    } while (uVar8 < (uVar5 & 0xffffffff));
  }
  return;
}




void FUN_100042e00(undefined1 param_1 [16],float param_2,float param_3,float param_4,long *param_5,
                  float *param_6,long param_7,long *param_8)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined1 uVar5;
  long lVar6;
  float *pfVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  lVar6 = *(long *)PTR____stack_chk_guard_101444218;
  lVar8 = *(long *)(*param_8 + 8);
  uVar1 = *(ushort *)(param_7 + 4);
  uVar2 = *(ushort *)(param_7 + 6);
  fVar10 = (float)NEON_ucvtf(*(undefined4 *)(lVar8 + 0x4c));
  uVar3 = *(ushort *)(param_7 + 8);
  uVar4 = *(ushort *)(param_7 + 10);
  fVar11 = *param_6;
  fVar19 = param_6[1];
  fVar17 = fVar11 * (float)(uint)uVar3;
  fVar18 = fVar17 * 0.5;
  fVar9 = (float)___sincosf_stret();
  fVar14 = (float)NEON_ucvtf(*(undefined4 *)(lVar8 + 0x48));
  fVar12 = (float)uVar1 / fVar14;
  fVar13 = 1.0 - (float)uVar2 / fVar10;
  fVar14 = (float)((uint)uVar3 + (uint)uVar1) / fVar14;
  fVar10 = 1.0 - (float)((uint)uVar4 + (uint)uVar2) / fVar10;
  fVar19 = fVar19 * (float)(uint)uVar4;
  fVar20 = fVar19 * -0.5;
  fVar19 = fVar19 * 0.5;
  fVar15 = fVar11 * -(fVar17 * 0.5);
  fVar22 = fVar11 * fVar20;
  fVar20 = fVar9 * fVar20;
  fVar24 = fVar18 * fVar9;
  fVar18 = fVar18 * fVar11;
  fVar11 = fVar19 * fVar11;
  fVar19 = fVar19 * fVar9;
  fVar21 = (fVar18 - fVar20) + param_2;
  fVar23 = fVar22 + fVar24 + param_3;
  fVar17 = (fVar15 - fVar19) + param_2;
  fVar16 = (fVar11 - fVar24) + param_3;
  fVar9 = (float)NEON_fminnm((int)(param_4 * 255.0),0x437f0000);
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  pfVar7 = (float *)*param_5;
  *pfVar7 = (fVar15 - fVar20) + param_2;
  pfVar7[1] = (fVar22 - fVar24) + param_3;
  pfVar7[2] = 0.0;
  *(undefined2 *)(pfVar7 + 3) = 0xffff;
  *(undefined1 *)((long)pfVar7 + 0xe) = 0xff;
  uVar5 = (undefined1)(int)fVar9;
  *(undefined1 *)((long)pfVar7 + 0xf) = uVar5;
  pfVar7[4] = fVar14;
  pfVar7[5] = fVar13;
  lVar8 = *param_5;
  *(float *)(lVar8 + 0x18) = fVar17;
  *param_5 = lVar8 + 0x18;
  *(int *)(param_5 + 1) = (int)param_5[1] + 1;
  *(float *)(lVar8 + 0x1c) = fVar16;
  *(undefined4 *)(lVar8 + 0x20) = 0;
  *(undefined2 *)(lVar8 + 0x24) = 0xffff;
  *(undefined1 *)(lVar8 + 0x26) = 0xff;
  *(undefined1 *)(lVar8 + 0x27) = uVar5;
  *(float *)(lVar8 + 0x28) = fVar14;
  *(float *)(lVar8 + 0x2c) = fVar10;
  lVar8 = *param_5;
  *(float *)(lVar8 + 0x18) = fVar21;
  *param_5 = lVar8 + 0x18;
  *(int *)(param_5 + 1) = (int)param_5[1] + 1;
  *(float *)(lVar8 + 0x1c) = fVar23;
  *(undefined4 *)(lVar8 + 0x20) = 0;
  *(undefined2 *)(lVar8 + 0x24) = 0xffff;
  *(undefined1 *)(lVar8 + 0x26) = 0xff;
  *(undefined1 *)(lVar8 + 0x27) = uVar5;
  *(float *)(lVar8 + 0x28) = fVar12;
  *(float *)(lVar8 + 0x2c) = fVar13;
  lVar8 = *param_5;
  *(float *)(lVar8 + 0x18) = fVar17;
  *param_5 = lVar8 + 0x18;
  *(int *)(param_5 + 1) = (int)param_5[1] + 1;
  *(float *)(lVar8 + 0x1c) = fVar16;
  *(undefined4 *)(lVar8 + 0x20) = 0;
  *(undefined2 *)(lVar8 + 0x24) = 0xffff;
  *(undefined1 *)(lVar8 + 0x26) = 0xff;
  *(undefined1 *)(lVar8 + 0x27) = uVar5;
  *(float *)(lVar8 + 0x28) = fVar14;
  *(float *)(lVar8 + 0x2c) = fVar10;
  lVar8 = *param_5;
  *param_5 = lVar8 + 0x18;
  *(int *)(param_5 + 1) = (int)param_5[1] + 1;
  *(ulong *)(lVar8 + 0x18) = CONCAT44(fVar11 + fVar24 + param_3,(fVar18 - fVar19) + param_2);
  *(undefined4 *)(lVar8 + 0x20) = 0;
  *(undefined2 *)(lVar8 + 0x24) = 0xffff;
  *(undefined1 *)(lVar8 + 0x26) = 0xff;
  *(undefined1 *)(lVar8 + 0x27) = uVar5;
  *(float *)(lVar8 + 0x28) = fVar12;
  *(float *)(lVar8 + 0x2c) = fVar10;
  lVar8 = *param_5;
  *param_5 = lVar8 + 0x18;
  *(int *)(param_5 + 1) = (int)param_5[1] + 1;
  *(ulong *)(lVar8 + 0x18) = CONCAT44(fVar23,fVar21);
  *(undefined4 *)(lVar8 + 0x20) = 0;
  *(undefined2 *)(lVar8 + 0x24) = 0xffff;
  *(undefined1 *)(lVar8 + 0x26) = 0xff;
  *(undefined1 *)(lVar8 + 0x27) = uVar5;
  *(float *)(lVar8 + 0x28) = fVar12;
  *(float *)(lVar8 + 0x2c) = fVar13;
  *param_5 = *param_5 + 0x18;
  *(int *)(param_5 + 1) = (int)param_5[1] + 1;
  if (*(long *)PTR____stack_chk_guard_101444218 == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1000430f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_10144c620;
  puVar1 = param_1 + 5;
  *puVar1 = &PTR_FUN_10144c660;
  param_1[0x1c] = &PTR_FUN_10144c7c0;
  param_1[0xe7] = &PTR_FUN_1014a7108;
  param_1[0xfe] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x101);
  FUN_10064e2bc(param_1 + 0xe7);
  param_1[0xc9] = &PTR_FUN_1014a7108;
  param_1[0xe0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xe3);
  FUN_10064e2bc(param_1 + 0xc9);
  *puVar1 = &PTR_FUN_1014a7108;
  param_1[0x1c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1f);
  FUN_10064e2bc(puVar1);
  FUN_1010a0064(param_1);
  return;
}




void FUN_1000431a0(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_10144c620;
  puVar2 = param_1 + 5;
  *puVar2 = &PTR_FUN_10144c660;
  param_1[0x1c] = &PTR_FUN_10144c7c0;
  param_1[0xe7] = &PTR_FUN_1014a7108;
  param_1[0xfe] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x101);
  FUN_10064e2bc(param_1 + 0xe7);
  param_1[0xc9] = &PTR_FUN_1014a7108;
  param_1[0xe0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xe3);
  FUN_10064e2bc(param_1 + 0xc9);
  *puVar2 = &PTR_FUN_1014a7108;
  param_1[0x1c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1f);
  FUN_10064e2bc(puVar2);
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100043254(undefined8 *param_1)

{
  param_1[-5] = &PTR_FUN_10144c620;
  *param_1 = &PTR_FUN_10144c660;
  param_1[0x17] = &PTR_FUN_10144c7c0;
  param_1[0xe2] = &PTR_FUN_1014a7108;
  param_1[0xf9] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xfc);
  FUN_10064e2bc(param_1 + 0xe2);
  param_1[0xc4] = &PTR_FUN_1014a7108;
  param_1[0xdb] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xde);
  FUN_10064e2bc(param_1 + 0xc4);
  *param_1 = &PTR_FUN_1014a7108;
  param_1[0x17] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1a);
  FUN_10064e2bc(param_1);
  FUN_1010a0064(param_1 + -5);
  return;
}




void FUN_100043304(undefined8 *param_1)

{
  void *pvVar1;
  
  param_1[-5] = &PTR_FUN_10144c620;
  *param_1 = &PTR_FUN_10144c660;
  param_1[0x17] = &PTR_FUN_10144c7c0;
  param_1[0xe2] = &PTR_FUN_1014a7108;
  param_1[0xf9] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xfc);
  FUN_10064e2bc(param_1 + 0xe2);
  param_1[0xc4] = &PTR_FUN_1014a7108;
  param_1[0xdb] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xde);
  FUN_10064e2bc(param_1 + 0xc4);
  *param_1 = &PTR_FUN_1014a7108;
  param_1[0x17] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1a);
  FUN_10064e2bc(param_1);
  pvVar1 = (void *)FUN_1010a0064(param_1 + -5);
  operator_delete(pvVar1);
  return;
}




void FUN_1000433b8(undefined1 param_1 [16],float param_2,long *param_3,undefined8 param_4,
                  long param_5,uint *param_6,undefined8 param_7)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  
  lVar2 = FUN_10003d5bc();
  if (0.0 < *(float *)(lVar2 + 0x18)) {
    (**(code **)(*param_3 + 0x68))(param_3,&local_48,&local_50);
    FUN_1006416d4();
    plVar3 = (long *)FUN_100643c2c();
    fVar4 = (float)(**(code **)(*plVar3 + 0x48))();
    fVar5 = 0.0;
    if (*(short *)(lVar2 + 0x1c) != -1) {
      fVar5 = (float)(int)*(short *)(lVar2 + 0x1c);
    }
    fVar6 = 0.0;
    if (*(short *)(lVar2 + 0x1e) != -1) {
      fVar6 = (float)(int)*(short *)(lVar2 + 0x1e);
    }
    if (*(short *)(lVar2 + 0x20) != -1) {
      fVar4 = (float)(int)*(short *)(lVar2 + 0x20);
    }
    if (local_48 <= fVar4) {
      if (*(short *)(lVar2 + 0x22) != -1) {
        param_2 = (float)(int)*(short *)(lVar2 + 0x22);
      }
      if (((local_44 <= param_2) && (fVar5 <= local_50)) && (fVar6 <= local_4c)) {
        uVar1 = *param_6;
        *(long **)(param_5 + (ulong)uVar1 * 8) = param_3 + 0x18;
        *param_6 = uVar1 + 1;
      }
    }
    FUN_100643134(param_3,param_4,param_5,param_6,param_7);
  }
  return;
}




void FUN_1000434f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[-0x1c] = &PTR_FUN_10144c620;
  puVar1 = param_1 + -0x17;
  *puVar1 = &PTR_FUN_10144c660;
  *param_1 = &PTR_FUN_10144c7c0;
  param_1[0xcb] = &PTR_FUN_1014a7108;
  param_1[0xe2] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xe5);
  FUN_10064e2bc(param_1 + 0xcb);
  param_1[0xad] = &PTR_FUN_1014a7108;
  param_1[0xc4] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 199);
  FUN_10064e2bc(param_1 + 0xad);
  *puVar1 = &PTR_FUN_1014a7108;
  *param_1 = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 3);
  FUN_10064e2bc(puVar1);
  FUN_1010a0064(param_1 + -0x1c);
  return;
}




void FUN_1000435a4(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  param_1[-0x1c] = &PTR_FUN_10144c620;
  puVar2 = param_1 + -0x17;
  *puVar2 = &PTR_FUN_10144c660;
  *param_1 = &PTR_FUN_10144c7c0;
  param_1[0xcb] = &PTR_FUN_1014a7108;
  param_1[0xe2] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xe5);
  FUN_10064e2bc(param_1 + 0xcb);
  param_1[0xad] = &PTR_FUN_1014a7108;
  param_1[0xc4] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 199);
  FUN_10064e2bc(param_1 + 0xad);
  *puVar2 = &PTR_FUN_1014a7108;
  *param_1 = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 3);
  FUN_10064e2bc(puVar2);
  pvVar1 = (void *)FUN_1010a0064(param_1 + -0x1c);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_10004365c(void)

{
  return 1;
}




void FUN_100043664(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  long *param_9,undefined1 *param_10,int param_11)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 in_stack_00000000;
  
  if (5 < *(int *)((long)param_9 + 0xc) - (int)param_9[1]) {
    puVar3 = (undefined4 *)*param_9;
    *puVar3 = param_1;
    puVar3[1] = param_2;
    puVar3[2] = param_5;
    *(undefined1 *)(puVar3 + 3) = *param_10;
    *(undefined1 *)((long)puVar3 + 0xd) = param_10[1];
    *(undefined1 *)((long)puVar3 + 0xe) = param_10[2];
    *(undefined1 *)((long)puVar3 + 0xf) = param_10[3];
    puVar3[4] = param_6;
    puVar3[5] = param_7;
    lVar4 = *param_9;
    *(undefined4 *)(lVar4 + 0x18) = param_1;
    *param_9 = lVar4 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(undefined4 *)(lVar4 + 0x1c) = param_4;
    *(undefined4 *)(lVar4 + 0x20) = param_5;
    *(undefined1 *)(lVar4 + 0x24) = *param_10;
    *(undefined1 *)(lVar4 + 0x25) = param_10[1];
    *(undefined1 *)(lVar4 + 0x26) = param_10[2];
    *(undefined1 *)(lVar4 + 0x27) = param_10[3];
    uVar5 = in_stack_00000000;
    uVar1 = param_6;
    uVar2 = param_8;
    if (param_11 == 0) {
      uVar5 = param_7;
      uVar1 = param_8;
      param_7 = in_stack_00000000;
      uVar2 = param_6;
    }
    *(undefined4 *)(lVar4 + 0x28) = uVar2;
    *(undefined4 *)(lVar4 + 0x2c) = param_7;
    lVar4 = *param_9;
    *(undefined4 *)(lVar4 + 0x18) = param_3;
    *param_9 = lVar4 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(undefined4 *)(lVar4 + 0x1c) = param_2;
    *(undefined4 *)(lVar4 + 0x20) = param_5;
    *(undefined1 *)(lVar4 + 0x24) = *param_10;
    *(undefined1 *)(lVar4 + 0x25) = param_10[1];
    *(undefined1 *)(lVar4 + 0x26) = param_10[2];
    *(undefined1 *)(lVar4 + 0x27) = param_10[3];
    *(undefined4 *)(lVar4 + 0x28) = uVar1;
    *(undefined4 *)(lVar4 + 0x2c) = uVar5;
    lVar4 = *param_9;
    *(undefined4 *)(lVar4 + 0x18) = param_1;
    *param_9 = lVar4 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(undefined4 *)(lVar4 + 0x1c) = param_4;
    *(undefined4 *)(lVar4 + 0x20) = param_5;
    *(undefined1 *)(lVar4 + 0x24) = *param_10;
    *(undefined1 *)(lVar4 + 0x25) = param_10[1];
    *(undefined1 *)(lVar4 + 0x26) = param_10[2];
    *(undefined1 *)(lVar4 + 0x27) = param_10[3];
    *(undefined4 *)(lVar4 + 0x28) = uVar2;
    *(undefined4 *)(lVar4 + 0x2c) = param_7;
    lVar4 = *param_9;
    *(undefined4 *)(lVar4 + 0x18) = param_3;
    *param_9 = lVar4 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(undefined4 *)(lVar4 + 0x1c) = param_4;
    *(undefined4 *)(lVar4 + 0x20) = param_5;
    *(undefined1 *)(lVar4 + 0x24) = *param_10;
    *(undefined1 *)(lVar4 + 0x25) = param_10[1];
    *(undefined1 *)(lVar4 + 0x26) = param_10[2];
    *(undefined1 *)(lVar4 + 0x27) = param_10[3];
    *(undefined4 *)(lVar4 + 0x28) = param_8;
    *(undefined4 *)(lVar4 + 0x2c) = in_stack_00000000;
    lVar4 = *param_9;
    *(undefined4 *)(lVar4 + 0x18) = param_3;
    *param_9 = lVar4 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(undefined4 *)(lVar4 + 0x1c) = param_2;
    *(undefined4 *)(lVar4 + 0x20) = param_5;
    *(undefined1 *)(lVar4 + 0x24) = *param_10;
    *(undefined1 *)(lVar4 + 0x25) = param_10[1];
    *(undefined1 *)(lVar4 + 0x26) = param_10[2];
    *(undefined1 *)(lVar4 + 0x27) = param_10[3];
    *(undefined4 *)(lVar4 + 0x28) = uVar1;
    *(undefined4 *)(lVar4 + 0x2c) = uVar5;
    *param_9 = *param_9 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
  }
  return;
}




undefined8 * thunk_FUN_1000404fc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  long lVar8;
  ushort *puVar9;
  code *pcStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  puVar1 = param_1 + 5;
  FUN_100653378(puVar1);
  *param_1 = &PTR_FUN_10144c620;
  param_1[5] = &PTR_FUN_10144c660;
  param_1[0x1c] = &PTR_FUN_10144c7c0;
  uVar4 = DAT_101dc0b88;
  lVar8 = 0x128;
  do {
    puVar3 = (undefined8 *)((long)param_1 + lVar8);
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = uVar4;
    puVar3[2] = 0;
    *(undefined4 *)(puVar3 + 3) = uVar4;
    *(undefined4 *)(puVar3 + 5) = 0;
    puVar3[4] = 0;
    *(undefined4 *)((long)puVar3 + 0x3c) = 0;
    *(undefined8 *)((long)puVar3 + 0x2c) = 0;
    *(undefined8 *)((long)puVar3 + 0x31) = 0;
    lVar8 = lVar8 + 0x40;
  } while (puVar3 + 8 != param_1 + 0xc5);
  puVar3 = param_1 + 0xc9;
  param_1[0xc6] = 0;
  param_1[0xc5] = 0;
  param_1[200] = 0;
  param_1[199] = 0;
  thunk_FUN_100652c08(puVar3);
  puVar2 = param_1 + 0xe7;
  thunk_FUN_100652c08(puVar2);
  param_1[0x105] = 0;
  param_1[0x106] = 0x3f80000000000000;
  uVar5 = DAT_101dc1cb8;
  param_1[0x10f] = DAT_101dc1cb8;
  param_1[0x110] = uVar5;
  param_1[0x111] = DAT_101873a38;
  param_1[0x113] = 0;
  param_1[0x112] = 0;
  *(undefined1 *)(param_1 + 0x114) = 0;
  *(uint *)((long)param_1 + 0xac) = *(uint *)((long)param_1 + 0xac) | 0x10;
  (**(code **)(param_1[5] + 0x78))(puVar1,puVar3,1);
  FUN_100642bd8(puVar3,puVar2,1);
  FUN_100652cac(puVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_ability_level_dot_lit");
  pcStack_a0 = (code *)&DAT_3f0000003f000000;
  (**(code **)(param_1[0xc9] + 0x28))(puVar3,&pcStack_a0);
  FUN_10064e47c(0x41b00000,0x41b00000,puVar3);
  *(uint *)((long)param_1 + 0x6cc) = *(uint *)((long)param_1 + 0x6cc) & 0xfffffffb;
  FUN_100652dd4(puVar3,&DAT_10115a17c,2);
  FUN_100652cac(puVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_ability_level_dot_lit");
  pcStack_a0 = (code *)&DAT_3f0000003f000000;
  (**(code **)(param_1[0xe7] + 0x28))(puVar2,&pcStack_a0);
  FUN_10064e47c(0x41b00000,0x41b00000,puVar2);
  if ((*(uint *)((long)param_1 + 0x7bc) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x7bc) = *(uint *)((long)param_1 + 0x7bc) & 0xffff807f;
    FUN_1000200a0(puVar2);
  }
  FUN_100652dd4(puVar2,&DAT_10115a17c,2);
  uVar5 = FUN_10064081c(0x3e4ccccd);
  FUN_100640db8(0x3f800000,0x3f800000,0,0);
  FUN_100640840(0x3f666666,0x3d4ccccd,0);
  uVar6 = FUN_100640db8(0x400ccccd,0x400ccccd,0x3f400000,FUN_10001f160);
  FUN_100640840(0,0x3f666666,FUN_10001f4ac);
  lVar8 = DAT_101dbd2f8;
  uVar7 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar9;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar7;
    *(int *)(lVar8 + 0x20014) = *(int *)(lVar8 + 0x20014) + 1;
    FUN_10063f1bc(puVar9);
    *(int *)(lVar8 + 0x20020) = *(int *)(lVar8 + 0x20020) + 1;
  }
  FUN_10063f2a4(puVar9,uVar6);
  lVar8 = DAT_101dbd2f8;
  uVar7 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar9;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar7;
    *(int *)(lVar8 + 0x20014) = *(int *)(lVar8 + 0x20014) + 1;
    FUN_10063f564(puVar9);
    *(int *)(lVar8 + 0x20020) = *(int *)(lVar8 + 0x20020) + 1;
  }
  FUN_10063f614(puVar9,uVar5);
  FUN_10063f664(puVar9);
  FUN_100642b14(puVar2,puVar9);
  FUN_100653464(puVar1,FUN_100040a80,param_1);
  uStack_78 = DAT_101dbd458;
  pcStack_a0 = FUN_100041370;
  puVar1 = param_1 + 6;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  puStack_98 = param_1;
  FUN_10001554c(puVar1,&pcStack_a0);
  uStack_78 = DAT_101dbd484;
  pcStack_a0 = FUN_100041378;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  puStack_98 = param_1;
  FUN_10001554c(puVar1,&pcStack_a0);
  uStack_78 = DAT_101dbd470;
  pcStack_a0 = FUN_100041380;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  puStack_98 = param_1;
  FUN_10001554c(puVar1,&pcStack_a0);
  uStack_78 = DAT_101dbd45c;
  pcStack_a0 = FUN_100041388;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  puStack_98 = param_1;
  FUN_10001554c(puVar1,&pcStack_a0);
  uStack_78 = DAT_101dbd488;
  pcStack_a0 = FUN_100041390;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  puStack_98 = param_1;
  FUN_10001554c(puVar1,&pcStack_a0);
  uStack_78 = DAT_101dbd460;
  pcStack_a0 = FUN_100041398;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  puStack_98 = param_1;
  FUN_10001554c(puVar1,&pcStack_a0);
  uStack_78 = DAT_101dbd48c;
  pcStack_a0 = FUN_1000413a0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  puStack_98 = param_1;
  FUN_10001554c(puVar1,&pcStack_a0);
  uStack_78 = DAT_101dbd4a4;
  pcStack_a0 = thunk_FUN_100042750;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  puStack_98 = param_1;
  FUN_10001554c(puVar1,&pcStack_a0);
  return param_1;
}




void FUN_10004384c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100043854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_100043858(void)

{
  if ((DAT_10184df58 & 1) == 0) {
    DAT_10184df50 = DAT_101872e38;
    DAT_10184df58 = 1;
  }
  return;
}




void FUN_100043884(void)

{
  if ((DAT_10184de68 & 1) == 0) {
    DAT_10184de60 = DAT_101872e38;
    DAT_10184de68 = 1;
  }
  return;
}




void FUN_1000438b0(void)

{
  if ((DAT_10184daa0 & 1) == 0) {
    DAT_10184da98 = DAT_101872e38;
    DAT_10184daa0 = 1;
  }
  return;
}




void FUN_1000438dc(void)

{
  if ((DAT_10184dad0 & 1) == 0) {
    DAT_10184dac8 = DAT_101872e38;
    DAT_10184dad0 = 1;
  }
  return;
}




void FUN_100043908(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_1010a0298(param_1,DAT_10184df60);
  *(undefined8 *)(lVar1 + 0x28) = param_1;
  FUN_100043a98();
  return;
}




void FUN_100043934(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100043934_10144c808;
  if (*(char *)(param_1 + 6) != -1) {
    FUN_10011baf8();
    *(undefined1 *)(param_1 + 6) = 0xff;
  }
  FUN_1010a0064(param_1);
  return;
}




void thunk_FUN_100043934(void)

{
  FUN_100043934();
  return;
}




void FUN_10004397c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100043934();
  operator_delete(pvVar1);
  return;
}




void FUN_100043990(long param_1)

{
  long lVar1;
  
  DAT_10184df60 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184df60 + 1;
  lVar1 = param_1 + (ulong)DAT_10184df60 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_100043ae8;
  *(code **)(lVar1 + 0xb8) = FUN_100043b04;
  *(uint *)(lVar1 + 0xa4) = DAT_10184df60;
  *(undefined4 *)(lVar1 + 0xa8) = 0x38;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 200;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0990(param_1,0x199203e9,FUN_100043a34,0);
  FUN_1010a0990(param_1,0x163803be,thunk_FUN_100043a98,0);
  return;
}




void FUN_100043a34(long param_1)

{
  long in_stack_00000000;
  
  if ((*(int *)(in_stack_00000000 + 0x260) == *(int *)(*(long *)(param_1 + 0x28) + 0x260)) &&
     (*(char *)(param_1 + 0x30) != -1)) {
    FUN_10011baf8();
    *(undefined1 *)(param_1 + 0x30) = 0xff;
  }
  return;
}




void thunk_FUN_100043a98(void)

{
  FUN_100043a98();
  return;
}




void FUN_100043a98(long param_1)

{
  undefined1 uVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*(ushort *)(*(long *)(param_1 + 0x28) + 0x88) & 0x1f;
  if (((int)uVar2 == 0x1f) || (1 < *(ushort *)(*(long *)(param_1 + 0x28) + uVar2 * 0x38 + 0x90) - 3)
     ) {
    uVar1 = FUN_10011baa8();
    *(undefined1 *)(param_1 + 0x30) = uVar1;
  }
  return;
}




void FUN_100043ae8(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100043934_10144c808;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0xff;
  return;
}




void FUN_100043b04(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100043b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_100043b10(void)

{
  if ((DAT_10184df68 & 1) == 0) {
    DAT_10184df60 = DAT_101872e38;
    DAT_10184df68 = 1;
  }
  return;
}




undefined8 * FUN_100043b3c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  *param_1 = &PTR_thunk_FUN_1010a0064_10144c838;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0x3f800000;
  param_1[0xd] = 0;
  param_1[0xc] = 0x3f80000000000000;
  param_1[0xf] = 0x3f800000;
  param_1[0xe] = 0;
  param_1[0x11] = 0x3f80000000000000;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0x4000000000000000;
  *(undefined4 *)((long)param_1 + 0xa4) = 0x3f860a92;
  param_1[0x15] = 0x40000000;
  lVar1 = FUN_1010a0298(param_1,DAT_10184dc58);
  param_1[6] = lVar1;
  *(undefined1 *)(lVar1 + 0x33) = 0xb;
  uVar2 = FUN_1010a0298(param_1,DAT_10184ded0);
  param_1[7] = uVar2;
  thunk_FUN_1010add94(auStack_40);
  local_38 = 0x4354000043200000;
  local_30 = 0x437f0000;
  FUN_1010ae160(auStack_40,0,&local_38,3,1,"u_indicator_color");
  uVar2 = FUN_1010ae1d8(auStack_40);
  param_1[8] = uVar2;
  thunk_FUN_1010adde4(auStack_40);
  thunk_FUN_1010add94(auStack_40);
  local_38 = 0x43200000;
  local_30 = 0;
  FUN_1010ae160(auStack_40,0,&local_38,3,1,"u_indicator_color");
  uVar2 = FUN_1010ae1d8(auStack_40);
  param_1[9] = uVar2;
  thunk_FUN_1010adde4(auStack_40);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100043ce0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1010a0064();
  operator_delete(pvVar1);
  return;
}




void FUN_100043cf4(long param_1)

{
  long lVar1;
  
  DAT_10184df70 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184df70 + 1;
  lVar1 = param_1 + (ulong)DAT_10184df70 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = thunk_FUN_100043b3c;
  *(code **)(lVar1 + 0xb8) = FUN_1000442d8;
  *(uint *)(lVar1 + 0xa4) = DAT_10184df70;
  *(undefined4 *)(lVar1 + 0xa8) = 0xb0;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 8;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  return;
}




void FUN_100043d50(long param_1,int param_2)

{
  long *plVar1;
  char *pcVar2;
  code *pcVar3;
  
  *(int *)(param_1 + 0x9c) = param_2;
  if (param_2 - 1U < 2) {
    plVar1 = *(long **)(param_1 + 0x30);
    pcVar3 = *(code **)(*plVar1 + 0x20);
    pcVar2 = "build://Characters/JoystickIndicator/ArtAdaptable/adaptableJoystickIndicator.mesh";
  }
  else {
    if (param_2 != 0) goto LAB_100043da4;
    plVar1 = *(long **)(param_1 + 0x30);
    pcVar3 = *(code **)(*plVar1 + 0x20);
    pcVar2 = "build://Characters/JoystickIndicator/ArtCircle/circleJoystickIndicator.mesh";
  }
  (*pcVar3)(plVar1,pcVar2);
LAB_100043da4:
  FUN_1004e914c(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}




void FUN_100043dc0(undefined4 param_1,long param_2)

{
  float fVar1;
  undefined1 auStack_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  fVar1 = (float)NEON_fminnm(param_1,0x41a00000);
  if (fVar1 <= 1.0) {
    fVar1 = 1.0;
  }
  *(float *)(param_2 + 0xa0) = fVar1;
  FUN_1004d26c0(auStack_128,0x100,
                "build://Characters/JoystickIndicator/ArtCircle/circleJoystickIndicator.R_%d_T_%d.anim"
               );
  FUN_1004e8aa0(*(undefined8 *)(param_2 + 0x38),
                "build://Characters/JoystickIndicator/ArtCircle/circleJoystickIndicator.skeleton",
                auStack_128);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100043e68(undefined4 param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_128 [256];
  long local_28;
  
  lVar1 = 0;
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  fVar2 = (float)NEON_fminnm(param_1,0x41a00000);
  if (fVar2 <= 1.0) {
    fVar2 = 1.0;
  }
  fVar3 = (float)NEON_fminnm(param_2,0x43340000);
  if (fVar3 <= 10.0) {
    fVar3 = 10.0;
  }
  *(float *)(param_3 + 0xa0) = fVar2;
  *(float *)(param_3 + 0xa4) = fVar3;
  do {
    if ((fVar3 == (float)(&DAT_10114b808)[lVar1]) || (fVar3 < (float)(&DAT_10114b808)[lVar1]))
    break;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 10);
  FUN_1004d26c0(auStack_128,0x100,
                "build://Characters/JoystickIndicator/ArtAdaptable/adaptableJoystickIndicator.W_%d_L_%d_S_%d.anim"
               );
  FUN_1004e8aa0(*(undefined8 *)(param_3 + 0x38),
                "build://Characters/JoystickIndicator/ArtAdaptable/adaptableJoystickIndicator.skeleton"
                ,auStack_128);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100043f90(undefined4 param_1,undefined4 param_2,long param_3)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  fVar1 = (float)NEON_fminnm(param_1,0x41a00000);
  if (fVar1 <= 1.0) {
    fVar1 = 1.0;
  }
  fVar2 = (float)NEON_fminnm(param_2,0x40800000);
  if (fVar2 <= 1.0) {
    fVar2 = 1.0;
  }
  *(float *)(param_3 + 0xa0) = fVar1;
  *(float *)(param_3 + 0xa8) = fVar2;
  FUN_1004d26c0(auStack_128,0x100,
                "build://Characters/JoystickIndicator/ArtAdaptable/adaptableJoystickIndicator.W_%d_L_%d_S_%d.anim"
               );
  FUN_1004e8aa0(*(undefined8 *)(param_3 + 0x38),
                "build://Characters/JoystickIndicator/ArtAdaptable/adaptableJoystickIndicator.skeleton"
                ,auStack_128);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100044054(undefined4 param_1,long param_2)

{
  float fVar1;
  undefined1 auStack_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  fVar1 = (float)NEON_fminnm(param_1,0x40800000);
  if (fVar1 <= 1.0) {
    fVar1 = 1.0;
  }
  *(float *)(param_2 + 0xa8) = fVar1;
  *(undefined4 *)(param_2 + 0xa0) = 0x43960000;
  FUN_1004d26c0(auStack_128,0x100,
                "build://Characters/JoystickIndicator/ArtAdaptable/adaptableJoystickIndicator.W_%d_L_%d_S_%d.anim"
               );
  FUN_1004e8aa0(*(undefined8 *)(param_2 + 0x38),
                "build://Characters/JoystickIndicator/ArtAdaptable/adaptableJoystickIndicator.skeleton"
                ,auStack_128);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100044108(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *(undefined4 *)(param_4 + 0x90) = param_1;
  *(undefined4 *)(param_4 + 0x94) = param_2;
  *(undefined4 *)(param_4 + 0x98) = param_3;
  *(undefined8 *)(param_4 + 0x58) = 0;
  *(undefined8 *)(param_4 + 0x50) = 0x3c23d70a;
  *(undefined8 *)(param_4 + 0x68) = 0;
  *(undefined8 *)(param_4 + 0x60) = 0x3c23d70a00000000;
  *(undefined8 *)(param_4 + 0x78) = 0x3c23d70a;
  *(undefined8 *)(param_4 + 0x70) = 0;
  *(undefined4 *)(param_4 + 0x8c) = 0x3f800000;
  *(undefined4 *)(param_4 + 0x80) = param_1;
  *(undefined4 *)(param_4 + 0x84) = param_2;
  *(undefined4 *)(param_4 + 0x88) = param_3;
  uStack_58 = *(undefined8 *)(param_4 + 0x58);
  local_60 = *(undefined8 *)(param_4 + 0x50);
  uStack_48 = *(undefined8 *)(param_4 + 0x68);
  uStack_50 = *(undefined8 *)(param_4 + 0x60);
  uStack_38 = *(undefined8 *)(param_4 + 0x78);
  local_40 = *(undefined8 *)(param_4 + 0x70);
  uStack_28 = *(undefined8 *)(param_4 + 0x88);
  uVar3 = *(undefined8 *)(param_4 + 0x80);
  uStack_30 = uVar3;
  fVar1 = (float)___sincosf_stret(*(undefined4 *)(param_4 + 0xac));
  fVar8 = (float)((ulong)local_40 >> 0x20);
  fVar9 = (float)((ulong)uStack_38 >> 0x20);
  fVar2 = (float)uVar3;
  fVar4 = (float)local_60;
  fVar5 = (float)((ulong)local_60 >> 0x20);
  fVar6 = (float)uStack_58;
  fVar7 = (float)((ulong)uStack_58 >> 0x20);
  local_60 = CONCAT44(-(fVar8 * fVar1) + fVar5 * fVar2,-((float)local_40 * fVar1) + fVar4 * fVar2);
  uStack_58 = CONCAT44(-(fVar9 * fVar1) + fVar7 * fVar2,-((float)uStack_38 * fVar1) + fVar6 * fVar2)
  ;
  local_40 = CONCAT44(fVar5 * fVar1 + fVar8 * fVar2,fVar4 * fVar1 + (float)local_40 * fVar2);
  uStack_38 = CONCAT44(fVar7 * fVar1 + fVar9 * fVar2,fVar6 * fVar1 + (float)uStack_38 * fVar2);
  FUN_1004e8e38(*(undefined8 *)(param_4 + 0x30),&local_60);
  return;
}




void FUN_1000441ac(undefined4 param_1,long param_2)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  puVar1 = (undefined8 *)(param_2 + 0x50);
  uVar6 = *(undefined8 *)(param_2 + 0x58);
  uVar4 = *puVar1;
  *(undefined4 *)(param_2 + 0xac) = param_1;
  uVar5 = uVar4;
  fVar2 = (float)___sincosf_stret();
  fVar7 = (float)*(undefined8 *)(param_2 + 0x70);
  fVar8 = (float)((ulong)*(undefined8 *)(param_2 + 0x70) >> 0x20);
  fVar9 = (float)*(undefined8 *)(param_2 + 0x78);
  fVar10 = (float)((ulong)*(undefined8 *)(param_2 + 0x78) >> 0x20);
  fVar3 = (float)uVar5;
  fVar11 = (float)((ulong)uVar4 >> 0x20);
  fVar12 = (float)uVar6;
  fVar13 = (float)((ulong)uVar6 >> 0x20);
  *(ulong *)(param_2 + 0x58) =
       CONCAT44(-(fVar10 * fVar2) + fVar13 * fVar3,-(fVar9 * fVar2) + fVar12 * fVar3);
  *puVar1 = CONCAT44(-(fVar8 * fVar2) + fVar11 * fVar3,-(fVar7 * fVar2) + (float)uVar4 * fVar3);
  *(ulong *)(param_2 + 0x78) =
       CONCAT44(fVar13 * fVar2 + fVar10 * fVar3,fVar12 * fVar2 + fVar9 * fVar3);
  *(ulong *)(param_2 + 0x70) =
       CONCAT44(fVar11 * fVar2 + fVar8 * fVar3,(float)uVar4 * fVar2 + fVar7 * fVar3);
  FUN_1004e8e38(*(undefined8 *)(param_2 + 0x30),puVar1);
  return;
}




void FUN_10004420c(long param_1)

{
  FUN_1004e9154(*(undefined8 *)(param_1 + 0x30));
  FUN_1004e8ae0(0x3f800000,0x3f800000,0,0,0,*(undefined8 *)(param_1 + 0x38),0);
  return;
}




void FUN_10004424c(long param_1)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_1004e8a24(*(undefined8 *)(param_1 + 0x30));
    FUN_1010a520c();
    FUN_1004e914c(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}




void FUN_10004428c(long param_1)

{
  if (*(int *)(param_1 + 0x28) != 1) {
    FUN_1004e8a24(*(undefined8 *)(param_1 + 0x30));
    FUN_1010a520c();
    FUN_1004e914c(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x28) = 1;
  }
  return;
}




undefined8 * thunk_FUN_100043b3c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  undefined4 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_101444218;
  *param_1 = &PTR_thunk_FUN_1010a0064_10144c838;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0x3f800000;
  param_1[0xd] = 0;
  param_1[0xc] = 0x3f80000000000000;
  param_1[0xf] = 0x3f800000;
  param_1[0xe] = 0;
  param_1[0x11] = 0x3f80000000000000;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0x4000000000000000;
  *(undefined4 *)((long)param_1 + 0xa4) = 0x3f860a92;
  param_1[0x15] = 0x40000000;
  lVar1 = FUN_1010a0298(param_1,DAT_10184dc58);
  param_1[6] = lVar1;
  *(undefined1 *)(lVar1 + 0x33) = 0xb;
  uVar2 = FUN_1010a0298(param_1,DAT_10184ded0);
  param_1[7] = uVar2;
  thunk_FUN_1010add94(auStack_40);
  uStack_38 = 0x4354000043200000;
  uStack_30 = 0x437f0000;
  FUN_1010ae160(auStack_40,0,&uStack_38,3,1,"u_indicator_color");
  uVar2 = FUN_1010ae1d8(auStack_40);
  param_1[8] = uVar2;
  thunk_FUN_1010adde4(auStack_40);
  thunk_FUN_1010add94(auStack_40);
  uStack_38 = 0x43200000;
  uStack_30 = 0;
  FUN_1010ae160(auStack_40,0,&uStack_38,3,1,"u_indicator_color");
  uVar2 = FUN_1010ae1d8(auStack_40);
  param_1[9] = uVar2;
  thunk_FUN_1010adde4(auStack_40);
  if (*(long *)PTR____stack_chk_guard_101444218 == lStack_28) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1000442d8(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000442e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_1000442e4(void)

{
  if ((DAT_10184dc60 & 1) == 0) {
    DAT_10184dc58 = DAT_101872e38;
    DAT_10184dc60 = 1;
  }
  return;
}




void FUN_100044310(void)

{
  if ((DAT_10184ded8 & 1) == 0) {
    DAT_10184ded0 = DAT_101872e38;
    DAT_10184ded8 = 1;
  }
  return;
}




void FUN_10004433c(void)

{
  if ((DAT_10184df78 & 1) == 0) {
    DAT_10184df70 = DAT_101872e38;
    DAT_10184df78 = 1;
  }
  return;
}




undefined8 * FUN_100044368(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  uVar2 = FUN_10066acb4();
  *(undefined4 *)(param_1 + 6) = 0x7000000;
  param_1[7] = uVar2;
  param_1[5] = &PTR_FUN_10144c908;
  FUN_1010a1d84(param_1 + 8);
  *param_1 = &PTR_thunk_FUN_10004449c_10144c868;
  param_1[5] = &PTR_FUN_10144c8a8;
  param_1[8] = &PTR_FUN_10144c8d8;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar1 = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 0xc) = DAT_101dc0b88;
  param_1[0x15] = 0x200000000;
  *(undefined2 *)(param_1 + 0x16) = 0xffff;
  *(undefined4 *)((long)param_1 + 0xb4) = 0xffffffff;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x1a) = uVar1;
  *(undefined4 *)(param_1 + 0x1b) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined4 *)((long)param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0xfc) = 0;
  param_1[0x20] = DAT_101dc1cb8;
  param_1[0x21] = 0xbfffffff00000000;
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) & 0xe0 | 0x10;
  param_1[0xe] = 0;
  param_1[0xd] = 0x3f800000;
  param_1[0x10] = 0;
  param_1[0xf] = 0x3f80000000000000;
  param_1[0x12] = 0x3f800000;
  param_1[0x11] = 0;
  param_1[0x14] = 0x3f80000000000000;
  param_1[0x13] = 0;
  return param_1;
}




void FUN_10004449c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10004449c_10144c868;
  param_1[5] = &PTR_FUN_10144c8a8;
  param_1[8] = &PTR_FUN_10144c8d8;
  if (param_1[10] != 0) {
    FUN_10066aca4();
  }
  FUN_1010a1da8(param_1 + 8);
  FUN_1010a0064(param_1);
  return;
}




void thunk_FUN_10004449c(void)

{
  FUN_10004449c();
  return;
}




void FUN_1000444f4(long param_1)

{
  FUN_10004449c(param_1 + -0x28);
  return;
}




void FUN_1000444fc(long param_1)

{
  FUN_10004449c(param_1 + -0x40);
  return;
}




void FUN_100044504(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10004449c();
  operator_delete(pvVar1);
  return;
}




void FUN_100044518(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10004449c(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




void FUN_100044530(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10004449c(param_1 + -0x40);
  operator_delete(pvVar1);
  return;
}




void FUN_100044548(long param_1)

{
  long lVar1;
  
  DAT_10184dad8 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184dad8 + 1;
  lVar1 = param_1 + (ulong)DAT_10184dad8 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = thunk_FUN_100044368;
  *(code **)(lVar1 + 0xb8) = FUN_100045e20;
  *(uint *)(lVar1 + 0xa4) = DAT_10184dad8;
  *(undefined4 *)(lVar1 + 0xa8) = 0x118;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x100;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,0,FUN_10004470c,0);
  FUN_1010a0944(param_1,1,FUN_10004471c,0);
  FUN_1010a0944(param_1,4,FUN_100044740,0);
  FUN_1010a0978(param_1,4,FUN_10004479c);
  FUN_1010a0990(param_1,0xdc302c4,thunk_FUN_100045d94,0);
  FUN_1010a0990(param_1,0x36de0632,FUN_1000447d4,0);
  FUN_1010a0990(param_1,0x2af3056d,FUN_100044800,0);
  FUN_1010a0990(param_1,0x29d80553,FUN_100044844,0);
  FUN_1010a0990(param_1,0x35830610,FUN_100044888,0);
  FUN_1010a0990(param_1,0x3eb506ac,FUN_1000448bc,0);
  FUN_1010a0990(param_1,0x3d56066a,FUN_100044900,0);
  FUN_1010a0990(param_1,0x456706e0,FUN_10004494c,0);
  FUN_1010a0990(param_1,0x363b0618,FUN_1000449b0,0);
  return;
}




void FUN_10004470c(long param_1)

{
  FUN_1000449f4(param_1,&DAT_1013cd800,*(undefined4 *)(param_1 + 0xac));
  return;
}




void FUN_10004471c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1010a1cc8();
  FUN_1010a1e70(uVar1,*(undefined2 *)(param_1 + 0xb0));
  return;
}




void FUN_100044740(long param_1)

{
  if (*(long *)(param_1 + 0x50) == 0) {
    return;
  }
  if ((*(ushort *)(*(long *)(param_1 + 0x50) + 100) & 0x38) == 0x28) {
    FUN_1010a01dc(param_1);
    return;
  }
  FUN_100044aa0(param_1);
  FUN_100044c48(param_1);
  return;
}




void FUN_10004479c(void)

{
  undefined *puVar1;
  
  FUN_1010a1cd4();
  puVar1 = (undefined *)0x0;
  if (DAT_101d22fd4 != '\0') {
    puVar1 = &DAT_101d22ed0;
  }
  FUN_10066ac90(&DAT_101d22e90,puVar1);
  return;
}




void thunk_FUN_100045d94(long param_1)

{
  if (*(long *)(param_1 + 0x50) != 0) {
    if ((*(byte *)(param_1 + 0x110) & 1) == 0) {
      if ((*(byte *)(param_1 + 0x110) & 2) == 0) {
        FUN_1006661c4();
        return;
      }
      FUN_1006661ec();
      return;
    }
  }
  return;
}




void FUN_1000447d4(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  FUN_100045c48(param_1,in_stack_00000000);
  return;
}




void FUN_100044800(long param_1)

{
  int in_stack_00000000;
  
  if ((*(long *)(param_1 + 0x50) != 0) && (*(int *)(param_1 + 0xb4) == in_stack_00000000)) {
    FUN_1006661c4();
  }
  return;
}




void FUN_100044844(long param_1)

{
  int in_stack_00000000;
  
  if ((*(long *)(param_1 + 0x50) != 0) && (*(int *)(param_1 + 0xb4) == in_stack_00000000)) {
    FUN_1006661ec();
  }
  return;
}




void FUN_100044888(long param_1)

{
  int in_stack_00000000;
  
  if ((*(long *)(param_1 + 0x50) != 0) && (*(int *)(param_1 + 0xb4) == in_stack_00000000)) {
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  return;
}




void FUN_1000448bc(long param_1)

{
  int in_stack_00000000;
  
  if ((*(long *)(param_1 + 0x50) != 0) && (*(int *)(param_1 + 0xb4) == in_stack_00000000)) {
    FUN_1006661a0();
  }
  return;
}




void FUN_100044900(long param_1)

{
  int in_stack_00000000;
  
  if ((*(long *)(param_1 + 0x50) != 0) && (*(int *)(param_1 + 0xb4) == in_stack_00000000)) {
    FUN_1006666b0((float)*(double *)((ulong)&stack0x00000000 | 8));
  }
  return;
}




void FUN_10004494c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int in_stack_00000000;
  
  puVar1 = *(undefined8 **)((ulong)&stack0x00000000 | 8);
  puVar2 = *(undefined8 **)(param_1 + 0x50);
  if ((puVar2 != (undefined8 *)0x0) &&
     (*(int *)(param_1 + 0xb4) == in_stack_00000000 && puVar1 != (undefined8 *)0x0)) {
    *(undefined4 *)(param_1 + 0xb8) = 0;
    uVar4 = puVar1[1];
    uVar3 = *puVar1;
    uVar6 = puVar1[3];
    uVar5 = puVar1[2];
    uVar7 = puVar1[4];
    uVar9 = puVar1[7];
    uVar8 = puVar1[6];
    puVar2[5] = puVar1[5];
    puVar2[4] = uVar7;
    puVar2[7] = uVar9;
    puVar2[6] = uVar8;
    puVar2[1] = uVar4;
    *puVar2 = uVar3;
    puVar2[3] = uVar6;
    puVar2[2] = uVar5;
    uVar4 = puVar1[1];
    uVar3 = *puVar1;
    uVar6 = puVar1[3];
    uVar5 = puVar1[2];
    uVar8 = puVar1[5];
    uVar7 = puVar1[4];
    uVar9 = puVar1[6];
    *(undefined8 *)(param_1 + 0xa0) = puVar1[7];
    *(undefined8 *)(param_1 + 0x98) = uVar9;
    *(undefined8 *)(param_1 + 0x90) = uVar8;
    *(undefined8 *)(param_1 + 0x88) = uVar7;
    *(undefined8 *)(param_1 + 0x80) = uVar6;
    *(undefined8 *)(param_1 + 0x78) = uVar5;
    *(undefined8 *)(param_1 + 0x70) = uVar4;
    *(undefined8 *)(param_1 + 0x68) = uVar3;
  }
  return;
}




void FUN_1000449b0(long param_1)

{
  undefined8 *puVar1;
  int in_stack_00000000;
  
  puVar1 = (undefined8 *)((ulong)&stack0x00000000 | 8);
  if (*(int *)(param_1 + 0xb4) == in_stack_00000000) {
    FUN_100045be0(param_1,*puVar1,*(undefined4 *)(puVar1 + 1),puVar1[2]);
  }
  return;
}




void FUN_1000449f4(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  
  local_38 = 0xbf800000bf800000;
  local_30 = 0xbf800000;
  local_2c = 0x3f8000003f800000;
  local_24 = 0x3f800000;
  uVar2 = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x98) = *param_2;
  *(undefined4 *)(param_1 + 0xa0) = uVar2;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0x3f800000;
  uVar2 = FUN_1010a1cc8();
  uVar1 = FUN_1010a1dcc(uVar2,&local_38,param_3,param_1 + 0x30);
  *(undefined2 *)(param_1 + 0xb0) = uVar1;
  return;
}




void FUN_100044aa0(long param_1)

{
  uint5 *puVar1;
  ulong uVar2;
  float local_44;
  float fStack_40;
  float local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  puVar1 = (uint5 *)(param_1 + 0x10c);
  uVar2 = (ulong)*(uint *)(param_1 + 0x10c);
  if ((int)((long)(uVar2 << 0x3b) >> 0x3b) != -1) {
    local_44 = 0.0;
    if ((*(byte *)(param_1 + 0x110) & 4) != 0) {
      local_44 = 1.0;
    }
    FUN_100666598(*(undefined8 *)(param_1 + 0x50),(long)(uVar2 << 0x3b) >> 0x3b,&local_44,1);
    uVar2 = (ulong)*puVar1;
  }
  if ((int)((long)(uVar2 << 0x36) >> 0x3b) != -1) {
    local_44 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xf8));
    local_44 = local_44 * 0.003921569;
    fStack_40 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xf9));
    fStack_40 = fStack_40 * 0.003921569;
    local_3c = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xfa));
    local_3c = local_3c * 0.003921569;
    FUN_100666598(*(undefined8 *)(param_1 + 0x50),(long)(uVar2 << 0x36) >> 0x3b,&local_44,3);
    uVar2 = (ulong)*puVar1;
  }
  if ((int)((long)(uVar2 << 0x31) >> 0x3b) != -1) {
    FUN_100666598(*(undefined8 *)(param_1 + 0x50),(long)(uVar2 << 0x31) >> 0x3b,param_1 + 0xfc,1);
    uVar2 = (ulong)*puVar1;
  }
  if ((int)((long)(uVar2 << 0x27) >> 0x3b) != -1) {
    FUN_100666598(*(undefined8 *)(param_1 + 0x50),(long)(uVar2 << 0x27) >> 0x3b,param_1 + 0x100,2);
    uVar2 = (ulong)*puVar1;
  }
  if ((int)((long)(uVar2 << 0x2c) >> 0x3b) != -1) {
    local_44 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xfb));
    local_44 = local_44 * 0.003921569;
    FUN_100666598(*(undefined8 *)(param_1 + 0x50),(long)(uVar2 << 0x2c) >> 0x3b,&local_44,1);
    uVar2 = (ulong)*puVar1;
  }
  if ((int)((long)(uVar2 << 0x22) >> 0x3b) != -1) {
    FUN_100666598(*(undefined8 *)(param_1 + 0x50),(long)(uVar2 << 0x22) >> 0x3b,param_1 + 0x108,1);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100044c48(long param_1)

{
  int iVar1;
  undefined2 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_170 [64];
  undefined1 auStack_130 [64];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float fStack_98;
  undefined4 local_94;
  float local_90;
  float fStack_8c;
  float local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined4 local_74;
  
  if ((*(int *)(param_1 + 0xb8) != 0) &&
     (plVar3 = *(long **)(param_1 + 0x58), plVar3 != (long *)0x0)) {
    if (*(int *)(param_1 + 0x60) == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
      if (lVar4 != 0) {
        iVar1 = *(int *)(param_1 + 0xb8);
        if (iVar1 == 3) {
          uVar5 = (**(code **)(**(long **)(param_1 + 0x58) + 0x10))();
          FUN_1000456e8(param_1,uVar5,*(undefined4 *)(param_1 + 0xbc));
        }
        else {
          if (iVar1 == 2) {
            plVar3 = *(long **)(param_1 + 0x58);
            uVar5 = 0;
            if (plVar3 != (long *)0x0) {
              if (*(int *)(param_1 + 0x60) == (int)plVar3[1]) {
                uVar5 = (**(code **)(*plVar3 + 0x10))();
              }
              else {
                uVar5 = 0;
                *(undefined8 *)(param_1 + 0x58) = 0;
                *(undefined4 *)(param_1 + 0x60) = DAT_101dc0b88;
              }
            }
            FUN_1003ab468(uVar5,param_1 + 0xc0,&local_b0);
          }
          else {
            if (iVar1 != 1) goto LAB_100044d9c;
            plVar3 = *(long **)(param_1 + 0x58);
            uVar5 = 0;
            if (plVar3 != (long *)0x0) {
              if (*(int *)(param_1 + 0x60) == (int)plVar3[1]) {
                uVar5 = (**(code **)(*plVar3 + 0x10))();
              }
              else {
                uVar5 = 0;
                *(undefined8 *)(param_1 + 0x58) = 0;
                *(undefined4 *)(param_1 + 0x60) = DAT_101dc0b88;
              }
            }
            FUN_100463fe0(uVar5,&local_b0);
          }
          FUN_100045474(param_1,&local_b0);
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x60) = DAT_101dc0b88;
    }
  }
LAB_100044d9c:
  if ((*(uint *)(param_1 + 0x10c) >> 0x1e & 1) != 0) {
    FUN_1000457a0(*(undefined4 *)(param_1 + 0xa8),param_1);
  }
  if ((*(float *)(param_1 + 0xf0) != 0.0) || (*(float *)(param_1 + 0xec) != 0.0)) {
    fVar7 = (float)FUN_1010a1cd4();
    fVar7 = *(float *)(param_1 + 0xf4) + fVar7 * *(float *)(param_1 + 0xf0);
    *(float *)(param_1 + 0xf4) = fVar7;
    fVar10 = 0.5;
    fVar7 = (float)___sincosf_stret(fVar7 * 0.5);
    fVar17 = fVar7 * 0.0;
    fVar16 = fVar7 * 1.0;
    fVar7 = fVar7 * 0.0;
    fVar11 = *(float *)(param_1 + 0xe0);
    fVar13 = *(float *)(param_1 + 0xe4);
    fVar14 = *(float *)(param_1 + 0xe8);
    fVar8 = fVar11 * 0.0 + fVar13 * 1.0 + fVar14 * 0.0;
    if (1.0 <= fVar8) {
      fVar13 = 0.0;
      fVar14 = 0.0;
      fVar8 = 0.0;
      fVar11 = 1.0;
    }
    else if (fVar8 <= -1.0) {
      fVar11 = 0.5;
      fVar8 = (float)___sincosf_stret(0x3fc90fdb);
      fVar13 = fVar8 * 0.0;
      fVar14 = fVar8 * 0.0;
      fVar8 = fVar8 * 0.0;
    }
    else {
      fVar15 = fVar14 * 1.0 - fVar13 * 0.0;
      fVar14 = fVar11 * 0.0 - fVar14 * 0.0;
      fVar12 = fVar13 * 0.0 - fVar11 * 1.0;
      fVar9 = SQRT(fVar8 * 2.0 + 2.0);
      fVar11 = fVar9 * 0.5;
      fVar9 = 1.0 / fVar9;
      fVar8 = 1.0 / SQRT(fVar12 * fVar12 + fVar15 * fVar15 + fVar14 * fVar14);
      fVar13 = fVar9 * fVar15 * fVar8;
      fVar14 = fVar9 * fVar14 * fVar8;
      fVar8 = fVar9 * fVar12 * fVar8;
    }
    local_a4 = 0;
    local_94 = 0;
    local_7c = 0;
    local_84 = 0;
    local_74 = 0x3f800000;
    fVar9 = ((fVar13 * fVar10 + fVar7 * fVar14) - fVar16 * fVar8) + fVar17 * fVar11;
    fVar12 = (fVar14 * fVar10 - fVar13 * fVar7) + fVar17 * fVar8 + fVar16 * fVar11;
    fVar15 = (fVar13 * fVar16 - fVar14 * fVar17) + fVar10 * fVar8 + fVar7 * fVar11;
    fVar7 = fVar11 * fVar10 - (fVar13 * fVar17 + fVar16 * fVar14 + fVar7 * fVar8);
    fVar8 = fVar12 + fVar12;
    fVar10 = fVar15 + fVar15;
    local_9c = 1.0 - fVar9 * (fVar9 + fVar9);
    local_88 = local_9c - fVar8 * fVar12;
    fStack_8c = (fVar9 + fVar9) * fVar7;
    fStack_98 = fStack_8c + fVar10 * fVar12;
    local_b0 = 1.0 - (fVar8 * fVar12 + fVar10 * fVar15);
    local_9c = local_9c - fVar10 * fVar15;
    local_a0 = fVar9 * fVar8 - fVar10 * fVar7;
    fStack_ac = fVar10 * fVar7 + fVar9 * fVar8;
    local_a8 = fVar10 * fVar9 - fVar7 * fVar8;
    fStack_8c = fVar10 * fVar12 - fStack_8c;
    local_90 = fVar10 * fVar9 + fVar7 * fVar8;
    local_c0 = *(undefined4 *)(param_1 + 0xec);
    local_bc = 0;
    uStack_b8 = 0;
    uStack_e8 = 0;
    local_f0 = 0x3f800000;
    uStack_d8 = 0;
    uStack_e0 = 0x3f80000000000000;
    uStack_c8 = 0x3f800000;
    local_d0 = 0;
    local_b4 = 0x3f800000;
    FUN_10002a9fc(auStack_170,&local_f0,&local_b0);
    FUN_10002a9fc(auStack_130,auStack_170,param_1 + 0x68);
    FUN_100045474(param_1,auStack_130);
  }
  if (*(int *)(param_1 + 0xc4) == 1) {
    FUN_1000458f4(param_1);
  }
  uVar5 = FUN_1010a1cc8();
  uVar2 = *(undefined2 *)(param_1 + 0xb0);
  uVar6 = FUN_100667770(*(undefined8 *)(param_1 + 0x50));
  FUN_1010a1ef8(uVar5,uVar2,uVar6,0);
  return;
}




void FUN_100045094(long param_1)

{
  uint uVar1;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    uVar1 = FUN_100666230(*(long *)(param_1 + 0x50),"Ally_Enemy");
    *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) & 0xffffffe0 | uVar1 & 0x1f;
    uVar1 = FUN_100666230(*(undefined8 *)(param_1 + 0x50),"Color");
    *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) & 0xfffffc1f | (uVar1 & 0x1f) << 5;
    uVar1 = FUN_100666230(*(undefined8 *)(param_1 + 0x50),"Radius");
    *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) & 0xffff83ff | (uVar1 & 0x1f) << 10;
    uVar1 = FUN_100666230(*(undefined8 *)(param_1 + 0x50),"Alpha");
    *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) & 0xfff07fff | (uVar1 & 0x1f) << 0xf;
    uVar1 = FUN_100666230(*(undefined8 *)(param_1 + 0x50),"SizeXY");
    *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) & 0xfe0fffff | (uVar1 & 0x1f) << 0x14;
    uVar1 = FUN_100666230(*(undefined8 *)(param_1 + 0x50),"Duration");
    *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) & 0xc1ffffff | (uVar1 & 0x1f) << 0x19;
  }
  return;
}




void FUN_1000451ac(long param_1,char *param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  undefined8 *puVar7;
  
  if (param_3 == 0) {
LAB_100045250:
    if (param_2 != (char *)0x0) {
      uVar2 = FUN_100045270(param_2);
      *(undefined8 *)(param_1 + 0x50) = uVar2;
    }
  }
  else {
    uVar2 = FUN_100345b94();
    plVar3 = (long *)FUN_10034c450(uVar2,"*KindredEffects*");
    if (param_2 == (char *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0x811c9dc5;
      cVar1 = *param_2;
      while (cVar1 != '\0') {
        param_2 = param_2 + 1;
        uVar4 = (uVar4 ^ (int)cVar1) * 0x1000193;
        cVar1 = *param_2;
      }
    }
    plVar3 = (long *)*plVar3;
    lVar5 = *plVar3;
    while (lVar5 != 0) {
      puVar7 = *(undefined8 **)(lVar5 + 0x10);
      puVar6 = (uint *)*puVar7;
      while (puVar6 != (uint *)0x0) {
        puVar7 = puVar7 + 1;
        if (*puVar6 == uVar4) {
          param_2 = *(char **)(puVar6 + 2);
          goto LAB_100045250;
        }
        puVar6 = (uint *)*puVar7;
      }
      plVar3 = plVar3 + 1;
      lVar5 = *plVar3;
    }
  }
  FUN_100045094(param_1);
  return;
}




undefined8 FUN_100045270(undefined8 param_1)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 **local_68;
  undefined8 uStack_60;
  long local_58;
  undefined8 **local_50;
  undefined8 uStack_48;
  long local_40;
  undefined8 local_38;
  
  local_38 = 0;
  uVar2 = FUN_100658cac(param_1,&local_38,0);
  local_50 = (undefined8 ***)0x0;
  uStack_48 = 0;
  local_40 = 0;
  FUN_1006581d8(param_1,&local_50);
  local_68 = (undefined8 ***)0x0;
  uStack_60 = 0;
  local_58 = 0;
  pppuVar1 = (undefined8 ***)local_50;
  if (-1 < local_40) {
    pppuVar1 = &local_50;
  }
  FUN_100658d0c(pppuVar1,&local_68);
  uVar3 = FUN_1006663f0();
  pppuVar1 = (undefined8 ***)local_68;
  if (-1 < local_58) {
    pppuVar1 = &local_68;
  }
  uVar2 = FUN_100669c08(uVar3,pppuVar1,local_38,uVar2);
  if (local_58 < 0) {
    operator_delete(local_68);
  }
  if (local_40 < 0) {
    operator_delete(local_50);
  }
  return uVar2;
}




void FUN_100045334(long param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  int *piVar5;
  undefined8 *puVar6;
  
  iVar1 = *param_2;
  uVar2 = FUN_100345b94();
  plVar3 = (long *)FUN_10034c450(uVar2,"*KindredEffects*");
  plVar3 = (long *)*plVar3;
  lVar4 = *plVar3;
  do {
    if (lVar4 == 0) {
LAB_1000453a4:
      FUN_100045094(param_1);
      return;
    }
    puVar6 = *(undefined8 **)(lVar4 + 0x10);
    piVar5 = (int *)*puVar6;
    while (piVar5 != (int *)0x0) {
      puVar6 = puVar6 + 1;
      if (*piVar5 == iVar1) {
        if (*(long *)(piVar5 + 2) != 0) {
          uVar2 = FUN_100045270();
          *(undefined8 *)(param_1 + 0x50) = uVar2;
        }
        goto LAB_1000453a4;
      }
      piVar5 = (int *)*puVar6;
    }
    plVar3 = plVar3 + 1;
    lVar4 = *plVar3;
  } while( true );
}




void FUN_1000453b4(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xb4) = param_2;
  return;
}




void FUN_1000453bc(long param_1)

{
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_10066617c();
    return;
  }
  return;
}




void FUN_1000453cc(long param_1)

{
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_1006661c4();
    return;
  }
  return;
}




void FUN_1000453dc(long param_1)

{
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_100666204(*(long *)(param_1 + 0x50),0);
    return;
  }
  return;
}




void FUN_1000453f0(long param_1)

{
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_1006661ec();
    return;
  }
  return;
}




void FUN_100045400(undefined4 param_1,long param_2)

{
  if (*(long *)(param_2 + 0x50) != 0) {
    *(undefined4 *)(*(long *)(param_2 + 0x50) + 0x60) = param_1;
  }
  *(undefined4 *)(param_2 + 0x108) = param_1;
  return;
}




void FUN_100045414(long param_1,int param_2)

{
  byte bVar1;
  long lVar2;
  ushort uVar3;
  
  bVar1 = 2;
  if (param_2 == 0) {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 0x110) = *(byte *)(param_1 + 0x110) & 0xfd | bVar1;
  lVar2 = *(long *)(param_1 + 0x50);
  if (lVar2 != 0) {
    uVar3 = 0x800;
    if (param_2 == 0) {
      uVar3 = 0;
    }
    *(ushort *)(lVar2 + 100) = *(ushort *)(lVar2 + 100) & 0xf7ff | uVar3;
  }
  return;
}




undefined8 FUN_100045464(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}




undefined8 FUN_10004546c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_100045474(long param_1,float *param_2)

{
  float fVar1;
  long lVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar2 = *(long *)PTR____stack_chk_guard_101444218;
  fVar11 = *param_2;
  fVar10 = param_2[1];
  fVar9 = param_2[2];
  fVar4 = param_2[3];
  fVar7 = param_2[4];
  fVar6 = param_2[5];
  fVar8 = param_2[6];
  fVar5 = param_2[7];
  fVar12 = param_2[8];
  fVar13 = param_2[9];
  fVar14 = param_2[10];
  uVar18 = *(undefined8 *)(param_2 + 0xd);
  uVar17 = *(undefined8 *)(param_2 + 0xb);
  fVar1 = param_2[0xf];
  if (*(int *)(param_1 + 0x10c) < 0) {
    fVar15 = SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9);
    fVar16 = 1.0;
    if (1.1920929e-07 <= fVar15) {
      fVar16 = 1.0 / fVar15;
    }
    fVar11 = fVar16 * fVar11;
    fVar10 = fVar16 * fVar10;
    fVar9 = fVar16 * fVar9;
    fVar7 = fVar16 * fVar7;
    fVar6 = fVar16 * fVar6;
    fVar8 = fVar16 * fVar8;
    fVar12 = fVar16 * fVar12;
    fVar13 = fVar16 * fVar13;
    fVar14 = fVar16 * fVar14;
  }
  pfVar3 = *(float **)(param_1 + 0x50);
  if (pfVar3 != (float *)0x0) {
    *pfVar3 = fVar11;
    pfVar3[1] = fVar10;
    pfVar3[2] = fVar9;
    pfVar3[3] = fVar4;
    pfVar3[4] = fVar7;
    pfVar3[5] = fVar6;
    pfVar3[6] = fVar8;
    pfVar3[7] = fVar5;
    pfVar3[8] = fVar12;
    pfVar3[9] = fVar13;
    pfVar3[10] = fVar14;
    *(undefined8 *)(pfVar3 + 0xd) = uVar18;
    *(undefined8 *)(pfVar3 + 0xb) = uVar17;
    pfVar3[0xf] = fVar1;
  }
  *(float *)(param_1 + 0x68) = fVar11;
  *(float *)(param_1 + 0x6c) = fVar10;
  *(float *)(param_1 + 0x70) = fVar9;
  *(float *)(param_1 + 0x74) = fVar4;
  *(float *)(param_1 + 0x78) = fVar7;
  *(float *)(param_1 + 0x7c) = fVar6;
  *(float *)(param_1 + 0x80) = fVar8;
  *(float *)(param_1 + 0x84) = fVar5;
  *(float *)(param_1 + 0x88) = fVar12;
  *(float *)(param_1 + 0x8c) = fVar13;
  *(float *)(param_1 + 0x90) = fVar14;
  *(undefined8 *)(param_1 + 0x9c) = uVar18;
  *(undefined8 *)(param_1 + 0x94) = uVar17;
  *(float *)(param_1 + 0xa4) = fVar1;
  if (*(long *)PTR____stack_chk_guard_101444218 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1000455a4(long param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 auStack_70 [64];
  
  FUN_100463fe0(param_2,auStack_70);
  FUN_100045474(param_1,auStack_70);
  if (param_3 != 0) {
    *(undefined4 *)(param_1 + 0xb8) = 1;
    uVar1 = *(undefined4 *)(param_2 + 0x30);
    *(long *)(param_1 + 0x58) = param_2 + 0x28;
    *(undefined4 *)(param_1 + 0x60) = uVar1;
  }
  return;
}




void FUN_10004560c(long param_1,long param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined1 auStack_70 [64];
  
  FUN_1003ab468(param_2,param_3,auStack_70);
  FUN_100045474(param_1,auStack_70);
  if (param_4 != 0) {
    *(undefined4 *)(param_1 + 0xb8) = 2;
    uVar1 = *(undefined4 *)(param_2 + 0x30);
    *(long *)(param_1 + 0x58) = param_2 + 0x28;
    *(undefined4 *)(param_1 + 0x60) = uVar1;
    *(undefined4 *)(param_1 + 0xc0) = *param_3;
  }
  return;
}




void FUN_100045684(long param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1010acd98(param_3);
  FUN_1000456e8(param_1,param_2,uVar2);
  if (param_4 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x30);
    *(long *)(param_1 + 0x58) = param_2 + 0x28;
    *(undefined4 *)(param_1 + 0x60) = uVar1;
    *(undefined4 *)(param_1 + 0xb8) = 3;
    *(int *)(param_1 + 0xbc) = (int)uVar2;
  }
  return;
}




void FUN_1000456e8(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_60 [64];
  
  lVar1 = *(long *)(param_2 + 0x18);
  do {
    if (lVar1 == 0) {
LAB_10004573c:
      FUN_100463fe0(param_2,auStack_60);
LAB_100045748:
      FUN_100045474(param_1,auStack_60);
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_10184dc68) {
      uVar2 = FUN_10002a6cc(lVar1,auStack_60,param_3,1);
      if ((uVar2 & 1) != 0) goto LAB_100045748;
      goto LAB_10004573c;
    }
    lVar1 = *(long *)(lVar1 + 0x20);
  } while( true );
}




void FUN_100045764(undefined4 param_1,long param_2)

{
  FUN_1000457a0();
  *(uint *)(param_2 + 0x10c) = *(uint *)(param_2 + 0x10c) | 0x40000000;
  *(undefined4 *)(param_2 + 0xa8) = param_1;
  return;
}




void FUN_1000457a0(undefined1 param_1 [16],float param_2,long param_3)

{
  float fVar1;
  float fVar2;
  float local_60;
  float fStack_5c;
  float local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  float fStack_3c;
  float local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  
  fVar1 = (float)___sincosf_stret();
  fVar2 = fVar1 * fVar1 + param_2 * param_2;
  if (1e-06 <= fVar2) {
    fVar2 = SQRT(fVar2);
    param_2 = param_2 / fVar2;
    fVar1 = fVar1 / fVar2;
  }
  else {
    param_2 = 1.0;
    fVar1 = 0.0;
  }
  local_60 = fVar1 * 1.0 - 0.0;
  fStack_5c = param_2 * 0.0 - fVar1 * 0.0;
  local_58 = 0.0 - param_2 * 1.0;
  fVar1 = 1.0 / SQRT(local_58 * local_58 + local_60 * local_60 + fStack_5c * fStack_5c);
  local_60 = local_60 * fVar1;
  fStack_5c = fStack_5c * fVar1;
  local_58 = local_58 * fVar1;
  local_40 = fStack_5c * 0.0 - local_58 * 1.0;
  fStack_3c = local_58 * 0.0 - local_60 * 0.0;
  local_38 = local_60 * 1.0 - fStack_5c * 0.0;
  local_30 = *(undefined8 *)(param_3 + 0x98);
  local_28 = *(undefined4 *)(param_3 + 0xa0);
  local_50 = 0;
  uStack_4c = 0x3f800000;
  fVar1 = 1.0 / SQRT(local_40 * local_40 + fStack_3c * fStack_3c + local_38 * local_38);
  local_40 = local_40 * fVar1;
  fStack_3c = fStack_3c * fVar1;
  local_48 = 0;
  local_38 = local_38 * fVar1;
  local_54 = 0;
  local_44 = 0;
  local_34 = 0;
  local_24 = 0x3f800000;
  FUN_100045474(param_3,&local_60);
  return;
}




void FUN_1000458d0(long param_1,long param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0xc4) = 1;
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(long *)(param_1 + 200) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0xd0) = uVar1;
  *(undefined8 *)(param_1 + 0xd8) = 0xffffffff;
  FUN_1000458f4();
  return;
}




void FUN_1000458f4(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 auStack_60 [48];
  undefined8 local_30;
  undefined4 local_28;
  
  plVar2 = *(long **)(param_1 + 200);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0xd0) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        if (*(int *)(param_1 + 0xd8) == -1) {
          iVar1 = *(int *)(param_1 + 0xdc);
          plVar2 = *(long **)(param_1 + 200);
          if (iVar1 == -0x7ee3623b || iVar1 == 0) {
            uVar4 = 0;
            if (plVar2 != (long *)0x0) {
              if (*(int *)(param_1 + 0xd0) == (int)plVar2[1]) {
                uVar4 = (**(code **)(*plVar2 + 0x10))();
              }
              else {
                uVar4 = 0;
                *(undefined8 *)(param_1 + 200) = 0;
                *(undefined4 *)(param_1 + 0xd0) = DAT_101dc0b88;
              }
            }
            FUN_100345b68(uVar4,&local_70,0);
          }
          else {
            uVar4 = 0;
            if (plVar2 != (long *)0x0) {
              if (*(int *)(param_1 + 0xd0) == (int)plVar2[1]) {
                uVar4 = (**(code **)(*plVar2 + 0x10))();
              }
              else {
                uVar4 = 0;
                *(undefined8 *)(param_1 + 200) = 0;
                *(undefined4 *)(param_1 + 0xd0) = DAT_101dc0b88;
              }
            }
            FUN_1003ab468(uVar4,(int *)(param_1 + 0xdc),auStack_60);
            local_70 = local_30;
            local_68 = local_28;
          }
        }
        else {
          uVar4 = (**(code **)(**(long **)(param_1 + 200) + 0x10))();
          FUN_100045d14(uVar4,uVar4,*(undefined4 *)(param_1 + 0xd8),&local_70);
        }
        FUN_100045ac0(param_1,&local_70);
      }
    }
    else {
      *(undefined8 *)(param_1 + 200) = 0;
      *(undefined4 *)(param_1 + 0xd0) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_100045a68(long param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0xc4) = 1;
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(long *)(param_1 + 200) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0xd0) = uVar1;
  *(undefined4 *)(param_1 + 0xd8) = param_3;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  FUN_1000458f4();
  return;
}




void FUN_100045a88(long param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0xc4) = 1;
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(long *)(param_1 + 200) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0xd0) = uVar1;
  *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xdc) = *param_3;
  FUN_1000458f4();
  return;
}




void FUN_100045ab4(long param_1)

{
  *(undefined4 *)(param_1 + 0xc4) = 2;
  FUN_100045ac0();
  return;
}




void FUN_100045ac0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  local_38 = *param_2;
  local_30 = *(undefined4 *)(param_2 + 1);
  uVar1 = FUN_100666230(*(undefined8 *)(param_1 + 0x50),"beam_target");
  FUN_100666598(*(undefined8 *)(param_1 + 0x50),uVar1,&local_38,3);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100045b44(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_5;
  *(undefined4 *)(param_4 + 0xe8) = *(undefined4 *)(param_5 + 1);
  *(undefined8 *)(param_4 + 0xe0) = uVar1;
  *(undefined4 *)(param_4 + 0xec) = param_1;
  *(undefined4 *)(param_4 + 0xf0) = param_2;
  *(undefined4 *)(param_4 + 0xf4) = param_3;
  return;
}




void FUN_100045b60(long param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  undefined8 uVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 0xe0);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0xe8);
    *param_2 = uVar1;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0xec);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0xf0);
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = *(undefined4 *)(param_1 + 0xf4);
  }
  return;
}




void FUN_100045b9c(long param_1,uint param_2)

{
  *(byte *)(param_1 + 0x110) =
       *(byte *)(param_1 + 0x110) & 0xfb | (byte)(((ulong)(param_2 & 1) << 0x22) >> 0x20);
  return;
}




void FUN_100045bc0(long param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0xf8) = *param_2;
  return;
}




void FUN_100045bcc(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xfc) = param_1;
  return;
}




void FUN_100045bd4(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x100) = *param_2;
  return;
}




void FUN_100045be0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    uVar1 = FUN_100666230();
    FUN_100666598(*(undefined8 *)(param_1 + 0x50),uVar1,param_4,param_3);
    return;
  }
  return;
}




long FUN_100045c38(long param_1)

{
  return param_1 + 0x68;
}




long FUN_100045c40(long param_1)

{
  return param_1 + 0x40;
}




void FUN_100045c48(long param_1,byte *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined4 local_24;
  
  bVar1 = *param_2;
  if (((((bVar1 & 0x1f) == 0) && ((*(byte *)(param_1 + 0x110) & 0x18) != 0)) ||
      ((((uint)(int)(char)bVar1 >> 5 & 1) != 0 && ((*(byte *)(param_1 + 0x110) & 0x18) == 0x10))))
     || ((char)bVar1 < '\0')) {
    local_24 = 0;
  }
  else {
    local_24 = *(undefined4 *)(param_1 + 0xac);
  }
  uVar2 = FUN_1010a1cc8();
  FUN_1010a1ef8(uVar2,*(undefined2 *)(param_1 + 0xb0),0,&local_24);
  return;
}




bool FUN_100045ccc(long param_1)

{
  if (*(long *)(param_1 + 0x50) != 0) {
    return (*(ushort *)(*(long *)(param_1 + 0x50) + 100) & 0x30) == 0x10;
  }
  return false;
}




bool FUN_100045cf0(long param_1)

{
  if (*(long *)(param_1 + 0x50) != 0) {
    return (*(ushort *)(*(long *)(param_1 + 0x50) + 100) & 0x38) == 8;
  }
  return false;
}




void FUN_100045d14(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_60 [48];
  undefined8 local_30;
  undefined4 local_28;
  
  lVar1 = *(long *)(param_2 + 0x18);
  do {
    if (lVar1 == 0) {
LAB_100045d68:
      FUN_100463fe0(param_2,auStack_60);
LAB_100045d74:
      *param_4 = local_30;
      *(undefined4 *)(param_4 + 1) = local_28;
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_10184dc68) {
      uVar2 = FUN_10002a6cc(lVar1,auStack_60,param_3,1);
      if ((uVar2 & 1) != 0) goto LAB_100045d74;
      goto LAB_100045d68;
    }
    lVar1 = *(long *)(lVar1 + 0x20);
  } while( true );
}




void FUN_100045d94(long param_1)

{
  if (*(long *)(param_1 + 0x50) != 0) {
    if ((*(byte *)(param_1 + 0x110) & 1) == 0) {
      if ((*(byte *)(param_1 + 0x110) & 2) == 0) {
        FUN_1006661c4();
        return;
      }
      FUN_1006661ec();
      return;
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100045dc0(undefined8 *param_1)

{
  uRam0000000101d22eb8 = param_1[5];
  _DAT_101d22eb0 = param_1[4];
  uRam0000000101d22ec8 = param_1[7];
  _DAT_101d22ec0 = param_1[6];
  uRam0000000101d22e98 = param_1[1];
  _DAT_101d22e90 = *param_1;
  uRam0000000101d22ea8 = param_1[3];
  _DAT_101d22ea0 = param_1[2];
  return;
}




void FUN_100045ddc(void *param_1)

{
  if (param_1 != (void *)0x0) {
    DAT_101d22fd4 = 1;
    _memcpy(&DAT_101d22ed0,param_1,0x104);
    return;
  }
  DAT_101d22fd4 = 0;
  return;
}




long FUN_100045e0c(long param_1)

{
  return param_1 + -0x40;
}




long FUN_100045e14(long param_1)

{
  return param_1 + -0x40;
}




undefined8 * thunk_FUN_100044368(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  uVar2 = FUN_10066acb4();
  *(undefined4 *)(param_1 + 6) = 0x7000000;
  param_1[7] = uVar2;
  param_1[5] = &PTR_FUN_10144c908;
  FUN_1010a1d84(param_1 + 8);
  *param_1 = &PTR_thunk_FUN_10004449c_10144c868;
  param_1[5] = &PTR_FUN_10144c8a8;
  param_1[8] = &PTR_FUN_10144c8d8;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar1 = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 0xc) = DAT_101dc0b88;
  param_1[0x15] = 0x200000000;
  *(undefined2 *)(param_1 + 0x16) = 0xffff;
  *(undefined4 *)((long)param_1 + 0xb4) = 0xffffffff;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x1a) = uVar1;
  *(undefined4 *)(param_1 + 0x1b) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined4 *)((long)param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0xfc) = 0;
  param_1[0x20] = DAT_101dc1cb8;
  param_1[0x21] = 0xbfffffff00000000;
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) & 0xe0 | 0x10;
  param_1[0xe] = 0;
  param_1[0xd] = 0x3f800000;
  param_1[0x10] = 0;
  param_1[0xf] = 0x3f80000000000000;
  param_1[0x12] = 0x3f800000;
  param_1[0x11] = 0;
  param_1[0x14] = 0x3f80000000000000;
  param_1[0x13] = 0;
  return param_1;
}




void FUN_100045e20(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100045e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_100045e2c(void)

{
  if ((DAT_10184dae0 & 1) == 0) {
    DAT_10184dad8 = DAT_101872e38;
    DAT_10184dae0 = 1;
  }
  return;
}




void FUN_100045e58(void)

{
  if ((DAT_10184dc70 & 1) == 0) {
    DAT_10184dc68 = DAT_101872e38;
    DAT_10184dc70 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100045e84(void)

{
  uRam0000000101d22e98 = 0;
  _DAT_101d22e90 = 0x3f800000;
  uRam0000000101d22ea8 = 0;
  _DAT_101d22ea0 = 0x3f80000000000000;
  uRam0000000101d22eb8 = 0x3f800000;
  _DAT_101d22eb0 = 0;
  uRam0000000101d22ec8 = 0x3f80000000000000;
  _DAT_101d22ec0 = 0;
  FUN_1010cf208(&DAT_101d22ed0);
  return;
}




void FUN_100045eb0(long param_1)

{
  long lVar1;
  
  DAT_10184df20 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184df20 + 1;
  lVar1 = param_1 + (ulong)DAT_10184df20 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_100045f98;
  *(code **)(lVar1 + 0xb8) = FUN_100045fac;
  *(uint *)(lVar1 + 0xa4) = DAT_10184df20;
  *(undefined4 *)(lVar1 + 0xa8) = 0x30;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x40;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  return;
}




void FUN_100045f0c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_thunk_FUN_100045f0c_10144c938;
  if (param_1[5] != 0) {
    pvVar1 = (void *)thunk_FUN_1010af6a0();
    operator_delete(pvVar1);
    param_1[5] = 0;
  }
  FUN_1010a0064(param_1);
  return;
}




void thunk_FUN_100045f0c(void)

{
  FUN_100045f0c();
  return;
}




void FUN_100045f50(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100045f0c();
  operator_delete(pvVar1);
  return;
}




void FUN_100045f64(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + 0x18);
  do {
    lVar1 = *plVar2;
    plVar2 = (long *)(lVar1 + 0x20);
  } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dc58);
  FUN_1000e7b70(lVar1,param_1 + 0x28,param_2);
  return;
}




void FUN_100045f98(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100045f0c_10144c938;
  param_1[5] = 0;
  return;
}




void FUN_100045fac(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100045fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_100045fb8(void)

{
  if ((DAT_10184df28 & 1) == 0) {
    DAT_10184df20 = DAT_101872e38;
    DAT_10184df28 = 1;
  }
  return;
}




void FUN_100045fe4(void)

{
  if ((DAT_10184dc60 & 1) == 0) {
    DAT_10184dc58 = DAT_101872e38;
    DAT_10184dc60 = 1;
  }
  return;
}




undefined8 * FUN_100046010(undefined8 *param_1)

{
  undefined1 *local_40;
  void *local_38;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1006421a8(param_1 + 5);
  *param_1 = &PTR_thunk_FUN_1000461c8_10144c968;
  param_1[5] = &PTR_FUN_10144c9a0;
  thunk_FUN_100650f44(param_1 + 0x16,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220);
  thunk_FUN_100650f44(param_1 + 0x3c,PTR_s_build___Fonts_Brandon_Bold_24_fo_10184e218);
  thunk_FUN_100652c08(param_1 + 0x62);
  thunk_FUN_10007d664(param_1 + 0x80);
  thunk_FUN_1000a81b0(param_1 + 0xa9);
  FUN_10064fd54(param_1 + 0x10d,0);
  param_1[0x10d] = &PTR_thunk_FUN_10064e2bc_10144caa0;
  param_1[0x127] = 0;
  param_1[0x126] = 0;
  thunk_FUN_100652c08(param_1 + 0x128);
  thunk_FUN_100652c08(param_1 + 0x146);
  thunk_FUN_100650e64(param_1 + 0x164);
  param_1[0x18b] = 0;
  param_1[0x18a] = 0;
  FUN_1004e313c(param_1 + 0x18c);
  *(undefined4 *)(param_1 + 0x18e) = 0xff000000;
  *(undefined8 *)((long)param_1 + 0xc74) = 0xbf80000000000000;
  *(undefined8 *)((long)param_1 + 0xc7c) = DAT_101dc1cb8;
  FUN_10034cbcc((long)param_1 + 0xc8c);
  *(ushort *)(param_1 + 0x192) = *(ushort *)(param_1 + 0x192) & 0xfe00 | 2;
  local_40 = &DAT_3f0000003f000000;
  (**(code **)(param_1[5] + 0x28))(param_1 + 5,&local_40);
  *(uint *)((long)param_1 + 0xac) = *(uint *)((long)param_1 + 0xac) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x264) = *(uint *)((long)param_1 + 0x264) & 0xfffffffb;
  FUN_1004e3120(&local_40,"1");
  FUN_1006513c0(param_1 + 0x3c,&local_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return param_1;
}




undefined8 * FUN_100046198(undefined8 *param_1)

{
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1;
}




void FUN_1000461c8(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  *param_1 = &PTR_thunk_FUN_1000461c8_10144c968;
  param_1[5] = &PTR_FUN_10144c9a0;
  uVar2 = *(uint *)(param_1 + 0x126);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      lVar3 = param_1[0x127];
      plVar1 = *(long **)(lVar3 + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar3 = param_1[0x127];
        uVar2 = *(uint *)(param_1 + 0x126);
      }
      *(undefined8 *)(lVar3 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if (param_1[0x127] != 0) {
    *(undefined4 *)(param_1 + 0x126) = 0;
  }
  if ((void *)param_1[0x18d] != (void *)0x0) {
    operator_delete__((void *)param_1[0x18d]);
    param_1[0x18d] = 0;
    param_1[0x18c] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x164);
  param_1[0x146] = &PTR_FUN_1014a7108;
  param_1[0x15d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x160);
  FUN_10064e2bc(param_1 + 0x146);
  param_1[0x128] = &PTR_FUN_1014a7108;
  param_1[0x13f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x142);
  FUN_10064e2bc(param_1 + 0x128);
  if ((void *)param_1[0x127] != (void *)0x0) {
    operator_delete__((void *)param_1[0x127]);
    param_1[0x126] = 0;
    param_1[0x127] = 0;
  }
  FUN_10064e2bc(param_1 + 0x10d);
  param_1[0xa9] = &PTR_FUN_10144cbe8;
  param_1[0xef] = &PTR_FUN_1014a7108;
  param_1[0x106] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x109);
  FUN_10064e2bc(param_1 + 0xef);
  param_1[0xd1] = &PTR_FUN_1014a7108;
  param_1[0xe8] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xeb);
  FUN_10064e2bc(param_1 + 0xd1);
  FUN_10064221c(param_1 + 0xa9);
  FUN_10007d730(param_1 + 0x80);
  param_1[0x62] = &PTR_FUN_1014a7108;
  param_1[0x79] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x7c);
  FUN_10064e2bc(param_1 + 0x62);
  thunk_FUN_100651068(param_1 + 0x3c);
  thunk_FUN_100651068(param_1 + 0x16);
  FUN_10064221c(param_1 + 5);
  FUN_1010a0064(param_1);
  return;
}




void FUN_100046368(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10144cbe8;
  param_1[0x46] = &PTR_FUN_1014a7108;
  param_1[0x5d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x60);
  FUN_10064e2bc(param_1 + 0x46);
  param_1[0x28] = &PTR_FUN_1014a7108;
  param_1[0x3f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x42);
  FUN_10064e2bc(param_1 + 0x28);
  FUN_10064221c(param_1);
  return;
}




void thunk_FUN_1000461c8(void)

{
  FUN_1000461c8();
  return;
}




void FUN_1000463e8(long param_1)

{
  FUN_1000461c8(param_1 + -0x28);
  return;
}




void FUN_1000463f0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000461c8();
  operator_delete(pvVar1);
  return;
}




void FUN_100046404(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000461c8(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




void FUN_10004641c(long param_1)

{
  long lVar1;
  
  DAT_10184db68 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184db68 + 1;
  lVar1 = param_1 + (ulong)DAT_10184db68 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = thunk_FUN_100046010;
  *(code **)(lVar1 + 0xb8) = FUN_100048204;
  *(uint *)(lVar1 + 0xa4) = DAT_10184db68;
  *(undefined4 *)(lVar1 + 0xa8) = 0xc98;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 200;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,5,FUN_1000464d8,0);
  FUN_1010a0990(param_1,0x36de0632,FUN_1000465b4,0);
  FUN_1010a0990(param_1,0x22ef04a2,FUN_1000465e0,0);
  return;
}




void FUN_1000464d8(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  float fVar6;
  
  if (*(long *)(param_1 + 0xc58) != 0) {
    FUN_100047bec(param_1);
  }
  if (0.0 <= *(float *)(param_1 + 0xc78)) {
    fVar6 = (float)FUN_1010a1cd4();
    *(float *)(param_1 + 0xc78) = *(float *)(param_1 + 0xc78) - fVar6;
  }
  else {
    *(uint *)(param_1 + 0x9c4) = *(uint *)(param_1 + 0x9c4) & 0xfffffffb;
    *(uint *)(param_1 + 0xab4) = *(uint *)(param_1 + 0xab4) & 0xfffffffb;
    *(uint *)(param_1 + 0xba4) = *(uint *)(param_1 + 0xba4) & 0xfffffffb;
  }
  uVar3 = FUN_1001268f0();
  if ((uVar3 & 1) == 0) {
    uVar1 = FUN_10031615c(0x13);
    uVar1 = uVar1 ^ 1;
  }
  else {
    uVar1 = 0;
  }
  lVar5 = *(long *)(param_1 + 0xc50);
  iVar2 = FUN_100147980();
  if (iVar2 == 0) {
    uVar4 = 4;
    if (lVar5 == 0 && uVar1 == 0) {
      uVar4 = 0;
    }
  }
  else {
    iVar2 = FUN_100063e10();
    uVar4 = (uint)(iVar2 != 1) << 2;
  }
  *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) & 0xfffffffb | uVar4;
  return;
}




void FUN_1000465b4(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  FUN_100047e98(param_1,in_stack_00000000);
  return;
}




void FUN_1000465e0(long param_1)

{
  FUN_10007ed08((float)*(double *)((ulong)&stack0x00000000 | 8),param_1 + 0x400);
  return;
}




void FUN_100046614(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100046620(param_1,param_2,0,param_3);
  return;
}




void FUN_100046620(undefined8 param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  long *plVar17;
  char *pcVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  ulong uVar25;
  long *local_98 [2];
  undefined1 *local_88;
  
  plVar1 = (long *)(param_2 + 0xb0);
  FUN_100642270(plVar1,1);
  plVar2 = (long *)(param_2 + 0x1e0);
  FUN_100642270(plVar2,1);
  *(long *)(param_2 + 0xc58) = param_3;
  *(int *)(param_2 + 0xc74) = (int)param_1;
  iVar9 = FUN_100126c88();
  if (iVar9 == 0) {
    uVar23 = 0x3fb333333fb33333;
    if ((*(float *)(param_2 + 0x70) != 1.4) || (*(float *)(param_2 + 0x74) != 1.4))
    goto LAB_1000466d4;
  }
  else {
    bVar8 = false;
    if ((*(float *)(param_2 + 0x70) == 1.5) && (bVar8 = false, !NAN(*(float *)(param_2 + 0x74)))) {
      bVar8 = *(float *)(param_2 + 0x74) == 1.5;
    }
    if (!bVar8) {
      uVar23 = NEON_fmov(0x3fc00000,4);
LAB_1000466d4:
      *(undefined8 *)(param_2 + 0x70) = uVar23;
      FUN_1000200a0(param_2 + 0x28);
    }
  }
  uVar16 = (uint)param_4;
  if (uVar16 != 6) {
    lVar3 = param_2 + 0x400;
    FUN_10007d7ec(param_1,lVar3,param_3,param_4,0,0);
    fVar19 = 12.0;
    if (uVar16 != 0) {
      fVar19 = 0.0;
    }
    if ((*(float *)(param_2 + 0x440) != fVar19) || (*(float *)(param_2 + 0x444) != 0.0)) {
      *(float *)(param_2 + 0x440) = fVar19;
      *(undefined4 *)(param_2 + 0x444) = 0;
      FUN_1000200a0(lVar3);
    }
    FUN_100642bf0(lVar3,param_2 + 0x28,0);
    *(ushort *)(param_2 + 0xc90) = *(ushort *)(param_2 + 0xc90) | 1;
  }
  uVar10 = FUN_10034ea2c(*(undefined4 *)(param_3 + 0x260));
  iVar9 = FUN_1003a2d9c(param_3);
  puVar4 = (undefined8 *)(param_2 + 0xc7c);
  *puVar4 = 0xc230000000000000;
  FUN_100651460(plVar1,&DAT_101dc2f34);
  *(uint *)(param_2 + 0x134) = *(uint *)(param_2 + 0x134) & 0xfffffffb;
  local_98[0] = (long *)&DAT_3f0000003f000000;
  if ((*(float *)(param_2 + 0xf0) != *(float *)(param_2 + 0xc7c)) ||
     (*(float *)(param_2 + 0xf4) != *(float *)(param_2 + 0xc80))) {
    *(undefined8 *)(param_2 + 0xf0) = *puVar4;
    FUN_1000200a0(plVar1);
  }
  (**(code **)(*(long *)(param_2 + 0xb0) + 0x28))(plVar1,local_98);
  FUN_10065168c(plVar1,1);
  lVar3 = param_2 + 0x28;
  FUN_100642bf0(plVar1,lVar3,0);
  if (uVar16 != 0) {
    if ((uVar16 < 6) && ((1 << (ulong)(uVar16 & 0x1f) & 0x34U) != 0)) {
      fVar19 = *(float *)(param_2 + 0xc80) + 14.0;
      *(float *)(param_2 + 0xc80) = fVar19;
      local_98[0] = (long *)&DAT_3f0000003f000000;
      if ((*(float *)(param_2 + 0xf0) != *(float *)(param_2 + 0xc7c)) ||
         (*(float *)(param_2 + 0xf4) != fVar19)) {
        *(undefined8 *)(param_2 + 0xf0) = *puVar4;
        FUN_1000200a0(plVar1);
      }
      (**(code **)(*plVar1 + 0x28))(plVar1,local_98);
      iVar11 = FUN_1000320e8();
      if (iVar11 != 0) {
        FUN_1003467f8();
        iVar11 = FUN_10034cf58();
        if (iVar11 != 0) {
          plVar2 = (long *)(param_2 + 0x868);
          (**(code **)(*(long *)(param_2 + 0x28) + 0x78))(lVar3,plVar2,1);
          lVar12 = FUN_1003e10f0();
          plVar17 = *(long **)(lVar12 + 0xe8);
          lVar12 = *plVar17;
          while (lVar12 != 0) {
            iVar11 = FUN_1003bb288(param_3);
            FUN_10034cb1c(local_98,*(undefined8 *)*plVar17);
            if (iVar11 == (int)local_98[0]) {
              iVar11 = *(int *)(*plVar17 + 8);
              if (0 < iVar11) {
                pcVar18 = "hud_blitz_coin_friendly";
                if (iVar9 == 0) {
                  pcVar18 = "hud_blitz_coin_enemy";
                }
                do {
                  operator_new(0xf0);
                  local_98[0] = (long *)thunk_FUN_100652c08();
                  FUN_100652cac(local_98[0],PTR_s_build___HUDPartsCommon_atlas_10184e098,pcVar18);
                  if ((*(float *)(local_98[0] + 9) != 0.4) ||
                     (*(float *)((long)local_98[0] + 0x4c) != 0.4)) {
                    local_98[0][9] = 0x3ecccccd3ecccccd;
                    FUN_1000200a0();
                  }
                  local_88 = &DAT_3f0000003f000000;
                  (**(code **)(*local_98[0] + 0x28))(local_98[0],&local_88);
                  FUN_100047df4(param_2 + 0x930,local_98);
                  FUN_100642bd8(plVar2,local_98[0],1);
                  iVar11 = iVar11 + -1;
                } while (iVar11 != 0);
                FUN_10064fc74(0,0x3f000000,0xc1000000,local_98);
                FUN_100650064(plVar2,local_98);
                (**(code **)(*plVar2 + 0x90))(plVar2);
                if (uVar16 == 2) {
                  local_98[0] = (long *)&DAT_3f0000003f000000;
                  if ((*(float *)(param_2 + 0x8a8) != *(float *)(param_2 + 0xc7c)) ||
                     (*(float *)(param_2 + 0x8ac) != *(float *)(param_2 + 0xc80))) {
                    *(undefined8 *)(param_2 + 0x8a8) = *puVar4;
                    FUN_1000200a0(plVar2);
                  }
                }
                else {
                  fVar19 = *(float *)(param_2 + 0xc80) + -24.0;
                  if ((*(float *)(param_2 + 0x8a8) != *(float *)(param_2 + 0xc7c)) ||
                     (*(float *)(param_2 + 0x8ac) != fVar19)) {
                    *(float *)(param_2 + 0x8a8) = *(float *)(param_2 + 0xc7c);
                    *(float *)(param_2 + 0x8ac) = fVar19;
                    FUN_1000200a0(plVar2);
                  }
                  local_98[0] = (long *)&DAT_3f0000003f000000;
                }
                (**(code **)(*plVar2 + 0x28))(plVar2,local_98);
              }
              break;
            }
            plVar17 = plVar17 + 1;
            lVar12 = *plVar17;
          }
        }
      }
    }
    goto LAB_100046eec;
  }
  uVar25 = CONCAT44((float)(DAT_101873a38 >> 0x20) * 0.9,(float)DAT_101873a38 * 0.9);
  uVar25 = uVar25 ^ (uVar25 ^ DAT_101873a38) & CONCAT44(-(uint)(uVar10 != 0),-(uint)(uVar10 != 0));
  lVar12 = param_2 + 0x400;
  fVar19 = *(float *)(param_2 + 0x44c);
  fVar24 = (float)(uVar25 >> 0x20);
  fVar22 = (float)uVar25;
  bVar8 = false;
  if ((*(float *)(param_2 + 0x448) == fVar22) && (bVar8 = false, !NAN(fVar19) && !NAN(fVar24))) {
    bVar8 = fVar19 == fVar24;
  }
  if (!bVar8) {
    *(ulong *)(param_2 + 0x448) = uVar25;
    FUN_1000200a0(lVar12);
  }
  fVar20 = (float)FUN_10007de28(lVar12);
  fVar21 = (float)FUN_10007deb8(lVar12);
  fVar21 = fVar21 * fVar22;
  fVar19 = fVar19 * fVar24;
  fVar24 = fVar19 * -57.0;
  *(float *)(param_2 + 0xc7c) = fVar21 * 30.0;
  *(float *)(param_2 + 0xc80) = fVar24;
  local_98[0] = (long *)&DAT_3f0000003f000000;
  bVar8 = false;
  if ((*(float *)(param_2 + 0xf0) == fVar21 * 30.0) &&
     (bVar8 = false, !NAN(*(float *)(param_2 + 0xf4)) && !NAN(fVar24))) {
    bVar8 = *(float *)(param_2 + 0xf4) == fVar24;
  }
  if (!bVar8) {
    *(undefined8 *)(param_2 + 0xf0) = *puVar4;
    FUN_1000200a0(plVar1);
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,local_98);
  if (*(char *)(*(long *)(param_3 + 0x38) + 0x1ad) != '\0') {
    FUN_100642bf0(plVar2,lVar3,1);
    *(uint *)(param_2 + 0x264) = *(uint *)(param_2 + 0x264) | 4;
    fVar24 = fVar20 * fVar22 * -0.5 + fVar21 * 44.0;
    bVar8 = false;
    if ((*(float *)(param_2 + 0x220) == fVar24) &&
       (bVar8 = false, !NAN(*(float *)(param_2 + 0x224)))) {
      bVar8 = *(float *)(param_2 + 0x224) == -2.0;
    }
    if (!bVar8) {
      *(float *)(param_2 + 0x220) = fVar24;
      *(undefined4 *)(param_2 + 0x224) = 0xc0000000;
      FUN_1000200a0(plVar2);
    }
    local_98[0] = (long *)&DAT_3f0000003f000000;
    (**(code **)(*plVar2 + 0x28))(plVar2,local_98);
  }
  uVar14 = *(uint *)(param_3 + 0x2f4);
  if (iVar9 == 0) {
    uVar13 = DAT_101dc2f40;
    if (((uVar14 >> 1 & 1) != 0) &&
       (iVar11 = FUN_10034ec3c(*(undefined4 *)(param_3 + 0x260)), uVar13 = DAT_101dc2f40,
       iVar11 != 0)) {
      uVar13 = DAT_101dc2f48;
    }
  }
  else if (((((uVar14 >> 1 & 1) == 0) || (uVar13 = DAT_101dc2f38, ((uVar10 ^ 1) & 1) != 0)) &&
           (uVar13 = DAT_101dc2f3c, (uVar14 >> 1 & 1) != 0)) &&
          (iVar11 = FUN_10034ec3c(*(undefined4 *)(param_3 + 0x260)), uVar13 = DAT_101dc2f3c,
          iVar11 != 0)) {
    uVar13 = DAT_101dc2f44;
  }
  local_88 = (undefined1 *)CONCAT44(local_88._4_4_,uVar13);
  FUN_100651460(plVar1,&local_88);
  FUN_100651460(plVar2,&local_88);
  *(undefined4 *)(param_2 + 0xc70) = local_88._0_4_;
  lVar12 = param_2 + 0x548;
  if (iVar9 == 0) {
    iVar11 = FUN_10034cb58();
    uVar14 = *(uint *)(param_2 + 0x5cc);
    if (iVar11 != 0) goto LAB_100046b08;
    uVar15 = 0;
  }
  else {
    uVar14 = *(uint *)(param_2 + 0x5cc);
LAB_100046b08:
    uVar15 = 4;
  }
  *(uint *)(param_2 + 0x5cc) = uVar15 | uVar14 & 0xfffffffb;
  FUN_1000a8538(lVar12);
  fVar24 = fVar20 * fVar22 * -0.5;
  fVar22 = fVar24 + fVar21 * 4.0;
  fVar20 = fVar19 * -17.0;
  bVar8 = false;
  if ((*(float *)(param_2 + 0x588) == fVar22) &&
     (bVar8 = false, !NAN(*(float *)(param_2 + 0x58c)) && !NAN(fVar20))) {
    bVar8 = *(float *)(param_2 + 0x58c) == fVar20;
  }
  if (!bVar8) {
    *(float *)(param_2 + 0x588) = fVar22;
    *(float *)(param_2 + 0x58c) = fVar20;
    FUN_1000200a0(lVar12);
  }
  FUN_100642bf0(lVar12,lVar3,1);
  if ((*(float *)(param_2 + 0x590) != fVar21) || (*(float *)(param_2 + 0x594) != fVar19)) {
    *(float *)(param_2 + 0x590) = fVar21;
    *(float *)(param_2 + 0x594) = fVar19;
    FUN_1000200a0(lVar12);
  }
  iVar11 = FUN_10015d3f8();
  if ((iVar11 != 0) && (lVar12 = FUN_10015d3ec(), *(uint *)(lVar12 + 0x55d0) < 6)) {
    iVar11 = FUN_1003e0ad4(param_3);
    pcVar18 = (char *)0x0;
    switch(iVar11) {
    case 0:
    case 7:
switchD_100046be4_caseD_0:
      pcVar18 = "role_captain";
      break;
    case 1:
      pcVar18 = "role_jungler";
      break;
    case 2:
    case 3:
    case 4:
    case 5:
      pcVar18 = "role_carry";
      break;
    case 6:
      break;
    default:
      if (iVar11 == 0xff) goto switchD_100046be4_caseD_0;
    }
    lVar12 = param_2 + 0x310;
    FUN_100642bf0(lVar12,lVar3,1);
    FUN_100652cac(lVar12,PTR_s_build___HUDPartsCommon_atlas_10184e098,pcVar18);
    puVar5 = &DAT_101dc2f3c;
    if (iVar9 == 0) {
      puVar5 = &DAT_101dc2f40;
    }
    puVar6 = &DAT_101dc2f38;
    if (uVar10 == 0) {
      puVar6 = puVar5;
    }
    FUN_100652dd4(lVar12,puVar6,2);
    fVar24 = fVar24 + fVar21 * -25.0;
    if ((*(float *)(param_2 + 0x350) != fVar24) || (*(float *)(param_2 + 0x354) != 0.0)) {
      *(float *)(param_2 + 0x350) = fVar24;
      *(undefined4 *)(param_2 + 0x354) = 0;
      FUN_1000200a0(lVar12);
    }
    local_98[0] = (long *)&DAT_3f0000003f000000;
    (**(code **)(*(long *)(param_2 + 0x310) + 0x28))(lVar12,local_98);
    if ((*(float *)(param_2 + 0x358) != fVar21) || (*(float *)(param_2 + 0x35c) != fVar19)) {
      *(float *)(param_2 + 0x358) = fVar21;
      *(float *)(param_2 + 0x35c) = fVar19;
      FUN_1000200a0(lVar12);
    }
  }
  FUN_100642bf0(param_2 + 0x940,lVar3,1);
  FUN_100642bf0(param_2 + 0xa30,lVar3,1);
  FUN_100642bf0(param_2 + 0xb20,lVar3,1);
  FUN_100652cac(param_2 + 0x940,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_plaque_level_box")
  ;
  FUN_100651594(param_2 + 0xb20,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228,&DAT_10115a168);
LAB_100046eec:
  if (param_5 != 0) {
    FUN_1000153b4(param_2 + 0xc60);
    FUN_100047228(param_2);
    *(uint *)(param_2 + 0x134) = *(uint *)(param_2 + 0x134) | 4;
  }
  FUN_1003467f8();
  iVar9 = FUN_10034cfa8();
  if (iVar9 != 0) {
    uVar23 = FUN_1004e0150(*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x30),0);
    FUN_1000153b4(param_2 + 0xc60,uVar23);
    FUN_100047228(param_2);
    *(uint *)(param_2 + 0x134) = *(uint *)(param_2 + 0x134) | 4;
  }
  if (uVar16 == 0) {
    pcVar18 = "plaques-hero";
  }
  else {
    local_98[0] = (long *)CONCAT44(local_98[0]._4_4_,0xff88bed1);
    FUN_100651460(plVar1,local_98);
    pcVar18 = "plaques-all";
  }
  iVar9 = FUN_100490188(param_3);
  pcVar7 = "plaques-player";
  if (iVar9 == 0) {
    pcVar7 = pcVar18;
  }
  uVar23 = FUN_100641574(pcVar7);
  (**(code **)(*(long *)(param_2 + 0x28) + 0x80))(lVar3,uVar23,0);
  uVar10 = *(uint *)(param_2 + 0xac);
  uVar16 = uVar10 & 3 | (uint)((*(byte *)(param_3 + 0x2fc) & 0x1f) != 0) << 2;
  *(uint *)(param_2 + 0xac) = uVar10 & 0xfffffff8 | uVar16;
  *(uint *)(param_2 + 0xac) =
       uVar10 & 0xfffffff0 | uVar16 | (uint)((*(byte *)(param_3 + 0x2fc) & 0x1f) != 0) << 3;
  FUN_10064142c(param_2 + 0xc84,param_2 + 0xc88);
  FUN_100047bec(param_2);
  return;
}




void FUN_100047018(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  void *local_38;
  
  uVar1 = FUN_1004e0150(*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x28),0);
  thunk_FUN_1004e439c(auStack_40,uVar1);
  FUN_100046620(param_1,param_2,param_3,1,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void FUN_10004708c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  void *local_38;
  
  uVar1 = FUN_1004e0150(*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x28),0);
  thunk_FUN_1004e439c(auStack_40,uVar1);
  FUN_100046620(param_1,param_2,param_3,5,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void FUN_100047100(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  void *local_38;
  
  uVar1 = FUN_1004e0150(*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x28),0);
  thunk_FUN_1004e439c(auStack_40,uVar1);
  FUN_100046620(param_1,param_2,param_3,6,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void FUN_100047174(undefined8 param_1,undefined8 param_2)

{
  FUN_100046620(param_1,param_2,2,0);
  return;
}




void FUN_100047180(undefined8 param_1,undefined8 param_2)

{
  FUN_100046620(param_1,param_2,3,0);
  return;
}




void FUN_10004718c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  void *local_38;
  
  uVar1 = FUN_1004e0150(*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x28),0);
  thunk_FUN_1004e439c(auStack_40,uVar1);
  FUN_100046620(param_1,param_2,param_3,4,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void FUN_100047200(long param_1)

{
  FUN_1000153b4(param_1 + 0xc60);
  FUN_100047228(param_1);
  return;
}




void FUN_100047228(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0xc58) != 0) {
    if (*(long *)(param_1 + 0xc50) == 0) {
      lVar1 = param_1 + 0xc60;
    }
    else {
      lVar1 = FUN_100034acc();
    }
    FUN_1006513c0(param_1 + 0xb0,lVar1);
    return;
  }
  return;
}




void FUN_100047274(long param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  
  FUN_10007ed18(param_1 + 0x400);
  puVar1 = &DAT_10115a164;
  if ((int)param_2 == 0) {
    puVar1 = (undefined4 *)(param_1 + 0xc70);
  }
  FUN_100651460(param_1 + 0x1e0,puVar1);
  FUN_1000a8818(param_1 + 0x548,param_2);
  return;
}




void FUN_1000472c0(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x28;
  FUN_100642324(param_1);
  uVar1 = FUN_100047300();
  FUN_100642b14(param_1,uVar1);
  uVar1 = FUN_100047398();
  FUN_100642b14(param_1,uVar1);
  return;
}




undefined8 * FUN_100047300(void)

{
  long lVar1;
  undefined8 *puVar2;
  ushort uVar3;
  
  lVar1 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    puVar2 = (undefined8 *)FUN_10063ee9c();
    *puVar2 = &PTR_thunk_FUN_10063eeb4_1014a5338;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  return puVar2;
}




undefined8 * FUN_100047398(void)

{
  long lVar1;
  undefined8 *puVar2;
  ushort uVar3;
  
  lVar1 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    puVar2 = (undefined8 *)FUN_10063ee9c();
    *puVar2 = &PTR_thunk_FUN_10063eeb4_1014a52a8;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  return puVar2;
}




void FUN_100047430(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort *puVar4;
  
  param_2 = param_2 + 0x28;
  FUN_100642324(param_2);
  lVar1 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_10063f0f0(puVar4);
    *(undefined ***)puVar4 = &PTR_thunk_FUN_10063eeb4_1014a5410;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_10063f0e8(param_1,puVar4);
  FUN_10063f130(puVar4,FUN_10001f4ac);
  uVar2 = FUN_100047300();
  FUN_100642b14(param_2,puVar4);
  FUN_100642b14(param_2,uVar2);
  uVar2 = FUN_100047398();
  FUN_100642b14(param_2,uVar2);
  return;
}




void FUN_100047534(undefined8 param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  ushort uVar5;
  ushort *puVar6;
  
  lVar1 = param_2 + 0x28;
  *(uint *)(param_2 + 0xac) = *(uint *)(param_2 + 0xac) | 8;
  FUN_100642324(lVar1);
  uVar4 = FUN_10004767c();
  FUN_100642b14(lVar1,uVar4);
  lVar3 = DAT_101dbd2f8;
  bVar2 = *(byte *)(param_2 + 0xc8c) & 0x1f;
  if (bVar2 < 2) {
    uVar5 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if ((ulong)uVar5 == 0xffff) {
      puVar6 = (ushort *)0x0;
    }
    else {
      puVar6 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar5 * 0x40 + 0x10);
      if (uVar5 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar5 = 0xffff;
      }
      else {
        uVar5 = *puVar6;
      }
      *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar5;
      *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
      FUN_10063f0f0(puVar6);
      *(undefined ***)puVar6 = &PTR_thunk_FUN_10063eeb4_1014a53c8;
      *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    }
    FUN_10063f0e8(param_1,puVar6);
    FUN_10063f130(puVar6,FUN_10001f4c4);
  }
  else {
    if (bVar2 != 2) {
      return;
    }
    puVar6 = (ushort *)FUN_100047714();
    FUN_10063fce0(0x3f800000);
    FUN_10063f0e8(param_1,puVar6);
  }
  FUN_100642b14(lVar1,puVar6);
  return;
}




undefined8 * FUN_10004767c(void)

{
  long lVar1;
  undefined8 *puVar2;
  ushort uVar3;
  
  lVar1 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    puVar2 = (undefined8 *)FUN_10063ee9c();
    *puVar2 = &PTR_thunk_FUN_10063eeb4_1014a52f0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  return puVar2;
}




undefined8 FUN_100047714(void)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  
  lVar1 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    uVar2 = 0;
  }
  else {
    if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    uVar2 = FUN_10063fcac();
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  return uVar2;
}




void FUN_10004779c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_2 + 0x28;
  *(uint *)(param_2 + 0xac) = *(uint *)(param_2 + 0xac) | 8;
  FUN_100642324(lVar1);
  uVar2 = FUN_10004767c();
  FUN_100642b14(lVar1,uVar2);
  if ((*(byte *)(param_2 + 0xc8c) & 0x1f) == 0) {
    uVar2 = FUN_10004767c();
    uVar3 = FUN_100047714();
    FUN_10063fce0(0);
    FUN_100642b14(lVar1,uVar2);
    FUN_100642b14(lVar1,uVar3);
  }
  uVar2 = FUN_100047714();
  FUN_10063fce0(0x3f000000);
  FUN_10063f0e8(param_1,uVar2);
  FUN_100642b14(lVar1,uVar2);
  return;
}




void FUN_100047854(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100034920();
  *(undefined8 *)(param_1 + 0xc50) = uVar1;
  FUN_100047228(param_1);
  return;
}




void FUN_10004787c(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  uint *puVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 *local_a0;
  void *local_98;
  char local_89;
  uint local_88;
  undefined4 uStack_84;
  char local_71;
  
  if (((*(int *)(param_1 + 0x4b0) == 0) && (*(long *)(param_1 + 0xc58) != 0)) &&
     (iVar4 = FUN_100036694(), iVar4 != 0)) {
    lVar5 = FUN_100345d90(param_2);
    FUN_10034ee4c(param_2);
    lVar6 = FUN_1003318a0();
    local_88 = param_4;
    lVar7 = FUN_10011bc70(param_3,lVar6,&local_88);
    uVar9 = local_88;
    if ((lVar5 != 0) && (lVar7 != 0)) {
      lVar1 = param_1 + 0x940;
      uVar8 = FUN_1004654a0(lVar5);
      FUN_100061e08(lVar1,uVar8);
      FUN_10001549c(&local_88,PTR_s_build___HUDPartsCommon_atlas_10184e098);
      iVar4 = FUN_10034cbbc(param_3);
      if (iVar4 != 0) {
        FUN_1000e88b4(&local_a0,*(undefined8 *)(lVar6 + 8));
        std::string::operator=((string *)&local_88,(string *)&local_a0);
        if (local_89 < '\0') {
          operator_delete(local_a0);
        }
      }
      lVar5 = param_1 + 0xa30;
      puVar2 = (uint *)CONCAT44(uStack_84,local_88);
      if (-1 < local_71) {
        puVar2 = &local_88;
      }
      FUN_100652d20(lVar5,puVar2,lVar7);
      if ((*(float *)(param_1 + 0xa78) != 1.0) || (*(float *)(param_1 + 0xa7c) != 1.0)) {
        uVar8 = NEON_fmov(0x3f800000,4);
        *(undefined8 *)(param_1 + 0xa78) = uVar8;
        FUN_1000200a0(lVar5);
      }
      fVar10 = (float)FUN_10065317c(lVar5);
      fVar11 = (float)FUN_100652e60(lVar1);
      fVar10 = fVar10 / fVar11;
      bVar3 = false;
      if ((*(float *)(param_1 + 0x988) == fVar10) &&
         (bVar3 = false, !NAN(*(float *)(param_1 + 0x98c)) && !NAN(fVar10))) {
        bVar3 = *(float *)(param_1 + 0x98c) == fVar10;
      }
      if (!bVar3) {
        *(float *)(param_1 + 0x988) = fVar10;
        *(float *)(param_1 + 0x98c) = fVar10;
        FUN_1000200a0(lVar1);
      }
      fVar10 = (float)FUN_10007de28(param_1 + 0x400);
      fVar12 = -0.25;
      fVar13 = *(float *)(param_1 + 0xf4);
      FUN_100651184(param_1 + 0xb0);
      fVar11 = fVar12;
      FUN_100652e60(lVar1);
      fVar11 = fVar13 + (fVar11 + fVar12) * -0.5 + -5.0;
      if ((*(float *)(param_1 + 0x980) != fVar10 * -0.25) || (*(float *)(param_1 + 0x984) != fVar11)
         ) {
        *(float *)(param_1 + 0x980) = fVar10 * -0.25;
        *(float *)(param_1 + 0x984) = fVar11;
        FUN_1000200a0(lVar1);
      }
      local_a0 = &DAT_3f0000003f000000;
      (**(code **)(*(long *)(param_1 + 0x940) + 0x28))(lVar1,&local_a0);
      fVar11 = (float)FUN_10007de28(param_1 + 0x400);
      if ((*(float *)(param_1 + 0xa70) != fVar11 * 0.25) ||
         (*(float *)(param_1 + 0xa74) != *(float *)(param_1 + 0x984))) {
        *(float *)(param_1 + 0xa70) = fVar11 * 0.25;
        *(float *)(param_1 + 0xa74) = *(float *)(param_1 + 0x984);
        FUN_1000200a0(lVar5);
      }
      local_a0 = &DAT_3f0000003f000000;
      (**(code **)(*(long *)(param_1 + 0xa30) + 0x28))(lVar5,&local_a0);
      lVar6 = param_1 + 0xb20;
      fVar10 = *(float *)(param_1 + 0xa70);
      fVar11 = (float)FUN_10065317c(lVar5);
      fVar11 = fVar10 + 5.0 + fVar11 * 0.5;
      if ((*(float *)(param_1 + 0xb60) != fVar11) ||
         (*(float *)(param_1 + 0xb64) != *(float *)(param_1 + 0xa74))) {
        *(float *)(param_1 + 0xb60) = fVar11;
        *(float *)(param_1 + 0xb64) = *(float *)(param_1 + 0xa74);
        FUN_1000200a0(lVar6);
      }
      local_a0 = (undefined1 *)0x3f00000000000000;
      (**(code **)(*(long *)(param_1 + 0xb20) + 0x28))(lVar6,&local_a0);
      *(uint *)(param_1 + 0x9c4) = *(uint *)(param_1 + 0x9c4) | 4;
      *(uint *)(param_1 + 0xab4) = *(uint *)(param_1 + 0xab4) | 4;
      if (uVar9 < 2) {
        uVar9 = 0;
      }
      else {
        FUN_1004e313c(&local_a0);
        FUN_1004e38ac(&local_a0,"x%d");
        FUN_1006513c0(lVar6,&local_a0);
        if (local_98 != (void *)0x0) {
          operator_delete__(local_98);
        }
        uVar9 = 4;
      }
      *(uint *)(param_1 + 0xba4) = *(uint *)(param_1 + 0xba4) & 0xfffffffb | uVar9;
      *(undefined4 *)(param_1 + 0xc78) = 0x40000000;
      if (local_71 < '\0') {
        operator_delete((void *)CONCAT44(uStack_84,local_88));
      }
    }
  }
  return;
}




void FUN_100047bec(long param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float local_40;
  float fStack_3c;
  undefined1 auStack_30 [16];
  
  iVar2 = FUN_1000320e8();
  if (iVar2 == 0) {
    return;
  }
  FUN_1003c658c(*(undefined8 *)(param_1 + 0xc58),&DAT_101dc2f4c,auStack_30);
  FUN_10011a174(&local_40,auStack_30,0);
  lVar5 = param_1 + 0x28;
  lVar3 = FUN_10003d5bc(lVar5);
  uVar7 = *(undefined8 *)(lVar3 + 0x10);
  uVar1 = (ulong)_local_40 >> 0x20;
  fVar6 = (float)((ulong)uVar7 >> 0x20);
  local_40 = (float)(int)((float)uVar7 * (float)_local_40) / (float)uVar7;
  fStack_3c = (float)(int)(fVar6 * (float)uVar1) / fVar6;
  fVar6 = (float)(**(code **)(*(long *)(param_1 + 0x28) + 0x50))(lVar5);
  fVar8 = local_40 + fVar6 * -0.5;
  if (fVar8 <= *(float *)(param_1 + 0xc84)) {
    fVar9 = fStack_3c + (float)uVar7 * -0.5;
    if (((fVar9 <= *(float *)(param_1 + 0xc88)) && (0.0 <= fVar8 + fVar6)) &&
       (0.0 <= fVar9 + (float)uVar7)) {
      *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 8;
      *(uint *)(param_1 + 0x484) = *(uint *)(param_1 + 0x484) | 8;
      if ((*(float *)(param_1 + 0x68) != local_40) || (*(float *)(param_1 + 0x6c) != fStack_3c)) {
        *(float *)(param_1 + 0x68) = local_40;
        *(float *)(param_1 + 0x6c) = fStack_3c;
        FUN_1000200a0(lVar5);
      }
      if (*(int *)(param_1 + 0x4b0) == 4) {
        iVar2 = FUN_100345bbc(*(undefined8 *)(param_1 + 0xc58));
        if (iVar2 == 0) {
          lVar5 = *(long *)(*(long *)(param_1 + 0xc58) + 0x40);
          fVar6 = *(float *)(lVar5 + 0x38) +
                  *(float *)(lVar5 + 0xec) * (*(float *)(lVar5 + 0x254) + 1.0);
          NEON_fminnm(fVar6 + fVar6 * *(float *)(lVar5 + 0x1a0),DAT_101dc3030);
          if (DAT_101dc2f70 <= *(float *)(lVar5 + 0x308)) {
            FUN_1003467f8();
            iVar2 = FUN_10034cfa8();
            lVar5 = *(long *)(*(long *)(param_1 + 0xc58) + 0x38);
            if (iVar2 == 0) {
              pcVar4 = *(char **)(lVar5 + 0x28);
            }
            else {
              pcVar4 = *(char **)(lVar5 + 0x30);
            }
          }
          else {
            pcVar4 = "HUD_PLAQUE_CAPTURING";
          }
          uVar7 = FUN_1004e0150(pcVar4,0);
          FUN_1006513c0(param_1 + 0xb0,uVar7);
        }
      }
      else if (*(int *)(param_1 + 0x4b0) == 0) {
        FUN_100047f5c(param_1);
        FUN_100048078(param_1);
      }
      goto LAB_100047c90;
    }
  }
  *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) & 0xfffffff7;
  *(uint *)(param_1 + 0x484) = *(uint *)(param_1 + 0x484) & 0xfffffff7;
LAB_100047c90:
  if ((*(byte *)(param_1 + 0xc90) & 1) != 0) {
    FUN_10007def8(param_1 + 0x400,1);
    FUN_10007ecd0(param_1 + 0x400,*(undefined8 *)(param_1 + 0xc50));
  }
  return;
}




void FUN_100047df4(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100048210(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_100047e74(long param_1)

{
  FUN_10064142c(param_1 + 0xc84,param_1 + 0xc88);
  return;
}




void FUN_100047e84(long param_1)

{
  if ((*(byte *)(param_1 + 0xc90) & 1) == 0) {
    return;
  }
  FUN_10007dc1c(param_1 + 0x400);
  return;
}




void FUN_100047e98(long param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)(param_1 + 0xc58);
  if ((lVar2 != 0) &&
     ((uVar3 = (ulong)*(ushort *)(lVar2 + 0x88) & 0x1f, (int)uVar3 == 0x1f ||
      (1 < *(ushort *)(lVar2 + uVar3 * 0x38 + 0x90) - 3)))) {
    bVar1 = *param_2;
    if ((bVar1 & 0x1f) == 2) {
      if ((bVar1 >> 6 & 1) == 0) {
        FUN_10004779c(0x3da3d70a,param_1);
      }
    }
    else if ((bVar1 & 0x1f) == 1) {
      if ((bVar1 >> 6 & 1) == 0) {
        FUN_100047534(0x3da3d70a,param_1);
      }
    }
    else if ((bVar1 & 0x1f) == 0) {
      FUN_100047430(0x3da3d70a,param_1);
    }
    bVar1 = *param_2;
    if ((bVar1 >> 6 & 1) != 0) {
      FUN_1000472c0(param_1);
      bVar1 = *param_2;
    }
    *(byte *)(param_1 + 0xc8c) = bVar1;
  }
  return;
}




void FUN_100047f5c(long param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  
  uVar2 = DAT_101dc30d0;
  fVar1 = DAT_101dc3010;
  lVar4 = *(long *)(*(long *)(param_1 + 0xc58) + 0x40);
  fVar5 = *(float *)(lVar4 + 0xd8) + *(float *)(lVar4 + 0x18c) * (*(float *)(lVar4 + 0x2f4) + 1.0);
  NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar4 + 0x240),DAT_101dc30d0);
  if ((int)DAT_101dc3010 != (*(ushort *)(param_1 + 0xc90) >> 1 & 0xff)) {
    *(ushort *)(param_1 + 0xc90) =
         (ushort)(((int)DAT_101dc3010 & 0xffU) << 1) | *(ushort *)(param_1 + 0xc90) & 0xfe01;
    if (((DAT_101dc2f60 & 1) == 0) &&
       (iVar3 = ___cxa_guard_acquire(fVar1,fVar1,uVar2,0x3f800000,&DAT_101dc2f60), iVar3 != 0)) {
      FUN_1004e313c(&DAT_101dc2f50);
      ___cxa_atexit(FUN_100046198,&DAT_101dc2f50,0x100000000);
      ___cxa_guard_release(&DAT_101dc2f60);
    }
    FUN_1004e38ac(&DAT_101dc2f50,"%d");
    FUN_1006513c0(param_1 + 0x1e0,&DAT_101dc2f50);
    return;
  }
  return;
}




void FUN_100048078(long param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  
  uVar4 = FUN_1003a2d9c(*(undefined8 *)(param_1 + 0xc58));
  if (((uVar4 & 1) != 0) || (iVar2 = FUN_10034cb58(), iVar2 != 0)) {
    for (lVar6 = *(long *)(*(long *)(param_1 + 0xc58) + 0x18); lVar6 != 0;
        lVar6 = *(long *)(lVar6 + 0x20)) {
      if (*(int *)(*(long *)(lVar6 + 8) + 0xa4) == DAT_10184dab8) {
        iVar2 = FUN_100346244(lVar6);
        if (iVar2 == 0) {
          return;
        }
        uVar7 = 0;
        do {
          iVar2 = FUN_1003e1178(lVar6,uVar7);
          if (iVar2 != 0) {
            iVar2 = FUN_1003b2aa0(lVar6,uVar7);
            if (iVar2 == 0) {
              bVar1 = false;
            }
            else {
              iVar2 = FUN_1003b2a7c(lVar6,uVar7);
              bVar1 = iVar2 == 0;
            }
            uVar5 = FUN_1003a2edc(lVar6,uVar7);
            FUN_1000a870c(param_1 + 0x548,uVar5,bVar1);
            return;
          }
          uVar7 = uVar7 + 1;
          uVar3 = FUN_100346244(lVar6);
        } while (uVar7 < uVar3);
        return;
      }
    }
  }
  return;
}




void FUN_10004816c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10064e2bc();
  operator_delete(pvVar1);
  return;
}




void FUN_100048180(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10144cbe8;
  param_1[0x46] = &PTR_FUN_1014a7108;
  param_1[0x5d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x60);
  FUN_10064e2bc(param_1 + 0x46);
  param_1[0x28] = &PTR_FUN_1014a7108;
  param_1[0x3f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x42);
  FUN_10064e2bc(param_1 + 0x28);
  pvVar1 = (void *)FUN_10064221c(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 * thunk_FUN_100046010(undefined8 *param_1)

{
  undefined1 *puStack_40;
  void *pvStack_38;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1006421a8(param_1 + 5);
  *param_1 = &PTR_thunk_FUN_1000461c8_10144c968;
  param_1[5] = &PTR_FUN_10144c9a0;
  thunk_FUN_100650f44(param_1 + 0x16,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220);
  thunk_FUN_100650f44(param_1 + 0x3c,PTR_s_build___Fonts_Brandon_Bold_24_fo_10184e218);
  thunk_FUN_100652c08(param_1 + 0x62);
  thunk_FUN_10007d664(param_1 + 0x80);
  thunk_FUN_1000a81b0(param_1 + 0xa9);
  FUN_10064fd54(param_1 + 0x10d,0);
  param_1[0x10d] = &PTR_thunk_FUN_10064e2bc_10144caa0;
  param_1[0x127] = 0;
  param_1[0x126] = 0;
  thunk_FUN_100652c08(param_1 + 0x128);
  thunk_FUN_100652c08(param_1 + 0x146);
  thunk_FUN_100650e64(param_1 + 0x164);
  param_1[0x18b] = 0;
  param_1[0x18a] = 0;
  FUN_1004e313c(param_1 + 0x18c);
  *(undefined4 *)(param_1 + 0x18e) = 0xff000000;
  *(undefined8 *)((long)param_1 + 0xc74) = 0xbf80000000000000;
  *(undefined8 *)((long)param_1 + 0xc7c) = DAT_101dc1cb8;
  FUN_10034cbcc((long)param_1 + 0xc8c);
  *(ushort *)(param_1 + 0x192) = *(ushort *)(param_1 + 0x192) & 0xfe00 | 2;
  puStack_40 = &DAT_3f0000003f000000;
  (**(code **)(param_1[5] + 0x28))(param_1 + 5,&puStack_40);
  *(uint *)((long)param_1 + 0xac) = *(uint *)((long)param_1 + 0xac) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x264) = *(uint *)((long)param_1 + 0x264) & 0xfffffffb;
  FUN_1004e3120(&puStack_40,"1");
  FUN_1006513c0(param_1 + 0x3c,&puStack_40);
  if (pvStack_38 != (void *)0x0) {
    operator_delete__(pvStack_38);
  }
  return param_1;
}




void FUN_100048204(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010004820c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_100048210(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_10004828c(void)

{
  if ((DAT_10184db70 & 1) == 0) {
    DAT_10184db68 = DAT_101872e38;
    DAT_10184db70 = 1;
  }
  return;
}




void FUN_1000482b8(void)

{
  if ((DAT_10184dac0 & 1) == 0) {
    DAT_10184dab8 = DAT_101872e38;
    DAT_10184dac0 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000482e4(void)

{
  DAT_101dc2dc0 = 0xff;
  DAT_101dc2dc2 = 0xffff;
  DAT_101dc2dc4 = 0xffff;
  DAT_101dc2dc6 = 0xffbc9c44;
  DAT_101dc2dca = 0xff1166f2;
  DAT_101dc2dce = 0xffe0e0e0;
  DAT_101dc2dd2 = 0xffa0a0a0;
  DAT_101dc2dd6 = 0xff8c8c8c;
  DAT_101dc2dda = 0xff322213;
  DAT_101dc2dde = 0xff091911;
  DAT_101dc2de2 = 0xff170c19;
  DAT_101dc2de6 = 0xff241a14;
  DAT_101dc2dea = 0xff14171c;
  DAT_101dc2dee = 0xff221911;
  DAT_101dc2df2 = 0xff1a1416;
  DAT_101dc2df6 = 0xff121414;
  DAT_101dc2dfa = 0xff1a1809;
  DAT_101dc2dfe = 0xff141414;
  DAT_101dc2e02 = 0xff141414;
  DAT_101dc2e06 = 0xff2929c0;
  DAT_101dc2e0a = 0xff283082;
  DAT_101dc2e0e = 0xff5262cc;
  DAT_101dc2e12 = 0xff283082;
  DAT_101dc2e16 = 0xff5262cc;
  DAT_101dc2e1a = 0xff745c42;
  DAT_101dc2e1e = 0xff184155;
  DAT_101dc2e22 = 0xff92665e;
  DAT_101dc2e26 = 0xffbc9c44;
  DAT_101dc2e2a = 0xffbbae56;
  DAT_101dc2e2e = 0xff8b7b01;
  DAT_101dc2e32 = 0xff90b3ef;
  DAT_101dc2e36 = 0xff728ebe;
  DAT_101dc2e3a = 0xff19459d;
  DAT_101dc2e3e = 0xff9d877b;
  DAT_101dc2e42 = 0xffcbb1a3;
  DAT_101dc2e46 = 0xff3f6fb5;
  DAT_101dc2e4a = 0xffc5c5c5;
  DAT_101dc2e4e = 0xff4fc1f1;
  DAT_101dc2e52 = 0xff606060;
  DAT_101dc2e56 = 0xffc5ff7b;
  DAT_101dc2e5a = 0xff5271eb;
  DAT_101dc2e5e = 0xfffae076;
  DAT_101dc2e62 = 0xff3ac8f6;
  DAT_101dc2e66 = 0xffaaaaaa;
  DAT_101dc2e6a = 0xffe19400;
  DAT_101dc2e6e = 0xffe19400;
  DAT_101dc2e72 = 0xffe550b2;
  DAT_101dc2e76 = 0xfff22ae8;
  DAT_101dc2e7a = 0xff005ae1;
  DAT_101dc2e7e = 0xff1addfa;
  DAT_101dc2e82 = 0xff2424b3;
  DAT_101dc2e86 = 0xff2424b3;
  DAT_101dc2e8a = 0xff646464;
  DAT_101dc2e8e = 0xff92665e;
  DAT_101dc2e92 = 0xff646037;
  DAT_101dc2e98 = 0xffffffff;
  DAT_101dc2e9c = 0xff1111a1;
  DAT_101dc2ea0 = 0xff321ee1;
  DAT_101dc2ea4 = 0xffc8c8c8;
  DAT_101dc2ea8 = 0xff321ee1;
  DAT_101dc2eac = 0xff7fe801;
  DAT_101dc2eb0 = 0xffffffff;
  DAT_101dc2eb4 = 0xff6259b3;
  DAT_101dc2eb8 = 0xff506e73;
  DAT_101dc2ebc = 0xff9dbf86;
  DAT_101dc2ec0 = 0xffa35244;
  DAT_101dc2ec4 = 0xffca828e;
  DAT_101dc2ec8 = 0xffa6a6a6;
  DAT_101dc2ecc = 0xffa6a6a6;
  DAT_101dc2ed0 = 0xffffffff;
  DAT_101dc2ed4 = 0xff88ea2f;
  DAT_101dc2ed8 = 0xff8c8c8c;
  DAT_101dc2edc = 0xffffb400;
  DAT_101dc2ee0 = 0xffff00ff;
  DAT_101dc2ee4 = 0xff00aded;
  DAT_101dc2ee8 = 0xff33d3ff;
  DAT_101dc2eec = 0xff7fe801;
  DAT_101dc2ef0 = 0xff282828;
  DAT_101dc2ef4 = 0xfff0f0f0;
  DAT_101dc2ef8 = 0xffa4781e;
  DAT_101dc2efc = 0xffa6654b;
  DAT_101dc2f00 = 0xff93435b;
  DAT_101dc2f04 = 0xff387f9c;
  DAT_101dc2f08 = 0xffa3781e;
  DAT_101dc2f0c = 0xffffd18a;
  DAT_101dc2f10 = 0xffff61f7;
  DAT_101dc2f14 = 0xff5de1f2;
  DAT_101dc2f18 = 0xff80eaff;
  DAT_101dc2f1c = 0xff32e00e;
  DAT_101dc2f20 = 0xff5a3c10;
  DAT_101dc2f24 = 0xff330b03;
  DAT_101dc2f28 = 0xff33031d;
  DAT_101dc2f2c = 0xff032433;
  DAT_101dc2f30 = 0xff9e8e8d;
  uRam0000000101dc3038 = 0x7f7fffff7f7fffff;
  _DAT_101dc3030 = 0x7f7fffff7f7fffff;
  uRam0000000101dc3048 = 0x7f7fffff7f7fffff;
  _DAT_101dc3040 = 0x7f7fffff7f7fffff;
  uRam0000000101dc3058 = 0x7f7fffff7f7fffff;
  _DAT_101dc3050 = 0x7f7fffff7f7fffff;
  uRam0000000101dc3068 = 0x7f7fffff7f7fffff;
  _DAT_101dc3060 = 0x7f7fffff7f7fffff;
  DAT_101dc3070 = 0x7f7fffff;
  DAT_101dc3074 = 0x7f7fffff;
  DAT_101dc3078 = 0x7f7fffff;
  DAT_101dc307c = 0x3f800000;
  uRam0000000101dc3088 = 0x7f7fffff7f7fffff;
  _DAT_101dc3080 = 0x7f7fffff7f7fffff;
  DAT_101dc3090 = 0x7f7fffff;
  DAT_101dc3094 = 0x3eb33333;
  uRam0000000101dc30a0 = 0x7f7fffff7f7fffff;
  _DAT_101dc3098 = 0x7f7fffff7f7fffff;
  uRam0000000101dc30b0 = 0x7f7fffff7f7fffff;
  _DAT_101dc30a8 = 0x7f7fffff7f7fffff;
  uRam0000000101dc30c0 = 0x7f7fffff7f7fffff;
  _DAT_101dc30b8 = 0x7f7fffff7f7fffff;
  _DAT_101dc30d0 = 0x7f7fffff7f7fffff;
  _DAT_101dc30c8 = 0x7f7fffff7f7fffff;
  DAT_101dc30d8 = 0x7f7fffff;
  DAT_101dc30dc = 0x7f7fffff;
  DAT_101dc30e0 = 0x7f7fffff;
  uRam0000000101dc2f78 = 0xff7fffffff7fffff;
  _DAT_101dc2f70 = 0xff7fffffff7fffff;
  DAT_101dc2f80 = 0;
  DAT_101dc2f88 = 0;
  uRam0000000101dc2f94 = 0xff7fffffff7fffff;
  _DAT_101dc2f8c = 0xff7fffffff7fffff;
  DAT_101dc2f9c = 0xff7fffff;
  DAT_101dc2fa0 = 0xff7fffff;
  DAT_101dc2fa4 = NEON_fmov(0xbf800000,4);
  DAT_101dc2fac = 0x3f000000;
  DAT_101dc2fb0 = 0;
  DAT_101dc2fb8 = 0;
  uRam0000000101dc2fc8 = 0xff7fffffff7fffff;
  _DAT_101dc2fc0 = 0xff7fffffff7fffff;
  uRam0000000101dc2fd8 = 0xff7fffffff7fffff;
  _DAT_101dc2fd0 = 0xff7fffffff7fffff;
  uRam0000000101dc2fe8 = 0xff7fffffff7fffff;
  _DAT_101dc2fe0 = 0xff7fffffff7fffff;
  uRam0000000101dc2ff8 = 0xbf800000bf800000;
  _DAT_101dc2ff0 = 0xbf80000000000000;
  DAT_101dc3000 = 0xbf800000;
  DAT_101dc3004 = 0xff7fffff;
  DAT_101dc3008 = 0xff7fffff;
  DAT_101dc300c = 0xff7fffff;
  DAT_101dc3010 = 0;
  DAT_101dc3014 = 0xff7fffff;
  DAT_101dc3018 = 0;
  DAT_101dc3020 = 0;
  DAT_101dc2f34 = 0xffe6e6e6;
  DAT_101dc2f38 = 0xffebeec0;
  DAT_101dc2f3c = 0xffe4ba60;
  DAT_101dc2f40 = 0xff7da4f3;
  DAT_101dc2f44 = 0xffb4a22b;
  DAT_101dc2f48 = 0xff0c48d4;
  DAT_101dc2f4c = 0x8a7eaf5d;
  return;
}




void FUN_100048ae8(void)

{
  DAT_101dc30e8 = 0xff;
  DAT_101dc30ea = 0xffff;
  DAT_101dc30ec = 0xffff;
  DAT_101dc30ee = 0xffbc9c44;
  DAT_101dc30f2 = 0xff1166f2;
  DAT_101dc30f6 = 0xffe0e0e0;
  DAT_101dc30fa = 0xffa0a0a0;
  DAT_101dc30fe = 0xff8c8c8c;
  DAT_101dc3102 = 0xff322213;
  DAT_101dc3106 = 0xff091911;
  DAT_101dc310a = 0xff170c19;
  DAT_101dc310e = 0xff241a14;
  DAT_101dc3112 = 0xff14171c;
  DAT_101dc3116 = 0xff221911;
  DAT_101dc311a = 0xff1a1416;
  DAT_101dc311e = 0xff121414;
  DAT_101dc3122 = 0xff1a1809;
  DAT_101dc3126 = 0xff141414;
  DAT_101dc312a = 0xff141414;
  DAT_101dc312e = 0xff2929c0;
  DAT_101dc3132 = 0xff283082;
  DAT_101dc3136 = 0xff5262cc;
  DAT_101dc313a = 0xff283082;
  DAT_101dc313e = 0xff5262cc;
  DAT_101dc3142 = 0xff745c42;
  DAT_101dc3146 = 0xff184155;
  DAT_101dc314a = 0xff92665e;
  DAT_101dc314e = 0xffbc9c44;
  DAT_101dc3152 = 0xffbbae56;
  DAT_101dc3156 = 0xff8b7b01;
  DAT_101dc315a = 0xff90b3ef;
  DAT_101dc315e = 0xff728ebe;
  DAT_101dc3162 = 0xff19459d;
  DAT_101dc3166 = 0xff9d877b;
  DAT_101dc316a = 0xffcbb1a3;
  DAT_101dc316e = 0xff3f6fb5;
  DAT_101dc3172 = 0xffc5c5c5;
  DAT_101dc3176 = 0xff4fc1f1;
  DAT_101dc317a = 0xff606060;
  DAT_101dc317e = 0xffc5ff7b;
  DAT_101dc3182 = 0xff5271eb;
  DAT_101dc3186 = 0xfffae076;
  DAT_101dc318a = 0xff3ac8f6;
  DAT_101dc318e = 0xffaaaaaa;
  DAT_101dc3192 = 0xffe19400;
  DAT_101dc3196 = 0xffe19400;
  DAT_101dc319a = 0xffe550b2;
  DAT_101dc319e = 0xfff22ae8;
  DAT_101dc31a2 = 0xff005ae1;
  DAT_101dc31a6 = 0xff1addfa;
  DAT_101dc31aa = 0xff2424b3;
  DAT_101dc31ae = 0xff2424b3;
  DAT_101dc31b2 = 0xff646464;
  DAT_101dc31b6 = 0xff92665e;
  DAT_101dc31ba = 0xff646037;
  DAT_101dc31c4 = 0xff1111a1;
  DAT_101dc31c8 = 0xff321ee1;
  DAT_101dc31cc = 0xffc8c8c8;
  DAT_101dc31d0 = 0xff321ee1;
  DAT_101dc31dc = 0xff6259b3;
  DAT_101dc31e0 = 0xff506e73;
  DAT_101dc31e4 = 0xff9dbf86;
  DAT_101dc31c0 = 0xffffffff;
  DAT_101dc31e8 = 0xffa35244;
  DAT_101dc31d4 = 0xff7fe801;
  DAT_101dc31ec = 0xffca828e;
  DAT_101dc31d8 = 0xffffffff;
  DAT_101dc31f0 = 0xffa6a6a6;
  DAT_101dc31f4 = 0xffa6a6a6;
  DAT_101dc31f8 = 0xffffffff;
  DAT_101dc31fc = 0xff88ea2f;
  DAT_101dc3200 = 0xff8c8c8c;
  DAT_101dc3204 = 0xffffb400;
  DAT_101dc3208 = 0xffff00ff;
  DAT_101dc320c = 0xff00aded;
  DAT_101dc3210 = 0xff33d3ff;
  DAT_101dc3214 = 0xff7fe801;
  DAT_101dc3218 = 0xff282828;
  DAT_101dc321c = 0xfff0f0f0;
  DAT_101dc3220 = 0xffa4781e;
  DAT_101dc3224 = 0xffa6654b;
  DAT_101dc3228 = 0xff93435b;
  DAT_101dc322c = 0xff387f9c;
  DAT_101dc3230 = 0xffa3781e;
  DAT_101dc3234 = 0xffffd18a;
  DAT_101dc3238 = 0xffff61f7;
  DAT_101dc323c = 0xff5de1f2;
  DAT_101dc3240 = 0xff80eaff;
  DAT_101dc3244 = 0xff32e00e;
  DAT_101dc3248 = 0xff5a3c10;
  DAT_101dc324c = 0xff330b03;
  DAT_101dc3250 = 0xff33031d;
  DAT_101dc3254 = 0xff032433;
  DAT_101dc3258 = 0xff9e8e8d;
  FUN_1004e3120(&DAT_101dc3260,"Error - No text specified");
  ___cxa_atexit(FUN_100046198,&DAT_101dc3260,0x100000000);
  return;
}




void FUN_1000491e0(long param_1)

{
  long lVar1;
  
  DAT_10184dca8 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184dca8 + 1;
  lVar1 = param_1 + (ulong)DAT_10184dca8 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_1000492a0;
  *(code **)(lVar1 + 0xb8) = FUN_1000492b0;
  *(uint *)(lVar1 + 0xa4) = DAT_10184dca8;
  *(undefined4 *)(lVar1 + 0xa8) = 0x28;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 1;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0990(param_1,0xdc302c4,FUN_100049284,0);
  FUN_1010a0990(param_1,0x163803be,FUN_100049294,0);
  return;
}




void FUN_100049284(void)

{
  FUN_100125fdc(0x3ecccccd,0x40000000);
  return;
}




void FUN_100049294(void)

{
  FUN_100125fdc(0x3f800000,0x3f800000);
  return;
}




void FUN_1000492a0(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1010a0064_10144cce8;
  return;
}




void FUN_1000492b0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000492b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_1000492c0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1010a0064();
  operator_delete(pvVar1);
  return;
}




void FUN_1000492d4(void)

{
  if ((DAT_10184dcb0 & 1) == 0) {
    DAT_10184dca8 = DAT_101872e38;
    DAT_10184dcb0 = 1;
  }
  return;
}




undefined8 FUN_100049300(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1000bdb98();
  FUN_1004e18bc(uVar1,param_1,0xb3cf6e0d,FUN_100049360,0);
  uVar1 = FUN_1000bdb98();
  FUN_1004e18bc(uVar1,param_1,0xd1bb1e68,FUN_10004938c,0);
  return param_1;
}




void FUN_100049360(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  FUN_1000493d0(param_1,in_stack_00000000);
  return;
}




void FUN_10004938c(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  FUN_100049514(param_1,in_stack_00000000,*(int *)((ulong)&stack0x00000000 | 8) != 0,
                ((int *)((ulong)&stack0x00000000 | 8))[2] != 0);
  return;
}




void FUN_1000493d0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined4 local_24;
  
  FUN_100201f80(param_2);
  iVar1 = FUN_1000494b4();
  if (iVar1 != 0) {
    iVar1 = FUN_10012709c();
    if (iVar1 == 0) {
      local_24 = 3;
      FUN_1002027b0(param_2,&local_24);
    }
    else {
      local_24 = 0;
      FUN_1002027b0(param_2,&local_24);
      local_24 = 0;
      FUN_100202844(param_2,&local_24);
    }
  }
  iVar1 = FUN_10016c2fc();
  if ((iVar1 != 0) && (lVar2 = FUN_10016c2f0(), 0 < *(int *)(lVar2 + 0x38))) {
    lVar2 = FUN_10016c2f0();
    switch(*(undefined4 *)(lVar2 + 0x38)) {
    case 1:
      local_24 = 0xb;
      break;
    case 2:
    case 3:
      local_24 = 0xc;
      break;
    case 4:
    case 5:
      local_24 = 0xd;
      break;
    case 6:
    case 7:
    case 8:
    case 9:
      local_24 = 0xe;
      break;
    default:
      goto switchD_100049474_default;
    }
    FUN_1002027b0(param_2,&local_24);
  }
switchD_100049474_default:
  return;
}




ulong FUN_1000494b4(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_1004eef10();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  uVar2 = FUN_1004eef24();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = FUN_10030c68c();
  if (iVar1 != 0) {
    FUN_10030c6a0();
    uVar2 = FUN_10030cf08();
    if ((uVar2 & 1) != 0) {
      return 0;
    }
  }
  uVar2 = FUN_100131560();
  if (((uVar2 & 1) == 0) && (uVar2 = FUN_1004f034c(), (uVar2 & 1) == 0)) {
    lVar3 = FUN_10015d3ec();
    return (ulong)(*(int *)(lVar3 + 0x55e0) == 0);
  }
  return 0;
}




void FUN_100049514(undefined8 param_1,long param_2,ulong param_3,uint param_4)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  
  if ((param_3 & 1) == 0) {
    *(undefined1 *)(param_2 + 0x31) = 0;
    FUN_1001f372c(param_2,0,0);
    uVar5 = 0;
  }
  else {
    iVar4 = FUN_10030c68c();
    if (iVar4 == 0) {
      uVar5 = 1;
    }
    else {
      FUN_10030c6a0();
      uVar5 = FUN_10030cf08();
      uVar5 = uVar5 ^ 1;
    }
    iVar4 = FUN_100049628();
    if (iVar4 == 0) {
      FUN_1001f3750(param_2,0);
      lVar6 = FUN_10015d3ec();
      uVar1 = *(uint *)(lVar6 + 0x55d0);
      FUN_10032523c();
      iVar4 = FUN_1003252f0();
      if (iVar4 == 1) {
        bVar3 = true;
      }
      else {
        FUN_10032523c();
        iVar4 = FUN_1003252f0();
        bVar3 = iVar4 == 2;
      }
      lVar6 = FUN_10031ffe0();
      cVar2 = *(char *)(lVar6 + 0x70);
      uVar7 = FUN_100131560();
      uVar8 = 0;
      if (((uVar7 & 1) == 0) && (!bVar3)) {
        uVar8 = (param_4 | uVar1 < 4) & (uint)(cVar2 == '\0') & uVar5;
      }
      *(char *)(param_2 + 0x31) = (char)uVar8;
      FUN_1001f372c(param_2,uVar8,0);
      return;
    }
  }
  FUN_1001f3750(param_2,uVar5);
  return;
}




ulong FUN_100049628(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_1000494b4();
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_1004eef10();
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    uVar2 = FUN_1004eef24();
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    uVar2 = FUN_1004f034c();
    if (((uVar2 & 1) == 0) &&
       ((iVar1 = FUN_10016c2fc(), iVar1 == 0 ||
        (lVar3 = FUN_10016c2f0(), *(int *)(lVar3 + 0x38) < 1)))) {
      uVar4 = FUN_100327578();
      uVar2 = FUN_10030a7ec();
      if ((int)uVar2 == 0) {
        return uVar2;
      }
      uVar2 = FUN_10030a86c(uVar4);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
      iVar1 = FUN_10030a7f4(uVar4);
      return (ulong)(iVar1 == 0);
    }
  }
  return 0;
}




void FUN_1000496ac(void)

{
  operator_new(1);
  DAT_101dc3270 = FUN_100049300();
  return;
}




void FUN_1000496d0(void)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = DAT_101dc3270;
  if (DAT_101dc3270 != (void *)0x0) {
    uVar2 = FUN_1000bdb98();
    FUN_1004e1b58(uVar2,pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}




void FUN_100049714(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100050910();
  operator_delete(pvVar1);
  return;
}




void FUN_100049728(long param_1)

{
  long lVar1;
  
  DAT_10184dcf8 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184dcf8 + 1;
  lVar1 = param_1 + (ulong)DAT_10184dcf8 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_100049808;
  *(code **)(lVar1 + 0xb8) = FUN_100049844;
  *(uint *)(lVar1 + 0xa4) = DAT_10184dcf8;
  *(undefined4 *)(lVar1 + 0xa8) = 0xe8;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 2;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,3,FUN_100050950,0);
  return;
}




uint FUN_100049794(void)

{
  uint uVar1;
  long lVar2;
  undefined4 local_28 [2];
  
  lVar2 = FUN_10005099c();
  lVar2 = *(long *)(lVar2 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184daa8))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  FUN_10034cb1c(local_28,PTR_s_Buff_Reza_C_Netherform_10185aa28);
  uVar1 = FUN_1003a2f18(lVar2,local_28[0],0);
  return uVar1 ^ 1;
}




undefined8 FUN_100049808(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1000504dc();
  *puVar1 = &PTR_thunk_FUN_100050910_10144cd18;
  FUN_1000509c8(puVar1,"Horns_bnd");
  return param_1;
}




void FUN_100049844(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010004984c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_100049850(void)

{
  if ((DAT_10184dd00 & 1) == 0) {
    DAT_10184dcf8 = DAT_101872e38;
    DAT_10184dd00 = 1;
  }
  return;
}




void FUN_10004987c(void)

{
  if ((DAT_10184dab0 & 1) == 0) {
    DAT_10184daa8 = DAT_101872e38;
    DAT_10184dab0 = 1;
  }
  return;
}




void FUN_1000498a8(long param_1)

{
  void *local_38 [2];
  char local_21;
  
  FUN_10001549c(local_38);
  std::string::operator=((string *)(param_1 + 0xa8),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void thunk_FUN_10004a7a4(void)

{
  FUN_10004a7a4();
  return;
}




void FUN_1000498f4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10004a7a4();
  operator_delete(pvVar1);
  return;
}




void FUN_100049908(long param_1)

{
  long lVar1;
  
  DAT_10184dd08 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184dd08 + 1;
  lVar1 = param_1 + (ulong)DAT_10184dd08 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_1000499d4;
  *(code **)(lVar1 + 0xb8) = FUN_100049a10;
  *(uint *)(lVar1 + 0xa4) = DAT_10184dd08;
  *(undefined4 *)(lVar1 + 0xa8) = 200;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 2;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,3,FUN_10004a7f8,0);
  return;
}




undefined4 FUN_100049974(void)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar2 = FUN_10004a844();
  lVar2 = *(long *)(lVar2 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184daa8))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  iVar1 = FUN_1003a2f18(lVar2,DAT_101d2ca9c,0);
  uVar3 = 0x3f800000;
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  return uVar3;
}




undefined8 FUN_1000499d4(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10004a444();
  *puVar1 = &PTR_thunk_FUN_10004a7a4_10144cd50;
  FUN_1000498a8(puVar1,"u_twirling_silver");
  return param_1;
}




void FUN_100049a10(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100049a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_100049a1c(void)

{
  if ((DAT_10184dd10 & 1) == 0) {
    DAT_10184dd08 = DAT_101872e38;
    DAT_10184dd10 = 1;
  }
  return;
}




void FUN_100049a48(void)

{
  if ((DAT_10184dab0 & 1) == 0) {
    DAT_10184daa8 = DAT_101872e38;
    DAT_10184dab0 = 1;
  }
  return;
}




void FUN_100049a74(long param_1)

{
  long lVar1;
  
  DAT_10184df80 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184df80 + 1;
  lVar1 = param_1 + (ulong)DAT_10184df80 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_100049ce8;
  *(code **)(lVar1 + 0xb8) = FUN_100049d48;
  *(uint *)(lVar1 + 0xa4) = DAT_10184df80;
  *(undefined4 *)(lVar1 + 0xa8) = 0x50;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x10;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,3,FUN_100049ae0,0);
  return;
}




void FUN_100049ae0(long param_1)

{
  if (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184df80) {
    param_1 = 0;
  }
  FUN_100049afc(param_1);
  return;
}




void FUN_100049afc(long param_1)

{
  byte bVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined1 auStack_64 [4];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dd68) {
    lVar2 = 0;
  }
  lVar2 = *(long *)(lVar2 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dc68))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  fVar3 = (float)(**(code **)(param_1 + 0x40))();
  if (fVar3 <= 0.0) {
    return;
  }
  fVar7 = *(float *)(param_1 + 0x48);
  fVar4 = (float)FUN_1010a1cd4();
  uVar6 = 0x40c90fdb;
  uVar5 = _fmodf(fVar7 + fVar3 * fVar4);
  *(undefined4 *)(param_1 + 0x48) = uVar5;
  FUN_10002a880(lVar2,&local_60,*(undefined8 *)(param_1 + 0x38));
  bVar1 = *(byte *)(param_1 + 0x4c) & 3;
  if (bVar1 == 2) {
    uStack_58 = ___sincosf_stret(*(undefined4 *)(param_1 + 0x48));
    local_60 = 0;
    local_5c = 0;
    local_54 = uVar6;
  }
  else {
    if (bVar1 == 1) {
      local_5c = ___sincosf_stret(*(undefined4 *)(param_1 + 0x48));
      local_60 = 0;
    }
    else {
      if ((*(byte *)(param_1 + 0x4c) & 3) != 0) goto LAB_100049bfc;
      local_60 = ___sincosf_stret(*(undefined4 *)(param_1 + 0x48));
      local_5c = 0;
    }
    uStack_58 = 0;
    local_54 = uVar6;
  }
LAB_100049bfc:
  FUN_10002a8e4(lVar2,&local_60,*(undefined8 *)(param_1 + 0x38),auStack_64);
  return;
}




void FUN_100049c24(long param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  *(undefined8 *)(param_1 + 0x40) = param_3;
  *(byte *)(param_1 + 0x4c) = *(byte *)(param_1 + 0x4c) & 0xfc | param_4 & 3;
  return;
}




void FUN_100049c38(long param_1)

{
  FUN_1010a1da8(param_1 + 0x28);
  FUN_1010a0064(param_1);
  return;
}




void FUN_100049c60(long param_1)

{
  void *pvVar1;
  
  FUN_1010a1da8(param_1 + 0x28);
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100049c8c(long param_1)

{
  FUN_1010a1da8();
  FUN_1010a0064(param_1 + -0x28);
  return;
}




void FUN_100049cb0(long param_1)

{
  void *pvVar1;
  
  FUN_1010a1da8();
  pvVar1 = (void *)FUN_1010a0064(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




long FUN_100049cd8(long param_1)

{
  return param_1 + -0x28;
}




long FUN_100049ce0(long param_1)

{
  return param_1 + -0x28;
}




undefined8 * FUN_100049ce8(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  *param_1 = &PTR_FUN_10144cd88;
  param_1[5] = &PTR_FUN_10144cdb8;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(byte *)((long)param_1 + 0x4c) = *(byte *)((long)param_1 + 0x4c) & 0xfc | 1;
  return param_1;
}




void FUN_100049d48(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100049d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_100049d54(void)

{
  if ((DAT_10184df88 & 1) == 0) {
    DAT_10184df80 = DAT_101872e38;
    DAT_10184df88 = 1;
  }
  return;
}




void FUN_100049d80(void)

{
  if ((DAT_10184dd70 & 1) == 0) {
    DAT_10184dd68 = DAT_101872e38;
    DAT_10184dd70 = 1;
  }
  return;
}




void FUN_100049dac(void)

{
  if ((DAT_10184dc70 & 1) == 0) {
    DAT_10184dc68 = DAT_101872e38;
    DAT_10184dc70 = 1;
  }
  return;
}




undefined8 * FUN_100049dd8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  *param_1 = &PTR_thunk_FUN_100049f8c_10144cde8;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  *(undefined8 *)((long)param_1 + 0x51) = 0;
  *(undefined8 *)((long)param_1 + 0x49) = 0;
  *(undefined1 *)((long)param_1 + 0x59) = 1;
  *(undefined4 *)((long)param_1 + 0x5c) = 0x3f800000;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = DAT_101dc0b88;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  uVar1 = FUN_1010a0298(param_1,DAT_10184dc58);
  param_1[7] = uVar1;
  thunk_FUN_1010add94(auStack_40);
  local_38 = 0x42e0000042c00000;
  local_30 = 0x42fc0000;
  FUN_1010ae160(auStack_40,0,&local_38,3,1,"u_indicator_color");
  uVar1 = FUN_1010ae1d8(auStack_40);
  param_1[8] = uVar1;
  thunk_FUN_1010adde4(auStack_40);
  thunk_FUN_1010add94(auStack_40);
  local_38 = 0x42c00000;
  local_30 = 0;
  FUN_1010ae160(auStack_40,0,&local_38,3,1,"u_indicator_color");
  uVar1 = FUN_1010ae1d8(auStack_40);
  param_1[9] = uVar1;
  thunk_FUN_1010adde4(auStack_40);
  thunk_FUN_1010add94(auStack_40);
  local_38 = 0x42ca000042ac0000;
  local_30 = 0x42e20000;
  FUN_1010ae160(auStack_40,0,&local_38,3,1,"u_indicator_color");
  uVar1 = FUN_1010ae1d8(auStack_40);
  param_1[10] = uVar1;
  thunk_FUN_1010adde4(auStack_40);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100049f8c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_thunk_FUN_100049f8c_10144cde8;
  if (param_1[8] != 0) {
    pvVar1 = (void *)thunk_FUN_1010af6a0();
    operator_delete(pvVar1);
    param_1[8] = 0;
  }
  if (param_1[9] != 0) {
    pvVar1 = (void *)thunk_FUN_1010af6a0();
    operator_delete(pvVar1);
    param_1[9] = 0;
  }
  if (param_1[10] != 0) {
    pvVar1 = (void *)thunk_FUN_1010af6a0();
    operator_delete(pvVar1);
    param_1[10] = 0;
  }
  FUN_1010a0064(param_1);
  return;
}




void thunk_FUN_100049f8c(void)

{
  FUN_100049f8c();
  return;
}




void FUN_100049ff8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100049f8c();
  operator_delete(pvVar1);
  return;
}




void FUN_10004a00c(long param_1)

{
  long lVar1;
  
  DAT_10184dc88 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184dc88 + 1;
  lVar1 = param_1 + (ulong)DAT_10184dc88 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = thunk_FUN_100049dd8;
  *(code **)(lVar1 + 0xb8) = FUN_10004a3e0;
  *(uint *)(lVar1 + 0xa4) = DAT_10184dc88;
  *(undefined4 *)(lVar1 + 0xa8) = 0x80;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 800;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,4,FUN_10004a0ac,0);
  FUN_1010a0990(param_1,0x36de0632,FUN_10004a0c4,0);
  return;
}




void FUN_10004a0ac(long param_1)

{
  if ((*(char *)(param_1 + 0x59) != '\0') && (*(char *)(param_1 + 0x58) != '\0')) {
    FUN_10004a10c();
    return;
  }
  return;
}




void FUN_10004a0c4(long param_1)

{
  byte *in_stack_00000000;
  
  *(bool *)(param_1 + 0x59) = (byte)((*in_stack_00000000 & 0x1f) - 1) < 2;
  FUN_10004a2ac();
  return;
}




void FUN_10004a10c(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  float local_70 [6];
  undefined8 local_58;
  undefined8 uStack_50;
  float local_48;
  undefined4 local_44;
  float local_40;
  float fStack_3c;
  float local_38;
  undefined4 local_34;
  undefined8 local_30;
  float local_28;
  
  plVar1 = *(long **)(param_1 + 0x60);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x68) == (int)plVar1[1]) {
      uVar2 = (**(code **)(*plVar1 + 0x10))();
      FUN_100345b68(uVar2,&local_30,0);
      local_40 = (float)*(undefined8 *)(param_1 + 0x70) + (float)local_30;
      fStack_3c = (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20) +
                  (float)((ulong)local_30 >> 0x20);
      local_30 = CONCAT44(fStack_3c,local_40);
      local_38 = *(float *)(param_1 + 0x78) + local_28;
      local_70[0] = *(float *)(param_1 + 0x5c) + *(float *)(param_1 + 0x5c);
      local_70[3] = 0.0;
      local_70[4] = 0.0;
      local_70[1] = 0.0;
      local_70[2] = 0.0;
      uStack_50 = 0;
      local_58 = 0;
      local_44 = 0;
      local_34 = 0x3f800000;
      fStack_3c = *(float *)(*(long *)(param_1 + 0x30) + 0x14) + fStack_3c;
      if (*(long *)(param_1 + 0x38) != 0) {
        local_70[5] = local_70[0];
        local_48 = local_70[0];
        local_28 = local_38;
        FUN_1004e8e38(*(long *)(param_1 + 0x38),local_70);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x68) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_10004a1e8(float param_1,long param_2,undefined8 *param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_5 + 0x10) * 0.5;
  if (param_1 != -1.0) {
    fVar2 = param_1;
  }
  *(float *)(param_2 + 0x5c) = fVar2;
  *(undefined8 *)(param_2 + 0x60) = *param_3;
  *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_3 + 1);
  *(long *)(param_2 + 0x30) = param_5;
  if (*(long *)(param_2 + 0x38) != 0) {
    iVar1 = FUN_1004d2524(param_4);
    if (iVar1 != 0) {
      (**(code **)(**(long **)(param_2 + 0x38) + 0x20))(*(long **)(param_2 + 0x38),param_4);
      *(undefined1 *)(*(long *)(param_2 + 0x38) + 0x33) = 0xb;
      FUN_1004e914c(*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x40));
    }
    if (*(long *)(param_2 + 0x38) != 0) {
      FUN_1004e9194();
    }
  }
  *(undefined4 *)(param_2 + 0x28) = 0;
  return;
}




void FUN_10004a284(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  return;
}




void FUN_10004a298(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x5c) = param_1;
  return;
}




void FUN_10004a2a0(long param_1)

{
  *(undefined1 *)(param_1 + 0x58) = 1;
  FUN_10004a2ac();
  return;
}




void FUN_10004a2ac(long param_1)

{
  if ((*(char *)(param_1 + 0x59) == '\0') || (*(char *)(param_1 + 0x58) == '\0')) {
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_1004e9194();
      return;
    }
  }
  else {
    FUN_10004a10c(param_1);
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_1004e9154();
      return;
    }
  }
  return;
}




void FUN_10004a308(long param_1)

{
  *(undefined1 *)(param_1 + 0x58) = 0;
  FUN_10004a2ac();
  return;
}




void FUN_10004a310(long param_1)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_1004e8a24(*(undefined8 *)(param_1 + 0x38));
    FUN_1010a520c();
    FUN_1004e914c(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}




void FUN_10004a34c(long param_1)

{
  if (*(int *)(param_1 + 0x28) != 1) {
    FUN_1004e8a24(*(undefined8 *)(param_1 + 0x38));
    FUN_1010a520c();
    FUN_1004e914c(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x28) = 1;
  }
  return;
}




void FUN_10004a394(long param_1)

{
  if (*(int *)(param_1 + 0x28) != 2) {
    FUN_1004e8a24(*(undefined8 *)(param_1 + 0x38));
    FUN_1010a520c();
    FUN_1004e914c(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x28) = 2;
  }
  return;
}




undefined8 * thunk_FUN_100049dd8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  undefined4 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_101444218;
  *param_1 = &PTR_thunk_FUN_100049f8c_10144cde8;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  *(undefined8 *)((long)param_1 + 0x51) = 0;
  *(undefined8 *)((long)param_1 + 0x49) = 0;
  *(undefined1 *)((long)param_1 + 0x59) = 1;
  *(undefined4 *)((long)param_1 + 0x5c) = 0x3f800000;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = DAT_101dc0b88;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  uVar1 = FUN_1010a0298(param_1,DAT_10184dc58);
  param_1[7] = uVar1;
  thunk_FUN_1010add94(auStack_40);
  uStack_38 = 0x42e0000042c00000;
  uStack_30 = 0x42fc0000;
  FUN_1010ae160(auStack_40,0,&uStack_38,3,1,"u_indicator_color");
  uVar1 = FUN_1010ae1d8(auStack_40);
  param_1[8] = uVar1;
  thunk_FUN_1010adde4(auStack_40);
  thunk_FUN_1010add94(auStack_40);
  uStack_38 = 0x42c00000;
  uStack_30 = 0;
  FUN_1010ae160(auStack_40,0,&uStack_38,3,1,"u_indicator_color");
  uVar1 = FUN_1010ae1d8(auStack_40);
  param_1[9] = uVar1;
  thunk_FUN_1010adde4(auStack_40);
  thunk_FUN_1010add94(auStack_40);
  uStack_38 = 0x42ca000042ac0000;
  uStack_30 = 0x42e20000;
  FUN_1010ae160(auStack_40,0,&uStack_38,3,1,"u_indicator_color");
  uVar1 = FUN_1010ae1d8(auStack_40);
  param_1[10] = uVar1;
  thunk_FUN_1010adde4(auStack_40);
  if (*(long *)PTR____stack_chk_guard_101444218 == lStack_28) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10004a3e0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010004a3e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10004a3ec(void)

{
  if ((DAT_10184dc60 & 1) == 0) {
    DAT_10184dc58 = DAT_101872e38;
    DAT_10184dc60 = 1;
  }
  return;
}




void FUN_10004a418(void)

{
  if ((DAT_10184dc90 & 1) == 0) {
    DAT_10184dc88 = DAT_101872e38;
    DAT_10184dc90 = 1;
  }
  return;
}




undefined8 * FUN_10004a444(undefined8 *param_1)

{
  ushort *puVar1;
  
  *param_1 = &PTR_thunk_FUN_10004a7a4_10144ce18;
  puVar1 = (ushort *)(param_1 + 5);
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = param_1;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[7] = FUN_10004a4f4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 1;
  param_1[0xe] = FUN_10004a554;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  *puVar1 = *puVar1 & 0x8000 | 0xbff;
  FUN_10004a604(puVar1,0,1);
  FUN_10004a688(puVar1,0,0,0);
  return param_1;
}




void FUN_10004a4f4(long param_1)

{
  long lVar1;
  
  if (((*(long *)(param_1 + 0x10) != 0) &&
      (*(int *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + 0xa4) == DAT_10184dd68)) &&
     (lVar1 = FUN_1003a3524(), lVar1 != 0)) {
    FUN_10004a688(param_1 + 0x28,1,0,0);
    return;
  }
  return;
}




void FUN_10004a554(long *param_1)

{
  long *plVar1;
  float *pfVar2;
  long lVar3;
  float fVar4;
  
  lVar3 = param_1[2];
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dd68) {
    lVar3 = 0;
  }
  fVar4 = (float)(**(code **)(*param_1 + 0x20))(param_1);
  pfVar2 = (float *)(param_1 + 0x18);
  if (fVar4 != *pfVar2) {
    *pfVar2 = fVar4;
    for (lVar3 = *(long *)(lVar3 + 0x18); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x20)) {
      if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_10184db58) {
        plVar1 = param_1 + 0x15;
        if (*(char *)((long)param_1 + 0xbf) < '\0') {
          plVar1 = (long *)*plVar1;
        }
        FUN_100024f28(lVar3,plVar1,pfVar2,1);
        return;
      }
    }
  }
  return;
}




void FUN_10004a604(ushort *param_1,uint param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ushort *puVar6;
  
  uVar4 = (ulong)(*param_1 >> 10) & 0x1f;
  uVar3 = (uint)uVar4;
  if (uVar3 != 0) {
    uVar2 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_2) goto LAB_10004a638;
      uVar2 = uVar2 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar4 != uVar2);
    uVar2 = 0xffffffff;
LAB_10004a638:
    uVar5 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_3) {
        iVar1 = (int)uVar2;
        if (iVar1 == -1) {
          return;
        }
        param_1[(long)iVar1 * 0x1c + 5] =
             param_1[(long)iVar1 * 0x1c + 5] | (ushort)(1 << (ulong)(uVar5 & 0x1f));
        return;
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar3 != uVar5);
  }
  return;
}




void FUN_10004a688(ushort *param_1,uint param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ushort *puVar5;
  
  uVar1 = *param_1;
  if ((uVar1 >> 10 & 0x1f) != 0) {
    uVar2 = 0;
    puVar5 = param_1 + 4;
    do {
      if (*puVar5 == param_2) goto LAB_10004a6cc;
      uVar2 = uVar2 + 1;
      puVar5 = puVar5 + 0x1c;
    } while ((uVar1 >> 10 & 0x1f) != uVar2);
  }
  uVar2 = 0x1f;
LAB_10004a6cc:
  uVar3 = (ulong)uVar1 & 0x1f;
  if ((uint)uVar3 == 0x1f) {
    uVar1 = uVar1 & 0xfc1f;
  }
  else {
    if (uVar2 == (uint)uVar3) {
      return;
    }
    if ((param_1[uVar3 * 0x1c + 5] >> (ulong)(uVar2 & 0x1f) & 1) == 0) {
      return;
    }
    uVar1 = uVar1 & 0xfc1f | (ushort)((uVar2 & 0x1f) << 5);
    *param_1 = uVar1;
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar3 * 0x1c + 0x18);
    uVar4 = *(ulong *)(param_1 + uVar3 * 0x1c + 0x1c) & 1;
    if (uVar4 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar4 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 0x3c) +
                                 ((long)*(ulong *)(param_1 + uVar3 * 0x1c + 0x1c) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
      (*UNRECOVERED_JUMPTABLE)();
      uVar1 = *param_1;
    }
  }
  uVar2 = uVar2 & 0x1f;
  *param_1 = (ushort)uVar2 | uVar1 & 0xfc00 | 0x3e0;
  if (uVar2 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + (ulong)uVar2 * 0x1c + 0x10);
    uVar3 = *(ulong *)(param_1 + (ulong)uVar2 * 0x1c + 0x14) & 1;
    if (uVar3 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar3 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 0x3c) +
                                 ((long)*(ulong *)(param_1 + (ulong)uVar2 * 0x1c + 0x14) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
                    /* WARNING: Could not recover jumptable at 0x00010004a730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_10004a7a4(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10004a7a4_10144ce18;
  if (*(char *)((long)param_1 + 0xbf) < '\0') {
    operator_delete((void *)param_1[0x15]);
  }
  FUN_1010a0064(param_1);
  return;
}




void thunk_FUN_10004a7a4(void)

{
  FUN_10004a7a4();
  return;
}




void FUN_10004a7e4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10004a7a4();
  operator_delete(pvVar1);
  return;
}




void FUN_10004a7f8(long param_1)

{
  FUN_10004a800(param_1 + 0x28);
  return;
}




void FUN_10004a800(ushort *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)*param_1 & 0x1f;
  if ((int)uVar1 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar1 * 0x1c + 8);
    uVar2 = *(ulong *)(param_1 + uVar1 * 0x1c + 0xc) & 1;
    if (uVar2 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar2 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 0x3c) +
                                 ((long)*(ulong *)(param_1 + uVar1 * 0x1c + 0xc) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
                    /* WARNING: Could not recover jumptable at 0x00010004a83c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




long FUN_10004a844(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68) {
      lVar1 = 0;
    }
    return lVar1;
  }
  return 0;
}




undefined1  [16] FUN_10004a870(void)

{
  return ZEXT816(0);
}




void FUN_10004a878(void)

{
  if ((DAT_10184dd70 & 1) == 0) {
    DAT_10184dd68 = DAT_101872e38;
    DAT_10184dd70 = 1;
  }
  return;
}




void FUN_10004a8a4(void)

{
  if ((DAT_10184db60 & 1) == 0) {
    DAT_10184db58 = DAT_101872e38;
    DAT_10184db60 = 1;
  }
  return;
}




undefined8 * FUN_10004a8d0(undefined8 *param_1)

{
  ushort *puVar1;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  *param_1 = &PTR_thunk_FUN_10004add0_10144ce50;
  param_1[5] = &PTR_FUN_10144ce80;
  puVar1 = (ushort *)(param_1 + 7);
  param_1[0x2b] = param_1;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  *(undefined2 *)(param_1 + 0x2c) = DAT_10186760a;
  *(undefined2 *)((long)param_1 + 0x162) = DAT_101867608;
  *(undefined4 *)((long)param_1 + 0x164) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x16c) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xf) = 1;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x16) = 2;
  param_1[0x17] = FUN_10004aa78;
  param_1[0x18] = 0;
  param_1[0x19] = FUN_10004aaf8;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 3;
  param_1[0x1e] = FUN_10004ab6c;
  param_1[0x1f] = 0;
  param_1[0x20] = FUN_10004ac04;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined2 *)(param_1 + 0x24) = 4;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined2 *)((long)param_1 + 0x122) = 0;
  param_1[0x27] = thunk_FUN_1010a01dc;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *puVar1 = *puVar1 & 0x8000 | 0x17ff;
  FUN_10004ac30(puVar1,0,1);
  FUN_10004ac30(puVar1,1,2);
  FUN_10004ac30(puVar1,2,3);
  FUN_10004ac30(puVar1,0,4);
  FUN_10004ac30(puVar1,1,4);
  FUN_10004ac30(puVar1,2,4);
  FUN_10004ac30(puVar1,3,4);
  FUN_10004acb4(puVar1,0,0,0);
  return param_1;
}




void FUN_10004aa78(long param_1)

{
  ulong uVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x164);
  if (*(char *)(param_1 + 0x170) != '\0') {
    fVar2 = DAT_10184df90 * *(float *)(param_1 + 0x164);
  }
  FUN_10052c364(fVar2,*(undefined2 *)(param_1 + 0x162));
  uVar1 = FUN_10052c3a8(*(undefined2 *)(param_1 + 0x162));
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_10052c384(*(undefined2 *)(param_1 + 0x162));
  *(undefined2 *)(param_1 + 0x162) = DAT_101867608;
  FUN_10004acb4(param_1 + 0x38,4,0,0);
  return;
}




void FUN_10004aaf8(long param_1)

{
  uint uVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x164);
  if (*(char *)(param_1 + 0x170) != '\0') {
    fVar2 = DAT_10184df90 * *(float *)(param_1 + 0x164);
  }
  uVar1 = FUN_10052c374(fVar2,*(undefined2 *)(param_1 + 0x160));
  *(short *)(param_1 + 0x162) = (short)uVar1;
  if (uVar1 == DAT_101867608) {
    FUN_10004acb4(param_1 + 0x38,4,0,0);
    return;
  }
  return;
}




void FUN_10004ab6c(long param_1)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = (float)FUN_1010a1cd4();
  fVar4 = *(float *)(param_1 + 0x168) + fVar4;
  *(float *)(param_1 + 0x168) = fVar4;
  fVar5 = *(float *)(param_1 + 0x16c);
  bVar1 = false;
  bVar2 = false;
  if (0.0 < fVar5) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar4) && !NAN(fVar5)) {
      bVar1 = fVar4 < fVar5;
      bVar2 = false;
    }
  }
  if (bVar1 != bVar2) {
    fVar4 = *(float *)(param_1 + 0x164) * (fVar5 - fVar4 / fVar5);
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    if ((0.0 < fVar4) && (uVar3 = FUN_10052c3a8(*(undefined2 *)(param_1 + 0x162)), (uVar3 & 1) != 0)
       ) {
      FUN_10052c364(fVar4,*(undefined2 *)(param_1 + 0x162));
      return;
    }
  }
  FUN_10004acb4(param_1 + 0x38,4,0,0);
  return;
}




void FUN_10004ac04(long param_1)

{
  if (0.0 < *(float *)(param_1 + 0x16c)) {
    *(undefined4 *)(param_1 + 0x168) = 0;
    return;
  }
  FUN_10004acb4(param_1 + 0x38,4,0,0);
  return;
}




void FUN_10004ac30(ushort *param_1,uint param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ushort *puVar6;
  
  uVar4 = (ulong)(*param_1 >> 10) & 0x1f;
  uVar3 = (uint)uVar4;
  if (uVar3 != 0) {
    uVar2 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_2) goto LAB_10004ac64;
      uVar2 = uVar2 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar4 != uVar2);
    uVar2 = 0xffffffff;
LAB_10004ac64:
    uVar5 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_3) {
        iVar1 = (int)uVar2;
        if (iVar1 == -1) {
          return;
        }
        param_1[(long)iVar1 * 0x1c + 5] =
             param_1[(long)iVar1 * 0x1c + 5] | (ushort)(1 << (ulong)(uVar5 & 0x1f));
        return;
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar3 != uVar5);
  }
  return;
}




void FUN_10004acb4(ushort *param_1,uint param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ushort *puVar5;
  
  uVar1 = *param_1;
  if ((uVar1 >> 10 & 0x1f) != 0) {
    uVar2 = 0;
    puVar5 = param_1 + 4;
    do {
      if (*puVar5 == param_2) goto LAB_10004acf8;
      uVar2 = uVar2 + 1;
      puVar5 = puVar5 + 0x1c;
    } while ((uVar1 >> 10 & 0x1f) != uVar2);
  }
  uVar2 = 0x1f;
LAB_10004acf8:
  uVar3 = (ulong)uVar1 & 0x1f;
  if ((uint)uVar3 == 0x1f) {
    uVar1 = uVar1 & 0xfc1f;
  }
  else {
    if (uVar2 == (uint)uVar3) {
      return;
    }
    if ((param_1[uVar3 * 0x1c + 5] >> (ulong)(uVar2 & 0x1f) & 1) == 0) {
      return;
    }
    uVar1 = uVar1 & 0xfc1f | (ushort)((uVar2 & 0x1f) << 5);
    *param_1 = uVar1;
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar3 * 0x1c + 0x18);
    uVar4 = *(ulong *)(param_1 + uVar3 * 0x1c + 0x1c) & 1;
    if (uVar4 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar4 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 0x90) +
                                 ((long)*(ulong *)(param_1 + uVar3 * 0x1c + 0x1c) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
      (*UNRECOVERED_JUMPTABLE)();
      uVar1 = *param_1;
    }
  }
  uVar2 = uVar2 & 0x1f;
  *param_1 = (ushort)uVar2 | uVar1 & 0xfc00 | 0x3e0;
  if (uVar2 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + (ulong)uVar2 * 0x1c + 0x10);
    uVar3 = *(ulong *)(param_1 + (ulong)uVar2 * 0x1c + 0x14) & 1;
    if (uVar3 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar3 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 0x90) +
                                 ((long)*(ulong *)(param_1 + (ulong)uVar2 * 0x1c + 0x14) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
                    /* WARNING: Could not recover jumptable at 0x00010004ad5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_10004add0(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10004add0_10144ce50;
  param_1[5] = &PTR_FUN_10144ce80;
  FUN_10052c384(*(undefined2 *)((long)param_1 + 0x162));
  FUN_1010a1da8(param_1 + 5);
  FUN_1010a0064(param_1);
  return;
}




void thunk_FUN_10004add0(void)

{
  FUN_10004add0();
  return;
}




void FUN_10004ae1c(long param_1)

{
  FUN_10004add0(param_1 + -0x28);
  return;
}




void FUN_10004ae24(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10004add0();
  operator_delete(pvVar1);
  return;
}




void FUN_10004ae38(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10004add0(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




void FUN_10004ae50(long param_1)

{
  long lVar1;
  
  DAT_10184dd48 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184dd48 + 1;
  lVar1 = param_1 + (ulong)DAT_10184dd48 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = thunk_FUN_10004a8d0;
  *(code **)(lVar1 + 0xb8) = FUN_10004b28c;
  *(uint *)(lVar1 + 0xa4) = DAT_10184dd48;
  *(undefined4 *)(lVar1 + 0xa8) = 0x178;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x40;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,5,FUN_10004aebc,0);
  return;
}




void FUN_10004aebc(long param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  FUN_10004afac(param_1 + 0x38);
  if (DAT_101dc3278 == '\0') goto LAB_10004af1c;
  iVar1 = FUN_1000320e8();
  if (iVar1 == 0) {
LAB_10004af18:
    DAT_101dc3278 = '\0';
  }
  else {
    if (DAT_101dc3279 == '\0') {
      fVar3 = DAT_101dc3280 + DAT_101dc327c;
      FUN_1000320fc();
      fVar2 = (float)FUN_100032244();
      if (fVar3 < fVar2) goto LAB_10004af18;
    }
    fVar2 = DAT_10184df94;
    if (DAT_101dc3278 != '\0') {
      fVar3 = (float)FUN_1010a1cd4();
      DAT_10184df94 = fVar2 - fVar3;
      if (DAT_10184df94 <= 0.0) {
        DAT_10184df94 = 0.0;
      }
      fVar2 = 1.0 - DAT_10184df94;
      DAT_10184df90 = fVar2 * fVar2 * fVar2 * -0.8 + 1.0;
      return;
    }
  }
LAB_10004af1c:
  fVar2 = DAT_10184df94;
  fVar3 = (float)FUN_1010a1cd4();
  DAT_10184df94 = (float)NEON_fminnm(fVar3 + fVar2,0x3f800000);
  fVar2 = DAT_10184df94 + -1.0;
  DAT_10184df90 = fVar2 * fVar2 * fVar2 + 1.2;
  return;
}




void FUN_10004afac(ushort *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)*param_1 & 0x1f;
  if ((int)uVar1 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar1 * 0x1c + 8);
    uVar2 = *(ulong *)(param_1 + uVar1 * 0x1c + 0xc) & 1;
    if (uVar2 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar2 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 0x90) +
                                 ((long)*(ulong *)(param_1 + uVar1 * 0x1c + 0xc) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
                    /* WARNING: Could not recover jumptable at 0x00010004afe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_10004aff0(float param_1,int param_2)

{
  DAT_101dc3278 = (byte)param_2;
  DAT_101dc3279 = DAT_101dc3278 & param_1 == 0.0;
  DAT_101dc3280 = param_1;
  if (param_2 != 0) {
    FUN_1000320fc();
    DAT_101dc327c = FUN_100032244();
  }
  return;
}




void FUN_10004b038(float param_1,long param_2,undefined8 param_3,int param_4,undefined8 param_5,
                  undefined1 param_6)

{
  undefined8 ***pppuVar1;
  undefined1 **ppuVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined1 *local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 **local_58;
  undefined8 uStack_50;
  long local_48;
  
  *(undefined1 *)(param_2 + 0x170) = param_6;
  local_58 = (undefined8 ***)0x0;
  uStack_50 = 0;
  local_48 = 0;
  local_70 = (undefined1 *)0x0;
  uStack_68 = 0;
  local_60 = 0;
  iVar3 = FUN_1006581d8(param_3,&local_58);
  if (iVar3 != 0) {
    pppuVar1 = (undefined8 ***)local_58;
    if (-1 < local_48) {
      pppuVar1 = &local_58;
    }
    FUN_100658d0c(pppuVar1,&local_70);
    ppuVar2 = (undefined1 **)local_70;
    if (-1 < local_60) {
      ppuVar2 = &local_70;
    }
    uVar5 = 3;
    if (param_4 != 0) {
      uVar5 = 4;
    }
    uVar4 = FUN_10052c2d4(ppuVar2,uVar5,param_5);
    *(short *)(param_2 + 0x160) = (short)uVar4;
    if (uVar4 == DAT_10186760a) {
      FUN_1010a01dc(param_2);
    }
    else {
      fVar6 = (float)FUN_1000fe37c();
      *(float *)(param_2 + 0x164) = fVar6 * param_1;
      FUN_10004acb4(param_2 + 0x38,1,0,0);
    }
  }
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  if (local_48 < 0) {
    operator_delete(local_58);
  }
  return;
}




void FUN_10004b148(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_10004b190(param_1 + 0x38,2);
  if (iVar1 != 0) {
    FUN_10004acb4(param_1 + 0x38,2,0,0);
    return;
  }
  return;
}




ushort FUN_10004b190(ushort *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ushort *puVar5;
  
  uVar2 = (ulong)*param_1 & 0x1f;
  uVar1 = (uint)uVar2;
  if (uVar1 != 0x1f) {
    uVar4 = (ulong)(*param_1 >> 10) & 0x1f;
    if ((int)uVar4 != 0) {
      uVar3 = 0;
      puVar5 = param_1 + 4;
      do {
        if (*puVar5 == param_2) goto LAB_10004b1d0;
        uVar3 = uVar3 + 1;
        puVar5 = puVar5 + 0x1c;
      } while (uVar4 != uVar3);
    }
    uVar3 = 0x1f;
LAB_10004b1d0:
    if ((uint)uVar3 != uVar1) {
      return param_1[uVar2 * 0x1c + 5] >> (ulong)((uint)uVar3 & 0x1f) & 1;
    }
  }
  return 1;
}




void FUN_10004b1f8(float param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  *(float *)(param_2 + 0x16c) = param_1;
  if ((param_1 <= 0.0) || (iVar1 = FUN_10004b190(param_2 + 0x38,3), iVar1 == 0)) {
    iVar1 = FUN_10004b190(param_2 + 0x38,4);
    if (iVar1 == 0) {
      return;
    }
    uVar2 = 4;
  }
  else {
    uVar2 = 3;
  }
  FUN_10004acb4(param_2 + 0x38,uVar2,0,0);
  return;
}




long FUN_10004b278(long param_1)

{
  return param_1 + -0x28;
}




long FUN_10004b280(long param_1)

{
  return param_1 + -0x28;
}




undefined8 * thunk_FUN_10004a8d0(undefined8 *param_1)

{
  ushort *puVar1;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  *param_1 = &PTR_thunk_FUN_10004add0_10144ce50;
  param_1[5] = &PTR_FUN_10144ce80;
  puVar1 = (ushort *)(param_1 + 7);
  param_1[0x2b] = param_1;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  *(undefined2 *)(param_1 + 0x2c) = DAT_10186760a;
  *(undefined2 *)((long)param_1 + 0x162) = DAT_101867608;
  *(undefined4 *)((long)param_1 + 0x164) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x16c) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xf) = 1;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x16) = 2;
  param_1[0x17] = FUN_10004aa78;
  param_1[0x18] = 0;
  param_1[0x19] = FUN_10004aaf8;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 3;
  param_1[0x1e] = FUN_10004ab6c;
  param_1[0x1f] = 0;
  param_1[0x20] = FUN_10004ac04;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined2 *)(param_1 + 0x24) = 4;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined2 *)((long)param_1 + 0x122) = 0;
  param_1[0x27] = thunk_FUN_1010a01dc;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *puVar1 = *puVar1 & 0x8000 | 0x17ff;
  FUN_10004ac30(puVar1,0,1);
  FUN_10004ac30(puVar1,1,2);
  FUN_10004ac30(puVar1,2,3);
  FUN_10004ac30(puVar1,0,4);
  FUN_10004ac30(puVar1,1,4);
  FUN_10004ac30(puVar1,2,4);
  FUN_10004ac30(puVar1,3,4);
  FUN_10004acb4(puVar1,0,0,0);
  return param_1;
}




void FUN_10004b28c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010004b294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10004b298(void)

{
  if ((DAT_10184dd50 & 1) == 0) {
    DAT_10184dd48 = DAT_101872e38;
    DAT_10184dd50 = 1;
  }
  return;
}




undefined8 * FUN_10004b2c4(undefined8 *param_1)

{
  ushort *puVar1;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  *param_1 = &PTR_thunk_FUN_10004b8e4_10144ceb0;
  param_1[5] = &PTR_FUN_10144cee0;
  puVar1 = (ushort *)(param_1 + 7);
  param_1[0x32] = param_1;
  *(undefined2 *)((long)param_1 + 0x44) = 0;
  *(undefined2 *)(param_1 + 0x33) = DAT_10186760a;
  *(undefined2 *)((long)param_1 + 0x19a) = DAT_101867608;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = DAT_101dc0b88;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  *(undefined8 *)((long)param_1 + 0x1c4) = 0x400000003f800000;
  *(undefined8 *)((long)param_1 + 0x1bc) = 0;
  *(undefined4 *)((long)param_1 + 0x1cc) = 0x41f00000;
  *(byte *)(param_1 + 0x3a) = *(byte *)(param_1 + 0x3a) & 0xf0 | 0xc;
  *(undefined4 *)((long)param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xf) = 1;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x16) = 2;
  param_1[0x17] = FUN_10004b4e8;
  param_1[0x18] = 0;
  param_1[0x19] = FUN_10004b590;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 3;
  param_1[0x1e] = FUN_10004b638;
  param_1[0x1f] = 0;
  param_1[0x20] = FUN_10004b664;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 4;
  param_1[0x25] = FUN_10004b698;
  param_1[0x26] = 0;
  param_1[0x27] = FUN_10004b738;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined2 *)(param_1 + 0x2b) = 5;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined2 *)((long)param_1 + 0x15a) = 0;
  param_1[0x2e] = thunk_FUN_1010a01dc;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *puVar1 = *puVar1 & 0x8000 | 0x1bff;
  FUN_10004b744(puVar1,0,1);
  FUN_10004b744(puVar1,1,2);
  FUN_10004b744(puVar1,2,3);
  FUN_10004b744(puVar1,2,4);
  FUN_10004b744(puVar1,2,5);
  FUN_10004b744(puVar1,3,2);
  FUN_10004b744(puVar1,3,4);
  FUN_10004b744(puVar1,4,5);
  FUN_10004b7c8(puVar1,0,0,0);
  return param_1;
}




void FUN_10004b4e8(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  float fVar3;
  
  FUN_10052c2ec(*(undefined4 *)(param_1 + 0x1c8),*(undefined4 *)(param_1 + 0x1cc),
                *(undefined2 *)(param_1 + 0x19a),param_1 + 0x1b0,&DAT_1013cd800);
  fVar3 = *(float *)(param_1 + 0x1bc);
  if ((*(byte *)(param_1 + 0x1d0) & 8) != 0) {
    fVar3 = DAT_10184df98 * *(float *)(param_1 + 0x1bc);
  }
  FUN_10052c364(fVar3,*(undefined2 *)(param_1 + 0x19a));
  if (((*(byte *)(param_1 + 0x1d0) >> 2 & 1) == 0) || (0.001 < *(float *)(param_1 + 0x1bc))) {
    uVar1 = FUN_10052c3a8(*(undefined2 *)(param_1 + 0x19a));
    if ((uVar1 & 1) != 0) {
      return;
    }
    uVar2 = 5;
  }
  else {
    uVar2 = 3;
  }
  FUN_10004b7c8(param_1 + 0x38,uVar2,0,0);
  return;
}




void FUN_10004b590(long param_1)

{
  undefined8 uVar1;
  float fVar2;
  
  FUN_10004bb20();
  FUN_10004bbac(param_1);
  FUN_10004bc80(param_1);
  fVar2 = 0.0;
  if ((*(byte *)(param_1 + 0x1d0) & 1) == 0) {
    fVar2 = *(float *)(param_1 + 0x1c0);
  }
  *(float *)(param_1 + 0x1bc) = fVar2;
  if ((*(byte *)(param_1 + 0x1d0) & 8) != 0) {
    fVar2 = DAT_10184df98 * fVar2;
  }
  uVar1 = FUN_10052c374(fVar2,*(undefined2 *)(param_1 + 0x198));
  *(short *)(param_1 + 0x19a) = (short)uVar1;
  if ((uint)uVar1 == (uint)DAT_101867608) {
    FUN_10004b7c8(param_1 + 0x38,5,0,0);
    return;
  }
  FUN_10052c2ec(*(undefined4 *)(param_1 + 0x1c8),*(undefined4 *)(param_1 + 0x1cc),uVar1,
                param_1 + 0x1b0,&DAT_1013cd800);
  return;
}




void FUN_10004b638(long param_1)

{
  if ((*(float *)(param_1 + 0x1bc) <= 0.0) && ((*(byte *)(param_1 + 0x1d0) >> 2 & 1) != 0)) {
    return;
  }
  FUN_10004b7c8(param_1 + 0x38,2,0,0);
  return;
}




void FUN_10004b664(long param_1)

{
  FUN_10052c384(*(undefined2 *)(param_1 + 0x19a));
  *(undefined2 *)(param_1 + 0x19a) = DAT_101867608;
  return;
}




void FUN_10004b698(long param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_1010a1cd4();
  fVar2 = -fVar1;
  if (*(float *)(param_1 + 0x1bc) <= *(float *)(param_1 + 0x1c0)) {
    fVar2 = fVar1;
  }
  fVar2 = (float)NEON_fminnm(*(float *)(param_1 + 0x1bc) + fVar2 * 0.25,*(float *)(param_1 + 0x1c0))
  ;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  *(float *)(param_1 + 0x1bc) = fVar2;
  if ((*(byte *)(param_1 + 0x1d0) & 8) != 0) {
    fVar2 = fVar2 * DAT_10184df98;
  }
  FUN_10052c364(fVar2,*(undefined2 *)(param_1 + 0x19a));
  if (ABS(*(float *)(param_1 + 0x1bc)) < 0.001) {
    FUN_10004b7c8(param_1 + 0x38,5,0,0);
    return;
  }
  return;
}




void FUN_10004b738(long param_1)

{
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  return;
}




void FUN_10004b744(ushort *param_1,uint param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ushort *puVar6;
  
  uVar4 = (ulong)(*param_1 >> 10) & 0x1f;
  uVar3 = (uint)uVar4;
  if (uVar3 != 0) {
    uVar2 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_2) goto LAB_10004b778;
      uVar2 = uVar2 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar4 != uVar2);
    uVar2 = 0xffffffff;
LAB_10004b778:
    uVar5 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_3) {
        iVar1 = (int)uVar2;
        if (iVar1 == -1) {
          return;
        }
        param_1[(long)iVar1 * 0x1c + 5] =
             param_1[(long)iVar1 * 0x1c + 5] | (ushort)(1 << (ulong)(uVar5 & 0x1f));
        return;
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar3 != uVar5);
  }
  return;
}




void FUN_10004b7c8(ushort *param_1,uint param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ushort *puVar5;
  
  uVar1 = *param_1;
  if ((uVar1 >> 10 & 0x1f) != 0) {
    uVar2 = 0;
    puVar5 = param_1 + 4;
    do {
      if (*puVar5 == param_2) goto LAB_10004b80c;
      uVar2 = uVar2 + 1;
      puVar5 = puVar5 + 0x1c;
    } while ((uVar1 >> 10 & 0x1f) != uVar2);
  }
  uVar2 = 0x1f;
LAB_10004b80c:
  uVar3 = (ulong)uVar1 & 0x1f;
  if ((uint)uVar3 == 0x1f) {
    uVar1 = uVar1 & 0xfc1f;
  }
  else {
    if (uVar2 == (uint)uVar3) {
      return;
    }
    if ((param_1[uVar3 * 0x1c + 5] >> (ulong)(uVar2 & 0x1f) & 1) == 0) {
      return;
    }
    uVar1 = uVar1 & 0xfc1f | (ushort)((uVar2 & 0x1f) << 5);
    *param_1 = uVar1;
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar3 * 0x1c + 0x18);
    uVar4 = *(ulong *)(param_1 + uVar3 * 0x1c + 0x1c) & 1;
    if (uVar4 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar4 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 0xac) +
                                 ((long)*(ulong *)(param_1 + uVar3 * 0x1c + 0x1c) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
      (*UNRECOVERED_JUMPTABLE)();
      uVar1 = *param_1;
    }
  }
  uVar2 = uVar2 & 0x1f;
  *param_1 = (ushort)uVar2 | uVar1 & 0xfc00 | 0x3e0;
  if (uVar2 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + (ulong)uVar2 * 0x1c + 0x10);
    uVar3 = *(ulong *)(param_1 + (ulong)uVar2 * 0x1c + 0x14) & 1;
    if (uVar3 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar3 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 0xac) +
                                 ((long)*(ulong *)(param_1 + (ulong)uVar2 * 0x1c + 0x14) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
                    /* WARNING: Could not recover jumptable at 0x00010004b870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_10004b8e4(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10004b8e4_10144ceb0;
  param_1[5] = &PTR_FUN_10144cee0;
  FUN_10052c384(*(undefined2 *)((long)param_1 + 0x19a));
  FUN_1010a1da8(param_1 + 5);
  FUN_1010a0064(param_1);
  return;
}




void thunk_FUN_10004b8e4(void)

{
  FUN_10004b8e4();
  return;
}




void FUN_10004b930(long param_1)

{
  FUN_10004b8e4(param_1 + -0x28);
  return;
}




void FUN_10004b938(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10004b8e4();
  operator_delete(pvVar1);
  return;
}




void FUN_10004b94c(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10004b8e4(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




void FUN_10004b964(long param_1)

{
  long lVar1;
  
  DAT_10184dd58 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184dd58 + 1;
  lVar1 = param_1 + (ulong)DAT_10184dd58 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = thunk_FUN_10004b2c4;
  *(code **)(lVar1 + 0xb8) = FUN_10004bfd0;
  *(uint *)(lVar1 + 0xa4) = DAT_10184dd58;
  *(undefined4 *)(lVar1 + 0xa8) = 0x1d8;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x40;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,5,FUN_10004b9d0,0);
  return;
}




void FUN_10004b9d0(long param_1)

{
  float fVar1;
  float fVar2;
  
  FUN_10004badc(param_1 + 0x38);
  FUN_10004bb20(param_1);
  FUN_10004bbac(param_1);
  FUN_10004bc80(param_1);
  if (DAT_101dc3284 != '\0' && DAT_101dc3285 == '\0') {
    fVar2 = DAT_101dc328c + DAT_101dc3288;
    FUN_1000320fc();
    fVar1 = (float)FUN_100032244();
    if (fVar2 < fVar1) {
      DAT_101dc3284 = '\0';
      goto LAB_10004ba90;
    }
  }
  fVar1 = DAT_10184df9c;
  if (DAT_101dc3284 != '\0') {
    fVar2 = (float)FUN_1010a1cd4();
    DAT_10184df9c = fVar1 - fVar2;
    if (DAT_10184df9c <= 0.0) {
      DAT_10184df9c = 0.0;
    }
    fVar1 = 1.0 - DAT_10184df9c;
    DAT_10184df98 = fVar1 * fVar1 * fVar1 * -0.8 + 1.0;
    return;
  }
LAB_10004ba90:
  fVar1 = DAT_10184df9c;
  fVar2 = (float)FUN_1010a1cd4();
  DAT_10184df9c = (float)NEON_fminnm(fVar2 + fVar1,0x3f800000);
  fVar1 = DAT_10184df9c + -1.0;
  DAT_10184df98 = fVar1 * fVar1 * fVar1 + 1.2;
  return;
}




void FUN_10004badc(ushort *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)*param_1 & 0x1f;
  if ((int)uVar1 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar1 * 0x1c + 8);
    uVar2 = *(ulong *)(param_1 + uVar1 * 0x1c + 0xc) & 1;
    if (uVar2 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar2 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 0xac) +
                                 ((long)*(ulong *)(param_1 + uVar1 * 0x1c + 0xc) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
                    /* WARNING: Could not recover jumptable at 0x00010004bb18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_10004bb20(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x1a0);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1a8) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        FUN_100345b68(lVar2,param_1 + 0x1b0,0);
        FUN_10052c2ec(*(undefined4 *)(param_1 + 0x1c8),*(undefined4 *)(param_1 + 0x1cc),
                      *(undefined2 *)(param_1 + 0x19a),param_1 + 0x1b0,&DAT_1013cd800);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x1a0) = 0;
      *(undefined4 *)(param_1 + 0x1a8) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_10004bbac(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  
  if ((*(byte *)(param_1 + 0x1d0) >> 1 & 1) == 0) {
    return;
  }
  plVar2 = *(long **)(param_1 + 0x1a0);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1a8) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        uVar4 = FUN_1000320fc();
        iVar1 = FUN_100032120(uVar4,lVar3);
        uVar5 = 0;
        if (iVar1 == 0) goto LAB_10004bc68;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x1a0) = 0;
      *(undefined4 *)(param_1 + 0x1a8) = DAT_101dc0b88;
    }
  }
  FUN_1000320fc();
  iVar1 = FUN_100033960();
  uVar5 = 0;
  if (iVar1 != 0) {
    FUN_1000320fc();
    FUN_100033428();
    local_40 = *(undefined8 *)(param_1 + 0x1b0);
    local_38 = *(undefined4 *)(param_1 + 0x1b8);
    uStack_34 = 0x40000000;
    uVar4 = FUN_10002e51c();
    iVar1 = FUN_1010cf688(uVar4,&local_40);
    if (iVar1 != 1) {
      uVar5 = *(undefined4 *)(param_1 + 0x1c4);
    }
  }
LAB_10004bc68:
  *(undefined4 *)(param_1 + 0x1c0) = uVar5;
  return;
}




void FUN_10004bc80(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (float)FUN_1010a1cd4();
  fVar2 = *(float *)(param_1 + 0x1c0);
  fVar3 = *(float *)(param_1 + 0x1bc);
  if (0.001 <= ABS(fVar2 - fVar3)) {
    if (fVar2 <= fVar3) {
      fVar1 = -fVar1;
    }
    fVar3 = fVar3 + fVar1 * 0.25;
    fVar1 = fVar3;
    if (fVar3 <= fVar2) {
      fVar1 = fVar2;
    }
    fVar4 = (float)NEON_fminnm(fVar3,fVar2);
    if (fVar2 <= fVar3) {
      fVar4 = fVar1;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    *(float *)(param_1 + 0x1bc) = fVar4;
  }
  return;
}




void FUN_10004bcec(float param_1,int param_2)

{
  DAT_101dc3284 = (byte)param_2;
  DAT_101dc3285 = DAT_101dc3284 & param_1 == 0.0;
  DAT_101dc328c = param_1;
  if (param_2 != 0) {
    FUN_1000320fc();
    DAT_101dc3288 = FUN_100032244();
  }
  return;
}




void FUN_10004bd34(float param_1,long param_2,undefined8 param_3,int param_4,undefined8 param_5,
                  int param_6,int param_7,undefined4 param_8)

{
  undefined8 ***pppuVar1;
  undefined1 **ppuVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  byte bVar6;
  byte bVar7;
  float fVar8;
  undefined1 *local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 **local_78;
  undefined8 uStack_70;
  long local_68;
  
  local_78 = (undefined8 ***)0x0;
  uStack_70 = 0;
  local_68 = 0;
  local_90 = (undefined1 *)0x0;
  uStack_88 = 0;
  local_80 = 0;
  iVar3 = FUN_1006581d8(param_3,&local_78);
  if (iVar3 != 0) {
    pppuVar1 = (undefined8 ***)local_78;
    if (-1 < local_68) {
      pppuVar1 = &local_78;
    }
    FUN_100658d0c(pppuVar1,&local_90);
    uVar5 = 1;
    if (param_4 != 0) {
      uVar5 = 2;
    }
    ppuVar2 = (undefined1 **)local_90;
    if (-1 < local_80) {
      ppuVar2 = &local_90;
    }
    uVar4 = FUN_10052c2d4(ppuVar2,uVar5,param_5);
    *(short *)(param_2 + 0x198) = (short)uVar4;
    uVar5 = DAT_101dc0b88;
    if (uVar4 == DAT_10186760a) {
      FUN_1010a01dc(param_2);
    }
    else {
      *(undefined8 *)(param_2 + 0x1a0) = 0;
      *(undefined4 *)(param_2 + 0x1a8) = uVar5;
      fVar8 = (float)FUN_1000fe37c();
      *(undefined4 *)(param_2 + 0x1bc) = 0;
      *(float *)(param_2 + 0x1c0) = fVar8 * param_1;
      *(float *)(param_2 + 0x1c4) = fVar8 * param_1;
      bVar6 = 2;
      if (param_7 == 0) {
        bVar6 = 0;
      }
      bVar7 = 4;
      if (param_6 == 0) {
        bVar7 = 0;
      }
      *(byte *)(param_2 + 0x1d0) = bVar7 | (byte)param_4 | bVar6 | *(byte *)(param_2 + 0x1d0) & 0xf8
      ;
      *(undefined4 *)(param_2 + 0x1d4) = param_8;
      FUN_10004b7c8(param_2 + 0x38,1,0,0);
    }
  }
  if (local_80 < 0) {
    operator_delete(local_90);
  }
  if (local_68 < 0) {
    operator_delete(local_78);
  }
  return;
}




void FUN_10004beac(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x1b0) = uVar1;
  return;
}




void FUN_10004bec0(long param_1,long param_2)

{
  *(long *)(param_1 + 0x1a0) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_2 + 0x30);
  return;
}




void FUN_10004bed4(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_10004bf1c(param_1 + 0x38,2);
  if (iVar1 != 0) {
    FUN_10004b7c8(param_1 + 0x38,2,0,0);
    return;
  }
  return;
}




ushort FUN_10004bf1c(ushort *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ushort *puVar5;
  
  uVar2 = (ulong)*param_1 & 0x1f;
  uVar1 = (uint)uVar2;
  if (uVar1 != 0x1f) {
    uVar4 = (ulong)(*param_1 >> 10) & 0x1f;
    if ((int)uVar4 != 0) {
      uVar3 = 0;
      puVar5 = param_1 + 4;
      do {
        if (*puVar5 == param_2) goto LAB_10004bf5c;
        uVar3 = uVar3 + 1;
        puVar5 = puVar5 + 0x1c;
      } while (uVar4 != uVar3);
    }
    uVar3 = 0x1f;
LAB_10004bf5c:
    if ((uint)uVar3 != uVar1) {
      return param_1[uVar2 * 0x1c + 5] >> (ulong)((uint)uVar3 & 0x1f) & 1;
    }
  }
  return 1;
}




void FUN_10004bf84(long param_1)

{
  if (*(short *)(param_1 + 0x19a) == DAT_101867608) {
    return;
  }
  FUN_10004b7c8(param_1 + 0x38,4,0,0);
  return;
}




undefined4 FUN_10004bfb4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1d4);
}




long FUN_10004bfbc(long param_1)

{
  return param_1 + -0x28;
}




long FUN_10004bfc4(long param_1)

{
  return param_1 + -0x28;
}




undefined8 * thunk_FUN_10004b2c4(undefined8 *param_1)

{
  ushort *puVar1;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  *param_1 = &PTR_thunk_FUN_10004b8e4_10144ceb0;
  param_1[5] = &PTR_FUN_10144cee0;
  puVar1 = (ushort *)(param_1 + 7);
  param_1[0x32] = param_1;
  *(undefined2 *)((long)param_1 + 0x44) = 0;
  *(undefined2 *)(param_1 + 0x33) = DAT_10186760a;
  *(undefined2 *)((long)param_1 + 0x19a) = DAT_101867608;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = DAT_101dc0b88;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  *(undefined8 *)((long)param_1 + 0x1c4) = 0x400000003f800000;
  *(undefined8 *)((long)param_1 + 0x1bc) = 0;
  *(undefined4 *)((long)param_1 + 0x1cc) = 0x41f00000;
  *(byte *)(param_1 + 0x3a) = *(byte *)(param_1 + 0x3a) & 0xf0 | 0xc;
  *(undefined4 *)((long)param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xf) = 1;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x16) = 2;
  param_1[0x17] = FUN_10004b4e8;
  param_1[0x18] = 0;
  param_1[0x19] = FUN_10004b590;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 3;
  param_1[0x1e] = FUN_10004b638;
  param_1[0x1f] = 0;
  param_1[0x20] = FUN_10004b664;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 4;
  param_1[0x25] = FUN_10004b698;
  param_1[0x26] = 0;
  param_1[0x27] = FUN_10004b738;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined2 *)(param_1 + 0x2b) = 5;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined2 *)((long)param_1 + 0x15a) = 0;
  param_1[0x2e] = thunk_FUN_1010a01dc;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *puVar1 = *puVar1 & 0x8000 | 0x1bff;
  FUN_10004b744(puVar1,0,1);
  FUN_10004b744(puVar1,1,2);
  FUN_10004b744(puVar1,2,3);
  FUN_10004b744(puVar1,2,4);
  FUN_10004b744(puVar1,2,5);
  FUN_10004b744(puVar1,3,2);
  FUN_10004b744(puVar1,3,4);
  FUN_10004b744(puVar1,4,5);
  FUN_10004b7c8(puVar1,0,0,0);
  return param_1;
}




void FUN_10004bfd0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010004bfd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10004bfdc(void)

{
  if ((DAT_10184dd60 & 1) == 0) {
    DAT_10184dd58 = DAT_101872e38;
    DAT_10184dd60 = 1;
  }
  return;
}




undefined8 * FUN_10004c008(undefined8 *param_1)

{
  ushort *puVar1;
  
  *param_1 = &PTR_FUN_10144cf10;
  puVar1 = (ushort *)(param_1 + 5);
  param_1[0x29] = param_1;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined1 *)((long)param_1 + 0x34) = 0;
  param_1[7] = FUN_10004c158;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 1;
  param_1[0xe] = FUN_10004c1b8;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 3;
  param_1[0x15] = FUN_10004c224;
  param_1[0x1a] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 2;
  param_1[0x1c] = FUN_10004c290;
  param_1[0x1d] = 0;
  param_1[0x1e] = FUN_10004c2d0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 4;
  param_1[0x23] = FUN_10004c398;
  param_1[0x24] = 0;
  param_1[0x25] = FUN_10004c3d8;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *puVar1 = *puVar1 & 0x8000 | 0x17ff;
  FUN_10004c4a0(puVar1,0,1);
  FUN_10004c4a0(puVar1,1,2);
  FUN_10004c4a0(puVar1,2,3);
  FUN_10004c4a0(puVar1,3,4);
  FUN_10004c4a0(puVar1,4,1);
  FUN_10004c524(puVar1,0,0,0);
  return param_1;
}




void FUN_10004c158(long param_1)

{
  long lVar1;
  
  if (((*(long *)(param_1 + 0x10) != 0) &&
      (*(int *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + 0xa4) == DAT_10184dd68)) &&
     (lVar1 = FUN_1003a3524(), lVar1 != 0)) {
    FUN_10004c524(param_1 + 0x28,1,0,0);
    return;
  }
  return;
}




void FUN_10004c1b8(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dd68) {
    lVar2 = 0;
  }
  iVar1 = FUN_1003c1088(lVar2,0);
  if (iVar1 == 0) {
    return;
  }
  FUN_10004c524(param_1 + 0x28,2,0,0);
  return;
}




void FUN_10004c224(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dd68) {
    lVar2 = 0;
  }
  iVar1 = FUN_1003c1088(lVar2,0);
  if (iVar1 == 0) {
    return;
  }
  FUN_10004c524(param_1 + 0x28,4,0,0);
  return;
}




void FUN_10004c290(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_10004c728();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_10004c524(param_1 + 0x28,3,0,0);
  return;
}




void FUN_10004c2d0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dd68) {
    lVar3 = 0;
  }
  plVar4 = *(long **)(lVar3 + 0x18);
  while ((plVar4 != (long *)0x0 && (*(int *)(plVar4[1] + 0xa4) != DAT_10184db58))) {
    plVar4 = (long *)plVar4[4];
  }
  iVar1 = _rand();
  puVar5 = (&PTR_s_build___Sounds_Kraken_assetbundl_10184dfa0)[iVar1 % 4];
  lVar3 = FUN_1003a252c();
  uVar6 = FUN_1003aa420(*(undefined4 *)(lVar3 + 0x100));
  uVar2 = (**(code **)(*plVar4 + 0x188))(plVar4);
  FUN_100023f9c(uVar6,plVar4,puVar5,0,1,0x10ed,1,uVar2);
  return;
}




void FUN_10004c398(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_10004c728();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_10004c524(param_1 + 0x28,1,0,0);
  return;
}




void FUN_10004c3d8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dd68) {
    lVar3 = 0;
  }
  plVar4 = *(long **)(lVar3 + 0x18);
  while ((plVar4 != (long *)0x0 && (*(int *)(plVar4[1] + 0xa4) != DAT_10184db58))) {
    plVar4 = (long *)plVar4[4];
  }
  iVar1 = _rand();
  puVar5 = (&PTR_s_build___Sounds_Kraken_assetbundl_10184dfc0)[iVar1 % 4];
  lVar3 = FUN_1003a252c();
  uVar6 = FUN_1003aa420(*(undefined4 *)(lVar3 + 0x100));
  uVar2 = (**(code **)(*plVar4 + 0x188))(plVar4);
  FUN_100023f9c(uVar6,plVar4,puVar5,0,1,0x10ed,1,uVar2);
  return;
}




void FUN_10004c4a0(ushort *param_1,uint param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ushort *puVar6;
  
  uVar4 = (ulong)(*param_1 >> 10) & 0x1f;
  uVar3 = (uint)uVar4;
  if (uVar3 != 0) {
    uVar2 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_2) goto LAB_10004c4d4;
      uVar2 = uVar2 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar4 != uVar2);
    uVar2 = 0xffffffff;
LAB_10004c4d4:
    uVar5 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_3) {
        iVar1 = (int)uVar2;
        if (iVar1 == -1) {
          return;
        }
        param_1[(long)iVar1 * 0x1c + 5] =
             param_1[(long)iVar1 * 0x1c + 5] | (ushort)(1 << (ulong)(uVar5 & 0x1f));
        return;
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar3 != uVar5);
  }
  return;
}




void FUN_10004c524(ushort *param_1,uint param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ushort *puVar5;
  
  uVar1 = *param_1;
  if ((uVar1 >> 10 & 0x1f) != 0) {
    uVar2 = 0;
    puVar5 = param_1 + 4;
    do {
      if (*puVar5 == param_2) goto LAB_10004c568;
      uVar2 = uVar2 + 1;
      puVar5 = puVar5 + 0x1c;
    } while ((uVar1 >> 10 & 0x1f) != uVar2);
  }
  uVar2 = 0x1f;
LAB_10004c568:
  uVar3 = (ulong)uVar1 & 0x1f;
  if ((uint)uVar3 == 0x1f) {
    uVar1 = uVar1 & 0xfc1f;
  }
  else {
    if (uVar2 == (uint)uVar3) {
      return;
    }
    if ((param_1[uVar3 * 0x1c + 5] >> (ulong)(uVar2 & 0x1f) & 1) == 0) {
      return;
    }
    uVar1 = uVar1 & 0xfc1f | (ushort)((uVar2 & 0x1f) << 5);
    *param_1 = uVar1;
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar3 * 0x1c + 0x18);
    uVar4 = *(ulong *)(param_1 + uVar3 * 0x1c + 0x1c) & 1;
    if (uVar4 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar4 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 0x90) +
                                 ((long)*(ulong *)(param_1 + uVar3 * 0x1c + 0x1c) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
      (*UNRECOVERED_JUMPTABLE)();
      uVar1 = *param_1;
    }
  }
  uVar2 = uVar2 & 0x1f;
  *param_1 = (ushort)uVar2 | uVar1 & 0xfc00 | 0x3e0;
  if (uVar2 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + (ulong)uVar2 * 0x1c + 0x10);
    uVar3 = *(ulong *)(param_1 + (ulong)uVar2 * 0x1c + 0x14) & 1;
    if (uVar3 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar3 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 0x90) +
                                 ((long)*(ulong *)(param_1 + (ulong)uVar2 * 0x1c + 0x14) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
                    /* WARNING: Could not recover jumptable at 0x00010004c5cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_10004c640(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10144cf10;
  FUN_1010a0064();
  return;
}




void FUN_10004c650(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10144cf10;
  pvVar1 = (void *)FUN_1010a0064();
  operator_delete(pvVar1);
  return;
}




void FUN_10004c670(long param_1)

{
  long lVar1;
  
  DAT_10184dcc8 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184dcc8 + 1;
  lVar1 = param_1 + (ulong)DAT_10184dcc8 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = thunk_FUN_10004c008;
  *(code **)(lVar1 + 0xb8) = FUN_10004c81c;
  *(uint *)(lVar1 + 0xa4) = DAT_10184dcc8;
  *(undefined4 *)(lVar1 + 0xa8) = 0x150;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 2;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,3,FUN_10004c6dc,0);
  return;
}




void FUN_10004c6dc(long param_1)

{
  FUN_10004c6e4(param_1 + 0x28);
  return;
}




void FUN_10004c6e4(ushort *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)*param_1 & 0x1f;
  if ((int)uVar1 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar1 * 0x1c + 8);
    uVar2 = *(ulong *)(param_1 + uVar1 * 0x1c + 0xc) & 1;
    if (uVar2 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar2 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 0x90) +
                                 ((long)*(ulong *)(param_1 + uVar1 * 0x1c + 0xc) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
                    /* WARNING: Could not recover jumptable at 0x00010004c720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_10004c728(long param_1)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 local_248 [64];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dd68) {
    lVar4 = 0;
  }
  uVar3 = FUN_1010a0218(lVar4,local_248,0x40,DAT_10184dd58);
  if ((int)uVar3 != 0) {
    iVar2 = FUN_10004bfb4(local_248[0]);
    if (iVar2 == 0x10ed) {
      uVar3 = 1;
    }
    else {
      uVar1 = 1;
      do {
        uVar5 = uVar1;
        if ((uVar3 & 0xffffffff) == uVar5) break;
        iVar2 = FUN_10004bfb4(local_248[uVar5]);
        uVar1 = uVar5 + 1;
      } while (iVar2 != 0x10ed);
      uVar3 = (ulong)(uVar5 < (uVar3 & 0xffffffff));
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar3);
  }
  return;
}




undefined8 * thunk_FUN_10004c008(undefined8 *param_1)

{
  ushort *puVar1;
  
  *param_1 = &PTR_FUN_10144cf10;
  puVar1 = (ushort *)(param_1 + 5);
  param_1[0x29] = param_1;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined1 *)((long)param_1 + 0x34) = 0;
  param_1[7] = FUN_10004c158;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 1;
  param_1[0xe] = FUN_10004c1b8;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 3;
  param_1[0x15] = FUN_10004c224;
  param_1[0x1a] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 2;
  param_1[0x1c] = FUN_10004c290;
  param_1[0x1d] = 0;
  param_1[0x1e] = FUN_10004c2d0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 4;
  param_1[0x23] = FUN_10004c398;
  param_1[0x24] = 0;
  param_1[0x25] = FUN_10004c3d8;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *puVar1 = *puVar1 & 0x8000 | 0x17ff;
  FUN_10004c4a0(puVar1,0,1);
  FUN_10004c4a0(puVar1,1,2);
  FUN_10004c4a0(puVar1,2,3);
  FUN_10004c4a0(puVar1,3,4);
  FUN_10004c4a0(puVar1,4,1);
  FUN_10004c524(puVar1,0,0,0);
  return param_1;
}




void FUN_10004c81c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010004c824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10004c828(void)

{
  if ((DAT_10184dcd0 & 1) == 0) {
    DAT_10184dcc8 = DAT_101872e38;
    DAT_10184dcd0 = 1;
  }
  return;
}




void FUN_10004c854(void)

{
  if ((DAT_10184dd70 & 1) == 0) {
    DAT_10184dd68 = DAT_101872e38;
    DAT_10184dd70 = 1;
  }
  return;
}




void FUN_10004c880(void)

{
  if ((DAT_10184db60 & 1) == 0) {
    DAT_10184db58 = DAT_101872e38;
    DAT_10184db60 = 1;
  }
  return;
}




void FUN_10004c8ac(void)

{
  if ((DAT_10184dd60 & 1) == 0) {
    DAT_10184dd58 = DAT_101872e38;
    DAT_10184dd60 = 1;
  }
  return;
}




undefined8 * FUN_10004c8d8(undefined8 *param_1)

{
  ushort *puVar1;
  
  *param_1 = &PTR_FUN_10144cf40;
  puVar1 = (ushort *)(param_1 + 5);
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined2 *)((long)param_1 + 0x122) = DAT_10186760a;
  *(undefined2 *)((long)param_1 + 0x124) = DAT_101867608;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 0xd) = 1;
  param_1[0xe] = FUN_10004ca2c;
  param_1[0xf] = 0;
  *(undefined2 *)((long)param_1 + 0x6a) = 0;
  param_1[0x10] = FUN_10004ca4c;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 2;
  param_1[0x15] = FUN_10004ca90;
  param_1[0x16] = 0;
  param_1[0x17] = FUN_10004cb60;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 3;
  param_1[0x1c] = FUN_10004cc18;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = param_1;
  *puVar1 = *puVar1 & 0x8000 | 0x13ff;
  FUN_10004cccc(puVar1,0,1);
  FUN_10004cccc(puVar1,1,2);
  FUN_10004cccc(puVar1,2,3);
  FUN_10004cccc(puVar1,3,1);
  FUN_10004cccc(puVar1,3,2);
  FUN_10004cd50(puVar1,0,0,0);
  return param_1;
}




void FUN_10004ca2c(long param_1)

{
  if (*(char *)(param_1 + 0x120) != '\0') {
    FUN_10004cd50(param_1 + 0x28,2,0,0);
    return;
  }
  return;
}




void FUN_10004ca4c(long param_1)

{
  FUN_10052c384(*(undefined2 *)(param_1 + 0x124));
  *(undefined2 *)(param_1 + 0x122) = DAT_10186760a;
  *(undefined2 *)(param_1 + 0x124) = DAT_101867608;
  return;
}




void FUN_10004ca90(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 local_40;
  undefined4 local_38;
  
  if (*(char *)(param_1 + 0x120) != '\0') {
    fVar3 = *(float *)(param_1 + 300);
    fVar2 = (float)FUN_1010a1cd4();
    fVar2 = (float)NEON_fminnm(fVar2 + fVar3,0x3f800000);
    *(float *)(param_1 + 300) = fVar2;
    fVar4 = *(float *)(*(long *)(param_1 + 0x118) + 8);
    fVar2 = fVar2 + -1.0;
    fVar3 = (float)FUN_1000fe37c();
    fVar3 = fVar3 * fVar4;
    *(float *)(param_1 + 0x128) = fVar3 + fVar3 * fVar2 * fVar2 * fVar2;
    lVar1 = *(long *)(param_1 + 0x118);
    local_40 = *(undefined8 *)(lVar1 + 0x14);
    local_38 = *(undefined4 *)(lVar1 + 0x1c);
    FUN_10052c2ec(*(undefined4 *)(lVar1 + 0xc),*(undefined4 *)(lVar1 + 0x10),
                  *(undefined2 *)(param_1 + 0x124),&local_40,&DAT_1013cd800);
    FUN_10052c364(*(undefined4 *)(param_1 + 0x128),*(undefined2 *)(param_1 + 0x124));
    return;
  }
  FUN_10004cd50(param_1 + 0x28,3,0,0);
  return;
}




void FUN_10004cb60(long param_1)

{
  undefined8 ***pppuVar1;
  undefined1 **ppuVar2;
  undefined2 uVar3;
  undefined1 *local_50;
  undefined8 uStack_48;
  long local_40;
  undefined8 **local_38;
  undefined8 uStack_30;
  long local_28;
  
  FUN_10052c384(*(undefined2 *)(param_1 + 0x124));
  local_38 = (undefined8 ***)0x0;
  uStack_30 = 0;
  local_28 = 0;
  local_50 = (undefined1 *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  FUN_1006581d8(**(undefined8 **)(param_1 + 0x118),&local_38);
  pppuVar1 = (undefined8 ***)local_38;
  if (-1 < local_28) {
    pppuVar1 = &local_38;
  }
  FUN_100658d0c(pppuVar1,&local_50);
  ppuVar2 = (undefined1 **)local_50;
  if (-1 < local_40) {
    ppuVar2 = &local_50;
  }
  uVar3 = FUN_10052c2d4(ppuVar2,2,1);
  *(undefined2 *)(param_1 + 0x122) = uVar3;
  uVar3 = FUN_10052c374(*(undefined4 *)(param_1 + 0x128));
  *(undefined2 *)(param_1 + 0x124) = uVar3;
  if (local_40 < 0) {
    operator_delete(local_50);
  }
  if (local_28 < 0) {
    operator_delete(local_38);
  }
  return;
}




void FUN_10004cc18(long param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (*(char *)(param_1 + 0x120) == '\0') {
    fVar4 = *(float *)(param_1 + 300);
    fVar2 = (float)FUN_1010a1cd4();
    fVar4 = fVar4 - fVar2;
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    *(float *)(param_1 + 300) = fVar4;
    fVar4 = 1.0 - fVar4;
    fVar3 = *(float *)(*(long *)(param_1 + 0x118) + 8);
    fVar2 = (float)FUN_1000fe37c();
    *(float *)(param_1 + 0x128) = (fVar3 - fVar4 * fVar4 * fVar4 * fVar3) * fVar2;
    FUN_10052c364(*(undefined2 *)(param_1 + 0x124));
    if (0.001 <= ABS(*(float *)(param_1 + 0x128))) {
      return;
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 2;
  }
  FUN_10004cd50(param_1 + 0x28,uVar1,0,0);
  return;
}




void FUN_10004cccc(ushort *param_1,uint param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ushort *puVar6;
  
  uVar4 = (ulong)(*param_1 >> 10) & 0x1f;
  uVar3 = (uint)uVar4;
  if (uVar3 != 0) {
    uVar2 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_2) goto LAB_10004cd00;
      uVar2 = uVar2 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar4 != uVar2);
    uVar2 = 0xffffffff;
LAB_10004cd00:
    uVar5 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_3) {
        iVar1 = (int)uVar2;
        if (iVar1 == -1) {
          return;
        }
        param_1[(long)iVar1 * 0x1c + 5] =
             param_1[(long)iVar1 * 0x1c + 5] | (ushort)(1 << (ulong)(uVar5 & 0x1f));
        return;
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar3 != uVar5);
  }
  return;
}




void FUN_10004cd50(ushort *param_1,uint param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ushort *puVar5;
  
  uVar1 = *param_1;
  if ((uVar1 >> 10 & 0x1f) != 0) {
    uVar2 = 0;
    puVar5 = param_1 + 4;
    do {
      if (*puVar5 == param_2) goto LAB_10004cd94;
      uVar2 = uVar2 + 1;
      puVar5 = puVar5 + 0x1c;
    } while ((uVar1 >> 10 & 0x1f) != uVar2);
  }
  uVar2 = 0x1f;
LAB_10004cd94:
  uVar3 = (ulong)uVar1 & 0x1f;
  if ((uint)uVar3 == 0x1f) {
    uVar1 = uVar1 & 0xfc1f;
  }
  else {
    if (uVar2 == (uint)uVar3) {
      return;
    }
    if ((param_1[uVar3 * 0x1c + 5] >> (ulong)(uVar2 & 0x1f) & 1) == 0) {
      return;
    }
    uVar1 = uVar1 & 0xfc1f | (ushort)((uVar2 & 0x1f) << 5);
    *param_1 = uVar1;
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar3 * 0x1c + 0x18);
    uVar4 = *(ulong *)(param_1 + uVar3 * 0x1c + 0x1c) & 1;
    if (uVar4 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar4 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 0x74) +
                                 ((long)*(ulong *)(param_1 + uVar3 * 0x1c + 0x1c) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
      (*UNRECOVERED_JUMPTABLE)();
      uVar1 = *param_1;
    }
  }
  uVar2 = uVar2 & 0x1f;
  *param_1 = (ushort)uVar2 | uVar1 & 0xfc00 | 0x3e0;
  if (uVar2 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + (ulong)uVar2 * 0x1c + 0x10);
    uVar3 = *(ulong *)(param_1 + (ulong)uVar2 * 0x1c + 0x14) & 1;
    if (uVar3 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar3 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 0x74) +
                                 ((long)*(ulong *)(param_1 + (ulong)uVar2 * 0x1c + 0x14) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
                    /* WARNING: Could not recover jumptable at 0x00010004cdf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_10004ce6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10144cf40;
  FUN_10052c384(*(undefined2 *)((long)param_1 + 0x124));
  *(undefined2 *)((long)param_1 + 0x122) = DAT_10186760a;
  *(undefined2 *)((long)param_1 + 0x124) = DAT_101867608;
  FUN_1010a0064(param_1);
  return;
}




void FUN_10004cec0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10144cf40;
  FUN_10052c384(*(undefined2 *)((long)param_1 + 0x124));
  *(undefined2 *)((long)param_1 + 0x122) = DAT_10186760a;
  *(undefined2 *)((long)param_1 + 0x124) = DAT_101867608;
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10004cf18(long param_1)

{
  long lVar1;
  
  DAT_10184df10 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184df10 + 1;
  lVar1 = param_1 + (ulong)DAT_10184df10 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = thunk_FUN_10004c8d8;
  *(code **)(lVar1 + 0xb8) = FUN_10004d080;
  *(uint *)(lVar1 + 0xa4) = DAT_10184df10;
  *(undefined4 *)(lVar1 + 0xa8) = 0x130;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x20;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,5,FUN_10004cf84,0);
  return;
}




void FUN_10004cf84(long param_1)

{
  FUN_10004cfc0();
  FUN_10004d038(param_1 + 0x28);
  return;
}




void FUN_10004cfa8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x118) = param_2;
  FUN_10004cd50(param_1 + 0x28,1,0,0);
  return;
}




void FUN_10004cfc0(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float local_30 [4];
  
  FUN_10034ee90();
  lVar1 = FUN_100345d90();
  if (lVar1 != 0) {
    FUN_100345b68(lVar1,local_30,0);
    lVar1 = *(long *)(param_1 + 0x118);
    local_30[0] = local_30[0] - *(float *)(lVar1 + 0x14);
    fVar2 = (float)local_30._4_8_ - (float)*(undefined8 *)(lVar1 + 0x18);
    fVar3 = SUB84(local_30._4_8_,4) - (float)((ulong)*(undefined8 *)(lVar1 + 0x18) >> 0x20);
    *(bool *)(param_1 + 0x120) =
         fVar2 * fVar2 + local_30[0] * local_30[0] + fVar3 * fVar3 <=
         *(float *)(lVar1 + 0x10) * *(float *)(lVar1 + 0x10);
  }
  return;
}




void FUN_10004d038(ushort *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)*param_1 & 0x1f;
  if ((int)uVar1 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar1 * 0x1c + 8);
    uVar2 = *(ulong *)(param_1 + uVar1 * 0x1c + 0xc) & 1;
    if (uVar2 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar2 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 0x74) +
                                 ((long)*(ulong *)(param_1 + uVar1 * 0x1c + 0xc) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
                    /* WARNING: Could not recover jumptable at 0x00010004d074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




undefined8 * thunk_FUN_10004c8d8(undefined8 *param_1)

{
  ushort *puVar1;
  
  *param_1 = &PTR_FUN_10144cf40;
  puVar1 = (ushort *)(param_1 + 5);
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined2 *)((long)param_1 + 0x122) = DAT_10186760a;
  *(undefined2 *)((long)param_1 + 0x124) = DAT_101867608;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 0xd) = 1;
  param_1[0xe] = FUN_10004ca2c;
  param_1[0xf] = 0;
  *(undefined2 *)((long)param_1 + 0x6a) = 0;
  param_1[0x10] = FUN_10004ca4c;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 2;
  param_1[0x15] = FUN_10004ca90;
  param_1[0x16] = 0;
  param_1[0x17] = FUN_10004cb60;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 3;
  param_1[0x1c] = FUN_10004cc18;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = param_1;
  *puVar1 = *puVar1 & 0x8000 | 0x13ff;
  FUN_10004cccc(puVar1,0,1);
  FUN_10004cccc(puVar1,1,2);
  FUN_10004cccc(puVar1,2,3);
  FUN_10004cccc(puVar1,3,1);
  FUN_10004cccc(puVar1,3,2);
  FUN_10004cd50(puVar1,0,0,0);
  return param_1;
}




void FUN_10004d080(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010004d088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10004d08c(void)

{
  if ((DAT_10184df18 & 1) == 0) {
    DAT_10184df10 = DAT_101872e38;
    DAT_10184df18 = 1;
  }
  return;
}




undefined8 * FUN_10004d0b8(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  undefined8 *puVar5;
  ushort *puVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_FUN_10144cf70;
  puVar6 = (ushort *)(param_1 + 5);
  *puVar6 = *puVar6 & 0x8000 | 0x3ff;
  puVar7 = param_1 + 6;
  *(undefined4 *)puVar7 = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x22] = param_1;
  *(undefined2 *)(param_1 + 0x25) = DAT_10186760a;
  *(undefined2 *)((long)param_1 + 0x12a) = DAT_101867608;
  *(undefined4 *)((long)param_1 + 300) = 0;
  *(undefined1 *)((long)param_1 + 0x134) = 0;
  lVar4 = FUN_1010a0298(param_1,DAT_10184dfe0);
  param_1[0x23] = lVar4;
  FUN_100473f3c(lVar4 + 0x40,FUN_10004d2c8,param_1);
  FUN_100473f44(param_1[0x23] + 0x40,FUN_10004d2d4,param_1);
  FUN_100473f34(param_1[0x23] + 0x40,1);
  uVar3 = *puVar6;
  puVar5 = puVar7 + ((ulong)(uVar3 >> 10) & 0x1f) * 7;
  *(undefined4 *)puVar5 = 0;
  uVar1 = uVar3 + 0x400;
  puVar5[2] = 0;
  puVar5[1] = 0;
  uVar2 = uVar3 & 0xffff83ff;
  puVar5[6] = 0;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[3] = 0;
  puVar5 = puVar7 + (ulong)(uVar1 >> 10 & 0x1f) * 7;
  *(undefined4 *)puVar5 = 1;
  puVar5[1] = FUN_10004d304;
  puVar5[2] = 0;
  uVar1 = (uVar1 & 0x7c00 | uVar2) + 0x400;
  puVar5[3] = FUN_10004d324;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5 = puVar7 + (ulong)(uVar1 >> 10 & 0x1f) * 7;
  *(undefined2 *)puVar5 = 2;
  puVar5[1] = FUN_10004d368;
  puVar5[2] = 0;
  *(undefined2 *)((long)puVar5 + 2) = 0;
  uVar1 = (uVar1 & 0x7c00 | uVar2) + 0x400;
  puVar5[3] = FUN_10004d3f0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar7 = puVar7 + (ulong)(uVar1 >> 10 & 0x1f) * 7;
  *(undefined2 *)puVar7 = 3;
  puVar7[1] = FUN_10004d4a8;
  *(undefined2 *)((long)puVar7 + 2) = 0;
  puVar7[6] = 0;
  puVar7[3] = 0;
  puVar7[2] = 0;
  puVar7[5] = 0;
  puVar7[4] = 0;
  *puVar6 = ((ushort)uVar1 & 0x7c00 | (ushort)uVar2) + 0x400 & 0x7c00 | (ushort)uVar2;
  FUN_10004d554(puVar6,0,1);
  FUN_10004d554(puVar6,1,2);
  FUN_10004d554(puVar6,2,3);
  FUN_10004d554(puVar6,3,1);
  FUN_10004d554(puVar6,3,2);
  FUN_10004d5d8(puVar6,0,0,0);
  return param_1;
}




void FUN_10004d2c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10004d940(param_3,param_2,param_2);
  return;
}




void FUN_10004d2d4(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  
  if ((param_2 != 0) && (iVar1 = FUN_10034ea2c(*(undefined4 *)(param_2 + 0x260)), iVar1 != 0)) {
    *(undefined1 *)(param_3 + 0x134) = 0;
  }
  return;
}




void FUN_10004d304(long param_1)

{
  if (*(char *)(param_1 + 0x134) != '\0') {
    FUN_10004d5d8(param_1 + 0x28,2,0,0);
    return;
  }
  return;
}




void FUN_10004d324(long param_1)

{
  FUN_10052c384(*(undefined2 *)(param_1 + 0x12a));
  *(undefined2 *)(param_1 + 0x128) = DAT_10186760a;
  *(undefined2 *)(param_1 + 0x12a) = DAT_101867608;
  return;
}




void FUN_10004d368(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (*(char *)(param_1 + 0x134) != '\0') {
    fVar4 = *(float *)(param_1 + 0x130);
    fVar1 = (float)FUN_1010a1cd4();
    fVar3 = *(float *)(*(long *)(param_1 + 0x120) + 8);
    fVar2 = *(float *)(*(long *)(param_1 + 0x120) + 0xc);
    fVar1 = (float)NEON_fminnm(fVar1 + fVar4,fVar2);
    *(float *)(param_1 + 0x130) = fVar1;
    fVar1 = fVar1 / fVar2 + -1.0;
    *(float *)(param_1 + 300) = fVar3 + fVar3 * fVar1 * fVar1 * fVar1;
    FUN_10052c364(*(undefined2 *)(param_1 + 0x12a));
    return;
  }
  FUN_10004d5d8(param_1 + 0x28,3,0,0);
  return;
}




void FUN_10004d3f0(long param_1)

{
  undefined8 ***pppuVar1;
  undefined1 **ppuVar2;
  undefined2 uVar3;
  undefined1 *local_50;
  undefined8 local_48;
  long lStack_40;
  undefined8 **local_38;
  undefined8 uStack_30;
  long local_28;
  
  FUN_10052c384(*(undefined2 *)(param_1 + 0x12a));
  local_38 = (undefined8 ***)0x0;
  uStack_30 = 0;
  local_28 = 0;
  local_48 = 0;
  lStack_40 = 0;
  local_50 = (undefined1 *)0x0;
  FUN_1006581d8(*(undefined8 *)(*(long *)(param_1 + 0x120) + 0x10),&local_38);
  pppuVar1 = (undefined8 ***)local_38;
  if (-1 < local_28) {
    pppuVar1 = &local_38;
  }
  FUN_100658d0c(pppuVar1,&local_50);
  ppuVar2 = (undefined1 **)local_50;
  if (-1 < lStack_40) {
    ppuVar2 = &local_50;
  }
  uVar3 = FUN_10052c2d4(ppuVar2,4,1);
  *(undefined2 *)(param_1 + 0x128) = uVar3;
  uVar3 = FUN_10052c374(*(undefined4 *)(param_1 + 300));
  *(undefined2 *)(param_1 + 0x12a) = uVar3;
  if (lStack_40 < 0) {
    operator_delete(local_50);
  }
  if (local_28 < 0) {
    operator_delete(local_38);
  }
  return;
}




void FUN_10004d4a8(long param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (*(char *)(param_1 + 0x134) == '\0') {
    fVar4 = *(float *)(param_1 + 0x130);
    fVar2 = (float)FUN_1010a1cd4();
    fVar4 = fVar4 - fVar2;
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    *(float *)(param_1 + 0x130) = fVar4;
    fVar3 = *(float *)(*(long *)(param_1 + 0x120) + 8);
    fVar2 = *(float *)(*(long *)(param_1 + 0x120) + 0xc);
    fVar2 = (fVar2 - fVar4) / fVar2;
    *(float *)(param_1 + 300) = fVar3 - fVar2 * fVar2 * fVar2 * fVar3;
    FUN_10052c364(*(undefined2 *)(param_1 + 0x12a));
    if (0.001 <= ABS(*(float *)(param_1 + 300))) {
      return;
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 2;
  }
  FUN_10004d5d8(param_1 + 0x28,uVar1,0,0);
  return;
}




void FUN_10004d554(ushort *param_1,uint param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ushort *puVar6;
  
  uVar4 = (ulong)(*param_1 >> 10) & 0x1f;
  uVar3 = (uint)uVar4;
  if (uVar3 != 0) {
    uVar2 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_2) goto LAB_10004d588;
      uVar2 = uVar2 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar4 != uVar2);
    uVar2 = 0xffffffff;
LAB_10004d588:
    uVar5 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_3) {
        iVar1 = (int)uVar2;
        if (iVar1 == -1) {
          return;
        }
        param_1[(long)iVar1 * 0x1c + 5] =
             param_1[(long)iVar1 * 0x1c + 5] | (ushort)(1 << (ulong)(uVar5 & 0x1f));
        return;
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar3 != uVar5);
  }
  return;
}




void FUN_10004d5d8(ushort *param_1,uint param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ushort *puVar5;
  
  uVar1 = *param_1;
  if ((uVar1 >> 10 & 0x1f) != 0) {
    uVar2 = 0;
    puVar5 = param_1 + 4;
    do {
      if (*puVar5 == param_2) goto LAB_10004d61c;
      uVar2 = uVar2 + 1;
      puVar5 = puVar5 + 0x1c;
    } while ((uVar1 >> 10 & 0x1f) != uVar2);
  }
  uVar2 = 0x1f;
LAB_10004d61c:
  uVar3 = (ulong)uVar1 & 0x1f;
  if ((uint)uVar3 == 0x1f) {
    uVar1 = uVar1 & 0xfc1f;
  }
  else {
    if (uVar2 == (uint)uVar3) {
      return;
    }
    if ((param_1[uVar3 * 0x1c + 5] >> (ulong)(uVar2 & 0x1f) & 1) == 0) {
      return;
    }
    uVar1 = uVar1 & 0xfc1f | (ushort)((uVar2 & 0x1f) << 5);
    *param_1 = uVar1;
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar3 * 0x1c + 0x18);
    uVar4 = *(ulong *)(param_1 + uVar3 * 0x1c + 0x1c) & 1;
    if (uVar4 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar4 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 0x74) +
                                 ((long)*(ulong *)(param_1 + uVar3 * 0x1c + 0x1c) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
      (*UNRECOVERED_JUMPTABLE)();
      uVar1 = *param_1;
    }
  }
  uVar2 = uVar2 & 0x1f;
  *param_1 = (ushort)uVar2 | uVar1 & 0xfc00 | 0x3e0;
  if (uVar2 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + (ulong)uVar2 * 0x1c + 0x10);
    uVar3 = *(ulong *)(param_1 + (ulong)uVar2 * 0x1c + 0x14) & 1;
    if (uVar3 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar3 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 0x74) +
                                 ((long)*(ulong *)(param_1 + (ulong)uVar2 * 0x1c + 0x14) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
                    /* WARNING: Could not recover jumptable at 0x00010004d680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_10004d6f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10144cf70;
  FUN_10052c384(*(undefined2 *)((long)param_1 + 0x12a));
  *(undefined2 *)(param_1 + 0x25) = DAT_10186760a;
  *(undefined2 *)((long)param_1 + 0x12a) = DAT_101867608;
  FUN_1010a0064(param_1);
  return;
}




void FUN_10004d748(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10144cf70;
  FUN_10052c384(*(undefined2 *)((long)param_1 + 0x12a));
  *(undefined2 *)(param_1 + 0x25) = DAT_10186760a;
  *(undefined2 *)((long)param_1 + 0x12a) = DAT_101867608;
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10004d7a0(long param_1)

{
  long lVar1;
  
  DAT_10184de80 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184de80 + 1;
  lVar1 = param_1 + (ulong)DAT_10184de80 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = thunk_FUN_10004d0b8;
  *(code **)(lVar1 + 0xb8) = FUN_10004da3c;
  *(uint *)(lVar1 + 0xa4) = DAT_10184de80;
  *(undefined4 *)(lVar1 + 0xa8) = 0x138;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x10;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,5,FUN_10004d80c,0);
  return;
}




void FUN_10004d80c(long param_1)

{
  FUN_10004d8fc(param_1 + 0x28);
  return;
}




void FUN_10004d814(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_248 [64];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  plVar3 = *(long **)(param_2 + 0x20);
  puVar2 = (undefined8 *)*plVar3;
  if (puVar2 == (undefined8 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    do {
      local_248[uVar4 & 0xffffffff] = *puVar2;
      puVar2 = (undefined8 *)plVar3[uVar4 + 1];
      uVar4 = uVar4 + 1;
    } while (puVar2 != (undefined8 *)0x0);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x118);
  uVar1 = FUN_10034ee90();
  FUN_10047115c(0xff7fffff,uVar5,uVar1,local_248,uVar4);
  *(long *)(param_1 + 0x120) = param_2;
  FUN_10004d5d8(param_1 + 0x28,1,0,0);
  if (*(long *)PTR____stack_chk_guard_101444218 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




undefined8 FUN_10004d8f0(long param_1)

{
  return **(undefined8 **)(param_1 + 0x120);
}




void FUN_10004d8fc(ushort *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)*param_1 & 0x1f;
  if ((int)uVar1 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar1 * 0x1c + 8);
    uVar2 = *(ulong *)(param_1 + uVar1 * 0x1c + 0xc) & 1;
    if (uVar2 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar2 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 0x74) +
                                 ((long)*(ulong *)(param_1 + uVar1 * 0x1c + 0xc) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
                    /* WARNING: Could not recover jumptable at 0x00010004d938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_10004d940(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  if (param_3 == 0) {
    return;
  }
  iVar2 = FUN_10034ea2c(*(undefined4 *)(param_3 + 0x260));
  if (iVar2 != 0) {
    *(undefined1 *)(param_1 + 0x134) = 1;
  }
  uVar5 = 0xffff0000;
  lVar3 = param_3;
LAB_10004d980:
  do {
    do {
      lVar4 = lVar3;
      if ((lVar4 != param_3) &&
         (lVar3 = FUN_1010a0918(*(undefined8 *)(lVar4 + 8),0x4ccb075d), lVar3 != 0)) {
        (**(code **)(lVar3 + 8))(lVar4);
      }
      if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0)) {
        uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
        goto LAB_10004d980;
      }
      if ((uVar5 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar4 + 0x20);
    } while (*(long *)(lVar4 + 0x20) != 0);
    lVar4 = *(long *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      return;
    }
    uVar1 = uVar5 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar5 = uVar1 | uVar5 & 0xffff0000;
    while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
      if ((uVar5 - 1 & 0xffff) == 0) {
        return;
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
      if (lVar4 == 0) {
        return;
      }
    }
  } while( true );
}




undefined8 * thunk_FUN_10004d0b8(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  undefined8 *puVar5;
  ushort *puVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_FUN_10144cf70;
  puVar6 = (ushort *)(param_1 + 5);
  *puVar6 = *puVar6 & 0x8000 | 0x3ff;
  puVar7 = param_1 + 6;
  *(undefined4 *)puVar7 = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x22] = param_1;
  *(undefined2 *)(param_1 + 0x25) = DAT_10186760a;
  *(undefined2 *)((long)param_1 + 0x12a) = DAT_101867608;
  *(undefined4 *)((long)param_1 + 300) = 0;
  *(undefined1 *)((long)param_1 + 0x134) = 0;
  lVar4 = FUN_1010a0298(param_1,DAT_10184dfe0);
  param_1[0x23] = lVar4;
  FUN_100473f3c(lVar4 + 0x40,FUN_10004d2c8,param_1);
  FUN_100473f44(param_1[0x23] + 0x40,FUN_10004d2d4,param_1);
  FUN_100473f34(param_1[0x23] + 0x40,1);
  uVar3 = *puVar6;
  puVar5 = puVar7 + ((ulong)(uVar3 >> 10) & 0x1f) * 7;
  *(undefined4 *)puVar5 = 0;
  uVar1 = uVar3 + 0x400;
  puVar5[2] = 0;
  puVar5[1] = 0;
  uVar2 = uVar3 & 0xffff83ff;
  puVar5[6] = 0;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[3] = 0;
  puVar5 = puVar7 + (ulong)(uVar1 >> 10 & 0x1f) * 7;
  *(undefined4 *)puVar5 = 1;
  puVar5[1] = FUN_10004d304;
  puVar5[2] = 0;
  uVar1 = (uVar1 & 0x7c00 | uVar2) + 0x400;
  puVar5[3] = FUN_10004d324;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5 = puVar7 + (ulong)(uVar1 >> 10 & 0x1f) * 7;
  *(undefined2 *)puVar5 = 2;
  puVar5[1] = FUN_10004d368;
  puVar5[2] = 0;
  *(undefined2 *)((long)puVar5 + 2) = 0;
  uVar1 = (uVar1 & 0x7c00 | uVar2) + 0x400;
  puVar5[3] = FUN_10004d3f0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar7 = puVar7 + (ulong)(uVar1 >> 10 & 0x1f) * 7;
  *(undefined2 *)puVar7 = 3;
  puVar7[1] = FUN_10004d4a8;
  *(undefined2 *)((long)puVar7 + 2) = 0;
  puVar7[6] = 0;
  puVar7[3] = 0;
  puVar7[2] = 0;
  puVar7[5] = 0;
  puVar7[4] = 0;
  *puVar6 = ((ushort)uVar1 & 0x7c00 | (ushort)uVar2) + 0x400 & 0x7c00 | (ushort)uVar2;
  FUN_10004d554(puVar6,0,1);
  FUN_10004d554(puVar6,1,2);
  FUN_10004d554(puVar6,2,3);
  FUN_10004d554(puVar6,3,1);
  FUN_10004d554(puVar6,3,2);
  FUN_10004d5d8(puVar6,0,0,0);
  return param_1;
}




void FUN_10004da3c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010004da44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10004da48(void)

{
  if ((DAT_10184dfe8 & 1) == 0) {
    DAT_10184dfe0 = DAT_101872e38;
    DAT_10184dfe8 = 1;
  }
  return;
}




void FUN_10004da74(void)

{
  if ((DAT_10184de88 & 1) == 0) {
    DAT_10184de80 = DAT_101872e38;
    DAT_10184de88 = 1;
  }
  return;
}




undefined8 FUN_10004daa0(void)

{
  return DAT_101dc3408;
}




void FUN_10004daac(undefined8 param_1,undefined8 param_2)

{
  if (DAT_101dc3408 != 0) {
    FUN_1000ad2b4(DAT_101dc3408 + 0x138,param_1,param_2);
    return;
  }
  return;
}




void FUN_10004dacc(undefined8 param_1,undefined8 param_2)

{
  if (DAT_101dc3408 != 0) {
    FUN_1000ad2c0(DAT_101dc3408 + 0x138,param_1,param_2);
    return;
  }
  return;
}




void FUN_10004daec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_101dc3408 != 0) {
    FUN_1000ad2cc(DAT_101dc3408 + 0x138,param_1,param_2,param_3);
    return;
  }
  return;
}




void FUN_10004db10(void)

{
  return;
}




undefined8 * FUN_10004db14(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  char local_c1;
  undefined1 auStack_c0 [4];
  undefined1 auStack_bc [4];
  code *local_b8;
  undefined8 *puStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  
  *param_1 = &PTR_thunk_FUN_10004e314_10144cfa0;
  puVar1 = param_1 + 5;
  FUN_1006421a8(puVar1);
  param_1[5] = &PTR_thunk_FUN_10064221c_10144b7e8;
  puVar2 = param_1 + 0x16;
  FUN_1006421a8(puVar2);
  param_1[0x16] = &PTR_thunk_FUN_10064221c_10144b7e8;
  puVar3 = param_1 + 0x27;
  thunk_FUN_1000aca0c(puVar3);
  FUN_1006421a8();
  param_1[0x283] = &PTR_thunk_FUN_10064221c_10144b7e8;
  puVar4 = param_1 + 0x294;
  thunk_FUN_100183990(puVar4,1);
  puVar5 = param_1 + 0x352;
  thunk_FUN_100183990(puVar5,1);
  thunk_FUN_1000aaf24(param_1 + 0x410);
  thunk_FUN_1000ad41c(param_1 + 0x42b);
  thunk_FUN_1000b2bf4(param_1 + 0x6cb);
  thunk_FUN_1000c0a40();
  thunk_FUN_1000a2858();
  param_1[0x1bba] = 0;
  *(undefined2 *)(param_1 + 0x1bbb) = 0xffff;
  *(undefined8 *)((long)param_1 + 0xdddc) = 0x3f800000;
  *(byte *)((long)param_1 + 0xdde4) = *(byte *)((long)param_1 + 0xdde4) & 0xf8;
  DAT_101dc3408 = param_1;
  FUN_100641464(auStack_bc,auStack_c0);
  iVar10 = FUN_100126c88();
  *(uint *)((long)param_1 + 0xac) = *(uint *)((long)param_1 + 0xac) & 0xfffffffb;
  plVar11 = (long *)FUN_100641574("ingame-effects");
  (**(code **)(*plVar11 + 0x78))(plVar11,param_1 + 0x410,1);
  plVar11 = (long *)FUN_100641574("ingame-ui");
  (**(code **)(*plVar11 + 0x78))(plVar11,puVar1,1);
  FUN_10002c09c(puVar1);
  FUN_100642bd8(puVar1,puVar2,1);
  FUN_100642bd8(puVar2,param_1 + 0x42b,1);
  FUN_100642bd8(puVar2,puVar3,1);
  FUN_100642bd8(puVar2,param_1 + 0x6cb,1);
  FUN_100642bd8(puVar2,puVar4,1);
  FUN_100642bd8(puVar2,puVar5,1);
  FUN_100642bd8(puVar2,param_1 + 0x1410,1);
  FUN_100642bd8(puVar1,param_1 + 0x283,1);
  FUN_100642bd8(param_1 + 0x283,param_1[0x1133],1);
  *(uint *)((long)param_1 + 0x1bc) = *(uint *)((long)param_1 + 0x1bc) | 4;
  FUN_1000c0dbc(param_1 + 0x1132);
  uVar7 = DAT_101d91884;
  local_90 = DAT_101d91884;
  local_b8 = FUN_10004e258;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  puStack_b0 = param_1;
  FUN_10001554c(param_1[0x1133] + 8,&local_b8);
  FUN_100183c50(0x3ee66666,puVar4,&DAT_10115a164);
  uVar8 = DAT_101dbd458;
  local_90 = DAT_101dbd458;
  local_b8 = thunk_FUN_10004eadc;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  puStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x295,&local_b8);
  uVar9 = DAT_101dbd484;
  local_90 = DAT_101dbd484;
  local_b8 = thunk_FUN_10004eadc;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  puStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x295,&local_b8);
  FUN_1001b495c(0,puVar4);
  FUN_100652cdc(param_1 + 0x32e,"hud_icon_score");
  uVar6 = *(uint *)((long)param_1 + 0x19f4);
  if ((uVar6 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x19f4) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x5900;
    FUN_1000200a0(param_1 + 0x32e);
  }
  uVar6 = *(uint *)((long)param_1 + 0x1904);
  if ((uVar6 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1904) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x2600;
    FUN_1000200a0(param_1 + 0x310);
  }
  if ((*(uint *)((long)param_1 + 0x1814) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x1814) = *(uint *)((long)param_1 + 0x1814) & 0xffff807f;
    FUN_1000200a0(param_1 + 0x2f2);
  }
  FUN_100183c78(0x3f800000,0x3fc00000,puVar4);
  fVar13 = (float)FUN_10064259c(puVar4);
  fVar15 = 10.0;
  fVar14 = 15.0;
  if (iVar10 == 0) {
    fVar14 = 10.0;
  }
  fVar16 = fVar14 + fVar13 * 0.5;
  FUN_10064259c(puVar4);
  fVar13 = fVar14 + fVar15 * 0.5;
  if ((*(float *)(param_1 + 0x29c) != fVar16) || (*(float *)((long)param_1 + 0x14e4) != fVar13)) {
    *(float *)(param_1 + 0x29c) = fVar16;
    *(float *)((long)param_1 + 0x14e4) = fVar13;
    FUN_1000200a0(puVar4);
  }
  local_b8 = (code *)&DAT_3f0000003f000000;
  (**(code **)(param_1[0x294] + 0x28))(puVar4,&local_b8);
  FUN_100183c50(0x3ee66666,puVar5,&DAT_10115a164);
  local_90 = uVar8;
  local_b8 = thunk_FUN_10004eb44;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  puStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x353,&local_b8);
  local_90 = uVar9;
  local_b8 = thunk_FUN_10004eb44;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  puStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x353,&local_b8);
  FUN_1001b495c(0,puVar5);
  FUN_100652cdc(param_1 + 0x3ec,"hud_icon_replayKit");
  uVar6 = *(uint *)((long)param_1 + 0x1fe4);
  if ((uVar6 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x1fe4) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x3300;
    FUN_1000200a0(param_1 + 0x3ec);
  }
  puVar1 = param_1 + 0x3ce;
  uVar6 = *(uint *)((long)param_1 + 0x1ef4);
  if ((uVar6 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1ef4) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x2600;
    FUN_1000200a0(puVar1);
  }
  FUN_100652dd4(puVar1,&DAT_10115a164,2);
  FUN_10064e47c(0x42ba0000,0x42ba0000,puVar1);
  puVar1 = param_1 + 0x3b0;
  FUN_100652cdc(puVar1,"hud_icon_rings");
  uVar6 = *(uint *)((long)param_1 + 0x1e04);
  if ((uVar6 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1e04) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x2600;
    FUN_1000200a0(puVar1);
  }
  FUN_10064e47c(0x42c20000,0x42c20000,puVar1);
  FUN_100183c78(0x3f800000,0x3fc00000,puVar5);
  fVar15 = *(float *)(param_1 + 0x29c);
  fVar13 = (float)FUN_10064259c(puVar5);
  fVar15 = fVar14 + fVar15 * 2.0;
  fVar13 = fVar15 + fVar13 * 0.5;
  FUN_10064259c(puVar5);
  fVar14 = fVar14 + fVar15 * 0.5;
  if ((*(float *)(param_1 + 0x35a) != fVar13) || (*(float *)((long)param_1 + 0x1ad4) != fVar14)) {
    *(float *)(param_1 + 0x35a) = fVar13;
    *(float *)((long)param_1 + 0x1ad4) = fVar14;
    FUN_1000200a0(puVar5);
  }
  local_b8 = (code *)&DAT_3f0000003f000000;
  (**(code **)(param_1[0x352] + 0x28))(puVar5,&local_b8);
  local_90 = uVar7;
  local_b8 = FUN_10004e2ac;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  puStack_b0 = param_1;
  FUN_10001554c(param_1 + 0xe79,&local_b8);
  local_90 = uVar8;
  local_b8 = FUN_10004e2e0;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  puStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x709,&local_b8);
  local_90 = uVar9;
  local_b8 = FUN_10004e2e0;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  puStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x709,&local_b8);
  uVar12 = FUN_100131268();
  if ((uVar12 & 1) == 0) {
    *(uint *)((long)param_1 + 0x1b14) = *(uint *)((long)param_1 + 0x1b14) & 0xfffffffb;
  }
  *(uint *)((long)param_1 + 0xa104) = *(uint *)((long)param_1 + 0xa104) & 0xfffffff3 | 8;
  local_b8 = (code *)CONCAT44(local_b8._4_4_,0x3f800000);
  local_c1 = '\0';
  FUN_10012e9ac((long)param_1 + 0xddd4,0,&local_b8,0,0,0,&local_c1,0);
  *(byte *)((long)param_1 + 0xdde4) = *(byte *)((long)param_1 + 0xdde4) & 0xfb | local_c1 << 2;
  FUN_1000ad044(puVar3,1);
  FUN_1000ad078((ulong)local_b8 & 0xffffffff,puVar3);
  if (*(int *)((long)param_1 + 0xddd4) == 1) {
    *(uint *)((long)param_1 + 0x1524) = *(uint *)((long)param_1 + 0x1524) & 0xfffffffb;
    *(uint *)((long)param_1 + 0x1b14) = *(uint *)((long)param_1 + 0x1b14) & 0xfffffffb;
  }
  FUN_10001fd98();
  return param_1;
}




void FUN_10004e258(long param_1)

{
  FUN_1000c0e78(0x3e4ccccd,param_1 + 0x8990,0,0);
  *(undefined4 *)(param_1 + 0xddd0) = 0;
  FUN_10004e7a8(param_1,1,0);
  return;
}




void thunk_FUN_10004eadc(long param_1)

{
  uint uVar1;
  byte bVar2;
  
  bVar2 = *(byte *)(*(long *)(param_1 + 0x8998) + 0xc0);
  uVar1 = bVar2 & 1;
  FUN_1000c0e78(0x3e4ccccd,param_1 + 0x8990,(bVar2 & 1) == 0,0);
  *(uint *)(param_1 + 0xddd0) = uVar1 << 1 ^ 2;
  FUN_10004e7a8(param_1,uVar1,0);
  return;
}




void thunk_FUN_10004eb44(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_100131268();
  if (iVar1 != 0) {
    FUN_10052bb64(0,&DAT_101d22fd8);
  }
  FUN_1000ad204(param_1 + 0x138,1);
  FUN_1000b40ec(param_1 + 0x3658,0);
  return;
}




void FUN_10004e2ac(long param_1)

{
  FUN_1000ad204(param_1 + 0x138,0);
  FUN_1000b40ec(param_1 + 0x3658,1);
  return;
}




void FUN_10004e2e0(long param_1)

{
  FUN_1000ad204(param_1 + 0x138,1);
  FUN_1000b40ec(param_1 + 0x3658,0);
  return;
}




void FUN_10004e314(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10004e314_10144cfa0;
  FUN_10001fe44();
  FUN_10002c0d4();
  DAT_101dc3408 = 0;
  FUN_10004eb90(param_1 + 0x1410);
  thunk_FUN_1000c0c08(param_1 + 0x1132);
  thunk_FUN_1000b42ac(param_1 + 0x6cb);
  FUN_10004ed14(param_1 + 0x42b);
  param_1[0x410] = &PTR_FUN_101452038;
  param_1[0x421] = &PTR_FUN_101452148;
  thunk_FUN_100657580(param_1 + 0x424);
  FUN_10064221c(param_1 + 0x410);
  param_1[0x352] = &PTR_FUN_10145f300;
  param_1[0x3ec] = &PTR_FUN_1014a7108;
  param_1[0x403] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x406);
  FUN_10064e2bc(param_1 + 0x3ec);
  param_1[0x3ce] = &PTR_FUN_1014a7108;
  param_1[0x3e5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 1000);
  FUN_10064e2bc(param_1 + 0x3ce);
  param_1[0x3b0] = &PTR_FUN_1014a7108;
  param_1[0x3c7] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3ca);
  FUN_10064e2bc(param_1 + 0x3b0);
  FUN_10064221c(param_1 + 0x39f);
  FUN_10003bec8(param_1 + 0x352);
  param_1[0x294] = &PTR_FUN_10145f300;
  param_1[0x32e] = &PTR_FUN_1014a7108;
  param_1[0x345] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x348);
  FUN_10064e2bc(param_1 + 0x32e);
  param_1[0x310] = &PTR_FUN_1014a7108;
  param_1[0x327] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x32a);
  FUN_10064e2bc(param_1 + 0x310);
  param_1[0x2f2] = &PTR_FUN_1014a7108;
  param_1[0x309] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x30c);
  FUN_10064e2bc(param_1 + 0x2f2);
  FUN_10064221c(param_1 + 0x2e1);
  FUN_10003bec8(param_1 + 0x294);
  FUN_10064221c(param_1 + 0x283);
  param_1[0x27] = &PTR_FUN_1014525b8;
  thunk_FUN_100070b80(param_1 + 0x24f);
  thunk_FUN_1000868c8(param_1 + 0x1e6);
  thunk_FUN_1000b2598(param_1 + 0x137);
  thunk_FUN_1000b2598(param_1 + 0x88);
  FUN_10064e2bc(param_1 + 0x6f);
  param_1[0x51] = &PTR_FUN_1014a7108;
  param_1[0x68] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6b);
  FUN_10064e2bc(param_1 + 0x51);
  FUN_10064e2bc(param_1 + 0x38);
  FUN_10064221c(param_1 + 0x27);
  FUN_10064221c(param_1 + 0x16);
  FUN_10064221c(param_1 + 5);
  FUN_1010a0064(param_1);
  return;
}




void thunk_FUN_10004e314(void)

{
  FUN_10004e314();
  return;
}




void FUN_10004e584(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10004e314();
  operator_delete(pvVar1);
  return;
}




void FUN_10004e598(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_2 + 4) - 2;
  uVar1 = 0xdU >> (ulong)(uVar1 & 0xf) & (uint)(uVar1 < 4);
  *(byte *)(param_1 + 0xdde4) = *(byte *)(param_1 + 0xdde4) & 0xfe | (byte)uVar1;
  FUN_1000a34a4(0x3f000000,param_1 + 0xa080,uVar1,4,1);
  if ((*(byte *)(param_1 + 0xdde4) & 1) == 0) {
    return;
  }
  FUN_1000a3954(param_1 + 0xa080,param_2);
  return;
}




void FUN_10004e630(long param_1)

{
  long lVar1;
  
  DAT_10184dff0 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184dff0 + 1;
  lVar1 = param_1 + (ulong)DAT_10184dff0 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = thunk_FUN_10004db14;
  *(code **)(lVar1 + 0xb8) = FUN_10004efb0;
  *(uint *)(lVar1 + 0xa4) = DAT_10184dff0;
  *(undefined4 *)(lVar1 + 0xa8) = 0xdde8;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 1;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,4,FUN_10004e69c,0);
  return;
}




void FUN_10004e69c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  FUN_1000c18fc(param_1 + 0x8990);
  uVar1 = FUN_100147980();
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_100063e10();
    FUN_1000ad0ec(param_1 + 0x138,uVar2);
    return;
  }
  lVar3 = FUN_100641574("plaques-player");
  *(uint *)(lVar3 + 0x84) =
       *(uint *)(lVar3 + 0x84) & 0xfffffff8 |
       *(uint *)(lVar3 + 0x84) & 3 | (~(uint)*(byte *)(param_1 + 0xdde4) >> 2 & 1) << 2;
  lVar3 = FUN_100641574("plaques-hero");
  *(uint *)(lVar3 + 0x84) =
       *(uint *)(lVar3 + 0x84) & 0xfffffff8 |
       *(uint *)(lVar3 + 0x84) & 3 | (~(uint)*(byte *)(param_1 + 0xdde4) >> 2 & 1) << 2;
  lVar3 = FUN_100641574("plaques-all");
  *(uint *)(lVar3 + 0x84) =
       *(uint *)(lVar3 + 0x84) & 0xfffffff8 |
       *(uint *)(lVar3 + 0x84) & 3 | (~(uint)*(byte *)(param_1 + 0xdde4) >> 2 & 1) << 2;
  return;
}




void FUN_10004e758(long param_1,int param_2)

{
  FUN_1000a2f84(param_1 + 0xa080);
  FUN_1000acc10(param_1 + 0x138);
  if (param_2 != 0) {
    *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 4;
  }
  FUN_10004e7a8(param_1,1,0);
  return;
}




void FUN_10004e7a8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  undefined4 uVar7;
  
  bVar3 = 0;
  iVar5 = (int)param_2;
  if (((*(byte *)(param_1 + 0xdde4) & 1) != 0) && (iVar5 != 0)) {
    bVar3 = *(byte *)(param_1 + 0xddd9) >> 5 & 1;
  }
  FUN_1000a34a4(0x3e4ccccd,param_1 + 0xa080,bVar3,4,1);
  FUN_1000ae5b0(0x3e4ccccd,param_1 + 0x2158,param_2,2,1);
  FUN_1000ad13c(0x3e4ccccd,param_1 + 0x138,param_2,4,1,0);
  uVar2 = FUN_100641574("plaques-all");
  lVar1 = DAT_101dbd2f8;
  uVar4 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar6;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar4;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_10063fcac(puVar6);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  uVar7 = 0x3f800000;
  if (iVar5 == 0) {
    uVar7 = 0;
  }
  FUN_10063fce0(uVar7,puVar6);
  FUN_10063f0e8(0x3ecccccd,puVar6);
  FUN_100642324(uVar2);
  FUN_100642b14(uVar2,puVar6);
  if (iVar5 == 0) {
    uVar2 = FUN_10064081c(0x3e4ccccd);
    lVar1 = DAT_101dbd2f8;
    uVar4 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if ((ulong)uVar4 != 0xffff) {
      puVar6 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar4 * 0x40 + 0x10);
      if (uVar4 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = *puVar6;
      }
      *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar4;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_10063ee9c(puVar6);
      *(undefined ***)puVar6 = &PTR_thunk_FUN_10063eeb4_1014a5338;
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_100642324(param_1 + 0xb0);
    FUN_100642b7c(param_1 + 0xb0,uVar2);
    bVar3 = 0;
  }
  else {
    FUN_100642324(param_1 + 0xb0);
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 4;
    bVar3 = 2;
  }
  *(byte *)(param_1 + 0xdde4) = *(byte *)(param_1 + 0xdde4) & 0xfd | bVar3;
  return;
}




bool FUN_10004ea04(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_100642ed4(param_1 + 0x28,1);
  return lVar1 != 0;
}




void FUN_10004ea28(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10004e7a8(param_1,0,0);
  FUN_10002c0d4();
  FUN_1000c0e78(0x3e4ccccd,param_1 + 0x8990,1,0);
  FUN_1000c0fe8(param_1 + 0x8990,param_2,param_3);
  FUN_1000ad2d8(param_1 + 0x138);
  *(undefined4 *)(param_1 + 0xddd0) = 2;
  return;
}




void FUN_10004eaa8(long param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1000ad234(param_1 + 0x138);
    FUN_1000c1080(param_1 + 0x8990);
    return;
  }
  return;
}




void FUN_10004eadc(long param_1)

{
  uint uVar1;
  byte bVar2;
  
  bVar2 = *(byte *)(*(long *)(param_1 + 0x8998) + 0xc0);
  uVar1 = bVar2 & 1;
  FUN_1000c0e78(0x3e4ccccd,param_1 + 0x8990,(bVar2 & 1) == 0,0);
  *(uint *)(param_1 + 0xddd0) = uVar1 << 1 ^ 2;
  FUN_10004e7a8(param_1,uVar1,0);
  return;
}




void FUN_10004eb44(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_100131268();
  if (iVar1 != 0) {
    FUN_10052bb64(0,&DAT_101d22fd8);
  }
  FUN_1000ad204(param_1 + 0x138,1);
  FUN_1000b40ec(param_1 + 0x3658,0);
  return;
}




void FUN_10004eb90(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_thunk_FUN_10004eb90_101451538;
  if ((void *)param_1[0x7a7] != (void *)0x0) {
    operator_delete__((void *)param_1[0x7a7]);
    param_1[0x7a7] = 0;
    param_1[0x7a6] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x77e);
  FUN_10064221c(param_1 + 0x76d);
  lVar1 = 0;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x3a78) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0x3b30) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0x3b48);
    FUN_10064e2bc((long)param_1 + lVar1 + 0x3a78);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != -0x4b0);
  thunk_FUN_100651068(param_1 + 0x6b1);
  FUN_10064221c(param_1 + 0x6a0);
  FUN_10003bd40(param_1 + 0x3e9);
  FUN_10003bd40(param_1 + 0x132);
  thunk_FUN_100651068(param_1 + 0x10c);
  thunk_FUN_100651068(param_1 + 0xe6);
  FUN_10064221c(param_1 + 0xd5);
  thunk_FUN_100651068(param_1 + 0xaf);
  param_1[0x91] = &PTR_FUN_1014a7108;
  param_1[0xa8] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xab);
  FUN_10064e2bc(param_1 + 0x91);
  param_1[0x73] = &PTR_FUN_1014a7108;
  param_1[0x8a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8d);
  FUN_10064e2bc(param_1 + 0x73);
  param_1[0x55] = &PTR_FUN_1014a7108;
  param_1[0x6c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6f);
  FUN_10064e2bc(param_1 + 0x55);
  FUN_10064221c(param_1 + 0x44);
  FUN_10064e2bc(param_1 + 0x2b);
  *param_1 = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10004ed14(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10004ed14_1014526b8;
  if ((void *)param_1[0x29f] != (void *)0x0) {
    operator_delete__((void *)param_1[0x29f]);
    param_1[0x29f] = 0;
    param_1[0x29e] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x278);
  param_1[0x25a] = &PTR_FUN_1014a7108;
  param_1[0x271] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x274);
  FUN_10064e2bc(param_1 + 0x25a);
  FUN_10004ee3c(param_1 + 0x192);
  FUN_10004ee3c(param_1 + 0xca);
  param_1[0xac] = &PTR_FUN_1014a7108;
  param_1[0xc3] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xc6);
  FUN_10064e2bc(param_1 + 0xac);
  param_1[0x8e] = &PTR_FUN_1014a7108;
  param_1[0xa5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa8);
  FUN_10064e2bc(param_1 + 0x8e);
  param_1[0x70] = &PTR_FUN_1014a7108;
  param_1[0x87] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8a);
  FUN_10064e2bc(param_1 + 0x70);
  param_1[0x52] = &PTR_FUN_1014a7108;
  param_1[0x69] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6c);
  FUN_10064e2bc(param_1 + 0x52);
  FUN_10064221c(param_1 + 0x41);
  FUN_10064221c(param_1 + 0x30);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_10004ee3c(void)

{
  FUN_10004ee3c();
  return;
}




void FUN_10004ee3c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10004ee3c_10144cfd0;
  if ((void *)param_1[0xc6] != (void *)0x0) {
    operator_delete__((void *)param_1[0xc6]);
    param_1[0xc6] = 0;
    param_1[0xc5] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x9f);
  thunk_FUN_100651068(param_1 + 0x79);
  param_1[0x5b] = &PTR_FUN_1014a7108;
  param_1[0x72] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x75);
  FUN_10064e2bc(param_1 + 0x5b);
  thunk_FUN_100651068(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10004eee8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10004ee3c();
  operator_delete(pvVar1);
  return;
}




void FUN_10004eefc(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10052bb70();
  operator_delete(pvVar1);
  return;
}




void FUN_10004ef10(void)

{
  return;
}




void FUN_10004ef14(void)

{
  thunk_FUN_10052f7d0(3);
  FUN_100101450(1,0);
  return;
}




void FUN_10004ef34(void)

{
  return;
}




void FUN_10004ef38(void)

{
  thunk_FUN_10052f7d0(4);
  return;
}




void FUN_10004ef40(void)

{
  return;
}




void FUN_10004ef44(void)

{
  return;
}




void FUN_10004ef48(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_10052bc18();
  if ((iVar1 == 0) || (uVar2 = FUN_10052bc30(), (uVar2 & 1) == 0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 2;
  }
  thunk_FUN_10052f7d0(uVar3);
  return;
}




void FUN_10004ef74(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_10052bc18();
  if ((iVar1 == 0) || (uVar2 = FUN_10052bc30(), (uVar2 & 1) == 0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 2;
  }
  thunk_FUN_10052f7d0(uVar3);
  FUN_100101450(0,0);
  return;
}




undefined8 * thunk_FUN_10004db14(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  char cStack_c1;
  undefined1 auStack_c0 [4];
  undefined1 auStack_bc [4];
  code *pcStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  
  *param_1 = &PTR_thunk_FUN_10004e314_10144cfa0;
  puVar1 = param_1 + 5;
  FUN_1006421a8(puVar1);
  param_1[5] = &PTR_thunk_FUN_10064221c_10144b7e8;
  puVar2 = param_1 + 0x16;
  FUN_1006421a8(puVar2);
  param_1[0x16] = &PTR_thunk_FUN_10064221c_10144b7e8;
  puVar3 = param_1 + 0x27;
  thunk_FUN_1000aca0c(puVar3);
  FUN_1006421a8();
  param_1[0x283] = &PTR_thunk_FUN_10064221c_10144b7e8;
  puVar4 = param_1 + 0x294;
  thunk_FUN_100183990(puVar4,1);
  puVar5 = param_1 + 0x352;
  thunk_FUN_100183990(puVar5,1);
  thunk_FUN_1000aaf24(param_1 + 0x410);
  thunk_FUN_1000ad41c(param_1 + 0x42b);
  thunk_FUN_1000b2bf4(param_1 + 0x6cb);
  thunk_FUN_1000c0a40();
  thunk_FUN_1000a2858();
  param_1[0x1bba] = 0;
  *(undefined2 *)(param_1 + 0x1bbb) = 0xffff;
  *(undefined8 *)((long)param_1 + 0xdddc) = 0x3f800000;
  *(byte *)((long)param_1 + 0xdde4) = *(byte *)((long)param_1 + 0xdde4) & 0xf8;
  DAT_101dc3408 = param_1;
  FUN_100641464(auStack_bc,auStack_c0);
  iVar10 = FUN_100126c88();
  *(uint *)((long)param_1 + 0xac) = *(uint *)((long)param_1 + 0xac) & 0xfffffffb;
  plVar11 = (long *)FUN_100641574("ingame-effects");
  (**(code **)(*plVar11 + 0x78))(plVar11,param_1 + 0x410,1);
  plVar11 = (long *)FUN_100641574("ingame-ui");
  (**(code **)(*plVar11 + 0x78))(plVar11,puVar1,1);
  FUN_10002c09c(puVar1);
  FUN_100642bd8(puVar1,puVar2,1);
  FUN_100642bd8(puVar2,param_1 + 0x42b,1);
  FUN_100642bd8(puVar2,puVar3,1);
  FUN_100642bd8(puVar2,param_1 + 0x6cb,1);
  FUN_100642bd8(puVar2,puVar4,1);
  FUN_100642bd8(puVar2,puVar5,1);
  FUN_100642bd8(puVar2,param_1 + 0x1410,1);
  FUN_100642bd8(puVar1,param_1 + 0x283,1);
  FUN_100642bd8(param_1 + 0x283,param_1[0x1133],1);
  *(uint *)((long)param_1 + 0x1bc) = *(uint *)((long)param_1 + 0x1bc) | 4;
  FUN_1000c0dbc(param_1 + 0x1132);
  uVar7 = DAT_101d91884;
  uStack_90 = DAT_101d91884;
  pcStack_b8 = FUN_10004e258;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  puStack_b0 = param_1;
  FUN_10001554c(param_1[0x1133] + 8,&pcStack_b8);
  FUN_100183c50(0x3ee66666,puVar4,&DAT_10115a164);
  uVar8 = DAT_101dbd458;
  uStack_90 = DAT_101dbd458;
  pcStack_b8 = thunk_FUN_10004eadc;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  puStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x295,&pcStack_b8);
  uVar9 = DAT_101dbd484;
  uStack_90 = DAT_101dbd484;
  pcStack_b8 = thunk_FUN_10004eadc;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  puStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x295,&pcStack_b8);
  FUN_1001b495c(0,puVar4);
  FUN_100652cdc(param_1 + 0x32e,"hud_icon_score");
  uVar6 = *(uint *)((long)param_1 + 0x19f4);
  if ((uVar6 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x19f4) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x5900;
    FUN_1000200a0(param_1 + 0x32e);
  }
  uVar6 = *(uint *)((long)param_1 + 0x1904);
  if ((uVar6 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1904) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x2600;
    FUN_1000200a0(param_1 + 0x310);
  }
  if ((*(uint *)((long)param_1 + 0x1814) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x1814) = *(uint *)((long)param_1 + 0x1814) & 0xffff807f;
    FUN_1000200a0(param_1 + 0x2f2);
  }
  FUN_100183c78(0x3f800000,0x3fc00000,puVar4);
  fVar13 = (float)FUN_10064259c(puVar4);
  fVar15 = 10.0;
  fVar14 = 15.0;
  if (iVar10 == 0) {
    fVar14 = 10.0;
  }
  fVar16 = fVar14 + fVar13 * 0.5;
  FUN_10064259c(puVar4);
  fVar13 = fVar14 + fVar15 * 0.5;
  if ((*(float *)(param_1 + 0x29c) != fVar16) || (*(float *)((long)param_1 + 0x14e4) != fVar13)) {
    *(float *)(param_1 + 0x29c) = fVar16;
    *(float *)((long)param_1 + 0x14e4) = fVar13;
    FUN_1000200a0(puVar4);
  }
  pcStack_b8 = (code *)&DAT_3f0000003f000000;
  (**(code **)(param_1[0x294] + 0x28))(puVar4,&pcStack_b8);
  FUN_100183c50(0x3ee66666,puVar5,&DAT_10115a164);
  uStack_90 = uVar8;
  pcStack_b8 = thunk_FUN_10004eb44;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  puStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x353,&pcStack_b8);
  uStack_90 = uVar9;
  pcStack_b8 = thunk_FUN_10004eb44;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  puStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x353,&pcStack_b8);
  FUN_1001b495c(0,puVar5);
  FUN_100652cdc(param_1 + 0x3ec,"hud_icon_replayKit");
  uVar6 = *(uint *)((long)param_1 + 0x1fe4);
  if ((uVar6 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x1fe4) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x3300;
    FUN_1000200a0(param_1 + 0x3ec);
  }
  puVar1 = param_1 + 0x3ce;
  uVar6 = *(uint *)((long)param_1 + 0x1ef4);
  if ((uVar6 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1ef4) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x2600;
    FUN_1000200a0(puVar1);
  }
  FUN_100652dd4(puVar1,&DAT_10115a164,2);
  FUN_10064e47c(0x42ba0000,0x42ba0000,puVar1);
  puVar1 = param_1 + 0x3b0;
  FUN_100652cdc(puVar1,"hud_icon_rings");
  uVar6 = *(uint *)((long)param_1 + 0x1e04);
  if ((uVar6 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1e04) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x2600;
    FUN_1000200a0(puVar1);
  }
  FUN_10064e47c(0x42c20000,0x42c20000,puVar1);
  FUN_100183c78(0x3f800000,0x3fc00000,puVar5);
  fVar15 = *(float *)(param_1 + 0x29c);
  fVar13 = (float)FUN_10064259c(puVar5);
  fVar15 = fVar14 + fVar15 * 2.0;
  fVar13 = fVar15 + fVar13 * 0.5;
  FUN_10064259c(puVar5);
  fVar14 = fVar14 + fVar15 * 0.5;
  if ((*(float *)(param_1 + 0x35a) != fVar13) || (*(float *)((long)param_1 + 0x1ad4) != fVar14)) {
    *(float *)(param_1 + 0x35a) = fVar13;
    *(float *)((long)param_1 + 0x1ad4) = fVar14;
    FUN_1000200a0(puVar5);
  }
  pcStack_b8 = (code *)&DAT_3f0000003f000000;
  (**(code **)(param_1[0x352] + 0x28))(puVar5,&pcStack_b8);
  uStack_90 = uVar7;
  pcStack_b8 = FUN_10004e2ac;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  puStack_b0 = param_1;
  FUN_10001554c(param_1 + 0xe79,&pcStack_b8);
  uStack_90 = uVar8;
  pcStack_b8 = FUN_10004e2e0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  puStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x709,&pcStack_b8);
  uStack_90 = uVar9;
  pcStack_b8 = FUN_10004e2e0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  puStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x709,&pcStack_b8);
  uVar12 = FUN_100131268();
  if ((uVar12 & 1) == 0) {
    *(uint *)((long)param_1 + 0x1b14) = *(uint *)((long)param_1 + 0x1b14) & 0xfffffffb;
  }
  *(uint *)((long)param_1 + 0xa104) = *(uint *)((long)param_1 + 0xa104) & 0xfffffff3 | 8;
  pcStack_b8 = (code *)CONCAT44(pcStack_b8._4_4_,0x3f800000);
  cStack_c1 = '\0';
  FUN_10012e9ac((long)param_1 + 0xddd4,0,&pcStack_b8,0,0,0,&cStack_c1,0);
  *(byte *)((long)param_1 + 0xdde4) = *(byte *)((long)param_1 + 0xdde4) & 0xfb | cStack_c1 << 2;
  FUN_1000ad044(puVar3,1);
  FUN_1000ad078((ulong)pcStack_b8 & 0xffffffff,puVar3);
  if (*(int *)((long)param_1 + 0xddd4) == 1) {
    *(uint *)((long)param_1 + 0x1524) = *(uint *)((long)param_1 + 0x1524) & 0xfffffffb;
    *(uint *)((long)param_1 + 0x1b14) = *(uint *)((long)param_1 + 0x1b14) & 0xfffffffb;
  }
  FUN_10001fd98();
  return param_1;
}




void FUN_10004efb0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010004efb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10004efbc(void)

{
  if ((DAT_10184dff8 & 1) == 0) {
    DAT_10184dff0 = DAT_101872e38;
    DAT_10184dff8 = 1;
  }
  return;
}




void FUN_10004efe8(void)

{
  DAT_101dc3290 = 0xff;
  DAT_101dc3292 = 0xffff;
  DAT_101dc3294 = 0xffff;
  DAT_101dc3296 = 0xffbc9c44;
  DAT_101dc329a = 0xff1166f2;
  DAT_101dc329e = 0xffe0e0e0;
  DAT_101dc32a2 = 0xffa0a0a0;
  DAT_101dc32a6 = 0xff8c8c8c;
  DAT_101dc32aa = 0xff322213;
  DAT_101dc32ae = 0xff091911;
  DAT_101dc32b2 = 0xff170c19;
  DAT_101dc32b6 = 0xff241a14;
  DAT_101dc32ba = 0xff14171c;
  DAT_101dc32be = 0xff221911;
  DAT_101dc32c2 = 0xff1a1416;
  DAT_101dc32c6 = 0xff121414;
  DAT_101dc32ca = 0xff1a1809;
  DAT_101dc32ce = 0xff141414;
  DAT_101dc32d2 = 0xff141414;
  DAT_101dc32d6 = 0xff2929c0;
  DAT_101dc32da = 0xff283082;
  DAT_101dc32de = 0xff5262cc;
  DAT_101dc32e2 = 0xff283082;
  DAT_101dc32e6 = 0xff5262cc;
  DAT_101dc32ea = 0xff745c42;
  DAT_101dc32ee = 0xff184155;
  DAT_101dc32f2 = 0xff92665e;
  DAT_101dc32f6 = 0xffbc9c44;
  DAT_101dc32fa = 0xffbbae56;
  DAT_101dc32fe = 0xff8b7b01;
  DAT_101dc3302 = 0xff90b3ef;
  DAT_101dc3306 = 0xff728ebe;
  DAT_101dc330a = 0xff19459d;
  DAT_101dc330e = 0xff9d877b;
  DAT_101dc3312 = 0xffcbb1a3;
  DAT_101dc3316 = 0xff3f6fb5;
  DAT_101dc331a = 0xffc5c5c5;
  DAT_101dc331e = 0xff4fc1f1;
  DAT_101dc3322 = 0xff606060;
  DAT_101dc3326 = 0xffc5ff7b;
  DAT_101dc332a = 0xff5271eb;
  DAT_101dc332e = 0xfffae076;
  DAT_101dc3332 = 0xff3ac8f6;
  DAT_101dc3336 = 0xffaaaaaa;
  DAT_101dc333a = 0xffe19400;
  DAT_101dc333e = 0xffe19400;
  DAT_101dc3342 = 0xffe550b2;
  DAT_101dc3346 = 0xfff22ae8;
  DAT_101dc334a = 0xff005ae1;
  DAT_101dc334e = 0xff1addfa;
  DAT_101dc3352 = 0xff2424b3;
  DAT_101dc3356 = 0xff2424b3;
  DAT_101dc335a = 0xff646464;
  DAT_101dc335e = 0xff92665e;
  DAT_101dc3362 = 0xff646037;
  DAT_101dc336c = 0xff1111a1;
  DAT_101dc3370 = 0xff321ee1;
  DAT_101dc3374 = 0xffc8c8c8;
  DAT_101dc3378 = 0xff321ee1;
  DAT_101dc3384 = 0xff6259b3;
  DAT_101dc3388 = 0xff506e73;
  DAT_101dc338c = 0xff9dbf86;
  DAT_101dc3368 = 0xffffffff;
  DAT_101dc3390 = 0xffa35244;
  DAT_101dc337c = 0xff7fe801;
  DAT_101dc3394 = 0xffca828e;
  DAT_101dc3380 = 0xffffffff;
  DAT_101dc3398 = 0xffa6a6a6;
  DAT_101dc339c = 0xffa6a6a6;
  DAT_101dc33a0 = 0xffffffff;
  DAT_101dc33a4 = 0xff88ea2f;
  DAT_101dc33a8 = 0xff8c8c8c;
  DAT_101dc33ac = 0xffffb400;
  DAT_101dc33b0 = 0xffff00ff;
  DAT_101dc33b4 = 0xff00aded;
  DAT_101dc33b8 = 0xff33d3ff;
  DAT_101dc33bc = 0xff7fe801;
  DAT_101dc33c0 = 0xff282828;
  DAT_101dc33c4 = 0xfff0f0f0;
  DAT_101dc33c8 = 0xffa4781e;
  DAT_101dc33cc = 0xffa6654b;
  DAT_101dc33d0 = 0xff93435b;
  DAT_101dc33d4 = 0xff387f9c;
  DAT_101dc33d8 = 0xffa3781e;
  DAT_101dc33dc = 0xffffd18a;
  DAT_101dc33e0 = 0xffff61f7;
  DAT_101dc33e4 = 0xff5de1f2;
  DAT_101dc33e8 = 0xff80eaff;
  DAT_101dc33ec = 0xff32e00e;
  DAT_101dc33f0 = 0xff5a3c10;
  DAT_101dc33f4 = 0xff330b03;
  DAT_101dc33f8 = 0xff33031d;
  DAT_101dc33fc = 0xff032433;
  DAT_101dc3400 = 0xff9e8e8d;
  DAT_101d22fd8 = &PTR_thunk_FUN_10052bb70_10144d118;
  ___cxa_atexit(thunk_FUN_10052bb70,&DAT_101d22fd8,0x100000000);
  return;
}




void FUN_10004f6c4(long param_1)

{
  long lVar1;
  
  DAT_10184dae8 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184dae8 + 1;
  lVar1 = param_1 + (ulong)DAT_10184dae8 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_10004fba4;
  *(code **)(lVar1 + 0xb8) = FUN_10004fbe0;
  *(uint *)(lVar1 + 0xa4) = DAT_10184dae8;
  *(undefined4 *)(lVar1 + 0xa8) = 0x70;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x10;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  return;
}




void FUN_10004f720(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10144d178;
  FUN_10004fbec(param_1 + 8);
  FUN_1010a0064(param_1);
  return;
}




void FUN_10004f750(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10144d178;
  FUN_10004fbec(param_1 + 8);
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10004f784(long param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  
  if (param_2 == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x811c9dc5;
    cVar1 = *param_2;
    while (cVar1 != '\0') {
      param_2 = param_2 + 1;
      uVar2 = (uVar2 ^ (int)cVar1) * 0x1000193;
      cVar1 = *param_2;
    }
  }
  *(uint *)(param_1 + 0x28) = uVar2;
  return;
}




void FUN_10004f7c8(long param_1,uint *param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  uint *puVar13;
  undefined4 local_44;
  undefined8 local_40;
  void *local_38;
  
  puVar13 = (uint *)(param_1 + 0x40);
  uVar9 = *puVar13;
  uVar2 = *param_2;
  uVar7 = *(int *)(param_1 + 0x50) + 1;
  *(uint *)(param_1 + 0x50) = uVar7;
  local_44 = param_3;
  if (uVar9 >> 1 < uVar7) {
    local_40 = 0;
    local_38 = (void *)0x0;
    FUN_10002690c(&local_40,(uVar9 * 3 + 3 >> 1) + 7 & 0xfffffff8,0xffffffff00000000);
    uVar7 = *(uint *)(param_1 + 0x40);
    uVar9 = (uint)local_40;
    uVar11 = uVar7 - 1;
    if ((int)uVar11 < 0) {
      pvVar8 = *(void **)(param_1 + 0x48);
    }
    else {
      pvVar8 = *(void **)(param_1 + 0x48);
      do {
        uVar7 = *(uint *)((long)pvVar8 + (ulong)uVar11 * 8 + 4);
        if (uVar7 != 0xffffffff) {
          uVar5 = *(uint *)((long)pvVar8 + (ulong)uVar11 * 8);
          uVar6 = 0;
          if ((uint)local_40 != 0) {
            uVar6 = uVar5 / (uint)local_40;
          }
          uVar12 = (ulong)(uVar5 - uVar6 * (uint)local_40);
          iVar3 = *(int *)((long)local_38 + uVar12 * 8 + 4);
          while (iVar3 != -1) {
            uVar6 = (uint)local_40;
            if (0 < (int)(uint)uVar12) {
              uVar6 = (uint)uVar12;
            }
            uVar12 = (ulong)(uVar6 - 1);
            iVar3 = *(int *)((long)local_38 + uVar12 * 8 + 4);
          }
          puVar1 = (uint *)((long)local_38 + uVar12 * 8);
          *puVar1 = uVar5;
          puVar1[1] = uVar7;
        }
        uVar11 = uVar11 - 1;
      } while (-1 < (int)uVar11);
      uVar7 = *puVar13;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x44);
    *(uint *)(param_1 + 0x40) = (uint)local_40;
    *(undefined4 *)(param_1 + 0x44) = local_40._4_4_;
    local_40 = CONCAT44(uVar4,uVar7);
    *(void **)(param_1 + 0x48) = local_38;
    local_38 = pvVar8;
    if (pvVar8 != (void *)0x0) {
      operator_delete__(pvVar8);
      uVar9 = *puVar13;
    }
  }
  uVar7 = 0;
  if (uVar9 != 0) {
    uVar7 = uVar2 / uVar9;
  }
  uVar12 = (ulong)(uVar2 - uVar7 * uVar9);
  lVar10 = *(long *)(param_1 + 0x48);
  iVar3 = *(int *)(lVar10 + uVar12 * 8 + 4);
  while (iVar3 != -1) {
    uVar7 = uVar9;
    if (0 < (int)(uint)uVar12) {
      uVar7 = (uint)uVar12;
    }
    uVar12 = (ulong)(uVar7 - 1);
    iVar3 = *(int *)(lVar10 + uVar12 * 8 + 4);
  }
  puVar1 = (uint *)(lVar10 + uVar12 * 8);
  *puVar1 = uVar2;
  uVar7 = FUN_10004fc70(puVar13,&local_44);
  puVar1[1] = uVar7;
  return;
}




void FUN_10004f940(long param_1,uint *param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 == 0) {
    lVar9 = 0;
  }
  else if (*(int *)(*(long *)(lVar9 + 8) + 0xa4) != DAT_10184df30) {
    lVar9 = 0;
  }
  uVar6 = FUN_10003f7cc(lVar9);
  lVar9 = FUN_1010a0298(param_1,DAT_10184df30);
  plVar7 = (long *)0x0;
  if (lVar9 != 0) {
    plVar7 = (long *)(lVar9 + 0x28);
  }
  plVar1 = (long *)&DAT_101dc0b88;
  if (lVar9 != 0) {
    plVar1 = plVar7 + 1;
  }
  lVar5 = *plVar1;
  *(long **)(param_1 + 0x30) = plVar7;
  *(int *)(param_1 + 0x38) = (int)lVar5;
  if (lVar9 == 0) {
    return;
  }
  if ((int)lVar5 != (int)plVar7[1]) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x38) = DAT_101dc0b88;
    return;
  }
  lVar9 = (**(code **)(*plVar7 + 0x10))();
  if (lVar9 == 0) {
    return;
  }
  plVar7 = *(long **)(param_1 + 0x30);
  uVar8 = 0;
  if (plVar7 != (long *)0x0) {
    if (*(int *)(param_1 + 0x38) == (int)plVar7[1]) {
      uVar8 = (**(code **)(*plVar7 + 0x10))();
    }
    else {
      uVar8 = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x38) = DAT_101dc0b88;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x40);
  if (uVar2 == 0) {
LAB_10004faa0:
    uVar10 = 0xffffffff;
  }
  else {
    uVar3 = *param_2;
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = uVar3 / uVar2;
    }
    uVar10 = (ulong)(uVar3 - uVar4 * uVar2);
    lVar9 = *(long *)(param_1 + 0x48);
    if (*(uint *)(lVar9 + uVar10 * 8) != uVar3) {
      do {
        if (*(int *)(lVar9 + uVar10 * 8 + 4) == -1) break;
        uVar4 = uVar2;
        if (0 < (int)(uint)uVar10) {
          uVar4 = (uint)uVar10;
        }
        uVar10 = (ulong)(uVar4 - 1);
      } while (*(uint *)(lVar9 + uVar10 * 8) != uVar3);
      if ((int)uVar10 == -1) goto LAB_10004faa0;
    }
    uVar10 = (ulong)*(uint *)(lVar9 + uVar10 * 8 + 4);
  }
  FUN_10003f608(uVar8,uVar6,*(undefined4 *)(*(long *)(param_1 + 0x60) + uVar10 * 4));
  return;
}




void FUN_10004fac0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x38) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x30);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x38) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            uVar3 = 0;
            *(undefined8 *)(param_1 + 0x30) = 0;
            *(undefined4 *)(param_1 + 0x38) = DAT_101dc0b88;
          }
        }
        FUN_10003f52c(uVar3);
        (**(code **)(**(long **)(param_1 + 0x30) + 0x10))();
        FUN_1010a1830();
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x38) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_10004fb78(undefined8 param_1,undefined8 param_2)

{
  FUN_10004fac0();
  FUN_10004f940(param_1,param_2);
  return;
}




void FUN_10004fba4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10144d178;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = DAT_101dc0b88;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  return;
}




void FUN_10004fbe0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010004fbe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




uint * FUN_10004fbec(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar3);
      if (uVar1 != 0xffffffff) {
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 4) = param_1[10];
        param_1[10] = uVar1;
        uVar4 = *param_1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar4);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 8));
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}




void FUN_10004fc70(long param_1,undefined4 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_28 [8];
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_10004fcd4(param_1 + 0x18,auStack_28);
    uVar1 = (ulong)(*(int *)(param_1 + 0x18) - 1);
    lVar2 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar2 + uVar1 * 4);
  }
  *(undefined4 *)(lVar2 + uVar1 * 4) = *param_2;
  return;
}




void FUN_10004fcd4(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10004fd54(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined4 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 4 + -4) = *param_2;
  return;
}




void FUN_10004fd54(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 2);
    puVar2 = *(undefined4 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 2;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined4 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined4 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_10004fdd0(void)

{
  if ((DAT_10184daf0 & 1) == 0) {
    DAT_10184dae8 = DAT_101872e38;
    DAT_10184daf0 = 1;
  }
  return;
}




void FUN_10004fdfc(void)

{
  if ((DAT_10184df38 & 1) == 0) {
    DAT_10184df30 = DAT_101872e38;
    DAT_10184df38 = 1;
  }
  return;
}




void FUN_10004fe28(long param_1)

{
  long lVar1;
  
  DAT_10184db78 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184db78 + 1;
  lVar1 = param_1 + (ulong)DAT_10184db78 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_10005043c;
  *(code **)(lVar1 + 0xb8) = FUN_1000504a4;
  *(uint *)(lVar1 + 0xa4) = DAT_10184db78;
  *(undefined4 *)(lVar1 + 0xa8) = 0x60;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x14;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  return;
}




void FUN_10004fe84(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long local_d8;
  long alStack_d0 [19];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  uVar1 = FUN_1010a0258(param_1,&local_d8,0x14,DAT_10184db78);
  if (uVar1 == 0) {
    *param_2 = 0;
    *param_3 = 0;
    *param_4 = 1;
  }
  else {
    if (uVar1 != 1) {
      lVar4 = (ulong)uVar1 - 1;
      lVar2 = local_d8;
      plVar3 = alStack_d0;
      do {
        local_d8 = *plVar3;
        if (*(int *)(*plVar3 + 0x58) <= *(int *)(lVar2 + 0x58)) {
          local_d8 = lVar2;
        }
        lVar4 = lVar4 + -1;
        lVar2 = local_d8;
        plVar3 = plVar3 + 1;
      } while (lVar4 != 0);
    }
    FUN_10004ff5c(local_d8,param_2,param_3,param_4);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10004ff5c(long param_1,float *param_2,float *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 1:
    break;
  case 2:
    plVar4 = *(long **)(param_1 + 0x48);
    if (plVar4 == (long *)0x0) break;
    if (*(int *)(param_1 + 0x50) != (int)plVar4[1]) {
LAB_100050124:
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x50) = DAT_101dc0b88;
      break;
    }
    lVar5 = (**(code **)(*plVar4 + 0x10))();
    if (lVar5 == 0) break;
    plVar4 = *(long **)(param_1 + 0x48);
    uVar3 = 0;
    if (plVar4 != (long *)0x0) {
      if (*(int *)(param_1 + 0x50) == (int)plVar4[1]) {
        uVar3 = (**(code **)(*plVar4 + 0x10))();
      }
      else {
        uVar3 = 0;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined4 *)(param_1 + 0x50) = DAT_101dc0b88;
      }
    }
    uVar1 = FUN_10042e2b8(uVar3);
    *param_2 = (float)uVar1;
    plVar4 = *(long **)(param_1 + 0x48);
    uVar3 = 0;
    if (plVar4 != (long *)0x0) {
      if (*(int *)(param_1 + 0x50) == (int)plVar4[1]) {
        uVar3 = (**(code **)(*plVar4 + 0x10))();
      }
      else {
        uVar3 = 0;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined4 *)(param_1 + 0x50) = DAT_101dc0b88;
      }
    }
    uVar1 = FUN_1004337ec(uVar3);
    *param_3 = (float)uVar1;
    plVar4 = *(long **)(param_1 + 0x48);
    uVar3 = 0;
    if (plVar4 != (long *)0x0) {
      if (*(int *)(param_1 + 0x50) == (int)plVar4[1]) {
        uVar3 = (**(code **)(*plVar4 + 0x10))();
      }
      else {
        uVar3 = 0;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined4 *)(param_1 + 0x50) = DAT_101dc0b88;
      }
    }
    iVar2 = FUN_1004337ec(uVar3);
    goto LAB_100050160;
  case 3:
    plVar4 = *(long **)(param_1 + 0x48);
    if (plVar4 == (long *)0x0) break;
    if (*(int *)(param_1 + 0x50) != (int)plVar4[1]) goto LAB_100050124;
    lVar5 = (**(code **)(*plVar4 + 0x10))();
    if (lVar5 == 0) break;
    plVar4 = *(long **)(param_1 + 0x48);
    uVar3 = 0;
    if (plVar4 != (long *)0x0) {
      if (*(int *)(param_1 + 0x50) == (int)plVar4[1]) {
        uVar3 = (**(code **)(*plVar4 + 0x10))();
      }
      else {
        uVar3 = 0;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined4 *)(param_1 + 0x50) = DAT_101dc0b88;
      }
    }
    fVar6 = (float)FUN_10042fc00(uVar3);
LAB_100050298:
    *param_2 = fVar6;
    plVar4 = *(long **)(param_1 + 0x48);
    uVar3 = 0;
    if (plVar4 != (long *)0x0) {
      if (*(int *)(param_1 + 0x50) == (int)plVar4[1]) {
        uVar3 = (**(code **)(*plVar4 + 0x10))();
      }
      else {
        uVar3 = 0;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined4 *)(param_1 + 0x50) = DAT_101dc0b88;
      }
    }
    fVar6 = (float)FUN_10042f8e0(uVar3);
    *param_3 = fVar6;
    goto LAB_10005015c;
  case 4:
    plVar4 = *(long **)(param_1 + 0x48);
    if (plVar4 != (long *)0x0) {
      if (*(int *)(param_1 + 0x50) != (int)plVar4[1]) goto LAB_100050124;
      lVar5 = (**(code **)(*plVar4 + 0x10))();
      if (lVar5 != 0) {
        plVar4 = *(long **)(param_1 + 0x48);
        uVar3 = 0;
        if (plVar4 != (long *)0x0) {
          if (*(int *)(param_1 + 0x50) == (int)plVar4[1]) {
            uVar3 = (**(code **)(*plVar4 + 0x10))();
          }
          else {
            uVar3 = 0;
            *(undefined8 *)(param_1 + 0x48) = 0;
            *(undefined4 *)(param_1 + 0x50) = DAT_101dc0b88;
          }
        }
        fVar6 = (float)FUN_10042f8e0(uVar3);
        plVar4 = *(long **)(param_1 + 0x48);
        uVar3 = 0;
        if (plVar4 != (long *)0x0) {
          if (*(int *)(param_1 + 0x50) == (int)plVar4[1]) {
            uVar3 = (**(code **)(*plVar4 + 0x10))();
          }
          else {
            uVar3 = 0;
            *(undefined8 *)(param_1 + 0x48) = 0;
            *(undefined4 *)(param_1 + 0x50) = DAT_101dc0b88;
          }
        }
        fVar7 = (float)FUN_10042fc00(uVar3);
        fVar6 = fVar6 - fVar7;
        goto LAB_100050298;
      }
    }
    break;
  case 5:
    plVar4 = *(long **)(param_1 + 0x38);
    if (plVar4 != (long *)0x0) {
      if (*(int *)(param_1 + 0x40) == (int)plVar4[1]) {
        lVar5 = (**(code **)(*plVar4 + 0x10))();
        if (lVar5 != 0) {
          lVar5 = (**(code **)(**(long **)(param_1 + 0x38) + 0x10))();
          plVar4 = *(long **)(param_1 + 0x38);
          fVar6 = (float)NEON_ucvtf((uint)*(byte *)(lVar5 + 0x6a));
          *param_2 = fVar6;
          lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
          *param_3 = (float)((int)*(char *)(lVar5 + 0x69) + (uint)*(byte *)(lVar5 + 0x68));
          lVar5 = (**(code **)(**(long **)(param_1 + 0x38) + 0x10))();
          iVar2 = (int)*(char *)(lVar5 + 0x69) + (uint)*(byte *)(lVar5 + 0x68);
          goto LAB_100050160;
        }
      }
      else {
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined4 *)(param_1 + 0x40) = DAT_101dc0b88;
      }
    }
    break;
  default:
    goto switchD_10004ffa4_default;
  }
  *param_2 = 0.0;
  *param_3 = 1.0;
LAB_10005015c:
  iVar2 = 1;
LAB_100050160:
  *param_4 = iVar2;
switchD_10004ffa4_default:
  return;
}




void thunk_FUN_10004eb90(void)

{
  FUN_10004eb90();
  return;
}




void thunk_FUN_10004ed14(void)

{
  FUN_10004ed14();
  return;
}




void thunk_FUN_10004fbec(void)

{
  FUN_10004fbec();
  return;
}

