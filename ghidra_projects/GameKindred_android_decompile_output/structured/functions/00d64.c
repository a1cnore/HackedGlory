// functions/00d64 — 24 functions
#include "libGameKindred.h"




void FUN_00d64080(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_0313ce08 == 0) {
    FUN_00e6a2fc(0);
  }
  lVar1 = FUN_00d640ec(DAT_0313ce08);
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




undefined8 * FUN_00d640ec(long param_1)

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
    *puVar4 = &PTR_FUN_0281c2c8;
    uVar1 = *(int *)(param_1 + 0x51420) + 1;
    *(uint *)(param_1 + 0x51420) = uVar1;
    if (*(uint *)(param_1 + 0x51424) < uVar1) {
      *(uint *)(param_1 + 0x51424) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00d641d0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_0313ce08 == 0) {
    FUN_00e6a2fc(0);
  }
  lVar1 = FUN_00d6423c(DAT_0313ce08);
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




void * FUN_00d6423c(long param_1)

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
    FUN_00d4a43c(__s);
    uVar1 = *(int *)(param_1 + 0x51420) + 1;
    *(uint *)(param_1 + 0x51420) = uVar1;
    if (*(uint *)(param_1 + 0x51424) < uVar1) {
      *(uint *)(param_1 + 0x51424) = uVar1;
    }
  }
  return __s;
}




void FUN_00d64314(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_0313ce08 == 0) {
    FUN_00e6a2fc(0);
  }
  lVar1 = FUN_00d64380(DAT_0313ce08);
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




undefined8 * FUN_00d64380(long param_1)

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
    *puVar4 = &PTR_FUN_0281c638;
    uVar1 = *(int *)(param_1 + 0x51420) + 1;
    *(uint *)(param_1 + 0x51420) = uVar1;
    if (*(uint *)(param_1 + 0x51424) < uVar1) {
      *(uint *)(param_1 + 0x51424) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00d64464(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_0313ce08 == 0) {
    FUN_00e6a2fc(0);
  }
  lVar1 = FUN_00d644d0(DAT_0313ce08);
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




void * FUN_00d644d0(long param_1)

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
    memset(__s,0,0x68);
    FUN_00d4bb90(__s);
    uVar1 = *(int *)(param_1 + 0x51420) + 1;
    *(uint *)(param_1 + 0x51420) = uVar1;
    if (*(uint *)(param_1 + 0x51424) < uVar1) {
      *(uint *)(param_1 + 0x51424) = uVar1;
    }
  }
  return __s;
}




void FUN_00d645a8(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_0313ce08 == 0) {
    FUN_00e6a2fc(0);
  }
  lVar1 = FUN_00d64614(DAT_0313ce08);
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




undefined8 * FUN_00d64614(long param_1)

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
    *puVar4 = &PTR_FUN_0281d338;
    uVar1 = *(int *)(param_1 + 0x51420) + 1;
    *(uint *)(param_1 + 0x51420) = uVar1;
    if (*(uint *)(param_1 + 0x51424) < uVar1) {
      *(uint *)(param_1 + 0x51424) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00d646fc(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_0313ce08 == 0) {
    FUN_00e6a2fc(0);
  }
  lVar1 = FUN_00d64768(DAT_0313ce08);
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




undefined8 * FUN_00d64768(long param_1)

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
    FUN_00d4ad48(puVar4);
    uVar1 = *(int *)(param_1 + 0x51420) + 1;
    *(uint *)(param_1 + 0x51420) = uVar1;
    if (*(uint *)(param_1 + 0x51424) < uVar1) {
      *(uint *)(param_1 + 0x51424) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00d6483c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_0313ce08 == 0) {
    FUN_00e6a2fc(0);
  }
  lVar1 = FUN_00d648a8(DAT_0313ce08);
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




void * FUN_00d648a8(long param_1)

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
    memset(__s,0,0x58);
    FUN_00d48f0c(__s);
    uVar1 = *(int *)(param_1 + 0x51420) + 1;
    *(uint *)(param_1 + 0x51420) = uVar1;
    if (*(uint *)(param_1 + 0x51424) < uVar1) {
      *(uint *)(param_1 + 0x51424) = uVar1;
    }
  }
  return __s;
}




void FUN_00d64980(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_0313ce08 == 0) {
    FUN_00e6a2fc(0);
  }
  lVar1 = FUN_00d649ec(DAT_0313ce08);
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




undefined8 * FUN_00d649ec(long param_1)

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
    *puVar4 = &PTR_FUN_0281c708;
    uVar1 = *(int *)(param_1 + 0x51420) + 1;
    *(uint *)(param_1 + 0x51420) = uVar1;
    if (*(uint *)(param_1 + 0x51424) < uVar1) {
      *(uint *)(param_1 + 0x51424) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00d64ad0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_0313ce08 == 0) {
    FUN_00e6a2fc(0);
  }
  lVar1 = FUN_00d64b3c(DAT_0313ce08);
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




undefined8 * FUN_00d64b3c(long param_1)

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
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00e5d640(puVar4);
    *puVar4 = &PTR_FUN_0281c468;
    puVar4[5] = &PTR_FUN_0281c540;
    puVar4[6] = 0;
    *(undefined4 *)(puVar4 + 7) = DAT_03214ce8;
    uVar1 = *(int *)(param_1 + 0x51420) + 1;
    *(uint *)(param_1 + 0x51420) = uVar1;
    if (*(uint *)(param_1 + 0x51424) < uVar1) {
      *(uint *)(param_1 + 0x51424) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00d64c38(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_0313ce08 == 0) {
    FUN_00e6a2fc(0);
  }
  lVar1 = FUN_00d64ca4(DAT_0313ce08);
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




void * FUN_00d64ca4(long param_1)

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
    FUN_00d4c19c(__s);
    uVar1 = *(int *)(param_1 + 0x51420) + 1;
    *(uint *)(param_1 + 0x51420) = uVar1;
    if (*(uint *)(param_1 + 0x51424) < uVar1) {
      *(uint *)(param_1 + 0x51424) = uVar1;
    }
  }
  return __s;
}




void FUN_00d64d7c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_0313ce08 == 0) {
    FUN_00e6a2fc(0);
  }
  lVar1 = FUN_00d64de8(DAT_0313ce08);
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




void * FUN_00d64de8(long param_1)

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
    FUN_00d488c4(__s);
    uVar1 = *(int *)(param_1 + 0x51420) + 1;
    *(uint *)(param_1 + 0x51420) = uVar1;
    if (*(uint *)(param_1 + 0x51424) < uVar1) {
      *(uint *)(param_1 + 0x51424) = uVar1;
    }
  }
  return __s;
}




void FUN_00d64ec0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_0313ce08 == 0) {
    FUN_00e6a2fc(0);
  }
  lVar1 = FUN_00d64f2c(DAT_0313ce08);
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




undefined8 * FUN_00d64f2c(long param_1)

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
    *puVar4 = &PTR_FUN_0281ce58;
    uVar1 = *(int *)(param_1 + 0x51420) + 1;
    *(uint *)(param_1 + 0x51420) = uVar1;
    if (*(uint *)(param_1 + 0x51424) < uVar1) {
      *(uint *)(param_1 + 0x51424) = uVar1;
    }
  }
  return puVar4;
}

