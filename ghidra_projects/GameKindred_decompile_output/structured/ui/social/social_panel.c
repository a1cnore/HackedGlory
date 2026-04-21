// ui/social/social_panel.c — 46 UI functions (social)
// Extracted by extract_ui.py from structured/functions/
#include "GameKindred.h"



/*
 * FUN_1000f18d4
 * VA: 0x1000f18d4 | Source: functions/1000f.c:748
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 10
 * Callees: FUN_1004e0150
 * Callers: FUN_10017c180, FUN_1001933ac, FUN_1001dce94, FUN_10029e270
 */
undefined8 * FUN_1000f18d4(byte *param_1,int param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  ulong uVar4;
  int iVar5;
  undefined8 *puVar6;
  char *pcVar7;
  byte *pbVar8;
  char *pcVar9;
  byte *pbVar10;
  ulong uVar11;
  
  bVar3 = param_1[0x17];
  uVar11 = (ulong)bVar3;
  sVar1 = *(size_t *)(param_1 + 8);
  if (-1 < (char)bVar3) {
    sVar1 = uVar11;
  }
  sVar2 = DAT_101d917a0;
  if (-1 < (char)DAT_101d917af) {
    sVar2 = (ulong)DAT_101d917af;
  }
  if (sVar1 == sVar2) {
    pbVar8 = *(byte **)param_1;
    if (-1 < (char)bVar3) {
      pbVar8 = param_1;
    }
    pbVar10 = DAT_101d91798;
    if (-1 < (char)DAT_101d917af) {
      pbVar10 = (byte *)&DAT_101d91798;
    }
    if ((char)bVar3 < '\0') {
      if ((sVar1 == 0) || (iVar5 = _memcmp(pbVar8,pbVar10,sVar1), iVar5 == 0)) goto LAB_1000f1a08;
    }
    else {
      if (sVar1 == 0) {
LAB_1000f1a08:
        pcVar7 = "MENU_GUILD_TYPE_LABEL_CASUAL";
        pcVar9 = "MENU_GUILD_TYPE_LABEL_CAPS_CASUAL";
        goto LAB_1000f1c34;
      }
      pbVar8 = param_1;
      uVar4 = uVar11;
      if ((uint)*pbVar10 == ((uint)*(byte **)param_1 & 0xff)) {
        do {
          pbVar10 = pbVar10 + 1;
          pbVar8 = pbVar8 + 1;
          if (uVar4 - 1 == 0) goto LAB_1000f1a08;
          uVar4 = uVar4 - 1;
        } while (*pbVar8 == *pbVar10);
      }
    }
  }
  sVar2 = DAT_101d917b8;
  if (-1 < (char)DAT_101d917c7) {
    sVar2 = (ulong)DAT_101d917c7;
  }
  if (sVar1 == sVar2) {
    pbVar8 = *(byte **)param_1;
    if (-1 < (char)bVar3) {
      pbVar8 = param_1;
    }
    pbVar10 = DAT_101d917b0;
    if (-1 < (char)DAT_101d917c7) {
      pbVar10 = (byte *)&DAT_101d917b0;
    }
    if ((char)bVar3 < '\0') {
      if ((sVar1 == 0) || (iVar5 = _memcmp(pbVar8,pbVar10,sVar1), iVar5 == 0)) goto LAB_1000f1aa8;
    }
    else {
      if (sVar1 == 0) {
LAB_1000f1aa8:
        pcVar7 = "MENU_GUILD_TYPE_LABEL_MIDCORE";
        pcVar9 = "MENU_GUILD_TYPE_LABEL_CAPS_MIDCORE";
        goto LAB_1000f1c34;
      }
      pbVar8 = param_1;
      uVar4 = uVar11;
      if ((uint)*pbVar10 == ((uint)*(byte **)param_1 & 0xff)) {
        do {
          pbVar10 = pbVar10 + 1;
          pbVar8 = pbVar8 + 1;
          if (uVar4 - 1 == 0) goto LAB_1000f1aa8;
          uVar4 = uVar4 - 1;
        } while (*pbVar8 == *pbVar10);
      }
    }
  }
  sVar2 = DAT_101d917d0;
  if (-1 < (char)DAT_101d917df) {
    sVar2 = (ulong)DAT_101d917df;
  }
  if (sVar1 == sVar2) {
    pbVar8 = *(byte **)param_1;
    if (-1 < (char)bVar3) {
      pbVar8 = param_1;
    }
    pbVar10 = DAT_101d917c8;
    if (-1 < (char)DAT_101d917df) {
      pbVar10 = (byte *)&DAT_101d917c8;
    }
    if ((char)bVar3 < '\0') {
      if ((sVar1 == 0) || (iVar5 = _memcmp(pbVar8,pbVar10,sVar1), iVar5 == 0)) goto LAB_1000f1b48;
    }
    else {
      if (sVar1 == 0) {
LAB_1000f1b48:
        pcVar7 = "MENU_GUILD_TYPE_LABEL_COMPETITIVE";
        pcVar9 = "MENU_GUILD_TYPE_LABEL_CAPS_COMPETITIVE";
        goto LAB_1000f1c34;
      }
      pbVar8 = param_1;
      uVar4 = uVar11;
      if ((uint)*pbVar10 == ((uint)*(byte **)param_1 & 0xff)) {
        do {
          pbVar10 = pbVar10 + 1;
          pbVar8 = pbVar8 + 1;
          if (uVar4 - 1 == 0) goto LAB_1000f1b48;
          uVar4 = uVar4 - 1;
        } while (*pbVar8 == *pbVar10);
      }
    }
  }
  sVar2 = DAT_101d917e8;
  if (-1 < (char)DAT_101d917f7) {
    sVar2 = (ulong)DAT_101d917f7;
  }
  if (sVar1 == sVar2) {
    pbVar8 = *(byte **)param_1;
    if (-1 < (char)bVar3) {
      pbVar8 = param_1;
    }
    pbVar10 = DAT_101d917e0;
    if (-1 < (char)DAT_101d917f7) {
      pbVar10 = (byte *)&DAT_101d917e0;
    }
    if ((char)bVar3 < '\0') {
      if ((sVar1 == 0) || (iVar5 = _memcmp(pbVar8,pbVar10,sVar1), iVar5 == 0)) goto LAB_1000f1be8;
    }
    else {
      if (sVar1 == 0) {
LAB_1000f1be8:
        pcVar7 = "MENU_GUILD_TYPE_LABEL_UNIVERSITY";
        pcVar9 = "MENU_GUILD_TYPE_LABEL_CAPS_UNIVERSITY";
        goto LAB_1000f1c34;
      }
      pbVar8 = param_1;
      uVar4 = uVar11;
      if ((uint)*pbVar10 == ((uint)*(byte **)param_1 & 0xff)) {
        do {
          pbVar10 = pbVar10 + 1;
          pbVar8 = pbVar8 + 1;
          if (uVar4 - 1 == 0) goto LAB_1000f1be8;
          uVar4 = uVar4 - 1;
        } while (*pbVar8 == *pbVar10);
      }
    }
  }
  sVar2 = DAT_101d91800;
  if (-1 < (char)DAT_101d9180f) {
    sVar2 = (ulong)DAT_101d9180f;
  }
  if (sVar1 != sVar2) {
LAB_1000f1c0c:
    return &DAT_101d91650;
  }
  pbVar8 = *(byte **)param_1;
  if (-1 < (char)bVar3) {
    pbVar8 = param_1;
  }
  pbVar10 = DAT_101d917f8;
  if (-1 < (char)DAT_101d9180f) {
    pbVar10 = (byte *)&DAT_101d917f8;
  }
  if ((char)bVar3 < '\0') {
    if ((sVar1 != 0) && (iVar5 = _memcmp(pbVar8,pbVar10,sVar1), iVar5 != 0)) goto LAB_1000f1c0c;
  }
  else if (sVar1 != 0) {
    if ((uint)*pbVar10 == ((uint)*(byte **)param_1 & 0xff)) {
      do {
        uVar11 = uVar11 - 1;
        pbVar10 = pbVar10 + 1;
        param_1 = param_1 + 1;
        if (uVar11 == 0) goto LAB_1000f1c24;
      } while (*param_1 == *pbVar10);
    }
    goto LAB_1000f1c0c;
  }
LAB_1000f1c24:
  pcVar7 = "MENU_GUILD_TYPE_LABEL_ANY";
  pcVar9 = "MENU_GUILD_TYPE_LABEL_CAPS_ANY";
LAB_1000f1c34:
  if (param_2 == 0) {
    pcVar9 = pcVar7;
  }
  puVar6 = (undefined8 *)FUN_1004e0150(pcVar9,0);
  return puVar6;
}



/*
 * FUN_10017b958
 * VA: 0x10017b958 | Source: functions/10017.c:9000
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 6, Vis masks: 2
 * Callees: FUN_10017bc04, FUN_10017bcb4, FUN_1004e0150, FUN_100534ebc, FUN_10064e20c, FUN_10064e524, FUN_1006505b8, FUN_100650608 (+7 more)
 */
long * FUN_10017b958(long *param_1,undefined1 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 local_58 [8];
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  *puVar4 = &PTR_thunk_FUN_10017cba8_10145e198;
  thunk_FUN_1001c0c34(puVar4 + 0x17,0);
  plVar1 = param_1 + 0xc6;
  thunk_FUN_1005357f4(plVar1);
  plVar2 = param_1 + 0x20b;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x231;
  FUN_1006505b8(plVar3);
  param_1[0x253] = 0;
  param_1[0x252] = 0;
  param_1[0x251] = 0;
  param_1[0x250] = 0;
  param_1[0x24f] = 0;
  param_1[0x24e] = 0;
  param_1[0x24d] = 0;
  param_1[0x24c] = 0;
  *(undefined1 *)(param_1 + 0x254) = param_2;
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar4 + 0x17,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  plVar5 = (long *)thunk_FUN_10064de70();
  (**(code **)(*plVar5 + 0x68))(plVar5,plVar3,0,2);
  (**(code **)(*plVar5 + 0x68))(plVar5,plVar1,1,2);
  FUN_10064e524(param_1,plVar5);
  uVar6 = thunk_FUN_10064dde8();
  FUN_10064e524(plVar3,uVar6);
  FUN_100650608(plVar3,&DAT_101e3d27c);
  uVar6 = FUN_1004e0150("MENU_GUILD_SEARCH_COLUMN_TITLE_NAME",0);
  FUN_10017bc04(param_1,500,uVar6);
  uVar6 = FUN_1004e0150("MENU_GUILD_SEARCH_COLUMN_TITLE_LEVEL",0);
  FUN_10017bc04(param_1,100,uVar6);
  uVar6 = FUN_1004e0150("MENU_GUILD_SEARCH_COLUMN_TITLE_NUM_MEMBERS",0);
  FUN_10017bc04(param_1,100,uVar6);
  uVar6 = FUN_1004e0150("MENU_GUILD_SEARCH_COLUMN_TITLE_GUILD_TYPE",0);
  FUN_10017bc04(param_1,200,uVar6);
  uVar6 = FUN_1004e0150("MENU_GUILD_SEARCH_COLUMN_TITLE_MIN_SKILL_TIER",0);
  FUN_10017bc04(param_1,0x32,uVar6);
  uVar6 = FUN_1004e0150("MENU_GUILD_SEARCH_COLUMN_TITLE_PRIME_TIME",0);
  FUN_10017bc04(param_1,100,uVar6);
  if ((char)param_1[0x254] != '\0') {
    FUN_10017bc04(param_1,100,&DAT_101d91650);
    FUN_10017bc04(param_1,100,&DAT_101d91650);
  }
  local_58[0] = 9;
  FUN_100534ebc(plVar1,local_58);
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) & 0xfffffffb;
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  *(uint *)((long)param_1 + 0x10dc) = *(uint *)((long)param_1 + 0x10dc) & 0xfffffffb;
  FUN_10017bcb4(param_1);
  return param_1;
}



/*
 * thunk_FUN_10017b958
 * VA: 0xthunk_10017b958 | Source: functions/10017.c:9136
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 6, Vis masks: 2
 * Callees: FUN_10017bc04, FUN_10017bcb4, FUN_1004e0150, FUN_100534ebc, FUN_10064e20c, FUN_10064e524, FUN_1006505b8, FUN_100650608 (+7 more)
 * Callers: FUN_10029f534, FUN_10029fee8, thunk_FUN_10029f534, thunk_FUN_10029fee8
 */
long * thunk_FUN_10017b958(long *param_1,undefined1 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [8];
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  *puVar4 = &PTR_thunk_FUN_10017cba8_10145e198;
  thunk_FUN_1001c0c34(puVar4 + 0x17,0);
  plVar1 = param_1 + 0xc6;
  thunk_FUN_1005357f4(plVar1);
  plVar2 = param_1 + 0x20b;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x231;
  FUN_1006505b8(plVar3);
  param_1[0x253] = 0;
  param_1[0x252] = 0;
  param_1[0x251] = 0;
  param_1[0x250] = 0;
  param_1[0x24f] = 0;
  param_1[0x24e] = 0;
  param_1[0x24d] = 0;
  param_1[0x24c] = 0;
  *(undefined1 *)(param_1 + 0x254) = param_2;
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar4 + 0x17,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  plVar5 = (long *)thunk_FUN_10064de70();
  (**(code **)(*plVar5 + 0x68))(plVar5,plVar3,0,2);
  (**(code **)(*plVar5 + 0x68))(plVar5,plVar1,1,2);
  FUN_10064e524(param_1,plVar5);
  uVar6 = thunk_FUN_10064dde8();
  FUN_10064e524(plVar3,uVar6);
  FUN_100650608(plVar3,&DAT_101e3d27c);
  uVar6 = FUN_1004e0150("MENU_GUILD_SEARCH_COLUMN_TITLE_NAME",0);
  FUN_10017bc04(param_1,500,uVar6);
  uVar6 = FUN_1004e0150("MENU_GUILD_SEARCH_COLUMN_TITLE_LEVEL",0);
  FUN_10017bc04(param_1,100,uVar6);
  uVar6 = FUN_1004e0150("MENU_GUILD_SEARCH_COLUMN_TITLE_NUM_MEMBERS",0);
  FUN_10017bc04(param_1,100,uVar6);
  uVar6 = FUN_1004e0150("MENU_GUILD_SEARCH_COLUMN_TITLE_GUILD_TYPE",0);
  FUN_10017bc04(param_1,200,uVar6);
  uVar6 = FUN_1004e0150("MENU_GUILD_SEARCH_COLUMN_TITLE_MIN_SKILL_TIER",0);
  FUN_10017bc04(param_1,0x32,uVar6);
  uVar6 = FUN_1004e0150("MENU_GUILD_SEARCH_COLUMN_TITLE_PRIME_TIME",0);
  FUN_10017bc04(param_1,100,uVar6);
  if ((char)param_1[0x254] != '\0') {
    FUN_10017bc04(param_1,100,&DAT_101d91650);
    FUN_10017bc04(param_1,100,&DAT_101d91650);
  }
  auStack_58[0] = 9;
  FUN_100534ebc(plVar1,auStack_58);
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) & 0xfffffffb;
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  *(uint *)((long)param_1 + 0x10dc) = *(uint *)((long)param_1 + 0x10dc) & 0xfffffffb;
  FUN_10017bcb4(param_1);
  return param_1;
}



/*
 * FUN_10019de4c
 * VA: 0x10019de4c | Source: functions/10019.c:10502
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 2, Vis masks: 8
 * Callees: FUN_1000153b4, FUN_1000200a0, FUN_1000f1e20, FUN_10015d3ec, FUN_100194b7c, FUN_10019d7f0, FUN_10019de60, FUN_10019e5f4 (+12 more)
 */
void FUN_10019de4c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10019d7f0();
  operator_delete(pvVar1);
  return;
}




void FUN_10019de60(undefined8 param_1,undefined4 param_2,long param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  int param_9,string *param_10,undefined8 param_11,undefined8 param_12,
                  string *param_13,undefined8 param_14,undefined8 param_15,string *param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  long lVar1;
  string *this;
  long lVar2;
  long lVar3;
  string *psVar4;
  undefined4 *puVar5;
  string *psVar6;
  size_t sVar7;
  size_t sVar8;
  char *pcVar9;
  uint uVar10;
  byte bVar11;
  byte bVar12;
  bool bVar13;
  int iVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined1 auStack_98 [8];
  void *local_90;
  void *local_88;
  void *local_80;
  char local_71;
  
  FUN_1000153b4(param_3 + 0x3cd0);
  FUN_1000153b4(param_3 + 0x3cf8,param_11);
  lVar16 = param_3 + 0x3d08;
  FUN_1000153b4(lVar16,param_12);
  this = (string *)(param_3 + 0x3d18);
  std::string::operator=(this,param_13);
  lVar2 = param_3 + 0x3d30;
  FUN_1000153b4(lVar2,param_14);
  lVar3 = param_3 + 0x3d40;
  FUN_1000153b4(lVar3,param_15);
  psVar4 = (string *)(param_3 + 0x3d50);
  std::string::operator=(psVar4,param_16);
  *(undefined1 *)(param_3 + 0x3db2) = (undefined1)param_18;
  *(undefined4 *)(param_3 + 0x3d94) = param_18._4_4_;
  uVar21 = NEON_ucvtf((undefined4)param_19);
  fVar22 = (float)NEON_fminnm(uVar21,0x45e10000);
  if (fVar22 <= 0.0) {
    fVar22 = 0.0;
  }
  *(int *)(param_3 + 0x3d9c) = (int)fVar22;
  *(undefined4 *)(param_3 + 0x3d68) = param_19._4_4_;
  lVar1 = param_3 + 0x260;
  FUN_1006513c0(lVar1,param_4);
  uVar10 = *(uint *)(param_3 + 0x2e4);
  if ((uVar10 & 0x7f80) != 0x5900) {
    *(uint *)(param_3 + 0x2e4) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x5900;
    FUN_1000200a0(lVar1);
  }
  puVar5 = &DAT_101d236b8;
  if (param_17._1_1_ == '\0') {
    puVar5 = &DAT_10115a168;
  }
  uVar15 = FUN_100651460(lVar1,puVar5);
  FUN_10019e5f4(&local_88,uVar15,param_3 + 0x3cd0);
  std::string::operator=((string *)(param_3 + 0x3ce0),(string *)&local_88);
  if (local_71 < '\0') {
    operator_delete(local_88);
  }
  FUN_10019e6d0(param_3,param_5);
  *(undefined4 *)(param_3 + 0x3d90) = param_2;
  FUN_1004e0150("MENU_GENERIC_LABEL_SKILL_TIER",0);
  FUN_1004e0150("PROFILE_SKILL_LABEL_UNRANKED",0);
  FUN_1001c6fd8(param_3 + 0x31a8,param_7);
  FUN_1001c6fd8(param_3 + 0x36a8,param_8);
  FUN_100194b7c(param_3 + 0x1460,lVar16);
  iVar14 = FUN_1004e36c0(lVar16,&DAT_101d91650);
  uVar20 = 4;
  uVar10 = uVar20;
  if (iVar14 == 0) {
    uVar10 = 0;
  }
  *(uint *)(param_3 + 0x14e4) = *(uint *)(param_3 + 0x14e4) & 0xfffffffb | uVar10;
  FUN_1001d0b14(param_3 + 0x2068,lVar3);
  iVar14 = FUN_1004e36c0(lVar3,&DAT_101d91650);
  if (iVar14 == 0) {
    uVar20 = 0;
  }
  *(uint *)(param_3 + 0x20ec) = *(uint *)(param_3 + 0x20ec) & 0xfffffffb | uVar20;
  iVar14 = FUN_1004e3624(lVar2);
  lVar16 = param_3 + 0x3cf8;
  if (iVar14 == 0) {
    lVar16 = lVar2;
  }
  FUN_1006513c0(param_3 + 0x3a78,lVar16);
  *(uint *)(param_3 + 0x3afc) =
       *(uint *)(param_3 + 0x3afc) & 0xfffffffb | (uint)*(byte *)(param_3 + 0x3db2) << 2;
  *(undefined4 *)(param_3 + 0x3da4) = param_7;
  *(undefined4 *)(param_3 + 0x3da8) = param_8;
  *(undefined4 *)(param_3 + 0x3da0) = param_6;
  *(undefined8 *)(param_3 + 0x3d88) = param_1;
  FUN_10019e818(param_3,(undefined1)param_17);
  std::string::operator=((string *)(param_3 + 0x3d70),param_10);
  *(char *)(param_3 + 0x3dac) = (char)param_9;
  bVar11 = *(byte *)(param_3 + 0x3d67);
  uVar17 = (ulong)bVar11;
  sVar7 = *(size_t *)(param_3 + 0x3d58);
  if (-1 < (char)bVar11) {
    sVar7 = uVar17;
  }
  sVar8 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar8 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar7 == sVar8) {
    psVar6 = *(string **)psVar4;
    if (-1 < (char)bVar11) {
      psVar6 = psVar4;
    }
    pbVar19 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar19 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar11 < '\0') {
      if ((sVar7 != 0) && (iVar14 = _memcmp(psVar6,pbVar19,sVar7), iVar14 != 0)) goto LAB_10019e224;
    }
    else if (sVar7 != 0) {
      if ((uint)*pbVar19 == ((uint)*(string **)psVar4 & 0xff)) {
        pbVar18 = (byte *)(param_3 + 0x3d51);
        do {
          uVar17 = uVar17 - 1;
          pbVar19 = pbVar19 + 1;
          if (uVar17 == 0) goto LAB_10019e2cc;
          bVar11 = *pbVar18;
          pbVar18 = pbVar18 + 1;
        } while (bVar11 == *pbVar19);
      }
      goto LAB_10019e224;
    }
LAB_10019e2cc:
    bVar11 = *(byte *)(param_3 + 0x3d2f);
    uVar17 = (ulong)bVar11;
    sVar7 = *(size_t *)(param_3 + 0x3d20);
    if (-1 < (char)bVar11) {
      sVar7 = uVar17;
    }
    sVar8 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar8 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar7 == sVar8) {
      psVar4 = *(string **)this;
      if (-1 < (char)bVar11) {
        psVar4 = this;
      }
      pbVar19 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar19 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar11 < '\0') {
        if ((sVar7 != 0) && (iVar14 = _memcmp(psVar4,pbVar19,sVar7), iVar14 != 0))
        goto LAB_10019e3a0;
      }
      else if (sVar7 != 0) {
        if ((uint)*pbVar19 == ((uint)*(string **)this & 0xff)) {
          pbVar18 = (byte *)(param_3 + 0x3d19);
          do {
            uVar17 = uVar17 - 1;
            pbVar19 = pbVar19 + 1;
            if (uVar17 == 0) goto LAB_10019e448;
            bVar11 = *pbVar18;
            pbVar18 = pbVar18 + 1;
          } while (bVar11 == *pbVar19);
        }
        goto LAB_10019e3a0;
      }
    }
    else {
LAB_10019e3a0:
      lVar16 = FUN_10015d3ec();
      bVar11 = *(byte *)(param_3 + 0x3d2f);
      uVar17 = (ulong)bVar11;
      bVar12 = *(byte *)(lVar16 + 0x548f);
      sVar7 = *(size_t *)(param_3 + 0x3d20);
      if (-1 < (char)bVar11) {
        sVar7 = uVar17;
      }
      sVar8 = *(size_t *)(lVar16 + 0x5480);
      if (-1 < (char)bVar12) {
        sVar8 = (ulong)bVar12;
      }
      if (sVar7 == sVar8) {
        psVar4 = *(string **)this;
        if (-1 < (char)bVar11) {
          psVar4 = this;
        }
        pbVar19 = *(byte **)(lVar16 + 0x5478);
        if (-1 < (char)bVar12) {
          pbVar19 = (byte *)(lVar16 + 0x5478);
        }
        if ((char)bVar11 < '\0') {
          if ((sVar7 == 0) || (iVar14 = _memcmp(psVar4,pbVar19,sVar7), iVar14 == 0))
          goto LAB_10019e470;
        }
        else {
          if (sVar7 == 0) {
LAB_10019e470:
            FUN_100652cdc(param_3 + 0x170,"generic_guild");
            bVar13 = false;
            if ((*(float *)(param_3 + 0x1b8) == 0.5) &&
               (bVar13 = false, !NAN(*(float *)(param_3 + 0x1bc)))) {
              bVar13 = *(float *)(param_3 + 0x1bc) == 0.5;
            }
            if (bVar13) goto LAB_10019e4b0;
            goto LAB_10019e4a0;
          }
          if ((uint)*pbVar19 == ((uint)*(string **)this & 0xff)) {
            pbVar18 = (byte *)(param_3 + 0x3d19);
            do {
              uVar17 = uVar17 - 1;
              pbVar19 = pbVar19 + 1;
              if (uVar17 == 0) goto LAB_10019e470;
              bVar11 = *pbVar18;
              pbVar18 = pbVar18 + 1;
            } while (bVar11 == *pbVar19);
          }
        }
      }
    }
LAB_10019e448:
    pcVar9 = "capsule_button_star";
    if (param_9 == 0) {
      pcVar9 = "friendslist_status_circle";
    }
    FUN_100652cdc(param_3 + 0x170,pcVar9);
  }
  else {
LAB_10019e224:
    lVar16 = FUN_10015d3ec();
    bVar11 = *(byte *)(param_3 + 0x3d67);
    uVar17 = (ulong)bVar11;
    bVar12 = *(byte *)(lVar16 + 0x54a7);
    sVar7 = *(size_t *)(param_3 + 0x3d58);
    if (-1 < (char)bVar11) {
      sVar7 = uVar17;
    }
    sVar8 = *(size_t *)(lVar16 + 0x5498);
    if (-1 < (char)bVar12) {
      sVar8 = (ulong)bVar12;
    }
    if (sVar7 != sVar8) goto LAB_10019e2cc;
    psVar6 = *(string **)psVar4;
    if (-1 < (char)bVar11) {
      psVar6 = psVar4;
    }
    pbVar19 = *(byte **)(lVar16 + 0x5490);
    if (-1 < (char)bVar12) {
      pbVar19 = (byte *)(lVar16 + 0x5490);
    }
    if ((char)bVar11 < '\0') {
      if ((sVar7 == 0) || (iVar14 = _memcmp(psVar6,pbVar19,sVar7), iVar14 == 0)) goto LAB_10019e360;
      goto LAB_10019e2cc;
    }
    if (sVar7 != 0) {
      if ((uint)*pbVar19 == ((uint)*(string **)psVar4 & 0xff)) {
        pbVar18 = (byte *)(param_3 + 0x3d51);
        do {
          uVar17 = uVar17 - 1;
          pbVar19 = pbVar19 + 1;
          if (uVar17 == 0) goto LAB_10019e360;
          bVar11 = *pbVar18;
          pbVar18 = pbVar18 + 1;
        } while (bVar11 == *pbVar19);
      }
      goto LAB_10019e2cc;
    }
LAB_10019e360:
    FUN_100652cdc(param_3 + 0x170,"generic_team");
    bVar13 = false;
    if ((*(float *)(param_3 + 0x1b8) == 0.5) && (bVar13 = false, !NAN(*(float *)(param_3 + 0x1bc))))
    {
      bVar13 = *(float *)(param_3 + 0x1bc) == 0.5;
    }
    if (bVar13) goto LAB_10019e4b0;
LAB_10019e4a0:
    *(undefined1 **)(param_3 + 0x1b8) = &DAT_3f0000003f000000;
    FUN_1000200a0(param_3 + 0x170);
  }
LAB_10019e4b0:
  *(uint *)(param_3 + 0x634) = *(uint *)(param_3 + 0x634) & 0xfffffffb;
  *(uint *)(param_3 + 0xc24) = *(uint *)(param_3 + 0xc24) & 0xfffffffb;
  *(uint *)(param_3 + 0x322c) = *(uint *)(param_3 + 0x322c) | 4;
  *(uint *)(param_3 + 0x372c) = *(uint *)(param_3 + 0x372c) | 4;
  *(uint *)(param_3 + 0x30fc) = *(uint *)(param_3 + 0x30fc) | 4;
  *(uint *)(param_3 + 0x35fc) = *(uint *)(param_3 + 0x35fc) | 4;
  *(uint *)(param_3 + 0x2e1c) = *(uint *)(param_3 + 0x2e1c) | 4;
  if ((*(int *)(param_3 + 0x3d98) == 2) && (*(int *)(param_3 + 0x3d9c) != 0)) {
    *(uint *)(param_3 + 0x2cec) = *(uint *)(param_3 + 0x2cec) | 4;
    *(uint *)(param_3 + 0x414) = *(uint *)(param_3 + 0x414) & 0xfffffffb;
    *(uint *)(param_3 + 0x504) = *(uint *)(param_3 + 0x504) & 0xfffffffb;
    uVar15 = FUN_1004e0150("MENU_FRIENDS_ITEM_TIME_IN_MATCH",0);
    thunk_FUN_1004e439c(&local_88,uVar15);
    FUN_1000f1e20(auStack_98,&local_88,*(undefined4 *)(param_3 + 0x3d9c),1);
    FUN_1006513c0(param_3 + 0x2c68,auStack_98);
    if (local_90 != (void *)0x0) {
      operator_delete__(local_90);
    }
    if (local_80 != (void *)0x0) {
      operator_delete__(local_80);
    }
  }
  else {
    *(uint *)(param_3 + 0x2cec) = *(uint *)(param_3 + 0x2cec) & 0xfffffffb;
    FUN_1006513c0(param_3 + 0x2c68,&DAT_101d91650);
  }
  FUN_10019e90c(param_3,param_17._2_1_,param_17._3_1_,param_17._4_4_);
  return;
}



/*
 * FUN_10019e818
 * VA: 0x10019e818 | Source: functions/10019.c:10943
 * CE-gate: NO | Guest-gate: NO
 * Indicators: Vis masks: 4
 * Callees: FUN_1000200a0, FUN_100126c88, FUN_100651038
 * Callers: FUN_10019de4c, FUN_10019e90c, FUN_10019ef80, FUN_10019f470, FUN_1002795e8
 */
void FUN_10019e818(long param_1,int param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  *(char *)(param_1 + 0x3daf) = (char)param_2;
  uVar3 = *(uint *)(param_1 + 0x2e4);
  uVar5 = 0xff;
  if (param_2 == 0) {
    uVar5 = 0xb2;
  }
  if (uVar5 != (uVar3 >> 7 & 0xff)) {
    *(uint *)(param_1 + 0x2e4) = uVar3 & 0xffff8000 | uVar3 & 0x7f | uVar5 << 7;
    FUN_1000200a0(param_1 + 0x260);
  }
  uVar5 = 4;
  if (param_2 == 0) {
    uVar5 = 0;
  }
  *(uint *)(param_1 + 0x1214) = *(uint *)(param_1 + 0x1214) & 0xfffffffb | uVar5;
  uVar5 = 0;
  if (param_2 == 0) {
    uVar5 = 4;
  }
  *(uint *)(param_1 + 0x1304) = *(uint *)(param_1 + 0x1304) & 0xfffffffb | uVar5;
  *(uint *)(param_1 + 0x13f4) = *(uint *)(param_1 + 0x13f4) & 0xfffffffb | uVar5;
  *(uint *)(param_1 + 0x3c2c) = *(uint *)(param_1 + 0x3c2c) & 0xfffffffb | uVar5;
  iVar4 = FUN_100126c88();
  ppuVar2 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar4 == 0) {
    ppuVar2 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  ppuVar1 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (iVar4 == 0) {
    ppuVar1 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
  }
  if (param_2 == 0) {
    ppuVar2 = ppuVar1;
  }
  FUN_100651038(param_1 + 0x260,*ppuVar2);
  return;
}



/*
 * FUN_10019e90c
 * VA: 0x10019e90c | Source: functions/10019.c:10993
 * CE-gate: NO | Guest-gate: NO
 * Indicators: Vis masks: 13
 * Callees: FUN_1000153b4, FUN_1000200a0, FUN_10015d3ec, FUN_100194b7c, FUN_10019e5f4, FUN_10019e818, FUN_10019ea08, FUN_1001d0b14 (+6 more)
 * Callers: FUN_10019de4c, FUN_100273450, FUN_1002755e8, FUN_1002795e8
 */
void FUN_10019e90c(long param_1,ulong param_2,int param_3,int param_4)

{
  uint uVar1;
  char *pcVar2;
  undefined1 auStack_40 [8];
  void *local_38;
  
  pcVar2 = "generic_chat_bubble";
  if (param_3 == 0) {
    pcVar2 = "generic_chat_bubble_outline";
  }
  FUN_100652cdc(param_1 + 0x390,pcVar2);
  if ((param_2 & 1) == 0) {
    *(uint *)(param_1 + 0x414) = *(uint *)(param_1 + 0x414) & 0xfffffffb;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x2cec) & 4;
    *(uint *)(param_1 + 0x414) = (*(uint *)(param_1 + 0x414) & 0xfffffffb | uVar1) ^ 4;
    if ((0 < param_4) && (uVar1 == 0)) {
      *(uint *)(param_1 + 0x504) = *(uint *)(param_1 + 0x504) | 4;
      FUN_1004e313c(auStack_40);
      if (param_4 < 99) {
        pcVar2 = "%d";
      }
      else {
        pcVar2 = "%d+";
      }
      FUN_1004e38ac(auStack_40,pcVar2);
      FUN_1006513c0(param_1 + 0x480,auStack_40);
      if (local_38 == (void *)0x0) {
        return;
      }
      operator_delete__(local_38);
      return;
    }
  }
  *(uint *)(param_1 + 0x504) = *(uint *)(param_1 + 0x504) & 0xfffffffb;
  return;
}




void FUN_10019ea08(undefined4 param_1,long param_2,undefined8 param_3,string *param_4,
                  undefined8 param_5,undefined8 param_6,string *param_7,undefined8 param_8,
                  undefined8 param_9,string *param_10,undefined8 param_11)

{
  long lVar1;
  long lVar2;
  string *psVar3;
  undefined4 *puVar4;
  size_t sVar5;
  size_t sVar6;
  byte bVar7;
  byte bVar8;
  string sVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  string *psVar14;
  ulong uVar15;
  byte *pbVar16;
  string *psVar17;
  byte *pbVar18;
  string *psVar19;
  uint uVar20;
  void *local_88 [2];
  char local_71;
  
  *(undefined1 *)(param_2 + 0x3dad) = 1;
  lVar1 = param_2 + 0x3cd0;
  FUN_1000153b4(lVar1);
  FUN_1000153b4(param_2 + 0x3cf8,param_5);
  lVar2 = param_2 + 0x3d08;
  FUN_1000153b4(lVar2,param_6);
  psVar17 = (string *)(param_2 + 0x3d18);
  std::string::operator=(psVar17,param_7);
  FUN_1000153b4(param_2 + 0x3d30,param_8);
  lVar13 = param_2 + 0x3d40;
  FUN_1000153b4(lVar13,param_9);
  psVar14 = (string *)(param_2 + 0x3d50);
  std::string::operator=(psVar14,param_10);
  FUN_1006513c0(param_2 + 0x260,lVar1);
  puVar4 = &DAT_101d236b8;
  if (param_11._1_1_ == '\0') {
    puVar4 = &DAT_10115a168;
  }
  FUN_100651460(param_2 + 0x260,puVar4);
  FUN_100194b7c(param_2 + 0x1460,lVar2);
  iVar11 = FUN_1004e36c0(lVar2,&DAT_101d91650);
  uVar20 = 4;
  uVar12 = uVar20;
  if (iVar11 == 0) {
    uVar12 = 0;
  }
  *(uint *)(param_2 + 0x14e4) = *(uint *)(param_2 + 0x14e4) & 0xfffffffb | uVar12;
  FUN_1001d0b14(param_2 + 0x2068,lVar13);
  iVar11 = FUN_1004e36c0(lVar13,&DAT_101d91650);
  if (iVar11 == 0) {
    uVar20 = 0;
  }
  *(uint *)(param_2 + 0x20ec) = *(uint *)(param_2 + 0x20ec) & 0xfffffffb | uVar20;
  lVar2 = param_2 + 0x170;
  *(uint *)(param_2 + 500) = *(uint *)(param_2 + 500) | 4;
  bVar7 = *(byte *)(param_2 + 0x3d67);
  uVar15 = (ulong)bVar7;
  sVar5 = *(size_t *)(param_2 + 0x3d58);
  if (-1 < (char)bVar7) {
    sVar5 = uVar15;
  }
  sVar6 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar6 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar5 == sVar6) {
    psVar3 = *(string **)psVar14;
    if (-1 < (char)bVar7) {
      psVar3 = psVar14;
    }
    pbVar18 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar18 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar7 < '\0') {
      if ((sVar5 != 0) && (iVar11 = _memcmp(psVar3,pbVar18,sVar5), iVar11 != 0)) goto LAB_10019ec40;
    }
    else if (sVar5 != 0) {
      if ((uint)*pbVar18 == ((uint)*(string **)psVar14 & 0xff)) {
        pbVar16 = (byte *)(param_2 + 0x3d51);
        do {
          uVar15 = uVar15 - 1;
          pbVar18 = pbVar18 + 1;
          if (uVar15 == 0) goto LAB_10019ece8;
          bVar7 = *pbVar16;
          pbVar16 = pbVar16 + 1;
        } while (bVar7 == *pbVar18);
      }
      goto LAB_10019ec40;
    }
LAB_10019ece8:
    bVar7 = *(byte *)(param_2 + 0x3d2f);
    uVar15 = (ulong)bVar7;
    sVar5 = *(size_t *)(param_2 + 0x3d20);
    if (-1 < (char)bVar7) {
      sVar5 = uVar15;
    }
    sVar6 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar6 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar5 == sVar6) {
      psVar14 = *(string **)psVar17;
      if (-1 < (char)bVar7) {
        psVar14 = psVar17;
      }
      pbVar18 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar18 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar7 < '\0') {
        if (sVar5 != 0) {
          uVar12 = _memcmp(psVar14,pbVar18,sVar5);
          psVar14 = (string *)(ulong)uVar12;
          if (uVar12 != 0) goto LAB_10019edb4;
        }
      }
      else if (sVar5 != 0) {
        if ((uint)*pbVar18 == ((uint)*(string **)psVar17 & 0xff)) {
          pbVar16 = (byte *)(param_2 + 0x3d19);
          do {
            uVar15 = uVar15 - 1;
            pbVar18 = pbVar18 + 1;
            if (uVar15 == 0) goto LAB_10019ee5c;
            bVar7 = *pbVar16;
            pbVar16 = pbVar16 + 1;
          } while (bVar7 == *pbVar18);
        }
        goto LAB_10019edb4;
      }
    }
    else {
LAB_10019edb4:
      psVar14 = (string *)FUN_10015d3ec();
      bVar7 = *(byte *)(param_2 + 0x3d2f);
      uVar15 = (ulong)bVar7;
      sVar9 = psVar14[0x548f];
      sVar5 = *(size_t *)(param_2 + 0x3d20);
      if (-1 < (char)bVar7) {
        sVar5 = uVar15;
      }
      sVar6 = *(size_t *)(psVar14 + 0x5480);
      if (-1 < (char)sVar9) {
        sVar6 = (ulong)(byte)sVar9;
      }
      if (sVar5 == sVar6) {
        psVar3 = psVar14 + 0x5478;
        psVar14 = *(string **)psVar17;
        if (-1 < (char)bVar7) {
          psVar14 = psVar17;
        }
        psVar19 = *(string **)psVar3;
        if (-1 < (char)sVar9) {
          psVar19 = psVar3;
        }
        if ((char)bVar7 < '\0') {
          if (sVar5 != 0) {
            uVar12 = _memcmp(psVar14,psVar19,sVar5);
            psVar14 = (string *)(ulong)uVar12;
            if (uVar12 != 0) goto LAB_10019ee5c;
          }
        }
        else if (sVar5 != 0) {
          if ((uint)(byte)*psVar19 == ((uint)*(string **)psVar17 & 0xff)) {
            psVar17 = (string *)(param_2 + 0x3d19);
            do {
              uVar15 = uVar15 - 1;
              psVar19 = psVar19 + 1;
              if (uVar15 == 0) goto LAB_10019ee6c;
              sVar9 = *psVar17;
              psVar17 = psVar17 + 1;
            } while (sVar9 == *psVar19);
          }
          goto LAB_10019ee5c;
        }
LAB_10019ee6c:
        psVar14 = (string *)FUN_100652cdc(lVar2,"generic_guild");
        bVar10 = false;
        if ((*(float *)(param_2 + 0x1b8) == 0.5) &&
           (bVar10 = false, !NAN(*(float *)(param_2 + 0x1bc)))) {
          bVar10 = *(float *)(param_2 + 0x1bc) == 0.5;
        }
        if (bVar10) goto LAB_10019eea4;
        goto LAB_10019ee94;
      }
    }
LAB_10019ee5c:
    *(uint *)(param_2 + 500) = *(uint *)(param_2 + 500) & 0xfffffffb;
  }
  else {
LAB_10019ec40:
    lVar13 = FUN_10015d3ec();
    bVar7 = *(byte *)(param_2 + 0x3d67);
    uVar15 = (ulong)bVar7;
    bVar8 = *(byte *)(lVar13 + 0x54a7);
    sVar5 = *(size_t *)(param_2 + 0x3d58);
    if (-1 < (char)bVar7) {
      sVar5 = uVar15;
    }
    sVar6 = *(size_t *)(lVar13 + 0x5498);
    if (-1 < (char)bVar8) {
      sVar6 = (ulong)bVar8;
    }
    if (sVar5 != sVar6) goto LAB_10019ece8;
    psVar3 = *(string **)psVar14;
    if (-1 < (char)bVar7) {
      psVar3 = psVar14;
    }
    pbVar18 = *(byte **)(lVar13 + 0x5490);
    if (-1 < (char)bVar8) {
      pbVar18 = (byte *)(lVar13 + 0x5490);
    }
    if ((char)bVar7 < '\0') {
      if ((sVar5 == 0) || (iVar11 = _memcmp(psVar3,pbVar18,sVar5), iVar11 == 0)) goto LAB_10019ed78;
      goto LAB_10019ece8;
    }
    if (sVar5 != 0) {
      if ((uint)*pbVar18 == ((uint)*(string **)psVar14 & 0xff)) {
        pbVar16 = (byte *)(param_2 + 0x3d51);
        do {
          uVar15 = uVar15 - 1;
          pbVar18 = pbVar18 + 1;
          if (uVar15 == 0) goto LAB_10019ed78;
          bVar7 = *pbVar16;
          pbVar16 = pbVar16 + 1;
        } while (bVar7 == *pbVar18);
      }
      goto LAB_10019ece8;
    }
LAB_10019ed78:
    psVar14 = (string *)FUN_100652cdc(lVar2,"generic_team");
    bVar10 = false;
    if ((*(float *)(param_2 + 0x1b8) == 0.5) && (bVar10 = false, !NAN(*(float *)(param_2 + 0x1bc))))
    {
      bVar10 = *(float *)(param_2 + 0x1bc) == 0.5;
    }
    if (bVar10) goto LAB_10019eea4;
LAB_10019ee94:
    *(undefined1 **)(param_2 + 0x1b8) = &DAT_3f0000003f000000;
    psVar14 = (string *)FUN_1000200a0(lVar2);
  }
LAB_10019eea4:
  FUN_10019e5f4(local_88,psVar14,lVar1);
  std::string::operator=((string *)(param_2 + 0x3ce0),(string *)local_88);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  *(uint *)(param_2 + 0x414) = *(uint *)(param_2 + 0x414) & 0xfffffffb;
  *(uint *)(param_2 + 0x634) = *(uint *)(param_2 + 0x634) | 4;
  *(uint *)(param_2 + 0xc24) = *(uint *)(param_2 + 0xc24) | 4;
  *(uint *)(param_2 + 0x322c) = *(uint *)(param_2 + 0x322c) & 0xfffffffb;
  *(uint *)(param_2 + 0x372c) = *(uint *)(param_2 + 0x372c) & 0xfffffffb;
  *(uint *)(param_2 + 0x30fc) = *(uint *)(param_2 + 0x30fc) & 0xfffffffb;
  *(uint *)(param_2 + 0x35fc) = *(uint *)(param_2 + 0x35fc) & 0xfffffffb;
  *(uint *)(param_2 + 0x2e1c) = *(uint *)(param_2 + 0x2e1c) & 0xfffffffb;
  *(uint *)(param_2 + 0x2cec) = *(uint *)(param_2 + 0x2cec) & 0xfffffffb;
  std::string::operator=((string *)(param_2 + 0x3d70),param_4);
  *(undefined4 *)(param_2 + 0x3d90) = param_1;
  FUN_10019e818(param_2,(undefined1)param_11);
  return;
}



/*
 * FUN_1001dc54c
 * VA: 0x1001dc54c | Source: functions/1001d.c:8883
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 29
 * Callees: FUN_10001554c, FUN_10015a14c, FUN_1001816d4, FUN_100185730, FUN_1001a6400, FUN_1001afd98, FUN_1001dcdb4, FUN_1001dce54 (+23 more)
 */
long FUN_1001dc54c(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong local_d8;
  ulong local_d0;
  long local_b8;
  code *local_a8;
  long lStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  ulong local_88;
  undefined4 local_80;
  
  puVar3 = (undefined8 *)FUN_1001a6400();
  *puVar3 = &PTR_thunk_FUN_1001de800_101468ff8;
  thunk_FUN_1001defe4(puVar3 + 0x13c);
  thunk_FUN_1001ded5c(param_1 + 0x40f0);
  thunk_FUN_1001defe4(param_1 + 0x6cf8);
  thunk_FUN_1001defe4(param_1 + 0xa408);
  thunk_FUN_1001ded5c(param_1 + 0xdb18);
  lVar4 = param_1 + 0x10720;
  lVar7 = 0xb880;
  do {
    lVar4 = thunk_FUN_1001df260(lVar4);
    lVar4 = lVar4 + 0x3d80;
    lVar7 = lVar7 + -0x3d80;
  } while (lVar7 != 0);
  lVar7 = param_1 + 0x1bfa0;
  FUN_10064e264(lVar7);
  lVar1 = param_1 + 0x1c058;
  thunk_FUN_100181304(lVar1,0);
  *(undefined8 *)(param_1 + 0x1d6e8) = 0;
  *(undefined8 *)(param_1 + 0x1d6e0) = 0;
  *(undefined8 *)(param_1 + 0x1d6d8) = 0;
  *(undefined8 *)(param_1 + 0x1d6d0) = 0;
  *(undefined8 *)(param_1 + 0x1d6c8) = 0;
  *(undefined8 *)(param_1 + 0x1d6c0) = 0;
  *(undefined8 *)(param_1 + 0x1d6b8) = 0;
  *(undefined8 *)(param_1 + 0x1d6b0) = 0;
  *(undefined8 *)(param_1 + 0x1d6a8) = 0;
  *(undefined8 *)(param_1 + 0x1d6a0) = 0;
  *(undefined8 *)(param_1 + 0x1d698) = 0;
  *(undefined8 *)(param_1 + 0x1d690) = 0;
  *(undefined8 *)(param_1 + 0x1d688) = 0;
  *(undefined8 *)(param_1 + 0x1d680) = 0;
  *(undefined8 *)(param_1 + 0x1d678) = 0;
  *(undefined8 *)(param_1 + 0x1d670) = 0;
  *(undefined8 *)(param_1 + 0x1d668) = 0;
  *(undefined8 *)(param_1 + 0x1d660) = 0;
  *(undefined8 *)(param_1 + 0x1d658) = 0;
  *(undefined8 *)(param_1 + 0x1d650) = 0;
  *(undefined8 *)(param_1 + 0x1d648) = 0;
  *(undefined8 *)(param_1 + 0x1d640) = 0;
  *(undefined8 *)(param_1 + 0x1d638) = 0;
  *(undefined8 *)(param_1 + 0x1d630) = 0;
  *(undefined8 *)(param_1 + 0x1d628) = 0;
  *(undefined8 *)(param_1 + 0x1d620) = 0;
  *(undefined8 *)(param_1 + 0x1d618) = 0;
  FUN_10015a14c(param_1 + 0x1d610);
  *(undefined8 *)(param_1 + 0x1d7d0) = 0;
  *(undefined8 *)(param_1 + 0x1d7c8) = 0;
  *(undefined8 *)(param_1 + 0x1d7c0) = 0;
  *(undefined8 *)(param_1 + 0x1d7b8) = 0;
  *(undefined8 *)(param_1 + 0x1d7b0) = 0;
  *(undefined8 *)(param_1 + 0x1d7a8) = 0;
  *(undefined8 *)(param_1 + 0x1d7a0) = 0;
  *(undefined8 *)(param_1 + 0x1d798) = 0;
  *(undefined8 *)(param_1 + 0x1d790) = 0;
  *(undefined8 *)(param_1 + 0x1d788) = 0;
  *(undefined8 *)(param_1 + 0x1d780) = 0;
  *(undefined8 *)(param_1 + 0x1d778) = 0;
  *(undefined8 *)(param_1 + 0x1d770) = 0;
  *(undefined8 *)(param_1 + 0x1d768) = 0;
  *(undefined8 *)(param_1 + 0x1d760) = 0;
  *(undefined8 *)(param_1 + 0x1d758) = 0;
  *(undefined8 *)(param_1 + 0x1d750) = 0;
  *(undefined8 *)(param_1 + 0x1d748) = 0;
  *(undefined8 *)(param_1 + 0x1d740) = 0;
  *(undefined8 *)(param_1 + 0x1d738) = 0;
  *(undefined8 *)(param_1 + 0x1d730) = 0;
  *(undefined8 *)(param_1 + 0x1d728) = 0;
  *(undefined8 *)(param_1 + 0x1d720) = 0;
  *(undefined8 *)(param_1 + 0x1d718) = 0;
  *(undefined8 *)(param_1 + 0x1d710) = 0;
  *(undefined8 *)(param_1 + 0x1d708) = 0;
  *(undefined8 *)(param_1 + 0x1d700) = 0;
  FUN_10015a14c(param_1 + 0x1d6f8);
  *(undefined1 *)(param_1 + 0x1d7e0) = 0;
  lVar4 = param_1 + 0x908;
  FUN_100642bd8(lVar4,puVar3 + 0x13c,1);
  FUN_100642bd8(lVar4,param_1 + 0x40f0,1);
  FUN_100642bd8(lVar4,param_1 + 0x6cf8,1);
  FUN_100642bd8(lVar4,param_1 + 0xa408,1);
  FUN_100642bd8(lVar4,param_1 + 0xdb18,1);
  lVar10 = param_1 + 0x10720;
  lVar8 = 3;
  do {
    FUN_100642bd8(lVar4,lVar10,1);
    lVar10 = lVar10 + 0x3d80;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  FUN_100642bd8(lVar4,lVar7,1);
  FUN_100642bd8(lVar7,lVar1,1);
  uVar5 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_PRIMETIME_DROPDOWN_LABEL",0);
  FUN_1006513c0(param_1 + 0xb88,uVar5);
  FUN_1001dcdb4(0x44480000,param_1);
  local_80 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  local_a8 = FUN_1001dce54;
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  lStack_a0 = param_1;
  FUN_10001554c(param_1 + 0xcc0,&local_a8);
  *(uint *)(param_1 + 0x422c) = *(uint *)(param_1 + 0x422c) | 4;
  uVar5 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_TYPE_DROPDOWN_LABEL",0);
  FUN_1006513c0(param_1 + 0x4298,uVar5);
  FUN_1001dce94(0x44480000,param_1);
  local_80 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  local_a8 = FUN_1001dd038;
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  lStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x43d0,&local_a8);
  local_80 = FUN_100644a94("UI::EVENT_DROPDOWN_EXPANDED_CHANGED");
  local_a8 = thunk_FUN_1001de2b8;
  local_98 = 0;
  local_90 = 0;
  lStack_a0 = param_1;
  local_88 = param_1 + 0x43c8;
  FUN_10001554c(param_1 + 0x43d0,&local_a8);
  uVar5 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_LANGUAGE_DROPDOWN_LABEL",0);
  FUN_1006513c0(param_1 + 0x6ea0,uVar5);
  FUN_1001dd084(0x44480000,param_1);
  local_80 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  local_a8 = FUN_1001dd150;
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  lStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x6fd8,&local_a8);
  *(uint *)(param_1 + 0xa544) = *(uint *)(param_1 + 0xa544) | 4;
  uVar5 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_SKILL_TIER_DROPDOWN_LABEL",0);
  FUN_1006513c0(param_1 + 0xa5b0,uVar5);
  FUN_1001dd198(0x44480000,param_1);
  local_80 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  local_a8 = FUN_1001dd294;
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  lStack_a0 = param_1;
  FUN_10001554c(param_1 + 0xa6e8,&local_a8);
  uVar5 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_ENROLLMENT_DROPDOWN_LABEL",0);
  FUN_1006513c0(param_1 + 0xdcc0,uVar5);
  FUN_1001dd2c8(0x44480000,param_1);
  local_80 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  local_a8 = thunk_FUN_1001de314;
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  lStack_a0 = param_1;
  FUN_10001554c(param_1 + 0xddf8,&local_a8);
  local_80 = FUN_100644a94("UI::EVENT_DROPDOWN_EXPANDED_CHANGED");
  local_a8 = thunk_FUN_1001de39c;
  local_98 = 0;
  local_90 = 0;
  lStack_a0 = param_1;
  local_88 = param_1 + 0xddf0;
  FUN_10001554c(param_1 + 0xddf8,&local_a8);
  uVar2 = DAT_101dbd4ac;
  uVar6 = 0;
  uVar11 = 0;
  lVar4 = 0x10990;
  lVar7 = 0x10ac0;
  lVar8 = 0x1085c;
  lVar10 = 0x10ac8;
  local_b8 = 0x127b0;
  lVar9 = 0x127b8;
  do {
    *(uint *)(param_1 + lVar8) =
         (*(uint *)(param_1 + lVar8) & 0xfffffff8 |
         *(uint *)(param_1 + lVar8) & 3 | (uVar6 >> 2 & 1) << 2) ^ 4;
    uVar5 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_TILE_LABEL",0);
    FUN_1006513c0(param_1 + lVar4,uVar5);
    uVar5 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_DISPLAY_LABEL",0);
    FUN_100185730(param_1 + lVar7,uVar5);
    local_80 = uVar2;
    local_d0 = local_d0 & 0xffffffff00000000 | uVar11;
    local_a8 = FUN_1001dd3e4;
    local_98 = 0;
    local_90 = 0;
    lStack_a0 = param_1;
    local_88 = local_d0;
    FUN_10001554c(param_1 + lVar10,&local_a8);
    uVar5 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_DISPLAY_LABEL",0);
    FUN_1001afd98(param_1 + lVar7,uVar5,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
    uVar5 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_URL_LABEL",0);
    FUN_100185730(param_1 + local_b8,uVar5);
    local_80 = uVar2;
    local_d8 = local_d8 & 0xffffffff00000000 | uVar11;
    local_a8 = FUN_1001dd3ec;
    local_98 = 0;
    local_90 = 0;
    lStack_a0 = param_1;
    local_88 = local_d8;
    FUN_10001554c(param_1 + lVar9,&local_a8);
    uVar5 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_URL_LABEL",0);
    FUN_1001afd98(param_1 + local_b8,uVar5,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
    uVar11 = uVar11 + 1;
    uVar6 = uVar6 + 4;
    lVar4 = lVar4 + 0x3d80;
    lVar7 = lVar7 + 0x3d80;
    local_b8 = local_b8 + 0x3d80;
    lVar8 = lVar8 + 0x3d80;
    lVar10 = lVar10 + 0x3d80;
    lVar9 = lVar9 + 0x3d80;
  } while (uVar11 != 3);
  uVar5 = FUN_1004e0150("MENU_GUILD_SEARCH_FILTER_APPLY_BUTTON_LABEL",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x446b0000,lVar1,0,uVar5,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_80 = DAT_101d91884;
  local_a8 = thunk_FUN_1001de658;
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  lStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x1c060,&local_a8);
  return param_1;
}



/*
 * thunk_FUN_1001dc54c
 * VA: 0xthunk_1001dc54c | Source: functions/1001d.c:9495
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 29
 * Callees: FUN_10001554c, FUN_10015a14c, FUN_1001816d4, FUN_100185730, FUN_1001a6400, FUN_1001afd98, FUN_1001dcdb4, FUN_1001dce54 (+23 more)
 * Callers: FUN_100232f00, thunk_FUN_100232f00
 */
long thunk_FUN_1001dc54c(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uStack_d8;
  ulong uStack_d0;
  long lStack_b8;
  code *pcStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined4 uStack_80;
  
  puVar3 = (undefined8 *)FUN_1001a6400();
  *puVar3 = &PTR_thunk_FUN_1001de800_101468ff8;
  thunk_FUN_1001defe4(puVar3 + 0x13c);
  thunk_FUN_1001ded5c(param_1 + 0x40f0);
  thunk_FUN_1001defe4(param_1 + 0x6cf8);
  thunk_FUN_1001defe4(param_1 + 0xa408);
  thunk_FUN_1001ded5c(param_1 + 0xdb18);
  lVar4 = param_1 + 0x10720;
  lVar7 = 0xb880;
  do {
    lVar4 = thunk_FUN_1001df260(lVar4);
    lVar4 = lVar4 + 0x3d80;
    lVar7 = lVar7 + -0x3d80;
  } while (lVar7 != 0);
  lVar7 = param_1 + 0x1bfa0;
  FUN_10064e264(lVar7);
  lVar1 = param_1 + 0x1c058;
  thunk_FUN_100181304(lVar1,0);
  *(undefined8 *)(param_1 + 0x1d6e8) = 0;
  *(undefined8 *)(param_1 + 0x1d6e0) = 0;
  *(undefined8 *)(param_1 + 0x1d6d8) = 0;
  *(undefined8 *)(param_1 + 0x1d6d0) = 0;
  *(undefined8 *)(param_1 + 0x1d6c8) = 0;
  *(undefined8 *)(param_1 + 0x1d6c0) = 0;
  *(undefined8 *)(param_1 + 0x1d6b8) = 0;
  *(undefined8 *)(param_1 + 0x1d6b0) = 0;
  *(undefined8 *)(param_1 + 0x1d6a8) = 0;
  *(undefined8 *)(param_1 + 0x1d6a0) = 0;
  *(undefined8 *)(param_1 + 0x1d698) = 0;
  *(undefined8 *)(param_1 + 0x1d690) = 0;
  *(undefined8 *)(param_1 + 0x1d688) = 0;
  *(undefined8 *)(param_1 + 0x1d680) = 0;
  *(undefined8 *)(param_1 + 0x1d678) = 0;
  *(undefined8 *)(param_1 + 0x1d670) = 0;
  *(undefined8 *)(param_1 + 0x1d668) = 0;
  *(undefined8 *)(param_1 + 0x1d660) = 0;
  *(undefined8 *)(param_1 + 0x1d658) = 0;
  *(undefined8 *)(param_1 + 0x1d650) = 0;
  *(undefined8 *)(param_1 + 0x1d648) = 0;
  *(undefined8 *)(param_1 + 0x1d640) = 0;
  *(undefined8 *)(param_1 + 0x1d638) = 0;
  *(undefined8 *)(param_1 + 0x1d630) = 0;
  *(undefined8 *)(param_1 + 0x1d628) = 0;
  *(undefined8 *)(param_1 + 0x1d620) = 0;
  *(undefined8 *)(param_1 + 0x1d618) = 0;
  FUN_10015a14c(param_1 + 0x1d610);
  *(undefined8 *)(param_1 + 0x1d7d0) = 0;
  *(undefined8 *)(param_1 + 0x1d7c8) = 0;
  *(undefined8 *)(param_1 + 0x1d7c0) = 0;
  *(undefined8 *)(param_1 + 0x1d7b8) = 0;
  *(undefined8 *)(param_1 + 0x1d7b0) = 0;
  *(undefined8 *)(param_1 + 0x1d7a8) = 0;
  *(undefined8 *)(param_1 + 0x1d7a0) = 0;
  *(undefined8 *)(param_1 + 0x1d798) = 0;
  *(undefined8 *)(param_1 + 0x1d790) = 0;
  *(undefined8 *)(param_1 + 0x1d788) = 0;
  *(undefined8 *)(param_1 + 0x1d780) = 0;
  *(undefined8 *)(param_1 + 0x1d778) = 0;
  *(undefined8 *)(param_1 + 0x1d770) = 0;
  *(undefined8 *)(param_1 + 0x1d768) = 0;
  *(undefined8 *)(param_1 + 0x1d760) = 0;
  *(undefined8 *)(param_1 + 0x1d758) = 0;
  *(undefined8 *)(param_1 + 0x1d750) = 0;
  *(undefined8 *)(param_1 + 0x1d748) = 0;
  *(undefined8 *)(param_1 + 0x1d740) = 0;
  *(undefined8 *)(param_1 + 0x1d738) = 0;
  *(undefined8 *)(param_1 + 0x1d730) = 0;
  *(undefined8 *)(param_1 + 0x1d728) = 0;
  *(undefined8 *)(param_1 + 0x1d720) = 0;
  *(undefined8 *)(param_1 + 0x1d718) = 0;
  *(undefined8 *)(param_1 + 0x1d710) = 0;
  *(undefined8 *)(param_1 + 0x1d708) = 0;
  *(undefined8 *)(param_1 + 0x1d700) = 0;
  FUN_10015a14c(param_1 + 0x1d6f8);
  *(undefined1 *)(param_1 + 0x1d7e0) = 0;
  lVar4 = param_1 + 0x908;
  FUN_100642bd8(lVar4,puVar3 + 0x13c,1);
  FUN_100642bd8(lVar4,param_1 + 0x40f0,1);
  FUN_100642bd8(lVar4,param_1 + 0x6cf8,1);
  FUN_100642bd8(lVar4,param_1 + 0xa408,1);
  FUN_100642bd8(lVar4,param_1 + 0xdb18,1);
  lVar10 = param_1 + 0x10720;
  lVar8 = 3;
  do {
    FUN_100642bd8(lVar4,lVar10,1);
    lVar10 = lVar10 + 0x3d80;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  FUN_100642bd8(lVar4,lVar7,1);
  FUN_100642bd8(lVar7,lVar1,1);
  uVar5 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_PRIMETIME_DROPDOWN_LABEL",0);
  FUN_1006513c0(param_1 + 0xb88,uVar5);
  FUN_1001dcdb4(0x44480000,param_1);
  uStack_80 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  pcStack_a8 = FUN_1001dce54;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  lStack_a0 = param_1;
  FUN_10001554c(param_1 + 0xcc0,&pcStack_a8);
  *(uint *)(param_1 + 0x422c) = *(uint *)(param_1 + 0x422c) | 4;
  uVar5 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_TYPE_DROPDOWN_LABEL",0);
  FUN_1006513c0(param_1 + 0x4298,uVar5);
  FUN_1001dce94(0x44480000,param_1);
  uStack_80 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  pcStack_a8 = FUN_1001dd038;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  lStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x43d0,&pcStack_a8);
  uStack_80 = FUN_100644a94("UI::EVENT_DROPDOWN_EXPANDED_CHANGED");
  pcStack_a8 = thunk_FUN_1001de2b8;
  uStack_98 = 0;
  uStack_90 = 0;
  lStack_a0 = param_1;
  uStack_88 = param_1 + 0x43c8;
  FUN_10001554c(param_1 + 0x43d0,&pcStack_a8);
  uVar5 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_LANGUAGE_DROPDOWN_LABEL",0);
  FUN_1006513c0(param_1 + 0x6ea0,uVar5);
  FUN_1001dd084(0x44480000,param_1);
  uStack_80 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  pcStack_a8 = FUN_1001dd150;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  lStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x6fd8,&pcStack_a8);
  *(uint *)(param_1 + 0xa544) = *(uint *)(param_1 + 0xa544) | 4;
  uVar5 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_SKILL_TIER_DROPDOWN_LABEL",0);
  FUN_1006513c0(param_1 + 0xa5b0,uVar5);
  FUN_1001dd198(0x44480000,param_1);
  uStack_80 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  pcStack_a8 = FUN_1001dd294;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  lStack_a0 = param_1;
  FUN_10001554c(param_1 + 0xa6e8,&pcStack_a8);
  uVar5 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_ENROLLMENT_DROPDOWN_LABEL",0);
  FUN_1006513c0(param_1 + 0xdcc0,uVar5);
  FUN_1001dd2c8(0x44480000,param_1);
  uStack_80 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  pcStack_a8 = thunk_FUN_1001de314;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  lStack_a0 = param_1;
  FUN_10001554c(param_1 + 0xddf8,&pcStack_a8);
  uStack_80 = FUN_100644a94("UI::EVENT_DROPDOWN_EXPANDED_CHANGED");
  pcStack_a8 = thunk_FUN_1001de39c;
  uStack_98 = 0;
  uStack_90 = 0;
  lStack_a0 = param_1;
  uStack_88 = param_1 + 0xddf0;
  FUN_10001554c(param_1 + 0xddf8,&pcStack_a8);
  uVar2 = DAT_101dbd4ac;
  uVar6 = 0;
  uVar11 = 0;
  lVar4 = 0x10990;
  lVar7 = 0x10ac0;
  lVar8 = 0x1085c;
  lVar10 = 0x10ac8;
  lStack_b8 = 0x127b0;
  lVar9 = 0x127b8;
  do {
    *(uint *)(param_1 + lVar8) =
         (*(uint *)(param_1 + lVar8) & 0xfffffff8 |
         *(uint *)(param_1 + lVar8) & 3 | (uVar6 >> 2 & 1) << 2) ^ 4;
    uVar5 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_TILE_LABEL",0);
    FUN_1006513c0(param_1 + lVar4,uVar5);
    uVar5 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_DISPLAY_LABEL",0);
    FUN_100185730(param_1 + lVar7,uVar5);
    uStack_80 = uVar2;
    uStack_d0 = uStack_d0 & 0xffffffff00000000 | uVar11;
    pcStack_a8 = FUN_1001dd3e4;
    uStack_98 = 0;
    uStack_90 = 0;
    lStack_a0 = param_1;
    uStack_88 = uStack_d0;
    FUN_10001554c(param_1 + lVar10,&pcStack_a8);
    uVar5 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_DISPLAY_LABEL",0);
    FUN_1001afd98(param_1 + lVar7,uVar5,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
    uVar5 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_URL_LABEL",0);
    FUN_100185730(param_1 + lStack_b8,uVar5);
    uStack_80 = uVar2;
    uStack_d8 = uStack_d8 & 0xffffffff00000000 | uVar11;
    pcStack_a8 = FUN_1001dd3ec;
    uStack_98 = 0;
    uStack_90 = 0;
    lStack_a0 = param_1;
    uStack_88 = uStack_d8;
    FUN_10001554c(param_1 + lVar9,&pcStack_a8);
    uVar5 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_URL_LABEL",0);
    FUN_1001afd98(param_1 + lStack_b8,uVar5,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
    uVar11 = uVar11 + 1;
    uVar6 = uVar6 + 4;
    lVar4 = lVar4 + 0x3d80;
    lVar7 = lVar7 + 0x3d80;
    lStack_b8 = lStack_b8 + 0x3d80;
    lVar8 = lVar8 + 0x3d80;
    lVar10 = lVar10 + 0x3d80;
    lVar9 = lVar9 + 0x3d80;
  } while (uVar11 != 3);
  uVar5 = FUN_1004e0150("MENU_GUILD_SEARCH_FILTER_APPLY_BUTTON_LABEL",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x446b0000,lVar1,0,uVar5,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_80 = DAT_101d91884;
  pcStack_a8 = thunk_FUN_1001de658;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  lStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x1c060,&pcStack_a8);
  return param_1;
}



/*
 * FUN_1001dd630
 * VA: 0x1001dd630 | Source: functions/1001d.c:9806
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 12
 * Callees: FUN_10001549c, FUN_100185730, FUN_10018e71c, FUN_10018e754, FUN_10018e8a8, FUN_1001b0f48, FUN_1001b0f68, FUN_1001b10bc (+3 more)
 * Callers: FUN_1001de254, FUN_1002372c8, FUN_100237fc8
 */
void FUN_1001dd630(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  string *this;
  string *this_00;
  string *psVar2;
  size_t sVar3;
  size_t sVar4;
  undefined8 *puVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  string *psVar9;
  char *pcVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  void *local_78;
  void *local_70;
  char local_61;
  
  *(undefined8 *)(param_1 + 0x1d6f8) = *param_2;
  this = (string *)(param_1 + 0x1d700);
  psVar9 = (string *)(param_2 + 1);
  std::string::operator=(this,psVar9);
  this_00 = (string *)(param_1 + 0x1d718);
  std::string::operator=(this_00,(string *)(param_2 + 4));
  std::string::operator=((string *)(param_1 + 0x1d730),(string *)(param_2 + 7));
  std::string::operator=((string *)(param_1 + 0x1d748),(string *)(param_2 + 10));
  std::string::operator=((string *)(param_1 + 0x1d760),(string *)(param_2 + 0xd));
  std::string::operator=((string *)(param_1 + 0x1d778),(string *)(param_2 + 0x10));
  std::string::operator=((string *)(param_1 + 0x1d790),(string *)(param_2 + 0x13));
  std::string::operator=((string *)(param_1 + 0x1d7a8),(string *)(param_2 + 0x16));
  std::string::operator=((string *)(param_1 + 0x1d7c0),(string *)(param_2 + 0x19));
  *(undefined1 *)(param_1 + 0x1d7d8) = *(undefined1 *)(param_2 + 0x1c);
  *(undefined1 *)(param_1 + 0x1d7e0) = 0;
  uVar8 = FUN_1004d2a5c(*(undefined4 *)param_2,0);
  FUN_1001b0f48(param_1 + 0xcb8,uVar8,1,1);
  bVar6 = *(byte *)((long)param_2 + 0x1f);
  uVar11 = (ulong)bVar6;
  sVar3 = param_2[2];
  if (-1 < (char)bVar6) {
    sVar3 = uVar11;
  }
  sVar4 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar4 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar3 == sVar4) {
    psVar2 = *(string **)psVar9;
    if (-1 < (char)bVar6) {
      psVar2 = psVar9;
    }
    pbVar13 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar13 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if ((sVar3 != 0) && (iVar7 = _memcmp(psVar2,pbVar13,sVar3), iVar7 != 0)) goto LAB_1001dd828;
    }
    else if (sVar3 != 0) {
      if ((uint)*pbVar13 == ((uint)*(string **)psVar9 & 0xff)) {
        pbVar12 = (byte *)((long)param_2 + 9);
        do {
          uVar11 = uVar11 - 1;
          pbVar13 = pbVar13 + 1;
          if (uVar11 == 0) goto LAB_1001dd844;
          bVar6 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar6 == *pbVar13);
      }
      goto LAB_1001dd828;
    }
LAB_1001dd844:
    FUN_10018e71c(param_1 + 0x43c8,0,1,1);
    psVar9 = (string *)FUN_10018e8a8(param_1 + 0x43c8);
    std::string::operator=(this,psVar9);
    *(undefined1 *)(param_1 + 0x1d7e0) = 1;
  }
  else {
LAB_1001dd828:
    FUN_10018e754(param_1 + 0x43c8,psVar9,1,1);
  }
  puVar1 = param_2 + 4;
  bVar6 = *(byte *)((long)param_2 + 0x37);
  uVar11 = (ulong)bVar6;
  sVar3 = param_2[5];
  if (-1 < (char)bVar6) {
    sVar3 = uVar11;
  }
  sVar4 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar4 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar3 == sVar4) {
    puVar5 = (void *)*puVar1;
    if (-1 < (char)bVar6) {
      puVar5 = puVar1;
    }
    pbVar13 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar13 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if ((sVar3 != 0) && (iVar7 = _memcmp(puVar5,pbVar13,sVar3), iVar7 != 0)) goto LAB_1001dd914;
    }
    else if (sVar3 != 0) {
      if ((uint)*pbVar13 == ((uint)(void *)*puVar1 & 0xff)) {
        pbVar12 = (byte *)((long)param_2 + 0x21);
        do {
          uVar11 = uVar11 - 1;
          pbVar13 = pbVar13 + 1;
          if (uVar11 == 0) goto LAB_1001dd930;
          bVar6 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar6 == *pbVar13);
      }
      goto LAB_1001dd914;
    }
LAB_1001dd930:
    FUN_1001b0f48(param_1 + 0x6fd0,0,1,1);
    psVar9 = (string *)FUN_1001b10bc(param_1 + 0x6fd0);
    std::string::operator=(this_00,psVar9);
    *(undefined1 *)(param_1 + 0x1d7e0) = 1;
  }
  else {
LAB_1001dd914:
    FUN_1001b0f68(param_1 + 0x6fd0,puVar1,1,1);
  }
  if (*(int *)((long)param_2 + 4) == -1) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)((long)param_2 + 4) / 3 + 1;
  }
  FUN_1001b0f48(param_1 + 0xa6e0,iVar7,1,1);
  if (*(char *)(param_2 + 0x1c) == '\0') {
    pcVar10 = "open";
  }
  else {
    pcVar10 = "invite_only";
  }
  FUN_10001549c(&local_78,pcVar10);
  FUN_10018e754(param_1 + 0xddf0,&local_78,1,1);
  if (local_61 < '\0') {
    operator_delete(local_78);
  }
  puVar1 = param_2 + 10;
  bVar6 = *(byte *)((long)param_2 + 0x67);
  uVar11 = (ulong)bVar6;
  sVar3 = param_2[0xb];
  if (-1 < (char)bVar6) {
    sVar3 = uVar11;
  }
  sVar4 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar4 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar3 == sVar4) {
    puVar5 = (void *)*puVar1;
    if (-1 < (char)bVar6) {
      puVar5 = puVar1;
    }
    pbVar13 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar13 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if ((sVar3 != 0) && (iVar7 = _memcmp(puVar5,pbVar13,sVar3), iVar7 != 0)) goto LAB_1001dda94;
    }
    else if (sVar3 != 0) {
      if ((uint)*pbVar13 == ((uint)(void *)*puVar1 & 0xff)) {
        pbVar12 = (byte *)((long)param_2 + 0x51);
        do {
          uVar11 = uVar11 - 1;
          pbVar13 = pbVar13 + 1;
          if (uVar11 == 0) goto LAB_1001ddac8;
          bVar6 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar6 == *pbVar13);
      }
      goto LAB_1001dda94;
    }
LAB_1001ddac8:
    uVar8 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_DISPLAY_LABEL",0);
    FUN_100185730(param_1 + 0x10ac0,uVar8);
  }
  else {
LAB_1001dda94:
    FUN_1004e3170(&local_78,puVar1);
    FUN_100185730(param_1 + 0x10ac0,&local_78);
    if (local_70 != (void *)0x0) {
      operator_delete__(local_70);
    }
  }
  puVar1 = param_2 + 0x13;
  bVar6 = *(byte *)((long)param_2 + 0xaf);
  uVar11 = (ulong)bVar6;
  sVar3 = param_2[0x14];
  if (-1 < (char)bVar6) {
    sVar3 = uVar11;
  }
  sVar4 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar4 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar3 == sVar4) {
    puVar5 = (void *)*puVar1;
    if (-1 < (char)bVar6) {
      puVar5 = puVar1;
    }
    pbVar13 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar13 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if ((sVar3 != 0) && (iVar7 = _memcmp(puVar5,pbVar13,sVar3), iVar7 != 0)) goto LAB_1001ddb88;
    }
    else if (sVar3 != 0) {
      if ((uint)*pbVar13 == ((uint)(void *)*puVar1 & 0xff)) {
        pbVar12 = (byte *)((long)param_2 + 0x99);
        do {
          uVar11 = uVar11 - 1;
          pbVar13 = pbVar13 + 1;
          if (uVar11 == 0) goto LAB_1001ddbbc;
          bVar6 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar6 == *pbVar13);
      }
      goto LAB_1001ddb88;
    }
LAB_1001ddbbc:
    uVar8 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_URL_LABEL",0);
    FUN_100185730(param_1 + 0x127b0,uVar8);
  }
  else {
LAB_1001ddb88:
    FUN_1004e3170(&local_78,puVar1);
    FUN_100185730(param_1 + 0x127b0,&local_78);
    if (local_70 != (void *)0x0) {
      operator_delete__(local_70);
    }
  }
  puVar1 = param_2 + 0xd;
  bVar6 = *(byte *)((long)param_2 + 0x7f);
  uVar11 = (ulong)bVar6;
  sVar3 = param_2[0xe];
  if (-1 < (char)bVar6) {
    sVar3 = uVar11;
  }
  sVar4 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar4 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar3 == sVar4) {
    puVar5 = (void *)*puVar1;
    if (-1 < (char)bVar6) {
      puVar5 = puVar1;
    }
    pbVar13 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar13 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if ((sVar3 != 0) && (iVar7 = _memcmp(puVar5,pbVar13,sVar3), iVar7 != 0)) goto LAB_1001ddc7c;
    }
    else if (sVar3 != 0) {
      if ((uint)*pbVar13 == ((uint)(void *)*puVar1 & 0xff)) {
        pbVar12 = (byte *)((long)param_2 + 0x69);
        do {
          uVar11 = uVar11 - 1;
          pbVar13 = pbVar13 + 1;
          if (uVar11 == 0) goto LAB_1001ddcb0;
          bVar6 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar6 == *pbVar13);
      }
      goto LAB_1001ddc7c;
    }
LAB_1001ddcb0:
    uVar8 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_DISPLAY_LABEL",0);
    FUN_100185730(param_1 + 0x14840,uVar8);
  }
  else {
LAB_1001ddc7c:
    FUN_1004e3170(&local_78,puVar1);
    FUN_100185730(param_1 + 0x14840,&local_78);
    if (local_70 != (void *)0x0) {
      operator_delete__(local_70);
    }
  }
  puVar1 = param_2 + 0x16;
  bVar6 = *(byte *)((long)param_2 + 199);
  uVar11 = (ulong)bVar6;
  sVar3 = param_2[0x17];
  if (-1 < (char)bVar6) {
    sVar3 = uVar11;
  }
  sVar4 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar4 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar3 == sVar4) {
    puVar5 = (void *)*puVar1;
    if (-1 < (char)bVar6) {
      puVar5 = puVar1;
    }
    pbVar13 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar13 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if ((sVar3 != 0) && (iVar7 = _memcmp(puVar5,pbVar13,sVar3), iVar7 != 0)) goto LAB_1001ddd70;
    }
    else if (sVar3 != 0) {
      if ((uint)*pbVar13 == ((uint)(void *)*puVar1 & 0xff)) {
        pbVar12 = (byte *)((long)param_2 + 0xb1);
        do {
          uVar11 = uVar11 - 1;
          pbVar13 = pbVar13 + 1;
          if (uVar11 == 0) goto LAB_1001ddda4;
          bVar6 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar6 == *pbVar13);
      }
      goto LAB_1001ddd70;
    }
LAB_1001ddda4:
    uVar8 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_URL_LABEL",0);
    FUN_100185730(param_1 + 0x16530,uVar8);
  }
  else {
LAB_1001ddd70:
    FUN_1004e3170(&local_78,puVar1);
    FUN_100185730(param_1 + 0x16530,&local_78);
    if (local_70 != (void *)0x0) {
      operator_delete__(local_70);
    }
  }
  puVar1 = param_2 + 0x10;
  bVar6 = *(byte *)((long)param_2 + 0x97);
  uVar11 = (ulong)bVar6;
  sVar3 = param_2[0x11];
  if (-1 < (char)bVar6) {
    sVar3 = uVar11;
  }
  sVar4 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar4 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar3 == sVar4) {
    puVar5 = (void *)*puVar1;
    if (-1 < (char)bVar6) {
      puVar5 = puVar1;
    }
    pbVar13 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar13 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if ((sVar3 != 0) && (iVar7 = _memcmp(puVar5,pbVar13,sVar3), iVar7 != 0)) goto LAB_1001dde64;
    }
    else if (sVar3 != 0) {
      if ((uint)*pbVar13 == ((uint)(void *)*puVar1 & 0xff)) {
        pbVar12 = (byte *)((long)param_2 + 0x81);
        do {
          uVar11 = uVar11 - 1;
          pbVar13 = pbVar13 + 1;
          if (uVar11 == 0) goto LAB_1001dde98;
          bVar6 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar6 == *pbVar13);
      }
      goto LAB_1001dde64;
    }
LAB_1001dde98:
    uVar8 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_DISPLAY_LABEL",0);
    FUN_100185730(param_1 + 0x185c0,uVar8);
  }
  else {
LAB_1001dde64:
    FUN_1004e3170(&local_78,puVar1);
    FUN_100185730(param_1 + 0x185c0,&local_78);
    if (local_70 != (void *)0x0) {
      operator_delete__(local_70);
    }
  }
  puVar1 = param_2 + 0x19;
  bVar6 = *(byte *)((long)param_2 + 0xdf);
  uVar11 = (ulong)bVar6;
  sVar3 = param_2[0x1a];
  if (-1 < (char)bVar6) {
    sVar3 = uVar11;
  }
  sVar4 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar4 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar3 == sVar4) {
    puVar5 = (void *)*puVar1;
    if (-1 < (char)bVar6) {
      puVar5 = puVar1;
    }
    pbVar13 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar13 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if ((sVar3 == 0) || (iVar7 = _memcmp(puVar5,pbVar13,sVar3), iVar7 == 0)) goto LAB_1001ddf8c;
    }
    else {
      if (sVar3 == 0) {
LAB_1001ddf8c:
        uVar8 = FUN_1004e0150("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_URL_LABEL",0);
        FUN_100185730(param_1 + 0x1a2b0,uVar8);
        goto LAB_1001ddfb4;
      }
      if ((uint)*pbVar13 == ((uint)(void *)*puVar1 & 0xff)) {
        pbVar12 = (byte *)((long)param_2 + 0xc9);
        do {
          uVar11 = uVar11 - 1;
          pbVar13 = pbVar13 + 1;
          if (uVar11 == 0) goto LAB_1001ddf8c;
          bVar6 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar6 == *pbVar13);
      }
    }
  }
  FUN_1004e3170(&local_78,puVar1);
  FUN_100185730(param_1 + 0x1a2b0,&local_78);
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
  }
LAB_1001ddfb4:
  *(undefined8 *)(param_1 + 0x1d610) = *(undefined8 *)(param_1 + 0x1d6f8);
  std::string::operator=((string *)(param_1 + 0x1d618),this);
  std::string::operator=((string *)(param_1 + 0x1d630),this_00);
  std::string::operator=((string *)(param_1 + 0x1d648),(string *)(param_1 + 0x1d730));
  std::string::operator=((string *)(param_1 + 0x1d660),(string *)(param_1 + 0x1d748));
  std::string::operator=((string *)(param_1 + 0x1d678),(string *)(param_1 + 0x1d760));
  std::string::operator=((string *)(param_1 + 0x1d690),(string *)(param_1 + 0x1d778));
  std::string::operator=((string *)(param_1 + 0x1d6a8),(string *)(param_1 + 0x1d790));
  std::string::operator=((string *)(param_1 + 0x1d6c0),(string *)(param_1 + 0x1d7a8));
  std::string::operator=((string *)(param_1 + 0x1d6d8),(string *)(param_1 + 0x1d7c0));
  *(undefined1 *)(param_1 + 0x1d6f0) = *(undefined1 *)(param_1 + 0x1d7d8);
  return;
}



/*
 * FUN_1001f0968
 * VA: 0x1001f0968 | Source: functions/1001f.c:709
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 7
 * Callees: FUN_1000153b4, FUN_1000165f0, FUN_10013078c, FUN_10016c310, FUN_1001f0a90, FUN_1004e0150, FUN_100644aec, FUN_100644c34 (+1 more)
 * Callers: FUN_1001f090c, FUN_1001f0bc0
 */
void FUN_1001f0968(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_208 [32];
  undefined1 auStack_1e8 [16];
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1c8 [240];
  string asStack_d8 [152];
  undefined4 local_40;
  
  iVar1 = FUN_1001f0a90();
  if (iVar1 != 0) {
    FUN_1000165f0(param_1 + 0x98,1);
    if (*(char *)(param_1 + 0xbc) != '\0') {
      thunk_FUN_100253c74(auStack_1e8);
      uVar2 = FUN_1004e0150("MENU_GUILD_TAB_JOIN_BONUS_POPUP_TITLE",0);
      FUN_1000153b4(auStack_1e8,uVar2);
      uVar2 = FUN_1004e0150("MENU_GUILD_TAB_JOIN_BONUS_POPUP_DIALOG",0);
      FUN_1000153b4(auStack_1d8,uVar2);
      uVar2 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1000153b4(auStack_1c8,uVar2);
      std::string::operator=(asStack_d8,(string *)&DAT_101e43a90);
      local_40 = 0x3fd9999a;
      FUN_100644aec(auStack_208,DAT_101d2365c,auStack_1e8);
      FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_208,1);
      FUN_10013078c("guildJoinBonus",1);
      FUN_10016c310(auStack_1e8);
    }
    return;
  }
  FUN_1000165f0(param_1 + 0x98,0);
  return;
}



/*
 * thunk_FUN_1001f0968
 * VA: 0xthunk_1001f0968 | Source: functions/1001f.c:841
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 7
 * Callees: FUN_1000153b4, FUN_1000165f0, FUN_10013078c, FUN_10016c310, FUN_1001f0a90, FUN_1004e0150, FUN_100644aec, FUN_100644c34 (+1 more)
 */
void thunk_FUN_1001f0968(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_208 [32];
  undefined1 auStack_1e8 [16];
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1c8 [240];
  string asStack_d8 [152];
  undefined4 uStack_40;
  
  iVar1 = FUN_1001f0a90();
  if (iVar1 != 0) {
    FUN_1000165f0(param_1 + 0x98,1);
    if (*(char *)(param_1 + 0xbc) != '\0') {
      thunk_FUN_100253c74(auStack_1e8);
      uVar2 = FUN_1004e0150("MENU_GUILD_TAB_JOIN_BONUS_POPUP_TITLE",0);
      FUN_1000153b4(auStack_1e8,uVar2);
      uVar2 = FUN_1004e0150("MENU_GUILD_TAB_JOIN_BONUS_POPUP_DIALOG",0);
      FUN_1000153b4(auStack_1d8,uVar2);
      uVar2 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1000153b4(auStack_1c8,uVar2);
      std::string::operator=(asStack_d8,(string *)&DAT_101e43a90);
      uStack_40 = 0x3fd9999a;
      FUN_100644aec(auStack_208,DAT_101d2365c,auStack_1e8);
      FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_208,1);
      FUN_10013078c("guildJoinBonus",1);
      FUN_10016c310(auStack_1e8);
    }
    return;
  }
  FUN_1000165f0(param_1 + 0x98,0);
  return;
}



/*
 * FUN_100209ff0
 * social panel inner function — actual work
 * VA: 0x100209ff0 | Source: functions/10020.c:10667
 * Dylib: Layer 8
 * Notes: Called directly by dylib hook bypassing gate in FUN_10020a500.
 * CE-gate: NO | Guest-gate: NO
 * Callees: FUN_1002dbb5c, FUN_10032834c, FUN_100328708, FUN_100328764, FUN_100328d7c, FUN_100328d84, FUN_100328e40
 * Callers: FUN_100209f00, FUN_10020a560
 */
void FUN_100209ff0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = FUN_10032834c();
  uVar2 = FUN_100328708(uVar1,*(undefined8 *)(param_1 + 0x48));
  uVar3 = FUN_100328764(uVar1,*(undefined8 *)(param_1 + 0x48));
  uVar4 = FUN_100328d7c(uVar1);
  uVar5 = FUN_100328d84(uVar1,*(undefined8 *)(param_1 + 0x48));
  uVar1 = FUN_100328e40(uVar1,*(undefined8 *)(param_1 + 0x48));
  FUN_1002dbb5c(*(undefined8 *)(param_1 + 8),uVar3,uVar2,uVar4,uVar5,uVar1);
  return;
}



/*
 * FUN_10020a500
 * social panel feature — returns early when gate=1
 * VA: 0x10020a500 | Source: functions/10020.c:10956
 * Fptr: __DATA+0x1471108
 * Dylib: Layer 8
 * Notes: Original returns early. Dylib calls inner function FUN_100209ff0 directly.
 * CE-gate: NO | Guest-gate: NO
 * Callees: FUN_10001549c, FUN_10032834c, FUN_100328d0c
 * Callers: FUN_10020a558
 */
void FUN_10020a500(long param_1)

{
  undefined8 uVar1;
  void *local_38 [2];
  char local_21;
  
  uVar1 = FUN_10032834c();
  FUN_10001549c(local_38,**(undefined8 **)(param_1 + 0x48));
  FUN_100328d0c(uVar1,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}



/*
 * FUN_10020b540
 * VA: 0x10020b540 | Source: functions/10020.c:12086
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 5
 * Callees: FUN_1000153b4, FUN_10001549c, FUN_10003330c, FUN_10003c048, FUN_10003c1ec, FUN_100111860, FUN_100126c88, FUN_1001cefb8 (+9 more)
 */
void FUN_10020b540(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_148 [8];
  void *local_140;
  undefined1 auStack_138 [8];
  void *local_130;
  void *local_128;
  void *local_120;
  undefined7 local_118;
  char cStack_111;
  char local_101;
  undefined4 local_100;
  undefined8 local_fc;
  undefined **local_f0;
  undefined1 auStack_e8 [16];
  long local_d8;
  code *pcStack_d0;
  long local_c0;
  undefined8 local_a0;
  void *local_98;
  void *local_90;
  char local_79;
  undefined4 local_60;
  undefined4 local_5c;
  
  lVar2 = FUN_100111860(param_1 + 0x40);
  if (lVar2 != 0) {
    local_d8 = param_1;
    if (*(int *)(lVar2 + 0xac) == 3) {
      thunk_FUN_1001cd434(&local_f0);
      uVar3 = FUN_1004e0150("MENU_FRIENDS_DELETE_TITLE",0);
      thunk_FUN_1004e439c(&local_128,uVar3);
      FUN_10003330c(&local_118,&DAT_101d91198);
      local_100 = 0;
      local_fc = 0x41a00000;
      FUN_10003c048(auStack_e8,&local_128);
      if (local_101 < '\0') {
        operator_delete((void *)CONCAT17(cStack_111,local_118));
      }
      if (local_120 != (void *)0x0) {
        operator_delete__(local_120);
      }
      uVar3 = FUN_1004e0150("MENU_FRIENDS_DELETE_DESCRIPTION",0);
      thunk_FUN_1004e439c(auStack_138,uVar3);
      FUN_1004e3120(&local_128,"[PLAYER_NAME]");
      FUN_1004e3170(auStack_148,param_1 + 0x58);
      FUN_1004e3bc4(auStack_138,0,&local_128,auStack_148);
      if (local_140 != (void *)0x0) {
        operator_delete__(local_140);
      }
      if (local_120 != (void *)0x0) {
        operator_delete__(local_120);
      }
      thunk_FUN_1004e439c(&local_128,auStack_138);
      FUN_10003330c(&local_118,&DAT_101d91198);
      local_100 = 1;
      local_fc = 0x41a00000;
      FUN_10003c048(auStack_e8,&local_128);
      if (local_101 < '\0') {
        operator_delete((void *)CONCAT17(cStack_111,local_118));
      }
      if (local_120 != (void *)0x0) {
        operator_delete__(local_120);
      }
      pcStack_d0 = FUN_10020b910;
      uVar3 = FUN_1004e0150("MENU_FRIENDS_DELETE_CONFIRM",0);
      FUN_1000153b4(&local_a0,uVar3);
      local_c0 = *(long *)(param_1 + 8) + 0x1fa8;
      local_60 = 0x3f400000;
      iVar1 = FUN_100126c88();
      local_5c = 0x44160000;
      if (iVar1 == 0) {
        local_5c = 0x43e10000;
      }
      lVar2 = *(long *)(param_1 + 8);
      FUN_10001549c(&local_128,"deleteFriend");
      FUN_1001cefb8(lVar2 + 0x3dd8,&local_128,&local_f0);
      if (cStack_111 < '\0') {
        operator_delete(local_128);
      }
      if (local_130 != (void *)0x0) {
        operator_delete__(local_130);
      }
    }
    else {
      thunk_FUN_1001cd434(&local_f0);
      uVar3 = FUN_1004e0150("MENU_FRIENDS_ADD_FRIEND",0);
      thunk_FUN_1004e439c(&local_128,uVar3);
      FUN_10003330c(&local_118,&DAT_101d91198);
      local_100 = 0;
      local_fc = 0x41a00000;
      FUN_10003c048(auStack_e8,&local_128);
      if (local_101 < '\0') {
        operator_delete((void *)CONCAT17(cStack_111,local_118));
      }
      if (local_120 != (void *)0x0) {
        operator_delete__(local_120);
      }
      thunk_FUN_1004e439c(&local_128,&DAT_101d91650);
      FUN_10003330c(&local_118,&DAT_101d91198);
      local_100 = 1;
      local_fc = 0x41a00000;
      FUN_10003c048(auStack_e8,&local_128);
      if (local_101 < '\0') {
        operator_delete((void *)CONCAT17(cStack_111,local_118));
      }
      if (local_120 != (void *)0x0) {
        operator_delete__(local_120);
      }
      pcStack_d0 = thunk_FUN_10020c964;
      uVar3 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1000153b4(&local_a0,uVar3);
      local_c0 = *(long *)(param_1 + 8) + 0x1fa8;
      local_60 = 0x3f400000;
      iVar1 = FUN_100126c88();
      local_5c = 0x44160000;
      if (iVar1 == 0) {
        local_5c = 0x43e10000;
      }
      lVar2 = *(long *)(param_1 + 8);
      FUN_10001549c(&local_128,"addFriend");
      FUN_1001cefb8(lVar2 + 0x3dd8,&local_128,&local_f0);
      if (cStack_111 < '\0') {
        operator_delete(local_128);
      }
    }
    local_f0 = &PTR_FUN_1014666e0;
    if (local_79 < '\0') {
      operator_delete(local_90);
    }
    if (local_98 != (void *)0x0) {
      operator_delete__(local_98);
      local_a0 = 0;
      local_98 = (void *)0x0;
    }
    FUN_10003c1ec(auStack_e8,1);
  }
  return;
}



/*
 * FUN_10020b93c
 * VA: 0x10020b93c | Source: functions/10020.c:12264
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 5
 * Callees: FUN_1000153b4, FUN_10001549c, FUN_10003330c, FUN_10003c048, FUN_10003c1ec, FUN_100126c88, FUN_10015d3ec, FUN_1001634c4 (+10 more)
 */
void FUN_10020b93c(long param_1)

{
  undefined8 *puVar1;
  size_t sVar2;
  size_t sVar3;
  size_t sVar4;
  undefined8 *puVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  void *pvVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  long lVar15;
  size_t sVar16;
  ulong uVar17;
  size_t sVar18;
  undefined1 auStack_178 [8];
  void *local_170;
  undefined1 auStack_168 [8];
  void *local_160;
  void *local_158;
  void *local_150;
  undefined7 local_148;
  char cStack_141;
  char local_131;
  undefined4 local_130;
  undefined8 local_12c;
  undefined **local_120;
  undefined1 auStack_118 [16];
  long local_108;
  code *pcStack_100;
  long local_f0;
  undefined8 local_d0;
  void *local_c8;
  void *local_c0;
  char local_a9;
  undefined4 local_90;
  undefined4 local_8c;
  
  bVar7 = DAT_101d911a8._7_1_;
  sVar4 = DAT_101d911a0;
  if (*(char *)(param_1 + 0xa1) == '\0') {
    sVar16 = (size_t)*(byte *)(param_1 + 0x87);
    sVar18 = *(size_t *)(param_1 + 0x78);
    uVar17 = sVar16;
  }
  else {
    sVar16 = (size_t)*(byte *)(param_1 + 0x87);
    uVar8 = (uint)(char)*(byte *)(param_1 + 0x87);
    uVar17 = (ulong)uVar8;
    sVar18 = *(size_t *)(param_1 + 0x78);
    sVar2 = sVar18;
    if (-1 < (int)uVar8) {
      sVar2 = sVar16;
    }
    sVar3 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar3 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar2 == sVar3) {
      pvVar11 = *(void **)(param_1 + 0x70);
      puVar1 = pvVar11;
      if (-1 < (int)uVar8) {
        puVar1 = (undefined8 *)(param_1 + 0x70);
      }
      pbVar14 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar14 = (byte *)&DAT_101d91198;
      }
      if ((int)uVar8 < 0) {
        if ((sVar2 == 0) || (iVar9 = _memcmp(puVar1,pbVar14,sVar2), iVar9 == 0)) goto LAB_10020bae0;
      }
      else {
        if (sVar2 == 0) {
LAB_10020bae0:
          thunk_FUN_1001cd434(&local_120);
          uVar10 = FUN_1004e0150("MENU_FRIENDS_INVITE_GUILD_DIALOG_TITLE",0);
          thunk_FUN_1004e439c(&local_158,uVar10);
          FUN_10003330c(&local_148,&DAT_101d91198);
          local_130 = 0;
          local_12c = 0x41a00000;
          FUN_10003c048(auStack_118,&local_158);
          if (local_131 < '\0') {
            operator_delete((void *)CONCAT17(cStack_141,local_148));
          }
          if (local_150 != (void *)0x0) {
            operator_delete__(local_150);
          }
          uVar10 = FUN_1004e0150("MENU_FRIENDS_INVITE_GUILD_DIALOG_TEXT",0);
          thunk_FUN_1004e439c(auStack_168,uVar10);
          FUN_1004e3120(&local_158,"[PLAYER_NAME]");
          FUN_1004e3170(auStack_178,param_1 + 0x58);
          FUN_1004e3bc4(auStack_168,0,&local_158,auStack_178);
          if (local_170 != (void *)0x0) {
            operator_delete__(local_170);
          }
          if (local_150 != (void *)0x0) {
            operator_delete__(local_150);
          }
          thunk_FUN_1004e439c(&local_158,auStack_168);
          FUN_10003330c(&local_148,&DAT_101d91198);
          local_130 = 1;
          local_12c = 0x41a00000;
          FUN_10003c048(auStack_118,&local_158);
          if (local_131 < '\0') {
            operator_delete((void *)CONCAT17(cStack_141,local_148));
          }
          if (local_150 != (void *)0x0) {
            operator_delete__(local_150);
          }
          pcStack_100 = thunk_FUN_10020c7b4;
          local_108 = param_1;
          uVar10 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
          FUN_1000153b4(&local_d0,uVar10);
          local_f0 = *(long *)(param_1 + 8) + 0x808;
          local_90 = 0x3f400000;
          iVar9 = FUN_100126c88();
          local_8c = 0x44160000;
          if (iVar9 == 0) {
            local_8c = 0x43e10000;
          }
          lVar15 = *(long *)(param_1 + 8);
          FUN_10001549c(&local_158,"guildInvite");
          FUN_1001cefb8(lVar15 + 0x3dd8,&local_158,&local_120);
          if (cStack_141 < '\0') {
            operator_delete(local_158);
          }
          if (local_160 != (void *)0x0) {
            operator_delete__(local_160);
          }
          local_120 = &PTR_FUN_1014666e0;
          if (local_a9 < '\0') {
            operator_delete(local_c0);
          }
          if (local_c8 != (void *)0x0) {
            operator_delete__(local_c8);
            local_d0 = 0;
            local_c8 = (void *)0x0;
          }
          FUN_10003c1ec(auStack_118,1);
          return;
        }
        if ((uint)*pbVar14 == ((uint)pvVar11 & 0xff)) {
          pbVar13 = (byte *)(param_1 + 0x71);
          uVar12 = sVar16;
          do {
            uVar12 = uVar12 - 1;
            pbVar14 = pbVar14 + 1;
            if (uVar12 == 0) goto LAB_10020bae0;
            bVar6 = *pbVar13;
            pbVar13 = pbVar13 + 1;
          } while (bVar6 == *pbVar14);
        }
      }
    }
  }
  puVar1 = (undefined8 *)(param_1 + 0x70);
  if (-1 < (char)uVar17) {
    sVar18 = sVar16;
  }
  if (-1 < (char)bVar7) {
    sVar4 = (ulong)bVar7;
  }
  if (sVar18 == sVar4) {
    puVar5 = (void *)*puVar1;
    if (-1 < (char)uVar17) {
      puVar5 = puVar1;
    }
    pbVar14 = DAT_101d91198;
    if (-1 < (char)bVar7) {
      pbVar14 = (byte *)&DAT_101d91198;
    }
    if (((uint)uVar17 >> 7 & 1) == 0) {
      if (sVar18 == 0) {
        return;
      }
      if ((uint)*pbVar14 == ((uint)(void *)*puVar1 & 0xff)) {
        pbVar13 = (byte *)(param_1 + 0x71);
        do {
          sVar16 = sVar16 - 1;
          pbVar14 = pbVar14 + 1;
          if (sVar16 == 0) {
            return;
          }
          bVar7 = *pbVar13;
          pbVar13 = pbVar13 + 1;
        } while (bVar7 == *pbVar14);
      }
    }
    else {
      if (sVar18 == 0) {
        return;
      }
      iVar9 = _memcmp(puVar5,pbVar14,sVar18);
      if (iVar9 == 0) {
        return;
      }
    }
  }
  uVar10 = FUN_10015d3ec();
  FUN_1001634c4(uVar10,puVar1,1);
  FUN_10021a8ec(puVar1,0);
  return;
}



/*
 * FUN_10020bd1c
 * VA: 0x10020bd1c | Source: functions/10020.c:12487
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 5
 * Callees: FUN_1000153b4, FUN_10001549c, FUN_10003330c, FUN_10003c048, FUN_10003c1ec, FUN_100126c88, FUN_10015d3ec, FUN_1001635bc (+10 more)
 */
void FUN_10020bd1c(long param_1)

{
  undefined8 *puVar1;
  size_t sVar2;
  size_t sVar3;
  size_t sVar4;
  undefined8 *puVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  void *pvVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  long lVar15;
  size_t sVar16;
  ulong uVar17;
  size_t sVar18;
  undefined1 auStack_178 [8];
  void *local_170;
  undefined1 auStack_168 [8];
  void *local_160;
  void *local_158;
  void *local_150;
  undefined7 local_148;
  char cStack_141;
  char local_131;
  undefined4 local_130;
  undefined8 local_12c;
  undefined **local_120;
  undefined1 auStack_118 [16];
  long local_108;
  code *pcStack_100;
  long local_f0;
  undefined8 local_d0;
  void *local_c8;
  void *local_c0;
  char local_a9;
  undefined4 local_90;
  undefined4 local_8c;
  
  bVar7 = DAT_101d911a8._7_1_;
  sVar4 = DAT_101d911a0;
  if (*(char *)(param_1 + 0xa2) == '\0') {
    sVar16 = (size_t)*(byte *)(param_1 + 0x9f);
    sVar18 = *(size_t *)(param_1 + 0x90);
    uVar17 = sVar16;
  }
  else {
    sVar16 = (size_t)*(byte *)(param_1 + 0x9f);
    uVar8 = (uint)(char)*(byte *)(param_1 + 0x9f);
    uVar17 = (ulong)uVar8;
    sVar18 = *(size_t *)(param_1 + 0x90);
    sVar2 = sVar18;
    if (-1 < (int)uVar8) {
      sVar2 = sVar16;
    }
    sVar3 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar3 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar2 == sVar3) {
      pvVar11 = *(void **)(param_1 + 0x88);
      puVar1 = pvVar11;
      if (-1 < (int)uVar8) {
        puVar1 = (undefined8 *)(param_1 + 0x88);
      }
      pbVar14 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar14 = (byte *)&DAT_101d91198;
      }
      if ((int)uVar8 < 0) {
        if ((sVar2 == 0) || (iVar9 = _memcmp(puVar1,pbVar14,sVar2), iVar9 == 0)) goto LAB_10020bebc;
      }
      else {
        if (sVar2 == 0) {
LAB_10020bebc:
          thunk_FUN_1001cd434(&local_120);
          uVar10 = FUN_1004e0150("MENU_FRIENDS_INVITE_USER_TEAM_DIALOG_TITLE",0);
          thunk_FUN_1004e439c(&local_158,uVar10);
          FUN_10003330c(&local_148,&DAT_101d91198);
          local_130 = 0;
          local_12c = 0x41a00000;
          FUN_10003c048(auStack_118,&local_158);
          if (local_131 < '\0') {
            operator_delete((void *)CONCAT17(cStack_141,local_148));
          }
          if (local_150 != (void *)0x0) {
            operator_delete__(local_150);
          }
          uVar10 = FUN_1004e0150("MENU_FRIENDS_INVITE_USER_TEAM_DIALOG_TEXT",0);
          thunk_FUN_1004e439c(auStack_168,uVar10);
          FUN_1004e3120(&local_158,"[PLAYER_NAME]");
          FUN_1004e3170(auStack_178,param_1 + 0x58);
          FUN_1004e3bc4(auStack_168,0,&local_158,auStack_178);
          if (local_170 != (void *)0x0) {
            operator_delete__(local_170);
          }
          if (local_150 != (void *)0x0) {
            operator_delete__(local_150);
          }
          thunk_FUN_1004e439c(&local_158,auStack_168);
          FUN_10003330c(&local_148,&DAT_101d91198);
          local_130 = 1;
          local_12c = 0x41a00000;
          FUN_10003c048(auStack_118,&local_158);
          if (local_131 < '\0') {
            operator_delete((void *)CONCAT17(cStack_141,local_148));
          }
          if (local_150 != (void *)0x0) {
            operator_delete__(local_150);
          }
          pcStack_100 = thunk_FUN_10020c88c;
          local_108 = param_1;
          uVar10 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
          FUN_1000153b4(&local_d0,uVar10);
          local_f0 = *(long *)(param_1 + 8) + 0x13d8;
          local_90 = 0x3f400000;
          iVar9 = FUN_100126c88();
          local_8c = 0x44160000;
          if (iVar9 == 0) {
            local_8c = 0x43e10000;
          }
          lVar15 = *(long *)(param_1 + 8);
          FUN_10001549c(&local_158,"teamInvite");
          FUN_1001cefb8(lVar15 + 0x3dd8,&local_158,&local_120);
          if (cStack_141 < '\0') {
            operator_delete(local_158);
          }
          if (local_160 != (void *)0x0) {
            operator_delete__(local_160);
          }
          local_120 = &PTR_FUN_1014666e0;
          if (local_a9 < '\0') {
            operator_delete(local_c0);
          }
          if (local_c8 != (void *)0x0) {
            operator_delete__(local_c8);
            local_d0 = 0;
            local_c8 = (void *)0x0;
          }
          FUN_10003c1ec(auStack_118,1);
          return;
        }
        if ((uint)*pbVar14 == ((uint)pvVar11 & 0xff)) {
          pbVar13 = (byte *)(param_1 + 0x89);
          uVar12 = sVar16;
          do {
            uVar12 = uVar12 - 1;
            pbVar14 = pbVar14 + 1;
            if (uVar12 == 0) goto LAB_10020bebc;
            bVar6 = *pbVar13;
            pbVar13 = pbVar13 + 1;
          } while (bVar6 == *pbVar14);
        }
      }
    }
  }
  puVar1 = (undefined8 *)(param_1 + 0x88);
  if (-1 < (char)uVar17) {
    sVar18 = sVar16;
  }
  if (-1 < (char)bVar7) {
    sVar4 = (ulong)bVar7;
  }
  if (sVar18 == sVar4) {
    puVar5 = (void *)*puVar1;
    if (-1 < (char)uVar17) {
      puVar5 = puVar1;
    }
    pbVar14 = DAT_101d91198;
    if (-1 < (char)bVar7) {
      pbVar14 = (byte *)&DAT_101d91198;
    }
    if (((uint)uVar17 >> 7 & 1) == 0) {
      if (sVar18 == 0) {
        return;
      }
      if ((uint)*pbVar14 == ((uint)(void *)*puVar1 & 0xff)) {
        pbVar13 = (byte *)(param_1 + 0x89);
        do {
          sVar16 = sVar16 - 1;
          pbVar14 = pbVar14 + 1;
          if (sVar16 == 0) {
            return;
          }
          bVar7 = *pbVar13;
          pbVar13 = pbVar13 + 1;
        } while (bVar7 == *pbVar14);
      }
    }
    else {
      if (sVar18 == 0) {
        return;
      }
      iVar9 = _memcmp(puVar5,pbVar14,sVar18);
      if (iVar9 == 0) {
        return;
      }
    }
  }
  uVar10 = FUN_10015d3ec();
  FUN_1001635bc(uVar10,puVar1,1);
  FUN_100224084(puVar1);
  return;
}



/*
 * FUN_10020cfb8
 * small social panel constructor (thunked)
 * VA: 0x10020cfb8 | Source: functions/10020.c:13891
 * Dylib: Layer 6
 * Notes: Creates social panel stored at menuObj+0xf0. CE-gated (never registered in CE).
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 6
 * Callees: FUN_10003330c, FUN_1001116f8, FUN_10014f4a0, FUN_1001d9594, FUN_1001e7abc, FUN_1002e133c, FUN_1002e1420, FUN_1004e0150 (+12 more)
 */
undefined8 * FUN_10020cfb8(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  void *local_38;
  
  *param_1 = &PTR____cxa_pure_virtual_101471f78;
  operator_new(0x3cf8);
  lVar1 = thunk_FUN_1002e0920();
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  param_1[1] = lVar1;
  param_1[2] = &DAT_101471ee0;
  puVar3 = param_1 + 3;
  *puVar3 = &PTR_FUN_101471f38;
  param_1[4] = 0;
  FUN_1004f0a20(param_1 + 5);
  FUN_10014f4a0(param_1 + 8);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = &PTR_FUN_1014719a8;
  param_1[2] = &PTR_FUN_101471a68;
  *puVar3 = &PTR_FUN_101471ac0;
  param_1[5] = &PTR_FUN_101471b00;
  param_1[8] = &PTR_FUN_101471b30;
  param_1[0xb] = &PTR_FUN_101471ec8;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  thunk_FUN_100016500(param_1 + 0x14,"FRIENDS.*",1);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x18] = param_1 + 0x19;
  FUN_1001e7abc(param_1 + 0x1b);
  FUN_1004e313c(param_1 + 0x1c);
  FUN_10003330c(param_1 + 0x1e,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x21,&DAT_101d91198);
  *(undefined1 *)(param_1 + 0x24) = 0;
  FUN_10003330c(param_1 + 0x25,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x28,&DAT_101d91198);
  *(undefined4 *)((long)param_1 + 0x15b) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  FUN_1001116f8(puVar3);
  uVar4 = param_1[1];
  uVar2 = FUN_1004e0150("MENU_FRIENDS_REQUESTS_TITLE",0);
  FUN_1004e3120(auStack_40,"REQUESTS");
  FUN_1002e133c(uVar4,uVar2,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  uVar4 = param_1[1];
  uVar2 = FUN_1004e0150("MENU_FRIENDS_RECENTS_TITLE",0);
  FUN_1004e3120(auStack_40,"RECENTS");
  FUN_1002e133c(uVar4,uVar2,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  uVar4 = param_1[1];
  uVar2 = FUN_1004e0150("MENU_TEAM_TITLE",0);
  FUN_1004e3120(auStack_40,"TEAM");
  FUN_1002e133c(uVar4,uVar2,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  uVar4 = param_1[1];
  uVar2 = FUN_1004e0150("MENU_GUILD_TITLE",0);
  FUN_1004e3120(auStack_40,"GUILD");
  FUN_1002e133c(uVar4,uVar2,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  uVar4 = param_1[1];
  uVar2 = FUN_1004e0150("MENU_FRIENDS_ONLINE_TITLE",0);
  FUN_1004e3120(auStack_40,"ONLINE_FRIENDS");
  FUN_1002e133c(uVar4,uVar2,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  uVar4 = param_1[1];
  uVar2 = FUN_1004e0150("MENU_FRIENDS_OFFLINE_TITLE",0);
  FUN_1004e3120(auStack_40,"OFFLINE_FRIENDS");
  FUN_1002e133c(uVar4,uVar2,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  uVar2 = FUN_1002e1420(param_1[1],"TEAM");
  FUN_1001d9594(uVar2,1);
  uVar2 = FUN_1002e1420(param_1[1],"GUILD");
  FUN_1001d9594(uVar2,1);
  uVar2 = FUN_1002e1420(param_1[1],"ONLINE_FRIENDS");
  FUN_1001d9594(uVar2,1);
  return param_1;
}



/*
 * thunk_FUN_10020cfb8
 * VA: 0xthunk_10020cfb8 | Source: functions/10020.c:13994
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 6
 * Callees: FUN_10003330c, FUN_1001116f8, FUN_10014f4a0, FUN_1001d9594, FUN_1001e7abc, FUN_1002e133c, FUN_1002e1420, FUN_1004e0150 (+12 more)
 * Callers: FUN_1001fd570, thunk_FUN_1001fd570
 */
undefined8 * thunk_FUN_10020cfb8(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  void *pvStack_38;
  
  *param_1 = &PTR____cxa_pure_virtual_101471f78;
  operator_new(0x3cf8);
  lVar1 = thunk_FUN_1002e0920();
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  param_1[1] = lVar1;
  param_1[2] = &DAT_101471ee0;
  puVar3 = param_1 + 3;
  *puVar3 = &PTR_FUN_101471f38;
  param_1[4] = 0;
  FUN_1004f0a20(param_1 + 5);
  FUN_10014f4a0(param_1 + 8);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = &PTR_FUN_1014719a8;
  param_1[2] = &PTR_FUN_101471a68;
  *puVar3 = &PTR_FUN_101471ac0;
  param_1[5] = &PTR_FUN_101471b00;
  param_1[8] = &PTR_FUN_101471b30;
  param_1[0xb] = &PTR_FUN_101471ec8;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  thunk_FUN_100016500(param_1 + 0x14,"FRIENDS.*",1);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x18] = param_1 + 0x19;
  FUN_1001e7abc(param_1 + 0x1b);
  FUN_1004e313c(param_1 + 0x1c);
  FUN_10003330c(param_1 + 0x1e,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x21,&DAT_101d91198);
  *(undefined1 *)(param_1 + 0x24) = 0;
  FUN_10003330c(param_1 + 0x25,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x28,&DAT_101d91198);
  *(undefined4 *)((long)param_1 + 0x15b) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  FUN_1001116f8(puVar3);
  uVar4 = param_1[1];
  uVar2 = FUN_1004e0150("MENU_FRIENDS_REQUESTS_TITLE",0);
  FUN_1004e3120(auStack_40,"REQUESTS");
  FUN_1002e133c(uVar4,uVar2,auStack_40);
  if (pvStack_38 != (void *)0x0) {
    operator_delete__(pvStack_38);
  }
  uVar4 = param_1[1];
  uVar2 = FUN_1004e0150("MENU_FRIENDS_RECENTS_TITLE",0);
  FUN_1004e3120(auStack_40,"RECENTS");
  FUN_1002e133c(uVar4,uVar2,auStack_40);
  if (pvStack_38 != (void *)0x0) {
    operator_delete__(pvStack_38);
  }
  uVar4 = param_1[1];
  uVar2 = FUN_1004e0150("MENU_TEAM_TITLE",0);
  FUN_1004e3120(auStack_40,"TEAM");
  FUN_1002e133c(uVar4,uVar2,auStack_40);
  if (pvStack_38 != (void *)0x0) {
    operator_delete__(pvStack_38);
  }
  uVar4 = param_1[1];
  uVar2 = FUN_1004e0150("MENU_GUILD_TITLE",0);
  FUN_1004e3120(auStack_40,"GUILD");
  FUN_1002e133c(uVar4,uVar2,auStack_40);
  if (pvStack_38 != (void *)0x0) {
    operator_delete__(pvStack_38);
  }
  uVar4 = param_1[1];
  uVar2 = FUN_1004e0150("MENU_FRIENDS_ONLINE_TITLE",0);
  FUN_1004e3120(auStack_40,"ONLINE_FRIENDS");
  FUN_1002e133c(uVar4,uVar2,auStack_40);
  if (pvStack_38 != (void *)0x0) {
    operator_delete__(pvStack_38);
  }
  uVar4 = param_1[1];
  uVar2 = FUN_1004e0150("MENU_FRIENDS_OFFLINE_TITLE",0);
  FUN_1004e3120(auStack_40,"OFFLINE_FRIENDS");
  FUN_1002e133c(uVar4,uVar2,auStack_40);
  if (pvStack_38 != (void *)0x0) {
    operator_delete__(pvStack_38);
  }
  uVar2 = FUN_1002e1420(param_1[1],"TEAM");
  FUN_1001d9594(uVar2,1);
  uVar2 = FUN_1002e1420(param_1[1],"GUILD");
  FUN_1001d9594(uVar2,1);
  uVar2 = FUN_1002e1420(param_1[1],"ONLINE_FRIENDS");
  FUN_1001d9594(uVar2,1);
  return param_1;
}



/*
 * FUN_10020dbd0
 * VA: 0x10020dbd0 | Source: functions/10020.c:14686
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 3
 * Callees: FUN_1000153b4, FUN_100111870, FUN_1001e3090, FUN_1004e0150, FUN_1004e3654
 * Callers: thunk_FUN_10020dbd0
 */
void FUN_10020dbd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar5 = 0;
    lVar6 = 0xac;
    do {
      iVar1 = FUN_1004e3654(param_3,*(long *)(param_1 + 0x78) + lVar6 + -0x8c);
      if ((iVar1 != 0) && (*(int *)(*(long *)(param_1 + 0x78) + lVar6) == 3)) {
        uVar2 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
        uVar3 = FUN_1004e0150("MENU_FRIENDS_ADD_FRIEND_DUPLICATE_ERROR",0);
        uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        FUN_1001e3090(uVar2,uVar3,uVar4,0,0);
        return;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x188;
    } while (uVar5 < *(uint *)(param_1 + 0x70));
  }
  FUN_100111870(param_3);
  FUN_1000153b4(param_1 + 0xe0,param_3);
  return;
}



/*
 * FUN_10020df80
 * VA: 0x10020df80 | Source: functions/named.c:17024
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 8
 * Callees: FUN_1000153b4, FUN_10015d3ec, FUN_1001d94ec, FUN_10020fb84, FUN_10020fbcc, FUN_10021061c, FUN_1002e1420, FUN_1002e142c (+15 more)
 * Callers: FUN_10020dcb0, FUN_10020efec, FUN_10020f7ac, FUN_10020fa84, FUN_10020fb04
 */
/* WARNING: Removing unreachable block (ram,0x00010020e398) */
/* WARNING: Removing unreachable block (ram,0x00010020e6b8) */

void FUN_10020df80(long param_1)

{
  short *psVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  void *pvVar4;
  undefined8 *******pppppppuVar5;
  undefined8 *puVar6;
  size_t sVar7;
  size_t sVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  byte bVar11;
  byte bVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  char *pcVar19;
  void *pvVar20;
  ulong uVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
  void *pvVar26;
  undefined8 uVar27;
  short *psVar28;
  long lVar29;
  ulong uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined1 auStack_b8 [8];
  void *local_b0;
  undefined8 ******local_a8;
  void *local_a0;
  byte local_91;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  
  if (*(char *)(param_1 + 0x15c) == '\0') {
    return;
  }
  FUN_1002e142c(*(undefined8 *)(param_1 + 8),"REQUESTS");
  if (*(int *)(param_1 + 0x80) != 0) {
    lVar29 = 0;
    uVar30 = 0;
    do {
      puVar2 = (ulong *)(*(long *)(param_1 + 0x88) + lVar29);
      uVar27 = *(undefined8 *)(param_1 + 8);
      FUN_1004e3170(&local_90,puVar2 + 10);
      FUN_1004e3170(&local_a8,puVar2 + 0x11);
      FUN_1002e258c(uVar27,puVar2 + 4,puVar2 + 1,puVar2 + 8,&local_90,puVar2 + 0xf,&local_a8,
                    *puVar2 >> 0x20 & 1);
      if (local_a0 != (void *)0x0) {
        operator_delete__(local_a0);
      }
      if (local_88 != (void *)0x0) {
        operator_delete__(local_88);
      }
      uVar30 = uVar30 + 1;
      lVar29 = lVar29 + 0x188;
    } while (uVar30 < *(uint *)(param_1 + 0x80));
  }
  uVar27 = FUN_1004e0150("MENU_FRIENDS_REQUESTS_TITLE",0);
  thunk_FUN_1004e439c(&local_90,uVar27);
  FUN_1004e313c(&local_a8);
  uVar27 = FUN_1002e1420(*(undefined8 *)(param_1 + 8),"REQUESTS");
  iVar14 = FUN_1001d94ec(uVar27,0);
  if (iVar14 < 1) {
    pcVar19 = "";
  }
  else {
    uVar27 = FUN_1002e1420(*(undefined8 *)(param_1 + 8),"REQUESTS");
    iVar14 = FUN_1001d94ec(uVar27,0);
    if (iVar14 < 0xb) {
      uVar27 = FUN_1002e1420(*(undefined8 *)(param_1 + 8),"REQUESTS");
      FUN_1001d94ec(uVar27,0);
      pcVar19 = " (%d)";
    }
    else {
      pcVar19 = " (%d+)";
    }
  }
  FUN_1004e38ac(&local_a8,pcVar19);
  FUN_1004e372c(&local_90,&local_a8);
  FUN_1002e1454(*(undefined8 *)(param_1 + 8),"REQUESTS",&local_90);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  FUN_1002e142c(*(undefined8 *)(param_1 + 8),"TEAM");
  lVar29 = FUN_10015d3ec();
  bVar12 = *(byte *)(lVar29 + 0x54a7);
  uVar30 = (ulong)bVar12;
  sVar7 = *(size_t *)(lVar29 + 0x5498);
  if (-1 < (char)bVar12) {
    sVar7 = uVar30;
  }
  sVar8 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar8 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar7 == sVar8) {
    pvVar26 = *(void **)(lVar29 + 0x5490);
    puVar6 = pvVar26;
    if (-1 < (char)bVar12) {
      puVar6 = (undefined8 *)(lVar29 + 0x5490);
    }
    pbVar24 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar24 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar12 < '\0') {
      if ((sVar7 != 0) && (iVar14 = _memcmp(puVar6,pbVar24,sVar7), iVar14 != 0)) goto LAB_10020e208;
    }
    else if (sVar7 != 0) {
      if ((uint)*pbVar24 == ((uint)pvVar26 & 0xff)) {
        pbVar23 = (byte *)(lVar29 + 0x5491);
        do {
          uVar30 = uVar30 - 1;
          pbVar24 = pbVar24 + 1;
          if (uVar30 == 0) goto LAB_10020e3a0;
          bVar12 = *pbVar23;
          pbVar23 = pbVar23 + 1;
        } while (bVar12 == *pbVar24);
      }
      goto LAB_10020e208;
    }
  }
  else {
LAB_10020e208:
    local_90 = 0;
    local_88 = (void *)0x0;
    local_80 = 0;
    uVar27 = FUN_1004e0150("MENU_FRIENDS_TEAM_CONVERSATION",0);
    FUN_1004e357c(uVar27,&local_90);
    FUN_10020fb84(&local_a8,param_1);
    lVar29 = FUN_10021061c(param_1 + 0xc0,&local_a8);
    if ((char)local_91 < '\0') {
      operator_delete(local_a8);
    }
    uVar27 = *(undefined8 *)(param_1 + 8);
    lVar16 = FUN_10015d3ec();
    lVar17 = FUN_10015d3ec();
    plVar18 = (long *)FUN_1002e24f8(uVar27,lVar16 + 0x5490,lVar17 + 0x5308,&local_90,
                                    param_1 + 200 != lVar29);
    if (plVar18 != (long *)0x0) {
      lVar29 = FUN_10015d3ec();
      std::operator+("#",(string *)(lVar29 + 0x5490));
      pvVar20 = (void *)(ulong)local_91;
      pvVar26 = local_a0;
      if (-1 < (char)local_91) {
        pvVar26 = pvVar20;
      }
      bVar12 = *(byte *)(param_1 + 0x107);
      pvVar4 = *(void **)(param_1 + 0xf8);
      if (-1 < (char)bVar12) {
        pvVar4 = (void *)(ulong)bVar12;
      }
      if (pvVar26 == pvVar4) {
        pppppppuVar5 = (undefined8 *******)local_a8;
        if (-1 < (char)local_91) {
          pppppppuVar5 = &local_a8;
        }
        pbVar24 = *(byte **)(param_1 + 0xf0);
        if (-1 < (char)bVar12) {
          pbVar24 = (byte *)(param_1 + 0xf0);
        }
        if ((char)local_91 < '\0') {
          if (pvVar26 != (void *)0x0) {
            iVar14 = _memcmp(pppppppuVar5,pbVar24,(size_t)pvVar26);
            bVar13 = iVar14 == 0;
            goto LAB_10020e370;
          }
          operator_delete(local_a8);
        }
        else if (pvVar26 != (void *)0x0) {
          if ((uint)*pbVar24 != ((uint)local_a8 & 0xff)) goto LAB_10020e350;
          pbVar23 = (byte *)((ulong)&local_a8 | 1);
          do {
            pvVar20 = (void *)((long)pvVar20 - 1);
            pbVar24 = pbVar24 + 1;
            bVar13 = pvVar20 == (void *)0x0;
            if (pvVar20 == (void *)0x0) break;
            bVar12 = *pbVar23;
            pbVar23 = pbVar23 + 1;
          } while (bVar12 == *pbVar24);
          goto LAB_10020e354;
        }
      }
      else {
LAB_10020e350:
        bVar13 = false;
LAB_10020e354:
        if ((char)local_91 < '\0') {
LAB_10020e370:
          operator_delete(local_a8);
        }
        if (!bVar13) goto LAB_10020e3a0;
      }
      (**(code **)(*plVar18 + 0x138))(plVar18,1);
    }
  }
LAB_10020e3a0:
  uVar27 = FUN_1004e0150("MENU_TEAM_TITLE",0);
  thunk_FUN_1004e439c(&local_90,uVar27);
  thunk_FUN_1004e439c(&local_a8,&DAT_101d91650);
  uVar27 = FUN_1002e1420(*(undefined8 *)(param_1 + 8),"TEAM");
  iVar14 = FUN_1001d94ec(uVar27,0);
  if (iVar14 < 1) {
    pcVar19 = "";
  }
  else {
    uVar27 = FUN_1002e1420(*(undefined8 *)(param_1 + 8),"TEAM");
    FUN_1001d94ec(uVar27,0);
    pcVar19 = " (%d)";
  }
  FUN_1004e38ac(&local_a8,pcVar19);
  FUN_1004e372c(&local_90,&local_a8);
  FUN_1002e1454(*(undefined8 *)(param_1 + 8),"TEAM",&local_90);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  FUN_1002e142c(*(undefined8 *)(param_1 + 8),"GUILD");
  lVar29 = FUN_10015d3ec();
  bVar12 = *(byte *)(lVar29 + 0x548f);
  uVar30 = (ulong)bVar12;
  sVar7 = *(size_t *)(lVar29 + 0x5480);
  if (-1 < (char)bVar12) {
    sVar7 = uVar30;
  }
  sVar8 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar8 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar7 == sVar8) {
    pvVar26 = *(void **)(lVar29 + 0x5478);
    puVar6 = pvVar26;
    if (-1 < (char)bVar12) {
      puVar6 = (undefined8 *)(lVar29 + 0x5478);
    }
    pbVar24 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar24 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar12 < '\0') {
      if ((sVar7 != 0) && (iVar14 = _memcmp(puVar6,pbVar24,sVar7), iVar14 != 0)) goto LAB_10020e528;
    }
    else if (sVar7 != 0) {
      if ((uint)*pbVar24 == ((uint)pvVar26 & 0xff)) {
        pbVar23 = (byte *)(lVar29 + 0x5479);
        do {
          uVar30 = uVar30 - 1;
          pbVar24 = pbVar24 + 1;
          if (uVar30 == 0) goto LAB_10020e6c0;
          bVar12 = *pbVar23;
          pbVar23 = pbVar23 + 1;
        } while (bVar12 == *pbVar24);
      }
      goto LAB_10020e528;
    }
  }
  else {
LAB_10020e528:
    local_90 = 0;
    local_88 = (void *)0x0;
    local_80 = 0;
    uVar27 = FUN_1004e0150("MENU_FRIENDS_GUILD_CONVERSATION",0);
    FUN_1004e357c(uVar27,&local_90);
    FUN_10020fbcc(&local_a8,param_1);
    lVar29 = FUN_10021061c(param_1 + 0xc0,&local_a8);
    if ((char)local_91 < '\0') {
      operator_delete(local_a8);
    }
    uVar27 = *(undefined8 *)(param_1 + 8);
    lVar16 = FUN_10015d3ec();
    lVar17 = FUN_10015d3ec();
    plVar18 = (long *)FUN_1002e2464(uVar27,lVar16 + 0x5478,lVar17 + 0x50c8,&local_90,
                                    param_1 + 200 != lVar29);
    if (plVar18 != (long *)0x0) {
      lVar29 = FUN_10015d3ec();
      std::operator+("#",(string *)(lVar29 + 0x5478));
      pvVar20 = (void *)(ulong)local_91;
      pvVar26 = local_a0;
      if (-1 < (char)local_91) {
        pvVar26 = pvVar20;
      }
      bVar12 = *(byte *)(param_1 + 0x107);
      pvVar4 = *(void **)(param_1 + 0xf8);
      if (-1 < (char)bVar12) {
        pvVar4 = (void *)(ulong)bVar12;
      }
      if (pvVar26 == pvVar4) {
        pppppppuVar5 = (undefined8 *******)local_a8;
        if (-1 < (char)local_91) {
          pppppppuVar5 = &local_a8;
        }
        pbVar24 = *(byte **)(param_1 + 0xf0);
        if (-1 < (char)bVar12) {
          pbVar24 = (byte *)(param_1 + 0xf0);
        }
        if ((char)local_91 < '\0') {
          if (pvVar26 != (void *)0x0) {
            iVar14 = _memcmp(pppppppuVar5,pbVar24,(size_t)pvVar26);
            bVar13 = iVar14 == 0;
            goto LAB_10020e690;
          }
          operator_delete(local_a8);
        }
        else if (pvVar26 != (void *)0x0) {
          if ((uint)*pbVar24 != ((uint)local_a8 & 0xff)) goto LAB_10020e670;
          pbVar23 = (byte *)((ulong)&local_a8 | 1);
          do {
            pvVar20 = (void *)((long)pvVar20 - 1);
            pbVar24 = pbVar24 + 1;
            bVar13 = pvVar20 == (void *)0x0;
            if (pvVar20 == (void *)0x0) break;
            bVar12 = *pbVar23;
            pbVar23 = pbVar23 + 1;
          } while (bVar12 == *pbVar24);
          goto LAB_10020e674;
        }
      }
      else {
LAB_10020e670:
        bVar13 = false;
LAB_10020e674:
        if ((char)local_91 < '\0') {
LAB_10020e690:
          operator_delete(local_a8);
        }
        if (!bVar13) goto LAB_10020e6c0;
      }
      (**(code **)(*plVar18 + 0x138))(plVar18,1);
    }
  }
LAB_10020e6c0:
  uVar27 = FUN_1004e0150("MENU_GUILD_TITLE",0);
  thunk_FUN_1004e439c(&local_90,uVar27);
  thunk_FUN_1004e439c(&local_a8,&DAT_101d91650);
  uVar27 = FUN_1002e1420(*(undefined8 *)(param_1 + 8),"GUILD");
  iVar14 = FUN_1001d94ec(uVar27,0);
  if (iVar14 < 1) {
    pcVar19 = "";
  }
  else {
    uVar27 = FUN_1002e1420(*(undefined8 *)(param_1 + 8),"GUILD");
    FUN_1001d94ec(uVar27,0);
    pcVar19 = " (%d)";
  }
  FUN_1004e38ac(&local_a8,pcVar19);
  FUN_1004e372c(&local_90,&local_a8);
  FUN_1002e1454(*(undefined8 *)(param_1 + 8),"GUILD",&local_90);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  FUN_1002e142c(*(undefined8 *)(param_1 + 8),"RECENTS");
  if (*(int *)(param_1 + 0x90) != 0) {
    uVar30 = 0;
    lVar29 = 0x35;
    do {
      puVar3 = (undefined1 *)(*(long *)(param_1 + 0x98) + lVar29);
      FUN_1002e2640(*(undefined8 *)(param_1 + 8),puVar3 + -0x15,puVar3 + -0x2d,*puVar3);
      uVar30 = uVar30 + 1;
      lVar29 = lVar29 + 0x38;
    } while (uVar30 < *(uint *)(param_1 + 0x90));
  }
  uVar27 = FUN_1004e0150("MENU_FRIENDS_RECENTS_TITLE",0);
  thunk_FUN_1004e439c(&local_90,uVar27);
  thunk_FUN_1004e439c(&local_a8,&DAT_101d91650);
  uVar27 = FUN_1002e1420(*(undefined8 *)(param_1 + 8),"RECENTS");
  iVar14 = FUN_1001d94ec(uVar27,0);
  if (iVar14 < 1) {
    pcVar19 = "";
  }
  else {
    uVar27 = FUN_1002e1420(*(undefined8 *)(param_1 + 8),"RECENTS");
    FUN_1001d94ec(uVar27,0);
    pcVar19 = " (%d)";
  }
  FUN_1004e38ac(&local_a8,pcVar19);
  FUN_1004e372c(&local_90,&local_a8);
  FUN_1002e1454(*(undefined8 *)(param_1 + 8),"RECENTS",&local_90);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  FUN_1002e142c(*(undefined8 *)(param_1 + 8),"ONLINE_FRIENDS");
  FUN_1002e142c(*(undefined8 *)(param_1 + 8),"OFFLINE_FRIENDS");
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar30 = 0;
    do {
      lVar29 = *(long *)(param_1 + 0x78);
      psVar28 = (short *)(lVar29 + uVar30 * 0x188);
      psVar1 = psVar28 + 4;
      FUN_10021061c(param_1 + 0xc0,psVar1);
      iVar14 = 0x41;
      if (*(int *)(psVar28 + 0xa4) != -1) {
        iVar14 = *(int *)(psVar28 + 0xa4);
      }
      uVar27 = *(undefined8 *)(param_1 + 8);
      pbVar24 = (byte *)(psVar28 + 0x28);
      FUN_1004e3170(&local_90,pbVar24);
      pbVar23 = (byte *)(psVar28 + 0x44);
      FUN_1004e3170(&local_a8,pbVar23);
      uVar31 = *(undefined8 *)psVar28;
      uVar9 = *(undefined4 *)(psVar28 + 0x74);
      uVar10 = *(undefined4 *)(psVar28 + 0x5c);
      uVar32 = *(undefined8 *)(psVar28 + 0x50);
      lVar16 = FUN_10015d3ec();
      bVar12 = *(byte *)(lVar16 + 0x548f);
      uVar21 = (ulong)bVar12;
      sVar7 = *(size_t *)(lVar16 + 0x5480);
      if (-1 < (char)bVar12) {
        sVar7 = uVar21;
      }
      sVar8 = DAT_101d911a0;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        sVar8 = (ulong)DAT_101d911a8._7_1_;
      }
      if (sVar7 == sVar8) {
        pvVar26 = *(void **)(lVar16 + 0x5478);
        puVar6 = pvVar26;
        if (-1 < (char)bVar12) {
          puVar6 = (undefined8 *)(lVar16 + 0x5478);
        }
        pbVar25 = DAT_101d91198;
        if (-1 < (char)DAT_101d911a8._7_1_) {
          pbVar25 = (byte *)&DAT_101d91198;
        }
        if ((char)bVar12 < '\0') {
          if ((sVar7 != 0) && (iVar15 = _memcmp(puVar6,pbVar25,sVar7), iVar15 != 0))
          goto LAB_10020e9ec;
        }
        else if (sVar7 != 0) {
          if ((uint)*pbVar25 == ((uint)pvVar26 & 0xff)) {
            pbVar22 = (byte *)(lVar16 + 0x5479);
            do {
              uVar21 = uVar21 - 1;
              pbVar25 = pbVar25 + 1;
              if (uVar21 == 0) goto LAB_10020ea9c;
              bVar12 = *pbVar22;
              pbVar22 = pbVar22 + 1;
            } while (bVar12 == *pbVar25);
          }
          goto LAB_10020e9ec;
        }
      }
      else {
LAB_10020e9ec:
        lVar16 = FUN_10015d3ec();
        bVar12 = *(byte *)(lVar16 + 0x548f);
        uVar21 = (ulong)bVar12;
        sVar7 = *(size_t *)(lVar16 + 0x5480);
        if (-1 < (char)bVar12) {
          sVar7 = uVar21;
        }
        bVar11 = *(byte *)((long)psVar28 + 0x67);
        sVar8 = *(size_t *)(lVar29 + uVar30 * 0x188 + 0x58);
        if (-1 < (char)bVar11) {
          sVar8 = (ulong)bVar11;
        }
        if (sVar7 == sVar8) {
          pvVar26 = *(void **)(lVar16 + 0x5478);
          puVar6 = pvVar26;
          if (-1 < (char)bVar12) {
            puVar6 = (undefined8 *)(lVar16 + 0x5478);
          }
          pbVar25 = *(byte **)pbVar24;
          if (-1 < (char)bVar11) {
            pbVar25 = pbVar24;
          }
          if ((char)bVar12 < '\0') {
            if (sVar7 != 0) {
              _memcmp(puVar6,pbVar25,sVar7);
            }
          }
          else if ((sVar7 != 0) && ((uint)*pbVar25 == ((uint)pvVar26 & 0xff))) {
            pbVar24 = (byte *)(lVar16 + 0x5479);
            do {
              uVar21 = uVar21 - 1;
              pbVar25 = pbVar25 + 1;
              if (uVar21 == 0) break;
              bVar12 = *pbVar24;
              pbVar24 = pbVar24 + 1;
            } while (bVar12 == *pbVar25);
          }
        }
      }
LAB_10020ea9c:
      lVar16 = FUN_10015d3ec();
      bVar12 = *(byte *)(lVar16 + 0x54a7);
      uVar21 = (ulong)bVar12;
      sVar7 = *(size_t *)(lVar16 + 0x5498);
      if (-1 < (char)bVar12) {
        sVar7 = uVar21;
      }
      sVar8 = DAT_101d911a0;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        sVar8 = (ulong)DAT_101d911a8._7_1_;
      }
      if (sVar7 == sVar8) {
        pvVar26 = *(void **)(lVar16 + 0x5490);
        puVar6 = pvVar26;
        if (-1 < (char)bVar12) {
          puVar6 = (undefined8 *)(lVar16 + 0x5490);
        }
        pbVar24 = DAT_101d91198;
        if (-1 < (char)DAT_101d911a8._7_1_) {
          pbVar24 = (byte *)&DAT_101d91198;
        }
        if ((char)bVar12 < '\0') {
          if ((sVar7 != 0) && (iVar15 = _memcmp(puVar6,pbVar24,sVar7), iVar15 != 0))
          goto LAB_10020eb58;
        }
        else if (sVar7 != 0) {
          if ((uint)*pbVar24 == ((uint)pvVar26 & 0xff)) {
            pbVar25 = (byte *)(lVar16 + 0x5491);
            do {
              uVar21 = uVar21 - 1;
              pbVar24 = pbVar24 + 1;
              if (uVar21 == 0) goto LAB_10020ec20;
              bVar12 = *pbVar25;
              pbVar25 = pbVar25 + 1;
            } while (bVar12 == *pbVar24);
          }
          goto LAB_10020eb58;
        }
      }
      else {
LAB_10020eb58:
        lVar16 = FUN_10015d3ec();
        bVar12 = *(byte *)(lVar16 + 0x54a7);
        uVar21 = (ulong)bVar12;
        sVar7 = *(size_t *)(lVar16 + 0x5498);
        if (-1 < (char)bVar12) {
          sVar7 = uVar21;
        }
        bVar11 = *(byte *)((long)psVar28 + 0x9f);
        sVar8 = *(size_t *)(lVar29 + uVar30 * 0x188 + 0x90);
        if (-1 < (char)bVar11) {
          sVar8 = (ulong)bVar11;
        }
        if (sVar7 == sVar8) {
          pvVar26 = *(void **)(lVar16 + 0x5490);
          puVar6 = pvVar26;
          if (-1 < (char)bVar12) {
            puVar6 = (undefined8 *)(lVar16 + 0x5490);
          }
          pbVar24 = *(byte **)pbVar23;
          if (-1 < (char)bVar11) {
            pbVar24 = pbVar23;
          }
          if ((char)bVar12 < '\0') {
            if (sVar7 != 0) {
              _memcmp(puVar6,pbVar24,sVar7);
            }
          }
          else if ((sVar7 != 0) && ((uint)*pbVar24 == ((uint)pvVar26 & 0xff))) {
            pbVar23 = (byte *)(lVar16 + 0x5491);
            do {
              uVar21 = uVar21 - 1;
              pbVar24 = pbVar24 + 1;
              if (uVar21 == 0) break;
              bVar12 = *pbVar23;
              pbVar23 = pbVar23 + 1;
            } while (bVar12 == *pbVar24);
          }
        }
      }
LAB_10020ec20:
      lVar16 = lVar29 + uVar30 * 0x188;
      puVar6 = (undefined8 *)(lVar16 + 0x168);
      if (*psVar28 != 2) {
        puVar6 = &DAT_101d91198;
      }
      plVar18 = (long *)FUN_1002e26d8(uVar32,uVar27,psVar28 + 0x10,psVar1,psVar28 + 0x20,&local_90,
                                      psVar28 + 0x3c,&local_a8,(uint)uVar31 & 0xffff,
                                      CONCAT44(uVar9,(uint)uVar31 >> 0x18) & 0xffffffff0000007f,
                                      uVar10,*(undefined4 *)(lVar16 + 0xa8),iVar14,lVar16 + 0x150,
                                      lVar16 + 0x160,puVar6);
      if (local_a0 != (void *)0x0) {
        operator_delete__(local_a0);
      }
      if (local_88 != (void *)0x0) {
        operator_delete__(local_88);
      }
      if (plVar18 != (long *)0x0) {
        bVar12 = *(byte *)((long)psVar28 + 0x1f);
        uVar21 = (ulong)bVar12;
        sVar7 = *(size_t *)(lVar29 + uVar30 * 0x188 + 0x10);
        if (-1 < (char)bVar12) {
          sVar7 = uVar21;
        }
        bVar11 = *(byte *)(param_1 + 0x107);
        sVar8 = *(size_t *)(param_1 + 0xf8);
        if (-1 < (char)bVar11) {
          sVar8 = (ulong)bVar11;
        }
        if (sVar7 == sVar8) {
          psVar28 = *(short **)psVar1;
          if (-1 < (char)bVar12) {
            psVar28 = psVar1;
          }
          pbVar24 = *(byte **)(param_1 + 0xf0);
          if (-1 < (char)bVar11) {
            pbVar24 = (byte *)(param_1 + 0xf0);
          }
          if ((char)bVar12 < '\0') {
            if ((sVar7 == 0) || (iVar14 = _memcmp(psVar28,pbVar24,sVar7), iVar14 == 0))
            goto LAB_10020edb4;
          }
          else if (sVar7 == 0) {
LAB_10020edb4:
            (**(code **)(*plVar18 + 0x138))(plVar18,1);
          }
          else if ((uint)*pbVar24 == ((uint)*(short **)psVar1 & 0xff)) {
            pbVar23 = (byte *)(lVar29 + uVar30 * 0x188 + 9);
            do {
              uVar21 = uVar21 - 1;
              pbVar24 = pbVar24 + 1;
              if (uVar21 == 0) goto LAB_10020edb4;
              bVar12 = *pbVar23;
              pbVar23 = pbVar23 + 1;
            } while (bVar12 == *pbVar24);
          }
        }
      }
      uVar30 = uVar30 + 1;
    } while (uVar30 < *(uint *)(param_1 + 0x70));
  }
  uVar27 = FUN_1004e0150("MENU_FRIENDS_ONLINE_TITLE",0);
  thunk_FUN_1004e439c(&local_90,uVar27);
  thunk_FUN_1004e439c(&local_a8,&DAT_101d91650);
  uVar27 = FUN_1002e1420(*(undefined8 *)(param_1 + 8),"ONLINE_FRIENDS");
  iVar14 = FUN_1001d94ec(uVar27,0);
  if (iVar14 < 1) {
    pcVar19 = "";
  }
  else {
    uVar27 = FUN_1002e1420(*(undefined8 *)(param_1 + 8),"ONLINE_FRIENDS");
    iVar14 = FUN_1001d94ec(uVar27,0);
    uVar27 = FUN_1002e1420(*(undefined8 *)(param_1 + 8),"ONLINE_FRIENDS");
    iVar15 = FUN_1001d94ec(uVar27,0);
    NEON_fminnm((float)iVar14,(float)(uint)(iVar15 - *(int *)(param_1 + 0x158)));
    pcVar19 = " (%d)";
  }
  FUN_1004e38ac(&local_a8,pcVar19);
  FUN_1004e372c(&local_90,&local_a8);
  FUN_1002e1454(*(undefined8 *)(param_1 + 8),"ONLINE_FRIENDS",&local_90);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  uVar27 = FUN_1004e0150("MENU_FRIENDS_OFFLINE_TITLE",0);
  thunk_FUN_1004e439c(&local_90,uVar27);
  thunk_FUN_1004e439c(&local_a8,&DAT_101d91650);
  if (*(uint *)(param_1 + 0x158) == 0) {
    pcVar19 = "";
  }
  else {
    if (500 < *(uint *)(param_1 + 0x158)) {
      FUN_1004e3120(auStack_b8,"(500+)");
      FUN_1000153b4(&local_a8,auStack_b8);
      if (local_b0 != (void *)0x0) {
        operator_delete__(local_b0);
      }
      goto LAB_10020ef54;
    }
    pcVar19 = "(%d)";
  }
  FUN_1004e38ac(&local_a8,pcVar19);
LAB_10020ef54:
  FUN_1004e3120(auStack_b8,"[NUM_OFFLINE]");
  FUN_1004e3bc4(&local_90,0,auStack_b8,&local_a8);
  if (local_b0 != (void *)0x0) {
    operator_delete__(local_b0);
  }
  FUN_1002e1454(*(undefined8 *)(param_1 + 8),"OFFLINE_FRIENDS",&local_90);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x000100210494) */
/* WARNING: Removing unreachable block (ram,0x00010021017c) */
/* WARNING: Removing unreachable block (ram,0x0001002101cc) */
/* WARNING: Removing unreachable block (ram,0x0001002104a4) */



/*
 * FUN_10020f108
 * VA: 0x10020f108 | Source: functions/10020.c:14984
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 5
 * Callees: FUN_1000153b4, FUN_1001e55b0, FUN_1004e0150, FUN_1004e3120, FUN_1004e3bc4, FUN_1004f1680, thunk_FUN_1004e439c
 * Callers: FUN_10020f2f8
 */
void FUN_10020f108(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  uVar2 = FUN_1004f1680(param_2);
  if ((uVar2 & 1) == 0) {
    uVar3 = FUN_1004e0150("MENU_FRIENDS_ADD_EXPLAIN_COULD_NOT_ADD",0);
    thunk_FUN_1004e439c(auStack_40,uVar3);
    FUN_1004e3120(auStack_50,"[NAME]");
    FUN_1004e3bc4(auStack_40,0,auStack_50,param_1 + 0xe0);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
    FUN_1001e55b0(0x40200000,auStack_40,0,1);
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
  }
  if ((*(int *)(param_2 + 0x40) == 0) && (*(char *)(param_2 + 0x44) != '\0')) {
    pcVar4 = "MENU_FRIENDS_ADD_EXPLAIN_REQUEST_SENT_TO";
  }
  else {
    bVar7 = *(byte *)(param_2 + 0x5f);
    uVar5 = (ulong)bVar7;
    uVar6 = *(ulong *)(param_2 + 0x50);
    uVar2 = uVar6;
    if (-1 < (char)bVar7) {
      uVar2 = uVar5;
    }
    if (uVar2 == 0x10) {
      iVar1 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013e51ed);
      if (iVar1 == 0) {
        pcVar4 = "MENU_FRIENDS_THEIR_LIST_FULL";
        goto LAB_10020f2bc;
      }
      bVar7 = *(byte *)(param_2 + 0x5f);
      uVar5 = (ulong)bVar7;
      uVar6 = *(ulong *)(param_2 + 0x50);
    }
    if (-1 < (char)bVar7) {
      uVar6 = uVar5;
    }
    if ((uVar6 != 0x13) ||
       (iVar1 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013e521b),
       iVar1 != 0)) {
      uVar3 = FUN_1004e0150("MENU_FRIENDS_ADD_EXPLAIN_COULD_NOT_ADD",0);
      thunk_FUN_1004e439c(auStack_40,uVar3);
      FUN_1004e3120(auStack_50,"[NAME]");
      FUN_1004e3bc4(auStack_40,0,auStack_50,param_1 + 0xe0);
      if (local_48 != (void *)0x0) {
        operator_delete__(local_48);
      }
      FUN_1001e55b0(0x40200000,auStack_40,0,1);
      if (local_38 != (void *)0x0) {
        operator_delete__(local_38);
      }
      goto LAB_10020f2d4;
    }
    pcVar4 = "MENU_FRIENDS_YOUR_LIST_FULL";
  }
LAB_10020f2bc:
  uVar3 = FUN_1004e0150(pcVar4,0);
  FUN_1001e55b0(0x40200000,uVar3,0,1);
LAB_10020f2d4:
  FUN_1000153b4(param_1 + 0xe0,&DAT_101d91650);
  return;
}



/*
 * FUN_10023d4ec
 * VA: 0x10023d4ec | Source: functions/10023.c:10037
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 3
 * Callees: FUN_10015d3ec, FUN_1001634c4, FUN_1001e3090, FUN_1004e0150, FUN_1004f1680
 * Callers: FUN_10023d6bc
 */
void FUN_10023d4ec(long *param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  void *pvVar13;
  
  iVar5 = FUN_1004f1680(param_2);
  if (iVar5 == 0) {
    return;
  }
  if (*(char *)(param_2 + 0x44) == '\0') {
    uVar10 = *(ulong *)(param_2 + 0x50);
    if (-1 < (char)*(byte *)(param_2 + 0x5f)) {
      uVar10 = (ulong)*(byte *)(param_2 + 0x5f);
    }
    if (uVar10 != 0x12) {
      return;
    }
    iVar5 = std::string::compare(param_2 + 0x48,0,(char *)0xffffffffffffffff,0x1013e3cf7);
    if (iVar5 != 0) {
      return;
    }
    uVar7 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
    uVar8 = FUN_1004e0150("MENU_GUILD_ERROR_PROFANITY",0);
    uVar9 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    FUN_1001e3090(uVar7,uVar8,uVar9,0,0);
    return;
  }
  lVar6 = FUN_10015d3ec();
  bVar4 = *(byte *)(lVar6 + 0x548f);
  uVar10 = (ulong)bVar4;
  sVar1 = *(size_t *)(lVar6 + 0x5480);
  if (-1 < (char)bVar4) {
    sVar1 = uVar10;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    pvVar13 = *(void **)(lVar6 + 0x5478);
    puVar3 = pvVar13;
    if (-1 < (char)bVar4) {
      puVar3 = (undefined8 *)(lVar6 + 0x5478);
    }
    pbVar12 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar12 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar4 < '\0') {
      if ((sVar1 == 0) || (iVar5 = _memcmp(puVar3,pbVar12,sVar1), iVar5 == 0)) goto LAB_10023d630;
    }
    else {
      if (sVar1 == 0) goto LAB_10023d630;
      if ((uint)*pbVar12 == ((uint)pvVar13 & 0xff)) {
        pbVar11 = (byte *)(lVar6 + 0x5479);
        do {
          uVar10 = uVar10 - 1;
          pbVar12 = pbVar12 + 1;
          if (uVar10 == 0) goto LAB_10023d630;
          bVar4 = *pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (bVar4 == *pbVar12);
      }
    }
  }
  uVar7 = FUN_10015d3ec();
  lVar6 = FUN_10015d3ec();
  FUN_1001634c4(uVar7,lVar6 + 0x5478,1);
LAB_10023d630:
                    /* WARNING: Could not recover jumptable at 0x00010023d660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x188))(param_1,param_1 + 0xb933,param_1 + 0x589,0,1);
  return;
}



/*
 * FUN_10023d920
 * VA: 0x10023d920 | Source: functions/10023.c:10266
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 9
 * Callees: FUN_1001028d4, FUN_1001e3090, FUN_1004e0150
 * Callers: FUN_10023daa4
 */
void FUN_10023d920(long *param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar2 = *(int *)(param_2 + 0x40);
  if (iVar2 == -0xb) {
    uVar4 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
    pcVar3 = "MENU_GUILD_RENAME_ERROR_RESERVED";
  }
  else if (iVar2 == -10) {
    uVar4 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
    pcVar3 = "MENU_GUILD_RENAME_ERROR_TAKEN";
  }
  else {
    if (iVar2 == 0) {
      if (*(char *)(param_2 + 0x44) != '\0') {
        FUN_1001028d4(2);
        if ((*(byte *)((long)param_1 + 0x5ca1c) >> 2 & 1) == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00010023da80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x188))(param_1,param_1 + 0xb933,param_1 + 0x589,0,0);
        return;
      }
      uVar1 = *(ulong *)(param_2 + 0x50);
      if (-1 < (char)*(byte *)(param_2 + 0x5f)) {
        uVar1 = (ulong)*(byte *)(param_2 + 0x5f);
      }
      if ((uVar1 == 0x12) &&
         (iVar2 = std::string::compare(param_2 + 0x48,0,(char *)0xffffffffffffffff,0x1013e789b),
         iVar2 == 0)) {
        uVar4 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
        pcVar3 = "MENU_GUILD_RENAME_ERROR_INSUFFICIENT_FUNDS";
        goto LAB_10023da0c;
      }
    }
    uVar4 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
    pcVar3 = "MENU_GUILD_RENAME_ERROR";
  }
LAB_10023da0c:
  uVar5 = FUN_1004e0150(pcVar3,0);
  uVar6 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar4,uVar5,uVar6,0,0);
  FUN_1001028d4(1);
  return;
}



/*
 * FUN_10023dab0
 * VA: 0x10023dab0 | Source: functions/10023.c:10333
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 9
 * Callees: FUN_1001029b0, FUN_1001e3090, FUN_1004e0150
 * Callers: FUN_10023dc34
 */
void FUN_10023dab0(long *param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar2 = *(int *)(param_2 + 0x40);
  if (iVar2 == -0xb) {
    uVar4 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
    pcVar3 = "MENU_GUILD_TAG_RENAME_ERROR_RESERVED";
  }
  else if (iVar2 == -10) {
    uVar4 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
    pcVar3 = "MENU_GUILD_TAG_RENAME_ERROR_TAKEN";
  }
  else {
    if (iVar2 == 0) {
      if (*(char *)(param_2 + 0x44) != '\0') {
        FUN_1001029b0(2);
        if ((*(byte *)((long)param_1 + 0x5ca1c) >> 2 & 1) == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00010023dc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x188))(param_1,param_1 + 0xb933,param_1 + 0x589,0,0);
        return;
      }
      uVar1 = *(ulong *)(param_2 + 0x50);
      if (-1 < (char)*(byte *)(param_2 + 0x5f)) {
        uVar1 = (ulong)*(byte *)(param_2 + 0x5f);
      }
      if ((uVar1 == 0x12) &&
         (iVar2 = std::string::compare(param_2 + 0x48,0,(char *)0xffffffffffffffff,0x1013e789b),
         iVar2 == 0)) {
        uVar4 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
        pcVar3 = "MENU_GUILD_TAG_RENAME_ERROR_INSUFFICIENT_FUNDS";
        goto LAB_10023db9c;
      }
    }
    uVar4 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
    pcVar3 = "MENU_GUILD_TAG_RENAME_ERROR";
  }
LAB_10023db9c:
  uVar5 = FUN_1004e0150(pcVar3,0);
  uVar6 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar4,uVar5,uVar6,0,0);
  FUN_1001029b0(1);
  return;
}



/*
 * FUN_10025dc94
 * VA: 0x10025dc94 | Source: functions/10025.c:10983
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 8
 * Callees: FUN_1000153b4, FUN_1001027f8, FUN_1001e3090, FUN_10025cd70, FUN_1004e0150, FUN_1004e3120
 * Callers: FUN_10025dec0
 */
void FUN_10025dc94(long param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  undefined1 auStack_30 [8];
  void *local_28;
  
  FUN_1004e3120(auStack_30,"");
  FUN_1000153b4(param_1 + 0x25f30,auStack_30);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  iVar2 = *(int *)(param_2 + 0x40);
  if (iVar2 == -0xb) {
    uVar4 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
    pcVar3 = "PLAYER_PROFILE_ERROR_RESERVED";
  }
  else if (iVar2 == -10) {
    uVar4 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
    pcVar3 = "PLAYER_PROFILE_ERROR_TAKEN";
  }
  else {
    if (iVar2 == 0) {
      if (*(char *)(param_2 + 0x44) != '\0') {
        FUN_1001027f8(2);
        if ((*(byte *)(param_1 + 0x254) >> 2 & 1) == 0) {
          return;
        }
        FUN_10025cd70(param_1,param_1 + 0x1d0,0,0);
        return;
      }
      bVar9 = *(byte *)(param_2 + 0x5f);
      uVar7 = (ulong)bVar9;
      uVar8 = *(ulong *)(param_2 + 0x50);
      uVar1 = uVar8;
      if (-1 < (char)bVar9) {
        uVar1 = uVar7;
      }
      if (uVar1 == 0x12) {
        iVar2 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013e789b);
        if (iVar2 == 0) {
          uVar4 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
          pcVar3 = "PLAYER_PROFILE_ERROR_INSUFFICIENT_FUNDS";
          goto LAB_10025de00;
        }
        bVar9 = *(byte *)(param_2 + 0x5f);
        uVar7 = (ulong)bVar9;
        uVar8 = *(ulong *)(param_2 + 0x50);
      }
      if (-1 < (char)bVar9) {
        uVar8 = uVar7;
      }
      if ((uVar8 == 0x13) &&
         (iVar2 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013e9230),
         iVar2 == 0)) {
        uVar4 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
        uVar5 = FUN_1004e0150("MENU_GUILD_ERROR_PROFANITY",0);
        uVar6 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        FUN_1001e3090(uVar4,uVar5,uVar6,0,0);
        return;
      }
    }
    uVar4 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
    pcVar3 = "PLAYER_PROFILE_ERROR";
  }
LAB_10025de00:
  uVar5 = FUN_1004e0150(pcVar3,0);
  uVar6 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar4,uVar5,uVar6,0,0);
  FUN_1001027f8(1);
  return;
}



/*
 * FUN_100263288
 * VA: 0x100263288 | Source: functions/10026.c:2734
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 6, Vis masks: 2
 * Callees: FUN_10001554c, FUN_1000200a0, FUN_1000f1e20, FUN_10015d3ec, FUN_100164f34, FUN_100264250, FUN_100264270, FUN_1002647ac (+6 more)
 * Callers: FUN_100262de8
 */
void FUN_100263288(long param_1,string *param_2)

{
  uint *puVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  char *pcVar5;
  uint uVar6;
  undefined1 auStack_88 [8];
  void *local_80;
  long local_78;
  code *local_70;
  void *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulong local_50;
  undefined4 local_48;
  
  if (param_2 == (string *)0x0) {
    return;
  }
  if (*(int *)(param_2 + 0x30) != 1) {
    return;
  }
  pvVar3 = operator_new(0xbc8);
  local_78 = FUN_1002647ac();
  std::string::operator=((string *)(local_78 + 0xba8),param_2);
  FUN_1006513c0((long)pvVar3 + 0x178,param_2 + 0x18);
  *(uint *)((long)pvVar3 + 0x10c) =
       *(uint *)((long)pvVar3 + 0x10c) & 0xfffffffb | (uint)(byte)param_2[0x35] << 2;
  uVar4 = FUN_1004e0150("MENU_USERTEAM_VALUE_STATUS",0);
  thunk_FUN_1004e439c(auStack_88,uVar4);
  switch(*(undefined4 *)(param_2 + 0x28)) {
  case 0:
    if (*(int *)(param_2 + 0x2c) < 1) {
      uVar4 = FUN_1004e0150("MENU_GUILD_STATUS_NEVER_PLAYED",0);
      FUN_1006513c0((long)pvVar3 + 0x2a8,uVar4);
    }
    else {
      FUN_1000f1e20(&local_70,auStack_88,*(int *)(param_2 + 0x2c),1);
      FUN_1006513c0((long)pvVar3 + 0x2a8,&local_70);
      if (local_68 != (void *)0x0) {
        operator_delete__(local_68);
      }
    }
    goto switchD_10026333c_default;
  case 1:
    pcVar5 = "MENU_GUILD_AVAILABILITY_ONLINE";
    break;
  case 2:
    pcVar5 = "MENU_GUILD_AVAILABILITY_BUSY_IN_GAME";
    break;
  case 3:
    pcVar5 = "MENU_GUILD_AVAILABILITY_BUSY_IN_PARTY";
    break;
  case 4:
    pcVar5 = "MENU_GUILD_AVAILABILITY_BUSY_MATCHING";
    break;
  default:
    goto switchD_10026333c_default;
  }
  uVar4 = FUN_1004e0150(pcVar5,0);
  FUN_1006513c0((long)pvVar3 + 0x2a8,uVar4);
  if ((~*(uint *)((long)pvVar3 + 0x32c) & 0x7f80) != 0) {
    *(uint *)((long)pvVar3 + 0x32c) = *(uint *)((long)pvVar3 + 0x32c) | 0x7f80;
    FUN_1000200a0((long)pvVar3 + 0x2a8);
  }
switchD_10026333c_default:
  if (param_2[0x36] == (string)0x0) {
    FUN_10015d3ec();
    uVar4 = FUN_100164f34();
    iVar2 = FUN_1004e36c0(param_2 + 0x18,uVar4);
    uVar6 = 4;
    if (iVar2 == 0) {
      uVar6 = 0;
    }
  }
  else {
    uVar6 = 0;
  }
  *(uint *)((long)pvVar3 + 0x63c) = *(uint *)((long)pvVar3 + 0x63c) & 0xfffffffb | uVar6;
  FUN_100651460((long)pvVar3 + 0x178,&DAT_10115a168);
  puVar1 = (uint *)(param_1 + 0x5220);
  local_50 = (ulong)*puVar1;
  local_48 = DAT_101dbd460;
  local_70 = FUN_100264250;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = (void *)param_1;
  FUN_10001554c((long)pvVar3 + 0x180,&local_70);
  local_50 = (ulong)*puVar1;
  local_48 = DAT_101dbd48c;
  local_70 = FUN_100264250;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = (void *)param_1;
  FUN_10001554c((long)pvVar3 + 0x180,&local_70);
  FUN_100642bd8(param_1 + 0x4638,pvVar3,1);
  FUN_100264270(puVar1,&local_78);
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
  }
  return;
}



/*
 * FUN_10026dad4
 * VA: 0x10026dad4 | Source: functions/named.c:23718
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 23, Vis masks: 23
 * Callees: FUN_10001549c, FUN_10001554c, FUN_10001617c, FUN_10001629c, FUN_1000200a0, FUN_10010b098, FUN_10010b1a8, FUN_1001816d4 (+43 more)
 * Callers: FUN_10026d50c, thunk_FUN_10026d50c
 */
/* WARNING: Removing unreachable block (ram,0x00010026f348) */
/* WARNING: Removing unreachable block (ram,0x00010026f2e8) */
/* WARNING: Removing unreachable block (ram,0x00010026f318) */
/* WARNING: Removing unreachable block (ram,0x00010026f4c8) */

void FUN_10026dad4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  long *plVar32;
  long *plVar33;
  long *plVar34;
  long *plVar35;
  long *plVar36;
  long *plVar37;
  char *pcVar38;
  undefined4 uVar39;
  undefined8 uVar40;
  uint uVar41;
  float fVar42;
  undefined4 uVar43;
  long lVar44;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  code *local_b8;
  long *plStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  
  plVar1 = param_1 + 0x79;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 0x90;
  FUN_100642bd8(plVar1,plVar2,1);
  plVar3 = param_1 + 0x130b;
  FUN_100642bd8(plVar1,plVar3,1);
  plVar4 = param_1 + 0x131c;
  FUN_100642bd8(plVar3,plVar4,1);
  plVar5 = param_1 + 0x133a;
  FUN_100642bd8(plVar3,plVar5,1);
  plVar6 = param_1 + 0x1bd3;
  FUN_100642bd8(plVar5,plVar6,1);
  plVar7 = param_1 + 0x134b;
  FUN_100642bd8(plVar5,plVar7,1);
  FUN_100642bd8(plVar5,param_1 + 0x1369,1);
  FUN_100642bd8(plVar5,param_1 + 0x138f,1);
  FUN_100642bd8(plVar5,param_1 + 0x144d,1);
  FUN_100642bd8(plVar5,param_1 + 0x150b,1);
  FUN_100642bd8(plVar5,param_1 + 0x15c9,1);
  FUN_100642bd8(plVar5,param_1 + 0x1687,1);
  plVar3 = param_1 + 0x23ff;
  FUN_100642bd8(plVar5,plVar3,1);
  plVar8 = param_1 + 0x2410;
  FUN_100642bd8(plVar3,plVar8,1);
  plVar9 = param_1 + 0x242e;
  FUN_100642bd8(plVar3,plVar9,1);
  plVar10 = param_1 + 0x16ad;
  FUN_100642bd8(plVar5,plVar10,1);
  plVar11 = param_1 + 0x686;
  FUN_100642bd8(plVar1,plVar11,1);
  plVar12 = param_1 + 0x6ba;
  FUN_100642bd8(plVar11,plVar12,1);
  plVar13 = param_1 + 0x6e0;
  FUN_100642bd8(plVar11,plVar13,1);
  plVar14 = param_1 + 0x714;
  FUN_100642bd8(plVar13,plVar14,1);
  FUN_1005308f8(plVar14,param_1 + 0x878,1);
  FUN_1005308f8(plVar14,param_1 + 0x9d8,1);
  FUN_1005308f8(plVar14,param_1 + 0xb38,1);
  FUN_1005308f8(plVar14,param_1 + 0xc98,1);
  FUN_1005308f8(plVar14,param_1 + 0xdf8,1);
  FUN_1005308f8(plVar14,param_1 + 0xf58,1);
  FUN_1005308f8(plVar14,param_1 + 0x10b8,1);
  FUN_1005308f8(plVar14,param_1 + 0x889,1);
  FUN_1005308f8(plVar14,param_1 + 0x9e9,1);
  plVar15 = param_1 + 0xb49;
  FUN_1005308f8(plVar14,plVar15,1);
  plVar16 = param_1 + 0xe09;
  FUN_1005308f8(plVar14,plVar16,1);
  plVar17 = param_1 + 0xf69;
  FUN_1005308f8(plVar14,plVar17,1);
  plVar18 = param_1 + 0xca9;
  FUN_1005308f8(plVar14,plVar18,1);
  plVar19 = param_1 + 0x10c9;
  FUN_1005308f8(plVar14,plVar19,1);
  plVar20 = param_1 + 0x82c;
  FUN_1005308f8(plVar14,plVar20,1);
  plVar21 = param_1 + 0x852;
  FUN_1005308f8(plVar14,plVar21,1);
  plVar22 = param_1 + 0x8d6;
  FUN_1005308f8(plVar14,plVar22,1);
  FUN_1005308f8(plVar14,param_1 + 0x91a,1);
  plVar23 = param_1 + 0xa36;
  FUN_1005308f8(plVar14,plVar23,1);
  FUN_1005308f8(plVar14,param_1 + 0xa7a,1);
  plVar24 = param_1 + 0xa5c;
  FUN_1005308f8(plVar14,plVar24,1);
  plVar25 = param_1 + 0xb96;
  FUN_1005308f8(plVar14,plVar25,1);
  FUN_1005308f8(plVar14,param_1 + 0xbda,1);
  plVar26 = param_1 + 0xbbc;
  FUN_1005308f8(plVar14,plVar26,1);
  plVar27 = param_1 + 0xe56;
  FUN_1005308f8(plVar14,plVar27,1);
  plVar28 = param_1 + 0xe7c;
  FUN_1005308f8(plVar14,plVar28,1);
  FUN_1005308f8(plVar14,param_1 + 0xe9a,1);
  plVar29 = param_1 + 0xfb6;
  FUN_1005308f8(plVar14,plVar29,1);
  plVar30 = param_1 + 0xfdc;
  FUN_1005308f8(plVar14,plVar30,1);
  FUN_1005308f8(plVar14,param_1 + 0xffa,1);
  plVar31 = param_1 + 0xcf6;
  FUN_1005308f8(plVar14,plVar31,1);
  FUN_1005308f8(plVar14,param_1 + 0xd3a,1);
  plVar32 = param_1 + 0xd1c;
  FUN_1005308f8(plVar14,plVar32,1);
  plVar33 = param_1 + 0x1116;
  FUN_1005308f8(plVar14,plVar33,1);
  FUN_1005308f8(plVar14,param_1 + 0x115a,1);
  plVar34 = param_1 + 0x113c;
  FUN_1005308f8(plVar14,plVar34,1);
  FUN_1005308f8(plVar14,param_1 + 0x1218,1);
  FUN_1005308f8(plVar14,param_1 + 0x12c7,1);
  FUN_1005308f8(plVar14,param_1 + 0x12e5,1);
  FUN_1005308f8(plVar14,param_1 + 0x2471,1);
  FUN_100642bd8(plVar1,param_1 + 0x7bb,1);
  plVar3 = param_1 + 0x118;
  FUN_100642bd8(plVar1,plVar3,1);
  plVar35 = param_1 + 0x3cf;
  FUN_100642bd8(plVar1,plVar35,1);
  plVar36 = param_1 + 0x7f0;
  FUN_100642bd8(plVar1,plVar36,1);
  plVar37 = param_1 + 0x80e;
  FUN_100642bd8(plVar1,plVar37,1);
  FUN_100642bd8(plVar1,param_1 + 0x2454,1);
  plVar1 = param_1 + 0xae;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar5 = param_1 + 0xcc;
  FUN_100642bd8(plVar1,plVar5,1);
  *(uint *)((long)param_1 + 0x504) = *(uint *)((long)param_1 + 0x504) | 0x10;
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  local_b8 = (code *)CONCAT44(local_b8._4_4_,0xff362626);
  FUN_100652dd4(plVar2,&local_b8,2);
  uVar41 = *(uint *)((long)param_1 + 0x504);
  if ((uVar41 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x504) = uVar41 & 0xffff8000 | uVar41 & 0x7f | 0x2600;
    FUN_1000200a0(plVar2);
  }
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar1,&DAT_10115a168,2);
  uVar41 = *(uint *)((long)param_1 + 0x5f4);
  if ((uVar41 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x5f4) = uVar41 & 0xffff8000 | uVar41 & 0x7f | 0x6c00;
    FUN_1000200a0(plVar1);
  }
  uVar40 = FUN_1004e0150("MENU_FRIENDS_FRIENDS_TITLE",0);
  FUN_1006513c0(param_1 + 0xf2,uVar40);
  uVar40 = FUN_1004e0150("MENU_FRIENDS_BROADCAST_PRESENCE",0);
  FUN_1001816d4(0x41a00000,0x43480000,0x43fa0000,plVar3,0,uVar40,&DAT_10115a168,&DAT_101dc1cb8,0);
  FUN_100651594(param_1 + 0x1fb,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220,&DAT_10115a168);
  local_b8 = (code *)CONCAT44(local_b8._4_4_,0xff404040);
  FUN_100181bd0(0x3f800000,plVar3,&local_b8);
  FUN_100181ba0(0x3f000000,plVar3,&DAT_10115a168);
  uVar39 = DAT_101d91884;
  local_90 = DAT_101d91884;
  local_b8 = thunk_FUN_10027c440;
  local_a0 = 0;
  local_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x119,&local_b8);
  FUN_100181c68(0x42a5999a,plVar3);
  *(uint *)((long)param_1 + 0x944) = *(uint *)((long)param_1 + 0x944) & 0xfffffffb;
  uVar40 = FUN_1004e0150("MENU_FRIENDS_ADD_FRIEND",0);
  FUN_1001816d4(0x41a00000,0x43480000,0x43fa0000,plVar35,0,uVar40,&DAT_10115a168,&DAT_101dc1cb8,0);
  FUN_100651594(param_1 + 0x4b2,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220,&DAT_10115a168);
  local_b8 = (code *)CONCAT44(local_b8._4_4_,0xff404040);
  FUN_100181bd0(0x3f800000,plVar35,&local_b8);
  FUN_100181ba0(0x3f000000,plVar35,&DAT_10115a168);
  local_90 = uVar39;
  local_b8 = thunk_FUN_10027c4dc;
  local_a0 = 0;
  local_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x3d0,&local_b8);
  FUN_100181c68(0x42a5999a,plVar35);
  fVar42 = (float)FUN_10064e3cc(plVar35);
  FUN_10064e3cc(plVar3);
  uVar43 = NEON_fminnm(fVar42 + -20.0,*(float *)(param_1 + 0x24b2) + -150.0);
  FUN_100181c18(0x41a00000,uVar43,uVar43,plVar35);
  FUN_100181c18(0x41a00000,uVar43,uVar43,plVar3);
  FUN_100652cac(plVar36,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  *(byte *)(param_1 + 0x80b) = *(byte *)(param_1 + 0x80b) | 2;
  FUN_100652dd4(plVar36,&DAT_10115a164,2);
  FUN_100652cac(plVar37,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  local_b8 = (code *)CONCAT44(local_b8._4_4_,0xffe0e0e0);
  FUN_100652dd4(plVar37,&local_b8,2);
  FUN_100654488(plVar11,0);
  *(uint *)((long)param_1 + 0x3e5c) = *(uint *)((long)param_1 + 0x3e5c) | 0x10;
  FUN_100654488(plVar13,1);
  FUN_100530be0(plVar14,PTR_s_build___MenuPartsCommon_tga_101854970,
                PTR_s_scrollbar_button_fill_top_101854958,
                PTR_s_scrollbar_button_fill_middle_101854960,
                PTR_s_scrollbar_button_fill_bottom_101854968);
  FUN_100530adc(plVar14,0,1);
  FUN_100530b0c(0,0,plVar14);
  FUN_100530bb4(0x3e800000,0x3f800000,plVar14);
  local_90 = DAT_101dbd460;
  local_b8 = thunk_FUN_10027c59c;
  local_a0 = 0;
  local_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x715,&local_b8);
  local_90 = DAT_101dbd48c;
  local_b8 = thunk_FUN_10027c59c;
  local_a0 = 0;
  local_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x715,&local_b8);
  FUN_100651460(plVar12,&DAT_10115a164);
  FUN_10065175c(0x40800000,plVar12);
  uVar40 = FUN_1004e0150("MENU_NEWSFEED_PULLTOREFRESH",0);
  FUN_1006513c0(plVar12,uVar40);
  if ((*(float *)(param_1 + 0x6c3) != 0.66) || (*(float *)((long)param_1 + 0x361c) != 0.66)) {
    param_1[0x6c3] = 0x3f28f5c33f28f5c3;
    FUN_1000200a0(plVar12);
  }
  FUN_100651460(plVar20,&DAT_10115a168);
  uVar40 = FUN_1004e0150("MENU_FRIENDS_SAD_AND_EMPTY",0);
  FUN_1006513c0(plVar20,uVar40);
  *(uint *)((long)param_1 + 0x41e4) = *(uint *)((long)param_1 + 0x41e4) & 0xfffffffb;
  FUN_100651700(plVar20,3);
  FUN_100651460(plVar21,&DAT_10115a168);
  uVar40 = FUN_1004e0150("MENU_FRIENDS_HOW_TO_ADD",0);
  FUN_1006513c0(plVar21,uVar40);
  *(uint *)((long)param_1 + 0x4314) = *(uint *)((long)param_1 + 0x4314) & 0xfffffffb;
  FUN_100651700(plVar21,3);
  *(uint *)((long)param_1 + 0x44cc) = *(uint *)((long)param_1 + 0x44cc) | 0x10;
  FUN_100651594(plVar22,PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0,&DAT_10115a168);
  uVar40 = FUN_1004e0150("MENU_FRIENDS_RECENTS_TITLE",0);
  FUN_1006513c0(plVar22,uVar40);
  plVar1 = param_1 + 0x8fc;
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  local_b8 = (code *)CONCAT44(local_b8._4_4_,0xffe0e0e0);
  FUN_100652dd4(plVar1,&local_b8,2);
  uVar41 = *(uint *)((long)param_1 + 0x4864);
  if ((uVar41 & 0x7f80) != 0x1300) {
    *(uint *)((long)param_1 + 0x4864) = uVar41 & 0xffff8000 | uVar41 & 0x7f | 0x1300;
    FUN_1000200a0(plVar1);
    uVar41 = *(uint *)((long)param_1 + 0x4864);
  }
  *(uint *)((long)param_1 + 0x4864) = uVar41 & 0xfffffffb;
  FUN_10064e47c((int)param_1[0x24b2],0x42b00000,param_1 + 0x889);
  local_90 = uVar39;
  local_b8 = FUN_100277548;
  local_a0 = 0;
  local_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x88a,&local_b8);
  local_90 = uVar39;
  local_b8 = FUN_100277548;
  local_a0 = 0;
  local_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x91b,&local_b8);
  pcVar38 = "arrow_right";
  if ((char)param_1[0x24b5] != '\0') {
    pcVar38 = "arrow_down";
  }
  FUN_100652cdc(param_1 + 0x9b4,pcVar38);
  *(uint *)((long)param_1 + 0x4fcc) = *(uint *)((long)param_1 + 0x4fcc) | 0x10;
  FUN_100651594(plVar23,PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0,&DAT_10115a168);
  uVar40 = FUN_1004e0150("MENU_FRIENDS_REQUESTS_TITLE",0);
  FUN_1006513c0(plVar23,uVar40);
  FUN_100652cac(plVar24,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  local_b8 = (code *)CONCAT44(local_b8._4_4_,0xffe0e0e0);
  FUN_100652dd4(plVar24,&local_b8,2);
  uVar41 = *(uint *)((long)param_1 + 0x5364);
  if ((uVar41 & 0x7f80) != 0x1300) {
    *(uint *)((long)param_1 + 0x5364) = uVar41 & 0xffff8000 | uVar41 & 0x7f | 0x1300;
    FUN_1000200a0(plVar24);
    uVar41 = *(uint *)((long)param_1 + 0x5364);
  }
  *(uint *)((long)param_1 + 0x5364) = uVar41 & 0xfffffffb;
  FUN_10064e47c((int)param_1[0x24b2],0x42b00000,param_1 + 0x9e9);
  local_90 = uVar39;
  local_b8 = FUN_100277548;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 1;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x9ea,&local_b8);
  local_90 = uVar39;
  local_b8 = FUN_100277548;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 1;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0xa7b,&local_b8);
  pcVar38 = "arrow_right";
  if (*(char *)((long)param_1 + 0x125a9) != '\0') {
    pcVar38 = "arrow_down";
  }
  FUN_100652cdc(param_1 + 0xb14,pcVar38);
  *(uint *)((long)param_1 + 0x5acc) = *(uint *)((long)param_1 + 0x5acc) | 0x10;
  FUN_1001b4964(plVar15,1);
  FUN_100651594(plVar25,PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0,&DAT_10115a168);
  uVar40 = FUN_1004e0150("MENU_FRIENDS_CONVERSATIONS_TITLE",0);
  FUN_1006513c0(plVar25,uVar40);
  FUN_100652cac(plVar26,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  local_b8 = (code *)CONCAT44(local_b8._4_4_,0xffe0e0e0);
  FUN_100652dd4(plVar26,&local_b8,2);
  uVar41 = *(uint *)((long)param_1 + 0x5e64);
  if ((uVar41 & 0x7f80) != 0x1300) {
    *(uint *)((long)param_1 + 0x5e64) = uVar41 & 0xffff8000 | uVar41 & 0x7f | 0x1300;
    FUN_1000200a0(plVar26);
    uVar41 = *(uint *)((long)param_1 + 0x5e64);
  }
  *(uint *)((long)param_1 + 0x5e64) = uVar41 & 0xfffffffb;
  FUN_10064e47c((int)param_1[0x24b2],0x42b00000,plVar15);
  local_90 = uVar39;
  local_b8 = FUN_100277548;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 2;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0xb4a,&local_b8);
  local_90 = uVar39;
  local_b8 = FUN_100277548;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 2;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0xbdb,&local_b8);
  pcVar38 = "arrow_right";
  if (*(char *)((long)param_1 + 0x125ab) != '\0') {
    pcVar38 = "arrow_down";
  }
  FUN_100652cdc(param_1 + 0xc74,pcVar38);
  *(uint *)((long)param_1 + 0x7bcc) = *(uint *)((long)param_1 + 0x7bcc) | 0x10;
  FUN_1001b4964(plVar17,1);
  FUN_100651594(plVar29,PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0,&DAT_10115a168);
  uVar40 = FUN_1004e0150("MENU_TEAM_TITLE",0);
  FUN_1006513c0(plVar29,uVar40);
  FUN_100652cac(plVar30,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  local_b8 = (code *)CONCAT44(local_b8._4_4_,0xffe0e0e0);
  FUN_100652dd4(plVar30,&local_b8,2);
  uVar41 = *(uint *)((long)param_1 + 0x7f64);
  if ((uVar41 & 0x7f80) != 0x1300) {
    *(uint *)((long)param_1 + 0x7f64) = uVar41 & 0xffff8000 | uVar41 & 0x7f | 0x1300;
    FUN_1000200a0(plVar30);
    uVar41 = *(uint *)((long)param_1 + 0x7f64);
  }
  *(uint *)((long)param_1 + 0x7f64) = uVar41 & 0xfffffffb;
  FUN_10064e47c((int)param_1[0x24b2],0x42300000,plVar17);
  local_90 = uVar39;
  local_b8 = FUN_100277548;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0xf6a,&local_b8);
  local_90 = uVar39;
  local_b8 = FUN_100277548;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0xffb,&local_b8);
  pcVar38 = "arrow_right";
  if (*(char *)((long)param_1 + 0x125ad) != '\0') {
    pcVar38 = "arrow_down";
  }
  FUN_100652cdc(param_1 + 0x1094,pcVar38);
  *(uint *)((long)param_1 + 0x70cc) = *(uint *)((long)param_1 + 0x70cc) | 0x10;
  FUN_1001b4964(plVar16,1);
  FUN_100651594(plVar27,PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0,&DAT_10115a168);
  uVar40 = FUN_1004e0150("MENU_GUILD_TITLE",0);
  FUN_1006513c0(plVar27,uVar40);
  FUN_100652cac(plVar28,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  local_b8 = (code *)CONCAT44(local_b8._4_4_,0xffe0e0e0);
  FUN_100652dd4(plVar28,&local_b8,2);
  uVar41 = *(uint *)((long)param_1 + 0x7464);
  if ((uVar41 & 0x7f80) != 0x1300) {
    *(uint *)((long)param_1 + 0x7464) = uVar41 & 0xffff8000 | uVar41 & 0x7f | 0x1300;
    FUN_1000200a0(plVar28);
    uVar41 = *(uint *)((long)param_1 + 0x7464);
  }
  *(uint *)((long)param_1 + 0x7464) = uVar41 & 0xfffffffb;
  FUN_10064e47c((int)param_1[0x24b2],0x42b00000,plVar16);
  local_90 = uVar39;
  local_b8 = FUN_100277548;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 5;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0xe0a,&local_b8);
  local_90 = uVar39;
  local_b8 = FUN_100277548;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 5;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0xe9b,&local_b8);
  pcVar38 = "arrow_right";
  if (*(char *)((long)param_1 + 0x125ac) != '\0') {
    pcVar38 = "arrow_down";
  }
  FUN_100652cdc(param_1 + 0xf34,pcVar38);
  *(uint *)((long)param_1 + 0x65cc) = *(uint *)((long)param_1 + 0x65cc) | 0x10;
  FUN_1001b4964(plVar18,1);
  FUN_100651594(plVar31,PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0,&DAT_10115a168);
  uVar40 = FUN_1004e0150("MENU_FRIENDS_ONLINE_TITLE",0);
  FUN_1006513c0(plVar31,uVar40);
  FUN_100652cac(plVar32,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  local_b8 = (code *)CONCAT44(local_b8._4_4_,0xffe0e0e0);
  FUN_100652dd4(plVar32,&local_b8,2);
  uVar41 = *(uint *)((long)param_1 + 0x6964);
  if ((uVar41 & 0x7f80) != 0x1300) {
    *(uint *)((long)param_1 + 0x6964) = uVar41 & 0xffff8000 | uVar41 & 0x7f | 0x1300;
    FUN_1000200a0(plVar32);
    uVar41 = *(uint *)((long)param_1 + 0x6964);
  }
  *(uint *)((long)param_1 + 0x6964) = uVar41 & 0xfffffffb;
  FUN_10064e47c((int)param_1[0x24b2],0x42b00000,plVar18);
  local_90 = uVar39;
  local_b8 = FUN_100277548;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 3;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0xcaa,&local_b8);
  local_90 = uVar39;
  local_b8 = FUN_100277548;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 3;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0xd3b,&local_b8);
  pcVar38 = "arrow_right";
  if (*(char *)((long)param_1 + 0x125ae) != '\0') {
    pcVar38 = "arrow_down";
  }
  FUN_100652cdc(param_1 + 0xdd4,pcVar38);
  *(uint *)((long)param_1 + 0x86cc) = *(uint *)((long)param_1 + 0x86cc) | 0x10;
  FUN_1001b4964(plVar19,1);
  FUN_100651594(plVar33,PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0,&DAT_10115a168);
  uVar40 = FUN_1004e0150("MENU_FRIENDS_OFFLINE_TITLE",0);
  FUN_1006513c0(plVar33,uVar40);
  FUN_100652cac(plVar34,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  local_b8 = (code *)CONCAT44(local_b8._4_4_,0xffe0e0e0);
  FUN_100652dd4(plVar34,&local_b8,2);
  uVar41 = *(uint *)((long)param_1 + 0x8a64);
  if ((uVar41 & 0x7f80) != 0x1300) {
    *(uint *)((long)param_1 + 0x8a64) = uVar41 & 0xffff8000 | uVar41 & 0x7f | 0x1300;
    FUN_1000200a0(plVar34);
    uVar41 = *(uint *)((long)param_1 + 0x8a64);
  }
  *(uint *)((long)param_1 + 0x8a64) = uVar41 & 0xfffffffb;
  FUN_100652cac(param_1 + 0x12c7,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_chat_bubble");
  FUN_100651594(param_1 + 0x12e5,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220,&DAT_10115a164);
  FUN_10064e47c((int)param_1[0x24b2],0x42b00000,plVar19);
  local_90 = uVar39;
  local_b8 = FUN_100277548;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 4;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x10ca,&local_b8);
  local_90 = uVar39;
  local_b8 = FUN_100277548;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 4;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x115b,&local_b8);
  pcVar38 = "arrow_right";
  if (*(char *)((long)param_1 + 0x125af) != '\0') {
    pcVar38 = "arrow_down";
  }
  FUN_100652cdc(param_1 + 0x11f4,pcVar38);
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar4,&DAT_10115a164,2);
  if ((*(uint *)((long)param_1 + 0x9964) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x9964) = *(uint *)((long)param_1 + 0x9964) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar4);
  }
  *(uint *)((long)param_1 + 0x9a54) = *(uint *)((long)param_1 + 0x9a54) & 0xfffffffb;
  FUN_100651594(param_1 + 0x1369,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_10115a168);
  FUN_100652cdc(param_1 + 0x1429,"generic_star_outline");
  *(uint *)((long)param_1 + 0x9fec) = *(uint *)((long)param_1 + 0x9fec) & 0xfffffffb;
  *(uint *)((long)param_1 + 0xa0dc) = *(uint *)((long)param_1 + 0xa0dc) & 0xfffffffb;
  FUN_1001b495c(0x3ecccccd,param_1 + 0x138f);
  lVar44 = NEON_fmov(0xc1200000,4);
  param_1[0x139a] = lVar44;
  local_90 = uVar39;
  local_b8 = thunk_FUN_10027c674;
  local_a0 = 0;
  local_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x1390,&local_b8);
  FUN_100652cdc(param_1 + 0x14e7,"generic_x");
  *(uint *)((long)param_1 + 0xa5dc) = *(uint *)((long)param_1 + 0xa5dc) & 0xfffffffb;
  *(uint *)((long)param_1 + 0xa6cc) = *(uint *)((long)param_1 + 0xa6cc) & 0xfffffffb;
  FUN_1001b495c(0x3ecccccd,param_1 + 0x144d);
  param_1[0x1458] = lVar44;
  local_90 = uVar39;
  local_b8 = thunk_FUN_10027c8b8;
  local_a0 = 0;
  local_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x144e,&local_b8);
  FUN_100652cdc(param_1 + 0x15a5,"generic_guild_outline");
  *(uint *)((long)param_1 + 0xabcc) = *(uint *)((long)param_1 + 0xabcc) & 0xfffffffb;
  *(uint *)((long)param_1 + 0xacbc) = *(uint *)((long)param_1 + 0xacbc) & 0xfffffffb;
  FUN_1001b495c(0x3ecccccd,param_1 + 0x150b);
  param_1[0x1516] = lVar44;
  local_90 = uVar39;
  local_b8 = thunk_FUN_10027cbb0;
  local_a0 = 0;
  local_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x150c,&local_b8);
  *(uint *)((long)param_1 + 0xa8dc) = *(uint *)((long)param_1 + 0xa8dc) & 0xfffffffb;
  FUN_100652cdc(param_1 + 0x1663,"generic_team_outline");
  *(uint *)((long)param_1 + 0xb1bc) = *(uint *)((long)param_1 + 0xb1bc) & 0xfffffffb;
  *(uint *)((long)param_1 + 0xb2ac) = *(uint *)((long)param_1 + 0xb2ac) & 0xfffffffb;
  FUN_1001b495c(0x3ecccccd,param_1 + 0x15c9);
  param_1[0x15d4] = lVar44;
  local_90 = uVar39;
  local_b8 = thunk_FUN_10027d0ac;
  local_a0 = 0;
  local_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x15ca,&local_b8);
  *(uint *)((long)param_1 + 0xaecc) = *(uint *)((long)param_1 + 0xaecc) & 0xfffffffb;
  FUN_100651594(param_1 + 0x1687,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220,&DAT_10115a168);
  *(uint *)((long)param_1 + 0x1207c) = *(uint *)((long)param_1 + 0x1207c) & 0xfffffffb;
  FUN_100652cac(plVar8,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar41 = *(uint *)((long)param_1 + 0x12104);
  if ((uVar41 & 0x7f80) != 0x3900) {
    *(uint *)((long)param_1 + 0x12104) = uVar41 & 0xffff8000 | uVar41 & 0x7f | 0x3900;
    FUN_1000200a0(plVar8);
  }
  FUN_100651594(plVar9,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
  uVar40 = FUN_1004e0150("MENU_FRIENDS_STAR_BALLOON",0);
  FUN_1006513c0(plVar9,uVar40);
  FUN_100651700(plVar9,0);
  local_c8 = 0;
  uStack_c0 = 0;
  uVar40 = FUN_1004e0150("MENU_GUILD_CHANNEL_NOTIFICATION_LEVEL_ALL",0);
  FUN_10010b098(&local_c8,uVar40);
  uVar40 = FUN_1004e0150("MENU_GUILD_CHANNEL_NOTIFICATION_LEVEL_THROTTLED",0);
  FUN_10010b098(&local_c8,uVar40);
  uVar40 = FUN_1004e0150("MENU_GUILD_CHANNEL_NOTIFICATION_LEVEL_NONE",0);
  FUN_10010b098(&local_c8,uVar40);
  local_d8 = 0;
  uStack_d0 = 0;
  FUN_10001549c(&local_b8,PTR_s_all_101854bb0);
  FUN_10001617c(&local_d8,&local_b8);
  FUN_10001549c(&local_b8,PTR_s_throttled_101854bb8);
  FUN_10001617c(&local_d8,&local_b8);
  FUN_10001549c(&local_b8,PTR_s_off_101854bc0);
  FUN_10001617c(&local_d8,&local_b8);
  FUN_10018d7d4(*(float *)(param_1 + 0x24b2) * 0.6,*(float *)(param_1 + 0x24b2) * 0.6,0,0x3f800000,
                0x3f800000,plVar10,&local_c8,&local_d8,1,1,0);
  FUN_10018f0e0(plVar10,1,1);
  local_90 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  local_b8 = thunk_FUN_10027d744;
  local_a0 = 0;
  local_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x16ae,&local_b8);
  *(uint *)((long)param_1 + 0xb5ec) = *(uint *)((long)param_1 + 0xb5ec) & 0xfffffffb;
  uVar40 = FUN_10032ae04();
  FUN_10018e754(plVar10,uVar40,1,1);
  FUN_100652cac(plVar7,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  local_b8 = (code *)CONCAT44(local_b8._4_4_,0xffe0e0e0);
  FUN_100652dd4(plVar7,&local_b8,2);
  uVar41 = *(uint *)((long)param_1 + 0x9adc);
  if ((uVar41 & 0x7f80) != 0x1300) {
    *(uint *)((long)param_1 + 0x9adc) = uVar41 & 0xffff8000 | uVar41 & 0x7f | 0x1300;
    FUN_1000200a0(plVar7);
  }
  FUN_100187774(plVar6,&DAT_101d91198);
  uVar40 = FUN_1004e0150("MENU_FRIENDS_CHAT_CONNECTING",0);
  FUN_100187a90(plVar6,uVar40);
  uVar40 = FUN_1004e0150("MENU_FRIENDS_CHAT_ERROR_CONNECTING",0);
  FUN_100187a9c(plVar6,uVar40);
  FUN_10001549c(&local_b8,"IM_");
  std::string::operator=((string *)(param_1 + 0x23e5),(string *)&local_b8);
  local_90 = FUN_100644a94("UI::EVENT_MENU_FRIENDS_SELECTED");
  local_b8 = FUN_100277564;
  local_a0 = 0;
  local_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 1,&local_b8);
  FUN_100651700(plVar5,3);
  uVar40 = FUN_1004e0150("MENU_FRIENDS_ADD_EXPLAIN_COULD_NOT_ADD",0);
  FUN_1006513c0(plVar5,uVar40);
  FUN_100651460(plVar5,&DAT_10115a164);
  FUN_1006423ec(param_1 + 0x30,1);
  (**(code **)(*param_1 + 0x150))(param_1);
  FUN_10001629c(&local_d8,1);
  FUN_10010b1a8(&local_c8,1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x000100273cac) */



/*
 * FUN_100273038
 * VA: 0x100273038 | Source: functions/10027.c:2029
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 5, Vis masks: 1
 * Callees: FUN_1000153b4, FUN_100110e8c, FUN_100111120, FUN_100111818, FUN_100111828, FUN_100111838, FUN_1001118b0, FUN_1001118c0 (+15 more)
 * Callers: FUN_100273cfc
 */
void FUN_100273038(long param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  char *pcVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  ulong local_50;
  void *local_48;
  
  puVar2 = (uint *)(param_1 + 0x12470);
  lVar7 = *(long *)(param_1 + 0x12478);
  if (lVar7 != 0) {
    if (*puVar2 != 0) {
      lVar11 = (ulong)*puVar2 * 0x188;
      do {
        lVar7 = FUN_100111a80(lVar7);
        lVar7 = lVar7 + 0x188;
        lVar11 = lVar11 + -0x188;
      } while (lVar11 != 0);
    }
    *puVar2 = 0;
  }
  puVar1 = (uint *)(param_1 + 0x12480);
  lVar7 = *(long *)(param_1 + 0x12488);
  if (lVar7 != 0) {
    if (*puVar1 != 0) {
      lVar11 = (ulong)*puVar1 * 0x188;
      do {
        lVar7 = FUN_100111a80(lVar7);
        lVar7 = lVar7 + 0x188;
        lVar11 = lVar11 + -0x188;
      } while (lVar11 != 0);
    }
    *puVar1 = 0;
  }
  puVar3 = (uint *)(param_1 + 0x9144);
  uVar4 = FUN_100111818();
  *(undefined4 *)(param_1 + 0x125a0) = uVar4;
  iVar5 = FUN_1001118b0();
  if (iVar5 != 0) {
    uVar12 = 0;
    do {
      uVar8 = FUN_1001118c0(uVar12);
      FUN_100110e8c(puVar1,uVar8);
      uVar12 = uVar12 + 1;
      uVar6 = FUN_1001118b0();
    } while (uVar12 < uVar6);
  }
  iVar5 = FUN_100111828();
  if (iVar5 != 0) {
    local_50 = 0;
    local_48 = (void *)0x0;
    uVar8 = FUN_100111828();
    FUN_10020df00(&local_50,uVar8,0);
    iVar5 = FUN_100111828();
    if (iVar5 != 0) {
      uVar13 = 0;
      do {
        uVar8 = FUN_100111838(uVar13);
        *(undefined8 *)((long)local_48 + uVar13 * 8) = uVar8;
        uVar13 = uVar13 + 1;
        uVar9 = FUN_100111828();
      } while (uVar13 < (uVar9 & 0xffffffff));
    }
    _qsort(local_48,local_50 & 0xffffffff,8,(int *)FUN_100111120);
    if ((int)local_50 != 0) {
      uVar13 = 0;
      do {
        FUN_100110e8c(puVar2,*(undefined8 *)((long)local_48 + uVar13 * 8));
        uVar13 = uVar13 + 1;
      } while (uVar13 < (local_50 & 0xffffffff));
    }
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
  }
  if ((*(byte *)puVar3 >> 2 & 1) != 0) {
    FUN_1001c102c(param_1 + 0x90c0);
    *puVar3 = *puVar3 & 0xfffffffb;
  }
  FUN_10027a11c(param_1);
  FUN_100270dec(param_1);
  FUN_10027b34c(param_1);
  if (*(int *)(param_1 + 0x124a0) != 0) {
    FUN_100273450(param_1);
  }
  uVar8 = FUN_1004e0150("MENU_FRIENDS_REQUESTS_TITLE",0);
  thunk_FUN_1004e439c(&local_50,uVar8);
  FUN_1004e313c(auStack_60);
  if (*puVar1 != 0) {
    if (*(uint *)(param_1 + 0x1259c) < *puVar1) {
      pcVar10 = " (%d+)";
    }
    else {
      pcVar10 = " (%d)";
    }
    FUN_1004e38ac(auStack_60,pcVar10);
    FUN_1004e372c(&local_50,auStack_60);
    FUN_1006513c0(param_1 + 0x51b0,&local_50);
  }
  uVar8 = FUN_1004e0150("MENU_TEAM_TITLE",0);
  FUN_1000153b4(&local_50,uVar8);
  if (*(int *)(param_1 + 0x11fe0) != 0) {
    FUN_1004e38ac(auStack_60," (%d)");
    FUN_1004e372c(&local_50,auStack_60);
    FUN_1006513c0(param_1 + 0x7db0,&local_50);
  }
  uVar8 = FUN_1004e0150("MENU_GUILD_TITLE",0);
  FUN_1000153b4(&local_50,uVar8);
  if (*(int *)(param_1 + 0x11fd0) != 0) {
    FUN_1004e38ac(auStack_60," (%d)");
    FUN_1004e372c(&local_50,auStack_60);
    FUN_1006513c0(param_1 + 0x72b0,&local_50);
  }
  uVar8 = FUN_1004e0150("MENU_FRIENDS_ONLINE_TITLE",0);
  FUN_1000153b4(&local_50,uVar8);
  if (*(int *)(param_1 + 0x11f90) != 0) {
    FUN_1004e38ac(auStack_60," (%d)");
    FUN_1004e372c(&local_50,auStack_60);
    FUN_1006513c0(param_1 + 0x67b0,&local_50);
  }
  uVar8 = FUN_1004e0150("MENU_FRIENDS_OFFLINE_TITLE",0);
  FUN_1000153b4(&local_50,uVar8);
  uVar12 = *(uint *)(param_1 + 0x125a0);
  if (*(uint *)(param_1 + 0x125a0) <= *(uint *)(param_1 + 0x11fb0)) {
    uVar12 = *(uint *)(param_1 + 0x11fb0);
  }
  if (uVar12 != 0) {
    if (uVar12 < 0x1f5) {
      FUN_1004e38ac(auStack_60,"(%d)");
    }
    else {
      FUN_1004e3120(auStack_70,"(500+)");
      FUN_1000153b4(auStack_60,auStack_70);
      if (local_68 != (void *)0x0) {
        operator_delete__(local_68);
      }
    }
    FUN_1004e3120(auStack_70,"[NUM_OFFLINE]");
    FUN_1004e3bc4(&local_50,0,auStack_70,auStack_60);
    if (local_68 != (void *)0x0) {
      operator_delete__(local_68);
    }
    FUN_1006513c0(param_1 + 0x88b0,&local_50);
  }
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  return;
}



/*
 * FUN_100278378
 * VA: 0x100278378 | Source: functions/10027.c:5771
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 10
 * Callees: FUN_1000153b4, FUN_10001549c, FUN_10001f0d8, FUN_10003330c, FUN_10003c048, FUN_10003c1ec, FUN_10003d5bc, FUN_1000f1e20 (+20 more)
 * Callers: FUN_100270dec, FUN_10027c5fc
 */
void FUN_100278378(long param_1,long param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_1d8 [4];
  float local_1d4;
  undefined1 auStack_1d0 [8];
  void *local_1c8;
  undefined4 local_1c0;
  float local_1bc;
  void *local_1b8;
  undefined1 auStack_1b0 [8];
  void *local_1a8;
  void *local_1a0;
  void *local_198;
  undefined7 local_190;
  char cStack_189;
  char local_179;
  undefined4 local_178;
  undefined8 local_174;
  undefined1 auStack_168 [8];
  void *local_160;
  undefined1 auStack_158 [8];
  void *local_150;
  undefined1 auStack_148 [8];
  void *local_140;
  undefined **local_138;
  undefined1 auStack_130 [16];
  long local_120;
  code *pcStack_118;
  long local_108;
  undefined8 local_e8;
  void *local_e0;
  void *local_d8;
  char local_c1;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_98;
  undefined4 local_94;
  undefined4 local_90;
  
  if (param_2 == 0) {
    return;
  }
  if (*(int *)(param_2 + 0x3c98) == 0x41) {
    return;
  }
  thunk_FUN_1001cd434(&local_138);
  puVar6 = &DAT_101d91650;
  thunk_FUN_1004e439c(auStack_148,&DAT_101d91650);
  pcVar5 = "MENU_FRIENDS_IN_MATCH_DETAILS_PARTY_TYPE_GUILD";
  switch(*(undefined4 *)(param_2 + 0x3cb0)) {
  case 0:
    pcVar5 = "MENU_FRIENDS_IN_MATCH_DETAILS_PARTY_TYPE_SOLO";
    break;
  case 1:
    break;
  case 2:
    pcVar5 = "MENU_FRIENDS_IN_MATCH_DETAILS_PARTY_TYPE_TEAM";
    break;
  case 3:
    goto switchD_100278400_caseD_3;
  default:
    goto switchD_100278400_default;
  }
  puVar6 = (undefined8 *)FUN_1004e0150(pcVar5,0);
switchD_100278400_caseD_3:
  FUN_1000153b4(auStack_148,puVar6);
switchD_100278400_default:
  FUN_1004e313c(auStack_158);
  uVar1 = *(uint *)(param_2 + 0x3c98);
  if ((uVar1 < 0x34) && ((0xc6affd9ff9fffU >> ((ulong)uVar1 & 0x3f) & 1) != 0)) {
    uVar7 = FUN_1004e0150((&PTR_s_MENU_FRIENDS_IN_MATCH_DETAILS_GA_10147e258)[(int)uVar1],0);
    FUN_1000153b4(auStack_158,uVar7);
  }
  uVar7 = FUN_1004e0150("MENU_FRIENDS_IN_MATCH_DETAILS_MATCH_TYPE",0);
  thunk_FUN_1004e439c(auStack_168,uVar7);
  FUN_1004e3120(&local_1a0,"[PARTY_TYPE]");
  FUN_1004e3bc4(auStack_168,0,&local_1a0,auStack_148);
  if (local_198 != (void *)0x0) {
    operator_delete__(local_198);
  }
  FUN_1004e3120(&local_1a0,"[GAME_QUEUE]");
  FUN_1004e3bc4(auStack_168,0,&local_1a0,auStack_158);
  if (local_198 != (void *)0x0) {
    operator_delete__(local_198);
  }
  thunk_FUN_1004e439c(&local_1a0,auStack_168);
  FUN_10003330c(&local_190,&DAT_101d91198);
  local_178 = 0;
  local_174 = 0xc120000041000000;
  FUN_10003c048(auStack_130,&local_1a0);
  if (local_179 < '\0') {
    operator_delete((void *)CONCAT17(cStack_189,local_190));
  }
  if (local_198 != (void *)0x0) {
    operator_delete__(local_198);
  }
  uVar2 = *(undefined4 *)(param_2 + 0x3d9c);
  uVar7 = FUN_1004e0150("MENU_FRIENDS_IN_MATCH_DETAILS_MATCH_TIME",0);
  FUN_1000f1e20(auStack_1b0,uVar7,uVar2,0);
  thunk_FUN_1004e439c(&local_1a0,auStack_1b0);
  FUN_10003330c(&local_190,&DAT_101d91198);
  local_178 = 1;
  local_174 = 0x41f0000042200000;
  FUN_10003c048(auStack_130,&local_1a0);
  if (local_179 < '\0') {
    operator_delete((void *)CONCAT17(cStack_189,local_190));
  }
  if (local_198 != (void *)0x0) {
    operator_delete__(local_198);
    local_1a0 = (void *)0x0;
    local_198 = (void *)0x0;
  }
  if (local_1a8 != (void *)0x0) {
    operator_delete__(local_1a8);
  }
  thunk_FUN_1004e439c(&local_1a0,&DAT_101d91650);
  FUN_10003330c(&local_190,&DAT_101d91198);
  local_178 = 2;
  local_174 = 0x41f00000;
  FUN_10003c048(auStack_130,&local_1a0);
  if (local_179 < '\0') {
    operator_delete((void *)CONCAT17(cStack_189,local_190));
  }
  if (local_198 != (void *)0x0) {
    operator_delete__(local_198);
  }
  FUN_1004e313c(auStack_1b0);
  plVar8 = (long *)(param_2 + 0x3cb8);
  if (*(char *)(param_2 + 0x3ccf) < '\0') {
    if (*(int *)(param_2 + 0x3cc0) == 0) goto LAB_100278694;
    plVar8 = (long *)*plVar8;
  }
  else if (*(char *)(param_2 + 0x3ccf) == '\0') goto LAB_100278694;
  lVar10 = FUN_10034be08(plVar8);
  uVar7 = FUN_1004e0150(*(undefined8 *)(lVar10 + 0x18),0);
  FUN_1000153b4(auStack_1b0,uVar7);
LAB_100278694:
  iVar4 = FUN_1004e36c0(auStack_1b0,&DAT_101d91650);
  if (iVar4 == 0) {
    uVar7 = FUN_1004e0150("MENU_FRIENDS_IN_MATCH_DETAILS_HERO_SELECT",0);
    thunk_FUN_1004e439c(&local_1c0,uVar7);
    thunk_FUN_1004e439c(&local_1a0,&local_1c0);
    FUN_10003330c(&local_190,&DAT_101d91198);
    local_178 = 0;
    local_174 = 0xc120000042200000;
    FUN_10003c048(auStack_130,&local_1a0);
    if (local_179 < '\0') {
      operator_delete((void *)CONCAT17(cStack_189,local_190));
    }
    pvVar3 = local_1b8;
    if (local_198 != (void *)0x0) {
      operator_delete__(local_198);
      pvVar3 = local_1b8;
    }
  }
  else {
    uVar7 = FUN_1004e0150("MENU_FRIENDS_IN_MATCH_DETAILS_PLAYING_TITLE",0);
    thunk_FUN_1004e439c(&local_1a0,uVar7);
    FUN_10003330c(&local_190,&DAT_101d91198);
    local_178 = 0;
    local_174 = 0xc120000041000000;
    FUN_10003c048(auStack_130,&local_1a0);
    if (local_179 < '\0') {
      operator_delete((void *)CONCAT17(cStack_189,local_190));
    }
    if (local_198 != (void *)0x0) {
      operator_delete__(local_198);
    }
    thunk_FUN_1004e439c(&local_1a0,auStack_1b0);
    FUN_10003330c(&local_190,&DAT_101d91198);
    local_178 = 1;
    local_174 = 0x41f0000042200000;
    FUN_10003c048(auStack_130,&local_1a0);
    pvVar3 = local_198;
    if (local_179 < '\0') {
      operator_delete((void *)CONCAT17(cStack_189,local_190));
      pvVar3 = local_198;
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  if (*(int *)(param_2 + 0x3ca0) != 0) {
    thunk_FUN_1004e439c(&local_1a0,&DAT_101d91650);
    FUN_10003330c(&local_190,&DAT_101d91198);
    local_178 = 2;
    local_174 = 0x41f00000;
    FUN_10003c048(auStack_130,&local_1a0);
    if (local_179 < '\0') {
      operator_delete((void *)CONCAT17(cStack_189,local_190));
    }
    if (local_198 != (void *)0x0) {
      operator_delete__(local_198);
    }
    uVar7 = FUN_1004e0150("MENU_FRIENDS_IN_MATCH_DETAILS_PARTY_TITLE",0);
    thunk_FUN_1004e439c(&local_1c0,uVar7);
    thunk_FUN_1004e439c(&local_1a0,&local_1c0);
    FUN_10003330c(&local_190,&DAT_101d91198);
    local_178 = 0;
    local_174 = 0xc120000041000000;
    FUN_10003c048(auStack_130,&local_1a0);
    if (local_179 < '\0') {
      operator_delete((void *)CONCAT17(cStack_189,local_190));
    }
    if (local_198 != (void *)0x0) {
      operator_delete__(local_198);
    }
    uVar1 = *(uint *)(param_2 + 0x3ca0);
    if (uVar1 != 0) {
      lVar10 = 0;
      do {
        thunk_FUN_1004e439c(auStack_1d0,*(long *)(param_2 + 0x3ca8) + lVar10);
        uVar9 = FUN_1004e3654(auStack_1d0,param_2 + 0x3cd0);
        if ((uVar9 & 1) == 0) {
          thunk_FUN_1004e439c(&local_1a0,auStack_1d0);
          FUN_10003330c(&local_190,&DAT_101d91198);
          local_178 = 1;
          local_174 = 0x41f0000041000000;
          FUN_10003c048(auStack_130,&local_1a0);
          if (local_179 < '\0') {
            operator_delete((void *)CONCAT17(cStack_189,local_190));
          }
          if (local_198 != (void *)0x0) {
            operator_delete__(local_198);
          }
        }
        if (local_1c8 != (void *)0x0) {
          operator_delete__(local_1c8);
        }
        lVar10 = lVar10 + 0x10;
      } while ((ulong)uVar1 * 0x10 - lVar10 != 0);
    }
    thunk_FUN_1004e439c(&local_1a0,param_2 + 0x3cd0);
    FUN_10003330c(&local_190,&DAT_101d91198);
    local_178 = 1;
    local_174 = 0x41f0000041000000;
    FUN_10003c048(auStack_130,&local_1a0);
    if (local_179 < '\0') {
      operator_delete((void *)CONCAT17(cStack_189,local_190));
    }
    if (local_198 != (void *)0x0) {
      operator_delete__(local_198);
    }
    if (local_1b8 != (void *)0x0) {
      operator_delete__(local_1b8);
    }
  }
  FUN_10001549c(&local_1a0,"friendInMatchInformation");
  std::string::append((char *)&local_1a0);
  local_108 = param_2 + 0xb8;
  local_90 = 3;
  iVar4 = FUN_100126c88();
  local_a4 = 0x44160000;
  if (iVar4 == 0) {
    local_a4 = 0x44100000;
  }
  iVar4 = FUN_1001311dc();
  if (iVar4 != 0) {
    uVar7 = FUN_1004e0150("MENU_FRIENDS_SPECTATE",0);
    FUN_1000153b4(&local_e8,uVar7);
    pcStack_118 = FUN_10027c43c;
    local_120 = param_1;
  }
  uVar7 = FUN_100126b4c();
  FUN_1001e35ec(param_1,uVar7,auStack_1d0,&local_1d4,auStack_1d8);
  lVar10 = FUN_10003d5bc(param_2);
  fVar12 = *(float *)(lVar10 + 0xc);
  lVar10 = FUN_10003d5bc(param_1);
  fVar11 = *(float *)(param_1 + 0x12594);
  fVar12 = fVar12 / *(float *)(lVar10 + 0x14) + DAT_101d237d0 * 0.5 + (fVar11 - local_1d4);
  if (0.0 < fVar12) {
    uVar7 = FUN_10001f0d8();
    FUN_10063f0e8(0x3dcccccd);
    local_1bc = -fVar12;
    local_1c0 = 0;
    FUN_10063f984(uVar7,&local_1c0);
    FUN_100642b14(param_1 + 0x38a0,uVar7);
    fVar11 = *(float *)(param_1 + 0x12594);
  }
  local_94 = 0;
  lVar10 = FUN_10003d5bc(param_1);
  local_98 = *(float *)(lVar10 + 0x14) * ((local_1d4 + -16.0) - fVar11);
  local_a8 = 0x3e051eb8;
  if (param_3 == 0) {
    FUN_1001cefb8(param_1 + 0x12388,&local_1a0,&local_138);
  }
  else {
    FUN_1001cf098();
  }
  if (cStack_189 < '\0') {
    operator_delete(local_1a0);
  }
  if (local_1a8 != (void *)0x0) {
    operator_delete__(local_1a8);
  }
  if (local_160 != (void *)0x0) {
    operator_delete__(local_160);
  }
  if (local_150 != (void *)0x0) {
    operator_delete__(local_150);
  }
  if (local_140 != (void *)0x0) {
    operator_delete__(local_140);
  }
  local_138 = &PTR_FUN_1014666e0;
  if (local_c1 < '\0') {
    operator_delete(local_d8);
  }
  if (local_e0 != (void *)0x0) {
    operator_delete__(local_e0);
    local_e8 = 0;
    local_e0 = (void *)0x0;
  }
  FUN_10003c1ec(auStack_130,1);
  return;
}



/*
 * FUN_1002795e8
 * VA: 0x1002795e8 | Source: functions/10027.c:6559
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 7
 * Callees: FUN_10001549c, FUN_1000165f0, FUN_10015d3ec, FUN_10015d3f8, FUN_1001664b0, FUN_100187060, FUN_1001870b0, FUN_100187120 (+21 more)
 * Callers: FUN_100270a84, FUN_1002765c0, FUN_1002792f8, FUN_10027a11c, FUN_10027c5fc, FUN_10027d7cc
 */
void FUN_1002795e8(long *param_1,long param_2,int param_3)

{
  byte *pbVar1;
  uint *puVar2;
  long *plVar3;
  size_t sVar4;
  size_t sVar5;
  undefined8 *puVar6;
  long *******ppppppplVar7;
  string sVar8;
  byte bVar9;
  byte bVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  char *pcVar17;
  long *plVar18;
  string *psVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  string *psVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  void *pvVar27;
  string *psVar28;
  ulong uVar29;
  double dVar30;
  void *local_80;
  void *local_78;
  char local_69;
  long ******local_68;
  void *local_60;
  char local_51;
  
  lVar14 = param_1[0x23fe];
  if (lVar14 == param_2 && param_3 == 0) {
    return;
  }
  pbVar1 = (byte *)(param_1 + 0x1d42);
  puVar2 = (uint *)((long)param_1 + 0x9a54);
  param_1[0x23fe] = param_2;
  if (lVar14 != 0) {
    FUN_10019e818(lVar14,0);
    param_2 = param_1[0x23fe];
  }
  *puVar2 = *puVar2 & 0xfffffff8 | *puVar2 & 3 | (uint)(param_2 != 0) << 2;
  if (param_2 == 0) {
    std::string::operator=((string *)(param_1 + 0x24af),(string *)&DAT_101d91198);
    std::string::operator=((string *)(param_1 + 0x24a1),(string *)&DAT_101d91198);
    FUN_100187774(param_1 + 0x1bd3,&DAT_101d91198);
    return;
  }
  plVar20 = param_1 + 0x24a1;
  psVar19 = (string *)(param_1 + 0x24af);
  bVar10 = *(byte *)(param_2 + 0x3d87);
  uVar26 = (ulong)bVar10;
  sVar4 = *(size_t *)(param_2 + 0x3d78);
  if (-1 < (char)bVar10) {
    sVar4 = uVar26;
  }
  bVar9 = *(byte *)((long)param_1 + 0x1258f);
  sVar5 = param_1[0x24b0];
  if (-1 < (char)bVar9) {
    sVar5 = (ulong)bVar9;
  }
  if (sVar4 == sVar5) {
    pvVar27 = *(void **)(param_2 + 0x3d70);
    puVar6 = pvVar27;
    if (-1 < (char)bVar10) {
      puVar6 = (undefined8 *)(param_2 + 0x3d70);
    }
    psVar23 = *(string **)psVar19;
    if (-1 < (char)bVar9) {
      psVar23 = psVar19;
    }
    if ((char)bVar10 < '\0') {
      if (sVar4 == 0) goto LAB_100279778;
      iVar13 = _memcmp(puVar6,psVar23,sVar4);
      bVar11 = iVar13 == 0;
    }
    else {
      if (sVar4 != 0) {
        if ((uint)(byte)*psVar23 == ((uint)pvVar27 & 0xff)) {
          psVar28 = (string *)(param_2 + 0x3d71);
          do {
            uVar26 = uVar26 - 1;
            psVar23 = psVar23 + 1;
            if (uVar26 == 0) goto LAB_100279778;
            sVar8 = *psVar28;
            psVar28 = psVar28 + 1;
          } while (sVar8 == *psVar23);
        }
        goto LAB_100279784;
      }
LAB_100279778:
      bVar11 = true;
    }
    if ((bVar11) && (param_3 == 0)) {
      return;
    }
  }
LAB_100279784:
  plVar3 = param_1 + 0x1bd3;
  FUN_100187060(plVar3);
  FUN_10019e818(param_1[0x23fe],1);
  std::string::operator=(psVar19,(string *)(param_1[0x23fe] + 0x3d70));
  FUN_1006513c0(param_1 + 0x1369,param_1[0x23fe] + 0x3cd0);
  pcVar17 = "generic_star_outline";
  if (*(char *)(param_1[0x23fe] + 0x3dac) != '\0') {
    pcVar17 = "generic_star";
  }
  FUN_100652cdc(param_1 + 0x1429,pcVar17);
  *puVar2 = *puVar2 | 4;
  local_68 = (long ******)(param_1[0x23fe] + 0x3d70);
  if (*(char *)(param_1[0x23fe] + 0x3d87) < '\0') {
    local_68 = (long ******)*local_68;
  }
  psVar23 = (string *)FUN_100274c3c(param_1 + 0x2498,&local_68);
  psVar19 = psVar23;
  if (psVar23 == (string *)0x0) {
    if (((long *)param_1[0x23df] != (long *)0x0) &&
       (iVar13 = (**(code **)(*(long *)param_1[0x23df] + 0x40))(), iVar13 == 2)) {
      psVar19 = (string *)(param_1[0x23fe] + 0x3d70);
      goto LAB_100279850;
    }
    FUN_100188e18(plVar3,param_1[0x23fe] + 0x3cd0,param_1 + 0x24a1);
  }
  else {
LAB_100279850:
    std::string::operator=((string *)(param_1 + 0x24a1),psVar19);
  }
  FUN_10027c09c(param_1);
  FUN_100187774(plVar3,plVar20);
  FUN_1001876ec(plVar3);
  uVar12 = FUN_1002725c8(param_1,plVar20);
  if (uVar12 == 0xffffffff) {
    if (((long *)param_1[0x23df] != (long *)0x0) &&
       (iVar13 = (**(code **)(*(long *)param_1[0x23df] + 0x40))(), iVar13 == 2)) {
      if (psVar23 == (string *)0x0) {
        plVar20 = (long *)(param_1[0x23fe] + 0x3d70);
        if (*(char *)(param_1[0x23fe] + 0x3d87) < '\0') {
          plVar20 = (long *)*plVar20;
        }
        FUN_10001549c(&local_68,plVar20);
        plVar20 = (long *)param_1[0x23df];
        if (plVar20 != (long *)0x0) {
          ppppppplVar7 = (long *******)local_68;
          if (-1 < local_51) {
            ppppppplVar7 = &local_68;
          }
          iVar13 = (**(code **)(*plVar20 + 0x78))(plVar20,ppppppplVar7,200);
          if (iVar13 != 0) {
            ppppppplVar7 = (long *******)local_68;
            if (-1 < local_51) {
              ppppppplVar7 = &local_68;
            }
            FUN_10001549c(&local_80,ppppppplVar7);
            FUN_1002742c8(param_1,&local_80);
            if (local_69 < '\0') {
              operator_delete(local_80);
            }
          }
        }
        if (local_51 < '\0') {
          operator_delete(local_68);
        }
      }
      else {
        plVar21 = plVar20;
        if (*(char *)((long)param_1 + 0x1251f) < '\0') {
          plVar21 = (long *)*plVar20;
        }
        plVar18 = (long *)param_1[0x23df];
        if ((plVar18 != (long *)0x0) &&
           (iVar13 = (**(code **)(*plVar18 + 0x80))(plVar18,plVar21,200), iVar13 != 0)) {
          FUN_1002742c8(param_1,plVar20);
        }
      }
    }
  }
  else {
    uVar26 = (ulong)uVar12;
    lVar14 = uVar26 * 4 + (ulong)uVar12;
    *(undefined1 *)(param_1[0x2497] + lVar14 * 0x10 + 0x4c) = 0;
    FUN_10019e90c(param_1[0x23fe],1,0,0);
    lVar24 = param_1[0x2497];
    if (*(int *)(lVar24 + lVar14 * 0x10 + 0x38) != 0) {
      lVar14 = 0;
      uVar29 = 0;
      do {
        lVar25 = *(long *)(lVar24 + uVar26 * 0x50 + 0x40);
        lVar24 = lVar25 + lVar14;
        if (*(char *)(lVar24 + 0xef) < '\0') {
          lVar22 = *(long *)(lVar24 + 0xd8);
        }
        else {
          lVar22 = lVar24 + 0xd8;
        }
        lVar25 = lVar25 + lVar14;
        FUN_100187144(plVar3,lVar24 + 0xb8,lVar24 + 200,lVar22,*(undefined1 *)(lVar25 + 0xf0),
                      *(undefined1 *)(lVar25 + 0xf1));
        uVar29 = uVar29 + 1;
        lVar24 = param_1[0x2497];
        lVar14 = lVar14 + 0xf8;
      } while (uVar29 < *(uint *)(lVar24 + uVar26 * 0x50 + 0x38));
    }
    FUN_1000165f0(lVar24 + uVar26 * 0x50,0);
  }
  if (0.0 < *(double *)(param_1[0x23fe] + 0x3d88)) {
    FUN_1001870b0(plVar3,0);
    uVar15 = FUN_1004e0150("MENU_CHAT_PLAYER_BANNED",0);
    thunk_FUN_1004e439c(&local_68,uVar15);
    FUN_1004e3120(&local_80,"[PLAYER_NAME]");
    lVar14 = param_1[0x23fe] + 0x3cd0;
LAB_1002799e4:
    FUN_1004e3bc4(&local_68,0,&local_80,lVar14);
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
    }
    uVar15 = FUN_100655b6c(param_1 + ((ulong)*pbVar1 & 1) * 0x26 + 0x1d10);
    iVar13 = FUN_1004e36c0(uVar15,&local_68);
    if (iVar13 != 0) {
LAB_100279a28:
      FUN_100187120(plVar3,&local_68,0);
    }
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
    }
  }
  else {
    iVar13 = FUN_10015d3f8();
    if (iVar13 == 0) {
LAB_100279ae8:
      switch(*(undefined4 *)(param_1[0x23fe] + 0x3d98)) {
      case 0:
        FUN_1001870b0(plVar3,*(undefined1 *)((long)param_1 + 0x125b3));
        uVar15 = FUN_1004e0150("MENU_CHAT_PLAYER_OFFLINE",0);
        thunk_FUN_1004e439c(&local_68,uVar15);
        FUN_1004e3120(&local_80,"[PLAYER_NAME]");
        uVar15 = FUN_100655b6c(param_1[0x23fe] + 0x330);
        FUN_1004e3bc4(&local_68,0,&local_80,uVar15);
        if (local_78 != (void *)0x0) {
          operator_delete__(local_78);
        }
        goto LAB_100279a28;
      case 1:
        FUN_1001870b0(plVar3,1);
        break;
      case 2:
        FUN_1001870b0(plVar3,*(undefined1 *)((long)param_1 + 0x125b3));
        uVar15 = FUN_1004e0150("MENU_CHAT_PLAYER_IN_GAME",0);
        thunk_FUN_1004e439c(&local_68,uVar15);
        FUN_1004e3120(&local_80,"[PLAYER_NAME]");
        lVar14 = FUN_100655b6c(param_1[0x23fe] + 0x330);
        goto LAB_1002799e4;
      case 3:
      case 4:
        FUN_1001870b0(plVar3,1);
        uVar15 = FUN_100655b6c(param_1 + ((ulong)*pbVar1 & 1) * 0x26 + 0x1d10);
        uVar16 = FUN_1004e0150("MENU_CHAT_ENTER_YOUR_CHAT",0);
        iVar13 = FUN_1004e36c0(uVar15,uVar16);
        if (iVar13 == 0) goto switchD_100279b0c_default;
        break;
      default:
        goto switchD_100279b0c_default;
      }
      pcVar17 = "MENU_CHAT_ENTER_YOUR_CHAT";
    }
    else {
      FUN_10015d3ec();
      dVar30 = (double)FUN_1001664b0();
      if (dVar30 <= 0.0) goto LAB_100279ae8;
      FUN_1001870b0(plVar3,0);
      uVar15 = FUN_100655b6c(param_1 + ((ulong)*pbVar1 & 1) * 0x26 + 0x1d10);
      uVar16 = FUN_1004e0150("MENU_FRIENDS_PLAYER_BANNED",0);
      iVar13 = FUN_1004e36c0(uVar15,uVar16);
      if (iVar13 == 0) goto switchD_100279b0c_default;
      pcVar17 = "MENU_FRIENDS_PLAYER_BANNED";
    }
    uVar15 = FUN_1004e0150(pcVar17,0);
    FUN_100187120(plVar3,uVar15,0);
  }
switchD_100279b0c_default:
  FUN_1001cedd0(param_1 + 0x2454);
  if (param_1[0x23fe] != 0) {
    FUN_10027c18c(param_1);
  }
  (**(code **)(*param_1 + 0x150))(param_1);
  FUN_10027b34c(param_1);
  return;
}



/*
 * FUN_10027a11c
 * VA: 0x10027a11c | Source: functions/named.c:25212
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 4, Vis masks: 3
 * Callees: FUN_10001549c, FUN_10015d3ec, FUN_10015d3f8, FUN_1001664b0, FUN_1001870b0, FUN_100187120, FUN_100188e18, FUN_10019de60 (+22 more)
 * Callers: FUN_100273038, FUN_1002741b4
 */
/* WARNING: Removing unreachable block (ram,0x00010027a6a4) */

void FUN_10027a11c(long param_1)

{
  byte *pbVar1;
  uint *puVar2;
  size_t sVar3;
  size_t sVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  void *pvVar19;
  undefined8 uVar20;
  undefined8 *******pppppppuVar21;
  undefined8 *******pppppppuVar22;
  short sVar23;
  long lVar24;
  ulong uVar25;
  uint uVar26;
  byte *pbVar27;
  byte *pbVar28;
  void *pvVar29;
  byte *pbVar30;
  byte *pbVar31;
  byte *pbVar32;
  byte *pbVar33;
  ulong uVar34;
  uint uVar35;
  long lVar36;
  ulong *puVar37;
  char *pcVar38;
  undefined8 *puVar39;
  size_t sVar40;
  ulong uVar41;
  long lVar42;
  byte bVar43;
  long lVar44;
  size_t *psVar45;
  size_t sVar46;
  double dVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined8 uVar50;
  uint local_c4;
  undefined8 local_b0 [3];
  undefined8 ******local_98;
  void *local_90;
  undefined8 local_88;
  undefined8 local_80 [2];
  
  pbVar31 = (byte *)(param_1 + 0x12508);
  puVar2 = (uint *)(param_1 + 0x96bc);
  FUN_10027b6d8();
  local_c4 = FUN_10027ba30(param_1);
  lVar17 = FUN_10015d3ec();
  lVar18 = FUN_10015d3ec();
  FUN_1002704a0(param_1);
  uVar15 = *(uint *)(param_1 + 0x124c0);
  lVar24 = *(long *)(param_1 + 0x124c8);
  uVar26 = 0;
  do {
    uVar35 = uVar15;
    if (uVar15 == uVar26) break;
    uVar34 = (ulong)uVar26;
    uVar35 = uVar26;
    uVar26 = uVar26 + 1;
  } while (*(int *)(lVar24 + uVar34 * 8 + 4) == -1);
  pbVar30 = (byte *)(param_1 + 0x12578);
  pbVar33 = (byte *)(param_1 + 0x12520);
  pbVar1 = (byte *)(param_1 + 0x12538);
  if (uVar15 != uVar35) {
    do {
      uVar34 = (ulong)*(uint *)(lVar24 + (ulong)uVar35 * 8 + 4);
      lVar24 = *(long *)(param_1 + 0x124e0);
      puVar39 = (undefined8 *)(lVar24 + uVar34 * 0x38);
      FUN_1002725c8(param_1,puVar39);
      pvVar19 = operator_new(0x3db8);
      local_b0[0] = thunk_FUN_10019cfbc();
      if ((local_c4 & 1) == 0) {
        lVar36 = lVar24 + uVar34 * 0x38;
        bVar10 = *(byte *)(lVar36 + 0x17);
        uVar25 = (ulong)bVar10;
        sVar3 = *(size_t *)(lVar36 + 8);
        if (-1 < (char)bVar10) {
          sVar3 = uVar25;
        }
        bVar43 = *(byte *)(param_1 + 0x1258f);
        sVar46 = (size_t)bVar43;
        sVar40 = *(size_t *)(param_1 + 0x12580);
        sVar4 = sVar40;
        if (-1 < (char)bVar43) {
          sVar4 = sVar46;
        }
        if (sVar3 == sVar4) {
          puVar6 = (void *)*puVar39;
          if (-1 < (char)bVar10) {
            puVar6 = puVar39;
          }
          pbVar32 = *(byte **)pbVar30;
          if (-1 < (char)bVar43) {
            pbVar32 = pbVar30;
          }
          if ((char)bVar10 < '\0') {
            if ((sVar3 != 0) && (iVar16 = _memcmp(puVar6,pbVar32,sVar3), iVar16 != 0))
            goto LAB_10027ac18;
          }
          else if (sVar3 != 0) {
            if ((uint)*pbVar32 == ((uint)(void *)*puVar39 & 0xff)) {
              pbVar28 = (byte *)(lVar24 + uVar34 * 0x38);
              do {
                uVar25 = uVar25 - 1;
                pbVar32 = pbVar32 + 1;
                pbVar28 = pbVar28 + 1;
                if (uVar25 == 0) goto LAB_10027ac20;
              } while (*pbVar28 == *pbVar32);
            }
            goto LAB_10027ac18;
          }
LAB_10027ac20:
          *(void **)(param_1 + 0x11ff0) = pvVar19;
          local_c4 = 1;
        }
        else {
LAB_10027ac18:
          local_c4 = 0;
        }
      }
      else {
        bVar43 = *(byte *)(param_1 + 0x1258f);
        sVar46 = (size_t)bVar43;
        sVar40 = *(size_t *)(param_1 + 0x12580);
        local_c4 = 1;
      }
      lVar36 = lVar24 + uVar34 * 0x38;
      uVar49 = *(undefined4 *)(param_1 + 0x12590);
      bVar10 = *(byte *)(lVar36 + 0x17);
      uVar25 = (ulong)bVar10;
      sVar3 = *(size_t *)(lVar36 + 8);
      if (-1 < (char)bVar10) {
        sVar3 = uVar25;
      }
      if (-1 < (char)bVar43) {
        sVar40 = sVar46;
      }
      if (sVar3 == sVar40) {
        puVar6 = (undefined8 *)*puVar39;
        if (-1 < (char)bVar10) {
          puVar6 = puVar39;
        }
        pbVar32 = *(byte **)pbVar30;
        if (-1 < (char)bVar43) {
          pbVar32 = pbVar30;
        }
        if ((char)bVar10 < '\0') {
          if (sVar3 == 0) goto LAB_10027ad1c;
          iVar16 = _memcmp(puVar6,pbVar32,sVar3);
          bVar13 = iVar16 == 0;
        }
        else if (sVar3 == 0) {
LAB_10027ad1c:
          bVar13 = true;
        }
        else if ((uint)*pbVar32 == ((uint)(undefined8 *)*puVar39 & 0xff)) {
          pbVar28 = (byte *)(lVar24 + uVar34 * 0x38);
          do {
            uVar25 = uVar25 - 1;
            pbVar32 = pbVar32 + 1;
            pbVar28 = pbVar28 + 1;
            bVar13 = uVar25 == 0;
            if (uVar25 == 0) break;
          } while (*pbVar28 == *pbVar32);
        }
        else {
          bVar13 = false;
        }
      }
      else {
        bVar13 = false;
      }
      FUN_10019de60(0,uVar49,pvVar19,lVar36 + 0x18,1,0,0,0,0,puVar39,lVar36 + 0x28,&DAT_101d91650,
                    &DAT_101d91198,&DAT_101d91650,&DAT_101d91650,&DAT_101d91198,bVar13,1);
      bVar10 = *(byte *)(lVar36 + 0x17);
      uVar25 = (ulong)bVar10;
      sVar3 = *(size_t *)(lVar36 + 8);
      if (-1 < (char)bVar10) {
        sVar3 = uVar25;
      }
      bVar43 = *(byte *)(param_1 + 0x12537);
      sVar4 = *(size_t *)(param_1 + 0x12528);
      if (-1 < (char)bVar43) {
        sVar4 = (ulong)bVar43;
      }
      if (sVar3 == sVar4) {
        puVar6 = (undefined8 *)*puVar39;
        if (-1 < (char)bVar10) {
          puVar6 = puVar39;
        }
        pbVar32 = *(byte **)pbVar33;
        if (-1 < (char)bVar43) {
          pbVar32 = pbVar33;
        }
        if ((char)bVar10 < '\0') {
          if ((sVar3 != 0) && (iVar16 = _memcmp(puVar6,pbVar32,sVar3), iVar16 != 0))
          goto LAB_10027ae80;
        }
        else if (sVar3 != 0) {
          if ((uint)*pbVar32 == ((uint)(undefined8 *)*puVar39 & 0xff)) {
            pbVar28 = (byte *)(lVar24 + uVar34 * 0x38);
            uVar41 = uVar25;
            do {
              uVar41 = uVar41 - 1;
              pbVar32 = pbVar32 + 1;
              pbVar28 = pbVar28 + 1;
              if (uVar41 == 0) goto LAB_10027af08;
            } while (*pbVar28 == *pbVar32);
          }
          goto LAB_10027ae80;
        }
LAB_10027af08:
        uVar20 = local_b0[0];
        lVar24 = FUN_10015d3ec();
        FUN_1004e3170(&local_98,lVar24 + 0x50c8);
        pppppppuVar21 = &local_98;
        pppppppuVar22 = (undefined8 *******)&DAT_101d91650;
LAB_10027af6c:
        FUN_10019fcd4(uVar20,pppppppuVar21,pppppppuVar22);
        if (local_90 != (void *)0x0) {
          operator_delete__(local_90);
        }
      }
      else {
LAB_10027ae80:
        bVar43 = *(byte *)(param_1 + 0x1254f);
        sVar4 = *(size_t *)(param_1 + 0x12540);
        if (-1 < (char)bVar43) {
          sVar4 = (ulong)bVar43;
        }
        if (sVar3 == sVar4) {
          puVar6 = (undefined8 *)*puVar39;
          if (-1 < (char)bVar10) {
            puVar6 = puVar39;
          }
          pbVar32 = *(byte **)pbVar1;
          if (-1 < (char)bVar43) {
            pbVar32 = pbVar1;
          }
          if ((char)bVar10 < '\0') {
            if ((sVar3 == 0) || (iVar16 = _memcmp(puVar6,pbVar32,sVar3), iVar16 == 0))
            goto LAB_10027af44;
          }
          else {
            if (sVar3 == 0) {
LAB_10027af44:
              uVar20 = local_b0[0];
              lVar24 = FUN_10015d3ec();
              FUN_1004e3170(&local_98,lVar24 + 0x5308);
              pppppppuVar22 = &local_98;
              pppppppuVar21 = (undefined8 *******)&DAT_101d91650;
              goto LAB_10027af6c;
            }
            if ((uint)*pbVar32 == ((uint)(undefined8 *)*puVar39 & 0xff)) {
              pbVar28 = (byte *)(lVar24 + uVar34 * 0x38);
              do {
                uVar25 = uVar25 - 1;
                pbVar32 = pbVar32 + 1;
                pbVar28 = pbVar28 + 1;
                if (uVar25 == 0) goto LAB_10027af44;
              } while (*pbVar28 == *pbVar32);
            }
          }
        }
      }
      FUN_10019f470(*(undefined4 *)(param_1 + 0x12590),DAT_101d237d0,local_b0[0]);
      FUN_10027b9b0(param_1 + 0x11fc0,local_b0);
      FUN_100642bd8(param_1 + 0x59c0,local_b0[0],1);
      uVar9 = *(uint *)(param_1 + 0x124c0);
      uVar26 = uVar9;
      if (uVar9 <= uVar35 + 1) {
        uVar26 = uVar35 + 1;
      }
      do {
        uVar35 = uVar35 + 1;
        uVar11 = uVar26;
        if (uVar9 <= uVar35) break;
        uVar11 = uVar35;
      } while (*(int *)(*(long *)(param_1 + 0x124c8) + (ulong)uVar35 * 8 + 4) == -1);
      uVar35 = uVar11;
      if (uVar15 == uVar35) break;
      lVar24 = *(long *)(param_1 + 0x124c8);
    } while( true );
  }
  lVar24 = param_1 + 0xde98;
  if (*(int *)(param_1 + 0x12470) == 0) {
    iVar16 = 0;
  }
  else {
    uVar34 = 0;
    iVar16 = 0;
    do {
      operator_new(0x3db8);
      local_80[0] = thunk_FUN_10019cfbc();
      local_88 = 0;
      lVar36 = *(long *)(param_1 + 0x12478);
      local_98 = (undefined8 *******)0x0;
      local_90 = (void *)0x0;
      if ((*(long **)(param_1 + 0x11ef8) == (long *)0x0) ||
         (iVar14 = (**(code **)(**(long **)(param_1 + 0x11ef8) + 0x40))(), iVar14 != 2)) {
        FUN_100188e18(lVar24,lVar36 + uVar34 * 0x188 + 0x20,&local_98);
      }
      else {
        std::string::operator=((string *)&local_98,(string *)(lVar36 + uVar34 * 0x188 + 8));
      }
      lVar44 = lVar36 + uVar34 * 0x188;
      psVar45 = (size_t *)(lVar44 + 0x10);
      puVar37 = (ulong *)(lVar36 + uVar34 * 0x188);
      puVar39 = (undefined8 *)(lVar44 + 8);
      bVar10 = *(byte *)(lVar44 + 0x1f);
      uVar25 = (ulong)bVar10;
      sVar3 = *psVar45;
      if (-1 < (char)bVar10) {
        sVar3 = uVar25;
      }
      bVar43 = *(byte *)(param_1 + 0x1258f);
      sVar4 = *(size_t *)(param_1 + 0x12580);
      if (-1 < (char)bVar43) {
        sVar4 = (ulong)bVar43;
      }
      if (sVar3 == sVar4) {
        puVar6 = (void *)*puVar39;
        if (-1 < (char)bVar10) {
          puVar6 = puVar39;
        }
        pbVar32 = *(byte **)pbVar30;
        if (-1 < (char)bVar43) {
          pbVar32 = pbVar30;
        }
        if ((char)bVar10 < '\0') {
          if ((sVar3 == 0) || (iVar14 = _memcmp(puVar6,pbVar32,sVar3), iVar14 == 0))
          goto LAB_10027a3f4;
        }
        else if (sVar3 == 0) {
LAB_10027a3f4:
          *(undefined8 *)(param_1 + 0x11ff0) = local_80[0];
          pcVar38 = "generic_star_outline";
          if ((int)*puVar37 < 0) {
            pcVar38 = "generic_star";
          }
          FUN_100652cdc(param_1 + 0xa148,pcVar38);
          iVar14 = *(int *)(lVar36 + uVar34 * 0x188 + 0xac);
          if (*(int *)(*(long *)(param_1 + 0x11ff0) + 0x3d68) != iVar14) {
            *(int *)(*(long *)(param_1 + 0x11ff0) + 0x3d68) = iVar14;
          }
          local_c4 = 1;
        }
        else if ((uint)*pbVar32 == ((uint)(void *)*puVar39 & 0xff)) {
          pbVar28 = (byte *)(lVar36 + uVar34 * 0x188 + 9);
          do {
            uVar25 = uVar25 - 1;
            pbVar32 = pbVar32 + 1;
            if (uVar25 == 0) goto LAB_10027a3f4;
            bVar10 = *pbVar28;
            pbVar28 = pbVar28 + 1;
          } while (bVar10 == *pbVar32);
        }
      }
      uVar15 = FUN_1002725c8(param_1,&local_98);
      uVar20 = local_80[0];
      if ((uVar15 == 0xffffffff) ||
         (*(int *)(*(long *)(param_1 + 0x124b8) + (ulong)uVar15 * 0x50 + 0x38) == 0)) {
        uVar15 = (uint)*puVar37;
        if ((*puVar37 & 0xffff) != 0) {
          bVar13 = false;
          goto LAB_10027a4ac;
        }
        FUN_10027b9b0(param_1 + 0x11fb0,local_80);
        uVar20 = local_80[0];
        lVar42 = lVar36 + uVar34 * 0x188;
        uVar41 = *puVar37;
        uVar49 = *(undefined4 *)(lVar42 + 0xe8);
        uVar7 = *(undefined4 *)(lVar42 + 0xb8);
        uVar50 = *(undefined8 *)(lVar42 + 0xa0);
        uVar48 = *(undefined4 *)(param_1 + 0x12590);
        bVar10 = *(byte *)(lVar44 + 0x1f);
        uVar25 = (ulong)bVar10;
        sVar3 = *psVar45;
        if (-1 < (char)bVar10) {
          sVar3 = uVar25;
        }
        bVar43 = *(byte *)(param_1 + 0x1258f);
        sVar4 = *(size_t *)(param_1 + 0x12580);
        if (-1 < (char)bVar43) {
          sVar4 = (ulong)bVar43;
        }
        if (sVar3 == sVar4) {
          puVar6 = (undefined8 *)*puVar39;
          if (-1 < (char)bVar10) {
            puVar6 = puVar39;
          }
          pbVar32 = *(byte **)pbVar30;
          if (-1 < (char)bVar43) {
            pbVar32 = pbVar30;
          }
          if ((char)bVar10 < '\0') {
            if (sVar3 == 0) goto LAB_10027a930;
            iVar14 = _memcmp(puVar6,pbVar32,sVar3);
            bVar13 = iVar14 == 0;
          }
          else if (sVar3 == 0) {
LAB_10027a930:
            bVar13 = true;
          }
          else {
            if ((uint)*pbVar32 != ((uint)(undefined8 *)*puVar39 & 0xff)) goto LAB_10027a87c;
            pbVar28 = (byte *)(lVar36 + uVar34 * 0x188 + 9);
            do {
              uVar25 = uVar25 - 1;
              pbVar32 = pbVar32 + 1;
              bVar13 = uVar25 == 0;
              if (uVar25 == 0) break;
              bVar10 = *pbVar28;
              pbVar28 = pbVar28 + 1;
            } while (bVar10 == *pbVar32);
          }
        }
        else {
LAB_10027a87c:
          bVar13 = false;
        }
        uVar15 = (uint)uVar41;
        FUN_10019de60(uVar50,uVar48,uVar20,lVar42 + 0x20,uVar15 & 0xffff,uVar15 >> 0x18 & 0x7f,
                      uVar49,uVar7,uVar15 >> 0x1f,puVar39,lVar42 + 0x30,lVar42 + 0x40,lVar42 + 0x50,
                      lVar42 + 0x68,lVar42 + 0x78,lVar42 + 0x88,bVar13,0);
        FUN_10019f470(*(undefined4 *)(param_1 + 0x12590),DAT_101d237d0,local_80[0]);
        lVar36 = param_1 + 0x85c0;
LAB_10027a9d8:
        FUN_100642bd8(lVar36,local_80[0],1);
      }
      else {
        iVar16 = iVar16 + (uint)*(byte *)(*(long *)(param_1 + 0x124b8) + (ulong)uVar15 * 0x50 + 0x4c
                                         );
        uVar15 = (uint)*puVar37;
        bVar13 = true;
LAB_10027a4ac:
        lVar42 = lVar36 + uVar34 * 0x188;
        uVar49 = *(undefined4 *)(lVar42 + 0xe8);
        uVar7 = *(undefined4 *)(lVar42 + 0xb8);
        uVar50 = *(undefined8 *)(lVar42 + 0xa0);
        uVar48 = *(undefined4 *)(param_1 + 0x12590);
        bVar10 = *(byte *)(lVar44 + 0x1f);
        uVar25 = (ulong)bVar10;
        sVar3 = *psVar45;
        if (-1 < (char)bVar10) {
          sVar3 = uVar25;
        }
        bVar43 = *(byte *)(param_1 + 0x1258f);
        sVar4 = *(size_t *)(param_1 + 0x12580);
        if (-1 < (char)bVar43) {
          sVar4 = (ulong)bVar43;
        }
        if (sVar3 == sVar4) {
          puVar6 = (undefined8 *)*puVar39;
          if (-1 < (char)bVar10) {
            puVar6 = puVar39;
          }
          pbVar32 = *(byte **)pbVar30;
          if (-1 < (char)bVar43) {
            pbVar32 = pbVar30;
          }
          if ((char)bVar10 < '\0') {
            if (sVar3 == 0) goto LAB_10027a870;
            iVar14 = _memcmp(puVar6,pbVar32,sVar3);
            bVar12 = iVar14 == 0;
          }
          else if (sVar3 == 0) {
LAB_10027a870:
            bVar12 = true;
          }
          else {
            if ((uint)*pbVar32 != ((uint)(undefined8 *)*puVar39 & 0xff)) goto LAB_10027a588;
            pbVar28 = (byte *)(lVar36 + uVar34 * 0x188 + 9);
            do {
              uVar25 = uVar25 - 1;
              pbVar32 = pbVar32 + 1;
              bVar12 = uVar25 == 0;
              if (uVar25 == 0) break;
              bVar10 = *pbVar28;
              pbVar28 = pbVar28 + 1;
            } while (bVar10 == *pbVar32);
          }
        }
        else {
LAB_10027a588:
          bVar12 = false;
        }
        pbVar32 = (byte *)(lVar42 + 0x50);
        pbVar28 = (byte *)(lVar42 + 0x88);
        FUN_10019de60(uVar50,uVar48,uVar20,lVar42 + 0x20,uVar15 & 0xffff,uVar15 >> 0x18 & 0x7f,
                      uVar49,uVar7,uVar15 >> 0x1f,puVar39,lVar42 + 0x30,lVar42 + 0x40,pbVar32,
                      lVar42 + 0x68,lVar42 + 0x78,pbVar28,bVar12,0);
        iVar8 = *(int *)(lVar36 + uVar34 * 0x188 + 0x148);
        iVar14 = 0x41;
        if (iVar8 != -1) {
          iVar14 = iVar8;
        }
        sVar23 = (short)*puVar37;
        if (sVar23 == 2) {
          lVar44 = lVar36 + uVar34 * 0x188;
          FUN_10019fc80(local_80[0],iVar14,lVar44 + 0x150,lVar44 + 0x160,lVar44 + 0x168);
          sVar23 = (short)*puVar37;
        }
        uVar20 = local_80[0];
        if (sVar23 == 3) {
          lVar44 = lVar36 + uVar34 * 0x188;
          FUN_10001549c(local_b0,"");
          FUN_10019fc80(uVar20,iVar14,lVar44 + 0x150,lVar44 + 0x160,local_b0);
        }
        FUN_10019f470(*(undefined4 *)(param_1 + 0x12590),DAT_101d237d0,local_80[0]);
        if (bVar13) {
          FUN_10027b9b0(param_1 + 0x11fc0,local_80);
          lVar36 = param_1 + 0x59c0;
          goto LAB_10027a9d8;
        }
        bVar10 = *(byte *)(lVar18 + 0x54a7);
        uVar25 = (ulong)bVar10;
        sVar3 = *(size_t *)(lVar18 + 0x5498);
        if (-1 < (char)bVar10) {
          sVar3 = uVar25;
        }
        if (sVar3 == 0) {
LAB_10027a88c:
          bVar10 = *(byte *)(lVar17 + 0x548f);
          uVar25 = (ulong)bVar10;
          sVar3 = *(size_t *)(lVar17 + 0x5480);
          if (-1 < (char)bVar10) {
            sVar3 = uVar25;
          }
          if (sVar3 == 0) {
LAB_10027a9f4:
            FUN_10027b9b0(param_1 + 0x11f90,local_80);
            lVar36 = param_1 + 0x64c0;
          }
          else {
            bVar43 = *(byte *)(lVar42 + 0x67);
            sVar4 = *(size_t *)(lVar36 + uVar34 * 0x188 + 0x58);
            if (-1 < (char)bVar43) {
              sVar4 = (ulong)bVar43;
            }
            if (sVar3 != sVar4) goto LAB_10027a9f4;
            pbVar28 = *(byte **)pbVar32;
            if (-1 < (char)bVar43) {
              pbVar28 = pbVar32;
            }
            if (-1 < (char)bVar10) {
              pbVar32 = (byte *)(lVar17 + 0x5479);
              if ((uint)*pbVar28 == ((uint)*(void **)(lVar17 + 0x5478) & 0xff)) {
                do {
                  uVar25 = uVar25 - 1;
                  pbVar28 = pbVar28 + 1;
                  if (uVar25 == 0) goto LAB_10027aaf8;
                  bVar10 = *pbVar32;
                  pbVar32 = pbVar32 + 1;
                } while (bVar10 == *pbVar28);
              }
              goto LAB_10027a9f4;
            }
            iVar14 = _memcmp(*(void **)(lVar17 + 0x5478),pbVar28,sVar3);
            if (iVar14 != 0) goto LAB_10027a9f4;
LAB_10027aaf8:
            FUN_10027b9b0(param_1 + 0x11fd0,local_80);
            lVar36 = param_1 + 0x6fc0;
          }
          FUN_100642bd8(lVar36,local_80[0],1);
        }
        else {
          bVar43 = *(byte *)(lVar42 + 0x9f);
          sVar4 = *(size_t *)(lVar36 + uVar34 * 0x188 + 0x90);
          if (-1 < (char)bVar43) {
            sVar4 = (ulong)bVar43;
          }
          if (sVar3 != sVar4) goto LAB_10027a88c;
          pbVar27 = *(byte **)pbVar28;
          if (-1 < (char)bVar43) {
            pbVar27 = pbVar28;
          }
          if (-1 < (char)bVar10) {
            pbVar28 = (byte *)(lVar18 + 0x5491);
            if ((uint)*pbVar27 == ((uint)*(void **)(lVar18 + 0x5490) & 0xff)) {
              do {
                uVar25 = uVar25 - 1;
                pbVar27 = pbVar27 + 1;
                if (uVar25 == 0) goto LAB_10027aad4;
                bVar10 = *pbVar28;
                pbVar28 = pbVar28 + 1;
              } while (bVar10 == *pbVar27);
            }
            goto LAB_10027a88c;
          }
          iVar14 = _memcmp(*(void **)(lVar18 + 0x5490),pbVar27,sVar3);
          if (iVar14 != 0) goto LAB_10027a88c;
LAB_10027aad4:
          FUN_10027b9b0(param_1 + 0x11fe0,local_80);
          FUN_100642bd8(param_1 + 0x7ac0,local_80[0],1);
        }
      }
      pvVar29 = (void *)(ulong)local_88._7_1_;
      uVar15 = (uint)(char)local_88._7_1_;
      pvVar19 = local_90;
      if (-1 < (int)uVar15) {
        pvVar19 = pvVar29;
      }
      bVar10 = *(byte *)(param_1 + 0x1251f);
      pvVar5 = *(void **)(param_1 + 0x12510);
      if (-1 < (char)bVar10) {
        pvVar5 = (void *)(ulong)bVar10;
      }
      if (pvVar19 == pvVar5) {
        pppppppuVar22 = (undefined8 *******)local_98;
        if (-1 < (int)uVar15) {
          pppppppuVar22 = &local_98;
        }
        pbVar32 = *(byte **)pbVar31;
        if (-1 < (char)bVar10) {
          pbVar32 = pbVar31;
        }
        if (-1 < (int)uVar15) {
          if (pvVar19 == (void *)0x0) goto LAB_10027aaa4;
          pbVar28 = (byte *)((ulong)&local_98 | 1);
          if ((uint)*pbVar32 == ((uint)local_98 & 0xff)) {
            do {
              pvVar29 = (void *)((long)pvVar29 - 1);
              pbVar32 = pbVar32 + 1;
              if (pvVar29 == (void *)0x0) goto LAB_10027aaa4;
              bVar10 = *pbVar28;
              pbVar28 = pbVar28 + 1;
            } while (bVar10 == *pbVar32);
          }
          goto LAB_10027aab4;
        }
        if ((pvVar19 == (void *)0x0) ||
           (iVar14 = _memcmp(pppppppuVar22,pbVar32,(size_t)pvVar19), iVar14 == 0)) {
LAB_10027aaa4:
          FUN_10027bd4c(param_1,puVar37);
          uVar15 = (uint)local_88._7_1_;
          goto LAB_10027aab4;
        }
LAB_10027aab8:
        operator_delete(local_98);
      }
      else {
LAB_10027aab4:
        if ((uVar15 >> 7 & 1) != 0) goto LAB_10027aab8;
      }
      uVar34 = uVar34 + 1;
    } while (uVar34 < *(uint *)(param_1 + 0x12470));
  }
  uVar34 = (ulong)*(uint *)(param_1 + 0x124b0);
  if (*(uint *)(param_1 + 0x124b0) == 0) {
    iVar14 = 0;
  }
  else {
    iVar14 = 0;
    pbVar30 = (byte *)(*(long *)(param_1 + 0x124b8) + 0x4c);
    do {
      iVar14 = iVar14 + (uint)*pbVar30;
      uVar34 = uVar34 - 1;
      pbVar30 = pbVar30 + 0x50;
    } while (uVar34 != 0);
  }
  *(int *)(param_1 + 0x125a4) = iVar14 - iVar16;
  if (iVar14 - iVar16 == 0) {
    *puVar2 = *puVar2 & 0xfffffffb;
    *(uint *)(param_1 + 0x97ac) = *(uint *)(param_1 + 0x97ac) & 0xfffffffb;
  }
  else {
    *puVar2 = *puVar2 | 4;
    *(uint *)(param_1 + 0x97ac) = *(uint *)(param_1 + 0x97ac) | 4;
    FUN_1004e313c(&local_98);
    FUN_1004e38ac(&local_98,"%d");
    FUN_1006513c0(param_1 + 0x9728,&local_98);
    if (local_90 != (void *)0x0) {
      operator_delete__(local_90);
    }
  }
  bVar10 = *(byte *)(param_1 + 0x1251f);
  uVar34 = (ulong)bVar10;
  sVar3 = *(size_t *)(param_1 + 0x12510);
  if (-1 < (char)bVar10) {
    sVar3 = uVar34;
  }
  bVar43 = *(byte *)(param_1 + 0x12537);
  sVar4 = *(size_t *)(param_1 + 0x12528);
  if (-1 < (char)bVar43) {
    sVar4 = (ulong)bVar43;
  }
  if (sVar3 == sVar4) {
    pbVar30 = *(byte **)pbVar31;
    if (-1 < (char)bVar10) {
      pbVar30 = pbVar31;
    }
    pbVar32 = *(byte **)(param_1 + 0x12520);
    if (-1 < (char)bVar43) {
      pbVar32 = pbVar33;
    }
    if ((char)bVar10 < '\0') {
      if ((sVar3 != 0) && (iVar16 = _memcmp(pbVar30,pbVar32,sVar3), iVar16 != 0))
      goto LAB_10027b158;
    }
    else if (sVar3 != 0) {
      if ((uint)*pbVar32 == ((uint)*(byte **)pbVar31 & 0xff)) {
        pbVar30 = (byte *)(param_1 + 0x12509);
        uVar25 = uVar34;
        do {
          uVar25 = uVar25 - 1;
          pbVar32 = pbVar32 + 1;
          if (uVar25 == 0) goto LAB_10027b1e8;
          bVar43 = *pbVar30;
          pbVar30 = pbVar30 + 1;
        } while (bVar43 == *pbVar32);
      }
      goto LAB_10027b158;
    }
  }
  else {
LAB_10027b158:
    bVar43 = *(byte *)(param_1 + 0x1254f);
    sVar4 = *(size_t *)(param_1 + 0x12540);
    if (-1 < (char)bVar43) {
      sVar4 = (ulong)bVar43;
    }
    if (sVar3 != sVar4) goto LAB_10027b2c4;
    pbVar30 = *(byte **)pbVar31;
    if (-1 < (char)bVar10) {
      pbVar30 = pbVar31;
    }
    pbVar33 = *(byte **)(param_1 + 0x12538);
    if (-1 < (char)bVar43) {
      pbVar33 = pbVar1;
    }
    if ((char)bVar10 < '\0') {
      if ((sVar3 != 0) && (iVar16 = _memcmp(pbVar30,pbVar33,sVar3), iVar16 != 0))
      goto LAB_10027b2c4;
    }
    else if (sVar3 != 0) {
      if ((uint)*pbVar33 == ((uint)*(byte **)pbVar31 & 0xff)) {
        pbVar31 = (byte *)(param_1 + 0x12509);
        do {
          uVar34 = uVar34 - 1;
          pbVar33 = pbVar33 + 1;
          if (uVar34 == 0) goto LAB_10027b1e8;
          bVar10 = *pbVar31;
          pbVar31 = pbVar31 + 1;
        } while (bVar10 == *pbVar33);
      }
      goto LAB_10027b2c4;
    }
  }
LAB_10027b1e8:
  iVar16 = FUN_10015d3f8();
  if (iVar16 != 0) {
    FUN_10015d3ec();
    dVar47 = (double)FUN_1001664b0();
    if (dVar47 <= 0.0) {
      FUN_1001870b0(lVar24,1);
      uVar20 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0xea10) & 1) * 0x130 + 0xe880);
      uVar50 = FUN_1004e0150("MENU_FRIENDS_PLAYER_BANNED",0);
      iVar16 = FUN_1004e3654(uVar20,uVar50);
      if (iVar16 == 0) goto LAB_10027b2c4;
      pcVar38 = "MENU_CHAT_ENTER_YOUR_CHAT";
    }
    else {
      FUN_1001870b0(lVar24,0);
      uVar20 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0xea10) & 1) * 0x130 + 0xe880);
      pcVar38 = "MENU_FRIENDS_PLAYER_BANNED";
      uVar50 = FUN_1004e0150("MENU_FRIENDS_PLAYER_BANNED",0);
      uVar34 = FUN_1004e36c0(uVar20,uVar50);
      if ((uVar34 & 1) == 0) goto LAB_10027b2c4;
    }
    uVar20 = FUN_1004e0150(pcVar38,0);
    FUN_100187120(lVar24,uVar20,0);
  }
LAB_10027b2c4:
  if (*(long *)(param_1 + 0x11ff0) != 0) {
    uVar20 = FUN_100655b6c(param_1 + 0x9c18);
    iVar16 = FUN_1004e36c0(uVar20,*(long *)(param_1 + 0x11ff0) + 0x3cd0);
    if (iVar16 != 0) {
      FUN_1002795e8(param_1,*(undefined8 *)(param_1 + 0x11ff0),1);
    }
  }
  FUN_10027c09c(param_1);
  uVar15 = 4;
  if ((local_c4 & 1) == 0) {
    uVar15 = 0;
  }
  *(uint *)(param_1 + 0x9a54) = *(uint *)(param_1 + 0x9a54) & 0xfffffffb | uVar15;
  return;
}




/* WARNING: Removing unreachable block (ram,0x00010027c3f4) */



/*
 * FUN_10027b34c
 * VA: 0x10027b34c | Source: functions/10027.c:7095
 * CE-gate: NO | Guest-gate: NO
 * Indicators: Vis masks: 6
 * Callees: FUN_1000200a0, FUN_1004e357c, FUN_10064e3cc, FUN_100652cdc
 * Callers: FUN_100273038, FUN_1002741b4, FUN_1002795e8
 */
void FUN_10027b34c(long param_1)

{
  int *piVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 *******pppppppuVar6;
  int iVar7;
  undefined8 *******pppppppuVar8;
  int *piVar9;
  char *pcVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  void *pvVar16;
  float fVar17;
  float fVar18;
  undefined8 ******local_68;
  ulong uStack_60;
  ulong local_58;
  
  lVar12 = *(long *)(param_1 + 0x11ff0);
  if ((lVar12 == 0) || (*(char *)(lVar12 + 0x3db2) != '\0')) {
    *(uint *)(param_1 + 0xa8dc) = *(uint *)(param_1 + 0xa8dc) & 0xfffffffb;
    *(uint *)(param_1 + 0xaecc) = *(uint *)(param_1 + 0xaecc) & 0xfffffffb;
    return;
  }
  local_68 = (undefined8 *******)0x0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_1004e357c(lVar12 + 0x3cd0,&local_68);
  uVar13 = uStack_60;
  pppppppuVar6 = (undefined8 *******)local_68;
  if (-1 < (long)local_58) {
    uVar13 = local_58 >> 0x38;
    pppppppuVar6 = &local_68;
  }
  if (5 < (long)uVar13) {
    piVar1 = (int *)((long)pppppppuVar6 + uVar13);
    pppppppuVar8 = pppppppuVar6;
    while (piVar9 = _memchr(pppppppuVar8,0x47,uVar13 - 5), piVar9 != (int *)0x0) {
      if (*piVar9 == 0x73657547 && (short)piVar9[1] == 0x5f74) {
        if ((piVar9 != piVar1) && ((long)piVar9 - (long)pppppppuVar6 != -1)) {
          *(uint *)(param_1 + 0xa8dc) = *(uint *)(param_1 + 0xa8dc) & 0xfffffffb;
          *(uint *)(param_1 + 0xaecc) = *(uint *)(param_1 + 0xaecc) & 0xfffffffb;
          goto LAB_10027b690;
        }
        break;
      }
      pppppppuVar8 = (undefined8 *******)((long)piVar9 + 1);
      uVar13 = (long)piVar1 - (long)pppppppuVar8;
      if ((long)uVar13 < 6) break;
    }
  }
  lVar12 = *(long *)(param_1 + 0x11ff0);
  bVar5 = *(byte *)(lVar12 + 0x3d67);
  uVar13 = (ulong)bVar5;
  sVar2 = *(size_t *)(lVar12 + 0x3d58);
  if (-1 < (char)bVar5) {
    sVar2 = uVar13;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    pvVar16 = *(void **)(lVar12 + 0x3d50);
    puVar4 = pvVar16;
    if (-1 < (char)bVar5) {
      puVar4 = (undefined8 *)(lVar12 + 0x3d50);
    }
    pbVar15 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar15 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar5 < '\0') {
      if ((sVar2 != 0) && (iVar7 = _memcmp(puVar4,pbVar15,sVar2), iVar7 != 0)) goto LAB_10027b53c;
    }
    else if (sVar2 != 0) {
      if ((uint)*pbVar15 == ((uint)pvVar16 & 0xff)) {
        pbVar14 = (byte *)(lVar12 + 0x3d51);
        do {
          uVar13 = uVar13 - 1;
          pbVar15 = pbVar15 + 1;
          if (uVar13 == 0) goto LAB_10027b5f8;
          bVar5 = *pbVar14;
          pbVar14 = pbVar14 + 1;
        } while (bVar5 == *pbVar15);
      }
      goto LAB_10027b53c;
    }
LAB_10027b5f8:
    if (*(char *)(param_1 + 0x125b1) != '\0') {
      pcVar10 = "generic_team_outline";
      goto LAB_10027b54c;
    }
    uVar11 = *(uint *)(param_1 + 0xaecc) & 0xfffffffb;
  }
  else {
LAB_10027b53c:
    pcVar10 = "generic_team";
LAB_10027b54c:
    FUN_100652cdc(param_1 + 0xb318,pcVar10);
    uVar11 = *(uint *)(param_1 + 0xaecc) | 4;
  }
  *(uint *)(param_1 + 0xaecc) = uVar11;
  lVar12 = *(long *)(param_1 + 0x11ff0);
  bVar5 = *(byte *)(lVar12 + 0x3d2f);
  uVar13 = (ulong)bVar5;
  sVar2 = *(size_t *)(lVar12 + 0x3d20);
  if (-1 < (char)bVar5) {
    sVar2 = uVar13;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    pvVar16 = *(void **)(lVar12 + 0x3d18);
    puVar4 = pvVar16;
    if (-1 < (char)bVar5) {
      puVar4 = (undefined8 *)(lVar12 + 0x3d18);
    }
    pbVar15 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar15 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar5 < '\0') {
      if ((sVar2 != 0) && (iVar7 = _memcmp(puVar4,pbVar15,sVar2), iVar7 != 0)) goto LAB_10027b620;
    }
    else if (sVar2 != 0) {
      if ((uint)*pbVar15 == ((uint)pvVar16 & 0xff)) {
        pbVar14 = (byte *)(lVar12 + 0x3d19);
        do {
          uVar13 = uVar13 - 1;
          pbVar15 = pbVar15 + 1;
          if (uVar13 == 0) goto LAB_10027b6a4;
          bVar5 = *pbVar14;
          pbVar14 = pbVar14 + 1;
        } while (bVar5 == *pbVar15);
      }
      goto LAB_10027b620;
    }
LAB_10027b6a4:
    if (*(char *)(param_1 + 0x125b0) == '\0') {
      uVar11 = *(uint *)(param_1 + 0xa8dc) & 0xfffffffb;
      goto LAB_10027b63c;
    }
    pcVar10 = "generic_guild_outline";
  }
  else {
LAB_10027b620:
    pcVar10 = "generic_guild";
  }
  FUN_100652cdc(param_1 + 0xad28,pcVar10);
  uVar11 = *(uint *)(param_1 + 0xa8dc) | 4;
LAB_10027b63c:
  *(uint *)(param_1 + 0xa8dc) = uVar11;
  if ((*(byte *)(param_1 + 0xaecc) >> 2 & 1) == 0) {
    fVar17 = *(float *)(param_1 + 0xae88);
  }
  else {
    fVar18 = *(float *)(param_1 + 0xae88);
    fVar17 = (float)FUN_10064e3cc(param_1 + 0xae48);
    fVar17 = fVar18 + fVar17 * -0.5 + -48.0;
  }
  if (*(float *)(param_1 + 0xa898) != fVar17) {
    *(float *)(param_1 + 0xa898) = fVar17;
    FUN_1000200a0(param_1 + 0xa858);
  }
LAB_10027b690:
  if ((long)local_58 < 0) {
    operator_delete(local_68);
  }
  return;
}



/*
 * FUN_10027bd4c
 * VA: 0x10027bd4c | Source: functions/10027.c:7618
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 7
 * Callees: FUN_10015d3ec, FUN_10015d3f8, FUN_1001664b0, FUN_1001870b0, FUN_100187120, FUN_100188e18, FUN_10027c18c, FUN_1004e0150 (+5 more)
 * Callers: FUN_10027a11c
 */
void FUN_10027bd4c(long param_1,short *param_2)

{
  long lVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 ***pppuVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  double dVar13;
  undefined1 auStack_78 [8];
  void *local_70;
  undefined1 auStack_68 [8];
  void *local_60;
  undefined8 **local_58;
  size_t local_50;
  ulong local_48;
  
  local_58 = (undefined8 ***)0x0;
  local_50 = 0;
  local_48 = 0;
  lVar1 = param_1 + 0xde98;
  if ((*(long **)(param_1 + 0x11ef8) == (long *)0x0) ||
     (iVar6 = (**(code **)(**(long **)(param_1 + 0x11ef8) + 0x40))(), iVar6 != 2)) {
    FUN_100188e18(lVar1,param_2 + 0x10,&local_58);
  }
  else {
    std::string::operator=((string *)&local_58,(string *)(param_2 + 4));
  }
  uVar10 = local_48 >> 0x38;
  sVar2 = local_50;
  if (-1 < (long)local_48) {
    sVar2 = uVar10;
  }
  bVar5 = *(byte *)(param_1 + 0x1251f);
  sVar3 = *(size_t *)(param_1 + 0x12510);
  if (-1 < (char)bVar5) {
    sVar3 = (ulong)bVar5;
  }
  if (sVar2 != sVar3) goto LAB_10027bf54;
  pppuVar4 = (undefined8 ***)local_58;
  if (-1 < (long)local_48) {
    pppuVar4 = &local_58;
  }
  pbVar12 = *(byte **)(param_1 + 0x12508);
  if (-1 < (char)bVar5) {
    pbVar12 = (byte *)(param_1 + 0x12508);
  }
  if ((long)local_48 < 0) {
    if ((sVar2 != 0) && (iVar6 = _memcmp(pppuVar4,pbVar12,sVar2), iVar6 != 0)) goto LAB_10027bf54;
  }
  else if (sVar2 != 0) {
    if ((uint)*pbVar12 == ((uint)local_58 & 0xff)) {
      pbVar11 = (byte *)((ulong)&local_58 | 1);
      do {
        uVar10 = uVar10 - 1;
        pbVar12 = pbVar12 + 1;
        if (uVar10 == 0) goto LAB_10027be68;
        bVar5 = *pbVar11;
        pbVar11 = pbVar11 + 1;
      } while (bVar5 == *pbVar12);
    }
    goto LAB_10027bf54;
  }
LAB_10027be68:
  pbVar12 = (byte *)(param_1 + 0xea10);
  FUN_1001870b0(lVar1,1);
  if (*param_2 == 0) {
    FUN_1001870b0(lVar1,*(undefined1 *)(param_1 + 0x125b3));
    pcVar9 = "MENU_CHAT_PLAYER_OFFLINE";
LAB_10027bebc:
    uVar7 = FUN_1004e0150(pcVar9,0);
    thunk_FUN_1004e439c(auStack_68,uVar7);
    FUN_1004e3120(auStack_78,"[PLAYER_NAME]");
    FUN_1004e3bc4(auStack_68,0,auStack_78,param_2 + 0x10);
    if (local_70 != (void *)0x0) {
      operator_delete__(local_70);
    }
    uVar7 = FUN_100655b6c(param_1 + ((ulong)*pbVar12 & 1) * 0x130 + 0xe880);
    iVar6 = FUN_1004e36c0(uVar7,auStack_68);
    if (iVar6 != 0) {
      FUN_100187120(lVar1,auStack_68,0);
    }
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
    }
  }
  else {
    if (0.0 < *(double *)(param_2 + 0x50)) {
      FUN_1001870b0(lVar1,0);
      pcVar9 = "MENU_CHAT_PLAYER_BANNED";
      goto LAB_10027bebc;
    }
    iVar6 = FUN_10015d3f8();
    if (iVar6 == 0) {
LAB_10027bfec:
      switch(*param_2) {
      case 1:
      case 3:
      case 4:
        FUN_1001870b0(lVar1,1);
        uVar7 = FUN_100655b6c(param_1 + ((ulong)*pbVar12 & 1) * 0x130 + 0xe880);
        uVar8 = FUN_1004e0150("MENU_CHAT_ENTER_YOUR_CHAT",0);
        iVar6 = FUN_1004e36c0(uVar7,uVar8);
        if (iVar6 != 0) {
          pcVar9 = "MENU_CHAT_ENTER_YOUR_CHAT";
          goto LAB_10027c068;
        }
        break;
      case 2:
        FUN_1001870b0(lVar1,*(undefined1 *)(param_1 + 0x125b3));
        pcVar9 = "MENU_CHAT_PLAYER_IN_GAME";
        goto LAB_10027bebc;
      }
    }
    else {
      FUN_10015d3ec();
      dVar13 = (double)FUN_1001664b0();
      if (dVar13 <= 0.0) goto LAB_10027bfec;
      FUN_1001870b0(lVar1,0);
      uVar7 = FUN_100655b6c(param_1 + ((ulong)*pbVar12 & 1) * 0x130 + 0xe880);
      uVar8 = FUN_1004e0150("MENU_FRIENDS_PLAYER_BANNED",0);
      iVar6 = FUN_1004e36c0(uVar7,uVar8);
      if (iVar6 != 0) {
        pcVar9 = "MENU_FRIENDS_PLAYER_BANNED";
LAB_10027c068:
        uVar7 = FUN_1004e0150(pcVar9,0);
        FUN_100187120(lVar1,uVar7,0);
      }
    }
  }
  if (*(long *)(param_1 + 0x11ff0) != 0) {
    FUN_10027c18c(param_1);
  }
LAB_10027bf54:
  if ((long)local_48 < 0) {
    operator_delete(local_58);
  }
  return;
}



/*
 * FUN_10027c18c
 * VA: 0x10027c18c | Source: functions/10027.c:7810
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 6
 * Callees: FUN_1000153b4, FUN_1000f1e20, FUN_1004e0150, FUN_1004e313c, FUN_1006513c0, thunk_FUN_1004e439c
 * Callers: FUN_1002795e8, FUN_10027bd4c
 */
void FUN_10027c18c(long param_1,long param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  undefined1 auStack_30 [8];
  void *local_28;
  
  if (param_2 == 0) {
    return;
  }
  if (0.0 < *(double *)(param_2 + 0x3d88)) {
    uVar1 = FUN_1004e0150("MENU_FRIENDS_STATUS_BANNED",0);
    thunk_FUN_1004e439c(auStack_30,uVar1);
    FUN_1000f1e20(auStack_40,auStack_30,(long)*(double *)(param_2 + 0x3d88),0);
    FUN_1006513c0(param_1 + 0xb438,auStack_40);
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
    goto LAB_10027c2e0;
  }
  FUN_1004e313c(auStack_30);
  switch(*(undefined4 *)(param_2 + 0x3d98)) {
  case 0:
    pcVar2 = "MENU_FRIENDS_STATUS_OFFLINE";
    break;
  case 1:
    pcVar2 = "MENU_FRIENDS_STATUS_AVAILABLE";
    break;
  case 2:
    uVar1 = FUN_1004e0150("MENU_FRIENDS_STATUS_BUSY",0);
    thunk_FUN_1004e439c(auStack_40,uVar1);
    FUN_1000f1e20(auStack_50,auStack_40,*(undefined4 *)(param_2 + 0x3d9c),0);
    FUN_1000153b4(auStack_30,auStack_50);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
    goto switchD_10027c234_default;
  case 3:
    pcVar2 = "MENU_FRIENDS_STATUS_IN_PARTY";
    break;
  case 4:
    pcVar2 = "MENU_FRIENDS_STATUS_MATCHING";
    break;
  default:
    goto switchD_10027c234_default;
  }
  uVar1 = FUN_1004e0150(pcVar2,0);
  FUN_1000153b4(auStack_30,uVar1);
switchD_10027c234_default:
  FUN_1006513c0(param_1 + 0xb438,auStack_30);
LAB_10027c2e0:
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}



/*
 * FUN_10029deb4
 * VA: 0x10029deb4 | Source: functions/10029.c:10193
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 6
 * Callees: FUN_10001554c, FUN_10029e270, FUN_10029e74c, FUN_1002ecce4, FUN_1004e0150, FUN_10064e20c, FUN_100651038, FUN_1006513c0 (+9 more)
 */
long * FUN_10029deb4(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar8 = (undefined8 *)FUN_10064e20c();
  puVar8[0x17] = param_2;
  *puVar8 = &PTR_thunk_FUN_10021a6bc_1014734a8;
  puVar8 = puVar8 + 0x18;
  thunk_FUN_100655644(puVar8);
  thunk_FUN_100184f78();
  thunk_FUN_100184f78(param_1 + 0x3e1);
  thunk_FUN_10018ceb0();
  thunk_FUN_1001b0818();
  thunk_FUN_1001b0818(param_1 + 0x132c);
  thunk_FUN_1001b0818(param_1 + 0x19b3);
  plVar1 = param_1 + 0x203a;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x2060;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x2086;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0x20ac;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0x20d2;
  thunk_FUN_100650e64();
  plVar6 = param_1 + 0x20f8;
  thunk_FUN_100650e64(plVar6);
  plVar7 = param_1 + 0x211e;
  thunk_FUN_1002eca3c(plVar7,0);
  (**(code **)(*param_1 + 0x78))(param_1,puVar8,1);
  FUN_100655930(puVar8,param_1 + 0x43,1);
  FUN_100655930(puVar8,param_1 + 0x3e1,1);
  FUN_100655930(puVar8,param_1 + 0x132c,1);
  FUN_100655930(puVar8,param_1 + 0x19b3,1);
  FUN_100655930(puVar8,param_1 + 0xca5,1);
  FUN_100655930(puVar8,param_1 + 0x77f,1);
  FUN_100655930(puVar8,plVar1,1);
  FUN_100655930(puVar8,plVar2,1);
  FUN_100655930(puVar8,plVar3,1);
  FUN_100655930(puVar8,plVar4,1);
  FUN_100655930(puVar8,plVar5,1);
  FUN_100655930(puVar8,plVar6,1);
  FUN_100655930(puVar8,plVar7,1);
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_FILTER_NAME_SEARCH_PLACEHOLDER",0);
  FUN_1006513c0(plVar1,uVar9);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_FILTER_TAG_SEARCH_PLACEHOLDER",0);
  FUN_1006513c0(plVar2,uVar9);
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  uVar9 = FUN_1004e0150("GUILD_OVERVIEW_LABEL_TYPE",0);
  FUN_1006513c0(plVar3,uVar9);
  FUN_100651038(plVar4,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_FILTER_FIELD_LANGUAGE",0);
  FUN_1006513c0(plVar4,uVar9);
  FUN_100651038(plVar5,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_FILTER_FIELD_MIN_SKILL_TIER",0);
  FUN_1006513c0(plVar5,uVar9);
  FUN_100651038(plVar6,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_COLUMN_TITLE_PRIME_TIME",0);
  FUN_1006513c0(plVar6,uVar9);
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_FILTER_CONFIRM_SEARCH",0);
  FUN_1002ecce4(plVar7,uVar9);
  local_68 = DAT_101d91884;
  local_90 = thunk_FUN_10029ece0;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x211f,&local_90);
  FUN_10029e270(param_1);
  uVar9 = (**(code **)(*(long *)param_1[0x17] + 0x20))();
  FUN_10029e74c(param_1,uVar9);
  return param_1;
}



/*
 * thunk_FUN_10029deb4
 * VA: 0xthunk_10029deb4 | Source: functions/10029.c:10537
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 6
 * Callees: FUN_10001554c, FUN_10029e270, FUN_10029e74c, FUN_1002ecce4, FUN_1004e0150, FUN_10064e20c, FUN_100651038, FUN_1006513c0 (+9 more)
 * Callers: FUN_10021a4d4
 */
long * thunk_FUN_10029deb4(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  code *pcStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar8 = (undefined8 *)FUN_10064e20c();
  puVar8[0x17] = param_2;
  *puVar8 = &PTR_thunk_FUN_10021a6bc_1014734a8;
  puVar8 = puVar8 + 0x18;
  thunk_FUN_100655644(puVar8);
  thunk_FUN_100184f78();
  thunk_FUN_100184f78(param_1 + 0x3e1);
  thunk_FUN_10018ceb0();
  thunk_FUN_1001b0818();
  thunk_FUN_1001b0818(param_1 + 0x132c);
  thunk_FUN_1001b0818(param_1 + 0x19b3);
  plVar1 = param_1 + 0x203a;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x2060;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x2086;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0x20ac;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0x20d2;
  thunk_FUN_100650e64();
  plVar6 = param_1 + 0x20f8;
  thunk_FUN_100650e64(plVar6);
  plVar7 = param_1 + 0x211e;
  thunk_FUN_1002eca3c(plVar7,0);
  (**(code **)(*param_1 + 0x78))(param_1,puVar8,1);
  FUN_100655930(puVar8,param_1 + 0x43,1);
  FUN_100655930(puVar8,param_1 + 0x3e1,1);
  FUN_100655930(puVar8,param_1 + 0x132c,1);
  FUN_100655930(puVar8,param_1 + 0x19b3,1);
  FUN_100655930(puVar8,param_1 + 0xca5,1);
  FUN_100655930(puVar8,param_1 + 0x77f,1);
  FUN_100655930(puVar8,plVar1,1);
  FUN_100655930(puVar8,plVar2,1);
  FUN_100655930(puVar8,plVar3,1);
  FUN_100655930(puVar8,plVar4,1);
  FUN_100655930(puVar8,plVar5,1);
  FUN_100655930(puVar8,plVar6,1);
  FUN_100655930(puVar8,plVar7,1);
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_FILTER_NAME_SEARCH_PLACEHOLDER",0);
  FUN_1006513c0(plVar1,uVar9);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_FILTER_TAG_SEARCH_PLACEHOLDER",0);
  FUN_1006513c0(plVar2,uVar9);
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  uVar9 = FUN_1004e0150("GUILD_OVERVIEW_LABEL_TYPE",0);
  FUN_1006513c0(plVar3,uVar9);
  FUN_100651038(plVar4,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_FILTER_FIELD_LANGUAGE",0);
  FUN_1006513c0(plVar4,uVar9);
  FUN_100651038(plVar5,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_FILTER_FIELD_MIN_SKILL_TIER",0);
  FUN_1006513c0(plVar5,uVar9);
  FUN_100651038(plVar6,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_COLUMN_TITLE_PRIME_TIME",0);
  FUN_1006513c0(plVar6,uVar9);
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_FILTER_CONFIRM_SEARCH",0);
  FUN_1002ecce4(plVar7,uVar9);
  uStack_68 = DAT_101d91884;
  pcStack_90 = thunk_FUN_10029ece0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x211f,&pcStack_90);
  FUN_10029e270(param_1);
  uVar9 = (**(code **)(*(long *)param_1[0x17] + 0x20))();
  FUN_10029e74c(param_1,uVar9);
  return param_1;
}



/*
 * FUN_10029e270
 * VA: 0x10029e270 | Source: functions/10029.c:10361
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 5
 * Callees: FUN_10001617c, FUN_10001629c, FUN_1000f0a88, FUN_1000f10e4, FUN_1000f13b4, FUN_1000f18d4, FUN_1000f28d0, FUN_10010b098 (+14 more)
 * Callers: FUN_10029deb4, thunk_FUN_10029deb4
 */
void FUN_10029e270(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_f8;
  void *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  void *local_c0;
  void *local_b8;
  void *local_b0;
  char local_a1;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar1 = param_1 + 0x218;
  uVar2 = FUN_1004e0150("MENU_GUILD_SEARCH_FILTER_NAME_SEARCH_PLACEHOLDER",0);
  FUN_1001afd98(lVar1,uVar2,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,1);
  uVar2 = FUN_1004e0150("MENU_GUILD_SEARCH_FILTER_NAME_SEARCH_PLACEHOLDER",0);
  FUN_100185730(lVar1,uVar2);
  FUN_100185e48(lVar1,1,0x10);
  FUN_100185e2c(lVar1,0);
  lVar1 = param_1 + 0x1f08;
  uVar2 = FUN_1004e0150("MENU_GUILD_SEARCH_FILTER_TAG_SEARCH_PLACEHOLDER",0);
  FUN_1001afd98(lVar1,uVar2,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,1);
  FUN_100185e48(lVar1,1,4);
  FUN_100185e2c(lVar1,0);
  local_70 = 0;
  uStack_68 = 0;
  uVar2 = FUN_1000f18d4(&DAT_101d917f8,1);
  FUN_10010b098(&local_70,uVar2);
  uVar2 = FUN_1000f18d4(&DAT_101d91798,1);
  FUN_10010b098(&local_70,uVar2);
  uVar2 = FUN_1000f18d4(&DAT_101d917b0,1);
  FUN_10010b098(&local_70,uVar2);
  uVar2 = FUN_1000f18d4(&DAT_101d917c8,1);
  FUN_10010b098(&local_70,uVar2);
  uVar2 = FUN_1000f18d4(&DAT_101d917e0,1);
  FUN_10010b098(&local_70,uVar2);
  local_80 = 0;
  uStack_78 = 0;
  FUN_10001617c(&local_80,&DAT_101d917f8);
  FUN_10001617c(&local_80,&DAT_101d91798);
  FUN_10001617c(&local_80,&DAT_101d917b0);
  FUN_10001617c(&local_80,&DAT_101d917c8);
  FUN_10001617c(&local_80,&DAT_101d917e0);
  FUN_10018d7d4(0x447a0000,0x447a0000,0,0x3f800000,0x3f800000,param_1 + 0x3bf8,&local_70,&local_80,1
                ,1,0);
  iVar3 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  do {
    FUN_1000f10e4(&local_b8,iVar3,1);
    FUN_10010b098(&local_90,&local_b8);
    if (local_b0 != (void *)0x0) {
      operator_delete__(local_b0);
    }
    FUN_1000f13b4(&local_b8,iVar3);
    FUN_10001617c(&local_a0,&local_b8);
    if (local_a1 < '\0') {
      operator_delete(local_b8);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x10);
  FUN_1001b0c70(0x442f0000,param_1 + 0x6528,&local_90,&local_a0,1);
  local_b8 = (void *)0x0;
  local_b0 = (void *)0x0;
  uVar2 = FUN_1004e0150("MENU_DROPDDOWN_OPTION_ANY",0);
  FUN_10010b098(&local_b8,uVar2);
  uVar2 = FUN_1000f0a88(0xffffffff,0,0);
  FUN_10010b098(&local_b8,uVar2);
  FUN_1004e313c(auStack_c8);
  iVar3 = 0;
  do {
    FUN_1004e38ac(auStack_c8,"%d ");
    uVar2 = FUN_1000f0a88(iVar3,1,0);
    FUN_1004e372c(auStack_c8,uVar2);
    FUN_10010b098(&local_b8,auStack_c8);
    iVar3 = iVar3 + 3;
  } while (iVar3 != 0x1e);
  local_d8 = 0;
  uStack_d0 = 0;
  lVar1 = param_1 + 0x9960;
  FUN_1001b0c70(0x442f0000,lVar1,&local_b8,&local_d8,1);
  FUN_1001b0f48(lVar1,0,1,0);
  FUN_1001b10ec(0x3f666666,0x3f4ccccd,lVar1);
  local_e8 = 0;
  uStack_e0 = 0;
  uVar2 = FUN_1004e0150("MENU_DROPDDOWN_OPTION_ANY",0);
  FUN_10010b098(&local_e8,uVar2);
  iVar3 = 0;
  do {
    FUN_1000f28d0(&local_f8,iVar3,1);
    FUN_10010b098(&local_e8,&local_f8);
    if (local_f0 != (void *)0x0) {
      operator_delete__(local_f0);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x18);
  local_f8 = 0;
  local_f0 = (void *)0x0;
  param_1 = param_1 + 0xcd98;
  FUN_1001b0c70(0x442f0000,param_1,&local_e8,&local_f8,1);
  FUN_1001b1134(param_1,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_1001b10ec(0x3f666666,0x3f4ccccd,param_1);
  FUN_10001629c(&local_f8,1);
  FUN_10010b1a8(&local_e8,1);
  FUN_10001629c(&local_d8,1);
  if (local_c0 != (void *)0x0) {
    operator_delete__(local_c0);
  }
  FUN_10010b1a8(&local_b8,1);
  FUN_10001629c(&local_a0,1);
  FUN_10010b1a8(&local_90,1);
  FUN_10001629c(&local_80,1);
  FUN_10010b1a8(&local_70,1);
  return;
}



/*
 * FUN_10029fee8
 * VA: 0x10029fee8 | Source: functions/10029.c:11244
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 9
 * Callees: FUN_10001554c, FUN_1001c3fc8, FUN_1002a026c, FUN_1002a027c, FUN_1002a028c, FUN_1002a029c, FUN_1002a02ac, FUN_1002ebee0 (+11 more)
 */
long * FUN_10029fee8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  code *local_a0;
  long *plStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  
  puVar8 = (undefined8 *)FUN_10064e20c();
  puVar8[0x17] = 0;
  *puVar8 = &PTR_thunk_FUN_1002a04c4_1014814e8;
  puVar8 = puVar8 + 0x18;
  thunk_FUN_100655644(puVar8);
  plVar1 = param_1 + 0x43;
  thunk_FUN_1002ed128(plVar1,0);
  plVar2 = param_1 + 0x1d3;
  thunk_FUN_1002ed128(plVar2,0);
  plVar3 = param_1 + 0x363;
  thunk_FUN_1002ed128(plVar3,0);
  plVar4 = param_1 + 0x4f3;
  thunk_FUN_1002ed128(plVar4,0);
  thunk_FUN_10017b958(param_1 + 0x683,0);
  thunk_FUN_1001c397c(param_1 + 0x8d8);
  FUN_1006505b8(param_1 + 0x9ac);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x683,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar8,1);
  FUN_100655930(puVar8,plVar1,1);
  FUN_100655930(puVar8,plVar2,1);
  FUN_100655930(puVar8,plVar3,1);
  FUN_100655930(puVar8,plVar4,1);
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_NO_RESULTS",0);
  FUN_1006513c0(param_1 + 0x88e,uVar9);
  puVar6 = PTR_s_build___MenuPartsCommon_tga_101854970;
  puVar5 = PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_BUTTON_NAME_SEARCH",0);
  FUN_1002ed2b4(plVar1,puVar6,"search_small",puVar5,uVar9);
  FUN_1002ebee0(0x42480000,0x41a00000,plVar1);
  uVar7 = DAT_101d91884;
  local_78 = DAT_101d91884;
  local_a0 = FUN_1002a026c;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x44,&local_a0);
  puVar6 = PTR_s_build___MenuPartsCommon_tga_101854970;
  puVar5 = PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_BUTTON_NAME_REFRESH",0);
  FUN_1002ed2b4(plVar2,puVar6,"generic_refresh",puVar5,uVar9);
  FUN_1002ebee0(0x42480000,0x41a00000,plVar2);
  local_78 = uVar7;
  local_a0 = FUN_1002a027c;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x1d4,&local_a0);
  puVar6 = PTR_s_build___MenuPartsCommon_tga_101854970;
  puVar5 = PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_BUTTON_NAME_INVITES",0);
  FUN_1002ed2b4(plVar3,puVar6,"generic_invite_friend",puVar5,uVar9);
  FUN_1002ebee0(0x42480000,0x41a00000,plVar3);
  local_78 = uVar7;
  local_a0 = FUN_1002a028c;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x364,&local_a0);
  puVar6 = PTR_s_build___MenuPartsCommon_tga_101854970;
  puVar5 = PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_BUTTON_NAME_CREATE_NEW",0);
  FUN_1002ed2b4(plVar4,puVar6,"generic_guild",puVar5,uVar9);
  FUN_1002ebee0(0x42480000,0x41a00000,plVar4);
  local_78 = uVar7;
  local_a0 = FUN_1002a029c;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x4f4,&local_a0);
  FUN_1001c3fc8(param_1 + 0x8d8,"GUILD.INVITES");
  local_78 = DAT_101d23540;
  local_a0 = FUN_1002a02ac;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 1,&local_a0);
  return param_1;
}



/*
 * thunk_FUN_10029fee8
 * VA: 0xthunk_10029fee8 | Source: functions/10029.c:11350
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 9
 * Callees: FUN_10001554c, FUN_1001c3fc8, FUN_1002a026c, FUN_1002a027c, FUN_1002a028c, FUN_1002a029c, FUN_1002a02ac, FUN_1002ebee0 (+11 more)
 * Callers: FUN_1001f0830, thunk_FUN_1001f0830
 */
long * thunk_FUN_10029fee8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  code *pcStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  puVar8 = (undefined8 *)FUN_10064e20c();
  puVar8[0x17] = 0;
  *puVar8 = &PTR_thunk_FUN_1002a04c4_1014814e8;
  puVar8 = puVar8 + 0x18;
  thunk_FUN_100655644(puVar8);
  plVar1 = param_1 + 0x43;
  thunk_FUN_1002ed128(plVar1,0);
  plVar2 = param_1 + 0x1d3;
  thunk_FUN_1002ed128(plVar2,0);
  plVar3 = param_1 + 0x363;
  thunk_FUN_1002ed128(plVar3,0);
  plVar4 = param_1 + 0x4f3;
  thunk_FUN_1002ed128(plVar4,0);
  thunk_FUN_10017b958(param_1 + 0x683,0);
  thunk_FUN_1001c397c(param_1 + 0x8d8);
  FUN_1006505b8(param_1 + 0x9ac);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x683,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar8,1);
  FUN_100655930(puVar8,plVar1,1);
  FUN_100655930(puVar8,plVar2,1);
  FUN_100655930(puVar8,plVar3,1);
  FUN_100655930(puVar8,plVar4,1);
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_NO_RESULTS",0);
  FUN_1006513c0(param_1 + 0x88e,uVar9);
  puVar6 = PTR_s_build___MenuPartsCommon_tga_101854970;
  puVar5 = PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_BUTTON_NAME_SEARCH",0);
  FUN_1002ed2b4(plVar1,puVar6,"search_small",puVar5,uVar9);
  FUN_1002ebee0(0x42480000,0x41a00000,plVar1);
  uVar7 = DAT_101d91884;
  uStack_78 = DAT_101d91884;
  pcStack_a0 = FUN_1002a026c;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x44,&pcStack_a0);
  puVar6 = PTR_s_build___MenuPartsCommon_tga_101854970;
  puVar5 = PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_BUTTON_NAME_REFRESH",0);
  FUN_1002ed2b4(plVar2,puVar6,"generic_refresh",puVar5,uVar9);
  FUN_1002ebee0(0x42480000,0x41a00000,plVar2);
  uStack_78 = uVar7;
  pcStack_a0 = FUN_1002a027c;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x1d4,&pcStack_a0);
  puVar6 = PTR_s_build___MenuPartsCommon_tga_101854970;
  puVar5 = PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_BUTTON_NAME_INVITES",0);
  FUN_1002ed2b4(plVar3,puVar6,"generic_invite_friend",puVar5,uVar9);
  FUN_1002ebee0(0x42480000,0x41a00000,plVar3);
  uStack_78 = uVar7;
  pcStack_a0 = FUN_1002a028c;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x364,&pcStack_a0);
  puVar6 = PTR_s_build___MenuPartsCommon_tga_101854970;
  puVar5 = PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  uVar9 = FUN_1004e0150("MENU_GUILD_SEARCH_BUTTON_NAME_CREATE_NEW",0);
  FUN_1002ed2b4(plVar4,puVar6,"generic_guild",puVar5,uVar9);
  FUN_1002ebee0(0x42480000,0x41a00000,plVar4);
  uStack_78 = uVar7;
  pcStack_a0 = FUN_1002a029c;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x4f4,&pcStack_a0);
  FUN_1001c3fc8(param_1 + 0x8d8,"GUILD.INVITES");
  uStack_78 = DAT_101d23540;
  pcStack_a0 = FUN_1002a02ac;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_a0);
  return param_1;
}



/*
 * FUN_1002a669c
 * VA: 0x1002a669c | Source: functions/1002a.c:4795
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 3, Vis masks: 1
 * Callees: FUN_1001b1390, FUN_1002ecce4, FUN_1004e0150
 * Callers: FUN_1002a616c, FUN_1002a6a5c, FUN_1002a6b00, thunk_FUN_1002a616c
 */
void FUN_1002a669c(long param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  
  *(uint *)(param_1 + 0x144) =
       *(uint *)(param_1 + 0x144) & 0xfffffffb | (uint)*(byte *)(param_1 + 0x23c2) << 2;
  pcVar1 = "MAIN_MENU_PLAY";
  if (*(char *)(param_1 + 0x23c3) != '\0') {
    pcVar1 = "MENU_FRIENDS_STATUS_IN_PARTY";
  }
  uVar2 = FUN_1004e0150(pcVar1,0);
  FUN_1002ecce4(param_1 + 0xe40,uVar2);
  if ((*(byte *)(param_1 + 0x23c2) == 0) || (*(char *)(param_1 + 0x23c3) != '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  FUN_1001b1390(param_1 + 0xd70,uVar2,1);
  return;
}



/*
 * FUN_1002c2f48
 * VA: 0x1002c2f48 | Source: functions/1002c.c:2325
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 3, Vis masks: 2
 * Callees: FUN_1004e0150, FUN_10064e5ec, FUN_1006513c0, FUN_100652cac
 * Callers: FUN_1002c37d0
 */
void FUN_1002c2f48(long *param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  
  uVar3 = 4;
  uVar1 = 0;
  if (param_2 == 0) {
    uVar1 = uVar3;
  }
  *(uint *)((long)param_1 + 0x62c) = *(uint *)((long)param_1 + 0x62c) & 0xfffffffb | uVar1;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  *(uint *)((long)param_1 + 0x294) = *(uint *)((long)param_1 + 0x294) & 0xfffffffb | uVar3;
  if (param_2 == 0) {
    plVar2 = param_1 + 0x202;
  }
  else {
    plVar2 = param_1 + 0x53;
    if (param_1[0x6d] == 0) {
      FUN_100652cac(plVar2,DAT_101854a08,"main_nav_home_in_queue");
    }
    if (param_1[0x8b] == 0) {
      FUN_100652cac(param_1 + 0x71,DAT_101854a08,"main_nav_circle_in_queue");
    }
    FUN_10064e5ec(0,0,plVar2,8,param_1 + 0x42,8);
    FUN_10064e5ec(0,0,param_1 + 0x71,8,plVar2,8);
    FUN_10064e5ec(0,0,param_1 + 0x8f,8,plVar2,8);
    plVar2 = (long *)FUN_1004e0150("MENU_FRIENDS_STATUS_MATCHING",0);
  }
  FUN_1006513c0(param_1 + 0x108,plVar2);
                    /* WARNING: Could not recover jumptable at 0x0001002c3080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}



/*
 * FUN_1002dbb5c
 * VA: 0x1002dbb5c | Source: functions/1002d.c:8186
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 5, Vis masks: 3
 * Callees: FUN_1000153b4, FUN_100181af8, FUN_1001b4c0c, FUN_1002bdf4c, FUN_1002bdf5c, FUN_1002bdf6c, FUN_1004e0150, FUN_1004e3120 (+6 more)
 * Callers: FUN_100209ff0
 */
void FUN_1002dbb5c(long *param_1,uint param_2,ulong param_3,undefined8 param_4,int param_5,
                  undefined4 param_6)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_b0 [8];
  void *local_a8;
  undefined1 auStack_a0 [8];
  void *local_98;
  undefined1 auStack_90 [8];
  void *local_88;
  undefined1 auStack_80 [8];
  void *local_78;
  undefined1 auStack_70 [8];
  void *local_68;
  
  uVar7 = (uint)param_3;
  uVar3 = uVar7 | param_2 ^ 1;
  uVar8 = 4;
  if (uVar3 == 0) {
    uVar8 = 0;
  }
  *(uint *)((long)param_1 + 0x5f4) = *(uint *)((long)param_1 + 0x5f4) & 0xfffffffb | uVar8;
  *(uint *)((long)param_1 + 0x504) = *(uint *)((long)param_1 + 0x504) & 0xfffffffb | uVar8;
  if ((uVar3 == 1) && (param_2 != 0)) {
    *(uint *)((long)param_1 + 0x74c) = *(uint *)((long)param_1 + 0x74c) & 0xfffffffb;
  }
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (*(char *)((long)param_1 + 0x804d) == '\0') {
    return;
  }
  FUN_1004e313c(auStack_70);
  if ((uVar7 & param_2) == 1) {
    uVar5 = FUN_1004e0150("MENU_SKINS_HUB_CRAFTING_INSTRUCTIONS_DECRAFT_BLUEPRINT",0);
    FUN_1000153b4(auStack_70,uVar5);
    uVar5 = FUN_1004e0150("MENU_SKINS_HUB_DECRAFT_BUTTON",0);
    FUN_100181af8(param_1 + 0x650,uVar5);
LAB_1002dbca0:
    bVar4 = 1;
  }
  else {
    if (uVar7 == 0) {
      uVar5 = FUN_1004e0150("MENU_SKINS_HUB_CRAFTING_INSTRUCTIONS_MISSING_BLUEPRINT",0);
      FUN_1000153b4(auStack_70,uVar5);
      goto LAB_1002dbca0;
    }
    uVar5 = FUN_1004e0150("MENU_SKINS_HUB_CRAFTING_INSTRUCTIONS_OWNED_BLUEPRINT",0);
    FUN_1000153b4(auStack_70,uVar5);
    bVar4 = 0;
  }
  cVar2 = *(char *)(param_1[0x1008] + 0x34);
  FUN_1004e3120(auStack_80,"[EM]");
  FUN_1004e3120(auStack_90,"{0,320,340,340}");
  FUN_1004e3d50(auStack_70,0,auStack_80,auStack_90);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
  }
  FUN_1004e3120(auStack_80,"[/EM]");
  FUN_1004e3120(auStack_90,"{\\}");
  FUN_1004e3d50(auStack_70,0,auStack_80,auStack_90);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
  }
  FUN_1004e313c(auStack_80);
  FUN_1004e38ac(auStack_80,"%d");
  FUN_1004e313c(auStack_90);
  FUN_1004e38ac(auStack_90,"%d");
  uVar5 = FUN_1004e0150(*(undefined8 *)(param_1[0x1008] + 0x18),0);
  thunk_FUN_1004e439c(auStack_a0,uVar5);
  FUN_1004e3120(auStack_b0,"[SKIN_NAME]");
  FUN_1004e3bc4(auStack_70,0,auStack_b0,auStack_a0);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
  }
  FUN_1004e3120(auStack_b0,"[NUM_ESSENCE]");
  FUN_1004e3bc4(auStack_70,0,auStack_b0,auStack_80);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
  }
  if ((uVar7 & param_2) == 0) {
    if ((param_3 & 1) != 0) goto LAB_1002dbe50;
    puVar6 = (undefined1 *)FUN_1004e0150("MENU_SKINS_HUB_CRAFTING_BLUEPRINT_MISSING",0);
  }
  else {
    puVar6 = auStack_70;
  }
  FUN_1006513c0(param_1 + 0x907,puVar6);
LAB_1002dbe50:
  FUN_1006513c0(param_1 + 0x969,auStack_70);
  FUN_1001b4c0c(param_1 + 0x98f,uVar7 & param_5 <= (int)param_4 & (param_2 ^ 1));
  uVar8 = 0x44;
  if (!(bool)(bVar4 & cVar2 == '\0')) {
    uVar8 = 0;
  }
  *(uint *)((long)param_1 + 0x48bc) = uVar8 | *(uint *)((long)param_1 + 0x48bc) & 0xffffffbb;
  FUN_1006513c0(param_1 + 0xef7,auStack_80);
  if (*(char *)((long)param_1 + 0x804e) == '\0') {
    FUN_1006513c0(param_1 + 0xdda,auStack_90);
  }
  plVar1 = param_1 + 0xf1d;
  FUN_1002bdf4c(plVar1,param_6);
  FUN_1002bdf5c(plVar1,param_4);
  FUN_1002bdf6c(plVar1,param_3);
  uVar8 = 0x10;
  if (uVar7 == 0) {
    uVar8 = 0;
  }
  *(uint *)((long)param_1 + 0x796c) = *(uint *)((long)param_1 + 0x796c) & 0xffffffef | uVar8;
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
  }
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  return;
}



/*
 * FUN_1002e0920
 * VA: 0x1002e0920 | Source: functions/1002e.c:214
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 6, Vis masks: 1
 * Callees: FUN_10001554c, FUN_1000200a0, FUN_1001da0ec, FUN_1001da294, FUN_1001da2c0, FUN_1002e10fc, FUN_1002e1114, FUN_1002e112c (+34 more)
 */
long * FUN_1002e0920(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long *plVar15;
  code *local_a0;
  long *plStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  
  puVar13 = (undefined8 *)FUN_10064e20c();
  puVar13[0x17] = 0;
  puVar13[0x19] = 0;
  *puVar13 = &PTR_thunk_FUN_1002e30a4_101489b58;
  puVar13[0x18] = &PTR_FUN_101489cb0;
  puVar1 = puVar13 + 0x1a;
  FUN_10064e264(puVar1);
  plVar15 = param_1 + 0x31;
  thunk_FUN_100652c08();
  plVar2 = param_1 + 0x4f;
  FUN_10064e264(plVar2);
  plVar3 = param_1 + 0x66;
  FUN_10064e264(plVar3);
  plVar4 = param_1 + 0x7d;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0x9b;
  thunk_FUN_1002eca3c(plVar5,0);
  plVar6 = param_1 + 0x1e4;
  thunk_FUN_1002eca3c(plVar6,0);
  plVar7 = param_1 + 0x32d;
  thunk_FUN_1002eca3c(plVar7,0);
  plVar8 = param_1 + 0x476;
  thunk_FUN_1001d9da8(plVar8);
  thunk_FUN_1005357f4(param_1 + 0x5f3);
  thunk_FUN_10020a5c4(param_1 + 0x738);
  plVar9 = param_1 + 0x74d;
  FUN_10064e264(plVar9);
  plVar10 = param_1 + 0x764;
  thunk_FUN_100652c08();
  thunk_FUN_1001ceb64(param_1 + 0x782,0);
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  FUN_100642bd8(puVar1,plVar3,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(plVar3,plVar5,1);
  FUN_100642bd8(plVar3,plVar6,1);
  FUN_100642bd8(plVar3,plVar7,1);
  FUN_100642bd8(puVar1,plVar8,1);
  FUN_100642bd8(puVar1,plVar15,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,param_1[0x739],1);
  FUN_100642bd8(plVar2,plVar9,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x782,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar10,1);
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar4,&DAT_101158af1,2);
  uVar11 = DAT_101d91884;
  local_78 = DAT_101d91884;
  local_a0 = FUN_1002e10fc;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x9c,&local_a0);
  FUN_1002eb970(plVar5,1);
  FUN_1002ecc7c(plVar5,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0);
  FUN_1002ebea0(plVar5,1);
  FUN_1002ebe0c(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_1002ebe4c(plVar5,&DAT_101158aed);
  uVar14 = FUN_1004e0150("MENU_PEOPLE_GUILD_TAB_HEADER",0);
  FUN_1002ecce4(plVar5,uVar14);
  FUN_1002ebee0(0x42200000,0x41a00000,plVar5);
  FUN_1002ebef4(plVar5,0xffa0837d);
  local_78 = uVar11;
  local_a0 = FUN_1002e1114;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x1e5,&local_a0);
  FUN_1002eb970(plVar6,1);
  FUN_1002ecc7c(plVar6,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0);
  FUN_1002ebea0(plVar6,1);
  FUN_1002ebe0c(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_1002ebe4c(plVar6,&DAT_101158aed);
  uVar14 = FUN_1004e0150("MENU_PEOPLE_USER_TEAM_TAB_HEADER",0);
  FUN_1002ecce4(plVar6,uVar14);
  FUN_1002ebee0(0x42200000,0x41a00000,plVar6);
  FUN_1002ebef4(plVar6,0xffa0837d);
  local_78 = uVar11;
  local_a0 = FUN_1002e112c;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x32e,&local_a0);
  FUN_1002eb970(plVar7,1);
  FUN_1002ecc7c(plVar7,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0);
  FUN_1002ebea0(plVar7,1);
  FUN_1002ebe0c(plVar7,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_1002ebe4c(plVar7,&DAT_101158aed);
  uVar14 = FUN_1004e0150("MENU_FRIENDS_ADD_FRIEND",0);
  FUN_1002ecce4(plVar7,uVar14);
  FUN_1002ebee0(0x42200000,0x41a00000,plVar7);
  FUN_1002ebef4(plVar7,0xffa0837d);
  FUN_1001da0ec(plVar8,puVar13 + 0x18);
  FUN_1001da294(plVar8,0x56261d1d);
  FUN_1001da2c0(plVar8,0xff261d1d);
  FUN_100652cac(plVar15,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  FUN_100652dd4(plVar15,&DAT_10115a164,2);
  *(byte *)(param_1 + 0x4c) = *(byte *)(param_1 + 0x4c) | 1;
  uVar12 = *(uint *)((long)param_1 + 0x20c);
  if ((uVar12 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x20c) = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x3300;
    FUN_1000200a0(plVar15);
  }
  local_a0 = (code *)((ulong)local_a0 & 0xffffffffffff0000);
  FUN_10064e5b8(plVar9,&local_a0);
  FUN_10064e4dc(plVar9,0);
  *(uint *)((long)param_1 + 0x3ba4) = *(uint *)((long)param_1 + 0x3ba4) & 0xffffffef;
  FUN_100652cac(plVar10,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  if ((*(uint *)((long)param_1 + 0x3ba4) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x3ba4) = *(uint *)((long)param_1 + 0x3ba4) & 0xffff807f;
    FUN_1000200a0(plVar10);
  }
  local_78 = DAT_101dbd484;
  local_a0 = thunk_FUN_1002e2948;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x765,&local_a0);
  local_78 = DAT_101dbd4c0;
  local_a0 = FUN_1002e1148;
  plVar15 = param_1 + 1;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(plVar15,&local_a0);
  local_78 = DAT_101dbd4bc;
  local_a0 = thunk_FUN_1002e2948;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(plVar15,&local_a0);
  local_78 = FUN_100644a94("UI::MENU_SOCIAL_CLEAR_TARGET");
  local_a0 = FUN_1002e1154;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(plVar15,&local_a0);
  uVar12 = *(uint *)((long)param_1 + 0x2fc);
  if ((uVar12 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x2fc) = uVar12 & 0xffff807f;
    FUN_1000200a0(plVar2);
    uVar12 = *(uint *)((long)param_1 + 0x2fc);
  }
  *(uint *)((long)param_1 + 0x2fc) = uVar12 & 0xfffffffb;
  plVar15 = (long *)thunk_FUN_10064dde8();
  FUN_10064e524(plVar3,plVar15);
  (**(code **)(*plVar15 + 0x68))(plVar15,plVar5,0,10);
  (**(code **)(*plVar15 + 0x70))(plVar15,0x14);
  (**(code **)(*plVar15 + 0x68))(plVar15,plVar6,0,10);
  (**(code **)(*plVar15 + 0x78))(plVar15,0x14,1);
  (**(code **)(*plVar15 + 0x68))(plVar15,plVar7,0,0x12);
  FUN_10064a8b0(plVar15,0x28,0x14,0x28,0x14);
  *(undefined1 *)(plVar15 + 1) = 0x51;
  plVar15 = (long *)thunk_FUN_10064de70();
  FUN_10064e524(puVar1,plVar15);
  uVar12 = FUN_10064e4e4(plVar3);
  FUN_10064e47c((float)uVar12,0,puVar1);
  (**(code **)(*plVar15 + 0x68))(plVar15,plVar3,0,0x12);
  (**(code **)(*plVar15 + 0x68))(plVar15,plVar8,1,2);
  *(undefined1 *)(plVar15 + 1) = 0x51;
  plVar15 = (long *)thunk_FUN_10064de70();
  FUN_10064e524(plVar2,plVar15);
  (**(code **)(*plVar15 + 0x68))(plVar15,param_1[0x739],1,2);
  (**(code **)(*plVar15 + 0x68))(plVar15,plVar9,0,2);
  return param_1;
}



/*
 * thunk_FUN_1002e0920
 * VA: 0xthunk_1002e0920 | Source: functions/1002e.c:501
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 6, Vis masks: 1
 * Callees: FUN_10001554c, FUN_1000200a0, FUN_1001da0ec, FUN_1001da294, FUN_1001da2c0, FUN_1002e10fc, FUN_1002e1114, FUN_1002e112c (+34 more)
 * Callers: FUN_10020cfb8, thunk_FUN_10020cfb8
 */
long * thunk_FUN_1002e0920(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long *plVar15;
  code *pcStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  puVar13 = (undefined8 *)FUN_10064e20c();
  puVar13[0x17] = 0;
  puVar13[0x19] = 0;
  *puVar13 = &PTR_thunk_FUN_1002e30a4_101489b58;
  puVar13[0x18] = &PTR_FUN_101489cb0;
  puVar1 = puVar13 + 0x1a;
  FUN_10064e264(puVar1);
  plVar15 = param_1 + 0x31;
  thunk_FUN_100652c08();
  plVar2 = param_1 + 0x4f;
  FUN_10064e264(plVar2);
  plVar3 = param_1 + 0x66;
  FUN_10064e264(plVar3);
  plVar4 = param_1 + 0x7d;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0x9b;
  thunk_FUN_1002eca3c(plVar5,0);
  plVar6 = param_1 + 0x1e4;
  thunk_FUN_1002eca3c(plVar6,0);
  plVar7 = param_1 + 0x32d;
  thunk_FUN_1002eca3c(plVar7,0);
  plVar8 = param_1 + 0x476;
  thunk_FUN_1001d9da8(plVar8);
  thunk_FUN_1005357f4(param_1 + 0x5f3);
  thunk_FUN_10020a5c4(param_1 + 0x738);
  plVar9 = param_1 + 0x74d;
  FUN_10064e264(plVar9);
  plVar10 = param_1 + 0x764;
  thunk_FUN_100652c08();
  thunk_FUN_1001ceb64(param_1 + 0x782,0);
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  FUN_100642bd8(puVar1,plVar3,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(plVar3,plVar5,1);
  FUN_100642bd8(plVar3,plVar6,1);
  FUN_100642bd8(plVar3,plVar7,1);
  FUN_100642bd8(puVar1,plVar8,1);
  FUN_100642bd8(puVar1,plVar15,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,param_1[0x739],1);
  FUN_100642bd8(plVar2,plVar9,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x782,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar10,1);
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar4,&DAT_101158af1,2);
  uVar11 = DAT_101d91884;
  uStack_78 = DAT_101d91884;
  pcStack_a0 = FUN_1002e10fc;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x9c,&pcStack_a0);
  FUN_1002eb970(plVar5,1);
  FUN_1002ecc7c(plVar5,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0);
  FUN_1002ebea0(plVar5,1);
  FUN_1002ebe0c(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_1002ebe4c(plVar5,&DAT_101158aed);
  uVar14 = FUN_1004e0150("MENU_PEOPLE_GUILD_TAB_HEADER",0);
  FUN_1002ecce4(plVar5,uVar14);
  FUN_1002ebee0(0x42200000,0x41a00000,plVar5);
  FUN_1002ebef4(plVar5,0xffa0837d);
  uStack_78 = uVar11;
  pcStack_a0 = FUN_1002e1114;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x1e5,&pcStack_a0);
  FUN_1002eb970(plVar6,1);
  FUN_1002ecc7c(plVar6,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0);
  FUN_1002ebea0(plVar6,1);
  FUN_1002ebe0c(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_1002ebe4c(plVar6,&DAT_101158aed);
  uVar14 = FUN_1004e0150("MENU_PEOPLE_USER_TEAM_TAB_HEADER",0);
  FUN_1002ecce4(plVar6,uVar14);
  FUN_1002ebee0(0x42200000,0x41a00000,plVar6);
  FUN_1002ebef4(plVar6,0xffa0837d);
  uStack_78 = uVar11;
  pcStack_a0 = FUN_1002e112c;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x32e,&pcStack_a0);
  FUN_1002eb970(plVar7,1);
  FUN_1002ecc7c(plVar7,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0);
  FUN_1002ebea0(plVar7,1);
  FUN_1002ebe0c(plVar7,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_1002ebe4c(plVar7,&DAT_101158aed);
  uVar14 = FUN_1004e0150("MENU_FRIENDS_ADD_FRIEND",0);
  FUN_1002ecce4(plVar7,uVar14);
  FUN_1002ebee0(0x42200000,0x41a00000,plVar7);
  FUN_1002ebef4(plVar7,0xffa0837d);
  FUN_1001da0ec(plVar8,puVar13 + 0x18);
  FUN_1001da294(plVar8,0x56261d1d);
  FUN_1001da2c0(plVar8,0xff261d1d);
  FUN_100652cac(plVar15,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  FUN_100652dd4(plVar15,&DAT_10115a164,2);
  *(byte *)(param_1 + 0x4c) = *(byte *)(param_1 + 0x4c) | 1;
  uVar12 = *(uint *)((long)param_1 + 0x20c);
  if ((uVar12 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x20c) = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x3300;
    FUN_1000200a0(plVar15);
  }
  pcStack_a0 = (code *)((ulong)pcStack_a0 & 0xffffffffffff0000);
  FUN_10064e5b8(plVar9,&pcStack_a0);
  FUN_10064e4dc(plVar9,0);
  *(uint *)((long)param_1 + 0x3ba4) = *(uint *)((long)param_1 + 0x3ba4) & 0xffffffef;
  FUN_100652cac(plVar10,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  if ((*(uint *)((long)param_1 + 0x3ba4) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x3ba4) = *(uint *)((long)param_1 + 0x3ba4) & 0xffff807f;
    FUN_1000200a0(plVar10);
  }
  uStack_78 = DAT_101dbd484;
  pcStack_a0 = thunk_FUN_1002e2948;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x765,&pcStack_a0);
  uStack_78 = DAT_101dbd4c0;
  pcStack_a0 = FUN_1002e1148;
  plVar15 = param_1 + 1;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(plVar15,&pcStack_a0);
  uStack_78 = DAT_101dbd4bc;
  pcStack_a0 = thunk_FUN_1002e2948;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(plVar15,&pcStack_a0);
  uStack_78 = FUN_100644a94("UI::MENU_SOCIAL_CLEAR_TARGET");
  pcStack_a0 = FUN_1002e1154;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(plVar15,&pcStack_a0);
  uVar12 = *(uint *)((long)param_1 + 0x2fc);
  if ((uVar12 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x2fc) = uVar12 & 0xffff807f;
    FUN_1000200a0(plVar2);
    uVar12 = *(uint *)((long)param_1 + 0x2fc);
  }
  *(uint *)((long)param_1 + 0x2fc) = uVar12 & 0xfffffffb;
  plVar15 = (long *)thunk_FUN_10064dde8();
  FUN_10064e524(plVar3,plVar15);
  (**(code **)(*plVar15 + 0x68))(plVar15,plVar5,0,10);
  (**(code **)(*plVar15 + 0x70))(plVar15,0x14);
  (**(code **)(*plVar15 + 0x68))(plVar15,plVar6,0,10);
  (**(code **)(*plVar15 + 0x78))(plVar15,0x14,1);
  (**(code **)(*plVar15 + 0x68))(plVar15,plVar7,0,0x12);
  FUN_10064a8b0(plVar15,0x28,0x14,0x28,0x14);
  *(undefined1 *)(plVar15 + 1) = 0x51;
  plVar15 = (long *)thunk_FUN_10064de70();
  FUN_10064e524(puVar1,plVar15);
  uVar12 = FUN_10064e4e4(plVar3);
  FUN_10064e47c((float)uVar12,0,puVar1);
  (**(code **)(*plVar15 + 0x68))(plVar15,plVar3,0,0x12);
  (**(code **)(*plVar15 + 0x68))(plVar15,plVar8,1,2);
  *(undefined1 *)(plVar15 + 1) = 0x51;
  plVar15 = (long *)thunk_FUN_10064de70();
  FUN_10064e524(plVar2,plVar15);
  (**(code **)(*plVar15 + 0x68))(plVar15,param_1[0x739],1,2);
  (**(code **)(*plVar15 + 0x68))(plVar15,plVar9,0,2);
  return param_1;
}



/*
 * FUN_1002e17ec
 * VA: 0x1002e17ec | Source: functions/1002e.c:980
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 10
 * Callees: FUN_1000153b4, FUN_10001549c, FUN_10001f0d8, FUN_10003330c, FUN_10003c048, FUN_10003c1ec, FUN_10003d5bc, FUN_1000f1e20 (+20 more)
 * Callers: FUN_1002e14fc
 */
void FUN_1002e17ec(long param_1,long param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  float fVar11;
  undefined1 auStack_1d8 [4];
  float local_1d4;
  undefined1 auStack_1d0 [8];
  void *local_1c8;
  undefined4 local_1c0;
  float local_1bc;
  void *local_1b8;
  undefined1 auStack_1b0 [8];
  void *local_1a8;
  void *local_1a0;
  void *local_198;
  undefined7 local_190;
  char cStack_189;
  char local_179;
  undefined4 local_178;
  undefined8 local_174;
  undefined1 auStack_168 [8];
  void *local_160;
  undefined1 auStack_158 [8];
  void *local_150;
  undefined1 auStack_148 [8];
  void *local_140;
  undefined **local_138;
  undefined1 auStack_130 [16];
  long local_120;
  code *pcStack_118;
  long local_108;
  undefined8 local_e8;
  void *local_e0;
  void *local_d8;
  char local_c1;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_98;
  undefined4 local_94;
  undefined4 local_90;
  
  if (*(int *)(param_2 + 0x276c) == 0x41) {
    return;
  }
  thunk_FUN_1001cd434(&local_138);
  puVar6 = &DAT_101d91650;
  thunk_FUN_1004e439c(auStack_148,&DAT_101d91650);
  pcVar5 = "MENU_FRIENDS_IN_MATCH_DETAILS_PARTY_TYPE_GUILD";
  switch(*(undefined4 *)(param_2 + 0x2780)) {
  case 0:
    pcVar5 = "MENU_FRIENDS_IN_MATCH_DETAILS_PARTY_TYPE_SOLO";
    break;
  case 1:
    break;
  case 2:
    pcVar5 = "MENU_FRIENDS_IN_MATCH_DETAILS_PARTY_TYPE_TEAM";
    break;
  case 3:
    goto switchD_1002e1870_caseD_3;
  default:
    goto switchD_1002e1870_default;
  }
  puVar6 = (undefined8 *)FUN_1004e0150(pcVar5,0);
switchD_1002e1870_caseD_3:
  FUN_1000153b4(auStack_148,puVar6);
switchD_1002e1870_default:
  FUN_1004e313c(auStack_158);
  uVar1 = *(uint *)(param_2 + 0x276c);
  if ((uVar1 < 0x34) && ((0xc6affd9ff9fffU >> ((ulong)uVar1 & 0x3f) & 1) != 0)) {
    uVar7 = FUN_1004e0150((&PTR_s_MENU_FRIENDS_IN_MATCH_DETAILS_GA_101489cd0)[(int)uVar1],0);
    FUN_1000153b4(auStack_158,uVar7);
  }
  uVar7 = FUN_1004e0150("MENU_FRIENDS_IN_MATCH_DETAILS_MATCH_TYPE",0);
  thunk_FUN_1004e439c(auStack_168,uVar7);
  FUN_1004e3120(&local_1a0,"[PARTY_TYPE]");
  FUN_1004e3bc4(auStack_168,0,&local_1a0,auStack_148);
  if (local_198 != (void *)0x0) {
    operator_delete__(local_198);
  }
  FUN_1004e3120(&local_1a0,"[GAME_QUEUE]");
  FUN_1004e3bc4(auStack_168,0,&local_1a0,auStack_158);
  if (local_198 != (void *)0x0) {
    operator_delete__(local_198);
  }
  thunk_FUN_1004e439c(&local_1a0,auStack_168);
  FUN_10003330c(&local_190,&DAT_101d91198);
  local_178 = 0;
  local_174 = 0xc120000041000000;
  FUN_10003c048(auStack_130,&local_1a0);
  if (local_179 < '\0') {
    operator_delete((void *)CONCAT17(cStack_189,local_190));
  }
  if (local_198 != (void *)0x0) {
    operator_delete__(local_198);
  }
  uVar2 = *(undefined4 *)(param_2 + 0x2764);
  uVar7 = FUN_1004e0150("MENU_FRIENDS_IN_MATCH_DETAILS_MATCH_TIME",0);
  FUN_1000f1e20(auStack_1b0,uVar7,uVar2,0);
  thunk_FUN_1004e439c(&local_1a0,auStack_1b0);
  FUN_10003330c(&local_190,&DAT_101d91198);
  local_178 = 1;
  local_174 = 0x41f0000042200000;
  FUN_10003c048(auStack_130,&local_1a0);
  if (local_179 < '\0') {
    operator_delete((void *)CONCAT17(cStack_189,local_190));
  }
  if (local_198 != (void *)0x0) {
    operator_delete__(local_198);
    local_1a0 = (void *)0x0;
    local_198 = (void *)0x0;
  }
  if (local_1a8 != (void *)0x0) {
    operator_delete__(local_1a8);
  }
  thunk_FUN_1004e439c(&local_1a0,&DAT_101d91650);
  FUN_10003330c(&local_190,&DAT_101d91198);
  local_178 = 2;
  local_174 = 0x41f00000;
  FUN_10003c048(auStack_130,&local_1a0);
  if (local_179 < '\0') {
    operator_delete((void *)CONCAT17(cStack_189,local_190));
  }
  if (local_198 != (void *)0x0) {
    operator_delete__(local_198);
  }
  FUN_1004e313c(auStack_1b0);
  plVar8 = (long *)(param_2 + 0x2788);
  if (*(char *)(param_2 + 0x279f) < '\0') {
    if (*(int *)(param_2 + 0x2790) == 0) goto LAB_1002e1b04;
    plVar8 = (long *)*plVar8;
  }
  else if (*(char *)(param_2 + 0x279f) == '\0') goto LAB_1002e1b04;
  lVar10 = FUN_10034be08(plVar8);
  uVar7 = FUN_1004e0150(*(undefined8 *)(lVar10 + 0x18),0);
  FUN_1000153b4(auStack_1b0,uVar7);
LAB_1002e1b04:
  iVar4 = FUN_1004e36c0(auStack_1b0,&DAT_101d91650);
  if (iVar4 == 0) {
    uVar7 = FUN_1004e0150("MENU_FRIENDS_IN_MATCH_DETAILS_HERO_SELECT",0);
    thunk_FUN_1004e439c(&local_1c0,uVar7);
    thunk_FUN_1004e439c(&local_1a0,&local_1c0);
    FUN_10003330c(&local_190,&DAT_101d91198);
    local_178 = 0;
    local_174 = 0xc120000042200000;
    FUN_10003c048(auStack_130,&local_1a0);
    if (local_179 < '\0') {
      operator_delete((void *)CONCAT17(cStack_189,local_190));
    }
    pvVar3 = local_1b8;
    if (local_198 != (void *)0x0) {
      operator_delete__(local_198);
      pvVar3 = local_1b8;
    }
  }
  else {
    uVar7 = FUN_1004e0150("MENU_FRIENDS_IN_MATCH_DETAILS_PLAYING_TITLE",0);
    thunk_FUN_1004e439c(&local_1a0,uVar7);
    FUN_10003330c(&local_190,&DAT_101d91198);
    local_178 = 0;
    local_174 = 0xc120000041000000;
    FUN_10003c048(auStack_130,&local_1a0);
    if (local_179 < '\0') {
      operator_delete((void *)CONCAT17(cStack_189,local_190));
    }
    if (local_198 != (void *)0x0) {
      operator_delete__(local_198);
    }
    thunk_FUN_1004e439c(&local_1a0,auStack_1b0);
    FUN_10003330c(&local_190,&DAT_101d91198);
    local_178 = 1;
    local_174 = 0x41f0000042200000;
    FUN_10003c048(auStack_130,&local_1a0);
    pvVar3 = local_198;
    if (local_179 < '\0') {
      operator_delete((void *)CONCAT17(cStack_189,local_190));
      pvVar3 = local_198;
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  if (*(int *)(param_2 + 0x2770) != 0) {
    thunk_FUN_1004e439c(&local_1a0,&DAT_101d91650);
    FUN_10003330c(&local_190,&DAT_101d91198);
    local_178 = 2;
    local_174 = 0x41f00000;
    FUN_10003c048(auStack_130,&local_1a0);
    if (local_179 < '\0') {
      operator_delete((void *)CONCAT17(cStack_189,local_190));
    }
    if (local_198 != (void *)0x0) {
      operator_delete__(local_198);
    }
    uVar7 = FUN_1004e0150("MENU_FRIENDS_IN_MATCH_DETAILS_PARTY_TITLE",0);
    thunk_FUN_1004e439c(&local_1c0,uVar7);
    thunk_FUN_1004e439c(&local_1a0,&local_1c0);
    FUN_10003330c(&local_190,&DAT_101d91198);
    local_178 = 0;
    local_174 = 0xc120000041000000;
    FUN_10003c048(auStack_130,&local_1a0);
    if (local_179 < '\0') {
      operator_delete((void *)CONCAT17(cStack_189,local_190));
    }
    if (local_198 != (void *)0x0) {
      operator_delete__(local_198);
    }
    uVar1 = *(uint *)(param_2 + 0x2770);
    if (uVar1 != 0) {
      lVar10 = 0;
      do {
        thunk_FUN_1004e439c(auStack_1d0,*(long *)(param_2 + 0x2778) + lVar10);
        FUN_1004e3170(&local_1a0,param_2 + 0x2718);
        uVar9 = FUN_1004e3654(auStack_1d0,&local_1a0);
        if (local_198 != (void *)0x0) {
          operator_delete__(local_198);
        }
        if ((uVar9 & 1) == 0) {
          thunk_FUN_1004e439c(&local_1a0,auStack_1d0);
          FUN_10003330c(&local_190,&DAT_101d91198);
          local_178 = 1;
          local_174 = 0x41f0000041000000;
          FUN_10003c048(auStack_130,&local_1a0);
          if (local_179 < '\0') {
            operator_delete((void *)CONCAT17(cStack_189,local_190));
          }
          if (local_198 != (void *)0x0) {
            operator_delete__(local_198);
          }
        }
        if (local_1c8 != (void *)0x0) {
          operator_delete__(local_1c8);
        }
        lVar10 = lVar10 + 0x10;
      } while ((ulong)uVar1 * 0x10 - lVar10 != 0);
    }
    FUN_1004e3170(auStack_1d0,param_2 + 0x2718);
    thunk_FUN_1004e439c(&local_1a0,auStack_1d0);
    FUN_10003330c(&local_190,&DAT_101d91198);
    local_178 = 1;
    local_174 = 0x41f0000041000000;
    FUN_10003c048(auStack_130,&local_1a0);
    if (local_179 < '\0') {
      operator_delete((void *)CONCAT17(cStack_189,local_190));
    }
    if (local_198 != (void *)0x0) {
      operator_delete__(local_198);
    }
    if (local_1c8 != (void *)0x0) {
      operator_delete__(local_1c8);
    }
    if (local_1b8 != (void *)0x0) {
      operator_delete__(local_1b8);
    }
  }
  FUN_10001549c(&local_1a0,"friendInMatchInformation");
  std::string::append((char *)&local_1a0);
  local_90 = 3;
  local_108 = param_2;
  iVar4 = FUN_100126c88();
  local_a4 = 0x44160000;
  if (iVar4 == 0) {
    local_a4 = 0x44100000;
  }
  iVar4 = FUN_1001311dc();
  if (iVar4 != 0) {
    uVar7 = FUN_1004e0150("MENU_FRIENDS_SPECTATE",0);
    FUN_1000153b4(&local_e8,uVar7);
    pcStack_118 = FUN_1002e29d4;
    local_120 = param_1;
  }
  uVar7 = FUN_100126b4c();
  FUN_1001e35ec(param_1,uVar7,auStack_1d0,&local_1d4,auStack_1d8);
  lVar10 = FUN_10003d5bc(param_2);
  fVar11 = *(float *)(lVar10 + 0xc);
  lVar10 = FUN_10003d5bc(param_1);
  fVar11 = (fVar11 / *(float *)(lVar10 + 0x14) - local_1d4) + 358.0;
  if (0.0 < fVar11) {
    uVar7 = FUN_10001f0d8();
    FUN_10063f0e8(0x3dcccccd);
    local_1bc = -fVar11;
    local_1c0 = 0;
    FUN_10063f984(uVar7,&local_1c0);
  }
  local_94 = 0;
  lVar10 = FUN_10003d5bc(param_1);
  local_98 = *(float *)(lVar10 + 0x14) * (local_1d4 + -280.0);
  local_a8 = 0x3e051eb8;
  if (param_3 == 0) {
    FUN_1001cefb8(param_1 + 0x3c10,&local_1a0,&local_138);
  }
  else {
    FUN_1001cf098();
  }
  if (cStack_189 < '\0') {
    operator_delete(local_1a0);
  }
  if (local_1a8 != (void *)0x0) {
    operator_delete__(local_1a8);
  }
  if (local_160 != (void *)0x0) {
    operator_delete__(local_160);
  }
  if (local_150 != (void *)0x0) {
    operator_delete__(local_150);
  }
  if (local_140 != (void *)0x0) {
    operator_delete__(local_140);
  }
  local_138 = &PTR_FUN_1014666e0;
  if (local_c1 < '\0') {
    operator_delete(local_d8);
  }
  if (local_e0 != (void *)0x0) {
    operator_delete__(local_e0);
    local_e8 = 0;
    local_e0 = (void *)0x0;
  }
  FUN_10003c1ec(auStack_130,1);
  return;
}



/*
 * FUN_1002e94b0
 * VA: 0x1002e94b0 | Source: functions/1002e.c:7134
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 1, Vis masks: 3
 * Callees: FUN_1000200a0, FUN_100190efc, FUN_100190fb0, FUN_10019141c, FUN_1001c6fd8, FUN_1002e9dec, FUN_1004e0150, FUN_1004e3120 (+3 more)
 * Callers: FUN_1002e93e4
 */
void FUN_1002e94b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  float fVar5;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  
  uVar2 = *(uint *)(param_1 + 0x284);
  if ((uVar2 & 0x7f80) != 0xa00) {
    *(uint *)(param_1 + 0x284) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0xa00;
    FUN_1000200a0(param_1 + 0x200);
  }
  FUN_1006513c0(param_1 + 0x1cd0,param_2);
  uVar3 = FUN_1004e0150("GENERIC_5V5",0);
  FUN_1002e9dec(param_1 + 0x2d8,uVar3,param_4);
  uVar3 = FUN_1004e0150("GENERIC_3V3",0);
  FUN_1002e9dec(param_1 + 0x988,uVar3,param_5);
  FUN_1001c6fd8(param_1 + 0x1038,param_6);
  uVar3 = FUN_1004e0150("MENU_FRIENDS_IN_MATCH_DETAILS_PARTY_TYPE_TEAM",0);
  thunk_FUN_1004e439c(auStack_60,uVar3);
  FUN_1004e3120(auStack_70," ");
  FUN_1004e372c(auStack_60,auStack_70);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  uVar3 = FUN_1004e0150("GENERIC_3V3",0);
  FUN_1004e372c(auStack_60,uVar3);
  FUN_1006513c0(param_1 + 0x1e00,auStack_60);
  iVar4 = (int)param_7;
  if (0 < iVar4) {
    lVar1 = param_1 + 0x1408;
    FUN_100190efc(lVar1);
    FUN_10019141c(lVar1,param_7);
    FUN_100190fb0(lVar1);
    *(uint *)(param_1 + 0x1ae4) = *(uint *)(param_1 + 0x1ae4) & 0xfffffffb;
    *(uint *)(param_1 + 0x19f4) = *(uint *)(param_1 + 0x19f4) & 0xfffffffb;
    *(uint *)(param_1 + 0x1c14) = *(uint *)(param_1 + 0x1c14) & 0xfffffffb;
    if (iVar4 < 0x5a) {
      if (iVar4 < 0x3c) {
        if (iVar4 < 0x32) {
          if (iVar4 < 0x1e) {
            fVar5 = *(float *)(&DAT_101157fe8 + (ulong)(0x13 < iVar4) * 4);
          }
          else {
            fVar5 = 0.55;
          }
        }
        else {
          fVar5 = 0.45;
        }
      }
      else {
        fVar5 = 0.35;
      }
    }
    else {
      fVar5 = 0.3;
    }
    if ((*(float *)(param_1 + 0x1450) != fVar5) || (*(float *)(param_1 + 0x1454) != fVar5)) {
      *(float *)(param_1 + 0x1450) = fVar5;
      *(float *)(param_1 + 0x1454) = fVar5;
      FUN_1000200a0(lVar1);
    }
    FUN_1006513c0(param_1 + 0x1f30,param_3);
  }
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  return;
}
