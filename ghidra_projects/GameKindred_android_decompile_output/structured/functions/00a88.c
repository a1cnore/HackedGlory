// functions/00a88 — 32 functions
#include "libGameKindred.h"




void FUN_00a88044(uint *param_1,uint *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 != param_2) {
    FUN_00a87ef4(param_1,1);
    FUN_00a87f6c(param_1,*param_2);
    uVar3 = 0;
    if (*param_2 != 0) {
      lVar4 = *(long *)(param_2 + 2);
      lVar5 = *(long *)(param_1 + 2);
      lVar2 = lVar4 + (ulong)*param_2 * 0x20;
      do {
        FUN_008fcdb8(lVar5,lVar4);
        puVar1 = (undefined4 *)(lVar4 + 0x18);
        lVar4 = lVar4 + 0x20;
        *(undefined4 *)(lVar5 + 0x18) = *puVar1;
        lVar5 = lVar5 + 0x20;
      } while (lVar4 != lVar2);
      uVar3 = *param_2;
    }
    *param_1 = uVar3;
  }
  return;
}




void FUN_00a880d4(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x28);
    pvVar2 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar6 = (void *)((long)pvVar2 + (ulong)*param_1 * 0x28);
      pvVar5 = pvVar1;
      do {
        FUN_008fcdb8(pvVar5,pvVar2);
        FUN_00a881c0((long)pvVar5 + 0x18,(long)pvVar2 + 0x18);
        pvVar2 = (void *)((long)pvVar2 + 0x28);
        pvVar5 = (void *)((long)pvVar5 + 0x28);
      } while (pvVar2 != pvVar6);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0x28;
        lVar3 = (long)pvVar2 + 0x18;
        do {
          FUN_00a87ef4(lVar3,1);
          if ((*(byte *)(lVar3 + -0x18) & 1) != 0) {
            operator_delete(*(void **)(lVar3 + -8));
          }
          lVar4 = lVar4 + -0x28;
          lVar3 = lVar3 + 0x28;
        } while (lVar4 != 0);
        pvVar2 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




void FUN_00a881c0(uint *param_1,uint *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00a87f6c(param_1,*param_2);
  uVar3 = 0;
  if (*param_2 != 0) {
    lVar4 = *(long *)(param_2 + 2);
    lVar5 = *(long *)(param_1 + 2);
    lVar2 = lVar4 + (ulong)*param_2 * 0x20;
    do {
      FUN_008fcdb8(lVar5,lVar4);
      puVar1 = (undefined4 *)(lVar4 + 0x18);
      lVar4 = lVar4 + 0x20;
      *(undefined4 *)(lVar5 + 0x18) = *puVar1;
      lVar5 = lVar5 + 0x20;
    } while (lVar4 != lVar2);
    uVar3 = *param_2;
  }
  *param_1 = uVar3;
  return;
}




void FUN_00a8823c(uint *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0x28;
      lVar1 = *(long *)(param_1 + 2) + 0x18;
      do {
        FUN_00a882c4(lVar1,1);
        if ((*(byte *)(lVar1 + -0x18) & 1) != 0) {
          operator_delete(*(void **)(lVar1 + -8));
        }
        lVar2 = lVar2 + -0x28;
        lVar1 = lVar1 + 0x28;
      } while (lVar2 != 0);
    }
    if ((param_2 & 1) != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_00a882c4(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x48;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x28);
      do {
        if ((*(byte *)(puVar2 + 1) & 1) != 0) {
          operator_delete((void *)puVar2[3]);
        }
        if ((*(byte *)(puVar2 + -2) & 1) != 0) {
          operator_delete((void *)*puVar2);
        }
        if ((*(byte *)(puVar2 + -5) & 1) != 0) {
          operator_delete((void *)puVar2[-3]);
        }
        lVar1 = lVar1 + -0x48;
        puVar2 = puVar2 + 9;
      } while (lVar1 != 0);
    }
    if ((param_2 & 1) != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_00a88360(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    FUN_00a882c4(param_1,1);
    FUN_00a88404(param_1,*param_2);
    uVar1 = 0;
    if (*param_2 != 0) {
      lVar2 = *(long *)(param_2 + 2);
      lVar3 = *(long *)(param_1 + 2);
      lVar4 = lVar2 + (ulong)*param_2 * 0x48;
      do {
        FUN_008fcdb8(lVar3,lVar2);
        FUN_008fcdb8(lVar3 + 0x18,lVar2 + 0x18);
        FUN_008fcdb8(lVar3 + 0x30,lVar2 + 0x30);
        lVar2 = lVar2 + 0x48;
        lVar3 = lVar3 + 0x48;
      } while (lVar2 != lVar4);
      uVar1 = *param_2;
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_00a88404(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x48);
    pvVar2 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar6 = (void *)((long)pvVar2 + (ulong)*param_1 * 0x48);
      pvVar5 = pvVar1;
      do {
        FUN_008fcdb8(pvVar5,pvVar2);
        FUN_008fcdb8((long)pvVar5 + 0x18,(long)pvVar2 + 0x18);
        FUN_008fcdb8((long)pvVar5 + 0x30,(long)pvVar2 + 0x30);
        pvVar2 = (void *)((long)pvVar2 + 0x48);
        pvVar5 = (void *)((long)pvVar5 + 0x48);
      } while (pvVar2 != pvVar6);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0x48;
        puVar3 = (undefined8 *)((long)pvVar2 + 0x28);
        do {
          if ((*(byte *)(puVar3 + 1) & 1) != 0) {
            operator_delete((void *)puVar3[3]);
          }
          if ((*(byte *)(puVar3 + -2) & 1) != 0) {
            operator_delete((void *)*puVar3);
          }
          if ((*(byte *)(puVar3 + -5) & 1) != 0) {
            operator_delete((void *)puVar3[-3]);
          }
          lVar4 = lVar4 + -0x48;
          puVar3 = puVar3 + 9;
        } while (lVar4 != 0);
        pvVar2 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




void FUN_00a88510(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x28);
    pvVar2 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar6 = (void *)((long)pvVar2 + (ulong)*param_1 * 0x28);
      pvVar5 = pvVar1;
      do {
        FUN_008fcdb8(pvVar5,pvVar2);
        FUN_00a885fc((long)pvVar5 + 0x18,(long)pvVar2 + 0x18);
        pvVar2 = (void *)((long)pvVar2 + 0x28);
        pvVar5 = (void *)((long)pvVar5 + 0x28);
      } while (pvVar2 != pvVar6);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0x28;
        lVar3 = (long)pvVar2 + 0x18;
        do {
          FUN_00a882c4(lVar3,1);
          if ((*(byte *)(lVar3 + -0x18) & 1) != 0) {
            operator_delete(*(void **)(lVar3 + -8));
          }
          lVar4 = lVar4 + -0x28;
          lVar3 = lVar3 + 0x28;
        } while (lVar4 != 0);
        pvVar2 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




void FUN_00a885fc(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00a88404(param_1,*param_2);
  uVar1 = 0;
  if (*param_2 != 0) {
    lVar2 = *(long *)(param_2 + 2);
    lVar3 = *(long *)(param_1 + 2);
    lVar4 = lVar2 + (ulong)*param_2 * 0x48;
    do {
      FUN_008fcdb8(lVar3,lVar2);
      FUN_008fcdb8(lVar3 + 0x18,lVar2 + 0x18);
      FUN_008fcdb8(lVar3 + 0x30,lVar2 + 0x30);
      lVar2 = lVar2 + 0x48;
      lVar3 = lVar3 + 0x48;
    } while (lVar2 != lVar4);
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
  return;
}




void FUN_00a8868c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00a8870c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00a8878c(void *param_1)

{
  memset(param_1,0,0xb6);
  return;
}




void FUN_00a887a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                 undefined8 param_9,undefined8 param_10,byte param_11)

{
  FUN_008fce60(param_1 + 0x20);
  FUN_008fce60(param_1 + 0x38,param_3);
  FUN_008fce60(param_1 + 0x50,param_4);
  FUN_008fce60(param_1 + 0x68,param_5);
  FUN_008fce60(param_1 + 0x80,param_6);
  FUN_008fce60(param_1 + 0x98,param_7);
  *(undefined4 *)(param_1 + 0xb0) = param_8;
  FUN_00a88898(param_1,param_9);
  FUN_00a88930(param_1 + 0x10,param_10);
  *(byte *)(param_1 + 0xb5) = param_11 & 1;
  return;
}




void FUN_00a8886c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009580b8();
  FUN_009626a4(uVar1,param_1 + 0x20,param_2);
  return;
}




void FUN_00a88898(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    FUN_00a87e6c(param_1,1);
    FUN_00a880d4(param_1,*param_2);
    uVar1 = 0;
    if (*param_2 != 0) {
      lVar2 = *(long *)(param_2 + 2);
      lVar3 = *(long *)(param_1 + 2);
      lVar4 = lVar2 + (ulong)*param_2 * 0x28;
      do {
        FUN_008fcdb8(lVar3,lVar2);
        FUN_00a881c0(lVar3 + 0x18,lVar2 + 0x18);
        lVar2 = lVar2 + 0x28;
        lVar3 = lVar3 + 0x28;
      } while (lVar2 != lVar4);
      uVar1 = *param_2;
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_00a88930(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    FUN_00a8823c(param_1,1);
    FUN_00a88510(param_1,*param_2);
    uVar1 = 0;
    if (*param_2 != 0) {
      lVar2 = *(long *)(param_2 + 2);
      lVar3 = *(long *)(param_1 + 2);
      lVar4 = lVar2 + (ulong)*param_2 * 0x28;
      do {
        FUN_008fcdb8(lVar3,lVar2);
        FUN_00a885fc(lVar3 + 0x18,lVar2 + 0x18);
        lVar2 = lVar2 + 0x28;
        lVar3 = lVar3 + 0x28;
      } while (lVar2 != lVar4);
      uVar1 = *param_2;
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_00a889c8(void *param_1)

{
  memset(param_1,0,0x4c);
  return;
}




void FUN_00a889e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  FUN_008fce60();
  FUN_008fce60(param_1 + 0x18,param_3);
  FUN_008fce60(param_1 + 0x30,param_4);
  *(undefined4 *)(param_1 + 0x48) = param_5;
  return;
}




void FUN_00a88a34(undefined8 *param_1)

{
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[5] = &PTR_FUN_027cfc38;
  *param_1 = &PTR_FUN_027cfa28;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  return;
}




void FUN_00a88a74(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_450;
  undefined4 local_448;
  undefined1 auStack_440 [1032];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cedce4();
  lVar2 = FUN_00d9e390();
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x59) = 1;
    local_448 = 0;
    local_450 = param_2;
    FUN_00d9d958(auStack_440);
    FUN_00a88af8(param_1,&local_450);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a88af8(long param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x58) == '\0') {
    FUN_00a89788(param_1 + 0x10,param_1 + 0x28);
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  FUN_00a89808(param_1 + 0x28,param_2);
  return;
}




void FUN_00a88b3c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_450;
  undefined4 local_448;
  undefined1 auStack_440 [1032];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x59) != '\0') {
    local_448 = 0;
    local_450 = param_2;
    FUN_00d9d958(auStack_440);
    FUN_00a88bb4(param_1,&local_450);
    *(undefined1 *)(param_1 + 0x59) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a88bb4(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  FUN_00a89868(param_1 + 0x28);
  if (*(long *)(param_1 + 0x30) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x30) + -8);
    while (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    }
  }
  return;
}




void FUN_00a88c0c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 local_460;
  undefined4 local_458;
  undefined1 auStack_450 [1032];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((*(char *)(param_1 + 0x59) == '\0') &&
     (iVar1 = *(int *)(param_3 + 0x260), iVar3 = FUN_00cedce4(), iVar1 == iVar3)) {
    *(undefined1 *)(param_1 + 0x59) = 1;
    local_458 = 0;
    local_460 = param_2;
    FUN_00d9d958(auStack_450);
    FUN_00a88af8(param_1,&local_460);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a88ca4(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 local_460;
  undefined4 local_458;
  undefined1 auStack_450 [1032];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((*(char *)(param_1 + 0x59) != '\0') &&
     (iVar1 = *(int *)(param_3 + 0x260), iVar3 = FUN_00cedce4(), iVar1 == iVar3)) {
    local_458 = 0;
    local_460 = param_2;
    FUN_00d9d958(auStack_450);
    FUN_00a88bb4(param_1,&local_460);
    *(undefined1 *)(param_1 + 0x59) = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a88d38(undefined8 *param_1)

{
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[5] = &PTR_FUN_027cfc38;
  *param_1 = &PTR_FUN_027cfa88;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  return;
}




void FUN_00a88d80(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x60) = param_2;
  return;
}




void FUN_00a88d88(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_450;
  undefined4 local_448;
  undefined1 auStack_440 [1032];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a88e08();
  if ((uVar2 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x68) = 1;
    local_448 = 0;
    local_450 = param_2;
    FUN_00d9d958(auStack_440);
    FUN_00a88af8(param_1,&local_450);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a88e08(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 local_90;
  undefined1 auStack_88 [96];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d4d9e8(auStack_88);
  FUN_00d4dca4(auStack_88,*(undefined8 *)(param_1 + 0x60),0);
  local_90 = 0;
  iVar2 = FUN_00d9e840(auStack_88,&local_90,1,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 != 0);
}




void FUN_00a88e84(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_450;
  undefined4 local_448;
  undefined1 auStack_440 [1032];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x68) != '\0') {
    local_448 = 0;
    local_450 = param_2;
    FUN_00d9d958(auStack_440);
    FUN_00a88bb4(param_1,&local_450);
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a88efc(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0x811c9dc5;
  pbVar1 = (byte *)FUN_00d5bc2c(param_3);
  uVar2 = 0x811c9dc5;
  if (*pbVar1 != 0) {
    uVar2 = 0x811c9dc5;
    uVar3 = (uint)*pbVar1;
    do {
      pbVar1 = pbVar1 + 1;
      uVar2 = (uVar2 ^ uVar3) * 0x1000193;
      uVar3 = (uint)*pbVar1;
    } while (*pbVar1 != 0);
  }
  pbVar1 = *(byte **)(param_1 + 0x60);
  uVar3 = (uint)*pbVar1;
  if (*pbVar1 != 0) {
    do {
      pbVar1 = pbVar1 + 1;
      uVar4 = (uVar4 ^ uVar3) * 0x1000193;
      uVar3 = (uint)*pbVar1;
    } while (*pbVar1 != 0);
  }
  if (uVar2 != uVar4) {
    return;
  }
  FUN_00a88fb0(param_1,param_2);
  return;
}




void FUN_00a88fb0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_450;
  undefined4 local_448;
  undefined1 auStack_440 [1032];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_448 = 0;
  local_450 = param_2;
  FUN_00d9d958(auStack_440);
  if (*(char *)(param_1 + 0x68) == '\0') {
    *(undefined1 *)(param_1 + 0x68) = 1;
    FUN_00a88af8(param_1,&local_450);
  }
  else {
    FUN_00a898d0(param_1 + 0x28,&local_450);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

