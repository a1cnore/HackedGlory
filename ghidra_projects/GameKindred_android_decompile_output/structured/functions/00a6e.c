// functions/00a6e — 13 functions
#include "libGameKindred.h"




undefined4 FUN_00a6e020(uint param_1)

{
  if (param_1 < 7) {
    return *(undefined4 *)(&DAT_01ba1280 + (long)(int)param_1 * 4);
  }
  return 3;
}




bool FUN_00a6e040(ushort *param_1,uint param_2)

{
  uint uVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  ushort *puVar5;
  
  uVar1 = *param_1 & 0x1f;
  if (uVar1 == 0x1f) {
    bVar3 = true;
  }
  else {
    uVar2 = *param_1 >> 10;
    if ((uVar2 & 0x1f) != 0) {
      uVar4 = 0;
      puVar5 = param_1 + 4;
      do {
        if (*puVar5 == param_2) goto LAB_00a6e088;
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 0x1c;
      } while (uVar4 < (uVar2 & 0x1f));
    }
    uVar4 = 0x1f;
LAB_00a6e088:
    bVar3 = true;
    if (uVar4 != uVar1) {
      bVar3 = (1 << (ulong)(uVar4 & 0x1f) & (uint)param_1[(ulong)uVar1 * 0x1c + 5]) != 0;
    }
  }
  return bVar3;
}




void FUN_00a6e0b8(long param_1,ulong param_2)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_01bee7fa;
  if ((param_2 & 1) == 0) {
    puVar1 = &DAT_01bee7f6;
  }
  FUN_00f0e670(param_1 + 0x140,puVar1,2);
  return;
}




void FUN_00a6e0dc(long *param_1)

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
  undefined4 uVar14;
  long lVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 uVar18;
  ulong uVar19;
  undefined8 uVar20;
  code *local_a8;
  long *plStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  long local_78;
  
  lVar15 = tpidr_el0;
  local_78 = *(long *)(lVar15 + 0x28);
  FUN_00f13ca4();
  param_1[0x17] = 0;
  *param_1 = (long)&PTR_FUN_027cce50;
  plVar1 = param_1 + 0x19;
  *(undefined4 *)(param_1 + 0x18) = DAT_03214ce8;
  FUN_00b89cd8(plVar1);
  plVar2 = param_1 + 0x32;
  FUN_00f13ca4(plVar2);
  plVar3 = param_1 + 0x49;
  FUN_00a291cc();
  plVar4 = param_1 + 0x69;
  FUN_00a291cc();
  plVar5 = param_1 + 0x89;
  FUN_00a291cc(plVar5);
  plVar6 = param_1 + 0xa9;
  FUN_00a291cc();
  plVar7 = param_1 + 0xc9;
  FUN_00a291cc();
  FUN_00a50608();
  FUN_00f017e8();
  plVar8 = param_1 + 0x5f9;
  param_1[0x5e8] = (long)&PTR_FUN_027c1f80;
  FUN_00f017e8(plVar8);
  plVar9 = param_1 + 0x60a;
  param_1[0x5f9] = (long)&PTR_FUN_027c1f80;
  FUN_00a6e9e0(plVar9);
  plVar10 = param_1 + 0x660;
  FUN_00a6e9e0(plVar10);
  plVar11 = param_1 + 0x6b6;
  FUN_00a6e9e0(plVar11);
  plVar12 = param_1 + 0x70c;
  FUN_00a6e9e0(plVar12);
  param_1[0x762] = 0;
  plVar13 = param_1 + 0x765;
  *(byte *)((long)param_1 + 0x3b2a) =
       (byte)(((uint)(*(byte *)((long)param_1 + 0x3b2a) >> 4) << 0x14) >> 0x10) | 1;
  *(short *)plVar13 = 0;
  uVar16 = FUN_00e6a474("HUD_Utils");
  uVar17 = FUN_0091ed5c("HUD_Utils",uVar16,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0x80000000 |
       *(uint *)((long)param_1 + 0x84) & 0x7fff | (uVar17 & 0xffff) << 0xf;
  FUN_00a6eb28(param_1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00f023ec(plVar2,plVar4,1);
  FUN_00f023ec(plVar2,plVar5,1);
  FUN_00f023ec(plVar5,plVar6,1);
  FUN_00f023ec(plVar2,plVar7,1);
  FUN_00f023ec(plVar2,param_1 + 0xe9,1);
  FUN_00f023ec(plVar2,param_1 + 0x5e8,1);
  FUN_00f023ec(plVar8,plVar9,1);
  FUN_00f023ec(plVar8,plVar10,1);
  FUN_00f023ec(plVar8,plVar11,1);
  FUN_00f023ec(plVar8,plVar12,1);
  *(uint *)((long)param_1 + 0x214) = *(uint *)((long)param_1 + 0x214) | 4;
  FUN_00f0e548(plVar3,PTR_s_build___HUDPartsCommon_atlas_02be3440,"hud_icon_recall");
  FUN_00ceace8();
  uVar19 = FUN_00ceaf74();
  if ((uVar19 & 1) == 0) {
    uVar17 = *(uint *)((long)param_1 + 0x2cc) & 0xfffffffb;
  }
  else {
    *(uint *)((long)param_1 + 0x2cc) = *(uint *)((long)param_1 + 0x2cc) | 0x10;
    (**(code **)(param_1[0x49] + 0x40))(0x40e00000,plVar3);
    if ((*(float *)(param_1 + 0x53) != 0.5) || (*(float *)((long)param_1 + 0x29c) != 0.5)) {
      param_1[0x53] = 0x3f0000003f000000;
      FUN_0091ada4(plVar3);
    }
    local_80 = DAT_03210f58;
    local_a8 = FUN_00a6eb98;
    local_90 = 0;
    local_88 = 0;
    local_98 = 0;
    plStack_a0 = param_1;
    FUN_009693a0(param_1 + 0x4a,&local_a8);
    local_a8 = FUN_00a6eb98;
    local_80 = DAT_03210f84;
    local_90 = 0;
    local_88 = 0;
    local_98 = 0;
    plStack_a0 = param_1;
    FUN_009693a0(param_1 + 0x4a,&local_a8);
    uVar16 = FUN_00e6a474("HUD_Utils_Button_Withdraw");
    uVar17 = FUN_0091ed5c("HUD_Utils_Button_Withdraw",uVar16,0x1234);
    uVar17 = *(uint *)((long)param_1 + 0x2cc) & 0x80000000 |
             *(uint *)((long)param_1 + 0x2cc) & 0x7fff | (uVar17 & 0xffff) << 0xf;
  }
  *(uint *)((long)param_1 + 0x2cc) = uVar17;
  *(short *)plVar13 = (short)*plVar13 + 1;
  FUN_00f0e548(plVar4,PTR_s_build___HUDPartsCommon_atlas_02be3440,"hud_icon_score");
  *(uint *)((long)param_1 + 0x3cc) = *(uint *)((long)param_1 + 0x3cc) | 0x10;
  (**(code **)(param_1[0x69] + 0x40))(0x40e00000,plVar4);
  if ((*(float *)(param_1 + 0x73) != 0.5) || (*(float *)((long)param_1 + 0x39c) != 0.5)) {
    param_1[0x73] = 0x3f0000003f000000;
    FUN_0091ada4(plVar4);
  }
  plVar1 = param_1 + 0x6a;
  uVar16 = DAT_03210f58;
  local_a8 = FUN_00a6eba0;
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  local_80 = uVar16;
  FUN_009693a0(plVar1,&local_a8);
  uVar14 = DAT_03210f84;
  local_a8 = FUN_00a6eba0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 1;
  plStack_a0 = param_1;
  local_80 = uVar14;
  FUN_009693a0(plVar1,&local_a8);
  local_80 = DAT_03210f60;
  local_a8 = FUN_00a6ebac;
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_009693a0(plVar1,&local_a8);
  local_a8 = FUN_00a6ebac;
  local_80 = DAT_03210f8c;
  local_98 = 0;
  local_90 = 0;
  local_88 = 1;
  plStack_a0 = param_1;
  FUN_009693a0(plVar1,&local_a8);
  uVar18 = FUN_00e6a474("HUD_Utils_Button_Scoreboard");
  uVar17 = FUN_0091ed5c("HUD_Utils_Button_Scoreboard",uVar18,0x1234);
  *(uint *)((long)param_1 + 0x3cc) =
       *(uint *)((long)param_1 + 0x3cc) & 0x80000000 |
       *(uint *)((long)param_1 + 0x3cc) & 0x7fff | (uVar17 & 0xffff) << 0xf;
  *(short *)plVar13 = (short)*plVar13 + 1;
  FUN_00f0e548(plVar5,PTR_s_build___HUDPartsCommon_atlas_02be3440,"hud_icon_shop");
  *(uint *)((long)param_1 + 0x4cc) = *(uint *)((long)param_1 + 0x4cc) | 0x10;
  (**(code **)(param_1[0x89] + 0x40))(0x40e00000,plVar5);
  if ((*(float *)(param_1 + 0x93) != 0.5) || (*(float *)((long)param_1 + 0x49c) != 0.5)) {
    param_1[0x93] = 0x3f0000003f000000;
    FUN_0091ada4(plVar5);
  }
  local_a8 = FUN_00a6eb98;
  local_98 = 0;
  local_90 = 0;
  local_88 = 2;
  plStack_a0 = param_1;
  local_80 = uVar16;
  FUN_009693a0(param_1 + 0x8a,&local_a8);
  local_a8 = FUN_00a6eb98;
  local_98 = 0;
  local_90 = 0;
  local_88 = 2;
  plStack_a0 = param_1;
  local_80 = uVar14;
  FUN_009693a0(param_1 + 0x8a,&local_a8);
  uVar18 = FUN_00e6a474("HUD_Utils_Button_Shop");
  uVar17 = FUN_0091ed5c("HUD_Utils_Button_Shop",uVar18,0x1234);
  *(uint *)((long)param_1 + 0x4cc) =
       *(uint *)((long)param_1 + 0x4cc) & 0x80000000 |
       *(uint *)((long)param_1 + 0x4cc) & 0x7fff | (uVar17 & 0xffff) << 0xf;
  FUN_00f0e548(plVar6,PTR_s_build___HUDPartsCommon_atlas_02be3440,"hud_icon_shopGlow");
  if ((*(uint *)((long)param_1 + 0x5cc) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x5cc) = *(uint *)((long)param_1 + 0x5cc) & 0xffff807f;
    FUN_0091ada4(plVar6);
  }
  if ((*(float *)(param_1 + 0xb3) != 0.5) || (*(float *)((long)param_1 + 0x59c) != 0.5)) {
    param_1[0xb3] = 0x3f0000003f000000;
    FUN_0091ada4(plVar6);
  }
  *(short *)plVar13 = (short)*plVar13 + 1;
  FUN_00f0e548(plVar7,PTR_s_build___HUDPartsCommon_atlas_02be3440,"hud_icon_help");
  *(uint *)((long)param_1 + 0x6cc) = *(uint *)((long)param_1 + 0x6cc) | 0x10;
  (**(code **)(param_1[0xc9] + 0x40))(0x40e00000,plVar7);
  if ((*(float *)(param_1 + 0xd3) != 0.5) || (*(float *)((long)param_1 + 0x69c) != 0.5)) {
    param_1[0xd3] = 0x3f0000003f000000;
    FUN_0091ada4(plVar7);
  }
  plVar1 = param_1 + 0xca;
  local_a8 = FUN_00a6eb98;
  local_98 = 0;
  local_90 = 0;
  local_88 = 3;
  plStack_a0 = param_1;
  local_80 = uVar16;
  FUN_009693a0(plVar1,&local_a8);
  local_a8 = FUN_00a6eb98;
  local_98 = 0;
  local_90 = 0;
  local_88 = 3;
  plStack_a0 = param_1;
  local_80 = uVar14;
  FUN_009693a0(plVar1,&local_a8);
  uVar19 = FUN_0093d83c();
  if ((uVar19 & 1) != 0) {
    local_80 = DAT_03210fa4;
    local_a8 = FUN_00a6ebb8;
    local_98 = 0;
    local_90 = 0;
    local_88 = 3;
    plStack_a0 = param_1;
    FUN_009693a0(plVar1,&local_a8);
  }
  uVar16 = FUN_00e6a474("HUD_Utils_Button_Help");
  uVar17 = FUN_0091ed5c("HUD_Utils_Button_Help",uVar16,0x1234);
  *(uint *)((long)param_1 + 0x6cc) =
       *(uint *)((long)param_1 + 0x6cc) & 0x80000000 |
       *(uint *)((long)param_1 + 0x6cc) & 0x7fff | (uVar17 & 0xffff) << 0xf;
  *(short *)plVar13 = (short)*plVar13 + 1;
  uVar20 = FUN_00e6ce7c("HUD_TOOLTIP_LEARN",0);
  FUN_00f0d75c(param_1 + 0x639,uVar20);
  uVar17 = *(uint *)((long)param_1 + 0x30d4);
  *(uint *)((long)param_1 + 0x30d4) = uVar17 & 0xfffffffb;
  if ((uVar17 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x30d4) = uVar17 & 0xffff807b | 0x3300;
    FUN_0091ada4(plVar9);
  }
  uVar20 = FUN_00e6ce7c("HUD_TOOLTIP_SCORE",0);
  FUN_00f0d75c(param_1 + 0x68f,uVar20);
  uVar17 = *(uint *)((long)param_1 + 0x3384);
  *(uint *)((long)param_1 + 0x3384) = uVar17 & 0xfffffffb;
  if ((uVar17 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x3384) = uVar17 & 0xffff807b | 0x3300;
    FUN_0091ada4(plVar10);
  }
  uVar20 = FUN_00e6ce7c("HUD_TOOLTIP_SHOP",0);
  FUN_00f0d75c(param_1 + 0x6e5,uVar20);
  uVar17 = *(uint *)((long)param_1 + 0x3634);
  *(uint *)((long)param_1 + 0x3634) = uVar17 & 0xfffffffb;
  if ((uVar17 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x3634) = uVar17 & 0xffff807b | 0x3300;
    FUN_0091ada4(plVar11);
  }
  uVar20 = FUN_00e6ce7c("HUD_TOOLTIP_RECALL",0);
  FUN_00f0d75c(param_1 + 0x73b,uVar20);
  uVar17 = *(uint *)((long)param_1 + 0x38e4);
  *(uint *)((long)param_1 + 0x38e4) = uVar17 & 0xfffffffb;
  if ((uVar17 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x38e4) = uVar17 & 0xffff807b | 0x3300;
    FUN_0091ada4(plVar12);
  }
  *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) | 8;
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 4;
  if (*(long *)(lVar15 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a6e9e0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  
  FUN_00f017e8();
  plVar1 = param_1 + 0x11;
  *param_1 = (long)&PTR_FUN_027c9b08;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x2f;
  FUN_00f0d160(plVar2);
  *(undefined1 *)(param_1 + 0x55) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f0e548(plVar1,PTR_s_build___HUDPartsCommon_atlas_02be3440,"util_button_bubble");
  if ((*(float *)(param_1 + 0x1b) != 0.5) || (*(float *)((long)param_1 + 0xdc) != 0.5)) {
    param_1[0x1b] = 0x3f0000003f000000;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0d378(plVar2,PTR_s_build___Fonts_Avenir_Medium_24_f_02be9cf0);
  uVar3 = *(uint *)((long)param_1 + 0x1fc);
  if ((uVar3 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x1fc) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x6600;
    FUN_0091ada4(plVar2);
  }
  if ((*(float *)(param_1 + 0x39) == 0.5) && (*(float *)((long)param_1 + 0x1cc) == 0.5)) {
    return;
  }
  param_1[0x39] = 0x3f0000003f000000;
  FUN_0091ada4(plVar2);
  return;
}




void FUN_00a6eb28(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_01980628();
  if ((((uVar2 & 1) != 0) || (iVar1 = FUN_0092f28c(), iVar1 == 1)) &&
     (uVar2 = FUN_00ceab64(), (uVar2 & 1) == 0)) {
    FUN_00a296a8(param_1 + 0x248,0xd);
    FUN_00a296a8(param_1 + 0x348,0xc);
    FUN_00a296a8(param_1 + 0x448,0xe);
    FUN_00a52044(param_1 + 0x748,0xf);
    return;
  }
  return;
}




void FUN_00a6eb98(undefined8 param_1)

{
  undefined8 in_x4;
  
  FUN_00a6ff1c(param_1,in_x4);
  return;
}




void FUN_00a6eba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00a70150(param_1,param_4,param_5);
  return;
}




void FUN_00a6ebac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00a70240(param_1,param_4,param_5);
  return;
}




void FUN_00a6ebb8(undefined8 param_1)

{
  undefined8 in_x4;
  
  FUN_00a6fff8(param_1,in_x4);
  return;
}




void FUN_00a6ebc0(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x14c) =
       *(uint *)(param_1 + 0x14c) & 0xfffffff0 | *(uint *)(param_1 + 0x14c) & 7 | (param_2 & 1) << 3
  ;
  return;
}




void FUN_00a6ebd4(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *(long *)(param_1 + 0xb8) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0x30);
  if ((*(float *)(param_1 + 0x1e0) != 1.0) || (*(float *)(param_1 + 0x1e4) != 0.5)) {
    *(undefined8 *)(param_1 + 0x1e0) = 0x3f0000003f800000;
    FUN_0091ada4(param_1 + 400);
  }
  FUN_00ceace8();
  uVar4 = FUN_00ceae88();
  if ((uVar4 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x32f8) = 1;
    *(undefined1 *)(param_1 + 0x35a8) = 1;
    *(undefined1 *)(param_1 + 0x3858) = 1;
    *(undefined1 *)(param_1 + 0x3b08) = 1;
    uVar5 = FUN_00a6ed38(uVar4,param_1 + 0x3050,1);
    uVar5 = FUN_00a6ed38(uVar5,param_1 + 0x3300,1);
    uVar5 = FUN_00a6ed38(uVar5,param_1 + 0x35b0,1);
    FUN_00a6ed38(uVar5,param_1 + 0x3860,1);
  }
  local_60 = *(undefined4 *)(param_2 + 0x30);
  local_68 = param_2 + 0x28;
  FUN_00a51f90(param_1 + 0x748,&local_68);
  uVar2 = FUN_00e6a474("HUD_Utils_Quickbuy");
  uVar3 = FUN_0091ed5c("HUD_Utils_Quickbuy",uVar2,0x1234);
  *(uint *)(param_1 + 0x7cc) =
       *(uint *)(param_1 + 0x7cc) & 0x80000000 |
       *(uint *)(param_1 + 0x7cc) & 0x7fff | (uVar3 & 0xffff) << 0xf;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a6ed38(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  
  lVar1 = DAT_03210d00;
  if (((param_3 & 1) == 0) && (*(char *)(param_2 + 0x2a8) == '\0')) {
    uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar3 == 0xffff) {
      puVar4 = (ushort *)0x0;
    }
    else {
      puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
      if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = *puVar4;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efcad4(puVar4);
      *(undefined ***)puVar4 = &PTR_FUN_02825268;
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00efcac4(0x3f800000,puVar4);
    lVar1 = DAT_03210d00;
    uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar3 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
      if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = *puVar7;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efc8e8(puVar7);
      *(undefined ***)puVar7 = &PTR_FUN_02825148;
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00f01980(param_2);
  }
  else {
    uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar3 == 0xffff) {
      puVar4 = (ushort *)0x0;
    }
    else {
      puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
      if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = *puVar4;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efcad4(puVar4);
      *(undefined ***)puVar4 = &PTR_FUN_02825220;
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00efcac4(0x3f800000,puVar4);
    lVar1 = DAT_03210d00;
    uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar3 == 0xffff) {
      puVar5 = (ushort *)0x0;
    }
    else {
      puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
      if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = *puVar5;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efdd74(puVar5);
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00efddc4(0x3e4ccccd,puVar5);
    FUN_00efcac4(0x3f800000,puVar5);
    lVar1 = DAT_03210d00;
    uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar3 == 0xffff) {
      puVar6 = (ushort *)0x0;
    }
    else {
      puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
      if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = *puVar6;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efdd74(puVar6);
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00efddc4(0x3ecccccd,puVar6);
    FUN_00efcac4(0x3f800000,puVar6);
    lVar1 = DAT_03210d00;
    uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar3 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
      if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = *puVar7;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efd208(puVar7);
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00efd2dc(puVar7,puVar5,puVar6,0);
    uVar2 = *(uint *)(param_2 + 0x84);
    if ((uVar2 & 0x7f80) != 0) {
      *(uint *)(param_2 + 0x84) = uVar2 & 0xffff807f;
      FUN_0091ada4(param_2);
      uVar2 = *(uint *)(param_2 + 0x84);
    }
    *(uint *)(param_2 + 0x84) = uVar2 | 4;
    FUN_00f01980(param_2);
  }
  FUN_00f02308(param_2,puVar4,puVar7,0);
  return;
}

