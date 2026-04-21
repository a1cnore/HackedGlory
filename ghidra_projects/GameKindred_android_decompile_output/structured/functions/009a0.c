// functions/009a0 — 36 functions
#include "libGameKindred.h"




void FUN_009a0008(void)

{
  FUN_009a0024(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a0024(long param_1)

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
    *puVar4 = &PTR_FUN_027c0e78;
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




void FUN_009a00dc(void)

{
  FUN_009a00f8(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a00f8(long param_1)

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
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    FUN_00d41f68(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




void FUN_009a01c8(void)

{
  FUN_009a01e4(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a01e4(long param_1)

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
    *puVar4 = &PTR_FUN_027c0ec8;
    puVar4[1] = 0;
    puVar4[2] = &PTR_FUN_027c0f10;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar4;
}




void FUN_009a02ac(void)

{
  FUN_009a02c8(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a02c8(long param_1)

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
    *puVar4 = &PTR_FUN_027c0f90;
    puVar4[1] = 0;
    puVar4[2] = &PTR_FUN_027c0fd8;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar4;
}




void FUN_009a0390(void)

{
  FUN_009a03ac(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a03ac(long param_1)

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
    *puVar4 = &PTR_FUN_0281f288;
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




void FUN_009a0464(void)

{
  FUN_009a0480(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a0480(long param_1)

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
    puVar6[6] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[1] = 0;
    *puVar6 = &PTR_FUN_0281f820;
    FUN_00d9c29c(puVar6 + 2);
    *(undefined1 *)(puVar6 + 6) = 0;
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




void FUN_009a056c(void)

{
  FUN_009a0588(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a0588(long param_1)

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
    puVar6[4] = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[1] = 0;
    *puVar6 = &PTR_FUN_0281fa80;
    FUN_00d9bc58(puVar6 + 2);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




void FUN_009a066c(void)

{
  FUN_009a0688(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a0688(long param_1)

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
    puVar6[2] = 0;
    puVar6[3] = 0;
    *puVar6 = &PTR_FUN_0281fb20;
    puVar6[1] = 0;
    FUN_00d9bed0();
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




void FUN_009a0768(void)

{
  FUN_009a0784(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a0784(long param_1)

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
    *puVar4 = &PTR_FUN_0281f9a0;
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




void FUN_009a083c(void)

{
  FUN_009a0858(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a0858(long param_1)

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
    *puVar4 = &PTR_FUN_0281f860;
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




void FUN_009a0910(void)

{
  FUN_009a092c(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a092c(long param_1)

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
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    FUN_00d9c68c(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




void FUN_009a09fc(void)

{
  FUN_009a0a18(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a0a18(long param_1)

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
    *puVar4 = &PTR_FUN_0281f8e0;
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




void FUN_009a0ad0(void)

{
  FUN_009a0aec(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a0aec(long param_1)

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
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    FUN_00d9c790(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




void FUN_009a0bbc(void)

{
  FUN_009a0bd8(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a0bd8(long param_1)

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
    *puVar4 = &PTR_FUN_0281f920;
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




void FUN_009a0c90(void)

{
  FUN_009a0cac(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a0cac(long param_1)

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
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    FUN_00d9ca20(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




void FUN_009a0d7c(void)

{
  FUN_009a0d98(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a0d98(long param_1)

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
    puVar6[6] = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
    FUN_00d9ced8(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




void FUN_009a0e70(void)

{
  FUN_009a0e8c(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a0e8c(long param_1)

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
    *puVar4 = &PTR_FUN_0281f960;
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




void FUN_009a0f44(void)

{
  FUN_009a0f60(&DAT_02e8b460);
  return;
}




void * FUN_009a0f60(long param_1)

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
    memset(__s,0,0x48);
    FUN_00d9d488(__s);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return __s;
}

