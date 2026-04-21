// functions/009a3 — 132 functions
#include "libGameKindred.h"




void FUN_009a30a0(void)

{
  FUN_009a30bc(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a30bc(long param_1)

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
    FUN_009a52b0(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




void FUN_009a318c(void)

{
  FUN_009a31a8(&DAT_02e8b460);
  return;
}




void * FUN_009a31a8(long param_1)

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
    memset(__s,0,0xd8);
    FUN_00a837a0(__s);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return __s;
}




void FUN_009a3280(void)

{
  FUN_009a329c(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a329c(long param_1)

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
    memset(__s,0,0x60);
    *__s = &PTR_FUN_027c1000;
    __s[1] = 0;
    __s[2] = &PTR_FUN_027bdfc0;
    FUN_00a84230(__s + 3);
    *(byte *)(__s + 0xb) = *(byte *)(__s + 0xb) & 0xfe;
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return __s;
}




void FUN_009a33a0(void)

{
  FUN_009a33bc(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a33bc(long param_1)

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
    memset(__s,0,0x60);
    *__s = &PTR_FUN_027c1050;
    __s[1] = 0;
    __s[2] = &PTR_FUN_027bdfc0;
    FUN_00a84448(__s + 3);
    *(byte *)(__s + 0xb) = *(byte *)(__s + 0xb) & 0xfe;
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return __s;
}




void FUN_009a34c0(void)

{
  FUN_009a34dc(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a34dc(long param_1)

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
    *__s = &PTR_FUN_027c10a0;
    __s[1] = 0;
    __s[2] = &PTR_FUN_027bdfc0;
    FUN_00a84230(__s + 3);
    __s[0xb] = 0;
    *(undefined4 *)(__s + 0xc) = DAT_03214ce8;
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return __s;
}




void FUN_009a35e8(void)

{
  FUN_009a3604(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a3604(long param_1)

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
    *__s = &PTR_FUN_027c10e8;
    __s[1] = 0;
    __s[2] = &PTR_FUN_027bdfc0;
    FUN_00a84448(__s + 3);
    __s[0xb] = 0;
    *(undefined4 *)(__s + 0xc) = DAT_03214ce8;
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return __s;
}




void FUN_009a3710(void)

{
  FUN_009a372c(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a372c(long param_1)

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
    puVar6[2] = &PTR_FUN_027be080;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *puVar6 = &PTR_FUN_027cf468;
    puVar6[1] = 0;
    FUN_00a84df0();
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




void FUN_009a381c(void)

{
  FUN_009a3838(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a3838(long param_1)

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
    *puVar4 = &PTR_FUN_027ce408;
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




void FUN_009a38f0(void)

{
  FUN_009a390c(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a390c(long param_1)

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
    FUN_00a7e118(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




void FUN_009a39e4(void)

{
  FUN_009a3a00(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a3a00(long param_1)

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
    *puVar4 = &PTR_FUN_027cf650;
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




void FUN_009a3ab8(void)

{
  FUN_009a3ad4(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a3ad4(long param_1)

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
    FUN_00a7e610(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0xd4a4].r_offset + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




void FUN_009a3bac(void)

{
  FUN_009a3bc8(&DAT_02e8b460);
  return;
}




undefined8 * FUN_009a3bc8(long param_1)

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
    *puVar4 = &PTR_FUN_027ce3c8;
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




void FUN_009a3c80(undefined8 param_1)

{
  FUN_009a3c94(&DAT_02e8b460,param_1);
  return;
}




void FUN_009a3c94(long param_1,undefined8 *param_2)

{
  short *psVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  
  (**(code **)*param_2)(param_2);
  *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) =
       *(int *)((long)&__DT_RELA[0xd4a4].r_offset + param_1) + -1;
  psVar1 = (short *)((long)&__DT_RELA[0xd4a3].r_info + param_1);
  iVar4 = (int)(param_1 + 0x10);
  if (*psVar1 == -1) {
    sVar3 = (short)((uint)((int)param_2 - iVar4) >> 3) * -0x25ed;
    *(short *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 2) = sVar3;
    *psVar1 = sVar3;
  }
  else {
    uVar2 = *(ushort *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 2);
    sVar3 = (short)((uint)((int)param_2 - iVar4) >> 3) * -0x25ed;
    *(short *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 2) = sVar3;
    *(short *)(param_1 + 0x10 + (ulong)uVar2 * 0xd8) = sVar3;
  }
  *(int *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 4) =
       *(int *)((long)&__DT_RELA[0xd4a3].r_info + param_1 + 4) + -1;
  return;
}




void FUN_009a3d60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bfe70;
  DAT_0312e490 = 0;
  operator_delete(param_1);
  return;
}




void FUN_009a3d7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bfe70;
  DAT_0312e490 = 0;
  operator_delete(param_1);
  return;
}




void FUN_009a3d98(void)

{
  return;
}




void FUN_009a3da0(void)

{
  return;
}




long FUN_009a3da4(long param_1)

{
  return param_1 + 0x10;
}




long FUN_009a3dac(long param_1)

{
  return param_1 + 0x10;
}




void FUN_009a3db4(void)

{
  return;
}




void FUN_009a3dbc(void)

{
  return;
}




void FUN_009a3dc0(void)

{
  return;
}




void FUN_009a3dc4(void)

{
  return;
}




void FUN_009a3dc8(void)

{
  return;
}




void FUN_009a3dd0(void)

{
  return;
}




void FUN_009a3dd4(void)

{
  return;
}




long FUN_009a3dd8(long param_1)

{
  return param_1 + 0x10;
}




void FUN_009a3de0(void)

{
  return;
}




void FUN_009a3de4(void)

{
  return;
}




void FUN_009a3de8(void)

{
  return;
}




void FUN_009a3dec(void)

{
  return;
}




void FUN_009a3df0(void)

{
  return;
}




void FUN_009a3df4(void)

{
  return;
}




void FUN_009a3df8(void)

{
  return;
}




void FUN_009a3dfc(void)

{
  return;
}




void FUN_009a3e00(void)

{
  return;
}




void FUN_009a3e04(void)

{
  return;
}




void FUN_009a3e08(void)

{
  return;
}




void FUN_009a3e0c(void)

{
  return;
}




void FUN_009a3e14(void)

{
  return;
}




void FUN_009a3e18(void)

{
  return;
}




void FUN_009a3e1c(void)

{
  return;
}




void FUN_009a3e20(void)

{
  return;
}




void FUN_009a3e28(void)

{
  return;
}




long FUN_009a3e2c(long param_1)

{
  return param_1 + 0x10;
}




void FUN_009a3e34(void)

{
  return;
}




void FUN_009a3e3c(void)

{
  return;
}




void FUN_009a3e40(void)

{
  return;
}




void FUN_009a3e44(void)

{
  return;
}




void FUN_009a3e48(void)

{
  return;
}




void FUN_009a3e50(void)

{
  return;
}




void FUN_009a3e54(void)

{
  return;
}




void FUN_009a3e58(void)

{
  return;
}




long FUN_009a3e5c(long param_1)

{
  return param_1 + 0x10;
}




void FUN_009a3e64(void)

{
  return;
}




void FUN_009a3e6c(void)

{
  return;
}




void FUN_009a3e70(void)

{
  return;
}




void FUN_009a3e74(void)

{
  return;
}




void FUN_009a3e78(void)

{
  return;
}




void FUN_009a3e7c(void)

{
  return;
}




void FUN_009a3e80(void)

{
  return;
}




void FUN_009a3e84(void)

{
  return;
}




void FUN_009a3e88(void)

{
  return;
}




void FUN_009a3e8c(void)

{
  return;
}




void FUN_009a3e90(void)

{
  return;
}




void FUN_009a3e94(void)

{
  return;
}




void FUN_009a3e98(void)

{
  return;
}




void FUN_009a3ea0(void)

{
  return;
}




void FUN_009a3ea4(void)

{
  return;
}




void FUN_009a3ea8(void)

{
  return;
}




long FUN_009a3eac(long param_1)

{
  return param_1 + 0x10;
}




void FUN_009a3eb4(void)

{
  return;
}




void FUN_009a3ebc(void)

{
  return;
}




long FUN_009a3ec0(long param_1)

{
  return param_1 + 0x10;
}




void FUN_009a3ec8(void)

{
  return;
}




void FUN_009a3ed0(void)

{
  return;
}




void FUN_009a3ed4(void)

{
  return;
}




long FUN_009a3ed8(long param_1)

{
  return param_1 + 0x10;
}




void FUN_009a3ee0(void)

{
  return;
}




void FUN_009a3ee8(void)

{
  return;
}




void FUN_009a3eec(void)

{
  return;
}




void FUN_009a3ef0(void)

{
  return;
}




void FUN_009a3ef8(void)

{
  return;
}




long FUN_009a3efc(long param_1)

{
  return param_1 + 0x10;
}




void FUN_009a3f04(void)

{
  return;
}




void FUN_009a3f0c(void)

{
  return;
}




void FUN_009a3f10(void)

{
  return;
}




void FUN_009a3f14(void)

{
  return;
}




void FUN_009a3f1c(void)

{
  return;
}




long FUN_009a3f20(long param_1)

{
  return param_1 + 0x10;
}




void FUN_009a3f28(void)

{
  return;
}




void FUN_009a3f30(void)

{
  return;
}




void FUN_009a3f34(void)

{
  return;
}




void FUN_009a3f3c(void)

{
  return;
}




long FUN_009a3f40(long param_1)

{
  return param_1 + 0x10;
}




void FUN_009a3f48(void)

{
  return;
}




void FUN_009a3f50(void)

{
  return;
}




long FUN_009a3f54(long param_1)

{
  return param_1 + 0x10;
}




long FUN_009a3f5c(long param_1)

{
  return param_1 + 0x10;
}




long FUN_009a3f64(long param_1)

{
  return param_1 + 0x10;
}




long FUN_009a3f6c(long param_1)

{
  return param_1 + 0x10;
}




long FUN_009a3f74(long param_1)

{
  return param_1 + 0x10;
}




void FUN_009a3f7c(void)

{
  return;
}




void FUN_009a3f84(void)

{
  return;
}




void FUN_009a3f88(void)

{
  return;
}




void FUN_009a3f8c(void)

{
  return;
}




void FUN_009a3f90(void)

{
  return;
}




void FUN_009a3f94(void)

{
  return;
}




void FUN_009a3f98(void)

{
  return;
}




void FUN_009a3fa0(void)

{
  return;
}




long FUN_009a3fa4(long param_1)

{
  return param_1 + 0x10;
}




long FUN_009a3fac(long param_1)

{
  return param_1 + 0x10;
}




long FUN_009a3fb4(long param_1)

{
  return param_1 + 0x10;
}




long FUN_009a3fbc(long param_1)

{
  return param_1 + 0x10;
}




long FUN_009a3fc4(long param_1)

{
  return param_1 + 0x10;
}




void FUN_009a3fd0(void)

{
  return;
}




void FUN_009a3fd8(void)

{
  return;
}




void FUN_009a3fdc(void)

{
  return;
}




undefined8 FUN_009a3fe4(long param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  long *plVar4;
  
  uVar3 = 0;
  plVar4 = (long *)(param_1 + 8);
  while( true ) {
    plVar1 = (long *)*plVar4;
    if (plVar1 == (long *)0x0) {
      return 1;
    }
    uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
    if ((uVar2 & 1) == 0) break;
    uVar3 = uVar3 + 1;
    plVar4 = plVar4 + 7;
    if (1 < uVar3) {
      return 1;
    }
  }
  return 0;
}

