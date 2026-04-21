// functions/00a28 — 10 functions
#include "libGameKindred.h"




void thunk_FUN_00a287e4(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  lVar2 = (**(code **)(**(long **)(param_1 + 0xbd0) + 0x10))();
  lVar2 = *(long *)(lVar2 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  uVar3 = FUN_00d535b8(lVar2,*(undefined2 *)(param_1 + 0xbe0));
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_00a1f33c();
    FUN_00a19ee4(auStack_48,*(undefined1 *)(param_1 + 0xbe2));
    uVar3 = FUN_00a1a334(uVar4,auStack_48);
    if ((uVar3 & 1) != 0) {
      FUN_00a28180(param_1);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a28138(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_00f13f08(param_3 + 0x418);
  FUN_00f13f08(param_1,param_2,param_3 + 0x2c8);
  FUN_00a27d98(param_3);
  return;
}




void FUN_00a28180(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ushort uVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  undefined8 uVar10;
  undefined8 local_80 [2];
  void *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar5 = FUN_009f1f70(0x1b);
  if ((((uVar5 & 1) != 0) && (uVar5 = FUN_00a2876c(param_1), (uVar5 & 1) != 0)) ||
     ((*(byte *)(param_1 + 0xbe3) & 1) != 0)) {
    lVar1 = param_1 + 0x170;
    if ((*(float *)(param_1 + 0x1b8) != 1.0) || (*(float *)(param_1 + 0x1bc) != 1.0)) {
      uVar10 = NEON_fmov(0x3f800000,4);
      *(undefined8 *)(param_1 + 0x1b8) = uVar10;
      FUN_0091ada4(lVar1);
    }
    FUN_00a1fe4c(*(undefined1 *)(param_1 + 0xbe2),4);
    FUN_00afd20c(param_1 + 0x9f0,"Effect_HUD_AbilityTab_LevelUp");
    lVar2 = DAT_03210d00;
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar7;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00a99abc(puVar7);
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    FUN_008fa54c(local_80,"Effect_HUD_AbilityTab_LevelUp");
    FUN_00a99b4c(puVar7,param_1 + 0x9f0,local_80);
    if (((byte)local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    lVar2 = DAT_03210d00;
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 == 0xffff) {
      puVar8 = (ushort *)0x0;
    }
    else {
      puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar8;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efe530(puVar8);
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    local_80[0] = NEON_fmov(0x3fe00000,4);
    FUN_00efe58c(puVar8,local_80);
    FUN_00efcac4(0x3c23d70a,puVar8);
    lVar2 = DAT_03210d00;
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 == 0xffff) {
      puVar9 = (ushort *)0x0;
    }
    else {
      puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar9;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efe530(puVar9);
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    local_80[0] = NEON_fmov(0x3f800000,4);
    FUN_00efe58c(puVar9,local_80);
    FUN_00efcac4(0x3e800000,puVar9);
    FUN_00efcb24(puVar9,FUN_00a269a4);
    FUN_00f01980(lVar1);
    FUN_00f02308(lVar1,puVar7,puVar8,puVar9,0);
    lVar2 = param_1 + 0x8c0;
    FUN_00f07940(0,0,lVar2,6,lVar1,4);
    uVar3 = *(uint *)(param_1 + 0x944);
    *(uint *)(param_1 + 0x944) = uVar3 | 4;
    if ((~uVar3 & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x944) = uVar3 | 0x7f84;
      FUN_0091ada4(lVar2);
    }
    lVar1 = DAT_03210d00;
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar7;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efdd74(puVar7);
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00efddc4(0,puVar7);
    FUN_00efcac4(0x3f666666,puVar7);
    lVar1 = DAT_03210d00;
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 == 0xffff) {
      puVar8 = (ushort *)0x0;
    }
    else {
      puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar8;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efd6a4(puVar8);
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    local_80[0] = 0xc220000000000000;
    FUN_00efd6ec(puVar8,local_80);
    FUN_00efcac4(0x3f666666,puVar8);
    lVar1 = DAT_03210d00;
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 == 0xffff) {
      puVar9 = (ushort *)0x0;
    }
    else {
      puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar9;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efcd98(puVar9);
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00efcea4(puVar9,puVar7,puVar8,0);
    lVar1 = DAT_03210d00;
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar7;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efc8e8(puVar7);
      *(undefined ***)puVar7 = &PTR_FUN_02825148;
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00f01980(lVar2);
    FUN_00f02308(lVar2,puVar9,puVar7,0);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00a2876c(long param_1)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 0xbd0);
  bVar1 = false;
  if (plVar3 != (long *)0x0) {
    if (*(int *)(param_1 + 0xbd8) == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
      bVar1 = false;
      if ((lVar4 != 0) && (lVar4 = FUN_00d9ec14(), bVar1 = false, lVar4 != 0)) {
        uVar2 = FUN_00d787b0();
        bVar1 = uVar2 == *(ushort *)(param_1 + 0xbe0);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0xbd0) = 0;
      bVar1 = false;
      *(undefined4 *)(param_1 + 0xbd8) = DAT_03214ce8;
    }
  }
  return bVar1;
}




void FUN_00a287e4(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = (**(code **)(**(long **)(param_1 + 0xbd0) + 0x10))();
  lVar2 = *(long *)(lVar2 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  uVar3 = FUN_00d535b8(lVar2,*(undefined2 *)(param_1 + 0xbe0));
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_00a1f33c();
    FUN_00a19ee4(auStack_48,*(undefined1 *)(param_1 + 0xbe2));
    uVar3 = FUN_00a1a334(uVar4,auStack_48);
    if ((uVar3 & 1) != 0) {
      FUN_00a28180(param_1);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a288a0(long param_1)

{
  *(uint *)(param_1 + 0xbe0) = *(uint *)(param_1 + 0xbe0) | 0x2000000;
  return;
}




void FUN_00a288b0(long param_1)

{
  *(uint *)(param_1 + 0xbe0) = *(uint *)(param_1 + 0xbe0) & 0xfdffffff;
  return;
}




void thunk_FUN_00a287e4(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  lVar2 = (**(code **)(**(long **)(param_1 + 0xbd0) + 0x10))();
  lVar2 = *(long *)(lVar2 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  uVar3 = FUN_00d535b8(lVar2,*(undefined2 *)(param_1 + 0xbe0));
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_00a1f33c();
    FUN_00a19ee4(auStack_48,*(undefined1 *)(param_1 + 0xbe2));
    uVar3 = FUN_00a1a334(uVar4,auStack_48);
    if ((uVar3 & 1) != 0) {
      FUN_00a28180(param_1);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a288c4(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  undefined8 uVar9;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar1 = param_1 + 0x170;
  if ((param_2 & 1) == 0) {
    if ((*(float *)(param_1 + 0x1b8) != 1.0) || (*(float *)(param_1 + 0x1bc) != 1.0)) {
      uVar9 = NEON_fmov(0x3f800000,4);
      *(undefined8 *)(param_1 + 0x1b8) = uVar9;
      FUN_0091ada4(lVar1);
    }
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
      FUN_00efdd74(puVar5);
      *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    }
    FUN_00efddc4(0,puVar5);
    FUN_00efcac4(0x3dcccccd,puVar5);
    lVar3 = DAT_03210d00;
    uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar4 == 0xffff) {
      puVar6 = (ushort *)0x0;
    }
    else {
      puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
      if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = *puVar6;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
      *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
      FUN_00efe530(puVar6);
      *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    }
    local_70 = NEON_fmov(0x40800000,4);
    FUN_00efe58c(puVar6,&local_70);
    FUN_00efcac4(0x3e800000,puVar6);
    FUN_00efcb24(puVar6,FUN_009a7624);
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
      FUN_00efcd98(puVar7);
      *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    }
    FUN_00efcea4(puVar7,puVar5,puVar6,0);
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
      FUN_00efc8e8(puVar5);
      *(undefined ***)puVar5 = &PTR_FUN_02825148;
      *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    }
    FUN_00f01980(lVar1);
    FUN_00f02308(lVar1,puVar7,puVar5,0);
    *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) & 0xffffffef;
    goto LAB_00a28f80;
  }
  if ((*(float *)(param_1 + 0x1b8) != 4.0) || (*(float *)(param_1 + 0x1bc) != 4.0)) {
    uVar9 = NEON_fmov(0x40800000,4);
    *(undefined8 *)(param_1 + 0x1b8) = uVar9;
    FUN_0091ada4(lVar1);
  }
  if ((*(uint *)(param_1 + 500) & 0x7f80) != 0) {
    *(uint *)(param_1 + 500) = *(uint *)(param_1 + 500) & 0xffff807f;
    FUN_0091ada4(lVar1);
  }
  lVar3 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar5 = (ushort *)0x0;
LAB_00a28aa0:
    puVar6 = (ushort *)0x0;
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
    FUN_00efc8e8(puVar5);
    *(undefined ***)puVar5 = &PTR_FUN_02825100;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    lVar3 = DAT_03210d00;
    uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar4 == 0xffff) goto LAB_00a28aa0;
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efdd74(puVar6);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efddc4(0x3f800000,puVar6);
  FUN_00efcac4(0x3c23d70a,puVar6);
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
    FUN_00efe530(puVar7);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  local_70 = NEON_fmov(0x3f800000,4);
  FUN_00efe58c(puVar7,&local_70);
  FUN_00efcac4(0x3e800000,puVar7);
  FUN_00efcb24(puVar7,FUN_009a7608);
  lVar3 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar8 = (ushort *)0x0;
  }
  else {
    puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar8;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efcd98(puVar8);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar8,puVar6,puVar7,0);
  FUN_00f01980(lVar1);
  FUN_00f02308(lVar1,puVar5,puVar8,0);
  uVar9 = FUN_00efed6c(0x3e800000);
  lVar1 = DAT_03210d00;
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
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efca2c(puVar5);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efca7c(puVar5,1);
  FUN_00f01980(param_1 + 0xb8);
  FUN_00f02308(param_1 + 0xb8,uVar9,puVar5,0);
LAB_00a28f80:
  FUN_00a27d98(param_1);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a28fbc(long param_1,ulong param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  
  bVar3 = (param_2 & 1) == 0;
  puVar1 = &DAT_0313129c;
  if (bVar3) {
    puVar1 = &DAT_03131448;
  }
  uVar4 = 0xcc;
  if (bVar3) {
    uVar4 = 0x33;
  }
  FUN_00f105ec(param_1 + 0x2c8,puVar1,2);
  FUN_00f0e670(param_1 + 0x5f0,puVar1,2);
  FUN_00f0e670(param_1 + 0x6e0,puVar1,2);
  FUN_00f0e670(param_1 + 2000,puVar1,2);
  uVar2 = *(uint *)(param_1 + 0x854);
  if ((uVar2 >> 7 & 0xff) != uVar4) {
    *(uint *)(param_1 + 0x854) = uVar2 & 0xffff8000 | uVar2 & 0x7f | uVar4 << 7;
    FUN_0091ada4(param_1 + 2000);
  }
  *(uint *)(param_1 + 0x674) = *(uint *)(param_1 + 0x674) | 4;
  *(uint *)(param_1 + 0x764) = *(uint *)(param_1 + 0x764) | 4;
  return;
}

