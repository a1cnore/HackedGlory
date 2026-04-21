// ui/bag/bag_constructor.c — 7 UI functions (bag)
// Extracted by extract_ui.py from structured/functions/
#include "GameKindred.h"



/*
 * FUN_1001f59e8
 * BAG constructor — creates 6 tabs always, 4 more when gate=0
 * VA: 0x1001f59e8 | Source: functions/1001f.c:6230
 * Dylib: Layer 6
 * Notes: CE-gated tabs include TROPHIES. Tab registration via FUN_1002afb68.
 * CE-gate: YES (2x) | Guest-gate: NO
 * Callees: FUN_100102198, FUN_100131560, FUN_10014f4a0, FUN_10015d3ec, FUN_100166ab8, FUN_1001dac1c, FUN_1001f5d50, FUN_1001f62bc (+21 more)
 */
undefined8 * FUN_1001f59e8(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 ***pppuVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 **local_58;
  ulong local_50;
  undefined8 uStack_48;
  
  *param_1 = &PTR_FUN_10146e070;
  operator_new(0x2c88);
  lVar1 = thunk_FUN_1002af074();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  FUN_10014f4a0(param_1 + 2);
  puVar8 = param_1 + 6;
  *puVar8 = &PTR_FUN_10146e058;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_thunk_FUN_1001f5dd4_10146dc00;
  param_1[2] = &PTR_FUN_10146dc68;
  param_1[5] = &PTR_FUN_10146e000;
  puVar6 = param_1 + 9;
  *puVar6 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  operator_new(0x38);
  lVar1 = thunk_FUN_1001f25c4();
  local_58 = (undefined8 **)(lVar1 + 0x28);
  FUN_1001f5d50(puVar6,&local_58);
  operator_new(0x38);
  lVar1 = thunk_FUN_1002098e0();
  local_58 = (undefined8 **)(lVar1 + 0x28);
  FUN_1001f5d50(puVar6,&local_58);
  operator_new(0x38);
  lVar1 = thunk_FUN_100217944();
  local_58 = (undefined8 **)(lVar1 + 0x28);
  FUN_1001f5d50(puVar6,&local_58);
  operator_new(0x48);
  lVar1 = thunk_FUN_1001f564c();
  local_58 = (undefined8 **)(lVar1 + 0x28);
  FUN_1001f5d50(puVar6,&local_58);
  operator_new(0x40);
  lVar1 = thunk_FUN_1001f641c();
  local_58 = (undefined8 **)(lVar1 + 0x28);
  FUN_1001f5d50(puVar6,&local_58);
  operator_new(0x40);
  lVar1 = thunk_FUN_1001f52c0();
  local_58 = (undefined8 **)(lVar1 + 0x28);
  FUN_1001f5d50(puVar6,&local_58);
  uVar2 = FUN_100131560();
  if ((uVar2 & 1) == 0) {
    operator_new(0x40);
    lVar1 = thunk_FUN_1001e99e0();
    local_58 = (undefined8 **)(lVar1 + 0x28);
    FUN_1001f5d50(puVar6,&local_58);
    operator_new(0x50);
    lVar1 = thunk_FUN_100207c5c();
    param_1[0xb] = lVar1;
    local_58 = (undefined8 **)(lVar1 + 0x28);
    FUN_1001f5d50(puVar6,&local_58);
    operator_new(0x40);
    lVar1 = thunk_FUN_1001e85e4();
    local_58 = (undefined8 **)(lVar1 + 0x28);
    FUN_1001f5d50(puVar6,&local_58);
    operator_new(0x50);
    lVar1 = thunk_FUN_10021844c();
    local_58 = (undefined8 **)(lVar1 + 0x28);
    FUN_1001f5d50(puVar6,&local_58);
  }
  if (*(int *)(param_1 + 9) != 0) {
    uVar2 = 0;
    do {
      uVar3 = (**(code **)(**(long **)(param_1[10] + uVar2 * 8) + 0x10))();
      uVar9 = param_1[1];
      uVar4 = (**(code **)(**(long **)(param_1[10] + uVar2 * 8) + 0x20))();
      uVar5 = (**(code **)(**(long **)(param_1[10] + uVar2 * 8) + 0x18))();
      FUN_1002afb68(uVar9,uVar4,0,uVar3,uVar5);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 9));
  }
  uVar2 = FUN_100131560();
  if ((uVar2 & 1) != 0) goto LAB_1001f5ce4;
  puVar6 = (undefined8 *)FUN_1002d6d8c(*(undefined8 *)(param_1[0xb] + 8));
  if ((char)*(byte *)((long)puVar6 + 0x17) < '\0') {
    uVar2 = puVar6[1];
    if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_1001f62bc();
    }
    puVar6 = (undefined8 *)*puVar6;
  }
  else {
    uVar2 = (ulong)*(byte *)((long)puVar6 + 0x17);
  }
  if (uVar2 < 0x17) {
    pppuVar7 = &local_58;
    uStack_48 = CONCAT17((char)uVar2,(undefined7)uStack_48);
    if (uVar2 != 0) goto LAB_1001f5c9c;
  }
  else {
    uVar10 = uVar2 + 0x10 & 0xfffffffffffffff0;
    pppuVar7 = operator_new(uVar10);
    uStack_48 = uVar10 | 0x8000000000000000;
    local_58 = pppuVar7;
    local_50 = uVar2;
LAB_1001f5c9c:
    _memcpy(pppuVar7,puVar6,uVar2);
  }
  *(undefined1 *)((long)pppuVar7 + uVar2) = 0;
  pppuVar7 = (undefined8 ***)local_58;
  if (-1 < (long)uStack_48) {
    pppuVar7 = &local_58;
  }
  FUN_100102198("blueprintsOwned",pppuVar7,1);
  if ((long)uStack_48 < 0) {
    operator_delete(local_58);
  }
LAB_1001f5ce4:
  FUN_1002afc3c(param_1[1],0);
  FUN_10015d3ec();
  FUN_100166ab8();
  FUN_1001dac1c(puVar8,"TALENTS",param_1,FUN_1001f63c8);
  FUN_1001dac1c(puVar8,"HERO",param_1,FUN_1001f6404);
  return param_1;
}



/*
 * thunk_FUN_1001f59e8
 * VA: 0xthunk_1001f59e8 | Source: functions/1001f.c:6399
 * CE-gate: YES (2x) | Guest-gate: NO
 * Callees: FUN_100102198, FUN_100131560, FUN_10014f4a0, FUN_10015d3ec, FUN_100166ab8, FUN_1001dac1c, FUN_1001f5d50, FUN_1001f62bc (+21 more)
 * Callers: FUN_1001fd570, thunk_FUN_1001fd570
 */
undefined8 * thunk_FUN_1001f59e8(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 ***pppuVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  *param_1 = &PTR_FUN_10146e070;
  operator_new(0x2c88);
  lVar1 = thunk_FUN_1002af074();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  FUN_10014f4a0(param_1 + 2);
  puVar8 = param_1 + 6;
  *puVar8 = &PTR_FUN_10146e058;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_thunk_FUN_1001f5dd4_10146dc00;
  param_1[2] = &PTR_FUN_10146dc68;
  param_1[5] = &PTR_FUN_10146e000;
  puVar6 = param_1 + 9;
  *puVar6 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  operator_new(0x38);
  lVar1 = thunk_FUN_1001f25c4();
  ppuStack_58 = (undefined8 **)(lVar1 + 0x28);
  FUN_1001f5d50(puVar6,&ppuStack_58);
  operator_new(0x38);
  lVar1 = thunk_FUN_1002098e0();
  ppuStack_58 = (undefined8 **)(lVar1 + 0x28);
  FUN_1001f5d50(puVar6,&ppuStack_58);
  operator_new(0x38);
  lVar1 = thunk_FUN_100217944();
  ppuStack_58 = (undefined8 **)(lVar1 + 0x28);
  FUN_1001f5d50(puVar6,&ppuStack_58);
  operator_new(0x48);
  lVar1 = thunk_FUN_1001f564c();
  ppuStack_58 = (undefined8 **)(lVar1 + 0x28);
  FUN_1001f5d50(puVar6,&ppuStack_58);
  operator_new(0x40);
  lVar1 = thunk_FUN_1001f641c();
  ppuStack_58 = (undefined8 **)(lVar1 + 0x28);
  FUN_1001f5d50(puVar6,&ppuStack_58);
  operator_new(0x40);
  lVar1 = thunk_FUN_1001f52c0();
  ppuStack_58 = (undefined8 **)(lVar1 + 0x28);
  FUN_1001f5d50(puVar6,&ppuStack_58);
  uVar2 = FUN_100131560();
  if ((uVar2 & 1) == 0) {
    operator_new(0x40);
    lVar1 = thunk_FUN_1001e99e0();
    ppuStack_58 = (undefined8 **)(lVar1 + 0x28);
    FUN_1001f5d50(puVar6,&ppuStack_58);
    operator_new(0x50);
    lVar1 = thunk_FUN_100207c5c();
    param_1[0xb] = lVar1;
    ppuStack_58 = (undefined8 **)(lVar1 + 0x28);
    FUN_1001f5d50(puVar6,&ppuStack_58);
    operator_new(0x40);
    lVar1 = thunk_FUN_1001e85e4();
    ppuStack_58 = (undefined8 **)(lVar1 + 0x28);
    FUN_1001f5d50(puVar6,&ppuStack_58);
    operator_new(0x50);
    lVar1 = thunk_FUN_10021844c();
    ppuStack_58 = (undefined8 **)(lVar1 + 0x28);
    FUN_1001f5d50(puVar6,&ppuStack_58);
  }
  if (*(int *)(param_1 + 9) != 0) {
    uVar2 = 0;
    do {
      uVar3 = (**(code **)(**(long **)(param_1[10] + uVar2 * 8) + 0x10))();
      uVar9 = param_1[1];
      uVar4 = (**(code **)(**(long **)(param_1[10] + uVar2 * 8) + 0x20))();
      uVar5 = (**(code **)(**(long **)(param_1[10] + uVar2 * 8) + 0x18))();
      FUN_1002afb68(uVar9,uVar4,0,uVar3,uVar5);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 9));
  }
  uVar2 = FUN_100131560();
  if ((uVar2 & 1) != 0) goto LAB_1001f5ce4;
  puVar6 = (undefined8 *)FUN_1002d6d8c(*(undefined8 *)(param_1[0xb] + 8));
  if ((char)*(byte *)((long)puVar6 + 0x17) < '\0') {
    uVar2 = puVar6[1];
    if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_1001f62bc();
    }
    puVar6 = (undefined8 *)*puVar6;
  }
  else {
    uVar2 = (ulong)*(byte *)((long)puVar6 + 0x17);
  }
  if (uVar2 < 0x17) {
    pppuVar7 = &ppuStack_58;
    uStack_48 = CONCAT17((char)uVar2,(undefined7)uStack_48);
    if (uVar2 != 0) goto LAB_1001f5c9c;
  }
  else {
    uVar10 = uVar2 + 0x10 & 0xfffffffffffffff0;
    pppuVar7 = operator_new(uVar10);
    uStack_48 = uVar10 | 0x8000000000000000;
    ppuStack_58 = pppuVar7;
    uStack_50 = uVar2;
LAB_1001f5c9c:
    _memcpy(pppuVar7,puVar6,uVar2);
  }
  *(undefined1 *)((long)pppuVar7 + uVar2) = 0;
  pppuVar7 = (undefined8 ***)ppuStack_58;
  if (-1 < (long)uStack_48) {
    pppuVar7 = &ppuStack_58;
  }
  FUN_100102198("blueprintsOwned",pppuVar7,1);
  if ((long)uStack_48 < 0) {
    operator_delete(ppuStack_58);
  }
LAB_1001f5ce4:
  FUN_1002afc3c(param_1[1],0);
  FUN_10015d3ec();
  FUN_100166ab8();
  FUN_1001dac1c(puVar8,"TALENTS",param_1,FUN_1001f63c8);
  FUN_1001dac1c(puVar8,"HERO",param_1,FUN_1001f6404);
  return param_1;
}



/*
 * FUN_1001f5d50
 * array add for tab sub-objects
 * VA: 0x1001f5d50 | Source: functions/1001f.c:6368
 * Dylib: Layer 6
 * Notes: arr_add(tabArray, &subObj) — adds tab to BAG's tab array at wrapper+0x48.
 * CE-gate: NO | Guest-gate: NO
 * Callees: FUN_1001f634c
 * Callers: FUN_1001f59e8, thunk_FUN_1001f59e8
 */
void FUN_1001f5d50(uint *param_1,undefined8 *param_2)

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
    FUN_1001f634c(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}



/*
 * FUN_1001f63c8
 * VA: 0x1001f63c8 | Source: functions/1001f.c:7026
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 2
 * Callees: FUN_1002afc48, FUN_1004e0150
 * Callers: FUN_100187d2c, FUN_1001f59e8, thunk_FUN_1001f59e8
 */
undefined8 FUN_1001f63c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = FUN_1004e0150("MENU_HERO_TAB_NAME_TALENTS",0);
  FUN_1002afc48(uVar2,uVar1);
  return 0;
}



/*
 * FUN_1002ade3c
 * VA: 0x1002ade3c | Source: functions/1002a.c:10570
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 1, Vis masks: 4
 * Callees: FUN_10001554c, FUN_1000200a0, FUN_1004e0150, FUN_100642bd8, FUN_10064e20c, FUN_10064e264, FUN_1006513c0, FUN_100651594 (+11 more)
 * Callers: FUN_1002ada88
 */
long * FUN_1002ade3c(long *param_1)

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
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  uint uVar14;
  code *local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  puVar12 = (undefined8 *)FUN_10064e20c();
  *puVar12 = &PTR_thunk_FUN_1002ae3d0_1014833a0;
  puVar1 = puVar12 + 0x1a;
  puVar12[0x18] = 0;
  puVar12[0x19] = 0;
  puVar12[0x17] = 0;
  FUN_10064e264(puVar1);
  plVar2 = param_1 + 0x31;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x4f;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x6d;
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  plVar5 = param_1 + 0xa9;
  thunk_FUN_100652c08();
  plVar6 = param_1 + 199;
  thunk_FUN_100651ebc(plVar6);
  plVar7 = param_1 + 0xf1;
  FUN_100653838(plVar7);
  plVar8 = param_1 + 0x112;
  thunk_FUN_100650e64(plVar8);
  plVar9 = param_1 + 0x138;
  thunk_FUN_100650e64(plVar9);
  thunk_FUN_100650e64();
  plVar10 = param_1 + 0x184;
  thunk_FUN_100650e64(plVar10);
  plVar11 = param_1 + 0x1aa;
  thunk_FUN_100650e64(plVar11);
  param_1[0x1d0] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  FUN_100642bd8(plVar7,plVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar9,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  FUN_100642bd8(puVar1,param_1 + 0x15e,1);
  FUN_100642bd8(puVar1,plVar11,1);
  FUN_100642bd8(puVar1,plVar4,1);
  FUN_100642bd8(plVar4,param_1 + 0x8b,1);
  FUN_100642bd8(puVar1,plVar10,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  local_98._0_4_ = 0xffb6acaa;
  FUN_100651594(plVar9,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&local_98);
  FUN_100651594(param_1 + 0x15e,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_10115a168);
  local_98 = (code *)CONCAT44(local_98._4_4_,0xffb6acaa);
  FUN_100651594(plVar10,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,&local_98);
  FUN_100651700(plVar10,3);
  uVar13 = FUN_1004e0150("ACTIVE_SOCIAL_PINGS_PACK_INSTRUCTION",0);
  FUN_1006513c0(plVar10,uVar13);
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"circle_button_frame");
  FUN_100652cac(param_1 + 0x8b,PTR_s_build___MenuPartsCommon_tga_101854970,"circle_button_fill");
  *(uint *)((long)param_1 + 0x3ec) = *(uint *)((long)param_1 + 0x3ec) | 0x10;
  local_70 = DAT_101dbd460;
  local_98 = thunk_FUN_1002aeb64;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x6e,&local_98);
  local_70 = DAT_101dbd48c;
  local_98 = thunk_FUN_1002aeb64;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x6e,&local_98);
  FUN_100651594(plVar11,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&DAT_10115a168);
  FUN_100652cac(plVar5,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  uVar14 = *(uint *)((long)param_1 + 0x5cc);
  if ((uVar14 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x5cc) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x2600;
    FUN_1000200a0(plVar5);
  }
  FUN_100651594(plVar8,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_10115a168);
  uVar13 = FUN_1004e0150("MENU_HEROES_BANNER_NEW",0);
  FUN_1006513c0(plVar8,uVar13);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  local_98._0_4_ = 0xff828282;
  FUN_100652dd4(plVar2,&local_98,2);
  *(byte *)(param_1 + 0x4c) = *(byte *)(param_1 + 0x4c) | 2;
  *(uint *)((long)param_1 + 0x20c) = *(uint *)((long)param_1 + 0x20c) & 0xfffffffb;
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  local_98._0_4_ = 0xff6c5246;
  FUN_100652dd4(plVar3,&local_98,2);
  *(uint *)((long)param_1 + 0x2fc) = *(uint *)((long)param_1 + 0x2fc) & 0xfffffffb;
  FUN_100652cac(plVar7,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  local_98 = (code *)CONCAT44(local_98._4_4_,0xff1c1ca5);
  FUN_100652dd4(plVar7,&local_98,2);
  *(uint *)((long)param_1 + 0x80c) = *(uint *)((long)param_1 + 0x80c) & 0xfffffffb;
  uVar14 = *(uint *)((long)param_1 + 0x6bc);
  if ((uVar14 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x6bc) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar6);
    uVar14 = *(uint *)((long)param_1 + 0x6bc);
  }
  *(uint *)((long)param_1 + 0x6bc) = uVar14 & 0xffffffbf;
  FUN_100651f8c(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970);
  FUN_100651f94(plVar6,0,0,0,0,"quest_item_highlight_top",0,0,0,0,0,0,0,"quest_item_highlight_mid",0
                ,0,0,0,0,"quest_item_highlight_bot",0,0,0);
  *(uint *)((long)param_1 + 0x6bc) = *(uint *)((long)param_1 + 0x6bc) & 0xfffffffb;
  return param_1;
}



/*
 * FUN_1002af074
 * VA: 0x1002af074 | Source: functions/1002a.c:11385
 * CE-gate: NO | Guest-gate: NO
 * Indicators: Vis masks: 2
 * Callees: FUN_10001549c, FUN_10001554c, FUN_1000200a0, FUN_10014f4a0, FUN_1001b11fc, FUN_1002af428, FUN_1002af438, FUN_1002af448 (+12 more)
 */
long * FUN_1002af074(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar11 = (undefined8 *)FUN_10064e20c();
  *puVar11 = &PTR_thunk_FUN_10064e2bc_101483ca8;
  puVar11[0x17] = 0;
  FUN_10014f4a0(puVar11 + 0x18);
  *param_1 = (long)&PTR_thunk_FUN_1002af4f0_101483630;
  param_1[0x18] = (long)&PTR_FUN_101483790;
  plVar1 = param_1 + 0x1b;
  thunk_FUN_100652c08(plVar1);
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  FUN_1001b11fc(param_1 + 0x3b);
  thunk_FUN_100198904(param_1 + 0x55,param_1 + 0x3b);
  plVar2 = param_1 + 0x20a;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x228;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x246;
  FUN_10064e264(plVar4);
  plVar5 = param_1 + 0x25d;
  thunk_FUN_1002ee068(plVar5);
  plVar6 = param_1 + 0x32a;
  thunk_FUN_1002ee068(plVar6);
  plVar7 = param_1 + 0x3f7;
  thunk_FUN_1002ee068(plVar7);
  plVar8 = param_1 + 0x4c4;
  thunk_FUN_1002ee068(plVar8);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_100642bd8(plVar4,plVar5,1);
  FUN_100642bd8(plVar4,plVar6,1);
  FUN_100642bd8(plVar4,plVar7,1);
  FUN_100642bd8(plVar4,plVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x55,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100652cac(plVar1,DAT_101854a08,"popup_bg");
  *(uint *)((long)param_1 + 0xfc4) = *(uint *)((long)param_1 + 0xfc4) | 4;
  FUN_10001549c(&local_90,"ice_icon_small");
  FUN_1002ee358(plVar5,&local_90);
  if (local_80._7_1_ < '\0') {
    operator_delete(local_90);
  }
  uVar10 = DAT_101d91884;
  local_68 = DAT_101d91884;
  local_90 = FUN_1002af428;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x25e,&local_90);
  FUN_10001549c(&local_90,"glory_icon_small");
  FUN_1002ee358(plVar6,&local_90);
  if (local_80 < 0) {
    operator_delete(local_90);
  }
  local_68 = uVar10;
  local_90 = FUN_1002af438;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x32b,&local_90);
  FUN_10001549c(&local_90,"opal_icon_small");
  FUN_1002ee358(plVar7,&local_90);
  if (local_80 < 0) {
    operator_delete(local_90);
  }
  *(uint *)((long)param_1 + 0x2484) = *(uint *)((long)param_1 + 0x2484) & 0xfffffffb;
  FUN_10001549c(&local_90,"essence_icon_small");
  FUN_1002ee358(plVar8,&local_90);
  if (local_80 < 0) {
    operator_delete(local_90);
  }
  *(uint *)((long)param_1 + 0x2aec) = *(uint *)((long)param_1 + 0x2aec) & 0xfffffffb;
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar2,&DAT_10115a164,2);
  *(byte *)(param_1 + 0x225) = *(byte *)(param_1 + 0x225) | 2;
  uVar9 = *(uint *)((long)param_1 + 0x10d4);
  if ((uVar9 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x10d4) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x5900;
    FUN_1000200a0(plVar2);
  }
  FUN_100652cac(plVar3,PTR_s_build___InventoryCommon_atlas_10184e108,
                "inventory_hero_portrait_frame_standard");
  uVar9 = *(uint *)((long)param_1 + 0x11c4);
  if ((uVar9 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x11c4) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x3300;
    FUN_1000200a0(plVar3);
  }
  FUN_1002af448(param_1);
  return param_1;
}



/*
 * thunk_FUN_1002af074
 * VA: 0xthunk_1002af074 | Source: functions/1002a.c:11546
 * CE-gate: NO | Guest-gate: NO
 * Indicators: Vis masks: 2
 * Callees: FUN_10001549c, FUN_10001554c, FUN_1000200a0, FUN_10014f4a0, FUN_1001b11fc, FUN_1002af428, FUN_1002af438, FUN_1002af448 (+12 more)
 * Callers: FUN_1001f59e8, thunk_FUN_1001f59e8
 */
long * thunk_FUN_1002af074(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  code *pcStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar11 = (undefined8 *)FUN_10064e20c();
  *puVar11 = &PTR_thunk_FUN_10064e2bc_101483ca8;
  puVar11[0x17] = 0;
  FUN_10014f4a0(puVar11 + 0x18);
  *param_1 = (long)&PTR_thunk_FUN_1002af4f0_101483630;
  param_1[0x18] = (long)&PTR_FUN_101483790;
  plVar1 = param_1 + 0x1b;
  thunk_FUN_100652c08(plVar1);
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  FUN_1001b11fc(param_1 + 0x3b);
  thunk_FUN_100198904(param_1 + 0x55,param_1 + 0x3b);
  plVar2 = param_1 + 0x20a;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x228;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x246;
  FUN_10064e264(plVar4);
  plVar5 = param_1 + 0x25d;
  thunk_FUN_1002ee068(plVar5);
  plVar6 = param_1 + 0x32a;
  thunk_FUN_1002ee068(plVar6);
  plVar7 = param_1 + 0x3f7;
  thunk_FUN_1002ee068(plVar7);
  plVar8 = param_1 + 0x4c4;
  thunk_FUN_1002ee068(plVar8);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_100642bd8(plVar4,plVar5,1);
  FUN_100642bd8(plVar4,plVar6,1);
  FUN_100642bd8(plVar4,plVar7,1);
  FUN_100642bd8(plVar4,plVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x55,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100652cac(plVar1,DAT_101854a08,"popup_bg");
  *(uint *)((long)param_1 + 0xfc4) = *(uint *)((long)param_1 + 0xfc4) | 4;
  FUN_10001549c(&pcStack_90,"ice_icon_small");
  FUN_1002ee358(plVar5,&pcStack_90);
  if (uStack_80._7_1_ < '\0') {
    operator_delete(pcStack_90);
  }
  uVar10 = DAT_101d91884;
  uStack_68 = DAT_101d91884;
  pcStack_90 = FUN_1002af428;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x25e,&pcStack_90);
  FUN_10001549c(&pcStack_90,"glory_icon_small");
  FUN_1002ee358(plVar6,&pcStack_90);
  if (uStack_80 < 0) {
    operator_delete(pcStack_90);
  }
  uStack_68 = uVar10;
  pcStack_90 = FUN_1002af438;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x32b,&pcStack_90);
  FUN_10001549c(&pcStack_90,"opal_icon_small");
  FUN_1002ee358(plVar7,&pcStack_90);
  if (uStack_80 < 0) {
    operator_delete(pcStack_90);
  }
  *(uint *)((long)param_1 + 0x2484) = *(uint *)((long)param_1 + 0x2484) & 0xfffffffb;
  FUN_10001549c(&pcStack_90,"essence_icon_small");
  FUN_1002ee358(plVar8,&pcStack_90);
  if (uStack_80 < 0) {
    operator_delete(pcStack_90);
  }
  *(uint *)((long)param_1 + 0x2aec) = *(uint *)((long)param_1 + 0x2aec) & 0xfffffffb;
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar2,&DAT_10115a164,2);
  *(byte *)(param_1 + 0x225) = *(byte *)(param_1 + 0x225) | 2;
  uVar9 = *(uint *)((long)param_1 + 0x10d4);
  if ((uVar9 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x10d4) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x5900;
    FUN_1000200a0(plVar2);
  }
  FUN_100652cac(plVar3,PTR_s_build___InventoryCommon_atlas_10184e108,
                "inventory_hero_portrait_frame_standard");
  uVar9 = *(uint *)((long)param_1 + 0x11c4);
  if ((uVar9 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x11c4) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x3300;
    FUN_1000200a0(plVar3);
  }
  FUN_1002af448(param_1);
  return param_1;
}
