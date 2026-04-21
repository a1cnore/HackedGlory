// functions/00d6b — 44 functions
#include "libGameKindred.h"




void FUN_00d6b034(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  while( true ) {
    if (lVar2 == 0) {
      return;
    }
    iVar1 = FUN_00d66d34(lVar2);
    if (iVar1 == param_2) break;
    lVar2 = *(long *)(lVar2 + 0x350);
  }
  FUN_00d66d3c(lVar2);
  return;
}




void FUN_00d6b080(long param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  while( true ) {
    if (lVar2 == 0) {
      return;
    }
    iVar1 = FUN_00d66d34(lVar2);
    if (iVar1 == param_2) break;
    lVar2 = *(long *)(lVar2 + 0x350);
  }
  FUN_00d671f8(lVar2,param_3);
  return;
}




void FUN_00d6b0e0(long param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  while( true ) {
    if (lVar2 == 0) {
      return;
    }
    iVar1 = FUN_00d66d34(lVar2);
    if (iVar1 == param_2) break;
    lVar2 = *(long *)(lVar2 + 0x350);
  }
  FUN_00d67218(lVar2,param_3,1);
  return;
}




void FUN_00d6b144(long param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  while( true ) {
    if (lVar2 == 0) {
      return;
    }
    iVar1 = FUN_00d66d34(lVar2);
    if (iVar1 == param_2) break;
    lVar2 = *(long *)(lVar2 + 0x350);
  }
  FUN_00d67c30(lVar2,param_3);
  return;
}




void FUN_00d6b1a4(undefined8 param_1,long param_2,int param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x28);
  while( true ) {
    if (lVar2 == 0) {
      return;
    }
    iVar1 = FUN_00d66d34(lVar2);
    if (iVar1 == param_3) break;
    lVar2 = *(long *)(lVar2 + 0x350);
  }
  FUN_00d67d04(param_1,lVar2);
  return;
}




void FUN_00d6b204(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  for (lVar2 = *(long *)(param_1 + 0x28); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x350)) {
    uVar1 = FUN_00d67d74(lVar2);
    if ((uVar1 & 1) != 0) {
      FUN_00d670d4(lVar2);
    }
  }
  return;
}




void FUN_00d6b240(long param_1,undefined4 param_2,uint *param_3)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined1 auStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    for (lVar7 = *(long *)(param_1 + 0x28); lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x350)) {
      pbVar4 = (byte *)FUN_00d67558(lVar7);
      uVar5 = 0x811c9dc5;
      if (*pbVar4 != 0) {
        uVar5 = 0x811c9dc5;
        uVar6 = (uint)*pbVar4;
        do {
          pbVar4 = pbVar4 + 1;
          uVar5 = (uVar5 ^ uVar6) * 0x1000193;
          uVar6 = (uint)*pbVar4;
        } while (*pbVar4 != 0);
      }
      if (uVar5 == *param_3) {
        uVar2 = FUN_00d66d34(lVar7);
        FUN_00d009d0(auStack_70,param_2,uVar2);
        FUN_00ce20fc(auStack_70);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d6b320(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    for (lVar4 = *(long *)(param_1 + 0x28); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x350)) {
      uVar3 = FUN_00d67d80(lVar4);
      if ((uVar3 & 1) != 0) {
        uVar2 = FUN_00d66d34(lVar4);
        FUN_00d009d0(auStack_60,param_2,uVar2);
        FUN_00ce20fc(auStack_60);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d6b3b4(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    for (lVar4 = *(long *)(param_1 + 0x28); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x350)) {
      uVar3 = FUN_00d67d98(lVar4);
      if ((uVar3 & 1) != 0) {
        uVar2 = FUN_00d66d34(lVar4);
        FUN_00d009d0(auStack_60,param_2,uVar2);
        FUN_00ce20fc(auStack_60);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d6b448(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    for (lVar4 = *(long *)(param_1 + 0x28); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x350)) {
      uVar3 = FUN_00d67d8c(lVar4);
      if ((uVar3 & 1) != 0) {
        uVar2 = FUN_00d66d34(lVar4);
        FUN_00d009d0(auStack_60,param_2,uVar2);
        FUN_00ce20fc(auStack_60);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d6b4dc(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    for (lVar4 = *(long *)(param_1 + 0x28); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x350)) {
      uVar3 = FUN_00d67da4(lVar4);
      if ((uVar3 & 1) != 0) {
        uVar2 = FUN_00d66d34(lVar4);
        FUN_00d009d0(auStack_60,param_2,uVar2);
        FUN_00ce20fc(auStack_60);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d6b570(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  while ((lVar2 != 0 && (iVar1 = FUN_00d66d34(lVar2), iVar1 != param_2))) {
    lVar2 = *(long *)(lVar2 + 0x350);
  }
  FUN_00d67b14(lVar2);
  return;
}




long FUN_00d6b5b0(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  while ((lVar2 != 0 && (iVar1 = FUN_00d66d34(lVar2), iVar1 != param_2))) {
    lVar2 = *(long *)(lVar2 + 0x350);
  }
  return lVar2;
}




void FUN_00d6b5f0(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    param_2 = ~param_2;
    do {
      param_2 = param_2 + 1;
      if (param_2 == 0) break;
      lVar1 = *(long *)(lVar1 + 0x350);
    } while (lVar1 != 0);
  }
  FUN_00d66d34();
  return;
}




void FUN_00d6b610(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    param_2 = ~param_2;
    do {
      param_2 = param_2 + 1;
      if (param_2 == 0) {
        return;
      }
      lVar1 = *(long *)(lVar1 + 0x350);
    } while (lVar1 != 0);
  }
  return;
}




void FUN_00d6b630(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30[0] = param_2;
  FUN_00d6b680(param_1,local_30);
  FUN_00d66d34();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00d6b680(long param_1,int *param_2,int param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  while ((lVar2 != 0 &&
         (((iVar1 = FUN_00d67b1c(lVar2), *param_2 != iVar1 ||
           (iVar1 = FUN_00d67ce4(lVar2), iVar1 != 0)) ||
          ((param_3 != -1 && (iVar1 = FUN_00d67b84(lVar2), iVar1 != param_3))))))) {
    lVar2 = *(long *)(lVar2 + 0x350);
  }
  return lVar2;
}




undefined4
FUN_00d6b700(undefined8 param_1,undefined4 param_2,undefined4 *param_3,uint param_4,
            undefined4 param_5)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long *plVar4;
  ulong uVar5;
  long local_50 [2];
  
  lVar1 = tpidr_el0;
  local_50[1] = *(long *)(lVar1 + 0x28);
  uVar5 = (ulong)param_4;
  plVar4 = (long *)((long)local_50 - (uVar5 * 8 + 0xf & 0xffffffff0));
  local_50[0]._0_4_ = param_2;
  uVar2 = FUN_00d6b7c8(param_1,local_50,param_5,plVar4,param_4);
  if (param_4 != 0) {
    do {
      uVar3 = 0xffffffff;
      if (*plVar4 != 0) {
        uVar3 = FUN_00d66d34(*plVar4);
      }
      *param_3 = uVar3;
      uVar5 = uVar5 - 1;
      plVar4 = plVar4 + 1;
      param_3 = param_3 + 1;
    } while (uVar5 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_50[1]) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00d6b7c8(long param_1,int *param_2,int param_3,void *param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  if (param_5 != 0) {
    memset(param_4,0,(ulong)param_5 << 3);
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 != 0) {
      uVar2 = 0;
      while( true ) {
        iVar1 = FUN_00d67b1c(lVar3);
        if (((*param_2 == iVar1) && (iVar1 = FUN_00d67ce4(lVar3), iVar1 == 0)) &&
           ((param_3 == -1 || (iVar1 = FUN_00d67b84(lVar3), iVar1 == param_3)))) {
          *(long *)((long)param_4 + (ulong)uVar2 * 8) = lVar3;
          uVar2 = uVar2 + 1;
        }
        if (param_5 <= uVar2) break;
        lVar3 = *(long *)(lVar3 + 0x350);
        if (lVar3 == 0) {
          return uVar2;
        }
      }
      return uVar2;
    }
  }
  return 0;
}




void FUN_00d6b898(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    param_2 = ~param_2;
    do {
      param_2 = param_2 + 1;
      if (param_2 == 0) break;
      lVar1 = *(long *)(lVar1 + 0x350);
    } while (lVar1 != 0);
  }
  FUN_00d67558();
  return;
}




void FUN_00d6b8b8(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  while ((lVar2 != 0 && (iVar1 = FUN_00d66d34(lVar2), iVar1 != param_2))) {
    lVar2 = *(long *)(lVar2 + 0x350);
  }
  FUN_00d67558(lVar2);
  return;
}




void FUN_00d6b8f8(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  while ((lVar2 != 0 && (iVar1 = FUN_00d66d34(lVar2), iVar1 != param_2))) {
    lVar2 = *(long *)(lVar2 + 0x350);
  }
  FUN_00d67b84(lVar2);
  return;
}




void FUN_00d6b938(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  while ((lVar2 != 0 && (iVar1 = FUN_00d66d34(lVar2), iVar1 != param_2))) {
    lVar2 = *(long *)(lVar2 + 0x350);
  }
  FUN_00d67cec(lVar2);
  return;
}




void FUN_00d6b978(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  while ((lVar2 != 0 && (iVar1 = FUN_00d66d34(lVar2), iVar1 != param_2))) {
    lVar2 = *(long *)(lVar2 + 0x350);
  }
  FUN_00d67cf8(lVar2);
  return;
}




void FUN_00d6b9b8(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  while ((lVar2 != 0 && (iVar1 = FUN_00d66d34(lVar2), iVar1 != param_2))) {
    lVar2 = *(long *)(lVar2 + 0x350);
  }
  FUN_00d67b3c(lVar2);
  return;
}




void FUN_00d6b9f8(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  while ((lVar2 != 0 && (iVar1 = FUN_00d66d34(lVar2), iVar1 != param_2))) {
    lVar2 = *(long *)(lVar2 + 0x350);
  }
  FUN_00d67b34(lVar2);
  return;
}




void FUN_00d6ba38(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  while ((lVar2 != 0 && (iVar1 = FUN_00d66d34(lVar2), iVar1 != param_2))) {
    lVar2 = *(long *)(lVar2 + 0x350);
  }
  FUN_00d67b5c(lVar2);
  return;
}




bool FUN_00d6ba78(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  float fVar3;
  
  lVar2 = *(long *)(param_1 + 0x28);
  while ((lVar2 != 0 && (iVar1 = FUN_00d66d34(lVar2), iVar1 != param_2))) {
    lVar2 = *(long *)(lVar2 + 0x350);
  }
  fVar3 = (float)FUN_00d67b44(lVar2);
  return fVar3 != 0.0;
}




void FUN_00d6bac4(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  while ((lVar2 != 0 && (iVar1 = FUN_00d66d34(lVar2), iVar1 != param_2))) {
    lVar2 = *(long *)(lVar2 + 0x350);
  }
  FUN_00d67b6c(lVar2);
  return;
}




void FUN_00d6bb04(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  while ((lVar2 != 0 && (iVar1 = FUN_00d66d34(lVar2), iVar1 != param_2))) {
    lVar2 = *(long *)(lVar2 + 0x350);
  }
  FUN_00d66cf4(lVar2);
  return;
}




void FUN_00d6bb44(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6bbac(param_1,param_2,&local_2c);
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    uVar3 = FUN_00d6bb04(param_1,local_2c);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




void FUN_00d6bbac(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40[0] = param_2;
  lVar3 = FUN_00d6b680(param_1,local_40,0xffffffff);
  if (lVar3 == 0) {
    if (param_3 == (undefined4 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      *param_3 = 0xffffffff;
    }
  }
  else {
    if (param_3 != (undefined4 *)0x0) {
      uVar2 = FUN_00d66d34();
      *param_3 = uVar2;
    }
    uVar4 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}




void FUN_00d6bc40(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6bca8(param_1,param_2,param_3,&local_2c);
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    uVar3 = FUN_00d6bb04(param_1,local_2c);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




void FUN_00d6bca8(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30[0] = param_2;
  lVar3 = FUN_00d6b680(param_1,local_30);
  if (lVar3 == 0) {
    if (param_4 == (undefined4 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      *param_4 = 0xffffffff;
    }
  }
  else {
    if (param_4 != (undefined4 *)0x0) {
      uVar2 = FUN_00d66d34();
      *param_4 = uVar2;
    }
    uVar4 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}




void FUN_00d6bd30(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  while ((lVar2 != 0 && (iVar1 = FUN_00d66d34(lVar2), iVar1 != param_2))) {
    lVar2 = *(long *)(lVar2 + 0x350);
  }
  FUN_00d66cfc(lVar2);
  return;
}




undefined1 FUN_00d6bd70(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  while ((lVar2 != 0 && (iVar1 = FUN_00d66d34(lVar2), iVar1 != param_2))) {
    lVar2 = *(long *)(lVar2 + 0x350);
  }
  lVar2 = FUN_00d67b14(lVar2);
  return *(undefined1 *)(lVar2 + 0x2f);
}




void FUN_00d6bdb8(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  while ((lVar2 != 0 && (iVar1 = FUN_00d66d34(lVar2), iVar1 != param_2))) {
    lVar2 = *(long *)(lVar2 + 0x350);
  }
  FUN_00d66ce0(lVar2,0x200);
  return;
}




void FUN_00d6bdfc(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  while ((lVar2 != 0 && (iVar1 = FUN_00d66d34(lVar2), iVar1 != param_2))) {
    lVar2 = *(long *)(lVar2 + 0x350);
  }
  FUN_00d67dd4(lVar2);
  return;
}




void FUN_00d6be40(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  while ((lVar2 != 0 && (iVar1 = FUN_00d66d34(lVar2), iVar1 != param_2))) {
    lVar2 = *(long *)(lVar2 + 0x350);
  }
  FUN_00d67c60(lVar2);
  return;
}




undefined8 FUN_00d6be84(long param_1,int param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x28);
  while ((lVar4 != 0 && (iVar1 = FUN_00d66d34(lVar4), iVar1 != param_2))) {
    lVar4 = *(long *)(lVar4 + 0x350);
  }
  uVar2 = FUN_00d67d44(lVar4);
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    if (((param_3 & 1) != 0) && (uVar2 = FUN_00d67d50(lVar4), (uVar2 & 1) == 0)) {
      return 0;
    }
    uVar2 = FUN_00d66ce0(lVar4,0x80);
    if ((((uVar2 & 1) == 0) || (uVar2 = FUN_00d66ce0(lVar4,0x200), (uVar2 & 1) != 0)) ||
       (uVar3 = FUN_00d66cf4(lVar4), (int)uVar3 != 0)) {
      uVar3 = 1;
    }
  }
  return uVar3;
}




void FUN_00d6bf28(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  while ((lVar2 != 0 && (iVar1 = FUN_00d66d34(lVar2), iVar1 != param_2))) {
    lVar2 = *(long *)(lVar2 + 0x350);
  }
  FUN_00d6a078(lVar2);
  return;
}




void FUN_00d6bf68(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  while ((lVar2 != 0 && (iVar1 = FUN_00d66d34(lVar2), iVar1 != param_2))) {
    lVar2 = *(long *)(lVar2 + 0x350);
  }
  FUN_00d6a1f8(lVar2);
  return;
}




void FUN_00d6bfa8(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  while ((lVar2 != 0 && (iVar1 = FUN_00d66d34(lVar2), iVar1 != param_2))) {
    lVar2 = *(long *)(lVar2 + 0x350);
  }
  FUN_00d6a0dc(lVar2);
  return;
}




void FUN_00d6bfe8(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  while ((lVar2 != 0 && (iVar1 = FUN_00d66d34(lVar2), iVar1 != param_2))) {
    lVar2 = *(long *)(lVar2 + 0x350);
  }
  FUN_00d6a25c(lVar2);
  return;
}

