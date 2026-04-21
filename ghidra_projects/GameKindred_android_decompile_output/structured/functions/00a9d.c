// functions/00a9d — 16 functions
#include "libGameKindred.h"




void FUN_00a9d320(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  FUN_00f017e8();
  lVar2 = 0xb360;
  plVar1 = param_1 + 0x11;
  *param_1 = (long)&PTR_FUN_027d1070;
  do {
    FUN_00a9bdb0(plVar1);
    lVar2 = lVar2 + -0x19a0;
    plVar1 = plVar1 + 0x334;
  } while (lVar2 != 0);
  plVar1 = param_1 + 0x11;
  lVar2 = 7;
  do {
    (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
    lVar2 = lVar2 + -1;
    plVar1 = plVar1 + 0x334;
  } while (lVar2 != 0);
  return;
}




void FUN_00a9d3b4(long param_1)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  undefined1 auStack_40 [4];
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(&local_3c,auStack_40);
  uVar2 = FUN_0092ea9c();
  fVar3 = DAT_02be3668;
  if ((uVar2 & 1) == 0) {
    fVar3 = 1.0;
  }
  if ((*(float *)(param_1 + 0x48) != fVar3) || (*(float *)(param_1 + 0x4c) != fVar3)) {
    *(float *)(param_1 + 0x48) = fVar3;
    *(float *)(param_1 + 0x4c) = fVar3;
    FUN_0091ada4(param_1);
  }
  local_3c = local_3c + fVar3 * -576.0;
  if ((*(float *)(param_1 + 0x40) != local_3c) || (*(float *)(param_1 + 0x44) != 0.0)) {
    *(float *)(param_1 + 0x40) = local_3c;
    *(undefined4 *)(param_1 + 0x44) = 0;
    FUN_0091ada4(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a9d488(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x88;
  lVar1 = 7;
  do {
    FUN_00a9c418(param_1);
    lVar1 = lVar1 + -1;
    param_1 = param_1 + 0x19a0;
  } while (lVar1 != 0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a9d4c8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 uint param_9,byte param_10,byte param_11)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  
  uVar2 = 1;
  plVar3 = param_2;
  do {
    plVar5 = plVar3 + 0x11;
    if ((int)plVar3[0x342] != -1) {
      plVar5 = (long *)0x0;
    }
    if (6 < uVar2) break;
    plVar3 = plVar3 + 0x334;
    uVar2 = uVar2 + 1;
  } while (plVar5 == (long *)0x0);
  plVar3 = param_2 + 0x11;
  if (plVar5 != (long *)0x0) {
    plVar3 = plVar5;
  }
  if ((*(float *)(plVar3 + 8) != DAT_03218ef8) || (*(float *)((long)plVar3 + 0x44) != _DAT_03218efc)
     ) {
    plVar3[8] = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4(plVar3);
  }
  FUN_00a9c4ec(param_1,plVar3,param_3,param_4,param_5,param_6,param_7,param_8,param_9 & 1,
               param_10 & 1,0);
  FUN_00a9cc40(plVar3,1,param_11 & 1);
  FUN_00f01a4c(plVar3,1);
  (**(code **)(*param_2 + 0x78))(param_2,plVar3,1);
  uVar4 = 0;
  plVar5 = param_2;
  do {
    if ((plVar3 + -0x11 != plVar5) && ((int)plVar5[0x342] != -1)) {
      FUN_00f01980(plVar5 + 0x11);
      iVar1 = (int)plVar5[0x342] + 1;
      *(int *)(plVar5 + 0x342) = iVar1;
      if (iVar1 == 6) {
        FUN_00a9cc40(plVar5 + 0x11,0,1);
        *(undefined4 *)(plVar5 + 0x342) = 0xffffffff;
        *(uint *)((long)plVar5 + 0x64c) = *(uint *)((long)plVar5 + 0x64c) & 0xffffffef;
        *(uint *)((long)plVar5 + 0x12f4) = *(uint *)((long)plVar5 + 0x12f4) & 0xffffffef;
        *(uint *)((long)plVar5 + 0xcfc) = *(uint *)((long)plVar5 + 0xcfc) & 0xffffffef;
      }
      else {
        FUN_00a9d6bc(param_2,uVar4 & 0xffffffff);
      }
    }
    uVar4 = uVar4 + 1;
    plVar5 = plVar5 + 0x334;
  } while (uVar4 != 7);
  return;
}




void FUN_00a9d6bc(undefined1 param_1 [16],float param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined8 local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  fVar9 = 0.0;
  lVar6 = 7;
  fVar8 = 0.0;
  local_80 = 0;
  lVar7 = param_3;
  do {
    if ((*(int *)(lVar7 + 0x1a10) != -1) &&
       (*(int *)(lVar7 + 0x1a10) < *(int *)(param_3 + (param_4 & 0xffffffff) * 0x19a0 + 0x1a10))) {
      (**(code **)(*(long *)(lVar7 + 0x88) + 0x48))();
      fVar9 = fVar9 + param_2 + 68.0;
      fVar8 = fVar8 + 0.01;
      local_80 = CONCAT44(fVar9,(undefined4)local_80);
    }
    lVar2 = DAT_03210d00;
    lVar6 = lVar6 + -1;
    lVar7 = lVar7 + 0x19a0;
  } while (lVar6 != 0);
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
  FUN_00efcac4(fVar8,puVar4);
  lVar7 = DAT_03210d00;
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
    *(int *)(lVar7 + 0x20014) = *(int *)(lVar7 + 0x20014) + 1;
    FUN_00efdc08(puVar5);
    *(int *)(lVar7 + 0x20020) = *(int *)(lVar7 + 0x20020) + 1;
  }
  FUN_00efdc50(puVar5,&local_80);
  FUN_00efcac4(0x3f400000,puVar5);
  FUN_00efcb24(puVar5,FUN_00a36794);
  lVar7 = param_3 + (param_4 & 0xffffffff) * 0x19a0 + 0x88;
  FUN_00f01980(lVar7);
  FUN_00f02308(lVar7,puVar4,puVar5,0);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a9d920(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 7;
  lVar2 = param_1;
  do {
    if (*(int *)(lVar2 + 0x1a10) != -1) {
      FUN_00a9c338(param_1,lVar2 + 0x88);
    }
    lVar1 = lVar1 + -1;
    lVar2 = lVar2 + 0x19a0;
  } while (lVar1 != 0);
  return;
}




void FUN_00a9d974(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (*(int *)(param_3 + 0x1988) != -1) {
    FUN_00a9c338(param_1,param_3);
    return;
  }
  return;
}




void FUN_00a9d98c(long *param_1)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  
  pvVar1 = operator_new(0xb3e8);
  FUN_00a9d320();
  lVar2 = (long)pvVar1 + 0x88;
  lVar3 = 7;
  DAT_03133aa8 = pvVar1;
  do {
    FUN_00a9c418(lVar2);
    lVar3 = lVar3 + -1;
    lVar2 = lVar2 + 0x19a0;
  } while (lVar3 != 0);
                    /* WARNING: Could not recover jumptable at 0x00a9da00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1,DAT_03133aa8,1);
  return;
}




void FUN_00a9da04(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00f02540(DAT_03133aa8);
  if ((uVar1 & 1) != 0) {
    FUN_00f01a4c(DAT_03133aa8,1);
  }
  if (DAT_03133aa8 != (long *)0x0) {
    (**(code **)(*DAT_03133aa8 + 8))();
  }
  DAT_03133aa8 = (long *)0x0;
  return;
}




void FUN_00a9da50(undefined8 param_1,byte param_2,byte param_3)

{
  if (DAT_03133aa8 != 0) {
    FUN_00a9d4c8(DAT_03133aa8,param_1,0,0,0,0,0,0,param_2 & 1,param_3 & 1);
  }
  return;
}




void FUN_00a9daac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 byte param_5,byte param_6)

{
  if (DAT_03133aa8 != 0) {
    FUN_00a9d4c8(DAT_03133aa8,param_1,param_2,param_3,0,0,param_4,0,param_5 & 1,param_6 & 1);
  }
  return;
}




void FUN_00a9db04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,uint param_7,byte param_8,byte param_9)

{
  if (DAT_03133aa8 != 0) {
    FUN_00a9d4c8(DAT_03133aa8,param_1,param_2,param_3,param_4,param_5,param_6,param_7 & 1,
                 param_8 & 1,param_9 & 1);
  }
  return;
}




void FUN_00a9db64(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = DAT_03133aa8;
  lVar2 = 7;
  lVar3 = DAT_03133aa8;
  do {
    if (*(int *)(lVar3 + 0x1a10) != -1) {
      FUN_00a9c338(lVar1,lVar3 + 0x88);
    }
    lVar2 = lVar2 + -1;
    lVar3 = lVar3 + 0x19a0;
  } while (lVar2 != 0);
  return;
}




void FUN_00a9dbbc(ulong param_1)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  
  FUN_00f01980(DAT_03133aa8);
  lVar1 = DAT_03210d00;
  puVar4 = (ushort *)(DAT_03210d00 + 0x20010);
  uVar2 = *puVar4;
  if ((param_1 & 1) == 0) {
    if (uVar2 == 0xffff) {
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
      *puVar4 = uVar2;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efcad4(puVar3);
      *(undefined ***)puVar3 = &PTR_FUN_02825268;
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00efcac4(0x3f000000,puVar3);
    FUN_00f022a0(DAT_03133aa8,puVar3);
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
      FUN_00efc8e8(puVar4);
      *(undefined ***)puVar4 = &PTR_FUN_02825148;
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
  }
  else {
    if (uVar2 == 0xffff) {
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
      *puVar4 = uVar2;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efc8e8(puVar3);
      *(undefined ***)puVar3 = &PTR_FUN_02825100;
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00f022a0(DAT_03133aa8,puVar3);
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
      FUN_00efcad4(puVar4);
      *(undefined ***)puVar4 = &PTR_FUN_02825220;
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00efcac4(0x3f000000,puVar4);
  }
  FUN_00f022a0(DAT_03133aa8,puVar4);
  return;
}




bool FUN_00a9de6c(void)

{
  return DAT_03133aa8 != 0;
}




void FUN_00a9de80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d0f28;
  FUN_00f13d08(param_1 + 0x31a);
  param_1[0x2fc] = &PTR_FUN_028266f0;
  param_1[0x313] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x316);
  FUN_00f13d08(param_1 + 0x2fc);
  param_1[0x2d8] = &PTR_FUN_028266f0;
  param_1[0x2ef] = &PTR_FUN_02826850;
  param_1[0x23d] = &PTR_FUN_027d5388;
  FUN_00f0a79c(param_1 + 0x2f2);
  FUN_00f13d08(param_1 + 0x2d8);
  param_1[0x2ba] = &PTR_FUN_028266f0;
  param_1[0x2d1] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2d4);
  FUN_00f13d08(param_1 + 0x2ba);
  param_1[0x29c] = &PTR_FUN_028266f0;
  param_1[0x2b3] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2b6);
  FUN_00f13d08(param_1 + 0x29c);
  FUN_00f01868(param_1 + 0x28b);
  FUN_009c825c(param_1 + 0x23d);
  param_1[0x17e] = &PTR_FUN_027d5388;
  param_1[0x219] = &PTR_FUN_028266f0;
  param_1[0x230] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x233);
  FUN_00f13d08(param_1 + 0x219);
  param_1[0x1fb] = &PTR_FUN_028266f0;
  param_1[0x212] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x215);
  FUN_00f13d08(param_1 + 0x1fb);
  param_1[0x1dd] = &PTR_FUN_028266f0;
  param_1[500] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1f7);
  FUN_00f13d08(param_1 + 0x1dd);
  FUN_00f01868(param_1 + 0x1cc);
  FUN_009c825c(param_1 + 0x17e);
  FUN_00f13d08(param_1 + 0x167);
  param_1[0xa8] = &PTR_FUN_027d5388;
  param_1[0x143] = &PTR_FUN_028266f0;
  param_1[0x15a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x15d);
  FUN_00f13d08(param_1 + 0x143);
  param_1[0x125] = &PTR_FUN_028266f0;
  param_1[0x13c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x13f);
  FUN_00f13d08(param_1 + 0x125);
  param_1[0x107] = &PTR_FUN_028266f0;
  param_1[0x11e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x121);
  FUN_00f13d08(param_1 + 0x107);
  FUN_00f01868(param_1 + 0xf6);
  FUN_009c825c(param_1 + 0xa8);
  FUN_00f0d3a4(param_1 + 0x82);
  param_1[100] = &PTR_FUN_028266f0;
  param_1[0x7b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x7e);
  FUN_00f13d08(param_1 + 100);
  param_1[0x46] = &PTR_FUN_028266f0;
  param_1[0x5d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x60);
  FUN_00f13d08(param_1 + 0x46);
  param_1[0x28] = &PTR_FUN_028266f0;
  param_1[0x3f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x42);
  FUN_00f13d08(param_1 + 0x28);
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}

