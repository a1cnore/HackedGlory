// functions/00d01 — 42 functions
#include "libGameKindred.h"




void FUN_00d01004(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x58,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_02811280;
  uVar2 = *(undefined8 *)(param_1 + 0x2c);
  *(undefined8 *)((long)puVar1 + 0x34) = *(undefined8 *)(param_1 + 0x34);
  *(undefined8 *)((long)puVar1 + 0x2c) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x45);
  *(undefined8 *)((long)puVar1 + 0x4d) = *(undefined8 *)(param_1 + 0x4d);
  *(undefined8 *)((long)puVar1 + 0x45) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar1 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x3c);
  *(undefined8 *)((long)puVar1 + 0x44) = *(undefined8 *)(param_1 + 0x44);
  *(undefined8 *)((long)puVar1 + 0x3c) = uVar2;
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d0108c(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *param_1 = &PTR_FUN_028112b8;
  *(undefined4 *)((long)param_1 + 0x24) = param_4;
  return;
}




void FUN_00d010b0(long param_1)

{
  FUN_00ce44bc(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
               *(undefined4 *)(param_1 + 0x24));
  return;
}




void FUN_00d010c0(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 != 0) {
    FUN_00d5c57c(lVar1,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
    return;
  }
  return;
}




void FUN_00d010fc(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x28,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_028112b8;
  *(undefined4 *)((long)puVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d01174(undefined8 *param_1,undefined4 param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_028112f0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  return;
}




void FUN_00d01194(long param_1)

{
  FUN_00ce5104(*(undefined4 *)(param_1 + 0x1c));
  return;
}




void FUN_00d0119c(long param_1)

{
  FUN_00d7e088(*(undefined4 *)(param_1 + 0x1c));
  FUN_01985ca8();
  return;
}




void FUN_00d011b8(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x20,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_028112f0;
  *(undefined4 *)((long)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d01228(undefined8 *param_1,undefined4 param_2,undefined8 *param_3,byte param_4)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *param_1 = &PTR_FUN_02811328;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 1);
  uVar1 = *param_3;
  *(byte *)((long)param_1 + 0x2c) = param_4 & 1;
  param_1[4] = uVar1;
  return;
}




void FUN_00d01260(long param_1)

{
  FUN_00ce8534(*(undefined4 *)(param_1 + 0x1c),param_1 + 0x20,*(undefined1 *)(param_1 + 0x2c));
  return;
}




void FUN_00d01274(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_00ceab48();
  if (((uVar1 & 1) == 0) && (lVar2 = FUN_00d84770(*(undefined4 *)(param_1 + 0x1c)), lVar2 != 0)) {
    FUN_00d80be4(lVar2,param_1 + 0x20);
    FUN_00d8168c(lVar2,*(undefined1 *)(param_1 + 0x2c));
    return;
  }
  return;
}




void FUN_00d012cc(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x30,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_02811328;
  *(undefined1 *)((long)puVar1 + 0x2c) = *(undefined1 *)(param_1 + 0x2c);
  uVar2 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar1 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = uVar2;
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d01344(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_02811360;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  return;
}




void FUN_00d01364(long param_1)

{
  FUN_00ce7b34(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
  return;
}




void FUN_00d01370(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_70 [56];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  lVar4 = *(long *)(lVar3 + 0x18);
  while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  iVar2 = FUN_00d535a4(lVar4,*(undefined4 *)(param_1 + 0x20));
  if (iVar2 != 0) {
    FUN_00d5c0e0(lVar3,*(undefined4 *)(param_1 + 0x20));
    uVar5 = FUN_00ceab48();
    if ((uVar5 & 1) != 0) {
      FUN_00d041e4(0x3f800000,auStack_70,*(undefined4 *)(lVar3 + 0x260),0x1d,0,0,0xffffffff);
      FUN_00ce20fc(auStack_70);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d01444(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x28,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_02811360;
  *(undefined8 *)((long)puVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d014b4(undefined4 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined2 param_5,byte param_6,undefined4 param_7,byte param_8)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined4 *)((long)param_2 + 0x1c) = param_3;
  *(undefined4 *)(param_2 + 4) = param_7;
  *(undefined4 *)((long)param_2 + 0x24) = param_1;
  *(undefined4 *)(param_2 + 5) = param_4;
  *(undefined2 *)((long)param_2 + 0x2c) = param_5;
  *(byte *)((long)param_2 + 0x2e) = param_6 & 1;
  *param_2 = &PTR_FUN_02811398;
  *(byte *)((long)param_2 + 0x2f) = param_8 & 1;
  return;
}




void FUN_00d014f0(undefined4 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                 byte param_5)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined4 *)((long)param_2 + 0x1c) = param_3;
  *(undefined4 *)(param_2 + 4) = param_4;
  *(undefined4 *)((long)param_2 + 0x24) = param_1;
  *(undefined4 *)(param_2 + 5) = 0;
  *(undefined1 *)((long)param_2 + 0x2e) = 0;
  *(undefined2 *)((long)param_2 + 0x2c) = 5;
  *param_2 = &PTR_FUN_02811398;
  *(byte *)((long)param_2 + 0x2f) = param_5 & 1;
  return;
}




void FUN_00d0152c(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float local_48;
  float fStack_44;
  float local_40;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if (*(float *)(param_1 + 0x24) < 0.0) {
    FUN_00daa5a0(lVar2,&local_3c,&local_40,&fStack_44,&local_48);
    if (((*(char *)(param_1 + 0x2f) == '\0') &&
        ((((uint)*(byte *)(lVar2 + 0x303) << 0x10) >> 0x12 & 1) == 0)) &&
       (fVar4 = *(float *)(*(long *)(lVar2 + 0x40) + 0x308) + local_3c, fVar4 <= 0.0)) {
      local_3c = local_3c - (fVar4 + -1.0);
    }
    *(float *)(param_1 + 0x24) = local_3c + local_40 + fStack_44 + local_48;
  }
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    FUN_00ce4a0c(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x1c),
                 *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28),
                 *(undefined2 *)(param_1 + 0x2c),*(undefined1 *)(param_1 + 0x2e));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d01624(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar5 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if (lVar5 == 0) goto LAB_00d018fc;
  if ((((uint)*(byte *)(lVar5 + 0x303) << 0x10) >> 0x12 & 1) == 0) {
    fVar10 = *(float *)(*(long *)(lVar5 + 0x40) + 0x308);
  }
  else {
    fVar10 = *(float *)(*(long *)(lVar5 + 0x40) + 0x30c);
  }
  if (fVar10 <= 0.0) goto LAB_00d018fc;
  lVar6 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x20));
  if (lVar6 == 0) {
    plVar7 = (long *)FUN_00d5bae0(lVar5);
    uVar2 = 0xffffffff;
  }
  else {
    if (*(float *)(param_1 + 0x24) < 0.0) {
      FUN_00d5bc74(lVar5,lVar6);
      FUN_00d5be0c(*(undefined4 *)(param_1 + 0x24),lVar6,lVar5);
    }
    plVar7 = (long *)FUN_00d5bae0(lVar5);
    uVar2 = FUN_00d5cf60(lVar6);
  }
  lVar8 = FUN_00d9e390(uVar2);
  uVar9 = FUN_00ceab64();
  uVar3 = 0;
  if ((uVar9 & 1) != 0) {
    uVar4 = *(uint *)(lVar5 + 0x2f4);
    if (((uVar4 & 1) == 0) && ((lVar6 == 0 || ((*(byte *)(lVar6 + 0x2f4) & 1) == 0)))) {
      if (lVar8 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        if ((*(byte *)(lVar8 + 0x2f4) & 1) != 0) goto LAB_00d01734;
      }
    }
    else {
LAB_00d01734:
      lVar6 = *(long *)(lVar5 + 0x40);
      fVar10 = (*(float *)(lVar6 + 0x1a0) + 1.0) *
               (*(float *)(lVar6 + 0x38) +
               *(float *)(lVar6 + 0xec) * (*(float *)(lVar6 + 0x254) + 1.0));
      if (DAT_0314f970 <= fVar10) {
        fVar10 = DAT_0314f970;
      }
      fVar11 = DAT_0314f8b0;
      if (DAT_0314f8b0 <= fVar10) {
        fVar11 = fVar10;
      }
      if ((uVar4 & 1) == 0) {
        if ((uVar4 >> 0xc & 1) == 0) {
          fVar10 = 1.0;
          if ((uVar4 & 4) != 0) {
            fVar10 = 0.054;
          }
        }
        else {
          fVar10 = 0.075;
        }
      }
      else {
        fVar10 = 0.18;
      }
      if (ABS(*(float *)(param_1 + 0x24) / fVar11) <= fVar10) {
        uVar3 = FUN_0094276c();
      }
      else {
        uVar3 = 1;
      }
    }
  }
  FUN_00daa5a0(*(undefined4 *)(param_1 + 0x24),lVar5,&local_5c,&local_60,&local_64,&local_68);
  if (local_64 != 0.0) {
    FUN_00d7f800(lVar5,4);
    FUN_00d5b7c0(local_64,lVar5,4);
  }
  if (local_68 != 0.0) {
    FUN_00d7f800(lVar5,5);
    FUN_00d5b7c0(local_68,lVar5,5);
  }
  if (local_5c != 0.0) {
    FUN_00d5b7c0(lVar5,0);
  }
  if (local_60 != 0.0) {
    FUN_00d5b7c0(lVar5,1);
  }
  if ((plVar7 != (long *)0x0) &&
     (((uVar9 = FUN_00ced270(*(undefined4 *)(param_1 + 0x1c)), (uVar9 & 1) != 0 ||
       (uVar9 = FUN_00ced270(*(undefined4 *)(param_1 + 0x20)), (uVar9 & 1) != 0)) ||
      (uVar4 = FUN_00ced270(uVar2), ((uVar3 | uVar4) & 1) != 0)))) {
    if (0.0 <= *(float *)(param_1 + 0x24)) {
      if (1.0 <= *(float *)(param_1 + 0x24)) {
        (**(code **)(*plVar7 + 0x110))(plVar7);
      }
    }
    else {
      (**(code **)(*plVar7 + 0x118))
                (local_5c + local_60 + local_64,plVar7,*(undefined4 *)(param_1 + 0x28),
                 *(undefined2 *)(param_1 + 0x2c),*(undefined1 *)(param_1 + 0x2e));
    }
  }
LAB_00d018fc:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d01930(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x30,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_02811398;
  *(undefined4 *)((long)puVar1 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  uVar2 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar1 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = uVar2;
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d019a8(undefined8 *param_1,undefined4 param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_028113d0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  return;
}




void FUN_00d019c8(long param_1)

{
  FUN_00ce9884(*(undefined4 *)(param_1 + 0x1c));
  return;
}




void FUN_00d019d0(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 != 0) {
    FUN_00d5a2b4();
    return;
  }
  return;
}




void FUN_00d019f8(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x20,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_028113d0;
  *(undefined4 *)((long)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d01a68(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *param_1 = &PTR_FUN_02811408;
  param_1[1] = 0;
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)(param_1 + 6) = 2;
  return;
}




void FUN_00d01aa4(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)((long)param_1 + 0x24) = param_4;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_02811408;
  *(undefined4 *)(param_1 + 6) = 0;
  return;
}




void FUN_00d01ad0(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *param_1 = &PTR_FUN_02811408;
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0xffffffff;
  uVar1 = *param_4;
  *(undefined4 *)(param_1 + 6) = 1;
  param_1[5] = uVar1;
  return;
}




void FUN_00d01b10(long param_1)

{
  FUN_00ce8bb4(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
               *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x24),param_1 + 0x28);
  return;
}




void FUN_00d01b28(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) == 0) {
    lVar5 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
    for (lVar7 = *(long *)(lVar5 + 0x18); lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x20)) {
      if (*(int *)(*(long *)(lVar7 + 8) + 0xa4) == DAT_03130aa8) {
        uVar4 = FUN_00d73574(lVar7,*(undefined4 *)(param_1 + 0x20));
        if ((uVar4 & 1) == 0) {
          return;
        }
        iVar2 = *(int *)(param_1 + 0x30);
        if (iVar2 == 0) {
          FUN_00d73798(lVar7,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
        }
        else if (iVar2 == 1) {
          FUN_00d737e0(lVar7,*(undefined4 *)(param_1 + 0x20),param_1 + 0x28);
        }
        else if (iVar2 == 2) {
          FUN_00d73758(lVar7,*(undefined4 *)(param_1 + 0x20));
        }
        if (lVar5 == 0) {
          return;
        }
        uVar3 = *(undefined4 *)(param_1 + 0x20);
        uVar8 = 0x10000;
        lVar7 = lVar5;
LAB_00d01c34:
        do {
          do {
            lVar6 = lVar7;
            if ((lVar6 != lVar5) &&
               (lVar7 = FUN_019865b4(*(undefined8 *)(lVar6 + 8),0x295f0542), lVar7 != 0)) {
              (**(code **)(lVar7 + 8))(lVar6,uVar3);
            }
            if (((uVar8 & 0xffff) < uVar8 >> 0x10) && (lVar7 = *(long *)(lVar6 + 0x18), lVar7 != 0))
            {
              uVar8 = uVar8 & 0xffff0000 | uVar8 + 1 & 0xffff;
              goto LAB_00d01c34;
            }
            if ((uVar8 & 0xffff) == 0) {
              return;
            }
            lVar7 = *(long *)(lVar6 + 0x20);
          } while (*(long *)(lVar6 + 0x20) != 0);
          lVar6 = *(long *)(lVar6 + 0x10);
          if (lVar6 == 0) {
            return;
          }
          uVar1 = uVar8 - 1 & 0xffff;
          if (uVar1 == 0) {
            return;
          }
          uVar8 = uVar1 | uVar8 & 0xffff0000;
          while (lVar7 = *(long *)(lVar6 + 0x20), lVar7 == 0) {
            if ((uVar8 - 1 & 0xffff) == 0) {
              return;
            }
            lVar6 = *(long *)(lVar6 + 0x10);
            uVar8 = uVar8 & 0xffff0000 | uVar8 - 1 & 0xffff;
            if (lVar6 == 0) {
              return;
            }
          }
        } while( true );
      }
    }
  }
  return;
}




void FUN_00d01ca8(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x38,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_02811408;
  *(undefined8 *)((long)puVar1 + 0x2c) = *(undefined8 *)(param_1 + 0x2c);
  uVar2 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar1 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = uVar2;
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d01d20(undefined8 *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined1 *)(param_1 + 4) = param_3;
  *param_1 = &PTR_FUN_02811440;
  *(undefined1 *)((long)param_1 + 0x21) = param_4;
  return;
}




void FUN_00d01d48(long param_1)

{
  FUN_00ce960c(*(undefined4 *)(param_1 + 0x1c),*(undefined1 *)(param_1 + 0x20),
               *(undefined1 *)(param_1 + 0x21));
  return;
}




void FUN_00d01d5c(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if ((lVar1 != 0) &&
     (uVar2 = FUN_00d5a0f0(lVar1,*(undefined1 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x21)),
     (uVar2 & 1) != 0)) {
    uVar2 = FUN_00ceab64();
    if ((uVar2 & 1) != 0) {
      FUN_009dc934(lVar1);
      return;
    }
    FUN_009c112c(lVar1,*(undefined1 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x21));
    return;
  }
  return;
}




void FUN_00d01dd0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x28,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_02811440;
  *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(param_1 + 0x20);
  *(undefined4 *)((long)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d01e48(undefined8 *param_1,undefined1 param_2,undefined4 param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x19) = param_2;
  *param_1 = &PTR_FUN_02811478;
  *(undefined4 *)((long)param_1 + 0x1c) = param_3;
  return;
}




void FUN_00d01e6c(void)

{
  return;
}




void FUN_00d01e70(long param_1)

{
  FUN_0091ab88(*(undefined1 *)(param_1 + 0x19),*(undefined4 *)(param_1 + 0x1c));
  return;
}




void FUN_00d01e80(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x20,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_02811478;
  *(undefined1 *)((long)puVar1 + 0x1f) = *(undefined1 *)(param_1 + 0x1f);
  *(undefined4 *)((long)puVar1 + 0x19) = *(undefined4 *)(param_1 + 0x19);
  *(undefined2 *)((long)puVar1 + 0x1d) = *(undefined2 *)(param_1 + 0x1d);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d01f00(undefined8 *param_1,undefined4 param_2)

{
  ulong uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_028114b0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    FUN_00d01f58(param_1);
    FUN_00ce2e94(*(undefined4 *)((long)param_1 + 0x1c));
    return;
  }
  return;
}




void FUN_00d01f58(long param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  long local_2a0 [70];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  lVar4 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if (lVar4 != 0) {
    uVar3 = FUN_019889cc(local_2a0,0x46,DAT_02c7eb30,0);
    if (uVar3 != 0) {
      uVar7 = 0;
      do {
        lVar8 = local_2a0[uVar7];
        if (lVar8 != 0) {
          uVar9 = 0xffff0000;
          lVar5 = lVar8;
LAB_00d02004:
          do {
            do {
              lVar6 = lVar5;
              if ((lVar6 != lVar8) &&
                 (lVar5 = FUN_019865b4(*(undefined8 *)(lVar6 + 8),0x6cf608dd), lVar5 != 0)) {
                (**(code **)(lVar5 + 8))(lVar6,lVar4);
              }
              if (((uVar9 & 0xffff) < uVar9 >> 0x10) &&
                 (lVar5 = *(long *)(lVar6 + 0x18), lVar5 != 0)) {
                uVar9 = uVar9 & 0xffff0000 | uVar9 + 1 & 0xffff;
                goto LAB_00d02004;
              }
              if ((uVar9 & 0xffff) == 0) goto LAB_00d0206c;
              lVar5 = *(long *)(lVar6 + 0x20);
            } while (*(long *)(lVar6 + 0x20) != 0);
            lVar6 = *(long *)(lVar6 + 0x10);
            if ((lVar6 == 0) || (uVar1 = uVar9 - 1 & 0xffff, uVar1 == 0)) break;
            uVar9 = uVar1 | uVar9 & 0xffff0000;
            while (lVar5 = *(long *)(lVar6 + 0x20), lVar5 == 0) {
              if ((uVar9 - 1 & 0xffff) == 0) goto LAB_00d0206c;
              lVar6 = *(long *)(lVar6 + 0x10);
              uVar9 = uVar9 & 0xffff0000 | uVar9 - 1 & 0xffff;
              if (lVar6 == 0) goto LAB_00d0206c;
            }
          } while( true );
        }
LAB_00d0206c:
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar3);
    }
    FUN_00d5ba88(lVar4);
    FUN_008ff53c();
    FUN_019888e0(lVar4);
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

