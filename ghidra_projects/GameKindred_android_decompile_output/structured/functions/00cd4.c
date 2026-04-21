// functions/00cd4 — 14 functions
#include "libGameKindred.h"




undefined8 * FUN_00cd4008(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  FUN_008fce60(param_1 + 2,param_2 + 2);
  FUN_008fce60(param_1 + 5,param_2 + 5);
  FUN_00cd2f88(param_1 + 8,param_2 + 8);
  FUN_008fce60(param_1 + 10,param_2 + 10);
  uVar1 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar1;
  uVar1 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar1;
  uVar1 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar1;
  FUN_008fce60(param_1 + 0x13,param_2 + 0x13);
  uVar1 = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x16] = uVar1;
  uVar1 = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x18] = uVar1;
  uVar1 = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1a] = uVar1;
  FUN_008fce60(param_1 + 0x1c,param_2 + 0x1c);
  param_1[0x1f] = param_2[0x1f];
  FUN_008fce60(param_1 + 0x20,param_2 + 0x20);
  param_1[0x23] = param_2[0x23];
  FUN_00910394(param_1 + 0x24,param_2 + 0x24);
  FUN_00910394(param_1 + 0x26,param_2 + 0x26);
  FUN_00910394(param_1 + 0x28,param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)(param_2 + 0x2a);
  FUN_00910394(param_1 + 0x2b,param_2 + 0x2b);
  FUN_00910394(param_1 + 0x2d,param_2 + 0x2d);
  FUN_008fce60(param_1 + 0x2f,param_2 + 0x2f);
  FUN_008fce60(param_1 + 0x32,param_2 + 0x32);
  return param_1;
}




void FUN_00cd47c8(undefined8 param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    FUN_00cd47d4();
    return;
  }
  FUN_00cd4a48();
  return;
}




void FUN_00cd47d4(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  long local_48;
  
  lVar2 = DAT_03210d00;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
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
    FUN_00efc8e8(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_02825100;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    lVar2 = DAT_03210d00;
    uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar3 != 0xffff) {
      puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
      if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = *puVar5;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efdd74(puVar5);
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      goto LAB_00cd491c;
    }
  }
  puVar5 = (ushort *)0x0;
LAB_00cd491c:
  FUN_00efddc4(0x3f800000,puVar5);
  FUN_00efcac4(0x3e4ccccd,puVar5);
  lVar2 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efcd98(puVar6);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar6,puVar5,0);
  FUN_00f01980(param_3);
  FUN_00f02308(param_3,puVar4,puVar6,0);
  local_58 = FUN_00f13e54(param_3 + 0x1718);
  local_50 = 0xffffffff;
  uStack_54 = param_2;
  FUN_00ab6588(param_3 + 0x3b88,1,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cd4a48(long param_1)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  lVar2 = DAT_03210d00;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
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
    FUN_00efdd74(puVar4);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efddc4(0,puVar4);
  FUN_00efcac4(0x3ecccccd,puVar4);
  FUN_00efcb24(puVar4,FUN_009a7608);
  lVar2 = DAT_03210d00;
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
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efc8e8(puVar5);
    *(undefined ***)puVar5 = &PTR_FUN_02825148;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00f01980(param_1);
  FUN_00f02308(param_1,puVar4,puVar5,0);
  lVar2 = DAT_03210d00;
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
    FUN_00efdd74(puVar4);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efddc4(0,puVar4);
  FUN_00efcac4(0x3ecccccd,puVar4);
  FUN_00efcb24(puVar4,FUN_009a7608);
  FUN_00f01980(param_1 + 0x770);
  FUN_00f022a0(param_1 + 0x770,puVar4);
  local_68 = 0;
  local_60 = 0xff000000;
  FUN_00ab6588(param_1 + 0x3b88,0,&local_68);
  if ((~*(uint *)(param_1 + 0x166c) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x166c) = *(uint *)(param_1 + 0x166c) | 0x7f80;
    FUN_0091ada4(param_1 + 0x15e8);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cd4d1c(long param_1)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  
  lVar1 = param_1 + 0x770;
  FUN_00af6c14(lVar1);
  lVar2 = DAT_03210d00;
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
    FUN_00efdd74(puVar4);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efddc4(0x3f800000,puVar4);
  FUN_00efcac4(0x3ecccccd,puVar4);
  FUN_00efcb24(puVar4,FUN_009a7624);
  FUN_00f01980(lVar1);
  FUN_00f022a0(lVar1,puVar4);
  FUN_00cd4128(param_1);
  return;
}




void FUN_00cd4e20(long param_1)

{
  FUN_00cd4d1c(param_1 + -0x88);
  return;
}




void thunk_FUN_00cd4a48(long param_1)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined8 uStack_68;
  undefined4 uStack_60;
  long lStack_58;
  
  lVar2 = DAT_03210d00;
  lVar1 = tpidr_el0;
  lStack_58 = *(long *)(lVar1 + 0x28);
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
    FUN_00efdd74(puVar4);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efddc4(0,puVar4);
  FUN_00efcac4(0x3ecccccd,puVar4);
  FUN_00efcb24(puVar4,FUN_009a7608);
  lVar2 = DAT_03210d00;
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
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efc8e8(puVar5);
    *(undefined ***)puVar5 = &PTR_FUN_02825148;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00f01980(param_1);
  FUN_00f02308(param_1,puVar4,puVar5,0);
  lVar2 = DAT_03210d00;
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
    FUN_00efdd74(puVar4);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efddc4(0,puVar4);
  FUN_00efcac4(0x3ecccccd,puVar4);
  FUN_00efcb24(puVar4,FUN_009a7608);
  FUN_00f01980(param_1 + 0x770);
  FUN_00f022a0(param_1 + 0x770,puVar4);
  uStack_68 = 0;
  uStack_60 = 0xff000000;
  FUN_00ab6588(param_1 + 0x3b88,0,&uStack_68);
  if ((~*(uint *)(param_1 + 0x166c) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x166c) = *(uint *)(param_1 + 0x166c) | 0x7f80;
    FUN_0091ada4(param_1 + 0x15e8);
  }
  if (*(long *)(lVar1 + 0x28) == lStack_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00cd4e40(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_UNLOCK_PROGRESSIVE_REWARD_CHEST");
  FUN_00f048e0(auStack_48,uVar2,param_1 + 0x5f78);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00cd4eb4(long param_1)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  
  FUN_00f01980(param_1 + 0x15e8);
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
    FUN_00efdd74(puVar3);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3e19999a,puVar3);
  FUN_00efddc4(0,puVar3);
  FUN_00f022a0(param_1 + 0x15e8,puVar3);
  return;
}




void thunk_FUN_00cd4f94(long param_1)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  
  param_1 = param_1 + 0x15e8;
  FUN_00f01980(param_1);
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
  FUN_00efcac4(0x3f000000,puVar3);
  FUN_00f022a0(param_1,puVar3);
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
    FUN_00efdd74(puVar3);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3fa00000,puVar3);
  FUN_00efddc4(0x3f800000,puVar3);
  FUN_00f022a0(param_1,puVar3);
  return;
}




void thunk_FUN_00cd4a48(long param_1)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined8 uStack_68;
  undefined4 uStack_60;
  long lStack_58;
  
  lVar2 = DAT_03210d00;
  lVar1 = tpidr_el0;
  lStack_58 = *(long *)(lVar1 + 0x28);
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
    FUN_00efdd74(puVar4);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efddc4(0,puVar4);
  FUN_00efcac4(0x3ecccccd,puVar4);
  FUN_00efcb24(puVar4,FUN_009a7608);
  lVar2 = DAT_03210d00;
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
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efc8e8(puVar5);
    *(undefined ***)puVar5 = &PTR_FUN_02825148;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00f01980(param_1);
  FUN_00f02308(param_1,puVar4,puVar5,0);
  lVar2 = DAT_03210d00;
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
    FUN_00efdd74(puVar4);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efddc4(0,puVar4);
  FUN_00efcac4(0x3ecccccd,puVar4);
  FUN_00efcb24(puVar4,FUN_009a7608);
  FUN_00f01980(param_1 + 0x770);
  FUN_00f022a0(param_1 + 0x770,puVar4);
  uStack_68 = 0;
  uStack_60 = 0xff000000;
  FUN_00ab6588(param_1 + 0x3b88,0,&uStack_68);
  if ((~*(uint *)(param_1 + 0x166c) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x166c) = *(uint *)(param_1 + 0x166c) | 0x7f80;
    FUN_0091ada4(param_1 + 0x15e8);
  }
  if (*(long *)(lVar1 + 0x28) == lStack_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cd4e40(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_UNLOCK_PROGRESSIVE_REWARD_CHEST");
  FUN_00f048e0(auStack_48,uVar2,param_1 + 0x5f78);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cd4eb4(long param_1)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  
  FUN_00f01980(param_1 + 0x15e8);
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
    FUN_00efdd74(puVar3);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3e19999a,puVar3);
  FUN_00efddc4(0,puVar3);
  FUN_00f022a0(param_1 + 0x15e8,puVar3);
  return;
}




void FUN_00cd4f94(long param_1)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  
  param_1 = param_1 + 0x15e8;
  FUN_00f01980(param_1);
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
  FUN_00efcac4(0x3f000000,puVar3);
  FUN_00f022a0(param_1,puVar3);
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
    FUN_00efdd74(puVar3);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3fa00000,puVar3);
  FUN_00efddc4(0x3f800000,puVar3);
  FUN_00f022a0(param_1,puVar3);
  return;
}

