// functions/00bb1 — 5 functions
#include "libGameKindred.h"




void FUN_00bb1a58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00bb6400(param_1,param_2,param_5);
  return;
}




void FUN_00bb1a68(long *param_1)

{
  long lVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float local_44;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_0092e8e0();
  FUN_00a9bd24(param_1,uVar2 & 1,&fStack_3c,&local_40,&local_44);
  fVar4 = (fStack_3c - local_44) * 0.5;
  fVar3 = local_40 * 0.5;
  if ((*(float *)(param_1 + 0x3378) != fVar4) || (*(float *)((long)param_1 + 0x19bc4) != fVar3)) {
    *(float *)(param_1 + 0x3378) = fVar4;
    *(float *)((long)param_1 + 0x19bc4) = fVar3;
    FUN_0091ada4(param_1 + 0x3370);
    fVar3 = local_40 * 0.5;
  }
  if ((*(float *)(param_1 + 0x3805) != fVar4) || (*(float *)((long)param_1 + 0x1c02c) != fVar3)) {
    *(float *)(param_1 + 0x3805) = fVar4;
    *(float *)((long)param_1 + 0x1c02c) = fVar3;
    FUN_0091ada4(param_1 + 0x37fd);
  }
  if (*(float *)((long)param_1 + 0x19c4c) != 0.0) {
    *(float *)((long)param_1 + 0x19c4c) = 0.0;
    FUN_0091ada4(param_1 + 0x3381);
  }
  if (*(float *)((long)param_1 + 0x1c0b4) != 100.0) {
    *(float *)((long)param_1 + 0x1c0b4) = 100.0;
    FUN_0091ada4(param_1 + 0x380e);
  }
  (**(code **)(*param_1 + 0x150))(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bb1bf4(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ushort uVar11;
  ushort *puVar12;
  undefined4 uVar13;
  
  if (((param_3 & 1) != 0) && ((param_4 & 1) != 0)) {
    FUN_009580b8();
    FUN_0096358c();
  }
  uVar7 = FUN_00efed6c(param_1);
  bVar6 = (param_3 & 1) == 0;
  uVar2 = 0x3eb33333;
  if (bVar6) {
    uVar2 = 0x3e19999a;
  }
  uVar13 = 0x3f800000;
  if (bVar6) {
    uVar13 = 0;
  }
  uVar3 = 0x3f800000;
  if (bVar6) {
    uVar3 = 0x3f666666;
  }
  uVar4 = 0;
  if (bVar6) {
    uVar4 = 0xc2c80000;
  }
  uVar8 = FUN_00efee28(uVar13,uVar2,FUN_0091aa80);
  uVar9 = FUN_00eff63c(uVar3,uVar3,uVar2,FUN_0091aa80);
  uVar10 = FUN_00efef08(0,uVar4,uVar2,FUN_0091aa80);
  lVar1 = DAT_03210d00;
  uVar11 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar11 == 0xffff) {
    puVar12 = (ushort *)0x0;
  }
  else {
    puVar12 = (ushort *)(DAT_03210d00 + (ulong)uVar11 * 0x40 + 0x10);
    if (uVar11 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar11 = 0xffff;
    }
    else {
      uVar11 = *puVar12;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar11;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcd98(puVar12);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar12,uVar8,uVar10,uVar9,0);
  lVar1 = param_2 + 0x19c08;
  FUN_00f01980(lVar1);
  FUN_00f02308(lVar1,uVar7,puVar12,0);
  lVar5 = DAT_03210d00;
  if ((param_3 & 1) != 0) {
    *(uint *)(param_2 + 0x19c8c) = *(uint *)(param_2 + 0x19c8c) | 4;
    *(uint *)(param_2 + 0x404) = *(uint *)(param_2 + 0x404) & 0xfffffffb;
    return;
  }
  uVar11 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar11 == 0xffff) {
    puVar12 = (ushort *)0x0;
  }
  else {
    puVar12 = (ushort *)(DAT_03210d00 + (ulong)uVar11 * 0x40 + 0x10);
    if (uVar11 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar11 = 0xffff;
    }
    else {
      uVar11 = *puVar12;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar11;
    *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
    FUN_00efc8e8(puVar12);
    *(undefined ***)puVar12 = &PTR_FUN_02825148;
    *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
  }
  FUN_00f022a0(lVar1,puVar12);
  return;
}




void FUN_00bb1e98(void)

{
  FUN_00bb2b38();
  return;
}




void FUN_00bb1ec4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ea330;
  param_1[0x6d] = &PTR_FUN_027ea4f8;
  FUN_00e6ec00(&DAT_02c7eef8,param_1,0x9d2c9b16);
  FUN_00bb2978(param_1);
  FUN_00bb2a0c(param_1);
  if ((*(byte *)(param_1 + 0x5719) & 1) != 0) {
    operator_delete((void *)param_1[0x571b]);
  }
  if ((*(byte *)(param_1 + 0x5716) & 1) != 0) {
    operator_delete((void *)param_1[0x5718]);
  }
  if ((void *)param_1[0x5715] != (void *)0x0) {
    operator_delete__((void *)param_1[0x5715]);
    param_1[0x5715] = 0;
    param_1[0x5714] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x56ee);
  param_1[0x56d0] = &PTR_FUN_028266f0;
  param_1[0x56e7] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x56ea);
  FUN_00f13d08(param_1 + 0x56d0);
  param_1[0x56b2] = &PTR_FUN_028266f0;
  param_1[0x56c9] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x56cc);
  FUN_00f13d08(param_1 + 0x56b2);
  FUN_00f01868(param_1 + 0x56a1);
  param_1[0x5521] = &PTR_FUN_027d8d40;
  param_1[0x5681] = &PTR_FUN_028266f0;
  param_1[0x5698] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x569b);
  FUN_00f13d08(param_1 + 0x5681);
  param_1[0x5663] = &PTR_FUN_028266f0;
  param_1[0x567a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x567d);
  FUN_00f13d08(param_1 + 0x5663);
  FUN_00ac6220(param_1 + 0x55f8);
  FUN_00ac6220(param_1 + 0x558d);
  FUN_00f0d3a4(param_1 + 0x5567);
  param_1[0x5549] = &PTR_FUN_028266f0;
  param_1[0x5560] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x5563);
  FUN_00f13d08(param_1 + 0x5549);
  FUN_00f01868(param_1 + 0x5538);
  FUN_00f13d08(param_1 + 0x5521);
  FUN_00f0d3a4(param_1 + 0x54fb);
  FUN_00f01868(param_1 + 0x54ea);
  FUN_00b27cec(param_1 + 0x54cd);
  param_1[0x5441] = &PTR_FUN_027dd960;
  param_1[0x54a0] = &PTR_FUN_027d3cc8;
  param_1[0x54b7] = &PTR_FUN_027d3e40;
  if ((void *)param_1[0x54c9] != (void *)0x0) {
    operator_delete__((void *)param_1[0x54c9]);
    param_1[0x54c9] = 0;
    param_1[0x54c8] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x54a0);
  FUN_00f0d3a4(param_1 + 0x547a);
  FUN_00f01868(param_1 + 0x5469);
  FUN_00f13d08(param_1 + 0x5452);
  FUN_00f01868(param_1 + 0x5441);
  param_1[0x5423] = &PTR_FUN_028266f0;
  param_1[0x543a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x543d);
  FUN_00f13d08(param_1 + 0x5423);
  FUN_00f0d3a4(param_1 + 0x53fd);
  FUN_00f13d08(param_1 + 0x53e6);
  FUN_009c7fa8(param_1 + 0x512e);
  param_1[0x5110] = &PTR_FUN_028266f0;
  param_1[0x5127] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x512a);
  FUN_00f13d08(param_1 + 0x5110);
  FUN_00f0d3a4(param_1 + 0x50ea);
  FUN_00f13d08(param_1 + 0x50d3);
  FUN_009c7fa8(param_1 + 0x4e1b);
  FUN_009c7fa8(param_1 + 0x4b63);
  FUN_009c7fa8(param_1 + 0x48ab);
  FUN_00f01868(param_1 + 0x489a);
  param_1[0x44fb] = &PTR_FUN_027d5508;
  if ((void *)param_1[0x4894] != (void *)0x0) {
    operator_delete__((void *)param_1[0x4894]);
    param_1[0x4894] = 0;
    param_1[0x4893] = 0;
  }
  if ((void *)param_1[0x4892] != (void *)0x0) {
    operator_delete__((void *)param_1[0x4892]);
    param_1[0x4892] = 0;
    param_1[0x4891] = 0;
  }
  if ((void *)param_1[0x4890] != (void *)0x0) {
    operator_delete__((void *)param_1[0x4890]);
    param_1[0x4890] = 0;
    param_1[0x488f] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x4869);
  FUN_00f13d08(param_1 + 0x484e);
  FUN_00f13d08(param_1 + 0x4833);
  FUN_009c7fa8(param_1 + 0x457b);
  FUN_00abd150(param_1 + 0x44fb);
  param_1[0x415c] = &PTR_FUN_027d5508;
  if ((void *)param_1[0x44f5] != (void *)0x0) {
    operator_delete__((void *)param_1[0x44f5]);
    param_1[0x44f5] = 0;
    param_1[0x44f4] = 0;
  }
  if ((void *)param_1[0x44f3] != (void *)0x0) {
    operator_delete__((void *)param_1[0x44f3]);
    param_1[0x44f3] = 0;
    param_1[0x44f2] = 0;
  }
  if ((void *)param_1[0x44f1] != (void *)0x0) {
    operator_delete__((void *)param_1[0x44f1]);
    param_1[0x44f1] = 0;
    param_1[0x44f0] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x44ca);
  FUN_00f13d08(param_1 + 0x44af);
  FUN_00f13d08(param_1 + 0x4494);
  FUN_009c7fa8(param_1 + 0x41dc);
  FUN_00abd150(param_1 + 0x415c);
  FUN_00f0d3a4(param_1 + 0x4136);
  FUN_00f0d3a4(param_1 + 0x4110);
  param_1[0x3d71] = &PTR_FUN_027d5508;
  if ((void *)param_1[0x410a] != (void *)0x0) {
    operator_delete__((void *)param_1[0x410a]);
    param_1[0x410a] = 0;
    param_1[0x4109] = 0;
  }
  if ((void *)param_1[0x4108] != (void *)0x0) {
    operator_delete__((void *)param_1[0x4108]);
    param_1[0x4108] = 0;
    param_1[0x4107] = 0;
  }
  if ((void *)param_1[0x4106] != (void *)0x0) {
    operator_delete__((void *)param_1[0x4106]);
    param_1[0x4106] = 0;
    param_1[0x4105] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x40df);
  FUN_00f13d08(param_1 + 0x40c4);
  FUN_00f13d08(param_1 + 0x40a9);
  FUN_009c7fa8(param_1 + 0x3df1);
  FUN_00abd150(param_1 + 0x3d71);
  param_1[0x39d2] = &PTR_FUN_027d5508;
  if ((void *)param_1[0x3d6b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3d6b]);
    param_1[0x3d6b] = 0;
    param_1[0x3d6a] = 0;
  }
  if ((void *)param_1[0x3d69] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3d69]);
    param_1[0x3d69] = 0;
    param_1[0x3d68] = 0;
  }
  if ((void *)param_1[0x3d67] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3d67]);
    param_1[0x3d67] = 0;
    param_1[0x3d66] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x3d40);
  FUN_00f13d08(param_1 + 0x3d25);
  FUN_00f13d08(param_1 + 0x3d0a);
  FUN_009c7fa8(param_1 + 0x3a52);
  FUN_00abd150(param_1 + 0x39d2);
  FUN_00f0d3a4(param_1 + 0x39ac);
  FUN_00f0d3a4(param_1 + 0x3986);
  FUN_00f01868(param_1 + 0x3975);
  param_1[0x3957] = &PTR_FUN_028266f0;
  param_1[0x396e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3971);
  FUN_00f13d08(param_1 + 0x3957);
  param_1[0x3939] = &PTR_FUN_028266f0;
  param_1[0x3950] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3953);
  FUN_00f13d08(param_1 + 0x3939);
  FUN_00f0d3a4(param_1 + 0x3913);
  param_1[0x38f5] = &PTR_FUN_028266f0;
  param_1[0x390c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x390f);
  FUN_00f13d08(param_1 + 0x38f5);
  param_1[0x38d7] = &PTR_FUN_028266f0;
  param_1[0x38ee] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x38f1);
  FUN_00f13d08(param_1 + 0x38d7);
  FUN_00ed00e0(param_1 + 0x3830);
  FUN_00f01868(param_1 + 0x381f);
  FUN_00f01868(param_1 + 0x380e);
  FUN_00f01868(param_1 + 0x37fd);
  FUN_00f13d08(param_1 + 0x37e6);
  param_1[0x37c8] = &PTR_FUN_028266f0;
  param_1[0x37df] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x37e2);
  FUN_00f13d08(param_1 + 0x37c8);
  if ((void *)param_1[0x37c7] != (void *)0x0) {
    operator_delete__((void *)param_1[0x37c7]);
    param_1[0x37c7] = 0;
    param_1[0x37c6] = 0;
  }
  param_1[0x37a8] = &PTR_FUN_028266f0;
  param_1[0x37bf] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x37c2);
  FUN_00f13d08(param_1 + 0x37a8);
  param_1[0x378a] = &PTR_FUN_028266f0;
  param_1[0x37a1] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x37a4);
  FUN_00f13d08(param_1 + 0x378a);
  FUN_00f0d3a4(param_1 + 0x3764);
  param_1[0x3746] = &PTR_FUN_028266f0;
  param_1[0x375d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3760);
  FUN_00f13d08(param_1 + 0x3746);
  param_1[0x3728] = &PTR_FUN_028266f0;
  param_1[0x373f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3742);
  FUN_00f13d08(param_1 + 0x3728);
  FUN_009c7fa8(param_1 + 0x3470);
  FUN_00f0d3a4(param_1 + 0x344a);
  FUN_00ed00e0(param_1 + 0x33a3);
  FUN_00f01868(param_1 + 0x3392);
  FUN_00f01868(param_1 + 0x3381);
  FUN_00f01868(param_1 + 0x3370);
  FUN_00f13d08(param_1 + 0x3359);
  FUN_00b77e80(param_1 + 0x70);
  FUN_00948d58(param_1 + 0x6d);
  FUN_00b8e790(param_1);
  return;
}

