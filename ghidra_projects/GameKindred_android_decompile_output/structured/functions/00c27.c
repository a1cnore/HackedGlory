// functions/00c27 — 24 functions
#include "libGameKindred.h"




void FUN_00c27008(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined4 uVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  byte local_b0 [16];
  void *local_a0;
  code *local_98;
  long *plStack_90;
  void *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x19;
  *param_1 = (long)&PTR_FUN_027f8f08;
  param_1[0x17] = 0;
  param_1[0x18] = (long)&PTR_FUN_027f9058;
  FUN_00f13ca4(plVar1);
  plVar2 = param_1 + 0x30;
  FUN_00f0ac5c(plVar2);
  FUN_00cd0c28(param_1 + 0x59);
  plVar3 = param_1 + 0xc1a;
  param_1[0xc19] = -1;
  param_1[0x59] = (long)&PTR_FUN_0280d618;
  FUN_00f0ac5c(plVar3);
  plVar4 = param_1 + 0xc43;
  FUN_00c278cc(plVar4);
  plVar5 = param_1 + 0xde3;
  FUN_00f0ac5c(plVar5);
  plVar6 = param_1 + 0xe0c;
  FUN_00c278cc(plVar6);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f0ad88(plVar2,param_1 + 0x59,1);
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f0ad88(plVar3,plVar4,1);
  FUN_00f023ec(plVar1,plVar5,1);
  FUN_00f0ad88(plVar5,plVar6,1);
  uVar10 = FUN_00937f24();
  puVar9 = PTR_s_build___VGX_common_atlas_02be3540;
  if ((uVar10 & 1) == 0) {
    FUN_008fa54c(&local_98,"earn_ice_tile_alt");
    FUN_008fa54c(local_b0,"earn_ice_tile_alt");
    FUN_00c93a88(plVar4,puVar9,&local_98,local_b0);
    (**(code **)(*plVar4 + 0xe8))(plVar4);
    if ((local_b0[0] & 1) != 0) {
      operator_delete(local_a0);
    }
    if (((ulong)local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    uVar11 = FUN_00e6ce7c("MENU_NEWS_FEED_TAB_NAME_COMING_SOON",0);
    FUN_00f0d75c(param_1 + 0xdbd,uVar11);
    FUN_00ecf888(plVar4,0);
  }
  else {
    FUN_008fa54c(&local_98,"market_tiles");
    FUN_008fa54c(local_b0,"market_tiles");
    FUN_00c93a88(plVar4,puVar9,&local_98,local_b0);
    (**(code **)(*plVar4 + 0xe8))(plVar4);
    if ((local_b0[0] & 1) != 0) {
      operator_delete(local_a0);
    }
    if (((ulong)local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    uVar11 = FUN_00e6ce7c("FREE_OFFER_POPUP_SECOND_BUTTON",0);
    FUN_00f0d75c(param_1 + 0xdbd,uVar11);
  }
  puVar9 = PTR_s_build___VGX_common_atlas_02be3540;
  FUN_008fa54c(&local_98,"earn_ice_tile");
  FUN_008fa54c(local_b0,"earn_ice_tile");
  FUN_00c93a88(plVar6,puVar9,&local_98,local_b0);
  (**(code **)(*plVar6 + 0xe8))(plVar6);
  if ((local_b0[0] & 1) != 0) {
    operator_delete(local_a0);
  }
  if (((byte)local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  lVar12 = FUN_00940be0();
  if (*(char *)(lVar12 + 0xc) == '\0') {
    uVar11 = FUN_00e6ce7c("MENU_NEWS_FEED_TAB_NAME_COMING_SOON",0);
    FUN_00f0d75c(param_1 + 0xf86,uVar11);
    FUN_00ecf888(plVar6,0);
  }
  else {
    uVar11 = FUN_00e6ce7c("FREE_OFFER_POPUP_THIRD_BUTTON",0);
    FUN_00f0d75c(param_1 + 0xf86,uVar11);
  }
  uVar7 = DAT_03210c64;
  local_98 = FUN_00c273fc;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = (void *)0x0;
  plStack_90 = param_1;
  local_70 = uVar7;
  FUN_009693a0(param_1 + 0xc44,&local_98);
  local_98 = FUN_00c27414;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = (void *)0x0;
  plStack_90 = param_1;
  local_70 = uVar7;
  FUN_009693a0(param_1 + 0xe0d,&local_98);
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c273c8(long *param_1)

{
  FUN_00c93a88();
                    /* WARNING: Could not recover jumptable at 0x00c273f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00c273f4(long param_1)

{
  FUN_00f0d75c(param_1 + 0xbd0);
  return;
}




void FUN_00c273fc(long param_1)

{
  if (*(undefined8 **)(param_1 + 0xb8) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c2740c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 0xb8))();
    return;
  }
  return;
}




void FUN_00c27414(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c27424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
    return;
  }
  return;
}




void FUN_00c2742c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_027f8f08;
  puVar1 = param_1 + 0x18;
  *puVar1 = &PTR_FUN_027f9058;
  FUN_00ec5428(puVar1);
  param_1[0xe0c] = &PTR_FUN_027f90a8;
  FUN_00f0d3a4(param_1 + 0xf86);
  FUN_00aad654(param_1 + 0xe0c);
  param_1[0xde3] = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0xdfa);
  FUN_00f13d08(param_1 + 0xde3);
  param_1[0xc43] = &PTR_FUN_027f90a8;
  FUN_00f0d3a4(param_1 + 0xdbd);
  FUN_00aad654(param_1 + 0xc43);
  param_1[0xc1a] = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0xc31);
  FUN_00f13d08(param_1 + 0xc1a);
  FUN_00cd2a74(param_1 + 0x59);
  param_1[0x30] = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x47);
  FUN_00f13d08(param_1 + 0x30);
  FUN_00f13d08(param_1 + 0x19);
  FUN_00ec543c(puVar1);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c2754c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f90a8;
  FUN_00f0d3a4(param_1 + 0x17a);
  FUN_00aad654(param_1);
  return;
}




void FUN_00c27584(long param_1)

{
  FUN_00c2742c(param_1 + -0xc0);
  return;
}




void FUN_00c2758c(void *param_1)

{
  FUN_00c2742c();
  operator_delete(param_1);
  return;
}




void FUN_00c275b0(long param_1)

{
  FUN_00c2742c((void *)(param_1 + -0xc0));
  operator_delete((void *)(param_1 + -0xc0));
  return;
}




void FUN_00c275d8(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  float fVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 local_78;
  void *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar7 = param_3 + 200;
  FUN_00f13f18(lVar7,&DAT_01bbc3d4);
  lVar1 = param_3 + 0x180;
  fVar9 = (float)FUN_00f13e54(lVar7);
  FUN_00f13e54(lVar7);
  FUN_00f13f08(fVar9 / 3.0,lVar1);
  lVar2 = param_3 + 0x60d0;
  fVar9 = (float)FUN_00f13e54(lVar7);
  FUN_00f13e54(lVar7);
  FUN_00f13f08(fVar9 / 3.0,lVar2);
  lVar3 = param_3 + 0x6f18;
  fVar9 = (float)FUN_00f13e54(lVar7);
  FUN_00f13e54(lVar7);
  FUN_00f13f08(fVar9 / 3.0,lVar3);
  uVar10 = (**(code **)(**(long **)(param_3 + 0x6238) + 0x48))();
  local_78 = CONCAT44(param_2,uVar10);
  FUN_00f13f18(param_3 + 0x6218,&local_78);
  uVar10 = (**(code **)(**(long **)(param_3 + 0x7080) + 0x48))();
  local_78 = CONCAT44(param_2,uVar10);
  FUN_00f13f18(param_3 + 0x7060,&local_78);
  if ((*(float *)(param_3 + 0x308) != 230.0) || (*(float *)(param_3 + 0x30c) != 600.0)) {
    *(undefined8 *)(param_3 + 0x308) = 0x4416000043660000;
    FUN_0091ada4(param_3 + 0x2c8);
  }
  if ((*(float *)(param_3 + 0x108) != 20.0) || (*(float *)(param_3 + 0x10c) != 20.0)) {
    uVar11 = NEON_fmov(0x41a00000,4);
    *(undefined8 *)(param_3 + 0x108) = uVar11;
    FUN_0091ada4(lVar7);
  }
  FUN_00f07b18(0x41a00000,lVar2,3,lVar1,1);
  FUN_00f07b18(0,lVar2,5,lVar1,5);
  FUN_00f07b18(0x41a00000,lVar3,3,lVar2,1);
  FUN_00f07b18(0,lVar3,5,lVar2,5);
  uVar6 = FUN_00ec5404();
  bVar5 = false;
  if ((uVar6 & 1) != 0) {
    lVar7 = FUN_00940be0(uVar6,0);
    bVar5 = *(char *)(lVar7 + 0xc) != '\0';
  }
  FUN_00ecf888(param_3 + 0x7060,bVar5);
  lVar7 = FUN_00940be0();
  if (*(char *)(lVar7 + 0xc) == '\0') {
    pcVar8 = "MENU_NEWS_FEED_TAB_NAME_COMING_SOON";
  }
  else {
    uVar6 = FUN_00ec5404();
    if ((uVar6 & 1) == 0) {
      FUN_00e705c8(&local_78,"...");
      FUN_00f0d75c(param_3 + 0x7c30,&local_78);
      if (local_70 != (void *)0x0) {
        operator_delete__(local_70);
        local_78 = 0;
        local_70 = (void *)0x0;
      }
      goto LAB_00c27848;
    }
    pcVar8 = "FREE_OFFER_POPUP_THIRD_BUTTON";
  }
  uVar11 = FUN_00e6ce7c(pcVar8,0);
  FUN_00f0d75c(param_3 + 0x7c30,uVar11);
LAB_00c27848:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c2787c(long param_1)

{
  FUN_00cd1e9c(param_1 + 0x2c8);
  return;
}




void FUN_00c27884(long param_1)

{
  if (*(undefined8 **)(param_1 + 0xb8) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c27894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 0xb8))();
    return;
  }
  return;
}




void FUN_00c2789c(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c278ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
    return;
  }
  return;
}




void FUN_00c278b4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c278bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))();
  return;
}




void FUN_00c278c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c278c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -0xc0) + 0x90))();
  return;
}




void FUN_00c278cc(long *param_1)

{
  long *plVar1;
  
  FUN_00c939c4(param_1,0);
  plVar1 = param_1 + 0x17a;
  *param_1 = (long)&PTR_FUN_027f90a8;
  FUN_00f0d160(plVar1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f0e9c0(param_1 + 0x138,0);
  FUN_00f0d378(plVar1,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  FUN_00f0d7fc(plVar1,&DAT_01bbc3d0);
  return;
}




void FUN_00c27950(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00c93b78();
  local_40 = (**(code **)(*param_3 + 0x48))(param_3);
  uStack_3c = param_2;
  FUN_00c93b48(param_3,&local_40);
  uVar2 = (**(code **)(*param_3 + 0x48))(param_3);
  fVar3 = 0.0;
  FUN_00f0db64(uVar2,0,0x3f800000,param_3 + 0x17a);
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_00f07940(0,fVar3 * 0.09,param_3 + 0x17a,4,param_3,4);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c27a18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f90a8;
  FUN_00f0d3a4(param_1 + 0x17a);
  FUN_00aad654(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c27a58(void)

{
  return;
}




void FUN_00c27a5c(void)

{
  return;
}




void FUN_00c27a60(void)

{
  return;
}




void FUN_00c27a64(void)

{
  return;
}




void FUN_00c27a68(long *param_1)

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
  long lVar15;
  undefined8 uVar16;
  undefined8 local_b0;
  undefined8 uStack_a8;
  code *local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  long local_70;
  
  lVar15 = tpidr_el0;
  local_70 = *(long *)(lVar15 + 0x28);
  FUN_00f0ac5c();
  param_1[0x29] = 0;
  *param_1 = (long)&PTR_FUN_027f9240;
  FUN_00b1f530();
  plVar1 = param_1 + 0x184;
  FUN_00f0c4bc(plVar1);
  plVar2 = param_1 + 0x1b1;
  FUN_00abbf0c();
  plVar3 = param_1 + 0x550;
  FUN_00abbf0c(plVar3);
  plVar4 = param_1 + 0x8ef;
  FUN_00abbf0c();
  plVar5 = param_1 + 0xc8e;
  FUN_00f0c4bc(plVar5);
  plVar6 = param_1 + 0xcbb;
  FUN_00abbf0c();
  plVar7 = param_1 + 0x105a;
  FUN_00abbf0c();
  plVar8 = param_1 + 0x13f9;
  FUN_00abbf0c();
  plVar9 = param_1 + 0x1798;
  FUN_00f0d160(plVar9);
  plVar10 = param_1 + 0x17be;
  FUN_00f0c4bc(plVar10);
  plVar11 = param_1 + 0x17eb;
  FUN_00abbf0c(plVar11);
  plVar12 = param_1 + 0x1b8a;
  FUN_00abbf0c(plVar12);
  plVar13 = param_1 + 0x1f29;
  FUN_00abbf0c(plVar13);
  plVar14 = param_1 + 0x22c8;
  FUN_00ab6c24(plVar14,0);
  *(undefined4 *)(param_1 + 0x2580) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2a,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f133a4(plVar1,plVar2,1);
  FUN_00f133a4(plVar1,plVar3,1);
  FUN_00f133a4(plVar1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  FUN_00f133a4(plVar5,plVar6,1);
  FUN_00f133a4(plVar5,plVar7,1);
  FUN_00f133a4(plVar5,plVar8,1);
  FUN_00f133a4(plVar5,plVar9,1);
  FUN_00f133a4(plVar5,plVar10,1);
  FUN_00f133a4(plVar10,plVar13,1);
  FUN_00f133a4(plVar10,plVar12,1);
  FUN_00f133a4(plVar10,plVar11,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar14,1);
  local_b0 = 0;
  uStack_a8 = 0;
  uVar16 = FUN_00e6ce7c("GOVERNMENT_ID_CHINESE_TAB",0);
  FUN_0090ea30(&local_b0,uVar16);
  uVar16 = FUN_00e6ce7c("GOVERNMENT_ID_FOREIGNER_TAB",0);
  FUN_0090ea30(&local_b0,uVar16);
  FUN_00b1fc3c(0x41f00000,0x43c80000,0,0x3f800000,0x3f800000,param_1 + 0x2a,&local_b0);
  local_78 = FUN_00f048a4("UI::EVENT_CONTROL_TOGGLED");
  local_a0 = FUN_00c2839c;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  local_98 = param_1;
  FUN_009693a0(param_1 + 0x2b,&local_a0);
  uVar16 = FUN_00e6ce7c("GOVERNMENT_ID_FORM_NAME",0);
  FUN_00abc73c(plVar2,uVar16);
  uVar16 = FUN_00e6ce7c("GOVERNMENT_ID_FORM_NAME",0);
  FUN_00ce1e34(plVar2,uVar16,&DAT_03210450,&DAT_03210450,0,0,0,0,0,1,0,0);
  FUN_00abcec0(plVar2,1);
  FUN_00abcee4(plVar2,1,0x20);
  uVar16 = FUN_00e6ce7c("GOVERNMENT_ID_FORM_CHINA_ID",0);
  FUN_00abc73c(plVar3,uVar16);
  uVar16 = FUN_00e6ce7c("GOVERNMENT_ID_FORM_CHINA_ID",0);
  FUN_00ce1e34(plVar3,uVar16,&DAT_03210450,&DAT_03210450,0,0,0,0,0,1,0,0);
  FUN_00abcec0(plVar3,1);
  FUN_00abcf78(plVar3,FUN_00c283c8);
  FUN_00abcee4(plVar3,1,0x12);
  FUN_00abced0(plVar3,1,0x12);
  uVar16 = FUN_00e6ce7c("GOVERNMENT_ID_FORM_PHONE",0);
  FUN_00abc73c(plVar4,uVar16);
  uVar16 = FUN_00e6ce7c("GOVERNMENT_ID_FORM_PHONE",0);
  FUN_00ce1e34(plVar4,uVar16,&DAT_03210450,&DAT_03210450,0,0,0,0,0,1,0,0);
  FUN_00abcee4(plVar4,1,0x20);
  FUN_00abced0(plVar4,1,8);
  uVar16 = FUN_00e6ce7c("GOVERNMENT_ID_FORM_NAME",0);
  FUN_00abc73c(plVar6,uVar16);
  uVar16 = FUN_00e6ce7c("GOVERNMENT_ID_FORM_NAME",0);
  FUN_00ce1e34(plVar6,uVar16,&DAT_03210450,&DAT_03210450,0,0,0,0,0,1,0,0);
  FUN_00abcee4(plVar6,1,0x40);
  FUN_00abced0(plVar6,1,2);
  uVar16 = FUN_00e6ce7c("GOVERNMENT_ID_FORM_PASSPORT",0);
  FUN_00abc73c(plVar7,uVar16);
  uVar16 = FUN_00e6ce7c("GOVERNMENT_ID_FORM_PASSPORT",0);
  FUN_00ce1e34(plVar7,uVar16,&DAT_03210450,&DAT_03210450,0,0,0,0,0,1,0,0);
  FUN_00abcf08(plVar7,1);
  FUN_00abcee4(plVar7,1,0x40);
  FUN_00abced0(plVar7,1,2);
  uVar16 = FUN_00e6ce7c("GOVERNMENT_ID_FORM_PHONE",0);
  FUN_00abc73c(plVar8,uVar16);
  uVar16 = FUN_00e6ce7c("GOVERNMENT_ID_FORM_PHONE",0);
  FUN_00ce1e34(plVar8,uVar16,&DAT_03210450,&DAT_03210450,0,0,0,0,0,1,0,0);
  FUN_00abcf28(plVar8,1);
  FUN_00abcee4(plVar8,1,0x40);
  FUN_00abced0(plVar8,1,2);
  FUN_00f0d92c(plVar9,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80,&DAT_01bee7fa);
  uVar16 = FUN_00e6ce7c("GOVERNMENT_ID_FORM_DOB",0);
  FUN_00f0d75c(plVar9,uVar16);
  FUN_00e705c8(&local_a0,&DAT_01bbc536);
  FUN_00abc73c(plVar13,&local_a0);
  if (local_98 != (long *)0x0) {
    operator_delete__(local_98);
    local_a0 = (code *)0x0;
    local_98 = (long *)0x0;
  }
  uVar16 = FUN_00e6ce7c("GOVERNMENT_ID_FORM_DOB",0);
  FUN_00ce1e34(plVar13,uVar16,&DAT_03210450,&DAT_03210450,0,0,0,0,0,1,0,0);
  FUN_00abcf18(plVar13,1);
  FUN_00abcee4(plVar13,1,4);
  FUN_00abced0(plVar13,1,4);
  FUN_00e705c8(&local_a0,"12");
  FUN_00abc73c(plVar12,&local_a0);
  if (local_98 != (long *)0x0) {
    operator_delete__(local_98);
    local_a0 = (code *)0x0;
    local_98 = (long *)0x0;
  }
  uVar16 = FUN_00e6ce7c("GOVERNMENT_ID_FORM_DOB",0);
  FUN_00ce1e34(plVar12,uVar16,&DAT_03210450,&DAT_03210450,0,0,0,0,0,1,0,0);
  FUN_00abcf18(plVar12,1);
  FUN_00abcee4(plVar12,1,2);
  FUN_00abced0(plVar12,1,1);
  FUN_00e705c8(&local_a0,"31");
  FUN_00abc73c(plVar11,&local_a0);
  if (local_98 != (long *)0x0) {
    operator_delete__(local_98);
    local_a0 = (code *)0x0;
    local_98 = (long *)0x0;
  }
  uVar16 = FUN_00e6ce7c("GOVERNMENT_ID_FORM_DOB",0);
  FUN_00ce1e34(plVar11,uVar16,&DAT_03210450,&DAT_03210450,0,0,0,0,0,1,0,0);
  FUN_00abcf18(plVar11,1);
  FUN_00abcee4(plVar11,1,2);
  FUN_00abced0(plVar11,1,1);
  *(uint *)((long)param_1 + 0x64f4) = *(uint *)((long)param_1 + 0x64f4) & 0xfffffffb;
  uVar16 = FUN_00e6ce7c("MENU_PROFILE_EDIT_SUBMIT_TYPE",0);
  FUN_00ab703c(0x42000000,0x42c80000,0x447a0000,plVar14,0,uVar16,&DAT_01bee7fa,&DAT_03218ef8,0);
  local_78 = DAT_03210c64;
  local_a0 = thunk_FUN_00c28e5c;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  local_98 = param_1;
  FUN_009693a0(param_1 + 0x22c9,&local_a0);
  FUN_0090eb54(&local_b0,1);
  if (*(long *)(lVar15 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

