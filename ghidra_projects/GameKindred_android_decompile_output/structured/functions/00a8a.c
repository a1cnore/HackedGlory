// functions/00a8a — 37 functions
#include "libGameKindred.h"




void FUN_00a8a080(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x47eb0);
  FUN_00a8a0b4();
  DAT_031336c8 = pvVar1;
  return;
}




void FUN_00a8a0b4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_027cff20;
  lVar2 = 1;
  puVar1 = param_1 + 2;
  do {
    *(short *)puVar1 = (short)lVar2;
    lVar2 = lVar2 + 1;
    puVar1 = puVar1 + 0x18;
  } while (lVar2 != 0x140);
  param_1[0x1e02] = 0x13f0000;
  param_1[0x1e04] = 0;
  DAT_03133720 = param_1 + 0x1e06;
  lVar2 = 0;
  DAT_03133728 = param_1;
  *DAT_03133720 = &PTR_FUN_027cff00;
  puVar1 = param_1 + 0x1e08;
  do {
    lVar2 = lVar2 + 1;
    *(short *)puVar1 = (short)lVar2;
    puVar1 = puVar1 + 5;
  } while (lVar2 != 0x13ff);
  param_1[0x8208] = 0x13ff0000;
  param_1[0x820a] = 0;
  lVar2 = 1;
  puVar1 = param_1 + 0x820c;
  do {
    *(short *)puVar1 = (short)lVar2;
    lVar2 = lVar2 + 1;
    puVar1 = puVar1 + 6;
  } while (lVar2 != 0x100);
  param_1[0x880c] = 0xff0000;
  DAT_03133718 = param_1 + 0x880e;
  *DAT_03133718 = &PTR_FUN_027cfee0;
  lVar2 = 1;
  puVar1 = param_1 + 0x8810;
  do {
    *(short *)puVar1 = (short)lVar2;
    lVar2 = lVar2 + 1;
    puVar1 = puVar1 + 0x1f;
  } while (lVar2 != 0x40);
  param_1[0x8fd0] = 0x3f0000;
  param_1[0x8fd2] = 0;
  *(undefined4 *)(param_1 + 0x8fd4) = 0;
  return;
}




void FUN_00a8a200(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_031336c8;
  if (DAT_031336c8 != (undefined8 *)0x0) {
    DAT_031336c8[0x880e] = &PTR_FUN_027cfee0;
    DAT_03133718 = 0;
    puVar1[0x1e06] = &PTR_FUN_027cff00;
    DAT_03133720 = 0;
    *puVar1 = &PTR_FUN_027cff20;
    DAT_03133728 = 0;
    operator_delete(puVar1);
  }
  DAT_031336c8 = (undefined8 *)0x0;
  return;
}




void FUN_00a8a280(void)

{
  FUN_00a8a294(DAT_031336c8 + 0xf030);
  return;
}




undefined8 * FUN_00a8a294(long param_1)

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
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_FUN_027cffa8;
    uVar1 = *(int *)(param_1 + 0x32020) + 1;
    *(uint *)(param_1 + 0x32020) = uVar1;
    if (*(uint *)(param_1 + 0x32024) < uVar1) {
      *(uint *)(param_1 + 0x32024) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00a8a350(undefined8 param_1)

{
  FUN_00a8a364(DAT_031336c8,param_1);
  return;
}




void FUN_00a8a364(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  
  (**(code **)*param_2)(param_2);
  *(int *)(param_1 + 0xf020) = *(int *)(param_1 + 0xf020) + -1;
  iVar3 = (int)(param_1 + 0x10);
  if (*(short *)(param_1 + 0xf010) == -1) {
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 6) * -0x5555;
    *(short *)(param_1 + 0xf012) = sVar2;
    *(short *)(param_1 + 0xf010) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0xf012);
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 6) * -0x5555;
    *(short *)(param_1 + 0xf012) = sVar2;
    *(short *)(param_1 + 0x10 + (ulong)uVar1 * 0xc0) = sVar2;
  }
  *(int *)(param_1 + 0xf014) = *(int *)(param_1 + 0xf014) + -1;
  return;
}




void FUN_00a8a41c(undefined8 param_1)

{
  FUN_00a8a438(DAT_031336c8 + 0xf030,param_1);
  return;
}




void FUN_00a8a438(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  
  (**(code **)*param_2)(param_2);
  *(int *)(param_1 + 0x32020) = *(int *)(param_1 + 0x32020) + -1;
  iVar3 = (int)(param_1 + 0x10);
  if (*(short *)(param_1 + 0x32010) == -1) {
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 3) * -0x3333;
    *(short *)(param_1 + 0x32012) = sVar2;
    *(short *)(param_1 + 0x32010) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x32012);
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 3) * -0x3333;
    *(short *)(param_1 + 0x32012) = sVar2;
    *(short *)(param_1 + 0x10 + (ulong)uVar1 * 0x28) = sVar2;
  }
  *(int *)(param_1 + 0x32014) = *(int *)(param_1 + 0x32014) + -1;
  return;
}




void FUN_00a8a504(undefined8 param_1)

{
  FUN_00a8a524(DAT_031336c8 + 0x44070,param_1);
  return;
}




void FUN_00a8a524(long param_1,long *param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  
  (**(code **)(*param_2 + 0x40))(param_2);
  *(int *)(param_1 + 0x3e20) = *(int *)(param_1 + 0x3e20) + -1;
  iVar3 = (int)(param_1 + 0x10);
  if (*(short *)(param_1 + 0x3e10) == -1) {
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 3) * 0x7bdf;
    *(short *)(param_1 + 0x3e12) = sVar2;
    *(short *)(param_1 + 0x3e10) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x3e12);
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 3) * 0x7bdf;
    *(short *)(param_1 + 0x3e12) = sVar2;
    *(short *)(param_1 + 0x10 + (ulong)uVar1 * 0xf8) = sVar2;
  }
  *(int *)(param_1 + 0x3e14) = *(int *)(param_1 + 0x3e14) + -1;
  return;
}




void FUN_00a8a5d4(void)

{
  FUN_00a8a630(DAT_031336c8 + 0x41060);
  if (*(int *)(DAT_031336c8 + 0x47ea0) < *(int *)(DAT_031336c8 + 0x44064)) {
    *(int *)(DAT_031336c8 + 0x47ea0) = *(int *)(DAT_031336c8 + 0x44064);
  }
  return;
}




ushort * FUN_00a8a630(long param_1)

{
  ushort *puVar1;
  ulong uVar2;
  long lVar3;
  ushort uVar4;
  
  uVar4 = *(ushort *)(param_1 + 0x3000);
  uVar2 = (ulong)uVar4;
  if (uVar2 == 0xffff) {
    puVar1 = (ushort *)0x0;
  }
  else {
    puVar1 = (ushort *)(param_1 + uVar2 * 0x30);
    if (uVar4 == *(ushort *)(param_1 + 0x3002)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar1;
    }
    *(ushort *)(param_1 + 0x3000) = uVar4;
    lVar3 = param_1 + uVar2 * 0x30;
    *(undefined4 *)(lVar3 + 0x18) = 0;
    *(undefined8 *)(lVar3 + 8) = 0;
    *(undefined8 *)(lVar3 + 0x10) = 0;
    *(undefined ***)puVar1 = &PTR_FUN_027cfc38;
    *(undefined8 *)(lVar3 + 0x20) = 0;
    *(undefined1 *)(lVar3 + 0x28) = 0;
    *(int *)(param_1 + 0x3004) = *(int *)(param_1 + 0x3004) + 1;
  }
  return puVar1;
}




void FUN_00a8a6b0(undefined8 param_1)

{
  FUN_00a8a6d0(DAT_031336c8 + 0x41060,param_1);
  return;
}




void FUN_00a8a6d0(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  short sVar2;
  
  (**(code **)*param_2)(param_2);
  if (*(short *)(param_1 + 0x3000) == -1) {
    sVar2 = (short)((uint)((int)param_2 - (int)param_1) >> 4) * -0x5555;
    *(short *)(param_1 + 0x3002) = sVar2;
    *(short *)(param_1 + 0x3000) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x3002);
    sVar2 = (short)((uint)((int)param_2 - (int)param_1) >> 4) * -0x5555;
    *(short *)(param_1 + 0x3002) = sVar2;
    *(short *)(param_1 + (ulong)uVar1 * 0x30) = sVar2;
  }
  *(int *)(param_1 + 0x3004) = *(int *)(param_1 + 0x3004) + -1;
  return;
}




void FUN_00a8a76c(void)

{
  FUN_00a8a778(DAT_031336c0);
  return;
}




undefined8 * FUN_00a8a778(long param_1)

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
    *puVar2 = &PTR_FUN_027ce4a0;
    puVar2[1] = 0;
    uVar1 = *(int *)(param_1 + 0xe620) + 1;
    *(uint *)(param_1 + 0xe620) = uVar1;
    if (*(uint *)(param_1 + 0xe624) < uVar1) {
      *(uint *)(param_1 + 0xe624) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00a8a81c(void)

{
  FUN_00a8a828(DAT_031336c0);
  return;
}




undefined8 * FUN_00a8a828(long param_1)

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
    *puVar2 = &PTR_FUN_027ce4e0;
    puVar2[1] = 0;
    uVar1 = *(int *)(param_1 + 0xe620) + 1;
    *(uint *)(param_1 + 0xe620) = uVar1;
    if (*(uint *)(param_1 + 0xe624) < uVar1) {
      *(uint *)(param_1 + 0xe624) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00a8a8cc(void)

{
  FUN_00a8a8e0(DAT_031336c0 + 0xe630);
  return;
}




undefined8 * FUN_00a8a8e0(long param_1)

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
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = &PTR_FUN_027cffd0;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 3) = 0;
    uVar1 = *(int *)(param_1 + 0x46020) + 1;
    *(uint *)(param_1 + 0x46020) = uVar1;
    if (*(uint *)(param_1 + 0x46024) < uVar1) {
      *(uint *)(param_1 + 0x46024) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00a8a9a0(void)

{
  FUN_00a8a9ac(DAT_031336c0);
  return;
}




undefined8 * FUN_00a8a9ac(long param_1)

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
    *puVar2 = &PTR_FUN_027cead0;
    puVar2[1] = 0;
    uVar1 = *(int *)(param_1 + 0xe620) + 1;
    *(uint *)(param_1 + 0xe620) = uVar1;
    if (*(uint *)(param_1 + 0xe624) < uVar1) {
      *(uint *)(param_1 + 0xe624) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00a8aa50(void)

{
  FUN_00a8aa5c(DAT_031336c0);
  return;
}




undefined8 * FUN_00a8aa5c(long param_1)

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
    *puVar2 = &PTR_FUN_027cfff8;
    uVar1 = *(int *)(param_1 + 0xe620) + 1;
    *(uint *)(param_1 + 0xe620) = uVar1;
    if (*(uint *)(param_1 + 0xe624) < uVar1) {
      *(uint *)(param_1 + 0xe624) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00a8ab04(void)

{
  FUN_00a8ab18(DAT_031336c0 + 0xe630);
  return;
}




undefined8 * FUN_00a8ab18(long param_1)

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
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = &PTR_FUN_027d0040;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 3) = 0;
    uVar1 = *(int *)(param_1 + 0x46020) + 1;
    *(uint *)(param_1 + 0x46020) = uVar1;
    if (*(uint *)(param_1 + 0x46024) < uVar1) {
      *(uint *)(param_1 + 0x46024) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00a8abd8(void)

{
  FUN_00a8abe4(DAT_031336c0);
  return;
}




undefined8 * FUN_00a8abe4(long param_1)

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
    *puVar2 = &PTR_FUN_027d0068;
    puVar2[1] = 0;
    uVar1 = *(int *)(param_1 + 0xe620) + 1;
    *(uint *)(param_1 + 0xe620) = uVar1;
    if (*(uint *)(param_1 + 0xe624) < uVar1) {
      *(uint *)(param_1 + 0xe624) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00a8ac88(void)

{
  FUN_00a8ac94(DAT_031336c0);
  return;
}




undefined8 * FUN_00a8ac94(long param_1)

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
    memset(__s,0,0x48);
    *__s = &PTR_FUN_027cecb0;
    __s[1] = 0;
    FUN_00a80c38(__s + 2);
    FUN_00a8029c(__s + 6);
    uVar1 = *(int *)(param_1 + 0xe620) + 1;
    *(uint *)(param_1 + 0xe620) = uVar1;
    if (*(uint *)(param_1 + 0xe624) < uVar1) {
      *(uint *)(param_1 + 0xe624) = uVar1;
    }
  }
  return __s;
}




void FUN_00a8ad70(void)

{
  FUN_00a8ad84(DAT_031336c0 + 0xe630);
  return;
}




undefined8 * FUN_00a8ad84(long param_1)

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
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00a80f50(puVar4);
    uVar1 = *(int *)(param_1 + 0x46020) + 1;
    *(uint *)(param_1 + 0x46020) = uVar1;
    if (*(uint *)(param_1 + 0x46024) < uVar1) {
      *(uint *)(param_1 + 0x46024) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00a8ae58(void)

{
  FUN_00a8ae64(DAT_031336c0);
  return;
}




undefined8 * FUN_00a8ae64(long param_1)

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
    *puVar2 = &PTR_FUN_027d00a0;
    puVar2[4] = 0;
    puVar2[3] = 0;
    puVar2[5] = 0;
    puVar2[2] = 0;
    puVar2[1] = 0;
    *(undefined1 *)(puVar2 + 3) = 0;
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




void FUN_00a8af2c(void)

{
  FUN_00a8af38(DAT_031336c0);
  return;
}




undefined8 * FUN_00a8af38(long param_1)

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
    *puVar2 = &PTR_FUN_027d00e0;
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

