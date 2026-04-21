// functions/00ba4 — 5 functions
#include "libGameKindred.h"




void FUN_00ba400c(long *param_1)

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
  if ((*(float *)(param_1 + 0xcacc) != fVar4) || (*(float *)((long)param_1 + 0x65664) != fVar3)) {
    *(float *)(param_1 + 0xcacc) = fVar4;
    *(float *)((long)param_1 + 0x65664) = fVar3;
    FUN_0091ada4(param_1 + 0xcac4);
    fVar3 = local_40 * 0.5;
  }
  if ((*(float *)(param_1 + 0xd28f) != fVar4) || (*(float *)((long)param_1 + 0x6947c) != fVar3)) {
    *(float *)(param_1 + 0xd28f) = fVar4;
    *(float *)((long)param_1 + 0x6947c) = fVar3;
    FUN_0091ada4(param_1 + 0xd287);
  }
  if (*(float *)((long)param_1 + 0x656ec) != 0.0) {
    *(float *)((long)param_1 + 0x656ec) = 0.0;
    FUN_0091ada4(param_1 + 0xcad5);
  }
  if (*(float *)((long)param_1 + 0x69504) != 100.0) {
    *(float *)((long)param_1 + 0x69504) = 100.0;
    FUN_0091ada4(param_1 + 0xd298);
  }
  (**(code **)(*param_1 + 0x150))(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ba4198(undefined8 param_1,long param_2,uint param_3,ulong param_4,ulong param_5)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  bool bVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ushort uVar12;
  ushort *puVar13;
  undefined4 uVar14;
  
  if ((((param_3 ^ 1) & 1) == 0) && ((param_4 & 1) != 0)) {
    FUN_009580b8();
    FUN_00962c7c();
  }
  uVar7 = FUN_0093d920();
  if ((((param_3 ^ 1 | uVar7 ^ 0xffffffff) & 1) == 0) && ((param_5 & 1) != 0)) {
    FUN_009049a0();
  }
  uVar8 = FUN_00efed6c(param_1);
  bVar6 = (param_3 & 1) == 0;
  uVar2 = 0x3eb33333;
  if (bVar6) {
    uVar2 = 0x3e19999a;
  }
  uVar14 = 0x3f800000;
  if (bVar6) {
    uVar14 = 0;
  }
  uVar3 = 0x3f800000;
  if (bVar6) {
    uVar3 = 0x3f666666;
  }
  uVar4 = 0;
  if (bVar6) {
    uVar4 = 0xc2c80000;
  }
  uVar9 = FUN_00efee28(uVar14,uVar2,FUN_0091aa80);
  uVar10 = FUN_00eff63c(uVar3,uVar3,uVar2,FUN_0091aa80);
  uVar11 = FUN_00efef08(0,uVar4,uVar2,FUN_0091aa80);
  lVar1 = DAT_03210d00;
  uVar12 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar12 == 0xffff) {
    puVar13 = (ushort *)0x0;
  }
  else {
    puVar13 = (ushort *)(DAT_03210d00 + (ulong)uVar12 * 0x40 + 0x10);
    if (uVar12 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar12 = 0xffff;
    }
    else {
      uVar12 = *puVar13;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar12;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcd98(puVar13);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar13,uVar9,uVar11,uVar10,0);
  lVar1 = param_2 + 0x656a8;
  FUN_00f01980(lVar1);
  FUN_00f02308(lVar1,uVar8,puVar13,0);
  lVar5 = DAT_03210d00;
  if ((param_3 & 1) != 0) {
    *(uint *)(param_2 + 0x6572c) = *(uint *)(param_2 + 0x6572c) | 4;
    *(uint *)(param_2 + 0x404) = *(uint *)(param_2 + 0x404) & 0xfffffffb;
    return;
  }
  uVar12 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar12 == 0xffff) {
    puVar13 = (ushort *)0x0;
  }
  else {
    puVar13 = (ushort *)(DAT_03210d00 + (ulong)uVar12 * 0x40 + 0x10);
    if (uVar12 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar12 = 0xffff;
    }
    else {
      uVar12 = *puVar13;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar12;
    *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
    FUN_00efc8e8(puVar13);
    *(undefined ***)puVar13 = &PTR_FUN_02825148;
    *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
  }
  FUN_00f022a0(lVar1,puVar13);
  return;
}




void FUN_00ba4458(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e9078;
  param_1[0x6d] = &PTR_FUN_027e9238;
  FUN_00ba4f20();
  if ((void *)param_1[0xf469] != (void *)0x0) {
    operator_delete__((void *)param_1[0xf469]);
    param_1[0xf469] = 0;
    param_1[0xf468] = 0;
  }
  if ((*(byte *)(param_1 + 0xf465) & 1) != 0) {
    operator_delete((void *)param_1[0xf467]);
  }
  if ((*(byte *)(param_1 + 0xf462) & 1) != 0) {
    operator_delete((void *)param_1[0xf464]);
  }
  FUN_00b27cec(param_1 + 0xf444);
  param_1[0xf3b8] = &PTR_FUN_027dd960;
  param_1[0xf417] = &PTR_FUN_027d3cc8;
  param_1[0xf42e] = &PTR_FUN_027d3e40;
  if ((void *)param_1[0xf440] != (void *)0x0) {
    operator_delete__((void *)param_1[0xf440]);
    param_1[0xf440] = 0;
    param_1[0xf43f] = 0;
  }
  FUN_00f0d3a4(param_1 + 0xf417);
  FUN_00f0d3a4(param_1 + 0xf3f1);
  FUN_00f01868(param_1 + 0xf3e0);
  FUN_00f13d08(param_1 + 0xf3c9);
  FUN_00f01868(param_1 + 0xf3b8);
  param_1[0xf39a] = &PTR_FUN_028266f0;
  param_1[0xf3b1] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xf3b4);
  FUN_00f13d08(param_1 + 0xf39a);
  FUN_00f0d3a4(param_1 + 0xf374);
  FUN_00f13d08(param_1 + 0xf35d);
  FUN_009c7fa8(param_1 + 0xf0a5);
  param_1[0xf087] = &PTR_FUN_028266f0;
  param_1[0xf09e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xf0a1);
  FUN_00f13d08(param_1 + 0xf087);
  FUN_00f0d3a4(param_1 + 0xf061);
  FUN_00f13d08(param_1 + 0xf04a);
  FUN_009c7fa8(param_1 + 0xed92);
  FUN_009c7fa8(param_1 + 0xeada);
  FUN_009c7fa8(param_1 + 0xe822);
  FUN_00f01868(param_1 + 0xe811);
  FUN_00f0d3a4(param_1 + 0xe7eb);
  param_1[0xe7cd] = &PTR_FUN_028266f0;
  param_1[0xe7e4] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xe7e7);
  FUN_00f13d08(param_1 + 0xe7cd);
  FUN_00f13d08(param_1 + 0xe7b6);
  FUN_00f0d3a4(param_1 + 0xe790);
  param_1[0xe772] = &PTR_FUN_028266f0;
  param_1[0xe789] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xe78c);
  FUN_00f13d08(param_1 + 0xe772);
  FUN_00f13d08(param_1 + 0xe75b);
  FUN_00f0d3a4(param_1 + 0xe735);
  FUN_00f0d3a4(param_1 + 0xe70f);
  param_1[0xe370] = &PTR_FUN_027d5508;
  if ((void *)param_1[0xe709] != (void *)0x0) {
    operator_delete__((void *)param_1[0xe709]);
    param_1[0xe709] = 0;
    param_1[0xe708] = 0;
  }
  if ((void *)param_1[0xe707] != (void *)0x0) {
    operator_delete__((void *)param_1[0xe707]);
    param_1[0xe707] = 0;
    param_1[0xe706] = 0;
  }
  if ((void *)param_1[0xe705] != (void *)0x0) {
    operator_delete__((void *)param_1[0xe705]);
    param_1[0xe705] = 0;
    param_1[0xe704] = 0;
  }
  FUN_00f0d3a4(param_1 + 0xe6de);
  FUN_00f13d08(param_1 + 0xe6c3);
  FUN_00f13d08(param_1 + 0xe6a8);
  FUN_009c7fa8(param_1 + 0xe3f0);
  FUN_00abd150(param_1 + 0xe370);
  FUN_00f0d3a4(param_1 + 0xe34a);
  FUN_00f0d3a4(param_1 + 0xe324);
  param_1[0xdf85] = &PTR_FUN_027d5508;
  if ((void *)param_1[0xe31e] != (void *)0x0) {
    operator_delete__((void *)param_1[0xe31e]);
    param_1[0xe31e] = 0;
    param_1[0xe31d] = 0;
  }
  if ((void *)param_1[0xe31c] != (void *)0x0) {
    operator_delete__((void *)param_1[0xe31c]);
    param_1[0xe31c] = 0;
    param_1[0xe31b] = 0;
  }
  if ((void *)param_1[0xe31a] != (void *)0x0) {
    operator_delete__((void *)param_1[0xe31a]);
    param_1[0xe31a] = 0;
    param_1[0xe319] = 0;
  }
  FUN_00f0d3a4(param_1 + 0xe2f3);
  FUN_00f13d08(param_1 + 0xe2d8);
  FUN_00f13d08(param_1 + 0xe2bd);
  FUN_009c7fa8(param_1 + 0xe005);
  FUN_00abd150(param_1 + 0xdf85);
  param_1[0xdbe6] = &PTR_FUN_027d5508;
  if ((void *)param_1[0xdf7f] != (void *)0x0) {
    operator_delete__((void *)param_1[0xdf7f]);
    param_1[0xdf7f] = 0;
    param_1[0xdf7e] = 0;
  }
  if ((void *)param_1[0xdf7d] != (void *)0x0) {
    operator_delete__((void *)param_1[0xdf7d]);
    param_1[0xdf7d] = 0;
    param_1[0xdf7c] = 0;
  }
  if ((void *)param_1[0xdf7b] != (void *)0x0) {
    operator_delete__((void *)param_1[0xdf7b]);
    param_1[0xdf7b] = 0;
    param_1[0xdf7a] = 0;
  }
  FUN_00f0d3a4(param_1 + 0xdf54);
  FUN_00f13d08(param_1 + 0xdf39);
  FUN_00f13d08(param_1 + 0xdf1e);
  FUN_009c7fa8(param_1 + 0xdc66);
  FUN_00abd150(param_1 + 0xdbe6);
  FUN_00f0d3a4(param_1 + 0xdbc0);
  FUN_00f0d3a4(param_1 + 0xdb9a);
  param_1[0xd7fb] = &PTR_FUN_027d5508;
  if ((void *)param_1[0xdb94] != (void *)0x0) {
    operator_delete__((void *)param_1[0xdb94]);
    param_1[0xdb94] = 0;
    param_1[0xdb93] = 0;
  }
  if ((void *)param_1[0xdb92] != (void *)0x0) {
    operator_delete__((void *)param_1[0xdb92]);
    param_1[0xdb92] = 0;
    param_1[0xdb91] = 0;
  }
  if ((void *)param_1[0xdb90] != (void *)0x0) {
    operator_delete__((void *)param_1[0xdb90]);
    param_1[0xdb90] = 0;
    param_1[0xdb8f] = 0;
  }
  FUN_00f0d3a4(param_1 + 0xdb69);
  FUN_00f13d08(param_1 + 0xdb4e);
  FUN_00f13d08(param_1 + 0xdb33);
  FUN_009c7fa8(param_1 + 0xd87b);
  FUN_00abd150(param_1 + 0xd7fb);
  param_1[0xd45c] = &PTR_FUN_027d5508;
  if ((void *)param_1[0xd7f5] != (void *)0x0) {
    operator_delete__((void *)param_1[0xd7f5]);
    param_1[0xd7f5] = 0;
    param_1[0xd7f4] = 0;
  }
  if ((void *)param_1[0xd7f3] != (void *)0x0) {
    operator_delete__((void *)param_1[0xd7f3]);
    param_1[0xd7f3] = 0;
    param_1[0xd7f2] = 0;
  }
  if ((void *)param_1[0xd7f1] != (void *)0x0) {
    operator_delete__((void *)param_1[0xd7f1]);
    param_1[0xd7f1] = 0;
    param_1[0xd7f0] = 0;
  }
  FUN_00f0d3a4(param_1 + 0xd7ca);
  FUN_00f13d08(param_1 + 0xd7af);
  FUN_00f13d08(param_1 + 0xd794);
  FUN_009c7fa8(param_1 + 0xd4dc);
  FUN_00abd150(param_1 + 0xd45c);
  FUN_00f0d3a4(param_1 + 0xd436);
  FUN_00f0d3a4(param_1 + 0xd410);
  FUN_00f01868(param_1 + 0xd3ff);
  param_1[0xd3e1] = &PTR_FUN_028266f0;
  param_1[0xd3f8] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xd3fb);
  FUN_00f13d08(param_1 + 0xd3e1);
  param_1[0xd3c3] = &PTR_FUN_028266f0;
  param_1[0xd3da] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xd3dd);
  FUN_00f13d08(param_1 + 0xd3c3);
  FUN_00f0d3a4(param_1 + 0xd39d);
  param_1[0xd37f] = &PTR_FUN_028266f0;
  param_1[0xd396] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xd399);
  FUN_00f13d08(param_1 + 0xd37f);
  param_1[0xd361] = &PTR_FUN_028266f0;
  param_1[0xd378] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xd37b);
  FUN_00f13d08(param_1 + 0xd361);
  FUN_00f01868(param_1 + 0xd350);
  FUN_00ed00e0(param_1 + 0xd2a9);
  FUN_00f01868(param_1 + 0xd298);
  FUN_00f01868(param_1 + 0xd287);
  FUN_00ba4fb4(param_1 + 0xcf33);
  if ((void *)param_1[0xcf32] != (void *)0x0) {
    operator_delete__((void *)param_1[0xcf32]);
    param_1[0xcf32] = 0;
    param_1[0xcf31] = 0;
  }
  param_1[0xcf13] = &PTR_FUN_028266f0;
  param_1[0xcf2a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xcf2d);
  FUN_00f13d08(param_1 + 0xcf13);
  FUN_00ed00e0(param_1 + 0xce6c);
  FUN_00f13d08(param_1 + 0xce55);
  param_1[0xce37] = &PTR_FUN_028266f0;
  param_1[0xce4e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xce51);
  FUN_00f13d08(param_1 + 0xce37);
  FUN_00f0d3a4(param_1 + 0xce11);
  param_1[0xcdf3] = &PTR_FUN_028266f0;
  param_1[0xce0a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xce0d);
  FUN_00f13d08(param_1 + 0xcdf3);
  param_1[0xcdd5] = &PTR_FUN_028266f0;
  param_1[0xcdec] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xcdef);
  FUN_00f13d08(param_1 + 0xcdd5);
  FUN_009c7fa8(param_1 + 0xcb1d);
  FUN_00f0d3a4(param_1 + 0xcaf7);
  FUN_00f01868(param_1 + 0xcae6);
  FUN_00f01868(param_1 + 0xcad5);
  FUN_00f01868(param_1 + 0xcac4);
  FUN_00f13d08(param_1 + 0xcaad);
  FUN_00ba5060(param_1 + 0xca95);
  param_1[0xca77] = &PTR_FUN_028266f0;
  param_1[0xca8e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xca91);
  FUN_00f13d08(param_1 + 0xca77);
  FUN_00f13d08(param_1 + 0xca60);
  FUN_00b49538(param_1 + 0x70);
  FUN_00948d58(param_1 + 0x6d);
  FUN_00b8e790(param_1);
  return;
}




void FUN_00ba4f20(long param_1)

{
  uint *puVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  
  puVar1 = (uint *)(param_1 + 0x67988);
  uVar4 = *puVar1;
  plVar2 = (long *)(param_1 + 0x67990);
  if (uVar4 != 0) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      plVar3 = *(long **)(*plVar2 + lVar6);
      if (plVar3 == (long *)0x0) {
        puVar5 = (undefined8 *)(*plVar2 + uVar7 * 8);
      }
      else {
        (**(code **)(*plVar3 + 8))();
        uVar4 = *puVar1;
        puVar5 = (undefined8 *)(*plVar2 + lVar6);
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 8;
      *puVar5 = 0;
    } while (uVar7 < uVar4);
  }
  if (*plVar2 != 0) {
    *puVar1 = 0;
  }
  return;
}




void FUN_00ba4fb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e95d0;
  if ((*(byte *)(param_1 + 0x351) & 1) != 0) {
    operator_delete((void *)param_1[0x353]);
  }
  FUN_009c7fa8(param_1 + 0x99);
  FUN_00f0d3a4(param_1 + 0x73);
  FUN_00f0d3a4(param_1 + 0x4d);
  param_1[0x2f] = &PTR_FUN_028266f0;
  param_1[0x46] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x49);
  FUN_00f13d08(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_028266f0;
  param_1[0x28] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2b);
  FUN_00f13d08(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}

