// functions/00acb — 8 functions
#include "libGameKindred.h"




void FUN_00acb104(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  ushort *puVar8;
  undefined8 local_78;
  undefined4 local_70 [2];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar1 = param_1 + 0x140;
  local_70[0] = 0xffffffc8;
  FUN_00f01980(lVar1);
  if ((*(float *)(param_1 + 0x188) != 1.2) || (*(float *)(param_1 + 0x18c) != 1.2)) {
    *(undefined8 *)(param_1 + 0x188) = 0x3f99999a3f99999a;
    FUN_0091ada4(lVar1);
  }
  if ((*(uint *)(param_1 + 0x1c4) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x1c4) = *(uint *)(param_1 + 0x1c4) & 0xffff807f;
    FUN_0091ada4(lVar1);
  }
  FUN_00f0e670(lVar1,local_70,2);
  uVar4 = FUN_00acb440();
  FUN_00efcac4(*(float *)(param_1 + 0x820) * 0.3);
  FUN_00f022a0(lVar1,uVar4);
  uVar4 = FUN_00a250a8();
  FUN_00efddc4(0x3f4ccccd);
  FUN_00f022a0(param_1 + 0x230,uVar4);
  uVar4 = FUN_00a26784();
  local_78 = 0x40547ae140547ae1;
  FUN_00efe58c(uVar4,&local_78);
  FUN_00efcac4(*(float *)(param_1 + 0x820) * 0.06,uVar4);
  FUN_00efcb24(uVar4,FUN_009a71a4);
  uVar5 = FUN_00a250a8();
  FUN_00efddc4(0x3f800000);
  FUN_00efcac4(*(float *)(param_1 + 0x820) * 0.06,uVar5);
  FUN_00efcb24(uVar5,FUN_009a71a4);
  uVar6 = FUN_00acb4f8();
  FUN_00efcea4(uVar6,uVar4,uVar5,0);
  FUN_00f022a0(lVar1,uVar6);
  uVar4 = FUN_00a26784();
  local_78 = 0x3e851eb83e851eb8;
  FUN_00efe58c(uVar4,&local_78);
  FUN_00efcac4(*(float *)(param_1 + 0x820) * 0.34,uVar4);
  FUN_00efcb24(uVar4,FUN_0091aa80);
  uVar5 = FUN_00a250a8();
  FUN_00efddc4(0);
  FUN_00efcac4(*(float *)(param_1 + 0x820) * 0.34,uVar5);
  FUN_00efcb24(uVar5,FUN_0091aa80);
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
    FUN_00efe00c(puVar8);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efe060(puVar8,lVar1,&DAT_01bee7fa,2);
  FUN_00efcac4(*(float *)(param_1 + 0x820) * 0.06,puVar8);
  uVar6 = FUN_00acb4f8();
  FUN_00efcea4(uVar6,uVar4,uVar5,puVar8,0);
  FUN_00f022a0(lVar1,uVar6);
  uVar4 = FUN_00acb440();
  FUN_00efcac4(*(float *)(param_1 + 0x820) * 0.6);
  FUN_00f022a0(lVar1,uVar4);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ushort * FUN_00acb440(void)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  
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
  return puVar3;
}




ushort * FUN_00acb4f8(void)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  
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
    FUN_00efcd98(puVar3);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  return puVar3;
}




void FUN_00acb5a0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  ushort *puVar8;
  undefined8 local_78;
  undefined4 local_70 [2];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar1 = param_1 + 0x230;
  local_70[0] = 0xffffffc8;
  FUN_00f01980(lVar1);
  if ((*(float *)(param_1 + 0x278) != 3.32) || (*(float *)(param_1 + 0x27c) != 3.32)) {
    *(undefined8 *)(param_1 + 0x278) = 0x40547ae140547ae1;
    FUN_0091ada4(lVar1);
  }
  if ((*(uint *)(param_1 + 0x2b4) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x2b4) = *(uint *)(param_1 + 0x2b4) & 0xffff807f;
    FUN_0091ada4(lVar1);
  }
  FUN_00f0e670(lVar1,local_70,2);
  *(uint *)(param_1 + 0x2b4) = *(uint *)(param_1 + 0x2b4) & 0xfffffffb;
  uVar4 = FUN_00acb440();
  FUN_00efcac4(*(float *)(param_1 + 0x820) * 0.414);
  FUN_00f022a0(lVar1,uVar4);
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
    *(undefined ***)puVar8 = &PTR_FUN_02825100;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00f022a0(lVar1,puVar8);
  uVar4 = FUN_00a250a8();
  FUN_00efddc4(0x3f4ccccd);
  FUN_00f022a0(lVar1,uVar4);
  uVar4 = FUN_00a26784();
  local_78 = 0x3e851eb83e851eb8;
  FUN_00efe58c(uVar4,&local_78);
  FUN_00efcac4(*(float *)(param_1 + 0x820) * 0.57,uVar4);
  FUN_00efcb24(uVar4,FUN_0091aa80);
  uVar5 = FUN_00a250a8();
  FUN_00efddc4(0);
  FUN_00efcac4(*(float *)(param_1 + 0x820) * 0.57,uVar5);
  FUN_00efcb24(uVar5,FUN_0091aa80);
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
    FUN_00efe00c(puVar8);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efe060(puVar8,lVar1,&DAT_01bee7fa,2);
  FUN_00efcac4(*(float *)(param_1 + 0x820) * 0.414,puVar8);
  uVar6 = FUN_00acb4f8();
  FUN_00efcea4(uVar6,uVar4,uVar5,puVar8,0);
  FUN_00f022a0(lVar1,uVar6);
  uVar4 = FUN_00acb440();
  FUN_00efcac4(*(float *)(param_1 + 0x820) * 0.316);
  FUN_00f022a0(lVar1,uVar4);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00acb8ec(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  ushort uVar8;
  ushort *puVar9;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar1 = param_1 + 800;
  FUN_00f01980(lVar1);
  if ((*(float *)(param_1 + 0x368) != 0.06) || (*(float *)(param_1 + 0x36c) != 0.06)) {
    *(undefined8 *)(param_1 + 0x368) = 0x3d75c28f3d75c28f;
    FUN_0091ada4(lVar1);
  }
  uVar7 = *(uint *)(param_1 + 0x3a4);
  if ((uVar7 & 0x7f80) != 0x3f80) {
    *(uint *)(param_1 + 0x3a4) = uVar7 & 0xffff807f | 0x3f80;
    FUN_0091ada4(lVar1);
    uVar7 = *(uint *)(param_1 + 0x3a4);
  }
  *(uint *)(param_1 + 0x3a4) = uVar7 & 0xfffffffb;
  uVar4 = FUN_00acb440();
  FUN_00efcac4(*(float *)(param_1 + 0x820) * 0.0);
  FUN_00f022a0(lVar1,uVar4);
  lVar3 = DAT_03210d00;
  uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar8 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar8 * 0x40 + 0x10);
    if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = *puVar9;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efc8e8(puVar9);
    *(undefined ***)puVar9 = &PTR_FUN_02825100;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00f022a0(lVar1,puVar9);
  uVar4 = FUN_00a26784();
  local_70 = 0x40547ae140547ae1;
  FUN_00efe58c(uVar4,&local_70);
  FUN_00efcac4(*(float *)(param_1 + 0x820) * 0.1 + *(float *)(param_1 + 0x820) * 0.17,uVar4);
  FUN_00efcb24(uVar4,FUN_0091aa80);
  uVar5 = FUN_00a250a8();
  FUN_00efddc4(0x3f800000);
  FUN_00efcac4(*(float *)(param_1 + 0x820) * 0.1,uVar5);
  FUN_00efcb24(uVar5,FUN_0091aa80);
  uVar6 = FUN_00a250a8();
  FUN_00efddc4(0);
  FUN_00efcac4(*(float *)(param_1 + 0x820) * 0.17,uVar6);
  FUN_00efcb24(uVar6,FUN_0091aa80);
  lVar3 = DAT_03210d00;
  uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar8 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar8 * 0x40 + 0x10);
    if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = *puVar9;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efd208(puVar9);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efd2dc(puVar9,uVar5,uVar6,0);
  uVar5 = FUN_00acb4f8();
  FUN_00efcea4(uVar5,uVar4,puVar9,0);
  FUN_00f022a0(lVar1,uVar5);
  uVar4 = FUN_00acb440();
  FUN_00efcac4(*(float *)(param_1 + 0x820) * 0.33);
  FUN_00f022a0(lVar1,uVar4);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00acbc2c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  ushort uVar8;
  ushort *puVar9;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar1 = param_1 + 0x410;
  FUN_00f01980(lVar1);
  if ((*(float *)(param_1 + 0x458) != 0.06) || (*(float *)(param_1 + 0x45c) != 0.06)) {
    *(undefined8 *)(param_1 + 0x458) = 0x3d75c28f3d75c28f;
    FUN_0091ada4(lVar1);
  }
  uVar7 = *(uint *)(param_1 + 0x494);
  if ((uVar7 & 0x7f80) != 0x2600) {
    *(uint *)(param_1 + 0x494) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x2600;
    FUN_0091ada4(lVar1);
    uVar7 = *(uint *)(param_1 + 0x494);
  }
  *(uint *)(param_1 + 0x494) = uVar7 & 0xfffffffb;
  uVar4 = FUN_00acb440();
  FUN_00efcac4(*(float *)(param_1 + 0x820) * 0.04);
  FUN_00f022a0(lVar1,uVar4);
  lVar3 = DAT_03210d00;
  uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar8 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar8 * 0x40 + 0x10);
    if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = *puVar9;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efc8e8(puVar9);
    *(undefined ***)puVar9 = &PTR_FUN_02825100;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00f022a0(lVar1,puVar9);
  uVar4 = FUN_00a26784();
  local_70 = 0x40547ae140547ae1;
  FUN_00efe58c(uVar4,&local_70);
  FUN_00efcac4(*(float *)(param_1 + 0x820) * 0.11 + *(float *)(param_1 + 0x820) * 0.34,uVar4);
  FUN_00efcb24(uVar4,FUN_0091aa80);
  uVar5 = FUN_00a250a8();
  FUN_00efddc4(0x3ecccccd);
  FUN_00efcac4(*(float *)(param_1 + 0x820) * 0.11,uVar5);
  FUN_00efcb24(uVar5,FUN_0091aa80);
  uVar6 = FUN_00a250a8();
  FUN_00efddc4(0);
  FUN_00efcac4(*(float *)(param_1 + 0x820) * 0.34,uVar6);
  FUN_00efcb24(uVar6,FUN_0091aa80);
  lVar3 = DAT_03210d00;
  uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar8 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar8 * 0x40 + 0x10);
    if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = *puVar9;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efd208(puVar9);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efd2dc(puVar9,uVar5,uVar6,0);
  uVar5 = FUN_00acb4f8();
  FUN_00efcea4(uVar5,uVar4,puVar9,0);
  FUN_00f022a0(lVar1,uVar5);
  uVar4 = FUN_00acb440();
  FUN_00efcac4(*(float *)(param_1 + 0x820) * 0.1);
  FUN_00f022a0(lVar1,uVar4);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00acbf74(long param_1)

{
  *(uint *)(param_1 + 0x1c4) = *(uint *)(param_1 + 0x1c4) & 0xfffffffb;
  *(uint *)(param_1 + 0x2b4) = *(uint *)(param_1 + 0x2b4) & 0xfffffffb;
  FUN_00acb8ec();
  FUN_00acbc2c(param_1);
  return;
}




void FUN_00acbfb0(long param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ushort uVar8;
  ushort *puVar9;
  ushort *puVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined8 local_98;
  undefined4 local_90;
  float local_8c;
  undefined4 local_88;
  float fStack_84;
  undefined4 local_80 [2];
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  local_80[0] = 0x705e4040;
  fVar12 = *(float *)(param_1 + 0x638);
  lVar1 = param_1 + 0x5f0;
  if ((fVar12 != 1.0) || (fVar12 = *(float *)(param_1 + 0x63c), fVar12 != 1.0)) {
    uVar11 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(param_1 + 0x638) = uVar11;
    FUN_0091ada4(lVar1);
  }
  cVar2 = *(char *)(param_1 + 0x71d);
  FUN_00f0e700(lVar1);
  bVar5 = cVar2 == '\0';
  fVar15 = -0.5;
  if (!bVar5) {
    fVar15 = 0.5;
  }
  fVar12 = fVar12 * fVar15 * 3.0;
  fVar13 = fVar12 + *(float *)(&DAT_01baf2d4 + (ulong)bVar5 * 4);
  fVar16 = -15.0;
  if (!bVar5) {
    fVar16 = 15.0;
  }
  local_88 = 0;
  fStack_84 = fVar13;
  FUN_00f0e700(lVar1);
  local_8c = fVar12 * fVar15 * 3.0 + fVar16;
  local_90 = 0;
  FUN_00f01980(lVar1);
  if ((*(float *)(param_1 + 0x638) != 3.0) || (*(float *)(param_1 + 0x63c) != 3.0)) {
    uVar11 = NEON_fmov(0x40400000,4);
    *(undefined8 *)(param_1 + 0x638) = uVar11;
    FUN_0091ada4(lVar1);
  }
  if ((~*(uint *)(param_1 + 0x674) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x674) = *(uint *)(param_1 + 0x674) | 0x7f80;
    FUN_0091ada4(lVar1);
  }
  if ((*(float *)(param_1 + 0x630) != 0.0) || (*(float *)(param_1 + 0x634) != fVar13)) {
    *(ulong *)(param_1 + 0x630) = CONCAT44(fStack_84,local_88);
    FUN_0091ada4(lVar1);
  }
  *(byte *)(param_1 + 0x6c8) =
       (*(byte *)(param_1 + 0x6c8) & 0xfd | *(char *)(param_1 + 0x71d) << 1) ^ 2;
  *(uint *)(param_1 + 0x674) = *(uint *)(param_1 + 0x674) | 4;
  FUN_00f0e670(lVar1,local_80,2);
  uVar11 = FUN_00acb440();
  FUN_00efcac4(0);
  FUN_00f022a0(lVar1,uVar11);
  uVar11 = FUN_00a26784();
  uVar14 = NEON_fmov(0x40400000,4);
  local_98 = uVar14;
  FUN_00efe58c(uVar11,&local_98);
  FUN_00efcac4(0x3f4ccccd,uVar11);
  FUN_00efcb24(uVar11,FUN_009a7608);
  uVar6 = FUN_00a250a8();
  FUN_00efddc4(0x3f800000);
  FUN_00efcac4(0x3f4ccccd,uVar6);
  FUN_00efcb24(uVar6,FUN_009a7608);
  lVar4 = DAT_03210d00;
  uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar8 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar8 * 0x40 + 0x10);
    if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = *puVar9;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efdc08(puVar9);
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_00efdc50(puVar9,&local_90);
  FUN_00efcac4(0x3f4ccccd,puVar9);
  FUN_00efcb24(puVar9,FUN_00a269a4);
  lVar4 = DAT_03210d00;
  uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar8 == 0xffff) {
    puVar10 = (ushort *)0x0;
  }
  else {
    puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar8 * 0x40 + 0x10);
    if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = *puVar10;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efe00c(puVar10);
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_00efe060(puVar10,lVar1,&DAT_01bee7fa,2);
  FUN_00efcac4(0x3f4ccccd,puVar10);
  FUN_00efcb24(puVar10,FUN_00ab3980);
  uVar7 = FUN_00acb4f8();
  FUN_00efcea4(uVar7,uVar11,uVar6,puVar9,puVar10,0);
  FUN_00f022a0(lVar1,uVar7);
  uVar11 = FUN_00acb440();
  FUN_00efcac4(0);
  FUN_00f022a0(lVar1,uVar11);
  uVar11 = FUN_00a26784();
  local_98 = uVar14;
  FUN_00efe58c(uVar11,&local_98);
  FUN_00efcac4(0x3f800000,uVar11);
  FUN_00efcb24(uVar11,FUN_009a7608);
  uVar6 = FUN_00a250a8();
  FUN_00efddc4(0x3f800000);
  FUN_00efcac4(0x3f800000,uVar6);
  FUN_00efcb24(uVar6,FUN_009a7608);
  lVar4 = DAT_03210d00;
  uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar8 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar8 * 0x40 + 0x10);
    if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = *puVar9;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efdc08(puVar9);
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_00efdc50(puVar9,&local_88);
  FUN_00efcac4(0x3f800000,puVar9);
  FUN_00efcb24(puVar9,FUN_00a269a4);
  lVar4 = DAT_03210d00;
  uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar8 == 0xffff) {
    puVar10 = (ushort *)0x0;
  }
  else {
    puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar8 * 0x40 + 0x10);
    if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = *puVar10;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efe00c(puVar10);
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_00efe060(puVar10,lVar1,local_80,2);
  FUN_00efcac4(0x3f800000,puVar10);
  FUN_00efcb24(puVar10,FUN_00ab3980);
  uVar14 = FUN_00acb4f8();
  FUN_00efcea4(uVar14,uVar11,uVar6,puVar9,puVar10,0);
  FUN_00f022a0(lVar1,uVar14);
  uVar11 = FUN_00acb440();
  FUN_00efcac4(0);
  FUN_00f022a0(lVar1,uVar11);
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

