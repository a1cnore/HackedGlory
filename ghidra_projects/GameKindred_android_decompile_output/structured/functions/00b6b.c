// functions/00b6b — 10 functions
#include "libGameKindred.h"




void FUN_00b6b124(code *param_1,byte param_2)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  code *pcVar13;
  code *pcVar14;
  code *pcVar15;
  code *pcVar16;
  code *pcVar17;
  code *pcVar18;
  undefined **ppuVar19;
  uint uVar20;
  long lVar21;
  undefined4 uVar22;
  bool bVar23;
  code *pcVar24;
  ulong uVar25;
  undefined8 uVar26;
  long lVar27;
  code *pcVar28;
  code *local_b0;
  code *local_a8;
  code *local_a0;
  code *local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  long local_80;
  
  lVar21 = tpidr_el0;
  local_80 = *(long *)(lVar21 + 0x28);
  FUN_00b89cd8();
  pcVar1 = param_1 + 200;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined ***)param_1 = &PTR_FUN_027e5008;
  FUN_00f0e4a8();
  FUN_00b1dc5c();
  pcVar2 = param_1 + 0xd28;
  FUN_00f13ca4();
  FUN_00b1c70c();
  pcVar3 = param_1 + 0x2d60;
  FUN_00f11234(pcVar3);
  pcVar4 = param_1 + 0x2f00;
  FUN_00ecfd6c(pcVar4,0);
  pcVar24 = param_1 + 0x3438;
  FUN_00f017e8(pcVar24);
  pcVar28 = param_1 + 0x34c0;
  *(undefined ***)(param_1 + 0x3438) = &PTR_FUN_027c1f80;
  FUN_00f017e8(pcVar28);
  pcVar5 = param_1 + 0x3548;
  *(undefined ***)(param_1 + 0x34c0) = &PTR_FUN_027c1f80;
  FUN_00f017e8();
  pcVar6 = param_1 + 0x35d0;
  *(undefined ***)(param_1 + 0x3548) = &PTR_FUN_027c1f80;
  FUN_00abaee8(pcVar6,0);
  pcVar7 = param_1 + 0x3bc8;
  FUN_00f0d160();
  pcVar8 = param_1 + 0x3cf8;
  FUN_00f0d160();
  FUN_00b27c04(param_1 + 0x3e28,0);
  pcVar9 = param_1 + 0x3f10;
  FUN_00f017e8(pcVar9);
  pcVar10 = param_1 + 0x3f98;
  *(undefined ***)(param_1 + 0x3f10) = &PTR_FUN_027c1f80;
  FUN_00f0e4a8();
  pcVar11 = param_1 + 0x4088;
  FUN_00f0bdbc(pcVar11,0);
  pcVar12 = param_1 + 0x4150;
  *(undefined ***)(param_1 + 0x4088) = &PTR_FUN_027c3260;
  FUN_00abaee8(pcVar12,0);
  pcVar13 = param_1 + 0x4748;
  FUN_00f0bdbc(pcVar13,1);
  pcVar14 = param_1 + 0x4810;
  *(undefined ***)(param_1 + 0x4748) = &PTR_FUN_027ccd08;
  FUN_00f0d160();
  pcVar15 = param_1 + 0x4940;
  FUN_00f0bdbc(pcVar15,0);
  pcVar16 = param_1 + 0x4a08;
  *(undefined ***)(param_1 + 0x4940) = &PTR_FUN_027c3260;
  FUN_00f0e4a8();
  pcVar17 = param_1 + 0x4af8;
  FUN_00b25254();
  *(long *)(param_1 + 0x4c58) = 0;
  *(undefined4 *)(param_1 + 0x4c60) = 0;
  pcVar18 = param_1 + 0x4c64;
  *pcVar18 = (code)(param_2 & 1);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,pcVar1,1);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,pcVar3,1);
  FUN_00f023ec(pcVar3,pcVar4,1);
  FUN_00ed026c(pcVar4,pcVar24,1);
  FUN_00f023ec(pcVar24,pcVar28,1);
  FUN_00f023ec(pcVar28,param_1 + 0x1b8,1);
  FUN_00f023ec(param_1 + 0x1b8,pcVar2,1);
  pcVar28 = pcVar8;
  if ((param_2 & 1) == 0) {
    FUN_00f023ec(pcVar24,pcVar5,1);
    FUN_00f023ec(pcVar5,param_1 + 0xde0,1);
    FUN_00f023ec(pcVar5,pcVar6,1);
    pcVar24 = pcVar5;
    pcVar28 = pcVar7;
  }
  FUN_00f023ec(pcVar24,pcVar28,1);
  FUN_00ed026c(pcVar4,pcVar9,1);
  FUN_00f023ec(pcVar9,pcVar10,1);
  FUN_00f023ec(pcVar9,pcVar11,1);
  FUN_00f023ec(pcVar11,pcVar12,1);
  FUN_00f023ec(pcVar11,pcVar13,1);
  FUN_00f023ec(pcVar13,pcVar14,1);
  FUN_00f023ec(pcVar13,pcVar15,1);
  FUN_00f023ec(pcVar15,pcVar16,1);
  FUN_00f023ec(pcVar15,pcVar17,1);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,param_1 + 0x3e28,1);
  uVar25 = FUN_0092ea9c();
  FUN_00f0e548(pcVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
  FUN_00f0e670(pcVar1,&DAT_01bee7f6,2);
  uVar20 = *(uint *)(param_1 + 0x14c);
  if ((uVar20 & 0x7f80) != 0x6600) {
    *(uint *)(param_1 + 0x14c) = uVar20 & 0xffff8000 | uVar20 & 0x7f | 0x6600;
    FUN_0091ada4(pcVar1);
  }
  param_1[0x1a0] = (code)((byte)param_1[0x1a0] | 2);
  FUN_00f112f0(pcVar3,1);
  FUN_00ed04d8(pcVar4,0,1);
  if (*pcVar18 == (code)0x0) {
    *(uint *)(param_1 + 0xdac) = *(uint *)(param_1 + 0xdac) | 0x10;
    if ((*(float *)(param_1 + 0xd78) != 0.5) || (*(float *)(param_1 + 0xd7c) != 0.6)) {
      *(long *)(param_1 + 0xd78) = 0x3f19999a3f000000;
      FUN_0091ada4(pcVar2);
    }
    FUN_00f13f08(0x447a0000,0x44480000,pcVar2);
    local_88 = DAT_03210f60;
    local_b0 = FUN_00b6bad8;
    local_98 = (code *)0x0;
    uStack_90 = 0;
    local_a0 = (code *)0x0;
    local_a8 = param_1;
    FUN_009693a0(param_1 + 0xd30,&local_b0);
    local_b0 = FUN_00b6bad8;
    local_88 = DAT_03210f8c;
    local_98 = (code *)0x0;
    uStack_90 = 0;
    local_a0 = (code *)0x0;
    local_a8 = param_1;
    FUN_009693a0(param_1 + 0xd30,&local_b0);
  }
  FUN_00b1cb2c(param_1 + 0xde0,1);
  if (*pcVar18 == (code)0x0) {
    FUN_00f0e578(param_1 + 0x3aa8,"circle_button_question");
    uVar20 = *(uint *)(param_1 + 0x3654);
    if ((uVar20 & 0x7f80) != 0x5f80) {
      *(uint *)(param_1 + 0x3654) = uVar20 & 0xffff8000 | uVar20 & 0x7f | 0x5f80;
      FUN_0091ada4(pcVar6);
    }
    FUN_00b09144(0xbf800000,pcVar6);
    local_88 = DAT_03210c64;
    local_b0 = FUN_00b6bad8;
    local_98 = (code *)0x0;
    uStack_90 = 0;
    local_a0 = (code *)0x0;
    local_a8 = param_1;
    FUN_009693a0(param_1 + 0x35d8,&local_b0);
    FUN_00b0914c(pcVar6,1);
    ppuVar19 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
    if ((uVar25 & 1) == 0) {
      ppuVar19 = &PTR_s_build___Fonts_Brandon_Regular_40_02be9c48;
    }
    local_b0 = (code *)CONCAT44(local_b0._4_4_,0xffa0a0a0);
    FUN_00f0d92c(pcVar7,*ppuVar19,&local_b0);
    uVar26 = FUN_00e6ce7c("PLAYER_PROFILE_SKILLTIER_EXPLANATION_DESCRIPTION",0);
    thunk_FUN_00e7051c(&local_b0,uVar26);
    FUN_00f0d75c(pcVar7,&local_b0);
    if (local_a8 != (code *)0x0) {
      operator_delete__(local_a8);
      local_b0 = (code *)0x0;
      local_a8 = (code *)0x0;
    }
  }
  else {
    ppuVar19 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
    if ((uVar25 & 1) == 0) {
      ppuVar19 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
    }
    FUN_00f0d92c(pcVar8,*ppuVar19,&DAT_01bee7fa);
    uVar20 = *(uint *)(param_1 + 0x3d7c);
    if ((uVar20 & 0x7f80) != 0x3300) {
      *(uint *)(param_1 + 0x3d7c) = uVar20 & 0xffff8000 | uVar20 & 0x7f | 0x3300;
      FUN_0091ada4(pcVar8);
    }
    FUN_00f0dac8(pcVar8,3);
    uVar26 = FUN_00e6ce7c("PLAYER_PROFILE_TROPHY_EXPLANATION",0);
    FUN_00f0d75c(pcVar8,uVar26);
  }
  FUN_00f0e548(pcVar10,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  uVar20 = *(uint *)(param_1 + 0x401c);
  if ((uVar20 & 0x7f80) != 0x3300) {
    *(uint *)(param_1 + 0x401c) = uVar20 & 0xffff8000 | uVar20 & 0x7f | 0x3300;
    FUN_0091ada4(pcVar10);
  }
  FUN_00f0e578(param_1 + 0x4628,"circle_button_question");
  uVar20 = *(uint *)(param_1 + 0x41d4);
  if ((uVar20 & 0x7f80) != 0x5f80) {
    *(uint *)(param_1 + 0x41d4) = uVar20 & 0xffff8000 | uVar20 & 0x7f | 0x5f80;
    FUN_0091ada4(pcVar12);
  }
  FUN_00b09144(0xbf800000,pcVar12);
  local_88 = DAT_03210c64;
  local_b0 = thunk_FUN_00b6caa0;
  local_98 = (code *)0x0;
  uStack_90 = 0;
  local_a0 = (code *)0x0;
  local_a8 = param_1;
  FUN_009693a0(param_1 + 0x4158,&local_b0);
  FUN_00b0914c(pcVar12,1);
  bVar23 = (uVar25 & 1) == 0;
  ppuVar19 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  if (bVar23) {
    ppuVar19 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  uVar22 = 0x44160000;
  if (bVar23) {
    uVar22 = 0x43e10000;
  }
  FUN_00f0d378(pcVar14,*ppuVar19);
  FUN_00f0dad0(uVar22,pcVar14,1);
  uVar20 = *(uint *)(param_1 + 0x4894);
  if ((uVar20 & 0x7f80) != 0x5900) {
    *(uint *)(param_1 + 0x4894) = uVar20 & 0xffff8000 | uVar20 & 0x7f | 0x5900;
    FUN_0091ada4(pcVar14);
  }
  FUN_00f0e548(pcVar16,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_clock");
  uVar20 = *(uint *)(param_1 + 0x4a8c);
  if ((uVar20 & 0x7f80) != 0x5900) {
    *(uint *)(param_1 + 0x4a8c) = uVar20 & 0xffff8000 | uVar20 & 0x7f | 0x5900;
    FUN_0091ada4(pcVar16);
  }
  if ((*(float *)(param_1 + 0x4a58) != 0.5) || (*(float *)(param_1 + 0x4a5c) != 0.5)) {
    *(long *)(param_1 + 0x4a58) = 0x3f0000003f000000;
    FUN_0091ada4(pcVar16);
  }
  ppuVar19 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  if ((uVar25 & 1) == 0) {
    ppuVar19 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  FUN_00f0d378(pcVar17,*ppuVar19);
  uVar20 = *(uint *)(param_1 + 0x4b7c);
  if ((uVar20 & 0x7f80) != 0x3f80) {
    *(uint *)(param_1 + 0x4b7c) = uVar20 & 0xffff807f | 0x3f80;
    FUN_0091ada4(pcVar17);
  }
  if ((*(float *)(param_1 + 0x4b48) != 0.0) || (*(float *)(param_1 + 0x4b4c) != 0.5)) {
    *(long *)(param_1 + 0x4b48) = 0x3f00000000000000;
    FUN_0091ada4(pcVar17);
  }
  uVar22 = 0x44098000;
  if ((uVar25 & 1) == 0) {
    uVar22 = 0x43c80000;
  }
  FUN_00f0db64(uVar22,0,0x3f800000,pcVar17);
  uVar26 = FUN_00e6ce7c("PLAYER_PROFILE_RANKED_SKILL_TIER_DECAY_TIMER",0);
  FUN_00b252ac(pcVar17,uVar26,0,0);
  *(uint *)(param_1 + 0x3f94) = *(uint *)(param_1 + 0x3f94) & 0xfffffffb;
  lVar27 = FUN_00a07558();
  local_a8 = (code *)0x0;
  local_98 = thunk_FUN_00b6be04;
  local_b0 = param_1;
  local_a0 = param_1;
  FUN_009e4694(lVar27 + 0x18,&local_b0);
  if (*(long *)(lVar21 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b6bad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00b6c9b4(param_1,param_4);
  return;
}




void FUN_00b6bae4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_027e5008;
  lVar2 = FUN_00a07558();
  lVar4 = (ulong)*(uint *)(lVar2 + 0x18) << 5;
  puVar1 = *(undefined8 **)(lVar2 + 0x20);
  do {
    puVar3 = puVar1;
    if (lVar4 == 0) goto LAB_00b6bb38;
    lVar4 = lVar4 + -0x20;
    puVar1 = puVar3 + 4;
  } while ((undefined8 *)*puVar3 != param_1);
  FUN_00910480((uint *)(lVar2 + 0x18),puVar3);
LAB_00b6bb38:
  param_1[0x95f] = &PTR_FUN_027d3cc8;
  param_1[0x976] = &PTR_FUN_027d3e40;
  if ((void *)param_1[0x988] != (void *)0x0) {
    operator_delete__((void *)param_1[0x988]);
    param_1[0x988] = 0;
    param_1[0x987] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x95f);
  param_1[0x941] = &PTR_FUN_028266f0;
  param_1[0x958] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x95b);
  FUN_00f13d08(param_1 + 0x941);
  FUN_00f13d08(param_1 + 0x928);
  FUN_00f0d3a4(param_1 + 0x902);
  FUN_00f13d08(param_1 + 0x8e9);
  param_1[0x8c5] = &PTR_FUN_028266f0;
  param_1[0x8dc] = &PTR_FUN_02826850;
  param_1[0x82a] = &PTR_FUN_027d5388;
  FUN_00f0a79c(param_1 + 0x8df);
  FUN_00f13d08(param_1 + 0x8c5);
  param_1[0x8a7] = &PTR_FUN_028266f0;
  param_1[0x8be] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x8c1);
  FUN_00f13d08(param_1 + 0x8a7);
  param_1[0x889] = &PTR_FUN_028266f0;
  param_1[0x8a0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x8a3);
  FUN_00f13d08(param_1 + 0x889);
  FUN_00f01868(param_1 + 0x878);
  FUN_009c825c(param_1 + 0x82a);
  FUN_00f13d08(param_1 + 0x811);
  param_1[0x7f3] = &PTR_FUN_028266f0;
  param_1[0x80a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x80d);
  FUN_00f13d08(param_1 + 0x7f3);
  FUN_00f01868(param_1 + 0x7e2);
  FUN_00b27cec(param_1 + 0x7c5);
  FUN_00f0d3a4(param_1 + 0x79f);
  FUN_00f0d3a4(param_1 + 0x779);
  param_1[0x6ba] = &PTR_FUN_027d5388;
  param_1[0x755] = &PTR_FUN_028266f0;
  param_1[0x76c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x76f);
  FUN_00f13d08(param_1 + 0x755);
  param_1[0x737] = &PTR_FUN_028266f0;
  param_1[0x74e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x751);
  FUN_00f13d08(param_1 + 0x737);
  param_1[0x719] = &PTR_FUN_028266f0;
  param_1[0x730] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x733);
  FUN_00f13d08(param_1 + 0x719);
  FUN_00f01868(param_1 + 0x708);
  FUN_009c825c(param_1 + 0x6ba);
  FUN_00f01868(param_1 + 0x6a9);
  FUN_00f01868(param_1 + 0x698);
  FUN_00f01868(param_1 + 0x687);
  FUN_00ed00e0(param_1 + 0x5e0);
  FUN_00f13d08(param_1 + 0x5ac);
  FUN_00b1eb14(param_1 + 0x1bc);
  FUN_00f13d08(param_1 + 0x1a5);
  FUN_00b1df14(param_1 + 0x37);
  param_1[0x19] = &PTR_FUN_028266f0;
  param_1[0x30] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x33);
  FUN_00f13d08(param_1 + 0x19);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b6bdd8(void *param_1)

{
  FUN_00b6bae4();
  operator_delete(param_1);
  return;
}




void FUN_00b6bdfc(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc4) = param_2;
  FUN_00b6be04();
  return;
}




void FUN_00b6be04(long *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  long lVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  ulong local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar5 = FUN_00a07558();
  lVar6 = FUN_00a0766c(uVar5,*(undefined4 *)((long)param_1 + 0xc4));
  piVar1 = (int *)(lVar6 + 4);
  if (*(char *)((long)param_1 + 0x4c64) != '\0') {
    piVar1 = (int *)(lVar6 + 8);
  }
  fVar8 = (float)NEON_fminnm((float)*piVar1,0x41e80000);
  fVar9 = *(float *)(lVar6 + 0xc);
  if (fVar8 <= -1.0) {
    fVar8 = -1.0;
  }
  *(float *)(param_1 + 0x98c) = fVar9;
  uVar2 = *(undefined4 *)(lVar6 + 4);
  bVar4 = false;
  if (((int)fVar8 == 0) && (bVar4 = false, !NAN(fVar9))) {
    bVar4 = fVar9 == 0.0;
  }
  if (bVar4) {
    uVar2 = 0xffffffff;
  }
  FUN_00b1e298(param_1 + 0x37,uVar2);
  FUN_00b1d2b4((int)param_1[0x98c],*(undefined4 *)(lVar6 + 0x10),*(undefined4 *)(lVar6 + 0x14),
               *(undefined4 *)(lVar6 + 0x18),param_1 + 0x1bc,(int)fVar8);
  lVar6 = *(long *)(lVar6 + 0x28);
  if (0 < lVar6) {
    param_1[0x98b] = lVar6;
    lVar7 = FUN_00e85318(0);
    local_50 = lVar6 - lVar7 & (lVar6 - lVar7 >> 0x3f ^ 0xffffffffffffffffU);
    FUN_00b25438(param_1 + 0x95f,&local_50);
  }
  (**(code **)(*param_1 + 0x150))(param_1);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b6bf24(long param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    FUN_00f01980(param_1 + 0x2f00);
    if (*(float *)(param_1 + 0x2f44) != 0.0) {
      *(undefined4 *)(param_1 + 0x2f44) = 0;
      FUN_0091ada4(param_1 + 0x2f00);
      return;
    }
  }
  return;
}




void FUN_00b6bf74(long param_1)

{
  if (0 < *(long *)(param_1 + 0x4c58)) {
    FUN_00b252ec(param_1 + 0x4af8);
    FUN_00b6bfb8(param_1);
    return;
  }
  return;
}




void FUN_00b6bfb8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(param_1 + 0x4c58);
  if (lVar4 < 1) goto LAB_00b6c108;
  lVar2 = FUN_00e85318(0);
  uVar5 = lVar4 - lVar2;
  local_40 = uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU);
  FUN_00b25438(param_1 + 0x4af8,&local_40);
  if (((long)uVar5 < 1) && (0 < *(long *)(param_1 + 0x4c58))) {
    *(uint *)(param_1 + 0x49c4) = *(uint *)(param_1 + 0x49c4) & 0xfffffffb;
    *(uint *)(param_1 + 0x3f94) = *(uint *)(param_1 + 0x3f94) | 4;
    uVar3 = FUN_00e6ce7c("PLAYER_PROFILE_RANKED_SKILL_TIER_DECAY_ACTIVE",0);
    FUN_00f0d75c(param_1 + 0x4810,uVar3);
    if (*(char *)(param_1 + 0x2d5d) == '\0') {
      lVar4 = FUN_009580b8();
      FUN_009658c8(lVar4 + 0x18);
      uVar3 = 1;
      goto LAB_00b6c0e0;
    }
  }
  else {
    if (0x545ff < (long)uVar5) {
      FUN_00b1d548(param_1 + 0xde0,0);
      *(uint *)(param_1 + 0x3f94) = *(uint *)(param_1 + 0x3f94) & 0xfffffffb;
      goto LAB_00b6c108;
    }
    *(uint *)(param_1 + 0x49c4) = *(uint *)(param_1 + 0x49c4) | 4;
    *(uint *)(param_1 + 0x3f94) = *(uint *)(param_1 + 0x3f94) | 4;
    uVar3 = FUN_00e6ce7c("PLAYER_PROFILE_RANKED_SKILL_TIER_DECAY_WARNING",0);
    FUN_00f0d75c(param_1 + 0x4810,uVar3);
    uVar3 = 0;
LAB_00b6c0e0:
    FUN_00b1d548(param_1 + 0xde0,uVar3);
  }
  FUN_00b6c538(param_1);
LAB_00b6c108:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b6be04(long *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  long lVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  ulong uStack_50;
  long lStack_48;
  
  lVar3 = tpidr_el0;
  lStack_48 = *(long *)(lVar3 + 0x28);
  uVar5 = FUN_00a07558();
  lVar6 = FUN_00a0766c(uVar5,*(undefined4 *)((long)param_1 + 0xc4));
  piVar1 = (int *)(lVar6 + 4);
  if (*(char *)((long)param_1 + 0x4c64) != '\0') {
    piVar1 = (int *)(lVar6 + 8);
  }
  fVar8 = (float)NEON_fminnm((float)*piVar1,0x41e80000);
  fVar9 = *(float *)(lVar6 + 0xc);
  if (fVar8 <= -1.0) {
    fVar8 = -1.0;
  }
  *(float *)(param_1 + 0x98c) = fVar9;
  uVar2 = *(undefined4 *)(lVar6 + 4);
  bVar4 = false;
  if (((int)fVar8 == 0) && (bVar4 = false, !NAN(fVar9))) {
    bVar4 = fVar9 == 0.0;
  }
  if (bVar4) {
    uVar2 = 0xffffffff;
  }
  FUN_00b1e298(param_1 + 0x37,uVar2);
  FUN_00b1d2b4((int)param_1[0x98c],*(undefined4 *)(lVar6 + 0x10),*(undefined4 *)(lVar6 + 0x14),
               *(undefined4 *)(lVar6 + 0x18),param_1 + 0x1bc,(int)fVar8);
  lVar6 = *(long *)(lVar6 + 0x28);
  if (0 < lVar6) {
    param_1[0x98b] = lVar6;
    lVar7 = FUN_00e85318(0);
    uStack_50 = lVar6 - lVar7 & (lVar6 - lVar7 >> 0x3f ^ 0xffffffffffffffffU);
    FUN_00b25438(param_1 + 0x95f,&uStack_50);
  }
  (**(code **)(*param_1 + 0x150))(param_1);
  if (*(long *)(lVar3 + 0x28) == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

