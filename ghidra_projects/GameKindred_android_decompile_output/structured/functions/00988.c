// functions/00988 — 25 functions
#include "libGameKindred.h"




void FUN_00988108(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5)

{
  undefined8 uVar1;
  
  FUN_0098823c();
  FUN_00986730(param_1);
  FUN_009867f0(param_1);
  uVar1 = FUN_009874f4();
  FUN_00d0aaac(param_1,uVar1);
  FUN_00d188dc(uVar1,param_2);
  uVar1 = FUN_009875f4();
  FUN_00d0aaac(param_1,uVar1);
  FUN_00999e0c(uVar1,param_3,(param_5 & 1) != 0);
  FUN_00d0aa9c(param_1);
  FUN_009867f0(param_1);
  FUN_00986830(param_1);
  uVar1 = FUN_009874f4();
  FUN_00d0aaac(param_1,uVar1);
  FUN_00d188dc(uVar1,param_2);
  FUN_00d0aa9c(param_1);
  uVar1 = FUN_009875f4();
  FUN_00d0aaac(param_1,uVar1);
  FUN_00999e0c(uVar1,param_4,(param_5 & 1) != 0);
  FUN_00d0aa9c(param_1);
  FUN_00d0aa9c(param_1);
  FUN_00d0aa9c(param_1);
  return;
}




undefined8 FUN_0098823c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00996260();
  FUN_00d0aaac(param_1,uVar1);
  FUN_00d0aa94(param_1,uVar1);
  return uVar1;
}




void FUN_0098827c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  FUN_0098823c();
  FUN_00986730(param_1);
  FUN_009867f0(param_1);
  uVar1 = FUN_009874f4();
  FUN_00d0aaac(param_1,uVar1);
  FUN_00d188dc(uVar1,param_2);
  uVar1 = FUN_00987cfc();
  FUN_00d0aaac(param_1,uVar1);
  FUN_0099a090(uVar1,param_3);
  FUN_00d0aa9c(param_1);
  FUN_009867f0(param_1);
  FUN_00986830(param_1);
  uVar1 = FUN_009874f4();
  FUN_00d0aaac(param_1,uVar1);
  FUN_00d188dc(uVar1,param_2);
  FUN_00d0aa9c(param_1);
  uVar1 = FUN_00987cfc();
  FUN_00d0aaac(param_1,uVar1);
  FUN_0099a090(uVar1,param_4);
  FUN_00d0aa9c(param_1);
  FUN_00d0aa9c(param_1);
  FUN_00d0aa9c(param_1);
  return;
}




void FUN_0098837c(undefined8 param_1,undefined8 param_2,undefined4 param_3,uint param_4)

{
  undefined8 uVar1;
  
  FUN_00986770();
  FUN_009867b0(param_1);
  FUN_009867f0(param_1);
  uVar1 = FUN_00986cdc();
  FUN_00d0aaac(param_1,uVar1);
  FUN_00d17b44(uVar1,param_2);
  uVar1 = FUN_00986ddc();
  FUN_00d0aaac(param_1,uVar1);
  FUN_00d181b8(uVar1,param_2,param_4 & 1);
  FUN_00d0aa9c(param_1);
  FUN_00d0aa9c(param_1);
  FUN_00d0aa9c(param_1);
  FUN_00986770(param_1);
  FUN_009867f0(param_1);
  uVar1 = FUN_00986ee0();
  FUN_00d0aaac(param_1,uVar1);
  FUN_00d17440(uVar1,param_3);
  uVar1 = FUN_00986ddc();
  FUN_00d0aaac(param_1,uVar1);
  FUN_00d181b8(uVar1,param_2,1);
  uVar1 = FUN_00986fe0();
  FUN_00d0aaac(param_1,uVar1);
  FUN_00998c48(uVar1,0);
  FUN_00d0aa9c(param_1);
  FUN_00d0aa9c(param_1);
  return;
}




void FUN_009884a4(undefined8 param_1,undefined8 param_2,undefined4 param_3,uint param_4)

{
  undefined8 uVar1;
  
  FUN_00986770();
  FUN_009867b0(param_1);
  FUN_009867f0(param_1);
  uVar1 = FUN_00986cdc();
  FUN_00d0aaac(param_1,uVar1);
  FUN_00d17b44(uVar1,param_2);
  uVar1 = FUN_00986ddc();
  FUN_00d0aaac(param_1,uVar1);
  FUN_00d181b8(uVar1,param_2,param_4 & 1);
  FUN_00d0aa9c(param_1);
  FUN_00d0aa9c(param_1);
  FUN_00d0aa9c(param_1);
  FUN_00986770(param_1);
  FUN_009867b0(param_1);
  FUN_009867f0(param_1);
  uVar1 = FUN_00986ee0();
  FUN_00d0aaac(param_1,uVar1);
  FUN_00d17440(uVar1,param_3);
  uVar1 = FUN_00986ddc();
  FUN_00d0aaac(param_1,uVar1);
  FUN_00d181b8(uVar1,param_2,1);
  uVar1 = FUN_00986fe0();
  FUN_00d0aaac(param_1,uVar1);
  FUN_00998c48(uVar1,0);
  FUN_00d0aa9c(param_1);
  FUN_00d0aa9c(param_1);
  FUN_00d0aa9c(param_1);
  return;
}




void FUN_009885dc(void)

{
  return;
}




void FUN_009885e0(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_0098860c(DAT_02e3efb8);
  return;
}




undefined8 * FUN_0098860c(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x4c2d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c2d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00d2138c(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_009886e0(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_0098870c(DAT_02e3efb8);
  return;
}




undefined8 * FUN_0098870c(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x4c2d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c2d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00d0aac4(puVar4);
    *puVar4 = &PTR_FUN_02819d20;
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_009887f0(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_0098881c(DAT_02e3efb8);
  return;
}




undefined8 * FUN_0098881c(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x4c2d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c2d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00d0aac4(puVar4);
    *puVar4 = &PTR_thunk_FUN_00d0aae0_027be838;
    *(undefined4 *)(puVar4 + 7) = 0;
    puVar4[6] = 0xffffffff00000000;
    puVar4[5] = &PTR_FUN_027be8c0;
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_0098891c(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_00988948(DAT_02e3efb8);
  return;
}




undefined8 * FUN_00988948(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x4c2d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c2d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    puVar4[6] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    FUN_00d0aac4(puVar4);
    *puVar4 = &PTR_thunk_FUN_00d0aae0_027be8e8;
    puVar4[5] = &PTR_FUN_027be970;
    puVar4[6] = 0;
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00988a40(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_00988a6c(DAT_02e3efb8);
  return;
}




undefined8 * FUN_00988a6c(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x4c2d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c2d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    FUN_00d0aac4(puVar4);
    *puVar4 = &PTR_thunk_FUN_00d0aae0_027be998;
    puVar4[5] = &PTR_FUN_027bea20;
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00988b60(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_00988b8c(DAT_02e3efb8);
  return;
}




undefined8 * FUN_00988b8c(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x4c2d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c2d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00d0aac4(puVar4);
    *puVar4 = &PTR_thunk_FUN_00d0aae0_027bea48;
    *(undefined1 *)(puVar4 + 7) = 0;
    puVar4[5] = &PTR_FUN_027bead0;
    puVar4[6] = 0xbf80000000000010;
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00988c8c(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_00988cb8(DAT_02e3efb8);
  return;
}




undefined8 * FUN_00988cb8(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x4c2d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c2d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[6] = 0;
    FUN_00d0aac4(puVar4);
    *puVar4 = &PTR_thunk_FUN_00d0aae0_027beaf8;
    puVar4[5] = &PTR_FUN_027beb80;
    FUN_00d9a250(puVar4 + 6);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00988dc4(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_00988df0(DAT_02e3efb8);
  return;
}




undefined8 * FUN_00988df0(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x4c2d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c2d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00d1e158(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00988ec4(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_00988ef0(DAT_02e3efb8);
  return;
}




undefined8 * FUN_00988ef0(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x4c2d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c2d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00d0aac4(puVar4);
    *puVar4 = &PTR_FUN_02815d68;
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00988fd4(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_00989000(DAT_02e3efb8);
  return;
}

