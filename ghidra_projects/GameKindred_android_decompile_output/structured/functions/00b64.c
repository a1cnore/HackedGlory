// functions/00b64 — 8 functions
#include "libGameKindred.h"




void FUN_00b64064(undefined8 *param_1)

{
  FUN_00b89cd8();
  *param_1 = &PTR_FUN_027e4bd8;
  param_1[0x19] = &PTR_FUN_027e4d48;
  FUN_00f13ca4(param_1 + 0x1a);
  FUN_00f11234(param_1 + 0x31);
  FUN_00f0e4a8(param_1 + 0x65);
  FUN_00f0e4a8(param_1 + 0x83);
  FUN_00f0e4a8(param_1 + 0xa1);
  FUN_00f11234(param_1 + 0xbf);
  FUN_00ecfd6c(param_1 + 0xf3,0);
  FUN_00f0e4a8(param_1 + 0x19a);
  FUN_00af6b6c(param_1 + 0x1b8);
  FUN_00f0d160(param_1 + 0x1d5);
  FUN_00f017e8(param_1 + 0x1fb);
  param_1[0x1fb] = &PTR_FUN_027c1f80;
  FUN_00f017e8(param_1 + 0x20c);
  param_1[0x20c] = &PTR_FUN_027c1f80;
  FUN_00f0d160(param_1 + 0x21d);
  FUN_00f017e8(param_1 + 0x243);
  param_1[0x243] = &PTR_FUN_027c1f80;
  FUN_00ab6c24(param_1 + 0x254,0);
  FUN_00ab6c24(param_1 + 0x50c,0);
  FUN_00ab6c24(param_1 + 0x7c4,0);
  FUN_00f017e8(param_1 + 0xa7c);
  param_1[0xa7c] = &PTR_FUN_027c1f80;
  param_1[0xa8d] = 0;
  FUN_008fcdb8(param_1 + 0xa8e,&DAT_0320ffa8);
  param_1[0xa93] = 0;
  param_1[0xa92] = 0;
  param_1[0xa91] = 0;
  FUN_008fcdb8(param_1 + 0xa94,&DAT_0320ffa8);
  param_1[0xa99] = 0;
  param_1[0xa98] = 0;
  param_1[0xa97] = 0;
  FUN_008fcdb8(param_1 + 0xa9a,&DAT_0320ffa8);
  memset(param_1 + 0xa9d,0,0x4c);
  param_1[0xaa8] = 0;
  param_1[0xaa7] = 0;
  *(undefined4 *)(param_1 + 0xaa9) = 0;
  *(undefined1 *)((long)param_1 + 0x554c) = 1;
  param_1[0xaaa] = 0;
  FUN_00b64210(param_1);
  return;
}




void FUN_00b64210(long *param_1)

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
  undefined **ppuVar13;
  uint uVar14;
  undefined4 uVar15;
  long lVar16;
  uint uVar17;
  float fVar18;
  code *local_d0;
  long *plStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  long local_a0;
  
  lVar16 = tpidr_el0;
  local_a0 = *(long *)(lVar16 + 0x28);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x1a,1);
  plVar1 = param_1 + 0x31;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 0x65;
  FUN_00f023ec(plVar1,plVar2,1);
  plVar3 = param_1 + 0x83;
  FUN_00f023ec(plVar1,plVar3,1);
  plVar4 = param_1 + 0xa1;
  FUN_00f023ec(plVar1,plVar4,1);
  plVar5 = param_1 + 0xbf;
  FUN_00f023ec(plVar1,plVar5,1);
  plVar6 = param_1 + 0xf3;
  FUN_00f023ec(plVar5,plVar6,1);
  FUN_00ed026c(plVar6,param_1 + 0x19a,1);
  FUN_00ed026c(plVar6,param_1 + 0x1b8,1);
  FUN_00ed026c(plVar6,param_1 + 0xa7c,1);
  plVar7 = param_1 + 0x1d5;
  FUN_00ed026c(plVar6,plVar7,1);
  FUN_00ed026c(plVar6,param_1 + 0x1fb,1);
  FUN_00f023ec(param_1 + 0x1fb,param_1 + 0x20c,1);
  plVar8 = param_1 + 0x21d;
  FUN_00f023ec(param_1 + 0x20c,plVar8,1);
  plVar9 = param_1 + 0x243;
  FUN_00f023ec(plVar1,plVar9,1);
  plVar10 = param_1 + 0x254;
  FUN_00f023ec(plVar9,plVar10,1);
  plVar11 = param_1 + 0x50c;
  FUN_00f023ec(plVar9,plVar11,1);
  plVar12 = param_1 + 0x7c4;
  FUN_00f023ec(plVar9,plVar12,1);
  uVar17 = FUN_0092ea9c();
  *(uint *)((long)param_1 + 0x154) = *(uint *)((long)param_1 + 0x154) | 0x10;
  FUN_00f112f0(plVar1,0);
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  if ((~*(uint *)((long)param_1 + 0x3ac) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x3ac) = *(uint *)((long)param_1 + 0x3ac) | 0x7f80;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0e548(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"splash_glass_shadow");
  uVar14 = *(uint *)((long)param_1 + 0x58c);
  if ((uVar14 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x58c) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x1980;
    FUN_0091ada4(plVar4);
  }
  *(byte *)(param_1 + 0xbc) = *(byte *)(param_1 + 0xbc) | 1;
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"splash_glass_shadow");
  uVar14 = *(uint *)((long)param_1 + 0x49c);
  if ((uVar14 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x49c) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x1980;
    FUN_0091ada4(plVar3);
  }
  FUN_00f112f0(plVar5,0);
  if ((*(float *)(param_1 + 0xc9) != 0.5) || (*(float *)((long)param_1 + 0x64c) != 0.0)) {
    param_1[0xc9] = 0x3f000000;
    FUN_0091ada4(plVar5);
  }
  if (*(float *)((long)param_1 + 0x63c) != 50.0) {
    *(undefined4 *)((long)param_1 + 0x63c) = 0x42480000;
    FUN_0091ada4(plVar5);
  }
  FUN_00ed0680(plVar6,PTR_s_build___MenuPartsCommon_tga_02be3530,
               PTR_s_scrollbar_button_fill_top_02be3518,PTR_s_scrollbar_button_fill_middle_02be3520,
               PTR_s_scrollbar_button_fill_bottom_02be3528);
  FUN_00ed0650(0x3e800000,0x3f800000,plVar6);
  if ((*(float *)(param_1 + 0xfd) != 0.5) || (*(float *)((long)param_1 + 0x7ec) != 0.0)) {
    param_1[0xfd] = 0x3f000000;
    FUN_0091ada4(plVar6);
  }
  if ((*(float *)(param_1 + 0x1c2) != 0.5) || (*(float *)((long)param_1 + 0xe14) != 0.5)) {
    param_1[0x1c2] = 0x3f0000003f000000;
    FUN_0091ada4(param_1 + 0x1b8);
  }
  *(undefined1 *)(param_1 + 0x1d4) = 1;
  if ((*(float *)(param_1 + 0x1a4) != 0.5) || (*(float *)((long)param_1 + 0xd24) != 0.5)) {
    param_1[0x1a4] = 0x3f0000003f000000;
    FUN_0091ada4(param_1 + 0x19a);
  }
  FUN_00f0d92c(plVar7,PTR_s_build___Fonts_NorthwoodHigh_Regu_02be9ce0,&DAT_01bee7fa);
  uVar14 = *(uint *)((long)param_1 + 0xf2c);
  if ((uVar14 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0xf2c) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x5900;
    FUN_0091ada4(plVar7);
  }
  ppuVar13 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  if ((uVar17 & 1) == 0) {
    ppuVar13 = &PTR_s_build___Fonts_Brandon_Light_60_f_02be9c18;
  }
  FUN_00f0d92c(plVar8,*ppuVar13,&DAT_01bee7fa);
  FUN_00f0dad0(0x44aa0000,plVar8,1);
  if ((*(uint *)((long)param_1 + 0x116c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x116c) = *(uint *)((long)param_1 + 0x116c) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar8);
  }
  fVar18 = 1.2;
  if ((uVar17 & 1) == 0) {
    fVar18 = 1.0;
  }
  if ((*(float *)(param_1 + 0x25d) != fVar18) || (*(float *)((long)param_1 + 0x12ec) != fVar18)) {
    *(float *)(param_1 + 0x25d) = fVar18;
    *(float *)((long)param_1 + 0x12ec) = fVar18;
    FUN_0091ada4(plVar10);
  }
  if ((*(float *)(param_1 + 0x25e) != 0.5) || (*(float *)((long)param_1 + 0x12f4) != 0.5)) {
    param_1[0x25e] = 0x3f0000003f000000;
    FUN_0091ada4(plVar10);
  }
  FUN_00f0dac8(param_1 + 0x338,0);
  uVar17 = *(uint *)((long)param_1 + 0x1324);
  if ((uVar17 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x1324) = uVar17 & 0xffff8000 | uVar17 & 0x7f | 0x5900;
    FUN_0091ada4(plVar10);
  }
  FUN_00ab703c(0x42700000,0x42c80000,0x44960000,plVar10,0,&DAT_03210450,&DAT_01bee7fa,&DAT_03218ef8,
               PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  uVar15 = DAT_03210c64;
  local_d0 = FUN_00b652bc;
  local_b8 = 0;
  local_b0 = 0;
  local_c0 = 0;
  plStack_c8 = param_1;
  local_a8 = uVar15;
  FUN_009693a0(param_1 + 0x255,&local_d0);
  param_1[0x25f] = 0x4220000042a00000;
  *(uint *)((long)param_1 + 0x1324) = *(uint *)((long)param_1 + 0x1324) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x515) != fVar18) || (*(float *)((long)param_1 + 0x28ac) != fVar18)) {
    *(float *)(param_1 + 0x515) = fVar18;
    *(float *)((long)param_1 + 0x28ac) = fVar18;
    FUN_0091ada4(plVar11);
  }
  if ((*(float *)(param_1 + 0x516) != 0.5) || (*(float *)((long)param_1 + 0x28b4) != 0.5)) {
    param_1[0x516] = 0x3f0000003f000000;
    FUN_0091ada4(plVar11);
  }
  FUN_00f0dac8(param_1 + 0x5f0,0);
  uVar17 = *(uint *)((long)param_1 + 0x28e4);
  if ((uVar17 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x28e4) = uVar17 & 0xffff8000 | uVar17 & 0x7f | 0x5900;
    FUN_0091ada4(plVar11);
  }
  FUN_00ab703c(0x42700000,0x42c80000,0x43c80000,plVar11,0,&DAT_03210450,&DAT_01bee7fa,&DAT_03218ef8,
               PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  local_d0 = FUN_00b652bc;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 1;
  plStack_c8 = param_1;
  local_a8 = uVar15;
  FUN_009693a0(param_1 + 0x50d,&local_d0);
  param_1[0x517] = 0x4220000042a00000;
  *(uint *)((long)param_1 + 0x28e4) = *(uint *)((long)param_1 + 0x28e4) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x7cd) != fVar18) || (*(float *)((long)param_1 + 0x3e6c) != fVar18)) {
    *(float *)(param_1 + 0x7cd) = fVar18;
    *(float *)((long)param_1 + 0x3e6c) = fVar18;
    FUN_0091ada4(plVar12);
  }
  if ((*(float *)(param_1 + 0x7ce) != 0.5) || (*(float *)((long)param_1 + 0x3e74) != 0.5)) {
    param_1[0x7ce] = 0x3f0000003f000000;
    FUN_0091ada4(plVar12);
  }
  FUN_00f0dac8(param_1 + 0x8a8,0);
  uVar17 = *(uint *)((long)param_1 + 0x3ea4);
  if ((uVar17 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x3ea4) = uVar17 & 0xffff8000 | uVar17 & 0x7f | 0x5900;
    FUN_0091ada4(plVar12);
  }
  FUN_00ab703c(0x42700000,0x42c80000,0x43c80000,plVar12,0,&DAT_03210450,&DAT_01bee7fa,&DAT_03218ef8,
               PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  local_d0 = FUN_00b652bc;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 2;
  plStack_c8 = param_1;
  local_a8 = uVar15;
  FUN_009693a0(param_1 + 0x7c5,&local_d0);
  param_1[1999] = 0x41f0000042a00000;
  *(uint *)((long)param_1 + 0x3ea4) = *(uint *)((long)param_1 + 0x3ea4) & 0xfffffffb;
  local_a8 = FUN_00f048a4("UI::EVENT_MENU_CLOSE_PLATFORM_NOTIFICATION");
  local_d0 = thunk_FUN_00b65228;
  local_b8 = 0;
  local_b0 = 0;
  local_c0 = 0;
  plStack_c8 = param_1;
  FUN_009693a0(param_1 + 1,&local_d0);
  if (*(long *)(lVar16 + 0x28) == local_a0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b64a34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e4bd8;
  param_1[0x19] = &PTR_FUN_027e4d48;
  FUN_00b64c7c();
  if ((*(byte *)(param_1 + 0xaa3) & 1) != 0) {
    operator_delete((void *)param_1[0xaa5]);
  }
  if ((*(byte *)(param_1 + 0xaa0) & 1) != 0) {
    operator_delete((void *)param_1[0xaa2]);
  }
  if ((*(byte *)(param_1 + 0xa9d) & 1) != 0) {
    operator_delete((void *)param_1[0xa9f]);
  }
  if ((*(byte *)(param_1 + 0xa9a) & 1) != 0) {
    operator_delete((void *)param_1[0xa9c]);
  }
  if ((*(byte *)(param_1 + 0xa97) & 1) != 0) {
    operator_delete((void *)param_1[0xa99]);
  }
  if ((*(byte *)(param_1 + 0xa94) & 1) != 0) {
    operator_delete((void *)param_1[0xa96]);
  }
  if ((*(byte *)(param_1 + 0xa91) & 1) != 0) {
    operator_delete((void *)param_1[0xa93]);
  }
  if ((*(byte *)(param_1 + 0xa8e) & 1) != 0) {
    operator_delete((void *)param_1[0xa90]);
  }
  FUN_00f01868(param_1 + 0xa7c);
  FUN_009c7fa8(param_1 + 0x7c4);
  FUN_009c7fa8(param_1 + 0x50c);
  FUN_009c7fa8(param_1 + 0x254);
  FUN_00f01868(param_1 + 0x243);
  FUN_00f0d3a4(param_1 + 0x21d);
  FUN_00f01868(param_1 + 0x20c);
  FUN_00f01868(param_1 + 0x1fb);
  FUN_00f0d3a4(param_1 + 0x1d5);
  param_1[0x1b8] = &PTR_FUN_027da660;
  param_1[0x1c9] = &PTR_FUN_027da778;
  if ((*(byte *)(param_1 + 0x1cf) & 1) != 0) {
    operator_delete((void *)param_1[0x1d1]);
  }
  FUN_0199fb94(param_1 + 0x1cc);
  FUN_00f01868(param_1 + 0x1b8);
  param_1[0x19a] = &PTR_FUN_028266f0;
  param_1[0x1b1] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1b4);
  FUN_00f13d08(param_1 + 0x19a);
  FUN_00ed00e0(param_1 + 0xf3);
  FUN_00f13d08(param_1 + 0xbf);
  param_1[0xa1] = &PTR_FUN_028266f0;
  param_1[0xb8] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xbb);
  FUN_00f13d08(param_1 + 0xa1);
  param_1[0x83] = &PTR_FUN_028266f0;
  param_1[0x9a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x9d);
  FUN_00f13d08(param_1 + 0x83);
  param_1[0x65] = &PTR_FUN_028266f0;
  param_1[0x7c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x7f);
  FUN_00f13d08(param_1 + 0x65);
  FUN_00f13d08(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x1a);
  param_1[0x19] = &PTR_FUN_027e0a68;
  FUN_0096bd60(param_1 + 0x19);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b64c7c(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x5468) != 0) {
    uVar1 = FUN_00f02540();
    if ((uVar1 & 1) != 0) {
      FUN_00f01a4c(*(undefined8 *)(param_1 + 0x5468),1);
    }
    if (*(long **)(param_1 + 0x5468) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x5468) + 8))();
    }
    *(undefined8 *)(param_1 + 0x5468) = 0;
  }
  return;
}




void FUN_00b64ccc(long param_1)

{
  FUN_00b64a34(param_1 + -200);
  return;
}




void FUN_00b64cd4(void *param_1)

{
  FUN_00b64a34();
  operator_delete(param_1);
  return;
}




void FUN_00b64cf8(long param_1)

{
  FUN_00b64a34((void *)(param_1 + -200));
  operator_delete((void *)(param_1 + -200));
  return;
}




void FUN_00b64d20(long *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  FUN_0096bd60(param_1 + 0x19);
  if ((*(byte *)(param_2 + 0x110) & 1) == 0) {
    if (*(byte *)(param_2 + 0x110) >> 1 != 0) goto LAB_00b64d58;
LAB_00b64de4:
    bVar1 = *(byte *)(param_2 + 0xf8);
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0) goto LAB_00b64f2c;
LAB_00b64e68:
      bVar1 = *(byte *)(param_2 + 0xe0);
      if ((bVar1 & 1) != 0) {
        if (*(long *)(param_2 + 0xe8) != 0) goto LAB_00b64e7c;
        goto LAB_00b64f2c;
      }
      if (bVar1 >> 1 == 0) goto LAB_00b64f2c;
LAB_00b64e7c:
      uVar3 = FUN_00f02540(param_1 + 0x1b8);
      if ((uVar3 & 1) != 0) {
        FUN_00f01a4c(param_1 + 0x1b8,1);
      }
      plVar7 = param_1 + 0x19a;
      if (param_1[0x1b4] != 0) {
        FUN_00f0e628(plVar7);
      }
      if ((*(byte *)(param_2 + 0xe0) & 1) == 0) {
        lVar8 = param_2 + 0xe1;
      }
      else {
        lVar8 = *(long *)(param_2 + 0xf0);
      }
      if ((*(byte *)(param_2 + 0xf8) & 1) == 0) {
        lVar6 = param_2 + 0xf9;
      }
      else {
        lVar6 = *(long *)(param_2 + 0x108);
      }
      FUN_00f0e548(plVar7,lVar8,lVar6);
      uVar3 = FUN_00f02540(plVar7);
      if ((uVar3 & 1) == 0) {
        FUN_00ed026c(param_1 + 0xf3,plVar7,1);
      }
    }
    else {
      if (*(long *)(param_2 + 0x100) != 0) goto LAB_00b64e68;
LAB_00b64f2c:
      uVar3 = FUN_00f02540(param_1 + 0x19a);
      if ((uVar3 & 1) != 0) {
        FUN_00f01a4c(param_1 + 0x19a,1);
      }
      uVar3 = FUN_00f02540(param_1 + 0x1b8);
      if ((uVar3 & 1) != 0) {
        FUN_00f01a4c(param_1 + 0x1b8,1);
      }
    }
  }
  else {
    if (*(long *)(param_2 + 0x118) == 0) goto LAB_00b64de4;
LAB_00b64d58:
    plVar7 = param_1 + 0x19a;
    if (param_1[0x1b4] != 0) {
      FUN_00f0e628(plVar7);
    }
    uVar3 = FUN_00f02540(plVar7);
    if ((uVar3 & 1) != 0) {
      FUN_00f01a4c(plVar7,1);
    }
    uVar3 = FUN_00f02540(param_1 + 0x1b8);
    if ((uVar3 & 1) == 0) {
      FUN_00ed026c(param_1 + 0xf3,param_1 + 0x1b8,1);
    }
    FUN_0096bce8(param_2 + 0x110,param_1 + 0x19,param_1);
  }
  FUN_00b64c7c(param_1);
  if (*(char *)(param_2 + 0x1b4) != '\0') {
    if ((*(byte *)(param_2 + 0x128) & 1) == 0) {
      if (*(byte *)(param_2 + 0x128) >> 1 != 0) {
LAB_00b64e04:
        if ((*(byte *)(param_2 + 0x140) & 1) == 0) {
          if (*(byte *)(param_2 + 0x140) >> 1 != 0) {
LAB_00b64e20:
            pvVar4 = operator_new(0x1e0);
            FUN_00afbfb0();
            param_1[0xa8d] = (long)pvVar4;
            FUN_00f023ec(param_1 + 0xa7c,pvVar4,1);
            uVar5 = FUN_00d6eb50();
            if ((*(byte *)(param_2 + 0x128) & 1) == 0) {
              lVar8 = param_2 + 0x129;
            }
            else {
              lVar8 = *(long *)(param_2 + 0x138);
            }
            lVar8 = FUN_00d6eb5c(uVar5,lVar8);
            if (lVar8 != 0) {
              FUN_00afc274(param_1[0xa8d],lVar8);
              FUN_00f13f08(0x44800000,0x44800000,param_1[0xa8d]);
              lVar8 = param_1[0xa8d];
              if ((*(float *)(lVar8 + 0x48) != 0.0) || (*(float *)(lVar8 + 0x4c) != 0.0)) {
                *(undefined8 *)(lVar8 + 0x48) = 0;
                FUN_0091ada4();
                lVar8 = param_1[0xa8d];
              }
              if ((*(byte *)(param_2 + 0x140) & 1) == 0) {
                lVar6 = param_2 + 0x141;
              }
              else {
                lVar6 = *(long *)(param_2 + 0x150);
              }
              FUN_00afd018(lVar8,lVar6);
            }
          }
        }
        else if (*(long *)(param_2 + 0x148) != 0) goto LAB_00b64e20;
      }
    }
    else if (*(long *)(param_2 + 0x130) != 0) goto LAB_00b64e04;
  }
  FUN_00f0d75c(param_1 + 0x1d5,param_2);
  lVar8 = *(long *)(param_2 + 0x188);
  plVar7 = param_1 + 0x20c;
  uVar3 = FUN_00f02540(plVar7);
  if (lVar8 == 0) {
    if ((uVar3 & 1) != 0) goto LAB_00b64ff4;
  }
  else {
    if ((uVar3 & 1) != 0) {
      FUN_00f01a4c(plVar7,1);
    }
    uVar3 = FUN_00f02540(*(undefined8 *)(param_2 + 0x188));
    if ((uVar3 & 1) != 0) {
      FUN_00f01a4c(*(undefined8 *)(param_2 + 0x188),1);
    }
    plVar7 = *(long **)(param_2 + 0x188);
  }
  FUN_00f023ec(param_1 + 0x1fb,plVar7,1);
LAB_00b64ff4:
  param_1[0xaaa] = *(long *)(param_2 + 0x1a8);
  *(undefined4 *)(param_1 + 0xaa9) = *(undefined4 *)(param_2 + 0x1b0);
  FUN_00f0d75c(param_1 + 0x21d,param_2 + 0x10);
  FUN_00f0dac8(param_1 + 0x21d,(int)param_1[0xaa9]);
  FUN_008fce60(param_1 + 0xa8e,param_2 + 0x30);
  FUN_008fce60(param_1 + 0xa91,param_2 + 0x48);
  FUN_008fce60(param_1 + 0xa94,param_2 + 0x70);
  FUN_008fce60(param_1 + 0xa97,param_2 + 0x88);
  FUN_008fce60(param_1 + 0xa9a,param_2 + 0xb0);
  FUN_008fce60(param_1 + 0xa9d,param_2 + 200);
  FUN_008fce60(param_1 + 0xaa0,param_2 + 0x158);
  *(undefined4 *)(param_1 + 0xaa6) = *(undefined4 *)(param_2 + 400);
  FUN_008fce60(param_1 + 0xaa3,param_2 + 0x170);
  *(undefined1 *)((long)param_1 + 0x554c) = *(undefined1 *)(param_2 + 0x1b5);
  lVar8 = *(long *)(param_2 + 0x198);
  param_1[0xaa8] = *(long *)(param_2 + 0x1a0);
  param_1[0xaa7] = lVar8;
  FUN_00ab7498(param_1 + 0x254,param_2 + 0x20);
  FUN_00ab7498(param_1 + 0x50c,param_2 + 0x60);
  FUN_00ab7498(param_1 + 0x7c4,param_2 + 0xa0);
  uVar2 = FUN_00e70b04(param_2 + 0x20);
  *(uint *)((long)param_1 + 0x1324) =
       *(uint *)((long)param_1 + 0x1324) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x1324) & 3 | (~uVar2 & 1) << 2;
  uVar2 = FUN_00e70b04(param_2 + 0x60);
  *(uint *)((long)param_1 + 0x28e4) =
       *(uint *)((long)param_1 + 0x28e4) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x28e4) & 3 | (~uVar2 & 1) << 2;
  uVar2 = FUN_00e70b04(param_2 + 0xa0);
  *(uint *)((long)param_1 + 0x3ea4) =
       *(uint *)((long)param_1 + 0x3ea4) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x3ea4) & 3 | (~uVar2 & 1) << 2;
  if (*(float *)((long)param_1 + 0x7dc) != 0.0) {
    *(undefined4 *)((long)param_1 + 0x7dc) = 0;
    FUN_0091ada4(param_1 + 0xf3);
  }
                    /* WARNING: Could not recover jumptable at 0x00b65194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1);
  return;
}

