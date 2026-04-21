// functions/00cd3 — 7 functions
#include "libGameKindred.h"




void FUN_00cd3074(undefined8 *param_1)

{
  FUN_00f017e8();
  *param_1 = &PTR_FUN_0280d9f0;
  param_1[0x11] = &PTR_FUN_0280daf8;
  FUN_00f0e4a8(param_1 + 0x12);
  FUN_00f017e8(param_1 + 0x30);
  param_1[0x30] = &PTR_FUN_027c1f80;
  FUN_00b12bd8(param_1 + 0x41,0);
  FUN_00f13ca4(param_1 + 0xd7);
  FUN_00af6b6c(param_1 + 0xee);
  FUN_00f017e8(param_1 + 0x10b);
  param_1[0x10b] = &PTR_FUN_027c1f80;
  FUN_00f11234(param_1 + 0x11c);
  FUN_00ecfd6c(param_1 + 0x150,0);
  FUN_00f0bdbc(param_1 + 0x1f7,1);
  param_1[0x1f7] = &PTR_FUN_027ccd08;
  FUN_00f0d160(param_1 + 0x210);
  FUN_00f0d160(param_1 + 0x236);
  FUN_00f0e4a8(param_1 + 0x25c);
  FUN_00f0fe84(param_1 + 0x27a);
  FUN_00f0bdbc(param_1 + 0x2a4,0);
  param_1[0x2a4] = &PTR_FUN_027c3260;
  FUN_00f0d160(param_1 + 0x2bd);
  FUN_00aba378(param_1 + 0x2e3,0);
  FUN_00ab63f8(param_1 + 0x771);
  FUN_00b1a9d4(param_1 + 0x849);
  FUN_00aea298(param_1 + 0x8e4);
  FUN_00cd0d40(param_1 + 0xbc0);
  FUN_00cd31c4(param_1);
  return;
}




void FUN_00cd31c4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  uint *puVar9;
  undefined **ppuVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  byte local_b8 [16];
  void *local_a8;
  code *local_a0;
  long *plStack_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  undefined4 local_78;
  long local_70;
  
  lVar12 = tpidr_el0;
  local_70 = *(long *)(lVar12 + 0x28);
  plVar1 = param_1 + 0x12;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 0x30;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f023ec(plVar2,param_1 + 0x41,1);
  FUN_00f023ec(plVar2,param_1 + 0xd7,1);
  FUN_00f023ec(plVar2,param_1 + 0xee,1);
  plVar5 = param_1 + 0x27a;
  FUN_00f023ec(plVar2,plVar5,1);
  plVar3 = param_1 + 0x10b;
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00f023ec(plVar3,param_1 + 0x25c,1);
  plVar2 = param_1 + 0x11c;
  FUN_00f023ec(plVar3,plVar2,1);
  FUN_00f023ec(plVar2,param_1 + 0x150,1);
  plVar4 = param_1 + 0x1f7;
  FUN_00ed026c(param_1 + 0x150,plVar4,1);
  plVar6 = param_1 + 0x210;
  FUN_00f023ec(plVar4,plVar6,1);
  plVar7 = param_1 + 0x236;
  FUN_00f023ec(plVar4,plVar7,1);
  plVar4 = param_1 + 0x2a4;
  FUN_00f023ec(plVar3,plVar4,1);
  FUN_00f023ec(plVar4,param_1 + 0x849,1);
  plVar8 = param_1 + 0x2e3;
  FUN_00f023ec(plVar4,plVar8,1);
  FUN_00f023ec(plVar8,param_1 + 0x771,1);
  FUN_00f023ec(plVar8,param_1 + 0x2bd,1);
  plVar4 = param_1 + 0x8e4;
  FUN_00f023ec(plVar3,plVar4,1);
  uVar13 = FUN_0092ea9c();
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  uVar11 = *(uint *)((long)param_1 + 0x114);
  if ((uVar11 & 0x7f80) != 0x3900) {
    *(uint *)((long)param_1 + 0x114) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x3900;
    FUN_0091ada4(plVar1);
  }
  local_78 = DAT_03210f58;
  local_a0 = thunk_FUN_00cd4a48;
  local_88 = 0;
  local_80 = (void *)0x0;
  local_90 = (void *)0x0;
  plStack_98 = param_1;
  FUN_009693a0(param_1 + 0x13,&local_a0);
  local_a0 = thunk_FUN_00cd4a48;
  local_78 = DAT_03210f84;
  local_88 = 0;
  local_80 = (void *)0x0;
  local_90 = (void *)0x0;
  plStack_98 = param_1;
  FUN_009693a0(param_1 + 0x13,&local_a0);
  *(uint *)((long)param_1 + 0x114) = *(uint *)((long)param_1 + 0x114) | 0x10;
  FUN_00b13264(param_1 + 0x41,1);
  *(undefined1 *)(param_1 + 0x10a) = 1;
  *(uint *)((long)param_1 + 0x73c) = *(uint *)((long)param_1 + 0x73c) | 0x10;
  FUN_00f0e540(param_1 + 0x25c,PTR_s_build___Chests_tga_02be35c0);
  FUN_00f112f0(plVar2,1);
  FUN_00f0d92c(plVar6,PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0,&DAT_01bee7fa);
  FUN_00f0da30(plVar6,1);
  ppuVar10 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
  if ((uVar13 & 1) == 0) {
    ppuVar10 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  FUN_00f0d92c(plVar7,*ppuVar10,&DAT_01bee7fa);
  FUN_00f0da28(0x3f4ccccd,plVar7);
  FUN_00f0d378(param_1 + 0x2bd,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80);
  uVar14 = FUN_00e6ce7c("GENERIC_DIALOG_OPEN",0);
  FUN_00ab703c(0x41c00000,0x438c0000,0x445c0000,plVar8,0,uVar14,&DAT_01bee7fa,&DAT_03218ef8,0);
  FUN_00ab7628(0x43200000,plVar8);
  FUN_00f0d92c(param_1 + 0x3c7,PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0,&DAT_01bee7fa);
  FUN_00f0da30(param_1 + 0x3c7,1);
  plVar1 = param_1 + 0x2e4;
  local_78 = DAT_03210c90;
  local_a0 = thunk_FUN_00cd4e40;
  local_88 = 0;
  local_80 = (void *)0x0;
  local_90 = (void *)0x0;
  plStack_98 = param_1;
  FUN_009693a0(plVar1,&local_a0);
  local_78 = DAT_03210c88;
  local_a0 = thunk_FUN_00cd4eb4;
  local_88 = 0;
  local_80 = (void *)0x0;
  local_90 = (void *)0x0;
  plStack_98 = param_1;
  FUN_009693a0(plVar1,&local_a0);
  local_78 = DAT_03210c8c;
  local_a0 = thunk_FUN_00cd4f94;
  local_88 = 0;
  local_80 = (void *)0x0;
  local_90 = (void *)0x0;
  plStack_98 = param_1;
  FUN_009693a0(plVar1,&local_a0);
  FUN_00ab95f4(0x3f800000,plVar8);
  FUN_00b09144(0,plVar8);
  FUN_00b0914c(plVar8,1);
  FUN_00ab71fc(plVar8,1);
  FUN_00b1ace4(param_1 + 0x849,1);
  FUN_00ab703c(0,0x43c80000,0x43c80000,plVar4,0,&DAT_03210450,&DAT_01bee7fa,&DAT_03218ef8,0);
  FUN_00ab7520(plVar4,1);
  FUN_00ab7598(0,plVar4,&DAT_01bee7f6);
  FUN_00ab75b0(0,plVar4,&DAT_01bee7fa);
  FUN_00f0d378(param_1 + 0x9c8,PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78);
  puVar15 = DAT_0313ddd8;
  if ((DAT_0313ddc8 & 1) == 0) {
    puVar15 = &DAT_0313ddc9;
  }
  uVar13 = FUN_00937f1c();
  if (((uVar13 & 1) != 0) && (puVar15 = &DAT_0313ddf9, (DAT_0313ddf8 & 1) != 0)) {
    puVar15 = DAT_0313de08;
  }
  FUN_008fa54c(local_b8,puVar15);
  uVar14 = FUN_00e6ce7c("MENU_DIALOG_MYSTERY_CHEST_WHATS_INSIDE",0);
  FUN_008fcdb8(&local_a0,local_b8);
  thunk_FUN_00e7051c(&local_88,uVar14);
  local_78 = 0x101;
  FUN_00aea30c(plVar4,&local_a0);
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = 0;
    local_80 = (void *)0x0;
  }
  if (((ulong)local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  puVar9 = (uint *)((long)param_1 + 0x47a4);
  uVar11 = *puVar9;
  if ((uVar11 & 0x7f80) != 0x5900) {
    *puVar9 = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x5900;
    FUN_0091ada4(plVar4);
  }
  FUN_00f0ff6c(plVar5,PTR_s_build___MenuPartsCommon_tga_02be3530);
  FUN_00f0ff74(plVar5,"gradient_rect_top_left",0,0,0,"gradient_rect_top_middle",0,0,0,
               "gradient_rect_top_right",0,0,0,"gradient_rect_middle_left",0,0,0,0,0,0,0,
               "gradient_rect_middle_right",0,0,0,"gradient_rect_bottom_left",0,0,0,
               "gradient_rect_bottom_middle",0,0,0,"gradient_rect_bottom_right",0,0,0);
  FUN_00f105ec(plVar5,&DAT_01bee7fa,2);
  *puVar9 = *puVar9 | 4;
  if (*(long *)(lVar12 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cd38fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280d9f0;
  param_1[0x11] = &PTR_FUN_0280daf8;
  FUN_00cd0dac(param_1 + 0xbc0);
  param_1[0x8e4] = &PTR_FUN_027d9188;
  if ((void *)param_1[0xbbe] != (void *)0x0) {
    operator_delete__((void *)param_1[0xbbe]);
    param_1[0xbbe] = 0;
    param_1[0xbbd] = 0;
  }
  if ((*(byte *)(param_1 + 0xbba) & 1) != 0) {
    operator_delete((void *)param_1[0xbbc]);
  }
  param_1[0xb9c] = &PTR_FUN_028266f0;
  param_1[0xbb3] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xbb6);
  FUN_00f13d08(param_1 + 0xb9c);
  FUN_009c7fa8(param_1 + 0x8e4);
  param_1[0x849] = &PTR_FUN_027dd280;
  FUN_00f0d3a4(param_1 + 0x8bd);
  FUN_00f0d3a4(param_1 + 0x897);
  FUN_00f13d08(param_1 + 0x87e);
  param_1[0x860] = &PTR_FUN_028266f0;
  param_1[0x877] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x87a);
  FUN_00f13d08(param_1 + 0x860);
  FUN_00f13d08(param_1 + 0x849);
  FUN_00ab6ad4(param_1 + 0x771);
  param_1[0x752] = &PTR_FUN_028266f0;
  param_1[0x769] = &PTR_FUN_02826850;
  param_1[0x2e3] = &PTR_FUN_027d51f0;
  FUN_00f0a79c(param_1 + 0x76c);
  FUN_00f13d08(param_1 + 0x752);
  param_1[0x734] = &PTR_FUN_028266f0;
  param_1[0x74b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x74e);
  FUN_00f13d08(param_1 + 0x734);
  FUN_00f0d3a4(param_1 + 0x70e);
  param_1[0x6f0] = &PTR_FUN_028266f0;
  param_1[0x707] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x70a);
  FUN_00f13d08(param_1 + 0x6f0);
  FUN_00f01868(param_1 + 0x6df);
  param_1[0x6c1] = &PTR_FUN_028266f0;
  param_1[0x6d8] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6db);
  FUN_00f13d08(param_1 + 0x6c1);
  param_1[0x2e3] = &PTR_FUN_027d5058;
  FUN_00f13d08(param_1 + 0x68a);
  FUN_00f01868(param_1 + 0x679);
  FUN_00f13d08(param_1 + 0x645);
  FUN_00f01868(param_1 + 0x634);
  FUN_00f0d3a4(param_1 + 0x60e);
  FUN_00f0d3a4(param_1 + 0x5e8);
  param_1[0x5ca] = &PTR_FUN_028266f0;
  param_1[0x5e1] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x5e4);
  FUN_00f13d08(param_1 + 0x5ca);
  param_1[0x5ac] = &PTR_FUN_028266f0;
  param_1[0x5c3] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x5c6);
  FUN_00f13d08(param_1 + 0x5ac);
  FUN_00f01868(param_1 + 0x59b);
  FUN_009c7fa8(param_1 + 0x2e3);
  FUN_00f0d3a4(param_1 + 0x2bd);
  FUN_00f13d08(param_1 + 0x2a4);
  param_1[0x27a] = &PTR_FUN_02826f38;
  param_1[0x291] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x294);
  FUN_00f13d08(param_1 + 0x27a);
  param_1[0x25c] = &PTR_FUN_028266f0;
  param_1[0x273] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x276);
  FUN_00f13d08(param_1 + 0x25c);
  FUN_00f0d3a4(param_1 + 0x236);
  FUN_00f0d3a4(param_1 + 0x210);
  FUN_00f13d08(param_1 + 0x1f7);
  FUN_00ed00e0(param_1 + 0x150);
  FUN_00f13d08(param_1 + 0x11c);
  FUN_00f01868(param_1 + 0x10b);
  param_1[0xee] = &PTR_FUN_027da660;
  param_1[0xff] = &PTR_FUN_027da778;
  if ((*(byte *)(param_1 + 0x105) & 1) != 0) {
    operator_delete((void *)param_1[0x107]);
  }
  FUN_0199fb94(param_1 + 0x102);
  FUN_00f01868(param_1 + 0xee);
  FUN_00f13d08(param_1 + 0xd7);
  param_1[0xac] = &PTR_FUN_02826f38;
  param_1[0xc3] = &PTR_FUN_02827098;
  param_1[0x41] = &PTR_FUN_027dc928;
  FUN_00f0a79c(param_1 + 0xc6);
  FUN_00f13d08(param_1 + 0xac);
  param_1[0x82] = &PTR_FUN_02826f38;
  param_1[0x99] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x9c);
  FUN_00f13d08(param_1 + 0x82);
  param_1[0x58] = &PTR_FUN_02826f38;
  param_1[0x6f] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x72);
  FUN_00f13d08(param_1 + 0x58);
  FUN_00f13d08(param_1 + 0x41);
  FUN_00f01868(param_1 + 0x30);
  param_1[0x12] = &PTR_FUN_028266f0;
  param_1[0x29] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2c);
  FUN_00f13d08(param_1 + 0x12);
  param_1[0x11] = &PTR_FUN_027e0a68;
  FUN_0096bd60(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00cd3d5c(long param_1)

{
  FUN_00cd38fc(param_1 + -0x88);
  return;
}




void FUN_00cd3d64(void *param_1)

{
  FUN_00cd38fc();
  operator_delete(param_1);
  return;
}




void FUN_00cd3d88(long param_1)

{
  FUN_00cd38fc((void *)(param_1 + -0x88));
  operator_delete((void *)(param_1 + -0x88));
  return;
}




void FUN_00cd3db0(long param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  char *pcVar8;
  byte local_e0 [16];
  void *local_d0;
  byte local_c8;
  void *local_b8;
  byte local_b0;
  void *local_a0;
  byte local_98;
  void *local_88;
  byte local_80;
  undefined1 auStack_7f [15];
  undefined1 *local_70;
  byte local_68;
  void *local_58;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  pcVar1 = (char *)(param_1 + 0x5e00);
  FUN_00cd4008(pcVar1);
  uVar6 = FUN_00cce574();
  FUN_00cce198(local_e0,uVar6,param_1 + 0x5e10);
  bVar4 = *(byte *)(param_1 + 0x5f90);
  if ((bVar4 & 1) == 0) {
    if (bVar4 >> 1 == 0) goto LAB_00cd3e2c;
  }
  else if (*(long *)(param_1 + 0x5f98) == 0) goto LAB_00cd3e2c;
  FUN_0096bce8((byte *)(param_1 + 0x5f90),param_1 + 0x88,param_1);
LAB_00cd3e2c:
  puVar2 = auStack_7f;
  if ((local_80 & 1) != 0) {
    puVar2 = local_70;
  }
  FUN_00f0e578(param_1 + 0x12e0,puVar2);
  if (*pcVar1 == '\0') {
    uVar7 = FUN_00cd70a4(pcVar1);
    if ((uVar7 & 1) == 0) {
      FUN_00caf12c(param_1 + 0x5e50,param_1 + 0x1718);
      FUN_00caf368(param_1 + 0x5e50,param_1 + 0x4248);
      pcVar8 = "MARKET_LABEL_BUY_KEY";
    }
    else {
      FUN_00caf12c(param_1 + 0x5e98,param_1 + 0x1718);
      FUN_00caf368(param_1 + 0x5e98,param_1 + 0x4248);
      pcVar8 = "MARKET_LABEL_USE_KEY";
    }
    uVar6 = FUN_00e6ce7c(pcVar8,0);
    FUN_00f0d75c(param_1 + 0x15e8,uVar6);
    FUN_00f0d75c(param_1 + 0x1080,param_1 + 0x5f30);
    FUN_00f0d7fc(param_1 + 0x1080,param_1 + 0x5f50);
    FUN_00f0d75c(param_1 + 0x11b0,param_1 + 0x5f58);
  }
  uVar7 = FUN_00cd6ff4(pcVar1);
  puVar3 = &DAT_0313dd1c;
  if ((uVar7 & 1) == 0) {
    puVar3 = &DAT_0313dd20;
  }
  FUN_00ab7570(0x3f800000,param_1 + 0x1718,puVar3);
  FUN_00ab7588(0x3f800000,param_1 + 0x1718,puVar3);
  FUN_00cd4128(param_1);
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_c8 & 1) != 0) {
    operator_delete(local_b8);
  }
  if ((local_e0[0] & 1) != 0) {
    operator_delete(local_d0);
  }
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

