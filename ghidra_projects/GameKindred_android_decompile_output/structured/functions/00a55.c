// functions/00a55 — 10 functions
#include "libGameKindred.h"




void FUN_00a5506c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cb628;
  FUN_00a5524c();
  FUN_009c7fa8(param_1 + 0x2e4);
  FUN_00f0d3a4(param_1 + 0x2be);
  FUN_00f0d3a4(param_1 + 0x298);
  FUN_00f01868(param_1 + 0x287);
  param_1[0x269] = &PTR_FUN_028266f0;
  param_1[0x280] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x283);
  FUN_00f13d08(param_1 + 0x269);
  param_1[0x24b] = &PTR_FUN_028266f0;
  param_1[0x262] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x265);
  FUN_00f13d08(param_1 + 0x24b);
  param_1[0x22d] = &PTR_FUN_028266f0;
  param_1[0x244] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x247);
  FUN_00f13d08(param_1 + 0x22d);
  param_1[0x20f] = &PTR_FUN_028266f0;
  param_1[0x226] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x229);
  FUN_00f13d08(param_1 + 0x20f);
  FUN_00f01868(param_1 + 0x1fe);
  if ((void *)param_1[0x1fd] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1fd]);
    param_1[0x1fd] = 0;
    param_1[0x1fc] = 0;
  }
  FUN_00f13d08(param_1 + 0x1e3);
  FUN_00ed00e0(param_1 + 0x13c);
  FUN_00f13d08(param_1 + 0x108);
  FUN_00f0d3a4(param_1 + 0xe2);
  FUN_00f01868(param_1 + 0xd1);
  param_1[0xb3] = &PTR_FUN_028266f0;
  param_1[0xca] = &PTR_FUN_02826850;
  param_1[0x60] = &PTR_FUN_02804168;
  FUN_00f0a79c(param_1 + 0xcd);
  FUN_00f13d08(param_1 + 0xb3);
  param_1[0x95] = &PTR_FUN_028266f0;
  param_1[0xac] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xaf);
  FUN_00f13d08(param_1 + 0x95);
  param_1[0x77] = &PTR_FUN_028266f0;
  param_1[0x8e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x91);
  FUN_00f13d08(param_1 + 0x77);
  FUN_00f13d08(param_1 + 0x60);
  FUN_00f13d08(param_1 + 0x47);
  FUN_00f13d08(param_1 + 0x30);
  FUN_00f13d08(param_1 + 0x19);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00a5524c(long param_1)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = *(uint *)(param_1 + 0xfe0);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0xfe8) + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        *(undefined8 *)(*(long *)(param_1 + 0xfe8) + uVar3 * 8) = 0;
        uVar2 = *(uint *)(param_1 + 0xfe0);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(long *)(param_1 + 0xfe8) != 0) {
    *(undefined4 *)(param_1 + 0xfe0) = 0;
  }
  return;
}




void FUN_00a552b0(void *param_1)

{
  FUN_00a5506c();
  operator_delete(param_1);
  return;
}




void FUN_00a552d4(long param_1,long param_2)

{
  ulong uVar1;
  
  FUN_00ceace8();
  uVar1 = FUN_00ceaf54();
  if ((uVar1 & 1) != 0) {
    *(long *)(param_1 + 0x2ce0) = param_2 + 0x28;
    *(undefined4 *)(param_1 + 0x2ce8) = *(undefined4 *)(param_2 + 0x30);
    FUN_00a55320(param_1);
    return;
  }
  return;
}




void FUN_00a55320(long *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  
  FUN_00a5524c();
  plVar2 = (long *)param_1[0x59c];
  if (plVar2 == (long *)0x0) {
    lVar3 = 0;
  }
  else if ((int)param_1[0x59d] == (int)plVar2[1]) {
    lVar3 = (**(code **)(*plVar2 + 0x10))();
    if (lVar3 != 0) {
      plVar2 = *(long **)(*(long *)(lVar3 + 0x38) + 0x198);
      lVar6 = *plVar2;
      if (lVar6 != 0) {
        uVar7 = 0;
        do {
          if (*(char *)(lVar6 + 0x50) == '\0') {
            FUN_00ceace8();
            uVar4 = FUN_00ceb084();
            if ((uVar4 & 1) == 0) {
              lVar6 = plVar2[uVar7];
              goto LAB_00a55390;
            }
          }
          else {
LAB_00a55390:
            if (*(char *)(lVar6 + 0x51) != '\0') {
              FUN_00ceace8();
              uVar4 = FUN_00ceb054();
              if ((uVar4 & 1) == 0) goto LAB_00a553cc;
              lVar6 = plVar2[uVar7];
            }
            if (*(char *)(lVar6 + 0x52) != '\0') {
              FUN_00ceace8();
              uVar4 = FUN_00ceb054();
              if ((uVar4 & 1) != 0) goto LAB_00a553cc;
              lVar6 = plVar2[uVar7];
            }
            FUN_00a55ee4(param_1,lVar6,uVar7 & 0xffffffff);
          }
LAB_00a553cc:
          lVar6 = plVar2[uVar7 + 1];
          uVar7 = uVar7 + 1;
        } while (lVar6 != 0);
      }
      FUN_00a55ee4(param_1,0,0xfe);
      (**(code **)(*param_1 + 0x150))(param_1);
    }
  }
  else {
    param_1[0x59c] = 0;
    lVar3 = 0;
    *(undefined4 *)(param_1 + 0x59d) = DAT_03214ce8;
  }
  uVar5 = FUN_00d6eb50();
  uVar1 = FUN_00d5baac(lVar3);
  FUN_00d6eb3c(uVar5,uVar1);
  uVar1 = FUN_0093d680();
  FUN_00a56048(param_1,uVar1);
  return;
}




undefined4 FUN_00a55458(long param_1)

{
  return *(undefined4 *)(**(long **)(param_1 + 0xfe8) + 0xc0);
}




void FUN_00a55468(long *param_1,uint param_2)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  
  FUN_00b89d24(0x3e19999a,param_1 + 0x47,param_2 & 1,1,1);
  (**(code **)(*param_1 + 0x150))(param_1);
  *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) & 0xffffffef;
  lVar1 = DAT_03210d00;
  if ((param_2 & 1) != 0) {
    uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar2 == 0xffff) {
      puVar3 = (ushort *)0x0;
    }
    else {
      puVar3 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
      if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar2 = 0xffff;
      }
      else {
        uVar2 = *puVar3;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efcad4(puVar3);
      *(undefined ***)puVar3 = &PTR_FUN_027c1a60;
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00efcac4(0x3d4ccccd,puVar3);
    lVar1 = DAT_03210d00;
    uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar2 == 0xffff) {
      puVar4 = (ushort *)0x0;
    }
    else {
      puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
      if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar2 = 0xffff;
      }
      else {
        uVar2 = *puVar4;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efca2c(puVar4);
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00efca7c(puVar4,1);
    FUN_00f02308(param_1 + 0x19,puVar3,puVar4,0);
    *(uint *)((long)param_1 + 0x204) = *(uint *)((long)param_1 + 0x204) & 0xffffffef;
    lVar1 = DAT_03210d00;
    uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar2 == 0xffff) {
      puVar3 = (ushort *)0x0;
    }
    else {
      puVar3 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
      if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar2 = 0xffff;
      }
      else {
        uVar2 = *puVar3;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efcad4(puVar3);
      *(undefined ***)puVar3 = &PTR_FUN_027c1a60;
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00efcac4(0x3d4ccccd,puVar3);
    lVar1 = DAT_03210d00;
    uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar2 == 0xffff) {
      puVar4 = (ushort *)0x0;
    }
    else {
      puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
      if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar2 = 0xffff;
      }
      else {
        uVar2 = *puVar4;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efca2c(puVar4);
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00efca7c(puVar4,1);
    FUN_00f02308(param_1 + 0x30,puVar3,puVar4,0);
    return;
  }
  *(uint *)((long)param_1 + 0x204) = *(uint *)((long)param_1 + 0x204) & 0xffffffef;
  return;
}




void FUN_00a557a8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a557b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a557b8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_c0 [2];
  int local_b0;
  int local_ac;
  float local_a8;
  float local_a4;
  undefined1 auStack_a0 [4];
  undefined4 local_9c;
  long local_98;
  
  lVar3 = tpidr_el0;
  local_98 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_00f00438("root-layer");
  FUN_00f0025c(&local_9c,auStack_a0);
  FUN_00f00298(&local_a4,&local_a8);
  FUN_00967268(&local_ac,0,&local_b0,0);
  fVar13 = *(float *)(param_1 + 0x40);
  fVar12 = *(float *)(param_1 + 0x44);
  if ((fVar13 != DAT_03218ef8) || (fVar7 = fVar12, fVar9 = fVar13, fVar12 != _DAT_03218efc)) {
    *(ulong *)(param_1 + 0x40) = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4(param_1);
    fVar9 = *(float *)(param_1 + 0x40);
    fVar7 = *(float *)(param_1 + 0x44);
  }
  if ((*(float *)(param_1 + 0x278) != DAT_03218ef8) ||
     (*(float *)(param_1 + 0x27c) != _DAT_03218efc)) {
    *(ulong *)(param_1 + 0x278) = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4(param_1 + 0x238);
  }
  FUN_00f13f08(local_a4,local_a8,param_1);
  lVar5 = param_1 + 0x300;
  FUN_00f13f08(local_9c,0x44924000,lVar5);
  FUN_00f07b18(0,lVar5,3,uVar4,3);
  FUN_00f07b18(0,lVar5,5,param_1,5);
  fVar11 = *(float *)(param_1 + 0x344);
  FUN_00f13f08(local_a4,fVar11,param_1 + 200);
  if (*(float *)(param_1 + 0x1c4) != local_a8 + -142.0) {
    *(float *)(param_1 + 0x1c4) = local_a8 + -142.0;
    FUN_0091ada4(param_1 + 0x180);
  }
  FUN_00f13f08(local_a4,0x430e0000,param_1 + 0x180);
  if ((*(float *)(param_1 + 0x750) != 80.0) || (*(float *)(param_1 + 0x754) != fVar11 + -79.0)) {
    *(undefined4 *)(param_1 + 0x750) = 0x42a00000;
    *(float *)(param_1 + 0x754) = fVar11 + -79.0;
    FUN_0091ada4(param_1 + 0x710);
  }
  if ((*(float *)(param_1 + 0x6c8) != 0.0) || (*(float *)(param_1 + 0x6cc) != fVar11)) {
    *(undefined4 *)(param_1 + 0x6c8) = 0;
    *(float *)(param_1 + 0x6cc) = fVar11;
    FUN_0091ada4(param_1 + 0x688);
  }
  FUN_00f13f08(local_a4 + (float)local_ac + -625.0,0x44924000,param_1 + 0x840);
  if (*(float *)(param_1 + 0x880) != (float)-local_ac) {
    *(float *)(param_1 + 0x880) = (float)-local_ac;
    FUN_0091ada4(param_1 + 0x840);
  }
  lVar5 = param_1 + 0xf18;
  if ((*(float *)(param_1 + 0xf58) != 80.0) || (*(float *)(param_1 + 0xf5c) != 160.0)) {
    *(undefined8 *)(param_1 + 0xf58) = 0x4320000042a00000;
    FUN_0091ada4(lVar5);
  }
  FUN_00f0bc10((float)local_ac,0,0x42a00000,local_c0);
  FUN_00f0c168(lVar5,local_c0);
  (**(code **)(*(long *)(param_1 + 0xf18) + 0x90))(lVar5);
  if (*(int *)(param_1 + 0xfe0) != 0) {
    uVar6 = 0;
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0xfe8) + uVar6 * 8);
      FUN_00f13f08(0x44110000,0x446d8000,lVar5);
      *(undefined8 *)(lVar5 + 0x1628) = 0x446d8000440c0000;
      FUN_00a5460c(lVar5);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0xfe0));
  }
  FUN_00ed0418(param_1 + 0x9e0,1);
  FUN_00ed04ac(0x42a00000,0,param_1 + 0x9e0);
  if ((*(float *)(param_1 + 0x1030) != local_a4 + -625.0) || (*(float *)(param_1 + 0x1034) != 0.0))
  {
    *(float *)(param_1 + 0x1030) = local_a4 + -625.0;
    *(undefined4 *)(param_1 + 0x1034) = 0;
    FUN_0091ada4(param_1 + 0xff0);
  }
  FUN_00f13f08((float)local_b0 + 625.0,0x44924000,param_1 + 0x1168);
  lVar5 = param_1 + 0x1078;
  if ((*(float *)(param_1 + 0x10b8) != 0.0) || (*(float *)(param_1 + 0x10bc) != 0.0)) {
    *(undefined8 *)(param_1 + 0x10b8) = 0;
    FUN_0091ada4(lVar5);
  }
  local_c0[0] = 0x3f800000;
  (**(code **)(*(long *)(param_1 + 0x1078) + 0x28))(lVar5,local_c0);
  FUN_00f13f08(0x42c80000,0x44924000,lVar5);
  lVar5 = param_1 + 0x1258;
  if ((*(float *)(param_1 + 0x1298) != 0.0) || (*(float *)(param_1 + 0x129c) != 585.0)) {
    *(undefined8 *)(param_1 + 0x1298) = 0x4412400000000000;
    FUN_0091ada4(lVar5);
  }
  local_c0[0] = 0x3f80000000000000;
  (**(code **)(*(long *)(param_1 + 0x1258) + 0x28))(lVar5,local_c0);
  lVar1 = param_1 + 0x1348;
  if ((*(float *)(param_1 + 5000) != 0.0) || (*(float *)(param_1 + 0x138c) != 585.0)) {
    *(undefined8 *)(param_1 + 5000) = 0x4412400000000000;
    FUN_0091ada4(lVar1);
  }
  local_c0[0] = 0;
  (**(code **)(*(long *)(param_1 + 0x1348) + 0x28))(lVar1,local_c0);
  FUN_00f13f08(0x40800000,0x44124000,lVar5);
  FUN_00f13f08(0x40800000,0x44124000,lVar1);
  fVar11 = 48.0;
  if ((*(float *)(param_1 + 0x1478) != 48.0) ||
     (fVar11 = 160.0, *(float *)(param_1 + 0x147c) != 160.0)) {
    *(undefined8 *)(param_1 + 0x1478) = 0x4320000042400000;
    FUN_0091ada4(param_1 + 0x1438);
  }
  lVar5 = param_1 + 0x14c0;
  FUN_00f0dad0(0x44074000,lVar5,1);
  FUN_00f0d378(lVar5,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  FUN_00f01c20(lVar5);
  lVar5 = param_1 + 0x15f0;
  if ((*(float *)(param_1 + 0x1630) != 0.0) || (*(float *)(param_1 + 0x1634) != fVar11 + 24.0)) {
    *(undefined4 *)(param_1 + 0x1630) = 0;
    *(float *)(param_1 + 0x1634) = fVar11 + 24.0;
    FUN_0091ada4(lVar5);
  }
  FUN_00f0dad0(0x44074000,lVar5,1);
  FUN_00f0d378(lVar5,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50);
  lVar1 = param_1 + 0x1720;
  lVar2 = param_1 + 0x1e40;
  FUN_00f0d378(lVar2,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  FUN_00ab7510(0x43f58000,lVar1);
  fVar11 = (float)FUN_00f0d548(lVar2);
  fVar8 = 140.0;
  uVar10 = NEON_fminnm(fVar11 + 140.0,0x44074000);
  FUN_00f0d548(lVar2);
  fVar8 = fVar8 + 60.0;
  FUN_00f13f08(uVar10,param_1 + 0x1990);
  FUN_00f01c20(param_1 + 0x1990);
  fVar8 = fVar8 * -0.5;
  if ((*(float *)(param_1 + 0x1760) != 270.5) ||
     (fVar11 = *(float *)(param_1 + 0x1764), fVar11 != fVar8 + 950.0)) {
    *(undefined4 *)(param_1 + 0x1760) = 0x43874000;
    *(float *)(param_1 + 0x1764) = fVar8 + 950.0;
    FUN_0091ada4(lVar1);
    fVar11 = *(float *)(param_1 + 0x1764);
  }
  FUN_00f01c20(lVar1);
  FUN_00f0dc4c(((fVar11 + fVar8 * -0.5) - *(float *)(param_1 + 0x1634)) + -60.0,0,0x3f800000,lVar5);
  if ((*(float *)(param_1 + 0x40) != fVar13) || (*(float *)(param_1 + 0x44) != fVar12)) {
    *(float *)(param_1 + 0x40) = fVar13;
    *(float *)(param_1 + 0x44) = fVar12;
    FUN_0091ada4(param_1);
  }
  if ((*(float *)(param_1 + 0x278) != fVar9) || (*(float *)(param_1 + 0x27c) != fVar7)) {
    *(float *)(param_1 + 0x278) = fVar9;
    *(float *)(param_1 + 0x27c) = fVar7;
    FUN_0091ada4(param_1 + 0x238);
  }
  if (*(long *)(lVar3 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a55ee4(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  void *local_80;
  code *local_78;
  long lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulong local_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pvVar3 = operator_new(0x1630);
  FUN_00a53cc8();
  local_80 = pvVar3;
  FUN_00a53fb4(pvVar3,param_2,param_3);
  local_58 = (ulong)*(uint *)(param_1 + 0xfe0);
  lVar1 = (long)pvVar3 + 8;
  local_50 = DAT_03210f58;
  local_78 = FUN_00a560ac;
  local_68 = 0;
  uStack_60 = 0;
  lStack_70 = param_1;
  FUN_009693a0(lVar1,&local_78);
  local_58 = (ulong)*(uint *)(param_1 + 0xfe0);
  local_50 = DAT_03210f84;
  local_78 = FUN_00a560ac;
  local_68 = 0;
  uStack_60 = 0;
  lStack_70 = param_1;
  FUN_009693a0(lVar1,&local_78);
  local_58 = (ulong)*(uint *)(param_1 + 0xfe0);
  local_50 = DAT_03210f60;
  local_78 = FUN_00a560b8;
  local_68 = 0;
  uStack_60 = 0;
  lStack_70 = param_1;
  FUN_009693a0(lVar1,&local_78);
  local_58 = (ulong)*(uint *)(param_1 + 0xfe0);
  local_50 = DAT_03210f8c;
  local_78 = FUN_00a560b8;
  local_68 = 0;
  uStack_60 = 0;
  lStack_70 = param_1;
  FUN_009693a0(lVar1,&local_78);
  FUN_00a560e0(param_1 + 0xfe0,&local_80);
  FUN_00f023ec(param_1 + 0xf18,local_80,1);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

