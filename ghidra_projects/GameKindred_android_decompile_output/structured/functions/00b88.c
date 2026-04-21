// functions/00b88 — 6 functions
#include "libGameKindred.h"




void FUN_00b882a8(long param_1)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float local_68;
  undefined1 auStack_64 [4];
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_00acd9ec(param_1 + 0x88);
  if ((*(float *)(param_1 + 0x1688) != -45.0) || (*(float *)(param_1 + 0x168c) != 1080.0)) {
    *(undefined8 *)(param_1 + 0x1688) = 0x44870000c2340000;
    FUN_0091ada4(param_1 + 0x1648);
  }
  local_60 = 0x3f0000003f800000;
  (**(code **)(*(long *)(param_1 + 0x1648) + 0x28))(param_1 + 0x1648,&local_60);
  if ((*(float *)(param_1 + 0x17b8) != 45.0) || (*(float *)(param_1 + 0x17bc) != 1080.0)) {
    *(undefined8 *)(param_1 + 0x17b8) = 0x4487000042340000;
    FUN_0091ada4(param_1 + 0x1778);
  }
  local_60 = 0x3f00000000000000;
  (**(code **)(*(long *)(param_1 + 0x1778) + 0x28))(param_1 + 0x1778,&local_60);
  if ((*(float *)(param_1 + 0x18e8) != -45.0) || (*(float *)(param_1 + 0x18ec) != 1150.0)) {
    *(undefined8 *)(param_1 + 0x18e8) = 0x448fc000c2340000;
    FUN_0091ada4(param_1 + 0x18a8);
  }
  local_60 = 0x3f0000003f800000;
  (**(code **)(*(long *)(param_1 + 0x18a8) + 0x28))(param_1 + 0x18a8,&local_60);
  if ((*(float *)(param_1 + 0x1a18) != 45.0) || (*(float *)(param_1 + 0x1a1c) != 1150.0)) {
    *(undefined8 *)(param_1 + 0x1a18) = 0x448fc00042340000;
    FUN_0091ada4(param_1 + 0x19d8);
  }
  local_60 = 0x3f00000000000000;
  (**(code **)(*(long *)(param_1 + 0x19d8) + 0x28))(param_1 + 0x19d8,&local_60);
  if ((*(float *)(param_1 + 0x1598) != 0.0) || (*(float *)(param_1 + 0x159c) != 1150.0)) {
    *(undefined8 *)(param_1 + 0x1598) = 0x448fc00000000000;
    FUN_0091ada4(param_1 + 0x1558);
  }
  local_60 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x1558) + 0x28))(param_1 + 0x1558,&local_60);
  if ((*(float *)(param_1 + 0x1b48) != -45.0) || (*(float *)(param_1 + 0x1b4c) != 1220.0)) {
    *(undefined8 *)(param_1 + 0x1b48) = 0x44988000c2340000;
    FUN_0091ada4(param_1 + 0x1b08);
  }
  local_60 = 0x3f0000003f800000;
  (**(code **)(*(long *)(param_1 + 0x1b08) + 0x28))(param_1 + 0x1b08,&local_60);
  if ((*(float *)(param_1 + 0x1c78) != 45.0) || (*(float *)(param_1 + 0x1c7c) != 1220.0)) {
    *(undefined8 *)(param_1 + 0x1c78) = 0x4498800042340000;
    FUN_0091ada4(param_1 + 0x1c38);
  }
  local_60 = 0x3f00000000000000;
  (**(code **)(*(long *)(param_1 + 0x1c38) + 0x28))(param_1 + 0x1c38,&local_60);
  FUN_00f00298(auStack_64,&local_68);
  fVar3 = -122.0;
  plVar1 = (long *)(param_1 + 0x1d68);
  FUN_00f13e54(plVar1);
  fVar3 = (local_68 + -122.0) - fVar3;
  if ((*(float *)(param_1 + 0x1da8) != 0.0) || (*(float *)(param_1 + 0x1dac) != fVar3)) {
    *(undefined4 *)(param_1 + 0x1da8) = 0;
    *(float *)(param_1 + 0x1dac) = fVar3;
    FUN_0091ada4(plVar1);
  }
  local_60 = 0x3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_60);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b885f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e7cc8;
  FUN_00b887d4();
  FUN_008fa278();
  if ((void *)param_1[0x666] != (void *)0x0) {
    operator_delete__((void *)param_1[0x666]);
    param_1[0x666] = 0;
    param_1[0x665] = 0;
  }
  FUN_009c7fa8(param_1 + 0x3ad);
  FUN_00f0d3a4(param_1 + 0x387);
  FUN_00f0d3a4(param_1 + 0x361);
  FUN_00f0d3a4(param_1 + 0x33b);
  FUN_00f0d3a4(param_1 + 0x315);
  FUN_00f0d3a4(param_1 + 0x2ef);
  FUN_00f0d3a4(param_1 + 0x2c9);
  param_1[0x2ab] = &PTR_FUN_028266f0;
  param_1[0x2c2] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2c5);
  FUN_00f13d08(param_1 + 0x2ab);
  param_1[0x28a] = &PTR_FUN_028266f0;
  param_1[0x2a1] = &PTR_FUN_02826850;
  param_1[0x12a] = &PTR_FUN_027d6650;
  FUN_00f0a79c(param_1 + 0x2a4);
  FUN_00f13d08(param_1 + 0x28a);
  param_1[0x26c] = &PTR_FUN_028266f0;
  param_1[0x283] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x286);
  FUN_00f13d08(param_1 + 0x26c);
  FUN_00ac6220(param_1 + 0x201);
  FUN_00ac6220(param_1 + 0x196);
  FUN_00f0d3a4(param_1 + 0x170);
  param_1[0x152] = &PTR_FUN_028266f0;
  param_1[0x169] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x16c);
  FUN_00f13d08(param_1 + 0x152);
  FUN_00f01868(param_1 + 0x141);
  FUN_00f13d08(param_1 + 0x12a);
  param_1[0x11] = &PTR_FUN_027d70a0;
  FUN_00f0d3a4(param_1 + 0x102);
  FUN_00f0d3a4(param_1 + 0xdc);
  param_1[0xbe] = &PTR_FUN_028266f0;
  param_1[0xd5] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xd8);
  FUN_00f13d08(param_1 + 0xbe);
  FUN_00f0d3a4(param_1 + 0x98);
  FUN_00af8c0c(param_1 + 0x22);
  FUN_00f01868(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00b887d4(long param_1)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x3328) != 0) {
    uVar3 = 0;
    do {
      uVar1 = FUN_00f02540(*(undefined8 *)(*(long *)(param_1 + 0x3330) + uVar3 * 8));
      if ((uVar1 & 1) != 0) {
        FUN_00f01a4c(*(undefined8 *)(*(long *)(param_1 + 0x3330) + uVar3 * 8),1);
      }
      plVar2 = *(long **)(*(long *)(param_1 + 0x3330) + uVar3 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x3328));
  }
  if (*(long *)(param_1 + 0x3330) != 0) {
    *(undefined4 *)(param_1 + 0x3328) = 0;
  }
  return;
}




void FUN_00b88850(void *param_1)

{
  FUN_00b885f0();
  operator_delete(param_1);
  return;
}




void FUN_00b88874(long param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x3348) = param_2;
  *(undefined4 *)(param_1 + 0x3344) = param_3;
  return;
}




void FUN_00b88880(long *param_1)

{
  char *pcVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  long *plVar12;
  uint uVar13;
  ushort uVar14;
  ulong uVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  ushort *puVar19;
  uint uVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  long local_a0;
  long *local_98 [4];
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  uVar13 = *(uint *)(param_1 + 0x669);
  uVar2 = *(uint *)((long)param_1 + 0x334c);
  plVar12 = param_1 + 0x11;
  fVar25 = *(float *)(param_1 + 0x668) / (float)(uVar13 / 10 + 1);
  fVar22 = (float)(10 - uVar2 % 10);
  uVar20 = uVar2 / 10 + 1;
  if ((float)(uVar13 - uVar2) <= fVar22) {
    fVar22 = (float)(uVar13 - uVar2);
  }
  bVar9 = uVar2 / 10 == uVar13 / 10;
  *(uint *)((long)param_1 + 0x3354) = uVar20;
  bVar8 = uVar13 <= uVar20;
  FUN_00f01980(plVar12);
  FUN_00acdd70(plVar12,*(undefined4 *)((long)param_1 + 0x334c));
  FUN_00acd880(plVar12);
  lVar21 = DAT_03210d00;
  if (*(uint *)((long)param_1 + 0x334c) < *(uint *)(param_1 + 0x669)) {
    uVar14 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar14 == 0xffff) {
      puVar19 = (ushort *)0x0;
    }
    else {
      puVar19 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar14 * 0x40);
      if (uVar14 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar14 = 0xffff;
      }
      else {
        uVar14 = *puVar19;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar14;
      *(int *)(lVar21 + 0x20014) = *(int *)(lVar21 + 0x20014) + 1;
      FUN_00efc8e8(puVar19);
      *(undefined ***)puVar19 = &PTR_FUN_027c27b8;
      puVar19[0xc] = 0;
      puVar19[0xd] = 0;
      puVar19[0xe] = 0;
      puVar19[0xf] = 0;
      puVar19[0x10] = 0;
      puVar19[0x11] = 0;
      puVar19[0x12] = 0;
      puVar19[0x13] = 0;
      puVar19[8] = 0;
      puVar19[9] = 0;
      puVar19[10] = 0;
      puVar19[0xb] = 0;
      *(int *)(lVar21 + 0x20020) = *(int *)(lVar21 + 0x20020) + 1;
    }
    *(code **)(puVar19 + 8) = FUN_00b89058;
    *(long **)(puVar19 + 0x10) = param_1;
    uVar11 = FUN_00eff848(fVar25,(int)fVar22,puVar19);
    FUN_00f022a0(plVar12,uVar11);
  }
  plVar12 = param_1 + 0x2ef;
  FUN_00f01980(plVar12);
  lVar21 = DAT_03210d00;
  fVar23 = (float)NEON_ucvtf((int)param_1[0x669]);
  uVar14 = *(ushort *)(DAT_03210d00 + 0x20010);
  fVar24 = (float)NEON_ucvtf(*(undefined4 *)((long)param_1 + 0x3344));
  iVar17 = (int)(((float)(uint)(*(int *)((long)param_1 + 0x334c) + (int)fVar22) / fVar23) * fVar24);
  if ((ulong)uVar14 == 0xffff) {
    puVar19 = (ushort *)0x0;
  }
  else {
    puVar19 = (ushort *)(DAT_03210d00 + (ulong)uVar14 * 0x40 + 0x10);
    if (uVar14 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar14 = 0xffff;
    }
    else {
      uVar14 = *puVar19;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar14;
    *(int *)(lVar21 + 0x20014) = *(int *)(lVar21 + 0x20014) + 1;
    FUN_00a99c84(puVar19);
    *(int *)(lVar21 + 0x20020) = *(int *)(lVar21 + 0x20020) + 1;
  }
  FUN_00a99cbc(puVar19,plVar12,(int)param_1[0x66a],iVar17,1);
  FUN_00efcac4(fVar25,puVar19);
  FUN_00f022a0(plVar12,puVar19);
  lVar21 = param_1[0x667];
  *(int *)(param_1 + 0x66a) = iVar17;
  if (*(uint *)(lVar21 + 0xdd00) == 0) {
    bVar5 = false;
    iVar17 = 0;
    bVar4 = false;
    iVar18 = 0;
    uVar15 = 0xffffffff;
    uVar20 = 0xffffffff;
  }
  else {
    uVar15 = 0;
    uVar20 = 0xffffffff;
    uVar13 = 0xffffffff;
    piVar16 = *(int **)(lVar21 + 0xdd08);
    do {
      uVar2 = (uint)uVar15;
      if (*piVar16 != *(int *)((long)param_1 + 0x3354) + -1) {
        uVar2 = uVar13;
      }
      uVar7 = (uint)uVar15;
      if (*piVar16 != *(int *)((long)param_1 + 0x3354)) {
        uVar13 = uVar2;
        uVar7 = uVar20;
      }
      uVar20 = uVar7;
      uVar15 = uVar15 + 1;
      piVar16 = piVar16 + 3;
    } while (uVar15 < *(uint *)(lVar21 + 0xdd00));
    if (uVar20 == 0xffffffff) {
      iVar17 = 0;
    }
    else {
      iVar17 = *(int *)(*(long *)(lVar21 + 0xdd08) + (ulong)uVar20 * 0xc + 4);
    }
    bVar4 = uVar20 != 0xffffffff;
    if (uVar13 == 0xffffffff) {
      bVar5 = false;
      iVar18 = 0;
      uVar15 = 0xffffffff;
    }
    else {
      bVar5 = true;
      iVar18 = *(int *)(*(long *)(lVar21 + 0xdd08) + (ulong)uVar13 * 0xc + 4);
      uVar15 = (ulong)uVar13;
    }
  }
  if (0 < iVar17 - iVar18) {
    plVar12 = param_1 + 0x33b;
    FUN_00f01980(plVar12);
    lVar6 = DAT_03210d00;
    uVar14 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar14 == 0xffff) {
      puVar19 = (ushort *)0x0;
    }
    else {
      puVar19 = (ushort *)(DAT_03210d00 + (ulong)uVar14 * 0x40 + 0x10);
      if (uVar14 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar14 = 0xffff;
      }
      else {
        uVar14 = *puVar19;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar14;
      *(int *)(lVar6 + 0x20014) = *(int *)(lVar6 + 0x20014) + 1;
      FUN_00a99c84(puVar19);
      *(int *)(lVar6 + 0x20020) = *(int *)(lVar6 + 0x20020) + 1;
    }
    FUN_00a99cbc(puVar19,plVar12,iVar18,iVar17,1);
    FUN_00efcac4(fVar25,puVar19);
    FUN_00f022a0(plVar12,puVar19);
    plVar12 = operator_new(0x2a8);
    FUN_00b874e4(plVar12,1,iVar17 - iVar18);
    local_98[0] = plVar12;
    FUN_00b89078(param_1 + 0x665,local_98);
    (**(code **)(*param_1 + 0x78))(param_1,local_98[0],1);
    plVar12 = local_98[0];
    local_a0 = param_1[0x345];
    fVar22 = (float)param_1[0x343] + 150.0;
    fVar23 = (float)((ulong)param_1[0x343] >> 0x20) + 0.0;
    if ((*(float *)(local_98[0] + 8) != fVar22) || (*(float *)((long)local_98[0] + 0x44) != fVar23))
    {
      local_98[0][8] = CONCAT44(fVar23,fVar22);
      FUN_0091ada4(local_98[0]);
    }
    (**(code **)(*plVar12 + 0x28))(plVar12,&local_a0);
    pcVar1 = "build://Sounds/UI.assetbundle/tadah.mp3";
    if (!bVar9 && !bVar8) {
      pcVar1 = "build://Sounds/UI.assetbundle/star_slam_1.mp3";
    }
    FUN_00b87980(fVar25 * 0.9,local_98[0],pcVar1);
  }
  iVar17 = 0;
  if (bVar4) {
    iVar17 = *(int *)(*(long *)(lVar21 + 0xdd08) + (ulong)uVar20 * 0xc + 8);
  }
  iVar18 = 0;
  if (bVar5) {
    iVar18 = *(int *)(*(long *)(lVar21 + 0xdd08) + uVar15 * 0xc + 8);
  }
  if (0 < iVar17 - iVar18) {
    plVar12 = param_1 + 0x387;
    FUN_00f01980(plVar12);
    lVar21 = DAT_03210d00;
    uVar14 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar14 == 0xffff) {
      puVar19 = (ushort *)0x0;
    }
    else {
      puVar19 = (ushort *)(DAT_03210d00 + (ulong)uVar14 * 0x40 + 0x10);
      if (uVar14 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar14 = 0xffff;
      }
      else {
        uVar14 = *puVar19;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar14;
      *(int *)(lVar21 + 0x20014) = *(int *)(lVar21 + 0x20014) + 1;
      FUN_00a99c84(puVar19);
      *(int *)(lVar21 + 0x20020) = *(int *)(lVar21 + 0x20020) + 1;
    }
    FUN_00a99cbc(puVar19,plVar12,iVar18,iVar17,1);
    FUN_00efcac4(fVar25,puVar19);
    FUN_00f022a0(plVar12,puVar19);
    plVar12 = operator_new(0x2a8);
    FUN_00b874e4(plVar12,0,iVar17 - iVar18);
    local_98[0] = plVar12;
    FUN_00b89078(param_1 + 0x665,local_98);
    (**(code **)(*param_1 + 0x78))(param_1,local_98[0],1);
    plVar12 = local_98[0];
    local_a0 = param_1[0x391];
    fVar22 = (float)param_1[0x38f] + 150.0;
    fVar23 = (float)((ulong)param_1[0x38f] >> 0x20) + 0.0;
    if ((*(float *)(local_98[0] + 8) != fVar22) || (*(float *)((long)local_98[0] + 0x44) != fVar23))
    {
      local_98[0][8] = CONCAT44(fVar23,fVar22);
      FUN_0091ada4(local_98[0]);
    }
    (**(code **)(*plVar12 + 0x28))(plVar12,&local_a0);
    pcVar1 = (char *)0x0;
    if (!bVar9 && !bVar8) {
      pcVar1 = "build://Sounds/UI.assetbundle/star_slam_3.mp3";
    }
    FUN_00b87980(fVar25 * 0.9,local_98[0],pcVar1);
  }
  if (bVar9 || bVar8) {
    uVar10 = FUN_00f048a4("UI::EVENT_MENU_SPOILS_SEASON_REWARDS_FINISHED");
    FUN_00f048e0(local_98,uVar10,0);
    FUN_00f04760(param_1,local_98,1);
    uVar20 = *(uint *)((long)param_1 + 0x1dec);
    plVar12 = param_1 + 0x3ad;
    if ((uVar20 & 0x7f80) != 0) {
      *(uint *)((long)param_1 + 0x1dec) = uVar20 & 0xffff807f;
      FUN_0091ada4(plVar12);
      uVar20 = *(uint *)((long)param_1 + 0x1dec);
    }
    *(uint *)((long)param_1 + 0x1dec) = uVar20 | 4;
    FUN_00b09454(plVar12,1);
    FUN_00f01980(plVar12);
    uVar11 = FUN_00efed6c(0x40000000);
    FUN_00f022a0(plVar12,uVar11);
    uVar11 = FUN_00efee28(0x3f800000,0x3f800000,0);
    FUN_00f022a0(plVar12,uVar11);
  }
  if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

