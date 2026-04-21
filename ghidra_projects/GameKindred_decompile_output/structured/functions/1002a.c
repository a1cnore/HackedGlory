// functions/1002a — 345 functions
#include "GameKindred.h"




void FUN_1002a026c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002a0278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
  return;
}




void FUN_1002a027c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002a0288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0xb8))();
  return;
}




void FUN_1002a028c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002a0298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
  return;
}




void FUN_1002a029c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002a02a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))();
  return;
}




void FUN_1002a02ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1002a0460(param_1,param_4);
  return;
}




void FUN_1002a02b8(long param_1)

{
  FUN_10064e47c(param_1 + 0x4d60);
  FUN_1002a02e4(param_1);
  return;
}




void FUN_1002a02e4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  FUN_10064e72c(0x41200000,param_1 + 0x1d3,3,param_1 + 0x43,1);
  plVar2 = param_1 + 0x363;
  FUN_10064e72c(0x41200000,plVar2,3,param_1 + 0x1d3,1);
  FUN_10064e72c(0x41200000,param_1 + 0x4f3,3,plVar2,1);
  plVar1 = param_1 + 0x18;
  FUN_1006557ec(plVar1);
  FUN_10064e5ec(0xc1200000,0,param_1 + 0x8d8,8,plVar2,1);
  fVar4 = 10.0;
  FUN_10064e68c(0,0x41200000,plVar1,4);
  (**(code **)(*param_1 + 0x48))(param_1);
  fVar5 = fVar4;
  FUN_10064e3cc(plVar1);
  uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
  FUN_10064e47c(uVar3,(fVar4 + -20.0) - fVar5,param_1 + 0x683);
  FUN_10064e72c(0,param_1 + 0x683,2,param_1,2);
  return;
}




void FUN_1002a0408(long param_1)

{
  FUN_10017bf54(param_1 + 0x3418);
  FUN_10017bf04(param_1 + 0x3418);
  return;
}




void FUN_1002a0434(long param_1)

{
  FUN_10017bf1c(param_1 + 0x3418);
  FUN_10017bee0(param_1 + 0x3418);
  return;
}




void FUN_1002a0460(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_100644b2c(param_2);
  if (plVar1 != (long *)0x0) {
    FUN_10021a8ec(plVar1,1);
    if (*(char *)((long)plVar1 + 0x17) < '\0') {
      plVar1 = (long *)*plVar1;
    }
    FUN_100104dd8(plVar1);
    return;
  }
  return;
}




void thunk_FUN_1002a04c4(void)

{
  FUN_1002a04c4();
  return;
}




void FUN_1002a04b0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002a04c4();
  operator_delete(pvVar1);
  return;
}




void FUN_1002a04c4(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002a04c4_1014814e8;
  FUN_10064e2bc(param_1 + 0x9ac);
  param_1[0x8d8] = &PTR_FUN_101461c58;
  thunk_FUN_1000160a0(param_1 + 0x9a4);
  thunk_FUN_100651068(param_1 + 0x97d);
  thunk_FUN_100651068(param_1 + 0x957);
  thunk_FUN_100651068(param_1 + 0x931);
  param_1[0x913] = &PTR_FUN_1014a7108;
  param_1[0x92a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x92d);
  FUN_10064e2bc(param_1 + 0x913);
  param_1[0x8e9] = &PTR_FUN_1014a6db0;
  param_1[0x900] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x903);
  FUN_10064e2bc(param_1 + 0x8e9);
  FUN_10064221c(param_1 + 0x8d8);
  FUN_10017cba8(param_1 + 0x683);
  param_1[0x4f3] = &PTR_FUN_10148b6d0;
  param_1[0x665] = &PTR_FUN_1014a7108;
  param_1[0x67c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x67f);
  FUN_10064e2bc(param_1 + 0x665);
  param_1[0x63a] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x651);
  FUN_10064e2bc(param_1 + 0x63a);
  thunk_FUN_100651068(param_1 + 0x614);
  FUN_1002ebc50(param_1 + 0x4f3);
  param_1[0x363] = &PTR_FUN_10148b6d0;
  param_1[0x4d5] = &PTR_FUN_1014a7108;
  param_1[0x4ec] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4ef);
  FUN_10064e2bc(param_1 + 0x4d5);
  param_1[0x4aa] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x4c1);
  FUN_10064e2bc(param_1 + 0x4aa);
  thunk_FUN_100651068(param_1 + 0x484);
  FUN_1002ebc50(param_1 + 0x363);
  param_1[0x1d3] = &PTR_FUN_10148b6d0;
  param_1[0x345] = &PTR_FUN_1014a7108;
  param_1[0x35c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x35f);
  FUN_10064e2bc(param_1 + 0x345);
  param_1[0x31a] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x331);
  FUN_10064e2bc(param_1 + 0x31a);
  thunk_FUN_100651068(param_1 + 0x2f4);
  FUN_1002ebc50(param_1 + 0x1d3);
  param_1[0x43] = &PTR_FUN_10148b6d0;
  param_1[0x1b5] = &PTR_FUN_1014a7108;
  param_1[0x1cc] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1cf);
  FUN_10064e2bc(param_1 + 0x1b5);
  param_1[0x18a] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x1a1);
  FUN_10064e2bc(param_1 + 0x18a);
  thunk_FUN_100651068(param_1 + 0x164);
  FUN_1002ebc50(param_1 + 0x43);
  param_1[0x18] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x2f);
  FUN_10064e2bc(param_1 + 0x18);
  FUN_10064e2bc(param_1);
  return;
}




long * FUN_1002a0778(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar6 = (undefined8 *)FUN_1002fc4c4();
  puVar6[0x137] = 0;
  *puVar6 = &PTR_thunk_FUN_1002a0c60_101481630;
  puVar6 = puVar6 + 0x138;
  FUN_1006421a8(puVar6);
  param_1[0x138] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x149;
  thunk_FUN_1001cd1dc(plVar1);
  plVar9 = param_1 + 0x174;
  thunk_FUN_100650e64(plVar9);
  FUN_10064e264(param_1 + 0x19a);
  plVar8 = param_1 + 0x1b1;
  thunk_FUN_100650e64(plVar8);
  plVar2 = param_1 + 0x1d7;
  thunk_FUN_1002eca3c(plVar2,0);
  plVar4 = param_1 + 800;
  FUN_10064e264(plVar4);
  lVar10 = 0;
  do {
    FUN_1002a1300((long)param_1 + lVar10 + 0x19b8);
    lVar10 = lVar10 + 0x4f0;
  } while (lVar10 != 0x18b0);
  (**(code **)(*param_1 + 0x78))(param_1,puVar6,1);
  FUN_100642bd8(puVar6,plVar1,1);
  plVar3 = param_1 + 0x94;
  (**(code **)(param_1[0x94] + 0x78))(plVar3,plVar9,1);
  (**(code **)(param_1[0x94] + 0x78))(plVar3,plVar8,1);
  (**(code **)(param_1[0x94] + 0x78))(plVar3,plVar4,1);
  (**(code **)(param_1[0x7d] + 0x78))(param_1 + 0x7d,plVar2,1);
  FUN_100651038(plVar9,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  FUN_100651460(plVar9,&DAT_101158878);
  uVar7 = FUN_1004e0150("MENU_HERO_CHEST_TILE_TITLE",0);
  FUN_1006513c0(plVar9,uVar7);
  uVar5 = *(uint *)((long)param_1 + 0xc24);
  if ((uVar5 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0xc24) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x7280;
    FUN_1000200a0(plVar9);
  }
  FUN_100651038(plVar8,PTR_s_build___Fonts_Brandon_Regular_60_10184e208);
  local_90 = (code *)CONCAT44(local_90._4_4_,0xffddc2a9);
  FUN_100651460(plVar8,&local_90);
  FUN_1006515e0(plVar8,1);
  FUN_100651764(0xbdcccccd,plVar8);
  uVar7 = FUN_1004e0150("MENU_LANDING_PAGE_SIDEBAR_HERO_CHEST_TILE_TOOLTIP_BODY",0);
  FUN_1006513c0(plVar8,uVar7);
  plVar8 = (long *)thunk_FUN_10064dde8();
  FUN_10064a8f8(plVar8,0xf);
  plVar9 = param_1 + 0x337;
  lVar10 = 5;
  do {
    FUN_100642bd8(plVar4,plVar9,1);
    FUN_1002a0bcc(plVar9,PTR_s_build___MenuPartsCommon_tga_101854970,"hero_chest_slot");
    (**(code **)(*plVar8 + 0x68))(plVar8,plVar9,0,10);
    plVar9 = plVar9 + 0x9e;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  (**(code **)(*plVar8 + 0x78))(plVar8,0,1);
  FUN_10064e524(plVar4,plVar8);
  *(uint *)((long)param_1 + 0xa44) = *(uint *)((long)param_1 + 0xa44) & 0xfffffffb;
  FUN_1002ecc7c(plVar2,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_1002eccb4(plVar2,&DAT_10115a168);
  FUN_1002ebe0c(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_1002ebee0(0x42480000,0x41400000,plVar2);
  local_68 = DAT_101d91884;
  local_90 = FUN_1002a0c2c;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x1d8,&local_90);
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  FUN_1006515d0(plVar1,1);
  if ((*(uint *)((long)param_1 + 0xacc) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0xacc) = *(uint *)((long)param_1 + 0xacc) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar1);
  }
  uVar7 = FUN_1004e0150("MENU_LANDING_PAGE_SIDEBAR_HERO_CHEST_TILE_TIME_TO_AVAILABLE",0);
  FUN_1001cd23c(plVar1,uVar7,1,1);
  FUN_1002fc7a8(param_1,PTR_s_build___Chests_tga_1018549e0,"chest_opulent_closed_tight",
                &DAT_101d91650);
  local_68 = DAT_101dbd48c;
  local_90 = FUN_1002a0c44;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 1,&local_90);
  local_68 = DAT_101dbd460;
  local_90 = FUN_1002a0c44;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 1,&local_90);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  return param_1;
}




void FUN_1002a0bcc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0xb8;
  FUN_100652cac(lVar1);
  FUN_10064e47c(0x432f0000,0x43580000,lVar1);
  uVar2 = FUN_100653144(lVar1);
  FUN_10064e4dc(param_1,uVar2);
  FUN_10064e5b8(param_1,&DAT_101dbd510);
  return;
}




void FUN_1002a0c2c(long param_1)

{
  if (*(undefined8 **)(param_1 + 0x9b8) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001002a0c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 0x9b8))();
    return;
  }
  return;
}




void FUN_1002a0c44(long param_1)

{
  if (*(undefined8 **)(param_1 + 0x9b8) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001002a0c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 0x9b8))();
    return;
  }
  return;
}




long * thunk_FUN_1002a0778(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  code *pcStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar6 = (undefined8 *)FUN_1002fc4c4();
  puVar6[0x137] = 0;
  *puVar6 = &PTR_thunk_FUN_1002a0c60_101481630;
  puVar6 = puVar6 + 0x138;
  FUN_1006421a8(puVar6);
  param_1[0x138] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x149;
  thunk_FUN_1001cd1dc(plVar1);
  plVar9 = param_1 + 0x174;
  thunk_FUN_100650e64(plVar9);
  FUN_10064e264(param_1 + 0x19a);
  plVar8 = param_1 + 0x1b1;
  thunk_FUN_100650e64(plVar8);
  plVar2 = param_1 + 0x1d7;
  thunk_FUN_1002eca3c(plVar2,0);
  plVar4 = param_1 + 800;
  FUN_10064e264(plVar4);
  lVar10 = 0;
  do {
    FUN_1002a1300((long)param_1 + lVar10 + 0x19b8);
    lVar10 = lVar10 + 0x4f0;
  } while (lVar10 != 0x18b0);
  (**(code **)(*param_1 + 0x78))(param_1,puVar6,1);
  FUN_100642bd8(puVar6,plVar1,1);
  plVar3 = param_1 + 0x94;
  (**(code **)(param_1[0x94] + 0x78))(plVar3,plVar9,1);
  (**(code **)(param_1[0x94] + 0x78))(plVar3,plVar8,1);
  (**(code **)(param_1[0x94] + 0x78))(plVar3,plVar4,1);
  (**(code **)(param_1[0x7d] + 0x78))(param_1 + 0x7d,plVar2,1);
  FUN_100651038(plVar9,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  FUN_100651460(plVar9,&DAT_101158878);
  uVar7 = FUN_1004e0150("MENU_HERO_CHEST_TILE_TITLE",0);
  FUN_1006513c0(plVar9,uVar7);
  uVar5 = *(uint *)((long)param_1 + 0xc24);
  if ((uVar5 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0xc24) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x7280;
    FUN_1000200a0(plVar9);
  }
  FUN_100651038(plVar8,PTR_s_build___Fonts_Brandon_Regular_60_10184e208);
  pcStack_90 = (code *)CONCAT44(pcStack_90._4_4_,0xffddc2a9);
  FUN_100651460(plVar8,&pcStack_90);
  FUN_1006515e0(plVar8,1);
  FUN_100651764(0xbdcccccd,plVar8);
  uVar7 = FUN_1004e0150("MENU_LANDING_PAGE_SIDEBAR_HERO_CHEST_TILE_TOOLTIP_BODY",0);
  FUN_1006513c0(plVar8,uVar7);
  plVar8 = (long *)thunk_FUN_10064dde8();
  FUN_10064a8f8(plVar8,0xf);
  plVar9 = param_1 + 0x337;
  lVar10 = 5;
  do {
    FUN_100642bd8(plVar4,plVar9,1);
    FUN_1002a0bcc(plVar9,PTR_s_build___MenuPartsCommon_tga_101854970,"hero_chest_slot");
    (**(code **)(*plVar8 + 0x68))(plVar8,plVar9,0,10);
    plVar9 = plVar9 + 0x9e;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  (**(code **)(*plVar8 + 0x78))(plVar8,0,1);
  FUN_10064e524(plVar4,plVar8);
  *(uint *)((long)param_1 + 0xa44) = *(uint *)((long)param_1 + 0xa44) & 0xfffffffb;
  FUN_1002ecc7c(plVar2,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_1002eccb4(plVar2,&DAT_10115a168);
  FUN_1002ebe0c(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_1002ebee0(0x42480000,0x41400000,plVar2);
  uStack_68 = DAT_101d91884;
  pcStack_90 = FUN_1002a0c2c;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x1d8,&pcStack_90);
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  FUN_1006515d0(plVar1,1);
  if ((*(uint *)((long)param_1 + 0xacc) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0xacc) = *(uint *)((long)param_1 + 0xacc) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar1);
  }
  uVar7 = FUN_1004e0150("MENU_LANDING_PAGE_SIDEBAR_HERO_CHEST_TILE_TIME_TO_AVAILABLE",0);
  FUN_1001cd23c(plVar1,uVar7,1,1);
  FUN_1002fc7a8(param_1,PTR_s_build___Chests_tga_1018549e0,"chest_opulent_closed_tight",
                &DAT_101d91650);
  uStack_68 = DAT_101dbd48c;
  pcStack_90 = FUN_1002a0c44;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_90);
  uStack_68 = DAT_101dbd460;
  pcStack_90 = FUN_1002a0c44;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_90);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  return param_1;
}




void FUN_1002a0c60(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  *param_1 = &PTR_thunk_FUN_1002a0c60_101481630;
  puVar2 = param_1 + 0x5af;
  lVar3 = -0x18b0;
  do {
    lVar1 = FUN_1002a1380(puVar2);
    puVar2 = (undefined8 *)(lVar1 + -0x4f0);
    lVar3 = lVar3 + 0x4f0;
  } while (lVar3 != 0);
  thunk_FUN_10064e2bc(param_1 + 800);
  param_1[0x1d7] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x2f8);
  FUN_1002ebc50(param_1 + 0x1d7);
  thunk_FUN_100651068(param_1 + 0x1b1);
  thunk_FUN_10064e2bc(param_1 + 0x19a);
  thunk_FUN_100651068(param_1 + 0x174);
  param_1[0x149] = &PTR_FUN_10145eb78;
  param_1[0x160] = &PTR_FUN_10145ecf0;
  if ((void *)param_1[0x171] != (void *)0x0) {
    operator_delete__((void *)param_1[0x171]);
    param_1[0x171] = 0;
    param_1[0x170] = 0;
  }
  FUN_100651068(param_1 + 0x149);
  FUN_10064221c(param_1 + 0x138);
  *param_1 = &PTR_FUN_10148d378;
  thunk_FUN_1002fc050(param_1 + 0xab);
  thunk_FUN_10064e2bc(param_1 + 0x94);
  thunk_FUN_10064e2bc(param_1 + 0x7d);
  param_1[0x5f] = &PTR_FUN_1014a7108;
  param_1[0x76] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x79);
  FUN_10064e2bc(param_1 + 0x5f);
  param_1[0x35] = &PTR_FUN_1014a6db0;
  param_1[0x4c] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x4f);
  FUN_10064e2bc(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002a1380(void)

{
  FUN_1002a1380();
  return;
}




void thunk_FUN_1002a0c60(void)

{
  FUN_1002a0c60();
  return;
}




void FUN_1002a0ddc(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002a0c60();
  operator_delete(pvVar1);
  return;
}




void FUN_1002a0df0(long param_1,long param_2)

{
  long local_28;
  
  if ((((*(byte *)(param_1 + 0xa44) >> 2 & 1) != 0) && ((*(byte *)(param_1 + 0xacc) >> 2 & 1) != 0))
     && (local_28 = param_2, FUN_1001cd374(param_1 + 0xa48,&local_28), local_28 < 1)) {
    *(uint *)(param_1 + 0xa44) = *(uint *)(param_1 + 0xa44) & 0xfffffffb;
    FUN_1002fc7b0(param_1,0);
  }
  return;
}




void FUN_1002a0e58(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long local_38;
  
  *(uint *)(param_1 + 0xc24) = *(uint *)(param_1 + 0xc24) & 0xfffffffb;
  *(uint *)(param_1 + 0xd54) = *(uint *)(param_1 + 0xd54) & 0xfffffffb;
  *(uint *)(param_1 + 0xa44) = *(uint *)(param_1 + 0xa44) | 4;
  *(uint *)(param_1 + 0xacc) = *(uint *)(param_1 + 0xacc) | 4;
  local_38 = param_2;
  FUN_1002fc780(param_1,0);
  FUN_1002fc7b0(param_1,1);
  plVar1 = (long *)(param_1 + 0x19b8);
  lVar2 = 5;
  do {
    if ((*(uint *)((long)plVar1 + 0x22c) >> 2 & 1) != 0) {
      *(uint *)((long)plVar1 + 0x22c) = *(uint *)((long)plVar1 + 0x22c) & 0xfffffffb;
      (**(code **)(*plVar1 + 0xe8))(plVar1);
    }
    plVar1 = plVar1 + 0x9e;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  if (0 < param_2) {
    FUN_1001cd374(param_1 + 0xa48,&local_38);
  }
  return;
}




void FUN_1002a0f1c(long param_1,int param_2,uint *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined4 local_40 [2];
  undefined1 *local_38;
  
  *(uint *)(param_1 + 0xc24) = *(uint *)(param_1 + 0xc24) | 4;
  *(uint *)(param_1 + 0xd54) = *(uint *)(param_1 + 0xd54) | 4;
  *(uint *)(param_1 + 0x1984) = *(uint *)(param_1 + 0x1984) | 4;
  *(uint *)(param_1 + 0xa44) = *(uint *)(param_1 + 0xa44) & 0xfffffffb;
  FUN_1002fc780();
  lVar7 = param_1 + 0xeb8;
  uVar4 = 4;
  if (param_2 == 0) {
    uVar4 = 0;
  }
  *(uint *)(param_1 + 0xf3c) = *(uint *)(param_1 + 0xf3c) & 0xfffffffb | uVar4;
  uVar2 = FUN_1004e0150("MENU_DAILY_LOGIN_POPUP_COLLECT_BUTTON",0);
  FUN_1002ecce4(lVar7,uVar2);
  local_40[0] = 0xff5ac8f4;
  FUN_1002ebe4c(lVar7,local_40);
  local_38 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0xeb8) + 0x28))(lVar7,&local_38);
  FUN_1002ecd24(lVar7);
  uVar3 = (ulong)*param_3;
  if (*param_3 != 0) {
    uVar8 = 0;
    lVar7 = param_1 + 0x19b8;
    do {
      FUN_1002a1080(lVar7,*(undefined8 *)(*(long *)(param_3 + 2) + uVar8 * 8),1);
      uVar8 = uVar8 + 1;
      uVar3 = (ulong)*param_3;
      lVar7 = lVar7 + 0x4f0;
    } while (uVar8 < uVar3);
    if (4 < *param_3) {
      return;
    }
  }
  plVar5 = (long *)(param_1 + uVar3 * 0x4f0 + 0x19b8);
  iVar6 = (int)uVar3 + -5;
  do {
    if ((*(uint *)((long)plVar5 + 0x22c) >> 2 & 1) != 0) {
      *(uint *)((long)plVar5 + 0x22c) = *(uint *)((long)plVar5 + 0x22c) & 0xfffffffb;
      (**(code **)(*plVar5 + 0xe8))(plVar5);
    }
    plVar5 = plVar5 + 0x9e;
    bVar1 = iVar6 != -1;
    iVar6 = iVar6 + 1;
  } while (bVar1);
  return;
}




void FUN_1002a1080(long *param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  uint uVar2;
  
  plVar1 = param_1 + 0x35;
  FUN_1002ee480(plVar1);
  FUN_1002ee518(0x43580000,plVar1);
  FUN_10064e3cc(plVar1);
  FUN_10064e47c(param_1 + 0x17);
  FUN_10064e5ec(0,0,plVar1,8,param_1 + 0x17,8);
  if (param_3 != (*(uint *)((long)param_1 + 0x22c) & 4) >> 2) {
    uVar2 = 4;
    if (param_3 == 0) {
      uVar2 = 0;
    }
    *(uint *)((long)param_1 + 0x22c) = *(uint *)((long)param_1 + 0x22c) & 0xfffffffb | uVar2;
                    /* WARNING: Could not recover jumptable at 0x0001002a1124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xe8))(param_1);
    return;
  }
  return;
}




void FUN_1002a1138(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  float fVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_1002fc880();
  FUN_1002fc8c0(param_1,uVar6,param_2);
  plVar1 = param_2 + 0x94;
  plVar2 = param_2 + 0x1b1;
  fVar5 = (float)(**(code **)(param_2[0x94] + 0x48))(plVar1);
  FUN_10065125c(plVar2,(int)fVar5);
  plVar3 = param_2 + 800;
  fVar5 = (float)(**(code **)(param_2[0x94] + 0x48))(plVar1);
  FUN_10064e47c(fVar5 * 0.5,0x42960000,plVar3);
  plVar4 = param_2 + 0x174;
  FUN_10064e5ec(0x41700000,0,plVar4,0,plVar1,0);
  if ((*(byte *)((long)param_2 + 0xe0c) >> 2 & 1) != 0) {
    FUN_10064e72c(0,plVar2,0,plVar4,2);
    FUN_10064e72c(0,plVar2,3,plVar4,3);
    plVar4 = plVar2;
  }
  if ((*(byte *)((long)param_2 + 0x1984) >> 2 & 1) != 0) {
    FUN_10064e72c(0,plVar3,0,plVar4,2);
    FUN_10064e72c(0,plVar3,3,plVar4,3);
  }
  fVar5 = (float)FUN_1002fc880(param_2);
  if (ABS((float)uVar6 - fVar5) <= 1.0) {
    uVar6 = (**(code **)(*param_2 + 0x48))(param_2);
    FUN_10065179c(uVar6,0,0x3f800000,param_2 + 0x149);
    FUN_10064e5ec(0,0,param_2 + 0x149,8,param_2,8);
  }
  else {
    uVar6 = FUN_1002fc880(param_2);
    FUN_10064e47c(param_1,uVar6,param_2);
  }
  FUN_10064e5ec(0,0,param_2 + 0x1d7,8,param_2 + 0x7d,8);
  return;
}




long * FUN_1002a1300(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_thunk_FUN_1002a1380_101481778;
  thunk_FUN_100652c08(puVar1 + 0x17);
  thunk_FUN_1002ee390(param_1 + 0x35);
  (**(code **)(*param_1 + 0x78))(param_1,puVar1 + 0x17,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x35,1);
  return param_1;
}




void FUN_1002a1380(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002a1380_101481778;
  param_1[0x35] = &PTR_FUN_10148b9c0;
  param_1[0x7f] = &PTR_FUN_1014a7108;
  param_1[0x96] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x99);
  FUN_10064e2bc(param_1 + 0x7f);
  param_1[0x5e] = &PTR_FUN_1014a77a8;
  param_1[0x75] = &PTR_FUN_1014a7910;
  thunk_FUN_100657580(param_1 + 0x7c);
  param_1[0x5e] = &PTR_FUN_1014a7108;
  param_1[0x75] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x78);
  FUN_10064e2bc(param_1 + 0x5e);
  param_1[0x35] = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x4c);
  FUN_10064e2bc(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002a1474(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002a1380();
  operator_delete(pvVar1);
  return;
}




void FUN_1002a1488(long param_1)

{
  FUN_10064e5ec(0,0,param_1 + 0x1a8,8,param_1 + 0xb8,8);
  return;
}




long * FUN_1002a14a8(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_100269da8();
  puVar1[0x19] = 0;
  *puVar1 = &PTR_thunk_FUN_1002a152c_1014818c0;
  FUN_10064e20c(puVar1 + 0x1a);
  param_1[0x1a] = (long)&PTR_thunk_FUN_10064e2bc_1014a64d8;
  FUN_10064fc80(param_1 + 0x31);
  FUN_10064fc80(param_1 + 0x35);
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar1 + 0x1a,1);
  return param_1;
}




long * thunk_FUN_1002a14a8(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_100269da8();
  puVar1[0x19] = 0;
  *puVar1 = &PTR_thunk_FUN_1002a152c_1014818c0;
  FUN_10064e20c(puVar1 + 0x1a);
  param_1[0x1a] = (long)&PTR_thunk_FUN_10064e2bc_1014a64d8;
  FUN_10064fc80(param_1 + 0x31);
  FUN_10064fc80(param_1 + 0x35);
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar1 + 0x1a,1);
  return param_1;
}




void FUN_1002a152c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002a152c_1014818c0;
  FUN_1002a1574();
  if ((void *)param_1[0x3a] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3a]);
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
  }
  FUN_10064e2bc(param_1 + 0x1a);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002a1574(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(int *)(param_1 + 0x1c8) != 0) {
    uVar4 = 0;
    do {
      iVar1 = FUN_100642d08(*(undefined8 *)(*(long *)(param_1 + 0x1d0) + uVar4 * 8));
      if (iVar1 != 0) {
        FUN_1006423ec(*(undefined8 *)(*(long *)(param_1 + 0x1d0) + uVar4 * 8),1);
      }
      lVar3 = *(long *)(param_1 + 0x1d0);
      plVar2 = *(long **)(lVar3 + uVar4 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
        lVar3 = *(long *)(param_1 + 0x1d0);
      }
      *(undefined8 *)(lVar3 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x1c8));
  }
  if (*(long *)(param_1 + 0x1d0) != 0) {
    *(undefined4 *)(param_1 + 0x1c8) = 0;
  }
  return;
}




void thunk_FUN_1002a152c(void)

{
  FUN_1002a152c();
  return;
}




void FUN_1002a15fc(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002a152c();
  operator_delete(pvVar1);
  return;
}




void FUN_1002a1610(void)

{
  return;
}




void FUN_1002a1614(long *param_1,int param_2)

{
  if (param_2 != 0) {
    (*(code *)**(undefined8 **)param_1[0x19])((undefined8 *)param_1[0x19],1);
                    /* WARNING: Could not recover jumptable at 0x0001002a1650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x150))(param_1);
    return;
  }
  return;
}




void FUN_1002a1658(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
  (**(code **)(**(long **)(param_1 + 200) + 8))(*(long **)(param_1 + 200),0);
  FUN_1002a1574(param_1);
  return;
}




void FUN_1002a1694(long *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  undefined4 local_48;
  float fStack_44;
  
  if ((int)param_1[0x39] != 0) {
    uVar3 = 0;
    do {
      FUN_10064e47c(DAT_101854af4,DAT_101854af8,*(undefined8 *)(param_1[0x3a] + uVar3 * 8));
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x39));
  }
  fVar6 = DAT_101854af4;
  *(int *)((long)param_1 + 0x1c4) = (int)(*(float *)(param_1 + 0x3b) / DAT_101854af4);
  uVar1 = DAT_101854af8;
  *(float *)(param_1 + 0x35) = fVar6;
  *(undefined4 *)((long)param_1 + 0x1ac) = uVar1;
  *(undefined4 *)(param_1 + 0x37) = 0x3f000000;
  lVar4 = NEON_fmov(0x41200000,4);
  param_1[0x36] = lVar4;
  plVar2 = param_1 + 0x1a;
  (**(code **)(*plVar2 + 0x138))(plVar2,param_1 + 0x35);
  (**(code **)(*plVar2 + 0x90))(plVar2);
  local_48 = FUN_10064e3cc(plVar2);
  fStack_44 = fVar6 + 70.0;
  FUN_10064e48c(plVar2,&local_48);
  uVar5 = (**(code **)(*param_1 + 0x48))(param_1);
  FUN_10064e3cc(plVar2);
  FUN_10064e47c(uVar5,param_1);
  FUN_10064e72c(0,plVar2,4,param_1,4);
  return;
}




void FUN_1002a17bc(long param_1,undefined8 param_2)

{
  void *pvVar1;
  long local_58;
  code *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  undefined4 local_28;
  
  pvVar1 = operator_new(0x1168);
  local_58 = thunk_FUN_10019719c(pvVar1,param_2);
  FUN_1002a184c(param_1 + 0x1c8,&local_58);
  FUN_100642bd8(param_1 + 0xd0,local_58,1);
  uStack_48 = *(undefined8 *)(param_1 + 200);
  local_28 = DAT_101d91884;
  local_50 = FUN_1002a18cc;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = local_58;
  FUN_10001554c(local_58 + 8,&local_50);
  return;
}




void FUN_1002a184c(uint *param_1,undefined8 *param_2)

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
    FUN_1002a19a0(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1002a18cc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0001002a18dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,param_4,param_5);
  return;
}




void FUN_1002a18e0(long param_1,uint param_2,undefined8 param_3)

{
  if ((-1 < (int)param_2) && (param_2 < *(uint *)(param_1 + 0x1c8))) {
    FUN_1001985f0(*(undefined8 *)(*(long *)(param_1 + 0x1d0) + (ulong)param_2 * 8),param_3);
    return;
  }
  return;
}




void FUN_1002a1904(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  if ((-1 < (int)param_2) && (param_2 < *(uint *)(param_1 + 0x1c8))) {
    FUN_10019847c(*(undefined8 *)(*(long *)(param_1 + 0x1d0) + (ulong)param_2 * 8),param_3,param_4,
                  param_5,param_6,param_7);
    return;
  }
  return;
}




void FUN_1002a1938(long param_1,uint param_2,undefined8 param_3)

{
  if ((-1 < (int)param_2) && (param_2 < *(uint *)(param_1 + 0x1c8))) {
    FUN_1001985d4(*(undefined8 *)(*(long *)(param_1 + 0x1d0) + (ulong)param_2 * 8),param_3);
    return;
  }
  return;
}




void FUN_1002a195c(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1c8) != 0) {
    uVar1 = 0;
    do {
      FUN_100198754(*(undefined8 *)(*(long *)(param_1 + 0x1d0) + uVar1 * 8));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x1c8));
  }
  return;
}




void FUN_1002a19a0(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




long * FUN_1002a1a1c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  undefined8 *puVar9;
  long lVar10;
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar9 = (undefined8 *)FUN_10064e20c();
  puVar9[0x17] = 0;
  puVar9[0x18] = 0;
  *puVar9 = &PTR_thunk_FUN_1002a1d30_101481a30;
  puVar9 = puVar9 + 0x19;
  thunk_FUN_1006543ec(puVar9);
  plVar1 = param_1 + 0x4d;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x6b;
  thunk_FUN_1006543ec(plVar2);
  plVar3 = param_1 + 0x9f;
  thunk_FUN_1005357f4(plVar3);
  thunk_FUN_10064f204(param_1 + 0x1e4);
  plVar4 = param_1 + 0x20d;
  thunk_FUN_1006543ec(plVar4);
  plVar5 = param_1 + 0x241;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0x25f;
  thunk_FUN_100652c08(plVar6);
  plVar7 = param_1 + 0x27d;
  thunk_FUN_1001b4d10(plVar7);
  (**(code **)(*param_1 + 0x78))(param_1,puVar9,1);
  FUN_100642bd8(puVar9,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100534ad8(plVar3,param_1 + 0x1e4,1);
  FUN_100642bd8(puVar9,plVar4,1);
  FUN_100642bd8(plVar4,plVar5,1);
  FUN_100642bd8(plVar4,plVar7,1);
  FUN_100642bd8(plVar7,plVar6,1);
  FUN_100654488(puVar9,1);
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  FUN_100652cac(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar5,&DAT_10115a164,2);
  uVar8 = *(uint *)((long)param_1 + 0x128c);
  if ((uVar8 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x128c) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x6c00;
    FUN_1000200a0(plVar5);
  }
  FUN_1001b66dc(0x3f800000,plVar7,"white_background","white_background");
  FUN_1001b5d78(plVar7,&DAT_10115a168,&DAT_10115a168,&DAT_10115a168);
  *(undefined1 *)((long)param_1 + 0x26fc) = 1;
  FUN_1001b6758(plVar7,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
  FUN_1001b5e00(0x44960000,0x42700000,plVar7,0,100,0,1);
  FUN_1001b676c(plVar7);
  FUN_100652cac(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"talent_coinback_glow");
  if ((*(float *)(param_1 + 0x268) != 0.75) || (*(float *)((long)param_1 + 0x1344) != 0.75)) {
    lVar10 = NEON_fmov(0x3f400000,4);
    param_1[0x268] = lVar10;
    FUN_1000200a0(plVar6);
  }
  FUN_100654488(plVar2,1);
  FUN_1005360e4(plVar3,0);
  local_90 = (code *)CONCAT71(local_90._1_7_,9);
  FUN_100534ebc(plVar3,&local_90);
  local_68 = DAT_101d918b8;
  local_90 = FUN_1002a1d24;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0xa0,&local_90);
  return param_1;
}




void FUN_1002a1d24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1002a21b4(param_1,param_4);
  return;
}




long * thunk_FUN_1002a1a1c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  undefined8 *puVar9;
  long lVar10;
  code *pcStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar9 = (undefined8 *)FUN_10064e20c();
  puVar9[0x17] = 0;
  puVar9[0x18] = 0;
  *puVar9 = &PTR_thunk_FUN_1002a1d30_101481a30;
  puVar9 = puVar9 + 0x19;
  thunk_FUN_1006543ec(puVar9);
  plVar1 = param_1 + 0x4d;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x6b;
  thunk_FUN_1006543ec(plVar2);
  plVar3 = param_1 + 0x9f;
  thunk_FUN_1005357f4(plVar3);
  thunk_FUN_10064f204(param_1 + 0x1e4);
  plVar4 = param_1 + 0x20d;
  thunk_FUN_1006543ec(plVar4);
  plVar5 = param_1 + 0x241;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0x25f;
  thunk_FUN_100652c08(plVar6);
  plVar7 = param_1 + 0x27d;
  thunk_FUN_1001b4d10(plVar7);
  (**(code **)(*param_1 + 0x78))(param_1,puVar9,1);
  FUN_100642bd8(puVar9,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100534ad8(plVar3,param_1 + 0x1e4,1);
  FUN_100642bd8(puVar9,plVar4,1);
  FUN_100642bd8(plVar4,plVar5,1);
  FUN_100642bd8(plVar4,plVar7,1);
  FUN_100642bd8(plVar7,plVar6,1);
  FUN_100654488(puVar9,1);
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  FUN_100652cac(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar5,&DAT_10115a164,2);
  uVar8 = *(uint *)((long)param_1 + 0x128c);
  if ((uVar8 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x128c) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x6c00;
    FUN_1000200a0(plVar5);
  }
  FUN_1001b66dc(0x3f800000,plVar7,"white_background","white_background");
  FUN_1001b5d78(plVar7,&DAT_10115a168,&DAT_10115a168,&DAT_10115a168);
  *(undefined1 *)((long)param_1 + 0x26fc) = 1;
  FUN_1001b6758(plVar7,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
  FUN_1001b5e00(0x44960000,0x42700000,plVar7,0,100,0,1);
  FUN_1001b676c(plVar7);
  FUN_100652cac(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"talent_coinback_glow");
  if ((*(float *)(param_1 + 0x268) != 0.75) || (*(float *)((long)param_1 + 0x1344) != 0.75)) {
    lVar10 = NEON_fmov(0x3f400000,4);
    param_1[0x268] = lVar10;
    FUN_1000200a0(plVar6);
  }
  FUN_100654488(plVar2,1);
  FUN_1005360e4(plVar3,0);
  pcStack_90 = (code *)CONCAT71(pcStack_90._1_7_,9);
  FUN_100534ebc(plVar3,&pcStack_90);
  uStack_68 = DAT_101d918b8;
  pcStack_90 = FUN_1002a1d24;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0xa0,&pcStack_90);
  return param_1;
}




void FUN_1002a1d30(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002a1d30_101481a30;
  param_1[0x18] = 0;
  FUN_100196fa4(param_1 + 0x27d);
  param_1[0x25f] = &PTR_FUN_1014a7108;
  param_1[0x276] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x279);
  FUN_10064e2bc(param_1 + 0x25f);
  param_1[0x241] = &PTR_FUN_1014a7108;
  param_1[600] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x25b);
  FUN_10064e2bc(param_1 + 0x241);
  FUN_10064e2bc(param_1 + 0x20d);
  param_1[0x1e4] = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x1fb);
  FUN_10064e2bc(param_1 + 0x1e4);
  thunk_FUN_100534a3c(param_1 + 0x9f);
  FUN_10064e2bc(param_1 + 0x6b);
  param_1[0x4d] = &PTR_FUN_1014a7108;
  param_1[100] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x67);
  FUN_10064e2bc(param_1 + 0x4d);
  FUN_10064e2bc(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002a1d30(void)

{
  FUN_1002a1d30();
  return;
}




void FUN_1002a1e34(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002a1d30();
  operator_delete(pvVar1);
  return;
}




void FUN_1002a1e48(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1001b5918(0x3f000000,param_1 + 0x13e8,param_2,&DAT_10115887c,&DAT_101158880,0,param_3,1);
  FUN_1002a1e94(param_1);
  return;
}




void FUN_1002a1e94(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 local_48;
  float fStack_44;
  
  lVar1 = param_3 + 200;
  local_48 = FUN_10064e3cc(lVar1);
  fStack_44 = (float)param_2;
  FUN_10064e48c(param_3 + 0x268,&local_48);
  lVar3 = param_3 + 0x1068;
  FUN_10064e3cc(lVar1);
  fVar9 = 190.0;
  FUN_10064e47c(lVar3);
  local_48 = FUN_10064e3cc(lVar3);
  fStack_44 = fVar9;
  FUN_10064e48c(param_3 + 0x1208,&local_48);
  iVar4 = FUN_100131560();
  uVar5 = 0;
  if (iVar4 == 0) {
    uVar5 = 4;
  }
  *(uint *)(param_3 + 0x10ec) = *(uint *)(param_3 + 0x10ec) & 0xfffffffb | uVar5;
  local_48 = FUN_10064e3cc(lVar1);
  fStack_44 = fVar9;
  FUN_10064e48c(param_3 + 0x358,&local_48);
  local_48 = FUN_10064e3cc(param_3 + 0x358);
  fStack_44 = fVar9;
  FUN_10064e48c(param_3 + 0x4f8,&local_48);
  lVar2 = param_3 + 0xf20;
  local_48 = FUN_10064e3cc(lVar3);
  fStack_44 = fVar9;
  FUN_10064e48c(lVar2,&local_48);
  uVar6 = *(undefined8 *)(param_3 + 0xc0);
  local_48 = FUN_10064e3cc(lVar1);
  fStack_44 = fVar9;
  FUN_10064e48c(uVar6,&local_48);
  lVar7 = *(long *)(param_3 + 0xc0);
  uVar8 = FUN_10064e3cc(lVar1);
  *(undefined4 *)(lVar7 + 0x1d8) = uVar8;
  (**(code **)(**(long **)(param_3 + 0xc0) + 0x150))();
  lVar1 = param_3 + 0x13e8;
  FUN_10064e3cc(lVar1);
  fVar9 = fVar9 * 0.5;
  FUN_10064e5ec(0,fVar9,lVar1,8,lVar3,8);
  FUN_10064e3cc(lVar1);
  FUN_10064e5ec(0x41f00000,fVar9 * -0.5,param_3 + 0x12f8,5,lVar1,7);
  uVar6 = *(undefined8 *)(param_3 + 0xc0);
  FUN_10064e72c(0,uVar6,0,lVar2,2);
  FUN_10064e72c(0,uVar6,3,lVar2,3);
  if (*(float *)(param_3 + 0x53c) != 0.0) {
    *(undefined4 *)(param_3 + 0x53c) = 0;
    FUN_1000200a0(param_3 + 0x4f8);
  }
  return;
}




void FUN_1002a2084(long param_1)

{
  FUN_1002a1e94();
                    /* WARNING: Could not recover jumptable at 0x0001002a20bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xc0) + 0x138))(0,*(long **)(param_1 + 0xc0),1,4,1);
  return;
}




void FUN_1002a20c0(long param_1,undefined8 param_2)

{
  code *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  *(undefined8 *)(param_1 + 0xc0) = param_2;
  FUN_100534ad8(param_1 + 0x4f8,param_2,1);
  local_28 = FUN_100644a94("UI::USER_SELECTED_HERO");
  uStack_48 = *(undefined8 *)(param_1 + 0xb8);
  local_50 = FUN_1002a2130;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  FUN_10001554c(param_1 + 8,&local_50);
  FUN_1002a1e94(param_1);
  return;
}




void FUN_1002a2130(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0001002a2140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,param_4,param_5);
  return;
}




void FUN_1002a2144(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10021c264(param_2,param_3,0);
  return;
}




void FUN_1002a2154(long param_1)

{
  FUN_10064e47c(param_1 + 200);
  FUN_1002a1e94(param_1);
  return;
}




void FUN_1002a217c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  FUN_1002a195c(*(undefined8 *)(param_1 + 0xc0));
  lVar1 = FUN_100644b2c(param_2);
  if (lVar1 != 0) {
    FUN_100198700();
  }
  FUN_100644b14(param_2);
  return;
}




void FUN_1002a21b4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_100644b2c(param_2);
  if ((iVar1 < 1) && (iVar2 = FUN_100644b2c(param_2), -1 < iVar2)) {
    return;
  }
  FUN_1002a2218(param_1,0 < iVar1);
  return;
}




void FUN_1002a2218(undefined1 param_1 [16],float param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  undefined4 uVar5;
  undefined4 local_58;
  float fStack_54;
  
  lVar1 = param_3 + 0x1068;
  FUN_100642324(lVar1);
  lVar2 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_10063fb5c(puVar4);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  uVar5 = *(undefined4 *)(param_3 + 0x10a8);
  fStack_54 = 0.0;
  if ((param_4 & 1) == 0) {
    FUN_10064e3cc(lVar1);
    fStack_54 = -param_2;
  }
  local_58 = uVar5;
  FUN_10063fb90(puVar4,&local_58);
  FUN_10063f0e8(0x3e19999a,puVar4);
  FUN_100642b14(lVar1,puVar4);
  return;
}




long * FUN_1002a2320(long *param_1)

{
  long *plVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_10064e20c();
  *puVar3 = &PTR_thunk_FUN_1002a2930_101481b80;
  puVar3 = puVar3 + 0x17;
  thunk_FUN_100652c08(puVar3);
  plVar1 = param_1 + 0x35;
  thunk_FUN_100650e64(plVar1);
  *(undefined4 *)(param_1 + 0x5b) = 0xff000000;
  (**(code **)(*param_1 + 0x78))(param_1,puVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100652ca4(puVar3,PTR_s_build___MenuPartsCommon_tga_101854970);
  bVar2 = false;
  if ((*(float *)(param_1 + 0x21) == (float)DAT_101873a40) &&
     (bVar2 = false, !NAN(*(float *)((long)param_1 + 0x10c)) && !NAN(DAT_101873a40._4_4_))) {
    bVar2 = *(float *)((long)param_1 + 0x10c) == DAT_101873a40._4_4_;
  }
  if (!bVar2) {
    param_1[0x21] = CONCAT44(DAT_101873a40._4_4_,(float)DAT_101873a40);
    FUN_1000200a0(puVar3);
  }
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  bVar2 = false;
  if ((*(float *)(param_1 + 0x3f) == (float)DAT_101873a40) &&
     (bVar2 = false, !NAN(*(float *)((long)param_1 + 0x1fc)) && !NAN(DAT_101873a40._4_4_))) {
    bVar2 = *(float *)((long)param_1 + 0x1fc) == DAT_101873a40._4_4_;
  }
  if (!bVar2) {
    param_1[0x3f] = CONCAT44(DAT_101873a40._4_4_,(float)DAT_101873a40);
    FUN_1000200a0(plVar1);
  }
  FUN_10064e47c(0x42800000,0x42800000,param_1);
  return param_1;
}




void FUN_1002a243c(long param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  *(char *)(param_1 + 0x2dc) = (char)param_2;
  puVar1 = (undefined *)(param_1 + 0x2d8);
  if (param_2 == 0) {
    puVar1 = &DAT_101158884;
  }
  FUN_100651460(param_1 + 0x1a8,puVar1);
  uVar4 = 0;
  if (*(char *)(param_1 + 0x2dc) != '\0') {
    uVar4 = 0x3f800000;
  }
  FUN_100652e14(uVar4,param_1 + 0xb8);
  uVar3 = 0x7f;
  if (*(char *)(param_1 + 0x2dc) != '\0') {
    uVar3 = 0xff;
  }
  uVar2 = *(uint *)(param_1 + 0x84);
  if (uVar3 == (uVar2 >> 7 & 0xff)) {
    return;
  }
  *(uint *)(param_1 + 0x84) = uVar2 & 0xffff8000 | uVar2 & 0x7f | uVar3 << 7;
  FUN_1000200a0(param_1);
  return;
}




void FUN_1002a24d0(long param_1)

{
  undefined1 auStack_30 [8];
  void *local_28;
  
  FUN_1004e313c(auStack_30);
  FUN_1004e38ac(auStack_30,"%d");
  FUN_1006513c0(param_1 + 0x1a8,auStack_30);
  FUN_10065179c(0x42080000,0,0x3f800000,param_1 + 0x1a8);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




long * FUN_1002a2548(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1006421a8();
  puVar1[0x11] = 0;
  *puVar1 = &PTR_thunk_FUN_1002a25b8_101481cc8;
  FUN_10064fd54(puVar1 + 0x12,0);
  param_1[0x12] = (long)&PTR_thunk_FUN_10064e2bc_10144caa0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar1 + 0x12,1);
  return param_1;
}




long * thunk_FUN_1002a2548(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1006421a8();
  puVar1[0x11] = 0;
  *puVar1 = &PTR_thunk_FUN_1002a25b8_101481cc8;
  FUN_10064fd54(puVar1 + 0x12,0);
  param_1[0x12] = (long)&PTR_thunk_FUN_10064e2bc_10144caa0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar1 + 0x12,1);
  return param_1;
}




void FUN_1002a25b8(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002a25b8_101481cc8;
  FUN_1002a2600();
  if ((void *)param_1[0x2c] != (void *)0x0) {
    operator_delete__((void *)param_1[0x2c]);
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
  }
  FUN_10064e2bc(param_1 + 0x12);
  FUN_10064221c(param_1);
  return;
}




void FUN_1002a2600(long param_1)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x158);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x160) + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(param_1 + 0x158);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(long *)(param_1 + 0x160) != 0) {
    *(undefined4 *)(param_1 + 0x158) = 0;
  }
  return;
}




void thunk_FUN_1002a25b8(void)

{
  FUN_1002a25b8();
  return;
}




void FUN_1002a2660(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002a25b8();
  operator_delete(pvVar1);
  return;
}




void FUN_1002a2674(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  long *param_5)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_48;
  
  plVar2 = operator_new(0x2e0);
  local_48 = FUN_1002a2320();
  FUN_1002a24d0(local_48,param_3);
  *(undefined4 *)(plVar2 + 0x5b) = *param_4;
  if (*(char *)((long)plVar2 + 0x2dc) != '\0') {
    FUN_100651460(plVar2 + 0x35,plVar2 + 0x5b);
  }
  plVar1 = (long *)*param_5;
  if (-1 < *(char *)((long)param_5 + 0x17)) {
    plVar1 = param_5;
  }
  FUN_100652cdc(plVar2 + 0x17,plVar1);
  FUN_1002a243c(plVar2,param_2);
  (**(code **)(*plVar2 + 0x28))(plVar2,&DAT_101873a40);
  FUN_100642bd8(param_1 + 0x12,plVar2,1);
  FUN_1002a2758(param_1 + 0x2b,&local_48);
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_1002a2758(uint *param_1,undefined8 *param_2)

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
    FUN_1002a28b4(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1002a27d8(long param_1)

{
  long *plVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_50 [16];
  
  fVar4 = 0.0;
  FUN_10064fc74(0,0,0,auStack_50);
  FUN_100650064(param_1 + 0x90,auStack_50);
  (**(code **)(*(long *)(param_1 + 0x90) + 0x90))(param_1 + 0x90);
  if (*(int *)(param_1 + 0x158) != 0) {
    uVar2 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x160) + uVar2 * 8);
      (**(code **)(*plVar1 + 0x48))(plVar1);
      fVar3 = fVar4 * 0.5;
      fVar4 = *(float *)((long)plVar1 + 0x44);
      if (fVar4 != fVar3) {
        *(float *)((long)plVar1 + 0x44) = fVar3;
        FUN_1000200a0(plVar1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x158));
  }
  return;
}




void FUN_1002a2894(long param_1)

{
  FUN_10064e3cc(param_1 + 0x90);
  return;
}




void thunk_FUN_1002a2930(void)

{
  FUN_1002a2930();
  return;
}




void FUN_1002a28a0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002a2930();
  operator_delete(pvVar1);
  return;
}




void FUN_1002a28b4(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_1002a2930(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002a2930_101481b80;
  thunk_FUN_100651068(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




undefined8 * FUN_1002a2990(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064f204();
  *puVar1 = &PTR_FUN_1014822b8;
  puVar1[0x29] = 0;
  FUN_10014f4a0(puVar1 + 0x2a);
  *param_1 = &PTR_thunk_FUN_1002a2b84_101481dc8;
  param_1[0x2a] = &PTR_FUN_101481f20;
  thunk_FUN_1006421a8(param_1 + 0x2d);
  thunk_FUN_1006543ec(param_1 + 0x3e);
  thunk_FUN_100652c08(param_1 + 0x72);
  thunk_FUN_100652c08(param_1 + 0x90);
  thunk_FUN_100652c08(param_1 + 0xae);
  FUN_10064e264(param_1 + 0xcc);
  FUN_1006421a8(param_1 + 0xe3);
  param_1[0xe3] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100196858(param_1 + 0xf4);
  thunk_FUN_100181304(param_1 + 0xe16,0);
  FUN_10064e264(param_1 + 0x10cd);
  thunk_FUN_100652c08(param_1 + 0x10e4);
  FUN_10064fd54(param_1 + 0x1102,0);
  param_1[0x1102] = &PTR_thunk_FUN_10064e2bc_10144caa0;
  thunk_FUN_100650e64(param_1 + 0x111b);
  thunk_FUN_100181304(param_1 + 0x1141,0);
  thunk_FUN_100183160(param_1 + 0x13f8,0);
  thunk_FUN_100183160(param_1 + 0x1884,0);
  FUN_1006421a8(param_1 + 0x1d10);
  param_1[0x1d10] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100195510(param_1 + 0x1d21);
  thunk_FUN_100183990(param_1 + 0x26d4,0);
  thunk_FUN_100183990(param_1 + 0x2792,0);
  thunk_FUN_1006543ec(param_1 + 0x2850);
  FUN_10053077c(param_1 + 0x2884,0);
  thunk_FUN_100183990(param_1 + 0x292b,0);
  thunk_FUN_10023e148(param_1 + 0x29e9);
  thunk_FUN_10023fafc(param_1 + 0x3942);
  *(undefined1 *)((long)param_1 + 0x1fdf1) = 0;
  thunk_FUN_100208ac8(param_1 + 0x3fc0);
  FUN_100217b60(param_1 + 0x3fc7);
  return param_1;
}




undefined8 * thunk_FUN_1002a2990(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064f204();
  *puVar1 = &PTR_FUN_1014822b8;
  puVar1[0x29] = 0;
  FUN_10014f4a0(puVar1 + 0x2a);
  *param_1 = &PTR_thunk_FUN_1002a2b84_101481dc8;
  param_1[0x2a] = &PTR_FUN_101481f20;
  thunk_FUN_1006421a8(param_1 + 0x2d);
  thunk_FUN_1006543ec(param_1 + 0x3e);
  thunk_FUN_100652c08(param_1 + 0x72);
  thunk_FUN_100652c08(param_1 + 0x90);
  thunk_FUN_100652c08(param_1 + 0xae);
  FUN_10064e264(param_1 + 0xcc);
  FUN_1006421a8(param_1 + 0xe3);
  param_1[0xe3] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100196858(param_1 + 0xf4);
  thunk_FUN_100181304(param_1 + 0xe16,0);
  FUN_10064e264(param_1 + 0x10cd);
  thunk_FUN_100652c08(param_1 + 0x10e4);
  FUN_10064fd54(param_1 + 0x1102,0);
  param_1[0x1102] = &PTR_thunk_FUN_10064e2bc_10144caa0;
  thunk_FUN_100650e64(param_1 + 0x111b);
  thunk_FUN_100181304(param_1 + 0x1141,0);
  thunk_FUN_100183160(param_1 + 0x13f8,0);
  thunk_FUN_100183160(param_1 + 0x1884,0);
  FUN_1006421a8(param_1 + 0x1d10);
  param_1[0x1d10] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100195510(param_1 + 0x1d21);
  thunk_FUN_100183990(param_1 + 0x26d4,0);
  thunk_FUN_100183990(param_1 + 0x2792,0);
  thunk_FUN_1006543ec(param_1 + 0x2850);
  FUN_10053077c(param_1 + 0x2884,0);
  thunk_FUN_100183990(param_1 + 0x292b,0);
  thunk_FUN_10023e148(param_1 + 0x29e9);
  thunk_FUN_10023fafc(param_1 + 0x3942);
  *(undefined1 *)((long)param_1 + 0x1fdf1) = 0;
  thunk_FUN_100208ac8(param_1 + 0x3fc0);
  FUN_100217b60(param_1 + 0x3fc7);
  return param_1;
}




void FUN_1002a2b84(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002a2b84_101481dc8;
  param_1[0x2a] = &PTR_FUN_101481f20;
  FUN_1001e333c();
  thunk_FUN_100217bb0(param_1 + 0x3fc7);
  thunk_FUN_100208b4c(param_1 + 0x3fc0);
  FUN_100240838(param_1 + 0x3942);
  FUN_10023f914(param_1 + 0x29e9);
  param_1[0x292b] = &PTR_FUN_10145f300;
  param_1[0x29c5] = &PTR_FUN_1014a7108;
  param_1[0x29dc] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x29df);
  FUN_10064e2bc(param_1 + 0x29c5);
  param_1[0x29a7] = &PTR_FUN_1014a7108;
  param_1[0x29be] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x29c1);
  FUN_10064e2bc(param_1 + 0x29a7);
  param_1[0x2989] = &PTR_FUN_1014a7108;
  param_1[0x29a0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x29a3);
  FUN_10064e2bc(param_1 + 0x2989);
  FUN_10064221c(param_1 + 0x2978);
  FUN_10003bec8(param_1 + 0x292b);
  thunk_FUN_100530784(param_1 + 0x2884);
  FUN_10064e2bc(param_1 + 0x2850);
  param_1[0x2792] = &PTR_FUN_10145f300;
  param_1[0x282c] = &PTR_FUN_1014a7108;
  param_1[0x2843] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2846);
  FUN_10064e2bc(param_1 + 0x282c);
  param_1[0x280e] = &PTR_FUN_1014a7108;
  param_1[0x2825] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2828);
  FUN_10064e2bc(param_1 + 0x280e);
  param_1[0x27f0] = &PTR_FUN_1014a7108;
  param_1[0x2807] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x280a);
  FUN_10064e2bc(param_1 + 0x27f0);
  FUN_10064221c(param_1 + 0x27df);
  FUN_10003bec8(param_1 + 0x2792);
  param_1[0x26d4] = &PTR_FUN_10145f300;
  param_1[0x276e] = &PTR_FUN_1014a7108;
  param_1[0x2785] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2788);
  FUN_10064e2bc(param_1 + 0x276e);
  param_1[0x2750] = &PTR_FUN_1014a7108;
  param_1[0x2767] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x276a);
  FUN_10064e2bc(param_1 + 0x2750);
  param_1[0x2732] = &PTR_FUN_1014a7108;
  param_1[0x2749] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x274c);
  FUN_10064e2bc(param_1 + 0x2732);
  FUN_10064221c(param_1 + 0x2721);
  FUN_10003bec8(param_1 + 0x26d4);
  thunk_FUN_1001958d8(param_1 + 0x1d21);
  FUN_10064221c(param_1 + 0x1d10);
  FUN_1001843c8(param_1 + 0x1884);
  FUN_1001843c8(param_1 + 0x13f8);
  FUN_10003bd40(param_1 + 0x1141);
  thunk_FUN_100651068(param_1 + 0x111b);
  FUN_10064e2bc(param_1 + 0x1102);
  param_1[0x10e4] = &PTR_FUN_1014a7108;
  param_1[0x10fb] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x10fe);
  FUN_10064e2bc(param_1 + 0x10e4);
  thunk_FUN_10064e2bc(param_1 + 0x10cd);
  FUN_10003bd40(param_1 + 0xe16);
  thunk_FUN_100196a8c(param_1 + 0xf4);
  FUN_10064221c(param_1 + 0xe3);
  thunk_FUN_10064e2bc(param_1 + 0xcc);
  param_1[0xae] = &PTR_FUN_1014a7108;
  param_1[0xc5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 200);
  FUN_10064e2bc(param_1 + 0xae);
  param_1[0x90] = &PTR_FUN_1014a7108;
  param_1[0xa7] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xaa);
  FUN_10064e2bc(param_1 + 0x90);
  param_1[0x72] = &PTR_FUN_1014a7108;
  param_1[0x89] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8c);
  FUN_10064e2bc(param_1 + 0x72);
  FUN_10064e2bc(param_1 + 0x3e);
  FUN_10064230c(param_1 + 0x2d);
  FUN_10014f51c(param_1 + 0x2a);
  *param_1 = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002a2b84(void)

{
  FUN_1002a2b84();
  return;
}




void FUN_1002a2f38(long param_1)

{
  FUN_1002a2b84(param_1 + -0x150);
  return;
}




void FUN_1002a2f40(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002a2b84();
  operator_delete(pvVar1);
  return;
}




void FUN_1002a2f54(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002a2b84(param_1 + -0x150);
  operator_delete(pvVar1);
  return;
}




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




void thunk_FUN_1002a56cc(long param_1)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  void *pvStack_f8;
  void *pvStack_f0;
  undefined1 auStack_e8 [7];
  char cStack_e1;
  void *pvStack_e0;
  void *pvStack_d0;
  char cStack_b9;
  void *pvStack_b8;
  char cStack_a1;
  undefined8 uStack_9c;
  undefined4 uStack_94;
  void *pvStack_90;
  char cStack_79;
  undefined1 auStack_70 [8];
  void *pvStack_68;
  undefined1 auStack_60 [8];
  void *pvStack_58;
  undefined1 auStack_50 [8];
  void *pvStack_48;
  undefined1 auStack_40 [8];
  void *pvStack_38;
  
  lVar4 = FUN_10015d3ec();
  if ((*(char *)(lVar4 + 0x567c) != '\0') &&
     ((iVar3 = FUN_10016c2fc(), iVar3 == 0 || (lVar4 = FUN_10016c2f0(), *(int *)(lVar4 + 0x38) < 1))
     )) {
    uVar5 = FUN_1004e0150("MARKET_MUST_REGISTER_DIALOG_TITLE",0);
    uVar7 = FUN_1004e0150("MARKET_MUST_REGISTER_DIALOG_TEXT",0);
    uVar8 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    FUN_1001e3090(uVar5,uVar7,uVar8,0,0);
    return;
  }
  plVar1 = (long *)(param_1 + 0x1fde8);
  uVar2 = *(uint *)(*plVar1 + 0x78);
  lVar4 = FUN_10015d3ec();
  if (*(uint *)(lVar4 + 0x5454) < uVar2) {
    thunk_FUN_1001ad400(&pvStack_f8);
    uVar5 = FUN_1004e0150("MENU_MARKET_GLORY_PURCHASE_POPUP_TITLE",0);
    thunk_FUN_1004e439c(auStack_40,uVar5);
    FUN_1000153b4(auStack_e8,auStack_40);
    pvStack_f8 = (void *)0x447a000044c80000;
    uStack_94 = 1;
    FUN_1001ad494(&pvStack_f8,PTR_s_build___MenuPartsCommon_tga_101854970,"popup_fill",
                  &DAT_101158890);
    uStack_9c = 0xffa3781effa4781e;
    lVar4 = FUN_1000eb768(PTR_s_MENU_CURRENCY_PURCHASE_POPUP_101854ac0,&pvStack_f8);
    iVar3 = FUN_10016c2fc();
    if ((iVar3 != 0) && (lVar6 = FUN_10016c2f0(), 0 < *(int *)(lVar6 + 0x38))) {
      *(undefined1 *)(lVar4 + 0x186c) = 0;
    }
    FUN_10021fea0(lVar4,0);
    if (pvStack_38 != (void *)0x0) {
      operator_delete__(pvStack_38);
    }
    if (cStack_79 < '\0') {
      operator_delete(pvStack_90);
    }
    if (cStack_a1 < '\0') {
      operator_delete(pvStack_b8);
    }
    pvStack_38 = pvStack_e0;
    if (cStack_b9 < '\0') {
      operator_delete(pvStack_d0);
      pvStack_38 = pvStack_e0;
    }
  }
  else {
    uVar5 = FUN_1004e0150("HERO_HUB_DIALOG_UNLOCKHERO_SILVER_TITLE",0);
    thunk_FUN_1004e439c(auStack_40,uVar5);
    uVar5 = FUN_1004e0150("HERO_HUB_DIALOG_UNLOCKHERO_SILVER_MSG",0);
    thunk_FUN_1004e439c(auStack_50,uVar5);
    FUN_1000f0994(&pvStack_f8,*(undefined4 *)(*plVar1 + 0x78));
    FUN_1004e3170(auStack_60,&pvStack_f8);
    if (cStack_e1 < '\0') {
      operator_delete(pvStack_f8);
    }
    lVar4 = FUN_10015d3ec();
    FUN_1000f0994(&pvStack_f8,*(undefined4 *)(lVar4 + 0x5454));
    FUN_1004e3170(auStack_70,&pvStack_f8);
    if (cStack_e1 < '\0') {
      operator_delete(pvStack_f8);
    }
    FUN_1004e3120(&pvStack_f8,"[HERO_NAME]");
    FUN_1004e3bc4(auStack_40,0,&pvStack_f8,*plVar1 + 0x28);
    if (pvStack_f0 != (void *)0x0) {
      operator_delete__(pvStack_f0);
    }
    FUN_1004e3120(&pvStack_f8,"[HERO_NAME]");
    FUN_1004e3bc4(auStack_50,0,&pvStack_f8,*plVar1 + 0x28);
    if (pvStack_f0 != (void *)0x0) {
      operator_delete__(pvStack_f0);
    }
    FUN_1004e3120(&pvStack_f8,"[UNLOCK_AMOUNT]");
    FUN_1004e3bc4(auStack_50,0,&pvStack_f8,auStack_60);
    if (pvStack_f0 != (void *)0x0) {
      operator_delete__(pvStack_f0);
    }
    FUN_1004e3120(&pvStack_f8,"[BALANCE_AMOUNT]");
    FUN_1004e3bc4(auStack_50,0,&pvStack_f8,auStack_70);
    if (pvStack_f0 != (void *)0x0) {
      operator_delete__(pvStack_f0);
    }
    lVar4 = FUN_10016c2f0();
    if (*(int *)(lVar4 + 0x38) < 1) {
      uVar5 = FUN_1004e0150("HERO_HUB_DIALOG_UNLOCKHERO_SILVER_ACCEPT",0);
      puVar9 = (undefined8 *)FUN_1004e0150("HERO_HUB_DIALOG_UNLOCKHERO_SILVER_REJECT",0);
    }
    else {
      uVar5 = FUN_10002f320();
      FUN_100030cf0(uVar5,&DAT_101d91198);
      uVar5 = FUN_1004e0150("HERO_HUB_DIALOG_UNLOCKHERO_SILVER_ACCEPT",0);
      puVar9 = &DAT_101d91650;
    }
    FUN_1001e31c8(auStack_40,auStack_50,uVar5,puVar9,&DAT_101d91650,param_1,thunk_FUN_1002a4cd4,0,0)
    ;
    if (pvStack_68 != (void *)0x0) {
      operator_delete__(pvStack_68);
    }
    if (pvStack_58 != (void *)0x0) {
      operator_delete__(pvStack_58);
    }
    if (pvStack_48 != (void *)0x0) {
      operator_delete__(pvStack_48);
    }
  }
  if (pvStack_38 != (void *)0x0) {
    operator_delete__(pvStack_38);
  }
  return;
}




void thunk_FUN_1002a5ad0(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_b8 [8];
  void *pvStack_b0;
  undefined8 auStack_a8 [2];
  undefined1 auStack_98 [8];
  void *pvStack_90;
  void *pvStack_80;
  char cStack_69;
  void *pvStack_68;
  char cStack_51;
  undefined8 uStack_4c;
  undefined4 uStack_44;
  void *pvStack_40;
  char cStack_29;
  
  lVar3 = FUN_10015d3ec();
  if ((*(char *)(lVar3 + 0x567c) != '\0') &&
     ((iVar2 = FUN_10016c2fc(), iVar2 == 0 || (lVar3 = FUN_10016c2f0(), *(int *)(lVar3 + 0x38) < 1))
     )) {
    uVar4 = FUN_1004e0150("MARKET_MUST_REGISTER_DIALOG_TITLE",0);
    uVar5 = FUN_1004e0150("MARKET_MUST_REGISTER_DIALOG_TEXT",0);
    uVar6 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    FUN_1001e3090(uVar4,uVar5,uVar6,0,0);
    return;
  }
  uVar1 = *(uint *)(*(long *)(param_1 + 0x1fde8) + 0x98);
  lVar3 = FUN_10015d3ec();
  if (*(uint *)(lVar3 + 0x5450) < uVar1) {
    thunk_FUN_1001ad400(auStack_a8);
    uVar4 = FUN_1004e0150("MENU_MARKET_ICE_PURCHASE_POPUP_TITLE",0);
    thunk_FUN_1004e439c(auStack_b8,uVar4);
    FUN_1000153b4(auStack_98,auStack_b8);
    auStack_a8[0] = 0x447a000044c80000;
    uStack_44 = 1;
    FUN_1001ad494(auStack_a8,PTR_s_build___MenuPartsCommon_tga_101854970,"popup_fill",&DAT_101158890
                 );
    uStack_4c = 0xffa3781effa4781e;
    uVar4 = FUN_1000eb768(PTR_s_MENU_CURRENCY_PURCHASE_POPUP_101854ac0,auStack_a8);
    FUN_10021fea0(uVar4,1);
    if (pvStack_b0 != (void *)0x0) {
      operator_delete__(pvStack_b0);
    }
    if (cStack_29 < '\0') {
      operator_delete(pvStack_40);
    }
    if (cStack_51 < '\0') {
      operator_delete(pvStack_68);
    }
    if (cStack_69 < '\0') {
      operator_delete(pvStack_80);
    }
    if (pvStack_90 != (void *)0x0) {
      operator_delete__(pvStack_90);
    }
    return;
  }
  FUN_1004e0150("HERO_HUB_DIALOG_UNLOCKHERO_GOLD_ACCEPT",0);
  FUN_1004e0150("HERO_HUB_DIALOG_UNLOCKHERO_GOLD_REJECT",0);
  FUN_1002a4d74(param_1);
  return;
}




void thunk_FUN_1002a5cac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_1004e0150("MAIN_STARTUP_VALIDATION_DIALOG_CONNECTIONDROPPED_TITLE",0);
  uVar2 = FUN_1004e0150("MAIN_STARTUP_VALIDATION_DIALOG_CONNECTIONDROPPED_MSG",0);
  uVar3 = FUN_1004e0150("MAIN_STARTUP_VALIDATION_DIALOG_CONNECTIONDROPPED_ACCEPT",0);
  FUN_1001e3090(uVar1,uVar2,uVar3,param_1,0);
  return;
}




void FUN_1002a38dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1002a5d1c(param_1,param_4);
  return;
}




void thunk_FUN_1002a5d64(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  void *apvStack_38 [2];
  char cStack_21;
  
  uVar1 = FUN_10002f320();
  plVar2 = (long *)(*(long *)(param_1 + 0x1fde8) + 0xd0);
  if (*(char *)(*(long *)(param_1 + 0x1fde8) + 0xe7) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  FUN_10001549c(apvStack_38,plVar2);
  FUN_1000312cc(uVar1,apvStack_38,&DAT_101d91198,0,0);
  if (cStack_21 < '\0') {
    operator_delete(apvStack_38[0]);
  }
  return;
}




void thunk_FUN_1002a5de0(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  void *apvStack_38 [2];
  char cStack_21;
  
  uVar1 = FUN_10002f320();
  plVar2 = (long *)(*(long *)(param_1 + 0x1fde8) + 0xa0);
  if (*(char *)(*(long *)(param_1 + 0x1fde8) + 0xb7) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  FUN_10001549c(apvStack_38,plVar2);
  FUN_1000312cc(uVar1,apvStack_38,&DAT_101d91198,0,0);
  if (cStack_21 < '\0') {
    operator_delete(apvStack_38[0]);
  }
  return;
}




void FUN_1002a38ec(long param_1)

{
  FUN_1002a4f2c(param_1,0,0xffffffff);
  FUN_1001959c4(param_1 + 0xe908);
  return;
}




void thunk_FUN_1002a5e5c(long param_1)

{
  undefined8 *******pppppppuVar1;
  size_t sVar2;
  ulong uVar3;
  byte bVar4;
  byte *******pppppppbVar5;
  int iVar6;
  undefined8 uVar7;
  void *pvVar8;
  undefined8 *******pppppppuVar9;
  void *pvVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  undefined8 ******ppppppuStack_a8;
  ulong uStack_a0;
  byte bStack_91;
  byte ******ppppppbStack_90;
  size_t sStack_88;
  byte bStack_79;
  undefined8 ******ppppppuStack_78;
  ulong uStack_70;
  byte bStack_61;
  
  iVar6 = FUN_10052ba28();
  if (iVar6 == 0) {
    return;
  }
  FUN_10003330c(&ppppppuStack_78,*(long *)(param_1 + 0x1fde8) + 0xb8);
  FUN_10001549c(&ppppppbStack_90,"[LOC]");
  FUN_100126e3c(&ppppppuStack_a8);
  uVar14 = sStack_88;
  uVar13 = (uint)(char)bStack_79;
  sVar2 = sStack_88;
  pppppppbVar5 = (byte *******)ppppppbStack_90;
  if (-1 < (int)uVar13) {
    sVar2 = (ulong)bStack_79;
    pppppppbVar5 = &ppppppbStack_90;
  }
  pppppppuVar1 = (undefined8 *******)ppppppuStack_78;
  if (-1 < (char)bStack_61) {
    pppppppuVar1 = &ppppppuStack_78;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
LAB_1002a5f64:
    uVar15 = (uint)bStack_91;
    do {
      if (-1 < (char)uVar13) {
        uVar14 = (ulong)(uVar13 & 0xff);
      }
      pppppppuVar1 = (undefined8 *******)ppppppuStack_a8;
      if (-1 < (char)uVar15) {
        pppppppuVar1 = &ppppppuStack_a8;
      }
      std::string::replace
                ((ulong)&ppppppuStack_78,uVar12,(char *)(uVar14 & 0xffffffff),(ulong)pppppppuVar1);
      uVar14 = sStack_88;
      uVar15 = (uint)(char)bStack_91;
      uVar3 = uStack_a0;
      if (-1 < (int)uVar15) {
        uVar3 = (ulong)bStack_91;
      }
      uVar12 = uVar12 + (uVar3 & 0xffffffff);
      uVar13 = (uint)(char)bStack_79;
      sVar2 = sStack_88;
      pppppppbVar5 = (byte *******)ppppppbStack_90;
      if (-1 < (int)uVar13) {
        sVar2 = (ulong)bStack_79;
        pppppppbVar5 = &ppppppbStack_90;
      }
      uVar3 = uStack_70;
      pppppppuVar1 = (undefined8 *******)ppppppuStack_78;
      if (-1 < (char)bStack_61) {
        uVar3 = (ulong)bStack_61;
        pppppppuVar1 = &ppppppuStack_78;
      }
      if (uVar3 < uVar12) break;
      if (sVar2 != 0) {
        pvVar8 = (void *)((long)pppppppuVar1 + uVar12);
        pvVar10 = (void *)((long)pppppppuVar1 + uVar3);
        lVar11 = (long)pvVar10 - (long)pvVar8;
        if (lVar11 < (long)sVar2) break;
        bVar4 = *(byte *)pppppppbVar5;
        while( true ) {
          if ((0xfffffffffffffffe < lVar11 - sVar2) ||
             (pvVar8 = _memchr(pvVar8,(uint)bVar4,(lVar11 - sVar2) + 1), pvVar8 == (void *)0x0))
          goto LAB_1002a5f0c;
          iVar6 = _memcmp(pvVar8,pppppppbVar5,sVar2);
          if (iVar6 == 0) break;
          pvVar8 = (void *)((long)pvVar8 + 1);
          lVar11 = (long)pvVar10 - (long)pvVar8;
          if (lVar11 < (long)sVar2) goto LAB_1002a5f0c;
        }
        if (pvVar8 == pvVar10) break;
        uVar12 = (long)pvVar8 - (long)pppppppuVar1;
      }
    } while (uVar12 != 0xffffffffffffffff);
  }
  else {
    uVar12 = uStack_70;
    if (-1 < (char)bStack_61) {
      uVar12 = (ulong)bStack_61;
    }
    if ((long)sVar2 <= (long)uVar12) {
      pvVar8 = (void *)((long)pppppppuVar1 + uVar12);
      bVar4 = *(byte *)pppppppbVar5;
      pppppppuVar9 = pppppppuVar1;
      do {
        if ((0xfffffffffffffffe < uVar12 - sVar2) ||
           (pvVar10 = _memchr(pppppppuVar9,(uint)bVar4,(uVar12 - sVar2) + 1), pvVar10 == (void *)0x0
           )) break;
        iVar6 = _memcmp(pvVar10,pppppppbVar5,sVar2);
        if (iVar6 == 0) {
          if ((pvVar10 != pvVar8) &&
             (uVar12 = (long)pvVar10 - (long)pppppppuVar1, uVar12 != 0xffffffffffffffff))
          goto LAB_1002a5f64;
          break;
        }
        pppppppuVar9 = (undefined8 *******)((long)pvVar10 + 1);
        uVar12 = (long)pvVar8 - (long)pppppppuVar9;
      } while ((long)sVar2 <= (long)uVar12);
    }
  }
LAB_1002a5f0c:
  if ((char)bStack_91 < '\0') {
    operator_delete(ppppppuStack_a8);
    if (-1 < (char)bStack_79) goto LAB_1002a5f18;
  }
  else if ((uVar13 >> 7 & 1) == 0) goto LAB_1002a5f18;
  operator_delete(ppppppbStack_90);
LAB_1002a5f18:
  uVar7 = FUN_10002f320();
  FUN_1000307d8(uVar7,&ppppppuStack_78,1,1,2);
  if ((char)bStack_61 < '\0') {
    operator_delete(ppppppuStack_78);
  }
  return;
}




void FUN_1002a3920(undefined4 param_1,undefined4 param_2,long *param_3)

{
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_28 = param_1;
  uStack_24 = param_2;
  FUN_10064e48c(param_3,&local_28);
  (**(code **)(*param_3 + 0x138))(param_3);
  return;
}




void FUN_1002a3960(long param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_100195978(param_1 + 0xe908,1);
    FUN_1002a3998(param_1);
    return;
  }
  return;
}




void FUN_1002a3998(long param_1)

{
  uint uVar1;
  
  *(undefined1 *)(param_1 + 0x1fdf0) = 0;
  *(undefined4 *)(param_1 + 0x1fdf4) = 0xffffffff;
  *(uint *)(param_1 + 0x14fcc) = *(uint *)(param_1 + 0x14fcc) & 0xfffffffb;
  *(uint *)(param_1 + 0x1ca94) = *(uint *)(param_1 + 0x1ca94) & 0xfffffffb;
  FUN_100642324(param_1 + 0x14958);
  *(uint *)(param_1 + 0x149dc) = *(uint *)(param_1 + 0x149dc) & 0xfffffffb;
  FUN_100642324(param_1 + 0x718);
  uVar1 = *(uint *)(param_1 + 0x79c);
  if ((~uVar1 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x79c) = uVar1 | 0x7f80;
    FUN_1000200a0(param_1 + 0x718);
    uVar1 = *(uint *)(param_1 + 0x79c);
  }
  *(uint *)(param_1 + 0x79c) = uVar1 | 4;
  if (*(float *)(param_1 + 0x14464) != 0.0) {
    *(float *)(param_1 + 0x14464) = 0.0;
    FUN_1000200a0(param_1 + 0x14420);
  }
  FUN_100530c04(param_1 + 0x14420,0);
  if (*(float *)(param_1 + 0x234) != 0.0) {
    *(undefined4 *)(param_1 + 0x234) = 0;
    FUN_1000200a0(param_1 + 0x1f0);
  }
  FUN_100642324(param_1 + 0x390);
  FUN_100652dd4(param_1 + 0x390,&DAT_10115a168,2);
  if ((~*(uint *)(param_1 + 0x824) & 0x7f80) == 0) {
    return;
  }
  *(uint *)(param_1 + 0x824) = *(uint *)(param_1 + 0x824) | 0x7f80;
  FUN_1000200a0(param_1 + 0x7a0);
  return;
}




void FUN_1002a3af8(long *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  void *local_48 [2];
  char local_31;
  
  FUN_100195978(param_1 + 0x1d21);
  if (param_2 != 0) {
    FUN_1002a3998(param_1);
    FUN_10016c2f0();
    FUN_10016bf28();
    lVar2 = FUN_10016c2f0();
    uVar1 = *(uint *)((long)param_1 + 0x14304);
    uVar4 = (uint)(*(int *)(lVar2 + 0x38) < 1);
    *(uint *)((long)param_1 + 0x14304) = uVar1 & 0xfffffff8 | uVar1 & 3 | uVar4 << 2;
    uVar1 = *(uint *)((long)param_1 + 0xe904);
    *(uint *)((long)param_1 + 0xe904) = uVar1 & 0xfffffff8 | uVar1 & 3 | uVar4 << 2;
                    /* WARNING: Could not recover jumptable at 0x0001002a3b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x138))(param_1);
    return;
  }
  uVar3 = FUN_10002f320();
  FUN_10001549c(local_48,"hero_gold_purchase");
  FUN_100030e80(uVar3,local_48);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  uVar3 = FUN_10002f320();
  FUN_10001549c(local_48,"hero_gold_purchase");
  FUN_100030cf0(uVar3,local_48);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  uVar3 = FUN_10002f320();
  FUN_10001549c(local_48,"hero_silver_purchase");
  FUN_100030e80(uVar3,local_48);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  uVar3 = FUN_10002f320();
  FUN_10001549c(local_48,"hero_silver_purchase");
  FUN_100030cf0(uVar3,local_48);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  return;
}




void FUN_1002a3c74(long *param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1002a3ca8();
                    /* WARNING: Could not recover jumptable at 0x0001002a3ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x138))(param_1);
    return;
  }
  return;
}




void FUN_1002a3ca8(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  char *pcVar4;
  void *local_148 [2];
  char local_131;
  void *local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  long local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined2 local_f4;
  undefined1 local_f2;
  undefined **local_f0;
  undefined1 auStack_e8 [15];
  char local_d9;
  long local_c0;
  undefined8 local_a0;
  void *local_98;
  void *local_90;
  char local_79;
  undefined8 local_60;
  undefined4 local_48;
  undefined1 local_43;
  
  uVar1 = FUN_10002f320();
  uVar2 = FUN_100030b1c(uVar1,&DAT_101d91198);
  if ((uVar2 & 1) != 0) {
    return;
  }
  lVar3 = FUN_10016c2f0();
  if (*(int *)(lVar3 + 0x38) == 4) {
    uVar1 = FUN_10002f320();
    FUN_10001549c(&local_f0,"hero_silver_purchase");
    FUN_100030e80(uVar1,&local_f0);
    if (local_d9 < '\0') {
      operator_delete(local_f0);
    }
    thunk_FUN_1001cd434(&local_f0);
    lVar3 = *(long *)(param_1 + 0x1fde8);
    if (*(char *)(lVar3 + 0x77) < '\0') {
      if (*(long *)(lVar3 + 0x68) == 0) goto LAB_1002a3ef0;
LAB_1002a3f00:
      lVar3 = 0x9fc0;
    }
    else {
      if (*(char *)(lVar3 + 0x77) != '\0') goto LAB_1002a3f00;
LAB_1002a3ef0:
      if (*(char *)(lVar3 + 0x97) < '\0') {
        if (*(long *)(lVar3 + 0x88) != 0) goto LAB_1002a3f00;
      }
      else if (*(char *)(lVar3 + 0x97) != '\0') goto LAB_1002a3f00;
      lVar3 = 0x8a08;
    }
    uVar1 = FUN_1004e0150("MENU_HERO_HUB_TUTORIAL_GLORY_TOOLTIP_MSG",0);
    thunk_FUN_1004e439c(&local_130,uVar1);
    FUN_10003330c(&local_120,&DAT_101d91198);
    local_108 = 1;
    uStack_104 = 0x41a00000;
    uStack_100 = 0;
    FUN_10003c048(auStack_e8,&local_130);
    if (uStack_110._7_1_ < '\0') {
      operator_delete((void *)CONCAT44(uStack_11c,local_120));
    }
    if ((void *)CONCAT44(uStack_124,local_128) != (void *)0x0) {
      operator_delete__((void *)CONCAT44(uStack_124,local_128));
    }
    local_48 = 0;
    local_60 = 0x43fa00003f000000;
    local_43 = 1;
    local_c0 = param_1 + lVar3;
    uVar1 = FUN_10002f320();
    FUN_10001549c(&local_130,"hero_silver_purchase");
    FUN_100030e74(uVar1,&local_130,&local_f0);
    if (uStack_11c._3_1_ < '\0') {
      operator_delete(local_130);
    }
    local_130 = (void *)0x0;
    local_128 = 0;
    uStack_124 = (undefined4)DAT_101dc1cb8;
    local_120 = (undefined4)((ulong)DAT_101dc1cb8 >> 0x20);
    local_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    local_f8 = 0x3f800000;
    local_f4 = 0x100;
    local_f2 = 1;
    uStack_110 = 0;
    local_118 = param_1 + lVar3;
    uVar1 = FUN_10002f320();
    pcVar4 = "hero_silver_purchase";
    goto LAB_1002a4024;
  }
  if (*(int *)(lVar3 + 0x38) != 2) {
    return;
  }
  uVar1 = FUN_10002f320();
  FUN_10001549c(&local_f0,"hero_gold_purchase");
  FUN_100030e80(uVar1,&local_f0);
  if (local_d9 < '\0') {
    operator_delete(local_f0);
  }
  thunk_FUN_1001cd434(&local_f0);
  lVar3 = *(long *)(param_1 + 0x1fde8);
  if (*(char *)(lVar3 + 0x77) < '\0') {
    if (*(long *)(lVar3 + 0x68) == 0) goto LAB_1002a3db0;
LAB_1002a3dc0:
    lVar3 = 0xc420;
  }
  else {
    if (*(char *)(lVar3 + 0x77) != '\0') goto LAB_1002a3dc0;
LAB_1002a3db0:
    if (*(char *)(lVar3 + 0x97) < '\0') {
      if (*(long *)(lVar3 + 0x88) != 0) goto LAB_1002a3dc0;
    }
    else if (*(char *)(lVar3 + 0x97) != '\0') goto LAB_1002a3dc0;
    lVar3 = 0x8a08;
  }
  uVar1 = FUN_1004e0150("MENU_HERO_HUB_TUTORIAL_ICE_TOOLTIP_MSG",0);
  thunk_FUN_1004e439c(&local_130,uVar1);
  FUN_10003330c(&local_120,&DAT_101d91198);
  local_108 = 1;
  uStack_104 = 0x41a00000;
  uStack_100 = 0;
  FUN_10003c048(auStack_e8,&local_130);
  if (uStack_110._7_1_ < '\0') {
    operator_delete((void *)CONCAT44(uStack_11c,local_120));
  }
  if ((void *)CONCAT44(uStack_124,local_128) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_124,local_128));
  }
  local_48 = 0;
  local_60 = 0x43fa00003f333333;
  local_43 = 1;
  local_c0 = param_1 + lVar3;
  uVar1 = FUN_10002f320();
  FUN_10001549c(&local_130,"hero_gold_purchase");
  FUN_100030e74(uVar1,&local_130,&local_f0);
  if (uStack_11c._3_1_ < '\0') {
    operator_delete(local_130);
  }
  local_130 = (void *)0x0;
  local_128 = 0;
  uStack_124 = (undefined4)DAT_101dc1cb8;
  local_120 = (undefined4)((ulong)DAT_101dc1cb8 >> 0x20);
  local_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  local_f8 = 0x3f800000;
  local_f4 = 0x100;
  local_f2 = 1;
  uStack_110 = 0;
  local_118 = param_1 + lVar3;
  uVar1 = FUN_10002f320();
  pcVar4 = "hero_gold_purchase";
LAB_1002a4024:
  FUN_10001549c(local_148,pcVar4);
  FUN_100030c8c(uVar1,local_148,&local_130);
  if (local_131 < '\0') {
    operator_delete(local_148[0]);
  }
  uVar1 = FUN_10002f320();
  FUN_100030818(uVar1,&DAT_101d91198);
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
  return;
}




void FUN_1002a40d0(undefined1 param_1 [16],undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 local_90;
  float local_8c;
  
  iVar7 = FUN_100642d08();
  if (iVar7 != 0) {
    if (param_3[0x3fbd] != 0) {
      plVar4 = param_3 + 0x1102;
      uVar8 = FUN_10015d3ec();
      plVar10 = (long *)param_3[0x3fbd];
      if (*(char *)((long)plVar10 + 0x17) < '\0') {
        plVar10 = (long *)*plVar10;
      }
      uVar8 = FUN_1001665d4(uVar8,plVar10,1);
      FUN_1002a47cc(param_3,uVar8);
      uVar8 = (**(code **)(*param_3 + 0x48))(param_3);
      (**(code **)(*param_3 + 0x48))(param_3);
      plVar10 = param_3 + 0x3e;
      FUN_10064e47c(uVar8,plVar10);
      plVar1 = param_3 + 0x72;
      fVar13 = (float)uVar8;
      FUN_10064e47c(uVar8,fVar13 * 0.75,plVar1);
      plVar2 = param_3 + 0xcc;
      FUN_10064e47c(fVar13 + -40.0,(float)param_2 + -30.0,plVar2);
      if ((*(float *)(param_3 + 0xd4) != 20.0) || (*(float *)((long)param_3 + 0x6a4) != 15.0)) {
        param_3[0xd4] = 0x4170000041a00000;
        FUN_1000200a0(plVar2);
      }
      FUN_10064e47c(fVar13 * 0.5,param_2,param_3 + 0x90);
      FUN_10064e47c(fVar13 * 0.5,param_2,param_3 + 0xae);
      FUN_10064e5ec(0,0,param_3 + 0xae,1,plVar10,1);
      FUN_10064e5ec(0x41c80000,0x41c80000,param_3 + 0xe3,0,plVar2,0);
      plVar3 = param_3 + 0xf4;
      fVar14 = 0.85;
      FUN_100196f78(plVar3);
      local_90 = FUN_1006425d0(plVar3,0,0,1,1);
      local_8c = fVar14;
      FUN_10064e48c(plVar3,&local_90);
      FUN_10064e72c(0x41c80000,param_3 + 0xe16,0,plVar3,2);
      FUN_10064e72c(0,param_3 + 0xe16,3,plVar3,3);
      plVar3 = param_3 + 0x10cd;
      uVar12 = FUN_10064e3cc(plVar2);
      FUN_10064e3cc(plVar2);
      FUN_10064e47c(uVar12,fVar14 * 0.33333334,plVar3);
      FUN_10064e5ec(0,0,plVar3,6,plVar2,6);
      FUN_10064e5ec(0,0,param_3 + 0x1d10,2,plVar3,2);
      plVar2 = param_3 + 0x26d4;
      FUN_10064e5ec(0,0,plVar2,2,param_3 + 0x1d10,2);
      plVar5 = param_3 + 0x2792;
      FUN_10064e72c(0xc1c80000,plVar5,1,plVar2,3);
      FUN_10064e72c(0,plVar5,2,plVar2,2);
      FUN_10064e5ec(0xc2a00000,0,param_3 + 0x1d21,1,plVar5,3);
      FUN_10064fc74(0,0,0x42480000,&local_90);
      FUN_100650064(plVar4,&local_90);
      (**(code **)(*plVar4 + 0x90))(plVar4);
      FUN_10064e5ec(0x41c80000,0xc1c80000,plVar4,3,plVar3,3);
      FUN_10064e72c(0,param_3 + 0x1141,5,plVar4,5);
      FUN_10064e72c(0,param_3 + 0x13f8,5,plVar4,5);
      FUN_10064e72c(0,param_3 + 0x1884,5,plVar4,5);
      FUN_10064e72c(0xc1c80000,param_3 + 0x111b,2,plVar4,0);
      FUN_10064e72c(0,param_3 + 0x111b,3,plVar4,3);
      FUN_10064e47c(uVar8,0x43c80000,param_3 + 0x10e4);
      FUN_10064e5ec(0,0,param_3 + 0x10e4,3,plVar10,3);
      FUN_10064e47c(uVar8,(float)param_2 + -338.0,param_3 + 0x2850);
      FUN_1002a49dc(param_3);
      FUN_100530ad0(0,DAT_101854a7c * 1.5,param_3 + 0x2884);
      FUN_100530b0c(0xc1200000,0x41200000,param_3 + 0x2884);
      fVar14 = DAT_101854a7c * 0.5;
      if ((*(float *)(param_3 + 0x29f1) != DAT_101854a7c * 1.2) ||
         (*(float *)((long)param_3 + 0x14f8c) != fVar14)) {
        *(float *)(param_3 + 0x29f1) = DAT_101854a7c * 1.2;
        *(float *)((long)param_3 + 0x14f8c) = fVar14;
        FUN_1000200a0(param_3 + 0x29e9);
      }
      FUN_10064e47c(fVar13 + DAT_101854a7c * -2.5,param_2,param_3 + 0x29e9);
      fVar14 = DAT_101854a7c * 0.5;
      if ((*(float *)(param_3 + 0x394a) != DAT_101854a7c * 1.2) ||
         (*(float *)((long)param_3 + 0x1ca54) != fVar14)) {
        *(float *)(param_3 + 0x394a) = DAT_101854a7c * 1.2;
        *(float *)((long)param_3 + 0x1ca54) = fVar14;
        FUN_1000200a0(param_3 + 0x3942);
      }
      FUN_10064e47c(fVar13 + DAT_101854a7c * -3.0,param_2,param_3 + 0x3942);
      fVar14 = DAT_101854a78;
      if ((*(float *)(param_3 + 0x2934) != DAT_101854a78) ||
         (*(float *)((long)param_3 + 0x149a4) != DAT_101854a78)) {
        *(float *)(param_3 + 0x2934) = DAT_101854a78;
        *(float *)((long)param_3 + 0x149a4) = fVar14;
        FUN_1000200a0(param_3 + 0x292b);
      }
      fVar14 = DAT_101854a7c;
      fVar13 = fVar13 - DAT_101854a7c;
      if ((*(float *)(param_3 + 0x2933) != fVar13) ||
         (*(float *)((long)param_3 + 0x1499c) != DAT_101854a7c)) {
        *(float *)(param_3 + 0x2933) = fVar13;
        *(float *)((long)param_3 + 0x1499c) = fVar14;
        FUN_1000200a0(param_3 + 0x292b);
      }
      lVar9 = FUN_10032bdf8(**(undefined8 **)(param_3[0x3fbd] + 0x18));
      fVar14 = (float)(**(code **)(*param_3 + 0x48))(param_3);
      (**(code **)(*param_3 + 0x48))(param_3);
      fVar15 = *(float *)(lVar9 + 0x30);
      fVar13 = fVar13 * fVar15;
      if ((*(float *)(param_3 + 0x7a) != fVar14) || (*(float *)((long)param_3 + 0x3d4) != fVar13)) {
        *(float *)(param_3 + 0x7a) = fVar14;
        *(float *)((long)param_3 + 0x3d4) = fVar13;
        FUN_1000200a0(plVar1);
      }
      local_90 = 0x3f800000;
      local_8c = fVar15;
      (**(code **)(*plVar1 + 0x28))(plVar1,&local_90);
      bVar6 = *(byte *)(param_3[0x3fbd] + 0xb7);
      if ((char)bVar6 < '\0') {
        uVar11 = *(ulong *)(param_3[0x3fbd] + 0xa8);
      }
      else {
        uVar11 = (ulong)bVar6;
      }
      FUN_1001b4c0c(plVar2,uVar11 != 0);
      bVar6 = *(byte *)(param_3[0x3fbd] + 0xe7);
      if ((char)bVar6 < '\0') {
        uVar11 = *(ulong *)(param_3[0x3fbd] + 0xd8);
      }
      else {
        uVar11 = (ulong)bVar6;
      }
      FUN_1001b4c0c(plVar5,uVar11 != 0);
    }
    lVar9 = param_3[0x3fc1];
    (**(code **)(*param_3 + 0x48))(param_3);
    FUN_1002d8300(lVar9);
    (**(code **)(*(long *)param_3[0x3fc1] + 0x138))();
    lVar9 = param_3[0x3fc8];
    uVar8 = (**(code **)(*param_3 + 0x48))(param_3);
    FUN_10064e47c(uVar8,0x442f0000,lVar9);
    (**(code **)(*(long *)param_3[0x3fc8] + 0x138))();
  }
  return;
}




void FUN_1002a47cc(long param_1,byte param_2)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  void *local_68 [2];
  char local_51;
  undefined8 local_50;
  void *local_48;
  
  lVar3 = *(long *)(param_1 + 0x1fde8);
  if (*(char *)(lVar3 + 0x77) < '\0') {
    if (*(long *)(lVar3 + 0x68) == 0) goto LAB_1002a4820;
  }
  else if (*(char *)(lVar3 + 0x77) == '\0') {
LAB_1002a4820:
    if ((char)*(byte *)(lVar3 + 0x97) < '\0') {
      uVar4 = *(ulong *)(lVar3 + 0x88);
    }
    else {
      uVar4 = (ulong)*(byte *)(lVar3 + 0x97);
    }
    bVar1 = uVar4 == 0;
    goto LAB_1002a483c;
  }
  bVar1 = false;
LAB_1002a483c:
  uVar2 = 4;
  if ((*(char *)(param_1 + 0x1fdf1) == '\0' & (param_2 ^ 1)) == 0) {
    uVar2 = 0;
  }
  *(uint *)(param_1 + 0x895c) = uVar2 | *(uint *)(param_1 + 0x895c) & 0xfffffffb;
  *(uint *)(param_1 + 0x8894) = *(uint *)(param_1 + 0x8894) & 0xfffffffb | uVar2;
  if ((param_2 & 1) == 0) {
    if (*(char *)(param_1 + 0x1fdf1) == '\0') {
      if ((char)*(byte *)(lVar3 + 0x77) < '\0') {
        uVar4 = *(ulong *)(lVar3 + 0x68);
      }
      else {
        uVar4 = (ulong)*(byte *)(lVar3 + 0x77);
      }
      *(uint *)(param_1 + 0xa044) =
           *(uint *)(param_1 + 0xa044) & 0xfffffff8 |
           *(uint *)(param_1 + 0xa044) & 3 | (uint)(uVar4 != 0) << 2;
      if ((char)*(byte *)(lVar3 + 0x97) < '\0') {
        uVar4 = *(ulong *)(lVar3 + 0x88);
      }
      else {
        uVar4 = (ulong)*(byte *)(lVar3 + 0x97);
      }
      uVar2 = (uint)(uVar4 != 0) << 2;
    }
    else {
      uVar2 = 0;
      *(uint *)(param_1 + 0xa044) = *(uint *)(param_1 + 0xa044) & 0xfffffffb;
    }
    *(uint *)(param_1 + 0xc4a4) = *(uint *)(param_1 + 0xc4a4) & 0xfffffffb | uVar2;
    FUN_1000f0994(local_68,*(undefined4 *)(lVar3 + 0x78));
    FUN_1004e3170(&local_50,local_68);
    FUN_100181af8(param_1 + 0x9fc0,&local_50);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
      local_50 = 0;
      local_48 = (void *)0x0;
    }
    if (local_51 < '\0') {
      operator_delete(local_68[0]);
    }
    FUN_1000f0994(local_68,*(undefined4 *)(*(long *)(param_1 + 0x1fde8) + 0x98));
    FUN_1004e3170(&local_50,local_68);
    FUN_100181af8(param_1 + 0xc420,&local_50);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
      local_50 = 0;
      local_48 = (void *)0x0;
    }
    if (local_51 < '\0') {
      operator_delete(local_68[0]);
    }
    uVar2 = 4;
    if (!(bool)(*(char *)(param_1 + 0x1fdf1) == '\0' & bVar1)) {
      uVar2 = 0;
    }
    *(uint *)(param_1 + 0x8a8c) = uVar2 | *(uint *)(param_1 + 0x8a8c) & 0xfffffffb;
    FUN_10064fd88(param_1 + 0x8810);
  }
  FUN_1002a3ca8(param_1);
  return;
}




void FUN_1002a49dc(long *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x48))();
  param_1 = param_1 + 0x2884;
  FUN_100530a48(param_1,1);
  FUN_100530a94(param_1);
  FUN_10053093c(uVar1,param_1);
  return;
}




void FUN_1002a4a38(long *param_1)

{
  uint *puVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)param_1[0x3fbd];
  if (puVar6 == (undefined8 *)0x0) {
    return;
  }
  puVar1 = (uint *)((long)param_1 + 0x7134);
  lVar2 = FUN_10032bdf8(*(undefined8 *)puVar6[3]);
  FUN_1002a4b7c(param_1,*(undefined8 *)(lVar2 + 0x28));
  puVar3 = puVar6;
  if (*(char *)((long)puVar6 + 0x17) < '\0') {
    puVar3 = (undefined8 *)*puVar6;
  }
  FUN_100196cac(param_1 + 0xf4,puVar3,0);
  FUN_1002400e4(param_1 + 0x3942,puVar6[4],puVar6[3]);
  FUN_100195a0c(param_1 + 0x1d21,puVar6[3]);
  if (*(char *)((long)param_1 + 0x1fdf1) == '\0') {
    if ((char)*(byte *)((long)puVar6 + 0xcf) < '\0') {
      uVar5 = puVar6[0x18];
    }
    else {
      uVar5 = (ulong)*(byte *)((long)puVar6 + 0xcf);
    }
    *puVar1 = *puVar1 & 0xfffffff8 | *puVar1 & 3 | (uint)(uVar5 != 0) << 2;
    if ((char)*(byte *)((long)puVar6 + 0xe7) < '\0') {
      uVar5 = puVar6[0x1b];
    }
    else {
      uVar5 = (ulong)*(byte *)((long)puVar6 + 0xe7);
    }
    uVar4 = (uint)(uVar5 != 0) << 2;
  }
  else {
    uVar4 = 0;
    *puVar1 = *puVar1 & 0xfffffffb;
  }
  *(uint *)((long)param_1 + 0x13d14) = *(uint *)((long)param_1 + 0x13d14) & 0xfffffffb | uVar4;
                    /* WARNING: Could not recover jumptable at 0x0001002a4b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_1002a4b7c(long param_1)

{
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  param_1 = param_1 + 0x390;
  FUN_100652d8c(param_1);
  FUN_1004d2698(auStack_a8,"build://Splash_%s.png");
  FUN_100652e40(param_1,0);
  FUN_100652ca4(param_1,auStack_a8);
  FUN_100652cdc(param_1,"full_splash_1k");
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1002a4c14(long param_1)

{
  *(uint *)(param_1 + 0x1ec) = *(uint *)(param_1 + 0x1ec) | 4;
  *(uint *)(*(long *)(param_1 + 0x1fe08) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0x1fe08) + 0x84) & 0xfffffffb;
  *(uint *)(*(long *)(param_1 + 0x1fe40) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0x1fe40) + 0x84) & 0xfffffffb;
  return;
}




void FUN_1002a4c50(long param_1)

{
  *(uint *)(param_1 + 0x1ec) = *(uint *)(param_1 + 0x1ec) & 0xfffffffb;
  *(uint *)(*(long *)(param_1 + 0x1fe08) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0x1fe08) + 0x84) | 4;
  *(uint *)(*(long *)(param_1 + 0x1fe40) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0x1fe40) + 0x84) & 0xfffffffb;
  return;
}




void FUN_1002a4c8c(long param_1)

{
  *(uint *)(param_1 + 0x1ec) = *(uint *)(param_1 + 0x1ec) & 0xfffffffb;
  *(uint *)(*(long *)(param_1 + 0x1fe08) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0x1fe08) + 0x84) & 0xfffffffb;
  *(uint *)(*(long *)(param_1 + 0x1fe40) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0x1fe40) + 0x84) | 4;
  FUN_100217df0(param_1 + 0x1fe38);
  return;
}




void FUN_1002a4cd4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  void *local_38 [2];
  char local_21;
  
  *(long *)(param_1 + 0x1fdf8) = *(long *)(param_1 + 0x1fde8) + 0x60;
  uVar2 = FUN_10015d3ec();
  lVar3 = *(long *)(param_1 + 0x1fde8);
  FUN_10001549c(local_38,"");
  FUN_1001663b8(uVar2,lVar3 + 0x60,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  iVar1 = FUN_10016c2fc();
  if (iVar1 != 0) {
    lVar3 = FUN_10016c2f0();
    if (0 < *(int *)(lVar3 + 0x38)) {
      uVar2 = FUN_10002f320();
      FUN_100030cf0(uVar2,&DAT_101d91198);
    }
  }
  return;
}




void FUN_1002a4d74(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  void *local_38 [2];
  char local_21;
  
  *(long *)(param_1 + 0x1fdf8) = *(long *)(param_1 + 0x1fde8) + 0x80;
  uVar2 = FUN_10015d3ec();
  lVar3 = *(long *)(param_1 + 0x1fde8);
  FUN_10001549c(local_38,"");
  FUN_1001663b8(uVar2,lVar3 + 0x80,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  iVar1 = FUN_10016c2fc();
  if (iVar1 != 0) {
    lVar3 = FUN_10016c2f0();
    if (0 < *(int *)(lVar3 + 0x38)) {
      uVar2 = FUN_10002f320();
      FUN_100030cf0(uVar2,&DAT_101d91198);
    }
  }
  return;
}




void FUN_1002a4e14(long *param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  if (*(int *)(param_2 + 0x240) != 0) {
    return;
  }
  if (param_1[0x3fbd] != 0) {
    uVar1 = FUN_10015d3ec();
    plVar2 = (long *)param_1[0x3fbd];
    if (*(char *)((long)plVar2 + 0x17) < '\0') {
      plVar2 = (long *)*plVar2;
    }
    uVar1 = FUN_1001665d4(uVar1,plVar2,1);
    FUN_1002a47cc(param_1,uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001002a4e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_1002a4e8c(long param_1)

{
  FUN_1002a4e14(param_1 + -0x150);
  return;
}




void FUN_1002a4e94(long param_1)

{
  FUN_100196b54(param_1 + 0x7a0);
  return;
}




void FUN_1002a4e9c(long param_1,int param_2)

{
  *(char *)(param_1 + 0x1fdf1) = (char)param_2;
  if (param_2 != 0) {
    *(uint *)(param_1 + 0x895c) = *(uint *)(param_1 + 0x895c) & 0xfffffffb;
    *(uint *)(param_1 + 0x8894) = *(uint *)(param_1 + 0x8894) & 0xfffffffb;
    *(uint *)(param_1 + 0x13724) = *(uint *)(param_1 + 0x13724) & 0xfffffffb;
    *(uint *)(param_1 + 0x13d14) = *(uint *)(param_1 + 0x13d14) & 0xfffffffb;
    *(uint *)(param_1 + 0xa044) = *(uint *)(param_1 + 0xa044) & 0xfffffffb;
    *(uint *)(param_1 + 0xc4a4) = *(uint *)(param_1 + 0xc4a4) & 0xfffffffb;
    *(uint *)(param_1 + 0x8a8c) = *(uint *)(param_1 + 0x8a8c) & 0xfffffffb;
    *(uint *)(param_1 + 0x7134) = *(uint *)(param_1 + 0x7134) & 0xfffffffb;
  }
  return;
}




void FUN_1002a4f2c(long param_1,byte param_2,int param_3)

{
  long lVar1;
  ushort *puVar2;
  byte *pbVar3;
  byte bVar4;
  long lVar5;
  undefined8 uVar6;
  ushort uVar7;
  uint uVar8;
  undefined4 local_54;
  
  pbVar3 = (byte *)(param_1 + 0x1fdf0);
  param_2 = *(int *)(param_1 + 0x1fdf4) != param_3 & param_2;
  if (param_2 == 1) {
    if (param_3 == 0) {
      FUN_1002a51d4(param_1,1);
      FUN_1002a530c(param_1,0,0xffffffff);
    }
    else if (param_3 - 1U < 3) {
      FUN_1002a530c(param_1,1);
      FUN_1002a51d4(param_1,0);
    }
    if (*(float *)(param_1 + 0x14464) != 0.0) {
      *(float *)(param_1 + 0x14464) = 0.0;
      FUN_1000200a0(param_1 + 0x14420);
    }
  }
  else {
    FUN_1002a51d4(param_1,0);
    param_3 = -1;
    FUN_1002a530c(param_1,0,0xffffffff);
    FUN_100195978(param_1 + 0xe908,0);
  }
  *(int *)(param_1 + 0x1fdf4) = param_3;
  bVar4 = *pbVar3;
  if (bVar4 != param_2) {
    lVar1 = param_1 + 0x390;
    if (param_2 == 0) {
      local_54 = 0xffffffff;
    }
    else {
      local_54 = 0xff282828;
    }
    uVar6 = FUN_100640a74(0x3f000000,lVar1,&local_54,FUN_10001f160,2);
    FUN_100642324(lVar1);
    FUN_100642b14(lVar1,uVar6);
    lVar1 = param_1 + 0x718;
    FUN_100642324(lVar1);
    lVar5 = DAT_101dbd2f8;
    if (param_2 == 0) {
      uVar7 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
      puVar2 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar7 * 0x40 + 0x10);
      if (uVar7 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar7 = 0xffff;
      }
      else {
        uVar7 = *puVar2;
      }
      *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar7;
      *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
      FUN_10063ee9c(puVar2);
      *(undefined ***)puVar2 = &PTR_thunk_FUN_10063eeb4_1014a52f0;
      *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
      FUN_100642b14(lVar1,puVar2);
      uVar6 = FUN_100640840(0x3f800000,0x3f000000,FUN_10001f160);
      uVar8 = 0;
    }
    else {
      uVar6 = FUN_100640840(0,0x3f000000,FUN_10001f160);
      FUN_100642b14(lVar1,uVar6);
      uVar6 = FUN_100047300();
      uVar8 = 0x10;
    }
    FUN_100642b14(lVar1,uVar6);
    FUN_1002a5554(param_1,param_2);
    *pbVar3 = param_2;
    *(uint *)(param_1 + 0x144a4) = *(uint *)(param_1 + 0x144a4) & 0xffffffef | uVar8;
    FUN_100530c04(param_1 + 0x14420,param_2);
    bVar4 = *pbVar3;
  }
  if (bVar4 != 0) {
    FUN_100531b88(param_1 + 0x14420);
  }
  return;
}




void FUN_1002a51d4(long param_1,int param_2)

{
  uint *puVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if (param_2 != 0) {
    puVar1 = (uint *)(param_1 + 0x1ca94);
    lVar2 = param_1 + 0x1ca10;
    uVar4 = *puVar1;
    if ((uVar4 & 0x7f80) != 0) {
      *puVar1 = uVar4 & 0xffff807f;
      FUN_1000200a0(lVar2);
      uVar4 = *puVar1;
    }
    *puVar1 = uVar4 | 4;
    uVar5 = 0;
    if (*(char *)(param_1 + 0x1fdf0) != '\0') {
      uVar5 = 0x3dcccccd;
    }
    uVar3 = FUN_10064081c(uVar5);
    FUN_100640840(0x3f800000,0x3dcccccd,FUN_10001f160);
    FUN_100642324(lVar2);
    FUN_100642b7c(lVar2,uVar3);
    FUN_1002a49dc(param_1);
    return;
  }
  uVar3 = FUN_100640840(0,0x3dcccccd,FUN_10001f160);
  FUN_100047300();
  FUN_100642324(param_1 + 0x1ca10);
  FUN_100642b7c(param_1 + 0x1ca10,uVar3);
  return;
}




void FUN_1002a530c(long param_1,int param_2,int param_3)

{
  uint *puVar1;
  ushort *puVar2;
  long lVar3;
  undefined8 uVar4;
  ushort uVar5;
  uint uVar6;
  
  if (param_2 == 0) {
    uVar4 = FUN_100640840(0,0x3dcccccd,FUN_10001f160);
    FUN_100047300();
    FUN_100642324(param_1 + 0x14f48);
  }
  else {
    puVar1 = (uint *)(param_1 + 0x14fcc);
    if (*(char *)(param_1 + 0x1fdf0) == '\0') {
      lVar3 = param_1 + 0x14f48;
      FUN_10023e748(lVar3,*(undefined8 *)(*(long *)(param_1 + 0x1fde8) + (long)param_3 * 8 + 0x38));
      uVar6 = *puVar1;
      if ((uVar6 & 0x7f80) != 0) {
        *puVar1 = uVar6 & 0xffff807f;
        FUN_1000200a0(lVar3);
        uVar6 = *puVar1;
      }
      *puVar1 = uVar6 | 4;
      uVar4 = FUN_100640840(0x3f800000,0x3dcccccd,FUN_10001f160);
      FUN_100642324(lVar3);
      FUN_100642b14(lVar3,uVar4);
      FUN_1002a49dc(param_1);
      return;
    }
    uVar6 = *puVar1;
    *puVar1 = uVar6 | 4;
    if ((uVar6 & 0x7f80) != 0) {
      *puVar1 = uVar6 & 0xffff807f | 4;
      FUN_1000200a0(param_1 + 0x14f48);
    }
    uVar4 = FUN_100640840(0,0x3dcccccd,FUN_10001f160);
    lVar3 = DAT_101dbd2f8;
    uVar5 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    puVar2 = (ushort *)(DAT_101dbd2f8 + 0x10 + (ulong)uVar5 * 0x40);
    if (uVar5 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar2;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar5;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_10063ee9c(puVar2);
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    *(undefined ***)puVar2 = &PTR_thunk_FUN_10063eeb4_10144bff8;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    *(code **)(puVar2 + 8) = FUN_1002a5660;
    *(long *)(puVar2 + 0x10) = param_1;
    FUN_100640840(0x3f800000,0x3dcccccd,FUN_10001f160);
    FUN_100642324(param_1 + 0x14f48);
  }
  FUN_100642b7c(param_1 + 0x14f48,uVar4);
  return;
}




void FUN_1002a5554(long param_1,int param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x1fdf0) != '\0') {
      uVar2 = FUN_100640840(0,0x3dcccccd,FUN_10001f160);
      FUN_100047300();
      FUN_100642324(param_1 + 0x14958);
      FUN_100642b7c(param_1 + 0x14958,uVar2);
    }
  }
  else if (*(char *)(param_1 + 0x1fdf0) == '\0') {
    puVar1 = (uint *)(param_1 + 0x149dc);
    param_1 = param_1 + 0x14958;
    uVar3 = *puVar1;
    if ((uVar3 & 0x7f80) != 0) {
      *puVar1 = uVar3 & 0xffff807f;
      FUN_1000200a0(param_1);
      uVar3 = *puVar1;
    }
    *puVar1 = uVar3 | 4;
    uVar2 = FUN_100640840(0x3f800000,0x3dcccccd,FUN_10001f160);
    FUN_100642324(param_1);
    FUN_100642b14(param_1,uVar2);
    return;
  }
  return;
}




void FUN_1002a5660(long param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x1fdf4) - 1;
  if (uVar1 < 4) {
    FUN_10023e748(param_1 + 0x14f48,
                  *(undefined8 *)(*(long *)(param_1 + 0x1fde8) + (ulong)uVar1 * 8 + 0x38));
    FUN_1002a49dc(param_1);
    return;
  }
  return;
}




void FUN_1002a56cc(long param_1)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  void *local_f8;
  void *local_f0;
  undefined1 auStack_e8 [7];
  char local_e1;
  void *local_e0;
  void *local_d0;
  char local_b9;
  void *local_b8;
  char local_a1;
  undefined8 local_9c;
  undefined4 local_94;
  void *local_90;
  char local_79;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  lVar4 = FUN_10015d3ec();
  if ((*(char *)(lVar4 + 0x567c) != '\0') &&
     ((iVar3 = FUN_10016c2fc(), iVar3 == 0 || (lVar4 = FUN_10016c2f0(), *(int *)(lVar4 + 0x38) < 1))
     )) {
    uVar5 = FUN_1004e0150("MARKET_MUST_REGISTER_DIALOG_TITLE",0);
    uVar7 = FUN_1004e0150("MARKET_MUST_REGISTER_DIALOG_TEXT",0);
    uVar8 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    FUN_1001e3090(uVar5,uVar7,uVar8,0,0);
    return;
  }
  plVar1 = (long *)(param_1 + 0x1fde8);
  uVar2 = *(uint *)(*plVar1 + 0x78);
  lVar4 = FUN_10015d3ec();
  if (*(uint *)(lVar4 + 0x5454) < uVar2) {
    thunk_FUN_1001ad400(&local_f8);
    uVar5 = FUN_1004e0150("MENU_MARKET_GLORY_PURCHASE_POPUP_TITLE",0);
    thunk_FUN_1004e439c(auStack_40,uVar5);
    FUN_1000153b4(auStack_e8,auStack_40);
    local_f8 = (void *)0x447a000044c80000;
    local_94 = 1;
    FUN_1001ad494(&local_f8,PTR_s_build___MenuPartsCommon_tga_101854970,"popup_fill",&DAT_101158890)
    ;
    local_9c = 0xffa3781effa4781e;
    lVar4 = FUN_1000eb768(PTR_s_MENU_CURRENCY_PURCHASE_POPUP_101854ac0,&local_f8);
    iVar3 = FUN_10016c2fc();
    if ((iVar3 != 0) && (lVar6 = FUN_10016c2f0(), 0 < *(int *)(lVar6 + 0x38))) {
      *(undefined1 *)(lVar4 + 0x186c) = 0;
    }
    FUN_10021fea0(lVar4,0);
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
    if (local_79 < '\0') {
      operator_delete(local_90);
    }
    if (local_a1 < '\0') {
      operator_delete(local_b8);
    }
    local_38 = local_e0;
    if (local_b9 < '\0') {
      operator_delete(local_d0);
      local_38 = local_e0;
    }
  }
  else {
    uVar5 = FUN_1004e0150("HERO_HUB_DIALOG_UNLOCKHERO_SILVER_TITLE",0);
    thunk_FUN_1004e439c(auStack_40,uVar5);
    uVar5 = FUN_1004e0150("HERO_HUB_DIALOG_UNLOCKHERO_SILVER_MSG",0);
    thunk_FUN_1004e439c(auStack_50,uVar5);
    FUN_1000f0994(&local_f8,*(undefined4 *)(*plVar1 + 0x78));
    FUN_1004e3170(auStack_60,&local_f8);
    if (local_e1 < '\0') {
      operator_delete(local_f8);
    }
    lVar4 = FUN_10015d3ec();
    FUN_1000f0994(&local_f8,*(undefined4 *)(lVar4 + 0x5454));
    FUN_1004e3170(auStack_70,&local_f8);
    if (local_e1 < '\0') {
      operator_delete(local_f8);
    }
    FUN_1004e3120(&local_f8,"[HERO_NAME]");
    FUN_1004e3bc4(auStack_40,0,&local_f8,*plVar1 + 0x28);
    if (local_f0 != (void *)0x0) {
      operator_delete__(local_f0);
    }
    FUN_1004e3120(&local_f8,"[HERO_NAME]");
    FUN_1004e3bc4(auStack_50,0,&local_f8,*plVar1 + 0x28);
    if (local_f0 != (void *)0x0) {
      operator_delete__(local_f0);
    }
    FUN_1004e3120(&local_f8,"[UNLOCK_AMOUNT]");
    FUN_1004e3bc4(auStack_50,0,&local_f8,auStack_60);
    if (local_f0 != (void *)0x0) {
      operator_delete__(local_f0);
    }
    FUN_1004e3120(&local_f8,"[BALANCE_AMOUNT]");
    FUN_1004e3bc4(auStack_50,0,&local_f8,auStack_70);
    if (local_f0 != (void *)0x0) {
      operator_delete__(local_f0);
    }
    lVar4 = FUN_10016c2f0();
    if (*(int *)(lVar4 + 0x38) < 1) {
      uVar5 = FUN_1004e0150("HERO_HUB_DIALOG_UNLOCKHERO_SILVER_ACCEPT",0);
      puVar9 = (undefined8 *)FUN_1004e0150("HERO_HUB_DIALOG_UNLOCKHERO_SILVER_REJECT",0);
    }
    else {
      uVar5 = FUN_10002f320();
      FUN_100030cf0(uVar5,&DAT_101d91198);
      uVar5 = FUN_1004e0150("HERO_HUB_DIALOG_UNLOCKHERO_SILVER_ACCEPT",0);
      puVar9 = &DAT_101d91650;
    }
    FUN_1001e31c8(auStack_40,auStack_50,uVar5,puVar9,&DAT_101d91650,param_1,thunk_FUN_1002a4cd4,0,0)
    ;
    if (local_68 != (void *)0x0) {
      operator_delete__(local_68);
    }
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
  }
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void thunk_FUN_1002a4cd4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  void *apvStack_38 [2];
  char cStack_21;
  
  *(long *)(param_1 + 0x1fdf8) = *(long *)(param_1 + 0x1fde8) + 0x60;
  uVar2 = FUN_10015d3ec();
  lVar3 = *(long *)(param_1 + 0x1fde8);
  FUN_10001549c(apvStack_38,"");
  FUN_1001663b8(uVar2,lVar3 + 0x60,apvStack_38);
  if (cStack_21 < '\0') {
    operator_delete(apvStack_38[0]);
  }
  iVar1 = FUN_10016c2fc();
  if (iVar1 != 0) {
    lVar3 = FUN_10016c2f0();
    if (0 < *(int *)(lVar3 + 0x38)) {
      uVar2 = FUN_10002f320();
      FUN_100030cf0(uVar2,&DAT_101d91198);
    }
  }
  return;
}




void FUN_1002a5ad0(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
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
  
  lVar3 = FUN_10015d3ec();
  if ((*(char *)(lVar3 + 0x567c) != '\0') &&
     ((iVar2 = FUN_10016c2fc(), iVar2 == 0 || (lVar3 = FUN_10016c2f0(), *(int *)(lVar3 + 0x38) < 1))
     )) {
    uVar4 = FUN_1004e0150("MARKET_MUST_REGISTER_DIALOG_TITLE",0);
    uVar5 = FUN_1004e0150("MARKET_MUST_REGISTER_DIALOG_TEXT",0);
    uVar6 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    FUN_1001e3090(uVar4,uVar5,uVar6,0,0);
    return;
  }
  uVar1 = *(uint *)(*(long *)(param_1 + 0x1fde8) + 0x98);
  lVar3 = FUN_10015d3ec();
  if (*(uint *)(lVar3 + 0x5450) < uVar1) {
    thunk_FUN_1001ad400(local_a8);
    uVar4 = FUN_1004e0150("MENU_MARKET_ICE_PURCHASE_POPUP_TITLE",0);
    thunk_FUN_1004e439c(auStack_b8,uVar4);
    FUN_1000153b4(auStack_98,auStack_b8);
    local_a8[0] = 0x447a000044c80000;
    local_44 = 1;
    FUN_1001ad494(local_a8,PTR_s_build___MenuPartsCommon_tga_101854970,"popup_fill",&DAT_101158890);
    local_4c = 0xffa3781effa4781e;
    uVar4 = FUN_1000eb768(PTR_s_MENU_CURRENCY_PURCHASE_POPUP_101854ac0,local_a8);
    FUN_10021fea0(uVar4,1);
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
  FUN_1004e0150("HERO_HUB_DIALOG_UNLOCKHERO_GOLD_ACCEPT",0);
  FUN_1004e0150("HERO_HUB_DIALOG_UNLOCKHERO_GOLD_REJECT",0);
  FUN_1002a4d74(param_1);
  return;
}




void FUN_1002a5cac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_1004e0150("MAIN_STARTUP_VALIDATION_DIALOG_CONNECTIONDROPPED_TITLE",0);
  uVar2 = FUN_1004e0150("MAIN_STARTUP_VALIDATION_DIALOG_CONNECTIONDROPPED_MSG",0);
  uVar3 = FUN_1004e0150("MAIN_STARTUP_VALIDATION_DIALOG_CONNECTIONDROPPED_ACCEPT",0);
  FUN_1001e3090(uVar1,uVar2,uVar3,param_1,0);
  return;
}




void FUN_1002a5d1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100644b2c(param_2);
  FUN_1002a4f2c(param_1,1,uVar1);
  FUN_1001e79b8(0x3f800000,"build://Sounds/UI.assetbundle/ui_menu_button_tap_drill_in.mp3",0,0);
  return;
}




void FUN_1002a5d64(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  void *local_38 [2];
  char local_21;
  
  uVar1 = FUN_10002f320();
  plVar2 = (long *)(*(long *)(param_1 + 0x1fde8) + 0xd0);
  if (*(char *)(*(long *)(param_1 + 0x1fde8) + 0xe7) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  FUN_10001549c(local_38,plVar2);
  FUN_1000312cc(uVar1,local_38,&DAT_101d91198,0,0);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_1002a5de0(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  void *local_38 [2];
  char local_21;
  
  uVar1 = FUN_10002f320();
  plVar2 = (long *)(*(long *)(param_1 + 0x1fde8) + 0xa0);
  if (*(char *)(*(long *)(param_1 + 0x1fde8) + 0xb7) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  FUN_10001549c(local_38,plVar2);
  FUN_1000312cc(uVar1,local_38,&DAT_101d91198,0,0);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_1002a5e5c(long param_1)

{
  undefined8 *******pppppppuVar1;
  size_t sVar2;
  ulong uVar3;
  byte bVar4;
  byte *******pppppppbVar5;
  int iVar6;
  undefined8 uVar7;
  void *pvVar8;
  undefined8 *******pppppppuVar9;
  void *pvVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  undefined8 ******local_a8;
  ulong local_a0;
  byte local_91;
  byte ******local_90;
  size_t sStack_88;
  byte local_79;
  undefined8 ******local_78;
  ulong local_70;
  byte local_61;
  
  iVar6 = FUN_10052ba28();
  if (iVar6 == 0) {
    return;
  }
  FUN_10003330c(&local_78,*(long *)(param_1 + 0x1fde8) + 0xb8);
  FUN_10001549c(&local_90,"[LOC]");
  FUN_100126e3c(&local_a8);
  uVar14 = sStack_88;
  uVar13 = (uint)(char)local_79;
  sVar2 = sStack_88;
  pppppppbVar5 = (byte *******)local_90;
  if (-1 < (int)uVar13) {
    sVar2 = (ulong)local_79;
    pppppppbVar5 = &local_90;
  }
  pppppppuVar1 = (undefined8 *******)local_78;
  if (-1 < (char)local_61) {
    pppppppuVar1 = &local_78;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
LAB_1002a5f64:
    uVar15 = (uint)local_91;
    do {
      if (-1 < (char)uVar13) {
        uVar14 = (ulong)(uVar13 & 0xff);
      }
      pppppppuVar1 = (undefined8 *******)local_a8;
      if (-1 < (char)uVar15) {
        pppppppuVar1 = &local_a8;
      }
      std::string::replace
                ((ulong)&local_78,uVar12,(char *)(uVar14 & 0xffffffff),(ulong)pppppppuVar1);
      uVar14 = sStack_88;
      uVar15 = (uint)(char)local_91;
      uVar3 = local_a0;
      if (-1 < (int)uVar15) {
        uVar3 = (ulong)local_91;
      }
      uVar12 = uVar12 + (uVar3 & 0xffffffff);
      uVar13 = (uint)(char)local_79;
      sVar2 = sStack_88;
      pppppppbVar5 = (byte *******)local_90;
      if (-1 < (int)uVar13) {
        sVar2 = (ulong)local_79;
        pppppppbVar5 = &local_90;
      }
      uVar3 = local_70;
      pppppppuVar1 = (undefined8 *******)local_78;
      if (-1 < (char)local_61) {
        uVar3 = (ulong)local_61;
        pppppppuVar1 = &local_78;
      }
      if (uVar3 < uVar12) break;
      if (sVar2 != 0) {
        pvVar8 = (void *)((long)pppppppuVar1 + uVar12);
        pvVar10 = (void *)((long)pppppppuVar1 + uVar3);
        lVar11 = (long)pvVar10 - (long)pvVar8;
        if (lVar11 < (long)sVar2) break;
        bVar4 = *(byte *)pppppppbVar5;
        while( true ) {
          if ((0xfffffffffffffffe < lVar11 - sVar2) ||
             (pvVar8 = _memchr(pvVar8,(uint)bVar4,(lVar11 - sVar2) + 1), pvVar8 == (void *)0x0))
          goto LAB_1002a5f0c;
          iVar6 = _memcmp(pvVar8,pppppppbVar5,sVar2);
          if (iVar6 == 0) break;
          pvVar8 = (void *)((long)pvVar8 + 1);
          lVar11 = (long)pvVar10 - (long)pvVar8;
          if (lVar11 < (long)sVar2) goto LAB_1002a5f0c;
        }
        if (pvVar8 == pvVar10) break;
        uVar12 = (long)pvVar8 - (long)pppppppuVar1;
      }
    } while (uVar12 != 0xffffffffffffffff);
  }
  else {
    uVar12 = local_70;
    if (-1 < (char)local_61) {
      uVar12 = (ulong)local_61;
    }
    if ((long)sVar2 <= (long)uVar12) {
      pvVar8 = (void *)((long)pppppppuVar1 + uVar12);
      bVar4 = *(byte *)pppppppbVar5;
      pppppppuVar9 = pppppppuVar1;
      do {
        if ((0xfffffffffffffffe < uVar12 - sVar2) ||
           (pvVar10 = _memchr(pppppppuVar9,(uint)bVar4,(uVar12 - sVar2) + 1), pvVar10 == (void *)0x0
           )) break;
        iVar6 = _memcmp(pvVar10,pppppppbVar5,sVar2);
        if (iVar6 == 0) {
          if ((pvVar10 != pvVar8) &&
             (uVar12 = (long)pvVar10 - (long)pppppppuVar1, uVar12 != 0xffffffffffffffff))
          goto LAB_1002a5f64;
          break;
        }
        pppppppuVar9 = (undefined8 *******)((long)pvVar10 + 1);
        uVar12 = (long)pvVar8 - (long)pppppppuVar9;
      } while ((long)sVar2 <= (long)uVar12);
    }
  }
LAB_1002a5f0c:
  if ((char)local_91 < '\0') {
    operator_delete(local_a8);
    if (-1 < (char)local_79) goto LAB_1002a5f18;
  }
  else if ((uVar13 >> 7 & 1) == 0) goto LAB_1002a5f18;
  operator_delete(local_90);
LAB_1002a5f18:
  uVar7 = FUN_10002f320();
  FUN_1000307d8(uVar7,&local_78,1,1,2);
  if ((char)local_61 < '\0') {
    operator_delete(local_78);
  }
  return;
}




void FUN_1002a6100(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002a6134(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




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




void FUN_1002a666c(long param_1)

{
  if (*(undefined8 **)(param_1 + 0xb8) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001002a667c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 0xb8))();
    return;
  }
  return;
}




void FUN_1002a6684(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001002a6694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
    return;
  }
  return;
}




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




void FUN_1002a6738(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_thunk_FUN_1002a6738_101482408;
  if ((*(char *)(param_1 + 0x478) != '\0') || (*(char *)((long)param_1 + 0x23c1) != '\0')) {
    FUN_1002a6910(param_1,0,0);
  }
  lVar2 = FUN_10032523c();
  if (*(uint *)(lVar2 + 0x50) != 0) {
    lVar3 = *(long *)(lVar2 + 0x58);
    lVar2 = (ulong)*(uint *)(lVar2 + 0x50) << 5;
    do {
      puVar1 = (undefined8 *)(lVar3 + 8);
      lVar3 = lVar3 + 0x20;
      if ((undefined8 *)*puVar1 == param_1) {
        FUN_1001f3dd4();
        break;
      }
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  param_1[0x45a] = &PTR_FUN_1014a7108;
  param_1[0x471] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x474);
  FUN_10064e2bc(param_1 + 0x45a);
  param_1[0x311] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x432);
  FUN_1002ebc50(param_1 + 0x311);
  param_1[0x1c8] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x2e9);
  FUN_1002ebc50(param_1 + 0x1c8);
  thunk_FUN_1001b1228(param_1 + 0x1ae);
  param_1[400] = &PTR_FUN_1014a7108;
  param_1[0x1a7] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1aa);
  FUN_10064e2bc(param_1 + 400);
  lVar2 = 0;
  param_1[0xe0] = &PTR_FUN_10145e588;
  do {
    *(undefined ***)((long)param_1 + lVar2 + 0xb78) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar2 + 0xc30) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar2 + 0xc48);
    FUN_10064e2bc((long)param_1 + lVar2 + 0xb78);
    lVar2 = lVar2 + -0xf0;
  } while (lVar2 != -0x4b0);
  FUN_10064e2bc(param_1 + 0xe0);
  param_1[0xb5] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0xcc);
  FUN_10064e2bc(param_1 + 0xb5);
  thunk_FUN_100651068(param_1 + 0x8f);
  thunk_FUN_100651068(param_1 + 0x69);
  thunk_FUN_100651068(param_1 + 0x43);
  param_1[0x18] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x2f);
  FUN_10064e2bc(param_1 + 0x18);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002a6910(long param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  long lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  if (*(byte *)(param_1 + 0x23c0) != param_2) {
    if (param_2 == 0) {
      uVar2 = FUN_10002f320();
      FUN_100030cf0(uVar2,&DAT_101e448b0);
    }
    else {
      local_70 = 0;
      local_68 = 0;
      local_64 = (undefined4)DAT_101dc1cb8;
      lStack_60._0_4_ = (undefined4)((ulong)DAT_101dc1cb8 >> 0x20);
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0x3f800000;
      local_32 = 1;
      local_58 = param_1 + 0xe40;
      uStack_50 = 0;
      local_34 = 1;
      uVar2 = FUN_10002f320();
      FUN_100030c8c(uVar2,&DAT_101e448b0,&local_70);
    }
    *(byte *)(param_1 + 0x23c0) = (byte)param_2;
  }
  if (*(byte *)(param_1 + 0x23c1) != param_3) {
    if (param_3 == 0) {
      uVar2 = FUN_10002f320();
      FUN_100030818(uVar2,&DAT_101e448b0);
    }
    else {
      local_70 = DAT_101dc1cb8;
      local_68 = (undefined4)DAT_101dc1cb8;
      local_64 = (undefined4)((ulong)DAT_101dc1cb8 >> 0x20);
      lStack_60 = param_1 + 0xe40;
      uVar1 = (ulong)local_58 >> 0x20;
      local_58 = CONCAT44((uint)uVar1 & 0xffffff00,0x1000101);
      uVar2 = FUN_10002f320();
      FUN_1000307e0(uVar2,&DAT_101e448b0,&local_70);
    }
    *(char *)(param_1 + 0x23c1) = (char)param_3;
  }
  return;
}




void thunk_FUN_1002a6738(void)

{
  FUN_1002a6738();
  return;
}




void FUN_1002a6a40(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002a6738();
  operator_delete(pvVar1);
  return;
}




void FUN_1002a6a54(void)

{
  return;
}




void FUN_1002a6a58(void)

{
  return;
}




void FUN_1002a6a5c(long param_1,uint param_2)

{
  undefined1 auStack_30 [8];
  void *local_28;
  
  if (*(byte *)(param_1 + 0x23c2) != param_2) {
    *(byte *)(param_1 + 0x23c2) = (byte)param_2;
    FUN_1002a669c();
    if (param_2 != 0) {
      FUN_1001c1090(0x3e19999a,0x3ecccccd,0,0x3f666666,param_1 + 0x700);
      FUN_1001c0e10(param_1 + 0x700);
      FUN_1004e3120(auStack_30,"0:00");
      FUN_1006513c0(param_1 + 0x218,auStack_30);
      if (local_28 != (void *)0x0) {
        operator_delete__(local_28);
      }
    }
  }
  return;
}




void FUN_1002a6b00(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x23c3) = param_2;
  FUN_1002a669c();
  return;
}




void FUN_1002a6b0c(long *param_1)

{
  FUN_1006513c0(param_1 + 0x69);
                    /* WARNING: Could not recover jumptable at 0x0001002a6b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




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




void FUN_1002a6d2c(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  void *local_38 [2];
  char local_21;
  
  if ((param_2 & 1) == 0) {
    uVar1 = FUN_10002f320();
    FUN_10001549c(local_38,"quest_focus_indicator");
    FUN_100030cf0(uVar1,local_38);
    if (local_21 < '\0') {
      operator_delete(local_38[0]);
    }
  }
  return;
}




void FUN_1002a6d84(long param_1)

{
  *(uint *)(*(long *)(param_1 + 0xc78) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0xc78) + 0x84) & 0xfffffffb;
  return;
}




void FUN_1002a6d98(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 uVar7;
  float fVar8;
  
  FUN_10064e32c();
  iVar4 = FUN_1001270c4();
  uVar7 = 0x42700000;
  if (iVar4 < 2) {
    uVar7 = 0;
  }
  iVar4 = FUN_1001270c4();
  (**(code **)(*(long *)param_1[399] + 0x90))();
  plVar6 = (long *)param_1[399];
  uVar5 = (**(code **)(*plVar6 + 0x118))(plVar6);
  FUN_10064e4a0(plVar6,uVar5);
  FUN_10064e68c(0,uVar7,param_1[399],1);
  plVar6 = param_1 + 0x1ae;
  FUN_10064e47c(DAT_101e448a0,DAT_101e448a4,plVar6);
  uVar7 = 0xc3070000;
  if (iVar4 < 2) {
    uVar7 = 0xc2960000;
  }
  FUN_10064e72c(uVar7,plVar6,2,param_1,2);
  FUN_10064e72c(0,plVar6,4,param_1[399],4);
  FUN_10064e5ec(0,0,param_1 + 0x1c8,8,plVar6,8);
  FUN_10064e5ec(0,0,param_1 + 0x311,8,plVar6,8);
  if ((*(float *)(param_1 + 0xe9) != 1.6) || (*(float *)((long)param_1 + 0x74c) != 1.6)) {
    param_1[0xe9] = 0x3fcccccd3fcccccd;
    FUN_1000200a0(param_1 + 0xe0);
  }
  plVar1 = param_1 + 0xb5;
  FUN_1006557ec(plVar1);
  plVar2 = param_1 + 0x69;
  FUN_10064e72c(0,plVar2,0,param_1 + 0x43,2);
  FUN_10064e72c(0,plVar2,1,param_1 + 0x43,1);
  plVar3 = param_1 + 0x8f;
  FUN_10064e72c(0,plVar3,0,plVar2,2);
  FUN_10064e72c(0,plVar3,1,plVar2,1);
  FUN_10064e72c(0x41400000,plVar1,0,plVar3,2);
  FUN_10064e72c(0,plVar1,1,plVar3,1);
  plVar1 = param_1 + 0x18;
  FUN_1006557ec(plVar1);
  FUN_10064e72c(0xc2700000,plVar1,1,plVar6,3);
  FUN_10064e72c(0,plVar1,5,plVar6,5);
  fVar8 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  FUN_100652eac(param_1 + 0x45a,(int)fVar8);
  FUN_10064e72c(0,param_1 + 0x45a,4,param_1,4);
  if (param_1[0x1aa] != 0) {
    FUN_10064e5ec(0x41700000,0xc1700000,param_1 + 400,3,param_1,3);
    return;
  }
  return;
}




void FUN_1002a7060(long *param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  
  if (((DAT_101e448f0 & 1) == 0) && (iVar2 = ___cxa_guard_acquire(&DAT_101e448f0), iVar2 != 0)) {
    FUN_1004e313c(&DAT_101e448e0);
    ___cxa_atexit(FUN_100046198,&DAT_101e448e0,0x100000000);
    ___cxa_guard_release(&DAT_101e448f0);
  }
  pcVar1 = "%d:0%d";
  if (9 < *param_2 % 0x3c) {
    pcVar1 = "%d:%d";
  }
  FUN_1004e38ac(&DAT_101e448e0,pcVar1);
  FUN_1006513c0(param_1 + 0x43,&DAT_101e448e0);
                    /* WARNING: Could not recover jumptable at 0x0001002a7104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_1002a715c(void)

{
  return;
}




void * FUN_1002a7160(long *param_1,int param_2)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  
  pvVar1 = operator_new(0x108);
  lVar2 = thunk_FUN_1002ee824();
  uVar3 = 0x20;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xffffffdf | uVar3;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void FUN_1002a71d4(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    uVar2 = 0;
    if (uVar4 != 0xffffffff) {
      uVar2 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
    }
    if (uVar4 < 0x20) {
      uVar2 = uVar4 << 1;
    }
    uVar3 = uVar4 + 1;
    if (uVar4 + 1 <= uVar2) {
      uVar3 = uVar2;
    }
    FUN_1002a7258(param_1,uVar3);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  uVar5 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  *(undefined8 *)(lVar1 + -0x18) = param_2[1];
  *(undefined8 *)(lVar1 + -0x20) = uVar5;
  *(undefined8 *)(lVar1 + -8) = uVar7;
  *(undefined8 *)(lVar1 + -0x10) = uVar6;
  return;
}




void thunk_FUN_1002a7060(long *param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  
  if (((DAT_101e448f0 & 1) == 0) && (iVar2 = ___cxa_guard_acquire(&DAT_101e448f0), iVar2 != 0)) {
    FUN_1004e313c(&DAT_101e448e0);
    ___cxa_atexit(FUN_100046198,&DAT_101e448e0,0x100000000);
    ___cxa_guard_release(&DAT_101e448f0);
  }
  pcVar1 = "%d:0%d";
  if (9 < *param_2 % 0x3c) {
    pcVar1 = "%d:%d";
  }
  FUN_1004e38ac(&DAT_101e448e0,pcVar1);
  FUN_1006513c0(param_1 + 0x43,&DAT_101e448e0);
                    /* WARNING: Could not recover jumptable at 0x0001002a7104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_1002a7258(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 5);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 5;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar6 = *puVar5;
        uVar8 = puVar5[3];
        uVar7 = puVar5[2];
        puVar4[1] = puVar5[1];
        *puVar4 = uVar6;
        puVar4[3] = uVar8;
        puVar4[2] = uVar7;
        lVar3 = lVar3 + -0x20;
        puVar4 = puVar4 + 4;
        puVar5 = puVar5 + 4;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002a72d4(void)

{
  DAT_101e44718 = 0xff;
  DAT_101e4471a = 0xffff;
  DAT_101e4471c = 0xffff;
  DAT_101e4471e = 0xffbc9c44;
  DAT_101e44722 = 0xff1166f2;
  DAT_101e44726 = 0xffe0e0e0;
  DAT_101e4472a = 0xffa0a0a0;
  DAT_101e4472e = 0xff8c8c8c;
  DAT_101e44732 = 0xff322213;
  DAT_101e44736 = 0xff091911;
  DAT_101e4473a = 0xff170c19;
  DAT_101e4473e = 0xff241a14;
  DAT_101e44742 = 0xff14171c;
  DAT_101e44746 = 0xff221911;
  DAT_101e4474a = 0xff1a1416;
  DAT_101e4474e = 0xff121414;
  DAT_101e44752 = 0xff1a1809;
  DAT_101e44756 = 0xff141414;
  DAT_101e4475a = 0xff141414;
  DAT_101e4475e = 0xff2929c0;
  DAT_101e44762 = 0xff283082;
  DAT_101e44766 = 0xff5262cc;
  DAT_101e4476a = 0xff283082;
  DAT_101e4476e = 0xff5262cc;
  DAT_101e44772 = 0xff745c42;
  DAT_101e44776 = 0xff184155;
  DAT_101e4477a = 0xff92665e;
  DAT_101e4477e = 0xffbc9c44;
  DAT_101e44782 = 0xffbbae56;
  DAT_101e44786 = 0xff8b7b01;
  DAT_101e4478a = 0xff90b3ef;
  DAT_101e4478e = 0xff728ebe;
  DAT_101e44792 = 0xff19459d;
  DAT_101e44796 = 0xff9d877b;
  DAT_101e4479a = 0xffcbb1a3;
  DAT_101e4479e = 0xff3f6fb5;
  DAT_101e447a2 = 0xffc5c5c5;
  DAT_101e447a6 = 0xff4fc1f1;
  DAT_101e447aa = 0xff606060;
  DAT_101e447ae = 0xffc5ff7b;
  DAT_101e447b2 = 0xff5271eb;
  DAT_101e447b6 = 0xfffae076;
  DAT_101e447ba = 0xff3ac8f6;
  DAT_101e447be = 0xffaaaaaa;
  DAT_101e447c2 = 0xffe19400;
  DAT_101e447c6 = 0xffe19400;
  DAT_101e447ca = 0xffe550b2;
  DAT_101e447ce = 0xfff22ae8;
  DAT_101e447d2 = 0xff005ae1;
  DAT_101e447d6 = 0xff1addfa;
  DAT_101e447da = 0xff2424b3;
  DAT_101e447de = 0xff2424b3;
  DAT_101e447e2 = 0xff646464;
  DAT_101e447e6 = 0xff92665e;
  DAT_101e447ea = 0xff646037;
  DAT_101e447f0 = 0xffffffff;
  DAT_101e447f4 = 0xff1111a1;
  DAT_101e447f8 = 0xff321ee1;
  DAT_101e447fc = 0xffc8c8c8;
  DAT_101e44800 = 0xff321ee1;
  DAT_101e44804 = 0xff7fe801;
  DAT_101e44808 = 0xffffffff;
  DAT_101e4480c = 0xff6259b3;
  DAT_101e44810 = 0xff506e73;
  DAT_101e44814 = 0xff9dbf86;
  DAT_101e44818 = 0xffa35244;
  DAT_101e4481c = 0xffca828e;
  DAT_101e44820 = 0xffa6a6a6;
  DAT_101e44824 = 0xffa6a6a6;
  DAT_101e44828 = 0xffffffff;
  DAT_101e4482c = 0xff88ea2f;
  DAT_101e44830 = 0xff8c8c8c;
  DAT_101e44834 = 0xffffb400;
  DAT_101e44838 = 0xffff00ff;
  DAT_101e4483c = 0xff00aded;
  DAT_101e44840 = 0xff33d3ff;
  DAT_101e44844 = 0xff7fe801;
  DAT_101e44848 = 0xff282828;
  DAT_101e4484c = 0xfff0f0f0;
  DAT_101e44850 = 0xffa4781e;
  DAT_101e44854 = 0xffa6654b;
  DAT_101e44858 = 0xff93435b;
  DAT_101e4485c = 0xff387f9c;
  DAT_101e44860 = 0xffa3781e;
  DAT_101e44864 = 0xffffd18a;
  DAT_101e44868 = 0xffff61f7;
  DAT_101e4486c = 0xff5de1f2;
  DAT_101e44870 = 0xff80eaff;
  DAT_101e44874 = 0xff32e00e;
  DAT_101e44878 = 0xff5a3c10;
  DAT_101e4487c = 0xff330b03;
  DAT_101e44880 = 0xff33031d;
  DAT_101e44884 = 0xff032433;
  DAT_101e44888 = 0xff9e8e8d;
  DAT_101e44890 = 0x4326000041900000;
  DAT_101e44898 = 0x4326000041c00000;
  _DAT_101e448a0 = 0x43700000442a0000;
  DAT_101e448a8 = 0xffe0e0e0;
  FUN_10001549c(&DAT_101e448b0,"HomePanelVCHighlightPlay");
  ___cxa_atexit(FUN_1000e6204,&DAT_101e448b0,0x100000000);
  FUN_10001549c(&DAT_101e448c8,"HomePanelVCKeyholeTiV");
  ___cxa_atexit(FUN_1000e6204,&DAT_101e448c8,0x100000000);
  return;
}




long * FUN_1002a7a40(long *param_1)

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
  *puVar6 = &PTR_thunk_FUN_1002a7c60_101482550;
  puVar6 = puVar6 + 0x49;
  thunk_FUN_100652c08(puVar6);
  plVar1 = param_1 + 0x67;
  thunk_FUN_100655644(plVar1);
  plVar2 = param_1 + 0x92;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0xb8;
  thunk_FUN_1001cd1dc(plVar3);
  uVar4 = FUN_1004d2524("homepanel_cornerwidget_battlepass_tile");
  uVar5 = FUN_100015208("homepanel_cornerwidget_battlepass_tile",uVar4,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0x80000000 |
       *(uint *)((long)param_1 + 0x84) & 0x7fff | (uVar5 & 0xffff) << 0xf;
  (**(code **)(*param_1 + 0x78))(param_1,puVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100655930(plVar1,plVar2,1);
  FUN_100655930(plVar1,plVar3,1);
  FUN_100652e40(puVar6,0);
  FUN_100652cac(puVar6,PTR_s_build___VGX_common_atlas_101854980,"corner_widget_linktile_bg");
  uVar5 = *(uint *)((long)param_1 + 0x2cc);
  if ((uVar5 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x2cc) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x6600;
    FUN_1000200a0(puVar6);
  }
  FUN_100651460(plVar2,&DAT_1011588a0);
  FUN_1006515e0(plVar2,1);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  uVar7 = FUN_1004e0150("MENU_MARKET_FEATURED_TIME_LEFT",0);
  FUN_1001cd23c(plVar3,uVar7,0,0);
  FUN_100651460(plVar3,&DAT_1011588a0);
  FUN_1006515e0(plVar3,1);
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  local_48 = DAT_101d91884;
  local_70 = FUN_1002a7c4c;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 1,&local_70);
  (**(code **)(*param_1 + 0xe8))(param_1);
  return param_1;
}




void FUN_1002a7c4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002a7c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x240))();
  return;
}




long * thunk_FUN_1002a7a40(long *param_1)

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
  *puVar6 = &PTR_thunk_FUN_1002a7c60_101482550;
  puVar6 = puVar6 + 0x49;
  thunk_FUN_100652c08(puVar6);
  plVar1 = param_1 + 0x67;
  thunk_FUN_100655644(plVar1);
  plVar2 = param_1 + 0x92;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0xb8;
  thunk_FUN_1001cd1dc(plVar3);
  uVar4 = FUN_1004d2524("homepanel_cornerwidget_battlepass_tile");
  uVar5 = FUN_100015208("homepanel_cornerwidget_battlepass_tile",uVar4,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0x80000000 |
       *(uint *)((long)param_1 + 0x84) & 0x7fff | (uVar5 & 0xffff) << 0xf;
  (**(code **)(*param_1 + 0x78))(param_1,puVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100655930(plVar1,plVar2,1);
  FUN_100655930(plVar1,plVar3,1);
  FUN_100652e40(puVar6,0);
  FUN_100652cac(puVar6,PTR_s_build___VGX_common_atlas_101854980,"corner_widget_linktile_bg");
  uVar5 = *(uint *)((long)param_1 + 0x2cc);
  if ((uVar5 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x2cc) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x6600;
    FUN_1000200a0(puVar6);
  }
  FUN_100651460(plVar2,&DAT_1011588a0);
  FUN_1006515e0(plVar2,1);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  uVar7 = FUN_1004e0150("MENU_MARKET_FEATURED_TIME_LEFT",0);
  FUN_1001cd23c(plVar3,uVar7,0,0);
  FUN_100651460(plVar3,&DAT_1011588a0);
  FUN_1006515e0(plVar3,1);
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  uStack_48 = DAT_101d91884;
  pcStack_70 = FUN_1002a7c4c;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_70);
  (**(code **)(*param_1 + 0xe8))(param_1);
  return param_1;
}




void FUN_1002a7c60(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002a7c60_101482550;
  param_1[0xb8] = &PTR_FUN_10145eb78;
  param_1[0xcf] = &PTR_FUN_10145ecf0;
  if ((void *)param_1[0xe0] != (void *)0x0) {
    operator_delete__((void *)param_1[0xe0]);
    param_1[0xe0] = 0;
    param_1[0xdf] = 0;
  }
  FUN_100651068(param_1 + 0xb8);
  thunk_FUN_100651068(param_1 + 0x92);
  param_1[0x67] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x7e);
  FUN_10064e2bc(param_1 + 0x67);
  param_1[0x49] = &PTR_FUN_1014a7108;
  param_1[0x60] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 99);
  FUN_10064e2bc(param_1 + 0x49);
  FUN_10052ffb4(param_1);
  return;
}




void thunk_FUN_1002a7c60(void)

{
  FUN_1002a7c60();
  return;
}




void FUN_1002a7d1c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002a7c60();
  operator_delete(pvVar1);
  return;
}




void FUN_1002a7d30(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  float local_48;
  undefined4 uStack_44;
  
  FUN_10064e32c();
  local_48 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  uStack_44 = param_2;
  FUN_10064e48c(param_3 + 0x49,&local_48);
  plVar1 = param_3 + 0x92;
  FUN_100651708(local_48 + -64.0,plVar1,1);
  plVar2 = param_3 + 0xb8;
  FUN_100651708(local_48 + -64.0,plVar2,1);
  FUN_10064e72c(0x40800000,plVar2,0,plVar1,2);
  FUN_10064e72c(0,plVar2,3,plVar1,3);
  FUN_1006557ec(param_3 + 0x67);
  FUN_10064e5ec(0x42000000,0x42000000,param_3 + 0x67,0,param_3,0);
  return;
}




int FUN_1002a7e1c(long param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if (0.0 < (float)param_2 + -64.0) {
    iVar2 = (int)((float)param_2 + -64.0);
    iVar1 = FUN_1006512dc(param_1 + 0x490,iVar2);
    iVar2 = FUN_1006512dc(param_1 + 0x5c0,iVar2);
    return (int)((float)iVar1 + 68.0 + (float)iVar2);
  }
  return 100;
}




void FUN_1002a7e98(long *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 != (*(uint *)((long)param_1 + 0x84) & 4) >> 2) {
    uVar1 = 4;
    if (param_2 == 0) {
      uVar1 = 0;
    }
    *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xfffffffb | uVar1;
                    /* WARNING: Could not recover jumptable at 0x0001002a7ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xe8))();
    return;
  }
  return;
}




void FUN_1002a7ed0(long *param_1)

{
  FUN_1006513c0(param_1 + 0x92);
                    /* WARNING: Could not recover jumptable at 0x0001002a7efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_1002a7f00(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  void *local_30;
  undefined8 local_28;
  
  local_28 = param_2;
  FUN_1000f2950(auStack_38,param_2);
  FUN_1001cd23c(param_1 + 0x5c0,auStack_38,1,1);
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
  }
  FUN_1001cd374(param_1 + 0x5c0,&local_28);
  return;
}




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




void FUN_1002a81c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002a81d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x240))();
  return;
}




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




void FUN_1002a81d8(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002a81d8_1014826a8;
  param_1[0xb3] = &PTR_FUN_10145eb78;
  param_1[0xca] = &PTR_FUN_10145ecf0;
  if ((void *)param_1[0xdb] != (void *)0x0) {
    operator_delete__((void *)param_1[0xdb]);
    param_1[0xdb] = 0;
    param_1[0xda] = 0;
  }
  FUN_100651068(param_1 + 0xb3);
  thunk_FUN_100651068(param_1 + 0x8d);
  thunk_FUN_100651068(param_1 + 0x67);
  param_1[0x49] = &PTR_FUN_1014a7108;
  param_1[0x60] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 99);
  FUN_10064e2bc(param_1 + 0x49);
  FUN_10052ffb4(param_1);
  return;
}




void thunk_FUN_1002a81d8(void)

{
  FUN_1002a81d8();
  return;
}




void FUN_1002a8278(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002a81d8();
  operator_delete(pvVar1);
  return;
}




void FUN_1002a828c(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  float local_38;
  undefined4 uStack_34;
  
  FUN_10064e32c();
  local_38 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  uStack_34 = param_2;
  FUN_10064e48c(param_3 + 0x49,&local_38);
  plVar1 = param_3 + 0x8d;
  FUN_100651708(local_38 + -64.0,plVar1,1);
  plVar2 = param_3 + 0x67;
  FUN_10064e5ec(0x42000000,0x42000000,plVar2,0,param_3,0);
  FUN_10064e72c(0x41200000,param_3 + 0xb3,3,plVar2,1);
  FUN_10064e91c(param_3 + 0xb3,plVar2);
  FUN_10064e72c(0x40800000,plVar1,0,plVar2,2);
  FUN_10064e72c(0,plVar1,3,plVar2,3);
  return;
}




void FUN_1002a8378(long *param_1)

{
  FUN_1006513c0(param_1 + 0x67);
                    /* WARNING: Could not recover jumptable at 0x0001002a83a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




int FUN_1002a83a8(long param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if ((float)param_2 + -64.0 <= 0.0) {
    iVar1 = 100;
  }
  else {
    uVar2 = FUN_100651368(param_1 + 0x338);
    iVar1 = FUN_1006512dc(param_1 + 0x468,(int)((float)param_2 + -64.0));
    iVar1 = (int)((float)iVar1 + (float)(uVar2 >> 0x20) + 68.0);
  }
  return iVar1;
}




void FUN_1002a8420(long *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 != (*(uint *)((long)param_1 + 0x84) & 4) >> 2) {
    uVar1 = 4;
    if (param_2 == 0) {
      uVar1 = 0;
    }
    *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xfffffffb | uVar1;
                    /* WARNING: Could not recover jumptable at 0x0001002a8450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xe8))();
    return;
  }
  return;
}




void FUN_1002a8458(long *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  void *local_30;
  undefined8 local_28;
  
  *(uint *)((long)param_1 + 0x61c) = *(uint *)((long)param_1 + 0x61c) | 4;
  local_28 = param_2;
  FUN_1000f2950(auStack_38,param_2);
  FUN_1001cd23c(param_1 + 0xb3,auStack_38,1,1);
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
  }
  FUN_1001cd374(param_1 + 0xb3,&local_28);
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_1002a84d8(long *param_1)

{
  FUN_1006513c0(param_1 + 0x8d);
                    /* WARNING: Could not recover jumptable at 0x0001002a8504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




long * FUN_1002a8508(long *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  code *local_60;
  long *plStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  puVar5 = (undefined8 *)FUN_10052fa40();
  puVar5[0x48] = 0;
  *puVar5 = &PTR_thunk_FUN_1002a86ec_101482800;
  puVar5 = puVar5 + 0x49;
  thunk_FUN_100652c08(puVar5);
  plVar1 = param_1 + 0x67;
  thunk_FUN_100650e64(plVar1);
  uVar2 = FUN_1004d2524("homepanel_cornerwidget_free_tile");
  uVar3 = FUN_100015208("homepanel_cornerwidget_free_tile",uVar2,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0x80000000 |
       *(uint *)((long)param_1 + 0x84) & 0x7fff | (uVar3 & 0xffff) << 0xf;
  (**(code **)(*param_1 + 0x78))(param_1,puVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  lVar6 = FUN_1002a887c(param_1,1);
  param_1[0x8d] = lVar6;
  FUN_100652cac(puVar5,PTR_s_build___VGX_common_atlas_101854980,"corner_widget_linktile_bg");
  uVar3 = *(uint *)((long)param_1 + 0x2cc);
  if ((uVar3 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x2cc) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x6c00;
    FUN_1000200a0(puVar5);
  }
  local_60 = (code *)CONCAT44(local_60._4_4_,0xffa0a0a0);
  FUN_100652dd4(puVar5,&local_60,2);
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_100651460(plVar1,&DAT_1011588a8);
  uVar7 = FUN_1004e0150("QUEST_BUTTON_FREE",0);
  FUN_1006513c0(plVar1,uVar7);
  local_38 = DAT_101d91884;
  local_60 = FUN_1002a86d8;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(param_1 + 1,&local_60);
  iVar4 = (**(code **)(*param_1 + 0x100))(param_1,0x3d4);
  FUN_10064e47c(0x44750000,(float)iVar4,param_1);
  (**(code **)(*param_1 + 0x90))(param_1);
  return param_1;
}




void FUN_1002a86d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002a86e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x240))();
  return;
}




long * thunk_FUN_1002a8508(long *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  code *pcStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puVar5 = (undefined8 *)FUN_10052fa40();
  puVar5[0x48] = 0;
  *puVar5 = &PTR_thunk_FUN_1002a86ec_101482800;
  puVar5 = puVar5 + 0x49;
  thunk_FUN_100652c08(puVar5);
  plVar1 = param_1 + 0x67;
  thunk_FUN_100650e64(plVar1);
  uVar2 = FUN_1004d2524("homepanel_cornerwidget_free_tile");
  uVar3 = FUN_100015208("homepanel_cornerwidget_free_tile",uVar2,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0x80000000 |
       *(uint *)((long)param_1 + 0x84) & 0x7fff | (uVar3 & 0xffff) << 0xf;
  (**(code **)(*param_1 + 0x78))(param_1,puVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  lVar6 = FUN_1002a887c(param_1,1);
  param_1[0x8d] = lVar6;
  FUN_100652cac(puVar5,PTR_s_build___VGX_common_atlas_101854980,"corner_widget_linktile_bg");
  uVar3 = *(uint *)((long)param_1 + 0x2cc);
  if ((uVar3 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x2cc) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x6c00;
    FUN_1000200a0(puVar5);
  }
  pcStack_60 = (code *)CONCAT44(pcStack_60._4_4_,0xffa0a0a0);
  FUN_100652dd4(puVar5,&pcStack_60,2);
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_100651460(plVar1,&DAT_1011588a8);
  uVar7 = FUN_1004e0150("QUEST_BUTTON_FREE",0);
  FUN_1006513c0(plVar1,uVar7);
  uStack_38 = DAT_101d91884;
  pcStack_60 = FUN_1002a86d8;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_60);
  iVar4 = (**(code **)(*param_1 + 0x100))(param_1,0x3d4);
  FUN_10064e47c(0x44750000,(float)iVar4,param_1);
  (**(code **)(*param_1 + 0x90))(param_1);
  return param_1;
}




void FUN_1002a86ec(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002a86ec_101482800;
  thunk_FUN_100651068(param_1 + 0x67);
  param_1[0x49] = &PTR_FUN_1014a7108;
  param_1[0x60] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 99);
  FUN_10064e2bc(param_1 + 0x49);
  FUN_10052ffb4(param_1);
  return;
}




void thunk_FUN_1002a86ec(void)

{
  FUN_1002a86ec();
  return;
}




void FUN_1002a8750(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002a86ec();
  operator_delete(pvVar1);
  return;
}




void FUN_1002a8764(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  undefined4 local_28;
  undefined4 uStack_24;
  
  FUN_10064e32c();
  local_28 = (**(code **)(*param_3 + 0x48))(param_3);
  uStack_24 = param_2;
  FUN_10064e48c(param_3 + 0x49,&local_28);
  FUN_10064e5ec(0x42000000,0x42000000,param_3 + 0x67,0,param_3,0);
  FUN_10064e5ec(0xc2700000,0,param_3[0x8d],8,param_3,5);
  return;
}




void FUN_1002a87ec(long *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 != (*(uint *)((long)param_1 + 0x84) & 4) >> 2) {
    uVar1 = 4;
    if (param_2 == 0) {
      uVar1 = 0;
    }
    *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xfffffffb | uVar1;
                    /* WARNING: Could not recover jumptable at 0x0001002a881c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xe8))();
    return;
  }
  return;
}




void FUN_1002a8824(long param_1)

{
  FUN_1001c3fc8(*(undefined8 *)(param_1 + 0x468));
  return;
}




int FUN_1002a882c(long param_1,uint param_2)

{
  ulong uVar1;
  
  if (0.0 < (float)param_2 + -64.0) {
    uVar1 = FUN_100651368(param_1 + 0x338);
    return (int)((float)(uVar1 >> 0x20) + 64.0);
  }
  return 100;
}




int FUN_1002a8844(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_100651368(param_1 + 0x338);
  return (int)((float)(uVar1 >> 0x20) + 64.0);
}




void * FUN_1002a887c(long *param_1,int param_2)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  
  pvVar1 = operator_new(0x6a0);
  lVar2 = thunk_FUN_1001c397c();
  uVar3 = 0x20;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xffffffdf | uVar3;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




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




void FUN_1002a8e70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002a8e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
  return;
}




void FUN_1002a8e80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002a8e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0xb8))();
  return;
}




void FUN_1002a8e90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002a8e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
  return;
}




void FUN_1002a8ea0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002a8eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))();
  return;
}




void FUN_1002a8eb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002a8ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x20))();
  return;
}




void FUN_1002a8ec0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002a8ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x28))();
  return;
}




void FUN_1002a8ed0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002a8edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x30))();
  return;
}




void FUN_1002a8ee0(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(*(long *)(param_1 + 0xe0) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0xe0) + 0x84) & 0xfffffffb | uVar1;
  return;
}




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




void FUN_1002a8f0c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10064e2bc();
  operator_delete(pvVar1);
  return;
}




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




void FUN_1002a9084(long param_1,ulong param_2,undefined8 param_3)

{
  FUN_1001c3fc8(*(long *)(param_1 + (param_2 & 0xffffffff) * 8 + 0xe8) + 0xbd0,param_3);
  return;
}




void FUN_1002a9098(long *param_1)

{
  FUN_1002ee1e8(param_1[0x19]);
                    /* WARNING: Could not recover jumptable at 0x0001002a90c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_1002a90c8(long *param_1)

{
  FUN_1002ee1e8(param_1[0x1a]);
                    /* WARNING: Could not recover jumptable at 0x0001002a90f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void * FUN_1002a90f8(long *param_1,int param_2)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  
  pvVar1 = operator_new(0x158);
  lVar2 = thunk_FUN_100655644();
  uVar3 = 0x20;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xffffffdf | uVar3;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void * FUN_1002a916c(long *param_1,int param_2)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  
  pvVar1 = operator_new(0x668);
  lVar2 = thunk_FUN_1002ee068();
  uVar3 = 0x20;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xffffffdf | uVar3;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void * FUN_1002a91e0(long *param_1,int param_2)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  
  pvVar1 = operator_new(0x1270);
  lVar2 = thunk_FUN_1002eecec();
  uVar3 = 0x20;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xffffffdf | uVar3;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




long * FUN_1002a9254(long *param_1)

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
  undefined *puVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  void *local_a8 [2];
  char local_91;
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar13 = (undefined8 *)FUN_10064e20c();
  puVar13[0x17] = 0;
  *puVar13 = &PTR_thunk_FUN_1002a99a8_101482aa0;
  puVar13 = puVar13 + 0x18;
  thunk_FUN_100652c08(puVar13);
  plVar1 = param_1 + 0x36;
  thunk_FUN_100652c08();
  plVar2 = param_1 + 0x54;
  thunk_FUN_1002ecd94(plVar2,0);
  plVar3 = param_1 + 0x1ce;
  FUN_10064e264(plVar3);
  plVar4 = param_1 + 0x1e5;
  FUN_10064e264(plVar4);
  thunk_FUN_1001c6e5c();
  thunk_FUN_1001c6e5c();
  plVar5 = param_1 + 0x2f0;
  thunk_FUN_100650e64(plVar5);
  plVar6 = param_1 + 0x316;
  thunk_FUN_100650e64(plVar6);
  plVar7 = param_1 + 0x33c;
  thunk_FUN_100650e64(plVar7);
  plVar8 = param_1 + 0x362;
  thunk_FUN_100650e64(plVar8);
  plVar9 = param_1 + 0x388;
  thunk_FUN_100650e64();
  thunk_FUN_1001c397c(param_1 + 0x3ae);
  (**(code **)(*param_1 + 0x78))(param_1,puVar13,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x3ae,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100642bd8(plVar3,plVar5,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(plVar4,param_1 + 0x276,1);
  FUN_100642bd8(plVar4,plVar8,1);
  FUN_100642bd8(plVar4,param_1 + 0x1fc,1);
  FUN_100642bd8(plVar4,plVar7,1);
  FUN_100642bd8(plVar4,plVar1,1);
  FUN_100642bd8(plVar4,plVar6,1);
  FUN_100642bd8(plVar4,plVar9,1);
  FUN_100652cac(puVar13,PTR_s_build___VGX_common_atlas_101854980,"corner_widget_profile_bg");
  uVar12 = *(uint *)((long)param_1 + 0x144);
  if ((uVar12 & 0x7f80) != 0x7100) {
    *(uint *)((long)param_1 + 0x144) = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x7100;
    FUN_1000200a0(puVar13);
  }
  uVar11 = FUN_1004d2524("homepanel_profile_avatar");
  uVar12 = FUN_100015208("homepanel_profile_avatar",uVar11,0x1234);
  *(uint *)((long)param_1 + 0x324) =
       *(uint *)((long)param_1 + 0x324) & 0x80000000 |
       *(uint *)((long)param_1 + 0x324) & 0x7fff | (uVar12 & 0xffff) << 0xf;
  FUN_1002eb970(plVar2,0);
  puVar10 = PTR_s_build___VGX_common_atlas_101854980;
  FUN_10001549c(&local_90,"player_avatar_placeholder");
  FUN_10001549c(local_a8,"player_avatar_placeholder");
  FUN_1002ece5c(plVar2,puVar10,&local_90,local_a8);
  if (local_91 < '\0') {
    operator_delete(local_a8[0]);
  }
  if (local_80._7_1_ < '\0') {
    operator_delete(local_90);
  }
  local_68 = DAT_101d91884;
  local_90 = FUN_1002a97cc;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x55,&local_90);
  FUN_100651038(plVar5,PTR_s_build___Fonts_Brandon_Regular_48_10184e200);
  FUN_100651460(plVar5,&DAT_1011588ac);
  FUN_1001c7278(param_1 + 0x1fc,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_1001c7278(param_1 + 0x276,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_100651038(plVar7,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_100651038(plVar8,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_100651038(plVar6,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_100651038(plVar9,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_100651460(plVar7,&DAT_1011588ac);
  uVar14 = FUN_1004e0150("GENERIC_3V3",0);
  FUN_1006513c0(plVar7,uVar14);
  FUN_100651460(plVar8,&DAT_1011588ac);
  uVar14 = FUN_1004e0150("GENERIC_5V5",0);
  FUN_1006513c0(plVar8,uVar14);
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"brawl_trophy");
  uVar12 = *(uint *)((long)param_1 + 0x234);
  if ((uVar12 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x234) = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x2600;
    FUN_1000200a0(plVar1);
  }
  FUN_100651460(plVar6,&DAT_1011588ac);
  FUN_100651460(plVar9,&DAT_1011588ac);
  uVar14 = FUN_1004e0150("MENU_PLAY_MENU_MODE_BLITZ_SELECTION_TITLE",0);
  FUN_1006513c0(plVar9,uVar14);
  local_68 = DAT_101dbd458;
  local_90 = FUN_1002a97dc;
  plVar1 = param_1 + 0x19;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  local_68 = DAT_101dbd484;
  local_90 = FUN_1002a97dc;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  local_68 = DAT_101dbd460;
  local_90 = FUN_1002a9828;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  local_68 = DAT_101dbd48c;
  local_90 = FUN_1002a9828;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  local_68 = DAT_101dbd4a4;
  local_90 = FUN_1002a9874;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  *(uint *)((long)param_1 + 0x144) = *(uint *)((long)param_1 + 0x144) | 0x10;
  FUN_1002a98c0(param_1);
  (**(code **)(*param_1 + 0xe8))(param_1);
  return param_1;
}




void FUN_1002a97cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002a97d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0xb8))();
  return;
}




void FUN_1002a97dc(long param_1)

{
  undefined1 auStack_40 [32];
  
  FUN_100644aec(auStack_40,DAT_101dbd484,0);
  FUN_100644c34(param_1 + 0x2a0,auStack_40,0);
  return;
}




void FUN_1002a9828(long param_1)

{
  undefined1 auStack_40 [32];
  
  FUN_100644aec(auStack_40,DAT_101dbd48c,0);
  FUN_100644c34(param_1 + 0x2a0,auStack_40,0);
  return;
}




void FUN_1002a9874(long param_1)

{
  undefined1 auStack_40 [32];
  
  FUN_100644aec(auStack_40,DAT_101dbd4a4,0);
  FUN_100644c34(param_1 + 0x2a0,auStack_40,0);
  return;
}




void FUN_1002a98c0(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)thunk_FUN_10064dde8();
  FUN_10064e524(param_1 + 0xf28,plVar1);
  (**(code **)(*plVar1 + 0x68))(plVar1,param_1 + 0x13b0,0,2);
  (**(code **)(*plVar1 + 0x68))(plVar1,param_1 + 0x1b10,1,10);
  (**(code **)(*plVar1 + 0x68))(plVar1,param_1 + 0xfe0,0,2);
  (**(code **)(*plVar1 + 0x68))(plVar1,param_1 + 0x19e0,1,10);
  (**(code **)(*plVar1 + 0x68))(plVar1,param_1 + 0x1b0,0,2);
                    /* WARNING: Could not recover jumptable at 0x0001002a99a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x68))(plVar1,param_1 + 0x1c40,1,10);
  return;
}




long * thunk_FUN_1002a9254(long *param_1)

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
  undefined *puVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  void *apvStack_a8 [2];
  char cStack_91;
  code *pcStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar13 = (undefined8 *)FUN_10064e20c();
  puVar13[0x17] = 0;
  *puVar13 = &PTR_thunk_FUN_1002a99a8_101482aa0;
  puVar13 = puVar13 + 0x18;
  thunk_FUN_100652c08(puVar13);
  plVar1 = param_1 + 0x36;
  thunk_FUN_100652c08();
  plVar2 = param_1 + 0x54;
  thunk_FUN_1002ecd94(plVar2,0);
  plVar3 = param_1 + 0x1ce;
  FUN_10064e264(plVar3);
  plVar4 = param_1 + 0x1e5;
  FUN_10064e264(plVar4);
  thunk_FUN_1001c6e5c();
  thunk_FUN_1001c6e5c();
  plVar5 = param_1 + 0x2f0;
  thunk_FUN_100650e64(plVar5);
  plVar6 = param_1 + 0x316;
  thunk_FUN_100650e64(plVar6);
  plVar7 = param_1 + 0x33c;
  thunk_FUN_100650e64(plVar7);
  plVar8 = param_1 + 0x362;
  thunk_FUN_100650e64(plVar8);
  plVar9 = param_1 + 0x388;
  thunk_FUN_100650e64();
  thunk_FUN_1001c397c(param_1 + 0x3ae);
  (**(code **)(*param_1 + 0x78))(param_1,puVar13,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x3ae,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100642bd8(plVar3,plVar5,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(plVar4,param_1 + 0x276,1);
  FUN_100642bd8(plVar4,plVar8,1);
  FUN_100642bd8(plVar4,param_1 + 0x1fc,1);
  FUN_100642bd8(plVar4,plVar7,1);
  FUN_100642bd8(plVar4,plVar1,1);
  FUN_100642bd8(plVar4,plVar6,1);
  FUN_100642bd8(plVar4,plVar9,1);
  FUN_100652cac(puVar13,PTR_s_build___VGX_common_atlas_101854980,"corner_widget_profile_bg");
  uVar12 = *(uint *)((long)param_1 + 0x144);
  if ((uVar12 & 0x7f80) != 0x7100) {
    *(uint *)((long)param_1 + 0x144) = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x7100;
    FUN_1000200a0(puVar13);
  }
  uVar11 = FUN_1004d2524("homepanel_profile_avatar");
  uVar12 = FUN_100015208("homepanel_profile_avatar",uVar11,0x1234);
  *(uint *)((long)param_1 + 0x324) =
       *(uint *)((long)param_1 + 0x324) & 0x80000000 |
       *(uint *)((long)param_1 + 0x324) & 0x7fff | (uVar12 & 0xffff) << 0xf;
  FUN_1002eb970(plVar2,0);
  puVar10 = PTR_s_build___VGX_common_atlas_101854980;
  FUN_10001549c(&pcStack_90,"player_avatar_placeholder");
  FUN_10001549c(apvStack_a8,"player_avatar_placeholder");
  FUN_1002ece5c(plVar2,puVar10,&pcStack_90,apvStack_a8);
  if (cStack_91 < '\0') {
    operator_delete(apvStack_a8[0]);
  }
  if (uStack_80._7_1_ < '\0') {
    operator_delete(pcStack_90);
  }
  uStack_68 = DAT_101d91884;
  pcStack_90 = FUN_1002a97cc;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x55,&pcStack_90);
  FUN_100651038(plVar5,PTR_s_build___Fonts_Brandon_Regular_48_10184e200);
  FUN_100651460(plVar5,&DAT_1011588ac);
  FUN_1001c7278(param_1 + 0x1fc,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_1001c7278(param_1 + 0x276,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_100651038(plVar7,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_100651038(plVar8,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_100651038(plVar6,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_100651038(plVar9,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_100651460(plVar7,&DAT_1011588ac);
  uVar14 = FUN_1004e0150("GENERIC_3V3",0);
  FUN_1006513c0(plVar7,uVar14);
  FUN_100651460(plVar8,&DAT_1011588ac);
  uVar14 = FUN_1004e0150("GENERIC_5V5",0);
  FUN_1006513c0(plVar8,uVar14);
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"brawl_trophy");
  uVar12 = *(uint *)((long)param_1 + 0x234);
  if ((uVar12 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x234) = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x2600;
    FUN_1000200a0(plVar1);
  }
  FUN_100651460(plVar6,&DAT_1011588ac);
  FUN_100651460(plVar9,&DAT_1011588ac);
  uVar14 = FUN_1004e0150("MENU_PLAY_MENU_MODE_BLITZ_SELECTION_TITLE",0);
  FUN_1006513c0(plVar9,uVar14);
  uStack_68 = DAT_101dbd458;
  pcStack_90 = FUN_1002a97dc;
  plVar1 = param_1 + 0x19;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&pcStack_90);
  uStack_68 = DAT_101dbd484;
  pcStack_90 = FUN_1002a97dc;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&pcStack_90);
  uStack_68 = DAT_101dbd460;
  pcStack_90 = FUN_1002a9828;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&pcStack_90);
  uStack_68 = DAT_101dbd48c;
  pcStack_90 = FUN_1002a9828;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&pcStack_90);
  uStack_68 = DAT_101dbd4a4;
  pcStack_90 = FUN_1002a9874;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&pcStack_90);
  *(uint *)((long)param_1 + 0x144) = *(uint *)((long)param_1 + 0x144) | 0x10;
  FUN_1002a98c0(param_1);
  (**(code **)(*param_1 + 0xe8))(param_1);
  return param_1;
}




void FUN_1002a99a8(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002a99a8_101482aa0;
  param_1[0x3ae] = &PTR_FUN_101461c58;
  thunk_FUN_1000160a0(param_1 + 0x47a);
  thunk_FUN_100651068(param_1 + 0x453);
  thunk_FUN_100651068(param_1 + 0x42d);
  thunk_FUN_100651068(param_1 + 0x407);
  param_1[0x3e9] = &PTR_FUN_1014a7108;
  param_1[0x400] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x403);
  FUN_10064e2bc(param_1 + 0x3e9);
  param_1[0x3bf] = &PTR_FUN_1014a6db0;
  param_1[0x3d6] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x3d9);
  FUN_10064e2bc(param_1 + 0x3bf);
  FUN_10064221c(param_1 + 0x3ae);
  thunk_FUN_100651068(param_1 + 0x388);
  thunk_FUN_100651068(param_1 + 0x362);
  thunk_FUN_100651068(param_1 + 0x33c);
  thunk_FUN_100651068(param_1 + 0x316);
  thunk_FUN_100651068(param_1 + 0x2f0);
  FUN_10017d364(param_1 + 0x276);
  FUN_10017d364(param_1 + 0x1fc);
  thunk_FUN_10064e2bc(param_1 + 0x1e5);
  thunk_FUN_10064e2bc(param_1 + 0x1ce);
  FUN_1001acc08(param_1 + 0x54);
  param_1[0x36] = &PTR_FUN_1014a7108;
  param_1[0x4d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x50);
  FUN_10064e2bc(param_1 + 0x36);
  param_1[0x18] = &PTR_FUN_1014a7108;
  param_1[0x2f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x32);
  FUN_10064e2bc(param_1 + 0x18);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002a99a8(void)

{
  FUN_1002a99a8();
  return;
}




void FUN_1002a9b3c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002a99a8();
  operator_delete(pvVar1);
  return;
}




void FUN_1002a9b50(long param_1)

{
  FUN_1001c3fc8(param_1 + 0x1d70);
  return;
}




void FUN_1002a9b5c(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float local_70;
  float fStack_6c;
  float local_68;
  float local_64;
  
  FUN_10064e32c();
  local_68 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  local_64 = param_2;
  FUN_10064e48c(param_3 + 0x18,&local_68);
  fVar4 = local_64;
  fVar6 = local_64 + -64.0;
  plVar1 = param_3 + 0x54;
  FUN_10064e47c(fVar6,fVar6,plVar1);
  local_70 = fVar6;
  fStack_6c = fVar6;
  FUN_1002ecef4(plVar1,&local_70);
  FUN_10064e68c(0x42000000,0,plVar1,7);
  FUN_10064e5ec(0xc1600000,0x41600000,param_3 + 0x3ae,8,plVar1,1);
  plVar1 = param_3 + 0x1ce;
  FUN_10064e47c((-14.0 - fVar4) + local_68,local_64 + -64.0,plVar1);
  FUN_10064e68c(0xc2000000,0,plVar1,5);
  plVar3 = param_3 + 0x2f0;
  uVar5 = FUN_10064e3cc(plVar1);
  FUN_10065179c(uVar5,0,0x3f800000,plVar3);
  FUN_10064e5ec(0,0xc1000000,plVar3,3,plVar1,7);
  FUN_10064e47c(0x42a00000,0x42a00000,param_3 + 0x1fc);
  FUN_10064e47c(0x42a00000,0x42a00000,param_3 + 0x276);
  plVar2 = param_3 + 0x36;
  FUN_10064e47c(0x42a00000,0x42a00000,plVar2);
  fVar4 = (float)FUN_100652e60(plVar2);
  FUN_10065179c(fVar4 * 0.8,0,0x3f800000,param_3 + 0x316);
  fVar4 = 0.0;
  FUN_10064e5ec(0,0,param_3 + 0x316,8,plVar2,8);
  plVar2 = param_3 + 0x1e5;
  uVar5 = FUN_10064e3cc(plVar1);
  FUN_10064e3cc(plVar1);
  FUN_10064e47c(uVar5,fVar4 * 0.5 + -4.0,plVar2);
  FUN_10064e32c(plVar2);
  FUN_10064e5ec(0,0x41000000,plVar2,0,plVar1,7);
  FUN_10015d3ec();
  uVar5 = FUN_100164f34();
  FUN_1006513c0(plVar3,uVar5);
  (**(code **)(*param_3 + 0xe8))(param_3);
  return;
}




void FUN_1002a9da4(long *param_1)

{
  FUN_1006513c0(param_1 + 0x2f0);
                    /* WARNING: Could not recover jumptable at 0x0001002a9dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_1002a9dd8(long *param_1,int param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  undefined1 auStack_50 [8];
  void *local_48;
  
  FUN_1001c6fd8(param_1 + 0x1fc);
  FUN_1001c6fd8(param_1 + 0x276,param_3);
  FUN_1004e313c(auStack_50);
  FUN_1004e38ac(auStack_50,"%d");
  FUN_1006513c0(param_1 + 0x316,auStack_50);
  uVar1 = (uint)(0 < (int)param_3);
  *(uint *)((long)param_1 + 0x1434) =
       *(uint *)((long)param_1 + 0x1434) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x1434) & 3 | uVar1 << 2;
  *(uint *)((long)param_1 + 0x1b94) =
       *(uint *)((long)param_1 + 0x1b94) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x1b94) & 3 | uVar1 << 2;
  *(uint *)((long)param_1 + 0x1064) =
       *(uint *)((long)param_1 + 0x1064) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x1064) & 3 | (uint)(0 < param_2) << 2;
  *(uint *)((long)param_1 + 0x1a64) =
       *(uint *)((long)param_1 + 0x1a64) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x1a64) & 3 | (uint)(0 < param_2) << 2;
  uVar1 = (uint)(0 < param_4);
  *(uint *)((long)param_1 + 0x234) =
       *(uint *)((long)param_1 + 0x234) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x234) & 3 | uVar1 << 2;
  *(uint *)((long)param_1 + 0x1cc4) =
       *(uint *)((long)param_1 + 0x1cc4) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x1cc4) & 3 | uVar1 << 2;
  *(uint *)((long)param_1 + 0x1934) =
       *(uint *)((long)param_1 + 0x1934) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x1934) & 3 | (uint)(0 < param_4) << 2;
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  return;
}




void FUN_1002a9ee0(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x1df4) = *(uint *)(param_1 + 0x1df4) & 0xfffffffb | uVar1;
  FUN_1001c3fd0(param_1 + 0x1d70);
  return;
}




long * FUN_1002a9f0c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 local_40 [2];
  undefined1 local_38 [8];
  
  puVar3 = (undefined8 *)FUN_10064e20c();
  puVar3[0x17] = 0;
  puVar3[0x18] = 0;
  *puVar3 = &PTR_thunk_FUN_1002aa04c_101482be8;
  puVar3[0x19] = 0;
  puVar3 = puVar3 + 0x1a;
  thunk_FUN_100650e64(puVar3);
  plVar1 = param_1 + 0x40;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x66;
  thunk_FUN_1005357f4(plVar2);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100534ad8(plVar2,puVar3,1);
  FUN_100534ad8(plVar2,plVar1,1);
  local_38[0] = 9;
  FUN_100534ebc(plVar2,local_38);
  FUN_100651594(puVar3,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&DAT_10115a168);
  uVar4 = FUN_1004e0150("INVENTORY_CHARMS_TITLE",0);
  FUN_1006513c0(puVar3,uVar4);
  local_40[0] = 0xffb6acaa;
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,local_40);
  uVar4 = FUN_1004e0150("INVENTORY_CHARMS_INSTRUCTION",0);
  FUN_1006513c0(plVar1,uVar4);
  FUN_100651700(plVar1,3);
  return param_1;
}




long * thunk_FUN_1002a9f0c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 auStack_40 [2];
  undefined1 auStack_38 [8];
  
  puVar3 = (undefined8 *)FUN_10064e20c();
  puVar3[0x17] = 0;
  puVar3[0x18] = 0;
  *puVar3 = &PTR_thunk_FUN_1002aa04c_101482be8;
  puVar3[0x19] = 0;
  puVar3 = puVar3 + 0x1a;
  thunk_FUN_100650e64(puVar3);
  plVar1 = param_1 + 0x40;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x66;
  thunk_FUN_1005357f4(plVar2);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100534ad8(plVar2,puVar3,1);
  FUN_100534ad8(plVar2,plVar1,1);
  auStack_38[0] = 9;
  FUN_100534ebc(plVar2,auStack_38);
  FUN_100651594(puVar3,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&DAT_10115a168);
  uVar4 = FUN_1004e0150("INVENTORY_CHARMS_TITLE",0);
  FUN_1006513c0(puVar3,uVar4);
  auStack_40[0] = 0xffb6acaa;
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,auStack_40);
  uVar4 = FUN_1004e0150("INVENTORY_CHARMS_INSTRUCTION",0);
  FUN_1006513c0(plVar1,uVar4);
  FUN_100651700(plVar1,3);
  return param_1;
}




void FUN_1002aa04c(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  uint *puVar3;
  long *plVar4;
  
  *param_1 = &PTR_thunk_FUN_1002aa04c_101482be8;
  puVar3 = (uint *)(param_1 + 0x18);
  uVar2 = *puVar3;
  plVar1 = (long *)param_1[0x19];
  plVar4 = plVar1;
  if (uVar2 != 0) {
    do {
      if ((long *)*plVar4 != (long *)0x0) {
        (**(code **)(*(long *)*plVar4 + 8))();
        uVar2 = *(uint *)(param_1 + 0x18);
        plVar1 = (long *)param_1[0x19];
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1 + uVar2);
  }
  if (plVar1 != (long *)0x0) {
    *puVar3 = 0;
  }
  thunk_FUN_100534a3c(param_1 + 0x66);
  thunk_FUN_100651068(param_1 + 0x40);
  thunk_FUN_100651068(param_1 + 0x1a);
  if ((void *)param_1[0x19] != (void *)0x0) {
    operator_delete__((void *)param_1[0x19]);
    puVar3[0] = 0;
    puVar3[1] = 0;
    param_1[0x19] = 0;
  }
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002aa04c(void)

{
  FUN_1002aa04c();
  return;
}




void FUN_1002aa0f4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002aa04c();
  operator_delete(pvVar1);
  return;
}




void FUN_1002aa108(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  undefined4 local_78;
  undefined4 uStack_74;
  
  plVar1 = param_3 + 0x66;
  local_78 = (**(code **)(*param_3 + 0x48))();
  uStack_74 = param_2;
  FUN_10064e48c(plVar1,&local_78);
  plVar2 = param_3 + 0x40;
  fVar7 = (float)FUN_10064e3cc(plVar1);
  FUN_100651708(fVar7 + -20.0,plVar2,1);
  FUN_10064e5ec(0,0,param_3 + 0x1a,4,plVar1,4);
  FUN_10064e5ec(0x41200000,0x41f00000,plVar2,4,param_3 + 0x1a,6);
  if ((int)param_3[0x18] != 0) {
    uVar6 = 0;
    uVar4 = 0;
    do {
      uVar5 = *(undefined8 *)(param_3[0x19] + uVar6 * 8);
      fVar7 = (float)(**(code **)(*param_3 + 0x48))(param_3);
      fVar8 = (float)(**(code **)(*param_3 + 0x48))(param_3);
      FUN_10064e47c(fVar7 * 0.16666667 + -13.333334,fVar8 * 0.16666667,uVar5);
      if (uVar6 == 0) {
        FUN_10064e5ec(0,0x41200000,*(undefined8 *)param_3[0x19],0,plVar2,3);
        puVar3 = (undefined8 *)param_3[0x19];
        uVar4 = *puVar3;
      }
      else {
        uVar5 = *(undefined8 *)(param_3[0x19] + uVar6 * 8);
        if ((int)uVar6 + (int)((uVar6 & 0xffffffff) / 6) * -6 == 0) {
          FUN_10064e5ec(0,0,uVar5,0,uVar4,3);
          puVar3 = (undefined8 *)param_3[0x19];
          uVar4 = puVar3[uVar6];
        }
        else {
          FUN_10064e5ec(0x41200000,0,uVar5,7,
                        *(undefined8 *)(param_3[0x19] + (ulong)((int)uVar6 - 1) * 8),5);
          puVar3 = (undefined8 *)param_3[0x19];
        }
      }
      (**(code **)(*(long *)puVar3[uVar6] + 0x138))();
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_3 + 0x18));
  }
  return;
}




void FUN_1002aa2ec(long param_1,uint *param_2)

{
  ulong uVar1;
  undefined8 local_48;
  
  if (*param_2 != 0) {
    uVar1 = 0;
    do {
      operator_new(0x478);
      local_48 = FUN_1002aa498();
      FUN_1002aa388(local_48,*(undefined8 *)(*(long *)(param_2 + 2) + uVar1 * 8));
      FUN_1002aa414(param_1 + 0xc0,&local_48);
      FUN_100534ad8(param_1 + 0x330,local_48,1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *param_2);
  }
  FUN_1002aa108(param_1);
  return;
}




void FUN_1002aa388(long param_1,long param_2)

{
  undefined8 ***pppuVar1;
  long *plVar2;
  undefined8 **local_48 [2];
  char local_31;
  
  *(long *)(param_1 + 0x148) = param_2;
  param_1 = param_1 + 0x388;
  FUN_100652d8c(param_1);
  FUN_1000e8a14(local_48,param_2 + 0x18);
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100652ca4(param_1,pppuVar1);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  plVar2 = (long *)(param_2 + 0x30);
  if (*(char *)(param_2 + 0x47) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  FUN_100652cdc(param_1,plVar2);
  return;
}




void FUN_1002aa414(uint *param_1,undefined8 *param_2)

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
    FUN_1002aa9e4(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void thunk_FUN_1002aa108(void)

{
  FUN_1002aa108();
  return;
}




long * FUN_1002aa498(long *param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  code *local_60;
  long *plStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  puVar3 = (undefined8 *)FUN_10064f204();
  *puVar3 = &PTR_thunk_FUN_1002aa5e8_101482d30;
  puVar3[0x29] = 0;
  puVar3 = puVar3 + 0x2a;
  thunk_FUN_10064f204(puVar3);
  plVar1 = param_1 + 0x53;
  thunk_FUN_100652c08(plVar1);
  thunk_FUN_100652c08(param_1 + 0x71);
  (**(code **)(*param_1 + 0x78))(param_1,puVar3,1);
  FUN_10064f31c(puVar3,plVar1,1);
  FUN_10064f31c(puVar3,param_1 + 0x71,1);
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"speech_bubble_deselected");
  uVar2 = *(uint *)((long)param_1 + 0x31c);
  if ((uVar2 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x31c) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x2600;
    FUN_1000200a0(plVar1);
  }
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  local_38 = DAT_101dbd460;
  local_60 = thunk_FUN_1002aa8f4;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(param_1 + 1,&local_60);
  local_38 = DAT_101dbd48c;
  local_60 = thunk_FUN_1002aa8f4;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(param_1 + 1,&local_60);
  return param_1;
}




void thunk_FUN_1002aa8f4(long param_1)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auStack_78 [32];
  undefined8 **ppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  puVar3 = *(undefined8 **)(param_1 + 0x148);
  if ((char)*(byte *)((long)puVar3 + 0x17) < '\0') {
    uVar4 = puVar3[1];
    if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_1002aa9d8();
    }
    puVar3 = (undefined8 *)*puVar3;
  }
  else {
    uVar4 = (ulong)*(byte *)((long)puVar3 + 0x17);
  }
  if (uVar4 < 0x17) {
    pppuVar1 = &ppuStack_58;
    uStack_48 = CONCAT17((char)uVar4,(undefined7)uStack_48);
    if (uVar4 == 0) goto LAB_1002aa97c;
  }
  else {
    uVar5 = uVar4 + 0x10 & 0xfffffffffffffff0;
    pppuVar1 = operator_new(uVar5);
    uStack_48 = uVar5 | 0x8000000000000000;
    ppuStack_58 = pppuVar1;
    uStack_50 = uVar4;
  }
  _memcpy(pppuVar1,puVar3,uVar4);
LAB_1002aa97c:
  *(undefined1 *)((long)pppuVar1 + uVar4) = 0;
  uVar2 = FUN_100644a94("EVENT_ACTIVATE_CHARM");
  FUN_100644aec(auStack_78,uVar2,&ppuStack_58);
  FUN_100644c34(param_1,auStack_78,1);
  if ((long)uStack_48 < 0) {
    operator_delete(ppuStack_58);
  }
  return;
}




void FUN_1002aa5e8(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002aa5e8_101482d30;
  param_1[0x29] = 0;
  param_1[0x71] = &PTR_FUN_1014a7108;
  param_1[0x88] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8b);
  FUN_10064e2bc(param_1 + 0x71);
  param_1[0x53] = &PTR_FUN_1014a7108;
  param_1[0x6a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6d);
  FUN_10064e2bc(param_1 + 0x53);
  param_1[0x2a] = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x41);
  FUN_10064e2bc(param_1 + 0x2a);
  *param_1 = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002aa5e8(void)

{
  FUN_1002aa5e8();
  return;
}




void FUN_1002aa69c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002aa5e8();
  operator_delete(pvVar1);
  return;
}




void FUN_1002aa6b0(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  undefined4 local_48;
  undefined4 uStack_44;
  
  plVar1 = param_3 + 0x2a;
  local_48 = (**(code **)(*param_3 + 0x48))();
  uStack_44 = param_2;
  FUN_10064e48c(plVar1,&local_48);
  plVar2 = param_3 + 0x53;
  fVar4 = (float)FUN_10064e3cc(plVar1);
  fVar5 = (float)FUN_1006531b0(plVar2);
  fVar5 = (fVar4 * 0.8) / fVar5;
  bVar3 = false;
  if ((*(float *)(param_3 + 0x5c) == fVar5) &&
     (bVar3 = false, !NAN(*(float *)((long)param_3 + 0x2e4)) && !NAN(fVar5))) {
    bVar3 = *(float *)((long)param_3 + 0x2e4) == fVar5;
  }
  if (!bVar3) {
    *(float *)(param_3 + 0x5c) = fVar5;
    *(float *)((long)param_3 + 0x2e4) = fVar5;
    FUN_1000200a0(plVar2);
  }
  FUN_10064e5ec(0,0,plVar2,8,plVar1,8);
  FUN_10064e5ec(0,0xc1200000,param_3 + 0x71,8,plVar2,8);
  FUN_1002aa78c(param_3);
  return;
}




void FUN_1002aa78c(long param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x148) + 0x60);
  if (iVar1 == 3) {
    FUN_100652cdc(param_1 + 0x298,"speech_bubble_deselected");
    uVar2 = *(uint *)(param_1 + 0x31c);
    if ((uVar2 & 0x7f80) != 0x2600) {
      *(uint *)(param_1 + 0x31c) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x2600;
      FUN_1000200a0(param_1 + 0x298);
    }
    uVar2 = *(uint *)(param_1 + 0x40c);
    if ((uVar2 & 0x7f80) != 0x2600) {
      uVar2 = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x2600;
LAB_1002aa864:
      *(uint *)(param_1 + 0x40c) = uVar2;
      FUN_1000200a0(param_1 + 0x388);
    }
  }
  else {
    if (iVar1 == 2) {
      FUN_100652cdc(param_1 + 0x298,"speech_bubble_deselected");
      if ((~*(uint *)(param_1 + 0x31c) & 0x7f80) != 0) {
        *(uint *)(param_1 + 0x31c) = *(uint *)(param_1 + 0x31c) | 0x7f80;
        FUN_1000200a0(param_1 + 0x298);
      }
      if ((~*(uint *)(param_1 + 0x40c) & 0x7f80) != 0) {
        *(uint *)(param_1 + 0x40c) = *(uint *)(param_1 + 0x40c) | 0x7f80;
        FUN_1000200a0(param_1 + 0x388);
      }
      uVar2 = *(uint *)(param_1 + 0x84) | 0x10;
      goto LAB_1002aa8d4;
    }
    if (iVar1 != 0) {
      return;
    }
    FUN_100652cdc(param_1 + 0x298,"speech_bubble_selected");
    if ((~*(uint *)(param_1 + 0x31c) & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x31c) = *(uint *)(param_1 + 0x31c) | 0x7f80;
      FUN_1000200a0(param_1 + 0x298);
    }
    if ((~*(uint *)(param_1 + 0x40c) & 0x7f80) != 0) {
      uVar2 = *(uint *)(param_1 + 0x40c) | 0x7f80;
      goto LAB_1002aa864;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x84) & 0xffffffef;
LAB_1002aa8d4:
  *(uint *)(param_1 + 0x84) = uVar2;
  return;
}




void FUN_1002aa8e8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002aa8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))();
  return;
}




void FUN_1002aa8f4(long param_1)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auStack_78 [32];
  undefined8 **local_58;
  ulong local_50;
  undefined8 uStack_48;
  
  puVar3 = *(undefined8 **)(param_1 + 0x148);
  if ((char)*(byte *)((long)puVar3 + 0x17) < '\0') {
    uVar4 = puVar3[1];
    if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_1002aa9d8();
    }
    puVar3 = (undefined8 *)*puVar3;
  }
  else {
    uVar4 = (ulong)*(byte *)((long)puVar3 + 0x17);
  }
  if (uVar4 < 0x17) {
    pppuVar1 = &local_58;
    uStack_48 = CONCAT17((char)uVar4,(undefined7)uStack_48);
    if (uVar4 == 0) goto LAB_1002aa97c;
  }
  else {
    uVar5 = uVar4 + 0x10 & 0xfffffffffffffff0;
    pppuVar1 = operator_new(uVar5);
    uStack_48 = uVar5 | 0x8000000000000000;
    local_58 = pppuVar1;
    local_50 = uVar4;
  }
  _memcpy(pppuVar1,puVar3,uVar4);
LAB_1002aa97c:
  *(undefined1 *)((long)pppuVar1 + uVar4) = 0;
  uVar2 = FUN_100644a94("EVENT_ACTIVATE_CHARM");
  FUN_100644aec(auStack_78,uVar2,&local_58);
  FUN_100644c34(param_1,auStack_78,1);
  if ((long)uStack_48 < 0) {
    operator_delete(local_58);
  }
  return;
}




void FUN_1002aa9d8(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




void FUN_1002aa9e4(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




long * FUN_1002aaa60(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 local_48 [8];
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  puVar4[0x17] = 0;
  puVar4[0x18] = 0;
  *puVar4 = &PTR_thunk_FUN_1002aada4_101482e80;
  puVar4[0x19] = 0;
  puVar4 = puVar4 + 0x1a;
  thunk_FUN_10064f204(puVar4);
  plVar1 = param_1 + 0x43;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x69;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x8f;
  thunk_FUN_1005357f4(plVar3);
  param_1[0x1d4] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100534ad8(plVar3,puVar4,1);
  FUN_10064f31c(puVar4,plVar1,1);
  FUN_10064f31c(puVar4,plVar2,1);
  local_48[0] = 9;
  FUN_100534ebc(plVar3,local_48);
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248,&DAT_10115a168);
  uVar5 = FUN_1004e0150("INVENTORY_HAT_TAB_TITLE",0);
  FUN_1006513c0(plVar1,uVar5);
  FUN_100651594(plVar2,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8,&DAT_10115a168);
  uVar5 = FUN_1004e0150("INVENTORY_HAT_HEADER_INSTRUCTION",0);
  FUN_1006513c0(plVar2,uVar5);
  FUN_1002aabbc(param_1);
  return param_1;
}




void FUN_1002aabbc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  undefined4 uVar7;
  
  FUN_10064e48c(param_1,param_1 + 0xea0);
  FUN_10064e48c(param_1 + 0x478,param_1 + 0xea0);
  lVar4 = param_1 + 0x218;
  FUN_10065179c(*(float *)(param_1 + 0xea0) * 0.2,0,0x3f800000,lVar4);
  lVar1 = param_1 + 0x348;
  FUN_100651708(*(float *)(param_1 + 0xea0) * 0.8,lVar1,1);
  lVar2 = param_1 + 0xd0;
  FUN_10064e5ec(0x41200000,0x41200000,lVar4,0,lVar2,0);
  fVar6 = 10.0;
  FUN_10064e5ec(0x41a00000,0x41200000,lVar1,0,lVar4,1);
  uVar7 = *(undefined4 *)(param_1 + 0xea0);
  FUN_1006511d0(lVar1);
  FUN_10064e47c(uVar7,fVar6 + 20.0,lVar2);
  if (*(int *)(param_1 + 0xc0) != 0) {
    uVar5 = 0;
    do {
      FUN_10064e47c(*(undefined4 *)(param_1 + 0xea0),*(float *)(param_1 + 0xea4) * 0.45,
                    *(undefined8 *)(*(long *)(param_1 + 200) + uVar5 * 8));
      if (uVar5 == 0) {
        uVar3 = **(undefined8 **)(param_1 + 200);
        FUN_10064e72c(0,uVar3,0,lVar2,2);
        lVar4 = lVar2;
      }
      else {
        uVar3 = *(undefined8 *)(*(long *)(param_1 + 200) + uVar5 * 8);
        lVar4 = *(long *)(*(long *)(param_1 + 200) + (ulong)((int)uVar5 - 1) * 8);
        FUN_10064e72c(0,uVar3,0,lVar4,2);
      }
      FUN_10064e72c(0,uVar3,3,lVar4,3);
      (**(code **)(**(long **)(*(long *)(param_1 + 200) + uVar5 * 8) + 0x90))();
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0xc0));
  }
  if (*(float *)(param_1 + 0x4bc) != 0.0) {
    *(undefined4 *)(param_1 + 0x4bc) = 0;
    FUN_1000200a0(param_1 + 0x478);
    return;
  }
  return;
}




long * thunk_FUN_1002aaa60(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [8];
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  puVar4[0x17] = 0;
  puVar4[0x18] = 0;
  *puVar4 = &PTR_thunk_FUN_1002aada4_101482e80;
  puVar4[0x19] = 0;
  puVar4 = puVar4 + 0x1a;
  thunk_FUN_10064f204(puVar4);
  plVar1 = param_1 + 0x43;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x69;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x8f;
  thunk_FUN_1005357f4(plVar3);
  param_1[0x1d4] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100534ad8(plVar3,puVar4,1);
  FUN_10064f31c(puVar4,plVar1,1);
  FUN_10064f31c(puVar4,plVar2,1);
  auStack_48[0] = 9;
  FUN_100534ebc(plVar3,auStack_48);
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248,&DAT_10115a168);
  uVar5 = FUN_1004e0150("INVENTORY_HAT_TAB_TITLE",0);
  FUN_1006513c0(plVar1,uVar5);
  FUN_100651594(plVar2,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8,&DAT_10115a168);
  uVar5 = FUN_1004e0150("INVENTORY_HAT_HEADER_INSTRUCTION",0);
  FUN_1006513c0(plVar2,uVar5);
  FUN_1002aabbc(param_1);
  return param_1;
}




void FUN_1002aada4(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002aada4_101482e80;
  FUN_1002aae20();
  thunk_FUN_100534a3c(param_1 + 0x8f);
  thunk_FUN_100651068(param_1 + 0x69);
  thunk_FUN_100651068(param_1 + 0x43);
  param_1[0x1a] = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x1a);
  if ((void *)param_1[0x19] != (void *)0x0) {
    operator_delete__((void *)param_1[0x19]);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002aae20(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(param_1 + 0xc0);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      lVar3 = *(long *)(param_1 + 200);
      plVar1 = *(long **)(lVar3 + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar3 = *(long *)(param_1 + 200);
        uVar2 = *(uint *)(param_1 + 0xc0);
      }
      *(undefined8 *)(lVar3 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if (*(long *)(param_1 + 200) != 0) {
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  FUN_100534ae0(param_1 + 0x478);
  return;
}




void thunk_FUN_1002aada4(void)

{
  FUN_1002aada4();
  return;
}




void FUN_1002aae8c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002aada4();
  operator_delete(pvVar1);
  return;
}




void FUN_1002aaea0(long param_1,uint *param_2)

{
  ulong uVar1;
  undefined8 local_48;
  
  if (*param_2 != 0) {
    uVar1 = 0;
    do {
      operator_new(0x3da0);
      local_48 = FUN_1002ab990();
      FUN_1002aaf3c(local_48,*(undefined8 *)(*(long *)(param_2 + 2) + uVar1 * 8));
      FUN_1002ab208(param_1 + 0xc0,&local_48);
      FUN_100534ad8(param_1 + 0x478,local_48,1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *param_2);
  }
  FUN_1002aabbc(param_1);
  return;
}




void FUN_1002aaf3c(long *param_1,uint *param_2)

{
  undefined8 ***pppuVar1;
  code ***pppcVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *local_c0;
  undefined1 auStack_b8 [8];
  void *local_b0;
  undefined8 **local_a8 [2];
  char local_91;
  code **local_90;
  long *local_88;
  long local_80;
  undefined8 uStack_78;
  long local_70;
  undefined4 local_68;
  
  param_1[0x1b] = (long)param_2;
  FUN_10003330c(local_a8,param_2 + 8);
  pppuVar1 = (undefined8 ***)local_a8[0];
  if (-1 < local_91) {
    pppuVar1 = local_a8;
  }
  uVar4 = FUN_1004e0150(pppuVar1,0);
  FUN_1006513c0(param_1 + 0x458,uVar4);
  uVar4 = FUN_1004e0150("INVENTORY_HAT_INSTRUCTION",0);
  thunk_FUN_1004e439c(auStack_b8,uVar4);
  FUN_1004e3120(&local_90,"[HAT_NAME]");
  pppuVar1 = (undefined8 ***)local_a8[0];
  if (-1 < local_91) {
    pppuVar1 = local_a8;
  }
  uVar4 = FUN_1004e0150(pppuVar1,0);
  FUN_1004e3d50(auStack_b8,0,&local_90,uVar4);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  FUN_1006513c0(param_1 + 0x78d,auStack_b8);
  *(uint *)((long)param_1 + 0x25a4) =
       *(uint *)((long)param_1 + 0x25a4) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x25a4) & 3 | (uint)(*param_2 != 0) << 2;
  if (*param_2 != 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      operator_new(0x130);
      local_c0 = (long *)thunk_FUN_100650e64();
      FUN_100651594(local_c0,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8,&DAT_10115a168);
      FUN_10003330c(&local_90,*(long *)(param_2 + 2) + lVar5);
      plVar3 = local_c0;
      pppcVar2 = (code ***)local_90;
      if (-1 < local_80) {
        pppcVar2 = &local_90;
      }
      uVar4 = FUN_1004e0150(pppcVar2,0);
      (**(code **)(*plVar3 + 0x138))(plVar3,uVar4);
      FUN_100534ad8(param_1 + 0x648,local_c0,1);
      FUN_1002ace50(param_1 + 0x19,&local_c0);
      if (local_80 < 0) {
        operator_delete(local_90);
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x18;
    } while (uVar6 < *param_2);
  }
  lVar5 = param_1[0x1b];
  if (*(int *)(lVar5 + 0x10) != 0) {
    uVar6 = 0;
    do {
      operator_new(0x6d0);
      local_90 = (code **)FUN_1002ab294();
      FUN_1002ab868(local_90,*(undefined8 *)(*(long *)(lVar5 + 0x18) + uVar6 * 8));
      FUN_1002aced0(param_1 + 0x17,&local_90);
      FUN_10064f31c(param_1 + 0x304,local_90,1);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(lVar5 + 0x10));
    lVar5 = param_1[0x1b];
  }
  local_68 = DAT_101d91884;
  local_90 = (code **)FUN_1002acf50;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = param_1;
  local_70 = lVar5;
  FUN_10001554c(param_1 + 0x1d,&local_90);
  uVar4 = FUN_1001e1428();
  uVar4 = FUN_1001e03b4(uVar4,param_1[0x1b] + 0x20);
  FUN_1001b4c0c(param_1 + 0x1c,uVar4);
  FUN_1002acf7c(param_1);
  (**(code **)(*param_1 + 0x90))(param_1);
  if (local_b0 != (void *)0x0) {
    operator_delete__(local_b0);
  }
  if (local_91 < '\0') {
    operator_delete(local_a8[0]);
  }
  return;
}




void FUN_1002ab208(uint *param_1,undefined8 *param_2)

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
    FUN_1002ad0d4(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1002ab288(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0xea0) = param_1;
  *(undefined4 *)(param_3 + 0xea4) = param_2;
  FUN_1002aabbc();
  return;
}




long * FUN_1002ab294(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined4 local_58 [2];
  
  puVar6 = (undefined8 *)FUN_10064e20c();
  *puVar6 = &PTR_thunk_FUN_1002ab490_101482fc8;
  puVar6[0x18] = 0;
  puVar6[0x19] = 0;
  puVar6[0x17] = 0;
  puVar6 = puVar6 + 0x1a;
  FUN_1006505b8(puVar6);
  plVar1 = param_1 + 0x35;
  FUN_1006505b8(plVar1);
  thunk_FUN_100652c08(param_1 + 0x50);
  plVar2 = param_1 + 0x6e;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x94;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0xba;
  thunk_FUN_100652c08(plVar4);
  (**(code **)(*param_1 + 0x78))(param_1,puVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x50,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_100650608(puVar6,&DAT_10115a168);
  uVar5 = *(uint *)((long)param_1 + 0x154);
  if ((uVar5 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x154) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x4c80;
    FUN_1000200a0(puVar6);
  }
  FUN_100650608(plVar1,&DAT_10115a164);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  local_58[0] = 0xffaea4a0;
  FUN_100651460(plVar2,local_58);
  FUN_100651700(plVar2,3);
  FUN_100651594(plVar3,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_10115a168);
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_check");
  FUN_100652dd4(plVar4,&DAT_10115a174,2);
  return param_1;
}




void FUN_1002ab490(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002ab490_101482fc8;
  param_1[0xba] = &PTR_FUN_1014a7108;
  param_1[0xd1] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd4);
  FUN_10064e2bc(param_1 + 0xba);
  thunk_FUN_100651068(param_1 + 0x94);
  thunk_FUN_100651068(param_1 + 0x6e);
  param_1[0x50] = &PTR_FUN_1014a7108;
  param_1[0x67] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6a);
  FUN_10064e2bc(param_1 + 0x50);
  FUN_10064e2bc(param_1 + 0x35);
  FUN_10064e2bc(param_1 + 0x1a);
  if (*(char *)((long)param_1 + 0xcf) < '\0') {
    operator_delete((void *)param_1[0x17]);
  }
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002ab490(void)

{
  FUN_1002ab490();
  return;
}




void FUN_1002ab540(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002ab490();
  operator_delete(pvVar1);
  return;
}




void FUN_1002ab554(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_a0 [8];
  void *local_98;
  undefined1 auStack_90 [8];
  void *local_88;
  undefined1 auStack_80 [8];
  void *local_78;
  undefined4 local_70;
  float fStack_6c;
  void *local_68;
  
  lVar1 = param_1 + 0x280;
  fVar8 = *(float *)(param_1 + 0x6c0);
  FUN_10064e47c(lVar1);
  local_70 = FUN_100652e60(lVar1);
  fStack_6c = fVar8;
  FUN_10064e48c(param_1 + 0x1a8,&local_70);
  lVar2 = param_1 + 0xd0;
  fVar9 = (float)FUN_100652e60(lVar1);
  FUN_100652e60(lVar1);
  FUN_10064e47c(fVar9 + 6.0,fVar8 + 6.0,lVar2);
  lVar3 = param_1 + 0x370;
  FUN_100651708(*(float *)(param_1 + 0x6c0) * 0.9,lVar3,1);
  FUN_10065184c((*(float *)(param_1 + 0x6c4) + -40.0) - *(float *)(param_1 + 0x6c0),0,0x3f800000,
                lVar3);
  if (*(char *)(param_1 + 0xcf) < '\0') {
    if (*(long *)(param_1 + 0xc0) == 0) goto LAB_1002ab7a0;
  }
  else if (*(char *)(param_1 + 0xcf) == '\0') goto LAB_1002ab7a0;
  uVar4 = FUN_1001e1428();
  lVar5 = FUN_1001dff04(uVar4,param_1 + 0xb8);
  FUN_1004e313c(&local_70);
  FUN_1004e38ac(&local_70,"%d");
  FUN_1004e313c(auStack_80);
  FUN_1004e38ac(auStack_80,"%d");
  thunk_FUN_1004e439c(auStack_90,&local_70);
  FUN_1004e3120(auStack_a0,"/");
  FUN_1004e372c(auStack_90,auStack_a0);
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
  }
  FUN_1004e372c(auStack_90,auStack_80);
  FUN_1006513c0(param_1 + 0x4a0,auStack_90);
  if (*(int *)(lVar5 + 0x60) < *(int *)(param_1 + 0x6c8)) {
    *(uint *)(param_1 + 0x654) = *(uint *)(param_1 + 0x654) & 0xfffffffb;
    if ((~*(uint *)(param_1 + 0x304) & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x304) = *(uint *)(param_1 + 0x304) | 0x7f80;
      FUN_1000200a0(lVar1);
    }
    uVar6 = *(uint *)(param_1 + 0x154);
    uVar7 = 0x4c80;
  }
  else {
    *(uint *)(param_1 + 0x654) = *(uint *)(param_1 + 0x654) | 4;
    uVar6 = *(uint *)(param_1 + 0x304);
    uVar7 = 0x2600;
    if ((uVar6 & 0x7f80) != 0x2600) {
      *(uint *)(param_1 + 0x304) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x2600;
      FUN_1000200a0(lVar1);
    }
    uVar6 = *(uint *)(param_1 + 0x154);
  }
  if ((uVar6 & 0x7f80) != uVar7) {
    *(uint *)(param_1 + 0x154) = uVar6 & 0xffff807f | uVar7;
    FUN_1000200a0(lVar2);
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
LAB_1002ab7a0:
  FUN_10064e5ec(0,0,lVar1,4,param_1,4);
  FUN_10064e5ec(0,0,lVar2,8,lVar1,8);
  FUN_10064e5ec(0,0,param_1 + 0x1a8,8,lVar1,8);
  FUN_10064e5ec(0xc1200000,0xc1200000,param_1 + 0x4a0,2,lVar1,2);
  FUN_10064e5ec(0,0x41200000,lVar3,4,lVar1,6);
  FUN_10064e5ec(0x41200000,0xc1200000,param_1 + 0x5d0,3,lVar1,3);
  return;
}




void FUN_1002ab868(long param_1,long param_2)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  string *psVar3;
  string *psVar4;
  undefined8 **local_88 [2];
  char local_71;
  void *local_70 [2];
  char local_59;
  undefined8 **local_58 [2];
  char local_41;
  
  uVar2 = FUN_1001e1428();
  psVar3 = (string *)FUN_1001dff04(uVar2,param_2);
  std::string::operator=((string *)(param_1 + 0xb8),psVar3);
  FUN_10003330c(local_58,psVar3 + 0x18);
  pppuVar1 = (undefined8 ***)local_58[0];
  if (-1 < local_41) {
    pppuVar1 = local_58;
  }
  uVar2 = FUN_1004e0150(pppuVar1,0);
  FUN_1006513c0(param_1 + 0x370,uVar2);
  *(undefined4 *)(param_1 + 0x6c8) = *(undefined4 *)(param_2 + 0x18);
  FUN_100652d8c(param_1 + 0x280);
  FUN_10003330c(local_70,psVar3 + 0x30);
  FUN_1000e8a14(local_88,local_70);
  pppuVar1 = (undefined8 ***)local_88[0];
  if (-1 < local_71) {
    pppuVar1 = local_88;
  }
  psVar4 = psVar3 + 0x48;
  if ((char)psVar3[0x5f] < '\0') {
    psVar4 = *(string **)psVar4;
  }
  FUN_100652cac(param_1 + 0x280,pppuVar1,psVar4);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  FUN_1002ab554(param_1);
  if (local_59 < '\0') {
    operator_delete(local_70[0]);
  }
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  return;
}




void FUN_1002ab984(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x6c0) = param_1;
  *(undefined4 *)(param_3 + 0x6c4) = param_2;
  FUN_1002ab554();
  return;
}




long * FUN_1002ab990(long *param_1)

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
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  uint uVar19;
  long lVar20;
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar17 = (undefined8 *)FUN_10064e20c();
  *puVar17 = &PTR_thunk_FUN_1002ac0d8_101483110;
  puVar17[0x18] = 0;
  puVar17[0x17] = 0;
  puVar17 = puVar17 + 0x1c;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  thunk_FUN_100181304(puVar17,0);
  param_1[0x2d5] = 0;
  param_1[0x2d4] = 0;
  param_1[0x2d3] = 0;
  plVar1 = param_1 + 0x2d6;
  FUN_10064e264();
  plVar2 = param_1 + 0x2ed;
  FUN_10064e264(plVar2);
  thunk_FUN_10064f204();
  FUN_10064e264();
  plVar3 = param_1 + 0x344;
  thunk_FUN_100652c08();
  plVar4 = param_1 + 0x362;
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  plVar5 = param_1 + 0x39e;
  thunk_FUN_100652c08(plVar5);
  thunk_FUN_1001a7cf4(param_1 + 0x3bc);
  plVar6 = param_1 + 0x432;
  thunk_FUN_100650e64();
  plVar7 = param_1 + 0x458;
  thunk_FUN_100650e64(plVar7);
  plVar8 = param_1 + 0x47e;
  thunk_FUN_100650e64(plVar8);
  plVar9 = param_1 + 0x4a4;
  thunk_FUN_100183990(plVar9,0);
  plVar10 = param_1 + 0x562;
  FUN_10064e264(plVar10);
  FUN_1006505b8();
  plVar11 = param_1 + 0x594;
  thunk_FUN_100652c08(plVar11);
  plVar12 = param_1 + 0x5b2;
  thunk_FUN_1001bd4e0(plVar12,0);
  plVar13 = param_1 + 0x648;
  thunk_FUN_1005357f4();
  plVar14 = param_1 + 0x78d;
  thunk_FUN_100650e64(plVar14);
  param_1[0x7b3] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x3bc,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar9,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,puVar17,1);
  FUN_100642bd8(plVar2,param_1 + 0x304,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x32d,1);
  FUN_100642bd8(param_1 + 0x32d,plVar1,1);
  FUN_100642bd8(plVar1,plVar8,1);
  FUN_100642bd8(plVar1,plVar4,1);
  FUN_100642bd8(plVar4,param_1 + 0x380,1);
  FUN_100642bd8(plVar1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar10,1);
  FUN_100642bd8(plVar10,param_1 + 0x579,1);
  FUN_100642bd8(plVar10,plVar12,1);
  FUN_100642bd8(plVar10,plVar13,1);
  FUN_100534ad8(plVar13,plVar14,1);
  FUN_100642bd8(plVar10,plVar11,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100652cac(plVar5,DAT_101854a08,"quest_item_glow");
  local_90 = (code *)CONCAT44(local_90._4_4_,0xffb6acaa);
  FUN_100651594(plVar7,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&local_90);
  FUN_100652cdc(param_1 + 0x53e,"circle_button_question");
  if ((~*(uint *)((long)param_1 + 0x25a4) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x25a4) = *(uint *)((long)param_1 + 0x25a4) | 0x7f80;
    FUN_1000200a0(plVar9);
  }
  FUN_1001b495c(0xbf800000,plVar9);
  local_68 = DAT_101d91884;
  local_90 = FUN_1002ac0b4;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x4a5,&local_90);
  if ((*(float *)(param_1 + 0x4ad) != 0.75) || (*(float *)((long)param_1 + 0x256c) != 0.75)) {
    lVar20 = NEON_fmov(0x3f400000,4);
    param_1[0x4ad] = lVar20;
    FUN_1000200a0(plVar9);
  }
  uVar18 = FUN_1004e0150("MENU_SKINS_HUB_UNLOCK_BUTTON",0);
  FUN_1001816d4(0,0x43960000,0x43960000,puVar17,0,uVar18,&DAT_10115a168,&DAT_101dc1cb8,0);
  FUN_100181c68(0x42a00000,puVar17);
  FUN_1001b4c0c(puVar17,0);
  FUN_100651594(plVar8,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,&DAT_10115a168);
  FUN_100651594(plVar6,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,&DAT_10115a168);
  uVar18 = FUN_1004e0150("INVENTORY_HAT_TAP_TO_UNEQUIP_TAG",0);
  FUN_1006513c0(plVar6,uVar18);
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"circle_button_frame");
  FUN_100652cac(param_1 + 0x380,PTR_s_build___MenuPartsCommon_tga_101854970,"circle_button_fill");
  *(uint *)((long)param_1 + 0x1b94) = *(uint *)((long)param_1 + 0x1b94) | 0x10;
  uVar15 = DAT_101dbd460;
  local_68 = DAT_101dbd460;
  local_90 = thunk_FUN_1002ad048;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x363,&local_90);
  uVar16 = DAT_101dbd48c;
  local_68 = DAT_101dbd48c;
  local_90 = thunk_FUN_1002ad048;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x363,&local_90);
  uVar19 = *(uint *)((long)param_1 + 0x2c4c);
  if ((uVar19 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x2c4c) = uVar19 & 0xffff807f;
    FUN_1000200a0(param_1 + 0x579);
    uVar19 = *(uint *)((long)param_1 + 0x2c4c);
  }
  *(uint *)((long)param_1 + 0x2c4c) = uVar19 | 0x10;
  local_68 = uVar15;
  local_90 = FUN_1002ac0c8;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x57a,&local_90);
  local_68 = uVar16;
  local_90 = FUN_1002ac0c8;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x57a,&local_90);
  FUN_100652cac(plVar11,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_bubble_side_arrow");
  if ((*(float *)(param_1 + 0x59d) != 1.1) || (*(float *)((long)param_1 + 0x2cec) != 1.1)) {
    param_1[0x59d] = 0x3f8ccccd3f8ccccd;
    FUN_1000200a0(plVar11);
  }
  *(byte *)(param_1 + 0x5af) = *(byte *)(param_1 + 0x5af) | 1;
  FUN_1001bdb78(0x3f800000,plVar12,&DAT_10115a164);
  FUN_1001bdb04(0x3f800000,plVar12,&DAT_10115a168);
  local_90 = (code *)0x0;
  FUN_1001bd8b4(plVar12,&local_90);
  FUN_100651594(plVar14,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8,&DAT_10115a168);
  local_90 = (code *)CONCAT71(local_90._1_7_,9);
  FUN_100534ebc(plVar13,&local_90);
  *(uint *)((long)param_1 + 0x2b94) = *(uint *)((long)param_1 + 0x2b94) & 0xfffffffb;
  FUN_100652cac(plVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  uVar19 = *(uint *)((long)param_1 + 0x1aa4);
  if ((uVar19 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1aa4) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x2600;
    FUN_1000200a0(plVar3);
  }
  return param_1;
}




void FUN_1002ac0b4(long param_1)

{
  *(uint *)(param_1 + 0x2b94) = *(uint *)(param_1 + 0x2b94) | 4;
  return;
}




void thunk_FUN_1002ad048(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *apvStack_48 [2];
  char cStack_31;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0xd8) + 0x98);
  uVar2 = FUN_1001e1428();
  if (iVar1 != 0) {
    FUN_1001dffe4(uVar2,*(long *)(param_1 + 0xd8) + 0x20);
    return;
  }
  FUN_10001549c(apvStack_48,"");
  FUN_1001dffe4(uVar2,apvStack_48);
  if (cStack_31 < '\0') {
    operator_delete(apvStack_48[0]);
  }
  return;
}




void FUN_1002ac0c8(long param_1)

{
  *(uint *)(param_1 + 0x2b94) = *(uint *)(param_1 + 0x2b94) & 0xfffffffb;
  return;
}




void FUN_1002ac0d8(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint *puVar6;
  uint *puVar7;
  
  *param_1 = &PTR_thunk_FUN_1002ac0d8_101483110;
  param_1[0x1b] = 0;
  puVar6 = (uint *)(param_1 + 0x17);
  uVar3 = *puVar6;
  plVar2 = (long *)param_1[0x18];
  plVar1 = plVar2;
  if (uVar3 != 0) {
    do {
      if ((long *)*plVar1 != (long *)0x0) {
        (**(code **)(*(long *)*plVar1 + 8))();
        uVar3 = *(uint *)(param_1 + 0x17);
        plVar2 = (long *)param_1[0x18];
      }
      plVar1 = plVar1 + 1;
    } while (plVar1 != plVar2 + uVar3);
  }
  if (plVar2 != (long *)0x0) {
    *puVar6 = 0;
  }
  puVar7 = (uint *)(param_1 + 0x19);
  uVar3 = *puVar7;
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      lVar4 = param_1[0x1a];
      plVar1 = *(long **)(lVar4 + uVar5 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar4 = param_1[0x1a];
        uVar3 = *(uint *)(param_1 + 0x19);
      }
      *(undefined8 *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  if (param_1[0x1a] != 0) {
    *puVar7 = 0;
  }
  thunk_FUN_100651068(param_1 + 0x78d);
  thunk_FUN_100534a3c(param_1 + 0x648);
  param_1[0x5b2] = &PTR_FUN_101464e50;
  param_1[0x61d] = &PTR_FUN_1014a6db0;
  param_1[0x634] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x637);
  FUN_10064e2bc(param_1 + 0x61d);
  param_1[0x5f3] = &PTR_FUN_1014a6db0;
  param_1[0x60a] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x60d);
  FUN_10064e2bc(param_1 + 0x5f3);
  param_1[0x5c9] = &PTR_FUN_1014a6db0;
  param_1[0x5e0] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x5e3);
  FUN_10064e2bc(param_1 + 0x5c9);
  FUN_10064e2bc(param_1 + 0x5b2);
  param_1[0x594] = &PTR_FUN_1014a7108;
  param_1[0x5ab] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5ae);
  FUN_10064e2bc(param_1 + 0x594);
  FUN_10064e2bc(param_1 + 0x579);
  thunk_FUN_10064e2bc(param_1 + 0x562);
  param_1[0x4a4] = &PTR_FUN_10145f300;
  param_1[0x53e] = &PTR_FUN_1014a7108;
  param_1[0x555] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x558);
  FUN_10064e2bc(param_1 + 0x53e);
  param_1[0x520] = &PTR_FUN_1014a7108;
  param_1[0x537] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x53a);
  FUN_10064e2bc(param_1 + 0x520);
  param_1[0x502] = &PTR_FUN_1014a7108;
  param_1[0x519] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x51c);
  FUN_10064e2bc(param_1 + 0x502);
  FUN_10064221c(param_1 + 0x4f1);
  FUN_10003bec8(param_1 + 0x4a4);
  thunk_FUN_100651068(param_1 + 0x47e);
  thunk_FUN_100651068(param_1 + 0x458);
  thunk_FUN_100651068(param_1 + 0x432);
  thunk_FUN_1001a7dd8(param_1 + 0x3bc);
  param_1[0x39e] = &PTR_FUN_1014a7108;
  param_1[0x3b5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3b8);
  FUN_10064e2bc(param_1 + 0x39e);
  param_1[0x380] = &PTR_FUN_1014a7108;
  param_1[0x397] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x39a);
  FUN_10064e2bc(param_1 + 0x380);
  param_1[0x362] = &PTR_FUN_1014a7108;
  param_1[0x379] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x37c);
  FUN_10064e2bc(param_1 + 0x362);
  param_1[0x344] = &PTR_FUN_1014a7108;
  param_1[0x35b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x35e);
  FUN_10064e2bc(param_1 + 0x344);
  thunk_FUN_10064e2bc(param_1 + 0x32d);
  param_1[0x304] = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x31b);
  FUN_10064e2bc(param_1 + 0x304);
  thunk_FUN_10064e2bc(param_1 + 0x2ed);
  thunk_FUN_10064e2bc(param_1 + 0x2d6);
  if (*(char *)((long)param_1 + 0x16af) < '\0') {
    operator_delete((void *)param_1[0x2d3]);
  }
  FUN_10003bd40(param_1 + 0x1c);
  if ((void *)param_1[0x1a] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1a]);
    puVar7[0] = 0;
    puVar7[1] = 0;
    param_1[0x1a] = 0;
  }
  if ((void *)param_1[0x18] != (void *)0x0) {
    operator_delete__((void *)param_1[0x18]);
    puVar6[0] = 0;
    puVar6[1] = 0;
    param_1[0x18] = 0;
  }
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002ac0d8(void)

{
  FUN_1002ac0d8();
  return;
}




void FUN_1002ac4a4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002ac0d8();
  operator_delete(pvVar1);
  return;
}




void FUN_1002ac4b8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined4 local_58;
  float fStack_54;
  
  FUN_10064e32c();
  lVar1 = param_1 + 0x22c0;
  FUN_10065179c(*(float *)(param_1 + 0x3d98) * 0.6,0,0x3f800000,lVar1);
  FUN_10064e48c(param_1 + 0x2bc8,param_1 + 0x3d98);
  FUN_10064e47c(*(undefined4 *)(param_1 + 0x3d98),0x40800000,param_1 + 0x1a20);
  FUN_10064e5ec(0,0,lVar1,4,param_1,4);
  lVar2 = param_1 + 0x2520;
  FUN_10064e5ec(0x41200000,0,lVar2,7,lVar1,5);
  FUN_10064e5ec(0,0,param_1 + 0x2bc8,0,param_1,0);
  FUN_10064e5ec(0,0,param_1 + 0x1a20,0,param_1,0);
  fVar9 = *(float *)(param_1 + 0x3d98);
  fVar11 = 0.3;
  uVar10 = FUN_10064eb7c(lVar2,5,param_1,5);
  fVar12 = (float)NEON_fminnm(fVar9 * 0.3,uVar10);
  lVar1 = param_1 + 0x3240;
  plVar5 = (long *)FUN_100534eb4(lVar1);
  (**(code **)(*plVar5 + 0x58))(plVar5,0,0,1,1);
  FUN_10064e47c(fVar12,fVar11 + 40.0,param_1 + 0x2b10);
  lVar3 = param_1 + 0x3c68;
  lVar4 = param_1 + 0x2ca0;
  fVar9 = (float)FUN_100652e60(lVar4);
  FUN_100651708((fVar12 + -40.0) - fVar9,lVar3,1);
  FUN_10064e5ec(0,0,param_1 + 0x2b10,0,lVar2,1);
  FUN_10064e5ec(0,0,lVar4,7,lVar2,5);
  lVar2 = param_1 + 0x2d90;
  FUN_10064e72c(0xc0a00000,lVar2,3,lVar4,1);
  FUN_10064e5ec(0x41a00000,0x41a00000,lVar3,0,lVar2,0);
  FUN_10064e5ec(0,0,lVar1,0,lVar2,0);
  if (*(int *)(param_1 + 200) != 0) {
    uVar8 = 0;
    do {
      if (uVar8 == 0) {
        uVar6 = **(undefined8 **)(param_1 + 0xd0);
        uVar10 = 0x41200000;
        lVar7 = lVar3;
      }
      else {
        uVar6 = *(undefined8 *)(*(long *)(param_1 + 0xd0) + uVar8 * 8);
        uVar10 = 0;
        lVar7 = *(long *)(*(long *)(param_1 + 0xd0) + (ulong)((int)uVar8 - 1) * 8);
      }
      FUN_10064e5ec(0,uVar10,uVar6,0,lVar7,3);
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 200));
  }
  fVar9 = (float)FUN_100652e60(lVar4);
  fVar12 = fVar12 + -20.0;
  fVar9 = fVar12 - fVar9;
  plVar5 = (long *)FUN_100534eb4(lVar1);
  (**(code **)(*plVar5 + 0x58))(plVar5,0,0,1,1);
  fVar12 = fVar12 + 40.0;
  FUN_10064e47c(fVar9,lVar1);
  local_58 = FUN_10064e3cc(lVar1);
  fStack_54 = fVar12;
  FUN_10064e48c(lVar2,&local_58);
  if (*(long *)(param_1 + 0xd8) != 0) {
    FUN_1002ac800(param_1);
    if (*(int *)(*(long *)(param_1 + 0xd8) + 0x98) - 3U < 2) {
      FUN_1002ac9c0();
    }
    else {
      FUN_1002acc38(param_1);
    }
  }
  return;
}




void FUN_1002ac800(long param_1)

{
  uint uVar1;
  char *pcVar2;
  undefined8 uVar3;
  float fVar4;
  undefined1 auStack_30 [8];
  void *local_28;
  
  FUN_1004e313c(auStack_30);
  switch(*(undefined4 *)(*(long *)(param_1 + 0xd8) + 0x98)) {
  case 0:
    *(uint *)(param_1 + 0x1c84) = *(uint *)(param_1 + 0x1c84) | 4;
    *(uint *)(param_1 + 0x1b94) = *(uint *)(param_1 + 0x1b94) | 0x14;
    *(uint *)(param_1 + 0x2214) = *(uint *)(param_1 + 0x2214) | 4;
    pcVar2 = "INVENTORY_HAT_EQUIPPED_TAG";
    break;
  case 1:
    *(uint *)(param_1 + 0x1b94) = *(uint *)(param_1 + 0x1b94) & 0xfffffffb;
    *(uint *)(param_1 + 0x2214) = *(uint *)(param_1 + 0x2214) & 0xfffffffb;
    pcVar2 = "INVENTORY_HAT_EQUIPPING_TAG";
    break;
  case 2:
    *(uint *)(param_1 + 0x1b94) = *(uint *)(param_1 + 0x1b94) | 0x14;
    *(uint *)(param_1 + 0x1c84) = *(uint *)(param_1 + 0x1c84) & 0xfffffffb;
    *(uint *)(param_1 + 0x2214) = *(uint *)(param_1 + 0x2214) & 0xfffffffb;
    pcVar2 = "INVENTORY_HAT_UNEQUIPPED_TAG";
    break;
  case 3:
    uVar3 = FUN_1001e1428();
    uVar3 = FUN_1001e03b4(uVar3,*(long *)(param_1 + 0xd8) + 0x20);
    FUN_1001b4c0c(param_1 + 0xe0,uVar3);
    if ((~*(uint *)(param_1 + 0x87c) & 0x7f80) == 0) goto switchD_1002ac840_default;
    uVar1 = *(uint *)(param_1 + 0x87c) | 0x7f80;
    goto LAB_1002ac960;
  case 4:
    uVar3 = FUN_1001e1428();
    uVar3 = FUN_1001e03b4(uVar3,*(long *)(param_1 + 0xd8) + 0x20);
    FUN_1001b4c0c(param_1 + 0xe0,uVar3);
    uVar1 = *(uint *)(param_1 + 0x87c);
    if ((uVar1 & 0x7f80) == 0x2b00) goto switchD_1002ac840_default;
    uVar1 = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x2b00;
LAB_1002ac960:
    *(uint *)(param_1 + 0x87c) = uVar1;
    FUN_1000200a0(param_1 + 0x7f8);
  default:
    goto switchD_1002ac840_default;
  }
  uVar3 = FUN_1004e0150(pcVar2,0);
  FUN_1000153b4(auStack_30,uVar3);
switchD_1002ac840_default:
  FUN_1006513c0(param_1 + 0x23f0,auStack_30);
  fVar4 = (float)FUN_10064e3cc(param_1 + 0x16b0);
  FUN_10065179c(fVar4 * 0.7,0,0x3f800000,param_1 + 0x23f0);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




void FUN_1002ac9c0(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 uVar9;
  float fVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float local_78;
  float fStack_74;
  
  *(uint *)(param_1 + 0x19ec) = *(uint *)(param_1 + 0x19ec) & 0xfffffffb;
  *(uint *)(param_1 + 0x17ec) = *(uint *)(param_1 + 0x17ec) | 4;
  FUN_10064e48c(param_1 + 0x1768,param_1 + 0x3d98);
  lVar1 = param_1 + 0x1de0;
  FUN_10064e47c(*(undefined4 *)(param_1 + 0x3d9c),*(undefined4 *)(param_1 + 0x3d9c),lVar1);
  fVar10 = *(float *)(param_1 + 0x1e34);
  bVar4 = false;
  if ((*(float *)(param_1 + 0x1e30) == 0.5) && (bVar4 = false, !NAN(fVar10))) {
    bVar4 = fVar10 == 0.5;
  }
  if (!bVar4) {
    *(undefined1 **)(param_1 + 0x1e30) = &DAT_3f0000003f000000;
    FUN_1000200a0(lVar1);
  }
  local_78 = (float)FUN_10064e3cc(lVar1);
  local_78 = local_78 * 1.5;
  fStack_74 = fVar10 * 1.5;
  FUN_10064e48c(param_1 + 0x1cf0,&local_78);
  FUN_10064e5ec(0xc2200000,0xc2200000,lVar1,5,param_1,5);
  FUN_10064e5ec(0,0,param_1 + 0x1cf0,8,lVar1,8);
  FUN_10064e5ec(0,0xc2a00000,param_1 + 0xe0,4,lVar1,6);
  fVar10 = 0.16000001;
  fVar12 = *(float *)(param_1 + 0x3d98) * 0.16000001 + -40.0;
  lVar1 = param_1 + 0x1820;
  iVar3 = *(int *)(param_1 + 0xb8);
  fVar13 = *(float *)(param_1 + 0x3d9c);
  lVar2 = param_1 + 0x22c0;
  FUN_1006511d0(lVar2);
  FUN_10064e47c((float)(((int)fVar12 + 0x14) * iVar3 - 0x14),(fVar13 + -20.0) - fVar10,lVar1);
  uVar11 = 0;
  FUN_10064e5ec(*(float *)(param_1 + 0x3d98) * -0.1,0,lVar1,6,param_1,6);
  if (*(int *)(param_1 + 0xb8) != 0) {
    uVar8 = 0;
    do {
      fVar10 = (float)uVar11;
      uVar7 = *(undefined8 *)(*(long *)(param_1 + 0xc0) + uVar8 * 8);
      fVar13 = *(float *)(param_1 + 0x3d9c);
      FUN_1006511d0(lVar2);
      fVar10 = (fVar13 + -20.0) - fVar10;
      FUN_10064e47c((int)fVar12,fVar10,uVar7);
      if (uVar8 == 0) {
        uVar7 = **(undefined8 **)(param_1 + 0xc0);
        FUN_100651184(lVar2);
        uVar11 = (ulong)(uint)(fVar10 * 0.5 + 10.0);
        uVar9 = 0;
        uVar6 = 7;
        lVar5 = lVar1;
      }
      else {
        uVar7 = *(undefined8 *)(*(long *)(param_1 + 0xc0) + uVar8 * 8);
        uVar9 = 0x41a00000;
        uVar11 = 0;
        uVar6 = 5;
        lVar5 = *(long *)(*(long *)(param_1 + 0xc0) + (ulong)((int)uVar8 - 1) * 8);
      }
      FUN_10064e5ec(uVar9,uVar7,7,lVar5,uVar6);
      FUN_1002ab554(*(undefined8 *)(*(long *)(param_1 + 0xc0) + uVar8 * 8));
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 0xb8));
  }
  return;
}




void FUN_1002acc38(long param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  float fVar4;
  float local_48;
  float fStack_44;
  
  *(uint *)(param_1 + 0x19ec) = *(uint *)(param_1 + 0x19ec) | 4;
  *(uint *)(param_1 + 0x17ec) = *(uint *)(param_1 + 0x17ec) & 0xfffffffb;
  FUN_10064e48c(param_1 + 0x1968,param_1 + 0x3d98);
  lVar1 = param_1 + 0x1de0;
  FUN_10064e47c(*(undefined4 *)(param_1 + 0x3d9c),*(undefined4 *)(param_1 + 0x3d9c),lVar1);
  fVar4 = *(float *)(param_1 + 0x1e34);
  bVar3 = false;
  if ((*(float *)(param_1 + 0x1e30) == 0.5) && (bVar3 = false, !NAN(fVar4))) {
    bVar3 = fVar4 == 0.5;
  }
  if (!bVar3) {
    *(undefined1 **)(param_1 + 0x1e30) = &DAT_3f0000003f000000;
    FUN_1000200a0(lVar1);
  }
  local_48 = (float)FUN_10064e3cc(lVar1);
  local_48 = local_48 * 1.5;
  fStack_44 = fVar4 * 1.5;
  FUN_10064e48c(param_1 + 0x1cf0,&local_48);
  FUN_10064e5ec(0,0,lVar1,8,param_1,8);
  FUN_10064e5ec(0,0,param_1 + 0x1cf0,8,lVar1,8);
  lVar1 = param_1 + 0x1b10;
  fVar4 = 80.0;
  FUN_10064e47c(lVar1);
  local_48 = (float)FUN_100652e60(lVar1);
  local_48 = local_48 * 0.8;
  fStack_44 = fVar4 * 0.8;
  fVar4 = fStack_44;
  FUN_10064e48c(param_1 + 0x1c00,&local_48);
  lVar2 = param_1 + 0x16b0;
  local_48 = (float)FUN_1006425d0(lVar2,0,0,1,1);
  fStack_44 = fVar4;
  FUN_10064e48c(lVar2,&local_48);
  FUN_10064e5ec(0,0,param_1 + 0x23f0,4,lVar2,4);
  FUN_10064e5ec(0,0x41200000,lVar1,4,param_1 + 0x23f0,6);
  FUN_10064e5ec(0,0,param_1 + 0x1c00,8,lVar1,8);
  FUN_10064e5ec(0,0x41200000,param_1 + 0x2190,4,lVar1,6);
  FUN_10064e5ec(0xc1f00000,0,lVar2,5,param_1,5);
  return;
}




void FUN_1002ace50(uint *param_1,undefined8 *param_2)

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
    FUN_1002ad150(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1002aced0(uint *param_1,undefined8 *param_2)

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
    FUN_1002ad1cc(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1002acf50(void)

{
  undefined8 uVar1;
  long in_x4;
  
  if (in_x4 != 0) {
    uVar1 = FUN_1001e1428();
    FUN_1001e1364(uVar1,in_x4);
    return;
  }
  return;
}




void FUN_1002acf7c(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long *plVar3;
  
  cVar1 = *(char *)(*(long *)(param_1 + 0xd8) + 0x7f);
  if (cVar1 < '\0') {
    if (*(long *)(*(long *)(param_1 + 0xd8) + 0x70) == 0) goto LAB_1002acff4;
  }
  else if (cVar1 == '\0') goto LAB_1002acff4;
  if (*(long *)(param_1 + 0x1f80) == 0) {
    uVar2 = FUN_100345b94();
    plVar3 = (long *)(*(long *)(param_1 + 0xd8) + 0x68);
    if (*(char *)(*(long *)(param_1 + 0xd8) + 0x7f) < '\0') {
      plVar3 = (long *)*plVar3;
    }
    uVar2 = FUN_10034c450(uVar2,plVar3);
    FUN_1001a812c(param_1 + 0x1de0,uVar2);
    FUN_1001a8964(param_1 + 0x1de0,"MAIN");
  }
LAB_1002acff4:
  if (*(long *)(param_1 + 0x1f80) != 0) {
    FUN_1001a8e34(0x3f800000,param_1 + 0x1de0,"IDLE",1,0);
    *(uint *)(param_1 + 0x1e64) = *(uint *)(param_1 + 0x1e64) | 4;
  }
  return;
}




void FUN_1002ad034(undefined4 param_1,undefined4 param_2,long *param_3)

{
  *(undefined4 *)(param_3 + 0x7b3) = param_1;
  *(undefined4 *)((long)param_3 + 0x3d9c) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001002ad044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x90))();
  return;
}




void FUN_1002ad048(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *local_48 [2];
  char local_31;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0xd8) + 0x98);
  uVar2 = FUN_1001e1428();
  if (iVar1 != 0) {
    FUN_1001dffe4(uVar2,*(long *)(param_1 + 0xd8) + 0x20);
    return;
  }
  FUN_10001549c(local_48,"");
  FUN_1001dffe4(uVar2,local_48);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  return;
}




void FUN_1002ad0d4(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_1002ad150(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_1002ad1cc(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




long * FUN_1002ad248(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *local_70;
  long *plStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  puVar4[0x17] = 0;
  puVar4[0x18] = 0;
  *puVar4 = &PTR_thunk_FUN_1002ad590_101483258;
  puVar4[0x19] = 0;
  puVar4 = puVar4 + 0x1a;
  thunk_FUN_100650e64(puVar4);
  plVar1 = param_1 + 0x40;
  thunk_FUN_1006543ec(plVar1);
  plVar2 = param_1 + 0x74;
  FUN_1006505b8(plVar2);
  thunk_FUN_10064f204(param_1 + 0x8f);
  plVar3 = param_1 + 0xb8;
  thunk_FUN_1005357f4(plVar3);
  param_1[0x1fd] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100534ad8(plVar3,param_1 + 0x8f,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar2,puVar4,1);
  local_70 = (code *)CONCAT71(local_70._1_7_,9);
  FUN_100534ebc(plVar3,&local_70);
  local_48 = DAT_101d918b8;
  local_70 = FUN_1002ad3e8;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 0xb9,&local_70);
  FUN_1005360e4(plVar3,0);
  FUN_100654488(plVar1,1);
  FUN_100650608(plVar2,&DAT_10115a164);
  FUN_100651594(puVar4,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,&DAT_10115a168);
  uVar5 = FUN_1004e0150("SOCIAL_PINGS_PACK_PREVIEW_ICONS_INSTRUCTION",0);
  FUN_1006513c0(puVar4,uVar5);
  FUN_1002ad3f0(param_1);
  return param_1;
}




void FUN_1002ad3e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1002addcc(param_1,param_4);
  return;
}




void FUN_1002ad3f0(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 local_58;
  undefined4 uStack_54;
  
  FUN_10064e48c(param_1,param_1 + 0xfe8);
  FUN_10064e48c(param_1 + 0x5c0,param_1 + 0xfe8);
  lVar4 = param_1 + 0x200;
  uVar2 = 0x42a00000;
  FUN_10064e47c(*(undefined4 *)(param_1 + 0xfe8),lVar4);
  local_58 = FUN_10064e3cc(lVar4);
  uStack_54 = uVar2;
  FUN_10064e48c(param_1 + 0x3a0,&local_58);
  lVar1 = param_1 + 0x478;
  local_58 = FUN_10064e3cc(lVar4);
  uStack_54 = uVar2;
  FUN_10064e48c(lVar1,&local_58);
  FUN_10064e5ec(0,0,param_1 + 0xd0,8,lVar4,8);
  if (*(int *)(param_1 + 0xc0) != 0) {
    uVar5 = 0;
    do {
      FUN_10064e47c(*(undefined4 *)(param_1 + 0xfe8),*(float *)(param_1 + 0xfec) * 0.4,
                    *(undefined8 *)(*(long *)(param_1 + 200) + uVar5 * 8));
      if (uVar5 == 0) {
        uVar3 = **(undefined8 **)(param_1 + 200);
        FUN_10064e72c(0,uVar3,0,lVar1,2);
        lVar4 = lVar1;
      }
      else {
        uVar3 = *(undefined8 *)(*(long *)(param_1 + 200) + uVar5 * 8);
        lVar4 = *(long *)(*(long *)(param_1 + 200) + (ulong)((int)uVar5 - 1) * 8);
        FUN_10064e72c(0,uVar3,0,lVar4,2);
      }
      FUN_10064e72c(0,uVar3,3,lVar4,3);
      FUN_1002ad694(*(undefined8 *)(*(long *)(param_1 + 200) + uVar5 * 8));
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0xc0));
  }
  if (*(float *)(param_1 + 0x604) != 0.0) {
    *(undefined4 *)(param_1 + 0x604) = 0;
    FUN_1000200a0(param_1 + 0x5c0);
  }
  return;
}




long * thunk_FUN_1002ad248(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  puVar4[0x17] = 0;
  puVar4[0x18] = 0;
  *puVar4 = &PTR_thunk_FUN_1002ad590_101483258;
  puVar4[0x19] = 0;
  puVar4 = puVar4 + 0x1a;
  thunk_FUN_100650e64(puVar4);
  plVar1 = param_1 + 0x40;
  thunk_FUN_1006543ec(plVar1);
  plVar2 = param_1 + 0x74;
  FUN_1006505b8(plVar2);
  thunk_FUN_10064f204(param_1 + 0x8f);
  plVar3 = param_1 + 0xb8;
  thunk_FUN_1005357f4(plVar3);
  param_1[0x1fd] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100534ad8(plVar3,param_1 + 0x8f,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar2,puVar4,1);
  pcStack_70 = (code *)CONCAT71(pcStack_70._1_7_,9);
  FUN_100534ebc(plVar3,&pcStack_70);
  uStack_48 = DAT_101d918b8;
  pcStack_70 = FUN_1002ad3e8;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 0xb9,&pcStack_70);
  FUN_1005360e4(plVar3,0);
  FUN_100654488(plVar1,1);
  FUN_100650608(plVar2,&DAT_10115a164);
  FUN_100651594(puVar4,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,&DAT_10115a168);
  uVar5 = FUN_1004e0150("SOCIAL_PINGS_PACK_PREVIEW_ICONS_INSTRUCTION",0);
  FUN_1006513c0(puVar4,uVar5);
  FUN_1002ad3f0(param_1);
  return param_1;
}




void FUN_1002ad590(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002ad590_101483258;
  FUN_1002ad614();
  thunk_FUN_100534a3c(param_1 + 0xb8);
  param_1[0x8f] = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0xa6);
  FUN_10064e2bc(param_1 + 0x8f);
  FUN_10064e2bc(param_1 + 0x74);
  FUN_10064e2bc(param_1 + 0x40);
  thunk_FUN_100651068(param_1 + 0x1a);
  if ((void *)param_1[0x19] != (void *)0x0) {
    operator_delete__((void *)param_1[0x19]);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002ad614(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(param_1 + 0xc0);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      lVar3 = *(long *)(param_1 + 200);
      plVar1 = *(long **)(lVar3 + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar3 = *(long *)(param_1 + 200);
        uVar2 = *(uint *)(param_1 + 0xc0);
      }
      *(undefined8 *)(lVar3 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if (*(long *)(param_1 + 200) != 0) {
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  FUN_100534ae0(param_1 + 0x5c0);
  return;
}




void thunk_FUN_1002ad590(void)

{
  FUN_1002ad590();
  return;
}




void FUN_1002ad680(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002ad590();
  operator_delete(pvVar1);
  return;
}




void FUN_1002ad694(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  float fVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float local_88;
  float fStack_84;
  
  FUN_10064e48c(param_1,param_1 + 0xe80);
  FUN_10064e47c(*(undefined4 *)(param_1 + 0xe80),*(float *)(param_1 + 0xe84) * 0.8,param_1 + 0x188);
  uVar9 = (ulong)(uint)(*(float *)(param_1 + 0xe84) * 0.8);
  FUN_10064e47c(*(undefined4 *)(param_1 + 0xe80),uVar9,param_1 + 0x278);
  lVar5 = param_1 + 0x638;
  uVar10 = *(undefined4 *)(param_1 + 0xe80);
  FUN_100652390(lVar5,1);
  uVar11 = *(undefined4 *)(param_1 + 0xe84);
  uVar7 = uVar9;
  FUN_100652390(lVar5,7);
  FUN_1006525c4(0,uVar10,0,uVar9,uVar11,uVar7,lVar5);
  FUN_10064e47c(*(float *)(param_1 + 0xe80) + 10.0,*(undefined4 *)(param_1 + 0xe84),lVar5);
  lVar1 = param_1 + 0x368;
  fVar8 = 80.0;
  FUN_10064e47c(0x42a00000,lVar1);
  local_88 = (float)FUN_100652e60(lVar1);
  local_88 = local_88 * 0.8;
  fStack_84 = fVar8 * 0.8;
  FUN_10064e48c(param_1 + 0x458,&local_88);
  FUN_10064e47c(*(undefined4 *)(param_1 + 0xe80),0x40800000,param_1 + 0x548);
  lVar2 = param_1 + 0x788;
  fVar8 = (float)FUN_1006511d0(param_1 + 0x890);
  FUN_10064e47c(fVar8 + 60.0,0x42a00000,lVar2);
  fVar8 = (float)FUN_100652e60(lVar2);
  *(float *)(param_1 + 0x884) = 40.0 / fVar8;
  FUN_100651708(*(float *)(param_1 + 0xe80) * 0.24000001,param_1 + 0xc20,1);
  FUN_10064e72c(0,lVar2,3,param_1,3);
  FUN_10064e72c(0x41a00000,param_1 + 0x890,3,lVar2,3);
  FUN_10064e5ec(0,0,lVar5,8,param_1,8);
  FUN_10064e5ec(0,0,param_1 + 0x188,3,param_1,3);
  FUN_10064e5ec(0,0x41200000,param_1 + 0x9c0,4,param_1,4);
  uVar10 = 0;
  FUN_10064e5ec(0,param_1 + 0x548,3,param_1,3);
  if (*(int *)(param_1 + 0xb8) != 0) {
    uVar7 = 0;
    iVar3 = **(int **)(param_1 + 200);
    do {
      fVar8 = (*(float *)(param_1 + 0xe80) + -120.0) * (1.0 / (float)(iVar3 + 2));
      FUN_10064e47c(fVar8,fVar8,*(undefined8 *)(*(long *)(param_1 + 0xc0) + uVar7 * 8));
      if (uVar7 == 0) {
        uVar4 = **(undefined8 **)(param_1 + 0xc0);
        uVar11 = 0x42c80000;
        uVar6 = 7;
        lVar5 = param_1;
      }
      else {
        uVar4 = *(undefined8 *)(*(long *)(param_1 + 0xc0) + uVar7 * 8);
        uVar11 = 0;
        uVar6 = 5;
        lVar5 = *(long *)(*(long *)(param_1 + 0xc0) + (ulong)((int)uVar7 - 1) * 8);
      }
      uVar10 = 0;
      FUN_10064e5ec(uVar11,uVar4,7,lVar5,uVar6);
      if (*(long *)(param_1 + 200) != 0) {
        *(bool *)(*(long *)(*(long *)(param_1 + 0xc0) + uVar7 * 8) + 0xb2c) =
             *(int *)(*(long *)(param_1 + 200) + 0x40) == 3;
      }
      FUN_1002ae98c();
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_1 + 0xb8));
    if (*(long *)(param_1 + 200) == 0) goto LAB_1002ad984;
  }
  FUN_1002ae6ec(param_1);
LAB_1002ad984:
  lVar5 = param_1 + 0xd0;
  local_88 = (float)FUN_1006425d0(lVar5,0,0,1,1);
  fStack_84 = (float)uVar10;
  FUN_10064e48c(lVar5,&local_88);
  FUN_10064e5ec(0xc1200000,0,lVar5,5,param_1,5);
  lVar2 = param_1 + 0xaf0;
  FUN_10064e5ec(0,0,lVar2,4,lVar5,4);
  FUN_10064e5ec(0,0x41200000,lVar1,4,lVar2,6);
  FUN_10064e5ec(0,0,param_1 + 0x458,8,lVar1,8);
  FUN_10064e5ec(0,0,param_1 + 0xd50,4,lVar2,6);
  FUN_10064e5ec(0,0,param_1 + 0xc20,4,param_1 + 0xd50,6);
  return;
}




void FUN_1002ada88(long param_1,uint *param_2)

{
  ulong uVar1;
  undefined8 local_48;
  
  if (*param_2 != 0) {
    uVar1 = 0;
    do {
      operator_new(0xe88);
      local_48 = FUN_1002ade3c();
      FUN_1002adb24(local_48,*(undefined8 *)(*(long *)(param_2 + 2) + uVar1 * 8));
      FUN_1002adc48(param_1 + 0xc0,&local_48);
      FUN_100534ad8(param_1 + 0x5c0,local_48,1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *param_2);
  }
  FUN_1002ad3f0(param_1);
  return;
}




void FUN_1002adb24(long *param_1,uint *param_2)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  void *pvVar3;
  ulong uVar4;
  void *local_78 [2];
  char local_61;
  undefined8 local_60;
  undefined8 **local_58 [2];
  char local_41;
  
  param_1[0x19] = (long)param_2;
  FUN_10003330c(local_58,param_2 + 4);
  pppuVar1 = (undefined8 ***)local_58[0];
  if (-1 < local_41) {
    pppuVar1 = local_58;
  }
  uVar2 = FUN_1004e0150(pppuVar1,0);
  FUN_1006513c0(param_1 + 0x138,uVar2);
  if (*param_2 != 0) {
    uVar4 = 0;
    do {
      uVar2 = *(undefined8 *)(*(long *)(param_2 + 2) + uVar4 * 8);
      pvVar3 = operator_new(0xb30);
      local_60 = FUN_1002aebb8();
      FUN_10003330c(local_78,param_1[0x19] + 0x28);
      FUN_1002ae594(pvVar3,uVar2,local_78,(char)param_2[0x11],*(undefined1 *)((long)param_2 + 0x45))
      ;
      if (local_61 < '\0') {
        operator_delete(local_78[0]);
      }
      FUN_1002ae66c(param_1 + 0x17,&local_60);
      (**(code **)(*param_1 + 0x78))(param_1,local_60,1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *param_2);
  }
  FUN_1002ad694(param_1);
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  return;
}




void FUN_1002adc48(uint *param_1,undefined8 *param_2)

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
    FUN_1002aef7c(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1002adcc8(undefined1 param_1 [16],float param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  undefined4 uVar5;
  undefined4 local_58;
  float fStack_54;
  
  lVar1 = param_3 + 0x3a0;
  FUN_100642324(lVar1);
  lVar2 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_10063fb5c(puVar4);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  uVar5 = *(undefined4 *)(param_3 + 0x3e0);
  fStack_54 = 0.0;
  if ((param_4 & 1) == 0) {
    FUN_10064e3cc(lVar1);
    fStack_54 = -param_2;
  }
  local_58 = uVar5;
  FUN_10063fb90(puVar4,&local_58);
  FUN_10063f0e8(0x3e19999a,puVar4);
  FUN_100642b14(lVar1,puVar4);
  return;
}




void FUN_1002addcc(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_100644b2c(param_2);
  if ((iVar1 < 1) && (iVar2 = FUN_100644b2c(param_2), -1 < iVar2)) {
    return;
  }
  FUN_1002adcc8(param_1,0 < iVar1);
  return;
}




void FUN_1002ade30(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0xfe8) = param_1;
  *(undefined4 *)(param_3 + 0xfec) = param_2;
  FUN_1002ad3f0();
  return;
}




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




void thunk_FUN_1002aeb64(long param_1)

{
  undefined8 uVar1;
  
  *(uint *)(param_1 + 0x4dc) = *(uint *)(param_1 + 0x4dc) | 4;
  uVar1 = FUN_1004e0150("INVENTORY_HAT_EQUIPPED_TAG",0);
  FUN_1006513c0(param_1 + 0xaf0,uVar1);
  uVar1 = FUN_10028cfcc();
  FUN_10028bd98(uVar1,*(long *)(param_1 + 200) + 0x10);
  return;
}




void FUN_1002ae3d0(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  uint *puVar4;
  
  *param_1 = &PTR_thunk_FUN_1002ae3d0_1014833a0;
  param_1[0x19] = 0;
  puVar4 = (uint *)(param_1 + 0x17);
  uVar2 = *puVar4;
  plVar1 = (long *)param_1[0x18];
  plVar3 = plVar1;
  if (uVar2 != 0) {
    do {
      if ((long *)*plVar3 != (long *)0x0) {
        (**(code **)(*(long *)*plVar3 + 8))();
        uVar2 = *(uint *)(param_1 + 0x17);
        plVar1 = (long *)param_1[0x18];
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1 + uVar2);
  }
  if (plVar1 != (long *)0x0) {
    *puVar4 = 0;
  }
  thunk_FUN_100651068(param_1 + 0x1aa);
  thunk_FUN_100651068(param_1 + 0x184);
  thunk_FUN_100651068(param_1 + 0x15e);
  thunk_FUN_100651068(param_1 + 0x138);
  thunk_FUN_100651068(param_1 + 0x112);
  param_1[0xf1] = &PTR_FUN_1014a7108;
  param_1[0x108] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x10b);
  FUN_10064e2bc(param_1 + 0xf1);
  param_1[199] = &PTR_FUN_1014a6db0;
  param_1[0xde] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0xe1);
  FUN_10064e2bc(param_1 + 199);
  param_1[0xa9] = &PTR_FUN_1014a7108;
  param_1[0xc0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xc3);
  FUN_10064e2bc(param_1 + 0xa9);
  param_1[0x8b] = &PTR_FUN_1014a7108;
  param_1[0xa2] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa5);
  FUN_10064e2bc(param_1 + 0x8b);
  param_1[0x6d] = &PTR_FUN_1014a7108;
  param_1[0x84] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x87);
  FUN_10064e2bc(param_1 + 0x6d);
  param_1[0x4f] = &PTR_FUN_1014a7108;
  param_1[0x66] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x69);
  FUN_10064e2bc(param_1 + 0x4f);
  param_1[0x31] = &PTR_FUN_1014a7108;
  param_1[0x48] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4b);
  FUN_10064e2bc(param_1 + 0x31);
  thunk_FUN_10064e2bc(param_1 + 0x1a);
  if ((void *)param_1[0x18] != (void *)0x0) {
    operator_delete__((void *)param_1[0x18]);
    puVar4[0] = 0;
    puVar4[1] = 0;
    param_1[0x18] = 0;
  }
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002ae3d0(void)

{
  FUN_1002ae3d0();
  return;
}




void FUN_1002ae580(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002ae3d0();
  operator_delete(pvVar1);
  return;
}




void FUN_1002ae594(long param_1,string *param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  long lVar1;
  undefined8 ***pppuVar2;
  string *this;
  undefined8 **local_58 [2];
  char local_41;
  
  *(string **)(param_1 + 0xb8) = param_2;
  this = (string *)(param_1 + 0xad8);
  std::string::operator=(this,param_2);
  std::string::operator=((string *)(param_1 + 0xaf0),param_2 + 0x18);
  std::string::operator=((string *)(param_1 + 0xb08),param_2 + 0x30);
  *(undefined1 *)(param_1 + 0xb2d) = param_4;
  *(undefined1 *)(param_1 + 0xb2e) = param_5;
  lVar1 = param_1 + 0x590;
  FUN_100652d8c(lVar1);
  FUN_1000e8a14(local_58,param_3);
  pppuVar2 = (undefined8 ***)local_58[0];
  if (-1 < local_41) {
    pppuVar2 = local_58;
  }
  FUN_100652ca4(lVar1,pppuVar2);
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (*(char *)(param_1 + 0xaef) < '\0') {
    this = *(string **)this;
  }
  FUN_100652cdc(lVar1,this);
  FUN_1002ae98c(param_1);
  return;
}




void FUN_1002ae66c(uint *param_1,undefined8 *param_2)

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
    FUN_1002aeff8(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1002ae6ec(long param_1)

{
  uint uVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  undefined1 auStack_80 [8];
  void *local_78;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  FUN_1004e313c(auStack_40);
  switch((*(uint **)(param_1 + 200))[0x10]) {
  case 0:
    *(uint *)(param_1 + 0x4dc) = *(uint *)(param_1 + 0x4dc) | 4;
    *(uint *)(param_1 + 0x3ec) = *(uint *)(param_1 + 0x3ec) & 0xffffffef | 4;
    pcVar2 = "INVENTORY_HAT_EQUIPPED_TAG";
    break;
  case 1:
    *(uint *)(param_1 + 0x3ec) = *(uint *)(param_1 + 0x3ec) & 0xfffffffb;
    pcVar2 = "INVENTORY_HAT_EQUIPPING_TAG";
    break;
  case 2:
    *(uint *)(param_1 + 0x3ec) = *(uint *)(param_1 + 0x3ec) | 0x14;
    *(uint *)(param_1 + 0x4dc) = *(uint *)(param_1 + 0x4dc) & 0xfffffffb;
    pcVar2 = "INVENTORY_HAT_UNEQUIPPED_TAG";
    break;
  case 3:
    *(uint *)(param_1 + 0x3ec) = *(uint *)(param_1 + 0x3ec) & 0xfffffffb;
    uVar1 = **(uint **)(param_1 + 200);
    uVar5 = (ulong)uVar1;
    if (0 < (int)uVar1) {
      do {
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    FUN_1004e313c(auStack_50);
    FUN_1004e38ac(auStack_50,"%d");
    FUN_1004e313c(auStack_60);
    FUN_1004e38ac(auStack_60,"%d");
    thunk_FUN_1004e439c(auStack_70,auStack_50);
    FUN_1004e3120(auStack_80,"/");
    FUN_1004e372c(auStack_70,auStack_80);
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
    }
    FUN_1004e372c(auStack_70,auStack_60);
    FUN_1006513c0(param_1 + 0xd50,auStack_70);
    uVar3 = FUN_1004e0150("SOCIAL_PINGS_PACK_UNDISCOVERED",0);
    FUN_1000153b4(auStack_40,uVar3);
    if (local_68 != (void *)0x0) {
      operator_delete__(local_68);
    }
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
  default:
    goto switchD_1002ae730_default;
  }
  uVar3 = FUN_1004e0150(pcVar2,0);
  FUN_1000153b4(auStack_40,uVar3);
switchD_1002ae730_default:
  FUN_1006513c0(param_1 + 0xaf0,auStack_40);
  fVar6 = (float)FUN_10064e3cc(param_1 + 0xd0);
  FUN_10065179c(fVar6 * 0.7,0,0x3f800000,param_1 + 0xaf0);
  lVar4 = *(long *)(param_1 + 200);
  uVar1 = *(uint *)(param_1 + 0x6bc);
  *(uint *)(param_1 + 0x6bc) =
       uVar1 & 0xfffffff8 | uVar1 & 3 | (uint)(*(int *)(lVar4 + 0x40) != 3) << 2;
  *(uint *)(param_1 + 0xca4) =
       *(uint *)(param_1 + 0xca4) & 0xfffffff8 |
       *(uint *)(param_1 + 0xca4) & 3 | (uint)(*(int *)(lVar4 + 0x40) == 3) << 2;
  *(uint *)(param_1 + 0xdd4) =
       *(uint *)(param_1 + 0xdd4) & 0xfffffff8 |
       *(uint *)(param_1 + 0xdd4) & 3 | (uint)(*(int *)(lVar4 + 0x40) == 3) << 2;
  if (*(char *)(lVar4 + 0x45) != '\0') {
    *(uint *)(param_1 + 0x20c) = *(uint *)(param_1 + 0x20c) | 4;
    *(uint *)(param_1 + 0x2fc) = *(uint *)(param_1 + 0x2fc) | 4;
    *(uint *)(param_1 + 0x80c) = *(uint *)(param_1 + 0x80c) | 4;
    *(uint *)(param_1 + 0x6bc) = uVar1 & 0xfffffffb;
  }
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void FUN_1002ae98c(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  undefined4 local_48;
  undefined4 uStack_44;
  
  lVar1 = param_3 + 0xb20;
  FUN_10064e48c(param_3,lVar1);
  lVar2 = param_3 + 0xc0;
  FUN_10064e48c(lVar2,lVar1);
  local_48 = FUN_10064e3cc(lVar2);
  uStack_44 = param_2;
  FUN_10064e48c(param_3 + 0x9e8,&local_48);
  fVar6 = (float)FUN_1006531b0(param_3 + 0x590);
  if (*(char *)(param_3 + 0xb2d) == '\0') {
    fVar7 = 0.72;
  }
  else {
    fVar7 = 0.54;
  }
  fVar6 = (*(float *)(param_3 + 0xb20) * fVar7) / fVar6;
  bVar4 = false;
  if ((*(float *)(param_3 + 0x5d8) == fVar6) &&
     (bVar4 = false, !NAN(*(float *)(param_3 + 0x5dc)) && !NAN(fVar6))) {
    bVar4 = *(float *)(param_3 + 0x5dc) == fVar6;
  }
  if (!bVar4) {
    *(float *)(param_3 + 0x5d8) = fVar6;
    *(float *)(param_3 + 0x5dc) = fVar6;
    FUN_1000200a0(param_3 + 0x590);
  }
  FUN_10064e48c(param_3 + 0x4a0,lVar1);
  FUN_10064e5ec(0,0,lVar2,8,param_3,8);
  FUN_10064e5ec(0,0,param_3 + 0x8f8,6,param_3,6);
  FUN_10064e5ec(0,0,param_3 + 0x9e8,8,param_3,8);
  bVar3 = *(byte *)(*(long *)(param_3 + 0xb8) + 0x4c);
  uVar5 = (uint)bVar3;
  if (bVar3 != 0) {
    if (*(char *)(param_3 + 0xb2d) == '\0') {
      uVar5 = (uint)*(byte *)(param_3 + 0xb2c) << 2;
    }
    else {
      uVar5 = 0;
    }
  }
  *(uint *)(param_3 + 0x97c) = *(uint *)(param_3 + 0x97c) & 0xfffffffb | uVar5;
  if ((((*(char *)(*(long *)(param_3 + 0xb8) + 0x4c) == '\0') &&
       (*(char *)(param_3 + 0xb2e) == '\0')) && (*(char *)(param_3 + 0xb2d) == '\0')) &&
     (*(char *)(param_3 + 0xb2c) != '\0')) {
    uVar5 = *(uint *)(param_3 + 0x84);
    if ((uVar5 & 0x7f80) == 0x3300) goto LAB_1002aeb04;
    uVar5 = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x3300;
  }
  else {
    if ((~*(uint *)(param_3 + 0x84) & 0x7f80) == 0) goto LAB_1002aeb04;
    uVar5 = *(uint *)(param_3 + 0x84) | 0x7f80;
  }
  *(uint *)(param_3 + 0x84) = uVar5;
  FUN_1000200a0(param_3);
LAB_1002aeb04:
  *(uint *)(param_3 + 0xa6c) =
       *(uint *)(param_3 + 0xa6c) & 0xfffffffb | (uint)*(byte *)(param_3 + 0xb2e) << 2;
  return;
}




void FUN_1002aeb58(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0xe80) = param_1;
  *(undefined4 *)(param_3 + 0xe84) = param_2;
  FUN_1002ad694();
  return;
}




void FUN_1002aeb64(long param_1)

{
  undefined8 uVar1;
  
  *(uint *)(param_1 + 0x4dc) = *(uint *)(param_1 + 0x4dc) | 4;
  uVar1 = FUN_1004e0150("INVENTORY_HAT_EQUIPPED_TAG",0);
  FUN_1006513c0(param_1 + 0xaf0,uVar1);
  uVar1 = FUN_10028cfcc();
  FUN_10028bd98(uVar1,*(long *)(param_1 + 200) + 0x10);
  return;
}




long * FUN_1002aebb8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  code *local_60;
  long *plStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  *puVar4 = &PTR_thunk_FUN_1002aed70_1014834e8;
  puVar4[0x17] = 0;
  puVar4 = puVar4 + 0x18;
  thunk_FUN_1000ac62c(puVar4,1);
  plVar1 = param_1 + 0x11f;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x13d;
  thunk_FUN_100652c08(plVar2);
  *(undefined8 *)((long)param_1 + 0xb27) = 0;
  param_1[0x162] = 0;
  param_1[0x161] = 0;
  param_1[0x164] = 0;
  param_1[0x163] = 0;
  param_1[0x15e] = 0;
  param_1[0x15d] = 0;
  param_1[0x160] = 0;
  param_1[0x15f] = 0;
  param_1[0x15c] = 0;
  param_1[0x15b] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100652cac(plVar2,DAT_101854a08,"quest_item_glow");
  FUN_100183c50(0,puVar4,&DAT_10115a164);
  uVar3 = *(uint *)((long)param_1 + 0x144);
  if ((uVar3 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x144) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x5f80;
    FUN_1000200a0(puVar4);
  }
  FUN_1001b495c(0,puVar4);
  FUN_100183ca8(puVar4,1);
  local_38 = DAT_101dbd460;
  local_60 = thunk_FUN_1002aeef4;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(param_1 + 0x19,&local_60);
  local_38 = DAT_101dbd48c;
  local_60 = thunk_FUN_1002aeef4;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(param_1 + 0x19,&local_60);
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_check");
  return param_1;
}




void thunk_FUN_1002aeef4(long param_1)

{
  int iVar1;
  char cVar2;
  long *plVar3;
  
  iVar1 = *(int *)(param_1 + 0xb28) + 1;
  *(int *)(param_1 + 0xb28) = iVar1;
  iVar1 = iVar1 % 3;
  if (iVar1 == 2) {
    plVar3 = (long *)(param_1 + 0xb08);
    cVar2 = *(char *)(param_1 + 0xb1f);
  }
  else if (iVar1 == 1) {
    plVar3 = (long *)(param_1 + 0xaf0);
    cVar2 = *(char *)(param_1 + 0xb07);
  }
  else {
    if (iVar1 != 0) {
      return;
    }
    plVar3 = (long *)(param_1 + 0xad8);
    cVar2 = *(char *)(param_1 + 0xaef);
  }
  if (cVar2 < '\0') {
    plVar3 = (long *)*plVar3;
  }
  FUN_100652cdc(param_1 + 0x590,plVar3);
  return;
}




void FUN_1002aed70(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_thunk_FUN_1002aed70_1014834e8;
  param_1[0x17] = 0;
  if (*(char *)((long)param_1 + 0xb1f) < '\0') {
    operator_delete((void *)param_1[0x161]);
  }
  if (*(char *)((long)param_1 + 0xb07) < '\0') {
    operator_delete((void *)param_1[0x15e]);
  }
  if (*(char *)((long)param_1 + 0xaef) < '\0') {
    operator_delete((void *)param_1[0x15b]);
  }
  param_1[0x13d] = &PTR_FUN_1014a7108;
  param_1[0x154] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x157);
  FUN_10064e2bc(param_1 + 0x13d);
  param_1[0x11f] = &PTR_FUN_1014a7108;
  param_1[0x136] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x139);
  FUN_10064e2bc(param_1 + 0x11f);
  puVar1 = param_1 + 0x18;
  *puVar1 = &PTR_FUN_101452438;
  thunk_FUN_100651068(param_1 + 0xf6);
  param_1[0xd6] = &PTR_FUN_1014a7108;
  param_1[0xed] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xf0);
  FUN_10064e2bc(param_1 + 0xd6);
  *puVar1 = &PTR_FUN_10145f300;
  param_1[0xb2] = &PTR_FUN_1014a7108;
  param_1[0xc9] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xcc);
  FUN_10064e2bc(param_1 + 0xb2);
  param_1[0x94] = &PTR_FUN_1014a7108;
  param_1[0xab] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xae);
  FUN_10064e2bc(param_1 + 0x94);
  param_1[0x76] = &PTR_FUN_1014a7108;
  param_1[0x8d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x90);
  FUN_10064e2bc(param_1 + 0x76);
  FUN_10064221c(param_1 + 0x65);
  FUN_10003bec8(puVar1);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002aed70(void)

{
  FUN_1002aed70();
  return;
}




void FUN_1002aeed4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002aed70();
  operator_delete(pvVar1);
  return;
}




void FUN_1002aeee8(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0xb20) = param_1;
  *(undefined4 *)(param_3 + 0xb24) = param_2;
  FUN_1002ae98c();
  return;
}




void FUN_1002aeef4(long param_1)

{
  int iVar1;
  char cVar2;
  long *plVar3;
  
  iVar1 = *(int *)(param_1 + 0xb28) + 1;
  *(int *)(param_1 + 0xb28) = iVar1;
  iVar1 = iVar1 % 3;
  if (iVar1 == 2) {
    plVar3 = (long *)(param_1 + 0xb08);
    cVar2 = *(char *)(param_1 + 0xb1f);
  }
  else if (iVar1 == 1) {
    plVar3 = (long *)(param_1 + 0xaf0);
    cVar2 = *(char *)(param_1 + 0xb07);
  }
  else {
    if (iVar1 != 0) {
      return;
    }
    plVar3 = (long *)(param_1 + 0xad8);
    cVar2 = *(char *)(param_1 + 0xaef);
  }
  if (cVar2 < '\0') {
    plVar3 = (long *)*plVar3;
  }
  FUN_100652cdc(param_1 + 0x590,plVar3);
  return;
}




void FUN_1002aef7c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_1002aeff8(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




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




void FUN_1002af428(void)

{
  FUN_1001db0bc("vainglory://Market/MENU_MARKET_TAB_NAME_MARKET/in_app_purchase",0);
  return;
}




void FUN_1002af438(void)

{
  FUN_1001db0bc("vainglory://Market/MENU_MARKET_TAB_NAME_MARKET/glory_for_ice",0);
  return;
}




void FUN_1002af448(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_10015d3f8();
  if (iVar1 != 0) {
    lVar2 = FUN_10015d3ec();
    FUN_1002ee1e8(param_1 + 0x12e8,*(undefined4 *)(lVar2 + 0x5450));
    lVar2 = FUN_10015d3ec();
    FUN_1002ee1e8(param_1 + 0x1950,*(undefined4 *)(lVar2 + 0x5454));
    lVar2 = FUN_10015d3ec();
    FUN_1002ee1e8(param_1 + 0x1fb8,*(undefined4 *)(lVar2 + 0x545c));
    lVar2 = FUN_10015d3ec();
    FUN_1002ee1e8(param_1 + 0x2620,*(undefined4 *)(lVar2 + 0x5458));
    FUN_1002af930(param_1);
    return;
  }
  return;
}




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




void FUN_1002af4f0(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  
  *param_1 = &PTR_thunk_FUN_1002af4f0_101483630;
  param_1[0x18] = &PTR_FUN_101483790;
  uVar1 = *(uint *)(param_1 + 0x39);
  if (uVar1 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1[0x3a] + lVar2) = 0;
      lVar2 = lVar2 + 8;
    } while ((ulong)uVar1 * 8 - lVar2 != 0);
  }
  if (param_1[0x3a] != 0) {
    *(undefined4 *)(param_1 + 0x39) = 0;
  }
  param_1[0x4c4] = &PTR_FUN_101483b28;
  thunk_FUN_100651068(param_1 + 0x56b);
  param_1[0x54d] = &PTR_FUN_1014a7108;
  param_1[0x564] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x567);
  FUN_10064e2bc(param_1 + 0x54d);
  param_1[0x52f] = &PTR_FUN_1014a7108;
  param_1[0x546] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x549);
  FUN_10064e2bc(param_1 + 0x52f);
  param_1[0x511] = &PTR_FUN_1014a7108;
  param_1[0x528] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x52b);
  FUN_10064e2bc(param_1 + 0x511);
  FUN_10003bec8(param_1 + 0x4c4);
  param_1[0x3f7] = &PTR_FUN_101483b28;
  thunk_FUN_100651068(param_1 + 0x49e);
  param_1[0x480] = &PTR_FUN_1014a7108;
  param_1[0x497] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x49a);
  FUN_10064e2bc(param_1 + 0x480);
  param_1[0x462] = &PTR_FUN_1014a7108;
  param_1[0x479] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x47c);
  FUN_10064e2bc(param_1 + 0x462);
  param_1[0x444] = &PTR_FUN_1014a7108;
  param_1[0x45b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x45e);
  FUN_10064e2bc(param_1 + 0x444);
  FUN_10003bec8(param_1 + 0x3f7);
  param_1[0x32a] = &PTR_FUN_101483b28;
  thunk_FUN_100651068(param_1 + 0x3d1);
  param_1[0x3b3] = &PTR_FUN_1014a7108;
  param_1[0x3ca] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3cd);
  FUN_10064e2bc(param_1 + 0x3b3);
  param_1[0x395] = &PTR_FUN_1014a7108;
  param_1[0x3ac] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3af);
  FUN_10064e2bc(param_1 + 0x395);
  param_1[0x377] = &PTR_FUN_1014a7108;
  param_1[0x38e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x391);
  FUN_10064e2bc(param_1 + 0x377);
  FUN_10003bec8(param_1 + 0x32a);
  param_1[0x25d] = &PTR_FUN_101483b28;
  thunk_FUN_100651068(param_1 + 0x304);
  param_1[0x2e6] = &PTR_FUN_1014a7108;
  param_1[0x2fd] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x300);
  FUN_10064e2bc(param_1 + 0x2e6);
  param_1[0x2c8] = &PTR_FUN_1014a7108;
  param_1[0x2df] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2e2);
  FUN_10064e2bc(param_1 + 0x2c8);
  param_1[0x2aa] = &PTR_FUN_1014a7108;
  param_1[0x2c1] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2c4);
  FUN_10064e2bc(param_1 + 0x2aa);
  FUN_10003bec8(param_1 + 0x25d);
  thunk_FUN_10064e2bc(param_1 + 0x246);
  param_1[0x228] = &PTR_FUN_1014a7108;
  param_1[0x23f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x242);
  FUN_10064e2bc(param_1 + 0x228);
  param_1[0x20a] = &PTR_FUN_1014a7108;
  param_1[0x221] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x224);
  FUN_10064e2bc(param_1 + 0x20a);
  thunk_FUN_100198b18(param_1 + 0x55);
  thunk_FUN_1001b1228(param_1 + 0x3b);
  if ((void *)param_1[0x3a] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3a]);
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
  }
  param_1[0x1b] = &PTR_FUN_1014a7108;
  param_1[0x32] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x35);
  FUN_10064e2bc(param_1 + 0x1b);
  FUN_10014f51c(param_1 + 0x18);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002af854(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101483b28;
  thunk_FUN_100651068(param_1 + 0xa7);
  param_1[0x89] = &PTR_FUN_1014a7108;
  param_1[0xa0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa3);
  FUN_10064e2bc(param_1 + 0x89);
  param_1[0x6b] = &PTR_FUN_1014a7108;
  param_1[0x82] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x85);
  FUN_10064e2bc(param_1 + 0x6b);
  param_1[0x4d] = &PTR_FUN_1014a7108;
  param_1[100] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x67);
  FUN_10064e2bc(param_1 + 0x4d);
  FUN_10003bec8(param_1);
  return;
}




void thunk_FUN_1002af4f0(void)

{
  FUN_1002af4f0();
  return;
}




void FUN_1002af8f8(long param_1)

{
  FUN_1002af4f0(param_1 + -0xc0);
  return;
}




void FUN_1002af900(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002af4f0();
  operator_delete(pvVar1);
  return;
}




void FUN_1002af914(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002af4f0(param_1 + -0xc0);
  operator_delete(pvVar1);
  return;
}




void thunk_FUN_1002af930(void)

{
  FUN_1002af930();
  return;
}




void FUN_1002af930(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  float fVar5;
  undefined8 uVar6;
  
  uVar6 = (**(code **)(*param_3 + 0x48))();
  FUN_10064e47c(param_3 + 0x1b);
  plVar2 = param_3 + 0x246;
  FUN_10064e47c(uVar6,0x43160000,plVar2);
  param_2 = param_2 + -150.0;
  FUN_10064e47c(uVar6,param_2,param_3 + 0x228);
  plVar1 = param_3 + 0x55;
  FUN_10064e47c(uVar6,param_2,plVar1);
  uVar6 = FUN_10064e3cc(plVar1);
  FUN_10064e3cc(plVar1);
  FUN_10064e47c(uVar6,param_2 * 0.2,param_3 + 0x20a);
  FUN_10064e5ec(0,0,plVar2,0,param_3,0);
  FUN_10064e5ec(0,0,param_3 + 0x228,0,plVar2,3);
  FUN_10064e5ec(0,0,plVar1,0,plVar2,3);
  plVar3 = param_3 + 0x25d;
  fVar5 = (float)FUN_10064e3cc(plVar2);
  FUN_10064e5ec(fVar5 * 0.25,0,plVar3,7,plVar2,7);
  plVar2 = param_3 + 0x32a;
  FUN_10064e72c(0,plVar2,3,plVar3,1);
  FUN_10064e72c(0,plVar2,5,plVar3,5);
  plVar3 = param_3 + 0x3f7;
  FUN_10064e72c(0,plVar3,3,plVar2,1);
  FUN_10064e72c(0,plVar3,5,plVar2,5);
  FUN_10064e72c(0,param_3 + 0x4c4,3,plVar3,1);
  FUN_10064e72c(0,param_3 + 0x4c4,5,plVar3,5);
  FUN_10064e5ec(0,0,param_3 + 0x20a,6,plVar1,6);
  iVar4 = FUN_100131560();
  if (iVar4 != 0) {
    *(uint *)((long)param_3 + 0x12b4) = *(uint *)((long)param_3 + 0x12b4) & 0xfffffffb;
  }
  return;
}




void FUN_1002afb68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 local_28;
  
  FUN_100198d1c(param_1 + 0x2a8,param_4,param_2,param_5,param_3);
  local_28 = param_4;
  FUN_1002afbbc(param_1 + 0x1c8,&local_28);
  return;
}




void FUN_1002afbbc(uint *param_1,undefined8 *param_2)

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
    FUN_1002afd30(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1002afc3c(long param_1,undefined8 param_2)

{
  FUN_1001990b0(param_1 + 0x2a8,param_2,0);
  return;
}




void FUN_1002afc48(long param_1,undefined8 param_2)

{
  FUN_100198f78(param_1 + 0x2a8,1,param_2);
  return;
}




void FUN_1002afc58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1002af930();
    return;
  }
  return;
}




void FUN_1002afc64(void)

{
  return;
}




void thunk_FUN_1002af448(void)

{
  FUN_1002af448();
  return;
}




void FUN_1002afc6c(long param_1)

{
  FUN_1002af448(param_1 + -0xc0);
  return;
}




void FUN_1002afc74(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101483b28;
  thunk_FUN_100651068(param_1 + 0xa7);
  param_1[0x89] = &PTR_FUN_1014a7108;
  param_1[0xa0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa3);
  FUN_10064e2bc(param_1 + 0x89);
  param_1[0x6b] = &PTR_FUN_1014a7108;
  param_1[0x82] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x85);
  FUN_10064e2bc(param_1 + 0x6b);
  param_1[0x4d] = &PTR_FUN_1014a7108;
  param_1[100] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x67);
  FUN_10064e2bc(param_1 + 0x4d);
  pvVar1 = (void *)FUN_10003bec8(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1002afd1c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10064e2bc();
  operator_delete(pvVar1);
  return;
}




void FUN_1002afd30(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




long * FUN_1002afdac(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 local_80;
  long *plStack_78;
  long *local_70;
  code *local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  *puVar4 = &PTR_thunk_FUN_1002b0078_101483df0;
  puVar4 = puVar4 + 0x17;
  thunk_FUN_100652c08(puVar4);
  plVar1 = param_3 + 0x35;
  FUN_1001bfcbc(plVar1);
  plVar2 = param_3 + 0xe2;
  thunk_FUN_100650e64(plVar2);
  *(undefined4 *)((long)param_3 + 0x844) = 0x69;
  *(undefined1 *)((long)param_3 + 0x84c) = 0;
  param_3[0x10a] = 0x300000069;
  *(undefined1 *)(param_3 + 0x10b) = 0;
  *(undefined4 *)((long)param_3 + 0x85c) = 0;
  *(undefined2 *)(param_3 + 0x10c) = 1;
  *(undefined1 *)((long)param_3 + 0x862) = 1;
  (**(code **)(*param_3 + 0x78))(param_3,puVar4,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar1,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar2,1);
  FUN_10064e48c(param_3,&DAT_101e44a90);
  *(uint *)((long)param_3 + 0x84) = *(uint *)((long)param_3 + 0x84) | 0x10;
  local_58 = DAT_101dbd458;
  local_80 = FUN_1002b0068;
  local_70 = (long *)0x0;
  local_68 = (code *)0x0;
  local_60 = 1;
  plVar3 = param_3 + 1;
  plStack_78 = param_3;
  FUN_10001554c(plVar3,&local_80);
  local_58 = DAT_101dbd470;
  local_80 = FUN_1002b0068;
  local_68 = (code *)0x0;
  local_60 = 0;
  local_70 = (long *)0x0;
  plStack_78 = param_3;
  FUN_10001554c(plVar3,&local_80);
  local_58 = DAT_101dbd494;
  local_80 = thunk_FUN_1002b0a94;
  local_68 = (code *)0x0;
  local_60 = 0;
  local_70 = (long *)0x0;
  plStack_78 = param_3;
  FUN_10001554c(plVar3,&local_80);
  local_58 = DAT_101dbd498;
  local_80 = thunk_FUN_1002b0af0;
  local_68 = (code *)0x0;
  local_60 = 0;
  local_70 = (long *)0x0;
  plStack_78 = param_3;
  FUN_10001554c(plVar3,&local_80);
  uVar5 = (**(code **)(*param_3 + 0x48))(param_3);
  local_80 = (code *)CONCAT44(param_2,uVar5);
  FUN_10064e48c(puVar4,&local_80);
  FUN_100652cac(puVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(puVar4,&DAT_101e44a98,2);
  uVar6 = (**(code **)(*param_3 + 0x48))(param_3);
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_1001bfcdc(uVar6,plVar1);
  if ((*(uint *)((long)param_3 + 0x22c) & 0x7f80) != 0) {
    *(uint *)((long)param_3 + 0x22c) = *(uint *)((long)param_3 + 0x22c) & 0xffff807f;
    FUN_1000200a0(plVar1);
  }
  local_80 = (code *)CONCAT44(local_80._4_4_,0x7fffffff);
  FUN_100651594(plVar2,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&local_80);
  uVar6 = (**(code **)(*param_3 + 0x48))(param_3);
  FUN_10065179c(uVar6,0,0x3f800000,plVar2);
  uVar6 = FUN_1003166d0();
  local_80 = (code *)0x0;
  local_68 = thunk_FUN_1002b0b4c;
  plStack_78 = param_3;
  local_70 = param_3;
  FUN_1000debac(uVar6,&local_80);
  return param_3;
}

