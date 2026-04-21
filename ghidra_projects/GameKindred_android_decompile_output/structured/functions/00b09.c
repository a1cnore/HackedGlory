// functions/00b09 — 26 functions
#include "libGameKindred.h"




void FUN_00b090ac(long *param_1)

{
  if ((*(byte *)((long)param_1 + 0x26c) >> 4 & 1) == 0) {
    return;
  }
  *(byte *)((long)param_1 + 0x26c) = *(byte *)((long)param_1 + 0x26c) & 0xf7;
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
                    /* WARNING: Could not recover jumptable at 0x00b090d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1,1);
  return;
}




void FUN_00b090dc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(byte *)((long)param_1 + 0x26c) = *(byte *)((long)param_1 + 0x26c) | 2;
  (**(code **)(*param_1 + 0x158))();
  if (-1 < *(char *)((long)param_1 + 0x26c)) {
    return;
  }
  FUN_00f0490c(param_4);
  return;
}




void FUN_00b0912c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00b091ac(param_1,param_4);
  return;
}




void FUN_00b09134(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00b09268(param_1,param_4);
  return;
}




void FUN_00b0913c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00b09324(param_1,param_4);
  return;
}




void FUN_00b09144(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x268) = param_1;
  return;
}




void FUN_00b0914c(long param_1,char param_2)

{
  *(byte *)(param_1 + 0x26c) = *(byte *)(param_1 + 0x26c) & 0x7f | param_2 << 7;
  return;
}




void FUN_00b0915c(long *param_1,undefined8 param_2)

{
  *(byte *)((long)param_1 + 0x26c) = *(byte *)((long)param_1 + 0x26c) | 2;
  (**(code **)(*param_1 + 0x158))();
  if (-1 < *(char *)((long)param_1 + 0x26c)) {
    return;
  }
  FUN_00f0490c(param_2);
  return;
}




void FUN_00b091ac(long *param_1,undefined8 param_2)

{
  long lVar1;
  byte bVar2;
  code *pcVar3;
  
  bVar2 = *(byte *)((long)param_1 + 0x26c);
  if ((bVar2 & 6) != 2) goto LAB_00b09244;
  if ((~bVar2 & 0x60) == 0) {
    pcVar3 = *(code **)(*param_1 + 0x168);
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x47);
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 != 0) {
LAB_00b091f8:
        if ((bVar2 & 1) == 0) {
          lVar1 = (long)param_1 + 0x239;
        }
        else {
          lVar1 = param_1[0x49];
        }
        FUN_00aa12a8(0x3f800000,lVar1,0,0);
      }
    }
    else if (param_1[0x48] != 0) goto LAB_00b091f8;
    pcVar3 = *(code **)(*param_1 + 0x160);
  }
  (*pcVar3)(param_1);
  bVar2 = *(byte *)((long)param_1 + 0x26c) | 4;
  *(byte *)((long)param_1 + 0x26c) = bVar2;
LAB_00b09244:
  if ((char)bVar2 < '\0') {
    FUN_00f0490c(param_2);
    return;
  }
  return;
}




void FUN_00b09268(long *param_1,undefined8 param_2)

{
  long lVar1;
  byte bVar2;
  code *pcVar3;
  
  bVar2 = *(byte *)((long)param_1 + 0x26c);
  if ((bVar2 >> 2 & 1) == 0) goto LAB_00b092f8;
  if ((bVar2 & 0x60) == 0x20) {
    bVar2 = *(byte *)(param_1 + 0x47);
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 != 0) {
LAB_00b092a0:
        if ((bVar2 & 1) == 0) {
          lVar1 = (long)param_1 + 0x239;
        }
        else {
          lVar1 = param_1[0x49];
        }
        FUN_00aa12a8(0x3f800000,lVar1,0,0);
      }
    }
    else if (param_1[0x48] != 0) goto LAB_00b092a0;
    pcVar3 = *(code **)(*param_1 + 0x160);
  }
  else {
    pcVar3 = *(code **)(*param_1 + 0x168);
  }
  (*pcVar3)(param_1);
  bVar2 = *(byte *)((long)param_1 + 0x26c) & 0xfb;
  *(byte *)((long)param_1 + 0x26c) = bVar2;
LAB_00b092f8:
  *(byte *)((long)param_1 + 0x26c) = bVar2 & 0xfd;
  if ((char)bVar2 < '\0') {
    FUN_00f0490c(param_2);
    return;
  }
  return;
}




void FUN_00b09324(long *param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  bVar1 = *(byte *)((long)param_1 + 0x26c);
  if ((bVar1 & 6) != 0) {
    (**(code **)(*param_1 + 0x168))(param_1);
    *(byte *)((long)param_1 + 0x26c) = *(byte *)((long)param_1 + 0x26c) & 0xfb;
    FUN_00b093e4(param_1);
    FUN_00ed8868(auStack_68,DAT_03210c64,0xffffffff,0);
    FUN_00f04760(param_1,auStack_68,1);
    bVar1 = *(byte *)((long)param_1 + 0x26c);
  }
  if ((char)bVar1 < '\0') {
    FUN_00f0490c(param_2);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b093e4(long *param_1)

{
  if (0.0 < *(float *)(param_1 + 0x4d)) {
    *(byte *)((long)param_1 + 0x26c) = *(byte *)((long)param_1 + 0x26c) | 8;
    *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xffffffef;
    (**(code **)(*param_1 + 0x150))(param_1,0);
    FUN_00e70314(param_1 + 0x45);
    return;
  }
  return;
}




byte FUN_00b09448(long param_1)

{
  return *(byte *)(param_1 + 0x26c) >> 3 & 1;
}




void FUN_00b09454(long *param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  
  bVar2 = *(byte *)((long)param_1 + 0x26c);
  uVar1 = param_2 & 1;
  if (((bVar2 >> 4 & 1) != uVar1) &&
     ((*(byte *)((long)param_1 + 0x26c) = bVar2 & 0xef | (byte)(uVar1 << 4), (bVar2 >> 3 & 1) == 0
      || ((param_2 & 1) == 0)))) {
    *(uint *)((long)param_1 + 0x84) =
         *(uint *)((long)param_1 + 0x84) & 0xffffffe0 |
         *(uint *)((long)param_1 + 0x84) & 0xf | uVar1 << 4;
                    /* WARNING: Could not recover jumptable at 0x00b09498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x150))(param_1,param_2 & 1);
    return;
  }
  return;
}




void FUN_00b0949c(long param_1)

{
  FUN_008fce60(param_1 + 0x238);
  return;
}




void FUN_00b094a4(long param_1)

{
  FUN_008fce60(param_1 + 0x250);
  return;
}




void FUN_00b094ac(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x26c) = *(byte *)(param_1 + 0x26c) & 0xdf | (param_2 & 1) << 5;
  return;
}




void FUN_00b094c4(long *param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00b094d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x160))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b094d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x168))();
  return;
}




void FUN_00b094dc(long *param_1)

{
  if ((*(byte *)((long)param_1 + 0x26c) >> 6 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00b094ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x160))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b094f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x168))();
  return;
}




void FUN_00b094f8(long *param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((long)param_1 + 0x224);
  uVar2 = 0xff;
  if ((param_2 & 1) == 0) {
    uVar2 = 0x66;
  }
  *(byte *)((long)param_1 + 0x26c) = *(byte *)((long)param_1 + 0x26c) & 0xfe | param_2 & 1;
  if ((uVar1 >> 7 & 0xff) != uVar2) {
    *(uint *)((long)param_1 + 0x224) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar2 << 7;
    FUN_0091ada4(param_1 + 0x34);
  }
                    /* WARNING: Could not recover jumptable at 0x00b09558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x168))(param_1);
  return;
}




void FUN_00b0955c(void *param_1)

{
  FUN_009c825c();
  operator_delete(param_1);
  return;
}




void FUN_00b09580(long *param_1)

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
  undefined **ppuVar14;
  uint uVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined4 local_90;
  undefined4 uStack_8c;
  long local_88;
  
  lVar16 = tpidr_el0;
  local_88 = *(long *)(lVar16 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027dc088;
  FUN_00f017e8(plVar1);
  plVar2 = param_1 + 0x28;
  param_1[0x17] = (long)&PTR_FUN_027c1f80;
  FUN_00f017e8(plVar2);
  plVar3 = param_1 + 0x39;
  param_1[0x28] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8();
  plVar4 = param_1 + 0x57;
  FUN_00f0e4a8();
  plVar5 = param_1 + 0x75;
  FUN_00f0e4a8(plVar5);
  plVar6 = param_1 + 0x93;
  FUN_00f0e4a8();
  plVar7 = param_1 + 0xb1;
  FUN_00f017e8(plVar7);
  plVar8 = param_1 + 0xc2;
  param_1[0xb1] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8(plVar8);
  plVar9 = param_1 + 0xe0;
  FUN_00f0e4a8();
  plVar10 = param_1 + 0xfe;
  FUN_00f0e4a8(plVar10);
  plVar11 = param_1 + 0x11c;
  FUN_00afbfb0(plVar11);
  FUN_00b123bc(param_1 + 0x158);
  plVar12 = param_1 + 0x205;
  FUN_00f0d160();
  plVar13 = param_1 + 0x22b;
  FUN_00f11234(plVar13);
  param_1[0x25f] = 0;
  *(undefined4 *)(param_1 + 0x260) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x130c) = 0x101010100000000;
  *(undefined8 *)((long)param_1 + 0x1304) = 0;
  *(undefined1 *)((long)param_1 + 0x1314) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,param_1 + 0x158,1);
  FUN_00f023ec(plVar1,plVar13,1);
  FUN_00f023ec(plVar13,plVar7,1);
  FUN_00f023ec(plVar7,plVar8,1);
  FUN_00f023ec(plVar13,plVar2,1);
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00f023ec(plVar2,plVar4,1);
  FUN_00f023ec(plVar2,plVar5,1);
  FUN_00f023ec(plVar2,plVar6,1);
  FUN_00f023ec(plVar1,plVar9,1);
  FUN_00f023ec(plVar1,plVar10,1);
  FUN_00f023ec(plVar1,plVar11,1);
  FUN_00f023ec(plVar1,plVar12,1);
  FUN_00f112f0(plVar13,1);
  if ((*(float *)(param_1 + 0x235) != 0.0) || (*(float *)((long)param_1 + 0x11ac) != 0.5)) {
    param_1[0x235] = 0x3f00000000000000;
    FUN_0091ada4(plVar13);
  }
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  *(uint *)((long)param_1 + 0x24c) = *(uint *)((long)param_1 + 0x24c) | 4;
  if ((*(float *)(param_1 + 0x43) != 0.0) || (*(float *)((long)param_1 + 0x21c) != 0.5)) {
    param_1[0x43] = 0x3f00000000000000;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0e548(plVar8,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  *(uint *)((long)param_1 + 0x694) = *(uint *)((long)param_1 + 0x694) & 0xfffffffb;
  if ((*(float *)(param_1 + 0xcc) != 0.0) || (*(float *)((long)param_1 + 0x664) != 0.5)) {
    param_1[0xcc] = 0x3f00000000000000;
    FUN_0091ada4(plVar8);
  }
  FUN_00f0e548(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"splash_glass_shadow");
  FUN_00f0e670(plVar4,&DAT_01bee7f6,2);
  uVar15 = *(uint *)((long)param_1 + 0x33c);
  if ((uVar15 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x33c) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x2600;
    FUN_0091ada4(plVar4);
  }
  if ((*(float *)(param_1 + 0x61) != 0.0) || (*(float *)((long)param_1 + 0x30c) != 0.5)) {
    param_1[0x61] = 0x3f00000000000000;
    FUN_0091ada4(plVar4);
  }
  FUN_00f0e548(plVar5,PTR_s_build___MenuPartsCommon_tga_02be3530,"splash_glass_shadow");
  uVar15 = *(uint *)((long)param_1 + 0x42c);
  if ((uVar15 & 0x7f80) != 0x3900) {
    *(uint *)((long)param_1 + 0x42c) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x3900;
    FUN_0091ada4(plVar5);
  }
  *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | 1;
  if ((*(float *)(param_1 + 0x7f) != 1.0) || (*(float *)((long)param_1 + 0x3fc) != 0.5)) {
    param_1[0x7f] = 0x3f0000003f800000;
    FUN_0091ada4(plVar5);
  }
  FUN_00f0e548(plVar9,PTR_s_build___MenuPartsCommon_tga_02be3530,"menu_fuzzy_dot");
  FUN_00f0e670(plVar9,&DAT_01bee7f6,2);
  if ((*(float *)(param_1 + 0xea) != 0.5) || (*(float *)((long)param_1 + 0x754) != 0.85)) {
    param_1[0xea] = 0x3f59999a3f000000;
    FUN_0091ada4(plVar9);
  }
  if ((*(float *)(param_1 + 0xe9) != 2.7) || (*(float *)((long)param_1 + 0x74c) != 1.0)) {
    param_1[0xe9] = 0x3f800000402ccccd;
    FUN_0091ada4(plVar9);
  }
  *(byte *)(param_1 + 0xfb) = *(byte *)(param_1 + 0xfb) | 2;
  FUN_00f0e548(plVar10,PTR_s_build___MenuPartsCommon_tga_02be3530,"menu_fuzzy_dot");
  FUN_00f0e670(plVar10,&DAT_01bee7f6,2);
  if ((*(float *)(param_1 + 0x108) != 0.5) || (*(float *)((long)param_1 + 0x844) != 0.15)) {
    param_1[0x108] = 0x3e19999a3f000000;
    FUN_0091ada4(plVar10);
  }
  if ((*(float *)(param_1 + 0x107) != 2.7) || (*(float *)((long)param_1 + 0x83c) != 1.0)) {
    param_1[0x107] = 0x3f800000402ccccd;
    FUN_0091ada4(plVar10);
  }
  FUN_00f0e548(plVar6,PTR_s_build___MenuPartsCommon_tga_02be3530,"shadow_bar");
  if ((*(float *)(param_1 + 0x9d) != 0.0) || (*(float *)((long)param_1 + 0x4ec) != 0.5)) {
    param_1[0x9d] = 0x3f00000000000000;
    FUN_0091ada4(plVar6);
  }
  uVar15 = *(uint *)((long)param_1 + 0x51c);
  if ((uVar15 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0x51c) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x5280;
    FUN_0091ada4(plVar6);
  }
  uVar17 = FUN_00d6eb50();
  uVar17 = FUN_00d6eb5c(uVar17,"*KindredXPBarEffects*");
  FUN_00afc274(plVar11,uVar17);
  FUN_00f00298(&uStack_8c,&local_90);
  FUN_00f13f08(uStack_8c,local_90,plVar11);
  if ((*(float *)(param_1 + 0x126) != 0.5) || (*(float *)((long)param_1 + 0x934) != 0.5)) {
    param_1[0x126] = 0x3f0000003f000000;
    FUN_0091ada4(plVar11);
  }
  uVar18 = FUN_0092ea9c();
  ppuVar14 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
  if ((uVar18 & 1) == 0) {
    ppuVar14 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78;
  }
  FUN_00f0d378(plVar12,*ppuVar14);
  uVar15 = *(uint *)((long)param_1 + 0x10ac);
  if ((uVar15 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x10ac) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x6600;
    FUN_0091ada4(plVar12);
  }
  FUN_00f0da30(plVar12,1);
  if (*(long *)(lVar16 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b09c38(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 local_60;
  float local_5c;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  plVar6 = param_3 + 0x75;
  uVar4 = *(uint *)((long)param_3 + 0x42c);
  *(uint *)((long)param_3 + 0x42c) = uVar4 | 4;
  *(uint *)((long)param_3 + 0x784) = *(uint *)((long)param_3 + 0x784) & 0xfffffffb;
  *(uint *)((long)param_3 + 0x874) = *(uint *)((long)param_3 + 0x874) & 0xfffffffb;
  uVar3 = *(uint *)((long)param_3 + 0x33c) & 0xfffffffb;
  plVar1 = param_3 + 0x39;
  *(uint *)((long)param_3 + 0x33c) = uVar3 | (uint)*(byte *)((long)param_3 + 0x1312) << 2;
  if ((*(byte *)((long)param_3 + 0x694) >> 2 & 1) == 0) {
    if ((*(uint *)((long)param_3 + 0x24c) >> 2 & 1) == 0) {
      *(uint *)((long)param_3 + 0x33c) = uVar3;
      *(uint *)((long)param_3 + 0x42c) = uVar4 & 0xfffffffb;
      goto LAB_00b09e78;
    }
    fVar7 = (float)FUN_00f0e700(plVar1);
    if ((*(float *)(param_3 + 0x7d) != fVar7) ||
       (*(float *)((long)param_3 + 0x3ec) != *(float *)((long)param_3 + 0x20c))) {
      *(float *)(param_3 + 0x7d) = fVar7;
      *(float *)((long)param_3 + 0x3ec) = *(float *)((long)param_3 + 0x20c);
      FUN_0091ada4(plVar6);
    }
    fVar7 = (float)FUN_00f0e700(plVar1);
    param_2 = *(float *)(param_3 + 0x124);
    if (param_2 == fVar7) goto LAB_00b09e78;
    plVar6 = param_3 + 0x11c;
    *(float *)(param_3 + 0x124) = fVar7;
  }
  else {
    plVar2 = param_3 + 0xc2;
    if ((*(uint *)((long)param_3 + 0x24c) >> 2 & 1) == 0) {
      fVar7 = (float)FUN_00f0e700(plVar2);
      FUN_00f0e700(plVar1);
      local_60 = NEON_fminnm(fVar7 + fVar7,0x428c0000);
    }
    else {
      fVar7 = (float)FUN_00f0e700(plVar1);
      param_2 = 0.2;
      uVar9 = NEON_fminnm(fVar7 * 0.2,0x428c0000);
      FUN_00f0e700(plVar1);
      local_60 = uVar9;
    }
    local_5c = param_2;
    FUN_00f13f18(param_3 + 0x57,&local_60);
    fVar7 = (float)FUN_00f0e700(plVar2);
    FUN_00f0e700(plVar1);
    local_60 = NEON_fminnm(fVar7 + fVar7,0x428c0000);
    local_5c = param_2;
    FUN_00f13f18(plVar6,&local_60);
    fVar8 = *(float *)(param_3 + 0xca);
    fVar7 = (float)FUN_00f0e700(plVar2);
    fVar8 = fVar8 + fVar7;
    if ((*(float *)(param_3 + 0x7d) != fVar8) ||
       (*(float *)((long)param_3 + 0x3ec) != *(float *)((long)param_3 + 0x20c))) {
      *(float *)(param_3 + 0x7d) = fVar8;
      *(float *)((long)param_3 + 0x3ec) = *(float *)((long)param_3 + 0x20c);
      FUN_0091ada4(plVar6);
    }
    if (*(float *)(param_3 + 0x124) != fVar8) {
      *(float *)(param_3 + 0x124) = fVar8;
      FUN_0091ada4(param_3 + 0x11c);
    }
    fVar7 = *(float *)(param_3 + 0xca);
    *(uint *)((long)param_3 + 0x784) =
         *(uint *)((long)param_3 + 0x784) & 0xfffffffb |
         (uint)*(byte *)((long)param_3 + 0x1311) << 2;
    *(uint *)((long)param_3 + 0x874) =
         *(uint *)((long)param_3 + 0x874) & 0xfffffffb |
         (uint)*(byte *)((long)param_3 + 0x1311) << 2;
    if (*(float *)(param_3 + 0xe8) != fVar7) {
      *(float *)(param_3 + 0xe8) = fVar7;
      FUN_0091ada4(param_3 + 0xe0);
      fVar7 = *(float *)(param_3 + 0xca);
    }
    param_2 = *(float *)(param_3 + 0x106);
    if (param_2 == fVar7) goto LAB_00b09e78;
    plVar6 = param_3 + 0xfe;
    *(float *)(param_3 + 0x106) = fVar7;
  }
  FUN_0091ada4(plVar6);
LAB_00b09e78:
  if (*(char *)((long)param_3 + 0x1314) != '\0') {
    plVar6 = param_3 + 0x205;
    fVar7 = (float)(**(code **)(*param_3 + 0x50))(param_3);
    fVar8 = (float)FUN_00f01c20(plVar6);
    fVar7 = fVar7 * 0.5 - fVar8 * 0.5;
    FUN_00f01c20(plVar6);
    if ((*(float *)(param_3 + 0x20d) != fVar7) ||
       (*(float *)((long)param_3 + 0x106c) != param_2 * -0.5)) {
      *(float *)(param_3 + 0x20d) = fVar7;
      *(float *)((long)param_3 + 0x106c) = param_2 * -0.5;
      FUN_0091ada4(plVar6);
    }
    fVar7 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    FUN_00f0db64(fVar7 + -8.0,0,0x3f800000,plVar6);
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined1  [16] FUN_00b09f44(long param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined8 unaff_d8;
  undefined8 in_register_00005108;
  
  fVar1 = (float)FUN_00f0e700(param_1 + 0x1c8);
  uVar3 = NEON_fminnm(fVar1 * 0.2,0x428c0000);
  auVar2._4_4_ = (int)((ulong)unaff_d8 >> 0x20);
  auVar2._0_4_ = uVar3;
  FUN_00f0e700(param_1 + 0x1c8);
  auVar2._8_8_ = in_register_00005108;
  return auVar2;
}




undefined4 FUN_00b09f94(float param_1)

{
  undefined4 uVar1;
  
  uVar1 = NEON_fminnm(param_1 + param_1,0x428c0000);
  return uVar1;
}




void FUN_00b09fa8(long param_1,uint param_2,int param_3,uint param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  param_2 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
  if (param_3 < (int)(param_2 + 1)) {
    param_3 = param_2 + 1;
  }
  if ((int)param_4 <= (int)param_2) {
    param_4 = param_2;
  }
  fVar3 = *(float *)(param_1 + 0x12f8);
  fVar2 = (float)NEON_fminnm((float)(int)(param_4 - param_2) / (float)(int)(param_3 - param_2),
                             0x3f800000);
  lVar1 = param_1 + 0x1c8;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  FUN_00f0e700(lVar1);
  FUN_00f13f08(fVar2 * fVar3,lVar1);
  FUN_00b0a0b0(param_1);
  if ((*(float *)(param_1 + 0x2f8) != *(float *)(param_1 + 0x208)) ||
     (*(float *)(param_1 + 0x2fc) != *(float *)(param_1 + 0x20c))) {
    *(float *)(param_1 + 0x2f8) = *(float *)(param_1 + 0x208);
    *(float *)(param_1 + 0x2fc) = *(float *)(param_1 + 0x20c);
    FUN_0091ada4(param_1 + 0x2b8);
  }
  fVar2 = (float)FUN_00f0e700(lVar1);
  if ((*(float *)(param_1 + 1000) != fVar2) ||
     (*(float *)(param_1 + 0x3ec) != *(float *)(param_1 + 0x20c))) {
    *(float *)(param_1 + 1000) = fVar2;
    *(float *)(param_1 + 0x3ec) = *(float *)(param_1 + 0x20c);
    FUN_0091ada4(param_1 + 0x3a8);
  }
  *(uint *)(param_1 + 0x1308) = param_2;
  *(int *)(param_1 + 0x130c) = param_3;
  *(uint *)(param_1 + 0x1304) = param_4;
  return;
}

