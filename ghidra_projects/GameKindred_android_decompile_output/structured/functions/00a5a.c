// functions/00a5a — 9 functions
#include "libGameKindred.h"




void FUN_00a5a0e8(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_027cc270;
  param_1[0x5d6] = &PTR_FUN_028266f0;
  param_1[0x5ed] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x5f0);
  FUN_00f13d08(param_1 + 0x5d6);
  param_1[0x5b8] = &PTR_FUN_028266f0;
  param_1[0x5cf] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x5d2);
  FUN_00f13d08(param_1 + 0x5b8);
  lVar1 = 0;
  do {
    FUN_00f0d3a4((long)param_1 + lVar1 + 0x2c58);
    lVar1 = lVar1 + -0x130;
  } while (lVar1 != -0xbe0);
  puVar2 = param_1 + 0x417;
  lVar1 = -0x960;
  do {
    *puVar2 = &PTR_FUN_028266f0;
    puVar2[0x17] = &PTR_FUN_02826850;
    FUN_00f0a79c(puVar2 + 0x1a);
    FUN_00f13d08(puVar2);
    lVar1 = lVar1 + 0xf0;
    puVar2 = puVar2 + -0x1e;
  } while (lVar1 != 0);
  puVar2 = param_1 + 0x2eb;
  lVar1 = -0x960;
  do {
    *puVar2 = &PTR_FUN_028266f0;
    puVar2[0x17] = &PTR_FUN_02826850;
    FUN_00f0a79c(puVar2 + 0x1a);
    FUN_00f13d08(puVar2);
    lVar1 = lVar1 + 0xf0;
    puVar2 = puVar2 + -0x1e;
  } while (lVar1 != 0);
  lVar1 = 0x960;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x498) = &PTR_FUN_028266f0;
    *(undefined ***)((long)param_1 + lVar1 + 0x550) = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar1 + 0x568);
    FUN_00f13d08((long)param_1 + lVar1 + 0x498);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != 0);
  param_1[0x86] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x9d);
  FUN_00f13d08(param_1 + 0x86);
  FUN_00f0d3a4(param_1 + 0x60);
  param_1[0x35] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x4c);
  FUN_00f13d08(param_1 + 0x35);
  FUN_00f13d08(param_1 + 0x1c);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00a5a290(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = 0;
  *param_1 = &PTR_FUN_027cbfa0;
  do {
    FUN_00f13d08((long)param_1 + lVar1 + 0x1c30);
    lVar1 = lVar1 + -0xb8;
  } while (lVar1 != -0x508);
  lVar1 = -0x690;
  puVar2 = param_1 + 0x2de;
  do {
    *puVar2 = &PTR_FUN_028266f0;
    puVar2[0x17] = &PTR_FUN_02826850;
    FUN_00f0a79c(puVar2 + 0x1a);
    FUN_00f13d08(puVar2);
    lVar1 = lVar1 + 0xf0;
    puVar2 = puVar2 + -0x1e;
  } while (lVar1 != 0);
  lVar1 = 0x1020;
  do {
    FUN_00f0d3a4((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x130;
  } while (lVar1 != 2000);
  param_1[0xf5] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x10c);
  FUN_00f13d08(param_1 + 0xf5);
  FUN_00ed00e0(param_1 + 0x4e);
  FUN_00f13d08(param_1 + 0x35);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00a5a374(void *param_1)

{
  FUN_00a59cbc();
  operator_delete(param_1);
  return;
}




void FUN_00a5a398(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  *(long *)(param_1 + 0x340c0) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0x340c8) = *(undefined4 *)(param_2 + 0x30);
  FUN_00a5e98c(param_1 + 0x2c2b0);
  uVar3 = FUN_01988738(DAT_031328d8,0);
  puVar1 = (undefined8 *)(param_1 + 0x340d0);
  *puVar1 = uVar3;
  FUN_00d74184(uVar3,(long *)(param_1 + 0x340c0));
  FUN_00ceace8();
  uVar4 = FUN_00ceae88();
  if ((uVar4 & 1) != 0) {
    local_50 = 0;
    FUN_019889cc(&local_50,1,DAT_02c091a0,0);
    if (local_50 != 0) {
      FUN_00a0aa24(local_50,*puVar1);
    }
  }
  FUN_00a5c7b0(param_1 + 0x2f260,param_2,*puVar1);
  FUN_00a6307c(param_1 + 0x29c0,*puVar1,param_2);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a5a4b0(long *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ushort uVar7;
  ushort *puVar8;
  ushort *puVar9;
  
  if ((param_2 & 1) != 0) {
    (**(code **)(*param_1 + 0x150))(param_1);
  }
  uVar4 = FUN_009f2588();
  uVar1 = param_2 & 1;
  FUN_009f2fe4(uVar4,0xd9abc88a,uVar1);
  FUN_00b89d24(0x3e19999a,param_1 + 0x19,uVar1,1,1);
  FUN_00a63138(0x3e800000,param_1 + 0x538,uVar1,1,1);
  uVar3 = 0;
  if ((param_2 & 1) != 0) {
    FUN_00ceace8();
    uVar3 = FUN_00ceb094();
    uVar3 = uVar3 ^ 1;
  }
  uVar2 = 0x3e19999a;
  if ((param_2 & 1) == 0) {
    uVar2 = 0x3eb33333;
  }
  FUN_00a5e44c(uVar2,param_1 + 0x167,uVar3 & 1,0,1);
  FUN_00a5efe0(0x3e99999a,param_1 + 0x5856,uVar1,1,1);
  plVar5 = param_1 + 0x5e4c;
  FUN_00a5c87c(plVar5);
  FUN_00a5c824(0x3dcccccd,plVar5,uVar1,1,1);
  if ((param_2 & 1) != 0) {
    FUN_00a63a44(param_1 + 0x538);
    FUN_00a5f054(param_1 + 0x5856);
    FUN_00a5d410(plVar5,0xffffffff);
    FUN_00a5a9f4(param_1);
    FUN_00a61e88(0x3e99999a,param_1 + 0x6397,1,1,1);
    *(uint *)((long)param_1 + 0x336b4) = *(uint *)((long)param_1 + 0x336b4) | 0x10;
    plVar5 = (long *)param_1[0x6818];
    uVar4 = 0;
    if (plVar5 != (long *)0x0) {
      if ((int)param_1[0x6819] == (int)plVar5[1]) {
        uVar4 = (**(code **)(*plVar5 + 0x10))();
      }
      else {
        param_1[0x6818] = 0;
        uVar4 = 0;
        *(int *)(param_1 + 0x6819) = DAT_03214ce8;
      }
    }
    if ((int)param_1[0x19b] == 0) {
      lVar6 = FUN_00d9ebe8(uVar4);
      if (*(int *)(lVar6 + 0x28) == 0xfe) {
        FUN_00a5e330(param_1 + 0x167,1);
      }
    }
    *(uint *)((long)param_1 + 0x72c) = *(uint *)((long)param_1 + 0x72c) & 0xffffffef;
    lVar6 = DAT_03210d00;
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
      *(int *)(lVar6 + 0x20014) = *(int *)(lVar6 + 0x20014) + 1;
      FUN_00efcad4(puVar8);
      *(undefined ***)puVar8 = &PTR_FUN_027c1a60;
      *(int *)(lVar6 + 0x20020) = *(int *)(lVar6 + 0x20020) + 1;
    }
    FUN_00efcac4(0x3d4ccccd,puVar8);
    lVar6 = DAT_03210d00;
    uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar7 == 0xffff) {
      puVar9 = (ushort *)0x0;
    }
    else {
      puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
      if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar7 = 0xffff;
      }
      else {
        uVar7 = *puVar9;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
      *(int *)(lVar6 + 0x20014) = *(int *)(lVar6 + 0x20014) + 1;
      FUN_00efca2c(puVar9);
      *(int *)(lVar6 + 0x20020) = *(int *)(lVar6 + 0x20020) + 1;
    }
    FUN_00efca7c(puVar9,1);
    FUN_00f02308(param_1 + 0xd5,puVar8,puVar9,0);
    *(uint *)((long)param_1 + 0x804) = *(uint *)((long)param_1 + 0x804) & 0xffffffef;
    lVar6 = DAT_03210d00;
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
      *(int *)(lVar6 + 0x20014) = *(int *)(lVar6 + 0x20014) + 1;
      FUN_00efcad4(puVar8);
      *(undefined ***)puVar8 = &PTR_FUN_027c1a60;
      *(int *)(lVar6 + 0x20020) = *(int *)(lVar6 + 0x20020) + 1;
    }
    FUN_00efcac4(0x3d4ccccd,puVar8);
    lVar6 = DAT_03210d00;
    uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar7 == 0xffff) {
      puVar9 = (ushort *)0x0;
    }
    else {
      puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
      if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar7 = 0xffff;
      }
      else {
        uVar7 = *puVar9;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
      *(int *)(lVar6 + 0x20014) = *(int *)(lVar6 + 0x20014) + 1;
      FUN_00efca2c(puVar9);
      *(int *)(lVar6 + 0x20020) = *(int *)(lVar6 + 0x20020) + 1;
    }
    FUN_00efca7c(puVar9,1);
    FUN_00f02308(param_1 + 0xf0,puVar8,puVar9,0);
    return;
  }
  FUN_00a61e88(0x3e99999a,param_1 + 0x6397,0,1,1);
  *(uint *)((long)param_1 + 0x336b4) = *(uint *)((long)param_1 + 0x336b4) & 0xffffffef;
  *(uint *)((long)param_1 + 0x72c) = *(uint *)((long)param_1 + 0x72c) & 0xffffffef;
  *(uint *)((long)param_1 + 0x804) = *(uint *)((long)param_1 + 0x804) & 0xffffffef;
  return;
}




void FUN_00a5a9f4(long param_1)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined4 local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar7 = *(long **)(param_1 + 0x340c0);
  if (plVar7 != (long *)0x0) {
    if (*(int *)(param_1 + 0x340c8) == (int)plVar7[1]) {
      lVar8 = (**(code **)(*plVar7 + 0x10))();
      if (lVar8 != 0) {
        lVar9 = FUN_00a64fbc(param_1 + 0x29c0);
        iVar3 = FUN_00a5f97c(param_1 + 0x2c2b0);
        lVar14 = *(long *)(lVar8 + 0x18);
        while ((lVar14 != 0 && (*(int *)(*(long *)(lVar14 + 8) + 0xa4) != DAT_03130aa8))) {
          lVar14 = *(long *)(lVar14 + 0x20);
        }
        if (lVar9 == 0) {
          bVar2 = 0;
          uVar11 = 0;
        }
        else {
          iVar4 = FUN_00d72dac(lVar14);
          iVar5 = FUN_00d72940(lVar14);
          bVar2 = 0;
          if (iVar4 == iVar5) {
            uVar6 = FUN_00a60ab4(lVar9);
            local_a0 = 0;
            local_5c = 0;
            local_64 = 0;
            uStack_6c = 0;
            local_74 = 0;
            uStack_7c = 0;
            local_84 = 0;
            local_98 = 0xffffffff;
            uStack_8c = 0;
            local_94 = 0;
            FUN_00d74500(*(undefined8 *)(param_1 + 0x340d0),uVar6,0,(long)&local_a0 + 4,&local_98,
                         &local_a0,1);
            bVar2 = FUN_00d72d24(lVar14,uVar6);
            bVar2 = (int)local_a0 == 0 & (bVar2 ^ 1);
          }
          lVar10 = FUN_00a60aac(lVar9);
          uVar11 = FUN_00d732d0(lVar14,*(undefined4 *)(lVar10 + 0x1a0));
          uVar11 = uVar11 & 0xffffffff;
        }
        uVar12 = FUN_00d9f00c(lVar8);
        if ((uVar12 & 1) == 0) {
          uVar13 = 3;
        }
        else if (lVar9 == 0 || bVar2 != 1) {
          if ((uVar11 & 1) == 0) {
            if (lVar9 == 0) {
              if (iVar3 == -1) {
                uVar13 = 2;
              }
              else {
                uVar13 = 1;
              }
            }
            else {
              uVar13 = 0;
            }
          }
          else {
            uVar13 = 5;
          }
        }
        else {
          uVar13 = 4;
        }
        FUN_00a5c80c(param_1 + 0x2f260,uVar13);
      }
    }
    else {
      *(long *)(param_1 + 0x340c0) = 0;
      *(int *)(param_1 + 0x340c8) = DAT_03214ce8;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a5ac60(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a5ac68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_00a5ac6c(undefined8 param_1,int *param_2)

{
  if ((*param_2 != 0x22) && (*param_2 != 0x1a)) {
    return;
  }
  FUN_00a59c20();
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a5ac88(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 auStack_a8 [4];
  undefined1 auStack_a4 [4];
  int local_a0;
  int local_9c;
  long local_98;
  
  lVar5 = tpidr_el0;
  local_98 = *(long *)(lVar5 + 0x28);
  uVar6 = FUN_00f00438("root-layer");
  FUN_00967268(&local_9c,&local_a0,auStack_a4,auStack_a8);
  FUN_00f0025c(&local_ac,&local_b0);
  FUN_00f00298(&uStack_b4,&local_b8);
  FUN_00f13f08(uStack_b4,local_b8,param_1);
  fVar10 = local_b8;
  fVar13 = *(float *)(param_1 + 8);
  fVar11 = *(float *)((long)param_1 + 0x44);
  if ((fVar13 != DAT_03218ef8) || (fVar9 = fVar11, fVar12 = fVar13, fVar11 != _DAT_03218efc)) {
    param_1[8] = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4(param_1);
    fVar12 = *(float *)(param_1 + 8);
    fVar9 = *(float *)((long)param_1 + 0x44);
  }
  if ((*(float *)(param_1 + 0x21) != DAT_03218ef8) ||
     (*(float *)((long)param_1 + 0x10c) != _DAT_03218efc)) {
    param_1[0x21] = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4(param_1 + 0x19);
  }
  fVar10 = fVar10 + -320.0;
  FUN_00f13f08(local_ac,local_b0,param_1 + 0x32);
  if ((*(float *)(param_1 + 0x3a) != (float)-local_9c) ||
     (*(float *)((long)param_1 + 0x1d4) != (float)-local_a0)) {
    *(float *)(param_1 + 0x3a) = (float)-local_9c;
    *(float *)((long)param_1 + 0x1d4) = (float)-local_a0;
    FUN_0091ada4(param_1 + 0x32);
  }
  plVar1 = param_1 + 0x4d;
  FUN_00f13f08(local_ac,fVar10,plVar1);
  FUN_00f07b18(0,plVar1,3,uVar6,3);
  FUN_00f07b18(0x430c0000,plVar1,0,param_1,0);
  if ((*(float *)(param_1 + 0x55) != (float)-local_9c) ||
     (*(float *)((long)param_1 + 0x2ac) != (float)local_a0 + 140.0)) {
    *(float *)(param_1 + 0x55) = (float)-local_9c;
    *(float *)((long)param_1 + 0x2ac) = (float)local_a0 + 140.0;
    FUN_0091ada4(plVar1);
  }
  plVar2 = param_1 + 0xd5;
  FUN_00f13f08(local_ac,0x430c0000,plVar2);
  plVar3 = param_1 + 0xf0;
  FUN_00f13f08(local_ac,0x43340000,plVar3);
  FUN_00f07b18(0x80000000,plVar2,2,plVar1,0);
  FUN_00f07b18(0,plVar2,3,plVar1,3);
  FUN_00f07b18(0,plVar3,0,plVar1,2);
  FUN_00f07b18(0,plVar3,3,plVar1,3);
  FUN_00f13f08(local_ac,0x42000000,param_1 + 0x10b);
  FUN_00f13f08(local_ac,0x42000000,param_1 + 0x126);
  FUN_00f07940(0,0,param_1 + 0x10b,3,plVar2,3);
  FUN_00f07940(0,0,param_1 + 0x126,0,plVar3,0);
  FUN_00f13f08(uStack_b4,local_b8,param_1 + 0xbe);
  plVar2 = param_1 + 0x6759;
  if ((*(float *)(param_1 + 0x6762) != 1.5) || (*(float *)((long)param_1 + 0x33b14) != 1.5)) {
    lVar8 = NEON_fmov(0x3fc00000,4);
    param_1[0x6762] = lVar8;
    FUN_0091ada4(plVar2);
  }
  FUN_00f07b18(0x42100000,plVar2,2,plVar1,0);
  FUN_00f07b18(0xc1800000,plVar2,1,param_1,1);
  fVar7 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  fVar7 = fVar7 + -230.0 + -1851.0 + -554.0 + -192.0;
  FUN_00f07b18(0x42400000,param_1 + 0x141,3,param_1,3);
  FUN_00f07b18(0xc2480000,param_1 + 0x141,0,plVar1,0);
  plVar2 = param_1 + 0x167;
  FUN_00a5e0b0(plVar2);
  FUN_00f13f08(0x43480000,(fVar10 + -210.0) / 1.15,plVar2);
  if ((*(float *)(param_1 + 0x170) != 1.15) || (*(float *)((long)param_1 + 0xb84) != 1.15)) {
    param_1[0x170] = 0x3f9333333f933333;
    FUN_0091ada4(plVar2);
  }
  FUN_00f07b18(0x42400000,plVar2,3,param_1,3);
  FUN_00f07b18(0x42300000,plVar2,5,plVar1,5);
  plVar3 = param_1 + 0x66c6;
  FUN_00f07b18(0x41800000,plVar3,0,plVar1,2);
  uVar6 = FUN_00b1bb80(plVar3);
  FUN_00f07e00(uVar6,0,0x41600000,plVar3,plVar2,0);
  plVar3 = param_1 + 0x504;
  uVar6 = (**(code **)(*param_1 + 0x48))(param_1);
  FUN_00f13e54(plVar1);
  FUN_00f13f08(uVar6,plVar3);
  FUN_00f112f0(plVar3,1);
  FUN_00f07b18(0,plVar3,0,plVar1,0);
  plVar3 = param_1 + 0x538;
  FUN_00f13f08(fVar7 * 0.45 + 1851.0,fVar10,plVar3);
  FUN_00a633c8(plVar3);
  FUN_00f07b18(0x42400000,plVar3,3,plVar2,1);
  FUN_00f07b18(0,plVar3,0,plVar1,0);
  plVar2 = param_1 + 0x5e4c;
  FUN_00a5cc90(plVar2);
  FUN_00f07b18(0,plVar2,2,plVar1,2);
  FUN_00f07b18(0xc2400000,plVar2,1,param_1,1);
  plVar4 = param_1 + 0x6397;
  FUN_00a61e98(plVar4);
  FUN_00f080a0(plVar2,1,plVar1,1);
  FUN_00f13f08(fVar7 * 0.55 + 554.0,ABS(fVar10),plVar4);
  FUN_00f07b18(0x42400000,plVar4,3,plVar3,1);
  FUN_00f07b18(0,plVar4,0,plVar1,0);
  FUN_00a5e69c(param_1 + 0x5856);
  FUN_00f07940(0,0x42200000,param_1 + 0x5856,8,plVar1,6);
  if ((*(float *)(param_1 + 8) != fVar13) || (*(float *)((long)param_1 + 0x44) != fVar11)) {
    *(float *)(param_1 + 8) = fVar13;
    *(float *)((long)param_1 + 0x44) = fVar11;
    FUN_0091ada4(param_1);
  }
  if ((*(float *)(param_1 + 0x21) != fVar12) || (*(float *)((long)param_1 + 0x10c) != fVar9)) {
    *(float *)(param_1 + 0x21) = fVar12;
    *(float *)((long)param_1 + 0x10c) = fVar9;
    FUN_0091ada4(param_1 + 0x19);
  }
  if (*(long *)(lVar5 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

