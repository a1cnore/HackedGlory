// functions/00981 — 19 functions
#include "libGameKindred.h"




void * FUN_00981040(long param_1)

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
    memset(__s,0,0xb0);
    FUN_00cf5400(__s);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return __s;
}




undefined8 * FUN_00981118(long param_1)

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
    FUN_00cf51e8(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_009811e8(long param_1)

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
    *puVar6 = &PTR_FUN_02810748;
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_009812c4(long param_1)

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
    FUN_00cf7af0(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_00981394(long param_1)

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
    *puVar6 = &PTR_FUN_028104a8;
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_00981470(long param_1)

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
    *puVar6 = &PTR_FUN_02810508;
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




void * FUN_0098154c(long param_1)

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
    memset(__s,0,0x48);
    FUN_00cfca88(__s);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return __s;
}




undefined8 * FUN_00981624(long param_1)

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
    FUN_00cfc438(puVar6);
    *puVar6 = &PTR_thunk_FUN_00cfc44c_027bda48;
    puVar6[3] = &PTR_FUN_027bdae0;
    puVar6[2] = &PTR_FUN_027bdab8;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_00981720(long param_1)

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
    FUN_00cf8364(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_009817f0(long param_1)

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
    *puVar6 = &PTR_thunk_FUN_00cfc44c_027bdb78;
    puVar6[2] = &PTR_FUN_027bdbe0;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_009818e0(long param_1)

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
    FUN_00cf3f38(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_009819b0(long param_1)

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
    FUN_00cf43f0(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_00981a80(long param_1)

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
    *puVar6 = &PTR_FUN_02810868;
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_00981b5c(long param_1)

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
    FUN_00cf71a8(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_00981c2c(long param_1)

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
    FUN_00cf8808(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_00981cfc(long param_1)

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
    *puVar6 = &PTR_FUN_027bdc08;
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_00981dd8(long param_1)

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
    *puVar6 = &PTR_thunk_FUN_00cfc44c_027bdc70;
    puVar6[2] = &PTR_FUN_027bdce8;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_00981ec8(long param_1)

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
    *puVar6 = &PTR_thunk_FUN_00cfc44c_027bdd10;
    puVar6[2] = &PTR_FUN_027bdce8;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_00981fb8(long param_1)

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
    FUN_00cfd9a0(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}

