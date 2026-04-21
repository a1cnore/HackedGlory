// functions/00ace — 2 functions
#include "libGameKindred.h"




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ace014(undefined1 param_1 [16],float param_2,long *param_3)

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
  float *pfVar33;
  uint uVar34;
  undefined4 uVar35;
  long lVar36;
  undefined8 uVar37;
  long lVar38;
  code *local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  long local_80;
  
  lVar36 = tpidr_el0;
  local_80 = *(long *)(lVar36 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_3 + 0x17;
  *param_3 = (long)&PTR_FUN_027d71a0;
  FUN_00f017e8();
  plVar2 = param_3 + 0x28;
  param_3[0x17] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8();
  plVar3 = param_3 + 0x46;
  FUN_00f0e4a8();
  plVar4 = param_3 + 100;
  FUN_00f0e4a8();
  plVar5 = param_3 + 0x82;
  FUN_00f0e4a8();
  plVar6 = param_3 + 0xa0;
  FUN_00f0e4a8();
  plVar7 = param_3 + 0xbe;
  FUN_00f0e4a8();
  plVar8 = param_3 + 0xdc;
  FUN_00f017e8(plVar8);
  plVar9 = param_3 + 0xed;
  param_3[0xdc] = (long)&PTR_FUN_027c1f80;
  FUN_00f017e8();
  plVar10 = param_3 + 0xfe;
  param_3[0xed] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8();
  plVar11 = param_3 + 0x11c;
  FUN_00f0e4a8();
  plVar12 = param_3 + 0x13a;
  FUN_00f0d160();
  plVar13 = param_3 + 0x160;
  FUN_00f017e8();
  plVar14 = param_3 + 0x171;
  param_3[0x160] = (long)&PTR_FUN_027c1f80;
  FUN_00acd4d4(plVar14,0);
  plVar15 = param_3 + 0x28a;
  FUN_00f0e4a8();
  plVar16 = param_3 + 0x2a8;
  FUN_00f0d160();
  plVar17 = param_3 + 0x2ce;
  FUN_00f017e8(plVar17);
  plVar18 = param_3 + 0x2df;
  param_3[0x2ce] = (long)&PTR_FUN_027c1f80;
  FUN_00ac5ab8(plVar18,0);
  plVar19 = param_3 + 0x460;
  FUN_00f0d160();
  plVar20 = param_3 + 0x486;
  FUN_00f0d160();
  plVar21 = param_3 + 0x4ac;
  FUN_00abaee8(plVar21,0);
  FUN_00f017e8();
  plVar22 = param_3 + 0x57c;
  param_3[0x56b] = (long)&PTR_FUN_027c1f80;
  FUN_00f0bdbc(plVar22,0);
  param_3[0x57c] = (long)&PTR_FUN_027c3260;
  FUN_00f13ca4();
  plVar23 = param_3 + 0x5ac;
  FUN_00f0bdbc(plVar23,1);
  plVar24 = param_3 + 0x5c5;
  param_3[0x5ac] = (long)&PTR_FUN_027ccd08;
  FUN_00f0d160(plVar24);
  FUN_00f0bdbc(param_3 + 0x5eb,0);
  plVar25 = param_3 + 0x604;
  param_3[0x5eb] = (long)&PTR_FUN_027c3260;
  FUN_00f0d160(plVar25);
  plVar26 = param_3 + 0x62a;
  FUN_00f13ca4();
  plVar27 = param_3 + 0x641;
  FUN_00f0d160(plVar27);
  FUN_00f0e4a8();
  plVar28 = param_3 + 0x685;
  FUN_00f0d160();
  FUN_00b1d5d8();
  FUN_00f017e8();
  plVar29 = param_3 + 0x736;
  param_3[0x725] = (long)&PTR_FUN_027c1f80;
  FUN_00f0d160();
  plVar30 = param_3 + 0x75c;
  FUN_00ab6c24(plVar30,0);
  plVar31 = param_3 + 0xa14;
  FUN_00abaee8(plVar31,0);
  plVar32 = param_3 + 0xad3;
  FUN_00abaee8(plVar32,0);
  memset(param_3 + 0xba1,0,0xd8);
  memset(param_3 + 0xb92,0,0x60);
  FUN_00954ec0(param_3 + 0xba0);
  FUN_00954d1c(param_3 + 0xb92);
  param_3[0xbbf] = 0;
  param_3[0xbbe] = 0;
  param_3[0xbbd] = 0;
  lVar38 = _DAT_03218ef8;
  param_3[0xbc1] = 0x3ecccccd;
  param_3[0xbc0] = lVar38;
  *(undefined4 *)(param_3 + 0xbc2) = 0x10000;
  (**(code **)(*param_3 + 0x78))(param_3,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,plVar5,1);
  FUN_00f023ec(plVar1,plVar6,1);
  FUN_00f023ec(plVar1,plVar7,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar8,1);
  FUN_00f023ec(plVar8,plVar13,1);
  FUN_00f023ec(plVar13,plVar14,1);
  FUN_00f023ec(plVar13,plVar15,1);
  FUN_00f023ec(plVar13,plVar16,1);
  FUN_00f023ec(plVar8,plVar9,1);
  FUN_00f023ec(plVar9,plVar10,1);
  FUN_00f023ec(plVar9,plVar11,1);
  FUN_00f023ec(plVar9,plVar12,1);
  FUN_00f023ec(plVar8,plVar17,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar3,1);
  FUN_00f023ec(plVar17,plVar18,1);
  FUN_00f023ec(plVar17,plVar19,1);
  FUN_00f023ec(plVar17,plVar20,1);
  FUN_00f023ec(plVar17,plVar21,1);
  FUN_00f023ec(plVar8,param_3 + 0x56b,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar4,1);
  FUN_00f023ec(param_3 + 0x56b,plVar22,1);
  FUN_00f023ec(plVar22,param_3 + 0x595,1);
  FUN_00f023ec(param_3 + 0x595,plVar23,1);
  FUN_00f023ec(plVar23,plVar24,1);
  FUN_00f023ec(plVar23,plVar25,1);
  FUN_00f023ec(plVar22,plVar26,1);
  FUN_00f023ec(plVar26,plVar27,1);
  FUN_00f023ec(plVar26,param_3 + 0x6ab,1);
  FUN_00f023ec(plVar8,plVar30,1);
  FUN_00f023ec(plVar8,plVar31,1);
  FUN_00f023ec(plVar8,plVar32,1);
  (**(code **)(*param_3 + 0x78))(param_3,param_3 + 0x725,1);
  FUN_00f023ec(param_3 + 0x725,plVar29,1);
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
  local_b0 = (code *)CONCAT44(local_b0._4_4_,0xff2e1e1c);
  FUN_00f0e670(plVar2,&local_b0,2);
  uVar34 = *(uint *)((long)param_3 + 0x1c4);
  if ((uVar34 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_3 + 0x1c4) = uVar34 & 0xffff8000 | uVar34 & 0x7f | 0x2600;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar3,&DAT_01bee7f6,2);
  uVar34 = *(uint *)((long)param_3 + 0x2b4);
  if ((uVar34 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_3 + 0x2b4) = uVar34 & 0xffff8000 | uVar34 & 0x7f | 0x2600;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0e548(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar4,&DAT_01bee7f6,2);
  uVar34 = *(uint *)((long)param_3 + 0x3a4);
  if ((uVar34 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_3 + 0x3a4) = uVar34 & 0xffff8000 | uVar34 & 0x7f | 0x2600;
    FUN_0091ada4(plVar4);
  }
  FUN_00f0e548(plVar5,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  uVar34 = *(uint *)((long)param_3 + 0x494);
  if ((uVar34 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_3 + 0x494) = uVar34 & 0xffff8000 | uVar34 & 0x7f | 0x5900;
    FUN_0091ada4(plVar5);
  }
  FUN_00f0e548(plVar6,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
  uVar34 = *(uint *)((long)param_3 + 0x584);
  if ((uVar34 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_3 + 0x584) = uVar34 & 0xffff8000 | uVar34 & 0x7f | 0x5900;
    FUN_0091ada4(plVar6);
  }
  FUN_00f0e548(plVar7,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
  uVar34 = *(uint *)((long)param_3 + 0x674);
  if ((uVar34 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_3 + 0x674) = uVar34 & 0xffff8000 | uVar34 & 0x7f | 0x5900;
    FUN_0091ada4(plVar7);
  }
  *(uint *)((long)param_3 + 0x764) = *(uint *)((long)param_3 + 0x764) & 0xfffffffb;
  FUN_00f0e548(plVar10,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_star");
  if ((*(uint *)((long)param_3 + 0x874) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_3 + 0x874) = *(uint *)((long)param_3 + 0x874) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar10);
  }
  FUN_00f0e548(plVar11,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_star");
  if ((*(uint *)((long)param_3 + 0x964) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_3 + 0x964) = *(uint *)((long)param_3 + 0x964) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar11);
  }
  FUN_00f0d378(plVar12,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  uVar34 = *(uint *)((long)param_3 + 0xa54);
  if ((uVar34 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_3 + 0xa54) = uVar34 & 0xffff8000 | uVar34 & 0x7f | 0x5900;
    FUN_0091ada4(plVar12);
  }
  uVar37 = FUN_00e6ce7c("MENU_GUILD_SEARCH_TILE_INVITE_LABEL",0);
  FUN_00f0d75c(plVar12,uVar37);
  FUN_00f0e548(plVar15,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_group");
  if ((*(uint *)((long)param_3 + 0x14d4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_3 + 0x14d4) = *(uint *)((long)param_3 + 0x14d4) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar15);
  }
  FUN_00f0d378(plVar16,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  uVar34 = *(uint *)((long)param_3 + 0x15c4);
  if ((uVar34 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_3 + 0x15c4) = uVar34 & 0xffff8000 | uVar34 & 0x7f | 0x5900;
    FUN_0091ada4(plVar16);
  }
  FUN_00f0da30(plVar16,1);
  FUN_00f0da80(plVar16,&DAT_01bee7f6);
  local_b0 = (code *)0x4000000040000000;
  FUN_00f0da8c(plVar16,&local_b0);
  FUN_00acd7d8(plVar14);
  FUN_00f0d378(plVar19,PTR_s_build___Fonts_NorthwoodHigh_Regu_02be9cd8);
  uVar34 = *(uint *)((long)param_3 + 0x2384);
  if ((uVar34 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_3 + 0x2384) = uVar34 & 0xffff8000 | uVar34 & 0x7f | 0x7280;
    FUN_0091ada4(plVar19);
  }
  FUN_00f0d378(plVar20,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  uVar34 = *(uint *)((long)param_3 + 0x24b4);
  if ((uVar34 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_3 + 0x24b4) = uVar34 & 0xffff8000 | uVar34 & 0x7f | 0x6600;
    FUN_0091ada4(plVar20);
  }
  FUN_00ac5da8(plVar18,PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10);
  if ((*(float *)(param_3 + 0x2e8) != 0.8) || (*(float *)((long)param_3 + 0x1744) != 0.8)) {
    param_3[0x2e8] = 0x3f4ccccd3f4ccccd;
    FUN_0091ada4(plVar18);
  }
  FUN_00f0e578(param_3 + 0x547,"circle_button_question");
  uVar34 = *(uint *)((long)param_3 + 0x25e4);
  if ((uVar34 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_3 + 0x25e4) = uVar34 & 0xffff8000 | uVar34 & 0x7f | 0x5f80;
    FUN_0091ada4(plVar21);
  }
  FUN_00abb1f0(0x3f4ccccd,plVar21,&DAT_01bee7f6);
  FUN_00b09144(0xbf800000,plVar21);
  FUN_00f13e54(plVar21);
  param_2 = 72.0 / param_2;
  if ((*(float *)(param_3 + 0x4b5) != param_2) || (*(float *)((long)param_3 + 0x25ac) != param_2)) {
    *(float *)(param_3 + 0x4b5) = param_2;
    *(float *)((long)param_3 + 0x25ac) = param_2;
    FUN_0091ada4(plVar21);
  }
  uVar35 = DAT_03210c64;
  local_b0 = thunk_FUN_00ad0a48;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  local_a8 = param_3;
  local_88 = uVar35;
  FUN_009693a0(param_3 + 0x4ad,&local_b0);
  FUN_00f0d378(plVar24,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  uVar34 = *(uint *)((long)param_3 + 0x2eac);
  if ((uVar34 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_3 + 0x2eac) = uVar34 & 0xffff8000 | uVar34 & 0x7f | 0x2600;
    FUN_0091ada4(plVar24);
  }
  uVar37 = FUN_00e6ce7c("MENU_GUILD_SEARCH_TILE_PRIMETIME_GROUP_LABEL",0);
  FUN_00f0d75c(plVar24,uVar37);
  FUN_00f0d378(plVar25,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  uVar34 = *(uint *)((long)param_3 + 0x30a4);
  if ((uVar34 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_3 + 0x30a4) = uVar34 & 0xffff8000 | uVar34 & 0x7f | 0x6600;
    FUN_0091ada4(plVar25);
  }
  *(uint *)((long)param_3 + 0x31d4) = *(uint *)((long)param_3 + 0x31d4) & 0xfffffffb;
  FUN_00f0d378(plVar27,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  uVar34 = *(uint *)((long)param_3 + 0x328c);
  if ((uVar34 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_3 + 0x328c) = uVar34 & 0xffff8000 | uVar34 & 0x7f | 0x2600;
    FUN_0091ada4(plVar27);
  }
  uVar37 = FUN_00e6ce7c("MENU_GUILD_SEARCH_TILE_REQUIRED_LABEL",0);
  FUN_00f0d75c(plVar27,uVar37);
  FUN_00f0e548(param_3 + 0x667,PTR_s_build___MenuPartsCommon_tga_02be3530,"ranked_levelIcon");
  uVar34 = *(uint *)((long)param_3 + 0x33bc);
  if ((uVar34 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_3 + 0x33bc) = uVar34 & 0xffff8000 | uVar34 & 0x7f | 0x6600;
    FUN_0091ada4(param_3 + 0x667);
  }
  FUN_00f0d378(plVar28,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  uVar34 = *(uint *)((long)param_3 + 0x34ac);
  if ((uVar34 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_3 + 0x34ac) = uVar34 & 0xffff8000 | uVar34 & 0x7f | 0x6600;
    FUN_0091ada4(plVar28);
  }
  FUN_00e705c8(&local_b0,"0");
  FUN_00f0d75c(plVar28,&local_b0);
  if (local_a8 != (long *)0x0) {
    operator_delete__(local_a8);
    local_b0 = (code *)0x0;
    local_a8 = (long *)0x0;
  }
  uVar37 = FUN_00e6ce7c("MENU_GUILD_SEARCH_TILE_INFO_BUTTON_LABEL",0);
  FUN_00ab703c(0x42000000,0x42c80000,0x446b0000,plVar30,0,uVar37,&DAT_01bee7fa,&DAT_03218ef8,0);
  local_b0 = thunk_FUN_00ad0f00;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  local_a8 = param_3;
  local_88 = uVar35;
  FUN_009693a0(param_3 + 0x75d,&local_b0);
  FUN_00f0e578(param_3 + 0xaaf,"generic_x");
  *(uint *)((long)param_3 + 0x550c) = *(uint *)((long)param_3 + 0x550c) & 0xfffffffb;
  uVar34 = *(uint *)((long)param_3 + 0x5124);
  if ((uVar34 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_3 + 0x5124) = uVar34 & 0xffff8000 | uVar34 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar31);
  }
  pfVar33 = (float *)(param_3 + 0xa1d);
  if ((*pfVar33 != 1.4) || (*(float *)((long)param_3 + 0x50ec) != 1.4)) {
    pfVar33[0] = 1.4;
    pfVar33[1] = 1.4;
    FUN_0091ada4(plVar31);
  }
  lVar38 = NEON_fmov(0xc0a00000,4);
  param_3[0xa1f] = lVar38;
  local_b0 = thunk_FUN_00ad1060;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  local_a8 = param_3;
  local_88 = uVar35;
  FUN_009693a0(param_3 + 0xa15,&local_b0);
  FUN_00f0e578(param_3 + 0xb6e,"generic_check");
  *(uint *)((long)param_3 + 0x5b04) = *(uint *)((long)param_3 + 0x5b04) & 0xfffffffb;
  uVar34 = *(uint *)((long)param_3 + 0x571c);
  if ((uVar34 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_3 + 0x571c) = uVar34 & 0xffff8000 | uVar34 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar32);
  }
  pfVar33 = (float *)(param_3 + 0xadc);
  if ((*pfVar33 != 1.4) || (*(float *)((long)param_3 + 0x56e4) != 1.4)) {
    pfVar33[0] = 1.4;
    pfVar33[1] = 1.4;
    FUN_0091ada4(plVar32);
  }
  local_b0 = thunk_FUN_00ad1234;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  local_a8 = param_3;
  local_88 = uVar35;
  FUN_009693a0(param_3 + 0xad4,&local_b0);
  param_3[0xade] = lVar38;
  FUN_00f0d378(plVar29,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  uVar37 = FUN_00e6ce7c("MENU_GUILD_SEARCH_TILE_NO_RESULT_LABEL",0);
  FUN_00f0d75c(plVar29,uVar37);
  FUN_00acef0c(param_3,*(undefined1 *)((long)param_3 + 0x5e11));
  FUN_00acf034(param_3,0);
  if (*(long *)(lVar36 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00acef0c(long param_1,uint param_2)

{
  long lVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  bVar2 = (param_2 & 1) == 0;
  *(char *)(param_1 + 0x5e11) = (char)(param_2 & 1);
  local_50 = 0x9c;
  if (bVar2) {
    local_50 = 0x4c;
  }
  local_4f = 0x85;
  if (bVar2) {
    local_4f = 0x5b;
  }
  local_4e = 0xb;
  if (bVar2) {
    local_4e = 0x7c;
  }
  *(uint *)(param_1 + 0x7ec) =
       *(uint *)(param_1 + 0x7ec) & 0xfffffff8 | *(uint *)(param_1 + 0x7ec) & 3 | (param_2 & 1) << 2
  ;
  local_4d = 0xff;
  uVar3 = 0xba;
  if (bVar2) {
    uVar3 = 0x4b;
  }
  uVar4 = 0x82;
  if (bVar2) {
    uVar4 = 0x59;
  }
  uVar5 = 0x13;
  if (bVar2) {
    uVar5 = 0x84;
  }
  FUN_00f0e670(param_1 + 0x410,&local_50,2);
  FUN_00f0e670(param_1 + 0x500,&local_50,2);
  FUN_00f0e670(param_1 + 0x5f0,&local_50,2);
  local_55 = 0xff;
  local_58 = uVar3;
  local_57 = uVar4;
  local_56 = uVar5;
  FUN_00f0e670(param_1 + 0x140,&local_58,2);
  *(undefined1 *)(param_1 + 0x5e10) = 1;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

