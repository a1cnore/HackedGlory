// functions/10024 — 226 functions
#include "GameKindred.h"




void FUN_1002400e4(undefined1 param_1 [16],float param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  float fVar2;
  undefined1 auStack_60 [8];
  void *local_58;
  
  uVar1 = FUN_1004e0150(*(undefined8 *)(param_4 + 0x40),0);
  FUN_1006513c0(param_3 + 0xb8,uVar1);
  fVar2 = *(float *)(param_3 + 0xfc);
  FUN_10064259c(param_3 + 0xb8);
  fVar2 = fVar2 + param_2 + 12.0;
  if (*(float *)(param_3 + 0x22c) != fVar2) {
    *(float *)(param_3 + 0x22c) = fVar2;
    FUN_1000200a0(param_3 + 0x1e8);
  }
  uVar1 = FUN_1004e0150(*(undefined8 *)(param_5 + 0x28),0);
  FUN_1006513c0(param_3 + 0x1e8,uVar1);
  uVar1 = FUN_1004e0150(*(undefined8 *)(param_4 + 0x40),0);
  FUN_1006513c0(param_3 + 0x448,uVar1);
  uVar1 = FUN_1004e0150(*(undefined8 *)(param_4 + 0x48),0);
  thunk_FUN_1004e439c(auStack_60,uVar1);
  FUN_1000ef2f4(auStack_60,param_4);
  FUN_1000f2b7c(auStack_60);
  FUN_1006513c0(param_3 + 0x578,auStack_60);
  uVar1 = FUN_1004e0150("STAT_TABLE_HEALTH",0);
  FUN_10024038c(*(undefined4 *)(param_4 + 0xe0),*(undefined4 *)(param_4 + 0xe4),param_3 + 0x990,
                uVar1,1,*(undefined1 *)(param_3 + 0x33d0));
  uVar1 = FUN_1004e0150("STAT_TABLE_ARMOR",0);
  FUN_10024038c(*(undefined4 *)(param_4 + 0x110),*(undefined4 *)(param_4 + 0x114),param_3 + 0xed8,
                uVar1,1,*(undefined1 *)(param_3 + 0x33d0));
  uVar1 = FUN_1004e0150("STAT_TABLE_ENERGY",0);
  FUN_10024038c(*(undefined4 *)(param_4 + 0xf0),*(undefined4 *)(param_4 + 0xf4),param_3 + 0x1420,
                uVar1,1,*(undefined1 *)(param_3 + 0x33d0));
  uVar1 = FUN_1004e0150("STAT_TABLE_SHIELD",0);
  FUN_10024038c(*(undefined4 *)(param_4 + 0x118),*(undefined4 *)(param_4 + 0x11c),param_3 + 0x1968,
                uVar1,1,*(undefined1 *)(param_3 + 0x33d0));
  uVar1 = FUN_1004e0150("STAT_TABLE_WEAPON",0);
  FUN_10024038c(*(undefined4 *)(param_4 + 0x100),*(undefined4 *)(param_4 + 0x104),param_3 + 0x1eb0,
                uVar1,1,*(undefined1 *)(param_3 + 0x33d0));
  uVar1 = FUN_1004e0150("STAT_TABLE_RANGE",0);
  FUN_10024038c(*(undefined4 *)(param_4 + 0x128),0,param_3 + 0x23f8,uVar1,3,
                *(undefined1 *)(param_3 + 0x33d0));
  uVar1 = FUN_1004e0150("STAT_TABLE_ATK_SPEED",0);
  FUN_10024038c(*(undefined4 *)(param_4 + 300),*(undefined4 *)(param_4 + 0x130),param_3 + 0x2940,
                uVar1,2,*(undefined1 *)(param_3 + 0x33d0));
  uVar1 = FUN_1004e0150("STAT_TABLE_MOVE_SPEED",0);
  FUN_10024038c(*(undefined4 *)(param_4 + 0x14c),0,param_3 + 0x2e88,uVar1,3,
                *(undefined1 *)(param_3 + 0x33d0));
  FUN_10023fda0(param_3);
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  return;
}




void FUN_10024038c(undefined8 param_1,float param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined **ppuVar5;
  bool bVar6;
  float fVar7;
  undefined1 auStack_a0 [8];
  void *local_98;
  undefined1 *local_90;
  void *local_88;
  
  lVar1 = param_3 + 0x88;
  ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  if (param_6 == 0) {
    ppuVar5 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
  }
  fVar7 = 0.66;
  if (param_6 == 0) {
    fVar7 = 1.0;
  }
  FUN_100651594(lVar1,*ppuVar5,&DAT_10115a168);
  lVar2 = param_3 + 0x1b8;
  FUN_100651594(lVar2,*ppuVar5,&DAT_10115a168);
  lVar3 = param_3 + 0x2e8;
  FUN_100651594(lVar3,*ppuVar5,&DAT_10115a168);
  plVar4 = (long *)(param_3 + 0x418);
  FUN_100651594(plVar4,*ppuVar5,&DAT_10115a168);
  bVar6 = false;
  if ((*(float *)(param_3 + 0xcc) == 0.0) && (bVar6 = false, !NAN(*(float *)(param_3 + 200)))) {
    bVar6 = *(float *)(param_3 + 200) == 0.0;
  }
  if (!bVar6) {
    *(undefined8 *)(param_3 + 200) = 0;
    FUN_1000200a0(lVar1);
  }
  local_90 = (undefined1 *)0x3f00000000000000;
  (**(code **)(*(long *)(param_3 + 0x88) + 0x28))(lVar1,&local_90);
  if ((*(float *)(param_3 + 0x1f8) != fVar7 * 460.0) || (*(float *)(param_3 + 0x1fc) != 0.0)) {
    *(float *)(param_3 + 0x1f8) = fVar7 * 460.0;
    *(undefined4 *)(param_3 + 0x1fc) = 0;
    FUN_1000200a0(lVar2);
  }
  local_90 = (undefined1 *)0x3f0000003f800000;
  (**(code **)(*(long *)(param_3 + 0x1b8) + 0x28))(lVar2,&local_90);
  if ((*(float *)(param_3 + 0x328) != fVar7 * 520.0) || (*(float *)(param_3 + 0x32c) != 0.0)) {
    *(float *)(param_3 + 0x328) = fVar7 * 520.0;
    *(undefined4 *)(param_3 + 0x32c) = 0;
    FUN_1000200a0(lVar3);
  }
  local_90 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_3 + 0x2e8) + 0x28))(lVar3,&local_90);
  if ((*(float *)(param_3 + 0x458) != fVar7 * 580.0) || (*(float *)(param_3 + 0x45c) != 0.0)) {
    *(float *)(param_3 + 0x458) = fVar7 * 580.0;
    *(undefined4 *)(param_3 + 0x45c) = 0;
    FUN_1000200a0(plVar4);
  }
  local_90 = (undefined1 *)0x3f00000000000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_90);
  FUN_1004e313c(&local_90);
  FUN_1006513c0(lVar1,param_4);
  FUN_1000ee590(param_1,param_5,&local_90,1);
  FUN_1006513c0(lVar2,&local_90);
  if (param_2 <= 0.0) {
    FUN_1006513c0(plVar4,&DAT_101d91650);
    FUN_1006513c0(lVar3,&DAT_101d91650);
  }
  else {
    FUN_1000ee590((float)param_1 + param_2 * 11.0,param_5,&local_90,1);
    FUN_1006513c0(plVar4,&local_90);
    FUN_1004e3120(auStack_a0,"-");
    FUN_1006513c0(lVar3,auStack_a0);
    if (local_98 != (void *)0x0) {
      operator_delete__(local_98);
    }
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  return;
}




void FUN_100240658(long *param_1)

{
  (**(code **)(*param_1 + 0xe8))();
  FUN_10023fda0(param_1);
  return;
}




long * FUN_100240684(long *param_1)

{
  undefined8 *puVar1;
  undefined8 local_48;
  
  puVar1 = (undefined8 *)FUN_1006421a8();
  *puVar1 = &PTR_FUN_101478578;
  thunk_FUN_100650e64(puVar1 + 0x11);
  thunk_FUN_100650e64(param_1 + 0x37);
  thunk_FUN_100650e64(param_1 + 0x5d);
  thunk_FUN_100650e64(param_1 + 0x83);
  (**(code **)(*param_1 + 0x78))(param_1,puVar1 + 0x11,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x37,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x5d,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x83,1);
  local_48 = 0x3f00000000000000;
  (**(code **)(*param_1 + 0x28))(param_1,&local_48);
  return param_1;
}




void thunk_FUN_100240838(void)

{
  FUN_100240838();
  return;
}




void FUN_100240780(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100240838();
  operator_delete(pvVar1);
  return;
}




void FUN_100240794(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101478578;
  thunk_FUN_100651068(param_1 + 0x83);
  thunk_FUN_100651068(param_1 + 0x5d);
  thunk_FUN_100651068(param_1 + 0x37);
  thunk_FUN_100651068(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void FUN_1002407e4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101478578;
  thunk_FUN_100651068(param_1 + 0x83);
  thunk_FUN_100651068(param_1 + 0x5d);
  thunk_FUN_100651068(param_1 + 0x37);
  thunk_FUN_100651068(param_1 + 0x11);
  pvVar1 = (void *)FUN_10064221c(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100240838(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  *param_1 = &PTR_thunk_FUN_100240838_101478430;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x2e88) = &PTR_FUN_101478578;
    thunk_FUN_100651068((long)param_1 + lVar1 + 0x32a0);
    thunk_FUN_100651068((long)param_1 + lVar1 + 0x3170);
    thunk_FUN_100651068((long)param_1 + lVar1 + 0x3040);
    thunk_FUN_100651068((long)param_1 + lVar1 + 0x2f10);
    FUN_10064221c((long)param_1 + lVar1 + 0x2e88);
    lVar1 = lVar1 + -0x548;
  } while (lVar1 != -0x2a40);
  thunk_FUN_100651068(param_1 + 0x10c);
  thunk_FUN_100651068(param_1 + 0xe6);
  FUN_10064221c(param_1 + 0xd5);
  thunk_FUN_100651068(param_1 + 0xaf);
  thunk_FUN_100651068(param_1 + 0x89);
  thunk_FUN_100651068(param_1 + 99);
  thunk_FUN_100651068(param_1 + 0x3d);
  thunk_FUN_100651068(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




long * FUN_10024090c(long *param_1)

{
  long *plVar1;
  bool bVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float local_48;
  float fStack_44;
  
  puVar3 = (undefined8 *)FUN_1006421a8();
  *puVar3 = &PTR_FUN_101478678;
  puVar3 = puVar3 + 0x11;
  thunk_FUN_100652c08(puVar3);
  plVar1 = param_1 + 0x2f;
  thunk_FUN_100652c08(plVar1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100652cac(puVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_circle_outline");
  bVar2 = false;
  if ((*(float *)(param_1 + 0x1b) == 0.5) && (bVar2 = false, !NAN(*(float *)((long)param_1 + 0xdc)))
     ) {
    bVar2 = *(float *)((long)param_1 + 0xdc) == 0.5;
  }
  if (!bVar2) {
    param_1[0x1b] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(puVar3);
  }
  fVar4 = 34.0;
  FUN_10064e47c(puVar3);
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_circle_filled");
  if (*(float *)(param_1 + 0x39) == 0.5) {
    fVar5 = 0.5;
    fVar4 = 0.5;
    if (*(float *)((long)param_1 + 0x1cc) == 0.5) goto LAB_100240a14;
  }
  fVar5 = fVar4;
  param_1[0x39] = (long)&DAT_3f0000003f000000;
  FUN_1000200a0(plVar1);
LAB_100240a14:
  local_48 = (float)FUN_100652e60(puVar3);
  local_48 = local_48 * 0.85;
  fStack_44 = fVar5 * 0.85;
  FUN_10064e48c(plVar1,&local_48);
  return param_1;
}




long * FUN_100240a58(long *param_1)

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
  undefined **ppuVar20;
  uint uVar21;
  undefined4 uVar22;
  int iVar23;
  int iVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  code *local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  
  puVar25 = (undefined8 *)FUN_100269da8();
  *puVar25 = &PTR_thunk_FUN_100241754_101478778;
  FUN_10064e264();
  plVar1 = param_1 + 0x30;
  thunk_FUN_1006543ec(plVar1);
  plVar2 = param_1 + 100;
  thunk_FUN_100652c08();
  plVar3 = param_1 + 0x82;
  thunk_FUN_100652c08();
  plVar4 = param_1 + 0xa0;
  thunk_FUN_100652c08();
  plVar5 = param_1 + 0xbe;
  thunk_FUN_1006543ec(plVar5);
  plVar6 = param_1 + 0xf2;
  FUN_10053077c(plVar6,0);
  plVar7 = param_1 + 0x199;
  thunk_FUN_100652c08();
  plVar8 = param_1 + 0x1b7;
  thunk_FUN_100650e64();
  plVar9 = param_1 + 0x1dd;
  thunk_FUN_100183990(plVar9,0);
  FUN_1006421a8();
  param_1[0x29b] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  param_1[0x2ad] = 0;
  param_1[0x2ac] = 0;
  plVar10 = param_1 + 0x2ae;
  FUN_1006421a8(plVar10);
  param_1[0x2ae] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar11 = param_1 + 0x2bf;
  thunk_FUN_100652c08();
  plVar12 = param_1 + 0x2dd;
  FUN_1006533a4(plVar12);
  plVar13 = param_1 + 0x2fd;
  thunk_FUN_100650e64();
  plVar14 = param_1 + 0x323;
  thunk_FUN_100650e64(plVar14);
  plVar15 = param_1 + 0x349;
  thunk_FUN_100650e64();
  plVar16 = param_1 + 0x36f;
  thunk_FUN_100650e64(plVar16);
  plVar17 = param_1 + 0x395;
  thunk_FUN_100650e64(plVar17);
  plVar18 = param_1 + 0x3bb;
  thunk_FUN_100650e64();
  plVar19 = param_1 + 0x3e1;
  thunk_FUN_100181304(plVar19,0);
  FUN_1004e313c();
  param_1[0x69c] = 0;
  param_1[0x69b] = 0;
  param_1[0x69a] = 0;
  FUN_1004e3004(param_1 + 0x69d);
  param_1[0x6a0] = -1;
  param_1[0x69f] = 0;
  *(undefined4 *)(param_1 + 0x69e) = 0x44910000;
  param_1[0x6a1] = 0;
  *(undefined4 *)(param_1 + 0x6a2) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar25 + 0x19,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100642bd8(plVar1,plVar4,1);
  FUN_100642bd8(plVar1,plVar5,1);
  FUN_100642bd8(plVar5,plVar6,1);
  FUN_1005308f8(plVar6,plVar14,1);
  FUN_1005308f8(plVar6,plVar8,1);
  FUN_1005308f8(plVar6,plVar9,1);
  FUN_1005308f8(plVar6,param_1 + 0x29b,1);
  FUN_1005308f8(plVar6,plVar10,1);
  FUN_100642bd8(plVar10,plVar11,1);
  FUN_100642bd8(plVar10,plVar12,1);
  FUN_100642bd8(plVar10,plVar7,1);
  FUN_100642bd8(plVar10,plVar13,1);
  FUN_1005308f8(plVar6,plVar15,1);
  FUN_1005308f8(plVar6,plVar16,1);
  FUN_1005308f8(plVar6,plVar17,1);
  FUN_1005308f8(plVar6,plVar18,1);
  FUN_100642bd8(plVar1,plVar19,1);
  iVar23 = FUN_100126c88();
  *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) | 0x10;
  FUN_100654488(plVar1,0);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar21 = *(uint *)((long)param_1 + 0x3a4);
  if ((uVar21 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x3a4) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar2);
  }
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_brushstroke_vert_l");
  uVar21 = *(uint *)((long)param_1 + 0x584);
  if ((uVar21 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x584) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar4);
  }
  FUN_100652dd4(plVar4,&DAT_10115a164,2);
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_brushstroke_vert_r");
  uVar21 = *(uint *)((long)param_1 + 0x494);
  if ((uVar21 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x494) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar3);
  }
  FUN_100652dd4(plVar3,&DAT_10115a164,2);
  FUN_100654488(plVar5,1);
  if ((*(float *)(param_1 + 200) != 0.5) || (*(float *)((long)param_1 + 0x644) != 0.0)) {
    param_1[200] = 0x3f000000;
    FUN_1000200a0(plVar5);
  }
  if (*(float *)((long)param_1 + 0x634) != 50.0) {
    *(undefined4 *)((long)param_1 + 0x634) = 0x42480000;
    FUN_1000200a0(plVar5);
  }
  FUN_100530be0(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,
                PTR_s_scrollbar_button_fill_top_101854958,
                PTR_s_scrollbar_button_fill_middle_101854960,
                PTR_s_scrollbar_button_fill_bottom_101854968);
  FUN_100530bb4(0x3e800000,0x3f800000,plVar6);
  if ((*(float *)(param_1 + 0xfc) != 0.5) || (*(float *)((long)param_1 + 0x7e4) != 0.0)) {
    param_1[0xfc] = 0x3f000000;
    FUN_1000200a0(plVar6);
  }
  FUN_100652cac(plVar11,PTR_s_build___MenuPartsCommon_tga_101854970,"circle_deserter_icon_backdrop")
  ;
  FUN_100652dd4(plVar11,&DAT_10115a168,2);
  uVar21 = *(uint *)((long)param_1 + 0x167c);
  if ((uVar21 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x167c) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x3300;
    FUN_1000200a0(plVar11);
  }
  fVar29 = *(float *)(param_1 + 0x2c9);
  if ((fVar29 != 0.5) || (fVar29 = *(float *)((long)param_1 + 0x164c), fVar29 != 0.5)) {
    param_1[0x2c9] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar11);
  }
  FUN_100652cac(plVar12,PTR_s_build___MenuPartsCommon_tga_101854970,"icon_achievement_prg_filled");
  FUN_100652dd4(plVar12,&DAT_10115a170,2);
  uVar21 = *(uint *)((long)param_1 + 0x176c);
  if ((uVar21 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x176c) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5900;
    FUN_1000200a0(plVar12);
  }
  fVar27 = (float)FUN_100652e60(plVar11);
  fVar30 = fVar29 * 0.95;
  fVar28 = (float)FUN_100652e60(plVar12);
  fVar28 = (fVar27 * 0.95) / fVar28;
  fVar30 = fVar30 / fVar29;
  if ((*(float *)(param_1 + 0x2e6) != fVar28) || (*(float *)((long)param_1 + 0x1734) != fVar30)) {
    *(float *)(param_1 + 0x2e6) = fVar28;
    *(float *)((long)param_1 + 0x1734) = fVar30;
    FUN_1000200a0(plVar12);
  }
  if ((*(float *)(param_1 + 0x2e7) != 0.5) || (*(float *)((long)param_1 + 0x173c) != 0.5)) {
    param_1[0x2e7] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar12);
  }
  FUN_100653464(plVar12,FUN_1002416c4,param_1);
  FUN_100652cac(plVar7,PTR_s_build___LowPriorityQueue_tga_1018549e8,"Splash_LowPriorityQueue");
  if ((*(float *)(param_1 + 0x1a2) != 0.8) || (*(float *)((long)param_1 + 0xd14) != 0.8)) {
    param_1[0x1a2] = 0x3f4ccccd3f4ccccd;
    FUN_1000200a0(plVar7);
  }
  if ((*(float *)(param_1 + 0x1a3) != 0.5) || (*(float *)((long)param_1 + 0xd1c) != 0.5)) {
    param_1[0x1a3] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar7);
  }
  FUN_100651594(plVar14,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e290,&DAT_10115a168);
  uVar26 = FUN_1004e0150("MENU_LPQ_NOTIFICATION_TITLE",0);
  FUN_1006513c0(plVar14,uVar26);
  FUN_100651594(plVar8,PTR_s_build___Fonts_Brandon_Regular_60_10184e208,&DAT_10115a168);
  uVar26 = FUN_1004e0150("MENU_LPQ_MATCHES_REMAINING_LABEL",0);
  FUN_1006513c0(plVar8,uVar26);
  FUN_100651460(plVar8,&DAT_10115a170);
  uVar21 = *(uint *)((long)param_1 + 0xe3c);
  if ((uVar21 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0xe3c) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5900;
    FUN_1000200a0(plVar8);
  }
  FUN_100652cdc(param_1 + 0x277,"circle_button_question");
  uVar21 = *(uint *)((long)param_1 + 0xf6c);
  if ((uVar21 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0xf6c) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar9);
  }
  FUN_1001b495c(0xbf800000,plVar9);
  uVar22 = DAT_101d91884;
  local_80 = DAT_101d91884;
  local_a8 = thunk_FUN_100242b28;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  local_a0 = param_1;
  FUN_10001554c(param_1 + 0x1de,&local_a8);
  iVar24 = FUN_100126c88();
  fVar29 = DAT_101854a78 * 0.7;
  if (iVar24 == 0) {
    fVar29 = 0.7;
  }
  if ((*(float *)(param_1 + 0x1e6) != fVar29) || (*(float *)((long)param_1 + 0xf34) != fVar29)) {
    *(float *)(param_1 + 0x1e6) = fVar29;
    *(float *)((long)param_1 + 0xf34) = fVar29;
    FUN_1000200a0(plVar9);
  }
  FUN_1001b4964(plVar9,1);
  FUN_100651038(plVar13,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_100651460(plVar13,&DAT_10115a170);
  FUN_1004e3120(&local_a8,"--:--");
  FUN_1006513c0(plVar13,&local_a8);
  if (local_a0 != (long *)0x0) {
    operator_delete__(local_a0);
  }
  uVar21 = *(uint *)((long)param_1 + 0x186c);
  if ((uVar21 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x186c) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5900;
    FUN_1000200a0(plVar13);
  }
  uVar26 = FUN_1004e0150("MENU_GENERIC_FULL_RES_TIME_STRING",0);
  FUN_1000153b4(param_1 + 0x698,uVar26);
  ppuVar20 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (iVar23 == 0) {
    ppuVar20 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
  }
  FUN_100651594(plVar15,*ppuVar20,&DAT_10115a168);
  FUN_100651708(*(float *)(param_1 + 0x69e) + -40.0,plVar15,1);
  uVar21 = *(uint *)((long)param_1 + 0x1acc);
  if ((uVar21 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x1acc) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5900;
    FUN_1000200a0(plVar15);
  }
  FUN_100651700(plVar15,3);
  ppuVar20 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar23 == 0) {
    ppuVar20 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  FUN_100651594(plVar16,*ppuVar20,&DAT_10115a168);
  uVar26 = FUN_1004e0150("MENU_LPQ_EXPANDED_EXPLANATION_TOOLTIP_TITLE",0);
  FUN_1006513c0(plVar16,uVar26);
  FUN_100651708(*(float *)(param_1 + 0x69e) + -40.0,plVar16,1);
  uVar21 = *(uint *)((long)param_1 + 0x1bfc);
  if ((uVar21 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x1bfc) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5900;
    FUN_1000200a0(plVar16);
  }
  FUN_100651700(plVar16,3);
  ppuVar20 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar23 == 0) {
    ppuVar20 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  FUN_100651594(plVar17,*ppuVar20,&DAT_10115a168);
  FUN_100651708(*(float *)(param_1 + 0x69e) + -40.0,plVar17,1);
  uVar21 = *(uint *)((long)param_1 + 0x1d2c);
  if ((uVar21 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x1d2c) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5900;
    FUN_1000200a0(plVar17);
  }
  FUN_100651700(plVar17,3);
  ppuVar20 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (iVar23 == 0) {
    ppuVar20 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
  }
  FUN_100651594(plVar18,*ppuVar20,&DAT_10115a168);
  uVar26 = FUN_1004e0150("MENU_LPQ_EXPANDED_EXPLANATION_TOOLTIP",0);
  FUN_1006513c0(plVar18,uVar26);
  FUN_100651708(*(float *)(param_1 + 0x69e) + -40.0,plVar18,1);
  uVar21 = *(uint *)((long)param_1 + 0x1e5c);
  if ((uVar21 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x1e5c) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5900;
    FUN_1000200a0(plVar18);
  }
  FUN_100651700(plVar18,0);
  fVar29 = 1.2;
  if (iVar23 == 0) {
    fVar29 = 1.0;
  }
  if ((*(float *)(param_1 + 0x3ea) != fVar29) || (*(float *)((long)param_1 + 0x1f54) != fVar29)) {
    *(float *)(param_1 + 0x3ea) = fVar29;
    *(float *)((long)param_1 + 0x1f54) = fVar29;
    FUN_1000200a0(plVar19);
  }
  if ((*(float *)(param_1 + 0x3eb) != 0.5) || (*(float *)((long)param_1 + 0x1f5c) != 0.5)) {
    param_1[0x3eb] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar19);
  }
  FUN_100651700(param_1 + 0x4c4,0);
  uVar21 = *(uint *)((long)param_1 + 0x1f8c);
  if ((uVar21 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x1f8c) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5900;
    FUN_1000200a0(plVar19);
  }
  uVar26 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
  FUN_1001816d4(0x42700000,0x42c80000,0x43c80000,plVar19,0,uVar26,&DAT_10115a168,&DAT_101dc1cb8,
                PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  local_80 = uVar22;
  local_a8 = thunk_FUN_100242ad8;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  local_a0 = param_1;
  FUN_10001554c(param_1 + 0x3e2,&local_a8);
  return param_1;
}




void FUN_1002416c4(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  float fVar3;
  
  uVar2 = FUN_100242048(param_5);
  fVar3 = (float)NEON_fminnm(uVar2,0x3f800000);
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  uVar1 = FUN_1006575c4(param_3,"icon_achievement_prg_filled");
  FUN_1000f4b7c(*param_2,param_2[1],fVar3,0,0,param_1,param_2,uVar1,param_3,param_4);
  return;
}




void thunk_FUN_100242b28(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *pvStack_130;
  void *pvStack_128;
  undefined7 uStack_120;
  char cStack_119;
  char cStack_109;
  undefined4 uStack_108;
  undefined8 uStack_104;
  undefined **ppuStack_f8;
  undefined1 auStack_f0 [40];
  long lStack_c8;
  undefined8 uStack_a8;
  void *pvStack_a0;
  void *pvStack_98;
  char cStack_81;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_50;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  
  FUN_100641464(auStack_44,auStack_48);
  thunk_FUN_1001cd434(&ppuStack_f8);
  uVar2 = FUN_1004e0150("MENU_LPQ_MATCHES_REMAINING_TOOLTIP_TITLE",0);
  thunk_FUN_1004e439c(&pvStack_130,uVar2);
  FUN_10003330c(&uStack_120,&DAT_101d91198);
  uStack_108 = 0;
  uStack_104 = 0x41a00000;
  FUN_10003c048(auStack_f0,&pvStack_130);
  if (cStack_109 < '\0') {
    operator_delete((void *)CONCAT17(cStack_119,uStack_120));
  }
  if (pvStack_128 != (void *)0x0) {
    operator_delete__(pvStack_128);
  }
  uVar2 = FUN_1004e0150("MENU_LPQ_MATCHES_REMAINING_TOOLTIP",0);
  thunk_FUN_1004e439c(&pvStack_130,uVar2);
  FUN_10003330c(&uStack_120,&DAT_101d91198);
  uStack_108 = 1;
  uStack_104 = 0x41a00000;
  FUN_10003c048(auStack_f0,&pvStack_130);
  if (cStack_109 < '\0') {
    operator_delete((void *)CONCAT17(cStack_119,uStack_120));
  }
  if (pvStack_128 != (void *)0x0) {
    operator_delete__(pvStack_128);
  }
  lStack_c8 = param_1 + 0xee8;
  uStack_50 = 1;
  uStack_68 = 0x3f19999a;
  iVar1 = FUN_100126c88();
  uStack_64 = 0x44af0000;
  if (iVar1 == 0) {
    uStack_64 = 0x44a8c000;
  }
  uVar2 = FUN_10002f320();
  FUN_10001549c(&pvStack_130,"lowPriorityQueueInfo");
  FUN_100030e74(uVar2,&pvStack_130,&ppuStack_f8);
  if (cStack_119 < '\0') {
    operator_delete(pvStack_130);
  }
  ppuStack_f8 = &PTR_FUN_1014666e0;
  if (cStack_81 < '\0') {
    operator_delete(pvStack_98);
  }
  if (pvStack_a0 != (void *)0x0) {
    operator_delete__(pvStack_a0);
    uStack_a8 = 0;
    pvStack_a0 = (void *)0x0;
  }
  FUN_10003c1ec(auStack_f0,1);
  return;
}




void thunk_FUN_100242ad8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x3500);
  if ((0 < lVar3) && (lVar1 = FUN_1004f1a74(0), lVar1 <= lVar3)) {
    uVar2 = FUN_10015d3ec();
    FUN_100165784(uVar2,1);
    FUN_100109814(*(undefined4 *)(param_1 + 0x3508));
  }
  FUN_100241fc8(param_1);
  return;
}




long * thunk_FUN_100240a58(long *param_1)

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
  undefined **ppuVar20;
  uint uVar21;
  undefined4 uVar22;
  int iVar23;
  int iVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  code *pcStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  
  puVar25 = (undefined8 *)FUN_100269da8();
  *puVar25 = &PTR_thunk_FUN_100241754_101478778;
  FUN_10064e264();
  plVar1 = param_1 + 0x30;
  thunk_FUN_1006543ec(plVar1);
  plVar2 = param_1 + 100;
  thunk_FUN_100652c08();
  plVar3 = param_1 + 0x82;
  thunk_FUN_100652c08();
  plVar4 = param_1 + 0xa0;
  thunk_FUN_100652c08();
  plVar5 = param_1 + 0xbe;
  thunk_FUN_1006543ec(plVar5);
  plVar6 = param_1 + 0xf2;
  FUN_10053077c(plVar6,0);
  plVar7 = param_1 + 0x199;
  thunk_FUN_100652c08();
  plVar8 = param_1 + 0x1b7;
  thunk_FUN_100650e64();
  plVar9 = param_1 + 0x1dd;
  thunk_FUN_100183990(plVar9,0);
  FUN_1006421a8();
  param_1[0x29b] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  param_1[0x2ad] = 0;
  param_1[0x2ac] = 0;
  plVar10 = param_1 + 0x2ae;
  FUN_1006421a8(plVar10);
  param_1[0x2ae] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar11 = param_1 + 0x2bf;
  thunk_FUN_100652c08();
  plVar12 = param_1 + 0x2dd;
  FUN_1006533a4(plVar12);
  plVar13 = param_1 + 0x2fd;
  thunk_FUN_100650e64();
  plVar14 = param_1 + 0x323;
  thunk_FUN_100650e64(plVar14);
  plVar15 = param_1 + 0x349;
  thunk_FUN_100650e64();
  plVar16 = param_1 + 0x36f;
  thunk_FUN_100650e64(plVar16);
  plVar17 = param_1 + 0x395;
  thunk_FUN_100650e64(plVar17);
  plVar18 = param_1 + 0x3bb;
  thunk_FUN_100650e64();
  plVar19 = param_1 + 0x3e1;
  thunk_FUN_100181304(plVar19,0);
  FUN_1004e313c();
  param_1[0x69c] = 0;
  param_1[0x69b] = 0;
  param_1[0x69a] = 0;
  FUN_1004e3004(param_1 + 0x69d);
  param_1[0x6a0] = -1;
  param_1[0x69f] = 0;
  *(undefined4 *)(param_1 + 0x69e) = 0x44910000;
  param_1[0x6a1] = 0;
  *(undefined4 *)(param_1 + 0x6a2) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar25 + 0x19,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100642bd8(plVar1,plVar4,1);
  FUN_100642bd8(plVar1,plVar5,1);
  FUN_100642bd8(plVar5,plVar6,1);
  FUN_1005308f8(plVar6,plVar14,1);
  FUN_1005308f8(plVar6,plVar8,1);
  FUN_1005308f8(plVar6,plVar9,1);
  FUN_1005308f8(plVar6,param_1 + 0x29b,1);
  FUN_1005308f8(plVar6,plVar10,1);
  FUN_100642bd8(plVar10,plVar11,1);
  FUN_100642bd8(plVar10,plVar12,1);
  FUN_100642bd8(plVar10,plVar7,1);
  FUN_100642bd8(plVar10,plVar13,1);
  FUN_1005308f8(plVar6,plVar15,1);
  FUN_1005308f8(plVar6,plVar16,1);
  FUN_1005308f8(plVar6,plVar17,1);
  FUN_1005308f8(plVar6,plVar18,1);
  FUN_100642bd8(plVar1,plVar19,1);
  iVar23 = FUN_100126c88();
  *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) | 0x10;
  FUN_100654488(plVar1,0);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar21 = *(uint *)((long)param_1 + 0x3a4);
  if ((uVar21 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x3a4) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar2);
  }
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_brushstroke_vert_l");
  uVar21 = *(uint *)((long)param_1 + 0x584);
  if ((uVar21 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x584) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar4);
  }
  FUN_100652dd4(plVar4,&DAT_10115a164,2);
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_brushstroke_vert_r");
  uVar21 = *(uint *)((long)param_1 + 0x494);
  if ((uVar21 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x494) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar3);
  }
  FUN_100652dd4(plVar3,&DAT_10115a164,2);
  FUN_100654488(plVar5,1);
  if ((*(float *)(param_1 + 200) != 0.5) || (*(float *)((long)param_1 + 0x644) != 0.0)) {
    param_1[200] = 0x3f000000;
    FUN_1000200a0(plVar5);
  }
  if (*(float *)((long)param_1 + 0x634) != 50.0) {
    *(undefined4 *)((long)param_1 + 0x634) = 0x42480000;
    FUN_1000200a0(plVar5);
  }
  FUN_100530be0(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,
                PTR_s_scrollbar_button_fill_top_101854958,
                PTR_s_scrollbar_button_fill_middle_101854960,
                PTR_s_scrollbar_button_fill_bottom_101854968);
  FUN_100530bb4(0x3e800000,0x3f800000,plVar6);
  if ((*(float *)(param_1 + 0xfc) != 0.5) || (*(float *)((long)param_1 + 0x7e4) != 0.0)) {
    param_1[0xfc] = 0x3f000000;
    FUN_1000200a0(plVar6);
  }
  FUN_100652cac(plVar11,PTR_s_build___MenuPartsCommon_tga_101854970,"circle_deserter_icon_backdrop")
  ;
  FUN_100652dd4(plVar11,&DAT_10115a168,2);
  uVar21 = *(uint *)((long)param_1 + 0x167c);
  if ((uVar21 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x167c) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x3300;
    FUN_1000200a0(plVar11);
  }
  fVar29 = *(float *)(param_1 + 0x2c9);
  if ((fVar29 != 0.5) || (fVar29 = *(float *)((long)param_1 + 0x164c), fVar29 != 0.5)) {
    param_1[0x2c9] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar11);
  }
  FUN_100652cac(plVar12,PTR_s_build___MenuPartsCommon_tga_101854970,"icon_achievement_prg_filled");
  FUN_100652dd4(plVar12,&DAT_10115a170,2);
  uVar21 = *(uint *)((long)param_1 + 0x176c);
  if ((uVar21 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x176c) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5900;
    FUN_1000200a0(plVar12);
  }
  fVar27 = (float)FUN_100652e60(plVar11);
  fVar30 = fVar29 * 0.95;
  fVar28 = (float)FUN_100652e60(plVar12);
  fVar28 = (fVar27 * 0.95) / fVar28;
  fVar30 = fVar30 / fVar29;
  if ((*(float *)(param_1 + 0x2e6) != fVar28) || (*(float *)((long)param_1 + 0x1734) != fVar30)) {
    *(float *)(param_1 + 0x2e6) = fVar28;
    *(float *)((long)param_1 + 0x1734) = fVar30;
    FUN_1000200a0(plVar12);
  }
  if ((*(float *)(param_1 + 0x2e7) != 0.5) || (*(float *)((long)param_1 + 0x173c) != 0.5)) {
    param_1[0x2e7] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar12);
  }
  FUN_100653464(plVar12,FUN_1002416c4,param_1);
  FUN_100652cac(plVar7,PTR_s_build___LowPriorityQueue_tga_1018549e8,"Splash_LowPriorityQueue");
  if ((*(float *)(param_1 + 0x1a2) != 0.8) || (*(float *)((long)param_1 + 0xd14) != 0.8)) {
    param_1[0x1a2] = 0x3f4ccccd3f4ccccd;
    FUN_1000200a0(plVar7);
  }
  if ((*(float *)(param_1 + 0x1a3) != 0.5) || (*(float *)((long)param_1 + 0xd1c) != 0.5)) {
    param_1[0x1a3] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar7);
  }
  FUN_100651594(plVar14,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e290,&DAT_10115a168);
  uVar26 = FUN_1004e0150("MENU_LPQ_NOTIFICATION_TITLE",0);
  FUN_1006513c0(plVar14,uVar26);
  FUN_100651594(plVar8,PTR_s_build___Fonts_Brandon_Regular_60_10184e208,&DAT_10115a168);
  uVar26 = FUN_1004e0150("MENU_LPQ_MATCHES_REMAINING_LABEL",0);
  FUN_1006513c0(plVar8,uVar26);
  FUN_100651460(plVar8,&DAT_10115a170);
  uVar21 = *(uint *)((long)param_1 + 0xe3c);
  if ((uVar21 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0xe3c) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5900;
    FUN_1000200a0(plVar8);
  }
  FUN_100652cdc(param_1 + 0x277,"circle_button_question");
  uVar21 = *(uint *)((long)param_1 + 0xf6c);
  if ((uVar21 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0xf6c) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar9);
  }
  FUN_1001b495c(0xbf800000,plVar9);
  uVar22 = DAT_101d91884;
  uStack_80 = DAT_101d91884;
  pcStack_a8 = thunk_FUN_100242b28;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x1de,&pcStack_a8);
  iVar24 = FUN_100126c88();
  fVar29 = DAT_101854a78 * 0.7;
  if (iVar24 == 0) {
    fVar29 = 0.7;
  }
  if ((*(float *)(param_1 + 0x1e6) != fVar29) || (*(float *)((long)param_1 + 0xf34) != fVar29)) {
    *(float *)(param_1 + 0x1e6) = fVar29;
    *(float *)((long)param_1 + 0xf34) = fVar29;
    FUN_1000200a0(plVar9);
  }
  FUN_1001b4964(plVar9,1);
  FUN_100651038(plVar13,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_100651460(plVar13,&DAT_10115a170);
  FUN_1004e3120(&pcStack_a8,"--:--");
  FUN_1006513c0(plVar13,&pcStack_a8);
  if (plStack_a0 != (long *)0x0) {
    operator_delete__(plStack_a0);
  }
  uVar21 = *(uint *)((long)param_1 + 0x186c);
  if ((uVar21 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x186c) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5900;
    FUN_1000200a0(plVar13);
  }
  uVar26 = FUN_1004e0150("MENU_GENERIC_FULL_RES_TIME_STRING",0);
  FUN_1000153b4(param_1 + 0x698,uVar26);
  ppuVar20 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (iVar23 == 0) {
    ppuVar20 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
  }
  FUN_100651594(plVar15,*ppuVar20,&DAT_10115a168);
  FUN_100651708(*(float *)(param_1 + 0x69e) + -40.0,plVar15,1);
  uVar21 = *(uint *)((long)param_1 + 0x1acc);
  if ((uVar21 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x1acc) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5900;
    FUN_1000200a0(plVar15);
  }
  FUN_100651700(plVar15,3);
  ppuVar20 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar23 == 0) {
    ppuVar20 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  FUN_100651594(plVar16,*ppuVar20,&DAT_10115a168);
  uVar26 = FUN_1004e0150("MENU_LPQ_EXPANDED_EXPLANATION_TOOLTIP_TITLE",0);
  FUN_1006513c0(plVar16,uVar26);
  FUN_100651708(*(float *)(param_1 + 0x69e) + -40.0,plVar16,1);
  uVar21 = *(uint *)((long)param_1 + 0x1bfc);
  if ((uVar21 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x1bfc) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5900;
    FUN_1000200a0(plVar16);
  }
  FUN_100651700(plVar16,3);
  ppuVar20 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar23 == 0) {
    ppuVar20 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  FUN_100651594(plVar17,*ppuVar20,&DAT_10115a168);
  FUN_100651708(*(float *)(param_1 + 0x69e) + -40.0,plVar17,1);
  uVar21 = *(uint *)((long)param_1 + 0x1d2c);
  if ((uVar21 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x1d2c) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5900;
    FUN_1000200a0(plVar17);
  }
  FUN_100651700(plVar17,3);
  ppuVar20 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (iVar23 == 0) {
    ppuVar20 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
  }
  FUN_100651594(plVar18,*ppuVar20,&DAT_10115a168);
  uVar26 = FUN_1004e0150("MENU_LPQ_EXPANDED_EXPLANATION_TOOLTIP",0);
  FUN_1006513c0(plVar18,uVar26);
  FUN_100651708(*(float *)(param_1 + 0x69e) + -40.0,plVar18,1);
  uVar21 = *(uint *)((long)param_1 + 0x1e5c);
  if ((uVar21 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x1e5c) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5900;
    FUN_1000200a0(plVar18);
  }
  FUN_100651700(plVar18,0);
  fVar29 = 1.2;
  if (iVar23 == 0) {
    fVar29 = 1.0;
  }
  if ((*(float *)(param_1 + 0x3ea) != fVar29) || (*(float *)((long)param_1 + 0x1f54) != fVar29)) {
    *(float *)(param_1 + 0x3ea) = fVar29;
    *(float *)((long)param_1 + 0x1f54) = fVar29;
    FUN_1000200a0(plVar19);
  }
  if ((*(float *)(param_1 + 0x3eb) != 0.5) || (*(float *)((long)param_1 + 0x1f5c) != 0.5)) {
    param_1[0x3eb] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar19);
  }
  FUN_100651700(param_1 + 0x4c4,0);
  uVar21 = *(uint *)((long)param_1 + 0x1f8c);
  if ((uVar21 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x1f8c) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5900;
    FUN_1000200a0(plVar19);
  }
  uVar26 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
  FUN_1001816d4(0x42700000,0x42c80000,0x43c80000,plVar19,0,uVar26,&DAT_10115a168,&DAT_101dc1cb8,
                PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  uStack_80 = uVar22;
  pcStack_a8 = thunk_FUN_100242ad8;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x3e2,&pcStack_a8);
  return param_1;
}




void FUN_100241754(undefined8 *param_1)

{
  undefined8 uVar1;
  void *local_58 [2];
  char local_41;
  
  *param_1 = &PTR_thunk_FUN_100241754_101478778;
  FUN_100241a08();
  uVar1 = FUN_10002f320();
  FUN_10001549c(local_58,"lowPriorityQueueInfo");
  FUN_100030e80(uVar1,local_58);
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (*(char *)((long)param_1 + 0x34e7) < '\0') {
    operator_delete((void *)param_1[0x69a]);
  }
  if ((void *)param_1[0x699] != (void *)0x0) {
    operator_delete__((void *)param_1[0x699]);
    param_1[0x699] = 0;
    param_1[0x698] = 0;
  }
  FUN_10003bd40(param_1 + 0x3e1);
  thunk_FUN_100651068(param_1 + 0x3bb);
  thunk_FUN_100651068(param_1 + 0x395);
  thunk_FUN_100651068(param_1 + 0x36f);
  thunk_FUN_100651068(param_1 + 0x349);
  thunk_FUN_100651068(param_1 + 0x323);
  thunk_FUN_100651068(param_1 + 0x2fd);
  param_1[0x2dd] = &PTR_FUN_1014a7108;
  param_1[0x2f4] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2f7);
  FUN_10064e2bc(param_1 + 0x2dd);
  param_1[0x2bf] = &PTR_FUN_1014a7108;
  param_1[0x2d6] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2d9);
  FUN_10064e2bc(param_1 + 0x2bf);
  FUN_10064221c(param_1 + 0x2ae);
  if ((void *)param_1[0x2ad] != (void *)0x0) {
    operator_delete__((void *)param_1[0x2ad]);
    param_1[0x2ad] = 0;
    param_1[0x2ac] = 0;
  }
  FUN_10064221c(param_1 + 0x29b);
  param_1[0x1dd] = &PTR_FUN_10145f300;
  param_1[0x277] = &PTR_FUN_1014a7108;
  param_1[0x28e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x291);
  FUN_10064e2bc(param_1 + 0x277);
  param_1[0x259] = &PTR_FUN_1014a7108;
  param_1[0x270] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x273);
  FUN_10064e2bc(param_1 + 0x259);
  param_1[0x23b] = &PTR_FUN_1014a7108;
  param_1[0x252] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x255);
  FUN_10064e2bc(param_1 + 0x23b);
  FUN_10064221c(param_1 + 0x22a);
  FUN_10003bec8(param_1 + 0x1dd);
  thunk_FUN_100651068(param_1 + 0x1b7);
  param_1[0x199] = &PTR_FUN_1014a7108;
  param_1[0x1b0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1b3);
  FUN_10064e2bc(param_1 + 0x199);
  thunk_FUN_100530784(param_1 + 0xf2);
  FUN_10064e2bc(param_1 + 0xbe);
  param_1[0xa0] = &PTR_FUN_1014a7108;
  param_1[0xb7] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xba);
  FUN_10064e2bc(param_1 + 0xa0);
  param_1[0x82] = &PTR_FUN_1014a7108;
  param_1[0x99] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x9c);
  FUN_10064e2bc(param_1 + 0x82);
  param_1[100] = &PTR_FUN_1014a7108;
  param_1[0x7b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x7e);
  FUN_10064e2bc(param_1 + 100);
  FUN_10064e2bc(param_1 + 0x30);
  thunk_FUN_10064e2bc(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100241a08(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar3 = (ulong)*(uint *)(param_1 + 0x1560);
  if (*(uint *)(param_1 + 0x1560) != 0) {
    uVar5 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x1568) + uVar5 * 8) != 0) {
        iVar1 = FUN_100642d08();
        if (iVar1 != 0) {
          FUN_1006423ec(*(undefined8 *)(*(long *)(param_1 + 0x1568) + uVar5 * 8),1);
        }
        lVar4 = *(long *)(param_1 + 0x1568);
        plVar2 = *(long **)(lVar4 + uVar5 * 8);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))();
          lVar4 = *(long *)(param_1 + 0x1568);
        }
        *(undefined8 *)(lVar4 + uVar5 * 8) = 0;
        uVar3 = (ulong)*(uint *)(param_1 + 0x1560);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  if (*(long *)(param_1 + 0x1568) != 0) {
    *(undefined4 *)(param_1 + 0x1560) = 0;
  }
  return;
}




void thunk_FUN_100241754(void)

{
  FUN_100241754();
  return;
}




void FUN_100241a94(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100241754();
  operator_delete(pvVar1);
  return;
}




void FUN_100241aa8(long *param_1,int param_2,long param_3,int param_4,int param_5,byte *param_6)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  uint uVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  char *pcVar8;
  undefined8 uVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  float fVar13;
  undefined1 auStack_a0 [8];
  void *local_98;
  long *local_90;
  void *local_88;
  undefined1 *local_80;
  void *local_78;
  
  if (((((int)param_1[0x6a1] == param_2) && (param_1[0x6a0] == param_3)) &&
      (*(int *)((long)param_1 + 0x350c) == param_4)) && ((int)param_1[0x6a2] == param_5)) {
    return;
  }
  FUN_100241a08(param_1);
  *(int *)(param_1 + 0x6a1) = param_2;
  param_1[0x6a0] = param_3;
  lVar7 = FUN_1004f1a74(0);
  param_1[0x69f] = param_3 - lVar7 & (param_3 - lVar7 >> 0x3f ^ 0xffffffffffffffffU);
  *(int *)((long)param_1 + 0x350c) = param_4;
  *(int *)(param_1 + 0x6a2) = param_5;
  bVar3 = param_6[0x17];
  uVar10 = (ulong)bVar3;
  sVar1 = *(size_t *)(param_6 + 8);
  if (-1 < (char)bVar3) {
    sVar1 = uVar10;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    pbVar11 = *(byte **)param_6;
    if (-1 < (char)bVar3) {
      pbVar11 = param_6;
    }
    pbVar12 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar12 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar3 < '\0') {
      if ((sVar1 != 0) && (iVar6 = _memcmp(pbVar11,pbVar12,sVar1), iVar6 != 0)) goto LAB_100241bdc;
    }
    else if (sVar1 != 0) {
      pbVar11 = param_6;
      if ((uint)*pbVar12 == ((uint)*(byte **)param_6 & 0xff)) {
        do {
          uVar10 = uVar10 - 1;
          pbVar12 = pbVar12 + 1;
          pbVar11 = pbVar11 + 1;
          if (uVar10 == 0) goto LAB_100241c70;
        } while (*pbVar11 == *pbVar12);
      }
      goto LAB_100241bdc;
    }
LAB_100241c70:
    *(uint *)((long)param_1 + 0x1d2c) = *(uint *)((long)param_1 + 0x1d2c) & 0xfffffffb;
  }
  else {
LAB_100241bdc:
    FUN_1004e3120(&local_80,"([PLAYER_NAME])");
    FUN_1004e3120(&local_90,"[PLAYER_NAME]");
    pbVar11 = *(byte **)param_6;
    if (-1 < (char)param_6[0x17]) {
      pbVar11 = param_6;
    }
    FUN_1004e3120(auStack_a0,pbVar11);
    FUN_1004e3bc4(&local_80,0,&local_90,auStack_a0);
    if (local_98 != (void *)0x0) {
      operator_delete__(local_98);
    }
    if (local_88 != (void *)0x0) {
      operator_delete__(local_88);
    }
    FUN_1006513c0(param_1 + 0x395,&local_80);
    *(uint *)((long)param_1 + 0x1d2c) = *(uint *)((long)param_1 + 0x1d2c) | 4;
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
    }
    param_5 = (int)param_1[0x6a2];
  }
  if (0 < param_5) {
    iVar6 = 0;
    do {
      operator_new(0x268);
      local_90 = (long *)FUN_10024090c();
      FUN_100241e5c(param_1 + 0x2ac,&local_90);
      FUN_100642bd8(param_1 + 0x29b,local_90,1);
      plVar5 = local_90;
      FUN_100652dd4(local_90 + 0x11,&DAT_10115a170,2);
      FUN_100652dd4(plVar5 + 0x2f,&DAT_10115a170,2);
      plVar5 = local_90;
      *(uint *)((long)local_90 + 0x1fc) =
           *(uint *)((long)local_90 + 0x1fc) & 0xfffffff8 |
           *(uint *)((long)local_90 + 0x1fc) & 3 |
           (uint)((int)param_1[0x6a2] - *(int *)((long)param_1 + 0x350c) <= iVar6) << 2;
      fVar13 = (float)(**(code **)(*local_90 + 0x58))(local_90,0,0,1,1);
      fVar13 = ((float)iVar6 + 0.5 + (float)(int)param_1[0x6a2] * -0.5) * (fVar13 + 10.0);
      if ((*(float *)(plVar5 + 8) != fVar13) || (*(float *)((long)plVar5 + 0x44) != 0.0)) {
        *(float *)(plVar5 + 8) = fVar13;
        *(undefined4 *)((long)plVar5 + 0x44) = 0;
        FUN_1000200a0(plVar5);
      }
      local_80 = &DAT_3f0000003f000000;
      (**(code **)(*plVar5 + 0x28))(plVar5,&local_80);
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)param_1[0x6a2]);
  }
  uVar4 = (int)param_1[0x6a1] - 2;
  if (uVar4 < 8) {
    pcVar8 = (&PTR_s_MENU_LPQ_NOTIFICATION_DESCRIPTIO_1014788d0)[(int)uVar4];
  }
  else {
    pcVar8 = "MENU_LPQ_NOTIFICATION_DESCRIPTION_1";
  }
  uVar9 = FUN_1004e0150(pcVar8,0);
  FUN_1006513c0(param_1 + 0x349,uVar9);
  (**(code **)(*param_1 + 0x150))(param_1);
  FUN_1004e3170(&local_80,param_6);
  FUN_10015d3ec();
  uVar9 = FUN_100164f34();
  uVar9 = FUN_1004e3654(uVar9,&local_80);
  FUN_100109774((int)param_1[0x6a1],uVar9);
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
  }
  return;
}




void FUN_100241e5c(uint *param_1,undefined8 *param_2)

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
    FUN_100242df0(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_100241edc(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  void *local_38;
  
  lVar4 = *(long *)(param_1 + 0x3500);
  if (0 < lVar4) {
    lVar1 = FUN_1004f1a74(0);
    if (lVar4 < lVar1) {
      *(undefined8 *)(param_1 + 0x3500) = 0xffffffffffffffff;
      FUN_100241fc8(param_1);
      FUN_100109890(*(undefined4 *)(param_1 + 0x3508));
      return;
    }
    lVar4 = *(long *)(param_1 + 0x3500);
  }
  lVar1 = FUN_1004f1a74(0);
  if (lVar1 < lVar4) {
    lVar1 = *(long *)(param_1 + 0x3500);
    lVar4 = FUN_1004f1a74(0);
    uVar2 = lVar1 - lVar4;
    uVar3 = uVar2 & 0xffffffff;
    if ((int)uVar2 < 1) {
      uVar3 = 0;
    }
    FUN_1000f28c4(auStack_40,param_1 + 0x34c0,uVar3,1);
  }
  else {
    FUN_1004e3120(auStack_40,"00:00");
  }
  FUN_1006513c0(param_1 + 0x17e8,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void FUN_100241fc8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  FUN_100642324(param_1 + 0x180);
  uVar1 = FUN_100644a94("UI::EVENT_MENU_CLOSE_PLATFORM_NOTIFICATION");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(param_1,auStack_40,1);
  FUN_100241a08(param_1);
  *(undefined4 *)(param_1 + 0x3508) = 0;
  *(undefined8 *)(param_1 + 0x3500) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x34f8) = 0;
  *(undefined4 *)(param_1 + 0x3510) = 0;
  *(undefined4 *)(param_1 + 0x350c) = 0;
  return;
}




float FUN_100242048(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  double local_38;
  
  fVar3 = 1.0;
  if ((0 < *(long *)(param_1 + 0x34f8)) &&
     (lVar2 = *(long *)(param_1 + 0x3500), lVar1 = FUN_1004f1a74(0), lVar1 < lVar2)) {
    local_38 = 0.0;
    FUN_1004f1a74(&local_38);
    fVar3 = (float)NEON_fminnm((float)((local_38 - (double)*(long *)(param_1 + 0x3500)) /
                                      (double)*(long *)(param_1 + 0x34f8)) + 1.0,0x3f800000);
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
  }
  return fVar3;
}




void FUN_1002420dc(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_70;
  float local_6c;
  undefined1 *local_68;
  
  FUN_100641464(&local_6c,&local_70);
  FUN_10064e47c(local_6c,local_70,param_1 + 200);
  lVar1 = param_1 + 0x180;
  if ((*(float *)(param_1 + 0x1c0) != local_6c * 0.5) || (*(float *)(param_1 + 0x1c4) != 0.0)) {
    *(float *)(param_1 + 0x1c0) = local_6c * 0.5;
    *(undefined4 *)(param_1 + 0x1c4) = 0;
    FUN_1000200a0(lVar1);
  }
  local_68 = (undefined1 *)0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x180) + 0x28))(lVar1,&local_68);
  FUN_10064e47c(*(float *)(param_1 + 0x34f0) + *(float *)(param_1 + 0x34f0),local_70,lVar1);
  fVar8 = *(float *)(param_1 + 0x34f0);
  lVar1 = param_1 + 800;
  FUN_10064e47c(fVar8 * 1.2,local_70,lVar1);
  bVar4 = false;
  if ((*(float *)(param_1 + 0x364) == 0.0) && (bVar4 = false, !NAN(*(float *)(param_1 + 0x360)))) {
    bVar4 = *(float *)(param_1 + 0x360) == 0.0;
  }
  if (!bVar4) {
    *(undefined8 *)(param_1 + 0x360) = 0;
    FUN_1000200a0(lVar1);
  }
  local_68 = (undefined1 *)0x3f000000;
  (**(code **)(*(long *)(param_1 + 800) + 0x28))(lVar1,&local_68);
  if ((*(float *)(param_1 + 0x540) != fVar8 * -0.6) || (*(float *)(param_1 + 0x544) != 0.0)) {
    *(float *)(param_1 + 0x540) = fVar8 * -0.6;
    *(undefined4 *)(param_1 + 0x544) = 0;
    FUN_1000200a0(param_1 + 0x500);
  }
  local_68 = (undefined1 *)0x3f800000;
  (**(code **)(*(long *)(param_1 + 0x500) + 0x28))(param_1 + 0x500,&local_68);
  fVar6 = *(float *)(param_1 + 0x450);
  if ((fVar6 != fVar8 * 0.6) || (fVar6 = *(float *)(param_1 + 0x454), fVar6 != 0.0)) {
    *(float *)(param_1 + 0x450) = fVar8 * 0.6;
    *(undefined4 *)(param_1 + 0x454) = 0;
    FUN_1000200a0(param_1 + 0x410);
  }
  local_68 = (undefined1 *)0x0;
  (**(code **)(*(long *)(param_1 + 0x410) + 0x28))(param_1 + 0x410,&local_68);
  FUN_10065317c(param_1 + 0x15f8);
  fVar8 = fVar6 * 0.5 + 2.0;
  if ((*(float *)(param_1 + 0x1828) != 0.0) || (*(float *)(param_1 + 0x182c) != fVar8)) {
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(float *)(param_1 + 0x182c) = fVar8;
    FUN_1000200a0(param_1 + 0x17e8);
  }
  local_68 = (undefined1 *)0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x17e8) + 0x28))(param_1 + 0x17e8,&local_68);
  lVar2 = param_1 + 0x1918;
  FUN_10065179c(*(float *)(param_1 + 0x34f0) + -12.0,0,0x3f800000,lVar2);
  fVar8 = *(float *)(param_1 + 0x195c);
  bVar4 = false;
  if ((fVar8 == 0.0) && (bVar4 = false, !NAN(*(float *)(param_1 + 0x1958)))) {
    bVar4 = *(float *)(param_1 + 0x1958) == 0.0;
  }
  if (!bVar4) {
    *(undefined8 *)(param_1 + 0x1958) = 0;
    FUN_1000200a0(lVar2);
  }
  local_68 = (undefined1 *)0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x1918) + 0x28))(lVar2,&local_68);
  FUN_10064259c(lVar2);
  lVar2 = param_1 + 0xdb8;
  if ((*(float *)(param_1 + 0xdf8) != 0.0) || (*(float *)(param_1 + 0xdfc) != fVar8 + 10.0)) {
    *(undefined4 *)(param_1 + 0xdf8) = 0;
    *(float *)(param_1 + 0xdfc) = fVar8 + 10.0;
    FUN_1000200a0(lVar2);
  }
  local_68 = (undefined1 *)0x3f000000;
  (**(code **)(*(long *)(param_1 + 0xdb8) + 0x28))(lVar2,&local_68);
  fVar6 = (float)FUN_10065317c(lVar1);
  lVar1 = param_1 + 0xee8;
  fVar5 = (float)FUN_10064259c(lVar1);
  FUN_10065179c((fVar6 + -48.0) - (fVar5 + fVar5),0,0x3f800000,lVar2);
  fVar6 = (float)FUN_10064259c(lVar2);
  fVar5 = (float)FUN_10064259c(lVar1);
  fVar7 = 24.0;
  fVar9 = (fVar5 + fVar6) * 0.5 + 24.0;
  fVar6 = *(float *)(param_1 + 0xdfc);
  FUN_10064259c(lVar2);
  fVar6 = fVar6 + fVar7 * 0.5;
  fVar5 = *(float *)(param_1 + 0xf28);
  if ((fVar5 != fVar9) || (fVar5 = *(float *)(param_1 + 0xf2c), fVar5 != fVar6)) {
    *(float *)(param_1 + 0xf28) = fVar9;
    *(float *)(param_1 + 0xf2c) = fVar6;
    FUN_1000200a0(lVar1);
  }
  local_68 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0xee8) + 0x28))(lVar1,&local_68);
  FUN_100651184(lVar2);
  fVar7 = fVar8 + 16.0 + fVar5;
  lVar1 = param_1 + 0x14d8;
  FUN_1006425d0(lVar1,0,0,1,1);
  fVar8 = fVar7 + fVar5 * 0.5;
  fVar6 = *(float *)(param_1 + 0x1518);
  if ((fVar6 != 0.0) || (fVar6 = *(float *)(param_1 + 0x151c), fVar6 != fVar8)) {
    *(undefined4 *)(param_1 + 0x1518) = 0;
    *(float *)(param_1 + 0x151c) = fVar8;
    FUN_1000200a0(lVar1);
  }
  local_68 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x14d8) + 0x28))(lVar1,&local_68);
  FUN_1006425d0(lVar1,0,0,1,1);
  fVar5 = fVar7 + 12.0 + fVar6;
  lVar1 = param_1 + 0x1570;
  FUN_1006425d0(lVar1,0,0,1,1);
  fVar8 = fVar5 + fVar6 * 0.5;
  fVar6 = *(float *)(param_1 + 0x15b0);
  if ((fVar6 != 0.0) || (fVar6 = *(float *)(param_1 + 0x15b4), fVar6 != fVar8)) {
    *(undefined4 *)(param_1 + 0x15b0) = 0;
    *(float *)(param_1 + 0x15b4) = fVar8;
    FUN_1000200a0(lVar1);
  }
  local_68 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x1570) + 0x28))(lVar1,&local_68);
  FUN_1006425d0(lVar1,0,0,1,1);
  fVar8 = fVar5 + 30.0 + fVar6;
  lVar1 = param_1 + 0x1a48;
  if ((*(float *)(param_1 + 0x1a88) != 0.0) || (*(float *)(param_1 + 0x1a8c) != fVar8)) {
    *(undefined4 *)(param_1 + 0x1a88) = 0;
    *(float *)(param_1 + 0x1a8c) = fVar8;
    FUN_1000200a0(lVar1);
  }
  local_68 = (undefined1 *)0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x1a48) + 0x28))(lVar1,&local_68);
  FUN_1006511d0(lVar1);
  fVar8 = fVar8 + 16.0 + fVar6;
  lVar1 = param_1 + 0x1b78;
  if ((*(float *)(param_1 + 0x1bb8) != 0.0) || (*(float *)(param_1 + 0x1bbc) != fVar8)) {
    *(undefined4 *)(param_1 + 0x1bb8) = 0;
    *(float *)(param_1 + 0x1bbc) = fVar8;
    FUN_1000200a0(lVar1);
  }
  local_68 = (undefined1 *)0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x1b78) + 0x28))(lVar1,&local_68);
  FUN_1006511d0(lVar1);
  fVar8 = fVar8 + 24.0 + fVar6;
  if ((*(byte *)(param_1 + 0x1d2c) >> 2 & 1) != 0) {
    plVar3 = (long *)(param_1 + 0x1ca8);
    if ((*(float *)(param_1 + 0x1ce8) != 0.0) || (*(float *)(param_1 + 0x1cec) != fVar8)) {
      *(undefined4 *)(param_1 + 0x1ce8) = 0;
      *(float *)(param_1 + 0x1cec) = fVar8;
      FUN_1000200a0(plVar3);
    }
    local_68 = (undefined1 *)0x3f000000;
    (**(code **)(*plVar3 + 0x28))(plVar3,&local_68);
    FUN_1006511d0(plVar3);
    fVar8 = fVar8 + 24.0 + fVar6;
  }
  lVar1 = param_1 + 0x1dd8;
  if ((*(float *)(param_1 + 0x1e18) != 0.0) || (*(float *)(param_1 + 0x1e1c) != fVar8)) {
    *(undefined4 *)(param_1 + 0x1e18) = 0;
    *(float *)(param_1 + 0x1e1c) = fVar8;
    FUN_1000200a0(lVar1);
  }
  local_68 = (undefined1 *)0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x1dd8) + 0x28))(lVar1,&local_68);
  FUN_1006511d0(lVar1);
  fVar8 = local_70;
  plVar3 = (long *)(param_1 + 0x1f08);
  FUN_10064e3cc(plVar3);
  FUN_10064e47c(local_6c,(fVar8 + -120.0) - fVar6,param_1 + 0x5f0);
  lVar1 = param_1 + 0x790;
  FUN_100530a48(lVar1,1);
  fVar8 = (float)FUN_100530a94(lVar1);
  fVar6 = 0.0;
  FUN_100530b0c(-(fVar8 * 0.5) - -100.0,lVar1);
  FUN_100530a94(lVar1);
  fVar8 = fVar6;
  FUN_10064e3cc(param_1 + 0x5f0);
  bVar4 = fVar8 < fVar6;
  FUN_100530c04(lVar1,bVar4);
  FUN_100530adc(lVar1,0,bVar4);
  FUN_10064e3cc(plVar3);
  fVar8 = (local_70 - fVar8 * 0.5) + -50.0;
  if ((*(float *)(param_1 + 0x1f48) != 0.0) || (*(float *)(param_1 + 0x1f4c) != fVar8)) {
    *(undefined4 *)(param_1 + 0x1f48) = 0;
    *(float *)(param_1 + 0x1f4c) = fVar8;
    FUN_1000200a0(plVar3);
  }
  local_68 = &DAT_3f0000003f000000;
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_68);
  return;
}




void thunk_FUN_100242824(long param_1,int param_2)

{
  long lVar1;
  size_t sVar2;
  size_t sVar3;
  long *plVar4;
  byte bVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  ushort uVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  long *plVar13;
  ushort *puVar14;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  char cStack_39;
  undefined4 uStack_38;
  undefined1 auStack_34 [4];
  
  FUN_100641464(auStack_34,&uStack_38);
  uVar8 = FUN_10018eed4();
  FUN_10063f0e8(0x3f000000);
  lVar1 = param_1 + 0x180;
  if (param_2 == 0) {
    uStack_50 = 0;
    uStack_4c = uStack_38;
    FUN_100640428(uVar8,lVar1,&uStack_50);
    FUN_10063f130(uVar8,FUN_10001f160);
    FUN_100642324(lVar1);
    FUN_100642b14(lVar1,uVar8);
    uVar8 = FUN_10002f320();
    FUN_10001549c(&uStack_50,"lowPriorityQueueInfo");
    FUN_100030e80(uVar8,&uStack_50);
    if (-1 < cStack_39) {
      return;
    }
    operator_delete((void *)CONCAT44(uStack_4c,uStack_50));
    return;
  }
  uStack_50 = *(undefined4 *)(param_1 + 0x34f0);
  uStack_4c = uStack_38;
  FUN_100640428(uVar8,lVar1,&uStack_50);
  FUN_10063f130(uVar8,FUN_10006bf9c);
  FUN_10064e47c(0,uStack_38,lVar1);
  FUN_100642324(lVar1);
  FUN_100642b14(lVar1,uVar8);
  plVar13 = (long *)(param_1 + 0x34d0);
  bVar5 = *(byte *)(param_1 + 0x34e7);
  uVar10 = (ulong)bVar5;
  sVar2 = *(size_t *)(param_1 + 0x34d8);
  if (-1 < (char)bVar5) {
    sVar2 = uVar10;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    plVar4 = (long *)*plVar13;
    if (-1 < (char)bVar5) {
      plVar4 = plVar13;
    }
    pbVar12 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar12 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar5 < '\0') {
      if (sVar2 == 0) {
        return;
      }
      iVar7 = _memcmp(plVar4,pbVar12,sVar2);
      if (iVar7 == 0) {
        return;
      }
    }
    else {
      if (sVar2 == 0) {
        return;
      }
      if ((uint)*pbVar12 == ((uint)(long *)*plVar13 & 0xff)) {
        pbVar11 = (byte *)(param_1 + 0x34d1);
        do {
          uVar10 = uVar10 - 1;
          pbVar12 = pbVar12 + 1;
          if (uVar10 == 0) {
            return;
          }
          bVar5 = *pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (bVar5 == *pbVar12);
      }
    }
  }
  uVar8 = FUN_10064081c(0);
  FUN_100642b14(lVar1,uVar8);
  lVar6 = DAT_101dbd2f8;
  uVar9 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar9 == 0xffff) {
    puVar14 = (ushort *)0x0;
  }
  else {
    puVar14 = (ushort *)(DAT_101dbd2f8 + 0x10 + (ulong)uVar9 * 0x40);
    if (uVar9 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar9 = 0xffff;
    }
    else {
      uVar9 = *puVar14;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar9;
    *(int *)(lVar6 + 0x20014) = *(int *)(lVar6 + 0x20014) + 1;
    FUN_10063ee9c(puVar14);
    *(undefined ***)puVar14 = &PTR_FUN_101469878;
    puVar14[0xc] = 0;
    puVar14[0xd] = 0;
    puVar14[0xe] = 0;
    puVar14[0xf] = 0;
    puVar14[0x10] = 0;
    puVar14[0x11] = 0;
    puVar14[0x12] = 0;
    puVar14[0x13] = 0;
    puVar14[0x14] = 0;
    puVar14[8] = 0;
    puVar14[9] = 0;
    puVar14[10] = 0;
    puVar14[0xb] = 0;
    *(int *)(lVar6 + 0x20020) = *(int *)(lVar6 + 0x20020) + 1;
  }
  if (*(char *)(param_1 + 0x34e7) < '\0') {
    plVar13 = (long *)*plVar13;
  }
  FUN_10001549c(&uStack_50,plVar13);
  FUN_1001e1e48(puVar14,&uStack_50,0,0);
  if (cStack_39 < '\0') {
    operator_delete((void *)CONCAT44(uStack_4c,uStack_50));
  }
  FUN_100642b14(lVar1,puVar14);
  return;
}




void FUN_100242824(long param_1,int param_2)

{
  long lVar1;
  size_t sVar2;
  size_t sVar3;
  long *plVar4;
  byte bVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  ushort uVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  long *plVar13;
  ushort *puVar14;
  undefined4 local_50;
  undefined4 uStack_4c;
  char local_39;
  undefined4 local_38;
  undefined1 auStack_34 [4];
  
  FUN_100641464(auStack_34,&local_38);
  uVar8 = FUN_10018eed4();
  FUN_10063f0e8(0x3f000000);
  lVar1 = param_1 + 0x180;
  if (param_2 == 0) {
    local_50 = 0;
    uStack_4c = local_38;
    FUN_100640428(uVar8,lVar1,&local_50);
    FUN_10063f130(uVar8,FUN_10001f160);
    FUN_100642324(lVar1);
    FUN_100642b14(lVar1,uVar8);
    uVar8 = FUN_10002f320();
    FUN_10001549c(&local_50,"lowPriorityQueueInfo");
    FUN_100030e80(uVar8,&local_50);
    if (-1 < local_39) {
      return;
    }
    operator_delete((void *)CONCAT44(uStack_4c,local_50));
    return;
  }
  local_50 = *(undefined4 *)(param_1 + 0x34f0);
  uStack_4c = local_38;
  FUN_100640428(uVar8,lVar1,&local_50);
  FUN_10063f130(uVar8,FUN_10006bf9c);
  FUN_10064e47c(0,local_38,lVar1);
  FUN_100642324(lVar1);
  FUN_100642b14(lVar1,uVar8);
  plVar13 = (long *)(param_1 + 0x34d0);
  bVar5 = *(byte *)(param_1 + 0x34e7);
  uVar10 = (ulong)bVar5;
  sVar2 = *(size_t *)(param_1 + 0x34d8);
  if (-1 < (char)bVar5) {
    sVar2 = uVar10;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    plVar4 = (long *)*plVar13;
    if (-1 < (char)bVar5) {
      plVar4 = plVar13;
    }
    pbVar12 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar12 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar5 < '\0') {
      if (sVar2 == 0) {
        return;
      }
      iVar7 = _memcmp(plVar4,pbVar12,sVar2);
      if (iVar7 == 0) {
        return;
      }
    }
    else {
      if (sVar2 == 0) {
        return;
      }
      if ((uint)*pbVar12 == ((uint)(long *)*plVar13 & 0xff)) {
        pbVar11 = (byte *)(param_1 + 0x34d1);
        do {
          uVar10 = uVar10 - 1;
          pbVar12 = pbVar12 + 1;
          if (uVar10 == 0) {
            return;
          }
          bVar5 = *pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (bVar5 == *pbVar12);
      }
    }
  }
  uVar8 = FUN_10064081c(0);
  FUN_100642b14(lVar1,uVar8);
  lVar6 = DAT_101dbd2f8;
  uVar9 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar9 == 0xffff) {
    puVar14 = (ushort *)0x0;
  }
  else {
    puVar14 = (ushort *)(DAT_101dbd2f8 + 0x10 + (ulong)uVar9 * 0x40);
    if (uVar9 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar9 = 0xffff;
    }
    else {
      uVar9 = *puVar14;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar9;
    *(int *)(lVar6 + 0x20014) = *(int *)(lVar6 + 0x20014) + 1;
    FUN_10063ee9c(puVar14);
    *(undefined ***)puVar14 = &PTR_FUN_101469878;
    puVar14[0xc] = 0;
    puVar14[0xd] = 0;
    puVar14[0xe] = 0;
    puVar14[0xf] = 0;
    puVar14[0x10] = 0;
    puVar14[0x11] = 0;
    puVar14[0x12] = 0;
    puVar14[0x13] = 0;
    puVar14[0x14] = 0;
    puVar14[8] = 0;
    puVar14[9] = 0;
    puVar14[10] = 0;
    puVar14[0xb] = 0;
    *(int *)(lVar6 + 0x20020) = *(int *)(lVar6 + 0x20020) + 1;
  }
  if (*(char *)(param_1 + 0x34e7) < '\0') {
    plVar13 = (long *)*plVar13;
  }
  FUN_10001549c(&local_50,plVar13);
  FUN_1001e1e48(puVar14,&local_50,0,0);
  if (local_39 < '\0') {
    operator_delete((void *)CONCAT44(uStack_4c,local_50));
  }
  FUN_100642b14(lVar1,puVar14);
  return;
}




void FUN_100242ad8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x3500);
  if ((0 < lVar3) && (lVar1 = FUN_1004f1a74(0), lVar1 <= lVar3)) {
    uVar2 = FUN_10015d3ec();
    FUN_100165784(uVar2,1);
    FUN_100109814(*(undefined4 *)(param_1 + 0x3508));
  }
  FUN_100241fc8(param_1);
  return;
}




void FUN_100242b28(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *local_130;
  void *local_128;
  undefined7 local_120;
  char cStack_119;
  char local_109;
  undefined4 local_108;
  undefined8 local_104;
  undefined **local_f8;
  undefined1 auStack_f0 [40];
  long local_c8;
  undefined8 local_a8;
  void *local_a0;
  void *local_98;
  char local_81;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_50;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  
  FUN_100641464(auStack_44,auStack_48);
  thunk_FUN_1001cd434(&local_f8);
  uVar2 = FUN_1004e0150("MENU_LPQ_MATCHES_REMAINING_TOOLTIP_TITLE",0);
  thunk_FUN_1004e439c(&local_130,uVar2);
  FUN_10003330c(&local_120,&DAT_101d91198);
  local_108 = 0;
  local_104 = 0x41a00000;
  FUN_10003c048(auStack_f0,&local_130);
  if (local_109 < '\0') {
    operator_delete((void *)CONCAT17(cStack_119,local_120));
  }
  if (local_128 != (void *)0x0) {
    operator_delete__(local_128);
  }
  uVar2 = FUN_1004e0150("MENU_LPQ_MATCHES_REMAINING_TOOLTIP",0);
  thunk_FUN_1004e439c(&local_130,uVar2);
  FUN_10003330c(&local_120,&DAT_101d91198);
  local_108 = 1;
  local_104 = 0x41a00000;
  FUN_10003c048(auStack_f0,&local_130);
  if (local_109 < '\0') {
    operator_delete((void *)CONCAT17(cStack_119,local_120));
  }
  if (local_128 != (void *)0x0) {
    operator_delete__(local_128);
  }
  local_c8 = param_1 + 0xee8;
  local_50 = 1;
  local_68 = 0x3f19999a;
  iVar1 = FUN_100126c88();
  local_64 = 0x44af0000;
  if (iVar1 == 0) {
    local_64 = 0x44a8c000;
  }
  uVar2 = FUN_10002f320();
  FUN_10001549c(&local_130,"lowPriorityQueueInfo");
  FUN_100030e74(uVar2,&local_130,&local_f8);
  if (cStack_119 < '\0') {
    operator_delete(local_130);
  }
  local_f8 = &PTR_FUN_1014666e0;
  if (local_81 < '\0') {
    operator_delete(local_98);
  }
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a8 = 0;
    local_a0 = (void *)0x0;
  }
  FUN_10003c1ec(auStack_f0,1);
  return;
}




void FUN_100242cf4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101478678;
  param_1[0x2f] = &PTR_FUN_1014a7108;
  param_1[0x46] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x49);
  FUN_10064e2bc(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_1014a7108;
  param_1[0x28] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2b);
  FUN_10064e2bc(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void FUN_100242d70(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101478678;
  param_1[0x2f] = &PTR_FUN_1014a7108;
  param_1[0x46] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x49);
  FUN_10064e2bc(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_1014a7108;
  param_1[0x28] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2b);
  FUN_10064e2bc(param_1 + 0x11);
  pvVar1 = (void *)FUN_10064221c(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100242df0(uint *param_1,uint param_2)

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




long * FUN_100242e6c(long *param_1)

{
  long *plVar1;
  uint *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar2 = (uint *)((long)param_1 + 0x966c);
  lVar10 = FUN_1002667c0();
  FUN_10014f4a0(lVar10 + 0x2c60);
  param_1[0x590] = 0;
  *param_1 = (long)&PTR_thunk_FUN_100243220_101478920;
  param_1[0x58c] = (long)&PTR_FUN_101478b68;
  param_1[0x58f] = (long)&PTR_FUN_101478f00;
  param_1[0x591] = (long)&PTR_FUN_101478f48;
  param_1[0x592] = (long)&PTR_FUN_101478fa0;
  plVar3 = param_1 + 0x593;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x5b1;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0x5cf;
  FUN_1006505b8(plVar5);
  thunk_FUN_100652c08();
  thunk_FUN_100247d2c(param_1 + 0x608);
  thunk_FUN_100246d9c(param_1 + 0x82f,param_1);
  plVar6 = param_1 + 0x9eb;
  thunk_FUN_1001a6bc4(plVar6);
  plVar7 = param_1 + 0x12bd;
  thunk_FUN_100652c08(plVar7);
  plVar8 = param_1 + 0x12db;
  thunk_FUN_1001c0c34(plVar8,0);
  *(undefined8 *)((long)param_1 + 0x9c91) = 0;
  *(undefined8 *)((long)param_1 + 0x9c89) = 0;
  param_1[0x1391] = 0;
  param_1[0x1390] = 0;
  param_1[0x138f] = 0;
  param_1[0x138e] = 0;
  param_1[0x138d] = 0;
  param_1[0x138c] = 0;
  param_1[0x138b] = 0;
  param_1[0x138a] = 0;
  FUN_10001549c(&local_90,"MARKET");
  std::string::operator=((string *)(param_1 + 0x588),(string *)&local_90);
  if (local_80._7_1_ < '\0') {
    operator_delete(local_90);
  }
  plVar1 = param_1 + 0x17;
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100642bd8(plVar1,plVar4,1);
  FUN_100642bd8(plVar1,plVar5,1);
  FUN_100642bd8(param_1 + 0x62,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  FUN_100652cac(plVar3,PTR_s_build___MenuBackground_HeroHub_p_101854990,"full_splash_64");
  FUN_100652dd4(plVar3,&DAT_101158514,2);
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"corner_shadow");
  local_90._0_4_ = 0xffd27a91;
  FUN_100652dd4(plVar4,&local_90,2);
  local_90 = (code *)CONCAT44(local_90._4_4_,0xff1a0a12);
  FUN_100650608(plVar5,&local_90);
  *(uint *)((long)param_1 + 0x41fc) = *(uint *)((long)param_1 + 0x41fc) & 0xfffffffb;
  FUN_100642bd8(plVar7,plVar8,1);
  *(uint *)((long)param_1 + 0x5094) = *(uint *)((long)param_1 + 0x5094) | 4;
  FUN_1001a7188(plVar6);
  FUN_1001a7004(plVar6,0);
  FUN_1006423ec(param_1 + 0x566,1);
  local_68 = FUN_100644a94("UI::EVENT_IAP_PROCESSING");
  local_90 = FUN_100243200;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 1,&local_90);
  FUN_100652cac(plVar7,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar11 = *puVar2;
  if ((uVar11 & 0x7f80) != 0x3f80) {
    *puVar2 = uVar11 & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar7);
    uVar11 = *puVar2;
  }
  *puVar2 = uVar11 & 0xfffffffb | 0x10;
  if ((*(float *)(param_1 + 0x12e4) != 3.0) || (*(float *)((long)param_1 + 0x9724) != 3.0)) {
    lVar10 = NEON_fmov(0x40400000,4);
    param_1[0x12e4] = lVar10;
    FUN_1000200a0(plVar8);
  }
  iVar9 = FUN_100126d70();
  if (iVar9 == 0xe) {
    FUN_100652cac(param_1 + 0x5ea,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_18_plus");
    (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x5ea,1);
  }
  FUN_100128400(param_1 + 0x58f);
  return param_1;
}




void FUN_100243200(long param_1)

{
  *(uint *)(param_1 + 0x966c) = *(uint *)(param_1 + 0x966c) | 4;
  FUN_1001c0e10(param_1 + 0x96d8);
  return;
}




long * thunk_FUN_100242e6c(long *param_1)

{
  long *plVar1;
  uint *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  code *pcStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar2 = (uint *)((long)param_1 + 0x966c);
  lVar10 = FUN_1002667c0();
  FUN_10014f4a0(lVar10 + 0x2c60);
  param_1[0x590] = 0;
  *param_1 = (long)&PTR_thunk_FUN_100243220_101478920;
  param_1[0x58c] = (long)&PTR_FUN_101478b68;
  param_1[0x58f] = (long)&PTR_FUN_101478f00;
  param_1[0x591] = (long)&PTR_FUN_101478f48;
  param_1[0x592] = (long)&PTR_FUN_101478fa0;
  plVar3 = param_1 + 0x593;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x5b1;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0x5cf;
  FUN_1006505b8(plVar5);
  thunk_FUN_100652c08();
  thunk_FUN_100247d2c(param_1 + 0x608);
  thunk_FUN_100246d9c(param_1 + 0x82f,param_1);
  plVar6 = param_1 + 0x9eb;
  thunk_FUN_1001a6bc4(plVar6);
  plVar7 = param_1 + 0x12bd;
  thunk_FUN_100652c08(plVar7);
  plVar8 = param_1 + 0x12db;
  thunk_FUN_1001c0c34(plVar8,0);
  *(undefined8 *)((long)param_1 + 0x9c91) = 0;
  *(undefined8 *)((long)param_1 + 0x9c89) = 0;
  param_1[0x1391] = 0;
  param_1[0x1390] = 0;
  param_1[0x138f] = 0;
  param_1[0x138e] = 0;
  param_1[0x138d] = 0;
  param_1[0x138c] = 0;
  param_1[0x138b] = 0;
  param_1[0x138a] = 0;
  FUN_10001549c(&pcStack_90,"MARKET");
  std::string::operator=((string *)(param_1 + 0x588),(string *)&pcStack_90);
  if (uStack_80._7_1_ < '\0') {
    operator_delete(pcStack_90);
  }
  plVar1 = param_1 + 0x17;
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100642bd8(plVar1,plVar4,1);
  FUN_100642bd8(plVar1,plVar5,1);
  FUN_100642bd8(param_1 + 0x62,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  FUN_100652cac(plVar3,PTR_s_build___MenuBackground_HeroHub_p_101854990,"full_splash_64");
  FUN_100652dd4(plVar3,&DAT_101158514,2);
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"corner_shadow");
  pcStack_90._0_4_ = 0xffd27a91;
  FUN_100652dd4(plVar4,&pcStack_90,2);
  pcStack_90 = (code *)CONCAT44(pcStack_90._4_4_,0xff1a0a12);
  FUN_100650608(plVar5,&pcStack_90);
  *(uint *)((long)param_1 + 0x41fc) = *(uint *)((long)param_1 + 0x41fc) & 0xfffffffb;
  FUN_100642bd8(plVar7,plVar8,1);
  *(uint *)((long)param_1 + 0x5094) = *(uint *)((long)param_1 + 0x5094) | 4;
  FUN_1001a7188(plVar6);
  FUN_1001a7004(plVar6,0);
  FUN_1006423ec(param_1 + 0x566,1);
  uStack_68 = FUN_100644a94("UI::EVENT_IAP_PROCESSING");
  pcStack_90 = FUN_100243200;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_90);
  FUN_100652cac(plVar7,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar11 = *puVar2;
  if ((uVar11 & 0x7f80) != 0x3f80) {
    *puVar2 = uVar11 & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar7);
    uVar11 = *puVar2;
  }
  *puVar2 = uVar11 & 0xfffffffb | 0x10;
  if ((*(float *)(param_1 + 0x12e4) != 3.0) || (*(float *)((long)param_1 + 0x9724) != 3.0)) {
    lVar10 = NEON_fmov(0x40400000,4);
    param_1[0x12e4] = lVar10;
    FUN_1000200a0(plVar8);
  }
  iVar9 = FUN_100126d70();
  if (iVar9 == 0xe) {
    FUN_100652cac(param_1 + 0x5ea,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_18_plus");
    (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x5ea,1);
  }
  FUN_100128400(param_1 + 0x58f);
  return param_1;
}




void FUN_100243220(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_thunk_FUN_100243220_101478920;
  param_1[0x58c] = &PTR_FUN_101478b68;
  param_1[0x58f] = &PTR_FUN_101478f00;
  param_1[0x591] = &PTR_FUN_101478f48;
  param_1[0x592] = &PTR_FUN_101478fa0;
  FUN_100243458();
  FUN_100128188(param_1 + 0x58f);
  FUN_1004e1acc(&DAT_101d234d8,param_1,0x9d2c9b16);
  if (*(char *)((long)param_1 + 0x9c97) < '\0') {
    operator_delete((void *)param_1[0x1390]);
  }
  if (*(char *)((long)param_1 + 0x9c7f) < '\0') {
    operator_delete((void *)param_1[0x138d]);
  }
  if ((void *)param_1[0x138b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x138b]);
    param_1[0x138b] = 0;
    param_1[0x138a] = 0;
  }
  lVar1 = 0;
  param_1[0x12db] = &PTR_FUN_10145e588;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x9b50) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0x9c08) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0x9c20);
    FUN_10064e2bc((long)param_1 + lVar1 + 0x9b50);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != -0x4b0);
  FUN_10064e2bc(param_1 + 0x12db);
  param_1[0x12bd] = &PTR_FUN_1014a7108;
  param_1[0x12d4] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x12d7);
  FUN_10064e2bc(param_1 + 0x12bd);
  thunk_FUN_1001a7058(param_1 + 0x9eb);
  thunk_FUN_100246f28(param_1 + 0x82f);
  FUN_100246ba4(param_1 + 0x608);
  param_1[0x5ea] = &PTR_FUN_1014a7108;
  param_1[0x601] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x604);
  FUN_10064e2bc(param_1 + 0x5ea);
  FUN_10064e2bc(param_1 + 0x5cf);
  param_1[0x5b1] = &PTR_FUN_1014a7108;
  param_1[0x5c8] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5cb);
  FUN_10064e2bc(param_1 + 0x5b1);
  param_1[0x593] = &PTR_FUN_1014a7108;
  param_1[0x5aa] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5ad);
  FUN_10064e2bc(param_1 + 0x593);
  param_1[0x592] = &PTR_FUN_10146b508;
  FUN_100136bd8(param_1 + 0x592);
  FUN_100128158(param_1 + 0x58f);
  FUN_10014f51c(param_1 + 0x58c);
  FUN_1002667f0(param_1);
  return;
}




void FUN_100243458(long param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long lVar4;
  
  FUN_100136bd8(param_1 + 0x2c90);
  FUN_100246fe8(param_1 + 0x4178);
  puVar3 = *(undefined8 **)(param_1 + 0x9c58);
  uVar1 = *(uint *)(param_1 + 0x9c50);
  if (uVar1 != 0) {
    lVar4 = (ulong)uVar1 << 3;
    do {
      pvVar2 = (void *)*puVar3;
      if (pvVar2 != (void *)0x0) {
        if (*(char *)((long)pvVar2 + 0x1f) < '\0') {
          operator_delete(*(void **)((long)pvVar2 + 8));
        }
        operator_delete(pvVar2);
      }
      puVar3 = puVar3 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
    puVar3 = *(undefined8 **)(param_1 + 0x9c58);
  }
  if (puVar3 != (undefined8 *)0x0) {
    *(uint *)(param_1 + 0x9c50) = 0;
  }
  FUN_100266850(param_1);
  *(undefined8 *)(param_1 + 0x9c60) = 0;
  return;
}




void thunk_FUN_100243220(void)

{
  FUN_100243220();
  return;
}




void FUN_1002434fc(long param_1)

{
  FUN_100243220(param_1 + -0x2c60);
  return;
}




void FUN_100243508(long param_1)

{
  FUN_100243220(param_1 + -0x2c78);
  return;
}




void FUN_100243514(long param_1)

{
  FUN_100243220(param_1 + -0x2c90);
  return;
}




void FUN_100243520(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100243220();
  operator_delete(pvVar1);
  return;
}




void FUN_100243534(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100243220(param_1 + -0x2c60);
  operator_delete(pvVar1);
  return;
}




void FUN_100243550(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100243220(param_1 + -0x2c78);
  operator_delete(pvVar1);
  return;
}




void FUN_10024356c(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100243220(param_1 + -0x2c90);
  operator_delete(pvVar1);
  return;
}




void FUN_100243588(long param_1,int *param_2)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  void *local_60;
  ulong local_58;
  byte local_49;
  void *local_48;
  ulong local_40;
  byte local_31;
  
  if (*param_2 == 0) {
    return;
  }
  FUN_10003330c(&local_48,*(long *)(param_2 + 2) + (ulong)(*param_2 - 1) * 0x18);
  FUN_1001dae94(param_2);
  FUN_10003330c(&local_60,&DAT_101d91198);
  if (*param_2 != 0) {
    std::string::operator=
              ((string *)&local_60,(string *)(*(long *)(param_2 + 2) + (ulong)(*param_2 - 1) * 0x18)
              );
  }
  uVar4 = (ulong)local_31;
  uVar2 = local_40;
  if (-1 < (char)local_31) {
    uVar2 = uVar4;
  }
  if (uVar2 == 5) {
    iVar3 = std::string::compare((ulong)&local_48,0,(char *)0xffffffffffffffff,0x1013e7e3f);
    if (iVar3 != 0) {
      uVar4 = (ulong)local_31;
      goto LAB_100243640;
    }
    lVar5 = 0x3040;
LAB_1002436d4:
    plVar1 = (long *)(param_1 + lVar5);
    FUN_1001e6f74(param_1,(*(int *)((long)plVar1 + 0x84) << 1) >> 0x10,&DAT_101d91198);
    if (-1 < (char)local_49) {
      local_58 = (ulong)local_49;
    }
    if (local_58 != 0) {
      (**(code **)(*plVar1 + 0x160))(plVar1,&local_60);
    }
  }
  else {
LAB_100243640:
    uVar2 = local_40;
    if (-1 < (char)local_31) {
      uVar2 = uVar4;
    }
    if (uVar2 == 6) {
      iVar3 = std::string::compare((ulong)&local_48,0,(char *)0xffffffffffffffff,0x1013e7e45);
      if (iVar3 == 0) {
        lVar5 = 0x4178;
        goto LAB_1002436d4;
      }
      uVar4 = (ulong)local_31;
    }
    if (-1 < (char)local_31) {
      local_40 = uVar4;
    }
    if ((local_40 == 3) &&
       (iVar3 = std::string::compare((ulong)&local_48,0,(char *)0xffffffffffffffff,0x1013e7e4c),
       iVar3 == 0)) {
      FUN_1001e3fd8();
    }
    else {
      FUN_100243758(param_1,&local_48,&local_60);
    }
  }
  if ((char)local_49 < '\0') {
    operator_delete(local_60);
  }
  if ((char)local_31 < '\0') {
    operator_delete(local_48);
  }
  return;
}




void FUN_100243758(long param_1,string *param_2,string *param_3)

{
  string *this;
  short *psVar1;
  string *psVar2;
  size_t sVar3;
  string sVar4;
  byte bVar5;
  size_t sVar6;
  int iVar7;
  long lVar8;
  string *psVar9;
  ulong uVar10;
  string *psVar11;
  short *psVar12;
  
  std::string::operator=((string *)(param_1 + 0x9c68),param_2);
  this = (string *)(param_1 + 0x9c80);
  std::string::operator=(this,param_3);
  psVar2 = *(string **)param_2;
  sVar6 = *(size_t *)(param_2 + 8);
  if (-1 < (char)param_2[0x17]) {
    psVar2 = param_2;
    sVar6 = (ulong)(byte)param_2[0x17];
  }
  if (*(uint *)(param_1 + 0x2c30) != 0) {
    psVar12 = *(short **)(param_1 + 0x2c38);
    psVar1 = psVar12 + (ulong)*(uint *)(param_1 + 0x2c30) * 8;
    do {
      lVar8 = *(long *)(psVar12 + 4);
      if (lVar8 != 0) {
        bVar5 = *(byte *)(lVar8 + 0x3b7);
        uVar10 = (ulong)bVar5;
        sVar3 = *(size_t *)(lVar8 + 0x3a8);
        if (-1 < (char)bVar5) {
          sVar3 = uVar10;
        }
        if (sVar3 == sVar6) {
          if ((char)bVar5 < '\0') {
            if ((sVar6 == 0) ||
               (iVar7 = _memcmp(*(void **)(lVar8 + 0x3a0),psVar2,sVar6), iVar7 == 0)) {
LAB_100243868:
              std::string::operator=(this,(string *)&DAT_101d91198);
              std::string::operator=((string *)(param_1 + 0x9c68),this);
              FUN_1001e6f74(param_1,(long)*psVar12,&DAT_101d91198);
              uVar10 = *(ulong *)(param_3 + 8);
              if (-1 < (char)param_3[0x17]) {
                uVar10 = (ulong)(byte)param_3[0x17];
              }
              if (uVar10 == 0) {
                return;
              }
                    /* WARNING: Could not recover jumptable at 0x0001002438d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(**(long **)(psVar12 + 4) + 0x160))(*(long **)(psVar12 + 4),param_3);
              return;
            }
          }
          else {
            if (sVar6 == 0) goto LAB_100243868;
            if ((uint)(byte)*psVar2 == ((uint)*(void **)(lVar8 + 0x3a0) & 0xff)) {
              psVar9 = (string *)(lVar8 + 0x3a1);
              psVar11 = psVar2;
              do {
                uVar10 = uVar10 - 1;
                psVar11 = psVar11 + 1;
                if (uVar10 == 0) goto LAB_100243868;
                sVar4 = *psVar9;
                psVar9 = psVar9 + 1;
              } while (sVar4 == *psVar11);
            }
          }
        }
      }
      psVar12 = psVar12 + 8;
    } while (psVar12 != psVar1);
  }
  return;
}




void FUN_100243ebc(long param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  void *local_2b0 [2];
  char local_299;
  undefined **local_298;
  undefined1 auStack_290 [16];
  void *local_280;
  char local_269;
  undefined1 auStack_268 [48];
  void *local_238;
  char local_221;
  undefined8 local_220;
  void *local_218;
  undefined8 local_210;
  void *local_208;
  undefined1 auStack_1f8 [32];
  undefined1 auStack_1d8 [408];
  
  iVar4 = *(int *)(param_2 + 0x28);
  if (iVar4 == -0x18) {
    uVar6 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
    pcVar8 = "MENU_DIALOG_SKU_UNAVAILABLE";
  }
  else if (iVar4 == -0x16) {
    uVar6 = FUN_1004e0150("MENU_DIALOG_HERO_CANT_AFFORD_TITLE",0);
    pcVar8 = "MENU_DIALOG_HERO_CANT_AFFORD";
  }
  else {
    if (iVar4 == 0) {
      thunk_FUN_100253c74(auStack_1f8);
      puVar10 = (undefined8 *)(param_3 + 0xa8);
      puVar2 = (undefined8 *)*puVar10;
      if (-1 < *(char *)(param_3 + 0xbf)) {
        puVar2 = puVar10;
      }
      FUN_1000eaaf8(auStack_1f8,puVar2);
      lVar5 = FUN_10016c2f0();
      if (0 < *(int *)(lVar5 + 0x38)) {
        FUN_1000153b4(auStack_1d8,&DAT_101d91650);
        puVar2 = (undefined8 *)*puVar10;
        if (-1 < *(char *)(param_3 + 0xbf)) {
          puVar2 = puVar10;
        }
        FUN_100245664(param_1,puVar2);
        FUN_10016c2f0();
        FUN_10016bfb8();
      }
      uVar6 = FUN_10002f320();
      FUN_10003127c(uVar6,auStack_1f8);
      lVar5 = FUN_10016c2f0();
      if (*(int *)(lVar5 + 0x38) < 1) {
        FUN_10014237c(&local_298);
        plVar1 = (long *)(param_2 + 0x48);
        iVar4 = FUN_100136d20(plVar1,&local_298);
        if (iVar4 != 0) {
          plVar3 = (long *)*plVar1;
          if (-1 < *(char *)(param_2 + 0x5f)) {
            plVar3 = plVar1;
          }
          uVar6 = FUN_1000e7cb0(auStack_268);
          uVar7 = FUN_1000e7ce4(auStack_268);
          FUN_10001549c(local_2b0,uVar7);
          FUN_100103310(plVar3,uVar6,local_2b0);
          if (local_299 < '\0') {
            operator_delete(local_2b0[0]);
          }
        }
        local_298 = &PTR_FUN_10145ac30;
        if (local_208 != (void *)0x0) {
          operator_delete__(local_208);
          local_210 = 0;
          local_208 = (void *)0x0;
        }
        if (local_218 != (void *)0x0) {
          operator_delete__(local_218);
          local_220 = 0;
          local_218 = (void *)0x0;
        }
        if (local_221 < '\0') {
          operator_delete(local_238);
        }
        if (local_269 < '\0') {
          operator_delete(local_280);
        }
        FUN_1001423e4(auStack_290,1);
      }
      FUN_1001019d0();
      FUN_10016c310(auStack_1f8);
      goto LAB_1002440ec;
    }
    lVar5 = FUN_10016c2f0();
    if (0 < *(int *)(lVar5 + 0x38)) {
      *(undefined1 *)(param_1 + 0x9c98) = 1;
      goto LAB_1002440ec;
    }
    if (*(int *)(param_2 + 0x28) == -0x17) {
      uVar6 = FUN_1004e0150("MENU_DIALOG_HERO_ALREADY_OWNED_TITLE",0);
      pcVar8 = "MENU_DIALOG_HERO_ALREADY_OWNED";
    }
    else {
      uVar6 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
      pcVar8 = "MENU_DIALOG_PURCHASE_FAILED";
    }
  }
  uVar7 = FUN_1004e0150(pcVar8,0);
  uVar9 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar6,uVar7,uVar9,0,0);
LAB_1002440ec:
  lVar5 = FUN_10015d3ec();
  FUN_100169cec(lVar5 + 0x18);
  return;
}




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




void FUN_100244654(long param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  void *local_1e8 [2];
  char local_1d1;
  long local_50;
  code *pcStack_48;
  
  iVar4 = *(int *)(param_2 + 0x28);
  if (iVar4 < -0x16) {
    if (iVar4 == -0x1a) {
      uVar5 = FUN_1004e0150("MENU_DIALOG_TITLE_PREVIOUS_TIER_REQUIRED",0);
      pcVar6 = "MENU_DIALOG_SKIN_PREREQ_NOT_MET";
    }
    else {
      if (iVar4 != -0x18) goto LAB_10024480c;
      uVar5 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
      pcVar6 = "MENU_DIALOG_SKU_UNAVAILABLE";
    }
  }
  else if (iVar4 == -0x16) {
    uVar5 = FUN_1004e0150("MENU_DIALOG_SKIN_CANT_AFFORD_BUY_TITLE",0);
    pcVar6 = "MENU_DIALOG_SKIN_CANT_AFFORD_BUY";
  }
  else {
    if (iVar4 == 0) {
      lVar9 = FUN_10016c2f0();
      if (*(int *)(lVar9 + 0x38) < 1) {
        FUN_10032c3d4(local_1e8,param_3);
        puVar1 = *(undefined8 **)(param_2 + 0x48);
        if (-1 < *(char *)(param_2 + 0x5f)) {
          puVar1 = (undefined8 *)(param_2 + 0x48);
        }
        puVar2 = *(undefined8 **)(param_2 + 0x60);
        if (-1 < *(char *)(param_2 + 0x77)) {
          puVar2 = (undefined8 *)(param_2 + 0x60);
        }
        plVar3 = (long *)*param_3;
        if (-1 < *(char *)((long)param_3 + 0x17)) {
          plVar3 = param_3;
        }
        FUN_100103eec(puVar1,puVar2,plVar3,(int)param_3[0x14],local_1e8);
        if (local_1d1 < '\0') {
          operator_delete(local_1e8[0]);
        }
      }
      thunk_FUN_100253c74(local_1e8);
      FUN_1000ead08(local_1e8,param_3);
      pcStack_48 = thunk_FUN_100246a3c;
      local_50 = param_1;
      uVar5 = FUN_10002f320();
      FUN_10003127c(uVar5,local_1e8);
      FUN_10016c2f0();
      FUN_10016bd60();
      FUN_100101a00();
      lVar9 = FUN_10032834c();
      if (lVar9 != 0) {
        uVar5 = FUN_10032834c();
        FUN_100328ea8(uVar5,param_3);
      }
      FUN_10016c310(local_1e8);
      goto LAB_1002447ec;
    }
LAB_10024480c:
    lVar9 = FUN_10016c2f0();
    if (0 < *(int *)(lVar9 + 0x38)) {
      *(undefined1 *)(param_1 + 0x9c98) = 1;
      goto LAB_1002447ec;
    }
    if (*(int *)(param_2 + 0x28) == -0x17) {
      uVar5 = FUN_1004e0150("MENU_DIALOG_SKIN_ALREADY_OWNED_TITLE",0);
      pcVar6 = "MENU_DIALOG_SKIN_ALREADY_OWNED";
    }
    else {
      uVar5 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
      pcVar6 = "MENU_DIALOG_PURCHASE_FAILED";
    }
  }
  uVar7 = FUN_1004e0150(pcVar6,0);
  uVar8 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar5,uVar7,uVar8,0,0);
LAB_1002447ec:
  lVar9 = FUN_10015d3ec();
  FUN_100169cec(lVar9 + 0x18);
  return;
}




void FUN_100244878(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [32];
  
  lVar1 = FUN_10016c2f0();
  if (0 < *(int *)(lVar1 + 0x38)) {
    FUN_10016c2f0();
    FUN_10016bd60();
    uVar2 = FUN_1001e7504();
    FUN_1001e7678(uVar2,7);
    FUN_100644aec(auStack_40,DAT_101d23678,0);
    FUN_100644c34(param_1,auStack_40,1);
  }
  return;
}




void FUN_1002448e8(long param_1)

{
  FUN_100243b00(param_1 + -0x2c60);
  return;
}




void FUN_1002448f4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *local_70 [2];
  char local_59;
  void *local_58;
  undefined8 uStack_50;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_1002438f8(param_1 + 0x78,&local_40,&local_58);
  if ((int)local_40 == 0) {
    uVar2 = FUN_1004e0150("MAIN_PROFILE_REG_STATUS_SUCCESS",0);
    uVar3 = FUN_1004e0150("VIDEO_ADS_SUCCESS_2",0);
    uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    FUN_1001e31c8(uVar2,uVar3,uVar4,&DAT_101d91650,&DAT_101d91650,0,0,0,0);
  }
  else {
    uVar2 = FUN_10002f320();
    FUN_10001549c(local_70,"purchaseBundle");
    FUN_100031510(uVar2,local_70,&local_58);
    if (local_59 < '\0') {
      operator_delete(local_70[0]);
    }
    uVar2 = FUN_10002f320();
    FUN_10001549c(local_70,"purchaseBundle");
    FUN_100031670(uVar2,local_70,&local_40);
    if (local_59 < '\0') {
      operator_delete(local_70[0]);
    }
  }
  puVar1 = *(undefined8 **)(param_1 + 0x48);
  if (-1 < *(char *)(param_1 + 0x5f)) {
    puVar1 = (undefined8 *)(param_1 + 0x48);
  }
  FUN_10001549c(local_70,"");
  FUN_10010369c(puVar1,0,local_70,&local_40);
  if (local_59 < '\0') {
    operator_delete(local_70[0]);
  }
  if (local_48 < 0) {
    operator_delete(local_58);
  }
  FUN_1000ec1cc(&local_40,1);
  return;
}




void FUN_100244a7c(long param_1)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  void *local_50 [2];
  char local_39;
  undefined8 **local_38 [2];
  char local_21;
  
  FUN_10001549c(local_38,"VIDEO_ADS_ERROR_2");
  bVar10 = *(byte *)(param_1 + 0x47);
  uVar8 = (ulong)bVar10;
  uVar9 = *(ulong *)(param_1 + 0x38);
  uVar1 = uVar9;
  if (-1 < (char)bVar10) {
    uVar1 = uVar8;
  }
  if (uVar1 == 0x10) {
    iVar3 = std::string::compare(param_1 + 0x30U,0,(char *)0xffffffffffffffff,0x1013e7f04);
    if (iVar3 != 0) {
      bVar10 = *(byte *)(param_1 + 0x47);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_1 + 0x38);
      goto LAB_100244aec;
    }
    pcVar7 = "VIDEO_ADS_ERROR_1";
  }
  else {
LAB_100244aec:
    if (-1 < (char)bVar10) {
      uVar9 = uVar8;
    }
    if ((uVar9 != 0xd) ||
       (iVar3 = std::string::compare(param_1 + 0x30U,0,(char *)0xffffffffffffffff,0x1013e7f27),
       iVar3 != 0)) goto LAB_100244b58;
    pcVar7 = "VIDEO_ADS_ERROR_3";
  }
  FUN_10001549c(local_50,pcVar7);
  std::string::operator=((string *)local_38,(string *)local_50);
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
LAB_100244b58:
  uVar4 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
  pppuVar2 = (undefined8 ***)local_38[0];
  if (-1 < local_21) {
    pppuVar2 = local_38;
  }
  uVar5 = FUN_1004e0150(pppuVar2,0);
  uVar6 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e31c8(uVar4,uVar5,uVar6,&DAT_101d91650,&DAT_101d91650,0,0,0,0);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_100244be8(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  
  iVar1 = FUN_1004f1680(param_2);
  if ((iVar1 == 0) || (*(int *)(param_2 + 0x28) != 0)) {
    FUN_100244a7c(param_2);
  }
  else {
    FUN_1002448f4(param_2);
    uVar4 = *(uint *)(param_1 + 0x2c30);
    if (uVar4 != 0) {
      lVar5 = *(long *)(param_1 + 0x2c38);
      lVar2 = lVar5;
      do {
        plVar3 = *(long **)(lVar2 + 8);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 400))(plVar3,1);
          uVar4 = *(uint *)(param_1 + 0x2c30);
          lVar5 = *(long *)(param_1 + 0x2c38);
        }
        lVar2 = lVar2 + 0x10;
      } while (lVar2 != lVar5 + (ulong)uVar4 * 0x10);
    }
  }
  lVar2 = FUN_10015d3ec();
  FUN_100169cec(lVar2 + 0x18);
  return;
}




void FUN_100244c78(long param_1)

{
  FUN_100244be8(param_1 + -0x2c60);
  return;
}




void FUN_100244c84(long *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(uint *)(param_1 + 0x586);
  if (uVar2 != 0) {
    lVar3 = param_1[0x587];
    lVar4 = lVar3;
    do {
      plVar1 = *(long **)(lVar4 + 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 400))(plVar1,1);
        uVar2 = *(uint *)(param_1 + 0x586);
        lVar3 = param_1[0x587];
      }
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != lVar3 + (ulong)uVar2 * 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x000100244ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1a0))(param_1);
  return;
}




void FUN_100244cec(long param_1)

{
  FUN_100244c84(param_1 + -0x2c60);
  return;
}




void FUN_100244cf8(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x9c98) != '\0') {
    lVar1 = FUN_10016c2f0();
    if (0 < *(int *)(lVar1 + 0x38)) {
      FUN_100244d88(param_1);
    }
  }
  *(char *)(param_1 + 0x9c98) = '\0';
  lVar1 = param_1 + 0x4f58;
  lVar2 = FUN_10015d3ec();
  FUN_1001a7654(lVar1,*(undefined4 *)(lVar2 + 0x5454));
  lVar2 = FUN_10015d3ec();
  FUN_1001a76b8(lVar1,*(undefined4 *)(lVar2 + 0x5450));
  lVar2 = FUN_10015d3ec();
  FUN_1001a7720(lVar1,*(undefined4 *)(lVar2 + 0x545c));
  FUN_100244fc0(param_1);
  return;
}




void FUN_100244fc0(long *param_1)

{
  float *pfVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_78;
  undefined4 uStack_74;
  float local_6c;
  undefined4 local_68;
  float local_64;
  
  pfVar1 = (float *)(param_1 + 0x12c5);
  uVar5 = FUN_100126b4c();
  FUN_1001e35ec(param_1,uVar5,&local_64,&local_68,&local_6c);
  iVar4 = FUN_1001270c4();
  fVar15 = 2050.0;
  if (iVar4 < 2) {
    fVar15 = local_64;
  }
  FUN_10064e47c(local_64,local_68,param_1 + 0x608);
  *(float *)(param_1 + 0x9e9) = local_64;
  *(undefined4 *)((long)param_1 + 0x4f4c) = local_68;
  plVar8 = param_1 + 0x593;
  FUN_10064e47c(local_64 - local_6c,plVar8);
  FUN_10064e47c(local_64,local_64,param_1 + 0x5b1);
  FUN_10064e5ec(0,0,param_1 + 0x5b1,8,plVar8,8);
  FUN_10064e47c(fVar15 + 12.0,local_68,param_1 + 0x5cf);
  FUN_10064e5ec(0,0,param_1 + 0x5cf,8,plVar8,8);
  plVar8 = param_1 + 0x12bd;
  FUN_10064e47c(local_64 - local_6c,local_68,plVar8);
  fVar16 = *pfVar1;
  if ((fVar16 != local_6c) || (*(float *)((long)param_1 + 0x962c) != 0.0)) {
    *pfVar1 = local_6c;
    *(undefined4 *)((long)param_1 + 0x962c) = 0;
    FUN_1000200a0(plVar8);
    fVar16 = *pfVar1;
  }
  plVar2 = param_1 + 0x12db;
  fVar10 = (float)FUN_100652e60(plVar8);
  fVar11 = (float)FUN_100642888(plVar2,0,0,1,1);
  fVar16 = fVar16 - local_6c;
  fVar17 = fVar16 + (fVar10 - fVar11) * 0.5;
  fVar11 = *(float *)((long)param_1 + 0x962c);
  FUN_100652e60(plVar8);
  fVar10 = fVar16;
  FUN_100642888(plVar2,0,0,1,1);
  fVar11 = fVar11 + (fVar16 - fVar10) * 0.5;
  uVar14 = (ulong)(uint)*(float *)(param_1 + 0x12e3);
  bVar3 = false;
  if ((*(float *)(param_1 + 0x12e3) == fVar17) &&
     (bVar3 = false, !NAN(*(float *)((long)param_1 + 0x971c)) && !NAN(fVar11))) {
    bVar3 = *(float *)((long)param_1 + 0x971c) == fVar11;
  }
  if (!bVar3) {
    *(float *)(param_1 + 0x12e3) = fVar17;
    *(float *)((long)param_1 + 0x971c) = fVar11;
    FUN_1000200a0(plVar2);
  }
  FUN_100245b58(param_1);
  uVar6 = *(uint *)(param_1 + 0x586);
  if (uVar6 != 0) {
    lVar7 = param_1[0x587];
    lVar9 = lVar7;
    do {
      uVar13 = (undefined4)uVar14;
      plVar8 = *(long **)(lVar9 + 8);
      if (plVar8 != (long *)0x0) {
        uVar12 = (**(code **)(*param_1 + 0x48))(param_1);
        local_78 = (float)NEON_fminnm(uVar12,fVar15);
        uStack_74 = uVar13;
        FUN_10064e48c(plVar8,&local_78);
        (**(code **)(*plVar8 + 0x150))(plVar8);
        fVar16 = (local_64 - local_78) * 0.5;
        uVar14 = (ulong)(uint)*(float *)(plVar8 + 8);
        if (*(float *)(plVar8 + 8) != fVar16) {
          *(float *)(plVar8 + 8) = fVar16;
          FUN_1000200a0(plVar8);
        }
        uVar6 = *(uint *)(param_1 + 0x586);
        lVar7 = param_1[0x587];
      }
      lVar9 = lVar9 + 0x10;
    } while (lVar9 != lVar7 + (ulong)uVar6 * 0x10);
  }
  return;
}




void FUN_100245258(long param_1)

{
  FUN_100244cf8(param_1 + -0x2c60);
  return;
}




void FUN_10024558c(long param_1)

{
  FUN_100245264(param_1 + -0x2c78);
  return;
}




void FUN_100245598(long param_1)

{
  *(uint *)(param_1 + 0x966c) = *(uint *)(param_1 + 0x966c) & 0xfffffffb;
  FUN_1001c102c(param_1 + 0x96d8);
  return;
}




void FUN_1002455b4(long param_1)

{
  *(uint *)(param_1 + 0x69f4) = *(uint *)(param_1 + 0x69f4) & 0xfffffffb;
  FUN_1001c102c(param_1 + 0x6a60);
  return;
}




void FUN_1002455d0(long param_1)

{
  *(uint *)(param_1 + 0x966c) = *(uint *)(param_1 + 0x966c) & 0xfffffffb;
  FUN_1001c102c(param_1 + 0x96d8);
  return;
}




void FUN_1002455ec(long param_1)

{
  *(uint *)(param_1 + 0x69f4) = *(uint *)(param_1 + 0x69f4) & 0xfffffffb;
  FUN_1001c102c(param_1 + 0x6a60);
  return;
}




void FUN_100245608(long param_1)

{
  *(uint *)(param_1 + 0x966c) = *(uint *)(param_1 + 0x966c) & 0xfffffffb;
  FUN_1001c102c(param_1 + 0x96d8);
  return;
}




void FUN_100245624(long param_1)

{
  *(uint *)(param_1 + 0x69f4) = *(uint *)(param_1 + 0x69f4) & 0xfffffffb;
  FUN_1001c102c(param_1 + 0x6a60);
  return;
}




void FUN_100245640(void)

{
  FUN_1004e0150("MAIN_MENU_MARKET",0);
  return;
}




void FUN_100245650(void)

{
  FUN_1004e0150("MAIN_MENU_MARKET",0);
  return;
}




void thunk_FUN_100244fc0(void)

{
  FUN_100244fc0();
  return;
}




void FUN_100245664(undefined8 param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  ulong uVar4;
  void *local_e0;
  void *local_d8;
  undefined7 local_d0;
  char cStack_c9;
  char local_b9;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined1 auStack_a8 [16];
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  undefined4 local_68;
  code *local_60;
  undefined8 local_48;
  uint local_2c;
  byte local_28;
  
  iVar1 = _strcmp(param_2,"*Ringo*");
  local_48 = param_1;
  if (iVar1 == 0) {
    FUN_10003c274(auStack_a8);
    uVar2 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    FUN_1000153b4(&local_98,uVar2);
    local_68 = 3;
    uVar4 = (ulong)local_2c & 0xffffffff0000ffff | (ulong)local_28 << 0x20 | 0x205780000;
    local_2c = (uint)uVar4;
    local_28 = (byte)(uVar4 >> 0x20);
    local_60 = FUN_1002469bc;
    uVar2 = FUN_1004e0150("TUTORIAL_UNLOCK_RINGO_EXPLANATION_DIALOG_MSG",0);
    thunk_FUN_1004e439c(&local_e0,uVar2);
    FUN_10003330c(&local_d0,&DAT_101d91198);
    local_b8 = 1;
    local_b4 = 0x41200000;
    FUN_10003c2dc(auStack_a8,&local_e0);
    if (local_b9 < '\0') {
      operator_delete((void *)CONCAT17(cStack_c9,local_d0));
    }
    if (local_d8 != (void *)0x0) {
      operator_delete__(local_d8);
    }
    uVar2 = FUN_10002f320();
    pcVar3 = "tutorial_ringo_unlock";
  }
  else {
    iVar1 = _strcmp(param_2,"*Hero010*");
    if (iVar1 != 0) {
      return;
    }
    FUN_10003c274(auStack_a8);
    uVar2 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    FUN_1000153b4(&local_98,uVar2);
    local_68 = 3;
    uVar4 = (ulong)local_2c & 0xffffffff0000ffff | (ulong)local_28 << 0x20 | 0x205780000;
    local_2c = (uint)uVar4;
    local_28 = (byte)(uVar4 >> 0x20);
    local_60 = FUN_1002469bc;
    uVar2 = FUN_1004e0150("TUTORIAL_UNLOCK_SKAARF_EXPLANATION_DIALOG_MSG",0);
    thunk_FUN_1004e439c(&local_e0,uVar2);
    FUN_10003330c(&local_d0,&DAT_101d91198);
    local_b8 = 1;
    local_b4 = 0x41200000;
    FUN_10003c2dc(auStack_a8,&local_e0);
    if (local_b9 < '\0') {
      operator_delete((void *)CONCAT17(cStack_c9,local_d0));
    }
    if (local_d8 != (void *)0x0) {
      operator_delete__(local_d8);
    }
    uVar2 = FUN_10002f320();
    pcVar3 = "tutorial_skaarf_unlock";
  }
  FUN_10001549c(&local_e0,pcVar3);
  FUN_1000309a0(uVar2,&local_e0,auStack_a8);
  if (cStack_c9 < '\0') {
    operator_delete(local_e0);
  }
  FUN_10016c2f0();
  FUN_10016bd60();
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = 0;
    local_70 = (void *)0x0;
  }
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = 0;
    local_80 = (void *)0x0;
  }
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = 0;
    local_90 = (void *)0x0;
  }
  FUN_10003c480(auStack_a8,1);
  return;
}




void thunk_FUN_100246a3c(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_40 [32];
  
  lVar1 = FUN_10016c2f0();
  if (0 < *(int *)(lVar1 + 0x38)) {
    FUN_100644aec(auStack_40,DAT_101d23678,0);
    FUN_100644c34(param_1,auStack_40,1);
  }
  return;
}




void FUN_1002458f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_2c [4];
  undefined4 local_28;
  undefined4 uStack_24;
  
  uVar1 = FUN_100126b4c();
  FUN_1001e35ec(param_1,uVar1,&uStack_24,&local_28,auStack_2c);
  FUN_1001e6e14(uStack_24,local_28,param_1);
  FUN_100244fc0(param_1);
  return;
}




void FUN_10024594c(long *param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)((long)param_1 + 0x2c2c);
  FUN_100266988();
  if ((bVar1 >> 2 & 1) == (*(byte *)((long)param_1 + 0x2c2c) & 4) >> 2) {
    return;
  }
  if (param_2 != 0) {
    FUN_1004e18bc(&DAT_101d234d8,param_1,0x9d2c9b16,FUN_100245a14,0);
    (**(code **)(*param_1 + 0x1a0))(param_1);
    FUN_100244fc0(param_1);
    FUN_1001076ac((long)(short)param_1[0x552]);
    return;
  }
  FUN_1004e1acc(&DAT_101d234d8,param_1,0x9d2c9b16);
  return;
}




void FUN_100245a14(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100245a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1a0))();
  return;
}




void FUN_100245a20(long param_1,int param_2)

{
  short sVar1;
  int iVar2;
  long lVar3;
  
  FUN_1001e6da8();
  if (param_2 != 0) {
    lVar3 = param_1 + 0x4f58;
    iVar2 = FUN_100642d08(lVar3);
    if (iVar2 != 0) {
      FUN_1006423ec(lVar3,1);
    }
    FUN_100642bd8(param_1 + 0x170,lVar3,1);
    sVar1 = 0;
    if (*(short *)(param_1 + 0x2c20) != -1) {
      sVar1 = *(short *)(param_1 + 0x2c20);
    }
    FUN_1001e6f74(param_1,(int)sVar1,&DAT_101d91198);
    return;
  }
  lVar3 = FUN_100266a14(param_1,(long)*(short *)(param_1 + 0x2c20));
  if (lVar3 != 0) {
    FUN_10022b9fc();
    return;
  }
  return;
}




void FUN_100245ac8(long param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((-1 < (int)(uint)param_2) && ((uint)param_2 < *(uint *)(param_1 + 0x9c50))) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x9c58) + (param_2 & 0xffffffff) * 8);
    if (lVar2 != 0) {
      uVar1 = FUN_10002f320();
      FUN_1000312cc(uVar1,lVar2 + 8,&DAT_101d91198,0,0);
    }
  }
  FUN_100244fc0(param_1);
  lVar2 = FUN_100266a14(param_1,(long)*(short *)(param_1 + 0x2c20));
  if (lVar2 != 0) {
    FUN_10022b9fc();
  }
  FUN_1001076ac(param_2);
  return;
}




void FUN_100245b58(long param_1)

{
  float *pfVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  float fVar6;
  float local_54;
  undefined1 auStack_50 [4];
  float local_4c;
  undefined8 local_48;
  
  pfVar1 = (float *)(param_1 + 0x4f98);
  uVar5 = FUN_100126b4c();
  FUN_1001e35ec(param_1,uVar5,&local_4c,auStack_50,&local_54);
  iVar4 = FUN_100126c88();
  fVar6 = DAT_101854a78;
  if (iVar4 != 0) {
    bVar3 = false;
    if ((*(float *)(param_1 + 0x4fa0) == DAT_101854a78) &&
       (bVar3 = false, !NAN(*(float *)(param_1 + 0x4fa4)) && !NAN(DAT_101854a78))) {
      bVar3 = *(float *)(param_1 + 0x4fa4) == DAT_101854a78;
    }
    if (!bVar3) {
      *(float *)(param_1 + 0x4fa0) = DAT_101854a78;
      *(float *)(param_1 + 0x4fa4) = fVar6;
      FUN_1000200a0(param_1 + 0x4f58);
    }
  }
  lVar2 = param_1 + 0x4f58;
  FUN_1001a7188(lVar2);
  fVar6 = (float)FUN_10064259c(lVar2);
  local_4c = local_4c - (local_54 + fVar6);
  fVar6 = DAT_101854a80 * 0.5;
  bVar3 = false;
  if ((*pfVar1 == local_4c) && (bVar3 = false, !NAN(*(float *)(param_1 + 0x4f9c)) && !NAN(fVar6))) {
    bVar3 = *(float *)(param_1 + 0x4f9c) == fVar6;
  }
  if (!bVar3) {
    *pfVar1 = local_4c;
    *(float *)(param_1 + 0x4f9c) = fVar6;
    FUN_1000200a0(lVar2);
  }
  local_48 = 0x3f0000003f800000;
  (**(code **)(*(long *)(param_1 + 0x4f58) + 0x28))(lVar2,&local_48);
  *(float *)(param_1 + 0x2a88) = *pfVar1;
  FUN_1001e611c(param_1 + 0x310);
  if (*(long *)(param_1 + 0x3020) != 0) {
    FUN_10064e5ec(0xc1700000,0x41700000,param_1 + 0x2f50,1,param_1 + 0x450,2);
  }
  return;
}




long * FUN_100246354(undefined1 param_1 [16],undefined4 param_2,long *param_3,ulong *param_4,
                    string *param_5,long *param_6,string *param_7)

{
  string *psVar1;
  long *plVar2;
  ulong *puVar3;
  short *psVar4;
  short sVar5;
  string *psVar6;
  size_t sVar7;
  int iVar8;
  int iVar9;
  string *psVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 ****ppppuVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined4 uVar18;
  undefined1 auStack_c0 [8];
  void *local_b8;
  undefined8 *local_b0;
  undefined8 ***local_a8;
  size_t local_a0;
  undefined8 local_98;
  short local_90;
  undefined2 uStack_8e;
  undefined4 uStack_8c;
  long *local_88;
  char local_79;
  void *local_78;
  ulong local_70;
  byte local_61;
  
  FUN_10003330c(&local_78,&DAT_101d91198);
  uVar15 = *(ulong *)(param_5 + 8);
  psVar6 = *(string **)param_5;
  if (-1 < (char)param_5[0x17]) {
    uVar15 = (ulong)(byte)param_5[0x17];
    psVar6 = param_5;
  }
  if (0x12 < (long)uVar15) {
    psVar1 = psVar6 + uVar15;
    psVar10 = psVar6;
    while( true ) {
      psVar10 = _memchr(psVar10,0x76,uVar15 - 0x12);
      if (psVar10 == (string *)0x0) break;
      if ((*(long *)psVar10 == 0x726f6c676e696176 && *(long *)(psVar10 + 8) == 0x6b72614d2f2f3a79)
          && *(long *)(psVar10 + 0xb) == 0x2f74656b72614d2f) {
        if ((psVar10 != psVar1) && (psVar10 == psVar6)) {
          param_7 = param_5;
          std::string::string((string *)&local_a8,param_5,0x13,0xffffffffffffffff,
                              (allocator *)param_5);
          std::string::string((string *)&local_90,(string *)&local_a8);
          std::string::operator=((string *)&local_78,(string *)&local_90);
          if (local_79 < '\0') {
            operator_delete((void *)CONCAT44(uStack_8c,CONCAT22(uStack_8e,local_90)));
          }
          if (local_98._7_1_ < '\0') {
            operator_delete(local_a8);
          }
        }
        break;
      }
      psVar10 = psVar10 + 1;
      uVar15 = (long)psVar1 - (long)psVar10;
      if ((long)uVar15 < 0x13) break;
    }
  }
  uVar16 = (ulong)local_61;
  uVar15 = local_70;
  if (-1 < (char)local_61) {
    uVar15 = uVar16;
  }
  sVar5 = (short)(int)param_3[0x138a];
  if (uVar15 == 5) {
    param_7 = (string *)0x5;
    iVar8 = std::string::compare((ulong)&local_78,0,(char *)0xffffffffffffffff,0x1013e7e3f);
    if (iVar8 != 0) {
      uVar16 = (ulong)local_61;
      goto LAB_1002464e4;
    }
    lVar17 = 0x3040;
LAB_1002465f8:
    plVar11 = (long *)0x0;
    plVar14 = (long *)((long)param_3 + lVar17);
  }
  else {
LAB_1002464e4:
    uVar15 = local_70;
    if (-1 < (char)local_61) {
      uVar15 = uVar16;
    }
    if (uVar15 == 6) {
      param_7 = (string *)0x6;
      iVar8 = std::string::compare((ulong)&local_78,0,(char *)0xffffffffffffffff,0x1013e7e45);
      if (iVar8 == 0) {
        lVar17 = 0x4178;
        goto LAB_1002465f8;
      }
      uVar16 = (ulong)local_61;
    }
    if (-1 < (char)local_61) {
      local_70 = uVar16;
    }
    if (local_70 == 3) {
      param_7 = (string *)0x3;
      iVar8 = std::string::compare((ulong)&local_78,0,(char *)0xffffffffffffffff,0x1013e7e4c);
      if (iVar8 == 0) {
        plVar14 = (long *)0x0;
        plVar11 = (long *)0x0;
        goto LAB_100246608;
      }
    }
    plVar11 = operator_new(0xc08);
    FUN_100247a14();
    uVar18 = (**(code **)(*param_3 + 0x48))(param_3);
    local_90 = (short)uVar18;
    uStack_8e = (undefined2)((uint)uVar18 >> 0x10);
    uStack_8c = param_2;
    FUN_10064e48c(plVar11,&local_90);
    std::string::operator=((string *)(plVar11 + 0x71),(string *)(param_3 + 0x588));
    FUN_10022badc(plVar11,param_4);
    (**(code **)(*plVar11 + 0x170))(plVar11);
    *(undefined4 *)(plVar11 + 0x7b) = DAT_101854a80;
    local_90 = sVar5;
    local_88 = plVar11;
    FUN_1002468bc(param_3 + 0x586,&local_90);
    plVar14 = plVar11;
  }
LAB_100246608:
  local_b0 = operator_new(0x20);
  local_b0[2] = 0;
  local_b0[3] = 0;
  *local_b0 = plVar14;
  local_b0[1] = 0;
  std::string::operator=((string *)(local_b0 + 1),param_5);
  if ((plVar14 != (long *)0x0) && (iVar8 = FUN_100642d08(plVar14), iVar8 != 0)) {
    FUN_1006423ec(plVar14,1);
  }
  plVar2 = (long *)*param_6;
  if (-1 < *(char *)((long)param_6 + 0x17)) {
    plVar2 = param_6;
  }
  FUN_1004e3120(auStack_c0,plVar2);
  iVar8 = FUN_1004e3624(auStack_c0);
  if (iVar8 != 0) {
    puVar3 = (ulong *)*param_4;
    if (-1 < *(char *)((long)param_4 + 0x17)) {
      puVar3 = param_4;
    }
    uVar12 = FUN_1004e0150(puVar3,0);
    FUN_1000153b4(auStack_c0,uVar12);
  }
  iVar8 = (int)sVar5;
  FUN_1001e6e9c(param_3,iVar8,auStack_c0,plVar14);
  FUN_10024693c(param_3 + 0x138a,&local_b0);
  uVar15 = param_4[1];
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    uVar15 = (ulong)*(byte *)((long)param_4 + 0x17);
  }
  if (uVar15 == 0x1b) {
    param_7 = (string *)&DAT_0000001b;
    iVar9 = std::string::compare((ulong)param_4,0,(char *)0xffffffffffffffff,0x1013e81b9);
    if (iVar9 == 0) {
      FUN_1001e68a4(param_3 + 0x62,iVar8,"REWARDS.BASIC_MYSTERY*");
      FUN_1001e68a4(param_3 + 0x62,iVar8,"REWARDS.EPIC_MYSTERY*");
    }
  }
  local_a8 = (undefined8 ****)0x0;
  local_a0 = 0;
  local_98 = 0;
  plVar14 = (long *)param_3[0x588];
  sVar7 = param_3[0x589];
  if (-1 < (char)*(byte *)((long)param_3 + 0x2c57)) {
    plVar14 = param_3 + 0x588;
    sVar7 = (ulong)*(byte *)((long)param_3 + 0x2c57);
  }
  if (0xffffffffffffffef < sVar7 + 1) {
    FUN_100246b98();
                    /* WARNING: Could not recover jumptable at 0x000100246890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar14 = (long *)(**(code **)(*(long *)param_7 + 0x170))(param_7);
    return plVar14;
  }
  if (sVar7 + 1 < 0x17) {
    ppppuVar13 = &local_a8;
    local_98 = sVar7 << 0x38;
    if (sVar7 != 0) goto LAB_10024678c;
  }
  else {
    uVar15 = sVar7 + 0x11 & 0xfffffffffffffff0;
    ppppuVar13 = operator_new(uVar15);
    local_98 = uVar15 | 0x8000000000000000;
    local_a8 = ppppuVar13;
    local_a0 = sVar7;
LAB_10024678c:
    _memcpy(ppppuVar13,plVar14,sVar7);
  }
  *(undefined1 *)((long)ppppuVar13 + sVar7) = 0;
  std::string::append((char *)&local_a8,0x1013dcc67);
  FUN_1000e8b18(&local_90,&local_a8,param_4);
  psVar4 = (short *)CONCAT44(uStack_8c,CONCAT22(uStack_8e,local_90));
  if (-1 < local_79) {
    psVar4 = &local_90;
  }
  FUN_1001e68a4(param_3 + 0x62,iVar8,psVar4);
  if (local_79 < '\0') {
    operator_delete((void *)CONCAT44(uStack_8c,CONCAT22(uStack_8e,local_90)));
  }
  if ((long)local_98 < 0) {
    operator_delete(local_a8);
  }
  if (local_b8 != (void *)0x0) {
    operator_delete__(local_b8);
  }
  if (*(char *)((long)param_3 + 0x9c7f) < '\0') {
    if (param_3[0x138e] == 0) goto LAB_10024683c;
  }
  else if (*(char *)((long)param_3 + 0x9c7f) == '\0') goto LAB_10024683c;
  FUN_100243758(param_3,param_3 + 0x138d,param_3 + 0x1390);
LAB_10024683c:
  if ((char)local_61 < '\0') {
    operator_delete(local_78);
  }
  return plVar11;
}




void FUN_100246880(void)

{
  long *in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x000100246890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_x4 + 0x170))(in_x4);
  return;
}




void FUN_100246894(void)

{
  long *in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x0001002468a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_x4 + 0x170))(in_x4);
  return;
}




void FUN_1002468a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100246354(param_1,param_3,param_4,param_2);
  return;
}




void FUN_1002468bc(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
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
    FUN_100246ca4(param_1,uVar3);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x10;
  uVar5 = *param_2;
  *(undefined8 *)(lVar1 + -8) = param_2[1];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  return;
}




void FUN_10024693c(uint *param_1,undefined8 *param_2)

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
    FUN_100246d20(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1002469bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_1001e7504();
  FUN_1001e7678(uVar1,0x11);
  FUN_100644aec(auStack_40,DAT_101d23660,0);
  FUN_100644c34(param_1,auStack_40,1);
  FUN_100644aec(auStack_60,DAT_101d23678,0);
  FUN_100644c34(param_1,auStack_60,1);
  return;
}




void FUN_100246a3c(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_40 [32];
  
  lVar1 = FUN_10016c2f0();
  if (0 < *(int *)(lVar1 + 0x38)) {
    FUN_100644aec(auStack_40,DAT_101d23678,0);
    FUN_100644c34(param_1,auStack_40,1);
  }
  return;
}




void FUN_100246a98(undefined8 param_1,undefined8 param_2)

{
  FUN_1001c3fc8(param_2,"MARKET.*");
  FUN_1001c3fc8(param_2,"REWARDS.BASIC_MYSTERY*");
  FUN_1001c3fc8(param_2,"REWARDS.EPIC_MYSTERY*");
  return;
}




void thunk_FUN_100246a98(void)

{
  FUN_100246a98();
  return;
}




void FUN_100246ae4(void)

{
  return;
}




undefined8 FUN_100246ae8(void)

{
  return 0;
}




void FUN_100246af0(void)

{
  return;
}




char * FUN_100246af4(void)

{
  return "main_nav_market";
}




void FUN_100246b00(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100246b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x148))(param_1,1);
  return;
}




void FUN_100246b10(undefined8 param_1)

{
  FUN_1001e6da4(param_1,1);
  return;
}




void FUN_100246b18(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100246b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x148))(param_1,0);
  return;
}




void FUN_100246b28(undefined8 param_1)

{
  FUN_1001e6da4(param_1,0);
  return;
}




long FUN_100246b30(long param_1)

{
  return param_1 + -0x2c88;
}




void FUN_100246b3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100246b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -0x2c88) + 0x148))((long *)(param_1 + -0x2c88),1);
  return;
}




void FUN_100246b54(long param_1)

{
  FUN_1001e6da4(param_1 + -0x2c88,1);
  return;
}




void FUN_100246b64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100246b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -0x2c88) + 0x148))((long *)(param_1 + -0x2c88),0);
  return;
}




void FUN_100246b7c(long param_1)

{
  FUN_1001e6da4(param_1 + -0x2c88,0);
  return;
}




char * FUN_100246b8c(void)

{
  return "main_nav_market";
}




void FUN_100246b98(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




void FUN_100246ba4(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100246ba4_101479a98;
  param_1[0x199] = &PTR_FUN_101461ed0;
  thunk_FUN_100651068(param_1 + 0x200);
  param_1[0x1e2] = &PTR_FUN_1014a7108;
  param_1[0x1f9] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1fc);
  FUN_10064e2bc(param_1 + 0x1e2);
  param_1[0x1c4] = &PTR_FUN_1014a7108;
  param_1[0x1db] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1de);
  FUN_10064e2bc(param_1 + 0x1c4);
  param_1[0x199] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x1b0);
  FUN_10064e2bc(param_1 + 0x199);
  thunk_FUN_100531f9c(param_1 + 0x16b);
  thunk_FUN_100530784(param_1 + 0xc4);
  FUN_10064e2bc(param_1 + 0x90);
  param_1[0x72] = &PTR_FUN_1014a7108;
  param_1[0x89] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8c);
  FUN_10064e2bc(param_1 + 0x72);
  thunk_FUN_1002092b0(param_1 + 0x6d);
  FUN_10026d344(param_1);
  return;
}




void FUN_100246ca4(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 4);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 4;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar6 = *puVar5;
        puVar4[1] = puVar5[1];
        *puVar4 = uVar6;
        lVar3 = lVar3 + -0x10;
        puVar4 = puVar4 + 2;
        puVar5 = puVar5 + 2;
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




void FUN_100246d20(uint *param_1,uint param_2)

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




long * FUN_100246d9c(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = FUN_10026d1f4();
  FUN_10014f4a0(lVar4 + 0x368);
  *param_1 = (long)&PTR_thunk_FUN_100246f28_101478fc8;
  param_1[0x6d] = (long)&PTR_FUN_101479158;
  param_1[0x70] = param_2;
  plVar1 = param_1 + 0x71;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x8f;
  thunk_FUN_1006543ec(plVar2);
  plVar3 = param_1 + 0xc3;
  FUN_10053077c(plVar3,0);
  FUN_10064e264(param_1 + 0x16a);
  thunk_FUN_1006543ec(param_1 + 0x181);
  *(undefined1 *)(param_1 + 0x1bb) = 0;
  param_1[0x1b6] = 0;
  param_1[0x1b5] = 0;
  param_1[0x1b8] = 0;
  param_1[0x1b7] = 0;
  param_1[0x1b9] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar1,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_1005308f8(plVar3,param_1 + 0x181,1);
  FUN_1005308f8(plVar3,param_1 + 0x16a,1);
  FUN_100654488(plVar2,1);
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  FUN_100530be0(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,
                PTR_s_scrollbar_button_fill_top_101854958,
                PTR_s_scrollbar_button_fill_middle_101854960,
                PTR_s_scrollbar_button_fill_bottom_101854968);
  FUN_100530adc(plVar3,0,1);
  *(uint *)((long)param_1 + 0xc8c) = *(uint *)((long)param_1 + 0xc8c) | 0x10;
  (**(code **)(*param_1 + 0x150))(param_1);
  return param_1;
}




long * thunk_FUN_100246d9c(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = FUN_10026d1f4();
  FUN_10014f4a0(lVar4 + 0x368);
  *param_1 = (long)&PTR_thunk_FUN_100246f28_101478fc8;
  param_1[0x6d] = (long)&PTR_FUN_101479158;
  param_1[0x70] = param_2;
  plVar1 = param_1 + 0x71;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x8f;
  thunk_FUN_1006543ec(plVar2);
  plVar3 = param_1 + 0xc3;
  FUN_10053077c(plVar3,0);
  FUN_10064e264(param_1 + 0x16a);
  thunk_FUN_1006543ec(param_1 + 0x181);
  *(undefined1 *)(param_1 + 0x1bb) = 0;
  param_1[0x1b6] = 0;
  param_1[0x1b5] = 0;
  param_1[0x1b8] = 0;
  param_1[0x1b7] = 0;
  param_1[0x1b9] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar1,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_1005308f8(plVar3,param_1 + 0x181,1);
  FUN_1005308f8(plVar3,param_1 + 0x16a,1);
  FUN_100654488(plVar2,1);
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  FUN_100530be0(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,
                PTR_s_scrollbar_button_fill_top_101854958,
                PTR_s_scrollbar_button_fill_middle_101854960,
                PTR_s_scrollbar_button_fill_bottom_101854968);
  FUN_100530adc(plVar3,0,1);
  *(uint *)((long)param_1 + 0xc8c) = *(uint *)((long)param_1 + 0xc8c) | 0x10;
  (**(code **)(*param_1 + 0x150))(param_1);
  return param_1;
}




void FUN_100246f28(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100246f28_101478fc8;
  param_1[0x6d] = &PTR_FUN_101479158;
  FUN_100246fe8();
  if (*(char *)((long)param_1 + 0xdcf) < '\0') {
    operator_delete((void *)param_1[0x1b7]);
  }
  if ((void *)param_1[0x1b6] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1b6]);
    param_1[0x1b6] = 0;
    param_1[0x1b5] = 0;
  }
  FUN_10064e2bc(param_1 + 0x181);
  thunk_FUN_10064e2bc(param_1 + 0x16a);
  thunk_FUN_100530784(param_1 + 0xc3);
  FUN_10064e2bc(param_1 + 0x8f);
  param_1[0x71] = &PTR_FUN_1014a7108;
  param_1[0x88] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8b);
  FUN_10064e2bc(param_1 + 0x71);
  FUN_10014f51c(param_1 + 0x6d);
  FUN_10026d344(param_1);
  return;
}




void FUN_100246fe8(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = 0;
  if (*(long *)(param_1 + 0x380) != 0) {
    lVar3 = *(long *)(param_1 + 0x380) + 0x2c90;
  }
  FUN_100136bd8(lVar3);
  uVar2 = *(uint *)(param_1 + 0xda8);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      lVar3 = *(long *)(param_1 + 0xdb0);
      plVar1 = *(long **)(lVar3 + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar3 = *(long *)(param_1 + 0xdb0);
        uVar2 = *(uint *)(param_1 + 0xda8);
      }
      *(undefined8 *)(lVar3 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if (*(long *)(param_1 + 0xdb0) != 0) {
    *(undefined4 *)(param_1 + 0xda8) = 0;
  }
  return;
}




void thunk_FUN_100246f28(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100246f28_101478fc8;
  param_1[0x6d] = &PTR_FUN_101479158;
  FUN_100246fe8();
  if (*(char *)((long)param_1 + 0xdcf) < '\0') {
    operator_delete((void *)param_1[0x1b7]);
  }
  if ((void *)param_1[0x1b6] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1b6]);
    param_1[0x1b6] = 0;
    param_1[0x1b5] = 0;
  }
  FUN_10064e2bc(param_1 + 0x181);
  thunk_FUN_10064e2bc(param_1 + 0x16a);
  thunk_FUN_100530784(param_1 + 0xc3);
  FUN_10064e2bc(param_1 + 0x8f);
  param_1[0x71] = &PTR_FUN_1014a7108;
  param_1[0x88] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8b);
  FUN_10064e2bc(param_1 + 0x71);
  FUN_10014f51c(param_1 + 0x6d);
  FUN_10026d344(param_1);
  return;
}




void FUN_100247068(long param_1)

{
  FUN_100246f28(param_1 + -0x368);
  return;
}




void FUN_100247070(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100246f28();
  operator_delete(pvVar1);
  return;
}




void FUN_100247084(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100246f28(param_1 + -0x368);
  operator_delete(pvVar1);
  return;
}




void FUN_10024709c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002470a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_1002470a8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002470b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x158))();
  return;
}




void FUN_1002470b4(long param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = 2;
  if (param_2 == 0) {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 0x360) = *(byte *)(param_1 + 0x360) & 0xfd | bVar1;
  FUN_1002470d4();
  return;
}




void FUN_1002470d4(long param_1,int param_2)

{
  long lVar1;
  
  FUN_10064e47c(*(undefined4 *)(param_1 + 0xdd0),0x42200000,param_1 + 0x180);
  if (param_2 != 0) {
    FUN_1002474e8(param_1);
    lVar1 = FUN_10015d3ec();
    FUN_100169cec(lVar1 + 0x18);
    return;
  }
  return;
}




void FUN_100247128(undefined1 param_1 [16],float param_2,long param_3,byte *param_4)

{
  byte *pbVar1;
  size_t sVar2;
  uint uVar3;
  byte bVar4;
  size_t sVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  uVar3 = *(uint *)(param_3 + 0xda8);
  pbVar1 = *(byte **)param_4;
  sVar5 = *(size_t *)(param_4 + 8);
  if (-1 < (char)param_4[0x17]) {
    pbVar1 = param_4;
    sVar5 = (ulong)param_4[0x17];
  }
  if (uVar3 != 0) {
    uVar11 = 0;
    lVar12 = *(long *)(param_3 + 0xdb0);
    do {
      plVar10 = *(long **)(lVar12 + uVar11 * 8);
      if (plVar10 != (long *)0x0) {
        bVar4 = *(byte *)((long)plVar10 + 0x1ad7);
        uVar7 = (ulong)bVar4;
        sVar2 = plVar10[0x359];
        if (-1 < (char)bVar4) {
          sVar2 = uVar7;
        }
        if (sVar2 == sVar5) {
          if ((char)bVar4 < '\0') {
            if ((sVar5 == 0) || (iVar6 = _memcmp((void *)plVar10[0x358],pbVar1,sVar5), iVar6 == 0))
            {
LAB_100247220:
              fVar14 = *(float *)((long)plVar10 + 0x44);
              fVar15 = *(float *)(param_3 + 0x664);
              FUN_10064e3cc(param_3 + 0x478);
              fVar13 = 0.0;
              fVar14 = (float)NEON_fminnm((param_2 * 0.5) / *(float *)(param_3 + 0x664) -
                                          fVar14 * fVar15,0);
              (**(code **)(*plVar10 + 0x48))(plVar10);
              fVar14 = fVar14 - fVar13 * 0.5;
              if (*(float *)(param_3 + 0x65c) == fVar14) {
                return;
              }
              *(float *)(param_3 + 0x65c) = fVar14;
              FUN_1000200a0(param_3 + 0x618);
              return;
            }
          }
          else {
            if (sVar5 == 0) goto LAB_100247220;
            if ((uint)*pbVar1 == ((uint)(void *)plVar10[0x358] & 0xff)) {
              pbVar8 = (byte *)((long)plVar10 + 0x1ac1);
              pbVar9 = pbVar1;
              do {
                uVar7 = uVar7 - 1;
                pbVar9 = pbVar9 + 1;
                if (uVar7 == 0) goto LAB_100247220;
                bVar4 = *pbVar8;
                pbVar8 = pbVar8 + 1;
              } while (bVar4 == *pbVar9);
            }
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar3);
  }
  return;
}




void FUN_1002472bc(long param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  undefined8 local_58;
  
  FUN_10026d404();
  lVar1 = param_1 + 0x478;
  FUN_10064e47c(*(undefined4 *)(param_1 + 0xdd0),*(undefined4 *)(param_1 + 0xdd4),lVar1);
  FUN_10064e47c(*(undefined4 *)(param_1 + 0xdd0),*(undefined4 *)(param_1 + 0xdd4),param_1 + 0x388);
  fVar9 = DAT_101854a80 + -8.0;
  FUN_10064e47c(*(undefined4 *)(param_1 + 0xdd0),fVar9,param_1 + 0xc08);
  if (*(int *)(param_1 + 0xda8) != 0) {
    uVar7 = 0;
    do {
      uVar4 = FUN_100180510(*(undefined8 *)(*(long *)(param_1 + 0xdb0) + uVar7 * 8));
      if (((uVar4 & 1) == 0) &&
         ((uVar4 = FUN_100180510(*(undefined8 *)(*(long *)(param_1 + 0xdb0) + uVar7 * 8)),
          (uVar4 & 1) != 0 ||
          (iVar3 = FUN_1001804d0(*(undefined8 *)(*(long *)(param_1 + 0xdb0) + uVar7 * 8)), iVar3 < 1
          )))) {
        lVar5 = *(long *)(*(long *)(param_1 + 0xdb0) + uVar7 * 8);
        *(uint *)(lVar5 + 0x84) = *(uint *)(lVar5 + 0x84) & 0xfffffffb;
      }
      else {
        lVar5 = *(long *)(*(long *)(param_1 + 0xdb0) + uVar7 * 8);
        *(uint *)(lVar5 + 0x84) = *(uint *)(lVar5 + 0x84) | 4;
        FUN_10017eb50(*(undefined8 *)(*(long *)(param_1 + 0xdb0) + uVar7 * 8));
        plVar6 = *(long **)(*(long *)(param_1 + 0xdb0) + uVar7 * 8);
        fVar8 = *(float *)((long)plVar6 + 0x44);
        bVar2 = false;
        if ((*(float *)(plVar6 + 8) == 0.0) && (bVar2 = false, !NAN(fVar8) && !NAN(fVar9))) {
          bVar2 = fVar8 == fVar9;
        }
        if (!bVar2) {
          *(undefined4 *)(plVar6 + 8) = 0;
          *(float *)((long)plVar6 + 0x44) = fVar9;
          FUN_1000200a0(plVar6);
        }
        local_58 = 0x3f000000;
        (**(code **)(*plVar6 + 0x28))(plVar6,&local_58);
        (**(code **)(**(long **)(*(long *)(param_1 + 0xdb0) + uVar7 * 8) + 0x48))();
        fVar9 = fVar9 + 6.0 + fVar8;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_1 + 0xda8));
    if (*(uint *)(param_1 + 0xda8) != 0) {
      lVar5 = param_1 + 0x618;
      FUN_10064e3cc(lVar1);
      FUN_10053093c(lVar5);
      if (*(float *)(param_1 + 0x65c) != 0.0) {
        *(undefined4 *)(param_1 + 0x65c) = 0;
        FUN_1000200a0(lVar5);
      }
      FUN_100530a94(lVar5);
      fVar8 = fVar9;
      FUN_10064e3cc(lVar1);
      FUN_100530adc(lVar5,0,fVar8 < fVar9);
      FUN_100530ad0(0,0x41f00000,lVar5);
      FUN_100531b88(lVar5);
      goto LAB_1002474b4;
    }
  }
  FUN_100530adc(param_1 + 0x618,0,0);
  FUN_10053093c(0,0,param_1 + 0x618);
LAB_1002474b4:
  if (*(float *)(param_1 + 0x1c0) != 0.0) {
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    FUN_1000200a0(param_1 + 0x180);
  }
  return;
}




void FUN_1002474e8(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  void *local_48 [2];
  char local_31;
  
  if (*(int *)(param_1 + 0xda8) != 0) {
    uVar5 = 0;
    do {
      uVar3 = FUN_10018f308(*(undefined8 *)(*(long *)(param_1 + 0xdb0) + uVar5 * 8));
      if ((uVar3 & 1) == 0) {
        plVar4 = (long *)FUN_10018f300(*(undefined8 *)(*(long *)(param_1 + 0xdb0) + uVar5 * 8));
        plVar1 = (long *)*plVar4;
        if (-1 < *(char *)((long)plVar4 + 0x17)) {
          plVar1 = plVar4;
        }
        FUN_10001549c(local_48,plVar1);
        lVar2 = 0;
        if (*(long *)(param_1 + 0x380) != 0) {
          lVar2 = *(long *)(param_1 + 0x380) + 0x2c90;
        }
        FUN_100136b6c(local_48,lVar2,*(undefined8 *)(*(long *)(param_1 + 0xdb0) + uVar5 * 8));
        if (local_31 < '\0') {
          operator_delete(local_48[0]);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0xda8));
  }
  return;
}




undefined8
FUN_100247598(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  void *pvVar1;
  undefined8 local_58;
  
  pvVar1 = operator_new(0x1b20);
  local_58 = FUN_10017f258(*(undefined4 *)(param_1 + 0xdd0),0x441f0000,pvVar1,param_3,param_4,
                           param_5,param_6,param_7,param_8);
  FUN_100247650(param_1 + 0xda8,&local_58);
  FUN_100642bd8(param_1 + 0xb50,local_58,1);
  FUN_10018f2f8(local_58,param_2);
  return local_58;
}




void FUN_100247650(uint *param_1,undefined8 *param_2)

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
    FUN_100247950(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1002476d0(long *param_1)

{
  if ((*(byte *)(param_1 + 0x6c) >> 1 & 1) != 0) {
    FUN_1002474e8(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000100247704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1);
  return;
}




void FUN_100247708(long *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = (int)param_1[0x1b5];
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      lVar1 = *(long *)(param_1[0x1b6] + lVar3 * 8);
      if (lVar1 != 0) {
        FUN_10017fbf4(lVar1,param_2);
        iVar2 = (int)param_1[0x1b5];
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010024776c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1);
  return;
}




void FUN_100247770(long param_1)

{
  FUN_100247708(param_1 + -0x368);
  return;
}




void FUN_100247778(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 ******ppppppuVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 local_4c;
  undefined8 *****local_48;
  undefined8 uStack_40;
  long local_38;
  
  iVar4 = FUN_1004f1680(param_2);
  if ((iVar4 != 0) && ((*(byte *)(param_1 + 0x360) >> 1 & 1) != 0)) {
    iVar4 = *(int *)(param_2 + 0x28);
    if (iVar4 == -0x18) {
      uVar8 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
      pcVar7 = "MENU_DIALOG_SKU_UNAVAILABLE";
    }
    else if (iVar4 == -0x16) {
      uVar8 = FUN_1004e0150("MENU_DIALOG_BOOST_CANT_AFFORD_TITLE",0);
      pcVar7 = "MENU_DIALOG_BOOST_CANT_AFFORD";
    }
    else {
      if (iVar4 == 0) {
        iVar4 = *(int *)(param_1 + 0xda8);
        if (iVar4 < 1) {
          return;
        }
        lVar11 = 0;
        plVar1 = (long *)(param_2 + 0x48);
        do {
          lVar5 = *(long *)(*(long *)(param_1 + 0xdb0) + lVar11 * 8);
          if (lVar5 != 0) {
            uVar6 = FUN_10017fa94(lVar5,plVar1);
            if ((uVar6 & 1) != 0) {
              if (*(int *)(param_2 + 0x28) == 0) {
                lVar5 = FUN_10015d3ec();
                FUN_100169cec(lVar5 + 0x18);
                thunk_FUN_100180554(*(undefined8 *)(*(long *)(param_1 + 0xdb0) + lVar11 * 8));
                local_48 = (undefined8 ******)0x0;
                uStack_40 = 0;
                local_38 = 0;
                FUN_100180320(*(undefined8 *)(*(long *)(param_1 + 0xdb0) + lVar11 * 8),plVar1,
                              &local_48,&local_4c);
                plVar2 = (long *)*plVar1;
                if (-1 < *(char *)(param_2 + 0x5f)) {
                  plVar2 = plVar1;
                }
                ppppppuVar3 = (undefined8 ******)local_48;
                if (-1 < local_38) {
                  ppppppuVar3 = &local_48;
                }
                FUN_100107850(plVar2,ppppppuVar3,local_4c,0,0);
                if (local_38 < 0) {
                  operator_delete(local_48);
                }
              }
              lVar11 = FUN_10015d3ec();
              FUN_100169cec(lVar11 + 0x18);
              return;
            }
            iVar4 = *(int *)(param_1 + 0xda8);
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 < iVar4);
        return;
      }
      uVar8 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
      pcVar7 = "MENU_DIALOG_PURCHASE_FAILED";
    }
    uVar9 = FUN_1004e0150(pcVar7,0);
    uVar10 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    FUN_1001e3090(uVar8,uVar9,uVar10,0,0);
    return;
  }
  return;
}




void FUN_100247948(long param_1)

{
  FUN_100247778(param_1 + -0x368);
  return;
}




void FUN_100247950(uint *param_1,uint param_2)

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




undefined8 * FUN_1002479cc(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = FUN_100225828();
  FUN_10014f4a0(lVar1 + 0xbf0);
  *param_1 = &PTR_FUN_1014794f0;
  param_1[0x6d] = &PTR_FUN_1014796d8;
  param_1[0x17e] = &PTR_FUN_101479700;
  return param_1;
}




undefined8 * FUN_100247a14(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = FUN_100225828();
  FUN_10014f4a0(lVar1 + 0xbf0);
  *param_1 = &PTR_FUN_1014794f0;
  param_1[0x6d] = &PTR_FUN_1014796d8;
  param_1[0x17e] = &PTR_FUN_101479700;
  return param_1;
}




void FUN_100247a5c(long param_1)

{
  FUN_10014f51c(param_1 + 0xbf0);
  FUN_100225acc(param_1);
  return;
}




void FUN_100247a84(long param_1)

{
  FUN_10014f51c(param_1 + 0xbf0);
  FUN_100225acc(param_1);
  return;
}




void FUN_100247aac(long param_1)

{
  FUN_10014f51c(param_1 + 0x888);
  FUN_100225acc(param_1 + -0x368);
  return;
}




void FUN_100247ad4(long param_1)

{
  FUN_10014f51c();
  FUN_100225acc(param_1 + -0xbf0);
  return;
}




void FUN_100247af8(long param_1)

{
  void *pvVar1;
  
  FUN_10014f51c(param_1 + 0xbf0);
  pvVar1 = (void *)FUN_100225acc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100247b24(long param_1)

{
  void *pvVar1;
  
  FUN_10014f51c(param_1 + 0x888);
  pvVar1 = (void *)FUN_100225acc(param_1 + -0x368);
  operator_delete(pvVar1);
  return;
}




void FUN_100247b50(long param_1)

{
  void *pvVar1;
  
  FUN_10014f51c();
  pvVar1 = (void *)FUN_100225acc(param_1 + -0xbf0);
  operator_delete(pvVar1);
  return;
}




void FUN_100247b78(long *param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  
  if (((char)param_1[0x6e] != '\0') && (iVar1 = FUN_1004f1680(param_2), iVar1 != 0)) {
    uVar3 = *(uint *)(param_1 + 0x6f);
    if (uVar3 != 0) {
      uVar4 = 0;
      do {
        plVar2 = *(long **)(param_1[0x70] + uVar4 * 8);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x20))();
          uVar3 = *(uint *)(param_1 + 0x6f);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar3);
    }
  }
  if (*(char *)((long)param_1 + 0x371) != '\0') {
    *(undefined1 *)((long)param_1 + 0x371) = 0;
                    /* WARNING: Could not recover jumptable at 0x000100247bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x170))(param_1);
    return;
  }
  return;
}




void FUN_100247c00(long param_1)

{
  FUN_100247b78(param_1 + -0xbf0);
  return;
}




long FUN_100247c0c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  
  lVar3 = FUN_10022bca0();
  if (lVar3 != 0) {
    return lVar3;
  }
  bVar6 = *(byte *)(param_2 + 0x17);
  uVar4 = (ulong)bVar6;
  uVar5 = *(ulong *)(param_2 + 8);
  uVar1 = uVar5;
  if (-1 < (char)bVar6) {
    uVar1 = uVar4;
  }
  if (uVar1 == 0xc) {
    iVar2 = std::string::compare(param_2,0,(char *)0xffffffffffffffff,0x1013e56ef);
    if (iVar2 == 0) {
      operator_new(200);
      lVar3 = thunk_FUN_1002043b4();
      goto LAB_100247d1c;
    }
    bVar6 = *(byte *)(param_2 + 0x17);
    uVar4 = (ulong)bVar6;
    uVar5 = *(ulong *)(param_2 + 8);
  }
  uVar1 = uVar5;
  if (-1 < (char)bVar6) {
    uVar1 = uVar4;
  }
  if (uVar1 == 0x11) {
    iVar2 = std::string::compare(param_2,0,(char *)0xffffffffffffffff,0x1013e826d);
    if (iVar2 == 0) {
      operator_new(0xc0);
      lVar3 = thunk_FUN_1001ea64c();
      goto LAB_100247d1c;
    }
    bVar6 = *(byte *)(param_2 + 0x17);
    uVar4 = (ulong)bVar6;
    uVar5 = *(ulong *)(param_2 + 8);
  }
  if (-1 < (char)bVar6) {
    uVar5 = uVar4;
  }
  if (uVar5 != 0x15) {
    return 0;
  }
  iVar2 = std::string::compare(param_2,0,(char *)0xffffffffffffffff,0x1013e827f);
  if (iVar2 != 0) {
    return 0;
  }
  operator_new(0x98);
  lVar3 = thunk_FUN_1001ef238();
LAB_100247d1c:
  return lVar3 + 0x10;
}




long * FUN_100247d2c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  code *local_70;
  long *plStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar6 = (undefined8 *)FUN_10026d1f4();
  *puVar6 = &PTR_thunk_FUN_100246ba4_101479a98;
  FUN_100209260(puVar6 + 0x6d);
  plVar1 = param_1 + 0x72;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x90;
  thunk_FUN_1006543ec(plVar2);
  plVar3 = param_1 + 0xc4;
  FUN_10053077c(plVar3,0);
  plVar4 = param_1 + 0x16b;
  thunk_FUN_100531dc0(plVar4);
  plVar5 = param_1 + 0x199;
  thunk_FUN_10019c2fc(plVar5);
  *(undefined1 *)(param_1 + 0x226) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar1,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_1005308f8(plVar3,param_1[0x6e],1);
  FUN_100642bd8(plVar2,plVar5,1);
  FUN_100642bd8(plVar2,plVar4,1);
  FUN_100654488(plVar2,1);
  FUN_100652cac(plVar1,PTR_s_build___MenuBackground_HeroHub_p_101854990,"full_splash_64");
  FUN_100652dd4(plVar1,&DAT_101158528,2);
  FUN_100530adc(plVar3,0,1);
  FUN_10017db14(plVar4,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  local_48 = FUN_100644a94("UI::EVENT_JUMPLIST_JUMP_TO_INDEX");
  local_70 = FUN_100247ed4;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 0x16c,&local_70);
  FUN_100532130(plVar4,plVar5);
  *(uint *)((long)param_1 + 0xd4c) = *(uint *)((long)param_1 + 0xd4c) & 0xfffffffb;
  return param_1;
}




void FUN_100247ed4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x1130) != '\0') {
    uVar1 = FUN_100644b2c(param_4);
    FUN_1002481ec(param_1,uVar1);
    return;
  }
  return;
}




long * thunk_FUN_100247d2c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  code *pcStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  puVar6 = (undefined8 *)FUN_10026d1f4();
  *puVar6 = &PTR_thunk_FUN_100246ba4_101479a98;
  FUN_100209260(puVar6 + 0x6d);
  plVar1 = param_1 + 0x72;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x90;
  thunk_FUN_1006543ec(plVar2);
  plVar3 = param_1 + 0xc4;
  FUN_10053077c(plVar3,0);
  plVar4 = param_1 + 0x16b;
  thunk_FUN_100531dc0(plVar4);
  plVar5 = param_1 + 0x199;
  thunk_FUN_10019c2fc(plVar5);
  *(undefined1 *)(param_1 + 0x226) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar1,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_1005308f8(plVar3,param_1[0x6e],1);
  FUN_100642bd8(plVar2,plVar5,1);
  FUN_100642bd8(plVar2,plVar4,1);
  FUN_100654488(plVar2,1);
  FUN_100652cac(plVar1,PTR_s_build___MenuBackground_HeroHub_p_101854990,"full_splash_64");
  FUN_100652dd4(plVar1,&DAT_101158528,2);
  FUN_100530adc(plVar3,0,1);
  FUN_10017db14(plVar4,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  uStack_48 = FUN_100644a94("UI::EVENT_JUMPLIST_JUMP_TO_INDEX");
  pcStack_70 = FUN_100247ed4;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 0x16c,&pcStack_70);
  FUN_100532130(plVar4,plVar5);
  *(uint *)((long)param_1 + 0xd4c) = *(uint *)((long)param_1 + 0xd4c) & 0xfffffffb;
  return param_1;
}




void FUN_100247f1c(long *param_1,undefined8 param_2)

{
  if ((int)param_2 != 0) {
    (**(code **)(*param_1 + 0x158))(param_1,1);
  }
                    /* WARNING: Could not recover jumptable at 0x000100247f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(0x3e4ccccd,param_1,param_2,4,1);
  return;
}




void FUN_100247f74(long *param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100247f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x158))(param_1,0);
  return;
}




void FUN_100247f8c(long param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = 2;
  if (param_2 == 0) {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 0x360) = *(byte *)(param_1 + 0x360) & 0xfd | bVar1;
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 0x1130) = 1;
    FUN_100247ff4(param_1);
    return;
  }
  FUN_100209314(param_1 + 0x368);
  *(undefined1 *)(param_1 + 0x1130) = 0;
  return;
}




void FUN_100247ff4(long *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_100131560();
  FUN_100209398(param_1 + 0x6d,uVar1 ^ 1);
  (**(code **)(*param_1 + 0x150))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010024804c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0x6e] + 0x138))(0,(long *)param_1[0x6e],1,4,1);
  return;
}




void FUN_100248050(long param_1)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float local_5c;
  float local_58;
  float local_54;
  
  if (*(char *)(param_1 + 0x1130) != '\0') {
    FUN_10026d404();
    uVar3 = FUN_100126b4c();
    FUN_1001e35ec(param_1,uVar3,&local_54,&local_58,&local_5c);
    fVar6 = local_54 - local_5c;
    fVar5 = local_58 - DAT_101854a80;
    lVar1 = param_1 + 0x480;
    FUN_10064e47c(fVar6,fVar5,lVar1);
    if (*(float *)(param_1 + 0x4c4) != DAT_101854a80) {
      *(float *)(param_1 + 0x4c4) = DAT_101854a80;
      FUN_1000200a0(lVar1);
    }
    FUN_10064e47c(fVar6,fVar5,param_1 + 0x390);
    FUN_1002d94f4(fVar6 + -100.0,*(undefined8 *)(param_1 + 0x370));
    (**(code **)(**(long **)(param_1 + 0x370) + 0x150))();
    lVar4 = *(long *)(param_1 + 0x370);
    bVar2 = false;
    if ((*(float *)(lVar4 + 0x40) == 50.0) && (bVar2 = false, !NAN(*(float *)(lVar4 + 0x44)))) {
      bVar2 = *(float *)(lVar4 + 0x44) == 80.0;
    }
    if (!bVar2) {
      *(undefined8 *)(lVar4 + 0x40) = 0x42a0000042480000;
      FUN_1000200a0();
    }
    FUN_100530a48(param_1 + 0x620,1);
    if (*(float *)(param_1 + 0x664) != 0.0) {
      *(undefined4 *)(param_1 + 0x664) = 0;
      FUN_1000200a0(param_1 + 0x620);
    }
    lVar4 = param_1 + 0xb58;
    FUN_10064e47c(0x42480000,fVar5 + -80.0,lVar4);
    uVar3 = NEON_fmov(0x41f00000,4);
    *(undefined8 *)(param_1 + 0xbb0) = uVar3;
    FUN_100532138(lVar4);
    FUN_10064e5ec(0,0x42200000,lVar4,1,lVar1,1);
  }
  return;
}




void FUN_1002481ec(long param_1,char param_2)

{
  long lVar1;
  undefined1 auStack_38 [8];
  void *local_30;
  ushort local_22;
  
  lVar1 = FUN_1002094e0(param_1 + 0x368);
  if (lVar1 != 0) {
    FUN_10017dbe4(lVar1,param_1 + 0x620,param_1 + 0x480);
  }
  local_22 = (ushort)(byte)(param_2 + 0x41);
  FUN_1004e3120(auStack_38,&local_22);
  FUN_10019c474(param_1 + 0xcc8,auStack_38);
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
  }
  return;
}




void thunk_FUN_100246ba4(void)

{
  FUN_100246ba4();
  return;
}




void FUN_100248268(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100246ba4();
  operator_delete(pvVar1);
  return;
}




void FUN_10024827c(void)

{
  return;
}




long FUN_100248280(long param_1)

{
  undefined8 *puVar1;
  void *local_38 [2];
  char local_21;
  
  puVar1 = (undefined8 *)FUN_1002667c0();
  *puVar1 = &PTR_FUN_101479c18;
  *(undefined8 *)((long)puVar1 + 0x2c5c) = 0;
  FUN_10001549c(local_38,"NEWS");
  std::string::operator=((string *)(param_1 + 0x2c40),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_1004e18bc(&DAT_101d234d8,param_1,0x72bd94bf,FUN_100248318,0);
  return param_1;
}




void FUN_100248318(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100248320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x198))();
  return;
}




long thunk_FUN_100248280(long param_1)

{
  undefined8 *puVar1;
  void *apvStack_38 [2];
  char cStack_21;
  
  puVar1 = (undefined8 *)FUN_1002667c0();
  *puVar1 = &PTR_FUN_101479c18;
  *(undefined8 *)((long)puVar1 + 0x2c5c) = 0;
  FUN_10001549c(apvStack_38,"NEWS");
  std::string::operator=((string *)(param_1 + 0x2c40),(string *)apvStack_38);
  if (cStack_21 < '\0') {
    operator_delete(apvStack_38[0]);
  }
  FUN_1004e18bc(&DAT_101d234d8,param_1,0x72bd94bf,FUN_100248318,0);
  return param_1;
}




void FUN_100248328(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101479c18;
  FUN_1004e1acc(&DAT_101d234d8,param_1,0x72bd94bf);
  FUN_1002667f0(param_1);
  return;
}




void FUN_10024836c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101479c18;
  FUN_1004e1acc(&DAT_101d234d8,param_1,0x72bd94bf);
  pvVar1 = (void *)FUN_1002667f0(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1002483b4(long *param_1,byte *param_2)

{
  short *psVar1;
  size_t sVar2;
  byte bVar3;
  size_t sVar4;
  int iVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  short *psVar11;
  
  bVar3 = param_2[0x17];
  uVar8 = (ulong)bVar3;
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  pbVar9 = *(byte **)param_2;
  pbVar10 = pbVar9;
  sVar4 = *(size_t *)(param_2 + 8);
  if (-1 < (char)bVar3) {
    pbVar10 = param_2;
    sVar4 = uVar8;
  }
  if (sVar4 == sVar2) {
    pbVar6 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar6 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar3 < '\0') {
      if (sVar4 == 0) {
        return;
      }
      iVar5 = _memcmp(pbVar10,pbVar6,sVar4);
      pbVar10 = pbVar9;
      if (iVar5 == 0) {
        return;
      }
    }
    else {
      if (sVar4 == 0) {
        return;
      }
      if ((uint)*pbVar6 == ((uint)pbVar9 & 0xff)) {
        do {
          uVar8 = uVar8 - 1;
          param_2 = param_2 + 1;
          pbVar6 = pbVar6 + 1;
          if (uVar8 == 0) {
            return;
          }
        } while (*param_2 == *pbVar6);
      }
    }
  }
  if (*(uint *)(param_1 + 0x586) != 0) {
    psVar11 = (short *)param_1[0x587];
    psVar1 = psVar11 + (ulong)*(uint *)(param_1 + 0x586) * 8;
    do {
      lVar7 = *(long *)(psVar11 + 4);
      if (lVar7 != 0) {
        bVar3 = *(byte *)(lVar7 + 0x3b7);
        uVar8 = (ulong)bVar3;
        sVar2 = *(size_t *)(lVar7 + 0x3a8);
        if (-1 < (char)bVar3) {
          sVar2 = uVar8;
        }
        if (sVar2 == sVar4) {
          if ((char)bVar3 < '\0') {
            if ((sVar4 == 0) ||
               (iVar5 = _memcmp(*(void **)(lVar7 + 0x3a0),pbVar10,sVar4), iVar5 == 0)) {
LAB_1002484fc:
                    /* WARNING: Could not recover jumptable at 0x000100248524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*param_1 + 0x178))(param_1,(long)*psVar11,&DAT_101d91198);
              return;
            }
          }
          else {
            if (sVar4 == 0) goto LAB_1002484fc;
            if ((uint)*pbVar10 == ((uint)*(void **)(lVar7 + 0x3a0) & 0xff)) {
              pbVar6 = (byte *)(lVar7 + 0x3a1);
              pbVar9 = pbVar10;
              do {
                uVar8 = uVar8 - 1;
                pbVar9 = pbVar9 + 1;
                if (uVar8 == 0) goto LAB_1002484fc;
                bVar3 = *pbVar6;
                pbVar6 = pbVar6 + 1;
              } while (bVar3 == *pbVar9);
            }
          }
        }
      }
      psVar11 = psVar11 + 8;
    } while (psVar11 != psVar1);
  }
  return;
}




void FUN_100248550(long *param_1)

{
  short sVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 ****ppppuVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  byte *pbVar12;
  byte ****ppppbVar13;
  byte *pbVar14;
  long lVar15;
  void *local_200 [2];
  char local_1e9;
  undefined8 ***local_1e8 [2];
  char local_1d1;
  undefined8 ***local_1d0 [2];
  char local_1b9;
  byte ***local_1b8;
  size_t local_1b0;
  byte local_1a1;
  undefined8 ***local_1a0 [2];
  char local_189;
  undefined8 ***local_188;
  size_t local_180;
  byte local_171;
  undefined8 ***local_170;
  size_t local_168;
  byte local_159;
  ulong local_158;
  long local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_150 = 0;
  iVar8 = FUN_100136dac(&local_158);
  if (iVar8 != 0) {
    FUN_100266850(param_1);
    if ((int)local_158 != 0) {
      lVar15 = local_150 + (local_158 & 0xffffffff) * 0x78;
      lVar9 = local_150;
      do {
        (**(code **)(*param_1 + 0x1a0))(param_1,lVar9,lVar9 + 0x48,lVar9 + 0x18,lVar9 + 0x30);
        lVar9 = lVar9 + 0x78;
      } while (lVar9 != lVar15);
    }
  }
  sVar1 = 0;
  if ((short)param_1[0x584] != -1) {
    sVar1 = (short)param_1[0x584];
  }
  (**(code **)(*param_1 + 0x178))(param_1,(int)sVar1,&DAT_101d91198);
  FUN_1001e611c(param_1 + 0x62);
  lVar9 = FUN_10016c2f0();
  if ((0 < *(int *)(lVar9 + 0x38)) || (lVar9 = FUN_10015d3ec(), *(uint *)(lVar9 + 0x55d0) < 3))
  goto LAB_1002489c4;
  FUN_100136e04(&local_170);
  FUN_100136e28(&local_188);
  bVar6 = DAT_101d911a8._7_1_;
  uVar11 = (ulong)local_159;
  sVar2 = local_168;
  if (-1 < (char)local_159) {
    sVar2 = uVar11;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    ppppuVar4 = (undefined8 ****)local_170;
    if (-1 < (char)local_159) {
      ppppuVar4 = &local_170;
    }
    pbVar14 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar14 = (byte *)&DAT_101d91198;
    }
    if ((char)local_159 < '\0') {
      if ((sVar2 != 0) && (iVar8 = _memcmp(ppppuVar4,pbVar14,sVar2), iVar8 != 0))
      goto LAB_1002486e0;
    }
    else if (sVar2 != 0) {
      if ((uint)*pbVar14 == ((uint)local_170 & 0xff)) {
        pbVar12 = (byte *)((ulong)&local_170 | 1);
        do {
          uVar11 = uVar11 - 1;
          pbVar14 = pbVar14 + 1;
          if (uVar11 == 0) goto LAB_1002489a4;
          bVar5 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar5 == *pbVar14);
      }
      goto LAB_1002486e0;
    }
    goto LAB_1002489a4;
  }
LAB_1002486e0:
  uVar11 = (ulong)local_171;
  if (-1 < (char)local_171) {
    local_180 = uVar11;
  }
  if (local_180 == sVar3) {
    ppppuVar4 = (undefined8 ****)local_188;
    if (-1 < (char)local_171) {
      ppppuVar4 = &local_188;
    }
    pbVar14 = DAT_101d91198;
    if (-1 < (char)bVar6) {
      pbVar14 = (byte *)&DAT_101d91198;
    }
    if ((char)local_171 < '\0') {
      if ((sVar3 != 0) && (iVar8 = _memcmp(ppppuVar4,pbVar14,sVar3), iVar8 != 0))
      goto LAB_10024876c;
    }
    else if (sVar3 != 0) {
      if ((uint)*pbVar14 == ((uint)local_188 & 0xff)) {
        pbVar12 = (byte *)((ulong)&local_188 | 1);
        do {
          uVar11 = uVar11 - 1;
          pbVar14 = pbVar14 + 1;
          if (uVar11 == 0) goto LAB_1002489a4;
          bVar6 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar6 == *pbVar14);
      }
      goto LAB_10024876c;
    }
  }
  else {
LAB_10024876c:
    FUN_10012c414(local_1a0);
    ppppuVar4 = (undefined8 ****)local_1a0[0];
    if (-1 < local_189) {
      ppppuVar4 = local_1a0;
    }
    FUN_1004d2cc8(auStack_148,ppppuVar4);
    FUN_10012c538(local_1e8);
    ppppuVar4 = (undefined8 ****)local_1e8[0];
    if (-1 < local_1d1) {
      ppppuVar4 = local_1e8;
    }
    FUN_10001549c(local_1d0,ppppuVar4);
    FUN_10001549c(local_200,"newsfeed_instant_key");
    FUN_1004d2e64(&local_1b8,auStack_148,local_1d0,local_200,&DAT_101d91198);
    bVar6 = local_1a1;
    uVar11 = (ulong)local_159;
    if (-1 < (char)local_159) {
      local_168 = uVar11;
    }
    if (-1 < (char)local_1a1) {
      local_1b0 = (ulong)local_1a1;
    }
    if (local_168 == local_1b0) {
      ppppuVar4 = (undefined8 ****)local_170;
      if (-1 < (char)local_159) {
        ppppuVar4 = &local_170;
      }
      ppppbVar13 = (byte ****)local_1b8;
      if (-1 < (char)local_1a1) {
        ppppbVar13 = &local_1b8;
      }
      if ((char)local_159 < '\0') {
        if (local_168 == 0) goto LAB_100248898;
        iVar8 = _memcmp(ppppuVar4,ppppbVar13,local_168);
        bVar7 = iVar8 == 0;
      }
      else {
        if (local_168 == 0) {
LAB_100248898:
          bVar7 = false;
          goto LAB_10024889c;
        }
        if ((uint)*(byte *)ppppbVar13 != ((uint)local_170 & 0xff)) goto LAB_10024887c;
        pbVar14 = (byte *)((ulong)&local_170 | 1);
        do {
          uVar11 = uVar11 - 1;
          ppppbVar13 = (byte ****)((long)ppppbVar13 + 1);
          if (uVar11 == 0) break;
          bVar5 = *pbVar14;
          pbVar14 = pbVar14 + 1;
        } while (bVar5 == *(byte *)ppppbVar13);
        bVar7 = uVar11 == 0;
      }
      bVar7 = !bVar7;
    }
    else {
LAB_10024887c:
      bVar7 = true;
    }
LAB_10024889c:
    if ((char)bVar6 < '\0') {
      operator_delete(local_1b8);
    }
    if (local_1e9 < '\0') {
      operator_delete(local_200[0]);
    }
    if (local_1b9 < '\0') {
      operator_delete(local_1d0[0]);
    }
    if (local_1d1 < '\0') {
      operator_delete(local_1e8[0]);
    }
    if (bVar7) {
      FUN_10012c538(local_1d0);
      ppppuVar4 = (undefined8 ****)local_1d0[0];
      if (-1 < local_1b9) {
        ppppuVar4 = local_1d0;
      }
      FUN_10001549c(&local_1b8,ppppuVar4);
      FUN_10001549c(local_1e8,"newsfeed_instant_key");
      FUN_1004d2f00(auStack_148,&local_1b8,local_1e8,&local_170);
      if (local_1d1 < '\0') {
        operator_delete(local_1e8[0]);
      }
      if ((char)local_1a1 < '\0') {
        operator_delete(local_1b8);
      }
      if (local_1b9 < '\0') {
        operator_delete(local_1d0[0]);
      }
      uVar10 = FUN_10002f320();
      FUN_10001549c(&local_1b8,"vainglory://News");
      FUN_1000312cc(uVar10,&local_1b8,&local_188,0,0);
      if ((char)local_1a1 < '\0') {
        operator_delete(local_1b8);
      }
    }
    if (local_189 < '\0') {
      operator_delete(local_1a0[0]);
    }
  }
LAB_1002489a4:
  if ((char)local_171 < '\0') {
    operator_delete(local_188);
  }
  if ((char)local_159 < '\0') {
    operator_delete(local_170);
  }
LAB_1002489c4:
  FUN_100135c64(&local_158,1);
  if (*(long *)PTR____stack_chk_guard_101444218 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_100248a04(long *param_1,int param_2)

{
  FUN_100266988();
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100248a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x198))(param_1);
    return;
  }
  return;
}




long * FUN_100248a44(long param_1,undefined8 param_2,long *param_3,long *param_4)

{
  long *plVar1;
  void *pvVar2;
  short *psVar3;
  undefined4 uVar4;
  short sVar5;
  size_t sVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 **ppuVar10;
  undefined1 **ppuVar11;
  ulong uVar12;
  undefined4 uVar13;
  undefined1 *local_a0;
  size_t local_98;
  ulong local_90;
  undefined1 auStack_88 [8];
  void *local_80;
  short local_78;
  undefined6 uStack_76;
  long *local_70;
  char local_61;
  
  ppuVar10 = &local_a0;
  ppuVar11 = &local_a0;
  plVar8 = operator_new(0xbf0);
  FUN_100248cb4();
  uVar13 = *(undefined4 *)(param_1 + 0x2c60);
  FUN_10064e47c(*(undefined4 *)(param_1 + 0x2c5c));
  plVar1 = (long *)*param_4;
  if (-1 < *(char *)((long)param_4 + 0x17)) {
    plVar1 = param_4;
  }
  FUN_10001549c(&local_78,plVar1);
  FUN_10022b4d4(plVar8,param_2,&local_78,(void *)(param_1 + 0x2c40));
  if (local_61 < '\0') {
    operator_delete((void *)CONCAT62(uStack_76,local_78));
  }
  (**(code **)(*plVar8 + 0x178))(plVar8);
  FUN_10022badc(plVar8,param_4);
  uVar4 = *(undefined4 *)(param_1 + 0x2c30);
  plVar1 = (long *)*param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    plVar1 = param_3;
  }
  FUN_1004e3120(auStack_88,plVar1);
  iVar7 = FUN_1004e3624(auStack_88);
  if (iVar7 != 0) {
    plVar1 = (long *)*param_4;
    if (-1 < *(char *)((long)param_4 + 0x17)) {
      plVar1 = param_4;
    }
    uVar9 = FUN_1004e0150(plVar1,0);
    FUN_1000153b4(auStack_88,uVar9);
  }
  sVar5 = (short)uVar4;
  FUN_1001e6e9c(param_1,(int)sVar5,auStack_88,plVar8);
  local_a0 = (undefined1 *)0x0;
  local_98 = 0;
  local_90 = 0;
  pvVar2 = *(void **)(param_1 + 0x2c40);
  sVar6 = *(size_t *)(param_1 + 0x2c48);
  if (-1 < (char)*(byte *)(param_1 + 0x2c57)) {
    pvVar2 = (void *)(param_1 + 0x2c40);
    sVar6 = (ulong)*(byte *)(param_1 + 0x2c57);
  }
  if (0xffffffffffffffef < sVar6 + 1) {
                    /* WARNING: Subroutine does not return */
    FUN_100248ca8();
  }
  if (sVar6 + 1 < 0x17) {
    local_90 = sVar6 << 0x38;
    if (sVar6 == 0) goto LAB_100248bd8;
  }
  else {
    uVar12 = sVar6 + 0x11 & 0xfffffffffffffff0;
    ppuVar10 = operator_new(uVar12);
    local_90 = uVar12 | 0x8000000000000000;
    local_a0 = (undefined1 *)ppuVar10;
    local_98 = sVar6;
  }
  _memcpy(ppuVar10,pvVar2,sVar6);
  ppuVar11 = ppuVar10;
LAB_100248bd8:
  *(undefined1 *)((long)ppuVar11 + sVar6) = 0;
  std::string::append((char *)&local_a0,0x1013dcc67);
  FUN_1000e8b18(&local_78,&local_a0,param_4);
  psVar3 = (short *)CONCAT62(uStack_76,local_78);
  if (-1 < local_61) {
    psVar3 = &local_78;
  }
  FUN_1001e68a4(param_1 + 0x310,(int)sVar5,psVar3);
  if (local_61 < '\0') {
    operator_delete((void *)CONCAT62(uStack_76,local_78));
  }
  if ((long)local_90 < 0) {
    operator_delete(local_a0);
  }
  FUN_100642888(param_1 + 0x310,1,0,1,1);
  *(undefined4 *)(plVar8 + 0x7b) = uVar13;
  local_78 = sVar5;
  local_70 = plVar8;
  FUN_1002468bc(param_1 + 0x2c30,&local_78);
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
  }
  return plVar8;
}




void FUN_100248ca8(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




void FUN_100248cb4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_100225828();
  *puVar1 = &PTR_thunk_FUN_100225acc_101479dd0;
  puVar1[0x6d] = &PTR_FUN_101479fb0;
  return;
}




void FUN_100248ce0(long param_1)

{
  FUN_100225acc(param_1 + -0x368);
  return;
}




void FUN_100248ce8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100225acc();
  operator_delete(pvVar1);
  return;
}




void FUN_100248cfc(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100225acc(param_1 + -0x368);
  operator_delete(pvVar1);
  return;
}




void FUN_10024b30c(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 4;
  uVar1 = 0;
  if (param_2 == 0) {
    uVar1 = uVar3;
  }
  *(uint *)(param_1 + 0x2d24) = *(uint *)(param_1 + 0x2d24) & 0xfffffffb | uVar1;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  *(uint *)(param_1 + 0x7dc4) = *(uint *)(param_1 + 0x7dc4) & 0xfffffffb | uVar3;
  iVar2 = FUN_100131560();
  uVar1 = 0;
  if (iVar2 == 0) {
    uVar1 = uVar3;
  }
  *(uint *)(param_1 + 0x25584) = *(uint *)(param_1 + 0x25584) & 0xfffffffb | uVar1;
  return;
}




void FUN_10024b388(long param_1)

{
  FUN_10018e440(param_1 + 0xb0e8,0);
  FUN_10018e440(param_1 + 0xda18,0);
  return;
}




void thunk_FUN_10024e69c(long param_1)

{
  long lVar1;
  uint *puVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int *piVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  string *psVar12;
  uint uVar13;
  int *piVar14;
  undefined8 *puVar15;
  long lVar16;
  void *pvStack_68;
  void *pvStack_60;
  char cStack_51;
  
  lVar1 = param_1 + 0xb0e8;
  FUN_10018e8a8(lVar1);
  piVar6 = (int *)FUN_10034ccb8();
  uVar7 = FUN_10034cdd0();
  if ((uVar7 & 1) == 0) {
    bVar4 = FUN_10034ce60(piVar6);
  }
  else {
    bVar4 = 1;
  }
  *(byte *)(param_1 + 0x2ceab) = bVar4;
  *(bool *)(param_1 + 0x2ceac) = *piVar6 == 0;
  *(undefined8 *)(param_1 + 0x2ced8) = 0;
  puVar15 = *(undefined8 **)(piVar6 + 10);
  piVar14 = (int *)*puVar15;
  if (piVar14 != (int *)0x0) {
    iVar5 = 0;
    lVar11 = 0;
    do {
      lVar16 = lVar11;
      iVar3 = *piVar14;
      *(int *)(param_1 + 0x2cee0 + lVar16 * 4) = iVar3;
      iVar5 = iVar5 + iVar3;
      if ((bVar4 & 1) != 0) break;
      piVar14 = (int *)puVar15[lVar16 + 1];
      lVar11 = lVar16 + 1;
    } while (piVar14 != (int *)0x0);
    *(int *)(param_1 + 0x2ced8) = (int)lVar16 + 1;
    *(int *)(param_1 + 0x2cedc) = iVar5;
  }
  FUN_100250e58(param_1);
  uVar7 = FUN_10034cdd0(piVar6);
  if ((((uVar7 & 1) != 0) || (iVar5 = FUN_10034ce60(piVar6), iVar5 != 0)) &&
     (*(uint *)(param_1 + 0x2cedc) < *(uint *)(param_1 + 0x2ce98))) {
    uVar8 = FUN_1004e0150("MENU_PARTY_CANT_SWITCH_TYPE_TITLE",0);
    uVar9 = FUN_1004e0150("MENU_PARTY_CANT_SWITCH_TYPE_MSG",0);
    uVar10 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    FUN_1001e3090(uVar8,uVar9,uVar10,0,0);
    FUN_10018e754(lVar1,param_1 + 0x2cec0,0,0);
    return;
  }
  puVar2 = (uint *)(param_1 + 0xda9c);
  if (*(char *)(param_1 + 0x2cea8) == '\0') {
    uVar7 = FUN_100131560();
    if ((uVar7 & 1) == 0) {
      FUN_10034cd68(&pvStack_68,piVar6);
      FUN_1006513c0(param_1 + 0x84a0,&pvStack_68);
      if (pvStack_60 != (void *)0x0) {
        operator_delete__(pvStack_60);
      }
    }
    FUN_10065179c(*(undefined4 *)(param_1 + 0x2cf38),0,0x3f800000,param_1 + 0x84a0);
    FUN_100251a50(param_1);
  }
  else {
    if (*(char *)(param_1 + 0x2ceab) == '\0') {
      FUN_1002538d8(param_1);
      lVar11 = FUN_10015d3ec();
      if (*(int *)(lVar11 + 0x55cc) == 2) {
        uVar8 = FUN_10015d3ec();
        FUN_100165784(uVar8,1);
      }
    }
    else {
      uVar13 = *(uint *)(param_1 + 0x105ac);
      if ((uVar13 & 0x7f80) != 0) {
        *(uint *)(param_1 + 0x105ac) = uVar13 & 0xffff807f;
        FUN_1000200a0(param_1 + 0x10528);
        uVar13 = *(uint *)(param_1 + 0x105ac);
      }
      *(uint *)(param_1 + 0x105ac) = uVar13 | 4;
      FUN_100642324(param_1 + 0x10528);
    }
    FUN_10034cd38(&pvStack_68,piVar6);
    FUN_100181af8(param_1 + 0x107d0,&pvStack_68);
    if (pvStack_60 != (void *)0x0) {
      operator_delete__(pvStack_60);
    }
  }
  lVar11 = FUN_10015d3ec();
  if (*(char *)(lVar11 + 0x567a) != '\0') {
    uVar8 = FUN_10034cd28(piVar6);
    FUN_10001549c(&pvStack_68,uVar8);
    lVar11 = FUN_10031ffe0();
    if (*(int *)(lVar11 + 0x60) != 0) {
      puVar15 = *(undefined8 **)(lVar11 + 0x68);
      do {
        if ((code *)*puVar15 == (code *)0x0) {
          (*(code *)puVar15[3])(puVar15[2],&pvStack_68);
        }
        else {
          (*(code *)*puVar15)(&pvStack_68);
        }
        puVar15 = puVar15 + 4;
      } while (puVar15 !=
               (undefined8 *)(*(long *)(lVar11 + 0x68) + (ulong)*(uint *)(lVar11 + 0x60) * 0x20));
    }
    if (cStack_51 < '\0') {
      operator_delete(pvStack_68);
    }
  }
  iVar5 = FUN_10034ce60(piVar6);
  uVar8 = FUN_10024e660(param_1);
  FUN_100530adc(param_1 + 0x7f68,0,uVar8);
  if (*(float *)(param_1 + 0x7fac) != 0.0) {
    *(float *)(param_1 + 0x7fac) = 0.0;
    FUN_1000200a0(param_1 + 0x7f68);
  }
  if (iVar5 == 0) {
    uVar13 = 0;
    *puVar2 = *puVar2 & 0xfffffffb;
  }
  else {
    *puVar2 = *puVar2 & 0xfffffffb | (uint)*(byte *)(param_1 + 0x2cea8) << 2;
    uVar13 = (uint)(*(byte *)(param_1 + 0x2cea8) == 0) << 2;
  }
  *(uint *)(param_1 + 0x8654) = *(uint *)(param_1 + 0x8654) & 0xfffffffb | uVar13;
  FUN_10024bf9c(param_1);
  if (*(char *)(param_1 + 0x2cea8) != '\0') {
    uVar8 = FUN_10015d3ec();
    iVar5 = *piVar6;
    if ((*(byte *)puVar2 >> 2 & 1) == 0) {
      puVar15 = &DAT_101d91198;
    }
    else {
      puVar15 = (undefined8 *)FUN_10018e8a8(param_1 + 0xda18);
    }
    lVar11 = FUN_10031ffe0();
    FUN_100165fc0(uVar8,iVar5,puVar15,lVar11 + 0x88);
  }
  psVar12 = (string *)FUN_10018e8a8(lVar1);
  std::string::operator=((string *)(param_1 + 0x2cec0),psVar12);
  uVar8 = FUN_10031ffe0();
  FUN_1003211c4(uVar8,*(undefined4 *)(param_1 + 0x2cee0));
  return;
}




void FUN_10024b3c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1002535c8(param_1,param_4,param_5);
  return;
}




void thunk_FUN_10024e69c(long param_1)

{
  long lVar1;
  uint *puVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int *piVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  string *psVar12;
  uint uVar13;
  int *piVar14;
  undefined8 *puVar15;
  long lVar16;
  void *pvStack_68;
  void *pvStack_60;
  char cStack_51;
  
  lVar1 = param_1 + 0xb0e8;
  FUN_10018e8a8(lVar1);
  piVar6 = (int *)FUN_10034ccb8();
  uVar7 = FUN_10034cdd0();
  if ((uVar7 & 1) == 0) {
    bVar4 = FUN_10034ce60(piVar6);
  }
  else {
    bVar4 = 1;
  }
  *(byte *)(param_1 + 0x2ceab) = bVar4;
  *(bool *)(param_1 + 0x2ceac) = *piVar6 == 0;
  *(undefined8 *)(param_1 + 0x2ced8) = 0;
  puVar15 = *(undefined8 **)(piVar6 + 10);
  piVar14 = (int *)*puVar15;
  if (piVar14 != (int *)0x0) {
    iVar5 = 0;
    lVar11 = 0;
    do {
      lVar16 = lVar11;
      iVar3 = *piVar14;
      *(int *)(param_1 + 0x2cee0 + lVar16 * 4) = iVar3;
      iVar5 = iVar5 + iVar3;
      if ((bVar4 & 1) != 0) break;
      piVar14 = (int *)puVar15[lVar16 + 1];
      lVar11 = lVar16 + 1;
    } while (piVar14 != (int *)0x0);
    *(int *)(param_1 + 0x2ced8) = (int)lVar16 + 1;
    *(int *)(param_1 + 0x2cedc) = iVar5;
  }
  FUN_100250e58(param_1);
  uVar7 = FUN_10034cdd0(piVar6);
  if ((((uVar7 & 1) != 0) || (iVar5 = FUN_10034ce60(piVar6), iVar5 != 0)) &&
     (*(uint *)(param_1 + 0x2cedc) < *(uint *)(param_1 + 0x2ce98))) {
    uVar8 = FUN_1004e0150("MENU_PARTY_CANT_SWITCH_TYPE_TITLE",0);
    uVar9 = FUN_1004e0150("MENU_PARTY_CANT_SWITCH_TYPE_MSG",0);
    uVar10 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    FUN_1001e3090(uVar8,uVar9,uVar10,0,0);
    FUN_10018e754(lVar1,param_1 + 0x2cec0,0,0);
    return;
  }
  puVar2 = (uint *)(param_1 + 0xda9c);
  if (*(char *)(param_1 + 0x2cea8) == '\0') {
    uVar7 = FUN_100131560();
    if ((uVar7 & 1) == 0) {
      FUN_10034cd68(&pvStack_68,piVar6);
      FUN_1006513c0(param_1 + 0x84a0,&pvStack_68);
      if (pvStack_60 != (void *)0x0) {
        operator_delete__(pvStack_60);
      }
    }
    FUN_10065179c(*(undefined4 *)(param_1 + 0x2cf38),0,0x3f800000,param_1 + 0x84a0);
    FUN_100251a50(param_1);
  }
  else {
    if (*(char *)(param_1 + 0x2ceab) == '\0') {
      FUN_1002538d8(param_1);
      lVar11 = FUN_10015d3ec();
      if (*(int *)(lVar11 + 0x55cc) == 2) {
        uVar8 = FUN_10015d3ec();
        FUN_100165784(uVar8,1);
      }
    }
    else {
      uVar13 = *(uint *)(param_1 + 0x105ac);
      if ((uVar13 & 0x7f80) != 0) {
        *(uint *)(param_1 + 0x105ac) = uVar13 & 0xffff807f;
        FUN_1000200a0(param_1 + 0x10528);
        uVar13 = *(uint *)(param_1 + 0x105ac);
      }
      *(uint *)(param_1 + 0x105ac) = uVar13 | 4;
      FUN_100642324(param_1 + 0x10528);
    }
    FUN_10034cd38(&pvStack_68,piVar6);
    FUN_100181af8(param_1 + 0x107d0,&pvStack_68);
    if (pvStack_60 != (void *)0x0) {
      operator_delete__(pvStack_60);
    }
  }
  lVar11 = FUN_10015d3ec();
  if (*(char *)(lVar11 + 0x567a) != '\0') {
    uVar8 = FUN_10034cd28(piVar6);
    FUN_10001549c(&pvStack_68,uVar8);
    lVar11 = FUN_10031ffe0();
    if (*(int *)(lVar11 + 0x60) != 0) {
      puVar15 = *(undefined8 **)(lVar11 + 0x68);
      do {
        if ((code *)*puVar15 == (code *)0x0) {
          (*(code *)puVar15[3])(puVar15[2],&pvStack_68);
        }
        else {
          (*(code *)*puVar15)(&pvStack_68);
        }
        puVar15 = puVar15 + 4;
      } while (puVar15 !=
               (undefined8 *)(*(long *)(lVar11 + 0x68) + (ulong)*(uint *)(lVar11 + 0x60) * 0x20));
    }
    if (cStack_51 < '\0') {
      operator_delete(pvStack_68);
    }
  }
  iVar5 = FUN_10034ce60(piVar6);
  uVar8 = FUN_10024e660(param_1);
  FUN_100530adc(param_1 + 0x7f68,0,uVar8);
  if (*(float *)(param_1 + 0x7fac) != 0.0) {
    *(float *)(param_1 + 0x7fac) = 0.0;
    FUN_1000200a0(param_1 + 0x7f68);
  }
  if (iVar5 == 0) {
    uVar13 = 0;
    *puVar2 = *puVar2 & 0xfffffffb;
  }
  else {
    *puVar2 = *puVar2 & 0xfffffffb | (uint)*(byte *)(param_1 + 0x2cea8) << 2;
    uVar13 = (uint)(*(byte *)(param_1 + 0x2cea8) == 0) << 2;
  }
  *(uint *)(param_1 + 0x8654) = *(uint *)(param_1 + 0x8654) & 0xfffffffb | uVar13;
  FUN_10024bf9c(param_1);
  if (*(char *)(param_1 + 0x2cea8) != '\0') {
    uVar8 = FUN_10015d3ec();
    iVar5 = *piVar6;
    if ((*(byte *)puVar2 >> 2 & 1) == 0) {
      puVar15 = &DAT_101d91198;
    }
    else {
      puVar15 = (undefined8 *)FUN_10018e8a8(param_1 + 0xda18);
    }
    lVar11 = FUN_10031ffe0();
    FUN_100165fc0(uVar8,iVar5,puVar15,lVar11 + 0x88);
  }
  psVar12 = (string *)FUN_10018e8a8(lVar1);
  std::string::operator=((string *)(param_1 + 0x2cec0),psVar12);
  uVar8 = FUN_10031ffe0();
  FUN_1003211c4(uVar8,*(undefined4 *)(param_1 + 0x2cee0));
  return;
}




void FUN_10024b3d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_100252e40(param_1,param_2,param_5);
  return;
}




void FUN_10024b3dc(undefined8 param_1)

{
  undefined8 in_x4;
  
  FUN_100252f24(param_1,in_x4);
  return;
}




void FUN_10024b3e4(long param_1)

{
  undefined8 in_x4;
  
  FUN_1002531fc(param_1,*(undefined4 *)(param_1 + 0x2ce9c),in_x4);
  return;
}




void FUN_10024b400(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10015d3ec();
  FUN_100165784(uVar1,1);
  FUN_1001b4c0c(param_1 + 0x107d0,1);
  return;
}




void FUN_10024b438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_10025383c(param_1,param_2,param_5);
  return;
}




void FUN_10024b440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10024f848(param_1,param_4);
  return;
}




void FUN_10024b44c(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  *param_1 = &PTR_thunk_FUN_10024b44c_101479fd8;
  param_1[0x586] = &PTR_FUN_10147a228;
  param_1[0x589] = &PTR_FUN_10147a5c0;
  param_1[0x58a] = &PTR_FUN_10147a620;
  param_1[0x58b] = &PTR_FUN_10147a678;
  FUN_100111728(param_1 + 0x58b);
  FUN_100186730(param_1 + 0x519d,1);
  FUN_10024bd68(param_1);
  iVar2 = FUN_10015d3f8();
  if (iVar2 != 0) {
    uVar3 = FUN_10015d3ec();
    FUN_100167cd4(uVar3,0);
  }
  iVar2 = FUN_100126b8c();
  if (iVar2 != 0) {
    lVar4 = FUN_10031ffe0();
    uVar1 = *(uint *)(lVar4 + 0x40);
    if (uVar1 != 0) {
      lVar6 = (ulong)uVar1 << 5;
      puVar5 = *(undefined8 **)(lVar4 + 0x48);
      do {
        if ((undefined8 *)*puVar5 == param_1 + 0x58d) {
          FUN_1000c044c((uint *)(lVar4 + 0x40),puVar5,puVar5 + 4);
          break;
        }
        lVar6 = lVar6 + -0x20;
        puVar5 = puVar5 + 4;
      } while (lVar6 != 0);
    }
  }
  if (*(char *)((long)param_1 + 0x2cf67) < '\0') {
    operator_delete((void *)param_1[0x59ea]);
  }
  if (*(char *)((long)param_1 + 0x2ced7) < '\0') {
    operator_delete((void *)param_1[23000]);
  }
  if (*(char *)((long)param_1 + 0x2ce5f) < '\0') {
    operator_delete((void *)param_1[0x59c9]);
  }
  thunk_FUN_10001653c(param_1 + 0x59be);
  FUN_100156c78(param_1 + 0x59bc,1);
  FUN_100110778(param_1 + 0x59ba,1);
  thunk_FUN_100186554(param_1 + 0x519d);
  FUN_10064221c(param_1 + 0x518c);
  thunk_FUN_100651068(param_1 + 0x5166);
  thunk_FUN_100651068(param_1 + 0x5140);
  if ((void *)param_1[0x513f] != (void *)0x0) {
    operator_delete__((void *)param_1[0x513f]);
    param_1[0x513f] = 0;
    param_1[0x513e] = 0;
  }
  if ((void *)param_1[0x513d] != (void *)0x0) {
    operator_delete__((void *)param_1[0x513d]);
    param_1[0x513d] = 0;
    param_1[0x513c] = 0;
  }
  if ((void *)param_1[0x513b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x513b]);
    param_1[0x513b] = 0;
    param_1[0x513a] = 0;
  }
  param_1[0x507c] = &PTR_FUN_10145f300;
  param_1[0x5116] = &PTR_FUN_1014a7108;
  param_1[0x512d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5130);
  FUN_10064e2bc(param_1 + 0x5116);
  param_1[0x50f8] = &PTR_FUN_1014a7108;
  param_1[0x510f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5112);
  FUN_10064e2bc(param_1 + 0x50f8);
  param_1[0x50da] = &PTR_FUN_1014a7108;
  param_1[0x50f1] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x50f4);
  FUN_10064e2bc(param_1 + 0x50da);
  FUN_10064221c(param_1 + 0x50c9);
  FUN_10003bec8(param_1 + 0x507c);
  param_1[0x505e] = &PTR_FUN_1014a7108;
  param_1[0x5075] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5078);
  FUN_10064e2bc(param_1 + 0x505e);
  thunk_FUN_100651068(param_1 + 0x5038);
  thunk_FUN_100651068(param_1 + 0x5012);
  thunk_FUN_100651068(param_1 + 0x4fec);
  FUN_10064221c(param_1 + 0x4fdb);
  param_1[0x4f1d] = &PTR_FUN_10145f300;
  param_1[0x4fb7] = &PTR_FUN_1014a7108;
  param_1[0x4fce] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4fd1);
  FUN_10064e2bc(param_1 + 0x4fb7);
  param_1[0x4f99] = &PTR_FUN_1014a7108;
  param_1[0x4fb0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4fb3);
  FUN_10064e2bc(param_1 + 0x4f99);
  param_1[0x4f7b] = &PTR_FUN_1014a7108;
  param_1[0x4f92] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4f95);
  FUN_10064e2bc(param_1 + 0x4f7b);
  FUN_10064221c(param_1 + 0x4f6a);
  FUN_10003bec8(param_1 + 0x4f1d);
  param_1[0x4eff] = &PTR_FUN_1014a7108;
  param_1[0x4f16] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4f19);
  FUN_10064e2bc(param_1 + 0x4eff);
  thunk_FUN_100651068(param_1 + 0x4ed9);
  thunk_FUN_100651068(param_1 + 0x4eb3);
  thunk_FUN_100651068(param_1 + 0x4e8d);
  FUN_10064221c(param_1 + 0x4e7c);
  param_1[0x4dbe] = &PTR_FUN_10145f300;
  param_1[0x4e58] = &PTR_FUN_1014a7108;
  param_1[0x4e6f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4e72);
  FUN_10064e2bc(param_1 + 0x4e58);
  param_1[0x4e3a] = &PTR_FUN_1014a7108;
  param_1[0x4e51] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4e54);
  FUN_10064e2bc(param_1 + 0x4e3a);
  param_1[0x4e1c] = &PTR_FUN_1014a7108;
  param_1[0x4e33] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4e36);
  FUN_10064e2bc(param_1 + 0x4e1c);
  FUN_10064221c(param_1 + 0x4e0b);
  FUN_10003bec8(param_1 + 0x4dbe);
  param_1[0x4da0] = &PTR_FUN_1014a7108;
  param_1[0x4db7] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4dba);
  FUN_10064e2bc(param_1 + 0x4da0);
  thunk_FUN_100651068(param_1 + 0x4d7a);
  thunk_FUN_100651068(param_1 + 0x4d54);
  thunk_FUN_100651068(param_1 + 0x4d2e);
  FUN_10064221c(param_1 + 0x4d1d);
  thunk_FUN_100530784(param_1 + 0x4c76);
  FUN_10064e2bc(param_1 + 0x4c42);
  FUN_10064221c(param_1 + 0x4c31);
  thunk_FUN_100651068(param_1 + 0x4c0b);
  thunk_FUN_1001c859c(param_1 + 0x4ab1);
  FUN_10064221c(param_1 + 0x4aa0);
  thunk_FUN_1001a040c(param_1 + 0x483b);
  puVar5 = param_1 + 0x45d7;
  lVar4 = -0x10bc0;
  do {
    lVar6 = thunk_FUN_1001a040c(puVar5);
    puVar5 = (undefined8 *)(lVar6 + -0x1320);
    lVar4 = lVar4 + 0x1320;
  } while (lVar4 != 0);
  thunk_FUN_10064e2bc(param_1 + 0x26ac);
  param_1[0x268e] = &PTR_FUN_1014a7108;
  param_1[0x26a5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x26a8);
  FUN_10064e2bc(param_1 + 0x268e);
  thunk_FUN_100651068(param_1 + 0x2668);
  FUN_10003bd40(param_1 + 0x23b1);
  FUN_10003bd40(param_1 + 0x20fa);
  thunk_FUN_100651068(param_1 + 0x20d4);
  param_1[0x20b6] = &PTR_FUN_1014a7108;
  param_1[0x20cd] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x20d0);
  FUN_10064e2bc(param_1 + 0x20b6);
  FUN_10064221c(param_1 + 0x20a5);
  param_1[0x2087] = &PTR_FUN_1014a7108;
  param_1[0x209e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x20a1);
  FUN_10064e2bc(param_1 + 0x2087);
  param_1[0x2069] = &PTR_FUN_1014a7108;
  param_1[0x2080] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2083);
  FUN_10064e2bc(param_1 + 0x2069);
  thunk_FUN_10018d500(param_1 + 0x1b43);
  thunk_FUN_10018d500(param_1 + 0x161d);
  puVar5 = param_1 + 0x15f7;
  lVar4 = -0x1300;
  do {
    lVar6 = thunk_FUN_100651068(puVar5);
    puVar5 = (undefined8 *)(lVar6 + -0x130);
    lVar4 = lVar4 + 0x130;
  } while (lVar4 != 0);
  thunk_FUN_100651068(param_1 + 0x1397);
  FUN_10003bd40(param_1 + 0x10e0);
  thunk_FUN_100651068(param_1 + 0x10ba);
  thunk_FUN_100651068(param_1 + 0x1094);
  thunk_FUN_100530784(param_1 + 0xfed);
  FUN_10064e2bc(param_1 + 0xfb9);
  FUN_10064221c(param_1 + 0xfa8);
  thunk_FUN_10064e2bc(param_1 + 0xf91);
  param_1[0xf73] = &PTR_FUN_1014a7108;
  param_1[0xf8a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xf8d);
  FUN_10064e2bc(param_1 + 0xf73);
  param_1[0xf55] = &PTR_FUN_1014a7108;
  param_1[0xf6c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xf6f);
  FUN_10064e2bc(param_1 + 0xf55);
  FUN_10064221c(param_1 + 0xf44);
  thunk_FUN_100651068(param_1 + 0xf1e);
  thunk_FUN_100651068(param_1 + 0xef8);
  thunk_FUN_10064e2bc(param_1 + 0xee1);
  param_1[0xb43] = &PTR_FUN_10145f480;
  if ((void *)param_1[0xedb] != (void *)0x0) {
    operator_delete__((void *)param_1[0xedb]);
    param_1[0xedb] = 0;
    param_1[0xeda] = 0;
  }
  if ((void *)param_1[0xed9] != (void *)0x0) {
    operator_delete__((void *)param_1[0xed9]);
    param_1[0xed9] = 0;
    param_1[0xed8] = 0;
  }
  if ((void *)param_1[0xed7] != (void *)0x0) {
    operator_delete__((void *)param_1[0xed7]);
    param_1[0xed7] = 0;
    param_1[0xed6] = 0;
  }
  thunk_FUN_100651068(param_1 + 0xeb0);
  FUN_10064e2bc(param_1 + 0xe95);
  FUN_10064e2bc(param_1 + 0xe7a);
  FUN_10003bd40(param_1 + 0xbc3);
  FUN_100186088(param_1 + 0xb43);
  thunk_FUN_100651068(param_1 + 0xb1d);
  FUN_10003bd40(param_1 + 0x866);
  FUN_10003bd40(param_1 + 0x5af);
  FUN_10064e2bc(param_1 + 0x594);
  FUN_100218f80(param_1 + 0x58d);
  FUN_10014f51c(param_1 + 0x586);
  FUN_1001e6bb0(param_1);
  return;
}




void FUN_10024bd68(long param_1)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  
  puVar1 = (uint *)(param_1 + 0x289d0);
  uVar3 = *puVar1;
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      plVar2 = *(long **)(*(long *)(param_1 + 0x289d8) + uVar4 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
        *(undefined8 *)(*(long *)(param_1 + 0x289d8) + uVar4 * 8) = 0;
        uVar3 = *puVar1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  if (*(long *)(param_1 + 0x289d8) != 0) {
    *puVar1 = 0;
  }
  uVar3 = *(uint *)(param_1 + 0x289e0);
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      plVar2 = *(long **)(*(long *)(param_1 + 0x289e8) + uVar4 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
        *(undefined8 *)(*(long *)(param_1 + 0x289e8) + uVar4 * 8) = 0;
        uVar3 = *(uint *)(param_1 + 0x289e0);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  if (*(long *)(param_1 + 0x289e8) != 0) {
    *(undefined4 *)(param_1 + 0x289e0) = 0;
  }
  uVar3 = *(uint *)(param_1 + 0x289f0);
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      plVar2 = *(long **)(*(long *)(param_1 + 0x289f8) + uVar4 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
        *(undefined8 *)(*(long *)(param_1 + 0x289f8) + uVar4 * 8) = 0;
        uVar3 = *(uint *)(param_1 + 0x289f0);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  if (*(long *)(param_1 + 0x289f8) != 0) {
    *(undefined4 *)(param_1 + 0x289f0) = 0;
  }
  return;
}




void FUN_10024be64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145f300;
  param_1[0x9a] = &PTR_FUN_1014a7108;
  param_1[0xb1] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xb4);
  FUN_10064e2bc(param_1 + 0x9a);
  param_1[0x7c] = &PTR_FUN_1014a7108;
  param_1[0x93] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x96);
  FUN_10064e2bc(param_1 + 0x7c);
  param_1[0x5e] = &PTR_FUN_1014a7108;
  param_1[0x75] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x78);
  FUN_10064e2bc(param_1 + 0x5e);
  FUN_10064221c(param_1 + 0x4d);
  FUN_10003bec8(param_1);
  return;
}




void thunk_FUN_10024b44c(void)

{
  FUN_10024b44c();
  return;
}




void FUN_10024bf0c(long param_1)

{
  FUN_10024b44c(param_1 + -0x2c30);
  return;
}




void FUN_10024bf18(long param_1)

{
  FUN_10024b44c(param_1 + -0x2c48);
  return;
}




void FUN_10024bf24(long param_1)

{
  FUN_10024b44c(param_1 + -0x2c58);
  return;
}




void FUN_10024bf30(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10024b44c();
  operator_delete(pvVar1);
  return;
}




void FUN_10024bf44(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10024b44c(param_1 + -0x2c30);
  operator_delete(pvVar1);
  return;
}




void FUN_10024bf60(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10024b44c(param_1 + -0x2c48);
  operator_delete(pvVar1);
  return;
}




void FUN_10024bf7c(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10024b44c(param_1 + -0x2c58);
  operator_delete(pvVar1);
  return;
}




void thunk_FUN_10024bf9c(void)

{
  FUN_10024bf9c();
  return;
}




void FUN_10024bf9c(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  char *pcVar2;
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
  float *pfVar15;
  undefined4 *puVar16;
  undefined **ppuVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  bool bVar22;
  int iVar23;
  long *plVar24;
  long *plVar25;
  ulong uVar26;
  code *pcVar27;
  long lVar28;
  uint uVar29;
  int iVar30;
  ulong uVar31;
  long *plVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  long lVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  ulong uVar40;
  float fVar41;
  float fVar42;
  int local_f4;
  undefined1 *local_c8;
  void *local_c0;
  int local_b4;
  float local_b0;
  float local_ac [3];
  
  pcVar2 = (char *)((long)param_3 + 0x2ceab);
  plVar3 = param_3 + 0x161d;
  FUN_100641464(local_ac,&local_b0);
  local_ac[0] = (float)(**(code **)(*param_3 + 0x48))(param_3);
  (**(code **)(*param_3 + 0x48))(param_3);
  *(uint *)((long)param_3 + 0x2d24) = *(uint *)((long)param_3 + 0x2d24) | 4;
  *(uint *)((long)param_3 + 0x7dc4) = *(uint *)((long)param_3 + 0x7dc4) & 0xfffffffb;
  local_b0 = param_2;
  FUN_100131560();
  *(float *)(param_3 + 0x59e8) = local_ac[0] * 0.58;
  fVar38 = local_ac[0] * 0.58 + -130.0;
  *(float *)(param_3 + 0x59e7) = fVar38;
  *(float *)((long)param_3 + 0x2cf3c) = fVar38;
  *(ulong *)((long)param_3 + 0x2cf44) =
       CONCAT44(local_ac[0] * 0.29 + -80.0,local_ac[0] * 0.42000002 + -128.0);
  *(uint *)((long)param_3 + 0x25584) = *(uint *)((long)param_3 + 0x25584) & 0xfffffffb;
  fVar38 = 70.0;
  if (*(char *)((long)param_3 + 0x2ceb5) != '\0') {
    fVar38 = 60.0;
  }
  bVar22 = false;
  if ((*(float *)((long)param_3 + 0x7a64) == 0.0) &&
     (bVar22 = false, !NAN(*(float *)(param_3 + 0xf4c)))) {
    bVar22 = *(float *)(param_3 + 0xf4c) == 0.0;
  }
  if (!bVar22) {
    param_3[0xf4c] = 0;
    FUN_1000200a0(param_3 + 0xf44);
  }
  plVar4 = param_3 + 0xf55;
  FUN_10064e47c(local_ac[0],local_b0,plVar4);
  plVar5 = param_3 + 0xf91;
  fVar33 = (float)FUN_100652e60(plVar4);
  FUN_100652e60(plVar4);
  FUN_10064e47c(fVar33 * 0.5,plVar5);
  if ((*(float *)(param_3 + 0xfb0) != 65.0) || (*(float *)((long)param_3 + 0x7d84) != 0.0)) {
    param_3[0xfb0] = 0x42820000;
    FUN_1000200a0(param_3 + 0xfa8);
  }
  plVar4 = param_3 + 0x4c0b;
  fVar39 = *(float *)(param_3 + 0x59e7);
  FUN_10018e8d8(0,fVar39,fVar39,plVar3);
  FUN_10018e440(plVar3,1);
  fVar34 = (float)FUN_10018ee40(plVar3);
  fVar33 = DAT_101854a7c;
  if ((*(float *)(param_3 + 0x1625) != *(float *)(param_3 + 0x59e7) * 0.5) ||
     (*(float *)((long)param_3 + 0xb12c) != DAT_101854a7c)) {
    *(float *)(param_3 + 0x1625) = *(float *)(param_3 + 0x59e7) * 0.5;
    *(float *)((long)param_3 + 0xb12c) = fVar33;
    FUN_1000200a0(plVar3);
  }
  plVar6 = param_3 + 0x1b43;
  local_c8 = &DAT_3f0000003f000000;
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_c8);
  plVar1 = param_3 + 0x4ab1;
  fVar33 = (float)NEON_ucvtf((int)param_3[0x4ac2]);
  if (fVar33 <= 1.0) {
    fVar33 = 1.0;
  }
  fVar33 = *(float *)((long)param_3 + 0x2cf44) / fVar33;
  FUN_1001c93f0(0,fVar33,fVar33,plVar1);
  fVar33 = DAT_101854a7c + -50.0;
  if ((*(float *)(param_3 + 0x4ab9) != 48.0) || (*(float *)((long)param_3 + 0x255cc) != fVar33)) {
    *(undefined4 *)(param_3 + 0x4ab9) = 0x42400000;
    *(float *)((long)param_3 + 0x255cc) = fVar33;
    FUN_1000200a0(plVar1);
  }
  local_c8 = (undefined1 *)0x0;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_c8);
  fVar33 = DAT_101854a7c + -50.0;
  if ((*(float *)(param_3 + 0x4c13) != 68.0) || (*(float *)((long)param_3 + 0x2609c) != fVar33)) {
    *(undefined4 *)(param_3 + 0x4c13) = 0x42880000;
    *(float *)((long)param_3 + 0x2609c) = fVar33;
    FUN_1000200a0(plVar4);
  }
  local_c8 = (undefined1 *)0x0;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_c8);
  if ((*(byte *)((long)param_3 + 0xda9c) >> 2 & 1) != 0) {
    FUN_10018e8d8(0,(int)param_3[0x59e7],(int)param_3[0x59e7],plVar6);
    FUN_10018e440(plVar6,1);
    fVar33 = fVar39 + 10.0 + DAT_101854a7c;
    if ((*(float *)(param_3 + 0x1b4b) != *(float *)(param_3 + 0x59e7) * 0.5) ||
       (*(float *)((long)param_3 + 0xda5c) != fVar33)) {
      *(float *)(param_3 + 0x1b4b) = *(float *)(param_3 + 0x59e7) * 0.5;
      *(float *)((long)param_3 + 0xda5c) = fVar33;
      FUN_1000200a0(plVar6);
    }
    local_c8 = &DAT_3f0000003f000000;
    (**(code **)(*plVar6 + 0x28))(plVar6,&local_c8);
    fVar35 = (float)FUN_10018ee40(plVar6);
    fVar34 = fVar35 + fVar34;
    fVar39 = fVar39 + 10.0 + fVar33;
    if (*(char *)((long)param_3 + 0x2ceb5) != '\0') {
      fVar39 = fVar39 + 100.0;
    }
  }
  plVar1 = param_3 + 0x1094;
  fVar33 = (*(float *)(param_3 + 0x59e7) - fVar34) * 0.5;
  fVar35 = fVar39 * 0.5 + 10.0 + DAT_101854a7c;
  if ((*(float *)(param_3 + 0x20ad) != fVar33) || (*(float *)((long)param_3 + 0x1056c) != fVar35)) {
    *(float *)(param_3 + 0x20ad) = fVar33;
    *(float *)((long)param_3 + 0x1056c) = fVar35;
    FUN_1000200a0(param_3 + 0x20a5);
  }
  plVar25 = param_3 + 0x10ba;
  plVar7 = param_3 + 0x20d4;
  FUN_100651708(fVar34 + -60.0,plVar7,1);
  fVar33 = *(float *)(param_3 + 0x20dc);
  if ((fVar33 != 30.0) || (fVar33 = *(float *)((long)param_3 + 0x106e4), fVar33 != 30.0)) {
    lVar36 = NEON_fmov(0x41f00000,4);
    param_3[0x20dc] = lVar36;
    FUN_1000200a0(plVar7);
  }
  fVar34 = (float)FUN_100651184(plVar7);
  FUN_100651184(plVar7);
  FUN_10064e47c(fVar34 + 60.0,fVar33 + 60.0,param_3 + 0x20b6);
  ppuVar17 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (*(char *)((long)param_3 + 0x2ceb5) != '\0') {
    ppuVar17 = &PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0;
  }
  FUN_100651594(plVar1,*ppuVar17,&DAT_10115a168);
  FUN_10065179c((int)param_3[0x59e9],0,0x3f800000,plVar1);
  fVar33 = DAT_101854a7c;
  fVar34 = *(float *)(param_3 + 0x109c);
  if ((fVar34 != 0.0) || (fVar34 = *(float *)((long)param_3 + 0x84e4), fVar34 != DAT_101854a7c)) {
    *(undefined4 *)(param_3 + 0x109c) = 0;
    *(float *)((long)param_3 + 0x84e4) = fVar33;
    FUN_1000200a0(plVar1);
  }
  plVar7 = param_3 + 0x5166;
  plVar8 = param_3 + 0x5140;
  plVar9 = param_3 + 0x2668;
  plVar10 = param_3 + 0x23b1;
  plVar11 = param_3 + 0x20fa;
  plVar32 = param_3 + 0x13bd;
  plVar12 = param_3 + 0x1397;
  local_c8 = (undefined1 *)0x3f00000000000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_c8);
  ppuVar17 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (*(char *)((long)param_3 + 0x2ceb5) != '\0') {
    ppuVar17 = &PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0;
  }
  FUN_100651594(plVar25,*ppuVar17,&DAT_10115a168);
  fVar33 = DAT_101854a7c;
  FUN_100651184(plVar1);
  fVar35 = fVar34;
  FUN_100651184(plVar25);
  fVar33 = fVar33 + 4.0 + (fVar35 + fVar34) * 0.5;
  uVar40 = (ulong)(uint)*(float *)(param_3 + 0x10c2);
  if ((*(float *)(param_3 + 0x10c2) != 0.0) ||
     (uVar40 = (ulong)(uint)*(float *)((long)param_3 + 0x8614),
     *(float *)((long)param_3 + 0x8614) != fVar33)) {
    *(undefined4 *)(param_3 + 0x10c2) = 0;
    *(float *)((long)param_3 + 0x8614) = fVar33;
    FUN_1000200a0(plVar25);
  }
  local_c8 = (undefined1 *)0x3f00000000000000;
  (**(code **)(*plVar25 + 0x28))(plVar25,&local_c8);
  fVar33 = (float)uVar40;
  lVar36 = -0x1300;
  do {
    *(uint *)((long)param_3 + lVar36 + 0xb16c) =
         *(uint *)((long)param_3 + lVar36 + 0xb16c) & 0xfffffffb;
    lVar36 = lVar36 + 0x130;
  } while (lVar36 != 0);
  lVar36 = 0x1369c;
  lVar28 = 0xe;
  do {
    *(uint *)((long)param_3 + lVar36) = *(uint *)((long)param_3 + lVar36) & 0xfffffffb;
    lVar36 = lVar36 + 0x1320;
    lVar28 = lVar28 + -1;
  } while (lVar28 != 0);
  *(uint *)((long)param_3 + 0x9d3c) = *(uint *)((long)param_3 + 0x9d3c) & 0xfffffffb;
  if (*(char *)((long)param_3 + 0x2ceb4) == '\0') {
    if ((int)param_3[0x59db] == 0) goto LAB_10024cc28;
    uVar26 = 0;
    local_f4 = 0;
    iVar23 = 0;
    fVar34 = 80.0;
    do {
      fVar33 = (float)uVar40;
      iVar30 = *(int *)((long)param_3 + uVar26 * 4 + 0x2cee0);
      iVar21 = iVar23;
      for (iVar19 = iVar30; iVar20 = iVar21, iVar19 != 0; iVar19 = iVar19 + -1) {
        FUN_1001a0704((int)param_3[0x59e7],0x42a00000,0,0x40800000,
                      param_3 + (long)iVar20 * 0x264 + 0x26c3,*pcVar2);
        pfVar15 = (float *)((long)param_3 + (long)iVar20 * 0x1320 + 0x1365c);
        fVar33 = *pfVar15;
        bVar22 = false;
        if ((*(float *)(param_3 + (long)iVar20 * 0x264 + 0x26cb) == 0.0) &&
           (bVar22 = false, !NAN(fVar33) && !NAN(fVar34))) {
          bVar22 = fVar33 == fVar34;
        }
        if (!bVar22) {
          *(float *)(param_3 + (long)iVar20 * 0x264 + 0x26cb) = 0.0;
          *pfVar15 = fVar34;
          FUN_1000200a0(param_3 + (long)iVar20 * 0x264 + 0x26c3);
        }
        *(uint *)((long)param_3 + (long)iVar20 * 0x1320 + 0x1369c) =
             *(uint *)((long)param_3 + (long)iVar20 * 0x1320 + 0x1369c) | 4;
        fVar34 = fVar34 + 84.0;
        iVar21 = iVar20 + 1;
        local_f4 = iVar20;
      }
      plVar32 = param_3 + uVar26 * 0x26 + 0x13bd;
      fVar35 = *(float *)((long)param_3 + (long)iVar23 * 0x1320 + 0x1365c);
      FUN_100652e60(param_3 + 0x27cf);
      fVar33 = fVar35 + fVar33 * -0.5 + -6.0;
      fVar35 = *(float *)(param_3 + uVar26 * 0x26 + 0x13c5);
      uVar40 = (ulong)(uint)fVar35;
      pfVar15 = (float *)((long)param_3 + uVar26 * 0x130 + 0x9e2c);
      fVar42 = *pfVar15;
      bVar22 = false;
      if ((fVar35 == 0.0) && (bVar22 = false, !NAN(fVar42) && !NAN(fVar33))) {
        bVar22 = fVar42 == fVar33;
      }
      if (!bVar22) {
        *(float *)(param_3 + uVar26 * 0x26 + 0x13c5) = 0.0;
        *pfVar15 = fVar33;
        FUN_1000200a0(plVar32);
      }
      local_c8 = (undefined1 *)0x3f80000000000000;
      (**(code **)(*plVar32 + 0x28))(plVar32,&local_c8);
      fVar33 = (float)uVar40;
      *(uint *)((long)param_3 + uVar26 * 0x130 + 0x9e6c) =
           *(uint *)((long)param_3 + uVar26 * 0x130 + 0x9e6c) | 4;
      iVar23 = iVar30 + iVar23;
      fVar34 = fVar34 + 65.0;
      uVar26 = uVar26 + 1;
    } while (uVar26 < *(uint *)(param_3 + 0x59db));
  }
  else {
    uVar26 = (ulong)*(uint *)(param_3 + 0x59db);
    if (*(uint *)(param_3 + 0x59db) == 0) {
LAB_10024cc28:
      local_f4 = 0;
      fVar34 = 80.0;
    }
    else {
      uVar31 = 0;
      local_f4 = 0;
      iVar23 = 0;
      plVar13 = param_3 + 0xfb9;
      plVar14 = param_3 + 0x27cf;
      fVar34 = 80.0;
      do {
        fVar33 = (float)uVar40;
        iVar30 = *(int *)((long)param_3 + uVar31 * 4 + 0x2cee0);
        iVar19 = iVar30;
        iVar21 = iVar23;
        if (((int)uVar26 < 2) || (*(char *)((long)param_3 + 0x2ceb4) == '\0')) {
          for (; iVar19 != 0; iVar19 = iVar19 + -1) {
            FUN_1002539a4(0x40800000,
                          *(float *)(param_3 + 0x26b4) +
                          (*(float *)(param_3 + 0x59e7) - *(float *)(param_3 + 0x59e9)) * 0.5,fVar34
                          ,param_3,iVar21);
            fVar34 = fVar34 + 84.0;
            local_f4 = iVar21;
            iVar21 = iVar21 + 1;
          }
          fVar33 = *(float *)(param_3 + 0x59e7) - *(float *)(param_3 + 0x59e9);
          fVar42 = *(float *)(param_3 + 0x26b4) + fVar33 * 0.5;
          fVar35 = *(float *)((long)param_3 + (long)iVar23 * 0x1320 + 0x1365c);
          FUN_100652e60(plVar14);
          fVar35 = fVar35 - fVar33 * 0.5;
LAB_10024c9b8:
          plVar24 = param_3 + uVar31 * 0x26 + 0x13bd;
          fVar35 = fVar35 + -6.0;
          fVar33 = *(float *)(param_3 + uVar31 * 0x26 + 0x13c5);
          uVar40 = (ulong)(uint)fVar33;
          pfVar15 = (float *)((long)param_3 + uVar31 * 0x130 + 0x9e2c);
          fVar41 = *pfVar15;
          bVar22 = false;
          if ((fVar33 == fVar42) && (bVar22 = false, !NAN(fVar41) && !NAN(fVar35))) {
            bVar22 = fVar41 == fVar35;
          }
          if (!bVar22) {
            *(float *)(param_3 + uVar31 * 0x26 + 0x13c5) = fVar42;
            *pfVar15 = fVar35;
            FUN_1000200a0(plVar24);
          }
          pcVar27 = *(code **)(*plVar24 + 0x28);
        }
        else {
          fVar35 = (float)FUN_10064e3cc(plVar13);
          FUN_10064e3cc(plVar13);
          FUN_10064e47c(fVar35 + fVar35,plVar13);
          if (uVar31 != 0) {
            fVar34 = 80.0;
            for (; iVar19 != 0; iVar19 = iVar19 + -1) {
              fVar33 = *(float *)(param_3 + 0x59e9) + 30.0;
              FUN_1002539a4(0x40800000,fVar33,fVar34,param_3,iVar21);
              fVar34 = fVar34 + 84.0;
              local_f4 = iVar21;
              iVar21 = iVar21 + 1;
            }
            fVar42 = *(float *)(param_3 + 0x59e9) + 30.0;
            fVar35 = *(float *)((long)param_3 + (long)iVar23 * 0x1320 + 0x1365c);
            FUN_100652e60(plVar14);
            fVar35 = fVar35 + fVar33 * -0.5;
            goto LAB_10024c9b8;
          }
          for (; iVar19 != 0; iVar19 = iVar19 + -1) {
            fVar33 = 0.0;
            FUN_1002539a4(0x40800000,0,fVar34,param_3,iVar21);
            fVar34 = fVar34 + 84.0;
            local_f4 = iVar21;
            iVar21 = iVar21 + 1;
          }
          fVar35 = *(float *)((long)param_3 + (long)iVar23 * 0x1320 + 0x1365c);
          FUN_100652e60(plVar14);
          fVar33 = fVar35 + fVar33 * -0.5 + -6.0;
          uVar40 = (ulong)(uint)*(float *)(param_3 + 0x13c5);
          if ((*(float *)(param_3 + 0x13c5) != 0.0) ||
             (uVar40 = (ulong)(uint)*(float *)((long)param_3 + 0x9e2c),
             *(float *)((long)param_3 + 0x9e2c) != fVar33)) {
            *(undefined4 *)(param_3 + 0x13c5) = 0;
            *(float *)((long)param_3 + 0x9e2c) = fVar33;
            FUN_1000200a0(plVar32);
          }
          pcVar27 = *(code **)(*plVar32 + 0x28);
          plVar24 = plVar32;
        }
        local_c8 = (undefined1 *)0x3f80000000000000;
        (*pcVar27)(plVar24,&local_c8);
        fVar33 = (float)uVar40;
        *(uint *)((long)param_3 + uVar31 * 0x130 + 0x9e6c) =
             *(uint *)((long)param_3 + uVar31 * 0x130 + 0x9e6c) | 4;
        iVar23 = iVar30 + iVar23;
        fVar34 = fVar34 + 65.0;
        uVar31 = uVar31 + 1;
        uVar26 = (ulong)*(uint *)(param_3 + 0x59db);
      } while (uVar31 < uVar26);
    }
  }
  if (*pcVar2 == '\0') {
    FUN_10018e8a8(plVar3);
    lVar36 = FUN_10034ccb8();
    if (*(char *)(lVar36 + 0x53) != '\0') {
      iVar23 = *(int *)((long)param_3 + 0x2cedc);
      uVar18 = 0xe - iVar23;
      if (*(char *)((long)param_3 + 0x2ceb4) == '\0') {
        if ((iVar23 < 0xe) && (uVar18 != 0)) {
          iVar30 = 0;
          plVar32 = param_3 + (long)local_f4 * 0x264 + 0x2927;
          do {
            FUN_1001a0704((int)param_3[0x59e7],0x42a00000,0,0x40800000,plVar32,*pcVar2);
            fVar33 = *(float *)((long)plVar32 + 0x44);
            bVar22 = false;
            if ((*(float *)(plVar32 + 8) == 0.0) && (bVar22 = false, !NAN(fVar33) && !NAN(fVar34)))
            {
              bVar22 = fVar33 == fVar34;
            }
            if (!bVar22) {
              *(undefined4 *)(plVar32 + 8) = 0;
              *(float *)((long)plVar32 + 0x44) = fVar34;
              FUN_1000200a0(plVar32);
            }
            *(uint *)((long)plVar32 + 0x84) = *(uint *)((long)plVar32 + 0x84) | 4;
            if (iVar30 == 0) {
              fVar35 = *(float *)((long)plVar32 + 0x44);
              FUN_100652e60(param_3 + 0x27cf);
              fVar35 = fVar35 + fVar33 * -0.5 + -6.0;
              fVar33 = *(float *)(param_3 + 0x139f);
              bVar22 = false;
              if ((fVar33 == 0.0) &&
                 (bVar22 = false, !NAN(*(float *)((long)param_3 + 0x9cfc)) && !NAN(fVar35))) {
                bVar22 = *(float *)((long)param_3 + 0x9cfc) == fVar35;
              }
              if (!bVar22) {
                *(undefined4 *)(param_3 + 0x139f) = 0;
                *(float *)((long)param_3 + 0x9cfc) = fVar35;
                FUN_1000200a0(plVar12);
              }
              local_c8 = (undefined1 *)0x3f80000000000000;
              (**(code **)(*plVar12 + 0x28))(plVar12,&local_c8);
              *(uint *)((long)param_3 + 0x9d3c) = *(uint *)((long)param_3 + 0x9d3c) | 4;
            }
            fVar34 = fVar34 + 84.0;
            plVar32 = plVar32 + 0x264;
            iVar30 = iVar30 + -1;
          } while (iVar23 + -0xe != iVar30);
        }
      }
      else if (iVar23 < 0xe) {
        if ((int)param_3[0x59db] < 2) {
          if (uVar18 != 0) {
            uVar29 = 0;
            lVar36 = (long)local_f4 * 0x1320 + 0x1497c;
            do {
              fVar33 = *(float *)(param_3 + 0x26b4) +
                       (*(float *)(param_3 + 0x59e7) - *(float *)(param_3 + 0x59e9)) * 0.5;
              FUN_1002539a4(0x40800000,fVar33,fVar34,param_3,local_f4 + 1 + uVar29);
              if (uVar29 == 0) {
                fVar35 = *(float *)((long)param_3 + lVar36);
                FUN_100652e60(param_3 + 0x27cf);
                fVar35 = fVar35 + fVar33 * -0.5 + -6.0;
                fVar33 = *(float *)(param_3 + 0x139f);
                if ((fVar33 != 0.0) ||
                   (fVar33 = *(float *)((long)param_3 + 0x9cfc), fVar33 != fVar35)) {
                  *(undefined4 *)(param_3 + 0x139f) = 0;
                  *(float *)((long)param_3 + 0x9cfc) = fVar35;
                  FUN_1000200a0(plVar12);
                }
                local_c8 = (undefined1 *)0x3f80000000000000;
                (**(code **)(*plVar12 + 0x28))(plVar12,&local_c8);
                *(uint *)((long)param_3 + 0x9d3c) = *(uint *)((long)param_3 + 0x9d3c) | 4;
              }
              fVar34 = fVar34 + 84.0;
              uVar29 = uVar29 + 1;
              lVar36 = lVar36 + 0x1320;
            } while (uVar18 != uVar29);
          }
        }
        else {
          fVar33 = 0.5;
          uVar29 = 0;
          if (0.0 < (float)(int)uVar18 * 0.5) {
            lVar36 = (long)local_f4 * 0x1320 + 0x1497c;
            fVar35 = fVar34;
            do {
              fVar33 = 0.0;
              FUN_1002539a4(0x40800000,0,fVar35,param_3,local_f4 + uVar29 + 1);
              if (uVar29 == 0) {
                fVar42 = *(float *)((long)param_3 + lVar36);
                FUN_100652e60(param_3 + 0x27cf);
                fVar42 = fVar42 + fVar33 * -0.5 + -6.0;
                fVar33 = *(float *)(param_3 + 0x139f);
                if ((fVar33 != 0.0) ||
                   (fVar33 = *(float *)((long)param_3 + 0x9cfc), fVar33 != fVar42)) {
                  *(undefined4 *)(param_3 + 0x139f) = 0;
                  *(float *)((long)param_3 + 0x9cfc) = fVar42;
                  FUN_1000200a0(plVar12);
                }
                local_c8 = (undefined1 *)0x3f80000000000000;
                (**(code **)(*plVar12 + 0x28))(plVar12,&local_c8);
                *(uint *)((long)param_3 + 0x9d3c) = *(uint *)((long)param_3 + 0x9d3c) | 4;
              }
              fVar35 = fVar35 + 84.0;
              uVar29 = uVar29 + 1;
              lVar36 = lVar36 + 0x1320;
            } while ((float)uVar29 < (float)(int)uVar18 * 0.5);
            local_f4 = local_f4 + uVar29;
          }
          if (uVar29 < uVar18) {
            iVar23 = uVar29 + iVar23 + -0xe;
            do {
              local_f4 = local_f4 + 1;
              fVar33 = *(float *)(param_3 + 0x59e9) + 30.0;
              FUN_1002539a4(0x40800000,fVar33,fVar34,param_3,local_f4);
              fVar34 = fVar34 + 84.0;
              bVar22 = iVar23 != -1;
              iVar23 = iVar23 + 1;
            } while (bVar22);
          }
        }
      }
    }
  }
  plVar32 = param_3 + 0xfb9;
  fVar34 = *(float *)((long)param_3 + 0x7e0c);
  FUN_10064e3cc(plVar32);
  fVar33 = fVar34 + -12.0 + fVar33;
  bVar22 = false;
  if ((*(float *)(param_3 + 0x2670) == 0.0) &&
     (bVar22 = false, !NAN(*(float *)((long)param_3 + 0x13384)) && !NAN(fVar33))) {
    bVar22 = *(float *)((long)param_3 + 0x13384) == fVar33;
  }
  if (!bVar22) {
    *(undefined4 *)(param_3 + 0x2670) = 0;
    *(float *)((long)param_3 + 0x13384) = fVar33;
    FUN_1000200a0(plVar9);
  }
  local_c8 = (undefined1 *)0x0;
  (**(code **)(*plVar9 + 0x28))(plVar9,&local_c8);
  fVar35 = *(float *)(param_3 + 0x59e7);
  fVar42 = *(float *)(param_3 + 0x26b4) + fVar35 * 0.5;
  local_b4 = 0;
  FUN_10016aeec(0,0,0,&local_b4);
  fVar34 = local_b0;
  plVar12 = param_3 + 0x10e0;
  FUN_10064e3cc(plVar12);
  fVar34 = ((fVar34 + -30.0) - (float)local_b4) + fVar35 * -0.5;
  fVar35 = *(float *)((long)param_3 + 0x8744);
  bVar22 = false;
  if ((*(float *)(param_3 + 0x10e8) == fVar42) && (bVar22 = false, !NAN(fVar35) && !NAN(fVar34))) {
    bVar22 = fVar35 == fVar34;
  }
  if (!bVar22) {
    *(float *)(param_3 + 0x10e8) = fVar42;
    *(float *)((long)param_3 + 0x8744) = fVar34;
    FUN_1000200a0(plVar12);
  }
  local_c8 = &DAT_3f0000003f000000;
  (**(code **)(*plVar12 + 0x28))(plVar12,&local_c8);
  iVar23 = FUN_100126b8c();
  if (iVar23 != 0) {
    lVar36 = param_3[0x58e];
    FUN_10064259c(plVar12);
    iVar23 = (int)fVar35;
    FUN_10064259c(plVar12);
    FUN_10064e4a0(lVar36,CONCAT44((int)fVar35,iVar23));
    lVar36 = param_3[0x58e];
    fVar41 = (float)FUN_10064259c(plVar12);
    (**(code **)(*(long *)param_3[0x58e] + 0x48))();
    fVar41 = (fVar42 - fVar41 * 0.5) + fVar35 * -1.8;
    (**(code **)(*(long *)param_3[0x58e] + 0x48))();
    fVar34 = fVar34 - fVar35 * 0.5;
    fVar35 = *(float *)(lVar36 + 0x40);
    bVar22 = false;
    if ((fVar35 == fVar41) && (bVar22 = false, !NAN(*(float *)(lVar36 + 0x44)) && !NAN(fVar34))) {
      bVar22 = *(float *)(lVar36 + 0x44) == fVar34;
    }
    if (!bVar22) {
      *(float *)(lVar36 + 0x40) = fVar41;
      *(float *)(lVar36 + 0x44) = fVar34;
      FUN_1000200a0(lVar36);
    }
  }
  FUN_1006425d0(param_3 + 0x26ac,1,0,0,1);
  FUN_10053093c(*(float *)(param_3 + 0x59e8) + -65.0,param_3 + 0xfed);
  fVar41 = *(float *)((long)param_3 + 0x8744);
  FUN_10064e3cc(plVar12);
  fVar34 = fVar35;
  FUN_10064e3cc(plVar11);
  fVar34 = fVar41 + (fVar34 + fVar35) * -0.5 + -20.0;
  FUN_100181c18(0,*(undefined4 *)((long)param_3 + 0x2cf3c),*(undefined4 *)((long)param_3 + 0x2cf3c),
                plVar11);
  if ((*(float *)(param_3 + 0x2102) != fVar42) || (*(float *)((long)param_3 + 0x10814) != fVar34)) {
    *(float *)(param_3 + 0x2102) = fVar42;
    *(float *)((long)param_3 + 0x10814) = fVar34;
    FUN_1000200a0(plVar11);
  }
  local_c8 = &DAT_3f0000003f000000;
  (**(code **)(*plVar11 + 0x28))(plVar11,&local_c8);
  FUN_100651708((int)param_3[0x59e7],plVar9,1);
  iVar23 = FUN_100131560();
  if ((iVar23 != 0) && ((char)param_3[0x59d5] != '\0')) {
    plVar9 = param_3 + 0xef8;
    *(uint *)((long)param_3 + 0x7844) = *(uint *)((long)param_3 + 0x7844) | 4;
    plVar13 = param_3 + 0xf1e;
    *(uint *)((long)param_3 + 0x7974) = *(uint *)((long)param_3 + 0x7974) | 4;
    FUN_100651708((int)param_3[0x59e7],plVar9,1);
    FUN_100651708((int)param_3[0x59e7],plVar13,1);
    fVar33 = fVar33 * 0.9;
    if ((*(float *)(param_3 + 0xf00) != 0.0) || (*(float *)((long)param_3 + 0x7804) != fVar33)) {
      *(undefined4 *)(param_3 + 0xf00) = 0;
      *(float *)((long)param_3 + 0x7804) = fVar33;
      FUN_1000200a0(plVar9);
    }
    local_c8 = (undefined1 *)0x0;
    (**(code **)(param_3[0xef8] + 0x28))(plVar9,&local_c8);
    fVar35 = (float)FUN_1006511d0(plVar9);
    if ((*(float *)(param_3 + 0xf26) != fVar35 * 1.1) ||
       (*(float *)((long)param_3 + 0x7934) != fVar33)) {
      *(float *)(param_3 + 0xf26) = fVar35 * 1.1;
      *(float *)((long)param_3 + 0x7934) = fVar33;
      FUN_1000200a0(plVar13);
    }
    local_c8 = (undefined1 *)0x0;
    (**(code **)(param_3[0xf1e] + 0x28))(plVar13,&local_c8);
    FUN_1004e3170(&local_c8,param_3 + 0x59ea);
    FUN_1006513c0(plVar13,&local_c8);
    if (local_c0 != (void *)0x0) {
      operator_delete__(local_c0);
    }
  }
  fVar33 = *(float *)((long)param_3 + 0x2cf3c);
  FUN_100181c18(0,fVar33,fVar33,plVar10);
  FUN_10064e3cc(plVar10);
  fVar34 = fVar34 + fVar33 * -0.5;
  fVar33 = *(float *)(param_3 + 0x23b9);
  if ((fVar33 != fVar42) || (fVar33 = *(float *)((long)param_3 + 0x11dcc), fVar33 != fVar34)) {
    *(float *)(param_3 + 0x23b9) = fVar42;
    *(float *)((long)param_3 + 0x11dcc) = fVar34;
    FUN_1000200a0(plVar10);
  }
  local_c8 = &DAT_3f0000003f000000;
  (**(code **)(*plVar10 + 0x28))(plVar10,&local_c8);
  fVar34 = *(float *)((long)param_3 + 0xb12c);
  FUN_10018ee40(plVar3);
  if ((*(byte *)((long)param_3 + 0xda9c) >> 2 & 1) == 0) {
    if ((*(byte *)((long)param_3 + 0x8654) >> 2 & 1) != 0) {
      fVar34 = *(float *)((long)param_3 + 0x8614);
      FUN_100651184();
      goto LAB_10024d244;
    }
    fVar34 = fVar33 + fVar34;
  }
  else {
    fVar34 = *(float *)((long)param_3 + 0xda5c);
    FUN_10018ee40(plVar6);
LAB_10024d244:
    fVar34 = fVar33 + fVar34;
  }
  fVar35 = *(float *)((long)param_3 + 0x8744);
  FUN_10064e3cc(plVar12);
  fVar35 = fVar35 - fVar33;
  fVar42 = *(float *)((long)param_3 + 0x10814);
  FUN_10064e3cc(plVar11);
  fVar33 = (float)NEON_fminnm(fVar35,fVar42 - fVar33);
  if (*(float *)((long)param_3 + 0x7e0c) != fVar34) {
    *(float *)((long)param_3 + 0x7e0c) = fVar34;
    FUN_1000200a0(plVar32);
  }
  FUN_10064e47c(*(float *)(param_3 + 0x59e8) + -65.0,fVar33 - fVar34,plVar32);
  fVar33 = *(float *)(param_3 + 0x59e8);
  if ((*(float *)(param_3 + 0x4aa8) != fVar33) || (*(float *)((long)param_3 + 0x25544) != 0.0)) {
    *(float *)(param_3 + 0x4aa8) = fVar33;
    *(undefined4 *)((long)param_3 + 0x25544) = 0;
    FUN_1000200a0(param_3 + 0x4aa0);
    fVar33 = *(float *)(param_3 + 0x59e8);
  }
  FUN_10064e47c(fVar33,local_b0,param_3 + 0x2069);
  if (*(float *)(param_3 + 0x2071) != -65.0) {
    *(undefined4 *)(param_3 + 0x2071) = 0xc2820000;
    FUN_1000200a0(param_3 + 0x2069);
  }
  FUN_10064e47c(local_ac[0] - *(float *)(param_3 + 0x59e8),local_b0,param_3 + 0x2087);
  plVar3 = param_3 + 0xf73;
  bVar22 = false;
  if ((*(float *)((long)param_3 + 0x7bdc) == 0.0) &&
     (bVar22 = false, !NAN(*(float *)(param_3 + 0xf7b)))) {
    bVar22 = *(float *)(param_3 + 0xf7b) == 0.0;
  }
  if (!bVar22) {
    param_3[0xf7b] = 0;
    FUN_1000200a0(plVar3);
  }
  local_c8 = (undefined1 *)0x0;
  (**(code **)(param_3[0xf73] + 0x28))(plVar3,&local_c8);
  FUN_10064e47c(local_ac[0] - *(float *)(param_3 + 0x59e8),local_b0,plVar3);
  ppuVar17 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (*(char *)((long)param_3 + 0x2ceb5) != '\0') {
    ppuVar17 = &PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0;
  }
  puVar16 = (undefined4 *)&DAT_101158584;
  if (*(char *)((long)param_3 + 0x2ceaa) != '\0') {
    puVar16 = &DAT_10115a168;
  }
  FUN_100651594(plVar4,*ppuVar17,puVar16);
  fVar34 = *(float *)(param_3 + 0x59e8);
  plVar3 = param_3 + 0x5af;
  fVar33 = (float)FUN_10064e3cc(plVar3);
  fVar33 = (fVar34 - fVar33) * 0.5;
  FUN_10064e47c(local_ac[0] - *(float *)(param_3 + 0x59e8),local_b0,param_3 + 0x594);
  if ((*(float *)(param_3 + 0x59c) != *(float *)(param_3 + 0x59e8)) ||
     (*(float *)((long)param_3 + 0x2ce4) != 0.0)) {
    *(float *)(param_3 + 0x59c) = *(float *)(param_3 + 0x59e8);
    *(undefined4 *)((long)param_3 + 0x2ce4) = 0;
    FUN_1000200a0(param_3 + 0x594);
  }
  FUN_100181c18(0,*(undefined4 *)((long)param_3 + 0x2cf3c),*(undefined4 *)((long)param_3 + 0x2cf3c),
                plVar3);
  fVar34 = (float)FUN_10064e3cc(plVar3);
  fVar35 = -0.5;
  fVar34 = fVar34 * -0.5 - fVar33;
  FUN_10064e3cc(plVar5);
  if ((*(float *)(param_3 + 0x5b7) != fVar34) ||
     (*(float *)((long)param_3 + 0x2dbc) != fVar35 * 0.5)) {
    *(float *)(param_3 + 0x5b7) = fVar34;
    *(float *)((long)param_3 + 0x2dbc) = fVar35 * 0.5;
    FUN_1000200a0(plVar3);
  }
  plVar4 = param_3 + 0x866;
  FUN_100181c18(0,*(undefined4 *)((long)param_3 + 0x2cf3c),*(undefined4 *)((long)param_3 + 0x2cf3c),
                plVar4);
  fVar34 = (float)FUN_10064e3cc(plVar4);
  fVar35 = -0.5;
  fVar33 = fVar34 * -0.5 - fVar33;
  FUN_10064e3cc(plVar5);
  if ((*(float *)(param_3 + 0x86e) != fVar33) ||
     (*(float *)((long)param_3 + 0x4374) != fVar35 * 0.6)) {
    *(float *)(param_3 + 0x86e) = fVar33;
    *(float *)((long)param_3 + 0x4374) = fVar35 * 0.6;
    FUN_1000200a0(plVar4);
  }
  fVar33 = 0.0;
  FUN_10064e5ec(0,param_3 + 0xee1,7,plVar4,7);
  plVar4 = param_3 + 0xb1d;
  FUN_10064e3cc(plVar3);
  FUN_100651708(plVar4,1);
  FUN_10064e72c(0xc2700000,plVar4,2,plVar3,0);
  FUN_10064e72c(0,plVar4,3,plVar3,3);
  if ((char)param_3[0x59d5] == '\0') {
    if ((*(byte *)((long)param_3 + 0x8654) >> 2 & 1) == 0) goto LAB_10024d5e8;
  }
  else {
    if ((*(byte *)((long)param_3 + 0xda9c) >> 2 & 1) != 0) {
      fVar39 = fVar39 + 40.0;
      goto LAB_10024d600;
    }
LAB_10024d5e8:
    plVar25 = plVar1;
  }
  fVar39 = *(float *)((long)plVar25 + 0x44);
  FUN_100651184();
  fVar39 = fVar33 + fVar39;
LAB_10024d600:
  fVar33 = 1.0;
  if (*(char *)((long)param_3 + 0x2ceb5) != '\0') {
    fVar33 = 0.8;
  }
  plVar3 = param_3 + 0x4c42;
  fVar38 = fVar39 + fVar38 * fVar33 + -60.0;
  if ((*(float *)(param_3 + 0x4c4a) != 0.0) ||
     (fVar33 = *(float *)((long)param_3 + 0x26254), fVar33 != fVar38)) {
    *(undefined4 *)(param_3 + 0x4c4a) = 0;
    *(float *)((long)param_3 + 0x26254) = fVar38;
    FUN_1000200a0(plVar3);
    fVar33 = *(float *)((long)param_3 + 0x26254);
  }
  FUN_10064e47c(*(float *)((long)param_3 + 0x2cf44) + 128.0,
                local_b0 - (fVar33 + *(float *)((long)param_3 + 0x25544)),plVar3);
  *(uint *)((long)param_3 + 0x26294) = *(uint *)((long)param_3 + 0x26294) | 0x10;
  uVar37 = FUN_10064e3cc(plVar3);
  FUN_1006425d0(param_3 + 0x4c76,0,0,1,1);
  FUN_10053093c(uVar37,param_3 + 0x4c76);
  fVar38 = *(float *)((long)param_3 + 0x26254);
  fVar33 = 60.0;
  FUN_100651184(plVar8);
  fVar38 = fVar38 + 60.0 + fVar33 * -0.5;
  if ((*(float *)(param_3 + 0x5148) != 48.0) || (*(float *)((long)param_3 + 0x28a44) != fVar38)) {
    *(undefined4 *)(param_3 + 0x5148) = 0x42400000;
    *(float *)((long)param_3 + 0x28a44) = fVar38;
    FUN_1000200a0(plVar8);
  }
  local_c8 = (undefined1 *)0x0;
  (**(code **)(*plVar8 + 0x28))(plVar8,&local_c8);
  FUN_100651708(*(float *)((long)param_3 + 0x2cf44) + -20.0,plVar8,1);
  ppuVar17 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  if (*(char *)((long)param_3 + 0x2ceb5) != '\0') {
    ppuVar17 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  }
  FUN_100651594(plVar7,*ppuVar17,&DAT_10115a168);
  if ((*(float *)(param_3 + 0x516e) != 48.0) ||
     (*(float *)((long)param_3 + 0x28b74) != *(float *)((long)param_3 + 0x28a44))) {
    *(undefined4 *)(param_3 + 0x516e) = 0x42400000;
    *(float *)((long)param_3 + 0x28b74) = *(float *)((long)param_3 + 0x28a44);
    FUN_1000200a0(plVar7);
  }
  local_c8 = (undefined1 *)0x0;
  (**(code **)(*plVar7 + 0x28))(plVar7,&local_c8);
  FUN_100651708(*(float *)((long)param_3 + 0x2cf44) + -30.0,plVar7,1);
  if ((*(float *)(param_3 + 0x51a5) != *(float *)(param_3 + 0x4c4a) + 24.0) ||
     (*(float *)((long)param_3 + 0x28d2c) != *(float *)((long)param_3 + 0x26254))) {
    *(float *)(param_3 + 0x51a5) = *(float *)(param_3 + 0x4c4a) + 24.0;
    *(float *)((long)param_3 + 0x28d2c) = *(float *)((long)param_3 + 0x26254);
    FUN_1000200a0(param_3 + 0x519d);
  }
  fVar38 = (float)FUN_10064e3cc(plVar3);
  fVar39 = -48.0;
  FUN_10064e3cc(plVar3);
  fVar33 = 13.0;
  if (*(char *)((long)param_3 + 0x2ceb5) != '\0') {
    fVar33 = -11.0;
  }
  FUN_100187094(fVar38 + -48.0,fVar39 - fVar33,param_3 + 0x519d);
  *(undefined1 *)(param_3 + 22999) = 0;
  return;
}




void FUN_10024dae0(undefined8 param_1,undefined8 param_2)

{
  FUN_1001c3fc8(param_2,"PARTY.PENDING_CHATS");
  return;
}




void FUN_10024daf0(undefined8 param_1,undefined8 param_2)

{
  FUN_1001c3fc8(param_2,"PARTY.PENDING_CHATS");
  return;
}




void FUN_10024db00(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  void *local_78;
  void *local_70;
  char local_61;
  
  puVar10 = (undefined8 *)*param_2;
  if (puVar10 != (undefined8 *)0x0) {
    lVar9 = 8;
    do {
      uVar8 = *puVar10;
      uVar4 = FUN_100345b94();
      uVar4 = FUN_10034c450(uVar4,uVar8);
      cVar1 = *(char *)(puVar10 + 2);
      lVar5 = FUN_10031d43c();
      if (lVar5 == 0) {
LAB_10024db80:
        bVar2 = cVar1 == '\0';
      }
      else {
        uVar6 = FUN_10031d43c();
        iVar3 = FUN_10031e194(uVar6,puVar10[1]);
        bVar2 = iVar3 == 0;
        if (iVar3 == -1) goto LAB_10024db80;
      }
      if ((!bVar2 & (*(byte *)((long)puVar10 + 0x11) ^ 0xff)) != 0) {
        FUN_10034cd98(&local_78,uVar4);
        FUN_10010b098(param_3,&local_78);
        if (local_70 != (void *)0x0) {
          operator_delete__(local_70);
        }
        FUN_10001549c(&local_78,uVar8);
        FUN_10001617c(param_4,&local_78);
        if (local_61 < '\0') {
          operator_delete(local_78);
        }
        *(int *)(param_1 + 0x2cf28) = *(int *)(param_1 + 0x2cf28) + 1;
        plVar7 = *(long **)(param_1 + 0x2cf20);
        if ((undefined8 *)plVar7[2] == param_2) {
          *(int *)(param_1 + 0x2cf2c) = *(int *)(param_1 + 0x2cf2c) + 1;
        }
        else if ((undefined8 *)plVar7[1] == param_2) {
          *(int *)(param_1 + 0x2cf30) = *(int *)(param_1 + 0x2cf30) + 1;
        }
        else if ((undefined8 *)*plVar7 == param_2) {
          *(int *)(param_1 + 0x2cf34) = *(int *)(param_1 + 0x2cf34) + 1;
        }
      }
      puVar10 = *(undefined8 **)((long)param_2 + lVar9);
      lVar9 = lVar9 + 8;
    } while (puVar10 != (undefined8 *)0x0);
  }
  return;
}




void FUN_10024dc6c(long param_1)

{
  char cVar1;
  int iVar2;
  double dVar3;
  
  iVar2 = FUN_10015d3f8();
  if (iVar2 != 0) {
    cVar1 = *(char *)(param_1 + 0x2ceae);
    FUN_10015d3ec();
    dVar3 = (double)FUN_1001664b0();
    if ((bool)cVar1 != 0.0 < dVar3) {
      FUN_100186c14(param_1 + 0x28ce8,&DAT_101d91650);
      FUN_10015d3ec();
      dVar3 = (double)FUN_1001664b0();
      *(char *)(param_1 + 0x2ceae) = 0.0 < dVar3;
    }
  }
  FUN_10024dcf8(param_1);
  FUN_10024e17c(param_1);
  return;
}




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




void FUN_10024e17c(long param_1)

{
  long *plVar1;
  float *pfVar2;
  int iVar3;
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_70;
  float fStack_6c;
  undefined8 local_68;
  
  if (*(char *)(param_1 + 0x2cead) == '\0') {
    return;
  }
  plVar1 = (long *)(param_1 + 0x241d8);
  if (*(long *)(param_1 + 0x254f8) == 0) {
    iVar3 = FUN_10109c574();
    if (iVar3 == 0) {
      uVar5 = FUN_10109c4f0();
      if ((uVar5 & 1) != 0) goto LAB_10024e204;
    }
    else {
      iVar3 = FUN_10109c588();
      if (iVar3 != 0) {
        puVar4 = (uint *)FUN_10109c59c(0);
        if ((0xf < (int)*puVar4) && ((*puVar4 & 1) != 0)) goto LAB_10024e204;
      }
    }
    FUN_10024fa68(param_1);
  }
LAB_10024e204:
  if (*(char *)(param_1 + 0x2cead) == '\0') {
    return;
  }
  local_70 = 0.0;
  fStack_6c = 0.0;
  iVar3 = FUN_10109c574();
  if (iVar3 == 0) {
    FUN_10109c550(&fStack_6c,&local_70,0,0);
  }
  else {
    iVar3 = FUN_10109c588();
    if (iVar3 == 0) {
      FUN_10024fa68(param_1);
      return;
    }
    lVar6 = FUN_10109c59c(0);
    fStack_6c = *(float *)(lVar6 + 4);
    local_70 = *(float *)(lVar6 + 8);
  }
  pfVar2 = (float *)(param_1 + 0x135a0);
  lVar6 = FUN_10003d5bc(param_1 + 0x7a20);
  fVar10 = *(float *)(lVar6 + 0x10);
  fVar11 = *(float *)(lVar6 + 0x14);
  pfVar7 = (float *)FUN_10003d5bc(param_1 + 0x7a20);
  fVar11 = (local_70 - pfVar7[1]) / fVar11;
  fVar10 = (fStack_6c - *pfVar7) / fVar10;
  fVar8 = fStack_6c;
  if (*(char *)(param_1 + 0x2ceb6) == '\0') {
    *(undefined1 *)(param_1 + 0x2ceb6) = 1;
    fVar9 = *(float *)(param_1 + 0x2cf48) + *pfVar2;
    fVar8 = (fVar10 + -30.0) - fVar9;
    if (fVar10 <= fVar9) {
      fVar8 = fVar10 - *pfVar2;
    }
    *(float *)(param_1 + 0x2cf4c) = fVar8;
  }
  if (*(char *)(param_1 + 0x2ceb4) == '\0') {
    _local_70 = CONCAT44(*pfVar2,fVar11);
  }
  else {
    fVar10 = fVar10 - *(float *)(param_1 + 0x2cf4c);
    _local_70 = CONCAT44(fVar10,fVar11);
    fVar8 = *pfVar2;
    if ((fVar10 < fVar8) || (fVar8 = fVar8 + 30.0 + *(float *)(param_1 + 0x2cf48), fVar8 < fVar10))
    {
      _local_70 = CONCAT44(fVar8,fVar11);
    }
  }
  iVar3 = FUN_10024e660(param_1);
  if (iVar3 == 0) {
LAB_10024e3cc:
    if (*(char *)(param_1 + 0x2ceb4) == '\0') {
      fVar11 = *(float *)(param_1 + 0x135a4);
      fVar8 = *(float *)(param_1 + 0x1e27c);
      fVar10 = local_70;
      goto LAB_10024e3f8;
    }
  }
  else if (*(char *)(param_1 + 0x2ceb4) == '\0') {
    pfVar2 = (float *)(param_1 + 0x7fac);
    fVar8 = *pfVar2;
    if (*(float *)(param_1 + 0x135a4) + -30.0 <= local_70) {
      fVar10 = fVar8 + -10.0;
      if (*(float *)(param_1 + 0x1e27c) + *(float *)(param_1 + 0x135a4) < local_70) {
        fVar8 = fVar10;
      }
    }
    else {
      fVar10 = 10.0;
      fVar8 = fVar8 + 10.0;
    }
    FUN_100530a94(param_1 + 0x7f68);
    fVar9 = fVar10;
    FUN_10064e3cc(param_1 + 0x7dc8);
    fVar8 = (float)NEON_fminnm(fVar8,0);
    fVar11 = fVar9 - fVar10;
    if (fVar9 - fVar10 <= fVar8) {
      fVar11 = fVar8;
    }
    fVar8 = *pfVar2;
    if (fVar8 != fVar11) {
      *pfVar2 = fVar11;
      FUN_1000200a0(param_1 + 0x7f68);
    }
    goto LAB_10024e3cc;
  }
  fVar10 = local_70;
  fVar11 = *(float *)(param_1 + 0x135a4);
  FUN_10064e3cc(param_1 + 0x7dc8);
LAB_10024e3f8:
  fVar10 = (float)NEON_fminnm(fVar10,fVar11 + fVar8 + 36.0);
  fVar8 = fVar11 + -30.0;
  if (fVar11 + -30.0 <= fVar10) {
    fVar8 = fVar10;
  }
  _local_70 = CONCAT44(fStack_6c,fVar8);
  if ((*(float *)(param_1 + 0x24218) != fStack_6c) || (*(float *)(param_1 + 0x2421c) != fVar8)) {
    *(float *)(param_1 + 0x24218) = fStack_6c;
    *(float *)(param_1 + 0x2421c) = fVar8;
    FUN_1000200a0(plVar1);
  }
  local_68 = NEON_fmov(0x3f800000,4);
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_68);
  return;
}




void FUN_10024e480(undefined8 param_1)

{
  FUN_1001e6e14();
  FUN_10024bf9c(param_1);
  return;
}




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




ulong FUN_10024e660(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = FUN_1001311cc();
  if ((int)uVar2 != 0) {
    FUN_10018e8a8(param_1 + 0xb0e8);
    FUN_10034ccb8();
    uVar1 = FUN_10034cdd0();
    uVar2 = (ulong)(uVar1 ^ 1);
  }
  return uVar2;
}




void FUN_10024e69c(long param_1)

{
  long lVar1;
  uint *puVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int *piVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  string *psVar12;
  uint uVar13;
  int *piVar14;
  undefined8 *puVar15;
  long lVar16;
  void *local_68;
  void *local_60;
  char local_51;
  
  lVar1 = param_1 + 0xb0e8;
  FUN_10018e8a8(lVar1);
  piVar6 = (int *)FUN_10034ccb8();
  uVar7 = FUN_10034cdd0();
  if ((uVar7 & 1) == 0) {
    bVar4 = FUN_10034ce60(piVar6);
  }
  else {
    bVar4 = 1;
  }
  *(byte *)(param_1 + 0x2ceab) = bVar4;
  *(bool *)(param_1 + 0x2ceac) = *piVar6 == 0;
  *(undefined8 *)(param_1 + 0x2ced8) = 0;
  puVar15 = *(undefined8 **)(piVar6 + 10);
  piVar14 = (int *)*puVar15;
  if (piVar14 != (int *)0x0) {
    iVar5 = 0;
    lVar11 = 0;
    do {
      lVar16 = lVar11;
      iVar3 = *piVar14;
      *(int *)(param_1 + 0x2cee0 + lVar16 * 4) = iVar3;
      iVar5 = iVar5 + iVar3;
      if ((bVar4 & 1) != 0) break;
      piVar14 = (int *)puVar15[lVar16 + 1];
      lVar11 = lVar16 + 1;
    } while (piVar14 != (int *)0x0);
    *(int *)(param_1 + 0x2ced8) = (int)lVar16 + 1;
    *(int *)(param_1 + 0x2cedc) = iVar5;
  }
  FUN_100250e58(param_1);
  uVar7 = FUN_10034cdd0(piVar6);
  if ((((uVar7 & 1) != 0) || (iVar5 = FUN_10034ce60(piVar6), iVar5 != 0)) &&
     (*(uint *)(param_1 + 0x2cedc) < *(uint *)(param_1 + 0x2ce98))) {
    uVar8 = FUN_1004e0150("MENU_PARTY_CANT_SWITCH_TYPE_TITLE",0);
    uVar9 = FUN_1004e0150("MENU_PARTY_CANT_SWITCH_TYPE_MSG",0);
    uVar10 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    FUN_1001e3090(uVar8,uVar9,uVar10,0,0);
    FUN_10018e754(lVar1,param_1 + 0x2cec0,0,0);
    return;
  }
  puVar2 = (uint *)(param_1 + 0xda9c);
  if (*(char *)(param_1 + 0x2cea8) == '\0') {
    uVar7 = FUN_100131560();
    if ((uVar7 & 1) == 0) {
      FUN_10034cd68(&local_68,piVar6);
      FUN_1006513c0(param_1 + 0x84a0,&local_68);
      if (local_60 != (void *)0x0) {
        operator_delete__(local_60);
      }
    }
    FUN_10065179c(*(undefined4 *)(param_1 + 0x2cf38),0,0x3f800000,param_1 + 0x84a0);
    FUN_100251a50(param_1);
  }
  else {
    if (*(char *)(param_1 + 0x2ceab) == '\0') {
      FUN_1002538d8(param_1);
      lVar11 = FUN_10015d3ec();
      if (*(int *)(lVar11 + 0x55cc) == 2) {
        uVar8 = FUN_10015d3ec();
        FUN_100165784(uVar8,1);
      }
    }
    else {
      uVar13 = *(uint *)(param_1 + 0x105ac);
      if ((uVar13 & 0x7f80) != 0) {
        *(uint *)(param_1 + 0x105ac) = uVar13 & 0xffff807f;
        FUN_1000200a0(param_1 + 0x10528);
        uVar13 = *(uint *)(param_1 + 0x105ac);
      }
      *(uint *)(param_1 + 0x105ac) = uVar13 | 4;
      FUN_100642324(param_1 + 0x10528);
    }
    FUN_10034cd38(&local_68,piVar6);
    FUN_100181af8(param_1 + 0x107d0,&local_68);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
    }
  }
  lVar11 = FUN_10015d3ec();
  if (*(char *)(lVar11 + 0x567a) != '\0') {
    uVar8 = FUN_10034cd28(piVar6);
    FUN_10001549c(&local_68,uVar8);
    lVar11 = FUN_10031ffe0();
    if (*(int *)(lVar11 + 0x60) != 0) {
      puVar15 = *(undefined8 **)(lVar11 + 0x68);
      do {
        if ((code *)*puVar15 == (code *)0x0) {
          (*(code *)puVar15[3])(puVar15[2],&local_68);
        }
        else {
          (*(code *)*puVar15)(&local_68);
        }
        puVar15 = puVar15 + 4;
      } while (puVar15 !=
               (undefined8 *)(*(long *)(lVar11 + 0x68) + (ulong)*(uint *)(lVar11 + 0x60) * 0x20));
    }
    if (local_51 < '\0') {
      operator_delete(local_68);
    }
  }
  iVar5 = FUN_10034ce60(piVar6);
  uVar8 = FUN_10024e660(param_1);
  FUN_100530adc(param_1 + 0x7f68,0,uVar8);
  if (*(float *)(param_1 + 0x7fac) != 0.0) {
    *(float *)(param_1 + 0x7fac) = 0.0;
    FUN_1000200a0(param_1 + 0x7f68);
  }
  if (iVar5 == 0) {
    uVar13 = 0;
    *puVar2 = *puVar2 & 0xfffffffb;
  }
  else {
    *puVar2 = *puVar2 & 0xfffffffb | (uint)*(byte *)(param_1 + 0x2cea8) << 2;
    uVar13 = (uint)(*(byte *)(param_1 + 0x2cea8) == 0) << 2;
  }
  *(uint *)(param_1 + 0x8654) = *(uint *)(param_1 + 0x8654) & 0xfffffffb | uVar13;
  FUN_10024bf9c(param_1);
  if (*(char *)(param_1 + 0x2cea8) != '\0') {
    uVar8 = FUN_10015d3ec();
    iVar5 = *piVar6;
    if ((*(byte *)puVar2 >> 2 & 1) == 0) {
      puVar15 = &DAT_101d91198;
    }
    else {
      puVar15 = (undefined8 *)FUN_10018e8a8(param_1 + 0xda18);
    }
    lVar11 = FUN_10031ffe0();
    FUN_100165fc0(uVar8,iVar5,puVar15,lVar11 + 0x88);
  }
  psVar12 = (string *)FUN_10018e8a8(lVar1);
  std::string::operator=((string *)(param_1 + 0x2cec0),psVar12);
  uVar8 = FUN_10031ffe0();
  FUN_1003211c4(uVar8,*(undefined4 *)(param_1 + 0x2cee0));
  return;
}




void FUN_10024eac8(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  FUN_1001e6da8();
  iVar1 = FUN_1004eef10();
  if (iVar1 != 0) {
    uVar2 = FUN_10015d3ec();
    if (param_2 == 0) {
      FUN_100167cd4(uVar2,0);
      FUN_1001117e4(0);
    }
    else {
      FUN_100167cd4(uVar2,1);
      lVar3 = FUN_10015d3ec();
      if (*(char *)(lVar3 + 0x567a) != '\0') {
        lVar3 = FUN_10015d3ec();
        FUN_100169cec(lVar3 + 0x278);
        FUN_1001117e4(1);
      }
      FUN_1001b4c0c(param_1 + 0x107d0,1);
    }
    if (*(char *)(param_1 + 0x2ceaa) != '\0') {
      FUN_1000165f0(param_1 + 0x2cdf0,0);
      return;
    }
  }
  return;
}




void FUN_10024eb7c(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  void *local_38 [2];
  char local_21;
  
  lVar6 = FUN_10015d3ec();
  if (*(int *)(lVar6 + 0x55cc) == 2) {
    return;
  }
  if (*(char *)(param_1 + 0x2cea8) == '\0') {
    return;
  }
  bVar11 = *(byte *)((long)param_2 + 0x17);
  uVar9 = (ulong)bVar11;
  uVar10 = param_2[1];
  uVar1 = uVar10;
  if (-1 < (char)bVar11) {
    uVar1 = uVar9;
  }
  if (uVar1 == 6) {
    iVar5 = std::string::compare((ulong)param_2,0,(char *)0xffffffffffffffff,0x1013d9cf1);
    if (iVar5 != 0) {
      bVar11 = *(byte *)((long)param_2 + 0x17);
      uVar9 = (ulong)bVar11;
      uVar10 = param_2[1];
      goto LAB_10024ec04;
    }
  }
  else {
LAB_10024ec04:
    uVar1 = uVar10;
    if (-1 < (char)bVar11) {
      uVar1 = uVar9;
    }
    if (uVar1 == 6) {
      iVar5 = std::string::compare((ulong)param_2,0,(char *)0xffffffffffffffff,0x1013d9cea);
      if (iVar5 == 0) goto LAB_10024ec78;
      bVar11 = *(byte *)((long)param_2 + 0x17);
      uVar9 = (ulong)bVar11;
      uVar10 = param_2[1];
    }
    if (-1 < (char)bVar11) {
      uVar10 = uVar9;
    }
    if (uVar10 != 0xb) {
      return;
    }
    iVar5 = std::string::compare((ulong)param_2,0,(char *)0xffffffffffffffff,0x1013e865a);
    if (iVar5 != 0) {
      return;
    }
  }
LAB_10024ec78:
  uVar3 = *(uint *)(param_1 + 0xda9c);
  uVar4 = *(uint *)(param_1 + 0x8654);
  if (((uVar3 | uVar4) >> 2 & 1) != 0) {
    *(uint *)(param_1 + 0xda9c) = uVar3 & 0xfffffffb;
    *(uint *)(param_1 + 0x8654) = uVar4 & 0xfffffffb;
    FUN_10024bf9c(param_1);
  }
  bVar11 = *(byte *)((long)param_2 + 0x17);
  uVar9 = (ulong)bVar11;
  uVar10 = param_2[1];
  uVar1 = uVar10;
  if (-1 < (char)bVar11) {
    uVar1 = uVar9;
  }
  if (uVar1 == 6) {
    iVar5 = std::string::compare((ulong)param_2,0,(char *)0xffffffffffffffff,0x1013d9cf1);
    if (iVar5 != 0) {
      bVar11 = *(byte *)((long)param_2 + 0x17);
      uVar9 = (ulong)bVar11;
      uVar10 = param_2[1];
      goto LAB_10024ecf8;
    }
    pcVar8 = "*GameMode_HF_Casual*";
  }
  else {
LAB_10024ecf8:
    uVar1 = uVar10;
    if (-1 < (char)bVar11) {
      uVar1 = uVar9;
    }
    if (uVar1 == 6) {
      iVar5 = std::string::compare((ulong)param_2,0,(char *)0xffffffffffffffff,0x1013d9cea);
      if (iVar5 == 0) {
        pcVar8 = "*GameMode_HF_Ranked*";
        goto LAB_10024ed8c;
      }
      bVar11 = *(byte *)((long)param_2 + 0x17);
      uVar9 = (ulong)bVar11;
      uVar10 = param_2[1];
    }
    if (-1 < (char)bVar11) {
      uVar10 = uVar9;
    }
    if ((uVar10 != 0xb) ||
       (iVar5 = std::string::compare((ulong)param_2,0,(char *)0xffffffffffffffff,0x1013e865a),
       iVar5 != 0)) goto LAB_10024edbc;
    pcVar8 = "*GameMode_Aral_Casual*";
  }
LAB_10024ed8c:
  FUN_10001549c(local_38,pcVar8);
  FUN_10018e754(param_1 + 0xb0e8,local_38,0,0);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
LAB_10024edbc:
  uVar7 = FUN_10015d3ec();
  puVar2 = (ulong *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    puVar2 = param_2;
  }
  FUN_10001549c(local_38,puVar2);
  FUN_100166044(uVar7,local_38,&DAT_101d91198);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_10024ee10(long param_1,byte *param_2,undefined8 param_3)

{
  byte *pbVar1;
  size_t sVar2;
  undefined8 *******pppppppuVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  size_t sVar7;
  size_t sVar8;
  int iVar9;
  byte *pbVar10;
  ulong uVar11;
  byte *pbVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *******local_78;
  size_t local_70;
  undefined8 local_68;
  
  if ((*(long **)(param_1 + 0x2cd48) == (long *)0x0) ||
     (iVar9 = (**(code **)(**(long **)(param_1 + 0x2cd48) + 0x40))(), iVar9 != 2)) {
    local_78 = (undefined8 *******)0x0;
    local_70 = 0;
    local_68 = 0;
    if (*(int *)(param_1 + 0x2cde0) != 0) {
      uVar14 = 0;
      do {
        FUN_100188e18(param_1 + 0x28ce8,*(long *)(param_1 + 0x2cde8) + uVar14 * 0x88 + 0x18,
                      &local_78);
        uVar11 = (ulong)local_68._7_1_;
        uVar4 = (uint)(char)local_68._7_1_;
        sVar2 = local_70;
        if (-1 < (int)uVar4) {
          sVar2 = uVar11;
        }
        bVar5 = param_2[0x17];
        sVar7 = *(size_t *)(param_2 + 8);
        if (-1 < (char)bVar5) {
          sVar7 = (ulong)bVar5;
        }
        if (sVar2 == sVar7) {
          pppppppuVar3 = local_78;
          if (-1 < (int)uVar4) {
            pppppppuVar3 = &local_78;
          }
          pbVar12 = *(byte **)param_2;
          if (-1 < (char)bVar5) {
            pbVar12 = param_2;
          }
          if ((int)uVar4 < 0) {
            if ((sVar2 == 0) || (iVar9 = _memcmp(pppppppuVar3,pbVar12,sVar2), iVar9 == 0))
            goto LAB_10024f01c;
          }
          else {
            if (sVar2 == 0) {
LAB_10024f01c:
              FUN_1000153b4(param_3,*(long *)(param_1 + 0x2cde8) + (uVar14 & 0xffffffff) * 0x88 +
                                    0x18);
              if (-1 < local_68) {
                return;
              }
              goto LAB_10024f040;
            }
            pbVar10 = (byte *)((ulong)&local_78 | 1);
            if ((uint)*pbVar12 == ((uint)local_78 & 0xff)) {
              do {
                uVar11 = uVar11 - 1;
                pbVar12 = pbVar12 + 1;
                if (uVar11 == 0) goto LAB_10024f01c;
                bVar5 = *pbVar10;
                pbVar10 = pbVar10 + 1;
              } while (bVar5 == *pbVar12);
            }
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < *(uint *)(param_1 + 0x2cde0));
      if ((uVar4 >> 7 & 1) != 0) {
LAB_10024f040:
        operator_delete(local_78);
      }
    }
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x2cde0);
    bVar5 = param_2[0x17];
    pbVar12 = *(byte **)param_2;
    sVar2 = *(size_t *)(param_2 + 8);
    if (-1 < (char)bVar5) {
      pbVar12 = param_2;
      sVar2 = (ulong)bVar5;
    }
    if (uVar4 != 0) {
      uVar14 = 0;
      lVar13 = *(long *)(param_1 + 0x2cde8);
      do {
        pbVar10 = (byte *)(lVar13 + uVar14 * 0x88);
        bVar6 = pbVar10[0x17];
        sVar7 = *(size_t *)(pbVar10 + 8);
        if (-1 < (char)bVar6) {
          sVar7 = (ulong)bVar6;
        }
        if (sVar2 == sVar7) {
          pbVar1 = *(byte **)pbVar10;
          if (-1 < (char)bVar6) {
            pbVar1 = pbVar10;
          }
          sVar7 = (ulong)bVar5;
          pbVar10 = param_2;
          sVar8 = sVar2;
          if ((char)bVar5 < '\0') {
            if ((sVar2 == 0) || (iVar9 = _memcmp(pbVar12,pbVar1,sVar2), iVar9 == 0)) {
LAB_10024f04c:
              FUN_1000153b4(param_3,lVar13 + (uVar14 & 0xffffffff) * 0x88 + 0x18);
              return;
            }
          }
          else {
            while( true ) {
              if (sVar8 == 0) goto LAB_10024f04c;
              if (*pbVar10 != *pbVar1) break;
              pbVar1 = pbVar1 + 1;
              sVar7 = sVar7 - 1;
              pbVar10 = pbVar10 + 1;
              sVar8 = sVar7;
            }
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar4);
    }
  }
  return;
}




void FUN_10024f080(long param_1)

{
  FUN_10024ee10(param_1 + -0x2c48);
  return;
}




void FUN_10024f37c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10024f954(param_1,param_4);
  return;
}




void FUN_10024f384(void)

{
  return;
}




undefined8 FUN_10024f388(long param_1)

{
  FUN_10024f08c(param_1 + -0x2c48);
  return 1;
}




/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_10024f3a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  size_t sVar1;
  undefined8 *puVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  void *pvVar9;
  byte *pbVar10;
  byte *******pppppppbVar11;
  byte *******local_58;
  size_t local_50;
  byte local_41;
  
  plVar6 = *(long **)(param_1 + 0x2cd48);
  if (plVar6 == (long *)0x0) {
    return 0;
  }
  iVar5 = (**(code **)(*plVar6 + 0x40))();
  if (iVar5 != 2) {
    return 0;
  }
  lVar7 = FUN_10015d3ec();
  FUN_10001549c(&local_58,param_2);
  bVar3 = *(byte *)(lVar7 + 0x551f);
  uVar8 = (ulong)bVar3;
  sVar1 = *(size_t *)(lVar7 + 0x5510);
  if (-1 < (char)bVar3) {
    sVar1 = uVar8;
  }
  if (-1 < (char)local_41) {
    local_50 = (ulong)local_41;
  }
  if (sVar1 == local_50) {
    pvVar9 = *(void **)(lVar7 + 0x5508);
    puVar2 = pvVar9;
    if (-1 < (char)bVar3) {
      puVar2 = (undefined8 *)(lVar7 + 0x5508);
    }
    pppppppbVar11 = local_58;
    if (-1 < (char)local_41) {
      pppppppbVar11 = (byte *******)&local_58;
    }
    if ((char)bVar3 < '\0') {
      if (sVar1 != 0) {
        iVar5 = _memcmp(puVar2,pppppppbVar11,sVar1);
        bVar4 = iVar5 == 0;
        goto LAB_10024f4c8;
      }
    }
    else if (sVar1 != 0) {
      if ((uint)*(byte *)pppppppbVar11 == ((uint)pvVar9 & 0xff)) {
        pbVar10 = (byte *)(lVar7 + 0x5509);
        do {
          uVar8 = uVar8 - 1;
          pppppppbVar11 = (byte *******)((long)pppppppbVar11 + 1);
          bVar4 = uVar8 == 0;
          if (uVar8 == 0) break;
          bVar3 = *pbVar10;
          pbVar10 = pbVar10 + 1;
        } while (bVar3 == *(byte *)pppppppbVar11);
        goto LAB_10024f4c8;
      }
      goto LAB_10024f4a8;
    }
    bVar4 = true;
  }
  else {
LAB_10024f4a8:
    bVar4 = false;
  }
LAB_10024f4c8:
  if ((char)local_41 < '\0') {
    operator_delete(local_58);
  }
  if (!bVar4) {
    return 0;
  }
  plVar6 = *(long **)(param_1 + 0x2cd48);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x80))(plVar6,param_3,200);
  }
  return 1;
}




void FUN_10024f51c(long param_1)

{
  FUN_10024f3a8(param_1 + -0x2c48);
  return;
}




ulong FUN_10024f528(long param_1)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  
  FUN_10018e8a8(param_1 + 0xb0e8);
  piVar2 = (int *)FUN_10034ccb8();
  iVar1 = *piVar2;
  if (iVar1 == 10) {
    uVar3 = FUN_10024f5b0(param_1);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    iVar1 = *piVar2;
  }
  if ((iVar1 == 0x24) && (iVar1 = FUN_10024f630(param_1), iVar1 != *(int *)(param_1 + 0x2ced8))) {
    return 0;
  }
  iVar1 = FUN_10024f630(param_1);
  return (ulong)(iVar1 != 0);
}




bool FUN_10024f5b0(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  FUN_10018e8a8(param_1 + 0xb0e8);
  uVar3 = FUN_10034ccb8();
  iVar2 = FUN_10034cfec();
  if (iVar2 == 0) {
    bVar1 = true;
  }
  else {
    uVar5 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x2ce60 + uVar5 * 4);
      if (iVar2 == -1) break;
      uVar5 = uVar5 + 1;
      uVar4 = FUN_10034cfec(uVar3);
    } while (uVar5 < (uVar4 & 0xffffffff));
    bVar1 = iVar2 != -1;
  }
  return bVar1;
}




int FUN_10024f630(long param_1)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  lVar5 = 0;
  iVar4 = 0;
  uVar7 = 0;
  do {
    uVar3 = *(uint *)(param_1 + lVar5 * 4 + 0x2cee0);
    uVar6 = uVar7;
    if (uVar3 != 0xffffffff) {
      uVar6 = uVar7 & 0xffffffff;
      if (uVar3 != 0 && (uint)uVar7 < 0xe) {
        lVar8 = 0;
        do {
          if (*(int *)(param_1 + 0x2ce60 + uVar6 * 4 + lVar8 * 4) != -1) {
            iVar4 = iVar4 + 1;
            uVar6 = (ulong)((uint)uVar7 + uVar3);
            goto LAB_10024f6b4;
          }
          lVar1 = lVar8 + 1;
        } while (((uint)lVar1 < uVar3) && (uVar2 = uVar6 + lVar8, lVar8 = lVar1, uVar2 < 0xd));
        uVar6 = uVar6 + lVar1;
      }
    }
LAB_10024f6b4:
    lVar5 = lVar5 + 1;
    uVar7 = uVar6;
    if (lVar5 == 0x10) {
      return iVar4;
    }
  } while( true );
}




bool FUN_10024f6c8(long param_1)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = (char *)FUN_10018e8a8(param_1 + 0xb0e8);
  pcVar1 = *(char **)pcVar4;
  if (-1 < pcVar4[0x17]) {
    pcVar1 = pcVar4;
  }
  iVar3 = _strcmp(pcVar1,"*GameMode_HF_PrivateDraft*");
  if (iVar3 == 0) {
    bVar2 = true;
  }
  else {
    pcVar4 = (char *)FUN_10018e8a8(param_1 + 0xb0e8);
    pcVar1 = *(char **)pcVar4;
    if (-1 < pcVar4[0x17]) {
      pcVar1 = pcVar4;
    }
    iVar3 = _strcmp(pcVar1,"*GameMode_5v5_PrivateDraft*");
    bVar2 = iVar3 == 0;
  }
  return bVar2;
}




void FUN_10024f744(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  void *local_58 [2];
  char local_41;
  
  lVar4 = 0;
  *(undefined1 *)(param_1 + 0x2cea8) = 0;
  *(undefined4 *)(param_1 + 0x2ce98) = 0;
  lVar3 = param_1 + 0x13618;
  do {
    FUN_1001a0d78(lVar3);
    *(undefined4 *)(param_1 + 0x2ce60 + lVar4) = 0xffffffff;
    lVar3 = lVar3 + 0x1320;
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0x38);
  FUN_10024bd68(param_1);
  FUN_10001549c(local_58,"*GameMode_HF_Casual*");
  FUN_10018e754(param_1 + 0xb0e8,local_58,0,0);
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  uVar1 = FUN_1004e0150("MENU_PARTY_CASUAL_MATCH_BUTTON",0);
  FUN_100181af8(param_1 + 0x107d0,uVar1);
  uVar2 = FUN_100126b8c();
  if ((uVar2 & 1) != 0) {
    FUN_1002194c8(param_1 + 0x2c68);
  }
  return;
}




void FUN_10024f848(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_100644b2c(param_2);
  if (iVar1 != 1) {
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0x2ceaa) = 0;
      *(uint *)(param_1 + 0x28ce4) = *(uint *)(param_1 + 0x28ce4) & 0xfffffffb;
      *(uint *)(param_1 + 0x2620c) =
           *(uint *)(param_1 + 0x2620c) & 0xfffffff8 |
           *(uint *)(param_1 + 0x2620c) & 3 | (*(uint *)(param_1 + 0x2560c) >> 2 & 1) << 2;
    }
    return;
  }
  *(undefined1 *)(param_1 + 0x2ceaa) = 1;
  *(uint *)(param_1 + 0x28ce4) = *(uint *)(param_1 + 0x28ce4) | 4;
  *(uint *)(param_1 + 0x2620c) = *(uint *)(param_1 + 0x2620c) & 0xfffffffb;
  FUN_1000165f0(param_1 + 0x2cdf0,0);
  return;
}




void FUN_10024f8fc(long param_1)

{
  FUN_100186730(param_1 + 0x28ce8,1);
  std::string::operator=((string *)(param_1 + 0x2ce48),(string *)&DAT_101d91198);
  FUN_1000165f0(param_1 + 0x2cdf0,0);
  return;
}




void FUN_10024f954(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_10015d3ec();
  if (*(char *)(lVar1 + 0x567a) != '\0') {
    uVar2 = FUN_10002f320();
    FUN_100030598(uVar2,param_2,0);
    *(undefined1 *)(param_1 + 0x2ceaa) = 1;
    *(uint *)(param_1 + 0x28ce4) = *(uint *)(param_1 + 0x28ce4) | 4;
    *(uint *)(param_1 + 0x2620c) = *(uint *)(param_1 + 0x2620c) & 0xfffffffb;
    FUN_1000165f0(param_1 + 0x2cdf0,0);
    return;
  }
  return;
}




long FUN_10024f9f4(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_100183990(param_1,0);
  *puVar1 = &PTR_FUN_10147a6b8;
  FUN_100652cdc(puVar1 + 0x9a,"arrow_down");
  *(uint *)(param_1 + 0x374) = *(uint *)(param_1 + 0x374) & 0xfffffffb;
  *(uint *)(param_1 + 0x464) = *(uint *)(param_1 + 0x464) & 0xfffffffb;
  FUN_1001b495c(0,param_1);
  FUN_1001b4964(param_1,1);
  return param_1;
}




void FUN_10024fa68(long param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  
  *(uint *)(param_1 + 0x2425c) = *(uint *)(param_1 + 0x2425c) & 0xfffffffb;
  *(undefined1 *)(param_1 + 0x2cead) = 0;
  *(undefined1 *)(param_1 + 0x2ceb6) = 0;
  *(undefined4 *)(param_1 + 0x2cf4c) = 0;
  FUN_10025122c(param_1,1);
  uVar6 = *(uint *)(param_1 + 0x2ce9c);
  if (uVar6 < 0xe) {
    puVar1 = (uint *)(param_1 + (ulong)uVar6 * 0x1320 + 0x1369c);
    uVar2 = *puVar1;
    if ((~uVar2 & 0x7f80) != 0) {
      *puVar1 = uVar2 | 0x7f80;
      FUN_1000200a0(param_1 + (ulong)uVar6 * 0x1320 + 0x13618);
    }
  }
  lVar4 = *(long *)(param_1 + 0x254f8);
  if (lVar4 != 0) {
    FUN_1001a0edc(lVar4,0);
    *(long *)(param_1 + 0x254f8) = 0;
  }
  FUN_100530adc(param_1 + 0x263b0,0,1);
  uVar5 = FUN_10024e660(param_1);
  FUN_100530adc(param_1 + 0x7f68,0,uVar5);
  iVar3 = FUN_10024e660(param_1);
  uVar6 = 0x10;
  if (iVar3 == 0) {
    uVar6 = 0;
  }
  *(uint *)(param_1 + 0x7fec) = *(uint *)(param_1 + 0x7fec) & 0xffffffef | uVar6;
  return;
}




bool FUN_10024fb94(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = FUN_100655b6c(param_1 + 0x13770);
  uVar4 = FUN_1004e3654(uVar3,param_2);
  if ((uVar4 & 1) == 0) {
    param_1 = param_1 + 0x14a90;
    uVar4 = 0;
    do {
      uVar5 = uVar4;
      if (uVar5 == 0xd) break;
      uVar3 = FUN_100655b6c(param_1);
      iVar2 = FUN_1004e3654(uVar3,param_2);
      param_1 = param_1 + 0x1320;
      uVar4 = uVar5 + 1;
    } while (iVar2 == 0);
    bVar1 = uVar5 < 0xd;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}




void FUN_10024fc24(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = (long *)(param_1 + 0x289d8);
  if (*(uint *)(param_1 + 0x289d0) != 0) {
    uVar5 = 0;
    do {
      lVar3 = *(long *)(*plVar4 + uVar5 * 8);
      if (lVar3 == 0) break;
      uVar1 = FUN_100655b6c(lVar3 + 0x158);
      uVar2 = FUN_1004e3654(uVar1,param_2);
      if ((uVar2 & 1) != 0) goto LAB_10024fd10;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x289d0));
  }
  if (*(int *)(param_1 + 0x289e0) != 0) {
    uVar5 = 0;
    plVar4 = (long *)(param_1 + 0x289e8);
    do {
      lVar3 = *(long *)(*plVar4 + uVar5 * 8);
      if (lVar3 == 0) break;
      uVar1 = FUN_100655b6c(lVar3 + 0x158);
      uVar2 = FUN_1004e3654(uVar1,param_2);
      if ((uVar2 & 1) != 0) goto LAB_10024fd10;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x289e0));
  }
  if (*(int *)(param_1 + 0x289f0) != 0) {
    uVar5 = 0;
    plVar4 = (long *)(param_1 + 0x289f8);
    do {
      lVar3 = *(long *)(*plVar4 + uVar5 * 8);
      if (lVar3 == 0) {
        return;
      }
      uVar1 = FUN_100655b6c(lVar3 + 0x158);
      uVar2 = FUN_1004e3654(uVar1,param_2);
      if ((uVar2 & 1) != 0) {
LAB_10024fd10:
        *(undefined1 *)(*(long *)(*plVar4 + (uVar5 & 0xffffffff) * 8) + 0x1228) = param_3;
        return;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x289f0));
  }
  return;
}




void FUN_10024fd34(long param_1)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  byte *pbVar14;
  long lVar15;
  void *pvVar16;
  byte *pbVar17;
  int iVar18;
  long lVar19;
  ulong unaff_x23;
  ulong uVar20;
  long local_a0;
  code *local_98;
  long lStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulong local_78;
  undefined4 local_70;
  
  FUN_10024bd68();
  iVar18 = *(int *)(param_1 + 0x2cde0);
  lVar9 = FUN_10015d3ec();
  lVar10 = FUN_10015d3ec();
  uVar7 = DAT_101d91884;
  if (*(uint *)(param_1 + 0x2cdd0) != 0) {
    uVar20 = 0;
    do {
      operator_new(0x1510);
      local_a0 = thunk_FUN_1001a1114();
      puVar11 = (ulong *)(*(long *)(param_1 + 0x2cdd8) + uVar20 * 0x188);
      uVar13 = *puVar11;
      FUN_1001a15d8(puVar11[0x14],local_a0,puVar11 + 4,(int)puVar11[0x17],(int)puVar11[0x1d],
                    (uint)uVar13 & 0xffff,uVar13 >> 0x1f & 1,puVar11 + 1,uVar13 >> 0x20 & 1,
                    (uint)uVar13 >> 0x18 & 0x7f,puVar11 + 10,puVar11 + 0x11);
      unaff_x23 = unaff_x23 & 0xffffffff00000000 | uVar20;
      local_70 = uVar7;
      local_98 = FUN_1002501b4;
      local_88 = 0;
      uStack_80 = 0;
      lStack_90 = param_1;
      local_78 = unaff_x23;
      FUN_10001554c(local_a0 + 0xc40,&local_98);
      FUN_1001a1a6c(*(undefined4 *)(param_1 + 0x2cf44),0x42f00000,local_a0);
      bVar5 = *(byte *)(lVar10 + 0x54a7);
      uVar13 = (ulong)bVar5;
      sVar1 = *(size_t *)(lVar10 + 0x5498);
      if (-1 < (char)bVar5) {
        sVar1 = uVar13;
      }
      if (sVar1 == 0) {
LAB_10024ff74:
        bVar5 = *(byte *)(lVar9 + 0x548f);
        uVar13 = (ulong)bVar5;
        sVar1 = *(size_t *)(lVar9 + 0x5480);
        if (-1 < (char)bVar5) {
          sVar1 = uVar13;
        }
        if (sVar1 != 0) {
          lVar15 = *(long *)(param_1 + 0x2cdd8) + uVar20 * 0x188;
          bVar6 = *(byte *)(lVar15 + 0x67);
          sVar2 = *(size_t *)(lVar15 + 0x58);
          if (-1 < (char)bVar6) {
            sVar2 = (ulong)bVar6;
          }
          if (sVar1 == sVar2) {
            pbVar14 = *(byte **)(lVar15 + 0x50);
            if (-1 < (char)bVar6) {
              pbVar14 = (byte *)(lVar15 + 0x50);
            }
            if ((char)bVar5 < '\0') {
              iVar8 = _memcmp(*(void **)(lVar9 + 0x5478),pbVar14,sVar1);
              if (iVar8 == 0) {
LAB_10025016c:
                FUN_1002501bc(param_1 + 0x289e0,&local_a0);
                lVar15 = param_1 + 0x273e0;
                goto LAB_100250020;
              }
            }
            else {
              pbVar17 = (byte *)(lVar9 + 0x5479);
              if ((uint)*pbVar14 == ((uint)*(void **)(lVar9 + 0x5478) & 0xff)) {
                do {
                  uVar13 = uVar13 - 1;
                  pbVar14 = pbVar14 + 1;
                  if (uVar13 == 0) goto LAB_10025016c;
                  bVar5 = *pbVar17;
                  pbVar17 = pbVar17 + 1;
                } while (bVar5 == *pbVar14);
              }
            }
          }
        }
        FUN_1002501bc(param_1 + 0x289d0,&local_a0);
        lVar15 = param_1 + 0x268e8;
      }
      else {
        lVar15 = *(long *)(param_1 + 0x2cdd8) + uVar20 * 0x188;
        bVar6 = *(byte *)(lVar15 + 0x9f);
        sVar2 = *(size_t *)(lVar15 + 0x90);
        if (-1 < (char)bVar6) {
          sVar2 = (ulong)bVar6;
        }
        if (sVar1 != sVar2) goto LAB_10024ff74;
        pbVar14 = *(byte **)(lVar15 + 0x88);
        if (-1 < (char)bVar6) {
          pbVar14 = (byte *)(lVar15 + 0x88);
        }
        if (-1 < (char)bVar5) {
          pbVar17 = (byte *)(lVar10 + 0x5491);
          if ((uint)*pbVar14 == ((uint)*(void **)(lVar10 + 0x5490) & 0xff)) {
            do {
              uVar13 = uVar13 - 1;
              pbVar14 = pbVar14 + 1;
              if (uVar13 == 0) goto LAB_100250154;
              bVar5 = *pbVar17;
              pbVar17 = pbVar17 + 1;
            } while (bVar5 == *pbVar14);
          }
          goto LAB_10024ff74;
        }
        iVar8 = _memcmp(*(void **)(lVar10 + 0x5490),pbVar14,sVar1);
        if (iVar8 != 0) goto LAB_10024ff74;
LAB_100250154:
        FUN_1002501bc(param_1 + 0x289f0,&local_a0);
        lVar15 = param_1 + 0x27ed8;
      }
LAB_100250020:
      FUN_100642bd8(lVar15,local_a0,1);
      if (0 < iVar18) {
        uVar13 = 0;
        do {
          lVar15 = param_1 + uVar13 * 4;
          uVar4 = *(uint *)(lVar15 + 0x2ce60);
          if (uVar4 == 0xffffffff) {
            *(undefined4 *)(lVar15 + 0x2ce10) = 1;
          }
          else {
            lVar19 = *(long *)(param_1 + 0x2cdd8);
            lVar15 = lVar19 + uVar20 * 0x188;
            pbVar14 = (byte *)(*(long *)(param_1 + 0x2cde8) + (ulong)uVar4 * 0x88);
            bVar5 = *(byte *)(lVar15 + 0x1f);
            uVar12 = (ulong)bVar5;
            sVar1 = *(size_t *)(lVar15 + 0x10);
            if (-1 < (char)bVar5) {
              sVar1 = uVar12;
            }
            bVar6 = pbVar14[0x17];
            sVar2 = *(size_t *)(pbVar14 + 8);
            if (-1 < (char)bVar6) {
              sVar2 = (ulong)bVar6;
            }
            if (sVar1 == sVar2) {
              pvVar16 = *(void **)(lVar15 + 8);
              puVar3 = pvVar16;
              if (-1 < (char)bVar5) {
                puVar3 = (undefined8 *)(lVar15 + 8);
              }
              pbVar17 = *(byte **)pbVar14;
              if (-1 < (char)bVar6) {
                pbVar17 = pbVar14;
              }
              if ((char)bVar5 < '\0') {
                if ((sVar1 == 0) || (iVar8 = _memcmp(puVar3,pbVar17,sVar1), iVar8 == 0))
                goto LAB_100250124;
              }
              else {
                if (sVar1 == 0) {
LAB_100250124:
                  *(uint *)(param_1 + (uVar13 & 0xffffffff) * 4 + 0x2ce10) =
                       (uint)*(ushort *)(lVar19 + uVar20 * 0x188);
                  iVar18 = iVar18 + -1;
                  break;
                }
                if ((uint)*pbVar17 == ((uint)pvVar16 & 0xff)) {
                  pbVar14 = (byte *)(lVar19 + uVar20 * 0x188 + 9);
                  do {
                    uVar12 = uVar12 - 1;
                    pbVar17 = pbVar17 + 1;
                    if (uVar12 == 0) goto LAB_100250124;
                    bVar5 = *pbVar14;
                    pbVar14 = pbVar14 + 1;
                  } while (bVar5 == *pbVar17);
                }
              }
            }
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 != 0xe);
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < *(uint *)(param_1 + 0x2cdd0));
  }
  FUN_10025023c(param_1);
  FUN_100250c04(param_1);
  return;
}




void thunk_FUN_100247a5c(void)

{
  FUN_100247a5c();
  return;
}

