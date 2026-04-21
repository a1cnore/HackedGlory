// ui/academy/academy_constructor.c — 4 UI functions (academy)
// Extracted by extract_ui.py from structured/functions/
#include "GameKindred.h"



/*
 * FUN_100242e6c
 * academy panel constructor (thunked)
 * VA: 0x100242e6c | Source: functions/10024.c:2224
 * Dylib: Layer 6
 * Notes: Size 0x9ca0. Never created in CE because FUN_100131560 returns 1. +0x2c88 = subobject for sidebar registration.
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 1, Vis masks: 2
 * Callees: FUN_10001549c, FUN_10001554c, FUN_1000200a0, FUN_100126d70, FUN_100128400, FUN_10014f4a0, FUN_1001a7004, FUN_1001a7188 (+19 more)
 */
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



/*
 * thunk_FUN_100242e6c
 * VA: 0xthunk_100242e6c | Source: functions/10024.c:2346
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 1, Vis masks: 2
 * Callees: FUN_10001549c, FUN_10001554c, FUN_1000200a0, FUN_100126d70, FUN_100128400, FUN_10014f4a0, FUN_1001a7004, FUN_1001a7188 (+19 more)
 * Callers: FUN_1001fd570, thunk_FUN_1001fd570
 */
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



/*
 * FUN_100247d2c
 * VA: 0x100247d2c | Source: functions/10024.c:5651
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 1, Vis masks: 1
 * Callees: FUN_10001554c, FUN_10017db14, FUN_100209260, FUN_100247ed4, FUN_10026d1f4, FUN_10053077c, FUN_1005308f8, FUN_100530adc (+11 more)
 */
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



/*
 * thunk_FUN_100247d2c
 * VA: 0xthunk_100247d2c | Source: functions/10024.c:5723
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 1, Vis masks: 1
 * Callees: FUN_10001554c, FUN_10017db14, FUN_100209260, FUN_100247ed4, FUN_10026d1f4, FUN_10053077c, FUN_1005308f8, FUN_100530adc (+11 more)
 * Callers: FUN_100242e6c, thunk_FUN_100242e6c
 */
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
