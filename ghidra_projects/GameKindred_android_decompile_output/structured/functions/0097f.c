// functions/0097f — 19 functions
#include "libGameKindred.h"




undefined8 * FUN_0097f014(long param_1)

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
    FUN_00cf8658(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_0097f0e4(long param_1)

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
    *puVar6 = &PTR_FUN_028109e8;
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_0097f1c0(long param_1)

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
    FUN_00cf886c(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_0097f290(long param_1)

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
    FUN_00cf3fd8(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_0097f360(long param_1)

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
    FUN_00cf2f70(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_0097f430(long param_1)

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
    *puVar6 = &PTR_FUN_02810568;
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_0097f50c(long param_1)

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
    FUN_00cfc8e4(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_0097f5e0(long param_1)

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
    FUN_00d9d0b4(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_0097f6b0(long param_1)

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
    *(undefined4 *)(puVar6 + 2) = 0;
    *(undefined4 *)(puVar6 + 3) = 0;
    *puVar6 = &PTR_FUN_02810808;
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_0097f798(long param_1)

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
    *puVar6 = &PTR_FUN_02810928;
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_0097f874(long param_1)

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
    *puVar6 = &PTR_FUN_02810988;
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_0097f950(long param_1)

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
    *puVar6 = &PTR_thunk_FUN_00cfc44c_027bd618;
    puVar6[2] = &PTR_FUN_027bd680;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_0097fa40(long param_1)

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
    *(undefined2 *)(puVar6 + 2) = 0x101;
    *puVar6 = &PTR_FUN_02810448;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_0097fb28(long param_1)

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
    *puVar6 = &PTR_FUN_02810a48;
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_0097fc04(long param_1)

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
    FUN_00cf4f60(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_0097fcd4(long param_1)

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
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
    FUN_00cf7300(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_0097fda8(long param_1)

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
    FUN_00cf4d7c(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_0097fe78(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *__s;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    __s = (undefined8 *)0x0;
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
    __s = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) + 1;
    memset(__s,0,0x48);
    FUN_00cfc438(__s);
    *__s = &PTR_FUN_0281f220;
    __s[2] = &PTR_FUN_027bd718;
    FUN_00d9ff84(__s + 3,0xffffffff);
    *(undefined8 *)((long)__s + 0x26) = 0;
    __s[4] = 0;
    __s[7] = 0;
    __s[8] = 0;
    __s[6] = 0;
    *(undefined4 *)((long)__s + 0x1c) = 0xffffffff;
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return __s;
}




undefined8 * FUN_0097ff9c(long param_1)

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
    *puVar6 = &PTR_thunk_FUN_00cfc44c_027bd730;
    puVar6[2] = &PTR_FUN_027bd7a8;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}

