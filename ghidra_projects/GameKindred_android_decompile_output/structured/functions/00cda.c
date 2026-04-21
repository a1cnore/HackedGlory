// functions/00cda — 37 functions
#include "libGameKindred.h"




void FUN_00cda01c(void)

{
  FUN_00cda028(DAT_0313e340);
  return;
}




undefined8 * FUN_00cda028(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  long lVar4;
  
  uVar3 = *(ushort *)(param_1 + 0x2e7d0);
  if ((ulong)uVar3 == 0xffff) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar4 = param_1 + (ulong)uVar3 * 0x88;
    if (uVar3 == *(ushort *)(param_1 + 0x2e7d2)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(param_1 + 0x2e7d0) = uVar3;
    *(int *)(param_1 + 0x2e7d4) = *(int *)(param_1 + 0x2e7d4) + 1;
    puVar2 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    *puVar2 = &PTR_FUN_0280e370;
    puVar2[1] = 0;
    puVar2[2] = &PTR_FUN_0280e3c0;
    uVar1 = *(int *)(param_1 + 0x2e7e0) + 1;
    *(uint *)(param_1 + 0x2e7e0) = uVar1;
    if (*(uint *)(param_1 + 0x2e7e4) < uVar1) {
      *(uint *)(param_1 + 0x2e7e4) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00cda0f0(void)

{
  FUN_00cda0fc(DAT_0313e340);
  return;
}




undefined8 * FUN_00cda0fc(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x2e7d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x88;
    if (uVar2 == *(ushort *)(param_1 + 0x2e7d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x2e7d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x2e7d4) = *(int *)(param_1 + 0x2e7d4) + 1;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00d82cd4(puVar4);
    uVar1 = *(int *)(param_1 + 0x2e7e0) + 1;
    *(uint *)(param_1 + 0x2e7e0) = uVar1;
    if (*(uint *)(param_1 + 0x2e7e4) < uVar1) {
      *(uint *)(param_1 + 0x2e7e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00cda1cc(void)

{
  FUN_00cda1d8(DAT_0313e340);
  return;
}




undefined8 * FUN_00cda1d8(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x2e7d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x88;
    if (uVar2 == *(ushort *)(param_1 + 0x2e7d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x2e7d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x2e7d4) = *(int *)(param_1 + 0x2e7d4) + 1;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    FUN_00d82e00(puVar4);
    uVar1 = *(int *)(param_1 + 0x2e7e0) + 1;
    *(uint *)(param_1 + 0x2e7e0) = uVar1;
    if (*(uint *)(param_1 + 0x2e7e4) < uVar1) {
      *(uint *)(param_1 + 0x2e7e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00cda2ac(void)

{
  FUN_00cda2b8(DAT_0313e340);
  return;
}




undefined8 * FUN_00cda2b8(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  long lVar4;
  
  uVar3 = *(ushort *)(param_1 + 0x2e7d0);
  if ((ulong)uVar3 == 0xffff) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar4 = param_1 + (ulong)uVar3 * 0x88;
    if (uVar3 == *(ushort *)(param_1 + 0x2e7d2)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(param_1 + 0x2e7d0) = uVar3;
    *(int *)(param_1 + 0x2e7d4) = *(int *)(param_1 + 0x2e7d4) + 1;
    puVar2 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    *puVar2 = &PTR_FUN_0280e470;
    puVar2[1] = 0;
    puVar2[2] = &PTR_FUN_0280e4d8;
    uVar1 = *(int *)(param_1 + 0x2e7e0) + 1;
    *(uint *)(param_1 + 0x2e7e0) = uVar1;
    if (*(uint *)(param_1 + 0x2e7e4) < uVar1) {
      *(uint *)(param_1 + 0x2e7e4) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00cda380(void)

{
  FUN_00cda38c(DAT_0313e340);
  return;
}




void * FUN_00cda38c(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  void *__s;
  
  uVar2 = *(ushort *)(param_1 + 0x2e7d0);
  if ((ulong)uVar2 == 0xffff) {
    __s = (void *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x88;
    if (uVar2 == *(ushort *)(param_1 + 0x2e7d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x2e7d0) = uVar2;
    __s = (void *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x2e7d4) = *(int *)(param_1 + 0x2e7d4) + 1;
    memset(__s,0,0x50);
    FUN_00d98d84(__s);
    uVar1 = *(int *)(param_1 + 0x2e7e0) + 1;
    *(uint *)(param_1 + 0x2e7e0) = uVar1;
    if (*(uint *)(param_1 + 0x2e7e4) < uVar1) {
      *(uint *)(param_1 + 0x2e7e4) = uVar1;
    }
  }
  return __s;
}




void FUN_00cda464(void)

{
  FUN_00cda470(DAT_0313e340);
  return;
}




undefined8 * FUN_00cda470(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  long lVar4;
  
  uVar3 = *(ushort *)(param_1 + 0x2e7d0);
  if ((ulong)uVar3 == 0xffff) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar4 = param_1 + (ulong)uVar3 * 0x88;
    if (uVar3 == *(ushort *)(param_1 + 0x2e7d2)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(param_1 + 0x2e7d0) = uVar3;
    *(int *)(param_1 + 0x2e7d4) = *(int *)(param_1 + 0x2e7d4) + 1;
    puVar2 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    *puVar2 = &PTR_FUN_0280e570;
    puVar2[1] = 0;
    puVar2[2] = &PTR_FUN_0280e5b8;
    uVar1 = *(int *)(param_1 + 0x2e7e0) + 1;
    *(uint *)(param_1 + 0x2e7e0) = uVar1;
    if (*(uint *)(param_1 + 0x2e7e4) < uVar1) {
      *(uint *)(param_1 + 0x2e7e4) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00cda538(void)

{
  FUN_00cda544(DAT_0313e340);
  return;
}




undefined8 * FUN_00cda544(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x2e7d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x88;
    if (uVar2 == *(ushort *)(param_1 + 0x2e7d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x2e7d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x2e7d4) = *(int *)(param_1 + 0x2e7d4) + 1;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00d82fbc(puVar4);
    uVar1 = *(int *)(param_1 + 0x2e7e0) + 1;
    *(uint *)(param_1 + 0x2e7e0) = uVar1;
    if (*(uint *)(param_1 + 0x2e7e4) < uVar1) {
      *(uint *)(param_1 + 0x2e7e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00cda614(void)

{
  FUN_00cda620(DAT_0313e340);
  return;
}




undefined8 * FUN_00cda620(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x2e7d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x88;
    if (uVar2 == *(ushort *)(param_1 + 0x2e7d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x2e7d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x2e7d4) = *(int *)(param_1 + 0x2e7d4) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00d830f0(puVar4);
    uVar1 = *(int *)(param_1 + 0x2e7e0) + 1;
    *(uint *)(param_1 + 0x2e7e0) = uVar1;
    if (*(uint *)(param_1 + 0x2e7e4) < uVar1) {
      *(uint *)(param_1 + 0x2e7e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00cda6f4(void)

{
  FUN_00cda700(DAT_0313e340);
  return;
}




undefined8 * FUN_00cda700(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x2e7d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x88;
    if (uVar2 == *(ushort *)(param_1 + 0x2e7d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x2e7d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x2e7d4) = *(int *)(param_1 + 0x2e7d4) + 1;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    FUN_00d83200(puVar4);
    uVar1 = *(int *)(param_1 + 0x2e7e0) + 1;
    *(uint *)(param_1 + 0x2e7e0) = uVar1;
    if (*(uint *)(param_1 + 0x2e7e4) < uVar1) {
      *(uint *)(param_1 + 0x2e7e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00cda7d0(void)

{
  FUN_00cda7dc(DAT_0313e340);
  return;
}




void * FUN_00cda7dc(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  void *__s;
  
  uVar2 = *(ushort *)(param_1 + 0x2e7d0);
  if ((ulong)uVar2 == 0xffff) {
    __s = (void *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x88;
    if (uVar2 == *(ushort *)(param_1 + 0x2e7d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x2e7d0) = uVar2;
    __s = (void *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x2e7d4) = *(int *)(param_1 + 0x2e7d4) + 1;
    memset(__s,0,0x50);
    FUN_00d8328c(__s);
    uVar1 = *(int *)(param_1 + 0x2e7e0) + 1;
    *(uint *)(param_1 + 0x2e7e0) = uVar1;
    if (*(uint *)(param_1 + 0x2e7e4) < uVar1) {
      *(uint *)(param_1 + 0x2e7e4) = uVar1;
    }
  }
  return __s;
}




void FUN_00cda8b4(void)

{
  FUN_00cda8c0(DAT_0313e340);
  return;
}




void * FUN_00cda8c0(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  void *__s;
  
  uVar2 = *(ushort *)(param_1 + 0x2e7d0);
  if ((ulong)uVar2 == 0xffff) {
    __s = (void *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x88;
    if (uVar2 == *(ushort *)(param_1 + 0x2e7d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x2e7d0) = uVar2;
    __s = (void *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x2e7d4) = *(int *)(param_1 + 0x2e7d4) + 1;
    memset(__s,0,0x48);
    FUN_00d83628(__s);
    uVar1 = *(int *)(param_1 + 0x2e7e0) + 1;
    *(uint *)(param_1 + 0x2e7e0) = uVar1;
    if (*(uint *)(param_1 + 0x2e7e4) < uVar1) {
      *(uint *)(param_1 + 0x2e7e4) = uVar1;
    }
  }
  return __s;
}




void FUN_00cda998(void)

{
  FUN_00cda9a4(DAT_0313e340);
  return;
}




undefined8 * FUN_00cda9a4(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *__s;
  
  uVar2 = *(ushort *)(param_1 + 0x2e7d0);
  if ((ulong)uVar2 == 0xffff) {
    __s = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x88;
    if (uVar2 == *(ushort *)(param_1 + 0x2e7d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x2e7d0) = uVar2;
    __s = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x2e7d4) = *(int *)(param_1 + 0x2e7d4) + 1;
    memset(__s,0,0x88);
    __s[0xe] = 0;
    __s[0xf] = 0;
    *__s = &PTR_FUN_0280e628;
    __s[1] = 0;
    __s[2] = &PTR_FUN_0280e670;
    *(undefined4 *)(__s + 0x10) = 0;
    memset(__s + 3,0,0x54);
    uVar1 = *(int *)(param_1 + 0x2e7e0) + 1;
    *(uint *)(param_1 + 0x2e7e0) = uVar1;
    if (*(uint *)(param_1 + 0x2e7e4) < uVar1) {
      *(uint *)(param_1 + 0x2e7e4) = uVar1;
    }
  }
  return __s;
}




void FUN_00cdaaac(void)

{
  FUN_00cdaac4(DAT_0313e340 + 0x2e7f0);
  return;
}




undefined8 * FUN_00cdaac4(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  long lVar4;
  
  uVar3 = *(ushort *)(param_1 + 0xdac10);
  if ((ulong)uVar3 == 0xffff) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar4 = param_1 + (ulong)uVar3 * 0x28;
    if (uVar3 == *(ushort *)(param_1 + 0xdac12)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(param_1 + 0xdac10) = uVar3;
    *(int *)(param_1 + 0xdac14) = *(int *)(param_1 + 0xdac14) + 1;
    puVar2 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    puVar2[4] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[1] = 0;
    *puVar2 = &PTR_FUN_0280e698;
    *(undefined1 *)(puVar2 + 4) = 0;
    uVar1 = *(int *)(param_1 + 0xdac20) + 1;
    *(uint *)(param_1 + 0xdac20) = uVar1;
    if (*(uint *)(param_1 + 0xdac24) < uVar1) {
      *(uint *)(param_1 + 0xdac24) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00cdab8c(void)

{
  FUN_00cdaba4(DAT_0313e340 + 0x116630);
  return;
}




void * FUN_00cdaba4(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  void *__s;
  
  uVar2 = *(ushort *)(param_1 + 0x7a90);
  if ((ulong)uVar2 == 0xffff) {
    __s = (void *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x70;
    if (uVar2 == *(ushort *)(param_1 + 0x7a92)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x7a90) = uVar2;
    __s = (void *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x7a94) = *(int *)(param_1 + 0x7a94) + 1;
    memset(__s,0,0x70);
    FUN_00d8400c(__s);
    uVar1 = *(int *)(param_1 + 0x7aa0) + 1;
    *(uint *)(param_1 + 0x7aa0) = uVar1;
    if (*(uint *)(param_1 + 0x7aa4) < uVar1) {
      *(uint *)(param_1 + 0x7aa4) = uVar1;
    }
  }
  return __s;
}




void FUN_00cdac68(void)

{
  FUN_00cdac80(DAT_0313e340 + 0x116630);
  return;
}




void * FUN_00cdac80(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  void *__s;
  
  uVar2 = *(ushort *)(param_1 + 0x7a90);
  if ((ulong)uVar2 == 0xffff) {
    __s = (void *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x70;
    if (uVar2 == *(ushort *)(param_1 + 0x7a92)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x7a90) = uVar2;
    __s = (void *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x7a94) = *(int *)(param_1 + 0x7a94) + 1;
    memset(__s,0,0x50);
    FUN_00d844cc(__s);
    uVar1 = *(int *)(param_1 + 0x7aa0) + 1;
    *(uint *)(param_1 + 0x7aa0) = uVar1;
    if (*(uint *)(param_1 + 0x7aa4) < uVar1) {
      *(uint *)(param_1 + 0x7aa4) = uVar1;
    }
  }
  return __s;
}




void FUN_00cdad44(void)

{
  FUN_00cdad5c(DAT_0313e340 + 0x116630);
  return;
}




undefined8 * FUN_00cdad5c(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  long lVar4;
  
  uVar3 = *(ushort *)(param_1 + 0x7a90);
  if ((ulong)uVar3 == 0xffff) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar4 = param_1 + (ulong)uVar3 * 0x70;
    if (uVar3 == *(ushort *)(param_1 + 0x7a92)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(param_1 + 0x7a90) = uVar3;
    *(int *)(param_1 + 0x7a94) = *(int *)(param_1 + 0x7a94) + 1;
    puVar2 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    puVar2[7] = 0;
    puVar2[4] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[1] = 0;
    puVar2[6] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 7) = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    *puVar2 = &PTR_FUN_0281ee20;
    uVar1 = *(int *)(param_1 + 0x7aa0) + 1;
    *(uint *)(param_1 + 0x7aa0) = uVar1;
    if (*(uint *)(param_1 + 0x7aa4) < uVar1) {
      *(uint *)(param_1 + 0x7aa4) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00cdae1c(void)

{
  FUN_00cdae34(DAT_0313e340 + 0x116630);
  return;
}




undefined8 * FUN_00cdae34(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  long lVar4;
  
  uVar3 = *(ushort *)(param_1 + 0x7a90);
  if ((ulong)uVar3 == 0xffff) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar4 = param_1 + (ulong)uVar3 * 0x70;
    if (uVar3 == *(ushort *)(param_1 + 0x7a92)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(param_1 + 0x7a90) = uVar3;
    *(int *)(param_1 + 0x7a94) = *(int *)(param_1 + 0x7a94) + 1;
    puVar2 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    puVar2[7] = 0;
    puVar2[4] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[1] = 0;
    puVar2[6] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 7) = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    *puVar2 = &PTR_FUN_0281ee78;
    uVar1 = *(int *)(param_1 + 0x7aa0) + 1;
    *(uint *)(param_1 + 0x7aa0) = uVar1;
    if (*(uint *)(param_1 + 0x7aa4) < uVar1) {
      *(uint *)(param_1 + 0x7aa4) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00cdaef4(void)

{
  FUN_00cdaf0c(DAT_0313e340 + 0x116630);
  return;
}




undefined8 * FUN_00cdaf0c(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  long lVar4;
  
  uVar3 = *(ushort *)(param_1 + 0x7a90);
  if ((ulong)uVar3 == 0xffff) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar4 = param_1 + (ulong)uVar3 * 0x70;
    if (uVar3 == *(ushort *)(param_1 + 0x7a92)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(param_1 + 0x7a90) = uVar3;
    *(int *)(param_1 + 0x7a94) = *(int *)(param_1 + 0x7a94) + 1;
    puVar2 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    puVar2[7] = 0;
    puVar2[4] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[1] = 0;
    puVar2[6] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 7) = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    *puVar2 = &PTR_FUN_0281eed0;
    uVar1 = *(int *)(param_1 + 0x7aa0) + 1;
    *(uint *)(param_1 + 0x7aa0) = uVar1;
    if (*(uint *)(param_1 + 0x7aa4) < uVar1) {
      *(uint *)(param_1 + 0x7aa4) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00cdafcc(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x11e0f0);
  FUN_00cd924c();
  DAT_0313e340 = pvVar1;
  return;
}

