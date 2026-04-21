// functions/00c42 — 10 functions
#include "libGameKindred.h"




void FUN_00c42090(undefined1 param_1 [16],undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  float fVar4;
  undefined8 uVar5;
  
  FUN_00f13db4();
  uVar5 = (**(code **)(*param_3 + 0x48))(param_3);
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_00f13f08((float)uVar5 + (float)uVar5,(float)param_2 + (float)param_2,param_3 + 0x17);
  plVar1 = param_3 + 0x35;
  FUN_00f13f08(uVar5,param_2,plVar1);
  plVar2 = param_3 + 0x56;
  FUN_00f13f08(uVar5,param_2,plVar2);
  FUN_00c42230(uVar5,param_2,param_3);
  plVar3 = param_3 + 0xba;
  fVar4 = (float)FUN_00f0e700(plVar2);
  FUN_00f0db64(fVar4 + -48.0,0,0x3f800000,plVar3);
  FUN_00f07940(0,0xc2480000,param_3 + 0x17,4,param_3,4);
  FUN_00f07940(0,0,plVar1,8,param_3,8);
  FUN_00f07940(0,0,plVar2,8,plVar1,8);
  fVar4 = 0.0;
  FUN_00f07940(0,0,param_3 + 0x74,0,plVar2,0);
  param_3 = param_3 + 0x94;
  FUN_00f0d548(param_3);
  FUN_00f07940(0,fVar4 * 0.25,param_3,6,plVar1,8);
  FUN_00f07b18(0xc1f00000,plVar3,0,param_3,2);
  FUN_00f07b18(0,plVar3,4,param_3,4);
  return;
}




void FUN_00c42230(float param_1,float param_2,long param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_3 + 1000);
  fVar3 = param_1 / *(float *)(param_3 + 0x700);
  fVar4 = param_2 / *(float *)(param_3 + 0x704);
  if ((fVar1 != fVar3) || (fVar2 = *(float *)(param_3 + 0x3ec), fVar2 != fVar4)) {
    *(float *)(param_3 + 1000) = fVar3;
    *(float *)(param_3 + 0x3ec) = fVar4;
    FUN_0091ada4(param_3 + 0x3a0);
    fVar1 = *(float *)(param_3 + 1000);
    fVar2 = *(float *)(param_3 + 0x3ec);
  }
  FUN_00f13f08(param_1 / fVar1,param_2 / fVar2,param_3 + 0x3a0);
  return;
}




void FUN_00c422ac(undefined1 param_1 [16],float param_2,long *param_3)

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
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  float fVar14;
  undefined4 local_178 [2];
  undefined **local_170 [23];
  undefined **local_b8;
  undefined1 auStack_a0 [32];
  long local_80;
  
  lVar12 = tpidr_el0;
  local_80 = *(long *)(lVar12 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_3 + 0x17;
  *param_3 = (long)&PTR_FUN_027fb958;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_3 + 0x35;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_3 + 0x53;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_3 + 0x71;
  FUN_00f11234(plVar4);
  plVar5 = param_3 + 0xa5;
  FUN_00f0e4a8(plVar5);
  plVar6 = param_3 + 0xc3;
  FUN_00f0e4a8(plVar6);
  plVar7 = param_3 + 0xe1;
  FUN_00f0e4a8(plVar7);
  plVar8 = param_3 + 0xff;
  FUN_00f0e4a8(plVar8);
  plVar9 = param_3 + 0x11d;
  FUN_00f0d160();
  plVar10 = param_3 + 0x143;
  FUN_00f0d160(plVar10);
  (**(code **)(*param_3 + 0x78))(param_3,plVar1,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar2,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar3,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar4,1);
  FUN_00f023ec(plVar4,plVar5,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar8,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar6,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar7,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar9,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar10,1);
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  uVar11 = *(uint *)((long)param_3 + 0x13c);
  if ((uVar11 & 0x7f80) != 0xa00) {
    *(uint *)((long)param_3 + 0x13c) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0xa00;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0e548(plVar2,PTR_s_build___VGX_common_atlas_02be3540,"global_panel_scroll_fade");
  uVar11 = *(uint *)((long)param_3 + 0x22c);
  if ((uVar11 & 0x7f80) != 0x1180) {
    *(uint *)((long)param_3 + 0x22c) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x1180;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0e4a8(local_170);
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  local_178[0] = 0xff00004c;
  FUN_00f0e670(plVar3,local_178,2);
  FUN_00f112f0(plVar4,1);
  FUN_00f0e548(plVar5,PTR_s_build___VGX_common_atlas_02be3540,"global_brushstroke_01");
  local_178[0] = 0xff141472;
  FUN_00f0e670(plVar5,local_178,2);
  FUN_00f0e9c0(plVar5,1);
  FUN_00f0e548(plVar8,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e548(plVar6,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e548(plVar7,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  uVar11 = *(uint *)((long)param_3 + 0x69c);
  if ((uVar11 & 0x7f80) != 0x1680) {
    *(uint *)((long)param_3 + 0x69c) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x1680;
    FUN_0091ada4(plVar6);
  }
  uVar11 = *(uint *)((long)param_3 + 0x78c);
  if ((uVar11 & 0x7f80) != 0x1680) {
    *(uint *)((long)param_3 + 0x78c) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x1680;
    FUN_0091ada4(plVar7);
  }
  FUN_00f0d378(plVar9,PTR_s_build___Fonts_Brandon_Bold_130_f_02be9cb0);
  local_178[0] = 0xffc8bebe;
  FUN_00f0d92c(plVar10,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40,local_178);
  uVar13 = FUN_00e6ce7c("MAIN_MATCH_CONFIRM_TITLE",0);
  FUN_00f0d75c(plVar9,uVar13);
  uVar13 = FUN_00e6ce7c("MAIN_MATCH_CONFIRM_SUBTITLE",0);
  FUN_00f0d75c(plVar10,uVar13);
  FUN_00f0e700(plVar8);
  fVar14 = param_2 + 48.0;
  FUN_00f0d548(plVar9);
  FUN_00f13f68(param_3,(ulong)(uint)(int)(fVar14 + param_2 + 48.0) << 0x20);
  local_178[0] = CONCAT22(local_178[0]._2_2_,0x3d);
  FUN_00f14070(param_3,local_178);
  local_170[0] = &PTR_FUN_028266f0;
  local_b8 = &PTR_FUN_02826850;
  FUN_00f0a79c(auStack_a0);
  FUN_00f13d08(local_170);
  if (*(long *)(lVar12 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c42730(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  float fVar9;
  undefined4 local_90;
  float fStack_8c;
  long local_88;
  
  lVar5 = tpidr_el0;
  local_88 = *(long *)(lVar5 + 0x28);
  FUN_00f13db4();
  uVar8 = (**(code **)(*param_3 + 0x48))(param_3);
  (**(code **)(*param_3 + 0x48))(param_3);
  plVar1 = param_3 + 0x53;
  fVar9 = param_2;
  FUN_00f0d548(param_3 + 0x11d);
  fVar9 = fVar9 + 48.0 + 48.0;
  FUN_00f13f08(uVar8,plVar1);
  plVar2 = param_3 + 0x71;
  local_90 = FUN_00f0e700(plVar1);
  fStack_8c = fVar9;
  FUN_00f13f18(plVar2,&local_90);
  FUN_00f0e700(plVar1);
  FUN_00f0e74c(param_3 + 0xa5,(int)(fVar9 * 5.0));
  FUN_00f13f08(uVar8,0x3f800000,param_3 + 0xc3);
  FUN_00f13f08(uVar8,0x3f800000,param_3 + 0xe1);
  plVar3 = param_3 + 0xff;
  FUN_00f13f08(uVar8,0x41000000,plVar3);
  plVar7 = param_3 + 0x17;
  uVar6 = (**(code **)(*param_3 + 0x118))(param_3);
  FUN_00f13f08(uVar8,param_2 - (float)(uVar6 >> 0x20),plVar7);
  plVar4 = param_3 + 0x35;
  FUN_00f0e700(plVar4);
  FUN_00f13f08(uVar8,plVar4);
  FUN_00f07940(0,0,plVar2,8,plVar1,8);
  FUN_00f07940(0,0,param_3 + 0xa5,8,plVar2,8);
  FUN_00f07940(0,0,plVar3,4,plVar1,6);
  FUN_00f07940(0,0xc1c00000,param_3 + 0x143,6,plVar3,4);
  FUN_00f07940(0,0,param_3 + 0x11d,8,plVar1,8);
  FUN_00f07940(0,0,plVar7,4,plVar3,6);
  FUN_00f07940(0,0,plVar4,6,plVar7,6);
  FUN_00f07940(0,0,param_3 + 0xc3,4,plVar1,4);
  FUN_00f07940(0,0,param_3 + 0xe1,6,plVar7,6);
  if (*(long *)(lVar5 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00c429c8(void *param_1)

{
  FUN_00c40a5c();
  operator_delete(param_1);
  return;
}




void FUN_00c429ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fb810;
  FUN_00f0d3a4(param_1 + 0xba);
  FUN_00f0d3a4(param_1 + 0x94);
  param_1[0x74] = &PTR_FUN_028266f0;
  param_1[0x8b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x8e);
  FUN_00f13d08(param_1 + 0x74);
  param_1[0x56] = &PTR_FUN_028266f0;
  param_1[0x6d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x70);
  FUN_00f13d08(param_1 + 0x56);
  param_1[0x35] = &PTR_FUN_02827290;
  param_1[0x4c] = &PTR_FUN_028273f8;
  FUN_00f0a79c(param_1 + 0x53);
  param_1[0x35] = &PTR_FUN_028266f0;
  param_1[0x4c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4f);
  FUN_00f13d08(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c42adc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fbaa0;
  param_1[0x4c] = &PTR_FUN_028266f0;
  param_1[99] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x66);
  FUN_00f13d08(param_1 + 0x4c);
  param_1[0x2e] = &PTR_FUN_028266f0;
  param_1[0x45] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x48);
  FUN_00f13d08(param_1 + 0x2e);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c42b64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fbaa0;
  param_1[0x4c] = &PTR_FUN_028266f0;
  param_1[99] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x66);
  FUN_00f13d08(param_1 + 0x4c);
  param_1[0x2e] = &PTR_FUN_028266f0;
  param_1[0x45] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x48);
  FUN_00f13d08(param_1 + 0x2e);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c42bf4(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c42c74(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  code *local_a8;
  long *plStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_78;
  
  lVar10 = tpidr_el0;
  local_78 = *(long *)(lVar10 + 0x28);
  FUN_00c260b4();
  plVar1 = param_1 + 199;
  param_1[0xc6] = 0;
  *param_1 = (long)&PTR_FUN_027fbbe8;
  FUN_00ab6c24(plVar1,0);
  plVar2 = param_1 + 0x37f;
  FUN_00f0e4a8();
  plVar3 = param_1 + 0x39d;
  FUN_00f0bdbc(plVar3,1);
  plVar4 = param_1 + 0x3b6;
  param_1[0x39d] = (long)&PTR_FUN_027ccd08;
  FUN_00f0d160(plVar4);
  plVar5 = param_1 + 0x3dc;
  FUN_00f0d160(plVar5);
  plVar6 = param_1 + 0x402;
  FUN_00f0d160(plVar6);
  plVar7 = param_1 + 0x428;
  FUN_00f0d160(plVar7);
  FUN_00f0d160();
  plVar8 = param_1 + 0x474;
  FUN_00f017e8(plVar8);
  param_1[0x474] = (long)&PTR_FUN_027c1f80;
  FUN_00f017e8(param_1 + 0x485);
  param_1[0x485] = (long)&PTR_FUN_027c1f80;
  FUN_00f017e8(param_1 + 0x496);
  param_1[0x496] = (long)&PTR_FUN_027c1f80;
  param_1[0x4aa] = 0;
  param_1[0x4a9] = 0;
  param_1[0x4a8] = 0;
  param_1[0x4a7] = 0;
  FUN_00b09580(param_1 + 0x4ab);
  param_1[0x710] = 0;
  param_1[0x70f] = 0;
  param_1[0x70e] = 0;
  lVar11 = _DAT_03218ef8;
  param_1[0x714] = 0;
  param_1[0x713] = 0;
  param_1[0x712] = 0;
  param_1[0x711] = lVar11;
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_00f023ec(plVar3,plVar4,1);
  FUN_00f023ec(plVar3,plVar5,1);
  FUN_00f023ec(plVar3,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x44e,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x485,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x496,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  FUN_00f023ec(plVar8,plVar2,1);
  FUN_00f023ec(plVar8,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x4ab,1);
  FUN_00f0d378(plVar4,PTR_s_build___Fonts_Brandon_Regular_40_02be9c48);
  FUN_00f0d378(plVar5,PTR_s_build___Fonts_Brandon_Light_80_f_02be9c20);
  FUN_00f0d378(plVar6,PTR_s_build___Fonts_Brandon_Regular_40_02be9c48);
  FUN_00f0d378(plVar7,PTR_s_build___Fonts_Brandon_Regular_40_02be9c48);
  FUN_00f0d378(param_1 + 0x44e,PTR_s_build___Fonts_Brandon_Regular_40_02be9c48);
  FUN_00f0da80(plVar4,&DAT_01bbd4b0);
  FUN_00f0da30(plVar4,1);
  FUN_00f0da80(plVar5,&DAT_01bbd4b0);
  FUN_00f0da30(plVar5,1);
  FUN_00f0da80(plVar6,&DAT_01bbd4b0);
  FUN_00f0da30(plVar6,1);
  FUN_00f0da28(0x3f4ccccd,plVar4);
  FUN_00f0da28(0x3f000000,plVar5);
  FUN_00f0da28(0x3f4ccccd,plVar6);
  *(uint *)((long)param_1 + 0x2424) = *(uint *)((long)param_1 + 0x2424) & 0xfffffffb;
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar2,&DAT_01bee7f6,2);
  uVar9 = *(uint *)((long)param_1 + 0x1c7c);
  if ((uVar9 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x1c7c) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x5f80;
    FUN_0091ada4(plVar2);
  }
  uVar12 = FUN_00e6ce7c("MENU_NEWS_TILE_LEAVE_APP_BUTTON",0);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,0xffc0c0c0);
  FUN_00ab703c(0x42800000,0,0x44960000,plVar1,0,uVar12,&local_a8,&DAT_03218ef8,0);
  FUN_00b09454(plVar1,1);
  FUN_00b09144(0x3f000000,plVar1);
  local_80 = DAT_03210c64;
  local_a8 = FUN_00c4310c;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_009693a0(param_1 + 200,&local_a8);
  FUN_00b0914c(plVar1,1);
  *(uint *)((long)param_1 + 0x25dc) = *(uint *)((long)param_1 + 0x25dc) & 0xfffffffb;
  if (*(long *)(lVar10 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

