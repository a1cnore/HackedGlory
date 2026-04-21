// functions/00b07 — 46 functions
#include "libGameKindred.h"




void FUN_00b075b8(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_5c = 0xffffffff;
  switch(param_2) {
  case 0:
    local_5c = 0xff5a3c10;
    break;
  case 2:
    local_5c = 0xffaaaaaa;
    break;
  case 3:
    local_5c = 0xffe19400;
    break;
  case 4:
    local_5c = 0xffe550b2;
    break;
  case 5:
    local_5c = 0xff005ae1;
    break;
  case 6:
  case 7:
    local_5c = 0xff2424b3;
  }
  local_64 = FUN_00b079b8(0x3f266666,&local_5c);
  local_60 = FUN_00b07914(0x3ecccccd,&local_64);
  local_68 = FUN_00b07a00(0x3dcccccd,&local_5c);
  local_64 = FUN_00b07914(0x3f400000,&local_68);
  local_6c = FUN_00b07a00(0x3f400000,&local_5c);
  local_68 = FUN_00b07914(0x3f59999a,&local_6c);
  lVar1 = param_1 + 0x2b0;
  *(uint *)(param_1 + 0x334) = *(uint *)(param_1 + 0x334) | 4;
  if (param_2 == 1) {
    *(uint *)(param_1 + 0x424) = *(uint *)(param_1 + 0x424) & 0xfffffffb;
    *(uint *)(param_1 + 0x9bc) = *(uint *)(param_1 + 0x9bc) | 4;
    if (*(long *)(param_1 + 0x380) != 0) {
      FUN_00f0e628(lVar1);
    }
    FUN_00f0e548(lVar1,PTR_s_build___MenuHomepagePartsCommon__02be35e8,"popup_bg");
    FUN_00f0e670(lVar1,&DAT_01bee7fa,2);
    if (*(long *)(param_1 + 0xa08) != 0) {
      FUN_00f0e628(param_1 + 0x938);
    }
    FUN_00f0e548(param_1 + 0x938,PTR_s_build___MenuHomepagePartsCommon__02be35e8,"popup_header_bg");
    local_68 = 0xffffffff;
    local_64 = 0xffffbe9f;
  }
  else {
    *(uint *)(param_1 + 0x424) = *(uint *)(param_1 + 0x424) | 4;
    *(uint *)(param_1 + 0x9bc) = *(uint *)(param_1 + 0x9bc) & 0xfffffffb;
    FUN_00f0e670(lVar1,&local_60,2);
    FUN_00f0e670(param_1 + 0x3a0,&local_60,2);
  }
  FUN_00f105ec(param_1 + 0x490,&local_68,2);
  FUN_00f105ec(param_1 + 0x730,&local_64,2);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b0780c(long param_1,undefined8 param_2)

{
  FUN_00f023ec(param_1 + 0x1c20,param_2,1);
  return;
}




void FUN_00b0781c(long param_1)

{
  FUN_00f13fd8(param_1 + 0x1c20);
  return;
}




void FUN_00b07828(long param_1,undefined8 param_2)

{
  FUN_00f133a4(param_1 + 0x1818,param_2,1);
  FUN_00f13238(param_1 + 0x1818);
  return;
}




void FUN_00b07858(long param_1,undefined8 param_2)

{
  FUN_00f133a4(param_1 + 0x1ac8,param_2,1);
  FUN_00f13238(param_1 + 0x1ac8);
  return;
}




void FUN_00b07888(long param_1,undefined8 param_2)

{
  FUN_00f133a4(param_1 + 0x1970,param_2,1);
  FUN_00f13238(param_1 + 0x1970);
  return;
}




void FUN_00b078b8(long param_1)

{
  FUN_00f0d75c(param_1 + 0xa28);
  FUN_00f07940(0x42580000,0,param_1 + 0xa28,7,param_1 + 0x880,7);
  return;
}




void FUN_00b078fc(long *param_1,byte param_2)

{
  *(byte *)((long)param_1 + 0x1ced) = param_2 & 1;
                    /* WARNING: Could not recover jumptable at 0x00b07910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x118))();
  return;
}




uint FUN_00b07914(float param_1,byte *param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = (float)NEON_ucvtf((uint)*param_2);
  fVar3 = (float)NEON_ucvtf((uint)param_2[1]);
  fVar4 = (float)NEON_ucvtf((uint)param_2[2]);
  fVar5 = 1.0 - param_1;
  param_1 = ((fVar2 / 255.0) * 0.3 + (fVar3 / 255.0) * 0.59 + (fVar4 / 255.0) * 0.11) * param_1;
  uVar1 = (uint)((fVar5 * (fVar2 / 255.0) + param_1) * 255.0);
  return uVar1 & 0xff000000 |
         uVar1 & 0xff | ((int)((fVar5 * (fVar3 / 255.0) + param_1) * 255.0) & 0xffU) << 8 |
         ((int)((fVar5 * (fVar4 / 255.0) + param_1) * 255.0) & 0xffU) << 0x10 | 0xff000000;
}




uint FUN_00b079b8(float param_1,byte *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  param_1 = 1.0 - param_1;
  fVar1 = (float)NEON_ucvtf((uint)*param_2);
  fVar2 = (float)NEON_ucvtf((uint)param_2[1]);
  fVar3 = (float)NEON_ucvtf((uint)param_2[2]);
  return (int)(param_1 * fVar1) & 0xff000000U |
         (int)(param_1 * fVar1) & 0xffU | ((int)(param_1 * fVar2) & 0xffU) << 8 |
         ((int)(param_1 * fVar3) & 0xffU) << 0x10 | 0xff000000;
}




uint FUN_00b07a00(float param_1,byte *param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (float)NEON_ucvtf((uint)*param_2);
  fVar3 = (float)NEON_ucvtf((uint)param_2[1]);
  fVar4 = (float)NEON_ucvtf((uint)param_2[2]);
  param_1 = 1.0 - param_1;
  uVar1 = (uint)(1.0 - param_1 * (1.0 - fVar2 / 255.0) * 255.0);
  return uVar1 & 0xff000000 |
         uVar1 & 0xff | ((int)(1.0 - param_1 * (1.0 - fVar3 / 255.0) * 255.0) & 0xffU) << 8 |
         ((int)(1.0 - param_1 * (1.0 - fVar4 / 255.0) * 255.0) & 0xffU) << 0x10 | 0xff000000;
}




void FUN_00b07a80(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x1ce0) = param_1;
  *(undefined4 *)(param_3 + 0x1ce4) = param_2;
  return;
}




void FUN_00b07a8c(undefined1 param_1 [16],undefined4 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  lVar1 = FUN_00f00438(param_4);
  uVar2 = (undefined4)DAT_03218f18;
  uVar3 = DAT_03218f18._4_4_;
  if (lVar1 != 0) {
    uVar2 = FUN_00f087b8();
    uVar3 = param_2;
  }
  *(undefined4 *)(param_3 + 0x1ce0) = uVar2;
  *(undefined4 *)(param_3 + 0x1ce4) = uVar3;
  return;
}




void FUN_00b07ad0(long *param_1,byte param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)((long)param_1 + 0x1cec);
  *(byte *)((long)param_1 + 0x1cec) = param_2 & 1;
  if ((param_2 & 1) == bVar1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b07af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_00b07af8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  (**(code **)(*param_1 + 0x110))();
  lVar1 = FUN_00ed373c(param_1);
  if (lVar1 != 0) {
    uVar2 = FUN_00ed373c(param_1);
    FUN_00ed2ed0(uVar2,param_1);
    return;
  }
  return;
}




float FUN_00b07b44(float param_1,long param_2)

{
  return param_1 + *(float *)(param_2 + 0x1cd8) + *(float *)(param_2 + 0x1cd8);
}




float FUN_00b07b80(float param_1,long param_2)

{
  return param_1 - (*(float *)(param_2 + 0x1cd8) + *(float *)(param_2 + 0x1cd8));
}




float FUN_00b07bbc(long param_1)

{
  float fVar1;
  float fVar2;
  
  FUN_00b07c88();
  fVar1 = (float)FUN_00f0d4e0(param_1 + 0xa28);
  fVar2 = (float)FUN_00f13e54(param_1 + 0xb58);
  fVar2 = fVar1 + 64.0 + fVar2;
  if (*(char *)(param_1 + 0x1cec) != '\0') {
    fVar1 = (float)FUN_00f13e54(param_1 + 0xb58);
    fVar2 = fVar2 + fVar1 + 64.0;
  }
  if ((*(byte *)(param_1 + 0x189c) >> 2 & 1) != 0) {
    fVar1 = (float)FUN_00f13e54(param_1 + 0x1818);
    fVar2 = fVar2 + fVar1 + 64.0;
  }
  if ((*(byte *)(param_1 + 0x1b4c) >> 2 & 1) != 0) {
    fVar1 = (float)FUN_00f13e54(param_1 + 0x1ac8);
    fVar2 = fVar2 + fVar1 + 64.0;
  }
  if ((*(byte *)(param_1 + 0x19f4) >> 2 & 1) != 0) {
    fVar1 = (float)FUN_00f13e54(param_1 + 0x1970);
    fVar2 = fVar2 + fVar1 + 64.0;
  }
  return fVar2;
}




void FUN_00b07c88(long param_1)

{
  long lVar1;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0x4316000043160000;
  FUN_00f13f18(param_1 + 0xb58,&local_30);
  local_38 = CONCAT44((float)((ulong)local_30 >> 0x20) * 1.2,(float)local_30 * 1.2);
  FUN_00c93b48(param_1 + 0xb58,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b07d08(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_70;
  float fStack_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar1 = param_3 + 0x168;
  fVar6 = (float)param_1;
  fVar5 = (float)param_2;
  uVar3 = param_2;
  local_70 = fVar6;
  fStack_6c = fVar5;
  fVar4 = (float)FUN_00f13e54(lVar1);
  if ((fVar6 != fVar4) || (fVar5 != (float)uVar3)) {
    fVar6 = fVar6 - (*(float *)(param_3 + 0x1cd8) + *(float *)(param_3 + 0x1cd8));
    fVar4 = 0.0;
    if (*(char *)(param_3 + 0x1ced) != '\0') {
      fVar4 = 150.0;
    }
    fVar4 = (fVar5 - (*(float *)(param_3 + 0x1cdc) + *(float *)(param_3 + 0x1cdc))) - fVar4;
    if ((param_4 & 1) == 0) {
      FUN_00f13f18(lVar1,&local_70);
      FUN_00f13f08(fVar6,fVar4,param_3 + 0x1c20);
    }
    else {
      uVar3 = FUN_00eff73c(param_1,param_2,0x3e800000,lVar1,FUN_0091aa80);
      FUN_00f022a0(lVar1,uVar3);
      uVar3 = FUN_00eff73c(fVar6,fVar4,0x3e800000,param_3 + 0x1c20,FUN_0091aa80);
      FUN_00f022a0(param_3 + 0x1c20,uVar3);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b07e54(long param_1)

{
  FUN_00f13e54(param_1 + 0x1c20);
  return;
}




void FUN_00b07e60(long param_1)

{
  FUN_00f08be8(param_1 + 0xaf8);
  return;
}




void thunk_FUN_00b07e7c(long param_1)

{
  long lVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  ushort uVar6;
  ushort *puVar7;
  
  lVar1 = param_1 + 0x90;
  FUN_00f01980(lVar1);
  uVar2 = *(uint *)(param_1 + 0x114);
  *(uint *)(param_1 + 0x114) = uVar2 | 4;
  if ((uVar2 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x114) = uVar2 & 0xffff807f | 4;
    FUN_0091ada4(lVar1);
  }
  uVar5 = FUN_00efee28(*(undefined4 *)(param_1 + 0x1ce8),0x3e99999a,FUN_0091aa80);
  FUN_00f022a0(lVar1,uVar5);
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
    FUN_00efcd98(puVar7);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  fVar4 = DAT_03218f18._4_4_;
  fVar3 = (float)DAT_03218f18;
  FUN_00f01980(param_1 + 0x168);
  *(uint *)(param_1 + 0x1ec) = *(uint *)(param_1 + 0x1ec) | 4;
  if ((*(float *)(param_1 + 0x1ce0) == fVar3) && (*(float *)(param_1 + 0x1ce4) == fVar4)) {
    FUN_00b087a4(param_1,puVar7);
  }
  else {
    FUN_00b0888c(param_1,puVar7);
  }
  FUN_00f022a0(param_1 + 0x168,puVar7);
  return;
}




void FUN_00b07e7c(long param_1)

{
  long lVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  ushort uVar6;
  ushort *puVar7;
  
  lVar1 = param_1 + 0x90;
  FUN_00f01980(lVar1);
  uVar2 = *(uint *)(param_1 + 0x114);
  *(uint *)(param_1 + 0x114) = uVar2 | 4;
  if ((uVar2 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x114) = uVar2 & 0xffff807f | 4;
    FUN_0091ada4(lVar1);
  }
  uVar5 = FUN_00efee28(*(undefined4 *)(param_1 + 0x1ce8),0x3e99999a,FUN_0091aa80);
  FUN_00f022a0(lVar1,uVar5);
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
    FUN_00efcd98(puVar7);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  fVar4 = DAT_03218f18._4_4_;
  fVar3 = (float)DAT_03218f18;
  FUN_00f01980(param_1 + 0x168);
  *(uint *)(param_1 + 0x1ec) = *(uint *)(param_1 + 0x1ec) | 4;
  if ((*(float *)(param_1 + 0x1ce0) == fVar3) && (*(float *)(param_1 + 0x1ce4) == fVar4)) {
    FUN_00b087a4(param_1,puVar7);
  }
  else {
    FUN_00b0888c(param_1,puVar7);
  }
  FUN_00f022a0(param_1 + 0x168,puVar7);
  return;
}




void thunk_FUN_00b07fec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  uVar2 = FUN_00efed6c(0x3e99999a);
  FUN_00f022a0(param_1,uVar2);
  FUN_00f01980(param_1 + 0x90);
  uVar2 = FUN_00efee28(0,0x3e99999a,FUN_009a71a4);
  lVar1 = DAT_03210d00;
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
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar5);
    *(undefined ***)puVar5 = &PTR_FUN_02825148;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00f02308(param_1 + 0x90,uVar2,puVar5,0);
  uVar2 = FUN_00f01980(param_1 + 0x168);
  lVar1 = DAT_03210d00;
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
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    uVar2 = FUN_00efcd98(puVar5);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  if ((*(float *)(param_1 + 0x1ce0) == (float)DAT_03218f18) &&
     (*(float *)(param_1 + 0x1ce4) == DAT_03218f18._4_4_)) {
    FUN_00b089dc(uVar2,puVar5);
  }
  else {
    FUN_00b08a54(param_1,puVar5);
  }
  lVar1 = DAT_03210d00;
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
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_02825148;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00f02308(param_1 + 0x168,puVar5,puVar4,0);
  return;
}




void FUN_00b07fec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  uVar2 = FUN_00efed6c(0x3e99999a);
  FUN_00f022a0(param_1,uVar2);
  FUN_00f01980(param_1 + 0x90);
  uVar2 = FUN_00efee28(0,0x3e99999a,FUN_009a71a4);
  lVar1 = DAT_03210d00;
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
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar5);
    *(undefined ***)puVar5 = &PTR_FUN_02825148;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00f02308(param_1 + 0x90,uVar2,puVar5,0);
  uVar2 = FUN_00f01980(param_1 + 0x168);
  lVar1 = DAT_03210d00;
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
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    uVar2 = FUN_00efcd98(puVar5);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  if ((*(float *)(param_1 + 0x1ce0) == (float)DAT_03218f18) &&
     (*(float *)(param_1 + 0x1ce4) == DAT_03218f18._4_4_)) {
    FUN_00b089dc(uVar2,puVar5);
  }
  else {
    FUN_00b08a54(param_1,puVar5);
  }
  lVar1 = DAT_03210d00;
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
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_02825148;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00f02308(param_1 + 0x168,puVar5,puVar4,0);
  return;
}




void thunk_FUN_00b07e7c(long param_1)

{
  long lVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  ushort uVar6;
  ushort *puVar7;
  
  lVar1 = param_1 + 0x90;
  FUN_00f01980(lVar1);
  uVar2 = *(uint *)(param_1 + 0x114);
  *(uint *)(param_1 + 0x114) = uVar2 | 4;
  if ((uVar2 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x114) = uVar2 & 0xffff807f | 4;
    FUN_0091ada4(lVar1);
  }
  uVar5 = FUN_00efee28(*(undefined4 *)(param_1 + 0x1ce8),0x3e99999a,FUN_0091aa80);
  FUN_00f022a0(lVar1,uVar5);
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
    FUN_00efcd98(puVar7);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  fVar4 = DAT_03218f18._4_4_;
  fVar3 = (float)DAT_03218f18;
  FUN_00f01980(param_1 + 0x168);
  *(uint *)(param_1 + 0x1ec) = *(uint *)(param_1 + 0x1ec) | 4;
  if ((*(float *)(param_1 + 0x1ce0) == fVar3) && (*(float *)(param_1 + 0x1ce4) == fVar4)) {
    FUN_00b087a4(param_1,puVar7);
  }
  else {
    FUN_00b0888c(param_1,puVar7);
  }
  FUN_00f022a0(param_1 + 0x168,puVar7);
  return;
}




void thunk_FUN_00b07fec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  uVar2 = FUN_00efed6c(0x3e99999a);
  FUN_00f022a0(param_1,uVar2);
  FUN_00f01980(param_1 + 0x90);
  uVar2 = FUN_00efee28(0,0x3e99999a,FUN_009a71a4);
  lVar1 = DAT_03210d00;
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
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar5);
    *(undefined ***)puVar5 = &PTR_FUN_02825148;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00f02308(param_1 + 0x90,uVar2,puVar5,0);
  uVar2 = FUN_00f01980(param_1 + 0x168);
  lVar1 = DAT_03210d00;
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
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    uVar2 = FUN_00efcd98(puVar5);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  if ((*(float *)(param_1 + 0x1ce0) == (float)DAT_03218f18) &&
     (*(float *)(param_1 + 0x1ce4) == DAT_03218f18._4_4_)) {
    FUN_00b089dc(uVar2,puVar5);
  }
  else {
    FUN_00b08a54(param_1,puVar5);
  }
  lVar1 = DAT_03210d00;
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
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_02825148;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00f02308(param_1 + 0x168,puVar5,puVar4,0);
  return;
}




void thunk_FUN_00b07af8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  (**(code **)(*param_1 + 0x110))();
  lVar1 = FUN_00ed373c(param_1);
  if (lVar1 != 0) {
    uVar2 = FUN_00ed373c(param_1);
    FUN_00ed2ed0(uVar2,param_1);
    return;
  }
  return;
}




void thunk_FUN_00b07af8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  (**(code **)(*param_1 + 0x110))();
  lVar1 = FUN_00ed373c(param_1);
  if (lVar1 != 0) {
    uVar2 = FUN_00ed373c(param_1);
    FUN_00ed2ed0(uVar2,param_1);
    return;
  }
  return;
}




void thunk_FUN_00b07af8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  (**(code **)(*param_1 + 0x110))();
  lVar1 = FUN_00ed373c(param_1);
  if (lVar1 != 0) {
    uVar2 = FUN_00ed373c(param_1);
    FUN_00ed2ed0(uVar2,param_1);
    return;
  }
  return;
}




void thunk_FUN_00b07af8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  (**(code **)(*param_1 + 0x110))();
  lVar1 = FUN_00ed373c(param_1);
  if (lVar1 != 0) {
    uVar2 = FUN_00ed373c(param_1);
    FUN_00ed2ed0(uVar2,param_1);
    return;
  }
  return;
}




void thunk_FUN_00b07af8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  (**(code **)(*param_1 + 0x110))();
  lVar1 = FUN_00ed373c(param_1);
  if (lVar1 != 0) {
    uVar2 = FUN_00ed373c(param_1);
    FUN_00ed2ed0(uVar2,param_1);
    return;
  }
  return;
}




void thunk_FUN_00b07af8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  (**(code **)(*param_1 + 0x110))();
  lVar1 = FUN_00ed373c(param_1);
  if (lVar1 != 0) {
    uVar2 = FUN_00ed373c(param_1);
    FUN_00ed2ed0(uVar2,param_1);
    return;
  }
  return;
}




void thunk_FUN_00b07af8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  (**(code **)(*param_1 + 0x110))();
  lVar1 = FUN_00ed373c(param_1);
  if (lVar1 != 0) {
    uVar2 = FUN_00ed373c(param_1);
    FUN_00ed2ed0(uVar2,param_1);
    return;
  }
  return;
}




void thunk_FUN_00b07af8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  (**(code **)(*param_1 + 0x110))();
  lVar1 = FUN_00ed373c(param_1);
  if (lVar1 != 0) {
    uVar2 = FUN_00ed373c(param_1);
    FUN_00ed2ed0(uVar2,param_1);
    return;
  }
  return;
}




void thunk_FUN_00b07af8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  (**(code **)(*param_1 + 0x110))();
  lVar1 = FUN_00ed373c(param_1);
  if (lVar1 != 0) {
    uVar2 = FUN_00ed373c(param_1);
    FUN_00ed2ed0(uVar2,param_1);
    return;
  }
  return;
}




void thunk_FUN_00b07af8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  (**(code **)(*param_1 + 0x110))();
  lVar1 = FUN_00ed373c(param_1);
  if (lVar1 != 0) {
    uVar2 = FUN_00ed373c(param_1);
    FUN_00ed2ed0(uVar2,param_1);
    return;
  }
  return;
}




void thunk_FUN_00b07af8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  (**(code **)(*param_1 + 0x110))();
  lVar1 = FUN_00ed373c(param_1);
  if (lVar1 != 0) {
    uVar2 = FUN_00ed373c(param_1);
    FUN_00ed2ed0(uVar2,param_1);
    return;
  }
  return;
}




void thunk_FUN_00b07af8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  (**(code **)(*param_1 + 0x110))();
  lVar1 = FUN_00ed373c(param_1);
  if (lVar1 != 0) {
    uVar2 = FUN_00ed373c(param_1);
    FUN_00ed2ed0(uVar2,param_1);
    return;
  }
  return;
}




void thunk_FUN_00b07af8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  (**(code **)(*param_1 + 0x110))();
  lVar1 = FUN_00ed373c(param_1);
  if (lVar1 != 0) {
    uVar2 = FUN_00ed373c(param_1);
    FUN_00ed2ed0(uVar2,param_1);
    return;
  }
  return;
}




void thunk_FUN_00b07af8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  (**(code **)(*param_1 + 0x110))();
  lVar1 = FUN_00ed373c(param_1);
  if (lVar1 != 0) {
    uVar2 = FUN_00ed373c(param_1);
    FUN_00ed2ed0(uVar2,param_1);
    return;
  }
  return;
}




void thunk_FUN_00b07af8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  (**(code **)(*param_1 + 0x110))();
  lVar1 = FUN_00ed373c(param_1);
  if (lVar1 != 0) {
    uVar2 = FUN_00ed373c(param_1);
    FUN_00ed2ed0(uVar2,param_1);
    return;
  }
  return;
}




void thunk_FUN_00b07af8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  (**(code **)(*param_1 + 0x110))();
  lVar1 = FUN_00ed373c(param_1);
  if (lVar1 != 0) {
    uVar2 = FUN_00ed373c(param_1);
    FUN_00ed2ed0(uVar2,param_1);
    return;
  }
  return;
}




void thunk_FUN_00b07af8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  (**(code **)(*param_1 + 0x110))();
  lVar1 = FUN_00ed373c(param_1);
  if (lVar1 != 0) {
    uVar2 = FUN_00ed373c(param_1);
    FUN_00ed2ed0(uVar2,param_1);
    return;
  }
  return;
}




void thunk_FUN_00b07af8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  (**(code **)(*param_1 + 0x110))();
  lVar1 = FUN_00ed373c(param_1);
  if (lVar1 != 0) {
    uVar2 = FUN_00ed373c(param_1);
    FUN_00ed2ed0(uVar2,param_1);
    return;
  }
  return;
}

