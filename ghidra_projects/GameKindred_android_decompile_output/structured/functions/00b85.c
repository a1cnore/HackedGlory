// functions/00b85 — 2 functions
#include "libGameKindred.h"




void FUN_00b8530c(long param_1)

{
  float *pfVar1;
  int *piVar2;
  byte *pbVar3;
  size_t *psVar4;
  size_t sVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  byte bVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  undefined8 uVar13;
  char *pcVar14;
  char *pcVar15;
  size_t sVar16;
  ushort uVar17;
  long lVar18;
  size_t sVar19;
  void *__s1;
  ushort *puVar20;
  float fVar21;
  float fVar22;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  long local_58;
  
  lVar10 = tpidr_el0;
  local_58 = *(long *)(lVar10 + 0x28);
  uVar6 = *(uint *)(param_1 + 0x43ec);
  lVar18 = param_1 + 0x4368;
  if ((uVar6 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x43ec) = uVar6 & 0xffff807f;
    FUN_0091ada4(lVar18);
  }
  lVar11 = DAT_03210d00;
  uVar17 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar17 == 0xffff) {
    puVar20 = (ushort *)0x0;
  }
  else {
    puVar20 = (ushort *)(DAT_03210d00 + (ulong)uVar17 * 0x40 + 0x10);
    if (uVar17 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar17 = 0xffff;
    }
    else {
      uVar17 = *puVar20;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar17;
    *(int *)(lVar11 + 0x20014) = *(int *)(lVar11 + 0x20014) + 1;
    FUN_00efc8e8(puVar20);
    *(undefined ***)puVar20 = &PTR_FUN_02825100;
    *(int *)(lVar11 + 0x20020) = *(int *)(lVar11 + 0x20020) + 1;
  }
  FUN_00f022a0(lVar18,puVar20);
  uVar13 = FUN_00a250a8();
  FUN_00efddc4(0x3f800000);
  pfVar1 = (float *)(param_1 + 0xdd78);
  FUN_00efcac4(*pfVar1,uVar13);
  FUN_00efcb24(uVar13,FUN_009a7608);
  FUN_00f022a0(lVar18,uVar13);
  *(undefined4 *)(param_1 + 0xdd80) = 0;
  piVar2 = (int *)(param_1 + 0xdc14);
  if (*piVar2 < *(int *)(param_1 + 0xdc10)) {
    pcVar14 = "MENU_SPOILS_TITLE_SPOILS_LEVEL_UP";
  }
  else {
    pcVar14 = "MENU_SPOILS_TITLE_SPOILS_XP_GAINED";
  }
  uVar13 = FUN_00e6ce7c(pcVar14,0);
  FUN_00b87278(param_1,uVar13);
  uVar13 = FUN_00a250a8();
  FUN_00efddc4(0x3f800000);
  FUN_00efcac4(*pfVar1,uVar13);
  FUN_00efcb24(uVar13,FUN_009a7608);
  FUN_00f022a0(param_1 + 0x5f0,uVar13);
  FUN_00e70510(&local_70);
  FUN_00e70e18(&local_70,&DAT_01bb6d43,*piVar2);
  FUN_00f0d75c(param_1 + 0x44e0,&local_70);
  FUN_00f0e6bc(0,param_1 + 0x43f0);
  if ((*(float *)(param_1 + 0x4528) != 1.0) || (*(float *)(param_1 + 0x452c) != 1.0)) {
    uVar13 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(param_1 + 0x4528) = uVar13;
    FUN_0091ada4(param_1 + 0x44e0);
  }
  fVar21 = (float)FUN_00f0e700(param_1 + 800);
  lVar18 = param_1 + 0x4610;
  if (*piVar2 < *(int *)(param_1 + 0xdc10)) {
    FUN_00b0a930(fVar21 * 0.8,0x42580000,lVar18,*(undefined4 *)(param_1 + 0xdc1c),
                 *(undefined4 *)(param_1 + 0xdc24),*(undefined4 *)(param_1 + 0xdc18),0);
    iVar12 = *(int *)(param_1 + 0xdc18);
    fVar21 = *pfVar1;
    iVar7 = *(int *)(param_1 + 0xdc20);
    uVar8 = *(undefined4 *)(param_1 + 0xdc28);
  }
  else {
    FUN_00b0a930(fVar21 * 0.8,0x42580000,lVar18,*(undefined4 *)(param_1 + 0xdc24),
                 *(undefined4 *)(param_1 + 0xdc28),*(undefined4 *)(param_1 + 0xdc18),0);
    iVar12 = *(int *)(param_1 + 0xdc18);
    iVar7 = *(int *)(param_1 + 0xdc20);
    fVar21 = *pfVar1;
    uVar8 = *(undefined4 *)(param_1 + 0xdc28);
  }
  fVar21 = fVar21 + 1.0;
  FUN_00b0ac1c(0x40000000,lVar18,iVar7 - iVar12,uVar8);
  fVar22 = *(float *)(param_1 + 0x4654);
  FUN_00f13e54(lVar18);
  pbVar3 = (byte *)(param_1 + 0xdba8);
  psVar4 = (size_t *)(param_1 + 0xdbb0);
  bVar9 = *pbVar3;
  sVar5 = (ulong)(bVar9 >> 1);
  if ((bVar9 & 1) != 0) {
    sVar5 = *psVar4;
  }
  sVar19 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar19 = DAT_0320ffb0;
  }
  if (sVar5 == sVar19) {
    __s1 = *(void **)(param_1 + 0xdbb8);
    if ((bVar9 & 1) == 0) {
      __s1 = (void *)(param_1 + 0xdba9);
    }
    pcVar14 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar14 = &DAT_0320ffa9;
    }
    if ((bVar9 & 1) == 0) {
      if (sVar5 != 0) {
        pcVar15 = (char *)(param_1 + 0xdba9);
        lVar18 = -(ulong)(bVar9 >> 1);
        do {
          if (*pcVar15 != *pcVar14) goto LAB_00b856cc;
          pcVar15 = pcVar15 + 1;
          lVar18 = lVar18 + 1;
          pcVar14 = pcVar14 + 1;
        } while (lVar18 != 0);
      }
    }
    else if ((sVar5 != 0) && (iVar12 = memcmp(__s1,pcVar14,sVar5), iVar12 != 0)) goto LAB_00b856cc;
    *(uint *)(param_1 + 0x5b8c) = *(uint *)(param_1 + 0x5b8c) & 0xfffffffb;
    *(uint *)(param_1 + 0x5cbc) = *(uint *)(param_1 + 0x5cbc) & 0xfffffffb;
    goto LAB_00b858d0;
  }
LAB_00b856cc:
  *(uint *)(param_1 + 0x82c) = *(uint *)(param_1 + 0x82c) | 4;
  *(uint *)(param_1 + 0x140c) = *(uint *)(param_1 + 0x140c) | 4;
  *(uint *)(param_1 + 0x95c) = *(uint *)(param_1 + 0x95c) | 4;
  fVar21 = fVar22 + fVar21 * 0.5 + 80.0;
  if ((*(float *)(param_1 + 0x5b48) != -45.0) || (*(float *)(param_1 + 0x5b4c) != fVar21)) {
    *(float *)(param_1 + 0x5b48) = -45.0;
    *(float *)(param_1 + 0x5b4c) = fVar21;
    FUN_0091ada4(param_1 + 0x5b08);
  }
  local_60 = 0x3f0000003f800000;
  (**(code **)(*(long *)(param_1 + 0x5b08) + 0x28))(param_1 + 0x5b08,&local_60);
  lVar18 = param_1 + 0x5c38;
  if ((*(float *)(param_1 + 0x5c78) != 45.0) || (*(float *)(param_1 + 0x5c7c) != fVar21)) {
    *(float *)(param_1 + 0x5c78) = 45.0;
    *(float *)(param_1 + 0x5c7c) = fVar21;
    FUN_0091ada4(lVar18);
  }
  local_60 = 0x3f00000000000000;
  (**(code **)(*(long *)(param_1 + 0x5c38) + 0x28))(lVar18,&local_60);
  *(uint *)(param_1 + 0x5b8c) = *(uint *)(param_1 + 0x5b8c) | 4;
  *(uint *)(param_1 + 0x5cbc) = *(uint *)(param_1 + 0x5cbc) | 4;
  bVar9 = *pbVar3;
  sVar16 = *psVar4;
  sVar19 = (size_t)(bVar9 >> 1);
  sVar5 = sVar19;
  if ((bVar9 & 1) != 0) {
    sVar5 = sVar16;
  }
  if (sVar5 == 0xb) {
    iVar12 = FUN_0090d610(pbVar3,0,0xffffffffffffffff,"casualmatch",0xb);
    if (iVar12 != 0) {
      bVar9 = *pbVar3;
      sVar16 = *psVar4;
      sVar19 = (size_t)(bVar9 >> 1);
      goto LAB_00b85854;
    }
    pcVar14 = "MENU_LEVEL_UP_REWARD_GAME_MODE_UNLOCKED_CASUAL";
  }
  else {
LAB_00b85854:
    if ((bVar9 & 1) != 0) {
      sVar19 = sVar16;
    }
    if ((sVar19 != 0xb) ||
       (iVar12 = FUN_0090d610(pbVar3,0,0xffffffffffffffff,"rankedmatch",0xb), iVar12 != 0))
    goto LAB_00b858d0;
    pcVar14 = "MENU_LEVEL_UP_REWARD_GAME_MODE_UNLOCKED_RANKED";
  }
  uVar13 = FUN_00e6ce7c(pcVar14,0);
  FUN_00f0d75c(lVar18,uVar13);
LAB_00b858d0:
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_70 = 0;
    local_68 = (void *)0x0;
  }
  if (*(long *)(lVar10 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b85910(long param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  void *pvVar8;
  undefined1 *puVar9;
  uint uVar10;
  ushort uVar11;
  int iVar12;
  ushort *puVar13;
  int iVar14;
  float fVar15;
  void *local_118;
  void *local_110;
  undefined8 local_108;
  undefined1 auStack_100 [128];
  long local_80;
  
  lVar3 = tpidr_el0;
  local_80 = *(long *)(lVar3 + 0x28);
  lVar7 = param_1 + 0x720;
  if ((*(uint *)(param_1 + 0x7a4) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x7a4) = *(uint *)(param_1 + 0x7a4) & 0xffff807f;
    FUN_0091ada4(lVar7);
  }
  lVar4 = DAT_03210d00;
  uVar11 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar11 == 0xffff) {
    puVar13 = (ushort *)0x0;
  }
  else {
    puVar13 = (ushort *)(DAT_03210d00 + (ulong)uVar11 * 0x40 + 0x10);
    if (uVar11 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar11 = 0xffff;
    }
    else {
      uVar11 = *puVar13;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar11;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efc8e8(puVar13);
    *(undefined ***)puVar13 = &PTR_FUN_02825100;
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_00f022a0(lVar7,puVar13);
  uVar5 = FUN_00a250a8();
  FUN_00efddc4(0x3f800000);
  pfVar1 = (float *)(param_1 + 0xdd78);
  FUN_00efcac4(*pfVar1,uVar5);
  FUN_00efcb24(uVar5,FUN_009a7608);
  FUN_00f022a0(lVar7,uVar5);
  *(undefined4 *)(param_1 + 0xdd80) = 0;
  uVar5 = FUN_00e6ce7c("MAIN_SPOILS_OF_WAR_TITLE",0);
  FUN_00b87278(param_1,uVar5);
  uVar5 = FUN_00a250a8();
  FUN_00efddc4(0x3f800000);
  FUN_00efcac4(*pfVar1,uVar5);
  FUN_00efcb24(uVar5,FUN_009a7608);
  FUN_00f022a0(param_1 + 0x5f0,uVar5);
  if (*(char *)(param_1 + 0xdc2c) == '\0') {
    pcVar6 = "MAIN_SPOILS_OF_WAR_DEFEAT";
  }
  else {
    pcVar6 = "MAIN_SPOILS_OF_WAR_VICTORY";
  }
  uVar5 = FUN_00e6ce7c(pcVar6,0);
  FUN_00f0d75c(param_1 + 0xa08,uVar5);
  FUN_00e6a8a8(auStack_100,&DAT_01bb6d43,*(int *)(param_1 + 0xdbc8));
  FUN_00e705c8(&local_118,auStack_100);
  FUN_00f0d75c(param_1 + 0xb38,&local_118);
  if (local_110 != (void *)0x0) {
    operator_delete__(local_110);
    local_118 = (void *)0x0;
    local_110 = (void *)0x0;
  }
  FUN_00e6a8a8(auStack_100,&DAT_01bb6d43,*(undefined4 *)(param_1 + 0xdbf0));
  FUN_00e705c8(&local_118,auStack_100);
  FUN_00f0d75c(param_1 + 0x33a8,&local_118);
  if (local_110 != (void *)0x0) {
    operator_delete__(local_110);
    local_118 = (void *)0x0;
    local_110 = (void *)0x0;
  }
  if (*(int *)(param_1 + 0xdc00) == 0) {
    puVar9 = &DAT_01e277f2;
  }
  else {
    FUN_00e6a8a8(auStack_100,&DAT_01b97cee);
    puVar9 = auStack_100;
  }
  FUN_00e705c8(&local_118,puVar9);
  FUN_00f0d75c(param_1 + 0x3868,&local_118);
  if (local_110 != (void *)0x0) {
    operator_delete__(local_110);
    local_118 = (void *)0x0;
    local_110 = (void *)0x0;
  }
  if (*(char *)(param_1 + 0xdc32) != '\0') {
    *(undefined1 *)(param_1 + 0xdd84) = 0;
    if (*(char *)(param_1 + 0xdc2f) == '\0') {
      if (*(char *)(param_1 + 0xdc2d) == '\0') {
        if (*(char *)(param_1 + 0xdc2e) == '\0') goto LAB_00b85d4c;
        pcVar6 = "MAIN_SPOILS_OF_WAR_3RD_WIN_OF_DAY";
      }
      else {
        pcVar6 = "MAIN_SPOILS_OF_WAR_1ST_WIN_OF_DAY";
      }
    }
    else {
      pcVar6 = "MAIN_SPOILS_OF_WAR_7TH_DAY_WIN";
    }
    uVar5 = FUN_00e6ce7c(pcVar6,0);
    FUN_00f0d75c(param_1 + 0x7a8,uVar5);
    *(undefined1 *)(param_1 + 0xdd84) = 1;
    FUN_00e6a8a8(auStack_100,&DAT_01bb6d43,*(undefined4 *)(param_1 + 0xdbd8));
    FUN_00e705c8(&local_118,auStack_100);
    FUN_00f0d75c(param_1 + 0x8d8,&local_118);
    if (local_110 != (void *)0x0) {
      operator_delete__(local_110);
      local_118 = (void *)0x0;
      local_110 = (void *)0x0;
    }
    FUN_00e6a8a8(auStack_100,&DAT_01bb6d43,*(undefined4 *)(param_1 + 0xdbfc));
    FUN_00e705c8(&local_118,auStack_100);
    FUN_00f0d75c(param_1 + 0x3018,&local_118);
    if (local_110 != (void *)0x0) {
      operator_delete__(local_110);
      local_118 = (void *)0x0;
      local_110 = (void *)0x0;
    }
    if (*(int *)(param_1 + 0xdc0c) == 0) {
      puVar9 = &DAT_01e277f2;
    }
    else {
      FUN_00e6a8a8(auStack_100,&DAT_01b97cee);
      puVar9 = auStack_100;
    }
    FUN_00e705c8(&local_118,puVar9);
    FUN_00f0d75c(param_1 + 0x34d8,&local_118);
    if (local_110 != (void *)0x0) {
      operator_delete__(local_110);
      local_118 = (void *)0x0;
      local_110 = (void *)0x0;
    }
  }
LAB_00b85d4c:
  FUN_00b80b80(param_1);
  lVar7 = FUN_008fc940();
  if ((lVar7 != 0) && (*(uint *)(param_1 + 0xdd68) != 0)) {
    uVar10 = *(uint *)(lVar7 + 0x48);
    fVar15 = (float)*(uint *)(param_1 + 0xdd68);
    iVar12 = (int)(fVar15 / (float)uVar10);
    if (0 < iVar12) {
      iVar14 = 0;
      do {
        pvVar8 = operator_new(0x508);
        FUN_00b19c98();
        local_118 = pvVar8;
        FUN_00b1a0ec(fVar15 / (float)(uVar10 * iVar12),pvVar8,iVar14,iVar12);
        FUN_00b87408(param_1 + 0x4348,&local_118);
        FUN_00f133a4(param_1 + 0x3998,local_118,1);
        iVar14 = iVar14 + 1;
      } while (iVar12 != iVar14);
    }
  }
  if ((lVar7 != 0) && (*(uint *)(param_1 + 0xdd6c) != 0)) {
    uVar10 = *(uint *)(lVar7 + 0x48);
    fVar15 = (float)*(uint *)(param_1 + 0xdd6c);
    iVar12 = (int)(fVar15 / (float)uVar10);
    if (0 < iVar12) {
      iVar14 = 0;
      do {
        pvVar8 = operator_new(0x508);
        FUN_00b19c98();
        local_118 = pvVar8;
        FUN_00b1a0ec(fVar15 / (float)(uVar10 * iVar12),pvVar8,iVar14,iVar12);
        pvVar8 = local_118;
        *(uint *)((long)local_118 + 0x494) = *(uint *)((long)local_118 + 0x494) | 4;
        FUN_00f0e670((long)local_118 + 0x410,&DAT_01bb698c,2);
        FUN_00f0e670((long)pvVar8 + 0x140,&DAT_01bb698c,2);
        FUN_00b87408(param_1 + 0x4358,&local_118);
        FUN_00f133a4(param_1 + 0x3998,local_118,1);
        iVar14 = iVar14 + 1;
      } while (iVar12 != iVar14);
    }
  }
  *(undefined1 *)(param_1 + 0xdd85) = 0;
  if (*(int *)(param_1 + 0xdbd4) != 0) {
    FUN_00e6a8a8(auStack_100,&DAT_01bb6d43);
    FUN_00e705c8(&local_118,auStack_100);
    FUN_00f0d75c(param_1 + 0xd98,&local_118);
    if (local_110 != (void *)0x0) {
      operator_delete__(local_110);
      local_118 = (void *)0x0;
      local_110 = (void *)0x0;
    }
    FUN_00e6a8a8(auStack_100,&DAT_01bb6d43,*(undefined4 *)(param_1 + 0xdbf8));
    FUN_00e705c8(&local_118,auStack_100);
    FUN_00f0d75c(param_1 + 0x3148,&local_118);
    if (local_110 != (void *)0x0) {
      operator_delete__(local_110);
      local_118 = (void *)0x0;
      local_110 = (void *)0x0;
    }
    if (*(int *)(param_1 + 0xdc08) == 0) {
      puVar9 = &DAT_01e277f2;
    }
    else {
      FUN_00e6a8a8(auStack_100,&DAT_01b97cee);
      puVar9 = auStack_100;
    }
    FUN_00e705c8(&local_118,puVar9);
    FUN_00f0d75c(param_1 + 0x3608,&local_118);
    if (local_110 != (void *)0x0) {
      operator_delete__(local_110);
      local_118 = (void *)0x0;
      local_110 = (void *)0x0;
    }
    *(undefined1 *)(param_1 + 0xdd85) = 1;
  }
  *(undefined1 *)(param_1 + 0xdd86) = 0;
  if (*(int *)(param_1 + 0xdbd0) == 0) {
    iVar12 = 0;
  }
  else {
    FUN_00e6a8a8(auStack_100,&DAT_01bb6d43);
    FUN_00e705c8(&local_118,auStack_100);
    FUN_00f0d75c(param_1 + 0xff8,&local_118);
    if (local_110 != (void *)0x0) {
      operator_delete__(local_110);
      local_118 = (void *)0x0;
      local_110 = (void *)0x0;
    }
    FUN_00e6a8a8(auStack_100,&DAT_01bb6d43,*(undefined4 *)(param_1 + 0xdbf4));
    FUN_00e705c8(&local_118,auStack_100);
    FUN_00f0d75c(param_1 + 0x3278,&local_118);
    if (local_110 != (void *)0x0) {
      operator_delete__(local_110);
      local_118 = (void *)0x0;
      local_110 = (void *)0x0;
    }
    if (*(int *)(param_1 + 0xdc04) == 0) {
      puVar9 = &DAT_01e277f2;
    }
    else {
      FUN_00e6a8a8(auStack_100,&DAT_01b97cee);
      puVar9 = auStack_100;
    }
    FUN_00e705c8(&local_118,puVar9);
    FUN_00f0d75c(param_1 + 0x3738,&local_118);
    if (local_110 != (void *)0x0) {
      operator_delete__(local_110);
      local_118 = (void *)0x0;
      local_110 = (void *)0x0;
    }
    *(undefined1 *)(param_1 + 0xdd86) = 1;
    iVar12 = *(int *)(param_1 + 0xdbd0);
  }
  FUN_00e6a8a8(auStack_100,&DAT_01bb6d43,
               iVar12 + *(int *)(param_1 + 0xdbc8) + *(int *)(param_1 + 0xdbd4) +
               *(int *)(param_1 + 0xdbd8));
  FUN_00e705c8(&local_118,auStack_100);
  FUN_00f0d75c(param_1 + 0x1258,&local_118);
  if (local_110 != (void *)0x0) {
    operator_delete__(local_110);
    local_118 = (void *)0x0;
    local_110 = (void *)0x0;
  }
  FUN_00e6a8a8(auStack_100,&DAT_01bb6d43,*(int *)(param_1 + 0xdbcc));
  FUN_00e705c8(&local_118,auStack_100);
  FUN_00f0d75c(param_1 + 0x1838,&local_118);
  if (local_110 != (void *)0x0) {
    operator_delete__(local_110);
    local_118 = (void *)0x0;
    local_110 = (void *)0x0;
  }
  uVar10 = (uint)(0 < *(int *)(param_1 + 0xdbcc));
  *(uint *)(param_1 + 0x18bc) =
       *(uint *)(param_1 + 0x18bc) & 0xfffffff8 | *(uint *)(param_1 + 0x18bc) & 3 | uVar10 << 2;
  *(uint *)(param_1 + 0x19ec) =
       *(uint *)(param_1 + 0x19ec) & 0xfffffff8 | *(uint *)(param_1 + 0x19ec) & 3 | uVar10 << 2;
  FUN_00e70510(&local_118);
  FUN_00e70e18(&local_118,&DAT_01bb6d43,*(int *)(param_1 + 0xdc10));
  FUN_00f0d75c(param_1 + 0x1bd0,&local_118);
  lVar7 = param_1 + 0x1d00;
  fVar15 = (float)FUN_00f0e700(param_1 + 0x1ae0);
  if ((*(float *)(param_1 + 0x1d40) != fVar15 * 0.5) || (*(float *)(param_1 + 0x1d44) != -16.0)) {
    *(float *)(param_1 + 0x1d40) = fVar15 * 0.5;
    *(undefined4 *)(param_1 + 0x1d44) = 0xc1800000;
    FUN_0091ada4(lVar7);
  }
  local_108 = 0;
  (**(code **)(*(long *)(param_1 + 0x1d00) + 0x28))(lVar7,&local_108);
  fVar15 = (float)FUN_00f0e700(param_1 + 800);
  uVar2 = *(undefined4 *)(param_1 + 0xdc28);
  fVar15 = fVar15 * 0.8 - *(float *)(param_1 + 0x1d40);
  if (*(int *)(param_1 + 0xdc14) < *(int *)(param_1 + 0xdc10)) {
    FUN_00b0a930(fVar15,0x42000000,lVar7,*(undefined4 *)(param_1 + 0xdc24),uVar2,
                 *(undefined4 *)(param_1 + 0xdc20),0);
  }
  else {
    FUN_00b0a930(fVar15,0x42000000,lVar7,*(undefined4 *)(param_1 + 0xdc24),uVar2,
                 *(undefined4 *)(param_1 + 0xdc18),0);
    FUN_00b0ac1c(0x40000000,*pfVar1 + 1.0,lVar7,
                 *(int *)(param_1 + 0xdc20) - *(int *)(param_1 + 0xdc18),
                 *(undefined4 *)(param_1 + 0xdc28));
  }
  if (local_110 != (void *)0x0) {
    operator_delete__(local_110);
    local_118 = (void *)0x0;
    local_110 = (void *)0x0;
  }
  if (*(long *)(lVar3 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

