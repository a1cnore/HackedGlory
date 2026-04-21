// ui/nav_bar.c — 14 UI functions (nav_bar)
// Extracted by extract_ui.py from structured/functions/
#include "GameKindred.h"



/*
 * FUN_1001e338c
 * VA: 0x1001e338c | Source: functions/1001e.c:2376
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 30
 * Callees: FUN_100644a94
 */
void FUN_1001e338c(void)

{
  DAT_101d23650 = FUN_100644a94("UI::EVENT_MENU_ENTER_LOBBY");
  DAT_101d23654 = FUN_100644a94("UI::EVENT_MENU_LOBBY_FINISHED");
  DAT_101d23658 = FUN_100644a94("UI::EVENT_MENU_REQUEST_ENTER_PROFILE");
  DAT_101d2365c = FUN_100644a94("UI::EVENT_MENU_REQUEST_PLATFORM_NOTIFICATION");
  DAT_101d23660 = FUN_100644a94("UI::EVENT_MENU_REQUEST_CLOSE_PLATFORM_NOTIFICATION");
  DAT_101d23664 = FUN_100644a94("UI::EVENT_MENU_OPEN_URL");
  DAT_101d23668 = FUN_100644a94("UI::EVENT_MENU_PANEL_CHANGE");
  DAT_101d2366c = FUN_100644a94("UI::EVENT_MENU_YOU_ARE_READY");
  DAT_101d23670 = FUN_100644a94("UI::EVENT_MENU_PLAYER_NAME_UPDATED");
  DAT_101d23674 = FUN_100644a94("UI::EVENT_MENU_SEASON_REWARD_NOTIFICATION");
  DAT_101d23678 = FUN_100644a94("UI::EVENT_MENU_SHOW_ROOT");
  DAT_101d2367c = FUN_100644a94("UI::EVENT_MENU_LOG_OUT");
  DAT_101d23680 = FUN_100644a94("UI::EVENT_MENU_REQUEST_CACHE_URL_IMAGE");
  DAT_101d23684 = FUN_100644a94("UI::EVENT_MENU_CHECK_TODAY_IN_VAINGLORY");
  DAT_101d23688 = FUN_100644a94("UI::EVENT_USER_INTENT_PLAY_NOPLAT");
  DAT_101d2368c = DAT_101d23650;
  return;
}



/*
 * FUN_1001f6fec
 * VA: 0x1001f6fec | Source: functions/named.c:16483
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 9
 * Callees: FUN_10001549c, FUN_10015bcf8, FUN_10016aa7c, FUN_1001f6ce4, FUN_1001f6e5c, FUN_1001f767c, FUN_1001f76fc, FUN_1002b4da8 (+11 more)
 * Callers: FUN_1002205b4
 */
/* WARNING: Removing unreachable block (ram,0x0001001f7484) */
/* WARNING: Removing unreachable block (ram,0x0001001f753c) */
/* WARNING: Removing unreachable block (ram,0x0001001f756c) */
/* WARNING: Removing unreachable block (ram,0x0001001f75d4) */

void FUN_1001f6fec(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 ***pppuVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint local_b8;
  undefined4 uStack_b4;
  long local_b0;
  char local_a1;
  long local_a0;
  undefined1 auStack_98 [8];
  void *local_90;
  undefined1 auStack_88 [8];
  void *local_80;
  undefined8 **local_78;
  void *local_70;
  undefined8 uStack_68;
  
  lVar1 = FUN_10031a90c();
  if (lVar1 != 0) {
    FUN_10001549c(&local_78,"reserved_friends");
    lVar2 = FUN_10031af0c(lVar1,&local_78);
    if ((long)uStack_68 < 0) {
      operator_delete(local_78);
    }
    if (lVar2 != 0) {
      uVar3 = FUN_1004e0150("MENU_LEADERBOARDS_LEADERBOARD_PANEL_TITLE_MY_FRIENDS",0);
      thunk_FUN_1004e439c(auStack_88,uVar3);
      uVar3 = FUN_1004e0150("MENU_LEADERBOARDS_LEADERBOARD_TITLE_MY_FRIENDS",0);
      thunk_FUN_1004e439c(auStack_98,uVar3);
      pvVar4 = operator_new(0x40);
      local_a0 = FUN_1001f6ce4();
      FUN_10001549c(&local_78,"reserved_friends");
      FUN_10001549c(&local_b8,"reserved_friends");
      uVar3 = FUN_10031af0c(lVar1,&local_b8);
      FUN_1001f6e5c(pvVar4,&local_78,auStack_98,uVar3);
      if (local_a1 < '\0') {
        operator_delete((void *)CONCAT44(uStack_b4,local_b8));
      }
      if ((long)uStack_68 < 0) {
        operator_delete(local_78);
      }
      FUN_1001f767c(param_1 + 0x10,&local_a0);
      FUN_1002b4da8(*(undefined8 *)(param_1 + 8),auStack_88,0,
                    *(undefined8 *)
                     (*(long *)(*(long *)(param_1 + 0x18) +
                               (ulong)(*(int *)(param_1 + 0x10) - 1) * 8) + 8),"reserved_friends");
      FUN_10031aea8(lVar1);
      if (local_90 != (void *)0x0) {
        operator_delete__(local_90);
      }
      if (local_80 != (void *)0x0) {
        operator_delete__(local_80);
      }
    }
    FUN_10001549c(&local_78,"reserved_guild");
    lVar2 = FUN_10031af0c(lVar1,&local_78);
    if ((long)uStack_68 < 0) {
      operator_delete(local_78);
    }
    if (lVar2 != 0) {
      uVar3 = FUN_1004e0150("MENU_LEADERBOARDS_LEADERBOARD_PANEL_TITLE_MY_GUILD",0);
      thunk_FUN_1004e439c(auStack_88,uVar3);
      uVar3 = FUN_1004e0150("MENU_LEADERBOARDS_LEADERBOARD_TITLE_MY_GUILD",0);
      thunk_FUN_1004e439c(auStack_98,uVar3);
      pvVar4 = operator_new(0x40);
      local_a0 = FUN_1001f6ce4();
      FUN_10001549c(&local_78,"reserved_guild");
      FUN_10001549c(&local_b8,"reserved_guild");
      uVar3 = FUN_10031af0c(lVar1,&local_b8);
      FUN_1001f6e5c(pvVar4,&local_78,auStack_98,uVar3);
      if (local_a1 < '\0') {
        operator_delete((void *)CONCAT44(uStack_b4,local_b8));
      }
      if ((long)uStack_68 < 0) {
        operator_delete(local_78);
      }
      FUN_1001f767c(param_1 + 0x10,&local_a0);
      FUN_1002b4da8(*(undefined8 *)(param_1 + 8),auStack_88,0,
                    *(undefined8 *)
                     (*(long *)(*(long *)(param_1 + 0x18) +
                               (ulong)(*(int *)(param_1 + 0x10) - 1) * 8) + 8),"reserved_guild");
      FUN_10031aef0(lVar1);
      if (local_90 != (void *)0x0) {
        operator_delete__(local_90);
      }
      if (local_80 != (void *)0x0) {
        operator_delete__(local_80);
      }
    }
    FUN_10001549c(&local_78,"reserved_vainglorious100");
    lVar2 = FUN_10031af0c(lVar1,&local_78);
    if ((long)uStack_68 < 0) {
      operator_delete(local_78);
    }
    if (lVar2 != 0) {
      uVar3 = FUN_1004e0150("MENU_LEADERBOARDS_LEADERBOARD_PANEL_TITLE_TOP_100",0);
      thunk_FUN_1004e439c(auStack_88,uVar3);
      uVar3 = FUN_1004e0150("MENU_LEADERBOARDS_LEADERBOARD_TITLE_TOP_100",0);
      thunk_FUN_1004e439c(auStack_98,uVar3);
      FUN_1004e3120(&local_78,"[REGION_NAME]");
      uVar3 = FUN_10016aa7c();
      FUN_1004e3bc4(auStack_98,0,&local_78,uVar3);
      if (local_70 != (void *)0x0) {
        operator_delete__(local_70);
      }
      pvVar4 = operator_new(0x40);
      local_a0 = FUN_1001f6ce4();
      FUN_10001549c(&local_78,"reserved_vainglorious100");
      FUN_10001549c(&local_b8,"reserved_vainglorious100");
      uVar3 = FUN_10031af0c(lVar1,&local_b8);
      FUN_1001f6e5c(pvVar4,&local_78,auStack_98,uVar3);
      if (local_a1 < '\0') {
        operator_delete((void *)CONCAT44(uStack_b4,local_b8));
      }
      if ((long)uStack_68 < 0) {
        operator_delete(local_78);
      }
      FUN_1001f767c(param_1 + 0x10,&local_a0);
      FUN_1002b4da8(*(undefined8 *)(param_1 + 8),auStack_88,0,
                    *(undefined8 *)
                     (*(long *)(*(long *)(param_1 + 0x18) +
                               (ulong)(*(int *)(param_1 + 0x10) - 1) * 8) + 8),
                    "reserved_vainglorious100");
      if (local_90 != (void *)0x0) {
        operator_delete__(local_90);
      }
      if (local_80 != (void *)0x0) {
        operator_delete__(local_80);
      }
    }
    lVar2 = FUN_10031d43c();
    if (lVar2 != 0) {
      uVar3 = FUN_10031d43c();
      FUN_10031e024(&local_b8,uVar3,1);
      if (local_b8 != 0) {
        uVar11 = 0;
        lVar2 = local_b0;
        uVar6 = local_b8;
        do {
          if (*(int *)(lVar2 + uVar11 * 0x98 + 0x48) != 0) {
            uVar12 = 0;
            lVar7 = 0x40;
            do {
              lVar8 = *(long *)(lVar2 + uVar11 * 0x98 + 0x50);
              if ((((*(int *)(lVar8 + lVar7 + -0x40) == 1) && (*(int *)(lVar8 + lVar7 + -0x3c) == 1)
                   ) && (*(char *)(lVar8 + lVar7 + -0x21) != '\0')) &&
                 (*(int *)(lVar8 + lVar7 + -8) != 0)) {
                puVar9 = *(undefined8 **)(lVar8 + lVar7);
                if ((char)*(byte *)((long)puVar9 + 0x17) < '\0') {
                  pvVar4 = (void *)puVar9[1];
                  if ((void *)0xffffffffffffffef < pvVar4) {
                    /* WARNING: Subroutine does not return */
                    FUN_1001f76fc();
                  }
                  puVar9 = (undefined8 *)*puVar9;
                }
                else {
                  pvVar4 = (void *)(ulong)*(byte *)((long)puVar9 + 0x17);
                }
                if (pvVar4 < (void *)0x17) {
                  pppuVar5 = &local_78;
                  uStack_68 = CONCAT17((char)pvVar4,(undefined7)uStack_68);
                  if (pvVar4 != (void *)0x0) goto LAB_1001f7500;
                }
                else {
                  uVar10 = (long)pvVar4 + 0x10U & 0xfffffffffffffff0;
                  pppuVar5 = operator_new(uVar10);
                  uStack_68 = uVar10 | 0x8000000000000000;
                  local_78 = pppuVar5;
                  local_70 = pvVar4;
LAB_1001f7500:
                  _memcpy(pppuVar5,puVar9,(size_t)pvVar4);
                }
                *(undefined1 *)((long)pppuVar5 + (long)pvVar4) = 0;
                lVar2 = FUN_10031af0c(lVar1,&local_78);
                if (lVar2 != 0) {
                  uVar3 = FUN_1004e0150(lVar8 + lVar7 + -0x38,0);
                  thunk_FUN_1004e439c(auStack_88,uVar3);
                  uVar3 = FUN_1004e0150(lVar8 + lVar7 + -0x20,0);
                  thunk_FUN_1004e439c(auStack_98,uVar3);
                  operator_new(0x40);
                  local_a0 = FUN_1001f6ce4();
                  FUN_1001f6e5c(local_a0,*(undefined8 *)(lVar8 + lVar7),auStack_98,lVar2);
                  FUN_1001f767c(param_1 + 0x10,&local_a0);
                  FUN_1002b4da8(*(undefined8 *)(param_1 + 8),auStack_88,0,
                                *(undefined8 *)(local_a0 + 8),lVar8 + lVar7 + -0x38);
                  if (local_90 != (void *)0x0) {
                    operator_delete__(local_90);
                  }
                  if (local_80 != (void *)0x0) {
                    operator_delete__(local_80);
                  }
                }
                lVar2 = local_b0;
                if ((long)uStack_68 < 0) {
                  operator_delete(local_78);
                  lVar2 = local_b0;
                }
              }
              uVar12 = uVar12 + 1;
              lVar7 = lVar7 + 0x58;
              uVar6 = local_b8;
            } while (uVar12 < *(uint *)(lVar2 + uVar11 * 0x98 + 0x48));
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar6);
      }
      FUN_10015bcf8(&local_b8,1);
    }
    FUN_1002b4dfc(*(undefined8 *)(param_1 + 8),0);
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x000100200e9c) */



/*
 * FUN_1002a616c
 * VA: 0x1002a616c | Source: functions/1002a.c:4628
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 5
 * Callees: FUN_100015208, FUN_10001554c, FUN_100126d70, FUN_1001b11fc, FUN_1001b127c, FUN_1002a666c, FUN_1002a6684, FUN_1002a669c (+35 more)
 */
long * FUN_1002a616c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  code *local_90;
  long *local_88;
  long *local_80;
  code *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar11 = (undefined8 *)FUN_10064e20c();
  puVar11[0x17] = 0;
  *puVar11 = &PTR_thunk_FUN_1002a6738_101482408;
  puVar11 = puVar11 + 0x18;
  thunk_FUN_100655644(puVar11);
  plVar1 = param_1 + 0x43;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x69;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x8f;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0xb5;
  thunk_FUN_100655644(plVar4);
  thunk_FUN_1001c0c34(param_1 + 0xe0,0);
  param_1[399] = 0;
  thunk_FUN_100652c08();
  plVar5 = param_1 + 0x1ae;
  FUN_1001b11fc(plVar5);
  plVar6 = param_1 + 0x1c8;
  thunk_FUN_1002eca3c(plVar6,0);
  plVar7 = param_1 + 0x311;
  thunk_FUN_1002eca3c(plVar7,0);
  thunk_FUN_100652c08(param_1 + 0x45a);
  *(undefined4 *)(param_1 + 0x478) = 0;
  lVar12 = FUN_1002a7160(param_1,1);
  param_1[399] = lVar12;
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  FUN_1001b127c(plVar5,plVar6);
  FUN_1001b127c(plVar5,plVar7);
  (**(code **)(*param_1 + 0x78))(param_1,puVar11,1);
  FUN_100655930(puVar11,plVar1,1);
  FUN_100655930(puVar11,plVar2,1);
  FUN_100655930(puVar11,plVar3,1);
  FUN_100655930(puVar11,plVar4,1);
  FUN_100655930(plVar4,param_1 + 0xe0,1);
  lVar12 = FUN_10032523c();
  local_90 = (code *)0x0;
  local_78 = thunk_FUN_1002a7060;
  local_88 = param_1;
  local_80 = param_1;
  FUN_1002a71d4(lVar12 + 0x50,&local_90);
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_10064e5cc(plVar1,1);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_1004e3120(&local_90,"Blitz | Casual | Solo");
  FUN_1006513c0(plVar2,&local_90);
  if (local_88 != (long *)0x0) {
    operator_delete__(local_88);
  }
  FUN_100651460(plVar2,&DAT_101e44726);
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  uVar13 = FUN_1004e0150("MAIN_MENU_MATCHING_BOX_SUBTITLE",0);
  FUN_1006513c0(plVar3,uVar13);
  FUN_10064e5cc(plVar3,1);
  FUN_100651460(plVar3,&DAT_101e44726);
  uVar8 = FUN_1004d2524("homepanel_play_button");
  uVar9 = FUN_100015208("homepanel_play_button",uVar8,0x1234);
  *(uint *)((long)param_1 + 0xec4) =
       *(uint *)((long)param_1 + 0xec4) & 0x80000000 |
       *(uint *)((long)param_1 + 0xec4) & 0x7fff | (uVar9 & 0xffff) << 0xf;
  uVar8 = DAT_101d91884;
  local_68 = DAT_101d91884;
  local_90 = FUN_1002a666c;
  local_78 = (code *)0x0;
  uStack_70 = 0;
  local_80 = (long *)0x0;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x1c9,&local_90);
  FUN_1002ebf04(plVar6,&DAT_101d23748);
  FUN_1002eb970(plVar6,1);
  FUN_1002ecc7c(plVar6,PTR_s_build___Fonts_Brandon_Bold_130_f_10184e260);
  FUN_1002eccb4(plVar6,&DAT_101e448a8);
  local_90 = (code *)CONCAT44(local_90._4_4_,0xff646464);
  FUN_1002ecd8c(plVar6,&local_90);
  FUN_1002ecd84(plVar6,1);
  uVar13 = FUN_1004e0150("MAIN_MENU_PLAY",0);
  FUN_1002ecce4(plVar6,uVar13);
  FUN_1002ebe0c(plVar6,PTR_s_build___VGX_common_atlas_101854980,"play_button_bg");
  FUN_1002ebea0(plVar6,1);
  FUN_1002ebee0(0x42200000,0x42200000,plVar6);
  FUN_100652590(param_1 + 0x23a,&DAT_101e448a8,2);
  local_68 = uVar8;
  local_90 = FUN_1002a6684;
  local_78 = (code *)0x0;
  uStack_70 = 0;
  local_80 = (long *)0x0;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x312,&local_90);
  FUN_1002eb970(plVar7,1);
  FUN_1002ecc7c(plVar7,PTR_s_build___Fonts_Brandon_Bold_100_f_10184e258);
  FUN_1002eccb4(plVar7,&DAT_101e448a8);
  uVar13 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
  FUN_1002ecce4(plVar7,uVar13);
  FUN_1002ebe0c(plVar7,PTR_s_build___VGX_common_atlas_101854980,"play_button_bg");
  local_90 = (code *)CONCAT44(local_90._4_4_,0xff606060);
  FUN_1002ebe4c(plVar7,&local_90);
  FUN_1002ebea0(plVar7,1);
  FUN_100652590(param_1 + 899,&DAT_101e448a8,2);
  FUN_1006525c4(0x40a00000,0,0x40a00000,0x40a00000,0,0x40a00000,param_1 + 0x23a);
  FUN_1006525c4(0x40a00000,0,0x40a00000,0x40a00000,0,0x40a00000,param_1 + 899);
  uVar13 = FUN_100345b94();
  FUN_10034c450(uVar13,"*KindredMenuAnimatedSplashMesh*");
  iVar10 = FUN_100126d70();
  if (iVar10 == 0xe) {
    FUN_100652cac(param_1 + 400,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_18_plus");
    (**(code **)(*param_1 + 0x78))(param_1,param_1 + 400,1);
  }
  FUN_1002a669c(param_1);
  return param_1;
}



/*
 * thunk_FUN_1002a616c
 * VA: 0xthunk_1002a616c | Source: functions/1002a.c:4822
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 5
 * Callees: FUN_100015208, FUN_10001554c, FUN_100126d70, FUN_1001b11fc, FUN_1001b127c, FUN_1002a666c, FUN_1002a6684, FUN_1002a669c (+35 more)
 * Callers: FUN_1001f3424, thunk_FUN_1001f3424
 */
long * thunk_FUN_1002a616c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  code *pcStack_90;
  long *plStack_88;
  long *plStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar11 = (undefined8 *)FUN_10064e20c();
  puVar11[0x17] = 0;
  *puVar11 = &PTR_thunk_FUN_1002a6738_101482408;
  puVar11 = puVar11 + 0x18;
  thunk_FUN_100655644(puVar11);
  plVar1 = param_1 + 0x43;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x69;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x8f;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0xb5;
  thunk_FUN_100655644(plVar4);
  thunk_FUN_1001c0c34(param_1 + 0xe0,0);
  param_1[399] = 0;
  thunk_FUN_100652c08();
  plVar5 = param_1 + 0x1ae;
  FUN_1001b11fc(plVar5);
  plVar6 = param_1 + 0x1c8;
  thunk_FUN_1002eca3c(plVar6,0);
  plVar7 = param_1 + 0x311;
  thunk_FUN_1002eca3c(plVar7,0);
  thunk_FUN_100652c08(param_1 + 0x45a);
  *(undefined4 *)(param_1 + 0x478) = 0;
  lVar12 = FUN_1002a7160(param_1,1);
  param_1[399] = lVar12;
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  FUN_1001b127c(plVar5,plVar6);
  FUN_1001b127c(plVar5,plVar7);
  (**(code **)(*param_1 + 0x78))(param_1,puVar11,1);
  FUN_100655930(puVar11,plVar1,1);
  FUN_100655930(puVar11,plVar2,1);
  FUN_100655930(puVar11,plVar3,1);
  FUN_100655930(puVar11,plVar4,1);
  FUN_100655930(plVar4,param_1 + 0xe0,1);
  lVar12 = FUN_10032523c();
  pcStack_90 = (code *)0x0;
  pcStack_78 = thunk_FUN_1002a7060;
  plStack_88 = param_1;
  plStack_80 = param_1;
  FUN_1002a71d4(lVar12 + 0x50,&pcStack_90);
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_10064e5cc(plVar1,1);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_1004e3120(&pcStack_90,"Blitz | Casual | Solo");
  FUN_1006513c0(plVar2,&pcStack_90);
  if (plStack_88 != (long *)0x0) {
    operator_delete__(plStack_88);
  }
  FUN_100651460(plVar2,&DAT_101e44726);
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  uVar13 = FUN_1004e0150("MAIN_MENU_MATCHING_BOX_SUBTITLE",0);
  FUN_1006513c0(plVar3,uVar13);
  FUN_10064e5cc(plVar3,1);
  FUN_100651460(plVar3,&DAT_101e44726);
  uVar8 = FUN_1004d2524("homepanel_play_button");
  uVar9 = FUN_100015208("homepanel_play_button",uVar8,0x1234);
  *(uint *)((long)param_1 + 0xec4) =
       *(uint *)((long)param_1 + 0xec4) & 0x80000000 |
       *(uint *)((long)param_1 + 0xec4) & 0x7fff | (uVar9 & 0xffff) << 0xf;
  uVar8 = DAT_101d91884;
  uStack_68 = DAT_101d91884;
  pcStack_90 = FUN_1002a666c;
  pcStack_78 = (code *)0x0;
  uStack_70 = 0;
  plStack_80 = (long *)0x0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x1c9,&pcStack_90);
  FUN_1002ebf04(plVar6,&DAT_101d23748);
  FUN_1002eb970(plVar6,1);
  FUN_1002ecc7c(plVar6,PTR_s_build___Fonts_Brandon_Bold_130_f_10184e260);
  FUN_1002eccb4(plVar6,&DAT_101e448a8);
  pcStack_90 = (code *)CONCAT44(pcStack_90._4_4_,0xff646464);
  FUN_1002ecd8c(plVar6,&pcStack_90);
  FUN_1002ecd84(plVar6,1);
  uVar13 = FUN_1004e0150("MAIN_MENU_PLAY",0);
  FUN_1002ecce4(plVar6,uVar13);
  FUN_1002ebe0c(plVar6,PTR_s_build___VGX_common_atlas_101854980,"play_button_bg");
  FUN_1002ebea0(plVar6,1);
  FUN_1002ebee0(0x42200000,0x42200000,plVar6);
  FUN_100652590(param_1 + 0x23a,&DAT_101e448a8,2);
  uStack_68 = uVar8;
  pcStack_90 = FUN_1002a6684;
  pcStack_78 = (code *)0x0;
  uStack_70 = 0;
  plStack_80 = (long *)0x0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x312,&pcStack_90);
  FUN_1002eb970(plVar7,1);
  FUN_1002ecc7c(plVar7,PTR_s_build___Fonts_Brandon_Bold_100_f_10184e258);
  FUN_1002eccb4(plVar7,&DAT_101e448a8);
  uVar13 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
  FUN_1002ecce4(plVar7,uVar13);
  FUN_1002ebe0c(plVar7,PTR_s_build___VGX_common_atlas_101854980,"play_button_bg");
  pcStack_90 = (code *)CONCAT44(pcStack_90._4_4_,0xff606060);
  FUN_1002ebe4c(plVar7,&pcStack_90);
  FUN_1002ebea0(plVar7,1);
  FUN_100652590(param_1 + 899,&DAT_101e448a8,2);
  FUN_1006525c4(0x40a00000,0,0x40a00000,0x40a00000,0,0x40a00000,param_1 + 0x23a);
  FUN_1006525c4(0x40a00000,0,0x40a00000,0x40a00000,0,0x40a00000,param_1 + 899);
  uVar13 = FUN_100345b94();
  FUN_10034c450(uVar13,"*KindredMenuAnimatedSplashMesh*");
  iVar10 = FUN_100126d70();
  if (iVar10 == 0xe) {
    FUN_100652cac(param_1 + 400,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_18_plus");
    (**(code **)(*param_1 + 0x78))(param_1,param_1 + 400,1);
  }
  FUN_1002a669c(param_1);
  return param_1;
}



/*
 * FUN_1002a6b3c
 * VA: 0x1002a6b3c | Source: functions/1002a.c:5177
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 6
 * Callees: FUN_1004e0150, FUN_1004e3120, FUN_1004e313c, FUN_1004e38ac, FUN_1004e3bc4, FUN_1006513c0, thunk_FUN_1004e439c
 * Callers: FUN_1001f392c, thunk_FUN_1001f392c
 */
void FUN_1002a6b3c(undefined4 param_1,long *param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  float fVar3;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  
  fVar3 = (float)NEON_fminnm(param_1,0x44160000);
  if (fVar3 <= -1.0) {
    fVar3 = -1.0;
  }
  if (0.0 <= fVar3) {
    if (60.0 <= fVar3) {
      uVar1 = FUN_1004e0150("MAIN_MENU_MATCHING_BOX_SUBTITLE",0);
      thunk_FUN_1004e439c(auStack_50,uVar1);
      FUN_1004e313c(auStack_60);
      pcVar2 = "%d:0%d";
      if (9 < (int)(fVar3 + (float)((int)fVar3 / 0x3c) * -60.0)) {
        pcVar2 = "%d:%d";
      }
      FUN_1004e38ac(auStack_60,pcVar2);
      FUN_1004e3120(auStack_70,"[ESTTIME]");
      FUN_1004e3bc4(auStack_50,0,auStack_70,auStack_60);
      if (local_68 != (void *)0x0) {
        operator_delete__(local_68);
      }
      FUN_1006513c0(param_2 + 0x8f,auStack_50);
      if (local_58 != (void *)0x0) {
        operator_delete__(local_58);
      }
      goto LAB_1002a6c30;
    }
    uVar1 = FUN_1004e0150("MAIN_MENU_MATCHING_BOX_SUBTITLE_SHORTWAIT",0);
    thunk_FUN_1004e439c(auStack_50,uVar1);
    FUN_1004e3120(auStack_60,"[MIN]");
    pcVar2 = "1";
  }
  else {
    uVar1 = FUN_1004e0150("MAIN_MENU_MATCHING_BOX_SUBTITLE_UNKNOWN",0);
    thunk_FUN_1004e439c(auStack_50,uVar1);
    FUN_1004e3120(auStack_60,"[MIN]");
    pcVar2 = "5";
  }
  FUN_1004e3120(auStack_70,pcVar2);
  FUN_1004e3bc4(auStack_50,0,auStack_60,auStack_70);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  FUN_1006513c0(param_2 + 0x8f,auStack_50);
LAB_1002a6c30:
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  (**(code **)(*param_2 + 0xe8))(param_2);
  return;
}



/*
 * FUN_1002a88f0
 * VA: 0x1002a88f0 | Source: functions/1002a.c:6510
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 10, Vis masks: 1
 * Callees: FUN_100015208, FUN_10001549c, FUN_10001554c, FUN_1001b16e8, FUN_1002a8e70, FUN_1002a8e80, FUN_1002a8e90, FUN_1002a8ea0 (+12 more)
 */
long FUN_1002a88f0(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  void *local_88 [2];
  char local_71;
  code *local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  puVar4[0x17] = 0;
  *puVar4 = &PTR_thunk_FUN_10064e2bc_101482958;
  uVar5 = FUN_1002a90f8(puVar4,1);
  *(undefined8 *)(param_1 + 0xc0) = uVar5;
  uVar5 = FUN_1002a916c(uVar5,1);
  *(undefined8 *)(param_1 + 200) = uVar5;
  uVar5 = FUN_1002a916c(*(undefined8 *)(param_1 + 0xc0),1);
  *(undefined8 *)(param_1 + 0xd0) = uVar5;
  *(uint *)(*(long *)(param_1 + 0xc0) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0xc0) + 0x84) & 0xfffffffb;
  uVar5 = FUN_1002a90f8(param_1,1);
  *(undefined8 *)(param_1 + 0xd8) = uVar5;
  uVar5 = FUN_1001b16e8(uVar5,1);
  *(undefined8 *)(param_1 + 0xe0) = uVar5;
  uVar5 = FUN_1002a91e0(uVar5,1);
  *(undefined8 *)(param_1 + 0xe8) = uVar5;
  uVar5 = FUN_1002a91e0(*(undefined8 *)(param_1 + 0xe0),1);
  *(undefined8 *)(param_1 + 0xf0) = uVar5;
  uVar5 = FUN_1002a91e0(*(undefined8 *)(param_1 + 0xe0),1);
  *(undefined8 *)(param_1 + 0xf8) = uVar5;
  uVar5 = FUN_1002a91e0(*(undefined8 *)(param_1 + 0xe0),1);
  *(undefined8 *)(param_1 + 0x100) = uVar5;
  uVar5 = FUN_1002a91e0(*(undefined8 *)(param_1 + 0xd8),1);
  *(undefined8 *)(param_1 + 0x108) = uVar5;
  lVar7 = *(long *)(param_1 + 0xe8);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_tiv");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_tiv",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  lVar7 = *(long *)(param_1 + 0xf0);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_news");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_news",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  lVar7 = *(long *)(param_1 + 0xf8);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_leaderboards");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_leaderboards",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  lVar7 = *(long *)(param_1 + 0x100);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_academy");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_academy",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  lVar7 = *(long *)(param_1 + 0x108);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_settings");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_settings",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  uVar5 = *(undefined8 *)(param_1 + 200);
  FUN_10001549c(&local_70,"ice_icon_small");
  FUN_1002ee358(uVar5,&local_70);
  if (local_60._7_1_ < '\0') {
    operator_delete(local_70);
  }
  uVar2 = DAT_101d91884;
  local_48 = DAT_101d91884;
  local_70 = FUN_1002a8e70;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 200) + 8,&local_70);
  uVar5 = *(undefined8 *)(param_1 + 0xd0);
  FUN_10001549c(&local_70,"glory_icon_small");
  FUN_1002ee358(uVar5,&local_70);
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  local_48 = uVar2;
  local_70 = FUN_1002a8e80;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0xd0) + 8,&local_70);
  FUN_1002eb970(*(undefined8 *)(param_1 + 0xf0),0);
  uVar5 = DAT_101854a08;
  uVar6 = *(undefined8 *)(param_1 + 0xf0);
  FUN_10001549c(&local_70,"secondary_nav_news");
  FUN_10001549c(local_88,"secondary_nav_news_hit");
  FUN_1002ece5c(uVar6,uVar5,&local_70,local_88);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  local_48 = uVar2;
  local_70 = FUN_1002a8e90;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0xf0) + 8,&local_70);
  FUN_1002eb970(*(undefined8 *)(param_1 + 0x108),0);
  uVar5 = DAT_101854a08;
  uVar6 = *(undefined8 *)(param_1 + 0x108);
  FUN_10001549c(&local_70,"secondary_nav_settings");
  FUN_10001549c(local_88,"secondary_nav_settings_hit");
  FUN_1002ece5c(uVar6,uVar5,&local_70,local_88);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  local_48 = uVar2;
  local_70 = FUN_1002a8ea0;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0x108) + 8,&local_70);
  FUN_1002eb970(*(undefined8 *)(param_1 + 0xf8),0);
  uVar5 = DAT_101854a08;
  uVar6 = *(undefined8 *)(param_1 + 0xf8);
  FUN_10001549c(&local_70,"secondary_nav_leaderboards");
  FUN_10001549c(local_88,"secondary_nav_leaderboards_hit");
  FUN_1002ece5c(uVar6,uVar5,&local_70,local_88);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  local_48 = uVar2;
  local_70 = FUN_1002a8eb0;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0xf8) + 8,&local_70);
  FUN_1002eb970(*(undefined8 *)(param_1 + 0x100),0);
  uVar5 = DAT_101854a08;
  uVar6 = *(undefined8 *)(param_1 + 0x100);
  FUN_10001549c(&local_70,"secondary_nav_academy");
  FUN_10001549c(local_88,"secondary_nav_academy_hit");
  FUN_1002ece5c(uVar6,uVar5,&local_70,local_88);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  local_48 = uVar2;
  local_70 = FUN_1002a8ec0;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0x100) + 8,&local_70);
  FUN_1002eb970(*(undefined8 *)(param_1 + 0xe8),0);
  uVar5 = DAT_101854a08;
  uVar6 = *(undefined8 *)(param_1 + 0xe8);
  FUN_10001549c(&local_70,"secondary_nav_today");
  FUN_10001549c(local_88,"secondary_nav_today_hit");
  FUN_1002ece5c(uVar6,uVar5,&local_70,local_88);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  local_48 = uVar2;
  local_70 = FUN_1002a8ed0;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0xe8) + 8,&local_70);
  *(uint *)(*(long *)(param_1 + 0xe0) + 0x84) = *(uint *)(*(long *)(param_1 + 0xe0) + 0x84) | 4;
  return param_1;
}



/*
 * thunk_FUN_1002a88f0
 * VA: 0xthunk_1002a88f0 | Source: functions/1002a.c:6809
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 10, Vis masks: 1
 * Callees: FUN_100015208, FUN_10001549c, FUN_10001554c, FUN_1001b16e8, FUN_1002a8e70, FUN_1002a8e80, FUN_1002a8e90, FUN_1002a8ea0 (+12 more)
 * Callers: FUN_1001f4a04, thunk_FUN_1001f4a04
 */
long thunk_FUN_1002a88f0(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  void *apvStack_88 [2];
  char cStack_71;
  code *pcStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  puVar4[0x17] = 0;
  *puVar4 = &PTR_thunk_FUN_10064e2bc_101482958;
  uVar5 = FUN_1002a90f8(puVar4,1);
  *(undefined8 *)(param_1 + 0xc0) = uVar5;
  uVar5 = FUN_1002a916c(uVar5,1);
  *(undefined8 *)(param_1 + 200) = uVar5;
  uVar5 = FUN_1002a916c(*(undefined8 *)(param_1 + 0xc0),1);
  *(undefined8 *)(param_1 + 0xd0) = uVar5;
  *(uint *)(*(long *)(param_1 + 0xc0) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0xc0) + 0x84) & 0xfffffffb;
  uVar5 = FUN_1002a90f8(param_1,1);
  *(undefined8 *)(param_1 + 0xd8) = uVar5;
  uVar5 = FUN_1001b16e8(uVar5,1);
  *(undefined8 *)(param_1 + 0xe0) = uVar5;
  uVar5 = FUN_1002a91e0(uVar5,1);
  *(undefined8 *)(param_1 + 0xe8) = uVar5;
  uVar5 = FUN_1002a91e0(*(undefined8 *)(param_1 + 0xe0),1);
  *(undefined8 *)(param_1 + 0xf0) = uVar5;
  uVar5 = FUN_1002a91e0(*(undefined8 *)(param_1 + 0xe0),1);
  *(undefined8 *)(param_1 + 0xf8) = uVar5;
  uVar5 = FUN_1002a91e0(*(undefined8 *)(param_1 + 0xe0),1);
  *(undefined8 *)(param_1 + 0x100) = uVar5;
  uVar5 = FUN_1002a91e0(*(undefined8 *)(param_1 + 0xd8),1);
  *(undefined8 *)(param_1 + 0x108) = uVar5;
  lVar7 = *(long *)(param_1 + 0xe8);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_tiv");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_tiv",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  lVar7 = *(long *)(param_1 + 0xf0);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_news");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_news",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  lVar7 = *(long *)(param_1 + 0xf8);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_leaderboards");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_leaderboards",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  lVar7 = *(long *)(param_1 + 0x100);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_academy");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_academy",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  lVar7 = *(long *)(param_1 + 0x108);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_settings");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_settings",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  uVar5 = *(undefined8 *)(param_1 + 200);
  FUN_10001549c(&pcStack_70,"ice_icon_small");
  FUN_1002ee358(uVar5,&pcStack_70);
  if (uStack_60._7_1_ < '\0') {
    operator_delete(pcStack_70);
  }
  uVar2 = DAT_101d91884;
  uStack_48 = DAT_101d91884;
  pcStack_70 = FUN_1002a8e70;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 200) + 8,&pcStack_70);
  uVar5 = *(undefined8 *)(param_1 + 0xd0);
  FUN_10001549c(&pcStack_70,"glory_icon_small");
  FUN_1002ee358(uVar5,&pcStack_70);
  if (uStack_60 < 0) {
    operator_delete(pcStack_70);
  }
  uStack_48 = uVar2;
  pcStack_70 = FUN_1002a8e80;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0xd0) + 8,&pcStack_70);
  FUN_1002eb970(*(undefined8 *)(param_1 + 0xf0),0);
  uVar5 = DAT_101854a08;
  uVar6 = *(undefined8 *)(param_1 + 0xf0);
  FUN_10001549c(&pcStack_70,"secondary_nav_news");
  FUN_10001549c(apvStack_88,"secondary_nav_news_hit");
  FUN_1002ece5c(uVar6,uVar5,&pcStack_70,apvStack_88);
  if (cStack_71 < '\0') {
    operator_delete(apvStack_88[0]);
  }
  if (uStack_60 < 0) {
    operator_delete(pcStack_70);
  }
  uStack_48 = uVar2;
  pcStack_70 = FUN_1002a8e90;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0xf0) + 8,&pcStack_70);
  FUN_1002eb970(*(undefined8 *)(param_1 + 0x108),0);
  uVar5 = DAT_101854a08;
  uVar6 = *(undefined8 *)(param_1 + 0x108);
  FUN_10001549c(&pcStack_70,"secondary_nav_settings");
  FUN_10001549c(apvStack_88,"secondary_nav_settings_hit");
  FUN_1002ece5c(uVar6,uVar5,&pcStack_70,apvStack_88);
  if (cStack_71 < '\0') {
    operator_delete(apvStack_88[0]);
  }
  if (uStack_60 < 0) {
    operator_delete(pcStack_70);
  }
  uStack_48 = uVar2;
  pcStack_70 = FUN_1002a8ea0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0x108) + 8,&pcStack_70);
  FUN_1002eb970(*(undefined8 *)(param_1 + 0xf8),0);
  uVar5 = DAT_101854a08;
  uVar6 = *(undefined8 *)(param_1 + 0xf8);
  FUN_10001549c(&pcStack_70,"secondary_nav_leaderboards");
  FUN_10001549c(apvStack_88,"secondary_nav_leaderboards_hit");
  FUN_1002ece5c(uVar6,uVar5,&pcStack_70,apvStack_88);
  if (cStack_71 < '\0') {
    operator_delete(apvStack_88[0]);
  }
  if (uStack_60 < 0) {
    operator_delete(pcStack_70);
  }
  uStack_48 = uVar2;
  pcStack_70 = FUN_1002a8eb0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0xf8) + 8,&pcStack_70);
  FUN_1002eb970(*(undefined8 *)(param_1 + 0x100),0);
  uVar5 = DAT_101854a08;
  uVar6 = *(undefined8 *)(param_1 + 0x100);
  FUN_10001549c(&pcStack_70,"secondary_nav_academy");
  FUN_10001549c(apvStack_88,"secondary_nav_academy_hit");
  FUN_1002ece5c(uVar6,uVar5,&pcStack_70,apvStack_88);
  if (cStack_71 < '\0') {
    operator_delete(apvStack_88[0]);
  }
  if (uStack_60 < 0) {
    operator_delete(pcStack_70);
  }
  uStack_48 = uVar2;
  pcStack_70 = FUN_1002a8ec0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0x100) + 8,&pcStack_70);
  FUN_1002eb970(*(undefined8 *)(param_1 + 0xe8),0);
  uVar5 = DAT_101854a08;
  uVar6 = *(undefined8 *)(param_1 + 0xe8);
  FUN_10001549c(&pcStack_70,"secondary_nav_today");
  FUN_10001549c(apvStack_88,"secondary_nav_today_hit");
  FUN_1002ece5c(uVar6,uVar5,&pcStack_70,apvStack_88);
  if (cStack_71 < '\0') {
    operator_delete(apvStack_88[0]);
  }
  if (uStack_60 < 0) {
    operator_delete(pcStack_70);
  }
  uStack_48 = uVar2;
  pcStack_70 = FUN_1002a8ed0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0xe8) + 8,&pcStack_70);
  *(uint *)(*(long *)(param_1 + 0xe0) + 0x84) = *(uint *)(*(long *)(param_1 + 0xe0) + 0x84) | 4;
  return param_1;
}



/*
 * FUN_1002a8f20
 * nav bar refresh — hides leaderboard button
 * VA: 0x1002a8f20 | Source: functions/1002a.c:7020
 * Fptr: __DATA+0x14829e8
 * Dylib: Layer 2
 * Layout: +0xe8=tiv button, +0xf0=news button, +0xf8=leaderboards button (hidden by original), +0x100=academy button, +0x108=settings button
 * Notes: Clears bit 2 of leaderboard button flags at [button+0x84]. Dylib re-sets bit after call.
 * CE-gate: NO | Guest-gate: NO
 * Indicators: Vis masks: 1
 * Callees: FUN_1002ecef4, FUN_10064e32c, FUN_10064e47c, FUN_10064e68c, FUN_10064e72c
 */
void FUN_1002a8f20(long *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined8 local_58;
  
  FUN_10064e32c();
  lVar4 = 0;
  uVar2 = 0;
  *(uint *)(param_1[0x1f] + 0x84) = *(uint *)(param_1[0x1f] + 0x84) & 0xfffffffb;
  do {
    FUN_10064e47c(0x43040000,0x43040000,*(undefined8 *)((long)param_1 + lVar4 + 0xe8));
    local_58 = 0x4304000043040000;
    FUN_1002ecef4(*(undefined8 *)((long)param_1 + lVar4 + 0xe8),&local_58);
    uVar2 = (*(uint *)(*(long *)((long)param_1 + lVar4 + 0xe8) + 0x84) >> 2 & 1) + uVar2;
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0x28);
  fVar6 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  fVar7 = 0.0;
  if (uVar2 != 0 && uVar2 - 1 != 0) {
    fVar7 = ((float)uVar2 * -132.0 + -64.0 + fVar6) / (float)(uVar2 - 1);
  }
  lVar4 = 0;
  iVar1 = 0;
  do {
    lVar3 = param_1[lVar4 + 0x1e];
    if ((*(byte *)(lVar3 + 0x84) >> 2 & 1) != 0) {
      lVar5 = param_1[(long)iVar1 + 0x1d];
      FUN_10064e72c(fVar7,lVar3,3,lVar5,1);
      FUN_10064e72c(0,lVar3,5,lVar5,5);
      iVar1 = (int)lVar4 + 1;
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 4);
  (**(code **)(*(long *)param_1[0x1b] + 0x138))();
  FUN_10064e68c(0,0,param_1[0x1b],8);
  return;
}



/*
 * FUN_1002b4970
 * VA: 0x1002b4970 | Source: functions/1002b.c:3251
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 3
 * Callees: FUN_1000153b4, FUN_1000f0a04, FUN_1004e0150, FUN_1004e3120, FUN_1004e313c, FUN_1004e3bc4
 * Callers: FUN_1002b3154, FUN_1002b4c10, thunk_FUN_1002b4c10
 */
void FUN_1002b4970(undefined8 param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  char *pcVar3;
  undefined1 auStack_78 [8];
  void *local_70;
  undefined1 auStack_68 [8];
  void *local_60;
  undefined1 auStack_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  param_2 = param_2 & ((long)param_2 >> 0x3f ^ 0xffffffffffffffffU);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  FUN_1004e313c(param_1);
  if (SUB164(auVar1 * ZEXT816(0xc22e450672894ab7),10) < 1) {
    if ((int)((long)(param_2 - ((long)((param_2 / 0x15180) * 0x1518000000000) >> 0x20)) / 0xe10) < 1
       ) {
      uVar2 = FUN_1004e0150("MENU_LEADERBOARDS_LEADERBOARD_LAST_UPDATED_MINUTES_AGO",0);
      FUN_1000153b4(param_1,uVar2);
      FUN_1000f0a04(auStack_58,"%d");
      FUN_1004e3120(auStack_68,"[NUM_MINUTES]");
      FUN_1004e3120(auStack_78,auStack_58);
      FUN_1004e3bc4(param_1,0,auStack_68,auStack_78);
      if (local_70 != (void *)0x0) {
        operator_delete__(local_70);
      }
      if (local_60 != (void *)0x0) {
        operator_delete__(local_60);
      }
      FUN_1000f0a04(auStack_58,"%d");
      pcVar3 = "[NUM_SECONDS]";
    }
    else {
      uVar2 = FUN_1004e0150("MENU_LEADERBOARDS_LEADERBOARD_LAST_UPDATED_HOURS_AGO",0);
      FUN_1000153b4(param_1,uVar2);
      FUN_1000f0a04(auStack_58,"%d");
      FUN_1004e3120(auStack_68,"[NUM_HOURS]");
      FUN_1004e3120(auStack_78,auStack_58);
      FUN_1004e3bc4(param_1,0,auStack_68,auStack_78);
      if (local_70 != (void *)0x0) {
        operator_delete__(local_70);
      }
      if (local_60 != (void *)0x0) {
        operator_delete__(local_60);
      }
      FUN_1000f0a04(auStack_58,"%d");
      pcVar3 = "[NUM_MINUTES]";
    }
  }
  else {
    uVar2 = FUN_1004e0150("MENU_LEADERBOARDS_LEADERBOARD_LAST_UPDATED_DAYS_AGO",0);
    FUN_1000153b4(param_1,uVar2);
    FUN_1000f0a04(auStack_58,"%d");
    pcVar3 = "[NUM_DAYS]";
  }
  FUN_1004e3120(auStack_68,pcVar3);
  FUN_1004e3120(auStack_78,auStack_58);
  FUN_1004e3bc4(param_1,0,auStack_68,auStack_78);
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
  }
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/*
 * FUN_1002f9cf8
 * VA: 0x1002f9cf8 | Source: functions/1002f.c:6484
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 1, Vis masks: 4
 * Callees: FUN_1000200a0, FUN_1004e0150, FUN_1006421a8, FUN_100642bd8, FUN_10064e20c, FUN_100651038, FUN_1006513c0, FUN_10065165c (+8 more)
 */
long * FUN_1002f9cf8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  puVar8 = (undefined8 *)FUN_10064e20c();
  *puVar8 = &PTR_FUN_10148ca68;
  puVar8 = puVar8 + 0x17;
  FUN_1006421a8(puVar8);
  param_1[0x17] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x28;
  thunk_FUN_100655644(plVar1);
  plVar2 = param_1 + 0x53;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x79;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x97;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0xbd;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0xdb;
  thunk_FUN_100650e64(plVar6);
  *(undefined2 *)(param_1 + 0x101) = 0;
  *(undefined1 *)((long)param_1 + 0x80a) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar8,1);
  FUN_100642bd8(puVar8,plVar1,1);
  FUN_100655930(plVar1,plVar3,1);
  FUN_100655930(plVar1,plVar4,1);
  FUN_100655930(plVar1,plVar5,1);
  FUN_100655930(plVar1,plVar6,1);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  uVar9 = FUN_1004e0150("MENU_PLAY_RANKED_REQUIRES",0);
  FUN_1006513c0(plVar2,uVar9);
  FUN_10065165c(plVar2,1);
  FUN_1006516bc(plVar2,&DAT_101158c80);
  uVar7 = *(uint *)((long)param_1 + 0x53c);
  if ((uVar7 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x53c) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x6600;
    FUN_1000200a0(plVar4);
  }
  FUN_10065165c(plVar4,1);
  FUN_1006516bc(plVar4,&DAT_101158c80);
  *(uint *)((long)param_1 + 0x53c) = *(uint *)((long)param_1 + 0x53c) & 0xfffffffb;
  uVar7 = *(uint *)((long)param_1 + 0x75c);
  if ((uVar7 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x75c) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x6600;
    FUN_1000200a0(plVar6);
  }
  FUN_10065165c(plVar6,1);
  FUN_1006516bc(plVar6,&DAT_101158c80);
  *(uint *)((long)param_1 + 0x75c) = *(uint *)((long)param_1 + 0x75c) & 0xfffffffb;
  FUN_100652cac(plVar3,DAT_101854a08,"shiny_checkbox_off");
  FUN_100652cac(plVar5,DAT_101854a08,"shiny_checkbox_off");
  *(uint *)((long)param_1 + 0x44c) = *(uint *)((long)param_1 + 0x44c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x66c) = *(uint *)((long)param_1 + 0x66c) & 0xfffffffb;
  (**(code **)(*param_1 + 0x90))(param_1);
  return param_1;
}



/*
 * thunk_FUN_1002f9cf8
 * VA: 0xthunk_1002f9cf8 | Source: functions/1002f.c:6554
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 1, Vis masks: 4
 * Callees: FUN_1000200a0, FUN_1004e0150, FUN_1006421a8, FUN_100642bd8, FUN_10064e20c, FUN_100651038, FUN_1006513c0, FUN_10065165c (+8 more)
 * Callers: FUN_1002042cc
 */
long * thunk_FUN_1002f9cf8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  puVar8 = (undefined8 *)FUN_10064e20c();
  *puVar8 = &PTR_FUN_10148ca68;
  puVar8 = puVar8 + 0x17;
  FUN_1006421a8(puVar8);
  param_1[0x17] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x28;
  thunk_FUN_100655644(plVar1);
  plVar2 = param_1 + 0x53;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x79;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x97;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0xbd;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0xdb;
  thunk_FUN_100650e64(plVar6);
  *(undefined2 *)(param_1 + 0x101) = 0;
  *(undefined1 *)((long)param_1 + 0x80a) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar8,1);
  FUN_100642bd8(puVar8,plVar1,1);
  FUN_100655930(plVar1,plVar3,1);
  FUN_100655930(plVar1,plVar4,1);
  FUN_100655930(plVar1,plVar5,1);
  FUN_100655930(plVar1,plVar6,1);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  uVar9 = FUN_1004e0150("MENU_PLAY_RANKED_REQUIRES",0);
  FUN_1006513c0(plVar2,uVar9);
  FUN_10065165c(plVar2,1);
  FUN_1006516bc(plVar2,&DAT_101158c80);
  uVar7 = *(uint *)((long)param_1 + 0x53c);
  if ((uVar7 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x53c) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x6600;
    FUN_1000200a0(plVar4);
  }
  FUN_10065165c(plVar4,1);
  FUN_1006516bc(plVar4,&DAT_101158c80);
  *(uint *)((long)param_1 + 0x53c) = *(uint *)((long)param_1 + 0x53c) & 0xfffffffb;
  uVar7 = *(uint *)((long)param_1 + 0x75c);
  if ((uVar7 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x75c) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x6600;
    FUN_1000200a0(plVar6);
  }
  FUN_10065165c(plVar6,1);
  FUN_1006516bc(plVar6,&DAT_101158c80);
  *(uint *)((long)param_1 + 0x75c) = *(uint *)((long)param_1 + 0x75c) & 0xfffffffb;
  FUN_100652cac(plVar3,DAT_101854a08,"shiny_checkbox_off");
  FUN_100652cac(plVar5,DAT_101854a08,"shiny_checkbox_off");
  *(uint *)((long)param_1 + 0x44c) = *(uint *)((long)param_1 + 0x44c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x66c) = *(uint *)((long)param_1 + 0x66c) & 0xfffffffb;
  (**(code **)(*param_1 + 0x90))(param_1);
  return param_1;
}



/*
 * FUN_10031a97c
 * VA: 0x10031a97c | Source: functions/10031.c:7879
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 4
 * Callees: FUN_10001629c, FUN_1001116f8, FUN_10014f4a0, FUN_10031abf0, FUN_10031ac68, FUN_1004f0a20, FUN_1004f1580, FUN_100643618 (+8 more)
 * Callers: FUN_10031a8a4
 */
undefined8 * FUN_10031a97c(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *local_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = FUN_10014f4a0();
  FUN_1004f0a20(lVar1 + 0x18);
  param_1[7] = 0;
  *param_1 = &PTR_thunk_FUN_10031acac_101490f50;
  param_1[3] = &PTR_FUN_1014912f8;
  param_1[6] = &PTR_FUN_101491328;
  FUN_1004f1580(param_1 + 8);
  param_1[8] = &PTR_FUN_10145bf80;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = param_1 + 0x10;
  puVar2 = param_1 + 0x12;
  *puVar2 = &PTR_thunk_FUN_10031b974_101491368;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  pcStack_68 = thunk_FUN_10031ba0c;
  local_70 = puVar2;
  FUN_100643618(0x3dcccccd,&local_70,0,1);
  *puVar2 = &PTR_thunk_FUN_10031b974_101491418;
  puVar2 = param_1 + 0x1e;
  *puVar2 = &PTR_thunk_FUN_10031b974_101491368;
  *(undefined4 *)((long)param_1 + 0xec) = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  pcStack_68 = thunk_FUN_10031ba0c;
  local_70 = puVar2;
  FUN_100643618(0x3dcccccd,&local_70,0,1);
  *puVar2 = &PTR_thunk_FUN_10031b974_101491418;
  *(undefined4 *)((long)param_1 + 0x14c) = 0;
  param_1[0x2a] = &PTR_thunk_FUN_10031b974_101491368;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  pcStack_68 = thunk_FUN_10031ba0c;
  local_70 = param_1 + 0x2a;
  FUN_100643618(0x3dcccccd,&local_70,0,1);
  param_1[0x2a] = &PTR_FUN_1014913c0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x39) = 0;
  *(undefined1 *)((long)param_1 + 0x1ca) = 0;
  FUN_1001116f8(param_1 + 6);
  pcStack_68 = thunk_FUN_10031b2a4;
  local_70 = param_1;
  FUN_100643618(0x3dcccccd,&local_70,0,1);
  pcStack_68 = (code *)0x0;
  local_70 = (undefined8 *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  FUN_10031abf0(&local_70,"5v5_earnedElo_season","MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_5V5");
  FUN_10031abf0(&local_70,"3v3_earnedElo_season","MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_3V3");
  FUN_10031abf0(&local_70,"blitz_earnedElo_season","MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_BLITZ")
  ;
  FUN_10031abf0(&local_70,"wins_season","MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_WINS");
  FUN_10031ac68(param_1 + 0x2a,&local_70);
  FUN_10001629c(&uStack_60,1);
  FUN_10001629c(&local_70,1);
  return param_1;
}



/*
 * FUN_10031bb04
 * VA: 0x10031bb04 | Source: functions/10031.c:8919
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 4
 * Callees: FUN_10001549c, FUN_10001617c
 */
void FUN_10031bb04(undefined8 *param_1)

{
  void *local_38 [2];
  char local_21;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_10001549c(local_38,"MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_5V5");
  FUN_10001617c(param_1,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10001549c(local_38,"MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_3V3");
  FUN_10001617c(param_1,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10001549c(local_38,"MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_BLITZ");
  FUN_10001617c(param_1,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10001549c(local_38,"MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_WINS");
  FUN_10001617c(param_1,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}



/*
 * FUN_100321ee0
 * VA: 0x100321ee0 | Source: functions/10032.c:2022
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 30
 * Callees: FUN_1000153b4, FUN_10001549c, FUN_10012709c, FUN_100202cb8, FUN_100321770, FUN_100323894, FUN_100323ba8, FUN_1004e0150 (+6 more)
 * Callers: FUN_10020200c, FUN_100323fe4
 */
void FUN_100321ee0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  void *local_10b0 [2];
  char local_1099;
  undefined1 auStack_1098 [16];
  void *local_1088;
  char local_1071;
  undefined4 local_1064;
  undefined8 local_1058;
  void *local_1050;
  undefined8 local_1048;
  void *local_1040;
  undefined8 local_1038;
  void *local_1030;
  void *local_1028;
  char local_1011;
  undefined1 auStack_ff0 [16];
  void *local_fe0;
  char local_fc9;
  undefined4 local_fbc;
  undefined8 local_fb0;
  void *local_fa8;
  undefined8 local_fa0;
  void *local_f98;
  undefined8 local_f90;
  void *local_f88;
  void *local_f80;
  char local_f69;
  undefined1 auStack_f48 [16];
  void *local_f38;
  char local_f21;
  undefined4 local_f14;
  undefined8 local_f08;
  void *local_f00;
  undefined8 local_ef8;
  void *local_ef0;
  undefined8 local_ee8;
  void *local_ee0;
  void *local_ed8;
  char local_ec1;
  undefined1 auStack_ea0 [16];
  void *local_e90;
  char local_e79;
  undefined4 local_e6c;
  undefined8 local_e60;
  void *local_e58;
  undefined8 local_e50;
  void *local_e48;
  undefined8 local_e40;
  void *local_e38;
  void *local_e30;
  char local_e19;
  undefined1 auStack_df8 [16];
  void *local_de8;
  char local_dd1;
  undefined8 local_db8;
  void *local_db0;
  undefined8 local_da8;
  void *local_da0;
  undefined8 local_d98;
  void *local_d90;
  void *local_d88;
  char local_d71;
  undefined1 auStack_d50 [16];
  void *local_d40;
  char local_d29;
  undefined8 local_d10;
  void *local_d08;
  undefined8 local_d00;
  void *local_cf8;
  undefined8 local_cf0;
  void *local_ce8;
  void *local_ce0;
  char local_cc9;
  undefined4 local_cc8;
  char *local_cc0;
  undefined4 local_cb8;
  undefined1 auStack_ca8 [16];
  void *local_c98;
  char local_c81;
  undefined8 local_c68;
  void *local_c60;
  undefined8 local_c58;
  void *local_c50;
  undefined8 local_c48;
  void *local_c40;
  void *local_c38;
  char local_c21;
  undefined4 local_c20;
  char *local_c18;
  undefined4 local_c10;
  undefined1 auStack_c00 [16];
  void *local_bf0;
  char local_bd9;
  undefined8 local_bc0;
  void *local_bb8;
  undefined8 local_bb0;
  void *local_ba8;
  undefined8 local_ba0;
  void *local_b98;
  void *local_b90;
  char local_b79;
  undefined4 local_b78;
  char *local_b70;
  undefined4 local_b68;
  undefined1 auStack_b58 [16];
  void *local_b48;
  char local_b31;
  undefined8 local_b18;
  void *local_b10;
  undefined8 local_b08;
  void *local_b00;
  undefined8 local_af8;
  void *local_af0;
  void *local_ae8;
  char local_ad1;
  undefined4 local_ad0;
  char *local_ac8;
  undefined4 local_ac0;
  undefined1 local_aba;
  undefined1 auStack_ab0 [16];
  void *local_aa0;
  char local_a89;
  undefined4 local_a7c;
  undefined8 local_a70;
  void *local_a68;
  undefined8 local_a60;
  void *local_a58;
  undefined8 local_a50;
  void *local_a48;
  void *local_a40;
  char local_a29;
  undefined4 local_a28;
  char *local_a20;
  undefined4 local_a18;
  undefined1 local_a12;
  undefined1 auStack_a08 [16];
  void *local_9f8;
  char local_9e1;
  undefined8 local_9c8;
  void *local_9c0;
  undefined8 local_9b8;
  void *local_9b0;
  undefined8 local_9a8;
  void *local_9a0;
  void *local_998;
  char local_981;
  undefined4 local_980;
  char *local_978;
  undefined1 local_968;
  undefined1 auStack_960 [16];
  void *local_950;
  char local_939;
  undefined8 local_920;
  void *local_918;
  undefined8 local_910;
  void *local_908;
  undefined8 local_900;
  void *local_8f8;
  void *local_8f0;
  char local_8d9;
  undefined4 local_8d8;
  char *local_8d0;
  undefined1 local_8c0;
  undefined1 auStack_8b8 [16];
  void *local_8a8;
  char local_891;
  undefined8 local_878;
  void *local_870;
  undefined8 local_868;
  void *local_860;
  undefined8 local_858;
  void *local_850;
  void *local_848;
  char local_831;
  undefined4 local_830;
  char *local_828;
  undefined1 local_818;
  undefined1 auStack_810 [16];
  void *local_800;
  char local_7e9;
  undefined4 local_7dc;
  undefined8 local_7d0;
  void *local_7c8;
  undefined8 local_7c0;
  void *local_7b8;
  undefined8 local_7b0;
  void *local_7a8;
  void *local_7a0;
  char local_789;
  undefined4 local_788;
  char *local_780;
  undefined4 local_778;
  undefined1 local_770;
  undefined1 auStack_768 [16];
  void *local_758;
  char local_741;
  undefined4 local_734;
  undefined8 local_728;
  void *local_720;
  undefined8 local_718;
  void *local_710;
  undefined8 local_708;
  void *local_700;
  void *local_6f8 [2];
  char local_6e1;
  undefined4 local_6e0;
  char *local_6d8;
  undefined4 local_6d0;
  undefined1 local_6cc;
  undefined1 auStack_6c0 [16];
  void *local_6b0;
  char local_699;
  undefined4 local_68c;
  undefined8 local_680;
  void *local_678;
  undefined8 local_670;
  void *local_668;
  undefined8 local_660;
  void *local_658;
  void *local_650 [2];
  char local_639;
  undefined4 local_638;
  char *local_630;
  undefined4 local_628;
  undefined1 local_624;
  undefined1 auStack_618 [16];
  void *local_608;
  char local_5f1;
  undefined4 local_5e4;
  undefined8 local_5d8;
  void *local_5d0;
  undefined8 local_5c8;
  void *local_5c0;
  undefined8 local_5b8;
  void *local_5b0;
  void *local_5a8 [2];
  char local_591;
  undefined4 local_590;
  char *local_588;
  undefined4 local_580;
  undefined1 local_57c;
  undefined1 auStack_570 [16];
  void *local_560;
  char local_549;
  undefined4 local_53c;
  undefined8 local_530;
  void *local_528;
  undefined8 local_520;
  void *local_518;
  undefined8 local_510;
  void *local_508;
  void *local_500 [2];
  char local_4e9;
  undefined4 local_4e8;
  char *local_4e0;
  undefined4 local_4d8;
  undefined1 local_4d4;
  undefined1 auStack_4c8 [16];
  void *local_4b8;
  char local_4a1;
  undefined4 local_494;
  undefined8 local_488;
  void *local_480;
  undefined8 local_478;
  void *local_470;
  undefined8 local_468;
  void *local_460;
  void *local_458 [2];
  char local_441;
  undefined4 local_440;
  char *local_438;
  undefined4 local_430;
  undefined1 local_42c;
  undefined1 auStack_420 [16];
  void *local_410;
  char local_3f9;
  undefined4 local_3ec;
  undefined8 local_3e0;
  void *local_3d8;
  undefined8 local_3d0;
  void *local_3c8;
  undefined8 local_3c0;
  void *local_3b8;
  void *local_3b0 [2];
  char local_399;
  undefined4 local_398;
  char *local_390;
  undefined4 local_388;
  undefined1 auStack_378 [16];
  void *local_368;
  char local_351;
  undefined8 local_338;
  void *local_330;
  undefined8 local_328;
  void *local_320;
  undefined8 local_318;
  void *local_310;
  void *local_308 [2];
  char local_2f1;
  undefined4 local_2f0;
  char *local_2e8;
  undefined4 local_2e0;
  undefined1 local_2dc;
  undefined1 auStack_2d0 [16];
  void *local_2c0;
  char local_2a9;
  undefined8 local_290;
  void *local_288;
  undefined8 local_280;
  void *local_278;
  undefined8 local_270;
  void *local_268;
  void *local_260 [2];
  char local_249;
  undefined4 local_248;
  char *local_240;
  undefined4 local_238;
  undefined1 auStack_228 [16];
  void *local_218;
  char local_201;
  undefined8 local_1e8;
  void *local_1e0;
  undefined8 local_1d8;
  void *local_1d0;
  undefined8 local_1c8;
  void *local_1c0;
  void *local_1b8;
  char local_1a1;
  undefined4 local_1a0;
  char *local_198;
  undefined4 local_190;
  undefined1 local_18a;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [24];
  undefined8 local_160;
  void *local_158;
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [24];
  undefined8 local_128;
  void *local_120;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [24];
  undefined8 local_f0;
  void *local_e8;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  undefined8 local_b8;
  void *local_b0;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [24];
  undefined8 local_80;
  void *local_78;
  undefined1 local_6f;
  
  thunk_FUN_1003216f4(auStack_a0,"gameplayMode",0);
  thunk_FUN_1003216f4(auStack_d8,"casualOrRankedStep",0);
  thunk_FUN_1003216f4(auStack_110,"botTypeStep",0);
  thunk_FUN_1003216f4(auStack_148,"botdifficultyStep",1);
  thunk_FUN_1003216f4(auStack_180,"tutorialChoiceStep",1);
  thunk_FUN_10032146c(auStack_228,0,"casualOrRankedStep",0xffffffff,0);
  thunk_FUN_10032146c(auStack_2d0,3,0,0xffffffff,4);
  thunk_FUN_10032146c(auStack_378,4,0,0xffffffff,0xffffffff);
  thunk_FUN_10032146c(auStack_420,6,0,0xffffffff,5);
  thunk_FUN_10032146c(auStack_4c8,5,0,0xffffffff,0xffffffff);
  thunk_FUN_10032146c(auStack_570,8,0,0xffffffff,0xffffffff);
  thunk_FUN_10032146c(auStack_618,7,0,0xffffffff,0xffffffff);
  thunk_FUN_10032146c(auStack_6c0,9,0,0xffffffff,0xffffffff);
  thunk_FUN_10032146c(auStack_768,1,0,0xffffffff,0xffffffff);
  thunk_FUN_10032146c(auStack_810,2,0,0xffffffff,0xffffffff);
  thunk_FUN_100321544(auStack_8b8,3,"botTypeStep",0xffffffff,0xffffffff);
  thunk_FUN_10032146c(auStack_960,10,0,0xffffffff,0xffffffff);
  thunk_FUN_10032146c(auStack_a08,0x11,PTR_s_tutorialLevelGwen_101854b08,0xffffffff,0xffffffff);
  thunk_FUN_100321544(auStack_ab0,1,0,0xffffffff,3);
  thunk_FUN_100321544(auStack_b58,0,0,0xffffffff,0);
  thunk_FUN_10032146c(auStack_c00,0,"botdifficultyStep",0xffffffff,0xffffffff);
  thunk_FUN_10032146c(auStack_ca8,3,"botdifficultyStep",0xffffffff,0xffffffff);
  thunk_FUN_10032146c(auStack_d50,2,"botdifficultyStep",0xffffffff,0xffffffff);
  thunk_FUN_10032161c(auStack_df8,0,0,0xffffffff,0xffffffff);
  thunk_FUN_10032161c(auStack_ea0,1,0,0xffffffff,0xffffffff);
  thunk_FUN_10032161c(auStack_f48,2,0,0xffffffff,0xffffffff);
  thunk_FUN_10032161c(auStack_ff0,3,0,0xffffffff,0xffffffff);
  thunk_FUN_10032161c(auStack_1098,4,0,0xffffffff,0xffffffff);
  uVar2 = FUN_1004e0150("GENERIC_5V5",0);
  FUN_1000153b4(&local_1e8,uVar2);
  local_18a = 1;
  uVar2 = FUN_1004e0150("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_1000153b4(&local_1d8,uVar2);
  local_1a0 = 0;
  local_198 = "playmode_5v5_casual";
  local_190 = 0x19;
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_CASUAL_TITLE",0);
  FUN_1000153b4(&local_b18,uVar2);
  local_aba = 1;
  uVar2 = FUN_1004e0150("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_1000153b4(&local_b08,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_DOT_SEPARATOR",0);
  FUN_1004e372c(&local_b08,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_5V5",0);
  FUN_1004e372c(&local_b08,uVar2);
  local_ad0 = 0;
  local_ac8 = "playmode_5v5_casual";
  local_ac0 = 0x19;
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_RANKED_TITLE",0);
  FUN_1000153b4(&local_a70,uVar2);
  local_a12 = 1;
  uVar2 = FUN_1004e0150("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_1000153b4(&local_a60,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_DOT_SEPARATOR",0);
  FUN_1004e372c(&local_a60,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_5V5",0);
  FUN_1004e372c(&local_a60,uVar2);
  local_a20 = "playmode_5v5_ranked";
  local_a18 = 0x19;
  local_a28 = 0;
  local_a7c = 7;
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_BLITZ_TITLE",0);
  FUN_1000153b4(&local_290,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_1000153b4(&local_280,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_DOT_SEPARATOR",0);
  FUN_1004e372c(&local_280,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_3V3",0);
  FUN_1004e372c(&local_280,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_DOT_SEPARATOR",0);
  FUN_1004e372c(&local_280,uVar2);
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_TALENTS_MODE_LABEL",0);
  FUN_1004e372c(&local_280,uVar2);
  local_248 = 0;
  local_240 = "playmode_blitz";
  local_238 = 5;
  FUN_10001549c(local_10b0,"blitz_ranked");
  std::string::operator=((string *)local_260,(string *)local_10b0);
  if (local_1099 < '\0') {
    operator_delete(local_10b0[0]);
  }
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_BLITZ_REVAMP_TITLE",0);
  FUN_1000153b4(&local_338,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_1000153b4(&local_328,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_DOT_SEPARATOR",0);
  FUN_1004e372c(&local_328,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_3V3",0);
  FUN_1004e372c(&local_328,uVar2);
  local_2f0 = 0;
  local_2e8 = "playmode_blitzreloaded";
  local_2e0 = 2;
  FUN_10001549c(local_10b0,"blitz_revamp");
  std::string::operator=((string *)local_308,(string *)local_10b0);
  if (local_1099 < '\0') {
    operator_delete(local_10b0[0]);
  }
  local_2dc = 0;
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_ARAL_TITLE",0);
  FUN_1000153b4(&local_3e0,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_1000153b4(&local_3d0,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_DOT_SEPARATOR",0);
  FUN_1004e372c(&local_3d0,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_3V3",0);
  FUN_1004e372c(&local_3d0,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_DOT_SEPARATOR",0);
  FUN_1004e372c(&local_3d0,uVar2);
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_TALENTS_MODE_LABEL",0);
  FUN_1004e372c(&local_3d0,uVar2);
  local_398 = 0;
  local_390 = "playmode_aral";
  local_388 = 10;
  FUN_10001549c(local_10b0,"aral_casual");
  std::string::operator=((string *)local_3b0,(string *)local_10b0);
  if (local_1099 < '\0') {
    operator_delete(local_10b0[0]);
  }
  local_3ec = 9;
  uVar2 = FUN_1004e0150("GENERIC_3V3",0);
  FUN_1000153b4(&local_7d0,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_1000153b4(&local_7c0,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_DOT_SEPARATOR",0);
  FUN_1004e372c(&local_7c0,uVar2);
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_RANKED_TITLE",0);
  FUN_1004e372c(&local_7c0,uVar2);
  local_780 = "playmode_3v3";
  local_778 = 0x14;
  local_788 = 0;
  local_7dc = 8;
  local_770 = 1;
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_SOLOBOTS_TITLE",0);
  FUN_1000153b4(&local_878,uVar2);
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_SOLOBOTS_SUBTEXT",0);
  FUN_1000153b4(&local_868,uVar2);
  local_830 = 0;
  local_828 = "playmode_solobots";
  local_818 = 1;
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_PRACTICE_TITLE",0);
  FUN_1000153b4(&local_920,uVar2);
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_PRACTICE_SUBTEXT",0);
  FUN_1000153b4(&local_910,uVar2);
  local_8d8 = 0;
  local_8d0 = "playmode_practice";
  local_8c0 = 1;
  uVar2 = FUN_1004e0150("GENERIC_5V5",0);
  FUN_1000153b4(&local_bc0,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_1000153b4(&local_bb0,uVar2);
  local_b78 = 0;
  local_b70 = "playmode_5v5_ranked";
  local_b68 = 0x19;
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_BLITZ_TITLE",0);
  FUN_1000153b4(&local_c68,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_1000153b4(&local_c58,uVar2);
  local_c20 = 0;
  local_c18 = "playmode_blitz";
  local_c10 = 5;
  uVar2 = FUN_1004e0150("GENERIC_3V3",0);
  FUN_1000153b4(&local_d10,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_1000153b4(&local_d00,uVar2);
  local_cc8 = 0;
  local_cc0 = "playmode_3v3";
  local_cb8 = 0x14;
  uVar2 = FUN_1004e0150("GENERIC_3V3",0);
  FUN_1000153b4(&local_728,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_1000153b4(&local_718,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_DOT_SEPARATOR",0);
  FUN_1004e372c(&local_718,uVar2);
  uVar2 = FUN_1004e0150("MENU_PLAY_MENU_MODE_STANDARD_CASUAL_OPTION_TITLE",0);
  FUN_1004e372c(&local_718,uVar2);
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_EVENT_MODE_LABEL",0);
  FUN_1000153b4(&local_708,uVar2);
  local_6e0 = 0;
  local_734 = 9;
  local_6d8 = "playmode_3v3";
  local_6d0 = 0x14;
  FUN_10001549c(local_10b0,"casual_3v3");
  std::string::operator=((string *)local_6f8,(string *)local_10b0);
  if (local_1099 < '\0') {
    operator_delete(local_10b0[0]);
  }
  local_6cc = 0;
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_RUMBLE_TITLE",0);
  FUN_1000153b4(&local_488,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_1000153b4(&local_478,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_DOT_SEPARATOR",0);
  FUN_1004e372c(&local_478,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_5V5",0);
  FUN_1004e372c(&local_478,uVar2);
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_EVENT_MODE_LABEL",0);
  FUN_1000153b4(&local_468,uVar2);
  local_440 = 0;
  local_494 = 9;
  local_438 = "playmode_rumble";
  local_430 = 10;
  FUN_10001549c(local_10b0,"rumble");
  std::string::operator=((string *)local_458,(string *)local_10b0);
  if (local_1099 < '\0') {
    operator_delete(local_10b0[0]);
  }
  local_42c = 0;
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_ONE_FOR_ALL_TITLE",0);
  FUN_1000153b4(&local_530,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_1000153b4(&local_520,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_DOT_SEPARATOR",0);
  FUN_1004e372c(&local_520,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_5V5",0);
  FUN_1004e372c(&local_520,uVar2);
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_EVENT_MODE_LABEL",0);
  FUN_1000153b4(&local_510,uVar2);
  local_4e8 = 0;
  local_4e0 = "playmode_oneforall";
  local_4d8 = 0x14;
  FUN_10001549c(local_10b0,"one_for_all");
  std::string::operator=((string *)local_500,(string *)local_10b0);
  if (local_1099 < '\0') {
    operator_delete(local_10b0[0]);
  }
  local_53c = 9;
  local_4d4 = 0;
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_PURE_BLITZ_TITLE",0);
  FUN_1000153b4(&local_680,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_1000153b4(&local_670,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_DOT_SEPARATOR",0);
  FUN_1004e372c(&local_670,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_3V3",0);
  FUN_1004e372c(&local_670,uVar2);
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_EVENT_MODE_LABEL",0);
  FUN_1000153b4(&local_660,uVar2);
  local_638 = 0;
  local_630 = "playmode_blitz";
  local_628 = 5;
  FUN_10001549c(local_10b0,"blitz_pure");
  std::string::operator=((string *)local_650,(string *)local_10b0);
  if (local_1099 < '\0') {
    operator_delete(local_10b0[0]);
  }
  local_68c = 9;
  local_624 = 0;
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_ARAM_TITLE",0);
  FUN_1000153b4(&local_5d8,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_1000153b4(&local_5c8,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_DOT_SEPARATOR",0);
  FUN_1004e372c(&local_5c8,uVar2);
  uVar2 = FUN_1004e0150("GENERIC_5V5",0);
  FUN_1004e372c(&local_5c8,uVar2);
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_EVENT_MODE_LABEL",0);
  FUN_1000153b4(&local_5b8,uVar2);
  local_590 = 0;
  local_588 = "playmode_aram";
  local_580 = 0xf;
  FUN_10001549c(local_10b0,"aram");
  std::string::operator=((string *)local_5a8,(string *)local_10b0);
  if (local_1099 < '\0') {
    operator_delete(local_10b0[0]);
  }
  local_5e4 = 9;
  local_57c = 0;
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_TUTORIAL_TITLE",0);
  FUN_1000153b4(&local_9c8,uVar2);
  local_980 = 0;
  local_978 = "PlayMode_Tutorial";
  local_968 = 1;
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_BOT_DIFFICULTY_VERY_EASY_ITLE",0);
  FUN_1000153b4(&local_db8,uVar2);
  FUN_1000153b4(&local_da8,&DAT_101d91650);
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_BOT_DIFFICULTY_EASY_ITLE",0);
  FUN_1000153b4(&local_e60,uVar2);
  FUN_1000153b4(&local_e50,&DAT_101d91650);
  local_e6c = 5;
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_BOT_DIFFICULTY_MEDIUM_TITLE",0);
  FUN_1000153b4(&local_f08,uVar2);
  FUN_1000153b4(&local_ef8,&DAT_101d91650);
  local_f14 = 5;
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_BOT_DIFFICULTY_HARD_TITLE",0);
  FUN_1000153b4(&local_fb0,uVar2);
  FUN_1000153b4(&local_fa0,&DAT_101d91650);
  local_fbc = 6;
  uVar2 = FUN_1004e0150("PLAYMENU_OPTION_BOT_DIFFICULTY_VERY_HARD_TITLE",0);
  FUN_1000153b4(&local_1058,uVar2);
  FUN_1000153b4(&local_1048,&DAT_101d91650);
  local_1064 = 6;
  iVar1 = FUN_10012709c();
  if (iVar1 == 0) {
    puVar3 = auStack_378;
  }
  else {
    puVar3 = auStack_228;
  }
  FUN_100321770(auStack_a0,puVar3);
  FUN_100321770(auStack_a0,auStack_4c8);
  FUN_100321770(auStack_a0,auStack_810);
  FUN_100321770(auStack_d8,auStack_b58);
  FUN_100321770(auStack_110,auStack_c00);
  FUN_100321770(auStack_148,auStack_df8);
  local_6f = 1;
  thunk_FUN_1003218ec(param_1,auStack_a0);
  thunk_FUN_1003218ec(param_1,auStack_d8);
  thunk_FUN_1003218ec(param_1,auStack_110);
  thunk_FUN_1003218ec(param_1,auStack_148);
  thunk_FUN_1003218ec(param_1,auStack_180);
  FUN_100323894(param_1,PTR_s_tutorialLevelGwen_101854b08,0);
  FUN_100323ba8(param_1,PTR_s_tutorialLevelKoshka_101854b00);
  if (local_1011 < '\0') {
    operator_delete(local_1028);
  }
  if (local_1030 != (void *)0x0) {
    operator_delete__(local_1030);
    local_1038 = 0;
    local_1030 = (void *)0x0;
  }
  if (local_1040 != (void *)0x0) {
    operator_delete__(local_1040);
    local_1048 = 0;
    local_1040 = (void *)0x0;
  }
  if (local_1050 != (void *)0x0) {
    operator_delete__(local_1050);
    local_1058 = 0;
    local_1050 = (void *)0x0;
  }
  if (local_1071 < '\0') {
    operator_delete(local_1088);
  }
  if (local_f69 < '\0') {
    operator_delete(local_f80);
  }
  if (local_f88 != (void *)0x0) {
    operator_delete__(local_f88);
    local_f88 = (void *)0x0;
    local_f90 = 0;
  }
  if (local_f98 != (void *)0x0) {
    operator_delete__(local_f98);
    local_fa0 = 0;
    local_f98 = (void *)0x0;
  }
  if (local_fa8 != (void *)0x0) {
    operator_delete__(local_fa8);
    local_fb0 = 0;
    local_fa8 = (void *)0x0;
  }
  if (local_fc9 < '\0') {
    operator_delete(local_fe0);
  }
  if (local_ec1 < '\0') {
    operator_delete(local_ed8);
  }
  if (local_ee0 != (void *)0x0) {
    operator_delete__(local_ee0);
    local_ee0 = (void *)0x0;
    local_ee8 = 0;
  }
  if (local_ef0 != (void *)0x0) {
    operator_delete__(local_ef0);
    local_ef8 = 0;
    local_ef0 = (void *)0x0;
  }
  if (local_f00 != (void *)0x0) {
    operator_delete__(local_f00);
    local_f08 = 0;
    local_f00 = (void *)0x0;
  }
  if (local_f21 < '\0') {
    operator_delete(local_f38);
  }
  if (local_e19 < '\0') {
    operator_delete(local_e30);
  }
  if (local_e38 != (void *)0x0) {
    operator_delete__(local_e38);
    local_e38 = (void *)0x0;
    local_e40 = 0;
  }
  if (local_e48 != (void *)0x0) {
    operator_delete__(local_e48);
    local_e50 = 0;
    local_e48 = (void *)0x0;
  }
  if (local_e58 != (void *)0x0) {
    operator_delete__(local_e58);
    local_e60 = 0;
    local_e58 = (void *)0x0;
  }
  if (local_e79 < '\0') {
    operator_delete(local_e90);
  }
  if (local_d71 < '\0') {
    operator_delete(local_d88);
  }
  if (local_d90 != (void *)0x0) {
    operator_delete__(local_d90);
    local_d90 = (void *)0x0;
    local_d98 = 0;
  }
  if (local_da0 != (void *)0x0) {
    operator_delete__(local_da0);
    local_da8 = 0;
  }
  if (local_db0 != (void *)0x0) {
    operator_delete__(local_db0);
    local_db8 = 0;
  }
  if (local_dd1 < '\0') {
    operator_delete(local_de8);
  }
  if (local_cc9 < '\0') {
    operator_delete(local_ce0);
  }
  if (local_ce8 != (void *)0x0) {
    operator_delete__(local_ce8);
    local_ce8 = (void *)0x0;
    local_cf0 = 0;
  }
  if (local_cf8 != (void *)0x0) {
    operator_delete__(local_cf8);
    local_d00 = 0;
  }
  if (local_d08 != (void *)0x0) {
    operator_delete__(local_d08);
    local_d10 = 0;
  }
  if (local_d29 < '\0') {
    operator_delete(local_d40);
  }
  if (local_c21 < '\0') {
    operator_delete(local_c38);
  }
  if (local_c40 != (void *)0x0) {
    operator_delete__(local_c40);
    local_c40 = (void *)0x0;
    local_c48 = 0;
  }
  if (local_c50 != (void *)0x0) {
    operator_delete__(local_c50);
    local_c58 = 0;
  }
  if (local_c60 != (void *)0x0) {
    operator_delete__(local_c60);
    local_c68 = 0;
  }
  if (local_c81 < '\0') {
    operator_delete(local_c98);
  }
  if (local_b79 < '\0') {
    operator_delete(local_b90);
  }
  if (local_b98 != (void *)0x0) {
    operator_delete__(local_b98);
    local_b98 = (void *)0x0;
    local_ba0 = 0;
  }
  if (local_ba8 != (void *)0x0) {
    operator_delete__(local_ba8);
    local_bb0 = 0;
  }
  if (local_bb8 != (void *)0x0) {
    operator_delete__(local_bb8);
    local_bc0 = 0;
  }
  if (local_bd9 < '\0') {
    operator_delete(local_bf0);
  }
  if (local_ad1 < '\0') {
    operator_delete(local_ae8);
  }
  if (local_af0 != (void *)0x0) {
    operator_delete__(local_af0);
    local_af0 = (void *)0x0;
    local_af8 = 0;
  }
  if (local_b00 != (void *)0x0) {
    operator_delete__(local_b00);
    local_b08 = 0;
  }
  if (local_b10 != (void *)0x0) {
    operator_delete__(local_b10);
    local_b18 = 0;
  }
  if (local_b31 < '\0') {
    operator_delete(local_b48);
  }
  if (local_a29 < '\0') {
    operator_delete(local_a40);
  }
  if (local_a48 != (void *)0x0) {
    operator_delete__(local_a48);
    local_a48 = (void *)0x0;
    local_a50 = 0;
  }
  if (local_a58 != (void *)0x0) {
    operator_delete__(local_a58);
    local_a60 = 0;
  }
  if (local_a68 != (void *)0x0) {
    operator_delete__(local_a68);
    local_a70 = 0;
  }
  if (local_a89 < '\0') {
    operator_delete(local_aa0);
  }
  if (local_981 < '\0') {
    operator_delete(local_998);
  }
  if (local_9a0 != (void *)0x0) {
    operator_delete__(local_9a0);
    local_9a0 = (void *)0x0;
    local_9a8 = 0;
  }
  if (local_9b0 != (void *)0x0) {
    operator_delete__(local_9b0);
    local_9b0 = (void *)0x0;
    local_9b8 = 0;
  }
  if (local_9c0 != (void *)0x0) {
    operator_delete__(local_9c0);
    local_9c8 = 0;
  }
  if (local_9e1 < '\0') {
    operator_delete(local_9f8);
  }
  if (local_8d9 < '\0') {
    operator_delete(local_8f0);
  }
  if (local_8f8 != (void *)0x0) {
    operator_delete__(local_8f8);
    local_8f8 = (void *)0x0;
    local_900 = 0;
  }
  if (local_908 != (void *)0x0) {
    operator_delete__(local_908);
    local_910 = 0;
  }
  if (local_918 != (void *)0x0) {
    operator_delete__(local_918);
    local_920 = 0;
  }
  if (local_939 < '\0') {
    operator_delete(local_950);
  }
  if (local_831 < '\0') {
    operator_delete(local_848);
  }
  if (local_850 != (void *)0x0) {
    operator_delete__(local_850);
    local_850 = (void *)0x0;
    local_858 = 0;
  }
  if (local_860 != (void *)0x0) {
    operator_delete__(local_860);
    local_868 = 0;
  }
  if (local_870 != (void *)0x0) {
    operator_delete__(local_870);
    local_878 = 0;
  }
  if (local_891 < '\0') {
    operator_delete(local_8a8);
  }
  if (local_789 < '\0') {
    operator_delete(local_7a0);
  }
  if (local_7a8 != (void *)0x0) {
    operator_delete__(local_7a8);
    local_7a8 = (void *)0x0;
    local_7b0 = 0;
  }
  if (local_7b8 != (void *)0x0) {
    operator_delete__(local_7b8);
    local_7c0 = 0;
  }
  if (local_7c8 != (void *)0x0) {
    operator_delete__(local_7c8);
    local_7d0 = 0;
  }
  if (local_7e9 < '\0') {
    operator_delete(local_800);
  }
  if (local_6e1 < '\0') {
    operator_delete(local_6f8[0]);
  }
  if (local_700 != (void *)0x0) {
    operator_delete__(local_700);
    local_708 = 0;
  }
  if (local_710 != (void *)0x0) {
    operator_delete__(local_710);
    local_718 = 0;
  }
  if (local_720 != (void *)0x0) {
    operator_delete__(local_720);
    local_728 = 0;
  }
  if (local_741 < '\0') {
    operator_delete(local_758);
  }
  if (local_639 < '\0') {
    operator_delete(local_650[0]);
  }
  if (local_658 != (void *)0x0) {
    operator_delete__(local_658);
    local_660 = 0;
  }
  if (local_668 != (void *)0x0) {
    operator_delete__(local_668);
    local_670 = 0;
  }
  if (local_678 != (void *)0x0) {
    operator_delete__(local_678);
    local_680 = 0;
  }
  if (local_699 < '\0') {
    operator_delete(local_6b0);
  }
  if (local_591 < '\0') {
    operator_delete(local_5a8[0]);
  }
  if (local_5b0 != (void *)0x0) {
    operator_delete__(local_5b0);
    local_5b8 = 0;
  }
  if (local_5c0 != (void *)0x0) {
    operator_delete__(local_5c0);
    local_5c8 = 0;
  }
  if (local_5d0 != (void *)0x0) {
    operator_delete__(local_5d0);
    local_5d8 = 0;
  }
  if (local_5f1 < '\0') {
    operator_delete(local_608);
  }
  if (local_4e9 < '\0') {
    operator_delete(local_500[0]);
  }
  if (local_508 != (void *)0x0) {
    operator_delete__(local_508);
    local_510 = 0;
  }
  if (local_518 != (void *)0x0) {
    operator_delete__(local_518);
    local_520 = 0;
  }
  if (local_528 != (void *)0x0) {
    operator_delete__(local_528);
    local_530 = 0;
  }
  if (local_549 < '\0') {
    operator_delete(local_560);
  }
  if (local_441 < '\0') {
    operator_delete(local_458[0]);
  }
  if (local_460 != (void *)0x0) {
    operator_delete__(local_460);
    local_468 = 0;
  }
  if (local_470 != (void *)0x0) {
    operator_delete__(local_470);
    local_478 = 0;
  }
  if (local_480 != (void *)0x0) {
    operator_delete__(local_480);
    local_488 = 0;
  }
  if (local_4a1 < '\0') {
    operator_delete(local_4b8);
  }
  if (local_399 < '\0') {
    operator_delete(local_3b0[0]);
  }
  if (local_3b8 != (void *)0x0) {
    operator_delete__(local_3b8);
    local_3b8 = (void *)0x0;
    local_3c0 = 0;
  }
  if (local_3c8 != (void *)0x0) {
    operator_delete__(local_3c8);
    local_3d0 = 0;
  }
  if (local_3d8 != (void *)0x0) {
    operator_delete__(local_3d8);
    local_3e0 = 0;
  }
  if (local_3f9 < '\0') {
    operator_delete(local_410);
  }
  if (local_2f1 < '\0') {
    operator_delete(local_308[0]);
  }
  if (local_310 != (void *)0x0) {
    operator_delete__(local_310);
    local_310 = (void *)0x0;
    local_318 = 0;
  }
  if (local_320 != (void *)0x0) {
    operator_delete__(local_320);
    local_328 = 0;
  }
  if (local_330 != (void *)0x0) {
    operator_delete__(local_330);
    local_338 = 0;
  }
  if (local_351 < '\0') {
    operator_delete(local_368);
  }
  if (local_249 < '\0') {
    operator_delete(local_260[0]);
  }
  if (local_268 != (void *)0x0) {
    operator_delete__(local_268);
    local_268 = (void *)0x0;
    local_270 = 0;
  }
  if (local_278 != (void *)0x0) {
    operator_delete__(local_278);
    local_280 = 0;
  }
  if (local_288 != (void *)0x0) {
    operator_delete__(local_288);
    local_290 = 0;
  }
  if (local_2a9 < '\0') {
    operator_delete(local_2c0);
  }
  if (local_1a1 < '\0') {
    operator_delete(local_1b8);
  }
  if (local_1c0 != (void *)0x0) {
    operator_delete__(local_1c0);
    local_1c0 = (void *)0x0;
    local_1c8 = 0;
  }
  if (local_1d0 != (void *)0x0) {
    operator_delete__(local_1d0);
    local_1d8 = 0;
  }
  if (local_1e0 != (void *)0x0) {
    operator_delete__(local_1e0);
    local_1e8 = 0;
  }
  if (local_201 < '\0') {
    operator_delete(local_218);
  }
  if (local_158 != (void *)0x0) {
    operator_delete__(local_158);
    local_158 = (void *)0x0;
    local_160 = 0;
  }
  FUN_100202cb8(auStack_178,1);
  if (local_120 != (void *)0x0) {
    operator_delete__(local_120);
    local_120 = (void *)0x0;
    local_128 = 0;
  }
  FUN_100202cb8(auStack_140,1);
  if (local_e8 != (void *)0x0) {
    operator_delete__(local_e8);
    local_f0 = 0;
    local_e8 = (void *)0x0;
  }
  FUN_100202cb8(auStack_108,1);
  if (local_b0 != (void *)0x0) {
    operator_delete__(local_b0);
    local_b8 = 0;
    local_b0 = (void *)0x0;
  }
  FUN_100202cb8(auStack_d0,1);
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  FUN_100202cb8(auStack_98,1);
  return;
}
