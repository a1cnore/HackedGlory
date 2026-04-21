// functions/00cd9 — 41 functions
#include "libGameKindred.h"




void thunk_FUN_00cd9060(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_00e6ce7c("MENU_DIALOG_RATE_APP_FORM_UNHAPPY_LABEL",0);
  FUN_00f0d75c(param_1 + 0x60c0,uVar1);
  *(uint *)(param_1 + 0x6274) = *(uint *)(param_1 + 0x6274) & 0xfffffffb;
  *(uint *)(param_1 + 0x9034) = *(uint *)(param_1 + 0x9034) & 0xfffffffb;
  *(uint *)(param_1 + 0x7954) = *(uint *)(param_1 + 0x7954) | 4;
  lVar2 = FUN_009b8d90();
  FUN_00cd762c(*(undefined8 *)(lVar2 + 0xc6e0),3);
  FUN_00cd8a0c(param_1);
  FUN_00cd8c9c(param_1);
  return;
}




void thunk_FUN_00cd90f0(void)

{
  long lVar1;
  
  FUN_00cd8e2c();
  lVar1 = FUN_009b8d90();
  FUN_00cd762c(*(undefined8 *)(lVar1 + 0xc6e0),4);
  lVar1 = FUN_009b8d90();
  FUN_00cd7634(*(undefined8 *)(lVar1 + 0xc6e0),3);
  return;
}




void thunk_FUN_00cd9150(undefined8 param_1)

{
  long lVar1;
  
  FUN_00937f54();
  FUN_00ec5454();
  FUN_00cd8e2c(param_1);
  lVar1 = FUN_009b8d90();
  FUN_00cd7634(*(undefined8 *)(lVar1 + 0xc6e0),0);
  return;
}




void FUN_00cd9060(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_00e6ce7c("MENU_DIALOG_RATE_APP_FORM_UNHAPPY_LABEL",0);
  FUN_00f0d75c(param_1 + 0x60c0,uVar1);
  *(uint *)(param_1 + 0x6274) = *(uint *)(param_1 + 0x6274) & 0xfffffffb;
  *(uint *)(param_1 + 0x9034) = *(uint *)(param_1 + 0x9034) & 0xfffffffb;
  *(uint *)(param_1 + 0x7954) = *(uint *)(param_1 + 0x7954) | 4;
  lVar2 = FUN_009b8d90();
  FUN_00cd762c(*(undefined8 *)(lVar2 + 0xc6e0),3);
  FUN_00cd8a0c(param_1);
  FUN_00cd8c9c(param_1);
  return;
}




void FUN_00cd90f0(void)

{
  long lVar1;
  
  FUN_00cd8e2c();
  lVar1 = FUN_009b8d90();
  FUN_00cd762c(*(undefined8 *)(lVar1 + 0xc6e0),4);
  lVar1 = FUN_009b8d90();
  FUN_00cd7634(*(undefined8 *)(lVar1 + 0xc6e0),3);
  return;
}




void FUN_00cd912c(void)

{
  long lVar1;
  
  FUN_00cd8e2c();
  lVar1 = FUN_009b8d90();
  FUN_00cd7634(*(undefined8 *)(lVar1 + 0xc6e0),3);
  return;
}




void FUN_00cd9150(undefined8 param_1)

{
  long lVar1;
  
  FUN_00937f54();
  FUN_00ec5454();
  FUN_00cd8e2c(param_1);
  lVar1 = FUN_009b8d90();
  FUN_00cd7634(*(undefined8 *)(lVar1 + 0xc6e0),0);
  return;
}




void FUN_00cd918c(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_00ec51bc();
  if ((uVar1 & 1) != 0) {
    FUN_00ec51c4();
    return;
  }
  FUN_00937f54();
  FUN_00ec5454();
  FUN_00cd8e2c(param_1);
  lVar2 = FUN_009b8d90();
  FUN_00cd7634(*(undefined8 *)(lVar2 + 0xc6e0),0);
  return;
}




void FUN_00cd91dc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN_00cd8e2c();
  lVar1 = FUN_009b8d90();
  if ((param_3 & 1) == 0) {
    uVar2 = 2;
  }
  else {
    uVar2 = 1;
  }
  FUN_00cd7634(*(undefined8 *)(lVar1 + 0xc6e0),uVar2);
  return;
}




void FUN_00cd9218(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x11e0f0);
  FUN_00cd924c();
  DAT_0313e340 = pvVar1;
  return;
}




void FUN_00cd924c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_0280e0c8;
  lVar2 = 1;
  puVar1 = param_1 + 2;
  do {
    *(short *)puVar1 = (short)lVar2;
    lVar2 = lVar2 + 1;
    puVar1 = puVar1 + 0x11;
  } while (lVar2 != 0x578);
  param_1[0x5cfa] = 0x5770000;
  param_1[0x5cfc] = 0;
  DAT_0313e350 = param_1 + 0x5cfe;
  lVar2 = 0;
  DAT_0313e358 = param_1;
  *DAT_0313e350 = &PTR_FUN_0280e0a8;
  puVar1 = param_1 + 0x5d00;
  do {
    lVar2 = lVar2 + 1;
    *(short *)puVar1 = (short)lVar2;
    puVar1 = puVar1 + 5;
  } while (lVar2 != 0x577f);
  param_1[0x21280] = 0x577f0000;
  param_1[0x21282] = 0;
  lVar2 = 1;
  puVar1 = param_1 + 0x21284;
  do {
    *(short *)puVar1 = (short)lVar2;
    lVar2 = lVar2 + 1;
    puVar1 = puVar1 + 6;
  } while (lVar2 != 0x460);
  param_1[0x22cc4] = 0x45f0000;
  DAT_0313e348 = param_1 + 0x22cc6;
  *DAT_0313e348 = &PTR_FUN_0280e088;
  lVar2 = 1;
  puVar1 = param_1 + 0x22cc8;
  do {
    *(short *)puVar1 = (short)lVar2;
    lVar2 = lVar2 + 1;
    puVar1 = puVar1 + 0xe;
  } while (lVar2 != 0x118);
  param_1[0x23c18] = 0x1170000;
  param_1[0x23c1a] = 0;
  *(undefined4 *)(param_1 + 0x23c1c) = 0;
  return;
}




void FUN_00cd93a8(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0313e340;
  if (DAT_0313e340 != (undefined8 *)0x0) {
    DAT_0313e340[0x22cc6] = &PTR_FUN_0280e088;
    DAT_0313e348 = 0;
    puVar1[0x5cfe] = &PTR_FUN_0280e0a8;
    DAT_0313e350 = 0;
    *puVar1 = &PTR_FUN_0280e0c8;
    DAT_0313e358 = 0;
    operator_delete(puVar1);
  }
  DAT_0313e340 = (undefined8 *)0x0;
  return;
}




void FUN_00cd942c(void)

{
  FUN_00cd9444(DAT_0313e340 + 0x2e7f0);
  return;
}




undefined8 * FUN_00cd9444(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  long lVar4;
  
  uVar3 = *(ushort *)(param_1 + 0xdac10);
  if ((ulong)uVar3 == 0xffff) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar4 = param_1 + (ulong)uVar3 * 0x28;
    if (uVar3 == *(ushort *)(param_1 + 0xdac12)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(param_1 + 0xdac10) = uVar3;
    *(int *)(param_1 + 0xdac14) = *(int *)(param_1 + 0xdac14) + 1;
    puVar2 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_FUN_0280e0e8;
    uVar1 = *(int *)(param_1 + 0xdac20) + 1;
    *(uint *)(param_1 + 0xdac20) = uVar1;
    if (*(uint *)(param_1 + 0xdac24) < uVar1) {
      *(uint *)(param_1 + 0xdac24) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00cd9500(undefined8 param_1)

{
  FUN_00cd9514(DAT_0313e340,param_1);
  return;
}




void FUN_00cd9514(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  
  (**(code **)*param_2)(param_2);
  *(int *)(param_1 + 0x2e7e0) = *(int *)(param_1 + 0x2e7e0) + -1;
  iVar3 = (int)(param_1 + 0x10);
  if (*(short *)(param_1 + 0x2e7d0) == -1) {
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 3) * -0xf0f;
    *(short *)(param_1 + 0x2e7d2) = sVar2;
    *(short *)(param_1 + 0x2e7d0) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x2e7d2);
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 3) * -0xf0f;
    *(short *)(param_1 + 0x2e7d2) = sVar2;
    *(short *)(param_1 + 0x10 + (ulong)uVar1 * 0x88) = sVar2;
  }
  *(int *)(param_1 + 0x2e7d4) = *(int *)(param_1 + 0x2e7d4) + -1;
  return;
}




void FUN_00cd95e0(undefined8 param_1)

{
  FUN_00cd9600(DAT_0313e340 + 0x2e7f0,param_1);
  return;
}




void FUN_00cd9600(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  
  (**(code **)*param_2)(param_2);
  *(int *)(param_1 + 0xdac20) = *(int *)(param_1 + 0xdac20) + -1;
  iVar3 = (int)(param_1 + 0x10);
  if (*(short *)(param_1 + 0xdac10) == -1) {
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 3) * -0x3333;
    *(short *)(param_1 + 0xdac12) = sVar2;
    *(short *)(param_1 + 0xdac10) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0xdac12);
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 3) * -0x3333;
    *(short *)(param_1 + 0xdac12) = sVar2;
    *(short *)(param_1 + 0x10 + (ulong)uVar1 * 0x28) = sVar2;
  }
  *(int *)(param_1 + 0xdac14) = *(int *)(param_1 + 0xdac14) + -1;
  return;
}




void FUN_00cd96cc(undefined8 param_1)

{
  FUN_00cd96ec(DAT_0313e340 + 0x116630,param_1);
  return;
}




void FUN_00cd96ec(long param_1,long *param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  
  (**(code **)(*param_2 + 0x30))(param_2);
  *(int *)(param_1 + 0x7aa0) = *(int *)(param_1 + 0x7aa0) + -1;
  iVar3 = (int)(param_1 + 0x10);
  if (*(short *)(param_1 + 0x7a90) == -1) {
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 4) * 0x6db7;
    *(short *)(param_1 + 0x7a92) = sVar2;
    *(short *)(param_1 + 0x7a90) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x7a92);
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 4) * 0x6db7;
    *(short *)(param_1 + 0x7a92) = sVar2;
    *(short *)(param_1 + 0x10 + (ulong)uVar1 * 0x70) = sVar2;
  }
  *(int *)(param_1 + 0x7a94) = *(int *)(param_1 + 0x7a94) + -1;
  return;
}




void FUN_00cd97a4(void)

{
  int *piVar1;
  int iVar2;
  
  FUN_00cd9800(DAT_0313e340 + 0x109420);
  iVar2 = *(int *)((long)&__DT_SYMTAB[0x7c9].st_value + DAT_0313e340 + 4);
  piVar1 = (int *)((long)&__DT_SYMTAB[0xce6].st_size + DAT_0313e340);
  if (*piVar1 < iVar2) {
    *piVar1 = iVar2;
  }
  return;
}




ushort * FUN_00cd9800(long param_1)

{
  ushort *puVar1;
  ulong uVar2;
  long lVar3;
  ushort uVar4;
  
  uVar4 = *(ushort *)(param_1 + 0xd200);
  uVar2 = (ulong)uVar4;
  if (uVar2 == 0xffff) {
    puVar1 = (ushort *)0x0;
  }
  else {
    puVar1 = (ushort *)(param_1 + uVar2 * 0x30);
    if (uVar4 == *(ushort *)(param_1 + 0xd202)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar1;
    }
    *(ushort *)(param_1 + 0xd200) = uVar4;
    lVar3 = param_1 + uVar2 * 0x30;
    *(undefined4 *)(lVar3 + 0x18) = 0;
    *(undefined8 *)(lVar3 + 8) = 0;
    *(undefined8 *)(lVar3 + 0x10) = 0;
    *(undefined ***)puVar1 = &PTR_FUN_0280e110;
    *(undefined8 *)(lVar3 + 0x20) = 0;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    *(int *)(param_1 + 0xd204) = *(int *)(param_1 + 0xd204) + 1;
  }
  return puVar1;
}




void FUN_00cd9884(undefined8 param_1)

{
  FUN_00cd98a4(DAT_0313e340 + 0x109420,param_1);
  return;
}




void FUN_00cd98a4(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  short sVar2;
  
  (**(code **)*param_2)(param_2);
  if (*(short *)(param_1 + 0xd200) == -1) {
    sVar2 = (short)((uint)((int)param_2 - (int)param_1) >> 4) * -0x5555;
    *(short *)(param_1 + 0xd202) = sVar2;
    *(short *)(param_1 + 0xd200) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0xd202);
    sVar2 = (short)((uint)((int)param_2 - (int)param_1) >> 4) * -0x5555;
    *(short *)(param_1 + 0xd202) = sVar2;
    *(short *)(param_1 + (ulong)uVar1 * 0x30) = sVar2;
  }
  *(int *)(param_1 + 0xd204) = *(int *)(param_1 + 0xd204) + -1;
  return;
}




void FUN_00cd9948(void)

{
  FUN_00cd9954(DAT_0313e340);
  return;
}




undefined8 * FUN_00cd9954(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  long lVar4;
  
  uVar3 = *(ushort *)(param_1 + 0x2e7d0);
  if ((ulong)uVar3 == 0xffff) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar4 = param_1 + (ulong)uVar3 * 0x88;
    if (uVar3 == *(ushort *)(param_1 + 0x2e7d2)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(param_1 + 0x2e7d0) = uVar3;
    *(int *)(param_1 + 0x2e7d4) = *(int *)(param_1 + 0x2e7d4) + 1;
    puVar2 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    *puVar2 = &PTR_FUN_0280e150;
    puVar2[1] = 0;
    puVar2[2] = &PTR_FUN_0280e1a0;
    uVar1 = *(int *)(param_1 + 0x2e7e0) + 1;
    *(uint *)(param_1 + 0x2e7e0) = uVar1;
    if (*(uint *)(param_1 + 0x2e7e4) < uVar1) {
      *(uint *)(param_1 + 0x2e7e4) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00cd9a1c(void)

{
  FUN_00cd9a28(DAT_0313e340);
  return;
}




undefined8 * FUN_00cd9a28(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  long lVar4;
  
  uVar3 = *(ushort *)(param_1 + 0x2e7d0);
  if ((ulong)uVar3 == 0xffff) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar4 = param_1 + (ulong)uVar3 * 0x88;
    if (uVar3 == *(ushort *)(param_1 + 0x2e7d2)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(param_1 + 0x2e7d0) = uVar3;
    *(int *)(param_1 + 0x2e7d4) = *(int *)(param_1 + 0x2e7d4) + 1;
    puVar2 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    *puVar2 = &PTR_FUN_0280e218;
    puVar2[1] = 0;
    puVar2[2] = &PTR_FUN_0280e1a0;
    uVar1 = *(int *)(param_1 + 0x2e7e0) + 1;
    *(uint *)(param_1 + 0x2e7e0) = uVar1;
    if (*(uint *)(param_1 + 0x2e7e4) < uVar1) {
      *(uint *)(param_1 + 0x2e7e4) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00cd9af0(void)

{
  FUN_00cd9afc(DAT_0313e340);
  return;
}




undefined8 * FUN_00cd9afc(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  long lVar4;
  
  uVar3 = *(ushort *)(param_1 + 0x2e7d0);
  if ((ulong)uVar3 == 0xffff) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar4 = param_1 + (ulong)uVar3 * 0x88;
    if (uVar3 == *(ushort *)(param_1 + 0x2e7d2)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(param_1 + 0x2e7d0) = uVar3;
    *(int *)(param_1 + 0x2e7d4) = *(int *)(param_1 + 0x2e7d4) + 1;
    puVar2 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    *puVar2 = &PTR_FUN_0280e268;
    puVar2[1] = 0;
    puVar2[2] = &PTR_FUN_0280e2b0;
    uVar1 = *(int *)(param_1 + 0x2e7e0) + 1;
    *(uint *)(param_1 + 0x2e7e0) = uVar1;
    if (*(uint *)(param_1 + 0x2e7e4) < uVar1) {
      *(uint *)(param_1 + 0x2e7e4) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00cd9bc4(void)

{
  FUN_00cd9bd0(DAT_0313e340);
  return;
}




undefined8 * FUN_00cd9bd0(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x2e7d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x88;
    if (uVar2 == *(ushort *)(param_1 + 0x2e7d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x2e7d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x2e7d4) = *(int *)(param_1 + 0x2e7d4) + 1;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    FUN_00d82580(puVar4);
    uVar1 = *(int *)(param_1 + 0x2e7e0) + 1;
    *(uint *)(param_1 + 0x2e7e0) = uVar1;
    if (*(uint *)(param_1 + 0x2e7e4) < uVar1) {
      *(uint *)(param_1 + 0x2e7e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00cd9ca0(void)

{
  FUN_00cd9cac(DAT_0313e340);
  return;
}




undefined8 * FUN_00cd9cac(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  long lVar4;
  
  uVar3 = *(ushort *)(param_1 + 0x2e7d0);
  if ((ulong)uVar3 == 0xffff) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    lVar4 = param_1 + (ulong)uVar3 * 0x88;
    if (uVar3 == *(ushort *)(param_1 + 0x2e7d2)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(param_1 + 0x2e7d0) = uVar3;
    *(int *)(param_1 + 0x2e7d4) = *(int *)(param_1 + 0x2e7d4) + 1;
    puVar2 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    *puVar2 = &PTR_FUN_0280e320;
    puVar2[1] = 0;
    puVar2[2] = &PTR_FUN_027bd170;
    uVar1 = *(int *)(param_1 + 0x2e7e0) + 1;
    *(uint *)(param_1 + 0x2e7e0) = uVar1;
    if (*(uint *)(param_1 + 0x2e7e4) < uVar1) {
      *(uint *)(param_1 + 0x2e7e4) = uVar1;
    }
  }
  return puVar2;
}




void FUN_00cd9d74(void)

{
  FUN_00cd9d80(DAT_0313e340);
  return;
}




undefined8 * FUN_00cd9d80(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x2e7d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x88;
    if (uVar2 == *(ushort *)(param_1 + 0x2e7d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x2e7d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x2e7d4) = *(int *)(param_1 + 0x2e7d4) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00d825b8(puVar4);
    uVar1 = *(int *)(param_1 + 0x2e7e0) + 1;
    *(uint *)(param_1 + 0x2e7e0) = uVar1;
    if (*(uint *)(param_1 + 0x2e7e4) < uVar1) {
      *(uint *)(param_1 + 0x2e7e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00cd9e54(void)

{
  FUN_00cd9e60(DAT_0313e340);
  return;
}




undefined8 * FUN_00cd9e60(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x2e7d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x88;
    if (uVar2 == *(ushort *)(param_1 + 0x2e7d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x2e7d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x2e7d4) = *(int *)(param_1 + 0x2e7d4) + 1;
    puVar4[6] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    FUN_00d826f4(puVar4);
    uVar1 = *(int *)(param_1 + 0x2e7e0) + 1;
    *(uint *)(param_1 + 0x2e7e0) = uVar1;
    if (*(uint *)(param_1 + 0x2e7e4) < uVar1) {
      *(uint *)(param_1 + 0x2e7e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00cd9f38(void)

{
  FUN_00cd9f44(DAT_0313e340);
  return;
}




undefined8 * FUN_00cd9f44(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x2e7d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x88;
    if (uVar2 == *(ushort *)(param_1 + 0x2e7d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x2e7d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x2e7d4) = *(int *)(param_1 + 0x2e7d4) + 1;
    puVar4[6] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    FUN_00d829ac(puVar4);
    uVar1 = *(int *)(param_1 + 0x2e7e0) + 1;
    *(uint *)(param_1 + 0x2e7e0) = uVar1;
    if (*(uint *)(param_1 + 0x2e7e4) < uVar1) {
      *(uint *)(param_1 + 0x2e7e4) = uVar1;
    }
  }
  return puVar4;
}




void thunk_FUN_00cd93a8(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0313e340;
  if (DAT_0313e340 != (undefined8 *)0x0) {
    DAT_0313e340[0x22cc6] = &PTR_FUN_0280e088;
    DAT_0313e348 = 0;
    puVar1[0x5cfe] = &PTR_FUN_0280e0a8;
    DAT_0313e350 = 0;
    *puVar1 = &PTR_FUN_0280e0c8;
    DAT_0313e358 = 0;
    operator_delete(puVar1);
  }
  DAT_0313e340 = (undefined8 *)0x0;
  return;
}

