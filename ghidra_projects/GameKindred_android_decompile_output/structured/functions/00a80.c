// functions/00a80 — 51 functions
#include "libGameKindred.h"




void FUN_00a80028(long param_1,long *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  
  puVar1 = (undefined4 *)
           (**(code **)(*(long *)(*param_2 + 0x68) + 0x10))
                     ((long *)(*param_2 + 0x68),*(undefined4 *)(param_1 + 0x10));
  if ((*(short *)((long)puVar1 + 2) != 0) && (lVar2 = FUN_00a1f354(), lVar2 != 0)) {
    FUN_00a1a2c0(lVar2,*puVar1);
    return;
  }
  return;
}




void FUN_00a8007c(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *param_2;
  while( true ) {
    lVar2 = lVar1;
    if (lVar2 == 0) {
      return;
    }
    lVar1 = (**(code **)(*(long *)(lVar2 + 0x68) + 0x10))
                      ((long *)(lVar2 + 0x68),*(undefined4 *)(param_1 + 0x10));
    if (lVar1 != 0) break;
    lVar3 = *(long *)(lVar2 + 0x10);
    while ((lVar1 = lVar2, lVar3 != 0 &&
           (lVar1 = lVar3, *(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_02c7eb40))) {
      lVar3 = *(long *)(lVar3 + 0x10);
    }
  }
  if (*(short *)(lVar1 + 2) == 0) {
    return;
  }
  lVar2 = FUN_00a1f354();
  if (lVar2 == 0) {
    return;
  }
  FUN_00a1a1c8(lVar2,lVar1,param_1 + 0x14,param_1 + 0x1c);
  return;
}




void FUN_00a80134(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  
  FUN_00cedce4();
  lVar3 = FUN_00d9e390();
  if (lVar3 != 0) {
    lVar4 = FUN_009cc5a0(lVar3,*param_2);
    lVar3 = 0;
    if (lVar4 != 0) {
      lVar3 = lVar4 + 0x28;
    }
    puVar1 = &DAT_03214ce8;
    if (lVar4 != 0) {
      puVar1 = (undefined4 *)(lVar3 + 8);
    }
    uVar2 = *puVar1;
    *(long *)(param_3 + 0x18) = lVar3;
    *(undefined4 *)(param_3 + 0x20) = uVar2;
  }
  return;
}




void FUN_00a80190(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  plVar1 = *(long **)(param_3 + 0x18);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_3 + 0x20) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 == 0) {
        return;
      }
      plVar1 = *(long **)(param_3 + 0x18);
      uVar3 = 0;
      if (plVar1 != (long *)0x0) {
        if (*(int *)(param_3 + 0x20) == (int)plVar1[1]) {
          uVar3 = (**(code **)(*plVar1 + 0x10))();
        }
        else {
          *(undefined8 *)(param_3 + 0x18) = 0;
          uVar3 = 0;
          *(undefined4 *)(param_3 + 0x20) = DAT_03214ce8;
        }
      }
      FUN_019888f4(uVar3);
      uVar4 = DAT_03214ce8;
      *(undefined8 *)(param_3 + 0x18) = 0;
    }
    else {
      *(undefined8 *)(param_3 + 0x18) = 0;
      uVar4 = DAT_03214ce8;
    }
    *(undefined4 *)(param_3 + 0x20) = uVar4;
  }
  return;
}




void FUN_00a80240(undefined8 param_1,undefined8 *param_2)

{
  FUN_01985ca8(*param_2);
  return;
}




void FUN_00a8024c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00a8c2fc();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  return;
}




void FUN_00a80270(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a80278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}




void FUN_00a8027c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a80284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}




void FUN_00a80288(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a80290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}




void FUN_00a80294(void)

{
  return;
}




void FUN_00a8029c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ceb10;
  param_1[1] = 0x300000000;
  *(undefined2 *)(param_1 + 2) = 0;
  return;
}




void FUN_00a802c0(long *param_1,byte *param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  uint uVar2;
  uint local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_2 == (byte *)0x0) {
    local_30[0] = 0;
  }
  else {
    uVar2 = (uint)*param_2;
    local_30[0] = 0x811c9dc5;
    if (*param_2 != 0) {
      do {
        param_2 = param_2 + 1;
        local_30[0] = (local_30[0] ^ uVar2) * 0x1000193;
        uVar2 = (uint)*param_2;
      } while (*param_2 != 0);
    }
  }
  (**(code **)(*param_1 + 8))(param_1,local_30,param_3,param_4 & 1);
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a80354(long param_1,undefined4 *param_2,undefined4 param_3,byte param_4)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *(byte *)(param_1 + 0x10) = param_4 & 1;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}




void FUN_00a80368(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  if ((*(char *)(param_1 + 0x11) != '\0') && (uVar3 = FUN_00a1bcec(), (uVar3 & 1) != 0)) {
    return;
  }
  plVar6 = (long *)(param_2 + 0x18);
  do {
    lVar5 = *plVar6;
    plVar6 = (long *)(lVar5 + 0x20);
  } while (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_02e3ef68);
  lVar5 = *(long *)(lVar5 + 0x18);
  while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_02e8b430))) {
    lVar5 = *(long *)(lVar5 + 0x20);
  }
  uVar4 = FUN_00d9eb38(param_2);
  iVar1 = FUN_00d5412c(uVar4,*(undefined4 *)(param_1 + 8));
  if (lVar5 != 0) {
    FUN_00a0d99c(lVar5);
    uVar3 = FUN_008ff0f4();
    if ((uVar3 & 1) != 0) {
      FUN_00a0d99c(lVar5);
      iVar2 = FUN_008ff0dc();
      if (iVar2 == iVar1) {
        return;
      }
    }
  }
  FUN_00d59a60(param_2,iVar1,*(undefined4 *)(param_1 + 0xc),*(undefined1 *)(param_1 + 0x10));
  return;
}




void FUN_00a80448(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((*(char *)(param_1 + 0x11) == '\0') || (uVar3 = FUN_00a1bcec(), (uVar3 & 1) == 0)) {
    for (lVar5 = *(long *)(param_2 + 0x18); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x20)) {
      if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == DAT_02e3ef68) {
        lVar5 = *(long *)(lVar5 + 0x18);
        while( true ) {
          if (lVar5 == 0) {
            return;
          }
          if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == DAT_02e8b430) break;
          lVar5 = *(long *)(lVar5 + 0x20);
        }
        uVar4 = FUN_00d9eb38(param_2);
        iVar1 = FUN_00d5412c(uVar4,*(undefined4 *)(param_1 + 8));
        FUN_00a0d99c(lVar5);
        iVar2 = FUN_008ff0d4();
        if (iVar2 != 0) {
          return;
        }
        FUN_00a0d99c(lVar5);
        iVar2 = FUN_008ff0dc();
        if (iVar2 != iVar1) {
          return;
        }
        FUN_00d59c40(param_2);
        return;
      }
    }
  }
  return;
}




void FUN_00a80524(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  if ((*(char *)(param_1 + 0x11) == '\0') || (uVar2 = FUN_00a1bcec(), (uVar2 & 1) == 0)) {
    plVar4 = (long *)(param_2 + 0x18);
    do {
      lVar3 = *plVar4;
      plVar4 = (long *)(lVar3 + 0x20);
    } while (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_02e3ef68);
    for (lVar3 = *(long *)(lVar3 + 0x18); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x20)) {
      if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_02e8b430) {
        FUN_00a0d99c();
        iVar1 = FUN_008ff0d4();
        if (iVar1 != 1) {
          return;
        }
        FUN_00d59c40(param_2);
        return;
      }
    }
  }
  return;
}




void FUN_00a805c0(long param_1,long param_2)

{
  ulong uVar1;
  
  if (((*(char *)(param_1 + 0x11) == '\0') || (uVar1 = FUN_00a1bcec(), (uVar1 & 1) == 0)) &&
     (uVar1 = FUN_00ced270(*(undefined4 *)(param_2 + 0x260)), (uVar1 & 1) != 0)) {
    FUN_00d59c40(param_2);
    return;
  }
  return;
}




void FUN_00a80608(long param_1)

{
  *(undefined1 *)(param_1 + 0x11) = 1;
  return;
}




void FUN_00a80614(undefined8 *param_1)

{
  param_1[3] = &PTR_FUN_027ceb10;
  param_1[2] = &PTR_FUN_027ced20;
  *(undefined2 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_027ceb58;
  param_1[1] = 0;
  param_1[4] = 0x300000000;
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xf8;
  return;
}




void FUN_00a80668(long *param_1,byte *param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  uint uVar2;
  uint local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_2 == (byte *)0x0) {
    local_30[0] = 0;
  }
  else {
    uVar2 = (uint)*param_2;
    local_30[0] = 0x811c9dc5;
    if (*param_2 != 0) {
      do {
        param_2 = param_2 + 1;
        local_30[0] = (local_30[0] ^ uVar2) * 0x1000193;
        uVar2 = (uint)*param_2;
      } while (*param_2 != 0);
    }
  }
  (**(code **)(*param_1 + 0x38))(param_1,local_30,param_3,param_4 & 1);
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00a806fc(long param_1,undefined4 *param_2,undefined4 param_3,byte param_4)

{
  undefined4 uVar1;
  
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xf8 | 1;
  uVar1 = *param_2;
  *(byte *)(param_1 + 0x28) = param_4 & 1;
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x24) = param_3;
  return param_1 + 0x18;
}




void FUN_00a80728(long *param_1,byte *param_2)

{
  long lVar1;
  uint uVar2;
  uint local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_2 == (byte *)0x0) {
    local_30[0] = 0;
  }
  else {
    uVar2 = (uint)*param_2;
    local_30[0] = 0x811c9dc5;
    if (*param_2 != 0) {
      do {
        param_2 = param_2 + 1;
        local_30[0] = (local_30[0] ^ uVar2) * 0x1000193;
        uVar2 = (uint)*param_2;
      } while (*param_2 != 0);
    }
  }
  (**(code **)(*param_1 + 0x48))(param_1,local_30);
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00a807b8(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xf8 | 2;
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x24) = 3;
  return param_1 + 0x18;
}




long FUN_00a807e4(long param_1)

{
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xf8 | 4;
  return param_1 + 0x18;
}




long FUN_00a80800(long param_1)

{
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xf8 | 3;
  return param_1 + 0x18;
}




void FUN_00a8081c(long param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = FUN_00d66d28(*param_2);
  uVar2 = FUN_00ced270(*(undefined4 *)(lVar1 + 0x260));
  if ((uVar2 & 1) != 0) {
    switch(*(byte *)(param_1 + 0x30) & 7) {
    case 1:
      FUN_00a80368(param_1 + 0x18,lVar1);
      return;
    case 2:
      FUN_00a80448(param_1 + 0x18,lVar1);
      return;
    case 3:
      FUN_00a80524(param_1 + 0x18,lVar1);
      return;
    case 4:
      FUN_00a805c0(param_1 + 0x18,lVar1);
      return;
    }
  }
  return;
}




void FUN_00a808cc(undefined8 *param_1)

{
  FUN_00cfc438();
  param_1[3] = &PTR_FUN_027ceb10;
  param_1[2] = &PTR_FUN_027ced20;
  *param_1 = &PTR_FUN_027cebc8;
  *(undefined2 *)(param_1 + 5) = 0;
  param_1[4] = 0x300000000;
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xf8;
  return;
}




void FUN_00a8093c(long *param_1,byte *param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  uint uVar2;
  uint local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_2 == (byte *)0x0) {
    local_30[0] = 0;
  }
  else {
    uVar2 = (uint)*param_2;
    local_30[0] = 0x811c9dc5;
    if (*param_2 != 0) {
      do {
        param_2 = param_2 + 1;
        local_30[0] = (local_30[0] ^ uVar2) * 0x1000193;
        uVar2 = (uint)*param_2;
      } while (*param_2 != 0);
    }
  }
  (**(code **)(*param_1 + 0x58))(param_1,local_30,param_3,param_4 & 1);
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00a809d0(long param_1,undefined4 *param_2,undefined4 param_3,byte param_4)

{
  undefined4 uVar1;
  
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xf8 | 1;
  uVar1 = *param_2;
  *(byte *)(param_1 + 0x28) = param_4 & 1;
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x24) = param_3;
  return param_1 + 0x18;
}




void FUN_00a809fc(long *param_1,byte *param_2)

{
  long lVar1;
  uint uVar2;
  uint local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_2 == (byte *)0x0) {
    local_30[0] = 0;
  }
  else {
    uVar2 = (uint)*param_2;
    local_30[0] = 0x811c9dc5;
    if (*param_2 != 0) {
      do {
        param_2 = param_2 + 1;
        local_30[0] = (local_30[0] ^ uVar2) * 0x1000193;
        uVar2 = (uint)*param_2;
      } while (*param_2 != 0);
    }
  }
  (**(code **)(*param_1 + 0x68))(param_1,local_30);
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00a80a8c(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xf8 | 2;
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x24) = 3;
  return param_1 + 0x18;
}




long FUN_00a80ab8(long param_1)

{
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xf8 | 4;
  return param_1 + 0x18;
}




long FUN_00a80ad4(long param_1)

{
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xf8 | 3;
  return param_1 + 0x18;
}




void FUN_00a80af0(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = FUN_00d5048c(param_2);
  uVar2 = FUN_00ced270(*(undefined4 *)(lVar1 + 0x260));
  if ((uVar2 & 1) != 0) {
    switch(*(byte *)(param_1 + 0x30) & 7) {
    case 1:
      FUN_00a80368(param_1 + 0x18,lVar1);
      return;
    case 2:
      FUN_00a80448(param_1 + 0x18,lVar1);
      return;
    case 3:
      FUN_00a80524(param_1 + 0x18,lVar1);
      return;
    case 4:
      FUN_00a805c0(param_1 + 0x18,lVar1);
      return;
    }
  }
  return;
}




long FUN_00a80b9c(long param_1,undefined8 param_2)

{
  FUN_00a802c0(param_1 + 0x10,param_2,3,0);
  return param_1 + 0x10;
}




void FUN_00a80bcc(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a80bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}




void FUN_00a80bd8(long param_1)

{
  undefined8 uVar1;
  
  FUN_00cedce4();
  uVar1 = FUN_00d9e390();
  FUN_00a80448(param_1 + 0x10,uVar1);
  return;
}




void FUN_00a80c08(long param_1)

{
  undefined8 uVar1;
  
  FUN_00cedce4();
  uVar1 = FUN_00d9e390();
  FUN_00a80368(param_1 + 0x10,uVar1);
  return;
}




void FUN_00a80c38(undefined8 *param_1)

{
  param_1[2] = 0x43b4000000000000;
  param_1[1] = 0x3f80000000000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 3) = 3;
  return;
}




void FUN_00a80c58(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}




void FUN_00a80c60(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = param_1;
  return;
}




void FUN_00a80c68(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 4) = param_1;
  return;
}




void FUN_00a80c70(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 8) = param_1;
  return;
}




void FUN_00a80c78(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xc) = param_1;
  return;
}




void FUN_00a80c80(float param_1,long param_2)

{
  *(float *)(param_2 + 0x10) = param_1 + 50.0;
  return;
}




void FUN_00a80c94(float param_1,long param_2)

{
  *(float *)(param_2 + 0x14) = param_1 + 50.0;
  return;
}




void FUN_00a80ca8(float *param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = 0;
  FUN_019889cc(&local_50,1,DAT_0312f158,0);
  uVar2 = local_50;
  FUN_00a0c9e8(param_4);
  lVar3 = *(long *)(param_4 + 0x18);
  do {
    if (lVar3 == 0) {
      uVar2 = 0;
LAB_00a80d74:
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar2);
    }
    if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_0312f370) {
      fVar4 = (float)FUN_01988c84();
      fVar4 = fVar4 + *(float *)(param_3 + 0x18);
      *(float *)(param_3 + 0x18) = fVar4;
      if (*param_1 + param_1[2] <= fVar4) {
        FUN_00a80e38(param_1,param_3,lVar3,uVar2);
      }
      else {
        FUN_00a80da0();
      }
      uVar2 = 1;
      goto LAB_00a80d74;
    }
    lVar3 = *(long *)(lVar3 + 0x20);
  } while( true );
}




void FUN_00a80da0(float *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  FUN_009d1aa0(param_1[4] * 0.017453292,param_3);
  uVar1 = NEON_fminnm(*(float *)(param_2 + 0x18) / *param_1,0x3f800000);
  FUN_009c751c(param_4,param_1[6]);
  FUN_009c7524((param_1[4] + 25.0) * 0.017453292,uVar1,param_4,param_1[6]);
  return;
}




void FUN_00a80e38(float *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = param_1[3];
  iVar1 = *(int *)(param_2 + 0x1c) + 1;
  fVar4 = *(float *)(param_2 + 0x18) - (*param_1 + param_1[2]);
  iVar2 = *(int *)(param_2 + 0x1c);
  if (fVar3 * (float)iVar1 < fVar4) {
    *(int *)(param_2 + 0x1c) = iVar1;
    iVar2 = iVar1;
  }
  fVar5 = param_1[1];
  if (fVar5 <= fVar4) {
    *(undefined1 *)(param_2 + 0x20) = 1;
    fVar4 = fVar5;
  }
  if (iVar2 % 2 == 1) {
    fVar4 = param_1[5] - ((fVar4 - fVar3 * (float)iVar2) * (param_1[5] - param_1[4])) / fVar3;
  }
  else {
    fVar4 = param_1[4] + ((fVar4 - fVar3 * (float)iVar2) * (param_1[5] - param_1[4])) / fVar3;
  }
  FUN_009d1aa0(fVar4 * 0.017453292,param_3);
  FUN_009c751c(param_4,param_1[6]);
  FUN_009c7524((fVar4 + 25.0) * 0.017453292,0x3f800000,param_4,param_1[6]);
  return;
}




void FUN_00a80f50(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_027cecf8;
  param_1[1] = 0;
  param_1[3] = 0;
  return;
}




undefined8 FUN_00a80f6c(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 extraout_x1;
  long *plVar3;
  
  FUN_00cedce4();
  lVar1 = FUN_00d9e390();
  FUN_00a80368(param_1 + 6,lVar1);
  plVar3 = (long *)(lVar1 + 0x18);
  do {
    lVar1 = *plVar3;
    plVar3 = (long *)(lVar1 + 0x20);
  } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_02e3ef68);
  lVar1 = *(long *)(lVar1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_02e8b430) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  uVar2 = FUN_00a80ca8(param_1 + 2,extraout_x1,param_3);
  if ((uVar2 & 1) != 0) {
    if (*(char *)(param_3 + 0x20) != '\0') {
      (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3);
      return 0;
    }
    return 1;
  }
  return 0;
}

