// functions/00ab9 — 11 functions
#include "libGameKindred.h"




void FUN_00ab928c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ab9294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x178))();
  return;
}




void FUN_00ab9298(long *param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined **ppuVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  code *local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar10 = tpidr_el0;
  local_68 = *(long *)(lVar10 + 0x28);
  FUN_00ab6c24(param_1,param_2 & 1);
  plVar1 = param_1 + 0x2b8;
  *param_1 = (long)&PTR_FUN_027d5058;
  FUN_00f017e8(plVar1);
  plVar2 = param_1 + 0x2c9;
  param_1[0x2b8] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x2e7;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x305;
  FUN_00f0d160(plVar4);
  plVar5 = param_1 + 0x32b;
  FUN_00f0d160(plVar5);
  plVar6 = param_1 + 0x351;
  FUN_00f017e8(plVar6);
  param_1[0x351] = (long)&PTR_FUN_027c1f80;
  FUN_00f11234(param_1 + 0x362);
  plVar7 = param_1 + 0x396;
  FUN_00f017e8(plVar7);
  param_1[0x396] = (long)&PTR_FUN_027c1f80;
  plVar8 = param_1 + 0x3a7;
  FUN_00f11234(plVar8);
  FUN_00e70314(param_1 + 0x3db);
  *(undefined4 *)(param_1 + 0x3dd) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x1eec) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar6,1);
  FUN_00f023ec(plVar6,plVar2,1);
  FUN_00f023ec(plVar6,plVar4,1);
  FUN_00f023ec(plVar1,plVar8,1);
  FUN_00f023ec(plVar8,plVar7,1);
  FUN_00f023ec(plVar7,plVar3,1);
  FUN_00f023ec(plVar7,plVar5,1);
  *(uint *)((long)param_1 + 0x1644) = *(uint *)((long)param_1 + 0x1644) & 0xffffffbf;
  ppuVar9 = &PTR_s_build___HUDPartsCommon_atlas_02be3440;
  if ((param_2 & 1) == 0) {
    ppuVar9 = &PTR_s_build___MenuPartsCommon_tga_02be3530;
  }
  puVar13 = *ppuVar9;
  FUN_00f0e548(plVar2,puVar13,"white_background");
  FUN_00f0e670(plVar2,&DAT_01bee7fe,2);
  uVar11 = FUN_0092ea9c();
  ppuVar9 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
  if ((uVar11 & 1) == 0) {
    ppuVar9 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78;
  }
  puVar14 = *ppuVar9;
  FUN_00f0d92c(plVar4,puVar14,&DAT_01bee7fa);
  uVar12 = FUN_00e6ce7c("MENU_TAP_AND_HOLD_BUTTON_INSTRUCTIONS",0);
  FUN_00f0d75c(plVar4,uVar12);
  FUN_00f0e548(plVar3,puVar13,"white_background");
  FUN_00f0d92c(plVar5,puVar14,&DAT_01bee7f6);
  uVar12 = FUN_00e6ce7c("MENU_TAP_AND_HOLD_BUTTON_INSTRUCTIONS",0);
  FUN_00f0d75c(plVar5,uVar12);
  FUN_00f112f0(plVar8,1);
  local_70 = DAT_03210f58;
  *(uint *)((long)param_1 + 0x1644) = *(uint *)((long)param_1 + 0x1644) & 0xfffffffb;
  local_98 = FUN_00ab95c0;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 1,&local_98);
  local_98 = FUN_00ab95c0;
  local_70 = DAT_03210f84;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 1,&local_98);
  if (*(long *)(lVar10 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ab95c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00b0915c(param_1,param_4,param_5);
  FUN_00ab7a44(param_1);
  FUN_00ab9f9c(param_1);
  return;
}




void FUN_00ab95f4(float param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = param_2 + 0x2b8;
  *(float *)(param_2 + 0x3dd) = param_1;
  uVar2 = FUN_00f02540(plVar1);
  if (param_1 <= 0.0) {
    if ((uVar2 & 1) != 0) {
      FUN_00f01a4c(plVar1,1);
      return;
    }
  }
  else if ((uVar2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00ab964c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x78))(param_2,plVar1,1);
    return;
  }
  return;
}




void FUN_00ab967c(long *param_1,undefined8 param_2)

{
  FUN_00f0d75c(param_1 + 0x305);
  FUN_00f0d75c(param_1 + 0x32b,param_2);
                    /* WARNING: Could not recover jumptable at 0x00ab96c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x180))(param_1);
  return;
}




void FUN_00ab96c4(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_00ab7d60();
  uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
  FUN_00f13f08(uVar3,0x42700000,param_1 + 0x2c9);
  fVar5 = (float)uVar3 * 0.5;
  plVar1 = param_1 + 0x305;
  if ((*(float *)(param_1 + 0x30d) != fVar5) || (*(float *)((long)param_1 + 0x186c) != 30.0)) {
    *(float *)(param_1 + 0x30d) = fVar5;
    *(undefined4 *)((long)param_1 + 0x186c) = 0x41f00000;
    FUN_0091ada4(plVar1);
  }
  local_60 = 0x3f0000003f000000;
  (**(code **)(param_1[0x305] + 0x28))(plVar1,&local_60);
  fVar4 = (float)uVar3 + -8.0;
  FUN_00f0db64(fVar4,0,0x3f800000,plVar1);
  FUN_00f13f08(uVar3,0x42700000,param_1 + 0x2e7);
  plVar1 = param_1 + 0x32b;
  if ((*(float *)(param_1 + 0x333) != fVar5) || (*(float *)((long)param_1 + 0x199c) != 30.0)) {
    *(float *)(param_1 + 0x333) = fVar5;
    *(undefined4 *)((long)param_1 + 0x199c) = 0x41f00000;
    FUN_0091ada4(plVar1);
  }
  local_60 = 0x3f0000003f000000;
  (**(code **)(param_1[0x32b] + 0x28))(plVar1,&local_60);
  FUN_00f0db64(fVar4,0,0x3f800000,plVar1);
  FUN_00f13f08(uVar3,0x42700000,param_1 + 0x3a7);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ab9858(long param_1)

{
  int iVar1;
  ulong uVar2;
  uint *puVar3;
  
  FUN_00b08fc8();
  if (*(char *)(param_1 + 0x1eec) != '\0') {
    uVar2 = FUN_019807a4();
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_019806b8(0);
      if ((uVar2 & 1) == 0) goto LAB_00ab98bc;
    }
    else {
      iVar1 = FUN_019807b8();
      if (iVar1 != 1) goto LAB_00ab98bc;
      puVar3 = (uint *)FUN_019807cc(0);
      if (((int)*puVar3 < 0x10) || ((*puVar3 & 1) == 0)) goto LAB_00ab98bc;
    }
    if ((*(byte *)(param_1 + 0x26c) >> 1 & 1) == 0) {
LAB_00ab98bc:
      FUN_00ab9900(param_1);
      return;
    }
    if ((*(float *)(param_1 + 0x1d78) == 0.0) && (0.0 < *(float *)(param_1 + 0x1ee8))) {
      FUN_00ab9cf4(param_1);
      return;
    }
  }
  return;
}




void FUN_00ab9900(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  ushort uVar7;
  ushort *puVar8;
  float local_88 [8];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  (**(code **)(*param_1 + 0x168))();
  uVar5 = FUN_00eff63c(0x3f800000,0x3f800000,0x3e4ccccd,FUN_0091aa80);
  FUN_00f022a0(param_1 + 0x34,uVar5);
  plVar1 = param_1 + 0x2b8;
  *(undefined1 *)((long)param_1 + 0x1eec) = 0;
  FUN_00f01980(plVar1);
  plVar2 = param_1 + 0x3a7;
  FUN_00f01980(plVar2);
  FUN_00f01980(param_1 + 0x396);
  uVar6 = *(uint *)((long)param_1 + 0x1644);
  if ((~uVar6 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x1644) = uVar6 | 0x7f80;
    FUN_0091ada4(plVar1);
    uVar6 = *(uint *)((long)param_1 + 0x1644);
  }
  *(uint *)((long)param_1 + 0x1644) = uVar6 | 4;
  lVar4 = DAT_03210d00;
  uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar8 = (ushort *)0x0;
  }
  else {
    puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar8;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efdd74(puVar8);
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3fa00000,puVar8);
  FUN_00efddc4(0,puVar8);
  FUN_00f022a0(plVar1,puVar8);
  lVar4 = DAT_03210d00;
  uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar8 = (ushort *)0x0;
  }
  else {
    puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar8;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efc8e8(puVar8);
    *(undefined ***)puVar8 = &PTR_FUN_02825148;
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_00f022a0(plVar1,puVar8);
  lVar4 = DAT_03210d00;
  uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar8 = (ushort *)0x0;
  }
  else {
    puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar8;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efdc08(puVar8);
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3e4ccccd,puVar8);
  local_88[0] = (float)FUN_00f13e54(plVar2);
  local_88[0] = -local_88[0];
  local_88[1] = 0.0;
  FUN_00efdc50(puVar8,local_88);
  FUN_00f022a0(plVar2,puVar8);
  lVar4 = DAT_03210d00;
  uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar8 = (ushort *)0x0;
  }
  else {
    puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar8;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efdc08(puVar8);
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3e4ccccd,puVar8);
  local_88[0] = (float)FUN_00f13e54(plVar2);
  local_88[0] = local_88[0] + 2.0;
  local_88[1] = 0.0;
  FUN_00efdc50(puVar8,local_88);
  FUN_00f022a0(param_1 + 0x396,puVar8);
  FUN_00f048e0(local_88,DAT_03210c8c,0);
  FUN_00f04760(param_1,local_88,1);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ab9cf4(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  ushort uVar6;
  ushort *puVar7;
  undefined1 auStack_68 [32];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  (**(code **)(*param_1 + 0x168))();
  uVar4 = FUN_00eff63c(0x3f800000,0x3f800000,0x3e4ccccd,FUN_0091aa80);
  FUN_00f022a0(param_1 + 0x34,uVar4);
  *(undefined1 *)((long)param_1 + 0x1eec) = 0;
  if ((*(uint *)((long)param_1 + 0x1b0c) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x1b0c) = *(uint *)((long)param_1 + 0x1b0c) & 0xffff807f;
    FUN_0091ada4(param_1 + 0x351);
  }
  plVar1 = param_1 + 0x2b8;
  FUN_00f01980(plVar1);
  FUN_00f01980(param_1 + 0x3a7);
  FUN_00f01980(param_1 + 0x396);
  uVar5 = *(uint *)((long)param_1 + 0x1644);
  if ((~uVar5 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x1644) = uVar5 | 0x7f80;
    FUN_0091ada4(plVar1);
    uVar5 = *(uint *)((long)param_1 + 0x1644);
  }
  *(uint *)((long)param_1 + 0x1644) = uVar5 | 4;
  lVar3 = DAT_03210d00;
  uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efdd74(puVar7);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3fa00000,puVar7);
  FUN_00efddc4(0,puVar7);
  FUN_00f022a0(plVar1,puVar7);
  lVar3 = DAT_03210d00;
  uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efc8e8(puVar7);
    *(undefined ***)puVar7 = &PTR_FUN_02825148;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00f022a0(plVar1,puVar7);
  FUN_00f048e0(auStack_68,DAT_03210c90,0);
  FUN_00f04760(param_1,auStack_68,1);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ab9f70(undefined8 param_1)

{
  FUN_00b0915c();
  FUN_00ab7a44(param_1);
  FUN_00ab9f9c(param_1);
  return;
}




void FUN_00ab9f9c(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ushort uVar6;
  ushort *puVar7;
  float fVar8;
  float fVar9;
  undefined8 local_88 [4];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if ((*(char *)(param_3 + 0x1eec) == '\0') &&
     (*(char *)(param_3 + 0x1eec) = '\x01', 0.0 < *(float *)(param_3 + 0x1ee8))) {
    lVar1 = param_3 + 0x15c0;
    FUN_00f01980(lVar1);
    lVar2 = param_3 + 0x1d38;
    FUN_00f01980(lVar2);
    lVar3 = param_3 + 0x1cb0;
    FUN_00f01980(lVar3);
    fVar8 = (float)FUN_00f0e700(param_3 + 0x1648);
    FUN_00f01c20(param_3 + 0x270);
    fVar9 = param_2 * -0.5 + -56.0;
    if ((*(float *)(param_3 + 0x1600) != fVar8 * -0.5) || (*(float *)(param_3 + 0x1604) != fVar9)) {
      *(float *)(param_3 + 0x1600) = fVar8 * -0.5;
      *(float *)(param_3 + 0x1604) = fVar9;
      FUN_0091ada4(lVar1);
    }
    *(uint *)(param_3 + 0x1644) = *(uint *)(param_3 + 0x1644) | 4;
    if ((~*(uint *)(param_3 + 0x1b0c) & 0x7f80) != 0) {
      *(uint *)(param_3 + 0x1b0c) = *(uint *)(param_3 + 0x1b0c) | 0x7f80;
      FUN_0091ada4(param_3 + 0x1a88);
    }
    fVar8 = (float)FUN_00f13e54(lVar2);
    if (*(float *)(param_3 + 0x1d78) != -fVar8) {
      *(float *)(param_3 + 0x1d78) = -fVar8;
      FUN_0091ada4(lVar2);
    }
    *(uint *)(param_3 + 0x1dbc) = *(uint *)(param_3 + 0x1dbc) | 0x10;
    fVar8 = (float)FUN_00f13e54(lVar2);
    if (*(float *)(param_3 + 0x1cf0) != fVar8 + 2.0) {
      *(float *)(param_3 + 0x1cf0) = fVar8 + 2.0;
      FUN_0091ada4(lVar3);
    }
    lVar5 = DAT_03210d00;
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar7;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
      *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
      FUN_00efdd74(puVar7);
      *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
    }
    FUN_00efcac4(0x3e19999a,puVar7);
    FUN_00efddc4(0x3f800000,puVar7);
    FUN_00f022a0(lVar1,puVar7);
    lVar1 = DAT_03210d00;
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar7;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efdc08(puVar7);
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00efcac4(*(undefined4 *)(param_3 + 0x1ee8),puVar7);
    local_88[0] = 0;
    FUN_00efdc50(puVar7,local_88);
    FUN_00f022a0(lVar2,puVar7);
    lVar1 = DAT_03210d00;
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar7;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efdc08(puVar7);
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00efcac4(*(undefined4 *)(param_3 + 0x1ee8),puVar7);
    local_88[0] = 0;
    FUN_00efdc50(puVar7,local_88);
    FUN_00f022a0(lVar3,puVar7);
    FUN_00f048e0(local_88,DAT_03210c88,0);
    FUN_00f04760(param_3,local_88,1);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

