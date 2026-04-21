// functions/00990 — 32 functions
#include "libGameKindred.h"




void FUN_0099000c(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_00990038(DAT_02e3efb8);
  return;
}




undefined8 * FUN_00990038(long param_1)

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
    FUN_00d13858(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_0099010c(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_00990138(DAT_02e3efb8);
  return;
}




undefined8 * FUN_00990138(long param_1)

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
    FUN_00d13920(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_0099020c(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_00990238(DAT_02e3efb8);
  return;
}




undefined8 * FUN_00990238(long param_1)

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
    FUN_00d13a00(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_0099030c(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_00990338(DAT_02e3efb8);
  return;
}




undefined8 * FUN_00990338(long param_1)

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
    FUN_00d13b28(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_0099040c(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_00990438(DAT_02e3efb8);
  return;
}




undefined8 * FUN_00990438(long param_1)

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
    FUN_00d148b0(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_0099050c(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_00990538(DAT_02e3efb8);
  return;
}




void * FUN_00990538(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  void *__s;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    __s = (void *)0x0;
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
    __s = (void *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    memset(__s,0,0x48);
    FUN_00d14dd8(__s);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return __s;
}




void FUN_00990610(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_0099063c(DAT_02e3efb8);
  return;
}




undefined8 * FUN_0099063c(long param_1)

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
    FUN_00d15610(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00990710(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_0099073c(DAT_02e3efb8);
  return;
}




undefined8 * FUN_0099073c(long param_1)

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
    FUN_00d15d7c(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00990810(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_0099083c(DAT_02e3efb8);
  return;
}




undefined8 * FUN_0099083c(long param_1)

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
    FUN_00d15f78(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00990910(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_0099093c(DAT_02e3efb8);
  return;
}




undefined8 * FUN_0099093c(long param_1)

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
    *puVar4 = &PTR_FUN_02817db0;
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00990a20(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_00990a4c(DAT_02e3efb8);
  return;
}




undefined8 * FUN_00990a4c(long param_1)

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
    *puVar4 = &PTR_FUN_02818520;
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00990b30(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_00990b5c(DAT_02e3efb8);
  return;
}




void * FUN_00990b5c(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  void *__s;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    __s = (void *)0x0;
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
    __s = (void *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    memset(__s,0,0x58);
    FUN_00d1631c(__s);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return __s;
}




void FUN_00990c34(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_00990c60(DAT_02e3efb8);
  return;
}




void * FUN_00990c60(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  void *__s;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    __s = (void *)0x0;
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
    __s = (void *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    memset(__s,0,0x48);
    FUN_00d16c60(__s);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return __s;
}




void FUN_00990d38(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_00990d64(DAT_02e3efb8);
  return;
}




undefined8 * FUN_00990d64(long param_1)

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
    FUN_00d17ee4(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00990e3c(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_00990e68(DAT_02e3efb8);
  return;
}




undefined8 * FUN_00990e68(long param_1)

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
    FUN_00d18028(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00990f40(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_00990f6c(DAT_02e3efb8);
  return;
}




undefined8 * FUN_00990f6c(long param_1)

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
    FUN_00d18244(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}

