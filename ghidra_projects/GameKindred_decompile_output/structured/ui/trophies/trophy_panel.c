// ui/trophies/trophy_panel.c — 66 UI functions (trophies)
// Extracted by extract_ui.py from structured/functions/
#include "GameKindred.h"



/*
 * FUN_100187d2c
 * VA: 0x100187d2c | Source: functions/10018.c:6287
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 8, Vis masks: 2
 * Callees: FUN_10002d3f4, FUN_1000d05c0, FUN_100109d70, FUN_100111120, FUN_10014e338, FUN_10018a0f8, FUN_10018afc0, FUN_10018bedc (+1795 more)
 * Callers: FUN_100187df0
 */
void FUN_100187d2c(long param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined4 local_54;
  undefined8 **local_50;
  undefined8 uStack_48;
  long local_40;
  undefined8 **local_38;
  undefined8 uStack_30;
  long local_28;
  
  *(uint *)(param_1 + 0x354) = *(uint *)(param_1 + 0x354) & 0xfffffffb;
  *(uint *)(param_1 + 0x2244) = *(uint *)(param_1 + 0x2244) & 0xfffffffb;
  FUN_1001c102c(param_1 + 0x2378);
  *(uint *)(param_1 + 0x2974) = *(uint *)(param_1 + 0x2974) | 4;
  local_38 = (undefined8 ***)0x0;
  uStack_30 = 0;
  local_28 = 0;
  local_50 = (undefined8 ***)0x0;
  uStack_48 = 0;
  local_40 = 0;
  FUN_10014e338(&local_38,&local_50,&local_54);
  pppuVar1 = (undefined8 ***)local_38;
  if (-1 < local_28) {
    pppuVar1 = &local_38;
  }
  pppuVar2 = (undefined8 ***)local_50;
  if (-1 < local_40) {
    pppuVar2 = &local_50;
  }
  FUN_100109d70(pppuVar1,pppuVar2,local_54);
  if (local_40 < 0) {
    operator_delete(local_50);
  }
  if (local_28 < 0) {
    operator_delete(local_38);
  }
  return;
}



pointer PTR_s_build://Fonts/Brandon-Regular-30_10184e1e8;
string s_C0123456789ABCDEF_10185490f;
undefined *PTR_FUN_10145fce8;
pointer PTR_s_build://Fonts/Brandon-Bold-40.fo_10184e230;
undefined4 DAT_101e3d42e;
undefined4 DAT_101e3d432;
undefined4 DAT_101e3d43a;
undefined1 DAT_101e3d428;
undefined2 DAT_101e3d42a;
undefined2 DAT_101e3d42c;
undefined4 DAT_101e3d436;
undefined4 DAT_101e3d43e;
undefined4 DAT_101e3d442;
undefined4 DAT_101e3d446;
undefined4 DAT_101e3d44a;
undefined4 DAT_101e3d44e;
undefined4 DAT_101e3d452;
undefined4 DAT_101e3d456;
undefined4 DAT_101e3d45a;
undefined4 DAT_101e3d45e;
undefined4 DAT_101e3d462;
undefined4 DAT_101e3d466;
undefined4 DAT_101e3d46a;
undefined4 DAT_101e3d46e;
undefined4 DAT_101e3d472;
undefined4 DAT_101e3d476;
undefined4 DAT_101e3d47a;
undefined4 DAT_101e3d47e;
undefined4 DAT_101e3d482;
undefined4 DAT_101e3d486;
undefined4 DAT_101e3d48a;
undefined4 DAT_101e3d48e;
undefined4 DAT_101e3d492;
undefined4 DAT_101e3d496;
undefined4 DAT_101e3d49a;
undefined4 DAT_101e3d49e;
undefined4 DAT_101e3d4a2;
undefined4 DAT_101e3d4a6;
undefined4 DAT_101e3d4aa;
undefined4 DAT_101e3d4ae;
undefined4 DAT_101e3d4b2;
undefined4 DAT_101e3d4b6;
undefined4 DAT_101e3d4ba;
undefined4 DAT_101e3d4be;
undefined4 DAT_101e3d4c2;
undefined4 DAT_101e3d4c6;
undefined4 DAT_101e3d4ca;
undefined4 DAT_101e3d4ce;
undefined4 DAT_101e3d4d2;
undefined4 DAT_101e3d4d6;
undefined4 DAT_101e3d4da;
undefined4 DAT_101e3d4de;
undefined4 DAT_101e3d4e2;
undefined4 DAT_101e3d4e6;
undefined4 DAT_101e3d4ea;
undefined4 DAT_101e3d4ee;
undefined4 DAT_101e3d4f2;
undefined4 DAT_101e3d4f6;
undefined4 DAT_101e3d4fa;
undefined4 DAT_101e3d500;
undefined4 DAT_101e3d504;
undefined4 DAT_101e3d508;
undefined4 DAT_101e3d50c;
undefined4 DAT_101e3d510;
undefined4 DAT_101e3d514;
undefined4 DAT_101e3d518;
undefined4 DAT_101e3d51c;
undefined4 DAT_101e3d520;
undefined4 DAT_101e3d524;
undefined4 DAT_101e3d528;
undefined4 DAT_101e3d52c;
undefined4 DAT_101e3d530;
undefined4 DAT_101e3d534;
undefined4 DAT_101e3d538;
undefined4 DAT_101e3d53c;
undefined4 DAT_101e3d540;
undefined4 DAT_101e3d544;
undefined4 DAT_101e3d548;
undefined4 DAT_101e3d54c;
undefined4 DAT_101e3d550;
undefined4 DAT_101e3d554;
undefined4 DAT_101e3d558;
undefined4 DAT_101e3d55c;
undefined4 DAT_101e3d560;
undefined4 DAT_101e3d564;
undefined4 DAT_101e3d568;
undefined4 DAT_101e3d56c;
undefined4 DAT_101e3d570;
undefined4 DAT_101e3d574;
undefined4 DAT_101e3d578;
undefined4 DAT_101e3d57c;
undefined4 DAT_101e3d580;
undefined4 DAT_101e3d584;
undefined4 DAT_101e3d588;
undefined4 DAT_101e3d58c;
undefined4 DAT_101e3d590;
undefined4 DAT_101e3d594;
undefined4 DAT_101e3d598;
undefined8 DAT_101e3d5a0;
undefined8 DAT_101e3d5a8;
float DAT_101d2354c;
float DAT_101854908;
undefined DAT_10185490c;
float DAT_101d23550;
undefined *PTR_FUN_10145fe90;
undefined *PTR_FUN_101460050;
undefined FUN_10018a0f8;
undefined thunk_FUN_10018a36c;
undefined *PTR_thunk_FUN_10018b684_101460098;
pointer PTR_s_build://Fonts/Brandon-Bold-60.fo_10184e240;
undefined FUN_10018afc0;
undefined *PTR_thunk_FUN_10018b08c_101460230;
undefined *PTR_s_build://Fonts/Brandon-Bold-130.f_10184e260;
undefined *PTR_FUN_101460330;
undefined *PTR_FUN_1014603a8;
undefined FUN_10018bedc;
undefined FUN_10018cc34;
long DAT_101873a38;
undefined *PTR_s_build://Fonts/Brandon-Light-60.f_10184e1c8;
undefined thunk_FUN_10018f164;
undefined *PTR_thunk_FUN_10018d500_1014604a8;
undefined FUN_10018e154;
undefined FUN_10018fd04;
undefined FUN_10018fd40;
undefined4 DAT_101d23554;
undefined *PTR_thunk_FUN_100190868_101460898;
undefined FUN_10019082c;
undefined thunk_FUN_1001908d4;
undefined FUN_100190ae0;
undefined1 DAT_101e3d5c8;
undefined2 DAT_101e3d5ca;
undefined2 DAT_101e3d5cc;
undefined *PTR_FUN_1014609b8;
undefined *PTR_FUN_101460ab8;
undefined *PTR_thunk_FUN_100191808_101460c00;
undefined *PTR_thunk_FUN_1001941e4_101460d00;
undefined *PTR_thunk_FUN_10019422c_101460e48;
undefined thunk_FUN_100194050;
undefined FUN_100192d44;
undefined *PTR_thunk_FUN_10019427c_101460f90;
undefined thunk_FUN_1001940a0;
undefined thunk_FUN_1001940f0;
undefined thunk_FUN_100194000;
undefined thunk_FUN_100194140;
pointer PTR_s_build://Fonts/Brandon-Bold-80.fo_10184e250;
undefined *PTR_FUN_1014627f8;
undefined *PTR_thunk_FUN_100195ff4_1014610d8;
undefined *PTR_thunk_FUN_1001958d8_101461258;
undefined FUN_100195da0;
undefined thunk_FUN_100195e84;
undefined *PTR_s_MENU_HERO_INSPECTOR_ABILITY_A_LA_101461390;
undefined *PTR_FUN_101464d00;
undefined *PTR_thunk_FUN_100196370_1014613b8;
undefined *PTR_s_stat_offense_101461780;
undefined *PTR_s_MENU_HERO_ATTRIBUTES_LABEL_OFFEN_1014617a0;
undefined *PTR_thunk_FUN_100196788_101461500;
undefined *PTR_thunk_FUN_100196a8c_101461648;
undefined *PTR_s_MENU_HERO_ATTRIBUTES_LABEL_DIFFI_1014617c0;
undefined *PTR_thunk_FUN_100196fa4_1014645b0;
undefined *PTR_thunk_FUN_100197c4c_1014617e8;
undefined thunk_FUN_10019868c;
undefined thunk_FUN_10019860c;
undefined thunk_FUN_100197fd8;
undefined thunk_FUN_100198034;
undefined4 DAT_10115a174;
undefined8 DAT_101854a08;
undefined *PTR_thunk_FUN_100198b18_101461968;
undefined FUN_100198b0c;
undefined FUN_100198eec;
undefined DAT_101872ba4;
undefined UNK_101158024;
undefined DAT_101158028;
undefined *PTR_FUN_101461ab0;
undefined *PTR_FUN_101461c10;
undefined *PTR_FUN_101461c58;
pointer PTR_s_build://Fonts/Brandon-Regular-40_10184e1f8;
pointer PTR_s_build://Fonts/Brandon-Bold-72.fo_10184e248;
undefined *PTR_FUN_101461d58;
undefined *PTR_FUN_101461dd0;
undefined FUN_10019a8ac;
undefined FUN_10019a900;
undefined8 DAT_101d23558;
undefined1 DAT_101e3d5d0;
undefined2 DAT_101e3d5d2;
undefined2 DAT_101e3d5d4;
undefined4 DAT_101e3d5d6;
undefined4 DAT_101e3d5da;
undefined4 DAT_101e3d5de;
undefined4 DAT_101e3d5e2;
undefined4 DAT_101e3d5e6;
undefined4 DAT_101e3d5ea;
undefined4 DAT_101e3d5ee;
undefined4 DAT_101e3d5f2;
undefined4 DAT_101e3d5f6;
undefined4 DAT_101e3d5fa;
undefined4 DAT_101e3d5fe;
undefined4 DAT_101e3d602;
undefined4 DAT_101e3d606;
undefined4 DAT_101e3d60a;
undefined4 DAT_101e3d60e;
undefined4 DAT_101e3d612;
undefined4 DAT_101e3d616;
undefined4 DAT_101e3d61a;
undefined4 DAT_101e3d622;
undefined4 DAT_101e3d61e;
undefined4 DAT_101e3d626;
undefined4 DAT_101e3d62a;
undefined4 DAT_101e3d62e;
undefined4 DAT_101e3d632;
undefined4 DAT_101e3d636;
undefined4 DAT_101e3d63a;
undefined4 DAT_101e3d63e;
undefined4 DAT_101e3d642;
undefined4 DAT_101e3d646;
undefined4 DAT_101e3d64a;
undefined4 DAT_101e3d64e;
undefined4 DAT_101e3d652;
undefined4 DAT_101e3d656;
undefined4 DAT_101e3d65a;
undefined4 DAT_101e3d65e;
undefined4 DAT_101e3d662;
undefined4 DAT_101e3d666;
undefined4 DAT_101e3d66a;
undefined4 DAT_101e3d66e;
undefined4 DAT_101e3d672;
undefined4 DAT_101e3d676;
undefined4 DAT_101e3d67a;
undefined4 DAT_101e3d67e;
undefined4 DAT_101e3d682;
undefined4 DAT_101e3d686;
undefined4 DAT_101e3d68a;
undefined4 DAT_101e3d68e;
undefined4 DAT_101e3d692;
undefined4 DAT_101e3d696;
undefined4 DAT_101e3d69a;
undefined4 DAT_101e3d69e;
undefined4 DAT_101e3d6a2;
undefined4 DAT_101e3d6ac;
undefined4 DAT_101e3d6a8;
undefined4 DAT_101e3d6b4;
undefined4 DAT_101e3d6b0;
undefined4 DAT_101e3d6b8;
undefined4 DAT_101e3d6bc;
undefined4 DAT_101e3d6c0;
undefined4 DAT_101e3d6c4;
undefined4 DAT_101e3d6c8;
undefined4 DAT_101e3d6cc;
undefined4 DAT_101e3d6d0;
undefined4 DAT_101e3d6d4;
undefined4 DAT_101e3d6d8;
undefined4 DAT_101e3d6dc;
undefined4 DAT_101e3d6e0;
undefined4 DAT_101e3d6e4;
undefined4 DAT_101e3d6e8;
undefined4 DAT_101e3d6ec;
undefined4 DAT_101e3d6f0;
undefined4 DAT_101e3d6f4;
undefined4 DAT_101e3d6f8;
undefined4 DAT_101e3d6fc;
undefined4 DAT_101e3d700;
undefined4 DAT_101e3d704;
undefined4 DAT_101e3d708;
undefined4 DAT_101e3d70c;
undefined4 DAT_101e3d710;
undefined4 DAT_101e3d714;
undefined4 DAT_101e3d718;
undefined4 DAT_101e3d71c;
undefined4 DAT_101e3d720;
undefined4 DAT_101e3d724;
undefined4 DAT_101e3d728;
undefined4 DAT_101e3d72c;
undefined4 DAT_101e3d730;
undefined4 DAT_101e3d734;
undefined4 DAT_101e3d738;
undefined4 DAT_101e3d73c;
undefined4 DAT_101e3d740;
undefined8 DAT_101e3d748;
undefined8 DAT_101e3d750;
undefined *DAT_101d23558;
undefined *PTR_s_build://Fonts/Brandon-Light-96.f_10184e1d8;
undefined *PTR_FUN_101461ed0;
undefined *PTR_thunk_FUN_10019c7c8_101462020;
undefined thunk_FUN_10019fdb0;
undefined FUN_10019d7e4;
undefined thunk_FUN_10019fdfc;
undefined *PTR_thunk_FUN_10019d7f0_101462120;
undefined *PTR_FUN_101462268;
undefined *PTR_FUN_1014623b0;
undefined4 DAT_101d236b8;
undefined4 DAT_101d236c4;
undefined *PTR_thunk_FUN_1001a040c_1014624f8;
undefined *PTR_FUN_1014625f8;
undefined4 DAT_101d236b4;
undefined *PTR_thunk_FUN_1001a1404_1014626f8;
undefined thunk_FUN_1001a2258;
undefined *PTR_thunk_FUN_1001a7dd8_101462990;
undefined *PTR_thunk_FUN_1001a2954_101462af0;
undefined thunk_FUN_1001a3dd0;
undefined thunk_FUN_1001a3fa0;
undefined DAT_101158080;
undefined FUN_1001a4848;
undefined FUN_1001a4898;
undefined FUN_1001a48a8;
undefined FUN_1001a5534;
undefined FUN_1001a553c;
undefined FUN_1001a5620;
undefined *PTR_FUN_101462bf0;
undefined *PTR_FUN_101462c20;
pointer PTR_FUN_101462c58;
undefined *PTR_FUN_101462c78;
undefined *PTR_FUN_101462d90;
undefined thunk_FUN_1001a5e74;
undefined *PTR_s_build://MenuBackground_Form.png_1018549b8;
undefined *PTR_FUN_101462dd8;
undefined1 DAT_101e3d760;
undefined2 DAT_101e3d762;
undefined2 DAT_101e3d764;
undefined8 DAT_101e3d768;
undefined8 DAT_101e3d770;
undefined8 DAT_101e42b80;
undefined4 DAT_101e42b88;
undefined4 DAT_101e3d780;
undefined thunk_FUN_1001e3fd8;
undefined thunk_FUN_1001a7788;
undefined *PTR_thunk_FUN_1001a7058_1014630b0;
undefined thunk_FUN_1001a77cc;
undefined FUN_1001a7874;
undefined *PTR_thunk_FUN_1001a791c_1014631f8;
undefined *PTR_FUN_101463238;
undefined *PTR_FUN_101463260;
undefined *PTR_thunk_FUN_1001a7dd8_101463288;
undefined FUN_1001a7dc0;
undefined4 DAT_101873a60;
undefined4 DAT_101873a64;
undefined4 DAT_101873a70;
undefined4 DAT_101873a74;
undefined4 DAT_101873a68;
undefined4 DAT_101873a6c;
undefined4 DAT_101873a78;
undefined4 DAT_101873a7c;
float DAT_101873a98;
undefined4 DAT_101873a9c;
undefined *PTR_FUN_1014633e8;
float DAT_101873a90;
float DAT_101873a94;
undefined *PTR_thunk_FUN_1001aa23c_101463418;
undefined FUN_1001aa1c0;
float DAT_101873a78;
float DAT_101873a7c;
float DAT_101873a80;
undefined8 DAT_101873a84;
float DAT_101873a8c;
float DAT_101873a68;
undefined *PTR_FUN_101463578;
float DAT_101873a60;
float DAT_101873a64;
float DAT_101873a6c;
float DAT_101873a9c;
undefined4 DAT_101dbd454;
undefined4 DAT_101dbd480;
undefined *PTR_thunk_FUN_1001abf40_1014635a8;
undefined thunk_FUN_1001acbb8;
undefined FUN_1001abf38;
undefined *PTR_FUN_101465108;
undefined DAT_101e42d18;
undefined DAT_101e42d30;
undefined *PTR_thunk_FUN_1001acc08_10148b538;
undefined1 DAT_101e42b90;
undefined2 DAT_101e42b92;
undefined2 DAT_101e42b94;
undefined4 DAT_101e42b96;
undefined4 DAT_101e42b9a;
undefined4 DAT_101e42b9e;
undefined4 DAT_101e42ba2;
undefined4 DAT_101e42ba6;
undefined4 DAT_101e42baa;
undefined4 DAT_101e42bae;
undefined4 DAT_101e42bb2;
undefined4 DAT_101e42bb6;
undefined4 DAT_101e42bba;
undefined4 DAT_101e42bbe;
undefined4 DAT_101e42bc2;
undefined4 DAT_101e42bc6;
undefined4 DAT_101e42bca;
undefined4 DAT_101e42bce;
undefined4 DAT_101e42bd2;
undefined4 DAT_101e42bd6;
undefined4 DAT_101e42bda;
undefined4 DAT_101e42bde;
undefined4 DAT_101e42be2;
undefined4 DAT_101e42be6;
undefined4 DAT_101e42bea;
undefined4 DAT_101e42bee;
undefined4 DAT_101e42bf2;
undefined4 DAT_101e42bf6;
undefined4 DAT_101e42bfa;
undefined4 DAT_101e42bfe;
undefined4 DAT_101e42c02;
undefined4 DAT_101e42c06;
undefined4 DAT_101e42c0a;
undefined4 DAT_101e42c0e;
undefined4 DAT_101e42c12;
undefined4 DAT_101e42c16;
undefined4 DAT_101e42c1a;
undefined4 DAT_101e42c1e;
undefined4 DAT_101e42c22;
undefined4 DAT_101e42c26;
undefined4 DAT_101e42c2a;
undefined4 DAT_101e42c2e;
undefined4 DAT_101e42c32;
undefined4 DAT_101e42c36;
undefined4 DAT_101e42c3a;
undefined4 DAT_101e42c3e;
undefined4 DAT_101e42c42;
undefined4 DAT_101e42c46;
undefined4 DAT_101e42c4a;
undefined4 DAT_101e42c4e;
undefined4 DAT_101e42c52;
undefined4 DAT_101e42c56;
undefined4 DAT_101e42c5a;
undefined4 DAT_101e42c5e;
undefined4 DAT_101e42c62;
undefined4 DAT_101e42c6c;
undefined4 DAT_101e42c74;
undefined4 DAT_101e42c70;
undefined4 DAT_101e42c78;
undefined4 DAT_101e42c84;
undefined4 DAT_101e42c88;
undefined4 DAT_101e42c68;
undefined4 DAT_101e42c8c;
undefined4 DAT_101e42c7c;
undefined4 DAT_101e42c90;
undefined4 DAT_101e42c80;
undefined4 DAT_101e42c94;
undefined4 DAT_101e42c98;
undefined4 DAT_101e42c9c;
undefined4 DAT_101e42ca0;
undefined4 DAT_101e42ca4;
undefined4 DAT_101e42ca8;
undefined4 DAT_101e42cac;
undefined4 DAT_101e42cb0;
undefined4 DAT_101e42cb4;
undefined4 DAT_101e42cb8;
undefined4 DAT_101e42cbc;
undefined4 DAT_101e42cc0;
undefined4 DAT_101e42cc4;
undefined4 DAT_101e42cc8;
undefined4 DAT_101e42ccc;
undefined4 DAT_101e42cd0;
undefined4 DAT_101e42cd4;
undefined4 DAT_101e42cd8;
undefined4 DAT_101e42cdc;
undefined4 DAT_101e42ce0;
undefined4 DAT_101e42ce4;
undefined4 DAT_101e42ce8;
undefined4 DAT_101e42cec;
undefined4 DAT_101e42cf0;
undefined4 DAT_101e42cf4;
undefined4 DAT_101e42cf8;
undefined4 DAT_101e42cfc;
undefined4 DAT_101e42d00;
undefined8 DAT_101e42d08;
undefined8 DAT_101e42d10;
long *DAT_101d23560;
long DAT_101d23560;
undefined *PTR_thunk_FUN_10064e2bc_1014636f8;
undefined *PTR_thunk_FUN_1001ad700_101463850;
undefined thunk_FUN_1001adb84;
undefined thunk_FUN_1001af360;
undefined *PTR_thunk_FUN_1001afa60_101463950;
undefined thunk_FUN_1001af3b4;
undefined1 DAT_101e42d48;
undefined2 DAT_101e42d4a;
undefined2 DAT_101e42d4c;
undefined8 DAT_101e42d50;
undefined8 DAT_101e42d58;
undefined DAT_101e42d60;
undefined thunk_FUN_1001afef4;
undefined thunk_FUN_1001affa4;
undefined FUN_1001b0ae8;
undefined *PTR_thunk_FUN_1001b0af4_101463b58;
undefined *PTR_thunk_FUN_1001b1228_101463cb8;
undefined4 DAT_101d918a8;
undefined4 DAT_101d918ac;
undefined *PTR_thunk_FUN_1001b1de4_101463e00;
undefined *PTR_FUN_101463f68;
undefined DAT_1011580f8;
undefined FUN_1001b2680;
undefined FUN_1001b2678;
undefined thunk_FUN_1001b26c0;
undefined thunk_FUN_1001b2710;
undefined4 DAT_101d23670;
undefined1 DAT_101e42d88;
undefined1 DAT_101e42da0;
undefined DAT_101e42d78;
undefined DAT_101e42d90;
undefined thunk_FUN_1001b22d4;
int DAT_101dbd4e4;
undefined thunk_FUN_1001b2950;
undefined thunk_FUN_1001b29b4;
undefined DAT_101873a48;
undefined thunk_FUN_1001b43ec;
undefined *PTR_thunk_FUN_1001b4464_101464300;
undefined4 DAT_101873a48;
undefined4 DAT_101873a4c;
float DAT_101873a48;
float DAT_101873a4c;
undefined FUN_1001b494c;
undefined FUN_1001b48f4;
undefined FUN_1001b4944;
undefined FUN_1001b4954;
undefined FUN_1001b67a8;
undefined FUN_1001b60a0;
undefined FUN_1001b60a8;
undefined *PTR_thunk_FUN_1001b7044_101464728;
undefined *PTR_FUN_101464900;
undefined thunk_FUN_1001b87b8;
undefined thunk_FUN_1001b875c;
undefined FUN_1001b8754;
undefined4 DAT_101d2365c;
undefined4 DAT_101d23568;
undefined thunk_FUN_1001ba584;
undefined thunk_FUN_1001ba5e8;
undefined FUN_1001ba580;
undefined1 DAT_101e42da8;
undefined2 DAT_101e42daa;
undefined2 DAT_101e42dac;
undefined4 DAT_101e42dae;
undefined4 DAT_101e42db2;
undefined4 DAT_101e42db6;
undefined4 DAT_101e42dba;
undefined4 DAT_101e42dbe;
undefined4 DAT_101e42dc2;
undefined4 DAT_101e42dc6;
undefined4 DAT_101e42dca;
undefined4 DAT_101e42dce;
undefined4 DAT_101e42dd2;
undefined4 DAT_101e42dd6;
undefined4 DAT_101e42dda;
undefined4 DAT_101e42dde;
undefined4 DAT_101e42de2;
undefined4 DAT_101e42de6;
undefined4 DAT_101e42dea;
undefined4 DAT_101e42dee;
undefined4 DAT_101e42df2;
undefined4 DAT_101e42df6;
undefined4 DAT_101e42dfa;
undefined4 DAT_101e42dfe;
undefined4 DAT_101e42e02;
undefined4 DAT_101e42e06;
undefined4 DAT_101e42e0a;
undefined4 DAT_101e42e0e;
undefined4 DAT_101e42e12;
undefined4 DAT_101e42e16;
undefined4 DAT_101e42e1a;
undefined4 DAT_101e42e1e;
undefined4 DAT_101e42e22;
undefined4 DAT_101e42e26;
undefined4 DAT_101e42e2a;
undefined4 DAT_101e42e2e;
undefined4 DAT_101e42e32;
undefined4 DAT_101e42e36;
undefined4 DAT_101e42e3a;
undefined4 DAT_101e42e3e;
undefined4 DAT_101e42e42;
undefined4 DAT_101e42e46;
undefined4 DAT_101e42e4a;
undefined4 DAT_101e42e4e;
undefined4 DAT_101e42e52;
undefined4 DAT_101e42e56;
undefined4 DAT_101e42e5a;
undefined4 DAT_101e42e5e;
undefined4 DAT_101e42e62;
undefined4 DAT_101e42e66;
undefined4 DAT_101e42e6a;
undefined4 DAT_101e42e6e;
undefined4 DAT_101e42e72;
undefined4 DAT_101e42e76;
undefined4 DAT_101e42e7a;
undefined4 DAT_101e42e84;
undefined4 DAT_101e42e8c;
undefined4 DAT_101e42e88;
undefined4 DAT_101e42e90;
undefined4 DAT_101e42e9c;
undefined4 DAT_101e42ea0;
undefined4 DAT_101e42e80;
undefined4 DAT_101e42ea4;
undefined4 DAT_101e42e94;
undefined4 DAT_101e42ea8;
undefined4 DAT_101e42e98;
undefined4 DAT_101e42eac;
undefined4 DAT_101e42eb0;
undefined4 DAT_101e42eb4;
undefined4 DAT_101e42eb8;
undefined4 DAT_101e42ebc;
undefined4 DAT_101e42ec0;
undefined4 DAT_101e42ec4;
undefined4 DAT_101e42ec8;
undefined4 DAT_101e42ecc;
undefined4 DAT_101e42ed0;
undefined4 DAT_101e42ed4;
undefined4 DAT_101e42ed8;
undefined4 DAT_101e42edc;
undefined4 DAT_101e42ee0;
undefined4 DAT_101e42ee4;
undefined4 DAT_101e42ee8;
undefined4 DAT_101e42eec;
undefined4 DAT_101e42ef0;
undefined4 DAT_101e42ef4;
undefined4 DAT_101e42ef8;
undefined4 DAT_101e42efc;
undefined4 DAT_101e42f00;
undefined4 DAT_101e42f04;
undefined4 DAT_101e42f08;
undefined4 DAT_101e42f0c;
undefined4 DAT_101e42f10;
undefined4 DAT_101e42f14;
undefined4 DAT_101e42f18;
undefined8 DAT_101e42f20;
undefined8 DAT_101e42f28;
undefined *PTR_s_build://BoostBadges.tga_1018549b0;
undefined *PTR_thunk_FUN_1001baec8_101464948;
undefined FUN_1001bb3ec;
undefined FUN_1001bb478;
undefined *PTR_thunk_FUN_1001bcd78_101464aa0;
undefined thunk_FUN_1001bc178;
undefined thunk_FUN_1001bc294;
undefined *PTR_FUN_101464be8;
char DAT_101d23570;
undefined8 DAT_101d23578;
undefined8 DAT_101d235a8;
undefined1 DAT_101e42f30;
undefined2 DAT_101e42f32;
undefined2 DAT_101e42f34;
undefined8 DAT_101e42f38;
undefined8 DAT_101e42f40;
undefined8 DAT_101d235b0;
undefined4 DAT_101d235b8;
undefined8 DAT_101d235c0;
undefined8 DAT_101d235c8;
undefined thunk_FUN_1001bf868;
undefined4 DAT_101d235d0;
undefined8 DAT_101d23580;
undefined4 DAT_101d23588;
undefined8 DAT_101d23590;
undefined8 DAT_101d23598;
undefined4 DAT_101d235a0;
undefined *PTR_FUN_101465268;
undefined *PTR_FUN_1014653b8;
undefined thunk_FUN_1001c0e10;
undefined8 DAT_101d235d8;
undefined thunk_FUN_1001c3fd0;
undefined *PTR_FUN_1014654b8;
undefined *PTR_FUN_101465600;
undefined thunk_FUN_1001c51d0;
undefined *PTR_thunk_FUN_1001c58e4_101465750;
undefined *PTR_FUN_101465898;
undefined1 DAT_101e42f48;
undefined2 DAT_101e42f4a;
undefined2 DAT_101e42f4c;
undefined4 DAT_101e42f4e;
undefined4 DAT_101e42f52;
undefined4 DAT_101e42f56;
undefined4 DAT_101e42f5a;
undefined4 DAT_101e42f5e;
undefined4 DAT_101e42f62;
undefined4 DAT_101e42f66;
undefined4 DAT_101e42f6a;
undefined4 DAT_101e42f6e;
undefined4 DAT_101e42f72;
undefined4 DAT_101e42f76;
undefined4 DAT_101e42f7a;
undefined4 DAT_101e42f7e;
undefined4 DAT_101e42f82;
undefined4 DAT_101e42f86;
undefined4 DAT_101e42f8a;
undefined4 DAT_101e42f8e;
undefined4 DAT_101e42f92;
undefined4 DAT_101e42f9a;
undefined4 DAT_101e42f96;
undefined4 DAT_101e42f9e;
undefined4 DAT_101e42fa2;
undefined4 DAT_101e42fa6;
undefined4 DAT_101e42faa;
undefined4 DAT_101e42fae;
undefined4 DAT_101e42fb2;
undefined4 DAT_101e42fb6;
undefined4 DAT_101e42fba;
undefined4 DAT_101e42fbe;
undefined4 DAT_101e42fc2;
undefined4 DAT_101e42fc6;
undefined4 DAT_101e42fca;
undefined4 DAT_101e42fce;
undefined4 DAT_101e42fd2;
undefined4 DAT_101e42fd6;
undefined4 DAT_101e42fda;
undefined4 DAT_101e42fde;
undefined4 DAT_101e42fe2;
undefined4 DAT_101e42fe6;
undefined4 DAT_101e42fea;
undefined4 DAT_101e42fee;
undefined4 DAT_101e42ff2;
undefined4 DAT_101e42ff6;
undefined4 DAT_101e42ffa;
undefined4 DAT_101e42ffe;
undefined4 DAT_101e43002;
undefined4 DAT_101e43006;
undefined4 DAT_101e4300a;
undefined4 DAT_101e4300e;
undefined4 DAT_101e43012;
undefined4 DAT_101e43016;
undefined4 DAT_101e4301a;
undefined4 DAT_101e43024;
undefined4 DAT_101e43020;
undefined4 DAT_101e4302c;
undefined4 DAT_101e43028;
undefined4 DAT_101e43030;
undefined4 DAT_101e43034;
undefined4 DAT_101e43038;
undefined4 DAT_101e4303c;
undefined4 DAT_101e43040;
undefined4 DAT_101e43044;
undefined4 DAT_101e43048;
undefined4 DAT_101e4304c;
undefined4 DAT_101e43050;
undefined4 DAT_101e43054;
undefined4 DAT_101e43058;
undefined4 DAT_101e4305c;
undefined4 DAT_101e43060;
undefined4 DAT_101e43064;
undefined4 DAT_101e43068;
undefined4 DAT_101e4306c;
undefined4 DAT_101e43070;
undefined4 DAT_101e43074;
undefined4 DAT_101e43078;
undefined4 DAT_101e4307c;
undefined4 DAT_101e43080;
undefined4 DAT_101e43084;
undefined4 DAT_101e43088;
undefined4 DAT_101e4308c;
undefined4 DAT_101e43090;
undefined4 DAT_101e43094;
undefined4 DAT_101e43098;
undefined4 DAT_101e4309c;
undefined4 DAT_101e430a0;
undefined4 DAT_101e430a4;
undefined4 DAT_101e430a8;
undefined4 DAT_101e430ac;
undefined4 DAT_101e430b0;
undefined4 DAT_101e430b4;
undefined4 DAT_101e430b8;
undefined8 DAT_101e430c0;
undefined8 DAT_101e430c8;
undefined *DAT_101d235d8;
undefined *PTR_thunk_FUN_1001c80b4_101465998;
undefined *PTR_s_build://Fonts/Brandon-Light-48.f_10184e1c0;
undefined DAT_1011581d0;
undefined DAT_1011581d4;
undefined DAT_1011581d8;
undefined DAT_1011581dc;
undefined *PTR_thunk_FUN_1001c768c_101465be0;
undefined1 DAT_101e430e0;
undefined DAT_101e430d0;
undefined *PTR_thunk_FUN_1001c859c_101465ce0;
undefined FUN_1001c8afc;
undefined4 DAT_101d235e0;
undefined1 DAT_101e430e8;
undefined2 DAT_101e430ea;
undefined2 DAT_101e430ec;
undefined4 DAT_101e430ee;
undefined4 DAT_101e430f2;
undefined4 DAT_101e430f6;
undefined4 DAT_101e430fa;
undefined4 DAT_101e430fe;
undefined4 DAT_101e43102;
undefined4 DAT_101e43106;
undefined4 DAT_101e4310a;
undefined4 DAT_101e4310e;
undefined4 DAT_101e43112;
undefined4 DAT_101e43116;
undefined4 DAT_101e4311a;
undefined4 DAT_101e4311e;
undefined4 DAT_101e43122;
undefined4 DAT_101e43126;
undefined4 DAT_101e4312a;
undefined4 DAT_101e4312e;
undefined4 DAT_101e43132;
undefined4 DAT_101e43136;
undefined4 DAT_101e4313a;
undefined4 DAT_101e4313e;
undefined4 DAT_101e43142;
undefined4 DAT_101e43146;
undefined4 DAT_101e4314a;
undefined4 DAT_101e4314e;
undefined4 DAT_101e43152;
undefined4 DAT_101e43156;
undefined4 DAT_101e4315a;
undefined4 DAT_101e4315e;
undefined4 DAT_101e43162;
undefined4 DAT_101e43166;
undefined4 DAT_101e4316a;
undefined4 DAT_101e4316e;
undefined4 DAT_101e43172;
undefined4 DAT_101e43176;
undefined4 DAT_101e4317a;
undefined4 DAT_101e4317e;
undefined4 DAT_101e43182;
undefined4 DAT_101e43186;
undefined4 DAT_101e4318a;
undefined4 DAT_101e4318e;
undefined4 DAT_101e43192;
undefined4 DAT_101e43196;
undefined4 DAT_101e4319a;
undefined4 DAT_101e4319e;
undefined4 DAT_101e431a2;
undefined4 DAT_101e431a6;
undefined4 DAT_101e431aa;
undefined4 DAT_101e431ae;
undefined4 DAT_101e431b2;
undefined4 DAT_101e431b6;
undefined4 DAT_101e431ba;
undefined4 DAT_101e431c4;
undefined4 DAT_101e431cc;
undefined4 DAT_101e431c8;
undefined4 DAT_101e431d0;
undefined4 DAT_101e431dc;
undefined4 DAT_101e431e0;
undefined4 DAT_101e431c0;
undefined4 DAT_101e431e4;
undefined4 DAT_101e431d4;
undefined4 DAT_101e431e8;
undefined4 DAT_101e431d8;
undefined4 DAT_101e431ec;
undefined4 DAT_101e431f0;
undefined4 DAT_101e431f4;
undefined4 DAT_101e431f8;
undefined4 DAT_101e431fc;
undefined4 DAT_101e43200;
undefined4 DAT_101e43204;
undefined4 DAT_101e43208;
undefined4 DAT_101e4320c;
undefined4 DAT_101e43210;
undefined4 DAT_101e43214;
undefined4 DAT_101e43218;
undefined4 DAT_101e4321c;
undefined4 DAT_101e43220;
undefined4 DAT_101e43224;
undefined4 DAT_101e43228;
undefined4 DAT_101e4322c;
undefined4 DAT_101e43230;
undefined4 DAT_101e43234;
undefined4 DAT_101e43238;
undefined4 DAT_101e4323c;
undefined4 DAT_101e43240;
undefined4 DAT_101e43244;
undefined4 DAT_101e43248;
undefined4 DAT_101e4324c;
undefined4 DAT_101e43250;
undefined4 DAT_101e43254;
undefined4 DAT_101e43258;
undefined8 DAT_101e43260;
undefined8 DAT_101e43268;
undefined thunk_FUN_1001ca378;
undefined *PTR_thunk_FUN_1001ca1a4_101465de0;
undefined *PTR_FUN_101465f28;
undefined FUN_1001cadc8;
undefined FUN_1001cada4;
undefined FUN_1001cadec;
undefined DAT_101158208;
undefined *PTR_thunk_FUN_1001cae14_101466088;
undefined *PTR_FUN_1014661f0;
undefined DAT_101158200;
undefined DAT_101158204;
byte DAT_101d23917;
size_t DAT_101d23908;
undefined8 DAT_101d23900;
byte DAT_101d2392f;
size_t DAT_101d23920;
undefined8 DAT_101d23918;
undefined *PTR_FUN_101466220;
undefined FUN_1001cbb54;
undefined *PTR_FUN_101466398;
undefined FUN_1001cc4f8;
undefined FUN_1001cc4f0;
undefined *PTR_thunk_FUN_1001cc504_1014664e0;
undefined *PTR_FUN_101466698;
undefined FUN_1001cc4e4;
undefined thunk_FUN_100536b78;
undefined *PTR_thunk_FUN_1001cd8c0_1014666f8;
undefined FUN_1001cd8a4;
undefined FUN_1001cdb1c;
undefined8 DAT_101d235e8;
undefined *PTR_thunk_FUN_1001cec4c_101466850;
undefined1 DAT_101e43270;
undefined2 DAT_101e43272;
undefined2 DAT_101e43274;
undefined4 DAT_101e43276;
undefined4 DAT_101e4327a;
undefined4 DAT_101e4327e;
undefined4 DAT_101e43282;
undefined4 DAT_101e43286;
undefined4 DAT_101e4328a;
undefined4 DAT_101e4328e;
undefined4 DAT_101e43292;
undefined4 DAT_101e43296;
undefined4 DAT_101e4329a;
undefined4 DAT_101e4329e;
undefined4 DAT_101e432a2;
undefined4 DAT_101e432a6;
undefined4 DAT_101e432aa;
undefined4 DAT_101e432ae;
undefined4 DAT_101e432b2;
undefined4 DAT_101e432b6;
undefined4 DAT_101e432ba;
undefined4 DAT_101e432c2;
undefined4 DAT_101e432be;
undefined4 DAT_101e432c6;
undefined4 DAT_101e432ca;
undefined4 DAT_101e432ce;
undefined4 DAT_101e432d2;
undefined4 DAT_101e432d6;
undefined4 DAT_101e432da;
undefined4 DAT_101e432de;
undefined4 DAT_101e432e2;
undefined4 DAT_101e432e6;
undefined4 DAT_101e432ea;
undefined4 DAT_101e432ee;
undefined4 DAT_101e432f2;
undefined4 DAT_101e432f6;
undefined4 DAT_101e432fa;
undefined4 DAT_101e432fe;
undefined4 DAT_101e43302;
undefined4 DAT_101e43306;
undefined4 DAT_101e4330a;
undefined4 DAT_101e4330e;
undefined4 DAT_101e43312;
undefined4 DAT_101e43316;
undefined4 DAT_101e4331a;
undefined4 DAT_101e4331e;
undefined4 DAT_101e43322;
undefined4 DAT_101e43326;
undefined4 DAT_101e4332a;
undefined4 DAT_101e4332e;
undefined4 DAT_101e43332;
undefined4 DAT_101e43336;
undefined4 DAT_101e4333a;
undefined4 DAT_101e4333e;
undefined4 DAT_101e43342;
undefined4 DAT_101e4334c;
undefined4 DAT_101e43348;
undefined4 DAT_101e43354;
undefined4 DAT_101e43350;
undefined4 DAT_101e43358;
undefined4 DAT_101e4335c;
undefined4 DAT_101e43360;
undefined4 DAT_101e43364;
undefined4 DAT_101e43368;
undefined4 DAT_101e4336c;
undefined4 DAT_101e43370;
undefined4 DAT_101e43374;
undefined4 DAT_101e43378;
undefined4 DAT_101e4337c;
undefined4 DAT_101e43380;
undefined4 DAT_101e43384;
undefined4 DAT_101e43388;
undefined4 DAT_101e4338c;
undefined4 DAT_101e43390;
undefined4 DAT_101e43394;
undefined4 DAT_101e43398;
undefined4 DAT_101e4339c;
undefined4 DAT_101e433a0;
undefined4 DAT_101e433a4;
undefined4 DAT_101e433a8;
undefined4 DAT_101e433ac;
undefined4 DAT_101e433b0;
undefined4 DAT_101e433b4;
undefined4 DAT_101e433b8;
undefined4 DAT_101e433bc;
undefined4 DAT_101e433c0;
undefined4 DAT_101e433c4;
undefined4 DAT_101e433c8;
undefined4 DAT_101e433cc;
undefined4 DAT_101e433d0;
undefined4 DAT_101e433d4;
undefined4 DAT_101e433d8;
undefined4 DAT_101e433dc;
undefined4 DAT_101e433e0;
undefined8 DAT_101e433e8;
undefined8 DAT_101e433f0;
undefined *DAT_101d235e8;
undefined *PTR_FUN_101466950;
undefined *PTR_FUN_101466ab8;
undefined *PTR_FUN_101466c20;
undefined *PTR_s_build://MenuDraftPartsCommon.tga_101854a38;
undefined *PTR_FUN_101466d88;
undefined FUN_1000d05c0;
undefined DAT_1011582a4;
undefined DAT_1011582a8;
undefined DAT_10115828c;
undefined DAT_101158298;
undefined *PTR_thunk_FUN_1001d78dc_101466ed0;
undefined DAT_101158290;
undefined DAT_101158294;
undefined *PTR_DAT_101854950;
undefined *PTR_FUN_101467028;
undefined *PTR_FUN_101467188;
undefined DAT_10115827c;
undefined DAT_101158280;
undefined DAT_10115829c;
undefined DAT_1011582a0;
undefined *PTR_FUN_1014671d0;
undefined DAT_101158284;
undefined DAT_101158288;
undefined *PTR_thunk_FUN_1001d7ab4_101467318;
undefined *PTR_FUN_101467478;
undefined *PTR_FUN_1014674c0;
undefined *PTR_FUN_101467610;
undefined *PTR_FUN_101467768;
undefined *PTR_FUN_101467900;
undefined4 DAT_101d918b8;
undefined DAT_1011582ac;
undefined *PTR_thunk_FUN_1001d7bcc_101467a50;
undefined FUN_1001d46f4;
undefined *PTR_FUN_101467be8;
undefined DAT_1011582b0;
undefined *PTR_thunk_FUN_1001d5000_101467d30;
undefined *PTR_PTR_101468260;
undefined *PTR_s_lobby_position_captain_101468298;
undefined DAT_101158270;
undefined DAT_101158274;
undefined DAT_101158278;
undefined *PTR_thunk_FUN_1001d7d6c_101467e80;
undefined *PTR_thunk_FUN_10064e2bc_101468128;
undefined *PTR_s_build://MenuDraftPartsCommon_Ico_101854a40;
undefined *PTR_thunk_FUN_1001d81b8_101467fc8;
undefined thunk_FUN_1001d869c;
undefined *PTR_thunk_FUN_1001d8544_1014682e0;
undefined *PTR_FUN_101468328;
undefined *PTR_FUN_1014686c0;
undefined1 DAT_101854938;
undefined *PTR_FUN_1014686f0;
undefined *PTR_FUN_101468838;
undefined FUN_1001d8aa0;
undefined *PTR_FUN_101468988;
undefined *PTR_thunk_FUN_1001d8e48_101468ad8;
undefined FUN_1001d8e3c;
char DAT_101854940;
long DAT_101d235f0;
undefined *PTR_thunk_FUN_1001d9e70_101468c20;
undefined8 DAT_101d235f0;
undefined8 DAT_101d235f8;
undefined4 DAT_101d23600;
undefined8 *DAT_101d235f8;
int DAT_101d23600;
undefined1 DAT_101e433f8;
undefined2 DAT_101e433fa;
undefined2 DAT_101e433fc;
undefined8 DAT_101e43400;
undefined8 DAT_101e43408;
undefined4 DAT_101e43410;
undefined4 DAT_101e43414;
undefined4 DAT_101e43418;
undefined4 DAT_101e4341c;
undefined4 DAT_101e43420;
undefined4 DAT_101e43424;
undefined4 DAT_101e43428;
undefined4 DAT_101e4342c;
undefined4 DAT_101e43430;
undefined4 DAT_101e43434;
undefined4 DAT_101e43438;
undefined4 DAT_101e4343c;
undefined4 DAT_101e43440;
undefined4 DAT_101e43444;
undefined4 DAT_101e43448;
undefined4 DAT_101e4344c;
undefined4 DAT_101e43450;
undefined4 DAT_101e43454;
undefined4 DAT_101e43458;
undefined4 DAT_101e4345c;
undefined4 DAT_101e43460;
undefined4 DAT_101e43464;
undefined4 DAT_101e43468;
undefined4 DAT_101e4346c;
undefined4 DAT_101e43470;
undefined4 DAT_101e43474;
undefined4 DAT_101e43478;
undefined4 DAT_101e4347c;
undefined4 DAT_101e43480;
undefined4 DAT_101e43484;
undefined4 DAT_101e43488;
undefined4 DAT_101e4348c;
undefined4 DAT_101e43490;
undefined4 DAT_101e43494;
undefined4 DAT_101e43498;
undefined4 DAT_101e4349c;
undefined4 DAT_101e434a0;
undefined4 DAT_101e434a4;
undefined4 DAT_101e434a8;
undefined4 DAT_101e434ac;
undefined4 DAT_101e434b0;
undefined4 DAT_101e434b4;
undefined4 DAT_101e434b8;
undefined4 DAT_101e434bc;
undefined4 DAT_101e434c0;
undefined4 DAT_101e434c4;
undefined4 DAT_101e434c8;
undefined4 DAT_101e434cc;
undefined4 DAT_101e434d0;
undefined4 DAT_101e434d4;
undefined4 DAT_101e434d8;
undefined4 DAT_101e434dc;
undefined4 DAT_101e434e0;
undefined4 DAT_101e434e4;
undefined4 DAT_101e434e8;
undefined4 DAT_101e434ec;
undefined4 DAT_101e434f0;
undefined4 DAT_101e434f4;
undefined4 DAT_101e434f8;
undefined4 DAT_101e434fc;
undefined4 DAT_101e43500;
undefined4 DAT_101e43504;
undefined4 DAT_101e43508;
undefined4 DAT_101e4350c;
undefined4 DAT_101e43510;
undefined4 DAT_101e43514;
undefined4 DAT_101e43518;
undefined4 DAT_101e4351c;
undefined4 DAT_101e43520;
undefined4 DAT_101e43524;
undefined4 DAT_101e43528;
undefined4 DAT_101e4352c;
undefined4 DAT_101e43530;
undefined4 DAT_101e43534;
undefined4 DAT_101e43538;
undefined4 DAT_101e4353c;
undefined4 DAT_101e43540;
undefined4 DAT_101e43544;
undefined4 DAT_101e43548;
undefined4 DAT_101e4354c;
undefined4 DAT_101e43550;
undefined4 DAT_101e43554;
undefined4 DAT_101e43558;
undefined4 DAT_101e4355c;
undefined4 DAT_101e43560;
undefined4 DAT_101e43564;
undefined4 DAT_101e43568;
undefined4 DAT_101e4356c;
undefined4 DAT_101e43570;
undefined4 DAT_101e43574;
undefined4 DAT_101e43578;
undefined8 DAT_101d23608;
undefined thunk_FUN_1001db9e8;
undefined1 DAT_101d23641;
undefined8 DAT_101d23628;
undefined FUN_1001db9b0;
undefined FUN_1001db92c;
undefined8 DAT_101d23610;
undefined DAT_101d23638;
ulong DAT_101d23630;
char DAT_101d23640;
long DAT_101d23608;
undefined DAT_101d23620;
ulong DAT_101d23618;
undefined DAT_101d23610;
undefined8 DAT_101d23618;
long DAT_101d23630;
undefined1 DAT_101e4357c;
undefined2 DAT_101e4357e;
undefined2 DAT_101e43580;
undefined4 DAT_101e43582;
undefined4 DAT_101e43586;
undefined4 DAT_101e4358a;
undefined4 DAT_101e4358e;
undefined4 DAT_101e43592;
undefined4 DAT_101e43596;
undefined4 DAT_101e4359a;
undefined4 DAT_101e4359e;
undefined4 DAT_101e435a2;
undefined4 DAT_101e435a6;
undefined4 DAT_101e435aa;
undefined4 DAT_101e435ae;
undefined4 DAT_101e435b2;
undefined4 DAT_101e435b6;
undefined4 DAT_101e435ba;
undefined4 DAT_101e435be;
undefined4 DAT_101e435c2;
undefined4 DAT_101e435c6;
undefined4 DAT_101e435ca;
undefined4 DAT_101e435ce;
undefined4 DAT_101e435d2;
undefined4 DAT_101e435d6;
undefined4 DAT_101e435da;
undefined4 DAT_101e435de;
undefined4 DAT_101e435e2;
undefined4 DAT_101e435e6;
undefined4 DAT_101e435ea;
undefined4 DAT_101e435ee;
undefined4 DAT_101e435f2;
undefined4 DAT_101e435f6;
undefined4 DAT_101e435fa;
undefined4 DAT_101e435fe;
undefined4 DAT_101e43602;
undefined4 DAT_101e43606;
undefined4 DAT_101e4360a;
undefined4 DAT_101e4360e;
undefined4 DAT_101e43612;
undefined4 DAT_101e43616;
undefined4 DAT_101e4361a;
undefined4 DAT_101e4361e;
undefined4 DAT_101e43622;
undefined4 DAT_101e43626;
undefined4 DAT_101e4362a;
undefined4 DAT_101e4362e;
undefined4 DAT_101e43632;
undefined4 DAT_101e43636;
undefined4 DAT_101e4363a;
undefined4 DAT_101e4363e;
undefined4 DAT_101e43642;
undefined4 DAT_101e43646;
undefined4 DAT_101e4364a;
undefined4 DAT_101e4364e;
undefined4 DAT_101e43654;
undefined4 DAT_101e43658;
undefined4 DAT_101e4365c;
undefined4 DAT_101e43660;
undefined4 DAT_101e43664;
undefined4 DAT_101e43668;
undefined4 DAT_101e4366c;
undefined4 DAT_101e43670;
undefined4 DAT_101e43674;
undefined4 DAT_101e43678;
undefined4 DAT_101e4367c;
undefined4 DAT_101e43680;
undefined4 DAT_101e43684;
undefined4 DAT_101e43688;
undefined4 DAT_101e4368c;
undefined4 DAT_101e43690;
undefined4 DAT_101e43694;
undefined4 DAT_101e43698;
undefined4 DAT_101e4369c;
undefined4 DAT_101e436a0;
undefined4 DAT_101e436a4;
undefined4 DAT_101e436a8;
undefined4 DAT_101e436ac;
undefined4 DAT_101e436b0;
undefined4 DAT_101e436b4;
undefined4 DAT_101e436b8;
undefined4 DAT_101e436bc;
undefined4 DAT_101e436c0;
undefined4 DAT_101e436c4;
undefined4 DAT_101e436c8;
undefined4 DAT_101e436cc;
undefined4 DAT_101e436d0;
undefined4 DAT_101e436d4;
undefined4 DAT_101e436d8;
undefined4 DAT_101e436dc;
undefined4 DAT_101e436e0;
undefined4 DAT_101e436e4;
undefined4 DAT_101e436e8;
undefined4 DAT_101e436ec;
undefined8 DAT_101d23620;
undefined8 DAT_101d23630;
undefined8 DAT_101d23638;
undefined *PTR_FUN_101468d68;
undefined *PTR_FUN_1014692b8;
undefined *PTR_FUN_101468eb0;
undefined FUN_1001dce54;
undefined FUN_1001dd038;
undefined FUN_1001dd150;
undefined *PTR_thunk_FUN_1001de800_101468ff8;
undefined FUN_1001dd294;
undefined thunk_FUN_1001de2b8;
undefined thunk_FUN_1001de39c;
undefined thunk_FUN_1001de314;
undefined FUN_1001dd3ec;
undefined FUN_1001dd3e4;
undefined thunk_FUN_1001de658;
undefined *PTR_thunk_FUN_1001deab0_101469170;
undefined *PTR_thunk_FUN_1001dfc14_101469428;
undefined8 DAT_101d23648;
long *DAT_101d23648;
undefined8 *DAT_101e436f0;
void *DAT_101e436f8;
pthread_mutex_t *DAT_101e436f8;
undefined *PTR_thunk_FUN_1001e1bb0_1014697c0;
undefined *PTR_thunk_FUN_10063eeb4_1014697e8;
undefined *PTR_FUN_101469830;
undefined *PTR_thunk_FUN_1001e2180_101469908;
undefined *PTR_s_gzip_101854948;
undefined FUN_1001e2cd8;
long DAT_101e43700;
long *DAT_101e43700;
undefined8 DAT_101e43700;
undefined4 DAT_101d23650;
undefined4 DAT_101d23658;
undefined4 DAT_101d23660;
undefined4 DAT_101d23664;
undefined4 DAT_101d2366c;
undefined4 DAT_101d23674;
undefined4 DAT_101d23678;
undefined4 DAT_101d2367c;
undefined4 DAT_101d23680;
undefined4 DAT_101d23684;
undefined4 DAT_101d2368c;
pointer PTR_s_build://MenuCharPortraitsHD.png_1018549d0;
pointer PTR_s_build://MenuCharPortraitsHD2.atl_1018549d8;
undefined4 DAT_101d236ac;
undefined1 DAT_101e43708;
undefined2 DAT_101e4370a;
undefined2 DAT_101e4370c;
undefined8 DAT_101e43710;
undefined8 DAT_101e43718;
undefined4 DAT_101e43720;
undefined4 DAT_101e43724;
undefined4 DAT_101e43728;
undefined4 DAT_101e4372c;
undefined4 DAT_101e43730;
undefined4 DAT_101e43734;
undefined4 DAT_101e43738;
undefined4 DAT_101e4373c;
undefined4 DAT_101e43740;
undefined4 DAT_101e43744;
undefined4 DAT_101e43748;
undefined4 DAT_101e4374c;
undefined4 DAT_101e43750;
undefined4 DAT_101e43754;
undefined4 DAT_101e43758;
undefined4 DAT_101e4375c;
undefined4 DAT_101e43760;
undefined4 DAT_101e43764;
undefined4 DAT_101e43768;
undefined4 DAT_101e4376c;
undefined4 DAT_101e43770;
undefined4 DAT_101e43774;
undefined4 DAT_101e43778;
undefined4 DAT_101e4377c;
undefined4 DAT_101e43780;
undefined4 DAT_101e43784;
undefined4 DAT_101e43788;
undefined4 DAT_101e4378c;
undefined4 DAT_101e43790;
undefined4 DAT_101e43794;
undefined4 DAT_101e43798;
undefined4 DAT_101e4379c;
undefined4 DAT_101e437a0;
undefined4 DAT_101e437a4;
undefined4 DAT_101e437a8;
undefined4 DAT_101e437ac;
undefined4 DAT_101e437b0;
undefined4 DAT_101e437b4;
undefined4 DAT_101e437b8;
undefined4 DAT_101e437bc;
undefined4 DAT_101e437c0;
undefined4 DAT_101e437c4;
undefined4 DAT_101e437c8;
undefined4 DAT_101e437cc;
undefined4 DAT_101e437d0;
undefined4 DAT_101e437d4;
undefined4 DAT_101e437d8;
undefined4 DAT_101e437dc;
undefined4 DAT_101e437e0;
undefined4 DAT_101e437e4;
undefined4 DAT_101e437e8;
undefined4 DAT_101e437ec;
undefined4 DAT_101e437f0;
undefined4 DAT_101e437f4;
undefined4 DAT_101e437f8;
undefined4 DAT_101e437fc;
undefined4 DAT_101e43800;
undefined4 DAT_101e43804;
undefined4 DAT_101e43808;
undefined4 DAT_101e4380c;
undefined4 DAT_101e43810;
undefined4 DAT_101e43814;
undefined4 DAT_101e43818;
undefined4 DAT_101e4381c;
undefined4 DAT_101e43820;
undefined4 DAT_101e43824;
undefined4 DAT_101e43828;
undefined4 DAT_101e4382c;
undefined4 DAT_101e43834;
undefined4 DAT_101e43838;
undefined4 DAT_101e4383c;
undefined4 DAT_101e43840;
undefined4 DAT_101e43844;
undefined4 DAT_101e43848;
undefined4 DAT_101e4384c;
undefined4 DAT_101e43850;
undefined4 DAT_101e43854;
undefined4 DAT_101e43858;
undefined4 DAT_101e4385c;
undefined4 DAT_101e43860;
undefined4 DAT_101e43864;
undefined4 DAT_101e43868;
undefined4 DAT_101e4386c;
undefined4 DAT_101e43870;
undefined4 DAT_101e43874;
undefined4 DAT_101e43878;
undefined4 DAT_101e4387c;
undefined4 DAT_101e43880;
undefined4 DAT_101e43884;
undefined4 DAT_101e43888;
undefined4 DAT_101e43830;
char *DAT_101e43890;
char *DAT_101e43898;
undefined DAT_101e438a0;
undefined4 DAT_101e438b0;
char *DAT_101e438b8;
char *DAT_101e438c0;
undefined DAT_101e438c8;
undefined4 DAT_101e438d8;
char *DAT_101e438e0;
char *DAT_101e438e8;
undefined DAT_101e438f0;
undefined4 DAT_101e43900;
undefined *DAT_101d23690;
undefined *DAT_101d23698;
undefined4 DAT_101d236a0;
undefined4 DAT_101d236a4;
undefined4 DAT_101d236a8;
undefined4 DAT_101d236bc;
undefined4 DAT_101d236c0;
undefined4 DAT_101d236c8;
undefined DAT_101d236d0;
undefined DAT_101d236e8;
undefined DAT_101d23700;
undefined DAT_101d23718;
undefined DAT_101d23730;
undefined DAT_101d23748;
undefined DAT_101d23760;
undefined8 UNK_101e438a8;
undefined8 UNK_101e438d0;
undefined8 UNK_101e438f8;
float DAT_101d23778;
undefined *PTR_thunk_FUN_1001e5908_101469960;
undefined8 DAT_101e43908;
undefined FUN_1001e46e4;
undefined *PTR_FUN_101469aa8;
long DAT_101e43908;
long *DAT_101e43908;
undefined *PTR_FUN_101469ba8;
undefined *PTR_thunk_FUN_1001e5ff0_101469d28;
undefined FUN_1001e66fc;
undefined4 DAT_101d918d8;
undefined4 DAT_101d918d4;
undefined FUN_1001e6b4c;
undefined FUN_1001e6b88;
undefined *PTR_thunk_FUN_1001e6bb0_101469e70;
undefined FUN_1001e6b9c;
undefined8 DAT_101e43910;
long DAT_101d23780;
long *DAT_101d23780;
long *DAT_101d23788;
int DAT_101854ab8;
undefined8 DAT_101d23780;
undefined8 DAT_101d23788;
long DAT_101d23790;
undefined8 DAT_101d23798;
undefined thunk_FUN_1001e7de4;
undefined8 DAT_101d23790;
long *DAT_101d23798;
undefined *PTR_FUN_10146a010;
undefined FUN_1001e8538;
undefined DAT_101158308;
undefined *PTR_thunk_FUN_1001e8844_10146a3b8;
undefined *PTR_FUN_10146a3f8;
undefined *PTR_FUN_10146a790;
pointer PTR_FUN_10146a7c8;
undefined thunk_FUN_1001e867c;
undefined *PTR_FUN_10146a7e8;
undefined *PTR____cxa_pure_virtual_10146a810;
undefined FUN_1001e927c;
pointer PTR_thunk_FUN_1001e94b8_10146a838;
pointer PTR_FUN_10146a858;
undefined *PTR_thunk_FUN_1001e9ab4_10146a878;
undefined *PTR_FUN_10146a8b0;
undefined *PTR_FUN_10146ac48;
pointer PTR_FUN_10146ac80;
undefined FUN_1001e9cb0;
undefined *PTR_FUN_10146aca0;
undefined *PTR_FUN_10146acd0;
undefined *PTR____cxa_pure_virtual_10146b068;
undefined thunk_FUN_1001e9d8c;
undefined *PTR_FUN_10146b090;
undefined *PTR_FUN_10146b108;
undefined FUN_1001eb68c;
pointer PTR_thunk_FUN_1001eb16c_10146b148;
undefined *PTR_FUN_10146b160;
undefined *PTR_FUN_10146b188;
pointer PTR____cxa_pure_virtual_10146b1b8;
undefined *PTR____cxa_pure_virtual_10146b1d0;
undefined *PTR____cxa_pure_virtual_10146b1f8;
undefined *PTR_FUN_10146b550;
undefined DAT_10115830c;
undefined *PTR_FUN_10146b228;
undefined *PTR____cxa_pure_virtual_10146b250;
undefined thunk_FUN_1001ebb90;
undefined thunk_FUN_1001eb81c;
undefined *PTR_s_build://DailyLogin_7Day.tga_1018549f8;
undefined4 DAT_101d237e0;
undefined thunk_FUN_1001ec300;
undefined4 DAT_101d237e4;
undefined *PTR_thunk_FUN_1001ee2bc_10146b278;
pointer PTR_FUN_10146b308;
undefined thunk_FUN_1001ee514;
undefined *PTR____cxa_pure_virtual_10146b358;
undefined FUN_1001ec0b0;
undefined FUN_1001eef94;
undefined FUN_1001ec09c;
undefined *PTR____cxa_pure_virtual_10146b328;
undefined *PTR_FUN_10146e8c8;
undefined4 DAT_101d23830;
undefined4 DAT_101d23834;
undefined FUN_1001eedcc;
undefined4 DAT_101d91894;
undefined FUN_1001eee00;
undefined FUN_1001eedd4;
undefined *PTR_FUN_10146b3d8;
undefined *PTR_FUN_10146b410;
undefined *PTR____cxa_pure_virtual_10146b450;
undefined thunk_FUN_1001ef328;
pointer PTR_thunk_FUN_1001ef708_10146b478;
pointer PTR_FUN_10146b498;
undefined thunk_FUN_100219efc;
undefined *PTR_thunk_FUN_1001efa40_10146b4b8;
undefined *PTR_FUN_10146b4e0;
pointer PTR_FUN_10146b530;
undefined *PTR_FUN_10146b508;
undefined *PTR_FUN_10146b590;
undefined *PTR_FUN_10146b5e0;
undefined *PTR_FUN_10146b610;
undefined *PTR____cxa_pure_virtual_10146b638;
byte DAT_101d238c7;
size_t DAT_101d238b8;
undefined8 DAT_101d238b0;
byte DAT_101d238df;
size_t DAT_101d238d0;
undefined8 DAT_101d238c8;
byte DAT_101d238f7;
size_t DAT_101d238e8;
undefined8 DAT_101d238e0;
undefined *PTR_FUN_10146b668;
undefined *PTR____cxa_pure_virtual_10146b690;
undefined *PTR_FUN_10146b6b8;
undefined *PTR_FUN_10146b6f0;
undefined *PTR____cxa_pure_virtual_10146ba88;
undefined *PTR_FUN_10146bab8;
undefined *PTR_FUN_10146bb18;
undefined *PTR____cxa_pure_virtual_10146beb0;
undefined FUN_1001f0964;
undefined FUN_1001f0960;
undefined DAT_101e43a90;
undefined1 DAT_101e43918;
undefined2 DAT_101e4391a;
undefined2 DAT_101e4391c;
undefined4 DAT_101e4391e;
undefined4 DAT_101e43922;
undefined4 DAT_101e43926;
undefined4 DAT_101e4392a;
undefined4 DAT_101e4392e;
undefined4 DAT_101e43932;
undefined4 DAT_101e43936;
undefined4 DAT_101e4393a;
undefined4 DAT_101e4393e;
undefined4 DAT_101e43942;
undefined4 DAT_101e43946;
undefined4 DAT_101e4394a;
undefined4 DAT_101e4394e;
undefined4 DAT_101e43952;
undefined4 DAT_101e43956;
undefined4 DAT_101e4395a;
undefined4 DAT_101e4395e;
undefined4 DAT_101e43962;
undefined4 DAT_101e43966;
undefined4 DAT_101e4396a;
undefined4 DAT_101e4396e;
undefined4 DAT_101e43972;
undefined4 DAT_101e43976;
undefined4 DAT_101e4397a;
undefined4 DAT_101e4397e;
undefined4 DAT_101e43982;
undefined4 DAT_101e43986;
undefined4 DAT_101e4398a;
undefined4 DAT_101e4398e;
undefined4 DAT_101e43992;
undefined4 DAT_101e43996;
undefined4 DAT_101e4399a;
undefined4 DAT_101e4399e;
undefined4 DAT_101e439a2;
undefined4 DAT_101e439a6;
undefined4 DAT_101e439aa;
undefined4 DAT_101e439ae;
undefined4 DAT_101e439b2;
undefined4 DAT_101e439b6;
undefined4 DAT_101e439ba;
undefined4 DAT_101e439be;
undefined4 DAT_101e439c2;
undefined4 DAT_101e439c6;
undefined4 DAT_101e439ca;
undefined4 DAT_101e439ce;
undefined4 DAT_101e439d2;
undefined4 DAT_101e439d6;
undefined4 DAT_101e439da;
undefined4 DAT_101e439de;
undefined4 DAT_101e439e2;
undefined4 DAT_101e439e6;
undefined4 DAT_101e439ea;
undefined4 DAT_101e439f4;
undefined4 DAT_101e439f8;
undefined4 DAT_101e439fc;
undefined4 DAT_101e43a00;
undefined4 DAT_101e43a0c;
undefined4 DAT_101e43a10;
undefined4 DAT_101e43a14;
undefined4 DAT_101e439f0;
undefined4 DAT_101e43a18;
undefined4 DAT_101e43a04;
undefined4 DAT_101e43a1c;
undefined4 DAT_101e43a08;
undefined4 DAT_101e43a20;
undefined4 DAT_101e43a24;
undefined4 DAT_101e43a28;
undefined4 DAT_101e43a2c;
undefined4 DAT_101e43a30;
undefined4 DAT_101e43a34;
undefined4 DAT_101e43a38;
undefined4 DAT_101e43a3c;
undefined4 DAT_101e43a40;
undefined4 DAT_101e43a44;
undefined4 DAT_101e43a48;
undefined4 DAT_101e43a4c;
undefined4 DAT_101e43a50;
undefined4 DAT_101e43a54;
undefined4 DAT_101e43a58;
undefined4 DAT_101e43a5c;
undefined4 DAT_101e43a60;
undefined4 DAT_101e43a64;
undefined4 DAT_101e43a68;
undefined4 DAT_101e43a6c;
undefined4 DAT_101e43a70;
undefined4 DAT_101e43a74;
undefined4 DAT_101e43a78;
undefined4 DAT_101e43a7c;
undefined4 DAT_101e43a80;
undefined4 DAT_101e43a84;
undefined4 DAT_101e43a88;
undefined *PTR_FUN_10146bf00;
undefined *PTR_FUN_10146bf38;
undefined *PTR____cxa_pure_virtual_10146bf68;
undefined thunk_FUN_1001f1bf8;
undefined *PTR_FUN_10146bf90;
undefined *PTR_FUN_10146bfd0;
undefined *PTR____cxa_pure_virtual_10146c368;
undefined *PTR_FUN_10146c3a0;
undefined *PTR_FUN_10146c3e0;
undefined *PTR_FUN_10146c778;
undefined *PTR____cxa_pure_virtual_10146c7b0;
pointer PTR_FUN_10146c7d8;
pointer PTR_FUN_10146c7f8;
pointer PTR_thunk_FUN_1001f2c64_10146c818;
pointer PTR_FUN_10146c838;
undefined *PTR_FUN_10146c858;
undefined thunk_FUN_1001f392c;
undefined *PTR_FUN_10146c8c0;
pointer PTR_FUN_10146c918;
undefined *PTR____cxa_pure_virtual_10146c948;
undefined thunk_FUN_1001f3a48;
undefined FUN_1001f3c5c;
undefined FUN_1001f3d84;
undefined FUN_1001f3d9c;
undefined FUN_1001f3db4;
pointer PTR_FUN_10146c930;
undefined FUN_1001f4134;
undefined *PTR_FUN_10146c978;
undefined *PTR_FUN_10146c9a8;
undefined *PTR____cxa_pure_virtual_10146c9d8;
undefined thunk_FUN_1001f3f84;
undefined *PTR_FUN_10146ca00;
undefined thunk_FUN_1001f4228;
undefined *PTR_FUN_10146ca30;
undefined *PTR____cxa_pure_virtual_10146ca60;
undefined thunk_FUN_1001f4444;
undefined *PTR_FUN_10146ca88;
undefined *PTR_FUN_10146cab8;
undefined *PTR____cxa_pure_virtual_10146cae8;
undefined *PTR_FUN_10146cb10;
undefined *PTR_FUN_10146cb78;
undefined *PTR_FUN_10146cf10;
undefined *PTR____cxa_pure_virtual_10146cf40;
undefined *PTR_FUN_10146cf98;
undefined *PTR_FUN_10146cfd0;
undefined *PTR_FUN_10146d368;
undefined *PTR____cxa_pure_virtual_10146d398;
undefined *PTR_thunk_FUN_1001f53b4_10146d3c0;
undefined *PTR_FUN_10146d3f0;
undefined FUN_1001f53a8;
undefined *PTR_FUN_10146d788;
pointer PTR_FUN_10146d7c0;
undefined FUN_1001f5644;
undefined *PTR_thunk_FUN_1001f5760_10146d7e0;
undefined *PTR_FUN_10146d810;
undefined *PTR_FUN_10146dba8;
undefined thunk_FUN_1001f5720;
pointer PTR_FUN_10146dbe0;
undefined *PTR_thunk_FUN_1001f5dd4_10146dc00;
undefined *PTR_FUN_10146dc68;
undefined *PTR_FUN_10146e000;
pointer PTR_FUN_10146e058;
pointer PTR_FUN_10146e070;
undefined FUN_1001f63c8;
undefined FUN_1001f6404;
undefined *PTR_thunk_FUN_1001f64ec_10146e090;
undefined *PTR_FUN_10146e0c0;
undefined *PTR_FUN_10146e458;
pointer PTR_FUN_10146e490;
undefined FUN_1001f67ec;
undefined *PTR_FUN_10146e4b0;
pointer PTR_thunk_FUN_1001f6bac_10146e4e8;
pointer PTR_FUN_10146e508;
pointer PTR_thunk_FUN_1001f6d44_10146e528;
pointer PTR_FUN_10146e568;
undefined thunk_FUN_1001f6e10;
pointer PTR_thunk_FUN_1001f6f30_10146e548;
pointer PTR_FUN_10146e588;
undefined *PTR_thunk_FUN_1001f78f4_10146e5a8;
undefined FUN_1001f8880;
undefined *PTR_thunk_FUN_1001f7d30_10146e5d8;
undefined *PTR_FUN_10146e600;
pointer PTR_FUN_10146e6b0;
undefined FUN_1001f7d18;
undefined FUN_1001f898c;
pointer PTR_thunk_FUN_1001f8044_10146e630;
pointer PTR_FUN_10146e6d0;
undefined *PTR_FUN_10146e650;
undefined *PTR_FUN_10146e680;
pointer PTR_thunk_FUN_1001f8b80_10146e6f0;
pointer PTR_FUN_10146e710;
undefined *PTR_FUN_10146e730;
pointer PTR_FUN_10146e7b0;
undefined thunk_FUN_1001f9f00;
undefined *PTR____cxa_pure_virtual_10146e7d0;
undefined thunk_FUN_1001f97d8;
undefined thunk_FUN_1001fa130;
undefined FUN_1001f95ec;
undefined FUN_1001f9600;
undefined FUN_1001fb074;
undefined FUN_1001fa99c;
undefined FUN_1001fa944;
undefined FUN_1001fa970;
undefined *PTR_FUN_10146e838;
undefined *PTR____cxa_pure_virtual_10146e880;
undefined1 DAT_101e43ab8;
undefined1 DAT_101e43ad0;
undefined DAT_101e43aa8;
undefined DAT_101e43ac0;
undefined *PTR____cxa_pure_virtual_10146e960;
undefined *PTR_FUN_10146e990;
undefined *PTR_FUN_10146e9d0;
undefined *PTR____cxa_pure_virtual_10146ea08;
undefined FUN_1001fc850;
undefined *PTR_s_rare_10146ea28;
undefined *PTR_FUN_10146ea50;
undefined *PTR_FUN_10146ea88;
undefined *PTR____cxa_pure_virtual_10146eab0;
undefined4 DAT_101d237a0;
undefined1 DAT_101e43ad8;
undefined2 DAT_101e43ada;
undefined2 DAT_101e43adc;
undefined4 DAT_101e43ade;
undefined4 DAT_101e43ae2;
undefined4 DAT_101e43ae6;
undefined4 DAT_101e43aea;
undefined4 DAT_101e43aee;
undefined4 DAT_101e43af2;
undefined4 DAT_101e43af6;
undefined4 DAT_101e43afa;
undefined4 DAT_101e43afe;
undefined4 DAT_101e43b02;
undefined4 DAT_101e43b06;
undefined4 DAT_101e43b0a;
undefined4 DAT_101e43b0e;
undefined4 DAT_101e43b12;
undefined4 DAT_101e43b16;
undefined4 DAT_101e43b1a;
undefined4 DAT_101e43b1e;
undefined4 DAT_101e43b22;
undefined4 DAT_101e43b26;
undefined4 DAT_101e43b2a;
undefined4 DAT_101e43b2e;
undefined4 DAT_101e43b32;
undefined4 DAT_101e43b36;
undefined4 DAT_101e43b3a;
undefined4 DAT_101e43b3e;
undefined4 DAT_101e43b42;
undefined4 DAT_101e43b46;
undefined4 DAT_101e43b4a;
undefined4 DAT_101e43b4e;
undefined4 DAT_101e43b52;
undefined4 DAT_101e43b56;
undefined4 DAT_101e43b5a;
undefined4 DAT_101e43b5e;
undefined4 DAT_101e43b62;
undefined4 DAT_101e43b66;
undefined4 DAT_101e43b6a;
undefined4 DAT_101e43b6e;
undefined4 DAT_101e43b72;
undefined4 DAT_101e43b76;
undefined4 DAT_101e43b7a;
undefined4 DAT_101e43b7e;
undefined4 DAT_101e43b82;
undefined4 DAT_101e43b86;
undefined4 DAT_101e43b8a;
undefined4 DAT_101e43b8e;
undefined4 DAT_101e43b92;
undefined4 DAT_101e43b96;
undefined4 DAT_101e43b9a;
undefined4 DAT_101e43b9e;
undefined4 DAT_101e43ba2;
undefined4 DAT_101e43ba6;
undefined4 DAT_101e43baa;
undefined4 DAT_101e43bb4;
undefined4 DAT_101e43bb8;
undefined4 DAT_101e43bbc;
undefined4 DAT_101e43bc0;
undefined4 DAT_101e43bcc;
undefined4 DAT_101e43bd0;
undefined4 DAT_101e43bd4;
undefined4 DAT_101e43bb0;
undefined4 DAT_101e43bd8;
undefined4 DAT_101e43bc4;
undefined4 DAT_101e43bdc;
undefined4 DAT_101e43bc8;
undefined4 DAT_101e43be0;
undefined4 DAT_101e43be4;
undefined4 DAT_101e43be8;
undefined4 DAT_101e43bec;
undefined4 DAT_101e43bf0;
undefined4 DAT_101e43bf4;
undefined4 DAT_101e43bf8;
undefined4 DAT_101e43bfc;
undefined4 DAT_101e43c00;
undefined4 DAT_101e43c04;
undefined4 DAT_101e43c08;
undefined4 DAT_101e43c0c;
undefined4 DAT_101e43c10;
undefined4 DAT_101e43c14;
undefined4 DAT_101e43c18;
undefined4 DAT_101e43c1c;
undefined4 DAT_101e43c20;
undefined4 DAT_101e43c24;
undefined4 DAT_101e43c28;
undefined4 DAT_101e43c2c;
undefined4 DAT_101e43c30;
undefined4 DAT_101e43c34;
undefined4 DAT_101e43c38;
undefined4 DAT_101e43c3c;
undefined4 DAT_101e43c40;
undefined4 DAT_101e43c44;
undefined4 DAT_101e43c48;
pointer PTR_FUN_10146ead8;
pointer PTR_FUN_10146eaf8;
undefined FUN_1001fdb84;
undefined FUN_1001fdc74;
undefined thunk_FUN_1001fe0d4;
undefined thunk_FUN_1001feee8;
undefined thunk_FUN_1001fedec;
undefined thunk_FUN_1001fefac;
undefined thunk_FUN_1001fef3c;
undefined *PTR_FUN_10146eb18;
undefined thunk_FUN_1001ff26c;
pointer PTR_FUN_10146eb78;
undefined thunk_FUN_1001ff088;
undefined *PTR_FUN_10146eb90;
undefined thunk_FUN_1001febf8;
undefined *PTR_FUN_10146ebc0;
undefined thunk_FUN_1001ff2c4;
undefined *PTR_FUN_10146ef58;
undefined thunk_FUN_1001ff5c0;
undefined *PTR____cxa_pure_virtual_10146ef88;
undefined thunk_FUN_1001ff430;
undefined FUN_1001ff8e4;
undefined FUN_1001ff8fc;
undefined FUN_1001ff920;
undefined FUN_1001ff93c;
undefined FUN_1001ff954;
undefined FUN_1001ff96c;
undefined FUN_1001ff988;
undefined FUN_1001ffa48;
undefined thunk_FUN_1001fe4cc;
undefined thunk_FUN_1001fe5c8;
undefined thunk_FUN_1001fe744;
undefined FUN_1001ffb74;
undefined thunk_FUN_1001fe7fc;
undefined FUN_1001fe980;
byte DAT_101e43c4c;
char DAT_101d23848;
byte DAT_101e43c4d;
undefined thunk_FUN_1001fe850;
undefined1 DAT_101d23848;
undefined FUN_1001ff424;
undefined thunk_FUN_1001fe8a4;
undefined *PTR_FUN_10146efc8;
undefined *PTR_FUN_10146f000;
undefined *PTR_FUN_10146f4e0;
undefined thunk_FUN_1002006a8;
undefined *PTR____cxa_pure_virtual_10146f510;
undefined thunk_FUN_100200708;
undefined thunk_FUN_1001fff28;
undefined thunk_FUN_1002008bc;
undefined *PTR_FUN_10146f398;
undefined thunk_FUN_100200938;
undefined *PTR_FUN_10146f540;
undefined *PTR_FUN_10146f590;
undefined *PTR____cxa_pure_virtual_10146f5d0;
undefined thunk_FUN_1002015f8;
undefined *PTR_FUN_10146f610;
undefined *PTR_FUN_10146f658;
undefined *PTR_FUN_10146f688;
undefined *PTR____cxa_pure_virtual_10146f6b0;
undefined DAT_101e43dc8;
undefined4 DAT_101d237a4;
undefined *PTR_s_5v5_standard_10146f6d8;
undefined4 DAT_101d23804;
undefined *PTR_s_very_easy_10146f710;
undefined1 DAT_101e43c50;
undefined2 DAT_101e43c52;
undefined2 DAT_101e43c54;
undefined4 DAT_101e43c56;
undefined4 DAT_101e43c5a;
undefined4 DAT_101e43c5e;
undefined4 DAT_101e43c62;
undefined4 DAT_101e43c66;
undefined4 DAT_101e43c6a;
undefined4 DAT_101e43c6e;
undefined4 DAT_101e43c72;
undefined4 DAT_101e43c76;
undefined4 DAT_101e43c7a;
undefined4 DAT_101e43c7e;
undefined4 DAT_101e43c82;
undefined4 DAT_101e43c86;
undefined4 DAT_101e43c8a;
undefined4 DAT_101e43c8e;
undefined4 DAT_101e43c92;
undefined4 DAT_101e43c96;
undefined4 DAT_101e43c9a;
undefined4 DAT_101e43c9e;
undefined4 DAT_101e43ca2;
undefined4 DAT_101e43ca6;
undefined4 DAT_101e43caa;
undefined4 DAT_101e43cae;
undefined4 DAT_101e43cb2;
undefined4 DAT_101e43cb6;
undefined4 DAT_101e43cba;
undefined4 DAT_101e43cbe;
undefined4 DAT_101e43cc2;
undefined4 DAT_101e43cc6;
undefined4 DAT_101e43cca;
undefined4 DAT_101e43cce;
undefined4 DAT_101e43cd2;
undefined4 DAT_101e43cd6;
undefined4 DAT_101e43cda;
undefined4 DAT_101e43cde;
undefined4 DAT_101e43ce2;
undefined4 DAT_101e43ce6;
undefined4 DAT_101e43cea;
undefined4 DAT_101e43cee;
undefined4 DAT_101e43cf2;
undefined4 DAT_101e43cf6;
undefined4 DAT_101e43cfa;
undefined4 DAT_101e43cfe;
undefined4 DAT_101e43d02;
undefined4 DAT_101e43d06;
undefined4 DAT_101e43d0a;
undefined4 DAT_101e43d0e;
undefined4 DAT_101e43d12;
undefined4 DAT_101e43d16;
undefined4 DAT_101e43d1a;
undefined4 DAT_101e43d1e;
undefined4 DAT_101e43d22;
undefined4 DAT_101e43d2c;
undefined4 DAT_101e43d30;
undefined4 DAT_101e43d34;
undefined4 DAT_101e43d38;
undefined4 DAT_101e43d44;
undefined4 DAT_101e43d48;
undefined4 DAT_101e43d4c;
undefined4 DAT_101e43d28;
undefined4 DAT_101e43d50;
undefined4 DAT_101e43d3c;
undefined4 DAT_101e43d54;
undefined4 DAT_101e43d40;
undefined4 DAT_101e43d58;
undefined4 DAT_101e43d5c;
undefined4 DAT_101e43d60;
undefined4 DAT_101e43d64;
undefined4 DAT_101e43d68;
undefined4 DAT_101e43d6c;
undefined4 DAT_101e43d70;
undefined4 DAT_101e43d74;
undefined4 DAT_101e43d78;
undefined4 DAT_101e43d7c;
undefined4 DAT_101e43d80;
undefined4 DAT_101e43d84;
undefined4 DAT_101e43d88;
undefined4 DAT_101e43d8c;
undefined4 DAT_101e43d90;
undefined4 DAT_101e43d94;
undefined4 DAT_101e43d98;
undefined4 DAT_101e43d9c;
undefined4 DAT_101e43da0;
undefined4 DAT_101e43da4;
undefined4 DAT_101e43da8;
undefined4 DAT_101e43dac;
undefined4 DAT_101e43db0;
undefined4 DAT_101e43db4;
undefined4 DAT_101e43db8;
undefined4 DAT_101e43dbc;
undefined4 DAT_101e43dc0;
pointer PTR_FUN_10146f748;
pointer PTR_FUN_10146f768;
undefined DAT_10115834f;
undefined *PTR_FUN_10146f788;
undefined *PTR_FUN_10146f7e0;
undefined *PTR_FUN_10146f820;
undefined *PTR_FUN_10146f850;
undefined *PTR____cxa_pure_virtual_10146f878;
undefined DAT_101158353;
undefined thunk_FUN_100204720;
undefined *PTR_FUN_10146f8a8;
undefined *PTR____cxa_pure_virtual_10146f8d8;
undefined *PTR_FUN_10146f908;
undefined *PTR_FUN_10146f930;
pointer PTR_FUN_10146fcc8;
undefined *PTR_thunk_FUN_100205540_10146fce8;
undefined thunk_FUN_1002054cc;
undefined thunk_FUN_1002057d4;
pointer PTR_thunk_FUN_100205b8c_10146fd18;
pointer PTR_FUN_10146fd38;
undefined thunk_FUN_100205e98;
undefined *PTR_thunk_FUN_10020698c_10146fd58;
undefined *PTR_FUN_10146fd80;
pointer PTR_FUN_10146fda8;
undefined *PTR_FUN_10146fdc8;
undefined *PTR____cxa_pure_virtual_10146fdf8;
undefined *PTR_FUN_10146fe28;
undefined *PTR_FUN_10146fe78;
undefined *PTR_FUN_10146fea8;
undefined *PTR____cxa_pure_virtual_101470240;
pointer PTR_FUN_101470280;
pointer PTR_FUN_1014702a0;
undefined *PTR_thunk_FUN_100207574_1014702c0;
pointer PTR_FUN_101470300;
undefined *PTR_FUN_101470320;
pointer PTR____cxa_pure_virtual_1014706b8;
pointer PTR_FUN_1014706d8;
undefined thunk_FUN_1002077f0;
undefined thunk_FUN_100207880;
undefined *PTR_thunk_FUN_100207dd4_1014706f8;
undefined *PTR_FUN_101470730;
undefined *PTR_FUN_101470ac8;
undefined *PTR_FUN_101470b00;
undefined *PTR_FUN_101470b30;
pointer PTR_FUN_101470b68;
undefined thunk_FUN_100208000;
undefined FUN_10034bef0;
undefined *PTR_thunk_FUN_100208b4c_101470b88;
pointer PTR_FUN_101470bb8;
pointer PTR_FUN_101470bd8;
undefined thunk_FUN_100208ec8;
undefined thunk_FUN_100208d44;
undefined *PTR_FUN_101470bf8;
undefined *PTR____cxa_pure_virtual_101470c28;
undefined *PTR_FUN_101470c58;
undefined *PTR____cxa_pure_virtual_101470c80;
undefined DAT_101470ca8;
undefined *PTR_FUN_101470ce8;
undefined *PTR_FUN_101471080;
undefined *PTR____cxa_pure_virtual_1014710b8;
undefined thunk_FUN_1002099d0;
undefined thunk_FUN_100209b58;
undefined FUN_10020a598;
undefined *PTR_FUN_1014710e0;
undefined *PTR_FUN_101471130;
undefined thunk_FUN_10020a3d8;
pointer PTR_FUN_1014714d8;
undefined *PTR____cxa_pure_virtual_1014714f8;
undefined thunk_FUN_10020a080;
undefined FUN_10020a560;
undefined *PTR_FUN_101471528;
undefined *PTR_FUN_1014715a0;
undefined *PTR_FUN_1014715d0;
undefined *PTR____cxa_pure_virtual_101471968;
undefined thunk_FUN_10020b280;
undefined FUN_10020b910;
undefined thunk_FUN_10020c964;
undefined thunk_FUN_10020c7b4;
undefined thunk_FUN_10020c88c;
undefined thunk_FUN_10020b3c0;
undefined thunk_FUN_10020b41c;
undefined *PTR_FUN_101471b00;
undefined *PTR_FUN_101471b30;
pointer PTR_FUN_101471ec8;
undefined DAT_101471ee0;
undefined *PTR_FUN_101471f38;
undefined *PTR____cxa_pure_virtual_101471f78;
undefined *PTR_FUN_1014719a8;
undefined *PTR_FUN_101471a68;
undefined *PTR_FUN_101471ac0;
undefined thunk_FUN_10020dbd0;
undefined FUN_10020dbc4;
undefined FUN_100111120;
undefined thunk_FUN_10020ff34;
undefined FUN_1002104c4;
undefined FUN_1002104d0;
undefined thunk_FUN_10020fc14;
undefined thunk_FUN_10020fdf0;
pointer PTR_FUN_101471ff8;
undefined FUN_100211ec0;
undefined FUN_100212748;
undefined FUN_1002127ac;
undefined FUN_100211fb8;
undefined FUN_1002127f4;
undefined *PTR_FUN_101471fc0;
undefined FUN_100211fb4;
pointer PTR_FUN_101472020;
undefined FUN_100211fe0;
pointer PTR_FUN_101472040;
undefined FUN_100211fbc;
pointer PTR_FUN_101472060;
undefined FUN_1002122ec;
pointer PTR_FUN_101472080;
undefined FUN_100212260;
pointer PTR_FUN_1014720a0;
undefined FUN_1002123b0;
pointer PTR_FUN_1014720c0;
undefined FUN_1002122fc;
undefined *PTR____cxa_pure_virtual_101472158;
undefined FUN_1002123c4;
undefined FUN_1002123b4;
undefined FUN_100212650;
undefined FUN_10021258c;
undefined FUN_1002127e4;
undefined FUN_10021270c;
undefined FUN_1002127f0;
undefined FUN_10021551c;
undefined FUN_100211ee0;
undefined FUN_100211f18;
undefined FUN_100211f4c;
undefined FUN_100211f84;
undefined FUN_100211fe4;
undefined FUN_10021201c;
undefined FUN_100212264;
undefined FUN_10021229c;
undefined FUN_100212300;
undefined FUN_1002123c8;
undefined FUN_100212400;
undefined FUN_100212548;
undefined FUN_100212590;
undefined FUN_100212654;
undefined FUN_10021268c;
undefined FUN_100212710;
undefined FUN_1002154f8;
undefined FUN_100211850;
undefined *PTR_s_build://MenuCharPortraitsHD.png_1018549d0;
undefined *PTR_s_build://MenuCharPortraitsHD2.atl_1018549d8;
undefined *PTR_s_build://SpoilsOfWarPartsCommon.t_101854a50;
pointer PTR_thunk_FUN_100214410_1014720e0;
pointer PTR_FUN_101472108;
pointer PTR_FUN_101472130;
pointer PTR_FUN_10148df60;
undefined FUN_10021183c;
undefined *PTR_thunk_FUN_100214410_10148df38;
undefined *PTR_FUN_101472190;
undefined *PTR____cxa_pure_virtual_1014721c0;
undefined thunk_FUN_100217520;
undefined DAT_101158388;
undefined *PTR_FUN_1014721f0;
undefined *PTR____cxa_pure_virtual_101472220;
undefined thunk_FUN_10021780c;
undefined *PTR_FUN_101472250;
undefined *PTR_FUN_101472298;
undefined *PTR_FUN_101472630;
undefined *PTR____cxa_pure_virtual_101472668;
undefined *PTR_FUN_101472690;
undefined *PTR____cxa_pure_virtual_1014726c8;
undefined *PTR_FUN_101472700;
undefined FUN_100217fa4;
undefined *PTR____cxa_pure_virtual_101472728;
undefined *PTR_FUN_101472750;
undefined *PTR_FUN_101472780;
pointer PTR_FUN_1014727b0;
undefined thunk_FUN_1002e905c;
undefined *PTR_thunk_FUN_1002184bc_1014727d0;
undefined *PTR_FUN_101472808;
undefined *PTR_FUN_101472ba0;
pointer PTR_FUN_101472bd8;
undefined *PTR_FUN_101472bf8;
undefined *PTR_FUN_101472c80;
undefined *PTR____cxa_pure_virtual_101472cc0;
undefined *PTR_FUN_101472d30;
undefined4 DAT_101d237ec;
undefined *PTR_FUN_101472e60;
undefined thunk_FUN_1001b3648;
undefined *PTR_FUN_101472f90;
undefined *PTR_FUN_1014730f0;
undefined *PTR_FUN_101473220;
undefined4 DAT_101d237f0;
undefined *PTR_FUN_101473378;
undefined *PTR_thunk_FUN_10021a6bc_1014734a8;
long DAT_101d237a8;
undefined *PTR_FUN_1014735f0;
undefined *PTR_FUN_101473728;
undefined8 DAT_101d237a8;
undefined4 DAT_101d237f4;
undefined *PTR_FUN_101473ac0;
undefined *PTR_FUN_101473bf0;
undefined *PTR_thunk_FUN_10021c120_101473d20;
undefined *PTR_s_build://SpoilsOfWarBg.png_101854a58;
undefined thunk_FUN_10021d18c;
undefined thunk_FUN_10021d134;
undefined thunk_FUN_10021d1e4;
undefined *PTR_thunk_FUN_10021ccfc_101473e70;
undefined thunk_FUN_10021d23c;
undefined4 DAT_101d23814;
undefined FUN_10021d474;
undefined FUN_10021d5d4;
undefined *PTR_s_build://ModalCommon.atlas_101854a68;
undefined FUN_10021d604;
undefined4 DAT_101d23818;
undefined FUN_10021d764;
undefined FUN_10021d794;
undefined *PTR_FUN_101473fa0;
undefined DAT_101158398;
undefined *PTR_FUN_10148bdf0;
undefined *PTR_FUN_1014740d0;
long DAT_101d237b0;
undefined *PTR_thunk_FUN_1001b4464_101474200;
undefined8 DAT_101d237b0;
undefined FUN_10021e964;
undefined thunk_FUN_10021f4a0;
undefined thunk_FUN_10021f400;
undefined FUN_10021e97c;
undefined *PTR_thunk_FUN_10021ec78_101474330;
undefined *PTR_FUN_101474468;
undefined *PTR_s_build://Frames.tga_101854a00;
undefined *PTR_FUN_101474490;
undefined *PTR_FUN_1014745d8;
undefined *PTR_FUN_101474708;
undefined thunk_FUN_100220084;
undefined *PTR_thunk_FUN_1002204a0_101474860;
undefined *PTR_FUN_101474990;
undefined *PTR_FUN_101474ac0;
undefined *PTR_FUN_101474bf0;
undefined thunk_FUN_100221158;
undefined FUN_100221068;
undefined *PTR_FUN_10146e8f8;
undefined *PTR_FUN_10146e930;
undefined *PTR_thunk_FUN_100221254_101474d20;
undefined thunk_FUN_100221fe4;
long DAT_101d237b8;
undefined *PTR_FUN_101474e50;
undefined8 DAT_101d237b8;
undefined *PTR_FUN_101474f80;
undefined *PTR_thunk_FUN_100221b6c_1014750b0;
undefined FUN_100221b64;
undefined FUN_100221f88;
undefined FUN_10022254c;
undefined FUN_100222544;
undefined *PTR_FUN_1014751e0;
undefined *PTR_FUN_101475318;
undefined *PTR_FUN_1014756b0;
undefined *PTR_FUN_1014757e0;
undefined thunk_FUN_10022325c;
undefined thunk_FUN_1002230f4;
undefined FUN_100223768;
undefined thunk_FUN_1002233a4;
undefined thunk_FUN_10022344c;
undefined *PTR_FUN_101475910;
undefined *PTR_FUN_101475a48;
undefined *PTR_thunk_FUN_100223f58_101475b78;
undefined FUN_100223f48;
long DAT_101d237c0;
undefined *PTR_FUN_101475ca0;
undefined *PTR_FUN_101475dd8;
undefined8 DAT_101d237c0;
undefined *PTR_FUN_101476170;
undefined DAT_1011583cc;
undefined *PTR_FUN_1014762a0;
undefined DAT_1011583d4;
undefined thunk_FUN_100225238;
undefined *PTR_thunk_FUN_100225310_1014763d0;
undefined thunk_FUN_100225298;
undefined DAT_1011583dc;
undefined *PTR_thunk_FUN_10022542c_101476500;
undefined FUN_100225794;
undefined FUN_100225a8c;
undefined FUN_100225a78;
undefined *PTR_thunk_FUN_100225acc_101476630;
undefined *PTR_FUN_101476810;
undefined *PTR_thunk_FUN_100225acc_101476838;
undefined *PTR_FUN_101476a18;
undefined *PTR_FUN_101476a40;
undefined thunk_FUN_10022675c;
undefined *PTR_s_build://NeteaseLogo.png_1018549c0;
undefined *PTR_s_build://NeteaseChinaPublishing.p_1018549c8;
undefined FUN_100226570;
undefined FUN_100226690;
undefined thunk_FUN_10022a690;
undefined thunk_FUN_10022a54c;
undefined *PTR_thunk_FUN_10022ae54_101476ba8;
undefined *PTR_FUN_101476ca8;
undefined *PTR_FUN_101476cd8;
undefined thunk_FUN_10022a47c;
undefined FUN_1002295cc;
undefined thunk_FUN_10022a7e4;
undefined thunk_FUN_10022a92c;
undefined FUN_10022aa6c;
undefined FUN_10022aa68;
undefined thunk_FUN_10022aa70;
undefined thunk_FUN_10022abac;
undefined thunk_FUN_10022aca8;
undefined thunk_FUN_10022acf8;
undefined FUN_10022b2f0;
undefined *PTR_thunk_FUN_10022b2fc_101477070;
undefined *PTR_FUN_101477240;
undefined thunk_FUN_100231480;
undefined thunk_FUN_100231764;
undefined FUN_10022e360;
undefined thunk_FUN_100231900;
undefined *PTR_thunk_FUN_10022e36c_101477268;
undefined thunk_FUN_100231648;
undefined FUN_10022e32c;
undefined thunk_FUN_100231a5c;
undefined thunk_FUN_100231bcc;
undefined thunk_FUN_100231d94;
undefined thunk_FUN_100231c1c;
undefined thunk_FUN_100231cd8;
undefined FUN_10022f884;
undefined4 DAT_101158460;
undefined FUN_100230d40;
undefined *PTR_s_MENU_GUILD_AVAILABILITY_OFFLINE_1014774c0;
undefined *PTR_DAT_1014774e8;
undefined thunk_FUN_100232720;
undefined *PTR_thunk_FUN_100232c30_1014773d0;
undefined thunk_FUN_1002327cc;
pointer PTR_FUN_101464ce8;
undefined thunk_FUN_1002362dc;
undefined thunk_FUN_100236284;
undefined DAT_1011584ba;
undefined FUN_1002340f0;
undefined thunk_FUN_100236d08;
undefined thunk_FUN_1002365d8;
undefined thunk_FUN_100236dac;
undefined FUN_1002341f0;
undefined thunk_FUN_100236334;
undefined thunk_FUN_100236f6c;
undefined FUN_1002341f8;
undefined *PTR_thunk_FUN_1002342b0_101477520;
undefined *PTR_FUN_1014776a0;
undefined *PTR_FUN_1014776c8;
undefined FUN_100234180;
undefined FUN_1002341b0;
undefined FUN_100234200;
undefined FUN_100238170;
undefined FUN_1002381f4;
undefined FUN_10023816c;
undefined FUN_10023812c;
undefined *PTR_FUN_1014776f8;
undefined FUN_100238160;
undefined FUN_100237f54;
undefined FUN_100237f50;
undefined thunk_FUN_10023a3f8;
undefined *PTR_thunk_FUN_100238998_101477840;
undefined FUN_10023a5f0;
undefined *PTR_FUN_101477aa8;
undefined FUN_10023ac78;
undefined *PTR_thunk_FUN_10023b344_1014779a8;
undefined FUN_10023baec;
undefined thunk_FUN_10023cd58;
undefined thunk_FUN_10023ccdc;
undefined thunk_FUN_10023ce64;
undefined thunk_FUN_10023cdd4;
undefined *PTR_thunk_FUN_10023bbe4_101477bf0;
undefined thunk_FUN_10023cef4;
undefined *PTR_FUN_101477e00;
undefined FUN_10023bac0;
undefined FUN_10023bb80;
undefined FUN_10023bb14;
undefined FUN_10023bb88;
undefined thunk_FUN_10023c094;
undefined FUN_10023c04c;
undefined FUN_10023c048;
undefined FUN_10023e144;
undefined FUN_10023e08c;
undefined FUN_10023d1ec;
undefined thunk_FUN_10023c050;
undefined thunk_FUN_10023f2f4;
undefined thunk_FUN_10023f358;
undefined *PTR_thunk_FUN_10023f914_101478198;
undefined4 DAT_101854ac8;
undefined4 DAT_101854acc;
undefined4 DAT_101854ad0;
undefined4 DAT_101854ad4;
undefined4 DAT_101854ad8;
undefined4 DAT_101854adc;
undefined *PTR_FUN_1014782e0;
undefined *PTR_thunk_FUN_100240838_101478430;
undefined DAT_1011584d8;
undefined *PTR_FUN_101478578;
undefined *PTR_FUN_101478678;
undefined *PTR_thunk_FUN_100241754_101478778;
undefined *PTR_s_build://LowPriorityQueue.tga_1018549e8;
undefined FUN_1002416c4;
undefined thunk_FUN_100242b28;
undefined thunk_FUN_100242ad8;
undefined *PTR_s_MENU_LPQ_NOTIFICATION_DESCRIPTIO_1014788d0;
undefined *PTR_s_build://MenuBackground_HeroHub.p_101854990;
undefined DAT_101158514;
undefined *PTR_thunk_FUN_100243220_101478920;
undefined *PTR_FUN_101478b68;
undefined *PTR_FUN_101478f00;
undefined *PTR_FUN_101478f48;
undefined FUN_100243200;
undefined *PTR_FUN_101478fa0;
undefined thunk_FUN_100246a3c;
undefined FUN_1002469bc;
undefined FUN_100245a14;
undefined *PTR_thunk_FUN_100246ba4_101479a98;
undefined *PTR_thunk_FUN_100246f28_101478fc8;
undefined *PTR_FUN_101479158;
undefined *PTR_FUN_1014794f0;
undefined *PTR_FUN_1014796d8;
undefined *PTR_FUN_101479700;
undefined DAT_101158528;
undefined FUN_100247ed4;
undefined *PTR_FUN_101479c18;
undefined FUN_100248318;
undefined *PTR_thunk_FUN_100225acc_101479dd0;
undefined *PTR_FUN_101479fb0;
undefined *PTR_thunk_FUN_10024b44c_101479fd8;
undefined *PTR_FUN_10147a228;
undefined *PTR_FUN_10147a5c0;
undefined thunk_FUN_1002194d0;
undefined *PTR_FUN_10147a620;
undefined *PTR_FUN_10147a678;
undefined thunk_FUN_100252b24;
undefined thunk_FUN_100252a20;
undefined FUN_10024b3c4;
undefined thunk_FUN_10024e69c;
undefined FUN_10024b3d4;
undefined DAT_101158538;
undefined FUN_10024b3e4;
undefined DAT_101158540;
undefined FUN_10024b3dc;
undefined DAT_101158590;
undefined thunk_FUN_100252bb8;
undefined FUN_10024b388;
undefined thunk_FUN_100251990;
undefined FUN_10024b400;
undefined FUN_10024b440;
undefined FUN_10024b438;
undefined DAT_101158584;
undefined FUN_10024f37c;
undefined FUN_10024f384;
undefined *PTR_FUN_10147a6b8;
undefined FUN_1002501b4;
undefined *PTR_s_MENU_PARTY_COULD_NOT_INVITE_NOT__10147a828;
undefined *PTR_thunk_FUN_1002546e8_10147a850;
undefined *PTR_FUN_10147a9c0;
undefined thunk_FUN_100254ed8;
undefined FUN_100254f48;
undefined thunk_FUN_1002587e8;
undefined *PTR_thunk_FUN_100256f78_10147a9e8;
undefined *PTR_FUN_10147ab58;
undefined DAT_101158614;
undefined thunk_FUN_1002599f8;
undefined FUN_100256b68;
undefined FUN_100256ba0;
undefined FUN_100256b6c;
undefined thunk_FUN_100259c48;
undefined FUN_100259be0;
undefined *PTR_s_build://Chests.tga_1018549e0;
undefined *PTR_thunk_FUN_100259034_10147ab80;
undefined FUN_10025b11c;
undefined thunk_FUN_10025bee4;
undefined thunk_FUN_10025b448;
undefined *PTR_thunk_FUN_10025b12c_10147ac80;
undefined *PTR_thunk_FUN_10025cfb8_10147ade8;
undefined *PTR_FUN_10147af98;
undefined *PTR_FUN_10147b330;
undefined thunk_FUN_10025e0c4;
undefined FUN_10025cd4c;
undefined FUN_10025cd68;
undefined thunk_FUN_10025e16c;
undefined thunk_FUN_10025d244;
undefined FUN_10025cfa0;
undefined FUN_10025cd14;
undefined8 DAT_101d237c8;
undefined1 DAT_101e43de0;
undefined2 DAT_101e43de2;
undefined2 DAT_101e43de4;
undefined4 DAT_101e43de6;
undefined4 DAT_101e43dea;
undefined4 DAT_101e43dee;
undefined4 DAT_101e43df2;
undefined4 DAT_101e43df6;
undefined4 DAT_101e43dfa;
undefined4 DAT_101e43dfe;
undefined4 DAT_101e43e02;
undefined4 DAT_101e43e06;
undefined4 DAT_101e43e0a;
undefined4 DAT_101e43e0e;
undefined4 DAT_101e43e12;
undefined4 DAT_101e43e16;
undefined4 DAT_101e43e1a;
undefined4 DAT_101e43e1e;
undefined4 DAT_101e43e22;
undefined4 DAT_101e43e26;
undefined4 DAT_101e43e2a;
undefined4 DAT_101e43e2e;
undefined4 DAT_101e43e32;
undefined4 DAT_101e43e36;
undefined4 DAT_101e43e3a;
undefined4 DAT_101e43e3e;
undefined4 DAT_101e43e42;
undefined4 DAT_101e43e46;
undefined4 DAT_101e43e4a;
undefined4 DAT_101e43e4e;
undefined4 DAT_101e43e52;
undefined4 DAT_101e43e56;
undefined4 DAT_101e43e5a;
undefined4 DAT_101e43e5e;
undefined4 DAT_101e43e62;
undefined4 DAT_101e43e66;
undefined4 DAT_101e43e6a;
undefined4 DAT_101e43e6e;
undefined4 DAT_101e43e72;
undefined4 DAT_101e43e76;
undefined4 DAT_101e43e7a;
undefined4 DAT_101e43e7e;
undefined4 DAT_101e43e82;
undefined4 DAT_101e43e86;
undefined4 DAT_101e43e8a;
undefined4 DAT_101e43e8e;
undefined4 DAT_101e43e92;
undefined4 DAT_101e43e96;
undefined4 DAT_101e43e9a;
undefined4 DAT_101e43e9e;
undefined4 DAT_101e43ea2;
undefined4 DAT_101e43ea6;
undefined4 DAT_101e43eaa;
undefined4 DAT_101e43eae;
undefined4 DAT_101e43eb2;
undefined4 DAT_101e43ebc;
undefined4 DAT_101e43ec4;
undefined4 DAT_101e43ec0;
undefined4 DAT_101e43ec8;
undefined4 DAT_101e43ed4;
undefined4 DAT_101e43ed8;
undefined4 DAT_101e43eb8;
undefined4 DAT_101e43edc;
undefined4 DAT_101e43ecc;
undefined4 DAT_101e43ee0;
undefined4 DAT_101e43ed0;
undefined4 DAT_101e43ee4;
undefined4 DAT_101e43ee8;
undefined4 DAT_101e43eec;
undefined4 DAT_101e43ef0;
undefined4 DAT_101e43ef4;
undefined4 DAT_101e43ef8;
undefined4 DAT_101e43efc;
undefined4 DAT_101e43f00;
undefined4 DAT_101e43f04;
undefined4 DAT_101e43f08;
undefined4 DAT_101e43f0c;
undefined4 DAT_101e43f10;
undefined4 DAT_101e43f14;
undefined4 DAT_101e43f18;
undefined4 DAT_101e43f1c;
undefined4 DAT_101e43f20;
undefined4 DAT_101e43f24;
undefined4 DAT_101e43f28;
undefined4 DAT_101e43f2c;
undefined4 DAT_101e43f30;
undefined4 DAT_101e43f34;
undefined4 DAT_101e43f38;
undefined4 DAT_101e43f3c;
undefined4 DAT_101e43f40;
undefined4 DAT_101e43f44;
undefined4 DAT_101e43f48;
undefined4 DAT_101e43f4c;
undefined4 DAT_101e43f50;
undefined8 DAT_101e43f58;
undefined8 DAT_101e43f60;
undefined *PTR_thunk_FUN_10025f468_10147b360;
undefined *PTR_FUN_10147b4d0;
undefined DAT_101158624;
undefined FUN_10025fb48;
undefined FUN_100260220;
char DAT_101854ae0;
undefined FUN_100260230;
undefined FUN_100260228;
undefined FUN_100260238;
undefined *PTR_thunk_FUN_100260244_10147b868;
undefined FUN_100261b5c;
undefined FUN_100261ba0;
undefined thunk_FUN_1002629d0;
undefined thunk_FUN_100262898;
undefined thunk_FUN_1002642f0;
undefined FUN_100261bd4;
undefined FUN_100261d7c;
undefined thunk_FUN_1002643c4;
undefined *PTR_thunk_FUN_100261d9c_10147b9d0;
undefined FUN_1002645cc;
undefined *PTR_FUN_10147bb38;
undefined thunk_FUN_100262a8c;
undefined FUN_100264250;
undefined thunk_FUN_100264b5c;
undefined *PTR_thunk_FUN_100264cdc_10147bc38;
undefined *PTR_thunk_FUN_1002650dc_10147bd38;
undefined *PTR_FUN_10147bef0;
undefined FUN_1002650d0;
undefined *PTR_FUN_10147c288;
undefined thunk_FUN_10026645c;
undefined *PTR_thunk_FUN_1002667f0_10147c438;
pointer PTR_FUN_10147cc30;
undefined FUN_1002683fc;
undefined FUN_100268428;
undefined FUN_100268454;
undefined thunk_FUN_100268004;
undefined thunk_FUN_1002681ac;
undefined *PTR_thunk_FUN_100266d04_10147c5e0;
undefined *PTR_FUN_10147c810;
undefined *PTR_FUN_10147cba8;
undefined *PTR_FUN_10147cc00;
undefined *PTR_thunk_FUN_10026857c_10147cc48;
undefined *PTR_FUN_10147cdc8;
undefined FUN_100268554;
undefined thunk_FUN_100268900;
undefined *PTR_thunk_FUN_100268a70_10147ce20;
undefined *PTR_thunk_FUN_1002694e0_10147cf68;
undefined *PTR_s_build://Splash_GameOverLose.tga_10184e0d0;
undefined FUN_100269760;
undefined *PTR_thunk_FUN_10064e2bc_10147d0d0;
undefined FUN_10026a4c4;
undefined FUN_10026a4dc;
undefined FUN_10026a72c;
undefined FUN_10026aad4;
undefined FUN_10026aacc;
undefined *PTR_thunk_FUN_10026af2c_10147d338;
undefined *PTR_FUN_10147d488;
undefined *PTR_s_build://RewardScreenBackground.p_101854998;
undefined FUN_10026b224;
undefined thunk_FUN_10026b3b8;
undefined FUN_10026ba20;
undefined FUN_10026b948;
undefined thunk_FUN_10026c38c;
undefined thunk_FUN_10026c480;
undefined *PTR_thunk_FUN_10026bd2c_10147d4b0;
undefined FUN_10026bcdc;
undefined thunk_FUN_10026c6d0;
undefined *PTR_DAT_10147d5e8;
undefined FUN_10026ca30;
undefined thunk_FUN_10026c7cc;
undefined thunk_FUN_10026c784;
undefined FUN_10026c9bc;
undefined *PTR_thunk_FUN_10064221c_10147d610;
undefined FUN_10026d1b4;
undefined FUN_10026d1c8;
undefined *PTR_thunk_FUN_10026d344_10147d718;
undefined *PTR_thunk_FUN_10026f59c_10147d898;
undefined *PTR_FUN_10147dab0;
undefined *PTR_FUN_10147dae0;
undefined *PTR_FUN_10147de78;
undefined *PTR_FUN_10147ded8;
undefined *PTR_FUN_10147df00;
undefined *PTR_FUN_10147e208;
undefined *PTR_s_all_101854bb0;
undefined *PTR_s_throttled_101854bb8;
undefined *PTR_s_off_101854bc0;
undefined thunk_FUN_10027c440;
undefined thunk_FUN_10027c59c;
undefined thunk_FUN_10027c4dc;
undefined thunk_FUN_10027c674;
undefined FUN_100277548;
undefined thunk_FUN_10027c8b8;
undefined thunk_FUN_10027d0ac;
undefined thunk_FUN_10027cbb0;
undefined FUN_100277564;
undefined thunk_FUN_10027d744;
float DAT_101854aec;
float DAT_101d237d0;
float DAT_101854ae8;
float DAT_101854ae4;
undefined FUN_100274710;
undefined FUN_10027471c;
undefined *PTR_FUN_10147df40;
undefined *PTR_FUN_1014a5530;
undefined *PTR_FUN_1014a5658;
undefined *PTR_thunk_FUN_10064e2bc_1014a5ca0;
undefined *PTR_FUN_10147e088;
undefined FUN_10027c4d8;
undefined thunk_FUN_10027d778;
undefined FUN_10027c588;
undefined thunk_FUN_10027ca60;
undefined FUN_10027ca14;
undefined thunk_FUN_10027cfb0;
undefined thunk_FUN_10027d4ac;
undefined4 DAT_101d237d0;
undefined FUN_10027c43c;
undefined *PTR_s_MENU_FRIENDS_IN_MATCH_DETAILS_GA_10147e258;
undefined thunk_FUN_10028425c;
undefined thunk_FUN_1002841f0;
undefined thunk_FUN_1002842c8;
undefined *PTR_thunk_FUN_100280618_10147e408;
undefined thunk_FUN_100284428;
undefined *PTR_FUN_10147e5c8;
undefined FUN_10028033c;
undefined FUN_10028034c;
undefined thunk_FUN_1002847f8;
undefined FUN_1002849f4;
undefined thunk_FUN_100284bcc;
undefined thunk_FUN_100284a1c;
undefined FUN_1002841a4;
undefined FUN_100284fe0;
undefined *PTR_thunk_FUN_100285020_10147e960;
undefined thunk_FUN_10028a9cc;
undefined thunk_FUN_10028a890;
undefined thunk_FUN_10028aaa4;
undefined thunk_FUN_10028aa38;
undefined FUN_100286b4c;
undefined thunk_FUN_10028ae74;
undefined FUN_100286e08;
undefined thunk_FUN_10028b25c;
undefined *PTR_thunk_FUN_100286e10_10147ea60;
undefined *PTR_FUN_10147ec28;
undefined FUN_10028a980;
undefined FUN_10028b07c;
undefined thunk_FUN_10028b0a4;
undefined thunk_FUN_10028b180;
undefined FUN_10028b5c0;
undefined *PTR_FUN_10147efc0;
undefined *PTR_thunk_FUN_10028bb80_10147f0c0;
undefined8 DAT_101d237d8;
long *DAT_101d237d8;
undefined *PTR_thunk_FUN_10028d478_10147f458;
undefined DAT_101e440f0;
undefined DAT_101e44108;
undefined *PTR_thunk_FUN_10028e4c4_10147f5a0;
undefined FUN_10028e4a4;
undefined FUN_10028e434;
undefined thunk_FUN_10028e8b4;
undefined1 DAT_101e43f68;
undefined2 DAT_101e43f6a;
undefined2 DAT_101e43f6c;
undefined4 DAT_101e43f6e;
undefined4 DAT_101e43f72;
undefined4 DAT_101e43f76;
undefined4 DAT_101e43f7a;
undefined4 DAT_101e43f7e;
undefined4 DAT_101e43f82;
undefined4 DAT_101e43f86;
undefined4 DAT_101e43f8a;
undefined4 DAT_101e43f8e;
undefined4 DAT_101e43f92;
undefined4 DAT_101e43f96;
undefined4 DAT_101e43f9a;
undefined4 DAT_101e43f9e;
undefined4 DAT_101e43fa2;
undefined4 DAT_101e43fa6;
undefined4 DAT_101e43faa;
undefined4 DAT_101e43fae;
undefined4 DAT_101e43fb2;
undefined4 DAT_101e43fb6;
undefined4 DAT_101e43fba;
undefined4 DAT_101e43fbe;
undefined4 DAT_101e43fc2;
undefined4 DAT_101e43fc6;
undefined4 DAT_101e43fca;
undefined4 DAT_101e43fce;
undefined4 DAT_101e43fd2;
undefined4 DAT_101e43fd6;
undefined4 DAT_101e43fda;
undefined4 DAT_101e43fde;
undefined4 DAT_101e43fe2;
undefined4 DAT_101e43fe6;
undefined4 DAT_101e43fea;
undefined4 DAT_101e43fee;
undefined4 DAT_101e43ff2;
undefined4 DAT_101e43ff6;
undefined4 DAT_101e43ffa;
undefined4 DAT_101e43ffe;
undefined4 DAT_101e44002;
undefined4 DAT_101e44006;
undefined4 DAT_101e4400a;
undefined4 DAT_101e4400e;
undefined4 DAT_101e44012;
undefined4 DAT_101e44016;
undefined4 DAT_101e4401a;
undefined4 DAT_101e4401e;
undefined4 DAT_101e44022;
undefined4 DAT_101e44026;
undefined4 DAT_101e4402a;
undefined4 DAT_101e4402e;
undefined4 DAT_101e44032;
undefined4 DAT_101e44036;
undefined4 DAT_101e4403a;
undefined4 DAT_101e44044;
undefined4 DAT_101e4404c;
undefined4 DAT_101e44048;
undefined4 DAT_101e44050;
undefined4 DAT_101e4405c;
undefined4 DAT_101e44060;
undefined4 DAT_101e44040;
undefined4 DAT_101e44064;
undefined4 DAT_101e44054;
undefined4 DAT_101e44068;
undefined4 DAT_101e44058;
undefined4 DAT_101e4406c;
undefined4 DAT_101e44070;
undefined4 DAT_101e44074;
undefined4 DAT_101e44078;
undefined4 DAT_101e4407c;
undefined4 DAT_101e44080;
undefined4 DAT_101e44084;
undefined4 DAT_101e44088;
undefined4 DAT_101e4408c;
undefined4 DAT_101e44090;
undefined4 DAT_101e44094;
undefined4 DAT_101e44098;
undefined4 DAT_101e4409c;
undefined4 DAT_101e440a0;
undefined4 DAT_101e440a4;
undefined4 DAT_101e440a8;
undefined4 DAT_101e440ac;
undefined4 DAT_101e440b0;
undefined4 DAT_101e440b4;
undefined4 DAT_101e440b8;
undefined4 DAT_101e440bc;
undefined4 DAT_101e440c0;
undefined4 DAT_101e440c4;
undefined4 DAT_101e440c8;
undefined4 DAT_101e440cc;
undefined4 DAT_101e440d0;
undefined4 DAT_101e440d4;
undefined4 DAT_101e440d8;
undefined8 DAT_101e440e0;
undefined8 DAT_101e440e8;
undefined *PTR_thunk_FUN_10028fccc_10147f6f0;
undefined thunk_FUN_10029009c;
undefined FUN_10028fbd8;
undefined thunk_FUN_10028ff08;
undefined FUN_10028fc20;
undefined FUN_10028fc70;
undefined4 DAT_101d237e8;
undefined FUN_100290140;
undefined4 DAT_101e44144;
undefined4 DAT_101e44180;
undefined *PTR_FUN_10147f948;
undefined4 DAT_101e44138;
undefined *PTR_FUN_10147f848;
undefined1 DAT_101e44120;
undefined2 DAT_101e44122;
undefined2 DAT_101e44124;
undefined8 DAT_101e44128;
undefined8 DAT_101e44130;
undefined4 DAT_101e4413c;
undefined4 DAT_101e44140;
undefined4 DAT_101e44148;
undefined4 DAT_101e4414c;
undefined4 DAT_101e44150;
undefined4 DAT_101e44154;
undefined4 DAT_101e44158;
undefined4 DAT_101e4415c;
undefined4 DAT_101e44160;
undefined4 DAT_101e44164;
undefined4 DAT_101e44168;
undefined4 DAT_101e4416c;
undefined4 DAT_101e44170;
undefined4 DAT_101e44174;
undefined4 DAT_101e44178;
undefined4 DAT_101e4417c;
undefined4 DAT_101e44184;
undefined4 DAT_101e44188;
undefined4 DAT_101e4418c;
undefined4 DAT_101e44190;
undefined4 DAT_101e44194;
undefined4 DAT_101e44198;
undefined4 DAT_101e4419c;
undefined4 DAT_101e441a0;
undefined4 DAT_101e441a4;
undefined4 DAT_101e441a8;
undefined4 DAT_101e441ac;
undefined4 DAT_101e441b0;
undefined4 DAT_101e441b4;
undefined4 DAT_101e441b8;
undefined4 DAT_101e441bc;
undefined4 DAT_101e441c0;
undefined4 DAT_101e441c4;
undefined4 DAT_101e441c8;
undefined4 DAT_101e441cc;
undefined4 DAT_101e441d0;
undefined4 DAT_101e441d4;
undefined4 DAT_101e441d8;
undefined4 DAT_101e441dc;
undefined4 DAT_101e441e0;
undefined4 DAT_101e441e4;
undefined4 DAT_101e441e8;
undefined4 DAT_101e441ec;
undefined4 DAT_101e441f0;
undefined4 DAT_101e441f4;
undefined4 DAT_101e441f8;
undefined4 DAT_101e441fc;
undefined4 DAT_101e44200;
undefined4 DAT_101e44204;
undefined4 DAT_101e4420c;
undefined4 DAT_101e44210;
undefined4 DAT_101e44214;
undefined4 DAT_101e44218;
undefined4 DAT_101e44224;
undefined4 DAT_101e44228;
undefined4 DAT_101e4422c;
undefined4 DAT_101e44208;
undefined4 DAT_101e44230;
undefined4 DAT_101e4421c;
undefined4 DAT_101e44234;
undefined4 DAT_101e44220;
undefined4 DAT_101e44238;
undefined4 DAT_101e4423c;
undefined4 DAT_101e44240;
undefined4 DAT_101e44244;
undefined4 DAT_101e44248;
undefined4 DAT_101e4424c;
undefined4 DAT_101e44250;
undefined4 DAT_101e44254;
undefined4 DAT_101e44258;
undefined4 DAT_101e4425c;
undefined4 DAT_101e44260;
undefined4 DAT_101e44264;
undefined4 DAT_101e44268;
undefined4 DAT_101e4426c;
undefined4 DAT_101e44270;
undefined4 DAT_101e44274;
undefined4 DAT_101e44278;
undefined4 DAT_101e4427c;
undefined4 DAT_101e44280;
undefined4 DAT_101e44284;
undefined4 DAT_101e44288;
undefined4 DAT_101e4428c;
undefined4 DAT_101e44290;
undefined4 DAT_101e44294;
undefined4 DAT_101e44298;
undefined4 DAT_101e4429c;
undefined4 DAT_101e442a0;
undefined thunk_FUN_1002918c0;
undefined *PTR_thunk_FUN_100291784_10147fa90;
undefined *PTR_FUN_10147fbe8;
undefined *PTR_thunk_FUN_100292138_10147fc10;
undefined *PTR_thunk_FUN_1002924e4_10147fd58;
undefined thunk_FUN_100294ad0;
undefined thunk_FUN_100294a6c;
undefined thunk_FUN_100294b34;
undefined FUN_100293be4;
undefined FUN_100293bd8;
undefined FUN_100293c2c;
undefined *PTR_thunk_FUN_100294ff0_10147fea8;
undefined thunk_FUN_100294f00;
undefined thunk_FUN_100294e70;
undefined1 DAT_101e442a8;
undefined2 DAT_101e442aa;
undefined2 DAT_101e442ac;
undefined4 DAT_101e442ae;
undefined4 DAT_101e442b2;
undefined4 DAT_101e442b6;
undefined4 DAT_101e442ba;
undefined4 DAT_101e442be;
undefined4 DAT_101e442c2;
undefined4 DAT_101e442c6;
undefined4 DAT_101e442ca;
undefined4 DAT_101e442ce;
undefined4 DAT_101e442d2;
undefined4 DAT_101e442d6;
undefined4 DAT_101e442da;
undefined4 DAT_101e442de;
undefined4 DAT_101e442e2;
undefined4 DAT_101e442e6;
undefined4 DAT_101e442ea;
undefined4 DAT_101e442ee;
undefined4 DAT_101e442f2;
undefined4 DAT_101e442f6;
undefined4 DAT_101e442fa;
undefined4 DAT_101e442fe;
undefined4 DAT_101e44302;
undefined4 DAT_101e44306;
undefined4 DAT_101e4430a;
undefined4 DAT_101e4430e;
undefined4 DAT_101e44312;
undefined4 DAT_101e44316;
undefined4 DAT_101e4431a;
undefined4 DAT_101e4431e;
undefined4 DAT_101e44322;
undefined4 DAT_101e44326;
undefined4 DAT_101e4432a;
undefined4 DAT_101e4432e;
undefined4 DAT_101e44332;
undefined4 DAT_101e44336;
undefined4 DAT_101e4433a;
undefined4 DAT_101e4433e;
undefined4 DAT_101e44342;
undefined4 DAT_101e44346;
undefined4 DAT_101e4434a;
undefined4 DAT_101e4434e;
undefined4 DAT_101e44352;
undefined4 DAT_101e44356;
undefined4 DAT_101e4435a;
undefined4 DAT_101e4435e;
undefined4 DAT_101e44362;
undefined4 DAT_101e44366;
undefined4 DAT_101e4436a;
undefined4 DAT_101e4436e;
undefined4 DAT_101e44372;
undefined4 DAT_101e44376;
undefined4 DAT_101e4437a;
undefined4 DAT_101e44384;
undefined4 DAT_101e4438c;
undefined4 DAT_101e44388;
undefined4 DAT_101e44390;
undefined4 DAT_101e4439c;
undefined4 DAT_101e443a0;
undefined4 DAT_101e44380;
undefined4 DAT_101e443a4;
undefined4 DAT_101e44394;
undefined4 DAT_101e443a8;
undefined4 DAT_101e44398;
undefined4 DAT_101e443ac;
undefined4 DAT_101e443b0;
undefined4 DAT_101e443b4;
undefined4 DAT_101e443b8;
undefined4 DAT_101e443bc;
undefined4 DAT_101e443c0;
undefined4 DAT_101e443c4;
undefined4 DAT_101e443c8;
undefined4 DAT_101e443cc;
undefined4 DAT_101e443d0;
undefined4 DAT_101e443d4;
undefined4 DAT_101e443d8;
undefined4 DAT_101e443dc;
undefined4 DAT_101e443e0;
undefined4 DAT_101e443e4;
undefined4 DAT_101e443e8;
undefined4 DAT_101e443ec;
undefined4 DAT_101e443f0;
undefined4 DAT_101e443f4;
undefined4 DAT_101e443f8;
undefined4 DAT_101e443fc;
undefined4 DAT_101e44400;
undefined4 DAT_101e44404;
undefined4 DAT_101e44408;
undefined4 DAT_101e4440c;
undefined4 DAT_101e44410;
undefined4 DAT_101e44414;
undefined4 DAT_101e44418;
undefined8 DAT_101e44420;
undefined8 DAT_101e44428;
undefined *PTR_s_build://Credits.atlas_101854a70;
undefined *PTR_thunk_FUN_100296114_10147fff8;
undefined *PTR_thunk_FUN_100296510_101480140;
undefined *PTR_thunk_FUN_10064e2bc_1014a64d8;
undefined FUN_100296d14;
undefined *PTR_thunk_FUN_100296d58_101480c98;
undefined *PTR_FUN_101480260;
undefined DAT_101158808;
undefined *PTR_thunk_FUN_1002979c4_1014803a8;
undefined FUN_1002979a8;
undefined DAT_101158804;
undefined DAT_10115880c;
undefined *PTR_FUN_10148d378;
undefined DAT_101158810;
undefined DAT_101158814;
undefined DAT_101158818;
undefined *PTR_thunk_FUN_100298604_1014804f0;
undefined FUN_1002993d0;
undefined4 DAT_101d23820;
undefined FUN_100299404;
undefined4 DAT_101d23824;
undefined FUN_100299438;
undefined4 DAT_101d23828;
undefined FUN_10029946c;
undefined4 DAT_101d2382c;
undefined4 DAT_101d2381c;
undefined *PTR_s_build://DraftCenter_Background.p_1018549a8;
undefined *PTR_thunk_FUN_100299544_101480650;
undefined DAT_101872b94;
undefined DAT_101872b9c;
undefined FUN_10029939c;
undefined FUN_10029998c;
undefined FUN_10029997c;
undefined FUN_1002999ac;
undefined FUN_10029999c;
undefined FUN_10029a414;
undefined FUN_100299b20;
undefined FUN_100299fd0;
undefined *PTR_s_build://FranchiseLogos.tga_101854a30;
undefined *PTR_thunk_FUN_10029a580_101480798;
undefined FUN_10029a864;
undefined *PTR_thunk_FUN_10029aea0_1014808b8;
undefined *PTR_thunk_FUN_10064e2bc_101480a08;
undefined DAT_101158840;
undefined *PTR_thunk_FUN_10064e2bc_101480b50;
undefined *PTR_FUN_101480db8;
undefined *PTR_FUN_101480ed0;
undefined FUN_10029b654;
undefined *PTR_s_build://VGX_common.atlas_101854980;
undefined *PTR_thunk_FUN_10029c398_101480f18;
undefined *PTR_FUN_101481068;
undefined *PTR_thunk_FUN_100333c98_101493ee0;
undefined FUN_10029c37c;
undefined FUN_10029c364;
undefined *PTR_FUN_1014810b8;
undefined DAT_10115885c;
undefined DAT_101158858;
undefined FUN_10029d198;
undefined thunk_FUN_10029dba8;
undefined FUN_10029d1c4;
undefined *PTR_thunk_FUN_10029d220_101481250;
undefined4 DAT_101854af0;
undefined thunk_FUN_10029ece0;
undefined1 DAT_101e44430;
undefined2 DAT_101e44432;
undefined2 DAT_101e44434;
undefined4 DAT_101e44436;
undefined4 DAT_101e4443a;
undefined4 DAT_101e4443e;
undefined4 DAT_101e44442;
undefined4 DAT_101e44446;
undefined4 DAT_101e4444a;
undefined4 DAT_101e4444e;
undefined4 DAT_101e44452;
undefined4 DAT_101e44456;
undefined4 DAT_101e4445a;
undefined4 DAT_101e4445e;
undefined4 DAT_101e44462;
undefined4 DAT_101e44466;
undefined4 DAT_101e4446a;
undefined4 DAT_101e4446e;
undefined4 DAT_101e44472;
undefined4 DAT_101e44476;
undefined4 DAT_101e4447a;
undefined4 DAT_101e4447e;
undefined4 DAT_101e44482;
undefined4 DAT_101e44486;
undefined4 DAT_101e4448a;
undefined4 DAT_101e4448e;
undefined4 DAT_101e44492;
undefined4 DAT_101e44496;
undefined4 DAT_101e4449a;
undefined4 DAT_101e4449e;
undefined4 DAT_101e444a2;
undefined4 DAT_101e444a6;
undefined4 DAT_101e444aa;
undefined4 DAT_101e444ae;
undefined4 DAT_101e444b2;
undefined4 DAT_101e444b6;
undefined4 DAT_101e444ba;
undefined4 DAT_101e444be;
undefined4 DAT_101e444c2;
undefined4 DAT_101e444c6;
undefined4 DAT_101e444ca;
undefined4 DAT_101e444ce;
undefined4 DAT_101e444d2;
undefined4 DAT_101e444d6;
undefined4 DAT_101e444da;
undefined4 DAT_101e444de;
undefined4 DAT_101e444e2;
undefined4 DAT_101e444e6;
undefined4 DAT_101e444ea;
undefined4 DAT_101e444ee;
undefined4 DAT_101e444f2;
undefined4 DAT_101e444f6;
undefined4 DAT_101e444fa;
undefined4 DAT_101e444fe;
undefined4 DAT_101e44502;
undefined4 DAT_101e4450c;
undefined4 DAT_101e44510;
undefined4 DAT_101e44514;
undefined4 DAT_101e44518;
undefined4 DAT_101e44524;
undefined4 DAT_101e44528;
undefined4 DAT_101e4452c;
undefined4 DAT_101e44508;
undefined4 DAT_101e44530;
undefined4 DAT_101e4451c;
undefined4 DAT_101e44534;
undefined4 DAT_101e44520;
undefined4 DAT_101e44538;
undefined4 DAT_101e4453c;
undefined4 DAT_101e44540;
undefined4 DAT_101e44544;
undefined4 DAT_101e44548;
undefined4 DAT_101e4454c;
undefined4 DAT_101e44550;
undefined4 DAT_101e44554;
undefined4 DAT_101e44558;
undefined4 DAT_101e4455c;
undefined4 DAT_101e44560;
undefined4 DAT_101e44564;
undefined4 DAT_101e44568;
undefined4 DAT_101e4456c;
undefined4 DAT_101e44570;
undefined4 DAT_101e44574;
undefined4 DAT_101e44578;
undefined4 DAT_101e4457c;
undefined4 DAT_101e44580;
undefined4 DAT_101e44584;
undefined4 DAT_101e44588;
undefined4 DAT_101e4458c;
undefined4 DAT_101e44590;
undefined4 DAT_101e44594;
undefined4 DAT_101e44598;
undefined4 DAT_101e4459c;
undefined4 DAT_101e445a0;
undefined *PTR_FUN_1014813a0;
undefined FUN_10029f698;
undefined FUN_10029f64c;
undefined FUN_10029f654;
undefined1 DAT_101e445a4;
undefined2 DAT_101e445a6;
undefined2 DAT_101e445a8;
undefined4 DAT_101e445aa;
undefined4 DAT_101e445ae;
undefined4 DAT_101e445b2;
undefined4 DAT_101e445b6;
undefined4 DAT_101e445ba;
undefined4 DAT_101e445be;
undefined4 DAT_101e445c2;
undefined4 DAT_101e445c6;
undefined4 DAT_101e445ca;
undefined4 DAT_101e445ce;
undefined4 DAT_101e445d2;
undefined4 DAT_101e445d6;
undefined4 DAT_101e445da;
undefined4 DAT_101e445de;
undefined4 DAT_101e445e2;
undefined4 DAT_101e445e6;
undefined4 DAT_101e445ea;
undefined4 DAT_101e445ee;
undefined4 DAT_101e445f2;
undefined4 DAT_101e445f6;
undefined4 DAT_101e445fa;
undefined4 DAT_101e445fe;
undefined4 DAT_101e44602;
undefined4 DAT_101e44606;
undefined4 DAT_101e4460a;
undefined4 DAT_101e4460e;
undefined4 DAT_101e44612;
undefined4 DAT_101e44616;
undefined4 DAT_101e4461a;
undefined4 DAT_101e4461e;
undefined4 DAT_101e44622;
undefined4 DAT_101e44626;
undefined4 DAT_101e4462a;
undefined4 DAT_101e4462e;
undefined4 DAT_101e44632;
undefined4 DAT_101e44636;
undefined4 DAT_101e4463a;
undefined4 DAT_101e4463e;
undefined4 DAT_101e44642;
undefined4 DAT_101e44646;
undefined4 DAT_101e4464a;
undefined4 DAT_101e4464e;
undefined4 DAT_101e44652;
undefined4 DAT_101e44656;
undefined4 DAT_101e4465a;
undefined4 DAT_101e4465e;
undefined4 DAT_101e44662;
undefined4 DAT_101e44666;
undefined4 DAT_101e4466a;
undefined4 DAT_101e4466e;
undefined4 DAT_101e44672;
undefined4 DAT_101e44676;
undefined4 DAT_101e44680;
undefined4 DAT_101e44684;
undefined4 DAT_101e44688;
undefined4 DAT_101e4468c;
undefined4 DAT_101e44698;
undefined4 DAT_101e4469c;
undefined4 DAT_101e446a0;
undefined4 DAT_101e4467c;
undefined4 DAT_101e446a4;
undefined4 DAT_101e44690;
undefined4 DAT_101e446a8;
undefined4 DAT_101e44694;
undefined4 DAT_101e446ac;
undefined4 DAT_101e446b0;
undefined4 DAT_101e446b4;
undefined4 DAT_101e446b8;
undefined4 DAT_101e446bc;
undefined4 DAT_101e446c0;
undefined4 DAT_101e446c4;
undefined4 DAT_101e446c8;
undefined4 DAT_101e446cc;
undefined4 DAT_101e446d0;
undefined4 DAT_101e446d4;
undefined4 DAT_101e446d8;
undefined4 DAT_101e446dc;
undefined4 DAT_101e446e0;
undefined4 DAT_101e446e4;
undefined4 DAT_101e446e8;
undefined4 DAT_101e446ec;
undefined4 DAT_101e446f0;
undefined4 DAT_101e446f4;
undefined4 DAT_101e446f8;
undefined4 DAT_101e446fc;
undefined4 DAT_101e44700;
undefined4 DAT_101e44704;
undefined4 DAT_101e44708;
undefined4 DAT_101e4470c;
undefined4 DAT_101e44710;
undefined4 DAT_101e44714;
undefined FUN_1002a028c;
undefined FUN_1002a027c;
undefined FUN_1002a02ac;
undefined FUN_1002a029c;
undefined FUN_1002a026c;
undefined *PTR_thunk_FUN_1002a04c4_1014814e8;
undefined *PTR_FUN_10148b6d0;
undefined DAT_101158878;
undefined *PTR_thunk_FUN_1002a0c60_101481630;
undefined FUN_1002a0c44;
undefined FUN_1002a0c2c;
undefined *PTR_thunk_FUN_1002a1380_101481778;
undefined *PTR_FUN_10148b9c0;
undefined *PTR_thunk_FUN_1002a152c_1014818c0;
float DAT_101854af4;
undefined4 DAT_101854af8;
undefined FUN_1002a18cc;
undefined FUN_1002a1d24;
undefined *PTR_thunk_FUN_1002a1d30_101481a30;
undefined DAT_10115887c;
undefined DAT_101158880;
undefined FUN_1002a2130;
undefined *PTR_thunk_FUN_1002a2930_101481b80;
undefined DAT_101158884;
undefined *PTR_thunk_FUN_1002a25b8_101481cc8;
undefined *PTR_thunk_FUN_1002a2b84_101481dc8;
undefined *PTR_FUN_101481f20;
undefined *PTR_FUN_1014822b8;
undefined thunk_FUN_1002a56cc;
undefined thunk_FUN_1002a5cac;
undefined thunk_FUN_1002a5ad0;
undefined FUN_1002a38dc;
undefined thunk_FUN_1002a5de0;
undefined thunk_FUN_1002a5d64;
undefined thunk_FUN_1002a5e5c;
undefined FUN_1002a38ec;
undefined DAT_101158890;
undefined thunk_FUN_1002a4cd4;
undefined FUN_1002a5660;
undefined *PTR_s_build://Fonts/Brandon-Bold-100.f_10184e258;
undefined *PTR_thunk_FUN_1002a6738_101482408;
undefined4 DAT_101e44726;
undefined4 DAT_101e448a8;
undefined FUN_1002a666c;
undefined FUN_1002a6684;
undefined thunk_FUN_1002a7060;
undefined DAT_101e448b0;
undefined4 DAT_101e448a0;
undefined4 DAT_101e448a4;
undefined1 DAT_101e448f0;
undefined DAT_101e448e0;
undefined1 DAT_101e44718;
undefined2 DAT_101e4471a;
undefined2 DAT_101e4471c;
undefined4 DAT_101e4471e;
undefined4 DAT_101e44722;
undefined4 DAT_101e4472a;
undefined4 DAT_101e4472e;
undefined4 DAT_101e44732;
undefined4 DAT_101e44736;
undefined4 DAT_101e4473a;
undefined4 DAT_101e4473e;
undefined4 DAT_101e44742;
undefined4 DAT_101e44746;
undefined4 DAT_101e4474a;
undefined4 DAT_101e4474e;
undefined4 DAT_101e44752;
undefined4 DAT_101e44756;
undefined4 DAT_101e4475a;
undefined4 DAT_101e4475e;
undefined4 DAT_101e44762;
undefined4 DAT_101e44766;
undefined4 DAT_101e4476a;
undefined4 DAT_101e4476e;
undefined4 DAT_101e44772;
undefined4 DAT_101e44776;
undefined4 DAT_101e4477a;
undefined4 DAT_101e4477e;
undefined4 DAT_101e44782;
undefined4 DAT_101e44786;
undefined4 DAT_101e4478a;
undefined4 DAT_101e4478e;
undefined4 DAT_101e44792;
undefined4 DAT_101e44796;
undefined4 DAT_101e4479a;
undefined4 DAT_101e4479e;
undefined4 DAT_101e447a2;
undefined4 DAT_101e447a6;
undefined4 DAT_101e447aa;
undefined4 DAT_101e447ae;
undefined4 DAT_101e447b2;
undefined4 DAT_101e447b6;
undefined4 DAT_101e447ba;
undefined4 DAT_101e447be;
undefined4 DAT_101e447c2;
undefined4 DAT_101e447c6;
undefined4 DAT_101e447ca;
undefined4 DAT_101e447ce;
undefined4 DAT_101e447d2;
undefined4 DAT_101e447d6;
undefined4 DAT_101e447da;
undefined4 DAT_101e447de;
undefined4 DAT_101e447e2;
undefined4 DAT_101e447e6;
undefined4 DAT_101e447ea;
undefined4 DAT_101e447f0;
undefined4 DAT_101e447f4;
undefined4 DAT_101e447f8;
undefined4 DAT_101e447fc;
undefined4 DAT_101e44800;
undefined4 DAT_101e44804;
undefined4 DAT_101e44808;
undefined4 DAT_101e4480c;
undefined4 DAT_101e44810;
undefined4 DAT_101e44814;
undefined4 DAT_101e44818;
undefined4 DAT_101e4481c;
undefined4 DAT_101e44820;
undefined4 DAT_101e44824;
undefined4 DAT_101e44828;
undefined4 DAT_101e4482c;
undefined4 DAT_101e44830;
undefined4 DAT_101e44834;
undefined4 DAT_101e44838;
undefined4 DAT_101e4483c;
undefined4 DAT_101e44840;
undefined4 DAT_101e44844;
undefined4 DAT_101e44848;
undefined4 DAT_101e4484c;
undefined4 DAT_101e44850;
undefined4 DAT_101e44854;
undefined4 DAT_101e44858;
undefined4 DAT_101e4485c;
undefined4 DAT_101e44860;
undefined4 DAT_101e44864;
undefined4 DAT_101e44868;
undefined4 DAT_101e4486c;
undefined4 DAT_101e44870;
undefined4 DAT_101e44874;
undefined4 DAT_101e44878;
undefined4 DAT_101e4487c;
undefined4 DAT_101e44880;
undefined4 DAT_101e44884;
undefined4 DAT_101e44888;
undefined8 DAT_101e44890;
undefined8 DAT_101e44898;
undefined DAT_101e448a0;
undefined DAT_101e448c8;
undefined DAT_1011588a0;
undefined *PTR_thunk_FUN_1002a7c60_101482550;
undefined FUN_1002a7c4c;
undefined DAT_1011588a4;
undefined *PTR_thunk_FUN_1002a81d8_1014826a8;
undefined FUN_1002a81c4;
undefined FUN_1002a86d8;
undefined DAT_1011588a8;
undefined *PTR_thunk_FUN_1002a86ec_101482800;
undefined *PTR_thunk_FUN_10064e2bc_101482958;
undefined FUN_1002a8e70;
undefined FUN_1002a8e90;
undefined FUN_1002a8e80;
undefined FUN_1002a8eb0;
undefined FUN_1002a8ea0;
undefined FUN_1002a8ed0;
undefined FUN_1002a8ec0;
undefined FUN_1002a9828;
undefined DAT_1011588ac;
undefined FUN_1002a9874;
undefined FUN_1002a97dc;
undefined FUN_1002a97cc;
undefined *PTR_thunk_FUN_1002a99a8_101482aa0;
undefined *PTR_thunk_FUN_1002aa04c_101482be8;
undefined *PTR_thunk_FUN_1002aa5e8_101482d30;
undefined thunk_FUN_1002aa8f4;
undefined *PTR_thunk_FUN_1002aada4_101482e80;
undefined FUN_1002acf50;
undefined *PTR_thunk_FUN_1002ab490_101482fc8;
undefined thunk_FUN_1002ad048;
undefined FUN_1002ac0c8;
undefined *PTR_thunk_FUN_1002ac0d8_101483110;
undefined FUN_1002ac0b4;
undefined *PTR_thunk_FUN_1002ad590_101483258;
undefined FUN_1002ad3e8;
undefined *PTR_thunk_FUN_1002ae3d0_1014833a0;
undefined thunk_FUN_1002aeb64;
undefined *PTR_thunk_FUN_1002aed70_1014834e8;
undefined thunk_FUN_1002aeef4;
undefined FUN_1002af438;
undefined FUN_1002af428;
undefined *PTR_thunk_FUN_1002af4f0_101483630;
undefined *PTR_FUN_101483790;
undefined *PTR_thunk_FUN_10064e2bc_101483ca8;
undefined *PTR_FUN_101483b28;
undefined thunk_FUN_1002b0b4c;
undefined *PTR_thunk_FUN_1002b0078_101483df0;
undefined8 DAT_101e44a90;
undefined4 DAT_101e44a98;
undefined thunk_FUN_1002b0a94;
undefined FUN_1002b0068;
undefined thunk_FUN_1002b0af0;
undefined4 DAT_101e44a9c;
undefined4 DAT_101e44a80;
undefined4 DAT_1011588dc;
undefined4 DAT_101e44a84;
undefined4 DAT_101e44a7c;
undefined *PTR_FUN_101483f38;
undefined FUN_1002b1228;
undefined4 DAT_101e44a88;
undefined FUN_1002b1420;
undefined FUN_1002b1418;
undefined FUN_1002b1430;
undefined FUN_1002b1428;
undefined *PTR_thunk_FUN_1002b143c_101484080;
undefined1 DAT_101e448f8;
undefined2 DAT_101e448fa;
undefined2 DAT_101e448fc;
undefined8 DAT_101e44900;
undefined8 DAT_101e44908;
undefined4 DAT_101e44910;
undefined4 DAT_101e44914;
undefined4 DAT_101e44918;
undefined4 DAT_101e4491c;
undefined4 DAT_101e44920;
undefined4 DAT_101e44924;
undefined4 DAT_101e44928;
undefined4 DAT_101e4492c;
undefined4 DAT_101e44930;
undefined4 DAT_101e44934;
undefined4 DAT_101e44938;
undefined4 DAT_101e4493c;
undefined4 DAT_101e44940;
undefined4 DAT_101e44944;
undefined4 DAT_101e44948;
undefined4 DAT_101e4494c;
undefined4 DAT_101e44950;
undefined4 DAT_101e44954;
undefined4 DAT_101e44958;
undefined4 DAT_101e4495c;
undefined4 DAT_101e44960;
undefined4 DAT_101e44964;
undefined4 DAT_101e44968;
undefined4 DAT_101e4496c;
undefined4 DAT_101e44970;
undefined4 DAT_101e44974;
undefined4 DAT_101e44978;
undefined4 DAT_101e4497c;
undefined4 DAT_101e44980;
undefined4 DAT_101e44984;
undefined4 DAT_101e44988;
undefined4 DAT_101e4498c;
undefined4 DAT_101e44990;
undefined4 DAT_101e44994;
undefined4 DAT_101e44998;
undefined4 DAT_101e4499c;
undefined4 DAT_101e449a0;
undefined4 DAT_101e449a4;
undefined4 DAT_101e449a8;
undefined4 DAT_101e449ac;
undefined4 DAT_101e449b0;
undefined4 DAT_101e449b4;
undefined4 DAT_101e449b8;
undefined4 DAT_101e449bc;
undefined4 DAT_101e449c0;
undefined4 DAT_101e449c4;
undefined4 DAT_101e449c8;
undefined4 DAT_101e449cc;
undefined4 DAT_101e449d0;
undefined4 DAT_101e449d4;
undefined4 DAT_101e449d8;
undefined4 DAT_101e449dc;
undefined4 DAT_101e449e4;
undefined4 DAT_101e449e8;
undefined4 DAT_101e449ec;
undefined4 DAT_101e449f0;
undefined4 DAT_101e449fc;
undefined4 DAT_101e44a00;
undefined4 DAT_101e44a04;
undefined4 DAT_101e449e0;
undefined4 DAT_101e44a08;
undefined4 DAT_101e449f4;
undefined4 DAT_101e44a0c;
undefined4 DAT_101e449f8;
undefined4 DAT_101e44a10;
undefined4 DAT_101e44a14;
undefined4 DAT_101e44a18;
undefined4 DAT_101e44a1c;
undefined4 DAT_101e44a20;
undefined4 DAT_101e44a24;
undefined4 DAT_101e44a28;
undefined4 DAT_101e44a2c;
undefined4 DAT_101e44a30;
undefined4 DAT_101e44a34;
undefined4 DAT_101e44a38;
undefined4 DAT_101e44a3c;
undefined4 DAT_101e44a40;
undefined4 DAT_101e44a44;
undefined4 DAT_101e44a48;
undefined4 DAT_101e44a4c;
undefined4 DAT_101e44a50;
undefined4 DAT_101e44a54;
undefined4 DAT_101e44a58;
undefined4 DAT_101e44a5c;
undefined4 DAT_101e44a60;
undefined4 DAT_101e44a64;
undefined4 DAT_101e44a68;
undefined4 DAT_101e44a6c;
undefined4 DAT_101e44a70;
undefined4 DAT_101e44a74;
undefined4 DAT_101e44a78;
undefined8 DAT_101e44aa0;
undefined *PTR_thunk_FUN_1002b2534_1014841c8;
undefined *PTR_FUN_101484320;
undefined *PTR_thunk_FUN_1002b2d00_101484348;
undefined *PTR_FUN_101484490;
undefined8 DAT_101e44c48;
undefined *PTR_thunk_FUN_1002b4fb4_1014845d8;
undefined DAT_101872ba0;
undefined4 DAT_101e44ab6;
undefined *PTR_thunk_FUN_1002b3500_101484720;
undefined FUN_1002b3950;
undefined *PTR_FUN_101484868;
undefined8 DAT_101e44c50;
undefined *PTR_DAT_101485008;
undefined4 DAT_101e44c30;
undefined4 DAT_101e44c34;
undefined *PTR_thunk_FUN_10064e2bc_1014849b0;
undefined *PTR_thunk_FUN_10064e2bc_101484af8;
undefined8 DAT_101e44c58;
undefined *PTR_thunk_FUN_1002b489c_101484c40;
undefined *PTR_thunk_FUN_10064e2bc_101484ed0;
undefined thunk_FUN_1002b4c10;
undefined *PTR_FUN_101484d88;
undefined1 DAT_101e44aa8;
undefined2 DAT_101e44aaa;
undefined2 DAT_101e44aac;
undefined4 DAT_101e44aae;
undefined4 DAT_101e44ab2;
undefined4 DAT_101e44aba;
undefined4 DAT_101e44abe;
undefined4 DAT_101e44ac2;
undefined4 DAT_101e44ac6;
undefined4 DAT_101e44aca;
undefined4 DAT_101e44ace;
undefined4 DAT_101e44ad2;
undefined4 DAT_101e44ad6;
undefined4 DAT_101e44ada;
undefined4 DAT_101e44ade;
undefined4 DAT_101e44ae2;
undefined4 DAT_101e44ae6;
undefined4 DAT_101e44aea;
undefined4 DAT_101e44aee;
undefined4 DAT_101e44af2;
undefined4 DAT_101e44af6;
undefined4 DAT_101e44afa;
undefined4 DAT_101e44afe;
undefined4 DAT_101e44b02;
undefined4 DAT_101e44b06;
undefined4 DAT_101e44b0a;
undefined4 DAT_101e44b0e;
undefined4 DAT_101e44b12;
undefined4 DAT_101e44b16;
undefined4 DAT_101e44b1a;
undefined4 DAT_101e44b1e;
undefined4 DAT_101e44b22;
undefined4 DAT_101e44b26;
undefined4 DAT_101e44b2a;
undefined4 DAT_101e44b2e;
undefined4 DAT_101e44b32;
undefined4 DAT_101e44b36;
undefined4 DAT_101e44b3a;
undefined4 DAT_101e44b3e;
undefined4 DAT_101e44b42;
undefined4 DAT_101e44b46;
undefined4 DAT_101e44b4a;
undefined4 DAT_101e44b4e;
undefined4 DAT_101e44b52;
undefined4 DAT_101e44b56;
undefined4 DAT_101e44b5a;
undefined4 DAT_101e44b5e;
undefined4 DAT_101e44b62;
undefined4 DAT_101e44b66;
undefined4 DAT_101e44b6a;
undefined4 DAT_101e44b6e;
undefined4 DAT_101e44b72;
undefined4 DAT_101e44b76;
undefined4 DAT_101e44b7a;
undefined4 DAT_101e44b80;
undefined4 DAT_101e44b84;
undefined4 DAT_101e44b88;
undefined4 DAT_101e44b8c;
undefined4 DAT_101e44b90;
undefined4 DAT_101e44b94;
undefined4 DAT_101e44b98;
undefined4 DAT_101e44b9c;
undefined4 DAT_101e44ba0;
undefined4 DAT_101e44ba4;
undefined4 DAT_101e44ba8;
undefined4 DAT_101e44bac;
undefined4 DAT_101e44bb0;
undefined4 DAT_101e44bb4;
undefined4 DAT_101e44bb8;
undefined4 DAT_101e44bbc;
undefined4 DAT_101e44bc0;
undefined4 DAT_101e44bc4;
undefined4 DAT_101e44bc8;
undefined4 DAT_101e44bcc;
undefined4 DAT_101e44bd0;
undefined4 DAT_101e44bd4;
undefined4 DAT_101e44bd8;
undefined4 DAT_101e44bdc;
undefined4 DAT_101e44be0;
undefined4 DAT_101e44be4;
undefined4 DAT_101e44be8;
undefined4 DAT_101e44bec;
undefined4 DAT_101e44bf0;
undefined4 DAT_101e44bf4;
undefined4 DAT_101e44bf8;
undefined4 DAT_101e44bfc;
undefined4 DAT_101e44c00;
undefined4 DAT_101e44c04;
undefined4 DAT_101e44c08;
undefined4 DAT_101e44c0c;
undefined4 DAT_101e44c10;
undefined4 DAT_101e44c14;
undefined4 DAT_101e44c18;
undefined8 DAT_101e44c20;
undefined8 DAT_101e44c28;
undefined *DAT_101e44c58;
undefined *DAT_101e44c48;
undefined *DAT_101e44c50;
undefined4 DAT_101e44c38;
undefined4 DAT_101e44c3c;
undefined4 DAT_101e44c40;
undefined *PTR_thunk_FUN_10064e2bc_101485030;
undefined *PTR_thunk_FUN_1002b5a74_101485190;
undefined DAT_10115890c;
undefined *PTR_thunk_FUN_1002b8628_1014852d8;
undefined DAT_101158910;
undefined UNK_101158914;
undefined DAT_101158918;
undefined DAT_10115891c;
undefined1 DAT_101e44c70;
undefined DAT_101e44c60;
undefined *PTR_s_build://MenuBackground_Loading.p_1018549f0;
undefined *PTR_thunk_FUN_1002b8990_101485420;
undefined *PTR_s_build://Fonts/Brandon-Light-150._10184e1e0;
undefined DAT_1011588f0;
undefined *PTR_s_build://ChooseYourHero.png_1018549a0;
undefined *PTR_thunk_FUN_1002b919c_101485568;
undefined FUN_1002b94dc;
undefined FUN_1002b94c8;
undefined FUN_1002b9504;
undefined FUN_1002b94f0;
undefined FUN_1002b9518;
undefined UNK_10115893b;
undefined DAT_10115893f;
undefined DAT_101158933;
undefined DAT_101158937;
undefined DAT_101158943;
undefined DAT_101158947;
undefined DAT_101158927;
undefined UNK_10115892b;
undefined DAT_10115892f;
undefined1 DAT_101e44c88;
undefined DAT_101e44c78;
pointer PTR_s_build://MenuDraftPartsCommon.tga_101854a38;
undefined *PTR_thunk_FUN_1002babb8_1014856c0;
undefined FUN_1002baba4;
undefined FUN_1002bb07c;
undefined *PTR_thunk_FUN_1002bb8a0_101485810;
undefined *PTR_thunk_FUN_1002bc16c_101485960;
undefined FUN_1002bc07c;
undefined FUN_1002bc0bc;
undefined FUN_1002bc134;
undefined FUN_1002bc104;
undefined FUN_1002bc0f4;
undefined FUN_1002bc124;
undefined FUN_1002bc114;
undefined FUN_1002bc644;
undefined FUN_1002bcd08;
undefined *PTR_thunk_FUN_1002bdaa4_101485aa8;
undefined FUN_1002bd59c;
undefined thunk_FUN_1002bd814;
undefined FUN_1002bd5ac;
undefined *PTR_thunk_FUN_1002bdcf0_101485bf0;
undefined FUN_1002be9cc;
undefined FUN_1002be9b8;
undefined DAT_101158980;
undefined DAT_101158984;
undefined *PTR_thunk_FUN_1002bf428_101485e40;
undefined thunk_FUN_1002c0f3c;
undefined FUN_1002c1124;
undefined *PTR_s_build://Sounds/UI.assetbundle/sf_101486188;
undefined FUN_1002c0b9c;
undefined thunk_FUN_1002c11b8;
undefined FUN_1002c1400;
undefined FUN_1002c1440;
undefined FUN_1002c1224;
undefined *PTR_thunk_FUN_10064221c_101486098;
undefined FUN_1002c1be0;
undefined FUN_1002c1bcc;
undefined FUN_1002c1ea4;
undefined FUN_1002c1c70;
undefined FUN_1002c1bf4;
undefined *PTR_thunk_FUN_1002c1eb8_1014861b0;
undefined thunk_FUN_1002c2598;
undefined FUN_1002c25f4;
undefined *PTR_thunk_FUN_1002c3c64_1014863f8;
undefined FUN_10002d3f4;
undefined *PTR_thunk_FUN_1002c33dc_101486540;
undefined thunk_FUN_1002c3764;
undefined thunk_FUN_1002c383c;
undefined FUN_1002c3748;
undefined *PTR_FUN_101486688;
undefined *PTR_thunk_FUN_1002c43e4_1014867f0;
undefined *PTR_s_build://VGX_splash.tga_101854978;
undefined4 DAT_101d918a4;
undefined4 DAT_101d918a0;
undefined *PTR_thunk_FUN_1002c4a94_101486938;
undefined thunk_FUN_1002c525c;
undefined FUN_1002c4a80;
undefined FUN_1002c4a70;
undefined FUN_1002c56d8;
undefined FUN_1002c570c;
undefined *PTR_thunk_FUN_1002c5744_101486ac0;
undefined *PTR_FUN_101486d50;
undefined *PTR_FUN_101486c08;
undefined thunk_FUN_1002c6780;
undefined FUN_1002c52b4;
undefined *PTR_thunk_FUN_1002c752c_101486e98;
undefined DAT_101158a40;
undefined *PTR_thunk_FUN_1002c7b74_101486fe0;
undefined FUN_1002c7b58;
undefined *PTR_thunk_FUN_1002c8478_101487100;
undefined FUN_1002c90cc;
undefined FUN_1002c99cc;
undefined FUN_1002c99d8;
undefined *PTR_FUN_101487248;
undefined *PTR_thunk_FUN_1002ca92c_1014873e0;
undefined FUN_1002ca920;
undefined DAT_101e44e18;
undefined FUN_1002cb49c;
undefined DAT_101158a68;
undefined DAT_101158c80;
undefined4 DAT_101e44cb8;
undefined *PTR_PTR_101487680;
undefined FUN_1002caec8;
undefined FUN_1002cb1cc;
undefined thunk_FUN_1002cb204;
undefined FUN_1002cb320;
undefined4 DAT_101d237f8;
undefined4 DAT_101e44e18;
undefined4 DAT_101e44e1c;
undefined4 DAT_101d23800;
undefined4 DAT_101d237fc;
undefined *PTR_s_build://Fonts/Brandon-Regular-12_10184e210;
undefined DAT_101158a48;
undefined *PTR_FUN_101487548;
undefined1 DAT_101e44c90;
undefined2 DAT_101e44c92;
undefined2 DAT_101e44c94;
undefined8 DAT_101e44c98;
undefined8 DAT_101e44ca0;
undefined4 DAT_101e44ca8;
undefined4 DAT_101e44cac;
undefined4 DAT_101e44cb0;
undefined4 DAT_101e44cb4;
undefined4 DAT_101e44cbc;
undefined4 DAT_101e44cc0;
undefined4 DAT_101e44cc4;
undefined4 DAT_101e44cc8;
undefined4 DAT_101e44ccc;
undefined4 DAT_101e44cd0;
undefined4 DAT_101e44cd4;
undefined4 DAT_101e44cd8;
undefined4 DAT_101e44cdc;
undefined4 DAT_101e44ce0;
undefined4 DAT_101e44ce4;
undefined4 DAT_101e44ce8;
undefined4 DAT_101e44cec;
undefined4 DAT_101e44cf0;
undefined4 DAT_101e44cf4;
undefined4 DAT_101e44cf8;
undefined4 DAT_101e44cfc;
undefined4 DAT_101e44d00;
undefined4 DAT_101e44d04;
undefined4 DAT_101e44d08;
undefined4 DAT_101e44d0c;
undefined4 DAT_101e44d10;
undefined4 DAT_101e44d14;
undefined4 DAT_101e44d18;
undefined4 DAT_101e44d1c;
undefined4 DAT_101e44d20;
undefined4 DAT_101e44d24;
undefined4 DAT_101e44d28;
undefined4 DAT_101e44d2c;
undefined4 DAT_101e44d30;
undefined4 DAT_101e44d34;
undefined4 DAT_101e44d38;
undefined4 DAT_101e44d3c;
undefined4 DAT_101e44d40;
undefined4 DAT_101e44d44;
undefined4 DAT_101e44d48;
undefined4 DAT_101e44d4c;
undefined4 DAT_101e44d50;
undefined4 DAT_101e44d54;
undefined4 DAT_101e44d58;
undefined4 DAT_101e44d5c;
undefined4 DAT_101e44d60;
undefined4 DAT_101e44d64;
undefined4 DAT_101e44d68;
undefined4 DAT_101e44d6c;
undefined4 DAT_101e44d70;
undefined4 DAT_101e44d74;
undefined4 DAT_101e44d7c;
undefined4 DAT_101e44d80;
undefined4 DAT_101e44d84;
undefined4 DAT_101e44d88;
undefined4 DAT_101e44d94;
undefined4 DAT_101e44d98;
undefined4 DAT_101e44d9c;
undefined4 DAT_101e44d78;
undefined4 DAT_101e44da0;
undefined4 DAT_101e44d8c;
undefined4 DAT_101e44da4;
undefined4 DAT_101e44d90;
undefined4 DAT_101e44da8;
undefined4 DAT_101e44dac;
undefined4 DAT_101e44db0;
undefined4 DAT_101e44db4;
undefined4 DAT_101e44db8;
undefined4 DAT_101e44dbc;
undefined4 DAT_101e44dc0;
undefined4 DAT_101e44dc4;
undefined4 DAT_101e44dc8;
undefined4 DAT_101e44dcc;
undefined4 DAT_101e44dd0;
undefined4 DAT_101e44dd4;
undefined4 DAT_101e44dd8;
undefined4 DAT_101e44ddc;
undefined4 DAT_101e44de0;
undefined4 DAT_101e44de4;
undefined4 DAT_101e44de8;
undefined4 DAT_101e44dec;
undefined4 DAT_101e44df0;
undefined4 DAT_101e44df4;
undefined4 DAT_101e44df8;
undefined4 DAT_101e44dfc;
undefined4 DAT_101e44e00;
undefined4 DAT_101e44e04;
undefined4 DAT_101e44e08;
undefined4 DAT_101e44e0c;
undefined4 DAT_101e44e10;
undefined *PTR_thunk_FUN_1002cca00_1014876b0;
undefined *PTR_FUN_1014877f8;
undefined thunk_FUN_1002cd2d4;
undefined FUN_1002cc9f4;
undefined thunk_FUN_1002cd0f4;
undefined FUN_1002ccd0c;
undefined FUN_1002ccd74;
undefined FUN_1002ccd40;
undefined FUN_1002ccfd0;
undefined1 DAT_101e44e20;
undefined2 DAT_101e44e22;
undefined2 DAT_101e44e24;
undefined4 DAT_101e44e26;
undefined4 DAT_101e44e2a;
undefined4 DAT_101e44e2e;
undefined4 DAT_101e44e32;
undefined4 DAT_101e44e36;
undefined4 DAT_101e44e3a;
undefined4 DAT_101e44e3e;
undefined4 DAT_101e44e42;
undefined4 DAT_101e44e46;
undefined4 DAT_101e44e4a;
undefined4 DAT_101e44e4e;
undefined4 DAT_101e44e52;
undefined4 DAT_101e44e56;
undefined4 DAT_101e44e5a;
undefined4 DAT_101e44e5e;
undefined4 DAT_101e44e62;
undefined4 DAT_101e44e66;
undefined4 DAT_101e44e6a;
undefined4 DAT_101e44e6e;
undefined4 DAT_101e44e72;
undefined4 DAT_101e44e76;
undefined4 DAT_101e44e7a;
undefined4 DAT_101e44e7e;
undefined4 DAT_101e44e82;
undefined4 DAT_101e44e86;
undefined4 DAT_101e44e8a;
undefined4 DAT_101e44e8e;
undefined4 DAT_101e44e92;
undefined4 DAT_101e44e96;
undefined4 DAT_101e44e9a;
undefined4 DAT_101e44e9e;
undefined4 DAT_101e44ea2;
undefined4 DAT_101e44ea6;
undefined4 DAT_101e44eaa;
undefined4 DAT_101e44eae;
undefined4 DAT_101e44eb2;
undefined4 DAT_101e44eb6;
undefined4 DAT_101e44eba;
undefined4 DAT_101e44ebe;
undefined4 DAT_101e44ec2;
undefined4 DAT_101e44ec6;
undefined4 DAT_101e44eca;
undefined4 DAT_101e44ece;
undefined4 DAT_101e44ed2;
undefined4 DAT_101e44ed6;
undefined4 DAT_101e44eda;
undefined4 DAT_101e44ede;
undefined4 DAT_101e44ee2;
undefined4 DAT_101e44ee6;
undefined4 DAT_101e44eea;
undefined4 DAT_101e44eee;
undefined4 DAT_101e44ef2;
undefined4 DAT_101e44efc;
undefined4 DAT_101e44f04;
undefined4 DAT_101e44f00;
undefined4 DAT_101e44f08;
undefined4 DAT_101e44f14;
undefined4 DAT_101e44f18;
undefined4 DAT_101e44ef8;
undefined4 DAT_101e44f1c;
undefined4 DAT_101e44f0c;
undefined4 DAT_101e44f20;
undefined4 DAT_101e44f10;
undefined4 DAT_101e44f24;
undefined4 DAT_101e44f28;
undefined4 DAT_101e44f2c;
undefined4 DAT_101e44f30;
undefined4 DAT_101e44f34;
undefined4 DAT_101e44f38;
undefined4 DAT_101e44f3c;
undefined4 DAT_101e44f40;
undefined4 DAT_101e44f44;
undefined4 DAT_101e44f48;
undefined4 DAT_101e44f4c;
undefined4 DAT_101e44f50;
undefined4 DAT_101e44f54;
undefined4 DAT_101e44f58;
undefined4 DAT_101e44f5c;
undefined4 DAT_101e44f60;
undefined4 DAT_101e44f64;
undefined4 DAT_101e44f68;
undefined4 DAT_101e44f6c;
undefined4 DAT_101e44f70;
undefined4 DAT_101e44f74;
undefined4 DAT_101e44f78;
undefined4 DAT_101e44f7c;
undefined4 DAT_101e44f80;
undefined4 DAT_101e44f84;
undefined4 DAT_101e44f88;
undefined4 DAT_101e44f8c;
undefined4 DAT_101e44f90;
undefined8 DAT_101e44f98;
undefined8 DAT_101e44fa0;
undefined *PTR_thunk_FUN_1002ce350_101487990;
undefined *PTR_thunk_FUN_100333c98_101494028;
undefined *PTR_thunk_FUN_100333c98_101494170;
undefined FUN_1002ce344;
undefined FUN_1002ce33c;
undefined *PTR_thunk_FUN_1002ce8d0_101487ab0;
undefined *PTR_thunk_FUN_1002ceae0_101487bf8;
undefined DAT_101158a80;
undefined DAT_101158a84;
undefined FUN_1002cf064;
undefined *PTR_thunk_FUN_1002cf080_101487d40;
undefined FUN_1002cf040;
undefined *PTR_s_build://SophomoreQuestBackground_101854a60;
undefined *PTR_thunk_FUN_1002cfdc0_101487e88;
undefined *PTR_thunk_FUN_10064e2bc_101487fe8;
undefined FUN_1002d0bbc;
undefined *PTR_thunk_FUN_1002d1220_101488130;
undefined FUN_1002d0bb8;
undefined FUN_1002d0be8;
undefined thunk_FUN_1002d104c;
undefined DAT_101158a88;
undefined1 DAT_101e44fa8;
undefined2 DAT_101e44faa;
undefined2 DAT_101e44fac;
undefined8 DAT_101e44fb0;
undefined8 DAT_101e44fb8;
undefined4 DAT_101e44fc0;
undefined4 DAT_101e44fc4;
undefined4 DAT_101e44fc8;
undefined4 DAT_101e44fcc;
undefined4 DAT_101e44fd0;
undefined4 DAT_101e44fd4;
undefined4 DAT_101e44fd8;
undefined4 DAT_101e44fdc;
undefined4 DAT_101e44fe0;
undefined4 DAT_101e44fe4;
undefined4 DAT_101e44fe8;
undefined4 DAT_101e44fec;
undefined4 DAT_101e44ff0;
undefined4 DAT_101e44ff4;
undefined4 DAT_101e44ff8;
undefined4 DAT_101e44ffc;
undefined4 DAT_101e45000;
undefined4 DAT_101e45004;
undefined4 DAT_101e45008;
undefined4 DAT_101e4500c;
undefined4 DAT_101e45010;
undefined4 DAT_101e45014;
undefined4 DAT_101e45018;
undefined4 DAT_101e4501c;
undefined4 DAT_101e45020;
undefined4 DAT_101e45024;
undefined4 DAT_101e45028;
undefined4 DAT_101e4502c;
undefined4 DAT_101e45030;
undefined4 DAT_101e45034;
undefined4 DAT_101e45038;
undefined4 DAT_101e4503c;
undefined4 DAT_101e45040;
undefined4 DAT_101e45044;
undefined4 DAT_101e45048;
undefined4 DAT_101e4504c;
undefined4 DAT_101e45050;
undefined4 DAT_101e45054;
undefined4 DAT_101e45058;
undefined4 DAT_101e4505c;
undefined4 DAT_101e45060;
undefined4 DAT_101e45064;
undefined4 DAT_101e45068;
undefined4 DAT_101e4506c;
undefined4 DAT_101e45070;
undefined4 DAT_101e45074;
undefined4 DAT_101e45078;
undefined4 DAT_101e4507c;
undefined4 DAT_101e45080;
undefined4 DAT_101e45084;
undefined4 DAT_101e45088;
undefined4 DAT_101e4508c;
undefined4 DAT_101e45090;
undefined4 DAT_101e45094;
undefined4 DAT_101e45098;
undefined4 DAT_101e4509c;
undefined4 DAT_101e450a0;
undefined4 DAT_101e450a4;
undefined4 DAT_101e450a8;
undefined4 DAT_101e450ac;
undefined4 DAT_101e450b0;
undefined4 DAT_101e450b4;
undefined4 DAT_101e450b8;
undefined4 DAT_101e450bc;
undefined4 DAT_101e450c0;
undefined4 DAT_101e450c4;
undefined4 DAT_101e450c8;
undefined4 DAT_101e450cc;
undefined4 DAT_101e450d0;
undefined4 DAT_101e450d4;
undefined4 DAT_101e450d8;
undefined4 DAT_101e450dc;
undefined4 DAT_101e450e0;
undefined4 DAT_101e450e4;
undefined4 DAT_101e450e8;
undefined4 DAT_101e450ec;
undefined4 DAT_101e450f0;
undefined4 DAT_101e450f4;
undefined4 DAT_101e450f8;
undefined4 DAT_101e450fc;
undefined4 DAT_101e45100;
undefined4 DAT_101e45104;
undefined4 DAT_101e45108;
undefined4 DAT_101e4510c;
undefined4 DAT_101e45110;
undefined4 DAT_101e45114;
undefined4 DAT_101e45118;
undefined4 DAT_101e4511c;
undefined4 DAT_101e45120;
undefined4 DAT_101e45124;
undefined4 DAT_101e45128;
undefined *DAT_101e45180;
undefined *DAT_101e45168;
undefined *DAT_101e45158;
undefined *DAT_101e45160;
undefined *PTR_s_build://Fonts/Brandon-Bold-190.f_10184e268;
undefined *DAT_101e451a0;
undefined *DAT_101e451a8;
undefined *DAT_101e45188;
undefined *DAT_101e45190;
undefined *DAT_101e45198;
undefined4 DAT_101e4512c;
undefined4 DAT_101e45130;
undefined4 DAT_101e45134;
undefined4 DAT_101e45138;
undefined4 DAT_101e4513c;
undefined4 DAT_101e45140;
undefined4 DAT_101e45144;
undefined4 DAT_101e45148;
undefined4 DAT_101e4514c;
undefined *DAT_101e45170;
undefined *DAT_101e45178;
undefined4 DAT_101e45150;
undefined4 DAT_101e45154;
undefined FUN_1002d2c1c;
undefined FUN_1002d2b00;
undefined FUN_1002d2c48;
undefined thunk_FUN_1002d3930;
undefined *PTR_thunk_FUN_1002d422c_101488278;
undefined FUN_1002d2a34;
undefined FUN_1002d2a24;
undefined FUN_1002d3fb0;
undefined FUN_1002d3fa0;
undefined8 DAT_101d91640;
undefined *PTR_FUN_1014883c0;
undefined FUN_1002d417c;
undefined *PTR_thunk_FUN_1002d4a80_101488508;
undefined *PTR_thunk_FUN_1002d5948_101488650;
undefined4 DAT_101d23838;
undefined4 DAT_101d2383c;
undefined *PTR_thunk_FUN_1002d5c34_101488798;
undefined FUN_1002d5b94;
undefined FUN_1002d5be4;
undefined4 DAT_101d2380c;
undefined4 DAT_101d23808;
undefined4 DAT_101d23810;
undefined1 DAT_101e451b0;
undefined2 DAT_101e451b2;
undefined2 DAT_101e451b4;
undefined4 DAT_101e451b6;
undefined4 DAT_101e451ba;
undefined4 DAT_101e451be;
undefined4 DAT_101e451c2;
undefined4 DAT_101e451c6;
undefined4 DAT_101e451ca;
undefined4 DAT_101e451ce;
undefined4 DAT_101e451d2;
undefined4 DAT_101e451d6;
undefined4 DAT_101e451da;
undefined4 DAT_101e451de;
undefined4 DAT_101e451e2;
undefined4 DAT_101e451e6;
undefined4 DAT_101e451ea;
undefined4 DAT_101e451ee;
undefined4 DAT_101e451f2;
undefined4 DAT_101e451f6;
undefined4 DAT_101e451fa;
undefined4 DAT_101e451fe;
undefined4 DAT_101e45202;
undefined4 DAT_101e45206;
undefined4 DAT_101e4520a;
undefined4 DAT_101e4520e;
undefined4 DAT_101e45212;
undefined4 DAT_101e45216;
undefined4 DAT_101e4521a;
undefined4 DAT_101e4521e;
undefined4 DAT_101e45222;
undefined4 DAT_101e45226;
undefined4 DAT_101e4522a;
undefined4 DAT_101e4522e;
undefined4 DAT_101e45232;
undefined4 DAT_101e45236;
undefined4 DAT_101e4523a;
undefined4 DAT_101e4523e;
undefined4 DAT_101e45242;
undefined4 DAT_101e45246;
undefined4 DAT_101e4524a;
undefined4 DAT_101e4524e;
undefined4 DAT_101e45252;
undefined4 DAT_101e45256;
undefined4 DAT_101e4525a;
undefined4 DAT_101e4525e;
undefined4 DAT_101e45262;
undefined4 DAT_101e45266;
undefined4 DAT_101e4526a;
undefined4 DAT_101e4526e;
undefined4 DAT_101e45272;
undefined4 DAT_101e45276;
undefined4 DAT_101e4527a;
undefined4 DAT_101e4527e;
undefined4 DAT_101e45282;
undefined4 DAT_101e4528c;
undefined4 DAT_101e45290;
undefined4 DAT_101e45294;
undefined4 DAT_101e45298;
undefined4 DAT_101e452a4;
undefined4 DAT_101e452a8;
undefined4 DAT_101e452ac;
undefined4 DAT_101e45288;
undefined4 DAT_101e452b0;
undefined4 DAT_101e4529c;
undefined4 DAT_101e452b4;
undefined4 DAT_101e452a0;
undefined4 DAT_101e452b8;
undefined4 DAT_101e452bc;
undefined4 DAT_101e452c0;
undefined4 DAT_101e452c4;
undefined4 DAT_101e452c8;
undefined4 DAT_101e452cc;
undefined4 DAT_101e452d0;
undefined4 DAT_101e452d4;
undefined4 DAT_101e452d8;
undefined4 DAT_101e452dc;
undefined4 DAT_101e452e0;
undefined4 DAT_101e452e4;
undefined4 DAT_101e452e8;
undefined4 DAT_101e452ec;
undefined4 DAT_101e452f0;
undefined4 DAT_101e452f4;
undefined4 DAT_101e452f8;
undefined4 DAT_101e452fc;
undefined4 DAT_101e45300;
undefined4 DAT_101e45304;
undefined4 DAT_101e45308;
undefined4 DAT_101e4530c;
undefined4 DAT_101e45310;
undefined4 DAT_101e45314;
undefined4 DAT_101e45318;
undefined4 DAT_101e4531c;
undefined4 DAT_101e45320;
undefined thunk_FUN_1002d6910;
undefined4 DAT_101e454b0;
undefined *PTR_thunk_FUN_1002d6a94_1014888e8;
undefined thunk_FUN_1002d7068;
undefined thunk_FUN_1002d6f70;
undefined thunk_FUN_1002d7774;
undefined thunk_FUN_1002d78dc;
undefined *PTR_thunk_FUN_1002d7278_101488a30;
undefined1 DAT_101e45328;
undefined2 DAT_101e4532a;
undefined2 DAT_101e4532c;
undefined4 DAT_101e4532e;
undefined4 DAT_101e45332;
undefined4 DAT_101e45336;
undefined4 DAT_101e4533a;
undefined4 DAT_101e4533e;
undefined4 DAT_101e45342;
undefined4 DAT_101e45346;
undefined4 DAT_101e4534a;
undefined4 DAT_101e4534e;
undefined4 DAT_101e45352;
undefined4 DAT_101e45356;
undefined4 DAT_101e4535a;
undefined4 DAT_101e4535e;
undefined4 DAT_101e45362;
undefined4 DAT_101e45366;
undefined4 DAT_101e4536a;
undefined4 DAT_101e4536e;
undefined4 DAT_101e45372;
undefined4 DAT_101e45376;
undefined4 DAT_101e4537a;
undefined4 DAT_101e4537e;
undefined4 DAT_101e45382;
undefined4 DAT_101e45386;
undefined4 DAT_101e4538a;
undefined4 DAT_101e4538e;
undefined4 DAT_101e45392;
undefined4 DAT_101e45396;
undefined4 DAT_101e4539a;
undefined4 DAT_101e4539e;
undefined4 DAT_101e453a2;
undefined4 DAT_101e453a6;
undefined4 DAT_101e453aa;
undefined4 DAT_101e453ae;
undefined4 DAT_101e453b2;
undefined4 DAT_101e453b6;
undefined4 DAT_101e453ba;
undefined4 DAT_101e453be;
undefined4 DAT_101e453c2;
undefined4 DAT_101e453c6;
undefined4 DAT_101e453ca;
undefined4 DAT_101e453ce;
undefined4 DAT_101e453d2;
undefined4 DAT_101e453d6;
undefined4 DAT_101e453da;
undefined4 DAT_101e453de;
undefined4 DAT_101e453e2;
undefined4 DAT_101e453e6;
undefined4 DAT_101e453ea;
undefined4 DAT_101e453ee;
undefined4 DAT_101e453f2;
undefined4 DAT_101e453f6;
undefined4 DAT_101e453fa;
undefined4 DAT_101e45404;
undefined4 DAT_101e4540c;
undefined4 DAT_101e45408;
undefined4 DAT_101e45410;
undefined4 DAT_101e4541c;
undefined4 DAT_101e45420;
undefined4 DAT_101e45400;
undefined4 DAT_101e45424;
undefined4 DAT_101e45414;
undefined4 DAT_101e45428;
undefined4 DAT_101e45418;
undefined4 DAT_101e4542c;
undefined4 DAT_101e45430;
undefined4 DAT_101e45434;
undefined4 DAT_101e45438;
undefined4 DAT_101e4543c;
undefined4 DAT_101e45440;
undefined4 DAT_101e45444;
undefined4 DAT_101e45448;
undefined4 DAT_101e4544c;
undefined4 DAT_101e45450;
undefined4 DAT_101e45454;
undefined4 DAT_101e45458;
undefined4 DAT_101e4545c;
undefined4 DAT_101e45460;
undefined4 DAT_101e45464;
undefined4 DAT_101e45468;
undefined4 DAT_101e4546c;
undefined4 DAT_101e45470;
undefined4 DAT_101e45474;
undefined4 DAT_101e45478;
undefined4 DAT_101e4547c;
undefined4 DAT_101e45480;
undefined4 DAT_101e45484;
undefined4 DAT_101e45488;
undefined4 DAT_101e4548c;
undefined4 DAT_101e45490;
undefined4 DAT_101e45494;
undefined4 DAT_101e45498;
undefined8 DAT_101e454a0;
undefined8 DAT_101e454a8;
undefined *PTR_thunk_FUN_1002d87cc_101488b80;
undefined FUN_1002d8c24;
undefined *PTR_thunk_FUN_1002d9368_101488cd0;
undefined1 DAT_101e454c8;
undefined DAT_101e454b8;
undefined *PTR_FUN_101488e50;
undefined *PTR_thunk_FUN_1002d9b9c_101488fb8;
undefined FUN_1002d9b64;
undefined FUN_1002d9b6c;
undefined DAT_101158ab0;
undefined DAT_101158ab4;
undefined thunk_FUN_1002db898;
undefined FUN_1002daee4;
undefined FUN_1002daef4;
undefined thunk_FUN_1002db62c;
undefined *PTR_thunk_FUN_1002dc608_101489108;
undefined FUN_1002dc168;
undefined FUN_1002dc12c;
undefined DAT_101158ab8;
undefined DAT_101158abc;
undefined DAT_101158ac0;
undefined *PTR_FUN_101489258;
undefined DAT_101158ac4;
undefined DAT_101158acc;
undefined *PTR_FUN_1014893a0;
undefined DAT_101158ac8;
undefined FUN_1002dd9f0;
undefined DAT_101158ad0;
undefined FUN_1002dda10;
undefined DAT_101158ad4;
undefined FUN_1002dda00;
undefined DAT_101158ad8;
undefined FUN_1002dda5c;
undefined DAT_101158adc;
undefined thunk_FUN_1002de66c;
undefined DAT_101158ae0;
undefined *PTR_thunk_FUN_1002de910_1014894e8;
undefined FUN_1002dda24;
undefined *PTR_FUN_101489630;
undefined FUN_1002dec98;
undefined FUN_1002dec8c;
undefined FUN_1002def24;
undefined FUN_1002def18;
undefined *PTR_FUN_101489778;
undefined *PTR_FUN_1014898c0;
undefined DAT_101158af5;
undefined4 DAT_10115a160;
undefined *PTR_thunk_FUN_1002e2d24_101489a08;
undefined DAT_101158aed;
undefined FUN_1002e1154;
undefined DAT_101158af1;
undefined *PTR_thunk_FUN_1002e30a4_101489b58;
undefined *PTR_FUN_101489cb0;
undefined FUN_1002e10fc;
undefined FUN_1002e112c;
undefined FUN_1002e1114;
undefined FUN_1002e1148;
undefined thunk_FUN_1002e2948;
undefined *PTR_s_MENU_FRIENDS_IN_MATCH_DETAILS_GA_101489cd0;
undefined FUN_1002e29d4;
undefined thunk_FUN_1002e3844;
undefined *PTR_thunk_FUN_1002e34d8_101489e80;
undefined *PTR_thunk_FUN_1002e3ae8_101489fc8;
undefined FUN_1002e3db8;
undefined *PTR_thunk_FUN_1002e3ff4_10148a110;
undefined FUN_1002e4510;
undefined DAT_101158b10;
undefined FUN_1002e55bc;
undefined FUN_1002e55a4;
undefined *PTR_thunk_FUN_1002e55f0_10148a258;
undefined FUN_1002e55d4;
undefined thunk_FUN_1002e5740;
undefined FUN_1002e5f48;
undefined FUN_1002e5f30;
undefined *PTR_FUN_10148a3a0;
undefined DAT_101158b20;
undefined DAT_101158b24;
undefined DAT_101158b18;
undefined DAT_101158b1c;
undefined *PTR_thunk_FUN_1002e68f0_10148a4e8;
undefined FUN_1002e7240;
undefined FUN_1002e720c;
undefined *PTR_thunk_FUN_1002e7258_10148a648;
undefined FUN_1002e7214;
undefined DAT_101158b28;
undefined DAT_101158b2c;
undefined *PTR_thunk_FUN_1002e7b38_10148a798;
undefined FUN_1002e7f48;
undefined FUN_1002e8594;
undefined *PTR_FUN_10148a8f0;
undefined FUN_1002e8584;
undefined *PTR_FUN_10148aa38;
undefined *PTR_thunk_FUN_1002e8f8c_10148ab88;
undefined *PTR_thunk_FUN_1002e9314_10148acd8;
undefined DAT_101157fe8;
undefined *PTR_thunk_FUN_1002e9988_10148ae20;
undefined *PTR_FUN_10148af70;
undefined *PTR_thunk_FUN_1002ea1b4_10148b0b8;
undefined FUN_1002eaa6c;
undefined FUN_1002eaa8c;
undefined DAT_101158b50;
undefined FUN_1002eaa7c;
undefined FUN_1002eaaac;
undefined FUN_1002eaa9c;
undefined FUN_1002eaacc;
undefined FUN_1002eaabc;
undefined FUN_1002eaadc;
undefined DAT_101872ba8;
undefined FUN_1002eb50c;
undefined FUN_1002eb520;
undefined *PTR_thunk_FUN_1002ebc50_10148b208;
undefined *PTR_thunk_FUN_1002ed9a4_10148b868;
undefined thunk_FUN_1002edb88;
undefined *PTR_thunk_FUN_1002eea14_10148bb10;
undefined *PTR_FUN_10148bc58;
undefined FUN_1002ef168;
undefined FUN_1002ef1b0;
undefined1 DAT_101e454d0;
undefined2 DAT_101e454d2;
undefined2 DAT_101e454d4;
undefined8 DAT_101e454d8;
undefined8 DAT_101e454e0;
undefined4 DAT_101e454e8;
undefined4 DAT_101e454ec;
undefined4 DAT_101e454f0;
undefined4 DAT_101e454f4;
undefined4 DAT_101e454f8;
undefined4 DAT_101e454fc;
undefined4 DAT_101e45500;
undefined4 DAT_101e45504;
undefined4 DAT_101e45508;
undefined4 DAT_101e4550c;
undefined4 DAT_101e45510;
undefined4 DAT_101e45514;
undefined4 DAT_101e45518;
undefined4 DAT_101e4551c;
undefined4 DAT_101e45520;
undefined4 DAT_101e45524;
undefined4 DAT_101e45528;
undefined4 DAT_101e4552c;
undefined4 DAT_101e45530;
undefined4 DAT_101e45534;
undefined4 DAT_101e45538;
undefined4 DAT_101e4553c;
undefined4 DAT_101e45540;
undefined4 DAT_101e45544;
undefined4 DAT_101e45548;
undefined4 DAT_101e4554c;
undefined4 DAT_101e45550;
undefined4 DAT_101e45554;
undefined4 DAT_101e45558;
undefined4 DAT_101e4555c;
undefined4 DAT_101e45560;
undefined4 DAT_101e45564;
undefined4 DAT_101e45568;
undefined4 DAT_101e4556c;
undefined4 DAT_101e45570;
undefined4 DAT_101e45574;
undefined4 DAT_101e45578;
undefined4 DAT_101e4557c;
undefined4 DAT_101e45580;
undefined4 DAT_101e45584;
undefined4 DAT_101e45588;
undefined4 DAT_101e4558c;
undefined4 DAT_101e45590;
undefined4 DAT_101e45594;
undefined4 DAT_101e45598;
undefined4 DAT_101e4559c;
undefined4 DAT_101e455a0;
undefined4 DAT_101e455a4;
undefined4 DAT_101e455a8;
undefined4 DAT_101e455ac;
undefined4 DAT_101e455b0;
undefined4 DAT_101e455b4;
undefined4 DAT_101e455bc;
undefined4 DAT_101e455c0;
undefined4 DAT_101e455c4;
undefined4 DAT_101e455c8;
undefined4 DAT_101e455d4;
undefined4 DAT_101e455d8;
undefined4 DAT_101e455dc;
undefined4 DAT_101e455b8;
undefined4 DAT_101e455e0;
undefined4 DAT_101e455cc;
undefined4 DAT_101e455e4;
undefined4 DAT_101e455d0;
undefined4 DAT_101e455e8;
undefined4 DAT_101e455ec;
undefined4 DAT_101e455f0;
undefined4 DAT_101e455f4;
undefined4 DAT_101e455f8;
undefined4 DAT_101e455fc;
undefined4 DAT_101e45600;
undefined4 DAT_101e45604;
undefined4 DAT_101e45608;
undefined4 DAT_101e4560c;
undefined4 DAT_101e45610;
undefined4 DAT_101e45614;
undefined4 DAT_101e45618;
undefined4 DAT_101e4561c;
undefined4 DAT_101e45620;
undefined4 DAT_101e45624;
undefined4 DAT_101e45628;
undefined4 DAT_101e4562c;
undefined4 DAT_101e45630;
undefined4 DAT_101e45634;
undefined4 DAT_101e45638;
undefined4 DAT_101e4563c;
undefined4 DAT_101e45640;
undefined4 DAT_101e45644;
undefined4 DAT_101e45648;
undefined4 DAT_101e4564c;
undefined4 DAT_101e45650;
undefined FUN_1002f0110;
undefined FUN_1002f0158;
undefined FUN_1002f01a0;
undefined FUN_1002f01f0;
undefined *PTR_thunk_FUN_1002f023c_10148bf40;
undefined FUN_1002f00c8;
undefined1 DAT_101e45658;
undefined2 DAT_101e4565a;
undefined2 DAT_101e4565c;
undefined8 DAT_101e45660;
undefined8 DAT_101e45668;
undefined4 DAT_101e45670;
undefined4 DAT_101e45674;
undefined4 DAT_101e45678;
undefined4 DAT_101e4567c;
undefined4 DAT_101e45680;
undefined4 DAT_101e45684;
undefined4 DAT_101e45688;
undefined4 DAT_101e4568c;
undefined4 DAT_101e45690;
undefined4 DAT_101e45694;
undefined4 DAT_101e45698;
undefined4 DAT_101e4569c;
undefined4 DAT_101e456a0;
undefined4 DAT_101e456a4;
undefined4 DAT_101e456a8;
undefined4 DAT_101e456ac;
undefined4 DAT_101e456b0;
undefined4 DAT_101e456b4;
undefined4 DAT_101e456b8;
undefined4 DAT_101e456bc;
undefined4 DAT_101e456c0;
undefined4 DAT_101e456c4;
undefined4 DAT_101e456c8;
undefined4 DAT_101e456cc;
undefined4 DAT_101e456d0;
undefined4 DAT_101e456d4;
undefined4 DAT_101e456d8;
undefined4 DAT_101e456dc;
undefined4 DAT_101e456e0;
undefined4 DAT_101e456e4;
undefined4 DAT_101e456e8;
undefined4 DAT_101e456ec;
undefined4 DAT_101e456f0;
undefined4 DAT_101e456f4;
undefined4 DAT_101e456f8;
undefined4 DAT_101e456fc;
undefined4 DAT_101e45700;
undefined4 DAT_101e45704;
undefined4 DAT_101e45708;
undefined4 DAT_101e4570c;
undefined4 DAT_101e45710;
undefined4 DAT_101e45714;
undefined4 DAT_101e45718;
undefined4 DAT_101e4571c;
undefined4 DAT_101e45720;
undefined4 DAT_101e45724;
undefined4 DAT_101e45728;
undefined4 DAT_101e4572c;
undefined4 DAT_101e45730;
undefined4 DAT_101e45734;
undefined4 DAT_101e45738;
undefined4 DAT_101e4573c;
undefined4 DAT_101e45744;
undefined4 DAT_101e45748;
undefined4 DAT_101e4574c;
undefined4 DAT_101e45750;
undefined4 DAT_101e4575c;
undefined4 DAT_101e45760;
undefined4 DAT_101e45764;
undefined4 DAT_101e45740;
undefined4 DAT_101e45768;
undefined4 DAT_101e45754;
undefined4 DAT_101e4576c;
undefined4 DAT_101e45758;
undefined4 DAT_101e45770;
undefined4 DAT_101e45774;
undefined4 DAT_101e45778;
undefined4 DAT_101e4577c;
undefined4 DAT_101e45780;
undefined4 DAT_101e45784;
undefined4 DAT_101e45788;
undefined4 DAT_101e4578c;
undefined4 DAT_101e45790;
undefined4 DAT_101e45794;
undefined4 DAT_101e45798;
undefined4 DAT_101e4579c;
undefined4 DAT_101e457a0;
undefined4 DAT_101e457a4;
undefined4 DAT_101e457a8;
undefined4 DAT_101e457ac;
undefined4 DAT_101e457b0;
undefined4 DAT_101e457b4;
undefined4 DAT_101e457b8;
undefined4 DAT_101e457bc;
undefined4 DAT_101e457c0;
undefined4 DAT_101e457c4;
undefined4 DAT_101e457c8;
undefined4 DAT_101e457cc;
undefined4 DAT_101e457d0;
undefined4 DAT_101e457d4;
undefined4 DAT_101e457d8;
undefined4 DAT_101e457f2;
undefined thunk_FUN_1002f225c;
undefined thunk_FUN_1002f2200;
undefined thunk_FUN_1002f22bc;
undefined *PTR_thunk_FUN_1002f172c_10148c088;
undefined FUN_1002f2174;
undefined1 DAT_101e457e0;
undefined2 DAT_101e457e2;
undefined2 DAT_101e457e4;
undefined4 DAT_101e457e6;
undefined4 DAT_101e457ea;
undefined4 DAT_101e457ee;
undefined4 DAT_101e457f6;
undefined4 DAT_101e457fa;
undefined4 DAT_101e457fe;
undefined4 DAT_101e45802;
undefined4 DAT_101e45806;
undefined4 DAT_101e4580a;
undefined4 DAT_101e4580e;
undefined4 DAT_101e45812;
undefined4 DAT_101e45816;
undefined4 DAT_101e4581a;
undefined4 DAT_101e4581e;
undefined4 DAT_101e45822;
undefined4 DAT_101e45826;
undefined4 DAT_101e4582a;
undefined4 DAT_101e4582e;
undefined4 DAT_101e45832;
undefined4 DAT_101e45836;
undefined4 DAT_101e4583a;
undefined4 DAT_101e4583e;
undefined4 DAT_101e45842;
undefined4 DAT_101e45846;
undefined4 DAT_101e4584a;
undefined4 DAT_101e4584e;
undefined4 DAT_101e45852;
undefined4 DAT_101e45856;
undefined4 DAT_101e4585a;
undefined4 DAT_101e4585e;
undefined4 DAT_101e45862;
undefined4 DAT_101e45866;
undefined4 DAT_101e4586a;
undefined4 DAT_101e4586e;
undefined4 DAT_101e45872;
undefined4 DAT_101e45876;
undefined4 DAT_101e4587a;
undefined4 DAT_101e4587e;
undefined4 DAT_101e45882;
undefined4 DAT_101e45886;
undefined4 DAT_101e4588a;
undefined4 DAT_101e4588e;
undefined4 DAT_101e45892;
undefined4 DAT_101e45896;
undefined4 DAT_101e4589a;
undefined4 DAT_101e4589e;
undefined4 DAT_101e458a2;
undefined4 DAT_101e458a6;
undefined4 DAT_101e458aa;
undefined4 DAT_101e458ae;
undefined4 DAT_101e458b2;
undefined4 DAT_101e458bc;
undefined4 DAT_101e458c4;
undefined4 DAT_101e458c0;
undefined4 DAT_101e458c8;
undefined4 DAT_101e458d4;
undefined4 DAT_101e458d8;
undefined4 DAT_101e458b8;
undefined4 DAT_101e458dc;
undefined4 DAT_101e458cc;
undefined4 DAT_101e458e0;
undefined4 DAT_101e458d0;
undefined4 DAT_101e458e4;
undefined4 DAT_101e458e8;
undefined4 DAT_101e458ec;
undefined4 DAT_101e458f0;
undefined4 DAT_101e458f4;
undefined4 DAT_101e458f8;
undefined4 DAT_101e458fc;
undefined4 DAT_101e45900;
undefined4 DAT_101e45904;
undefined4 DAT_101e45908;
undefined4 DAT_101e4590c;
undefined4 DAT_101e45910;
undefined4 DAT_101e45914;
undefined4 DAT_101e45918;
undefined4 DAT_101e4591c;
undefined4 DAT_101e45920;
undefined4 DAT_101e45924;
undefined4 DAT_101e45928;
undefined4 DAT_101e4592c;
undefined4 DAT_101e45930;
undefined4 DAT_101e45934;
undefined4 DAT_101e45938;
undefined4 DAT_101e4593c;
undefined4 DAT_101e45940;
undefined4 DAT_101e45944;
undefined4 DAT_101e45948;
undefined4 DAT_101e4594c;
undefined4 DAT_101e45950;
undefined8 DAT_101e45958;
undefined8 DAT_101e45960;
undefined *PTR_thunk_FUN_1002f3570_10148c1d0;
undefined *PTR_s_build://MenuSkinsHeroesBlueprint_101854a48;
undefined *PTR_thunk_FUN_1002f7c44_10148c318;
undefined *PTR_thunk_FUN_1002f7860_10148c460;
undefined FUN_1002f5edc;
undefined thunk_FUN_1002f7700;
undefined thunk_FUN_1002f7408;
undefined FUN_1002f5efc;
undefined thunk_FUN_1002f7624;
undefined FUN_1002f5f10;
undefined4 DAT_101e45a14;
undefined4 DAT_101e45a1c;
undefined4 DAT_101e45a24;
undefined DAT_101158c50;
undefined *PTR_s_COMMON_10148c5e8;
undefined FUN_1002f6694;
undefined FUN_1002f6da4;
undefined FUN_1002f6684;
undefined FUN_1002f6d90;
undefined1 DAT_101e45968;
undefined2 DAT_101e4596a;
undefined2 DAT_101e4596c;
undefined4 DAT_101e4596e;
undefined4 DAT_101e45972;
undefined4 DAT_101e45976;
undefined4 DAT_101e4597a;
undefined4 DAT_101e4597e;
undefined4 DAT_101e45982;
undefined4 DAT_101e45986;
undefined4 DAT_101e4598a;
undefined4 DAT_101e4598e;
undefined4 DAT_101e45992;
undefined4 DAT_101e45996;
undefined4 DAT_101e4599a;
undefined4 DAT_101e4599e;
undefined4 DAT_101e459a2;
undefined4 DAT_101e459a6;
undefined4 DAT_101e459aa;
undefined4 DAT_101e459ae;
undefined4 DAT_101e459b2;
undefined4 DAT_101e459b6;
undefined4 DAT_101e459ba;
undefined4 DAT_101e459be;
undefined4 DAT_101e459c2;
undefined4 DAT_101e459c6;
undefined4 DAT_101e459ca;
undefined4 DAT_101e459ce;
undefined4 DAT_101e459d2;
undefined4 DAT_101e459d6;
undefined4 DAT_101e459da;
undefined4 DAT_101e459de;
undefined4 DAT_101e459e2;
undefined4 DAT_101e459e6;
undefined4 DAT_101e459ea;
undefined4 DAT_101e459ee;
undefined4 DAT_101e459f2;
undefined4 DAT_101e459f6;
undefined4 DAT_101e459fa;
undefined4 DAT_101e459fe;
undefined4 DAT_101e45a02;
undefined4 DAT_101e45a06;
undefined4 DAT_101e45a0a;
undefined4 DAT_101e45a0e;
undefined4 DAT_101e45a18;
undefined4 DAT_101e45a20;
undefined4 DAT_101e45a28;
undefined4 DAT_101e45a2c;
undefined4 DAT_101e45a30;
undefined4 DAT_101e45a34;
undefined4 DAT_101e45a38;
undefined4 DAT_101e45a3c;
undefined4 DAT_101e45a44;
undefined4 DAT_101e45a4c;
undefined4 DAT_101e45a48;
undefined4 DAT_101e45a50;
undefined4 DAT_101e45a5c;
undefined4 DAT_101e45a60;
undefined4 DAT_101e45a40;
undefined4 DAT_101e45a64;
undefined4 DAT_101e45a54;
undefined4 DAT_101e45a68;
undefined4 DAT_101e45a58;
undefined4 DAT_101e45a6c;
undefined4 DAT_101e45a70;
undefined4 DAT_101e45a74;
undefined4 DAT_101e45a78;
undefined4 DAT_101e45a7c;
undefined4 DAT_101e45a80;
undefined4 DAT_101e45a84;
undefined4 DAT_101e45a88;
undefined4 DAT_101e45a8c;
undefined4 DAT_101e45a90;
undefined4 DAT_101e45a94;
undefined4 DAT_101e45a98;
undefined4 DAT_101e45a9c;
undefined4 DAT_101e45aa0;
undefined4 DAT_101e45aa4;
undefined4 DAT_101e45aa8;
undefined4 DAT_101e45aac;
undefined4 DAT_101e45ab0;
undefined4 DAT_101e45ab4;
undefined4 DAT_101e45ab8;
undefined4 DAT_101e45abc;
undefined4 DAT_101e45ac0;
undefined4 DAT_101e45ac4;
undefined4 DAT_101e45ac8;
undefined4 DAT_101e45acc;
undefined4 DAT_101e45ad0;
undefined4 DAT_101e45ad4;
undefined4 DAT_101e45ad8;
undefined8 DAT_101e45ae0;
undefined8 DAT_101e45ae8;
pointer PTR_s_build://Talent_Coins.tga_101854a28;
undefined *PTR_FUN_10148c770;
undefined *PTR_s_rare_10148c8f8;
undefined FUN_1002f9480;
undefined FUN_1002f9470;
undefined FUN_1002f9460;
undefined *PTR_FUN_10148c920;
undefined *PTR_FUN_10148ca68;
undefined1 DAT_101e45b00;
undefined1 DAT_101e45b18;
undefined DAT_101e45af0;
undefined DAT_101e45b08;
undefined1 DAT_101e45b30;
undefined1 DAT_101e45b48;
undefined DAT_101e45b20;
undefined DAT_101e45b38;
undefined DAT_101158c70;
undefined *PTR_FUN_10148cbb0;
undefined1 DAT_101e45b60;
undefined *PTR_DAT_10148cf78;
undefined DAT_101e45b50;
undefined *PTR_FUN_10148ccf8;
undefined1 DAT_101e45b78;
undefined DAT_101e45b68;
undefined *PTR_FUN_10148ce40;
undefined *PTR_thunk_FUN_1002fc050_10148d230;
undefined *PTR_FUN_10148d0e8;
undefined *PTR_thunk_FUN_1002fcb10_10148d4c0;
undefined *PTR_FUN_10148d608;
undefined *PTR_thunk_FUN_1002fdd28_10148d790;
undefined *PTR_thunk_FUN_1002fe914_10148d918;
undefined FUN_1002fd208;
undefined FUN_1002fe6fc;
undefined FUN_1002fea08;
undefined *PTR_thunk_FUN_1002ffc28_10148daa0;
undefined1 DAT_101e45b90;
undefined DAT_101e45b80;
undefined FUN_1002ff6d4;
undefined FUN_1002ffd88;
undefined *PTR_s_build://Fonts/Brandon-Bold-400.f_10184e270;
undefined *PTR_thunk_FUN_100300b58_10148dc28;
undefined FUN_1003005fc;
undefined FUN_100300bf0;
undefined *PTR_FUN_10148ddb0;
undefined FUN_100301598;
undefined FUN_10030168c;
undefined FUN_100301ac4;
undefined *PTR_thunk_FUN_100302904_10148df88;
undefined *PTR_thunk_FUN_100303c10_10148e0d0;
undefined *PTR_FUN_10148e240;
undefined *PTR_FUN_10148e268;
undefined *PTR_FUN_10148e3d8;
undefined DAT_101158cb0;
undefined *PTR_FUN_10148e400;
undefined *PTR_s_stat_offense_10148e538;
undefined *PTR_thunk_FUN_100304844_10148e568;
undefined DAT_101158cd0;
undefined thunk_FUN_100304f5c;
undefined thunk_FUN_1003050b8;
undefined FUN_100305370;
undefined1 DAT_101e45b98;
undefined2 DAT_101e45b9a;
undefined2 DAT_101e45b9c;
undefined4 DAT_101e45b9e;
undefined4 DAT_101e45ba2;
undefined4 DAT_101e45ba6;
undefined4 DAT_101e45baa;
undefined4 DAT_101e45bae;
undefined4 DAT_101e45bb2;
undefined4 DAT_101e45bb6;
undefined4 DAT_101e45bba;
undefined4 DAT_101e45bbe;
undefined4 DAT_101e45bc2;
undefined4 DAT_101e45bc6;
undefined4 DAT_101e45bca;
undefined4 DAT_101e45bce;
undefined4 DAT_101e45bd2;
undefined4 DAT_101e45bd6;
undefined4 DAT_101e45bda;
undefined4 DAT_101e45bde;
undefined4 DAT_101e45be2;
undefined4 DAT_101e45be6;
undefined4 DAT_101e45bea;
undefined4 DAT_101e45bee;
undefined4 DAT_101e45bf2;
undefined4 DAT_101e45bf6;
undefined4 DAT_101e45bfa;
undefined4 DAT_101e45bfe;
undefined4 DAT_101e45c02;
undefined4 DAT_101e45c06;
undefined4 DAT_101e45c0a;
undefined4 DAT_101e45c0e;
undefined4 DAT_101e45c12;
undefined4 DAT_101e45c16;
undefined4 DAT_101e45c1a;
undefined4 DAT_101e45c1e;
undefined4 DAT_101e45c22;
undefined4 DAT_101e45c26;
undefined4 DAT_101e45c2a;
undefined4 DAT_101e45c2e;
undefined4 DAT_101e45c32;
undefined4 DAT_101e45c36;
undefined4 DAT_101e45c3a;
undefined4 DAT_101e45c3e;
undefined4 DAT_101e45c42;
undefined4 DAT_101e45c46;
undefined4 DAT_101e45c4a;
undefined4 DAT_101e45c4e;
undefined4 DAT_101e45c52;
undefined4 DAT_101e45c56;
undefined4 DAT_101e45c5a;
undefined4 DAT_101e45c5e;
undefined4 DAT_101e45c62;
undefined4 DAT_101e45c66;
undefined4 DAT_101e45c6a;
undefined4 DAT_101e45c74;
undefined4 DAT_101e45c78;
undefined4 DAT_101e45c7c;
undefined4 DAT_101e45c80;
undefined4 DAT_101e45c8c;
undefined4 DAT_101e45c90;
undefined4 DAT_101e45c94;
undefined4 DAT_101e45c70;
undefined4 DAT_101e45c98;
undefined4 DAT_101e45c84;
undefined4 DAT_101e45c9c;
undefined4 DAT_101e45c88;
undefined4 DAT_101e45ca0;
undefined4 DAT_101e45ca4;
undefined4 DAT_101e45ca8;
undefined4 DAT_101e45cac;
undefined4 DAT_101e45cb0;
undefined4 DAT_101e45cb4;
undefined4 DAT_101e45cb8;
undefined4 DAT_101e45cbc;
undefined4 DAT_101e45cc0;
undefined4 DAT_101e45cc4;
undefined4 DAT_101e45cc8;
undefined4 DAT_101e45ccc;
undefined4 DAT_101e45cd0;
undefined4 DAT_101e45cd4;
undefined4 DAT_101e45cd8;
undefined4 DAT_101e45cdc;
undefined4 DAT_101e45ce0;
undefined4 DAT_101e45ce4;
undefined4 DAT_101e45ce8;
undefined4 DAT_101e45cec;
undefined4 DAT_101e45cf0;
undefined4 DAT_101e45cf4;
undefined4 DAT_101e45cf8;
undefined4 DAT_101e45cfc;
undefined4 DAT_101e45d00;
undefined4 DAT_101e45d04;
undefined4 DAT_101e45d08;
undefined *PTR_FUN_10148e998;
undefined *PTR_FUN_10148eae0;
undefined1 DAT_101872b98;
undefined FUN_100306174;
undefined *PTR_FUN_10148ec40;
undefined *PTR_thunk_FUN_10064e2bc_10148eda0;
undefined *PTR_FUN_10148ef00;
undefined *PTR_thunk_FUN_1003064f4_10148ef48;
undefined *PTR_FUN_10148e838;
undefined thunk_FUN_1003079ac;
undefined *PTR_thunk_FUN_100307cd4_10148f090;
undefined1 DAT_101e45d20;
undefined DAT_101e45d10;
undefined8 DAT_101e45d30;
undefined8 DAT_101d23850;
undefined8 *DAT_101d23850;
void *DAT_101d23850;
long DAT_101e45d38;
undefined DAT_101e45d30;
undefined1 DAT_101e45d28;
undefined2 DAT_101e45d2a;
undefined2 DAT_101e45d2c;
undefined8 DAT_101e45d38;
undefined FUN_100308068;
long *DAT_101e45d40;
undefined *PTR_FUN_10148f210;
undefined8 DAT_101e45d40;
undefined8 *DAT_101e45d40;
undefined *PTR_thunk_FUN_1003084c0_10148f268;
undefined *PTR_FUN_10148f2c8;
pointer PTR_FUN_10148f308;
undefined *PTR_thunk_FUN_10030a674_10148f320;
undefined *PTR_FUN_10148f6c0;
undefined8 DAT_101d91160;
undefined thunk_FUN_10030b608;
undefined thunk_FUN_10030a53c;
undefined FUN_10030a534;
long DAT_101e45d48;
long *DAT_101e45d48;
undefined8 DAT_101e45d48;
pointer PTR_s_cloud9_10148f6e0;
pointer PTR_s_com.superevilmegacorp.vg.esports_10148f6e8;
undefined *PTR_thunk_FUN_10030bab4_10148f7e0;
undefined *PTR_FUN_10148f810;
undefined thunk_FUN_10030bc7c;
long DAT_101d23858;
long *DAT_101d23858;
undefined *PTR_FUN_10148f840;
undefined FUN_10030c1cc;
undefined *PTR_thunk_FUN_100247a5c_10148fbd8;
undefined *PTR_FUN_10148fdc0;
undefined *PTR_FUN_10148fde8;
undefined8 DAT_101d23860;
void *DAT_101e45d50;
long *DAT_101d23860;
pthread_mutex_t *DAT_101e45d50;
long DAT_101d23860;
undefined *PTR_thunk_FUN_10030c9d4_101490180;
undefined *PTR_FUN_1014901b8;
undefined FUN_10030d0ac;
undefined thunk_FUN_10021a248;
undefined *PTR_thunk_FUN_10030d220_101490550;
undefined8 *DAT_101d23868;
long *DAT_101d23868;
undefined8 DAT_101d23868;
undefined8 *DAT_101e45d58;
undefined *PTR_FUN_1014908e8;
long *DAT_101e45d58;
undefined8 DAT_101e45d58;
undefined DAT_101158ce2;
undefined DAT_101e45d60;
mach_header __mh_execute_header;
undefined4 DAT_101e46800;
undefined FUN_100312e98;
long DAT_101e468e0;
undefined8 DAT_101e468e0;
undefined FUN_100316500;
undefined8 *DAT_101e468e8;
void *DAT_101e468e8;
undefined8 DAT_101e468e8;
undefined FUN_100317a80;
undefined FUN_100317abc;
undefined FUN_100317af8;
undefined FUN_100317b34;
undefined4 DAT_101158f00;
undefined4 DAT_101158f04;
undefined4 DAT_101158f08;
undefined4 DAT_101158f0c;
undefined FUN_1003185f8;
undefined FUN_100318634;
undefined FUN_100318670;
undefined FUN_1003186ac;
undefined FUN_1003186e8;
undefined FUN_100318724;
undefined FUN_100318760;
undefined FUN_10031879c;
undefined FUN_100317bc8;
undefined FUN_100317c24;
undefined FUN_100317c88;
undefined FUN_100317ce4;
undefined FUN_100317d48;
undefined FUN_100317da4;
undefined FUN_100317df0;
undefined FUN_100317e3c;
undefined FUN_100317e88;
undefined FUN_100317eec;
undefined FUN_100317f48;
undefined FUN_100317fac;
undefined FUN_100318014;
undefined FUN_100318008;
undefined FUN_100318120;
undefined FUN_10031817c;
undefined FUN_1003181e0;
undefined FUN_10031823c;
undefined FUN_1003182a0;
undefined FUN_1003182fc;
undefined FUN_100318360;
undefined FUN_1003183bc;
undefined FUN_100318420;
undefined FUN_10031847c;
undefined FUN_1003184e0;
undefined FUN_100318548;
undefined FUN_10031853c;
undefined FUN_100318050;
undefined FUN_10031808c;
undefined FUN_100318584;
undefined FUN_1003185bc;
pointer PTR_FUN_10144d720;
pointer PTR_FUN_10144d750;
pointer PTR_FUN_10144d780;
pointer PTR_FUN_10144d648;
pointer PTR_FUN_10144d660;
pointer PTR_FUN_10144d630;
pointer PTR_FUN_10144d6c0;
pointer PTR_FUN_10144d6f0;
pointer PTR_FUN_10144d7b0;
undefined8 DAT_101d23870;
undefined *PTR_s_vainglory://video/welcome_101490c70;
void *DAT_101d23870;
undefined *PTR_s_.de_101490e60;
undefined8 DAT_101d23878;
void *DAT_101d23878;
long DAT_101e468f0;
long *DAT_101e468f0;
undefined8 DAT_101e468f0;
undefined thunk_FUN_10031ba0c;
undefined thunk_FUN_10031b2a4;
undefined *PTR_thunk_FUN_10031acac_101490f50;
undefined *PTR_FUN_1014912f8;
undefined *PTR_FUN_101491328;
undefined *PTR_thunk_FUN_10031b974_101491368;
undefined *PTR_FUN_1014913c0;
undefined *PTR_thunk_FUN_10031b974_101491418;
undefined FUN_10031af08;
undefined FUN_10031af04;
undefined FUN_10031bda0;
undefined FUN_10031bd8c;
undefined FUN_10031bdc8;
undefined FUN_10031bdb4;
long DAT_101e468f8;
long *DAT_101e468f8;
undefined8 DAT_101e468f8;
undefined *PTR_thunk_FUN_10031dd68_101491470;
undefined *PTR_FUN_101491810;
undefined thunk_FUN_10031de54;
undefined *PTR_FUN_101491840;
undefined *PTR_FUN_101491a28;
undefined *PTR_FUN_101491a50;
long DAT_101e46900;
long *DAT_101e46900;
undefined8 DAT_101e46900;
undefined *PTR_thunk_FUN_10031f3e8_101491de8;
undefined *PTR_FUN_1014921a0;
undefined *PTR_FUN_1014921d0;
undefined FUN_10031fdec;
undefined8 *DAT_101d23880;
undefined *PTR_thunk_FUN_100321204_101492208;
undefined *PTR_FUN_101492278;
long *DAT_101d23880;
long DAT_101d23880;
undefined8 DAT_101d23880;
undefined FUN_100320130;
undefined FUN_100320128;
undefined DAT_101158fd0;
undefined *PTR_s_tutorialLevelGwen_101854b08;
undefined *PTR_s_tutorialLevelKoshka_101854b00;
undefined8 *DAT_101e46a90;
undefined *PTR_thunk_FUN_100325248_101492610;
undefined *PTR_FUN_1014929b0;
undefined8 DAT_101e46a80;
long *DAT_101e46a90;
undefined8 DAT_101e46a90;
undefined DAT_101e46a80;
int *DAT_101e46a88;
long DAT_101e46a88;
undefined thunk_FUN_1003257fc;
undefined1 DAT_101e46908;
undefined2 DAT_101e4690a;
undefined2 DAT_101e4690c;
undefined4 DAT_101e4690e;
undefined4 DAT_101e46912;
undefined4 DAT_101e46916;
undefined4 DAT_101e4691a;
undefined4 DAT_101e4691e;
undefined4 DAT_101e46922;
undefined4 DAT_101e46926;
undefined4 DAT_101e4692a;
undefined4 DAT_101e4692e;
undefined4 DAT_101e46932;
undefined4 DAT_101e46936;
undefined4 DAT_101e4693a;
undefined4 DAT_101e4693e;
undefined4 DAT_101e46942;
undefined4 DAT_101e46946;
undefined4 DAT_101e4694a;
undefined4 DAT_101e4694e;
undefined4 DAT_101e46952;
undefined4 DAT_101e46956;
undefined4 DAT_101e4695a;
undefined4 DAT_101e4695e;
undefined4 DAT_101e46962;
undefined4 DAT_101e46966;
undefined4 DAT_101e4696a;
undefined4 DAT_101e4696e;
undefined4 DAT_101e46972;
undefined4 DAT_101e46976;
undefined4 DAT_101e4697a;
undefined4 DAT_101e4697e;
undefined4 DAT_101e46982;
undefined4 DAT_101e46986;
undefined4 DAT_101e4698a;
undefined4 DAT_101e4698e;
undefined4 DAT_101e46992;
undefined4 DAT_101e46996;
undefined4 DAT_101e4699a;
undefined4 DAT_101e4699e;
undefined4 DAT_101e469a2;
undefined4 DAT_101e469a6;
undefined4 DAT_101e469aa;
undefined4 DAT_101e469ae;
undefined4 DAT_101e469b2;
undefined4 DAT_101e469b6;
undefined4 DAT_101e469ba;
undefined4 DAT_101e469be;
undefined4 DAT_101e469c2;
undefined4 DAT_101e469c6;
undefined4 DAT_101e469ca;
undefined4 DAT_101e469ce;
undefined4 DAT_101e469d2;
undefined4 DAT_101e469d6;
undefined4 DAT_101e469da;
undefined4 DAT_101e469e0;
undefined4 DAT_101e469e4;
undefined4 DAT_101e469e8;
undefined4 DAT_101e469ec;
undefined4 DAT_101e469f0;
undefined4 DAT_101e469f4;
undefined4 DAT_101e469f8;
undefined4 DAT_101e469fc;
undefined4 DAT_101e46a00;
undefined4 DAT_101e46a04;
undefined4 DAT_101e46a08;
undefined4 DAT_101e46a0c;
undefined4 DAT_101e46a10;
undefined4 DAT_101e46a14;
undefined4 DAT_101e46a18;
undefined4 DAT_101e46a1c;
undefined4 DAT_101e46a20;
undefined4 DAT_101e46a24;
undefined4 DAT_101e46a28;
undefined4 DAT_101e46a2c;
undefined4 DAT_101e46a30;
undefined4 DAT_101e46a34;
undefined4 DAT_101e46a38;
undefined4 DAT_101e46a3c;
undefined4 DAT_101e46a40;
undefined4 DAT_101e46a44;
undefined4 DAT_101e46a48;
undefined4 DAT_101e46a4c;
undefined4 DAT_101e46a50;
undefined4 DAT_101e46a54;
undefined4 DAT_101e46a58;
undefined4 DAT_101e46a5c;
undefined4 DAT_101e46a60;
undefined4 DAT_101e46a64;
undefined4 DAT_101e46a68;
undefined4 DAT_101e46a6c;
undefined4 DAT_101e46a70;
undefined4 DAT_101e46a74;
undefined4 DAT_101e46a78;
undefined8 DAT_101e46a88;
undefined FUN_100325144;
long DAT_101e46a98;
pointer PTR_s_player_101854b10;
pointer PTR_s_generic_quest_101854b60;
undefined8 DAT_101e46a98;
undefined8 DAT_101e46aa0;
long *DAT_101e46aa0;
long *DAT_101e46a98;
undefined *PTR_FUN_1014929e0;
undefined *PTR_FUN_101492d88;
long *DAT_101e46aa8;
undefined8 DAT_101e46aa8;
undefined *PTR_thunk_FUN_100327ea8_101492db8;
long DAT_101e46ab0;
long *DAT_101e46ab0;
undefined8 DAT_101e46ab0;
undefined *PTR_thunk_FUN_1003284b4_101493150;
undefined *PTR_FUN_101493180;
undefined *PTR_FUN_1014931b0;
undefined FUN_10032982c;
undefined8 DAT_101d23888;
void *DAT_101e46ab8;
long *DAT_101d23888;
pthread_mutex_t *DAT_101e46ab8;
pointer PTR_thunk_FUN_100329d50_1014931e0;
undefined *PTR_thunk_FUN_1004f15a8_101493200;
undefined thunk_FUN_100329dc4;
undefined thunk_FUN_100329f18;
undefined8 *DAT_101e46ac0;
undefined *PTR_FUN_101493230;
undefined *PTR_FUN_1014935d0;
long *DAT_101e46ac0;
undefined8 DAT_101e46ac0;
undefined *PTR_FUN_101493600;
undefined DAT_101d23890;
char DAT_101e46ac8;
undefined1 DAT_101e46ac8;
byte DAT_101e46ac8;
undefined8 *DAT_101d238a8;
undefined *PTR_FUN_1014939c0;
undefined *PTR_FUN_101493a00;
long *DAT_101d238a8;
undefined8 *DAT_101e46ad0;
void *DAT_101e46ad8;
pthread_mutex_t *DAT_101e46ad8;
undefined *PTR_thunk_FUN_10032b588_101493998;
undefined FUN_10032add4;
undefined DAT_101e46c88;
undefined8 DAT_101e46cc8;
undefined1 DAT_101e46cc0;
uint DAT_101e46c98;
long DAT_101e46ca0;
char DAT_101e46cc0;
uint DAT_101e46ca8;
long DAT_101e46cb0;
undefined FUN_10032c9cc;
undefined FUN_10032f5a8;
undefined FUN_10032f7a0;
undefined FUN_10032f84c;
undefined8 DAT_101e46c70;
undefined8 DAT_101e46c58;
undefined4 DAT_101e46bb4;
undefined DAT_101e46d00;
undefined1 DAT_101e46ae0;
undefined2 DAT_101e46ae2;
undefined2 DAT_101e46ae4;
undefined4 DAT_101e46ae6;
undefined4 DAT_101e46aea;
undefined4 DAT_101e46aee;
undefined4 DAT_101e46af2;
undefined4 DAT_101e46af6;
undefined4 DAT_101e46afa;
undefined4 DAT_101e46afe;
undefined4 DAT_101e46b02;
undefined4 DAT_101e46b06;
undefined4 DAT_101e46b0a;
undefined4 DAT_101e46b0e;
undefined4 DAT_101e46b12;
undefined4 DAT_101e46b16;
undefined4 DAT_101e46b1a;
undefined4 DAT_101e46b1e;
undefined4 DAT_101e46b22;
undefined4 DAT_101e46b26;
undefined4 DAT_101e46b2a;
undefined4 DAT_101e46b2e;
undefined4 DAT_101e46b32;
undefined4 DAT_101e46b36;
undefined4 DAT_101e46b3a;
undefined4 DAT_101e46b3e;
undefined4 DAT_101e46b42;
undefined4 DAT_101e46b46;
undefined4 DAT_101e46b4a;
undefined4 DAT_101e46b4e;
undefined4 DAT_101e46b52;
undefined FUN_10032b8c8;
undefined4 DAT_101e46b56;
undefined FUN_10032b8f8;
undefined4 DAT_101e46b5a;
undefined FUN_10032b920;
undefined4 DAT_101e46b5e;
undefined FUN_10032b970;
undefined4 DAT_101e46b62;
undefined FUN_10032b998;
undefined4 DAT_101e46b66;
undefined4 DAT_101e46b6a;
undefined4 DAT_101e46b6e;
undefined4 DAT_101e46b72;
undefined4 DAT_101e46b76;
undefined4 DAT_101e46b7a;
undefined4 DAT_101e46b7e;
undefined4 DAT_101e46b82;
undefined4 DAT_101e46b86;
undefined4 DAT_101e46b8a;
undefined4 DAT_101e46b8e;
undefined4 DAT_101e46b92;
undefined4 DAT_101e46b96;
undefined4 DAT_101e46b9a;
undefined4 DAT_101e46b9e;
undefined4 DAT_101e46ba2;
undefined4 DAT_101e46ba6;
undefined4 DAT_101e46baa;
undefined4 DAT_101e46bae;
undefined4 DAT_101e46bb8;
undefined4 DAT_101e46bbc;
undefined4 DAT_101e46bc0;
undefined4 DAT_101e46bc4;
undefined4 DAT_101e46bc8;
undefined4 DAT_101e46bcc;
undefined4 DAT_101e46bd0;
undefined4 DAT_101e46bd4;
undefined4 DAT_101e46bd8;
undefined4 DAT_101e46bdc;
undefined4 DAT_101e46be0;
undefined4 DAT_101e46be4;
undefined4 DAT_101e46be8;
undefined4 DAT_101e46bec;
undefined4 DAT_101e46bf0;
undefined4 DAT_101e46bf4;
undefined4 DAT_101e46bf8;
undefined4 DAT_101e46bfc;
undefined4 DAT_101e46c00;
undefined4 DAT_101e46c04;
undefined4 DAT_101e46c08;
undefined4 DAT_101e46c0c;
undefined4 DAT_101e46c10;
undefined4 DAT_101e46c14;
undefined4 DAT_101e46c18;
undefined4 DAT_101e46c1c;
undefined4 DAT_101e46c20;
undefined4 DAT_101e46c24;
undefined4 DAT_101e46c28;
undefined4 DAT_101e46c2c;
undefined4 DAT_101e46c30;
undefined4 DAT_101e46c34;
undefined4 DAT_101e46c38;
undefined4 DAT_101e46c3c;
undefined4 DAT_101e46c40;
undefined4 DAT_101e46c44;
undefined4 DAT_101e46c48;
undefined4 DAT_101e46c4c;
undefined4 DAT_101e46c50;
undefined8 DAT_101e46c60;
undefined8 DAT_101e46c78;
undefined8 DAT_101e46ca0;
undefined DAT_101e46c98;
undefined DAT_101e46cb0;
undefined DAT_101e46ca8;
undefined8 DAT_101e46cd0;
undefined8 DAT_101e46ce0;
undefined8 DAT_101e46ce8;
undefined1 DAT_101e46cf8;
undefined8 DAT_101e46cf0;
undefined DAT_101e46d10;
undefined1 DAT_101e46d20;
undefined8 DAT_101e46d30;
undefined8 DAT_101e46d38;
undefined8 DAT_101e46d28;
undefined DAT_101e46cd8;
undefined DAT_101e46d40;
undefined8 UNK_101e46c90;
undefined1 UNK_101e46cb8;
undefined8 UNK_101e46cb9;
undefined8 UNK_101e46d08;
undefined8 UNK_101e46d18;
undefined *PTR_thunk_FUN_100333c98_101493d98;
undefined FUN_1003350ac;
undefined FUN_1003350a0;
undefined *PTR_thunk_FUN_1003367ac_1014942b8;
undefined *PTR_FUN_1014943c0;
undefined thunk_FUN_10033777c;
undefined thunk_FUN_1003379f4;
undefined thunk_FUN_1003379a0;
undefined thunk_FUN_100337a44;
char DAT_101e46ee7;
undefined8 DAT_101e46ed0;
char DAT_101e46f17;
undefined8 DAT_101e46f00;
undefined4 DAT_101e46e20;
undefined4 DAT_101e46e24;
undefined1 DAT_101e46d48;
undefined2 DAT_101e46d4a;
undefined2 DAT_101e46d4c;
undefined4 DAT_101e46d4e;
undefined4 DAT_101e46d52;
undefined4 DAT_101e46d56;
undefined4 DAT_101e46d5a;
undefined4 DAT_101e46d5e;
undefined4 DAT_101e46d62;
undefined4 DAT_101e46d66;
undefined4 DAT_101e46d6a;
undefined4 DAT_101e46d6e;
undefined4 DAT_101e46d72;
undefined4 DAT_101e46d76;
undefined4 DAT_101e46d7a;
undefined4 DAT_101e46d7e;
undefined4 DAT_101e46d82;
undefined4 DAT_101e46d86;
undefined4 DAT_101e46d8a;
undefined4 DAT_101e46d8e;
undefined4 DAT_101e46d92;
undefined4 DAT_101e46d96;
undefined4 DAT_101e46d9a;
undefined4 DAT_101e46d9e;
undefined4 DAT_101e46da2;
undefined4 DAT_101e46da6;
undefined4 DAT_101e46daa;
undefined4 DAT_101e46dae;
undefined4 DAT_101e46db2;
undefined4 DAT_101e46db6;
undefined4 DAT_101e46dba;
undefined4 DAT_101e46dbe;
undefined4 DAT_101e46dc2;
undefined4 DAT_101e46dc6;
undefined4 DAT_101e46dca;
undefined4 DAT_101e46dce;
undefined4 DAT_101e46dd2;
undefined4 DAT_101e46dd6;
undefined4 DAT_101e46dda;
undefined4 DAT_101e46dde;
undefined4 DAT_101e46de2;
undefined4 DAT_101e46de6;
undefined4 DAT_101e46dea;
undefined4 DAT_101e46dee;
undefined4 DAT_101e46df2;
undefined4 DAT_101e46df6;
undefined4 DAT_101e46dfa;
undefined4 DAT_101e46dfe;
undefined4 DAT_101e46e02;
undefined4 DAT_101e46e06;
undefined4 DAT_101e46e0a;
undefined4 DAT_101e46e0e;
undefined4 DAT_101e46e12;
undefined4 DAT_101e46e16;
undefined4 DAT_101e46e1a;
undefined4 DAT_101e46e2c;
undefined4 DAT_101e46e28;
undefined4 DAT_101e46e30;
undefined4 DAT_101e46e3c;
undefined4 DAT_101e46e40;
undefined4 DAT_101e46e44;
undefined4 DAT_101e46e34;
undefined4 DAT_101e46e48;
undefined4 DAT_101e46e38;
undefined4 DAT_101e46e4c;
undefined4 DAT_101e46e50;
undefined4 DAT_101e46e54;
undefined4 DAT_101e46e58;
undefined4 DAT_101e46e5c;
undefined4 DAT_101e46e60;
undefined4 DAT_101e46e64;
undefined4 DAT_101e46e68;
undefined4 DAT_101e46e6c;
undefined4 DAT_101e46e70;
undefined4 DAT_101e46e74;
undefined4 DAT_101e46e78;
undefined4 DAT_101e46e7c;
undefined4 DAT_101e46e80;
undefined4 DAT_101e46e84;
undefined4 DAT_101e46e88;
undefined4 DAT_101e46e8c;
undefined4 DAT_101e46e90;
undefined4 DAT_101e46e94;
undefined4 DAT_101e46e98;
undefined4 DAT_101e46e9c;
undefined4 DAT_101e46ea0;
undefined4 DAT_101e46ea4;
undefined4 DAT_101e46ea8;
undefined4 DAT_101e46eac;
undefined4 DAT_101e46eb0;
undefined4 DAT_101e46eb4;
undefined4 DAT_101e46eb8;
undefined8 DAT_101e46ec0;
undefined8 DAT_101e46ec8;
undefined DAT_101e46ee8;
undefined8 *DAT_101e46f18;
void *DAT_101e46f20;
pthread_mutex_t *DAT_101e46f20;
undefined *PTR_thunk_FUN_100338444_1014943e8;
undefined *PTR_FUN_101494418;
undefined *PTR_FUN_1014947c8;
undefined *PTR_FUN_1014947f8;
undefined FUN_100338e48;
long DAT_101d238f8;
undefined8 DAT_101d238f8;
long *DAT_101d238f8;
undefined1 DAT_101e46f28;
undefined2 DAT_101e46f2a;
undefined2 DAT_101e46f2c;
undefined4 DAT_101e46f2e;
undefined4 DAT_101e46f32;
undefined4 DAT_101e46f36;
undefined4 DAT_101e46f3a;
undefined4 DAT_101e46f3e;
undefined4 DAT_101e46f42;
undefined4 DAT_101e46f46;
undefined4 DAT_101e46f4a;
undefined4 DAT_101e46f4e;
undefined4 DAT_101e46f52;
undefined4 DAT_101e46f56;
undefined4 DAT_101e46f5a;
undefined4 DAT_101e46f5e;
undefined4 DAT_101e46f62;
undefined4 DAT_101e46f66;
undefined4 DAT_101e46f6a;
undefined4 DAT_101e46f6e;
undefined4 DAT_101e46f72;
undefined4 DAT_101e46f76;
undefined4 DAT_101e46f7a;
undefined4 DAT_101e46f7e;
undefined4 DAT_101e46f82;
undefined4 DAT_101e46f86;
undefined4 DAT_101e46f8a;
undefined4 DAT_101e46f8e;
undefined4 DAT_101e46f92;
undefined4 DAT_101e46f96;
undefined4 DAT_101e46f9a;
undefined4 DAT_101e46f9e;
undefined4 DAT_101e46fa2;
undefined4 DAT_101e46fa6;
undefined4 DAT_101e46faa;
undefined4 DAT_101e46fae;
undefined4 DAT_101e46fb2;
undefined4 DAT_101e46fb6;
undefined4 DAT_101e46fba;
undefined4 DAT_101e46fbe;
undefined4 DAT_101e46fc2;
undefined4 DAT_101e46fc6;
undefined4 DAT_101e46fca;
undefined4 DAT_101e46fce;
undefined4 DAT_101e46fd2;
undefined4 DAT_101e46fd6;
undefined4 DAT_101e46fda;
undefined4 DAT_101e46fde;
undefined4 DAT_101e46fe2;
undefined4 DAT_101e46fe6;
undefined4 DAT_101e46fea;
undefined4 DAT_101e46fee;
undefined4 DAT_101e46ff2;
undefined4 DAT_101e46ff6;
undefined4 DAT_101e46ffa;
undefined4 DAT_101e47004;
undefined4 DAT_101e47008;
undefined4 DAT_101e4700c;
undefined4 DAT_101e47010;
undefined4 DAT_101e4701c;
undefined4 DAT_101e47020;
undefined4 DAT_101e47024;
undefined4 DAT_101e47000;
undefined4 DAT_101e47028;
undefined4 DAT_101e47014;
undefined4 DAT_101e4702c;
undefined4 DAT_101e47018;
undefined4 DAT_101e47030;
undefined4 DAT_101e47034;
undefined4 DAT_101e47038;
undefined4 DAT_101e4703c;
undefined4 DAT_101e47040;
undefined4 DAT_101e47044;
undefined4 DAT_101e47048;
undefined4 DAT_101e4704c;
undefined4 DAT_101e47050;
undefined4 DAT_101e47054;
undefined4 DAT_101e47058;
undefined4 DAT_101e4705c;
undefined4 DAT_101e47060;
undefined4 DAT_101e47064;
undefined4 DAT_101e47068;
undefined4 DAT_101e4706c;
undefined4 DAT_101e47070;
undefined4 DAT_101e47074;
undefined4 DAT_101e47078;
undefined4 DAT_101e4707c;
undefined4 DAT_101e47080;
undefined4 DAT_101e47084;
undefined4 DAT_101e47088;
undefined4 DAT_101e4708c;
undefined4 DAT_101e47090;
undefined4 DAT_101e47094;
undefined4 DAT_101e47098;
undefined *PTR_FUN_101494828;
undefined DAT_101e47240;
undefined *PTR_thunk_FUN_10033b0e8_101494850;
undefined1 DAT_101e470a0;
undefined2 DAT_101e470a2;
undefined2 DAT_101e470a4;
undefined4 DAT_101e470a6;
undefined4 DAT_101e470aa;
undefined4 DAT_101e470ae;
undefined4 DAT_101e470b2;
undefined4 DAT_101e470b6;
undefined4 DAT_101e470ba;
undefined4 DAT_101e470be;
undefined4 DAT_101e470c2;
undefined4 DAT_101e470c6;
undefined4 DAT_101e470ca;
undefined4 DAT_101e470ce;
undefined4 DAT_101e470d2;
undefined4 DAT_101e470d6;
undefined4 DAT_101e470da;
undefined4 DAT_101e470de;
undefined4 DAT_101e470e2;
undefined4 DAT_101e470e6;
undefined4 DAT_101e470ea;
undefined4 DAT_101e470ee;
undefined4 DAT_101e470f2;
undefined4 DAT_101e470f6;
undefined4 DAT_101e470fa;
undefined4 DAT_101e470fe;
undefined4 DAT_101e47102;
undefined4 DAT_101e47106;
undefined4 DAT_101e4710a;
undefined4 DAT_101e4710e;
undefined4 DAT_101e47112;
undefined4 DAT_101e47116;
undefined4 DAT_101e4711a;
undefined4 DAT_101e4711e;
undefined4 DAT_101e47122;
undefined4 DAT_101e47126;
undefined4 DAT_101e4712a;
undefined4 DAT_101e4712e;
undefined4 DAT_101e47132;
undefined4 DAT_101e47136;
undefined4 DAT_101e4713a;
undefined4 DAT_101e4713e;
undefined4 DAT_101e47142;
undefined4 DAT_101e47146;
undefined4 DAT_101e4714a;
undefined4 DAT_101e4714e;
undefined4 DAT_101e47152;
undefined4 DAT_101e47156;
undefined4 DAT_101e4715a;
undefined4 DAT_101e4715e;
undefined4 DAT_101e47162;
undefined4 DAT_101e47166;
undefined4 DAT_101e4716a;
undefined4 DAT_101e4716e;
undefined4 DAT_101e47172;
undefined4 DAT_101e4717c;
undefined4 DAT_101e47184;
undefined4 DAT_101e47180;
undefined4 DAT_101e47188;
undefined4 DAT_101e47194;
undefined4 DAT_101e47198;
undefined4 DAT_101e47178;
undefined4 DAT_101e4719c;
undefined4 DAT_101e4718c;
undefined4 DAT_101e471a0;
undefined4 DAT_101e47190;
undefined4 DAT_101e471a4;
undefined4 DAT_101e471a8;
undefined4 DAT_101e471ac;
undefined4 DAT_101e471b0;
undefined4 DAT_101e471b4;
undefined4 DAT_101e471b8;
undefined4 DAT_101e471bc;
undefined4 DAT_101e471c0;
undefined4 DAT_101e471c4;
undefined4 DAT_101e471c8;
undefined4 DAT_101e471cc;
undefined4 DAT_101e471d0;
undefined4 DAT_101e471d4;
undefined4 DAT_101e471d8;
undefined4 DAT_101e471dc;
undefined4 DAT_101e471e0;
undefined4 DAT_101e471e4;
undefined4 DAT_101e471e8;
undefined4 DAT_101e471ec;
undefined4 DAT_101e471f0;
undefined4 DAT_101e471f4;
undefined4 DAT_101e471f8;
undefined4 DAT_101e471fc;
undefined4 DAT_101e47200;
undefined4 DAT_101e47204;
undefined4 DAT_101e47208;
undefined4 DAT_101e4720c;
undefined4 DAT_101e47210;
undefined8 DAT_101e47218;
undefined8 DAT_101e47220;
undefined DAT_101e47228;
undefined DAT_101e473e0;
undefined FUN_10033cae8;
undefined thunk_FUN_10033cd9c;
undefined thunk_FUN_10033ccd4;
undefined thunk_FUN_10033cec4;
undefined thunk_FUN_10033ce30;
undefined thunk_FUN_10033cf00;
undefined FUN_10033cadc;
undefined1 DAT_101e47258;
undefined2 DAT_101e4725a;
undefined2 DAT_101e4725c;
undefined4 DAT_101e4725e;
undefined4 DAT_101e47262;
undefined4 DAT_101e47266;
undefined4 DAT_101e4726a;
undefined4 DAT_101e4726e;
undefined4 DAT_101e47272;
undefined4 DAT_101e47276;
undefined4 DAT_101e4727a;
undefined4 DAT_101e4727e;
undefined4 DAT_101e47282;
undefined4 DAT_101e47286;
undefined4 DAT_101e4728a;
undefined4 DAT_101e4728e;
undefined4 DAT_101e47292;
undefined4 DAT_101e47296;
undefined4 DAT_101e4729a;
undefined4 DAT_101e4729e;
undefined4 DAT_101e472a2;
undefined4 DAT_101e472a6;
undefined4 DAT_101e472aa;
undefined4 DAT_101e472ae;
undefined4 DAT_101e472b2;
undefined4 DAT_101e472b6;
undefined4 DAT_101e472ba;
undefined4 DAT_101e472be;
undefined4 DAT_101e472c2;
undefined4 DAT_101e472c6;
undefined4 DAT_101e472ca;
undefined4 DAT_101e472ce;
undefined4 DAT_101e472d2;
undefined4 DAT_101e472d6;
undefined4 DAT_101e472da;
undefined4 DAT_101e472de;
undefined4 DAT_101e472e2;
undefined4 DAT_101e472e6;
undefined4 DAT_101e472ea;
undefined4 DAT_101e472ee;
undefined4 DAT_101e472f2;
undefined4 DAT_101e472f6;
undefined4 DAT_101e472fa;
undefined4 DAT_101e472fe;
undefined4 DAT_101e47302;
undefined4 DAT_101e47306;
undefined4 DAT_101e4730a;
undefined4 DAT_101e4730e;
undefined4 DAT_101e47312;
undefined4 DAT_101e47316;
undefined4 DAT_101e4731a;
undefined4 DAT_101e4731e;
undefined4 DAT_101e47322;
undefined4 DAT_101e47326;
undefined4 DAT_101e4732a;
undefined4 DAT_101e47334;
undefined4 DAT_101e4733c;
undefined4 DAT_101e47338;
undefined4 DAT_101e47340;
undefined4 DAT_101e4734c;
undefined4 DAT_101e47350;
undefined4 DAT_101e47330;
undefined4 DAT_101e47354;
undefined4 DAT_101e47344;
undefined4 DAT_101e47358;
undefined4 DAT_101e47348;
undefined4 DAT_101e4735c;
undefined4 DAT_101e47360;
undefined4 DAT_101e47364;
undefined4 DAT_101e47368;
undefined4 DAT_101e4736c;
undefined4 DAT_101e47370;
undefined4 DAT_101e47374;
undefined4 DAT_101e47378;
undefined4 DAT_101e4737c;
undefined4 DAT_101e47380;
undefined4 DAT_101e47384;
undefined4 DAT_101e47388;
undefined4 DAT_101e4738c;
undefined4 DAT_101e47390;
undefined4 DAT_101e47394;
undefined4 DAT_101e47398;
undefined4 DAT_101e4739c;
undefined4 DAT_101e473a0;
undefined4 DAT_101e473a4;
undefined4 DAT_101e473a8;
undefined4 DAT_101e473ac;
undefined4 DAT_101e473b0;
undefined4 DAT_101e473b4;
undefined4 DAT_101e473b8;
undefined4 DAT_101e473bc;
undefined4 DAT_101e473c0;
undefined4 DAT_101e473c4;
undefined4 DAT_101e473c8;
undefined8 DAT_101e473d0;
undefined8 DAT_101e473d8;
long DAT_101e473f8;
undefined *PTR_FUN_1014949b0;
pointer PTR_thunk_FUN_10033eb8c_1014949d8;
undefined *PTR_FUN_101494a18;
undefined *PTR_FUN_101494a68;
undefined *PTR_FUN_101494ae0;
undefined *PTR_FUN_101494b30;
undefined *PTR_FUN_101494b80;
undefined *PTR_FUN_101494bd0;
undefined *PTR_FUN_101494c80;
undefined *PTR_FUN_101494ce8;
undefined *PTR_FUN_101494d80;
undefined *PTR_FUN_101494dc8;
undefined *PTR_FUN_101494e38;
undefined *PTR_FUN_101494e80;
undefined *PTR_FUN_101494ea8;
undefined *PTR_FUN_10149d2b0;
undefined *PTR_FUN_10149d308;
undefined8 DAT_101e473f8;
void *DAT_101e473f8;
undefined8 DAT_101854bc8;
undefined8 DAT_101854bd0;
undefined8 DAT_101854bd8;
pointer PTR_FUN_101494950;
pointer PTR_FUN_101494970;
pointer PTR_FUN_101494990;
undefined8 *DAT_101854bd8;
undefined8 *DAT_101854bd0;
undefined8 *DAT_101854bc8;
pointer PTR_thunk_FUN_10033eb8c_1014949f8;
undefined8 *DAT_101e47400;
void *DAT_101e47408;
pthread_mutex_t *DAT_101e47408;
undefined *PTR_thunk_FUN_10033f5d4_101494ed0;
undefined FUN_1003400b4;
undefined8 *DAT_101d23930;
undefined *PTR_FUN_101494f00;
undefined *PTR_FUN_1014952a0;
long *DAT_101d23930;
long DAT_101d23930;
undefined8 *DAT_101e475a0;
void *DAT_101e475a8;
pthread_mutex_t *DAT_101e475a8;
undefined *PTR_thunk_FUN_100340b20_1014952d0;
undefined1 DAT_101e47410;
undefined2 DAT_101e47412;
undefined2 DAT_101e47414;
undefined4 DAT_101e47416;
undefined4 DAT_101e4741a;
undefined4 DAT_101e4741e;
undefined4 DAT_101e47422;
undefined4 DAT_101e47426;
undefined4 DAT_101e4742a;
undefined4 DAT_101e4742e;
undefined4 DAT_101e47432;
undefined4 DAT_101e47436;
undefined4 DAT_101e4743a;
undefined4 DAT_101e4743e;
undefined4 DAT_101e47442;
undefined4 DAT_101e47446;
undefined4 DAT_101e4744a;
undefined4 DAT_101e4744e;
undefined4 DAT_101e47452;
undefined4 DAT_101e47456;
undefined4 DAT_101e4745a;
undefined4 DAT_101e4745e;
undefined4 DAT_101e47462;
undefined4 DAT_101e47466;
undefined4 DAT_101e4746a;
undefined4 DAT_101e4746e;
undefined4 DAT_101e47472;
undefined4 DAT_101e47476;
undefined4 DAT_101e4747a;
undefined4 DAT_101e4747e;
undefined4 DAT_101e47482;
undefined4 DAT_101e47486;
undefined4 DAT_101e4748a;
undefined4 DAT_101e4748e;
undefined4 DAT_101e47492;
undefined4 DAT_101e47496;
undefined4 DAT_101e4749a;
undefined4 DAT_101e4749e;
undefined4 DAT_101e474a2;
undefined4 DAT_101e474a6;
undefined4 DAT_101e474aa;
undefined4 DAT_101e474ae;
undefined4 DAT_101e474b2;
undefined4 DAT_101e474b6;
undefined4 DAT_101e474ba;
undefined4 DAT_101e474be;
undefined4 DAT_101e474c2;
undefined4 DAT_101e474c6;
undefined4 DAT_101e474ca;
undefined4 DAT_101e474ce;
undefined4 DAT_101e474d2;
undefined4 DAT_101e474d6;
undefined4 DAT_101e474da;
undefined4 DAT_101e474de;
undefined4 DAT_101e474e2;
undefined4 DAT_101e474ec;
undefined4 DAT_101e474f0;
undefined4 DAT_101e474f4;
undefined4 DAT_101e474f8;
undefined4 DAT_101e47504;
undefined4 DAT_101e47508;
undefined4 DAT_101e4750c;
undefined4 DAT_101e474e8;
undefined4 DAT_101e47510;
undefined4 DAT_101e474fc;
undefined4 DAT_101e47514;
undefined4 DAT_101e47500;
undefined4 DAT_101e47518;
undefined4 DAT_101e4751c;
undefined4 DAT_101e47520;
undefined4 DAT_101e47524;
undefined4 DAT_101e47528;
undefined4 DAT_101e4752c;
undefined4 DAT_101e47530;
undefined4 DAT_101e47534;
undefined4 DAT_101e47538;
undefined4 DAT_101e4753c;
undefined4 DAT_101e47540;
undefined4 DAT_101e47544;
undefined4 DAT_101e47548;
undefined4 DAT_101e4754c;
undefined4 DAT_101e47550;
undefined4 DAT_101e47554;
undefined4 DAT_101e47558;
undefined4 DAT_101e4755c;
undefined4 DAT_101e47560;
undefined4 DAT_101e47564;
undefined4 DAT_101e47568;
undefined4 DAT_101e4756c;
undefined4 DAT_101e47570;
undefined4 DAT_101e47574;
undefined4 DAT_101e47578;
undefined4 DAT_101e4757c;
undefined4 DAT_101e47580;
undefined DAT_101e47588;
undefined8 *DAT_101d23938;
undefined *PTR_FUN_101495300;
undefined *PTR_FUN_1014956a0;
long *DAT_101d23938;
long DAT_101d23938;
void *DAT_101d23940;
undefined FUN_100341e20;
long DAT_101d23940;
undefined8 DAT_101d23940;
undefined *PTR_thunk_FUN_100341ed8_1014956d0;
undefined *PTR_FUN_101495a78;
undefined thunk_FUN_100342370;
pointer PTR_s_Adagio_101854c40;
undefined8 DAT_101854c48;
float DAT_101e475b0;
undefined4 DAT_101e47670;
undefined DAT_101e47670;
undefined DAT_101e47680;
undefined DAT_101e47690;
undefined DAT_101e476a0;
undefined4 DAT_101e476b0;
undefined4 DAT_101e476b4;
undefined4 DAT_101e476b8;
undefined4 DAT_101e476bc;
undefined DAT_101e476c0;
undefined4 DAT_101e476d0;
undefined4 DAT_101e476d4;
undefined DAT_101e476d8;
undefined DAT_101e476e8;
undefined DAT_101e476f8;
undefined DAT_101e47708;
undefined4 DAT_101e47718;
undefined4 DAT_101e4771c;
undefined4 DAT_101e47720;
undefined DAT_101e475b0;
undefined8 DAT_101e475c0;
undefined4 DAT_101e475c8;
undefined DAT_101e475cc;
undefined4 DAT_101e475dc;
undefined4 DAT_101e475e0;
undefined8 DAT_101e475e4;
undefined4 DAT_101e475ec;
undefined8 DAT_101e475f0;
undefined8 DAT_101e475f8;
undefined DAT_101e47600;
undefined DAT_101e47610;
undefined DAT_101e47620;
undefined DAT_101e47630;
undefined4 DAT_101e47640;
undefined4 DAT_101e47644;
undefined4 DAT_101e47648;
undefined4 DAT_101e4764c;
undefined4 DAT_101e47650;
undefined4 DAT_101e47654;
undefined8 DAT_101e47658;
undefined4 DAT_101e47660;
undefined8 UNK_101e475b8;
undefined8 UNK_101e475d4;
undefined8 UNK_101e47608;
undefined8 UNK_101e47618;
undefined8 UNK_101e47628;
undefined8 UNK_101e47638;
undefined8 UNK_101e47678;
undefined8 UNK_101e47688;
undefined8 UNK_101e47698;
undefined8 UNK_101e476a8;
undefined8 UNK_101e476c8;
undefined8 UNK_101e476e0;
undefined8 UNK_101e476f0;
undefined8 UNK_101e47700;
undefined8 UNK_101e47710;
undefined DAT_101e47740;
undefined4 DAT_101e47800;
undefined DAT_101e477f0;
undefined DAT_101e47800;
undefined DAT_101e47810;
undefined DAT_101e47820;
undefined4 DAT_101e47830;
undefined4 DAT_101e47834;
undefined4 DAT_101e47838;
undefined4 DAT_101e4783c;
undefined DAT_101e47840;
undefined4 DAT_101e47850;
undefined4 DAT_101e47854;
undefined DAT_101e47858;
undefined DAT_101e47868;
undefined DAT_101e47878;
undefined DAT_101e47888;
undefined4 DAT_101e47898;
undefined4 DAT_101e4789c;
undefined4 DAT_101e478a0;
undefined DAT_101e47730;
undefined8 DAT_101e47740;
undefined4 DAT_101e47748;
undefined DAT_101e4774c;
undefined4 DAT_101e4775c;
undefined4 DAT_101e47760;
undefined8 DAT_101e47764;
undefined4 DAT_101e4776c;
undefined8 DAT_101e47770;
undefined8 DAT_101e47778;
undefined DAT_101e47780;
undefined DAT_101e47790;
undefined DAT_101e477a0;
undefined DAT_101e477b0;
undefined4 DAT_101e477c0;
undefined4 DAT_101e477c4;
undefined4 DAT_101e477c8;
undefined4 DAT_101e477cc;
undefined4 DAT_101e477d0;
undefined4 DAT_101e477d4;
undefined8 DAT_101e477d8;
undefined4 DAT_101e477e0;
undefined8 UNK_101e47738;
undefined8 UNK_101e47754;
undefined8 UNK_101e47788;
undefined8 UNK_101e47798;
undefined8 UNK_101e477a8;
undefined8 UNK_101e477b8;
undefined8 UNK_101e477f8;
undefined8 UNK_101e47808;
undefined8 UNK_101e47818;
undefined8 UNK_101e47828;
undefined8 UNK_101e47848;
undefined8 UNK_101e47860;
undefined8 UNK_101e47870;
undefined8 UNK_101e47880;
undefined8 UNK_101e47890;
float DAT_101e47950;
undefined4 DAT_101e47a10;
float DAT_101e478b0;
undefined4 DAT_101e47970;
undefined DAT_101e478c0;
undefined4 DAT_101e47980;
undefined4 DAT_101e47984;
undefined DAT_101e47970;
undefined DAT_101e47980;
undefined DAT_101e47990;
undefined DAT_101e479a0;
undefined4 DAT_101e479b0;
undefined4 DAT_101e479b4;
undefined4 DAT_101e479b8;
undefined4 DAT_101e479bc;
undefined DAT_101e479c0;
undefined4 DAT_101e479d0;
undefined4 DAT_101e479d4;
undefined DAT_101e479d8;
undefined DAT_101e479e8;
undefined DAT_101e479f8;
undefined DAT_101e47a10;
undefined DAT_101e47a08;
undefined4 DAT_101e47a18;
undefined4 DAT_101e47a1c;
undefined4 DAT_101e47a20;
undefined DAT_101e478b0;
undefined8 DAT_101e478c0;
undefined4 DAT_101e478c8;
undefined DAT_101e478cc;
undefined4 DAT_101e478dc;
undefined4 DAT_101e478e0;
undefined8 DAT_101e478e4;
undefined4 DAT_101e478ec;
undefined8 DAT_101e478f0;
undefined8 DAT_101e478f8;
undefined DAT_101e47900;
undefined DAT_101e47910;
undefined DAT_101e47920;
undefined DAT_101e47930;
undefined4 DAT_101e47940;
undefined4 DAT_101e47944;
undefined4 DAT_101e47948;
undefined4 DAT_101e4794c;
undefined4 DAT_101e47950;
undefined4 DAT_101e47954;
undefined8 DAT_101e47958;
undefined4 DAT_101e47960;
undefined8 UNK_101e478b8;
undefined8 UNK_101e478d4;
undefined8 UNK_101e47908;
undefined8 UNK_101e47918;
undefined8 UNK_101e47928;
undefined8 UNK_101e47938;
undefined8 UNK_101e47978;
undefined8 UNK_101e47988;
undefined8 UNK_101e47998;
undefined8 UNK_101e479a8;
undefined8 UNK_101e479c8;
undefined8 UNK_101e479e0;
undefined8 UNK_101e479f0;
undefined8 UNK_101e47a00;
undefined DAT_101e47af0;
undefined DAT_101e47b00;
undefined DAT_101e47b10;
undefined DAT_101e47b20;
undefined4 DAT_101e47b30;
undefined4 DAT_101e47b34;
undefined4 DAT_101e47b38;
undefined4 DAT_101e47b3c;
undefined DAT_101e47b40;
undefined4 DAT_101e47b50;
undefined4 DAT_101e47b54;
undefined DAT_101e47b58;
undefined DAT_101e47b68;
undefined DAT_101e47b78;
undefined DAT_101e47b88;
undefined4 DAT_101e47b98;
undefined4 DAT_101e47b9c;
undefined4 DAT_101e47ba0;
undefined DAT_101e47a30;
undefined8 DAT_101e47a40;
undefined4 DAT_101e47a48;
undefined DAT_101e47a4c;
undefined4 DAT_101e47a5c;
undefined4 DAT_101e47a60;
undefined8 DAT_101e47a64;
undefined4 DAT_101e47a6c;
undefined8 DAT_101e47a70;
undefined8 DAT_101e47a78;
undefined DAT_101e47a80;
undefined DAT_101e47a90;
undefined DAT_101e47aa0;
undefined DAT_101e47ab0;
undefined4 DAT_101e47ac0;
undefined4 DAT_101e47ac4;
undefined4 DAT_101e47ac8;
undefined4 DAT_101e47acc;
undefined4 DAT_101e47ad0;
undefined4 DAT_101e47ad4;
undefined8 DAT_101e47ad8;
undefined4 DAT_101e47ae0;
undefined8 UNK_101e47a38;
undefined8 UNK_101e47a54;
undefined8 UNK_101e47a88;
undefined8 UNK_101e47a98;
undefined8 UNK_101e47aa8;
undefined8 UNK_101e47ab8;
undefined8 UNK_101e47af8;
undefined8 UNK_101e47b08;
undefined8 UNK_101e47b18;
undefined8 UNK_101e47b28;
undefined8 UNK_101e47b48;
undefined8 UNK_101e47b60;
undefined8 UNK_101e47b70;
undefined8 UNK_101e47b80;
undefined8 UNK_101e47b90;
undefined DAT_101e47bc0;
undefined4 DAT_101e47c84;
undefined DAT_101e47c70;
undefined DAT_101e47c80;
undefined DAT_101e47c90;
undefined DAT_101e47ca0;
undefined4 DAT_101e47cb0;
undefined4 DAT_101e47cb4;
undefined4 DAT_101e47cb8;
undefined4 DAT_101e47cbc;
undefined DAT_101e47cc0;
undefined4 DAT_101e47cd0;
undefined4 DAT_101e47cd4;
undefined DAT_101e47cd8;
undefined DAT_101e47ce8;
undefined DAT_101e47cf8;
undefined DAT_101e47d08;
undefined4 DAT_101e47d18;
undefined4 DAT_101e47d1c;
undefined4 DAT_101e47d20;
undefined DAT_101e47bb0;
undefined8 DAT_101e47bc0;
undefined4 DAT_101e47bc8;
undefined DAT_101e47bcc;
undefined4 DAT_101e47bdc;
undefined4 DAT_101e47be0;
undefined8 DAT_101e47be4;
undefined4 DAT_101e47bec;
undefined8 DAT_101e47bf0;
undefined8 DAT_101e47bf8;
undefined DAT_101e47c00;
undefined DAT_101e47c10;
undefined DAT_101e47c20;
undefined DAT_101e47c30;
undefined4 DAT_101e47c40;
undefined4 DAT_101e47c44;
undefined4 DAT_101e47c48;
undefined4 DAT_101e47c4c;
undefined4 DAT_101e47c50;
undefined4 DAT_101e47c54;
undefined8 DAT_101e47c58;
undefined4 DAT_101e47c60;
undefined8 UNK_101e47bb8;
undefined8 UNK_101e47bd4;
undefined8 UNK_101e47c08;
undefined8 UNK_101e47c18;
undefined8 UNK_101e47c28;
undefined8 UNK_101e47c38;
undefined8 UNK_101e47c78;
undefined8 UNK_101e47c88;
undefined8 UNK_101e47c98;
undefined8 UNK_101e47ca8;
undefined8 UNK_101e47cc8;
undefined8 UNK_101e47ce0;
undefined8 UNK_101e47cf0;
undefined8 UNK_101e47d00;
undefined8 UNK_101e47d10;
undefined DAT_101e47d30;
char DAT_101d23a38;
char DAT_101e47e88;
long DAT_101e47e80;
long DAT_101d90978;
undefined8 DAT_101d90978;
undefined *PTR_s_Neutral_10149dc48;
byte DAT_101e47da0;
undefined4 DAT_101e47da8;
char *DAT_101e47db0;
undefined8 DAT_101e47db8;
undefined8 DAT_101e47dc0;
undefined8 DAT_101e47dc8;
undefined4 DAT_101e47dd0;
undefined4 DAT_101e47dd8;
undefined1 DAT_101e47ddc;
undefined8 DAT_101e47de0;
undefined1 DAT_101e47de8;
undefined1 DAT_101e47dea;
undefined4 DAT_101e47df4;
undefined4 DAT_101e47df8;
undefined4 DAT_101e47ded;
undefined4 DAT_101e47dfc;
undefined1 DAT_101e47e00;
undefined8 DAT_101e47e20;
long *DAT_101e47e20;
undefined DAT_101e47e18;
size_t DAT_101e47e10;
undefined8 DAT_101e47e08;
long DAT_101e47e20;
long DAT_101d23a68;
undefined8 DAT_101d23a68;
ulong DAT_1018589c0;
double DAT_1018589c0;
undefined8 *DAT_101e47e70;
ulong DAT_101e47e70;
undefined8 DAT_101e47e70;
long DAT_101e47e70;
string s_0123456789ABCDEF_101867290;
undefined1 DAT_101d23a38;
undefined1 DAT_101d23a39;
undefined DAT_101d23a40;
undefined4 DAT_1018589d0;
undefined8 DAT_101d23a50;
undefined4 *DAT_101d23a68;
undefined8 DAT_101d23a70;
undefined DAT_101d23a80;
undefined4 DAT_1018589d4;
int DAT_1018589d8;
pointer PTR_FUN_101495aa8;
undefined FUN_10034d3a0;
undefined8 *DAT_101e47e80;
undefined1 DAT_101e47e88;
undefined DAT_101e47ea0;
undefined8 DAT_101e47ea8;
undefined8 DAT_101e47e90;
undefined8 DAT_101e47e98;
undefined4 DAT_101e47e8c;
undefined1 DAT_101e47ea0;
uint DAT_101e47e8c;
byte DAT_101e47e88;
char DAT_101d23a39;
long DAT_101e47e90;
int *DAT_101e47e98;
undefined4 DAT_101d2aab8;
undefined4 DAT_101d2aac0;
undefined FUN_1003a70d8;
undefined *PTR_s_Buff_Withdraw_10185a458;
undefined *PTR_s_Buff_Emote_Dance_10185a570;
undefined *PTR_s_Buff_Emote_Taunt_10185a578;
undefined FUN_1003a70e0;
undefined FUN_1003a98dc;
undefined FUN_1003a999c;
undefined FUN_1003a9abc;
undefined FUN_1003a9b28;
undefined FUN_1003a9a08;
undefined *PTR_s_Buff_Debug_Camera_10185a580;
undefined FUN_1003a7428;
undefined *PTR_s_Buff_Invulnerable_10185a588;
undefined *PTR_s_Buff_Debug_CrowdControl_10185a598;
undefined FUN_1003a7490;
undefined8 DAT_10185a468;
undefined *PTR_s_Buff_Fear_10185a5b8;
undefined *PTR_s_Buff_Silence_10185a560;
undefined *PTR_s_Buff_ItemSilence_10185a5a8;
undefined *PTR_s_Buff_Slow_10185a5a0;
undefined *PTR_s_Buff_Blind_10185a5b0;
undefined FUN_1003a7150;
undefined *PTR_s_Buff_Stasis_10185a590;
undefined FUN_1003a7480;
undefined *PTR_s_Buff_Minion_Ace_10185a5c0;
undefined FUN_1003a749c;
undefined FUN_1003a758c;
undefined *PTR_s_Buff_Debug_FortifiedHealth_10185a5c8;
undefined FUN_10048fb04;
undefined8 DAT_10185a5d0;
undefined FUN_1003a7680;
undefined FUN_1003bfce4;
undefined *PTR_s_Buff_Nexus_5v5_Target_Laser_10185b148;
undefined *PTR_s_Buff_Nexus_5v5_Target_Warning_10185b150;
undefined *PTR_s_Buff_Nexus_VainNodeSupport_10185b158;
undefined FUN_1003bfd88;
undefined FUN_1003bfdf0;
undefined FUN_1003b7180;
undefined *PTR_s_Buff_Minion_TutorialSpeedBoost_10185ada0;
undefined FUN_1003b72fc;
undefined FUN_1003b2704;
undefined FUN_1003b26d0;
undefined *PTR_s_*JungleMinion_TreeEnt_RootField*_10185ac20;
undefined FUN_1003b2780;
undefined *PTR_s_Buff_JungleMinion_5v5_CrystalOrb_10185ac28;
undefined FUN_1003b2830;
undefined FUN_1003b283c;
undefined *PTR_s_Buff_JungleMinion_5v5_WeaponOrb_10185ac30;
undefined FUN_1003b2558;
undefined FUN_1003b2668;
undefined FUN_1003b24f0;
undefined FUN_1003b4d30;
undefined FUN_1003a3a5c;
undefined *PTR_s_build://Sounds/Kraken.assetbundl_10185acc8;
undefined FUN_1003a3acc;
undefined *PTR_s_build://Sounds/5v5/SFX/sfx_black_10185a470;
pointer PTR_s_build://Sounds/5v5/SFX/sfx_black_10185a488;
pointer PTR_s_build://Sounds/5v5/SFX/sfx_black_10185a498;
undefined *PTR_s_Buff_Kraken5v5_BlackclawUncaptur_10185a4a0;
undefined *PTR_s_Buff_GloballyVisibleTrueSight_5v_10185a4a8;
undefined *PTR_s_build://Sounds/5v5/SFX/sfx_ghost_10185a700;
undefined *PTR_s_Buff_Kraken5v5_UncapturedColor_10185a4b0;
undefined FUN_1003a5ce0;
undefined *PTR_s_Buff_Item_HealingFlask_10185aaf8;
undefined *PTR_s_*Item_SprintBoots*_10185ab00;
undefined *PTR_s_Buff_Item_SprintBootsSprint_10185ab08;
undefined *PTR_s_*Item_TravelBoots*_10185ab10;
undefined *PTR_s_Buff_Item_TravelBootsSprint_10185ab18;
undefined *PTR_s_*Item_JourneyBoots*_10185ab20;
undefined *PTR_s_Buff_Item_JourneyBootsSprint_10185ab28;
undefined *PTR_s_*Item_HalcyonChargers*_10185ab30;
undefined *PTR_s_Buff_Item_HalcyonChargersSprint_10185ab38;
undefined *PTR_s_*Item_MinionCandy*_10185ab40;
undefined *PTR_s_Buff_Item_MinionCandy_10185ab48;
undefined FUN_1003b01e8;
undefined FUN_1003b0260;
undefined *PTR_s_*Item_ReflexBlock*_10185ab50;
undefined *PTR_s_Buff_Item_ReflexBlock_10185ab58;
undefined *PTR_s_Buff_BlockDebuffs_10185a528;
undefined *PTR_s_Buff_Item_FountainOfRenewal_10185ab60;
undefined *PTR_s_*Item_FountainOfRenewal*_10185ba58;
undefined FUN_1003b06c4;
undefined *PTR_s_*Item_Crucible*_10185ab68;
undefined *PTR_s_*Item_WeaponInfusion*_10185ab70;
undefined *PTR_s_*Item_CrystalInfusion*_10185ab88;
undefined FUN_1003b0b48;
undefined *PTR_s_*Item_WarTreads*_10185aba8;
undefined *PTR_s_Buff_Item_WarTreads_Speed_10185abb0;
undefined *PTR_s_Buff_Stealth_10185aba0;
undefined *PTR_s_*Item_ScoutTrap*_10185ab90;
undefined *PTR_s_Buff_GloballyVisibleTrueSight_10185a878;
undefined *PTR_s_Buff_ShowGloballyVisible_10185a880;
undefined FUN_1003b06d8;
undefined FUN_1003b074c;
undefined *PTR_s_*Item_AtlasPauldron*_10185abb8;
undefined *PTR_s_Buff_Item_AtlasPauldronSlow_10185abc0;
undefined *PTR_s_Buff_Item_Shiversteel_10185abd0;
undefined FUN_1003b0c4c;
undefined FUN_1003b0658;
undefined *PTR_s_*VisionTotem*_10185abd8;
undefined FUN_1003b0c7c;
undefined *PTR_s_*Item_TeleportBoots*_10185bad0;
undefined *PTR_s_Buff_Item_TeleportBoots_EndPoint_10185abe0;
undefined FUN_1003b1464;
undefined *PTR_s_Buff_Item_TeleportBoots_Channeli_10185abe8;
undefined *PTR_s_Buff_Item_TeleportBoots_Structur_10185abf0;
undefined FUN_1003b1660;
undefined FUN_1003b1278;
undefined FUN_1003b16a8;
undefined FUN_1003c5148;
undefined *PTR_s_Buff_Catherine_MercilessPursuit__10185a540;
undefined *PTR_s_Buff_Catherine_MercilessPursuit__10185a548;
undefined FUN_1003a6edc;
undefined FUN_1003a6ec8;
undefined FUN_1003a6ef0;
undefined FUN_1003a6f04;
undefined *PTR_s_Buff_Catherine_Stormguard_10185a550;
undefined FUN_1003a6f2c;
undefined *PTR_s_Buff_Revealed_10185a448;
undefined FUN_1003a6f18;
undefined FUN_1003a6fa8;
undefined FUN_1003a6f40;
undefined FUN_1003a6fbc;
undefined *PTR_s_Buff_Catherine_Talent_Shockwave_10185a558;
undefined *PTR_s_Buff_GloballyVisible_10185a1f0;
undefined FUN_1003a6f74;
undefined FUN_1003bbad4;
undefined FUN_1003bbb84;
undefined FUN_1003bbc34;
undefined *PTR_s_Buff_Ringo_TwirlingSilver_10185af80;
undefined FUN_1003bc42c;
undefined FUN_1003a2660;
undefined *PTR_s_Buff_Adagio_VerseOfJudgement_For_10185a1e8;
undefined FUN_1003a264c;
undefined *PTR_s_Buff_Adagio_Talent_HealingVerse_10185a1f8;
undefined *PTR_s_Buff_Adagio_ArcaneFire_10185a200;
undefined FUN_1003a2550;
undefined8 DAT_10185a210;
undefined FUN_1003b4260;
undefined FUN_1003b42e4;
undefined *PTR_s_Buff_Koshka_TwirlEmpoweredAttack_10185ac98;
undefined *PTR_s_Buff_Koshka_Claws_10185aca0;
undefined FUN_1003b47d0;
undefined FUN_1003b4534;
undefined FUN_1003b474c;
undefined FUN_1003b4800;
undefined *PTR_s_Buff_Koshka_B_Barrier_10185aca8;
undefined *PTR_s_Buff_Koshka_Talent_TwirlyLife_10185acb0;
undefined FUN_1003b48a0;
undefined *PTR_s_Buff_Koshka_FortifiedHealthTwirl_10185acb8;
undefined FUN_1003b4814;
undefined FUN_1003b488c;
undefined FUN_1003b48d4;
undefined FUN_1003b48fc;
undefined8 DAT_10185acc0;
undefined FUN_1003b4910;
undefined FUN_1003b4938;
undefined FUN_1003b4a54;
undefined FUN_1003b491c;
undefined FUN_1003b4c3c;
undefined *PTR_s_Ability__Koshka__Fakeout_101858ff0;
undefined *PTR_s_Ability__Koshka__A_101858fd8;
undefined *PTR_s_Ability__Koshka__C_101858fe8;
undefined *PTR_s_Buff_Glaive_Crit_PFX_10185a718;
undefined FUN_1003aa4e8;
undefined *PTR_s_Buff_SelfProjectile_10185a530;
undefined *PTR_s_Buff_Glaive_Afterburn_KnockbackW_10185a720;
undefined FUN_1003aa718;
undefined FUN_1003aa74c;
undefined FUN_10049ae44;
undefined FUN_1003aa4fc;
undefined FUN_1003aa680;
undefined FUN_1003aa868;
undefined *PTR_s_Buff_Glaive_Talent_ViolentAfterb_10185a728;
undefined *PTR_s_Buff_Glaive_ViolentAfterburnTarg_10185a730;
undefined FUN_1003aa7dc;
undefined FUN_1003aa760;
undefined FUN_1003aa804;
undefined FUN_1003aa7f0;
undefined FUN_1003aa87c;
undefined *PTR_s_Buff_Glaive_Talent_TwistedPursui_10185a738;
undefined FUN_1003aab38;
undefined FUN_1003aab24;
undefined FUN_1003aab80;
undefined *PTR_s_Buff_Glaive_Talent_StunningBlood_10185a740;
undefined FUN_1003aab4c;
undefined FUN_1003aaba8;
undefined4 DAT_101d2c65c;
undefined FUN_1003aab94;
undefined FUN_1003aa9ec;
undefined FUN_1003aaa54;
undefined FUN_1003aaabc;
undefined *PTR_s_Buff_Glaive_Withdraw_10185a748;
undefined *PTR_s_Buff_PetalMinion_Frenzy_10185aec8;
undefined *PTR_s_Buff_Petal_Talent_Bouncer_10185aed0;
undefined *PTR_s_Buff_Petal_Talent_Bouncer_Energy_10185aed8;
undefined FUN_1003ba9c4;
undefined *PTR_s_Buff_Petal_B_Amp_10185aee0;
undefined FUN_1003ba95c;
undefined FUN_1003ba9d8;
undefined FUN_1003baa74;
undefined FUN_1003baa3c;
undefined FUN_1003baa88;
undefined FUN_1003babf0;
undefined FUN_1003ba22c;
undefined FUN_1003ba61c;
undefined *PTR_s_Buff_PetalSeed_LandMine_ReduceDa_10185aea8;
undefined *PTR_s_Buff_PetalSeed_LandMine_Expiry_10185aeb0;
undefined *PTR_s_Buff_Petal_Talent_KaboomSeeds_10185aea0;
undefined *PTR_s_Buff_DisplacementLock_10185a678;
undefined FUN_1003ba6d0;
undefined FUN_1003ba144;
undefined FUN_1003ba6f8;
undefined FUN_1003ba6e4;
undefined FUN_1003ba3b4;
undefined FUN_1003ba5b0;
undefined FUN_1003ba70c;
undefined FUN_1003baec8;
undefined *PTR_s_Buff_PetalMinion_Explosion_Slow_10185af00;
undefined FUN_1003baf40;
undefined FUN_1003bb590;
undefined FUN_1003bb57c;
undefined8 DAT_10185af08;
undefined FUN_1003bb5a4;
undefined FUN_1003bafc0;
undefined FUN_1003bb0a8;
undefined FUN_1003bb4c8;
undefined FUN_1003bb290;
undefined FUN_1003bb45c;
undefined *PTR_s_Buff_Petal_Perk_SpawnMunion_10185aef8;
undefined *PTR_s_Buff_SAW_RoadieRun_10185b060;
undefined *PTR_s_Buff_SAW_Talent_RoadRage_10185b058;
undefined *PTR_s_Buff_SAW_HeroicPerk_SpinUp_10185b040;
undefined FUN_1003bd4c0;
undefined FUN_1003bdc04;
undefined FUN_1003bdbf0;
undefined FUN_1003bdc18;
undefined *PTR_s_Buff_SAW_Strafe_10185b050;
undefined FUN_1003bdbdc;
undefined *PTR_s_*SAW*_10185b068;
undefined *PTR_s_Buff_SAW_SuppressingFire_SoundFx_10185b070;
undefined *PTR_s_Buff_SAW_SuppressingFire_BuildSp_10185b078;
undefined *PTR_s_Buff_SAW_SuppressingFire_Slow_10185b080;
undefined *PTR_s_Ability__SAW__A_1018590e0;
undefined FUN_1003bdc50;
undefined FUN_1003bdc9c;
undefined FUN_1003bde20;
undefined FUN_1003bdf50;
undefined FUN_1003bdfa8;
undefined FUN_1003be0b8;
undefined *PTR_s_Ability__SAW__B_1018590e8;
undefined *PTR_s_Buff_SAW_Withdraw_10185b088;
undefined FUN_1003b1a18;
undefined *PTR_s_Buff_Joule_Talent_RocketLeapfrog_10185ac00;
undefined FUN_1003b1a9c;
undefined FUN_1003b1a88;
undefined FUN_1003b1b18;
undefined FUN_1003b1aac;
undefined FUN_1003b1d00;
undefined *PTR_FUN_101499960;
undefined FUN_1003b1e5c;
undefined *PTR_s_Buff_Joule_Thunderstrike_10185ac08;
undefined FUN_1003b1d14;
undefined FUN_1003b2128;
undefined FUN_1003b1fe0;
undefined FUN_1003b22ac;
undefined FUN_1003b2440;
undefined *PTR_s_Buff_Joule_Withdraw_10185ac18;
undefined *PTR_s_Buff_Krul_DeadMansRush_Barrier_10185ace0;
undefined FUN_1003b509c;
undefined FUN_1003b537c;
undefined FUN_1003b5400;
undefined *PTR_s_Buff_Krul_Spectral_Smite_Debuf_10185acf0;
undefined FUN_1003b550c;
undefined FUN_1003b5554;
undefined FUN_1003b5414;
undefined *PTR_s_Buff_Krul_Withdraw_10185acf8;



/*
 * FUN_1001acbb8
 * VA: 0x1001acbb8 | Source: functions/1001a.c:10925
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 3
 * Callees: FUN_100644a94, FUN_100644aec, FUN_100644c34
 */
void FUN_1001acbb8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("UI::EVENT_MENU_POPUP_REQUESTING_CLOSE");
  FUN_100644aec(auStack_40,uVar1,param_1);
  FUN_100644c34(param_1,auStack_40,0);
  return;
}



/*
 * thunk_FUN_1001acbb8
 * VA: 0xthunk_1001acbb8 | Source: functions/1001a.c:10127
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 3
 * Callees: FUN_100644a94, FUN_100644aec, FUN_100644c34
 * Callers: FUN_100187d2c, FUN_1001ab780, thunk_FUN_1001ab780
 */
void thunk_FUN_1001acbb8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("UI::EVENT_MENU_POPUP_REQUESTING_CLOSE");
  FUN_100644aec(auStack_40,uVar1,param_1);
  FUN_100644c34(param_1,auStack_40,0);
  return;
}



/*
 * FUN_1002057d4
 * VA: 0x1002057d4 | Source: functions/10020.c:4910
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 4
 * Callees: FUN_10002f320, FUN_100031670, FUN_100031740, FUN_1000e6ae0, FUN_1000ec1cc, FUN_1001e3090, FUN_1004e0150
 */
void FUN_1002057d4(long param_1,long *param_2)

{
  byte *pbVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  byte *pbVar12;
  void *pvVar13;
  byte *pbVar14;
  long lVar15;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (((char)param_2[1] == '\0') || (lVar15 = *param_2, lVar15 == 0)) {
    uVar8 = FUN_10002f320();
    FUN_100031740(uVar8,param_1 + 0x10);
    return;
  }
  bVar5 = *(byte *)(lVar15 + 0x5f);
  uVar11 = (ulong)bVar5;
  sVar2 = *(size_t *)(lVar15 + 0x50);
  if (-1 < (char)bVar5) {
    sVar2 = uVar11;
  }
  bVar6 = *(byte *)(param_1 + 0x27);
  sVar3 = *(size_t *)(param_1 + 0x18);
  if (-1 < (char)bVar6) {
    sVar3 = (ulong)bVar6;
  }
  if (sVar2 == sVar3) {
    pbVar1 = (byte *)(param_1 + 0x10);
    pvVar13 = *(void **)(lVar15 + 0x48);
    puVar4 = pvVar13;
    if (-1 < (char)bVar5) {
      puVar4 = (undefined8 *)(lVar15 + 0x48);
    }
    pbVar14 = *(byte **)pbVar1;
    if (-1 < (char)bVar6) {
      pbVar14 = pbVar1;
    }
    if ((char)bVar5 < '\0') {
      if ((sVar2 != 0) && (iVar7 = _memcmp(puVar4,pbVar14,sVar2), iVar7 != 0)) {
        return;
      }
    }
    else if (sVar2 != 0) {
      if ((uint)*pbVar14 != ((uint)pvVar13 & 0xff)) {
        return;
      }
      pbVar12 = (byte *)(lVar15 + 0x49);
      while( true ) {
        uVar11 = uVar11 - 1;
        pbVar14 = pbVar14 + 1;
        if (uVar11 == 0) break;
        bVar5 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        if (bVar5 != *pbVar14) {
          return;
        }
      }
    }
    *(undefined1 *)(param_1 + 0x29) = 0;
    if (*(char *)(lVar15 + 0xd9) == '\0') {
      uVar8 = FUN_10002f320();
      FUN_100031740(uVar8,pbVar1);
      uVar8 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
      uVar9 = FUN_1004e0150("MENU_DIALOG_CHEST_REDEMPTION_FAILIRE",0);
      uVar10 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1001e3090(uVar8,uVar9,uVar10,0,0);
      return;
    }
    local_40 = 0;
    uStack_38 = 0;
    iVar7 = FUN_1000e6ae0(lVar15,&local_40);
    uVar8 = FUN_10002f320();
    if (iVar7 == 0) {
      FUN_100031740(uVar8,pbVar1);
    }
    else {
      FUN_100031670(uVar8,pbVar1,&local_40);
    }
    FUN_1000ec1cc(&local_40,1);
  }
  return;
}



/*
 * thunk_FUN_1002057d4
 * VA: 0xthunk_1002057d4 | Source: functions/10020.c:5126
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 4
 * Callees: FUN_10002f320, FUN_100031670, FUN_100031740, FUN_1000e6ae0, FUN_1000ec1cc, FUN_1001e3090, FUN_1004e0150
 * Callers: FUN_100187d2c, FUN_100205414
 */
void thunk_FUN_1002057d4(long param_1,long *param_2)

{
  byte *pbVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  byte *pbVar12;
  void *pvVar13;
  byte *pbVar14;
  long lVar15;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (((char)param_2[1] == '\0') || (lVar15 = *param_2, lVar15 == 0)) {
    uVar8 = FUN_10002f320();
    FUN_100031740(uVar8,param_1 + 0x10);
    return;
  }
  bVar5 = *(byte *)(lVar15 + 0x5f);
  uVar11 = (ulong)bVar5;
  sVar2 = *(size_t *)(lVar15 + 0x50);
  if (-1 < (char)bVar5) {
    sVar2 = uVar11;
  }
  bVar6 = *(byte *)(param_1 + 0x27);
  sVar3 = *(size_t *)(param_1 + 0x18);
  if (-1 < (char)bVar6) {
    sVar3 = (ulong)bVar6;
  }
  if (sVar2 == sVar3) {
    pbVar1 = (byte *)(param_1 + 0x10);
    pvVar13 = *(void **)(lVar15 + 0x48);
    puVar4 = pvVar13;
    if (-1 < (char)bVar5) {
      puVar4 = (undefined8 *)(lVar15 + 0x48);
    }
    pbVar14 = *(byte **)pbVar1;
    if (-1 < (char)bVar6) {
      pbVar14 = pbVar1;
    }
    if ((char)bVar5 < '\0') {
      if ((sVar2 != 0) && (iVar7 = _memcmp(puVar4,pbVar14,sVar2), iVar7 != 0)) {
        return;
      }
    }
    else if (sVar2 != 0) {
      if ((uint)*pbVar14 != ((uint)pvVar13 & 0xff)) {
        return;
      }
      pbVar12 = (byte *)(lVar15 + 0x49);
      while( true ) {
        uVar11 = uVar11 - 1;
        pbVar14 = pbVar14 + 1;
        if (uVar11 == 0) break;
        bVar5 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        if (bVar5 != *pbVar14) {
          return;
        }
      }
    }
    *(undefined1 *)(param_1 + 0x29) = 0;
    if (*(char *)(lVar15 + 0xd9) == '\0') {
      uVar8 = FUN_10002f320();
      FUN_100031740(uVar8,pbVar1);
      uVar8 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
      uVar9 = FUN_1004e0150("MENU_DIALOG_CHEST_REDEMPTION_FAILIRE",0);
      uVar10 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1001e3090(uVar8,uVar9,uVar10,0,0);
      return;
    }
    uStack_40 = 0;
    uStack_38 = 0;
    iVar7 = FUN_1000e6ae0(lVar15,&uStack_40);
    uVar8 = FUN_10002f320();
    if (iVar7 == 0) {
      FUN_100031740(uVar8,pbVar1);
    }
    else {
      FUN_100031670(uVar8,pbVar1,&uStack_40);
    }
    FUN_1000ec1cc(&uStack_40,1);
  }
  return;
}



/*
 * FUN_100217520
 * VA: 0x100217520 | Source: functions/10021.c:5686
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 3
 * Callees: FUN_10002f320, FUN_100031898, FUN_100105ed8, FUN_1001e3090, FUN_100343694, FUN_1004e0150
 */
void FUN_100217520(long param_1,long param_2)

{
  byte *pbVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  byte *pbVar15;
  void *pvVar16;
  byte *pbVar17;
  
  if (*(char *)(param_1 + 0x2c) != '\0') {
    bVar7 = *(byte *)(param_1 + 0x47);
    uVar14 = (ulong)bVar7;
    sVar2 = *(size_t *)(param_1 + 0x38);
    if (-1 < (char)bVar7) {
      sVar2 = uVar14;
    }
    bVar8 = *(byte *)(param_1 + 0x27);
    sVar3 = *(size_t *)(param_1 + 0x18);
    if (-1 < (char)bVar8) {
      sVar3 = (ulong)bVar8;
    }
    if (sVar2 == sVar3) {
      pbVar1 = (byte *)(param_1 + 0x10);
      pvVar16 = *(void **)(param_1 + 0x30);
      puVar4 = pvVar16;
      if (-1 < (char)bVar7) {
        puVar4 = (undefined8 *)(param_1 + 0x30);
      }
      pbVar17 = *(byte **)pbVar1;
      if (-1 < (char)bVar8) {
        pbVar17 = pbVar1;
      }
      if ((char)bVar7 < '\0') {
        if ((sVar2 != 0) && (iVar9 = _memcmp(puVar4,pbVar17,sVar2), iVar9 != 0)) {
          return;
        }
      }
      else if (sVar2 != 0) {
        if ((uint)*pbVar17 != ((uint)pvVar16 & 0xff)) {
          return;
        }
        pbVar15 = (byte *)(param_1 + 0x31);
        while( true ) {
          uVar14 = uVar14 - 1;
          pbVar17 = pbVar17 + 1;
          if (uVar14 == 0) break;
          bVar7 = *pbVar15;
          pbVar15 = pbVar15 + 1;
          if (bVar7 != *pbVar17) {
            return;
          }
        }
      }
      if (((*(ushort *)(param_2 + 0xb0) >> 8 & 1) == 0) ||
         (*(int *)(param_1 + 0x28) != (int)(char)*(ushort *)(param_2 + 0xb0))) {
        uVar11 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
        uVar12 = FUN_1004e0150("MENU_TALENTS_UPGRADE_GENERIC_ERROR",0);
        uVar13 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        FUN_1001e3090(uVar11,uVar12,uVar13,param_1,0);
      }
      else {
        FUN_10002f320();
        FUN_100031898();
        plVar5 = (long *)*(long *)(param_2 + 0x78);
        if (-1 < *(char *)(param_2 + 0x8f)) {
          plVar5 = (long *)(param_2 + 0x78);
        }
        plVar6 = (long *)*(long *)(param_2 + 0x90);
        if (-1 < *(char *)(param_2 + 0xa7)) {
          plVar6 = (long *)(param_2 + 0x90);
        }
        lVar10 = FUN_100343694(param_2);
        FUN_100105ed8(plVar5,plVar6,*(undefined4 *)(lVar10 + 0x18),
                      (ulong)(long)(short)(*(short *)(param_2 + 0xb0) << 8) >> 8,
                      *(ulong *)(param_2 + 0xa8) >> 0x20,
                      (long)(*(ulong *)(param_2 + 0xa8) << 0x20) >> 0x30);
      }
      if (*(char *)(param_1 + 0x27) < '\0') {
        **(undefined1 **)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
      }
      else {
        *pbVar1 = 0;
        *(undefined1 *)(param_1 + 0x27) = 0;
      }
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined1 *)(param_1 + 0x2c) = 0;
    }
  }
  return;
}



/*
 * thunk_FUN_100217520
 * VA: 0xthunk_100217520 | Source: functions/10021.c:5793
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 3
 * Callees: FUN_10002f320, FUN_100031898, FUN_100105ed8, FUN_1001e3090, FUN_100343694, FUN_1004e0150
 * Callers: FUN_100187d2c, FUN_100217184
 */
void thunk_FUN_100217520(long param_1,long param_2)

{
  byte *pbVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  byte *pbVar15;
  void *pvVar16;
  byte *pbVar17;
  
  if (*(char *)(param_1 + 0x2c) != '\0') {
    bVar7 = *(byte *)(param_1 + 0x47);
    uVar14 = (ulong)bVar7;
    sVar2 = *(size_t *)(param_1 + 0x38);
    if (-1 < (char)bVar7) {
      sVar2 = uVar14;
    }
    bVar8 = *(byte *)(param_1 + 0x27);
    sVar3 = *(size_t *)(param_1 + 0x18);
    if (-1 < (char)bVar8) {
      sVar3 = (ulong)bVar8;
    }
    if (sVar2 == sVar3) {
      pbVar1 = (byte *)(param_1 + 0x10);
      pvVar16 = *(void **)(param_1 + 0x30);
      puVar4 = pvVar16;
      if (-1 < (char)bVar7) {
        puVar4 = (undefined8 *)(param_1 + 0x30);
      }
      pbVar17 = *(byte **)pbVar1;
      if (-1 < (char)bVar8) {
        pbVar17 = pbVar1;
      }
      if ((char)bVar7 < '\0') {
        if ((sVar2 != 0) && (iVar9 = _memcmp(puVar4,pbVar17,sVar2), iVar9 != 0)) {
          return;
        }
      }
      else if (sVar2 != 0) {
        if ((uint)*pbVar17 != ((uint)pvVar16 & 0xff)) {
          return;
        }
        pbVar15 = (byte *)(param_1 + 0x31);
        while( true ) {
          uVar14 = uVar14 - 1;
          pbVar17 = pbVar17 + 1;
          if (uVar14 == 0) break;
          bVar7 = *pbVar15;
          pbVar15 = pbVar15 + 1;
          if (bVar7 != *pbVar17) {
            return;
          }
        }
      }
      if (((*(ushort *)(param_2 + 0xb0) >> 8 & 1) == 0) ||
         (*(int *)(param_1 + 0x28) != (int)(char)*(ushort *)(param_2 + 0xb0))) {
        uVar11 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
        uVar12 = FUN_1004e0150("MENU_TALENTS_UPGRADE_GENERIC_ERROR",0);
        uVar13 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        FUN_1001e3090(uVar11,uVar12,uVar13,param_1,0);
      }
      else {
        FUN_10002f320();
        FUN_100031898();
        plVar5 = (long *)*(long *)(param_2 + 0x78);
        if (-1 < *(char *)(param_2 + 0x8f)) {
          plVar5 = (long *)(param_2 + 0x78);
        }
        plVar6 = (long *)*(long *)(param_2 + 0x90);
        if (-1 < *(char *)(param_2 + 0xa7)) {
          plVar6 = (long *)(param_2 + 0x90);
        }
        lVar10 = FUN_100343694(param_2);
        FUN_100105ed8(plVar5,plVar6,*(undefined4 *)(lVar10 + 0x18),
                      (ulong)(long)(short)(*(short *)(param_2 + 0xb0) << 8) >> 8,
                      *(ulong *)(param_2 + 0xa8) >> 0x20,
                      (long)(*(ulong *)(param_2 + 0xa8) << 0x20) >> 0x30);
      }
      if (*(char *)(param_1 + 0x27) < '\0') {
        **(undefined1 **)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
      }
      else {
        *pbVar1 = 0;
        *(undefined1 *)(param_1 + 0x27) = 0;
      }
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined1 *)(param_1 + 0x2c) = 0;
    }
  }
  return;
}



/*
 * FUN_10021844c
 * trophy tab constructor — operator_new(0x50)
 * VA: 0x10021844c | Source: functions/10021.c:7026
 * Dylib: Layer 6
 * Layout: +0x28=subObj (tab sub-object), vt[2](self)=content object getter, vt[3](self)=section name getter, vt[4](self)=title getter (calls FUN_1004e0150)
 * Notes: Created by dylib for BAG panel. SubObj at tab+0x28 used for registration.
 * CE-gate: NO | Guest-gate: NO
 * Callees: FUN_10014f4a0, FUN_101472808, FUN_101472ba0, FUN_101472bd8, thunk_FUN_1002184bc, thunk_FUN_1002e90bc
 */
undefined8 * FUN_10021844c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_101472bd8;
  operator_new(3000);
  lVar1 = thunk_FUN_1002e90bc();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  FUN_10014f4a0(param_1 + 2);
  *param_1 = &PTR_thunk_FUN_1002184bc_1014727d0;
  param_1[2] = &PTR_FUN_101472808;
  param_1[5] = &PTR_FUN_101472ba0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  return param_1;
}



/*
 * thunk_FUN_10021844c
 * VA: 0xthunk_10021844c | Source: functions/10021.c:7050
 * CE-gate: NO | Guest-gate: NO
 * Callees: FUN_10014f4a0, FUN_101472808, FUN_101472ba0, FUN_101472bd8, thunk_FUN_1002184bc, thunk_FUN_1002e90bc
 * Callers: FUN_1001f59e8, thunk_FUN_1001f59e8
 */
undefined8 * thunk_FUN_10021844c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_101472bd8;
  operator_new(3000);
  lVar1 = thunk_FUN_1002e90bc();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  FUN_10014f4a0(param_1 + 2);
  *param_1 = &PTR_thunk_FUN_1002184bc_1014727d0;
  param_1[2] = &PTR_FUN_101472808;
  param_1[5] = &PTR_FUN_101472ba0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  return param_1;
}



/*
 * FUN_100231480
 * VA: 0x100231480 | Source: functions/10023.c:1059
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 4
 * Callees: FUN_10015d3ec, FUN_10015d3f8, FUN_100164f34, FUN_1001e3120, FUN_100231648, FUN_1004e0150, FUN_1004e3120, FUN_1004e3654 (+4 more)
 */
void FUN_100231480(long param_1)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  lVar3 = FUN_10015d3ec();
  if (((int)*(uint *)(lVar3 + 0x5624) < 0) ||
     (*(int *)(*(long *)(lVar3 + 0x5268) + (ulong)*(uint *)(lVar3 + 0x5624) * 0x108 + 0x50) != 4)) {
    lVar3 = FUN_10015d3ec();
    if ((int)*(uint *)(lVar3 + 0x5624) < 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar3 + 0x5268) + (ulong)*(uint *)(lVar3 + 0x5624) * 0x108 + 0x50) != 3)
    {
      return;
    }
  }
  puVar1 = (uint *)(param_1 + 0x1058c);
  if (((-1 < (int)*puVar1) && (*puVar1 < *(uint *)(param_1 + 0x1fd8))) &&
     (iVar2 = FUN_10015d3f8(), iVar2 != 0)) {
    FUN_10015d3ec();
    uVar4 = FUN_100164f34();
    uVar5 = FUN_100655b6c(*(long *)(*(long *)(param_1 + 0x1fe0) + (ulong)*puVar1 * 8) + 0x248);
    iVar2 = FUN_1004e3654(uVar4,uVar5);
    if (iVar2 != 0) {
      FUN_100231648(param_1);
      return;
    }
    uVar4 = FUN_1004e0150("MENU_GUILD_MEMBERS_CONFIRM_REMOVE_MEMBER_TITLE",0);
    thunk_FUN_1004e439c(auStack_40,uVar4);
    uVar4 = FUN_1004e0150("MENU_GUILD_MEMBERS_CONFIRM_REMOVE_MEMBER_BODY",0);
    thunk_FUN_1004e439c(auStack_50,uVar4);
    FUN_1004e3120(auStack_60,"[MEMBER_NAME]");
    uVar4 = FUN_100655b6c(*(long *)(*(long *)(param_1 + 0x1fe0) + (ulong)*puVar1 * 8) + 0x248);
    FUN_1004e3bc4(auStack_50,0,auStack_60,uVar4);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    uVar5 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
    FUN_1001e3120(auStack_40,auStack_50,uVar4,uVar5,param_1,thunk_FUN_100231d94,0);
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
 * thunk_FUN_100231480
 * VA: 0xthunk_100231480 | Source: functions/10023.c:81
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 4
 * Callees: FUN_10015d3ec, FUN_10015d3f8, FUN_100164f34, FUN_1001e3120, FUN_100231648, FUN_1004e0150, FUN_1004e3120, FUN_1004e3654 (+4 more)
 * Callers: FUN_100187d2c, FUN_10022d51c, thunk_FUN_10022d51c
 */
void thunk_FUN_100231480(long param_1)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  void *pvStack_58;
  undefined1 auStack_50 [8];
  void *pvStack_48;
  undefined1 auStack_40 [8];
  void *pvStack_38;
  
  lVar3 = FUN_10015d3ec();
  if (((int)*(uint *)(lVar3 + 0x5624) < 0) ||
     (*(int *)(*(long *)(lVar3 + 0x5268) + (ulong)*(uint *)(lVar3 + 0x5624) * 0x108 + 0x50) != 4)) {
    lVar3 = FUN_10015d3ec();
    if ((int)*(uint *)(lVar3 + 0x5624) < 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar3 + 0x5268) + (ulong)*(uint *)(lVar3 + 0x5624) * 0x108 + 0x50) != 3)
    {
      return;
    }
  }
  puVar1 = (uint *)(param_1 + 0x1058c);
  if (((-1 < (int)*puVar1) && (*puVar1 < *(uint *)(param_1 + 0x1fd8))) &&
     (iVar2 = FUN_10015d3f8(), iVar2 != 0)) {
    FUN_10015d3ec();
    uVar4 = FUN_100164f34();
    uVar5 = FUN_100655b6c(*(long *)(*(long *)(param_1 + 0x1fe0) + (ulong)*puVar1 * 8) + 0x248);
    iVar2 = FUN_1004e3654(uVar4,uVar5);
    if (iVar2 != 0) {
      FUN_100231648(param_1);
      return;
    }
    uVar4 = FUN_1004e0150("MENU_GUILD_MEMBERS_CONFIRM_REMOVE_MEMBER_TITLE",0);
    thunk_FUN_1004e439c(auStack_40,uVar4);
    uVar4 = FUN_1004e0150("MENU_GUILD_MEMBERS_CONFIRM_REMOVE_MEMBER_BODY",0);
    thunk_FUN_1004e439c(auStack_50,uVar4);
    FUN_1004e3120(auStack_60,"[MEMBER_NAME]");
    uVar4 = FUN_100655b6c(*(long *)(*(long *)(param_1 + 0x1fe0) + (ulong)*puVar1 * 8) + 0x248);
    FUN_1004e3bc4(auStack_50,0,auStack_60,uVar4);
    if (pvStack_58 != (void *)0x0) {
      operator_delete__(pvStack_58);
    }
    uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    uVar5 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
    FUN_1001e3120(auStack_40,auStack_50,uVar4,uVar5,param_1,thunk_FUN_100231d94,0);
    if (pvStack_48 != (void *)0x0) {
      operator_delete__(pvStack_48);
    }
    if (pvStack_38 != (void *)0x0) {
      operator_delete__(pvStack_38);
    }
  }
  return;
}



/*
 * FUN_100231648
 * VA: 0x100231648 | Source: functions/10023.c:1123
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 6
 * Callees: FUN_1000153b4, FUN_10015d3ec, FUN_1001e3120, FUN_1004e0150, thunk_FUN_100231bcc, thunk_FUN_1004e439c
 * Callers: FUN_100231480, thunk_FUN_100231480
 */
void FUN_100231648(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  void *local_38;
  undefined1 auStack_30 [8];
  void *local_28;
  
  uVar1 = FUN_1004e0150("GUILD_LEAVE_DIALOG_TITLE",0);
  thunk_FUN_1004e439c(auStack_30,uVar1);
  uVar1 = FUN_1004e0150("GUILD_LEAVE_MEMBER_DIALOG_TEXT",0);
  thunk_FUN_1004e439c(auStack_40,uVar1);
  if (*(int *)(param_1 + 0x1fd8) == 1) {
    pcVar3 = "GUILD_LEAVE_LAST_MEMBER_DIALOG_TEXT";
  }
  else {
    lVar2 = FUN_10015d3ec();
    if (((int)*(uint *)(lVar2 + 0x5624) < 0) ||
       (*(int *)(*(long *)(lVar2 + 0x5268) + (ulong)*(uint *)(lVar2 + 0x5624) * 0x108 + 0x50) != 4))
    goto LAB_1002316f0;
    pcVar3 = "GUILD_LEAVE_LEADER_DIALOG_TEXT";
  }
  uVar1 = FUN_1004e0150(pcVar3,0);
  FUN_1000153b4(auStack_40,uVar1);
LAB_1002316f0:
  uVar1 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  uVar4 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
  FUN_1001e3120(auStack_30,auStack_40,uVar1,uVar4,param_1,thunk_FUN_100231bcc,0);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}



/*
 * thunk_FUN_100231648
 * VA: 0xthunk_100231648 | Source: functions/10023.c:7
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 6
 * Callees: FUN_1000153b4, FUN_10015d3ec, FUN_1001e3120, FUN_1004e0150, thunk_FUN_100231bcc, thunk_FUN_1004e439c
 * Callers: FUN_100187d2c, FUN_10022d51c, FUN_100230dc8, thunk_FUN_10022d51c
 */
void thunk_FUN_100231648(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  void *pvStack_38;
  undefined1 auStack_30 [8];
  void *pvStack_28;
  
  uVar1 = FUN_1004e0150("GUILD_LEAVE_DIALOG_TITLE",0);
  thunk_FUN_1004e439c(auStack_30,uVar1);
  uVar1 = FUN_1004e0150("GUILD_LEAVE_MEMBER_DIALOG_TEXT",0);
  thunk_FUN_1004e439c(auStack_40,uVar1);
  if (*(int *)(param_1 + 0x1fd8) == 1) {
    pcVar3 = "GUILD_LEAVE_LAST_MEMBER_DIALOG_TEXT";
  }
  else {
    lVar2 = FUN_10015d3ec();
    if (((int)*(uint *)(lVar2 + 0x5624) < 0) ||
       (*(int *)(*(long *)(lVar2 + 0x5268) + (ulong)*(uint *)(lVar2 + 0x5624) * 0x108 + 0x50) != 4))
    goto LAB_1002316f0;
    pcVar3 = "GUILD_LEAVE_LEADER_DIALOG_TEXT";
  }
  uVar1 = FUN_1004e0150(pcVar3,0);
  FUN_1000153b4(auStack_40,uVar1);
LAB_1002316f0:
  uVar1 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  uVar4 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
  FUN_1001e3120(auStack_30,auStack_40,uVar1,uVar4,param_1,thunk_FUN_100231bcc,0);
  if (pvStack_38 != (void *)0x0) {
    operator_delete__(pvStack_38);
  }
  if (pvStack_28 != (void *)0x0) {
    operator_delete__(pvStack_28);
  }
  return;
}



/*
 * FUN_100231764
 * VA: 0x100231764 | Source: functions/10023.c:1200
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 6
 * Callees: FUN_100131220, FUN_10015d3ec, FUN_10015d3f8, FUN_1001e3120, FUN_1004e0150, FUN_1004e3120, FUN_1004e3bc4, FUN_100655b6c (+2 more)
 */
void FUN_100231764(long param_1)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  undefined1 auStack_30 [8];
  void *local_28;
  
  iVar2 = FUN_100131220();
  if (iVar2 != 0) {
    lVar3 = FUN_10015d3ec();
    if ((-1 < (int)*(uint *)(lVar3 + 0x5624)) &&
       (*(int *)(*(long *)(lVar3 + 0x5268) + (ulong)*(uint *)(lVar3 + 0x5624) * 0x108 + 0x50) == 4))
    {
      puVar1 = (uint *)(param_1 + 0x1058c);
      if ((-1 < (int)*puVar1) &&
         ((*puVar1 < *(uint *)(param_1 + 0x1fd8) && (iVar2 = FUN_10015d3f8(), iVar2 != 0)))) {
        if (*(int *)(*(long *)(*(long *)(param_1 + 0x1fe0) + (ulong)*puVar1 * 8) + 0x25a0) == 3) {
          uVar4 = FUN_1004e0150("MENU_GUILD_MEMBERS_CONFIRM_DEMOTE_MEMBER_TITLE",0);
          thunk_FUN_1004e439c(auStack_30,uVar4);
          pcVar5 = "MENU_GUILD_MEMBERS_CONFIRM_DEMOTE_MEMBER_BODY";
        }
        else {
          uVar4 = FUN_1004e0150("MENU_GUILD_MEMBERS_CONFIRM_PROMOTE_MEMBER_TITLE",0);
          thunk_FUN_1004e439c(auStack_30,uVar4);
          pcVar5 = "MENU_GUILD_MEMBERS_CONFIRM_PROMOTE_MEMBER_BODY";
        }
        uVar4 = FUN_1004e0150(pcVar5,0);
        thunk_FUN_1004e439c(auStack_40,uVar4);
        FUN_1004e3120(auStack_50,"[MEMBER_NAME]");
        uVar4 = FUN_100655b6c(*(long *)(*(long *)(param_1 + 0x1fe0) + (ulong)*puVar1 * 8) + 0x248);
        FUN_1004e3bc4(auStack_40,0,auStack_50,uVar4);
        if (local_48 != (void *)0x0) {
          operator_delete__(local_48);
        }
        uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        uVar6 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
        FUN_1001e3120(auStack_30,auStack_40,uVar4,uVar6,param_1,thunk_FUN_100231c1c,0);
        if (local_38 != (void *)0x0) {
          operator_delete__(local_38);
        }
        if (local_28 != (void *)0x0) {
          operator_delete__(local_28);
        }
      }
    }
  }
  return;
}



/*
 * thunk_FUN_100231764
 * VA: 0xthunk_100231764 | Source: functions/10023.c:145
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 6
 * Callees: FUN_100131220, FUN_10015d3ec, FUN_10015d3f8, FUN_1001e3120, FUN_1004e0150, FUN_1004e3120, FUN_1004e3bc4, FUN_100655b6c (+2 more)
 * Callers: FUN_100187d2c, FUN_10022d51c, thunk_FUN_10022d51c
 */
void thunk_FUN_100231764(long param_1)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  void *pvStack_48;
  undefined1 auStack_40 [8];
  void *pvStack_38;
  undefined1 auStack_30 [8];
  void *pvStack_28;
  
  iVar2 = FUN_100131220();
  if (iVar2 != 0) {
    lVar3 = FUN_10015d3ec();
    if ((-1 < (int)*(uint *)(lVar3 + 0x5624)) &&
       (*(int *)(*(long *)(lVar3 + 0x5268) + (ulong)*(uint *)(lVar3 + 0x5624) * 0x108 + 0x50) == 4))
    {
      puVar1 = (uint *)(param_1 + 0x1058c);
      if ((-1 < (int)*puVar1) &&
         ((*puVar1 < *(uint *)(param_1 + 0x1fd8) && (iVar2 = FUN_10015d3f8(), iVar2 != 0)))) {
        if (*(int *)(*(long *)(*(long *)(param_1 + 0x1fe0) + (ulong)*puVar1 * 8) + 0x25a0) == 3) {
          uVar4 = FUN_1004e0150("MENU_GUILD_MEMBERS_CONFIRM_DEMOTE_MEMBER_TITLE",0);
          thunk_FUN_1004e439c(auStack_30,uVar4);
          pcVar5 = "MENU_GUILD_MEMBERS_CONFIRM_DEMOTE_MEMBER_BODY";
        }
        else {
          uVar4 = FUN_1004e0150("MENU_GUILD_MEMBERS_CONFIRM_PROMOTE_MEMBER_TITLE",0);
          thunk_FUN_1004e439c(auStack_30,uVar4);
          pcVar5 = "MENU_GUILD_MEMBERS_CONFIRM_PROMOTE_MEMBER_BODY";
        }
        uVar4 = FUN_1004e0150(pcVar5,0);
        thunk_FUN_1004e439c(auStack_40,uVar4);
        FUN_1004e3120(auStack_50,"[MEMBER_NAME]");
        uVar4 = FUN_100655b6c(*(long *)(*(long *)(param_1 + 0x1fe0) + (ulong)*puVar1 * 8) + 0x248);
        FUN_1004e3bc4(auStack_40,0,auStack_50,uVar4);
        if (pvStack_48 != (void *)0x0) {
          operator_delete__(pvStack_48);
        }
        uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        uVar6 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
        FUN_1001e3120(auStack_30,auStack_40,uVar4,uVar6,param_1,thunk_FUN_100231c1c,0);
        if (pvStack_38 != (void *)0x0) {
          operator_delete__(pvStack_38);
        }
        if (pvStack_28 != (void *)0x0) {
          operator_delete__(pvStack_28);
        }
      }
    }
  }
  return;
}



/*
 * FUN_100231900
 * VA: 0x100231900 | Source: functions/10023.c:1271
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 4
 * Callees: FUN_100131220, FUN_10015d3ec, FUN_10015d3f8, FUN_1001e3120, FUN_1004e0150, FUN_1004e3120, FUN_1004e3bc4, FUN_100655b6c (+2 more)
 */
void FUN_100231900(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  undefined1 auStack_30 [8];
  void *local_28;
  
  iVar2 = FUN_100131220();
  if (iVar2 != 0) {
    lVar3 = FUN_10015d3ec();
    if ((-1 < (int)*(uint *)(lVar3 + 0x5624)) &&
       (*(int *)(*(long *)(lVar3 + 0x5268) + (ulong)*(uint *)(lVar3 + 0x5624) * 0x108 + 0x50) == 4))
    {
      uVar1 = *(uint *)(param_1 + 0x1058c);
      if ((-1 < (int)uVar1) &&
         ((uVar1 < *(uint *)(param_1 + 0x1fd8) && (iVar2 = FUN_10015d3f8(), iVar2 != 0)))) {
        uVar4 = FUN_1004e0150("MENU_GUILD_MEMBERS_CONFIRM_TRANSFER_LEADERSHIP_TO_MEMBER_TITLE",0);
        thunk_FUN_1004e439c(auStack_30,uVar4);
        uVar4 = FUN_1004e0150("MENU_GUILD_MEMBERS_CONFIRM_TRANSFER_LEADERSHIP_TO_MEMBER_BODY",0);
        thunk_FUN_1004e439c(auStack_40,uVar4);
        FUN_1004e3120(auStack_50,"[MEMBER_NAME]");
        uVar4 = FUN_100655b6c(*(long *)(*(long *)(param_1 + 0x1fe0) +
                                       (ulong)*(uint *)(param_1 + 0x1058c) * 8) + 0x248);
        FUN_1004e3bc4(auStack_40,0,auStack_50,uVar4);
        if (local_48 != (void *)0x0) {
          operator_delete__(local_48);
        }
        uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        uVar5 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
        FUN_1001e3120(auStack_30,auStack_40,uVar4,uVar5,param_1,thunk_FUN_100231cd8,0);
        if (local_38 != (void *)0x0) {
          operator_delete__(local_38);
        }
        if (local_28 != (void *)0x0) {
          operator_delete__(local_28);
        }
      }
    }
  }
  return;
}



/*
 * thunk_FUN_100231900
 * VA: 0xthunk_100231900 | Source: functions/10023.c:206
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 4
 * Callees: FUN_100131220, FUN_10015d3ec, FUN_10015d3f8, FUN_1001e3120, FUN_1004e0150, FUN_1004e3120, FUN_1004e3bc4, FUN_100655b6c (+2 more)
 * Callers: FUN_100187d2c, FUN_10022d51c, thunk_FUN_10022d51c
 */
void thunk_FUN_100231900(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  void *pvStack_48;
  undefined1 auStack_40 [8];
  void *pvStack_38;
  undefined1 auStack_30 [8];
  void *pvStack_28;
  
  iVar2 = FUN_100131220();
  if (iVar2 != 0) {
    lVar3 = FUN_10015d3ec();
    if ((-1 < (int)*(uint *)(lVar3 + 0x5624)) &&
       (*(int *)(*(long *)(lVar3 + 0x5268) + (ulong)*(uint *)(lVar3 + 0x5624) * 0x108 + 0x50) == 4))
    {
      uVar1 = *(uint *)(param_1 + 0x1058c);
      if ((-1 < (int)uVar1) &&
         ((uVar1 < *(uint *)(param_1 + 0x1fd8) && (iVar2 = FUN_10015d3f8(), iVar2 != 0)))) {
        uVar4 = FUN_1004e0150("MENU_GUILD_MEMBERS_CONFIRM_TRANSFER_LEADERSHIP_TO_MEMBER_TITLE",0);
        thunk_FUN_1004e439c(auStack_30,uVar4);
        uVar4 = FUN_1004e0150("MENU_GUILD_MEMBERS_CONFIRM_TRANSFER_LEADERSHIP_TO_MEMBER_BODY",0);
        thunk_FUN_1004e439c(auStack_40,uVar4);
        FUN_1004e3120(auStack_50,"[MEMBER_NAME]");
        uVar4 = FUN_100655b6c(*(long *)(*(long *)(param_1 + 0x1fe0) +
                                       (ulong)*(uint *)(param_1 + 0x1058c) * 8) + 0x248);
        FUN_1004e3bc4(auStack_40,0,auStack_50,uVar4);
        if (pvStack_48 != (void *)0x0) {
          operator_delete__(pvStack_48);
        }
        uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        uVar5 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
        FUN_1001e3120(auStack_30,auStack_40,uVar4,uVar5,param_1,thunk_FUN_100231cd8,0);
        if (pvStack_38 != (void *)0x0) {
          operator_delete__(pvStack_38);
        }
        if (pvStack_28 != (void *)0x0) {
          operator_delete__(pvStack_28);
        }
      }
    }
  }
  return;
}



/*
 * FUN_1002365d8
 * VA: 0x1002365d8 | Source: functions/10023.c:4410
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 3
 * Callees: FUN_10001549c, FUN_10002f320, FUN_100030e74, FUN_10003330c, FUN_10003c048, FUN_10003c1ec, FUN_100126c88, FUN_1004e0150 (+7 more)
 */
void FUN_1002365d8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_148 [8];
  void *local_140;
  undefined1 auStack_138 [8];
  void *local_130;
  void *local_128;
  void *local_120;
  undefined7 local_118;
  char cStack_111;
  char local_101;
  undefined4 local_100;
  undefined8 local_fc;
  undefined **local_f0;
  undefined1 auStack_e8 [40];
  long local_c0;
  undefined8 local_a0;
  void *local_98;
  void *local_90;
  char local_79;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_48;
  
  thunk_FUN_1001cd434(&local_f0);
  uVar2 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_INFO_TITLE",0);
  thunk_FUN_1004e439c(&local_128,uVar2);
  FUN_10003330c(&local_118,&DAT_101d91198);
  local_100 = 0;
  local_fc = 0x41a00000;
  FUN_10003c048(auStack_e8,&local_128);
  if (local_101 < '\0') {
    operator_delete((void *)CONCAT17(cStack_111,local_118));
  }
  if (local_120 != (void *)0x0) {
    operator_delete__(local_120);
  }
  uVar2 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_INFO_SEASON",0);
  thunk_FUN_1004e439c(&local_128,uVar2);
  FUN_10003330c(&local_118,&DAT_101d91198);
  local_100 = 1;
  local_fc = 0x41a00000;
  FUN_10003c048(auStack_e8,&local_128);
  if (local_101 < '\0') {
    operator_delete((void *)CONCAT17(cStack_111,local_118));
  }
  if (local_120 != (void *)0x0) {
    operator_delete__(local_120);
  }
  uVar2 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_INFO_LEVELING",0);
  thunk_FUN_1004e439c(auStack_138,uVar2);
  FUN_1004e313c(auStack_148);
  FUN_1004e38ac(auStack_148,"%d");
  FUN_1004e3120(&local_128,"[MAX_GUILD_MEMBERS]");
  FUN_1004e3bc4(auStack_138,0,&local_128,auStack_148);
  if (local_120 != (void *)0x0) {
    operator_delete__(local_120);
  }
  thunk_FUN_1004e439c(&local_128,auStack_138);
  FUN_10003330c(&local_118,&DAT_101d91198);
  local_100 = 1;
  local_fc = 0x41a00000;
  FUN_10003c048(auStack_e8,&local_128);
  if (local_101 < '\0') {
    operator_delete((void *)CONCAT17(cStack_111,local_118));
  }
  if (local_120 != (void *)0x0) {
    operator_delete__(local_120);
  }
  local_c0 = param_1 + 0x2bd8;
  local_48 = 3;
  local_60 = 0x3f19999a;
  iVar1 = FUN_100126c88();
  local_5c = 0x44548000;
  if (iVar1 == 0) {
    local_5c = 0x442f0000;
  }
  uVar2 = FUN_10002f320();
  FUN_10001549c(&local_128,"guildInfo");
  FUN_100030e74(uVar2,&local_128,&local_f0);
  if (cStack_111 < '\0') {
    operator_delete(local_128);
  }
  if (local_140 != (void *)0x0) {
    operator_delete__(local_140);
  }
  if (local_130 != (void *)0x0) {
    operator_delete__(local_130);
  }
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



/*
 * thunk_FUN_1002365d8
 * VA: 0xthunk_1002365d8 | Source: functions/10023.c:2476
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 3
 * Callees: FUN_10001549c, FUN_10002f320, FUN_100030e74, FUN_10003330c, FUN_10003c048, FUN_10003c1ec, FUN_100126c88, FUN_1004e0150 (+7 more)
 * Callers: FUN_100187d2c, FUN_100232f00, thunk_FUN_100232f00
 */
void thunk_FUN_1002365d8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_148 [8];
  void *pvStack_140;
  undefined1 auStack_138 [8];
  void *pvStack_130;
  void *pvStack_128;
  void *pvStack_120;
  undefined7 uStack_118;
  char cStack_111;
  char cStack_101;
  undefined4 uStack_100;
  undefined8 uStack_fc;
  undefined **ppuStack_f0;
  undefined1 auStack_e8 [40];
  long lStack_c0;
  undefined8 uStack_a0;
  void *pvStack_98;
  void *pvStack_90;
  char cStack_79;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_48;
  
  thunk_FUN_1001cd434(&ppuStack_f0);
  uVar2 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_INFO_TITLE",0);
  thunk_FUN_1004e439c(&pvStack_128,uVar2);
  FUN_10003330c(&uStack_118,&DAT_101d91198);
  uStack_100 = 0;
  uStack_fc = 0x41a00000;
  FUN_10003c048(auStack_e8,&pvStack_128);
  if (cStack_101 < '\0') {
    operator_delete((void *)CONCAT17(cStack_111,uStack_118));
  }
  if (pvStack_120 != (void *)0x0) {
    operator_delete__(pvStack_120);
  }
  uVar2 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_INFO_SEASON",0);
  thunk_FUN_1004e439c(&pvStack_128,uVar2);
  FUN_10003330c(&uStack_118,&DAT_101d91198);
  uStack_100 = 1;
  uStack_fc = 0x41a00000;
  FUN_10003c048(auStack_e8,&pvStack_128);
  if (cStack_101 < '\0') {
    operator_delete((void *)CONCAT17(cStack_111,uStack_118));
  }
  if (pvStack_120 != (void *)0x0) {
    operator_delete__(pvStack_120);
  }
  uVar2 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_INFO_LEVELING",0);
  thunk_FUN_1004e439c(auStack_138,uVar2);
  FUN_1004e313c(auStack_148);
  FUN_1004e38ac(auStack_148,"%d");
  FUN_1004e3120(&pvStack_128,"[MAX_GUILD_MEMBERS]");
  FUN_1004e3bc4(auStack_138,0,&pvStack_128,auStack_148);
  if (pvStack_120 != (void *)0x0) {
    operator_delete__(pvStack_120);
  }
  thunk_FUN_1004e439c(&pvStack_128,auStack_138);
  FUN_10003330c(&uStack_118,&DAT_101d91198);
  uStack_100 = 1;
  uStack_fc = 0x41a00000;
  FUN_10003c048(auStack_e8,&pvStack_128);
  if (cStack_101 < '\0') {
    operator_delete((void *)CONCAT17(cStack_111,uStack_118));
  }
  if (pvStack_120 != (void *)0x0) {
    operator_delete__(pvStack_120);
  }
  lStack_c0 = param_1 + 0x2bd8;
  uStack_48 = 3;
  uStack_60 = 0x3f19999a;
  iVar1 = FUN_100126c88();
  uStack_5c = 0x44548000;
  if (iVar1 == 0) {
    uStack_5c = 0x442f0000;
  }
  uVar2 = FUN_10002f320();
  FUN_10001549c(&pvStack_128,"guildInfo");
  FUN_100030e74(uVar2,&pvStack_128,&ppuStack_f0);
  if (cStack_111 < '\0') {
    operator_delete(pvStack_128);
  }
  if (pvStack_140 != (void *)0x0) {
    operator_delete__(pvStack_140);
  }
  if (pvStack_130 != (void *)0x0) {
    operator_delete__(pvStack_130);
  }
  ppuStack_f0 = &PTR_FUN_1014666e0;
  if (cStack_79 < '\0') {
    operator_delete(pvStack_90);
  }
  if (pvStack_98 != (void *)0x0) {
    operator_delete__(pvStack_98);
    uStack_a0 = 0;
    pvStack_98 = (void *)0x0;
  }
  FUN_10003c1ec(auStack_e8,1);
  return;
}



/*
 * FUN_1002381f4
 * VA: 0x1002381f4 | Source: functions/10023.c:5802
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 4
 * Callees: FUN_10001549c, FUN_10002f320, FUN_100031740, FUN_100143bec, FUN_1001e3090, FUN_100237f50, FUN_100237f54, FUN_1004e0150
 * Callers: FUN_100187d2c, FUN_100236d08, thunk_FUN_100236d08
 */
void FUN_1002381f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *local_38 [2];
  char local_21;
  
  FUN_100143bec(FUN_100237f50,FUN_100237f54);
  uVar1 = FUN_10002f320();
  FUN_10001549c(local_38,"guildChest");
  FUN_100031740(uVar1,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  uVar1 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
  uVar2 = FUN_1004e0150("MENU_DIALOG_CHEST_REDEMPTION_FAILIRE",0);
  uVar3 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar1,uVar2,uVar3,0,0);
  return;
}



/*
 * FUN_10023f2f4
 * VA: 0x10023f2f4 | Source: functions/10023.c:11595
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 3
 * Callees: FUN_1001e3090, FUN_1004e0150
 */
void FUN_10023f2f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_1004e0150("MENU_EXPLAIN_CRYSTAL_RATIO_TITLE",0);
  uVar2 = FUN_1004e0150("MENU_EXPLAIN_CRYSTAL_RATIO_DESC",0);
  uVar3 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar1,uVar2,uVar3,0,0);
  return;
}



/*
 * thunk_FUN_10023f2f4
 * VA: 0xthunk_10023f2f4 | Source: functions/10023.c:10898
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 3
 * Callees: FUN_1001e3090, FUN_1004e0150
 * Callers: FUN_100187d2c, FUN_10023e148, FUN_10023f3bc, thunk_FUN_10023e148
 */
void thunk_FUN_10023f2f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_1004e0150("MENU_EXPLAIN_CRYSTAL_RATIO_TITLE",0);
  uVar2 = FUN_1004e0150("MENU_EXPLAIN_CRYSTAL_RATIO_DESC",0);
  uVar3 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar1,uVar2,uVar3,0,0);
  return;
}



/*
 * FUN_10023f358
 * VA: 0x10023f358 | Source: functions/10023.c:11612
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 3
 * Callees: FUN_1001e3090, FUN_1004e0150
 */
void FUN_10023f358(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_1004e0150("MENU_EXPLAIN_WEAPON_RATIO_TITLE",0);
  uVar2 = FUN_1004e0150("MENU_EXPLAIN_WEAPON_RATIO_DESC",0);
  uVar3 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar1,uVar2,uVar3,0,0);
  return;
}



/*
 * thunk_FUN_10023f358
 * VA: 0xthunk_10023f358 | Source: functions/10023.c:10915
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 3
 * Callees: FUN_1001e3090, FUN_1004e0150
 * Callers: FUN_100187d2c, FUN_10023e148, FUN_10023f3bc, thunk_FUN_10023e148
 */
void thunk_FUN_10023f358(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_1004e0150("MENU_EXPLAIN_WEAPON_RATIO_TITLE",0);
  uVar2 = FUN_1004e0150("MENU_EXPLAIN_WEAPON_RATIO_DESC",0);
  uVar3 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar1,uVar2,uVar3,0,0);
  return;
}



/*
 * FUN_10025fd1c
 * VA: 0x10025fd1c | Source: functions/10025.c:12195
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 2, Vis masks: 2
 * Callees: FUN_10001554c, FUN_1000200a0, FUN_100126c88, FUN_100183c50, FUN_100183ca8, FUN_1001b495c, FUN_100260220, FUN_100260228 (+18 more)
 */
long * FUN_10025fd1c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined **ppuVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  code *local_a0;
  long *plStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  
  puVar10 = (undefined8 *)FUN_100269da8();
  *puVar10 = &PTR_thunk_FUN_100260244_10147b868;
  puVar10 = puVar10 + 0x19;
  FUN_10053319c(puVar10,0);
  plVar1 = param_1 + 0xc4;
  thunk_FUN_100183990(plVar1,0);
  plVar2 = param_1 + 0x182;
  thunk_FUN_100183990(plVar2,0);
  param_1[0x241] = 0;
  param_1[0x240] = 0;
  plVar3 = param_1 + 0x242;
  thunk_FUN_1006543ec(plVar3);
  FUN_10064e264(param_1 + 0x276);
  FUN_10064e264(param_1 + 0x28d);
  plVar4 = param_1 + 0x2a4;
  thunk_FUN_100650e64(plVar4);
  thunk_FUN_1001ceb64(param_1 + 0x2ca,0);
  plVar5 = param_1 + 0x2e7;
  thunk_FUN_100650e64(plVar5);
  lVar12 = DAT_101dc1cb8;
  param_1[0x30d] = DAT_101dc1cb8;
  param_1[0x30e] = lVar12;
  *(undefined4 *)(param_1 + 0x30f) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100642bd8(plVar3,puVar10,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x276,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x28d,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2ca,1);
  iVar9 = FUN_100126c88();
  FUN_100651594(plVar5,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&DAT_10115a168);
  uVar11 = FUN_1004e0150("MENU_TROPHY_DATA_ERROR",0);
  FUN_1006513c0(plVar5,uVar11);
  FUN_100651700(plVar5,3);
  FUN_100530adc(puVar10,1,0);
  FUN_100530adc(puVar10,DAT_101854ae0 == '\0');
  *(uint *)((long)param_1 + 0x1434) = *(uint *)((long)param_1 + 0x1434) | 0x10;
  FUN_100652cdc(param_1 + 0x15e,"arrow_down");
  *(byte *)(param_1 + 0x179) = *(byte *)(param_1 + 0x179) | 2;
  if ((*(float *)(param_1 + 0x167) != 2.0) || (*(float *)((long)param_1 + 0xb3c) != 2.0)) {
    param_1[0x167] = 0x4000000040000000;
    FUN_1000200a0(param_1 + 0x15e);
  }
  FUN_100183c50(0,plVar1,&DAT_10115a164);
  lVar12 = NEON_fmov(0x3f800000,4);
  if ((*(float *)(param_1 + 0xcd) != 1.0) || (*(float *)((long)param_1 + 0x66c) != 1.0)) {
    param_1[0xcd] = lVar12;
    FUN_1000200a0(plVar1);
  }
  FUN_1001b495c(0,plVar1);
  FUN_100183ca8(plVar1,1);
  uVar7 = *(uint *)((long)param_1 + 0x6a4);
  if ((uVar7 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x6a4) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar1);
  }
  uVar8 = DAT_101d91884;
  local_78 = DAT_101d91884;
  local_a0 = FUN_100260220;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0xc5,&local_a0);
  *(uint *)((long)param_1 + 0x6a4) = *(uint *)((long)param_1 + 0x6a4) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x14ec) = *(uint *)((long)param_1 + 0x14ec) | 0x10;
  FUN_100652cdc(param_1 + 0x21c,"arrow_down");
  if ((*(float *)(param_1 + 0x225) != 2.0) || (*(float *)((long)param_1 + 0x112c) != 2.0)) {
    param_1[0x225] = 0x4000000040000000;
    FUN_1000200a0(param_1 + 0x21c);
  }
  FUN_100183c50(0,plVar2,&DAT_10115a164);
  if ((*(float *)(param_1 + 0x18b) != 1.0) || (*(float *)((long)param_1 + 0xc5c) != 1.0)) {
    param_1[0x18b] = lVar12;
    FUN_1000200a0(plVar2);
  }
  FUN_1001b495c(0,plVar2);
  FUN_100183ca8(plVar2,1);
  uVar7 = *(uint *)((long)param_1 + 0xc94);
  if ((uVar7 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0xc94) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar2);
  }
  local_78 = uVar8;
  local_a0 = FUN_100260228;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x183,&local_a0);
  *(uint *)((long)param_1 + 0xc94) = *(uint *)((long)param_1 + 0xc94) & 0xfffffffb;
  ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar9 == 0) {
    ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230;
  }
  FUN_100651594(plVar4,*ppuVar6,&DAT_10115a168);
  uVar11 = FUN_1004e0150("MENU_TROPHY_PAGE_DOWN_ARROW_LABEL",0);
  FUN_1006513c0(plVar4,uVar11);
  local_78 = FUN_100644a94("EVENT_SCROLLING_TO_PAGE");
  local_a0 = FUN_100260230;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 1,&local_a0);
  local_78 = FUN_100644a94("EVENT_SCROLLING_FINISHED");
  local_a0 = FUN_100260238;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 1,&local_a0);
  return param_1;
}



/*
 * thunk_FUN_10025fd1c
 * VA: 0xthunk_10025fd1c | Source: functions/10025.c:12338
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 2, Vis masks: 2
 * Callees: FUN_10001554c, FUN_1000200a0, FUN_100126c88, FUN_100183c50, FUN_100183ca8, FUN_1001b495c, FUN_100260220, FUN_100260228 (+18 more)
 * Callers: FUN_10023b4b8, FUN_100264e14, thunk_FUN_10023b4b8, thunk_FUN_100264e14
 */
long * thunk_FUN_10025fd1c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined **ppuVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  code *pcStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  puVar10 = (undefined8 *)FUN_100269da8();
  *puVar10 = &PTR_thunk_FUN_100260244_10147b868;
  puVar10 = puVar10 + 0x19;
  FUN_10053319c(puVar10,0);
  plVar1 = param_1 + 0xc4;
  thunk_FUN_100183990(plVar1,0);
  plVar2 = param_1 + 0x182;
  thunk_FUN_100183990(plVar2,0);
  param_1[0x241] = 0;
  param_1[0x240] = 0;
  plVar3 = param_1 + 0x242;
  thunk_FUN_1006543ec(plVar3);
  FUN_10064e264(param_1 + 0x276);
  FUN_10064e264(param_1 + 0x28d);
  plVar4 = param_1 + 0x2a4;
  thunk_FUN_100650e64(plVar4);
  thunk_FUN_1001ceb64(param_1 + 0x2ca,0);
  plVar5 = param_1 + 0x2e7;
  thunk_FUN_100650e64(plVar5);
  lVar12 = DAT_101dc1cb8;
  param_1[0x30d] = DAT_101dc1cb8;
  param_1[0x30e] = lVar12;
  *(undefined4 *)(param_1 + 0x30f) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100642bd8(plVar3,puVar10,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x276,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x28d,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2ca,1);
  iVar9 = FUN_100126c88();
  FUN_100651594(plVar5,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&DAT_10115a168);
  uVar11 = FUN_1004e0150("MENU_TROPHY_DATA_ERROR",0);
  FUN_1006513c0(plVar5,uVar11);
  FUN_100651700(plVar5,3);
  FUN_100530adc(puVar10,1,0);
  FUN_100530adc(puVar10,DAT_101854ae0 == '\0');
  *(uint *)((long)param_1 + 0x1434) = *(uint *)((long)param_1 + 0x1434) | 0x10;
  FUN_100652cdc(param_1 + 0x15e,"arrow_down");
  *(byte *)(param_1 + 0x179) = *(byte *)(param_1 + 0x179) | 2;
  if ((*(float *)(param_1 + 0x167) != 2.0) || (*(float *)((long)param_1 + 0xb3c) != 2.0)) {
    param_1[0x167] = 0x4000000040000000;
    FUN_1000200a0(param_1 + 0x15e);
  }
  FUN_100183c50(0,plVar1,&DAT_10115a164);
  lVar12 = NEON_fmov(0x3f800000,4);
  if ((*(float *)(param_1 + 0xcd) != 1.0) || (*(float *)((long)param_1 + 0x66c) != 1.0)) {
    param_1[0xcd] = lVar12;
    FUN_1000200a0(plVar1);
  }
  FUN_1001b495c(0,plVar1);
  FUN_100183ca8(plVar1,1);
  uVar7 = *(uint *)((long)param_1 + 0x6a4);
  if ((uVar7 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x6a4) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar1);
  }
  uVar8 = DAT_101d91884;
  uStack_78 = DAT_101d91884;
  pcStack_a0 = FUN_100260220;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0xc5,&pcStack_a0);
  *(uint *)((long)param_1 + 0x6a4) = *(uint *)((long)param_1 + 0x6a4) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x14ec) = *(uint *)((long)param_1 + 0x14ec) | 0x10;
  FUN_100652cdc(param_1 + 0x21c,"arrow_down");
  if ((*(float *)(param_1 + 0x225) != 2.0) || (*(float *)((long)param_1 + 0x112c) != 2.0)) {
    param_1[0x225] = 0x4000000040000000;
    FUN_1000200a0(param_1 + 0x21c);
  }
  FUN_100183c50(0,plVar2,&DAT_10115a164);
  if ((*(float *)(param_1 + 0x18b) != 1.0) || (*(float *)((long)param_1 + 0xc5c) != 1.0)) {
    param_1[0x18b] = lVar12;
    FUN_1000200a0(plVar2);
  }
  FUN_1001b495c(0,plVar2);
  FUN_100183ca8(plVar2,1);
  uVar7 = *(uint *)((long)param_1 + 0xc94);
  if ((uVar7 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0xc94) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar2);
  }
  uStack_78 = uVar8;
  pcStack_a0 = FUN_100260228;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x183,&pcStack_a0);
  *(uint *)((long)param_1 + 0xc94) = *(uint *)((long)param_1 + 0xc94) & 0xfffffffb;
  ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar9 == 0) {
    ppuVar6 = &PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230;
  }
  FUN_100651594(plVar4,*ppuVar6,&DAT_10115a168);
  uVar11 = FUN_1004e0150("MENU_TROPHY_PAGE_DOWN_ARROW_LABEL",0);
  FUN_1006513c0(plVar4,uVar11);
  uStack_78 = FUN_100644a94("EVENT_SCROLLING_TO_PAGE");
  pcStack_a0 = FUN_100260230;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_a0);
  uStack_78 = FUN_100644a94("EVENT_SCROLLING_FINISHED");
  pcStack_a0 = FUN_100260238;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_a0);
  return param_1;
}



/*
 * FUN_100260244
 * trophy sub-panel constructor/refresh
 * VA: 0x100260244 | Source: functions/10026.c:47
 * Fptr: __DATA+0x147b868
 * Dylib: Layer 4
 * Layout: +0x6a4=trophy panel 1 visibility flags, +0xc94=trophy panel 2 visibility flags
 * Notes: Unconditionally clears bit 2 on both trophy scroll panels. Thunk at 0x100260494.
 * CE-gate: NO | Guest-gate: NO
 * Callees: FUN_10003bec8, FUN_1002603e8, FUN_10064221c, FUN_10064e2bc, FUN_10145f300, FUN_1014a7108, FUN_1014a7268, thunk_FUN_1001cec4c (+5 more)
 * Callers: FUN_100260498
 */
void FUN_100260244(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100260244_10147b868;
  FUN_1002603e8();
  thunk_FUN_100651068(param_1 + 0x2e7);
  thunk_FUN_1001cec4c(param_1 + 0x2ca);
  thunk_FUN_100651068(param_1 + 0x2a4);
  thunk_FUN_10064e2bc(param_1 + 0x28d);
  thunk_FUN_10064e2bc(param_1 + 0x276);
  FUN_10064e2bc(param_1 + 0x242);
  if ((void *)param_1[0x241] != (void *)0x0) {
    operator_delete__((void *)param_1[0x241]);
    param_1[0x241] = 0;
    param_1[0x240] = 0;
  }
  param_1[0x182] = &PTR_FUN_10145f300;
  param_1[0x21c] = &PTR_FUN_1014a7108;
  param_1[0x233] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x236);
  FUN_10064e2bc(param_1 + 0x21c);
  param_1[0x1fe] = &PTR_FUN_1014a7108;
  param_1[0x215] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x218);
  FUN_10064e2bc(param_1 + 0x1fe);
  param_1[0x1e0] = &PTR_FUN_1014a7108;
  param_1[0x1f7] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1fa);
  FUN_10064e2bc(param_1 + 0x1e0);
  FUN_10064221c(param_1 + 0x1cf);
  FUN_10003bec8(param_1 + 0x182);
  param_1[0xc4] = &PTR_FUN_10145f300;
  param_1[0x15e] = &PTR_FUN_1014a7108;
  param_1[0x175] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x178);
  FUN_10064e2bc(param_1 + 0x15e);
  param_1[0x140] = &PTR_FUN_1014a7108;
  param_1[0x157] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x15a);
  FUN_10064e2bc(param_1 + 0x140);
  param_1[0x122] = &PTR_FUN_1014a7108;
  param_1[0x139] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x13c);
  FUN_10064e2bc(param_1 + 0x122);
  FUN_10064221c(param_1 + 0x111);
  FUN_10003bec8(param_1 + 0xc4);
  thunk_FUN_100530784(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}



/*
 * thunk_FUN_100260244
 * VA: 0xthunk_100260244 | Source: functions/10026.c:136
 * CE-gate: NO | Guest-gate: NO
 * Callees: FUN_10003bec8, FUN_1002603e8, FUN_10064221c, FUN_10064e2bc, FUN_10145f300, FUN_1014a7108, FUN_1014a7268, thunk_FUN_1001cec4c (+4 more)
 * Callers: FUN_100187d2c, FUN_10023bbe4, FUN_10025fd1c, FUN_100260244, FUN_1002650dc, thunk_FUN_10023bbe4, thunk_FUN_10025fd1c, thunk_FUN_1002650dc
 */
void thunk_FUN_100260244(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100260244_10147b868;
  FUN_1002603e8();
  thunk_FUN_100651068(param_1 + 0x2e7);
  thunk_FUN_1001cec4c(param_1 + 0x2ca);
  thunk_FUN_100651068(param_1 + 0x2a4);
  thunk_FUN_10064e2bc(param_1 + 0x28d);
  thunk_FUN_10064e2bc(param_1 + 0x276);
  FUN_10064e2bc(param_1 + 0x242);
  if ((void *)param_1[0x241] != (void *)0x0) {
    operator_delete__((void *)param_1[0x241]);
    param_1[0x241] = 0;
    param_1[0x240] = 0;
  }
  param_1[0x182] = &PTR_FUN_10145f300;
  param_1[0x21c] = &PTR_FUN_1014a7108;
  param_1[0x233] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x236);
  FUN_10064e2bc(param_1 + 0x21c);
  param_1[0x1fe] = &PTR_FUN_1014a7108;
  param_1[0x215] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x218);
  FUN_10064e2bc(param_1 + 0x1fe);
  param_1[0x1e0] = &PTR_FUN_1014a7108;
  param_1[0x1f7] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1fa);
  FUN_10064e2bc(param_1 + 0x1e0);
  FUN_10064221c(param_1 + 0x1cf);
  FUN_10003bec8(param_1 + 0x182);
  param_1[0xc4] = &PTR_FUN_10145f300;
  param_1[0x15e] = &PTR_FUN_1014a7108;
  param_1[0x175] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x178);
  FUN_10064e2bc(param_1 + 0x15e);
  param_1[0x140] = &PTR_FUN_1014a7108;
  param_1[0x157] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x15a);
  FUN_10064e2bc(param_1 + 0x140);
  param_1[0x122] = &PTR_FUN_1014a7108;
  param_1[0x139] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x13c);
  FUN_10064e2bc(param_1 + 0x122);
  FUN_10064221c(param_1 + 0x111);
  FUN_10003bec8(param_1 + 0xc4);
  thunk_FUN_100530784(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}



/*
 * FUN_1002603e8
 * VA: 0x1002603e8 | Source: functions/10026.c:101
 * CE-gate: NO | Guest-gate: NO
 * Indicators: Vis masks: 2
 * Callees: FUN_100533244, FUN_1006423ec, FUN_100642d08
 * Callers: FUN_10023cb3c, FUN_100260244, FUN_100265bd4, thunk_FUN_100260244
 */
void FUN_1002603e8(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x1200) != 0) {
    uVar3 = 0;
    do {
      iVar1 = FUN_100642d08(*(undefined8 *)(*(long *)(param_1 + 0x1208) + uVar3 * 8));
      if (iVar1 != 0) {
        FUN_1006423ec(*(undefined8 *)(*(long *)(param_1 + 0x1208) + uVar3 * 8),1);
      }
      plVar2 = *(long **)(*(long *)(param_1 + 0x1208) + uVar3 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x1200));
  }
  if (*(long *)(param_1 + 0x1208) != 0) {
    *(undefined4 *)(param_1 + 0x1200) = 0;
  }
  *(undefined4 *)(param_1 + 0x61c) = 0;
  *(uint *)(param_1 + 0x6a4) = *(uint *)(param_1 + 0x6a4) & 0xfffffffb;
  *(uint *)(param_1 + 0xc94) = *(uint *)(param_1 + 0xc94) & 0xfffffffb;
  FUN_100533244(param_1 + 200);
  *(uint *)(param_1 + 0x17bc) = *(uint *)(param_1 + 0x17bc) | 4;
  return;
}



/*
 * FUN_100262b04
 * VA: 0x100262b04 | Source: functions/10026.c:2342
 * CE-gate: NO | Guest-gate: NO
 * Indicators: Vis masks: 2
 * Callees: FUN_100262b68, FUN_1004f1680
 * Callers: FUN_100265dbc
 */
void FUN_100262b04(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = FUN_1004f1680(param_2);
  if ((iVar1 != 0) && (*(char *)(param_2 + 0x44) != '\0')) {
    *(uint *)(param_1 + 0x54d4) = *(uint *)(param_1 + 0x54d4) & 0xfffffffb;
    *(uint *)(param_1 + 0x6a8c) = *(uint *)(param_1 + 0x6a8c) & 0xfffffffb;
    return;
  }
  FUN_100262b68(param_1);
  return;
}



/*
 * FUN_10026350c
 * VA: 0x10026350c | Source: functions/10026.c:2843
 * CE-gate: NO | Guest-gate: NO
 * Indicators: Vis masks: 4
 * Callees: FUN_1000200a0, FUN_10003d5bc, FUN_100126b4c, FUN_100126c88, FUN_1001c6d90, FUN_1001d08f8, FUN_1001d0b90, FUN_1001e35ec (+13 more)
 * Callers: FUN_1002654ec
 */
void FUN_10026350c(long param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  bool bVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 local_bc;
  undefined4 uStack_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined1 *local_a8;
  
  uVar7 = FUN_100126b4c();
  FUN_1001e35ec(param_1,uVar7,&local_ac,&local_b0,&local_b4);
  iVar6 = FUN_100126c88();
  fVar19 = local_ac - local_b4;
  fVar21 = fVar19 * 0.5;
  lVar8 = FUN_10003d5bc(param_1);
  fVar20 = *(float *)(lVar8 + 0xc);
  FUN_100641464(&uStack_b8,&local_bc);
  FUN_10064e47c(uStack_b8,local_bc,param_1 + 0x150);
  lVar12 = param_1 + 0x1428;
  lVar8 = param_1 + 0x828;
  fVar14 = (float)FUN_1001d0b90(lVar8);
  FUN_10065179c((fVar19 + -80.0) - (fVar14 + fVar14),0,0x3f800000,lVar12);
  fVar14 = 310.0;
  if (iVar6 == 0) {
    fVar14 = 260.0;
  }
  bVar5 = false;
  if ((*(float *)(param_1 + 0x1468) == fVar21) &&
     (bVar5 = false, !NAN(*(float *)(param_1 + 0x146c)) && !NAN(fVar14))) {
    bVar5 = *(float *)(param_1 + 0x146c) == fVar14;
  }
  if (!bVar5) {
    *(float *)(param_1 + 0x1468) = fVar21;
    *(float *)(param_1 + 0x146c) = fVar14;
    FUN_1000200a0(lVar12);
  }
  local_a8 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x1428) + 0x28))(lVar12,&local_a8);
  FUN_1001d08f8(lVar8,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_10064e72c(0xc1a00000,lVar8,1,lVar12,3);
  FUN_10064e72c(0,lVar8,5,lVar12,5);
  lVar8 = param_1 + 0x1558;
  fVar14 = 0.75;
  if (iVar6 == 0) {
    fVar14 = 0.5;
  }
  if ((*(float *)(param_1 + 0x15a0) != fVar14) || (*(float *)(param_1 + 0x15a4) != fVar14)) {
    *(float *)(param_1 + 0x15a0) = fVar14;
    *(float *)(param_1 + 0x15a4) = fVar14;
    FUN_1000200a0(lVar8);
  }
  fVar18 = *(float *)(param_1 + 0x1468);
  fVar14 = (float)FUN_10064259c(lVar12);
  fVar15 = (float)FUN_10064259c(lVar8);
  fVar18 = fVar18 + 20.0;
  fVar15 = fVar18 + (fVar15 + fVar14) * 0.5;
  fVar14 = *(float *)(param_1 + 0x146c);
  FUN_10064e3cc(lVar8);
  fVar14 = fVar14 + fVar18 * 0.25;
  if ((*(float *)(param_1 + 0x1598) != fVar15) || (*(float *)(param_1 + 0x159c) != fVar14)) {
    *(float *)(param_1 + 0x1598) = fVar15;
    *(float *)(param_1 + 0x159c) = fVar14;
    FUN_1000200a0(lVar8);
  }
  local_a8 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x1558) + 0x28))(lVar8,&local_a8);
  fVar15 = fVar19 * 0.25;
  lVar8 = param_1 + 0x1b48;
  fVar14 = (40.0 - fVar20) + local_b0 * 0.56;
  fVar18 = *(float *)(param_1 + 0x1b88);
  if ((fVar18 != fVar15) || (fVar18 = *(float *)(param_1 + 0x1b8c), fVar18 != fVar14)) {
    *(float *)(param_1 + 0x1b88) = fVar15;
    *(float *)(param_1 + 0x1b8c) = fVar14;
    FUN_1000200a0(lVar8);
  }
  local_a8 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x1b48) + 0x28))(lVar8,&local_a8);
  FUN_1006425d0(lVar8,0,0,1,1);
  FUN_10064e72c(fVar18 * -0.16666667,lVar8,0,lVar12,2);
  lVar12 = param_1 + 0x26b8;
  fVar14 = (float)FUN_1001c6d90(lVar12);
  fVar15 = fVar15 + fVar14 * -0.5;
  fVar14 = -(local_b0 * -0.88) - (fVar20 + 40.0);
  if ((*(float *)(param_1 + 0x26f8) != fVar15) || (*(float *)(param_1 + 0x26fc) != fVar14)) {
    *(float *)(param_1 + 0x26f8) = fVar15;
    *(float *)(param_1 + 0x26fc) = fVar14;
    FUN_1000200a0(lVar12);
  }
  local_a8 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x26b8) + 0x28))(lVar12,&local_a8);
  FUN_10064e72c(0xc2c80000,lVar12,0,lVar8,2);
  fVar15 = fVar19 * 0.515;
  fVar14 = fVar19 * 0.485;
  lVar12 = param_1 + 0x4950;
  bVar5 = false;
  if ((*(float *)(param_1 + 0x4994) == 0.0) && (bVar5 = false, !NAN(*(float *)(param_1 + 0x4990))))
  {
    bVar5 = *(float *)(param_1 + 0x4990) == 0.0;
  }
  if (!bVar5) {
    *(undefined8 *)(param_1 + 0x4990) = 0;
    FUN_1000200a0(lVar12);
  }
  fVar18 = fVar14 + -88.0;
  local_a8 = (undefined1 *)0x0;
  (**(code **)(*(long *)(param_1 + 0x4950) + 0x28))(lVar12,&local_a8);
  if ((*(float *)(param_1 + 0x4678) != fVar15) || (*(float *)(param_1 + 0x467c) != local_b0 * 0.47))
  {
    *(float *)(param_1 + 0x4678) = fVar15;
    *(float *)(param_1 + 0x467c) = local_b0 * 0.47;
    FUN_1000200a0(param_1 + 0x4638);
  }
  FUN_100530b0c(0x41f00000,0,lVar12);
  fVar17 = local_b0 - *(float *)(param_1 + 0x467c);
  FUN_10064e47c(fVar18,param_1 + 0x47b0);
  lVar12 = param_1 + 0x50f0;
  FUN_10064259c(lVar12);
  fVar17 = fVar17 + 6.0;
  FUN_10064e47c(fVar18,fVar17,param_1 + 0x5000);
  fVar22 = fVar14 + -218.0;
  if ((*(float *)(param_1 + 0x5130) != fVar22) || (*(float *)(param_1 + 0x5134) != fVar17 * 0.5)) {
    *(float *)(param_1 + 0x5130) = fVar22;
    *(float *)(param_1 + 0x5134) = fVar17 * 0.5;
    FUN_1000200a0(lVar12);
  }
  local_a8 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x50f0) + 0x28))(lVar12,&local_a8);
  fVar17 = *(float *)(param_1 + 0x4fbc) + fVar17;
  if (*(int *)(param_1 + 0x5220) == 0) {
    fVar14 = 49.0;
  }
  else {
    uVar13 = 0;
    do {
      lVar12 = *(long *)(*(long *)(param_1 + 0x5228) + uVar13 * 8);
      if (uVar13 != *(uint *)(param_1 + 0x13860)) {
        bVar5 = false;
        if ((*(float *)(lVar12 + 0x40) == 0.0) &&
           (bVar5 = false, !NAN(*(float *)(lVar12 + 0x44)) && !NAN(fVar17))) {
          bVar5 = *(float *)(lVar12 + 0x44) == fVar17;
        }
        if (!bVar5) {
          *(undefined4 *)(lVar12 + 0x40) = 0;
          *(float *)(lVar12 + 0x44) = fVar17;
          FUN_1000200a0(lVar12);
        }
      }
      lVar11 = lVar12 + 0x178;
      FUN_10065179c(0x43f70000,0,0x3f800000,lVar11);
      bVar5 = false;
      if ((*(float *)(lVar12 + 200) == 46.0) && (bVar5 = false, !NAN(*(float *)(lVar12 + 0xcc)))) {
        bVar5 = *(float *)(lVar12 + 0xcc) == 49.0;
      }
      if (!bVar5) {
        *(undefined8 *)(lVar12 + 200) = 0x4244000042380000;
        FUN_1000200a0(lVar12 + 0x88);
      }
      local_a8 = (undefined1 *)0x3f0000003f800000;
      (**(code **)(*(long *)(lVar12 + 0x88) + 0x28))(lVar12 + 0x88,&local_a8);
      bVar5 = false;
      if ((*(float *)(lVar12 + 0x1b8) == 56.0) && (bVar5 = false, !NAN(*(float *)(lVar12 + 0x1bc))))
      {
        bVar5 = *(float *)(lVar12 + 0x1bc) == 49.0;
      }
      if (!bVar5) {
        *(undefined8 *)(lVar12 + 0x1b8) = 0x4244000042600000;
        FUN_1000200a0(lVar11);
      }
      local_a8 = (undefined1 *)0x3f00000000000000;
      (**(code **)(*(long *)(lVar12 + 0x178) + 0x28))(lVar11,&local_a8);
      bVar5 = false;
      if ((*(float *)(lVar12 + 0x2e8) == fVar22) &&
         (bVar5 = false, !NAN(*(float *)(lVar12 + 0x2ec)))) {
        bVar5 = *(float *)(lVar12 + 0x2ec) == 49.0;
      }
      if (!bVar5) {
        *(float *)(lVar12 + 0x2e8) = fVar22;
        *(undefined4 *)(lVar12 + 0x2ec) = 0x42440000;
        FUN_1000200a0(lVar12 + 0x2a8);
      }
      local_a8 = &DAT_3f0000003f000000;
      (**(code **)(*(long *)(lVar12 + 0x2a8) + 0x28))(lVar12 + 0x2a8,&local_a8);
      FUN_10064e47c(fVar18,0x42c40000,lVar12 + 0x3d8);
      FUN_10064e47c(fVar14 + -144.0,0x40000000,lVar12 + 0x4c8);
      if ((*(float *)(lVar12 + 0x508) != 28.0) || (*(float *)(lVar12 + 0x50c) != 0.0)) {
        *(undefined8 *)(lVar12 + 0x508) = 0x41e00000;
        FUN_1000200a0(lVar12 + 0x4c8);
      }
      uVar3 = *(uint *)(lVar12 + 0x45c);
      uVar10 = 0x4c;
      if ((uVar13 & 1) != 0) {
        uVar10 = 0x7f;
      }
      if (uVar10 != (uVar3 >> 7 & 0xff)) {
        *(uint *)(lVar12 + 0x45c) = uVar3 & 0xffff8000 | uVar3 & 0x7f | uVar10 << 7;
        FUN_1000200a0(lVar12 + 0x3d8);
      }
      plVar1 = (long *)(lVar12 + 0x5b8);
      fVar16 = (float)FUN_10064259c(plVar1);
      fVar16 = fVar14 + -83.0 + fVar16 * 0.5;
      bVar5 = false;
      if ((*(float *)(lVar12 + 0x5f8) == fVar16) &&
         (bVar5 = false, !NAN(*(float *)(lVar12 + 0x5fc)))) {
        bVar5 = *(float *)(lVar12 + 0x5fc) == 49.0;
      }
      if (!bVar5) {
        *(float *)(lVar12 + 0x5f8) = fVar16;
        *(undefined4 *)(lVar12 + 0x5fc) = 0x42440000;
        FUN_1000200a0(plVar1);
      }
      local_a8 = &DAT_3f0000003f000000;
      (**(code **)(*plVar1 + 0x28))(plVar1,&local_a8);
      if (uVar13 < 2) {
        *(uint *)(lVar12 + 0x54c) = *(uint *)(lVar12 + 0x54c) & 0xfffffffb;
      }
      fVar17 = fVar17 + 98.0;
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(uint *)(param_1 + 0x5220));
    fVar14 = (float)*(uint *)(param_1 + 0x5220) * 98.0 + 49.0;
  }
  fVar22 = fVar18 * 0.5;
  FUN_10064e47c(fVar18,fVar14,param_1 + 0x46c0);
  lVar12 = param_1 + 0x4e88;
  fVar14 = 240.0;
  FUN_10064e47c(fVar18,lVar12);
  if ((*(float *)(param_1 + 0x4ec8) != 0.0) || (*(float *)(param_1 + 0x4ecc) != fVar17)) {
    *(undefined4 *)(param_1 + 0x4ec8) = 0;
    *(float *)(param_1 + 0x4ecc) = fVar17;
    FUN_1000200a0(lVar12);
  }
  local_a8 = (undefined1 *)0x0;
  (**(code **)(*(long *)(param_1 + 0x4e88) + 0x28))(lVar12,&local_a8);
  lVar12 = param_1 + 0x5230;
  FUN_10064259c(lVar12);
  fVar14 = fVar17 + 19.0 + fVar14 * 0.5;
  if ((*(float *)(param_1 + 0x5270) != fVar22) || (*(float *)(param_1 + 0x5274) != fVar14)) {
    *(float *)(param_1 + 0x5270) = fVar22;
    *(float *)(param_1 + 0x5274) = fVar14;
    FUN_1000200a0(lVar12);
  }
  local_a8 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x5230) + 0x28))(lVar12,&local_a8);
  lVar11 = param_1 + 0x5360;
  fVar14 = (float)FUN_10064259c(lVar12);
  fVar17 = (float)FUN_10065317c(lVar11);
  fVar14 = fVar22 + 10.0 + (fVar17 + fVar14) * 0.5;
  if ((*(float *)(param_1 + 0x53a0) != fVar14) ||
     (*(float *)(param_1 + 0x53a4) != *(float *)(param_1 + 0x5274))) {
    *(float *)(param_1 + 0x53a0) = fVar14;
    *(float *)(param_1 + 0x53a4) = *(float *)(param_1 + 0x5274);
    FUN_1000200a0(lVar11);
  }
  plVar1 = (long *)(param_1 + 0x96a8);
  local_a8 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x5360) + 0x28))(lVar11,&local_a8);
  lVar11 = param_1 + 0x5450;
  fVar14 = (float)FUN_10064259c(lVar11);
  fVar14 = fVar22 + fVar15 + 20.0 + fVar14 * 0.5;
  if ((*(float *)(param_1 + 0x5490) != fVar14) || (*(float *)(param_1 + 0x5494) != local_b0 * 0.42))
  {
    *(float *)(param_1 + 0x5490) = fVar14;
    *(float *)(param_1 + 0x5494) = local_b0 * 0.42;
    FUN_1000200a0(lVar11);
  }
  plVar2 = (long *)(param_1 + 0x9578);
  local_a8 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x5450) + 0x28))(lVar11,&local_a8);
  lVar11 = param_1 + 0x6a08;
  fVar14 = (float)FUN_10064259c(lVar11);
  fVar14 = fVar22 + fVar15 + fVar14 * -0.5 + -20.0;
  fVar15 = local_b0 * 0.42;
  if ((*(float *)(param_1 + 0x6a48) != fVar14) || (*(float *)(param_1 + 0x6a4c) != fVar15)) {
    *(float *)(param_1 + 0x6a48) = fVar14;
    *(float *)(param_1 + 0x6a4c) = fVar15;
    FUN_1000200a0(lVar11);
  }
  local_a8 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x6a08) + 0x28))(lVar11,&local_a8);
  fVar14 = local_b0;
  FUN_10065317c(plVar1);
  fVar14 = (fVar14 + -35.0) - (fVar20 + fVar15);
  fVar20 = *(float *)(param_1 + 0x96e8);
  if ((fVar20 != fVar21) || (fVar20 = *(float *)(param_1 + 0x96ec), fVar20 != fVar14)) {
    *(float *)(param_1 + 0x96e8) = fVar21;
    *(float *)(param_1 + 0x96ec) = fVar14;
    FUN_1000200a0(plVar1);
  }
  local_a8 = &DAT_3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_a8);
  fVar14 = *(float *)(param_1 + 0x96ec);
  FUN_10065317c(plVar1);
  fVar14 = fVar14 + fVar20 * -0.5 + -5.0;
  fVar20 = *(float *)(param_1 + 0x95b8);
  if ((fVar20 != fVar21) || (fVar20 = *(float *)(param_1 + 0x95bc), fVar20 != fVar14)) {
    *(float *)(param_1 + 0x95b8) = fVar21;
    *(float *)(param_1 + 0x95bc) = fVar14;
    FUN_1000200a0(plVar2);
  }
  local_a8 = (undefined1 *)0x3f8000003f000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_a8);
  FUN_10064e3cc(param_1 + 0x7fc0);
  fVar20 = fVar20 * 0.5;
  FUN_10064e5ec(0,param_1 + 0x7fc0,0,lVar8,3);
  bVar4 = *(byte *)(param_1 + 0x13864);
  *(uint *)(param_1 + 0x8044) = *(uint *)(param_1 + 0x8044) & 0xfffffffb | (uint)bVar4 << 2;
  *(uint *)(param_1 + 0x972c) = *(uint *)(param_1 + 0x972c) & 0xfffffffb | (uint)bVar4 << 2;
  *(uint *)(param_1 + 0x95fc) = *(uint *)(param_1 + 0x95fc) & 0xfffffffb | (uint)bVar4 << 2;
  FUN_10064259c(param_1 + 0x98a8);
  lVar8 = 0;
  bVar5 = true;
  do {
    bVar9 = bVar5;
    lVar11 = param_1 + lVar8 * 0x2f0;
    plVar1 = (long *)(lVar11 + 0x9820);
    fVar14 = (fVar20 + 6.0) * (float)(int)lVar8;
    fVar21 = *(float *)(lVar11 + 0x9860);
    fVar15 = *(float *)(lVar11 + 0x9864);
    bVar5 = false;
    if ((fVar21 == 0.0) && (bVar5 = false, !NAN(fVar15) && !NAN(fVar14))) {
      bVar5 = fVar15 == fVar14;
    }
    if (!bVar5) {
      *(float *)(lVar11 + 0x9860) = 0.0;
      *(float *)(lVar11 + 0x9864) = fVar14;
      FUN_1000200a0(plVar1);
    }
    local_a8 = &DAT_3f0000003f000000;
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_a8);
    lVar8 = 1;
    bVar5 = false;
  } while (bVar9);
  fVar14 = *(float *)(param_1 + 0x5274);
  FUN_10064259c(lVar12);
  fVar14 = fVar14 + 40.0 + fVar21 * 0.5;
  bVar5 = false;
  if ((*(float *)(param_1 + 0x97d8) == fVar22) &&
     (bVar5 = false, !NAN(*(float *)(param_1 + 0x97dc)) && !NAN(fVar14))) {
    bVar5 = *(float *)(param_1 + 0x97dc) == fVar14;
  }
  if (!bVar5) {
    *(float *)(param_1 + 0x97d8) = fVar22;
    *(float *)(param_1 + 0x97dc) = fVar14;
    FUN_1000200a0(param_1 + 0x9798);
  }
  local_a8 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x9798) + 0x28))(param_1 + 0x9798,&local_a8);
  FUN_10053093c(fVar19,local_b0,param_1 + 0x2f0);
  FUN_100530adc(param_1 + 0x2f0,0,*(undefined1 *)(param_1 + 0x13866));
  *(uint *)(param_1 + 0x374) =
       *(uint *)(param_1 + 0x374) & 0xffffffef | (uint)*(byte *)(param_1 + 0x13866) << 4;
  FUN_10064e47c(local_ac,local_b0,param_1 + 0x9e00);
  FUN_10064e47c(fVar18,0x42ec0000,param_1 + 0x9ef0);
  fVar14 = (float)FUN_10064e3cc(param_1 + 0xa118);
  fVar14 = fVar14 * 0.5 + 56.0;
  fVar20 = *(float *)(param_1 + 0xa158);
  if (fVar20 != fVar14) {
    *(float *)(param_1 + 0xa158) = fVar14;
    FUN_1000200a0(param_1 + 0xa118);
  }
  FUN_100227610(param_1 + 0xb6d0);
  fVar14 = DAT_101854a80;
  FUN_1006425d0(param_1 + 0x13308,0,0,1,1);
  fVar14 = fVar14 + 20.0 + fVar20 * 0.5;
  if ((*(float *)(param_1 + 0x13348) != fVar19 + -88.0) || (*(float *)(param_1 + 0x1334c) != fVar14)
     ) {
    *(float *)(param_1 + 0x13348) = fVar19 + -88.0;
    *(float *)(param_1 + 0x1334c) = fVar14;
    FUN_1000200a0(param_1 + 0x13308);
  }
  return;
}



/*
 * FUN_1002654ec
 * profile layout refresh — forces +0x18f21 before layout
 * VA: 0x1002654ec | Source: functions/10026.c:4207
 * Fptr: __DATA+0x147be00
 * Dylib: Layer 4
 * Notes: Thunk for FUN_1002654e8. Ensures trophy renderer sees enabled flag.
 * CE-gate: NO | Guest-gate: NO
 * Callees: FUN_1000200a0, FUN_100126b4c, FUN_1001c9614, FUN_1001e35ec, FUN_1001e6c94, FUN_1002604c4, FUN_10026350c, FUN_100642888 (+2 more)
 * Callers: FUN_1002656cc, FUN_100265dbc, thunk_FUN_1002654ec
 */
void FUN_1002654ec(long param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_74;
  float local_70;
  float fStack_6c;
  undefined8 local_68;
  
  FUN_1001e6c94();
  uVar4 = FUN_100126b4c();
  FUN_1001e35ec(param_1,uVar4,&fStack_6c,&local_70,&local_74);
  fVar8 = local_70;
  fVar5 = DAT_101854a80;
  fVar7 = fStack_6c - local_74;
  FUN_10064e47c(fVar7,fVar7 * 0.75,param_1 + 0x2c48);
  if ((*(float *)(param_1 + 0x2c90) != 1.3) || (*(float *)(param_1 + 0x2c94) != 1.3)) {
    *(undefined8 *)(param_1 + 0x2c90) = 0x3fa666663fa66666;
    FUN_1000200a0(param_1 + 0x2c48);
  }
  fVar8 = fVar8 - fVar5;
  lVar1 = param_1 + 0x3340;
  fVar5 = (float)FUN_100642888(lVar1,0,0,1,1);
  fVar6 = fVar7 * 0.5 - fVar5 * 0.5;
  bVar3 = false;
  if ((*(float *)(param_1 + 0x3380) == fVar6) && (bVar3 = false, !NAN(*(float *)(param_1 + 0x3384)))
     ) {
    bVar3 = *(float *)(param_1 + 0x3384) == 30.0;
  }
  if (!bVar3) {
    *(float *)(param_1 + 0x3380) = fVar6;
    *(undefined4 *)(param_1 + 0x3384) = 0x41f00000;
    FUN_1000200a0(lVar1);
  }
  local_68 = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x3340) + 0x28))(lVar1,&local_68);
  fVar6 = fVar8;
  FUN_10064e47c(fVar7,fVar8,param_1 + 0x3e10);
  FUN_10026350c(param_1 + 0x3e10);
  lVar2 = param_1 + 0x17678;
  fVar9 = *(float *)(param_1 + 0x3384);
  FUN_1001c9614(lVar1);
  FUN_10064e47c(fVar7,(local_70 + -160.0) - (fVar9 + fVar6),lVar2);
  FUN_1002604c4(lVar2);
  FUN_10064e5ec(fVar5 * 0.5,0,lVar2,4,lVar1,6);
  FUN_10064e47c(fVar7,fVar8,param_1 + 0x2d38);
  return;
}



/*
 * thunk_FUN_1002654ec
 * VA: 0xthunk_1002654ec | Source: functions/10026.c:4197
 * CE-gate: NO | Guest-gate: NO
 * Callees: FUN_1002654ec
 */
void thunk_FUN_1002654ec(void)

{
  FUN_1002654ec();
  return;
}



/*
 * FUN_100265bd4
 * trophy renderer — loops over entries from profile object
 * VA: 0x100265bd4 | Source: functions/10026.c:4567
 * Dylib: Layer 9
 * Layout: entry_size=0x50, entry+0x18=std::string trophy name (SSO, 24 bytes), entry+0x48=uint32 season index, entry+0x4c=uint32 trophy value (0-29 scale)
 * Notes: Reads count from +0x18ef8, array from +0x18f00, flag from +0x18f21.
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 1
 * Callees: FUN_10003d5bc, FUN_1000f0ec8, FUN_1002603e8, FUN_100260d6c, FUN_100260dd0, FUN_100260e50, FUN_1004e0150, FUN_1004e3120 (+3 more)
 * Callers: FUN_10026609c
 */
void FUN_100265bd4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  undefined1 auStack_a0 [8];
  void *local_98;
  undefined1 auStack_90 [8];
  void *local_88;
  undefined1 auStack_80 [8];
  void *local_78;
  
  if (*(char *)(param_1 + 0x18f21) != '\0') {
    lVar1 = param_1 + 0x17678;
    FUN_1002603e8(lVar1);
    if (*(uint *)(param_1 + 0x18ef8) != 0) {
      lVar4 = 0;
      uVar5 = 0;
      do {
        lVar6 = *(long *)(param_1 + 0x18f00);
        uVar3 = FUN_1004e0150("MENU_TROPHY_SKILL_TIER_SUBTITLE",0);
        thunk_FUN_1004e439c(auStack_80,uVar3);
        FUN_1004e3120(auStack_90,"[SEASON_NAME]");
        lVar2 = lVar6 + lVar4;
        FUN_1000f0ec8(auStack_a0,*(undefined4 *)(lVar2 + 0x48),0,0,0);
        FUN_1004e3bc4(auStack_80,0,auStack_90,auStack_a0);
        if (local_98 != (void *)0x0) {
          operator_delete__(local_98);
        }
        if (local_88 != (void *)0x0) {
          operator_delete__(local_88);
        }
        FUN_1000f0ec8(auStack_90,*(undefined4 *)(lVar2 + 0x48),0,0,0);
        lVar6 = lVar6 + lVar4;
        FUN_1004e3170(auStack_a0,lVar6 + 0x18);
        FUN_100260d6c(lVar1,auStack_90,auStack_80,auStack_a0,*(undefined4 *)(lVar6 + 0x4c));
        if (local_98 != (void *)0x0) {
          operator_delete__(local_98);
        }
        if (local_88 != (void *)0x0) {
          operator_delete__(local_88);
        }
        if (local_78 != (void *)0x0) {
          operator_delete__(local_78);
        }
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x50;
      } while (uVar5 < *(uint *)(param_1 + 0x18ef8));
    }
    FUN_100260dd0(lVar1,1);
    fVar7 = 0.0;
    if (*(char *)(param_1 + 0x18f22) == '\0') {
      lVar4 = FUN_10003d5bc(0,param_1);
      fVar7 = *(float *)(lVar4 + 0xc);
      lVar4 = FUN_10003d5bc(param_1);
      fVar7 = fVar7 / *(float *)(lVar4 + 0x14) + 40.0;
    }
    FUN_100260e50(fVar7,lVar1);
  }
  return;
}



/*
 * FUN_100265dbc
 * profile data handler — forces trophy enable flags
 * VA: 0x100265dbc | Source: functions/10026.c:4648
 * Fptr: __DATA+0x147bec8
 * Dylib: Layer 4
 * Layout: +0x18ef8=trophy count (uint32), +0x18f00=trophy array pointer (long*), +0x18f20=own profile flag, +0x18f21=trophy data enabled flag
 * Notes: Also calls ensure_trophy_data to populate trophy array if empty.
 * CE-gate: NO | Guest-gate: NO
 * Callees: FUN_10015d3ec, FUN_100169cec, FUN_100262b04, FUN_1002654ec, FUN_1004f1680
 * Callers: FUN_100265ecc
 */
void FUN_100265dbc(long param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  void *pvVar10;
  byte *pbVar11;
  
  FUN_100262b04(param_1 + 0x3e10);
  iVar6 = FUN_1004f1680(param_2);
  if ((iVar6 == 0) || (*(char *)(param_2 + 0x44) == '\0')) goto LAB_100265ebc;
  lVar7 = FUN_10015d3ec();
  bVar4 = *(byte *)(param_1 + 0x18f1f);
  uVar8 = (ulong)bVar4;
  bVar5 = *(byte *)(lVar7 + 0x54a7);
  sVar1 = *(size_t *)(param_1 + 0x18f10);
  if (-1 < (char)bVar4) {
    sVar1 = uVar8;
  }
  sVar2 = *(size_t *)(lVar7 + 0x5498);
  if (-1 < (char)bVar5) {
    sVar2 = (ulong)bVar5;
  }
  if (sVar1 == sVar2) {
    pvVar10 = *(void **)(param_1 + 0x18f08);
    puVar3 = pvVar10;
    if (-1 < (char)bVar4) {
      puVar3 = (undefined8 *)(param_1 + 0x18f08);
    }
    pbVar11 = *(byte **)(lVar7 + 0x5490);
    if (-1 < (char)bVar5) {
      pbVar11 = (byte *)(lVar7 + 0x5490);
    }
    if ((char)bVar4 < '\0') {
      if ((sVar1 == 0) || (iVar6 = _memcmp(puVar3,pbVar11,sVar1), iVar6 == 0)) goto LAB_100265ea8;
    }
    else if (sVar1 == 0) {
LAB_100265ea8:
      *(undefined1 *)(param_1 + 0x18f20) = 1;
    }
    else if ((uint)*pbVar11 == ((uint)pvVar10 & 0xff)) {
      pbVar9 = (byte *)(param_1 + 0x18f09);
      do {
        uVar8 = uVar8 - 1;
        pbVar11 = pbVar11 + 1;
        if (uVar8 == 0) goto LAB_100265ea8;
        bVar4 = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (bVar4 == *pbVar11);
    }
  }
  lVar7 = FUN_10015d3ec();
  FUN_100169cec(lVar7 + 0x18);
LAB_100265ebc:
  FUN_1002654ec(param_1);
  return;
}



/*
 * FUN_10026c38c
 * VA: 0x10026c38c | Source: functions/10026.c:11032
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 2, Vis masks: 1
 * Callees: FUN_10004b1f8, FUN_10026c294, FUN_100642324, FUN_100644a94, FUN_100644bb0
 */
void FUN_10026c38c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  *(uint *)(*(long *)(param_1 + 0x1d0) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0x1d0) + 0x84) & 0xfffffffb;
  FUN_10026c294();
  FUN_100642324(param_1);
  FUN_100642324(param_1 + 0xd8);
  plVar1 = *(long **)(param_1 + 0x360);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x368) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x360);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x368) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            uVar3 = 0;
            *(undefined8 *)(param_1 + 0x360) = 0;
            *(undefined4 *)(param_1 + 0x368) = DAT_101dc0b88;
          }
        }
        FUN_10004b1f8(0x3f000000,uVar3);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x360) = 0;
      *(undefined4 *)(param_1 + 0x368) = DAT_101dc0b88;
    }
  }
  uVar3 = FUN_100644a94("EVENT_SCREEN_TALENT_UPGRADE_REVEAL");
  FUN_100644bb0(param_1,uVar3);
  uVar3 = FUN_100644a94("EVENT_SCREEN_PROGRESS_BAR_EMPTIED");
  FUN_100644bb0(param_1,uVar3);
  return;
}



/*
 * thunk_FUN_10026c38c
 * VA: 0xthunk_10026c38c | Source: functions/10026.c:10556
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 2, Vis masks: 1
 * Callees: FUN_10004b1f8, FUN_10026c294, FUN_100642324, FUN_100644a94, FUN_100644bb0
 * Callers: FUN_100187d2c, FUN_10026ba98, thunk_FUN_10026ba98
 */
void thunk_FUN_10026c38c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  *(uint *)(*(long *)(param_1 + 0x1d0) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0x1d0) + 0x84) & 0xfffffffb;
  FUN_10026c294();
  FUN_100642324(param_1);
  FUN_100642324(param_1 + 0xd8);
  plVar1 = *(long **)(param_1 + 0x360);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x368) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x360);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x368) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            uVar3 = 0;
            *(undefined8 *)(param_1 + 0x360) = 0;
            *(undefined4 *)(param_1 + 0x368) = DAT_101dc0b88;
          }
        }
        FUN_10004b1f8(0x3f000000,uVar3);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x360) = 0;
      *(undefined4 *)(param_1 + 0x368) = DAT_101dc0b88;
    }
  }
  uVar3 = FUN_100644a94("EVENT_SCREEN_TALENT_UPGRADE_REVEAL");
  FUN_100644bb0(param_1,uVar3);
  uVar3 = FUN_100644a94("EVENT_SCREEN_PROGRESS_BAR_EMPTIED");
  FUN_100644bb0(param_1,uVar3);
  return;
}



/*
 * FUN_10026c6d0
 * VA: 0x10026c6d0 | Source: functions/10026.c:11220
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 4
 * Callees: FUN_10001554c, FUN_10026c65c, FUN_100644a94, FUN_100644bb0, thunk_FUN_10026c784, thunk_FUN_10026c7cc
 */
void FUN_10026c6d0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  code *local_50;
  long lStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  uVar1 = FUN_100644a94("EVENT_SCREEN_TALENT_UPGRADE_REVEAL");
  FUN_100644bb0(param_1,uVar1);
  FUN_10026c65c(param_1);
  lVar2 = *(long *)(param_1 + 0x1d0);
  local_28 = FUN_100644a94("UI::EVENT_SCREEN_PROGRESS_BAR_ANIMATION_BEGIN");
  local_50 = thunk_FUN_10026c784;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  lStack_48 = param_1;
  FUN_10001554c(lVar2 + 8,&local_50);
  lVar2 = *(long *)(param_1 + 0x1d0);
  local_28 = FUN_100644a94("EVENT_SCREEN_PROGRESS_BAR_EMPTIED");
  local_50 = thunk_FUN_10026c7cc;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  lStack_48 = param_1;
  FUN_10001554c(lVar2 + 8,&local_50);
  return;
}



/*
 * thunk_FUN_10026c6d0
 * VA: 0xthunk_10026c6d0 | Source: functions/10026.c:11166
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 4
 * Callees: FUN_10001554c, FUN_10026c65c, FUN_100644a94, FUN_100644bb0, thunk_FUN_10026c784, thunk_FUN_10026c7cc
 * Callers: FUN_100187d2c, FUN_10026bfb8
 */
void thunk_FUN_10026c6d0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  code *pcStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uVar1 = FUN_100644a94("EVENT_SCREEN_TALENT_UPGRADE_REVEAL");
  FUN_100644bb0(param_1,uVar1);
  FUN_10026c65c(param_1);
  lVar2 = *(long *)(param_1 + 0x1d0);
  uStack_28 = FUN_100644a94("UI::EVENT_SCREEN_PROGRESS_BAR_ANIMATION_BEGIN");
  pcStack_50 = thunk_FUN_10026c784;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  lStack_48 = param_1;
  FUN_10001554c(lVar2 + 8,&pcStack_50);
  lVar2 = *(long *)(param_1 + 0x1d0);
  uStack_28 = FUN_100644a94("EVENT_SCREEN_PROGRESS_BAR_EMPTIED");
  pcStack_50 = thunk_FUN_10026c7cc;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  lStack_48 = param_1;
  FUN_10001554c(lVar2 + 8,&pcStack_50);
  return;
}



/*
 * FUN_10027c440
 * VA: 0x10027c440 | Source: functions/10027.c:7926
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 7
 * Callees: FUN_1001e3120, FUN_10027c4d8, FUN_1004e0150, thunk_FUN_10027d778
 */
void FUN_10027c440(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_1004e0150("MENU_FRIENDS_BROADCAST_DIALOG_TITLE",0);
  uVar2 = FUN_1004e0150("MENU_FRIENDS_BROADCAST_DIALOG_MSG",0);
  uVar3 = FUN_1004e0150("MENU_FRIENDS_BROADCAST_DIALOG_CONFIRM",0);
  uVar4 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
  FUN_1001e3120(uVar1,uVar2,uVar3,uVar4,param_1,thunk_FUN_10027d778,FUN_10027c4d8);
  return;
}



/*
 * thunk_FUN_10027c440
 * VA: 0xthunk_10027c440 | Source: functions/10027.c:4624
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 7
 * Callees: FUN_1001e3120, FUN_10027c4d8, FUN_1004e0150, thunk_FUN_10027d778
 * Callers: FUN_100187d2c, FUN_10026dad4
 */
void thunk_FUN_10027c440(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_1004e0150("MENU_FRIENDS_BROADCAST_DIALOG_TITLE",0);
  uVar2 = FUN_1004e0150("MENU_FRIENDS_BROADCAST_DIALOG_MSG",0);
  uVar3 = FUN_1004e0150("MENU_FRIENDS_BROADCAST_DIALOG_CONFIRM",0);
  uVar4 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
  FUN_1001e3120(uVar1,uVar2,uVar3,uVar4,param_1,thunk_FUN_10027d778,FUN_10027c4d8);
  return;
}



/*
 * FUN_10027c8b8
 * VA: 0x10027c8b8 | Source: functions/10027.c:8185
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 4
 * Callees: FUN_1001e31c8, FUN_10027ca14, FUN_10027ca60, FUN_1004e0150, FUN_1004e3120, FUN_1004e3bc4, FUN_100655b6c, thunk_FUN_1004e439c
 */
void FUN_10027c8b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  undefined1 auStack_30 [8];
  void *local_28;
  
  lVar3 = *(long *)(param_1 + 0x11ff0);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x3d68) != 3) {
      FUN_10027ca60(param_1,param_2,lVar3 + 0x3cd0);
      return;
    }
    std::string::operator=((string *)(param_1 + 0x12560),(string *)(param_1 + 0x12578));
    uVar1 = FUN_1004e0150("MENU_FRIENDS_DELETE_TITLE",0);
    thunk_FUN_1004e439c(auStack_30,uVar1);
    uVar1 = FUN_1004e0150("MENU_FRIENDS_DELETE_DESCRIPTION",0);
    thunk_FUN_1004e439c(auStack_40,uVar1);
    FUN_1004e3120(auStack_50,"[PLAYER_NAME]");
    uVar1 = FUN_100655b6c(*(long *)(param_1 + 0x11ff0) + 0x330);
    FUN_1004e3bc4(auStack_40,0,auStack_50,uVar1);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
    uVar1 = FUN_1004e0150("MENU_FRIENDS_DELETE_CONFIRM",0);
    uVar2 = FUN_1004e0150("MENU_FRIENDS_DELETE_CANCEL",0);
    FUN_1001e31c8(auStack_30,auStack_40,uVar1,uVar2,&DAT_101d91650,param_1,FUN_10027ca14,0,0);
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
    if (local_28 != (void *)0x0) {
      operator_delete__(local_28);
    }
  }
  return;
}



/*
 * thunk_FUN_10027c8b8
 * VA: 0xthunk_10027c8b8 | Source: functions/10027.c:4789
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 4
 * Callees: FUN_1001e31c8, FUN_10027ca14, FUN_10027ca60, FUN_1004e0150, FUN_1004e3120, FUN_1004e3bc4, FUN_100655b6c, thunk_FUN_1004e439c
 * Callers: FUN_100187d2c, FUN_10026dad4
 */
void thunk_FUN_10027c8b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  void *pvStack_48;
  undefined1 auStack_40 [8];
  void *pvStack_38;
  undefined1 auStack_30 [8];
  void *pvStack_28;
  
  lVar3 = *(long *)(param_1 + 0x11ff0);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x3d68) != 3) {
      FUN_10027ca60(param_1,param_2,lVar3 + 0x3cd0);
      return;
    }
    std::string::operator=((string *)(param_1 + 0x12560),(string *)(param_1 + 0x12578));
    uVar1 = FUN_1004e0150("MENU_FRIENDS_DELETE_TITLE",0);
    thunk_FUN_1004e439c(auStack_30,uVar1);
    uVar1 = FUN_1004e0150("MENU_FRIENDS_DELETE_DESCRIPTION",0);
    thunk_FUN_1004e439c(auStack_40,uVar1);
    FUN_1004e3120(auStack_50,"[PLAYER_NAME]");
    uVar1 = FUN_100655b6c(*(long *)(param_1 + 0x11ff0) + 0x330);
    FUN_1004e3bc4(auStack_40,0,auStack_50,uVar1);
    if (pvStack_48 != (void *)0x0) {
      operator_delete__(pvStack_48);
    }
    uVar1 = FUN_1004e0150("MENU_FRIENDS_DELETE_CONFIRM",0);
    uVar2 = FUN_1004e0150("MENU_FRIENDS_DELETE_CANCEL",0);
    FUN_1001e31c8(auStack_30,auStack_40,uVar1,uVar2,&DAT_101d91650,param_1,FUN_10027ca14,0,0);
    if (pvStack_38 != (void *)0x0) {
      operator_delete__(pvStack_38);
    }
    if (pvStack_28 != (void *)0x0) {
      operator_delete__(pvStack_28);
    }
  }
  return;
}



/*
 * FUN_10027ca60
 * VA: 0x10027ca60 | Source: functions/10027.c:8243
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 4
 * Callees: FUN_1000153b4, FUN_100111870, FUN_1001e3090, FUN_100273de8, FUN_1004e0150, FUN_1004e3654, thunk_FUN_1004e439c
 * Callers: FUN_10027c8b8, thunk_FUN_10027c8b8
 */
void FUN_10027ca60(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_50 [8];
  void *local_48;
  
  if (*(uint *)(param_1 + 0x12470) != 0) {
    uVar5 = 0;
    lVar6 = 0xac;
    do {
      iVar1 = FUN_1004e3654(param_3,*(long *)(param_1 + 0x12478) + lVar6 + -0x8c);
      if ((iVar1 != 0) && (*(int *)(*(long *)(param_1 + 0x12478) + lVar6) == 3)) {
        uVar2 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
        uVar3 = FUN_1004e0150("MENU_FRIENDS_ADD_FRIEND_DUPLICATE_ERROR",0);
        uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        FUN_1001e3090(uVar2,uVar3,uVar4,0,0);
        return;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x188;
    } while (uVar5 < *(uint *)(param_1 + 0x12470));
  }
  FUN_100111870(param_3);
  FUN_1000153b4(param_1 + 0x12550,param_3);
  uVar2 = FUN_1004e0150("MENU_FRIENDS_ADD_EXPLAIN_REQUEST_SENT_TO",0);
  thunk_FUN_1004e439c(auStack_50,uVar2);
  FUN_100273de8(0x40200000,param_1,1,auStack_50,1);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  return;
}



/*
 * thunk_FUN_10027ca60
 * VA: 0xthunk_10027ca60 | Source: functions/10027.c:7991
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 4
 * Callees: FUN_1000153b4, FUN_100111870, FUN_1001e3090, FUN_100273de8, FUN_1004e0150, FUN_1004e3654, thunk_FUN_1004e439c
 * Callers: FUN_100187d2c, FUN_10027c4dc, thunk_FUN_10027c4dc
 */
void thunk_FUN_10027ca60(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_50 [8];
  void *pvStack_48;
  
  if (*(uint *)(param_1 + 0x12470) != 0) {
    uVar5 = 0;
    lVar6 = 0xac;
    do {
      iVar1 = FUN_1004e3654(param_3,*(long *)(param_1 + 0x12478) + lVar6 + -0x8c);
      if ((iVar1 != 0) && (*(int *)(*(long *)(param_1 + 0x12478) + lVar6) == 3)) {
        uVar2 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
        uVar3 = FUN_1004e0150("MENU_FRIENDS_ADD_FRIEND_DUPLICATE_ERROR",0);
        uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        FUN_1001e3090(uVar2,uVar3,uVar4,0,0);
        return;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x188;
    } while (uVar5 < *(uint *)(param_1 + 0x12470));
  }
  FUN_100111870(param_3);
  FUN_1000153b4(param_1 + 0x12550,param_3);
  uVar2 = FUN_1004e0150("MENU_FRIENDS_ADD_EXPLAIN_REQUEST_SENT_TO",0);
  thunk_FUN_1004e439c(auStack_50,uVar2);
  FUN_100273de8(0x40200000,param_1,1,auStack_50,1);
  if (pvStack_48 != (void *)0x0) {
    operator_delete__(pvStack_48);
  }
  return;
}



/*
 * FUN_10027cbb0
 * VA: 0x10027cbb0 | Source: functions/10027.c:8285
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 5
 * Callees: FUN_1000153b4, FUN_10001549c, FUN_10003330c, FUN_10003c048, FUN_10003c1ec, FUN_100126c88, FUN_10015d3ec, FUN_1001634c4 (+10 more)
 */
void FUN_10027cbb0(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  size_t sVar3;
  size_t sVar4;
  size_t sVar5;
  undefined8 *puVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  long lVar15;
  ulong uVar16;
  size_t sVar17;
  undefined1 auStack_170 [8];
  void *local_168;
  void *local_160;
  void *local_158;
  undefined7 local_150;
  char cStack_149;
  char local_139;
  undefined4 local_138;
  undefined8 local_134;
  undefined **local_128;
  undefined1 auStack_120 [16];
  long local_110;
  code *pcStack_108;
  long local_f8;
  undefined8 local_d8;
  void *local_d0;
  void *local_c8;
  char local_b1;
  undefined4 local_98;
  undefined4 local_94;
  
  bVar8 = DAT_101d911a8._7_1_;
  sVar5 = DAT_101d911a0;
  plVar1 = (long *)(param_1 + 0x11ff0);
  lVar15 = *plVar1;
  if (lVar15 == 0) {
    return;
  }
  puVar2 = (undefined8 *)(lVar15 + 0x3d18);
  bVar9 = *(byte *)(lVar15 + 0x3d2f);
  uVar16 = (ulong)bVar9;
  if (*(char *)(param_1 + 0x125b0) == '\0') {
    sVar17 = *(size_t *)(lVar15 + 0x3d20);
  }
  else {
    sVar17 = *(size_t *)(lVar15 + 0x3d20);
    sVar3 = sVar17;
    if (-1 < (char)bVar9) {
      sVar3 = uVar16;
    }
    sVar4 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar4 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar3 == sVar4) {
      puVar6 = (void *)*puVar2;
      if (-1 < (char)bVar9) {
        puVar6 = puVar2;
      }
      pbVar14 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar14 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar9 < '\0') {
        if ((sVar3 == 0) || (iVar10 = _memcmp(puVar6,pbVar14,sVar3), iVar10 == 0))
        goto LAB_10027cd7c;
      }
      else {
        if (sVar3 == 0) {
LAB_10027cd7c:
          thunk_FUN_1001cd434(&local_128);
          uVar11 = FUN_1004e0150("MENU_FRIENDS_INVITE_GUILD_DIALOG_TITLE",0);
          thunk_FUN_1004e439c(&local_160,uVar11);
          FUN_10003330c(&local_150,&DAT_101d91198);
          local_138 = 0;
          local_134 = 0x41a00000;
          FUN_10003c048(auStack_120,&local_160);
          if (local_139 < '\0') {
            operator_delete((void *)CONCAT17(cStack_149,local_150));
          }
          if (local_158 != (void *)0x0) {
            operator_delete__(local_158);
          }
          uVar11 = FUN_1004e0150("MENU_FRIENDS_INVITE_GUILD_DIALOG_TEXT",0);
          thunk_FUN_1004e439c(auStack_170,uVar11);
          FUN_1004e3120(&local_160,"[PLAYER_NAME]");
          uVar11 = FUN_100655b6c(*plVar1 + 0x330);
          FUN_1004e3bc4(auStack_170,0,&local_160,uVar11);
          if (local_158 != (void *)0x0) {
            operator_delete__(local_158);
          }
          thunk_FUN_1004e439c(&local_160,auStack_170);
          FUN_10003330c(&local_150,&DAT_101d91198);
          local_138 = 1;
          local_134 = 0x41a00000;
          FUN_10003c048(auStack_120,&local_160);
          if (local_139 < '\0') {
            operator_delete((void *)CONCAT17(cStack_149,local_150));
          }
          if (local_158 != (void *)0x0) {
            operator_delete__(local_158);
          }
          pcStack_108 = thunk_FUN_10027cfb0;
          local_110 = param_1;
          uVar11 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
          FUN_1000153b4(&local_d8,uVar11);
          local_f8 = param_1 + 0xa858;
          local_98 = 0x3f400000;
          iVar10 = FUN_100126c88();
          local_94 = 0x44160000;
          if (iVar10 == 0) {
            local_94 = 0x43e10000;
          }
          FUN_10001549c(&local_160,"guildInvite");
          FUN_1001cefb8(param_1 + 0x122a0,&local_160,&local_128);
          if (cStack_149 < '\0') {
            operator_delete(local_160);
          }
          if (local_168 != (void *)0x0) {
            operator_delete__(local_168);
          }
          local_128 = &PTR_FUN_1014666e0;
          if (local_b1 < '\0') {
            operator_delete(local_c8);
          }
          if (local_d0 != (void *)0x0) {
            operator_delete__(local_d0);
            local_d8 = 0;
            local_d0 = (void *)0x0;
          }
          FUN_10003c1ec(auStack_120,1);
          return;
        }
        if ((uint)*pbVar14 == ((uint)(void *)*puVar2 & 0xff)) {
          pbVar13 = (byte *)(lVar15 + 0x3d19);
          uVar12 = uVar16;
          do {
            uVar12 = uVar12 - 1;
            pbVar14 = pbVar14 + 1;
            if (uVar12 == 0) goto LAB_10027cd7c;
            bVar7 = *pbVar13;
            pbVar13 = pbVar13 + 1;
          } while (bVar7 == *pbVar14);
        }
      }
    }
  }
  if (-1 < (char)bVar9) {
    sVar17 = uVar16;
  }
  if (-1 < (char)bVar8) {
    sVar5 = (ulong)bVar8;
  }
  if (sVar17 == sVar5) {
    puVar6 = (undefined8 *)*puVar2;
    if (-1 < (char)bVar9) {
      puVar6 = puVar2;
    }
    pbVar14 = DAT_101d91198;
    if (-1 < (char)bVar8) {
      pbVar14 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar9 < '\0') {
      if (sVar17 == 0) {
        return;
      }
      iVar10 = _memcmp(puVar6,pbVar14,sVar17);
      if (iVar10 == 0) {
        return;
      }
    }
    else {
      if (sVar17 == 0) {
        return;
      }
      if ((uint)*pbVar14 == ((uint)(undefined8 *)*puVar2 & 0xff)) {
        pbVar13 = (byte *)(lVar15 + 0x3d19);
        do {
          uVar16 = uVar16 - 1;
          pbVar14 = pbVar14 + 1;
          if (uVar16 == 0) {
            return;
          }
          bVar8 = *pbVar13;
          pbVar13 = pbVar13 + 1;
        } while (bVar8 == *pbVar14);
      }
    }
  }
  uVar11 = FUN_10015d3ec();
  FUN_1001634c4(uVar11,*plVar1 + 0x3d18,1);
  FUN_10021a8ec(*plVar1 + 0x3d18,0);
  return;
}



/*
 * thunk_FUN_10027cbb0
 * VA: 0xthunk_10027cbb0 | Source: functions/10027.c:4835
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 5
 * Callees: FUN_1000153b4, FUN_10001549c, FUN_10003330c, FUN_10003c048, FUN_10003c1ec, FUN_100126c88, FUN_10015d3ec, FUN_1001634c4 (+10 more)
 * Callers: FUN_100187d2c, FUN_10026dad4
 */
void thunk_FUN_10027cbb0(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  size_t sVar3;
  size_t sVar4;
  size_t sVar5;
  undefined8 *puVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  long lVar15;
  ulong uVar16;
  size_t sVar17;
  undefined1 auStack_170 [8];
  void *pvStack_168;
  void *pvStack_160;
  void *pvStack_158;
  undefined7 uStack_150;
  char cStack_149;
  char cStack_139;
  undefined4 uStack_138;
  undefined8 uStack_134;
  undefined **ppuStack_128;
  undefined1 auStack_120 [16];
  long lStack_110;
  code *pcStack_108;
  long lStack_f8;
  undefined8 uStack_d8;
  void *pvStack_d0;
  void *pvStack_c8;
  char cStack_b1;
  undefined4 uStack_98;
  undefined4 uStack_94;
  
  bVar8 = DAT_101d911a8._7_1_;
  sVar5 = DAT_101d911a0;
  plVar1 = (long *)(param_1 + 0x11ff0);
  lVar15 = *plVar1;
  if (lVar15 == 0) {
    return;
  }
  puVar2 = (undefined8 *)(lVar15 + 0x3d18);
  bVar9 = *(byte *)(lVar15 + 0x3d2f);
  uVar16 = (ulong)bVar9;
  if (*(char *)(param_1 + 0x125b0) == '\0') {
    sVar17 = *(size_t *)(lVar15 + 0x3d20);
  }
  else {
    sVar17 = *(size_t *)(lVar15 + 0x3d20);
    sVar3 = sVar17;
    if (-1 < (char)bVar9) {
      sVar3 = uVar16;
    }
    sVar4 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar4 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar3 == sVar4) {
      puVar6 = (void *)*puVar2;
      if (-1 < (char)bVar9) {
        puVar6 = puVar2;
      }
      pbVar14 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar14 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar9 < '\0') {
        if ((sVar3 == 0) || (iVar10 = _memcmp(puVar6,pbVar14,sVar3), iVar10 == 0))
        goto LAB_10027cd7c;
      }
      else {
        if (sVar3 == 0) {
LAB_10027cd7c:
          thunk_FUN_1001cd434(&ppuStack_128);
          uVar11 = FUN_1004e0150("MENU_FRIENDS_INVITE_GUILD_DIALOG_TITLE",0);
          thunk_FUN_1004e439c(&pvStack_160,uVar11);
          FUN_10003330c(&uStack_150,&DAT_101d91198);
          uStack_138 = 0;
          uStack_134 = 0x41a00000;
          FUN_10003c048(auStack_120,&pvStack_160);
          if (cStack_139 < '\0') {
            operator_delete((void *)CONCAT17(cStack_149,uStack_150));
          }
          if (pvStack_158 != (void *)0x0) {
            operator_delete__(pvStack_158);
          }
          uVar11 = FUN_1004e0150("MENU_FRIENDS_INVITE_GUILD_DIALOG_TEXT",0);
          thunk_FUN_1004e439c(auStack_170,uVar11);
          FUN_1004e3120(&pvStack_160,"[PLAYER_NAME]");
          uVar11 = FUN_100655b6c(*plVar1 + 0x330);
          FUN_1004e3bc4(auStack_170,0,&pvStack_160,uVar11);
          if (pvStack_158 != (void *)0x0) {
            operator_delete__(pvStack_158);
          }
          thunk_FUN_1004e439c(&pvStack_160,auStack_170);
          FUN_10003330c(&uStack_150,&DAT_101d91198);
          uStack_138 = 1;
          uStack_134 = 0x41a00000;
          FUN_10003c048(auStack_120,&pvStack_160);
          if (cStack_139 < '\0') {
            operator_delete((void *)CONCAT17(cStack_149,uStack_150));
          }
          if (pvStack_158 != (void *)0x0) {
            operator_delete__(pvStack_158);
          }
          pcStack_108 = thunk_FUN_10027cfb0;
          lStack_110 = param_1;
          uVar11 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
          FUN_1000153b4(&uStack_d8,uVar11);
          lStack_f8 = param_1 + 0xa858;
          uStack_98 = 0x3f400000;
          iVar10 = FUN_100126c88();
          uStack_94 = 0x44160000;
          if (iVar10 == 0) {
            uStack_94 = 0x43e10000;
          }
          FUN_10001549c(&pvStack_160,"guildInvite");
          FUN_1001cefb8(param_1 + 0x122a0,&pvStack_160,&ppuStack_128);
          if (cStack_149 < '\0') {
            operator_delete(pvStack_160);
          }
          if (pvStack_168 != (void *)0x0) {
            operator_delete__(pvStack_168);
          }
          ppuStack_128 = &PTR_FUN_1014666e0;
          if (cStack_b1 < '\0') {
            operator_delete(pvStack_c8);
          }
          if (pvStack_d0 != (void *)0x0) {
            operator_delete__(pvStack_d0);
            uStack_d8 = 0;
            pvStack_d0 = (void *)0x0;
          }
          FUN_10003c1ec(auStack_120,1);
          return;
        }
        if ((uint)*pbVar14 == ((uint)(void *)*puVar2 & 0xff)) {
          pbVar13 = (byte *)(lVar15 + 0x3d19);
          uVar12 = uVar16;
          do {
            uVar12 = uVar12 - 1;
            pbVar14 = pbVar14 + 1;
            if (uVar12 == 0) goto LAB_10027cd7c;
            bVar7 = *pbVar13;
            pbVar13 = pbVar13 + 1;
          } while (bVar7 == *pbVar14);
        }
      }
    }
  }
  if (-1 < (char)bVar9) {
    sVar17 = uVar16;
  }
  if (-1 < (char)bVar8) {
    sVar5 = (ulong)bVar8;
  }
  if (sVar17 == sVar5) {
    puVar6 = (undefined8 *)*puVar2;
    if (-1 < (char)bVar9) {
      puVar6 = puVar2;
    }
    pbVar14 = DAT_101d91198;
    if (-1 < (char)bVar8) {
      pbVar14 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar9 < '\0') {
      if (sVar17 == 0) {
        return;
      }
      iVar10 = _memcmp(puVar6,pbVar14,sVar17);
      if (iVar10 == 0) {
        return;
      }
    }
    else {
      if (sVar17 == 0) {
        return;
      }
      if ((uint)*pbVar14 == ((uint)(undefined8 *)*puVar2 & 0xff)) {
        pbVar13 = (byte *)(lVar15 + 0x3d19);
        do {
          uVar16 = uVar16 - 1;
          pbVar14 = pbVar14 + 1;
          if (uVar16 == 0) {
            return;
          }
          bVar8 = *pbVar13;
          pbVar13 = pbVar13 + 1;
        } while (bVar8 == *pbVar14);
      }
    }
  }
  uVar11 = FUN_10015d3ec();
  FUN_1001634c4(uVar11,*plVar1 + 0x3d18,1);
  FUN_10021a8ec(*plVar1 + 0x3d18,0);
  return;
}



/*
 * FUN_10027d0ac
 * VA: 0x10027d0ac | Source: functions/10027.c:8635
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 5
 * Callees: FUN_1000153b4, FUN_10001549c, FUN_10003330c, FUN_10003c048, FUN_10003c1ec, FUN_100126c88, FUN_10015d3ec, FUN_1001635bc (+12 more)
 */
void FUN_10027d0ac(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  size_t sVar3;
  size_t sVar4;
  size_t sVar5;
  undefined8 *puVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  long lVar15;
  ulong uVar16;
  size_t sVar17;
  undefined1 auStack_170 [8];
  void *local_168;
  void *local_160;
  void *local_158;
  undefined7 local_150;
  char cStack_149;
  char local_139;
  undefined4 local_138;
  undefined8 local_134;
  undefined **local_128;
  undefined1 auStack_120 [16];
  long local_110;
  code *pcStack_108;
  long local_f8;
  undefined8 local_d8;
  void *local_d0;
  void *local_c8;
  char local_b1;
  undefined4 local_98;
  undefined4 local_94;
  
  bVar8 = DAT_101d911a8._7_1_;
  sVar5 = DAT_101d911a0;
  plVar1 = (long *)(param_1 + 0x11ff0);
  lVar15 = *plVar1;
  if (lVar15 == 0) {
    return;
  }
  puVar2 = (undefined8 *)(lVar15 + 0x3d50);
  bVar9 = *(byte *)(lVar15 + 0x3d67);
  uVar16 = (ulong)bVar9;
  if (*(char *)(param_1 + 0x125b1) == '\0') {
    sVar17 = *(size_t *)(lVar15 + 0x3d58);
  }
  else {
    sVar17 = *(size_t *)(lVar15 + 0x3d58);
    sVar3 = sVar17;
    if (-1 < (char)bVar9) {
      sVar3 = uVar16;
    }
    sVar4 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar4 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar3 == sVar4) {
      puVar6 = (void *)*puVar2;
      if (-1 < (char)bVar9) {
        puVar6 = puVar2;
      }
      pbVar14 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar14 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar9 < '\0') {
        if ((sVar3 == 0) || (iVar10 = _memcmp(puVar6,pbVar14,sVar3), iVar10 == 0))
        goto LAB_10027d278;
      }
      else {
        if (sVar3 == 0) {
LAB_10027d278:
          thunk_FUN_1001cd434(&local_128);
          uVar11 = FUN_1004e0150("MENU_FRIENDS_INVITE_USER_TEAM_DIALOG_TITLE",0);
          thunk_FUN_1004e439c(&local_160,uVar11);
          FUN_10003330c(&local_150,&DAT_101d91198);
          local_138 = 0;
          local_134 = 0x41a00000;
          FUN_10003c048(auStack_120,&local_160);
          if (local_139 < '\0') {
            operator_delete((void *)CONCAT17(cStack_149,local_150));
          }
          if (local_158 != (void *)0x0) {
            operator_delete__(local_158);
          }
          uVar11 = FUN_1004e0150("MENU_FRIENDS_INVITE_USER_TEAM_DIALOG_TEXT",0);
          thunk_FUN_1004e439c(auStack_170,uVar11);
          FUN_1004e3120(&local_160,"[PLAYER_NAME]");
          uVar11 = FUN_100655b6c(*plVar1 + 0x330);
          FUN_1004e3bc4(auStack_170,0,&local_160,uVar11);
          if (local_158 != (void *)0x0) {
            operator_delete__(local_158);
          }
          thunk_FUN_1004e439c(&local_160,auStack_170);
          FUN_10003330c(&local_150,&DAT_101d91198);
          local_138 = 1;
          local_134 = 0x41a00000;
          FUN_10003c048(auStack_120,&local_160);
          if (local_139 < '\0') {
            operator_delete((void *)CONCAT17(cStack_149,local_150));
          }
          if (local_158 != (void *)0x0) {
            operator_delete__(local_158);
          }
          pcStack_108 = thunk_FUN_10027d4ac;
          local_110 = param_1;
          uVar11 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
          FUN_1000153b4(&local_d8,uVar11);
          local_f8 = param_1 + 0xae48;
          local_98 = 0x3f400000;
          iVar10 = FUN_100126c88();
          local_94 = 0x44160000;
          if (iVar10 == 0) {
            local_94 = 0x43e10000;
          }
          FUN_10001549c(&local_160,"userTeamInvite");
          FUN_1001cefb8(param_1 + 0x122a0,&local_160,&local_128);
          if (cStack_149 < '\0') {
            operator_delete(local_160);
          }
          if (local_168 != (void *)0x0) {
            operator_delete__(local_168);
          }
          local_128 = &PTR_FUN_1014666e0;
          if (local_b1 < '\0') {
            operator_delete(local_c8);
          }
          if (local_d0 != (void *)0x0) {
            operator_delete__(local_d0);
            local_d8 = 0;
            local_d0 = (void *)0x0;
          }
          FUN_10003c1ec(auStack_120,1);
          return;
        }
        if ((uint)*pbVar14 == ((uint)(void *)*puVar2 & 0xff)) {
          pbVar13 = (byte *)(lVar15 + 0x3d51);
          uVar12 = uVar16;
          do {
            uVar12 = uVar12 - 1;
            pbVar14 = pbVar14 + 1;
            if (uVar12 == 0) goto LAB_10027d278;
            bVar7 = *pbVar13;
            pbVar13 = pbVar13 + 1;
          } while (bVar7 == *pbVar14);
        }
      }
    }
  }
  if (-1 < (char)bVar9) {
    sVar17 = uVar16;
  }
  if (-1 < (char)bVar8) {
    sVar5 = (ulong)bVar8;
  }
  if (sVar17 == sVar5) {
    puVar6 = (undefined8 *)*puVar2;
    if (-1 < (char)bVar9) {
      puVar6 = puVar2;
    }
    pbVar14 = DAT_101d91198;
    if (-1 < (char)bVar8) {
      pbVar14 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar9 < '\0') {
      if (sVar17 == 0) {
        return;
      }
      iVar10 = _memcmp(puVar6,pbVar14,sVar17);
      if (iVar10 == 0) {
        return;
      }
    }
    else {
      if (sVar17 == 0) {
        return;
      }
      if ((uint)*pbVar14 == ((uint)(undefined8 *)*puVar2 & 0xff)) {
        pbVar13 = (byte *)(lVar15 + 0x3d51);
        do {
          uVar16 = uVar16 - 1;
          pbVar14 = pbVar14 + 1;
          if (uVar16 == 0) {
            return;
          }
          bVar8 = *pbVar13;
          pbVar13 = pbVar13 + 1;
        } while (bVar8 == *pbVar14);
      }
    }
  }
  uVar11 = FUN_10015d3ec();
  FUN_1001635bc(uVar11,*plVar1 + 0x3d50,1);
  uVar11 = FUN_100644a94("EVENT_FRIENDS_LIST_QUERYING_USERTEAM");
  FUN_100644aec(&local_128,uVar11,0);
  FUN_100644c34(param_1,&local_128,1);
  return;
}



/*
 * thunk_FUN_10027d0ac
 * VA: 0xthunk_10027d0ac | Source: functions/10027.c:5043
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 5
 * Callees: FUN_1000153b4, FUN_10001549c, FUN_10003330c, FUN_10003c048, FUN_10003c1ec, FUN_100126c88, FUN_10015d3ec, FUN_1001635bc (+12 more)
 * Callers: FUN_100187d2c, FUN_10026dad4
 */
void thunk_FUN_10027d0ac(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  size_t sVar3;
  size_t sVar4;
  size_t sVar5;
  undefined8 *puVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  long lVar15;
  ulong uVar16;
  size_t sVar17;
  undefined1 auStack_170 [8];
  void *pvStack_168;
  void *pvStack_160;
  void *pvStack_158;
  undefined7 uStack_150;
  char cStack_149;
  char cStack_139;
  undefined4 uStack_138;
  undefined8 uStack_134;
  undefined **ppuStack_128;
  undefined1 auStack_120 [16];
  long lStack_110;
  code *pcStack_108;
  long lStack_f8;
  undefined8 uStack_d8;
  void *pvStack_d0;
  void *pvStack_c8;
  char cStack_b1;
  undefined4 uStack_98;
  undefined4 uStack_94;
  
  bVar8 = DAT_101d911a8._7_1_;
  sVar5 = DAT_101d911a0;
  plVar1 = (long *)(param_1 + 0x11ff0);
  lVar15 = *plVar1;
  if (lVar15 == 0) {
    return;
  }
  puVar2 = (undefined8 *)(lVar15 + 0x3d50);
  bVar9 = *(byte *)(lVar15 + 0x3d67);
  uVar16 = (ulong)bVar9;
  if (*(char *)(param_1 + 0x125b1) == '\0') {
    sVar17 = *(size_t *)(lVar15 + 0x3d58);
  }
  else {
    sVar17 = *(size_t *)(lVar15 + 0x3d58);
    sVar3 = sVar17;
    if (-1 < (char)bVar9) {
      sVar3 = uVar16;
    }
    sVar4 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar4 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar3 == sVar4) {
      puVar6 = (void *)*puVar2;
      if (-1 < (char)bVar9) {
        puVar6 = puVar2;
      }
      pbVar14 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar14 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar9 < '\0') {
        if ((sVar3 == 0) || (iVar10 = _memcmp(puVar6,pbVar14,sVar3), iVar10 == 0))
        goto LAB_10027d278;
      }
      else {
        if (sVar3 == 0) {
LAB_10027d278:
          thunk_FUN_1001cd434(&ppuStack_128);
          uVar11 = FUN_1004e0150("MENU_FRIENDS_INVITE_USER_TEAM_DIALOG_TITLE",0);
          thunk_FUN_1004e439c(&pvStack_160,uVar11);
          FUN_10003330c(&uStack_150,&DAT_101d91198);
          uStack_138 = 0;
          uStack_134 = 0x41a00000;
          FUN_10003c048(auStack_120,&pvStack_160);
          if (cStack_139 < '\0') {
            operator_delete((void *)CONCAT17(cStack_149,uStack_150));
          }
          if (pvStack_158 != (void *)0x0) {
            operator_delete__(pvStack_158);
          }
          uVar11 = FUN_1004e0150("MENU_FRIENDS_INVITE_USER_TEAM_DIALOG_TEXT",0);
          thunk_FUN_1004e439c(auStack_170,uVar11);
          FUN_1004e3120(&pvStack_160,"[PLAYER_NAME]");
          uVar11 = FUN_100655b6c(*plVar1 + 0x330);
          FUN_1004e3bc4(auStack_170,0,&pvStack_160,uVar11);
          if (pvStack_158 != (void *)0x0) {
            operator_delete__(pvStack_158);
          }
          thunk_FUN_1004e439c(&pvStack_160,auStack_170);
          FUN_10003330c(&uStack_150,&DAT_101d91198);
          uStack_138 = 1;
          uStack_134 = 0x41a00000;
          FUN_10003c048(auStack_120,&pvStack_160);
          if (cStack_139 < '\0') {
            operator_delete((void *)CONCAT17(cStack_149,uStack_150));
          }
          if (pvStack_158 != (void *)0x0) {
            operator_delete__(pvStack_158);
          }
          pcStack_108 = thunk_FUN_10027d4ac;
          lStack_110 = param_1;
          uVar11 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
          FUN_1000153b4(&uStack_d8,uVar11);
          lStack_f8 = param_1 + 0xae48;
          uStack_98 = 0x3f400000;
          iVar10 = FUN_100126c88();
          uStack_94 = 0x44160000;
          if (iVar10 == 0) {
            uStack_94 = 0x43e10000;
          }
          FUN_10001549c(&pvStack_160,"userTeamInvite");
          FUN_1001cefb8(param_1 + 0x122a0,&pvStack_160,&ppuStack_128);
          if (cStack_149 < '\0') {
            operator_delete(pvStack_160);
          }
          if (pvStack_168 != (void *)0x0) {
            operator_delete__(pvStack_168);
          }
          ppuStack_128 = &PTR_FUN_1014666e0;
          if (cStack_b1 < '\0') {
            operator_delete(pvStack_c8);
          }
          if (pvStack_d0 != (void *)0x0) {
            operator_delete__(pvStack_d0);
            uStack_d8 = 0;
            pvStack_d0 = (void *)0x0;
          }
          FUN_10003c1ec(auStack_120,1);
          return;
        }
        if ((uint)*pbVar14 == ((uint)(void *)*puVar2 & 0xff)) {
          pbVar13 = (byte *)(lVar15 + 0x3d51);
          uVar12 = uVar16;
          do {
            uVar12 = uVar12 - 1;
            pbVar14 = pbVar14 + 1;
            if (uVar12 == 0) goto LAB_10027d278;
            bVar7 = *pbVar13;
            pbVar13 = pbVar13 + 1;
          } while (bVar7 == *pbVar14);
        }
      }
    }
  }
  if (-1 < (char)bVar9) {
    sVar17 = uVar16;
  }
  if (-1 < (char)bVar8) {
    sVar5 = (ulong)bVar8;
  }
  if (sVar17 == sVar5) {
    puVar6 = (undefined8 *)*puVar2;
    if (-1 < (char)bVar9) {
      puVar6 = puVar2;
    }
    pbVar14 = DAT_101d91198;
    if (-1 < (char)bVar8) {
      pbVar14 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar9 < '\0') {
      if (sVar17 == 0) {
        return;
      }
      iVar10 = _memcmp(puVar6,pbVar14,sVar17);
      if (iVar10 == 0) {
        return;
      }
    }
    else {
      if (sVar17 == 0) {
        return;
      }
      if ((uint)*pbVar14 == ((uint)(undefined8 *)*puVar2 & 0xff)) {
        pbVar13 = (byte *)(lVar15 + 0x3d51);
        do {
          uVar16 = uVar16 - 1;
          pbVar14 = pbVar14 + 1;
          if (uVar16 == 0) {
            return;
          }
          bVar8 = *pbVar13;
          pbVar13 = pbVar13 + 1;
        } while (bVar8 == *pbVar14);
      }
    }
  }
  uVar11 = FUN_10015d3ec();
  FUN_1001635bc(uVar11,*plVar1 + 0x3d50,1);
  uVar11 = FUN_100644a94("EVENT_FRIENDS_LIST_QUERYING_USERTEAM");
  FUN_100644aec(&ppuStack_128,uVar11,0);
  FUN_100644c34(param_1,&ppuStack_128,1);
  return;
}



/*
 * FUN_10028a890
 * VA: 0x10028a890 | Source: functions/10028.c:8728
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 5
 * Callees: FUN_10015d3ec, FUN_1001e3120, FUN_100288e44, FUN_10028a980, FUN_1004e0150, FUN_100642bc8
 */
void FUN_10028a890(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = FUN_100642bc8(param_1 + 0x193e8);
  if (((uVar1 & 1) == 0) && (uVar1 = FUN_100642bc8(param_1 + 0x1b848), (uVar1 & 1) == 0)) {
    lVar2 = FUN_10015d3ec();
    if (*(char *)(lVar2 + 0x567c) != '\0') {
      uVar3 = FUN_1004e0150("MENU_PROFILE_USER_TEAM_MUST_REGISTER_DIALOG_TITLE",0);
      uVar4 = FUN_1004e0150("MENU_PROFILE_USER_TEAM_MUST_REGISTER_DIALOG_TEXT",0);
      uVar5 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      uVar6 = FUN_1004e0150("MAIN_PROFILE_LOGIN",0);
      FUN_1001e3120(uVar3,uVar4,uVar5,uVar6,param_1,0,FUN_10028a980);
      return;
    }
    FUN_100288e44(param_1,1);
    return;
  }
  return;
}



/*
 * thunk_FUN_10028a890
 * VA: 0xthunk_10028a890 | Source: functions/10028.c:4497
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 5
 * Callees: FUN_10015d3ec, FUN_1001e3120, FUN_100288e44, FUN_10028a980, FUN_1004e0150, FUN_100642bc8
 * Callers: FUN_100187d2c, FUN_1002850d0, thunk_FUN_1002850d0
 */
void thunk_FUN_10028a890(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = FUN_100642bc8(param_1 + 0x193e8);
  if (((uVar1 & 1) == 0) && (uVar1 = FUN_100642bc8(param_1 + 0x1b848), (uVar1 & 1) == 0)) {
    lVar2 = FUN_10015d3ec();
    if (*(char *)(lVar2 + 0x567c) != '\0') {
      uVar3 = FUN_1004e0150("MENU_PROFILE_USER_TEAM_MUST_REGISTER_DIALOG_TITLE",0);
      uVar4 = FUN_1004e0150("MENU_PROFILE_USER_TEAM_MUST_REGISTER_DIALOG_TEXT",0);
      uVar5 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      uVar6 = FUN_1004e0150("MAIN_PROFILE_LOGIN",0);
      FUN_1001e3120(uVar3,uVar4,uVar5,uVar6,param_1,0,FUN_10028a980);
      return;
    }
    FUN_100288e44(param_1,1);
    return;
  }
  return;
}



/*
 * FUN_10029b654
 * VA: 0x10029b654 | Source: functions/10029.c:8232
 * CE-gate: NO | Guest-gate: NO
 * Indicators: Vis masks: 3
 * Callees: FUN_1000200a0, FUN_1001a6880, FUN_10029b664, FUN_10029ba40, FUN_10029bad0, FUN_10029bbe0, FUN_1006425d0, FUN_10064e48c
 * Callers: FUN_100187d2c, FUN_10029b498
 */
void FUN_10029b654(long param_1)

{
  *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) & 0xfffffffb;
  return;
}




void FUN_10029b664(undefined1 param_1 [16],float param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,ulong param_8,
                  string *param_9,undefined8 *param_10,char param_11)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  byte bVar8;
  float fVar9;
  float fVar10;
  undefined4 local_68;
  float fStack_64;
  
  FUN_10029ba40();
  uVar6 = 4;
  if (param_11 == '\0') {
    uVar6 = 0;
  }
  *(uint *)((long)param_3 + 0x3ec) = *(uint *)((long)param_3 + 0x3ec) & 0xfffffffb | uVar6;
  *(undefined4 *)((long)param_3 + 0x63c) = param_6;
  *(undefined4 *)(param_3 + 200) = param_7;
  bVar8 = *(byte *)(param_8 + 0x17);
  uVar5 = (ulong)bVar8;
  uVar7 = *(ulong *)(param_8 + 8);
  uVar1 = uVar7;
  if (-1 < (char)bVar8) {
    uVar1 = uVar5;
  }
  if (uVar1 == 4) {
    iVar3 = std::string::compare(param_8,0,(char *)0xffffffffffffffff,0x1013e695a);
    if (iVar3 != 0) {
      bVar8 = *(byte *)(param_8 + 0x17);
      uVar5 = (ulong)bVar8;
      uVar7 = *(ulong *)(param_8 + 8);
      goto LAB_10029b710;
    }
    uVar4 = 0;
  }
  else {
LAB_10029b710:
    uVar1 = uVar7;
    if (-1 < (char)bVar8) {
      uVar1 = uVar5;
    }
    if (uVar1 == 7) {
      iVar3 = std::string::compare(param_8,0,(char *)0xffffffffffffffff,0x1013e695f);
      if (iVar3 == 0) {
        uVar4 = 1;
        goto LAB_10029b8f0;
      }
      bVar8 = *(byte *)(param_8 + 0x17);
      uVar5 = (ulong)bVar8;
      uVar7 = *(ulong *)(param_8 + 8);
    }
    uVar1 = uVar7;
    if (-1 < (char)bVar8) {
      uVar1 = uVar5;
    }
    if (uVar1 == 6) {
      iVar3 = std::string::compare(param_8,0,(char *)0xffffffffffffffff,0x1013e6967);
      if (iVar3 != 0) {
        bVar8 = *(byte *)(param_8 + 0x17);
        uVar5 = (ulong)bVar8;
        uVar7 = *(ulong *)(param_8 + 8);
        goto LAB_10029b790;
      }
    }
    else {
LAB_10029b790:
      uVar1 = uVar7;
      if (-1 < (char)bVar8) {
        uVar1 = uVar5;
      }
      if (uVar1 == 0xc) {
        iVar3 = std::string::compare(param_8,0,(char *)0xffffffffffffffff,0x1013e56ef);
        if (iVar3 == 0) {
          uVar4 = 3;
          goto LAB_10029b8f0;
        }
        bVar8 = *(byte *)(param_8 + 0x17);
        uVar5 = (ulong)bVar8;
        uVar7 = *(ulong *)(param_8 + 8);
      }
      uVar1 = uVar7;
      if (-1 < (char)bVar8) {
        uVar1 = uVar5;
      }
      if (uVar1 == 0x11) {
        iVar3 = std::string::compare(param_8,0,(char *)0xffffffffffffffff,0x1013e826d);
        if (iVar3 == 0) {
          uVar4 = 4;
          goto LAB_10029b8f0;
        }
        bVar8 = *(byte *)(param_8 + 0x17);
        uVar5 = (ulong)bVar8;
        uVar7 = *(ulong *)(param_8 + 8);
      }
      uVar1 = uVar7;
      if (-1 < (char)bVar8) {
        uVar1 = uVar5;
      }
      if (uVar1 == 0x15) {
        iVar3 = std::string::compare(param_8,0,(char *)0xffffffffffffffff,0x1013e827f);
        if (iVar3 == 0) {
          uVar4 = 5;
          goto LAB_10029b8f0;
        }
        bVar8 = *(byte *)(param_8 + 0x17);
        uVar5 = (ulong)bVar8;
        uVar7 = *(ulong *)(param_8 + 8);
      }
      uVar1 = uVar7;
      if (-1 < (char)bVar8) {
        uVar1 = uVar5;
      }
      if (uVar1 == 3) {
        iVar3 = std::string::compare(param_8,0,(char *)0xffffffffffffffff,0x1013ec08e);
        if (iVar3 == 0) goto LAB_10029b8c4;
        bVar8 = *(byte *)(param_8 + 0x17);
        uVar5 = (ulong)bVar8;
        uVar7 = *(ulong *)(param_8 + 8);
      }
      if (-1 < (char)bVar8) {
        uVar7 = uVar5;
      }
      if ((uVar7 != 0xd) ||
         (iVar3 = std::string::compare(param_8,0,(char *)0xffffffffffffffff,0x1013ec092), iVar3 != 0
         )) goto LAB_10029b8f4;
    }
LAB_10029b8c4:
    uVar4 = 2;
  }
LAB_10029b8f0:
  *(undefined4 *)(param_3 + 0xc6) = uVar4;
LAB_10029b8f4:
  local_68 = (**(code **)(*param_3 + 0x48))(param_3);
  fStack_64 = param_2;
  FUN_10064e48c(param_3 + 0x11,&local_68);
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_1001a6880(param_3 + 0x2f);
  uVar1 = *(ulong *)(param_9 + 8);
  if (-1 < (char)param_9[0x17]) {
    uVar1 = (ulong)(byte)param_9[0x17];
  }
  if (uVar1 == 0) {
    *(uint *)((long)param_3 + 0x10c) = *(uint *)((long)param_3 + 0x10c) & 0xfffffffb;
  }
  else {
    std::string::operator=((string *)(param_3 + 0xc3),param_9);
    uVar1 = param_10[1];
    if (-1 < (char)*(byte *)((long)param_10 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_10 + 0x17);
    }
    if (uVar1 == 0) {
      param_10 = &DAT_101d91198;
    }
    FUN_10029bad0(param_3,uVar1 != 0,param_10);
  }
  fVar9 = (float)FUN_1006425d0(param_3 + 0x6d,0,0,1,1);
  fVar10 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar10 = fVar10 - fVar9 * 0.5;
  param_2 = param_2 * 0.5;
  bVar2 = false;
  if ((*(float *)(param_3 + 0x75) == fVar10) &&
     (bVar2 = false, !NAN(*(float *)((long)param_3 + 0x3ac)) && !NAN(param_2))) {
    bVar2 = *(float *)((long)param_3 + 0x3ac) == param_2;
  }
  if (!bVar2) {
    *(float *)(param_3 + 0x75) = fVar10;
    *(float *)((long)param_3 + 0x3ac) = param_2;
    FUN_1000200a0(param_3 + 0x6d);
  }
  FUN_10029bbe0(param_3);
  (**(code **)(*param_3 + 0xe8))(param_3);
  return;
}



/*
 * FUN_1002a56cc
 * VA: 0x1002a56cc | Source: functions/1002a.c:4126
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 12
 * Callees: FUN_1000153b4, FUN_10002f320, FUN_100030cf0, FUN_1000eb768, FUN_1000f0994, FUN_10015d3ec, FUN_10016c2f0, FUN_10016c2fc (+11 more)
 */
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



/*
 * thunk_FUN_1002a56cc
 * VA: 0xthunk_1002a56cc | Source: functions/1002a.c:2557
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 12
 * Callees: FUN_1000153b4, FUN_10002f320, FUN_100030cf0, FUN_1000eb768, FUN_1000f0994, FUN_10015d3ec, FUN_10016c2f0, FUN_10016c2fc (+11 more)
 * Callers: FUN_100187d2c, FUN_1002a2f6c
 */
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



/*
 * FUN_1002a5ad0
 * VA: 0x1002a5ad0 | Source: functions/1002a.c:4303
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 9
 * Callees: FUN_1000153b4, FUN_1000eb768, FUN_10015d3ec, FUN_10016c2f0, FUN_10016c2fc, FUN_1001ad494, FUN_1001e3090, FUN_10021fea0 (+4 more)
 */
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



/*
 * thunk_FUN_1002a5ad0
 * VA: 0xthunk_1002a5ad0 | Source: functions/1002a.c:2703
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 9
 * Callees: FUN_1000153b4, FUN_1000eb768, FUN_10015d3ec, FUN_10016c2f0, FUN_10016c2fc, FUN_1001ad494, FUN_1001e3090, FUN_10021fea0 (+4 more)
 * Callers: FUN_100187d2c, FUN_1002a2f6c
 */
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



/*
 * FUN_1002a5cac
 * VA: 0x1002a5cac | Source: functions/1002a.c:4375
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 3
 * Callees: FUN_1001e3090, FUN_1004e0150
 */
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



/*
 * thunk_FUN_1002a5cac
 * VA: 0xthunk_1002a5cac | Source: functions/1002a.c:2776
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 3
 * Callees: FUN_1001e3090, FUN_1004e0150
 * Callers: FUN_100187d2c, FUN_1002a2f6c
 */
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



/*
 * FUN_100329dc4
 * VA: 0x100329dc4 | Source: functions/10032.c:8829
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 8
 * Callees: FUN_10012dd60, FUN_10014e160, FUN_10014e16c, FUN_1001e3090, FUN_100223034, FUN_1004e0150, FUN_1004f15a8, FUN_1004f1680 (+4 more)
 */
void FUN_100329dc4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **local_60;
  undefined8 local_58;
  undefined5 uStack_50;
  undefined3 uStack_4b;
  undefined5 uStack_48;
  undefined3 uStack_43;
  undefined5 uStack_40;
  undefined8 local_38;
  
  iVar1 = FUN_1004f1698(param_1 + 8);
  if (iVar1 == 0) {
    return;
  }
  _pthread_mutex_lock(DAT_101e46ab8);
  uStack_40 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x25) >> 0x18);
  local_60 = &PTR_thunk_FUN_1004f15a8_101493200;
  local_58 = 0;
  local_38 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = 0;
  uStack_4b = 0;
  uStack_48 = 0;
  uStack_43 = 0;
  _pthread_mutex_unlock(DAT_101e46ab8);
  iVar1 = FUN_1004f1680(&local_60);
  if (iVar1 != 0) {
    if ((int)local_38 - 2U < 2) {
      uVar2 = FUN_1004e0150("THIRD_PARTY_ACCOUNT_LINK_ERROR_DIALOG_TITLE",0);
      pcVar3 = "THIRD_PARTY_ACCOUNT_LINK_ERROR_DIALOG_WRONG_CREDENTIALS";
    }
    else {
      if ((int)local_38 == 4) {
        FUN_10052b83c(1);
        FUN_100223034();
        FUN_10012dd60();
        FUN_10014e160();
        FUN_10014e16c();
        goto LAB_100329ef8;
      }
      if ((int)local_38 == 1) {
        uVar2 = FUN_1004e0150("THIRD_PARTY_ACCOUNT_LINK_ERROR_DIALOG_TITLE",0);
        pcVar3 = "THIRD_PARTY_ACCOUNT_LINK_ERROR_DIALOG_ALREADY_LINKED";
      }
      else {
        uVar2 = FUN_1004e0150("THIRD_PARTY_ACCOUNT_LINK_ERROR_DIALOG_TITLE",0);
        pcVar3 = "THIRD_PARTY_ACCOUNT_LINK_ERROR_DIALOG_GENERIC_FAILURE";
      }
    }
    uVar4 = FUN_1004e0150(pcVar3,0);
    uVar5 = FUN_1004e0150("THIRD_PARTY_ACCOUNT_LINK_ERROR_DIALOG_BUTTON_TEXT",0);
    FUN_1001e3090(uVar2,uVar4,uVar5,param_1,thunk_FUN_100329f18);
  }
LAB_100329ef8:
  FUN_1004f15a8(&local_60);
  return;
}



/*
 * thunk_FUN_100329dc4
 * VA: 0xthunk_100329dc4 | Source: functions/10032.c:8990
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 8
 * Callees: FUN_10012dd60, FUN_10014e160, FUN_10014e16c, FUN_1001e3090, FUN_100223034, FUN_1004e0150, FUN_1004f15a8, FUN_1004f1680 (+4 more)
 * Callers: FUN_100187d2c, FUN_100329ce0, FUN_100329d50
 */
void thunk_FUN_100329dc4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined5 uStack_50;
  undefined3 uStack_4b;
  undefined5 uStack_48;
  undefined3 uStack_43;
  undefined5 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = FUN_1004f1698(param_1 + 8);
  if (iVar1 == 0) {
    return;
  }
  _pthread_mutex_lock(DAT_101e46ab8);
  uStack_40 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x25) >> 0x18);
  ppuStack_60 = &PTR_thunk_FUN_1004f15a8_101493200;
  uStack_58 = 0;
  uStack_38 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = 0;
  uStack_4b = 0;
  uStack_48 = 0;
  uStack_43 = 0;
  _pthread_mutex_unlock(DAT_101e46ab8);
  iVar1 = FUN_1004f1680(&ppuStack_60);
  if (iVar1 != 0) {
    if ((int)uStack_38 - 2U < 2) {
      uVar2 = FUN_1004e0150("THIRD_PARTY_ACCOUNT_LINK_ERROR_DIALOG_TITLE",0);
      pcVar3 = "THIRD_PARTY_ACCOUNT_LINK_ERROR_DIALOG_WRONG_CREDENTIALS";
    }
    else {
      if ((int)uStack_38 == 4) {
        FUN_10052b83c(1);
        FUN_100223034();
        FUN_10012dd60();
        FUN_10014e160();
        FUN_10014e16c();
        goto LAB_100329ef8;
      }
      if ((int)uStack_38 == 1) {
        uVar2 = FUN_1004e0150("THIRD_PARTY_ACCOUNT_LINK_ERROR_DIALOG_TITLE",0);
        pcVar3 = "THIRD_PARTY_ACCOUNT_LINK_ERROR_DIALOG_ALREADY_LINKED";
      }
      else {
        uVar2 = FUN_1004e0150("THIRD_PARTY_ACCOUNT_LINK_ERROR_DIALOG_TITLE",0);
        pcVar3 = "THIRD_PARTY_ACCOUNT_LINK_ERROR_DIALOG_GENERIC_FAILURE";
      }
    }
    uVar4 = FUN_1004e0150(pcVar3,0);
    uVar5 = FUN_1004e0150("THIRD_PARTY_ACCOUNT_LINK_ERROR_DIALOG_BUTTON_TEXT",0);
    FUN_1001e3090(uVar2,uVar4,uVar5,param_1,thunk_FUN_100329f18);
  }
LAB_100329ef8:
  FUN_1004f15a8(&ppuStack_60);
  return;
}



/*
 * FUN_10033ccd4
 * VA: 0x10033ccd4 | Source: functions/10033.c:8146
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 2, Vis masks: 2
 * Callees: FUN_10002f320, FUN_10033ae7c, FUN_10033ae84, FUN_10033c89c, FUN_10033cb0c, FUN_10033cc84, FUN_1004e0150, FUN_10052b298 (+2 more)
 */
void FUN_10033ccd4(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_10052b298();
  if (iVar1 != 0) {
    thunk_FUN_100529844();
    FUN_10033cc84(param_1);
    lVar2 = FUN_10002f320();
    FUN_10033ae84(*(undefined8 *)(lVar2 + 0xc6c8),0);
    return;
  }
  uVar3 = FUN_1004e0150("MENU_DIALOG_RATE_APP_FORM_HAPPY_LABEL",0);
  FUN_1006513c0(param_1 + 0x60a0,uVar3);
  *(uint *)(param_1 + 0x6254) = *(uint *)(param_1 + 0x6254) & 0xfffffffb;
  *(uint *)(param_1 + 0x792c) = *(uint *)(param_1 + 0x792c) & 0xfffffffb;
  *(uint *)(param_1 + 0x9004) = *(uint *)(param_1 + 0x9004) | 4;
  lVar2 = FUN_10002f320();
  FUN_10033ae7c(*(undefined8 *)(lVar2 + 0xc6c8),1);
  FUN_10033c89c(param_1);
  FUN_10033cb0c(param_1);
  return;
}



/*
 * thunk_FUN_10033ccd4
 * VA: 0xthunk_10033ccd4 | Source: functions/10033.c:7946
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 2, Vis masks: 2
 * Callees: FUN_10002f320, FUN_10033ae7c, FUN_10033ae84, FUN_10033c89c, FUN_10033cb0c, FUN_10033cc84, FUN_1004e0150, FUN_10052b298 (+2 more)
 * Callers: FUN_100187d2c, FUN_10033bb58
 */
void thunk_FUN_10033ccd4(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_10052b298();
  if (iVar1 != 0) {
    thunk_FUN_100529844();
    FUN_10033cc84(param_1);
    lVar2 = FUN_10002f320();
    FUN_10033ae84(*(undefined8 *)(lVar2 + 0xc6c8),0);
    return;
  }
  uVar3 = FUN_1004e0150("MENU_DIALOG_RATE_APP_FORM_HAPPY_LABEL",0);
  FUN_1006513c0(param_1 + 0x60a0,uVar3);
  *(uint *)(param_1 + 0x6254) = *(uint *)(param_1 + 0x6254) & 0xfffffffb;
  *(uint *)(param_1 + 0x792c) = *(uint *)(param_1 + 0x792c) & 0xfffffffb;
  *(uint *)(param_1 + 0x9004) = *(uint *)(param_1 + 0x9004) | 4;
  lVar2 = FUN_10002f320();
  FUN_10033ae7c(*(undefined8 *)(lVar2 + 0xc6c8),1);
  FUN_10033c89c(param_1);
  FUN_10033cb0c(param_1);
  return;
}



/*
 * FUN_10033cd9c
 * VA: 0x10033cd9c | Source: functions/10033.c:8176
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 2, Vis masks: 1
 * Callees: FUN_10002f320, FUN_10033ae7c, FUN_10033c89c, FUN_10033cb0c, FUN_1004e0150, FUN_1006513c0
 */
void FUN_10033cd9c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_1004e0150("MENU_DIALOG_RATE_APP_FORM_CONFUSED_LABEL",0);
  FUN_1006513c0(param_1 + 0x60a0,uVar1);
  *(uint *)(param_1 + 0x9004) = *(uint *)(param_1 + 0x9004) & 0xfffffffb;
  *(uint *)(param_1 + 0x6254) = *(uint *)(param_1 + 0x6254) | 4;
  *(uint *)(param_1 + 0x792c) = *(uint *)(param_1 + 0x792c) | 4;
  lVar2 = FUN_10002f320();
  FUN_10033ae7c(*(undefined8 *)(lVar2 + 0xc6c8),2);
  FUN_10033c89c(param_1);
  FUN_10033cb0c(param_1);
  return;
}



/*
 * thunk_FUN_10033cd9c
 * VA: 0xthunk_10033cd9c | Source: functions/10033.c:7976
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 2, Vis masks: 1
 * Callees: FUN_10002f320, FUN_10033ae7c, FUN_10033c89c, FUN_10033cb0c, FUN_1004e0150, FUN_1006513c0
 * Callers: FUN_100187d2c, FUN_10033bb58
 */
void thunk_FUN_10033cd9c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_1004e0150("MENU_DIALOG_RATE_APP_FORM_CONFUSED_LABEL",0);
  FUN_1006513c0(param_1 + 0x60a0,uVar1);
  *(uint *)(param_1 + 0x9004) = *(uint *)(param_1 + 0x9004) & 0xfffffffb;
  *(uint *)(param_1 + 0x6254) = *(uint *)(param_1 + 0x6254) | 4;
  *(uint *)(param_1 + 0x792c) = *(uint *)(param_1 + 0x792c) | 4;
  lVar2 = FUN_10002f320();
  FUN_10033ae7c(*(undefined8 *)(lVar2 + 0xc6c8),2);
  FUN_10033c89c(param_1);
  FUN_10033cb0c(param_1);
  return;
}



/*
 * FUN_10033ce30
 * VA: 0x10033ce30 | Source: functions/10033.c:8197
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 2, Vis masks: 2
 * Callees: FUN_10002f320, FUN_10033ae7c, FUN_10033c89c, FUN_10033cb0c, FUN_1004e0150, FUN_1006513c0
 */
void FUN_10033ce30(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_1004e0150("MENU_DIALOG_RATE_APP_FORM_UNHAPPY_LABEL",0);
  FUN_1006513c0(param_1 + 0x60a0,uVar1);
  *(uint *)(param_1 + 0x6254) = *(uint *)(param_1 + 0x6254) & 0xfffffffb;
  *(uint *)(param_1 + 0x9004) = *(uint *)(param_1 + 0x9004) & 0xfffffffb;
  *(uint *)(param_1 + 0x792c) = *(uint *)(param_1 + 0x792c) | 4;
  lVar2 = FUN_10002f320();
  FUN_10033ae7c(*(undefined8 *)(lVar2 + 0xc6c8),3);
  FUN_10033c89c(param_1);
  FUN_10033cb0c(param_1);
  return;
}



/*
 * thunk_FUN_10033ce30
 * VA: 0xthunk_10033ce30 | Source: functions/10033.c:7997
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 2, Vis masks: 2
 * Callees: FUN_10002f320, FUN_10033ae7c, FUN_10033c89c, FUN_10033cb0c, FUN_1004e0150, FUN_1006513c0
 * Callers: FUN_100187d2c, FUN_10033bb58
 */
void thunk_FUN_10033ce30(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_1004e0150("MENU_DIALOG_RATE_APP_FORM_UNHAPPY_LABEL",0);
  FUN_1006513c0(param_1 + 0x60a0,uVar1);
  *(uint *)(param_1 + 0x6254) = *(uint *)(param_1 + 0x6254) & 0xfffffffb;
  *(uint *)(param_1 + 0x9004) = *(uint *)(param_1 + 0x9004) & 0xfffffffb;
  *(uint *)(param_1 + 0x792c) = *(uint *)(param_1 + 0x792c) | 4;
  lVar2 = FUN_10002f320();
  FUN_10033ae7c(*(undefined8 *)(lVar2 + 0xc6c8),3);
  FUN_10033c89c(param_1);
  FUN_10033cb0c(param_1);
  return;
}
