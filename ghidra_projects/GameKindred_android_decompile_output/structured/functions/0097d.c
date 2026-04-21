// functions/0097d — 19 functions
#include "libGameKindred.h"




undefined8 * FUN_0097d02c(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xe0;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    puVar6 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) + 1;
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    FUN_00cf6978(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_0097d0fc(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xe0;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    puVar6 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) + 1;
    *puVar6 = 0;
    puVar6[1] = 0;
    FUN_00cfc438(puVar6);
    *puVar6 = &PTR_FUN_02810688;
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_0097d1d8(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xe0;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    puVar6 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) + 1;
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    FUN_00cf6760(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_0097d2a8(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xe0;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    puVar6 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) + 1;
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    FUN_00cf6610(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_0097d378(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xe0;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    puVar6 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) + 1;
    *puVar6 = 0;
    puVar6[1] = 0;
    FUN_00cfc438(puVar6);
    *puVar6 = &PTR_FUN_02810aa8;
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_0097d454(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xe0;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    puVar6 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) + 1;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    FUN_00cfc830(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_0097d524(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xe0;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    puVar6 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) + 1;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    FUN_00cf6450(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_0097d5f4(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xe0;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    puVar6 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) + 1;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    FUN_00cfc438(puVar6);
    *puVar6 = &PTR_FUN_027bce48;
    puVar6[2] = &PTR_FUN_027bcec8;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




void * FUN_0097d6e4(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  void *__s;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    __s = (void *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xe0;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    __s = (void *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) + 1;
    memset(__s,0,0x70);
    FUN_00cf448c(__s);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return __s;
}




undefined8 * FUN_0097d7bc(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xe0;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    puVar6 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) + 1;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    FUN_00cfc438(puVar6);
    *puVar6 = &PTR_thunk_FUN_00cfc44c_027bcf00;
    puVar6[2] = &PTR_FUN_027bcf68;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_0097d8ac(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xe0;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    puVar6 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) + 1;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    FUN_00cfc438(puVar6);
    *puVar6 = &PTR_thunk_FUN_00cfc44c_027bcfe0;
    puVar6[2] = &PTR_FUN_027bcf68;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_0097d99c(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xe0;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    puVar6 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) + 1;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    FUN_00cfc438(puVar6);
    *puVar6 = &PTR_thunk_FUN_00cfc44c_027bd068;
    puVar6[2] = &PTR_FUN_027bd0d0;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_0097da8c(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xe0;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    puVar6 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) + 1;
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    FUN_00cf8190(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_0097db5c(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xe0;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    puVar6 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) + 1;
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    FUN_00cf7f24(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_0097dc2c(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xe0;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    puVar6 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) + 1;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    FUN_0097c700(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_0097dcfc(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xe0;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    puVar6 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) + 1;
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    FUN_00cf2e10(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_0097ddcc(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xe0;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    puVar6 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) + 1;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    FUN_00cfc438(puVar6);
    *puVar6 = &PTR_FUN_027bd108;
    puVar6[2] = &PTR_FUN_027bd170;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_0097debc(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xe0;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    puVar6 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) + 1;
    puVar6[4] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    FUN_00cf4970(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_0097df90(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xe0;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    puVar6 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) + 1;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    FUN_00cfc438(puVar6);
    *puVar6 = &PTR_thunk_FUN_00cfc44c_027bd188;
    puVar6[2] = &PTR_FUN_027bd210;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}

