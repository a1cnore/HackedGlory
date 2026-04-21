// functions/00a6b — 8 functions
#include "libGameKindred.h"




void FUN_00a6b04c(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  *param_1 = &PTR_FUN_027ccb88;
  FUN_00a6b2b8();
  uVar2 = *(uint *)(param_1 + 0x3b2);
  if (uVar2 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      plVar1 = *(long **)(param_1[0x3b3] + lVar4);
      if (plVar1 == (long *)0x0) {
        puVar3 = (undefined8 *)(param_1[0x3b3] + uVar5 * 8);
      }
      else {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(param_1 + 0x3b2);
        puVar3 = (undefined8 *)(param_1[0x3b3] + lVar4);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
      *puVar3 = 0;
    } while (uVar5 < uVar2);
  }
  FUN_009c7fa8(param_1 + 0x3da);
  FUN_00f0d3a4(param_1 + 0x3b4);
  if ((void *)param_1[0x3b3] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3b3]);
    param_1[0x3b2] = 0;
    param_1[0x3b3] = 0;
  }
  FUN_00f13d08(param_1 + 0x399);
  FUN_00f0d3a4(param_1 + 0x373);
  FUN_00ed00e0(param_1 + 0x2cc);
  FUN_00f13d08(param_1 + 0x298);
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




void FUN_00a6b2b8(long param_1)

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




void FUN_00a6b31c(void *param_1)

{
  FUN_00a6b04c();
  operator_delete(param_1);
  return;
}




void FUN_00a6b340(long param_1,long param_2)

{
  ulong uVar1;
  
  FUN_00ceace8();
  uVar1 = FUN_00ceb05c();
  if ((uVar1 & 1) != 0) {
    *(long *)(param_1 + 0x3490) = param_2 + 0x28;
    *(undefined4 *)(param_1 + 0x3498) = *(undefined4 *)(param_2 + 0x30);
    FUN_00a6b38c(param_1);
    return;
  }
  return;
}




void FUN_00a6b38c(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined4 local_b0 [2];
  uint local_a8 [2];
  long local_a0;
  code *local_98 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00a6b2b8();
  plVar5 = (long *)param_1[0x692];
  if (plVar5 != (long *)0x0) {
    if ((int)param_1[0x693] == (int)plVar5[1]) {
      lVar6 = (**(code **)(*plVar5 + 0x10))();
      if (lVar6 != 0) {
        uVar7 = FUN_00d6eb50();
        uVar2 = FUN_00d5baac(lVar6);
        uVar7 = FUN_00d6eb3c(uVar7,uVar2);
        lVar6 = *(long *)(lVar6 + 0x18);
        while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_02c7bf38))) {
          lVar6 = *(long *)(lVar6 + 0x20);
        }
        uVar8 = FUN_00cdbb18();
        lVar9 = FUN_00cdc678(uVar8,uVar7);
        if (lVar9 != 0) {
          FUN_00951160(local_a8,lVar9);
          local_98[0] = FUN_00cdbb44;
          FUN_00a6cbcc(local_a0,local_a0 + (ulong)local_a8[0] * 0x18,local_98);
          if (lVar6 != 0) {
            uVar3 = FUN_00d7b35c(lVar6,local_98,8);
            if (local_a8[0] != 0) {
              lVar9 = 0;
              uVar12 = 0;
              do {
                uVar7 = FUN_00cdbb18();
                if ((*(byte *)(local_a0 + lVar9) & 1) == 0) {
                  lVar10 = local_a0 + lVar9 + 1;
                }
                else {
                  lVar10 = *(long *)(local_a0 + lVar9 + 0x10);
                }
                lVar10 = FUN_00cdc608(uVar7,lVar10);
                if (lVar10 != 0) {
                  if ((*(byte *)(lVar10 + 0x60) & 1) == 0) {
                    lVar11 = lVar10 + 0x61;
                  }
                  else {
                    lVar11 = *(long *)(lVar10 + 0x70);
                  }
                  uVar2 = FUN_00d9ff9c(lVar11);
                  FUN_00d9ff84(local_b0,uVar2);
                  uVar4 = FUN_00d7b4b4(lVar6,local_b0[0]);
                  if ((-1 < (int)uVar4) && (uVar4 < uVar3)) {
                    FUN_00a6c14c(param_1,local_98[(int)uVar4],uVar4,
                                 (ulong)(long)(short)(*(short *)(lVar10 + 0xb0) << 8) >> 8);
                  }
                }
                uVar12 = uVar12 + 1;
                lVar9 = lVar9 + 0x18;
              } while (uVar12 < local_a8[0]);
            }
            (**(code **)(*param_1 + 0x150))(param_1);
          }
          FUN_00951534(local_a8,1);
        }
        FUN_00a6c14c(param_1,0,0xffffffff,0);
        FUN_00a6c310(param_1,0);
      }
    }
    else {
      param_1[0x692] = 0;
      *(undefined4 *)(param_1 + 0x693) = DAT_03214ce8;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a6b5c4(long *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ushort uVar4;
  ushort *puVar5;
  ulong uVar6;
  ushort *puVar7;
  
  FUN_00b89d24(0x3e19999a,param_1 + 0x47,param_2 & 1,1,1);
  (**(code **)(*param_1 + 0x150))(param_1);
  uVar2 = 0;
  if ((int)param_1[0x1fc] != 0) {
    lVar3 = param_1[0x1fd];
    uVar6 = 0;
    uVar2 = 0;
    do {
      FUN_00a6a610(*(undefined8 *)(lVar3 + uVar6 * 8),param_2 & 1);
      lVar3 = param_1[0x1fd];
      lVar1 = uVar6 * 8;
      uVar6 = uVar6 + 1;
      uVar2 = uVar2 | *(char *)(*(long *)(lVar3 + lVar1) + 0xd4) != '\0';
    } while (uVar6 < *(uint *)(param_1 + 0x1fc));
    uVar2 = uVar2 << 2;
  }
  *(uint *)((long)param_1 + 0x1f54) = *(uint *)((long)param_1 + 0x1f54) & 0xfffffffb | uVar2;
  *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) & 0xffffffef;
  lVar3 = DAT_03210d00;
  if ((param_2 & 1) != 0) {
    uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar4 == 0xffff) {
      puVar5 = (ushort *)0x0;
    }
    else {
      puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
      if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = *puVar5;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
      *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
      FUN_00efcad4(puVar5);
      *(undefined ***)puVar5 = &PTR_FUN_027c1a60;
      *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    }
    FUN_00efcac4(0x3d4ccccd,puVar5);
    lVar3 = DAT_03210d00;
    uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar4 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
      if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = *puVar7;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
      *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
      FUN_00efca2c(puVar7);
      *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    }
    FUN_00efca7c(puVar7,1);
    FUN_00f02308(param_1 + 0x19,puVar5,puVar7,0);
    *(uint *)((long)param_1 + 0x204) = *(uint *)((long)param_1 + 0x204) & 0xffffffef;
    lVar3 = DAT_03210d00;
    uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar4 == 0xffff) {
      puVar5 = (ushort *)0x0;
    }
    else {
      puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
      if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = *puVar5;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
      *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
      FUN_00efcad4(puVar5);
      *(undefined ***)puVar5 = &PTR_FUN_027c1a60;
      *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    }
    FUN_00efcac4(0x3d4ccccd,puVar5);
    lVar3 = DAT_03210d00;
    uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar4 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
      if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = *puVar7;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
      *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
      FUN_00efca2c(puVar7);
      *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    }
    FUN_00efca7c(puVar7,1);
    FUN_00f02308(param_1 + 0x30,puVar5,puVar7,0);
    return;
  }
  *(uint *)((long)param_1 + 0x204) = *(uint *)((long)param_1 + 0x204) & 0xffffffef;
  return;
}




void FUN_00a6b964(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a6b96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a6b974(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
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
  if ((fVar13 != DAT_03218ef8) || (fVar10 = fVar12, fVar11 = fVar13, fVar12 != _DAT_03218efc)) {
    *(ulong *)(param_1 + 0x40) = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4(param_1);
    fVar11 = *(float *)(param_1 + 0x40);
    fVar10 = *(float *)(param_1 + 0x44);
  }
  if ((*(float *)(param_1 + 0x278) != DAT_03218ef8) ||
     (*(float *)(param_1 + 0x27c) != _DAT_03218efc)) {
    *(ulong *)(param_1 + 0x278) = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4(param_1 + 0x238);
  }
  FUN_00f13f08(local_a4,local_a8,param_1);
  lVar1 = param_1 + 0x300;
  FUN_00f13f08(local_9c,0x44924000,lVar1);
  FUN_00f07b18(0,lVar1,3,uVar4,3);
  FUN_00f07b18(0,lVar1,5,param_1,5);
  fVar9 = *(float *)(param_1 + 0x344);
  FUN_00f13f08(local_a4,fVar9,param_1 + 200);
  if (*(float *)(param_1 + 0x1c4) != local_a8 + -142.0) {
    *(float *)(param_1 + 0x1c4) = local_a8 + -142.0;
    FUN_0091ada4(param_1 + 0x180);
  }
  FUN_00f13f08(local_a4,0x430e0000,param_1 + 0x180);
  if ((*(float *)(param_1 + 0x750) != 80.0) || (*(float *)(param_1 + 0x754) != fVar9 + -79.0)) {
    *(undefined4 *)(param_1 + 0x750) = 0x42a00000;
    *(float *)(param_1 + 0x754) = fVar9 + -79.0;
    FUN_0091ada4(param_1 + 0x710);
  }
  if ((*(float *)(param_1 + 0x6c8) != 0.0) || (*(float *)(param_1 + 0x6cc) != fVar9)) {
    *(undefined4 *)(param_1 + 0x6c8) = 0;
    *(float *)(param_1 + 0x6cc) = fVar9;
    FUN_0091ada4(param_1 + 0x688);
  }
  FUN_00f13f08(local_a4 + (float)local_ac + -625.0,0x44924000,param_1 + 0x840);
  if (*(float *)(param_1 + 0x880) != (float)-local_ac) {
    *(float *)(param_1 + 0x880) = (float)-local_ac;
    FUN_0091ada4(param_1 + 0x840);
  }
  lVar1 = param_1 + 0xf18;
  if ((*(float *)(param_1 + 0xf58) != 80.0) || (*(float *)(param_1 + 0xf5c) != 160.0)) {
    *(undefined8 *)(param_1 + 0xf58) = 0x4320000042a00000;
    FUN_0091ada4(lVar1);
  }
  FUN_00f0bc10((float)local_ac,0,0x42a00000,local_c0);
  FUN_00f0c168(lVar1,local_c0);
  (**(code **)(*(long *)(param_1 + 0xf18) + 0x90))(lVar1);
  if (*(int *)(param_1 + 0xfe0) != 0) {
    uVar6 = 0;
    do {
      plVar5 = *(long **)(*(long *)(param_1 + 0xfe8) + uVar6 * 8);
      plVar5[0x168] = 0x446d8000440c0000;
      (**(code **)(*plVar5 + 0x90))();
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
  lVar1 = param_1 + 0x1078;
  if ((*(float *)(param_1 + 0x10b8) != 0.0) || (*(float *)(param_1 + 0x10bc) != 0.0)) {
    *(undefined8 *)(param_1 + 0x10b8) = 0;
    FUN_0091ada4(lVar1);
  }
  local_c0[0] = 0x3f800000;
  (**(code **)(*(long *)(param_1 + 0x1078) + 0x28))(lVar1,local_c0);
  FUN_00f13f08(0x42c80000,0x44924000,lVar1);
  lVar1 = param_1 + 0x1258;
  if ((*(float *)(param_1 + 0x1298) != 0.0) || (*(float *)(param_1 + 0x129c) != 585.0)) {
    *(undefined8 *)(param_1 + 0x1298) = 0x4412400000000000;
    FUN_0091ada4(lVar1);
  }
  local_c0[0] = 0x3f80000000000000;
  (**(code **)(*(long *)(param_1 + 0x1258) + 0x28))(lVar1,local_c0);
  lVar2 = param_1 + 0x1348;
  if ((*(float *)(param_1 + 5000) != 0.0) || (*(float *)(param_1 + 0x138c) != 585.0)) {
    *(undefined8 *)(param_1 + 5000) = 0x4412400000000000;
    FUN_0091ada4(lVar2);
  }
  local_c0[0] = 0;
  (**(code **)(*(long *)(param_1 + 0x1348) + 0x28))(lVar2,local_c0);
  FUN_00f13f08(0x40800000,0x44124000,lVar1);
  FUN_00f13f08(0x40800000,0x44124000,lVar2);
  if ((*(float *)(param_1 + 0x1478) != 48.0) || (*(float *)(param_1 + 0x147c) != 160.0)) {
    *(undefined8 *)(param_1 + 0x1478) = 0x4320000042400000;
    FUN_0091ada4(param_1 + 0x1438);
  }
  lVar1 = param_1 + 0x1b98;
  fVar7 = 0.0;
  FUN_00f0db64(0x44074000,0,0x3f800000,lVar1);
  FUN_00f0d378(lVar1,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  FUN_00f01c20(lVar1);
  fVar9 = fVar7 + 24.0;
  lVar1 = param_1 + 0x1da0;
  if ((*(float *)(param_1 + 0x1de0) != 0.0) || (*(float *)(param_1 + 0x1de4) != fVar9)) {
    *(undefined4 *)(param_1 + 0x1de0) = 0;
    *(float *)(param_1 + 0x1de4) = fVar9;
    FUN_0091ada4(lVar1);
  }
  FUN_00f0dad0(0x44074000,lVar1,1);
  FUN_00f0d378(lVar1,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50);
  FUN_00f0d4e0(lVar1);
  fVar9 = fVar9 + fVar7 + 24.0;
  lVar1 = param_1 + 0x1cc8;
  if (*(float *)(param_1 + 0x1d0c) != fVar9) {
    *(float *)(param_1 + 0x1d0c) = fVar9;
    FUN_0091ada4(lVar1);
  }
  FUN_00f0bc10(0,0,0x41c00000,local_c0);
  FUN_00f0c168(lVar1,local_c0);
  FUN_00f0bdf8(lVar1);
  if (*(int *)(param_1 + 0x1d90) != 0) {
    uVar6 = 0;
    do {
      plVar5 = *(long **)(*(long *)(param_1 + 0x1d98) + uVar6 * 8);
      *(undefined4 *)(plVar5 + 0x5d) = 0x44074000;
      (**(code **)(*plVar5 + 0xe8))(plVar5);
      (**(code **)(*plVar5 + 0x90))(plVar5);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0x1d90));
  }
  lVar1 = param_1 + 0x1ed0;
  lVar2 = param_1 + 0x25f0;
  FUN_00f0d378(lVar2,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  FUN_00ab7510(0x43f58000,lVar1);
  fVar9 = (float)FUN_00f0d548(lVar2);
  fVar7 = 140.0;
  uVar8 = NEON_fminnm(fVar9 + 140.0,0x44074000);
  FUN_00f0d548(lVar2);
  fVar7 = fVar7 + 60.0;
  FUN_00f13f08(uVar8,param_1 + 0x2140);
  FUN_00f01c20(param_1 + 0x2140);
  fVar7 = fVar7 * -0.5;
  fVar9 = fVar7 + 950.0;
  if ((*(float *)(param_1 + 0x1f10) != 270.5) ||
     (fVar7 = *(float *)(param_1 + 0x1f14), fVar7 != fVar9)) {
    *(undefined4 *)(param_1 + 0x1f10) = 0x43874000;
    *(float *)(param_1 + 0x1f14) = fVar9;
    FUN_0091ada4(lVar1);
  }
  FUN_00f01c20(lVar1);
  FUN_00f13f08(0x44074000,(950.0 - fVar7) + -60.0,param_1 + 0x14c0);
  FUN_00f112f0(param_1 + 0x14c0,1);
  FUN_00ed0418(param_1 + 0x1660,1);
  FUN_00ed04d8(param_1 + 0x1660,0,1);
  if ((*(float *)(param_1 + 0x40) != fVar13) || (*(float *)(param_1 + 0x44) != fVar12)) {
    *(float *)(param_1 + 0x40) = fVar13;
    *(float *)(param_1 + 0x44) = fVar12;
    FUN_0091ada4(param_1);
  }
  if ((*(float *)(param_1 + 0x278) != fVar11) || (*(float *)(param_1 + 0x27c) != fVar10)) {
    *(float *)(param_1 + 0x278) = fVar11;
    *(float *)(param_1 + 0x27c) = fVar10;
    FUN_0091ada4(param_1 + 0x238);
  }
  if (*(long *)(lVar3 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

