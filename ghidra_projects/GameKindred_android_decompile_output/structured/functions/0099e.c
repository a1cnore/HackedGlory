// functions/0099e — 36 functions
#include "libGameKindred.h"




void FUN_0099e06c(void)

{
  FUN_0099e088(&DAT_02e8b460);
  return;
}




undefined8 * FUN_0099e088(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  ushort uVar5;
  long lVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0xd4a3].r_info + param_1);
  uVar5 = *puVar2;
  if ((ulong)uVar5 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar6 = param_1 + (ulong)uVar5 * 0xd8;
    if (uVar5 == *(ushort *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 2)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar6 + 0x10);
    }
    *puVar2 = uVar5;
    *(int *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 4) + 1;
    puVar4 = (undefined8 *)(lVar6 + 0x17U & 0xfffffffffffffff8);
    *puVar4 = &PTR_FUN_027c04c8;
    puVar4[1] = 0;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar4;
}




void FUN_0099e140(void)

{
  FUN_0099e15c(&DAT_02e8b460);
  return;
}




undefined8 * FUN_0099e15c(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  ushort uVar5;
  long lVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0xd4a3].r_info + param_1);
  uVar5 = *puVar2;
  if ((ulong)uVar5 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar6 = param_1 + (ulong)uVar5 * 0xd8;
    if (uVar5 == *(ushort *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 2)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar6 + 0x10);
    }
    *puVar2 = uVar5;
    *(int *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 4) + 1;
    puVar4 = (undefined8 *)(lVar6 + 0x17U & 0xfffffffffffffff8);
    *puVar4 = &PTR_FUN_027c0508;
    puVar4[1] = 0;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar4;
}




void FUN_0099e214(void)

{
  FUN_0099e230(&DAT_02e8b460);
  return;
}




void * FUN_0099e230(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  void *__s;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0xd4a3].r_info + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    __s = (void *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xd8;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    __s = (void *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 4) + 1;
    memset(__s,0,0x60);
    FUN_00d9b1dc(__s);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return __s;
}




void FUN_0099e308(void)

{
  FUN_0099e324(&DAT_02e8b460);
  return;
}




undefined8 * FUN_0099e324(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *__s;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0xd4a3].r_info + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    __s = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xd8;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    __s = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 4) + 1;
    memset(__s,0,0xb8);
    __s[0x14] = 0;
    __s[0x15] = 0;
    *__s = &PTR_FUN_0281f380;
    __s[1] = 0;
    __s[2] = &PTR_FUN_027c0548;
    *(undefined4 *)(__s + 0x16) = 0;
    memset(__s + 3,0,0x84);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return __s;
}




void FUN_0099e42c(void)

{
  FUN_0099e448(&DAT_02e8b460);
  return;
}




undefined8 * FUN_0099e448(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  ushort uVar5;
  long lVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0xd4a3].r_info + param_1);
  uVar5 = *puVar2;
  if ((ulong)uVar5 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar6 = param_1 + (ulong)uVar5 * 0xd8;
    if (uVar5 == *(ushort *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 2)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar6 + 0x10);
    }
    *puVar2 = uVar5;
    *(int *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 4) + 1;
    puVar4 = (undefined8 *)(lVar6 + 0x17U & 0xfffffffffffffff8);
    *puVar4 = &PTR_FUN_027c0570;
    puVar4[1] = 0;
    puVar4[2] = &PTR_FUN_027c05c8;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar4;
}




void FUN_0099e510(void)

{
  FUN_0099e52c(&DAT_02e8b460);
  return;
}




undefined8 * FUN_0099e52c(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  ushort uVar5;
  long lVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0xd4a3].r_info + param_1);
  uVar5 = *puVar2;
  if ((ulong)uVar5 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar6 = param_1 + (ulong)uVar5 * 0xd8;
    if (uVar5 == *(ushort *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 2)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar6 + 0x10);
    }
    *puVar2 = uVar5;
    *(int *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 4) + 1;
    puVar4 = (undefined8 *)(lVar6 + 0x17U & 0xfffffffffffffff8);
    *puVar4 = &PTR_FUN_0281f8a0;
    puVar4[1] = 0;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar4;
}




void FUN_0099e5e4(void)

{
  FUN_0099e600(&DAT_02e8b460);
  return;
}




undefined8 * FUN_0099e600(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  ushort uVar5;
  long lVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0xd4a3].r_info + param_1);
  uVar5 = *puVar2;
  if ((ulong)uVar5 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar6 = param_1 + (ulong)uVar5 * 0xd8;
    if (uVar5 == *(ushort *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 2)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar6 + 0x10);
    }
    *puVar2 = uVar5;
    *(int *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 4) + 1;
    puVar4 = (undefined8 *)(lVar6 + 0x17U & 0xfffffffffffffff8);
    *puVar4 = &PTR_FUN_027c0678;
    puVar4[1] = 0;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar4;
}




void FUN_0099e6b8(void)

{
  FUN_0099e6d4(&DAT_02e8b460);
  return;
}




undefined8 * FUN_0099e6d4(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  ushort uVar5;
  long lVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0xd4a3].r_info + param_1);
  uVar5 = *puVar2;
  if ((ulong)uVar5 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar6 = param_1 + (ulong)uVar5 * 0xd8;
    if (uVar5 == *(ushort *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 2)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar6 + 0x10);
    }
    *puVar2 = uVar5;
    *(int *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 4) + 1;
    puVar4 = (undefined8 *)(lVar6 + 0x17U & 0xfffffffffffffff8);
    *puVar4 = &PTR_FUN_027c06b8;
    puVar4[1] = 0;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar4;
}




void FUN_0099e78c(void)

{
  FUN_0099e7a8(&DAT_02e8b460);
  return;
}




undefined8 * FUN_0099e7a8(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  ushort uVar5;
  long lVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0xd4a3].r_info + param_1);
  uVar5 = *puVar2;
  if ((ulong)uVar5 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar6 = param_1 + (ulong)uVar5 * 0xd8;
    if (uVar5 == *(ushort *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 2)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar6 + 0x10);
    }
    *puVar2 = uVar5;
    *(int *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 4) + 1;
    puVar4 = (undefined8 *)(lVar6 + 0x17U & 0xfffffffffffffff8);
    *puVar4 = &PTR_FUN_027c06f8;
    puVar4[1] = 0;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar4;
}




void FUN_0099e860(void)

{
  FUN_0099e87c(&DAT_02e8b460);
  return;
}




undefined8 * FUN_0099e87c(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  ushort uVar5;
  long lVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0xd4a3].r_info + param_1);
  uVar5 = *puVar2;
  if ((ulong)uVar5 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar6 = param_1 + (ulong)uVar5 * 0xd8;
    if (uVar5 == *(ushort *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 2)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar6 + 0x10);
    }
    *puVar2 = uVar5;
    *(int *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 4) + 1;
    puVar4 = (undefined8 *)(lVar6 + 0x17U & 0xfffffffffffffff8);
    *puVar4 = &PTR_FUN_0281b348;
    puVar4[1] = 0;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar4;
}




void FUN_0099e934(void)

{
  FUN_0099e950(&DAT_02e8b460);
  return;
}




undefined8 * FUN_0099e950(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  ushort uVar5;
  long lVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0xd4a3].r_info + param_1);
  uVar5 = *puVar2;
  if ((ulong)uVar5 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar6 = param_1 + (ulong)uVar5 * 0xd8;
    if (uVar5 == *(ushort *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 2)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar6 + 0x10);
    }
    *puVar2 = uVar5;
    *(int *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 4) + 1;
    puVar4 = (undefined8 *)(lVar6 + 0x17U & 0xfffffffffffffff8);
    *puVar4 = &PTR_FUN_027c0738;
    puVar4[1] = 0;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar4;
}




void FUN_0099ea08(void)

{
  FUN_0099ea24(&DAT_02e8b460);
  return;
}




undefined8 * FUN_0099ea24(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  ushort uVar5;
  long lVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0xd4a3].r_info + param_1);
  uVar5 = *puVar2;
  if ((ulong)uVar5 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar6 = param_1 + (ulong)uVar5 * 0xd8;
    if (uVar5 == *(ushort *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 2)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar6 + 0x10);
    }
    *puVar2 = uVar5;
    *(int *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 4) + 1;
    puVar4 = (undefined8 *)(lVar6 + 0x17U & 0xfffffffffffffff8);
    *puVar4 = &PTR_FUN_0281b618;
    puVar4[1] = 0;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar4;
}




void FUN_0099eadc(void)

{
  FUN_0099eaf8(&DAT_02e8b460);
  return;
}




undefined8 * FUN_0099eaf8(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  ushort uVar5;
  long lVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0xd4a3].r_info + param_1);
  uVar5 = *puVar2;
  if ((ulong)uVar5 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar6 = param_1 + (ulong)uVar5 * 0xd8;
    if (uVar5 == *(ushort *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 2)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar6 + 0x10);
    }
    *puVar2 = uVar5;
    *(int *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 4) + 1;
    puVar4 = (undefined8 *)(lVar6 + 0x17U & 0xfffffffffffffff8);
    *puVar4 = &PTR_FUN_027c0788;
    puVar4[1] = 0;
    puVar4[2] = &PTR_FUN_027c07d8;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar4;
}




void FUN_0099ebc0(void)

{
  FUN_0099ebdc(&DAT_02e8b460);
  return;
}




undefined8 * FUN_0099ebdc(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  ushort uVar5;
  long lVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0xd4a3].r_info + param_1);
  uVar5 = *puVar2;
  if ((ulong)uVar5 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar6 = param_1 + (ulong)uVar5 * 0xd8;
    if (uVar5 == *(ushort *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 2)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar6 + 0x10);
    }
    *puVar2 = uVar5;
    *(int *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 4) + 1;
    puVar4 = (undefined8 *)(lVar6 + 0x17U & 0xfffffffffffffff8);
    *puVar4 = &PTR_FUN_027c0860;
    puVar4[1] = 0;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar4;
}




void FUN_0099ec94(void)

{
  FUN_0099ecb0(&DAT_02e8b460);
  return;
}




undefined8 * FUN_0099ecb0(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  ushort uVar5;
  long lVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0xd4a3].r_info + param_1);
  uVar5 = *puVar2;
  if ((ulong)uVar5 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar6 = param_1 + (ulong)uVar5 * 0xd8;
    if (uVar5 == *(ushort *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 2)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar6 + 0x10);
    }
    *puVar2 = uVar5;
    *(int *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 4) + 1;
    puVar4 = (undefined8 *)(lVar6 + 0x17U & 0xfffffffffffffff8);
    *puVar4 = &PTR_FUN_027c08a0;
    puVar4[1] = 0;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar4;
}




void FUN_0099ed68(void)

{
  FUN_0099ed84(&DAT_02e8b460);
  return;
}




undefined8 * FUN_0099ed84(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  ushort uVar5;
  long lVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0xd4a3].r_info + param_1);
  uVar5 = *puVar2;
  if ((ulong)uVar5 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar6 = param_1 + (ulong)uVar5 * 0xd8;
    if (uVar5 == *(ushort *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 2)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar6 + 0x10);
    }
    *puVar2 = uVar5;
    *(int *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 4) + 1;
    puVar4 = (undefined8 *)(lVar6 + 0x17U & 0xfffffffffffffff8);
    *puVar4 = &PTR_FUN_0281b5d8;
    puVar4[1] = 0;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar4;
}




void FUN_0099ee3c(void)

{
  FUN_0099ee58(&DAT_02e8b460);
  return;
}




undefined8 * FUN_0099ee58(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0xd4a3].r_info + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xd8;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    puVar6 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 4) + 1;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
    FUN_00d98290(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




void FUN_0099ef2c(void)

{
  FUN_0099ef48(&DAT_02e8b460);
  return;
}




undefined8 * FUN_0099ef48(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0xd4a3].r_info + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xd8;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    puVar6 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 4) + 1;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
    FUN_00d97fb0(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}

