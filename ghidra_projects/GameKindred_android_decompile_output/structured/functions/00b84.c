// functions/00b84 — 1 functions
#include "libGameKindred.h"




void FUN_00b84ac8(long *param_1)

{
  long *plVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  ushort uVar7;
  ushort *puVar8;
  undefined8 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  plVar6 = param_1 + 0x86d;
  FUN_00f01980(plVar6);
  uVar5 = FUN_00a250a8();
  FUN_00efddc4(0);
  plVar1 = param_1 + 0x1baf;
  FUN_00efcac4((int)*plVar1,uVar5);
  FUN_00efcb24(uVar5,FUN_009a7608);
  FUN_00f022a0(plVar6,uVar5);
  lVar4 = DAT_03210d00;
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
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efc8e8(puVar8);
    *(undefined ***)puVar8 = &PTR_FUN_02825148;
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_00f022a0(plVar6,puVar8);
  lVar4 = DAT_03210d00;
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
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efcad4(puVar8);
    *(undefined ***)puVar8 = &PTR_FUN_027c1a60;
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  puVar2 = (undefined4 *)((long)param_1 + 0xdd7c);
  FUN_00efcac4(*puVar2,puVar8);
  FUN_00f022a0(plVar6,puVar8);
  plVar6 = param_1 + 0xe4;
  FUN_00f01980(plVar6);
  uVar5 = FUN_00a250a8();
  FUN_00efddc4(0);
  FUN_00efcac4((int)*plVar1,uVar5);
  FUN_00efcb24(uVar5,FUN_009a7608);
  FUN_00f022a0(plVar6,uVar5);
  lVar4 = DAT_03210d00;
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
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efc8e8(puVar8);
    *(undefined ***)puVar8 = &PTR_FUN_02825148;
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_00f022a0(plVar6,puVar8);
  lVar4 = DAT_03210d00;
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
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efcad4(puVar8);
    *(undefined ***)puVar8 = &PTR_FUN_027c1a60;
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_00efcac4(*puVar2,puVar8);
  FUN_00f022a0(plVar6,puVar8);
  plVar6 = param_1 + 0xe65;
  FUN_00f01980(plVar6);
  uVar5 = FUN_00a250a8();
  FUN_00efddc4(0);
  FUN_00efcac4((int)*plVar1,uVar5);
  FUN_00efcb24(uVar5,FUN_009a7608);
  FUN_00f022a0(plVar6,uVar5);
  lVar4 = DAT_03210d00;
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
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efc8e8(puVar8);
    *(undefined ***)puVar8 = &PTR_FUN_02825148;
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_00f022a0(plVar6,puVar8);
  lVar4 = DAT_03210d00;
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
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efcad4(puVar8);
    *(undefined ***)puVar8 = &PTR_FUN_027c1a60;
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_00efcac4(*puVar2,puVar8);
  FUN_00f022a0(plVar6,puVar8);
  plVar6 = param_1 + 0x15ec;
  FUN_00f01980(plVar6);
  uVar5 = FUN_00a250a8();
  FUN_00efddc4(0);
  FUN_00efcac4((int)*plVar1,uVar5);
  FUN_00efcb24(uVar5,FUN_009a7608);
  FUN_00f022a0(plVar6,uVar5);
  lVar4 = DAT_03210d00;
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
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efc8e8(puVar8);
    *(undefined ***)puVar8 = &PTR_FUN_02825148;
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_00f022a0(plVar6,puVar8);
  lVar4 = DAT_03210d00;
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
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efcad4(puVar8);
    *(undefined ***)puVar8 = &PTR_FUN_027c1a60;
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_00efcac4(*puVar2,puVar8);
  FUN_00f022a0(plVar6,puVar8);
  FUN_00f01980(param_1 + 0x177e);
  uVar5 = FUN_00a26784();
  local_60 = 0;
  FUN_00efe58c(uVar5,&local_60);
  FUN_00efcac4(0x3dcccccd,uVar5);
  FUN_00f022a0(param_1 + 0x177e,uVar5);
  plVar6 = (long *)param_1[0x1b59];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
    param_1[0x1b59] = 0;
    (**(code **)(*param_1 + 0x150))(param_1);
  }
  plVar6 = param_1 + 0xbe;
  FUN_00f01980(plVar6);
  uVar5 = FUN_00a250a8();
  FUN_00efddc4(0);
  FUN_00efcac4((int)*plVar1,uVar5);
  FUN_00efcb24(uVar5,FUN_009a7608);
  FUN_00f022a0(plVar6,uVar5);
  lVar4 = DAT_03210d00;
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
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efcad4(puVar8);
    *(undefined ***)puVar8 = &PTR_FUN_027c1a60;
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_00efcac4(*puVar2,puVar8);
  FUN_00f022a0(plVar6,puVar8);
  FUN_00afd0d4(param_1 + 0xb25);
  FUN_00b0b978(param_1 + 0x8c2);
  FUN_00b0b978(param_1 + 0x185e);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

