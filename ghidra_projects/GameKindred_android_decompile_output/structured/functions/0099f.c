// functions/0099f — 36 functions
#include "libGameKindred.h"




void FUN_0099f01c(void)

{
  FUN_0099f038(&DAT_02e8b460);
  return;
}




undefined8 * FUN_0099f038(long param_1)

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
    *puVar4 = &PTR_FUN_027c08e0;
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




void FUN_0099f0f0(void)

{
  FUN_0099f10c(&DAT_02e8b460);
  return;
}




undefined8 * FUN_0099f10c(long param_1)

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
    FUN_00d986bc(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




void FUN_0099f1e0(void)

{
  FUN_0099f1fc(&DAT_02e8b460);
  return;
}




undefined8 * FUN_0099f1fc(long param_1)

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
    *puVar4 = &PTR_FUN_027c0938;
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




void FUN_0099f2b4(void)

{
  FUN_0099f2d0(&DAT_02e8b460);
  return;
}




undefined8 * FUN_0099f2d0(long param_1)

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
    *puVar4 = &PTR_FUN_027c0988;
    puVar4[1] = 0;
    puVar4[2] = &PTR_FUN_027c09d0;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar4;
}




void FUN_0099f398(void)

{
  FUN_0099f3b4(&DAT_02e8b460);
  return;
}




undefined8 * FUN_0099f3b4(long param_1)

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
    *puVar4 = &PTR_FUN_027c0a08;
    puVar4[1] = 0;
    puVar4[2] = &PTR_FUN_027c0a50;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar4;
}




void FUN_0099f47c(void)

{
  FUN_0099f498(&DAT_02e8b460);
  return;
}




undefined8 * FUN_0099f498(long param_1)

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
    *puVar4 = &PTR_FUN_027c0a88;
    puVar4[1] = 0;
    puVar4[2] = &PTR_FUN_027c0ad0;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar4;
}




void FUN_0099f560(void)

{
  FUN_0099f57c(&DAT_02e8b460);
  return;
}




undefined8 * FUN_0099f57c(long param_1)

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
    *puVar4 = &PTR_FUN_027c0b00;
    puVar4[1] = 0;
    puVar4[2] = &PTR_FUN_027c0ad0;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar4;
}




void FUN_0099f644(void)

{
  FUN_0099f660(&DAT_02e8b460);
  return;
}




void * FUN_0099f660(long param_1)

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
    memset(__s,0,0x50);
    FUN_00d9899c(__s);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return __s;
}




void FUN_0099f738(void)

{
  FUN_0099f754(&DAT_02e8b460);
  return;
}




undefined8 * FUN_0099f754(long param_1)

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
    *puVar4 = &PTR_FUN_027c0b50;
    puVar4[1] = 0;
    puVar4[2] = &PTR_FUN_027c0ba8;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar4;
}




void FUN_0099f81c(void)

{
  FUN_0099f838(&DAT_02e8b460);
  return;
}




undefined8 * FUN_0099f838(long param_1)

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
    FUN_00d98460(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




void FUN_0099f90c(void)

{
  FUN_0099f928(&DAT_02e8b460);
  return;
}




undefined8 * FUN_0099f928(long param_1)

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
    *puVar4 = &PTR_FUN_027c0c18;
    puVar4[1] = 0;
    puVar4[2] = &PTR_FUN_027c0c60;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar4;
}




void FUN_0099f9f0(void)

{
  FUN_0099fa0c(&DAT_02e8b460);
  return;
}




undefined8 * FUN_0099fa0c(long param_1)

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
    FUN_00d97d00(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




void FUN_0099fae0(void)

{
  FUN_0099fafc(&DAT_02e8b460);
  return;
}




void * FUN_0099fafc(long param_1)

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
    memset(__s,0,0x68);
    FUN_00d4762c(__s);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return __s;
}




void FUN_0099fbd4(void)

{
  FUN_0099fbf0(&DAT_02e8b460);
  return;
}




undefined8 * FUN_0099fbf0(long param_1)

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
    *puVar4 = &PTR_FUN_027c0c88;
    puVar4[1] = 0;
    puVar4[2] = &PTR_FUN_027c0ce8;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar4;
}




void FUN_0099fcb8(void)

{
  FUN_0099fcd4(&DAT_02e8b460);
  return;
}




undefined8 * FUN_0099fcd4(long param_1)

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
    *puVar4 = &PTR_FUN_027c0d28;
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




void FUN_0099fd8c(void)

{
  FUN_0099fda8(&DAT_02e8b460);
  return;
}




undefined8 * FUN_0099fda8(long param_1)

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
    *puVar4 = &PTR_FUN_027c0d78;
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




void FUN_0099fe60(void)

{
  FUN_0099fe7c(&DAT_02e8b460);
  return;
}




undefined8 * FUN_0099fe7c(long param_1)

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
    *puVar4 = &PTR_FUN_027c0dd8;
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




void FUN_0099ff34(void)

{
  FUN_0099ff50(&DAT_02e8b460);
  return;
}




undefined8 * FUN_0099ff50(long param_1)

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
    *puVar4 = &PTR_FUN_027c0e20;
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

