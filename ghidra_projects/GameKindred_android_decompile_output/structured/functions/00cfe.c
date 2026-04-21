// functions/00cfe — 34 functions
#include "libGameKindred.h"




void FUN_00cfe024(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_02810f00;
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)(param_2 + 1);
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 6) = param_3;
  *(undefined4 *)((long)param_1 + 0x34) = 1;
  *(undefined8 *)((long)param_1 + 0x24) = uVar1;
  return;
}




void FUN_00cfe06c(undefined8 *param_1,undefined4 param_2,undefined8 *param_3,undefined1 param_4)

{
  undefined8 uVar1;
  
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_02810f00;
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)(param_3 + 1);
  uVar1 = *param_3;
  *(undefined1 *)(param_1 + 6) = param_4;
  *(undefined4 *)((long)param_1 + 0x34) = 2;
  *(undefined8 *)((long)param_1 + 0x24) = uVar1;
  return;
}




void FUN_00cfe0b4(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}




void FUN_00cfe0bc(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) == 0) {
    FUN_00cedce4();
    lVar2 = FUN_00d9e390();
    if (lVar2 != 0) {
      switch(*(undefined4 *)(param_1 + 0x34)) {
      case 0:
      case 3:
        FUN_00ce66b8(*(undefined4 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x30));
        return;
      case 1:
        FUN_00ce67f8(param_1 + 0x24,*(undefined1 *)(param_1 + 0x30));
        return;
      case 2:
        FUN_00ce6958(*(undefined4 *)(param_1 + 0x20),param_1 + 0x24,*(undefined1 *)(param_1 + 0x30))
        ;
        return;
      }
    }
  }
  return;
}




void FUN_00cfe14c(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  
  uVar5 = FUN_00ceab48();
  if (((uVar5 & 1) == 0) || (lVar6 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c)), lVar6 == 0)) {
    return;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x34);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uVar4 = *(undefined1 *)(param_1 + 0x30);
  uVar9 = 0x10000;
  lVar7 = lVar6;
LAB_00cfe1e0:
  do {
    do {
      lVar8 = lVar7;
      if ((lVar8 != lVar6) &&
         (lVar7 = FUN_019865b4(*(undefined8 *)(lVar8 + 8),0x838a09c6), lVar7 != 0)) {
        (**(code **)(lVar7 + 8))(lVar8,1,uVar2,uVar3,param_1 + 0x24,uVar4);
      }
      if (((uVar9 & 0xffff) < uVar9 >> 0x10) && (lVar7 = *(long *)(lVar8 + 0x18), lVar7 != 0)) {
        uVar9 = uVar9 & 0xffff0000 | uVar9 + 1 & 0xffff;
        goto LAB_00cfe1e0;
      }
      if ((uVar9 & 0xffff) == 0) goto LAB_00cfe24c;
      lVar7 = *(long *)(lVar8 + 0x20);
    } while (*(long *)(lVar8 + 0x20) != 0);
    lVar8 = *(long *)(lVar8 + 0x10);
    if ((lVar8 == 0) || (uVar1 = uVar9 - 1 & 0xffff, uVar1 == 0)) {
LAB_00cfe24c:
      if ((*(byte *)(lVar6 + 0x2f4) >> 1 & 1) == 0) {
        return;
      }
      FUN_009bc270(*(undefined4 *)(lVar6 + 0x260));
      return;
    }
    uVar9 = uVar1 | uVar9 & 0xffff0000;
    while (lVar7 = *(long *)(lVar8 + 0x20), lVar7 == 0) {
      if ((uVar9 - 1 & 0xffff) == 0) goto LAB_00cfe24c;
      lVar8 = *(long *)(lVar8 + 0x10);
      uVar9 = uVar9 & 0xffff0000 | uVar9 - 1 & 0xffff;
      if (lVar8 == 0) goto LAB_00cfe24c;
    }
  } while( true );
}




void FUN_00cfe294(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x38,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_02810f00;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar1 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = uVar2;
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00cfe30c(undefined8 *param_1,undefined4 param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_02810f38;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  return;
}




void FUN_00cfe32c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_00ceab48();
  if (((((uVar2 & 1) != 0) && (lVar3 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c)), lVar3 != 0))
      && (uVar1 = *(ushort *)(lVar3 + 0x88) & 0x1f, uVar1 != 0x1f)) &&
     (*(short *)(lVar3 + (ulong)uVar1 * 0x38 + 0x90) == 3)) {
    FUN_00d5df60();
    FUN_00ce34d0(*(undefined4 *)(param_1 + 0x1c));
    return;
  }
  return;
}




void FUN_00cfe398(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_00ceab48();
  if (((((uVar2 & 1) == 0) && (lVar3 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c)), lVar3 != 0))
      && (uVar1 = *(ushort *)(lVar3 + 0x88) & 0x1f, uVar1 != 0x1f)) &&
     (*(short *)(lVar3 + (ulong)uVar1 * 0x38 + 0x90) == 3)) {
    FUN_00d5df60();
    return;
  }
  return;
}




void FUN_00cfe400(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x20,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_02810f38;
  *(undefined4 *)((long)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00cfe470(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_02810f70;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  return;
}




void FUN_00cfe490(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_00ceab48();
  if ((((uVar2 & 1) != 0) && (lVar3 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c)), lVar3 != 0)) &&
     ((uVar1 = *(ushort *)(lVar3 + 0x88) & 0x1f, uVar1 == 0x1f ||
      (1 < *(ushort *)(lVar3 + (ulong)uVar1 * 0x38 + 0x90) - 3)))) {
    FUN_00d5a870();
    FUN_00ce3394(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
    return;
  }
  return;
}




void FUN_00cfe500(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_00ceab48();
  if ((((uVar2 & 1) == 0) && (lVar3 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c)), lVar3 != 0)) &&
     ((uVar1 = *(ushort *)(lVar3 + 0x88) & 0x1f, uVar1 == 0x1f ||
      (1 < *(ushort *)(lVar3 + (ulong)uVar1 * 0x38 + 0x90) - 3)))) {
    FUN_00d5a870(lVar3);
    FUN_009b531c(lVar3,*(undefined4 *)(param_1 + 0x20));
    uVar2 = FUN_00ceab64();
    if ((uVar2 & 1) != 0) {
      FUN_009dc8e4(lVar3);
      return;
    }
    FUN_009c1064(lVar3,*(undefined4 *)(param_1 + 0x20));
    return;
  }
  return;
}




void FUN_00cfe5a4(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x28,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_02810f70;
  *(undefined8 *)((long)puVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00cfe614(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_02810fa8;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 1);
  param_1[4] = *param_3;
  return;
}




void FUN_00cfe644(long param_1)

{
  FUN_00ce3604(*(undefined4 *)(param_1 + 0x1c),param_1 + 0x20);
  return;
}




void FUN_00cfe654(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  FUN_00d5aa78(uVar1,param_1 + 0x20);
  return;
}




void FUN_00cfe680(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x30,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_02810fa8;
  uVar2 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar1 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = uVar2;
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00cfe6f0(undefined8 *param_1,undefined4 param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_02810fe0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  return;
}




void FUN_00cfe710(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_00ceab48();
  if ((((uVar2 & 1) != 0) && (lVar3 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c)), lVar3 != 0)) &&
     ((uVar1 = *(ushort *)(lVar3 + 0x88) & 0x1f, uVar1 == 0x1f ||
      (1 < *(ushort *)(lVar3 + (ulong)uVar1 * 0x38 + 0x90) - 3)))) {
    FUN_00d5c28c(lVar3,lVar3);
    FUN_00ce3260(*(undefined4 *)(param_1 + 0x1c));
    return;
  }
  return;
}




void FUN_00cfe784(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_00ceab48();
  if ((((uVar2 & 1) == 0) && (lVar3 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c)), lVar3 != 0)) &&
     ((uVar1 = *(ushort *)(lVar3 + 0x88) & 0x1f, uVar1 == 0x1f ||
      (1 < *(ushort *)(lVar3 + (ulong)uVar1 * 0x38 + 0x90) - 3)))) {
    FUN_00d5c28c(lVar3,lVar3);
    return;
  }
  return;
}




void FUN_00cfe7f4(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x20,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_02810fe0;
  *(undefined4 *)((long)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00cfe864(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                 undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_4 + 3) = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  *(undefined4 *)((long)param_4 + 0x1c) = param_5;
  *(undefined4 *)(param_4 + 4) = param_6;
  *(undefined4 *)((long)param_4 + 0x24) = param_8;
  *(undefined4 *)(param_4 + 5) = 0;
  *(undefined4 *)((long)param_4 + 0x2c) = param_1;
  *(undefined4 *)(param_4 + 6) = param_9;
  *(undefined4 *)((long)param_4 + 0x34) = param_2;
  *(undefined4 *)(param_4 + 7) = param_3;
  *(undefined4 *)((long)param_4 + 0x3c) = param_10;
  *(undefined4 *)(param_4 + 8) = param_11;
  param_4[9] = 0;
  *param_4 = &PTR_FUN_02811018;
  *(undefined4 *)(param_4 + 10) = DAT_03214ce8;
  uVar1 = FUN_00d42844(param_7);
  *(undefined4 *)(param_4 + 5) = uVar1;
  return;
}




void FUN_00cfe8d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  *(undefined1 *)(param_4 + 3) = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  *(undefined4 *)((long)param_4 + 0x1c) = param_5;
  *(undefined4 *)(param_4 + 4) = param_6;
  *(undefined4 *)((long)param_4 + 0x24) = param_8;
  *(undefined4 *)(param_4 + 5) = param_7;
  *(undefined4 *)((long)param_4 + 0x2c) = param_1;
  *(undefined4 *)(param_4 + 6) = param_9;
  *(undefined4 *)((long)param_4 + 0x34) = param_2;
  *(undefined4 *)(param_4 + 7) = param_3;
  *(undefined4 *)((long)param_4 + 0x3c) = param_10;
  *(undefined4 *)(param_4 + 8) = param_11;
  param_4[9] = 0;
  *param_4 = &PTR_FUN_02811018;
  *(undefined4 *)(param_4 + 10) = DAT_03214ce8;
  return;
}




void FUN_00cfe918(long param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  lVar6 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x20));
  if ((lVar6 != 0) && (uVar7 = FUN_00ceab48(), (uVar7 & 1) != 0)) {
    lVar8 = FUN_00d6a690(lVar6,*(undefined4 *)(param_1 + 0x28));
    lVar6 = 0;
    if (lVar8 != 0) {
      lVar6 = lVar8 + 0x28;
    }
    puVar1 = &DAT_03214ce8;
    if (lVar8 != 0) {
      puVar1 = (undefined4 *)(lVar6 + 8);
    }
    uVar5 = *puVar1;
    *(long *)(param_1 + 0x48) = lVar6;
    *(undefined4 *)(param_1 + 0x50) = uVar5;
    uVar9 = FUN_00d6eb50();
    plVar10 = (long *)FUN_00d6eb5c(uVar9,"*KindredBuffs*");
    if (*(int *)(*(long *)(*plVar10 + (ulong)*(uint *)(param_1 + 0x28) * 8) + 0x3c) != 0) {
      plVar10 = *(long **)(param_1 + 0x48);
      if (plVar10 != (long *)0x0) {
        if (*(int *)(param_1 + 0x50) == (int)plVar10[1]) {
          lVar6 = (**(code **)(*plVar10 + 0x10))();
          if (lVar6 != 0) {
            uVar7 = FUN_00d42984(*(undefined4 *)(param_1 + 0x28));
            if (((uVar7 & 1) != 0) && (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x20))) {
              plVar10 = *(long **)(param_1 + 0x48);
              uVar9 = 0;
              if (plVar10 != (long *)0x0) {
                if (*(int *)(param_1 + 0x50) == (int)plVar10[1]) {
                  uVar9 = (**(code **)(*plVar10 + 0x10))();
                }
                else {
                  *(undefined8 *)(param_1 + 0x48) = 0;
                  uVar9 = 0;
                  *(undefined4 *)(param_1 + 0x50) = DAT_03214ce8;
                }
              }
              uVar5 = FUN_00d6a5f0(uVar9);
              FUN_00d06f7c(auStack_60,*(undefined4 *)(param_1 + 0x20),uVar5,0xffffffff);
              FUN_00ce20fc(auStack_60);
            }
            goto LAB_00cfeb24;
          }
        }
        else {
          *(undefined8 *)(param_1 + 0x48) = 0;
          *(undefined4 *)(param_1 + 0x50) = DAT_03214ce8;
        }
      }
      if ((((*(int *)(param_1 + 0x30) == 1) && (*(float *)(param_1 + 0x34) == 0.0)) &&
          (*(float *)(param_1 + 0x38) == 0.0)) &&
         ((*(int *)(param_1 + 0x3c) == 0 && (*(int *)(param_1 + 0x40) == 0)))) {
        uVar2 = *(uint *)(param_1 + 0x2c);
        uVar3 = uVar2 >> 0x17 & 0xff;
        uVar11 = uVar2 >> 0x10 & 0x8000;
        if (uVar3 != 0) {
          if (uVar3 == 0xff) {
            uVar11 = uVar11 | (uVar2 & 0x7fffff) != 0 | 0x7c00;
          }
          else {
            uVar3 = (uVar2 >> 0x17) * 0x1000000 + 0x81000000;
            if ((int)uVar3 < -0xe000000) {
              uVar12 = 0;
              if (-0x18000001 < (int)uVar3) {
                uVar12 = (0x400U >> (ulong)(-((int)uVar3 >> 0x18) - 0xeU & 0x1f)) +
                         ((uVar2 & 0x7fffff) >> (ulong)(~((int)uVar3 >> 0x18) & 0x1f)) & 0x3ff;
              }
              uVar11 = uVar12 | uVar11;
            }
            else if ((int)uVar3 < 0xf000001) {
              uVar11 = uVar11 | uVar2 >> 0xd & 0x3ff | (uVar3 >> 0xe) + 0x3c00 & 0x7c00;
            }
            else {
              uVar11 = uVar11 | 0x7c00;
            }
          }
        }
        FUN_00ce375c(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
                     *(undefined4 *)(param_1 + 0x28),uVar11,*(undefined4 *)(param_1 + 0x24));
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x2c);
        uVar3 = uVar2 >> 0x17 & 0xff;
        uVar11 = uVar2 >> 0x10 & 0x8000;
        if (uVar3 != 0) {
          if (uVar3 == 0xff) {
            uVar11 = uVar11 | (uVar2 & 0x7fffff) != 0 | 0x7c00;
          }
          else {
            uVar3 = (uVar2 >> 0x17) * 0x1000000 + 0x81000000;
            if ((int)uVar3 < -0xe000000) {
              uVar12 = 0;
              if (-0x18000001 < (int)uVar3) {
                uVar12 = (0x400U >> (ulong)(-((int)uVar3 >> 0x18) - 0xeU & 0x1f)) +
                         ((uVar2 & 0x7fffff) >> (ulong)(~((int)uVar3 >> 0x18) & 0x1f)) & 0x3ff;
              }
              uVar11 = uVar12 | uVar11;
            }
            else if ((int)uVar3 < 0xf000001) {
              uVar11 = uVar11 | uVar2 >> 0xd & 0x3ff | (uVar3 >> 0xe) + 0x3c00 & 0x7c00;
            }
            else {
              uVar11 = uVar11 | 0x7c00;
            }
          }
        }
        FUN_00ce38b8(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),
                     *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
                     *(undefined4 *)(param_1 + 0x28),uVar11,*(undefined4 *)(param_1 + 0x24),
                     *(int *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x3c),
                     *(undefined4 *)(param_1 + 0x40));
      }
    }
  }
LAB_00cfeb24:
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cfec54(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar2 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x20));
  if (lVar2 != 0) {
    uVar3 = FUN_00d6eb50();
    plVar4 = (long *)FUN_00d6eb5c(uVar3,"*KindredBuffs*");
    lVar8 = *(long *)(*plVar4 + (ulong)*(uint *)(param_1 + 0x28) * 8);
    uVar5 = FUN_00ceab48();
    if (((uVar5 & 1) != 0) && (plVar4 = *(long **)(param_1 + 0x48), plVar4 != (long *)0x0)) {
      if (*(int *)(param_1 + 0x50) == (int)plVar4[1]) {
        lVar6 = (**(code **)(*plVar4 + 0x10))();
        if (lVar6 != 0) {
          uVar3 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
          plVar4 = *(long **)(param_1 + 0x48);
          if (plVar4 == (long *)0x0) {
            uVar7 = 0;
          }
          else if (*(int *)(param_1 + 0x50) == (int)plVar4[1]) {
            uVar7 = (**(code **)(*plVar4 + 0x10))(plVar4);
          }
          else {
            *(undefined8 *)(param_1 + 0x48) = 0;
            uVar7 = 0;
            *(undefined4 *)(param_1 + 0x50) = DAT_03214ce8;
          }
          FUN_00d6a5f8(*(undefined4 *)(param_1 + 0x2c),uVar7,uVar3,lVar2,lVar8);
          return;
        }
      }
      else {
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined4 *)(param_1 + 0x50) = DAT_03214ce8;
      }
    }
    if ((((*(char *)(lVar8 + 0x2c) != '\0') || ((*(byte *)(lVar2 + 0x2f5) >> 4 & 1) == 0)) &&
        ((*(char *)(lVar8 + 0x2d) != '\0' || ((*(byte *)(lVar2 + 0x2f4) >> 2 & 1) == 0)))) &&
       (((*(char *)(lVar8 + 0x24) == '\0' ||
         (uVar1 = *(ushort *)(lVar2 + 0x88) & 0x1f, uVar1 == 0x1f)) ||
        (1 < *(ushort *)(lVar2 + (ulong)uVar1 * 0x38 + 0x90) - 3)))) {
      uVar3 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
      FUN_00d5c374(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x34),
                   *(undefined4 *)(param_1 + 0x38),lVar2,uVar3,lVar8,*(undefined4 *)(param_1 + 0x24)
                   ,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x3c),
                   *(undefined4 *)(param_1 + 0x40));
      return;
    }
  }
  return;
}




void FUN_00cfedec(void)

{
  return;
}




void FUN_00cfedf4(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x58,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_02811018;
  *(undefined8 *)((long)puVar1 + 0x3c) = *(undefined8 *)(param_1 + 0x3c);
  uVar2 = *(undefined8 *)(param_1 + 0x2c);
  *(undefined8 *)((long)puVar1 + 0x34) = *(undefined8 *)(param_1 + 0x34);
  *(undefined8 *)((long)puVar1 + 0x2c) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar1 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = uVar2;
  puVar1[9] = *(undefined8 *)(param_1 + 0x48);
  *(undefined4 *)(puVar1 + 10) = *(undefined4 *)(param_1 + 0x50);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00cfee84(undefined4 param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4,
                 byte param_5)

{
  param_3[1] = 0;
  param_3[2] = 0;
  *(undefined1 *)(param_3 + 3) = 0;
  *(undefined4 *)((long)param_3 + 0x1c) = param_4;
  *(undefined4 *)(param_3 + 4) = param_1;
  *(undefined4 *)((long)param_3 + 0x24) = param_2;
  *param_3 = &PTR_FUN_02811050;
  *(byte *)(param_3 + 5) = param_5 & 1;
  return;
}




void FUN_00cfeeb0(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    FUN_00ce5e5c(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                 *(undefined4 *)(param_1 + 0x1c),*(undefined1 *)(param_1 + 0x28));
    return;
  }
  return;
}




void FUN_00cfeeec(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 != 0) {
    FUN_00d57dd0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
    return;
  }
  return;
}




void FUN_00cfef28(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x30,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_02811050;
  *(undefined8 *)((long)puVar1 + 0x21) = *(undefined8 *)(param_1 + 0x21);
  *(undefined8 *)((long)puVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00cfefa0(undefined4 param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 *param_6)

{
  param_3[1] = 0;
  param_3[2] = 0;
  *(undefined1 *)(param_3 + 3) = 0;
  *(undefined4 *)((long)param_3 + 0x1c) = param_4;
  *(undefined4 *)(param_3 + 4) = param_1;
  *(undefined4 *)((long)param_3 + 0x24) = param_2;
  *param_3 = &PTR_FUN_02811088;
  *(undefined4 *)(param_3 + 5) = param_5;
  *(undefined4 *)((long)param_3 + 0x2c) = 0;
  *(undefined4 *)(param_3 + 7) = *(undefined4 *)(param_6 + 1);
  param_3[6] = *param_6;
  return;
}




void FUN_00cfefd8(undefined4 param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  param_3[1] = 0;
  param_3[2] = 0;
  *(undefined1 *)(param_3 + 3) = 0;
  *(undefined4 *)((long)param_3 + 0x1c) = param_4;
  *(undefined4 *)(param_3 + 4) = param_1;
  *(undefined4 *)((long)param_3 + 0x24) = param_2;
  *(undefined4 *)(param_3 + 5) = param_5;
  *(undefined4 *)((long)param_3 + 0x2c) = 0;
  *param_3 = &PTR_FUN_02811088;
  *(undefined4 *)(param_3 + 7) = DAT_03218f38;
  param_3[6] = DAT_03218f30;
  return;
}

