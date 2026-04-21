// functions/00b77 — 18 functions
#include "libGameKindred.h"




void FUN_00b771ec(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00ec544c();
  if ((uVar1 & 1) != 0) {
    FUN_00ec5454("http://www.vainglorygame.com/news/what-is-a-season/");
    return;
  }
  return;
}




void FUN_00b77214(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00ec544c();
  if ((uVar1 & 1) != 0) {
    FUN_00ec5454("http://www.vainglorygame.com/news/what-is-a-season/");
    return;
  }
  return;
}




void FUN_00b77240(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  undefined8 local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  FUN_00f017e8();
  plVar1 = param_1 + 0x11;
  *param_1 = (long)&PTR_FUN_027e6008;
  FUN_00f0d160(plVar1);
  plVar2 = param_1 + 0x37;
  FUN_00f0d160(plVar2);
  *(undefined4 *)(param_1 + 0x5d) = 0x41e00000;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f0d92c(plVar1,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40,&DAT_01bee7fa);
  uVar3 = *(uint *)((long)param_1 + 0x10c);
  if ((uVar3 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x10c) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x2600;
    FUN_0091ada4(plVar1);
  }
  if ((*(float *)(param_1 + 0x19) != -*(float *)(param_1 + 0x5d)) ||
     (*(float *)((long)param_1 + 0xcc) != 0.0)) {
    *(float *)(param_1 + 0x19) = -*(float *)(param_1 + 0x5d);
    *(undefined4 *)((long)param_1 + 0xcc) = 0;
    FUN_0091ada4(plVar1);
  }
  local_40 = 0x3f0000003f800000;
  (**(code **)(param_1[0x11] + 0x28))(plVar1,&local_40);
  FUN_00f0d92c(plVar2,PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78,&DAT_01bee7fa);
  uVar3 = *(uint *)((long)param_1 + 0x23c);
  if ((uVar3 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x23c) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar2);
  }
  if ((*(float *)(param_1 + 0x3f) != *(float *)(param_1 + 0x5d)) ||
     (*(float *)((long)param_1 + 0x1fc) != 0.0)) {
    *(float *)(param_1 + 0x3f) = *(float *)(param_1 + 0x5d);
    *(undefined4 *)((long)param_1 + 0x1fc) = 0;
    FUN_0091ada4(plVar2);
  }
  local_40 = 0x3f00000000000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_40);
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b77414(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  float fVar9;
  long lVar10;
  code *local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  FUN_00f017e8();
  plVar1 = param_1 + 0x11;
  *param_1 = (long)&PTR_FUN_027e6108;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x2f;
  FUN_00f0d160(plVar2);
  plVar3 = param_1 + 0x55;
  FUN_00f0d160(plVar3);
  plVar4 = param_1 + 0x7b;
  FUN_00f0e4a8(plVar4);
  plVar5 = param_1 + 0x99;
  FUN_00f0e4a8(plVar5);
  plVar6 = param_1 + 0xb7;
  FUN_00abaee8(plVar6,0);
  param_1[0x178] = 0;
  param_1[0x177] = 0;
  param_1[0x176] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  FUN_00f0e548(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  uVar7 = *(uint *)((long)param_1 + 0x45c);
  if ((uVar7 & 0x7f80) != 0x1300) {
    *(uint *)((long)param_1 + 0x45c) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x1300;
    FUN_0091ada4(plVar4);
  }
  *(uint *)((long)param_1 + 0x1fc) = *(uint *)((long)param_1 + 0x1fc) | 0x10;
  FUN_00f0e548(plVar5,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  uVar7 = *(uint *)((long)param_1 + 0x54c);
  if ((uVar7 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x54c) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0xc80;
    FUN_0091ada4(plVar5);
  }
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_crown");
  *(uint *)((long)param_1 + 0x10c) = *(uint *)((long)param_1 + 0x10c) & 0xfffffffb;
  FUN_00f0d92c(plVar2,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50,&DAT_01bee7fa);
  uVar7 = *(uint *)((long)param_1 + 0x1fc);
  if ((uVar7 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x1fc) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x6c00;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0d92c(plVar3,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40,&DAT_01bee7fa);
  uVar7 = *(uint *)((long)param_1 + 0x32c);
  if ((uVar7 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x32c) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar3);
  }
  plVar1 = param_1 + 0x152;
  FUN_00f0e578(plVar1,"generic_invite_friend");
  uVar7 = *(uint *)((long)param_1 + 0xb14);
  if ((uVar7 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0xb14) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x5900;
    FUN_0091ada4(plVar1);
  }
  fVar9 = (float)FUN_00f0e700(plVar1);
  fVar9 = 56.0 / fVar9;
  if ((*(float *)(param_1 + 0x15b) != fVar9) || (*(float *)((long)param_1 + 0xadc) != fVar9)) {
    *(float *)(param_1 + 0x15b) = fVar9;
    *(float *)((long)param_1 + 0xadc) = fVar9;
    FUN_0091ada4(plVar1);
  }
  uVar7 = *(uint *)((long)param_1 + 0x934);
  if ((uVar7 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x934) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x1980;
    FUN_0091ada4(param_1 + 0x116);
  }
  FUN_00abb1e0(0x3f19999a,plVar6,&DAT_01bee7fa);
  FUN_00b09144(0,plVar6);
  FUN_00abb1e0(0x3f666666,plVar6,&DAT_01bee7fa);
  lVar10 = NEON_fmov(0xc1200000,4);
  param_1[0xc2] = lVar10;
  FUN_00abb218(0x3f59999a,0x3fa00000,plVar6);
  local_70 = DAT_03210c64;
  local_98 = thunk_FUN_00b777e8;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 0xb8,&local_98);
  *(uint *)((long)param_1 + 0x63c) = *(uint *)((long)param_1 + 0x63c) & 0xfffffffb;
  FUN_00b0914c(plVar6,1);
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b777e8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ushort uVar5;
  ushort *puVar6;
  undefined8 uStack_48;
  void *pvStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00f08be8(param_1 + 0x248);
  thunk_FUN_00e7051c(&uStack_48,uVar3);
  uVar4 = FUN_00e70b88(&uStack_48,&DAT_03210450);
  if ((uVar4 & 1) != 0) {
    FUN_00916048(&uStack_48);
  }
  param_1 = param_1 + 0x5b8;
  FUN_00b09454(param_1,0);
  FUN_00f01980(param_1);
  uVar3 = FUN_00efee28(0,0x3e99999a,0);
  FUN_00f022a0(param_1,uVar3);
  lVar2 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efc8e8(puVar6);
    *(undefined ***)puVar6 = &PTR_FUN_02825148;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00f022a0(param_1,puVar6);
  if (pvStack_40 != (void *)0x0) {
    operator_delete__(pvStack_40);
    uStack_48 = 0;
    pvStack_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b777e8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ushort uVar5;
  ushort *puVar6;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00f08be8(param_1 + 0x248);
  thunk_FUN_00e7051c(&local_48,uVar3);
  uVar4 = FUN_00e70b88(&local_48,&DAT_03210450);
  if ((uVar4 & 1) != 0) {
    FUN_00916048(&local_48);
  }
  param_1 = param_1 + 0x5b8;
  FUN_00b09454(param_1,0);
  FUN_00f01980(param_1);
  uVar3 = FUN_00efee28(0,0x3e99999a,0);
  FUN_00f022a0(param_1,uVar3);
  lVar2 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efc8e8(puVar6);
    *(undefined ***)puVar6 = &PTR_FUN_02825148;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00f022a0(param_1,puVar6);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b77954(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e6008;
  FUN_00f0d3a4(param_1 + 0x37);
  FUN_00f0d3a4(param_1 + 0x11);
  FUN_00f01868(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00b779a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e6108;
  if ((*(byte *)(param_1 + 0x176) & 1) != 0) {
    operator_delete((void *)param_1[0x178]);
  }
  param_1[0xb7] = &PTR_FUN_027d5388;
  param_1[0x152] = &PTR_FUN_028266f0;
  param_1[0x169] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x16c);
  FUN_00f13d08(param_1 + 0x152);
  param_1[0x134] = &PTR_FUN_028266f0;
  param_1[0x14b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x14e);
  FUN_00f13d08(param_1 + 0x134);
  param_1[0x116] = &PTR_FUN_028266f0;
  param_1[0x12d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x130);
  FUN_00f13d08(param_1 + 0x116);
  FUN_00f01868(param_1 + 0x105);
  FUN_009c825c(param_1 + 0xb7);
  param_1[0x99] = &PTR_FUN_028266f0;
  param_1[0xb0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xb3);
  FUN_00f13d08(param_1 + 0x99);
  param_1[0x7b] = &PTR_FUN_028266f0;
  param_1[0x92] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x95);
  FUN_00f13d08(param_1 + 0x7b);
  FUN_00f0d3a4(param_1 + 0x55);
  FUN_00f0d3a4(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_028266f0;
  param_1[0x28] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2b);
  FUN_00f13d08(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00b77adc(void *param_1)

{
  FUN_00b779a0();
  operator_delete(param_1);
  return;
}




void FUN_00b77b00(uint *param_1,uint param_2)

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




void FUN_00b77b80(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_a8;
  undefined8 uStack_a0;
  code *local_98;
  undefined8 *puStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  FUN_00a9f290();
  FUN_00948cd8(param_1 + 0x587);
  puVar1 = param_1 + 0x58a;
  *param_1 = &PTR_FUN_027e6208;
  param_1[0x587] = &PTR_FUN_027e63c0;
  FUN_00f0e4a8(puVar1);
  puVar2 = param_1 + 0x5a8;
  FUN_00f13ca4(puVar2);
  puVar3 = param_1 + 0x5bf;
  FUN_00ecfd6c(puVar3,0);
  puVar4 = param_1 + 0x669;
  param_1[0x668] = 0;
  FUN_00b1f530(puVar4);
  puVar5 = param_1 + 0x7c3;
  FUN_00b73554(puVar5);
  puVar6 = param_1 + 0x2edb;
  FUN_00b712b8(puVar6);
  param_1[0x32e7] = 0;
  param_1[0x32e6] = 0;
  param_1[0x32e5] = 0;
  param_1[0x32e4] = 0;
  param_1[0x32e3] = 0;
  *(undefined2 *)(param_1 + 0x32e8) = 1;
  *(undefined1 *)((long)param_1 + 0x19742) = 1;
  FUN_00f023ec(param_1 + 0x2e,puVar1,1);
  FUN_00f023ec(param_1 + 0x2e,puVar2,1);
  FUN_00f023ec(puVar2,puVar3,1);
  FUN_00ed026c(puVar3,puVar5,1);
  FUN_00ed026c(puVar3,puVar6,1);
  FUN_00ed026c(puVar3,puVar4,1);
  FUN_00f0e548(puVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(puVar1,&DAT_01bee7f6,2);
  uVar7 = *(uint *)((long)param_1 + 0x2cd4);
  if ((uVar7 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x2cd4) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x2600;
    FUN_0091ada4(puVar1);
  }
  FUN_00ed04d8(puVar3,0,1);
  param_1[0x666] = puVar5;
  param_1[0x667] = puVar6;
  local_a8 = 0;
  uStack_a0 = 0;
  uVar9 = FUN_00e6ce7c("MENU_PROFILE_TAB_OVERVIEW",0);
  FUN_0090ea30(&local_a8,uVar9);
  uVar9 = FUN_00e6ce7c("MENU_TEAM_TAB_TROPHIES",0);
  FUN_0090ea30(&local_a8,uVar9);
  FUN_00b1fc3c(0x42800000,0x43fa0000,0x41a00000,0x3f800000,0x3f800000,puVar4,&local_a8);
  FUN_00b208e0(0x3f4ccccd,puVar4);
  local_70 = FUN_00f048a4("UI::EVENT_CONTROL_TOGGLED");
  local_98 = FUN_00b77e78;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  puStack_90 = param_1;
  FUN_009693a0(param_1 + 0x66a,&local_98);
  FUN_00f01a4c(param_1 + 0x62,1);
  FUN_00f01a4c(param_1 + 0x567,1);
  FUN_00b89d24(0,puVar5,1,4,0);
  FUN_0090eb54(&local_a8,1);
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b77e78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00b78f24(param_1,param_4);
  return;
}




void FUN_00b77e80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e6208;
  param_1[0x587] = &PTR_FUN_027e63c0;
  FUN_00b1fa78(param_1 + 0x669);
  if ((*(byte *)(param_1 + 0x32e5) & 1) != 0) {
    operator_delete((void *)param_1[0x32e7]);
  }
  FUN_009557a8(param_1 + 0x32e3,1);
  FUN_00b71a3c(param_1 + 0x2edb);
  FUN_00b74538(param_1 + 0x7c3);
  FUN_00b1f8e8(param_1 + 0x669);
  FUN_00ed00e0(param_1 + 0x5bf);
  FUN_00f13d08(param_1 + 0x5a8);
  param_1[0x58a] = &PTR_FUN_028266f0;
  param_1[0x5a1] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x5a4);
  FUN_00f13d08(param_1 + 0x58a);
  FUN_00948d58(param_1 + 0x587);
  FUN_00a9f558(param_1);
  return;
}




void FUN_00b77f84(long param_1)

{
  FUN_00b77e80(param_1 + -0x2c38);
  return;
}




void FUN_00b77f90(void *param_1)

{
  FUN_00b77e80();
  operator_delete(param_1);
  return;
}




void FUN_00b77fb4(long param_1)

{
  FUN_00b77e80((void *)(param_1 + -0x2c38));
  operator_delete((void *)(param_1 + -0x2c38));
  return;
}




void FUN_00b77fe0(void)

{
  return;
}




void FUN_00b77fe4(long param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_140;
  void *local_138;
  undefined **local_130;
  undefined1 auStack_128 [40];
  undefined8 local_100;
  undefined8 local_e0;
  void *local_d8;
  byte local_d0 [16];
  void *local_c0;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_88;
  ulong local_80;
  void *local_78;
  byte local_70;
  undefined7 uStack_6f;
  void *local_60;
  undefined4 local_58;
  undefined8 local_54;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00b74a44(param_1 + 0x3e18,param_2 & 1);
  if ((param_2 & 1) != 0) {
    if (*(long *)(param_1 + 0x3340) == 0) {
      uVar2 = FUN_00b20974(param_1 + 0x3348);
      if (*(long *)(param_1 + (uVar2 & 0xffffffff) * 8 + 0x3330) != 0) {
        uVar2 = FUN_00b20974(param_1 + 0x3348);
        *(undefined8 *)(param_1 + 0x3340) =
             *(undefined8 *)(param_1 + (uVar2 & 0xffffffff) * 8 + 0x3330);
      }
    }
    FUN_00b7822c(param_1);
    uVar2 = FUN_0093be8c();
    if (((uVar2 & 1) != 0) && (uVar2 = FUN_0093bea8("seasonTeamTrophy"), (uVar2 & 1) == 0)) {
      FUN_00b26098(&local_130);
      uVar3 = FUN_00e6ce7c("MAIN_SEASON_TROPHY_USERTEAM_TOOLTIP",0);
      thunk_FUN_00e7051c(&local_140,uVar3);
      thunk_FUN_00e7051c(&local_80,&local_140);
      FUN_008fcdb8(&local_70,&DAT_0320ffa8);
      local_58 = 1;
      local_54 = 0x41a00000;
      FUN_009c82b4(auStack_128,&local_80);
      if ((local_70 & 1) != 0) {
        operator_delete(local_60);
      }
      if (local_78 != (void *)0x0) {
        operator_delete__(local_78);
        local_80 = 0;
        local_78 = (void *)0x0;
      }
      local_100 = FUN_00b2097c(param_1 + 0x3348,1);
      local_88 = 1;
      local_a0 = 0x3f000000;
      uVar2 = FUN_0092ea9c();
      local_9c = 0x442f0000;
      if ((uVar2 & 1) == 0) {
        local_9c = 0x44160000;
      }
      FUN_008fa54c(&local_80,"seasonTeamTrophy");
      FUN_008fce60(local_d0,&local_80);
      if ((local_80 & 1) != 0) {
        operator_delete((void *)CONCAT71(uStack_6f,local_70));
      }
      uVar3 = FUN_009b8d90();
      FUN_008fa54c(&local_80,"seasonTrophy");
      FUN_009badc0(uVar3,&local_80,&local_130);
      if ((local_80 & 1) != 0) {
        operator_delete((void *)CONCAT71(uStack_6f,local_70));
      }
      if (local_138 != (void *)0x0) {
        operator_delete__(local_138);
        local_140 = 0;
        local_138 = (void *)0x0;
      }
      local_130 = &PTR_FUN_027de7f0;
      if ((local_d0[0] & 1) != 0) {
        operator_delete(local_c0);
      }
      if (local_d8 != (void *)0x0) {
        operator_delete__(local_d8);
        local_e0 = 0;
        local_d8 = (void *)0x0;
      }
      FUN_009c8464(auStack_128,1);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

