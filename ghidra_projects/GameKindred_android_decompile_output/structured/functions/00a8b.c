// functions/00a8b — 40 functions
#include "libGameKindred.h"




void FUN_00a8b000(void)

{
  FUN_00a8b00c(DAT_031336c0);
  return;
}




undefined8 * FUN_00a8b00c(long param_1)

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
    puVar2[4] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[1] = 0;
    *puVar2 = &PTR_FUN_027cea38;
    *(undefined4 *)(puVar2 + 4) = 0;
    uVar1 = *(int *)(param_1 + 0xe620) + 1;
    *(uint *)(param_1 + 0xe620) = uVar1;
    if (*(uint *)(param_1 + 0xe624) < uVar1) {
      *(uint *)(param_1 + 0xe624) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00a8b0c0(void)

{
  FUN_00a8b0cc(DAT_031336c0);
  return;
}




undefined8 * FUN_00a8b0cc(long param_1)

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
    *puVar2 = &PTR_FUN_027d0120;
    puVar2[4] = 0;
    puVar2[3] = 0;
    puVar2[5] = 0;
    puVar2[2] = 0;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 3) = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    *(undefined1 *)(puVar2 + 5) = 0;
    uVar1 = *(int *)(param_1 + 0xe620) + 1;
    *(uint *)(param_1 + 0xe620) = uVar1;
    if (*(uint *)(param_1 + 0xe624) < uVar1) {
      *(uint *)(param_1 + 0xe624) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00a8b194(void)

{
  FUN_00a8b1a0(DAT_031336c0);
  return;
}




undefined8 * FUN_00a8b1a0(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0xe610);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
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
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0xe614) = *(int *)(param_1 + 0xe614) + 1;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00a840a0(puVar4);
    uVar1 = *(int *)(param_1 + 0xe620) + 1;
    *(uint *)(param_1 + 0xe620) = uVar1;
    if (*(uint *)(param_1 + 0xe624) < uVar1) {
      *(uint *)(param_1 + 0xe624) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00a8b25c(void)

{
  FUN_00a8b268(DAT_031336c0);
  return;
}




undefined8 * FUN_00a8b268(long param_1)

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
    puVar2[4] = 0;
    puVar2[3] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[5] = 0;
    puVar2[2] = 0;
    puVar2[1] = 0;
    *puVar2 = &PTR_FUN_027d0160;
    *(undefined4 *)(puVar2 + 4) = 0;
    *(undefined4 *)(puVar2 + 7) = 0;
    uVar1 = *(int *)(param_1 + 0xe620) + 1;
    *(uint *)(param_1 + 0xe620) = uVar1;
    if (*(uint *)(param_1 + 0xe624) < uVar1) {
      *(uint *)(param_1 + 0xe624) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00a8b328(void)

{
  FUN_00a8b33c(DAT_031336c0 + 0xe630);
  return;
}




undefined8 * FUN_00a8b33c(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  long lVar4;
  
  uVar3 = *(ushort *)(param_1 + 0x46010);
  if ((ulong)uVar3 == 0xffff) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar4 = param_1 + (ulong)uVar3 * 0x38;
    if (uVar3 == *(ushort *)(param_1 + 0x46012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(param_1 + 0x46010) = uVar3;
    *(int *)(param_1 + 0x46014) = *(int *)(param_1 + 0x46014) + 1;
    puVar2 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[1] = 0;
    *puVar2 = &PTR_FUN_027d01a8;
    *(undefined1 *)(puVar2 + 5) = 0;
    uVar1 = *(int *)(param_1 + 0x46020) + 1;
    *(uint *)(param_1 + 0x46020) = uVar1;
    if (*(uint *)(param_1 + 0x46024) < uVar1) {
      *(uint *)(param_1 + 0x46024) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00a8b408(void)

{
  FUN_00a8b414(DAT_031336c0);
  return;
}




undefined8 * FUN_00a8b414(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  long lVar4;
  undefined8 *__s;
  
  uVar3 = *(ushort *)(param_1 + 0xe610);
  if ((ulong)uVar3 == 0xffff) {
    __s = (undefined8 *)0x0;
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
    __s = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0xe614) = *(int *)(param_1 + 0xe614) + 1;
    memset(__s,0,0x58);
    *__s = &PTR_FUN_027d01d0;
    __s[1] = 0;
    lVar4 = 0x28;
    __s[2] = 0;
    __s[3] = 0;
    *(undefined4 *)(__s + 4) = 0;
    do {
      puVar2 = (undefined8 *)((long)__s + lVar4);
      lVar4 = lVar4 + 0x18;
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined4 *)(puVar2 + 2) = 0;
    } while (lVar4 != 0x58);
    uVar1 = *(int *)(param_1 + 0xe620) + 1;
    *(uint *)(param_1 + 0xe620) = uVar1;
    if (*(uint *)(param_1 + 0xe624) < uVar1) {
      *(uint *)(param_1 + 0xe624) = uVar1;
    }
  }
  return __s;
}




void FUN_00a8b504(void)

{
  FUN_00a8b518(DAT_031336c0 + 0xe630);
  return;
}




undefined8 * FUN_00a8b518(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  long lVar4;
  
  uVar3 = *(ushort *)(param_1 + 0x46010);
  if ((ulong)uVar3 == 0xffff) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar4 = param_1 + (ulong)uVar3 * 0x38;
    if (uVar3 == *(ushort *)(param_1 + 0x46012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(param_1 + 0x46010) = uVar3;
    *(int *)(param_1 + 0x46014) = *(int *)(param_1 + 0x46014) + 1;
    puVar2 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    puVar2[6] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[1] = 0;
    *puVar2 = &PTR_FUN_027d0218;
    *(undefined1 *)(puVar2 + 6) = 0;
    uVar1 = *(int *)(param_1 + 0x46020) + 1;
    *(uint *)(param_1 + 0x46020) = uVar1;
    if (*(uint *)(param_1 + 0x46024) < uVar1) {
      *(uint *)(param_1 + 0x46024) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00a8b5e4(void)

{
  FUN_00a8b5f0(DAT_031336c0);
  return;
}




undefined8 * FUN_00a8b5f0(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0xe610);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
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
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0xe614) = *(int *)(param_1 + 0xe614) + 1;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = &PTR_FUN_027ce860;
    puVar4[1] = 0;
    FUN_00a7efe8();
    uVar1 = *(int *)(param_1 + 0xe620) + 1;
    *(uint *)(param_1 + 0xe620) = uVar1;
    if (*(uint *)(param_1 + 0xe624) < uVar1) {
      *(uint *)(param_1 + 0xe624) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00a8b6bc(void)

{
  FUN_00a8b6c8(DAT_031336c0);
  return;
}




undefined8 * FUN_00a8b6c8(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0xe610);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
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
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0xe614) = *(int *)(param_1 + 0xe614) + 1;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = &PTR_FUN_027ce8a0;
    puVar4[1] = 0;
    FUN_00a7efe8();
    uVar1 = *(int *)(param_1 + 0xe620) + 1;
    *(uint *)(param_1 + 0xe620) = uVar1;
    if (*(uint *)(param_1 + 0xe624) < uVar1) {
      *(uint *)(param_1 + 0xe624) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00a8b794(void)

{
  FUN_00a8b7a8(DAT_031336c0 + 0xe630);
  return;
}




undefined8 * FUN_00a8b7a8(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x46010);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x38;
    if (uVar2 == *(ushort *)(param_1 + 0x46012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x46010) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x46014) = *(int *)(param_1 + 0x46014) + 1;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00a7f1a0(puVar4);
    uVar1 = *(int *)(param_1 + 0x46020) + 1;
    *(uint *)(param_1 + 0x46020) = uVar1;
    if (*(uint *)(param_1 + 0x46024) < uVar1) {
      *(uint *)(param_1 + 0x46024) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00a8b878(void)

{
  FUN_00a8b884(DAT_031336c0);
  return;
}




undefined8 * FUN_00a8b884(long param_1)

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
    *(undefined4 *)(puVar2 + 2) = 0;
    *puVar2 = &PTR_FUN_027ce590;
    uVar1 = *(int *)(param_1 + 0xe620) + 1;
    *(uint *)(param_1 + 0xe620) = uVar1;
    if (*(uint *)(param_1 + 0xe624) < uVar1) {
      *(uint *)(param_1 + 0xe624) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00a8b930(void)

{
  FUN_00a8b93c(DAT_031336c0);
  return;
}




undefined8 * FUN_00a8b93c(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0xe610);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
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
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0xe614) = *(int *)(param_1 + 0xe614) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00a7f270(puVar4);
    uVar1 = *(int *)(param_1 + 0xe620) + 1;
    *(uint *)(param_1 + 0xe620) = uVar1;
    if (*(uint *)(param_1 + 0xe624) < uVar1) {
      *(uint *)(param_1 + 0xe624) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00a8b9fc(void)

{
  FUN_00a8ba10(DAT_031336c0 + 0xe630);
  return;
}




undefined8 * FUN_00a8ba10(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x46010);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x38;
    if (uVar2 == *(ushort *)(param_1 + 0x46012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x46010) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x46014) = *(int *)(param_1 + 0x46014) + 1;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00a7f24c(puVar4);
    uVar1 = *(int *)(param_1 + 0x46020) + 1;
    *(uint *)(param_1 + 0x46020) = uVar1;
    if (*(uint *)(param_1 + 0x46024) < uVar1) {
      *(uint *)(param_1 + 0x46024) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00a8bae0(void)

{
  FUN_00a8baec(DAT_031336c0);
  return;
}




undefined8 * FUN_00a8baec(long param_1)

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
    *puVar2 = &PTR_FUN_027ce818;
    puVar2[1] = 0;
    uVar1 = *(int *)(param_1 + 0xe620) + 1;
    *(uint *)(param_1 + 0xe620) = uVar1;
    if (*(uint *)(param_1 + 0xe624) < uVar1) {
      *(uint *)(param_1 + 0xe624) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00a8bb90(void)

{
  FUN_00a8bba4(DAT_031336c0 + 0xe630);
  return;
}




undefined8 * FUN_00a8bba4(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x46010);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x38;
    if (uVar2 == *(ushort *)(param_1 + 0x46012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x46010) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x46014) = *(int *)(param_1 + 0x46014) + 1;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00a7eec8(puVar4);
    uVar1 = *(int *)(param_1 + 0x46020) + 1;
    *(uint *)(param_1 + 0x46020) = uVar1;
    if (*(uint *)(param_1 + 0x46024) < uVar1) {
      *(uint *)(param_1 + 0x46024) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00a8bc74(void)

{
  FUN_00a8bc80(DAT_031336c0);
  return;
}




undefined8 * FUN_00a8bc80(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0xe610);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
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
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0xe614) = *(int *)(param_1 + 0xe614) + 1;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    FUN_00a7ee68(puVar4);
    uVar1 = *(int *)(param_1 + 0xe620) + 1;
    *(uint *)(param_1 + 0xe620) = uVar1;
    if (*(uint *)(param_1 + 0xe624) < uVar1) {
      *(uint *)(param_1 + 0xe624) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00a8bd3c(void)

{
  FUN_00a8bd48(DAT_031336c0);
  return;
}




undefined8 * FUN_00a8bd48(long param_1)

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
    memset(__s,0,0xb8);
    __s[0x14] = 0;
    __s[0x15] = 0;
    *__s = &PTR_FUN_027d0240;
    __s[1] = 0;
    __s[2] = &PTR_FUN_027d0288;
    *(undefined4 *)(__s + 0x16) = 0;
    memset(__s + 3,0,0x84);
    uVar1 = *(int *)(param_1 + 0xe620) + 1;
    *(uint *)(param_1 + 0xe620) = uVar1;
    if (*(uint *)(param_1 + 0xe624) < uVar1) {
      *(uint *)(param_1 + 0xe624) = uVar1;
    }
  }
  return __s;
}




void FUN_00a8be3c(void)

{
  FUN_00a8be50(DAT_031336c0 + 0xe630);
  return;
}




undefined8 * FUN_00a8be50(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  long lVar4;
  
  uVar3 = *(ushort *)(param_1 + 0x46010);
  if ((ulong)uVar3 == 0xffff) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar4 = param_1 + (ulong)uVar3 * 0x38;
    if (uVar3 == *(ushort *)(param_1 + 0x46012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(param_1 + 0x46010) = uVar3;
    *(int *)(param_1 + 0x46014) = *(int *)(param_1 + 0x46014) + 1;
    puVar2 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    puVar2[4] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[1] = 0;
    *puVar2 = &PTR_FUN_027d02b0;
    *(undefined1 *)(puVar2 + 4) = 0;
    uVar1 = *(int *)(param_1 + 0x46020) + 1;
    *(uint *)(param_1 + 0x46020) = uVar1;
    if (*(uint *)(param_1 + 0x46024) < uVar1) {
      *(uint *)(param_1 + 0x46024) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00a8bf18(void)

{
  FUN_00a8bf24(DAT_031336c0);
  return;
}




undefined8 * FUN_00a8bf24(long param_1)

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
    *puVar2 = &PTR_FUN_027d02d8;
    *(undefined4 *)(puVar2 + 2) = 0;
    uVar1 = *(int *)(param_1 + 0xe620) + 1;
    *(uint *)(param_1 + 0xe620) = uVar1;
    if (*(uint *)(param_1 + 0xe624) < uVar1) {
      *(uint *)(param_1 + 0xe624) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00a8bfd0(void)

{
  FUN_00a8bfdc(DAT_031336c0);
  return;
}




undefined8 * FUN_00a8bfdc(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0xe610);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
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
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0xe614) = *(int *)(param_1 + 0xe614) + 1;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    FUN_00a85364(puVar4);
    uVar1 = *(int *)(param_1 + 0xe620) + 1;
    *(uint *)(param_1 + 0xe620) = uVar1;
    if (*(uint *)(param_1 + 0xe624) < uVar1) {
      *(uint *)(param_1 + 0xe624) = uVar1;
    }
  }
  return puVar4;
}

