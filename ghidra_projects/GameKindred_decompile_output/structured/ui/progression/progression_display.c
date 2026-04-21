// ui/progression/progression_display.c — 3 UI functions (progression)
// Extracted by extract_ui.py from structured/functions/
#include "GameKindred.h"



/*
 * FUN_10025129c
 * skill tier display
 * VA: 0x10025129c | Source: functions/10025.c:813
 * Fptr: __DATA+0x147a1d8
 * Dylib: Layer 8
 * Notes: Checks gate + platform. If returns early, skill tier icon/text never set.
 * CE-gate: YES (1x) | Guest-gate: NO
 * Callees: FUN_100131560, FUN_10015d3ec, FUN_10015d3f8, FUN_100164e00, FUN_100165b64, FUN_100169cec
 * Callers: thunk_FUN_10025129c
 */
void FUN_10025129c(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar1 = FUN_10015d3f8();
  if ((iVar1 != 0) && (uVar2 = FUN_100131560(), (uVar2 & 1) == 0)) {
    uVar3 = FUN_10015d3ec();
    local_24 = 5;
    iVar1 = FUN_100164e00(uVar3,&local_24);
    lVar4 = FUN_10015d3ec();
    if (iVar1 == 0) {
      local_28 = 6;
      iVar1 = FUN_100164e00(lVar4,&local_28);
      if (iVar1 != 0) {
        FUN_10015d3ec();
        FUN_100165b64();
      }
    }
    else {
      FUN_100169cec(lVar4 + 0x278);
    }
  }
  return;
}



/*
 * thunk_FUN_10025129c
 * VA: 0xthunk_10025129c | Source: functions/10025.c:847
 * CE-gate: NO | Guest-gate: NO
 * Callees: FUN_10025129c
 */
void thunk_FUN_10025129c(void)

{
  FUN_10025129c();
  return;
}



/*
 * FUN_1002d54d8
 * VA: 0x1002d54d8 | Source: functions/1002d.c:3554
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 5, Vis masks: 8
 * Callees: FUN_1000f0a34, FUN_1000f0ec8, FUN_1000f2ea8, FUN_100115aa0, FUN_1001c6fd8, FUN_1001c7970, FUN_1001c7990, FUN_1004e0150 (+4 more)
 * Callers: FUN_1002d510c
 */
void FUN_1002d54d8(long param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  undefined1 auStack_78 [8];
  void *local_70;
  undefined1 auStack_68 [8];
  void *local_60;
  undefined1 auStack_58 [8];
  void *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  if (*(char *)(param_1 + 0x2c54) == '\0') {
    if ((-1 < *(int *)(param_1 + 0x2c50)) && (-1 < *(int *)(param_1 + 0x2c4c))) {
      uVar2 = FUN_1004e0150("MENU_SKILL_RESET_STARTING_SKILL_TIER",0);
      FUN_1006513c0(param_1 + 0x29e8,uVar2);
      uVar2 = FUN_1004e0150("MENU_SKILL_RESET_NEW_SKILL_TIERS",0);
      thunk_FUN_1004e439c(auStack_58,uVar2);
      local_48 = 0;
      uStack_40 = 0;
      FUN_1000f0a34(*(undefined4 *)(param_1 + 0x2c4c));
      FUN_100115aa0(&local_48,"%d");
      FUN_1004e3120(auStack_68,"[SKILL_TIER_5V5]");
      FUN_1004e3120(auStack_78,&local_48);
      FUN_1004e3bc4(auStack_58,0,auStack_68,auStack_78);
      if (local_70 != (void *)0x0) {
        operator_delete__(local_70);
      }
      if (local_60 != (void *)0x0) {
        operator_delete__(local_60);
      }
      FUN_1004e3120(auStack_68,"[SKILL_SUBTIER_5V5]");
      uVar2 = FUN_1000f2ea8(*(undefined4 *)(param_1 + 0x2c4c));
      FUN_1004e3bc4(auStack_58,0,auStack_68,uVar2);
      if (local_60 != (void *)0x0) {
        operator_delete__(local_60);
      }
      FUN_1000f0a34(*(undefined4 *)(param_1 + 0x2c50));
      FUN_100115aa0(&local_48,"%d");
      FUN_1004e3120(auStack_68,"[SKILL_TIER_3V3]");
      FUN_1004e3120(auStack_78,&local_48);
      FUN_1004e3bc4(auStack_58,0,auStack_68,auStack_78);
      if (local_70 != (void *)0x0) {
        operator_delete__(local_70);
      }
      if (local_60 != (void *)0x0) {
        operator_delete__(local_60);
      }
      FUN_1004e3120(auStack_68,"[SKILL_SUBTIER_3V3]");
      iVar4 = *(int *)(param_1 + 0x2c50);
      goto LAB_1002d5764;
    }
    pcVar1 = "MENU_SKILL_RESET_STARTING_SKILL_TIER";
  }
  else {
    pcVar1 = "MENU_SKILL_RESET_MAXIMUM_SKILL_TIER";
  }
  uVar2 = FUN_1004e0150(pcVar1,0);
  FUN_1006513c0(param_1 + 0x29e8,uVar2);
  fVar5 = (float)*(int *)(param_1 + 0x2c4c);
  if ((float)*(int *)(param_1 + 0x2c4c) <= (float)*(int *)(param_1 + 0x2c50)) {
    fVar5 = (float)*(int *)(param_1 + 0x2c50);
  }
  iVar4 = (int)fVar5;
  FUN_1000f0a34(iVar4);
  uVar2 = FUN_1004e0150("MENU_SKILL_RESET_OLD_SKILL_TIER",0);
  thunk_FUN_1004e439c(auStack_58,uVar2);
  local_48 = 0;
  uStack_40 = 0;
  FUN_100115aa0(&local_48,"%d");
  FUN_1004e3120(auStack_68,"[SKILL_TIER]");
  FUN_1004e3120(auStack_78,&local_48);
  FUN_1004e3bc4(auStack_58,0,auStack_68,auStack_78);
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
  }
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
  }
  FUN_1004e3120(auStack_68,"[SKILL_SUBTIER]");
LAB_1002d5764:
  uVar2 = FUN_1000f2ea8(iVar4);
  FUN_1004e3bc4(auStack_58,0,auStack_68,uVar2);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
  }
  FUN_1006513c0(param_1 + 0x2b18,auStack_58);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
  }
  FUN_1000f0ec8(auStack_58,*(undefined4 *)(param_1 + 0x2c48),0,0,1);
  FUN_1006513c0(param_1 + 0xb8,auStack_58);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
  }
  if (*(int *)(param_1 + 0x2c4c) < -1) {
    *(uint *)(param_1 + 0x116c) = *(uint *)(param_1 + 0x116c) & 0xfffffffb;
    *(uint *)(param_1 + 0x50c) = *(uint *)(param_1 + 0x50c) & 0xfffffffb;
    *(uint *)(param_1 + 0x107c) = *(uint *)(param_1 + 0x107c) & 0xfffffffb;
    uVar3 = *(uint *)(param_1 + 0x153c) & 0xfffffffb;
  }
  else {
    FUN_1001c6fd8(param_1 + 0x10e8);
    FUN_1001c7990(param_1 + 0x488,*(undefined4 *)(param_1 + 0x2c4c));
    FUN_1001c7970(param_1 + 0x488,0);
    *(uint *)(param_1 + 0x116c) = *(uint *)(param_1 + 0x116c) | 4;
    *(uint *)(param_1 + 0x50c) = *(uint *)(param_1 + 0x50c) | 4;
    *(uint *)(param_1 + 0x107c) = *(uint *)(param_1 + 0x107c) | 4;
    uVar3 = *(uint *)(param_1 + 0x153c) | 4;
  }
  *(uint *)(param_1 + 0x153c) = uVar3;
  if (*(int *)(param_1 + 0x2c50) < -1) {
    *(uint *)(param_1 + 0x2414) = *(uint *)(param_1 + 0x2414) & 0xfffffffb;
    *(uint *)(param_1 + 0x17b4) = *(uint *)(param_1 + 0x17b4) & 0xfffffffb;
    *(uint *)(param_1 + 0x2324) = *(uint *)(param_1 + 0x2324) & 0xfffffffb;
    uVar3 = *(uint *)(param_1 + 0x27e4) & 0xfffffffb;
  }
  else {
    FUN_1001c6fd8(param_1 + 0x2390);
    FUN_1001c7990(param_1 + 0x1730,*(undefined4 *)(param_1 + 0x2c50));
    FUN_1001c7970(param_1 + 0x1730,0);
    *(uint *)(param_1 + 0x2414) = *(uint *)(param_1 + 0x2414) | 4;
    *(uint *)(param_1 + 0x17b4) = *(uint *)(param_1 + 0x17b4) | 4;
    *(uint *)(param_1 + 0x2324) = *(uint *)(param_1 + 0x2324) | 4;
    uVar3 = *(uint *)(param_1 + 0x27e4) | 4;
  }
  *(uint *)(param_1 + 0x27e4) = uVar3;
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}
