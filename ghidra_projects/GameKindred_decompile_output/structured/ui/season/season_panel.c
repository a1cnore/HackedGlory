// ui/season/season_panel.c — 7 UI functions (season)
// Extracted by extract_ui.py from structured/functions/
#include "GameKindred.h"



/*
 * FUN_1001933ac
 * VA: 0x1001933ac | Source: functions/10019.c:2598
 * CE-gate: NO | Guest-gate: NO
 * Indicators: Vis masks: 6
 * Callees: FUN_1000153b4, FUN_1000f10e4, FUN_1000f13e0, FUN_1000f18d4, FUN_10015d3ec, FUN_100191a64, FUN_100191cf0, FUN_100192db8 (+10 more)
 * Callers: FUN_1002372c8
 */
void FUN_1001933ac(long param_1,long param_2)

{
  uint *puVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *pcVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  byte *pbVar15;
  void *pvVar16;
  byte *pbVar17;
  undefined1 auStack_1c8 [8];
  void *local_1c0;
  void *local_1b8;
  void *local_1b0;
  char local_1a1;
  undefined8 local_1a0;
  void *local_198;
  undefined1 auStack_188 [8];
  void *local_180;
  undefined1 auStack_178 [8];
  void *local_170;
  undefined1 auStack_78 [32];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_1004e3170(auStack_178,param_2 + 0x70);
  FUN_1006513c0(param_1 + 0x748,auStack_178);
  if (local_170 != (void *)0x0) {
    operator_delete__(local_170);
  }
  FUN_1004e3170(auStack_178,param_2 + 0xd0);
  FUN_1006513c0(param_1 + 0xf98,auStack_178);
  if (local_170 != (void *)0x0) {
    operator_delete__(local_170);
  }
  uVar13 = *(ulong *)(param_2 + 0xa8);
  if (-1 < (char)*(byte *)(param_2 + 0xb7)) {
    uVar13 = (ulong)*(byte *)(param_2 + 0xb7);
  }
  uVar8 = FUN_1004e0150("GUILD_OVERVIEW_LABEL_TYPE",0);
  if (uVar13 == 0) {
    uVar9 = FUN_1004e0150("GUILD_OVERVIEW_LABEL_UNSET",0);
  }
  else {
    uVar9 = FUN_1000f18d4(param_2 + 0xa0,0);
  }
  FUN_1006513c0(param_1 + 0x5d88,uVar8);
  FUN_1006513c0(param_1 + 0x5eb8,uVar9);
  FUN_100191a64(param_1 + 0x5c08);
  uVar8 = FUN_1004e0150("GUILD_OVERVIEW_LABEL_REQUIRED_SKILL_TIER",0);
  FUN_100191cf0(param_1 + 0x5fe8,uVar8,*(undefined4 *)(param_2 + 0x9c));
  FUN_1004d2698(auStack_78,"%d/%d");
  uVar8 = FUN_1004e0150("GUILD_OVERVIEW_LABEL_MEMBERS",0);
  FUN_1004e3120(auStack_178,auStack_78);
  FUN_1006513c0(param_1 + 0x6918,uVar8);
  FUN_1006513c0(param_1 + 0x6a48,auStack_178);
  FUN_100191a64(param_1 + 0x6798);
  if (local_170 != (void *)0x0) {
    operator_delete__(local_170);
  }
  uVar13 = *(ulong *)(param_2 + 0xc0);
  if (-1 < (char)*(byte *)(param_2 + 0xcf)) {
    uVar13 = (ulong)*(byte *)(param_2 + 0xcf);
  }
  uVar8 = FUN_1004e0150("GUILD_OVERVIEW_LABEL_LANGUAGE",0);
  if (uVar13 == 0) {
    uVar9 = FUN_1004e0150("GUILD_OVERVIEW_LABEL_UNSET",0);
    FUN_1006513c0(param_1 + 0x6cf8,uVar8);
    FUN_1006513c0(param_1 + 0x6e28,uVar9);
    FUN_100191a64(param_1 + 0x6b78);
  }
  else {
    uVar9 = FUN_1000f13e0(param_2 + 0xb8);
    FUN_1000f10e4(auStack_178,uVar9,0);
    FUN_1006513c0(param_1 + 0x6cf8,uVar8);
    FUN_1006513c0(param_1 + 0x6e28,auStack_178);
    FUN_100191a64(param_1 + 0x6b78);
    if (local_170 != (void *)0x0) {
      operator_delete__(local_170);
    }
  }
  thunk_FUN_1004e439c(auStack_188,&DAT_101d91650);
  if (*(int *)(param_2 + 0x1d4) == 0) {
    pcVar10 = "GUILD_OVERVIEW_LABEL_MEMBER_TYPE_OPEN";
LAB_100193640:
    uVar8 = FUN_1004e0150(pcVar10,0);
    FUN_1000153b4(auStack_188,uVar8);
  }
  else if (*(int *)(param_2 + 0x1d4) == 1) {
    pcVar10 = "GUILD_OVERVIEW_LABEL_MEMBER_TYPE_INVITE_ONLY";
    goto LAB_100193640;
  }
  uVar8 = FUN_1004e0150("GUILD_OVERVIEW_LABEL_MEMBERSHIP",0);
  FUN_1006513c0(param_1 + 0x71a0,uVar8);
  FUN_1006513c0(param_1 + 0x72d0,auStack_188);
  FUN_100191a64(param_1 + 0x7020);
  uVar8 = FUN_1004e0150("GUILD_OVERVIEW_LABEL_AVERAGE_SKILL_TIER",0);
  FUN_100191cf0(param_1 + 0x7400,uVar8,*(undefined4 *)(param_2 + 0x1bc));
  FUN_1004d2698(auStack_78,"%d");
  uVar8 = FUN_1004e0150("GUILD_OVERVIEW_LABEL_ACTIVITY",0);
  FUN_1004e3120(auStack_178,auStack_78);
  FUN_1006513c0(param_1 + 0x7d30,uVar8);
  FUN_1006513c0(param_1 + 0x7e60,auStack_178);
  FUN_100191a64(param_1 + 0x7bb0);
  if (local_170 != (void *)0x0) {
    operator_delete__(local_170);
  }
  puVar1 = (uint *)(param_1 + 0x9a9c);
  FUN_1004d32ec(*(undefined8 *)(param_2 + 0x1c8),auStack_178,0x100,"%Y-%m-%d");
  uVar8 = FUN_1004e0150("GUILD_OVERVIEW_LABEL_ESTABLISHED_DATE",0);
  FUN_1004e3120(&local_1b8,auStack_178);
  FUN_1006513c0(param_1 + 0x8110,uVar8);
  FUN_1006513c0(param_1 + 0x8240,&local_1b8);
  FUN_100191a64(param_1 + 0x7f90);
  if (local_1b0 != (void *)0x0) {
    operator_delete__(local_1b0);
  }
  lVar11 = FUN_10015d3ec();
  if (((int)*(uint *)(lVar11 + 0x5624) < 0) ||
     (*(int *)(*(long *)(lVar11 + 0x5268) + (ulong)*(uint *)(lVar11 + 0x5624) * 0x108 + 0x50) != 4))
  {
LAB_10019386c:
    uVar14 = 0;
    uVar12 = *puVar1;
  }
  else {
    lVar11 = FUN_10015d3ec();
    bVar5 = *(byte *)(param_2 + 0x197);
    uVar13 = (ulong)bVar5;
    bVar6 = *(byte *)(lVar11 + 0x548f);
    sVar2 = *(size_t *)(param_2 + 0x188);
    if (-1 < (char)bVar5) {
      sVar2 = uVar13;
    }
    sVar3 = *(size_t *)(lVar11 + 0x5480);
    if (-1 < (char)bVar6) {
      sVar3 = (ulong)bVar6;
    }
    if (sVar2 != sVar3) goto LAB_10019386c;
    pvVar16 = *(void **)(param_2 + 0x180);
    puVar4 = pvVar16;
    if (-1 < (char)bVar5) {
      puVar4 = (undefined8 *)(param_2 + 0x180);
    }
    pbVar17 = *(byte **)(lVar11 + 0x5478);
    if (-1 < (char)bVar6) {
      pbVar17 = (byte *)(lVar11 + 0x5478);
    }
    if ((char)bVar5 < '\0') {
      if (sVar2 == 0) goto LAB_100193b2c;
      iVar7 = _memcmp(puVar4,pbVar17,sVar2);
      uVar12 = *puVar1;
      if (iVar7 == 0) goto LAB_100193b30;
      uVar14 = 0;
    }
    else {
      if (sVar2 != 0) {
        if ((uint)*pbVar17 == ((uint)pvVar16 & 0xff)) {
          pbVar15 = (byte *)(param_2 + 0x181);
          do {
            uVar13 = uVar13 - 1;
            pbVar17 = pbVar17 + 1;
            if (uVar13 == 0) goto LAB_100193b2c;
            bVar5 = *pbVar15;
            pbVar15 = pbVar15 + 1;
          } while (bVar5 == *pbVar17);
        }
        goto LAB_10019386c;
      }
LAB_100193b2c:
      uVar12 = *puVar1;
LAB_100193b30:
      uVar14 = 4;
    }
  }
  *puVar1 = uVar14 | uVar12 & 0xfffffffb;
  *(uint *)(param_1 + 0x114c) = *(uint *)(param_1 + 0x114c) & 0xfffffffb | uVar14;
  *(uint *)(param_1 + 0x8fc) = *(uint *)(param_1 + 0x8fc) & 0xfffffffb | uVar14;
  uVar13 = *(ulong *)(param_2 + 0xf0);
  if (-1 < (char)*(byte *)(param_2 + 0xff)) {
    uVar13 = (ulong)*(byte *)(param_2 + 0xff);
  }
  if (uVar13 == 0) {
LAB_10019394c:
    uVar12 = *(uint *)(param_1 + 0x173c) & 0xfffffffb;
  }
  else {
    uVar13 = *(ulong *)(param_2 + 0x138);
    if (-1 < (char)*(byte *)(param_2 + 0x147)) {
      uVar13 = (ulong)*(byte *)(param_2 + 0x147);
    }
    if (uVar13 == 0) goto LAB_10019394c;
    FUN_1004e3170(auStack_1c8,param_2 + 0xe8);
    FUN_100193b3c(&local_1b8,param_2 + 0x130,auStack_1c8,1,1,0,0);
    FUN_1001a2020(param_1 + 0x16b8,&local_1b8);
    if (local_198 != (void *)0x0) {
      operator_delete__(local_198);
      local_1a0 = 0;
      local_198 = (void *)0x0;
    }
    if (local_1a1 < '\0') {
      operator_delete(local_1b8);
    }
    if (local_1c0 != (void *)0x0) {
      operator_delete__(local_1c0);
    }
    uVar12 = *(uint *)(param_1 + 0x173c) | 4;
  }
  *(uint *)(param_1 + 0x173c) = uVar12;
  puVar1 = (uint *)(param_1 + 0x44ec);
  uVar13 = *(ulong *)(param_2 + 0x108);
  if (-1 < (char)*(byte *)(param_2 + 0x117)) {
    uVar13 = (ulong)*(byte *)(param_2 + 0x117);
  }
  if (uVar13 == 0) {
LAB_100193a08:
    uVar12 = *(uint *)(param_1 + 0x2e14) & 0xfffffffb;
  }
  else {
    uVar13 = *(ulong *)(param_2 + 0x150);
    if (-1 < (char)*(byte *)(param_2 + 0x15f)) {
      uVar13 = (ulong)*(byte *)(param_2 + 0x15f);
    }
    if (uVar13 == 0) goto LAB_100193a08;
    FUN_1004e3170(auStack_1c8,param_2 + 0x100);
    FUN_100193b3c(&local_1b8,param_2 + 0x148,auStack_1c8,1,1,0,0);
    FUN_1001a2020(param_1 + 0x2d90,&local_1b8);
    if (local_198 != (void *)0x0) {
      operator_delete__(local_198);
      local_1a0 = 0;
      local_198 = (void *)0x0;
    }
    if (local_1a1 < '\0') {
      operator_delete(local_1b8);
    }
    if (local_1c0 != (void *)0x0) {
      operator_delete__(local_1c0);
    }
    uVar12 = *(uint *)(param_1 + 0x2e14) | 4;
  }
  *(uint *)(param_1 + 0x2e14) = uVar12;
  uVar13 = *(ulong *)(param_2 + 0x120);
  if (-1 < (char)*(byte *)(param_2 + 0x12f)) {
    uVar13 = (ulong)*(byte *)(param_2 + 0x12f);
  }
  if (uVar13 != 0) {
    uVar13 = *(ulong *)(param_2 + 0x168);
    if (-1 < (char)*(byte *)(param_2 + 0x177)) {
      uVar13 = (ulong)*(byte *)(param_2 + 0x177);
    }
    if (uVar13 != 0) {
      FUN_1004e3170(auStack_1c8,param_2 + 0x118);
      FUN_100193b3c(&local_1b8,param_2 + 0x160,auStack_1c8,1,1,0,0);
      FUN_1001a2020(param_1 + 0x4468,&local_1b8);
      if (local_198 != (void *)0x0) {
        operator_delete__(local_198);
        local_1a0 = 0;
        local_198 = (void *)0x0;
      }
      if (local_1a1 < '\0') {
        operator_delete(local_1b8);
      }
      if (local_1c0 != (void *)0x0) {
        operator_delete__(local_1c0);
      }
      uVar12 = *puVar1 | 4;
      goto LAB_100193ac8;
    }
  }
  uVar12 = *puVar1 & 0xfffffffb;
LAB_100193ac8:
  *puVar1 = uVar12;
  FUN_100192db8(param_1);
  if (local_180 != (void *)0x0) {
    operator_delete__(local_180);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 *
FUN_100193b3c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((char)*(byte *)((long)param_2 + 0x17) < '\0') {
    uVar2 = param_2[1];
    if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_1001941d8();
    }
    param_2 = (undefined8 *)*param_2;
  }
  else {
    uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  if (uVar2 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar2;
    puVar1 = param_1;
    if (uVar2 == 0) goto LAB_100193bdc;
  }
  else {
    uVar3 = uVar2 + 0x10 & 0xfffffffffffffff0;
    puVar1 = operator_new(uVar3);
    param_1[1] = uVar2;
    param_1[2] = uVar3 | 0x8000000000000000;
    *param_1 = puVar1;
  }
  _memcpy(puVar1,param_2,uVar2);
LAB_100193bdc:
  *(undefined1 *)((long)puVar1 + uVar2) = 0;
  thunk_FUN_1004e439c(param_1 + 3,param_3);
  *(undefined1 *)(param_1 + 5) = param_4;
  *(undefined1 *)((long)param_1 + 0x29) = param_5;
  *(undefined1 *)((long)param_1 + 0x2a) = param_6;
  *(undefined1 *)((long)param_1 + 0x2b) = param_7;
  return param_1;
}



/*
 * FUN_1002372c8
 * VA: 0x1002372c8 | Source: functions/10023.c:4997
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 2, Vis masks: 3
 * Callees: FUN_10001549c, FUN_100016648, FUN_1000e8b18, FUN_1000f1e20, FUN_1000f28d0, FUN_10015d3ec, FUN_1001933ac, FUN_100194b7c (+20 more)
 * Callers: FUN_10023c69c
 */
void FUN_1002372c8(long *param_1,long param_2)

{
  string *psVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  size_t sVar5;
  size_t sVar6;
  undefined8 ******ppppppuVar7;
  ulong uVar8;
  string *psVar9;
  string sVar10;
  byte bVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  char *pcVar17;
  undefined8 *puVar18;
  ulong uVar19;
  string *psVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *pbVar26;
  string *psVar27;
  ulong uVar28;
  byte bVar29;
  size_t sVar30;
  size_t sVar31;
  size_t sVar32;
  size_t sVar33;
  undefined1 auStack_c0 [8];
  void *local_b8;
  undefined1 auStack_b0 [8];
  void *local_a8;
  undefined1 auStack_a0 [8];
  void *local_98;
  void *local_90;
  void *local_88;
  char local_79;
  undefined8 *****local_78;
  void *local_70;
  char local_61;
  
  psVar1 = (string *)(param_2 + 0x180);
  bVar29 = *(byte *)(param_2 + 0x197);
  uVar19 = (ulong)bVar29;
  sVar33 = *(size_t *)(param_2 + 0x188);
  if (-1 < (char)bVar29) {
    sVar33 = uVar19;
  }
  sVar32 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar32 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar33 == sVar32) {
    psVar9 = *(string **)psVar1;
    if (-1 < (char)bVar29) {
      psVar9 = psVar1;
    }
    pbVar26 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar26 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar29 < '\0') {
      if ((sVar33 != 0) && (iVar14 = _memcmp(psVar9,pbVar26,sVar33), iVar14 != 0))
      goto LAB_100237398;
    }
    else if (sVar33 != 0) {
      if ((uint)*pbVar26 == ((uint)*(string **)psVar1 & 0xff)) {
        pbVar25 = (byte *)(param_2 + 0x181);
        do {
          uVar19 = uVar19 - 1;
          pbVar26 = pbVar26 + 1;
          if (uVar19 == 0) goto LAB_100237438;
          bVar29 = *pbVar25;
          pbVar25 = pbVar25 + 1;
        } while (bVar29 == *pbVar26);
      }
      goto LAB_100237398;
    }
LAB_100237438:
    bVar12 = false;
  }
  else {
LAB_100237398:
    lVar15 = FUN_10015d3ec();
    bVar29 = *(byte *)(param_2 + 0x197);
    uVar19 = (ulong)bVar29;
    bVar11 = *(byte *)(lVar15 + 0x548f);
    sVar33 = *(size_t *)(param_2 + 0x188);
    if (-1 < (char)bVar29) {
      sVar33 = uVar19;
    }
    sVar32 = *(size_t *)(lVar15 + 0x5480);
    if (-1 < (char)bVar11) {
      sVar32 = (ulong)bVar11;
    }
    if (sVar33 != sVar32) goto LAB_100237438;
    psVar9 = *(string **)psVar1;
    if (-1 < (char)bVar29) {
      psVar9 = psVar1;
    }
    pbVar26 = *(byte **)(lVar15 + 0x5478);
    if (-1 < (char)bVar11) {
      pbVar26 = (byte *)(lVar15 + 0x5478);
    }
    if ((char)bVar29 < '\0') {
      if (sVar33 == 0) goto LAB_100237b1c;
      iVar14 = _memcmp(psVar9,pbVar26,sVar33);
      bVar12 = iVar14 == 0;
    }
    else if (sVar33 == 0) {
LAB_100237b1c:
      bVar12 = true;
    }
    else {
      if ((uint)*pbVar26 != ((uint)*(string **)psVar1 & 0xff)) goto LAB_100237438;
      pbVar25 = (byte *)(param_2 + 0x181);
      do {
        uVar19 = uVar19 - 1;
        pbVar26 = pbVar26 + 1;
        bVar12 = uVar19 == 0;
        if (uVar19 == 0) break;
        bVar29 = *pbVar25;
        pbVar25 = pbVar25 + 1;
      } while (bVar29 == *pbVar26);
    }
  }
  psVar9 = (string *)(param_1 + 0x6a5e);
  lVar15 = FUN_10015d3ec();
  bVar29 = *(byte *)(param_2 + 0x197);
  uVar19 = (ulong)bVar29;
  bVar11 = *(byte *)(lVar15 + 0x548f);
  sVar33 = *(size_t *)(param_2 + 0x188);
  if (-1 < (char)bVar29) {
    sVar33 = uVar19;
  }
  sVar32 = *(size_t *)(lVar15 + 0x5480);
  if (-1 < (char)bVar11) {
    sVar32 = (ulong)bVar11;
  }
  if (sVar33 == sVar32) {
    psVar20 = *(string **)psVar1;
    if (-1 < (char)bVar29) {
      psVar20 = psVar1;
    }
    pbVar26 = *(byte **)(lVar15 + 0x5478);
    if (-1 < (char)bVar11) {
      pbVar26 = (byte *)(lVar15 + 0x5478);
    }
    if ((char)bVar29 < '\0') {
      if ((sVar33 != 0) && (iVar14 = _memcmp(psVar20,pbVar26,sVar33), iVar14 != 0))
      goto LAB_1002374e4;
    }
    else if (sVar33 != 0) {
      if ((uint)*pbVar26 == ((uint)*(string **)psVar1 & 0xff)) {
        pbVar25 = (byte *)(param_2 + 0x181);
        do {
          uVar19 = uVar19 - 1;
          pbVar26 = pbVar26 + 1;
          if (uVar19 == 0) goto LAB_10023753c;
          bVar29 = *pbVar25;
          pbVar25 = pbVar25 + 1;
        } while (bVar29 == *pbVar26);
      }
      goto LAB_1002374e4;
    }
LAB_10023753c:
    if ((char)param_1[0x300f] == '\0') {
      FUN_1001dd630(param_1 + 0x2ed4,param_2 + 0x98);
    }
  }
  else {
LAB_1002374e4:
    lVar15 = FUN_100331578();
    if (*(char *)(lVar15 + 0x20) != '\0') {
      FUN_1001aed88(param_1 + 0x961,param_2 + 0x198);
      FUN_10001549c(&local_78,"IDLE_CLOSED");
      FUN_1001aeb7c(0x3f333333,param_1 + 0x961,&local_78);
      if (local_61 < '\0') {
        operator_delete(local_78);
      }
    }
  }
  if (*(char *)(param_2 + 0x1d0) != '\0') {
    sVar30 = (size_t)*(byte *)((long)param_1 + 0x35307);
    sVar33 = param_1[0x6a5f];
    bVar29 = *(byte *)(param_2 + 0x197);
    sVar31 = (size_t)bVar29;
    sVar32 = *(size_t *)(param_2 + 0x188);
    uVar22 = (uint)*(byte *)((long)param_1 + 0x35307);
    goto LAB_100237588;
  }
  bVar29 = *(byte *)(param_2 + 0x197);
  sVar31 = (size_t)bVar29;
  sVar32 = *(size_t *)(param_2 + 0x188);
  sVar5 = sVar32;
  if (-1 < (char)bVar29) {
    sVar5 = sVar31;
  }
  sVar30 = (size_t)*(byte *)((long)param_1 + 0x35307);
  uVar22 = (uint)(char)*(byte *)((long)param_1 + 0x35307);
  sVar33 = param_1[0x6a5f];
  sVar6 = sVar33;
  if (-1 < (int)uVar22) {
    sVar6 = sVar30;
  }
  if (sVar5 == sVar6) {
    psVar20 = *(string **)psVar1;
    if (-1 < (char)bVar29) {
      psVar20 = psVar1;
    }
    psVar27 = *(string **)psVar9;
    if (-1 < (int)uVar22) {
      psVar27 = psVar9;
    }
    if ((char)bVar29 < '\0') {
      if (sVar5 != 0) {
        iVar14 = _memcmp(psVar20,psVar27,sVar5);
        bVar13 = iVar14 == 0;
        goto LAB_100237b30;
      }
    }
    else if (sVar5 != 0) {
      if ((uint)(byte)*psVar27 != ((uint)*(string **)psVar1 & 0xff)) goto LAB_10023769c;
      psVar20 = (string *)(param_2 + 0x181);
      uVar19 = sVar31;
      do {
        uVar19 = uVar19 - 1;
        psVar27 = psVar27 + 1;
        if (uVar19 == 0) break;
        sVar10 = *psVar20;
        psVar20 = psVar20 + 1;
      } while (sVar10 == *psVar27);
      bVar13 = uVar19 == 0;
LAB_100237b30:
      bVar13 = !bVar13;
      goto LAB_100237b34;
    }
  }
  else {
LAB_10023769c:
    bVar13 = true;
LAB_100237b34:
    if (!(bool)(bVar13 ^ 1U | bVar12)) {
      return;
    }
  }
LAB_100237588:
  if (-1 < (char)uVar22) {
    sVar33 = sVar30;
  }
  if (-1 < (char)bVar29) {
    sVar32 = sVar31;
  }
  if (sVar33 == sVar32) {
    psVar20 = *(string **)psVar9;
    if (-1 < (char)uVar22) {
      psVar20 = psVar9;
    }
    psVar27 = *(string **)psVar1;
    if (-1 < (char)bVar29) {
      psVar27 = psVar1;
    }
    if ((uVar22 >> 7 & 1) == 0) {
      if (sVar33 != 0) {
        if ((uint)(byte)*psVar27 == ((uint)*(string **)psVar9 & 0xff)) {
          psVar20 = (string *)((long)param_1 + 0x352f1);
          do {
            sVar30 = sVar30 - 1;
            psVar27 = psVar27 + 1;
            if (sVar30 == 0) goto LAB_1002376b4;
            sVar10 = *psVar20;
            psVar20 = psVar20 + 1;
          } while (sVar10 == *psVar27);
        }
        goto LAB_1002376b0;
      }
    }
    else if ((sVar33 != 0) && (iVar14 = _memcmp(psVar20,psVar27,sVar33), iVar14 != 0))
    goto LAB_1002376b0;
  }
  else {
LAB_1002376b0:
    *(undefined1 *)(param_1 + 0x6a67) = 0;
  }
LAB_1002376b4:
  std::string::operator=(psVar9,psVar1);
  bVar29 = *(byte *)((long)param_1 + 0x35307);
  uVar19 = (ulong)bVar29;
  sVar33 = param_1[0x6a5f];
  if (-1 < (char)bVar29) {
    sVar33 = uVar19;
  }
  sVar32 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar32 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar33 == sVar32) {
    psVar20 = *(string **)psVar9;
    if (-1 < (char)bVar29) {
      psVar20 = psVar9;
    }
    pbVar26 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar26 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar29 < '\0') {
      if (sVar33 == 0) {
        return;
      }
      iVar14 = _memcmp(psVar20,pbVar26,sVar33);
      if (iVar14 == 0) {
        return;
      }
    }
    else {
      if (sVar33 == 0) {
        return;
      }
      if ((uint)*pbVar26 == ((uint)*(string **)psVar9 & 0xff)) {
        pbVar25 = (byte *)((long)param_1 + 0x352f1);
        do {
          uVar19 = uVar19 - 1;
          pbVar26 = pbVar26 + 1;
          if (uVar19 == 0) {
            return;
          }
          bVar29 = *pbVar25;
          pbVar25 = pbVar25 + 1;
        } while (bVar29 == *pbVar26);
      }
    }
  }
  iVar14 = FUN_1004f1680(param_2);
  if (iVar14 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x6a61) = *(undefined4 *)(param_2 + 0x1d4);
  FUN_1004e3170(&local_78,param_2 + 0x40);
  FUN_1006513c0(param_1 + 0x299,&local_78);
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
  }
  FUN_10001549c(&local_90,"GUILD.CHESTS.");
  FUN_1000e8b18(&local_78,&local_90,param_2 + 0x40);
  ppppppuVar7 = (undefined8 ******)local_78;
  if (-1 < local_61) {
    ppppppuVar7 = &local_78;
  }
  FUN_100016648(param_1 + 0x6a62,ppppppuVar7,0);
  if (local_61 < '\0') {
    operator_delete(local_78);
  }
  if (local_79 < '\0') {
    operator_delete(local_90);
  }
  FUN_1004e3170(&local_78,param_2 + 0x58);
  FUN_100194b7c(param_1 + 0xfa,&local_78);
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
  }
  FUN_1004e313c(&local_78);
  FUN_1004e38ac(&local_78,"%d");
  FUN_1006513c0(param_1 + 0x4c8,&local_78);
  *(undefined4 *)((long)param_1 + 0x35334) = *(undefined4 *)(param_2 + 0x90);
  FUN_1001b5688(param_1 + 0x67d,*(undefined4 *)(param_2 + 0x1b0),*(undefined4 *)(param_2 + 0x1b8),
                *(undefined4 *)(param_2 + 0x1b4));
  FUN_1001933ac(param_1 + 0x1352,param_2);
  plVar2 = param_1 + 0x505;
  FUN_1001a8964(plVar2,"GUILD_BUFF_STAR_1");
  plVar3 = param_1 + 0x8fe;
  FUN_1006513c0(plVar3,&DAT_101d91650);
  if (*(int *)(param_2 + 0x1e8) != 0) {
    lVar15 = 0;
    uVar19 = 0;
    bVar12 = false;
    do {
      uVar16 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_BUFF_EXPIRES_LABEL",0);
      thunk_FUN_1004e439c(&local_90,uVar16);
      lVar21 = *(long *)(param_2 + 0x1f0);
      uVar4 = lVar21 + lVar15;
      bVar29 = *(byte *)(uVar4 + 0x17);
      uVar24 = (ulong)bVar29;
      uVar28 = *(ulong *)(uVar4 + 8);
      uVar8 = uVar28;
      if (-1 < (char)bVar29) {
        uVar8 = uVar24;
      }
      if (uVar8 == 9) {
        iVar14 = std::string::compare(uVar4,0,(char *)0xffffffffffffffff,0x1013e7309);
        if (iVar14 != 0) {
          lVar21 = *(long *)(param_2 + 0x1f0);
          bVar29 = *(byte *)(lVar21 + lVar15 + 0x17);
          uVar24 = (ulong)bVar29;
          uVar28 = *(ulong *)(lVar21 + lVar15 + 8);
          goto LAB_10023796c;
        }
        FUN_1001a8964(plVar2,"GUILD_BUFF_STAR_3");
        FUN_1000f1e20(auStack_a0,&local_90,
                      (long)*(int *)(*(long *)(param_2 + 0x1f0) + lVar15 + 0x1c),1);
        FUN_1006513c0(plVar3,auStack_a0);
        if (local_98 != (void *)0x0) {
          operator_delete__(local_98);
        }
        bVar12 = true;
      }
      else {
LAB_10023796c:
        if (-1 < (char)bVar29) {
          uVar28 = uVar24;
        }
        if ((uVar28 == 9) &&
           (iVar14 = std::string::compare(lVar21 + lVar15,0,(char *)0xffffffffffffffff,0x1013e7325),
           iVar14 == 0 && !bVar12)) {
          FUN_1001a8964(plVar2,"GUILD_BUFF_STAR_2");
          FUN_1000f1e20(auStack_a0,&local_90,
                        (long)*(int *)(*(long *)(param_2 + 0x1f0) + lVar15 + 0x1c),1);
          FUN_1006513c0(plVar3,auStack_a0);
          if (local_98 != (void *)0x0) {
            operator_delete__(local_98);
          }
          bVar12 = false;
        }
      }
      if (local_88 != (void *)0x0) {
        operator_delete__(local_88);
      }
      uVar19 = uVar19 + 1;
      lVar15 = lVar15 + 0x20;
    } while (uVar19 < *(uint *)(param_2 + 0x1e8));
  }
  uVar16 = FUN_100655b6c(param_1 + 0x918);
  iVar14 = FUN_1004e36c0(uVar16,&DAT_101d91650);
  uVar22 = 4;
  if (iVar14 == 0) {
    uVar22 = 0;
  }
  *(uint *)((long)param_1 + 0x4784) = *(uint *)((long)param_1 + 0x4784) & 0xfffffffb | uVar22;
  uVar22 = *(uint *)(param_2 + 0x94);
  if (uVar22 != *(uint *)(param_1 + 0x6a66)) {
    if (9 < uVar22) {
      uVar22 = 10;
    }
    *(uint *)(param_1 + 0x6a66) = uVar22;
    if ((char)param_1[0x6a67] == '\0') {
      FUN_10023523c(param_1);
      uVar22 = *(uint *)(param_1 + 0x6a66);
    }
  }
  switch(uVar22) {
  case 1:
    pcVar17 = "GUILD_OVERVIEW_TIER_1_LABEL";
    break;
  case 2:
    pcVar17 = "GUILD_OVERVIEW_TIER_2_LABEL";
    break;
  case 3:
    pcVar17 = "GUILD_OVERVIEW_TIER_3_LABEL";
    break;
  case 4:
    pcVar17 = "GUILD_OVERVIEW_TIER_4_LABEL";
    break;
  case 5:
    pcVar17 = "GUILD_OVERVIEW_TIER_5_LABEL";
    break;
  case 6:
    pcVar17 = "GUILD_OVERVIEW_TIER_6_LABEL";
    break;
  case 7:
    pcVar17 = "GUILD_OVERVIEW_TIER_7_LABEL";
    break;
  case 8:
    pcVar17 = "GUILD_OVERVIEW_TIER_8_LABEL";
    break;
  case 9:
    pcVar17 = "GUILD_OVERVIEW_TIER_9_LABEL";
    break;
  case 10:
    pcVar17 = "GUILD_OVERVIEW_TIER_10_LABEL";
    break;
  default:
    puVar18 = &DAT_101d91650;
    goto LAB_100237c1c;
  }
  puVar18 = (undefined8 *)FUN_1004e0150(pcVar17,0);
LAB_100237c1c:
  FUN_1006513c0(param_1 + 0x657,puVar18);
  FUN_1000f28d0(&local_90,*(undefined4 *)(param_2 + 0x98),0);
  FUN_1000f28d0(auStack_a0,*(int *)(param_2 + 0x98) + 1,0);
  uVar16 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_PRIMETIME_VALUE",0);
  thunk_FUN_1004e439c(auStack_b0,uVar16);
  FUN_1004e3120(auStack_c0,"[START_HOUR]");
  FUN_1004e3bc4(auStack_b0,0,auStack_c0,&local_90);
  if (local_b8 != (void *)0x0) {
    operator_delete__(local_b8);
  }
  FUN_1004e3120(auStack_c0,"[END_HOUR]");
  FUN_1004e3bc4(auStack_b0,0,auStack_c0,auStack_a0);
  if (local_b8 != (void *)0x0) {
    operator_delete__(local_b8);
  }
  FUN_1006513c0(param_1 + 0x132c,auStack_b0);
  FUN_10023705c(param_1);
  lVar15 = FUN_10015d3ec();
  if ((-1 < (int)*(uint *)(lVar15 + 0x5624)) &&
     (*(int *)(*(long *)(lVar15 + 0x5268) + (ulong)*(uint *)(lVar15 + 0x5624) * 0x108 + 0x50) == 4))
  {
    lVar15 = FUN_10015d3ec();
    bVar29 = *(byte *)(param_2 + 0x197);
    uVar19 = (ulong)bVar29;
    bVar11 = *(byte *)(lVar15 + 0x548f);
    sVar33 = *(size_t *)(param_2 + 0x188);
    if (-1 < (char)bVar29) {
      sVar33 = uVar19;
    }
    sVar32 = *(size_t *)(lVar15 + 0x5480);
    if (-1 < (char)bVar11) {
      sVar32 = (ulong)bVar11;
    }
    if (sVar33 == sVar32) {
      psVar9 = *(string **)psVar1;
      if (-1 < (char)bVar29) {
        psVar9 = psVar1;
      }
      pbVar26 = *(byte **)(lVar15 + 0x5478);
      if (-1 < (char)bVar11) {
        pbVar26 = (byte *)(lVar15 + 0x5478);
      }
      if ((char)bVar29 < '\0') {
        if (sVar33 == 0) goto LAB_100237e38;
        iVar14 = _memcmp(psVar9,pbVar26,sVar33);
        uVar22 = *(uint *)((long)param_1 + 0x167c);
        if (iVar14 != 0) {
          uVar23 = 0;
          goto LAB_100237d9c;
        }
      }
      else {
        if (sVar33 != 0) {
          if ((uint)*pbVar26 == ((uint)*(string **)psVar1 & 0xff)) {
            pbVar25 = (byte *)(param_2 + 0x181);
            do {
              uVar19 = uVar19 - 1;
              pbVar26 = pbVar26 + 1;
              if (uVar19 == 0) goto LAB_100237e38;
              bVar29 = *pbVar25;
              pbVar25 = pbVar25 + 1;
            } while (bVar29 == *pbVar26);
          }
          goto LAB_100237d94;
        }
LAB_100237e38:
        uVar22 = *(uint *)((long)param_1 + 0x167c);
      }
      uVar23 = 4;
      goto LAB_100237d9c;
    }
  }
LAB_100237d94:
  uVar23 = 0;
  uVar22 = *(uint *)((long)param_1 + 0x167c);
LAB_100237d9c:
  *(uint *)((long)param_1 + 0x167c) = uVar23 | uVar22 & 0xfffffffb;
  *(uint *)((long)param_1 + 0x1c6c) = *(uint *)((long)param_1 + 0x1c6c) & 0xfffffffb | uVar23;
  FUN_100236f6c(param_1);
  (**(code **)(*param_1 + 0x150))(param_1);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
  }
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
  }
  return;
}



/*
 * FUN_10023bd9c
 * season/trophy panel handler
 * VA: 0x10023bd9c | Source: functions/10023.c:8888
 * Fptr: __DATA+0x1477d38
 * Dylib: Layer 8
 * Notes: Calls setTabVisible, registers season trophy tooltips, handles guild/team trophy display.
 * CE-gate: NO | Guest-gate: NO
 * Callees: FUN_10001549c, FUN_10002f320, FUN_100030e74, FUN_10003330c, FUN_10003c048, FUN_10003c1ec, FUN_100130330, FUN_10013033c (+14 more)
 * Callers: FUN_10021aa40, FUN_10021ab1c, FUN_100281140, FUN_10028279c
 */
void FUN_10023bd9c(long *param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  void *local_128;
  void *local_120;
  undefined7 local_118;
  char cStack_111;
  char local_101;
  undefined4 local_100;
  undefined8 local_fc;
  undefined1 auStack_f0 [8];
  void *local_e8;
  undefined **local_e0;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined8 local_90;
  void *local_88;
  void *local_80 [2];
  char local_69;
  undefined8 local_50;
  undefined4 local_38;
  
  FUN_1001e6c4c();
  FUN_100143bec(FUN_10023c048,FUN_10023c04c);
  FUN_100237f94(param_1 + 0x7d3,(char)param_1[0xc8c7]);
  plVar1 = param_1 + 0x679;
  uVar3 = FUN_1001c94f4(plVar1);
  (**(code **)(*(long *)param_1[(uVar3 & 0xffffffff) + 0x676] + 0x140))
            ((long *)param_1[(uVar3 & 0xffffffff) + 0x676],param_2);
  if ((int)param_2 == 0) {
    if ((*(byte *)((long)param_1 + 0x5ca1c) >> 2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010023c044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x188))(param_1,param_1 + 0xb933,param_1 + 0x589,0,1);
      return;
    }
  }
  else {
    FUN_10023c050();
    FUN_10023c094(param_1);
    if (param_1[0xc8bc] == 0) {
      uVar3 = FUN_1001c94f4(plVar1);
      if (param_1[(uVar3 & 0xffffffff) + 0x676] != 0) {
        uVar3 = FUN_1001c94f4(plVar1);
        param_1[0xc8bc] = param_1[(uVar3 & 0xffffffff) + 0x676];
      }
    }
    FUN_10023c368(param_1);
    if ((((char)param_1[0xc8c7] != '\0') && (iVar2 = FUN_100130330(), iVar2 != 0)) &&
       (uVar3 = FUN_10013033c("seasonGuildTrophy"), (uVar3 & 1) == 0)) {
      thunk_FUN_1001cd434(&local_e0);
      uVar4 = FUN_1004e0150("MAIN_SEASON_TROPHY_GUILD_TOOLTIP",0);
      thunk_FUN_1004e439c(auStack_f0,uVar4);
      thunk_FUN_1004e439c(&local_128,auStack_f0);
      FUN_10003330c(&local_118,&DAT_101d91198);
      local_100 = 1;
      local_fc = 0x41a00000;
      FUN_10003c048(auStack_d8,&local_128);
      if (local_101 < '\0') {
        operator_delete((void *)CONCAT17(cStack_111,local_118));
      }
      if (local_120 != (void *)0x0) {
        operator_delete__(local_120);
      }
      local_b0 = FUN_1001c94fc(plVar1,2);
      local_38 = 1;
      local_50 = 0x441600003f000000;
      FUN_10001549c(&local_128,"seasonGuildTrophy");
      std::string::operator=((string *)local_80,(string *)&local_128);
      if (cStack_111 < '\0') {
        operator_delete(local_128);
      }
      uVar4 = FUN_10002f320();
      FUN_10001549c(&local_128,"seasonTrophy");
      FUN_100030e74(uVar4,&local_128,&local_e0);
      if (cStack_111 < '\0') {
        operator_delete(local_128);
      }
      if (local_e8 != (void *)0x0) {
        operator_delete__(local_e8);
      }
      local_e0 = &PTR_FUN_1014666e0;
      if (local_69 < '\0') {
        operator_delete(local_80[0]);
      }
      if (local_88 != (void *)0x0) {
        operator_delete__(local_88);
        local_90 = 0;
        local_88 = (void *)0x0;
      }
      FUN_10003c1ec(auStack_d8,1);
    }
  }
  return;
}



/*
 * FUN_10023c69c
 * VA: 0x10023c69c | Source: functions/10023.c:9284
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 6
 * Callees: FUN_10010b098, FUN_10010b1a8, FUN_10015a3d8, FUN_10015d3ec, FUN_10015d3f8, FUN_1001c88a4, FUN_1001c9348, FUN_10022f998 (+7 more)
 * Callers: FUN_10021ab74, FUN_10021abbc, FUN_1002678c4, FUN_10028279c
 */
void FUN_10023c69c(long param_1,long param_2)

{
  string *psVar1;
  string *psVar2;
  size_t sVar3;
  size_t sVar4;
  string sVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  string *psVar12;
  byte *pbVar13;
  byte *pbVar14;
  string *psVar15;
  long lVar16;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  
  psVar1 = (string *)(param_2 + 0x180);
  bVar6 = *(byte *)(param_2 + 0x197);
  uVar11 = (ulong)bVar6;
  sVar3 = *(size_t *)(param_2 + 0x188);
  if (-1 < (char)bVar6) {
    sVar3 = uVar11;
  }
  sVar4 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar4 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar3 == sVar4) {
    psVar2 = *(string **)psVar1;
    if (-1 < (char)bVar6) {
      psVar2 = psVar1;
    }
    pbVar14 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar14 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if ((sVar3 != 0) && (iVar9 = _memcmp(psVar2,pbVar14,sVar3), iVar9 != 0)) goto LAB_10023c75c;
    }
    else if (sVar3 != 0) {
      if ((uint)*pbVar14 == ((uint)*(string **)psVar1 & 0xff)) {
        pbVar13 = (byte *)(param_2 + 0x181);
        do {
          uVar11 = uVar11 - 1;
          pbVar14 = pbVar14 + 1;
          if (uVar11 == 0) goto LAB_10023c7a4;
          bVar6 = *pbVar13;
          pbVar13 = pbVar13 + 1;
        } while (bVar6 == *pbVar14);
      }
      goto LAB_10023c75c;
    }
  }
  else {
LAB_10023c75c:
    FUN_1002372c8(param_1 + 0x3e98,param_2,*(byte *)(param_1 + 0x2c2c) >> 1 & 1);
    FUN_10022f998(param_1 + 0x391d8,param_2);
    FUN_100238d00(param_1 + 0x497a8,param_2);
  }
LAB_10023c7a4:
  if (*(char *)(param_2 + 0x1d0) == '\0') {
    return;
  }
  psVar2 = (string *)(param_1 + 0x645e8);
  bVar6 = *(byte *)(param_1 + 0x645ff);
  uVar11 = (ulong)bVar6;
  sVar3 = *(size_t *)(param_1 + 0x645f0);
  if (-1 < (char)bVar6) {
    sVar3 = uVar11;
  }
  bVar7 = *(byte *)(param_2 + 0x197);
  sVar4 = *(size_t *)(param_2 + 0x188);
  if (-1 < (char)bVar7) {
    sVar4 = (ulong)bVar7;
  }
  if (sVar3 == sVar4) {
    psVar12 = *(string **)psVar2;
    if (-1 < (char)bVar6) {
      psVar12 = psVar2;
    }
    psVar15 = *(string **)psVar1;
    if (-1 < (char)bVar7) {
      psVar15 = psVar1;
    }
    if ((char)bVar6 < '\0') {
      if ((sVar3 != 0) && (iVar9 = _memcmp(psVar12,psVar15,sVar3), iVar9 != 0)) goto LAB_10023c854;
    }
    else if (sVar3 != 0) {
      if ((uint)(byte)*psVar15 == ((uint)*(string **)psVar2 & 0xff)) {
        psVar12 = (string *)(param_1 + 0x645e9);
        do {
          uVar11 = uVar11 - 1;
          psVar15 = psVar15 + 1;
          if (uVar11 == 0) goto LAB_10023c874;
          sVar5 = *psVar12;
          psVar12 = psVar12 + 1;
        } while (sVar5 == *psVar15);
      }
      goto LAB_10023c854;
    }
  }
  else {
LAB_10023c854:
    std::string::operator=(psVar2,psVar1);
    FUN_1001c9348(param_1 + 0x33c8,0,1);
  }
LAB_10023c874:
  FUN_10015a3d8(param_1 + 0x645d0,0);
  if (*(int *)(param_2 + 0x208) != 0) {
    lVar16 = 0;
    uVar11 = 0;
    do {
      FUN_10023ca94(param_1 + 0x645d0,*(long *)(param_2 + 0x210) + lVar16);
      uVar11 = uVar11 + 1;
      lVar16 = lVar16 + 0x50;
    } while (uVar11 < *(uint *)(param_2 + 0x208));
  }
  *(undefined1 *)(param_1 + 0x64639) = 1;
  uVar11 = FUN_10015d3f8();
  if ((uVar11 & 1) != 0) {
    lVar16 = FUN_10015d3ec();
    bVar6 = *(byte *)(param_1 + 0x645ff);
    uVar11 = (ulong)bVar6;
    bVar7 = *(byte *)(lVar16 + 0x548f);
    sVar3 = *(size_t *)(param_1 + 0x645f0);
    if (-1 < (char)bVar6) {
      sVar3 = uVar11;
    }
    sVar4 = *(size_t *)(lVar16 + 0x5480);
    if (-1 < (char)bVar7) {
      sVar4 = (ulong)bVar7;
    }
    if (sVar3 == sVar4) {
      psVar1 = *(string **)psVar2;
      if (-1 < (char)bVar6) {
        psVar1 = psVar2;
      }
      pbVar14 = *(byte **)(lVar16 + 0x5478);
      if (-1 < (char)bVar7) {
        pbVar14 = (byte *)(lVar16 + 0x5478);
      }
      if ((char)bVar6 < '\0') {
        if (sVar3 != 0) {
          iVar9 = _memcmp(psVar1,pbVar14,sVar3);
          bVar8 = iVar9 == 0;
          goto LAB_10023c97c;
        }
      }
      else if (sVar3 != 0) {
        if ((uint)*pbVar14 == ((uint)*(string **)psVar2 & 0xff)) {
          pbVar13 = (byte *)(param_1 + 0x645e9);
          do {
            uVar11 = uVar11 - 1;
            pbVar14 = pbVar14 + 1;
            bVar8 = uVar11 == 0;
            if (uVar11 == 0) break;
            bVar6 = *pbVar13;
            pbVar13 = pbVar13 + 1;
          } while (bVar6 == *pbVar14);
          goto LAB_10023c97c;
        }
        goto LAB_10023c978;
      }
      bVar8 = true;
      goto LAB_10023c97c;
    }
  }
LAB_10023c978:
  bVar8 = false;
LAB_10023c97c:
  if ((bool)*(char *)(param_1 + 0x64638) != bVar8) {
    *(bool *)(param_1 + 0x64638) = bVar8;
    FUN_100237f94(param_1 + 0x3e98);
    local_50 = 0;
    uStack_48 = 0;
    uVar10 = FUN_1004e0150("MENU_PROFILE_TAB_OVERVIEW",0);
    FUN_10010b098(&local_50,uVar10);
    uVar10 = FUN_1004e0150("MENU_GUILD_TAB_MEMBERS",0);
    FUN_10010b098(&local_50,uVar10);
    uVar10 = FUN_1004e0150("MENU_GUILD_TAB_TROPHIES",0);
    FUN_10010b098(&local_50,uVar10);
    FUN_1001c88a4(0x42800000,0x43fa0000,0x41a00000,0x3f800000,0x3f800000,param_1 + 0x33c8,&local_50)
    ;
    if (*(char *)(param_1 + 0x64638) == '\0') {
      local_54 = 0xff5262cc;
    }
    else {
      local_54 = 0xffffba8c;
    }
    FUN_100652dd4(param_1 + 0x2cd0,&local_54,2);
    FUN_10023c464(param_1);
    FUN_10010b1a8(&local_50,1);
  }
  return;
}



/*
 * FUN_10023df24
 * season display update
 * VA: 0x10023df24 | Source: functions/10023.c:10648
 * Fptr: __DATA+0x1477d48
 * Dylib: Layer 8
 * CE-gate: NO | Guest-gate: NO
 * Callees: FUN_1001c94f4, FUN_1001e6da8, FUN_10023c368
 * Callers: FUN_10021aa40, FUN_10021ab1c, FUN_1002812c0
 */
void FUN_10023df24(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  
  FUN_1001e6da8();
  uVar1 = FUN_1001c94f4(param_1 + 0x33c8);
  plVar2 = *(long **)(param_1 + (uVar1 & 0xffffffff) * 8 + 0x33b0);
  (**(code **)(*plVar2 + 0x140))(plVar2,param_2);
  FUN_10023c368(param_1);
  return;
}



/*
 * FUN_10028279c
 * VA: 0x10028279c | Source: functions/10028.c:1625
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 4, Vis masks: 3
 * Callees: FUN_10015d3ec, FUN_10015d3f8, FUN_10023bd9c, FUN_10023c69c, FUN_100282aa0, FUN_1004e0150, FUN_1006513c0
 * Callers: FUN_10021f998, FUN_100267270, FUN_100283144, FUN_100283be4, FUN_100283d70
 */
void FUN_10028279c(long *param_1,long param_2)

{
  byte *pbVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  char *pcVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  void *pvVar16;
  
  pbVar1 = (byte *)((long)param_1 + 0x799bc);
  bVar6 = *(byte *)(param_2 + 0x57);
  uVar12 = (ulong)bVar6;
  sVar2 = *(size_t *)(param_2 + 0x48);
  if (-1 < (char)bVar6) {
    sVar2 = uVar12;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    pvVar16 = *(void **)(param_2 + 0x40);
    puVar4 = pvVar16;
    if (-1 < (char)bVar6) {
      puVar4 = (undefined8 *)(param_2 + 0x40);
    }
    pbVar15 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar15 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if ((sVar2 == 0) || (iVar9 = _memcmp(puVar4,pbVar15,sVar2), iVar9 == 0)) goto LAB_10028296c;
    }
    else {
      if (sVar2 == 0) {
LAB_10028296c:
        *pbVar1 = 0;
        FUN_100282aa0(param_1,0);
        goto LAB_10028297c;
      }
      if ((uint)*pbVar15 == ((uint)pvVar16 & 0xff)) {
        pbVar14 = (byte *)(param_2 + 0x41);
        do {
          uVar12 = uVar12 - 1;
          pbVar15 = pbVar15 + 1;
          if (uVar12 == 0) goto LAB_10028296c;
          bVar6 = *pbVar14;
          pbVar14 = pbVar14 + 1;
        } while (bVar6 == *pbVar15);
      }
    }
  }
  iVar9 = FUN_10015d3f8();
  if (iVar9 == 0) {
LAB_10028292c:
    bVar8 = false;
  }
  else {
    lVar10 = FUN_10015d3ec();
    bVar6 = *(byte *)(lVar10 + 0x548f);
    uVar12 = (ulong)bVar6;
    sVar2 = *(size_t *)(lVar10 + 0x5480);
    if (-1 < (char)bVar6) {
      sVar2 = uVar12;
    }
    bVar7 = *(byte *)(param_2 + 0x197);
    sVar3 = *(size_t *)(param_2 + 0x188);
    if (-1 < (char)bVar7) {
      sVar3 = (ulong)bVar7;
    }
    if (sVar2 != sVar3) goto LAB_10028292c;
    pvVar16 = *(void **)(lVar10 + 0x5478);
    puVar4 = pvVar16;
    if (-1 < (char)bVar6) {
      puVar4 = (undefined8 *)(lVar10 + 0x5478);
    }
    pbVar15 = *(byte **)(param_2 + 0x180);
    if (-1 < (char)bVar7) {
      pbVar15 = (byte *)(param_2 + 0x180);
    }
    if ((char)bVar6 < '\0') {
      if (sVar2 == 0) goto LAB_100282a98;
      iVar9 = _memcmp(puVar4,pbVar15,sVar2);
      bVar8 = iVar9 == 0;
    }
    else if (sVar2 == 0) {
LAB_100282a98:
      bVar8 = true;
    }
    else {
      if ((uint)*pbVar15 != ((uint)pvVar16 & 0xff)) goto LAB_10028292c;
      pbVar14 = (byte *)(lVar10 + 0x5479);
      do {
        uVar12 = uVar12 - 1;
        pbVar15 = pbVar15 + 1;
        bVar8 = uVar12 == 0;
        if (uVar12 == 0) break;
        bVar6 = *pbVar14;
        pbVar14 = pbVar14 + 1;
      } while (bVar6 == *pbVar15);
    }
  }
  *pbVar1 = bVar8;
  if ((*(uint *)((long)param_1 + 0x404) >> 2 & 1) == 0) {
    *(uint *)((long)param_1 + 0x404) = *(uint *)((long)param_1 + 0x404) | 4;
    FUN_10023bd9c(param_1 + 0x70,1);
  }
  *(uint *)((long)param_1 + 0x68bf4) = *(uint *)((long)param_1 + 0x68bf4) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x64dec) = *(uint *)((long)param_1 + 0x64dec) & 0xfffffffb;
LAB_10028297c:
  pcVar5 = "MENU_PROFILE_GUILD_CREATE_TEAM_HEADER";
  if (*pbVar1 != 0) {
    pcVar5 = "MENU_PROFILE_GUILD_RENAME_TEAM_HEADER";
  }
  uVar11 = FUN_1004e0150(pcVar5,0);
  FUN_1006513c0(param_1 + 0xd273,uVar11);
  pcVar5 = "MENU_PROFILE_GUILD_CREATE_NAME_FIELD_BLURB";
  if (*pbVar1 != 0) {
    pcVar5 = "MENU_PROFILE_GUILD_RENAME_FIELD_BLURB";
  }
  uVar11 = FUN_1004e0150(pcVar5,0);
  FUN_1006513c0(param_1 + 0xd30c,uVar11);
  *(uint *)((long)param_1 + 0x74dd4) =
       *(uint *)((long)param_1 + 0x74dd4) & 0xfffffffb | (uint)*pbVar1 << 2;
  uVar13 = (uint)(*pbVar1 == 0);
  *(uint *)((long)param_1 + 0x7638c) =
       *(uint *)((long)param_1 + 0x7638c) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x7638c) & 3 | uVar13 << 2;
  *(uint *)((long)param_1 + 0x77c1c) =
       *(uint *)((long)param_1 + 0x77c1c) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x77c1c) & 3 | uVar13 << 2;
  FUN_10023c69c(param_1 + 0x70,param_2);
  (**(code **)(*param_1 + 0x150))(param_1);
  uVar13 = *(uint *)((long)param_1 + 0x84);
  if ((uVar13 >> 2 & 1) == 0) {
    (**(code **)(*param_1 + 0x140))(param_1,1);
    uVar13 = *(uint *)((long)param_1 + 0x84);
  }
  *(uint *)((long)param_1 + 0x84) = uVar13 | 4;
  return;
}



/*
 * FUN_100282aa0
 * VA: 0x100282aa0 | Source: functions/10028.c:1781
 * CE-gate: NO | Guest-gate: NO
 * Indicators: Vis masks: 3
 * Callees: FUN_100280478, FUN_100283ea0, FUN_100284028
 * Callers: FUN_10028279c, FUN_100284428, thunk_FUN_100284428
 */
void FUN_100282aa0(long param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x3dcccccd;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  FUN_100283ea0(uVar1);
  *(char *)(param_1 + 0x799bd) = (char)param_2;
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x799bc) == '\0') {
      FUN_100280478(0x3dcccccd,param_1,1,1,1);
      return;
    }
    *(uint *)(param_1 + 0x404) = *(uint *)(param_1 + 0x404) | 4;
    *(uint *)(param_1 + 0x68bf4) = *(uint *)(param_1 + 0x68bf4) & 0xfffffffb;
    *(uint *)(param_1 + 0x64dec) = *(uint *)(param_1 + 0x64dec) & 0xfffffffb;
  }
  else {
    FUN_100284028(param_1);
    if (*(char *)(param_1 + 0x799bc) != '\0') {
      *(uint *)(param_1 + 0x404) = *(uint *)(param_1 + 0x404) & 0xfffffffb;
    }
  }
  return;
}
