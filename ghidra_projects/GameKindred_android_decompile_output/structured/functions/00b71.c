// functions/00b71 — 20 functions
#include "libGameKindred.h"




void thunk_FUN_00b71088(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (*(int *)(param_1 + 0x8b8) != 0) {
    uVar4 = 0;
    do {
      lVar2 = FUN_00cdbb24(*(long *)(*(long *)(param_1 + 0x8c0) + uVar4 * 8) + 0xdd8);
      if (lVar2 != 0) {
        uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x8c0) + uVar4 * 8);
        uVar1 = FUN_00cdccb0();
        FUN_00ca57a4(uVar3,uVar1 & 1);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x8b8));
  }
  return;
}




void FUN_00b71080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00b710f4(param_1,param_2,param_5);
  return;
}




void FUN_00b71088(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (*(int *)(param_1 + 0x8b8) != 0) {
    uVar4 = 0;
    do {
      lVar2 = FUN_00cdbb24(*(long *)(*(long *)(param_1 + 0x8c0) + uVar4 * 8) + 0xdd8);
      if (lVar2 != 0) {
        uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x8c0) + uVar4 * 8);
        uVar1 = FUN_00cdccb0();
        FUN_00ca57a4(uVar3,uVar1 & 1);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x8b8));
  }
  return;
}




void FUN_00b710f4(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar1 = param_1 + 600;
  uVar2 = FUN_00ed0848(lVar1);
  if (((((uVar2 & 1) == 0) && (uVar2 = FUN_00ed08a8(lVar1), (uVar2 & 1) == 0)) &&
      (uVar2 = FUN_00ed0854(lVar1), (uVar2 & 1) == 0)) &&
     (param_3 - 1U < *(uint *)(param_1 + 0x8b8))) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x8c0) + (ulong)(param_3 - 1U) * 8) + 0xdd8;
    lVar3 = FUN_00cdbb24(lVar1);
    if ((lVar3 != 0) && ((*(ushort *)(lVar3 + 0xb0) >> 8 & 1) != 0)) {
      FUN_00cdd050();
      FUN_00cae740(0x44e10000,0x44960000,lVar1,1,0);
      return;
    }
  }
  return;
}




void FUN_00b711a0(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x8b8) != 0) {
    uVar2 = 0;
    do {
      lVar1 = *(long *)(*(long *)(param_1 + 0x8c0) + uVar2 * 8);
      FUN_00bd6afc(lVar1 + 0xdc0,lVar1 + 0xdd8);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x8b8));
  }
  return;
}




void FUN_00b711ec(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x8b8) != 0) {
    uVar2 = 0;
    do {
      lVar1 = *(long *)(*(long *)(param_1 + 0x8c0) + uVar2 * 8);
      FUN_00bd6afc(lVar1 + 0xdc0,lVar1 + 0xdd8);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x8b8));
  }
  return;
}




void FUN_00b71238(uint *param_1,uint param_2)

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

void FUN_00b712b8(undefined1 param_1 [16],float param_2,long *param_3)

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
  undefined **ppuVar10;
  uint uVar11;
  undefined4 uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  float fVar16;
  long lVar17;
  code *local_a8;
  long *plStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_78;
  
  lVar13 = tpidr_el0;
  local_78 = *(long *)(lVar13 + 0x28);
  FUN_00b89cd8();
  plVar1 = param_3 + 0x19;
  *param_3 = (long)&PTR_FUN_027e5d38;
  FUN_00ed37b0(plVar1,0);
  plVar2 = param_3 + 0xc4;
  FUN_00abaee8(plVar2,0);
  plVar3 = param_3 + 0x183;
  FUN_00abaee8(plVar3,0);
  plVar4 = param_3 + 0x242;
  FUN_00f017e8(plVar4);
  plVar5 = param_3 + 0x253;
  param_3[0x242] = (long)&PTR_FUN_027c1f80;
  FUN_00abaee8(plVar5,0);
  plVar6 = param_3 + 0x312;
  FUN_00f0d160();
  plVar7 = param_3 + 0x33a;
  param_3[0x339] = 0;
  param_3[0x338] = 0;
  FUN_00f11234(plVar7);
  FUN_00f13ca4(param_3 + 0x36e);
  FUN_00f13ca4(param_3 + 0x385);
  plVar8 = param_3 + 0x39c;
  FUN_00f0d160(plVar8);
  FUN_00b27c04(param_3 + 0x3c2,0);
  plVar9 = param_3 + 0x3df;
  FUN_00f0d160(plVar9);
  lVar17 = _DAT_03218ef8;
  *(undefined4 *)(param_3 + 0x407) = 0;
  param_3[0x405] = lVar17;
  param_3[0x406] = lVar17;
  (**(code **)(*param_3 + 0x78))(param_3,plVar9,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar7,1);
  FUN_00f023ec(plVar7,plVar1,1);
  (**(code **)(*param_3 + 0x78))(param_3,param_3 + 0x36e,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar2,1);
  (**(code **)(*param_3 + 0x78))(param_3,param_3 + 0x385,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar3,1);
  FUN_00f023ec(plVar3,plVar8,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar4,1);
  FUN_00f023ec(plVar4,plVar5,1);
  (**(code **)(*param_3 + 0x78))(param_3,param_3 + 0x3c2,1);
  uVar14 = FUN_0092ea9c();
  FUN_00f0d92c(plVar9,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90,&DAT_01bee7fa);
  uVar15 = FUN_00e6ce7c("MENU_TROPHY_DATA_ERROR",0);
  FUN_00f0d75c(plVar9,uVar15);
  FUN_00f0dac8(plVar9,3);
  FUN_00ed04d8(plVar1,1,0);
  FUN_00ed04d8(plVar1,DAT_02be9bf0 == '\0');
  *(uint *)((long)param_3 + 0x1bf4) = *(uint *)((long)param_3 + 0x1bf4) | 0x10;
  FUN_00f0e578(param_3 + 0x15f,"arrow_down");
  *(byte *)(param_3 + 0x17a) = *(byte *)(param_3 + 0x17a) | 2;
  if ((*(float *)(param_3 + 0x168) != 2.0) || (*(float *)((long)param_3 + 0xb44) != 2.0)) {
    param_3[0x168] = 0x4000000040000000;
    FUN_0091ada4(param_3 + 0x15f);
  }
  FUN_00abb1c8(0,plVar2,&DAT_01bee7f6);
  if ((*(float *)(param_3 + 0xcd) != 1.0) || (*(float *)((long)param_3 + 0x66c) != 1.0)) {
    lVar17 = NEON_fmov(0x3f800000,4);
    param_3[0xcd] = lVar17;
    FUN_0091ada4(plVar2);
  }
  FUN_00b09144(0,plVar2);
  FUN_00abb250(plVar2,1);
  uVar11 = *(uint *)((long)param_3 + 0x6a4);
  if ((uVar11 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_3 + 0x6a4) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x5f80;
    FUN_0091ada4(plVar2);
  }
  local_90 = 0;
  uStack_88 = 0;
  uVar12 = DAT_03210c64;
  local_a8 = FUN_00b71a18;
  local_98 = 0;
  plStack_a0 = param_3;
  local_80 = uVar12;
  FUN_009693a0(param_3 + 0xc5,&local_a8);
  *(uint *)((long)param_3 + 0x6a4) = *(uint *)((long)param_3 + 0x6a4) & 0xfffffffb;
  *(uint *)((long)param_3 + 0x1cac) = *(uint *)((long)param_3 + 0x1cac) | 0x10;
  FUN_00f0e578(param_3 + 0x21e,"arrow_down");
  if ((*(float *)(param_3 + 0x227) != 2.0) || (*(float *)((long)param_3 + 0x113c) != 2.0)) {
    param_3[0x227] = 0x4000000040000000;
    FUN_0091ada4(param_3 + 0x21e);
  }
  FUN_00abb1c8(0,plVar3,&DAT_01bee7f6);
  if ((*(float *)(param_3 + 0x18c) != 1.0) || (*(float *)((long)param_3 + 0xc64) != 1.0)) {
    lVar17 = NEON_fmov(0x3f800000,4);
    param_3[0x18c] = lVar17;
    FUN_0091ada4(plVar3);
  }
  FUN_00b09144(0,plVar3);
  FUN_00abb250(plVar3,1);
  uVar11 = *(uint *)((long)param_3 + 0xc9c);
  if ((uVar11 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_3 + 0xc9c) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x5f80;
    FUN_0091ada4(plVar3);
  }
  local_a8 = FUN_00b71a20;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_3;
  local_80 = uVar12;
  FUN_009693a0(param_3 + 0x184,&local_a8);
  *(uint *)((long)param_3 + 0xc9c) = *(uint *)((long)param_3 + 0xc9c) & 0xfffffffb;
  ppuVar10 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  if ((uVar14 & 1) == 0) {
    ppuVar10 = &PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80;
  }
  FUN_00f0d92c(plVar8,*ppuVar10,&DAT_01bee7fa);
  uVar15 = FUN_00e6ce7c("MENU_TROPHY_PAGE_DOWN_ARROW_LABEL",0);
  FUN_00f0d75c(plVar8,uVar15);
  *(uint *)((long)param_3 + 0x1294) = *(uint *)((long)param_3 + 0x1294) & 0xfffffffb;
  FUN_00f0e578(param_3 + 0x2ee,"google_achievements");
  FUN_00abb250(plVar5,1);
  FUN_00abb1c8(0,plVar5,&DAT_01bee7f6);
  uVar11 = *(uint *)((long)param_3 + 0x131c);
  if ((uVar11 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_3 + 0x131c) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar5);
  }
  lVar17 = NEON_fmov(0x41a00000,4);
  param_3[0x25e] = lVar17;
  local_a8 = thunk_FUN_00b729b4;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_3;
  local_80 = uVar12;
  FUN_009693a0(param_3 + 0x254,&local_a8);
  if ((*(float *)(param_3 + 0x25c) != 2.0) || (*(float *)((long)param_3 + 0x12e4) != 2.0)) {
    param_3[0x25c] = 0x4000000040000000;
    FUN_0091ada4(plVar5);
  }
  if ((*(float *)(param_3 + 0x25d) != 0.5) || (*(float *)((long)param_3 + 0x12ec) != 0.5)) {
    param_3[0x25d] = 0x3f0000003f000000;
    FUN_0091ada4(plVar5);
  }
  FUN_00f0d378(plVar6,PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10);
  FUN_00f0dac8(plVar6,3);
  uVar15 = FUN_00e6ce7c("MENU_TROPHY_CASE_GOOGLE_ACHIEVEMENTS_LABEL",0);
  FUN_00f0d75c(plVar6,uVar15);
  uVar11 = *(uint *)((long)param_3 + 0x1914);
  if ((uVar11 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_3 + 0x1914) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x5f80;
    FUN_0091ada4(plVar6);
  }
  FUN_00f01c20(plVar5);
  fVar16 = param_2 * 0.5 + 6.0;
  if ((*(float *)(param_3 + 0x31a) != 0.0) || (*(float *)((long)param_3 + 0x18d4) != fVar16)) {
    *(undefined4 *)(param_3 + 0x31a) = 0;
    *(float *)((long)param_3 + 0x18d4) = fVar16;
    FUN_0091ada4(plVar6);
  }
  local_a8 = (code *)0x3f000000;
  (**(code **)(param_3[0x312] + 0x28))(plVar6,&local_a8);
  local_80 = FUN_00f048a4("EVENT_SCROLLING_TO_PAGE");
  local_a8 = FUN_00b71a2c;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_3;
  FUN_009693a0(param_3 + 1,&local_a8);
  local_80 = FUN_00f048a4("EVENT_SCROLLING_FINISHED");
  local_a8 = FUN_00b71a34;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_3;
  FUN_009693a0(param_3 + 1,&local_a8);
  if (*(long *)(lVar13 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b71a18(long param_1)

{
  FUN_00ed4308(param_1 + 200);
  return;
}




void FUN_00b71a20(long param_1)

{
  FUN_00ed42e4(param_1 + 200);
  return;
}




void FUN_00b71a2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00b723ec(param_1,param_4);
  return;
}




void FUN_00b71a34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00b724f4(param_1,param_4);
  return;
}




void FUN_00b71a3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e5d38;
  FUN_00b71c88();
  FUN_00f0d3a4(param_1 + 0x3df);
  FUN_00b27cec(param_1 + 0x3c2);
  FUN_00f0d3a4(param_1 + 0x39c);
  FUN_00f13d08(param_1 + 0x385);
  FUN_00f13d08(param_1 + 0x36e);
  FUN_00f13d08(param_1 + 0x33a);
  if ((void *)param_1[0x339] != (void *)0x0) {
    operator_delete__((void *)param_1[0x339]);
    param_1[0x339] = 0;
    param_1[0x338] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x312);
  param_1[0x253] = &PTR_FUN_027d5388;
  param_1[0x2ee] = &PTR_FUN_028266f0;
  param_1[0x305] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x308);
  FUN_00f13d08(param_1 + 0x2ee);
  param_1[0x2d0] = &PTR_FUN_028266f0;
  param_1[0x2e7] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2ea);
  FUN_00f13d08(param_1 + 0x2d0);
  param_1[0x2b2] = &PTR_FUN_028266f0;
  param_1[0x2c9] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2cc);
  FUN_00f13d08(param_1 + 0x2b2);
  FUN_00f01868(param_1 + 0x2a1);
  FUN_009c825c(param_1 + 0x253);
  FUN_00f01868(param_1 + 0x242);
  param_1[0x183] = &PTR_FUN_027d5388;
  param_1[0x21e] = &PTR_FUN_028266f0;
  param_1[0x235] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x238);
  FUN_00f13d08(param_1 + 0x21e);
  param_1[0x200] = &PTR_FUN_028266f0;
  param_1[0x217] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x21a);
  FUN_00f13d08(param_1 + 0x200);
  param_1[0x1e2] = &PTR_FUN_028266f0;
  param_1[0x1f9] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1fc);
  FUN_00f13d08(param_1 + 0x1e2);
  FUN_00f01868(param_1 + 0x1d1);
  FUN_009c825c(param_1 + 0x183);
  param_1[0xc4] = &PTR_FUN_027d5388;
  param_1[0x15f] = &PTR_FUN_028266f0;
  param_1[0x176] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x179);
  FUN_00f13d08(param_1 + 0x15f);
  param_1[0x141] = &PTR_FUN_028266f0;
  param_1[0x158] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x15b);
  FUN_00f13d08(param_1 + 0x141);
  param_1[0x123] = &PTR_FUN_028266f0;
  param_1[0x13a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x13d);
  FUN_00f13d08(param_1 + 0x123);
  FUN_00f01868(param_1 + 0x112);
  FUN_009c825c(param_1 + 0xc4);
  thunk_FUN_00ed00e0(param_1 + 0x19);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b71c88(long param_1)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x19c0) != 0) {
    uVar3 = 0;
    do {
      uVar1 = FUN_00f02540(*(undefined8 *)(*(long *)(param_1 + 0x19c8) + uVar3 * 8));
      if ((uVar1 & 1) != 0) {
        FUN_00f01a4c(*(undefined8 *)(*(long *)(param_1 + 0x19c8) + uVar3 * 8),1);
      }
      plVar2 = *(long **)(*(long *)(param_1 + 0x19c8) + uVar3 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x19c0));
  }
  if (*(long *)(param_1 + 0x19c8) != 0) {
    *(undefined4 *)(param_1 + 0x19c0) = 0;
  }
  *(undefined4 *)(param_1 + 0x61c) = 0;
  *(uint *)(param_1 + 0x6a4) = *(uint *)(param_1 + 0x6a4) & 0xfffffffb;
  *(uint *)(param_1 + 0xc9c) = *(uint *)(param_1 + 0xc9c) & 0xfffffffb;
  FUN_00ed3878(param_1 + 200);
  *(uint *)(param_1 + 0x1f7c) = *(uint *)(param_1 + 0x1f7c) | 4;
  return;
}




void FUN_00b71d34(void *param_1)

{
  FUN_00b71a3c();
  operator_delete(param_1);
  return;
}




void FUN_00b71d58(void)

{
  return;
}




void FUN_00b71d5c(void)

{
  return;
}




void FUN_00b71d60(void)

{
  return;
}




void FUN_00b71d64(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b71d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_00b71d70(undefined1 param_1 [16],undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_180;
  void *local_178;
  undefined8 local_170;
  undefined1 auStack_168 [40];
  long *local_140;
  undefined8 local_120;
  void *local_118;
  byte local_110 [16];
  void *local_100;
  undefined8 local_e0;
  undefined4 local_c8;
  ulong local_c0;
  void *local_b8;
  byte local_b0;
  undefined7 uStack_af;
  void *local_a0;
  undefined4 local_98;
  undefined8 local_94;
  long local_88;
  
  lVar4 = tpidr_el0;
  local_88 = *(long *)(lVar4 + 0x28);
  uVar10 = (**(code **)(*param_3 + 0x48))();
  uVar5 = FUN_0092ea9c();
  fVar16 = (float)uVar10;
  plVar6 = param_3 + 0x3df;
  fVar15 = (float)param_2;
  if ((*(float *)(param_3 + 999) != fVar16 * 0.5) ||
     (*(float *)((long)param_3 + 0x1f3c) != fVar15 * 0.5)) {
    *(float *)(param_3 + 999) = fVar16 * 0.5;
    *(float *)((long)param_3 + 0x1f3c) = fVar15 * 0.5;
    FUN_0091ada4(plVar6);
  }
  local_170 = (undefined **)0x3f0000003f000000;
  (**(code **)(param_3[0x3df] + 0x28))(plVar6,&local_170);
  FUN_00f0dad0(fVar16 + -20.0,plVar6,1);
  FUN_00f13f08(uVar10,param_2,param_3 + 0x33a);
  uVar8 = (ulong)*(uint *)(param_3 + 0x338);
  *(float *)((long)param_3 + 0x5fc) = fVar16;
  *(float *)(param_3 + 0xc0) = fVar15;
  if (*(uint *)(param_3 + 0x338) != 0) {
    uVar9 = 0;
    do {
      if (*(long *)(param_3[0x339] + uVar9 * 8) != 0) {
        FUN_00f13f08((fVar15 + -35.0) * 1.15,fVar15 + -35.0);
        (**(code **)(**(long **)(param_3[0x339] + uVar9 * 8) + 0x138))();
        if (uVar9 == 0) {
          uVar7 = 4;
          uVar11 = 0;
          plVar6 = param_3 + 0x19;
        }
        else {
          uVar7 = 6;
          plVar6 = *(long **)(param_3[0x339] + (ulong)((int)uVar9 - 1) * 8);
          uVar11 = 0x420c0000;
        }
        FUN_00f07940(0,uVar11,*(undefined8 *)(param_3[0x339] + uVar9 * 8),4,plVar6,uVar7);
      }
      uVar8 = (ulong)*(uint *)(param_3 + 0x338);
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar8);
  }
  fVar12 = fVar15 * (float)uVar8;
  FUN_00ed02d8(uVar10,fVar12,param_3 + 0x19);
  fVar17 = 460.0;
  if ((int)param_3[0x338] == 0) goto LAB_00b72340;
  fVar12 = (float)FUN_00f0eac0(*(long *)param_3[0x339] + 0x1d0);
  fVar13 = -0.25;
  plVar6 = param_3 + 0xc4;
  fVar18 = fVar16 + (fVar16 - fVar12) * -0.25;
  fVar19 = *(float *)(param_3 + 0x405) + fVar18;
  FUN_00f01c20(plVar6);
  fVar14 = *(float *)(param_3 + 0xcc);
  fVar12 = *(float *)((long)param_3 + 0x202c) + fVar13 * 0.5 + 10.0;
  if ((fVar14 != fVar19) || (fVar14 = *(float *)((long)param_3 + 0x664), fVar14 != fVar12)) {
    *(float *)(param_3 + 0xcc) = fVar19;
    *(float *)((long)param_3 + 0x664) = fVar12;
    FUN_0091ada4(plVar6);
  }
  local_170 = (undefined **)0x3f0000003f000000;
  (**(code **)(param_3[0xc4] + 0x28))(plVar6,&local_170);
  plVar1 = param_3 + 0x183;
  FUN_00f01c20(plVar1);
  fVar12 = *(float *)((long)param_3 + 0x2034) + fVar15 + fVar14 * -0.5 + -10.0;
  fVar18 = fVar18 + *(float *)(param_3 + 0x406);
  fVar15 = fVar12 - *(float *)(param_3 + 0x407);
  if (*(float *)(param_3 + 0x407) <= 0.0) {
    fVar15 = fVar12;
  }
  if ((*(float *)(param_3 + 0x18b) != fVar18) || (*(float *)((long)param_3 + 0xc5c) != fVar15)) {
    *(float *)(param_3 + 0x18b) = fVar18;
    *(float *)((long)param_3 + 0xc5c) = fVar15;
    FUN_0091ada4(plVar1);
  }
  local_170 = (undefined **)0x3f0000003f000000;
  (**(code **)(param_3[0x183] + 0x28))(plVar1,&local_170);
  fVar12 = *(float *)(param_3 + 0x3a5);
  fVar15 = 1.0;
  if ((uVar5 & 1) == 0) {
    fVar15 = 0.75;
  }
  plVar2 = param_3 + 0x39c;
  if ((fVar12 != fVar15) || (fVar12 = *(float *)((long)param_3 + 0x1d2c), fVar12 != fVar15)) {
    *(float *)(param_3 + 0x3a5) = fVar15;
    *(float *)((long)param_3 + 0x1d2c) = fVar15;
    FUN_0091ada4(plVar2);
  }
  if (*(float *)(param_3 + 0x3a4) == 0.0) {
    fVar15 = -28.0;
    fVar12 = -28.0;
    if (*(float *)((long)param_3 + 0x1d24) != -28.0) goto LAB_00b7208c;
  }
  else {
LAB_00b7208c:
    fVar15 = fVar12;
    param_3[0x3a4] = -0x3e20000000000000;
    FUN_0091ada4(plVar2);
  }
  local_170 = (undefined **)0x3f8000003f000000;
  (**(code **)(param_3[0x39c] + 0x28))(plVar2,&local_170);
  plVar3 = param_3 + 0x36e;
  fVar12 = (float)FUN_00f01c20(plVar6);
  local_170 = (undefined **)CONCAT44(fVar15 + 10.0,fVar12 + 10.0);
  FUN_00f13f18(plVar3,&local_170);
  fVar15 = *(float *)((long)param_3 + 0x664);
  local_170 = (undefined **)0x3f0000003f000000;
  if ((*(float *)(param_3 + 0x376) != *(float *)(param_3 + 0xcc)) ||
     (*(float *)((long)param_3 + 0x1bb4) != fVar15)) {
    *(float *)(param_3 + 0x376) = *(float *)(param_3 + 0xcc);
    *(float *)((long)param_3 + 0x1bb4) = fVar15;
    FUN_0091ada4(plVar3);
  }
  (**(code **)(param_3[0x36e] + 0x28))(plVar3,&local_170);
  plVar6 = param_3 + 0x385;
  fVar12 = (float)FUN_00f01c20(plVar1);
  local_170 = (undefined **)CONCAT44(fVar15 + 10.0,fVar12 + 10.0);
  FUN_00f13f18(plVar6,&local_170);
  fVar12 = *(float *)((long)param_3 + 0xc5c);
  local_170 = (undefined **)0x3f0000003f000000;
  if ((*(float *)(param_3 + 0x38d) != *(float *)(param_3 + 0x18b)) ||
     (*(float *)((long)param_3 + 0x1c6c) != fVar12)) {
    *(float *)(param_3 + 0x38d) = *(float *)(param_3 + 0x18b);
    *(float *)((long)param_3 + 0x1c6c) = fVar12;
    FUN_0091ada4(plVar6);
  }
  (**(code **)(*plVar6 + 0x28))(plVar6,&local_170);
  uVar5 = FUN_0093bea8("paginationIntro");
  if ((uVar5 & 1) == 0) {
    FUN_00b26098(&local_170);
    uVar10 = FUN_00e6ce7c("TROPHY_PAGINATION_INTRODUCTION_TOOLTIP",0);
    thunk_FUN_00e7051c(&local_180,uVar10);
    thunk_FUN_00e7051c(&local_c0,&local_180);
    FUN_008fcdb8(&local_b0,&DAT_0320ffa8);
    local_98 = 1;
    local_94 = 0x41a00000;
    FUN_009c82b4(auStack_168,&local_c0);
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    if (local_b8 != (void *)0x0) {
      operator_delete__(local_b8);
      local_c0 = 0;
      local_b8 = (void *)0x0;
    }
    local_c8 = 0;
    local_e0 = 0x43fa00003f666666;
    local_140 = plVar2;
    FUN_008fa54c(&local_c0,"paginationIntro");
    FUN_008fce60(local_110,&local_c0);
    if ((local_c0 & 1) != 0) {
      operator_delete((void *)CONCAT71(uStack_af,local_b0));
    }
    FUN_008fa54c(&local_c0,"paginationIntro");
    FUN_00b28094(param_3 + 0x3c2,&local_c0,&local_170);
    if ((local_c0 & 1) != 0) {
      operator_delete((void *)CONCAT71(uStack_af,local_b0));
    }
    if (local_178 != (void *)0x0) {
      operator_delete__(local_178);
      local_180 = 0;
      local_178 = (void *)0x0;
    }
    local_170 = &PTR_FUN_027de7f0;
    if ((local_110[0] & 1) != 0) {
      operator_delete(local_100);
    }
    if (local_118 != (void *)0x0) {
      operator_delete__(local_118);
      local_120 = 0;
      local_118 = (void *)0x0;
    }
    FUN_009c8464(auStack_168,1);
  }
  if ((int)param_3[0x338] != 0) {
    fVar15 = (float)FUN_00f0eac0(*(long *)param_3[0x339] + 0x1d0);
    fVar12 = -40.0;
    fVar15 = (fVar16 - fVar15) * 0.25;
    fVar17 = fVar15 + fVar15 + -40.0;
  }
LAB_00b72340:
  FUN_00f13e54(param_3 + 0x253);
  FUN_00f07940(fVar16 * 0.125,fVar12 * 0.75,param_3 + 0x242,0,param_3,0);
  FUN_00f0dad0(fVar17,param_3 + 0x312,1);
  if (*(long *)(lVar4 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

