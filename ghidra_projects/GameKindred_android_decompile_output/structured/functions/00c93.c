// functions/00c93 — 29 functions
#include "libGameKindred.h"




void FUN_00c93064(long param_1)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  
  if ((*(byte *)(param_1 + 0x8e8) & 1) == 0) {
    if (*(byte *)(param_1 + 0x8e8) >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)(param_1 + 0x8f0) == 0) {
    return;
  }
  FUN_00f01980(param_1);
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar2 * 0x40);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar3);
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    puVar3[0x14] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    *(undefined ***)puVar3 = &PTR_FUN_027d0db0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00a99c48(puVar3,param_1 + 0x8e8,*(undefined1 *)(param_1 + 0x902),0);
  FUN_00f022a0(param_1,puVar3);
  return;
}




void FUN_00c93180(long *param_1,byte param_2)

{
  *(byte *)(param_1 + 0x120) = param_2 & 1;
                    /* WARNING: Could not recover jumptable at 0x00c93190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x168))();
  return;
}




void FUN_00c93194(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  ushort uVar7;
  ushort *puVar8;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar1 = param_3 + 0x240;
  uStack_5c = param_2;
  local_60 = FUN_00f13e54(param_3 + 0x390);
  FUN_00f13f18(lVar1,&local_60);
  if ((*(float *)(param_3 + 0x290) != (float)DAT_03218f08) ||
     (*(float *)(param_3 + 0x294) != DAT_03218f08._4_4_)) {
    *(ulong *)(param_3 + 0x290) = CONCAT44(DAT_03218f08._4_4_,(float)DAT_03218f08);
    FUN_0091ada4(lVar1);
  }
  FUN_00f07940(0,0,lVar1,8,param_3,8);
  FUN_00f01980(lVar1);
  uVar6 = *(uint *)(param_3 + 0x2c4) | 4;
  *(uint *)(param_3 + 0x2c4) = uVar6;
  if ((*(float *)(param_3 + 0x288) != 1.2) || (*(float *)(param_3 + 0x28c) != 1.2)) {
    *(undefined8 *)(param_3 + 0x288) = 0x3f99999a3f99999a;
    FUN_0091ada4(lVar1);
    uVar6 = *(uint *)(param_3 + 0x2c4);
  }
  if ((uVar6 & 0x7f80) != 0x6600) {
    *(uint *)(param_3 + 0x2c4) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x6600;
    FUN_0091ada4(lVar1);
  }
  uVar4 = FUN_00efee28(0,0x3f000000,FUN_0091aa80);
  uVar5 = FUN_00eff63c(0x40000000,0x40000000,0x3f000000,FUN_0091aa80);
  lVar3 = DAT_03210d00;
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
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efcd98(puVar8);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar8,uVar4,uVar5,0);
  FUN_00f022a0(lVar1,puVar8);
  lVar3 = DAT_03210d00;
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
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efc8e8(puVar8);
    *(undefined ***)puVar8 = &PTR_FUN_02825148;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00f022a0(lVar1,puVar8);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c93460(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  ushort *puVar8;
  
  lVar1 = param_1 + 0x720;
  uVar4 = FUN_00f023dc(lVar1);
  if ((uVar4 & 1) != 0) {
    return;
  }
  FUN_00f01980(lVar1);
  uVar2 = *(uint *)(param_1 + 0x7a4);
  *(uint *)(param_1 + 0x7a4) = uVar2 | 4;
  if ((uVar2 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x7a4) = uVar2 & 0xffff807f | 4;
    FUN_0091ada4(lVar1);
  }
  uVar5 = FUN_00efee28(0x3f4ccccd,0x3f4ccccd,FUN_009a71a4);
  uVar6 = FUN_00efee28(0,0x3f4ccccd,FUN_0091aa80);
  lVar3 = DAT_03210d00;
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
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efd208(puVar8);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efd2dc(puVar8,uVar5,uVar6,0);
  FUN_00efd3bc(puVar8);
  FUN_00f022a0(lVar1,puVar8);
  return;
}




void FUN_00c935d0(long param_1)

{
  FUN_00f01980(param_1 + 0x720);
  *(uint *)(param_1 + 0x7a4) = *(uint *)(param_1 + 0x7a4) & 0xfffffffb;
  return;
}




void FUN_00c93600(long *param_1,uint param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  ulong uVar3;
  
  FUN_00c91fbc(param_1,param_2 & 1);
  plVar1 = param_1 + 0x121;
  *param_1 = (long)&PTR_FUN_028062b0;
  FUN_00f0d160(plVar1);
  *(undefined4 *)(param_1 + 0x147) = 3;
  *(undefined1 *)(param_1 + 0x148) = 0;
  *(undefined4 *)((long)param_1 + 0xa3c) = 0xffffffff;
  uVar3 = FUN_0092ea9c();
  ppuVar2 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
  if ((uVar3 & 1) == 0) {
    ppuVar2 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78;
  }
  FUN_00f0d378(plVar1,*ppuVar2);
  *(undefined8 *)((long)param_1 + 0x8c4) = 0x41c00000;
  (**(code **)(*param_1 + 0x160))(param_1);
  param_1[0x102] = (long)plVar1;
  FUN_00f023ec(param_1 + 0x103,plVar1,1);
  return;
}




void FUN_00c936b4(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  plVar1 = param_3 + 0x121;
  fVar5 = (float)FUN_00f0d548(plVar1);
  FUN_00f13f68(param_3,CONCAT44((int)(param_2 +
                                     *(float *)(param_3 + 0x119) + *(float *)(param_3 + 0x119)),
                                (int)(fVar5 + *(float *)((long)param_3 + 0x8c4) +
                                              *(float *)((long)param_3 + 0x8c4))));
  FUN_00c929dc(param_3);
  lVar2 = param_3[0x148];
  fVar5 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar6 = *(float *)((long)param_3 + 0x8c4) + *(float *)((long)param_3 + 0x8c4);
  if ((char)lVar2 == '\0') {
    FUN_00f0db64(fVar5 - fVar6,0,0x3f800000,plVar1);
  }
  else {
    FUN_00f0dad0(plVar1,1);
    (**(code **)(*param_3 + 0x48))(param_3);
    FUN_00f0dc4c(fVar6 - (*(float *)(param_3 + 0x119) + *(float *)(param_3 + 0x119)),0,0x3f800000,
                 plVar1);
    FUN_00f0dac8(plVar1,(int)param_3[0x147]);
  }
  if ((int)param_3[0x147] == 1) {
    uVar3 = 5;
    uVar4 = 5;
  }
  else if ((int)param_3[0x147] == 0) {
    uVar3 = 7;
    uVar4 = 7;
  }
  else {
    uVar3 = 8;
    uVar4 = 8;
  }
  FUN_00f07940(0,0,plVar1,uVar3,param_3,uVar4);
  return;
}




void FUN_00c937dc(long *param_1,byte param_2)

{
  long lVar1;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(byte *)(param_1 + 0x120) = param_2 & 1;
  (**(code **)(*param_1 + 0x168))();
  if ((param_2 & 1) == 0) {
    local_3c = *(undefined4 *)((long)param_1 + 0xa3c);
  }
  else {
    local_3c = 0xff606060;
  }
  FUN_00f0d7fc(param_1 + 0x121,&local_3c);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c93864(long *param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_00f0d378(param_1 + 0x121);
                    /* WARNING: Could not recover jumptable at 0x00c93894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x160))(param_1);
    return;
  }
  return;
}




void FUN_00c938a4(long param_1,undefined4 *param_2)

{
  FUN_00f0d7fc(param_1 + 0x908);
  *(undefined4 *)(param_1 + 0xa3c) = *param_2;
  return;
}




void FUN_00c938d4(long *param_1)

{
  FUN_00f0d75c(param_1 + 0x121);
                    /* WARNING: Could not recover jumptable at 0x00c93900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x160))(param_1);
  return;
}




void FUN_00c93904(long *param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x147) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00c93910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x160))();
  return;
}




void FUN_00c93914(long *param_1,byte param_2)

{
  *(byte *)(param_1 + 0x148) = param_2 & 1;
                    /* WARNING: Could not recover jumptable at 0x00c93924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x160))();
  return;
}




void FUN_00c93928(undefined1 param_1 [16],float param_2,long *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  fVar2 = (float)FUN_00f0d548(param_3 + 0x121);
  fVar3 = (float)*(undefined8 *)((long)param_3 + 0x8c4);
  fVar4 = (float)((ulong)*(undefined8 *)((long)param_3 + 0x8c4) >> 0x20);
  local_30 = CONCAT44(param_2 + fVar4 + fVar4,fVar2 + fVar3 + fVar3);
  FUN_00f13f18(param_3,&local_30);
  (**(code **)(*param_3 + 0x160))(param_3);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c939a8(long param_1,uint param_2)

{
  FUN_00f0da30(param_1 + 0x908,param_2 & 1);
  return;
}




void FUN_00c939b4(long param_1)

{
  FUN_00f0da8c(param_1 + 0x908);
  return;
}




void FUN_00c939bc(long param_1)

{
  FUN_00f0da80(param_1 + 0x908);
  return;
}




void FUN_00c939c4(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  
  FUN_00c91fbc(param_1,param_2 & 1);
  puVar1 = param_1 + 0x121;
  *param_1 = &PTR_FUN_02806448;
  FUN_00f13ca4(puVar1);
  puVar2 = param_1 + 0x138;
  FUN_00f0e4a8(puVar2);
  FUN_00f0e4a8(param_1 + 0x156);
  param_1[0x179] = 0;
  param_1[0x178] = 0;
  param_1[0x177] = 0;
  param_1[0x176] = 0;
  param_1[0x175] = 0;
  param_1[0x174] = 0;
  ppuVar3 = &PTR_s_build___HUDPartsCommon_atlas_02be3440;
  if ((param_2 & 1) == 0) {
    ppuVar3 = &PTR_s_build___MenuPartsCommon_tga_02be3530;
  }
  puVar4 = *ppuVar3;
  FUN_00f023ec(puVar1,puVar2,1);
  FUN_00f0e9c0(puVar2,1);
  FUN_00f0e540(puVar2,puVar4);
  param_1[0x102] = puVar1;
  FUN_00f023ec(param_1 + 0x103,puVar1,1);
  return;
}




void FUN_00c93a88(undefined1 param_1 [16],undefined4 param_2,long param_3,undefined8 param_4,
                 byte *param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_008fce60(param_3 + 0xba0,param_5);
  FUN_008fce60(param_3 + 3000,param_6);
  lVar1 = param_3 + 0x9c0;
  FUN_00f0e628(lVar1);
  pbVar3 = *(byte **)(param_5 + 0x10);
  if ((*param_5 & 1) == 0) {
    pbVar3 = param_5 + 1;
  }
  FUN_00f0e548(lVar1,param_4,pbVar3);
  if (*(int *)(param_3 + 0x8b8) == 0) {
    local_50 = FUN_00f0e700(lVar1);
    uStack_4c = param_2;
    FUN_00f13f18(param_3,&local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c93b48(long *param_1)

{
  FUN_00f13f18(param_1 + 0x138);
                    /* WARNING: Could not recover jumptable at 0x00c93b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00c93b78(long param_1)

{
  FUN_00c929dc();
  FUN_00f07940(0,0,param_1 + 0x9c0,8,param_1,8);
  return;
}




void FUN_00c93bb0(long *param_1,byte param_2)

{
  long lVar1;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(byte *)(param_1 + 0x120) = param_2 & 1;
  (**(code **)(*param_1 + 0x168))();
  if ((param_2 & 1) == 0) {
    local_3c = 0xffffffff;
  }
  else {
    local_3c = 0xff808080;
  }
  FUN_00f0e670(param_1 + 0x138,&local_3c,2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c93c44(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0xba0) & 1) == 0) {
    lVar2 = param_1 + 0xba1;
  }
  else {
    lVar2 = *(long *)(param_1 + 0xbb0);
  }
  FUN_00f0e578(param_1 + 0x9c0,lVar2);
  if (*(int *)(param_1 + 0x8b8) != 0) {
    uVar1 = FUN_00eff63c(0x3f800000,0x3f800000,0x3e4ccccd,FUN_0091aa80);
    FUN_00f022a0(param_1 + 0x818,uVar1);
    return;
  }
  return;
}




void FUN_00c93cbc(long param_1)

{
  size_t __n;
  size_t sVar1;
  void *__s1;
  byte bVar2;
  int iVar3;
  char *__s2;
  char *pcVar4;
  long lVar5;
  void *pvVar6;
  
  bVar2 = *(byte *)(param_1 + 3000);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0xbc0);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    pvVar6 = *(void **)(param_1 + 0xbc8);
    __s1 = pvVar6;
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)(param_1 + 0xbb9);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar4 = (char *)(param_1 + 0xbb9);
        lVar5 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar4 != *__s2) goto LAB_00c93d54;
          pcVar4 = pcVar4 + 1;
          lVar5 = lVar5 + 1;
          __s2 = __s2 + 1;
        } while (lVar5 != 0);
      }
      goto LAB_00c93d84;
    }
    if ((__n == 0) || (iVar3 = memcmp(__s1,__s2,__n), iVar3 == 0)) goto LAB_00c93d84;
  }
  else {
LAB_00c93d54:
    if ((bVar2 & 1) == 0) {
      pvVar6 = (void *)(param_1 + 0xbb9);
    }
    else {
      pvVar6 = *(void **)(param_1 + 0xbc8);
    }
  }
  FUN_00f0e578(param_1 + 0x9c0,pvVar6);
LAB_00c93d84:
  if (*(int *)(param_1 + 0x8b8) == 0) {
    return;
  }
  FUN_00c92dec(param_1);
  return;
}




void FUN_00c93da8(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  FUN_00c91fbc(param_1,param_2 & 1);
  *param_1 = &PTR_FUN_028065e0;
  FUN_00f0d160(param_1 + 0x121);
  puVar1 = param_1 + 0x147;
  FUN_00f1306c(puVar1);
  FUN_00f0e4a8(param_1 + 0x172);
  FUN_00f133a4(puVar1,param_1 + 0x172,1);
  FUN_00f133a4(puVar1,param_1 + 0x121,1);
  param_1[0x102] = puVar1;
  FUN_00f023ec(param_1 + 0x103,puVar1,1);
  return;
}




void FUN_00c93e38(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_50;
  float local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  fVar3 = (float)FUN_00f0d548(param_3 + 0x908);
  fVar5 = *(float *)(param_3 + 0x8c4);
  lVar1 = param_3 + 0xb90;
  fVar6 = param_2 + *(float *)(param_3 + 0x8c8) + *(float *)(param_3 + 0x8c8);
  fVar4 = (float)FUN_00f0e700(lVar1);
  fVar4 = fVar3 + fVar5 + fVar5 + fVar4;
  local_50 = fVar4;
  FUN_00f0e700(lVar1);
  local_4c = param_2;
  if (param_2 <= fVar6) {
    local_4c = fVar6;
  }
  FUN_00f13f68(param_3,CONCAT44((int)local_4c,(int)fVar4));
  FUN_00f13f18(param_3,&local_50);
  FUN_00f07940(*(undefined4 *)(param_3 + 0x8c4),*(undefined4 *)(param_3 + 0x8c8),lVar1,7,
               param_3 + 0x630,7);
  FUN_00f07940(0x41200000,0,param_3 + 0x908,7,lVar1,5);
  FUN_00f13238(param_3 + 0xa38);
  FUN_00f07a18(0,0,param_3 + 0xa38,8);
  FUN_00c929dc(param_3);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c93f58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00f0e548(param_1 + 0xb90);
  FUN_00f0d378(param_1 + 0x908,param_4);
  FUN_00f0d75c(param_1 + 0x908,param_5);
  return;
}




void FUN_00c93fa4(undefined8 param_1,long param_2,uint param_3)

{
  FUN_00f0d9b0(param_2 + 0x908,param_3 & 1);
  if ((param_3 & 1) != 0) {
    FUN_00f0dad0(param_1,param_2 + 0x908,1);
    return;
  }
  return;
}




void FUN_00c93ffc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x121);
  FUN_00c925cc(param_1);
  return;
}

