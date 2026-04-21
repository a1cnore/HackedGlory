// ui/profile/profile_panel.c — 62 UI functions (profile)
// Extracted by extract_ui.py from structured/functions/
#include "GameKindred.h"



/*
 * FUN_100191e28
 * VA: 0x100191e28 | Source: functions/10019.c:1527
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 6, Vis masks: 14
 * Callees: FUN_10001554c, FUN_1000200a0, FUN_100126b4c, FUN_100126c88, FUN_1001816d4, FUN_100181b5c, FUN_100181c68, FUN_1001918b4 (+39 more)
 */
long * FUN_100191e28(long *param_1)

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
  undefined **ppuVar23;
  undefined **ppuVar24;
  uint uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  bool bVar28;
  int iVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined8 uVar32;
  long *plVar33;
  float fVar34;
  float fVar35;
  undefined1 auStack_c4 [4];
  undefined1 auStack_c0 [4];
  undefined1 auStack_bc [4];
  code *local_b8;
  long *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  
  plVar33 = param_1 + 0x15fa;
  puVar30 = (undefined8 *)FUN_10064e20c();
  *puVar30 = &PTR_thunk_FUN_10019427c_101460f90;
  puVar30 = puVar30 + 0x17;
  FUN_1006421a8(puVar30);
  param_1[0x17] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x28;
  thunk_FUN_100652c08();
  plVar2 = param_1 + 0x46;
  thunk_FUN_100652c08();
  plVar3 = param_1 + 100;
  thunk_FUN_100652c08();
  plVar4 = param_1 + 0x82;
  FUN_1006421a8();
  param_1[0x82] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar5 = param_1 + 0x93;
  FUN_10064e264();
  plVar6 = param_1 + 0xaa;
  FUN_10064fd54(plVar6,1);
  param_1[0xaa] = (long)&PTR_thunk_FUN_10064e2bc_101451a40;
  plVar7 = param_1 + 0xc3;
  thunk_FUN_100650e64(plVar7);
  plVar8 = param_1 + 0xe9;
  thunk_FUN_100650e64();
  plVar9 = param_1 + 0x10f;
  thunk_FUN_100183990(plVar9,0);
  plVar10 = param_1 + 0x1cd;
  thunk_FUN_100650e64(plVar10);
  plVar11 = param_1 + 499;
  thunk_FUN_100650e64();
  plVar12 = param_1 + 0x219;
  thunk_FUN_100183990(plVar12,0);
  plVar13 = param_1 + 0x2d7;
  thunk_FUN_1001a1f9c();
  plVar14 = param_1 + 0x5b2;
  thunk_FUN_1001a1f9c();
  plVar15 = param_1 + 0x88d;
  thunk_FUN_1001a1f9c();
  plVar16 = param_1 + 0xb68;
  FUN_10064fd54(plVar16,1);
  param_1[0xb68] = (long)&PTR_thunk_FUN_10064e2bc_101451a40;
  FUN_1001918b4();
  FUN_100191afc();
  FUN_1001918b4();
  FUN_1001918b4();
  plVar17 = param_1 + 0xdeb;
  FUN_10064fd54(plVar17,1);
  param_1[0xdeb] = (long)&PTR_thunk_FUN_10064e2bc_101451a40;
  FUN_1001918b4();
  FUN_100191afc();
  FUN_1001918b4();
  FUN_1001918b4();
  plVar18 = param_1 + 0x106e;
  thunk_FUN_100181304(plVar18,0);
  plVar19 = param_1 + 0x1325;
  thunk_FUN_100652c08(plVar19);
  plVar20 = param_1 + 0x1343;
  thunk_FUN_100181304(plVar20,0);
  puVar31 = (undefined8 *)FUN_10064fd54(plVar33,0);
  *puVar31 = &PTR_thunk_FUN_10064e2bc_10144caa0;
  plVar21 = param_1 + 0x1613;
  thunk_FUN_100181304(plVar21,0);
  plVar22 = param_1 + 0x18ca;
  thunk_FUN_100181304(plVar22,0);
  *(undefined1 *)(param_1 + 0x1b81) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar30,1);
  FUN_100642bd8(puVar30,plVar2,1);
  FUN_100642bd8(puVar30,plVar1,1);
  FUN_100642bd8(puVar30,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar18,1);
  FUN_100642bd8(plVar18,plVar19,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_100642bd8(plVar4,plVar5,1);
  FUN_100642bd8(plVar5,plVar6,1);
  FUN_100642bd8(plVar6,plVar7,1);
  FUN_100642bd8(plVar7,plVar9,1);
  FUN_100642bd8(plVar6,plVar8,1);
  FUN_100642bd8(plVar6,plVar10,1);
  FUN_100642bd8(plVar10,plVar12,1);
  FUN_100642bd8(plVar6,plVar11,1);
  FUN_100642bd8(plVar6,plVar13,1);
  FUN_100642bd8(plVar6,plVar14,1);
  FUN_100642bd8(plVar6,plVar15,1);
  FUN_100642bd8(plVar5,plVar16,1);
  FUN_100642bd8(plVar16,param_1 + 0xb81,1);
  FUN_100642bd8(plVar16,param_1 + 0xbfd,1);
  FUN_100642bd8(plVar16,param_1 + 0xcf3,1);
  FUN_100642bd8(plVar16,param_1 + 0xd6f,1);
  FUN_100642bd8(plVar5,plVar17,1);
  FUN_100642bd8(plVar17,param_1 + 0xe04,1);
  FUN_100642bd8(plVar17,param_1 + 0xe80,1);
  FUN_100642bd8(plVar17,param_1 + 0xf76,1);
  FUN_100642bd8(plVar17,param_1 + 0xff2,1);
  FUN_100642bd8(plVar4,plVar20,1);
  FUN_100642bd8(plVar4,plVar33,1);
  FUN_100642bd8(plVar33,plVar22,1);
  FUN_100642bd8(plVar33,plVar21,1);
  uVar32 = FUN_100126b4c();
  FUN_1001e35ec(param_1,uVar32,auStack_bc,auStack_c0,auStack_c4);
  iVar29 = FUN_100126c88();
  plVar33 = (long *)thunk_FUN_10064dde8();
  (**(code **)(*plVar33 + 0x68))(plVar33,plVar6,3,10);
  (**(code **)(*plVar33 + 0x68))(plVar33,plVar16,2,10);
  (**(code **)(*plVar33 + 0x68))(plVar33,plVar17,2,10);
  FUN_10064a8b0(plVar33,0x50,0,0x50,0);
  FUN_10064e524(plVar5,plVar33);
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  uVar25 = *(uint *)((long)param_1 + 0x1c4);
  if ((uVar25 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x1c4) = uVar25 & 0xffff8000 | uVar25 & 0x7f | 0x1980;
    FUN_1000200a0(plVar1);
  }
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  if ((*(uint *)((long)param_1 + 0x2b4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x2b4) = *(uint *)((long)param_1 + 0x2b4) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar2);
  }
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  uVar25 = *(uint *)((long)param_1 + 0x3a4);
  if ((uVar25 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x3a4) = uVar25 & 0xffff8000 | uVar25 & 0x7f | 0x1980;
    FUN_1000200a0(plVar3);
  }
  *(byte *)(param_1 + 0x7f) = *(byte *)(param_1 + 0x7f) | 2;
  if ((*(float *)(param_1 + 0x6e) != 0.0) || (*(float *)((long)param_1 + 0x374) != 1.0)) {
    param_1[0x6e] = 0x3f80000000000000;
    FUN_1000200a0(plVar3);
  }
  FUN_100652dd4(plVar3,&DAT_10115a164,2);
  FUN_100652cdc(param_1 + 0x1a9,"edit_handle");
  *(uint *)((long)param_1 + 0xcdc) = *(uint *)((long)param_1 + 0xcdc) & 0xfffffffb;
  FUN_1001b495c(0x3ecccccd,plVar9);
  uVar25 = *(uint *)((long)param_1 + 0x8fc);
  if ((uVar25 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x8fc) = uVar25 & 0xffff8000 | uVar25 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar9);
  }
  uVar27 = DAT_101d91884;
  local_90 = DAT_101d91884;
  local_b8 = thunk_FUN_100194050;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(param_1 + 0x110,&local_b8);
  FUN_1001b4964(plVar9,1);
  if ((*(float *)(param_1 + 0x118) != 0.7) || (*(float *)((long)param_1 + 0x8c4) != 0.7)) {
    param_1[0x118] = 0x3f3333333f333333;
    FUN_1000200a0(plVar9);
  }
  bVar28 = iVar29 == 0;
  ppuVar24 = &PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0;
  if (bVar28) {
    ppuVar24 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  }
  fVar35 = 1000.0;
  if (bVar28) {
    fVar35 = 800.0;
  }
  ppuVar23 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (bVar28) {
    ppuVar23 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(plVar7,*ppuVar24);
  uVar32 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_GUILD_MOTTO_LABEL",0);
  FUN_1006513c0(plVar7,uVar32);
  fVar34 = (float)FUN_10064259c(plVar9);
  FUN_10065179c(fVar35 - fVar34,0,0x3f800000,plVar10);
  FUN_1006515d8(plVar8,0);
  FUN_100651038(plVar8,*ppuVar23);
  uVar25 = *(uint *)((long)param_1 + 0x7cc);
  if ((uVar25 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x7cc) = uVar25 & 0xffff8000 | uVar25 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar8);
  }
  FUN_100651708(fVar35,plVar8,1);
  FUN_100652cdc(param_1 + 0x2b3,"edit_handle");
  *(uint *)((long)param_1 + 0x152c) = *(uint *)((long)param_1 + 0x152c) & 0xfffffffb;
  FUN_1001b495c(0x3ecccccd,plVar12);
  uVar25 = *(uint *)((long)param_1 + 0x114c);
  if ((uVar25 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x114c) = uVar25 & 0xffff8000 | uVar25 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar12);
  }
  local_90 = uVar27;
  local_b8 = thunk_FUN_1001940a0;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(param_1 + 0x21a,&local_b8);
  FUN_1001b4964(plVar12,1);
  if ((*(float *)(param_1 + 0x222) != 0.7) || (*(float *)((long)param_1 + 0x1114) != 0.7)) {
    param_1[0x222] = 0x3f3333333f333333;
    FUN_1000200a0(plVar12);
  }
  ppuVar24 = &PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0;
  if (iVar29 == 0) {
    ppuVar24 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  }
  ppuVar23 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (iVar29 == 0) {
    ppuVar23 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(plVar10,*ppuVar24);
  uVar32 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_GUILD_MESSAGE_LABEL",0);
  FUN_1006513c0(plVar10,uVar32);
  fVar34 = (float)FUN_10064259c(plVar12);
  FUN_10065179c(fVar35 - fVar34,0,0x3f800000,plVar10);
  FUN_1006515d8(plVar11,0);
  FUN_100651038(plVar11,*ppuVar23);
  FUN_1004e3120(&local_b8,
                "Contrary to popular belief, Lorem Ipsum is not simply random text. It has roots in a piece of classical Latin literature from 45 BC, making it over 2000 years old. Richard McClintock, a Latin professor at Hampden-Sydney College in Virginia, looked up one of the more obscure Latin words, consectetur, fr"
               );
  FUN_1006513c0(plVar11,&local_b8);
  if (local_b0 != (long *)0x0) {
    operator_delete__(local_b0);
  }
  uVar25 = *(uint *)((long)param_1 + 0x101c);
  if ((uVar25 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x101c) = uVar25 & 0xffff8000 | uVar25 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar11);
  }
  FUN_100651708(fVar35,plVar11,1);
  ppuVar24 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar29 == 0) {
    ppuVar24 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  }
  FUN_1001816d4(0,0,fVar35,plVar13,0,&DAT_101d91650,&DAT_10115a168,&DAT_101dc1cb8,*ppuVar24);
  plVar1 = param_1 + 0x365;
  fVar34 = (float)FUN_100652390(plVar1,0);
  FUN_100181b5c(*(float *)(param_1 + 0x3b9) * -fVar34,0,plVar13);
  *(uint *)((long)param_1 + 0x1bac) = *(uint *)((long)param_1 + 0x1bac) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x1a5c) = *(uint *)((long)param_1 + 0x1a5c) & 0xfffffffb;
  FUN_1001816d4(0,0,fVar35,plVar14,0,&DAT_101d91650,&DAT_10115a168,&DAT_101dc1cb8,*ppuVar24);
  fVar34 = (float)FUN_100652390(plVar1,0);
  FUN_100181b5c(*(float *)(param_1 + 0x3b9) * -fVar34,0,plVar14);
  *(uint *)((long)param_1 + 0x3284) = *(uint *)((long)param_1 + 0x3284) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x3134) = *(uint *)((long)param_1 + 0x3134) & 0xfffffffb;
  FUN_1001816d4(0,0,fVar35,plVar15,0,&DAT_101d91650,&DAT_10115a168,&DAT_101dc1cb8,*ppuVar24);
  fVar35 = (float)FUN_100652390(plVar1,0);
  FUN_100181b5c(*(float *)(param_1 + 0x3b9) * -fVar35,0,plVar15);
  *(uint *)((long)param_1 + 0x495c) = *(uint *)((long)param_1 + 0x495c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x480c) = *(uint *)((long)param_1 + 0x480c) & 0xfffffffb;
  if ((*(uint *)((long)param_1 + 0x494) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x494) = *(uint *)((long)param_1 + 0x494) & 0xffff807f;
    FUN_1000200a0(plVar4);
  }
  uVar32 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_GUILD_DETAILS_BUTTON",0);
  FUN_1001816d4(0x41f00000,0,0x44480000,plVar18,0,uVar32,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_90 = uVar27;
  local_b8 = FUN_100192d44;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(param_1 + 0x106f,&local_b8);
  *(uint *)((long)param_1 + 0x8864) = *(uint *)((long)param_1 + 0x8864) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x8714) = *(uint *)((long)param_1 + 0x8714) & 0xfffffffb;
  FUN_100651038(param_1 + 0x1151,PTR_s_build___Fonts_Brandon_Regular_48_10184e200);
  FUN_1001b495c(0xbf800000,plVar18);
  FUN_1001b4964(plVar18,1);
  FUN_100652cac(plVar19,PTR_s_build___MenuPartsCommon_tga_101854970,"arrow_right");
  if ((*(float *)(param_1 + 0x132f) != 0.5) || (*(float *)((long)param_1 + 0x997c) != 0.5)) {
    param_1[0x132f] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar19);
  }
  uVar32 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_EDIT_GUILD_BUTTON",0);
  FUN_1001816d4(0x41f00000,0,0x44480000,plVar20,0,uVar32,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_90 = uVar27;
  local_b8 = thunk_FUN_100194000;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(param_1 + 0x1344,&local_b8);
  FUN_1001b4964(plVar20,1);
  uVar32 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_JOIN",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x44960000,plVar21,0,uVar32,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_90 = uVar27;
  local_b8 = thunk_FUN_1001940f0;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(param_1 + 0x1614,&local_b8);
  ppuVar24 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar29 == 0) {
    ppuVar24 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  }
  uVar26 = 0x43380000;
  if (iVar29 == 0) {
    uVar26 = 0x4300cccd;
  }
  FUN_100651038(param_1 + 0x16f6,*ppuVar24);
  FUN_100181c68(uVar26,plVar21);
  FUN_1001b4964(plVar21,1);
  uVar32 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_DECLINE",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x44960000,plVar22,0,uVar32,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_90 = uVar27;
  local_b8 = thunk_FUN_100194140;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(param_1 + 0x18cb,&local_b8);
  FUN_100651038(param_1 + 0x19ad,*ppuVar24);
  FUN_100181c68(uVar26,plVar22);
  FUN_1001b4964(plVar22,1);
  *(uint *)((long)param_1 + 0xb11c) = *(uint *)((long)param_1 + 0xb11c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0xc6d4) = *(uint *)((long)param_1 + 0xc6d4) & 0xfffffffb;
  *(uint *)((long)param_1 + 0xb054) = *(uint *)((long)param_1 + 0xb054) & 0xfffffffb;
  FUN_100192db8(param_1);
  if ((*(float *)(param_1 + 0xb72) != 0.5) || (*(float *)((long)param_1 + 0x5b94) != 0.0)) {
    param_1[0xb72] = 0x3f000000;
    FUN_1000200a0(plVar16);
  }
  if ((*(float *)(param_1 + 0xdf5) != 0.5) || (*(float *)((long)param_1 + 0x6fac) != 0.0)) {
    param_1[0xdf5] = 0x3f000000;
    FUN_1000200a0(plVar17);
  }
  *(uint *)((long)param_1 + 0x494) = *(uint *)((long)param_1 + 0x494) & 0xfffffffb;
  FUN_100192db8(param_1);
  return param_1;
}



/*
 * thunk_FUN_100191e28
 * VA: 0xthunk_100191e28 | Source: functions/10019.c:2220
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 6, Vis masks: 14
 * Callees: FUN_10001554c, FUN_1000200a0, FUN_100126b4c, FUN_100126c88, FUN_1001816d4, FUN_100181b5c, FUN_100181c68, FUN_1001918b4 (+39 more)
 * Callers: FUN_100232f00, thunk_FUN_100232f00
 */
long * thunk_FUN_100191e28(long *param_1)

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
  undefined **ppuVar23;
  undefined **ppuVar24;
  uint uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  bool bVar28;
  int iVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined8 uVar32;
  long *plVar33;
  float fVar34;
  float fVar35;
  undefined1 auStack_c4 [4];
  undefined1 auStack_c0 [4];
  undefined1 auStack_bc [4];
  code *pcStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  
  plVar33 = param_1 + 0x15fa;
  puVar30 = (undefined8 *)FUN_10064e20c();
  *puVar30 = &PTR_thunk_FUN_10019427c_101460f90;
  puVar30 = puVar30 + 0x17;
  FUN_1006421a8(puVar30);
  param_1[0x17] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x28;
  thunk_FUN_100652c08();
  plVar2 = param_1 + 0x46;
  thunk_FUN_100652c08();
  plVar3 = param_1 + 100;
  thunk_FUN_100652c08();
  plVar4 = param_1 + 0x82;
  FUN_1006421a8();
  param_1[0x82] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar5 = param_1 + 0x93;
  FUN_10064e264();
  plVar6 = param_1 + 0xaa;
  FUN_10064fd54(plVar6,1);
  param_1[0xaa] = (long)&PTR_thunk_FUN_10064e2bc_101451a40;
  plVar7 = param_1 + 0xc3;
  thunk_FUN_100650e64(plVar7);
  plVar8 = param_1 + 0xe9;
  thunk_FUN_100650e64();
  plVar9 = param_1 + 0x10f;
  thunk_FUN_100183990(plVar9,0);
  plVar10 = param_1 + 0x1cd;
  thunk_FUN_100650e64(plVar10);
  plVar11 = param_1 + 499;
  thunk_FUN_100650e64();
  plVar12 = param_1 + 0x219;
  thunk_FUN_100183990(plVar12,0);
  plVar13 = param_1 + 0x2d7;
  thunk_FUN_1001a1f9c();
  plVar14 = param_1 + 0x5b2;
  thunk_FUN_1001a1f9c();
  plVar15 = param_1 + 0x88d;
  thunk_FUN_1001a1f9c();
  plVar16 = param_1 + 0xb68;
  FUN_10064fd54(plVar16,1);
  param_1[0xb68] = (long)&PTR_thunk_FUN_10064e2bc_101451a40;
  FUN_1001918b4();
  FUN_100191afc();
  FUN_1001918b4();
  FUN_1001918b4();
  plVar17 = param_1 + 0xdeb;
  FUN_10064fd54(plVar17,1);
  param_1[0xdeb] = (long)&PTR_thunk_FUN_10064e2bc_101451a40;
  FUN_1001918b4();
  FUN_100191afc();
  FUN_1001918b4();
  FUN_1001918b4();
  plVar18 = param_1 + 0x106e;
  thunk_FUN_100181304(plVar18,0);
  plVar19 = param_1 + 0x1325;
  thunk_FUN_100652c08(plVar19);
  plVar20 = param_1 + 0x1343;
  thunk_FUN_100181304(plVar20,0);
  puVar31 = (undefined8 *)FUN_10064fd54(plVar33,0);
  *puVar31 = &PTR_thunk_FUN_10064e2bc_10144caa0;
  plVar21 = param_1 + 0x1613;
  thunk_FUN_100181304(plVar21,0);
  plVar22 = param_1 + 0x18ca;
  thunk_FUN_100181304(plVar22,0);
  *(undefined1 *)(param_1 + 0x1b81) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar30,1);
  FUN_100642bd8(puVar30,plVar2,1);
  FUN_100642bd8(puVar30,plVar1,1);
  FUN_100642bd8(puVar30,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar18,1);
  FUN_100642bd8(plVar18,plVar19,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_100642bd8(plVar4,plVar5,1);
  FUN_100642bd8(plVar5,plVar6,1);
  FUN_100642bd8(plVar6,plVar7,1);
  FUN_100642bd8(plVar7,plVar9,1);
  FUN_100642bd8(plVar6,plVar8,1);
  FUN_100642bd8(plVar6,plVar10,1);
  FUN_100642bd8(plVar10,plVar12,1);
  FUN_100642bd8(plVar6,plVar11,1);
  FUN_100642bd8(plVar6,plVar13,1);
  FUN_100642bd8(plVar6,plVar14,1);
  FUN_100642bd8(plVar6,plVar15,1);
  FUN_100642bd8(plVar5,plVar16,1);
  FUN_100642bd8(plVar16,param_1 + 0xb81,1);
  FUN_100642bd8(plVar16,param_1 + 0xbfd,1);
  FUN_100642bd8(plVar16,param_1 + 0xcf3,1);
  FUN_100642bd8(plVar16,param_1 + 0xd6f,1);
  FUN_100642bd8(plVar5,plVar17,1);
  FUN_100642bd8(plVar17,param_1 + 0xe04,1);
  FUN_100642bd8(plVar17,param_1 + 0xe80,1);
  FUN_100642bd8(plVar17,param_1 + 0xf76,1);
  FUN_100642bd8(plVar17,param_1 + 0xff2,1);
  FUN_100642bd8(plVar4,plVar20,1);
  FUN_100642bd8(plVar4,plVar33,1);
  FUN_100642bd8(plVar33,plVar22,1);
  FUN_100642bd8(plVar33,plVar21,1);
  uVar32 = FUN_100126b4c();
  FUN_1001e35ec(param_1,uVar32,auStack_bc,auStack_c0,auStack_c4);
  iVar29 = FUN_100126c88();
  plVar33 = (long *)thunk_FUN_10064dde8();
  (**(code **)(*plVar33 + 0x68))(plVar33,plVar6,3,10);
  (**(code **)(*plVar33 + 0x68))(plVar33,plVar16,2,10);
  (**(code **)(*plVar33 + 0x68))(plVar33,plVar17,2,10);
  FUN_10064a8b0(plVar33,0x50,0,0x50,0);
  FUN_10064e524(plVar5,plVar33);
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  uVar25 = *(uint *)((long)param_1 + 0x1c4);
  if ((uVar25 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x1c4) = uVar25 & 0xffff8000 | uVar25 & 0x7f | 0x1980;
    FUN_1000200a0(plVar1);
  }
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  if ((*(uint *)((long)param_1 + 0x2b4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x2b4) = *(uint *)((long)param_1 + 0x2b4) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar2);
  }
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  uVar25 = *(uint *)((long)param_1 + 0x3a4);
  if ((uVar25 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x3a4) = uVar25 & 0xffff8000 | uVar25 & 0x7f | 0x1980;
    FUN_1000200a0(plVar3);
  }
  *(byte *)(param_1 + 0x7f) = *(byte *)(param_1 + 0x7f) | 2;
  if ((*(float *)(param_1 + 0x6e) != 0.0) || (*(float *)((long)param_1 + 0x374) != 1.0)) {
    param_1[0x6e] = 0x3f80000000000000;
    FUN_1000200a0(plVar3);
  }
  FUN_100652dd4(plVar3,&DAT_10115a164,2);
  FUN_100652cdc(param_1 + 0x1a9,"edit_handle");
  *(uint *)((long)param_1 + 0xcdc) = *(uint *)((long)param_1 + 0xcdc) & 0xfffffffb;
  FUN_1001b495c(0x3ecccccd,plVar9);
  uVar25 = *(uint *)((long)param_1 + 0x8fc);
  if ((uVar25 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x8fc) = uVar25 & 0xffff8000 | uVar25 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar9);
  }
  uVar27 = DAT_101d91884;
  uStack_90 = DAT_101d91884;
  pcStack_b8 = thunk_FUN_100194050;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x110,&pcStack_b8);
  FUN_1001b4964(plVar9,1);
  if ((*(float *)(param_1 + 0x118) != 0.7) || (*(float *)((long)param_1 + 0x8c4) != 0.7)) {
    param_1[0x118] = 0x3f3333333f333333;
    FUN_1000200a0(plVar9);
  }
  bVar28 = iVar29 == 0;
  ppuVar24 = &PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0;
  if (bVar28) {
    ppuVar24 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  }
  fVar35 = 1000.0;
  if (bVar28) {
    fVar35 = 800.0;
  }
  ppuVar23 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (bVar28) {
    ppuVar23 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(plVar7,*ppuVar24);
  uVar32 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_GUILD_MOTTO_LABEL",0);
  FUN_1006513c0(plVar7,uVar32);
  fVar34 = (float)FUN_10064259c(plVar9);
  FUN_10065179c(fVar35 - fVar34,0,0x3f800000,plVar10);
  FUN_1006515d8(plVar8,0);
  FUN_100651038(plVar8,*ppuVar23);
  uVar25 = *(uint *)((long)param_1 + 0x7cc);
  if ((uVar25 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x7cc) = uVar25 & 0xffff8000 | uVar25 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar8);
  }
  FUN_100651708(fVar35,plVar8,1);
  FUN_100652cdc(param_1 + 0x2b3,"edit_handle");
  *(uint *)((long)param_1 + 0x152c) = *(uint *)((long)param_1 + 0x152c) & 0xfffffffb;
  FUN_1001b495c(0x3ecccccd,plVar12);
  uVar25 = *(uint *)((long)param_1 + 0x114c);
  if ((uVar25 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x114c) = uVar25 & 0xffff8000 | uVar25 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar12);
  }
  uStack_90 = uVar27;
  pcStack_b8 = thunk_FUN_1001940a0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x21a,&pcStack_b8);
  FUN_1001b4964(plVar12,1);
  if ((*(float *)(param_1 + 0x222) != 0.7) || (*(float *)((long)param_1 + 0x1114) != 0.7)) {
    param_1[0x222] = 0x3f3333333f333333;
    FUN_1000200a0(plVar12);
  }
  ppuVar24 = &PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0;
  if (iVar29 == 0) {
    ppuVar24 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  }
  ppuVar23 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (iVar29 == 0) {
    ppuVar23 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(plVar10,*ppuVar24);
  uVar32 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_GUILD_MESSAGE_LABEL",0);
  FUN_1006513c0(plVar10,uVar32);
  fVar34 = (float)FUN_10064259c(plVar12);
  FUN_10065179c(fVar35 - fVar34,0,0x3f800000,plVar10);
  FUN_1006515d8(plVar11,0);
  FUN_100651038(plVar11,*ppuVar23);
  FUN_1004e3120(&pcStack_b8,
                "Contrary to popular belief, Lorem Ipsum is not simply random text. It has roots in a piece of classical Latin literature from 45 BC, making it over 2000 years old. Richard McClintock, a Latin professor at Hampden-Sydney College in Virginia, looked up one of the more obscure Latin words, consectetur, fr"
               );
  FUN_1006513c0(plVar11,&pcStack_b8);
  if (plStack_b0 != (long *)0x0) {
    operator_delete__(plStack_b0);
  }
  uVar25 = *(uint *)((long)param_1 + 0x101c);
  if ((uVar25 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x101c) = uVar25 & 0xffff8000 | uVar25 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar11);
  }
  FUN_100651708(fVar35,plVar11,1);
  ppuVar24 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar29 == 0) {
    ppuVar24 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  }
  FUN_1001816d4(0,0,fVar35,plVar13,0,&DAT_101d91650,&DAT_10115a168,&DAT_101dc1cb8,*ppuVar24);
  plVar1 = param_1 + 0x365;
  fVar34 = (float)FUN_100652390(plVar1,0);
  FUN_100181b5c(*(float *)(param_1 + 0x3b9) * -fVar34,0,plVar13);
  *(uint *)((long)param_1 + 0x1bac) = *(uint *)((long)param_1 + 0x1bac) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x1a5c) = *(uint *)((long)param_1 + 0x1a5c) & 0xfffffffb;
  FUN_1001816d4(0,0,fVar35,plVar14,0,&DAT_101d91650,&DAT_10115a168,&DAT_101dc1cb8,*ppuVar24);
  fVar34 = (float)FUN_100652390(plVar1,0);
  FUN_100181b5c(*(float *)(param_1 + 0x3b9) * -fVar34,0,plVar14);
  *(uint *)((long)param_1 + 0x3284) = *(uint *)((long)param_1 + 0x3284) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x3134) = *(uint *)((long)param_1 + 0x3134) & 0xfffffffb;
  FUN_1001816d4(0,0,fVar35,plVar15,0,&DAT_101d91650,&DAT_10115a168,&DAT_101dc1cb8,*ppuVar24);
  fVar35 = (float)FUN_100652390(plVar1,0);
  FUN_100181b5c(*(float *)(param_1 + 0x3b9) * -fVar35,0,plVar15);
  *(uint *)((long)param_1 + 0x495c) = *(uint *)((long)param_1 + 0x495c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x480c) = *(uint *)((long)param_1 + 0x480c) & 0xfffffffb;
  if ((*(uint *)((long)param_1 + 0x494) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x494) = *(uint *)((long)param_1 + 0x494) & 0xffff807f;
    FUN_1000200a0(plVar4);
  }
  uVar32 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_GUILD_DETAILS_BUTTON",0);
  FUN_1001816d4(0x41f00000,0,0x44480000,plVar18,0,uVar32,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_90 = uVar27;
  pcStack_b8 = FUN_100192d44;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x106f,&pcStack_b8);
  *(uint *)((long)param_1 + 0x8864) = *(uint *)((long)param_1 + 0x8864) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x8714) = *(uint *)((long)param_1 + 0x8714) & 0xfffffffb;
  FUN_100651038(param_1 + 0x1151,PTR_s_build___Fonts_Brandon_Regular_48_10184e200);
  FUN_1001b495c(0xbf800000,plVar18);
  FUN_1001b4964(plVar18,1);
  FUN_100652cac(plVar19,PTR_s_build___MenuPartsCommon_tga_101854970,"arrow_right");
  if ((*(float *)(param_1 + 0x132f) != 0.5) || (*(float *)((long)param_1 + 0x997c) != 0.5)) {
    param_1[0x132f] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar19);
  }
  uVar32 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_EDIT_GUILD_BUTTON",0);
  FUN_1001816d4(0x41f00000,0,0x44480000,plVar20,0,uVar32,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_90 = uVar27;
  pcStack_b8 = thunk_FUN_100194000;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x1344,&pcStack_b8);
  FUN_1001b4964(plVar20,1);
  uVar32 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_JOIN",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x44960000,plVar21,0,uVar32,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_90 = uVar27;
  pcStack_b8 = thunk_FUN_1001940f0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x1614,&pcStack_b8);
  ppuVar24 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar29 == 0) {
    ppuVar24 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  }
  uVar26 = 0x43380000;
  if (iVar29 == 0) {
    uVar26 = 0x4300cccd;
  }
  FUN_100651038(param_1 + 0x16f6,*ppuVar24);
  FUN_100181c68(uVar26,plVar21);
  FUN_1001b4964(plVar21,1);
  uVar32 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_DECLINE",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x44960000,plVar22,0,uVar32,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_90 = uVar27;
  pcStack_b8 = thunk_FUN_100194140;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x18cb,&pcStack_b8);
  FUN_100651038(param_1 + 0x19ad,*ppuVar24);
  FUN_100181c68(uVar26,plVar22);
  FUN_1001b4964(plVar22,1);
  *(uint *)((long)param_1 + 0xb11c) = *(uint *)((long)param_1 + 0xb11c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0xc6d4) = *(uint *)((long)param_1 + 0xc6d4) & 0xfffffffb;
  *(uint *)((long)param_1 + 0xb054) = *(uint *)((long)param_1 + 0xb054) & 0xfffffffb;
  FUN_100192db8(param_1);
  if ((*(float *)(param_1 + 0xb72) != 0.5) || (*(float *)((long)param_1 + 0x5b94) != 0.0)) {
    param_1[0xb72] = 0x3f000000;
    FUN_1000200a0(plVar16);
  }
  if ((*(float *)(param_1 + 0xdf5) != 0.5) || (*(float *)((long)param_1 + 0x6fac) != 0.0)) {
    param_1[0xdf5] = 0x3f000000;
    FUN_1000200a0(plVar17);
  }
  *(uint *)((long)param_1 + 0x494) = *(uint *)((long)param_1 + 0x494) & 0xfffffffb;
  FUN_100192db8(param_1);
  return param_1;
}



/*
 * FUN_1001a2cfc
 * VA: 0x1001a2cfc | Source: functions/1001a.c:2127
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 17
 * Callees: FUN_1000153b4, FUN_10001549c, FUN_10002f320, FUN_1000309a0, FUN_10003330c, FUN_10003c274, FUN_10003c2dc, FUN_10003c480 (+7 more)
 * Callers: FUN_1001a5620
 */
void FUN_1001a2cfc(long param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  char *pcVar8;
  ulong uVar9;
  void *local_108;
  ulong local_100;
  byte local_f1;
  void *local_f0;
  void *local_e8;
  undefined7 local_e0;
  char cStack_d9;
  char local_c9;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined1 auStack_b8 [16];
  undefined8 local_a8;
  void *local_a0;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  undefined4 local_78;
  uint local_3c;
  byte local_38;
  
  lVar5 = (**(code **)(*param_2 + 0x18))(param_2);
  if (lVar5 != 0) {
    uVar6 = FUN_100130500("talentExplanation");
    if ((uVar6 & 1) != 0) {
      return;
    }
    FUN_10003c274(auStack_b8);
    uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    FUN_1000153b4(&local_a8,uVar7);
    local_78 = 3;
    local_38 = local_38 | 2;
    iVar3 = FUN_100126c88();
    uVar1 = 0x5dc0000;
    if (iVar3 == 0) {
      uVar1 = 0x4b00000;
    }
    local_3c = local_3c & 0xffff | uVar1;
    uVar7 = FUN_1004e0150("TUTORIAL_TALENT_EXPLANATION_DIALOG_MSG",0);
    thunk_FUN_1004e439c(&local_f0,uVar7);
    FUN_10003330c(&local_e0,&DAT_101d91198);
    local_c8 = 1;
    local_c4 = 0x41200000;
    FUN_10003c2dc(auStack_b8,&local_f0);
    if (local_c9 < '\0') {
      operator_delete((void *)CONCAT17(cStack_d9,local_e0));
    }
    if (local_e8 != (void *)0x0) {
      operator_delete__(local_e8);
    }
    uVar7 = FUN_10002f320();
    FUN_10001549c(&local_f0,"talentExplanation");
    FUN_1000309a0(uVar7,&local_f0,auStack_b8);
    if (cStack_d9 < '\0') {
      operator_delete(local_f0);
    }
    FUN_100130420("talentExplanation",1);
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
    if (local_a0 != (void *)0x0) {
      operator_delete__(local_a0);
      local_a8 = 0;
      local_a0 = (void *)0x0;
    }
    FUN_10003c480(auStack_b8,1);
    return;
  }
  lVar5 = (**(code **)(*param_2 + 0x10))(param_2);
  if (lVar5 == 0) {
    return;
  }
  if (*(long *)(param_2[-1] + 0x648) == 0) {
    return;
  }
  FUN_10001549c(&local_108,*(undefined8 *)(*(long *)(param_2[-1] + 0x648) + 8));
  lVar5 = FUN_10015d3ec();
  iVar3 = *(int *)(lVar5 + 0x545c);
  lVar5 = FUN_10015d3ec();
  iVar2 = *(int *)(lVar5 + 0x5460);
  uVar6 = FUN_100130500("opalExplanation");
  if ((uVar6 & 1) == 0) {
    uVar6 = local_100;
    if (-1 < (char)local_f1) {
      uVar6 = (ulong)local_f1;
    }
    if (((uVar6 != 0x12) ||
        (iVar4 = std::string::compare((ulong)&local_108,0,(char *)0xffffffffffffffff,0x1013d2541),
        iVar4 != 0)) || (iVar3 == 0)) goto LAB_1001a304c;
    FUN_10003c274(auStack_b8);
    uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    FUN_1000153b4(&local_a8,uVar7);
    local_78 = 3;
    local_38 = local_38 | 2;
    iVar3 = FUN_100126c88();
    uVar1 = 0x4b00000;
    if (iVar3 == 0) {
      uVar1 = 0x3e80000;
    }
    local_3c = local_3c & 0xffff | uVar1;
    uVar7 = FUN_1004e0150("MENU_DIALOG_OPAL_EXPLANATION_MESSAGE",0);
    thunk_FUN_1004e439c(&local_f0,uVar7);
    FUN_10003330c(&local_e0,&DAT_101d91198);
    local_c8 = 1;
    local_c4 = 0x41200000;
    FUN_10003c2dc(auStack_b8,&local_f0);
    if (local_c9 < '\0') {
      operator_delete((void *)CONCAT17(cStack_d9,local_e0));
    }
    if (local_e8 != (void *)0x0) {
      operator_delete__(local_e8);
    }
    uVar7 = FUN_10002f320();
    FUN_10001549c(&local_f0,"opalExplanation");
    FUN_1000309a0(uVar7,&local_f0,auStack_b8);
    if (cStack_d9 < '\0') {
      operator_delete(local_f0);
    }
    pcVar8 = "opalExplanation";
LAB_1001a3864:
    FUN_100130420(pcVar8,1);
  }
  else {
LAB_1001a304c:
    uVar6 = FUN_100130500("seasonalKeyExplanation");
    if ((uVar6 & 1) == 0) {
      uVar6 = local_100;
      if (-1 < (char)local_f1) {
        uVar6 = (ulong)local_f1;
      }
      if (((uVar6 == 0x1a) &&
          (iVar3 = std::string::compare((ulong)&local_108,0,(char *)0xffffffffffffffff,0x1013d2561),
          iVar3 == 0)) && (iVar2 != 0)) {
        FUN_10003c274(auStack_b8);
        uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        FUN_1000153b4(&local_a8,uVar7);
        local_78 = 3;
        local_38 = local_38 | 2;
        iVar3 = FUN_100126c88();
        uVar1 = 0x4b00000;
        if (iVar3 == 0) {
          uVar1 = 0x3e80000;
        }
        local_3c = local_3c & 0xffff | uVar1;
        uVar7 = FUN_1004e0150("MENU_DIALOG_SEASONAL_KEYS_EXPLANATION_MESSAGE",0);
        thunk_FUN_1004e439c(&local_f0,uVar7);
        FUN_10003330c(&local_e0,&DAT_101d91198);
        local_c8 = 1;
        local_c4 = 0x41200000;
        FUN_10003c2dc(auStack_b8,&local_f0);
        if (local_c9 < '\0') {
          operator_delete((void *)CONCAT17(cStack_d9,local_e0));
        }
        if (local_e8 != (void *)0x0) {
          operator_delete__(local_e8);
        }
        uVar7 = FUN_10002f320();
        FUN_10001549c(&local_f0,"seasonalKeyExplanation");
        FUN_1000309a0(uVar7,&local_f0,auStack_b8);
        if (cStack_d9 < '\0') {
          operator_delete(local_f0);
        }
        pcVar8 = "seasonalKeyExplanation";
        goto LAB_1001a3864;
      }
    }
    uVar6 = FUN_100130500("epicKeyExplanation");
    if ((uVar6 & 1) == 0) {
      uVar6 = local_100;
      if (-1 < (char)local_f1) {
        uVar6 = (ulong)local_f1;
      }
      if (((uVar6 == 0x16) &&
          (iVar3 = std::string::compare((ulong)&local_108,0,(char *)0xffffffffffffffff,0x1013d2585),
          iVar3 == 0)) && (lVar5 = FUN_10015d3ec(), *(int *)(lVar5 + 0x5464) != 0)) {
        FUN_10003c274(auStack_b8);
        uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        FUN_1000153b4(&local_a8,uVar7);
        local_78 = 3;
        local_38 = local_38 | 2;
        iVar3 = FUN_100126c88();
        uVar1 = 0x5dc0000;
        if (iVar3 == 0) {
          uVar1 = 0x4b00000;
        }
        local_3c = local_3c & 0xffff | uVar1;
        uVar7 = FUN_1004e0150("MENU_DIALOG_EPIC_KEYS_EXPLANATION_MESSAGE",0);
        thunk_FUN_1004e439c(&local_f0,uVar7);
        FUN_10003330c(&local_e0,&DAT_101d91198);
        local_c8 = 1;
        local_c4 = 0x41200000;
        FUN_10003c2dc(auStack_b8,&local_f0);
        if (local_c9 < '\0') {
          operator_delete((void *)CONCAT17(cStack_d9,local_e0));
        }
        if (local_e8 != (void *)0x0) {
          operator_delete__(local_e8);
        }
        uVar7 = FUN_10002f320();
        FUN_10001549c(&local_f0,"epicKeyExplanation");
        FUN_1000309a0(uVar7,&local_f0,auStack_b8);
        if (cStack_d9 < '\0') {
          operator_delete(local_f0);
        }
        pcVar8 = "epicKeyExplanation";
        goto LAB_1001a3864;
      }
    }
    lVar5 = FUN_10016c2f0();
    if (0 < *(int *)(lVar5 + 0x38)) {
      uVar6 = FUN_100130500("iceExplanation");
      if ((uVar6 & 1) == 0) {
        uVar9 = (ulong)local_f1;
        uVar6 = local_100;
        if (-1 < (char)local_f1) {
          uVar6 = uVar9;
        }
        if (uVar6 == 0x17) {
          iVar3 = std::string::compare((ulong)&local_108,0,(char *)0xffffffffffffffff,0x1013d2506);
          if (iVar3 != 0) {
            uVar9 = (ulong)local_f1;
            goto LAB_1001a326c;
          }
        }
        else {
LAB_1001a326c:
          uVar6 = local_100;
          if (-1 < (char)local_f1) {
            uVar6 = uVar9;
          }
          if (uVar6 == 0x18) {
            iVar3 = std::string::compare((ulong)&local_108,0,(char *)0xffffffffffffffff,0x1013d24ed)
            ;
            if (iVar3 == 0) goto LAB_1001a3620;
            uVar9 = (ulong)local_f1;
          }
          uVar6 = local_100;
          if (-1 < (char)local_f1) {
            uVar6 = uVar9;
          }
          if ((uVar6 != 0x17) ||
             (iVar3 = std::string::compare
                                ((ulong)&local_108,0,(char *)0xffffffffffffffff,0x1013d24d5),
             iVar3 != 0)) goto LAB_1001a32e0;
        }
LAB_1001a3620:
        FUN_10003c274(auStack_b8);
        uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        FUN_1000153b4(&local_a8,uVar7);
        local_78 = 3;
        local_38 = local_38 | 2;
        iVar3 = FUN_100126c88();
        uVar1 = 0x4b00000;
        if (iVar3 == 0) {
          uVar1 = 0x3e80000;
        }
        local_3c = local_3c & 0xffff | uVar1;
        uVar7 = FUN_1004e0150("TUTORIAL_ICE_EXPLANATION_DIALOG_MSG",0);
        thunk_FUN_1004e439c(&local_f0,uVar7);
        FUN_10003330c(&local_e0,&DAT_101d91198);
        local_c8 = 1;
        local_c4 = 0x41200000;
        FUN_10003c2dc(auStack_b8,&local_f0);
        if (local_c9 < '\0') {
          operator_delete((void *)CONCAT17(cStack_d9,local_e0));
        }
        if (local_e8 != (void *)0x0) {
          operator_delete__(local_e8);
        }
        uVar7 = FUN_10002f320();
        FUN_10001549c(&local_f0,"iceExplanation");
        FUN_1000309a0(uVar7,&local_f0,auStack_b8);
        if (cStack_d9 < '\0') {
          operator_delete(local_f0);
        }
        pcVar8 = "iceExplanation";
        goto LAB_1001a3864;
      }
LAB_1001a32e0:
      uVar6 = FUN_100130500("gloryExplanation");
      if ((uVar6 & 1) != 0) goto LAB_1001a38a8;
      uVar9 = (ulong)local_f1;
      uVar6 = local_100;
      if (-1 < (char)local_f1) {
        uVar6 = uVar9;
      }
      if (uVar6 == 0x19) {
        iVar3 = std::string::compare((ulong)&local_108,0,(char *)0xffffffffffffffff,0x1013d24b6);
        if (iVar3 != 0) {
          uVar9 = (ulong)local_f1;
          goto LAB_1001a3338;
        }
      }
      else {
LAB_1001a3338:
        uVar6 = local_100;
        if (-1 < (char)local_f1) {
          uVar6 = uVar9;
        }
        if (uVar6 == 0x1a) {
          iVar3 = std::string::compare((ulong)&local_108,0,(char *)0xffffffffffffffff,0x1013d249b);
          if (iVar3 == 0) goto LAB_1001a33ac;
          uVar9 = (ulong)local_f1;
        }
        if (-1 < (char)local_f1) {
          local_100 = uVar9;
        }
        if ((local_100 != 0x19) ||
           (iVar3 = std::string::compare((ulong)&local_108,0,(char *)0xffffffffffffffff,0x1013d2481)
           , iVar3 != 0)) goto LAB_1001a38a8;
      }
LAB_1001a33ac:
      FUN_10003c274(auStack_b8);
      uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1000153b4(&local_a8,uVar7);
      local_78 = 3;
      local_38 = local_38 | 2;
      iVar3 = FUN_100126c88();
      uVar1 = 0x4b00000;
      if (iVar3 == 0) {
        uVar1 = 0x3e80000;
      }
      local_3c = local_3c & 0xffff | uVar1;
      uVar7 = FUN_1004e0150("TUTORIAL_GLORY_EXPLANATION_DIALOG_MSG",0);
      thunk_FUN_1004e439c(&local_f0,uVar7);
      FUN_10003330c(&local_e0,&DAT_101d91198);
      local_c8 = 1;
      local_c4 = 0x41200000;
      FUN_10003c2dc(auStack_b8,&local_f0);
      if (local_c9 < '\0') {
        operator_delete((void *)CONCAT17(cStack_d9,local_e0));
      }
      if (local_e8 != (void *)0x0) {
        operator_delete__(local_e8);
      }
      uVar7 = FUN_10002f320();
      FUN_10001549c(&local_f0,"gloryExplanation");
      FUN_1000309a0(uVar7,&local_f0,auStack_b8);
      if (cStack_d9 < '\0') {
        operator_delete(local_f0);
      }
      pcVar8 = "gloryExplanation";
      goto LAB_1001a3864;
    }
    uVar6 = *(ulong *)(param_1 + 0x1ad0);
    if (-1 < (char)*(byte *)(param_1 + 0x1adf)) {
      uVar6 = (ulong)*(byte *)(param_1 + 0x1adf);
    }
    if ((uVar6 != 0xe) ||
       (iVar3 = std::string::compare(param_1 + 0x1ac8,0,(char *)0xffffffffffffffff,0x1013e1464),
       iVar3 != 0)) goto LAB_1001a38a8;
    FUN_10003c274(auStack_b8);
    uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    FUN_1000153b4(&local_a8,uVar7);
    local_78 = 3;
    local_38 = local_38 | 2;
    iVar3 = FUN_100126c88();
    uVar1 = 0x4b00000;
    if (iVar3 == 0) {
      uVar1 = 0x3e80000;
    }
    local_3c = local_3c & 0xffff | uVar1;
    uVar7 = FUN_1004e0150("MENU_PROFILE_GUILD_JOIN_GUILD_BONUS",0);
    thunk_FUN_1004e439c(&local_f0,uVar7);
    FUN_10003330c(&local_e0,&DAT_101d91198);
    local_c8 = 1;
    local_c4 = 0x41200000;
    FUN_10003c2dc(auStack_b8,&local_f0);
    if (local_c9 < '\0') {
      operator_delete((void *)CONCAT17(cStack_d9,local_e0));
    }
    if (local_e8 != (void *)0x0) {
      operator_delete__(local_e8);
    }
    uVar7 = FUN_10002f320();
    FUN_10001549c(&local_f0,"joinGuildBonus");
    FUN_1000309a0(uVar7,&local_f0,auStack_b8);
    if (cStack_d9 < '\0') {
      operator_delete(local_f0);
    }
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
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a8 = 0;
    local_a0 = (void *)0x0;
  }
  FUN_10003c480(auStack_b8,1);
LAB_1001a38a8:
  if ((char)local_f1 < '\0') {
    operator_delete(local_108);
  }
  return;
}



/*
 * FUN_1001c397c
 * VA: 0x1001c397c | Source: functions/1001c.c:2297
 * CE-gate: NO | Guest-gate: NO
 * Indicators: Vis masks: 3
 * Callees: FUN_100016064, FUN_10001637c, FUN_1000200a0, FUN_1006421a8, FUN_100651594, FUN_100651ebc, FUN_100651f8c, FUN_101461c58 (+5 more)
 */
long * FUN_1001c397c(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  
  puVar5 = (undefined8 *)FUN_1006421a8();
  *puVar5 = &PTR_FUN_101461c58;
  puVar1 = puVar5 + 0x11;
  FUN_100651ebc(puVar1);
  param_1[0x11] = (long)&PTR_FUN_1014a6f58;
  param_1[0x28] = (long)&PTR_FUN_1014a70c0;
  thunk_FUN_100652c08(param_1 + 0x3b);
  plVar2 = param_1 + 0x59;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x7f;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0xa5;
  thunk_FUN_100650e64(plVar4);
  *(undefined4 *)(param_1 + 0xcb) = 0xffffffff;
  FUN_100016064(param_1 + 0xcc);
  *(undefined4 *)(param_1 + 0xd2) = 2;
  *(undefined8 *)((long)param_1 + 0x694) = 0xbf80000042180000;
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x3b,1);
  FUN_100651f8c(puVar1,PTR_s_build___MenuPartsCommon_tga_101854970);
  *(uint *)((long)puVar5 + 0x10c) = *(uint *)((long)puVar5 + 0x10c) | 4;
  FUN_100651594(plVar2,DAT_101d235d8,&DAT_10115a164);
  FUN_100651594(plVar3,DAT_101d235d8,&DAT_10115a164);
  uVar6 = *(uint *)((long)param_1 + 0x47c);
  if ((uVar6 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x47c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x5900;
    FUN_1000200a0(plVar3);
    uVar6 = *(uint *)((long)param_1 + 0x47c);
  }
  *(uint *)((long)param_1 + 0x47c) = uVar6 & 0xfffffffb;
  FUN_100651594(plVar4,DAT_101d235d8,&DAT_10115a168);
  uVar6 = *(uint *)((long)param_1 + 0x5ac);
  if ((uVar6 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x5ac) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x7280;
    FUN_1000200a0(plVar4);
    uVar6 = *(uint *)((long)param_1 + 0x5ac);
  }
  *(uint *)((long)param_1 + 0x5ac) = uVar6 & 0xfffffffb;
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xfffffffb;
  FUN_10001637c(param_1 + 0xcc,param_1,thunk_FUN_1001c3fd0);
  return param_1;
}



/*
 * thunk_FUN_1001c397c
 * VA: 0xthunk_1001c397c | Source: functions/1001c.c:2366
 * CE-gate: NO | Guest-gate: NO
 * Indicators: Vis masks: 3
 * Callees: FUN_100016064, FUN_10001637c, FUN_1000200a0, FUN_1006421a8, FUN_100651594, FUN_100651ebc, FUN_100651f8c, FUN_101461c58 (+5 more)
 * Callers: FUN_1001992b4, FUN_1001c9508, FUN_1001e5b98, FUN_10021c2d4, FUN_100221ff0, FUN_10029fee8, FUN_1002a887c, FUN_1002a9254 (+8 more)
 */
long * thunk_FUN_1001c397c(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  
  puVar5 = (undefined8 *)FUN_1006421a8();
  *puVar5 = &PTR_FUN_101461c58;
  puVar1 = puVar5 + 0x11;
  FUN_100651ebc(puVar1);
  param_1[0x11] = (long)&PTR_FUN_1014a6f58;
  param_1[0x28] = (long)&PTR_FUN_1014a70c0;
  thunk_FUN_100652c08(param_1 + 0x3b);
  plVar2 = param_1 + 0x59;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x7f;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0xa5;
  thunk_FUN_100650e64(plVar4);
  *(undefined4 *)(param_1 + 0xcb) = 0xffffffff;
  FUN_100016064(param_1 + 0xcc);
  *(undefined4 *)(param_1 + 0xd2) = 2;
  *(undefined8 *)((long)param_1 + 0x694) = 0xbf80000042180000;
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x3b,1);
  FUN_100651f8c(puVar1,PTR_s_build___MenuPartsCommon_tga_101854970);
  *(uint *)((long)puVar5 + 0x10c) = *(uint *)((long)puVar5 + 0x10c) | 4;
  FUN_100651594(plVar2,DAT_101d235d8,&DAT_10115a164);
  FUN_100651594(plVar3,DAT_101d235d8,&DAT_10115a164);
  uVar6 = *(uint *)((long)param_1 + 0x47c);
  if ((uVar6 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x47c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x5900;
    FUN_1000200a0(plVar3);
    uVar6 = *(uint *)((long)param_1 + 0x47c);
  }
  *(uint *)((long)param_1 + 0x47c) = uVar6 & 0xfffffffb;
  FUN_100651594(plVar4,DAT_101d235d8,&DAT_10115a168);
  uVar6 = *(uint *)((long)param_1 + 0x5ac);
  if ((uVar6 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x5ac) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x7280;
    FUN_1000200a0(plVar4);
    uVar6 = *(uint *)((long)param_1 + 0x5ac);
  }
  *(uint *)((long)param_1 + 0x5ac) = uVar6 & 0xfffffffb;
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xfffffffb;
  FUN_10001637c(param_1 + 0xcc,param_1,thunk_FUN_1001c3fd0);
  return param_1;
}



/*
 * FUN_1001ea07c
 * VA: 0x1001ea07c | Source: functions/1001e.c:7850
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 9
 * Callees: FUN_10015d3ec, FUN_100167014, FUN_1001e3090, FUN_1004e0150
 */
void FUN_1001ea07c(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                  ,undefined8 param_6)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  
  if (param_2 == 0) {
    puVar15 = (undefined8 *)(param_1 + 0x40);
    bVar5 = *(byte *)(param_1 + 0x57);
    uVar12 = (ulong)bVar5;
    sVar1 = *(size_t *)(param_1 + 0x48);
    if (-1 < (char)bVar5) {
      sVar1 = uVar12;
    }
    sVar2 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar2 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar1 == sVar2) {
      puVar3 = (undefined8 *)*puVar15;
      if (-1 < (char)bVar5) {
        puVar3 = puVar15;
      }
      pbVar14 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar14 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar5 < '\0') {
        if (sVar1 == 0) {
          return;
        }
        iVar6 = _memcmp(puVar3,pbVar14,sVar1);
        if (iVar6 == 0) {
          return;
        }
      }
      else {
        if (sVar1 == 0) {
          return;
        }
        if ((uint)*pbVar14 == ((uint)(undefined8 *)*puVar15 & 0xff)) {
          pbVar13 = (byte *)(param_1 + 0x41);
          do {
            uVar12 = uVar12 - 1;
            pbVar14 = pbVar14 + 1;
            if (uVar12 == 0) {
              return;
            }
            bVar5 = *pbVar13;
            pbVar13 = pbVar13 + 1;
          } while (bVar5 == *pbVar14);
        }
      }
    }
    uVar4 = *(uint *)(param_1 + 0x5c);
    lVar7 = FUN_10015d3ec();
    if (uVar4 <= *(uint *)(lVar7 + 0x5454)) goto LAB_1001ea298;
    uVar8 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_CANT_AFFORD_DIALOG_TITLE",0);
    pcVar9 = "MENU_PROFILE_GUILD_CREATE_CANT_AFFORD_GLORY_DIALOG_TEXT";
  }
  else {
    puVar15 = (undefined8 *)(param_1 + 0x28);
    bVar5 = *(byte *)(param_1 + 0x3f);
    uVar12 = (ulong)bVar5;
    sVar1 = *(size_t *)(param_1 + 0x30);
    if (-1 < (char)bVar5) {
      sVar1 = uVar12;
    }
    sVar2 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar2 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar1 == sVar2) {
      puVar3 = (void *)*puVar15;
      if (-1 < (char)bVar5) {
        puVar3 = puVar15;
      }
      pbVar14 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar14 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar5 < '\0') {
        if (sVar1 == 0) {
          return;
        }
        iVar6 = _memcmp(puVar3,pbVar14,sVar1);
        if (iVar6 == 0) {
          return;
        }
      }
      else {
        if (sVar1 == 0) {
          return;
        }
        if ((uint)*pbVar14 == ((uint)(void *)*puVar15 & 0xff)) {
          pbVar13 = (byte *)(param_1 + 0x29);
          do {
            uVar12 = uVar12 - 1;
            pbVar14 = pbVar14 + 1;
            if (uVar12 == 0) {
              return;
            }
            bVar5 = *pbVar13;
            pbVar13 = pbVar13 + 1;
          } while (bVar5 == *pbVar14);
        }
      }
    }
    uVar4 = *(uint *)(param_1 + 0x58);
    lVar7 = FUN_10015d3ec();
    if (uVar4 <= *(uint *)(lVar7 + 0x5450)) {
LAB_1001ea298:
      uVar8 = FUN_10015d3ec();
      FUN_100167014(uVar8,puVar15,param_3,param_4,param_5,param_6);
      return;
    }
    uVar8 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_CANT_AFFORD_DIALOG_TITLE",0);
    pcVar9 = "MENU_PROFILE_GUILD_CREATE_CANT_AFFORD_ICE_DIALOG_TEXT";
  }
  uVar10 = FUN_1004e0150(pcVar9,0);
  uVar11 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar8,uVar10,uVar11,0,0);
  return;
}



/*
 * FUN_1001ea2d8
 * VA: 0x1001ea2d8 | Source: functions/1001e.c:7992
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 14
 * Callees: FUN_100104af0, FUN_10015d3ec, FUN_100169cec, FUN_1001e3090, FUN_100294960, FUN_100294f90, FUN_1004e0150, FUN_1004e313c (+1 more)
 * Callers: FUN_1001ea644
 */
void FUN_1001ea2d8(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  undefined1 auStack_40 [8];
  void *local_38;
  
  iVar3 = FUN_1004f1680(param_2);
  if (iVar3 == 0) {
    return;
  }
  if (*(char *)(param_2 + 0x25) != '\0') {
    lVar4 = FUN_10015d3ec();
    FUN_100169cec(lVar4 + 0x18);
    FUN_100104af0();
    FUN_100294f90(*(undefined8 *)(param_1 + 8));
    return;
  }
  uVar1 = param_2 + 0x30;
  bVar11 = *(byte *)(param_2 + 0x47);
  uVar9 = (ulong)bVar11;
  uVar10 = *(ulong *)(param_2 + 0x38);
  uVar2 = uVar10;
  if (-1 < (char)bVar11) {
    uVar2 = uVar9;
  }
  if (uVar2 == 0x10) {
    iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3bc2);
    if (iVar3 != 0) {
      bVar11 = *(byte *)(param_2 + 0x47);
      uVar9 = (ulong)bVar11;
      uVar10 = *(ulong *)(param_2 + 0x38);
      goto LAB_1001ea37c;
    }
    uVar5 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_CREATE_TITLE",0);
    pcVar8 = "MENU_PROFILE_GUILD_CANT_CREATE_REASON_ALREADY_IN";
  }
  else {
LAB_1001ea37c:
    uVar2 = uVar10;
    if (-1 < (char)bVar11) {
      uVar2 = uVar9;
    }
    if (uVar2 == 0xb) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3c29);
      if (iVar3 == 0) {
        uVar5 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_CREATE_TITLE",0);
        pcVar8 = "MENU_PROFILE_GUILD_CANT_CREATE_REASON_TAG_LENGTH";
        goto LAB_1001ea5f4;
      }
      bVar11 = *(byte *)(param_2 + 0x47);
      uVar9 = (ulong)bVar11;
      uVar10 = *(ulong *)(param_2 + 0x38);
    }
    uVar2 = uVar10;
    if (-1 < (char)bVar11) {
      uVar2 = uVar9;
    }
    if (uVar2 == 10) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3c66);
      if (iVar3 != 0) {
        bVar11 = *(byte *)(param_2 + 0x47);
        uVar9 = (ulong)bVar11;
        uVar10 = *(ulong *)(param_2 + 0x38);
        goto LAB_1001ea3fc;
      }
LAB_1001ea558:
      uVar5 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_CREATE_TITLE",0);
      pcVar8 = "MENU_PROFILE_GUILD_CANT_CREATE_REASON_NAME_TAKEN";
    }
    else {
LAB_1001ea3fc:
      uVar2 = uVar10;
      if (-1 < (char)bVar11) {
        uVar2 = uVar9;
      }
      if (uVar2 == 0xd) {
        iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3c71);
        if (iVar3 == 0) goto LAB_1001ea558;
        bVar11 = *(byte *)(param_2 + 0x47);
        uVar9 = (ulong)bVar11;
        uVar10 = *(ulong *)(param_2 + 0x38);
      }
      uVar2 = uVar10;
      if (-1 < (char)bVar11) {
        uVar2 = uVar9;
      }
      if (uVar2 == 9) {
        iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3cb0);
        if (iVar3 != 0) {
          bVar11 = *(byte *)(param_2 + 0x47);
          uVar9 = (ulong)bVar11;
          uVar10 = *(ulong *)(param_2 + 0x38);
          goto LAB_1001ea47c;
        }
LAB_1001ea5b8:
        uVar5 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_CREATE_TITLE",0);
        pcVar8 = "MENU_PROFILE_GUILD_CANT_CREATE_REASON_TAG_TAKEN";
      }
      else {
LAB_1001ea47c:
        uVar2 = uVar10;
        if (-1 < (char)bVar11) {
          uVar2 = uVar9;
        }
        if (uVar2 == 0xc) {
          iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3cba);
          if (iVar3 == 0) goto LAB_1001ea5b8;
          bVar11 = *(byte *)(param_2 + 0x47);
          uVar9 = (ulong)bVar11;
          uVar10 = *(ulong *)(param_2 + 0x38);
        }
        if (-1 < (char)bVar11) {
          uVar10 = uVar9;
        }
        if ((uVar10 != 0x12) ||
           (iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3cf7), iVar3 != 0
           )) {
          FUN_1004e313c(auStack_40);
          uVar5 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_CREATE_ERROR_TITLE",0);
          uVar6 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_CREATE_ERROR",0);
          uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
          FUN_1001e3090(uVar5,uVar6,uVar7,0,0);
          if (local_38 != (void *)0x0) {
            operator_delete__(local_38);
          }
          goto LAB_1001ea628;
        }
        uVar5 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_CREATE_TITLE",0);
        pcVar8 = "MENU_GUILD_ERROR_PROFANITY";
      }
    }
  }
LAB_1001ea5f4:
  uVar6 = FUN_1004e0150(pcVar8,0);
  uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar5,uVar6,uVar7,0,0);
LAB_1001ea628:
  FUN_100294960(*(undefined8 *)(param_1 + 8));
  return;
}



/*
 * FUN_1001eeb60
 * simplified profile popup — creates 0x4458-byte popup via FUN_100220a38
 * VA: 0x1001eeb60 | Source: functions/1001e.c:12278
 * Fptr: __DATA+0x146b2d0
 * Dylib: Layer 5
 * Notes: One of 3 profile openers. Redirected to FUN_100221f98 by dylib.
 * CE-gate: NO | Guest-gate: NO
 * Callees: FUN_10001554c, FUN_10003d5bc, FUN_1001e7a40, FUN_1001ed508, FUN_1001eedcc, FUN_1001eedd4, FUN_1001eee00, FUN_100220a38 (+5 more)
 */
void FUN_1001eeb60(undefined1 param_1 [16],float param_2,long param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  code **ppcVar5;
  undefined4 *puVar6;
  float fVar7;
  undefined8 uVar8;
  code *local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  if (*(long *)(param_3 + 0x13f8) == 0) {
    iVar2 = FUN_10030884c(*(undefined8 *)(param_3 + 0x13c8));
    if (*(long *)(param_3 + 0x20) == 0) {
      if (*(int *)(param_3 + 0x18) == 4) {
        ppcVar5 = (code **)&DAT_101873a48;
        uVar1 = 0;
      }
      else if (*(int *)(param_3 + 0x18) == 3) {
        ppcVar5 = (code **)&DAT_101873a48;
        uVar1 = 2;
      }
      else {
        ppcVar5 = (code **)&DAT_101873a48;
        uVar1 = 1;
      }
    }
    else {
      puVar3 = (undefined8 *)FUN_10003d5bc(*(undefined8 *)(*(long *)(param_3 + 0x20) + 8));
      uVar8 = *puVar3;
      fVar7 = (float)(**(code **)(**(long **)(*(long *)(param_3 + 0x20) + 8) + 0x48))();
      lVar4 = FUN_10003d5bc(*(undefined8 *)(*(long *)(param_3 + 0x20) + 8));
      local_80 = (code *)CONCAT44((float)((ulong)uVar8 >> 0x20) +
                                  (float)((ulong)*(undefined8 *)(lVar4 + 0x10) >> 0x20) *
                                  param_2 * 0.5,
                                  (float)uVar8 + (float)*(undefined8 *)(lVar4 + 0x10) * fVar7 * 0.5)
      ;
      uVar1 = 2;
      if (*(int *)(param_3 + 0x18) != 3) {
        uVar1 = *(int *)(param_3 + 0x18) != 4;
      }
      ppcVar5 = &local_80;
    }
    lVar4 = FUN_100220a38(uVar1,iVar2 == 1,1,ppcVar5);
    *(long *)(param_3 + 0x13f8) = lVar4;
    local_58 = DAT_101d23830;
    local_80 = FUN_1001eedcc;
    local_68 = 0;
    uStack_60 = 0;
    local_70 = 0;
    lStack_78 = param_3;
    FUN_10001554c(lVar4 + 8,&local_80);
    local_58 = DAT_101d23834;
    local_80 = FUN_1001eedd4;
    local_68 = 0;
    uStack_60 = 0;
    local_70 = 0;
    lStack_78 = param_3;
    FUN_10001554c(*(long *)(param_3 + 0x13f8) + 8,&local_80);
    local_58 = DAT_101d91894;
    local_80 = FUN_1001eee00;
    local_68 = 0;
    uStack_60 = 0;
    local_70 = 0;
    lStack_78 = param_3;
    FUN_10001554c(*(long *)(param_3 + 0x13f8) + 8,&local_80);
    FUN_100220b8c(*(undefined8 *)(param_3 + 0x13f8),*(char *)(param_3 + 0x1338) != '\0');
    FUN_100220b58(*(undefined8 *)(param_3 + 0x13f8),*(undefined4 *)(param_3 + 0x1408),
                  *(undefined4 *)(param_3 + 0x140c));
    lVar4 = 0;
    puVar6 = (undefined4 *)(param_3 + 0x1374);
    do {
      if (puVar6[-1] != 0xffff) {
        FUN_100220b98(*(undefined8 *)(param_3 + 0x13f8),lVar4);
        FUN_100220ba4(*(undefined8 *)(param_3 + 0x13f8),lVar4,*puVar6);
      }
      lVar4 = lVar4 + 1;
      puVar6 = puVar6 + 2;
    } while (lVar4 != 7);
    FUN_1001ed508(param_3);
    if (*(char *)(param_3 + 0x1422) == '\0') {
      FUN_1001e7a40("VO_Vainglory_PositionBuildpath");
    }
    *(undefined1 *)(param_3 + 0x1422) = 1;
  }
  return;
}



/*
 * FUN_1001f505c
 * guest-gated profile opener — calls FUN_100220d08 or FUN_100221f98
 * VA: 0x1001f505c | Source: functions/1001f.c:5380
 * Fptr: __DATA+0x146cf98
 * Dylib: Layer 5
 * Notes: Has guest gate. Calls different profile panel based on guest status.
 * CE-gate: YES (1x) | Guest-gate: YES (1x)
 * Callees: FUN_1001311d4, FUN_100131560, FUN_10014e20c, FUN_1001f50a4, FUN_100220d08, FUN_100221f98, FUN_1004eef10
 */
void FUN_1001f505c(void)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_1004eef10();
  if ((iVar1 == 0) || (uVar2 = FUN_1001311d4(), (uVar2 & 1) != 0)) {
    return;
  }
  uVar2 = FUN_100131560();
  if (((uVar2 & 1) == 0) && (uVar2 = FUN_10014e20c(), (uVar2 & 1) != 0)) {
    FUN_100220d08();
    return;
  }
  FUN_100221f98("homepanel_profile_avatar");
  return;
}




undefined8 *
FUN_1001f50a4(uint *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  if (param_3 != param_4) {
    uVar12 = (long)param_4 - (long)param_3;
    puVar9 = *(undefined8 **)(param_1 + 2);
    uVar10 = (long)param_2 - (long)puVar9;
    uVar1 = *param_1;
    uVar2 = (ulong)uVar1;
    uVar3 = param_1[1];
    uVar6 = (uint)(uVar12 >> 3);
    if (uVar3 - uVar1 < uVar6) {
      uVar1 = uVar1 + uVar6;
      uVar6 = 0;
      if (uVar3 != 0xffffffff) {
        uVar6 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
      }
      if (uVar3 < 0x20) {
        uVar6 = uVar3 << 1;
      }
      uVar3 = uVar1;
      if (uVar1 <= uVar6) {
        uVar3 = uVar6;
      }
      puVar5 = operator_new__((ulong)uVar3 << 3);
      puVar4 = puVar5;
      for (puVar7 = puVar9; puVar7 != param_2; puVar7 = puVar7 + 1) {
        *puVar4 = *puVar7;
        puVar4 = puVar4 + 1;
      }
      uVar11 = uVar10 >> 3 & 0xffffffff;
      _memcpy(puVar5 + (uVar10 >> 3 & 0xffffffff),param_3,uVar12 & 0xfffffffffffffff8);
      uVar2 = (long)puVar9 + (uVar2 * 8 - (long)param_2);
      if (uVar2 != 0) {
        _memcpy((void *)((long)puVar5 + (uVar12 & 0x7fffffff8) + uVar11 * 8),param_2,
                uVar2 & 0xfffffffffffffff8);
      }
      if (puVar9 != (undefined8 *)0x0) {
        operator_delete__(puVar9);
      }
      *(undefined8 **)(param_1 + 2) = puVar5;
      *param_1 = uVar1;
      param_1[1] = uVar3;
    }
    else {
      puVar5 = puVar9 + uVar2;
      uVar11 = (ulong)((long)puVar5 - (long)param_2) >> 3;
      if (uVar6 < (uint)uVar11) {
        uVar12 = uVar12 >> 3 & 0xffffffff;
        if (uVar12 != 0) {
          lVar8 = 0;
          do {
            *(undefined8 *)((long)puVar5 + lVar8) =
                 *(undefined8 *)((long)puVar5 + lVar8 + uVar12 * -8);
            lVar8 = lVar8 + 8;
          } while (lVar8 != uVar12 * 8);
          puVar9 = *(undefined8 **)(param_1 + 2);
        }
        puVar9 = puVar9 + (uVar2 - uVar12);
        lVar8 = (long)puVar9 - (long)param_2;
        if (lVar8 != 0) {
          do {
            puVar9 = puVar9 + -1;
            *(undefined8 *)((long)param_2 + lVar8 + uVar12 * 8 + -8) = *puVar9;
            lVar8 = lVar8 + -8;
          } while (lVar8 != 0);
        }
        do {
          puVar9 = param_3 + 1;
          *param_2 = *param_3;
          param_2 = param_2 + 1;
          param_3 = puVar9;
        } while (puVar9 != param_4);
      }
      else {
        if (puVar5 != param_2) {
          puVar9 = param_2;
          do {
            puVar9[uVar12 >> 3 & 0xffffffff] = *puVar9;
            puVar9 = puVar9 + 1;
          } while (puVar9 != puVar5);
          puVar9 = *(undefined8 **)(param_1 + 2);
        }
        uVar12 = (ulong)((long)puVar5 - (long)param_2) >> 3 & 0xffffffff;
        if (param_3 + (uVar11 & 0xffffffff) != param_4) {
          puVar5 = param_3 + (uVar11 & 0xffffffff);
          puVar9 = puVar9 + uVar2;
          do {
            puVar7 = puVar5 + 1;
            *puVar9 = *puVar5;
            puVar5 = puVar7;
            puVar9 = puVar9 + 1;
          } while (puVar7 != param_4);
        }
        if (uVar12 != 0) {
          lVar8 = uVar12 << 3;
          do {
            *param_2 = *param_3;
            lVar8 = lVar8 + -8;
            param_2 = param_2 + 1;
            param_3 = param_3 + 1;
          } while (lVar8 != 0);
        }
      }
      *param_1 = uVar1 + uVar6;
      puVar5 = *(undefined8 **)(param_1 + 2);
      uVar11 = uVar10 >> 3 & 0xffffffff;
    }
    param_2 = puVar5 + uVar11;
  }
  return param_2;
}



/*
 * FUN_1001fa7b0
 * simplified profile card — always creates simplified popup
 * VA: 0x1001fa7b0 | Source: functions/1001f.c:11033
 * Fptr: __DATA+0x146e788
 * Dylib: Layer 5
 * Notes: Third profile opener. Redirected to full profile by dylib.
 * CE-gate: NO | Guest-gate: NO
 * Callees: FUN_10001554c, FUN_1001fa944, FUN_1001fa970, FUN_1001fa99c, FUN_1001fabbc, FUN_100220a38, FUN_100220b58, FUN_10030884c (+4 more)
 */
void FUN_1001fa7b0(long param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  code *local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  if (*(long *)(param_1 + 0x1610) != 0) {
    return;
  }
  iVar2 = FUN_10030884c(*(undefined8 *)(param_1 + 0x1608));
  FUN_1003467f8();
  uVar4 = FUN_10034cec0();
  if ((uVar4 & 1) == 0) {
    FUN_1003467f8();
    iVar3 = FUN_10034ced0();
    if (iVar3 != 0) {
      FUN_1003467f8();
      uVar5 = FUN_10034cdf0();
      if ((int)uVar5 == 0) goto LAB_1001fa814;
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 2;
  }
LAB_1001fa814:
  lVar6 = FUN_100220a38(uVar5,iVar2 == 1,0,&DAT_101873a48);
  *(long *)(param_1 + 0x1610) = lVar6;
  local_58 = DAT_101d23830;
  local_80 = FUN_1001fa944;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  lStack_78 = param_1;
  FUN_10001554c(lVar6 + 8,&local_80);
  local_58 = DAT_101d23834;
  local_80 = FUN_1001fa970;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  lStack_78 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0x1610) + 8,&local_80);
  local_58 = DAT_101d91894;
  local_80 = FUN_1001fa99c;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  lStack_78 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0x1610) + 8,&local_80);
  uVar5 = *(undefined8 *)(param_1 + 0x1610);
  iVar2 = FUN_1001fabbc(param_1);
  lVar6 = param_1 + 0x1e0 + (long)iVar2 * 0xa1;
  if (*(char *)(param_1 + 0x1640) != '\0') {
    lVar6 = param_1 + 0xbf8 + (long)iVar2 * 0xa1;
  }
  uVar1 = *(undefined1 *)(lVar6 + 5);
  iVar2 = FUN_1001fabbc(param_1);
  lVar6 = param_1 + 0x1e0 + (long)iVar2 * 0xa1;
  if (*(char *)(param_1 + 0x1640) != '\0') {
    lVar6 = param_1 + 0xbf8 + (long)iVar2 * 0xa1;
  }
  FUN_100220b58(uVar5,uVar1,*(undefined1 *)(lVar6 + 6));
  return;
}



/*
 * FUN_100220a38
 * popup creation — creates 0x4458-byte simplified popup object
 * VA: 0x100220a38 | Source: functions/10022.c:511
 * Dylib: Layer 5
 * Notes: Referenced in Layer 5 comment.
 * CE-gate: NO | Guest-gate: NO
 * Callees: FUN_1001b345c, FUN_1001b35d4, FUN_1001e7f30, FUN_100220abc
 * Callers: FUN_1001eeb60, FUN_1001fa7b0
 */
void * FUN_100220a38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x4458);
  FUN_100220abc(pvVar1,param_1,param_2,param_3);
  FUN_1001b35d4(*param_4,param_4[1]);
  FUN_1001e7f30(pvVar1,0,1,0,1);
  FUN_1001b345c(pvVar1,0);
  return pvVar1;
}



/*
 * FUN_100220d08
 * profile display variant — called by guest-gated opener
 * VA: 0x100220d08 | Source: functions/10022.c:660
 * Dylib: Layer 5
 * Notes: Alternative to FUN_100221f98 when guest.
 * CE-gate: NO | Guest-gate: NO
 * Callees: FUN_1001e7f30, FUN_100220d34
 * Callers: FUN_1001f3b40, FUN_1001f505c, FUN_10025e0c4, thunk_FUN_10025e0c4
 */
void FUN_100220d08(void)

{
  undefined8 uVar1;
  
  operator_new(0x2120);
  uVar1 = FUN_100220d34();
  FUN_1001e7f30(uVar1,0,1,0,1);
  return;
}



/*
 * FUN_100221f98
 * full profile panel — creates 0x28848-byte profile panel
 * VA: 0x100221f98 | Source: functions/10022.c:1586
 * Dylib: Layer 5
 * Notes: The target all profile openers are redirected to. Called with 'homepanel_profile_avatar'.
 * CE-gate: NO | Guest-gate: NO
 * Callees: FUN_1001b35e0, FUN_1001e7f30, FUN_100221ff0
 * Callers: FUN_1001f3b40, FUN_1001f505c, FUN_100221fe4, thunk_FUN_100221fe4
 */
void FUN_100221f98(undefined8 param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = operator_new(0x28848);
  uVar2 = FUN_100221ff0();
  FUN_1001b35e0(uVar2,param_1);
  FUN_1001e7f30(pvVar1,0,1,0,1);
  return;
}



/*
 * FUN_100221ff0
 * VA: 0x100221ff0 | Source: functions/10022.c:1612
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 5
 * Callees: FUN_10001554c, FUN_1000200a0, FUN_100136e4c, FUN_10014f4a0, FUN_10015d3ec, FUN_100164f34, FUN_1001b2b88, FUN_1001b316c (+18 more)
 * Callers: FUN_100221f98
 */
long * FUN_100221ff0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 uVar10;
  code *local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  lVar9 = FUN_1001b2b88();
  FUN_10014f4a0(lVar9 + 0x1cf0);
  *param_1 = (long)&PTR_FUN_1014751e0;
  param_1[0x39e] = (long)&PTR_FUN_101475318;
  thunk_FUN_10025c044(param_1 + 0x3a1);
  thunk_FUN_1001c397c();
  plVar1 = param_1 + 0x5060;
  thunk_FUN_1006421a8();
  plVar2 = param_1 + 0x5071;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x5097;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0x50bd;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0x50e3;
  thunk_FUN_100650e64(plVar5);
  FUN_1001b339c(param_1,param_1 + 0x3a1);
  local_68 = DAT_101d2367c;
  local_90 = thunk_FUN_1001b3648;
  local_78 = 0;
  local_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(param_1 + 1,&local_90);
  FUN_1001b316c(param_1,1);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_100651038(plVar4,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_100651038(plVar5,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_10015d3ec();
  uVar10 = FUN_100164f34();
  FUN_1006513c0(plVar2,uVar10);
  uVar10 = FUN_1004e0150("MENU_PROFILE_TAB_RANKED_5V5",0);
  FUN_1006513c0(plVar3,uVar10);
  uVar10 = FUN_1004e0150("MENU_PROFILE_TAB_RANKED_3V3",0);
  FUN_1006513c0(plVar4,uVar10);
  uVar10 = FUN_1004e0150("GENERIC_STATS",0);
  FUN_1006513c0(plVar5,uVar10);
  uVar7 = DAT_101dbd460;
  local_68 = DAT_101dbd460;
  local_90 = FUN_100222544;
  local_78 = 0;
  local_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x5072,&local_90);
  uVar8 = DAT_101dbd48c;
  local_68 = DAT_101dbd48c;
  local_90 = FUN_100222544;
  local_78 = 0;
  local_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x5072,&local_90);
  local_68 = uVar7;
  local_90 = FUN_100222544;
  local_80 = 0;
  local_78 = 0;
  local_70 = 1;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x5098,&local_90);
  local_68 = uVar8;
  local_90 = FUN_100222544;
  local_80 = 0;
  local_78 = 0;
  local_70 = 1;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x5098,&local_90);
  local_68 = uVar7;
  local_90 = FUN_100222544;
  local_80 = 0;
  local_78 = 0;
  local_70 = 2;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x50be,&local_90);
  local_68 = uVar8;
  local_90 = FUN_100222544;
  local_80 = 0;
  local_78 = 0;
  local_70 = 2;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x50be,&local_90);
  local_68 = uVar7;
  local_90 = FUN_100222544;
  local_80 = 0;
  local_78 = 0;
  local_70 = 3;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x50e4,&local_90);
  local_68 = uVar8;
  local_90 = FUN_100222544;
  local_80 = 0;
  local_78 = 0;
  local_70 = 3;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x50e4,&local_90);
  *(uint *)((long)param_1 + 0x2840c) = *(uint *)((long)param_1 + 0x2840c) | 0x10;
  *(uint *)((long)param_1 + 0x2853c) = *(uint *)((long)param_1 + 0x2853c) | 0x10;
  *(uint *)((long)param_1 + 0x2866c) = *(uint *)((long)param_1 + 0x2866c) | 0x10;
  *(uint *)((long)param_1 + 0x2879c) = *(uint *)((long)param_1 + 0x2879c) | 0x10;
  FUN_100651460(plVar2,&DAT_10115a168);
  FUN_100651460(plVar3,&DAT_10115a16c);
  FUN_100651460(plVar4,&DAT_10115a16c);
  FUN_100651460(plVar5,&DAT_10115a16c);
  uVar6 = *(uint *)((long)param_1 + 0x2840c);
  if ((uVar6 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x2840c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x7280;
    FUN_1000200a0(plVar2);
  }
  uVar6 = *(uint *)((long)param_1 + 0x2853c);
  if ((uVar6 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x2853c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x7280;
    FUN_1000200a0(plVar3);
  }
  uVar6 = *(uint *)((long)param_1 + 0x2866c);
  if ((uVar6 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x2866c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x7280;
    FUN_1000200a0(plVar4);
  }
  uVar6 = *(uint *)((long)param_1 + 0x2879c);
  if ((uVar6 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x2879c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x7280;
    FUN_1000200a0(plVar5);
  }
  FUN_1001c3fc8(param_1 + 0x4f8c,"ACCOUNT.*");
  *(uint *)((long)param_1 + 0x27ce4) = *(uint *)((long)param_1 + 0x27ce4) & 0xffffffbf;
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100642bd8(plVar1,plVar4,1);
  FUN_100136e4c(&local_90);
  plVar2 = local_88;
  if (local_80 < 0) {
    operator_delete(local_90);
    if (plVar2 == (long *)0x0) goto LAB_1002224b0;
  }
  else if (local_80._7_1_ == '\0') goto LAB_1002224b0;
  FUN_100642bd8(plVar1,plVar5,1);
LAB_1002224b0:
  FUN_100642bd8(plVar1,param_1 + 0x4f8c,1);
  FUN_1001b33b8(param_1,plVar1);
  (**(code **)(*param_1 + 0x118))(param_1);
  local_68 = FUN_100644a94("UI::EVENT_SWITCH_TO_TAB");
  local_90 = FUN_10022254c;
  local_78 = 0;
  local_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(param_1 + 1,&local_90);
  return param_1;
}



/*
 * FUN_100222878
 * profile panel ranked tabs
 * VA: 0x100222878 | Source: functions/10022.c:1876
 * Fptr: __DATA+0x14752f8
 * Dylib: Layer 8
 * Layout: +0x2853c=5v5 ranked tab visibility, +0x2866c=3v3 ranked tab visibility, +0x2879c=stats tab visibility, +0x2cea8=ranked data display flag, +0x2ceab=has progression data flag, +0x2ce98=ranked mode count, +0x2cde0=ranked mode data source count
 * Notes: Dylib forces all ranked tab visibility bits and display flags after original runs.
 * CE-gate: YES (3x) | Guest-gate: NO
 * Indicators: Vis masks: 3
 * Callees: FUN_100131560, FUN_10015d3ec, FUN_100164f34, FUN_1001b36cc, FUN_1001b3854, FUN_1001b3b58, FUN_1001b4034, FUN_100641464 (+4 more)
 */
void FUN_100222878(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 local_60;
  float local_58;
  float local_54;
  
  FUN_100641464(&local_54,&local_58);
  FUN_1001b3854(local_54 + -200.0,local_58 + -100.0,param_1,0);
  local_60 = NEON_fmov(0x40a00000,4);
  FUN_1001b4034(param_1,&local_60);
  FUN_1001b36cc(local_54 + -200.0,local_58 + -100.0,param_1);
  FUN_10064e47c(param_1 + 0x1d08);
  lVar1 = param_1 + 0x284b8;
  lVar2 = param_1 + 0x28388;
  FUN_10064e72c(0x42400000,lVar1,3,lVar2,1);
  FUN_10064e72c(0,lVar1,5,lVar2,5);
  lVar3 = param_1 + 0x285e8;
  FUN_10064e72c(0x42400000,lVar3,3,lVar1,1);
  FUN_10064e72c(0,lVar3,5,lVar1,5);
  FUN_10064e72c(0x42400000,param_1 + 0x28718,3,lVar3,1);
  FUN_10064e72c(0,param_1 + 0x28718,5,lVar3,5);
  FUN_10064e5ec(0,0,param_1 + 0x27c60,1,lVar2,1);
  FUN_10064e72c(0x41f00000,param_1 + 0x27c60,0,param_1 + 0x168,0);
  iVar5 = FUN_100131560();
  uVar7 = 4;
  uVar4 = 0;
  if (iVar5 == 0) {
    uVar4 = uVar7;
  }
  *(uint *)(param_1 + 0x2853c) = *(uint *)(param_1 + 0x2853c) & 0xfffffffb | uVar4;
  iVar5 = FUN_100131560();
  uVar4 = 0;
  if (iVar5 == 0) {
    uVar4 = uVar7;
  }
  *(uint *)(param_1 + 0x2866c) = *(uint *)(param_1 + 0x2866c) & 0xfffffffb | uVar4;
  iVar5 = FUN_100131560();
  uVar4 = 0;
  if (iVar5 == 0) {
    uVar4 = uVar7;
  }
  *(uint *)(param_1 + 0x2879c) = *(uint *)(param_1 + 0x2879c) & 0xfffffffb | uVar4;
  FUN_10015d3ec();
  uVar6 = FUN_100164f34();
  FUN_1006513c0(lVar2,uVar6);
  FUN_1001b3b58(param_1);
  return;
}



/*
 * FUN_100227fb8
 * profile body setup — skipped for guests by gate
 * VA: 0x100227fb8 | Source: functions/10022.c:6398
 * Dylib: Layer 8
 * Notes: Called as FUN_100227fb8(self+0x1d0, 1) by profile body hook.
 * CE-gate: NO | Guest-gate: NO
 * Callees: FUN_100227f64, FUN_100228088, FUN_100228358, FUN_100228648, FUN_100228938, FUN_100228ad8, FUN_100228c78, FUN_100228f50 (+1 more)
 * Callers: FUN_10023bb88, FUN_10023ccdc, FUN_10023cd58, FUN_10023cdd4, FUN_10023ce64, FUN_10025d954, FUN_100261b5c, thunk_FUN_10023ccdc (+3 more)
 */
void FUN_100227fb8(long param_1,undefined4 param_2)

{
  FUN_100227f64();
  *(undefined4 *)(param_1 + 0x7c30) = param_2;
  switch(param_2) {
  case 1:
    FUN_100228088(param_1);
    return;
  case 2:
    FUN_100228358(param_1);
    return;
  case 3:
    FUN_100228648(param_1);
    return;
  case 4:
    FUN_100228938(param_1);
    return;
  case 5:
    FUN_100228ad8(param_1);
    return;
  case 6:
    FUN_100228c78(param_1);
    return;
  case 7:
    FUN_100228f50(param_1);
    return;
  case 8:
    FUN_100229240(param_1);
    return;
  default:
    return;
  }
}



/*
 * FUN_100228088
 * VA: 0x100228088 | Source: functions/10022.c:6436
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 8, Vis masks: 2
 * Callees: FUN_1000153b4, FUN_10015d3ec, FUN_100164f34, FUN_100181af8, FUN_100185730, FUN_100185e2c, FUN_100185e38, FUN_100185e48 (+8 more)
 * Callers: FUN_100227fb8
 */
void FUN_100228088(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  
  *(uint *)(param_1 + 0x1b7c) = *(uint *)(param_1 + 0x1b7c) | 4;
  uVar2 = FUN_1004e0150("MENU_PROFILE_EDIT_HEADER",0);
  FUN_1006513c0(param_1 + 0x19c8,uVar2);
  uVar2 = FUN_1004e0150("MENU_PROFILE_EDIT_PREVIOUS_NAME",0);
  thunk_FUN_1004e439c(auStack_50,uVar2);
  FUN_10015d3ec();
  uVar2 = FUN_100164f34();
  thunk_FUN_1004e439c(auStack_60,uVar2);
  FUN_1004e3120(auStack_70,"[PREVIOUS_NAME]");
  FUN_1004e3bc4(auStack_50,0,auStack_70,auStack_60);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  FUN_1006513c0(param_1 + 0x2170,auStack_50);
  *(uint *)(param_1 + 0x21f4) = *(uint *)(param_1 + 0x21f4) | 4;
  FUN_1000153b4(param_1 + 0x7c00,auStack_60);
  uVar2 = FUN_1004e0150("MENU_PROFILE_EDIT_DESC",0);
  FUN_1006513c0(param_1 + 0x22a0,uVar2);
  lVar1 = param_1 + 0x23d0;
  uVar2 = FUN_1004e0150("MENU_PROFILE_EDIT_NAME_FIELD",0);
  FUN_100185730(lVar1,uVar2);
  uVar2 = FUN_1004e0150("MENU_PROFILE_EDIT_NAME_CAPTION",0);
  FUN_1001afd98(lVar1,uVar2,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(lVar1,1);
  FUN_100185e38(lVar1,1,3);
  FUN_100185e48(lVar1,1,0x10);
  FUN_100185e70(lVar1,0);
  *(uint *)(param_1 + 0x2454) = *(uint *)(param_1 + 0x2454) | 4;
  lVar1 = param_1 + 0x40c0;
  uVar2 = FUN_1004e0150("MENU_PROFILE_EDIT_NAME_CONFIRM_FIELD",0);
  FUN_100185730(lVar1,uVar2);
  uVar2 = FUN_1004e0150("MENU_PROFILE_EDIT_NAME_CAPTION",0);
  FUN_1001afd98(lVar1,uVar2,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(lVar1,1);
  FUN_100185e38(lVar1,1,3);
  FUN_100185e48(lVar1,1,0x10);
  FUN_100185e70(lVar1,0);
  *(uint *)(param_1 + 0x4144) = *(uint *)(param_1 + 0x4144) | 4;
  uVar2 = FUN_1004e0150("MENU_PROFILE_EDIT_SUBMIT_NAME",0);
  FUN_100181af8(param_1 + 0x5db0,uVar2);
  *(uint *)(param_1 + 0x76c4) = *(uint *)(param_1 + 0x76c4) & 0xfffffffb;
  *(uint *)(param_1 + 0x799c) = *(uint *)(param_1 + 0x799c) & 0xfffffffb;
  FUN_100227610(param_1);
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  return;
}



/*
 * FUN_100228358
 * VA: 0x100228358 | Source: functions/10022.c:6503
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 8, Vis masks: 3
 * Callees: FUN_1000153b4, FUN_10015d3ec, FUN_100181af8, FUN_100185730, FUN_100185e2c, FUN_100185e38, FUN_100185e48, FUN_100185e70 (+8 more)
 * Callers: FUN_100227fb8
 */
void FUN_100228358(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  
  *(uint *)(param_1 + 0x1b7c) = *(uint *)(param_1 + 0x1b7c) & 0xfffffffb;
  uVar1 = FUN_1004e0150("MENU_EDIT_GUILDNAME_HEADER",0);
  FUN_1006513c0(param_1 + 0x19c8,uVar1);
  uVar1 = FUN_1004e0150("MENU_PROFILE_EDIT_PREVIOUS_NAME",0);
  thunk_FUN_1004e439c(auStack_50,uVar1);
  FUN_1004e3120(auStack_60,"[PREVIOUS_NAME]");
  lVar2 = FUN_10015d3ec();
  FUN_1004e3170(auStack_70,lVar2 + 0x50c8);
  FUN_1004e3bc4(auStack_50,0,auStack_60,auStack_70);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  FUN_1006513c0(param_1 + 0x2170,auStack_50);
  *(uint *)(param_1 + 0x21f4) = *(uint *)(param_1 + 0x21f4) | 4;
  lVar2 = FUN_10015d3ec();
  FUN_1004e3170(auStack_60,lVar2 + 0x50c8);
  FUN_1000153b4(param_1 + 0x7c00,auStack_60);
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  uVar1 = FUN_1004e0150("MENU_EDIT_GUILDNAME_DESC",0);
  FUN_1006513c0(param_1 + 0x22a0,uVar1);
  lVar2 = param_1 + 0x23d0;
  uVar1 = FUN_1004e0150("MENU_EDIT_GUILDNAME_FIELD",0);
  FUN_100185730(lVar2,uVar1);
  uVar1 = FUN_1004e0150("MENU_EDIT_GUILDNAME_CAPTION",0);
  FUN_1001afd98(lVar2,uVar1,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(lVar2,1);
  FUN_100185e38(lVar2,1,3);
  FUN_100185e48(lVar2,1,0x10);
  FUN_100185e70(lVar2,0);
  *(uint *)(param_1 + 0x2454) = *(uint *)(param_1 + 0x2454) | 4;
  lVar2 = param_1 + 0x40c0;
  uVar1 = FUN_1004e0150("MENU_EDIT_GUILDNAME_CONFIRM_FIELD",0);
  FUN_100185730(lVar2,uVar1);
  uVar1 = FUN_1004e0150("MENU_EDIT_GUILDNAME_CAPTION",0);
  FUN_1001afd98(lVar2,uVar1,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(lVar2,1);
  FUN_100185e38(lVar2,1,3);
  FUN_100185e48(lVar2,1,0x10);
  FUN_100185e70(lVar2,0);
  *(uint *)(param_1 + 0x4144) = *(uint *)(param_1 + 0x4144) | 4;
  uVar1 = FUN_1004e0150("MENU_PROFILE_EDIT_SUBMIT_NAME",0);
  FUN_100181af8(param_1 + 0x5db0,uVar1);
  *(uint *)(param_1 + 0x76c4) = *(uint *)(param_1 + 0x76c4) & 0xfffffffb;
  *(uint *)(param_1 + 0x799c) = *(uint *)(param_1 + 0x799c) & 0xfffffffb;
  FUN_100227610(param_1);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  return;
}



/*
 * FUN_100228648
 * VA: 0x100228648 | Source: functions/10022.c:6574
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 8, Vis masks: 3
 * Callees: FUN_1000153b4, FUN_10015d3ec, FUN_100181af8, FUN_100185730, FUN_100185e2c, FUN_100185e38, FUN_100185e48, FUN_100185e70 (+8 more)
 * Callers: FUN_100227fb8
 */
void FUN_100228648(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  
  *(uint *)(param_1 + 0x1b7c) = *(uint *)(param_1 + 0x1b7c) & 0xfffffffb;
  uVar1 = FUN_1004e0150("MENU_EDIT_GUILDTAG_HEADER",0);
  FUN_1006513c0(param_1 + 0x19c8,uVar1);
  uVar1 = FUN_1004e0150("MENU_PROFILE_EDIT_PREVIOUS_TAG",0);
  thunk_FUN_1004e439c(auStack_50,uVar1);
  FUN_1004e3120(auStack_60,"[PREVIOUS_TAG]");
  lVar2 = FUN_10015d3ec();
  FUN_1004e3170(auStack_70,lVar2 + 0x50e0);
  FUN_1004e3bc4(auStack_50,0,auStack_60,auStack_70);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  FUN_1006513c0(param_1 + 0x2170,auStack_50);
  *(uint *)(param_1 + 0x21f4) = *(uint *)(param_1 + 0x21f4) | 4;
  lVar2 = FUN_10015d3ec();
  FUN_1004e3170(auStack_60,lVar2 + 0x50e0);
  FUN_1000153b4(param_1 + 0x7c00,auStack_60);
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  uVar1 = FUN_1004e0150("MENU_EDIT_GUILDTAG_DESC",0);
  FUN_1006513c0(param_1 + 0x22a0,uVar1);
  lVar2 = param_1 + 0x23d0;
  uVar1 = FUN_1004e0150("MENU_EDIT_GUILDTAG_FIELD",0);
  FUN_100185730(lVar2,uVar1);
  uVar1 = FUN_1004e0150("MENU_EDIT_GUILDTAG_CAPTION",0);
  FUN_1001afd98(lVar2,uVar1,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(lVar2,1);
  FUN_100185e38(lVar2,1,2);
  FUN_100185e48(lVar2,1,4);
  FUN_100185e70(lVar2,0);
  *(uint *)(param_1 + 0x2454) = *(uint *)(param_1 + 0x2454) | 4;
  lVar2 = param_1 + 0x40c0;
  uVar1 = FUN_1004e0150("MENU_EDIT_GUILDTAG_CONFIRM_FIELD",0);
  FUN_100185730(lVar2,uVar1);
  uVar1 = FUN_1004e0150("MENU_EDIT_GUILDTAG_CAPTION",0);
  FUN_1001afd98(lVar2,uVar1,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(lVar2,1);
  FUN_100185e38(lVar2,1,2);
  FUN_100185e48(lVar2,1,4);
  FUN_100185e70(lVar2,0);
  *(uint *)(param_1 + 0x4144) = *(uint *)(param_1 + 0x4144) | 4;
  uVar1 = FUN_1004e0150("MENU_PROFILE_EDIT_SUBMIT_NAME",0);
  FUN_100181af8(param_1 + 0x5db0,uVar1);
  *(uint *)(param_1 + 0x76c4) = *(uint *)(param_1 + 0x76c4) & 0xfffffffb;
  *(uint *)(param_1 + 0x799c) = *(uint *)(param_1 + 0x799c) & 0xfffffffb;
  FUN_100227610(param_1);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  return;
}



/*
 * FUN_100228938
 * VA: 0x100228938 | Source: functions/10022.c:6645
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 5, Vis masks: 5
 * Callees: FUN_100181af8, FUN_100185730, FUN_100185e2c, FUN_100185e48, FUN_100185e70, FUN_1001afd98, FUN_1001b0734, FUN_100227610 (+3 more)
 * Callers: FUN_100227fb8
 */
void FUN_100228938(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_34;
  
  *(uint *)(param_1 + 0x1b7c) = *(uint *)(param_1 + 0x1b7c) & 0xfffffffb;
  uVar2 = FUN_1004e0150("MENU_EDIT_GUILDMOTTO_HEADER",0);
  FUN_1006513c0(param_1 + 0x19c8,uVar2);
  *(uint *)(param_1 + 0x21f4) = *(uint *)(param_1 + 0x21f4) & 0xfffffffb;
  uVar2 = FUN_1004e0150("MENU_EDIT_GUILDMOTTO_DESC",0);
  FUN_1006513c0(param_1 + 0x22a0,uVar2);
  lVar1 = param_1 + 0x23d0;
  uVar2 = FUN_1004e0150("MENU_EDIT_GUILDMOTTO_FIELD",0);
  FUN_100185730(lVar1,uVar2);
  uVar2 = FUN_1004e0150("MENU_EDIT_GUILDMOTTO_CAPTION",0);
  FUN_1001afd98(lVar1,uVar2,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e70(lVar1,0);
  FUN_1001b0734(lVar1,0);
  FUN_100185e48(lVar1,1,0x8c);
  FUN_100185e2c(lVar1,0);
  *(uint *)(param_1 + 0x2454) = *(uint *)(param_1 + 0x2454) | 4;
  uVar2 = FUN_1004e0150("MENU_EDIT_GUILD_SUBMIT_BUTTON",0);
  FUN_100181af8(param_1 + 0x5db0,uVar2);
  *(uint *)(param_1 + 0x4144) = *(uint *)(param_1 + 0x4144) & 0xfffffffb;
  *(uint *)(param_1 + 0x76c4) = *(uint *)(param_1 + 0x76c4) & 0xfffffffb;
  *(uint *)(param_1 + 0x799c) = *(uint *)(param_1 + 0x799c) & 0xfffffffb;
  local_34 = 0;
  FUN_100227d90(param_1,&DAT_101d91198,&local_34);
  FUN_100227610(param_1);
  return;
}



/*
 * FUN_100228ad8
 * VA: 0x100228ad8 | Source: functions/10022.c:6682
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 5, Vis masks: 5
 * Callees: FUN_100181af8, FUN_100185730, FUN_100185e2c, FUN_100185e48, FUN_100185e70, FUN_1001afd98, FUN_1001b0734, FUN_100227610 (+3 more)
 * Callers: FUN_100227fb8
 */
void FUN_100228ad8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_34;
  
  *(uint *)(param_1 + 0x1b7c) = *(uint *)(param_1 + 0x1b7c) & 0xfffffffb;
  uVar2 = FUN_1004e0150("MENU_EDIT_GUILD_MESSAGE_HEADER",0);
  FUN_1006513c0(param_1 + 0x19c8,uVar2);
  *(uint *)(param_1 + 0x21f4) = *(uint *)(param_1 + 0x21f4) & 0xfffffffb;
  uVar2 = FUN_1004e0150("MENU_EDIT_GUILD_MESSAGE_DESC",0);
  FUN_1006513c0(param_1 + 0x22a0,uVar2);
  lVar1 = param_1 + 0x23d0;
  uVar2 = FUN_1004e0150("MENU_EDIT_GUILD_MESSAGE_FIELD",0);
  FUN_100185730(lVar1,uVar2);
  uVar2 = FUN_1004e0150("MENU_EDIT_GUILD_MESSAGE_CAPTION",0);
  FUN_1001afd98(lVar1,uVar2,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e70(lVar1,0);
  FUN_1001b0734(lVar1,0);
  FUN_100185e48(lVar1,1,2000);
  FUN_100185e2c(lVar1,0);
  *(uint *)(param_1 + 0x2454) = *(uint *)(param_1 + 0x2454) | 4;
  uVar2 = FUN_1004e0150("MENU_EDIT_GUILD_SUBMIT_BUTTON",0);
  FUN_100181af8(param_1 + 0x5db0,uVar2);
  *(uint *)(param_1 + 0x4144) = *(uint *)(param_1 + 0x4144) & 0xfffffffb;
  *(uint *)(param_1 + 0x76c4) = *(uint *)(param_1 + 0x76c4) & 0xfffffffb;
  *(uint *)(param_1 + 0x799c) = *(uint *)(param_1 + 0x799c) & 0xfffffffb;
  local_34 = 0;
  FUN_100227d90(param_1,&DAT_101d91198,&local_34);
  FUN_100227610(param_1);
  return;
}



/*
 * FUN_100228c78
 * VA: 0x100228c78 | Source: functions/10022.c:6719
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 5, Vis masks: 4
 * Callees: FUN_10001554c, FUN_10015d3ec, FUN_100181af8, FUN_1001b4c0c, FUN_100227610, FUN_100227d90, FUN_1002295cc, FUN_1004e0150 (+4 more)
 * Callers: FUN_100227fb8
 */
void FUN_100228c78(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  *(uint *)(param_3 + 0x1b7c) = *(uint *)(param_3 + 0x1b7c) & 0xfffffffb;
  uVar5 = FUN_1004e0150("MENU_EDIT_GUILDTYPE_HEADER",0);
  FUN_1006513c0(param_3 + 0x19c8,uVar5);
  *(uint *)(param_3 + 0x21f4) = *(uint *)(param_3 + 0x21f4) & 0xfffffffb;
  uVar5 = FUN_1004e0150("MENU_EDIT_GUILDTYPE_DESC",0);
  FUN_1006513c0(param_3 + 0x22a0,uVar5);
  uVar5 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TYPE_OPEN",0);
  FUN_1006513c0(param_3 + 0x77e8,uVar5);
  uVar7 = FUN_1006425d0(param_3 + 0x7640,0,0,1,1);
  local_80 = (code *)CONCAT44(param_2,uVar7);
  FUN_10064e48c(param_3 + 0x7640,&local_80);
  *(uint *)(param_3 + 0x76c4) = *(uint *)(param_3 + 0x76c4) | 0x10;
  uVar7 = DAT_101dbd458;
  local_58 = DAT_101dbd458;
  local_80 = FUN_1002295cc;
  local_68 = 0;
  local_60 = 0;
  local_70 = 0;
  lStack_78 = param_3;
  FUN_10001554c(param_3 + 0x7648,&local_80);
  uVar3 = DAT_101dbd484;
  local_58 = DAT_101dbd484;
  local_80 = FUN_1002295cc;
  local_68 = 0;
  local_60 = 0;
  local_70 = 0;
  lStack_78 = param_3;
  FUN_10001554c(param_3 + 0x7648,&local_80);
  *(uint *)(param_3 + 0x76c4) = *(uint *)(param_3 + 0x76c4) | 4;
  uVar5 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TYPE_INVITE_ONLY",0);
  FUN_1006513c0(param_3 + 0x7ac0,uVar5);
  uVar8 = FUN_1006425d0(param_3 + 31000,0,0,1,1);
  local_80 = (code *)CONCAT44(param_2,uVar8);
  FUN_10064e48c(param_3 + 31000,&local_80);
  *(uint *)(param_3 + 0x799c) = *(uint *)(param_3 + 0x799c) | 0x10;
  local_58 = uVar7;
  local_80 = FUN_1002295cc;
  local_70 = 0;
  local_68 = 0;
  local_60 = 1;
  lStack_78 = param_3;
  FUN_10001554c(param_3 + 0x7920,&local_80);
  local_58 = uVar3;
  local_80 = FUN_1002295cc;
  local_70 = 0;
  local_68 = 0;
  local_60 = 1;
  lStack_78 = param_3;
  FUN_10001554c(param_3 + 0x7920,&local_80);
  *(uint *)(param_3 + 0x799c) = *(uint *)(param_3 + 0x799c) | 4;
  uVar5 = FUN_1004e0150("MENU_PROFILE_EDIT_SUBMIT_TYPE",0);
  FUN_100181af8(param_3 + 0x5db0,uVar5);
  *(uint *)(param_3 + 0x2454) = *(uint *)(param_3 + 0x2454) & 0xfffffffb;
  *(uint *)(param_3 + 0x4144) = *(uint *)(param_3 + 0x4144) & 0xfffffffb;
  local_80 = (code *)((ulong)local_80 & 0xffffffff00000000);
  FUN_100227d90(param_3,&DAT_101d91198,&local_80);
  lVar6 = FUN_10015d3ec();
  bVar4 = *(int *)(lVar6 + 0x525c) != 0;
  pcVar1 = "checkbox_filled";
  pcVar2 = "checkbox_empty";
  if (!bVar4) {
    pcVar1 = "checkbox_empty";
    pcVar2 = "checkbox_filled";
  }
  FUN_100652cdc(param_3 + 0x76f8,pcVar2);
  FUN_100652cdc(param_3 + 0x79d0,pcVar1);
  *(uint *)(param_3 + 0x7c28) = (uint)bVar4;
  FUN_1001b4c0c(param_3 + 0x5db0,1);
  FUN_100227610(param_3);
  return;
}



/*
 * FUN_100228f50
 * VA: 0x100228f50 | Source: functions/10022.c:6812
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 8, Vis masks: 3
 * Callees: FUN_1000153b4, FUN_10015d3ec, FUN_100181af8, FUN_100185730, FUN_100185e2c, FUN_100185e38, FUN_100185e48, FUN_100185e70 (+8 more)
 * Callers: FUN_100227fb8
 */
void FUN_100228f50(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  
  *(uint *)(param_1 + 0x1b7c) = *(uint *)(param_1 + 0x1b7c) & 0xfffffffb;
  uVar1 = FUN_1004e0150("MENU_EDIT_USERTEAMNAME_HEADER",0);
  FUN_1006513c0(param_1 + 0x19c8,uVar1);
  uVar1 = FUN_1004e0150("MENU_PROFILE_EDIT_PREVIOUS_NAME",0);
  thunk_FUN_1004e439c(auStack_50,uVar1);
  FUN_1004e3120(auStack_60,"[PREVIOUS_NAME]");
  lVar2 = FUN_10015d3ec();
  FUN_1004e3170(auStack_70,lVar2 + 0x5308);
  FUN_1004e3bc4(auStack_50,0,auStack_60,auStack_70);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  FUN_1006513c0(param_1 + 0x2170,auStack_50);
  *(uint *)(param_1 + 0x21f4) = *(uint *)(param_1 + 0x21f4) | 4;
  lVar2 = FUN_10015d3ec();
  FUN_1004e3170(auStack_60,lVar2 + 0x5308);
  FUN_1000153b4(param_1 + 0x7c00,auStack_60);
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  uVar1 = FUN_1004e0150("MENU_EDIT_USERTEAMNAME_DESC",0);
  FUN_1006513c0(param_1 + 0x22a0,uVar1);
  lVar2 = param_1 + 0x23d0;
  uVar1 = FUN_1004e0150("MENU_EDIT_USERTEAMNAME_FIELD",0);
  FUN_100185730(lVar2,uVar1);
  uVar1 = FUN_1004e0150("MENU_EDIT_USERTEAMNAME_CAPTION",0);
  FUN_1001afd98(lVar2,uVar1,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(lVar2,1);
  FUN_100185e38(lVar2,1,3);
  FUN_100185e48(lVar2,1,0x10);
  FUN_100185e70(lVar2,0);
  *(uint *)(param_1 + 0x2454) = *(uint *)(param_1 + 0x2454) | 4;
  lVar2 = param_1 + 0x40c0;
  uVar1 = FUN_1004e0150("MENU_EDIT_USERTEAMNAME_CONFIRM_FIELD",0);
  FUN_100185730(lVar2,uVar1);
  uVar1 = FUN_1004e0150("MENU_EDIT_USERTEAMNAME_CAPTION",0);
  FUN_1001afd98(lVar2,uVar1,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(lVar2,1);
  FUN_100185e38(lVar2,1,3);
  FUN_100185e48(lVar2,1,0x10);
  FUN_100185e70(lVar2,0);
  *(uint *)(param_1 + 0x4144) = *(uint *)(param_1 + 0x4144) | 4;
  uVar1 = FUN_1004e0150("MENU_PROFILE_EDIT_SUBMIT_NAME",0);
  FUN_100181af8(param_1 + 0x5db0,uVar1);
  *(uint *)(param_1 + 0x76c4) = *(uint *)(param_1 + 0x76c4) & 0xfffffffb;
  *(uint *)(param_1 + 0x799c) = *(uint *)(param_1 + 0x799c) & 0xfffffffb;
  FUN_100227610(param_1);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  return;
}



/*
 * FUN_100229240
 * VA: 0x100229240 | Source: functions/10022.c:6883
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 8, Vis masks: 3
 * Callees: FUN_1000153b4, FUN_10015d3ec, FUN_100181af8, FUN_100185730, FUN_100185e2c, FUN_100185e38, FUN_100185e48, FUN_100185e70 (+8 more)
 * Callers: FUN_100227fb8
 */
void FUN_100229240(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  
  *(uint *)(param_1 + 0x1b7c) = *(uint *)(param_1 + 0x1b7c) & 0xfffffffb;
  uVar1 = FUN_1004e0150("MENU_EDIT_USERTEAMTAG_HEADER",0);
  FUN_1006513c0(param_1 + 0x19c8,uVar1);
  uVar1 = FUN_1004e0150("MENU_PROFILE_EDIT_PREVIOUS_TAG",0);
  thunk_FUN_1004e439c(auStack_50,uVar1);
  FUN_1004e3120(auStack_60,"[PREVIOUS_TAG]");
  lVar2 = FUN_10015d3ec();
  FUN_1004e3170(auStack_70,lVar2 + 0x5320);
  FUN_1004e3bc4(auStack_50,0,auStack_60,auStack_70);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  FUN_1006513c0(param_1 + 0x2170,auStack_50);
  *(uint *)(param_1 + 0x21f4) = *(uint *)(param_1 + 0x21f4) | 4;
  lVar2 = FUN_10015d3ec();
  FUN_1004e3170(auStack_60,lVar2 + 0x5320);
  FUN_1000153b4(param_1 + 0x7c00,auStack_60);
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  uVar1 = FUN_1004e0150("MENU_EDIT_USERTEAMTAG_DESC",0);
  FUN_1006513c0(param_1 + 0x22a0,uVar1);
  lVar2 = param_1 + 0x23d0;
  uVar1 = FUN_1004e0150("MENU_EDIT_USERTEAMTAG_FIELD",0);
  FUN_100185730(lVar2,uVar1);
  uVar1 = FUN_1004e0150("MENU_EDIT_USERTEAMTAG_CAPTION",0);
  FUN_1001afd98(lVar2,uVar1,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(lVar2,1);
  FUN_100185e38(lVar2,1,2);
  FUN_100185e48(lVar2,1,4);
  FUN_100185e70(lVar2,0);
  *(uint *)(param_1 + 0x2454) = *(uint *)(param_1 + 0x2454) | 4;
  lVar2 = param_1 + 0x40c0;
  uVar1 = FUN_1004e0150("MENU_EDIT_USERTEAMTAG_CONFIRM_FIELD",0);
  FUN_100185730(lVar2,uVar1);
  uVar1 = FUN_1004e0150("MENU_EDIT_USERTEAMTAG_CAPTION",0);
  FUN_1001afd98(lVar2,uVar1,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(lVar2,1);
  FUN_100185e38(lVar2,1,2);
  FUN_100185e48(lVar2,1,4);
  FUN_100185e70(lVar2,0);
  *(uint *)(param_1 + 0x4144) = *(uint *)(param_1 + 0x4144) | 4;
  uVar1 = FUN_1004e0150("MENU_PROFILE_EDIT_SUBMIT_NAME",0);
  FUN_100181af8(param_1 + 0x5db0,uVar1);
  *(uint *)(param_1 + 0x76c4) = *(uint *)(param_1 + 0x76c4) & 0xfffffffb;
  *(uint *)(param_1 + 0x799c) = *(uint *)(param_1 + 0x799c) & 0xfffffffb;
  FUN_100227610(param_1);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  return;
}



/*
 * FUN_100229f70
 * VA: 0x100229f70 | Source: functions/10022.c:7610
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 7
 * Callees: FUN_1001e3120, FUN_1004e0150, FUN_1004e3120, FUN_1004e3bc4, thunk_FUN_10022acf8, thunk_FUN_1004e439c
 * Callers: FUN_10022a47c, thunk_FUN_10022a47c
 */
void FUN_100229f70(long param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  uVar2 = FUN_1004e0150("MENU_EDIT_GUILDTYPE_SUBMIT_DIALOG_TEXT",0);
  thunk_FUN_1004e439c(auStack_40,uVar2);
  FUN_1004e3120(auStack_50,"[GUILD_TYPE]");
  pcVar1 = "MENU_PROFILE_GUILD_CREATE_TYPE_OPEN";
  if (*(int *)(param_1 + 0x7c28) != 0) {
    pcVar1 = "MENU_PROFILE_GUILD_CREATE_TYPE_INVITE_ONLY";
  }
  uVar2 = FUN_1004e0150(pcVar1,0);
  FUN_1004e3bc4(auStack_40,0,auStack_50,uVar2);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  uVar2 = FUN_1004e0150("MENU_EDIT_GUILDTYPE_SUBMIT_TITLE",0);
  uVar3 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  uVar4 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
  FUN_1001e3120(uVar2,auStack_40,uVar3,uVar4,param_1,thunk_FUN_10022acf8,0);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}



/*
 * FUN_100230134
 * VA: 0x100230134 | Source: functions/10023.c:259
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 8, Vis masks: 3
 * Callees: FUN_10001554c, FUN_1000f1e20, FUN_10015d3ec, FUN_100164f34, FUN_10016c2f0, FUN_1001b4c0c, FUN_1001c6fd8, FUN_1001c8080 (+13 more)
 * Callers: FUN_10022f998
 */
void FUN_100230134(long param_1,string *param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  char *pcVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined *puVar10;
  undefined1 auStack_98 [8];
  void *local_90;
  undefined1 auStack_88 [8];
  void *local_80;
  long local_78;
  code *local_70;
  void *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulong local_50;
  undefined4 local_48;
  
  if ((param_2 == (string *)0x0) && (param_3 == 0)) {
    return;
  }
  pvVar5 = operator_new(0x25a8);
  local_78 = FUN_100231e58();
  std::string::operator=((string *)(local_78 + 0x2570),param_2);
  FUN_1006513c0((long)pvVar5 + 0x178,param_2 + 0x18);
  std::string::operator=((string *)((long)pvVar5 + 0x2588),param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)((long)pvVar5 + 0x25a0) = uVar3;
  switch(uVar3) {
  case 0:
    pcVar6 = "MENU_PROFILE_GUILD_ROLE_Initiate";
    break;
  case 1:
    pcVar6 = "MENU_PROFILE_GUILD_ROLE_MEMBER";
    break;
  case 2:
    pcVar6 = "MENU_PROFILE_GUILD_ROLE_VETERAN";
    break;
  case 3:
    uVar8 = FUN_1004e0150("MENU_GUILD_MEMBERS_ROLE_OFFICER",0);
    FUN_1006513c0((long)pvVar5 + 0x2a8,uVar8);
    pcVar6 = "generic_guild_officer";
    goto LAB_100230270;
  case 4:
    uVar8 = FUN_1004e0150("MENU_PROFILE_GUILD_ROLE_CAPTAIN",0);
    FUN_1006513c0((long)pvVar5 + 0x2a8,uVar8);
    pcVar6 = "generic_crown";
LAB_100230270:
    FUN_100652cdc((long)pvVar5 + 0x88,pcVar6);
    uVar9 = *(uint *)((long)pvVar5 + 0x10c) | 4;
    goto LAB_10023027c;
  default:
    goto switchD_1002301c4_default;
  }
  uVar8 = FUN_1004e0150(pcVar6,0);
  FUN_1006513c0((long)pvVar5 + 0x2a8,uVar8);
  uVar9 = *(uint *)((long)pvVar5 + 0x10c) & 0xfffffffb;
LAB_10023027c:
  *(uint *)((long)pvVar5 + 0x10c) = uVar9;
switchD_1002301c4_default:
  FUN_1004e313c(auStack_88);
  FUN_1004e38ac(auStack_88,"%d");
  (**(code **)(*(long *)(local_78 + 0x3d8) + 0x138))(local_78 + 0x3d8,auStack_88);
  lVar7 = local_78;
  lVar1 = local_78 + 0x508;
  FUN_1004e3120(&local_70,"");
  (**(code **)(*(long *)(lVar7 + 0x508) + 0x138))(lVar1,&local_70);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  *(uint *)(local_78 + 0xd5c) =
       *(uint *)(local_78 + 0xd5c) & 0xfffffffb | (uint)(byte)param_2[0x102] << 2;
  *(uint *)(local_78 + 0xe4c) =
       *(uint *)(local_78 + 0xe4c) & 0xfffffff8 |
       *(uint *)(local_78 + 0xe4c) & 3 | (uint)(param_2[0x102] == (string)0x0) << 2;
  lVar1 = local_78 + 0xeb8;
  lVar7 = FUN_10016c2f0();
  FUN_1001b4c0c(lVar1,*(int *)(lVar7 + 0x38) < 1);
  lVar7 = local_78;
  uVar3 = *(undefined4 *)(param_2 + 0x70);
  lVar1 = local_78 + 0x638;
  FUN_1004e3120(&local_70,"");
  (**(code **)(*(long *)(lVar7 + 0x638) + 0x138))(lVar1,&local_70);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  FUN_1001c6fd8(local_78 + 0x1400,uVar3);
  lVar7 = local_78;
  uVar3 = *(undefined4 *)(param_2 + 0xa0);
  lVar1 = local_78 + 0x768;
  FUN_1004e3120(&local_70,"");
  (**(code **)(*(long *)(lVar7 + 0x768) + 0x138))(lVar1,&local_70);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  FUN_1001c6fd8(local_78 + 0x17d0,uVar3);
  FUN_1001c8080(local_78 + 0x1120,*(undefined4 *)(param_2 + 0x60));
  uVar8 = FUN_1004e0150("MENU_GUILD_VALUE_STATUS",0);
  thunk_FUN_1004e439c(auStack_98,uVar8);
  plVar2 = (long *)(local_78 + 0x898);
  if (*(int *)(param_2 + 0x44) < 1) {
    uVar8 = FUN_1004e0150("MENU_GUILD_STATUS_NEVER_PLAYED",0);
    (**(code **)(*plVar2 + 0x138))(plVar2,uVar8);
  }
  else {
    FUN_1000f1e20(&local_70,auStack_98,*(int *)(param_2 + 0x44),1);
    (**(code **)(*plVar2 + 0x138))(plVar2,&local_70);
    if (local_68 != (void *)0x0) {
      operator_delete__(local_68);
    }
  }
  uVar9 = *(uint *)(param_2 + 0x48);
  if (uVar9 < 5) {
    puVar10 = (&PTR_DAT_1014774e8)[(int)uVar9];
    lVar1 = local_78 + 0xab8;
    uVar8 = FUN_1004e0150((&PTR_s_MENU_GUILD_AVAILABILITY_OFFLINE_1014774c0)[(int)uVar9],0);
    FUN_1006513c0(lVar1,uVar8);
    FUN_100651460(local_78 + 0xab8,puVar10);
  }
  lVar1 = local_78;
  if (param_2[0x101] == (string)0x0) {
    FUN_10015d3ec();
    uVar8 = FUN_100164f34();
    iVar4 = FUN_1004e36c0(param_2 + 0x18,uVar8);
    uVar9 = 4;
    if (iVar4 == 0) {
      uVar9 = 0;
    }
  }
  else {
    uVar9 = 0;
  }
  *(uint *)(lVar1 + 0x1c24) = *(uint *)(lVar1 + 0x1c24) & 0xfffffffb | uVar9;
  FUN_100651460(local_78 + 0x178,&DAT_10115a168);
  local_50 = (ulong)*(uint *)(param_1 + 0x1fd8);
  local_48 = DAT_101dbd460;
  local_70 = FUN_100230d40;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = (void *)param_1;
  FUN_10001554c(local_78 + 0x180,&local_70);
  local_50 = (ulong)*(uint *)(param_1 + 0x1fd8);
  local_48 = DAT_101dbd48c;
  local_70 = FUN_100230d40;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = (void *)param_1;
  FUN_10001554c(local_78 + 0x180,&local_70);
  FUN_1005308f8(param_1 + 0x1118,local_78,1);
  FUN_100230d48(param_1 + 0x1fd8,&local_78);
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
  }
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
  }
  return;
}



/*
 * FUN_100230dc8
 * VA: 0x100230dc8 | Source: functions/10023.c:785
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 6, Vis masks: 5
 * Callees: FUN_10001554c, FUN_10001f160, FUN_1000200a0, FUN_10003d5bc, FUN_100047300, FUN_10015d3ec, FUN_100164f34, FUN_100181af8 (+13 more)
 * Callers: FUN_10022e32c, FUN_1002313e8, FUN_100231c1c, FUN_100231cd8, FUN_100231d94, thunk_FUN_100231d94
 */
void FUN_100230dc8(long *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  ulong uVar20;
  ulong uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  code *local_c0;
  long *plStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  
  puVar1 = (uint *)((long)param_1 + 0x1058c);
  uVar15 = *puVar1;
  *puVar1 = param_3;
  if ((int)param_3 < 0) {
    return;
  }
  if (*(uint *)(param_1 + 0x3fb) <= param_3) {
    return;
  }
  iVar10 = *(int *)(*(long *)(param_1[0x3fc] + (ulong)param_3 * 8) + 0x25a0);
  lVar11 = FUN_10015d3ec();
  if ((int)*(uint *)(lVar11 + 0x5624) < 0) {
    if (iVar10 == 4) goto LAB_100230e8c;
  }
  else {
    iVar7 = *(int *)(*(long *)(lVar11 + 0x5268) + (ulong)*(uint *)(lVar11 + 0x5624) * 0x108 + 0x50);
    if (iVar10 == 4 && iVar7 != 4) goto LAB_100230e8c;
    if (iVar7 == 4) {
      uVar15 = 1;
      goto LAB_100230e98;
    }
  }
  if (*(int *)(*(long *)(param_1[0x3fc] + (ulong)*puVar1 * 8) + 0x25a0) != 3) {
    uVar15 = 0;
LAB_100230e98:
    puVar2 = (uint *)((long)param_1 + 0x514c);
    plVar3 = param_1 + 0xa19;
    FUN_100642324(plVar3);
    bVar8 = param_2 == 0;
    fVar18 = 135.0;
    if (bVar8) {
      fVar18 = 0.0;
    }
    uVar9 = 0x3eb33333;
    if (bVar8) {
      uVar9 = 0x3dcccccd;
    }
    uVar21 = (ulong)uVar9;
    uVar14 = *puVar2;
    uVar9 = 0;
    if (bVar8) {
      uVar9 = 0xcc;
    }
    if (uVar9 != (uVar14 >> 7 & 0xff)) {
      *puVar2 = uVar14 & 0xffff8000 | uVar14 & 0x7f | uVar9 << 7;
      FUN_1000200a0(plVar3);
      uVar14 = *puVar2;
    }
    *puVar2 = uVar14 | 4;
    uVar17 = 0x3f4ccccd;
    if (param_2 == 0) {
      uVar17 = 0;
    }
    uVar9 = 0;
    if (param_2 == 0) {
      uVar9 = 0x10;
    }
    uVar20 = uVar21;
    uVar12 = FUN_100640840(uVar17,FUN_10001f160);
    FUN_100642b14(plVar3,uVar12);
    fVar19 = (float)uVar20;
    lVar11 = *(long *)(param_1[0x3fc] + (ulong)*puVar1 * 8);
    *(uint *)(lVar11 + 0x1fc) = *(uint *)(lVar11 + 0x1fc) & 0xffffffef | uVar9;
    uVar9 = *puVar1;
    plVar4 = param_1 + 0x2f9;
    if (uVar9 + 1 < *(uint *)(param_1 + 0x3fb)) {
      uVar16 = (ulong)(uVar9 + 1);
      do {
        fVar19 = (float)uVar20;
        FUN_100642324(*(undefined8 *)(param_1[0x3fc] + uVar16 * 8));
        fVar22 = *(float *)((long)param_1 + 0x1784);
        FUN_100652e60(plVar4);
        uVar20 = (ulong)(uint)(fVar18 + (float)(int)uVar16 * 135.0 + fVar22 + fVar19);
        uVar12 = FUN_1006408f4(*(undefined4 *)(*(long *)(param_1[0x3fc] + uVar16 * 8) + 0x40),uVar20
                               ,uVar21,FUN_10001f160);
        FUN_100642b14(*(undefined8 *)(param_1[0x3fc] + uVar16 * 8),uVar12);
        fVar19 = (float)uVar20;
        uVar16 = uVar16 + 1;
      } while ((uint)uVar16 < *(uint *)(param_1 + 0x3fb));
      uVar9 = *puVar1;
    }
    FUN_1006423ec(*(undefined8 *)(param_1[0x3fc] + (ulong)uVar9 * 8),1);
    if ((param_2 & 1) == 0) {
      FUN_1005308f8(param_1 + 0x223,*(undefined8 *)(param_1[0x3fc] + (ulong)*puVar1 * 8),1);
      fVar18 = *(float *)((long)param_1 + 0x1784);
      FUN_100652e60(plVar4);
      fVar18 = fVar19 + fVar18 + (float)(int)*puVar1 * 135.0;
      lVar11 = *(long *)(param_1[0x3fc] + (ulong)*puVar1 * 8);
      fVar19 = *(float *)(lVar11 + 0x40);
      bVar8 = false;
      if ((fVar19 == 0.0) && (bVar8 = false, !NAN(*(float *)(lVar11 + 0x44)) && !NAN(fVar18))) {
        bVar8 = *(float *)(lVar11 + 0x44) == fVar18;
      }
      if (!bVar8) {
        *(undefined4 *)(lVar11 + 0x40) = 0;
        *(float *)(lVar11 + 0x44) = fVar18;
        FUN_1000200a0();
      }
      uVar12 = FUN_100047300();
      FUN_100642b14(plVar3,uVar12);
      fVar18 = -1.0;
    }
    else {
      (**(code **)(*param_1 + 0x78))(param_1,*(undefined8 *)(param_1[0x3fc] + (ulong)*puVar1 * 8),1)
      ;
      lVar11 = FUN_10003d5bc(param_1 + 0x2e8);
      fVar22 = *(float *)(lVar11 + 8);
      fVar23 = *(float *)(lVar11 + 0xc);
      fVar24 = *(float *)(lVar11 + 0x10);
      fVar25 = *(float *)(lVar11 + 0x14);
      lVar11 = FUN_10003d5bc(param_1);
      fVar18 = *(float *)(lVar11 + 0xc);
      FUN_100652e60(plVar4);
      lVar11 = *(long *)(param_1[0x3fc] + (ulong)*puVar1 * 8);
      fVar22 = fVar22 / fVar24;
      fVar19 = (fVar23 - fVar18) / fVar25 + fVar19 + (float)(int)*puVar1 * 135.0;
      if ((*(float *)(lVar11 + 0x40) != fVar22) || (*(float *)(lVar11 + 0x44) != fVar19)) {
        *(float *)(lVar11 + 0x40) = fVar22;
        *(float *)(lVar11 + 0x44) = fVar19;
        FUN_1000200a0();
        lVar11 = *(long *)(param_1[0x3fc] + (ulong)*puVar1 * 8);
      }
      uVar12 = FUN_100655b6c(lVar11 + 0x248);
      FUN_10015d3ec();
      uVar13 = FUN_100164f34();
      uVar9 = FUN_1004e3654(uVar12,uVar13);
      pcVar6 = "MENU_PROFILE_GUILD_LEAVE_GUILD";
      if (uVar9 == 0) {
        pcVar6 = "MENU_PROFILE_GUILD_REMOVE_MEMBER";
      }
      uVar12 = FUN_1004e0150(pcVar6,0);
      FUN_100181af8(param_1 + 0xa7c,uVar12);
      local_98 = DAT_101d91884;
      local_c0 = thunk_FUN_100231648;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b0 = 0;
      plStack_b8 = param_1;
      FUN_10001554c(param_1 + 0xa7d,&local_c0);
      uVar14 = 4;
      if (uVar15 == 0) {
        uVar14 = 0;
      }
      uVar5 = *(uint *)((long)param_1 + 0x5464) & 0xfffffffb | uVar14;
      if (iVar10 != 4) {
        uVar5 = *(uint *)((long)param_1 + 0x5464) | 4;
      }
      *(uint *)((long)param_1 + 0x5464) = uVar5;
      if ((uVar15 & uVar9) == 1) {
        *(uint *)((long)param_1 + 0x6a1c) = *(uint *)((long)param_1 + 0x6a1c) & 0xfffffffb;
        uVar14 = *(uint *)((long)param_1 + 0x7fd4) & 0xfffffffb;
      }
      else {
        *(uint *)((long)param_1 + 0x6a1c) = *(uint *)((long)param_1 + 0x6a1c) & 0xfffffffb | uVar14;
        pcVar6 = "MENU_GUILD_MEMBERS_DEMOTE_BUTTON_LABEL";
        if (*(int *)(*(long *)(param_1[0x3fc] + (ulong)*puVar1 * 8) + 0x25a0) != 3) {
          pcVar6 = "MENU_GUILD_MEMBERS_PROMOTE_BUTTON_LABEL";
        }
        uVar12 = FUN_1004e0150(pcVar6,0);
        FUN_100181af8(param_1 + 0xd33,uVar12);
        uVar14 = *(uint *)((long)param_1 + 0x7fd4) & 0xfffffffb | uVar14;
      }
      *(uint *)((long)param_1 + 0x7fd4) = uVar14;
      fVar18 = 1.0;
    }
    plVar3 = param_1 + 0xa37;
    *(uint *)((long)param_1 + 0x523c) = *(uint *)((long)param_1 + 0x523c) | 4;
    plVar4 = param_1 + 0xa6b;
    FUN_100642324(plVar4);
    FUN_100642888(plVar4,0,0,1,1);
    fVar19 = fVar18 * -0.5 * fVar19;
    fVar22 = *(float *)((long)param_1 + 0x539c);
    if (fVar22 != fVar19) {
      *(float *)((long)param_1 + 0x539c) = fVar19;
      FUN_1000200a0(plVar4);
    }
    FUN_100642888(plVar4,0,0,1,1);
    uVar12 = FUN_1006408f4(0,(fVar22 * 0.5 + 5.0) * fVar18,uVar21,FUN_10001f160);
    FUN_100642b14(plVar4,uVar12);
    if (param_2 == 0) {
      uVar12 = FUN_100047300();
      FUN_100642b14(plVar3,uVar12);
      *puVar1 = 0xffffffff;
    }
    else {
      iVar10 = FUN_100642d08(plVar3);
      if (iVar10 != 0) {
        FUN_1006423ec(plVar3,1);
      }
      (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
      lVar11 = *(long *)(param_1[0x3fc] + (ulong)*puVar1 * 8);
      fVar18 = *(float *)(lVar11 + 0x40);
      fVar19 = *(float *)(lVar11 + 0x44) + 135.0;
      if ((*(float *)(param_1 + 0xa3f) != fVar18) || (*(float *)((long)param_1 + 0x51fc) != fVar19))
      {
        *(float *)(param_1 + 0xa3f) = fVar18;
        *(float *)((long)param_1 + 0x51fc) = fVar19;
        FUN_1000200a0(plVar3);
      }
      *(uint *)((long)param_1 + 0x53dc) = *(uint *)((long)param_1 + 0x53dc) | 4;
    }
    (**(code **)(*param_1 + 0x150))(param_1);
    return;
  }
LAB_100230e8c:
  *puVar1 = uVar15;
  return;
}



/*
 * FUN_100231e58
 * VA: 0x100231e58 | Source: functions/10023.c:1541
 * CE-gate: NO | Guest-gate: NO
 * Indicators: Vis masks: 5
 * Callees: FUN_10001554c, FUN_1000200a0, FUN_100183c68, FUN_100183c78, FUN_1001b495c, FUN_1001b4964, FUN_1006421a8, FUN_100642bd8 (+17 more)
 * Callers: FUN_100230134
 */
long * FUN_100231e58(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  uint uVar16;
  undefined4 uVar17;
  bool bVar18;
  undefined8 *puVar19;
  long lVar20;
  float fVar21;
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar19 = (undefined8 *)FUN_1006421a8();
  *puVar19 = &PTR_thunk_FUN_100232c30_1014773d0;
  thunk_FUN_100652c08();
  plVar1 = param_1 + 0x2f;
  thunk_FUN_100650e64();
  plVar2 = param_1 + 0x55;
  thunk_FUN_100650e64();
  lVar20 = 0x3d8;
  do {
    thunk_FUN_100650e64((long)param_1 + lVar20);
    lVar20 = lVar20 + 0x130;
  } while (lVar20 != 0x9c8);
  plVar3 = param_1 + 0x139;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x157;
  thunk_FUN_100650e64();
  plVar5 = param_1 + 0x17d;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0x19b;
  thunk_FUN_100652c08(plVar6);
  plVar7 = param_1 + 0x1b9;
  thunk_FUN_100652c08();
  plVar8 = param_1 + 0x1d7;
  thunk_FUN_1001b4648();
  thunk_FUN_1001c7e54(param_1 + 0x224);
  thunk_FUN_1001c6e5c(param_1 + 0x280);
  thunk_FUN_1001c6e5c(param_1 + 0x2fa);
  plVar10 = param_1 + 0x374;
  thunk_FUN_100183990(plVar10,0);
  plVar11 = param_1 + 0x432;
  FUN_1006421a8(plVar11);
  param_1[0x432] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar12 = param_1 + 0x443;
  FUN_1006421a8();
  param_1[0x443] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar13 = param_1 + 0x454;
  thunk_FUN_100652c08();
  plVar14 = param_1 + 0x472;
  thunk_FUN_100652c08();
  plVar15 = param_1 + 0x490;
  thunk_FUN_100652c08(plVar15);
  param_1[0x4b3] = 0;
  param_1[0x4b2] = 0;
  param_1[0x4b1] = 0;
  param_1[0x4b0] = 0;
  param_1[0x4af] = 0;
  param_1[0x4ae] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar19 + 0x11,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x224,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x280,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2fa,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar10,1);
  lVar20 = 0x3d8;
  do {
    (**(code **)(*param_1 + 0x78))(param_1,(long)param_1 + lVar20,1);
    lVar20 = lVar20 + 0x130;
  } while (lVar20 != 0x9c8);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar11,1);
  FUN_100642bd8(plVar11,plVar12,1);
  FUN_100642bd8(plVar12,plVar13,1);
  FUN_100642bd8(plVar12,plVar14,1);
  FUN_100642bd8(plVar12,plVar15,1);
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar16 = *(uint *)((long)param_1 + 0xa4c);
  if ((uVar16 & 0x7f80) != 0x1300) {
    *(uint *)((long)param_1 + 0xa4c) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x1300;
    FUN_1000200a0(plVar3);
  }
  *(uint *)((long)param_1 + 0x1fc) = *(uint *)((long)param_1 + 0x1fc) | 0x10;
  FUN_100652cac(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  uVar16 = *(uint *)((long)param_1 + 0xc6c);
  if ((uVar16 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0xc6c) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0xc80;
    FUN_1000200a0(plVar5);
  }
  FUN_100652cac(puVar19 + 0x11,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_crown");
  *(uint *)((long)param_1 + 0x10c) = *(uint *)((long)param_1 + 0x10c) & 0xfffffffb;
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,&DAT_10115a168);
  uVar16 = *(uint *)((long)param_1 + 0x1fc);
  if ((uVar16 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x1fc) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x6c00;
    FUN_1000200a0(plVar1);
  }
  FUN_100651594(plVar2,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220,&DAT_10115a168);
  uVar16 = *(uint *)((long)param_1 + 0x32c);
  if ((uVar16 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x32c) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x3300;
    FUN_1000200a0(plVar2);
  }
  FUN_100652cac(plVar7,PTR_s_build___BoostBadges_tga_1018549b0,"boost_badge_guild_fame");
  FUN_10064e47c(0x43020000,0x43020000,plVar7);
  uVar16 = *(uint *)((long)param_1 + 0xe4c);
  if ((uVar16 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0xe4c) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x3300;
    FUN_1000200a0(plVar7);
  }
  FUN_100652e14(0x3e99999a,plVar7);
  FUN_100652cac(plVar6,PTR_s_build___BoostBadges_tga_1018549b0,"boost_badge_guild_fame");
  FUN_10064e47c(0x43020000,0x43020000,plVar6);
  uVar17 = DAT_101d91884;
  local_68 = DAT_101d91884;
  local_90 = thunk_FUN_1002327cc;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x1d8,&local_90);
  FUN_1001b495c(0x3f800000,plVar8);
  FUN_1001b4964(plVar8,1);
  plVar1 = param_1 + 0x40e;
  FUN_100652cdc(plVar1,"generic_invite_friend");
  uVar16 = *(uint *)((long)param_1 + 0x20f4);
  if ((uVar16 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x20f4) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x5900;
    FUN_1000200a0(plVar1);
  }
  fVar21 = (float)FUN_100652e60(plVar1);
  fVar21 = 56.0 / fVar21;
  if ((*(float *)(param_1 + 0x417) != fVar21) || (*(float *)((long)param_1 + 0x20bc) != fVar21)) {
    *(float *)(param_1 + 0x417) = fVar21;
    *(float *)((long)param_1 + 0x20bc) = fVar21;
    FUN_1000200a0(plVar1);
  }
  uVar16 = *(uint *)((long)param_1 + 0x1f14);
  if ((uVar16 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x1f14) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x1980;
    FUN_1000200a0(param_1 + 0x3d2);
  }
  FUN_100183c68(0x3f19999a,plVar10,&DAT_10115a168);
  FUN_1001b495c(0,plVar10);
  FUN_100183c68(0x3f666666,plVar10,&DAT_10115a168);
  lVar20 = NEON_fmov(0xc1200000,4);
  param_1[0x37f] = lVar20;
  FUN_100183c78(0x3f59999a,0x3fa00000,plVar10);
  local_68 = uVar17;
  local_90 = thunk_FUN_100232720;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x375,&local_90);
  *(uint *)((long)param_1 + 0x1c24) = *(uint *)((long)param_1 + 0x1c24) & 0xfffffffb;
  FUN_1001b4964(plVar10,1);
  lVar20 = 0;
  do {
    lVar9 = (long)param_1 + lVar20 + 0x3d8;
    FUN_100651594(lVar9,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
    uVar16 = *(uint *)((long)param_1 + lVar20 + 0x45c);
    if ((uVar16 & 0x7f80) != 0x4c80) {
      *(uint *)((long)param_1 + lVar20 + 0x45c) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x4c80;
      FUN_1000200a0(lVar9);
    }
    lVar20 = lVar20 + 0x130;
  } while (lVar20 != 0x5f0);
  FUN_100651594(plVar4,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220,&DAT_10115a168);
  uVar16 = *(uint *)((long)param_1 + 0xb3c);
  if ((uVar16 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0xb3c) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x2600;
    FUN_1000200a0(plVar4);
  }
  bVar18 = false;
  if ((*(float *)(param_1 + 0x44d) == 0.5) &&
     (bVar18 = false, !NAN(*(float *)((long)param_1 + 0x226c)))) {
    bVar18 = *(float *)((long)param_1 + 0x226c) == 0.5;
  }
  if (!bVar18) {
    param_1[0x44d] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar12);
  }
  FUN_100652cac(plVar13,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_large_circle");
  FUN_100652dd4(plVar13,&DAT_10115a168,2);
  uVar16 = *(uint *)((long)param_1 + 0x2324);
  if ((uVar16 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x2324) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar13);
  }
  fVar21 = *(float *)(param_1 + 0x1c2);
  if ((*(float *)(param_1 + 0x45d) != fVar21) || (*(float *)((long)param_1 + 0x22ec) != fVar21)) {
    *(float *)(param_1 + 0x45d) = fVar21;
    *(float *)((long)param_1 + 0x22ec) = fVar21;
    FUN_1000200a0(plVar13);
  }
  if ((*(float *)(param_1 + 0x45e) != 0.5) || (*(float *)((long)param_1 + 0x22f4) != 0.5)) {
    param_1[0x45e] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar13);
  }
  *(uint *)((long)param_1 + 0x2324) = *(uint *)((long)param_1 + 0x2324) & 0xfffffffb;
  FUN_100652cac(plVar14,PTR_s_build___MenuPartsCommon_tga_101854970,"focus_indicator_ring");
  if ((*(float *)(param_1 + 0x47c) != 0.5) || (*(float *)((long)param_1 + 0x23e4) != 0.5)) {
    param_1[0x47c] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar14);
  }
  *(uint *)((long)param_1 + 0x2414) = *(uint *)((long)param_1 + 0x2414) & 0xfffffffb;
  FUN_100652cac(plVar15,PTR_s_build___MenuPartsCommon_tga_101854970,"focus_indicator_ring");
  if ((*(float *)(param_1 + 0x49a) != 0.5) || (*(float *)((long)param_1 + 0x24d4) != 0.5)) {
    param_1[0x49a] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar15);
  }
  *(uint *)((long)param_1 + 0x2504) = *(uint *)((long)param_1 + 0x2504) & 0xfffffffb;
  return param_1;
}



/*
 * FUN_100234ccc
 * VA: 0x100234ccc | Source: functions/10023.c:3464
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 4, Vis masks: 1
 * Callees: FUN_10001549c, FUN_1000165f0, FUN_1000200a0, FUN_10002f320, FUN_100143c4c, FUN_1001aeb7c, FUN_1001aed88, FUN_1001af9fc (+10 more)
 * Callers: FUN_1002349e4, FUN_100236fc8, FUN_100237f94, FUN_10023dc40
 */
undefined8 FUN_100234ccc(long param_1,long param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  size_t sVar3;
  size_t sVar4;
  undefined8 *puVar5;
  char *pcVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  void *local_78;
  void *local_70;
  char local_61;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  
  lVar10 = FUN_10002f320();
  uVar12 = *(ulong *)(lVar10 + 0xe1a0);
  if (-1 < (char)*(byte *)(lVar10 + 0xe1af)) {
    uVar12 = (ulong)*(byte *)(lVar10 + 0xe1af);
  }
  if ((uVar12 == 10) &&
     (uVar11 = std::string::compare(lVar10 + 0xe198,0,(char *)0xffffffffffffffff,0x1013e7341),
     (int)uVar11 == 0)) {
    return uVar11;
  }
  puVar2 = (uint *)(param_1 + 0x5b74);
  if (*(char *)(param_1 + 0x3533a) == '\0') {
    uVar11 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_MEMBERS_ONLY",0);
    FUN_1006513c0(param_1 + 0x7f50,uVar11);
    *(uint *)(param_1 + 0x7fd4) = *(uint *)(param_1 + 0x7fd4) | 4;
  }
  else {
    if ((*(int *)(param_2 + 8) == 0) || (*(uint *)(param_2 + 0x10) <= *(uint *)(param_2 + 0xc))) {
      if (*(uint *)(param_2 + 0xc) < *(uint *)(param_2 + 0x10)) {
        uVar11 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_NEXT_LEVEL_CHEST",0);
        thunk_FUN_1004e439c(&local_78,uVar11);
        FUN_1004e313c(auStack_50);
        FUN_1004e38ac(auStack_50,"%d");
        FUN_1004e3120(auStack_60,"[LEVEL]");
        FUN_1004e3bc4(&local_78,0,auStack_60,auStack_50);
        if (local_58 != (void *)0x0) {
          operator_delete__(local_58);
        }
        FUN_1006513c0(param_1 + 0x7f50,&local_78);
        *(uint *)(param_1 + 0x7fd4) =
             *(uint *)(param_1 + 0x7fd4) & 0xfffffff8 |
             *(uint *)(param_1 + 0x7fd4) & 3 | (uint)(*(int *)(param_2 + 0x14) != 0) << 2;
        puVar1 = (undefined8 *)(param_2 + 0x38);
        bVar7 = *(byte *)(param_2 + 0x4f);
        uVar12 = (ulong)bVar7;
        sVar3 = *(size_t *)(param_2 + 0x40);
        if (-1 < (char)bVar7) {
          sVar3 = uVar12;
        }
        sVar4 = DAT_101d911a0;
        if (-1 < (char)DAT_101d911a8._7_1_) {
          sVar4 = (ulong)DAT_101d911a8._7_1_;
        }
        if (sVar3 == sVar4) {
          puVar5 = (void *)*puVar1;
          if (-1 < (char)bVar7) {
            puVar5 = puVar1;
          }
          pbVar15 = DAT_101d91198;
          if (-1 < (char)DAT_101d911a8._7_1_) {
            pbVar15 = (byte *)&DAT_101d91198;
          }
          if ((char)bVar7 < '\0') {
            if ((sVar3 != 0) && (iVar9 = _memcmp(puVar5,pbVar15,sVar3), iVar9 != 0))
            goto LAB_100235080;
          }
          else if (sVar3 != 0) {
            if ((uint)*pbVar15 == ((uint)(void *)*puVar1 & 0xff)) {
              pbVar14 = (byte *)(param_2 + 0x39);
              do {
                uVar12 = uVar12 - 1;
                pbVar15 = pbVar15 + 1;
                if (uVar12 == 0) goto LAB_10023509c;
                bVar7 = *pbVar14;
                pbVar14 = pbVar14 + 1;
              } while (bVar7 == *pbVar15);
            }
            goto LAB_100235080;
          }
        }
        else {
LAB_100235080:
          lVar10 = FUN_100331578();
          if (*(char *)(lVar10 + 0x20) != '\0') {
            FUN_1001aed88(param_1 + 0x4b08,puVar1);
          }
        }
LAB_10023509c:
        FUN_1000165f0(param_1 + 0x35310,0);
        goto LAB_1002350b0;
      }
      uVar11 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_OPENED_MAX_CHESTS",0);
      thunk_FUN_1004e439c(&local_78,uVar11);
      FUN_1006513c0(param_1 + 0x7f50,&local_78);
      FUN_1000165f0(param_1 + 0x35310,0);
    }
    else {
      FUN_1000165f0(param_1 + 0x35310);
      uVar11 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_NUM_CHESTS_AVAILABLE",0);
      thunk_FUN_1004e439c(&local_78,uVar11);
      FUN_1004e313c(auStack_50);
      FUN_1004e38ac(auStack_50,"%d");
      FUN_1004e3120(auStack_60,"[NUM_CHESTS]");
      FUN_1004e3bc4(&local_78,0,auStack_60,auStack_50);
      if (local_58 != (void *)0x0) {
        operator_delete__(local_58);
      }
      FUN_1006513c0(param_1 + 0x7f50,&local_78);
      *(uint *)(param_1 + 0x7fd4) =
           *(uint *)(param_1 + 0x7fd4) & 0xfffffff8 |
           *(uint *)(param_1 + 0x7fd4) & 3 | (uint)(1 < *(uint *)(param_2 + 8)) << 2;
      puVar1 = (undefined8 *)(param_2 + 0x20);
      bVar7 = *(byte *)(param_2 + 0x37);
      uVar12 = (ulong)bVar7;
      sVar3 = *(size_t *)(param_2 + 0x28);
      if (-1 < (char)bVar7) {
        sVar3 = uVar12;
      }
      sVar4 = DAT_101d911a0;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        sVar4 = (ulong)DAT_101d911a8._7_1_;
      }
      if (sVar3 == sVar4) {
        puVar5 = (void *)*puVar1;
        if (-1 < (char)bVar7) {
          puVar5 = puVar1;
        }
        pbVar15 = DAT_101d91198;
        if (-1 < (char)DAT_101d911a8._7_1_) {
          pbVar15 = (byte *)&DAT_101d91198;
        }
        if ((char)bVar7 < '\0') {
          if ((sVar3 != 0) && (iVar9 = _memcmp(puVar5,pbVar15,sVar3), iVar9 != 0))
          goto LAB_100235054;
        }
        else if (sVar3 != 0) {
          if ((uint)*pbVar15 == ((uint)(void *)*puVar1 & 0xff)) {
            pbVar14 = (byte *)(param_2 + 0x21);
            do {
              uVar12 = uVar12 - 1;
              pbVar15 = pbVar15 + 1;
              if (uVar12 == 0) goto LAB_1002350b0;
              bVar7 = *pbVar14;
              pbVar14 = pbVar14 + 1;
            } while (bVar7 == *pbVar15);
          }
          goto LAB_100235054;
        }
      }
      else {
LAB_100235054:
        lVar10 = FUN_100331578();
        if (*(char *)(lVar10 + 0x20) != '\0') {
          FUN_1001aed88(param_1 + 0x4b08,puVar1);
        }
      }
LAB_1002350b0:
      if (local_48 != (void *)0x0) {
        operator_delete__(local_48);
      }
    }
    if (local_70 != (void *)0x0) {
      operator_delete__(local_70);
    }
  }
  uVar8 = FUN_100143c4c();
  iVar9 = FUN_100237f5c();
  lVar10 = param_1 + 0x4b08;
  if (iVar9 == 0) {
    FUN_10001549c(&local_78,"IDLE_CLOSED");
    FUN_1001aeb7c(0x3f333333,lVar10,&local_78);
    if (local_61 < '\0') {
      operator_delete(local_78);
    }
    FUN_1001af9fc(lVar10,0);
    uVar8 = 0;
    *puVar2 = *puVar2 & 0xffffffef;
  }
  else {
    pcVar6 = "IDLE_CLOSED";
    if (uVar8 == 0) {
      pcVar6 = "IDLE_READY";
    }
    FUN_10001549c(&local_78,pcVar6);
    FUN_1001aeb7c(0xbf800000,lVar10,&local_78);
    if (local_61 < '\0') {
      operator_delete(local_78);
    }
    uVar8 = uVar8 ^ 1;
    FUN_1001af9fc(lVar10,uVar8);
  }
  FUN_1001b4c0c(param_1 + 0x5af0,uVar8);
  uVar8 = 0xf2;
  if (((*(byte *)(param_1 + 0x5d54) >> 4 & 1) == 0) &&
     (uVar8 = 0xf2, *(char *)(param_1 + 0x3533a) != '\0')) {
    uVar8 = 0x7f;
  }
  uVar13 = *(uint *)(param_1 + 0x7fd4);
  if (uVar8 != (uVar13 >> 7 & 0xff)) {
    *(uint *)(param_1 + 0x7fd4) = uVar13 & 0xffff8000 | uVar13 & 0x7f | uVar8 << 7;
    FUN_1000200a0(param_1 + 0x7f50);
  }
  if (*(char *)(param_1 + 0x3533a) == '\0') {
    uVar13 = 0;
    uVar8 = *puVar2;
  }
  else {
    if (*(int *)(param_2 + 0x14) == 0) {
      uVar8 = *puVar2;
      if (*(int *)(param_1 + 0x35328) < 1) {
        uVar13 = 0;
        goto LAB_10023520c;
      }
    }
    else {
      uVar8 = *puVar2;
    }
    uVar13 = 4;
  }
LAB_10023520c:
  *puVar2 = uVar13 | uVar8 & 0xfffffffb;
  return 1;
}



/*
 * FUN_100236874
 * VA: 0x100236874 | Source: functions/10023.c:4518
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 4
 * Callees: FUN_10001549c, FUN_10002f320, FUN_100030e74, FUN_10003330c, FUN_10003c048, FUN_10003c1ec, FUN_1004e0150, FUN_1004e3120 (+7 more)
 * Callers: FUN_1002340f0
 */
void FUN_100236874(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_1b8 [8];
  void *local_1b0;
  undefined1 auStack_1a8 [8];
  void *local_1a0;
  undefined1 auStack_198 [8];
  void *local_190;
  undefined1 auStack_188 [8];
  void *local_180;
  undefined1 auStack_178 [8];
  void *local_170;
  undefined1 auStack_168 [8];
  void *local_160;
  undefined1 auStack_158 [8];
  void *local_150;
  undefined1 auStack_148 [8];
  void *local_140;
  void *local_138;
  void *local_130;
  undefined7 local_128;
  char cStack_121;
  char local_111;
  undefined4 local_110;
  undefined8 local_10c;
  undefined **local_100;
  undefined1 auStack_f8 [40];
  long local_d0;
  undefined8 local_b0;
  void *local_a8;
  void *local_a0;
  char local_89;
  undefined4 local_70;
  undefined4 local_58;
  
  thunk_FUN_1001cd434(&local_100);
  uVar1 = FUN_1004e0150("MENU_PROFILE_GUILD_ACTIVITYBUFF_TITLE",0);
  thunk_FUN_1004e439c(&local_138,uVar1);
  FUN_10003330c(&local_128,&DAT_101d91198);
  local_110 = 0;
  local_10c = 0x41a00000;
  FUN_10003c048(auStack_f8,&local_138);
  if (local_111 < '\0') {
    operator_delete((void *)CONCAT17(cStack_121,local_128));
  }
  if (local_130 != (void *)0x0) {
    operator_delete__(local_130);
  }
  uVar1 = FUN_1004e0150("MENU_PROFILE_GUILD_ACTIVITYBUFF_HEAT_DETAILS",0);
  thunk_FUN_1004e439c(auStack_148,uVar1);
  FUN_1004e313c(auStack_158);
  FUN_1004e38ac(auStack_158,"%d");
  FUN_1004e3120(&local_138,"[HEAT_ACTIVATE_PERCENT]");
  FUN_1004e3bc4(auStack_148,0,&local_138,auStack_158);
  if (local_130 != (void *)0x0) {
    operator_delete__(local_130);
  }
  FUN_1004e313c(auStack_168);
  FUN_1004e38ac(auStack_168,"%d");
  FUN_1004e3120(&local_138,"[HEAT_BONUS_PERCENT]");
  FUN_1004e3bc4(auStack_148,0,&local_138,auStack_168);
  if (local_130 != (void *)0x0) {
    operator_delete__(local_130);
  }
  thunk_FUN_1004e439c(&local_138,auStack_148);
  FUN_10003330c(&local_128,&DAT_101d91198);
  local_110 = 1;
  local_10c = 0x41a00000;
  FUN_10003c048(auStack_f8,&local_138);
  if (local_111 < '\0') {
    operator_delete((void *)CONCAT17(cStack_121,local_128));
  }
  if (local_130 != (void *)0x0) {
    operator_delete__(local_130);
  }
  uVar1 = FUN_1004e0150("MENU_PROFILE_GUILD_ACTIVITYBUFF_FIRE_DETAILS",0);
  thunk_FUN_1004e439c(auStack_178,uVar1);
  FUN_1004e313c(auStack_188);
  FUN_1004e38ac(auStack_188,"%d");
  FUN_1004e3120(&local_138,"[FIRE_ACTIVATE_PERCENT]");
  FUN_1004e3bc4(auStack_178,0,&local_138,auStack_188);
  if (local_130 != (void *)0x0) {
    operator_delete__(local_130);
  }
  FUN_1004e313c(auStack_198);
  FUN_1004e38ac(auStack_198,"%d");
  FUN_1004e3120(&local_138,"[FIRE_BONUS_PERCENT]");
  FUN_1004e3bc4(auStack_178,0,&local_138,auStack_198);
  if (local_130 != (void *)0x0) {
    operator_delete__(local_130);
  }
  thunk_FUN_1004e439c(&local_138,auStack_178);
  FUN_10003330c(&local_128,&DAT_101d91198);
  local_110 = 1;
  local_10c = 0x41a00000;
  FUN_10003c048(auStack_f8,&local_138);
  if (local_111 < '\0') {
    operator_delete((void *)CONCAT17(cStack_121,local_128));
  }
  if (local_130 != (void *)0x0) {
    operator_delete__(local_130);
  }
  uVar1 = FUN_1004e0150("MENU_PROFILE_GUILD_ACTIVITYBUFF_PREREQ_INFO",0);
  thunk_FUN_1004e439c(auStack_1a8,uVar1);
  FUN_1004e313c(auStack_1b8);
  FUN_1004e38ac(auStack_1b8,"%d");
  FUN_1004e3120(&local_138,"[NUM_MEMBERS]");
  FUN_1004e3bc4(auStack_1a8,0,&local_138,auStack_1b8);
  if (local_130 != (void *)0x0) {
    operator_delete__(local_130);
  }
  thunk_FUN_1004e439c(&local_138,auStack_1a8);
  FUN_10003330c(&local_128,&DAT_101d91198);
  local_110 = 1;
  local_10c = 0x41a00000;
  FUN_10003c048(auStack_f8,&local_138);
  if (local_111 < '\0') {
    operator_delete((void *)CONCAT17(cStack_121,local_128));
  }
  if (local_130 != (void *)0x0) {
    operator_delete__(local_130);
  }
  local_d0 = param_1 + 0x2770;
  local_58 = 2;
  local_70 = 0x3e99999a;
  uVar1 = FUN_10002f320();
  FUN_10001549c(&local_138,"guildActivityBuff");
  FUN_100030e74(uVar1,&local_138,&local_100);
  if (cStack_121 < '\0') {
    operator_delete(local_138);
  }
  FUN_100644b14(param_2);
  if (local_1b0 != (void *)0x0) {
    operator_delete__(local_1b0);
  }
  if (local_1a0 != (void *)0x0) {
    operator_delete__(local_1a0);
  }
  if (local_190 != (void *)0x0) {
    operator_delete__(local_190);
  }
  if (local_180 != (void *)0x0) {
    operator_delete__(local_180);
  }
  if (local_170 != (void *)0x0) {
    operator_delete__(local_170);
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
  local_100 = &PTR_FUN_1014666e0;
  if (local_89 < '\0') {
    operator_delete(local_a0);
  }
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  FUN_10003c1ec(auStack_f8,1);
  return;
}



/*
 * FUN_10023cf74
 * VA: 0x10023cf74 | Source: functions/10023.c:9698
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 11
 * Callees: FUN_100143bec, FUN_1001e3090, FUN_100237008, FUN_10023c464, FUN_10023d1ec, FUN_1004e0150, FUN_1004f1680, thunk_FUN_10023c050
 * Callers: FUN_100267ac8, FUN_100267ba4, FUN_100283024, thunk_FUN_100267ac8, thunk_FUN_100267ba4
 */
void FUN_10023cf74(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  
  FUN_100237008(param_1 + 0x3e98);
  iVar3 = FUN_1004f1680(param_2);
  if (iVar3 == 0) goto LAB_10023d1d4;
  if (*(char *)(param_2 + 0x44) != '\0') {
    FUN_100143bec(thunk_FUN_10023c050,FUN_10023d1ec);
    goto LAB_10023d1d4;
  }
  uVar1 = param_2 + 0x48;
  bVar10 = *(byte *)(param_2 + 0x5f);
  uVar8 = (ulong)bVar10;
  uVar9 = *(ulong *)(param_2 + 0x50);
  uVar2 = uVar9;
  if (-1 < (char)bVar10) {
    uVar2 = uVar8;
  }
  if (uVar2 == 0x11) {
    iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e76d5);
    if (iVar3 != 0) {
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
      goto LAB_10023d010;
    }
    uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_JOIN_TITLE",0);
    pcVar5 = "MENU_PROFILE_GUILD_CANT_JOIN_REASON_NONEXISTANT_GUILD";
  }
  else {
LAB_10023d010:
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0x10) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3bc2);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_JOIN_TITLE",0);
        pcVar5 = "MENU_PROFILE_GUILD_CANT_JOIN_REASON_ALREADY_IN_GUILD";
        goto LAB_10023d1a0;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0xe) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e7775);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_JOIN_TITLE",0);
        pcVar5 = "MENU_PROFILE_GUILD_CANT_JOIN_REASON_NOT_OPEN";
        goto LAB_10023d1a0;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 10) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e77b1);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_JOIN_TITLE",0);
        pcVar5 = "MENU_PROFILE_GUILD_CANT_JOIN_REASON_FULL";
        goto LAB_10023d1a0;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    if (-1 < (char)bVar10) {
      uVar9 = uVar8;
    }
    if ((uVar9 != 0xe) ||
       (iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e77e5), iVar3 != 0))
    goto LAB_10023d1d4;
    uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_JOIN_TITLE",0);
    pcVar5 = "MENU_PROFILE_GUILD_CANT_JOIN_REASON_MIN_SKILL_TIER";
  }
LAB_10023d1a0:
  uVar6 = FUN_1004e0150(pcVar5,0);
  uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar4,uVar6,uVar7,0,0);
LAB_10023d1d4:
  FUN_10023c464(param_1);
  return;
}



/*
 * FUN_10023d348
 * VA: 0x10023d348 | Source: functions/10023.c:9939
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 3
 * Callees: FUN_10015d3ec, FUN_1001634c4, FUN_1001e3090, FUN_1004e0150, FUN_1004f1680
 * Callers: thunk_FUN_10023d348
 */
void FUN_10023d348(undefined8 param_1,long param_2)

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
  if (iVar5 != 0) {
    if (*(char *)(param_2 + 0x44) == '\0') {
      uVar10 = *(ulong *)(param_2 + 0x50);
      if (-1 < (char)*(byte *)(param_2 + 0x5f)) {
        uVar10 = (ulong)*(byte *)(param_2 + 0x5f);
      }
      if ((uVar10 == 0x11) &&
         (iVar5 = std::string::compare(param_2 + 0x48,0,(char *)0xffffffffffffffff,0x1013e7827),
         iVar5 == 0)) {
        uVar9 = FUN_1004e0150("MENU_PROFILE_GUILD_TEAM_MEMBERSHIP_LOCKED_TITLE",0);
        uVar7 = FUN_1004e0150("MENU_PROFILE_GUILD_TEAM_MEMBERSHIP_LOCKED_MESSAGE",0);
        uVar8 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        FUN_1001e3090(uVar9,uVar7,uVar8,0,0);
        return;
      }
    }
    else {
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
      if (sVar1 != sVar2) {
LAB_10023d4b4:
        uVar9 = FUN_10015d3ec();
        lVar6 = FUN_10015d3ec();
        FUN_1001634c4(uVar9,lVar6 + 0x5478,1);
        return;
      }
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
        if ((sVar1 != 0) && (iVar5 = _memcmp(puVar3,pbVar12,sVar1), iVar5 != 0)) goto LAB_10023d4b4;
      }
      else if (sVar1 != 0) {
        if ((uint)*pbVar12 == ((uint)pvVar13 & 0xff)) {
          pbVar11 = (byte *)(lVar6 + 0x5479);
          do {
            uVar10 = uVar10 - 1;
            pbVar12 = pbVar12 + 1;
            if (uVar10 == 0) {
              return;
            }
            bVar4 = *pbVar11;
            pbVar11 = pbVar11 + 1;
          } while (bVar4 == *pbVar12);
        }
        goto LAB_10023d4b4;
      }
    }
  }
  return;
}



/*
 * FUN_100256bac
 * VA: 0x100256bac | Source: functions/10025.c:4899
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 2, Vis masks: 1
 * Callees: FUN_1000200a0, FUN_1000f0994, FUN_100126cb8, FUN_10015d3ec, FUN_10015d3f8, FUN_1001b5e00, FUN_1001c4394, FUN_1001cd374 (+9 more)
 * Callers: FUN_100255b9c, FUN_10025d954, thunk_FUN_100255b9c
 */
void FUN_100256bac(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  char *pcVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  void *local_88 [2];
  char local_71;
  undefined8 local_70;
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  
  fVar10 = (float)(**(code **)(*param_1 + 0x48))();
  iVar5 = FUN_100126cb8();
  fVar11 = 4.0;
  if (iVar5 == 0) {
    fVar11 = 3.0;
  }
  fVar10 = fVar10 / fVar11;
  lVar7 = FUN_10015d3ec();
  uVar2 = *(uint *)(lVar7 + 0x55d0);
  lVar7 = FUN_10015d3ec();
  iVar5 = *(int *)(lVar7 + 0x55d4);
  lVar7 = FUN_10015d3ec();
  iVar3 = *(int *)(lVar7 + 0x55d8);
  lVar7 = FUN_10015d3ec();
  iVar4 = *(int *)(lVar7 + 0x55dc);
  if (uVar2 != *(uint *)(param_1 + 0x1cb8)) {
    *(uint *)(param_1 + 0x1cb8) = uVar2;
    iVar6 = FUN_10015d3f8();
    if (iVar6 != 0) {
      FUN_100326da8();
    }
  }
  FUN_1001b5e00(fVar10 * (float)uVar2,0x41f80000,param_1 + 0x6d4,0,(int)(fVar10 * (float)uVar2),
                (int)((fVar10 * (float)(uint)(iVar5 - iVar3)) / (float)(uint)(iVar4 - iVar3) +
                     (float)(uVar2 - 1) * fVar10),0);
  FUN_1004e0150("MENU_LEVEL_UP_REWARD_GAME_MODE_UNLOCKED_BOTS",0);
  FUN_1004e0150("MENU_LEVEL_UP_REWARD_GAME_MODE_UNLOCKED_CASUAL",0);
  FUN_1004e313c(auStack_60);
  FUN_1004e38ac(auStack_60,"%d");
  FUN_1006513c0(param_1 + 0x9a,auStack_60);
  FUN_1000f0994(local_88,*(undefined4 *)(param_2 + 0x6c));
  FUN_1004e3170(&local_70,local_88);
  FUN_1006513c0(param_1 + 0x271,&local_70);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_70 = 0;
    local_68 = (void *)0x0;
  }
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  plVar1 = param_1 + 0x242;
  fVar10 = *(float *)(param_1 + 0x189);
  fVar11 = (float)FUN_1006425d0(plVar1,0,0,1,1);
  fVar10 = fVar10 + fVar11 * -0.5;
  if (*(float *)(param_1 + 0x24a) != fVar10) {
    *(float *)(param_1 + 0x24a) = fVar10;
    FUN_1000200a0(plVar1);
  }
  FUN_1001c4394(param_1 + 0xe6,*(undefined4 *)(param_2 + 0x68));
  FUN_1001c4394(param_1 + 0x1a7,*(undefined4 *)(param_2 + 0x6c));
  FUN_1001c4394(param_1 + 0x2bd,*(undefined4 *)(param_2 + 0x74));
  fVar10 = *(float *)(param_1 + 0x189);
  fVar11 = (float)FUN_1006425d0(plVar1,0,0,1,1);
  fVar11 = fVar10 + fVar11 * -0.5 + -10.0;
  if (*(float *)(param_1 + 0x24a) != fVar11) {
    *(float *)(param_1 + 0x24a) = fVar11;
    FUN_1000200a0(plVar1);
  }
  plVar1 = param_1 + 899;
  if ((~*(uint *)((long)param_1 + 0x1c9c) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x1c9c) = *(uint *)((long)param_1 + 0x1c9c) | 0x7f80;
    FUN_1000200a0(plVar1);
  }
  lVar7 = FUN_10015d3ec();
  iVar5 = *(int *)(lVar7 + 0x5608);
  *(int *)(param_1 + 0x1cb7) = iVar5;
  *(uint *)((long)param_1 + 0x21f4) = *(uint *)((long)param_1 + 0x21f4) & 0xfffffffb;
  if (iVar5 == 2) {
    FUN_100652cdc(plVar1,"icon_karma_L2");
    uVar9 = FUN_1004e0150("MAIN_PROFILE_KARMA_GREAT",0);
    FUN_1006513c0(param_1 + 0x3bf,uVar9);
    *(uint *)((long)param_1 + 0x21f4) = *(uint *)((long)param_1 + 0x21f4) | 4;
  }
  else {
    if (iVar5 == 1) {
      FUN_100652cdc(plVar1,"icon_karma_L1");
      pcVar8 = "MAIN_PROFILE_KARMA_GOOD";
    }
    else {
      if (iVar5 != 0) {
        FUN_100652cdc(plVar1,"icon_karma_L1");
        FUN_1006513c0(param_1 + 0x3bf,&DAT_101d91650);
        uVar2 = *(uint *)((long)param_1 + 0x1c9c);
        if ((uVar2 & 0x7f80) != 0x2600) {
          *(uint *)((long)param_1 + 0x1c9c) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x2600;
          FUN_1000200a0(plVar1);
        }
        goto LAB_100256f28;
      }
      FUN_100652cdc(plVar1,"icon_karma_L0");
      pcVar8 = "MAIN_PROFILE_KARMA_BAD";
    }
    uVar9 = FUN_1004e0150(pcVar8,0);
    FUN_1006513c0(param_1 + 0x3bf,uVar9);
  }
LAB_100256f28:
  param_1[0x1cb6] = (long)*(double *)(param_2 + 0x110);
  FUN_1001cd374(param_1 + 0x403,param_1 + 0x1cb6);
  FUN_10025791c(param_1);
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  return;
}



/*
 * FUN_10025d3f0
 * profile data loader — called when opening profile
 * VA: 0x10025d3f0 | Source: functions/10025.c:10675
 * Fptr: __DATA+0x147af38
 * Dylib: Layer 8
 * Layout: +0x21a1c=create-account button visibility (conditional on FUN_100131228), +0x20b04=profile section visibility (cleared when offline)
 * Notes: Dylib hides create-account button, ensures profile sections stay visible.
 * CE-gate: NO | Guest-gate: NO
 * Indicators: Vis masks: 2
 * Callees: FUN_100131228, FUN_10015d3ec, FUN_100169cec, FUN_1001e79b8, FUN_1002575b0, FUN_10025b440, FUN_10025d244, FUN_10025d500 (+2 more)
 * Callers: FUN_100222868
 */
void FUN_10025d3f0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  
  if ((int)param_2 != 0) {
    FUN_10025d244(param_1);
    FUN_10025d500(param_1);
    FUN_1001e79b8(0x3f800000,"build://Sounds/UI.assetbundle/ui_menu_layer_slide.mp3",0,0);
    uVar3 = 0;
    if (*(int *)(param_1 + 0x25f54) == 0) {
      iVar1 = FUN_100131228();
      uVar3 = 4;
      if (iVar1 == 0) {
        uVar3 = 0;
      }
    }
    *(uint *)(param_1 + 0x21a1c) = *(uint *)(param_1 + 0x21a1c) & 0xfffffffb | uVar3;
    FUN_10025b440(param_1 + 0x17088,0);
    FUN_10025b440(param_1 + 0x1bcd8,1);
  }
  FUN_1002575b0(param_1 + 0x8ac0,param_2);
  iVar1 = FUN_1004eef10();
  if ((iVar1 == 0) || (iVar1 = FUN_10052b78c(), iVar1 != 0)) {
    *(uint *)(param_1 + 0x20b04) = *(uint *)(param_1 + 0x20b04) & 0xfffffffb;
  }
  iVar1 = FUN_1004eef10();
  if ((iVar1 != 0) && ((int)param_2 != 0)) {
    lVar2 = FUN_10015d3ec();
    FUN_100169cec(lVar2 + 0x18);
    return;
  }
  return;
}



/*
 * FUN_10025d954
 * profile body display — gates visibility of profile body elements
 * VA: 0x10025d954 | Source: functions/10025.c:10827
 * Fptr: __DATA+0x147af60
 * Dylib: Layer 8
 * Layout: +0x20b04=season/trophy element visibility, +0x216d4=another profile element visibility, +0x1d0=profile body setup offset (passed to FUN_100227fb8), +0x25f50=guest flag that blocks setup
 * Notes: Checks FUN_10014e20c (guest) and FUN_10052b840 (online status).
 * CE-gate: YES (3x) | Guest-gate: YES (1x)
 * Indicators: Vis masks: 3
 * Callees: FUN_100131560, FUN_10014e20c, FUN_100227fb8, FUN_100256bac, FUN_10052b840, FUN_100530068
 * Callers: FUN_10025da5c
 */
void FUN_10025d954(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  *(uint *)(param_1 + 0x8074) = *(uint *)(param_1 + 0x8074) & 0xfffffffb;
  FUN_100256bac(param_1 + 0x8ac0,param_2,1);
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 4;
  uVar1 = FUN_10014e20c();
  *(char *)(param_1 + 0x25f50) = (char)uVar1;
  uVar2 = FUN_10052b840();
  uVar2 = uVar2 | uVar1;
  iVar3 = FUN_100131560();
  uVar1 = 0;
  if (iVar3 == 0 && uVar2 == 0) {
    uVar1 = 4;
  }
  *(uint *)(param_1 + 0x20b04) = *(uint *)(param_1 + 0x20b04) & 0xfffffffb | uVar1;
  uVar1 = FUN_100131560();
  FUN_100530068(param_1 + 0x20a80,(uVar1 | uVar2) ^ 1);
  iVar3 = FUN_100131560();
  uVar1 = 0;
  if (iVar3 == 0 && uVar2 == 0) {
    uVar1 = 4;
  }
  *(uint *)(param_1 + 0x216d4) = *(uint *)(param_1 + 0x216d4) & 0xfffffffb | uVar1;
  if (*(char *)(param_1 + 0x25f50) != '\0') {
    return;
  }
  FUN_100227fb8(param_1 + 0x1d0,1);
  return;
}



/*
 * FUN_10025e0c4
 * VA: 0x10025e0c4 | Source: functions/10025.c:11180
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 3
 * Callees: FUN_100102abc, FUN_10015d3ec, FUN_1001633f4, FUN_1001e3090, FUN_100220d08, FUN_1004e0150, FUN_100530068
 */
void FUN_10025e0c4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_10015d3ec();
  if (*(int *)(lVar1 + 0x55c8) != 0) {
    uVar2 = FUN_1004e0150("MENU_LPQ_NOTIFICATION_TITLE",0);
    uVar3 = FUN_1004e0150("MENU_ACCOUNT_CANNOT_LOGOUT_LPQ",0);
    uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    FUN_1001e3090(uVar2,uVar3,uVar4,0,0);
    return;
  }
  FUN_100530068(param_1 + 0x20a80,0);
  FUN_100102abc(0);
  FUN_10015d3ec();
  FUN_1001633f4();
  FUN_100220d08();
  return;
}



/*
 * thunk_FUN_10025e0c4
 * VA: 0xthunk_10025e0c4 | Source: functions/10025.c:9897
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 3
 * Callees: FUN_100102abc, FUN_10015d3ec, FUN_1001633f4, FUN_1001e3090, FUN_100220d08, FUN_1004e0150, FUN_100530068
 * Callers: FUN_100187d2c, FUN_10025c044, thunk_FUN_10025c044
 */
void thunk_FUN_10025e0c4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_10015d3ec();
  if (*(int *)(lVar1 + 0x55c8) != 0) {
    uVar2 = FUN_1004e0150("MENU_LPQ_NOTIFICATION_TITLE",0);
    uVar3 = FUN_1004e0150("MENU_ACCOUNT_CANNOT_LOGOUT_LPQ",0);
    uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    FUN_1001e3090(uVar2,uVar3,uVar4,0,0);
    return;
  }
  FUN_100530068(param_1 + 0x20a80,0);
  FUN_100102abc(0);
  FUN_10015d3ec();
  FUN_1001633f4();
  FUN_100220d08();
  return;
}



/*
 * FUN_100265ef0
 * VA: 0x100265ef0 | Source: functions/10026.c:4746
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 3
 * Callees: FUN_10015d3ec, FUN_1001635bc, FUN_1001e3090, FUN_1004e0150, FUN_1004f1680
 * Callers: thunk_FUN_100265ef0
 */
void FUN_100265ef0(undefined8 param_1,long param_2)

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
  if (iVar5 != 0) {
    if (*(char *)(param_2 + 0x44) == '\0') {
      uVar10 = *(ulong *)(param_2 + 0x50);
      if (-1 < (char)*(byte *)(param_2 + 0x5f)) {
        uVar10 = (ulong)*(byte *)(param_2 + 0x5f);
      }
      if ((uVar10 == 0x11) &&
         (iVar5 = std::string::compare(param_2 + 0x48,0,(char *)0xffffffffffffffff,0x1013e7827),
         iVar5 == 0)) {
        uVar9 = FUN_1004e0150("MENU_PROFILE_GUILD_TEAM_MEMBERSHIP_LOCKED_TITLE",0);
        uVar7 = FUN_1004e0150("MENU_PROFILE_GUILD_TEAM_MEMBERSHIP_LOCKED_MESSAGE",0);
        uVar8 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        FUN_1001e3090(uVar9,uVar7,uVar8,0,0);
        return;
      }
    }
    else {
      lVar6 = FUN_10015d3ec();
      bVar4 = *(byte *)(lVar6 + 0x54a7);
      uVar10 = (ulong)bVar4;
      sVar1 = *(size_t *)(lVar6 + 0x5498);
      if (-1 < (char)bVar4) {
        sVar1 = uVar10;
      }
      sVar2 = DAT_101d911a0;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        sVar2 = (ulong)DAT_101d911a8._7_1_;
      }
      if (sVar1 != sVar2) {
LAB_10026605c:
        uVar9 = FUN_10015d3ec();
        lVar6 = FUN_10015d3ec();
        FUN_1001635bc(uVar9,lVar6 + 0x5490,1);
        return;
      }
      pvVar13 = *(void **)(lVar6 + 0x5490);
      puVar3 = pvVar13;
      if (-1 < (char)bVar4) {
        puVar3 = (undefined8 *)(lVar6 + 0x5490);
      }
      pbVar12 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar12 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar4 < '\0') {
        if ((sVar1 != 0) && (iVar5 = _memcmp(puVar3,pbVar12,sVar1), iVar5 != 0)) goto LAB_10026605c;
      }
      else if (sVar1 != 0) {
        if ((uint)*pbVar12 == ((uint)pvVar13 & 0xff)) {
          pbVar11 = (byte *)(lVar6 + 0x5491);
          do {
            uVar10 = uVar10 - 1;
            pbVar12 = pbVar12 + 1;
            if (uVar10 == 0) {
              return;
            }
            bVar4 = *pbVar11;
            pbVar11 = pbVar11 + 1;
          } while (bVar4 == *pbVar12);
        }
        goto LAB_10026605c;
      }
    }
  }
  return;
}



/*
 * FUN_100282b84
 * VA: 0x100282b84 | Source: functions/10028.c:1813
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 14
 * Callees: FUN_100104af0, FUN_10015d3ec, FUN_100169cec, FUN_1001e3090, FUN_100282ee8, FUN_1004e0150, FUN_1004e313c, FUN_1004f1680
 * Callers: FUN_100283e68, thunk_FUN_100282b84
 */
void FUN_100282b84(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  undefined1 auStack_40 [8];
  void *local_38;
  
  iVar3 = FUN_1004f1680(param_2);
  if (iVar3 == 0) {
    return;
  }
  if (*(char *)(param_2 + 0x25) != '\0') {
    lVar4 = FUN_10015d3ec();
    FUN_100169cec(lVar4 + 0x18);
    FUN_100104af0();
    return;
  }
  uVar1 = param_2 + 0x30;
  bVar11 = *(byte *)(param_2 + 0x47);
  uVar9 = (ulong)bVar11;
  uVar10 = *(ulong *)(param_2 + 0x38);
  uVar2 = uVar10;
  if (-1 < (char)bVar11) {
    uVar2 = uVar9;
  }
  if (uVar2 == 0x10) {
    iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3bc2);
    if (iVar3 != 0) {
      bVar11 = *(byte *)(param_2 + 0x47);
      uVar9 = (ulong)bVar11;
      uVar10 = *(ulong *)(param_2 + 0x38);
      goto LAB_100282c20;
    }
    uVar5 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_CREATE_TITLE",0);
    pcVar8 = "MENU_PROFILE_GUILD_CANT_CREATE_REASON_ALREADY_IN";
  }
  else {
LAB_100282c20:
    uVar2 = uVar10;
    if (-1 < (char)bVar11) {
      uVar2 = uVar9;
    }
    if (uVar2 == 0xb) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3c29);
      if (iVar3 == 0) {
        uVar5 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_CREATE_TITLE",0);
        pcVar8 = "MENU_PROFILE_GUILD_CANT_CREATE_REASON_TAG_LENGTH";
        goto LAB_100282e98;
      }
      bVar11 = *(byte *)(param_2 + 0x47);
      uVar9 = (ulong)bVar11;
      uVar10 = *(ulong *)(param_2 + 0x38);
    }
    uVar2 = uVar10;
    if (-1 < (char)bVar11) {
      uVar2 = uVar9;
    }
    if (uVar2 == 10) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3c66);
      if (iVar3 != 0) {
        bVar11 = *(byte *)(param_2 + 0x47);
        uVar9 = (ulong)bVar11;
        uVar10 = *(ulong *)(param_2 + 0x38);
        goto LAB_100282ca0;
      }
LAB_100282dfc:
      uVar5 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_CREATE_TITLE",0);
      pcVar8 = "MENU_PROFILE_GUILD_CANT_CREATE_REASON_NAME_TAKEN";
    }
    else {
LAB_100282ca0:
      uVar2 = uVar10;
      if (-1 < (char)bVar11) {
        uVar2 = uVar9;
      }
      if (uVar2 == 0xd) {
        iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3c71);
        if (iVar3 == 0) goto LAB_100282dfc;
        bVar11 = *(byte *)(param_2 + 0x47);
        uVar9 = (ulong)bVar11;
        uVar10 = *(ulong *)(param_2 + 0x38);
      }
      uVar2 = uVar10;
      if (-1 < (char)bVar11) {
        uVar2 = uVar9;
      }
      if (uVar2 == 9) {
        iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3cb0);
        if (iVar3 != 0) {
          bVar11 = *(byte *)(param_2 + 0x47);
          uVar9 = (ulong)bVar11;
          uVar10 = *(ulong *)(param_2 + 0x38);
          goto LAB_100282d20;
        }
LAB_100282e5c:
        uVar5 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_CREATE_TITLE",0);
        pcVar8 = "MENU_PROFILE_GUILD_CANT_CREATE_REASON_TAG_TAKEN";
      }
      else {
LAB_100282d20:
        uVar2 = uVar10;
        if (-1 < (char)bVar11) {
          uVar2 = uVar9;
        }
        if (uVar2 == 0xc) {
          iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3cba);
          if (iVar3 == 0) goto LAB_100282e5c;
          bVar11 = *(byte *)(param_2 + 0x47);
          uVar9 = (ulong)bVar11;
          uVar10 = *(ulong *)(param_2 + 0x38);
        }
        if (-1 < (char)bVar11) {
          uVar10 = uVar9;
        }
        if ((uVar10 != 0x12) ||
           (iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3cf7), iVar3 != 0
           )) {
          FUN_1004e313c(auStack_40);
          uVar5 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_CREATE_ERROR_TITLE",0);
          uVar6 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_CREATE_ERROR",0);
          uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
          FUN_1001e3090(uVar5,uVar6,uVar7,0,0);
          if (local_38 != (void *)0x0) {
            operator_delete__(local_38);
          }
          goto LAB_100282ecc;
        }
        uVar5 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_CREATE_TITLE",0);
        pcVar8 = "MENU_GUILD_ERROR_PROFANITY";
      }
    }
  }
LAB_100282e98:
  uVar6 = FUN_1004e0150(pcVar8,0);
  uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar5,uVar6,uVar7,0,0);
LAB_100282ecc:
  FUN_100282ee8(param_1);
  return;
}



/*
 * FUN_100283144
 * VA: 0x100283144 | Source: functions/10028.c:2082
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 5
 * Callees: FUN_100159fc8, FUN_10015a14c, FUN_10015a304, FUN_10015d3ec, FUN_10015d3f8, FUN_100169cec, FUN_1001e3090, FUN_10028279c (+5 more)
 * Callers: FUN_100283e80, thunk_FUN_100283144
 */
void FUN_100283144(undefined8 param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  undefined **local_270 [5];
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1d8 [8];
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  iVar2 = FUN_1004f1680(param_2);
  if (iVar2 != 0) {
    if (*(char *)(param_2 + 0x44) != '\0') {
      iVar2 = FUN_10015d3f8();
      if (iVar2 != 0) {
        lVar3 = FUN_10015d3ec();
        FUN_100169cec(lVar3 + 0x18);
      }
      FUN_1004f1580(local_270);
      local_270[0] = &PTR_thunk_FUN_10015a304_10145bec0;
      uStack_1c8 = 0;
      local_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      local_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      local_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      local_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      local_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      local_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      local_110 = 0;
      local_100 = 0;
      uStack_240 = 0;
      local_248 = 0;
      uStack_230 = 0;
      local_238 = 0;
      uStack_220 = 0;
      local_228 = 0;
      uStack_210 = 0;
      local_218 = 0;
      uStack_200 = 0;
      local_208 = 0;
      uStack_1f0 = 0;
      local_1f8 = 0;
      FUN_10015a14c(auStack_1d8);
      FUN_100159fc8(&local_248);
      local_40 = 0;
      uStack_e8 = 0;
      local_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_48 = 0;
      local_50 = 0;
      uStack_c8 = 0;
      local_d0 = 0;
      uStack_90 = 0;
      local_98 = 0;
      uStack_80 = 0;
      uStack_88 = 0;
      uStack_70 = 0;
      local_78 = 0;
      uStack_60 = 0;
      uStack_68 = 0;
      FUN_1004f15d8(local_270);
      FUN_10028279c(param_1,local_270);
      FUN_10015a304(local_270);
      return;
    }
    bVar10 = *(byte *)(param_2 + 0x5f);
    uVar8 = (ulong)bVar10;
    uVar9 = *(ulong *)(param_2 + 0x50);
    uVar1 = uVar9;
    if (-1 < (char)bVar10) {
      uVar1 = uVar8;
    }
    if (uVar1 == 0x13) {
      iVar2 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013ea7ed);
      if (iVar2 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_LEAVE_TITLE",0);
        pcVar5 = "MENU_PROFILE_GUILD_CANT_LEAVE_REASON_NOT_IN";
        goto LAB_1002832fc;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    if (-1 < (char)bVar10) {
      uVar9 = uVar8;
    }
    if ((uVar9 == 0x11) &&
       (iVar2 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013e7827),
       iVar2 == 0)) {
      uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_TEAM_MEMBERSHIP_LOCKED_TITLE",0);
      pcVar5 = "MENU_PROFILE_GUILD_TEAM_MEMBERSHIP_LOCKED_MESSAGE";
LAB_1002832fc:
      uVar6 = FUN_1004e0150(pcVar5,0);
      uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1001e3090(uVar4,uVar6,uVar7,0,0);
      return;
    }
  }
  return;
}



/*
 * FUN_100283340
 * VA: 0x100283340 | Source: functions/10028.c:2266
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 9
 * Callees: FUN_1001e3090, FUN_100281074, FUN_1004e0150, FUN_1004f1680
 * Callers: FUN_100283e8c, thunk_FUN_100283340
 */
void FUN_100283340(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  
  iVar3 = FUN_1004f1680(param_2);
  if (iVar3 != 0) {
    if (*(char *)(param_2 + 0x44) != '\0') {
      FUN_100281074(param_1);
      return;
    }
    uVar1 = param_2 + 0x48;
    bVar10 = *(byte *)(param_2 + 0x5f);
    uVar8 = (ulong)bVar10;
    uVar9 = *(ulong *)(param_2 + 0x50);
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0x11) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e76d5);
      if (iVar3 == 0) {
        uVar5 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_CONFIRM_INVITE_TITLE",0);
        pcVar4 = "MENU_PROFILE_GUILD_CANT_CONFIRM_INVITE_REASON_NO_GUILD";
        goto LAB_100283500;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0x10) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3bc2);
      if (iVar3 == 0) {
        uVar5 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_CONFIRM_INVITE_TITLE",0);
        pcVar4 = "MENU_PROFILE_GUILD_CANT_CONFIRM_INVITE_ALREADY_IN_GUILD";
        goto LAB_100283500;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 7) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013ea8ed);
      if (iVar3 == 0) {
        uVar5 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_CONFIRM_INVITE_TITLE",0);
        pcVar4 = "MENU_PROFILE_GUILD_CANT_CONFIRM_INVITE_EXPIRED";
        goto LAB_100283500;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    if (-1 < (char)bVar10) {
      uVar9 = uVar8;
    }
    if ((uVar9 == 10) &&
       (iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e77b1), iVar3 == 0)) {
      uVar5 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_CONFIRM_INVITE_TITLE",0);
      pcVar4 = "MENU_PROFILE_GUILD_CANT_CONFIRM_INVITE_FULL";
LAB_100283500:
      uVar6 = FUN_1004e0150(pcVar4,0);
      uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1001e3090(uVar5,uVar6,uVar7,0,0);
      return;
    }
  }
  return;
}



/*
 * FUN_10028353c
 * VA: 0x10028353c | Source: functions/10028.c:2355
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 5
 * Callees: FUN_100159fc8, FUN_10015a14c, FUN_10015a304, FUN_10015d3ec, FUN_100166fd8, FUN_1001e3090, FUN_1004e0150, FUN_1004f1580 (+2 more)
 * Callers: thunk_FUN_10028353c
 */
void FUN_10028353c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  undefined **local_270 [5];
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1d8 [8];
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  iVar2 = FUN_1004f1680(param_2);
  if (iVar2 != 0) {
    if (*(char *)(param_2 + 0x44) != '\0') {
      FUN_1004f1580(local_270);
      local_270[0] = &PTR_thunk_FUN_10015a304_10145bec0;
      uStack_1c8 = 0;
      local_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      local_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      local_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      local_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      local_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      local_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      local_110 = 0;
      local_100 = 0;
      uStack_240 = 0;
      local_248 = 0;
      uStack_230 = 0;
      local_238 = 0;
      uStack_220 = 0;
      local_228 = 0;
      uStack_210 = 0;
      local_218 = 0;
      uStack_200 = 0;
      local_208 = 0;
      uStack_1f0 = 0;
      local_1f8 = 0;
      FUN_10015a14c(auStack_1d8);
      FUN_100159fc8(&local_248);
      local_40 = 0;
      uStack_e8 = 0;
      local_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_48 = 0;
      local_50 = 0;
      uStack_c8 = 0;
      local_d0 = 0;
      uStack_90 = 0;
      local_98 = 0;
      uStack_80 = 0;
      uStack_88 = 0;
      uStack_70 = 0;
      local_78 = 0;
      uStack_60 = 0;
      uStack_68 = 0;
      lVar3 = FUN_10015d3ec();
      std::string::operator=((string *)&local_f0,(string *)(lVar3 + 0x5478));
      lVar3 = FUN_10015d3ec();
      std::string::operator=((string *)&uStack_230,(string *)(lVar3 + 0x50c8));
      lVar3 = FUN_10015d3ec();
      std::string::operator=((string *)&local_218,(string *)(lVar3 + 0x50e0));
      local_a0 = 1;
      FUN_10015d3ec();
      FUN_100166fd8();
      FUN_10015a304(local_270);
      return;
    }
    bVar10 = *(byte *)(param_2 + 0x5f);
    uVar8 = (ulong)bVar10;
    uVar9 = *(ulong *)(param_2 + 0x50);
    uVar1 = uVar9;
    if (-1 < (char)bVar10) {
      uVar1 = uVar8;
    }
    if (uVar1 == 0x11) {
      iVar2 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013e76d5);
      if (iVar2 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_REJECT_TITLE",0);
        pcVar5 = "MENU_PROFILE_GUILD_CANT_REJECT_REASON_NO_GUILD";
        goto LAB_100283720;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    if (-1 < (char)bVar10) {
      uVar9 = uVar8;
    }
    if ((uVar9 == 0x10) &&
       (iVar2 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013e3bc2),
       iVar2 == 0)) {
      uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_REJECT_TITLE",0);
      pcVar5 = "MENU_PROFILE_GUILD_CANT_REJECT_REASON_IN_GUILD";
LAB_100283720:
      uVar6 = FUN_1004e0150(pcVar5,0);
      uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1001e3090(uVar4,uVar6,uVar7,0,0);
      return;
    }
  }
  return;
}



/*
 * FUN_100283764
 * VA: 0x100283764 | Source: functions/10028.c:2542
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 16
 * Callees: FUN_1001e3090, FUN_1001e55b0, FUN_1004e0150, FUN_1004f1680, thunk_FUN_1004e439c
 * Callers: FUN_100267aa4, FUN_100267ab4
 */
void FUN_100283764(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  undefined1 auStack_30 [8];
  void *local_28;
  
  iVar3 = FUN_1004f1680(param_2);
  if (iVar3 != 0) {
    if (*(char *)(param_2 + 0x44) != '\0') {
      uVar4 = FUN_1004e0150("MENU_FRIENDS_INVITE_GUILD_NOTIFICATION",0);
      thunk_FUN_1004e439c(auStack_30,uVar4);
      FUN_1001e55b0(0x40a00000,auStack_30,0,0);
      if (local_28 == (void *)0x0) {
        return;
      }
      operator_delete__(local_28);
      return;
    }
    uVar1 = param_2 + 0x48;
    bVar10 = *(byte *)(param_2 + 0x5f);
    uVar8 = (ulong)bVar10;
    uVar9 = *(ulong *)(param_2 + 0x50);
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0x13) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013ea7ed);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_GUILD_CANT_INVITE_REASON_NOT_IN_GUILD";
        goto LAB_100283a74;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0x10) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3bc2);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_GUILD_CANT_INVITE_REASON_IN_GUILD";
        goto LAB_100283a74;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0xe) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eaa81);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_GUILD_CANT_INVITE_REASON_DIFF_GAME";
        goto LAB_100283a74;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0x11) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eaac0);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_GUILD_CANT_INVITE_REASON_PERMISSIONS";
        goto LAB_100283a74;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0xf) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eab04);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_GUILD_CANT_INVITE_REASON_ALREADY_INVITED";
        goto LAB_100283a74;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 10) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e77b1);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_GUILD_CANT_INVITE_REASON_GUILD_FULL";
        goto LAB_100283a74;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    if (-1 < (char)bVar10) {
      uVar9 = uVar8;
    }
    if ((uVar9 == 0xe) &&
       (iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e77e5), iVar3 == 0)) {
      uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_INVITE_TITLE",0);
      pcVar5 = "MENU_PROFILE_GUILD_CANT_INVITE_REASON_MIN_SKILL_TIER";
LAB_100283a74:
      uVar6 = FUN_1004e0150(pcVar5,0);
      uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1001e3090(uVar4,uVar6,uVar7,0,0);
      return;
    }
  }
  return;
}



/*
 * FUN_100283ab4
 * VA: 0x100283ab4 | Source: functions/10028.c:2684
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 4
 * Callees: FUN_1001e3090, FUN_1004e0150, FUN_1004f1680
 * Callers: thunk_FUN_100283ab4
 */
void FUN_100283ab4(undefined8 param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  char *pcVar9;
  
  iVar2 = FUN_1004f1680(param_2);
  if ((iVar2 != 0) && (*(char *)(param_2 + 0x44) == '\0')) {
    bVar8 = *(byte *)(param_2 + 0x5f);
    uVar6 = (ulong)bVar8;
    uVar7 = *(ulong *)(param_2 + 0x50);
    uVar1 = uVar7;
    if (-1 < (char)bVar8) {
      uVar1 = uVar6;
    }
    if (uVar1 == 0x13) {
      iVar2 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013ea7ed);
      if (iVar2 == 0) {
        pcVar9 = "MENU_PROFILE_GUILD_CANT_KICK_REASON_NOT_IN_GUILD";
        goto LAB_100283b78;
      }
      bVar8 = *(byte *)(param_2 + 0x5f);
      uVar6 = (ulong)bVar8;
      uVar7 = *(ulong *)(param_2 + 0x50);
    }
    if (-1 < (char)bVar8) {
      uVar7 = uVar6;
    }
    if ((uVar7 == 0x11) &&
       (iVar2 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013eaac0),
       iVar2 == 0)) {
      pcVar9 = "MENU_PROFILE_GUILD_CANT_KICK_REASON_PERMISSIONS";
LAB_100283b78:
      uVar3 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_KICK_TITLE",0);
      uVar4 = FUN_1004e0150(pcVar9,0);
      uVar5 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1001e3090(uVar3,uVar4,uVar5,0,0);
      return;
    }
  }
  return;
}



/*
 * FUN_100284480
 * VA: 0x100284480 | Source: functions/10028.c:3349
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 26
 * Callees: FUN_10015d3ec, FUN_1001e3090, FUN_1001e3120, FUN_1002841a4, FUN_1004e0150, FUN_1004e3120, FUN_1004e313c, FUN_1004e38ac (+5 more)
 * Callers: FUN_10028034c
 */
void FUN_100284480(long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  if (*(char *)(param_1 + 0x799bc) == '\0') {
    lVar2 = FUN_10015d3ec();
    if (*(char *)(lVar2 + 0x567c) != '\0') {
      uVar3 = FUN_1004e0150("MENU_PROFILE_GUILD_MUST_REGISTER_DIALOG_TITLE",0);
      uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_MUST_REGISTER_DIALOG_TEXT",0);
      uVar5 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      uVar6 = FUN_1004e0150("MAIN_PROFILE_LOGIN",0);
      pcVar7 = FUN_1002841a4;
LAB_100284528:
      FUN_1001e3120(uVar3,uVar4,uVar5,uVar6,param_1,0,pcVar7);
      return;
    }
    if (param_3 == 1) {
      uVar1 = *(uint *)(param_1 + 0x799b8);
      lVar2 = FUN_10015d3ec();
      if (*(uint *)(lVar2 + 0x5454) < uVar1) {
        uVar3 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_CANT_AFFORD_DIALOG_TITLE",0);
        uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_CANT_AFFORD_GLORY_DIALOG_TEXT",0);
        uVar5 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        FUN_1001e3090(uVar3,uVar4,uVar5,0,0);
        return;
      }
      FUN_1004e313c(auStack_40);
      FUN_1004e38ac(auStack_40,"%d");
      uVar3 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_GLORY_DIALOG_TEXT",0);
      thunk_FUN_1004e439c(auStack_50,uVar3);
      FUN_1004e3120(auStack_60,"[COST]");
      FUN_1004e3bc4(auStack_50,0,auStack_60,auStack_40);
      if (local_58 != (void *)0x0) {
        operator_delete__(local_58);
      }
      uVar3 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TITLE",0);
      uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      uVar5 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
      pcVar7 = thunk_FUN_100284bcc;
    }
    else {
      if (param_3 != 0) {
        return;
      }
      uVar1 = *(uint *)(param_1 + 0x799b4);
      lVar2 = FUN_10015d3ec();
      if (*(uint *)(lVar2 + 0x5450) < uVar1) {
        uVar3 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_CANT_AFFORD_DIALOG_TITLE",0);
        uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_CANT_AFFORD_ICE_DIALOG_TEXT",0);
        uVar5 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        uVar6 = FUN_1004e0150("MARKET_DIALOG_BUY_ICE",0);
        pcVar7 = thunk_FUN_1001e3fd8;
        goto LAB_100284528;
      }
      FUN_1004e313c(auStack_40);
      FUN_1004e38ac(auStack_40,"%d");
      uVar3 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_ICE_DIALOG_TEXT",0);
      thunk_FUN_1004e439c(auStack_50,uVar3);
      FUN_1004e3120(auStack_60,"[COST]");
      FUN_1004e3bc4(auStack_50,0,auStack_60,auStack_40);
      if (local_58 != (void *)0x0) {
        operator_delete__(local_58);
      }
      uVar3 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TITLE",0);
      uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      uVar5 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
      pcVar7 = thunk_FUN_100284a1c;
    }
    FUN_1001e3120(uVar3,auStack_50,uVar4,uVar5,param_1,pcVar7,0);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
  }
  return;
}



/*
 * FUN_100288b0c
 * VA: 0x100288b0c | Source: functions/10028.c:6767
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 6, Vis masks: 3
 * Callees: FUN_10015d3ec, FUN_100181af8, FUN_100265224, FUN_1002656cc, FUN_100288e44, FUN_1004e0150, FUN_1006513c0
 * Callers: FUN_1002201c4, FUN_100267270, FUN_100289680, FUN_100289aac, FUN_10028a410, FUN_10028a5c4, FUN_10028b25c, thunk_FUN_100288b0c (+3 more)
 */
void FUN_100288b0c(long *param_1,long param_2)

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
  
  pbVar1 = (byte *)((long)param_1 + 0x2b07c);
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
      if ((sVar2 == 0) || (iVar9 = _memcmp(puVar4,pbVar15,sVar2), iVar9 == 0)) goto LAB_100288c9c;
    }
    else {
      if (sVar2 == 0) {
LAB_100288c9c:
        *pbVar1 = 0;
        FUN_100288e44(param_1,0);
        goto LAB_100288d04;
      }
      if ((uint)*pbVar15 == ((uint)pvVar16 & 0xff)) {
        pbVar14 = (byte *)(param_2 + 0x41);
        do {
          uVar12 = uVar12 - 1;
          pbVar15 = pbVar15 + 1;
          if (uVar12 == 0) goto LAB_100288c9c;
          bVar6 = *pbVar14;
          pbVar14 = pbVar14 + 1;
        } while (bVar6 == *pbVar15);
      }
    }
  }
  lVar10 = FUN_10015d3ec();
  bVar6 = *(byte *)(lVar10 + 0x54a7);
  uVar12 = (ulong)bVar6;
  sVar2 = *(size_t *)(lVar10 + 0x5498);
  if (-1 < (char)bVar6) {
    sVar2 = uVar12;
  }
  bVar7 = *(byte *)(param_2 + 0x3f);
  sVar3 = *(size_t *)(param_2 + 0x30);
  if (-1 < (char)bVar7) {
    sVar3 = (ulong)bVar7;
  }
  if (sVar2 == sVar3) {
    pvVar16 = *(void **)(lVar10 + 0x5490);
    puVar4 = pvVar16;
    if (-1 < (char)bVar6) {
      puVar4 = (undefined8 *)(lVar10 + 0x5490);
    }
    pbVar15 = *(byte **)(param_2 + 0x28);
    if (-1 < (char)bVar7) {
      pbVar15 = (byte *)(param_2 + 0x28);
    }
    if ((char)bVar6 < '\0') {
      if (sVar2 == 0) goto LAB_100288cc8;
      iVar9 = _memcmp(puVar4,pbVar15,sVar2);
      bVar8 = iVar9 == 0;
    }
    else if (sVar2 == 0) {
LAB_100288cc8:
      bVar8 = true;
    }
    else {
      if ((uint)*pbVar15 != ((uint)pvVar16 & 0xff)) goto LAB_100288c94;
      pbVar14 = (byte *)(lVar10 + 0x5491);
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
  else {
LAB_100288c94:
    bVar8 = false;
  }
  *pbVar1 = bVar8;
  if ((*(uint *)((long)param_1 + 0x404) >> 2 & 1) == 0) {
    *(uint *)((long)param_1 + 0x404) = *(uint *)((long)param_1 + 0x404) | 4;
    FUN_100265224(param_1 + 0x70,1);
  }
  *(uint *)((long)param_1 + 0x1b8cc) = *(uint *)((long)param_1 + 0x1b8cc) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x1946c) = *(uint *)((long)param_1 + 0x1946c) & 0xfffffffb;
LAB_100288d04:
  pcVar5 = "MENU_PROFILE_USERTEAM_CREATE_TEAM_HEADER";
  if (*pbVar1 != 0) {
    pcVar5 = "MENU_PROFILE_USERTEAM_RENAME_TEAM_HEADER";
  }
  uVar11 = FUN_1004e0150(pcVar5,0);
  FUN_1006513c0(param_1 + 0x380e,uVar11);
  pcVar5 = "MENU_PROFILE_USERTEAM_CREATE_NAME_FIELD_BLURB";
  if (*pbVar1 != 0) {
    pcVar5 = "MENU_PROFILE_USERTEAM_RENAME_FIELD_BLURB";
  }
  uVar11 = FUN_1004e0150(pcVar5,0);
  FUN_1006513c0(param_1 + 0x38a7,uVar11);
  pcVar5 = "MENU_PROFILE_USERTEAM_CREATE_TEAM";
  if (*pbVar1 != 0) {
    pcVar5 = "MENU_PROFILE_USERTEAM_RENAME_TEAM";
  }
  uVar11 = FUN_1004e0150(pcVar5,0);
  FUN_100181af8(param_1 + 0x4a59,uVar11);
  *(uint *)((long)param_1 + 0x2534c) =
       *(uint *)((long)param_1 + 0x2534c) & 0xfffffffb | (uint)*pbVar1 << 2;
  uVar13 = (uint)(*pbVar1 == 0);
  *(uint *)((long)param_1 + 0x26904) =
       *(uint *)((long)param_1 + 0x26904) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x26904) & 3 | uVar13 << 2;
  *(uint *)((long)param_1 + 0x28194) =
       *(uint *)((long)param_1 + 0x28194) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x28194) & 3 | uVar13 << 2;
  FUN_1002656cc(param_1 + 0x70,param_2);
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
 * FUN_100289120
 * VA: 0x100289120 | Source: functions/10028.c:7043
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 14
 * Callees: FUN_100104ba4, FUN_10015d3ec, FUN_100169cec, FUN_1001e3090, FUN_1001e3120, FUN_100289480, FUN_1004e0150, FUN_1004e313c
 * Callers: FUN_10028a5dc, thunk_FUN_100289120
 */
void FUN_100289120(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  undefined1 auStack_40 [8];
  void *local_38;
  
  if (*(char *)(param_2 + 0x25) != '\0') {
    lVar4 = FUN_10015d3ec();
    FUN_100169cec(lVar4 + 0x18);
    FUN_100104ba4();
    return;
  }
  uVar1 = param_2 + 0x30;
  bVar11 = *(byte *)(param_2 + 0x47);
  uVar9 = (ulong)bVar11;
  uVar10 = *(ulong *)(param_2 + 0x38);
  uVar2 = uVar10;
  if (-1 < (char)bVar11) {
    uVar2 = uVar9;
  }
  if (uVar2 == 0xf) {
    iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eb228);
    if (iVar3 != 0) {
      bVar11 = *(byte *)(param_2 + 0x47);
      uVar9 = (ulong)bVar11;
      uVar10 = *(ulong *)(param_2 + 0x38);
      goto LAB_1002891b0;
    }
    uVar5 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_CREATE_TITLE",0);
    pcVar8 = "MENU_PROFILE_USERTEAM_CANT_CREATE_REASON_ALREADY_IN";
  }
  else {
LAB_1002891b0:
    uVar2 = uVar10;
    if (-1 < (char)bVar11) {
      uVar2 = uVar9;
    }
    if (uVar2 == 0xb) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3c29);
      if (iVar3 == 0) {
        uVar5 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_CREATE_TITLE",0);
        pcVar8 = "MENU_PROFILE_USERTEAM_CANT_CREATE_REASON_TAG_LENGTH";
        goto LAB_100289430;
      }
      bVar11 = *(byte *)(param_2 + 0x47);
      uVar9 = (ulong)bVar11;
      uVar10 = *(ulong *)(param_2 + 0x38);
    }
    uVar2 = uVar10;
    if (-1 < (char)bVar11) {
      uVar2 = uVar9;
    }
    if (uVar2 == 0xc) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eb2c8);
      if (iVar3 == 0) {
        uVar5 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_CREATE_ERROR_TITLE",0);
        pcVar8 = "MENU_PROFILE_USERTEAM_CANT_CREATE_REASON_NAME_INVALID";
        goto LAB_100289430;
      }
      bVar11 = *(byte *)(param_2 + 0x47);
      uVar9 = (ulong)bVar11;
      uVar10 = *(ulong *)(param_2 + 0x38);
    }
    uVar2 = uVar10;
    if (-1 < (char)bVar11) {
      uVar2 = uVar9;
    }
    if (uVar2 == 10) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3c66);
      if (iVar3 != 0) {
        bVar11 = *(byte *)(param_2 + 0x47);
        uVar9 = (ulong)bVar11;
        uVar10 = *(ulong *)(param_2 + 0x38);
        goto LAB_100289270;
      }
LAB_1002893b4:
      uVar5 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_CREATE_TITLE",0);
      pcVar8 = "MENU_PROFILE_USERTEAM_CANT_CREATE_REASON_NAME_TAKEN";
    }
    else {
LAB_100289270:
      uVar2 = uVar10;
      if (-1 < (char)bVar11) {
        uVar2 = uVar9;
      }
      if (uVar2 == 0xd) {
        iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3c71);
        if (iVar3 == 0) goto LAB_1002893b4;
        bVar11 = *(byte *)(param_2 + 0x47);
        uVar9 = (ulong)bVar11;
        uVar10 = *(ulong *)(param_2 + 0x38);
      }
      uVar2 = uVar10;
      if (-1 < (char)bVar11) {
        uVar2 = uVar9;
      }
      if (uVar2 == 9) {
        iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3cb0);
        if (iVar3 != 0) {
          bVar11 = *(byte *)(param_2 + 0x47);
          uVar9 = (ulong)bVar11;
          uVar10 = *(ulong *)(param_2 + 0x38);
          goto LAB_1002892f0;
        }
      }
      else {
LAB_1002892f0:
        if (-1 < (char)bVar11) {
          uVar10 = uVar9;
        }
        if ((uVar10 != 0xc) ||
           (iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3cba), iVar3 != 0
           )) {
          FUN_1004e313c(auStack_40);
          uVar5 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_CREATE_ERROR_TITLE",0);
          uVar6 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_CREATE_ERROR",0);
          uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
          FUN_1001e3120(uVar5,uVar6,uVar7,auStack_40,0,0,0);
          if (local_38 != (void *)0x0) {
            operator_delete__(local_38);
          }
          goto LAB_100289464;
        }
      }
      uVar5 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_CREATE_TITLE",0);
      pcVar8 = "MENU_PROFILE_USERTEAM_CANT_CREATE_REASON_TAG_TAKEN";
    }
  }
LAB_100289430:
  uVar6 = FUN_1004e0150(pcVar8,0);
  uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar5,uVar6,uVar7,0,0);
LAB_100289464:
  FUN_100289480(param_1);
  return;
}



/*
 * FUN_100289680
 * VA: 0x100289680 | Source: functions/10028.c:7270
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 5
 * Callees: FUN_10015aacc, FUN_10015ab5c, FUN_10015d3ec, FUN_100169cec, FUN_1001e3090, FUN_100288b0c, FUN_1004e0150, FUN_1004f1580 (+3 more)
 * Callers: FUN_10028a5e8
 */
void FUN_100289680(undefined8 param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  char *pcVar11;
  undefined **local_130 [5];
  void *local_108;
  undefined8 uStack_100;
  long local_f8;
  void *pvStack_f0;
  undefined8 local_e8;
  long lStack_e0;
  void *local_d8;
  undefined8 uStack_d0;
  long local_c8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  void *local_70;
  undefined8 local_68;
  long lStack_60;
  
  iVar2 = FUN_1004f1680(param_2);
  if (iVar2 == 0) {
    return;
  }
  lVar3 = FUN_10015d3ec();
  FUN_100169cec(lVar3 + 0x18);
  FUN_1004f1580(local_130);
  local_130[0] = &PTR_FUN_10145bf20;
  local_68 = 0;
  lStack_60 = 0;
  uStack_100 = 0;
  local_108 = (void *)0x0;
  pvStack_f0 = (void *)0x0;
  local_f8 = 0;
  lStack_e0 = 0;
  local_e8 = 0;
  uStack_d0 = 0;
  local_d8 = (void *)0x0;
  local_70 = (void *)0x0;
  local_c8 = 0;
  uStack_90 = 0;
  local_98 = 0;
  uStack_80 = 0;
  local_88 = 0;
  std::string::operator=((string *)&local_108,(string *)&DAT_101d91198);
  std::string::operator=((string *)&pvStack_f0,(string *)&DAT_101d91198);
  std::string::operator=((string *)&local_d8,(string *)&DAT_101d91198);
  FUN_100288b0c(param_1,local_130);
  if (*(char *)(param_2 + 0x44) != '\0') goto LAB_100289740;
  bVar10 = *(byte *)(param_2 + 0x5f);
  uVar8 = (ulong)bVar10;
  uVar9 = *(ulong *)(param_2 + 0x50);
  uVar1 = uVar9;
  if (-1 < (char)bVar10) {
    uVar1 = uVar8;
  }
  if (uVar1 == 0xb) {
    iVar2 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013eb3c8);
    if (iVar2 != 0) {
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
      goto LAB_100289810;
    }
    pcVar11 = "MENU_PROFILE_USERTEAM_CANT_LEAVE_REASON_NOT_IN";
    pcVar4 = "MENU_PROFILE_USERTEAM_CANT_LEAVE_TITLE";
  }
  else {
LAB_100289810:
    if (-1 < (char)bVar10) {
      uVar9 = uVar8;
    }
    if ((uVar9 != 0x11) ||
       (iVar2 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013e7827),
       iVar2 != 0)) goto LAB_100289740;
    pcVar11 = "MENU_PROFILE_GUILD_TEAM_MEMBERSHIP_LOCKED_MESSAGE";
    pcVar4 = "MENU_PROFILE_GUILD_TEAM_MEMBERSHIP_LOCKED_TITLE";
  }
  uVar5 = FUN_1004e0150(pcVar4,0);
  uVar6 = FUN_1004e0150(pcVar11,0);
  uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar5,uVar6,uVar7,0,0);
LAB_100289740:
  local_130[0] = &PTR_FUN_10145bf20;
  if (lStack_60 < 0) {
    operator_delete(local_70);
  }
  FUN_10015ab5c(&local_88,1);
  FUN_10015aacc(&local_98,1);
  if (local_c8 < 0) {
    operator_delete(local_d8);
  }
  if (lStack_e0 < 0) {
    operator_delete(pvStack_f0);
  }
  if (local_f8 < 0) {
    operator_delete(local_108);
  }
  FUN_1004f15a8(local_130);
  return;
}



/*
 * thunk_FUN_100289680
 * VA: 0xthunk_100289680 | Source: functions/10028.c:8098
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 5
 * Callees: FUN_10015aacc, FUN_10015ab5c, FUN_10015d3ec, FUN_100169cec, FUN_1001e3090, FUN_100288b0c, FUN_1004e0150, FUN_1004f1580 (+3 more)
 */
void thunk_FUN_100289680(undefined8 param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  char *pcVar11;
  undefined **appuStack_130 [5];
  void *pvStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  void *pvStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  void *pvStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  void *pvStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  iVar2 = FUN_1004f1680(param_2);
  if (iVar2 == 0) {
    return;
  }
  lVar3 = FUN_10015d3ec();
  FUN_100169cec(lVar3 + 0x18);
  FUN_1004f1580(appuStack_130);
  appuStack_130[0] = &PTR_FUN_10145bf20;
  uStack_68 = 0;
  lStack_60 = 0;
  uStack_100 = 0;
  pvStack_108 = (void *)0x0;
  pvStack_f0 = (void *)0x0;
  lStack_f8 = 0;
  lStack_e0 = 0;
  uStack_e8 = 0;
  uStack_d0 = 0;
  pvStack_d8 = (void *)0x0;
  pvStack_70 = (void *)0x0;
  lStack_c8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  std::string::operator=((string *)&pvStack_108,(string *)&DAT_101d91198);
  std::string::operator=((string *)&pvStack_f0,(string *)&DAT_101d91198);
  std::string::operator=((string *)&pvStack_d8,(string *)&DAT_101d91198);
  FUN_100288b0c(param_1,appuStack_130);
  if (*(char *)(param_2 + 0x44) != '\0') goto LAB_100289740;
  bVar10 = *(byte *)(param_2 + 0x5f);
  uVar8 = (ulong)bVar10;
  uVar9 = *(ulong *)(param_2 + 0x50);
  uVar1 = uVar9;
  if (-1 < (char)bVar10) {
    uVar1 = uVar8;
  }
  if (uVar1 == 0xb) {
    iVar2 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013eb3c8);
    if (iVar2 != 0) {
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
      goto LAB_100289810;
    }
    pcVar11 = "MENU_PROFILE_USERTEAM_CANT_LEAVE_REASON_NOT_IN";
    pcVar4 = "MENU_PROFILE_USERTEAM_CANT_LEAVE_TITLE";
  }
  else {
LAB_100289810:
    if (-1 < (char)bVar10) {
      uVar9 = uVar8;
    }
    if ((uVar9 != 0x11) ||
       (iVar2 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013e7827),
       iVar2 != 0)) goto LAB_100289740;
    pcVar11 = "MENU_PROFILE_GUILD_TEAM_MEMBERSHIP_LOCKED_MESSAGE";
    pcVar4 = "MENU_PROFILE_GUILD_TEAM_MEMBERSHIP_LOCKED_TITLE";
  }
  uVar5 = FUN_1004e0150(pcVar4,0);
  uVar6 = FUN_1004e0150(pcVar11,0);
  uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar5,uVar6,uVar7,0,0);
LAB_100289740:
  appuStack_130[0] = &PTR_FUN_10145bf20;
  if (lStack_60 < 0) {
    operator_delete(pvStack_70);
  }
  FUN_10015ab5c(&uStack_88,1);
  FUN_10015aacc(&uStack_98,1);
  if (lStack_c8 < 0) {
    operator_delete(pvStack_d8);
  }
  if (lStack_e0 < 0) {
    operator_delete(pvStack_f0);
  }
  if (lStack_f8 < 0) {
    operator_delete(pvStack_108);
  }
  FUN_1004f15a8(appuStack_130);
  return;
}



/*
 * FUN_1002898b0
 * VA: 0x1002898b0 | Source: functions/10028.c:7387
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 9
 * Callees: FUN_1001e3090, FUN_100287808, FUN_1004e0150, FUN_1004f1680
 * Callers: FUN_10028a5f4, thunk_FUN_1002898b0
 */
void FUN_1002898b0(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  
  iVar3 = FUN_1004f1680(param_2);
  if (iVar3 != 0) {
    if (*(char *)(param_2 + 0x44) != '\0') {
      FUN_100287808(param_1);
      return;
    }
    uVar1 = param_2 + 0x48;
    bVar10 = *(byte *)(param_2 + 0x5f);
    uVar8 = (ulong)bVar10;
    uVar9 = *(ulong *)(param_2 + 0x50);
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0xc) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eb42a);
      if (iVar3 == 0) {
        uVar5 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_CONFIRM_INVITE_TITLE",0);
        pcVar4 = "MENU_PROFILE_USERTEAM_CANT_CONFIRM_INVITE_REASON_NO_TEAM";
        goto LAB_100289a70;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0xf) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eb228);
      if (iVar3 == 0) {
        uVar5 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_CONFIRM_INVITE_TITLE",0);
        pcVar4 = "MENU_PROFILE_USERTEAM_CANT_CONFIRM_INVITE_ALREADY_IN_TEAM";
        goto LAB_100289a70;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 7) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013ea8ed);
      if (iVar3 == 0) {
        uVar5 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_CONFIRM_INVITE_TITLE",0);
        pcVar4 = "MENU_PROFILE_USERTEAM_CANT_CONFIRM_INVITE_EXPIRED";
        goto LAB_100289a70;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    if (-1 < (char)bVar10) {
      uVar9 = uVar8;
    }
    if ((uVar9 == 9) &&
       (iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eb50c), iVar3 == 0)) {
      uVar5 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_CONFIRM_INVITE_TITLE",0);
      pcVar4 = "MENU_PROFILE_USERTEAM_CANT_CONFIRM_INVITE_FULL";
LAB_100289a70:
      uVar6 = FUN_1004e0150(pcVar4,0);
      uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1001e3090(uVar5,uVar6,uVar7,0,0);
      return;
    }
  }
  return;
}



/*
 * FUN_100289aac
 * VA: 0x100289aac | Source: functions/10028.c:7476
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 5
 * Callees: FUN_10015aacc, FUN_10015ab5c, FUN_10015d3ec, FUN_100167860, FUN_1001e3090, FUN_100286c7c, FUN_100288b0c, FUN_1004e0150 (+4 more)
 * Callers: FUN_10028a600
 */
void FUN_100289aac(undefined8 param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  undefined **local_130 [5];
  void *local_108;
  undefined8 uStack_100;
  long local_f8;
  void *pvStack_f0;
  undefined8 local_e8;
  long lStack_e0;
  void *local_d8;
  undefined8 uStack_d0;
  long local_c8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  void *local_70;
  undefined8 local_68;
  long lStack_60;
  
  iVar2 = FUN_1004f1680(param_2);
  if (iVar2 == 0) {
    return;
  }
  FUN_1004f1580(local_130);
  local_130[0] = &PTR_FUN_10145bf20;
  local_68 = 0;
  lStack_60 = 0;
  uStack_100 = 0;
  local_108 = (void *)0x0;
  pvStack_f0 = (void *)0x0;
  local_f8 = 0;
  lStack_e0 = 0;
  local_e8 = 0;
  uStack_d0 = 0;
  local_d8 = (void *)0x0;
  local_70 = (void *)0x0;
  local_c8 = 0;
  uStack_90 = 0;
  local_98 = 0;
  uStack_80 = 0;
  local_88 = 0;
  lVar3 = FUN_10015d3ec();
  std::string::operator=((string *)&local_108,(string *)(lVar3 + 0x5490));
  lVar3 = FUN_10015d3ec();
  std::string::operator=((string *)&pvStack_f0,(string *)(lVar3 + 0x5308));
  lVar3 = FUN_10015d3ec();
  std::string::operator=((string *)&local_d8,(string *)(lVar3 + 0x5320));
  FUN_100288b0c(param_1,local_130);
  FUN_10015d3ec();
  FUN_100167860();
  if (*(char *)(param_2 + 0x44) != '\0') {
    FUN_100286c7c(0xcd,param_1,1,1);
    goto LAB_100289b9c;
  }
  bVar10 = *(byte *)(param_2 + 0x5f);
  uVar8 = (ulong)bVar10;
  uVar9 = *(ulong *)(param_2 + 0x50);
  uVar1 = uVar9;
  if (-1 < (char)bVar10) {
    uVar1 = uVar8;
  }
  if (uVar1 == 0xc) {
    iVar2 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013eb42a);
    if (iVar2 != 0) {
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
      goto LAB_100289c6c;
    }
    uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_REJECT_TITLE",0);
    pcVar5 = "MENU_PROFILE_USERTEAM_CANT_REJECT_REASON_NO_TEAM";
  }
  else {
LAB_100289c6c:
    if (-1 < (char)bVar10) {
      uVar9 = uVar8;
    }
    if ((uVar9 != 0xf) ||
       (iVar2 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013eb228),
       iVar2 != 0)) goto LAB_100289b9c;
    uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_REJECT_TITLE",0);
    pcVar5 = "MENU_PROFILE_USERTEAM_CANT_REJECT_REASON_IN_TEAM";
  }
  uVar6 = FUN_1004e0150(pcVar5,0);
  uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar4,uVar6,uVar7,0,0);
LAB_100289b9c:
  local_130[0] = &PTR_FUN_10145bf20;
  if (lStack_60 < 0) {
    operator_delete(local_70);
  }
  FUN_10015ab5c(&local_88,1);
  FUN_10015aacc(&local_98,1);
  if (local_c8 < 0) {
    operator_delete(local_d8);
  }
  if (lStack_e0 < 0) {
    operator_delete(pvStack_f0);
  }
  if (local_f8 < 0) {
    operator_delete(local_108);
  }
  FUN_1004f15a8(local_130);
  return;
}



/*
 * thunk_FUN_100289aac
 * VA: 0xthunk_100289aac | Source: functions/10028.c:8245
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 5
 * Callees: FUN_10015aacc, FUN_10015ab5c, FUN_10015d3ec, FUN_100167860, FUN_1001e3090, FUN_100286c7c, FUN_100288b0c, FUN_1004e0150 (+4 more)
 */
void thunk_FUN_100289aac(undefined8 param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  undefined **appuStack_130 [5];
  void *pvStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  void *pvStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  void *pvStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  void *pvStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  iVar2 = FUN_1004f1680(param_2);
  if (iVar2 == 0) {
    return;
  }
  FUN_1004f1580(appuStack_130);
  appuStack_130[0] = &PTR_FUN_10145bf20;
  uStack_68 = 0;
  lStack_60 = 0;
  uStack_100 = 0;
  pvStack_108 = (void *)0x0;
  pvStack_f0 = (void *)0x0;
  lStack_f8 = 0;
  lStack_e0 = 0;
  uStack_e8 = 0;
  uStack_d0 = 0;
  pvStack_d8 = (void *)0x0;
  pvStack_70 = (void *)0x0;
  lStack_c8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  lVar3 = FUN_10015d3ec();
  std::string::operator=((string *)&pvStack_108,(string *)(lVar3 + 0x5490));
  lVar3 = FUN_10015d3ec();
  std::string::operator=((string *)&pvStack_f0,(string *)(lVar3 + 0x5308));
  lVar3 = FUN_10015d3ec();
  std::string::operator=((string *)&pvStack_d8,(string *)(lVar3 + 0x5320));
  FUN_100288b0c(param_1,appuStack_130);
  FUN_10015d3ec();
  FUN_100167860();
  if (*(char *)(param_2 + 0x44) != '\0') {
    FUN_100286c7c(0xcd,param_1,1,1);
    goto LAB_100289b9c;
  }
  bVar10 = *(byte *)(param_2 + 0x5f);
  uVar8 = (ulong)bVar10;
  uVar9 = *(ulong *)(param_2 + 0x50);
  uVar1 = uVar9;
  if (-1 < (char)bVar10) {
    uVar1 = uVar8;
  }
  if (uVar1 == 0xc) {
    iVar2 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013eb42a);
    if (iVar2 != 0) {
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
      goto LAB_100289c6c;
    }
    uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_REJECT_TITLE",0);
    pcVar5 = "MENU_PROFILE_USERTEAM_CANT_REJECT_REASON_NO_TEAM";
  }
  else {
LAB_100289c6c:
    if (-1 < (char)bVar10) {
      uVar9 = uVar8;
    }
    if ((uVar9 != 0xf) ||
       (iVar2 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013eb228),
       iVar2 != 0)) goto LAB_100289b9c;
    uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_REJECT_TITLE",0);
    pcVar5 = "MENU_PROFILE_USERTEAM_CANT_REJECT_REASON_IN_TEAM";
  }
  uVar6 = FUN_1004e0150(pcVar5,0);
  uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar4,uVar6,uVar7,0,0);
LAB_100289b9c:
  appuStack_130[0] = &PTR_FUN_10145bf20;
  if (lStack_60 < 0) {
    operator_delete(pvStack_70);
  }
  FUN_10015ab5c(&uStack_88,1);
  FUN_10015aacc(&uStack_98,1);
  if (lStack_c8 < 0) {
    operator_delete(pvStack_d8);
  }
  if (lStack_e0 < 0) {
    operator_delete(pvStack_f0);
  }
  if (lStack_f8 < 0) {
    operator_delete(pvStack_108);
  }
  FUN_1004f15a8(appuStack_130);
  return;
}



/*
 * FUN_100289d14
 * VA: 0x100289d14 | Source: functions/10028.c:7597
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 14
 * Callees: FUN_1001e3090, FUN_1001e55b0, FUN_1004e0150, FUN_1004f1680, thunk_FUN_1004e439c
 */
void FUN_100289d14(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  undefined1 auStack_30 [8];
  void *local_28;
  
  iVar3 = FUN_1004f1680(param_2);
  if (iVar3 != 0) {
    if (*(char *)(param_2 + 0x44) != '\0') {
      uVar4 = FUN_1004e0150("MENU_FRIENDS_INVITE_USER_TEAM_NOTIFICATION",0);
      thunk_FUN_1004e439c(auStack_30,uVar4);
      FUN_1001e55b0(0x40a00000,auStack_30,0,0);
      if (local_28 == (void *)0x0) {
        return;
      }
      operator_delete__(local_28);
      return;
    }
    uVar1 = param_2 + 0x48;
    bVar10 = *(byte *)(param_2 + 0x5f);
    uVar8 = (ulong)bVar10;
    uVar9 = *(ulong *)(param_2 + 0x50);
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0x12) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eb5fa);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_NOT_IN_TEAM";
        goto LAB_100289fc4;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0x14) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eb66a);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_IN_TEAM";
        goto LAB_100289fc4;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0xe) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eaa81);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_DIFF_GAME";
        goto LAB_100289fc4;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0x11) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eb6e3);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_NOT_CAPTAIN";
        goto LAB_100289fc4;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0x1c) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eb72a);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_ALREADY_INVITED";
        goto LAB_100289fc4;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    if (-1 < (char)bVar10) {
      uVar9 = uVar8;
    }
    if ((uVar9 == 9) &&
       (iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eb50c), iVar3 == 0)) {
      uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
      pcVar5 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_TEAM_FULL";
LAB_100289fc4:
      uVar6 = FUN_1004e0150(pcVar5,0);
      uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1001e3090(uVar4,uVar6,uVar7,0,0);
      return;
    }
  }
  return;
}



/*
 * thunk_FUN_100289d14
 * VA: 0xthunk_100289d14 | Source: functions/10028.c:8523
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 14
 * Callees: FUN_1001e3090, FUN_1001e55b0, FUN_1004e0150, FUN_1004f1680, thunk_FUN_1004e439c
 */
void thunk_FUN_100289d14(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  undefined1 auStack_30 [8];
  void *pvStack_28;
  
  iVar3 = FUN_1004f1680(param_2);
  if (iVar3 != 0) {
    if (*(char *)(param_2 + 0x44) != '\0') {
      uVar4 = FUN_1004e0150("MENU_FRIENDS_INVITE_USER_TEAM_NOTIFICATION",0);
      thunk_FUN_1004e439c(auStack_30,uVar4);
      FUN_1001e55b0(0x40a00000,auStack_30,0,0);
      if (pvStack_28 == (void *)0x0) {
        return;
      }
      operator_delete__(pvStack_28);
      return;
    }
    uVar1 = param_2 + 0x48;
    bVar10 = *(byte *)(param_2 + 0x5f);
    uVar8 = (ulong)bVar10;
    uVar9 = *(ulong *)(param_2 + 0x50);
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0x12) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eb5fa);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_NOT_IN_TEAM";
        goto LAB_100289fc4;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0x14) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eb66a);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_IN_TEAM";
        goto LAB_100289fc4;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0xe) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eaa81);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_DIFF_GAME";
        goto LAB_100289fc4;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0x11) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eb6e3);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_NOT_CAPTAIN";
        goto LAB_100289fc4;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0x1c) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eb72a);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
        pcVar5 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_ALREADY_INVITED";
        goto LAB_100289fc4;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    if (-1 < (char)bVar10) {
      uVar9 = uVar8;
    }
    if ((uVar9 == 9) &&
       (iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013eb50c), iVar3 == 0)) {
      uVar4 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_INVITE_TITLE",0);
      pcVar5 = "MENU_PROFILE_USERTEAM_CANT_INVITE_REASON_TEAM_FULL";
LAB_100289fc4:
      uVar6 = FUN_1004e0150(pcVar5,0);
      uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1001e3090(uVar4,uVar6,uVar7,0,0);
      return;
    }
  }
  return;
}



/*
 * FUN_10028a004
 * VA: 0x10028a004 | Source: functions/10028.c:7724
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 4
 * Callees: FUN_1001e3090, FUN_1004e0150, FUN_1004f1680
 * Callers: thunk_FUN_10028a004
 */
void FUN_10028a004(undefined8 param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  char *pcVar9;
  
  iVar2 = FUN_1004f1680(param_2);
  if ((iVar2 != 0) && (*(char *)(param_2 + 0x44) == '\0')) {
    bVar8 = *(byte *)(param_2 + 0x5f);
    uVar6 = (ulong)bVar8;
    uVar7 = *(ulong *)(param_2 + 0x50);
    uVar1 = uVar7;
    if (-1 < (char)bVar8) {
      uVar1 = uVar6;
    }
    if (uVar1 == 0x12) {
      iVar2 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013eb5fa);
      if (iVar2 == 0) {
        pcVar9 = "MENU_PROFILE_USERTEAM_CANT_KICK_REASON_NOT_IN_TEAM";
        goto LAB_10028a0c8;
      }
      bVar8 = *(byte *)(param_2 + 0x5f);
      uVar6 = (ulong)bVar8;
      uVar7 = *(ulong *)(param_2 + 0x50);
    }
    if (-1 < (char)bVar8) {
      uVar7 = uVar6;
    }
    if ((uVar7 == 0x11) &&
       (iVar2 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013eb6e3),
       iVar2 == 0)) {
      pcVar9 = "MENU_PROFILE_USERTEAM_CANT_KICK_REASON_NOT_CAPTAIN";
LAB_10028a0c8:
      uVar3 = FUN_1004e0150("MENU_PROFILE_USERTEAM_CANT_KICK_TITLE",0);
      uVar4 = FUN_1004e0150(pcVar9,0);
      uVar5 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1001e3090(uVar3,uVar4,uVar5,0,0);
      return;
    }
  }
  return;
}



/*
 * FUN_10028aafc
 * VA: 0x10028aafc | Source: functions/10028.c:8831
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 26
 * Callees: FUN_10015d3ec, FUN_1001e3090, FUN_1001e3120, FUN_10028a980, FUN_1004e0150, FUN_1004e3120, FUN_1004e313c, FUN_1004e38ac (+5 more)
 * Callers: FUN_100286b4c
 */
void FUN_10028aafc(long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  if (*(char *)(param_1 + 0x2b07c) == '\0') {
    lVar2 = FUN_10015d3ec();
    if (*(char *)(lVar2 + 0x567c) != '\0') {
      uVar3 = FUN_1004e0150("MENU_PROFILE_USER_TEAM_MUST_REGISTER_DIALOG_TITLE",0);
      uVar4 = FUN_1004e0150("MENU_PROFILE_USER_TEAM_MUST_REGISTER_DIALOG_TEXT",0);
      uVar5 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      uVar6 = FUN_1004e0150("MAIN_PROFILE_LOGIN",0);
      pcVar7 = FUN_10028a980;
LAB_10028aba4:
      FUN_1001e3120(uVar3,uVar4,uVar5,uVar6,param_1,0,pcVar7);
      return;
    }
    if (param_3 == 1) {
      uVar1 = *(uint *)(param_1 + 0x2b078);
      lVar2 = FUN_10015d3ec();
      if (*(uint *)(lVar2 + 0x5454) < uVar1) {
        uVar3 = FUN_1004e0150("MENU_PROFILE_USER_TEAM_CREATE_CANT_AFFORD_DIALOG_TITLE",0);
        uVar4 = FUN_1004e0150("MENU_PROFILE_USER_TEAM_CREATE_CANT_AFFORD_GLORY_DIALOG_TEXT",0);
        uVar5 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        FUN_1001e3090(uVar3,uVar4,uVar5,0,0);
        return;
      }
      FUN_1004e313c(auStack_40);
      FUN_1004e38ac(auStack_40,"%d");
      uVar3 = FUN_1004e0150("MENU_PROFILE_USER_TEAM_CREATE_GLORY_DIALOG_TEXT",0);
      thunk_FUN_1004e439c(auStack_50,uVar3);
      FUN_1004e3120(auStack_60,"[COST]");
      FUN_1004e3bc4(auStack_50,0,auStack_60,auStack_40);
      if (local_58 != (void *)0x0) {
        operator_delete__(local_58);
      }
      uVar3 = FUN_1004e0150("MENU_PROFILE_USER_TEAM_CREATE_TITLE",0);
      uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      uVar5 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
      pcVar7 = thunk_FUN_10028b180;
    }
    else {
      if (param_3 != 0) {
        return;
      }
      uVar1 = *(uint *)(param_1 + 0x2b074);
      lVar2 = FUN_10015d3ec();
      if (*(uint *)(lVar2 + 0x5450) < uVar1) {
        uVar3 = FUN_1004e0150("MENU_PROFILE_USER_TEAM_CREATE_CANT_AFFORD_DIALOG_TITLE",0);
        uVar4 = FUN_1004e0150("MENU_PROFILE_USER_TEAM_CREATE_CANT_AFFORD_ICE_DIALOG_TEXT",0);
        uVar5 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        uVar6 = FUN_1004e0150("MARKET_DIALOG_BUY_ICE",0);
        pcVar7 = thunk_FUN_1001e3fd8;
        goto LAB_10028aba4;
      }
      FUN_1004e313c(auStack_40);
      FUN_1004e38ac(auStack_40,"%d");
      uVar3 = FUN_1004e0150("MENU_PROFILE_USER_TEAM_CREATE_ICE_DIALOG_TEXT",0);
      thunk_FUN_1004e439c(auStack_50,uVar3);
      FUN_1004e3120(auStack_60,"[COST]");
      FUN_1004e3bc4(auStack_50,0,auStack_60,auStack_40);
      if (local_58 != (void *)0x0) {
        operator_delete__(local_58);
      }
      uVar3 = FUN_1004e0150("MENU_PROFILE_USER_TEAM_CREATE_TITLE",0);
      uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      uVar5 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
      pcVar7 = thunk_FUN_10028b0a4;
    }
    FUN_1001e3120(uVar3,auStack_50,uVar4,uVar5,param_1,pcVar7,0);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
  }
  return;
}



/*
 * FUN_1002926b8
 * VA: 0x1002926b8 | Source: functions/10029.c:1650
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 20
 * Callees: FUN_10001554c, FUN_1000200a0, FUN_100126c88, FUN_1001816d4, FUN_100181b5c, FUN_100181c68, FUN_100185730, FUN_100185e2c (+39 more)
 */
long * FUN_1002926b8(long *param_1)

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
  undefined **ppuVar33;
  undefined **ppuVar34;
  undefined4 uVar35;
  int iVar36;
  undefined8 *puVar37;
  undefined8 uVar38;
  uint uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  long lVar42;
  float fVar43;
  float fVar44;
  undefined8 local_c8;
  long *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  
  plVar6 = param_1 + 0x1eeb;
  plVar7 = param_1 + 0x1eae;
  plVar8 = param_1 + 0x1bd9;
  plVar9 = param_1 + 0x1b9c;
  plVar10 = param_1 + 0x161d;
  puVar37 = (undefined8 *)FUN_10064e20c();
  puVar37[0x17] = 0;
  *puVar37 = &PTR_thunk_FUN_100294ff0_10147fea8;
  FUN_1006421a8(puVar37 + 0x18);
  param_1[0x18] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8(param_1 + 0x29);
  param_1[0x29] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x3a;
  thunk_FUN_1005357f4(plVar1);
  FUN_1006421a8(param_1 + 0x17f);
  param_1[0x17f] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar2 = param_1 + 400;
  thunk_FUN_100652c08();
  plVar3 = param_1 + 0x1ae;
  thunk_FUN_100652c08();
  plVar4 = param_1 + 0x1cc;
  thunk_FUN_100650e64();
  plVar5 = param_1 + 0x1f2;
  thunk_FUN_100652c08();
  plVar11 = param_1 + 0x210;
  FUN_1006421a8(plVar11);
  param_1[0x210] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar12 = param_1 + 0x221;
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar13 = param_1 + 0x26d;
  thunk_FUN_100184f78();
  plVar14 = param_1 + 0x60b;
  thunk_FUN_100184f78();
  plVar15 = param_1 + 0x9a9;
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar16 = param_1 + 0x9f5;
  thunk_FUN_100184f78();
  plVar17 = param_1 + 0xd93;
  thunk_FUN_100184f78();
  plVar18 = param_1 + 0x1131;
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar19 = param_1 + 0x117d;
  thunk_FUN_100184f78();
  plVar20 = param_1 + 0x151b;
  thunk_FUN_100650e64();
  plVar21 = param_1 + 0x1541;
  thunk_FUN_100650e64(plVar21);
  plVar22 = param_1 + 0x1567;
  FUN_10064e264(plVar22);
  plVar23 = param_1 + 0x157e;
  thunk_FUN_100652c08();
  plVar24 = param_1 + 0x159c;
  thunk_FUN_100650e64();
  plVar25 = param_1 + 0x15c2;
  FUN_10064e264(plVar25);
  plVar26 = param_1 + 0x15d9;
  thunk_FUN_100652c08();
  plVar27 = param_1 + 0x15f7;
  thunk_FUN_100650e64(plVar27);
  FUN_1006421a8(plVar10);
  *plVar10 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar28 = param_1 + 0x162e;
  thunk_FUN_100181304(plVar28,0);
  plVar29 = param_1 + 0x18e5;
  thunk_FUN_100181304(plVar29,0);
  FUN_10064e264(plVar9);
  plVar30 = param_1 + 0x1bb3;
  thunk_FUN_100650e64();
  thunk_FUN_100652c08(plVar8);
  plVar31 = param_1 + 0x1bf7;
  thunk_FUN_100181304(plVar31,0);
  FUN_10064e264(plVar7);
  plVar32 = param_1 + 0x1ec5;
  thunk_FUN_100650e64();
  thunk_FUN_100652c08(plVar6);
  FUN_10064e264();
  FUN_1004e313c(param_1 + 0x1f20);
  param_1[0x1f22] = -1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100534ad8(plVar1,plVar2,1);
  FUN_100534ad8(plVar1,plVar3,1);
  FUN_100534ad8(plVar1,plVar4,1);
  FUN_100534ad8(plVar1,plVar5,1);
  FUN_100534ad8(plVar1,plVar11,1);
  FUN_100642bd8(plVar11,plVar12,1);
  FUN_100642bd8(plVar11,param_1 + 0x247,1);
  FUN_100642bd8(plVar11,plVar13,1);
  FUN_100642bd8(plVar11,plVar14,1);
  FUN_100642bd8(plVar11,plVar15,1);
  FUN_100642bd8(plVar11,param_1 + 0x9cf,1);
  FUN_100642bd8(plVar11,plVar16,1);
  FUN_100642bd8(plVar11,plVar17,1);
  FUN_100642bd8(plVar11,plVar18,1);
  FUN_100642bd8(plVar11,param_1 + 0x1157,1);
  FUN_100642bd8(plVar11,plVar19,1);
  FUN_100642bd8(plVar11,plVar20,1);
  FUN_100642bd8(plVar11,plVar21,1);
  FUN_100642bd8(plVar11,plVar22,1);
  FUN_100642bd8(plVar22,plVar23,1);
  FUN_100642bd8(plVar22,plVar24,1);
  FUN_100642bd8(plVar11,plVar25,1);
  FUN_100642bd8(plVar25,plVar26,1);
  FUN_100642bd8(plVar25,plVar27,1);
  FUN_100642bd8(plVar11,plVar10,1);
  FUN_100642bd8(plVar10,plVar28,1);
  FUN_100642bd8(plVar10,plVar29,1);
  FUN_100642bd8(plVar29,plVar9,1);
  FUN_100642bd8(plVar9,plVar8,1);
  FUN_100642bd8(plVar9,plVar30,1);
  FUN_100642bd8(plVar10,plVar31,1);
  FUN_100642bd8(plVar31,plVar7,1);
  FUN_100642bd8(plVar7,plVar6,1);
  FUN_100642bd8(plVar7,plVar32,1);
  FUN_100642bd8(plVar11,param_1 + 0x1f09,1);
  iVar36 = FUN_100126c88();
  local_c8 = (code *)CONCAT71(local_c8._1_7_,9);
  FUN_100534ebc(plVar1,&local_c8);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar39 = *(uint *)((long)param_1 + 0xd04);
  if ((uVar39 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0xd04) = uVar39 & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar2);
    uVar39 = *(uint *)((long)param_1 + 0xd04);
  }
  *(uint *)((long)param_1 + 0xd04) = uVar39 | 0x10;
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_guild_outline");
  fVar43 = *(float *)(param_1 + 0x1b7);
  if ((fVar43 != 1.5) || (fVar43 = *(float *)((long)param_1 + 0xdbc), fVar43 != 1.5)) {
    lVar42 = NEON_fmov(0x3fc00000,4);
    param_1[0x1b7] = lVar42;
    FUN_1000200a0(plVar3);
  }
  uVar39 = *(uint *)((long)param_1 + 0xdf4);
  if ((uVar39 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0xdf4) = uVar39 & 0xffff8000 | uVar39 & 0x7f | 0x1980;
    FUN_1000200a0(plVar3);
  }
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TEAM_HEADER",0);
  FUN_1006513c0(plVar4,uVar38);
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar36 == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  }
  FUN_100651038(plVar4,*ppuVar34);
  if ((*(uint *)((long)param_1 + 0xee4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0xee4) = *(uint *)((long)param_1 + 0xee4) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar4);
  }
  FUN_100652cac(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar5,&DAT_10115a164,2);
  uVar39 = *(uint *)((long)param_1 + 0x1014);
  if ((uVar39 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1014) = uVar39 & 0xffff8000 | uVar39 & 0x7f | 0x2600;
    FUN_1000200a0(plVar5);
    uVar39 = *(uint *)((long)param_1 + 0x1014);
  }
  *(uint *)((long)param_1 + 0x1014) = uVar39 | 0x10;
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_NAME_FIELD_BLURB",0);
  FUN_1006513c0(param_1 + 0x247,uVar38);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TAG_FIELD_BLURB",0);
  FUN_1006513c0(param_1 + 0x9cf,uVar38);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_MOTTO_FIELD_BLURB",0);
  FUN_1006513c0(param_1 + 0x1157,uVar38);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TYPE_FIELD_BLURB",0);
  FUN_1006513c0(plVar21,uVar38);
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar36 == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651594(plVar12,*ppuVar34,&DAT_10115a168);
  uVar39 = *(uint *)((long)param_1 + 0x118c);
  if ((uVar39 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x118c) = uVar39 & 0xffff8000 | uVar39 & 0x7f | 0xc80;
    FUN_1000200a0(plVar12);
  }
  FUN_1004e3120(&local_c8,"1");
  FUN_1006513c0(plVar12,&local_c8);
  if (local_c0 != (void *)0x0) {
    operator_delete__(local_c0);
  }
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_NAME_FIELD",0);
  FUN_100185730(plVar13,uVar38);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_NAME_CAPTION",0);
  FUN_1001afd98(plVar13,uVar38,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar13,1);
  FUN_100185e38(plVar13,1,3);
  FUN_100185e48(plVar13,1,0x10);
  FUN_100185e70(plVar13,0);
  uVar40 = DAT_101dbd4ac;
  local_a0 = DAT_101dbd4ac;
  local_c8 = thunk_FUN_100294a6c;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x26e,&local_c8);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_NAME_CONFIRM_FIELD",0);
  FUN_100185730(plVar14,uVar38);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_NAME_CAPTION",0);
  FUN_1001afd98(plVar14,uVar38,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar14,1);
  FUN_100185e38(plVar14,1,3);
  FUN_100185e48(plVar14,1,0x10);
  FUN_100185e70(plVar14,0);
  local_a0 = uVar40;
  local_c8 = thunk_FUN_100294a6c;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x60c,&local_c8);
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar36 == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651594(plVar15,*ppuVar34,&DAT_10115a168);
  uVar39 = *(uint *)((long)param_1 + 0x4dcc);
  if ((uVar39 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x4dcc) = uVar39 & 0xffff8000 | uVar39 & 0x7f | 0xc80;
    FUN_1000200a0(plVar15);
  }
  FUN_1004e3120(&local_c8,"2");
  FUN_1006513c0(plVar15,&local_c8);
  if (local_c0 != (long *)0x0) {
    operator_delete__(local_c0);
  }
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TAG_FIELD",0);
  FUN_100185730(plVar16,uVar38);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TAG_CAPTION",0);
  FUN_1001afd98(plVar16,uVar38,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar16,1);
  FUN_100185e38(plVar16,1,2);
  FUN_100185e48(plVar16,1,4);
  FUN_100185e70(plVar16,0);
  local_a0 = uVar40;
  local_c8 = thunk_FUN_100294ad0;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x9f6,&local_c8);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TAG_CONFIRM_FIELD",0);
  FUN_100185730(plVar17,uVar38);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TAG_CAPTION",0);
  FUN_1001afd98(plVar17,uVar38,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar17,1);
  FUN_100185e38(plVar17,1,2);
  FUN_100185e48(plVar17,1,4);
  FUN_100185e70(plVar17,0);
  local_a0 = uVar40;
  local_c8 = thunk_FUN_100294ad0;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0xd94,&local_c8);
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar36 == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651594(plVar18,*ppuVar34,&DAT_10115a168);
  uVar39 = *(uint *)((long)param_1 + 0x8a0c);
  if ((uVar39 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x8a0c) = uVar39 & 0xffff8000 | uVar39 & 0x7f | 0xc80;
    FUN_1000200a0(plVar18);
  }
  FUN_1004e3120(&local_c8,"3");
  FUN_1006513c0(plVar18,&local_c8);
  if (local_c0 != (long *)0x0) {
    operator_delete__(local_c0);
  }
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_MOTTO_FIELD",0);
  FUN_100185730(plVar19,uVar38);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_MOTTO_CAPTION",0);
  FUN_1001afd98(plVar19,uVar38,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e70(plVar19,0);
  FUN_1001b0734(plVar19,0);
  FUN_100185e48(plVar19,1,0x8c);
  FUN_100185e2c(plVar19,0);
  local_a0 = uVar40;
  local_c8 = thunk_FUN_100294b34;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x117e,&local_c8);
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar36 == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651594(plVar20,*ppuVar34,&DAT_10115a168);
  uVar39 = *(uint *)((long)param_1 + 0xa95c);
  if ((uVar39 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0xa95c) = uVar39 & 0xffff8000 | uVar39 & 0x7f | 0xc80;
    FUN_1000200a0(plVar20);
  }
  FUN_1004e3120(&local_c8,"4");
  FUN_1006513c0(plVar20,&local_c8);
  if (local_c0 != (long *)0x0) {
    operator_delete__(local_c0);
  }
  FUN_100652cac(plVar23,PTR_s_build___MenuPartsCommon_tga_101854970,"checkbox_filled");
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar36 == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  ppuVar33 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar36 == 0) {
    ppuVar33 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  FUN_100651594(plVar24,*ppuVar34,&DAT_10115a168);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TYPE_OPEN",0);
  FUN_1006513c0(plVar24,uVar38);
  uVar40 = FUN_1006425d0(plVar22,0,0,1,1);
  local_c8 = (code *)CONCAT44(fVar43,uVar40);
  FUN_10064e48c(plVar22,&local_c8);
  *(uint *)((long)param_1 + 0xabbc) = *(uint *)((long)param_1 + 0xabbc) | 0x10;
  uVar40 = DAT_101dbd458;
  local_a0 = DAT_101dbd458;
  local_c8 = FUN_100293bd8;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x1568,&local_c8);
  uVar35 = DAT_101dbd484;
  local_a0 = DAT_101dbd484;
  local_c8 = FUN_100293bd8;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x1568,&local_c8);
  FUN_100652cac(plVar26,PTR_s_build___MenuPartsCommon_tga_101854970,"checkbox_filled");
  FUN_100651594(plVar27,*ppuVar34,&DAT_10115a168);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TYPE_INVITE_ONLY",0);
  FUN_1006513c0(plVar27,uVar38);
  uVar41 = FUN_1006425d0(plVar25,0,0,1,1);
  local_c8 = (code *)CONCAT44(fVar43,uVar41);
  FUN_10064e48c(plVar25,&local_c8);
  *(uint *)((long)param_1 + 0xae94) = *(uint *)((long)param_1 + 0xae94) | 0x10;
  local_a0 = uVar40;
  local_c8 = FUN_100293bd8;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 1;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x15c3,&local_c8);
  local_a0 = uVar35;
  local_c8 = FUN_100293bd8;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 1;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x15c3,&local_c8);
  uVar38 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x438c0000,plVar28,0,uVar38,&DAT_10115a168,&DAT_101dc1cb8,0);
  uVar40 = DAT_101d91884;
  local_a0 = DAT_101d91884;
  local_c8 = FUN_100293be4;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x162f,&local_c8);
  FUN_1001b4964(plVar28,1);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TEAM",0);
  FUN_1001816d4(0x42480000,0x43480000,0x449c4000,plVar29,0,uVar38,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_a0 = uVar40;
  local_c8 = FUN_100293c2c;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 1;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x18e6,&local_c8);
  FUN_100651038(param_1 + 0x19c8,*ppuVar33);
  FUN_1001b495c(0x3f000000,plVar29);
  if ((*(float *)(param_1 + 0x18ef) != 0.5) || (*(float *)((long)param_1 + 0xc77c) != 0.5)) {
    param_1[0x18ef] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar29);
  }
  FUN_100181b5c(0,0x41f00000,plVar29);
  FUN_100181c68(0x43133333,plVar29);
  FUN_1001b4964(plVar29,1);
  FUN_1001b4c0c(plVar29,0);
  FUN_100652cac(plVar8,PTR_s_build___MenuPartsCommon_tga_101854970,"glory_icon_small");
  if ((*(float *)(param_1 + 0x1be1) != 0.0) || (*(float *)((long)param_1 + 0xdf0c) != 3.0)) {
    param_1[0x1be1] = 0x4040000000000000;
    FUN_1000200a0(plVar8);
  }
  local_c8 = (code *)0x3f00000000000000;
  (**(code **)(*plVar8 + 0x28))(plVar8,&local_c8);
  if ((*(float *)(param_1 + 0x1be2) != 0.9) || (*(float *)((long)param_1 + 0xdf14) != 0.9)) {
    param_1[0x1be2] = 0x3f6666663f666666;
    FUN_1000200a0(plVar8);
  }
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (iVar36 == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
  }
  FUN_100651038(plVar30,*ppuVar34);
  fVar43 = (float)FUN_100652e60(plVar8);
  fVar44 = *(float *)((long)param_1 + 0xdf0c) + -3.0;
  if ((*(float *)(param_1 + 0x1bbb) != fVar43) || (*(float *)((long)param_1 + 0xdddc) != fVar44)) {
    *(float *)(param_1 + 0x1bbb) = fVar43;
    *(float *)((long)param_1 + 0xdddc) = fVar44;
    FUN_1000200a0(plVar30);
  }
  local_c8 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0x1bb3] + 0x28))(plVar30,&local_c8);
  fVar43 = (float)FUN_1006425d0(plVar9,0,0,1,1);
  FUN_1006425d0(plVar9,0,0,1,1);
  fVar44 = fVar44 * -0.5 + 10.0;
  if ((*(float *)(param_1 + 0x1ba4) != fVar43 * -0.5) ||
     (*(float *)((long)param_1 + 0xdd24) != fVar44)) {
    *(float *)(param_1 + 0x1ba4) = fVar43 * -0.5;
    *(float *)((long)param_1 + 0xdd24) = fVar44;
    FUN_1000200a0(plVar9);
  }
  local_c8 = (code *)0x0;
  (**(code **)(*plVar9 + 0x28))(plVar9,&local_c8);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TEAM",0);
  FUN_1001816d4(0x42480000,0x43480000,0x449c4000,plVar31,0,uVar38,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_a0 = uVar40;
  local_c8 = FUN_100293c2c;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0x1bf8,&local_c8);
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar36 == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  FUN_100651038(param_1 + 0x1cda,*ppuVar34);
  FUN_1001b495c(0x3f000000,plVar31);
  if ((*(float *)(param_1 + 0x1c01) != 0.5) || (*(float *)((long)param_1 + 0xe00c) != 0.5)) {
    param_1[0x1c01] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar31);
  }
  FUN_100181b5c(0,0x41f00000,plVar31);
  FUN_100181c68(0x43133333,plVar31);
  FUN_1001b4964(plVar31,1);
  FUN_1001b4c0c(plVar31,0);
  FUN_100652cac(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"ice_icon_small");
  if ((*(float *)(param_1 + 0x1ef3) != 0.0) || (*(float *)((long)param_1 + 0xf79c) != 3.0)) {
    param_1[0x1ef3] = 0x4040000000000000;
    FUN_1000200a0(plVar6);
  }
  local_c8 = (code *)0x3f00000000000000;
  (**(code **)(*plVar6 + 0x28))(plVar6,&local_c8);
  if ((*(float *)(param_1 + 0x1ef4) != 0.9) || (*(float *)((long)param_1 + 0xf7a4) != 0.9)) {
    param_1[0x1ef4] = 0x3f6666663f666666;
    FUN_1000200a0(plVar6);
  }
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (iVar36 == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
  }
  FUN_100651038(plVar32,*ppuVar34);
  fVar43 = (float)FUN_100652e60(plVar6);
  fVar44 = *(float *)((long)param_1 + 0xf79c) + -3.0;
  if ((*(float *)(param_1 + 0x1ecd) != fVar43) || (*(float *)((long)param_1 + 0xf66c) != fVar44)) {
    *(float *)(param_1 + 0x1ecd) = fVar43;
    *(float *)((long)param_1 + 0xf66c) = fVar44;
    FUN_1000200a0(plVar32);
  }
  local_c8 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0x1ec5] + 0x28))(plVar32,&local_c8);
  fVar43 = (float)FUN_1006425d0(plVar7,0,0,1,1);
  FUN_1006425d0(plVar7,0,0,1,1);
  fVar44 = fVar44 * -0.5 + 10.0;
  if ((*(float *)(param_1 + 0x1eb6) != fVar43 * -0.5) ||
     (*(float *)((long)param_1 + 0xf5b4) != fVar44)) {
    *(float *)(param_1 + 0x1eb6) = fVar43 * -0.5;
    *(float *)((long)param_1 + 0xf5b4) = fVar44;
    FUN_1000200a0(plVar7);
  }
  local_c8 = (code *)0x0;
  (**(code **)(*plVar7 + 0x28))(plVar7,&local_c8);
  FUN_100652cdc(plVar23,"checkbox_filled");
  FUN_100652cdc(plVar26,"checkbox_empty");
  *(undefined4 *)(param_1 + 0x1f23) = 0;
  return param_1;
}



/*
 * thunk_FUN_1002926b8
 * VA: 0xthunk_1002926b8 | Source: functions/10029.c:2312
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 20
 * Callees: FUN_10001554c, FUN_1000200a0, FUN_100126c88, FUN_1001816d4, FUN_100181b5c, FUN_100181c68, FUN_100185730, FUN_100185e2c (+39 more)
 * Callers: FUN_1001e9ce8, thunk_FUN_1001e9ce8
 */
long * thunk_FUN_1002926b8(long *param_1)

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
  undefined **ppuVar33;
  undefined **ppuVar34;
  undefined4 uVar35;
  int iVar36;
  undefined8 *puVar37;
  undefined8 uVar38;
  uint uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  long lVar42;
  float fVar43;
  float fVar44;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  
  plVar6 = param_1 + 0x1eeb;
  plVar7 = param_1 + 0x1eae;
  plVar8 = param_1 + 0x1bd9;
  plVar9 = param_1 + 0x1b9c;
  plVar10 = param_1 + 0x161d;
  puVar37 = (undefined8 *)FUN_10064e20c();
  puVar37[0x17] = 0;
  *puVar37 = &PTR_thunk_FUN_100294ff0_10147fea8;
  FUN_1006421a8(puVar37 + 0x18);
  param_1[0x18] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8(param_1 + 0x29);
  param_1[0x29] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x3a;
  thunk_FUN_1005357f4(plVar1);
  FUN_1006421a8(param_1 + 0x17f);
  param_1[0x17f] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar2 = param_1 + 400;
  thunk_FUN_100652c08();
  plVar3 = param_1 + 0x1ae;
  thunk_FUN_100652c08();
  plVar4 = param_1 + 0x1cc;
  thunk_FUN_100650e64();
  plVar5 = param_1 + 0x1f2;
  thunk_FUN_100652c08();
  plVar11 = param_1 + 0x210;
  FUN_1006421a8(plVar11);
  param_1[0x210] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar12 = param_1 + 0x221;
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar13 = param_1 + 0x26d;
  thunk_FUN_100184f78();
  plVar14 = param_1 + 0x60b;
  thunk_FUN_100184f78();
  plVar15 = param_1 + 0x9a9;
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar16 = param_1 + 0x9f5;
  thunk_FUN_100184f78();
  plVar17 = param_1 + 0xd93;
  thunk_FUN_100184f78();
  plVar18 = param_1 + 0x1131;
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar19 = param_1 + 0x117d;
  thunk_FUN_100184f78();
  plVar20 = param_1 + 0x151b;
  thunk_FUN_100650e64();
  plVar21 = param_1 + 0x1541;
  thunk_FUN_100650e64(plVar21);
  plVar22 = param_1 + 0x1567;
  FUN_10064e264(plVar22);
  plVar23 = param_1 + 0x157e;
  thunk_FUN_100652c08();
  plVar24 = param_1 + 0x159c;
  thunk_FUN_100650e64();
  plVar25 = param_1 + 0x15c2;
  FUN_10064e264(plVar25);
  plVar26 = param_1 + 0x15d9;
  thunk_FUN_100652c08();
  plVar27 = param_1 + 0x15f7;
  thunk_FUN_100650e64(plVar27);
  FUN_1006421a8(plVar10);
  *plVar10 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar28 = param_1 + 0x162e;
  thunk_FUN_100181304(plVar28,0);
  plVar29 = param_1 + 0x18e5;
  thunk_FUN_100181304(plVar29,0);
  FUN_10064e264(plVar9);
  plVar30 = param_1 + 0x1bb3;
  thunk_FUN_100650e64();
  thunk_FUN_100652c08(plVar8);
  plVar31 = param_1 + 0x1bf7;
  thunk_FUN_100181304(plVar31,0);
  FUN_10064e264(plVar7);
  plVar32 = param_1 + 0x1ec5;
  thunk_FUN_100650e64();
  thunk_FUN_100652c08(plVar6);
  FUN_10064e264();
  FUN_1004e313c(param_1 + 0x1f20);
  param_1[0x1f22] = -1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100534ad8(plVar1,plVar2,1);
  FUN_100534ad8(plVar1,plVar3,1);
  FUN_100534ad8(plVar1,plVar4,1);
  FUN_100534ad8(plVar1,plVar5,1);
  FUN_100534ad8(plVar1,plVar11,1);
  FUN_100642bd8(plVar11,plVar12,1);
  FUN_100642bd8(plVar11,param_1 + 0x247,1);
  FUN_100642bd8(plVar11,plVar13,1);
  FUN_100642bd8(plVar11,plVar14,1);
  FUN_100642bd8(plVar11,plVar15,1);
  FUN_100642bd8(plVar11,param_1 + 0x9cf,1);
  FUN_100642bd8(plVar11,plVar16,1);
  FUN_100642bd8(plVar11,plVar17,1);
  FUN_100642bd8(plVar11,plVar18,1);
  FUN_100642bd8(plVar11,param_1 + 0x1157,1);
  FUN_100642bd8(plVar11,plVar19,1);
  FUN_100642bd8(plVar11,plVar20,1);
  FUN_100642bd8(plVar11,plVar21,1);
  FUN_100642bd8(plVar11,plVar22,1);
  FUN_100642bd8(plVar22,plVar23,1);
  FUN_100642bd8(plVar22,plVar24,1);
  FUN_100642bd8(plVar11,plVar25,1);
  FUN_100642bd8(plVar25,plVar26,1);
  FUN_100642bd8(plVar25,plVar27,1);
  FUN_100642bd8(plVar11,plVar10,1);
  FUN_100642bd8(plVar10,plVar28,1);
  FUN_100642bd8(plVar10,plVar29,1);
  FUN_100642bd8(plVar29,plVar9,1);
  FUN_100642bd8(plVar9,plVar8,1);
  FUN_100642bd8(plVar9,plVar30,1);
  FUN_100642bd8(plVar10,plVar31,1);
  FUN_100642bd8(plVar31,plVar7,1);
  FUN_100642bd8(plVar7,plVar6,1);
  FUN_100642bd8(plVar7,plVar32,1);
  FUN_100642bd8(plVar11,param_1 + 0x1f09,1);
  iVar36 = FUN_100126c88();
  uStack_c8 = (code *)CONCAT71(uStack_c8._1_7_,9);
  FUN_100534ebc(plVar1,&uStack_c8);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar39 = *(uint *)((long)param_1 + 0xd04);
  if ((uVar39 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0xd04) = uVar39 & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar2);
    uVar39 = *(uint *)((long)param_1 + 0xd04);
  }
  *(uint *)((long)param_1 + 0xd04) = uVar39 | 0x10;
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_guild_outline");
  fVar43 = *(float *)(param_1 + 0x1b7);
  if ((fVar43 != 1.5) || (fVar43 = *(float *)((long)param_1 + 0xdbc), fVar43 != 1.5)) {
    lVar42 = NEON_fmov(0x3fc00000,4);
    param_1[0x1b7] = lVar42;
    FUN_1000200a0(plVar3);
  }
  uVar39 = *(uint *)((long)param_1 + 0xdf4);
  if ((uVar39 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0xdf4) = uVar39 & 0xffff8000 | uVar39 & 0x7f | 0x1980;
    FUN_1000200a0(plVar3);
  }
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TEAM_HEADER",0);
  FUN_1006513c0(plVar4,uVar38);
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar36 == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  }
  FUN_100651038(plVar4,*ppuVar34);
  if ((*(uint *)((long)param_1 + 0xee4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0xee4) = *(uint *)((long)param_1 + 0xee4) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar4);
  }
  FUN_100652cac(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar5,&DAT_10115a164,2);
  uVar39 = *(uint *)((long)param_1 + 0x1014);
  if ((uVar39 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1014) = uVar39 & 0xffff8000 | uVar39 & 0x7f | 0x2600;
    FUN_1000200a0(plVar5);
    uVar39 = *(uint *)((long)param_1 + 0x1014);
  }
  *(uint *)((long)param_1 + 0x1014) = uVar39 | 0x10;
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_NAME_FIELD_BLURB",0);
  FUN_1006513c0(param_1 + 0x247,uVar38);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TAG_FIELD_BLURB",0);
  FUN_1006513c0(param_1 + 0x9cf,uVar38);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_MOTTO_FIELD_BLURB",0);
  FUN_1006513c0(param_1 + 0x1157,uVar38);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TYPE_FIELD_BLURB",0);
  FUN_1006513c0(plVar21,uVar38);
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar36 == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651594(plVar12,*ppuVar34,&DAT_10115a168);
  uVar39 = *(uint *)((long)param_1 + 0x118c);
  if ((uVar39 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x118c) = uVar39 & 0xffff8000 | uVar39 & 0x7f | 0xc80;
    FUN_1000200a0(plVar12);
  }
  FUN_1004e3120(&uStack_c8,"1");
  FUN_1006513c0(plVar12,&uStack_c8);
  if (plStack_c0 != (void *)0x0) {
    operator_delete__(plStack_c0);
  }
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_NAME_FIELD",0);
  FUN_100185730(plVar13,uVar38);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_NAME_CAPTION",0);
  FUN_1001afd98(plVar13,uVar38,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar13,1);
  FUN_100185e38(plVar13,1,3);
  FUN_100185e48(plVar13,1,0x10);
  FUN_100185e70(plVar13,0);
  uVar40 = DAT_101dbd4ac;
  uStack_a0 = DAT_101dbd4ac;
  uStack_c8 = thunk_FUN_100294a6c;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x26e,&uStack_c8);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_NAME_CONFIRM_FIELD",0);
  FUN_100185730(plVar14,uVar38);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_NAME_CAPTION",0);
  FUN_1001afd98(plVar14,uVar38,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar14,1);
  FUN_100185e38(plVar14,1,3);
  FUN_100185e48(plVar14,1,0x10);
  FUN_100185e70(plVar14,0);
  uStack_a0 = uVar40;
  uStack_c8 = thunk_FUN_100294a6c;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x60c,&uStack_c8);
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar36 == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651594(plVar15,*ppuVar34,&DAT_10115a168);
  uVar39 = *(uint *)((long)param_1 + 0x4dcc);
  if ((uVar39 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x4dcc) = uVar39 & 0xffff8000 | uVar39 & 0x7f | 0xc80;
    FUN_1000200a0(plVar15);
  }
  FUN_1004e3120(&uStack_c8,"2");
  FUN_1006513c0(plVar15,&uStack_c8);
  if (plStack_c0 != (long *)0x0) {
    operator_delete__(plStack_c0);
  }
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TAG_FIELD",0);
  FUN_100185730(plVar16,uVar38);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TAG_CAPTION",0);
  FUN_1001afd98(plVar16,uVar38,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar16,1);
  FUN_100185e38(plVar16,1,2);
  FUN_100185e48(plVar16,1,4);
  FUN_100185e70(plVar16,0);
  uStack_a0 = uVar40;
  uStack_c8 = thunk_FUN_100294ad0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x9f6,&uStack_c8);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TAG_CONFIRM_FIELD",0);
  FUN_100185730(plVar17,uVar38);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TAG_CAPTION",0);
  FUN_1001afd98(plVar17,uVar38,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar17,1);
  FUN_100185e38(plVar17,1,2);
  FUN_100185e48(plVar17,1,4);
  FUN_100185e70(plVar17,0);
  uStack_a0 = uVar40;
  uStack_c8 = thunk_FUN_100294ad0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0xd94,&uStack_c8);
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar36 == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651594(plVar18,*ppuVar34,&DAT_10115a168);
  uVar39 = *(uint *)((long)param_1 + 0x8a0c);
  if ((uVar39 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x8a0c) = uVar39 & 0xffff8000 | uVar39 & 0x7f | 0xc80;
    FUN_1000200a0(plVar18);
  }
  FUN_1004e3120(&uStack_c8,"3");
  FUN_1006513c0(plVar18,&uStack_c8);
  if (plStack_c0 != (long *)0x0) {
    operator_delete__(plStack_c0);
  }
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_MOTTO_FIELD",0);
  FUN_100185730(plVar19,uVar38);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_MOTTO_CAPTION",0);
  FUN_1001afd98(plVar19,uVar38,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e70(plVar19,0);
  FUN_1001b0734(plVar19,0);
  FUN_100185e48(plVar19,1,0x8c);
  FUN_100185e2c(plVar19,0);
  uStack_a0 = uVar40;
  uStack_c8 = thunk_FUN_100294b34;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x117e,&uStack_c8);
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar36 == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651594(plVar20,*ppuVar34,&DAT_10115a168);
  uVar39 = *(uint *)((long)param_1 + 0xa95c);
  if ((uVar39 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0xa95c) = uVar39 & 0xffff8000 | uVar39 & 0x7f | 0xc80;
    FUN_1000200a0(plVar20);
  }
  FUN_1004e3120(&uStack_c8,"4");
  FUN_1006513c0(plVar20,&uStack_c8);
  if (plStack_c0 != (long *)0x0) {
    operator_delete__(plStack_c0);
  }
  FUN_100652cac(plVar23,PTR_s_build___MenuPartsCommon_tga_101854970,"checkbox_filled");
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar36 == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  ppuVar33 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar36 == 0) {
    ppuVar33 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  FUN_100651594(plVar24,*ppuVar34,&DAT_10115a168);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TYPE_OPEN",0);
  FUN_1006513c0(plVar24,uVar38);
  uVar40 = FUN_1006425d0(plVar22,0,0,1,1);
  uStack_c8 = (code *)CONCAT44(fVar43,uVar40);
  FUN_10064e48c(plVar22,&uStack_c8);
  *(uint *)((long)param_1 + 0xabbc) = *(uint *)((long)param_1 + 0xabbc) | 0x10;
  uVar40 = DAT_101dbd458;
  uStack_a0 = DAT_101dbd458;
  uStack_c8 = FUN_100293bd8;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x1568,&uStack_c8);
  uVar35 = DAT_101dbd484;
  uStack_a0 = DAT_101dbd484;
  uStack_c8 = FUN_100293bd8;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x1568,&uStack_c8);
  FUN_100652cac(plVar26,PTR_s_build___MenuPartsCommon_tga_101854970,"checkbox_filled");
  FUN_100651594(plVar27,*ppuVar34,&DAT_10115a168);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TYPE_INVITE_ONLY",0);
  FUN_1006513c0(plVar27,uVar38);
  uVar41 = FUN_1006425d0(plVar25,0,0,1,1);
  uStack_c8 = (code *)CONCAT44(fVar43,uVar41);
  FUN_10064e48c(plVar25,&uStack_c8);
  *(uint *)((long)param_1 + 0xae94) = *(uint *)((long)param_1 + 0xae94) | 0x10;
  uStack_a0 = uVar40;
  uStack_c8 = FUN_100293bd8;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 1;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x15c3,&uStack_c8);
  uStack_a0 = uVar35;
  uStack_c8 = FUN_100293bd8;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 1;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x15c3,&uStack_c8);
  uVar38 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x438c0000,plVar28,0,uVar38,&DAT_10115a168,&DAT_101dc1cb8,0);
  uVar40 = DAT_101d91884;
  uStack_a0 = DAT_101d91884;
  uStack_c8 = FUN_100293be4;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x162f,&uStack_c8);
  FUN_1001b4964(plVar28,1);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TEAM",0);
  FUN_1001816d4(0x42480000,0x43480000,0x449c4000,plVar29,0,uVar38,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_a0 = uVar40;
  uStack_c8 = FUN_100293c2c;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 1;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x18e6,&uStack_c8);
  FUN_100651038(param_1 + 0x19c8,*ppuVar33);
  FUN_1001b495c(0x3f000000,plVar29);
  if ((*(float *)(param_1 + 0x18ef) != 0.5) || (*(float *)((long)param_1 + 0xc77c) != 0.5)) {
    param_1[0x18ef] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar29);
  }
  FUN_100181b5c(0,0x41f00000,plVar29);
  FUN_100181c68(0x43133333,plVar29);
  FUN_1001b4964(plVar29,1);
  FUN_1001b4c0c(plVar29,0);
  FUN_100652cac(plVar8,PTR_s_build___MenuPartsCommon_tga_101854970,"glory_icon_small");
  if ((*(float *)(param_1 + 0x1be1) != 0.0) || (*(float *)((long)param_1 + 0xdf0c) != 3.0)) {
    param_1[0x1be1] = 0x4040000000000000;
    FUN_1000200a0(plVar8);
  }
  uStack_c8 = (code *)0x3f00000000000000;
  (**(code **)(*plVar8 + 0x28))(plVar8,&uStack_c8);
  if ((*(float *)(param_1 + 0x1be2) != 0.9) || (*(float *)((long)param_1 + 0xdf14) != 0.9)) {
    param_1[0x1be2] = 0x3f6666663f666666;
    FUN_1000200a0(plVar8);
  }
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (iVar36 == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
  }
  FUN_100651038(plVar30,*ppuVar34);
  fVar43 = (float)FUN_100652e60(plVar8);
  fVar44 = *(float *)((long)param_1 + 0xdf0c) + -3.0;
  if ((*(float *)(param_1 + 0x1bbb) != fVar43) || (*(float *)((long)param_1 + 0xdddc) != fVar44)) {
    *(float *)(param_1 + 0x1bbb) = fVar43;
    *(float *)((long)param_1 + 0xdddc) = fVar44;
    FUN_1000200a0(plVar30);
  }
  uStack_c8 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0x1bb3] + 0x28))(plVar30,&uStack_c8);
  fVar43 = (float)FUN_1006425d0(plVar9,0,0,1,1);
  FUN_1006425d0(plVar9,0,0,1,1);
  fVar44 = fVar44 * -0.5 + 10.0;
  if ((*(float *)(param_1 + 0x1ba4) != fVar43 * -0.5) ||
     (*(float *)((long)param_1 + 0xdd24) != fVar44)) {
    *(float *)(param_1 + 0x1ba4) = fVar43 * -0.5;
    *(float *)((long)param_1 + 0xdd24) = fVar44;
    FUN_1000200a0(plVar9);
  }
  uStack_c8 = (code *)0x0;
  (**(code **)(*plVar9 + 0x28))(plVar9,&uStack_c8);
  uVar38 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TEAM",0);
  FUN_1001816d4(0x42480000,0x43480000,0x449c4000,plVar31,0,uVar38,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_a0 = uVar40;
  uStack_c8 = FUN_100293c2c;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0x1bf8,&uStack_c8);
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar36 == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  FUN_100651038(param_1 + 0x1cda,*ppuVar34);
  FUN_1001b495c(0x3f000000,plVar31);
  if ((*(float *)(param_1 + 0x1c01) != 0.5) || (*(float *)((long)param_1 + 0xe00c) != 0.5)) {
    param_1[0x1c01] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar31);
  }
  FUN_100181b5c(0,0x41f00000,plVar31);
  FUN_100181c68(0x43133333,plVar31);
  FUN_1001b4964(plVar31,1);
  FUN_1001b4c0c(plVar31,0);
  FUN_100652cac(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"ice_icon_small");
  if ((*(float *)(param_1 + 0x1ef3) != 0.0) || (*(float *)((long)param_1 + 0xf79c) != 3.0)) {
    param_1[0x1ef3] = 0x4040000000000000;
    FUN_1000200a0(plVar6);
  }
  uStack_c8 = (code *)0x3f00000000000000;
  (**(code **)(*plVar6 + 0x28))(plVar6,&uStack_c8);
  if ((*(float *)(param_1 + 0x1ef4) != 0.9) || (*(float *)((long)param_1 + 0xf7a4) != 0.9)) {
    param_1[0x1ef4] = 0x3f6666663f666666;
    FUN_1000200a0(plVar6);
  }
  ppuVar34 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (iVar36 == 0) {
    ppuVar34 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
  }
  FUN_100651038(plVar32,*ppuVar34);
  fVar43 = (float)FUN_100652e60(plVar6);
  fVar44 = *(float *)((long)param_1 + 0xf79c) + -3.0;
  if ((*(float *)(param_1 + 0x1ecd) != fVar43) || (*(float *)((long)param_1 + 0xf66c) != fVar44)) {
    *(float *)(param_1 + 0x1ecd) = fVar43;
    *(float *)((long)param_1 + 0xf66c) = fVar44;
    FUN_1000200a0(plVar32);
  }
  uStack_c8 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0x1ec5] + 0x28))(plVar32,&uStack_c8);
  fVar43 = (float)FUN_1006425d0(plVar7,0,0,1,1);
  FUN_1006425d0(plVar7,0,0,1,1);
  fVar44 = fVar44 * -0.5 + 10.0;
  if ((*(float *)(param_1 + 0x1eb6) != fVar43 * -0.5) ||
     (*(float *)((long)param_1 + 0xf5b4) != fVar44)) {
    *(float *)(param_1 + 0x1eb6) = fVar43 * -0.5;
    *(float *)((long)param_1 + 0xf5b4) = fVar44;
    FUN_1000200a0(plVar7);
  }
  uStack_c8 = (code *)0x0;
  (**(code **)(*plVar7 + 0x28))(plVar7,&uStack_c8);
  FUN_100652cdc(plVar23,"checkbox_filled");
  FUN_100652cdc(plVar26,"checkbox_empty");
  *(undefined4 *)(param_1 + 0x1f23) = 0;
  return param_1;
}



/*
 * FUN_100294c7c
 * VA: 0x100294c7c | Source: functions/10029.c:3390
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 10
 * Callees: FUN_1001e3120, FUN_1004e0150, FUN_1004e3120, FUN_1004e313c, FUN_1004e38ac, FUN_1004e3bc4, thunk_FUN_100294e70, thunk_FUN_100294f00 (+1 more)
 * Callers: FUN_100293c2c
 */
void FUN_100294c7c(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  if (param_3 == 1) {
    if (*(int *)(param_1 + 0xf910) == -1) {
      return;
    }
    FUN_1004e313c(auStack_40);
    FUN_1004e38ac(auStack_40,"%d");
    uVar1 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_GLORY_DIALOG_TEXT",0);
    thunk_FUN_1004e439c(auStack_50,uVar1);
    FUN_1004e3120(auStack_60,"[COST]");
    FUN_1004e3bc4(auStack_50,0,auStack_60,auStack_40);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    uVar1 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TITLE",0);
    uVar2 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    uVar3 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
    pcVar4 = thunk_FUN_100294f00;
  }
  else {
    if (param_3 != 0) {
      return;
    }
    if (*(int *)(param_1 + 0xf914) == -1) {
      return;
    }
    FUN_1004e313c(auStack_40);
    FUN_1004e38ac(auStack_40,"%d");
    uVar1 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_ICE_DIALOG_TEXT",0);
    thunk_FUN_1004e439c(auStack_50,uVar1);
    FUN_1004e3120(auStack_60,"[COST]");
    FUN_1004e3bc4(auStack_50,0,auStack_60,auStack_40);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    uVar1 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TITLE",0);
    uVar2 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    uVar3 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
    pcVar4 = thunk_FUN_100294e70;
  }
  FUN_1001e3120(uVar1,auStack_50,uVar2,uVar3,param_1,pcVar4,0);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}



/*
 * FUN_10029c8b8
 * VA: 0x10029c8b8 | Source: functions/10029.c:9267
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 2, Vis masks: 1
 * Callees: FUN_10001554c, FUN_10010b098, FUN_10010b1a8, FUN_1001816d4, FUN_100185730, FUN_100185e2c, FUN_100185e38, FUN_100185e48 (+22 more)
 */
long * FUN_10029c8b8(long *param_1)

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
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 local_a8;
  undefined8 uStack_a0;
  code *local_98;
  long *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  puVar15 = (undefined8 *)FUN_10064f204();
  puVar15[0x29] = 0;
  *puVar15 = &PTR_thunk_FUN_10029d220_101481250;
  thunk_FUN_1001c81d8();
  plVar1 = param_1 + 0x184;
  FUN_100650334(plVar1);
  plVar2 = param_1 + 0x1b1;
  thunk_FUN_100184f78();
  plVar3 = param_1 + 0x54f;
  thunk_FUN_100184f78(plVar3);
  plVar4 = param_1 + 0x8ed;
  thunk_FUN_100184f78();
  plVar5 = param_1 + 0xc8b;
  FUN_100650334(plVar5);
  plVar6 = param_1 + 0xcb8;
  thunk_FUN_100184f78();
  plVar7 = param_1 + 0x1056;
  thunk_FUN_100184f78();
  plVar8 = param_1 + 0x13f4;
  thunk_FUN_100184f78();
  plVar9 = param_1 + 0x1792;
  thunk_FUN_100650e64(plVar9);
  plVar10 = param_1 + 0x17b8;
  FUN_100650334(plVar10);
  plVar11 = param_1 + 0x17e5;
  thunk_FUN_100184f78(plVar11);
  plVar12 = param_1 + 0x1b83;
  thunk_FUN_100184f78(plVar12);
  plVar13 = param_1 + 0x1f21;
  thunk_FUN_100184f78(plVar13);
  plVar14 = param_1 + 0x22bf;
  thunk_FUN_100181304(plVar14,0);
  *(undefined4 *)(param_1 + 0x2576) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar15 + 0x2a,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100655930(plVar1,plVar2,1);
  FUN_100655930(plVar1,plVar3,1);
  FUN_100655930(plVar1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  FUN_100655930(plVar5,plVar6,1);
  FUN_100655930(plVar5,plVar7,1);
  FUN_100655930(plVar5,plVar8,1);
  FUN_100655930(plVar5,plVar9,1);
  FUN_100655930(plVar5,plVar10,1);
  FUN_100655930(plVar10,plVar13,1);
  FUN_100655930(plVar10,plVar12,1);
  FUN_100655930(plVar10,plVar11,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar14,1);
  local_a8 = 0;
  uStack_a0 = 0;
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_CHINESE_TAB",0);
  FUN_10010b098(&local_a8,uVar16);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FOREIGNER_TAB",0);
  FUN_10010b098(&local_a8,uVar16);
  FUN_1001c88a4(0x41f00000,0x43c80000,0,0x3f800000,0x3f800000,puVar15 + 0x2a,&local_a8);
  local_70 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  local_98 = FUN_10029d198;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  FUN_10001554c(param_1 + 0x2b,&local_98);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_NAME",0);
  FUN_100185730(plVar2,uVar16);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_NAME",0);
  FUN_1001afd98(plVar2,uVar16,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,1);
  FUN_100185e2c(plVar2,1);
  FUN_100185e48(plVar2,1,0x20);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_CHINA_ID",0);
  FUN_100185730(plVar3,uVar16);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_CHINA_ID",0);
  FUN_1001afd98(plVar3,uVar16,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,1);
  FUN_100185e2c(plVar3,1);
  FUN_100185eac(plVar3,FUN_10029d1c4);
  FUN_100185e48(plVar3,1,0x12);
  FUN_100185e38(plVar3,1,0x12);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_PHONE",0);
  FUN_100185730(plVar4,uVar16);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_PHONE",0);
  FUN_1001afd98(plVar4,uVar16,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,1);
  FUN_100185e48(plVar4,1,0x20);
  FUN_100185e38(plVar4,1,8);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_NAME",0);
  FUN_100185730(plVar6,uVar16);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_NAME",0);
  FUN_1001afd98(plVar6,uVar16,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,1);
  FUN_100185e48(plVar6,1,0x40);
  FUN_100185e38(plVar6,1,2);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_PASSPORT",0);
  FUN_100185730(plVar7,uVar16);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_PASSPORT",0);
  FUN_1001afd98(plVar7,uVar16,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,1);
  FUN_100185e58(plVar7,1);
  FUN_100185e48(plVar7,1,0x40);
  FUN_100185e38(plVar7,1,2);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_PHONE",0);
  FUN_100185730(plVar8,uVar16);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_PHONE",0);
  FUN_1001afd98(plVar8,uVar16,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,1);
  FUN_100185e70(plVar8,1);
  FUN_100185e48(plVar8,1,0x40);
  FUN_100185e38(plVar8,1,2);
  FUN_100651594(plVar9,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230,&DAT_10115a168);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_DOB",0);
  FUN_1006513c0(plVar9,uVar16);
  FUN_1004e3120(&local_98,"1900");
  FUN_100185730(plVar13,&local_98);
  if (local_90 != (long *)0x0) {
    operator_delete__(local_90);
  }
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_DOB",0);
  FUN_1001afd98(plVar13,uVar16,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,1);
  FUN_100185e64(plVar13,1);
  FUN_100185e48(plVar13,1,4);
  FUN_100185e38(plVar13,1,4);
  FUN_1004e3120(&local_98,"12");
  FUN_100185730(plVar12,&local_98);
  if (local_90 != (long *)0x0) {
    operator_delete__(local_90);
  }
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_DOB",0);
  FUN_1001afd98(plVar12,uVar16,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,1);
  FUN_100185e64(plVar12,1);
  FUN_100185e48(plVar12,1,2);
  FUN_100185e38(plVar12,1,1);
  FUN_1004e3120(&local_98,"31");
  FUN_100185730(plVar11,&local_98);
  if (local_90 != (long *)0x0) {
    operator_delete__(local_90);
  }
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_DOB",0);
  FUN_1001afd98(plVar11,uVar16,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,1);
  FUN_100185e64(plVar11,1);
  FUN_100185e48(plVar11,1,2);
  FUN_100185e38(plVar11,1,1);
  *(uint *)((long)param_1 + 0x64dc) = *(uint *)((long)param_1 + 0x64dc) & 0xfffffffb;
  uVar16 = FUN_1004e0150("MENU_PROFILE_EDIT_SUBMIT_TYPE",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x447a0000,plVar14,0,uVar16,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_70 = DAT_101d91884;
  local_98 = thunk_FUN_10029dba8;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  FUN_10001554c(param_1 + 0x22c0,&local_98);
  FUN_10010b1a8(&local_a8,1);
  return param_1;
}



/*
 * thunk_FUN_10029c8b8
 * VA: 0xthunk_10029c8b8 | Source: functions/10029.c:9577
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 2, Vis masks: 1
 * Callees: FUN_10001554c, FUN_10010b098, FUN_10010b1a8, FUN_1001816d4, FUN_100185730, FUN_100185e2c, FUN_100185e38, FUN_100185e48 (+22 more)
 * Callers: FUN_1001f03cc
 */
long * thunk_FUN_10029c8b8(long *param_1)

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
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  puVar15 = (undefined8 *)FUN_10064f204();
  puVar15[0x29] = 0;
  *puVar15 = &PTR_thunk_FUN_10029d220_101481250;
  thunk_FUN_1001c81d8();
  plVar1 = param_1 + 0x184;
  FUN_100650334(plVar1);
  plVar2 = param_1 + 0x1b1;
  thunk_FUN_100184f78();
  plVar3 = param_1 + 0x54f;
  thunk_FUN_100184f78(plVar3);
  plVar4 = param_1 + 0x8ed;
  thunk_FUN_100184f78();
  plVar5 = param_1 + 0xc8b;
  FUN_100650334(plVar5);
  plVar6 = param_1 + 0xcb8;
  thunk_FUN_100184f78();
  plVar7 = param_1 + 0x1056;
  thunk_FUN_100184f78();
  plVar8 = param_1 + 0x13f4;
  thunk_FUN_100184f78();
  plVar9 = param_1 + 0x1792;
  thunk_FUN_100650e64(plVar9);
  plVar10 = param_1 + 0x17b8;
  FUN_100650334(plVar10);
  plVar11 = param_1 + 0x17e5;
  thunk_FUN_100184f78(plVar11);
  plVar12 = param_1 + 0x1b83;
  thunk_FUN_100184f78(plVar12);
  plVar13 = param_1 + 0x1f21;
  thunk_FUN_100184f78(plVar13);
  plVar14 = param_1 + 0x22bf;
  thunk_FUN_100181304(plVar14,0);
  *(undefined4 *)(param_1 + 0x2576) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar15 + 0x2a,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100655930(plVar1,plVar2,1);
  FUN_100655930(plVar1,plVar3,1);
  FUN_100655930(plVar1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  FUN_100655930(plVar5,plVar6,1);
  FUN_100655930(plVar5,plVar7,1);
  FUN_100655930(plVar5,plVar8,1);
  FUN_100655930(plVar5,plVar9,1);
  FUN_100655930(plVar5,plVar10,1);
  FUN_100655930(plVar10,plVar13,1);
  FUN_100655930(plVar10,plVar12,1);
  FUN_100655930(plVar10,plVar11,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar14,1);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_CHINESE_TAB",0);
  FUN_10010b098(&uStack_a8,uVar16);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FOREIGNER_TAB",0);
  FUN_10010b098(&uStack_a8,uVar16);
  FUN_1001c88a4(0x41f00000,0x43c80000,0,0x3f800000,0x3f800000,puVar15 + 0x2a,&uStack_a8);
  uStack_70 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  pcStack_98 = FUN_10029d198;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x2b,&pcStack_98);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_NAME",0);
  FUN_100185730(plVar2,uVar16);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_NAME",0);
  FUN_1001afd98(plVar2,uVar16,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,1);
  FUN_100185e2c(plVar2,1);
  FUN_100185e48(plVar2,1,0x20);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_CHINA_ID",0);
  FUN_100185730(plVar3,uVar16);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_CHINA_ID",0);
  FUN_1001afd98(plVar3,uVar16,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,1);
  FUN_100185e2c(plVar3,1);
  FUN_100185eac(plVar3,FUN_10029d1c4);
  FUN_100185e48(plVar3,1,0x12);
  FUN_100185e38(plVar3,1,0x12);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_PHONE",0);
  FUN_100185730(plVar4,uVar16);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_PHONE",0);
  FUN_1001afd98(plVar4,uVar16,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,1);
  FUN_100185e48(plVar4,1,0x20);
  FUN_100185e38(plVar4,1,8);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_NAME",0);
  FUN_100185730(plVar6,uVar16);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_NAME",0);
  FUN_1001afd98(plVar6,uVar16,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,1);
  FUN_100185e48(plVar6,1,0x40);
  FUN_100185e38(plVar6,1,2);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_PASSPORT",0);
  FUN_100185730(plVar7,uVar16);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_PASSPORT",0);
  FUN_1001afd98(plVar7,uVar16,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,1);
  FUN_100185e58(plVar7,1);
  FUN_100185e48(plVar7,1,0x40);
  FUN_100185e38(plVar7,1,2);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_PHONE",0);
  FUN_100185730(plVar8,uVar16);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_PHONE",0);
  FUN_1001afd98(plVar8,uVar16,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,1);
  FUN_100185e70(plVar8,1);
  FUN_100185e48(plVar8,1,0x40);
  FUN_100185e38(plVar8,1,2);
  FUN_100651594(plVar9,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230,&DAT_10115a168);
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_DOB",0);
  FUN_1006513c0(plVar9,uVar16);
  FUN_1004e3120(&pcStack_98,"1900");
  FUN_100185730(plVar13,&pcStack_98);
  if (plStack_90 != (long *)0x0) {
    operator_delete__(plStack_90);
  }
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_DOB",0);
  FUN_1001afd98(plVar13,uVar16,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,1);
  FUN_100185e64(plVar13,1);
  FUN_100185e48(plVar13,1,4);
  FUN_100185e38(plVar13,1,4);
  FUN_1004e3120(&pcStack_98,"12");
  FUN_100185730(plVar12,&pcStack_98);
  if (plStack_90 != (long *)0x0) {
    operator_delete__(plStack_90);
  }
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_DOB",0);
  FUN_1001afd98(plVar12,uVar16,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,1);
  FUN_100185e64(plVar12,1);
  FUN_100185e48(plVar12,1,2);
  FUN_100185e38(plVar12,1,1);
  FUN_1004e3120(&pcStack_98,"31");
  FUN_100185730(plVar11,&pcStack_98);
  if (plStack_90 != (long *)0x0) {
    operator_delete__(plStack_90);
  }
  uVar16 = FUN_1004e0150("GOVERNMENT_ID_FORM_DOB",0);
  FUN_1001afd98(plVar11,uVar16,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,1);
  FUN_100185e64(plVar11,1);
  FUN_100185e48(plVar11,1,2);
  FUN_100185e38(plVar11,1,1);
  *(uint *)((long)param_1 + 0x64dc) = *(uint *)((long)param_1 + 0x64dc) & 0xfffffffb;
  uVar16 = FUN_1004e0150("MENU_PROFILE_EDIT_SUBMIT_TYPE",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x447a0000,plVar14,0,uVar16,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_70 = DAT_101d91884;
  pcStack_98 = thunk_FUN_10029dba8;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x22c0,&pcStack_98);
  FUN_10010b1a8(&uStack_a8,1);
  return param_1;
}



/*
 * FUN_1003355a0
 * VA: 0x1003355a0 | Source: functions/10033.c:3613
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 3
 * Callees: FUN_1000153b4, FUN_100181af8, FUN_1001cd23c, FUN_1002340fc, FUN_1004e0150, FUN_1006515d0, FUN_100652cdc
 */
void FUN_1003355a0(long param_1)

{
  undefined8 uVar1;
  
  std::string::operator=((string *)(param_1 + 0x5d90),(string *)&DAT_101d238b0);
  uVar1 = FUN_1004e0150("MENU_PROFILE_ASCENSION_DAILY_REWARD_TITLE",0);
  FUN_1000153b4(param_1 + 0x5d38,uVar1);
  *(undefined4 *)(param_1 + 0x5d68) = 0xffffffff;
  FUN_1006515d0(param_1 + 0x36e8,1);
  FUN_1002340fc(0x3ecccccd,param_1 + 0x580);
  FUN_100652cdc(param_1 + 0x35f8,"chest_battered_closed");
  uVar1 = FUN_1004e0150("MENU_MARKET_DAILY_CHEST_TIMER",0);
  FUN_1001cd23c(param_1 + 0x36e8,uVar1,1,0);
  uVar1 = FUN_1004e0150("GENERIC_DIALOG_OPEN",0);
  FUN_100181af8(param_1 + 0xf78,uVar1);
  return;
}
