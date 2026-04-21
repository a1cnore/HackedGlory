// functions/00a2b — 9 functions
#include "libGameKindred.h"




void thunk_FUN_00a2b078(long param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ushort uVar5;
  long lVar6;
  ushort *puVar7;
  ulong uVar8;
  ushort *puVar9;
  ushort *puVar10;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar3 = tpidr_el0;
  lStack_68 = *(long *)(lVar3 + 0x28);
  uVar8 = 0;
  lVar6 = param_1 + 0x1280;
  do {
    FUN_00a2c8ec((float)(uVar8 & 0xffffffff) * 0.001,lVar6);
    uVar8 = uVar8 + 1;
    lVar6 = lVar6 + 0x3980;
  } while (uVar8 != 3);
  bVar2 = *(byte *)(param_1 + 0x10700);
  lVar6 = param_1 + 0xbf00;
  if (bVar2 != 0) {
    lVar6 = param_1 + 0xe3c8;
  }
  *(byte *)(param_1 + 0x10700) = bVar2 ^ 1;
  lVar1 = param_1 + 0xe3c8;
  if (bVar2 != 0) {
    lVar1 = param_1 + 0xbf00;
  }
  FUN_00f01980(lVar6);
  FUN_00f01980(lVar1);
  lVar4 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efd6a4(puVar7);
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  uStack_70 = 0x42c80000;
  FUN_00efd6ec(puVar7,&uStack_70);
  FUN_00efcac4(0x3e19999a,puVar7);
  lVar4 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar9;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efdd74(puVar9);
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_00efddc4(0,puVar9);
  FUN_00efcac4(0x3e19999a,puVar9);
  lVar4 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar10 = (ushort *)0x0;
  }
  else {
    puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar10;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efc8e8(puVar10);
    *(undefined ***)puVar10 = &PTR_FUN_02825148;
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_00efc930(puVar9,puVar10);
  lVar4 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar10 = (ushort *)0x0;
  }
  else {
    puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar10;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efcd98(puVar10);
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar10,puVar7,puVar9,0);
  FUN_00f02308(lVar6,puVar10,0);
  lVar6 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar6 + 0x20014) = *(int *)(lVar6 + 0x20014) + 1;
    FUN_00efc8e8(puVar7);
    *(undefined ***)puVar7 = &PTR_FUN_02825100;
    *(int *)(lVar6 + 0x20020) = *(int *)(lVar6 + 0x20020) + 1;
    lVar6 = DAT_03210d00;
    uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar5 != 0xffff) {
      puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
      if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar5 = 0xffff;
      }
      else {
        uVar5 = *puVar9;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
      *(int *)(lVar6 + 0x20014) = *(int *)(lVar6 + 0x20014) + 1;
      FUN_00efdd74(puVar9);
      *(int *)(lVar6 + 0x20020) = *(int *)(lVar6 + 0x20020) + 1;
      goto LAB_00a2b4d4;
    }
  }
  puVar9 = (ushort *)0x0;
LAB_00a2b4d4:
  FUN_00efddc4(0x3f800000,puVar9);
  FUN_00efcac4(0x3e19999a,puVar9);
  FUN_00efc930(puVar7,puVar9);
  lVar6 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar9;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar6 + 0x20014) = *(int *)(lVar6 + 0x20014) + 1;
    FUN_00efd6a4(puVar9);
    *(int *)(lVar6 + 0x20020) = *(int *)(lVar6 + 0x20020) + 1;
  }
  uStack_70 = 0x42c80000;
  FUN_00efd6ec(puVar9,&uStack_70);
  FUN_00efcac4(0x3e19999a,puVar9);
  FUN_00efcb24(puVar9,FUN_00a2b6d4);
  lVar6 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar10 = (ushort *)0x0;
  }
  else {
    puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar10;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar6 + 0x20014) = *(int *)(lVar6 + 0x20014) + 1;
    FUN_00efcd98(puVar10);
    *(int *)(lVar6 + 0x20020) = *(int *)(lVar6 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar10,puVar7,puVar9,0);
  if ((*(float *)(lVar1 + 0x40) != -100.0) || (*(float *)(lVar1 + 0x44) != 0.0)) {
    *(undefined8 *)(lVar1 + 0x40) = 0xc2c80000;
    FUN_0091ada4(lVar1);
  }
  if ((*(uint *)(lVar1 + 0x84) & 0x7f80) != 0) {
    *(uint *)(lVar1 + 0x84) = *(uint *)(lVar1 + 0x84) & 0xffff807f;
    FUN_0091ada4(lVar1);
  }
  FUN_00f02308(lVar1,puVar10,0);
  if (*(long *)(lVar3 + 0x28) == lStack_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a2b074(void)

{
  return;
}




void FUN_00a2b078(long param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ushort uVar5;
  long lVar6;
  ushort *puVar7;
  ulong uVar8;
  ushort *puVar9;
  ushort *puVar10;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar8 = 0;
  lVar6 = param_1 + 0x1280;
  do {
    FUN_00a2c8ec((float)(uVar8 & 0xffffffff) * 0.001,lVar6);
    uVar8 = uVar8 + 1;
    lVar6 = lVar6 + 0x3980;
  } while (uVar8 != 3);
  bVar2 = *(byte *)(param_1 + 0x10700);
  lVar6 = param_1 + 0xbf00;
  if (bVar2 != 0) {
    lVar6 = param_1 + 0xe3c8;
  }
  *(byte *)(param_1 + 0x10700) = bVar2 ^ 1;
  lVar1 = param_1 + 0xe3c8;
  if (bVar2 != 0) {
    lVar1 = param_1 + 0xbf00;
  }
  FUN_00f01980(lVar6);
  FUN_00f01980(lVar1);
  lVar4 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efd6a4(puVar7);
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  local_70 = 0x42c80000;
  FUN_00efd6ec(puVar7,&local_70);
  FUN_00efcac4(0x3e19999a,puVar7);
  lVar4 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar9;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efdd74(puVar9);
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_00efddc4(0,puVar9);
  FUN_00efcac4(0x3e19999a,puVar9);
  lVar4 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar10 = (ushort *)0x0;
  }
  else {
    puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar10;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efc8e8(puVar10);
    *(undefined ***)puVar10 = &PTR_FUN_02825148;
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_00efc930(puVar9,puVar10);
  lVar4 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar10 = (ushort *)0x0;
  }
  else {
    puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar10;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efcd98(puVar10);
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar10,puVar7,puVar9,0);
  FUN_00f02308(lVar6,puVar10,0);
  lVar6 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar6 + 0x20014) = *(int *)(lVar6 + 0x20014) + 1;
    FUN_00efc8e8(puVar7);
    *(undefined ***)puVar7 = &PTR_FUN_02825100;
    *(int *)(lVar6 + 0x20020) = *(int *)(lVar6 + 0x20020) + 1;
    lVar6 = DAT_03210d00;
    uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar5 != 0xffff) {
      puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
      if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar5 = 0xffff;
      }
      else {
        uVar5 = *puVar9;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
      *(int *)(lVar6 + 0x20014) = *(int *)(lVar6 + 0x20014) + 1;
      FUN_00efdd74(puVar9);
      *(int *)(lVar6 + 0x20020) = *(int *)(lVar6 + 0x20020) + 1;
      goto LAB_00a2b4d4;
    }
  }
  puVar9 = (ushort *)0x0;
LAB_00a2b4d4:
  FUN_00efddc4(0x3f800000,puVar9);
  FUN_00efcac4(0x3e19999a,puVar9);
  FUN_00efc930(puVar7,puVar9);
  lVar6 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar9;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar6 + 0x20014) = *(int *)(lVar6 + 0x20014) + 1;
    FUN_00efd6a4(puVar9);
    *(int *)(lVar6 + 0x20020) = *(int *)(lVar6 + 0x20020) + 1;
  }
  local_70 = 0x42c80000;
  FUN_00efd6ec(puVar9,&local_70);
  FUN_00efcac4(0x3e19999a,puVar9);
  FUN_00efcb24(puVar9,FUN_00a2b6d4);
  lVar6 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar10 = (ushort *)0x0;
  }
  else {
    puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar10;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar6 + 0x20014) = *(int *)(lVar6 + 0x20014) + 1;
    FUN_00efcd98(puVar10);
    *(int *)(lVar6 + 0x20020) = *(int *)(lVar6 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar10,puVar7,puVar9,0);
  if ((*(float *)(lVar1 + 0x40) != -100.0) || (*(float *)(lVar1 + 0x44) != 0.0)) {
    *(undefined8 *)(lVar1 + 0x40) = 0xc2c80000;
    FUN_0091ada4(lVar1);
  }
  if ((*(uint *)(lVar1 + 0x84) & 0x7f80) != 0) {
    *(uint *)(lVar1 + 0x84) = *(uint *)(lVar1 + 0x84) & 0xffff807f;
    FUN_0091ada4(lVar1);
  }
  FUN_00f02308(lVar1,puVar10,0);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00a2b6d4(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  fVar1 = sinf((param_1 / param_4) * 1.5707964);
  return fVar1 * param_3 + param_2;
}




void FUN_00a2b71c(void)

{
  return;
}




void FUN_00a2b720(void *param_1)

{
  FUN_00f01868();
  operator_delete(param_1);
  return;
}




void FUN_00a2b744(void)

{
  return;
}




void FUN_00a2b758(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  FUN_00f017e8();
  *param_1 = &PTR_FUN_027c8f50;
  FUN_00f0e4a8(param_1 + 0x11);
  FUN_00f0d160(param_1 + 0x2f);
  FUN_00f017e8(param_1 + 0x55);
  param_1[0x55] = &PTR_FUN_027c1f80;
  FUN_00f11234(param_1 + 0x66);
  FUN_00ecfd6c(param_1 + 0x9a,0);
  FUN_00f0d160(param_1 + 0x141);
  FUN_00f017e8(param_1 + 0x167);
  param_1[0x167] = &PTR_FUN_027c1f80;
  puVar1 = param_1 + 0x178;
  do {
    FUN_00f0d160(puVar1);
    FUN_00f0d160(puVar1 + 0x26);
    puVar1 = puVar1 + 0x4c;
  } while (puVar1 != param_1 + 0x508);
  FUN_00f017e8(param_1 + 0x508);
  lVar2 = 0;
  param_1[0x508] = &PTR_FUN_027c1f80;
  do {
    FUN_00f0e4a8((long)param_1 + lVar2 + 0x28c8);
    lVar2 = lVar2 + 0xf0;
  } while (lVar2 != 0x4b0);
  FUN_00a277ec(param_1 + 0x5af);
  *(undefined4 *)((long)param_1 + 0x3974) = 0;
  *(undefined1 *)(param_1 + 0x72f) = 0;
  return;
}




void FUN_00a2b854(long *param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined *puVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  float *pfVar11;
  float *pfVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  float *pfVar16;
  float *pfVar17;
  float fVar18;
  float fVar20;
  undefined8 local_170;
  undefined8 local_168;
  void *local_160;
  undefined1 auStack_158 [4];
  undefined1 auStack_154 [4];
  undefined1 auStack_150 [32];
  undefined1 auStack_130 [128];
  long local_b0;
  ulong uVar19;
  
  lVar6 = tpidr_el0;
  local_b0 = *(long *)(lVar6 + 0x28);
  param_1[0x72c] = param_2;
  *(undefined4 *)(param_1 + 0x72e) = param_3;
  lVar14 = *(long *)(param_2 + 0x18);
  while ((lVar14 != 0 && (*(int *)(*(long *)(lVar14 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar14 = *(long *)(lVar14 + 0x20);
  }
  lVar9 = FUN_00d53914(lVar14,param_3);
  param_1[0x72d] = lVar9;
  FUN_00f00298(auStack_154,auStack_158);
  plVar15 = param_1 + 0x11;
  (**(code **)(*param_1 + 0x78))(param_1,plVar15,1);
  plVar1 = param_1 + 0x2f;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar5 = param_1 + 0x508;
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x55,1);
  plVar2 = param_1 + 0x167;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  *(uint *)((long)param_1 + 0xbbc) = *(uint *)((long)param_1 + 0xbbc) & 0xfffffffb;
  puVar7 = PTR_s_build___HUDPartsHero__s_png_02be3470;
  uVar10 = FUN_00d5bc38(param_1[0x72c]);
  FUN_00e6a8a8(auStack_130,puVar7,uVar10);
  if ((*(float *)(param_1 + 0x1b) != 0.0) || (*(float *)((long)param_1 + 0xdc) != 0.4)) {
    param_1[0x1b] = 0x3ecccccd00000000;
    FUN_0091ada4(plVar15);
  }
  if ((*(float *)(param_1 + 0x19) != 0.0) || (*(float *)((long)param_1 + 0xcc) != 72.0)) {
    param_1[0x19] = 0x4290000000000000;
    FUN_0091ada4(plVar15);
  }
  FUN_00f13f08(0x43100000,0x43100000,plVar15);
  FUN_00f0e540(plVar15,auStack_130);
  FUN_00e6a8a8(auStack_150,"ability_icon_%d",*(undefined4 *)(param_1[0x72d] + 100));
  FUN_00f0e578(plVar15,auStack_150);
  if ((*(float *)(param_1 + 0x39) != 0.0) || (*(float *)((long)param_1 + 0x1cc) != 0.4)) {
    param_1[0x39] = 0x3ecccccd00000000;
    FUN_0091ada4(plVar1);
  }
  if ((*(float *)(param_1 + 0x37) != 176.0) || (*(float *)((long)param_1 + 0x1bc) != 88.0)) {
    param_1[0x37] = 0x42b0000043300000;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0db64(0x438e0000,0,0x3f800000,plVar1);
  FUN_00f0d378(plVar1,PTR_s_build___Fonts_Brandon_Regular_40_02be9c48);
  plVar15 = param_1 + 0x66;
  FUN_00f023ec(param_1 + 0x55,plVar15,1);
  plVar3 = param_1 + 0x9a;
  FUN_00f023ec(plVar15,plVar3,1);
  plVar4 = param_1 + 0x141;
  FUN_00ed026c(plVar3,plVar4,1);
  FUN_00f112f0(plVar15,1);
  FUN_00f13f08(0x43f50000,0x43cf8000,plVar15);
  if ((*(float *)(param_1 + 0x6e) != 0.0) || (*(float *)((long)param_1 + 0x374) != 204.0)) {
    param_1[0x6e] = 0x434c000000000000;
    FUN_0091ada4(plVar15);
  }
  FUN_00f0dad0(0x43e60000,plVar4,1);
  FUN_00f0d378(plVar4,PTR_s_build___Fonts_Avenir_Medium_30_f_02be9cf8);
  FUN_00f0d7fc(plVar4,&DAT_031318e4);
  uVar13 = 0;
  pfVar12 = (float *)((long)param_1 + 0xd34);
  *(uint *)((long)param_1 + 0xbbc) = *(uint *)((long)param_1 + 0xbbc) & 0xffffffbf;
  do {
    pfVar17 = pfVar12 + -0x5d;
    FUN_00f023ec(plVar2,pfVar17,1);
    pfVar16 = pfVar12 + -0x11;
    FUN_00f023ec(plVar2,pfVar16,1);
    FUN_00f0d378(pfVar17,PTR_s_build___Fonts_Avenir_Medium_30_f_02be9cf8);
    pfVar11 = pfVar12 + -0x49;
    if ((*pfVar11 != 1.0) || (pfVar12[-0x48] != 0.0)) {
      pfVar11[0] = 1.0;
      pfVar11[1] = 0.0;
      FUN_0091ada4(pfVar17);
    }
    fVar18 = pfVar12[-0x4d];
    uVar19 = (ulong)(uint)fVar18;
    fVar20 = 32.0;
    if (uVar13 < 4) {
      fVar20 = 0.0;
    }
    fVar20 = fVar20 + (float)(uVar13 & 0xffffffff) * 40.0 + 204.0;
    if ((fVar18 != 220.0) || (pfVar12[-0x4c] != fVar20)) {
      pfVar12[-0x4d] = 220.0;
      pfVar12[-0x4c] = fVar20;
      FUN_0091ada4(pfVar17);
    }
    FUN_00f0d7fc(pfVar17,&DAT_031318e8);
    if ((pfVar12[-1] != 236.0) || (*pfVar12 != fVar20)) {
      pfVar12[-1] = 236.0;
      *pfVar12 = fVar20;
      FUN_0091ada4(pfVar16);
    }
    FUN_00f0d378(pfVar16,PTR_s_build___Fonts_Avenir_Medium_30_f_02be9cf8);
    FUN_00f0d7fc(pfVar16,&DAT_031318e4);
    uVar13 = uVar13 + 1;
    pfVar12 = pfVar12 + 0x98;
  } while (uVar13 != 0xc);
  lVar9 = 0;
  do {
    FUN_00f023ec(plVar5,(long)param_1 + lVar9 + 0x28c8,1);
    fVar20 = (float)uVar19;
    lVar9 = lVar9 + 0xf0;
  } while (lVar9 != 0x4b0);
  uVar10 = FUN_00e6ce7c(*(undefined8 *)param_1[0x72d],0);
  FUN_00f0d75c(plVar1,uVar10);
  uVar10 = FUN_00e6ce7c(*(undefined8 *)(param_1[0x72d] + 0x20),0);
  thunk_FUN_00e7051c(&local_168,uVar10);
  FUN_00cb0410(&local_168,param_1[0x72d]);
  FUN_00cb6444(&local_168);
  FUN_00f0d75c(plVar4,&local_168);
  FUN_00ed0680(plVar3,PTR_s_build___HUDPartsCommon_atlas_02be3440,
               PTR_s_scrollbar_button_fill_top_02be3518,PTR_s_scrollbar_button_fill_middle_02be3520,
               PTR_s_scrollbar_button_fill_bottom_02be3528);
  uVar10 = FUN_00f13e54(plVar15);
  FUN_00f0d4e0(plVar4);
  FUN_00ed02d8(uVar10,plVar3);
  FUN_00ed0464(plVar3);
  fVar18 = fVar20;
  FUN_00f13e54(plVar15);
  FUN_00ed04d8(plVar3,0,fVar18 < fVar20);
  FUN_00ed0650(0x3ecccccd,0x3f800000,plVar3);
  FUN_00ed06a4(plVar3,fVar18 < fVar20);
  *(uint *)((long)param_1 + 0x554) = *(uint *)((long)param_1 + 0x554) & 0xffffffbf;
  if (fVar18 < fVar20) {
    FUN_00ed1918(plVar3);
  }
  uVar8 = FUN_00d548e8(lVar14,(int)param_1[0x72e]);
  if (uVar8 != 0) {
    uVar13 = 0;
    plVar15 = param_1 + 0x519;
    do {
      FUN_00f0e540(plVar15,PTR_s_build___HUDPartsCommon_atlas_02be3440);
      FUN_00f0e578(plVar15,"hud_ability_level_dot_dim");
      local_170 = 0x3f0000003f000000;
      (**(code **)(*plVar15 + 0x28))(plVar15,&local_170);
      fVar20 = (float)((double)((float)(uVar13 & 0xffffffff) * 16.0) - (double)(uVar8 - 1) * 8.0);
      if ((*(float *)(plVar15 + 8) != fVar20) || (*(float *)((long)plVar15 + 0x44) != 0.0)) {
        *(float *)(plVar15 + 8) = fVar20;
        *(undefined4 *)((long)plVar15 + 0x44) = 0;
        FUN_0091ada4(plVar15);
      }
      uVar13 = uVar13 + 1;
      plVar15 = plVar15 + 0x1e;
    } while (uVar8 != uVar13);
  }
  if ((*(float *)(param_1 + 0x512) != 0.5) || (*(float *)((long)param_1 + 0x2894) != 0.5)) {
    param_1[0x512] = 0x3f0000003f000000;
    FUN_0091ada4(plVar5);
  }
  if ((*(float *)(param_1 + 0x510) != 72.0) || (*(float *)((long)param_1 + 0x2884) != 168.0)) {
    param_1[0x510] = 0x4328000042900000;
    FUN_0091ada4(plVar5);
  }
  plVar15 = param_1 + 0x5af;
  FUN_00a27d6c(plVar15,param_1[0x72c],(int)param_1[0x72e],param_4);
  if ((*(float *)(param_1 + 0x5b7) != 0.0) || (*(float *)((long)param_1 + 0x2dbc) != -50.0)) {
    *(undefined4 *)(param_1 + 0x5b7) = 0;
    *(undefined4 *)((long)param_1 + 0x2dbc) = 0xc2480000;
    FUN_0091ada4(plVar15);
  }
  FUN_00f13f08(0x43100000,0x427a0000,plVar15);
  *(uint *)((long)param_1 + 0x2dfc) = *(uint *)((long)param_1 + 0x2dfc) & 0xffffffbf | 4;
  (**(code **)(*param_1 + 0x78))(param_1,plVar15,1);
  if (local_160 != (void *)0x0) {
    operator_delete__(local_160);
    local_168 = 0;
    local_160 = (void *)0x0;
  }
  if (*(long *)(lVar6 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

