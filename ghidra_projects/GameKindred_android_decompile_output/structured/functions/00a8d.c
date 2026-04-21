// functions/00a8d — 36 functions
#include "libGameKindred.h"




undefined8 * FUN_00a8d004(long param_1)

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
    *puVar2 = &PTR_FUN_027cf2d0;
    puVar2[1] = 0;
    uVar1 = *(int *)(param_1 + 0xf020) + 1;
    *(uint *)(param_1 + 0xf020) = uVar1;
    if (*(uint *)(param_1 + 0xf024) < uVar1) {
      *(uint *)(param_1 + 0xf024) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00a8d0a8(void)

{
  FUN_00a8d0b4(DAT_031336c8);
  return;
}




undefined8 * FUN_00a8d0b4(long param_1)

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
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00a7f4f8(puVar4);
    uVar1 = *(int *)(param_1 + 0xf020) + 1;
    *(uint *)(param_1 + 0xf020) = uVar1;
    if (*(uint *)(param_1 + 0xf024) < uVar1) {
      *(uint *)(param_1 + 0xf024) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00a8d170(void)

{
  FUN_00a8d17c(DAT_031336c8);
  return;
}




undefined8 * FUN_00a8d17c(long param_1)

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
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00a7f654(puVar4);
    uVar1 = *(int *)(param_1 + 0xf020) + 1;
    *(uint *)(param_1 + 0xf020) = uVar1;
    if (*(uint *)(param_1 + 0xf024) < uVar1) {
      *(uint *)(param_1 + 0xf024) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00a8d238(void)

{
  FUN_00a8d24c(DAT_031336c8 + 0xf030);
  return;
}




undefined8 * FUN_00a8d24c(long param_1)

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
    *puVar2 = &PTR_FUN_027d06b0;
    *(undefined4 *)(puVar2 + 4) = DAT_03214ce8;
    uVar1 = *(int *)(param_1 + 0x32020) + 1;
    *(uint *)(param_1 + 0x32020) = uVar1;
    if (*(uint *)(param_1 + 0x32024) < uVar1) {
      *(uint *)(param_1 + 0x32024) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00a8d320(void)

{
  FUN_00a8d32c(DAT_031336c8);
  return;
}




undefined8 * FUN_00a8d32c(long param_1)

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
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00a7f858(puVar4);
    uVar1 = *(int *)(param_1 + 0xf020) + 1;
    *(uint *)(param_1 + 0xf020) = uVar1;
    if (*(uint *)(param_1 + 0xf024) < uVar1) {
      *(uint *)(param_1 + 0xf024) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00a8d3ec(void)

{
  FUN_00a8d3f8(DAT_031336c8);
  return;
}




undefined8 * FUN_00a8d3f8(long param_1)

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
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = &PTR_FUN_027ce8e8;
    puVar4[1] = 0;
    FUN_00e70510();
    uVar1 = *(int *)(param_1 + 0xf020) + 1;
    *(uint *)(param_1 + 0xf020) = uVar1;
    if (*(uint *)(param_1 + 0xf024) < uVar1) {
      *(uint *)(param_1 + 0xf024) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00a8d4c4(void)

{
  FUN_00a8d4d0(DAT_031336c8);
  return;
}




undefined8 * FUN_00a8d4d0(long param_1)

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
    puVar4[2] = 0;
    puVar4[1] = 0;
    puVar4[4] = 0;
    puVar4[3] = 0;
    puVar4[5] = 0;
    *puVar4 = &PTR_FUN_027ce940;
    *(undefined4 *)(puVar4 + 2) = 0;
    *(undefined4 *)(puVar4 + 3) = 0;
    FUN_00e70510(puVar4 + 4);
    uVar1 = *(int *)(param_1 + 0xf020) + 1;
    *(uint *)(param_1 + 0xf020) = uVar1;
    if (*(uint *)(param_1 + 0xf024) < uVar1) {
      *(uint *)(param_1 + 0xf024) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00a8d5ac(void)

{
  FUN_00a8d5c4(DAT_031336c0 + 0x57670);
  return;
}




undefined8 * FUN_00a8d5c4(long param_1)

{
  uint uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  undefined2 uVar4;
  long lVar5;
  
  uVar2 = *(ushort *)(param_1 + 0x1210);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar2 * 0x48;
    if (uVar2 == *(ushort *)(param_1 + 0x1212)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(undefined2 *)(lVar5 + 0x10);
    }
    *(undefined2 *)(param_1 + 0x1210) = uVar4;
    puVar3 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x1214) = *(int *)(param_1 + 0x1214) + 1;
    puVar3[7] = 0;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[1] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    *(undefined4 *)(puVar3 + 7) = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    *puVar3 = &PTR_thunk_FUN_00a89274_027d06d8;
    uVar1 = *(int *)(param_1 + 0x1220) + 1;
    *(uint *)(param_1 + 0x1220) = uVar1;
    if (*(uint *)(param_1 + 0x1224) < uVar1) {
      *(uint *)(param_1 + 0x1224) = uVar1;
    }
  }
  return puVar3;
}




void FUN_00a8d668(void)

{
  FUN_00a8d680(DAT_031336c0 + 0x57670);
  return;
}




undefined8 * FUN_00a8d680(long param_1)

{
  uint uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  undefined2 uVar4;
  long lVar5;
  
  uVar2 = *(ushort *)(param_1 + 0x1210);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar2 * 0x48;
    if (uVar2 == *(ushort *)(param_1 + 0x1212)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(undefined2 *)(lVar5 + 0x10);
    }
    *(undefined2 *)(param_1 + 0x1210) = uVar4;
    puVar3 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x1214) = *(int *)(param_1 + 0x1214) + 1;
    puVar3[7] = 0;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[1] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    *(undefined4 *)(puVar3 + 7) = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    *puVar3 = &PTR_FUN_027d0740;
    uVar1 = *(int *)(param_1 + 0x1220) + 1;
    *(uint *)(param_1 + 0x1220) = uVar1;
    if (*(uint *)(param_1 + 0x1224) < uVar1) {
      *(uint *)(param_1 + 0x1224) = uVar1;
    }
  }
  return puVar3;
}




void FUN_00a8d724(void)

{
  FUN_00a8d73c(DAT_031336c0 + 0x57670);
  return;
}




undefined8 * FUN_00a8d73c(long param_1)

{
  uint uVar1;
  ushort uVar2;
  undefined2 uVar3;
  long lVar4;
  undefined8 *__s;
  
  uVar2 = *(ushort *)(param_1 + 0x1210);
  if ((ulong)uVar2 == 0xffff) {
    __s = (undefined8 *)0x0;
  }
  else {
    lVar4 = param_1 + (ulong)uVar2 * 0x48;
    if (uVar2 == *(ushort *)(param_1 + 0x1212)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(undefined2 *)(lVar4 + 0x10);
    }
    __s = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    *(undefined2 *)(param_1 + 0x1210) = uVar3;
    *(int *)(param_1 + 0x1214) = *(int *)(param_1 + 0x1214) + 1;
    memset(__s,0,0x48);
    *(undefined4 *)(__s + 7) = 0;
    __s[5] = 0;
    __s[6] = 0;
    *(undefined4 *)(__s + 4) = 0;
    __s[2] = 0;
    __s[3] = 0;
    *__s = &PTR_FUN_027d07a8;
    __s[1] = 0;
    *(undefined4 *)(__s + 8) = 0;
    uVar1 = *(int *)(param_1 + 0x1220) + 1;
    *(uint *)(param_1 + 0x1220) = uVar1;
    if (*(uint *)(param_1 + 0x1224) < uVar1) {
      *(uint *)(param_1 + 0x1224) = uVar1;
    }
  }
  return __s;
}




void FUN_00a8d800(void)

{
  FUN_00a8d818(DAT_031336c0 + 0x57670);
  return;
}




undefined8 * FUN_00a8d818(long param_1)

{
  uint uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  undefined2 uVar4;
  long lVar5;
  
  uVar2 = *(ushort *)(param_1 + 0x1210);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar2 * 0x48;
    if (uVar2 == *(ushort *)(param_1 + 0x1212)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(undefined2 *)(lVar5 + 0x10);
    }
    *(undefined2 *)(param_1 + 0x1210) = uVar4;
    puVar3 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x1214) = *(int *)(param_1 + 0x1214) + 1;
    puVar3[7] = 0;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[1] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    *(undefined4 *)(puVar3 + 7) = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    *puVar3 = &PTR_FUN_027cfae8;
    uVar1 = *(int *)(param_1 + 0x1220) + 1;
    *(uint *)(param_1 + 0x1220) = uVar1;
    if (*(uint *)(param_1 + 0x1224) < uVar1) {
      *(uint *)(param_1 + 0x1224) = uVar1;
    }
  }
  return puVar3;
}




void FUN_00a8d8bc(void)

{
  FUN_00a8d8d4(DAT_031336c0 + 0x57670);
  return;
}




undefined8 * FUN_00a8d8d4(long param_1)

{
  uint uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  undefined2 uVar4;
  long lVar5;
  
  uVar2 = *(ushort *)(param_1 + 0x1210);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar2 * 0x48;
    if (uVar2 == *(ushort *)(param_1 + 0x1212)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(undefined2 *)(lVar5 + 0x10);
    }
    *(undefined2 *)(param_1 + 0x1210) = uVar4;
    puVar3 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x1214) = *(int *)(param_1 + 0x1214) + 1;
    puVar3[7] = 0;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[1] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    *(undefined4 *)(puVar3 + 7) = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    *puVar3 = &PTR_FUN_027d0810;
    uVar1 = *(int *)(param_1 + 0x1220) + 1;
    *(uint *)(param_1 + 0x1220) = uVar1;
    if (*(uint *)(param_1 + 0x1224) < uVar1) {
      *(uint *)(param_1 + 0x1224) = uVar1;
    }
  }
  return puVar3;
}




void FUN_00a8d978(void)

{
  FUN_00a8d990(DAT_031336c8 + 0x44070);
  return;
}




undefined8 * FUN_00a8d990(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *__s;
  
  uVar2 = *(ushort *)(param_1 + 0x3e10);
  if ((ulong)uVar2 == 0xffff) {
    __s = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0xf8;
    if (uVar2 == *(ushort *)(param_1 + 0x3e12)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x3e10) = uVar2;
    __s = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x3e14) = *(int *)(param_1 + 0x3e14) + 1;
    memset(__s,0,0x60);
    __s[6] = 0;
    __s[7] = 0;
    *(undefined4 *)(__s + 8) = 0;
    __s[2] = 0;
    __s[3] = 0;
    *(undefined4 *)(__s + 4) = 0;
    __s[9] = 0;
    *(undefined1 *)(__s + 10) = 0;
    __s[5] = &PTR_FUN_027cfc38;
    *__s = &PTR_FUN_027d0878;
    __s[1] = 0;
    *(undefined1 *)(__s + 0xb) = 0;
    uVar1 = *(int *)(param_1 + 0x3e20) + 1;
    *(uint *)(param_1 + 0x3e20) = uVar1;
    if (*(uint *)(param_1 + 0x3e24) < uVar1) {
      *(uint *)(param_1 + 0x3e24) = uVar1;
    }
  }
  return __s;
}




void FUN_00a8da78(void)

{
  FUN_00a8da90(DAT_031336c8 + 0x44070);
  return;
}




undefined8 * FUN_00a8da90(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ushort uVar3;
  long lVar4;
  undefined8 *__s;
  
  uVar3 = *(ushort *)(param_1 + 0x3e10);
  if ((ulong)uVar3 == 0xffff) {
    __s = (undefined8 *)0x0;
  }
  else {
    lVar4 = param_1 + (ulong)uVar3 * 0xf8;
    if (uVar3 == *(ushort *)(param_1 + 0x3e12)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(param_1 + 0x3e10) = uVar3;
    __s = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x3e14) = *(int *)(param_1 + 0x3e14) + 1;
    memset(__s,0,0x80);
    __s[7] = 0;
    *(undefined4 *)(__s + 8) = 0;
    __s[2] = 0;
    __s[3] = 0;
    *(undefined4 *)(__s + 4) = 0;
    __s[9] = 0;
    *(undefined1 *)(__s + 10) = 0;
    *(undefined1 *)(__s + 0xb) = 0;
    __s[5] = &PTR_FUN_027cfc38;
    __s[6] = 0;
    *__s = &PTR_FUN_027d08d8;
    __s[1] = 0;
    __s[0xc] = &PTR_FUN_027d0940;
    __s[0xd] = 0;
    uVar2 = DAT_03214ce8;
    *(undefined4 *)(__s + 0xf) = 0;
    *(undefined4 *)(__s + 0xe) = uVar2;
    uVar1 = *(int *)(param_1 + 0x3e20) + 1;
    *(uint *)(param_1 + 0x3e20) = uVar1;
    if (*(uint *)(param_1 + 0x3e24) < uVar1) {
      *(uint *)(param_1 + 0x3e24) = uVar1;
    }
  }
  return __s;
}




void FUN_00a8db94(void)

{
  FUN_00a8dbac(DAT_031336c8 + 0x44070);
  return;
}




undefined8 * FUN_00a8dbac(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ushort uVar3;
  long lVar4;
  undefined8 *__s;
  
  uVar3 = *(ushort *)(param_1 + 0x3e10);
  if ((ulong)uVar3 == 0xffff) {
    __s = (undefined8 *)0x0;
  }
  else {
    lVar4 = param_1 + (ulong)uVar3 * 0xf8;
    if (uVar3 == *(ushort *)(param_1 + 0x3e12)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(param_1 + 0x3e10) = uVar3;
    __s = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x3e14) = *(int *)(param_1 + 0x3e14) + 1;
    memset(__s,0,0xf8);
    __s[7] = 0;
    *(undefined4 *)(__s + 8) = 0;
    __s[2] = 0;
    __s[3] = 0;
    *(undefined4 *)(__s + 4) = 0;
    __s[9] = 0;
    *(undefined1 *)(__s + 10) = 0;
    *(undefined1 *)(__s + 0xb) = 0;
    __s[5] = &PTR_FUN_027cfc38;
    __s[6] = 0;
    *__s = &PTR_FUN_027d0968;
    __s[1] = 0;
    __s[0xc] = &PTR_FUN_027d09d0;
    __s[0xd] = 0;
    uVar2 = DAT_03214ce8;
    __s[0xf] = &PTR_FUN_027d0288;
    *(undefined4 *)(__s + 0xe) = uVar2;
    memset(__s + 0x10,0,0x71);
    uVar1 = *(int *)(param_1 + 0x3e20) + 1;
    *(uint *)(param_1 + 0x3e20) = uVar1;
    if (*(uint *)(param_1 + 0x3e24) < uVar1) {
      *(uint *)(param_1 + 0x3e24) = uVar1;
    }
  }
  return __s;
}




void FUN_00a8dccc(void)

{
  FUN_00a8dce4(DAT_031336c8 + 0x44070);
  return;
}




void * FUN_00a8dce4(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  void *__s;
  
  uVar2 = *(ushort *)(param_1 + 0x3e10);
  if ((ulong)uVar2 == 0xffff) {
    __s = (void *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0xf8;
    if (uVar2 == *(ushort *)(param_1 + 0x3e12)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x3e10) = uVar2;
    __s = (void *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x3e14) = *(int *)(param_1 + 0x3e14) + 1;
    memset(__s,0,0x60);
    FUN_00a88a34(__s);
    uVar1 = *(int *)(param_1 + 0x3e20) + 1;
    *(uint *)(param_1 + 0x3e20) = uVar1;
    if (*(uint *)(param_1 + 0x3e24) < uVar1) {
      *(uint *)(param_1 + 0x3e24) = uVar1;
    }
  }
  return __s;
}




void FUN_00a8dd98(void)

{
  FUN_00a8ddb0(DAT_031336c8 + 0x44070);
  return;
}




void * FUN_00a8ddb0(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  void *__s;
  
  uVar2 = *(ushort *)(param_1 + 0x3e10);
  if ((ulong)uVar2 == 0xffff) {
    __s = (void *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0xf8;
    if (uVar2 == *(ushort *)(param_1 + 0x3e12)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x3e10) = uVar2;
    __s = (void *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x3e14) = *(int *)(param_1 + 0x3e14) + 1;
    memset(__s,0,0x70);
    FUN_00a88d38(__s);
    uVar1 = *(int *)(param_1 + 0x3e20) + 1;
    *(uint *)(param_1 + 0x3e20) = uVar1;
    if (*(uint *)(param_1 + 0x3e24) < uVar1) {
      *(uint *)(param_1 + 0x3e24) = uVar1;
    }
  }
  return __s;
}




undefined4 FUN_00a8de64(byte *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 == (byte *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar4 = (uint)*param_1;
    uVar3 = 0x811c9dc5;
    if (*param_1 != 0) {
      do {
        param_1 = param_1 + 1;
        uVar3 = (uVar3 ^ uVar4) * 0x1000193;
        uVar4 = (uint)*param_1;
      } while (*param_1 != 0);
    }
  }
  if (DAT_031336d0 != 0) {
    uVar4 = 0;
    if (DAT_031336d0 != 0) {
      uVar4 = uVar3 / DAT_031336d0;
    }
    uVar4 = uVar3 - uVar4 * DAT_031336d0;
    while ((*(uint *)(DAT_031336d8 + (ulong)uVar4 * 8) != uVar3 &&
           (*(int *)(DAT_031336d8 + (ulong)uVar4 * 8 + 4) != -1))) {
      uVar2 = DAT_031336d0;
      if (0 < (int)uVar4) {
        uVar2 = uVar4;
      }
      uVar4 = uVar2 - 1;
    }
    if (((uVar4 != 0xffffffff) &&
        (uVar3 = *(uint *)(DAT_031336d8 + (ulong)uVar4 * 8 + 4), uVar3 != 0xffffffff)) &&
       (puVar1 = (undefined4 *)(DAT_031336f0 + (ulong)uVar3 * 4), puVar1 != (undefined4 *)0x0)) {
      return *puVar1;
    }
  }
  return 0x45;
}




void FUN_00a8df24(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00a8df3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_027cfc48)[param_1 & 0xffffffff])(param_2,param_3,param_4);
  return;
}




void FUN_00a8df40(void)

{
  long lVar1;
  void *pvVar2;
  undefined4 local_34;
  undefined4 auStack_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0x588b0);
  FUN_00a899dc();
  DAT_031336c0 = pvVar2;
  pvVar2 = operator_new(0x47eb0);
  FUN_00a8a0b4();
  local_34 = 0;
  auStack_30[0] = 0x8c9fb2bb;
  DAT_031336c8 = pvVar2;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 1;
  auStack_30[0] = 0x30f66618;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 2;
  auStack_30[0] = 0xc7836a40;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 3;
  auStack_30[0] = 0x7901e02e;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 4;
  auStack_30[0] = 0x48d50fa7;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 5;
  auStack_30[0] = 0x4bbdb0b7;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 6;
  auStack_30[0] = 0xae76a1c8;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 7;
  auStack_30[0] = 0xfa76a560;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 8;
  auStack_30[0] = 0xee533448;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 9;
  auStack_30[0] = 0xc3fccc07;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 10;
  auStack_30[0] = 0x9eaf0de7;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0xb;
  auStack_30[0] = 0xb103e709;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0xc;
  auStack_30[0] = 0xa0c16896;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0xd;
  auStack_30[0] = 0xd66a2b9;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0xe;
  auStack_30[0] = 0x2594f1f9;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0xf;
  auStack_30[0] = 0xc6c82813;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x10;
  auStack_30[0] = 0xe29c2c34;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x11;
  auStack_30[0] = 0xec3e6307;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x12;
  auStack_30[0] = 0x434dad11;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x13;
  auStack_30[0] = 0xd931cdac;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x14;
  auStack_30[0] = 0xa5b81b93;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x15;
  auStack_30[0] = 0xa6b81d26;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x16;
  auStack_30[0] = 0xa7b81eb9;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x17;
  auStack_30[0] = 0x829b4398;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x18;
  auStack_30[0] = 0x7b169cd7;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x19;
  auStack_30[0] = 0x355426ff;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x1a;
  auStack_30[0] = 0x6f1ef411;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x1b;
  auStack_30[0] = 0xd9a9b054;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x1c;
  auStack_30[0] = 0x167471d3;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x1d;
  auStack_30[0] = 0x5d80f5c3;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x1e;
  auStack_30[0] = 0xb3ba0522;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x1f;
  auStack_30[0] = 0x107914d6;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x20;
  auStack_30[0] = 0x85145f2c;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x21;
  auStack_30[0] = 0x268f0062;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x22;
  auStack_30[0] = 0x61372321;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x23;
  auStack_30[0] = 0xc9181570;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x24;
  auStack_30[0] = 0x485033e7;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x25;
  auStack_30[0] = 0x1c58209f;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x26;
  auStack_30[0] = 0x8b52ec7d;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x27;
  auStack_30[0] = 0xdca9b50d;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x28;
  auStack_30[0] = 0x6929a1fa;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x29;
  auStack_30[0] = 0x93d88856;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x2a;
  auStack_30[0] = 0x80989fb1;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x2b;
  auStack_30[0] = 0xc5273f73;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x2c;
  auStack_30[0] = 0x679475cd;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x2d;
  auStack_30[0] = 0x5699ca14;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x2e;
  auStack_30[0] = 0x2d43e96b;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x2f;
  auStack_30[0] = 0x3c41d161;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x30;
  auStack_30[0] = 0x779cd8f2;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x31;
  auStack_30[0] = 0x1605b3ed;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x32;
  auStack_30[0] = 0x7edfbdb1;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x33;
  auStack_30[0] = 0x92fe66fc;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x34;
  auStack_30[0] = 0xf6f7a4a1;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x35;
  auStack_30[0] = 0x34e3f9b8;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x36;
  auStack_30[0] = 0x6527c140;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x37;
  auStack_30[0] = 0x287977a3;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x38;
  auStack_30[0] = 0xfdea3d2c;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x39;
  auStack_30[0] = 0xc01911bb;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x3a;
  auStack_30[0] = 0x9ceff677;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x3b;
  auStack_30[0] = 0xf3c5e760;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x3c;
  auStack_30[0] = 0xdac4737a;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x3d;
  auStack_30[0] = 0x3cd954eb;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x3e;
  auStack_30[0] = 0xfbf2d6a1;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x3f;
  auStack_30[0] = 0xf54b274a;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x40;
  auStack_30[0] = 0x46964b3d;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x41;
  auStack_30[0] = 0xd370aced;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x42;
  auStack_30[0] = 0xc1e491de;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x43;
  auStack_30[0] = 0xc80d0c45;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  local_34 = 0x44;
  auStack_30[0] = 0xba9ab765;
  FUN_00a8e85c(&DAT_031336d0,auStack_30,&local_34);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

