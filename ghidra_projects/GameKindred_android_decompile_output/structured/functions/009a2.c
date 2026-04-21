// functions/009a2 — 36 functions
#include "libGameKindred.h"




void FUN_009a2004(void)

{
  FUN_009a2020(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a2020(long param_1)

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
    *puVar4 = &PTR_FUN_027ce610;
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




void FUN_009a20d8(void)

{
  FUN_009a20f4(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a20f4(long param_1)

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
    FUN_009a45c8(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




void FUN_009a21c8(void)

{
  FUN_009a21e4(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a21e4(long param_1)

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
    FUN_009a490c(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




void FUN_009a22b8(void)

{
  FUN_009a22d4(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a22d4(long param_1)

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
    puVar6[2] = &PTR_FUN_027bddd0;
    puVar6[4] = 0;
    *puVar6 = &PTR_FUN_027ce0c0;
    puVar6[1] = 0;
    FUN_00a7d574();
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




void FUN_009a23c4(void)

{
  FUN_009a23e0(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a23e0(long param_1)

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
    *puVar4 = &PTR_FUN_027cf590;
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




void FUN_009a2498(void)

{
  FUN_009a24b4(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a24b4(long param_1)

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
    *puVar4 = &PTR_FUN_027cf610;
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




void FUN_009a256c(void)

{
  FUN_009a2588(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a2588(long param_1)

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
    *puVar4 = &PTR_FUN_027cf5d0;
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




void FUN_009a2640(void)

{
  FUN_009a265c(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a265c(long param_1)

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
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = &PTR_FUN_027ce998;
    puVar4[1] = 0;
    puVar4[3] = &PTR_FUN_027c0838;
    puVar4[2] = &PTR_FUN_027c0810;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar4;
}




void FUN_009a273c(void)

{
  FUN_009a2758(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a2758(long param_1)

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
    *puVar4 = &PTR_FUN_027c1878;
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




void FUN_009a2810(void)

{
  FUN_009a282c(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a282c(long param_1)

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
    FUN_00a80614(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




void FUN_009a2904(void)

{
  FUN_009a2920(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a2920(long param_1)

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
    FUN_009a4d04(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




void FUN_009a29f4(void)

{
  FUN_009a2a10(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a2a10(long param_1)

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
    FUN_009a4e3c(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




void FUN_009a2ae0(void)

{
  FUN_009a2afc(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a2afc(long param_1)

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
    FUN_009a4f20(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




void FUN_009a2bcc(void)

{
  FUN_009a2be8(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a2be8(long param_1)

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
    memset(__s,0,0x68);
    *__s = &PTR_FUN_027ce260;
    __s[1] = 0;
    FUN_00a7de10(__s + 3);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return __s;
}




void FUN_009a2cd0(void)

{
  FUN_009a2cec(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a2cec(long param_1)

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
    FUN_009a504c(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




void FUN_009a2dbc(void)

{
  FUN_009a2dd8(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a2dd8(long param_1)

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
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_FUN_027cf4b0;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar4;
}




void FUN_009a2e98(void)

{
  FUN_009a2eb4(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a2eb4(long param_1)

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
    puVar6[2] = &PTR_FUN_027c0f50;
    puVar6[7] = 0;
    puVar6[6] = 0;
    puVar6[5] = 0;
    *puVar6 = &PTR_FUN_027cdfa0;
    puVar6[1] = 0;
    FUN_00a7d114();
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




void FUN_009a2fac(void)

{
  FUN_009a2fc8(&DAT_02e8b460);
  return;
}




void * FUN_009a2fc8(long param_1)

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
    FUN_00a7d418(__s);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return __s;
}

