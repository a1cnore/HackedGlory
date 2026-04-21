// functions/00b81 — 8 functions
#include "libGameKindred.h"




void FUN_00b81014(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined1 auStack_4c [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(auStack_4c,&local_50);
  lVar2 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efe8d0(puVar4);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3f000000,puVar4);
  param_1 = param_1 + 0x180;
  if ((param_2 & 1) == 0) {
    local_58 = 0;
    uStack_54 = local_50;
    FUN_00efe91c(puVar4,param_1,&local_58);
    FUN_00efcb24(puVar4,FUN_0091aa80);
    FUN_00f01980(param_1);
    FUN_00f022a0(param_1,puVar4);
  }
  else {
    local_58 = 0x44700000;
    uStack_54 = local_50;
    FUN_00efe91c(puVar4,param_1,&local_58);
    FUN_00efcb24(puVar4,FUN_00a269a4);
    FUN_00f13f08(0,local_50,param_1);
    FUN_00f01980(param_1);
    FUN_00f022a0(param_1,puVar4);
    FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/ui_sting_spoils_of_war.mp3",0,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b811c4(long param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_00f0e700(param_1 + 800);
  fVar2 = *(float *)(param_1 + 0xdd80);
  FUN_00f0db64(fVar1 - (fVar2 + fVar2 + (float)(&DAT_01bb68b0)[0.0 < fVar2]),0,0x3f800000,
               param_1 + 0x5f0);
  return;
}




void FUN_00b811c4(long param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_00f0e700(param_1 + 800);
  fVar2 = *(float *)(param_1 + 0xdd80);
  FUN_00f0db64(fVar1 - (fVar2 + fVar2 + (float)(&DAT_01bb68b0)[0.0 < fVar2]),0,0x3f800000,
               param_1 + 0x5f0);
  return;
}




void FUN_00b81220(long param_1)

{
  long lVar1;
  long lVar2;
  float *pfVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ushort uVar9;
  ushort *puVar10;
  ulong uVar11;
  ulong local_a0 [2];
  void *local_90;
  undefined8 local_88;
  void *local_80;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  FUN_00e70510(&local_88);
  FUN_00e70e18(&local_88,&DAT_01bb6d43,*(undefined4 *)(param_1 + 0xdc10));
  lVar1 = param_1 + 0x44e0;
  FUN_00f0d75c(lVar1,&local_88);
  FUN_00f01980(lVar1);
  lVar2 = param_1 + 0x43f0;
  FUN_00f01980(lVar2);
  pfVar3 = (float *)(param_1 + 0x4528);
  if ((*pfVar3 != 8.0) || (*(float *)(param_1 + 0x452c) != 8.0)) {
    pfVar3[0] = 8.0;
    pfVar3[1] = 8.0;
    FUN_0091ada4(lVar1);
  }
  uVar4 = *(uint *)(param_1 + 0x4564);
  if ((uVar4 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x4564) = uVar4 & 0xffff807f;
    FUN_0091ada4(lVar1);
  }
  uVar7 = FUN_00a26784();
  uVar11 = NEON_fmov(0x3f800000,4);
  local_a0[0] = uVar11;
  FUN_00efe58c(uVar7,local_a0);
  FUN_00efcac4(0x3ecccccd,uVar7);
  FUN_00efcb24(uVar7,FUN_009a7624);
  uVar8 = FUN_00a250a8();
  FUN_00efddc4(0x3f800000);
  FUN_00efcac4(0x3e4ccccd,uVar8);
  FUN_00efcb24(uVar8,FUN_009a7624);
  lVar6 = DAT_03210d00;
  uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar9 == 0xffff) {
    puVar10 = (ushort *)0x0;
  }
  else {
    puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
    if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar9 = 0xffff;
    }
    else {
      uVar9 = *puVar10;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
    *(int *)(lVar6 + 0x20014) = *(int *)(lVar6 + 0x20014) + 1;
    FUN_00efcd98(puVar10);
    *(int *)(lVar6 + 0x20020) = *(int *)(lVar6 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar10,uVar7,uVar8,0);
  FUN_00f022a0(lVar1,puVar10);
  uVar7 = FUN_00a26784();
  local_a0[0] = 0x3f59999a3f59999a;
  FUN_00efe58c(uVar7,local_a0);
  FUN_00efcac4(0x3d4ccccd,uVar7);
  FUN_00f022a0(lVar1,uVar7);
  uVar7 = FUN_00a26784();
  local_a0[0] = uVar11;
  FUN_00efe58c(uVar7,local_a0);
  FUN_00efcac4(0x3d4ccccd,uVar7);
  FUN_00f022a0(lVar1,uVar7);
  lVar1 = DAT_03210d00;
  uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar9 == 0xffff) {
    puVar10 = (ushort *)0x0;
  }
  else {
    puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
    if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar9 = 0xffff;
    }
    else {
      uVar9 = *puVar10;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcad4(puVar10);
    *(undefined ***)puVar10 = &PTR_FUN_027c1a60;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3ecccccd,puVar10);
  FUN_00f022a0(lVar2,puVar10);
  lVar1 = DAT_03210d00;
  uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar9 == 0xffff) {
    puVar10 = (ushort *)0x0;
  }
  else {
    puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
    if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar9 = 0xffff;
    }
    else {
      uVar9 = *puVar10;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efdee0(puVar10);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efdf2c(0x3f800000,puVar10,lVar2);
  FUN_00efcac4(0,puVar10);
  FUN_00f022a0(lVar2,puVar10);
  lVar1 = DAT_03210d00;
  uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar9 == 0xffff) {
    puVar10 = (ushort *)0x0;
  }
  else {
    puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
    if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar9 = 0xffff;
    }
    else {
      uVar9 = *puVar10;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00a99abc(puVar10);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_008fa54c(local_a0,"LEVEL_UP_FIREWORKS");
  FUN_00a99b4c(puVar10,param_1 + 0x5928,local_a0);
  if ((local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  FUN_00f022a0(lVar2,puVar10);
  uVar7 = FUN_00a26784();
  local_a0[0] = 0x3f9333333f933333;
  FUN_00efe58c(uVar7,local_a0);
  FUN_00efcac4(0x3d4ccccd,uVar7);
  FUN_00f022a0(lVar2,uVar7);
  uVar7 = FUN_00a26784();
  local_a0[0] = 0x3faccccd3faccccd;
  FUN_00efe58c(uVar7,local_a0);
  FUN_00efcac4(0x3d4ccccd,uVar7);
  FUN_00f022a0(lVar2,uVar7);
  FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/ui_level_up_sting.mp3",0,0);
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = 0;
    local_80 = (void *)0x0;
  }
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b81778(long param_1)

{
  long lVar1;
  float *pfVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  ushort uVar11;
  undefined4 *puVar12;
  long lVar13;
  int iVar14;
  ushort *puVar15;
  undefined8 uVar16;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 *local_b0;
  ulong local_a8;
  undefined4 *local_a0;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  FUN_00e70510(&local_88);
  FUN_00e70e18(&local_88,&DAT_01bb6d43,*(undefined4 *)(param_1 + 0xdc50));
  lVar1 = param_1 + 0xc1c0;
  FUN_00f0d75c(lVar1,&local_88);
  FUN_00f01980(lVar1);
  pfVar2 = (float *)(param_1 + 0xc208);
  if ((*pfVar2 != 8.0) || (*(float *)(param_1 + 0xc20c) != 8.0)) {
    pfVar2[0] = 8.0;
    pfVar2[1] = 8.0;
    FUN_0091ada4(lVar1);
  }
  uVar3 = *(uint *)(param_1 + 0xc244);
  if ((uVar3 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0xc244) = uVar3 & 0xffff807f;
    FUN_0091ada4(lVar1);
  }
  uVar6 = FUN_00a26784();
  uVar16 = NEON_fmov(0x3f800000,4);
  local_98 = uVar16;
  FUN_00efe58c(uVar6,&local_98);
  FUN_00efcac4(0x3ecccccd,uVar6);
  FUN_00efcb24(uVar6,FUN_009a7624);
  uVar7 = FUN_00a250a8();
  FUN_00efddc4(0x3f800000);
  FUN_00efcac4(0x3e4ccccd,uVar7);
  FUN_00efcb24(uVar7,FUN_009a7624);
  lVar13 = DAT_03210d00;
  uVar11 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar11 == 0xffff) {
    puVar15 = (ushort *)0x0;
  }
  else {
    puVar15 = (ushort *)(DAT_03210d00 + (ulong)uVar11 * 0x40 + 0x10);
    if (uVar11 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar11 = 0xffff;
    }
    else {
      uVar11 = *puVar15;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar11;
    *(int *)(lVar13 + 0x20014) = *(int *)(lVar13 + 0x20014) + 1;
    FUN_00efcd98(puVar15);
    *(int *)(lVar13 + 0x20020) = *(int *)(lVar13 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar15,uVar6,uVar7,0);
  FUN_00f022a0(lVar1,puVar15);
  uVar6 = FUN_00a26784();
  local_98 = CONCAT44(*(undefined4 *)(&DAT_01bb68b8 + (ulong)(99 < *(int *)(param_1 + 0xdc54)) * 4),
                      *(undefined4 *)(&DAT_01bb68b8 + (ulong)(99 < *(int *)(param_1 + 0xdc54)) * 4))
  ;
  FUN_00efe58c(uVar6,&local_98);
  FUN_00efcac4(0x3d4ccccd,uVar6);
  FUN_00f022a0(lVar1,uVar6);
  uVar6 = FUN_00a26784();
  uVar5 = 0x3f4ccccd;
  if (*(int *)(param_1 + 0xdc54) < 100) {
    uVar5 = 0x3f800000;
  }
  local_98 = CONCAT44(uVar5,uVar5);
  FUN_00efe58c(uVar6,&local_98);
  FUN_00efcac4(0x3d4ccccd,uVar6);
  FUN_00f022a0(lVar1,uVar6);
  lVar1 = DAT_03210d00;
  uVar11 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar11 == 0xffff) {
    puVar15 = (ushort *)0x0;
  }
  else {
    puVar15 = (ushort *)(DAT_03210d00 + (ulong)uVar11 * 0x40 + 0x10);
    if (uVar11 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar11 = 0xffff;
    }
    else {
      uVar11 = *puVar15;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar11;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcad4(puVar15);
    *(undefined ***)puVar15 = &PTR_FUN_027c1a60;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3ecccccd,puVar15);
  lVar1 = param_1 + 0xbbf0;
  FUN_00f022a0(lVar1,puVar15);
  uVar6 = FUN_00a26784();
  local_98 = 0x3f59999a3f59999a;
  FUN_00efe58c(uVar6,&local_98);
  FUN_00efcac4(0x3d4ccccd,uVar6);
  FUN_00f022a0(lVar1,uVar6);
  FUN_00e70510(&local_98);
  switch(*(int *)(param_1 + 0xdc58)) {
  case 1:
    pcVar8 = "GUILD_OVERVIEW_TIER_1_LABEL";
    break;
  case 2:
    pcVar8 = "GUILD_OVERVIEW_TIER_2_LABEL";
    break;
  case 3:
    pcVar8 = "GUILD_OVERVIEW_TIER_3_LABEL";
    break;
  case 4:
    pcVar8 = "GUILD_OVERVIEW_TIER_4_LABEL";
    break;
  case 5:
    pcVar8 = "GUILD_OVERVIEW_TIER_5_LABEL";
    break;
  case 6:
    pcVar8 = "GUILD_OVERVIEW_TIER_6_LABEL";
    break;
  case 7:
    pcVar8 = "GUILD_OVERVIEW_TIER_7_LABEL";
    break;
  case 8:
    pcVar8 = "GUILD_OVERVIEW_TIER_8_LABEL";
    break;
  case 9:
    pcVar8 = "GUILD_OVERVIEW_TIER_9_LABEL";
    break;
  case 10:
    pcVar8 = "GUILD_OVERVIEW_TIER_10_LABEL";
    break;
  default:
    puVar9 = &DAT_03210450;
    goto LAB_00b81b9c;
  }
  puVar9 = (undefined8 *)FUN_00e6ce7c(pcVar8,0);
LAB_00b81b9c:
  FUN_00910394(&local_98,puVar9);
  lVar13 = DAT_03210d00;
  uVar11 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar11 == 0xffff) {
    puVar15 = (ushort *)0x0;
  }
  else {
    puVar15 = (ushort *)(DAT_03210d00 + (ulong)uVar11 * 0x40 + 0x10);
    if (uVar11 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar11 = 0xffff;
    }
    else {
      uVar11 = *puVar15;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar11;
    *(int *)(lVar13 + 0x20014) = *(int *)(lVar13 + 0x20014) + 1;
    FUN_00efe4c4(puVar15);
    *(int *)(lVar13 + 0x20020) = *(int *)(lVar13 + 0x20020) + 1;
  }
  FUN_00efe4fc(puVar15,param_1 + 0xc090,&local_98);
  FUN_00f022a0(param_1 + 0xc090,puVar15);
  iVar14 = (int)(float)(*(int *)(param_1 + 0xdc58) * 2 + -2);
  local_a8 = 0;
  local_a0 = (undefined4 *)0x0;
  local_c0._0_4_ = iVar14;
  FUN_0091f584(&local_a8,&local_c0);
  local_c0 = CONCAT44(local_c0._4_4_,iVar14 + 1);
  FUN_0091f584(&local_a8,&local_c0);
  lVar13 = DAT_03210d00;
  uVar11 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar11 == 0xffff) {
    puVar15 = (ushort *)0x0;
  }
  else {
    puVar15 = (ushort *)(DAT_03210d00 + (ulong)uVar11 * 0x40 + 0x10);
    if (uVar11 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar11 = 0xffff;
    }
    else {
      uVar11 = *puVar15;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar11;
    *(int *)(lVar13 + 0x20014) = *(int *)(lVar13 + 0x20014) + 1;
    FUN_00a999a0(puVar15);
    *(int *)(lVar13 + 0x20020) = *(int *)(lVar13 + 0x20020) + 1;
  }
  local_b8 = 0;
  local_b0 = (undefined4 *)0x0;
  FUN_0091f484(&local_b8,local_a8 & 0xffffffff);
  if ((int)local_a8 == 0) {
    iVar14 = 0;
  }
  else {
    lVar13 = (local_a8 & 0xffffffff) << 2;
    puVar10 = local_a0;
    puVar12 = local_b0;
    do {
      lVar13 = lVar13 + -4;
      *puVar12 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
      iVar14 = (int)local_a8;
    } while (lVar13 != 0);
  }
  local_b8 = CONCAT44(local_b8._4_4_,iVar14);
  FUN_00a99a60(puVar15,lVar1,&local_b8);
  if (local_b0 != (undefined4 *)0x0) {
    operator_delete__(local_b0);
    local_b8 = 0;
    local_b0 = (undefined4 *)0x0;
  }
  FUN_00f022a0(lVar1,puVar15);
  uVar6 = FUN_00a26784();
  local_c0 = uVar16;
  FUN_00efe58c(uVar6,&local_c0);
  FUN_00efcac4(0x3d4ccccd,uVar6);
  FUN_00f022a0(lVar1,uVar6);
  FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/guild_level_up.mp3",0,0);
  if (local_a0 != (undefined4 *)0x0) {
    operator_delete__(local_a0);
    local_a8 = 0;
    local_a0 = (undefined4 *)0x0;
  }
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = 0;
    local_90 = (void *)0x0;
  }
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = 0;
    local_80 = (void *)0x0;
  }
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b81e30(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  FUN_008fce60(param_1 + 0x1b75);
  memcpy(param_1 + 0x1b78,(void *)(param_2 + 0x18),0xc1);
  lVar2 = 0;
  do {
    FUN_008fce60((long)param_1 + lVar2 + 0xdc88,param_2 + 0xe0 + lVar2);
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0x78);
  FUN_00b893f4(param_1 + 0x1ba0,param_2 + 0x158);
  *(undefined4 *)(param_1 + 0x1ba2) = *(undefined4 *)(param_2 + 0x168);
  FUN_008fce60(param_1 + 0x1ba3,param_2 + 0x170);
  FUN_008fce60(param_1 + 0x1ba6,param_2 + 0x188);
  param_1[0x1ba9] = *(long *)(param_2 + 0x1a0);
  *(undefined1 *)(param_1 + 0x1baa) = *(undefined1 *)(param_2 + 0x1a8);
  FUN_00b8950c(param_1 + 0x1bab,param_2 + 0x1b0);
  lVar2 = *(long *)(param_2 + 0x1c0);
  param_1[0x1bae] = *(long *)(param_2 + 0x1c8);
  param_1[0x1bad] = lVar2;
  iVar1 = (int)param_1[0x1b8b];
  if (9 < iVar1) {
    iVar1 = 10;
  }
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  *(int *)(param_1 + 0x1b8b) = iVar1;
  iVar1 = *(int *)((long)param_1 + 0xdc5c);
  if (9 < iVar1) {
    iVar1 = 10;
  }
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  *(int *)((long)param_1 + 0xdc5c) = iVar1;
  *(undefined1 *)((long)param_1 + 0xdd87) = *(undefined1 *)((long)param_1 + 0xdc31);
  *(char *)(param_1 + 0x1bb1) = (char)param_1[0x1b86];
  *(undefined1 *)((long)param_1 + 0xdd89) = *(undefined1 *)((long)param_1 + 0xdc4d);
  *(char *)((long)param_1 + 0xdd8a) = (char)param_1[0x1b90];
  *(char *)((long)param_1 + 0xdd8b) = (char)param_1[0x1baa];
  *(bool *)((long)param_1 + 0xdd8d) =
       *(uint *)(param_1 + 0x1bae) < *(uint *)((long)param_1 + 0xdd74);
  *(undefined1 *)((long)param_1 + 0xdd8c) = 0;
  FUN_00b82038(param_1);
  *(undefined1 *)((long)param_1 + 0xdd8c) = 1;
  (**(code **)(*param_1 + 0x150))(param_1);
  if (*(char *)(param_2 + 0x85) != '\0') {
    FUN_008ff2b4();
  }
  if (*(char *)(param_2 + 0x86) != '\0') {
    FUN_008ff2e4();
  }
  if (*(char *)(param_2 + 0x87) != '\0') {
    FUN_008ff314();
  }
  if ((*(int *)((long)param_1 + 0xdc14) == 0x13) && ((int)param_1[0x1b82] == 0x14)) {
    FUN_008ff344();
  }
  lVar2 = FUN_009580b8();
  FUN_009658c8(lVar2 + 0x18);
  return;
}




void thunk_FUN_00b81220(long param_1)

{
  long lVar1;
  long lVar2;
  float *pfVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ushort uVar9;
  ushort *puVar10;
  ulong uVar11;
  ulong auStack_a0 [2];
  void *pvStack_90;
  undefined8 uStack_88;
  void *pvStack_80;
  long lStack_78;
  
  lVar5 = tpidr_el0;
  lStack_78 = *(long *)(lVar5 + 0x28);
  FUN_00e70510(&uStack_88);
  FUN_00e70e18(&uStack_88,&DAT_01bb6d43,*(undefined4 *)(param_1 + 0xdc10));
  lVar1 = param_1 + 0x44e0;
  FUN_00f0d75c(lVar1,&uStack_88);
  FUN_00f01980(lVar1);
  lVar2 = param_1 + 0x43f0;
  FUN_00f01980(lVar2);
  pfVar3 = (float *)(param_1 + 0x4528);
  if ((*pfVar3 != 8.0) || (*(float *)(param_1 + 0x452c) != 8.0)) {
    pfVar3[0] = 8.0;
    pfVar3[1] = 8.0;
    FUN_0091ada4(lVar1);
  }
  uVar4 = *(uint *)(param_1 + 0x4564);
  if ((uVar4 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x4564) = uVar4 & 0xffff807f;
    FUN_0091ada4(lVar1);
  }
  uVar7 = FUN_00a26784();
  uVar11 = NEON_fmov(0x3f800000,4);
  auStack_a0[0] = uVar11;
  FUN_00efe58c(uVar7,auStack_a0);
  FUN_00efcac4(0x3ecccccd,uVar7);
  FUN_00efcb24(uVar7,FUN_009a7624);
  uVar8 = FUN_00a250a8();
  FUN_00efddc4(0x3f800000);
  FUN_00efcac4(0x3e4ccccd,uVar8);
  FUN_00efcb24(uVar8,FUN_009a7624);
  lVar6 = DAT_03210d00;
  uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar9 == 0xffff) {
    puVar10 = (ushort *)0x0;
  }
  else {
    puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
    if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar9 = 0xffff;
    }
    else {
      uVar9 = *puVar10;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
    *(int *)(lVar6 + 0x20014) = *(int *)(lVar6 + 0x20014) + 1;
    FUN_00efcd98(puVar10);
    *(int *)(lVar6 + 0x20020) = *(int *)(lVar6 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar10,uVar7,uVar8,0);
  FUN_00f022a0(lVar1,puVar10);
  uVar7 = FUN_00a26784();
  auStack_a0[0] = 0x3f59999a3f59999a;
  FUN_00efe58c(uVar7,auStack_a0);
  FUN_00efcac4(0x3d4ccccd,uVar7);
  FUN_00f022a0(lVar1,uVar7);
  uVar7 = FUN_00a26784();
  auStack_a0[0] = uVar11;
  FUN_00efe58c(uVar7,auStack_a0);
  FUN_00efcac4(0x3d4ccccd,uVar7);
  FUN_00f022a0(lVar1,uVar7);
  lVar1 = DAT_03210d00;
  uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar9 == 0xffff) {
    puVar10 = (ushort *)0x0;
  }
  else {
    puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
    if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar9 = 0xffff;
    }
    else {
      uVar9 = *puVar10;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcad4(puVar10);
    *(undefined ***)puVar10 = &PTR_FUN_027c1a60;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3ecccccd,puVar10);
  FUN_00f022a0(lVar2,puVar10);
  lVar1 = DAT_03210d00;
  uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar9 == 0xffff) {
    puVar10 = (ushort *)0x0;
  }
  else {
    puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
    if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar9 = 0xffff;
    }
    else {
      uVar9 = *puVar10;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efdee0(puVar10);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efdf2c(0x3f800000,puVar10,lVar2);
  FUN_00efcac4(0,puVar10);
  FUN_00f022a0(lVar2,puVar10);
  lVar1 = DAT_03210d00;
  uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar9 == 0xffff) {
    puVar10 = (ushort *)0x0;
  }
  else {
    puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
    if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar9 = 0xffff;
    }
    else {
      uVar9 = *puVar10;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00a99abc(puVar10);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_008fa54c(auStack_a0,"LEVEL_UP_FIREWORKS");
  FUN_00a99b4c(puVar10,param_1 + 0x5928,auStack_a0);
  if ((auStack_a0[0] & 1) != 0) {
    operator_delete(pvStack_90);
  }
  FUN_00f022a0(lVar2,puVar10);
  uVar7 = FUN_00a26784();
  auStack_a0[0] = 0x3f9333333f933333;
  FUN_00efe58c(uVar7,auStack_a0);
  FUN_00efcac4(0x3d4ccccd,uVar7);
  FUN_00f022a0(lVar2,uVar7);
  uVar7 = FUN_00a26784();
  auStack_a0[0] = 0x3faccccd3faccccd;
  FUN_00efe58c(uVar7,auStack_a0);
  FUN_00efcac4(0x3d4ccccd,uVar7);
  FUN_00f022a0(lVar2,uVar7);
  FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/ui_level_up_sting.mp3",0,0);
  if (pvStack_80 != (void *)0x0) {
    operator_delete__(pvStack_80);
    uStack_88 = 0;
    pvStack_80 = (void *)0x0;
  }
  if (*(long *)(lVar5 + 0x28) == lStack_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b81778(long param_1)

{
  long lVar1;
  float *pfVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  ushort uVar11;
  undefined4 *puVar12;
  long lVar13;
  int iVar14;
  ushort *puVar15;
  undefined8 uVar16;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 *puStack_b0;
  ulong uStack_a8;
  undefined4 *puStack_a0;
  undefined8 uStack_98;
  void *pvStack_90;
  undefined8 uStack_88;
  void *pvStack_80;
  long lStack_78;
  
  lVar4 = tpidr_el0;
  lStack_78 = *(long *)(lVar4 + 0x28);
  FUN_00e70510(&uStack_88);
  FUN_00e70e18(&uStack_88,&DAT_01bb6d43,*(undefined4 *)(param_1 + 0xdc50));
  lVar1 = param_1 + 0xc1c0;
  FUN_00f0d75c(lVar1,&uStack_88);
  FUN_00f01980(lVar1);
  pfVar2 = (float *)(param_1 + 0xc208);
  if ((*pfVar2 != 8.0) || (*(float *)(param_1 + 0xc20c) != 8.0)) {
    pfVar2[0] = 8.0;
    pfVar2[1] = 8.0;
    FUN_0091ada4(lVar1);
  }
  uVar3 = *(uint *)(param_1 + 0xc244);
  if ((uVar3 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0xc244) = uVar3 & 0xffff807f;
    FUN_0091ada4(lVar1);
  }
  uVar6 = FUN_00a26784();
  uVar16 = NEON_fmov(0x3f800000,4);
  uStack_98 = uVar16;
  FUN_00efe58c(uVar6,&uStack_98);
  FUN_00efcac4(0x3ecccccd,uVar6);
  FUN_00efcb24(uVar6,FUN_009a7624);
  uVar7 = FUN_00a250a8();
  FUN_00efddc4(0x3f800000);
  FUN_00efcac4(0x3e4ccccd,uVar7);
  FUN_00efcb24(uVar7,FUN_009a7624);
  lVar13 = DAT_03210d00;
  uVar11 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar11 == 0xffff) {
    puVar15 = (ushort *)0x0;
  }
  else {
    puVar15 = (ushort *)(DAT_03210d00 + (ulong)uVar11 * 0x40 + 0x10);
    if (uVar11 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar11 = 0xffff;
    }
    else {
      uVar11 = *puVar15;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar11;
    *(int *)(lVar13 + 0x20014) = *(int *)(lVar13 + 0x20014) + 1;
    FUN_00efcd98(puVar15);
    *(int *)(lVar13 + 0x20020) = *(int *)(lVar13 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar15,uVar6,uVar7,0);
  FUN_00f022a0(lVar1,puVar15);
  uVar6 = FUN_00a26784();
  uStack_98 = CONCAT44(*(undefined4 *)(&DAT_01bb68b8 + (ulong)(99 < *(int *)(param_1 + 0xdc54)) * 4)
                       ,*(undefined4 *)
                         (&DAT_01bb68b8 + (ulong)(99 < *(int *)(param_1 + 0xdc54)) * 4));
  FUN_00efe58c(uVar6,&uStack_98);
  FUN_00efcac4(0x3d4ccccd,uVar6);
  FUN_00f022a0(lVar1,uVar6);
  uVar6 = FUN_00a26784();
  uVar5 = 0x3f4ccccd;
  if (*(int *)(param_1 + 0xdc54) < 100) {
    uVar5 = 0x3f800000;
  }
  uStack_98 = CONCAT44(uVar5,uVar5);
  FUN_00efe58c(uVar6,&uStack_98);
  FUN_00efcac4(0x3d4ccccd,uVar6);
  FUN_00f022a0(lVar1,uVar6);
  lVar1 = DAT_03210d00;
  uVar11 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar11 == 0xffff) {
    puVar15 = (ushort *)0x0;
  }
  else {
    puVar15 = (ushort *)(DAT_03210d00 + (ulong)uVar11 * 0x40 + 0x10);
    if (uVar11 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar11 = 0xffff;
    }
    else {
      uVar11 = *puVar15;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar11;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcad4(puVar15);
    *(undefined ***)puVar15 = &PTR_FUN_027c1a60;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3ecccccd,puVar15);
  lVar1 = param_1 + 0xbbf0;
  FUN_00f022a0(lVar1,puVar15);
  uVar6 = FUN_00a26784();
  uStack_98 = 0x3f59999a3f59999a;
  FUN_00efe58c(uVar6,&uStack_98);
  FUN_00efcac4(0x3d4ccccd,uVar6);
  FUN_00f022a0(lVar1,uVar6);
  FUN_00e70510(&uStack_98);
  switch(*(int *)(param_1 + 0xdc58)) {
  case 1:
    pcVar8 = "GUILD_OVERVIEW_TIER_1_LABEL";
    break;
  case 2:
    pcVar8 = "GUILD_OVERVIEW_TIER_2_LABEL";
    break;
  case 3:
    pcVar8 = "GUILD_OVERVIEW_TIER_3_LABEL";
    break;
  case 4:
    pcVar8 = "GUILD_OVERVIEW_TIER_4_LABEL";
    break;
  case 5:
    pcVar8 = "GUILD_OVERVIEW_TIER_5_LABEL";
    break;
  case 6:
    pcVar8 = "GUILD_OVERVIEW_TIER_6_LABEL";
    break;
  case 7:
    pcVar8 = "GUILD_OVERVIEW_TIER_7_LABEL";
    break;
  case 8:
    pcVar8 = "GUILD_OVERVIEW_TIER_8_LABEL";
    break;
  case 9:
    pcVar8 = "GUILD_OVERVIEW_TIER_9_LABEL";
    break;
  case 10:
    pcVar8 = "GUILD_OVERVIEW_TIER_10_LABEL";
    break;
  default:
    puVar9 = &DAT_03210450;
    goto LAB_00b81b9c;
  }
  puVar9 = (undefined8 *)FUN_00e6ce7c(pcVar8,0);
LAB_00b81b9c:
  FUN_00910394(&uStack_98,puVar9);
  lVar13 = DAT_03210d00;
  uVar11 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar11 == 0xffff) {
    puVar15 = (ushort *)0x0;
  }
  else {
    puVar15 = (ushort *)(DAT_03210d00 + (ulong)uVar11 * 0x40 + 0x10);
    if (uVar11 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar11 = 0xffff;
    }
    else {
      uVar11 = *puVar15;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar11;
    *(int *)(lVar13 + 0x20014) = *(int *)(lVar13 + 0x20014) + 1;
    FUN_00efe4c4(puVar15);
    *(int *)(lVar13 + 0x20020) = *(int *)(lVar13 + 0x20020) + 1;
  }
  FUN_00efe4fc(puVar15,param_1 + 0xc090,&uStack_98);
  FUN_00f022a0(param_1 + 0xc090,puVar15);
  iVar14 = (int)(float)(*(int *)(param_1 + 0xdc58) * 2 + -2);
  uStack_a8 = 0;
  puStack_a0 = (undefined4 *)0x0;
  uStack_c0._0_4_ = iVar14;
  FUN_0091f584(&uStack_a8,&uStack_c0);
  uStack_c0 = CONCAT44(uStack_c0._4_4_,iVar14 + 1);
  FUN_0091f584(&uStack_a8,&uStack_c0);
  lVar13 = DAT_03210d00;
  uVar11 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar11 == 0xffff) {
    puVar15 = (ushort *)0x0;
  }
  else {
    puVar15 = (ushort *)(DAT_03210d00 + (ulong)uVar11 * 0x40 + 0x10);
    if (uVar11 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar11 = 0xffff;
    }
    else {
      uVar11 = *puVar15;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar11;
    *(int *)(lVar13 + 0x20014) = *(int *)(lVar13 + 0x20014) + 1;
    FUN_00a999a0(puVar15);
    *(int *)(lVar13 + 0x20020) = *(int *)(lVar13 + 0x20020) + 1;
  }
  uStack_b8 = 0;
  puStack_b0 = (undefined4 *)0x0;
  FUN_0091f484(&uStack_b8,uStack_a8 & 0xffffffff);
  if ((int)uStack_a8 == 0) {
    iVar14 = 0;
  }
  else {
    lVar13 = (uStack_a8 & 0xffffffff) << 2;
    puVar10 = puStack_a0;
    puVar12 = puStack_b0;
    do {
      lVar13 = lVar13 + -4;
      *puVar12 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
      iVar14 = (int)uStack_a8;
    } while (lVar13 != 0);
  }
  uStack_b8 = CONCAT44(uStack_b8._4_4_,iVar14);
  FUN_00a99a60(puVar15,lVar1,&uStack_b8);
  if (puStack_b0 != (undefined4 *)0x0) {
    operator_delete__(puStack_b0);
    uStack_b8 = 0;
    puStack_b0 = (undefined4 *)0x0;
  }
  FUN_00f022a0(lVar1,puVar15);
  uVar6 = FUN_00a26784();
  uStack_c0 = uVar16;
  FUN_00efe58c(uVar6,&uStack_c0);
  FUN_00efcac4(0x3d4ccccd,uVar6);
  FUN_00f022a0(lVar1,uVar6);
  FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/guild_level_up.mp3",0,0);
  if (puStack_a0 != (undefined4 *)0x0) {
    operator_delete__(puStack_a0);
    uStack_a8 = 0;
    puStack_a0 = (undefined4 *)0x0;
  }
  if (pvStack_90 != (void *)0x0) {
    operator_delete__(pvStack_90);
    uStack_98 = 0;
    pvStack_90 = (void *)0x0;
  }
  if (pvStack_80 != (void *)0x0) {
    operator_delete__(pvStack_80);
    uStack_88 = 0;
    pvStack_80 = (void *)0x0;
  }
  if (*(long *)(lVar4 + 0x28) == lStack_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

