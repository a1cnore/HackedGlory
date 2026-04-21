// functions/00d04 — 51 functions
#include "libGameKindred.h"




void FUN_00d04034(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_009b52ec(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
               *(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
               *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
  return;
}




void FUN_00d04074(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x38,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_02811670;
  *(undefined8 *)((long)puVar1 + 0x2c) = *(undefined8 *)(param_1 + 0x2c);
  uVar2 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar1 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = uVar2;
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d040ec(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 byte param_5)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)((long)param_1 + 0x24) = param_4;
  *param_1 = &PTR_FUN_028116a8;
  *(byte *)(param_1 + 5) = param_5 & 1;
  return;
}




void FUN_00d04118(long param_1)

{
  FUN_00ce54dc(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
               *(undefined4 *)(param_1 + 0x24),*(undefined1 *)(param_1 + 0x28));
  return;
}




void FUN_00d0412c(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 != 0) {
    FUN_00d5a0c8(lVar1,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                 *(undefined1 *)(param_1 + 0x28));
    return;
  }
  return;
}




void FUN_00d0416c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x30,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_028116a8;
  *(undefined8 *)((long)puVar1 + 0x21) = *(undefined8 *)(param_1 + 0x21);
  *(undefined8 *)((long)puVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d041e4(undefined4 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,byte param_6,undefined4 param_7)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined4 *)((long)param_2 + 0x1c) = param_3;
  *(undefined4 *)(param_2 + 4) = param_7;
  *(undefined4 *)((long)param_2 + 0x24) = param_4;
  *(undefined4 *)(param_2 + 5) = param_5;
  *(undefined4 *)((long)param_2 + 0x2c) = param_1;
  *param_2 = &PTR_FUN_028116e0;
  *(byte *)(param_2 + 6) = param_6 & 1;
  return;
}




void FUN_00d04214(long param_1)

{
  ulong uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = FUN_00ceab48();
  if (((uVar1 & 1) != 0) && (lVar2 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c)), lVar2 != 0)) {
    if (*(char *)(param_1 + 0x30) == '\0') {
      fVar4 = 0.0;
    }
    else {
      uVar1 = (ulong)*(uint *)(param_1 + 0x24);
      lVar2 = *(long *)(lVar2 + 0x40) + uVar1 * 4;
      fVar3 = (*(float *)(lVar2 + 0x1a0) + 1.0) *
              (*(float *)(lVar2 + 0x38) +
              *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0));
      if (*(float *)(&DAT_0314fc80 + uVar1 * 4) <= fVar3) {
        fVar3 = *(float *)(&DAT_0314fc80 + uVar1 * 4);
      }
      fVar4 = *(float *)(&DAT_0314fbc0 + uVar1 * 4);
      if (*(float *)(&DAT_0314fbc0 + uVar1 * 4) <= fVar3) {
        fVar4 = fVar3;
      }
    }
    if (1.1920929e-07 <= ABS(*(float *)(param_1 + 0x2c) - fVar4)) {
      FUN_00ce4748(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x24),
                   *(undefined4 *)(param_1 + 0x28),*(char *)(param_1 + 0x30) != '\0',
                   *(undefined4 *)(param_1 + 0x20));
      return;
    }
  }
  return;
}




void thunk_FUN_00d042f0(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x30) != '\0') {
    FUN_00d5b68c();
    return;
  }
  FUN_00d5b558(*(undefined4 *)(param_1 + 0x2c),lVar1,*(undefined4 *)(param_1 + 0x24),
               *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x20));
  return;
}




void FUN_00d042f0(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x30) != '\0') {
    FUN_00d5b68c();
    return;
  }
  FUN_00d5b558(*(undefined4 *)(param_1 + 0x2c),lVar1,*(undefined4 *)(param_1 + 0x24),
               *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x20));
  return;
}




void FUN_00d04348(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x38,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_028116e0;
  *(undefined8 *)((long)puVar1 + 0x29) = *(undefined8 *)(param_1 + 0x29);
  uVar2 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar1 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = uVar2;
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d043c0(undefined4 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                 byte param_5)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined4 *)((long)param_2 + 0x1c) = param_3;
  *(undefined4 *)(param_2 + 4) = param_4;
  *(undefined4 *)((long)param_2 + 0x24) = param_1;
  *(byte *)(param_2 + 5) = param_5 & 1;
  *param_2 = &PTR_FUN_02811718;
  *(undefined2 *)((long)param_2 + 0x29) = 1;
  return;
}




void FUN_00d043f4(long param_1)

{
  *(undefined1 *)(param_1 + 0x29) = 0;
  return;
}




void FUN_00d043fc(long param_1)

{
  *(undefined1 *)(param_1 + 0x2a) = 1;
  return;
}




void FUN_00d04408(long param_1)

{
  ulong uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_00ceab48();
  if (((uVar1 & 1) != 0) && (lVar2 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c)), lVar2 != 0)) {
    if (*(char *)(param_1 + 0x28) == '\0') {
      fVar3 = 0.0;
    }
    else {
      fVar3 = *(float *)(*(long *)(lVar2 + 0x40) + (ulong)*(uint *)(param_1 + 0x20) * 4 + 0x308);
    }
    if (1.1920929e-07 <= ABS(*(float *)(param_1 + 0x24) - fVar3)) {
      FUN_00ce48a8(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
                   *(char *)(param_1 + 0x28) != '\0',*(undefined1 *)(param_1 + 0x29),
                   *(undefined1 *)(param_1 + 0x2a));
      return;
    }
  }
  return;
}




void FUN_00d04498(long param_1)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  
  lVar3 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if (lVar3 == 0) {
    return;
  }
  plVar4 = (long *)FUN_00d5bae0();
  if ((plVar4 == (long *)0x0) || (*(int *)(param_1 + 0x20) != 6)) goto LAB_00d04520;
  if ((*(char *)(param_1 + 0x29) == '\0') ||
     (uVar5 = FUN_00ced270(*(undefined4 *)(param_1 + 0x1c)), (uVar5 & 1) == 0)) {
    if (*(char *)(param_1 + 0x2a) == '\0') goto LAB_00d04520;
    FUN_00cedce4();
    cVar1 = FUN_00cecb68();
    cVar2 = FUN_00cecb68(*(undefined4 *)(param_1 + 0x1c));
    if (cVar1 != cVar2) goto LAB_00d04520;
  }
  (**(code **)(*plVar4 + 0x120))(*(undefined4 *)(param_1 + 0x24),plVar4);
LAB_00d04520:
  FUN_00d04544(param_1);
  return;
}




void FUN_00d04544(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x28) != '\0') {
      FUN_00d5b93c(*(undefined4 *)(param_1 + 0x24));
      return;
    }
    if ((*(int *)(param_1 + 0x20) != 0) || (0.0 < *(float *)(*(long *)(lVar1 + 0x40) + 0x308))) {
      FUN_00d5b7c0(*(undefined4 *)(param_1 + 0x24));
      return;
    }
  }
  return;
}




void FUN_00d045b0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x30,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_02811718;
  *(undefined8 *)((long)puVar1 + 0x23) = *(undefined8 *)(param_1 + 0x23);
  *(undefined8 *)((long)puVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d04628(undefined4 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined4 *)((long)param_2 + 0x1c) = param_3;
  *(undefined4 *)(param_2 + 4) = param_4;
  *param_2 = &PTR_FUN_02811750;
  *(undefined4 *)((long)param_2 + 0x24) = param_1;
  return;
}




void FUN_00d0464c(long param_1)

{
  FUN_00ce3bac(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x1c),
               *(undefined4 *)(param_1 + 0x20));
  return;
}




void FUN_00d0465c(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_02c7bf48))) {
      lVar1 = *(long *)(lVar1 + 0x20);
    }
    FUN_00d6b1a4(*(undefined4 *)(param_1 + 0x24),lVar1,*(undefined4 *)(param_1 + 0x20));
    return;
  }
  return;
}




void FUN_00d046c4(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x28,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_02811750;
  *(undefined4 *)((long)puVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d0473c(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *param_1 = &PTR_FUN_02811788;
  *(undefined4 *)((long)param_1 + 0x24) = param_4;
  return;
}




void FUN_00d04760(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  lVar1 = *(long *)(lVar1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  uVar2 = FUN_00d6c068(lVar1,*(undefined4 *)(param_1 + 0x20));
  if ((uVar2 & 1) != 0) {
    FUN_00ce3cfc(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
                 *(undefined4 *)(param_1 + 0x24));
    return;
  }
  return;
}




void FUN_00d047cc(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_02c7bf48))) {
      lVar1 = *(long *)(lVar1 + 0x20);
    }
    uVar2 = FUN_00d6c068(lVar1,*(undefined4 *)(param_1 + 0x20));
    if ((uVar2 & 1) != 0) {
      FUN_00d6b144(lVar1,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
      return;
    }
  }
  return;
}




void FUN_00d04844(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x28,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_02811788;
  *(undefined4 *)((long)puVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d048bc(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 byte param_5)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)((long)param_1 + 0x24) = param_4;
  *param_1 = &PTR_FUN_028117c0;
  *(byte *)(param_1 + 5) = param_5 & 1;
  return;
}




void FUN_00d048e8(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  
  lVar4 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  lVar4 = *(long *)(lVar4 + 0x18);
  while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  uVar5 = FUN_00d6c068(lVar4,*(undefined4 *)(param_1 + 0x20));
  if ((uVar5 & 1) != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
    uVar2 = *(undefined4 *)(param_1 + 0x20);
    uVar6 = *(uint *)(param_1 + 0x24);
    if (*(char *)(param_1 + 0x28) == '\0') {
      iVar3 = FUN_00d6bb04(lVar4,uVar2);
      uVar6 = iVar3 + uVar6 & ((int)(iVar3 + uVar6) >> 0x1f ^ 0xffffffffU);
    }
    FUN_00ce3e48(uVar1,uVar2,uVar6);
    return;
  }
  return;
}




uint FUN_00d0498c(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x24);
  if (*(char *)(param_1 + 0x28) == '\0') {
    iVar1 = FUN_00d6bb04(param_2,*(undefined4 *)(param_1 + 0x20));
    uVar2 = iVar1 + uVar2 & ((int)(iVar1 + uVar2) >> 0x1f ^ 0xffffffffU);
  }
  return uVar2;
}




void FUN_00d049cc(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  
  lVar3 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if (lVar3 != 0) {
    lVar3 = *(long *)(lVar3 + 0x18);
    while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_02c7bf48))) {
      lVar3 = *(long *)(lVar3 + 0x20);
    }
    uVar4 = FUN_00d6c068(lVar3,*(undefined4 *)(param_1 + 0x20));
    if ((uVar4 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x20);
      uVar5 = *(uint *)(param_1 + 0x24);
      if (*(char *)(param_1 + 0x28) == '\0') {
        iVar2 = FUN_00d6bb04(lVar3,uVar1);
        uVar5 = iVar2 + uVar5 & ((int)(iVar2 + uVar5) >> 0x1f ^ 0xffffffffU);
      }
      FUN_00d6b0e0(lVar3,uVar1,uVar5);
      return;
    }
  }
  return;
}




void FUN_00d04a74(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x30,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_028117c0;
  *(undefined8 *)((long)puVar1 + 0x21) = *(undefined8 *)(param_1 + 0x21);
  *(undefined8 *)((long)puVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d04aec(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 4) = param_2;
  *param_1 = &PTR_FUN_028117f8;
  param_1[1] = 0;
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  uVar1 = FUN_00e6a474(param_4);
  uVar1 = FUN_0091ed5c(param_4,uVar1,0x12345678);
  *(undefined4 *)((long)param_1 + 0x24) = uVar1;
  return;
}




void FUN_00d04b5c(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 4) = param_2;
  *param_1 = &PTR_FUN_028117f8;
  param_1[1] = 0;
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = param_4;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  return;
}




void FUN_00d04b90(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}




void FUN_00d04b98(long param_1)

{
  *(undefined1 *)(param_1 + 0x3c) = 1;
  FUN_00d04ba4();
  return;
}




void FUN_00d04ba4(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  int local_4c;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  lVar5 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x20));
  if (lVar5 != 0) {
    lVar5 = *(long *)(lVar5 + 0x18);
    while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_02c7bf48))) {
      lVar5 = *(long *)(lVar5 + 0x20);
    }
    uVar6 = FUN_00d6bbac(lVar5,*(undefined4 *)(param_1 + 0x1c),&local_4c);
    if (((uVar6 & 1) != 0) && (local_4c != -1)) {
      switch(*(undefined4 *)(param_1 + 0x2c)) {
      case 1:
      case 2:
      case 3:
        uVar1 = *(undefined4 *)(param_1 + 0x24);
        uVar2 = *(undefined4 *)(param_1 + 0x30);
        lVar5 = FUN_00d6aff4(lVar5);
        puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x168) + 0x10))(lVar5 + 0x168,uVar1);
        *puVar7 = uVar2;
        break;
      case 4:
        uVar1 = *(undefined4 *)(param_1 + 0x24);
        uVar3 = *(undefined1 *)(param_1 + 0x30);
        lVar5 = FUN_00d6aff4(lVar5);
        puVar9 = (undefined1 *)(**(code **)(*(long *)(lVar5 + 0x168) + 0x10))(lVar5 + 0x168,uVar1);
        *puVar9 = uVar3;
        break;
      case 5:
        uVar1 = *(undefined4 *)(param_1 + 0x24);
        uVar10 = *(undefined8 *)(param_1 + 0x30);
        uVar2 = *(undefined4 *)(param_1 + 0x38);
        lVar5 = FUN_00d6aff4(lVar5);
        puVar8 = (undefined8 *)(**(code **)(*(long *)(lVar5 + 0x168) + 0x10))(lVar5 + 0x168,uVar1);
        *puVar8 = uVar10;
        *(undefined4 *)(puVar8 + 1) = uVar2;
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d04d04(long param_1)

{
  FUN_00ce40e0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
               *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x28),
               *(undefined4 *)(param_1 + 0x2c),param_1 + 0x30);
  return;
}




void FUN_00d04d1c(long param_1)

{
  if (*(char *)(param_1 + 0x3c) != '\0') {
    return;
  }
  FUN_00d04ba4();
  return;
}




void FUN_00d04d2c(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x30) = param_1;
  *(undefined4 *)(param_2 + 0x2c) = 1;
  return;
}




void FUN_00d04d3c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = 2;
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}




void FUN_00d04d48(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = 3;
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}




void FUN_00d04d54(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x30) = param_2 & 1;
  *(undefined4 *)(param_1 + 0x2c) = 4;
  return;
}




void FUN_00d04d68(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 1);
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x2c) = 5;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return;
}




void FUN_00d04d88(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x40,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_028117f8;
  *(undefined1 *)((long)puVar1 + 0x3c) = *(undefined1 *)(param_1 + 0x3c);
  uVar2 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar1 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x2c);
  *(undefined8 *)((long)puVar1 + 0x34) = *(undefined8 *)(param_1 + 0x34);
  *(undefined8 *)((long)puVar1 + 0x2c) = uVar2;
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d04e08(undefined4 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                 byte param_5)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined4 *)((long)param_2 + 0x1c) = param_3;
  *(undefined4 *)(param_2 + 4) = param_4;
  *(undefined4 *)((long)param_2 + 0x24) = param_1;
  *param_2 = &PTR_FUN_02811830;
  *(byte *)(param_2 + 5) = param_5 & 1;
  return;
}




void FUN_00d04e34(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    FUN_00d04e78(param_1);
    FUN_00ce5384(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x1c),
                 *(undefined4 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
    return;
  }
  return;
}




void FUN_00d04e78(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if (lVar2 != 0) {
    local_30[0] = *(undefined4 *)(param_1 + 0x20);
    lVar2 = FUN_00d9f258(lVar2,local_30);
    if (lVar2 != 0) {
      if (*(char *)(param_1 + 0x28) == '\0') {
        FUN_00d6e0b0(*(undefined4 *)(param_1 + 0x24));
      }
      else {
        FUN_00d6dc30();
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d04ef4(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00d04e78(param_1);
  return;
}




void FUN_00d04f2c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x30,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_02811830;
  *(undefined8 *)((long)puVar1 + 0x21) = *(undefined8 *)(param_1 + 0x21);
  *(undefined8 *)((long)puVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d04fa4(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *param_1 = &PTR_FUN_02811868;
  *(undefined4 *)((long)param_1 + 0x24) = param_4;
  return;
}




void FUN_00d04fc8(long param_1)

{
  long lVar1;
  ulong uVar2;
  int *piVar3;
  int iVar4;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    iVar4 = *(int *)(param_1 + 0x20);
    if (*(int *)(param_1 + 0x24) == 1) {
      local_40 = 0;
      FUN_019889cc(&local_40,1,DAT_0312edf0,0);
      piVar3 = (int *)(**(code **)(*(long *)(local_40 + 0x28) + 0x10))
                                ((long *)(local_40 + 0x28),*(undefined4 *)(param_1 + 0x1c));
      iVar4 = *piVar3 + iVar4;
    }
    FUN_00ce4b6c(*(undefined4 *)(param_1 + 0x1c),iVar4);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

