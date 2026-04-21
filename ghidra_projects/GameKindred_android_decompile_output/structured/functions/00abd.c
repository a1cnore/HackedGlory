// functions/00abd — 5 functions
#include "libGameKindred.h"




void FUN_00abd018(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d5508;
  if ((void *)param_1[0x399] != (void *)0x0) {
    operator_delete__((void *)param_1[0x399]);
    param_1[0x399] = 0;
    param_1[0x398] = 0;
  }
  if ((void *)param_1[0x397] != (void *)0x0) {
    operator_delete__((void *)param_1[0x397]);
    param_1[0x397] = 0;
    param_1[0x396] = 0;
  }
  if ((void *)param_1[0x395] != (void *)0x0) {
    operator_delete__((void *)param_1[0x395]);
    param_1[0x395] = 0;
    param_1[0x394] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x36e);
  FUN_00f13d08(param_1 + 0x353);
  FUN_00f13d08(param_1 + 0x338);
  FUN_009c7fa8(param_1 + 0x80);
  FUN_00abd150(param_1);
  return;
}




void FUN_00abd0b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d5508;
  if ((void *)param_1[0x399] != (void *)0x0) {
    operator_delete__((void *)param_1[0x399]);
    param_1[0x399] = 0;
    param_1[0x398] = 0;
  }
  if ((void *)param_1[0x397] != (void *)0x0) {
    operator_delete__((void *)param_1[0x397]);
    param_1[0x397] = 0;
    param_1[0x396] = 0;
  }
  if ((void *)param_1[0x395] != (void *)0x0) {
    operator_delete__((void *)param_1[0x395]);
    param_1[0x395] = 0;
    param_1[0x394] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x36e);
  FUN_00f13d08(param_1 + 0x353);
  FUN_00f13d08(param_1 + 0x338);
  FUN_009c7fa8(param_1 + 0x80);
  FUN_00abd150(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00abd150(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_027d5608;
  FUN_00aa1388(param_1 + 0x7e);
  if ((void *)param_1[0x79] != (void *)0x0) {
    operator_delete__((void *)param_1[0x79]);
    param_1[0x79] = 0;
    param_1[0x78] = 0;
  }
  if ((void *)param_1[0x77] != (void *)0x0) {
    operator_delete__((void *)param_1[0x77]);
    param_1[0x77] = 0;
    param_1[0x76] = 0;
  }
  if ((void *)param_1[0x75] != (void *)0x0) {
    operator_delete__((void *)param_1[0x75]);
    param_1[0x75] = 0;
    param_1[0x74] = 0;
  }
  if ((void *)param_1[0x73] != (void *)0x0) {
    operator_delete__((void *)param_1[0x73]);
    param_1[0x73] = 0;
    param_1[0x72] = 0;
  }
  if ((void *)param_1[0x70] != (void *)0x0) {
    operator_delete__((void *)param_1[0x70]);
    param_1[0x70] = 0;
    param_1[0x6f] = 0;
  }
  lVar1 = 0x240;
  *param_1 = &PTR_FUN_027db530;
  do {
    FUN_00f0d3a4((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x130;
  } while (lVar1 != -0x20);
  FUN_00f01868(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00abd220(void *param_1)

{
  FUN_00abd150();
  operator_delete(param_1);
  return;
}




void FUN_00abd244(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                 long param_5)

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
  ulong uVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  byte bVar24;
  long lVar25;
  bool bVar26;
  uint uVar27;
  int iVar28;
  byte *pbVar29;
  undefined8 uVar30;
  char *pcVar31;
  uint uVar32;
  long lVar33;
  float fVar34;
  float fVar35;
  undefined4 local_134;
  uint local_130 [4];
  void *local_120;
  ulong local_118;
  void *local_110;
  void *local_108;
  ulong local_100;
  void *local_f8;
  void *local_f0;
  code *local_e8;
  long *local_e0;
  void *local_d8;
  ulong local_d0 [2];
  undefined4 local_c0;
  undefined4 uStack_bc;
  byte local_b8 [16];
  void *local_a8;
  long local_a0;
  
  lVar25 = tpidr_el0;
  local_a0 = *(long *)(lVar25 + 0x28);
  FUN_00f13ca4();
  *param_3 = (long)&PTR_FUN_027d5708;
  FUN_00af6b6c();
  param_3[0x34] = param_5;
  plVar1 = param_3 + 0x35;
  FUN_00af8b20(plVar1);
  FUN_00f017e8(param_3 + 0xac);
  plVar2 = param_3 + 0xbd;
  param_3[0xac] = (long)&PTR_FUN_027c1f80;
  FUN_00f0d160();
  plVar3 = param_3 + 0xe3;
  FUN_00f0d160();
  plVar4 = param_3 + 0x109;
  FUN_00f017e8(plVar4);
  param_3[0x109] = (long)&PTR_FUN_027c1f80;
  FUN_00b08d84();
  plVar5 = param_3 + 0x168;
  FUN_00f0e4a8(plVar5);
  plVar6 = param_3 + 0x186;
  FUN_00f0d160(plVar6);
  FUN_00f0d160();
  plVar7 = param_3 + 0x1d2;
  FUN_00b25254();
  plVar8 = param_3 + 0x1fe;
  FUN_00aba378(plVar8,0);
  plVar9 = param_3 + 0x68c;
  FUN_00f13ca4();
  plVar10 = param_3 + 0x6a3;
  FUN_00f0d160();
  plVar11 = param_3 + 0x6c9;
  FUN_00f0e4a8();
  plVar12 = param_3 + 0x6e7;
  FUN_00f13ca4(plVar12);
  plVar13 = param_3 + 0x6fe;
  FUN_00f0e4a8();
  plVar14 = param_3 + 0x71c;
  FUN_00f0e4a8();
  plVar15 = param_3 + 0x73a;
  FUN_00f0e4a8();
  plVar16 = param_3 + 0x758;
  FUN_00f0e4a8();
  FUN_00f0d160();
  FUN_00f0d160();
  FUN_00f0d160();
  FUN_00f0d160();
  plVar17 = param_3 + 0x80e;
  FUN_00afbfb0();
  plVar18 = param_3 + 0x84a;
  FUN_00afbfb0();
  plVar19 = param_3 + 0x886;
  FUN_00afbfb0();
  plVar20 = param_3 + 0x8c2;
  FUN_00afbfb0();
  FUN_00f0a784(param_3 + 0x8fe);
  lVar33 = 0;
  do {
    FUN_00f0a784((long)param_3 + lVar33 + 0x4800);
    lVar33 = lVar33 + 0x10;
  } while (lVar33 != 0x30);
  FUN_00f0a784(param_3 + 0x906);
  FUN_00f0a784(param_3 + 0x908);
  *(undefined1 *)((long)param_3 + 0x4a29) = 0;
  memset(param_3 + 0x90a,0,0x1c8);
  FUN_00f0a814(param_3 + 0x8fe,PTR_s_build___MenuSkinsHeroesBlueprint_02be3630);
  FUN_008fa54c(&local_100,PTR_s_rareArt_file_02be36d8);
  FUN_008fa54c(&local_118,PTR_s_rareArt_offset_02be36e0);
  FUN_008fa54c(local_130,PTR_s_rareArt_repeat_02be36e8);
  FUN_008fcdb8(&local_e8,&local_100);
  FUN_008fcdb8(local_d0,&local_118);
  FUN_008fcdb8(local_b8,local_130);
  FUN_008fce60(param_3 + 0x90a,&local_e8);
  FUN_008fce60(param_3 + 0x90d,local_d0);
  FUN_008fce60(param_3 + 0x910,local_b8);
  if ((local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  if ((local_d0[0] & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_bc,local_c0));
  }
  if (((ulong)local_e8 & 1) != 0) {
    operator_delete(local_d8);
  }
  if ((local_130[0] & 1) != 0) {
    operator_delete(local_120);
  }
  if ((local_118 & 1) != 0) {
    operator_delete(local_108);
  }
  if ((local_100 & 1) != 0) {
    operator_delete(local_f0);
  }
  FUN_008fa54c(&local_100,PTR_s_epicArt_file_02be36f0);
  FUN_008fa54c(&local_118,PTR_s_epicArt_offset_02be36f8);
  FUN_008fa54c(local_130,PTR_s_epicArt_repeat_02be3700);
  FUN_008fcdb8(&local_e8,&local_100);
  FUN_008fcdb8(local_d0,&local_118);
  FUN_008fcdb8(local_b8,local_130);
  FUN_008fce60(param_3 + 0x913,&local_e8);
  FUN_008fce60(param_3 + 0x916,local_d0);
  FUN_008fce60(param_3 + 0x919,local_b8);
  if ((local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  if ((local_d0[0] & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_bc,local_c0));
  }
  if (((ulong)local_e8 & 1) != 0) {
    operator_delete(local_d8);
  }
  if ((local_130[0] & 1) != 0) {
    operator_delete(local_120);
  }
  if ((local_118 & 1) != 0) {
    operator_delete(local_108);
  }
  if ((local_100 & 1) != 0) {
    operator_delete(local_f0);
  }
  FUN_008fa54c(&local_100,PTR_s_lgndryArt_file_02be3708);
  FUN_008fa54c(&local_118,PTR_s_lgndryArt_offset_02be3710);
  FUN_008fa54c(local_130,PTR_s_lgndryArt_repeat_02be3718);
  FUN_008fcdb8(&local_e8,&local_100);
  FUN_008fcdb8(local_d0,&local_118);
  FUN_008fcdb8(local_b8,local_130);
  FUN_008fce60(param_3 + 0x91c,&local_e8);
  FUN_008fce60(param_3 + 0x91f,local_d0);
  FUN_008fce60(param_3 + 0x922,local_b8);
  if ((local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  if ((local_d0[0] & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_bc,local_c0));
  }
  if (((ulong)local_e8 & 1) != 0) {
    operator_delete(local_d8);
  }
  if ((local_130[0] & 1) != 0) {
    operator_delete(local_120);
  }
  if ((local_118 & 1) != 0) {
    operator_delete(local_108);
  }
  if ((local_100 & 1) != 0) {
    operator_delete(local_f0);
  }
  FUN_008fa54c(&local_100,PTR_s_rareHero_file_02be3720);
  FUN_008fa54c(&local_118,PTR_s_rareHero_offset_02be3728);
  FUN_008fa54c(local_130,PTR_s_rareHero_repeat_02be3730);
  FUN_008fcdb8(&local_e8,&local_100);
  FUN_008fcdb8(local_d0,&local_118);
  FUN_008fcdb8(local_b8,local_130);
  FUN_008fce60(param_3 + 0x925,&local_e8);
  FUN_008fce60(param_3 + 0x928,local_d0);
  FUN_008fce60(param_3 + 0x92b,local_b8);
  if ((local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  if ((local_d0[0] & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_bc,local_c0));
  }
  if (((ulong)local_e8 & 1) != 0) {
    operator_delete(local_d8);
  }
  if ((local_130[0] & 1) != 0) {
    operator_delete(local_120);
  }
  if ((local_118 & 1) != 0) {
    operator_delete(local_108);
  }
  if ((local_100 & 1) != 0) {
    operator_delete(local_f0);
  }
  FUN_008fa54c(&local_100,PTR_s_epicHero_file_02be3738);
  FUN_008fa54c(&local_118,PTR_s_epicHero_offset_02be3740);
  FUN_008fa54c(local_130,PTR_s_epicHero_repeat_02be3748);
  FUN_008fcdb8(&local_e8,&local_100);
  FUN_008fcdb8(local_d0,&local_118);
  FUN_008fcdb8(local_b8,local_130);
  FUN_008fce60(param_3 + 0x92e,&local_e8);
  FUN_008fce60(param_3 + 0x931,local_d0);
  FUN_008fce60(param_3 + 0x934,local_b8);
  if ((local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  if ((local_d0[0] & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_bc,local_c0));
  }
  if (((ulong)local_e8 & 1) != 0) {
    operator_delete(local_d8);
  }
  if ((local_130[0] & 1) != 0) {
    operator_delete(local_120);
  }
  if ((local_118 & 1) != 0) {
    operator_delete(local_108);
  }
  if ((local_100 & 1) != 0) {
    operator_delete(local_f0);
  }
  FUN_008fa54c(&local_100,PTR_s_lgndHero_file_02be3750);
  FUN_008fa54c(&local_118,PTR_s_lgndHero_offset_02be3758);
  FUN_008fa54c(local_130,PTR_s_lgndHero_repeat_02be3760);
  FUN_008fcdb8(&local_e8,&local_100);
  FUN_008fcdb8(local_d0,&local_118);
  FUN_008fcdb8(local_b8,local_130);
  FUN_008fce60(param_3 + 0x937,&local_e8);
  FUN_008fce60(param_3 + 0x93a,local_d0);
  FUN_008fce60(param_3 + 0x93d,local_b8);
  if ((local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  if (((byte)local_d0[0] & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_bc,local_c0));
  }
  if (((byte)local_e8 & 1) != 0) {
    operator_delete(local_d8);
  }
  if ((local_130[0] & 1) != 0) {
    operator_delete(local_120);
  }
  if ((local_118 & 1) != 0) {
    operator_delete(local_108);
  }
  if ((local_100 & 1) != 0) {
    operator_delete(local_f0);
  }
  if (param_3[0x34] == 0) {
    param_3[0x944] = 0;
    param_3[0x943] = 0;
  }
  else {
    FUN_00ccbc34(param_3[0x34],param_3 + 0x943,(long)param_3 + 0x4a1c,param_3 + 0x944,
                 (long)param_3 + 0x4a24);
  }
  (**(code **)(*param_3 + 0x78))(param_3,param_3 + 0x17,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar1,1);
  FUN_00f023ec(plVar1,param_3 + 0x11a,1);
  FUN_00f023ec(param_3 + 0x14e,plVar5,1);
  FUN_00f023ec(plVar1,plVar6,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar4,1);
  FUN_00f023ec(plVar4,plVar12,1);
  FUN_00f023ec(plVar12,plVar13,1);
  FUN_00f023ec(plVar13,plVar17,1);
  FUN_00f023ec(plVar12,plVar14,1);
  FUN_00f023ec(plVar14,plVar18,1);
  FUN_00f023ec(plVar12,plVar15,1);
  FUN_00f023ec(plVar15,plVar19,1);
  FUN_00f023ec(plVar12,plVar16,1);
  FUN_00f023ec(plVar16,plVar20,1);
  FUN_00f023ec(plVar12,param_3 + 0x776,1);
  FUN_00f023ec(plVar12,param_3 + 0x79c,1);
  FUN_00f023ec(plVar12,param_3 + 0x7c2,1);
  FUN_00f023ec(plVar12,param_3 + 0x7e8,1);
  FUN_00f023ec(plVar4,plVar2,1);
  FUN_00f023ec(plVar4,plVar3,1);
  FUN_00f023ec(plVar4,param_3 + 0x1ac,1);
  FUN_00f023ec(plVar4,plVar7,1);
  FUN_00f023ec(plVar4,plVar8,1);
  FUN_00f023ec(plVar8,plVar9,1);
  FUN_00f023ec(plVar9,plVar11,1);
  FUN_00f023ec(plVar9,plVar10,1);
  uVar27 = FUN_0092ea9c();
  FUN_00f13f08(param_1,param_2,param_3);
  FUN_008fce60(param_3 + 0x940,param_3[0x34]);
  pbVar29 = (byte *)(param_3[0x34] + 0x60);
  bVar24 = *pbVar29;
  uVar21 = (ulong)(bVar24 >> 1);
  if ((bVar24 & 1) != 0) {
    uVar21 = *(ulong *)(param_3[0x34] + 0x68);
  }
  bVar26 = false;
  if (uVar21 == 4) {
    iVar28 = FUN_0090d610(pbVar29,0,0xffffffffffffffff,"gold",4);
    bVar26 = iVar28 == 0;
  }
  plVar4 = param_3 + 0x945;
  *(bool *)plVar4 = bVar26;
  uVar30 = FUN_00d6eb50();
  lVar33 = FUN_00d6eb5c(uVar30,"*KindredMenuMarketCardBox*");
  param_3[0xab] = lVar33;
  FUN_00af9124(plVar1,lVar33);
  local_c0 = FUN_00f048a4("UI::EVENT_ANIMATION_LOOPED");
  local_e8 = thunk_FUN_00abebbc;
  local_d0[0] = 0;
  local_d0[1] = 0;
  local_d8 = (void *)0x0;
  local_e0 = param_3;
  FUN_009693a0(param_3 + 0x36,&local_e8);
  FUN_00f00298(local_130,&local_134);
  FUN_00f13f08(local_130[0],local_134,plVar1);
  FUN_00abebbc(param_3);
  local_c0 = DAT_03210c64;
  local_e8 = thunk_FUN_00abff10;
  local_d0[0] = 0;
  local_d0[1] = 0;
  local_d8 = (void *)0x0;
  local_e0 = param_3;
  FUN_009693a0(param_3 + 0x11b,&local_e8);
  FUN_00b0914c(param_3 + 0x11a,1);
  FUN_00f0e548(plVar5,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  uVar32 = *(uint *)((long)param_3 + 0xbc4);
  if ((uVar32 & 0x7f80) != 0) {
    *(uint *)((long)param_3 + 0xbc4) = uVar32 & 0xffff807f;
    FUN_0091ada4(plVar5);
    uVar32 = *(uint *)((long)param_3 + 0xbc4);
  }
  *(uint *)((long)param_3 + 0xbc4) = uVar32 | 0x10;
  if ((*(float *)(param_3 + 0x172) != 0.5) || (*(float *)((long)param_3 + 0xb94) != 0.5)) {
    param_3[0x172] = 0x3f0000003f000000;
    FUN_0091ada4(plVar5);
  }
  ppuVar23 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  if ((uVar27 & 1) == 0) {
    ppuVar23 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  FUN_00f0d92c(plVar6,*ppuVar23,&DAT_01bee7fa);
  uVar30 = FUN_00e6ce7c("MENU_MARKET_CARD_TILE_PEEK_IN_BOX",0);
  FUN_00f0d75c(plVar6,uVar30);
  if ((char)*plVar4 == '\0') {
    FUN_00f13f08(0x44160000,0x43b40000,plVar5);
    if ((*(float *)(param_3 + 0x170) != -20.0) || (*(float *)((long)param_3 + 0xb84) != 20.0)) {
      param_3[0x170] = 0x41a00000c1a00000;
      FUN_0091ada4(plVar5);
    }
    if ((*(float *)(param_3 + 0x18e) != 100.0) || (*(float *)((long)param_3 + 0xc74) != 125.0)) {
      lVar33 = 0x42fa000042c80000;
      goto LAB_00abdf64;
    }
  }
  else {
    FUN_00f13f08(0x44660000,0x44480000,plVar5);
    if (*(float *)(param_3 + 0x170) != -20.0) {
      *(undefined4 *)(param_3 + 0x170) = 0xc1a00000;
      FUN_0091ada4(plVar5);
    }
    if ((*(float *)(param_3 + 0x18e) != 100.0) || (*(float *)((long)param_3 + 0xc74) != 250.0)) {
      lVar33 = 0x437a000042c80000;
LAB_00abdf64:
      param_3[0x18e] = lVar33;
      FUN_0091ada4(plVar6);
    }
  }
  ppuVar23 = &PTR_s_build___Fonts_Brandon_Light_60_f_02be9c18;
  if ((char)*plVar4 != '\0') {
    ppuVar23 = &PTR_s_build___Fonts_Brandon_Light_96_f_02be9c28;
  }
  FUN_00f0d92c(plVar2,*ppuVar23,&DAT_01bee7fa);
  lVar33 = param_3[0x34];
  if ((*(byte *)(lVar33 + 0x30) & 1) == 0) {
    lVar33 = lVar33 + 0x31;
  }
  else {
    lVar33 = *(long *)(lVar33 + 0x40);
  }
  uVar30 = FUN_00e6ce7c(lVar33,0);
  FUN_00f0d75c(plVar2,uVar30);
  ppuVar23 = &PTR_s_build___Fonts_Brandon_Regular_30_02be9c38;
  if ((char)*plVar4 != '\0') {
    ppuVar23 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  }
  FUN_00f0d92c(plVar3,*ppuVar23,&DAT_01bee7fa);
  FUN_00f0dad0(0x44160000,plVar3,1);
  if ((char)*plVar4 == '\0') {
    lVar33 = param_3[0x34];
    if ((*(byte *)(lVar33 + 0x18) & 1) == 0) {
      lVar33 = lVar33 + 0x19;
    }
    else {
      lVar33 = *(long *)(lVar33 + 0x28);
    }
    uVar30 = FUN_00e6ce7c(lVar33,0);
    FUN_00f0d75c(plVar3,uVar30);
    goto LAB_00abe2a8;
  }
  lVar33 = param_3[0x34];
  if ((*(byte *)(lVar33 + 0x18) & 1) == 0) {
    lVar33 = lVar33 + 0x19;
  }
  else {
    lVar33 = *(long *)(lVar33 + 0x28);
  }
  uVar30 = FUN_00e6ce7c(lVar33,0);
  thunk_FUN_00e7051c(&local_e8,uVar30);
  lVar33 = param_3[0x34];
  iVar28 = *(int *)(lVar33 + 0xb0);
  if (iVar28 == 1) {
    pbVar29 = *(byte **)(lVar33 + 0xb8);
    if ((*pbVar29 & 1) == 0) {
      pbVar29 = pbVar29 + 1;
    }
    else {
      pbVar29 = *(byte **)(pbVar29 + 0x10);
    }
    lVar33 = FUN_00cc7618(pbVar29);
    pcVar31 = "[FIRST_CHARACTER]";
LAB_00abe254:
    FUN_00e705c8(&local_100,pcVar31);
    uVar30 = FUN_00e6ce7c(*(undefined8 *)(lVar33 + 0x18),0);
    FUN_00e71248(&local_e8,0,&local_100,uVar30);
    if (local_f8 != (void *)0x0) {
      operator_delete__(local_f8);
      local_100 = 0;
      local_f8 = (void *)0x0;
    }
  }
  else {
    if (iVar28 == 2) {
      pbVar29 = *(byte **)(lVar33 + 0xb8);
      if ((*pbVar29 & 1) == 0) {
        pbVar29 = pbVar29 + 1;
      }
      else {
        pbVar29 = *(byte **)(pbVar29 + 0x10);
      }
      lVar33 = FUN_00cc7618(pbVar29);
      FUN_00e705c8(&local_100,"[FIRST_CHARACTER]");
      uVar30 = FUN_00e6ce7c(*(undefined8 *)(lVar33 + 0x18),0);
      FUN_00e71248(&local_e8,0,&local_100,uVar30);
      if (local_f8 != (void *)0x0) {
        operator_delete__(local_f8);
        local_100 = 0;
        local_f8 = (void *)0x0;
      }
      lVar33 = *(long *)(param_3[0x34] + 0xb8);
      if ((*(byte *)(lVar33 + 0x18) & 1) == 0) {
        lVar33 = lVar33 + 0x19;
      }
      else {
        lVar33 = *(long *)(lVar33 + 0x28);
      }
      lVar33 = FUN_00cc7618(lVar33);
      pcVar31 = "[SECOND_CHARACTER]";
      goto LAB_00abe254;
    }
    if (iVar28 == 3) {
      pbVar29 = *(byte **)(lVar33 + 0xb8);
      if ((*pbVar29 & 1) == 0) {
        pbVar29 = pbVar29 + 1;
      }
      else {
        pbVar29 = *(byte **)(pbVar29 + 0x10);
      }
      lVar33 = FUN_00cc7618(pbVar29);
      FUN_00e705c8(&local_100,"[FIRST_CHARACTER]");
      uVar30 = FUN_00e6ce7c(*(undefined8 *)(lVar33 + 0x18),0);
      FUN_00e71248(&local_e8,0,&local_100,uVar30);
      if (local_f8 != (void *)0x0) {
        operator_delete__(local_f8);
        local_100 = 0;
        local_f8 = (void *)0x0;
      }
      lVar33 = *(long *)(param_3[0x34] + 0xb8);
      if ((*(byte *)(lVar33 + 0x18) & 1) == 0) {
        lVar33 = lVar33 + 0x19;
      }
      else {
        lVar33 = *(long *)(lVar33 + 0x28);
      }
      lVar33 = FUN_00cc7618(lVar33);
      FUN_00e705c8(&local_100,"[SECOND_CHARACTER]");
      uVar30 = FUN_00e6ce7c(*(undefined8 *)(lVar33 + 0x18),0);
      FUN_00e71248(&local_e8,0,&local_100,uVar30);
      if (local_f8 != (void *)0x0) {
        operator_delete__(local_f8);
        local_100 = 0;
        local_f8 = (void *)0x0;
      }
      lVar33 = *(long *)(param_3[0x34] + 0xb8);
      if ((*(byte *)(lVar33 + 0x30) & 1) == 0) {
        lVar33 = lVar33 + 0x31;
      }
      else {
        lVar33 = *(long *)(lVar33 + 0x40);
      }
      lVar33 = FUN_00cc7618(lVar33);
      pcVar31 = "[THIRD_CHARACTER]";
      goto LAB_00abe254;
    }
  }
  FUN_00f0d75c(plVar3,&local_e8);
  if (local_e0 != (long *)0x0) {
    operator_delete__(local_e0);
    local_e8 = (code *)0x0;
    local_e0 = (long *)0x0;
  }
LAB_00abe2a8:
  bVar26 = (uVar27 & 1) == 0;
  ppuVar23 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  if (bVar26) {
    ppuVar23 = &PTR_s_build___Fonts_Brandon_Bold_30_fo_02be9c70;
  }
  ppuVar22 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  if (bVar26) {
    ppuVar22 = &PTR_s_build___Fonts_Brandon_Regular_30_02be9c38;
  }
  FUN_00f0d92c(param_3 + 0x1ac,*ppuVar23,&DAT_01bee7fa);
  FUN_00f0d92c(plVar7,*ppuVar22,&DAT_01bee7fa);
  uVar30 = FUN_00e6ce7c("MENU_MARKET_CARD_TILE_TIME_REMAINING",0);
  FUN_00b252ac(plVar7,uVar30,0,0);
  uVar30 = FUN_00e6ce7c("MENU_MARKET_CARD_ICEBOX_PURCHASE_BUTTON",0);
  thunk_FUN_00e7051c(&local_100,uVar30);
  FUN_00e70510(&local_118);
  FUN_00e70e18(&local_118,&DAT_01bb6d43,*(undefined4 *)(param_3[0x34] + 0xd0));
  FUN_00e705c8(&local_e8,"[NUMBER_OF_CARDS]");
  FUN_00e71248(&local_100,0,&local_e8,&local_118);
  if (local_e0 != (long *)0x0) {
    operator_delete__(local_e0);
    local_e8 = (code *)0x0;
    local_e0 = (long *)0x0;
  }
  FUN_00ab703c(0x42a00000,0x43480000,0x449c4000,plVar8,0,&local_100,&DAT_01bee7fa,&DAT_03218ef8,0);
  local_c0 = DAT_03210c90;
  local_e8 = thunk_FUN_00abffb4;
  local_d0[0] = 0;
  local_d0[1] = 0;
  local_d8 = (void *)0x0;
  local_e0 = param_3;
  FUN_009693a0(param_3 + 0x1ff,&local_e8);
  FUN_00f0d378(param_3 + 0x2e2,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  FUN_00f0da30(param_3 + 0x2e2,1);
  FUN_00b09144(0x3f000000,plVar8);
  if ((*(float *)(param_3 + 0x208) != 0.5) || (*(float *)((long)param_3 + 0x1044) != 0.5)) {
    param_3[0x208] = 0x3f0000003f000000;
    FUN_0091ada4(plVar8);
  }
  FUN_00ab74fc(0,0x41f00000,plVar8);
  FUN_00ab7628(0x43133333,plVar8);
  FUN_00b0914c(plVar8,1);
  FUN_00ab71fc(plVar8,1);
  pcVar31 = "glory_icon_small";
  if ((char)*plVar4 != '\0') {
    pcVar31 = "ice_icon_small";
  }
  FUN_00f0e548(plVar11,PTR_s_build___MenuPartsCommon_tga_02be3530,pcVar31);
  if ((*(float *)(param_3 + 0x6d1) != 0.0) || (*(float *)((long)param_3 + 0x368c) != 3.0)) {
    param_3[0x6d1] = 0x4040000000000000;
    FUN_0091ada4(plVar11);
  }
  local_e8 = (code *)0x3f00000000000000;
  (**(code **)(param_3[0x6c9] + 0x28))(plVar11,&local_e8);
  if ((*(float *)(param_3 + 0x6d2) != 0.9) || (*(float *)((long)param_3 + 0x3694) != 0.9)) {
    param_3[0x6d2] = 0x3f6666663f666666;
    FUN_0091ada4(plVar11);
  }
  FUN_00f0d378(plVar10,PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10);
  fVar34 = (float)FUN_00f0e700(plVar11);
  fVar35 = *(float *)((long)param_3 + 0x368c) + -3.0;
  if ((*(float *)(param_3 + 0x6ab) != fVar34) || (*(float *)((long)param_3 + 0x355c) != fVar35)) {
    *(float *)(param_3 + 0x6ab) = fVar34;
    *(float *)((long)param_3 + 0x355c) = fVar35;
    FUN_0091ada4(plVar10);
  }
  local_e8 = (code *)0x3f00000000000000;
  (**(code **)(param_3[0x6a3] + 0x28))(plVar10,&local_e8);
  FUN_00e70e18(&local_118,&DAT_01bb6d43,*(undefined4 *)(param_3[0x34] + 0xd4));
  FUN_00f0d75c(plVar10,&local_118);
  fVar34 = (float)FUN_00f01c54(plVar9,0,0,1,1);
  FUN_00f01c54(plVar9,0,0,1,1);
  fVar35 = fVar35 * -0.5 + 10.0;
  if ((*(float *)(param_3 + 0x694) != fVar34 * -0.5) ||
     (*(float *)((long)param_3 + 0x34a4) != fVar35)) {
    *(float *)(param_3 + 0x694) = fVar34 * -0.5;
    *(float *)((long)param_3 + 0x34a4) = fVar35;
    FUN_0091ada4(plVar9);
  }
  local_e8 = (code *)0x0;
  (**(code **)(param_3[0x68c] + 0x28))(plVar9,&local_e8);
  FUN_00f0e548(plVar13,PTR_s_build___MenuSkinsHeroesBlueprint_02be3630,"icon_card_gem_common");
  if ((*(float *)(param_3 + 0x708) != 0.5) || (*(float *)((long)param_3 + 0x3844) != 0.5)) {
    param_3[0x708] = 0x3f0000003f000000;
    FUN_0091ada4(plVar13);
  }
  if ((*(float *)(param_3 + 0x707) != 0.5) || (*(float *)((long)param_3 + 0x383c) != 0.5)) {
    param_3[0x707] = 0x3f0000003f000000;
    FUN_0091ada4(plVar13);
  }
  FUN_00f0e548(plVar14,PTR_s_build___MenuSkinsHeroesBlueprint_02be3630,"icon_card_gem_rare");
  if ((*(float *)(param_3 + 0x726) != 0.5) || (*(float *)((long)param_3 + 0x3934) != 0.5)) {
    param_3[0x726] = 0x3f0000003f000000;
    FUN_0091ada4(plVar14);
  }
  if ((*(float *)(param_3 + 0x725) != 0.5) || (*(float *)((long)param_3 + 0x392c) != 0.5)) {
    param_3[0x725] = 0x3f0000003f000000;
    FUN_0091ada4(plVar14);
  }
  FUN_00f0e548(plVar15,PTR_s_build___MenuSkinsHeroesBlueprint_02be3630,"icon_card_gem_epic");
  if ((*(float *)(param_3 + 0x744) != 0.5) || (*(float *)((long)param_3 + 0x3a24) != 0.5)) {
    param_3[0x744] = 0x3f0000003f000000;
    FUN_0091ada4(plVar15);
  }
  if ((*(float *)(param_3 + 0x743) != 0.5) || (*(float *)((long)param_3 + 0x3a1c) != 0.5)) {
    param_3[0x743] = 0x3f0000003f000000;
    FUN_0091ada4(plVar15);
  }
  FUN_00f0e548(plVar16,PTR_s_build___MenuSkinsHeroesBlueprint_02be3630,"icon_card_gem_legendary");
  if ((*(float *)(param_3 + 0x762) != 0.5) || (*(float *)((long)param_3 + 0x3b14) != 0.5)) {
    param_3[0x762] = 0x3f0000003f000000;
    FUN_0091ada4(plVar16);
  }
  if ((*(float *)(param_3 + 0x761) != 0.5) || (*(float *)((long)param_3 + 0x3b0c) != 0.5)) {
    param_3[0x761] = 0x3f0000003f000000;
    FUN_0091ada4(plVar16);
  }
  uVar30 = FUN_00d6eb50();
  uVar30 = FUN_00d6eb5c(uVar30,"*KindredMenuMarketEffects*");
  if ((*(float *)(param_3 + 0x818) != 0.5) || (*(float *)((long)param_3 + 0x40c4) != 0.5)) {
    param_3[0x818] = 0x3f0000003f000000;
    FUN_0091ada4(plVar17);
  }
  FUN_00afc274(plVar17,uVar30);
  FUN_00afd018(plVar17,"GEM_FX_COMMON");
  if ((*(float *)(param_3 + 0x817) != 3.5) || (*(float *)((long)param_3 + 0x40bc) != 3.5)) {
    lVar33 = NEON_fmov(0x40600000,4);
    param_3[0x817] = lVar33;
    FUN_0091ada4(plVar17);
  }
  FUN_00f13f08(0x43480000,0x43960000,plVar17);
  if ((*(float *)(param_3 + 0x854) != 0.5) || (*(float *)((long)param_3 + 0x42a4) != 0.5)) {
    param_3[0x854] = 0x3f0000003f000000;
    FUN_0091ada4(plVar18);
  }
  FUN_00afc274(plVar18,uVar30);
  FUN_00afd018(plVar18,"GEM_FX_RARE");
  if ((*(float *)(param_3 + 0x853) != 3.5) || (*(float *)((long)param_3 + 0x429c) != 3.5)) {
    lVar33 = NEON_fmov(0x40600000,4);
    param_3[0x853] = lVar33;
    FUN_0091ada4(plVar18);
  }
  FUN_00f13f08(0x43480000,0x43960000,plVar18);
  if ((*(float *)(param_3 + 0x890) != 0.5) || (*(float *)((long)param_3 + 0x4484) != 0.5)) {
    param_3[0x890] = 0x3f0000003f000000;
    FUN_0091ada4(plVar19);
  }
  FUN_00afc274(plVar19,uVar30);
  FUN_00afd018(plVar19,"GEM_FX_EPIC");
  if ((*(float *)(param_3 + 0x88f) != 3.5) || (*(float *)((long)param_3 + 0x447c) != 3.5)) {
    lVar33 = NEON_fmov(0x40600000,4);
    param_3[0x88f] = lVar33;
    FUN_0091ada4(plVar19);
  }
  FUN_00f13f08(0x43480000,0x43960000,plVar19);
  if ((*(float *)(param_3 + 0x8cc) != 0.5) || (*(float *)((long)param_3 + 0x4664) != 0.5)) {
    param_3[0x8cc] = 0x3f0000003f000000;
    FUN_0091ada4(plVar20);
  }
  FUN_00afc274(plVar20,uVar30);
  FUN_00afd018(plVar20,"GEM_FX_LEGENDARY");
  if ((*(float *)(param_3 + 0x8cb) != 3.0) || (*(float *)((long)param_3 + 0x465c) != 3.0)) {
    lVar33 = NEON_fmov(0x40400000,4);
    param_3[0x8cb] = lVar33;
    FUN_0091ada4(plVar20);
  }
  FUN_00f13f08(0x43480000,0x43960000,plVar20);
  ppuVar23 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  if ((uVar27 & 1) == 0) {
    ppuVar23 = &PTR_s_build___Fonts_Brandon_Regular_30_02be9c38;
  }
  FUN_00f0d92c(param_3 + 0x776,*ppuVar23,&DAT_01bee7fa);
  FUN_00f0d92c(param_3 + 0x79c,*ppuVar23,&DAT_01bee7fa);
  FUN_00f0d92c(param_3 + 0x7c2,*ppuVar23,&DAT_01bee7fa);
  FUN_00f0d92c(param_3 + 0x7e8,*ppuVar23,&DAT_01bee7fa);
  FUN_00af6d64(param_1,param_2,param_3 + 0x17);
  FUN_00abeca4(param_3);
  FUN_00abee34(param_3);
  FUN_00e6ce7c("MENU_MARKET_CARD_ICEBOX_TITLE",0);
  FUN_00e6ce7c("MENU_MARKET_CARD_ICEBOX_TEXT",0);
  FUN_00e6ce7c("MENU_MARKET_CARD_ICEBOX_TEXT_0",0);
  FUN_00e6ce7c("MENU_MARKET_CARD_ICEBOX_TEXT_1",0);
  FUN_00e6ce7c("MENU_MARKET_CARD_ICEBOX_TEXT_2",0);
  FUN_00e6ce7c("MENU_MARKET_CARD_ICEBOX_TEXT_3",0);
  FUN_00e6ce7c("MENU_MARKET_CARD_GLORYBOX_TITLE",0);
  FUN_00e6ce7c("MENU_MARKET_CARD_GLORYBOX_TEXT",0);
  if (local_110 != (void *)0x0) {
    operator_delete__(local_110);
    local_118 = 0;
    local_110 = (void *)0x0;
  }
  if (local_f8 != (void *)0x0) {
    operator_delete__(local_f8);
    local_100 = 0;
    local_f8 = (void *)0x0;
  }
  if (*(long *)(lVar25 + 0x28) == local_a0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

