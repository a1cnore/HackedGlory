// ui/main_menu.c — 27 UI functions (main_menu)
// Extracted by extract_ui.py from structured/functions/
#include "GameKindred.h"



/*
 * FUN_1001867fc
 * VA: 0x1001867fc | Source: functions/10018.c:5116
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 4, Vis masks: 2
 * Callees: FUN_10001554c, FUN_1001816d4, FUN_100181bd0, FUN_100186b68, FUN_1001afd98, FUN_1001b0198, FUN_1001b495c, FUN_1004e0150 (+10 more)
 */
void FUN_1001867fc(code *param_1)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  code *local_80;
  code *pcStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  pcVar1 = param_1 + 0xa8;
  (**(code **)(*(long *)param_1 + 0x78))(param_1,pcVar1,1);
  pcVar2 = param_1 + 0x130;
  FUN_100642bd8(pcVar1,pcVar2,1);
  FUN_100642bd8(pcVar2,param_1 + 0x2d0,1);
  pcVar3 = param_1 + 0x808;
  FUN_100642bd8(pcVar1,pcVar3,1);
  pcVar1 = param_1 + 0x21c0;
  (**(code **)(*(long *)param_1 + 0x78))(param_1,pcVar1,1);
  FUN_100642bd8(pcVar1,param_1 + 0x2248,1);
  FUN_100642bd8(pcVar1,param_1 + 0x2378,1);
  pcVar1 = param_1 + 0x28f0;
  (**(code **)(*(long *)param_1 + 0x78))(param_1,pcVar1,1);
  FUN_100642bd8(pcVar1,param_1 + 0x2978,1);
  pcVar4 = param_1 + 0x2aa8;
  FUN_100642bd8(pcVar1,pcVar4,1);
  uVar6 = FUN_1004e0150("MENU_CHAT_ENTER_YOUR_CHAT",0);
  FUN_1001b0198(pcVar3,uVar6,0);
  local_58 = DAT_101dbd4ac;
  local_80 = thunk_FUN_1001886fc;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  pcStack_78 = param_1;
  FUN_10001554c(param_1 + 0x810,&local_80);
  local_58 = DAT_101dbd4b0;
  local_80 = thunk_FUN_100188b18;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  pcStack_78 = param_1;
  FUN_10001554c(param_1 + 0x810,&local_80);
  uVar5 = DAT_101d91884;
  local_58 = DAT_101d91884;
  local_80 = thunk_FUN_100188c14;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  pcStack_78 = param_1;
  FUN_10001554c(param_1 + 0xc10,&local_80);
  param_1[0x21ba] = (code)0x0;
  FUN_100654488(pcVar2,1);
  FUN_100530adc(param_1 + 0x2d0,0,1);
  *(uint *)(param_1 + 0x2244) = *(uint *)(param_1 + 0x2244) & 0xfffffffb;
  uVar6 = FUN_1004e0150("MENU_PARTY_CHAT_CONNECTING",0);
  FUN_1006513c0(param_1 + 0x2248,uVar6);
  *(uint *)(param_1 + 0x2974) = *(uint *)(param_1 + 0x2974) & 0xfffffffb;
  uVar6 = FUN_1004e0150("MENU_PARTY_CHAT_ERROR_CONNECTING",0);
  FUN_1006513c0(param_1 + 0x2978,uVar6);
  uVar6 = FUN_1004e0150("MENU_PARTY_RECONNECT_BUTTON",0);
  FUN_1001816d4(0,DAT_101854908,DAT_101854908,pcVar4,0,uVar6,&DAT_10115a168,&DAT_101dc1cb8,0);
  FUN_100651594(param_1 + 0x31c0,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_10115a168);
  local_80 = (code *)CONCAT44(local_80._4_4_,0xff404040);
  FUN_100181bd0(0x3f800000,pcVar4,&local_80);
  local_58 = uVar5;
  local_80 = FUN_100186b68;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  pcStack_78 = param_1;
  FUN_10001554c(param_1 + 0x2ab0,&local_80);
  FUN_1001b495c(0,pcVar4);
  FUN_1001afd98(pcVar3,&DAT_101d91650,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0x101);
  pcStack_78 = thunk_FUN_100186ba4;
  local_80 = param_1;
  FUN_100643618(0x3f000000,&local_80,0,1);
  return;
}



/*
 * thunk_FUN_1001886fc
 * VA: 0xthunk_1001886fc | Source: functions/10018.c:5204
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 4
 * Callees: FUN_1000153b4, FUN_100046198, FUN_1001861f4, FUN_100187144, FUN_10018762c, FUN_1001b0198, FUN_1004d3350, FUN_1004e0150 (+11 more)
 * Callers: FUN_1001867fc
 */
void thunk_FUN_1001886fc(long param_1)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 ****ppppuVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  long *plVar13;
  long *plVar14;
  undefined1 auStack_180 [8];
  void *pvStack_178;
  undefined1 auStack_170 [8];
  void *pvStack_168;
  undefined8 ***pppuStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined1 auStack_148 [8];
  void *pvStack_140;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_101444218;
  if ((*(long **)(param_1 + 0x4060) == (long *)0x0) ||
     (iVar5 = (**(code **)(**(long **)(param_1 + 0x4060) + 0x38))(), iVar5 == 0))
  goto LAB_100188a54;
  plVar13 = (long *)(param_1 + 0x4078);
  bVar4 = *(byte *)(param_1 + 0x408f);
  uVar10 = (ulong)bVar4;
  sVar1 = *(size_t *)(param_1 + 0x4080);
  if (-1 < (char)bVar4) {
    sVar1 = uVar10;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    plVar14 = (long *)*plVar13;
    if (-1 < (char)bVar4) {
      plVar14 = plVar13;
    }
    pbVar12 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar12 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar4 < '\0') {
      if ((sVar1 == 0) || (iVar5 = _memcmp(plVar14,pbVar12,sVar1), iVar5 == 0)) goto LAB_100188a54;
    }
    else {
      if (sVar1 == 0) goto LAB_100188a54;
      if ((uint)*pbVar12 == ((uint)(long *)*plVar13 & 0xff)) {
        pbVar11 = (byte *)(param_1 + 0x4079);
        do {
          uVar10 = uVar10 - 1;
          pbVar12 = pbVar12 + 1;
          if (uVar10 == 0) goto LAB_100188a54;
          bVar4 = *pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (bVar4 == *pbVar12);
      }
    }
  }
  pppuStack_160 = (undefined8 ****)0x0;
  uStack_158 = 0;
  lStack_150 = 0;
  uVar7 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0xb78) & 1) * 0x130 + 0x9e8);
  thunk_FUN_1004e439c(auStack_170,uVar7);
  iVar5 = FUN_1004e3634(auStack_170);
  if (iVar5 != 0) {
    iVar5 = FUN_1004e3648(auStack_170,0);
    if (iVar5 == 0x2f) {
      FUN_1004e3120(auStack_148,"/");
      FUN_1004e3120(auStack_180,"\\");
      FUN_1004e3bc4(auStack_170,0,auStack_148,auStack_180);
      if (pvStack_178 != (void *)0x0) {
        operator_delete__(pvStack_178);
      }
      if (pvStack_140 != (void *)0x0) {
        operator_delete__(pvStack_140);
      }
    }
    uVar6 = FUN_1004e3634(auStack_170);
    if (*(uint *)(param_1 + 0x40d0) < uVar6) {
      FUN_1004e4154(auStack_148,auStack_170,0);
      FUN_1000153b4(auStack_170,auStack_148);
      if (pvStack_140 != (void *)0x0) {
        operator_delete__(pvStack_140);
      }
    }
    uVar10 = FUN_1001861f4(auStack_170);
    if ((uVar10 & 1) == 0) {
      FUN_1004e357c(auStack_170,&pppuStack_160);
      plVar14 = plVar13;
      if (*(char *)(param_1 + 0x408f) < '\0') {
        plVar14 = (long *)*plVar13;
      }
      ppppuVar3 = (undefined8 ****)pppuStack_160;
      if (-1 < lStack_150) {
        ppppuVar3 = &pppuStack_160;
      }
      (**(code **)(**(long **)(param_1 + 0x4060) + 0x70))
                (*(long **)(param_1 + 0x4060),plVar14,ppppuVar3);
      plVar14 = *(long **)(param_1 + 0x40b0);
      if (plVar14 != (long *)0x0) {
        uVar7 = FUN_1004e0150("MENU_CHAT_PLAYER_LABEL_YOU",0);
        if (*(char *)(param_1 + 0x408f) < '\0') {
          plVar13 = (long *)*plVar13;
        }
        ppppuVar3 = (undefined8 ****)pppuStack_160;
        if (-1 < lStack_150) {
          ppppuVar3 = &pppuStack_160;
        }
        uVar10 = (**(code **)(*plVar14 + 0x20))(plVar14,uVar7,plVar13,ppppuVar3);
        if ((uVar10 & 1) != 0) goto LAB_100188a38;
      }
      auStack_148[0] = 0;
      if ((*(long **)(param_1 + 0x4060) != (long *)0x0) &&
         (iVar5 = (**(code **)(**(long **)(param_1 + 0x4060) + 0x40))(), iVar5 == 2)) {
        lVar8 = FUN_1004f1a74(0);
        FUN_1004d3350((double)lVar8,auStack_148,0x100);
      }
      uVar7 = FUN_1004e0150("MENU_CHAT_PLAYER_LABEL_YOU",0);
      puVar9 = auStack_170;
    }
    else {
      if (((DAT_101e3d5c0 & 1) == 0) && (iVar5 = ___cxa_guard_acquire(&DAT_101e3d5c0), iVar5 != 0))
      {
        FUN_1004e3340(&DAT_101e3d5b0,&DAT_101157f90);
        ___cxa_atexit(FUN_100046198,&DAT_101e3d5b0,0x100000000);
        ___cxa_guard_release(&DAT_101e3d5c0);
      }
      auStack_148[0] = 0;
      if ((*(long **)(param_1 + 0x4060) != (long *)0x0) &&
         (iVar5 = (**(code **)(**(long **)(param_1 + 0x4060) + 0x40))(), iVar5 == 2)) {
        lVar8 = FUN_1004f1a74(0);
        FUN_1004d3350((double)lVar8,auStack_148,0x100);
      }
      uVar7 = FUN_1004e0150("MENU_CHAT_PLAYER_LABEL_YOU",0);
      puVar9 = &DAT_101e3d5b0;
    }
    FUN_100187144(param_1,uVar7,puVar9,auStack_148,1,0);
  }
LAB_100188a38:
  if (pvStack_168 != (void *)0x0) {
    operator_delete__(pvStack_168);
  }
  if (lStack_150 < 0) {
    operator_delete(pppuStack_160);
  }
LAB_100188a54:
  uVar7 = FUN_1004e0150("MENU_CHAT_ENTER_YOUR_CHAT",0);
  FUN_1001b0198(param_1 + 0x808,uVar7,0);
  *(undefined1 *)(param_1 + 0x40da) = 0;
  FUN_100530ad0(0,0,param_1 + 0x2d0);
  FUN_10018762c(param_1);
  if (*(long *)PTR____stack_chk_guard_101444218 != lStack_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/*
 * FUN_1001f4228
 * VA: 0x1001f4228 | Source: functions/1001f.c:4235
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 4
 * Callees: FUN_1000153b4, FUN_10012ee60, FUN_100134104, FUN_10015bcf8, FUN_1001f46ac, FUN_1002a8458, FUN_1002a84d8, FUN_10031d43c (+8 more)
 * Callers: FUN_1001f4160, thunk_FUN_1001f4160, thunk_FUN_1001f4228
 */
void FUN_1001f4228(long param_1)

{
  undefined8 ***pppuVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_98 [8];
  void *local_90;
  undefined1 auStack_88 [8];
  void *local_80;
  undefined1 auStack_78 [8];
  void *local_70;
  undefined8 **local_68;
  undefined8 uStack_60;
  long local_58;
  uint local_50 [2];
  long local_48;
  
  lVar3 = FUN_100134104();
  if ((*(char *)(lVar3 + 10) != '\0') && (lVar3 = FUN_10031d43c(), lVar3 != 0)) {
    uVar4 = FUN_10031d43c();
    FUN_10031e024(local_50,uVar4,0);
    *(bool *)(param_1 + 0x28) = local_50[0] != 0;
    FUN_1001f46ac(param_1);
    if (*(char *)(param_1 + 0x28) != '\0') {
      local_68 = (undefined8 ***)0x0;
      uStack_60 = 0;
      local_58 = 0;
      uVar6 = (ulong)local_50[0];
      if (local_50[0] == 0) {
        FUN_10012ee60();
      }
      else {
        lVar3 = 0;
        uVar8 = 0;
        lVar7 = 0;
        uVar10 = 0;
        do {
          lVar5 = local_48 + lVar3;
          uVar9 = *(ulong *)(lVar5 + 0x88);
          if (uVar10 < uVar9) {
            if (*(char *)(lVar5 + 0x47) < '\0') {
              if (*(long *)(local_48 + lVar3 + 0x38) != 0) goto LAB_1001f42cc;
            }
            else if (*(char *)(lVar5 + 0x47) != '\0') {
LAB_1001f42cc:
              std::string::operator=((string *)&local_68,(string *)(lVar5 + 0x30));
            }
            lVar7 = *(long *)(local_48 + lVar3 + 0x90);
            lVar5 = FUN_1004f1a74(0);
            lVar7 = lVar7 - lVar5;
            uVar6 = (ulong)local_50[0];
            uVar10 = uVar9;
          }
          uVar8 = uVar8 + 1;
          lVar3 = lVar3 + 0x98;
        } while (uVar8 < uVar6);
        uVar6 = FUN_10012ee60();
        if (uVar6 < uVar10) {
          FUN_1004e313c(auStack_78);
          pppuVar1 = (undefined8 ***)local_68;
          if (-1 < local_58) {
            pppuVar1 = &local_68;
          }
          uVar4 = FUN_1004e0150(pppuVar1,0);
          thunk_FUN_1004e439c(auStack_88,uVar4);
          iVar2 = FUN_1004e3624(auStack_88);
          if (iVar2 == 0) {
            uVar4 = FUN_1004e0150("MENU_HOME_PANEL_NEW_EVENT_BODY",0);
            FUN_1000153b4(auStack_78,uVar4);
            FUN_1004e3120(auStack_98,"[EVENTNAME]");
            FUN_1004e3bc4(auStack_78,0,auStack_98,auStack_88);
            if (local_90 != (void *)0x0) {
              operator_delete__(local_90);
            }
          }
          else {
            uVar4 = FUN_1004e0150("MENU_HOME_PANEL_NEW_EVENT_BODY_GENERIC",0);
            FUN_1000153b4(auStack_78,uVar4);
          }
          FUN_1002a84d8(*(undefined8 *)(param_1 + 8),auStack_78);
          if (0 < lVar7) {
            FUN_1002a8458(*(undefined8 *)(param_1 + 8),lVar7);
          }
          if (local_80 != (void *)0x0) {
            operator_delete__(local_80);
          }
          if (local_70 != (void *)0x0) {
            operator_delete__(local_70);
          }
        }
      }
      if (local_58 < 0) {
        operator_delete(local_68);
      }
    }
    FUN_10015bcf8(local_50,1);
  }
  return;
}



/*
 * FUN_1001f4444
 * VA: 0x1001f4444 | Source: functions/1001f.c:4346
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 4
 * Callees: FUN_10001549c, FUN_10006d330, FUN_10012eb90, FUN_100134104, FUN_100135c64, FUN_100136d8c, FUN_1001f46ac, FUN_1002a8378 (+6 more)
 * Callers: FUN_1001f4160, thunk_FUN_1001f4160, thunk_FUN_1001f4444
 */
void FUN_1001f4444(long param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auStack_140 [8];
  void *local_138;
  undefined1 auStack_130 [8];
  void *local_128;
  long local_120;
  void *local_118;
  void *local_110;
  char local_101;
  ulong local_100;
  long local_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  lVar3 = FUN_100134104();
  if (*(char *)(lVar3 + 10) == '\0') {
    local_100 = 0;
    local_f8 = 0;
    FUN_100136d8c(&local_100);
    FUN_10006d330(auStack_f0,"%s_%s");
    FUN_10001549c(&local_118,auStack_f0);
    lVar3 = FUN_10012eb90(&local_118);
    if (local_101 < '\0') {
      operator_delete(local_118);
    }
    if ((int)local_100 != 0) {
      uVar7 = local_f8 + 0x18;
      do {
        uVar1 = *(ulong *)(uVar7 + 8);
        if (-1 < (char)*(byte *)(uVar7 + 0x17)) {
          uVar1 = (ulong)*(byte *)(uVar7 + 0x17);
        }
        if (((uVar1 == 0x1b) &&
            (iVar2 = std::string::compare(uVar7,0,(char *)0xffffffffffffffff,0x1013e44e0),
            iVar2 == 0)) && (*(undefined1 *)(param_1 + 0x28) = 1, *(int *)(uVar7 - 0x10) != 0)) {
          local_120 = -1;
          lVar6 = *(long *)(uVar7 - 8);
          plVar4 = (long *)(lVar6 + 0x438);
          if (*(char *)(lVar6 + 0x44f) < '\0') {
            if (*(long *)(lVar6 + 0x440) != 0) {
              plVar4 = (long *)*plVar4;
              goto LAB_1001f4598;
            }
          }
          else if (*(char *)(lVar6 + 0x44f) != '\0') {
LAB_1001f4598:
            FUN_1004d2864(plVar4,"%lld");
          }
          if (lVar3 < local_120) {
            uVar5 = FUN_1004e0150("MENU_HOME_PANEL_NEW_EVENT_BODY_GENERIC",0);
            thunk_FUN_1004e439c(&local_118,uVar5);
            FUN_1004e3120(auStack_130,"[EVENTNAME]");
            FUN_1004e3120(auStack_140,"The Summer Pool Party");
            FUN_1004e3bc4(&local_118,0,auStack_130,auStack_140);
            if (local_138 != (void *)0x0) {
              operator_delete__(local_138);
            }
            if (local_128 != (void *)0x0) {
              operator_delete__(local_128);
            }
            uVar8 = *(undefined8 *)(param_1 + 8);
            uVar5 = FUN_1004e0150("MENU_HOME_PANEL_NEW_EVENT_TITLE",0);
            FUN_1002a8378(uVar8,uVar5);
            FUN_1002a84d8(*(undefined8 *)(param_1 + 8),&local_118);
            if (local_110 != (void *)0x0) {
              operator_delete__(local_110);
            }
          }
        }
        lVar6 = uVar7 + 0x60;
        uVar7 = uVar7 + 0x78;
      } while (lVar6 != local_f8 + (local_100 & 0xffffffff) * 0x78);
    }
    FUN_1001f46ac(param_1);
    FUN_100135c64(&local_100,1);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/*
 * FUN_1001fd570
 * main menu constructor — creates panels, registers with sidebar
 * VA: 0x1001fd570 | Source: functions/1001f.c:14010
 * Dylib: Layer 6
 * Layout: +0x70=sidebar controller, +0xb0=HOME panel ref (registered), +0xb8=BAG panel ref (registered), +0xc0=ACADEMY panel ref (CE-gated, index 2), +0xc8=PARTY panel ref (index 3), +0xd0=SOCIAL panel ref (CE-gated, index 4), +0xe0=HOME panel object, +0xe8=MARKET panel object (size 0x2cf68, contains PARTY at +0x2c50), +0xf0=small SOCIAL panel object (CE-gated, created by thunk_FUN_10020cfb8), +0x100=ACADEMY panel object (CE-gated, size 0x9ca0), +0x108=BAG panel wrapper (size 0x60, +0x48=tab array, +0x8=container)
 * Notes: Root of entire sidebar/panel hierarchy. DAT_101dc2920 = root parent, *(parent+0x80) = menuObj.
 * CE-gate: YES (4x) | Guest-gate: NO
 * Callees: FUN_10001554c, FUN_100031f58, FUN_1000be5e4, FUN_1000fd5d8, FUN_1000fd5e8, FUN_100126b6c, FUN_1001311d4, FUN_100131560 (+61 more)
 */
code * FUN_1001fd570(code *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  code *local_60;
  code *pcStack_58;
  code *local_50;
  code *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  *(undefined ***)param_1 = &PTR____cxa_pure_virtual_10146ef88;
  operator_new(0x8c0);
  lVar4 = thunk_FUN_1002c4778();
  *(long *)(param_1 + 8) = lVar4;
  *(code **)(lVar4 + 0xd8) = param_1;
  pcVar8 = param_1 + 0x10;
  *(undefined ***)pcVar8 = &PTR_FUN_10146c930;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_10016b764(param_1 + 0x28);
  FUN_10014f4a0(param_1 + 0x40);
  FUN_1004f0a20(param_1 + 0x58);
  *(undefined ***)param_1 = &PTR_FUN_10146eb18;
  *(undefined ***)pcVar8 = &PTR_FUN_10146eb78;
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_10146eb90;
  *(undefined ***)(param_1 + 0x40) = &PTR_FUN_10146ebc0;
  *(undefined ***)(param_1 + 0x58) = &PTR_FUN_10146ef58;
  pcVar1 = param_1 + 0x70;
  FUN_1001fc960(pcVar1);
  FUN_1001fd410(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  param_1[0x130] = (code)0x1;
  *(undefined4 *)(param_1 + 0x131) = 0;
  *(undefined2 *)(param_1 + 0x135) = 0;
  pcStack_58 = thunk_FUN_1001fe0d4;
  local_60 = param_1;
  FUN_100643618(0,&local_60,0,1);
  FUN_1002c5038(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x78));
  FUN_1002c5088(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0xa8));
  FUN_1001fc9bc(pcVar1,param_1 + 0xa0);
  FUN_1001dac1c(pcVar8,"HOME",param_1,thunk_FUN_1001fedec);
  FUN_1001dac1c(pcVar8,"PARTY",param_1,FUN_1001ff8e4);
  FUN_1001dac1c(pcVar8,"MARKET",param_1,FUN_1001ff8fc);
  FUN_1001dac1c(pcVar8,"HEROES",param_1,thunk_FUN_1001feee8);
  FUN_1001dac1c(pcVar8,"ACADEMY",param_1,thunk_FUN_1001fef3c);
  FUN_1001dac1c(pcVar8,"NEWS",param_1,thunk_FUN_1001fefac);
  FUN_1001dac1c(pcVar8,"FRIENDS",param_1,FUN_1001ff920);
  FUN_1001dac1c(pcVar8,"PEOPLE",param_1,thunk_FUN_1001ff088);
  FUN_1001dac1c(pcVar8,"PRACTICE",param_1,FUN_1001ff93c);
  FUN_1001dac1c(pcVar8,"PURCHASESKU",param_1,FUN_1001ff954);
  FUN_1001dac1c(pcVar8,"PROFILE",param_1,FUN_1001ff96c);
  local_38 = DAT_101d918ac;
  local_60 = thunk_FUN_1001fe4cc;
  local_48 = (code *)0x0;
  uStack_40 = 0;
  local_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(*(long *)(param_1 + 8) + 8,&local_60);
  local_38 = DAT_101d918a8;
  local_60 = thunk_FUN_1001fe744;
  local_48 = (code *)0x0;
  uStack_40 = 0;
  local_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(*(long *)(param_1 + 8) + 8,&local_60);
  local_38 = DAT_101d23684;
  local_60 = thunk_FUN_1001fe5c8;
  local_48 = (code *)0x0;
  uStack_40 = 0;
  local_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(*(long *)(param_1 + 8) + 8,&local_60);
  lVar4 = FUN_10031ffe0();
  pcStack_58 = (code *)0x0;
  local_48 = thunk_FUN_1001ff26c;
  local_60 = param_1;
  local_50 = param_1;
  FUN_1000be5e4(lVar4 + 0x30,&local_60);
  lVar4 = FUN_10031ffe0();
  pcStack_58 = (code *)0x0;
  local_48 = FUN_1001ff988;
  local_60 = param_1;
  local_50 = param_1;
  FUN_1000be5e4(lVar4 + 0x40,&local_60);
  lVar4 = FUN_10031ffe0();
  pcStack_58 = (code *)0x0;
  local_48 = thunk_FUN_1001ff2c4;
  local_60 = param_1;
  local_50 = param_1;
  FUN_1000be5e4(lVar4 + 0x50,&local_60);
  uVar5 = FUN_1000fd5e8();
  pcStack_58 = (code *)0x0;
  local_48 = thunk_FUN_1001febf8;
  local_60 = param_1;
  local_50 = param_1;
  FUN_1000be5e4(uVar5,&local_60);
  lVar4 = FUN_10032a0bc();
  pcStack_58 = (code *)0x0;
  local_48 = thunk_FUN_1001febf8;
  local_60 = param_1;
  local_50 = param_1;
  FUN_1000be5e4(lVar4 + 0x30,&local_60);
  FUN_100326da8();
  FUN_10031a918();
  FUN_10031d448();
  operator_new(0x38);
  uVar5 = thunk_FUN_1001f3424();
  *(undefined8 *)(param_1 + 0xe0) = uVar5;
  operator_new(0x2cf68);
  uVar5 = thunk_FUN_100248d18();
  *(undefined8 *)(param_1 + 0xe8) = uVar5;
  uVar6 = FUN_100131560();
  if ((uVar6 & 1) == 0) {
    operator_new(0x9ca0);
    uVar5 = thunk_FUN_100242e6c();
    *(undefined8 *)(param_1 + 0x100) = uVar5;
  }
  operator_new(0x60);
  lVar7 = thunk_FUN_1001f59e8();
  *(long *)(param_1 + 0x108) = lVar7;
  lVar4 = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    lVar4 = *(long *)(param_1 + 0xe0) + 0x10;
  }
  *(long *)(param_1 + 0xb0) = lVar4;
  *(long *)(param_1 + 0xb8) = lVar7 + 0x28;
  uVar6 = FUN_100131560();
  if ((uVar6 & 1) == 0) {
    lVar4 = 0;
    if (*(long *)(param_1 + 0x100) != 0) {
      lVar4 = *(long *)(param_1 + 0x100) + 0x2c88;
    }
    *(long *)(param_1 + 0xc0) = lVar4;
  }
  lVar4 = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    lVar4 = *(long *)(param_1 + 0xe0) + 0x10;
  }
  FUN_1001fc9c4(pcVar1,lVar4,0);
  lVar4 = 0;
  if (*(long *)(param_1 + 0x108) != 0) {
    lVar4 = *(long *)(param_1 + 0x108) + 0x28;
  }
  FUN_1001fc9c4(pcVar1,lVar4,1);
  uVar6 = FUN_100131560();
  if ((uVar6 & 1) == 0) {
    lVar4 = 0;
    if (*(long *)(param_1 + 0x100) != 0) {
      lVar4 = *(long *)(param_1 + 0x100) + 0x2c88;
    }
    FUN_1001fc9c4(pcVar1,lVar4,2);
  }
  iVar3 = FUN_100126b6c();
  if (iVar3 == 0) {
    operator_new(0x137218);
    lVar4 = thunk_FUN_100266a50();
    *(long *)(param_1 + 0xf8) = lVar4;
    lVar4 = lVar4 + 0x2c48;
    *(long *)(param_1 + 0xd0) = lVar4;
    uVar5 = 5;
  }
  else {
    operator_new(0x160);
    uVar5 = thunk_FUN_10020cfb8();
    *(undefined8 *)(param_1 + 0xf0) = uVar5;
    uVar6 = FUN_100131560();
    if ((uVar6 & 1) != 0) goto LAB_1001fda40;
    lVar4 = 0;
    if (*(long *)(param_1 + 0xf0) != 0) {
      lVar4 = *(long *)(param_1 + 0xf0) + 0x10;
    }
    *(long *)(param_1 + 0xd0) = lVar4;
    uVar5 = 4;
  }
  FUN_1001fc9c4(pcVar1,lVar4,uVar5);
LAB_1001fda40:
  uVar2 = DAT_101d2365c;
  local_38 = DAT_101d2365c;
  local_60 = FUN_1001fdb84;
  local_48 = (code *)0x0;
  uStack_40 = 0;
  local_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(*(long *)(param_1 + 8) + 8,&local_60);
  lVar4 = FUN_10016c2f0();
  FUN_1001fdbb8(param_1,0 < *(int *)(lVar4 + 0x38));
  lVar4 = FUN_1002c5224(*(undefined8 *)(param_1 + 8));
  local_38 = uVar2;
  local_60 = FUN_1001fdb84;
  local_48 = (code *)0x0;
  uStack_40 = 0;
  local_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(lVar4 + 8,&local_60);
  lVar4 = FUN_10030df60();
  local_60 = (code *)0x0;
  local_48 = FUN_1001ffa48;
  pcStack_58 = param_1;
  local_50 = param_1;
  FUN_1001ff9c8(lVar4 + 0x18,&local_60);
  lVar4 = FUN_10032523c();
  local_60 = (code *)0x0;
  local_48 = thunk_FUN_1001ff430;
  pcStack_58 = param_1;
  local_50 = param_1;
  FUN_100031f58(lVar4 + 0x40,&local_60);
  uVar5 = FUN_1000fd5d8();
  pcStack_58 = (code *)0x0;
  local_48 = thunk_FUN_1001ff5c0;
  local_60 = param_1;
  local_50 = param_1;
  FUN_1000be5e4(uVar5,&local_60);
  local_38 = DAT_101d237a0;
  local_60 = FUN_1001fdc74;
  local_48 = (code *)0x0;
  uStack_40 = 0;
  local_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(*(long *)(param_1 + 8) + 8,&local_60);
  iVar3 = FUN_1001311d4();
  if (iVar3 != 0) {
    FUN_1001fdcb4(param_1,0);
    FUN_1002a6d84(*(undefined8 *)(*(long *)(param_1 + 0xe0) + 8));
  }
  return param_1;
}



/*
 * thunk_FUN_1001fd570
 * VA: 0xthunk_1001fd570 | Source: functions/1001f.c:14445
 * CE-gate: YES (4x) | Guest-gate: NO
 * Callees: FUN_10001554c, FUN_100031f58, FUN_1000be5e4, FUN_1000fd5d8, FUN_1000fd5e8, FUN_100126b6c, FUN_1001311d4, FUN_100131560 (+61 more)
 * Callers: FUN_10002f340, thunk_FUN_10002f340
 */
code * thunk_FUN_1001fd570(code *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  code *pcStack_60;
  code *pcStack_58;
  code *pcStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  *(undefined ***)param_1 = &PTR____cxa_pure_virtual_10146ef88;
  operator_new(0x8c0);
  lVar4 = thunk_FUN_1002c4778();
  *(long *)(param_1 + 8) = lVar4;
  *(code **)(lVar4 + 0xd8) = param_1;
  pcVar8 = param_1 + 0x10;
  *(undefined ***)pcVar8 = &PTR_FUN_10146c930;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_10016b764(param_1 + 0x28);
  FUN_10014f4a0(param_1 + 0x40);
  FUN_1004f0a20(param_1 + 0x58);
  *(undefined ***)param_1 = &PTR_FUN_10146eb18;
  *(undefined ***)pcVar8 = &PTR_FUN_10146eb78;
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_10146eb90;
  *(undefined ***)(param_1 + 0x40) = &PTR_FUN_10146ebc0;
  *(undefined ***)(param_1 + 0x58) = &PTR_FUN_10146ef58;
  pcVar1 = param_1 + 0x70;
  FUN_1001fc960(pcVar1);
  FUN_1001fd410(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  param_1[0x130] = (code)0x1;
  *(undefined4 *)(param_1 + 0x131) = 0;
  *(undefined2 *)(param_1 + 0x135) = 0;
  pcStack_58 = thunk_FUN_1001fe0d4;
  pcStack_60 = param_1;
  FUN_100643618(0,&pcStack_60,0,1);
  FUN_1002c5038(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x78));
  FUN_1002c5088(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0xa8));
  FUN_1001fc9bc(pcVar1,param_1 + 0xa0);
  FUN_1001dac1c(pcVar8,"HOME",param_1,thunk_FUN_1001fedec);
  FUN_1001dac1c(pcVar8,"PARTY",param_1,FUN_1001ff8e4);
  FUN_1001dac1c(pcVar8,"MARKET",param_1,FUN_1001ff8fc);
  FUN_1001dac1c(pcVar8,"HEROES",param_1,thunk_FUN_1001feee8);
  FUN_1001dac1c(pcVar8,"ACADEMY",param_1,thunk_FUN_1001fef3c);
  FUN_1001dac1c(pcVar8,"NEWS",param_1,thunk_FUN_1001fefac);
  FUN_1001dac1c(pcVar8,"FRIENDS",param_1,FUN_1001ff920);
  FUN_1001dac1c(pcVar8,"PEOPLE",param_1,thunk_FUN_1001ff088);
  FUN_1001dac1c(pcVar8,"PRACTICE",param_1,FUN_1001ff93c);
  FUN_1001dac1c(pcVar8,"PURCHASESKU",param_1,FUN_1001ff954);
  FUN_1001dac1c(pcVar8,"PROFILE",param_1,FUN_1001ff96c);
  uStack_38 = DAT_101d918ac;
  pcStack_60 = thunk_FUN_1001fe4cc;
  pcStack_48 = (code *)0x0;
  uStack_40 = 0;
  pcStack_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(*(long *)(param_1 + 8) + 8,&pcStack_60);
  uStack_38 = DAT_101d918a8;
  pcStack_60 = thunk_FUN_1001fe744;
  pcStack_48 = (code *)0x0;
  uStack_40 = 0;
  pcStack_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(*(long *)(param_1 + 8) + 8,&pcStack_60);
  uStack_38 = DAT_101d23684;
  pcStack_60 = thunk_FUN_1001fe5c8;
  pcStack_48 = (code *)0x0;
  uStack_40 = 0;
  pcStack_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(*(long *)(param_1 + 8) + 8,&pcStack_60);
  lVar4 = FUN_10031ffe0();
  pcStack_58 = (code *)0x0;
  pcStack_48 = thunk_FUN_1001ff26c;
  pcStack_60 = param_1;
  pcStack_50 = param_1;
  FUN_1000be5e4(lVar4 + 0x30,&pcStack_60);
  lVar4 = FUN_10031ffe0();
  pcStack_58 = (code *)0x0;
  pcStack_48 = FUN_1001ff988;
  pcStack_60 = param_1;
  pcStack_50 = param_1;
  FUN_1000be5e4(lVar4 + 0x40,&pcStack_60);
  lVar4 = FUN_10031ffe0();
  pcStack_58 = (code *)0x0;
  pcStack_48 = thunk_FUN_1001ff2c4;
  pcStack_60 = param_1;
  pcStack_50 = param_1;
  FUN_1000be5e4(lVar4 + 0x50,&pcStack_60);
  uVar5 = FUN_1000fd5e8();
  pcStack_58 = (code *)0x0;
  pcStack_48 = thunk_FUN_1001febf8;
  pcStack_60 = param_1;
  pcStack_50 = param_1;
  FUN_1000be5e4(uVar5,&pcStack_60);
  lVar4 = FUN_10032a0bc();
  pcStack_58 = (code *)0x0;
  pcStack_48 = thunk_FUN_1001febf8;
  pcStack_60 = param_1;
  pcStack_50 = param_1;
  FUN_1000be5e4(lVar4 + 0x30,&pcStack_60);
  FUN_100326da8();
  FUN_10031a918();
  FUN_10031d448();
  operator_new(0x38);
  uVar5 = thunk_FUN_1001f3424();
  *(undefined8 *)(param_1 + 0xe0) = uVar5;
  operator_new(0x2cf68);
  uVar5 = thunk_FUN_100248d18();
  *(undefined8 *)(param_1 + 0xe8) = uVar5;
  uVar6 = FUN_100131560();
  if ((uVar6 & 1) == 0) {
    operator_new(0x9ca0);
    uVar5 = thunk_FUN_100242e6c();
    *(undefined8 *)(param_1 + 0x100) = uVar5;
  }
  operator_new(0x60);
  lVar7 = thunk_FUN_1001f59e8();
  *(long *)(param_1 + 0x108) = lVar7;
  lVar4 = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    lVar4 = *(long *)(param_1 + 0xe0) + 0x10;
  }
  *(long *)(param_1 + 0xb0) = lVar4;
  *(long *)(param_1 + 0xb8) = lVar7 + 0x28;
  uVar6 = FUN_100131560();
  if ((uVar6 & 1) == 0) {
    lVar4 = 0;
    if (*(long *)(param_1 + 0x100) != 0) {
      lVar4 = *(long *)(param_1 + 0x100) + 0x2c88;
    }
    *(long *)(param_1 + 0xc0) = lVar4;
  }
  lVar4 = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    lVar4 = *(long *)(param_1 + 0xe0) + 0x10;
  }
  FUN_1001fc9c4(pcVar1,lVar4,0);
  lVar4 = 0;
  if (*(long *)(param_1 + 0x108) != 0) {
    lVar4 = *(long *)(param_1 + 0x108) + 0x28;
  }
  FUN_1001fc9c4(pcVar1,lVar4,1);
  uVar6 = FUN_100131560();
  if ((uVar6 & 1) == 0) {
    lVar4 = 0;
    if (*(long *)(param_1 + 0x100) != 0) {
      lVar4 = *(long *)(param_1 + 0x100) + 0x2c88;
    }
    FUN_1001fc9c4(pcVar1,lVar4,2);
  }
  iVar3 = FUN_100126b6c();
  if (iVar3 == 0) {
    operator_new(0x137218);
    lVar4 = thunk_FUN_100266a50();
    *(long *)(param_1 + 0xf8) = lVar4;
    lVar4 = lVar4 + 0x2c48;
    *(long *)(param_1 + 0xd0) = lVar4;
    uVar5 = 5;
  }
  else {
    operator_new(0x160);
    uVar5 = thunk_FUN_10020cfb8();
    *(undefined8 *)(param_1 + 0xf0) = uVar5;
    uVar6 = FUN_100131560();
    if ((uVar6 & 1) != 0) goto LAB_1001fda40;
    lVar4 = 0;
    if (*(long *)(param_1 + 0xf0) != 0) {
      lVar4 = *(long *)(param_1 + 0xf0) + 0x10;
    }
    *(long *)(param_1 + 0xd0) = lVar4;
    uVar5 = 4;
  }
  FUN_1001fc9c4(pcVar1,lVar4,uVar5);
LAB_1001fda40:
  uVar2 = DAT_101d2365c;
  uStack_38 = DAT_101d2365c;
  pcStack_60 = FUN_1001fdb84;
  pcStack_48 = (code *)0x0;
  uStack_40 = 0;
  pcStack_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(*(long *)(param_1 + 8) + 8,&pcStack_60);
  lVar4 = FUN_10016c2f0();
  FUN_1001fdbb8(param_1,0 < *(int *)(lVar4 + 0x38));
  lVar4 = FUN_1002c5224(*(undefined8 *)(param_1 + 8));
  uStack_38 = uVar2;
  pcStack_60 = FUN_1001fdb84;
  pcStack_48 = (code *)0x0;
  uStack_40 = 0;
  pcStack_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(lVar4 + 8,&pcStack_60);
  lVar4 = FUN_10030df60();
  pcStack_60 = (code *)0x0;
  pcStack_48 = FUN_1001ffa48;
  pcStack_58 = param_1;
  pcStack_50 = param_1;
  FUN_1001ff9c8(lVar4 + 0x18,&pcStack_60);
  lVar4 = FUN_10032523c();
  pcStack_60 = (code *)0x0;
  pcStack_48 = thunk_FUN_1001ff430;
  pcStack_58 = param_1;
  pcStack_50 = param_1;
  FUN_100031f58(lVar4 + 0x40,&pcStack_60);
  uVar5 = FUN_1000fd5d8();
  pcStack_58 = (code *)0x0;
  pcStack_48 = thunk_FUN_1001ff5c0;
  pcStack_60 = param_1;
  pcStack_50 = param_1;
  FUN_1000be5e4(uVar5,&pcStack_60);
  uStack_38 = DAT_101d237a0;
  pcStack_60 = FUN_1001fdc74;
  pcStack_48 = (code *)0x0;
  uStack_40 = 0;
  pcStack_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(*(long *)(param_1 + 8) + 8,&pcStack_60);
  iVar3 = FUN_1001311d4();
  if (iVar3 != 0) {
    FUN_1001fdcb4(param_1,0);
    FUN_1002a6d84(*(undefined8 *)(*(long *)(param_1 + 0xe0) + 8));
  }
  return param_1;
}



/*
 * FUN_10022d51c
 * VA: 0x10022d51c | Source: functions/10022.c:10696
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 13, Vis masks: 2
 * Callees: FUN_10001554c, FUN_1000200a0, FUN_10003330c, FUN_100131220, FUN_1001816d4, FUN_10019495c, FUN_1001b495c, FUN_1001b4964 (+31 more)
 */
long * FUN_10022d51c(long *param_1)

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
  long lVar22;
  undefined4 uVar23;
  undefined8 *puVar24;
  ulong uVar25;
  undefined8 uVar26;
  uint uVar27;
  long lVar28;
  code *local_b8;
  long *plStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  
  puVar24 = (undefined8 *)FUN_100269da8();
  *puVar24 = &PTR_thunk_FUN_10022e36c_101477268;
  thunk_FUN_100650e64();
  plVar1 = param_1 + 0x3f;
  thunk_FUN_10019468c(plVar1,0);
  plVar2 = param_1 + 0x1c0;
  FUN_1006421a8(plVar2);
  param_1[0x1c0] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08();
  plVar3 = param_1 + 0x1ef;
  thunk_FUN_1006543ec(plVar3);
  plVar4 = param_1 + 0x223;
  FUN_10053077c(plVar4,0);
  plVar5 = param_1 + 0x2ca;
  thunk_FUN_100652c08();
  plVar6 = param_1 + 0x2e8;
  FUN_1006421a8(plVar6);
  param_1[0x2e8] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar7 = param_1 + 0x2f9;
  thunk_FUN_100652c08();
  lVar28 = 0;
  do {
    thunk_FUN_100650e64((long)(param_1 + 0x317) + lVar28);
    lVar28 = lVar28 + 0x130;
  } while (lVar28 != 0x5f0);
  plVar8 = param_1 + 0x3d5;
  thunk_FUN_100650e64();
  param_1[0x3fc] = 0;
  param_1[0x3fb] = 0;
  plVar9 = param_1 + 0x3fd;
  thunk_FUN_100650e64(plVar9);
  plVar10 = param_1 + 0x423;
  thunk_FUN_100652c08();
  plVar11 = param_1 + 0x441;
  thunk_FUN_100650e64();
  plVar12 = param_1 + 0x467;
  thunk_FUN_100181304(plVar12,0);
  plVar13 = param_1 + 0x71e;
  thunk_FUN_100181304(plVar13,0);
  plVar14 = param_1 + 0x9d5;
  thunk_FUN_100650e64();
  plVar15 = param_1 + 0x9fb;
  thunk_FUN_100652c08();
  plVar16 = param_1 + 0xa19;
  thunk_FUN_100652c08();
  plVar17 = param_1 + 0xa37;
  thunk_FUN_1006543ec();
  plVar18 = param_1 + 0xa6b;
  FUN_1006421a8(plVar18);
  param_1[0xa6b] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar19 = param_1 + 0xa7c;
  thunk_FUN_100181304(plVar19,0);
  plVar20 = param_1 + 0xd33;
  thunk_FUN_100181304(plVar20,0);
  plVar21 = param_1 + 0xfea;
  thunk_FUN_100181304(plVar21,0);
  thunk_FUN_1001bc39c(param_1 + 0x12a1);
  param_1[0x20b1] = -0xbbe70000;
  param_1[0x20b3] = 0;
  param_1[0x20b4] = 0;
  param_1[0x20b2] = 0;
  *(undefined4 *)(param_1 + 0x20b5) = 1;
  FUN_10003330c(param_1 + 0x20b6,&DAT_101d91198);
  *(undefined2 *)(param_1 + 0x20b9) = 0x100;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(plVar4,plVar5,1);
  FUN_1005308f8(plVar4,puVar24 + 0x19,1);
  FUN_1005308f8(plVar4,plVar1,1);
  FUN_1005308f8(plVar4,plVar6,1);
  FUN_100642bd8(plVar6,plVar7,1);
  lVar28 = 0;
  do {
    FUN_100642bd8(plVar6,(long)param_1 + lVar28 + 0x18b8,1);
    lVar28 = lVar28 + 0x130;
  } while (lVar28 != 0x5f0);
  FUN_1005308f8(plVar4,plVar9,1);
  FUN_1005308f8(plVar4,plVar10,1);
  FUN_1005308f8(plVar4,plVar11,1);
  FUN_1005308f8(plVar4,plVar14,1);
  FUN_1005308f8(plVar4,plVar15,1);
  FUN_1005308f8(plVar4,plVar12,1);
  FUN_1005308f8(plVar4,plVar13,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar16,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar17,1);
  FUN_100642bd8(plVar17,plVar18,1);
  FUN_100642bd8(plVar18,plVar19,1);
  uVar25 = FUN_100131220();
  if ((uVar25 & 1) != 0) {
    FUN_100642bd8(plVar18,plVar20,1);
    FUN_100642bd8(plVar18,plVar21,1);
  }
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x12a1,1);
  FUN_100651594(puVar24 + 0x19,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e288,&DAT_10115a168);
  *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) & 0xffffffef;
  FUN_10019495c(plVar1,PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0);
  FUN_100652cac(param_1 + 0x1d1,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar27 = *(uint *)((long)param_1 + 0xf0c);
  if ((uVar27 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0xf0c) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0x2600;
    FUN_1000200a0(param_1 + 0x1d1);
  }
  FUN_100652cac(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar5,&DAT_10115a164,2);
  uVar27 = *(uint *)((long)param_1 + 0x16d4);
  if ((uVar27 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x16d4) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0x2600;
    FUN_1000200a0(plVar5);
  }
  FUN_100651594(plVar9,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
  uVar26 = FUN_1004e0150("MENU_PROFILE_GUILD_HOW_TO_ADD",0);
  FUN_1006513c0(plVar9,uVar26);
  uVar27 = *(uint *)((long)param_1 + 0x206c);
  if ((uVar27 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x206c) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0x2600;
    FUN_1000200a0(plVar9);
  }
  FUN_100652cac(plVar10,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_guild_outline");
  uVar27 = *(uint *)((long)param_1 + 0x219c);
  if ((uVar27 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x219c) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0x3300;
    FUN_1000200a0(plVar10);
  }
  if ((*(float *)(param_1 + 0x42c) != 0.9) || (*(float *)((long)param_1 + 0x2164) != 0.9)) {
    param_1[0x42c] = 0x3f6666663f666666;
    FUN_1000200a0(plVar10);
  }
  FUN_100651594(plVar11,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
  uVar26 = FUN_1004e0150("MENU_PROFILE_GUILD_MEMBER_COUNT",0);
  FUN_1006513c0(plVar11,uVar26);
  uVar27 = *(uint *)((long)param_1 + 0x228c);
  if ((uVar27 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x228c) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0x2600;
    FUN_1000200a0(plVar11);
  }
  FUN_100651594(plVar14,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
  uVar26 = FUN_1004e0150("MENU_PROFILE_GUILD_MORE_OPTIONS",0);
  FUN_1006513c0(plVar14,uVar26);
  uVar27 = *(uint *)((long)param_1 + 0x4f2c);
  if ((uVar27 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x4f2c) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0xc80;
    FUN_1000200a0(plVar14);
  }
  FUN_100652cac(plVar15,PTR_s_build___MenuPartsCommon_tga_101854970,"arrow_down");
  uVar27 = *(uint *)((long)param_1 + 0x505c);
  if ((uVar27 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x505c) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0xc80;
    FUN_1000200a0(plVar15);
  }
  uVar26 = FUN_1004e0150("MENU_PROFILE_GUILD_LEAVE_GUILD",0);
  local_b8 = (code *)CONCAT44(local_b8._4_4_,0xffc0c0c0);
  FUN_1001816d4(0x42800000,0,0x447a0000,plVar12,0,uVar26,&local_b8,&DAT_101dc1cb8,0);
  FUN_1001b4c0c(plVar12,1);
  FUN_1001b495c(0x3e4ccccd,plVar12);
  uVar23 = DAT_101d91884;
  local_90 = DAT_101d91884;
  local_b8 = thunk_FUN_100231648;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x468,&local_b8);
  FUN_1001b4964(plVar12,1);
  uVar26 = FUN_1004e0150("MENU_PROFILE_GUILD_EDIT_TYPE",0);
  local_b8 = (code *)CONCAT44(local_b8._4_4_,0xffc0c0c0);
  FUN_1001816d4(0x42800000,0,0x447a0000,plVar13,0,uVar26,&local_b8,&DAT_101dc1cb8,0);
  FUN_1001b4c0c(plVar13,1);
  FUN_1001b495c(0x3e4ccccd,plVar13);
  local_90 = uVar23;
  local_b8 = thunk_FUN_100231a5c;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x71f,&local_b8);
  FUN_1001b4964(plVar13,1);
  FUN_100652cac(plVar7,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  if ((*(uint *)((long)param_1 + 0x184c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x184c) = *(uint *)((long)param_1 + 0x184c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar7);
  }
  uVar26 = FUN_1004e0150("MENU_PROFILE_GUILD_JOIN_DATE",0);
  FUN_1006513c0(plVar8,uVar26);
  FUN_100651038(plVar8,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0);
  if ((*(uint *)((long)param_1 + 0x1f2c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x1f2c) = *(uint *)((long)param_1 + 0x1f2c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar8);
  }
  lVar28 = 0;
  do {
    lVar22 = (long)param_1 + lVar28 + 0x18b8;
    FUN_100651038(lVar22,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0);
    uVar27 = *(uint *)((long)param_1 + lVar28 + 0x193c);
    if ((uVar27 & 0x7f80) != 0x3f80) {
      *(uint *)((long)param_1 + lVar28 + 0x193c) = uVar27 & 0xffff807f | 0x3f80;
      FUN_1000200a0(lVar22);
    }
    lVar28 = lVar28 + 0x130;
  } while (lVar28 != 0x5f0);
  uVar26 = FUN_1004e0150("MENU_GUILD_HEADER_FAME",0);
  (**(code **)(param_1[0x317] + 0x138))(param_1 + 0x317,uVar26);
  uVar26 = FUN_1004e0150("MENU_GUILD_HEADER_BOOSTED",0);
  (**(code **)(param_1[0x33d] + 0x138))(param_1 + 0x33d,uVar26);
  uVar26 = FUN_1004e0150("GENERIC_5V5",0);
  (**(code **)(param_1[0x363] + 0x138))(param_1 + 0x363,uVar26);
  uVar26 = FUN_1004e0150("GENERIC_3V3",0);
  (**(code **)(param_1[0x389] + 0x138))(param_1 + 0x389,uVar26);
  uVar26 = FUN_1004e0150("MENU_GUILD_HEADER_STATUS",0);
  (**(code **)(param_1[0x3af] + 0x138))(param_1 + 0x3af,uVar26);
  FUN_100530be0(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,
                PTR_s_scrollbar_button_fill_top_101854958,
                PTR_s_scrollbar_button_fill_middle_101854960,
                PTR_s_scrollbar_button_fill_bottom_101854968);
  FUN_100530adc(plVar4,0,1);
  FUN_100652cac(plVar16,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar27 = *(uint *)((long)param_1 + 0x514c);
  if ((uVar27 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x514c) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0x6600;
    FUN_1000200a0(plVar16);
    uVar27 = *(uint *)((long)param_1 + 0x514c);
  }
  *(uint *)((long)param_1 + 0x514c) = uVar27 & 0xfffffffb | 0x10;
  local_90 = DAT_101dbd458;
  local_b8 = FUN_10022e32c;
  plVar1 = param_1 + 0xa1a;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(plVar1,&local_b8);
  local_90 = DAT_101dbd484;
  local_b8 = FUN_10022e32c;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(plVar1,&local_b8);
  local_90 = DAT_101dbd45c;
  local_b8 = FUN_10022e32c;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(plVar1,&local_b8);
  local_90 = DAT_101dbd488;
  local_b8 = FUN_10022e32c;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(plVar1,&local_b8);
  local_90 = DAT_101dbd460;
  local_b8 = FUN_10022e32c;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(plVar1,&local_b8);
  local_90 = DAT_101dbd48c;
  local_b8 = FUN_10022e32c;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(plVar1,&local_b8);
  *(uint *)((long)param_1 + 0x523c) = *(uint *)((long)param_1 + 0x523c) & 0xfffffffb;
  FUN_100654488(plVar17,1);
  uVar26 = FUN_1004e0150("MENU_PROFILE_GUILD_REMOVE_MEMBER",0);
  local_b8 = (code *)CONCAT44(local_b8._4_4_,0xffc0c0c0);
  FUN_1001816d4(0x42800000,0,0x447a0000,plVar19,0,uVar26,&local_b8,&DAT_101dc1cb8,0);
  FUN_1001b4c0c(plVar19,1);
  FUN_1001b495c(0x3e4ccccd,plVar19);
  if ((*(float *)(param_1 + 0xa86) != 0.5) || (*(float *)((long)param_1 + 0x5434) != 0.5)) {
    param_1[0xa86] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar19);
  }
  local_90 = uVar23;
  local_b8 = thunk_FUN_100231480;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0xa7d,&local_b8);
  uVar25 = FUN_100131220();
  if ((uVar25 & 1) != 0) {
    uVar26 = FUN_1004e0150("MENU_GUILD_MEMBERS_PROMOTE_BUTTON_LABEL",0);
    local_b8 = (code *)CONCAT44(local_b8._4_4_,0xffc0c0c0);
    FUN_1001816d4(0x42800000,0,0x447a0000,plVar20,0,uVar26,&local_b8,&DAT_101dc1cb8,0);
    FUN_1001b4c0c(plVar20,1);
    FUN_1001b495c(0x3e4ccccd,plVar20);
    if ((*(float *)(param_1 + 0xd3d) != 0.5) || (*(float *)((long)param_1 + 0x69ec) != 0.5)) {
      param_1[0xd3d] = (long)&DAT_3f0000003f000000;
      FUN_1000200a0(plVar20);
    }
    local_90 = uVar23;
    local_b8 = thunk_FUN_100231764;
    local_a0 = 0;
    uStack_98 = 0;
    local_a8 = 0;
    plStack_b0 = param_1;
    FUN_10001554c(param_1 + 0xd34,&local_b8);
    uVar26 = FUN_1004e0150("MENU_GUILD_MEMBERS_TRANSFER_LEADERSHIP_MEMBER",0);
    local_b8 = (code *)CONCAT44(local_b8._4_4_,0xffc0c0c0);
    FUN_1001816d4(0x42800000,0,0x447a0000,plVar21,0,uVar26,&local_b8,&DAT_101dc1cb8,0);
    FUN_1001b4c0c(plVar21,1);
    FUN_1001b495c(0x3e4ccccd,plVar21);
    if ((*(float *)(param_1 + 0xff4) != 0.5) || (*(float *)((long)param_1 + 0x7fa4) != 0.5)) {
      param_1[0xff4] = (long)&DAT_3f0000003f000000;
      FUN_1000200a0(plVar21);
    }
    local_90 = uVar23;
    local_b8 = thunk_FUN_100231900;
    local_a0 = 0;
    uStack_98 = 0;
    local_a8 = 0;
    plStack_b0 = param_1;
    FUN_10001554c(param_1 + 0xfeb,&local_b8);
  }
  local_90 = FUN_100644a94("EVENT_DISPLAY_TOOLTIP");
  local_b8 = FUN_10022e360;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 1,&local_b8);
  return param_1;
}



/*
 * thunk_FUN_10022d51c
 * VA: 0xthunk_10022d51c | Source: functions/10022.c:11090
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 13, Vis masks: 2
 * Callees: FUN_10001554c, FUN_1000200a0, FUN_10003330c, FUN_100131220, FUN_1001816d4, FUN_10019495c, FUN_1001b495c, FUN_1001b4964 (+31 more)
 * Callers: FUN_10023b4b8, thunk_FUN_10023b4b8
 */
long * thunk_FUN_10022d51c(long *param_1)

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
  long lVar22;
  undefined4 uVar23;
  undefined8 *puVar24;
  ulong uVar25;
  undefined8 uVar26;
  uint uVar27;
  long lVar28;
  code *pcStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  
  puVar24 = (undefined8 *)FUN_100269da8();
  *puVar24 = &PTR_thunk_FUN_10022e36c_101477268;
  thunk_FUN_100650e64();
  plVar1 = param_1 + 0x3f;
  thunk_FUN_10019468c(plVar1,0);
  plVar2 = param_1 + 0x1c0;
  FUN_1006421a8(plVar2);
  param_1[0x1c0] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08();
  plVar3 = param_1 + 0x1ef;
  thunk_FUN_1006543ec(plVar3);
  plVar4 = param_1 + 0x223;
  FUN_10053077c(plVar4,0);
  plVar5 = param_1 + 0x2ca;
  thunk_FUN_100652c08();
  plVar6 = param_1 + 0x2e8;
  FUN_1006421a8(plVar6);
  param_1[0x2e8] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar7 = param_1 + 0x2f9;
  thunk_FUN_100652c08();
  lVar28 = 0;
  do {
    thunk_FUN_100650e64((long)(param_1 + 0x317) + lVar28);
    lVar28 = lVar28 + 0x130;
  } while (lVar28 != 0x5f0);
  plVar8 = param_1 + 0x3d5;
  thunk_FUN_100650e64();
  param_1[0x3fc] = 0;
  param_1[0x3fb] = 0;
  plVar9 = param_1 + 0x3fd;
  thunk_FUN_100650e64(plVar9);
  plVar10 = param_1 + 0x423;
  thunk_FUN_100652c08();
  plVar11 = param_1 + 0x441;
  thunk_FUN_100650e64();
  plVar12 = param_1 + 0x467;
  thunk_FUN_100181304(plVar12,0);
  plVar13 = param_1 + 0x71e;
  thunk_FUN_100181304(plVar13,0);
  plVar14 = param_1 + 0x9d5;
  thunk_FUN_100650e64();
  plVar15 = param_1 + 0x9fb;
  thunk_FUN_100652c08();
  plVar16 = param_1 + 0xa19;
  thunk_FUN_100652c08();
  plVar17 = param_1 + 0xa37;
  thunk_FUN_1006543ec();
  plVar18 = param_1 + 0xa6b;
  FUN_1006421a8(plVar18);
  param_1[0xa6b] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar19 = param_1 + 0xa7c;
  thunk_FUN_100181304(plVar19,0);
  plVar20 = param_1 + 0xd33;
  thunk_FUN_100181304(plVar20,0);
  plVar21 = param_1 + 0xfea;
  thunk_FUN_100181304(plVar21,0);
  thunk_FUN_1001bc39c(param_1 + 0x12a1);
  param_1[0x20b1] = -0xbbe70000;
  param_1[0x20b3] = 0;
  param_1[0x20b4] = 0;
  param_1[0x20b2] = 0;
  *(undefined4 *)(param_1 + 0x20b5) = 1;
  FUN_10003330c(param_1 + 0x20b6,&DAT_101d91198);
  *(undefined2 *)(param_1 + 0x20b9) = 0x100;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(plVar4,plVar5,1);
  FUN_1005308f8(plVar4,puVar24 + 0x19,1);
  FUN_1005308f8(plVar4,plVar1,1);
  FUN_1005308f8(plVar4,plVar6,1);
  FUN_100642bd8(plVar6,plVar7,1);
  lVar28 = 0;
  do {
    FUN_100642bd8(plVar6,(long)param_1 + lVar28 + 0x18b8,1);
    lVar28 = lVar28 + 0x130;
  } while (lVar28 != 0x5f0);
  FUN_1005308f8(plVar4,plVar9,1);
  FUN_1005308f8(plVar4,plVar10,1);
  FUN_1005308f8(plVar4,plVar11,1);
  FUN_1005308f8(plVar4,plVar14,1);
  FUN_1005308f8(plVar4,plVar15,1);
  FUN_1005308f8(plVar4,plVar12,1);
  FUN_1005308f8(plVar4,plVar13,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar16,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar17,1);
  FUN_100642bd8(plVar17,plVar18,1);
  FUN_100642bd8(plVar18,plVar19,1);
  uVar25 = FUN_100131220();
  if ((uVar25 & 1) != 0) {
    FUN_100642bd8(plVar18,plVar20,1);
    FUN_100642bd8(plVar18,plVar21,1);
  }
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x12a1,1);
  FUN_100651594(puVar24 + 0x19,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e288,&DAT_10115a168);
  *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) & 0xffffffef;
  FUN_10019495c(plVar1,PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0);
  FUN_100652cac(param_1 + 0x1d1,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar27 = *(uint *)((long)param_1 + 0xf0c);
  if ((uVar27 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0xf0c) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0x2600;
    FUN_1000200a0(param_1 + 0x1d1);
  }
  FUN_100652cac(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar5,&DAT_10115a164,2);
  uVar27 = *(uint *)((long)param_1 + 0x16d4);
  if ((uVar27 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x16d4) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0x2600;
    FUN_1000200a0(plVar5);
  }
  FUN_100651594(plVar9,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
  uVar26 = FUN_1004e0150("MENU_PROFILE_GUILD_HOW_TO_ADD",0);
  FUN_1006513c0(plVar9,uVar26);
  uVar27 = *(uint *)((long)param_1 + 0x206c);
  if ((uVar27 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x206c) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0x2600;
    FUN_1000200a0(plVar9);
  }
  FUN_100652cac(plVar10,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_guild_outline");
  uVar27 = *(uint *)((long)param_1 + 0x219c);
  if ((uVar27 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x219c) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0x3300;
    FUN_1000200a0(plVar10);
  }
  if ((*(float *)(param_1 + 0x42c) != 0.9) || (*(float *)((long)param_1 + 0x2164) != 0.9)) {
    param_1[0x42c] = 0x3f6666663f666666;
    FUN_1000200a0(plVar10);
  }
  FUN_100651594(plVar11,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
  uVar26 = FUN_1004e0150("MENU_PROFILE_GUILD_MEMBER_COUNT",0);
  FUN_1006513c0(plVar11,uVar26);
  uVar27 = *(uint *)((long)param_1 + 0x228c);
  if ((uVar27 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x228c) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0x2600;
    FUN_1000200a0(plVar11);
  }
  FUN_100651594(plVar14,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
  uVar26 = FUN_1004e0150("MENU_PROFILE_GUILD_MORE_OPTIONS",0);
  FUN_1006513c0(plVar14,uVar26);
  uVar27 = *(uint *)((long)param_1 + 0x4f2c);
  if ((uVar27 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x4f2c) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0xc80;
    FUN_1000200a0(plVar14);
  }
  FUN_100652cac(plVar15,PTR_s_build___MenuPartsCommon_tga_101854970,"arrow_down");
  uVar27 = *(uint *)((long)param_1 + 0x505c);
  if ((uVar27 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x505c) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0xc80;
    FUN_1000200a0(plVar15);
  }
  uVar26 = FUN_1004e0150("MENU_PROFILE_GUILD_LEAVE_GUILD",0);
  pcStack_b8 = (code *)CONCAT44(pcStack_b8._4_4_,0xffc0c0c0);
  FUN_1001816d4(0x42800000,0,0x447a0000,plVar12,0,uVar26,&pcStack_b8,&DAT_101dc1cb8,0);
  FUN_1001b4c0c(plVar12,1);
  FUN_1001b495c(0x3e4ccccd,plVar12);
  uVar23 = DAT_101d91884;
  uStack_90 = DAT_101d91884;
  pcStack_b8 = thunk_FUN_100231648;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x468,&pcStack_b8);
  FUN_1001b4964(plVar12,1);
  uVar26 = FUN_1004e0150("MENU_PROFILE_GUILD_EDIT_TYPE",0);
  pcStack_b8 = (code *)CONCAT44(pcStack_b8._4_4_,0xffc0c0c0);
  FUN_1001816d4(0x42800000,0,0x447a0000,plVar13,0,uVar26,&pcStack_b8,&DAT_101dc1cb8,0);
  FUN_1001b4c0c(plVar13,1);
  FUN_1001b495c(0x3e4ccccd,plVar13);
  uStack_90 = uVar23;
  pcStack_b8 = thunk_FUN_100231a5c;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x71f,&pcStack_b8);
  FUN_1001b4964(plVar13,1);
  FUN_100652cac(plVar7,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  if ((*(uint *)((long)param_1 + 0x184c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x184c) = *(uint *)((long)param_1 + 0x184c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar7);
  }
  uVar26 = FUN_1004e0150("MENU_PROFILE_GUILD_JOIN_DATE",0);
  FUN_1006513c0(plVar8,uVar26);
  FUN_100651038(plVar8,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0);
  if ((*(uint *)((long)param_1 + 0x1f2c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x1f2c) = *(uint *)((long)param_1 + 0x1f2c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar8);
  }
  lVar28 = 0;
  do {
    lVar22 = (long)param_1 + lVar28 + 0x18b8;
    FUN_100651038(lVar22,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0);
    uVar27 = *(uint *)((long)param_1 + lVar28 + 0x193c);
    if ((uVar27 & 0x7f80) != 0x3f80) {
      *(uint *)((long)param_1 + lVar28 + 0x193c) = uVar27 & 0xffff807f | 0x3f80;
      FUN_1000200a0(lVar22);
    }
    lVar28 = lVar28 + 0x130;
  } while (lVar28 != 0x5f0);
  uVar26 = FUN_1004e0150("MENU_GUILD_HEADER_FAME",0);
  (**(code **)(param_1[0x317] + 0x138))(param_1 + 0x317,uVar26);
  uVar26 = FUN_1004e0150("MENU_GUILD_HEADER_BOOSTED",0);
  (**(code **)(param_1[0x33d] + 0x138))(param_1 + 0x33d,uVar26);
  uVar26 = FUN_1004e0150("GENERIC_5V5",0);
  (**(code **)(param_1[0x363] + 0x138))(param_1 + 0x363,uVar26);
  uVar26 = FUN_1004e0150("GENERIC_3V3",0);
  (**(code **)(param_1[0x389] + 0x138))(param_1 + 0x389,uVar26);
  uVar26 = FUN_1004e0150("MENU_GUILD_HEADER_STATUS",0);
  (**(code **)(param_1[0x3af] + 0x138))(param_1 + 0x3af,uVar26);
  FUN_100530be0(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,
                PTR_s_scrollbar_button_fill_top_101854958,
                PTR_s_scrollbar_button_fill_middle_101854960,
                PTR_s_scrollbar_button_fill_bottom_101854968);
  FUN_100530adc(plVar4,0,1);
  FUN_100652cac(plVar16,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar27 = *(uint *)((long)param_1 + 0x514c);
  if ((uVar27 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x514c) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0x6600;
    FUN_1000200a0(plVar16);
    uVar27 = *(uint *)((long)param_1 + 0x514c);
  }
  *(uint *)((long)param_1 + 0x514c) = uVar27 & 0xfffffffb | 0x10;
  uStack_90 = DAT_101dbd458;
  pcStack_b8 = FUN_10022e32c;
  plVar1 = param_1 + 0xa1a;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(plVar1,&pcStack_b8);
  uStack_90 = DAT_101dbd484;
  pcStack_b8 = FUN_10022e32c;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(plVar1,&pcStack_b8);
  uStack_90 = DAT_101dbd45c;
  pcStack_b8 = FUN_10022e32c;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(plVar1,&pcStack_b8);
  uStack_90 = DAT_101dbd488;
  pcStack_b8 = FUN_10022e32c;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(plVar1,&pcStack_b8);
  uStack_90 = DAT_101dbd460;
  pcStack_b8 = FUN_10022e32c;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(plVar1,&pcStack_b8);
  uStack_90 = DAT_101dbd48c;
  pcStack_b8 = FUN_10022e32c;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(plVar1,&pcStack_b8);
  *(uint *)((long)param_1 + 0x523c) = *(uint *)((long)param_1 + 0x523c) & 0xfffffffb;
  FUN_100654488(plVar17,1);
  uVar26 = FUN_1004e0150("MENU_PROFILE_GUILD_REMOVE_MEMBER",0);
  pcStack_b8 = (code *)CONCAT44(pcStack_b8._4_4_,0xffc0c0c0);
  FUN_1001816d4(0x42800000,0,0x447a0000,plVar19,0,uVar26,&pcStack_b8,&DAT_101dc1cb8,0);
  FUN_1001b4c0c(plVar19,1);
  FUN_1001b495c(0x3e4ccccd,plVar19);
  if ((*(float *)(param_1 + 0xa86) != 0.5) || (*(float *)((long)param_1 + 0x5434) != 0.5)) {
    param_1[0xa86] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar19);
  }
  uStack_90 = uVar23;
  pcStack_b8 = thunk_FUN_100231480;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0xa7d,&pcStack_b8);
  uVar25 = FUN_100131220();
  if ((uVar25 & 1) != 0) {
    uVar26 = FUN_1004e0150("MENU_GUILD_MEMBERS_PROMOTE_BUTTON_LABEL",0);
    pcStack_b8 = (code *)CONCAT44(pcStack_b8._4_4_,0xffc0c0c0);
    FUN_1001816d4(0x42800000,0,0x447a0000,plVar20,0,uVar26,&pcStack_b8,&DAT_101dc1cb8,0);
    FUN_1001b4c0c(plVar20,1);
    FUN_1001b495c(0x3e4ccccd,plVar20);
    if ((*(float *)(param_1 + 0xd3d) != 0.5) || (*(float *)((long)param_1 + 0x69ec) != 0.5)) {
      param_1[0xd3d] = (long)&DAT_3f0000003f000000;
      FUN_1000200a0(plVar20);
    }
    uStack_90 = uVar23;
    pcStack_b8 = thunk_FUN_100231764;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_a8 = 0;
    plStack_b0 = param_1;
    FUN_10001554c(param_1 + 0xd34,&pcStack_b8);
    uVar26 = FUN_1004e0150("MENU_GUILD_MEMBERS_TRANSFER_LEADERSHIP_MEMBER",0);
    pcStack_b8 = (code *)CONCAT44(pcStack_b8._4_4_,0xffc0c0c0);
    FUN_1001816d4(0x42800000,0,0x447a0000,plVar21,0,uVar26,&pcStack_b8,&DAT_101dc1cb8,0);
    FUN_1001b4c0c(plVar21,1);
    FUN_1001b495c(0x3e4ccccd,plVar21);
    if ((*(float *)(param_1 + 0xff4) != 0.5) || (*(float *)((long)param_1 + 0x7fa4) != 0.5)) {
      param_1[0xff4] = (long)&DAT_3f0000003f000000;
      FUN_1000200a0(plVar21);
    }
    uStack_90 = uVar23;
    pcStack_b8 = thunk_FUN_100231900;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_a8 = 0;
    plStack_b0 = param_1;
    FUN_10001554c(param_1 + 0xfeb,&pcStack_b8);
  }
  uStack_90 = FUN_100644a94("EVENT_DISPLAY_TOOLTIP");
  pcStack_b8 = FUN_10022e360;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_b8);
  return param_1;
}



/*
 * FUN_100232f00
 * VA: 0x100232f00 | Source: functions/named.c:19285
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 15, Vis masks: 2
 * Callees: FUN_10001549c, FUN_10001554c, FUN_1000164dc, FUN_1000200a0, FUN_100126c88, FUN_100131220, FUN_1001816d4, FUN_100181c68 (+71 more)
 */
/* WARNING: Removing unreachable block (ram,0x000100233a6c) */
/* WARNING: Removing unreachable block (ram,0x000100233a38) */
/* WARNING: Removing unreachable block (ram,0x00010023406c) */

long * FUN_100232f00(long *param_1)

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
  undefined **ppuVar27;
  undefined **ppuVar28;
  uint uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  bool bVar32;
  int iVar33;
  int iVar34;
  long lVar35;
  undefined8 uVar36;
  undefined4 uVar37;
  float fVar38;
  undefined1 local_c0 [24];
  code *local_a8;
  long *plStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  
  plVar3 = param_1 + 0x12c7;
  lVar35 = FUN_100269da8();
  FUN_1001e1b34(lVar35 + 200);
  FUN_1004f0a20(param_1 + 0x1c);
  *param_1 = (long)&PTR_thunk_FUN_1002342b0_101477520;
  param_1[0x19] = (long)&PTR_FUN_1014776a0;
  param_1[0x1c] = (long)&PTR_FUN_1014776c8;
  thunk_FUN_1006543ec();
  plVar1 = param_1 + 0x53;
  FUN_10053077c(plVar1,0);
  plVar2 = param_1 + 0xfa;
  thunk_FUN_10019468c(plVar2,0);
  plVar4 = param_1 + 0x27b;
  thunk_FUN_100652c08();
  plVar5 = param_1 + 0x299;
  thunk_FUN_100650e64();
  plVar6 = param_1 + 0x2bf;
  thunk_FUN_100183990(plVar6,0);
  plVar7 = param_1 + 0x37d;
  thunk_FUN_100183990(plVar7,0);
  plVar8 = param_1 + 0x43b;
  FUN_10064e264(plVar8);
  plVar9 = param_1 + 0x452;
  thunk_FUN_1001a7cf4(plVar9);
  plVar10 = param_1 + 0x4c8;
  thunk_FUN_100650e64();
  FUN_1002382ac();
  plVar11 = param_1 + 0x57b;
  thunk_FUN_100183990(plVar11,0);
  plVar12 = param_1 + 0x639;
  thunk_FUN_100652c08(plVar12);
  plVar13 = param_1 + 0x657;
  thunk_FUN_100650e64(plVar13);
  plVar14 = param_1 + 0x67d;
  thunk_FUN_1001b4d10();
  plVar15 = param_1 + 0x8e0;
  thunk_FUN_100652c08(plVar15);
  plVar16 = param_1 + 0x8fe;
  thunk_FUN_100650e64(plVar16);
  plVar17 = param_1 + 0x924;
  FUN_10064e264(plVar17);
  plVar18 = param_1 + 0x93b;
  thunk_FUN_100650e64();
  plVar19 = param_1 + 0x961;
  thunk_FUN_1001ae894();
  plVar20 = param_1 + 0xaa0;
  thunk_FUN_100183990(plVar20,0);
  plVar21 = param_1 + 0xb5e;
  thunk_FUN_100183160(plVar21,0);
  plVar22 = param_1 + 0xfea;
  thunk_FUN_100650e64();
  plVar23 = param_1 + 0x1010;
  thunk_FUN_100181304(plVar23,0);
  FUN_10064fd54(plVar3,1);
  *plVar3 = (long)&PTR_thunk_FUN_10064e2bc_101451a40;
  plVar24 = param_1 + 0x12e0;
  thunk_FUN_100650e64();
  plVar25 = param_1 + 0x1306;
  thunk_FUN_100650e64();
  plVar26 = param_1 + 0x132c;
  thunk_FUN_100650e64();
  thunk_FUN_100191e28();
  thunk_FUN_1001dc54c();
  thunk_FUN_1006421a8(param_1 + 0x69d1);
  thunk_FUN_10022b24c();
  *(undefined4 *)(param_1 + 0x6a61) = 0;
  param_1[0x6a60] = 0;
  param_1[0x6a5f] = 0;
  param_1[0x6a5e] = 0;
  FUN_1000164dc(param_1 + 0x6a62);
  param_1[0x6a66] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6a67) = 0x10100;
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x69d1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x1f,1);
  FUN_100642bd8(param_1 + 0x1f,plVar1,1);
  FUN_1005308f8(plVar1,plVar8,1);
  FUN_100642bd8(plVar8,plVar9,1);
  FUN_100642bd8(plVar8,plVar12,1);
  FUN_100642bd8(plVar8,plVar15,1);
  FUN_100642bd8(plVar8,param_1 + 0x4ee,1);
  FUN_100642bd8(plVar8,plVar10,1);
  FUN_100642bd8(plVar8,plVar11,1);
  FUN_100642bd8(plVar8,plVar16,1);
  FUN_100642bd8(plVar8,plVar13,1);
  FUN_1005308f8(plVar1,plVar4,1);
  FUN_1005308f8(plVar1,plVar2,1);
  FUN_1005308f8(plVar1,plVar5,1);
  iVar33 = FUN_100131220();
  if (iVar33 != 0) {
    FUN_1005308f8(plVar1,plVar6,1);
    FUN_1005308f8(plVar1,plVar7,1);
  }
  FUN_1005308f8(plVar1,plVar14,1);
  FUN_1005308f8(plVar1,plVar17,1);
  FUN_100642bd8(plVar17,plVar19,1);
  FUN_100642bd8(plVar17,plVar18,1);
  FUN_100642bd8(plVar17,plVar20,1);
  FUN_100642bd8(plVar17,plVar21,1);
  FUN_100642bd8(plVar17,plVar22,1);
  FUN_100642bd8(plVar1,plVar23,1);
  FUN_1005308f8(plVar1,plVar3,1);
  FUN_100642bd8(plVar3,plVar24,1);
  FUN_100642bd8(plVar3,plVar25,1);
  FUN_100642bd8(plVar3,plVar26,1);
  FUN_1005308f8(plVar1,param_1 + 0x1352,1);
  FUN_1005308f8(plVar1,param_1 + 0x69e2,1);
  iVar33 = FUN_100126c88();
  FUN_100530adc(plVar1,0,*(undefined1 *)((long)param_1 + 0x35339));
  *(uint *)((long)param_1 + 0x31c) =
       *(uint *)((long)param_1 + 0x31c) & 0xffffffef | (uint)*(byte *)((long)param_1 + 0x35339) << 4
  ;
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_fuzzy_dot");
  uVar29 = *(uint *)((long)param_1 + 0x145c);
  if ((uVar29 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x145c) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x6600;
    FUN_1000200a0(plVar4);
  }
  FUN_10064e47c(0x44c58000,0x44020000,plVar4);
  if ((*(float *)(param_1 + 0x285) != 0.5) || (*(float *)((long)param_1 + 0x142c) != 0.5)) {
    param_1[0x285] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar4);
  }
  FUN_1006515d8(plVar5,0);
  FUN_100651594(plVar5,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e288,&DAT_10115a168);
  FUN_10019495c(plVar2,PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0);
  iVar34 = FUN_100131220();
  if (iVar34 != 0) {
    FUN_100652cdc(param_1 + 0x359,"edit_handle");
    *(uint *)((long)param_1 + 0x1a5c) = *(uint *)((long)param_1 + 0x1a5c) & 0xfffffffb;
    FUN_1001b495c(0x3ecccccd,plVar6);
    uVar29 = *(uint *)((long)param_1 + 0x167c);
    if ((uVar29 & 0x7f80) != 0x4c80) {
      *(uint *)((long)param_1 + 0x167c) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x4c80;
      FUN_1000200a0(plVar6);
    }
    uVar31 = DAT_101d91884;
    local_80 = DAT_101d91884;
    local_a8 = thunk_FUN_100236284;
    local_90 = 0;
    uStack_88 = 0;
    local_98 = 0;
    plStack_a0 = param_1;
    FUN_10001554c(param_1 + 0x2c0,&local_a8);
    FUN_1001b4964(plVar6,1);
    FUN_100652cdc(param_1 + 0x417,"edit_handle");
    *(uint *)((long)param_1 + 0x204c) = *(uint *)((long)param_1 + 0x204c) & 0xfffffffb;
    FUN_1001b495c(0x3ecccccd,plVar7);
    uVar29 = *(uint *)((long)param_1 + 0x1c6c);
    if ((uVar29 & 0x7f80) != 0x4c80) {
      *(uint *)((long)param_1 + 0x1c6c) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x4c80;
      FUN_1000200a0(plVar7);
    }
    local_80 = uVar31;
    local_a8 = thunk_FUN_1002362dc;
    local_90 = 0;
    uStack_88 = 0;
    local_98 = 0;
    plStack_a0 = param_1;
    FUN_10001554c(param_1 + 0x37e,&local_a8);
    FUN_1001b4964(plVar7,1);
  }
  FUN_1001b5e00(0x44480000,0x42580000,plVar14,0,100,0,0);
  uVar36 = FUN_100345b94();
  uVar36 = FUN_10034c450(uVar36,"*KindredMenuGuildBannerMesh*");
  FUN_1001a812c(plVar9,uVar36);
  *(uint *)((long)param_1 + 0x2314) = *(uint *)((long)param_1 + 0x2314) | 4;
  FUN_1001a8964(plVar9,"GUILD_BANNERS");
  *(uint *)((long)param_1 + 0x27f4) = *(uint *)((long)param_1 + 0x27f4) | 0x10;
  local_80 = DAT_101dbd460;
  local_a8 = FUN_1002340f0;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x4ef,&local_a8);
  local_80 = DAT_101dbd48c;
  local_a8 = FUN_1002340f0;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x4ef,&local_a8);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,0xffe3e9f0);
  FUN_100651594(plVar10,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e290,&local_a8);
  FUN_10065165c(plVar10,1);
  local_a8 = (code *)NEON_fmov(0x40800000,4);
  FUN_1006516c8(plVar10,&local_a8);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,0xff464d4f);
  FUN_1006516bc(plVar10,&local_a8);
  uVar29 = *(uint *)((long)param_1 + 0x26c4);
  if ((uVar29 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x26c4) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x6600;
    FUN_1000200a0(plVar10);
  }
  FUN_1001b66dc(0x3fef684c,plVar14,"xp_bar_current","xp_bar_new");
  *(undefined2 *)(param_1 + 0x8df) = 0;
  FUN_100652cac(plVar15,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_fuzzy_dot");
  if ((~*(uint *)((long)param_1 + 0x4784) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x4784) = *(uint *)((long)param_1 + 0x4784) | 0x7f80;
    FUN_1000200a0(plVar15);
  }
  FUN_10064e47c(0x43960000,0x43820000,plVar15);
  if ((*(float *)(param_1 + 0x8ea) != 0.5) || (*(float *)((long)param_1 + 0x4754) != 0.5)) {
    param_1[0x8ea] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar15);
  }
  FUN_100651594(plVar16,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
  FUN_100652cac(plVar12,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_fuzzy_dot");
  uVar29 = *(uint *)((long)param_1 + 0x324c);
  if ((uVar29 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x324c) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x6600;
    FUN_1000200a0(plVar12);
  }
  FUN_10064e47c(0x43960000,0x43820000,plVar12);
  if ((*(float *)(param_1 + 0x643) != 0.5) || (*(float *)((long)param_1 + 0x321c) != 0.5)) {
    param_1[0x643] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar12);
  }
  FUN_100651594(plVar13,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
  FUN_10065165c(plVar13,1);
  local_a8 = (code *)0x4000000040000000;
  FUN_1006516c8(plVar13,&local_a8);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,0xff323232);
  FUN_1006516bc(plVar13,&local_a8);
  FUN_100652cdc(param_1 + 0x615,"circle_button_question");
  uVar29 = *(uint *)((long)param_1 + 0x2c5c);
  if ((uVar29 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x2c5c) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar11);
  }
  FUN_1001b495c(0xbf800000,plVar11);
  uVar31 = DAT_101d91884;
  local_80 = DAT_101d91884;
  local_a8 = thunk_FUN_1002365d8;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x57c,&local_a8);
  FUN_1001b4964(plVar11,1);
  FUN_1002340fc(0x3f23d70a,plVar19);
  local_80 = FUN_100644a94("UI::EVENT_MENU_OPEN_CHEST");
  local_a8 = thunk_FUN_100236d08;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x962,&local_a8);
  FUN_1001af9fc(plVar19,0);
  FUN_10001549c(&local_a8,"guild");
  FUN_1001aefd4(plVar19,&local_a8);
  FUN_10001549c(&local_a8,"IDLE_CLOSED");
  FUN_1001aeb7c(0x3f333333,plVar19,&local_a8);
  ppuVar28 = &PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0;
  if (iVar33 == 0) {
    ppuVar28 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  }
  FUN_100651594(plVar18,*ppuVar28,&DAT_10115a168);
  uVar29 = *(uint *)((long)param_1 + 0x4a5c);
  if ((uVar29 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x4a5c) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x6600;
    FUN_1000200a0(plVar18);
  }
  FUN_10065165c(plVar18,1);
  uVar36 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_REWARD_CHEST_TITLE",0);
  FUN_1006513c0(plVar18,uVar36);
  FUN_100652cdc(param_1 + 0xb3a,"circle_button_question");
  uVar29 = *(uint *)((long)param_1 + 0x5584);
  if ((uVar29 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x5584) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar20);
  }
  FUN_1001b495c(0xbf800000,plVar20);
  local_80 = uVar31;
  local_a8 = thunk_FUN_100236dac;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0xaa1,&local_a8);
  fVar38 = DAT_101854a78;
  if (iVar33 == 0) {
    fVar38 = 1.0;
  }
  fVar38 = fVar38 * 0.7;
  if ((*(float *)(param_1 + 0xaa9) != fVar38) || (*(float *)((long)param_1 + 0x554c) != fVar38)) {
    *(float *)(param_1 + 0xaa9) = fVar38;
    *(float *)((long)param_1 + 0x554c) = fVar38;
    FUN_1000200a0(plVar20);
  }
  FUN_1001b4964(plVar20,1);
  uVar36 = FUN_1004e0150("GENERIC_DIALOG_OPEN",0);
  FUN_1001816d4(0x41c00000,0x438c0000,0x445c0000,plVar21,0,uVar36,&DAT_10115a168,&DAT_101dc1cb8,0);
  FUN_100181c68(0x42ef3333,plVar21);
  FUN_100651594(param_1 + 0xc41,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&DAT_10115a168);
  local_80 = DAT_101d918e8;
  local_a8 = thunk_FUN_100236d08;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0xb5f,&local_a8);
  FUN_1001829b4(0,plVar21);
  FUN_1001b4964(plVar21,1);
  ppuVar28 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar33 == 0) {
    ppuVar28 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651038(plVar22,*ppuVar28);
  if ((*(uint *)((long)param_1 + 0x7fd4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x7fd4) = *(uint *)((long)param_1 + 0x7fd4) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar22);
  }
  bVar32 = iVar33 == 0;
  uVar37 = 0x44480000;
  if (bVar32) {
    uVar37 = 0x43dc0000;
  }
  ppuVar28 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (bVar32) {
    ppuVar28 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  }
  ppuVar27 = &PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0;
  uVar30 = 0x43380000;
  if (bVar32) {
    ppuVar27 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
    uVar30 = 0x4300cccd;
  }
  FUN_100651708(uVar37,plVar22,1);
  FUN_100651700(plVar22,3);
  uVar36 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_JOIN",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x44960000,plVar23,0,uVar36,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_80 = uVar31;
  local_a8 = thunk_FUN_100236334;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x1011,&local_a8);
  FUN_100651038(param_1 + 0x10f3,*ppuVar28);
  FUN_100181c68(uVar30,plVar23);
  FUN_1001b4964(plVar23,1);
  FUN_100651038(plVar24,*ppuVar27);
  uVar36 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_PRIMETIME_TITLE",0);
  FUN_1006513c0(plVar24,uVar36);
  uVar29 = *(uint *)((long)param_1 + 0x9784);
  if ((uVar29 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x9784) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x5900;
    FUN_1000200a0(plVar24);
  }
  FUN_100651700(plVar24,3);
  ppuVar28 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar33 == 0) {
    ppuVar28 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(plVar25,*ppuVar28);
  uVar36 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_PRIMETIME_LABEL",0);
  FUN_1006513c0(plVar25,uVar36);
  uVar29 = *(uint *)((long)param_1 + 0x98b4);
  if ((uVar29 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x98b4) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x5900;
    FUN_1000200a0(plVar25);
  }
  FUN_100651700(plVar25,3);
  FUN_100651708(0x43fa0000,plVar25,1);
  ppuVar28 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar33 == 0) {
    ppuVar28 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  FUN_100651038(plVar26,*ppuVar28);
  FUN_100651700(plVar26,3);
  local_80 = FUN_100644a94("UI::EVENT_EDIT_GUILD");
  local_a8 = FUN_100234180;
  plVar1 = param_1 + 0x1353;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(plVar1,&local_a8);
  local_80 = FUN_100644a94("UI::EVENT_GUILD_JOIN");
  local_a8 = thunk_FUN_100236334;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(plVar1,&local_a8);
  local_80 = FUN_100644a94("UI::EVENT_GUILD_DECLINE");
  local_a8 = FUN_1002341b0;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(plVar1,&local_a8);
  local_80 = FUN_100644a94("UI::EVENT_EXPAND_GUILD_SETTINGS");
  local_a8 = FUN_1002341f0;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(plVar1,&local_a8);
  local_80 = FUN_100644a94("UI::EVENT_COLLAPSE_GUILD_SETTINGS");
  local_a8 = FUN_1002341f8;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(plVar1,&local_a8);
  FUN_1001a65e8(param_1 + 0x2ed4,&DAT_1011584ba);
  local_80 = FUN_100644a94("UI::GUILD_SETTINGS_CHANGED");
  local_a8 = FUN_100234200;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x2ed5,&local_a8);
  FUN_10001549c(local_c0,"MENU_NEWS_FEED_TAB_NAME_GUILD_DETAILS");
  FUN_10022badc(param_1 + 0x69e2,local_c0);
  local_80 = FUN_100644a94("UI::EVENT_FEED_SIZE_UPDATE");
  local_a8 = thunk_FUN_100236f6c;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x69e3,&local_a8);
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x000100233a6c) */
/* WARNING: Removing unreachable block (ram,0x000100233a38) */
/* WARNING: Removing unreachable block (ram,0x00010023406c) */



/*
 * thunk_FUN_100232f00
 * VA: 0xthunk_100232f00 | Source: functions/named.c:19768
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 15, Vis masks: 2
 * Callees: FUN_10001549c, FUN_10001554c, FUN_1000164dc, FUN_1000200a0, FUN_100126c88, FUN_100131220, FUN_1001816d4, FUN_100181c68 (+71 more)
 * Callers: FUN_10023b4b8, thunk_FUN_10023b4b8
 */
/* WARNING: Removing unreachable block (ram,0x000100233a6c) */
/* WARNING: Removing unreachable block (ram,0x000100233a38) */
/* WARNING: Removing unreachable block (ram,0x00010023406c) */

long * thunk_FUN_100232f00(long *param_1)

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
  undefined **ppuVar27;
  undefined **ppuVar28;
  uint uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  bool bVar32;
  int iVar33;
  int iVar34;
  long lVar35;
  undefined8 uVar36;
  undefined4 uVar37;
  float fVar38;
  undefined1 auStack_c0 [24];
  code *pcStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  
  plVar3 = param_1 + 0x12c7;
  lVar35 = FUN_100269da8();
  FUN_1001e1b34(lVar35 + 200);
  FUN_1004f0a20(param_1 + 0x1c);
  *param_1 = (long)&PTR_thunk_FUN_1002342b0_101477520;
  param_1[0x19] = (long)&PTR_FUN_1014776a0;
  param_1[0x1c] = (long)&PTR_FUN_1014776c8;
  thunk_FUN_1006543ec();
  plVar1 = param_1 + 0x53;
  FUN_10053077c(plVar1,0);
  plVar2 = param_1 + 0xfa;
  thunk_FUN_10019468c(plVar2,0);
  plVar4 = param_1 + 0x27b;
  thunk_FUN_100652c08();
  plVar5 = param_1 + 0x299;
  thunk_FUN_100650e64();
  plVar6 = param_1 + 0x2bf;
  thunk_FUN_100183990(plVar6,0);
  plVar7 = param_1 + 0x37d;
  thunk_FUN_100183990(plVar7,0);
  plVar8 = param_1 + 0x43b;
  FUN_10064e264(plVar8);
  plVar9 = param_1 + 0x452;
  thunk_FUN_1001a7cf4(plVar9);
  plVar10 = param_1 + 0x4c8;
  thunk_FUN_100650e64();
  FUN_1002382ac();
  plVar11 = param_1 + 0x57b;
  thunk_FUN_100183990(plVar11,0);
  plVar12 = param_1 + 0x639;
  thunk_FUN_100652c08(plVar12);
  plVar13 = param_1 + 0x657;
  thunk_FUN_100650e64(plVar13);
  plVar14 = param_1 + 0x67d;
  thunk_FUN_1001b4d10();
  plVar15 = param_1 + 0x8e0;
  thunk_FUN_100652c08(plVar15);
  plVar16 = param_1 + 0x8fe;
  thunk_FUN_100650e64(plVar16);
  plVar17 = param_1 + 0x924;
  FUN_10064e264(plVar17);
  plVar18 = param_1 + 0x93b;
  thunk_FUN_100650e64();
  plVar19 = param_1 + 0x961;
  thunk_FUN_1001ae894();
  plVar20 = param_1 + 0xaa0;
  thunk_FUN_100183990(plVar20,0);
  plVar21 = param_1 + 0xb5e;
  thunk_FUN_100183160(plVar21,0);
  plVar22 = param_1 + 0xfea;
  thunk_FUN_100650e64();
  plVar23 = param_1 + 0x1010;
  thunk_FUN_100181304(plVar23,0);
  FUN_10064fd54(plVar3,1);
  *plVar3 = (long)&PTR_thunk_FUN_10064e2bc_101451a40;
  plVar24 = param_1 + 0x12e0;
  thunk_FUN_100650e64();
  plVar25 = param_1 + 0x1306;
  thunk_FUN_100650e64();
  plVar26 = param_1 + 0x132c;
  thunk_FUN_100650e64();
  thunk_FUN_100191e28();
  thunk_FUN_1001dc54c();
  thunk_FUN_1006421a8(param_1 + 0x69d1);
  thunk_FUN_10022b24c();
  *(undefined4 *)(param_1 + 0x6a61) = 0;
  param_1[0x6a60] = 0;
  param_1[0x6a5f] = 0;
  param_1[0x6a5e] = 0;
  FUN_1000164dc(param_1 + 0x6a62);
  param_1[0x6a66] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6a67) = 0x10100;
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x69d1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x1f,1);
  FUN_100642bd8(param_1 + 0x1f,plVar1,1);
  FUN_1005308f8(plVar1,plVar8,1);
  FUN_100642bd8(plVar8,plVar9,1);
  FUN_100642bd8(plVar8,plVar12,1);
  FUN_100642bd8(plVar8,plVar15,1);
  FUN_100642bd8(plVar8,param_1 + 0x4ee,1);
  FUN_100642bd8(plVar8,plVar10,1);
  FUN_100642bd8(plVar8,plVar11,1);
  FUN_100642bd8(plVar8,plVar16,1);
  FUN_100642bd8(plVar8,plVar13,1);
  FUN_1005308f8(plVar1,plVar4,1);
  FUN_1005308f8(plVar1,plVar2,1);
  FUN_1005308f8(plVar1,plVar5,1);
  iVar33 = FUN_100131220();
  if (iVar33 != 0) {
    FUN_1005308f8(plVar1,plVar6,1);
    FUN_1005308f8(plVar1,plVar7,1);
  }
  FUN_1005308f8(plVar1,plVar14,1);
  FUN_1005308f8(plVar1,plVar17,1);
  FUN_100642bd8(plVar17,plVar19,1);
  FUN_100642bd8(plVar17,plVar18,1);
  FUN_100642bd8(plVar17,plVar20,1);
  FUN_100642bd8(plVar17,plVar21,1);
  FUN_100642bd8(plVar17,plVar22,1);
  FUN_100642bd8(plVar1,plVar23,1);
  FUN_1005308f8(plVar1,plVar3,1);
  FUN_100642bd8(plVar3,plVar24,1);
  FUN_100642bd8(plVar3,plVar25,1);
  FUN_100642bd8(plVar3,plVar26,1);
  FUN_1005308f8(plVar1,param_1 + 0x1352,1);
  FUN_1005308f8(plVar1,param_1 + 0x69e2,1);
  iVar33 = FUN_100126c88();
  FUN_100530adc(plVar1,0,*(undefined1 *)((long)param_1 + 0x35339));
  *(uint *)((long)param_1 + 0x31c) =
       *(uint *)((long)param_1 + 0x31c) & 0xffffffef | (uint)*(byte *)((long)param_1 + 0x35339) << 4
  ;
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_fuzzy_dot");
  uVar29 = *(uint *)((long)param_1 + 0x145c);
  if ((uVar29 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x145c) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x6600;
    FUN_1000200a0(plVar4);
  }
  FUN_10064e47c(0x44c58000,0x44020000,plVar4);
  if ((*(float *)(param_1 + 0x285) != 0.5) || (*(float *)((long)param_1 + 0x142c) != 0.5)) {
    param_1[0x285] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar4);
  }
  FUN_1006515d8(plVar5,0);
  FUN_100651594(plVar5,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e288,&DAT_10115a168);
  FUN_10019495c(plVar2,PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0);
  iVar34 = FUN_100131220();
  if (iVar34 != 0) {
    FUN_100652cdc(param_1 + 0x359,"edit_handle");
    *(uint *)((long)param_1 + 0x1a5c) = *(uint *)((long)param_1 + 0x1a5c) & 0xfffffffb;
    FUN_1001b495c(0x3ecccccd,plVar6);
    uVar29 = *(uint *)((long)param_1 + 0x167c);
    if ((uVar29 & 0x7f80) != 0x4c80) {
      *(uint *)((long)param_1 + 0x167c) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x4c80;
      FUN_1000200a0(plVar6);
    }
    uVar31 = DAT_101d91884;
    uStack_80 = DAT_101d91884;
    pcStack_a8 = thunk_FUN_100236284;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_98 = 0;
    plStack_a0 = param_1;
    FUN_10001554c(param_1 + 0x2c0,&pcStack_a8);
    FUN_1001b4964(plVar6,1);
    FUN_100652cdc(param_1 + 0x417,"edit_handle");
    *(uint *)((long)param_1 + 0x204c) = *(uint *)((long)param_1 + 0x204c) & 0xfffffffb;
    FUN_1001b495c(0x3ecccccd,plVar7);
    uVar29 = *(uint *)((long)param_1 + 0x1c6c);
    if ((uVar29 & 0x7f80) != 0x4c80) {
      *(uint *)((long)param_1 + 0x1c6c) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x4c80;
      FUN_1000200a0(plVar7);
    }
    uStack_80 = uVar31;
    pcStack_a8 = thunk_FUN_1002362dc;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_98 = 0;
    plStack_a0 = param_1;
    FUN_10001554c(param_1 + 0x37e,&pcStack_a8);
    FUN_1001b4964(plVar7,1);
  }
  FUN_1001b5e00(0x44480000,0x42580000,plVar14,0,100,0,0);
  uVar36 = FUN_100345b94();
  uVar36 = FUN_10034c450(uVar36,"*KindredMenuGuildBannerMesh*");
  FUN_1001a812c(plVar9,uVar36);
  *(uint *)((long)param_1 + 0x2314) = *(uint *)((long)param_1 + 0x2314) | 4;
  FUN_1001a8964(plVar9,"GUILD_BANNERS");
  *(uint *)((long)param_1 + 0x27f4) = *(uint *)((long)param_1 + 0x27f4) | 0x10;
  uStack_80 = DAT_101dbd460;
  pcStack_a8 = FUN_1002340f0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x4ef,&pcStack_a8);
  uStack_80 = DAT_101dbd48c;
  pcStack_a8 = FUN_1002340f0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x4ef,&pcStack_a8);
  pcStack_a8 = (code *)CONCAT44(pcStack_a8._4_4_,0xffe3e9f0);
  FUN_100651594(plVar10,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e290,&pcStack_a8);
  FUN_10065165c(plVar10,1);
  pcStack_a8 = (code *)NEON_fmov(0x40800000,4);
  FUN_1006516c8(plVar10,&pcStack_a8);
  pcStack_a8 = (code *)CONCAT44(pcStack_a8._4_4_,0xff464d4f);
  FUN_1006516bc(plVar10,&pcStack_a8);
  uVar29 = *(uint *)((long)param_1 + 0x26c4);
  if ((uVar29 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x26c4) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x6600;
    FUN_1000200a0(plVar10);
  }
  FUN_1001b66dc(0x3fef684c,plVar14,"xp_bar_current","xp_bar_new");
  *(undefined2 *)(param_1 + 0x8df) = 0;
  FUN_100652cac(plVar15,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_fuzzy_dot");
  if ((~*(uint *)((long)param_1 + 0x4784) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x4784) = *(uint *)((long)param_1 + 0x4784) | 0x7f80;
    FUN_1000200a0(plVar15);
  }
  FUN_10064e47c(0x43960000,0x43820000,plVar15);
  if ((*(float *)(param_1 + 0x8ea) != 0.5) || (*(float *)((long)param_1 + 0x4754) != 0.5)) {
    param_1[0x8ea] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar15);
  }
  FUN_100651594(plVar16,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
  FUN_100652cac(plVar12,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_fuzzy_dot");
  uVar29 = *(uint *)((long)param_1 + 0x324c);
  if ((uVar29 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x324c) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x6600;
    FUN_1000200a0(plVar12);
  }
  FUN_10064e47c(0x43960000,0x43820000,plVar12);
  if ((*(float *)(param_1 + 0x643) != 0.5) || (*(float *)((long)param_1 + 0x321c) != 0.5)) {
    param_1[0x643] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar12);
  }
  FUN_100651594(plVar13,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
  FUN_10065165c(plVar13,1);
  pcStack_a8 = (code *)0x4000000040000000;
  FUN_1006516c8(plVar13,&pcStack_a8);
  pcStack_a8 = (code *)CONCAT44(pcStack_a8._4_4_,0xff323232);
  FUN_1006516bc(plVar13,&pcStack_a8);
  FUN_100652cdc(param_1 + 0x615,"circle_button_question");
  uVar29 = *(uint *)((long)param_1 + 0x2c5c);
  if ((uVar29 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x2c5c) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar11);
  }
  FUN_1001b495c(0xbf800000,plVar11);
  uVar31 = DAT_101d91884;
  uStack_80 = DAT_101d91884;
  pcStack_a8 = thunk_FUN_1002365d8;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x57c,&pcStack_a8);
  FUN_1001b4964(plVar11,1);
  FUN_1002340fc(0x3f23d70a,plVar19);
  uStack_80 = FUN_100644a94("UI::EVENT_MENU_OPEN_CHEST");
  pcStack_a8 = thunk_FUN_100236d08;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x962,&pcStack_a8);
  FUN_1001af9fc(plVar19,0);
  FUN_10001549c(&pcStack_a8,"guild");
  FUN_1001aefd4(plVar19,&pcStack_a8);
  FUN_10001549c(&pcStack_a8,"IDLE_CLOSED");
  FUN_1001aeb7c(0x3f333333,plVar19,&pcStack_a8);
  ppuVar28 = &PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0;
  if (iVar33 == 0) {
    ppuVar28 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  }
  FUN_100651594(plVar18,*ppuVar28,&DAT_10115a168);
  uVar29 = *(uint *)((long)param_1 + 0x4a5c);
  if ((uVar29 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x4a5c) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x6600;
    FUN_1000200a0(plVar18);
  }
  FUN_10065165c(plVar18,1);
  uVar36 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_REWARD_CHEST_TITLE",0);
  FUN_1006513c0(plVar18,uVar36);
  FUN_100652cdc(param_1 + 0xb3a,"circle_button_question");
  uVar29 = *(uint *)((long)param_1 + 0x5584);
  if ((uVar29 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x5584) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar20);
  }
  FUN_1001b495c(0xbf800000,plVar20);
  uStack_80 = uVar31;
  pcStack_a8 = thunk_FUN_100236dac;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0xaa1,&pcStack_a8);
  fVar38 = DAT_101854a78;
  if (iVar33 == 0) {
    fVar38 = 1.0;
  }
  fVar38 = fVar38 * 0.7;
  if ((*(float *)(param_1 + 0xaa9) != fVar38) || (*(float *)((long)param_1 + 0x554c) != fVar38)) {
    *(float *)(param_1 + 0xaa9) = fVar38;
    *(float *)((long)param_1 + 0x554c) = fVar38;
    FUN_1000200a0(plVar20);
  }
  FUN_1001b4964(plVar20,1);
  uVar36 = FUN_1004e0150("GENERIC_DIALOG_OPEN",0);
  FUN_1001816d4(0x41c00000,0x438c0000,0x445c0000,plVar21,0,uVar36,&DAT_10115a168,&DAT_101dc1cb8,0);
  FUN_100181c68(0x42ef3333,plVar21);
  FUN_100651594(param_1 + 0xc41,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&DAT_10115a168);
  uStack_80 = DAT_101d918e8;
  pcStack_a8 = thunk_FUN_100236d08;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0xb5f,&pcStack_a8);
  FUN_1001829b4(0,plVar21);
  FUN_1001b4964(plVar21,1);
  ppuVar28 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar33 == 0) {
    ppuVar28 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651038(plVar22,*ppuVar28);
  if ((*(uint *)((long)param_1 + 0x7fd4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x7fd4) = *(uint *)((long)param_1 + 0x7fd4) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar22);
  }
  bVar32 = iVar33 == 0;
  uVar37 = 0x44480000;
  if (bVar32) {
    uVar37 = 0x43dc0000;
  }
  ppuVar28 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (bVar32) {
    ppuVar28 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  }
  ppuVar27 = &PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0;
  uVar30 = 0x43380000;
  if (bVar32) {
    ppuVar27 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
    uVar30 = 0x4300cccd;
  }
  FUN_100651708(uVar37,plVar22,1);
  FUN_100651700(plVar22,3);
  uVar36 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_JOIN",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x44960000,plVar23,0,uVar36,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_80 = uVar31;
  pcStack_a8 = thunk_FUN_100236334;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x1011,&pcStack_a8);
  FUN_100651038(param_1 + 0x10f3,*ppuVar28);
  FUN_100181c68(uVar30,plVar23);
  FUN_1001b4964(plVar23,1);
  FUN_100651038(plVar24,*ppuVar27);
  uVar36 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_PRIMETIME_TITLE",0);
  FUN_1006513c0(plVar24,uVar36);
  uVar29 = *(uint *)((long)param_1 + 0x9784);
  if ((uVar29 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x9784) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x5900;
    FUN_1000200a0(plVar24);
  }
  FUN_100651700(plVar24,3);
  ppuVar28 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar33 == 0) {
    ppuVar28 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(plVar25,*ppuVar28);
  uVar36 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_PRIMETIME_LABEL",0);
  FUN_1006513c0(plVar25,uVar36);
  uVar29 = *(uint *)((long)param_1 + 0x98b4);
  if ((uVar29 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x98b4) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x5900;
    FUN_1000200a0(plVar25);
  }
  FUN_100651700(plVar25,3);
  FUN_100651708(0x43fa0000,plVar25,1);
  ppuVar28 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar33 == 0) {
    ppuVar28 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  FUN_100651038(plVar26,*ppuVar28);
  FUN_100651700(plVar26,3);
  uStack_80 = FUN_100644a94("UI::EVENT_EDIT_GUILD");
  pcStack_a8 = FUN_100234180;
  plVar1 = param_1 + 0x1353;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(plVar1,&pcStack_a8);
  uStack_80 = FUN_100644a94("UI::EVENT_GUILD_JOIN");
  pcStack_a8 = thunk_FUN_100236334;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(plVar1,&pcStack_a8);
  uStack_80 = FUN_100644a94("UI::EVENT_GUILD_DECLINE");
  pcStack_a8 = FUN_1002341b0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(plVar1,&pcStack_a8);
  uStack_80 = FUN_100644a94("UI::EVENT_EXPAND_GUILD_SETTINGS");
  pcStack_a8 = FUN_1002341f0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(plVar1,&pcStack_a8);
  uStack_80 = FUN_100644a94("UI::EVENT_COLLAPSE_GUILD_SETTINGS");
  pcStack_a8 = FUN_1002341f8;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(plVar1,&pcStack_a8);
  FUN_1001a65e8(param_1 + 0x2ed4,&DAT_1011584ba);
  uStack_80 = FUN_100644a94("UI::GUILD_SETTINGS_CHANGED");
  pcStack_a8 = FUN_100234200;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x2ed5,&pcStack_a8);
  FUN_10001549c(auStack_c0,"MENU_NEWS_FEED_TAB_NAME_GUILD_DETAILS");
  FUN_10022badc(param_1 + 0x69e2,auStack_c0);
  uStack_80 = FUN_100644a94("UI::EVENT_FEED_SIZE_UPDATE");
  pcStack_a8 = thunk_FUN_100236f6c;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x69e3,&pcStack_a8);
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x000100243a60) */



/*
 * FUN_10023b4b8
 * VA: 0x10023b4b8 | Source: functions/10023.c:8211
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 17
 * Callees: FUN_10001554c, FUN_1000200a0, FUN_10010b098, FUN_10010b1a8, FUN_10014f4a0, FUN_1001c88a4, FUN_1001c9460, FUN_1001c9508 (+35 more)
 */
long * FUN_10023b4b8(long *param_1)

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
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 local_a0;
  undefined8 uStack_98;
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  lVar12 = FUN_1001e6910();
  FUN_10014f4a0(lVar12 + 0x2c30);
  *param_1 = (long)&PTR_thunk_FUN_10023bbe4_101477bf0;
  param_1[0x586] = (long)&PTR_FUN_101477e00;
  plVar2 = param_1 + 0x589;
  FUN_1006421a8();
  param_1[0x589] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar3 = param_1 + 0x59a;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x5b8;
  FUN_10064e264(plVar4);
  plVar5 = param_1 + 0x5cf;
  FUN_10053077c(plVar5,0);
  plVar6 = param_1 + 0x679;
  thunk_FUN_1001c81d8();
  plVar7 = param_1 + 0x7d3;
  thunk_FUN_100232f00(plVar7);
  plVar8 = param_1 + 0x723b;
  thunk_FUN_10022d51c(plVar8);
  thunk_FUN_100238378(param_1 + 0x92f5);
  plVar9 = param_1 + 0xb623;
  thunk_FUN_10025fd1c(plVar9);
  plVar10 = param_1 + 0xb933;
  thunk_FUN_1002268e4(plVar10);
  param_1[0xc8c6] = 0;
  param_1[0xc8c3] = 0;
  param_1[0xc8c2] = 0;
  param_1[0xc8c5] = 0;
  param_1[0xc8c4] = 0;
  param_1[0xc8bf] = 0;
  param_1[0xc8be] = 0;
  param_1[0xc8c1] = 0;
  param_1[0xc8c0] = 0;
  param_1[0xc8bb] = 0;
  param_1[0xc8ba] = 0;
  param_1[0xc8bd] = 0;
  param_1[0xc8bc] = 0;
  *(undefined2 *)(param_1 + 0xc8c7) = 1;
  plVar1 = param_1 + 0x2e;
  *(undefined1 *)((long)param_1 + 0x6463a) = 1;
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100642bd8(plVar1,plVar4,1);
  FUN_100642bd8(plVar4,plVar5,1);
  FUN_1005308f8(plVar5,plVar2,1);
  FUN_100642bd8(plVar2,plVar7,1);
  FUN_100642bd8(plVar2,plVar8,1);
  FUN_100642bd8(plVar2,param_1 + 0x92f5,1);
  FUN_100642bd8(plVar2,plVar9,1);
  FUN_100642bd8(plVar2,plVar6,1);
  FUN_100642bd8(plVar1,plVar10,1);
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar3,&DAT_10115a164,2);
  uVar11 = *(uint *)((long)param_1 + 0x2d54);
  if ((uVar11 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x2d54) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x2600;
    FUN_1000200a0(plVar3);
  }
  FUN_100530adc(plVar5,0,1);
  param_1[0x676] = (long)plVar7;
  param_1[0x677] = (long)plVar8;
  param_1[0x678] = (long)plVar9;
  local_a0 = 0;
  uStack_98 = 0;
  uVar13 = FUN_1004e0150("MENU_PROFILE_TAB_OVERVIEW",0);
  FUN_10010b098(&local_a0,uVar13);
  uVar13 = FUN_1004e0150("MENU_GUILD_TAB_MEMBERS",0);
  FUN_10010b098(&local_a0,uVar13);
  uVar13 = FUN_1004e0150("MENU_GUILD_TAB_TROPHIES",0);
  FUN_10010b098(&local_a0,uVar13);
  FUN_1001c88a4(0,0x43fa0000,0x41a00000,0x3f800000,0x3f800000,plVar6,&local_a0);
  FUN_1001c9460(0xcd,plVar6);
  local_68 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  local_90 = FUN_10023bac0;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x67a,&local_90);
  FUN_1001c9508(plVar6,0,"GUILD.CHESTS.*");
  FUN_1006423ec(param_1 + 0x62,1);
  FUN_1006423ec(param_1 + 0x566,1);
  FUN_100269e20(0,plVar7,1,4,0);
  (**(code **)(*param_1 + 0x188))(param_1,plVar10,plVar2,0,1);
  local_68 = DAT_101d91884;
  local_90 = FUN_10023baec;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0xb94b,&local_90);
  local_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_MESSAGE_SUBMIT");
  local_90 = FUN_10023bb14;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0xb934,&local_90);
  local_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_MOTTO");
  local_90 = thunk_FUN_10023ccdc;
  plVar1 = param_1 + 0x7d4;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  local_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_MESSAGE");
  local_90 = thunk_FUN_10023cd58;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  local_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_NAME");
  local_90 = thunk_FUN_10023cdd4;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  local_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_TAG");
  local_90 = thunk_FUN_10023ce64;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  local_68 = FUN_100644a94("UI::EVENT_EXPAND_GUILD_SETTINGS");
  local_90 = FUN_10023bb80;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  local_68 = FUN_100644a94("UI::EVENT_GUILD_OVERVIEW_SIZE_CHANGE");
  local_90 = thunk_FUN_10023cef4;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  local_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_NAME");
  local_90 = thunk_FUN_10023cdd4;
  plVar1 = param_1 + 0x723c;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  local_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_TAG");
  local_90 = thunk_FUN_10023ce64;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  local_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_TYPE");
  local_90 = FUN_10023bb88;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  FUN_1004e18bc(&DAT_101d234d8,param_1,0x9d2c9b16,thunk_FUN_10023c094,0);
  FUN_10010b1a8(&local_a0,1);
  return param_1;
}



/*
 * thunk_FUN_10023b4b8
 * VA: 0xthunk_10023b4b8 | Source: functions/10023.c:8581
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 17
 * Callees: FUN_10001554c, FUN_1000200a0, FUN_10010b098, FUN_10010b1a8, FUN_10014f4a0, FUN_1001c88a4, FUN_1001c9460, FUN_1001c9508 (+35 more)
 * Callers: FUN_10021a964, FUN_100266a50, FUN_10027e884, thunk_FUN_100266a50, thunk_FUN_10027e884
 */
long * thunk_FUN_10023b4b8(long *param_1)

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
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  lVar12 = FUN_1001e6910();
  FUN_10014f4a0(lVar12 + 0x2c30);
  *param_1 = (long)&PTR_thunk_FUN_10023bbe4_101477bf0;
  param_1[0x586] = (long)&PTR_FUN_101477e00;
  plVar2 = param_1 + 0x589;
  FUN_1006421a8();
  param_1[0x589] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar3 = param_1 + 0x59a;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x5b8;
  FUN_10064e264(plVar4);
  plVar5 = param_1 + 0x5cf;
  FUN_10053077c(plVar5,0);
  plVar6 = param_1 + 0x679;
  thunk_FUN_1001c81d8();
  plVar7 = param_1 + 0x7d3;
  thunk_FUN_100232f00(plVar7);
  plVar8 = param_1 + 0x723b;
  thunk_FUN_10022d51c(plVar8);
  thunk_FUN_100238378(param_1 + 0x92f5);
  plVar9 = param_1 + 0xb623;
  thunk_FUN_10025fd1c(plVar9);
  plVar10 = param_1 + 0xb933;
  thunk_FUN_1002268e4(plVar10);
  param_1[0xc8c6] = 0;
  param_1[0xc8c3] = 0;
  param_1[0xc8c2] = 0;
  param_1[0xc8c5] = 0;
  param_1[0xc8c4] = 0;
  param_1[0xc8bf] = 0;
  param_1[0xc8be] = 0;
  param_1[0xc8c1] = 0;
  param_1[0xc8c0] = 0;
  param_1[0xc8bb] = 0;
  param_1[0xc8ba] = 0;
  param_1[0xc8bd] = 0;
  param_1[0xc8bc] = 0;
  *(undefined2 *)(param_1 + 0xc8c7) = 1;
  plVar1 = param_1 + 0x2e;
  *(undefined1 *)((long)param_1 + 0x6463a) = 1;
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100642bd8(plVar1,plVar4,1);
  FUN_100642bd8(plVar4,plVar5,1);
  FUN_1005308f8(plVar5,plVar2,1);
  FUN_100642bd8(plVar2,plVar7,1);
  FUN_100642bd8(plVar2,plVar8,1);
  FUN_100642bd8(plVar2,param_1 + 0x92f5,1);
  FUN_100642bd8(plVar2,plVar9,1);
  FUN_100642bd8(plVar2,plVar6,1);
  FUN_100642bd8(plVar1,plVar10,1);
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar3,&DAT_10115a164,2);
  uVar11 = *(uint *)((long)param_1 + 0x2d54);
  if ((uVar11 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x2d54) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x2600;
    FUN_1000200a0(plVar3);
  }
  FUN_100530adc(plVar5,0,1);
  param_1[0x676] = (long)plVar7;
  param_1[0x677] = (long)plVar8;
  param_1[0x678] = (long)plVar9;
  uStack_a0 = 0;
  uStack_98 = 0;
  uVar13 = FUN_1004e0150("MENU_PROFILE_TAB_OVERVIEW",0);
  FUN_10010b098(&uStack_a0,uVar13);
  uVar13 = FUN_1004e0150("MENU_GUILD_TAB_MEMBERS",0);
  FUN_10010b098(&uStack_a0,uVar13);
  uVar13 = FUN_1004e0150("MENU_GUILD_TAB_TROPHIES",0);
  FUN_10010b098(&uStack_a0,uVar13);
  FUN_1001c88a4(0,0x43fa0000,0x41a00000,0x3f800000,0x3f800000,plVar6,&uStack_a0);
  FUN_1001c9460(0xcd,plVar6);
  uStack_68 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  pcStack_90 = FUN_10023bac0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x67a,&pcStack_90);
  FUN_1001c9508(plVar6,0,"GUILD.CHESTS.*");
  FUN_1006423ec(param_1 + 0x62,1);
  FUN_1006423ec(param_1 + 0x566,1);
  FUN_100269e20(0,plVar7,1,4,0);
  (**(code **)(*param_1 + 0x188))(param_1,plVar10,plVar2,0,1);
  uStack_68 = DAT_101d91884;
  pcStack_90 = FUN_10023baec;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0xb94b,&pcStack_90);
  uStack_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_MESSAGE_SUBMIT");
  pcStack_90 = FUN_10023bb14;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0xb934,&pcStack_90);
  uStack_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_MOTTO");
  pcStack_90 = thunk_FUN_10023ccdc;
  plVar1 = param_1 + 0x7d4;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&pcStack_90);
  uStack_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_MESSAGE");
  pcStack_90 = thunk_FUN_10023cd58;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&pcStack_90);
  uStack_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_NAME");
  pcStack_90 = thunk_FUN_10023cdd4;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&pcStack_90);
  uStack_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_TAG");
  pcStack_90 = thunk_FUN_10023ce64;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&pcStack_90);
  uStack_68 = FUN_100644a94("UI::EVENT_EXPAND_GUILD_SETTINGS");
  pcStack_90 = FUN_10023bb80;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&pcStack_90);
  uStack_68 = FUN_100644a94("UI::EVENT_GUILD_OVERVIEW_SIZE_CHANGE");
  pcStack_90 = thunk_FUN_10023cef4;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&pcStack_90);
  uStack_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_NAME");
  pcStack_90 = thunk_FUN_10023cdd4;
  plVar1 = param_1 + 0x723c;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&pcStack_90);
  uStack_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_TAG");
  pcStack_90 = thunk_FUN_10023ce64;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&pcStack_90);
  uStack_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_TYPE");
  pcStack_90 = FUN_10023bb88;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&pcStack_90);
  FUN_1004e18bc(&DAT_101d234d8,param_1,0x9d2c9b16,thunk_FUN_10023c094,0);
  FUN_10010b1a8(&uStack_a0,1);
  return param_1;
}



/*
 * FUN_10024dcf8
 * VA: 0x10024dcf8 | Source: functions/10024.c:8407
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 6, Vis masks: 17
 * Callees: FUN_10001549c, FUN_1000165f0, FUN_100126b4c, FUN_10015d3ec, FUN_10018e754, FUN_10018e8a8, FUN_10018f09c, FUN_10024b30c (+8 more)
 * Callers: FUN_10024dc6c
 */
void FUN_10024dcf8(long param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  char *pcVar10;
  uint uVar11;
  char cVar12;
  uint uVar13;
  void *local_58 [2];
  char local_41;
  
  iVar3 = FUN_1004eef10();
  if (iVar3 == 0) {
    return;
  }
  iVar3 = FUN_100126b4c();
  if ((iVar3 != 0) && (*(char *)(param_1 + 0x2ceb8) == '\0')) {
    lVar5 = FUN_10015d3ec();
    FUN_10024b30c(param_1,*(undefined1 *)(lVar5 + 0x567a));
  }
  puVar1 = (uint *)(param_1 + 0x10854);
  bVar2 = *(byte *)(param_1 + 0x2cea8);
  *(uint *)(param_1 + 0x2560c) = *(uint *)(param_1 + 0x2560c) & 0xfffffffb | (uint)bVar2 << 2;
  *(uint *)(param_1 + 0x260dc) =
       *(uint *)(param_1 + 0x260dc) & 0xfffffff8 |
       *(uint *)(param_1 + 0x260dc) & 3 | (uint)(bVar2 == 0) << 2;
  if (bVar2 == 0) {
    uVar13 = 0;
    uVar11 = *(uint *)(param_1 + 0x2620c) & 0xfffffffb;
    *(uint *)(param_1 + 0x2620c) = uVar11;
    *(uint *)(param_1 + 0x28a84) = *(uint *)(param_1 + 0x28a84) & 0xfffffffb;
    *(uint *)(param_1 + 0x26294) = *(uint *)(param_1 + 0x26294) & 0xfffffffb;
    cVar12 = *(char *)(param_1 + 0x2ceaa);
  }
  else {
    cVar12 = *(char *)(param_1 + 0x2ceaa);
    uVar11 = *(uint *)(param_1 + 0x2620c) & 0xfffffff8 |
             *(uint *)(param_1 + 0x2620c) & 3 | (uint)(cVar12 == '\0') << 2;
    *(uint *)(param_1 + 0x2620c) = uVar11;
    *(uint *)(param_1 + 0x28a84) =
         *(uint *)(param_1 + 0x28a84) & 0xfffffff8 |
         *(uint *)(param_1 + 0x28a84) & 3 | (uint)(0xd < *(uint *)(param_1 + 0x2ce98)) << 2;
    if (*(uint *)(param_1 + 0x2ce98) < 0xe) {
      *(uint *)(param_1 + 0x26294) = *(uint *)(param_1 + 0x26294) | 4;
      uVar13 = (uint)(*(int *)(param_1 + 0x2cdd0) == 0) << 2;
    }
    else {
      uVar13 = 0;
      *(uint *)(param_1 + 0x26294) = *(uint *)(param_1 + 0x26294) & 0xfffffffb;
    }
  }
  *(uint *)(param_1 + 0x28bb4) = *(uint *)(param_1 + 0x28bb4) & 0xfffffffb | uVar13;
  if (cVar12 == '\0' && bVar2 == 0) {
    *(undefined1 *)(param_1 + 0x2ceaa) = 1;
    *(uint *)(param_1 + 0x28ce4) = *(uint *)(param_1 + 0x28ce4) | 4;
    *(uint *)(param_1 + 0x2620c) = uVar11 & 0xfffffffb;
    FUN_1000165f0(param_1 + 0x2cdf0,0);
  }
  *(uint *)(param_1 + 0x134f4) = *(uint *)(param_1 + 0x134f4) | 4;
  lVar5 = FUN_1004f0338();
  iVar3 = *(int *)(lVar5 + 0x98);
  iVar4 = FUN_1004eef10();
  if ((iVar4 != 0) && (iVar3 - 2U < 4)) {
    FUN_10018f09c(param_1 + 0xb0e8,0);
    *puVar1 = *puVar1 & 0xfffffffb;
    *(uint *)(param_1 + 0x11e0c) = *(uint *)(param_1 + 0x11e0c) | 4;
    uVar6 = FUN_1004e0150("MENU_PARTY_FINDING_MATCH",0);
    FUN_1006513c0(param_1 + 0x13340,uVar6);
    *(uint *)(param_1 + 0x26294) = *(uint *)(param_1 + 0x26294) & 0xfffffffb;
    return;
  }
  *(uint *)(param_1 + 0x11e0c) = *(uint *)(param_1 + 0x11e0c) & 0xfffffffb;
  lVar5 = param_1 + 0xb0e8;
  FUN_10018f09c(lVar5,1);
  if (*(char *)(param_1 + 0x2cea8) == '\0') {
    *puVar1 = *puVar1 & 0xfffffffb;
    uVar6 = FUN_1004e0150("MENU_PARTY_ONLY_CAPTAIN_CAN_QUEUE",0);
    FUN_1006513c0(param_1 + 0x13340,uVar6);
    return;
  }
  uVar11 = *(uint *)(param_1 + 0x2ce98);
  *(bool *)(param_1 + 0x2ceb7) = 0xd < uVar11;
  uVar13 = *(uint *)(param_1 + 0x2cedc);
  if ((uVar13 < uVar11) && (*(char *)(param_1 + 0x2ceab) != '\0')) {
    FUN_10001549c(local_58,"*GameMode_HF_Private*");
    FUN_10018e754(lVar5,local_58,0,0);
    if (local_41 < '\0') {
      operator_delete(local_58[0]);
    }
    uVar11 = *(uint *)(param_1 + 0x2ce98);
    uVar13 = *(uint *)(param_1 + 0x2cedc);
  }
  if ((uVar13 <= uVar11) && (*(char *)(param_1 + 0x2ceab) == '\0')) {
    FUN_10018e8a8(lVar5);
    lVar7 = FUN_10034ccb8();
    if (*(char *)(lVar7 + 0x53) == '\0') {
      *(undefined1 *)(param_1 + 0x2ceb7) = 1;
    }
  }
  if (*(char *)(param_1 + 0x2cea9) == '\0') {
    *puVar1 = *puVar1 & 0xfffffffb;
    pcVar10 = "MENU_PARTY_NOT_READY_TO_QUEUE";
  }
  else {
    iVar3 = FUN_10024f6c8(param_1);
    if ((iVar3 == 0) || (uVar8 = FUN_10024f5b0(param_1), (uVar8 & 1) != 0)) {
      FUN_10018e8a8(lVar5);
      piVar9 = (int *)FUN_10034ccb8();
      if ((*piVar9 == 0xb) && (uVar8 = FUN_10024f5b0(param_1), (uVar8 & 1) == 0)) {
        *puVar1 = *puVar1 & 0xfffffffb;
        pcVar10 = "MENU_PARTY_MODE_TEAMS_NOT_FULL";
      }
      else {
        FUN_10018e8a8(lVar5);
        piVar9 = (int *)FUN_10034ccb8();
        if ((*piVar9 != 0x24) ||
           (iVar3 = FUN_10024f630(param_1), iVar3 == *(int *)(param_1 + 0x2ced8))) {
          iVar3 = FUN_10024f630(param_1);
          if (iVar3 == 0) {
            uVar11 = 0;
          }
          else {
            uVar11 = (uint)(1 < *(uint *)(param_1 + 0x2ce98)) << 2;
          }
          *puVar1 = *puVar1 & 0xfffffffb | uVar11;
          FUN_1006513c0(param_1 + 0x13340,&DAT_101d91650);
          *(uint *)(param_1 + 0x134f4) = *(uint *)(param_1 + 0x134f4) & 0xfffffffb;
          return;
        }
        *puVar1 = *puVar1 & 0xfffffffb;
        pcVar10 = "MENU_PARTY_MODE_A_TEAM_IS_MISSING_PLAYERS";
      }
    }
    else {
      *puVar1 = *puVar1 & 0xfffffffb;
      pcVar10 = "MENU_PARTY_DRAFT_TEAMS_NOT_FULL";
    }
  }
  uVar6 = FUN_1004e0150(pcVar10,0);
  FUN_1006513c0(param_1 + 0x13340,uVar6);
  return;
}



/*
 * FUN_100251d70
 * VA: 0x100251d70 | Source: functions/10025.c:1413
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 4
 * Callees: FUN_10018e8a8, FUN_1001e3090, FUN_10024f6c8, FUN_10034ccb8, FUN_1004e0150, FUN_1004e3120, FUN_1004e313c, FUN_1004e38ac (+2 more)
 * Callers: FUN_1002522f0
 */
void FUN_100251d70(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  if ((*(int *)(param_2 + 0x28) == 0) && (*(char *)(param_2 + 0x494) == '\0')) {
    uVar1 = param_2 + 0x460;
    bVar11 = *(byte *)(param_2 + 0x477);
    uVar9 = (ulong)bVar11;
    uVar10 = *(ulong *)(param_2 + 0x468);
    uVar2 = uVar10;
    if (-1 < (char)bVar11) {
      uVar2 = uVar9;
    }
    if (uVar2 == 3) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e887a);
      if (iVar3 == 0) {
        uVar1 = param_2 + 0x478;
        bVar11 = *(byte *)(param_2 + 0x48f);
        uVar9 = (ulong)bVar11;
        uVar10 = *(ulong *)(param_2 + 0x480);
        uVar2 = uVar10;
        if (-1 < (char)bVar11) {
          uVar2 = uVar9;
        }
        if (uVar2 == 0xf) {
          iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e887e);
          if (iVar3 == 0) {
            uVar4 = FUN_1004e0150("PARTY_BANNED_TITLE",0);
            pcVar6 = "PARTY_BANNED_MSG";
            goto LAB_1002522ac;
          }
          bVar11 = *(byte *)(param_2 + 0x48f);
          uVar9 = (ulong)bVar11;
          uVar10 = *(ulong *)(param_2 + 0x480);
        }
        uVar2 = uVar10;
        if (-1 < (char)bVar11) {
          uVar2 = uVar9;
        }
        if (uVar2 != 3) {
LAB_10025201c:
          if (-1 < (char)bVar11) {
            uVar10 = uVar9;
          }
          if (uVar10 != 6) {
            return;
          }
          iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e88cb);
          if (iVar3 != 0) {
            return;
          }
          uVar4 = FUN_1004e0150("PARTY_BANNED_MSG_GM_BAN",0);
          thunk_FUN_1004e439c(auStack_40,uVar4);
          FUN_1004e313c(auStack_50);
          FUN_1004e38ac(auStack_50,"%d");
          FUN_1004e3120(auStack_60,"[HOURS]");
          FUN_1004e3bc4(auStack_40,0,auStack_60,auStack_50);
          if (local_58 != (void *)0x0) {
            operator_delete__(local_58);
          }
          uVar4 = FUN_1004e0150("PARTY_BANNED_TITLE",0);
          uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
          FUN_1001e3090(uVar4,auStack_40,uVar7,param_1,0);
          if (local_48 != (void *)0x0) {
            operator_delete__(local_48);
          }
          if (local_38 == (void *)0x0) {
            return;
          }
          operator_delete__(local_38);
          return;
        }
        iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e88b2);
        if (iVar3 != 0) {
          bVar11 = *(byte *)(param_2 + 0x48f);
          uVar9 = (ulong)bVar11;
          uVar10 = *(ulong *)(param_2 + 0x480);
          goto LAB_10025201c;
        }
        uVar4 = FUN_1004e0150("PARTY_BANNED_TITLE",0);
        pcVar6 = "PARTY_BANNED_MSG_AFK";
        goto LAB_1002522ac;
      }
      bVar11 = *(byte *)(param_2 + 0x477);
      uVar9 = (ulong)bVar11;
      uVar10 = *(ulong *)(param_2 + 0x468);
    }
    uVar2 = uVar10;
    if (-1 < (char)bVar11) {
      uVar2 = uVar9;
    }
    if (uVar2 == 10) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e88f2);
      if (iVar3 == 0) {
        iVar3 = FUN_10024f6c8(param_1);
        if (iVar3 == 0) {
          uVar4 = FUN_1004e0150("PARTY_RANKED_NOT_ENOUGH_HEROES_TITLE",0);
          pcVar6 = "PARTY_RANKED_NOT_ENOUGH_HEROES_MSG";
        }
        else {
          uVar4 = FUN_1004e0150("PARTY_DRAFT_NOT_ENOUGH_HEROES_TITLE",0);
          pcVar6 = "PARTY_DRAFT_NOT_ENOUGH_HEROES_MSG";
        }
        goto LAB_1002522ac;
      }
      bVar11 = *(byte *)(param_2 + 0x477);
      uVar9 = (ulong)bVar11;
      uVar10 = *(ulong *)(param_2 + 0x468);
    }
    uVar2 = uVar10;
    if (-1 < (char)bVar11) {
      uVar2 = uVar9;
    }
    if (uVar2 == 0xf) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e898b);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("PARTY_RANKED_PARTY_ELO_SPREAD_TOO_WIDE_TITLE",0);
        pcVar6 = "PARTY_RANKED_PARTY_ELO_SPREAD_TOO_WIDE_MSG";
        goto LAB_1002522ac;
      }
      bVar11 = *(byte *)(param_2 + 0x477);
      uVar9 = (ulong)bVar11;
      uVar10 = *(ulong *)(param_2 + 0x468);
    }
    uVar2 = uVar10;
    if (-1 < (char)bVar11) {
      uVar2 = uVar9;
    }
    if (uVar2 == 0xf) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013d25e0);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("PARTY_5V5_PARTY_MISSING_ACCESS_TITLE",0);
        pcVar6 = "PARTY_5V5_PARTY_MISSING_ACCESS_MSG";
        goto LAB_1002522ac;
      }
      bVar11 = *(byte *)(param_2 + 0x477);
      uVar9 = (ulong)bVar11;
      uVar10 = *(ulong *)(param_2 + 0x468);
    }
    uVar2 = uVar10;
    if (-1 < (char)bVar11) {
      uVar2 = uVar9;
    }
    if (uVar2 == 5) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013d2620);
      if (iVar3 == 0) {
        FUN_10018e8a8(param_1 + 0xb0e8);
        piVar5 = (int *)FUN_10034ccb8();
        if (*piVar5 == 0) {
          uVar4 = FUN_1004e0150("PARTY_RANKED_LEVEL_REQ_NOT_MET_TITLE",0);
          pcVar6 = "PARTY_RANKED_LEVEL_REQ_NOT_MET_MSG";
        }
        else {
          FUN_10018e8a8(param_1 + 0xb0e8);
          piVar5 = (int *)FUN_10034ccb8();
          if (*piVar5 == 9) {
            uVar4 = FUN_1004e0150("PARTY_CASUAL_LEVEL_REQ_NOT_MET_TITLE",0);
            pcVar6 = "PARTY_CASUAL_LEVEL_REQ_NOT_MET_MSG";
          }
          else {
            uVar4 = FUN_1004e0150("PARTY_LEVEL_REQ_NOT_MET_TITLE",0);
            pcVar6 = "PARTY_LEVEL_REQ_NOT_MET_MSG";
          }
        }
        goto LAB_1002522ac;
      }
      bVar11 = *(byte *)(param_2 + 0x477);
      uVar9 = (ulong)bVar11;
      uVar10 = *(ulong *)(param_2 + 0x468);
    }
    uVar2 = uVar10;
    if (-1 < (char)bVar11) {
      uVar2 = uVar9;
    }
    if (uVar2 == 5) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e8b05);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("PARTY_RANKED_KARMA_REQ_NOT_MET_TITLE",0);
        pcVar6 = "PARTY_RANKED_KARMA_REQ_NOT_MET_MSG";
        goto LAB_1002522ac;
      }
      bVar11 = *(byte *)(param_2 + 0x477);
      uVar9 = (ulong)bVar11;
      uVar10 = *(ulong *)(param_2 + 0x468);
    }
    if (-1 < (char)bVar11) {
      uVar10 = uVar9;
    }
    if ((uVar10 == 0x11) &&
       (iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e8b53), iVar3 == 0)) {
      uVar4 = FUN_1004e0150("MENU_PARTY_5V5_NO_QUAD_QUEUE_TITLE",0);
      pcVar6 = "MENU_PARTY_5V5_NO_QUAD_QUEUE";
LAB_1002522ac:
      uVar7 = FUN_1004e0150(pcVar6,0);
      uVar8 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1001e3090(uVar4,uVar7,uVar8,param_1,0);
      return;
    }
  }
  return;
}



/*
 * FUN_1002522fc
 * VA: 0x1002522fc | Source: functions/10025.c:1645
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 4
 * Callees: FUN_10018e8a8, FUN_1001e3090, FUN_10024f6c8, FUN_10034ccb8, FUN_1004e0150, FUN_1004e3120, FUN_1004e313c, FUN_1004e38ac (+2 more)
 * Callers: FUN_10025287c
 */
void FUN_1002522fc(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  if ((*(int *)(param_2 + 0x50) == 0) && (*(char *)(param_2 + 0x4bc) == '\0')) {
    uVar1 = param_2 + 0x488;
    bVar11 = *(byte *)(param_2 + 0x49f);
    uVar9 = (ulong)bVar11;
    uVar10 = *(ulong *)(param_2 + 0x490);
    uVar2 = uVar10;
    if (-1 < (char)bVar11) {
      uVar2 = uVar9;
    }
    if (uVar2 == 3) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e887a);
      if (iVar3 == 0) {
        uVar1 = param_2 + 0x4a0;
        bVar11 = *(byte *)(param_2 + 0x4b7);
        uVar9 = (ulong)bVar11;
        uVar10 = *(ulong *)(param_2 + 0x4a8);
        uVar2 = uVar10;
        if (-1 < (char)bVar11) {
          uVar2 = uVar9;
        }
        if (uVar2 == 0xf) {
          iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e887e);
          if (iVar3 == 0) {
            uVar4 = FUN_1004e0150("PARTY_BANNED_TITLE",0);
            pcVar6 = "PARTY_BANNED_MSG";
            goto LAB_100252838;
          }
          bVar11 = *(byte *)(param_2 + 0x4b7);
          uVar9 = (ulong)bVar11;
          uVar10 = *(ulong *)(param_2 + 0x4a8);
        }
        uVar2 = uVar10;
        if (-1 < (char)bVar11) {
          uVar2 = uVar9;
        }
        if (uVar2 != 3) {
LAB_1002525a8:
          if (-1 < (char)bVar11) {
            uVar10 = uVar9;
          }
          if (uVar10 != 6) {
            return;
          }
          iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e88cb);
          if (iVar3 != 0) {
            return;
          }
          uVar4 = FUN_1004e0150("PARTY_BANNED_MSG_GM_BAN",0);
          thunk_FUN_1004e439c(auStack_40,uVar4);
          FUN_1004e313c(auStack_50);
          FUN_1004e38ac(auStack_50,"%d");
          FUN_1004e3120(auStack_60,"[HOURS]");
          FUN_1004e3bc4(auStack_40,0,auStack_60,auStack_50);
          if (local_58 != (void *)0x0) {
            operator_delete__(local_58);
          }
          uVar4 = FUN_1004e0150("PARTY_BANNED_TITLE",0);
          uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
          FUN_1001e3090(uVar4,auStack_40,uVar7,param_1,0);
          if (local_48 != (void *)0x0) {
            operator_delete__(local_48);
          }
          if (local_38 == (void *)0x0) {
            return;
          }
          operator_delete__(local_38);
          return;
        }
        iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e88b2);
        if (iVar3 != 0) {
          bVar11 = *(byte *)(param_2 + 0x4b7);
          uVar9 = (ulong)bVar11;
          uVar10 = *(ulong *)(param_2 + 0x4a8);
          goto LAB_1002525a8;
        }
        uVar4 = FUN_1004e0150("PARTY_BANNED_TITLE",0);
        pcVar6 = "PARTY_BANNED_MSG_AFK";
        goto LAB_100252838;
      }
      bVar11 = *(byte *)(param_2 + 0x49f);
      uVar9 = (ulong)bVar11;
      uVar10 = *(ulong *)(param_2 + 0x490);
    }
    uVar2 = uVar10;
    if (-1 < (char)bVar11) {
      uVar2 = uVar9;
    }
    if (uVar2 == 10) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e88f2);
      if (iVar3 == 0) {
        iVar3 = FUN_10024f6c8(param_1);
        if (iVar3 == 0) {
          uVar4 = FUN_1004e0150("PARTY_RANKED_NOT_ENOUGH_HEROES_TITLE",0);
          pcVar6 = "PARTY_RANKED_NOT_ENOUGH_HEROES_MSG";
        }
        else {
          uVar4 = FUN_1004e0150("PARTY_DRAFT_NOT_ENOUGH_HEROES_TITLE",0);
          pcVar6 = "PARTY_DRAFT_NOT_ENOUGH_HEROES_MSG";
        }
        goto LAB_100252838;
      }
      bVar11 = *(byte *)(param_2 + 0x49f);
      uVar9 = (ulong)bVar11;
      uVar10 = *(ulong *)(param_2 + 0x490);
    }
    uVar2 = uVar10;
    if (-1 < (char)bVar11) {
      uVar2 = uVar9;
    }
    if (uVar2 == 0xf) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e898b);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("PARTY_RANKED_PARTY_ELO_SPREAD_TOO_WIDE_TITLE",0);
        pcVar6 = "PARTY_RANKED_PARTY_ELO_SPREAD_TOO_WIDE_MSG";
        goto LAB_100252838;
      }
      bVar11 = *(byte *)(param_2 + 0x49f);
      uVar9 = (ulong)bVar11;
      uVar10 = *(ulong *)(param_2 + 0x490);
    }
    uVar2 = uVar10;
    if (-1 < (char)bVar11) {
      uVar2 = uVar9;
    }
    if (uVar2 == 0xf) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013d25e0);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("PARTY_5V5_PARTY_MISSING_ACCESS_TITLE",0);
        pcVar6 = "PARTY_5V5_PARTY_MISSING_ACCESS_MSG";
        goto LAB_100252838;
      }
      bVar11 = *(byte *)(param_2 + 0x49f);
      uVar9 = (ulong)bVar11;
      uVar10 = *(ulong *)(param_2 + 0x490);
    }
    uVar2 = uVar10;
    if (-1 < (char)bVar11) {
      uVar2 = uVar9;
    }
    if (uVar2 == 5) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013d2620);
      if (iVar3 == 0) {
        FUN_10018e8a8(param_1 + 0xb0e8);
        piVar5 = (int *)FUN_10034ccb8();
        if (*piVar5 == 0) {
          uVar4 = FUN_1004e0150("PARTY_RANKED_LEVEL_REQ_NOT_MET_TITLE",0);
          pcVar6 = "PARTY_RANKED_LEVEL_REQ_NOT_MET_MSG";
        }
        else {
          FUN_10018e8a8(param_1 + 0xb0e8);
          piVar5 = (int *)FUN_10034ccb8();
          if (*piVar5 == 9) {
            uVar4 = FUN_1004e0150("PARTY_CASUAL_LEVEL_REQ_NOT_MET_TITLE",0);
            pcVar6 = "PARTY_CASUAL_LEVEL_REQ_NOT_MET_MSG";
          }
          else {
            uVar4 = FUN_1004e0150("PARTY_LEVEL_REQ_NOT_MET_TITLE",0);
            pcVar6 = "PARTY_LEVEL_REQ_NOT_MET_MSG";
          }
        }
        goto LAB_100252838;
      }
      bVar11 = *(byte *)(param_2 + 0x49f);
      uVar9 = (ulong)bVar11;
      uVar10 = *(ulong *)(param_2 + 0x490);
    }
    uVar2 = uVar10;
    if (-1 < (char)bVar11) {
      uVar2 = uVar9;
    }
    if (uVar2 == 5) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e8b05);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("PARTY_RANKED_KARMA_REQ_NOT_MET_TITLE",0);
        pcVar6 = "PARTY_RANKED_KARMA_REQ_NOT_MET_MSG";
        goto LAB_100252838;
      }
      bVar11 = *(byte *)(param_2 + 0x49f);
      uVar9 = (ulong)bVar11;
      uVar10 = *(ulong *)(param_2 + 0x490);
    }
    if (-1 < (char)bVar11) {
      uVar10 = uVar9;
    }
    if ((uVar10 == 0x11) &&
       (iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e8b53), iVar3 == 0)) {
      uVar4 = FUN_1004e0150("MENU_PARTY_5V5_NO_QUAD_QUEUE_TITLE",0);
      pcVar6 = "MENU_PARTY_5V5_NO_QUAD_QUEUE";
LAB_100252838:
      uVar7 = FUN_1004e0150(pcVar6,0);
      uVar8 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1001e3090(uVar4,uVar7,uVar8,param_1,0);
      return;
    }
  }
  return;
}



/*
 * FUN_100260edc
 * VA: 0x100260edc | Source: functions/10026.c:700
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 7, Vis masks: 3
 * Callees: FUN_10001554c, FUN_1000200a0, FUN_1001816d4, FUN_1001b495c, FUN_1001b4964, FUN_1001b4c0c, FUN_100261b5c, FUN_100261ba0 (+36 more)
 */
long * FUN_100260edc(long *param_1)

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
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  uint uVar29;
  long lVar30;
  code *local_b8;
  long *plStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  
  plVar4 = param_1 + 0x1412;
  plVar5 = param_1 + 0x12f3;
  puVar26 = (undefined8 *)FUN_100269da8();
  puVar27 = puVar26 + 0x19;
  *puVar26 = &PTR_thunk_FUN_100261d9c_10147b9d0;
  FUN_1006421a8();
  param_1[0x19] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x2a;
  thunk_FUN_1006543ec();
  plVar2 = param_1 + 0x5e;
  FUN_10053077c(plVar2,0);
  thunk_FUN_1001d0644(param_1 + 0x105,0);
  plVar6 = param_1 + 0x285;
  thunk_FUN_100650e64();
  plVar7 = param_1 + 0x2ab;
  thunk_FUN_100183990(plVar7,0);
  thunk_FUN_1001c73d0();
  thunk_FUN_1001c6070();
  plVar8 = param_1 + 0x8c7;
  FUN_1006421a8(plVar8);
  param_1[0x8c7] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08();
  thunk_FUN_1006543ec();
  FUN_10053077c(param_1 + 0x92a,0);
  plVar9 = param_1 + 0x9d1;
  thunk_FUN_100652c08();
  plVar10 = param_1 + 0x9ef;
  FUN_1006421a8(plVar10);
  param_1[0x9ef] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar3 = param_1 + 0xa00;
  thunk_FUN_100652c08();
  plVar11 = param_1 + 0xa1e;
  thunk_FUN_100650e64();
  param_1[0xa45] = 0;
  param_1[0xa44] = 0;
  plVar12 = param_1 + 0xa46;
  thunk_FUN_100650e64();
  plVar13 = param_1 + 0xa6c;
  thunk_FUN_100652c08();
  plVar14 = param_1 + 0xa8a;
  thunk_FUN_100181304(plVar14,0);
  plVar15 = param_1 + 0xd41;
  thunk_FUN_100181304(plVar15,0);
  plVar16 = param_1 + 0xff8;
  thunk_FUN_100181304(plVar16,0);
  plVar17 = param_1 + 0x12af;
  thunk_FUN_100650e64();
  plVar18 = param_1 + 0x12d5;
  thunk_FUN_100652c08();
  FUN_1006421a8(plVar5);
  lVar30 = 0;
  *plVar5 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  do {
    FUN_1002645f8((long)param_1 + lVar30 + 0x9820);
    lVar30 = lVar30 + 0x2f0;
  } while (lVar30 != 0x5e0);
  plVar19 = param_1 + 0x13c0;
  thunk_FUN_100652c08();
  plVar20 = param_1 + 0x13de;
  thunk_FUN_1006543ec(plVar20);
  FUN_1006421a8(plVar4);
  *plVar4 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar21 = param_1 + 0x1423;
  thunk_FUN_100181304(plVar21,0);
  plVar22 = param_1 + 0x16da;
  thunk_FUN_1002268e4(plVar22);
  thunk_FUN_1001c0018(param_1 + 0x2661,0);
  thunk_FUN_1001ceb64(param_1 + 0x26ec,0);
  param_1[0x270b] = 0;
  param_1[0x270a] = 0;
  param_1[0x2709] = 0;
  *(undefined4 *)(param_1 + 0x270c) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x13864) = 0;
  *(undefined1 *)((long)param_1 + 0x13866) = 1;
  (**(code **)(*param_1 + 0x78))(param_1,puVar27,1);
  FUN_100642bd8(puVar27,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_1005308f8(plVar2,param_1 + 0x369,1);
  FUN_1005308f8(plVar2,param_1 + 0x4d7,1);
  FUN_1005308f8(plVar2,param_1 + 0x105,1);
  FUN_1005308f8(plVar2,plVar6,1);
  FUN_1005308f8(plVar2,plVar14,1);
  FUN_1005308f8(plVar2,plVar15,1);
  FUN_1005308f8(plVar2,plVar8,1);
  FUN_100642bd8(plVar8,param_1 + 0x8f6,1);
  FUN_100642bd8(plVar8,plVar9,1);
  FUN_100642bd8(plVar8,plVar10,1);
  FUN_100642bd8(plVar10,plVar3,1);
  FUN_100642bd8(plVar10,plVar11,1);
  FUN_100642bd8(plVar8,plVar12,1);
  FUN_100642bd8(plVar8,plVar13,1);
  FUN_100642bd8(plVar8,plVar5,1);
  FUN_100642bd8(plVar5,param_1 + 0x1304,1);
  FUN_100642bd8(plVar5,param_1 + 0x1362,1);
  FUN_1005308f8(plVar2,plVar17,1);
  FUN_1005308f8(plVar2,plVar18,1);
  FUN_1005308f8(plVar2,plVar16,1);
  FUN_1005308f8(plVar2,param_1 + 0x2661,1);
  FUN_1005308f8(plVar2,param_1 + 0x26ec,1);
  FUN_100642bd8(puVar27,plVar19,1);
  FUN_100642bd8(puVar27,plVar20,1);
  FUN_100642bd8(plVar20,plVar4,1);
  FUN_100642bd8(plVar4,plVar21,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar22,1);
  FUN_100654488(plVar1,1);
  FUN_100530adc(plVar2,0,1);
  FUN_1006515d8(plVar6,0);
  FUN_100651594(plVar6,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e298,&DAT_10115a168);
  FUN_100652cdc(param_1 + 0x345,"edit_handle");
  *(uint *)((long)param_1 + 0x19bc) = *(uint *)((long)param_1 + 0x19bc) & 0xfffffffb;
  FUN_1001b495c(0x3ecccccd,plVar7);
  uVar29 = *(uint *)((long)param_1 + 0x15dc);
  if ((uVar29 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x15dc) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar7);
  }
  uVar23 = DAT_101d91884;
  local_90 = DAT_101d91884;
  local_b8 = FUN_100261b5c;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x2ac,&local_b8);
  uVar28 = FUN_1004e0150("MENU_PROFILE_USERTEAM_OVERVIEW_ACCEPT",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x446b0000,plVar14,0,uVar28,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_90 = uVar23;
  local_b8 = FUN_100261ba0;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0xa8b,&local_b8);
  FUN_1001b4964(plVar14,1);
  uVar28 = FUN_1004e0150("MENU_PROFILE_USERTEAM_OVERVIEW_DECLINE",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x446b0000,plVar15,0,uVar28,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_90 = uVar23;
  local_b8 = thunk_FUN_100262898;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0xd42,&local_b8);
  FUN_1001b4964(plVar15,1);
  FUN_100652cac(param_1 + 0x8d8,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar29 = *(uint *)((long)param_1 + 0x4744);
  if ((uVar29 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x4744) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x2600;
    FUN_1000200a0(param_1 + 0x8d8);
  }
  FUN_100652cac(plVar9,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar9,&DAT_10115a164,2);
  uVar29 = *(uint *)((long)param_1 + 0x4f0c);
  if ((uVar29 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x4f0c) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x2600;
    FUN_1000200a0(plVar9);
  }
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  if ((*(uint *)((long)param_1 + 0x5084) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x5084) = *(uint *)((long)param_1 + 0x5084) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar3);
  }
  FUN_100651038(plVar11,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0);
  if ((*(uint *)((long)param_1 + 0x5174) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x5174) = *(uint *)((long)param_1 + 0x5174) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar11);
  }
  uVar28 = FUN_1004e0150("MENU_USERTEAM_HEADER_STATUS",0);
  FUN_1006513c0(plVar11,uVar28);
  FUN_100651594(plVar12,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
  uVar28 = FUN_1004e0150("MENU_PROFILE_USERTEAM_HOW_TO_ADD",0);
  FUN_1006513c0(plVar12,uVar28);
  uVar29 = *(uint *)((long)param_1 + 0x52b4);
  if ((uVar29 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x52b4) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x2600;
    FUN_1000200a0(plVar12);
  }
  FUN_100652cac(plVar13,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_team_outline");
  uVar29 = *(uint *)((long)param_1 + 0x53e4);
  if ((uVar29 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x53e4) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x3300;
    FUN_1000200a0(plVar13);
  }
  if ((*(float *)(param_1 + 0xa75) != 0.9) || (*(float *)((long)param_1 + 0x53ac) != 0.9)) {
    param_1[0xa75] = 0x3f6666663f666666;
    FUN_1000200a0(plVar13);
  }
  FUN_100651594(plVar17,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
  uVar28 = FUN_1004e0150("MENU_PROFILE_USERTEAM_MORE_OPTIONS",0);
  FUN_1006513c0(plVar17,uVar28);
  uVar29 = *(uint *)((long)param_1 + 0x95fc);
  if ((uVar29 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x95fc) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0xc80;
    FUN_1000200a0(plVar17);
  }
  FUN_100652cac(plVar18,PTR_s_build___MenuPartsCommon_tga_101854970,"arrow_down");
  uVar29 = *(uint *)((long)param_1 + 0x972c);
  if ((uVar29 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x972c) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0xc80;
    FUN_1000200a0(plVar18);
  }
  uVar28 = FUN_1004e0150("MENU_PROFILE_USERTEAM_OVERVIEW_LEAVE",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x446b0000,plVar16,0,uVar28,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_90 = uVar23;
  local_b8 = thunk_FUN_1002629d0;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0xff9,&local_b8);
  FUN_1001b4964(plVar16,1);
  uVar28 = FUN_1004e0150("USERTEAM_OVERVIEW_LABEL_MEMBER_COUNT",0);
  FUN_1006513c0(param_1 + 0x1315,uVar28);
  uVar28 = FUN_1004e0150("USERTEAM_OVERVIEW_LABEL_WINS",0);
  FUN_1006513c0(param_1 + 0x1373,uVar28);
  FUN_100652cac(plVar19,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar29 = *(uint *)((long)param_1 + 0x9e84);
  if ((uVar29 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x9e84) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x6600;
    FUN_1000200a0(plVar19);
    uVar29 = *(uint *)((long)param_1 + 0x9e84);
  }
  *(uint *)((long)param_1 + 0x9e84) = uVar29 & 0xfffffffb | 0x10;
  uVar24 = DAT_101dbd460;
  local_90 = DAT_101dbd460;
  local_b8 = FUN_100261bd4;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x13c1,&local_b8);
  uVar25 = DAT_101dbd48c;
  local_90 = DAT_101dbd48c;
  local_b8 = FUN_100261bd4;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x13c1,&local_b8);
  *(uint *)((long)param_1 + 0x9f74) = *(uint *)((long)param_1 + 0x9f74) & 0xfffffffb;
  FUN_100654488(plVar20,1);
  uVar28 = FUN_1004e0150("MENU_PROFILE_GUILD_REMOVE_MEMBER",0);
  local_b8 = (code *)CONCAT44(local_b8._4_4_,0xffc0c0c0);
  FUN_1001816d4(0x42800000,0,0x447a0000,plVar21,0,uVar28,&local_b8,&DAT_101dc1cb8,0);
  FUN_1001b4c0c(plVar21,1);
  FUN_1001b495c(0x3e4ccccd,plVar21);
  if ((*(float *)(param_1 + 0x142d) != 0.5) || (*(float *)((long)param_1 + 0xa16c) != 0.5)) {
    param_1[0x142d] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar21);
  }
  local_90 = uVar23;
  local_b8 = thunk_FUN_1002642f0;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x1424,&local_b8);
  FUN_100261bec(param_1,plVar22,puVar27,0,1);
  local_90 = uVar23;
  local_b8 = FUN_100261d7c;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x16f2,&local_b8);
  local_90 = uVar24;
  local_b8 = thunk_FUN_1002643c4;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x2673,&local_b8);
  local_90 = uVar25;
  local_b8 = thunk_FUN_1002643c4;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x2673,&local_b8);
  return param_1;
}



/*
 * thunk_FUN_100260edc
 * VA: 0xthunk_100260edc | Source: functions/10026.c:1346
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 7, Vis masks: 3
 * Callees: FUN_10001554c, FUN_1000200a0, FUN_1001816d4, FUN_1001b495c, FUN_1001b4964, FUN_1001b4c0c, FUN_100261b5c, FUN_100261ba0 (+36 more)
 * Callers: FUN_100264e14, thunk_FUN_100264e14
 */
long * thunk_FUN_100260edc(long *param_1)

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
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  uint uVar29;
  long lVar30;
  code *pcStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  
  plVar4 = param_1 + 0x1412;
  plVar5 = param_1 + 0x12f3;
  puVar26 = (undefined8 *)FUN_100269da8();
  puVar27 = puVar26 + 0x19;
  *puVar26 = &PTR_thunk_FUN_100261d9c_10147b9d0;
  FUN_1006421a8();
  param_1[0x19] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x2a;
  thunk_FUN_1006543ec();
  plVar2 = param_1 + 0x5e;
  FUN_10053077c(plVar2,0);
  thunk_FUN_1001d0644(param_1 + 0x105,0);
  plVar6 = param_1 + 0x285;
  thunk_FUN_100650e64();
  plVar7 = param_1 + 0x2ab;
  thunk_FUN_100183990(plVar7,0);
  thunk_FUN_1001c73d0();
  thunk_FUN_1001c6070();
  plVar8 = param_1 + 0x8c7;
  FUN_1006421a8(plVar8);
  param_1[0x8c7] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08();
  thunk_FUN_1006543ec();
  FUN_10053077c(param_1 + 0x92a,0);
  plVar9 = param_1 + 0x9d1;
  thunk_FUN_100652c08();
  plVar10 = param_1 + 0x9ef;
  FUN_1006421a8(plVar10);
  param_1[0x9ef] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar3 = param_1 + 0xa00;
  thunk_FUN_100652c08();
  plVar11 = param_1 + 0xa1e;
  thunk_FUN_100650e64();
  param_1[0xa45] = 0;
  param_1[0xa44] = 0;
  plVar12 = param_1 + 0xa46;
  thunk_FUN_100650e64();
  plVar13 = param_1 + 0xa6c;
  thunk_FUN_100652c08();
  plVar14 = param_1 + 0xa8a;
  thunk_FUN_100181304(plVar14,0);
  plVar15 = param_1 + 0xd41;
  thunk_FUN_100181304(plVar15,0);
  plVar16 = param_1 + 0xff8;
  thunk_FUN_100181304(plVar16,0);
  plVar17 = param_1 + 0x12af;
  thunk_FUN_100650e64();
  plVar18 = param_1 + 0x12d5;
  thunk_FUN_100652c08();
  FUN_1006421a8(plVar5);
  lVar30 = 0;
  *plVar5 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  do {
    FUN_1002645f8((long)param_1 + lVar30 + 0x9820);
    lVar30 = lVar30 + 0x2f0;
  } while (lVar30 != 0x5e0);
  plVar19 = param_1 + 0x13c0;
  thunk_FUN_100652c08();
  plVar20 = param_1 + 0x13de;
  thunk_FUN_1006543ec(plVar20);
  FUN_1006421a8(plVar4);
  *plVar4 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar21 = param_1 + 0x1423;
  thunk_FUN_100181304(plVar21,0);
  plVar22 = param_1 + 0x16da;
  thunk_FUN_1002268e4(plVar22);
  thunk_FUN_1001c0018(param_1 + 0x2661,0);
  thunk_FUN_1001ceb64(param_1 + 0x26ec,0);
  param_1[0x270b] = 0;
  param_1[0x270a] = 0;
  param_1[0x2709] = 0;
  *(undefined4 *)(param_1 + 0x270c) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x13864) = 0;
  *(undefined1 *)((long)param_1 + 0x13866) = 1;
  (**(code **)(*param_1 + 0x78))(param_1,puVar27,1);
  FUN_100642bd8(puVar27,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_1005308f8(plVar2,param_1 + 0x369,1);
  FUN_1005308f8(plVar2,param_1 + 0x4d7,1);
  FUN_1005308f8(plVar2,param_1 + 0x105,1);
  FUN_1005308f8(plVar2,plVar6,1);
  FUN_1005308f8(plVar2,plVar14,1);
  FUN_1005308f8(plVar2,plVar15,1);
  FUN_1005308f8(plVar2,plVar8,1);
  FUN_100642bd8(plVar8,param_1 + 0x8f6,1);
  FUN_100642bd8(plVar8,plVar9,1);
  FUN_100642bd8(plVar8,plVar10,1);
  FUN_100642bd8(plVar10,plVar3,1);
  FUN_100642bd8(plVar10,plVar11,1);
  FUN_100642bd8(plVar8,plVar12,1);
  FUN_100642bd8(plVar8,plVar13,1);
  FUN_100642bd8(plVar8,plVar5,1);
  FUN_100642bd8(plVar5,param_1 + 0x1304,1);
  FUN_100642bd8(plVar5,param_1 + 0x1362,1);
  FUN_1005308f8(plVar2,plVar17,1);
  FUN_1005308f8(plVar2,plVar18,1);
  FUN_1005308f8(plVar2,plVar16,1);
  FUN_1005308f8(plVar2,param_1 + 0x2661,1);
  FUN_1005308f8(plVar2,param_1 + 0x26ec,1);
  FUN_100642bd8(puVar27,plVar19,1);
  FUN_100642bd8(puVar27,plVar20,1);
  FUN_100642bd8(plVar20,plVar4,1);
  FUN_100642bd8(plVar4,plVar21,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar22,1);
  FUN_100654488(plVar1,1);
  FUN_100530adc(plVar2,0,1);
  FUN_1006515d8(plVar6,0);
  FUN_100651594(plVar6,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e298,&DAT_10115a168);
  FUN_100652cdc(param_1 + 0x345,"edit_handle");
  *(uint *)((long)param_1 + 0x19bc) = *(uint *)((long)param_1 + 0x19bc) & 0xfffffffb;
  FUN_1001b495c(0x3ecccccd,plVar7);
  uVar29 = *(uint *)((long)param_1 + 0x15dc);
  if ((uVar29 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x15dc) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar7);
  }
  uVar23 = DAT_101d91884;
  uStack_90 = DAT_101d91884;
  pcStack_b8 = FUN_100261b5c;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x2ac,&pcStack_b8);
  uVar28 = FUN_1004e0150("MENU_PROFILE_USERTEAM_OVERVIEW_ACCEPT",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x446b0000,plVar14,0,uVar28,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_90 = uVar23;
  pcStack_b8 = FUN_100261ba0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0xa8b,&pcStack_b8);
  FUN_1001b4964(plVar14,1);
  uVar28 = FUN_1004e0150("MENU_PROFILE_USERTEAM_OVERVIEW_DECLINE",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x446b0000,plVar15,0,uVar28,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_90 = uVar23;
  pcStack_b8 = thunk_FUN_100262898;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0xd42,&pcStack_b8);
  FUN_1001b4964(plVar15,1);
  FUN_100652cac(param_1 + 0x8d8,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar29 = *(uint *)((long)param_1 + 0x4744);
  if ((uVar29 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x4744) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x2600;
    FUN_1000200a0(param_1 + 0x8d8);
  }
  FUN_100652cac(plVar9,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar9,&DAT_10115a164,2);
  uVar29 = *(uint *)((long)param_1 + 0x4f0c);
  if ((uVar29 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x4f0c) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x2600;
    FUN_1000200a0(plVar9);
  }
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  if ((*(uint *)((long)param_1 + 0x5084) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x5084) = *(uint *)((long)param_1 + 0x5084) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar3);
  }
  FUN_100651038(plVar11,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0);
  if ((*(uint *)((long)param_1 + 0x5174) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x5174) = *(uint *)((long)param_1 + 0x5174) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar11);
  }
  uVar28 = FUN_1004e0150("MENU_USERTEAM_HEADER_STATUS",0);
  FUN_1006513c0(plVar11,uVar28);
  FUN_100651594(plVar12,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
  uVar28 = FUN_1004e0150("MENU_PROFILE_USERTEAM_HOW_TO_ADD",0);
  FUN_1006513c0(plVar12,uVar28);
  uVar29 = *(uint *)((long)param_1 + 0x52b4);
  if ((uVar29 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x52b4) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x2600;
    FUN_1000200a0(plVar12);
  }
  FUN_100652cac(plVar13,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_team_outline");
  uVar29 = *(uint *)((long)param_1 + 0x53e4);
  if ((uVar29 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x53e4) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x3300;
    FUN_1000200a0(plVar13);
  }
  if ((*(float *)(param_1 + 0xa75) != 0.9) || (*(float *)((long)param_1 + 0x53ac) != 0.9)) {
    param_1[0xa75] = 0x3f6666663f666666;
    FUN_1000200a0(plVar13);
  }
  FUN_100651594(plVar17,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
  uVar28 = FUN_1004e0150("MENU_PROFILE_USERTEAM_MORE_OPTIONS",0);
  FUN_1006513c0(plVar17,uVar28);
  uVar29 = *(uint *)((long)param_1 + 0x95fc);
  if ((uVar29 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x95fc) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0xc80;
    FUN_1000200a0(plVar17);
  }
  FUN_100652cac(plVar18,PTR_s_build___MenuPartsCommon_tga_101854970,"arrow_down");
  uVar29 = *(uint *)((long)param_1 + 0x972c);
  if ((uVar29 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x972c) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0xc80;
    FUN_1000200a0(plVar18);
  }
  uVar28 = FUN_1004e0150("MENU_PROFILE_USERTEAM_OVERVIEW_LEAVE",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x446b0000,plVar16,0,uVar28,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_90 = uVar23;
  pcStack_b8 = thunk_FUN_1002629d0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0xff9,&pcStack_b8);
  FUN_1001b4964(plVar16,1);
  uVar28 = FUN_1004e0150("USERTEAM_OVERVIEW_LABEL_MEMBER_COUNT",0);
  FUN_1006513c0(param_1 + 0x1315,uVar28);
  uVar28 = FUN_1004e0150("USERTEAM_OVERVIEW_LABEL_WINS",0);
  FUN_1006513c0(param_1 + 0x1373,uVar28);
  FUN_100652cac(plVar19,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar29 = *(uint *)((long)param_1 + 0x9e84);
  if ((uVar29 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x9e84) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x6600;
    FUN_1000200a0(plVar19);
    uVar29 = *(uint *)((long)param_1 + 0x9e84);
  }
  *(uint *)((long)param_1 + 0x9e84) = uVar29 & 0xfffffffb | 0x10;
  uVar24 = DAT_101dbd460;
  uStack_90 = DAT_101dbd460;
  pcStack_b8 = FUN_100261bd4;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x13c1,&pcStack_b8);
  uVar25 = DAT_101dbd48c;
  uStack_90 = DAT_101dbd48c;
  pcStack_b8 = FUN_100261bd4;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x13c1,&pcStack_b8);
  *(uint *)((long)param_1 + 0x9f74) = *(uint *)((long)param_1 + 0x9f74) & 0xfffffffb;
  FUN_100654488(plVar20,1);
  uVar28 = FUN_1004e0150("MENU_PROFILE_GUILD_REMOVE_MEMBER",0);
  pcStack_b8 = (code *)CONCAT44(pcStack_b8._4_4_,0xffc0c0c0);
  FUN_1001816d4(0x42800000,0,0x447a0000,plVar21,0,uVar28,&pcStack_b8,&DAT_101dc1cb8,0);
  FUN_1001b4c0c(plVar21,1);
  FUN_1001b495c(0x3e4ccccd,plVar21);
  if ((*(float *)(param_1 + 0x142d) != 0.5) || (*(float *)((long)param_1 + 0xa16c) != 0.5)) {
    param_1[0x142d] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar21);
  }
  uStack_90 = uVar23;
  pcStack_b8 = thunk_FUN_1002642f0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x1424,&pcStack_b8);
  FUN_100261bec(param_1,plVar22,puVar27,0,1);
  uStack_90 = uVar23;
  pcStack_b8 = FUN_100261d7c;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x16f2,&pcStack_b8);
  uStack_90 = uVar24;
  pcStack_b8 = thunk_FUN_1002643c4;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x2673,&pcStack_b8);
  uStack_90 = uVar25;
  pcStack_b8 = thunk_FUN_1002643c4;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x2673,&pcStack_b8);
  return param_1;
}



/*
 * FUN_100264e14
 * VA: 0x100264e14 | Source: functions/10026.c:3791
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 5
 * Callees: FUN_10001554c, FUN_1000200a0, FUN_10010b098, FUN_10010b1a8, FUN_10014f4a0, FUN_1001c88a4, FUN_1001c9460, FUN_1001e6910 (+18 more)
 */
undefined8 * FUN_100264e14(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  lVar8 = FUN_1001e6910();
  FUN_10014f4a0(lVar8 + 0x2c30);
  *param_1 = &PTR_thunk_FUN_1002650dc_10147bd38;
  param_1[0x586] = &PTR_FUN_10147bef0;
  puVar1 = param_1 + 0x589;
  thunk_FUN_100652c08(puVar1);
  puVar2 = param_1 + 0x5a7;
  FUN_10064e264(puVar2);
  puVar3 = param_1 + 0x5be;
  FUN_10053077c(puVar3,0);
  param_1[0x667] = 0;
  puVar4 = param_1 + 0x668;
  thunk_FUN_1001c81d8(puVar4);
  puVar5 = param_1 + 0x7c2;
  thunk_FUN_100260edc(puVar5);
  puVar6 = param_1 + 0x2ecf;
  thunk_FUN_10025fd1c(puVar6);
  param_1[0x31e3] = 0;
  param_1[0x31e0] = 0;
  param_1[0x31df] = 0;
  param_1[0x31e2] = 0;
  param_1[0x31e1] = 0;
  *(undefined2 *)(param_1 + 0x31e4) = 1;
  *(undefined1 *)((long)param_1 + 0x18f22) = 1;
  FUN_100642bd8(param_1 + 0x2e,puVar1,1);
  FUN_100642bd8(param_1 + 0x2e,puVar2,1);
  FUN_100642bd8(puVar2,puVar3,1);
  FUN_1005308f8(puVar3,puVar5,1);
  FUN_1005308f8(puVar3,puVar6,1);
  FUN_1005308f8(puVar3,puVar4,1);
  FUN_100652cac(puVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(puVar1,&DAT_10115a164,2);
  uVar7 = *(uint *)((long)param_1 + 0x2ccc);
  if ((uVar7 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x2ccc) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x2600;
    FUN_1000200a0(puVar1);
  }
  FUN_100530adc(puVar3,0,1);
  param_1[0x665] = puVar5;
  param_1[0x666] = puVar6;
  local_90 = 0;
  uStack_88 = 0;
  uVar9 = FUN_1004e0150("MENU_PROFILE_TAB_OVERVIEW",0);
  FUN_10010b098(&local_90,uVar9);
  uVar9 = FUN_1004e0150("MENU_TEAM_TAB_TROPHIES",0);
  FUN_10010b098(&local_90,uVar9);
  FUN_1001c88a4(0,0x43fa0000,0x41a00000,0x3f800000,0x3f800000,puVar4,&local_90);
  FUN_1001c9460(0xcd,puVar4);
  local_58 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  local_80 = FUN_1002650d0;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  puStack_78 = param_1;
  FUN_10001554c(param_1 + 0x669,&local_80);
  FUN_1006423ec(param_1 + 0x62,1);
  FUN_1006423ec(param_1 + 0x566,1);
  FUN_100269e20(0,puVar5,1,4,0);
  FUN_10010b1a8(&local_90,1);
  return param_1;
}



/*
 * thunk_FUN_100264e14
 * VA: 0xthunk_100264e14 | Source: functions/10026.c:3887
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 5
 * Callees: FUN_10001554c, FUN_1000200a0, FUN_10010b098, FUN_10010b1a8, FUN_10014f4a0, FUN_1001c88a4, FUN_1001c9460, FUN_1001e6910 (+18 more)
 * Callers: FUN_1002240e8, FUN_100266a50, FUN_1002850d0, thunk_FUN_100266a50, thunk_FUN_1002850d0
 */
undefined8 * thunk_FUN_100264e14(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  lVar8 = FUN_1001e6910();
  FUN_10014f4a0(lVar8 + 0x2c30);
  *param_1 = &PTR_thunk_FUN_1002650dc_10147bd38;
  param_1[0x586] = &PTR_FUN_10147bef0;
  puVar1 = param_1 + 0x589;
  thunk_FUN_100652c08(puVar1);
  puVar2 = param_1 + 0x5a7;
  FUN_10064e264(puVar2);
  puVar3 = param_1 + 0x5be;
  FUN_10053077c(puVar3,0);
  param_1[0x667] = 0;
  puVar4 = param_1 + 0x668;
  thunk_FUN_1001c81d8(puVar4);
  puVar5 = param_1 + 0x7c2;
  thunk_FUN_100260edc(puVar5);
  puVar6 = param_1 + 0x2ecf;
  thunk_FUN_10025fd1c(puVar6);
  param_1[0x31e3] = 0;
  param_1[0x31e0] = 0;
  param_1[0x31df] = 0;
  param_1[0x31e2] = 0;
  param_1[0x31e1] = 0;
  *(undefined2 *)(param_1 + 0x31e4) = 1;
  *(undefined1 *)((long)param_1 + 0x18f22) = 1;
  FUN_100642bd8(param_1 + 0x2e,puVar1,1);
  FUN_100642bd8(param_1 + 0x2e,puVar2,1);
  FUN_100642bd8(puVar2,puVar3,1);
  FUN_1005308f8(puVar3,puVar5,1);
  FUN_1005308f8(puVar3,puVar6,1);
  FUN_1005308f8(puVar3,puVar4,1);
  FUN_100652cac(puVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(puVar1,&DAT_10115a164,2);
  uVar7 = *(uint *)((long)param_1 + 0x2ccc);
  if ((uVar7 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x2ccc) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x2600;
    FUN_1000200a0(puVar1);
  }
  FUN_100530adc(puVar3,0,1);
  param_1[0x665] = puVar5;
  param_1[0x666] = puVar6;
  uStack_90 = 0;
  uStack_88 = 0;
  uVar9 = FUN_1004e0150("MENU_PROFILE_TAB_OVERVIEW",0);
  FUN_10010b098(&uStack_90,uVar9);
  uVar9 = FUN_1004e0150("MENU_TEAM_TAB_TROPHIES",0);
  FUN_10010b098(&uStack_90,uVar9);
  FUN_1001c88a4(0,0x43fa0000,0x41a00000,0x3f800000,0x3f800000,puVar4,&uStack_90);
  FUN_1001c9460(0xcd,puVar4);
  uStack_58 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  pcStack_80 = FUN_1002650d0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  puStack_78 = param_1;
  FUN_10001554c(param_1 + 0x669,&pcStack_80);
  FUN_1006423ec(param_1 + 0x62,1);
  FUN_1006423ec(param_1 + 0x566,1);
  FUN_100269e20(0,puVar5,1,4,0);
  FUN_10010b1a8(&uStack_90,1);
  return param_1;
}



/*
 * FUN_100266a50
 * VA: 0x100266a50 | Source: functions/10026.c:5431
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 6
 * Callees: FUN_10001554c, FUN_100016064, FUN_10014f4a0, FUN_1001dac1c, FUN_1001e68a4, FUN_1001e6910, FUN_1001e6e9c, FUN_1002683fc (+21 more)
 */
undefined8 * FUN_100266a50(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  code *local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  lVar5 = FUN_1001e6910();
  FUN_10014f4a0(lVar5 + 0x2c30);
  param_1[0x589] = &DAT_101471ee0;
  FUN_1004f0a20(param_1 + 0x58a);
  param_1[0x58f] = 0;
  param_1[0x58e] = 0;
  puVar2 = param_1 + 0x58d;
  *param_1 = &PTR_thunk_FUN_100266d04_10147c5e0;
  param_1[0x586] = &PTR_FUN_10147c810;
  param_1[0x589] = &PTR_FUN_10147cba8;
  param_1[0x58a] = &PTR_FUN_10147cc00;
  param_1[0x58d] = &PTR_FUN_10147cc30;
  puVar3 = param_1 + 0x590;
  thunk_FUN_10026d50c(puVar3);
  thunk_FUN_10027e884(param_1 + 0x2a47);
  thunk_FUN_1002850d0(param_1 + 0x11d7f);
  thunk_FUN_10023b4b8(param_1 + 0x1738f);
  thunk_FUN_100264e14(param_1 + 0x23c57);
  FUN_100016064(param_1 + 0x26e3c);
  param_1[0x26e42] = 0;
  iVar4 = FUN_100642d08(param_1 + 0x566);
  if (iVar4 != 0) {
    FUN_1006423ec(param_1 + 0x566,1);
  }
  uVar6 = FUN_1004e0150("MENU_PEOPLE_FRIENDS_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,1,uVar6,puVar3);
  uVar6 = FUN_1004e0150("MENU_PEOPLE_GUILD_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,2,uVar6,param_1 + 0x2a47);
  uVar6 = FUN_1004e0150("MENU_PEOPLE_USER_TEAM_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,3,uVar6,param_1 + 0x11d7f);
  local_48 = FUN_100644a94("EVENT_FRIENDS_LIST_QUERYING_GUILD");
  local_70 = thunk_FUN_100268004;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  puStack_68 = param_1;
  FUN_10001554c(param_1 + 0x591,&local_70);
  local_48 = FUN_100644a94("EVENT_FRIENDS_LIST_QUERYING_USERTEAM");
  local_70 = thunk_FUN_1002681ac;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  puStack_68 = param_1;
  FUN_10001554c(param_1 + 0x591,&local_70);
  puVar1 = param_1 + 0x62;
  FUN_1001e68a4(puVar1,1,"FRIENDS.*");
  FUN_1001e68a4(puVar1,2,"GUILD.*");
  FUN_1001e68a4(puVar1,3,"TEAM.*");
  FUN_1001dac1c(puVar2,"GUILD",param_1,FUN_1002683fc);
  FUN_1001dac1c(puVar2,"FRIENDS",param_1,FUN_100268428);
  FUN_1001dac1c(puVar2,"TEAM",param_1,FUN_100268454);
  iVar4 = FUN_1004eef24();
  if (iVar4 != 0) {
    FUN_100270a84(puVar3);
  }
  return param_1;
}



/*
 * thunk_FUN_100266a50
 * VA: 0xthunk_100266a50 | Source: functions/10026.c:5728
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 6
 * Callees: FUN_10001554c, FUN_100016064, FUN_10014f4a0, FUN_1001dac1c, FUN_1001e68a4, FUN_1001e6910, FUN_1001e6e9c, FUN_1002683fc (+21 more)
 * Callers: FUN_1001fd570, thunk_FUN_1001fd570
 */
undefined8 * thunk_FUN_100266a50(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  lVar5 = FUN_1001e6910();
  FUN_10014f4a0(lVar5 + 0x2c30);
  param_1[0x589] = &DAT_101471ee0;
  FUN_1004f0a20(param_1 + 0x58a);
  param_1[0x58f] = 0;
  param_1[0x58e] = 0;
  puVar2 = param_1 + 0x58d;
  *param_1 = &PTR_thunk_FUN_100266d04_10147c5e0;
  param_1[0x586] = &PTR_FUN_10147c810;
  param_1[0x589] = &PTR_FUN_10147cba8;
  param_1[0x58a] = &PTR_FUN_10147cc00;
  param_1[0x58d] = &PTR_FUN_10147cc30;
  puVar3 = param_1 + 0x590;
  thunk_FUN_10026d50c(puVar3);
  thunk_FUN_10027e884(param_1 + 0x2a47);
  thunk_FUN_1002850d0(param_1 + 0x11d7f);
  thunk_FUN_10023b4b8(param_1 + 0x1738f);
  thunk_FUN_100264e14(param_1 + 0x23c57);
  FUN_100016064(param_1 + 0x26e3c);
  param_1[0x26e42] = 0;
  iVar4 = FUN_100642d08(param_1 + 0x566);
  if (iVar4 != 0) {
    FUN_1006423ec(param_1 + 0x566,1);
  }
  uVar6 = FUN_1004e0150("MENU_PEOPLE_FRIENDS_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,1,uVar6,puVar3);
  uVar6 = FUN_1004e0150("MENU_PEOPLE_GUILD_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,2,uVar6,param_1 + 0x2a47);
  uVar6 = FUN_1004e0150("MENU_PEOPLE_USER_TEAM_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,3,uVar6,param_1 + 0x11d7f);
  uStack_48 = FUN_100644a94("EVENT_FRIENDS_LIST_QUERYING_GUILD");
  pcStack_70 = thunk_FUN_100268004;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  puStack_68 = param_1;
  FUN_10001554c(param_1 + 0x591,&pcStack_70);
  uStack_48 = FUN_100644a94("EVENT_FRIENDS_LIST_QUERYING_USERTEAM");
  pcStack_70 = thunk_FUN_1002681ac;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  puStack_68 = param_1;
  FUN_10001554c(param_1 + 0x591,&pcStack_70);
  puVar1 = param_1 + 0x62;
  FUN_1001e68a4(puVar1,1,"FRIENDS.*");
  FUN_1001e68a4(puVar1,2,"GUILD.*");
  FUN_1001e68a4(puVar1,3,"TEAM.*");
  FUN_1001dac1c(puVar2,"GUILD",param_1,FUN_1002683fc);
  FUN_1001dac1c(puVar2,"FRIENDS",param_1,FUN_100268428);
  FUN_1001dac1c(puVar2,"TEAM",param_1,FUN_100268454);
  iVar4 = FUN_1004eef24();
  if (iVar4 != 0) {
    FUN_100270a84(puVar3);
  }
  return param_1;
}



/*
 * FUN_10027e884
 * VA: 0x10027e884 | Source: functions/10027.c:9861
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 21, Vis masks: 2
 * Callees: FUN_10001554c, FUN_1000200a0, FUN_10003330c, FUN_100126c88, FUN_10014f4a0, FUN_1001816d4, FUN_100181b5c, FUN_100181c68 (+52 more)
 */
long * FUN_10027e884(long *param_1)

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
  uint *puVar11;
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
  long *plVar38;
  long *plVar39;
  long *plVar40;
  undefined **ppuVar41;
  undefined **ppuVar42;
  undefined4 uVar43;
  int iVar44;
  long lVar45;
  undefined8 uVar46;
  uint uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  float fVar50;
  float fVar51;
  undefined8 local_c8;
  long *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  
  plVar2 = param_1 + 0xf267;
  plVar3 = param_1 + 0xf22a;
  plVar4 = param_1 + 0xef55;
  plVar5 = param_1 + 0xef18;
  plVar6 = param_1 + 0xe6e2;
  plVar7 = param_1 + 0xd2d5;
  plVar8 = param_1 + 0xd226;
  plVar9 = param_1 + 0xd15d;
  plVar10 = param_1 + 0xc99c;
  puVar11 = (uint *)((long)param_1 + 0x64afc);
  lVar45 = FUN_10026d1f4();
  FUN_10014f4a0(lVar45 + 0x368);
  *param_1 = (long)&PTR_thunk_FUN_100280618_10147e408;
  param_1[0x6d] = (long)&PTR_FUN_10147e5c8;
  thunk_FUN_10023b4b8();
  plVar12 = param_1 + 0xc938;
  FUN_10064e264();
  plVar13 = param_1 + 0xc94f;
  thunk_FUN_100652c08();
  thunk_FUN_1001f0830(param_1 + 0xc96d);
  FUN_10064e264(param_1 + 0xc985);
  FUN_1006421a8(plVar10);
  *plVar10 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8();
  param_1[0xc9ad] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8(param_1 + 0xc9be);
  param_1[0xc9be] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100650e64(param_1 + 0xc9cf);
  thunk_FUN_100181304(param_1 + 0xc9f5,0);
  thunk_FUN_100652c08(param_1 + 0xccac);
  thunk_FUN_100652c08(param_1 + 0xccca);
  thunk_FUN_100650e64(param_1 + 0xcce8);
  thunk_FUN_100652c08(param_1 + 0xcd0e);
  FUN_10064e264(param_1 + 0xcd2c);
  FUN_10053077c(param_1 + 0xcd43,0);
  thunk_FUN_100652c08(param_1 + 0xcdea);
  param_1[0xce09] = 0;
  param_1[0xce08] = 0;
  FUN_100284d7c(param_1 + 0xce0a);
  FUN_1006421a8(plVar9);
  *plVar9 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0xd16e;
  FUN_1006421a8();
  param_1[0xd16e] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar14 = param_1 + 0xd17f;
  FUN_10053077c(plVar14,0);
  FUN_1006421a8(plVar8);
  *plVar8 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar15 = param_1 + 0xd237;
  thunk_FUN_100652c08();
  plVar16 = param_1 + 0xd255;
  thunk_FUN_100652c08();
  plVar17 = param_1 + 0xd273;
  thunk_FUN_100650e64();
  plVar18 = param_1 + 0xd299;
  thunk_FUN_100652c08();
  plVar19 = param_1 + 0xd2b7;
  thunk_FUN_100652c08();
  FUN_1006421a8(plVar7);
  *plVar7 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar20 = param_1 + 0xd2e6;
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar21 = param_1 + 0xd332;
  thunk_FUN_100184f78();
  plVar22 = param_1 + 0xd6d0;
  thunk_FUN_100184f78();
  plVar23 = param_1 + 0xda6e;
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar24 = param_1 + 0xdaba;
  thunk_FUN_100184f78();
  plVar25 = param_1 + 0xde58;
  thunk_FUN_100184f78();
  plVar26 = param_1 + 0xe1f6;
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar27 = param_1 + 0xe242;
  thunk_FUN_100184f78();
  plVar28 = param_1 + 0xe5e0;
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar29 = param_1 + 0xe62c;
  FUN_10064e264(plVar29);
  plVar30 = param_1 + 0xe643;
  thunk_FUN_100652c08();
  plVar31 = param_1 + 0xe661;
  thunk_FUN_100650e64();
  plVar32 = param_1 + 0xe687;
  FUN_10064e264(plVar32);
  plVar33 = param_1 + 0xe69e;
  thunk_FUN_100652c08();
  plVar34 = param_1 + 0xe6bc;
  thunk_FUN_100650e64();
  FUN_1006421a8(plVar6);
  *plVar6 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar35 = param_1 + 0xe6f3;
  thunk_FUN_100181304(plVar35,0);
  plVar36 = param_1 + 0xe9aa;
  thunk_FUN_100181304(plVar36,0);
  plVar37 = param_1 + 0xec61;
  thunk_FUN_100181304(plVar37,0);
  FUN_10064e264(plVar5);
  plVar38 = param_1 + 0xef2f;
  thunk_FUN_100650e64();
  thunk_FUN_100652c08(plVar4);
  plVar39 = param_1 + 0xef73;
  thunk_FUN_100181304(plVar39,0);
  FUN_10064e264(plVar3);
  plVar40 = param_1 + 0xf241;
  thunk_FUN_100650e64();
  thunk_FUN_100652c08(plVar2);
  thunk_FUN_1001c0018(param_1 + 0xf285,0);
  thunk_FUN_1001ceb64(param_1 + 0xf310,0);
  FUN_10003330c(param_1 + 0xf32e,&DAT_101d91198);
  FUN_10003330c(param_1 + 0xf331,&DAT_101d91198);
  FUN_1004e313c(param_1 + 0xf334);
  *(undefined8 *)((long)param_1 + 0x799b6) = 0;
  param_1[0xf336] = 0;
  FUN_1006423ec(param_1 + 0x30,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar13,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar12,1);
  FUN_100642bd8(plVar12,plVar10,1);
  FUN_100642bd8(plVar10,param_1 + 0xc9ad,1);
  FUN_100642bd8(param_1 + 0xc9ad,param_1[0xc96e],1);
  FUN_100642bd8(plVar12,plVar9,1);
  FUN_100642bd8(plVar9,plVar1,1);
  FUN_100642bd8(plVar1,plVar8,1);
  FUN_100642bd8(plVar8,plVar14,1);
  FUN_1005308f8(plVar14,plVar15,1);
  FUN_1005308f8(plVar14,plVar16,1);
  FUN_1005308f8(plVar14,plVar17,1);
  FUN_1005308f8(plVar14,plVar18,1);
  FUN_1005308f8(plVar14,plVar19,1);
  FUN_1005308f8(plVar14,plVar7,1);
  FUN_100642bd8(plVar7,plVar20,1);
  FUN_100642bd8(plVar7,param_1 + 0xd30c,1);
  FUN_100642bd8(plVar7,plVar21,1);
  FUN_100642bd8(plVar7,plVar22,1);
  FUN_100642bd8(plVar7,plVar23,1);
  FUN_100642bd8(plVar7,param_1 + 0xda94,1);
  FUN_100642bd8(plVar7,plVar24,1);
  FUN_100642bd8(plVar7,plVar25,1);
  FUN_100642bd8(plVar7,plVar26,1);
  FUN_100642bd8(plVar7,param_1 + 0xe21c,1);
  FUN_100642bd8(plVar7,plVar27,1);
  FUN_100642bd8(plVar7,plVar28,1);
  FUN_100642bd8(plVar7,param_1 + 0xe606,1);
  FUN_100642bd8(plVar7,plVar29,1);
  FUN_100642bd8(plVar29,plVar30,1);
  FUN_100642bd8(plVar29,plVar31,1);
  FUN_100642bd8(plVar7,plVar32,1);
  FUN_100642bd8(plVar32,plVar33,1);
  FUN_100642bd8(plVar32,plVar34,1);
  FUN_100642bd8(plVar7,plVar6,1);
  FUN_100642bd8(plVar6,plVar35,1);
  FUN_100642bd8(plVar6,plVar36,1);
  FUN_100642bd8(plVar6,plVar37,1);
  FUN_100642bd8(plVar37,plVar5,1);
  FUN_100642bd8(plVar5,plVar4,1);
  FUN_100642bd8(plVar5,plVar38,1);
  FUN_100642bd8(plVar6,plVar39,1);
  FUN_100642bd8(plVar39,plVar3,1);
  FUN_100642bd8(plVar3,plVar2,1);
  FUN_100642bd8(plVar3,plVar40,1);
  FUN_100642bd8(plVar12,param_1 + 0xf310,1);
  FUN_100642bd8(plVar12,param_1 + 0x70,1);
  iVar44 = FUN_100126c88();
  FUN_100652cac(plVar13,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar13,&DAT_10115a164,2);
  uVar47 = *puVar11;
  if ((uVar47 & 0x7f80) != 0x2600) {
    *puVar11 = uVar47 & 0xffff8000 | uVar47 & 0x7f | 0x2600;
    FUN_1000200a0(plVar13);
    uVar47 = *puVar11;
  }
  *puVar11 = uVar47 | 0x10;
  if ((*(uint *)((long)param_1 + 0x68bf4) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x68bf4) = *(uint *)((long)param_1 + 0x68bf4) & 0xffff807f;
    FUN_1000200a0(plVar1);
  }
  FUN_100530adc(plVar14,0,1);
  FUN_100652cac(plVar15,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar47 = *(uint *)((long)param_1 + 0x6923c);
  if ((uVar47 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x6923c) = uVar47 & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar15);
    uVar47 = *(uint *)((long)param_1 + 0x6923c);
  }
  *(uint *)((long)param_1 + 0x6923c) = uVar47 | 0x10;
  FUN_100652cac(plVar16,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_guild_outline");
  fVar50 = *(float *)(param_1 + 0xd25e);
  if ((fVar50 != 1.5) || (fVar50 = *(float *)((long)param_1 + 0x692f4), fVar50 != 1.5)) {
    lVar45 = NEON_fmov(0x3fc00000,4);
    param_1[0xd25e] = lVar45;
    FUN_1000200a0(plVar16);
  }
  uVar47 = *(uint *)((long)param_1 + 0x6932c);
  if ((uVar47 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x6932c) = uVar47 & 0xffff8000 | uVar47 & 0x7f | 0x1980;
    FUN_1000200a0(plVar16);
  }
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TEAM_HEADER",0);
  FUN_1006513c0(plVar17,uVar46);
  ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar44 == 0) {
    ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  }
  FUN_100651038(plVar17,*ppuVar42);
  if ((*(uint *)((long)param_1 + 0x6941c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x6941c) = *(uint *)((long)param_1 + 0x6941c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar17);
  }
  FUN_100652cac(plVar18,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar47 = *(uint *)((long)param_1 + 0x6954c);
  if ((uVar47 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x6954c) = uVar47 & 0xffff8000 | uVar47 & 0x7f | 0x2600;
    FUN_1000200a0(plVar18);
    uVar47 = *(uint *)((long)param_1 + 0x6954c);
  }
  *(uint *)((long)param_1 + 0x6954c) = uVar47 | 0x10;
  FUN_100652cac(plVar19,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar19,&DAT_10115a164,2);
  uVar47 = *(uint *)((long)param_1 + 0x6963c);
  if ((uVar47 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x6963c) = uVar47 & 0xffff8000 | uVar47 & 0x7f | 0x2600;
    FUN_1000200a0(plVar19);
    uVar47 = *(uint *)((long)param_1 + 0x6963c);
  }
  *(uint *)((long)param_1 + 0x6963c) = uVar47 | 0x10;
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_NAME_FIELD_BLURB",0);
  FUN_1006513c0(param_1 + 0xd30c,uVar46);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TAG_FIELD_BLURB",0);
  FUN_1006513c0(param_1 + 0xda94,uVar46);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_MOTTO_FIELD_BLURB",0);
  FUN_1006513c0(param_1 + 0xe21c,uVar46);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TYPE_FIELD_BLURB",0);
  FUN_1006513c0(param_1 + 0xe606,uVar46);
  ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar44 == 0) {
    ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651594(plVar20,*ppuVar42,&DAT_10115a168);
  uVar47 = *(uint *)((long)param_1 + 0x697b4);
  if ((uVar47 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x697b4) = uVar47 & 0xffff8000 | uVar47 & 0x7f | 0xc80;
    FUN_1000200a0(plVar20);
  }
  FUN_1004e3120(&local_c8,"1");
  FUN_1006513c0(plVar20,&local_c8);
  if (local_c0 != (void *)0x0) {
    operator_delete__(local_c0);
  }
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_NAME_FIELD",0);
  FUN_100185730(plVar21,uVar46);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_NAME_CAPTION",0);
  FUN_1001afd98(plVar21,uVar46,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar21,1);
  FUN_100185e38(plVar21,1,3);
  FUN_100185e48(plVar21,1,0x10);
  FUN_100185e70(plVar21,0);
  uVar48 = DAT_101dbd4ac;
  local_a0 = DAT_101dbd4ac;
  local_c8 = thunk_FUN_1002841f0;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0xd333,&local_c8);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_NAME_CONFIRM_FIELD",0);
  FUN_100185730(plVar22,uVar46);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_NAME_CAPTION",0);
  FUN_1001afd98(plVar22,uVar46,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar22,1);
  FUN_100185e38(plVar22,1,3);
  FUN_100185e48(plVar22,1,0x10);
  FUN_100185e70(plVar22,0);
  local_a0 = uVar48;
  local_c8 = thunk_FUN_1002841f0;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0xd6d1,&local_c8);
  ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar44 == 0) {
    ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651594(plVar23,*ppuVar42,&DAT_10115a168);
  uVar47 = *(uint *)((long)param_1 + 0x6d3f4);
  if ((uVar47 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x6d3f4) = uVar47 & 0xffff8000 | uVar47 & 0x7f | 0xc80;
    FUN_1000200a0(plVar23);
  }
  FUN_1004e3120(&local_c8,"2");
  FUN_1006513c0(plVar23,&local_c8);
  if (local_c0 != (long *)0x0) {
    operator_delete__(local_c0);
  }
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TAG_FIELD",0);
  FUN_100185730(plVar24,uVar46);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TAG_CAPTION",0);
  FUN_1001afd98(plVar24,uVar46,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar24,1);
  FUN_100185e38(plVar24,1,2);
  FUN_100185e48(plVar24,1,4);
  FUN_100185e70(plVar24,0);
  local_a0 = uVar48;
  local_c8 = thunk_FUN_10028425c;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0xdabb,&local_c8);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TAG_CONFIRM_FIELD",0);
  FUN_100185730(plVar25,uVar46);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TAG_CAPTION",0);
  FUN_1001afd98(plVar25,uVar46,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar25,1);
  FUN_100185e38(plVar25,1,2);
  FUN_100185e48(plVar25,1,4);
  FUN_100185e70(plVar25,0);
  local_a0 = uVar48;
  local_c8 = thunk_FUN_10028425c;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0xde59,&local_c8);
  ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar44 == 0) {
    ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651594(plVar26,*ppuVar42,&DAT_10115a168);
  uVar47 = *(uint *)((long)param_1 + 0x71034);
  if ((uVar47 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x71034) = uVar47 & 0xffff8000 | uVar47 & 0x7f | 0xc80;
    FUN_1000200a0(plVar26);
  }
  FUN_1004e3120(&local_c8,"3");
  FUN_1006513c0(plVar26,&local_c8);
  if (local_c0 != (long *)0x0) {
    operator_delete__(local_c0);
  }
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_MOTTO_FIELD",0);
  FUN_100185730(plVar27,uVar46);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_MOTTO_CAPTION",0);
  FUN_1001afd98(plVar27,uVar46,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e70(plVar27,0);
  FUN_1001b0734(plVar27,0);
  FUN_100185e48(plVar27,1,0x8c);
  FUN_100185e2c(plVar27,0);
  local_a0 = uVar48;
  local_c8 = thunk_FUN_1002842c8;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0xe243,&local_c8);
  ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar44 == 0) {
    ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651594(plVar28,*ppuVar42,&DAT_10115a168);
  uVar47 = *(uint *)((long)param_1 + 0x72f84);
  if ((uVar47 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x72f84) = uVar47 & 0xffff8000 | uVar47 & 0x7f | 0xc80;
    FUN_1000200a0(plVar28);
  }
  FUN_1004e3120(&local_c8,"4");
  FUN_1006513c0(plVar28,&local_c8);
  if (local_c0 != (long *)0x0) {
    operator_delete__(local_c0);
  }
  FUN_100652cac(plVar30,PTR_s_build___MenuPartsCommon_tga_101854970,"checkbox_filled");
  ppuVar42 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar44 == 0) {
    ppuVar42 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  ppuVar41 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar44 == 0) {
    ppuVar41 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  FUN_100651594(plVar31,*ppuVar42,&DAT_10115a168);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TYPE_OPEN",0);
  FUN_1006513c0(plVar31,uVar46);
  uVar48 = FUN_1006425d0(plVar29,0,0,1,1);
  local_c8 = (code *)CONCAT44(fVar50,uVar48);
  FUN_10064e48c(plVar29,&local_c8);
  *(uint *)((long)param_1 + 0x731e4) = *(uint *)((long)param_1 + 0x731e4) | 0x10;
  uVar48 = DAT_101dbd458;
  local_a0 = DAT_101dbd458;
  local_c8 = FUN_10028033c;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0xe62d,&local_c8);
  uVar43 = DAT_101dbd484;
  local_a0 = DAT_101dbd484;
  local_c8 = FUN_10028033c;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0xe62d,&local_c8);
  FUN_100652cac(plVar33,PTR_s_build___MenuPartsCommon_tga_101854970,"checkbox_filled");
  FUN_100651594(plVar34,*ppuVar42,&DAT_10115a168);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TYPE_INVITE_ONLY",0);
  FUN_1006513c0(plVar34,uVar46);
  uVar49 = FUN_1006425d0(plVar32,0,0,1,1);
  local_c8 = (code *)CONCAT44(fVar50,uVar49);
  FUN_10064e48c(plVar32,&local_c8);
  *(uint *)((long)param_1 + 0x734bc) = *(uint *)((long)param_1 + 0x734bc) | 0x10;
  local_a0 = uVar48;
  local_c8 = FUN_10028033c;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 1;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0xe688,&local_c8);
  local_a0 = uVar43;
  local_c8 = FUN_10028033c;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 1;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0xe688,&local_c8);
  uVar46 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x438c0000,plVar35,0,uVar46,&DAT_10115a168,&DAT_101dc1cb8,0);
  uVar48 = DAT_101d91884;
  local_a0 = DAT_101d91884;
  local_c8 = thunk_FUN_100284428;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0xe6f4,&local_c8);
  FUN_1001b4964(plVar35,1);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_RENAME_TEAM",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x446b0000,plVar36,0,uVar46,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_a0 = uVar48;
  local_c8 = FUN_10028034c;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0xe9ab,&local_c8);
  FUN_1001b4c0c(plVar36,0);
  FUN_1001b4964(plVar36,1);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TEAM",0);
  FUN_1001816d4(0x42480000,0x43480000,0x449c4000,plVar37,0,uVar46,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_a0 = uVar48;
  local_c8 = FUN_10028034c;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 1;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0xec62,&local_c8);
  FUN_100651038(param_1 + 0xed44,*ppuVar41);
  FUN_1001b495c(0x3f000000,plVar37);
  if ((*(float *)(param_1 + 0xec6b) != 0.5) || (*(float *)((long)param_1 + 0x7635c) != 0.5)) {
    param_1[0xec6b] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar37);
  }
  FUN_100181b5c(0,0x41f00000,plVar37);
  FUN_100181c68(0x43133333,plVar37);
  FUN_1001b4964(plVar37,1);
  FUN_1001b4c0c(plVar37,0);
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"glory_icon_small");
  if ((*(float *)(param_1 + 0xef5d) != 0.0) || (*(float *)((long)param_1 + 0x77aec) != 3.0)) {
    param_1[0xef5d] = 0x4040000000000000;
    FUN_1000200a0(plVar4);
  }
  local_c8 = (code *)0x3f00000000000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_c8);
  if ((*(float *)(param_1 + 0xef5e) != 0.9) || (*(float *)((long)param_1 + 0x77af4) != 0.9)) {
    param_1[0xef5e] = 0x3f6666663f666666;
    FUN_1000200a0(plVar4);
  }
  ppuVar42 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (iVar44 == 0) {
    ppuVar42 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
  }
  FUN_100651038(plVar38,*ppuVar42);
  fVar50 = (float)FUN_100652e60(plVar4);
  fVar51 = *(float *)((long)param_1 + 0x77aec) + -3.0;
  if ((*(float *)(param_1 + 0xef37) != fVar50) || (*(float *)((long)param_1 + 0x779bc) != fVar51)) {
    *(float *)(param_1 + 0xef37) = fVar50;
    *(float *)((long)param_1 + 0x779bc) = fVar51;
    FUN_1000200a0(plVar38);
  }
  local_c8 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0xef2f] + 0x28))(plVar38,&local_c8);
  fVar50 = (float)FUN_1006425d0(plVar5,0,0,1,1);
  FUN_1006425d0(plVar5,0,0,1,1);
  fVar51 = fVar51 * -0.5 + 10.0;
  if ((*(float *)(param_1 + 0xef20) != fVar50 * -0.5) ||
     (*(float *)((long)param_1 + 0x77904) != fVar51)) {
    *(float *)(param_1 + 0xef20) = fVar50 * -0.5;
    *(float *)((long)param_1 + 0x77904) = fVar51;
    FUN_1000200a0(plVar5);
  }
  local_c8 = (code *)0x0;
  (**(code **)(*plVar5 + 0x28))(plVar5,&local_c8);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TEAM",0);
  FUN_1001816d4(0x42480000,0x43480000,0x449c4000,plVar39,0,uVar46,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_a0 = uVar48;
  local_c8 = FUN_10028034c;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0xef74,&local_c8);
  ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar44 == 0) {
    ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  FUN_100651038(param_1 + 0xf056,*ppuVar42);
  FUN_1001b495c(0x3f000000,plVar39);
  if ((*(float *)(param_1 + 0xef7d) != 0.5) || (*(float *)((long)param_1 + 0x77bec) != 0.5)) {
    param_1[0xef7d] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar39);
  }
  FUN_100181b5c(0,0x41f00000,plVar39);
  FUN_100181c68(0x43133333,plVar39);
  FUN_1001b4964(plVar39,1);
  FUN_1001b4c0c(plVar39,0);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"ice_icon_small");
  if ((*(float *)(param_1 + 0xf26f) != 0.0) || (*(float *)((long)param_1 + 0x7937c) != 3.0)) {
    param_1[0xf26f] = 0x4040000000000000;
    FUN_1000200a0(plVar2);
  }
  local_c8 = (code *)0x3f00000000000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_c8);
  if ((*(float *)(param_1 + 0xf270) != 0.9) || (*(float *)((long)param_1 + 0x79384) != 0.9)) {
    param_1[0xf270] = 0x3f6666663f666666;
    FUN_1000200a0(plVar2);
  }
  ppuVar42 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (iVar44 == 0) {
    ppuVar42 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
  }
  FUN_100651038(plVar40,*ppuVar42);
  fVar50 = (float)FUN_100652e60(plVar2);
  fVar51 = *(float *)((long)param_1 + 0x7937c) + -3.0;
  if ((*(float *)(param_1 + 0xf249) != fVar50) || (*(float *)((long)param_1 + 0x7924c) != fVar51)) {
    *(float *)(param_1 + 0xf249) = fVar50;
    *(float *)((long)param_1 + 0x7924c) = fVar51;
    FUN_1000200a0(plVar40);
  }
  local_c8 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0xf241] + 0x28))(plVar40,&local_c8);
  fVar50 = (float)FUN_1006425d0(plVar3,0,0,1,1);
  FUN_1006425d0(plVar3,0,0,1,1);
  fVar51 = fVar51 * -0.5 + 10.0;
  if ((*(float *)(param_1 + 0xf232) != fVar50 * -0.5) ||
     (*(float *)((long)param_1 + 0x79194) != fVar51)) {
    *(float *)(param_1 + 0xf232) = fVar50 * -0.5;
    *(float *)((long)param_1 + 0x79194) = fVar51;
    FUN_1000200a0(plVar3);
  }
  local_c8 = (code *)0x0;
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_c8);
  local_a0 = DAT_101dbd460;
  local_c8 = thunk_FUN_1002847f8;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0xf297,&local_c8);
  local_a0 = DAT_101dbd48c;
  local_c8 = thunk_FUN_1002847f8;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0xf297,&local_c8);
  *(uint *)((long)param_1 + 0x404) = *(uint *)((long)param_1 + 0x404) & 0xfffffffb;
  FUN_10023d1f0(param_1 + 0x70,0);
  FUN_100652cdc(plVar30,"checkbox_filled");
  FUN_100652cdc(plVar33,"checkbox_empty");
  *(undefined4 *)(param_1 + 0xf32d) = 0;
  FUN_100280358(param_1);
  *(uint *)((long)param_1 + 0x68bf4) = *(uint *)((long)param_1 + 0x68bf4) & 0xfffffffb;
  FUN_100280478(0,param_1,1,0,0);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 8;
  return param_1;
}



/*
 * thunk_FUN_10027e884
 * VA: 0xthunk_10027e884 | Source: functions/10027.c:10515
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 21, Vis masks: 2
 * Callees: FUN_10001554c, FUN_1000200a0, FUN_10003330c, FUN_100126c88, FUN_10014f4a0, FUN_1001816d4, FUN_100181b5c, FUN_100181c68 (+52 more)
 * Callers: FUN_10021f998, FUN_100266a50, thunk_FUN_100266a50
 */
long * thunk_FUN_10027e884(long *param_1)

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
  uint *puVar11;
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
  long *plVar38;
  long *plVar39;
  long *plVar40;
  undefined **ppuVar41;
  undefined **ppuVar42;
  undefined4 uVar43;
  int iVar44;
  long lVar45;
  undefined8 uVar46;
  uint uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  float fVar50;
  float fVar51;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  
  plVar2 = param_1 + 0xf267;
  plVar3 = param_1 + 0xf22a;
  plVar4 = param_1 + 0xef55;
  plVar5 = param_1 + 0xef18;
  plVar6 = param_1 + 0xe6e2;
  plVar7 = param_1 + 0xd2d5;
  plVar8 = param_1 + 0xd226;
  plVar9 = param_1 + 0xd15d;
  plVar10 = param_1 + 0xc99c;
  puVar11 = (uint *)((long)param_1 + 0x64afc);
  lVar45 = FUN_10026d1f4();
  FUN_10014f4a0(lVar45 + 0x368);
  *param_1 = (long)&PTR_thunk_FUN_100280618_10147e408;
  param_1[0x6d] = (long)&PTR_FUN_10147e5c8;
  thunk_FUN_10023b4b8();
  plVar12 = param_1 + 0xc938;
  FUN_10064e264();
  plVar13 = param_1 + 0xc94f;
  thunk_FUN_100652c08();
  thunk_FUN_1001f0830(param_1 + 0xc96d);
  FUN_10064e264(param_1 + 0xc985);
  FUN_1006421a8(plVar10);
  *plVar10 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8();
  param_1[0xc9ad] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8(param_1 + 0xc9be);
  param_1[0xc9be] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100650e64(param_1 + 0xc9cf);
  thunk_FUN_100181304(param_1 + 0xc9f5,0);
  thunk_FUN_100652c08(param_1 + 0xccac);
  thunk_FUN_100652c08(param_1 + 0xccca);
  thunk_FUN_100650e64(param_1 + 0xcce8);
  thunk_FUN_100652c08(param_1 + 0xcd0e);
  FUN_10064e264(param_1 + 0xcd2c);
  FUN_10053077c(param_1 + 0xcd43,0);
  thunk_FUN_100652c08(param_1 + 0xcdea);
  param_1[0xce09] = 0;
  param_1[0xce08] = 0;
  FUN_100284d7c(param_1 + 0xce0a);
  FUN_1006421a8(plVar9);
  *plVar9 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0xd16e;
  FUN_1006421a8();
  param_1[0xd16e] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar14 = param_1 + 0xd17f;
  FUN_10053077c(plVar14,0);
  FUN_1006421a8(plVar8);
  *plVar8 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar15 = param_1 + 0xd237;
  thunk_FUN_100652c08();
  plVar16 = param_1 + 0xd255;
  thunk_FUN_100652c08();
  plVar17 = param_1 + 0xd273;
  thunk_FUN_100650e64();
  plVar18 = param_1 + 0xd299;
  thunk_FUN_100652c08();
  plVar19 = param_1 + 0xd2b7;
  thunk_FUN_100652c08();
  FUN_1006421a8(plVar7);
  *plVar7 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar20 = param_1 + 0xd2e6;
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar21 = param_1 + 0xd332;
  thunk_FUN_100184f78();
  plVar22 = param_1 + 0xd6d0;
  thunk_FUN_100184f78();
  plVar23 = param_1 + 0xda6e;
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar24 = param_1 + 0xdaba;
  thunk_FUN_100184f78();
  plVar25 = param_1 + 0xde58;
  thunk_FUN_100184f78();
  plVar26 = param_1 + 0xe1f6;
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar27 = param_1 + 0xe242;
  thunk_FUN_100184f78();
  plVar28 = param_1 + 0xe5e0;
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar29 = param_1 + 0xe62c;
  FUN_10064e264(plVar29);
  plVar30 = param_1 + 0xe643;
  thunk_FUN_100652c08();
  plVar31 = param_1 + 0xe661;
  thunk_FUN_100650e64();
  plVar32 = param_1 + 0xe687;
  FUN_10064e264(plVar32);
  plVar33 = param_1 + 0xe69e;
  thunk_FUN_100652c08();
  plVar34 = param_1 + 0xe6bc;
  thunk_FUN_100650e64();
  FUN_1006421a8(plVar6);
  *plVar6 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar35 = param_1 + 0xe6f3;
  thunk_FUN_100181304(plVar35,0);
  plVar36 = param_1 + 0xe9aa;
  thunk_FUN_100181304(plVar36,0);
  plVar37 = param_1 + 0xec61;
  thunk_FUN_100181304(plVar37,0);
  FUN_10064e264(plVar5);
  plVar38 = param_1 + 0xef2f;
  thunk_FUN_100650e64();
  thunk_FUN_100652c08(plVar4);
  plVar39 = param_1 + 0xef73;
  thunk_FUN_100181304(plVar39,0);
  FUN_10064e264(plVar3);
  plVar40 = param_1 + 0xf241;
  thunk_FUN_100650e64();
  thunk_FUN_100652c08(plVar2);
  thunk_FUN_1001c0018(param_1 + 0xf285,0);
  thunk_FUN_1001ceb64(param_1 + 0xf310,0);
  FUN_10003330c(param_1 + 0xf32e,&DAT_101d91198);
  FUN_10003330c(param_1 + 0xf331,&DAT_101d91198);
  FUN_1004e313c(param_1 + 0xf334);
  *(undefined8 *)((long)param_1 + 0x799b6) = 0;
  param_1[0xf336] = 0;
  FUN_1006423ec(param_1 + 0x30,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar13,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar12,1);
  FUN_100642bd8(plVar12,plVar10,1);
  FUN_100642bd8(plVar10,param_1 + 0xc9ad,1);
  FUN_100642bd8(param_1 + 0xc9ad,param_1[0xc96e],1);
  FUN_100642bd8(plVar12,plVar9,1);
  FUN_100642bd8(plVar9,plVar1,1);
  FUN_100642bd8(plVar1,plVar8,1);
  FUN_100642bd8(plVar8,plVar14,1);
  FUN_1005308f8(plVar14,plVar15,1);
  FUN_1005308f8(plVar14,plVar16,1);
  FUN_1005308f8(plVar14,plVar17,1);
  FUN_1005308f8(plVar14,plVar18,1);
  FUN_1005308f8(plVar14,plVar19,1);
  FUN_1005308f8(plVar14,plVar7,1);
  FUN_100642bd8(plVar7,plVar20,1);
  FUN_100642bd8(plVar7,param_1 + 0xd30c,1);
  FUN_100642bd8(plVar7,plVar21,1);
  FUN_100642bd8(plVar7,plVar22,1);
  FUN_100642bd8(plVar7,plVar23,1);
  FUN_100642bd8(plVar7,param_1 + 0xda94,1);
  FUN_100642bd8(plVar7,plVar24,1);
  FUN_100642bd8(plVar7,plVar25,1);
  FUN_100642bd8(plVar7,plVar26,1);
  FUN_100642bd8(plVar7,param_1 + 0xe21c,1);
  FUN_100642bd8(plVar7,plVar27,1);
  FUN_100642bd8(plVar7,plVar28,1);
  FUN_100642bd8(plVar7,param_1 + 0xe606,1);
  FUN_100642bd8(plVar7,plVar29,1);
  FUN_100642bd8(plVar29,plVar30,1);
  FUN_100642bd8(plVar29,plVar31,1);
  FUN_100642bd8(plVar7,plVar32,1);
  FUN_100642bd8(plVar32,plVar33,1);
  FUN_100642bd8(plVar32,plVar34,1);
  FUN_100642bd8(plVar7,plVar6,1);
  FUN_100642bd8(plVar6,plVar35,1);
  FUN_100642bd8(plVar6,plVar36,1);
  FUN_100642bd8(plVar6,plVar37,1);
  FUN_100642bd8(plVar37,plVar5,1);
  FUN_100642bd8(plVar5,plVar4,1);
  FUN_100642bd8(plVar5,plVar38,1);
  FUN_100642bd8(plVar6,plVar39,1);
  FUN_100642bd8(plVar39,plVar3,1);
  FUN_100642bd8(plVar3,plVar2,1);
  FUN_100642bd8(plVar3,plVar40,1);
  FUN_100642bd8(plVar12,param_1 + 0xf310,1);
  FUN_100642bd8(plVar12,param_1 + 0x70,1);
  iVar44 = FUN_100126c88();
  FUN_100652cac(plVar13,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar13,&DAT_10115a164,2);
  uVar47 = *puVar11;
  if ((uVar47 & 0x7f80) != 0x2600) {
    *puVar11 = uVar47 & 0xffff8000 | uVar47 & 0x7f | 0x2600;
    FUN_1000200a0(plVar13);
    uVar47 = *puVar11;
  }
  *puVar11 = uVar47 | 0x10;
  if ((*(uint *)((long)param_1 + 0x68bf4) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x68bf4) = *(uint *)((long)param_1 + 0x68bf4) & 0xffff807f;
    FUN_1000200a0(plVar1);
  }
  FUN_100530adc(plVar14,0,1);
  FUN_100652cac(plVar15,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar47 = *(uint *)((long)param_1 + 0x6923c);
  if ((uVar47 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x6923c) = uVar47 & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar15);
    uVar47 = *(uint *)((long)param_1 + 0x6923c);
  }
  *(uint *)((long)param_1 + 0x6923c) = uVar47 | 0x10;
  FUN_100652cac(plVar16,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_guild_outline");
  fVar50 = *(float *)(param_1 + 0xd25e);
  if ((fVar50 != 1.5) || (fVar50 = *(float *)((long)param_1 + 0x692f4), fVar50 != 1.5)) {
    lVar45 = NEON_fmov(0x3fc00000,4);
    param_1[0xd25e] = lVar45;
    FUN_1000200a0(plVar16);
  }
  uVar47 = *(uint *)((long)param_1 + 0x6932c);
  if ((uVar47 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x6932c) = uVar47 & 0xffff8000 | uVar47 & 0x7f | 0x1980;
    FUN_1000200a0(plVar16);
  }
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TEAM_HEADER",0);
  FUN_1006513c0(plVar17,uVar46);
  ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar44 == 0) {
    ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  }
  FUN_100651038(plVar17,*ppuVar42);
  if ((*(uint *)((long)param_1 + 0x6941c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x6941c) = *(uint *)((long)param_1 + 0x6941c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar17);
  }
  FUN_100652cac(plVar18,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar47 = *(uint *)((long)param_1 + 0x6954c);
  if ((uVar47 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x6954c) = uVar47 & 0xffff8000 | uVar47 & 0x7f | 0x2600;
    FUN_1000200a0(plVar18);
    uVar47 = *(uint *)((long)param_1 + 0x6954c);
  }
  *(uint *)((long)param_1 + 0x6954c) = uVar47 | 0x10;
  FUN_100652cac(plVar19,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar19,&DAT_10115a164,2);
  uVar47 = *(uint *)((long)param_1 + 0x6963c);
  if ((uVar47 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x6963c) = uVar47 & 0xffff8000 | uVar47 & 0x7f | 0x2600;
    FUN_1000200a0(plVar19);
    uVar47 = *(uint *)((long)param_1 + 0x6963c);
  }
  *(uint *)((long)param_1 + 0x6963c) = uVar47 | 0x10;
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_NAME_FIELD_BLURB",0);
  FUN_1006513c0(param_1 + 0xd30c,uVar46);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TAG_FIELD_BLURB",0);
  FUN_1006513c0(param_1 + 0xda94,uVar46);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_MOTTO_FIELD_BLURB",0);
  FUN_1006513c0(param_1 + 0xe21c,uVar46);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TYPE_FIELD_BLURB",0);
  FUN_1006513c0(param_1 + 0xe606,uVar46);
  ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar44 == 0) {
    ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651594(plVar20,*ppuVar42,&DAT_10115a168);
  uVar47 = *(uint *)((long)param_1 + 0x697b4);
  if ((uVar47 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x697b4) = uVar47 & 0xffff8000 | uVar47 & 0x7f | 0xc80;
    FUN_1000200a0(plVar20);
  }
  FUN_1004e3120(&uStack_c8,"1");
  FUN_1006513c0(plVar20,&uStack_c8);
  if (plStack_c0 != (void *)0x0) {
    operator_delete__(plStack_c0);
  }
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_NAME_FIELD",0);
  FUN_100185730(plVar21,uVar46);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_NAME_CAPTION",0);
  FUN_1001afd98(plVar21,uVar46,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar21,1);
  FUN_100185e38(plVar21,1,3);
  FUN_100185e48(plVar21,1,0x10);
  FUN_100185e70(plVar21,0);
  uVar48 = DAT_101dbd4ac;
  uStack_a0 = DAT_101dbd4ac;
  uStack_c8 = thunk_FUN_1002841f0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0xd333,&uStack_c8);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_NAME_CONFIRM_FIELD",0);
  FUN_100185730(plVar22,uVar46);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_NAME_CAPTION",0);
  FUN_1001afd98(plVar22,uVar46,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar22,1);
  FUN_100185e38(plVar22,1,3);
  FUN_100185e48(plVar22,1,0x10);
  FUN_100185e70(plVar22,0);
  uStack_a0 = uVar48;
  uStack_c8 = thunk_FUN_1002841f0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0xd6d1,&uStack_c8);
  ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar44 == 0) {
    ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651594(plVar23,*ppuVar42,&DAT_10115a168);
  uVar47 = *(uint *)((long)param_1 + 0x6d3f4);
  if ((uVar47 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x6d3f4) = uVar47 & 0xffff8000 | uVar47 & 0x7f | 0xc80;
    FUN_1000200a0(plVar23);
  }
  FUN_1004e3120(&uStack_c8,"2");
  FUN_1006513c0(plVar23,&uStack_c8);
  if (plStack_c0 != (long *)0x0) {
    operator_delete__(plStack_c0);
  }
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TAG_FIELD",0);
  FUN_100185730(plVar24,uVar46);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TAG_CAPTION",0);
  FUN_1001afd98(plVar24,uVar46,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar24,1);
  FUN_100185e38(plVar24,1,2);
  FUN_100185e48(plVar24,1,4);
  FUN_100185e70(plVar24,0);
  uStack_a0 = uVar48;
  uStack_c8 = thunk_FUN_10028425c;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0xdabb,&uStack_c8);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TAG_CONFIRM_FIELD",0);
  FUN_100185730(plVar25,uVar46);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TAG_CAPTION",0);
  FUN_1001afd98(plVar25,uVar46,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar25,1);
  FUN_100185e38(plVar25,1,2);
  FUN_100185e48(plVar25,1,4);
  FUN_100185e70(plVar25,0);
  uStack_a0 = uVar48;
  uStack_c8 = thunk_FUN_10028425c;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0xde59,&uStack_c8);
  ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar44 == 0) {
    ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651594(plVar26,*ppuVar42,&DAT_10115a168);
  uVar47 = *(uint *)((long)param_1 + 0x71034);
  if ((uVar47 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x71034) = uVar47 & 0xffff8000 | uVar47 & 0x7f | 0xc80;
    FUN_1000200a0(plVar26);
  }
  FUN_1004e3120(&uStack_c8,"3");
  FUN_1006513c0(plVar26,&uStack_c8);
  if (plStack_c0 != (long *)0x0) {
    operator_delete__(plStack_c0);
  }
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_MOTTO_FIELD",0);
  FUN_100185730(plVar27,uVar46);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_MOTTO_CAPTION",0);
  FUN_1001afd98(plVar27,uVar46,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e70(plVar27,0);
  FUN_1001b0734(plVar27,0);
  FUN_100185e48(plVar27,1,0x8c);
  FUN_100185e2c(plVar27,0);
  uStack_a0 = uVar48;
  uStack_c8 = thunk_FUN_1002842c8;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0xe243,&uStack_c8);
  ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar44 == 0) {
    ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651594(plVar28,*ppuVar42,&DAT_10115a168);
  uVar47 = *(uint *)((long)param_1 + 0x72f84);
  if ((uVar47 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x72f84) = uVar47 & 0xffff8000 | uVar47 & 0x7f | 0xc80;
    FUN_1000200a0(plVar28);
  }
  FUN_1004e3120(&uStack_c8,"4");
  FUN_1006513c0(plVar28,&uStack_c8);
  if (plStack_c0 != (long *)0x0) {
    operator_delete__(plStack_c0);
  }
  FUN_100652cac(plVar30,PTR_s_build___MenuPartsCommon_tga_101854970,"checkbox_filled");
  ppuVar42 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar44 == 0) {
    ppuVar42 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  ppuVar41 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar44 == 0) {
    ppuVar41 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  FUN_100651594(plVar31,*ppuVar42,&DAT_10115a168);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TYPE_OPEN",0);
  FUN_1006513c0(plVar31,uVar46);
  uVar48 = FUN_1006425d0(plVar29,0,0,1,1);
  uStack_c8 = (code *)CONCAT44(fVar50,uVar48);
  FUN_10064e48c(plVar29,&uStack_c8);
  *(uint *)((long)param_1 + 0x731e4) = *(uint *)((long)param_1 + 0x731e4) | 0x10;
  uVar48 = DAT_101dbd458;
  uStack_a0 = DAT_101dbd458;
  uStack_c8 = FUN_10028033c;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0xe62d,&uStack_c8);
  uVar43 = DAT_101dbd484;
  uStack_a0 = DAT_101dbd484;
  uStack_c8 = FUN_10028033c;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0xe62d,&uStack_c8);
  FUN_100652cac(plVar33,PTR_s_build___MenuPartsCommon_tga_101854970,"checkbox_filled");
  FUN_100651594(plVar34,*ppuVar42,&DAT_10115a168);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TYPE_INVITE_ONLY",0);
  FUN_1006513c0(plVar34,uVar46);
  uVar49 = FUN_1006425d0(plVar32,0,0,1,1);
  uStack_c8 = (code *)CONCAT44(fVar50,uVar49);
  FUN_10064e48c(plVar32,&uStack_c8);
  *(uint *)((long)param_1 + 0x734bc) = *(uint *)((long)param_1 + 0x734bc) | 0x10;
  uStack_a0 = uVar48;
  uStack_c8 = FUN_10028033c;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 1;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0xe688,&uStack_c8);
  uStack_a0 = uVar43;
  uStack_c8 = FUN_10028033c;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 1;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0xe688,&uStack_c8);
  uVar46 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x438c0000,plVar35,0,uVar46,&DAT_10115a168,&DAT_101dc1cb8,0);
  uVar48 = DAT_101d91884;
  uStack_a0 = DAT_101d91884;
  uStack_c8 = thunk_FUN_100284428;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0xe6f4,&uStack_c8);
  FUN_1001b4964(plVar35,1);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_RENAME_TEAM",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x446b0000,plVar36,0,uVar46,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_a0 = uVar48;
  uStack_c8 = FUN_10028034c;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0xe9ab,&uStack_c8);
  FUN_1001b4c0c(plVar36,0);
  FUN_1001b4964(plVar36,1);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TEAM",0);
  FUN_1001816d4(0x42480000,0x43480000,0x449c4000,plVar37,0,uVar46,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_a0 = uVar48;
  uStack_c8 = FUN_10028034c;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 1;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0xec62,&uStack_c8);
  FUN_100651038(param_1 + 0xed44,*ppuVar41);
  FUN_1001b495c(0x3f000000,plVar37);
  if ((*(float *)(param_1 + 0xec6b) != 0.5) || (*(float *)((long)param_1 + 0x7635c) != 0.5)) {
    param_1[0xec6b] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar37);
  }
  FUN_100181b5c(0,0x41f00000,plVar37);
  FUN_100181c68(0x43133333,plVar37);
  FUN_1001b4964(plVar37,1);
  FUN_1001b4c0c(plVar37,0);
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"glory_icon_small");
  if ((*(float *)(param_1 + 0xef5d) != 0.0) || (*(float *)((long)param_1 + 0x77aec) != 3.0)) {
    param_1[0xef5d] = 0x4040000000000000;
    FUN_1000200a0(plVar4);
  }
  uStack_c8 = (code *)0x3f00000000000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&uStack_c8);
  if ((*(float *)(param_1 + 0xef5e) != 0.9) || (*(float *)((long)param_1 + 0x77af4) != 0.9)) {
    param_1[0xef5e] = 0x3f6666663f666666;
    FUN_1000200a0(plVar4);
  }
  ppuVar42 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (iVar44 == 0) {
    ppuVar42 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
  }
  FUN_100651038(plVar38,*ppuVar42);
  fVar50 = (float)FUN_100652e60(plVar4);
  fVar51 = *(float *)((long)param_1 + 0x77aec) + -3.0;
  if ((*(float *)(param_1 + 0xef37) != fVar50) || (*(float *)((long)param_1 + 0x779bc) != fVar51)) {
    *(float *)(param_1 + 0xef37) = fVar50;
    *(float *)((long)param_1 + 0x779bc) = fVar51;
    FUN_1000200a0(plVar38);
  }
  uStack_c8 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0xef2f] + 0x28))(plVar38,&uStack_c8);
  fVar50 = (float)FUN_1006425d0(plVar5,0,0,1,1);
  FUN_1006425d0(plVar5,0,0,1,1);
  fVar51 = fVar51 * -0.5 + 10.0;
  if ((*(float *)(param_1 + 0xef20) != fVar50 * -0.5) ||
     (*(float *)((long)param_1 + 0x77904) != fVar51)) {
    *(float *)(param_1 + 0xef20) = fVar50 * -0.5;
    *(float *)((long)param_1 + 0x77904) = fVar51;
    FUN_1000200a0(plVar5);
  }
  uStack_c8 = (code *)0x0;
  (**(code **)(*plVar5 + 0x28))(plVar5,&uStack_c8);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TEAM",0);
  FUN_1001816d4(0x42480000,0x43480000,0x449c4000,plVar39,0,uVar46,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_a0 = uVar48;
  uStack_c8 = FUN_10028034c;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0xef74,&uStack_c8);
  ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar44 == 0) {
    ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  FUN_100651038(param_1 + 0xf056,*ppuVar42);
  FUN_1001b495c(0x3f000000,plVar39);
  if ((*(float *)(param_1 + 0xef7d) != 0.5) || (*(float *)((long)param_1 + 0x77bec) != 0.5)) {
    param_1[0xef7d] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar39);
  }
  FUN_100181b5c(0,0x41f00000,plVar39);
  FUN_100181c68(0x43133333,plVar39);
  FUN_1001b4964(plVar39,1);
  FUN_1001b4c0c(plVar39,0);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"ice_icon_small");
  if ((*(float *)(param_1 + 0xf26f) != 0.0) || (*(float *)((long)param_1 + 0x7937c) != 3.0)) {
    param_1[0xf26f] = 0x4040000000000000;
    FUN_1000200a0(plVar2);
  }
  uStack_c8 = (code *)0x3f00000000000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&uStack_c8);
  if ((*(float *)(param_1 + 0xf270) != 0.9) || (*(float *)((long)param_1 + 0x79384) != 0.9)) {
    param_1[0xf270] = 0x3f6666663f666666;
    FUN_1000200a0(plVar2);
  }
  ppuVar42 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (iVar44 == 0) {
    ppuVar42 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
  }
  FUN_100651038(plVar40,*ppuVar42);
  fVar50 = (float)FUN_100652e60(plVar2);
  fVar51 = *(float *)((long)param_1 + 0x7937c) + -3.0;
  if ((*(float *)(param_1 + 0xf249) != fVar50) || (*(float *)((long)param_1 + 0x7924c) != fVar51)) {
    *(float *)(param_1 + 0xf249) = fVar50;
    *(float *)((long)param_1 + 0x7924c) = fVar51;
    FUN_1000200a0(plVar40);
  }
  uStack_c8 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0xf241] + 0x28))(plVar40,&uStack_c8);
  fVar50 = (float)FUN_1006425d0(plVar3,0,0,1,1);
  FUN_1006425d0(plVar3,0,0,1,1);
  fVar51 = fVar51 * -0.5 + 10.0;
  if ((*(float *)(param_1 + 0xf232) != fVar50 * -0.5) ||
     (*(float *)((long)param_1 + 0x79194) != fVar51)) {
    *(float *)(param_1 + 0xf232) = fVar50 * -0.5;
    *(float *)((long)param_1 + 0x79194) = fVar51;
    FUN_1000200a0(plVar3);
  }
  uStack_c8 = (code *)0x0;
  (**(code **)(*plVar3 + 0x28))(plVar3,&uStack_c8);
  uStack_a0 = DAT_101dbd460;
  uStack_c8 = thunk_FUN_1002847f8;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0xf297,&uStack_c8);
  uStack_a0 = DAT_101dbd48c;
  uStack_c8 = thunk_FUN_1002847f8;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0xf297,&uStack_c8);
  *(uint *)((long)param_1 + 0x404) = *(uint *)((long)param_1 + 0x404) & 0xfffffffb;
  FUN_10023d1f0(param_1 + 0x70,0);
  FUN_100652cdc(plVar30,"checkbox_filled");
  FUN_100652cdc(plVar33,"checkbox_empty");
  *(undefined4 *)(param_1 + 0xf32d) = 0;
  FUN_100280358(param_1);
  *(uint *)((long)param_1 + 0x68bf4) = *(uint *)((long)param_1 + 0x68bf4) & 0xfffffffb;
  FUN_100280478(0,param_1,1,0,0);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 8;
  return param_1;
}



/*
 * FUN_1002850d0
 * VA: 0x1002850d0 | Source: functions/10028.c:3859
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 19, Vis masks: 3
 * Callees: FUN_10001554c, FUN_1000200a0, FUN_10003330c, FUN_100126c88, FUN_10014f4a0, FUN_1001816d4, FUN_100181b5c, FUN_100181c68 (+51 more)
 */
long * FUN_1002850d0(long *param_1)

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
  long *plVar38;
  long *plVar39;
  long *plVar40;
  long *plVar41;
  long *plVar42;
  long *plVar43;
  undefined **ppuVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  int iVar47;
  long lVar48;
  undefined8 *puVar49;
  undefined8 uVar50;
  uint uVar51;
  float fVar52;
  float fVar53;
  code *local_c8;
  long *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  
  plVar2 = param_1 + 0x5593;
  plVar3 = param_1 + 0x53dc;
  plVar4 = param_1 + 0x5316;
  plVar5 = param_1 + 0x52d9;
  plVar6 = param_1 + 0x5004;
  plVar7 = param_1 + 0x4fc7;
  plVar8 = param_1 + 0x4791;
  plVar9 = param_1 + 0x3870;
  plVar10 = param_1 + 0x371a;
  plVar11 = param_1 + 0x36f8;
  plVar12 = param_1 + 0x328e;
  plVar13 = param_1 + 0x326c;
  lVar48 = FUN_10026d1f4();
  FUN_10014f4a0(lVar48 + 0x368);
  *param_1 = (long)&PTR_thunk_FUN_100286e10_10147ea60;
  param_1[0x6d] = (long)&PTR_FUN_10147ec28;
  thunk_FUN_100264e14();
  FUN_10064e264();
  FUN_1006421a8(plVar13);
  *plVar13 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8();
  param_1[0x327d] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8(plVar12);
  *plVar12 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar14 = param_1 + 0x329f;
  FUN_10053077c(plVar14,0);
  thunk_FUN_100650e64();
  plVar15 = param_1 + 0x336c;
  thunk_FUN_100181304(plVar15,0);
  plVar16 = param_1 + 0x3623;
  thunk_FUN_100652c08();
  plVar17 = param_1 + 0x3641;
  thunk_FUN_100652c08();
  plVar18 = param_1 + 0x365f;
  thunk_FUN_100650e64();
  plVar19 = param_1 + 0x3685;
  thunk_FUN_100652c08();
  plVar20 = param_1 + 0x36a3;
  thunk_FUN_100652c08();
  param_1[0x36c2] = 0;
  param_1[0x36c1] = 0;
  plVar21 = param_1 + 0x36c3;
  thunk_FUN_100652c08();
  plVar22 = param_1 + 0x36e1;
  FUN_10064e264();
  FUN_1006421a8(plVar11);
  *plVar11 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x3709;
  FUN_1006421a8();
  param_1[0x3709] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8(plVar10);
  *plVar10 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar23 = param_1 + 0x372b;
  FUN_10053077c(plVar23,0);
  plVar24 = param_1 + 0x37d2;
  thunk_FUN_100652c08();
  plVar25 = param_1 + 0x37f0;
  thunk_FUN_100652c08();
  plVar26 = param_1 + 0x380e;
  thunk_FUN_100650e64();
  plVar27 = param_1 + 0x3834;
  thunk_FUN_100652c08();
  plVar28 = param_1 + 0x3852;
  thunk_FUN_100652c08();
  FUN_1006421a8(plVar9);
  *plVar9 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar29 = param_1 + 0x3881;
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar30 = param_1 + 0x38cd;
  thunk_FUN_100184f78();
  plVar31 = param_1 + 0x3c6b;
  thunk_FUN_100184f78();
  plVar32 = param_1 + 0x4009;
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar33 = param_1 + 0x4055;
  thunk_FUN_100184f78();
  plVar34 = param_1 + 0x43f3;
  thunk_FUN_100184f78();
  FUN_1006421a8(plVar8);
  *plVar8 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar35 = param_1 + 0x47a2;
  thunk_FUN_100181304(plVar35,0);
  plVar36 = param_1 + 0x4a59;
  thunk_FUN_100181304(plVar36,0);
  plVar37 = param_1 + 0x4d10;
  thunk_FUN_100181304(plVar37,0);
  FUN_10064e264(plVar7);
  plVar38 = param_1 + 0x4fde;
  thunk_FUN_100650e64();
  thunk_FUN_100652c08(plVar6);
  plVar39 = param_1 + 0x5022;
  thunk_FUN_100181304(plVar39,0);
  FUN_10064e264(plVar5);
  plVar40 = param_1 + 0x52f0;
  thunk_FUN_100650e64();
  thunk_FUN_100652c08(plVar4);
  thunk_FUN_1001c0018(param_1 + 0x5334,0);
  thunk_FUN_1001ceb64(param_1 + 0x53bf,0);
  puVar49 = (undefined8 *)FUN_1006421a8(plVar3);
  *puVar49 = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100650e64();
  thunk_FUN_1001d0644(param_1 + 0x5413,0);
  puVar49 = (undefined8 *)FUN_1006421a8(plVar2);
  *puVar49 = &PTR_thunk_FUN_10064221c_10144b7e8;
  plVar41 = param_1 + 0x55a4;
  thunk_FUN_100652c08();
  plVar42 = param_1 + 0x55c2;
  thunk_FUN_100652c08();
  plVar43 = param_1 + 0x55e0;
  thunk_FUN_100650e64();
  param_1[0x5607] = 0;
  param_1[0x5606] = 0;
  FUN_10003330c(param_1 + 0x5608,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x560b,&DAT_101d91198);
  *(undefined8 *)((long)param_1 + 0x2b076) = 0;
  param_1[0x560e] = 0;
  FUN_1006423ec(param_1 + 0x30,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar21,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar22,1);
  FUN_100642bd8(plVar22,plVar13,1);
  FUN_100642bd8(plVar13,param_1 + 0x327d,1);
  FUN_100642bd8(param_1 + 0x327d,param_1 + 0x3255,1);
  FUN_100642bd8(param_1 + 0x3255,plVar14,1);
  FUN_100642bd8(plVar14,plVar12,1);
  FUN_100642bd8(plVar12,param_1 + 0x3346,1);
  FUN_100642bd8(plVar12,plVar15,1);
  FUN_1005308f8(plVar14,plVar16,1);
  FUN_1005308f8(plVar14,plVar17,1);
  FUN_1005308f8(plVar14,plVar18,1);
  FUN_1005308f8(plVar14,plVar19,1);
  FUN_1005308f8(plVar14,plVar20,1);
  FUN_100642bd8(plVar22,plVar11,1);
  FUN_100642bd8(plVar11,plVar1,1);
  FUN_100642bd8(plVar1,plVar10,1);
  FUN_100642bd8(plVar10,plVar23,1);
  FUN_1005308f8(plVar23,plVar24,1);
  FUN_1005308f8(plVar23,plVar25,1);
  FUN_1005308f8(plVar23,plVar26,1);
  FUN_1005308f8(plVar23,plVar27,1);
  FUN_1005308f8(plVar23,plVar28,1);
  FUN_1005308f8(plVar23,plVar9,1);
  FUN_100642bd8(plVar9,plVar29,1);
  FUN_100642bd8(plVar9,param_1 + 0x38a7,1);
  FUN_100642bd8(plVar9,plVar30,1);
  FUN_100642bd8(plVar9,plVar31,1);
  FUN_100642bd8(plVar9,plVar32,1);
  FUN_100642bd8(plVar9,param_1 + 0x402f,1);
  FUN_100642bd8(plVar9,plVar33,1);
  FUN_100642bd8(plVar9,plVar34,1);
  FUN_100642bd8(plVar9,plVar8,1);
  FUN_100642bd8(plVar8,plVar35,1);
  FUN_100642bd8(plVar8,plVar36,1);
  FUN_100642bd8(plVar8,plVar37,1);
  FUN_100642bd8(plVar37,plVar7,1);
  FUN_100642bd8(plVar7,plVar6,1);
  FUN_100642bd8(plVar7,plVar38,1);
  FUN_100642bd8(plVar8,plVar39,1);
  FUN_100642bd8(plVar39,plVar5,1);
  FUN_100642bd8(plVar5,plVar4,1);
  FUN_100642bd8(plVar5,plVar40,1);
  FUN_100642bd8(plVar22,plVar3,1);
  FUN_100642bd8(plVar3,param_1 + 0x53ed,1);
  FUN_100642bd8(plVar3,plVar2,1);
  FUN_100642bd8(plVar2,plVar41,1);
  FUN_100642bd8(plVar2,plVar42,1);
  FUN_100642bd8(plVar2,plVar43,1);
  FUN_100642bd8(plVar22,param_1 + 0x53bf,1);
  FUN_100642bd8(plVar22,param_1 + 0x70,1);
  iVar47 = FUN_100126c88();
  FUN_100652cac(plVar21,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar21,&DAT_10115a164,2);
  uVar51 = *(uint *)((long)param_1 + 0x1b69c);
  if ((uVar51 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1b69c) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x2600;
    FUN_1000200a0(plVar21);
    uVar51 = *(uint *)((long)param_1 + 0x1b69c);
  }
  *(uint *)((long)param_1 + 0x1b69c) = uVar51 | 0x10;
  FUN_100651594(param_1 + 0x53ed,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e298,&DAT_10115a168);
  FUN_100530be0(plVar14,PTR_s_build___MenuPartsCommon_tga_101854970,
                PTR_s_scrollbar_button_fill_top_101854958,
                PTR_s_scrollbar_button_fill_middle_101854960,
                PTR_s_scrollbar_button_fill_bottom_101854968);
  FUN_100530adc(plVar14,0,1);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_NO_TEAM_BLURB",0);
  FUN_1006513c0(param_1 + 0x3346,uVar50);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_TEAM",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x446b0000,plVar15,0,uVar50,&DAT_10115a168,&DAT_101dc1cb8,0);
  uVar45 = DAT_101d91884;
  local_a0 = DAT_101d91884;
  local_c8 = thunk_FUN_10028a890;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x336d,&local_c8);
  FUN_1001b4964(plVar15,1);
  FUN_100652cac(plVar16,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar51 = *(uint *)((long)param_1 + 0x1b19c);
  if ((uVar51 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x1b19c) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x3300;
    FUN_1000200a0(plVar16);
  }
  FUN_100652cac(plVar17,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_team_outline");
  if ((*(uint *)((long)param_1 + 0x1b28c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x1b28c) = *(uint *)((long)param_1 + 0x1b28c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar17);
  }
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_INVITE_LIST_HEADER",0);
  FUN_1006513c0(plVar18,uVar50);
  ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar47 == 0) {
    ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  }
  FUN_100651038(plVar18,*ppuVar44);
  if ((*(uint *)((long)param_1 + 0x1b37c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x1b37c) = *(uint *)((long)param_1 + 0x1b37c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar18);
  }
  FUN_100652cac(plVar19,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar51 = *(uint *)((long)param_1 + 0x1b4ac);
  if ((uVar51 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1b4ac) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x2600;
    FUN_1000200a0(plVar19);
  }
  FUN_100652cac(plVar20,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar20,&DAT_10115a164,2);
  uVar51 = *(uint *)((long)param_1 + 0x1b59c);
  if ((uVar51 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1b59c) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x2600;
    FUN_1000200a0(plVar20);
  }
  if ((*(uint *)((long)param_1 + 0x1b8cc) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x1b8cc) = *(uint *)((long)param_1 + 0x1b8cc) & 0xffff807f;
    FUN_1000200a0(plVar1);
  }
  FUN_100530adc(plVar23,0,1);
  FUN_100652cac(plVar27,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar51 = *(uint *)((long)param_1 + 0x1c224);
  if ((uVar51 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1c224) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x2600;
    FUN_1000200a0(plVar27);
    uVar51 = *(uint *)((long)param_1 + 0x1c224);
  }
  *(uint *)((long)param_1 + 0x1c224) = uVar51 | 0x10;
  FUN_100652cac(plVar28,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar28,&DAT_10115a164,2);
  uVar51 = *(uint *)((long)param_1 + 0x1c314);
  if ((uVar51 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1c314) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x2600;
    FUN_1000200a0(plVar28);
    uVar51 = *(uint *)((long)param_1 + 0x1c314);
  }
  *(uint *)((long)param_1 + 0x1c314) = uVar51 | 0x10;
  FUN_100652cac(plVar24,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar51 = *(uint *)((long)param_1 + 0x1bf14);
  if ((uVar51 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x1bf14) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x3300;
    FUN_1000200a0(plVar24);
    uVar51 = *(uint *)((long)param_1 + 0x1bf14);
  }
  *(uint *)((long)param_1 + 0x1bf14) = uVar51 | 0x10;
  FUN_100652cac(plVar25,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_team_outline");
  uVar51 = *(uint *)((long)param_1 + 0x1c004);
  if ((uVar51 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x1c004) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x6c00;
    FUN_1000200a0(plVar25);
  }
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_TEAM_HEADER",0);
  FUN_1006513c0(plVar26,uVar50);
  ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar47 == 0) {
    ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  }
  FUN_100651038(plVar26,*ppuVar44);
  uVar51 = *(uint *)((long)param_1 + 0x1c0f4);
  if ((uVar51 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x1c0f4) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x6c00;
    FUN_1000200a0(plVar26);
  }
  ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar47 == 0) {
    ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651594(plVar29,*ppuVar44,&DAT_10115a168);
  uVar51 = *(uint *)((long)param_1 + 0x1c48c);
  if ((uVar51 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x1c48c) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0xc80;
    FUN_1000200a0(plVar29);
  }
  FUN_1004e3120(&local_c8,"1");
  FUN_1006513c0(plVar29,&local_c8);
  if (local_c0 != (long *)0x0) {
    operator_delete__(local_c0);
  }
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_NAME_FIELD_BLURB",0);
  FUN_1006513c0(param_1 + 0x38a7,uVar50);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_NAME_FIELD",0);
  FUN_100185730(plVar30,uVar50);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_NAME_CAPTION",0);
  FUN_1001afd98(plVar30,uVar50,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar30,1);
  FUN_100185e38(plVar30,1,3);
  FUN_100185e48(plVar30,1,0x10);
  FUN_100185e70(plVar30,1);
  uVar46 = DAT_101dbd4ac;
  local_a0 = DAT_101dbd4ac;
  local_c8 = thunk_FUN_10028a9cc;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x38ce,&local_c8);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_NAME_CONFIRM_FIELD",0);
  FUN_100185730(plVar31,uVar50);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_NAME_CONFIRM_CAPTION",0);
  FUN_1001afd98(plVar31,uVar50,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar31,1);
  FUN_100185e38(plVar31,1,3);
  FUN_100185e48(plVar31,1,0x10);
  FUN_100185e70(plVar31,1);
  local_a0 = uVar46;
  local_c8 = thunk_FUN_10028a9cc;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x3c6c,&local_c8);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_TAG_FIELD_BLURB",0);
  FUN_1006513c0(param_1 + 0x402f,uVar50);
  ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar47 == 0) {
    ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651594(plVar32,*ppuVar44,&DAT_10115a168);
  uVar51 = *(uint *)((long)param_1 + 0x200cc);
  if ((uVar51 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x200cc) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0xc80;
    FUN_1000200a0(plVar32);
  }
  FUN_1004e3120(&local_c8,"2");
  FUN_1006513c0(plVar32,&local_c8);
  if (local_c0 != (long *)0x0) {
    operator_delete__(local_c0);
  }
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_TAG_FIELD",0);
  FUN_100185730(plVar33,uVar50);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_TAG_CAPTION",0);
  FUN_1001afd98(plVar33,uVar50,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar33,1);
  FUN_100185e38(plVar33,1,2);
  FUN_100185e48(plVar33,1,4);
  FUN_100185e70(plVar33,1);
  local_a0 = uVar46;
  local_c8 = thunk_FUN_10028aa38;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x4056,&local_c8);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_TAG_CONFIRM_FIELD",0);
  FUN_100185730(plVar34,uVar50);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_TAG_CONFIRM_CAPTION",0);
  FUN_1001afd98(plVar34,uVar50,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar34,1);
  FUN_100185e38(plVar34,1,2);
  FUN_100185e48(plVar34,1,4);
  FUN_100185e70(plVar34,1);
  local_a0 = uVar46;
  local_c8 = thunk_FUN_10028aa38;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x43f4,&local_c8);
  uVar50 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x438c0000,plVar35,0,uVar50,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_a0 = uVar45;
  local_c8 = thunk_FUN_10028aaa4;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x47a3,&local_c8);
  FUN_1001b4964(plVar35,1);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_TEAM",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x446b0000,plVar36,0,uVar50,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_a0 = uVar45;
  local_c8 = FUN_100286b4c;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x4a5a,&local_c8);
  FUN_1001b4c0c(plVar36,0);
  FUN_1001b4964(plVar36,1);
  uVar50 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TEAM",0);
  FUN_1001816d4(0x42480000,0x43480000,0x449c4000,plVar37,0,uVar50,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_a0 = uVar45;
  local_c8 = FUN_100286b4c;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 1;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x4d11,&local_c8);
  ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar47 == 0) {
    ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  FUN_100651038(param_1 + 0x4df3,*ppuVar44);
  FUN_1001b495c(0x3f000000,plVar37);
  if ((*(float *)(param_1 + 0x4d1a) != 0.5) || (*(float *)((long)param_1 + 0x268d4) != 0.5)) {
    param_1[0x4d1a] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar37);
  }
  FUN_100181b5c(0,0x41f00000,plVar37);
  FUN_100181c68(0x43133333,plVar37);
  FUN_1001b4964(plVar37,1);
  FUN_1001b4c0c(plVar37,0);
  FUN_100652cac(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"glory_icon_small");
  if ((*(float *)(param_1 + 0x500c) != 0.0) || (*(float *)((long)param_1 + 0x28064) != 3.0)) {
    param_1[0x500c] = 0x4040000000000000;
    FUN_1000200a0(plVar6);
  }
  local_c8 = (code *)0x3f00000000000000;
  (**(code **)(*plVar6 + 0x28))(plVar6,&local_c8);
  if ((*(float *)(param_1 + 0x500d) != 0.9) || (*(float *)((long)param_1 + 0x2806c) != 0.9)) {
    param_1[0x500d] = 0x3f6666663f666666;
    FUN_1000200a0(plVar6);
  }
  ppuVar44 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (iVar47 == 0) {
    ppuVar44 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
  }
  FUN_100651038(plVar38,*ppuVar44);
  fVar52 = (float)FUN_100652e60(plVar6);
  fVar53 = *(float *)((long)param_1 + 0x28064) + -3.0;
  if ((*(float *)(param_1 + 0x4fe6) != fVar52) || (*(float *)((long)param_1 + 0x27f34) != fVar53)) {
    *(float *)(param_1 + 0x4fe6) = fVar52;
    *(float *)((long)param_1 + 0x27f34) = fVar53;
    FUN_1000200a0(plVar38);
  }
  local_c8 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0x4fde] + 0x28))(plVar38,&local_c8);
  fVar52 = (float)FUN_1006425d0(plVar7,0,0,1,1);
  FUN_1006425d0(plVar7,0,0,1,1);
  fVar53 = fVar53 * -0.5 + 10.0;
  if ((*(float *)(param_1 + 0x4fcf) != fVar52 * -0.5) ||
     (*(float *)((long)param_1 + 0x27e7c) != fVar53)) {
    *(float *)(param_1 + 0x4fcf) = fVar52 * -0.5;
    *(float *)((long)param_1 + 0x27e7c) = fVar53;
    FUN_1000200a0(plVar7);
  }
  local_c8 = (code *)0x0;
  (**(code **)(*plVar7 + 0x28))(plVar7,&local_c8);
  uVar50 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TEAM",0);
  FUN_1001816d4(0x42480000,0x43480000,0x449c4000,plVar39,0,uVar50,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_a0 = uVar45;
  local_c8 = FUN_100286b4c;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x5023,&local_c8);
  ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar47 == 0) {
    ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  FUN_100651038(param_1 + 0x5105,*ppuVar44);
  FUN_1001b495c(0x3f000000,plVar39);
  if ((*(float *)(param_1 + 0x502c) != 0.5) || (*(float *)((long)param_1 + 0x28164) != 0.5)) {
    param_1[0x502c] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar39);
  }
  FUN_100181b5c(0,0x41f00000,plVar39);
  FUN_100181c68(0x43133333,plVar39);
  FUN_1001b4964(plVar39,1);
  FUN_1001b4c0c(plVar39,0);
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"ice_icon_small");
  if ((*(float *)(param_1 + 0x531e) != 0.0) || (*(float *)((long)param_1 + 0x298f4) != 3.0)) {
    param_1[0x531e] = 0x4040000000000000;
    FUN_1000200a0(plVar4);
  }
  local_c8 = (code *)0x3f00000000000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_c8);
  if ((*(float *)(param_1 + 0x531f) != 0.9) || (*(float *)((long)param_1 + 0x298fc) != 0.9)) {
    param_1[0x531f] = 0x3f6666663f666666;
    FUN_1000200a0(plVar4);
  }
  ppuVar44 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (iVar47 == 0) {
    ppuVar44 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
  }
  FUN_100651038(plVar40,*ppuVar44);
  fVar52 = (float)FUN_100652e60(plVar4);
  fVar53 = *(float *)((long)param_1 + 0x298f4) + -3.0;
  if ((*(float *)(param_1 + 0x52f8) != fVar52) || (*(float *)((long)param_1 + 0x297c4) != fVar53)) {
    *(float *)(param_1 + 0x52f8) = fVar52;
    *(float *)((long)param_1 + 0x297c4) = fVar53;
    FUN_1000200a0(plVar40);
  }
  local_c8 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0x52f0] + 0x28))(plVar40,&local_c8);
  fVar52 = (float)FUN_1006425d0(plVar5,0,0,1,1);
  FUN_1006425d0(plVar5,0,0,1,1);
  fVar53 = fVar53 * -0.5 + 10.0;
  if ((*(float *)(param_1 + 0x52e1) != fVar52 * -0.5) ||
     (*(float *)((long)param_1 + 0x2970c) != fVar53)) {
    *(float *)(param_1 + 0x52e1) = fVar52 * -0.5;
    *(float *)((long)param_1 + 0x2970c) = fVar53;
    FUN_1000200a0(plVar5);
  }
  local_c8 = (code *)0x0;
  (**(code **)(*plVar5 + 0x28))(plVar5,&local_c8);
  *(uint *)((long)param_1 + 0x29f64) = *(uint *)((long)param_1 + 0x29f64) & 0xfffffffb;
  FUN_100652cac(plVar41,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar51 = *(uint *)((long)param_1 + 0x2ada4);
  if ((uVar51 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x2ada4) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x2600;
    FUN_1000200a0(plVar41);
  }
  FUN_100652cac(plVar42,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar42,&DAT_10115a164,2);
  uVar51 = *(uint *)((long)param_1 + 0x2ae94);
  if ((uVar51 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x2ae94) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x2600;
    FUN_1000200a0(plVar42);
  }
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_JOIN_DATE",0);
  FUN_1006513c0(plVar43,uVar50);
  ppuVar44 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar47 == 0) {
    ppuVar44 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(plVar43,*ppuVar44);
  if ((*(uint *)((long)param_1 + 0x2af84) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x2af84) = *(uint *)((long)param_1 + 0x2af84) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar43);
  }
  local_a0 = DAT_101dbd460;
  local_c8 = thunk_FUN_10028ae74;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x5346,&local_c8);
  local_a0 = DAT_101dbd48c;
  local_c8 = thunk_FUN_10028ae74;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x5346,&local_c8);
  local_a0 = FUN_100644a94("LeavingUserTeam");
  local_c8 = thunk_FUN_10028b25c;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x71,&local_c8);
  *(uint *)((long)param_1 + 0x404) = *(uint *)((long)param_1 + 0x404) & 0xfffffffb;
  FUN_100265da0(param_1 + 0x70,0);
  FUN_100286b5c(param_1);
  *(uint *)((long)param_1 + 0x1b8cc) = *(uint *)((long)param_1 + 0x1b8cc) & 0xfffffffb;
  FUN_100286c7c(0,param_1,1,0);
  FUN_1004e18bc(&DAT_101d234d8,param_1,0x9d2c9b16,FUN_100286e08,0);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 8;
  return param_1;
}



/*
 * thunk_FUN_1002850d0
 * VA: 0xthunk_1002850d0 | Source: functions/10028.c:4988
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 19, Vis masks: 3
 * Callees: FUN_10001554c, FUN_1000200a0, FUN_10003330c, FUN_100126c88, FUN_10014f4a0, FUN_1001816d4, FUN_100181b5c, FUN_100181c68 (+51 more)
 * Callers: FUN_1002201c4, FUN_100266a50, thunk_FUN_100266a50
 */
long * thunk_FUN_1002850d0(long *param_1)

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
  long *plVar38;
  long *plVar39;
  long *plVar40;
  long *plVar41;
  long *plVar42;
  long *plVar43;
  undefined **ppuVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  int iVar47;
  long lVar48;
  undefined8 *puVar49;
  undefined8 uVar50;
  uint uVar51;
  float fVar52;
  float fVar53;
  code *pcStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  
  plVar2 = param_1 + 0x5593;
  plVar3 = param_1 + 0x53dc;
  plVar4 = param_1 + 0x5316;
  plVar5 = param_1 + 0x52d9;
  plVar6 = param_1 + 0x5004;
  plVar7 = param_1 + 0x4fc7;
  plVar8 = param_1 + 0x4791;
  plVar9 = param_1 + 0x3870;
  plVar10 = param_1 + 0x371a;
  plVar11 = param_1 + 0x36f8;
  plVar12 = param_1 + 0x328e;
  plVar13 = param_1 + 0x326c;
  lVar48 = FUN_10026d1f4();
  FUN_10014f4a0(lVar48 + 0x368);
  *param_1 = (long)&PTR_thunk_FUN_100286e10_10147ea60;
  param_1[0x6d] = (long)&PTR_FUN_10147ec28;
  thunk_FUN_100264e14();
  FUN_10064e264();
  FUN_1006421a8(plVar13);
  *plVar13 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8();
  param_1[0x327d] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8(plVar12);
  *plVar12 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar14 = param_1 + 0x329f;
  FUN_10053077c(plVar14,0);
  thunk_FUN_100650e64();
  plVar15 = param_1 + 0x336c;
  thunk_FUN_100181304(plVar15,0);
  plVar16 = param_1 + 0x3623;
  thunk_FUN_100652c08();
  plVar17 = param_1 + 0x3641;
  thunk_FUN_100652c08();
  plVar18 = param_1 + 0x365f;
  thunk_FUN_100650e64();
  plVar19 = param_1 + 0x3685;
  thunk_FUN_100652c08();
  plVar20 = param_1 + 0x36a3;
  thunk_FUN_100652c08();
  param_1[0x36c2] = 0;
  param_1[0x36c1] = 0;
  plVar21 = param_1 + 0x36c3;
  thunk_FUN_100652c08();
  plVar22 = param_1 + 0x36e1;
  FUN_10064e264();
  FUN_1006421a8(plVar11);
  *plVar11 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x3709;
  FUN_1006421a8();
  param_1[0x3709] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8(plVar10);
  *plVar10 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar23 = param_1 + 0x372b;
  FUN_10053077c(plVar23,0);
  plVar24 = param_1 + 0x37d2;
  thunk_FUN_100652c08();
  plVar25 = param_1 + 0x37f0;
  thunk_FUN_100652c08();
  plVar26 = param_1 + 0x380e;
  thunk_FUN_100650e64();
  plVar27 = param_1 + 0x3834;
  thunk_FUN_100652c08();
  plVar28 = param_1 + 0x3852;
  thunk_FUN_100652c08();
  FUN_1006421a8(plVar9);
  *plVar9 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar29 = param_1 + 0x3881;
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar30 = param_1 + 0x38cd;
  thunk_FUN_100184f78();
  plVar31 = param_1 + 0x3c6b;
  thunk_FUN_100184f78();
  plVar32 = param_1 + 0x4009;
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar33 = param_1 + 0x4055;
  thunk_FUN_100184f78();
  plVar34 = param_1 + 0x43f3;
  thunk_FUN_100184f78();
  FUN_1006421a8(plVar8);
  *plVar8 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar35 = param_1 + 0x47a2;
  thunk_FUN_100181304(plVar35,0);
  plVar36 = param_1 + 0x4a59;
  thunk_FUN_100181304(plVar36,0);
  plVar37 = param_1 + 0x4d10;
  thunk_FUN_100181304(plVar37,0);
  FUN_10064e264(plVar7);
  plVar38 = param_1 + 0x4fde;
  thunk_FUN_100650e64();
  thunk_FUN_100652c08(plVar6);
  plVar39 = param_1 + 0x5022;
  thunk_FUN_100181304(plVar39,0);
  FUN_10064e264(plVar5);
  plVar40 = param_1 + 0x52f0;
  thunk_FUN_100650e64();
  thunk_FUN_100652c08(plVar4);
  thunk_FUN_1001c0018(param_1 + 0x5334,0);
  thunk_FUN_1001ceb64(param_1 + 0x53bf,0);
  puVar49 = (undefined8 *)FUN_1006421a8(plVar3);
  *puVar49 = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100650e64();
  thunk_FUN_1001d0644(param_1 + 0x5413,0);
  puVar49 = (undefined8 *)FUN_1006421a8(plVar2);
  *puVar49 = &PTR_thunk_FUN_10064221c_10144b7e8;
  plVar41 = param_1 + 0x55a4;
  thunk_FUN_100652c08();
  plVar42 = param_1 + 0x55c2;
  thunk_FUN_100652c08();
  plVar43 = param_1 + 0x55e0;
  thunk_FUN_100650e64();
  param_1[0x5607] = 0;
  param_1[0x5606] = 0;
  FUN_10003330c(param_1 + 0x5608,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x560b,&DAT_101d91198);
  *(undefined8 *)((long)param_1 + 0x2b076) = 0;
  param_1[0x560e] = 0;
  FUN_1006423ec(param_1 + 0x30,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar21,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar22,1);
  FUN_100642bd8(plVar22,plVar13,1);
  FUN_100642bd8(plVar13,param_1 + 0x327d,1);
  FUN_100642bd8(param_1 + 0x327d,param_1 + 0x3255,1);
  FUN_100642bd8(param_1 + 0x3255,plVar14,1);
  FUN_100642bd8(plVar14,plVar12,1);
  FUN_100642bd8(plVar12,param_1 + 0x3346,1);
  FUN_100642bd8(plVar12,plVar15,1);
  FUN_1005308f8(plVar14,plVar16,1);
  FUN_1005308f8(plVar14,plVar17,1);
  FUN_1005308f8(plVar14,plVar18,1);
  FUN_1005308f8(plVar14,plVar19,1);
  FUN_1005308f8(plVar14,plVar20,1);
  FUN_100642bd8(plVar22,plVar11,1);
  FUN_100642bd8(plVar11,plVar1,1);
  FUN_100642bd8(plVar1,plVar10,1);
  FUN_100642bd8(plVar10,plVar23,1);
  FUN_1005308f8(plVar23,plVar24,1);
  FUN_1005308f8(plVar23,plVar25,1);
  FUN_1005308f8(plVar23,plVar26,1);
  FUN_1005308f8(plVar23,plVar27,1);
  FUN_1005308f8(plVar23,plVar28,1);
  FUN_1005308f8(plVar23,plVar9,1);
  FUN_100642bd8(plVar9,plVar29,1);
  FUN_100642bd8(plVar9,param_1 + 0x38a7,1);
  FUN_100642bd8(plVar9,plVar30,1);
  FUN_100642bd8(plVar9,plVar31,1);
  FUN_100642bd8(plVar9,plVar32,1);
  FUN_100642bd8(plVar9,param_1 + 0x402f,1);
  FUN_100642bd8(plVar9,plVar33,1);
  FUN_100642bd8(plVar9,plVar34,1);
  FUN_100642bd8(plVar9,plVar8,1);
  FUN_100642bd8(plVar8,plVar35,1);
  FUN_100642bd8(plVar8,plVar36,1);
  FUN_100642bd8(plVar8,plVar37,1);
  FUN_100642bd8(plVar37,plVar7,1);
  FUN_100642bd8(plVar7,plVar6,1);
  FUN_100642bd8(plVar7,plVar38,1);
  FUN_100642bd8(plVar8,plVar39,1);
  FUN_100642bd8(plVar39,plVar5,1);
  FUN_100642bd8(plVar5,plVar4,1);
  FUN_100642bd8(plVar5,plVar40,1);
  FUN_100642bd8(plVar22,plVar3,1);
  FUN_100642bd8(plVar3,param_1 + 0x53ed,1);
  FUN_100642bd8(plVar3,plVar2,1);
  FUN_100642bd8(plVar2,plVar41,1);
  FUN_100642bd8(plVar2,plVar42,1);
  FUN_100642bd8(plVar2,plVar43,1);
  FUN_100642bd8(plVar22,param_1 + 0x53bf,1);
  FUN_100642bd8(plVar22,param_1 + 0x70,1);
  iVar47 = FUN_100126c88();
  FUN_100652cac(plVar21,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar21,&DAT_10115a164,2);
  uVar51 = *(uint *)((long)param_1 + 0x1b69c);
  if ((uVar51 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1b69c) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x2600;
    FUN_1000200a0(plVar21);
    uVar51 = *(uint *)((long)param_1 + 0x1b69c);
  }
  *(uint *)((long)param_1 + 0x1b69c) = uVar51 | 0x10;
  FUN_100651594(param_1 + 0x53ed,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e298,&DAT_10115a168);
  FUN_100530be0(plVar14,PTR_s_build___MenuPartsCommon_tga_101854970,
                PTR_s_scrollbar_button_fill_top_101854958,
                PTR_s_scrollbar_button_fill_middle_101854960,
                PTR_s_scrollbar_button_fill_bottom_101854968);
  FUN_100530adc(plVar14,0,1);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_NO_TEAM_BLURB",0);
  FUN_1006513c0(param_1 + 0x3346,uVar50);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_TEAM",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x446b0000,plVar15,0,uVar50,&DAT_10115a168,&DAT_101dc1cb8,0);
  uVar45 = DAT_101d91884;
  uStack_a0 = DAT_101d91884;
  pcStack_c8 = thunk_FUN_10028a890;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x336d,&pcStack_c8);
  FUN_1001b4964(plVar15,1);
  FUN_100652cac(plVar16,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar51 = *(uint *)((long)param_1 + 0x1b19c);
  if ((uVar51 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x1b19c) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x3300;
    FUN_1000200a0(plVar16);
  }
  FUN_100652cac(plVar17,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_team_outline");
  if ((*(uint *)((long)param_1 + 0x1b28c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x1b28c) = *(uint *)((long)param_1 + 0x1b28c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar17);
  }
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_INVITE_LIST_HEADER",0);
  FUN_1006513c0(plVar18,uVar50);
  ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar47 == 0) {
    ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  }
  FUN_100651038(plVar18,*ppuVar44);
  if ((*(uint *)((long)param_1 + 0x1b37c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x1b37c) = *(uint *)((long)param_1 + 0x1b37c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar18);
  }
  FUN_100652cac(plVar19,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar51 = *(uint *)((long)param_1 + 0x1b4ac);
  if ((uVar51 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1b4ac) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x2600;
    FUN_1000200a0(plVar19);
  }
  FUN_100652cac(plVar20,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar20,&DAT_10115a164,2);
  uVar51 = *(uint *)((long)param_1 + 0x1b59c);
  if ((uVar51 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1b59c) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x2600;
    FUN_1000200a0(plVar20);
  }
  if ((*(uint *)((long)param_1 + 0x1b8cc) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x1b8cc) = *(uint *)((long)param_1 + 0x1b8cc) & 0xffff807f;
    FUN_1000200a0(plVar1);
  }
  FUN_100530adc(plVar23,0,1);
  FUN_100652cac(plVar27,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar51 = *(uint *)((long)param_1 + 0x1c224);
  if ((uVar51 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1c224) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x2600;
    FUN_1000200a0(plVar27);
    uVar51 = *(uint *)((long)param_1 + 0x1c224);
  }
  *(uint *)((long)param_1 + 0x1c224) = uVar51 | 0x10;
  FUN_100652cac(plVar28,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar28,&DAT_10115a164,2);
  uVar51 = *(uint *)((long)param_1 + 0x1c314);
  if ((uVar51 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1c314) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x2600;
    FUN_1000200a0(plVar28);
    uVar51 = *(uint *)((long)param_1 + 0x1c314);
  }
  *(uint *)((long)param_1 + 0x1c314) = uVar51 | 0x10;
  FUN_100652cac(plVar24,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar51 = *(uint *)((long)param_1 + 0x1bf14);
  if ((uVar51 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x1bf14) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x3300;
    FUN_1000200a0(plVar24);
    uVar51 = *(uint *)((long)param_1 + 0x1bf14);
  }
  *(uint *)((long)param_1 + 0x1bf14) = uVar51 | 0x10;
  FUN_100652cac(plVar25,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_team_outline");
  uVar51 = *(uint *)((long)param_1 + 0x1c004);
  if ((uVar51 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x1c004) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x6c00;
    FUN_1000200a0(plVar25);
  }
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_TEAM_HEADER",0);
  FUN_1006513c0(plVar26,uVar50);
  ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar47 == 0) {
    ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  }
  FUN_100651038(plVar26,*ppuVar44);
  uVar51 = *(uint *)((long)param_1 + 0x1c0f4);
  if ((uVar51 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x1c0f4) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x6c00;
    FUN_1000200a0(plVar26);
  }
  ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar47 == 0) {
    ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651594(plVar29,*ppuVar44,&DAT_10115a168);
  uVar51 = *(uint *)((long)param_1 + 0x1c48c);
  if ((uVar51 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x1c48c) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0xc80;
    FUN_1000200a0(plVar29);
  }
  FUN_1004e3120(&pcStack_c8,"1");
  FUN_1006513c0(plVar29,&pcStack_c8);
  if (plStack_c0 != (long *)0x0) {
    operator_delete__(plStack_c0);
  }
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_NAME_FIELD_BLURB",0);
  FUN_1006513c0(param_1 + 0x38a7,uVar50);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_NAME_FIELD",0);
  FUN_100185730(plVar30,uVar50);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_NAME_CAPTION",0);
  FUN_1001afd98(plVar30,uVar50,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar30,1);
  FUN_100185e38(plVar30,1,3);
  FUN_100185e48(plVar30,1,0x10);
  FUN_100185e70(plVar30,1);
  uVar46 = DAT_101dbd4ac;
  uStack_a0 = DAT_101dbd4ac;
  pcStack_c8 = thunk_FUN_10028a9cc;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x38ce,&pcStack_c8);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_NAME_CONFIRM_FIELD",0);
  FUN_100185730(plVar31,uVar50);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_NAME_CONFIRM_CAPTION",0);
  FUN_1001afd98(plVar31,uVar50,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar31,1);
  FUN_100185e38(plVar31,1,3);
  FUN_100185e48(plVar31,1,0x10);
  FUN_100185e70(plVar31,1);
  uStack_a0 = uVar46;
  pcStack_c8 = thunk_FUN_10028a9cc;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x3c6c,&pcStack_c8);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_TAG_FIELD_BLURB",0);
  FUN_1006513c0(param_1 + 0x402f,uVar50);
  ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar47 == 0) {
    ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651594(plVar32,*ppuVar44,&DAT_10115a168);
  uVar51 = *(uint *)((long)param_1 + 0x200cc);
  if ((uVar51 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x200cc) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0xc80;
    FUN_1000200a0(plVar32);
  }
  FUN_1004e3120(&pcStack_c8,"2");
  FUN_1006513c0(plVar32,&pcStack_c8);
  if (plStack_c0 != (long *)0x0) {
    operator_delete__(plStack_c0);
  }
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_TAG_FIELD",0);
  FUN_100185730(plVar33,uVar50);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_TAG_CAPTION",0);
  FUN_1001afd98(plVar33,uVar50,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar33,1);
  FUN_100185e38(plVar33,1,2);
  FUN_100185e48(plVar33,1,4);
  FUN_100185e70(plVar33,1);
  uStack_a0 = uVar46;
  pcStack_c8 = thunk_FUN_10028aa38;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x4056,&pcStack_c8);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_TAG_CONFIRM_FIELD",0);
  FUN_100185730(plVar34,uVar50);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_TAG_CONFIRM_CAPTION",0);
  FUN_1001afd98(plVar34,uVar50,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar34,1);
  FUN_100185e38(plVar34,1,2);
  FUN_100185e48(plVar34,1,4);
  FUN_100185e70(plVar34,1);
  uStack_a0 = uVar46;
  pcStack_c8 = thunk_FUN_10028aa38;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x43f4,&pcStack_c8);
  uVar50 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x438c0000,plVar35,0,uVar50,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_a0 = uVar45;
  pcStack_c8 = thunk_FUN_10028aaa4;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x47a3,&pcStack_c8);
  FUN_1001b4964(plVar35,1);
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CREATE_TEAM",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x446b0000,plVar36,0,uVar50,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_a0 = uVar45;
  pcStack_c8 = FUN_100286b4c;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x4a5a,&pcStack_c8);
  FUN_1001b4c0c(plVar36,0);
  FUN_1001b4964(plVar36,1);
  uVar50 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TEAM",0);
  FUN_1001816d4(0x42480000,0x43480000,0x449c4000,plVar37,0,uVar50,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_a0 = uVar45;
  pcStack_c8 = FUN_100286b4c;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 1;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x4d11,&pcStack_c8);
  ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar47 == 0) {
    ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  FUN_100651038(param_1 + 0x4df3,*ppuVar44);
  FUN_1001b495c(0x3f000000,plVar37);
  if ((*(float *)(param_1 + 0x4d1a) != 0.5) || (*(float *)((long)param_1 + 0x268d4) != 0.5)) {
    param_1[0x4d1a] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar37);
  }
  FUN_100181b5c(0,0x41f00000,plVar37);
  FUN_100181c68(0x43133333,plVar37);
  FUN_1001b4964(plVar37,1);
  FUN_1001b4c0c(plVar37,0);
  FUN_100652cac(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"glory_icon_small");
  if ((*(float *)(param_1 + 0x500c) != 0.0) || (*(float *)((long)param_1 + 0x28064) != 3.0)) {
    param_1[0x500c] = 0x4040000000000000;
    FUN_1000200a0(plVar6);
  }
  pcStack_c8 = (code *)0x3f00000000000000;
  (**(code **)(*plVar6 + 0x28))(plVar6,&pcStack_c8);
  if ((*(float *)(param_1 + 0x500d) != 0.9) || (*(float *)((long)param_1 + 0x2806c) != 0.9)) {
    param_1[0x500d] = 0x3f6666663f666666;
    FUN_1000200a0(plVar6);
  }
  ppuVar44 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (iVar47 == 0) {
    ppuVar44 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
  }
  FUN_100651038(plVar38,*ppuVar44);
  fVar52 = (float)FUN_100652e60(plVar6);
  fVar53 = *(float *)((long)param_1 + 0x28064) + -3.0;
  if ((*(float *)(param_1 + 0x4fe6) != fVar52) || (*(float *)((long)param_1 + 0x27f34) != fVar53)) {
    *(float *)(param_1 + 0x4fe6) = fVar52;
    *(float *)((long)param_1 + 0x27f34) = fVar53;
    FUN_1000200a0(plVar38);
  }
  pcStack_c8 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0x4fde] + 0x28))(plVar38,&pcStack_c8);
  fVar52 = (float)FUN_1006425d0(plVar7,0,0,1,1);
  FUN_1006425d0(plVar7,0,0,1,1);
  fVar53 = fVar53 * -0.5 + 10.0;
  if ((*(float *)(param_1 + 0x4fcf) != fVar52 * -0.5) ||
     (*(float *)((long)param_1 + 0x27e7c) != fVar53)) {
    *(float *)(param_1 + 0x4fcf) = fVar52 * -0.5;
    *(float *)((long)param_1 + 0x27e7c) = fVar53;
    FUN_1000200a0(plVar7);
  }
  pcStack_c8 = (code *)0x0;
  (**(code **)(*plVar7 + 0x28))(plVar7,&pcStack_c8);
  uVar50 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TEAM",0);
  FUN_1001816d4(0x42480000,0x43480000,0x449c4000,plVar39,0,uVar50,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_a0 = uVar45;
  pcStack_c8 = FUN_100286b4c;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x5023,&pcStack_c8);
  ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar47 == 0) {
    ppuVar44 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  FUN_100651038(param_1 + 0x5105,*ppuVar44);
  FUN_1001b495c(0x3f000000,plVar39);
  if ((*(float *)(param_1 + 0x502c) != 0.5) || (*(float *)((long)param_1 + 0x28164) != 0.5)) {
    param_1[0x502c] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar39);
  }
  FUN_100181b5c(0,0x41f00000,plVar39);
  FUN_100181c68(0x43133333,plVar39);
  FUN_1001b4964(plVar39,1);
  FUN_1001b4c0c(plVar39,0);
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"ice_icon_small");
  if ((*(float *)(param_1 + 0x531e) != 0.0) || (*(float *)((long)param_1 + 0x298f4) != 3.0)) {
    param_1[0x531e] = 0x4040000000000000;
    FUN_1000200a0(plVar4);
  }
  pcStack_c8 = (code *)0x3f00000000000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&pcStack_c8);
  if ((*(float *)(param_1 + 0x531f) != 0.9) || (*(float *)((long)param_1 + 0x298fc) != 0.9)) {
    param_1[0x531f] = 0x3f6666663f666666;
    FUN_1000200a0(plVar4);
  }
  ppuVar44 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (iVar47 == 0) {
    ppuVar44 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
  }
  FUN_100651038(plVar40,*ppuVar44);
  fVar52 = (float)FUN_100652e60(plVar4);
  fVar53 = *(float *)((long)param_1 + 0x298f4) + -3.0;
  if ((*(float *)(param_1 + 0x52f8) != fVar52) || (*(float *)((long)param_1 + 0x297c4) != fVar53)) {
    *(float *)(param_1 + 0x52f8) = fVar52;
    *(float *)((long)param_1 + 0x297c4) = fVar53;
    FUN_1000200a0(plVar40);
  }
  pcStack_c8 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0x52f0] + 0x28))(plVar40,&pcStack_c8);
  fVar52 = (float)FUN_1006425d0(plVar5,0,0,1,1);
  FUN_1006425d0(plVar5,0,0,1,1);
  fVar53 = fVar53 * -0.5 + 10.0;
  if ((*(float *)(param_1 + 0x52e1) != fVar52 * -0.5) ||
     (*(float *)((long)param_1 + 0x2970c) != fVar53)) {
    *(float *)(param_1 + 0x52e1) = fVar52 * -0.5;
    *(float *)((long)param_1 + 0x2970c) = fVar53;
    FUN_1000200a0(plVar5);
  }
  pcStack_c8 = (code *)0x0;
  (**(code **)(*plVar5 + 0x28))(plVar5,&pcStack_c8);
  *(uint *)((long)param_1 + 0x29f64) = *(uint *)((long)param_1 + 0x29f64) & 0xfffffffb;
  FUN_100652cac(plVar41,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar51 = *(uint *)((long)param_1 + 0x2ada4);
  if ((uVar51 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x2ada4) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x2600;
    FUN_1000200a0(plVar41);
  }
  FUN_100652cac(plVar42,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar42,&DAT_10115a164,2);
  uVar51 = *(uint *)((long)param_1 + 0x2ae94);
  if ((uVar51 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x2ae94) = uVar51 & 0xffff8000 | uVar51 & 0x7f | 0x2600;
    FUN_1000200a0(plVar42);
  }
  uVar50 = FUN_1004e0150("MENU_PROFILE_USERTEAM_JOIN_DATE",0);
  FUN_1006513c0(plVar43,uVar50);
  ppuVar44 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar47 == 0) {
    ppuVar44 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(plVar43,*ppuVar44);
  if ((*(uint *)((long)param_1 + 0x2af84) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x2af84) = *(uint *)((long)param_1 + 0x2af84) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar43);
  }
  uStack_a0 = DAT_101dbd460;
  pcStack_c8 = thunk_FUN_10028ae74;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x5346,&pcStack_c8);
  uStack_a0 = DAT_101dbd48c;
  pcStack_c8 = thunk_FUN_10028ae74;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x5346,&pcStack_c8);
  uStack_a0 = FUN_100644a94("LeavingUserTeam");
  pcStack_c8 = thunk_FUN_10028b25c;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x71,&pcStack_c8);
  *(uint *)((long)param_1 + 0x404) = *(uint *)((long)param_1 + 0x404) & 0xfffffffb;
  FUN_100265da0(param_1 + 0x70,0);
  FUN_100286b5c(param_1);
  *(uint *)((long)param_1 + 0x1b8cc) = *(uint *)((long)param_1 + 0x1b8cc) & 0xfffffffb;
  FUN_100286c7c(0,param_1,1,0);
  FUN_1004e18bc(&DAT_101d234d8,param_1,0x9d2c9b16,FUN_100286e08,0);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 8;
  return param_1;
}



/*
 * FUN_10028f5d0
 * VA: 0x10028f5d0 | Source: functions/10028.c:12114
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 5, Vis masks: 2
 * Callees: FUN_10001554c, FUN_1000200a0, FUN_1001816d4, FUN_100181be0, FUN_100181c68, FUN_1001afc3c, FUN_1001afd98, FUN_1001b0198 (+26 more)
 */
long * FUN_10028f5d0(long *param_1)

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
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  void *pvVar16;
  long lVar17;
  uint uVar18;
  code *local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar13 = (undefined8 *)FUN_10064e20c();
  puVar13[0x17] = 0;
  puVar14 = puVar13 + 0x18;
  *puVar13 = &PTR_thunk_FUN_10028fccc_10147f6f0;
  FUN_1006505b8();
  plVar1 = param_1 + 0x33;
  FUN_1006505b8(plVar1);
  plVar2 = param_1 + 0x4e;
  FUN_1006421a8(plVar2);
  param_1[0x4e] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar3 = param_1 + 0x5f;
  thunk_FUN_1006543ec(plVar3);
  plVar4 = param_1 + 0x93;
  thunk_FUN_1005357f4(plVar4);
  plVar5 = param_1 + 0x1d8;
  FUN_100290884();
  plVar6 = param_1 + 0x50f;
  thunk_FUN_100181304(plVar6,0);
  plVar7 = param_1 + 0x7c6;
  FUN_1006421a8(plVar7);
  param_1[0x7c6] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar8 = param_1 + 0x7d7;
  thunk_FUN_100650e64(plVar8);
  plVar9 = param_1 + 0x7fd;
  FUN_1006421a8(plVar9);
  param_1[0x7fd] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar10 = param_1 + 0x80e;
  thunk_FUN_100650e64(plVar10);
  param_1[0x835] = 0;
  param_1[0x834] = 0;
  *(undefined4 *)(param_1 + 0x838) = 0x41700000;
  *(undefined8 *)((long)param_1 + 0x41cc) = 0;
  *(undefined8 *)((long)param_1 + 0x41c4) = 0;
  param_1[0x837] = 0;
  *(undefined4 *)((long)param_1 + 0x41d4) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar14,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(plVar2,plVar5,1);
  FUN_100642bd8(plVar2,plVar6,1);
  FUN_100642bd8(plVar2,plVar7,1);
  FUN_100642bd8(plVar7,plVar8,1);
  FUN_100642bd8(plVar2,plVar9,1);
  FUN_100642bd8(plVar9,plVar10,1);
  local_68 = DAT_101dbd458;
  local_90 = FUN_10028fbd8;
  plVar2 = param_1 + 0x60;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(plVar2,&local_90);
  local_68 = DAT_101dbd484;
  local_90 = FUN_10028fbd8;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(plVar2,&local_90);
  uVar11 = DAT_101dbd460;
  local_68 = DAT_101dbd460;
  local_90 = FUN_10028fbd8;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(plVar2,&local_90);
  uVar12 = DAT_101dbd48c;
  local_68 = DAT_101dbd48c;
  local_90 = FUN_10028fbd8;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(plVar2,&local_90);
  FUN_100650608(puVar14,&DAT_10115a164);
  uVar18 = *(uint *)((long)param_1 + 0x144);
  if ((uVar18 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x144) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 0x6600;
    FUN_1000200a0(puVar14);
    uVar18 = *(uint *)((long)param_1 + 0x144);
  }
  *(uint *)((long)param_1 + 0x144) = uVar18 | 0x10;
  local_68 = uVar11;
  local_90 = FUN_10028fc20;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x19,&local_90);
  local_68 = uVar12;
  local_90 = FUN_10028fc20;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x19,&local_90);
  FUN_100650608(plVar1,&DAT_10115a164);
  FUN_100654488(plVar3,1);
  local_90 = (code *)CONCAT71(local_90._1_7_,9);
  FUN_100534ebc(plVar4,&local_90);
  uVar15 = FUN_1004e0150("MENU_INTERSTITIAL_GENERIC_CLOSE",0);
  FUN_1001816d4(0,0x43480000,0x43480000,plVar6,0,uVar15,&DAT_10115a168,&DAT_101dc1cb8,0);
  FUN_100651594(param_1 + 0x5f2,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_10115a168);
  FUN_100181be0(0xcd,plVar6,&DAT_10115a164);
  uVar11 = DAT_101d91884;
  local_68 = DAT_101d91884;
  local_90 = FUN_10028fc20;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x510,&local_90);
  FUN_1001b495c(0,plVar6);
  FUN_100181c68(0,plVar6);
  *(uint *)((long)param_1 + 0x3eb4) = *(uint *)((long)param_1 + 0x3eb4) & 0xfffffffb;
  uVar15 = FUN_1004e0150("MENU_PARTY_CHAT_CONNECTING",0);
  FUN_1006513c0(plVar8,uVar15);
  *(uint *)((long)param_1 + 0x406c) = *(uint *)((long)param_1 + 0x406c) & 0xfffffffb;
  uVar15 = FUN_1004e0150("MENU_PARTY_CHAT_ERROR_CONNECTING",0);
  FUN_1006513c0(plVar10,uVar15);
  uVar15 = FUN_1004e0150("MENU_CHAT_ENTER_YOUR_CHAT",0);
  FUN_1001b0198(plVar5,uVar15,0);
  local_68 = DAT_101dbd4ac;
  local_90 = thunk_FUN_10028ff08;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x1d9,&local_90);
  local_68 = DAT_101dbd4b0;
  local_90 = thunk_FUN_10029009c;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x1d9,&local_90);
  FUN_1001afc3c(plVar5,1);
  FUN_1001afd98(plVar5,&DAT_101d91650,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0x101);
  local_68 = uVar11;
  local_90 = FUN_10028fc70;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x259,&local_90);
  *(undefined1 *)((long)param_1 + 0x2872) = 0;
  uVar15 = FUN_1004e0150("MENU_DRAFT_LOBBY_CHAT_NODE_MESSAGE",0);
  thunk_FUN_1004e439c(&local_90,uVar15);
  pvVar16 = operator_new(0x318);
  lVar17 = FUN_100290ac0(pvVar16,&DAT_101d91650,&local_90,0,0,1);
  param_1[0x836] = lVar17;
  FUN_100534ad8(plVar4,pvVar16,1);
  if (local_88 != (long *)0x0) {
    operator_delete__(local_88);
  }
  return param_1;
}



/*
 * thunk_FUN_10028f5d0
 * VA: 0xthunk_10028f5d0 | Source: functions/10028.c:12376
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 5, Vis masks: 2
 * Callees: FUN_10001554c, FUN_1000200a0, FUN_1001816d4, FUN_100181be0, FUN_100181c68, FUN_1001afc3c, FUN_1001afd98, FUN_1001b0198 (+26 more)
 * Callers: FUN_1001e8c28, FUN_1001e8d44, FUN_1001e8db8
 */
long * thunk_FUN_10028f5d0(long *param_1)

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
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  void *pvVar16;
  long lVar17;
  uint uVar18;
  code *pcStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar13 = (undefined8 *)FUN_10064e20c();
  puVar13[0x17] = 0;
  puVar14 = puVar13 + 0x18;
  *puVar13 = &PTR_thunk_FUN_10028fccc_10147f6f0;
  FUN_1006505b8();
  plVar1 = param_1 + 0x33;
  FUN_1006505b8(plVar1);
  plVar2 = param_1 + 0x4e;
  FUN_1006421a8(plVar2);
  param_1[0x4e] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar3 = param_1 + 0x5f;
  thunk_FUN_1006543ec(plVar3);
  plVar4 = param_1 + 0x93;
  thunk_FUN_1005357f4(plVar4);
  plVar5 = param_1 + 0x1d8;
  FUN_100290884();
  plVar6 = param_1 + 0x50f;
  thunk_FUN_100181304(plVar6,0);
  plVar7 = param_1 + 0x7c6;
  FUN_1006421a8(plVar7);
  param_1[0x7c6] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar8 = param_1 + 0x7d7;
  thunk_FUN_100650e64(plVar8);
  plVar9 = param_1 + 0x7fd;
  FUN_1006421a8(plVar9);
  param_1[0x7fd] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar10 = param_1 + 0x80e;
  thunk_FUN_100650e64(plVar10);
  param_1[0x835] = 0;
  param_1[0x834] = 0;
  *(undefined4 *)(param_1 + 0x838) = 0x41700000;
  *(undefined8 *)((long)param_1 + 0x41cc) = 0;
  *(undefined8 *)((long)param_1 + 0x41c4) = 0;
  param_1[0x837] = 0;
  *(undefined4 *)((long)param_1 + 0x41d4) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar14,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(plVar2,plVar5,1);
  FUN_100642bd8(plVar2,plVar6,1);
  FUN_100642bd8(plVar2,plVar7,1);
  FUN_100642bd8(plVar7,plVar8,1);
  FUN_100642bd8(plVar2,plVar9,1);
  FUN_100642bd8(plVar9,plVar10,1);
  uStack_68 = DAT_101dbd458;
  pcStack_90 = FUN_10028fbd8;
  plVar2 = param_1 + 0x60;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar2,&pcStack_90);
  uStack_68 = DAT_101dbd484;
  pcStack_90 = FUN_10028fbd8;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar2,&pcStack_90);
  uVar11 = DAT_101dbd460;
  uStack_68 = DAT_101dbd460;
  pcStack_90 = FUN_10028fbd8;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar2,&pcStack_90);
  uVar12 = DAT_101dbd48c;
  uStack_68 = DAT_101dbd48c;
  pcStack_90 = FUN_10028fbd8;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar2,&pcStack_90);
  FUN_100650608(puVar14,&DAT_10115a164);
  uVar18 = *(uint *)((long)param_1 + 0x144);
  if ((uVar18 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x144) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 0x6600;
    FUN_1000200a0(puVar14);
    uVar18 = *(uint *)((long)param_1 + 0x144);
  }
  *(uint *)((long)param_1 + 0x144) = uVar18 | 0x10;
  uStack_68 = uVar11;
  pcStack_90 = FUN_10028fc20;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x19,&pcStack_90);
  uStack_68 = uVar12;
  pcStack_90 = FUN_10028fc20;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x19,&pcStack_90);
  FUN_100650608(plVar1,&DAT_10115a164);
  FUN_100654488(plVar3,1);
  pcStack_90 = (code *)CONCAT71(pcStack_90._1_7_,9);
  FUN_100534ebc(plVar4,&pcStack_90);
  uVar15 = FUN_1004e0150("MENU_INTERSTITIAL_GENERIC_CLOSE",0);
  FUN_1001816d4(0,0x43480000,0x43480000,plVar6,0,uVar15,&DAT_10115a168,&DAT_101dc1cb8,0);
  FUN_100651594(param_1 + 0x5f2,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_10115a168);
  FUN_100181be0(0xcd,plVar6,&DAT_10115a164);
  uVar11 = DAT_101d91884;
  uStack_68 = DAT_101d91884;
  pcStack_90 = FUN_10028fc20;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x510,&pcStack_90);
  FUN_1001b495c(0,plVar6);
  FUN_100181c68(0,plVar6);
  *(uint *)((long)param_1 + 0x3eb4) = *(uint *)((long)param_1 + 0x3eb4) & 0xfffffffb;
  uVar15 = FUN_1004e0150("MENU_PARTY_CHAT_CONNECTING",0);
  FUN_1006513c0(plVar8,uVar15);
  *(uint *)((long)param_1 + 0x406c) = *(uint *)((long)param_1 + 0x406c) & 0xfffffffb;
  uVar15 = FUN_1004e0150("MENU_PARTY_CHAT_ERROR_CONNECTING",0);
  FUN_1006513c0(plVar10,uVar15);
  uVar15 = FUN_1004e0150("MENU_CHAT_ENTER_YOUR_CHAT",0);
  FUN_1001b0198(plVar5,uVar15,0);
  uStack_68 = DAT_101dbd4ac;
  pcStack_90 = thunk_FUN_10028ff08;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x1d9,&pcStack_90);
  uStack_68 = DAT_101dbd4b0;
  pcStack_90 = thunk_FUN_10029009c;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x1d9,&pcStack_90);
  FUN_1001afc3c(plVar5,1);
  FUN_1001afd98(plVar5,&DAT_101d91650,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0x101);
  uStack_68 = uVar11;
  pcStack_90 = FUN_10028fc70;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x259,&pcStack_90);
  *(undefined1 *)((long)param_1 + 0x2872) = 0;
  uVar15 = FUN_1004e0150("MENU_DRAFT_LOBBY_CHAT_NODE_MESSAGE",0);
  thunk_FUN_1004e439c(&pcStack_90,uVar15);
  pvVar16 = operator_new(0x318);
  lVar17 = FUN_100290ac0(pvVar16,&DAT_101d91650,&pcStack_90,0,0,1);
  param_1[0x836] = lVar17;
  FUN_100534ad8(plVar4,pvVar16,1);
  if (plStack_88 != (long *)0x0) {
    operator_delete__(plStack_88);
  }
  return param_1;
}
