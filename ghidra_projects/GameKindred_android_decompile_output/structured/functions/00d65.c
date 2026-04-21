// functions/00d65 — 25 functions
#include "libGameKindred.h"




void FUN_00d65010(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_0313ce08 == 0) {
    FUN_00e6a2fc(0);
  }
  lVar1 = FUN_00d6507c(DAT_0313ce08);
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar2;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar2;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar2;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




undefined8 * FUN_00d6507c(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x51410);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x51412)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x51410) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x51414) = *(int *)(param_1 + 0x51414) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00e5d640(puVar4);
    *puVar4 = &PTR_FUN_0281c7d8;
    uVar1 = *(int *)(param_1 + 0x51420) + 1;
    *(uint *)(param_1 + 0x51420) = uVar1;
    if (*(uint *)(param_1 + 0x51424) < uVar1) {
      *(uint *)(param_1 + 0x51424) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00d65160(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_0313ce08 == 0) {
    FUN_00e6a2fc(0);
  }
  lVar1 = FUN_00d651cc(DAT_0313ce08);
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar2;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar2;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar2;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




void * FUN_00d651cc(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  void *__s;
  
  uVar2 = *(ushort *)(param_1 + 0x51410);
  if ((ulong)uVar2 == 0xffff) {
    __s = (void *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x51412)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x51410) = uVar2;
    __s = (void *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x51414) = *(int *)(param_1 + 0x51414) + 1;
    memset(__s,0,0x50);
    FUN_00d4926c(__s);
    uVar1 = *(int *)(param_1 + 0x51420) + 1;
    *(uint *)(param_1 + 0x51420) = uVar1;
    if (*(uint *)(param_1 + 0x51424) < uVar1) {
      *(uint *)(param_1 + 0x51424) = uVar1;
    }
  }
  return __s;
}




void FUN_00d652a4(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_0313ce08 == 0) {
    FUN_00e6a2fc(0);
  }
  lVar1 = FUN_00d65310(DAT_0313ce08);
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar2;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar2;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar2;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




undefined8 * FUN_00d65310(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x51410);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x51412)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x51410) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x51414) = *(int *)(param_1 + 0x51414) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00e5d640(puVar4);
    *puVar4 = &PTR_FUN_0281c8a8;
    uVar1 = *(int *)(param_1 + 0x51420) + 1;
    *(uint *)(param_1 + 0x51420) = uVar1;
    if (*(uint *)(param_1 + 0x51424) < uVar1) {
      *(uint *)(param_1 + 0x51424) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00d653f4(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_0313ce08 == 0) {
    FUN_00e6a2fc(0);
  }
  lVar1 = FUN_00d65460(DAT_0313ce08);
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar2;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar2;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar2;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




undefined8 * FUN_00d65460(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x51410);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x51412)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x51410) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x51414) = *(int *)(param_1 + 0x51414) + 1;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    FUN_00e5d640(puVar4);
    *(undefined4 *)(puVar4 + 5) = 0;
    *puVar4 = &PTR_FUN_028202b0;
    uVar1 = *(int *)(param_1 + 0x51420) + 1;
    *(uint *)(param_1 + 0x51420) = uVar1;
    if (*(uint *)(param_1 + 0x51424) < uVar1) {
      *(uint *)(param_1 + 0x51424) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00d65548(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_0313ce08 == 0) {
    FUN_00e6a2fc(0);
  }
  lVar1 = FUN_00d655b4(DAT_0313ce08);
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar2;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar2;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar2;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




void * FUN_00d655b4(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  void *__s;
  
  uVar2 = *(ushort *)(param_1 + 0x51410);
  if ((ulong)uVar2 == 0xffff) {
    __s = (void *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x51412)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x51410) = uVar2;
    __s = (void *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x51414) = *(int *)(param_1 + 0x51414) + 1;
    memset(__s,0,0x48);
    FUN_00d49dd4(__s);
    uVar1 = *(int *)(param_1 + 0x51420) + 1;
    *(uint *)(param_1 + 0x51420) = uVar1;
    if (*(uint *)(param_1 + 0x51424) < uVar1) {
      *(uint *)(param_1 + 0x51424) = uVar1;
    }
  }
  return __s;
}




void FUN_00d6568c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_0313ce08 == 0) {
    FUN_00e6a2fc(0);
  }
  lVar1 = FUN_00d656f8(DAT_0313ce08);
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar2;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar2;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar2;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




undefined8 * FUN_00d656f8(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x51410);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x51412)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x51410) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x51414) = *(int *)(param_1 + 0x51414) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00e5d640(puVar4);
    *puVar4 = &PTR_FUN_0281cb18;
    uVar1 = *(int *)(param_1 + 0x51420) + 1;
    *(uint *)(param_1 + 0x51420) = uVar1;
    if (*(uint *)(param_1 + 0x51424) < uVar1) {
      *(uint *)(param_1 + 0x51424) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00d657dc(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_0313ce08 == 0) {
    FUN_00e6a2fc(0);
  }
  lVar1 = FUN_00d65848(DAT_0313ce08);
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar2;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar2;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar2;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




undefined8 * FUN_00d65848(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x51410);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x51412)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x51410) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x51414) = *(int *)(param_1 + 0x51414) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00e5d640(puVar4);
    *puVar4 = &PTR_FUN_0281c978;
    uVar1 = *(int *)(param_1 + 0x51420) + 1;
    *(uint *)(param_1 + 0x51420) = uVar1;
    if (*(uint *)(param_1 + 0x51424) < uVar1) {
      *(uint *)(param_1 + 0x51424) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00d6592c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_0313ce08 == 0) {
    FUN_00e6a2fc(0);
  }
  lVar1 = FUN_00d65998(DAT_0313ce08);
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar2;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar2;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar2;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




undefined8 * FUN_00d65998(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x51410);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x51412)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x51410) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x51414) = *(int *)(param_1 + 0x51414) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00e5d640(puVar4);
    *puVar4 = &PTR_FUN_0281ca48;
    uVar1 = *(int *)(param_1 + 0x51420) + 1;
    *(uint *)(param_1 + 0x51420) = uVar1;
    if (*(uint *)(param_1 + 0x51424) < uVar1) {
      *(uint *)(param_1 + 0x51424) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00d65a7c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_0313ce08 == 0) {
    FUN_00e6a2fc(0);
  }
  lVar1 = FUN_00d65ae8(DAT_0313ce08);
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar2;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar2;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar2;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




undefined8 * FUN_00d65ae8(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x51410);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x51412)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x51410) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x51414) = *(int *)(param_1 + 0x51414) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00e5d640(puVar4);
    *puVar4 = &PTR_FUN_0281cbe8;
    uVar1 = *(int *)(param_1 + 0x51420) + 1;
    *(uint *)(param_1 + 0x51420) = uVar1;
    if (*(uint *)(param_1 + 0x51424) < uVar1) {
      *(uint *)(param_1 + 0x51424) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00d65bcc(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_0313ce08 == 0) {
    FUN_00e6a2fc(0);
  }
  lVar1 = FUN_00d65c38(DAT_0313ce08);
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar2;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar2;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar2;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




undefined8 * FUN_00d65c38(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x51410);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x51412)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x51410) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x51414) = *(int *)(param_1 + 0x51414) + 1;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    FUN_00d48754(puVar4);
    uVar1 = *(int *)(param_1 + 0x51420) + 1;
    *(uint *)(param_1 + 0x51420) = uVar1;
    if (*(uint *)(param_1 + 0x51424) < uVar1) {
      *(uint *)(param_1 + 0x51424) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00d65d0c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_0313ce08 == 0) {
    FUN_00e6a2fc(0);
  }
  lVar1 = FUN_00d65d78(DAT_0313ce08);
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar2;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar2;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar2;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




undefined8 * FUN_00d65d78(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x51410);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x51412)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x51410) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x51414) = *(int *)(param_1 + 0x51414) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00e5d640(puVar4);
    *puVar4 = &PTR_FUN_0281ccb8;
    uVar1 = *(int *)(param_1 + 0x51420) + 1;
    *(uint *)(param_1 + 0x51420) = uVar1;
    if (*(uint *)(param_1 + 0x51424) < uVar1) {
      *(uint *)(param_1 + 0x51424) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00d65e5c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_0313ce08 == 0) {
    FUN_00e6a2fc(0);
  }
  lVar1 = FUN_00d65ec8(DAT_0313ce08);
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar2;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar2;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar2;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




undefined8 * FUN_00d65ec8(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x51410);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x51412)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x51410) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x51414) = *(int *)(param_1 + 0x51414) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00e5d640(puVar4);
    *puVar4 = &PTR_FUN_0281c1f8;
    uVar1 = *(int *)(param_1 + 0x51420) + 1;
    *(uint *)(param_1 + 0x51420) = uVar1;
    if (*(uint *)(param_1 + 0x51424) < uVar1) {
      *(uint *)(param_1 + 0x51424) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00d65fac(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_0313ce08 == 0) {
    FUN_00e6a2fc(0);
  }
  lVar1 = FUN_00d66018(DAT_0313ce08);
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar2;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar2;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar2;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}

