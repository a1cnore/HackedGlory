// functions/00cc6 — 10 functions
#include "libGameKindred.h"




void FUN_00cc60f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280d120;
  FUN_00bb1ec4(param_1 + 0x4e3);
  thunk_FUN_00ed5534(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  return;
}




void FUN_00cc6138(void *param_1)

{
  FUN_00cc60f0();
  operator_delete(param_1);
  return;
}




void FUN_00cc615c(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  undefined8 local_48;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(&fStack_3c,&local_40);
  local_48 = 0;
  FUN_00b0877c(param_1,&local_48);
  fVar3 = local_40 + -100.0;
  uVar2 = FUN_00b07b80(fStack_3c + -200.0,param_1);
  local_48 = CONCAT44(fVar3,uVar2);
  FUN_00b07d08(fStack_3c + -200.0,local_40 + -100.0,param_1,0);
  FUN_00b0828c(param_1);
  FUN_00f13f18(param_1 + 0x2718,&local_48);
  FUN_00f13f18(param_1 + 0x1cf0,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cc6230(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x2c30);
  FUN_00cc627c();
  FUN_00b07a80(*param_1,param_1[1],pvVar1);
  FUN_00aa18e0(pvVar1,0,1,0,1);
  return;
}




void FUN_00cc627c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_00b06f74();
  *param_1 = &PTR_FUN_0280d250;
  FUN_00cc6388(param_1 + 0x39e);
  FUN_00b0780c(param_1,param_1 + 0x39e);
  uVar1 = FUN_00e6ce7c("MENU_HERO_MASTERY_TITLE",0);
  FUN_00b078b8(param_1,uVar1);
  return;
}




void FUN_00cc62e0(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  FUN_00b0877c(param_1,&local_40);
  uVar3 = 0x44a8c000;
  uVar2 = FUN_00b07b80(0x451c4000,param_1);
  local_40 = CONCAT44(uVar3,uVar2);
  FUN_00b07d08(0x451c4000,0x44a8c000,param_1,0);
  FUN_00f13f18(param_1 + 0x1cf0,&local_40);
  FUN_00b0828c(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cc6388(long *param_1)

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
  long lVar12;
  undefined8 uVar13;
  uint uVar14;
  
  FUN_00f0ac5c();
  plVar1 = param_1 + 0x29;
  *param_1 = (long)&PTR_FUN_0280d380;
  FUN_00f0ac5c(plVar1);
  plVar2 = param_1 + 0x52;
  FUN_00f0ac5c(plVar2);
  FUN_00f0ac5c();
  plVar3 = param_1 + 0xa4;
  FUN_00f0c714();
  FUN_00f13ca4();
  lVar12 = FUN_00f13624();
  plVar4 = param_1 + 0xd7;
  param_1[0xd6] = lVar12;
  FUN_00f0d160(plVar4);
  plVar5 = param_1 + 0xfd;
  FUN_00f0d160();
  plVar6 = param_1 + 0x123;
  FUN_00f0d160(plVar6);
  plVar7 = param_1 + 0x149;
  FUN_00f0d160(plVar7);
  plVar8 = param_1 + 0x16f;
  FUN_00f0e4a8(plVar8);
  plVar9 = param_1 + 0x18d;
  FUN_00f0e4a8(plVar9);
  plVar10 = param_1 + 0x1ab;
  FUN_00f0e4a8(plVar10);
  plVar11 = param_1 + 0x1c9;
  FUN_00f0e4a8(plVar11);
  param_1[0x1e7] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f0ad88(plVar1,plVar11,1);
  FUN_00f023ec(plVar11,plVar4,1);
  FUN_00f0ad88(plVar1,param_1 + 0x7b,1);
  FUN_00f0ad88(plVar1,plVar7,1);
  FUN_00f0ad88(plVar1,param_1 + 0xbf,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f0ad88(plVar2,plVar3,1);
  FUN_00f0ad88(plVar2,plVar9,1);
  FUN_00f0ad88(plVar2,plVar6,1);
  FUN_00f0ad88(plVar2,plVar10,1);
  FUN_00f0ad88(plVar2,plVar5,1);
  FUN_00f0e548(plVar8,PTR_s_build___SpoilsOfWarBg_png_02be3640,"full_loading_2k");
  FUN_00f0e6bc(0x3ecccccd,plVar8);
  uVar14 = *(uint *)((long)param_1 + 0xecc);
  if ((uVar14 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0xecc) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar11);
    uVar14 = *(uint *)((long)param_1 + 0xecc);
  }
  *(uint *)((long)param_1 + 0xecc) = uVar14 & 0xffffffbf;
  FUN_00f0e548(plVar11,PTR_s_build___MenuPartsCommon_tga_02be3530,"quest_item_highlight_mid");
  *(byte *)(param_1 + 0x1e4) = *(byte *)(param_1 + 0x1e4) | 1;
  FUN_00f0c774(plVar3,&DAT_01bee7f6);
  uVar14 = *(uint *)((long)param_1 + 0x5a4);
  if ((uVar14 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x5a4) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x5900;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0d92c(plVar4,PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98,&DAT_01bee7fa);
  uVar13 = FUN_00e6ce7c("MENU_EARN_MASTERY_XP",0);
  FUN_00f0d75c(plVar4,uVar13);
  FUN_00f0d92c(plVar5,PTR_s_build___Fonts_Brandon_Regular_60_02be9c58,&DAT_01bee7fa);
  uVar13 = FUN_00e6ce7c("HOW_TO_EARN_MASTERY_XP",0);
  FUN_00f0d75c(plVar5,uVar13);
  FUN_00f0e548(plVar9,PTR_s_build___InventoryCommon_atlas_02be34e0,"overview_hero_mastery_image_01")
  ;
  FUN_00f0e548(plVar10,PTR_s_build___InventoryCommon_atlas_02be34e0,"overview_hero_mastery_image_02"
              );
  FUN_00f0d92c(plVar6,PTR_s_build___Fonts_Brandon_Regular_60_02be9c58,&DAT_01bee7fa);
  uVar13 = FUN_00e6ce7c("HERO_MASTERY_DEDICATION_SHOW_EXPLANATION",0);
  FUN_00f0d75c(plVar6,uVar13);
  FUN_00f0d92c(plVar7,PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98,&DAT_01bee7fa);
  uVar13 = FUN_00e6ce7c("MENU_MASTERY_PROGRESSION_TITLE",0);
  FUN_00f0d75c(plVar7,uVar13);
  FUN_00f13fd8(param_1 + 0xbf,param_1[0xd6]);
  return;
}




void FUN_00cc6750(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  FUN_00f13f18(param_1 + 0xb78,param_1 + 0xf38);
  lVar1 = param_1 + 0xe48;
  FUN_00f13f08(*(undefined4 *)(param_1 + 0xf38),0x43480000,lVar1);
  lVar2 = param_1 + 0x3d8;
  FUN_00f13f08(*(float *)(param_1 + 0xf38) * 0.4,0x43160000,lVar2);
  lVar3 = param_1 + 0x5f8;
  fVar10 = *(float *)(param_1 + 0xf3c) * 0.6 + -50.0;
  FUN_00f13f08(*(float *)(param_1 + 0xf38) * 0.4 + -100.0,fVar10,lVar3);
  fVar9 = *(float *)(param_1 + 0xf38);
  fVar11 = *(float *)(param_1 + 0xf3c);
  FUN_00f0e700(lVar1);
  FUN_00f13f08(fVar9 * 0.6,fVar11 - fVar10,param_1 + 0x520);
  lVar4 = param_1 + 0x6b8;
  FUN_00f0db64(*(float *)(param_1 + 0xf38) * 0.3,0,0x3f800000,lVar4);
  fVar9 = *(float *)(param_1 + 0xf38);
  lVar5 = param_1 + 0xc68;
  lVar6 = param_1 + 0x918;
  fVar10 = (float)FUN_00f0eac0(lVar5);
  FUN_00f0dad0((fVar9 * 0.6 - fVar10) + -50.0,lVar6,1);
  fVar9 = *(float *)(param_1 + 0xf38);
  lVar7 = param_1 + 0xd58;
  lVar8 = param_1 + 0x7e8;
  fVar10 = (float)FUN_00f0eac0(lVar7);
  FUN_00f0dad0((fVar9 * 0.6 - fVar10) + -50.0,lVar8,1);
  FUN_00cc6ab4(param_1);
  FUN_00f07940(0,0,lVar1,4,param_1,4);
  FUN_00f07940(0x42480000,0,lVar4,7,lVar1,7);
  FUN_00f07b18(0x42480000,lVar2,0,lVar1,2);
  FUN_00f07b18(0,lVar2,3,lVar1,3);
  FUN_00f07b18(0,lVar3,0,lVar2,2);
  FUN_00f07b18(0,lVar3,4,lVar2,4);
  FUN_00f07940(0,0,param_1 + 0xa48,8,lVar2,8);
  FUN_00f07b18(0x42480000,lVar8,3,lVar4,1);
  FUN_00f07b18(0,lVar8,5,lVar4,5);
  FUN_00f07b18(0,param_1 + 0x290,3,param_1 + 0x148,1);
  FUN_00f07b18(0,param_1 + 0x290,0,param_1 + 0x148,0);
  FUN_00f07940(0,0,lVar5,0,lVar2,1);
  FUN_00f07b18(0,lVar6,3,lVar5,1);
  FUN_00f07b18(0,lVar6,5,lVar5,5);
  FUN_00f07b18(0xc2480000,lVar7,0,lVar5,2);
  FUN_00f07b18(0,lVar7,3,lVar5,3);
  FUN_00f07b18(0,lVar8,3,lVar7,1);
  FUN_00f07b18(0,lVar8,5,lVar7,5);
  FUN_00f07940(0,0,param_1 + 0x520,1,lVar1,2);
  return;
}




void FUN_00cc6ab4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  ulong uVar15;
  uint local_b0 [2];
  ulong local_a8;
  void *local_a0;
  long local_98;
  
  lVar2 = tpidr_el0;
  local_98 = *(long *)(lVar2 + 0x28);
  lVar1 = param_1 + 0x5f8;
  iVar11 = 1;
  FUN_00f019d4(lVar1,1);
  uVar4 = FUN_00cc7004(lVar1,1);
  uVar5 = FUN_00f136e0();
  FUN_00f13fd8(uVar4,uVar5);
  plVar6 = (long *)FUN_00bdd12c(uVar4,1);
  local_a8 = CONCAT44(local_a8._4_4_,0xffb6acaa);
  FUN_00f0d92c(plVar6,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88,&local_a8);
  uVar7 = FUN_00e6ce7c("HERO_MASTERY_STAR_TITLE",0);
  (**(code **)(*plVar6 + 0x138))(plVar6,uVar7);
  fVar13 = (float)FUN_00f13e54(lVar1);
  FUN_00f0db64(fVar13 * 0.4,0,0x3f800000,plVar6);
  uVar7 = FUN_00cc706c(uVar4,1);
  fVar13 = (float)FUN_00f13e54(lVar1);
  FUN_00f13f68(uVar7,(ulong)(uint)(int)(fVar13 * 0.5) | 0x300000000);
  local_a8 = local_a8 & 0xffffffffffff0000;
  FUN_00f14070(uVar7,&local_a8);
  FUN_00f1515c(uVar5,plVar6,0,2);
  FUN_00f1515c(uVar5,uVar7,0,2);
  uVar7 = FUN_00cc7004(lVar1,1);
  uVar8 = FUN_00f136e0();
  FUN_00f13fd8(uVar7,uVar8);
  plVar6 = (long *)FUN_00bdd12c(uVar7,1);
  local_a8 = CONCAT44(local_a8._4_4_,0xffb6acaa);
  FUN_00f0d92c(plVar6,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88,&local_a8);
  uVar9 = FUN_00e6ce7c("HERO_MASTERY_XP_TITLE",0);
  (**(code **)(*plVar6 + 0x138))(plVar6,uVar9);
  fVar13 = (float)FUN_00f13e54(lVar1);
  uVar15 = 0;
  FUN_00f0db64(fVar13 * 0.4,0,0x3f800000,plVar6);
  uVar9 = FUN_00cc706c(uVar7,1);
  fVar13 = (float)FUN_00f13e54(lVar1);
  FUN_00f13f68(uVar9,(ulong)(uint)(int)(fVar13 * 0.5) | 0x300000000);
  local_a8 = local_a8 & 0xffffffffffff0000;
  FUN_00f14070(uVar9,&local_a8);
  FUN_00f1515c(uVar8,plVar6,0,2);
  FUN_00f1515c(uVar8,uVar9,0,2);
  do {
    fVar14 = (float)uVar15;
    plVar6 = (long *)FUN_00bdd12c(uVar7,1);
    local_a8 = CONCAT44(local_a8._4_4_,0xffb6acaa);
    FUN_00f0d92c(plVar6,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90,&local_a8);
    FUN_00f0dac8(plVar6,3);
    fVar13 = (float)FUN_00f13e54(lVar1);
    FUN_00f0dad0(fVar13 * 0.3,plVar6,1);
    uVar3 = FUN_00ccf248(iVar11);
    FUN_00e70510(&local_a8);
    FUN_00e70e18(&local_a8,&DAT_01bb6d43,uVar3);
    (**(code **)(*plVar6 + 0x138))(plVar6,&local_a8);
    FUN_00f1515c(uVar8,plVar6,0,10);
    uVar9 = FUN_00cc70d4(uVar4,1);
    fVar13 = (float)FUN_00f13e54(lVar1);
    (**(code **)(*plVar6 + 0x48))(plVar6);
    FUN_00f13f68(uVar9,CONCAT44((int)fVar14,(int)(fVar13 * 0.5)));
    local_b0[0] = local_b0[0] & 0xffff0000;
    FUN_00f14070(uVar9,local_b0);
    iVar12 = 0;
    plVar6 = (long *)0x0;
    do {
      plVar10 = (long *)FUN_00a4c67c(uVar9,1);
      FUN_00f0e548(plVar10,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_star");
      uVar15 = 0x42a00000;
      FUN_00f13f08(0x42a00000,plVar10);
      local_b0[0] = 0xffb6acaa;
      FUN_00f0e670(plVar10,local_b0,2);
      if (iVar12 == 0) {
        fVar13 = (float)FUN_00f13e54(lVar1);
        fVar14 = (float)(**(code **)(*plVar10 + 0x48))(plVar10);
        uVar15 = (ulong)(uint)*(float *)(plVar10 + 8);
        fVar13 = (fVar13 * 0.5 - fVar14) + -50.0;
        if ((*(float *)(plVar10 + 8) != fVar13) ||
           (uVar15 = (ulong)(uint)*(float *)((long)plVar10 + 0x44),
           *(float *)((long)plVar10 + 0x44) != 0.0)) {
          *(float *)(plVar10 + 8) = fVar13;
          *(undefined4 *)((long)plVar10 + 0x44) = 0;
          FUN_0091ada4(plVar10);
        }
      }
      else {
        FUN_00f07b18(0x80000000,plVar10,1,plVar6,3);
        FUN_00f07b18(0,plVar10,0,plVar6,0);
      }
      iVar12 = iVar12 + 1;
      plVar6 = plVar10;
    } while (iVar11 != iVar12);
    FUN_00f1515c(uVar5,uVar9,0,2);
    if (local_a0 != (void *)0x0) {
      operator_delete__(local_a0);
      local_a8 = 0;
      local_a0 = (void *)0x0;
    }
    fVar13 = (float)uVar15;
    iVar11 = iVar11 + 1;
  } while (iVar11 != 6);
  uVar5 = FUN_00cc706c(lVar1,1);
  FUN_00f13e54(lVar1);
  FUN_00f13f68(uVar5,(ulong)(uint)(int)fVar13 << 0x20 | 3);
  local_a8 = local_a8 & 0xffffffffffff0000;
  FUN_00f14070(uVar5,&local_a8);
  FUN_00f1515c(*(undefined8 *)(param_1 + 0x6b0),uVar4,0,3);
  FUN_00f1515c(*(undefined8 *)(param_1 + 0x6b0),uVar5,0,3);
  FUN_00f1515c(*(undefined8 *)(param_1 + 0x6b0),uVar7,0,3);
  if (*(long *)(lVar2 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cc6ff0(undefined4 param_1,undefined4 param_2,long *param_3)

{
  *(undefined4 *)(param_3 + 0x1e7) = param_1;
  *(undefined4 *)((long)param_3 + 0xf3c) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00cc7000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x138))();
  return;
}

