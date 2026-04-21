// functions/00a8c — 39 functions
#include "libGameKindred.h"




void FUN_00a8c09c(void)

{
  FUN_00a8c0a8(DAT_031336c0);
  return;
}




undefined8 * FUN_00a8c0a8(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  long lVar4;
  
  uVar3 = *(ushort *)(param_1 + 0xe610);
  if ((ulong)uVar3 == 0xffff) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar4 = param_1 + (ulong)uVar3 * 0xb8;
    if (uVar3 == *(ushort *)(param_1 + 0xe612)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(param_1 + 0xe610) = uVar3;
    *(int *)(param_1 + 0xe614) = *(int *)(param_1 + 0xe614) + 1;
    puVar2 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_FUN_027d0318;
    *(undefined4 *)(puVar2 + 2) = 0;
    uVar1 = *(int *)(param_1 + 0xe620) + 1;
    *(uint *)(param_1 + 0xe620) = uVar1;
    if (*(uint *)(param_1 + 0xe624) < uVar1) {
      *(uint *)(param_1 + 0xe624) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00a8c154(void)

{
  FUN_00a8c160(DAT_031336c0);
  return;
}




undefined8 * FUN_00a8c160(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *__s;
  
  uVar2 = *(ushort *)(param_1 + 0xe610);
  if ((ulong)uVar2 == 0xffff) {
    __s = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0xb8;
    if (uVar2 == *(ushort *)(param_1 + 0xe612)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0xe610) = uVar2;
    __s = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0xe614) = *(int *)(param_1 + 0xe614) + 1;
    memset(__s,0,0x88);
    *__s = &PTR_FUN_027d0358;
    __s[1] = 0;
    __s[2] = &PTR_FUN_027d0288;
    memset(__s + 3,0,0x70);
    uVar1 = *(int *)(param_1 + 0xe620) + 1;
    *(uint *)(param_1 + 0xe620) = uVar1;
    if (*(uint *)(param_1 + 0xe624) < uVar1) {
      *(uint *)(param_1 + 0xe624) = uVar1;
    }
  }
  return __s;
}




void FUN_00a8c24c(void)

{
  FUN_00a8c258(DAT_031336c8);
  return;
}




undefined8 * FUN_00a8c258(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  long lVar4;
  
  uVar3 = *(ushort *)(param_1 + 0xf010);
  if ((ulong)uVar3 == 0xffff) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar4 = param_1 + (ulong)uVar3 * 0xc0;
    if (uVar3 == *(ushort *)(param_1 + 0xf012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(param_1 + 0xf010) = uVar3;
    *(int *)(param_1 + 0xf014) = *(int *)(param_1 + 0xf014) + 1;
    puVar2 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    *puVar2 = &PTR_FUN_027cea78;
    puVar2[1] = 0;
    uVar1 = *(int *)(param_1 + 0xf020) + 1;
    *(uint *)(param_1 + 0xf020) = uVar1;
    if (*(uint *)(param_1 + 0xf024) < uVar1) {
      *(uint *)(param_1 + 0xf024) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00a8c2fc(void)

{
  FUN_00a8c310(DAT_031336c8 + 0xf030);
  return;
}




undefined8 * FUN_00a8c310(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  long lVar4;
  
  uVar3 = *(ushort *)(param_1 + 0x32010);
  if ((ulong)uVar3 == 0xffff) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar4 = param_1 + (ulong)uVar3 * 0x28;
    if (uVar3 == *(ushort *)(param_1 + 0x32012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(param_1 + 0x32010) = uVar3;
    *(int *)(param_1 + 0x32014) = *(int *)(param_1 + 0x32014) + 1;
    puVar2 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    puVar2[2] = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[3] = 0;
    *puVar2 = &PTR_FUN_027d0390;
    *(undefined4 *)(puVar2 + 4) = DAT_03214ce8;
    uVar1 = *(int *)(param_1 + 0x32020) + 1;
    *(uint *)(param_1 + 0x32020) = uVar1;
    if (*(uint *)(param_1 + 0x32024) < uVar1) {
      *(uint *)(param_1 + 0x32024) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00a8c3e4(void)

{
  FUN_00a8c3f0(DAT_031336c8);
  return;
}




undefined8 * FUN_00a8c3f0(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *__s;
  
  uVar2 = *(ushort *)(param_1 + 0xf010);
  if ((ulong)uVar2 == 0xffff) {
    __s = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0xc0;
    if (uVar2 == *(ushort *)(param_1 + 0xf012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0xf010) = uVar2;
    __s = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0xf014) = *(int *)(param_1 + 0xf014) + 1;
    memset(__s,0,0xb8);
    __s[0x14] = 0;
    __s[0x15] = 0;
    *__s = &PTR_FUN_027d03b8;
    __s[1] = 0;
    __s[2] = &PTR_FUN_027d0288;
    *(undefined4 *)(__s + 0x16) = 0;
    memset(__s + 3,0,0x84);
    uVar1 = *(int *)(param_1 + 0xf020) + 1;
    *(uint *)(param_1 + 0xf020) = uVar1;
    if (*(uint *)(param_1 + 0xf024) < uVar1) {
      *(uint *)(param_1 + 0xf024) = uVar1;
    }
  }
  return __s;
}




void FUN_00a8c4e4(void)

{
  FUN_00a8c4f8(DAT_031336c8 + 0xf030);
  return;
}




undefined8 * FUN_00a8c4f8(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  long lVar4;
  
  uVar3 = *(ushort *)(param_1 + 0x32010);
  if ((ulong)uVar3 == 0xffff) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar4 = param_1 + (ulong)uVar3 * 0x28;
    if (uVar3 == *(ushort *)(param_1 + 0x32012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(param_1 + 0x32010) = uVar3;
    *(int *)(param_1 + 0x32014) = *(int *)(param_1 + 0x32014) + 1;
    puVar2 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    puVar2[4] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[1] = 0;
    *puVar2 = &PTR_FUN_027d0410;
    *(undefined1 *)(puVar2 + 4) = 0;
    uVar1 = *(int *)(param_1 + 0x32020) + 1;
    *(uint *)(param_1 + 0x32020) = uVar1;
    if (*(uint *)(param_1 + 0x32024) < uVar1) {
      *(uint *)(param_1 + 0x32024) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00a8c5c0(void)

{
  FUN_00a8c5cc(DAT_031336c8);
  return;
}




undefined8 * FUN_00a8c5cc(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  long lVar4;
  
  uVar3 = *(ushort *)(param_1 + 0xf010);
  if ((ulong)uVar3 == 0xffff) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar4 = param_1 + (ulong)uVar3 * 0xc0;
    if (uVar3 == *(ushort *)(param_1 + 0xf012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(param_1 + 0xf010) = uVar3;
    *(int *)(param_1 + 0xf014) = *(int *)(param_1 + 0xf014) + 1;
    puVar2 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_FUN_027ce9e0;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 3) = 0;
    uVar1 = *(int *)(param_1 + 0xf020) + 1;
    *(uint *)(param_1 + 0xf020) = uVar1;
    if (*(uint *)(param_1 + 0xf024) < uVar1) {
      *(uint *)(param_1 + 0xf024) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00a8c67c(void)

{
  FUN_00a8c688(DAT_031336c8);
  return;
}




void * FUN_00a8c688(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  void *__s;
  
  uVar2 = *(ushort *)(param_1 + 0xf010);
  if ((ulong)uVar2 == 0xffff) {
    __s = (void *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0xc0;
    if (uVar2 == *(ushort *)(param_1 + 0xf012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0xf010) = uVar2;
    __s = (void *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0xf014) = *(int *)(param_1 + 0xf014) + 1;
    memset(__s,0,0xc0);
    FUN_00a851a4(__s);
    uVar1 = *(int *)(param_1 + 0xf020) + 1;
    *(uint *)(param_1 + 0xf020) = uVar1;
    if (*(uint *)(param_1 + 0xf024) < uVar1) {
      *(uint *)(param_1 + 0xf024) = uVar1;
    }
  }
  return __s;
}




void FUN_00a8c74c(void)

{
  FUN_00a8c758(DAT_031336c8);
  return;
}




undefined8 * FUN_00a8c758(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  long lVar4;
  
  uVar3 = *(ushort *)(param_1 + 0xf010);
  if ((ulong)uVar3 == 0xffff) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar4 = param_1 + (ulong)uVar3 * 0xc0;
    if (uVar3 == *(ushort *)(param_1 + 0xf012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(param_1 + 0xf010) = uVar3;
    *(int *)(param_1 + 0xf014) = *(int *)(param_1 + 0xf014) + 1;
    puVar2 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_FUN_027d0438;
    *(undefined4 *)(puVar2 + 2) = 0;
    uVar1 = *(int *)(param_1 + 0xf020) + 1;
    *(uint *)(param_1 + 0xf020) = uVar1;
    if (*(uint *)(param_1 + 0xf024) < uVar1) {
      *(uint *)(param_1 + 0xf024) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00a8c804(void)

{
  FUN_00a8c818(DAT_031336c8 + 0xf030);
  return;
}




undefined8 * FUN_00a8c818(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  long lVar4;
  
  uVar3 = *(ushort *)(param_1 + 0x32010);
  if ((ulong)uVar3 == 0xffff) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar4 = param_1 + (ulong)uVar3 * 0x28;
    if (uVar3 == *(ushort *)(param_1 + 0x32012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(param_1 + 0x32010) = uVar3;
    *(int *)(param_1 + 0x32014) = *(int *)(param_1 + 0x32014) + 1;
    puVar2 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = &PTR_FUN_027d0490;
    puVar2[1] = 0;
    uVar1 = *(int *)(param_1 + 0x32020) + 1;
    *(uint *)(param_1 + 0x32020) = uVar1;
    if (*(uint *)(param_1 + 0x32024) < uVar1) {
      *(uint *)(param_1 + 0x32024) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00a8c8d4(void)

{
  FUN_00a8c8e0(DAT_031336c8);
  return;
}




undefined8 * FUN_00a8c8e0(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  long lVar4;
  
  uVar3 = *(ushort *)(param_1 + 0xf010);
  if ((ulong)uVar3 == 0xffff) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar4 = param_1 + (ulong)uVar3 * 0xc0;
    if (uVar3 == *(ushort *)(param_1 + 0xf012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(param_1 + 0xf010) = uVar3;
    *(int *)(param_1 + 0xf014) = *(int *)(param_1 + 0xf014) + 1;
    puVar2 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    *puVar2 = &PTR_FUN_027ce448;
    puVar2[1] = 0;
    uVar1 = *(int *)(param_1 + 0xf020) + 1;
    *(uint *)(param_1 + 0xf020) = uVar1;
    if (*(uint *)(param_1 + 0xf024) < uVar1) {
      *(uint *)(param_1 + 0xf024) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00a8c984(void)

{
  FUN_00a8c990(DAT_031336c8);
  return;
}




undefined8 * FUN_00a8c990(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  long lVar4;
  
  uVar3 = *(ushort *)(param_1 + 0xf010);
  if ((ulong)uVar3 == 0xffff) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar4 = param_1 + (ulong)uVar3 * 0xc0;
    if (uVar3 == *(ushort *)(param_1 + 0xf012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(param_1 + 0xf010) = uVar3;
    *(int *)(param_1 + 0xf014) = *(int *)(param_1 + 0xf014) + 1;
    puVar2 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_FUN_027d04b8;
    *(undefined4 *)(puVar2 + 2) = 0;
    uVar1 = *(int *)(param_1 + 0xf020) + 1;
    *(uint *)(param_1 + 0xf020) = uVar1;
    if (*(uint *)(param_1 + 0xf024) < uVar1) {
      *(uint *)(param_1 + 0xf024) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00a8ca3c(void)

{
  FUN_00a8ca48(DAT_031336c8);
  return;
}




undefined8 * FUN_00a8ca48(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  long lVar4;
  
  uVar3 = *(ushort *)(param_1 + 0xf010);
  if ((ulong)uVar3 == 0xffff) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar4 = param_1 + (ulong)uVar3 * 0xc0;
    if (uVar3 == *(ushort *)(param_1 + 0xf012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(param_1 + 0xf010) = uVar3;
    *(int *)(param_1 + 0xf014) = *(int *)(param_1 + 0xf014) + 1;
    puVar2 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    *puVar2 = &PTR_FUN_027d0510;
    puVar2[1] = 0;
    uVar1 = *(int *)(param_1 + 0xf020) + 1;
    *(uint *)(param_1 + 0xf020) = uVar1;
    if (*(uint *)(param_1 + 0xf024) < uVar1) {
      *(uint *)(param_1 + 0xf024) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00a8caec(void)

{
  FUN_00a8caf8(DAT_031336c8);
  return;
}




undefined8 * FUN_00a8caf8(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0xf010);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0xc0;
    if (uVar2 == *(ushort *)(param_1 + 0xf012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0xf010) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0xf014) = *(int *)(param_1 + 0xf014) + 1;
    puVar4[4] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[1] = 0;
    *puVar4 = &PTR_FUN_027cec58;
    FUN_00a8029c(puVar4 + 2);
    uVar1 = *(int *)(param_1 + 0xf020) + 1;
    *(uint *)(param_1 + 0xf020) = uVar1;
    if (*(uint *)(param_1 + 0xf024) < uVar1) {
      *(uint *)(param_1 + 0xf024) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00a8cbc8(void)

{
  FUN_00a8cbd4(DAT_031336c8);
  return;
}




undefined8 * FUN_00a8cbd4(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *__s;
  
  uVar2 = *(ushort *)(param_1 + 0xf010);
  if ((ulong)uVar2 == 0xffff) {
    __s = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0xc0;
    if (uVar2 == *(ushort *)(param_1 + 0xf012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0xf010) = uVar2;
    __s = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0xf014) = *(int *)(param_1 + 0xf014) + 1;
    memset(__s,0,0x50);
    *(undefined8 *)((long)__s + 0x46) = 0;
    __s[7] = 0;
    __s[8] = 0;
    __s[5] = 0;
    __s[6] = 0;
    __s[3] = 0;
    __s[4] = 0;
    __s[1] = 0;
    __s[2] = 0;
    *__s = &PTR_FUN_027d0568;
    uVar1 = *(int *)(param_1 + 0xf020) + 1;
    *(uint *)(param_1 + 0xf020) = uVar1;
    if (*(uint *)(param_1 + 0xf024) < uVar1) {
      *(uint *)(param_1 + 0xf024) = uVar1;
    }
  }
  return __s;
}




void FUN_00a8ccb4(void)

{
  FUN_00a8ccc8(DAT_031336c8 + 0xf030);
  return;
}




undefined8 * FUN_00a8ccc8(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  long lVar4;
  
  uVar3 = *(ushort *)(param_1 + 0x32010);
  if ((ulong)uVar3 == 0xffff) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar4 = param_1 + (ulong)uVar3 * 0x28;
    if (uVar3 == *(ushort *)(param_1 + 0x32012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(param_1 + 0x32010) = uVar3;
    *(int *)(param_1 + 0x32014) = *(int *)(param_1 + 0x32014) + 1;
    puVar2 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    puVar2[2] = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[3] = 0;
    *puVar2 = &PTR_FUN_027d0608;
    *(undefined4 *)(puVar2 + 4) = DAT_03214ce8;
    uVar1 = *(int *)(param_1 + 0x32020) + 1;
    *(uint *)(param_1 + 0x32020) = uVar1;
    if (*(uint *)(param_1 + 0x32024) < uVar1) {
      *(uint *)(param_1 + 0x32024) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00a8cd9c(void)

{
  FUN_00a8cda8(DAT_031336c8);
  return;
}




undefined8 * FUN_00a8cda8(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  long lVar4;
  
  uVar3 = *(ushort *)(param_1 + 0xf010);
  if ((ulong)uVar3 == 0xffff) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar4 = param_1 + (ulong)uVar3 * 0xc0;
    if (uVar3 == *(ushort *)(param_1 + 0xf012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(param_1 + 0xf010) = uVar3;
    *(int *)(param_1 + 0xf014) = *(int *)(param_1 + 0xf014) + 1;
    puVar2 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    *puVar2 = &PTR_FUN_027ced68;
    puVar2[1] = 0;
    uVar1 = *(int *)(param_1 + 0xf020) + 1;
    *(uint *)(param_1 + 0xf020) = uVar1;
    if (*(uint *)(param_1 + 0xf024) < uVar1) {
      *(uint *)(param_1 + 0xf024) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00a8ce4c(void)

{
  FUN_00a8ce58(DAT_031336c8);
  return;
}




undefined8 * FUN_00a8ce58(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  long lVar4;
  
  uVar3 = *(ushort *)(param_1 + 0xf010);
  if ((ulong)uVar3 == 0xffff) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar4 = param_1 + (ulong)uVar3 * 0xc0;
    if (uVar3 == *(ushort *)(param_1 + 0xf012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(param_1 + 0xf010) = uVar3;
    *(int *)(param_1 + 0xf014) = *(int *)(param_1 + 0xf014) + 1;
    puVar2 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = &PTR_FUN_027d0630;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 3) = DAT_03214ce8;
    uVar1 = *(int *)(param_1 + 0xf020) + 1;
    *(uint *)(param_1 + 0xf020) = uVar1;
    if (*(uint *)(param_1 + 0xf024) < uVar1) {
      *(uint *)(param_1 + 0xf024) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00a8cf10(void)

{
  FUN_00a8cf24(DAT_031336c8 + 0xf030);
  return;
}




undefined8 * FUN_00a8cf24(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  long lVar4;
  
  uVar3 = *(ushort *)(param_1 + 0x32010);
  if ((ulong)uVar3 == 0xffff) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar4 = param_1 + (ulong)uVar3 * 0x28;
    if (uVar3 == *(ushort *)(param_1 + 0x32012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(param_1 + 0x32010) = uVar3;
    *(int *)(param_1 + 0x32014) = *(int *)(param_1 + 0x32014) + 1;
    puVar2 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    puVar2[2] = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[3] = 0;
    *puVar2 = &PTR_FUN_027d0688;
    *(undefined4 *)(puVar2 + 4) = DAT_03214ce8;
    uVar1 = *(int *)(param_1 + 0x32020) + 1;
    *(uint *)(param_1 + 0x32020) = uVar1;
    if (*(uint *)(param_1 + 0x32024) < uVar1) {
      *(uint *)(param_1 + 0x32024) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00a8cff8(void)

{
  FUN_00a8d004(DAT_031336c8);
  return;
}

