// functions/00a26 — 16 functions
#include "libGameKindred.h"




void thunk_FUN_00a26590(long param_1)

{
  if ((((uint)*(byte *)(param_1 + 0x1cf2) << 0x10) >> 0x11 & 1) == 0) {
    FUN_00e70314(param_1 + 0x1cd0);
    *(byte *)(param_1 + 0x1cf2) = *(byte *)(param_1 + 0x1cf2) | 1;
    FUN_00a26d94(param_1);
    return;
  }
  FUN_00a25880(param_1);
  return;
}




void thunk_FUN_00a26468(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uStack_38;
  undefined4 uStack_30;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_1 + 0x1cf2) & 2) == 0) {
    if ((*(byte *)(param_1 + 0x1cf2) & 8) != 0) {
      uStack_38 = *(undefined8 *)(param_1 + 0x1a8);
      uStack_30 = *(undefined4 *)(param_1 + 0x1b0);
      uVar2 = FUN_00a21d58(&uStack_38,*(undefined4 *)(param_1 + 0x1ce8));
      if (((uVar2 & 1) != 0) && (uVar2 = FUN_00a25770(param_1), (uVar2 & 1) != 0)) {
        *(byte *)(param_1 + 0x1cf2) = *(byte *)(param_1 + 0x1cf2) & 0xf7;
        FUN_00a25810(param_1);
      }
      uVar2 = FUN_00a24c74(param_1);
      if ((uVar2 & 1) == 0) {
        FUN_00a24bcc(param_1);
      }
    }
  }
  else {
    uVar2 = FUN_00a24c74(param_1);
    if ((uVar2 & 1) == 0) {
      FUN_00a25b44(param_1);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a260b4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  undefined8 uVar9;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  FUN_00f02550();
  uVar3 = FUN_00a26784();
  local_70 = NEON_fmov(0x3fe00000,4);
  FUN_00efe58c(uVar3,&local_70);
  FUN_00efcac4(0x3c23d70a,uVar3);
  uVar4 = FUN_00a26784();
  uVar9 = NEON_fmov(0x3f800000,4);
  local_70 = uVar9;
  FUN_00efe58c(uVar4,&local_70);
  FUN_00efcac4(0x3e800000,uVar4);
  FUN_00efcb24(uVar4,FUN_00a269a4);
  lVar1 = param_1 + 0x1b8;
  FUN_00f01980(lVar1);
  if ((*(float *)(param_1 + 0x200) != 1.0) || (*(float *)(param_1 + 0x204) != 1.0)) {
    *(undefined8 *)(param_1 + 0x200) = uVar9;
    FUN_0091ada4(lVar1);
  }
  FUN_00f02308(lVar1,uVar3,uVar4,0);
  lVar1 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar6);
    *(undefined ***)puVar6 = &PTR_FUN_02825100;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  uVar3 = FUN_00a250a8();
  FUN_00efddc4(0x3ecccccd);
  FUN_00efcac4(0x3c23d70a,uVar3);
  lVar1 = DAT_03210d00;
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
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcad4(puVar7);
    *(undefined ***)puVar7 = &PTR_FUN_02825268;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3e19999a,puVar7);
  lVar1 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar8 = (ushort *)0x0;
  }
  else {
    puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar8;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar8);
    *(undefined ***)puVar8 = &PTR_FUN_02825148;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  lVar1 = param_1 + 0x550;
  FUN_00f01980(lVar1);
  if ((*(uint *)(param_1 + 0x5d4) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x5d4) = *(uint *)(param_1 + 0x5d4) & 0xffff807f;
    FUN_0091ada4(lVar1);
  }
  FUN_00f02308(lVar1,puVar6,uVar3,puVar7,puVar8,0);
  FUN_00a239fc(param_1 + 0xb8,2,0,0);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a26410(long param_1)

{
  FUN_00e70314(param_1 + 0x1cd0);
  *(byte *)(param_1 + 0x1cf2) = *(byte *)(param_1 + 0x1cf2) | 1;
  FUN_00a26d94(param_1);
  return;
}




void FUN_00a2644c(long param_1)

{
  if ((((uint)*(byte *)(param_1 + 0x1cf2) << 0x10) >> 0x11 & 1) == 0) {
    return;
  }
  FUN_00a25880();
  return;
}




void FUN_00a26468(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_1 + 0x1cf2) & 2) == 0) {
    if ((*(byte *)(param_1 + 0x1cf2) & 8) != 0) {
      local_38 = *(undefined8 *)(param_1 + 0x1a8);
      local_30 = *(undefined4 *)(param_1 + 0x1b0);
      uVar2 = FUN_00a21d58(&local_38,*(undefined4 *)(param_1 + 0x1ce8));
      if (((uVar2 & 1) != 0) && (uVar2 = FUN_00a25770(param_1), (uVar2 & 1) != 0)) {
        *(byte *)(param_1 + 0x1cf2) = *(byte *)(param_1 + 0x1cf2) & 0xf7;
        FUN_00a25810(param_1);
      }
      uVar2 = FUN_00a24c74(param_1);
      if ((uVar2 & 1) == 0) {
        FUN_00a24bcc(param_1);
      }
    }
  }
  else {
    uVar2 = FUN_00a24c74(param_1);
    if ((uVar2 & 1) == 0) {
      FUN_00a25b44(param_1);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a26544(long param_1,undefined8 param_2)

{
  FUN_00a25b44();
  FUN_00a24bcc(param_1);
  *(byte *)(param_1 + 0x1cf2) = *(byte *)(param_1 + 0x1cf2) & 0xf7;
  FUN_00f0490c(param_2);
  return;
}




void FUN_00a26590(long param_1)

{
  if ((((uint)*(byte *)(param_1 + 0x1cf2) << 0x10) >> 0x11 & 1) == 0) {
    FUN_00e70314(param_1 + 0x1cd0);
    *(byte *)(param_1 + 0x1cf2) = *(byte *)(param_1 + 0x1cf2) | 1;
    FUN_00a26d94(param_1);
    return;
  }
  FUN_00a25880(param_1);
  return;
}




void FUN_00a265f4(undefined8 param_1)

{
  FUN_00a25b44();
  FUN_00a24bcc(param_1);
  return;
}




void FUN_00a26618(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ushort uVar4;
  ushort *puVar5;
  undefined8 uVar6;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00f02550();
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
  uVar3 = FUN_00a26784();
  local_50 = 0x3faccccd3faccccd;
  FUN_00efe58c(uVar3,&local_50);
  FUN_00efcac4(0x3c23d70a,uVar3);
  lVar1 = param_1 + 0x1b8;
  FUN_00f01980(lVar1);
  if ((*(float *)(param_1 + 0x200) != 1.0) || (*(float *)(param_1 + 0x204) != 1.0)) {
    uVar6 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(param_1 + 0x200) = uVar6;
    FUN_0091ada4(lVar1);
  }
  FUN_00f02308(lVar1,puVar5,uVar3,0);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ushort * FUN_00a26784(void)

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
    FUN_00efe530(puVar3);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  return puVar3;
}




void FUN_00a2682c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ushort uVar4;
  ushort *puVar5;
  float fVar6;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  fVar6 = ((*(float *)(param_1 + 0x204) + -1.0) / 0.35000002) * 0.24 + 0.01;
  if (fVar6 <= 0.01) {
    fVar6 = 0.01;
  }
  uVar3 = FUN_00a26784();
  local_50 = NEON_fmov(0x3f800000,4);
  FUN_00efe58c(uVar3,&local_50);
  FUN_00efcac4(fVar6,uVar3);
  FUN_00efcb24(uVar3,FUN_00a269a4);
  lVar2 = DAT_03210d00;
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
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efca2c(puVar5);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efca7c(puVar5,0);
  FUN_00f01980(param_1 + 0x1b8);
  FUN_00f02308(param_1 + 0x1b8,puVar5,uVar3,0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00a269a4(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  fVar1 = param_1 / param_4 + -1.0;
  return (fVar1 * fVar1 * (fVar1 * 2.70158 + 1.70158) + 1.0) * param_3 + param_2;
}




void FUN_00a269e4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ushort uVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  float fVar8;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  fVar8 = ((*(float *)(param_1 + 0x204) + -1.0) / 0.75) * 0.24 + 0.01;
  if (fVar8 <= 0.01) {
    fVar8 = 0.01;
  }
  uVar3 = FUN_00a26784();
  local_70 = NEON_fmov(0x3f800000,4);
  FUN_00efe58c(uVar3,&local_70);
  FUN_00efcac4(fVar8,uVar3);
  FUN_00efcb24(uVar3,FUN_00a269a4);
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
  FUN_00efca7c(puVar5,0);
  FUN_00f01980(param_1 + 0x1b8);
  FUN_00f02308(param_1 + 0x1b8,puVar5,uVar3,0);
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
    FUN_00efc8e8(puVar5);
    *(undefined ***)puVar5 = &PTR_FUN_02825100;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  uVar3 = FUN_00a250a8();
  FUN_00efddc4(0x3ecccccd);
  FUN_00efcac4(0x3c23d70a,uVar3);
  lVar1 = DAT_03210d00;
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
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcad4(puVar6);
    *(undefined ***)puVar6 = &PTR_FUN_02825268;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3e19999a,puVar6);
  lVar1 = DAT_03210d00;
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
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar7);
    *(undefined ***)puVar7 = &PTR_FUN_02825148;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  lVar1 = param_1 + 0x550;
  FUN_00f01980(lVar1);
  if ((*(uint *)(param_1 + 0x5d4) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x5d4) = *(uint *)(param_1 + 0x5d4) & 0xffff807f;
    FUN_0091ada4(lVar1);
  }
  FUN_00f02308(lVar1,puVar5,uVar3,puVar6,puVar7,0);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a26d94(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  ushort *puVar5;
  ushort *puVar6;
  float fVar7;
  float fVar8;
  undefined4 local_60;
  float local_5c;
  long local_58;
  
  lVar1 = DAT_03210d00;
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
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
    FUN_00efc8e8(puVar5);
    *(undefined ***)puVar5 = &PTR_FUN_02825100;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  local_60 = *(undefined4 *)(param_3 + 0x1888);
  fVar8 = *(float *)(param_3 + 0x188c);
  lVar1 = param_3 + 0x1848;
  FUN_00f13e54(lVar1);
  fVar7 = param_2;
  FUN_00f13e54(param_3 + 0x16a8);
  lVar3 = DAT_03210d00;
  local_5c = fVar8 - (param_2 + fVar7);
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
    FUN_00efdc08(puVar6);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3ecccccd,puVar6);
  FUN_00efdc50(puVar6,&local_60);
  FUN_00f01980(lVar1);
  FUN_00f02308(lVar1,puVar5,puVar6,0);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a26f80(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00f02550();
  uVar3 = FUN_00a26784();
  local_40 = 0x3fcccccd3fcccccd;
  FUN_00efe58c(uVar3,&local_40);
  FUN_00efcac4(0x3d4ccccd,uVar3);
  lVar1 = param_1 + 0xea8;
  FUN_00f01980(lVar1);
  if ((*(float *)(param_1 + 0xef0) != 1.0) || (*(float *)(param_1 + 0xef4) != 1.0)) {
    uVar4 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(param_1 + 0xef0) = uVar4;
    FUN_0091ada4(lVar1);
  }
  FUN_00f02308(lVar1,uVar3,0);
  uVar3 = FUN_00a250a8();
  FUN_00efddc4(0);
  FUN_00efcac4(0x3d8f5c29,uVar3);
  lVar1 = param_1 + 0xf60;
  FUN_00f01980(lVar1);
  if ((~*(uint *)(param_1 + 0xfe4) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0xfe4) = *(uint *)(param_1 + 0xfe4) | 0x7f80;
    FUN_0091ada4(lVar1);
  }
  FUN_00f02308(lVar1,uVar3,0);
  FUN_00a2516c(param_1,1);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

