// functions/00c8c — 15 functions
#include "libGameKindred.h"




void FUN_00c8c118(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c8c120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x160))();
  return;
}




void FUN_00c8c124(void)

{
  return;
}




void FUN_00c8c128(void)

{
  return;
}




void FUN_00c8c130(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  FUN_00c8bc0c();
  plVar1 = param_1 + 0x1b;
  *param_1 = (long)&PTR_FUN_02805970;
  FUN_00f13ca4(plVar1);
  plVar2 = param_1 + 0x32;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x50;
  FUN_00f0d160(plVar3);
  param_1[0x78] = 0;
  param_1[0x77] = 0;
  param_1[0x79] = 0;
  *(undefined8 *)((long)param_1 + 0x3fc) = 0;
  *(undefined8 *)((long)param_1 + 0x3f4) = 0;
  *(undefined8 *)((long)param_1 + 0x3ec) = 0;
  *(undefined8 *)((long)param_1 + 0x3e4) = 0;
  *(undefined8 *)((long)param_1 + 0x3dc) = 0;
  *(undefined8 *)((long)param_1 + 0x3d4) = 0;
  *(undefined4 *)((long)param_1 + 0x404) = 0;
  memset(param_1 + 0x82,0,0x78);
  *(undefined4 *)(param_1 + 0x81) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x7a) = 1;
  param_1[0x76] = (long)&PTR_FUN_027efd18;
  *(undefined4 *)(param_1 + 0x91) = 0;
  param_1[0x97] = 0;
  param_1[0x96] = 0;
  param_1[0x95] = 0;
  param_1[0x94] = 0;
  param_1[0x93] = 0;
  param_1[0x92] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_00f0d378(plVar3,PTR_s_build___Fonts_Brandon_Bold_190_f_02be9cb8);
  FUN_00f0da30(plVar3,1);
  *(uint *)((long)param_1 + 0x304) = *(uint *)((long)param_1 + 0x304) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x3c) == (float)DAT_03218f08) &&
     (*(float *)((long)param_1 + 0x1e4) == DAT_03218f08._4_4_)) {
    return;
  }
  param_1[0x3c] = CONCAT44(DAT_03218f08._4_4_,(float)DAT_03218f08);
  FUN_0091ada4(plVar2);
  return;
}




void FUN_00c8c2c8(long *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = 0x3f0000003f000000;
  (**(code **)(param_1[0x50] + 0x28))(param_1 + 0x50,&local_58);
  FUN_008fce60(param_1 + 0x77,param_2 + 8);
  param_1[0x7a] = *(long *)(param_2 + 0x20);
  FUN_008fce60(param_1 + 0x7b,param_2 + 0x28);
  FUN_008fce60(param_1 + 0x7e,param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x81) = *(undefined4 *)(param_2 + 0x58);
  FUN_008fce60(param_1 + 0x82,param_2 + 0x60);
  FUN_008fce60(param_1 + 0x85,param_2 + 0x78);
  FUN_008fce60(param_1 + 0x88,param_2 + 0x90);
  FUN_008fce60(param_1 + 0x8b,param_2 + 0xa8);
  FUN_008fce60(param_1 + 0x8e,param_2 + 0xc0);
  *(undefined4 *)(param_1 + 0x91) = *(undefined4 *)(param_2 + 0xd8);
  FUN_008fce60(param_1 + 0x92,param_2 + 0xe0);
  FUN_008fce60(param_1 + 0x95,param_2 + 0xf8);
  lVar3 = param_1[0x91];
  FUN_00e70510(&local_58);
  if ((int)(float)(int)lVar3 < 2) {
    puVar2 = &DAT_01bb6d43;
  }
  else {
    puVar2 = &DAT_01b95634;
  }
  FUN_00e70e18(&local_58,puVar2,(int)(float)(int)lVar3);
  FUN_00f0d75c(param_1 + 0x50,&local_58);
  if ((*(byte *)(param_1 + 0x95) & 1) == 0) {
    lVar3 = (long)param_1 + 0x4a9;
  }
  else {
    lVar3 = param_1[0x97];
  }
  if ((*(byte *)(param_1 + 0x92) & 1) == 0) {
    lVar4 = (long)param_1 + 0x491;
  }
  else {
    lVar4 = param_1[0x94];
  }
  FUN_00f0e548(param_1 + 0x32,lVar3,lVar4);
  (**(code **)(*param_1 + 0x160))(param_1);
  (**(code **)(*param_1 + 0x148))(param_1);
  FUN_00c8b224(0x438c0000,0x41700000,0x3f333333,0x3e800000,param_1 + 0x32,param_1 + 0x8b);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c8c4a8(long param_1)

{
  long lVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  long lVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  char *__s2;
  char *pcVar8;
  ushort uVar9;
  long lVar10;
  void *__s1;
  ushort *puVar11;
  ushort *puVar12;
  undefined8 uVar13;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  FUN_00c8bd18();
  lVar1 = param_1 + 0x280;
  *(uint *)(param_1 + 0x304) = *(uint *)(param_1 + 0x304) | 4;
  FUN_00f01980(lVar1);
  if ((*(float *)(param_1 + 0x2c8) != 3.0) || (*(float *)(param_1 + 0x2cc) != 3.0)) {
    uVar13 = NEON_fmov(0x40400000,4);
    *(undefined8 *)(param_1 + 0x2c8) = uVar13;
    FUN_0091ada4(lVar1);
  }
  if ((*(uint *)(param_1 + 0x304) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x304) = *(uint *)(param_1 + 0x304) & 0xffff807f;
    FUN_0091ada4(lVar1);
  }
  lVar10 = DAT_03210d00;
  uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar9 == 0xffff) {
    puVar11 = (ushort *)0x0;
  }
  else {
    puVar11 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
    if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar9 = 0xffff;
    }
    else {
      uVar9 = *puVar11;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
    *(int *)(lVar10 + 0x20014) = *(int *)(lVar10 + 0x20014) + 1;
    FUN_00efcad4(puVar11);
    *(undefined ***)puVar11 = &PTR_FUN_027c1a60;
    *(int *)(lVar10 + 0x20020) = *(int *)(lVar10 + 0x20020) + 1;
  }
  uVar5 = 0x3fe00000;
  if (*(int *)(param_1 + 0x488) != 1) {
    uVar5 = 0x3f400000;
  }
  FUN_00efcac4(uVar5,puVar11);
  FUN_00f022a0(lVar1,puVar11);
  if (*(int *)(param_1 + 0x488) < 2) goto LAB_00c8c9dc;
  bVar3 = *(byte *)(param_1 + 0x470);
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x478);
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (__n == sVar2) {
    __s1 = *(void **)(param_1 + 0x480);
    if ((bVar3 & 1) == 0) {
      __s1 = (void *)(param_1 + 0x471);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (__n != 0) {
        pcVar8 = (char *)(param_1 + 0x471);
        lVar10 = -(ulong)(bVar3 >> 1);
        do {
          if (*pcVar8 != *__s2) goto LAB_00c8c69c;
          pcVar8 = pcVar8 + 1;
          lVar10 = lVar10 + 1;
          __s2 = __s2 + 1;
        } while (lVar10 != 0);
      }
    }
    else if ((__n != 0) && (iVar6 = memcmp(__s1,__s2,__n), iVar6 != 0)) goto LAB_00c8c69c;
  }
  else {
LAB_00c8c69c:
    lVar10 = DAT_03210d00;
    uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar9 == 0xffff) {
      puVar11 = (ushort *)0x0;
      if ((bVar3 & 1) != 0) goto LAB_00c8c6e8;
LAB_00c8c74c:
      param_1 = param_1 + 0x471;
    }
    else {
      puVar11 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar9 * 0x40);
      if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar9 = 0xffff;
      }
      else {
        uVar9 = *puVar11;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
      *(int *)(lVar10 + 0x20014) = *(int *)(lVar10 + 0x20014) + 1;
      FUN_00efc8e8(puVar11);
      puVar11[8] = 0;
      puVar11[9] = 0;
      puVar11[10] = 0;
      puVar11[0xb] = 0;
      puVar11[0xc] = 0;
      puVar11[0xd] = 0;
      puVar11[0xe] = 0;
      puVar11[0xf] = 0;
      puVar11[0x14] = 0;
      puVar11[0x10] = 0;
      puVar11[0x11] = 0;
      puVar11[0x12] = 0;
      puVar11[0x13] = 0;
      *(undefined ***)puVar11 = &PTR_FUN_027d0db0;
      *(int *)(lVar10 + 0x20020) = *(int *)(lVar10 + 0x20020) + 1;
      if ((*(byte *)(param_1 + 0x470) & 1) == 0) goto LAB_00c8c74c;
LAB_00c8c6e8:
      param_1 = *(long *)(param_1 + 0x480);
    }
    FUN_008fa54c(local_70,param_1);
    FUN_00a99c48(puVar11,local_70,0,0);
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    FUN_00f022a0(lVar1,puVar11);
  }
  uVar13 = FUN_00eff63c(0x3f400000,0x3f400000,0x3e800000,0);
  FUN_00efcb24(uVar13,FUN_009a7624);
  uVar7 = FUN_00eff63c(0x3f800000,0x3f800000,0x3d23d70a,0);
  FUN_00efcb24(uVar7,FUN_009a7624);
  lVar10 = DAT_03210d00;
  uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar9 == 0xffff) {
    puVar11 = (ushort *)0x0;
  }
  else {
    puVar11 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
    if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar9 = 0xffff;
    }
    else {
      uVar9 = *puVar11;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
    *(int *)(lVar10 + 0x20014) = *(int *)(lVar10 + 0x20014) + 1;
    FUN_00efd208(puVar11);
    *(int *)(lVar10 + 0x20020) = *(int *)(lVar10 + 0x20020) + 1;
  }
  FUN_00efd2dc(puVar11,uVar13,uVar7,0);
  uVar13 = FUN_00efee28(0x3f800000,0x3ee66666,FUN_009a7624);
  lVar10 = DAT_03210d00;
  uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar9 == 0xffff) {
    puVar12 = (ushort *)0x0;
  }
  else {
    puVar12 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
    if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar9 = 0xffff;
    }
    else {
      uVar9 = *puVar12;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
    *(int *)(lVar10 + 0x20014) = *(int *)(lVar10 + 0x20014) + 1;
    FUN_00efcd98(puVar12);
    *(int *)(lVar10 + 0x20020) = *(int *)(lVar10 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar12,puVar11,uVar13,0);
  FUN_00f022a0(lVar1,puVar12);
  lVar10 = DAT_03210d00;
  uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar9 == 0xffff) {
    puVar11 = (ushort *)0x0;
  }
  else {
    puVar11 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
    if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar9 = 0xffff;
    }
    else {
      uVar9 = *puVar11;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
    *(int *)(lVar10 + 0x20014) = *(int *)(lVar10 + 0x20014) + 1;
    FUN_00efcad4(puVar11);
    *(undefined ***)puVar11 = &PTR_FUN_027c1a60;
    *(int *)(lVar10 + 0x20020) = *(int *)(lVar10 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3f733333,puVar11);
  FUN_00f022a0(lVar1,puVar11);
LAB_00c8c9dc:
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c8ca0c(long *param_1)

{
  FUN_00f01980();
  FUN_00f01980(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00c8ca3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x160))(param_1);
  return;
}




void FUN_00c8ca40(long param_1)

{
  FUN_00c8bee8();
  *(uint *)(param_1 + 0x304) = *(uint *)(param_1 + 0x304) & 0xfffffffb;
  return;
}




void FUN_00c8ca6c(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  
  lVar1 = param_3 + 400;
  uVar2 = FUN_00f023dc(lVar1);
  if ((uVar2 & 1) == 0) {
    fVar3 = (float)FUN_00f0e700(lVar1);
    FUN_00f0e700(lVar1);
    if (fVar3 <= param_2) {
      fVar3 = param_2;
    }
    fVar3 = 500.0 / fVar3;
    if ((*(float *)(param_3 + 0x1d8) != fVar3) || (*(float *)(param_3 + 0x1dc) != fVar3)) {
      *(float *)(param_3 + 0x1d8) = fVar3;
      *(float *)(param_3 + 0x1dc) = fVar3;
      FUN_0091ada4(lVar1);
    }
    FUN_00f07940(0,0,lVar1,8,param_3 + 0xd8,8);
  }
  FUN_00f07940(0,0xc2700000,param_3 + 0xd8,8,param_3,8);
  FUN_00f07940(0,0x43898000,param_3 + 0x280,8,param_3 + 0xd8,8);
  return;
}




void FUN_00c8cb5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02805970;
  param_1[0x76] = &PTR_FUN_027efd18;
  if ((*(byte *)(param_1 + 0x95) & 1) != 0) {
    operator_delete((void *)param_1[0x97]);
  }
  if ((*(byte *)(param_1 + 0x92) & 1) != 0) {
    operator_delete((void *)param_1[0x94]);
  }
  FUN_00beb548(param_1 + 0x76);
  FUN_00f0d3a4(param_1 + 0x50);
  param_1[0x32] = &PTR_FUN_028266f0;
  param_1[0x49] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4c);
  FUN_00f13d08(param_1 + 0x32);
  FUN_00f13d08(param_1 + 0x1b);
  FUN_00c8bc58(param_1);
  return;
}




void FUN_00c8cc04(void *param_1)

{
  FUN_00c8cb5c();
  operator_delete(param_1);
  return;
}




undefined8 FUN_00c8cc28(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00f023dc();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  uVar2 = FUN_00f023dc(param_1 + 0x280);
  return uVar2;
}




void FUN_00c8cc60(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  FUN_00c8bc0c();
  plVar1 = param_1 + 0x1b;
  *param_1 = (long)&PTR_FUN_02805af8;
  FUN_00f13ca4(plVar1);
  plVar2 = param_1 + 0x32;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x50;
  FUN_00f0d160(plVar3);
  plVar4 = param_1 + 0x76;
  FUN_00f1306c(plVar4);
  FUN_00f0e4a8(param_1 + 0xa1);
  plVar5 = param_1 + 0xbf;
  FUN_00f0d160(plVar5);
  param_1[0xe7] = 0;
  param_1[0xe6] = 0;
  param_1[0xe8] = 0;
  *(undefined8 *)((long)param_1 + 0x774) = 0;
  *(undefined8 *)((long)param_1 + 0x76c) = 0;
  *(undefined8 *)((long)param_1 + 0x764) = 0;
  *(undefined8 *)((long)param_1 + 0x75c) = 0;
  *(undefined8 *)((long)param_1 + 0x754) = 0;
  *(undefined8 *)((long)param_1 + 0x74c) = 0;
  *(undefined4 *)((long)param_1 + 0x77c) = 0;
  memset(param_1 + 0xf1,0,0x78);
  *(undefined4 *)(param_1 + 0xf0) = 0x3f800000;
  param_1[0x100] = 0;
  param_1[0xe5] = (long)&PTR_FUN_028057c0;
  FUN_008fa54c(param_1 + 0x101,PTR_s_build___SpoilsOfWarPartsCommon_t_02be3638);
  *(undefined4 *)(param_1 + 0xe9) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  param_1[0x107] = 0;
  param_1[0x106] = 0;
  param_1[0x105] = 0;
  param_1[0x104] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_00f133a4(plVar4,param_1 + 0xa1,1);
  FUN_00f133a4(plVar4,plVar5,1);
  FUN_00f0d378(plVar3,PTR_s_build___Fonts_Brandon_Bold_190_f_02be9cb8);
  FUN_00f0d378(plVar5,PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0);
  FUN_00f0da30(plVar3,1);
  *(uint *)((long)param_1 + 0x304) = *(uint *)((long)param_1 + 0x304) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x67c) = *(uint *)((long)param_1 + 0x67c) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x3c) == (float)DAT_03218f08) &&
     (*(float *)((long)param_1 + 0x1e4) == DAT_03218f08._4_4_)) {
    return;
  }
  param_1[0x3c] = CONCAT44(DAT_03218f08._4_4_,(float)DAT_03218f08);
  FUN_0091ada4(plVar2);
  return;
}




void FUN_00c8ce98(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar4 = (int)*(float *)(param_1 + 0x838);
  FUN_00e70510(&local_48);
  if (iVar4 < 0) {
    puVar3 = &DAT_01bb6d43;
  }
  else {
    puVar3 = &DAT_01b97cee;
  }
  FUN_00e70e18(&local_48,puVar3,iVar4);
  lVar1 = param_1 + 0x280;
  FUN_00f0d75c(lVar1,&local_48);
  FUN_00e70e18(&local_48,&DAT_01bb6d43,*(int *)(param_1 + 0x840) + iVar4);
  FUN_00f0d75c(param_1 + 0x5f8,&local_48);
  FUN_00f07b18(0xc2820000,lVar1,2,param_1 + 0x3b0,0);
  FUN_00f07b18(0,lVar1,4,param_1 + 0x3b0,4);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c8cf94(long *param_1,long param_2)

{
  byte *pbVar1;
  size_t sVar2;
  size_t sVar3;
  void *pvVar4;
  undefined4 uVar5;
  byte bVar6;
  long lVar7;
  int iVar8;
  undefined *puVar9;
  char *pcVar10;
  long lVar11;
  char *pcVar12;
  long lVar13;
  void *pvVar14;
  float fVar15;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  lVar7 = tpidr_el0;
  local_58 = *(long *)(lVar7 + 0x28);
  FUN_008fce60(param_1 + 0xe6,param_2 + 8);
  param_1[0xe9] = *(long *)(param_2 + 0x20);
  FUN_008fce60(param_1 + 0xea,param_2 + 0x28);
  FUN_008fce60(param_1 + 0xed,param_2 + 0x40);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0x58);
  FUN_008fce60(param_1 + 0xf1,param_2 + 0x60);
  FUN_008fce60(param_1 + 0xf4,param_2 + 0x78);
  FUN_008fce60(param_1 + 0xf7,param_2 + 0x90);
  FUN_008fce60(param_1 + 0xfa,param_2 + 0xa8);
  FUN_008fce60(param_1 + 0xfd,param_2 + 0xc0);
  param_1[0x100] = *(long *)(param_2 + 0xd8);
  FUN_008fce60(param_1 + 0x101,param_2 + 0xe0);
  pbVar1 = (byte *)(param_1 + 0x104);
  FUN_008fce60(pbVar1,param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)((long)param_1 + 0x804);
  *(float *)((long)param_1 + 0x83c) = (float)(int)param_1[0x100];
  if ((*(byte *)(param_1 + 0x101) & 1) == 0) {
    lVar13 = (long)param_1 + 0x809;
  }
  else {
    lVar13 = param_1[0x103];
  }
  if ((*pbVar1 & 1) == 0) {
    lVar11 = (long)param_1 + 0x821;
  }
  else {
    lVar11 = param_1[0x106];
  }
  FUN_00f0e548(param_1 + 0x32,lVar13,lVar11);
  if ((*(byte *)(param_1 + 0x101) & 1) == 0) {
    lVar13 = (long)param_1 + 0x809;
  }
  else {
    lVar13 = param_1[0x103];
  }
  if ((*pbVar1 & 1) == 0) {
    lVar11 = (long)param_1 + 0x821;
  }
  else {
    lVar11 = param_1[0x106];
  }
  FUN_00f0e548(param_1 + 0xa1,lVar13,lVar11);
  fVar15 = *(float *)(param_1 + 0x107);
  FUN_00e70510(&local_68);
  if ((int)fVar15 < 0) {
    puVar9 = &DAT_01bb6d43;
  }
  else {
    puVar9 = &DAT_01b97cee;
  }
  FUN_00e70e18(&local_68,puVar9,(int)fVar15);
  FUN_00f0d75c(param_1 + 0x50,&local_68);
  FUN_00e70e18(&local_68,&DAT_01bb6d43,(int)param_1[0x108]);
  FUN_00f0d75c(param_1 + 0xbf,&local_68);
  *(uint *)((long)param_1 + 0x304) = *(uint *)((long)param_1 + 0x304) | 4;
  *(uint *)((long)param_1 + 0x67c) = *(uint *)((long)param_1 + 0x67c) | 4;
  (**(code **)(*param_1 + 0x160))(param_1);
  (**(code **)(*param_1 + 0x148))(param_1);
  FUN_00c8b224(0x438c0000,0x41700000,0x3f333333,0x3e800000,param_1 + 0x32,param_1 + 0xfa);
  bVar6 = *(byte *)(param_1 + 0xea);
  sVar2 = (ulong)(bVar6 >> 1);
  if ((bVar6 & 1) != 0) {
    sVar2 = param_1[0xeb];
  }
  sVar3 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar3 = DAT_0320ffb0;
  }
  if (sVar2 == sVar3) {
    pvVar14 = (void *)param_1[0xec];
    pvVar4 = pvVar14;
    if ((bVar6 & 1) == 0) {
      pvVar4 = (void *)((long)param_1 + 0x751);
    }
    pcVar10 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar10 = &DAT_0320ffa9;
    }
    if ((bVar6 & 1) == 0) {
      if (sVar2 != 0) {
        pcVar12 = (char *)((long)param_1 + 0x751);
        lVar13 = -(ulong)(bVar6 >> 1);
        do {
          if (*pcVar12 != *pcVar10) goto LAB_00c8d220;
          pcVar12 = pcVar12 + 1;
          lVar13 = lVar13 + 1;
          pcVar10 = pcVar10 + 1;
        } while (lVar13 != 0);
      }
    }
    else if ((sVar2 != 0) && (iVar8 = memcmp(pvVar4,pcVar10,sVar2), iVar8 != 0)) goto LAB_00c8d240;
  }
  else {
LAB_00c8d220:
    if ((bVar6 & 1) == 0) {
      pvVar14 = (void *)((long)param_1 + 0x751);
    }
    else {
      pvVar14 = (void *)param_1[0xec];
    }
LAB_00c8d240:
    FUN_00aa12a8(0x3f800000,pvVar14,0,1);
  }
  if ((int)param_1[0x100] < 1) {
    bVar6 = *(byte *)(param_1 + 0xf1);
    sVar2 = (ulong)(bVar6 >> 1);
    if ((bVar6 & 1) != 0) {
      sVar2 = param_1[0xf2];
    }
    sVar3 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar3 = DAT_0320ffb0;
    }
    if (sVar2 == sVar3) {
      pvVar14 = (void *)param_1[0xf3];
      pvVar4 = pvVar14;
      if ((bVar6 & 1) == 0) {
        pvVar4 = (void *)((long)param_1 + 0x789);
      }
      pcVar10 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        pcVar10 = &DAT_0320ffa9;
      }
      if ((bVar6 & 1) == 0) {
        if (sVar2 != 0) {
          pcVar12 = (char *)((long)param_1 + 0x789);
          lVar13 = -(ulong)(bVar6 >> 1);
          do {
            if (*pcVar12 != *pcVar10) goto LAB_00c8d364;
            pcVar12 = pcVar12 + 1;
            lVar13 = lVar13 + 1;
            pcVar10 = pcVar10 + 1;
          } while (lVar13 != 0);
        }
        goto LAB_00c8d3d0;
      }
      if (sVar2 == 0) goto LAB_00c8d3d0;
      iVar8 = memcmp(pvVar4,pcVar10,sVar2);
      goto joined_r0x00c8d3a4;
    }
LAB_00c8d364:
    if ((bVar6 & 1) == 0) {
      pvVar14 = (void *)((long)param_1 + 0x789);
    }
    else {
      pvVar14 = (void *)param_1[0xf3];
    }
  }
  else {
    bVar6 = *(byte *)(param_1 + 0xf4);
    sVar2 = (ulong)(bVar6 >> 1);
    if ((bVar6 & 1) != 0) {
      sVar2 = param_1[0xf5];
    }
    sVar3 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar3 = DAT_0320ffb0;
    }
    if (sVar2 == sVar3) {
      pvVar14 = (void *)param_1[0xf6];
      pvVar4 = pvVar14;
      if ((bVar6 & 1) == 0) {
        pvVar4 = (void *)((long)param_1 + 0x7a1);
      }
      pcVar10 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        pcVar10 = &DAT_0320ffa9;
      }
      if ((bVar6 & 1) == 0) {
        if (sVar2 != 0) {
          pcVar12 = (char *)((long)param_1 + 0x7a1);
          lVar13 = -(ulong)(bVar6 >> 1);
          do {
            if (*pcVar12 != *pcVar10) goto LAB_00c8d358;
            pcVar12 = pcVar12 + 1;
            lVar13 = lVar13 + 1;
            pcVar10 = pcVar10 + 1;
          } while (lVar13 != 0);
        }
        goto LAB_00c8d3d0;
      }
      if (sVar2 == 0) goto LAB_00c8d3d0;
      iVar8 = memcmp(pvVar4,pcVar10,sVar2);
joined_r0x00c8d3a4:
      if (iVar8 == 0) goto LAB_00c8d3d0;
    }
    else {
LAB_00c8d358:
      if ((bVar6 & 1) == 0) {
        pvVar14 = (void *)((long)param_1 + 0x7a1);
      }
      else {
        pvVar14 = (void *)param_1[0xf6];
      }
    }
  }
  lVar13 = FUN_00aa12a8(0x3f400000,pvVar14,0,1);
  if (lVar13 != 0) {
    uVar5 = *(undefined4 *)(lVar13 + 0x30);
    param_1[0x19] = lVar13 + 0x28;
    *(undefined4 *)(param_1 + 0x1a) = uVar5;
  }
LAB_00c8d3d0:
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  if (*(long *)(lVar7 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

