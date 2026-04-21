// functions/00c80 — 13 functions
#include "libGameKindred.h"




void thunk_FUN_00c80e0c(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_00907be8(1);
  uVar1 = FUN_009f1f64();
  FUN_009f2198(uVar1,2,1);
  FUN_00c8062c(param_1);
  return;
}




void thunk_FUN_00c80e44(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_00907be8(0);
  uVar1 = FUN_009f1f64();
  FUN_009f2198(uVar1,2,0);
  FUN_00c8062c(param_1);
  return;
}




void FUN_00c80118(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02803840;
  param_1[0x48] = &PTR_FUN_028266f0;
  param_1[0x5f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x62);
  FUN_00f13d08(param_1 + 0x48);
  FUN_00ecf74c(param_1);
  return;
}




void FUN_00c80174(void *param_1)

{
  FUN_00c7ffc8();
  operator_delete(param_1);
  return;
}




void FUN_00c80198(long *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  ushort *puVar8;
  long lVar9;
  undefined4 local_80;
  undefined4 uStack_7c;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  FUN_00f0025c(&uStack_7c,&local_80);
  FUN_00f13f08(uStack_7c,local_80,param_1);
  uVar4 = FUN_00f00438("root-layer");
  FUN_00f07940(0,0,param_1,0,uVar4,0);
  uVar2 = *(uint *)((long)param_1 + 0x84);
  *(uint *)((long)param_1 + 0x84) = uVar2 | 4;
  if ((uVar2 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x84) = uVar2 & 0xffff807f | 4;
    FUN_0091ada4(param_1);
  }
  if ((*(float *)(param_1 + 9) != 1.0) || (*(float *)((long)param_1 + 0x4c) != 1.0)) {
    lVar9 = NEON_fmov(0x3f800000,4);
    param_1[9] = lVar9;
    FUN_0091ada4(param_1);
  }
  uVar4 = FUN_00efee28(0x3f800000,0x3f000000,FUN_0091aa80);
  FUN_00f022a0(param_1,uVar4);
  (**(code **)(*param_1 + 0x90))(param_1);
  plVar1 = param_1 + 400;
  if ((*(uint *)((long)param_1 + 0xd04) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0xd04) = *(uint *)((long)param_1 + 0xd04) & 0xffff807f;
    FUN_0091ada4(plVar1);
  }
  if ((*(float *)(param_1 + 0x199) != 0.6) || (*(float *)((long)param_1 + 0xccc) != 0.6)) {
    param_1[0x199] = 0x3f19999a3f19999a;
    FUN_0091ada4(plVar1);
  }
  uVar4 = FUN_00efed6c(0x3f400000);
  lVar9 = DAT_03210d00;
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
    *(int *)(lVar9 + 0x20014) = *(int *)(lVar9 + 0x20014) + 1;
    FUN_00efcd98(puVar8);
    *(int *)(lVar9 + 0x20020) = *(int *)(lVar9 + 0x20020) + 1;
  }
  uVar5 = FUN_00efee28(0x3f800000,0x3f333333,FUN_0091aa80);
  uVar6 = FUN_00eff63c(0x3f800000,0x3f800000,0x3f333333,FUN_0091aa80);
  FUN_00efcea4(puVar8,uVar5,uVar6,0);
  FUN_00f01980(plVar1);
  FUN_00f02308(plVar1,uVar4,puVar8,0);
  plVar1 = param_1 + 499;
  if ((*(uint *)((long)param_1 + 0x101c) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x101c) = *(uint *)((long)param_1 + 0x101c) & 0xffff807f;
    FUN_0091ada4(plVar1);
  }
  if ((*(float *)(param_1 + 0x1fc) != 0.6) || (*(float *)((long)param_1 + 0xfe4) != 0.6)) {
    param_1[0x1fc] = 0x3f19999a3f19999a;
    FUN_0091ada4(plVar1);
  }
  uVar4 = FUN_00efed6c(0x3fe00000);
  lVar9 = DAT_03210d00;
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
    *(int *)(lVar9 + 0x20014) = *(int *)(lVar9 + 0x20014) + 1;
    FUN_00efcd98(puVar8);
    *(int *)(lVar9 + 0x20020) = *(int *)(lVar9 + 0x20020) + 1;
  }
  uVar5 = FUN_00efee28(0x3f800000,0x3f333333,FUN_0091aa80);
  uVar6 = FUN_00eff63c(0x3f800000,0x3f800000,0x3f333333,FUN_0091aa80);
  FUN_00efcea4(puVar8,uVar5,uVar6,0);
  FUN_00f01980(plVar1);
  FUN_00f02308(plVar1,uVar4,puVar8,0);
  uVar4 = FUN_00efed6c(0x40233333);
  lVar9 = DAT_03210d00;
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
    *(int *)(lVar9 + 0x20014) = *(int *)(lVar9 + 0x20014) + 1;
    FUN_00efc8e8(puVar8);
    *(undefined ***)puVar8 = &PTR_FUN_02825148;
    *(int *)(lVar9 + 0x20020) = *(int *)(lVar9 + 0x20020) + 1;
  }
  FUN_00f01980(param_1 + 0x256);
  FUN_00f02308(param_1 + 0x256,uVar4,puVar8,0);
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c8062c(undefined1 param_1 [16],float param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  ushort uVar7;
  long *plVar8;
  long *plVar9;
  ushort *puVar10;
  ushort *puVar11;
  ulong uVar12;
  undefined4 uVar13;
  float fVar14;
  float local_70;
  float fStack_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar13 = FUN_009c7fa0(param_3[0x17]);
  _local_70 = CONCAT44(param_2,uVar13);
  local_70 = (float)FUN_00f08664(&local_70,param_3[4]);
  fStack_6c = param_2;
  fVar14 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  local_70 = local_70 + fVar14 * 0.05 * ((float)param_3[10] - (float)DAT_03218f08);
  fStack_6c = fStack_6c +
              param_2 * 0.05 *
              ((float)((ulong)param_3[10] >> 0x20) - (float)((ulong)DAT_03218f08 >> 0x20));
  uVar2 = FUN_00efee28(0,0x3ee66666,FUN_009a816c);
  uVar3 = FUN_00efef08(local_70,fStack_6c,0x3ee66666,FUN_0091aa80);
  uVar4 = FUN_00eff63c(0x3d4ccccd,0x3d4ccccd,0x3ee66666,FUN_0091aa80);
  lVar5 = DAT_03210d00;
  uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar10 = (ushort *)0x0;
  }
  else {
    puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar10;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
    *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
    FUN_00efcd98(puVar10);
    *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar10,uVar2,uVar4,uVar3,0);
  lVar5 = DAT_03210d00;
  uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar11 = (ushort *)0x0;
  }
  else {
    puVar11 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar11;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
    *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
    FUN_00efc8e8(puVar11);
    *(undefined ***)puVar11 = &PTR_FUN_02825148;
    *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
  }
  FUN_00f02308(param_3,puVar10,puVar11,0);
  lVar5 = FUN_00a1ffc0();
  plVar6 = (long *)(lVar5 + 0x10);
  plVar8 = (long *)*plVar6;
  plVar9 = plVar6;
  if (plVar8 != (long *)0x0) {
    do {
      if (*(uint *)(plVar8 + 4) >= 0xf6119432) {
        plVar9 = plVar8;
      }
      plVar8 = (long *)plVar8[*(uint *)(plVar8 + 4) < 0xf6119432];
    } while (plVar8 != (long *)0x0);
    if (((plVar9 != plVar6) && (*(uint *)(plVar9 + 4) < 0xf6119433)) && ((int)plVar9[5] != 0)) {
      lVar5 = 0;
      uVar12 = 0;
      do {
        (*(code *)((undefined8 *)(plVar9[6] + lVar5))[1])(*(undefined8 *)(plVar9[6] + lVar5));
        uVar12 = uVar12 + 1;
        lVar5 = lVar5 + 0x10;
      } while (uVar12 < *(uint *)(plVar9 + 5));
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00c80910(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  long local_a8;
  
  lVar6 = tpidr_el0;
  local_a8 = *(long *)(lVar6 + 0x28);
  plVar1 = param_3 + 400;
  fVar12 = *(float *)(param_3 + 0x199);
  fVar13 = *(float *)((long)param_3 + 0xccc);
  fVar11 = *(float *)(param_3 + 0x1fc);
  fVar7 = *(float *)((long)param_3 + 0xfe4);
  plVar2 = param_3 + 499;
  if ((fVar12 != 1.0) || (fVar8 = fVar11, fVar13 != 1.0)) {
    lVar9 = NEON_fmov(0x3f800000,4);
    param_3[0x199] = lVar9;
    FUN_0091ada4(plVar1);
    fVar8 = *(float *)(param_3 + 0x1fc);
  }
  if ((fVar8 != 1.0) || (*(float *)((long)param_3 + 0xfe4) != 1.0)) {
    lVar9 = NEON_fmov(0x3f800000,4);
    param_3[0x1fc] = lVar9;
    FUN_0091ada4(plVar2);
  }
  local_b0 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fStack_ac = param_2;
  FUN_00f13f18(param_3 + 0x18,&local_b0);
  FUN_00f07940(0,0,param_3 + 0x18,0,param_3,0);
  FUN_00f13f18(param_3 + 0x256,&local_b0);
  plVar3 = param_3 + 0x102;
  FUN_00f13f08(local_b0,0x43a50000,plVar3);
  FUN_00f07b18(0x41200000,param_3 + 0x16a,0,param_3 + 0x144,2);
  FUN_00f07b18(0,param_3 + 0x16a,4,param_3 + 0x144,4);
  FUN_00f13238(param_3 + 0x119);
  FUN_00f07940(0,0x42700000,param_3 + 0x119,4,plVar3,4);
  if ((*(float *)(param_3 + 0x19a) != (float)DAT_03218f08) ||
     (*(float *)((long)param_3 + 0xcd4) != DAT_03218f08._4_4_)) {
    param_3[0x19a] = CONCAT44(DAT_03218f08._4_4_,(float)DAT_03218f08);
    FUN_0091ada4(plVar1);
  }
  fVar10 = fStack_ac + -330.0;
  FUN_00f13f08(local_b0 * 0.5,plVar1);
  FUN_00f07b18(0,plVar1,0,plVar3,2);
  FUN_00f07b18(0,plVar1,3,plVar3,3);
  plVar4 = param_3 + 0x1a7;
  FUN_00f07b18(0,plVar4,0,plVar1,0);
  plVar5 = param_3 + 0x36;
  FUN_00f0826c(0x44bf4000,param_3 + 0x7e);
  local_b8 = FUN_00f0e700(param_3 + 0x7e);
  fStack_b4 = fVar10;
  FUN_00f13f18(plVar5,&local_b8);
  FUN_00f07b18(0xc1200000,plVar5,0,plVar4,2);
  FUN_00f07b18(0x42200000,plVar5,1,plVar1,1);
  FUN_00f07b18(0,plVar4,4,plVar5,4);
  plVar4 = param_3 + 0x1cd;
  fVar8 = (float)FUN_00f13e54(plVar1);
  FUN_00f0dad0(fVar8 + -460.0,plVar4,1);
  FUN_00f13e54(plVar5);
  FUN_00f07b18(fVar10 * -0.22,plVar4,0,plVar5,2);
  FUN_00f07b18(0,plVar4,4,plVar5,4);
  if ((*(float *)(param_3 + 0x1fd) != (float)DAT_03218f08) ||
     (*(float *)((long)param_3 + 0xfec) != DAT_03218f08._4_4_)) {
    param_3[0x1fd] = CONCAT44(DAT_03218f08._4_4_,(float)DAT_03218f08);
    FUN_0091ada4(plVar2);
  }
  fVar10 = fStack_ac + -330.0;
  FUN_00f13f08(local_b0 * 0.5,plVar2);
  FUN_00f07b18(0,plVar2,0,plVar3,2);
  FUN_00f07b18(0,plVar2,1,plVar3,1);
  plVar4 = param_3 + 0x20a;
  FUN_00f07b18(0,plVar4,0,plVar2,0);
  plVar3 = param_3 + 0x9c;
  FUN_00f0826c(0x44bf4000,param_3 + 0xe4);
  local_b8 = FUN_00f0e700(param_3 + 0xe4);
  fStack_b4 = fVar10;
  FUN_00f13f18(plVar3,&local_b8);
  FUN_00f07b18(0xc1200000,plVar3,0,plVar4,2);
  FUN_00f07b18(0xc2200000,plVar3,3,plVar2,3);
  FUN_00f07b18(0,plVar4,4,plVar3,4);
  plVar4 = param_3 + 0x230;
  fVar8 = (float)FUN_00f13e54(plVar2);
  FUN_00f0dad0(fVar8 + -460.0,plVar4,1);
  FUN_00f13e54(plVar3);
  FUN_00f07b18(fVar10 * -0.22,plVar4,0,plVar3,2);
  FUN_00f07b18(0,plVar4,4,plVar3,4);
  if ((*(float *)(param_3 + 0x199) != fVar12) || (*(float *)((long)param_3 + 0xccc) != fVar13)) {
    *(float *)(param_3 + 0x199) = fVar12;
    *(float *)((long)param_3 + 0xccc) = fVar13;
    FUN_0091ada4(plVar1);
  }
  if ((*(float *)(param_3 + 0x1fc) != fVar11) || (*(float *)((long)param_3 + 0xfe4) != fVar7)) {
    *(float *)(param_3 + 0x1fc) = fVar11;
    *(float *)((long)param_3 + 0xfe4) = fVar7;
    FUN_0091ada4(plVar2);
  }
  if (*(long *)(lVar6 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c80e0c(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_00907be8(1);
  uVar1 = FUN_009f1f64();
  FUN_009f2198(uVar1,2,1);
  FUN_00c8062c(param_1);
  return;
}




void FUN_00c80e44(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_00907be8(0);
  uVar1 = FUN_009f1f64();
  FUN_009f2198(uVar1,2,0);
  FUN_00c8062c(param_1);
  return;
}




void FUN_00c80e7c(long *param_1)

{
  FUN_00ecf178();
  *param_1 = (long)&PTR_FUN_02803840;
  FUN_00f0e4a8(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00c80ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x48,1);
  return;
}




void FUN_00c80ecc(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00ecf844();
  if (iVar2 == 0) {
    FUN_00f0e670(param_1 + 0x240,&DAT_01bee7fa,2);
    uVar3 = 2;
  }
  else {
    if (iVar2 != 1) goto LAB_00c80f48;
    local_30[0] = 0xffc0c0c0;
    FUN_00f0e670(param_1 + 0x240,local_30,2);
    uVar3 = 4;
  }
  FUN_00f0e698(param_1 + 0x240,uVar3);
LAB_00c80f48:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c80f6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02803840;
  param_1[0x48] = &PTR_FUN_028266f0;
  param_1[0x5f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x62);
  FUN_00f13d08(param_1 + 0x48);
  FUN_00ecf74c(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c80fd0(long *param_1)

{
  long *plVar1;
  long lVar2;
  code *local_78;
  long *plStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_02803998;
  FUN_00f0e4a8(plVar1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  local_50 = DAT_03210f84;
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  local_78 = FUN_00c810e0;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(param_1 + 1,&local_78);
  local_78 = FUN_00c810e0;
  local_50 = DAT_03210f58;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(param_1 + 1,&local_78);
  FUN_00f0e548(plVar1,PTR_s_build___HUDPartsJoystick_tga_02be3480,"joystick_add");
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

