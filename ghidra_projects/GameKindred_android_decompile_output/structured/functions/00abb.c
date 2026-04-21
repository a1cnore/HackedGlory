// functions/00abb — 22 functions
#include "libGameKindred.h"




void FUN_00abb12c(long param_1,ulong param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  ppuVar1 = &PTR_s_build___HUDPartsCommon_atlas_02be3440;
  if ((param_2 & 1) == 0) {
    ppuVar1 = &PTR_s_build___MenuPartsCommon_tga_02be3530;
  }
  puVar2 = *ppuVar1;
  FUN_00f0e628(param_1 + 1000);
  FUN_00f0e548(param_1 + 1000,puVar2,"circle_button_fill");
  FUN_00f0e628(param_1 + 0x2f8);
  FUN_00f0e548(param_1 + 0x2f8,puVar2,"circle_button_frame");
  FUN_00f0e628(param_1 + 0x4d8);
  FUN_00f0e548(param_1 + 0x4d8,puVar2,"circle_button_chevron");
  return;
}




void FUN_00abb1c8(undefined4 param_1,long *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = *param_3;
  *(undefined4 *)(param_2 + 0xbb) = param_1;
  *(undefined4 *)(param_2 + 0xb9) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00abb1dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x168))();
  return;
}




void FUN_00abb1e0(undefined4 param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = *param_3;
  *(undefined4 *)(param_2 + 0x5dc) = param_1;
  *(undefined4 *)(param_2 + 0x5cc) = uVar1;
  return;
}




void FUN_00abb1f0(undefined4 param_1,long *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = *param_3;
  *(undefined4 *)(param_2 + 0xbc) = param_1;
  *(undefined4 *)(param_2 + 0xba) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00abb204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x168))();
  return;
}




void FUN_00abb208(undefined4 param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = *param_3;
  *(undefined4 *)(param_2 + 0x5e4) = param_1;
  *(undefined4 *)(param_2 + 0x5d4) = uVar1;
  return;
}




void FUN_00abb218(float param_1,float param_2,long param_3)

{
  *(float *)(param_3 + 0x5e8) = param_1;
  *(float *)(param_3 + 0x5ec) = param_2;
  *(bool *)(param_3 + 0x5f0) = param_1 != param_2;
  if ((*(float *)(param_3 + 0x48) == param_1) && (*(float *)(param_3 + 0x4c) == param_1)) {
    return;
  }
  *(float *)(param_3 + 0x48) = param_1;
  *(float *)(param_3 + 0x4c) = param_1;
  FUN_0091ada4();
  return;
}




void FUN_00abb250(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x37c) =
       *(uint *)(param_1 + 0x37c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x37c) & 3 | (~param_2 & 1) << 2;
  return;
}




void FUN_00abb268(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x46c);
  uVar2 = (uint)(*(float *)(param_1 + 0x5dc) * 255.0);
  if ((uVar1 >> 7 & 0xff) != uVar2) {
    *(uint *)(param_1 + 0x46c) = uVar1 & 0xffff8000 | uVar1 & 0x7f | (uVar2 & 0xff) << 7;
    FUN_0091ada4(param_1 + 1000);
  }
  FUN_00f0e670(param_1 + 1000,param_1 + 0x5cc,2);
  FUN_00abb2d0(param_1);
  return;
}




void FUN_00abb2d0(long param_1)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  float fVar6;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x5f0) != '\0') {
    fVar6 = *(float *)(param_1 + 0x5e8);
    if ((*(float *)(param_1 + 0x48) != fVar6) || (*(float *)(param_1 + 0x4c) != fVar6)) {
      *(float *)(param_1 + 0x48) = fVar6;
      *(float *)(param_1 + 0x4c) = fVar6;
      FUN_0091ada4(param_1);
    }
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
      FUN_00efe530(puVar4);
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    local_50 = *(undefined4 *)(param_1 + 0x5ec);
    uStack_4c = local_50;
    FUN_00efe58c(puVar4,&local_50);
    FUN_00efcac4(0x3c23d70a,puVar4);
    lVar2 = DAT_03210d00;
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
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efe530(puVar5);
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    local_50 = *(undefined4 *)(param_1 + 0x5e8);
    uStack_4c = local_50;
    FUN_00efe58c(puVar5,&local_50);
    FUN_00efcac4(0x3e800000,puVar5);
    FUN_00efcb24(puVar5,FUN_00a269a4);
    FUN_00f01980(param_1);
    FUN_00f02308(param_1,puVar4,puVar5,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00abb4d4(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x46c);
  uVar2 = (uint)(*(float *)(param_1 + 0x5d8) * 255.0);
  if ((uVar1 >> 7 & 0xff) != uVar2) {
    *(uint *)(param_1 + 0x46c) = uVar1 & 0xffff8000 | uVar1 & 0x7f | (uVar2 & 0xff) << 7;
    FUN_0091ada4(param_1 + 1000);
  }
  FUN_00f0e670(param_1 + 1000,param_1 + 0x5c8,2);
  return;
}




void FUN_00abb534(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_00abaee8(param_1,param_2 & 1);
  puVar1 = param_1 + 0xbf;
  *param_1 = &PTR_FUN_027ca918;
  FUN_00f0eda4(puVar1);
  puVar2 = param_1 + 0xdf;
  FUN_00f0d160(puVar2);
  *(undefined4 *)(param_1 + 0x106) = 0;
  param_1[0x105] = 0;
  FUN_00f023ec(param_1 + 0x34,puVar1,1);
  FUN_00f023ec(param_1 + 0x34,puVar2,1);
  if ((*(float *)(param_1 + 0xc9) != 0.5) || (*(float *)((long)param_1 + 0x64c) != 0.5)) {
    param_1[0xc9] = 0x3f0000003f000000;
    FUN_0091ada4(puVar1);
  }
  FUN_00f0e540(puVar1,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  FUN_00f0e578(puVar1,"circle_button_fill");
  FUN_00f0e670(puVar1,&DAT_01bee7f6,2);
  if ((*(uint *)((long)param_1 + 0x67c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x67c) = *(uint *)((long)param_1 + 0x67c) & 0xffff807f | 0x3f80;
    FUN_0091ada4(puVar1);
  }
  FUN_00f0eea0(puVar1,FUN_00ab6b70,param_1);
  FUN_00f0d92c(puVar2,PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78,&DAT_01bee7fa);
  if ((*(float *)(param_1 + 0xe9) != 0.5) || (*(float *)((long)param_1 + 0x74c) != 0.5)) {
    param_1[0xe9] = 0x3f0000003f000000;
    FUN_0091ada4(puVar2);
  }
  FUN_00f08c18(param_1 + 0xf9,0);
  return;
}




void FUN_00abb6ac(float param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_1 <= 0.0) || (*(float *)(param_2 + 0x82c) != 0.0)) {
    if ((0.0 < param_1) || (*(float *)(param_2 + 0x82c) <= 0.0)) goto LAB_00abb714;
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  FUN_00abb7d0(param_2,uVar2);
LAB_00abb714:
  if (param_1 == 0.0) {
    *(undefined4 *)(param_2 + 0x830) = 0;
    *(undefined8 *)(param_2 + 0x828) = 0;
    FUN_00e705c8(&local_48,&DAT_01e277f2);
  }
  else {
    fVar3 = *(float *)(param_2 + 0x828);
    if (*(float *)(param_2 + 0x828) < param_1) {
      *(float *)(param_2 + 0x828) = param_1;
      fVar3 = param_1;
    }
    *(float *)(param_2 + 0x82c) = param_1;
    *(float *)(param_2 + 0x830) = param_1 / fVar3;
    FUN_00e70510(&local_48);
    FUN_00e70e18(&local_48,&DAT_01bb6d43,(int)param_1);
  }
  FUN_00f0d75c(param_2 + 0x6f8,&local_48);
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




void FUN_00abb7d0(long param_1,ulong param_2)

{
  ushort *puVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  undefined4 uVar5;
  
  lVar2 = DAT_03210d00;
  puVar1 = (ushort *)(DAT_03210d00 + 0x20010);
  uVar3 = *puVar1;
  if ((param_2 & 1) == 0) {
    if (uVar3 == 0xffff) {
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
      *puVar1 = uVar3;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efcad4(puVar4);
      *(undefined ***)puVar4 = &PTR_FUN_02825268;
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    uVar5 = 0x3eb33333;
  }
  else {
    if (uVar3 == 0xffff) {
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
      *puVar1 = uVar3;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efcad4(puVar4);
      *(undefined ***)puVar4 = &PTR_FUN_02825220;
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    uVar5 = 0x3ba3d70a;
  }
  FUN_00efcac4(uVar5,puVar4);
  FUN_00f022a0(param_1 + 0x6f8,puVar4);
  return;
}




void FUN_00abb930(void *param_1)

{
  FUN_009c7fa8();
  operator_delete(param_1);
  return;
}




void FUN_00abb954(void)

{
  return;
}




void FUN_00abb958(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d5058;
  FUN_00f13d08(param_1 + 0x3a7);
  FUN_00f01868(param_1 + 0x396);
  FUN_00f13d08(param_1 + 0x362);
  FUN_00f01868(param_1 + 0x351);
  FUN_00f0d3a4(param_1 + 0x32b);
  FUN_00f0d3a4(param_1 + 0x305);
  param_1[0x2e7] = &PTR_FUN_028266f0;
  param_1[0x2fe] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x301);
  FUN_00f13d08(param_1 + 0x2e7);
  param_1[0x2c9] = &PTR_FUN_028266f0;
  param_1[0x2e0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2e3);
  FUN_00f13d08(param_1 + 0x2c9);
  FUN_00f01868(param_1 + 0x2b8);
  FUN_009c7fa8(param_1);
  return;
}




void FUN_00abba3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d5058;
  FUN_00f13d08(param_1 + 0x3a7);
  FUN_00f01868(param_1 + 0x396);
  FUN_00f13d08(param_1 + 0x362);
  FUN_00f01868(param_1 + 0x351);
  FUN_00f0d3a4(param_1 + 0x32b);
  FUN_00f0d3a4(param_1 + 0x305);
  param_1[0x2e7] = &PTR_FUN_028266f0;
  param_1[0x2fe] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x301);
  FUN_00f13d08(param_1 + 0x2e7);
  param_1[0x2c9] = &PTR_FUN_028266f0;
  param_1[0x2e0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2e3);
  FUN_00f13d08(param_1 + 0x2c9);
  FUN_00f01868(param_1 + 0x2b8);
  FUN_009c7fa8(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00abbb28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d51f0;
  param_1[0x46f] = &PTR_FUN_028266f0;
  param_1[0x486] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x489);
  FUN_00f13d08(param_1 + 0x46f);
  param_1[0x451] = &PTR_FUN_028266f0;
  param_1[0x468] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x46b);
  FUN_00f13d08(param_1 + 0x451);
  FUN_00f0d3a4(param_1 + 0x42b);
  param_1[0x40d] = &PTR_FUN_028266f0;
  param_1[0x424] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x427);
  FUN_00f13d08(param_1 + 0x40d);
  FUN_00f01868(param_1 + 0x3fc);
  param_1[0x3de] = &PTR_FUN_028266f0;
  param_1[0x3f5] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3f8);
  FUN_00f13d08(param_1 + 0x3de);
  FUN_00abb958(param_1);
  return;
}




void FUN_00abbc18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d51f0;
  param_1[0x46f] = &PTR_FUN_028266f0;
  param_1[0x486] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x489);
  FUN_00f13d08(param_1 + 0x46f);
  param_1[0x451] = &PTR_FUN_028266f0;
  param_1[0x468] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x46b);
  FUN_00f13d08(param_1 + 0x451);
  FUN_00f0d3a4(param_1 + 0x42b);
  param_1[0x40d] = &PTR_FUN_028266f0;
  param_1[0x424] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x427);
  FUN_00f13d08(param_1 + 0x40d);
  FUN_00f01868(param_1 + 0x3fc);
  param_1[0x3de] = &PTR_FUN_028266f0;
  param_1[0x3f5] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3f8);
  FUN_00f13d08(param_1 + 0x3de);
  *param_1 = &PTR_FUN_027d5058;
  FUN_00f13d08(param_1 + 0x3a7);
  FUN_00f01868(param_1 + 0x396);
  FUN_00f13d08(param_1 + 0x362);
  FUN_00f01868(param_1 + 0x351);
  FUN_00f0d3a4(param_1 + 0x32b);
  FUN_00f0d3a4(param_1 + 0x305);
  param_1[0x2e7] = &PTR_FUN_028266f0;
  param_1[0x2fe] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x301);
  FUN_00f13d08(param_1 + 0x2e7);
  param_1[0x2c9] = &PTR_FUN_028266f0;
  param_1[0x2e0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2e3);
  FUN_00f13d08(param_1 + 0x2c9);
  FUN_00f01868(param_1 + 0x2b8);
  FUN_009c7fa8(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00abbdbc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d5388;
  param_1[0x9b] = &PTR_FUN_028266f0;
  param_1[0xb2] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xb5);
  FUN_00f13d08(param_1 + 0x9b);
  param_1[0x7d] = &PTR_FUN_028266f0;
  param_1[0x94] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x97);
  FUN_00f13d08(param_1 + 0x7d);
  param_1[0x5f] = &PTR_FUN_028266f0;
  param_1[0x76] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x79);
  FUN_00f13d08(param_1 + 0x5f);
  FUN_00f01868(param_1 + 0x4e);
  FUN_009c825c(param_1);
  return;
}




void FUN_00abbe60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d5388;
  param_1[0x9b] = &PTR_FUN_028266f0;
  param_1[0xb2] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xb5);
  FUN_00f13d08(param_1 + 0x9b);
  param_1[0x7d] = &PTR_FUN_028266f0;
  param_1[0x94] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x97);
  FUN_00f13d08(param_1 + 0x7d);
  param_1[0x5f] = &PTR_FUN_028266f0;
  param_1[0x76] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x79);
  FUN_00f13d08(param_1 + 0x5f);
  FUN_00f01868(param_1 + 0x4e);
  FUN_009c825c(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00abbf0c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined **ppuVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  code *local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  FUN_00ce1c44();
  plVar1 = param_1 + 0x80;
  *param_1 = (long)&PTR_FUN_027d5508;
  FUN_00ab6c24(plVar1,0);
  plVar2 = param_1 + 0x338;
  FUN_00f0c714(plVar2);
  plVar3 = param_1 + 0x353;
  FUN_00f0c714(plVar3);
  plVar4 = param_1 + 0x36e;
  FUN_00f0d160(plVar4);
  FUN_00e70510(param_1 + 0x394);
  FUN_00e70510(param_1 + 0x396);
  FUN_00e70510(param_1 + 0x398);
  *(undefined2 *)(param_1 + 0x39d) = 0x100;
  param_1[0x39a] = 0x41000000447a0000;
  param_1[0x39c] = 0;
  param_1[0x39b] = 0x1000000003;
  *(undefined8 *)((long)param_1 + 0x1cea) = 0;
  local_98 = (code *)0x3f00000000000000;
  (**(code **)(*param_1 + 0x28))(param_1,&local_98);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  *(uint *)((long)param_1 + 0x1b1c) = *(uint *)((long)param_1 + 0x1b1c) & 0xffffffbf;
  *(uint *)((long)param_1 + 0x484) = *(uint *)((long)param_1 + 0x484) & 0xffffffbf;
  uVar8 = FUN_0092ea9c();
  FUN_00ab703c(0,0x447a0000,0x447a0000,plVar1,0,&DAT_03210450,&DAT_01bee7fa,&DAT_03218ef8,0);
  if ((*(uint *)((long)param_1 + 0x484) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x484) = *(uint *)((long)param_1 + 0x484) & 0xffff807f;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0c774(plVar2,&DAT_01bee7f6);
  uVar6 = *(uint *)((long)param_1 + 0x1a44);
  if ((uVar6 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x1a44) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar2);
  }
  local_98 = (code *)CONCAT44(local_98._4_4_,0xffe0e0e0);
  FUN_00f0c774(plVar3,&local_98);
  uVar6 = *(uint *)((long)param_1 + 0x1b1c);
  if ((uVar6 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x1b1c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x5900;
    FUN_0091ada4(plVar3);
  }
  plVar2 = param_1 + 0x22;
  if ((*(float *)(param_1 + 0x2a) != 0.0) || (*(float *)((long)param_1 + 0x154) != 0.0)) {
    param_1[0x2a] = 0;
    FUN_0091ada4(plVar2);
  }
  local_98 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0x22] + 0x28))(plVar2,&local_98);
  plVar3 = param_1 + 0x48;
  if ((*(float *)(param_1 + 0x50) != 0.0) || (*(float *)((long)param_1 + 0x284) != 0.0)) {
    param_1[0x50] = 0;
    FUN_0091ada4(plVar3);
  }
  local_98 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0x48] + 0x28))(plVar3,&local_98);
  ppuVar5 = &PTR_s_build___Fonts_Brandon_Light_60_f_02be9c18;
  if ((uVar8 & 1) == 0) {
    ppuVar5 = &PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10;
  }
  FUN_00b0360c(param_1,*ppuVar5,&DAT_01bee7fa);
  FUN_00b03834(param_1,3);
  FUN_00ce1cbc(param_1,1);
  FUN_00f0d9a4(plVar2,0);
  *(uint *)((long)param_1 + 0x194) = *(uint *)((long)param_1 + 0x194) & 0xffffffef;
  FUN_00f04710(plVar2);
  FUN_00f0d9a4(plVar3,0);
  *(uint *)((long)param_1 + 0x2c4) = *(uint *)((long)param_1 + 0x2c4) & 0xffffffef;
  FUN_00f04710(plVar3);
  FUN_00f0d92c(plVar4,PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78,&DAT_031339d8);
  if ((*(uint *)((long)param_1 + 0x1bf4) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x1bf4) = *(uint *)((long)param_1 + 0x1bf4) & 0xffff807f;
    FUN_0091ada4(plVar4);
  }
  local_70 = DAT_03210c64;
  local_98 = thunk_FUN_00ce1ef0;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 0x81,&local_98);
  FUN_00b0914c(plVar1,1);
  local_70 = DAT_03210fb0;
  local_98 = thunk_FUN_00abcfb0;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 1,&local_98);
  local_70 = DAT_03210fac;
  local_98 = thunk_FUN_00abc788;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 1,&local_98);
  FUN_00abc380(0x447a0000,0xbf800000,param_1);
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

