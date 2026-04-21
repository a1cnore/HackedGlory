// ui/market/market_tabs.c — 37 UI functions (market)
// Extracted by extract_ui.py from structured/functions/
#include "GameKindred.h"



/*
 * FUN_1000eb664
 * VA: 0x1000eb664 | Source: functions/1000e.c:9239
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 4
 * Callees: FUN_1000153b4, FUN_1000eb768, FUN_1001ad494, FUN_10021fea0, FUN_1004e0150, thunk_FUN_1001ad400, thunk_FUN_1004e439c
 * Callers: FUN_1000eb8dc
 */
void FUN_1000eb664(void)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [8];
  void *local_b0;
  undefined8 local_a8 [2];
  undefined1 auStack_98 [8];
  void *local_90;
  void *local_80;
  char local_69;
  void *local_68;
  char local_51;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  void *local_40;
  char local_29;
  
  thunk_FUN_1001ad400(local_a8);
  uVar1 = FUN_1004e0150("MENU_MARKET_GLORY_PURCHASE_POPUP_TITLE",0);
  thunk_FUN_1004e439c(auStack_b8,uVar1);
  FUN_1000153b4(auStack_98,auStack_b8);
  local_a8[0] = 0x447a000044c80000;
  local_44 = 1;
  FUN_1001ad494(local_a8,PTR_s_build___MenuPartsCommon_tga_101854970,"popup_fill",&DAT_101dc6a80);
  local_4c = DAT_101dc6a58;
  uStack_48 = DAT_101dc6a68;
  uVar1 = FUN_1000eb768(PTR_s_MENU_CURRENCY_PURCHASE_POPUP_101854ac0,local_a8);
  FUN_10021fea0(uVar1,0);
  if (local_b0 != (void *)0x0) {
    operator_delete__(local_b0);
  }
  if (local_29 < '\0') {
    operator_delete(local_40);
  }
  if (local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_69 < '\0') {
    operator_delete(local_80);
  }
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
  }
  return;
}



/*
 * FUN_1000eb7dc
 * VA: 0x1000eb7dc | Source: functions/1000e.c:9312
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 4
 * Callees: FUN_1000153b4, FUN_1000eb768, FUN_1001ad494, FUN_10021fea0, FUN_1004e0150, thunk_FUN_1001ad400, thunk_FUN_1004e439c
 * Callers: FUN_1000eb8dc
 */
void FUN_1000eb7dc(void)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [8];
  void *local_b0;
  undefined8 local_a8 [2];
  undefined1 auStack_98 [8];
  void *local_90;
  void *local_80;
  char local_69;
  void *local_68;
  char local_51;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  void *local_40;
  char local_29;
  
  thunk_FUN_1001ad400(local_a8);
  uVar1 = FUN_1004e0150("MENU_MARKET_ICE_PURCHASE_POPUP_TITLE",0);
  thunk_FUN_1004e439c(auStack_b8,uVar1);
  FUN_1000153b4(auStack_98,auStack_b8);
  local_a8[0] = 0x447a000044c80000;
  local_44 = 0;
  FUN_1001ad494(local_a8,PTR_s_build___MenuPartsCommon_tga_101854970,"popup_fill",&DAT_101dc6a80);
  local_4c = DAT_101dc6a58;
  uStack_48 = DAT_101dc6a68;
  uVar1 = FUN_1000eb768(PTR_s_MENU_CURRENCY_PURCHASE_POPUP_101854ac0,local_a8);
  FUN_10021fea0(uVar1,1);
  if (local_b0 != (void *)0x0) {
    operator_delete__(local_b0);
  }
  if (local_29 < '\0') {
    operator_delete(local_40);
  }
  if (local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_69 < '\0') {
    operator_delete(local_80);
  }
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
  }
  return;
}



/*
 * FUN_100197960
 * VA: 0x100197960 | Source: functions/10019.c:5498
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 2, Vis masks: 8
 * Callees: FUN_1000200a0, FUN_10019825c, FUN_1004e0150, FUN_1006423ec, FUN_100642d08, FUN_10064e5ec, FUN_1006513c0, FUN_100651460 (+1 more)
 * Callers: FUN_10019719c, FUN_100197fd8, FUN_1001985d4, FUN_1001985f0, FUN_10019860c, FUN_10019868c, thunk_FUN_10019719c, thunk_FUN_100197fd8 (+2 more)
 */
void FUN_100197960(long *param_1)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  cVar1 = *(char *)((long)param_1 + 0x1163);
  plVar4 = param_1 + 0x1ad;
  uVar2 = FUN_100642d08(plVar4);
  if (cVar1 == '\0') {
    if (uVar2 != 0) {
      FUN_1006423ec(plVar4,1);
    }
    *(uint *)((long)param_1 + 0x3ec) = *(uint *)((long)param_1 + 0x3ec) & 0xfffffffb;
    *(uint *)((long)param_1 + 0xbac) = *(uint *)((long)param_1 + 0xbac) & 0xfffffffb;
    uVar2 = *(uint *)((long)param_1 + 0x2fc);
    goto joined_r0x000100197a00;
  }
  if ((uVar2 & 1) == 0) {
    (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  }
  if (*(char *)((long)param_1 + 0x1161) == '\0') {
    *(uint *)((long)param_1 + 0x4dc) =
         *(uint *)((long)param_1 + 0x4dc) & 0xfffffffb |
         (uint)*(byte *)((long)param_1 + 0x1162) << 2;
    uVar6 = 0;
    if (*(byte *)((long)param_1 + 0x1162) != 0) goto LAB_100197a28;
  }
  else {
    *(uint *)((long)param_1 + 0x4dc) = *(uint *)((long)param_1 + 0x4dc) | 4;
    uVar6 = 0x3f800000;
LAB_100197a28:
    FUN_100652e14(uVar6,param_1 + 0x8b);
  }
  if ((int)param_1[0x22b] == 1) {
    uVar2 = *(uint *)((long)param_1 + 0x3ec) & 0xfffffffb;
LAB_100197a54:
    *(uint *)((long)param_1 + 0x3ec) = uVar2;
  }
  else if ((int)param_1[0x22b] == 0) {
    uVar2 = *(uint *)((long)param_1 + 0x3ec) | 4;
    goto LAB_100197a54;
  }
  switch(*(undefined4 *)((long)param_1 + 0x115c)) {
  case 0:
    *(uint *)((long)param_1 + 0xbac) = *(uint *)((long)param_1 + 0xbac) & 0xfffffffb;
    *(uint *)((long)param_1 + 0x6bc) = *(uint *)((long)param_1 + 0x6bc) & 0xfffffffb;
    break;
  case 1:
    *(uint *)((long)param_1 + 0xbac) = *(uint *)((long)param_1 + 0xbac) | 4;
    plVar4 = param_1 + 199;
    *(uint *)((long)param_1 + 0x6bc) = *(uint *)((long)param_1 + 0x6bc) | 4;
    uVar3 = FUN_1004e0150("MENU_HEROES_BANNER_NEW",0);
    FUN_1006513c0(param_1 + 0x165,uVar3);
    FUN_100651460(param_1 + 0x165,&DAT_10115a168);
    uVar7 = 0x41200000;
    uVar6 = 0;
    uVar3 = 7;
    uVar5 = 7;
    goto LAB_100197bb8;
  case 2:
    *(uint *)((long)param_1 + 0xbac) = *(uint *)((long)param_1 + 0xbac) | 4;
    *(uint *)((long)param_1 + 0x6bc) = *(uint *)((long)param_1 + 0x6bc) & 0xfffffffb;
    uVar3 = FUN_1004e0150("MENU_MARKET_FEATURED_SALE",0);
    FUN_1006513c0(param_1 + 0x165,uVar3);
    FUN_100651460(param_1 + 0x165,&DAT_10115a168);
    plVar4 = param_1 + 0xe5;
    uVar6 = 0xc1200000;
    goto LAB_100197bac;
  case 3:
    *(uint *)((long)param_1 + 0xbac) = *(uint *)((long)param_1 + 0xbac) | 4;
    *(uint *)((long)param_1 + 0x6bc) = *(uint *)((long)param_1 + 0x6bc) & 0xfffffffb;
    uVar3 = FUN_1004e0150("GENERIC_HERO_FEATURED_FREE_ROTATION",0);
    FUN_1006513c0(param_1 + 0x165,uVar3);
    FUN_100651460(param_1 + 0x165,&DAT_10115a174);
    plVar4 = param_1 + 0x4f;
    uVar6 = 0;
LAB_100197bac:
    uVar7 = 0;
    uVar3 = 6;
    uVar5 = 6;
LAB_100197bb8:
    FUN_10064e5ec(uVar7,uVar6,param_1 + 0x165,uVar3,plVar4,uVar5);
  }
  if (((int)param_1[0x22b] == 0) && (*(int *)((long)param_1 + 0x115c) != 3)) {
    FUN_100652e14(0x3ecccccd,param_1 + 0x4f);
    uVar2 = *(uint *)((long)param_1 + 0x2fc);
    if ((uVar2 & 0x7f80) == 0x3300) goto LAB_100197c00;
    uVar2 = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x3300;
  }
  else {
    FUN_100652e14(0x3f800000,param_1 + 0x4f);
    uVar2 = *(uint *)((long)param_1 + 0x2fc);
joined_r0x000100197a00:
    if ((~uVar2 & 0x7f80) == 0) goto LAB_100197c00;
    uVar2 = uVar2 | 0x7f80;
  }
  *(uint *)((long)param_1 + 0x2fc) = uVar2;
  FUN_1000200a0(param_1 + 0x4f);
LAB_100197c00:
  FUN_10019825c(param_1);
  return;
}



/*
 * FUN_1001a2604
 * VA: 0x1001a2604 | Source: functions/1001a.c:1676
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 1, Vis masks: 2
 * Callees: FUN_10001554c, FUN_1000200a0, FUN_100126c88, FUN_1001816d4, FUN_100181c68, FUN_1001b495c, FUN_1001b4964, FUN_1004e0150 (+12 more)
 */
long * FUN_1001a2604(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  code *local_80;
  long *plStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  puVar5 = (undefined8 *)FUN_1006421a8();
  *puVar5 = &PTR_thunk_FUN_1001a2954_101462af0;
  puVar5 = puVar5 + 0x11;
  thunk_FUN_100181304(puVar5,0);
  plVar1 = param_1 + 0x2c8;
  FUN_10064e264(plVar1);
  plVar2 = param_1 + 0x2df;
  thunk_FUN_100652c08(plVar2);
  FUN_10064e264(param_1 + 0x2fd);
  FUN_10064e264(param_1 + 0x314);
  FUN_10064e264(param_1 + 0x32b);
  param_1[0x34a] = 0;
  param_1[0x349] = 0;
  param_1[0x348] = 0;
  param_1[0x347] = 0;
  param_1[0x346] = 0;
  param_1[0x345] = 0;
  param_1[0x344] = 0;
  param_1[0x343] = 0;
  param_1[0x342] = 0;
  thunk_FUN_1001fc280(param_1 + 0x34e,0,1);
  param_1[0x358] = DAT_101dc1cb8;
  param_1[0x359] = 0;
  param_1[0x35b] = 0;
  param_1[0x35a] = 0;
  *(undefined8 *)((long)param_1 + 0x1ade) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar1,puVar5,1);
  FUN_100642bd8(plVar1,param_1 + 0x2fd,1);
  FUN_100642bd8(plVar1,param_1 + 0x314,1);
  FUN_100642bd8(plVar1,param_1 + 0x32b,1);
  iVar4 = FUN_100126c88();
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar7 = *(uint *)((long)param_1 + 0x177c);
  if ((uVar7 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x177c) = uVar7 & 0xffff807f;
    FUN_1000200a0(plVar2);
    uVar7 = *(uint *)((long)param_1 + 0x177c);
  }
  *(uint *)((long)param_1 + 0x177c) = uVar7 & 0xfffffffb | 0x10;
  uVar6 = FUN_1004e0150("MENU_MARKET_CARDS_REVEAL_ALL",0);
  FUN_1001816d4(0x42200000,0x42c80000,0x44160000,puVar5,0,uVar6,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_58 = DAT_101d91884;
  local_80 = thunk_FUN_1001a3fa0;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 0x12,&local_80);
  ppuVar3 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar4 == 0) {
    ppuVar3 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651038(param_1 + 0xf4,*ppuVar3);
  FUN_1001b495c(0x3f800000,puVar5);
  if ((*(float *)(param_1 + 0x1b) != 0.5) || (*(float *)((long)param_1 + 0xdc) != 0.5)) {
    param_1[0x1b] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(puVar5);
  }
  FUN_10065179c(*(float *)((long)param_1 + 0x1614) + *(float *)((long)param_1 + 0x160c) * -2.0,0,
                0x3f800000,param_1 + 0xf4);
  FUN_1001b4964(puVar5,1);
  *(uint *)((long)param_1 + 0x10c) = *(uint *)((long)param_1 + 0x10c) & 0xfffffffb;
  if (iVar4 != 0) {
    FUN_100181c68(0x430a0000,puVar5);
  }
  local_58 = DAT_101dbd460;
  local_80 = thunk_FUN_1001a3dd0;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 0x315,&local_80);
  local_58 = DAT_101dbd48c;
  local_80 = thunk_FUN_1001a3dd0;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 0x315,&local_80);
  return param_1;
}



/*
 * thunk_FUN_1001a2604
 * VA: 0xthunk_1001a2604 | Source: functions/1001a.c:1800
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 1, Vis masks: 2
 * Callees: FUN_10001554c, FUN_1000200a0, FUN_100126c88, FUN_1001816d4, FUN_100181c68, FUN_1001b495c, FUN_1001b4964, FUN_1004e0150 (+12 more)
 * Callers: FUN_10002f340, thunk_FUN_10002f340
 */
long * thunk_FUN_1001a2604(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  code *pcStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  puVar5 = (undefined8 *)FUN_1006421a8();
  *puVar5 = &PTR_thunk_FUN_1001a2954_101462af0;
  puVar5 = puVar5 + 0x11;
  thunk_FUN_100181304(puVar5,0);
  plVar1 = param_1 + 0x2c8;
  FUN_10064e264(plVar1);
  plVar2 = param_1 + 0x2df;
  thunk_FUN_100652c08(plVar2);
  FUN_10064e264(param_1 + 0x2fd);
  FUN_10064e264(param_1 + 0x314);
  FUN_10064e264(param_1 + 0x32b);
  param_1[0x34a] = 0;
  param_1[0x349] = 0;
  param_1[0x348] = 0;
  param_1[0x347] = 0;
  param_1[0x346] = 0;
  param_1[0x345] = 0;
  param_1[0x344] = 0;
  param_1[0x343] = 0;
  param_1[0x342] = 0;
  thunk_FUN_1001fc280(param_1 + 0x34e,0,1);
  param_1[0x358] = DAT_101dc1cb8;
  param_1[0x359] = 0;
  param_1[0x35b] = 0;
  param_1[0x35a] = 0;
  *(undefined8 *)((long)param_1 + 0x1ade) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar1,puVar5,1);
  FUN_100642bd8(plVar1,param_1 + 0x2fd,1);
  FUN_100642bd8(plVar1,param_1 + 0x314,1);
  FUN_100642bd8(plVar1,param_1 + 0x32b,1);
  iVar4 = FUN_100126c88();
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar7 = *(uint *)((long)param_1 + 0x177c);
  if ((uVar7 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x177c) = uVar7 & 0xffff807f;
    FUN_1000200a0(plVar2);
    uVar7 = *(uint *)((long)param_1 + 0x177c);
  }
  *(uint *)((long)param_1 + 0x177c) = uVar7 & 0xfffffffb | 0x10;
  uVar6 = FUN_1004e0150("MENU_MARKET_CARDS_REVEAL_ALL",0);
  FUN_1001816d4(0x42200000,0x42c80000,0x44160000,puVar5,0,uVar6,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_58 = DAT_101d91884;
  pcStack_80 = thunk_FUN_1001a3fa0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 0x12,&pcStack_80);
  ppuVar3 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar4 == 0) {
    ppuVar3 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651038(param_1 + 0xf4,*ppuVar3);
  FUN_1001b495c(0x3f800000,puVar5);
  if ((*(float *)(param_1 + 0x1b) != 0.5) || (*(float *)((long)param_1 + 0xdc) != 0.5)) {
    param_1[0x1b] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(puVar5);
  }
  FUN_10065179c(*(float *)((long)param_1 + 0x1614) + *(float *)((long)param_1 + 0x160c) * -2.0,0,
                0x3f800000,param_1 + 0xf4);
  FUN_1001b4964(puVar5,1);
  *(uint *)((long)param_1 + 0x10c) = *(uint *)((long)param_1 + 0x10c) & 0xfffffffb;
  if (iVar4 != 0) {
    FUN_100181c68(0x430a0000,puVar5);
  }
  uStack_58 = DAT_101dbd460;
  pcStack_80 = thunk_FUN_1001a3dd0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 0x315,&pcStack_80);
  uStack_58 = DAT_101dbd48c;
  pcStack_80 = thunk_FUN_1001a3dd0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 0x315,&pcStack_80);
  return param_1;
}



/*
 * FUN_1001b8ee8
 * VA: 0x1001b8ee8 | Source: functions/1001b.c:7194
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 31
 * Callees: FUN_1000153b4, FUN_10001549c, FUN_10002f320, FUN_100030cf0, FUN_1000e7cb0, FUN_1000e7ce4, FUN_1000e7e04, FUN_1000f0994 (+13 more)
 * Callers: FUN_1001b88c4
 */
void FUN_1001b8ee8(long param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 auStack_180 [8];
  void *local_178;
  void *local_170;
  void *local_168;
  char local_159;
  undefined1 auStack_158 [8];
  void *local_150;
  undefined1 auStack_148 [8];
  void *local_140;
  undefined1 auStack_138 [8];
  void *local_130;
  undefined1 auStack_128 [8];
  void *local_120;
  undefined1 auStack_118 [8];
  void *local_110;
  void *local_108;
  ulong local_100;
  byte local_f1;
  undefined **local_f0;
  undefined1 auStack_e8 [16];
  void *local_d8 [2];
  char local_c1;
  undefined1 auStack_c0 [48];
  void *local_90;
  char local_79;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  
  FUN_10014237c(&local_f0);
  iVar2 = FUN_100136d20(param_1 + 0x24a8,&local_f0);
  if (iVar2 == 0) goto LAB_1001b9440;
  uVar3 = FUN_1000e7ce4(auStack_c0);
  FUN_10001549c(&local_108,uVar3);
  uVar3 = FUN_1000e7cb0(auStack_c0);
  thunk_FUN_1004e439c(auStack_118,&DAT_101d91650);
  thunk_FUN_1004e439c(auStack_128,&DAT_101d91650);
  thunk_FUN_1004e439c(auStack_138,&DAT_101d91650);
  thunk_FUN_1004e439c(auStack_148,&DAT_101d91650);
  uVar8 = (ulong)local_f1;
  uVar1 = local_100;
  if (-1 < (char)local_f1) {
    uVar1 = uVar8;
  }
  if (uVar1 == 6) {
    iVar2 = std::string::compare((ulong)&local_108,0,(char *)0xffffffffffffffff,0x1013d247a);
    if (iVar2 != 0) {
      uVar8 = (ulong)local_f1;
      goto LAB_1001b8fd4;
    }
    pcVar9 = "HERO_HUB_DIALOG_LACK_SILVERL_DESC";
    pcVar10 = "HERO_HUB_DIALOG_LACK_SILVERL_TITLE";
    pcVar11 = "HERO_HUB_DIALOG_UNLOCKHERO_SILVER_MSG";
    pcVar4 = "HERO_HUB_DIALOG_UNLOCKHERO_SILVER_TITLE";
LAB_1001b9114:
    uVar5 = FUN_1004e0150(pcVar4,0);
    FUN_1000153b4(auStack_118,uVar5);
    uVar5 = FUN_1004e0150(pcVar11,0);
    FUN_1000153b4(auStack_128,uVar5);
    uVar5 = FUN_1004e0150(pcVar10,0);
    FUN_1000153b4(auStack_138,uVar5);
    uVar5 = FUN_1004e0150(pcVar9,0);
    FUN_1000153b4(auStack_148,uVar5);
  }
  else {
LAB_1001b8fd4:
    uVar1 = local_100;
    if (-1 < (char)local_f1) {
      uVar1 = uVar8;
    }
    if (uVar1 == 4) {
      iVar2 = std::string::compare((ulong)&local_108,0,(char *)0xffffffffffffffff,0x1013d24d0);
      if (iVar2 == 0) {
        pcVar9 = "HERO_HUB_DIALOG_LACK_GOLD_DESC";
        pcVar10 = "HERO_HUB_DIALOG_LACK_GOLD_TITLE";
        pcVar11 = "HERO_HUB_DIALOG_UNLOCKHERO_GOLD_MSG";
        pcVar4 = "HERO_HUB_DIALOG_UNLOCKHERO_GOLD_TITLE";
        goto LAB_1001b9114;
      }
      uVar8 = (ulong)local_f1;
    }
    uVar1 = local_100;
    if (-1 < (char)local_f1) {
      uVar1 = uVar8;
    }
    if (uVar1 == 4) {
      iVar2 = std::string::compare((ulong)&local_108,0,(char *)0xffffffffffffffff,0x1013d253c);
      if (iVar2 == 0) {
        pcVar9 = "MENU_MARKET_DIALOG_LACK_OPALS_DESC";
        pcVar10 = "MENU_MARKET_DIALOG_LACK_OPALS_TITLE";
        pcVar11 = "MENU_MARKET_DIALOG_UNLOCKHERO_OPALS_MSG";
        pcVar4 = "MENU_MARKET_DIALOG_UNLOCKHERO_OPALS_TITLE";
        goto LAB_1001b9114;
      }
      uVar8 = (ulong)local_f1;
    }
    if (-1 < (char)local_f1) {
      local_100 = uVar8;
    }
    if ((local_100 == 7) &&
       (iVar2 = std::string::compare((ulong)&local_108,0,(char *)0xffffffffffffffff,0x1013d251e),
       iVar2 == 0)) {
      pcVar9 = "MENU_MARKET_DIALOG_LACK_ESSENCE_DESC";
      pcVar10 = "MENU_MARKET_DIALOG_LACK_ESSENCE_TITLE";
      pcVar11 = "MENU_MARKET_DIALOG_UNLOCKHERO_ESSENCE_MSG";
      pcVar4 = "MENU_MARKET_DIALOG_UNLOCKHERO_ESSENCE_TITLE";
      goto LAB_1001b9114;
    }
  }
  FUN_1000f0994(&local_170,uVar3);
  FUN_1004e3170(auStack_158,&local_170);
  if (local_159 < '\0') {
    operator_delete(local_170);
  }
  FUN_1000e7e04(local_d8);
  FUN_1000f0994(&local_170);
  FUN_1004e3170(auStack_180,&local_170);
  if (local_159 < '\0') {
    operator_delete(local_170);
  }
  if ((int)uVar3 == 0) {
    FUN_1004e3120(&local_170,"[HERO_NAME]");
    FUN_1004e3bc4(auStack_118,0,&local_170,param_2 + 0x18);
    if (local_168 != (void *)0x0) {
      operator_delete__(local_168);
    }
    FUN_1004e3120(&local_170,"[HERO_NAME]");
    FUN_1004e3bc4(auStack_128,0,&local_170,param_2 + 0x18);
    if (local_168 != (void *)0x0) {
      operator_delete__(local_168);
    }
    FUN_1004e3120(&local_170,"[UNLOCK_AMOUNT]");
    FUN_1004e3bc4(auStack_128,0,&local_170,auStack_158);
    if (local_168 != (void *)0x0) {
      operator_delete__(local_168);
    }
    FUN_1004e3120(&local_170,"[BALANCE_AMOUNT]");
    FUN_1004e3bc4(auStack_128,0,&local_170,auStack_180);
    if (local_168 != (void *)0x0) {
      operator_delete__(local_168);
    }
    lVar6 = FUN_10016c2f0();
    if (*(int *)(lVar6 + 0x38) < 1) {
      uVar3 = FUN_1004e0150("MENU_MARKET_DIALOG_UNLOCK_ACCEPT",0);
      puVar7 = (undefined8 *)FUN_1004e0150("MENU_MARKET_DIALOG_UNLOCK_REJECT",0);
    }
    else {
      uVar3 = FUN_10002f320();
      FUN_100030cf0(uVar3,&DAT_101d91198);
      uVar3 = FUN_1004e0150("MENU_MARKET_DIALOG_UNLOCK_ACCEPT",0);
      puVar7 = &DAT_101d91650;
    }
    FUN_1001e31c8(auStack_118,auStack_128,uVar3,puVar7,&DAT_101d91650,param_1,thunk_FUN_1001ba5e8,0,
                  0);
  }
  else {
    FUN_1004e3120(&local_170,"[HERO_NAME]");
    FUN_1004e3bc4(auStack_148,0,&local_170,param_2 + 0x18);
    if (local_168 != (void *)0x0) {
      operator_delete__(local_168);
    }
    FUN_1004e3120(&local_170,"[UNLOCK_AMOUNT]");
    FUN_1004e3bc4(auStack_148,0,&local_170,auStack_158);
    if (local_168 != (void *)0x0) {
      operator_delete__(local_168);
    }
    FUN_1004e3120(&local_170,"[BALANCE_AMOUNT]");
    FUN_1004e3bc4(auStack_148,0,&local_170,auStack_180);
    if (local_168 != (void *)0x0) {
      operator_delete__(local_168);
    }
    uVar3 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    FUN_1001e3090(auStack_138,auStack_148,uVar3,0,0);
  }
  if (local_178 != (void *)0x0) {
    operator_delete__(local_178);
  }
  if (local_150 != (void *)0x0) {
    operator_delete__(local_150);
  }
  if (local_140 != (void *)0x0) {
    operator_delete__(local_140);
  }
  if (local_130 != (void *)0x0) {
    operator_delete__(local_130);
  }
  if (local_120 != (void *)0x0) {
    operator_delete__(local_120);
  }
  if (local_110 != (void *)0x0) {
    operator_delete__(local_110);
  }
  if ((char)local_f1 < '\0') {
    operator_delete(local_108);
  }
LAB_1001b9440:
  local_f0 = &PTR_FUN_10145ac30;
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = 0;
    local_70 = (void *)0x0;
  }
  if (local_79 < '\0') {
    operator_delete(local_90);
  }
  if (local_c1 < '\0') {
    operator_delete(local_d8[0]);
  }
  FUN_1001423e4(auStack_e8,1);
  return;
}



/*
 * FUN_1001ba218
 * VA: 0x1001ba218 | Source: functions/1001b.c:7844
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 10
 * Callees: FUN_1000153b4, FUN_10001549c, FUN_1000e7cb0, FUN_1000e7e04, FUN_1000e7eb0, FUN_1000eb8dc, FUN_1000f0994, FUN_100136d20 (+12 more)
 * Callers: FUN_1001b88c4
 */
void FUN_1001ba218(long param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined1 auStack_138 [8];
  void *local_130;
  undefined1 auStack_128 [8];
  void *local_120;
  void *local_118;
  void *local_110;
  char local_101;
  undefined1 auStack_100 [8];
  void *local_f8;
  undefined1 auStack_f0 [8];
  void *local_e8;
  undefined **local_e0;
  undefined1 auStack_d8 [16];
  void *local_c8 [2];
  char local_b1;
  undefined1 auStack_b0 [48];
  void *local_80;
  char local_69;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined1 auStack_40 [8];
  void *local_38;
  
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  FUN_10032bf84(auStack_40,plVar1,1);
  FUN_10014237c(&local_e0);
  iVar2 = FUN_100136d20(param_1 + 0x24a8,&local_e0);
  if (iVar2 == 0) goto LAB_1001ba4fc;
  iVar2 = FUN_1000e7eb0(local_c8);
  if (iVar2 == 0) {
    FUN_1000eb8dc(local_c8,&local_58);
    goto LAB_1001ba4fc;
  }
  FUN_1004e313c(auStack_f0);
  FUN_1004e313c(auStack_100);
  FUN_10001549c(&local_118,"gold");
  uVar3 = FUN_1001b7c84(param_1,&local_118);
  if (local_101 < '\0') {
    operator_delete(local_118);
    if ((uVar3 & 1) == 0) goto LAB_1001ba2ec;
LAB_1001ba2b8:
    pcVar7 = "SKINS_HUB_DIALOG_UNLOCKSKIN_GOLD_MSG";
    pcVar4 = "SKINS_HUB_DIALOG_UNLOCKSKIN_GOLD_TITLE";
LAB_1001ba330:
    uVar5 = FUN_1004e0150(pcVar4,0);
    FUN_1000153b4(auStack_f0,uVar5);
    uVar5 = FUN_1004e0150(pcVar7,0);
    FUN_1000153b4(auStack_100,uVar5);
  }
  else {
    if ((uVar3 & 1) != 0) goto LAB_1001ba2b8;
LAB_1001ba2ec:
    FUN_10001549c(&local_118,"opal");
    iVar2 = FUN_1001b7c84(param_1,&local_118);
    if (local_101 < '\0') {
      operator_delete(local_118);
    }
    if (iVar2 != 0) {
      pcVar7 = "MENU_MARKET_DIALOG_UNLOCKSKIN_OPALS_MSG";
      pcVar4 = "MENU_MARKET_DIALOG_UNLOCKSKIN_OPALS_TITLE";
      goto LAB_1001ba330;
    }
  }
  FUN_1000e7cb0(auStack_b0);
  FUN_1000f0994(&local_118);
  FUN_1004e3170(auStack_128,&local_118);
  if (local_101 < '\0') {
    operator_delete(local_118);
  }
  FUN_1000e7e04(local_c8);
  FUN_1000f0994(&local_118);
  FUN_1004e3170(auStack_138,&local_118);
  if (local_101 < '\0') {
    operator_delete(local_118);
  }
  FUN_1004e3120(&local_118,"[SKIN_NAME]");
  FUN_1004e3bc4(auStack_f0,0,&local_118,auStack_40);
  if (local_110 != (void *)0x0) {
    operator_delete__(local_110);
  }
  FUN_1004e3120(&local_118,"[SKIN_NAME]");
  FUN_1004e3bc4(auStack_100,0,&local_118,auStack_40);
  if (local_110 != (void *)0x0) {
    operator_delete__(local_110);
  }
  FUN_1004e3120(&local_118,"[UNLOCK_AMOUNT]");
  FUN_1004e3bc4(auStack_100,0,&local_118,auStack_128);
  if (local_110 != (void *)0x0) {
    operator_delete__(local_110);
  }
  FUN_1004e3120(&local_118,"[BALANCE_AMOUNT]");
  FUN_1004e3bc4(auStack_100,0,&local_118,auStack_138);
  if (local_110 != (void *)0x0) {
    operator_delete__(local_110);
  }
  uVar5 = FUN_1004e0150("MENU_MARKET_DIALOG_UNLOCK_ACCEPT",0);
  uVar6 = FUN_1004e0150("MENU_MARKET_DIALOG_UNLOCK_REJECT",0);
  FUN_1001e31c8(auStack_f0,auStack_100,uVar5,uVar6,&DAT_101d91650,param_1,thunk_FUN_1001ba5e8,0,0);
  if (local_130 != (void *)0x0) {
    operator_delete__(local_130);
  }
  if (local_120 != (void *)0x0) {
    operator_delete__(local_120);
  }
  if (local_f8 != (void *)0x0) {
    operator_delete__(local_f8);
  }
  if (local_e8 != (void *)0x0) {
    operator_delete__(local_e8);
  }
LAB_1001ba4fc:
  local_e0 = &PTR_FUN_10145ac30;
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  if (local_69 < '\0') {
    operator_delete(local_80);
  }
  if (local_b1 < '\0') {
    operator_delete(local_c8[0]);
  }
  FUN_1001423e4(auStack_d8,1);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}



/*
 * FUN_1001c9e20
 * VA: 0x1001c9e20 | Source: functions/1001c.c:6747
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 2, Vis masks: 1
 * Callees: FUN_1000153b4, FUN_10001554c, FUN_1000200a0, FUN_100126c88, FUN_1001816d4, FUN_100181af8, FUN_100181b5c, FUN_100181ba0 (+14 more)
 */
long * FUN_1001c9e20(long *param_1)

{
  long *plVar1;
  long *plVar2;
  float fVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar5 = (undefined8 *)FUN_10064e20c();
  *puVar5 = &PTR_thunk_FUN_1001ca1a4_101465de0;
  puVar5 = puVar5 + 0x17;
  thunk_FUN_100181304(puVar5,0);
  plVar1 = param_1 + 0x2ce;
  thunk_FUN_100652c08(plVar1);
  thunk_FUN_10018afc8(0x3f000000,param_1 + 0x2ec,0,1);
  plVar2 = param_1 + 0x486;
  FUN_1004e313c(plVar2);
  *(undefined2 *)(param_1 + 0x488) = 1;
  (**(code **)(*param_1 + 0x78))(param_1,puVar5,1);
  FUN_100642bd8(puVar5,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2ec,1);
  uVar6 = FUN_1004e0150("MENU_MARKET_TAB_NAME_MORE",0);
  FUN_1000153b4(plVar2,uVar6);
  local_90 = (code *)0x0;
  FUN_1001816d4(0x42340000,0x41f00000,0x447a0000,puVar5,0,&DAT_101d91650,&DAT_10115a168,&local_90,0)
  ;
  FUN_1001b495c(0x3dcccccd,puVar5);
  FUN_100181af8(puVar5,plVar2);
  FUN_100181ba0(0x3f800000,puVar5,&DAT_10115a168);
  local_68 = DAT_101d91884;
  local_90 = thunk_FUN_1001ca378;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x18,&local_90);
  if ((*(float *)(param_1 + 0x21) != 0.5) || (*(float *)((long)param_1 + 0x10c) != 0.5)) {
    param_1[0x21] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(puVar5);
  }
  FUN_100181b5c(0xc1f00000,0,puVar5);
  FUN_100651038(param_1 + 0xfa,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  FUN_100181c68(0x42a0147b,puVar5);
  *(undefined1 *)((long)param_1 + 0x166a) = 0;
  iVar4 = FUN_100126c88();
  fVar3 = DAT_101854a78;
  if ((iVar4 != 0) &&
     ((*(float *)(param_1 + 0x20) != DAT_101854a78 ||
      (*(float *)((long)param_1 + 0x104) != DAT_101854a78)))) {
    *(float *)(param_1 + 0x20) = DAT_101854a78;
    *(float *)((long)param_1 + 0x104) = fVar3;
    FUN_1000200a0(puVar5);
  }
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"arrow_down");
  if ((*(float *)(param_1 + 0x2d8) != 0.0) || (*(float *)((long)param_1 + 0x16c4) != 0.5)) {
    param_1[0x2d8] = 0x3f00000000000000;
    FUN_1000200a0(plVar1);
  }
  *(uint *)((long)param_1 + 0x17e4) = *(uint *)((long)param_1 + 0x17e4) & 0xfffffffb;
  FUN_1001ca0d4(param_1);
  return param_1;
}



/*
 * thunk_FUN_1001c9e20
 * VA: 0xthunk_1001c9e20 | Source: functions/1001c.c:6873
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 2, Vis masks: 1
 * Callees: FUN_1000153b4, FUN_10001554c, FUN_1000200a0, FUN_100126c88, FUN_1001816d4, FUN_100181af8, FUN_100181b5c, FUN_100181ba0 (+14 more)
 * Callers: FUN_1001e5e5c
 */
long * thunk_FUN_1001c9e20(long *param_1)

{
  long *plVar1;
  long *plVar2;
  float fVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  code *pcStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar5 = (undefined8 *)FUN_10064e20c();
  *puVar5 = &PTR_thunk_FUN_1001ca1a4_101465de0;
  puVar5 = puVar5 + 0x17;
  thunk_FUN_100181304(puVar5,0);
  plVar1 = param_1 + 0x2ce;
  thunk_FUN_100652c08(plVar1);
  thunk_FUN_10018afc8(0x3f000000,param_1 + 0x2ec,0,1);
  plVar2 = param_1 + 0x486;
  FUN_1004e313c(plVar2);
  *(undefined2 *)(param_1 + 0x488) = 1;
  (**(code **)(*param_1 + 0x78))(param_1,puVar5,1);
  FUN_100642bd8(puVar5,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2ec,1);
  uVar6 = FUN_1004e0150("MENU_MARKET_TAB_NAME_MORE",0);
  FUN_1000153b4(plVar2,uVar6);
  pcStack_90 = (code *)0x0;
  FUN_1001816d4(0x42340000,0x41f00000,0x447a0000,puVar5,0,&DAT_101d91650,&DAT_10115a168,&pcStack_90,
                0);
  FUN_1001b495c(0x3dcccccd,puVar5);
  FUN_100181af8(puVar5,plVar2);
  FUN_100181ba0(0x3f800000,puVar5,&DAT_10115a168);
  uStack_68 = DAT_101d91884;
  pcStack_90 = thunk_FUN_1001ca378;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x18,&pcStack_90);
  if ((*(float *)(param_1 + 0x21) != 0.5) || (*(float *)((long)param_1 + 0x10c) != 0.5)) {
    param_1[0x21] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(puVar5);
  }
  FUN_100181b5c(0xc1f00000,0,puVar5);
  FUN_100651038(param_1 + 0xfa,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  FUN_100181c68(0x42a0147b,puVar5);
  *(undefined1 *)((long)param_1 + 0x166a) = 0;
  iVar4 = FUN_100126c88();
  fVar3 = DAT_101854a78;
  if ((iVar4 != 0) &&
     ((*(float *)(param_1 + 0x20) != DAT_101854a78 ||
      (*(float *)((long)param_1 + 0x104) != DAT_101854a78)))) {
    *(float *)(param_1 + 0x20) = DAT_101854a78;
    *(float *)((long)param_1 + 0x104) = fVar3;
    FUN_1000200a0(puVar5);
  }
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"arrow_down");
  if ((*(float *)(param_1 + 0x2d8) != 0.0) || (*(float *)((long)param_1 + 0x16c4) != 0.5)) {
    param_1[0x2d8] = 0x3f00000000000000;
    FUN_1000200a0(plVar1);
  }
  *(uint *)((long)param_1 + 0x17e4) = *(uint *)((long)param_1 + 0x17e4) & 0xfffffffb;
  FUN_1001ca0d4(param_1);
  return param_1;
}



/*
 * FUN_1001ca764
 * VA: 0x1001ca764 | Source: functions/1001c.c:7304
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 2, Vis masks: 1
 * Callees: FUN_10001554c, FUN_1000200a0, FUN_100126c88, FUN_1001816d4, FUN_10018187c, FUN_100181b5c, FUN_100181c68, FUN_1001829b4 (+29 more)
 */
long * FUN_1001ca764(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined **ppuVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  float fVar15;
  code *local_a0;
  long *plStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  
  lVar13 = FUN_1001ad5cc();
  FUN_10033f558(lVar13 + 0xb8);
  *param_1 = (long)&PTR_thunk_FUN_1001cae14_101466088;
  param_1[0x17] = (long)&PTR_FUN_1014661f0;
  thunk_FUN_1001fc280(param_1 + 0x1a,1,0);
  thunk_FUN_100183990(param_1 + 0x23,0);
  FUN_10064e264(param_1 + 0xe1);
  plVar1 = param_1 + 0xf8;
  FUN_1006421a8(plVar1);
  param_1[0xf8] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar2 = param_1 + 0x109;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x127;
  FUN_10064fd54(plVar3,1);
  param_1[0x127] = (long)&PTR_thunk_FUN_10064e2bc_101451a40;
  plVar4 = param_1 + 0x140;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0x166;
  thunk_FUN_100650e64(plVar5);
  plVar6 = param_1 + 0x18c;
  thunk_FUN_100183160(plVar6,0);
  plVar7 = param_1 + 0x618;
  thunk_FUN_100650e64(plVar7);
  plVar8 = param_1 + 0x63e;
  thunk_FUN_100183160(plVar8,0);
  param_1[0xacd] = 0;
  param_1[0xacc] = 0;
  param_1[0xacb] = 0;
  param_1[0xaca] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x1b],1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xe1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(plVar3,plVar6,1);
  FUN_100642bd8(plVar6,plVar5,1);
  FUN_100642bd8(plVar3,plVar8,1);
  FUN_100642bd8(plVar8,plVar7,1);
  *(uint *)(param_1[0x1b] + 0x84) = *(uint *)(param_1[0x1b] + 0x84) & 0xffffffef;
  (**(code **)(*(long *)param_1[0x1b] + 0x138))();
  *(uint *)(param_1[0x1b] + 0xeb4) = *(uint *)(param_1[0x1b] + 0xeb4) & 0xfffffffb;
  FUN_1001fc78c(param_1 + 0x1a,1);
  *(uint *)((long)param_1 + 0x78c) = *(uint *)((long)param_1 + 0x78c) | 0x10;
  local_78 = DAT_101dbd458;
  local_a0 = FUN_1001cada4;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0xe2,&local_a0);
  local_78 = DAT_101dbd484;
  local_a0 = FUN_1001cada4;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0xe2,&local_a0);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar2,&DAT_10115a164,2);
  uVar10 = *(uint *)((long)param_1 + 0x8cc);
  if ((uVar10 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x8cc) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x1980;
    FUN_1000200a0(plVar2);
  }
  iVar12 = FUN_100126c88();
  ppuVar9 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  if (iVar12 == 0) {
    ppuVar9 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651038(plVar4,*ppuVar9);
  uVar10 = *(uint *)((long)param_1 + 0xa84);
  if ((uVar10 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0xa84) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar4);
  }
  if ((*(float *)(param_1 + 0x14a) != 0.5) || (*(float *)((long)param_1 + 0xa54) != 0.0)) {
    param_1[0x14a] = 0x3f000000;
    FUN_1000200a0(plVar4);
  }
  ppuVar9 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar12 == 0) {
    ppuVar9 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651594(plVar5,*ppuVar9,&DAT_101158208);
  uVar14 = FUN_1004e0150("MENU_MARKET_DAILY_PURCHASE_SINGLE_LABEL",0);
  FUN_1006513c0(plVar5,uVar14);
  if ((*(float *)(param_1 + 0x170) != 0.5) || (*(float *)((long)param_1 + 0xb84) != 1.0)) {
    param_1[0x170] = 0x3f8000003f000000;
    FUN_1000200a0(plVar5);
  }
  if (*(float *)((long)param_1 + 0xb74) != -10.0) {
    *(undefined4 *)((long)param_1 + 0xb74) = 0xc1200000;
    FUN_1000200a0(plVar5);
  }
  fVar15 = 500.0;
  FUN_1001816d4(0x41c00000,0x43fa0000,0x43fa0000,plVar6,0,&DAT_101d91650,&DAT_10115a168,
                &DAT_101dc1cb8,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  FUN_100181c68(0x43480000,plVar6);
  FUN_100651184(plVar5);
  FUN_100181b5c(0,fVar15 * 0.5 + 10.0,plVar6);
  FUN_1001829b4(0,plVar6);
  uVar11 = DAT_101d918e8;
  local_78 = DAT_101d918e8;
  local_a0 = FUN_1001cadc8;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x18d,&local_a0);
  FUN_1001b495c(0,plVar6);
  FUN_1001b4964(plVar6,1);
  FUN_10018187c(plVar6,1);
  FUN_10065165c(param_1 + 0x26f,1);
  ppuVar9 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar12 == 0) {
    ppuVar9 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651594(plVar7,*ppuVar9,&DAT_101158208);
  uVar14 = FUN_1004e0150("MENU_MARKET_DAILY_PURCHASE_ALL_LABEL",0);
  FUN_1006513c0(plVar7,uVar14);
  if ((*(float *)(param_1 + 0x622) != 0.5) || (*(float *)((long)param_1 + 0x3114) != 1.0)) {
    param_1[0x622] = 0x3f8000003f000000;
    FUN_1000200a0(plVar7);
  }
  if (*(float *)((long)param_1 + 0x3104) != -10.0) {
    *(undefined4 *)((long)param_1 + 0x3104) = 0xc1200000;
    FUN_1000200a0(plVar7);
  }
  fVar15 = 500.0;
  FUN_1001816d4(0x41c00000,0x43fa0000,0x43fa0000,plVar8,0,&DAT_101d91650,&DAT_10115a168,
                &DAT_101dc1cb8,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  FUN_100181c68(0x43480000,plVar8);
  FUN_100651184(plVar7);
  FUN_100181b5c(0,fVar15 * 0.5 + 10.0,plVar8);
  FUN_1001829b4(0x3f800000,plVar8);
  FUN_1001b495c(0,plVar8);
  local_78 = uVar11;
  local_a0 = FUN_1001cadec;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x63f,&local_a0);
  FUN_1001b4964(plVar8,1);
  FUN_10018187c(plVar8,1);
  FUN_10065165c(param_1 + 0x721,1);
  return param_1;
}



/*
 * thunk_FUN_1001ca764
 * VA: 0xthunk_1001ca764 | Source: functions/1001c.c:7536
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 2, Vis masks: 1
 * Callees: FUN_10001554c, FUN_1000200a0, FUN_100126c88, FUN_1001816d4, FUN_10018187c, FUN_100181b5c, FUN_100181c68, FUN_1001829b4 (+29 more)
 * Callers: FUN_1001eb0f4
 */
long * thunk_FUN_1001ca764(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined **ppuVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  float fVar15;
  code *pcStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  lVar13 = FUN_1001ad5cc();
  FUN_10033f558(lVar13 + 0xb8);
  *param_1 = (long)&PTR_thunk_FUN_1001cae14_101466088;
  param_1[0x17] = (long)&PTR_FUN_1014661f0;
  thunk_FUN_1001fc280(param_1 + 0x1a,1,0);
  thunk_FUN_100183990(param_1 + 0x23,0);
  FUN_10064e264(param_1 + 0xe1);
  plVar1 = param_1 + 0xf8;
  FUN_1006421a8(plVar1);
  param_1[0xf8] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar2 = param_1 + 0x109;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x127;
  FUN_10064fd54(plVar3,1);
  param_1[0x127] = (long)&PTR_thunk_FUN_10064e2bc_101451a40;
  plVar4 = param_1 + 0x140;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0x166;
  thunk_FUN_100650e64(plVar5);
  plVar6 = param_1 + 0x18c;
  thunk_FUN_100183160(plVar6,0);
  plVar7 = param_1 + 0x618;
  thunk_FUN_100650e64(plVar7);
  plVar8 = param_1 + 0x63e;
  thunk_FUN_100183160(plVar8,0);
  param_1[0xacd] = 0;
  param_1[0xacc] = 0;
  param_1[0xacb] = 0;
  param_1[0xaca] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x1b],1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xe1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(plVar3,plVar6,1);
  FUN_100642bd8(plVar6,plVar5,1);
  FUN_100642bd8(plVar3,plVar8,1);
  FUN_100642bd8(plVar8,plVar7,1);
  *(uint *)(param_1[0x1b] + 0x84) = *(uint *)(param_1[0x1b] + 0x84) & 0xffffffef;
  (**(code **)(*(long *)param_1[0x1b] + 0x138))();
  *(uint *)(param_1[0x1b] + 0xeb4) = *(uint *)(param_1[0x1b] + 0xeb4) & 0xfffffffb;
  FUN_1001fc78c(param_1 + 0x1a,1);
  *(uint *)((long)param_1 + 0x78c) = *(uint *)((long)param_1 + 0x78c) | 0x10;
  uStack_78 = DAT_101dbd458;
  pcStack_a0 = FUN_1001cada4;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0xe2,&pcStack_a0);
  uStack_78 = DAT_101dbd484;
  pcStack_a0 = FUN_1001cada4;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0xe2,&pcStack_a0);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar2,&DAT_10115a164,2);
  uVar10 = *(uint *)((long)param_1 + 0x8cc);
  if ((uVar10 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x8cc) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x1980;
    FUN_1000200a0(plVar2);
  }
  iVar12 = FUN_100126c88();
  ppuVar9 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  if (iVar12 == 0) {
    ppuVar9 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651038(plVar4,*ppuVar9);
  uVar10 = *(uint *)((long)param_1 + 0xa84);
  if ((uVar10 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0xa84) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar4);
  }
  if ((*(float *)(param_1 + 0x14a) != 0.5) || (*(float *)((long)param_1 + 0xa54) != 0.0)) {
    param_1[0x14a] = 0x3f000000;
    FUN_1000200a0(plVar4);
  }
  ppuVar9 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar12 == 0) {
    ppuVar9 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651594(plVar5,*ppuVar9,&DAT_101158208);
  uVar14 = FUN_1004e0150("MENU_MARKET_DAILY_PURCHASE_SINGLE_LABEL",0);
  FUN_1006513c0(plVar5,uVar14);
  if ((*(float *)(param_1 + 0x170) != 0.5) || (*(float *)((long)param_1 + 0xb84) != 1.0)) {
    param_1[0x170] = 0x3f8000003f000000;
    FUN_1000200a0(plVar5);
  }
  if (*(float *)((long)param_1 + 0xb74) != -10.0) {
    *(undefined4 *)((long)param_1 + 0xb74) = 0xc1200000;
    FUN_1000200a0(plVar5);
  }
  fVar15 = 500.0;
  FUN_1001816d4(0x41c00000,0x43fa0000,0x43fa0000,plVar6,0,&DAT_101d91650,&DAT_10115a168,
                &DAT_101dc1cb8,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  FUN_100181c68(0x43480000,plVar6);
  FUN_100651184(plVar5);
  FUN_100181b5c(0,fVar15 * 0.5 + 10.0,plVar6);
  FUN_1001829b4(0,plVar6);
  uVar11 = DAT_101d918e8;
  uStack_78 = DAT_101d918e8;
  pcStack_a0 = FUN_1001cadc8;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x18d,&pcStack_a0);
  FUN_1001b495c(0,plVar6);
  FUN_1001b4964(plVar6,1);
  FUN_10018187c(plVar6,1);
  FUN_10065165c(param_1 + 0x26f,1);
  ppuVar9 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar12 == 0) {
    ppuVar9 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651594(plVar7,*ppuVar9,&DAT_101158208);
  uVar14 = FUN_1004e0150("MENU_MARKET_DAILY_PURCHASE_ALL_LABEL",0);
  FUN_1006513c0(plVar7,uVar14);
  if ((*(float *)(param_1 + 0x622) != 0.5) || (*(float *)((long)param_1 + 0x3114) != 1.0)) {
    param_1[0x622] = 0x3f8000003f000000;
    FUN_1000200a0(plVar7);
  }
  if (*(float *)((long)param_1 + 0x3104) != -10.0) {
    *(undefined4 *)((long)param_1 + 0x3104) = 0xc1200000;
    FUN_1000200a0(plVar7);
  }
  fVar15 = 500.0;
  FUN_1001816d4(0x41c00000,0x43fa0000,0x43fa0000,plVar8,0,&DAT_101d91650,&DAT_10115a168,
                &DAT_101dc1cb8,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  FUN_100181c68(0x43480000,plVar8);
  FUN_100651184(plVar7);
  FUN_100181b5c(0,fVar15 * 0.5 + 10.0,plVar8);
  FUN_1001829b4(0x3f800000,plVar8);
  FUN_1001b495c(0,plVar8);
  uStack_78 = uVar11;
  pcStack_a0 = FUN_1001cadec;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x63f,&pcStack_a0);
  FUN_1001b4964(plVar8,1);
  FUN_10018187c(plVar8,1);
  FUN_10065165c(param_1 + 0x721,1);
  return param_1;
}



/*
 * FUN_1001cb41c
 * VA: 0x1001cb41c | Source: functions/1001c.c:7996
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 3
 * Callees: FUN_100181af8, FUN_100181bb8, FUN_1001b4c0c, FUN_1004e0150, FUN_1004e3120, FUN_1004e313c, FUN_1004e38ac, FUN_1004e3bc4 (+3 more)
 * Callers: FUN_1001cb5f4, FUN_1001eaee8
 */
void FUN_1001cb41c(long *param_1,int param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  
  uVar5 = FUN_1004e0150("MENU_MARKET_DAILY_PICK_COINS_LEFT",0);
  thunk_FUN_1004e439c(auStack_50,uVar5);
  FUN_1004e313c(auStack_60);
  FUN_1004e38ac(auStack_60,"%d");
  FUN_1004e3120(auStack_70,"[COINS]");
  FUN_1004e3bc4(auStack_50,0,auStack_70,auStack_60);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  FUN_1006513c0(param_1 + 0x140,auStack_50);
  bVar1 = 0 < param_2;
  plVar2 = param_1 + 0x18c;
  puVar4 = (undefined4 *)&DAT_101158208;
  if (param_2 < 1) {
    puVar4 = &DAT_10115a164;
  }
  FUN_1001b4c0c(plVar2,bVar1);
  *(uint *)((long)param_1 + 0x2bc4) =
       *(uint *)((long)param_1 + 0x2bc4) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x2bc4) & 3 | (uint)bVar1 << 2;
  (**(code **)(param_1[0x18c] + 0x180))(plVar2);
  FUN_100651460(param_1 + 0x166,puVar4);
  plVar3 = param_1 + 0x63e;
  FUN_1001b4c0c(plVar3,bVar1);
  *(uint *)((long)param_1 + 0x5154) =
       *(uint *)((long)param_1 + 0x5154) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x5154) & 3 | (uint)bVar1 << 2;
  (**(code **)(param_1[0x63e] + 0x180))(plVar3);
  FUN_100651460(param_1 + 0x618,puVar4);
  if (param_2 < 1) {
    FUN_100181bb8(0x3f800000,plVar2,&DAT_101158200);
    uVar5 = FUN_1004e0150("MENU_MARKET_DAILY_PICK_SOLD_OUT",0);
    FUN_100181af8(plVar2,uVar5);
    FUN_100181bb8(0x3f800000,plVar3,&DAT_101158200);
    uVar5 = FUN_1004e0150("MENU_MARKET_DAILY_PICK_SOLD_OUT",0);
    FUN_100181af8(plVar3,uVar5);
  }
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  return;
}



/*
 * FUN_1001cb784
 * VA: 0x1001cb784 | Source: functions/1001c.c:8162
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 7
 * Callees: FUN_1001e3090, FUN_1002c09cc, FUN_1004e0150
 * Callers: FUN_1001cb980
 */
void FUN_1001cb784(long param_1,int param_2,byte *param_3,undefined8 param_4)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  ulong uVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  
  if (param_2 != 0) {
    FUN_1002c09cc(*(undefined8 *)(param_1 + 0xd8),param_4);
    return;
  }
  bVar3 = param_3[0x17];
  uVar12 = (ulong)bVar3;
  sVar1 = *(size_t *)(param_3 + 8);
  if (-1 < (char)bVar3) {
    sVar1 = uVar12;
  }
  sVar2 = DAT_101d23908;
  if (-1 < (char)DAT_101d23917) {
    sVar2 = (ulong)DAT_101d23917;
  }
  if (sVar1 == sVar2) {
    pbVar10 = *(byte **)param_3;
    if (-1 < (char)bVar3) {
      pbVar10 = param_3;
    }
    pbVar11 = DAT_101d23900;
    if (-1 < (char)DAT_101d23917) {
      pbVar11 = (byte *)&DAT_101d23900;
    }
    if ((char)bVar3 < '\0') {
      if ((sVar1 == 0) || (iVar5 = _memcmp(pbVar10,pbVar11,sVar1), iVar5 == 0)) goto LAB_1001cb8d4;
    }
    else {
      if (sVar1 == 0) {
LAB_1001cb8d4:
        uVar7 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
        pcVar6 = "MENU_MARKET_DAILY_PICK_ERROR_PURCHASE_NOT_FOUND";
        goto LAB_1001cb940;
      }
      pbVar10 = param_3;
      uVar4 = uVar12;
      if ((uint)*pbVar11 == ((uint)*(byte **)param_3 & 0xff)) {
        do {
          pbVar11 = pbVar11 + 1;
          pbVar10 = pbVar10 + 1;
          if (uVar4 - 1 == 0) goto LAB_1001cb8d4;
          uVar4 = uVar4 - 1;
        } while (*pbVar10 == *pbVar11);
      }
    }
  }
  sVar2 = DAT_101d23920;
  if (-1 < (char)DAT_101d2392f) {
    sVar2 = (ulong)DAT_101d2392f;
  }
  if (sVar1 == sVar2) {
    pbVar10 = *(byte **)param_3;
    if (-1 < (char)bVar3) {
      pbVar10 = param_3;
    }
    pbVar11 = DAT_101d23918;
    if (-1 < (char)DAT_101d2392f) {
      pbVar11 = (byte *)&DAT_101d23918;
    }
    if ((char)bVar3 < '\0') {
      if ((sVar1 == 0) || (iVar5 = _memcmp(pbVar10,pbVar11,sVar1), iVar5 == 0)) goto LAB_1001cb924;
    }
    else {
      if (sVar1 == 0) {
LAB_1001cb924:
        uVar7 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
        pcVar6 = "MENU_MARKET_DAILY_PICK_ERROR_PURCHASE_NOT_ALLOWED";
        goto LAB_1001cb940;
      }
      if ((uint)*pbVar11 == ((uint)*(byte **)param_3 & 0xff)) {
        do {
          uVar12 = uVar12 - 1;
          pbVar11 = pbVar11 + 1;
          param_3 = param_3 + 1;
          if (uVar12 == 0) goto LAB_1001cb924;
        } while (*param_3 == *pbVar11);
      }
    }
  }
  uVar7 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
  pcVar6 = "MENU_MARKET_DAILY_PICK_ERROR_GENERIC";
LAB_1001cb940:
  uVar8 = FUN_1004e0150(pcVar6,0);
  uVar9 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar7,uVar8,uVar9,param_1,0);
  return;
}



/*
 * FUN_1001e843c
 * VA: 0x1001e843c | Source: functions/1001e.c:5785
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 4
 * Callees: FUN_1000153b4, FUN_1000eb768, FUN_1001ad494, FUN_10021fea0, FUN_1004e0150, thunk_FUN_1001ad400, thunk_FUN_1004e439c
 * Callers: FUN_1001e8008
 */
void FUN_1001e843c(void)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [8];
  void *local_b0;
  undefined8 local_a8 [2];
  undefined1 auStack_98 [8];
  void *local_90;
  void *local_80;
  char local_69;
  void *local_68;
  char local_51;
  undefined8 local_4c;
  undefined4 local_44;
  void *local_40;
  char local_29;
  
  thunk_FUN_1001ad400(local_a8);
  uVar1 = FUN_1004e0150("MENU_MARKET_ICE_PURCHASE_POPUP_TITLE",0);
  thunk_FUN_1004e439c(auStack_b8,uVar1);
  FUN_1000153b4(auStack_98,auStack_b8);
  local_a8[0] = 0x447a000044c80000;
  local_44 = 1;
  FUN_1001ad494(local_a8,PTR_s_build___MenuPartsCommon_tga_101854970,"popup_fill",&DAT_101158308);
  local_4c = 0xffa3781effa4781e;
  uVar1 = FUN_1000eb768(PTR_s_MENU_CURRENCY_PURCHASE_POPUP_101854ac0,local_a8);
  FUN_10021fea0(uVar1,1);
  if (local_b0 != (void *)0x0) {
    operator_delete__(local_b0);
  }
  if (local_29 < '\0') {
    operator_delete(local_40);
  }
  if (local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_69 < '\0') {
    operator_delete(local_80);
  }
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
  }
  return;
}



/*
 * FUN_1001ea714
 * VA: 0x1001ea714 | Source: functions/1001e.c:8233
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 3
 * Callees: FUN_10001549c, FUN_1000eaaec, FUN_100198894, FUN_1001ad598, FUN_1001ea85c, FUN_10033f5d4, FUN_100341d4c, FUN_10146b090 (+4 more)
 * Callers: FUN_1001ea8e0, FUN_1001ea8e8, FUN_1001ea8f0, FUN_1001ea904, FUN_1001ea91c, thunk_FUN_1001ea714
 */
undefined8 * FUN_1001ea714(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  void *local_48 [2];
  char local_31;
  
  *param_1 = &PTR_FUN_10146b090;
  param_1[2] = &PTR_FUN_10146b108;
  param_1[0x13] = &PTR_thunk_FUN_1001eb16c_10146b148;
  param_1[0x14] = &PTR_FUN_10146b160;
  param_1[0x15] = &PTR_FUN_10146b188;
  lVar2 = FUN_100341d4c();
  if (*(uint *)(lVar2 + 0x30) != 0) {
    lVar4 = *(long *)(lVar2 + 0x38);
    lVar2 = (ulong)*(uint *)(lVar2 + 0x30) << 5;
    do {
      puVar1 = (undefined8 *)(lVar4 + 8);
      lVar4 = lVar4 + 0x20;
      if ((undefined8 *)*puVar1 == param_1) {
        FUN_100198894();
        break;
      }
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  FUN_10001549c(local_48,"MENU_TALENT_PURCHASE_POPUP");
  FUN_1001ad598(local_48);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  uVar3 = FUN_1000eaaec();
  FUN_10001549c(local_48,uVar3);
  FUN_1001ad598(local_48);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_10001549c(local_48,PTR_s_MENU_CURRENCY_PURCHASE_POPUP_101854ac0);
  FUN_1001ad598(local_48);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_10033f5d4(param_1 + 0x15);
  FUN_1001ea85c(param_1 + 2);
  *param_1 = &PTR____cxa_pure_virtual_10146b1f8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}



/*
 * FUN_1001eab54
 * VA: 0x1001eab54 | Source: functions/1001e.c:8541
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 5
 * Callees: FUN_1000153b4, FUN_10001549c, FUN_1000eb768, FUN_1001ad494, FUN_1001ad598, FUN_10021fea0, FUN_1004e0150, thunk_FUN_1001ad400 (+1 more)
 * Callers: FUN_1001ea98c, FUN_1001eac80, thunk_FUN_1001eac80
 */
void FUN_1001eab54(void)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [8];
  void *local_b0;
  void *local_a8 [2];
  undefined1 auStack_98 [7];
  char local_91;
  void *local_90;
  void *local_80;
  char local_69;
  void *local_68;
  char local_51;
  undefined8 local_4c;
  undefined4 local_44;
  void *local_40;
  char local_29;
  
  FUN_10001549c(local_a8,"MENU_TALENT_PURCHASE_POPUP");
  FUN_1001ad598(local_a8);
  if (local_91 < '\0') {
    operator_delete(local_a8[0]);
  }
  thunk_FUN_1001ad400(local_a8);
  uVar1 = FUN_1004e0150("MENU_MARKET_GLORY_PURCHASE_POPUP_TITLE",0);
  thunk_FUN_1004e439c(auStack_b8,uVar1);
  FUN_1000153b4(auStack_98,auStack_b8);
  local_a8[0] = (void *)0x447a000044c80000;
  local_44 = 1;
  FUN_1001ad494(local_a8,PTR_s_build___MenuPartsCommon_tga_101854970,"popup_fill",&DAT_10115830c);
  local_4c = 0xffa3781effa4781e;
  uVar1 = FUN_1000eb768(PTR_s_MENU_CURRENCY_PURCHASE_POPUP_101854ac0,local_a8);
  FUN_10021fea0(uVar1,0);
  if (local_b0 != (void *)0x0) {
    operator_delete__(local_b0);
  }
  if (local_29 < '\0') {
    operator_delete(local_40);
  }
  if (local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_69 < '\0') {
    operator_delete(local_80);
  }
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
  }
  return;
}



/*
 * FUN_100204584
 * VA: 0x100204584 | Source: functions/10020.c:3681
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 7
 * Callees: FUN_1000153b4, FUN_1000eb768, FUN_10015d3ec, FUN_1001ad494, FUN_1001e3120, FUN_10021fea0, FUN_1004e0150, thunk_FUN_1001ad400 (+2 more)
 * Callers: FUN_100204ac0
 */
void FUN_100204584(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_c8 [8];
  void *local_c0;
  undefined8 local_b8 [2];
  undefined1 auStack_a8 [8];
  void *local_a0;
  void *local_90;
  char local_79;
  void *local_78;
  char local_61;
  undefined8 local_5c;
  undefined4 local_54;
  void *local_50;
  char local_39;
  
  lVar1 = FUN_10015d3ec();
  if (*(char *)(lVar1 + 0x567c) != '\0') {
    uVar2 = FUN_1004e0150("MARKET_MUST_REGISTER_DIALOG_TITLE",0);
    uVar3 = FUN_1004e0150("MARKET_MUST_REGISTER_DIALOG_TEXT",0);
    uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    uVar5 = FUN_1004e0150("MAIN_PROFILE_LOGIN",0);
    FUN_1001e3120(uVar2,uVar3,uVar4,uVar5,param_1,0,thunk_FUN_100204720);
    return;
  }
  thunk_FUN_1001ad400(local_b8);
  uVar2 = FUN_1004e0150("MENU_MARKET_ICE_PURCHASE_POPUP_TITLE",0);
  thunk_FUN_1004e439c(auStack_c8,uVar2);
  FUN_1000153b4(auStack_a8,auStack_c8);
  local_b8[0] = 0x447a000044c80000;
  local_54 = 1;
  FUN_1001ad494(local_b8,PTR_s_build___MenuPartsCommon_tga_101854970,"popup_fill",&DAT_101158353);
  local_5c = 0xffa3781effa4781e;
  uVar2 = FUN_1000eb768(PTR_s_MENU_CURRENCY_PURCHASE_POPUP_101854ac0,local_b8);
  FUN_10021fea0(uVar2,1);
  if (local_c0 != (void *)0x0) {
    operator_delete__(local_c0);
  }
  if (local_39 < '\0') {
    operator_delete(local_50);
  }
  if (local_61 < '\0') {
    operator_delete(local_78);
  }
  if (local_79 < '\0') {
    operator_delete(local_90);
  }
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  return;
}



/*
 * FUN_1002173e0
 * VA: 0x1002173e0 | Source: functions/10021.c:5616
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 4
 * Callees: FUN_1000153b4, FUN_10001549c, FUN_1000eaaec, FUN_1000eb768, FUN_1001ad494, FUN_1001ad598, FUN_10021fea0, FUN_1004e0150 (+2 more)
 * Callers: FUN_100217334
 */
void FUN_1002173e0(void)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [8];
  void *local_b0;
  void *local_a8 [2];
  undefined1 auStack_98 [7];
  char local_91;
  void *local_90;
  undefined1 local_87;
  void *local_80;
  char local_69;
  void *local_68;
  char local_51;
  undefined8 local_4c;
  undefined4 local_44;
  void *local_40;
  char local_29;
  
  uVar1 = FUN_1000eaaec();
  FUN_10001549c(local_a8,uVar1);
  FUN_1001ad598(local_a8);
  if (local_91 < '\0') {
    operator_delete(local_a8[0]);
  }
  thunk_FUN_1001ad400(local_a8);
  uVar1 = FUN_1004e0150("MENU_MARKET_GLORY_PURCHASE_POPUP_TITLE",0);
  thunk_FUN_1004e439c(auStack_b8,uVar1);
  FUN_1000153b4(auStack_98,auStack_b8);
  local_a8[0] = (void *)0x447a000044c80000;
  local_44 = 1;
  FUN_1001ad494(local_a8,PTR_s_build___MenuPartsCommon_tga_101854970,"popup_fill",&DAT_101158388);
  local_4c = 0xffa3781effa4781e;
  local_87 = 1;
  uVar1 = FUN_1000eb768(PTR_s_MENU_CURRENCY_PURCHASE_POPUP_101854ac0,local_a8);
  FUN_10021fea0(uVar1,0);
  if (local_b0 != (void *)0x0) {
    operator_delete__(local_b0);
  }
  if (local_29 < '\0') {
    operator_delete(local_40);
  }
  if (local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_69 < '\0') {
    operator_delete(local_80);
  }
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
  }
  return;
}



/*
 * FUN_10021febc
 * VA: 0x10021febc | Source: functions/10021.c:12148
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 4
 * Callees: FUN_100181af8, FUN_1004e0150, FUN_1006513c0
 * Callers: FUN_10021fea0
 */
void FUN_10021febc(long param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1004e0150("MENU_MARKET_GLORY_PURCHASE_POPUP_DESC",0);
  FUN_1006513c0(param_1 + 0xb8,uVar2);
  pcVar1 = "GENERIC_DIALOG_OKAY";
  if (*(char *)(param_1 + 0x186c) != '\0') {
    pcVar1 = "MENU_MARKET_GET_GLORY";
  }
  uVar2 = FUN_1004e0150(pcVar1,0);
  FUN_100181af8(param_1 + 0x2b0,uVar2);
  return;
}



/*
 * FUN_10021ff2c
 * VA: 0x10021ff2c | Source: functions/10021.c:12168
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 4
 * Callees: FUN_100181af8, FUN_1004e0150, FUN_1006513c0
 * Callers: FUN_10021fea0
 */
void FUN_10021ff2c(long param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1004e0150("MENU_MARKET_ICE_PURCHASE_POPUP_DESC",0);
  FUN_1006513c0(param_1 + 0xb8,uVar2);
  pcVar1 = "GENERIC_DIALOG_OKAY";
  if (*(char *)(param_1 + 0x186c) != '\0') {
    pcVar1 = "MENU_MARKET_GET_ICE";
  }
  uVar2 = FUN_1004e0150(pcVar1,0);
  FUN_100181af8(param_1 + 0x2b0,uVar2);
  return;
}



/*
 * FUN_10024415c
 * VA: 0x10024415c | Source: functions/10024.c:2949
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 14
 * Callees: FUN_10015d3ec, FUN_100169cec, FUN_10016c2f0, FUN_1001e3090, FUN_1001e31c8, FUN_1004e0150, FUN_1004e3120, FUN_1004e3bc4 (+1 more)
 * Callers: FUN_100243b00, FUN_100244d88
 */
void FUN_10024415c(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_40 [8];
  void *local_38;
  undefined1 auStack_30 [8];
  void *local_28;
  
  iVar1 = *(int *)(param_2 + 0x28);
  if (iVar1 == -0x18) {
    uVar2 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
    pcVar4 = "MENU_DIALOG_SKU_UNAVAILABLE";
  }
  else if (iVar1 == -0x16) {
    uVar2 = FUN_1004e0150("MENU_DIALOG_HERO_CANT_AFFORD_TITLE",0);
    pcVar4 = "MENU_DIALOG_HERO_CANT_AFFORD";
  }
  else {
    if (iVar1 == 0) {
      if (((*(byte *)(param_1 + 0x2c2c) >> 2 & 1) != 0) &&
         ((int)*(short *)(param_1 + 0x2c20) != (*(int *)(param_1 + 0x41fc) << 1) >> 0x10)) {
        uVar2 = FUN_1004e0150("MENU_MARKET_BOOST_PURCHASE_SUCCESSFUL_BODY",0);
        thunk_FUN_1004e439c(auStack_30,uVar2);
        FUN_1004e3120(auStack_40,"[BOOST_NAME]");
        FUN_1004e3bc4(auStack_30,0,auStack_40,param_3 + 0x18);
        if (local_38 != (void *)0x0) {
          operator_delete__(local_38);
        }
        uVar2 = FUN_1004e0150("MENU_MARKET_BOOST_PURCHASE_SUCCESSFUL_TITLE",0);
        uVar3 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        FUN_1001e31c8(uVar2,auStack_30,uVar3,&DAT_101d91650,&DAT_101d91650,0,0,0,0);
        if (local_28 != (void *)0x0) {
          operator_delete__(local_28);
        }
      }
      goto LAB_100244310;
    }
    lVar6 = FUN_10016c2f0();
    if (0 < *(int *)(lVar6 + 0x38)) {
      *(undefined1 *)(param_1 + 0x9c98) = 1;
      goto LAB_100244310;
    }
    uVar2 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
    pcVar4 = "MENU_DIALOG_PURCHASE_FAILED";
  }
  uVar3 = FUN_1004e0150(pcVar4,0);
  uVar5 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar2,uVar3,uVar5,0,0);
LAB_100244310:
  lVar6 = FUN_10015d3ec();
  FUN_100169cec(lVar6 + 0x18);
  return;
}



/*
 * FUN_10024432c
 * VA: 0x10024432c | Source: functions/10024.c:3012
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 18
 * Callees: FUN_10001549c, FUN_10002f320, FUN_100031510, FUN_100031670, FUN_1000e7cb0, FUN_1000e7ce4, FUN_10010369c, FUN_100136d20 (+10 more)
 * Callers: FUN_100243b00
 */
void FUN_10024432c(long param_1,long param_2,undefined8 param_3,long param_4,int *param_5)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  void *local_e8 [2];
  char local_d1;
  undefined **local_d0;
  void *local_c8;
  char local_b9;
  void *local_b8;
  char local_a1;
  undefined1 auStack_a0 [48];
  void *local_70;
  char local_59;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  
  iVar3 = *(int *)(param_2 + 0x28);
  if (iVar3 < -0x16) {
    if (iVar3 == -0x18) {
      uVar4 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
      pcVar5 = "MENU_DIALOG_SKU_UNAVAILABLE";
    }
    else if (iVar3 == -0x17) {
      uVar4 = FUN_1004e0150("MENU_DIALOG_ITEM_ALREADY_OWNED_TITLE",0);
      pcVar5 = "MENU_DIALOG_ITEM_ALREADY_OWNED";
    }
    else {
LAB_1002443ec:
      lVar8 = FUN_10016c2f0();
      if (0 < *(int *)(lVar8 + 0x38)) {
        *(undefined1 *)(param_1 + 0x9c98) = 1;
        goto LAB_100244634;
      }
      uVar4 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
      pcVar5 = "MENU_DIALOG_PURCHASE_FAILED";
    }
  }
  else {
    if (iVar3 != -0x16) {
      if (iVar3 != 0) goto LAB_1002443ec;
      if (*(char *)(param_4 + 0x17) < '\0') {
        if (*(long *)(param_4 + 8) != 0) goto LAB_100244414;
LAB_100244490:
        uVar4 = FUN_1004e0150("MENU_MARKET_BUNDLE_PURCHASE_SUCCESSFUL_BODY",0);
        thunk_FUN_1004e439c(&local_d0,uVar4);
        uVar4 = FUN_1004e0150("MENU_MARKET_BUNDLE_PURCHASE_SUCCESSFUL_TITLE",0);
        uVar6 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        FUN_1001e31c8(uVar4,&local_d0,uVar6,&DAT_101d91650,&DAT_101d91650,0,0,0,0);
        if (local_c8 != (void *)0x0) {
          operator_delete__(local_c8);
        }
      }
      else {
        if (*(char *)(param_4 + 0x17) == '\0') goto LAB_100244490;
LAB_100244414:
        if (*param_5 == 0) goto LAB_100244490;
        uVar4 = FUN_10002f320();
        FUN_10001549c(&local_d0,"purchaseBundle");
        FUN_100031510(uVar4,&local_d0,param_4);
        if (local_b9 < '\0') {
          operator_delete(local_d0);
        }
        uVar4 = FUN_10002f320();
        FUN_10001549c(&local_d0,"purchaseBundle");
        FUN_100031670(uVar4,&local_d0,param_5);
        if (local_b9 < '\0') {
          operator_delete(local_d0);
        }
      }
      FUN_10014237c(&local_d0);
      plVar1 = (long *)(param_2 + 0x48);
      iVar3 = FUN_100136d20(plVar1,&local_d0);
      if (iVar3 != 0) {
        plVar2 = (long *)*plVar1;
        if (-1 < *(char *)(param_2 + 0x5f)) {
          plVar2 = plVar1;
        }
        uVar4 = FUN_1000e7cb0(auStack_a0);
        uVar6 = FUN_1000e7ce4(auStack_a0);
        FUN_10001549c(local_e8,uVar6);
        FUN_10010369c(plVar2,uVar4,local_e8,param_5);
        if (local_d1 < '\0') {
          operator_delete(local_e8[0]);
        }
      }
      local_d0 = &PTR_FUN_10145ac30;
      if (local_40 != (void *)0x0) {
        operator_delete__(local_40);
        local_48 = 0;
        local_40 = (void *)0x0;
      }
      if (local_50 != (void *)0x0) {
        operator_delete__(local_50);
        local_58 = 0;
        local_50 = (void *)0x0;
      }
      if (local_59 < '\0') {
        operator_delete(local_70);
      }
      if (local_a1 < '\0') {
        operator_delete(local_b8);
      }
      FUN_1001423e4(&local_c8,1);
      goto LAB_100244634;
    }
    uVar4 = FUN_1004e0150("MENU_DIALOG_HERO_CANT_AFFORD_TITLE",0);
    pcVar5 = "MENU_DIALOG_HERO_CANT_AFFORD";
  }
  uVar6 = FUN_1004e0150(pcVar5,0);
  uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar4,uVar6,uVar7,0,0);
LAB_100244634:
  lVar8 = FUN_10015d3ec();
  FUN_100169cec(lVar8 + 0x18);
  return;
}



/*
 * FUN_100245c98
 * VA: 0x100245c98 | Source: functions/named.c:21132
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 4
 * Callees: FUN_1000153b4, FUN_10001549c, FUN_1000e7d68, FUN_1000e8b18, FUN_100135c64, FUN_100136c90, FUN_100136cac, FUN_100136d8c (+17 more)
 */
/* WARNING: Removing unreachable block (ram,0x000100245e88) */
/* WARNING: Removing unreachable block (ram,0x000100245eec) */
/* WARNING: Removing unreachable block (ram,0x0001002460cc) */
/* WARNING: Removing unreachable block (ram,0x000100246110) */

void FUN_100245c98(long *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  uint *puVar13;
  byte bVar14;
  ulong uVar15;
  undefined4 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 *puVar21;
  string *this;
  string *this_00;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined **local_1e0;
  long lStack_1d8;
  char local_1c9;
  void *local_1c8 [2];
  char local_1b1;
  undefined8 local_1b0 [6];
  void *local_180 [2];
  char local_169;
  undefined8 local_168;
  void *local_160;
  undefined8 local_158;
  void *local_150;
  undefined4 local_148 [2];
  undefined **local_140;
  long local_138;
  char local_129;
  void *local_128 [2];
  char local_111;
  undefined8 auStack_110 [6];
  void *local_e0 [2];
  char local_c9;
  undefined8 local_c8;
  void *local_c0;
  undefined8 local_b8;
  void *local_b0;
  undefined4 auStack_a8 [2];
  ulong local_a0;
  long local_98;
  string local_90 [24];
  ulong local_78;
  long local_70;
  
  FUN_100243458();
  local_78 = 0;
  local_70 = 0;
  iVar4 = FUN_100136d8c(&local_78);
  lVar12 = local_70;
  if (iVar4 != 0) {
    iVar4 = (int)local_78;
    uVar15 = local_78 & 0xffffffff;
    FUN_10001549c(&local_140,"vainglory://Market/");
    if (iVar4 != 0) {
      lVar20 = 0;
      do {
        lVar1 = lVar12 + lVar20;
        uVar17 = lVar1 + 0x60;
        bVar14 = *(byte *)(lVar1 + 0x77);
        uVar9 = (ulong)bVar14;
        uVar11 = *(ulong *)(lVar1 + 0x68);
        uVar6 = uVar11;
        if (-1 < (char)bVar14) {
          uVar6 = uVar9;
        }
        if (uVar6 == 0xc) {
          iVar4 = std::string::compare(uVar17,0,(char *)0xffffffffffffffff,0x1013e8164);
          if (iVar4 != 0) {
            bVar14 = *(byte *)(lVar1 + 0x77);
            uVar9 = (ulong)bVar14;
            uVar11 = *(ulong *)(lVar1 + 0x68);
            goto LAB_100245d70;
          }
        }
        else {
LAB_100245d70:
          uVar6 = uVar11;
          if (-1 < (char)bVar14) {
            uVar6 = uVar9;
          }
          if (uVar6 == 6) {
            iVar4 = std::string::compare(uVar17,0,(char *)0xffffffffffffffff,0x1013e8171);
            if (iVar4 == 0) {
              FUN_10001549c(&local_1e0,"MENU_MARKET_TAB_NAME_BOOSTS");
              FUN_10001549c(local_90,"vainglory://Market/boosts");
              FUN_100246354(param_1,&local_1e0,local_90,&DAT_101d91198);
              if (local_1c9 < '\0') {
                operator_delete(local_1e0);
              }
              goto LAB_100245f04;
            }
            bVar14 = *(byte *)(lVar1 + 0x77);
            uVar9 = (ulong)bVar14;
            uVar11 = *(ulong *)(lVar1 + 0x68);
          }
          uVar6 = uVar11;
          if (-1 < (char)bVar14) {
            uVar6 = uVar9;
          }
          if (uVar6 == 3) {
            iVar4 = std::string::compare(uVar17,0,(char *)0xffffffffffffffff,0x1013d9fb9);
            if (iVar4 == 0) goto LAB_100245f04;
            bVar14 = *(byte *)(lVar1 + 0x77);
            uVar9 = (ulong)bVar14;
            uVar11 = *(ulong *)(lVar1 + 0x68);
          }
          if (-1 < (char)bVar14) {
            uVar11 = uVar9;
          }
          if ((uVar11 != 10) ||
             (iVar4 = std::string::compare(uVar17,0,(char *)0xffffffffffffffff,0x1013e81ae),
             iVar4 != 0)) {
            lVar5 = lVar12 + lVar20;
            lVar10 = lVar5 + 0x18;
            FUN_1000e8b18(local_90,&local_140,lVar10);
            std::string::string((string *)&local_1e0,local_90);
            lVar5 = (**(code **)(*param_1 + 0x230))(param_1,lVar5 + 0x48,lVar10,&local_1e0);
            if (local_1c9 < '\0') {
              operator_delete(local_1e0);
            }
            if (lVar5 != 0) {
              FUN_10022b4d4(lVar5,lVar1,lVar10,param_1 + 0x588);
            }
          }
        }
LAB_100245f04:
        lVar20 = lVar20 + 0x78;
      } while (uVar15 * 0x78 - lVar20 != 0);
    }
    if (local_129 < '\0') {
      operator_delete(local_140);
    }
  }
  if ((int)local_78 == 0) {
    FUN_10001549c(&local_140,"MENU_MARKET_TAB_NAME_BOOSTS");
    FUN_10001549c(&local_1e0,"vainglory://Market/boosts");
    FUN_100246354(param_1,&local_140,&local_1e0,&DAT_101d91198);
    if (local_1c9 < '\0') {
      operator_delete(local_1e0);
    }
    if (local_129 < '\0') {
      operator_delete(local_140);
    }
  }
  FUN_1001e611c(param_1 + 0x62);
  if ((*(byte *)((long)param_1 + 0x2c2c) >> 1 & 1) != 0) {
    sVar3 = 0;
    if ((short)param_1[0x584] != -1) {
      sVar3 = (short)param_1[0x584];
    }
    FUN_1001e6f74(param_1,(int)sVar3,&DAT_101d91198);
  }
  local_a0 = 0;
  local_98 = 0;
  FUN_100136c90(&local_a0);
  if ((int)local_a0 != 0) {
    uVar15 = 0;
    do {
      lVar12 = local_98;
      FUN_10014237c(&local_140);
      FUN_10014237c(&local_1e0);
      lVar12 = lVar12 + uVar15 * 0xe8;
      puVar13 = (uint *)(lVar12 + 8);
      if (*puVar13 != 0) {
        lVar20 = 0;
        uVar17 = 0;
        do {
          lVar10 = *(long *)(lVar12 + 0x10);
          lVar1 = lVar10 + lVar20 + 0x30;
          FUN_10001549c(local_90,"silver");
          uVar6 = FUN_1000e7d68(lVar1,local_90);
          plVar7 = &local_138;
          puVar16 = auStack_a8;
          puVar18 = auStack_110;
          puVar19 = &local_b8;
          puVar21 = &local_c8;
          this = (string *)local_e0;
          this_00 = (string *)local_128;
          if ((uVar6 & 1) == 0) {
            FUN_10001549c(local_90,"gold");
            iVar4 = FUN_1000e7d68(lVar1,local_90);
            plVar7 = &lStack_1d8;
            puVar16 = local_148;
            puVar18 = local_1b0;
            puVar19 = &local_158;
            puVar21 = &local_168;
            this = (string *)local_180;
            this_00 = (string *)local_1c8;
            if (iVar4 != 0) goto LAB_10024612c;
          }
          else {
LAB_10024612c:
            lVar10 = lVar10 + lVar20;
            FUN_100146c30(plVar7,lVar10 + 8);
            std::string::operator=(this_00,(string *)(lVar10 + 0x18));
            uVar24 = *(undefined8 *)(lVar10 + 0x48);
            uVar23 = *(undefined8 *)(lVar10 + 0x40);
            uVar22 = *(undefined8 *)(lVar10 + 0x58);
            uVar8 = *(undefined8 *)(lVar10 + 0x50);
            uVar25 = *(undefined8 *)(lVar10 + 0x30);
            puVar18[1] = *(undefined8 *)(lVar10 + 0x38);
            *puVar18 = uVar25;
            puVar18[3] = uVar24;
            puVar18[2] = uVar23;
            puVar18[5] = uVar22;
            puVar18[4] = uVar8;
            std::string::operator=(this,(string *)(lVar10 + 0x60));
            FUN_1000153b4(puVar21,lVar10 + 0x78);
            FUN_1000153b4(puVar19,lVar10 + 0x88);
            *puVar16 = *(undefined4 *)(lVar10 + 0x98);
          }
          uVar17 = uVar17 + 1;
          lVar20 = lVar20 + 0xa0;
        } while (uVar17 < *puVar13);
      }
      local_1e0 = &PTR_FUN_10145ac30;
      if (local_150 != (void *)0x0) {
        operator_delete__(local_150);
        local_158 = 0;
        local_150 = (void *)0x0;
      }
      if (local_160 != (void *)0x0) {
        operator_delete__(local_160);
        local_168 = 0;
        local_160 = (void *)0x0;
      }
      if (local_169 < '\0') {
        operator_delete(local_180[0]);
      }
      if (local_1b1 < '\0') {
        operator_delete(local_1c8[0]);
      }
      FUN_1001423e4(&lStack_1d8,1);
      local_140 = &PTR_FUN_10145ac30;
      if (local_b0 != (void *)0x0) {
        operator_delete__(local_b0);
        local_b8 = 0;
        local_b0 = (void *)0x0;
      }
      if (local_c0 != (void *)0x0) {
        operator_delete__(local_c0);
        local_c8 = 0;
        local_c0 = (void *)0x0;
      }
      if (local_c9 < '\0') {
        operator_delete(local_e0[0]);
      }
      if (local_111 < '\0') {
        operator_delete(local_128[0]);
      }
      FUN_1001423e4(&local_138,1);
      uVar15 = uVar15 + 1;
    } while (uVar15 < (local_a0 & 0xffffffff));
  }
  local_140 = (undefined **)0x0;
  local_138 = 0;
  FUN_100136cac(&local_140);
  if ((int)local_140 != 0) {
    uVar15 = 0;
    lVar12 = 0xe4;
    do {
      puVar2 = (undefined1 *)(local_138 + lVar12);
      uVar8 = FUN_100247598(param_1 + 0x82f,puVar2 + -0x54,puVar2 + -0xcc,puVar2 + -0xbc,
                            puVar2 + -0xac,puVar2 + -0x3c,puVar2 + -0xdc,*puVar2);
      FUN_10018f2f8(uVar8,puVar2 + -0x54);
      FUN_10017eb50(uVar8);
      uVar15 = uVar15 + 1;
      lVar12 = lVar12 + 0xe8;
    } while (uVar15 < ((ulong)local_140 & 0xffffffff));
  }
  FUN_1002476d0(param_1 + 0x82f);
  if ((*(byte *)(param_1 + 0x89b) >> 1 & 1) != 0) {
    lVar12 = FUN_10015d3ec();
    FUN_100169cec(lVar12 + 0x18);
  }
  FUN_100244fc0(param_1);
  FUN_100144b1c(&local_140,1);
  FUN_100144b1c(&local_a0,1);
  FUN_100135c64(&local_78,1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x000100249f9c) */
/* WARNING: Removing unreachable block (ram,0x000100249f40) */
/* WARNING: Removing unreachable block (ram,0x000100249ee8) */
/* WARNING: Removing unreachable block (ram,0x000100249f14) */
/* WARNING: Removing unreachable block (ram,0x000100249f6c) */
/* WARNING: Removing unreachable block (ram,0x00010024af50) */



/*
 * thunk_FUN_100245c98
 * VA: 0xthunk_100245c98 | Source: functions/named.c:20824
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 4
 * Callees: FUN_1000153b4, FUN_10001549c, FUN_1000e7d68, FUN_1000e8b18, FUN_100135c64, FUN_100136c90, FUN_100136cac, FUN_100136d8c (+17 more)
 */
/* WARNING: Removing unreachable block (ram,0x000100245e88) */
/* WARNING: Removing unreachable block (ram,0x000100245eec) */
/* WARNING: Removing unreachable block (ram,0x0001002460cc) */
/* WARNING: Removing unreachable block (ram,0x000100246110) */

void thunk_FUN_100245c98(long *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  uint *puVar13;
  byte bVar14;
  ulong uVar15;
  undefined4 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 *puVar21;
  string *this;
  string *this_00;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined **ppuStack_1e0;
  long lStack_1d8;
  char cStack_1c9;
  void *apvStack_1c8 [2];
  char cStack_1b1;
  undefined8 auStack_1b0 [6];
  void *apvStack_180 [2];
  char cStack_169;
  undefined8 uStack_168;
  void *pvStack_160;
  undefined8 uStack_158;
  void *pvStack_150;
  undefined4 auStack_148 [2];
  undefined **ppuStack_140;
  long lStack_138;
  char cStack_129;
  void *apvStack_128 [2];
  char cStack_111;
  undefined8 auStack_110 [6];
  void *apvStack_e0 [2];
  char cStack_c9;
  undefined8 uStack_c8;
  void *pvStack_c0;
  undefined8 uStack_b8;
  void *pvStack_b0;
  undefined4 auStack_a8 [2];
  ulong uStack_a0;
  long lStack_98;
  string asStack_90 [24];
  ulong uStack_78;
  long lStack_70;
  
  FUN_100243458();
  uStack_78 = 0;
  lStack_70 = 0;
  iVar4 = FUN_100136d8c(&uStack_78);
  lVar12 = lStack_70;
  if (iVar4 != 0) {
    iVar4 = (int)uStack_78;
    uVar15 = uStack_78 & 0xffffffff;
    FUN_10001549c(&ppuStack_140,"vainglory://Market/");
    if (iVar4 != 0) {
      lVar20 = 0;
      do {
        lVar1 = lVar12 + lVar20;
        uVar17 = lVar1 + 0x60;
        bVar14 = *(byte *)(lVar1 + 0x77);
        uVar9 = (ulong)bVar14;
        uVar11 = *(ulong *)(lVar1 + 0x68);
        uVar6 = uVar11;
        if (-1 < (char)bVar14) {
          uVar6 = uVar9;
        }
        if (uVar6 == 0xc) {
          iVar4 = std::string::compare(uVar17,0,(char *)0xffffffffffffffff,0x1013e8164);
          if (iVar4 != 0) {
            bVar14 = *(byte *)(lVar1 + 0x77);
            uVar9 = (ulong)bVar14;
            uVar11 = *(ulong *)(lVar1 + 0x68);
            goto LAB_100245d70;
          }
        }
        else {
LAB_100245d70:
          uVar6 = uVar11;
          if (-1 < (char)bVar14) {
            uVar6 = uVar9;
          }
          if (uVar6 == 6) {
            iVar4 = std::string::compare(uVar17,0,(char *)0xffffffffffffffff,0x1013e8171);
            if (iVar4 == 0) {
              FUN_10001549c(&ppuStack_1e0,"MENU_MARKET_TAB_NAME_BOOSTS");
              FUN_10001549c(asStack_90,"vainglory://Market/boosts");
              FUN_100246354(param_1,&ppuStack_1e0,asStack_90,&DAT_101d91198);
              if (cStack_1c9 < '\0') {
                operator_delete(ppuStack_1e0);
              }
              goto LAB_100245f04;
            }
            bVar14 = *(byte *)(lVar1 + 0x77);
            uVar9 = (ulong)bVar14;
            uVar11 = *(ulong *)(lVar1 + 0x68);
          }
          uVar6 = uVar11;
          if (-1 < (char)bVar14) {
            uVar6 = uVar9;
          }
          if (uVar6 == 3) {
            iVar4 = std::string::compare(uVar17,0,(char *)0xffffffffffffffff,0x1013d9fb9);
            if (iVar4 == 0) goto LAB_100245f04;
            bVar14 = *(byte *)(lVar1 + 0x77);
            uVar9 = (ulong)bVar14;
            uVar11 = *(ulong *)(lVar1 + 0x68);
          }
          if (-1 < (char)bVar14) {
            uVar11 = uVar9;
          }
          if ((uVar11 != 10) ||
             (iVar4 = std::string::compare(uVar17,0,(char *)0xffffffffffffffff,0x1013e81ae),
             iVar4 != 0)) {
            lVar5 = lVar12 + lVar20;
            lVar10 = lVar5 + 0x18;
            FUN_1000e8b18(asStack_90,&ppuStack_140,lVar10);
            std::string::string((string *)&ppuStack_1e0,asStack_90);
            lVar5 = (**(code **)(*param_1 + 0x230))(param_1,lVar5 + 0x48,lVar10,&ppuStack_1e0);
            if (cStack_1c9 < '\0') {
              operator_delete(ppuStack_1e0);
            }
            if (lVar5 != 0) {
              FUN_10022b4d4(lVar5,lVar1,lVar10,param_1 + 0x588);
            }
          }
        }
LAB_100245f04:
        lVar20 = lVar20 + 0x78;
      } while (uVar15 * 0x78 - lVar20 != 0);
    }
    if (cStack_129 < '\0') {
      operator_delete(ppuStack_140);
    }
  }
  if ((int)uStack_78 == 0) {
    FUN_10001549c(&ppuStack_140,"MENU_MARKET_TAB_NAME_BOOSTS");
    FUN_10001549c(&ppuStack_1e0,"vainglory://Market/boosts");
    FUN_100246354(param_1,&ppuStack_140,&ppuStack_1e0,&DAT_101d91198);
    if (cStack_1c9 < '\0') {
      operator_delete(ppuStack_1e0);
    }
    if (cStack_129 < '\0') {
      operator_delete(ppuStack_140);
    }
  }
  FUN_1001e611c(param_1 + 0x62);
  if ((*(byte *)((long)param_1 + 0x2c2c) >> 1 & 1) != 0) {
    sVar3 = 0;
    if ((short)param_1[0x584] != -1) {
      sVar3 = (short)param_1[0x584];
    }
    FUN_1001e6f74(param_1,(int)sVar3,&DAT_101d91198);
  }
  uStack_a0 = 0;
  lStack_98 = 0;
  FUN_100136c90(&uStack_a0);
  if ((int)uStack_a0 != 0) {
    uVar15 = 0;
    do {
      lVar12 = lStack_98;
      FUN_10014237c(&ppuStack_140);
      FUN_10014237c(&ppuStack_1e0);
      lVar12 = lVar12 + uVar15 * 0xe8;
      puVar13 = (uint *)(lVar12 + 8);
      if (*puVar13 != 0) {
        lVar20 = 0;
        uVar17 = 0;
        do {
          lVar10 = *(long *)(lVar12 + 0x10);
          lVar1 = lVar10 + lVar20 + 0x30;
          FUN_10001549c(asStack_90,"silver");
          uVar6 = FUN_1000e7d68(lVar1,asStack_90);
          plVar7 = &lStack_138;
          puVar16 = auStack_a8;
          puVar18 = auStack_110;
          puVar19 = &uStack_b8;
          puVar21 = &uStack_c8;
          this = (string *)apvStack_e0;
          this_00 = (string *)apvStack_128;
          if ((uVar6 & 1) == 0) {
            FUN_10001549c(asStack_90,"gold");
            iVar4 = FUN_1000e7d68(lVar1,asStack_90);
            plVar7 = &lStack_1d8;
            puVar16 = auStack_148;
            puVar18 = auStack_1b0;
            puVar19 = &uStack_158;
            puVar21 = &uStack_168;
            this = (string *)apvStack_180;
            this_00 = (string *)apvStack_1c8;
            if (iVar4 != 0) goto LAB_10024612c;
          }
          else {
LAB_10024612c:
            lVar10 = lVar10 + lVar20;
            FUN_100146c30(plVar7,lVar10 + 8);
            std::string::operator=(this_00,(string *)(lVar10 + 0x18));
            uVar24 = *(undefined8 *)(lVar10 + 0x48);
            uVar23 = *(undefined8 *)(lVar10 + 0x40);
            uVar22 = *(undefined8 *)(lVar10 + 0x58);
            uVar8 = *(undefined8 *)(lVar10 + 0x50);
            uVar25 = *(undefined8 *)(lVar10 + 0x30);
            puVar18[1] = *(undefined8 *)(lVar10 + 0x38);
            *puVar18 = uVar25;
            puVar18[3] = uVar24;
            puVar18[2] = uVar23;
            puVar18[5] = uVar22;
            puVar18[4] = uVar8;
            std::string::operator=(this,(string *)(lVar10 + 0x60));
            FUN_1000153b4(puVar21,lVar10 + 0x78);
            FUN_1000153b4(puVar19,lVar10 + 0x88);
            *puVar16 = *(undefined4 *)(lVar10 + 0x98);
          }
          uVar17 = uVar17 + 1;
          lVar20 = lVar20 + 0xa0;
        } while (uVar17 < *puVar13);
      }
      ppuStack_1e0 = &PTR_FUN_10145ac30;
      if (pvStack_150 != (void *)0x0) {
        operator_delete__(pvStack_150);
        uStack_158 = 0;
        pvStack_150 = (void *)0x0;
      }
      if (pvStack_160 != (void *)0x0) {
        operator_delete__(pvStack_160);
        uStack_168 = 0;
        pvStack_160 = (void *)0x0;
      }
      if (cStack_169 < '\0') {
        operator_delete(apvStack_180[0]);
      }
      if (cStack_1b1 < '\0') {
        operator_delete(apvStack_1c8[0]);
      }
      FUN_1001423e4(&lStack_1d8,1);
      ppuStack_140 = &PTR_FUN_10145ac30;
      if (pvStack_b0 != (void *)0x0) {
        operator_delete__(pvStack_b0);
        uStack_b8 = 0;
        pvStack_b0 = (void *)0x0;
      }
      if (pvStack_c0 != (void *)0x0) {
        operator_delete__(pvStack_c0);
        uStack_c8 = 0;
        pvStack_c0 = (void *)0x0;
      }
      if (cStack_c9 < '\0') {
        operator_delete(apvStack_e0[0]);
      }
      if (cStack_111 < '\0') {
        operator_delete(apvStack_128[0]);
      }
      FUN_1001423e4(&lStack_138,1);
      uVar15 = uVar15 + 1;
    } while (uVar15 < (uStack_a0 & 0xffffffff));
  }
  ppuStack_140 = (undefined **)0x0;
  lStack_138 = 0;
  FUN_100136cac(&ppuStack_140);
  if ((int)ppuStack_140 != 0) {
    uVar15 = 0;
    lVar12 = 0xe4;
    do {
      puVar2 = (undefined1 *)(lStack_138 + lVar12);
      uVar8 = FUN_100247598(param_1 + 0x82f,puVar2 + -0x54,puVar2 + -0xcc,puVar2 + -0xbc,
                            puVar2 + -0xac,puVar2 + -0x3c,puVar2 + -0xdc,*puVar2);
      FUN_10018f2f8(uVar8,puVar2 + -0x54);
      FUN_10017eb50(uVar8);
      uVar15 = uVar15 + 1;
      lVar12 = lVar12 + 0xe8;
    } while (uVar15 < ((ulong)ppuStack_140 & 0xffffffff));
  }
  FUN_1002476d0(param_1 + 0x82f);
  if ((*(byte *)(param_1 + 0x89b) >> 1 & 1) != 0) {
    lVar12 = FUN_10015d3ec();
    FUN_100169cec(lVar12 + 0x18);
  }
  FUN_100244fc0(param_1);
  FUN_100144b1c(&ppuStack_140,1);
  FUN_100144b1c(&uStack_a0,1);
  FUN_100135c64(&uStack_78,1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x000100245e88) */
/* WARNING: Removing unreachable block (ram,0x000100245eec) */
/* WARNING: Removing unreachable block (ram,0x0001002460cc) */
/* WARNING: Removing unreachable block (ram,0x000100246110) */



/*
 * FUN_10024e4a4
 * market panel tabs
 * VA: 0x10024e4a4 | Source: functions/10024.c:8719
 * Fptr: __DATA+0x147a120
 * Dylib: Layer 8
 * Layout: +0x2cf20+0x10=additional market tab, +0xda10=market filter
 * Notes: Gate blocks additional market tab and filter.
 * CE-gate: YES (4x) | Guest-gate: NO
 * Callees: FUN_10001629c, FUN_10010b1a8, FUN_100126b8c, FUN_100131560, FUN_10018d7d4, FUN_10018e754, FUN_10018f140, FUN_1001e6c4c (+5 more)
 */
void FUN_10024e4a4(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((int)param_2 != 0) {
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    *(undefined8 *)(param_1 + 0x2cf30) = 0;
    *(undefined8 *)(param_1 + 0x2cf28) = 0;
    uVar4 = FUN_100131560();
    if ((uVar4 & 1) == 0) {
      FUN_10024db00(param_1,*(undefined8 *)(*(long *)(param_1 + 0x2cf20) + 0x10),&uStack_50,
                    &local_60);
    }
    FUN_10024db00(param_1,*(undefined8 *)(*(long *)(param_1 + 0x2cf20) + 8),&uStack_50,&local_60);
    FUN_10024db00(param_1,**(undefined8 **)(param_1 + 0x2cf20),&uStack_50,&local_60);
    lVar1 = param_1 + 0xb0e8;
    *(undefined1 *)(param_1 + 0xda10) = *(undefined1 *)(param_1 + 0x2ceb4);
    uVar4 = FUN_100131560();
    if ((uVar4 & 1) == 0) {
      FUN_10018f140(lVar1,0,*(undefined4 *)(param_1 + 0x2cf2c));
    }
    uVar2 = FUN_100131560();
    FUN_10018f140(lVar1,uVar2 ^ 1,*(undefined4 *)(param_1 + 0x2cf30));
    iVar3 = FUN_100131560();
    uVar6 = 1;
    if (iVar3 == 0) {
      uVar6 = 2;
    }
    FUN_10018f140(lVar1,uVar6,*(undefined4 *)(param_1 + 0x2cf34));
    FUN_10018d7d4((char)*(undefined4 *)(param_1 + 0x2cf38),*(undefined4 *)(param_1 + 0x2cf38),0,
                  0x3f800000,0x3f8ccccd,lVar1,&uStack_50,&local_60,1,1,1);
    FUN_10018e754(lVar1,param_1 + 0x2cec0,1,0);
    uVar5 = FUN_10024e660(param_1);
    FUN_100530adc(param_1 + 0x7f68,0,uVar5);
    FUN_10024e69c(param_1);
    iVar3 = FUN_100126b8c();
    if (iVar3 != 0) {
      FUN_1002194c8(param_1 + 0x2c68);
    }
    FUN_10001629c(&local_60,1);
    FUN_10010b1a8(&uStack_50,1);
  }
  FUN_1001e6c4c(param_1,param_2);
  return;
}



/*
 * FUN_100296204
 * VA: 0x100296204 | Source: functions/10029.c:4109
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 3, Vis masks: 1
 * Callees: FUN_1000200a0, FUN_100126c88, FUN_1001cd23c, FUN_10029b498, FUN_1004e0150, FUN_1004e3004, FUN_100642bd8, FUN_10064e20c (+13 more)
 */
long * FUN_100296204(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined **ppuVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  
  puVar8 = (undefined8 *)FUN_10029b498();
  puVar8[0xc9] = 0;
  *puVar8 = &PTR_thunk_FUN_100296510_101480140;
  puVar8 = puVar8 + 0xca;
  thunk_FUN_100650e64(puVar8);
  FUN_10064e20c(param_1 + 0xf0);
  param_1[0xf0] = (long)&PTR_thunk_FUN_10064e2bc_1014a64d8;
  FUN_10064fc80(param_1 + 0x107);
  plVar1 = param_1 + 0x10b;
  thunk_FUN_1001c0c34(plVar1,0);
  plVar2 = param_1 + 0x1ba;
  FUN_10064fd30(plVar2);
  plVar3 = param_1 + 0x1d3;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0x1f9;
  thunk_FUN_1001cd1dc(plVar4);
  FUN_10064fc80(param_1 + 0x224);
  param_1[0x22c] = 0;
  param_1[0x22b] = 0;
  param_1[0x22a] = 0;
  param_1[0x229] = 0;
  param_1[0x228] = 0;
  FUN_1004e3004(param_1 + 0x22d);
  param_1[0x22e] = 0;
  *(undefined1 *)(param_1 + 0x22f) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xf0,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar2,plVar4,1);
  *(undefined4 *)(param_1 + 0x227) = 1;
  param_1[0x225] = 0x41200000;
  if ((*(float *)(param_1 + 0x114) != 3.0) || (*(float *)((long)param_1 + 0x8a4) != 3.0)) {
    lVar10 = NEON_fmov(0x40400000,4);
    param_1[0x114] = lVar10;
    FUN_1000200a0(plVar1);
  }
  *(uint *)((long)param_1 + 0x8dc) = *(uint *)((long)param_1 + 0x8dc) & 0xfffffffb;
  iVar7 = FUN_100126c88();
  FUN_100651038(puVar8,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  FUN_10065165c(puVar8,1);
  uVar9 = FUN_1004e0150("MENU_MARKET_DAILY_PICK_TITLE",0);
  FUN_1006513c0(puVar8,uVar9);
  FUN_100651700(puVar8,3);
  uVar6 = *(uint *)((long)param_1 + 0x6d4);
  if ((uVar6 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x6d4) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x6600;
    FUN_1000200a0(puVar8);
  }
  ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar7 == 0) {
    ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(plVar3,*ppuVar5);
  uVar6 = *(uint *)((long)param_1 + 0xf1c);
  if ((uVar6 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0xf1c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar3);
  }
  uVar9 = FUN_1004e0150("MENU_MARKET_DAILY_PICK_TIMER_LABEL",0);
  FUN_1006513c0(plVar3,uVar9);
  FUN_100651700(plVar3,3);
  ppuVar5 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  if (iVar7 == 0) {
    ppuVar5 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651038(plVar4,*ppuVar5);
  uVar9 = FUN_1004e0150("MENU_MARKET_DAILY_PICK_TIMER",0);
  FUN_1001cd23c(plVar4,uVar9,1,1);
  FUN_1006515d0(plVar4,1);
  FUN_100651700(plVar4,3);
  FUN_100650140(plVar2,1);
  return param_1;
}



/*
 * thunk_FUN_100296204
 * VA: 0xthunk_100296204 | Source: functions/10029.c:4202
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 3, Vis masks: 1
 * Callees: FUN_1000200a0, FUN_100126c88, FUN_1001cd23c, FUN_10029b498, FUN_1004e0150, FUN_1004e3004, FUN_100642bd8, FUN_10064e20c (+13 more)
 * Callers: FUN_1001ea64c, thunk_FUN_1001ea64c
 */
long * thunk_FUN_100296204(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined **ppuVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  
  puVar8 = (undefined8 *)FUN_10029b498();
  puVar8[0xc9] = 0;
  *puVar8 = &PTR_thunk_FUN_100296510_101480140;
  puVar8 = puVar8 + 0xca;
  thunk_FUN_100650e64(puVar8);
  FUN_10064e20c(param_1 + 0xf0);
  param_1[0xf0] = (long)&PTR_thunk_FUN_10064e2bc_1014a64d8;
  FUN_10064fc80(param_1 + 0x107);
  plVar1 = param_1 + 0x10b;
  thunk_FUN_1001c0c34(plVar1,0);
  plVar2 = param_1 + 0x1ba;
  FUN_10064fd30(plVar2);
  plVar3 = param_1 + 0x1d3;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0x1f9;
  thunk_FUN_1001cd1dc(plVar4);
  FUN_10064fc80(param_1 + 0x224);
  param_1[0x22c] = 0;
  param_1[0x22b] = 0;
  param_1[0x22a] = 0;
  param_1[0x229] = 0;
  param_1[0x228] = 0;
  FUN_1004e3004(param_1 + 0x22d);
  param_1[0x22e] = 0;
  *(undefined1 *)(param_1 + 0x22f) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xf0,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar2,plVar4,1);
  *(undefined4 *)(param_1 + 0x227) = 1;
  param_1[0x225] = 0x41200000;
  if ((*(float *)(param_1 + 0x114) != 3.0) || (*(float *)((long)param_1 + 0x8a4) != 3.0)) {
    lVar10 = NEON_fmov(0x40400000,4);
    param_1[0x114] = lVar10;
    FUN_1000200a0(plVar1);
  }
  *(uint *)((long)param_1 + 0x8dc) = *(uint *)((long)param_1 + 0x8dc) & 0xfffffffb;
  iVar7 = FUN_100126c88();
  FUN_100651038(puVar8,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  FUN_10065165c(puVar8,1);
  uVar9 = FUN_1004e0150("MENU_MARKET_DAILY_PICK_TITLE",0);
  FUN_1006513c0(puVar8,uVar9);
  FUN_100651700(puVar8,3);
  uVar6 = *(uint *)((long)param_1 + 0x6d4);
  if ((uVar6 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x6d4) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x6600;
    FUN_1000200a0(puVar8);
  }
  ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar7 == 0) {
    ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(plVar3,*ppuVar5);
  uVar6 = *(uint *)((long)param_1 + 0xf1c);
  if ((uVar6 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0xf1c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar3);
  }
  uVar9 = FUN_1004e0150("MENU_MARKET_DAILY_PICK_TIMER_LABEL",0);
  FUN_1006513c0(plVar3,uVar9);
  FUN_100651700(plVar3,3);
  ppuVar5 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  if (iVar7 == 0) {
    ppuVar5 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651038(plVar4,*ppuVar5);
  uVar9 = FUN_1004e0150("MENU_MARKET_DAILY_PICK_TIMER",0);
  FUN_1001cd23c(plVar4,uVar9,1,1);
  FUN_1006515d0(plVar4,1);
  FUN_100651700(plVar4,3);
  FUN_100650140(plVar2,1);
  return param_1;
}



/*
 * FUN_10029b498
 * VA: 0x10029b498 | Source: functions/10029.c:8176
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 1, Vis masks: 2
 * Callees: FUN_10001554c, FUN_1000200a0, FUN_1001a66f4, FUN_10029b654, FUN_1004e0150, FUN_1006421a8, FUN_100644a94, FUN_100652ca4 (+6 more)
 * Callers: FUN_100296204, FUN_10029a420, FUN_1002c76f4, FUN_1002ce17c, thunk_FUN_100296204, thunk_FUN_10029a420, thunk_FUN_1002c76f4, thunk_FUN_1002ce17c
 */
long * FUN_10029b498(long *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *local_70;
  long *plStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar2 = (undefined8 *)FUN_1006421a8();
  *puVar2 = &PTR_thunk_FUN_100296d58_101480c98;
  puVar2 = puVar2 + 0x11;
  thunk_FUN_100652c08(puVar2);
  FUN_1001a66f4(param_1 + 0x2f);
  param_1[0x2f] = (long)&PTR_FUN_101480db8;
  param_1[0x40] = (long)&PTR_FUN_101480ed0;
  thunk_FUN_100652c08(param_1 + 0x4f);
  uVar3 = FUN_1004e0150("NEW_BUBBLE_ALERT",0);
  thunk_FUN_1001c5448(param_1 + 0x6d,uVar3);
  param_1[0xc2] = DAT_101dc1cb8;
  param_1[0xc3] = 0;
  param_1[0xc5] = 0;
  param_1[0xc4] = 0;
  *(undefined8 *)((long)param_1 + 0x63c) = 0;
  *(undefined8 *)((long)param_1 + 0x634) = 0;
  *(undefined1 *)((long)param_1 + 0x644) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2f,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x4f,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x6d,1);
  *(uint *)((long)param_1 + 0x3ec) = *(uint *)((long)param_1 + 0x3ec) & 0xfffffffb;
  FUN_100652ca4(puVar2,PTR_s_build___MenuPartsCommon_tga_101854970);
  FUN_100652cdc(puVar2,"dialog_background");
  uVar1 = *(uint *)((long)param_1 + 0x10c);
  if ((uVar1 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0x10c) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x5280;
    FUN_1000200a0(puVar2);
  }
  *(uint *)((long)param_1 + 0x2fc) = *(uint *)((long)param_1 + 0x2fc) & 0xfffffffb;
  local_48 = FUN_100644a94("UI::EVENT_FEED_IMAGE_LOADED");
  local_70 = FUN_10029b654;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 0x30,&local_70);
  return param_1;
}



/*
 * FUN_1002a2f6c
 * VA: 0x1002a2f6c | Source: functions/1002a.c:2341
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 3, Vis masks: 5
 * Callees: FUN_10001554c, FUN_1000200a0, FUN_1001816d4, FUN_10018187c, FUN_100181c18, FUN_100181c68, FUN_100181c78, FUN_1001829b4 (+28 more)
 * Callers: FUN_1001f2d04
 */
void FUN_1002a2f6c(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  float *pfVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  long lVar16;
  code *local_b8;
  long *plStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  
  pfVar6 = (float *)(param_1 + 0x1d2a);
  param_1[0x3fbd] = param_2;
  plVar1 = param_1 + 0x2d;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 0x3e;
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar2,param_1 + 0x72,1);
  plVar3 = param_1 + 0xae;
  FUN_100642bd8(plVar2,plVar3,1);
  plVar4 = param_1 + 0x90;
  FUN_100642bd8(plVar2,plVar4,1);
  plVar7 = param_1 + 0x10e4;
  FUN_100642bd8(plVar1,plVar7,1);
  plVar5 = param_1 + 0xcc;
  FUN_100642bd8(plVar1,plVar5,1);
  plVar1 = param_1 + 0x10cd;
  FUN_100642bd8(plVar5,plVar1,1);
  plVar8 = param_1 + 0x111b;
  FUN_100642bd8(plVar1,plVar8,1);
  plVar9 = param_1 + 0x1102;
  FUN_100642bd8(plVar1,plVar9,1);
  FUN_100642bd8(plVar9,param_1 + 0x1141,1);
  plVar10 = param_1 + 0x13f8;
  FUN_100642bd8(plVar9,plVar10,1);
  plVar11 = param_1 + 0x1884;
  FUN_100642bd8(plVar9,plVar11,1);
  plVar9 = param_1 + 0x1d10;
  FUN_100642bd8(plVar1,plVar9,1);
  FUN_100642bd8(plVar9,param_1 + 0x1d21,1);
  FUN_100642bd8(plVar9,param_1 + 0x2792,1);
  FUN_100642bd8(plVar9,param_1 + 0x26d4,1);
  plVar9 = param_1 + 0x2850;
  FUN_100642bd8(plVar5,plVar9,1);
  plVar12 = param_1 + 0x2884;
  FUN_100642bd8(plVar9,plVar12,1);
  FUN_1005308f8(plVar12,param_1 + 0x3942,1);
  FUN_1005308f8(plVar12,param_1 + 0x29e9,1);
  FUN_100642bd8(plVar9,param_1 + 0x292b,1);
  plVar1 = param_1 + 0xe3;
  FUN_100642bd8(plVar5,plVar1,1);
  FUN_100642bd8(plVar1,param_1 + 0xf4,1);
  FUN_100642bd8(plVar1,param_1 + 0xe16,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x3fc1],1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x3fc8],1);
  *(uint *)(param_1[0x3fc1] + 0x84) = *(uint *)(param_1[0x3fc1] + 0x84) & 0xfffffffb;
  *(uint *)(param_1[0x3fc8] + 0x84) = *(uint *)(param_1[0x3fc8] + 0x84) & 0xfffffffb;
  FUN_100208cb0(param_1 + 0x3fc0,*(undefined8 *)(param_2 + 0x18),0,0);
  FUN_1002d8748(param_1[0x3fc1]);
  FUN_100217c20(param_1 + 0x3fc7,*(undefined8 *)(param_2 + 0x18));
  FUN_1002e7fac(param_1[0x3fc8]);
  FUN_100654488(plVar2,1);
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  FUN_100652dd4(plVar4,&DAT_10115a164,2);
  uVar13 = *(uint *)((long)param_1 + 0x504);
  if ((uVar13 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x504) = uVar13 & 0xffff8000 | uVar13 & 0x7f | 0x6c00;
    FUN_1000200a0(plVar4);
  }
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"corner_vignette");
  FUN_100652dd4(plVar3,&DAT_10115a164,2);
  *(byte *)(param_1 + 0xc9) = *(byte *)(param_1 + 0xc9) | 1;
  FUN_100652cac(plVar7,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  *(byte *)(param_1 + 0x10ff) = *(byte *)(param_1 + 0x10ff) | 2;
  FUN_100652dd4(plVar7,&DAT_10115a164,2);
  uVar13 = *(uint *)((long)param_1 + 0x87a4);
  if ((uVar13 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x87a4) = uVar13 & 0xffff8000 | uVar13 & 0x7f | 0x6600;
    FUN_1000200a0(plVar7);
  }
  FUN_100651594(plVar8,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_10115a168);
  uVar15 = FUN_1004e0150("MENU_MARKET_FEATURED_GET_HERO",0);
  FUN_1006513c0(plVar8,uVar15);
  FUN_100181c18(0x42700000,0x41200000,0x447a0000,plVar10);
  FUN_100181c68(0x42f00000,plVar10);
  uVar14 = DAT_101d91884;
  local_90 = DAT_101d91884;
  local_b8 = thunk_FUN_1002a56cc;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x13f9,&local_b8);
  FUN_1001b495c(0xbf800000,plVar10);
  FUN_1001829b4(0,plVar10);
  FUN_100183500(plVar10,"glory_icon_small");
  FUN_100651038(param_1 + 0x14db,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248);
  FUN_10065165c(param_1 + 0x14db,1);
  FUN_100181c78(0x40200000,plVar10);
  FUN_10018187c(plVar10,1);
  FUN_100181c18(0x42700000,0x41200000,0x447a0000,plVar11);
  FUN_100181c68(0x42f00000,plVar11);
  local_90 = DAT_101d918e8;
  local_b8 = thunk_FUN_1002a5ad0;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x1885,&local_b8);
  FUN_1001b495c(0xbf800000,plVar11);
  FUN_100183500(plVar11,"ice_icon_small");
  FUN_100651038(param_1 + 0x1967,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248);
  FUN_10065165c(param_1 + 0x1967,1);
  FUN_100181c78(0x4019999a,plVar11);
  FUN_10018187c(plVar11,1);
  uVar15 = FUN_1004e0150("MARKET_GOLD_BUNDLE_BUY_UNAVAILABLE",0);
  FUN_1001816d4(0x42700000,0x42c80000,0x447a0000,param_1 + 0x1141,0,uVar15,&DAT_10115a168,
                &DAT_101dc1cb8,0);
  local_90 = uVar14;
  local_b8 = thunk_FUN_1002a5cac;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x1142,&local_b8);
  if ((*pfVar6 != 1.33) || (*(float *)((long)param_1 + 0xe954) != 1.33)) {
    pfVar6[0] = 1.33;
    pfVar6[1] = 1.33;
    FUN_1000200a0(param_1 + 0x1d21);
  }
  local_90 = FUN_100644a94("UI::EVENT_HERO_ABILITY_SELECT");
  local_b8 = FUN_1002a38dc;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x1d22,&local_b8);
  FUN_100652cdc(param_1 + 0x282c,"circle_button_lore");
  if ((*(float *)(param_1 + 0x2835) != 1.3) || (*(float *)((long)param_1 + 0x141ac) != 1.3)) {
    param_1[0x2835] = 0x3fa666663fa66666;
    FUN_1000200a0(param_1 + 0x282c);
  }
  local_90 = uVar14;
  local_b8 = thunk_FUN_1002a5d64;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x2793,&local_b8);
  lVar16 = NEON_fmov(0x3f800000,4);
  if ((*(float *)(param_1 + 0x279b) != 1.0) || (*(float *)((long)param_1 + 0x13cdc) != 1.0)) {
    param_1[0x279b] = lVar16;
    FUN_1000200a0(param_1 + 0x2792);
  }
  param_1[0x279d] = -0x3effffff3f000000;
  FUN_100652cdc(param_1 + 0x276e,"circle_button_vgf");
  local_90 = uVar14;
  local_b8 = thunk_FUN_1002a5de0;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x26d5,&local_b8);
  if ((*(float *)(param_1 + 0x26dd) != 1.0) || (*(float *)((long)param_1 + 0x136ec) != 1.0)) {
    param_1[0x26dd] = lVar16;
    FUN_1000200a0(param_1 + 0x26d4);
  }
  param_1[0x26df] = -0x3effffff3f000000;
  *(uint *)((long)param_1 + 0x14fcc) = *(uint *)((long)param_1 + 0x14fcc) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x1ca94) = *(uint *)((long)param_1 + 0x1ca94) & 0xfffffffb;
  FUN_100654488(plVar9,1);
  FUN_100530be0(plVar12,PTR_s_build___MenuPartsCommon_tga_101854970,
                PTR_s_scrollbar_button_fill_top_101854958,
                PTR_s_scrollbar_button_fill_middle_101854960,
                PTR_s_scrollbar_button_fill_bottom_101854968);
  FUN_100530adc(plVar12,0,1);
  FUN_100652cdc(param_1 + 0x29c5,"circle_button_x");
  *(uint *)((long)param_1 + 0x149dc) = *(uint *)((long)param_1 + 0x149dc) & 0xfffffffb;
  local_90 = uVar14;
  local_b8 = FUN_1002a38ec;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x292c,&local_b8);
  uVar15 = FUN_1004e0150("BUTTON_WATCH_SPOTLIGHT",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x447a0000,param_1 + 0xe16,0,uVar15,&DAT_10115a168,
                &DAT_101dc1cb8,0);
  local_90 = uVar14;
  local_b8 = thunk_FUN_1002a5e5c;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0xe17,&local_b8);
  return;
}



/*
 * FUN_1002a7f60
 * VA: 0x1002a7f60 | Source: functions/1002a.c:5919
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 3, Vis masks: 1
 * Callees: FUN_100015208, FUN_10001554c, FUN_1000200a0, FUN_1001cd23c, FUN_1002a81c4, FUN_1004d2524, FUN_1004e0150, FUN_10052fa40 (+10 more)
 */
long * FUN_1002a7f60(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  code *local_70;
  long *plStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar6 = (undefined8 *)FUN_10052fa40();
  puVar6[0x48] = 0;
  *puVar6 = &PTR_thunk_FUN_1002a81d8_1014826a8;
  puVar6 = puVar6 + 0x49;
  thunk_FUN_100652c08(puVar6);
  plVar1 = param_1 + 0x67;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x8d;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0xb3;
  thunk_FUN_1001cd1dc(plVar3);
  uVar4 = FUN_1004d2524("homepanel_cornerwidget_events_tile");
  uVar5 = FUN_100015208("homepanel_cornerwidget_events_tile",uVar4,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0x80000000 |
       *(uint *)((long)param_1 + 0x84) & 0x7fff | (uVar5 & 0xffff) << 0xf;
  (**(code **)(*param_1 + 0x78))(param_1,puVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100652cac(puVar6,PTR_s_build___VGX_common_atlas_101854980,"corner_widget_linktile_bg");
  uVar5 = *(uint *)((long)param_1 + 0x2cc);
  if ((uVar5 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x2cc) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x6c00;
    FUN_1000200a0(puVar6);
  }
  local_70 = (code *)CONCAT44(local_70._4_4_,0xffe0e0e0);
  FUN_100652dd4(puVar6,&local_70,2);
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_100651460(plVar1,&DAT_10115a168);
  uVar7 = FUN_1004e0150("MENU_EVENTS_POPUP_TITLE",0);
  FUN_1006513c0(plVar1,uVar7);
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  uVar7 = FUN_1004e0150("MENU_MARKET_FEATURED_TIME_LEFT",0);
  FUN_1001cd23c(plVar3,uVar7,0,0);
  FUN_100651460(plVar3,&DAT_1011588a4);
  *(uint *)((long)param_1 + 0x61c) = *(uint *)((long)param_1 + 0x61c) & 0xfffffffb;
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  FUN_100651460(plVar2,&DAT_1011588a4);
  FUN_1006515e0(plVar2,1);
  local_48 = DAT_101d91884;
  local_70 = FUN_1002a81c4;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 1,&local_70);
  (**(code **)(*param_1 + 0x90))(param_1);
  return param_1;
}



/*
 * thunk_FUN_1002a7f60
 * VA: 0xthunk_1002a7f60 | Source: functions/1002a.c:6002
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 3, Vis masks: 1
 * Callees: FUN_100015208, FUN_10001554c, FUN_1000200a0, FUN_1001cd23c, FUN_1002a81c4, FUN_1004d2524, FUN_1004e0150, FUN_10052fa40 (+10 more)
 * Callers: FUN_1001f4160, thunk_FUN_1001f4160
 */
long * thunk_FUN_1002a7f60(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  code *pcStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  puVar6 = (undefined8 *)FUN_10052fa40();
  puVar6[0x48] = 0;
  *puVar6 = &PTR_thunk_FUN_1002a81d8_1014826a8;
  puVar6 = puVar6 + 0x49;
  thunk_FUN_100652c08(puVar6);
  plVar1 = param_1 + 0x67;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x8d;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0xb3;
  thunk_FUN_1001cd1dc(plVar3);
  uVar4 = FUN_1004d2524("homepanel_cornerwidget_events_tile");
  uVar5 = FUN_100015208("homepanel_cornerwidget_events_tile",uVar4,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0x80000000 |
       *(uint *)((long)param_1 + 0x84) & 0x7fff | (uVar5 & 0xffff) << 0xf;
  (**(code **)(*param_1 + 0x78))(param_1,puVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100652cac(puVar6,PTR_s_build___VGX_common_atlas_101854980,"corner_widget_linktile_bg");
  uVar5 = *(uint *)((long)param_1 + 0x2cc);
  if ((uVar5 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x2cc) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x6c00;
    FUN_1000200a0(puVar6);
  }
  pcStack_70 = (code *)CONCAT44(pcStack_70._4_4_,0xffe0e0e0);
  FUN_100652dd4(puVar6,&pcStack_70,2);
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_100651460(plVar1,&DAT_10115a168);
  uVar7 = FUN_1004e0150("MENU_EVENTS_POPUP_TITLE",0);
  FUN_1006513c0(plVar1,uVar7);
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  uVar7 = FUN_1004e0150("MENU_MARKET_FEATURED_TIME_LEFT",0);
  FUN_1001cd23c(plVar3,uVar7,0,0);
  FUN_100651460(plVar3,&DAT_1011588a4);
  *(uint *)((long)param_1 + 0x61c) = *(uint *)((long)param_1 + 0x61c) & 0xfffffffb;
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  FUN_100651460(plVar2,&DAT_1011588a4);
  FUN_1006515e0(plVar2,1);
  uStack_48 = DAT_101d91884;
  pcStack_70 = FUN_1002a81c4;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_70);
  (**(code **)(*param_1 + 0x90))(param_1);
  return param_1;
}



/*
 * FUN_1002d8cac
 * VA: 0x1002d8cac | Source: functions/1002d.c:5995
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 2, Vis masks: 8
 * Callees: FUN_10001549c, FUN_1000200a0, FUN_100046198, FUN_1002d90c8, FUN_10032c3d4, FUN_10032c624, FUN_10032c944, FUN_1004e0150 (+6 more)
 * Callers: FUN_1002d8c38, FUN_1002d92e8
 */
void FUN_1002d8cac(long param_1)

{
  size_t sVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  uint *puVar9;
  ulong uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  char *pcVar15;
  uint local_88;
  undefined4 uStack_84;
  size_t local_80;
  byte local_71;
  int local_70;
  int local_68;
  
  *(uint *)(param_1 + 0x954) =
       *(uint *)(param_1 + 0x954) & 0xfffffffb | (uint)*(byte *)(param_1 + 0xe08) << 2;
  bVar5 = *(char *)(param_1 + 0xe09) == '\0';
  bVar4 = !bVar5;
  if (*(byte *)(param_1 + 0xe08) != 0) {
    bVar4 = bVar5;
  }
  uVar2 = *(uint *)(param_1 + 0x684);
  uVar11 = 0xff;
  uVar14 = uVar11;
  if (!bVar4) {
    uVar14 = 0xb2;
  }
  if (uVar14 != (uVar2 >> 7 & 0xff)) {
    *(uint *)(param_1 + 0x684) = uVar2 & 0xffff8000 | uVar2 & 0x7f | uVar14 << 7;
    FUN_1000200a0(param_1 + 0x600);
  }
  FUN_100652e14(0x3f800000,param_1 + 0x600);
  uVar14 = *(uint *)(param_1 + 0x594);
  if (!bVar4) {
    uVar11 = 0x4c;
  }
  if (uVar11 != (uVar14 >> 7 & 0xff)) {
    *(uint *)(param_1 + 0x594) = uVar14 & 0xffff8000 | uVar14 & 0x7f | uVar11 << 7;
    FUN_1000200a0(param_1 + 0x510);
  }
  uVar14 = 0;
  if (!bVar4) {
    uVar14 = 4;
  }
  *(uint *)(param_1 + 0x774) = *(uint *)(param_1 + 0x774) & 0xfffffffb | uVar14;
  if ((*(char *)(param_1 + 0xe08) == '\0') ||
     (*(undefined8 **)(param_1 + 0xe00) == (undefined8 *)0x0)) goto LAB_1002d8e5c;
  FUN_10001549c(&local_88,**(undefined8 **)(param_1 + 0xe00));
  lVar7 = FUN_10032c624(&local_88);
  if ((char)local_71 < '\0') {
    operator_delete((void *)CONCAT44(uStack_84,local_88));
  }
  if (lVar7 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0xe09) == '\0') {
    iVar6 = FUN_10032c944(lVar7);
    if (iVar6 == 0) {
      FUN_10032c3d4(&local_88,lVar7);
      uVar10 = (ulong)local_71;
      uVar14 = (uint)(char)local_71;
      if (-1 < (int)uVar14) {
        local_80 = uVar10;
      }
      sVar1 = DAT_101d911a0;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        sVar1 = (ulong)DAT_101d911a8._7_1_;
      }
      if (local_80 == sVar1) {
        puVar9 = (uint *)CONCAT44(uStack_84,local_88);
        if (-1 < (int)uVar14) {
          puVar9 = &local_88;
        }
        pbVar13 = DAT_101d91198;
        if (-1 < (char)DAT_101d911a8._7_1_) {
          pbVar13 = (byte *)&DAT_101d91198;
        }
        if ((int)uVar14 < 0) {
          if ((local_80 != 0) && (iVar6 = _memcmp(puVar9,pbVar13,local_80), iVar6 != 0))
          goto LAB_1002d8f28;
        }
        else if (local_80 != 0) {
          if ((uint)*pbVar13 == (local_88 & 0xff)) {
            pbVar12 = (byte *)((ulong)&local_88 | 1);
            do {
              uVar10 = uVar10 - 1;
              pbVar13 = pbVar13 + 1;
              if (uVar10 == 0) goto LAB_1002d8f64;
              bVar3 = *pbVar12;
              pbVar12 = pbVar12 + 1;
            } while (bVar3 == *pbVar13);
          }
          goto LAB_1002d8f28;
        }
LAB_1002d8f64:
        *(uint *)(param_1 + 0x9dc) = *(uint *)(param_1 + 0x9dc) & 0xfffffffb;
        *(uint *)(param_1 + 0xc64) = *(uint *)(param_1 + 0xc64) & 0xfffffffb;
        *(uint *)(param_1 + 0xd54) = *(uint *)(param_1 + 0xd54) & 0xfffffffb;
      }
      else {
LAB_1002d8f28:
        *(uint *)(param_1 + 0xc64) = *(uint *)(param_1 + 0xc64) | 4;
        *(uint *)(param_1 + 0xd54) = *(uint *)(param_1 + 0xd54) | 4;
        if (((DAT_101e454c8 & 1) == 0) && (iVar6 = ___cxa_guard_acquire(&DAT_101e454c8), iVar6 != 0)
           ) {
          FUN_1004e313c(&DAT_101e454b8);
          ___cxa_atexit(FUN_100046198,&DAT_101e454b8,0x100000000);
          ___cxa_guard_release(&DAT_101e454c8);
        }
        if (local_70 == 0) {
          if (local_68 != 0) {
            pcVar15 = "opal_icon_small";
            goto LAB_1002d8f9c;
          }
        }
        else {
          pcVar15 = "ice_icon_small";
LAB_1002d8f9c:
          FUN_1004e38ac(&DAT_101e454b8,"%d");
          FUN_1006513c0(param_1 + 0xcd0,&DAT_101e454b8);
          FUN_100652cdc(param_1 + 0xbe0,pcVar15);
        }
        *(uint *)(param_1 + 0x9dc) = *(uint *)(param_1 + 0x9dc) & 0xfffffffb;
        uVar14 = (uint)local_71;
      }
      if ((uVar14 >> 7 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_84,local_88));
      }
      goto LAB_1002d8e5c;
    }
    *(uint *)(param_1 + 0x9dc) = *(uint *)(param_1 + 0x9dc) | 4;
    uVar8 = FUN_1004e0150("MENU_SKINS_HUB_COMING_SOON_LABEL",0);
    FUN_1006513c0(param_1 + 0x958,uVar8);
    puVar9 = (uint *)(param_1 + 0xe1c);
  }
  else {
    *(uint *)(param_1 + 0x9dc) = *(uint *)(param_1 + 0x9dc) | 4;
    uVar8 = FUN_1004e0150("MENU_MARKET_CTA_OWNED",0);
    FUN_1006513c0(param_1 + 0x958,uVar8);
    local_88 = 0xffa0a0a0;
    puVar9 = &local_88;
  }
  FUN_100651460(param_1 + 0x958,puVar9);
  *(uint *)(param_1 + 0xc64) = *(uint *)(param_1 + 0xc64) & 0xfffffffb;
  *(uint *)(param_1 + 0xd54) = *(uint *)(param_1 + 0xd54) & 0xfffffffb;
LAB_1002d8e5c:
  FUN_1002d90c8(param_1);
  return;
}



/*
 * FUN_1002f4548
 * VA: 0x1002f4548 | Source: functions/1002f.c:2859
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 4, Vis masks: 6
 * Callees: FUN_10001549c, FUN_10001554c, FUN_1000200a0, FUN_1001816d4, FUN_100181b5c, FUN_100181bd0, FUN_100181c68, FUN_1001829b4 (+32 more)
 * Callers: FUN_1002f4164, thunk_FUN_1002f4164
 */
void FUN_1002f4548(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *****pppppuVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  bool bVar12;
  ulong uVar13;
  char *pcVar14;
  undefined8 uVar15;
  long lVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_10c;
  undefined8 ****local_100;
  ulong local_f8;
  byte local_e9;
  undefined4 local_e4;
  float local_e0;
  undefined4 uStack_dc;
  code *local_d8;
  long *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  
  FUN_100641464(&uStack_dc,&local_e0);
  fVar11 = local_e0;
  plVar1 = param_1 + 0xcc6;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 0x8a1;
  uVar13 = FUN_100642d08(plVar2);
  if ((uVar13 & 1) == 0) {
    (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
    FUN_100642bd8(plVar2,param_1 + 0x9de,1);
    FUN_100642bd8(plVar2,param_1 + 0x9fc,1);
    FUN_100642bd8(plVar2,param_1 + 0x8d8,1);
    FUN_100642bd8(plVar2,param_1 + 0x8b2,1);
    FUN_100642bd8(plVar2,param_1 + 0x8fe,1);
  }
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xad4,1);
  plVar3 = param_1 + 0xa56;
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  if (*(char *)((long)param_1 + 0x6746) != '\0') {
    plVar4 = param_1 + 0x924;
    (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
    plVar5 = param_1 + 0x935;
    FUN_100642bd8(plVar4,plVar5,1);
    FUN_100642bd8(plVar5,param_1 + 0x76,1);
    FUN_100642bd8(plVar5,param_1 + 0x96c,1);
    FUN_100642bd8(plVar4,param_1 + 0x946,1);
    (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xca8,1);
    plVar4 = param_1 + 0xb2;
    (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
    FUN_100642bd8(plVar4,param_1 + 0xa1a,1);
    FUN_100642bd8(plVar4,param_1 + 0x992,1);
    (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xa74,1);
    plVar4 = param_1 + 0x86a;
    (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
    FUN_100642bd8(plVar4,param_1 + 0x87b,1);
    plVar5 = param_1 + 0x48e;
    FUN_100642bd8(plVar4,plVar5,1);
    FUN_100642bd8(plVar5,param_1 + 0xa38,1);
    FUN_100642bd8(plVar5,param_1 + 0x9b8,1);
    FUN_100642bd8(plVar4,param_1 + 0xa92,1);
  }
  fVar22 = fVar11 * 0.182763 + 274.0;
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_fuzzy_dot");
  FUN_10064e47c(0x44160000,0x442f0000,plVar1);
  fVar18 = fVar11 * -0.012087501;
  bVar12 = false;
  if ((*(float *)(param_1 + 0xcce) == fVar22) &&
     (bVar12 = false, !NAN(*(float *)((long)param_1 + 0x6674)) && !NAN(fVar18))) {
    bVar12 = *(float *)((long)param_1 + 0x6674) == fVar18;
  }
  if (!bVar12) {
    *(float *)(param_1 + 0xcce) = fVar22;
    *(float *)((long)param_1 + 0x6674) = fVar18;
    FUN_1000200a0(plVar1);
  }
  local_d8 = (code *)&DAT_3f0000003f000000;
  (**(code **)(param_1[0xcc6] + 0x28))(plVar1,&local_d8);
  *(uint *)((long)param_1 + 0x66b4) = *(uint *)((long)param_1 + 0x66b4) & 0xfffffffb;
  plVar1 = param_1 + 0x9de;
  *(uint *)((long)param_1 + 0x4f74) = *(uint *)((long)param_1 + 0x4f74) | 4;
  *(uint *)((long)param_1 + 0x5064) = *(uint *)((long)param_1 + 0x5064) | 4;
  local_e4 = 0xffffffff;
  fVar18 = 0.0;
  fVar23 = -0.355;
  switch((int)param_1[0xce8]) {
  case 0:
    fVar20 = 280.0;
    fVar18 = 0.0;
    break;
  case 1:
    local_e4 = DAT_101e45a14;
    fVar20 = 280.0;
    goto LAB_1002f4988;
  case 2:
    local_e4 = DAT_101e45a1c;
    fVar20 = 260.0;
LAB_1002f4988:
    uVar17 = 0xb2;
    fVar18 = 0.0;
LAB_1002f49d0:
    local_10c = 0.385;
    fVar19 = 0.26;
    goto LAB_1002f4a20;
  case 3:
    local_e4 = DAT_101e45a24;
    uVar17 = 0xff;
    fVar20 = 255.0;
    fVar23 = -0.33;
    fVar18 = 0.02;
    goto LAB_1002f49d0;
  case 4:
    fVar20 = 260.0;
    fVar18 = 0.03;
    break;
  case 5:
    fVar20 = 280.0;
    fVar23 = -0.348;
    break;
  default:
    local_10c = 0.4375;
    uVar17 = 0xb2;
    fVar20 = 280.0;
    fVar19 = 0.35;
    goto LAB_1002f4a20;
  }
  local_10c = 0.4375;
  uVar17 = 0xb2;
  fVar19 = 0.275;
LAB_1002f4a20:
  plVar4 = param_1 + 0x9fc;
  fVar24 = fVar11 * 0.4835;
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_fuzzy_dot");
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  uVar7 = *(uint *)((long)param_1 + 0x4f74);
  if (uVar17 != (uVar7 >> 7 & 0xff)) {
    *(uint *)((long)param_1 + 0x4f74) = uVar7 & 0xffff8000 | uVar7 & 0x7f | uVar17 << 7;
    FUN_1000200a0(plVar1);
  }
  FUN_10064e47c(0x4450c000,0x43140000,plVar1);
  fVar18 = fVar11 * 0.365526 * fVar18;
  fVar23 = fVar23 * fVar24;
  if ((*(float *)(param_1 + 0x9e6) != fVar18) || (*(float *)((long)param_1 + 0x4f34) != fVar23)) {
    *(float *)(param_1 + 0x9e6) = fVar18;
    *(float *)((long)param_1 + 0x4f34) = fVar23;
    FUN_1000200a0(plVar1);
  }
  local_d8 = (code *)&DAT_3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_d8);
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_fuzzy_dot");
  FUN_100652dd4(plVar4,&DAT_10115a164,2);
  if ((*(uint *)((long)param_1 + 0x5064) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x5064) = *(uint *)((long)param_1 + 0x5064) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar4);
  }
  FUN_10064e47c(0x44aa0000,0x440c8000,plVar4);
  fVar19 = fVar19 * fVar24;
  if ((*(float *)(param_1 + 0xa04) != 0.0) || (*(float *)((long)param_1 + 0x5024) != fVar19)) {
    *(undefined4 *)(param_1 + 0xa04) = 0;
    *(float *)((long)param_1 + 0x5024) = fVar19;
    FUN_1000200a0(plVar4);
  }
  local_d8 = (code *)&DAT_3f0000003f000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_d8);
  if (*(uint *)(param_1 + 0xce8) < 4) {
    plVar1 = param_1 + 0x8fe;
    FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Regular_60_10184e208,&DAT_10115a168);
    if ((*(float *)(param_1 + 0x907) != 0.5) || (*(float *)((long)param_1 + 0x483c) != 0.5)) {
      param_1[0x907] = (long)&DAT_3f0000003f000000;
      FUN_1000200a0(plVar1);
    }
    if (*(char *)((long)param_1 + 0x6746) == '\0') {
      pcVar14 = *(char **)(param_1[0xce4] + 0x30);
    }
    else {
      pcVar14 = "MENU_MARKET_DRAWN_CARD_BLUEPRINT";
    }
    uVar15 = FUN_1004e0150(pcVar14,0);
    FUN_1006513c0(plVar1,uVar15);
    FUN_100651700(plVar1,3);
    if ((*(float *)(param_1 + 0x906) != 0.0) || (*(float *)((long)param_1 + 0x4834) != fVar19)) {
      *(undefined4 *)(param_1 + 0x906) = 0;
      *(float *)((long)param_1 + 0x4834) = fVar19;
      FUN_1000200a0(plVar1);
    }
    if ((*(float *)(param_1 + 0x908) != 0.5) || (*(float *)((long)param_1 + 0x4844) != 0.5)) {
      param_1[0x908] = (long)&DAT_3f0000003f000000;
      FUN_1000200a0(plVar1);
    }
    FUN_100651708(330.0 / *(float *)(param_1 + 0x907),plVar1,1);
    FUN_1006516bc(plVar1,&DAT_10115a164);
    FUN_10065165c(plVar1,1);
    if ((int)param_1[0xce8] < 1) {
      *(uint *)((long)param_1 + 0x4614) = *(uint *)((long)param_1 + 0x4614) & 0xfffffffb;
    }
    else {
      plVar1 = param_1 + 0x8b2;
      *(uint *)((long)param_1 + 0x4614) = *(uint *)((long)param_1 + 0x4614) | 4;
      FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,&DAT_10115a168);
      fVar19 = 0.5;
      if ((*(float *)(param_1 + 0x8bb) != 0.5) || (*(float *)((long)param_1 + 0x45dc) != 0.5)) {
        param_1[0x8bb] = (long)&DAT_3f0000003f000000;
        FUN_1000200a0(plVar1);
        fVar19 = *(float *)(param_1 + 0x8bb);
      }
      FUN_100651708(330.0 / fVar19,plVar1,1);
      uVar17 = *(uint *)((long)param_1 + 0x4614);
      if ((uVar17 & 0x7f80) != 0x6600) {
        *(uint *)((long)param_1 + 0x4614) = uVar17 & 0xffff8000 | uVar17 & 0x7f | 0x6600;
        FUN_1000200a0(plVar1);
      }
      FUN_100651700(plVar1,3);
      if ((*(float *)(param_1 + 0x8ba) != 0.0) ||
         (*(float *)((long)param_1 + 0x45d4) != local_10c * fVar24)) {
        *(undefined4 *)(param_1 + 0x8ba) = 0;
        *(float *)((long)param_1 + 0x45d4) = local_10c * fVar24;
        FUN_1000200a0(plVar1);
      }
      if ((*(float *)(param_1 + 0x8bc) != 0.5) || (*(float *)((long)param_1 + 0x45e4) != 1.0)) {
        param_1[0x8bc] = 0x3f8000003f000000;
        FUN_1000200a0(plVar1);
      }
      FUN_1006516bc(plVar1,&DAT_10115a164);
      FUN_10065165c(plVar1,1);
      FUN_1006513c0(plVar1,&DAT_101d91650);
    }
  }
  else if ((*(uint *)(param_1 + 0xce8) & 0xfffffffe) == 4) {
    *(uint *)((long)param_1 + 0x4614) = *(uint *)((long)param_1 + 0x4614) & 0xfffffffb;
    plVar1 = param_1 + 0xab6;
    FUN_100642bd8(plVar2,plVar1,1);
    if (*(long *)(param_1[0xce4] + 0x38) != 0) {
      FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970);
      if ((*(float *)(param_1 + 0xabf) != 0.75) || (*(float *)((long)param_1 + 0x55fc) != 0.75)) {
        lVar16 = NEON_fmov(0x3f400000,4);
        param_1[0xabf] = lVar16;
        FUN_1000200a0(plVar1);
      }
      if (*(float *)((long)param_1 + 0x55f4) != fVar19 + 6.0) {
        *(float *)((long)param_1 + 0x55f4) = fVar19 + 6.0;
        FUN_1000200a0(plVar1);
      }
      if ((*(float *)(param_1 + 0xac0) != 1.0) || (*(float *)((long)param_1 + 0x5604) != 0.5)) {
        param_1[0xac0] = 0x3f0000003f800000;
        FUN_1000200a0(plVar1);
      }
    }
    *(uint *)((long)param_1 + 0x5634) =
         *(uint *)((long)param_1 + 0x5634) & 0xfffffff8 |
         *(uint *)((long)param_1 + 0x5634) & 3 | (uint)(*(long *)(param_1[0xce4] + 0x38) != 0) << 2;
    plVar1 = param_1 + 0x8fe;
    FUN_100651594(plVar1,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e290,&DAT_10115a168);
    if ((*(float *)(param_1 + 0x907) != 0.5) || (*(float *)((long)param_1 + 0x483c) != 0.5)) {
      param_1[0x907] = (long)&DAT_3f0000003f000000;
      FUN_1000200a0(plVar1);
    }
    FUN_1006516bc(plVar1,&DAT_10115a164);
    FUN_10065165c(plVar1,1);
    if (*(float *)((long)param_1 + 0x4834) != fVar19) {
      *(float *)((long)param_1 + 0x4834) = fVar19;
      FUN_1000200a0(plVar1);
    }
    if ((*(float *)(param_1 + 0x908) != 0.0) || (*(float *)((long)param_1 + 0x4844) != 0.5)) {
      param_1[0x908] = 0x3f00000000000000;
      FUN_1000200a0(plVar1);
    }
  }
  plVar1 = param_1 + 0x8d8;
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248,&local_e4);
  if ((*(float *)(param_1 + 0x8e1) != 0.5) || (*(float *)((long)param_1 + 0x470c) != 0.5)) {
    param_1[0x8e1] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar1);
  }
  FUN_100651700(plVar1,3);
  if ((*(float *)(param_1 + 0x8e0) != fVar18) || (*(float *)((long)param_1 + 0x4704) != fVar23)) {
    *(float *)(param_1 + 0x8e0) = fVar18;
    *(float *)((long)param_1 + 0x4704) = fVar23;
    FUN_1000200a0(plVar1);
  }
  if ((*(float *)(param_1 + 0x8e2) != 0.5) || (*(float *)((long)param_1 + 0x4714) != 0.5)) {
    param_1[0x8e2] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar1);
  }
  FUN_100651708(fVar20 / *(float *)(param_1 + 0x8e1),plVar1,1);
  FUN_10065165c(plVar1,1);
  FUN_1006516bc(plVar1,&DAT_10115a164);
  FUN_10065165c(plVar1,1);
  FUN_10001549c(&local_100,*(undefined8 *)(param_1[0xce4] + 0x28));
  if (-1 < (char)local_e9) {
    local_f8 = (ulong)local_e9;
  }
  if (local_f8 == 0) {
    lVar16 = FUN_10032bbf4(*(undefined8 *)(param_1[0xce4] + 0x18));
    FUN_10001549c(&local_d8,*(undefined8 *)(lVar16 + 0x18));
    std::string::operator=((string *)&local_100,(string *)&local_d8);
    if (local_c8._7_1_ < '\0') {
      operator_delete(local_d8);
    }
  }
  pppppuVar6 = (undefined8 *****)local_100;
  if (-1 < (char)local_e9) {
    pppppuVar6 = &local_100;
  }
  uVar15 = FUN_1004e0150(pppppuVar6,0);
  FUN_1006513c0(plVar1,uVar15);
  *(uint *)((long)param_1 + 0x5724) = *(uint *)((long)param_1 + 0x5724) & 0xfffffffb;
  bVar12 = false;
  if ((*(float *)((long)param_1 + 0x56e4) == 0.0) &&
     (bVar12 = false, !NAN(*(float *)(param_1 + 0xadc)))) {
    bVar12 = *(float *)(param_1 + 0xadc) == 0.0;
  }
  if (!bVar12) {
    param_1[0xadc] = 0;
    FUN_1000200a0(param_1 + 0xad4);
  }
  FUN_100652e40(plVar3,0);
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  if ((*(uint *)((long)param_1 + 0x5334) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x5334) = *(uint *)((long)param_1 + 0x5334) & 0xffff807f;
    FUN_1000200a0(plVar3);
  }
  FUN_100652dd4(plVar3,&DAT_10115a170,2);
  *(uint *)((long)param_1 + 0x5334) = *(uint *)((long)param_1 + 0x5334) | 0x10;
  FUN_10064e47c(0x43fa0000,0x44200000,plVar3);
  if ((*(float *)(param_1 + 0xa60) != 0.5) || (*(float *)((long)param_1 + 0x5304) != 0.5)) {
    param_1[0xa60] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar3);
  }
  plVar1 = param_1 + 0x946;
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228,&DAT_10115a168);
  uVar15 = FUN_1004e0150("MENU_3DCARD_PLAYER_ESSENCE_LABEL",0);
  FUN_1006513c0(plVar1,uVar15);
  if ((*(float *)(param_1 + 0x950) != 0.5) || (*(float *)((long)param_1 + 0x4a84) != 0.5)) {
    param_1[0x950] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar1);
  }
  uVar15 = FUN_100345b94();
  uVar15 = FUN_10034c450(uVar15,"*PlayerEssenceEffects*");
  plVar2 = param_1 + 0x76;
  FUN_1001aa350(plVar2,uVar15);
  FUN_10064e47c(0x43c80000,0x43c80000,plVar2);
  bVar12 = false;
  if ((*(float *)((long)param_1 + 0x3f4) == 0.0) &&
     (bVar12 = false, !NAN(*(float *)(param_1 + 0x7e)))) {
    bVar12 = *(float *)(param_1 + 0x7e) == 0.0;
  }
  if (!bVar12) {
    param_1[0x7e] = 0;
    FUN_1000200a0(plVar2);
  }
  local_d8 = (code *)&DAT_3f0000003f000000;
  (**(code **)(param_1[0x76] + 0x28))(plVar2,&local_d8);
  if ((*(float *)(param_1 + 0x7f) != 1.5) || (*(float *)((long)param_1 + 0x3fc) != 1.5)) {
    lVar16 = NEON_fmov(0x3fc00000,4);
    param_1[0x7f] = lVar16;
    FUN_1000200a0(plVar2);
  }
  FUN_1001aaebc(plVar2);
  FUN_1001aae30(plVar2,"ESSENCE_ICON");
  plVar2 = param_1 + 0x96c;
  FUN_100651594(plVar2,PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0,&DAT_10115a168);
  if ((*(uint *)((long)param_1 + 0x4be4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x4be4) = *(uint *)((long)param_1 + 0x4be4) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar2);
  }
  FUN_1004e3120(&local_d8,"0");
  FUN_1006513c0(plVar2,&local_d8);
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
  }
  if ((*(float *)(param_1 + 0x974) != 70.0) || (*(float *)((long)param_1 + 0x4ba4) != 0.0)) {
    param_1[0x974] = 0x428c0000;
    FUN_1000200a0(plVar2);
  }
  local_d8 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0x96c] + 0x28))(plVar2,&local_d8);
  fVar18 = (float)FUN_100651184(plVar1);
  fVar23 = 30.0;
  fVar20 = 30.0 - fVar18 * 0.5;
  fVar18 = *(float *)((long)param_1 + 0x4a74);
  FUN_100651184(plVar2);
  fVar18 = (fVar23 + fVar18) * 0.5 + 20.0;
  if ((*(float *)(param_1 + 0x93d) != fVar20) || (*(float *)((long)param_1 + 0x49ec) != fVar18)) {
    *(float *)(param_1 + 0x93d) = fVar20;
    *(float *)((long)param_1 + 0x49ec) = fVar18;
    FUN_1000200a0(param_1 + 0x935);
  }
  local_d8 = (code *)&DAT_3f0000003f000000;
  (**(code **)(param_1[0x935] + 0x28))(param_1 + 0x935,&local_d8);
  plVar1 = param_1 + 0x924;
  if ((*(float *)(param_1 + 0x92d) != 0.5) || (*(float *)((long)param_1 + 0x496c) != 0.5)) {
    param_1[0x92d] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar1);
  }
  if ((*(float *)(param_1 + 0x92c) != fVar22) ||
     (*(float *)((long)param_1 + 0x4964) != fVar11 * -0.16922499)) {
    *(float *)(param_1 + 0x92c) = fVar22;
    *(float *)((long)param_1 + 0x4964) = fVar11 * -0.16922499;
    FUN_1000200a0(plVar1);
  }
  local_d8 = (code *)&DAT_3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_d8);
  uVar21 = 0;
  if (*(uint *)(param_1 + 0xce8) < 4) {
    uVar21 = *(undefined4 *)(&DAT_101158c50 + (long)(int)*(uint *)(param_1 + 0xce8) * 4);
  }
  plVar1 = param_1 + 0xca8;
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_10064e47c(uStack_dc,local_e0,plVar1);
  if ((*(float *)(param_1 + 0xcb2) != 0.5) || (*(float *)((long)param_1 + 0x6594) != 0.5)) {
    param_1[0xcb2] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar1);
  }
  uVar17 = *(uint *)((long)param_1 + 0x65c4);
  if ((uVar17 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x65c4) = uVar17 & 0xffff807f;
    FUN_1000200a0(plVar1);
    uVar17 = *(uint *)((long)param_1 + 0x65c4);
  }
  *(uint *)((long)param_1 + 0x65c4) = uVar17 | 0x10;
  uVar9 = DAT_101dbd460;
  local_b0 = DAT_101dbd460;
  local_d8 = FUN_1002f5edc;
  local_c0 = 0;
  uStack_b8 = 0;
  local_c8 = 0;
  local_d0 = param_1;
  FUN_10001554c(param_1 + 0xca9,&local_d8);
  uVar10 = DAT_101dbd48c;
  local_b0 = DAT_101dbd48c;
  local_d8 = FUN_1002f5edc;
  local_c0 = 0;
  uStack_b8 = 0;
  local_c8 = 0;
  local_d0 = param_1;
  FUN_10001554c(param_1 + 0xca9,&local_d8);
  *(uint *)((long)param_1 + 0x65c4) = *(uint *)((long)param_1 + 0x65c4) & 0xfffffffb;
  plVar1 = param_1 + 0xb2;
  uVar15 = FUN_1004e0150("MENU_3DCARD_DESTROY_BUTTON",0);
  FUN_1001816d4(0x42200000,0x43d70000,0x43d70000,plVar1,0,uVar15,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_b0 = DAT_101d918e0;
  local_d8 = thunk_FUN_1002f7408;
  plVar2 = param_1 + 0xb3;
  local_c0 = 0;
  uStack_b8 = 0;
  local_c8 = 0;
  local_d0 = param_1;
  FUN_10001554c(plVar2,&local_d8);
  local_b0 = DAT_101d918e4;
  local_d8 = thunk_FUN_1002f7700;
  local_c0 = 0;
  uStack_b8 = 0;
  local_c8 = 0;
  local_d0 = param_1;
  FUN_10001554c(plVar2,&local_d8);
  uVar8 = DAT_101d918e8;
  local_b0 = DAT_101d918e8;
  local_d8 = thunk_FUN_1002f7624;
  local_c0 = 0;
  uStack_b8 = 0;
  local_c8 = 0;
  local_d0 = param_1;
  FUN_10001554c(plVar2,&local_d8);
  FUN_100651038(param_1 + 0x195,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_1001b495c(0,plVar1);
  if ((*(float *)(param_1 + 0xbc) != 0.5) || (*(float *)((long)param_1 + 0x5e4) != 0.5)) {
    param_1[0xbc] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar1);
  }
  if ((*(float *)(param_1 + 0xbb) != 0.5) || (*(float *)((long)param_1 + 0x5dc) != 0.5)) {
    param_1[0xbb] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar1);
  }
  FUN_100181c68(0x430a0000,plVar1);
  FUN_100181b5c(0,0x41f00000,plVar1);
  FUN_100181bd0(0x3f800000,plVar1,&DAT_10115a164);
  FUN_1001829b4(uVar21,plVar1);
  if ((*(float *)(param_1 + 0xba) != fVar22) ||
     (*(float *)((long)param_1 + 0x5d4) != fVar11 * -0.072525)) {
    *(float *)(param_1 + 0xba) = fVar22;
    *(float *)((long)param_1 + 0x5d4) = fVar11 * -0.072525;
    FUN_1000200a0(plVar1);
  }
  local_d8 = (code *)&DAT_3f0000003f000000;
  (**(code **)(param_1[0xb2] + 0x28))(plVar1,&local_d8);
  plVar1 = param_1 + 0xa74;
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_10064259c(param_1 + 0xff);
  FUN_10064e47c(0x43e1bfff,plVar1);
  if ((*(float *)(param_1 + 0xa7c) != *(float *)(param_1 + 0xba)) ||
     (*(float *)((long)param_1 + 0x53e4) != *(float *)((long)param_1 + 0x5d4))) {
    *(float *)(param_1 + 0xa7c) = *(float *)(param_1 + 0xba);
    *(float *)((long)param_1 + 0x53e4) = *(float *)((long)param_1 + 0x5d4);
    FUN_1000200a0(plVar1);
  }
  if ((*(float *)(param_1 + 0xa7e) != 0.5) || (*(float *)((long)param_1 + 0x53f4) != 0.5)) {
    param_1[0xa7e] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar1);
  }
  if ((*(uint *)((long)param_1 + 0x5424) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x5424) = *(uint *)((long)param_1 + 0x5424) & 0xffff807f;
    FUN_1000200a0(plVar1);
  }
  if ((*(float *)(param_1 + 0xa7d) != *(float *)(param_1 + 0xbb)) ||
     (*(float *)((long)param_1 + 0x53ec) != *(float *)((long)param_1 + 0x5dc))) {
    *(float *)(param_1 + 0xa7d) = *(float *)(param_1 + 0xbb);
    *(float *)((long)param_1 + 0x53ec) = *(float *)((long)param_1 + 0x5dc);
    FUN_1000200a0(plVar1);
  }
  local_b0 = uVar9;
  local_d8 = FUN_1002f5efc;
  local_c0 = 0;
  uStack_b8 = 0;
  local_c8 = 0;
  local_d0 = param_1;
  FUN_10001554c(param_1 + 0xa75,&local_d8);
  local_b0 = uVar10;
  local_d8 = FUN_1002f5efc;
  local_c0 = 0;
  uStack_b8 = 0;
  local_c8 = 0;
  local_d0 = param_1;
  FUN_10001554c(param_1 + 0xa75,&local_d8);
  plVar1 = param_1 + 0xa1a;
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"essence_icon_small");
  if ((*(float *)(param_1 + 0xa22) != -6.0) || (*(float *)((long)param_1 + 0x5114) != 10.0)) {
    param_1[0xa22] = 0x41200000c0c00000;
    FUN_1000200a0(plVar1);
  }
  lVar16 = NEON_fmov(0x3f800000,4);
  if ((*(float *)(param_1 + 0xa24) != 1.0) || (*(float *)((long)param_1 + 0x5124) != 1.0)) {
    param_1[0xa24] = lVar16;
    FUN_1000200a0(plVar1);
  }
  plVar1 = param_1 + 0x992;
  local_d8 = (code *)CONCAT44(local_d8._4_4_,0xff9bdb2d);
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,&local_d8);
  FUN_1004e3120(&local_d8,"+0");
  FUN_1006513c0(plVar1,&local_d8);
  if (local_d0 != (long *)0x0) {
    operator_delete__(local_d0);
  }
  if ((*(float *)(param_1 + 0x99a) != 6.0) || (*(float *)((long)param_1 + 0x4cd4) != 8.0)) {
    param_1[0x99a] = 0x4100000040c00000;
    FUN_1000200a0(plVar1);
  }
  if ((*(float *)(param_1 + 0x99c) != 0.0) || (*(float *)((long)param_1 + 0x4ce4) != 1.0)) {
    param_1[0x99c] = 0x3f80000000000000;
    FUN_1000200a0(plVar1);
  }
  *(uint *)((long)param_1 + 0x43d4) = *(uint *)((long)param_1 + 0x43d4) & 0xfffffffb;
  plVar1 = param_1 + 0x87b;
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
  FUN_100651700(plVar1,0);
  fVar18 = fVar11 * 0.182763 + 137.0;
  if ((*(float *)(param_1 + 0x883) != fVar18) || (*(float *)((long)param_1 + 0x441c) != 0.0)) {
    *(float *)(param_1 + 0x883) = fVar18;
    *(undefined4 *)((long)param_1 + 0x441c) = 0;
    FUN_1000200a0(plVar1);
  }
  FUN_100651708(0x43d70000,plVar1,1);
  plVar1 = param_1 + 0x48e;
  uVar15 = FUN_1004e0150("MENU_SKINS_HUB_CRAFT_SKIN_BUTTON",0);
  FUN_1001816d4(0x42200000,0x43d70000,0x43d70000,plVar1,0,uVar15,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_b0 = uVar8;
  local_d8 = FUN_1002f5f10;
  local_c0 = 0;
  uStack_b8 = 0;
  local_c8 = 0;
  local_d0 = param_1;
  FUN_10001554c(param_1 + 0x48f,&local_d8);
  FUN_100651038(param_1 + 0x571,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_1001b495c(0,plVar1);
  if ((*(float *)(param_1 + 0x498) != 0.5) || (*(float *)((long)param_1 + 0x24c4) != 0.5)) {
    param_1[0x498] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar1);
  }
  if ((*(float *)(param_1 + 0x497) != 0.5) || (*(float *)((long)param_1 + 0x24bc) != 0.5)) {
    param_1[0x497] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar1);
  }
  FUN_100181c68(0x430a0000,plVar1);
  FUN_100181b5c(0,0x41f00000,plVar1);
  FUN_100181bd0(0x3f800000,plVar1,&DAT_10115a164);
  FUN_1001829b4(uVar21,plVar1);
  FUN_1001b4c0c(plVar1,0);
  if ((*(float *)(param_1 + 0x496) != fVar22) ||
     (*(float *)((long)param_1 + 0x24b4) != fVar11 * 0.16922499)) {
    *(float *)(param_1 + 0x496) = fVar22;
    *(float *)((long)param_1 + 0x24b4) = fVar11 * 0.16922499;
    FUN_1000200a0(plVar1);
  }
  local_d8 = (code *)&DAT_3f0000003f000000;
  (**(code **)(param_1[0x48e] + 0x28))(plVar1,&local_d8);
  plVar1 = param_1 + 0xa92;
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_10064259c(param_1 + 0xff);
  FUN_10064e47c(0x43e1bfff,plVar1);
  if ((*(float *)(param_1 + 0xa9a) != *(float *)(param_1 + 0x496)) ||
     (*(float *)((long)param_1 + 0x54d4) != *(float *)((long)param_1 + 0x24b4))) {
    *(float *)(param_1 + 0xa9a) = *(float *)(param_1 + 0x496);
    *(float *)((long)param_1 + 0x54d4) = *(float *)((long)param_1 + 0x24b4);
    FUN_1000200a0(plVar1);
  }
  if ((*(float *)(param_1 + 0xa9c) != 0.5) || (*(float *)((long)param_1 + 0x54e4) != 0.5)) {
    param_1[0xa9c] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar1);
  }
  if ((*(uint *)((long)param_1 + 0x5514) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x5514) = *(uint *)((long)param_1 + 0x5514) & 0xffff807f;
    FUN_1000200a0(plVar1);
  }
  if ((*(float *)(param_1 + 0xa9b) != *(float *)(param_1 + 0xbb)) ||
     (*(float *)((long)param_1 + 0x54dc) != *(float *)((long)param_1 + 0x5dc))) {
    *(float *)(param_1 + 0xa9b) = *(float *)(param_1 + 0xbb);
    *(float *)((long)param_1 + 0x54dc) = *(float *)((long)param_1 + 0x5dc);
    FUN_1000200a0(plVar1);
  }
  local_b0 = uVar9;
  local_d8 = FUN_1002f5efc;
  local_c0 = 0;
  uStack_b8 = 0;
  local_c8 = 0;
  local_d0 = param_1;
  FUN_10001554c(param_1 + 0xa93,&local_d8);
  local_b0 = uVar10;
  local_d8 = FUN_1002f5efc;
  local_c0 = 0;
  uStack_b8 = 0;
  local_c8 = 0;
  local_d0 = param_1;
  FUN_10001554c(param_1 + 0xa93,&local_d8);
  plVar1 = param_1 + 0xa38;
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"essence_icon_small");
  if ((*(float *)(param_1 + 0xa40) != -6.0) || (*(float *)((long)param_1 + 0x5204) != 10.0)) {
    param_1[0xa40] = 0x41200000c0c00000;
    FUN_1000200a0(plVar1);
  }
  if ((*(float *)(param_1 + 0xa42) != 1.0) || (*(float *)((long)param_1 + 0x5214) != 1.0)) {
    param_1[0xa42] = lVar16;
    FUN_1000200a0(plVar1);
  }
  plVar1 = param_1 + 0x9b8;
  local_d8 = (code *)CONCAT44(local_d8._4_4_,0xff9bdb2d);
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,&local_d8);
  FUN_1004e3120(&local_d8,"-0");
  FUN_1006513c0(plVar1,&local_d8);
  if (local_d0 != (long *)0x0) {
    operator_delete__(local_d0);
  }
  if ((*(float *)(param_1 + 0x9c0) != 6.0) || (*(float *)((long)param_1 + 0x4e04) != 8.0)) {
    param_1[0x9c0] = 0x4100000040c00000;
    FUN_1000200a0(plVar1);
  }
  if ((*(float *)(param_1 + 0x9c2) != 0.0) || (*(float *)((long)param_1 + 0x4e14) != 1.0)) {
    param_1[0x9c2] = 0x3f80000000000000;
    FUN_1000200a0(plVar1);
  }
  if ((char)local_e9 < '\0') {
    operator_delete(local_100);
  }
  return;
}



/*
 * FUN_100304198
 * VA: 0x100304198 | Source: functions/10030.c:2763
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 1, Vis masks: 3
 * Callees: FUN_1000200a0, FUN_100126c88, FUN_1001b4648, FUN_1001b4964, FUN_1001bd8b4, FUN_1001bdbb4, FUN_1004e0150, FUN_100651038 (+12 more)
 */
long * FUN_100304198(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined **ppuVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 *local_68;
  
  puVar9 = (undefined8 *)FUN_1001b4648();
  *puVar9 = &PTR_thunk_FUN_100304844_10148e568;
  puVar9 = puVar9 + 0x4d;
  thunk_FUN_1001c397c(puVar9);
  plVar1 = param_1 + 0x121;
  thunk_FUN_1001bd4e0(plVar1,0);
  thunk_FUN_1001fc310(param_1 + 0x1b7,param_2,1,0);
  plVar2 = param_1 + 0x1c0;
  thunk_FUN_100655644(plVar2);
  plVar3 = param_1 + 0x1eb;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x209;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0x22f;
  thunk_FUN_100650e64(plVar5);
  *(undefined2 *)(param_1 + 0x255) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x1b8],1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100655930(plVar2,plVar3,1);
  FUN_100655930(plVar2,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar9,1);
  iVar8 = FUN_100126c88();
  local_68 = &DAT_3f0000003f000000;
  FUN_1001bd8b4(plVar1,&local_68);
  FUN_1001bdbb4(0x3ecccccd,plVar1);
  thunk_FUN_1001bd798(plVar1,1);
  (**(code **)(*(long *)param_1[0x1b8] + 0x138))();
  local_68 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)param_1[0x1b8] + 0x28))((long *)param_1[0x1b8],&local_68);
  *(uint *)(param_1[0x1b8] + 0xeb4) = *(uint *)(param_1[0x1b8] + 0xeb4) & 0xfffffffb;
  *(uint *)((long)param_1 + 0xe84) = *(uint *)((long)param_1 + 0xe84) & 0xfffffffb;
  FUN_100652ca4(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970);
  if ((*(float *)(param_1 + 0x1f5) != 0.5) || (*(float *)((long)param_1 + 0xfac) != 0.5)) {
    param_1[0x1f5] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar3);
  }
  ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar8 == 0) {
    ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651038(plVar4,*ppuVar6);
  uVar7 = *(uint *)((long)param_1 + 0x10cc);
  if ((uVar7 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x10cc) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x7280;
    FUN_1000200a0(plVar4);
  }
  FUN_10065165c(plVar4,1);
  ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar8 == 0) {
    ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651038(plVar5,*ppuVar6);
  uVar7 = *(uint *)((long)param_1 + 0x11fc);
  if ((uVar7 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x11fc) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x7280;
    FUN_1000200a0(plVar5);
  }
  FUN_10065165c(plVar5,1);
  uVar10 = FUN_1004e0150("MENU_MARKET_DAILY_PICK_SOLD_OUT",0);
  FUN_1006513c0(plVar5,uVar10);
  *(uint *)((long)param_1 + 0x11fc) = *(uint *)((long)param_1 + 0x11fc) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x56) != 1.35) || (*(float *)((long)param_1 + 0x2b4) != 1.35)) {
    param_1[0x56] = 0x3faccccd3faccccd;
    FUN_1000200a0(puVar9);
  }
  FUN_1001b4964(param_1,1);
  return param_1;
}



/*
 * thunk_FUN_100304198
 * VA: 0xthunk_100304198 | Source: functions/10030.c:2852
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 1, Vis masks: 3
 * Callees: FUN_1000200a0, FUN_100126c88, FUN_1001b4648, FUN_1001b4964, FUN_1001bd8b4, FUN_1001bdbb4, FUN_1004e0150, FUN_100651038 (+12 more)
 * Callers: FUN_100296b64
 */
long * thunk_FUN_100304198(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined **ppuVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 *puStack_68;
  
  puVar9 = (undefined8 *)FUN_1001b4648();
  *puVar9 = &PTR_thunk_FUN_100304844_10148e568;
  puVar9 = puVar9 + 0x4d;
  thunk_FUN_1001c397c(puVar9);
  plVar1 = param_1 + 0x121;
  thunk_FUN_1001bd4e0(plVar1,0);
  thunk_FUN_1001fc310(param_1 + 0x1b7,param_2,1,0);
  plVar2 = param_1 + 0x1c0;
  thunk_FUN_100655644(plVar2);
  plVar3 = param_1 + 0x1eb;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x209;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0x22f;
  thunk_FUN_100650e64(plVar5);
  *(undefined2 *)(param_1 + 0x255) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x1b8],1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100655930(plVar2,plVar3,1);
  FUN_100655930(plVar2,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar9,1);
  iVar8 = FUN_100126c88();
  puStack_68 = &DAT_3f0000003f000000;
  FUN_1001bd8b4(plVar1,&puStack_68);
  FUN_1001bdbb4(0x3ecccccd,plVar1);
  thunk_FUN_1001bd798(plVar1,1);
  (**(code **)(*(long *)param_1[0x1b8] + 0x138))();
  puStack_68 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)param_1[0x1b8] + 0x28))((long *)param_1[0x1b8],&puStack_68);
  *(uint *)(param_1[0x1b8] + 0xeb4) = *(uint *)(param_1[0x1b8] + 0xeb4) & 0xfffffffb;
  *(uint *)((long)param_1 + 0xe84) = *(uint *)((long)param_1 + 0xe84) & 0xfffffffb;
  FUN_100652ca4(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970);
  if ((*(float *)(param_1 + 0x1f5) != 0.5) || (*(float *)((long)param_1 + 0xfac) != 0.5)) {
    param_1[0x1f5] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar3);
  }
  ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar8 == 0) {
    ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651038(plVar4,*ppuVar6);
  uVar7 = *(uint *)((long)param_1 + 0x10cc);
  if ((uVar7 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x10cc) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x7280;
    FUN_1000200a0(plVar4);
  }
  FUN_10065165c(plVar4,1);
  ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar8 == 0) {
    ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651038(plVar5,*ppuVar6);
  uVar7 = *(uint *)((long)param_1 + 0x11fc);
  if ((uVar7 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x11fc) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x7280;
    FUN_1000200a0(plVar5);
  }
  FUN_10065165c(plVar5,1);
  uVar10 = FUN_1004e0150("MENU_MARKET_DAILY_PICK_SOLD_OUT",0);
  FUN_1006513c0(plVar5,uVar10);
  *(uint *)((long)param_1 + 0x11fc) = *(uint *)((long)param_1 + 0x11fc) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x56) != 1.35) || (*(float *)((long)param_1 + 0x2b4) != 1.35)) {
    param_1[0x56] = 0x3faccccd3faccccd;
    FUN_1000200a0(puVar9);
  }
  FUN_1001b4964(param_1,1);
  return param_1;
}



/*
 * FUN_1003356ec
 * VA: 0x1003356ec | Source: functions/10033.c:3661
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 9
 * Callees: FUN_1000153b4, FUN_1001340b0, FUN_1004e0150, thunk_FUN_1004e439c
 */
void FUN_1003356ec(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  void *pvVar4;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined8 local_78 [2];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  long local_48 [3];
  
  local_48[2] = *(long *)PTR____stack_chk_guard_101444218;
  std::string::operator=((string *)(param_1 + 0x5d90),(string *)&DAT_101d238c8);
  std::string::operator=((string *)(param_1 + 0x5da8),(string *)&DAT_101d236d0);
  uVar2 = FUN_1004e0150("MENU_MARKET_MYSTERY_TITLE",0);
  FUN_1000153b4(param_1 + 0x5d38,uVar2);
  uVar2 = FUN_1004e0150("MENU_PROGRESSIVE_REWARD_RARE_CHEST_TITLE",0);
  FUN_1000153b4(param_1 + 0x5d58,uVar2);
  uVar2 = FUN_1004e0150("MENU_MARKET_MYSTERY_CHEST_BASIC_INFO_TITLE",0);
  FUN_1000153b4(param_1 + 0x5d48,uVar2);
  *(undefined4 *)(param_1 + 0x5d68) = 0xffe19400;
  uVar2 = FUN_1004e0150("MENU_MARKET_MYSTERY_CHEST_BASIC_INFO_DESC_1",0);
  thunk_FUN_1004e439c(auStack_68,uVar2);
  uVar2 = FUN_1004e0150("MENU_MARKET_MYSTERY_CHEST_BASIC_INFO_DESC_2",0);
  thunk_FUN_1004e439c(auStack_58,uVar2);
  uVar2 = FUN_1004e0150("MENU_MARKET_MYSTERY_CHEST_BASIC_INFO_DESC_3",0);
  thunk_FUN_1004e439c(local_48,uVar2);
  uVar2 = FUN_1004e0150("MENU_PROFILE_ASCENSION_SEASON_CHEST_PRIMARY_1",0);
  thunk_FUN_1004e439c(auStack_98,uVar2);
  uVar2 = FUN_1004e0150("MENU_PROFILE_ASCENSION_SEASON_CHEST_PRIMARY_2",0);
  thunk_FUN_1004e439c(auStack_88,uVar2);
  uVar2 = FUN_1004e0150("MENU_PROFILE_ASCENSION_SEASON_CHEST_PRIMARY_3",0);
  thunk_FUN_1004e439c(local_78,uVar2);
  lVar3 = FUN_1001340b0();
  uVar1 = *(uint *)(lVar3 + 8);
  if (1 < (int)uVar1) {
    uVar1 = 2;
  }
  uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  FUN_1000153b4(param_1 + 0x5d70,auStack_68 + (ulong)uVar1 * 0x10);
  FUN_1000153b4(param_1 + 0x5d80,auStack_98 + (ulong)uVar1 * 0x10);
  lVar3 = 0;
  do {
    pvVar4 = *(void **)((long)local_78 + lVar3 + 8);
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
      *(undefined8 *)((long)local_78 + lVar3) = 0;
      *(undefined8 *)((long)local_78 + lVar3 + 8) = 0;
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != -0x30);
  lVar3 = 0;
  do {
    pvVar4 = *(void **)((long)local_48 + lVar3 + 8);
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
      *(undefined8 *)((long)local_48 + lVar3) = 0;
      *(undefined8 *)((long)local_48 + lVar3 + 8) = 0;
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != -0x30);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48[2]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/*
 * FUN_100335990
 * VA: 0x100335990 | Source: functions/10033.c:3761
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 9
 * Callees: FUN_1000153b4, FUN_1001340b0, FUN_1002340fc, FUN_1004e0150, thunk_FUN_1004e439c
 */
void FUN_100335990(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  void *pvVar4;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined8 local_78 [2];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  long local_48 [3];
  
  local_48[2] = *(long *)PTR____stack_chk_guard_101444218;
  std::string::operator=((string *)(param_1 + 0x5d90),(string *)&DAT_101d238e0);
  std::string::operator=((string *)(param_1 + 0x5da8),(string *)&DAT_101d236e8);
  uVar2 = FUN_1004e0150("MENU_MARKET_MYSTERY_TITLE",0);
  FUN_1000153b4(param_1 + 0x5d38,uVar2);
  uVar2 = FUN_1004e0150("MENU_PROGRESSIVE_REWARD_EPIC_CHEST_TITLE",0);
  FUN_1000153b4(param_1 + 0x5d58,uVar2);
  uVar2 = FUN_1004e0150("MENU_MARKET_MYSTERY_CHEST_EPIC_INFO_TITLE",0);
  FUN_1000153b4(param_1 + 0x5d48,uVar2);
  *(undefined4 *)(param_1 + 0x5d68) = 0xffe550b2;
  uVar2 = FUN_1004e0150("MENU_MARKET_MYSTERY_CHEST_EPIC_INFO_DESC_1",0);
  thunk_FUN_1004e439c(auStack_68,uVar2);
  uVar2 = FUN_1004e0150("MENU_MARKET_MYSTERY_CHEST_EPIC_INFO_DESC_2",0);
  thunk_FUN_1004e439c(auStack_58,uVar2);
  uVar2 = FUN_1004e0150("MENU_MARKET_MYSTERY_CHEST_EPIC_INFO_DESC_3",0);
  thunk_FUN_1004e439c(local_48,uVar2);
  uVar2 = FUN_1004e0150("MENU_MARKET_EPIC_CHEST_PRIMARY_1",0);
  thunk_FUN_1004e439c(auStack_98,uVar2);
  uVar2 = FUN_1004e0150("MENU_MARKET_EPIC_CHEST_PRIMARY_2",0);
  thunk_FUN_1004e439c(auStack_88,uVar2);
  uVar2 = FUN_1004e0150("MENU_MARKET_EPIC_CHEST_PRIMARY_3",0);
  thunk_FUN_1004e439c(local_78,uVar2);
  lVar3 = FUN_1001340b0();
  uVar1 = *(uint *)(lVar3 + 8);
  if (1 < (int)uVar1) {
    uVar1 = 2;
  }
  uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  FUN_1000153b4(param_1 + 0x5d70,auStack_68 + (ulong)uVar1 * 0x10);
  FUN_1000153b4(param_1 + 0x5d80,auStack_98 + (ulong)uVar1 * 0x10);
  FUN_1002340fc(0x3ef0a3d7,param_1 + 0x580);
  lVar3 = 0;
  do {
    pvVar4 = *(void **)((long)local_78 + lVar3 + 8);
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
      *(undefined8 *)((long)local_78 + lVar3) = 0;
      *(undefined8 *)((long)local_78 + lVar3 + 8) = 0;
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != -0x30);
  lVar3 = 0;
  do {
    pvVar4 = *(void **)((long)local_48 + lVar3 + 8);
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
      *(undefined8 *)((long)local_48 + lVar3) = 0;
      *(undefined8 *)((long)local_48 + lVar3 + 8) = 0;
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != -0x30);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48[2]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}
