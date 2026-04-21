// functions/00c8d — 11 functions
#include "libGameKindred.h"




void FUN_00c8d410(long param_1)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  long local_58;
  code *pcStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00c8bd18();
  FUN_00c8bde8(param_1);
  pcStack_50 = FUN_00c8dabc;
  local_58 = param_1;
  FUN_00f02e98(0xbf800000,&local_58,0,1);
  lVar2 = DAT_03210d00;
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
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efcad4(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_027c1a60;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3f000000,puVar4);
  FUN_00f022a0(param_1,puVar4);
  lVar2 = DAT_03210d00;
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
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efeb30(puVar4);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efeba8(*(undefined4 *)(param_1 + 0x83c),puVar4,param_1 + 0x838);
  FUN_00efcb24(puVar4,FUN_00c8d764);
  FUN_00efcac4(0x3f800000,puVar4);
  FUN_00f022a0(param_1,puVar4);
  lVar2 = DAT_03210d00;
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
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efcad4(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_027c1a60;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3f000000,puVar4);
  FUN_00f022a0(param_1,puVar4);
  lVar2 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar3 * 0x40);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efc8e8(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_027c27b8;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  *(long *)(puVar4 + 0x10) = param_1;
  *(code **)(puVar4 + 8) = FUN_00c8be34;
  FUN_00f022a0(param_1,puVar4);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00c8d764(float param_1,float param_2,float param_3,float param_4)

{
  return (param_1 * param_3) / param_4 + param_2;
}




void FUN_00c8d774(long param_1)

{
  long lVar1;
  long local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00c8be40();
  pcStack_30 = FUN_00c8dabc;
  local_38 = param_1;
  FUN_00f03390(&local_38);
  *(undefined4 *)(param_1 + 0x838) = *(undefined4 *)(param_1 + 0x83c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c8d7d8(long param_1)

{
  FUN_00c8bee8();
  *(uint *)(param_1 + 0x434) = *(uint *)(param_1 + 0x434) & 0xfffffffb;
  *(uint *)(param_1 + 0x304) = *(uint *)(param_1 + 0x304) & 0xfffffffb;
  return;
}




void FUN_00c8d810(undefined1 param_1 [16],undefined1 param_2 [16],long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  
  uVar8 = param_2._4_4_;
  fVar7 = param_2._0_4_;
  lVar1 = param_3 + 0x5f8;
  lVar2 = param_3 + 0x508;
  FUN_00f0d4e0(lVar1);
  uVar4 = CONCAT44(uVar8,fVar7);
  FUN_00f0d4e0(lVar1);
  FUN_00f13f08(uVar4,lVar2);
  lVar3 = param_3 + 400;
  uVar5 = FUN_00f023dc(lVar3);
  if ((uVar5 & 1) == 0) {
    fVar6 = (float)FUN_00f0e700(lVar3);
    FUN_00f0e700(lVar3);
    if (fVar6 <= fVar7) {
      fVar6 = fVar7;
    }
    fVar6 = 500.0 / fVar6;
    if ((*(float *)(param_3 + 0x1d8) != fVar6) || (*(float *)(param_3 + 0x1dc) != fVar6)) {
      *(float *)(param_3 + 0x1d8) = fVar6;
      *(float *)(param_3 + 0x1dc) = fVar6;
      FUN_0091ada4(lVar3);
    }
    FUN_00f07940(0,0,lVar3,8,param_3 + 0xd8,8);
  }
  FUN_00f07940(0,0xc2700000,param_3 + 0xd8,8,param_3,8);
  FUN_00f07b18(0,lVar1,3,lVar2,1);
  FUN_00f07b18(0,lVar1,5,lVar2,5);
  lVar1 = param_3 + 0x3b0;
  FUN_00f13238(lVar1);
  FUN_00f07940(0,0,lVar1,6,param_3,6);
  FUN_00f07940(0,0xc3250000,param_3 + 0x280,8,lVar1,4);
  return;
}




void FUN_00c8d988(float param_1,long *param_2)

{
  *(float *)((long)param_2 + 0x83c) = *(float *)((long)param_2 + 0x83c) + param_1;
                    /* WARNING: Could not recover jumptable at 0x00c8d99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x148))();
  return;
}




void FUN_00c8d9a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02805af8;
  param_1[0xe5] = &PTR_FUN_028057c0;
  if ((*(byte *)(param_1 + 0x104) & 1) != 0) {
    operator_delete((void *)param_1[0x106]);
  }
  if ((*(byte *)(param_1 + 0x101) & 1) != 0) {
    operator_delete((void *)param_1[0x103]);
  }
  FUN_00beb548(param_1 + 0xe5);
  FUN_00f0d3a4(param_1 + 0xbf);
  param_1[0xa1] = &PTR_FUN_028266f0;
  param_1[0xb8] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xbb);
  FUN_00f13d08(param_1 + 0xa1);
  param_1[0x76] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x8d);
  FUN_00f13d08(param_1 + 0x76);
  FUN_00f0d3a4(param_1 + 0x50);
  param_1[0x32] = &PTR_FUN_028266f0;
  param_1[0x49] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4c);
  FUN_00f13d08(param_1 + 0x32);
  FUN_00f13d08(param_1 + 0x1b);
  FUN_00c8bc58(param_1);
  return;
}




void FUN_00c8da98(void *param_1)

{
  FUN_00c8d9a0();
  operator_delete(param_1);
  return;
}




void FUN_00c8dabc(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c8dac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x140))();
  return;
}




void FUN_00c8dac8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 local_80;
  long local_78;
  
  lVar8 = tpidr_el0;
  local_78 = *(long *)(lVar8 + 0x28);
  FUN_00c8bc0c();
  plVar10 = param_1 + 0x1b;
  *param_1 = (long)&PTR_FUN_02805c80;
  FUN_00f13ca4(plVar10);
  plVar1 = param_1 + 0x32;
  FUN_00f10d7c();
  plVar2 = param_1 + 0x53;
  FUN_00f0d160(plVar2);
  plVar3 = param_1 + 0x79;
  FUN_00f0e4a8(plVar3);
  plVar7 = param_1 + 0x97;
  FUN_00f13ca4(plVar7);
  FUN_00f13ca4(param_1 + 0xae);
  FUN_00f13ca4(param_1 + 0xc5);
  lVar9 = 0;
  do {
    FUN_00f0e4a8((long)param_1 + lVar9 + 0x6e0);
    lVar9 = lVar9 + 0xf0;
  } while (lVar9 != 0x4b0);
  plVar4 = param_1 + 0x172;
  FUN_00f13ca4(plVar4);
  plVar5 = param_1 + 0x189;
  FUN_00f0d160(plVar5);
  plVar6 = param_1 + 0x1af;
  FUN_00f0d160(plVar6);
  param_1[0x1d8] = 0;
  param_1[0x1d7] = 0;
  param_1[0x1d6] = 0;
  *(undefined8 *)((long)param_1 + 0xef4) = 0;
  *(undefined8 *)((long)param_1 + 0xeec) = 0;
  *(undefined8 *)((long)param_1 + 0xee4) = 0;
  *(undefined8 *)((long)param_1 + 0xedc) = 0;
  *(undefined8 *)((long)param_1 + 0xed4) = 0;
  *(undefined8 *)((long)param_1 + 0xecc) = 0;
  *(undefined4 *)((long)param_1 + 0xefc) = 0;
  memset(param_1 + 0x1e1,0,0x78);
  *(undefined4 *)(param_1 + 0x1e0) = 0x3f800000;
  param_1[0x1d5] = (long)&PTR_FUN_027efcf0;
  FUN_00e70510(param_1 + 499);
  param_1[0x1fa] = 0;
  param_1[0x1f9] = 0;
  param_1[0x1f8] = 0;
  param_1[0x1f7] = 0;
  param_1[0x1f6] = 0;
  param_1[0x1f5] = 0;
  *(undefined4 *)(param_1 + 0x1d9) = 4;
  *(undefined4 *)(param_1 + 0x1fb) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar10,1);
  FUN_00f023ec(plVar10,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  FUN_00f023ec(plVar7,param_1 + 0xae,1);
  FUN_00f023ec(plVar7,param_1 + 0xc5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_00f023ec(plVar4,plVar5,1);
  FUN_00f023ec(plVar4,plVar6,1);
  lVar9 = 0;
  do {
    plVar7 = (long *)((long)param_1 + lVar9 + 0x6e0);
    FUN_00f0e548(plVar7,PTR_s_build___InventoryCommon_atlas_02be34e0,"128x128_hero_mastery_star");
    FUN_00f13f08(0x42aa0000,0x42aa0000,plVar7);
    local_80 = 0x3f8000003f000000;
    (**(code **)(*plVar7 + 0x28))(plVar7,&local_80);
    lVar9 = lVar9 + 0xf0;
  } while (lVar9 != 0x4b0);
  FUN_00f0d378(plVar2,PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98);
  FUN_00f0d7fc(plVar2,&DAT_01bee7fa);
  FUN_00f0d378(plVar5,PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98);
  FUN_00f0d7fc(plVar5,&DAT_01bee7fa);
  FUN_00f0d378(plVar6,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  local_80 = CONCAT44(local_80._4_4_,0xffb0917e);
  FUN_00f0d7fc(plVar6,&local_80);
  FUN_00f0e548(plVar3,PTR_s_build___InventoryCommon_atlas_02be34e0,"inventory_hero_mastery_accent");
  FUN_00f0e9c0(plVar3,1);
  FUN_00f0e74c(plVar3,500);
  FUN_00f10dc8(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_large_circle");
  FUN_00f0e698(plVar1,0xb);
  if ((*(float *)(param_1 + 0x3c) != (float)DAT_03218f08) ||
     (*(float *)((long)param_1 + 0x1e4) != DAT_03218f08._4_4_)) {
    param_1[0x3c] = CONCAT44(DAT_03218f08._4_4_,(float)DAT_03218f08);
    FUN_0091ada4(plVar1);
  }
  if (*(long *)(lVar8 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c8de98(undefined1 param_1 [16],undefined4 param_2,long *param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined4 uVar9;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  FUN_008fce60(param_3 + 0x1d6,param_4 + 8);
  param_3[0x1d9] = *(long *)(param_4 + 0x20);
  FUN_008fce60(param_3 + 0x1da,param_4 + 0x28);
  FUN_008fce60(param_3 + 0x1dd,param_4 + 0x40);
  *(undefined4 *)(param_3 + 0x1e0) = *(undefined4 *)(param_4 + 0x58);
  FUN_008fce60(param_3 + 0x1e1,param_4 + 0x60);
  FUN_008fce60(param_3 + 0x1e4,param_4 + 0x78);
  FUN_008fce60(param_3 + 0x1e7,param_4 + 0x90);
  FUN_008fce60(param_3 + 0x1ea,param_4 + 0xa8);
  FUN_008fce60(param_3 + 0x1ed,param_4 + 0xc0);
  lVar8 = *(long *)(param_4 + 0xd8);
  param_3[0x1f1] = *(long *)(param_4 + 0xe0);
  param_3[0x1f0] = lVar8;
  param_3[0x1f2] = *(long *)(param_4 + 0xe8);
  FUN_00910394(param_3 + 499,param_4 + 0xf0);
  FUN_008fce60(param_3 + 0x1f5,param_4 + 0x100);
  FUN_008fce60(param_3 + 0x1f8,param_4 + 0x118);
  FUN_00f0d75c(param_3 + 0x53,param_3 + 499);
  plVar1 = param_3 + 0x32;
  if ((*(byte *)(param_3 + 0x1f8) & 1) == 0) {
    lVar8 = (long)param_3 + 0xfc1;
  }
  else {
    lVar8 = param_3[0x1fa];
  }
  if ((*(byte *)(param_3 + 0x1f5) & 1) == 0) {
    lVar3 = (long)param_3 + 0xfa9;
  }
  else {
    lVar3 = param_3[0x1f7];
  }
  FUN_00f0e548(plVar1,lVar8,lVar3);
  local_78 = 0x4418800044188000;
  FUN_00f13f18(plVar1,&local_78);
  uVar9 = FUN_00f0e700(plVar1);
  local_78 = CONCAT44(param_2,uVar9);
  FUN_00f13f18(param_3 + 0x1b,&local_78);
  FUN_00e70510(&local_78);
  FUN_00e70e18(&local_78,&DAT_01bbf50e,(int)param_3[0x1f0]);
  FUN_00e70510(&local_88);
  FUN_00e70e18(&local_88,&DAT_01bb6d43,(int)param_3[0x1f1]);
  FUN_00f0dac8(param_3 + 0x189,1);
  FUN_00f0d75c(param_3 + 0x189,&local_78);
  FUN_00f0d75c(param_3 + 0x1af,&local_88);
  *(float *)(param_3 + 0x1fb) = (float)(int)param_3[0x1f0];
  if ((int)param_3[0x1f2] < 1) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    plVar5 = param_3 + 0xdc;
    do {
      FUN_00f023ec(param_3 + 0xae,plVar5,1);
      if ((int)uVar7 == 0) {
        param_2 = 0;
        FUN_00f07940(0,plVar5,0,param_3 + 0xae,0);
      }
      else {
        FUN_00f07b18(0x40a00000,plVar5,3,plVar5 + -0x1e,1);
        FUN_00f07b18(0,plVar5,5,plVar5 + -0x1e,5);
      }
      uVar7 = uVar7 + 1;
      plVar5 = plVar5 + 0x1e;
    } while ((long)uVar7 < (long)(int)param_3[0x1f2]);
  }
  local_90 = FUN_00f01c54(param_3 + 0xae,0,0,1,1);
  uStack_8c = param_2;
  FUN_00f13f18(param_3 + 0xae,&local_90);
  uVar6 = (uint)uVar7;
  if ((int)uVar6 < *(int *)((long)param_3 + 0xf94)) {
    lVar8 = 0;
    plVar5 = param_3 + (uVar7 & 0xffffffff) * 0x1e + 0xdc;
    do {
      FUN_00f023ec(param_3 + 0xc5,plVar5,1);
      if ((int)lVar8 == 0) {
        param_2 = 0;
        FUN_00f07940(0,plVar5,0,param_3 + 0xc5,0);
      }
      else {
        FUN_00f07b18(0x40a00000,plVar5,3,plVar5 + -0x1e,1);
        FUN_00f07b18(0,plVar5,5,plVar5 + -0x1e,5);
      }
      lVar8 = lVar8 + 1;
      plVar5 = plVar5 + 0x1e;
    } while ((long)((uVar7 & 0xffffffff) + lVar8) < (long)*(int *)((long)param_3 + 0xf94));
    uVar6 = uVar6 + (int)lVar8;
  }
  local_90 = FUN_00f01c54(param_3 + 0xc5,0,0,1,1);
  uStack_8c = param_2;
  FUN_00f13f18(param_3 + 0xc5,&local_90);
  *(uint *)((long)param_3 + 0x6ac) = *(uint *)((long)param_3 + 0x6ac) & 0xfffffffb;
  if (uVar6 < 5) {
    lVar8 = 5 - (ulong)uVar6;
    puVar4 = (uint *)((long)param_3 + (ulong)uVar6 * 0xf0 + 0x764);
    do {
      lVar8 = lVar8 + -1;
      *puVar4 = *puVar4 & 0xfffffffb;
      puVar4 = puVar4 + 0x3c;
    } while (lVar8 != 0);
  }
  (**(code **)(*param_3 + 0x160))(param_3);
  (**(code **)(*param_3 + 0x148))(param_3);
  FUN_00c8b224(0x438c0000,0x41700000,0x3f333333,0x3e800000,plVar1,param_3 + 0x1ea);
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = 0;
    local_80 = (void *)0x0;
  }
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = 0;
    local_70 = (void *)0x0;
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

