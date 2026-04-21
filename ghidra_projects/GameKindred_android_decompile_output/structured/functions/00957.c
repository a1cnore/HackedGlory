// functions/00957 — 34 functions
#include "libGameKindred.h"




void FUN_0095700c(uint *param_1,uint *param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00957324(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar4 = *(long *)(param_1 + 2);
    lVar5 = lVar3 + (ulong)*param_2 * 0x30;
    do {
      FUN_00957414(lVar4,lVar3);
      FUN_008fcdb8(lVar4 + 0x10,lVar3 + 0x10);
      puVar1 = (undefined2 *)(lVar3 + 0x28);
      lVar3 = lVar3 + 0x30;
      *(undefined2 *)(lVar4 + 0x28) = *puVar1;
      lVar4 = lVar4 + 0x30;
    } while (lVar3 != lVar5);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return;
}




void FUN_00957098(uint *param_1,uint *param_2)

{
  undefined2 *puVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_009575f0(param_1,*param_2);
  uVar3 = 0;
  if (*param_2 != 0) {
    lVar4 = *(long *)(param_2 + 2);
    lVar5 = *(long *)(param_1 + 2);
    lVar2 = lVar4 + (ulong)*param_2 * 0x20;
    do {
      FUN_008fcdb8(lVar5,lVar4);
      puVar1 = (undefined2 *)(lVar4 + 0x18);
      lVar4 = lVar4 + 0x20;
      *(undefined2 *)(lVar5 + 0x18) = *puVar1;
      lVar5 = lVar5 + 0x20;
    } while (lVar4 != lVar2);
    uVar3 = *param_2;
  }
  *param_1 = uVar3;
  return;
}




void FUN_00957114(uint *param_1,uint *param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_009576c8(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar4 = *(long *)(param_1 + 2);
    lVar5 = lVar3 + (ulong)*param_2 * 0x30;
    do {
      FUN_00957414(lVar4,lVar3);
      FUN_008fcdb8(lVar4 + 0x10,lVar3 + 0x10);
      puVar1 = (undefined2 *)(lVar3 + 0x28);
      lVar3 = lVar3 + 0x30;
      *(undefined2 *)(lVar4 + 0x28) = *puVar1;
      lVar4 = lVar4 + 0x30;
    } while (lVar3 != lVar5);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return;
}




void FUN_009571a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbc28;
  FUN_009577b8(param_1 + 0x13,1);
  FUN_0095783c(param_1 + 0x11,1);
  FUN_0095783c(param_1 + 0xf,1);
  FUN_0095783c(param_1 + 0xd,1);
  FUN_0095783c(param_1 + 0xb,1);
  FUN_0095783c(param_1 + 9,1);
  FUN_009578b4(param_1 + 7,1);
  FUN_00957938(param_1 + 5,1);
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_0095723c(void)

{
  return 0x40;
}




void FUN_00957244(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  void *pvVar7;
  
  if (param_1[1] < param_2) {
    pvVar3 = operator_new__((ulong)param_2 << 5);
    pvVar4 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar2 = (void *)((long)pvVar4 + (ulong)*param_1 * 0x20);
      pvVar7 = pvVar3;
      do {
        FUN_008fcdb8(pvVar7,pvVar4);
        *(undefined2 *)((long)pvVar7 + 0x1c) = *(undefined2 *)((long)pvVar4 + 0x1c);
        puVar1 = (undefined4 *)((long)pvVar4 + 0x18);
        pvVar4 = (void *)((long)pvVar4 + 0x20);
        *(undefined4 *)((long)pvVar7 + 0x18) = *puVar1;
        pvVar7 = (void *)((long)pvVar7 + 0x20);
      } while (pvVar4 != pvVar2);
      pvVar4 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar6 = (ulong)*param_1 << 5;
        puVar5 = (undefined8 *)((long)pvVar4 + 0x10);
        do {
          if ((*(byte *)(puVar5 + -2) & 1) != 0) {
            operator_delete((void *)*puVar5);
          }
          lVar6 = lVar6 + -0x20;
          puVar5 = puVar5 + 4;
        } while (lVar6 != 0);
        pvVar4 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
    }
    *(void **)(param_1 + 2) = pvVar3;
  }
  return;
}




void FUN_00957324(uint *param_1,uint param_2)

{
  undefined2 *puVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  
  if (param_1[1] < param_2) {
    pvVar2 = operator_new__((ulong)param_2 * 0x30);
    pvVar3 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar6 = (void *)((long)pvVar3 + (ulong)*param_1 * 0x30);
      pvVar5 = pvVar2;
      do {
        FUN_00957414(pvVar5,pvVar3);
        FUN_008fcdb8((long)pvVar5 + 0x10,(long)pvVar3 + 0x10);
        puVar1 = (undefined2 *)((long)pvVar3 + 0x28);
        pvVar3 = (void *)((long)pvVar3 + 0x30);
        *(undefined2 *)((long)pvVar5 + 0x28) = *puVar1;
        pvVar5 = (void *)((long)pvVar5 + 0x30);
      } while (pvVar3 != pvVar6);
      pvVar3 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0x30;
        do {
          if ((*(byte *)((long)pvVar3 + 0x10) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar3 + 0x20));
          }
          FUN_00957578(pvVar3,1);
          lVar4 = lVar4 + -0x30;
          pvVar3 = (void *)((long)pvVar3 + 0x30);
        } while (lVar4 != 0);
        pvVar3 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
    }
    *(void **)(param_1 + 2) = pvVar2;
  }
  return;
}




void FUN_00957414(uint *param_1,uint *param_2)

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
  FUN_00957498(param_1,*param_2);
  uVar3 = 0;
  if (*param_2 != 0) {
    lVar4 = *(long *)(param_2 + 2);
    lVar5 = *(long *)(param_1 + 2);
    lVar2 = lVar4 + (ulong)*param_2 * 0x20;
    do {
      FUN_008fcdb8(lVar5,lVar4);
      *(undefined1 *)(lVar5 + 0x1c) = *(undefined1 *)(lVar4 + 0x1c);
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




void FUN_00957498(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  void *pvVar7;
  
  if (param_1[1] < param_2) {
    pvVar3 = operator_new__((ulong)param_2 << 5);
    pvVar4 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar2 = (void *)((long)pvVar4 + (ulong)*param_1 * 0x20);
      pvVar7 = pvVar3;
      do {
        FUN_008fcdb8(pvVar7,pvVar4);
        *(undefined1 *)((long)pvVar7 + 0x1c) = *(undefined1 *)((long)pvVar4 + 0x1c);
        puVar1 = (undefined4 *)((long)pvVar4 + 0x18);
        pvVar4 = (void *)((long)pvVar4 + 0x20);
        *(undefined4 *)((long)pvVar7 + 0x18) = *puVar1;
        pvVar7 = (void *)((long)pvVar7 + 0x20);
      } while (pvVar4 != pvVar2);
      pvVar4 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar6 = (ulong)*param_1 << 5;
        puVar5 = (undefined8 *)((long)pvVar4 + 0x10);
        do {
          if ((*(byte *)(puVar5 + -2) & 1) != 0) {
            operator_delete((void *)*puVar5);
          }
          lVar6 = lVar6 + -0x20;
          puVar5 = puVar5 + 4;
        } while (lVar6 != 0);
        pvVar4 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
    }
    *(void **)(param_1 + 2) = pvVar3;
  }
  return;
}




void FUN_00957578(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 << 5;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x10);
      do {
        if ((*(byte *)(puVar2 + -2) & 1) != 0) {
          operator_delete((void *)*puVar2);
        }
        lVar1 = lVar1 + -0x20;
        puVar2 = puVar2 + 4;
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




void FUN_009575f0(uint *param_1,uint param_2)

{
  undefined2 *puVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  void *pvVar7;
  
  if (param_1[1] < param_2) {
    pvVar3 = operator_new__((ulong)param_2 << 5);
    pvVar4 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar2 = (void *)((long)pvVar4 + (ulong)*param_1 * 0x20);
      pvVar7 = pvVar3;
      do {
        FUN_008fcdb8(pvVar7,pvVar4);
        puVar1 = (undefined2 *)((long)pvVar4 + 0x18);
        pvVar4 = (void *)((long)pvVar4 + 0x20);
        *(undefined2 *)((long)pvVar7 + 0x18) = *puVar1;
        pvVar7 = (void *)((long)pvVar7 + 0x20);
      } while (pvVar4 != pvVar2);
      pvVar4 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar6 = (ulong)*param_1 << 5;
        puVar5 = (undefined8 *)((long)pvVar4 + 0x10);
        do {
          if ((*(byte *)(puVar5 + -2) & 1) != 0) {
            operator_delete((void *)*puVar5);
          }
          lVar6 = lVar6 + -0x20;
          puVar5 = puVar5 + 4;
        } while (lVar6 != 0);
        pvVar4 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
    }
    *(void **)(param_1 + 2) = pvVar3;
  }
  return;
}




void FUN_009576c8(uint *param_1,uint param_2)

{
  undefined2 *puVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  
  if (param_1[1] < param_2) {
    pvVar2 = operator_new__((ulong)param_2 * 0x30);
    pvVar3 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar6 = (void *)((long)pvVar3 + (ulong)*param_1 * 0x30);
      pvVar5 = pvVar2;
      do {
        FUN_00957414(pvVar5,pvVar3);
        FUN_008fcdb8((long)pvVar5 + 0x10,(long)pvVar3 + 0x10);
        puVar1 = (undefined2 *)((long)pvVar3 + 0x28);
        pvVar3 = (void *)((long)pvVar3 + 0x30);
        *(undefined2 *)((long)pvVar5 + 0x28) = *puVar1;
        pvVar5 = (void *)((long)pvVar5 + 0x30);
      } while (pvVar3 != pvVar6);
      pvVar3 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0x30;
        do {
          if ((*(byte *)((long)pvVar3 + 0x10) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar3 + 0x20));
          }
          FUN_00957578(pvVar3,1);
          lVar4 = lVar4 + -0x30;
          pvVar3 = (void *)((long)pvVar3 + 0x30);
        } while (lVar4 != 0);
        pvVar3 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
    }
    *(void **)(param_1 + 2) = pvVar2;
  }
  return;
}




void FUN_009577b8(uint *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 2);
  if (lVar1 != 0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0x30;
      do {
        if ((*(byte *)(lVar1 + 0x10) & 1) != 0) {
          operator_delete(*(void **)(lVar1 + 0x20));
        }
        FUN_00957578(lVar1,1);
        lVar2 = lVar2 + -0x30;
        lVar1 = lVar1 + 0x30;
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




void FUN_0095783c(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 << 5;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x10);
      do {
        if ((*(byte *)(puVar2 + -2) & 1) != 0) {
          operator_delete((void *)*puVar2);
        }
        lVar1 = lVar1 + -0x20;
        puVar2 = puVar2 + 4;
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




void FUN_009578b4(uint *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 2);
  if (lVar1 != 0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0x30;
      do {
        if ((*(byte *)(lVar1 + 0x10) & 1) != 0) {
          operator_delete(*(void **)(lVar1 + 0x20));
        }
        FUN_00957578(lVar1,1);
        lVar2 = lVar2 + -0x30;
        lVar1 = lVar1 + 0x30;
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




void FUN_00957938(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 << 5;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x10);
      do {
        if ((*(byte *)(puVar2 + -2) & 1) != 0) {
          operator_delete((void *)*puVar2);
        }
        lVar1 = lVar1 + -0x20;
        puVar2 = puVar2 + 4;
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




void FUN_009579b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbc58;
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_009579f8(void)

{
  return 0x41;
}




void FUN_00957a00(uint *param_1,uint *param_2)

{
  undefined2 *puVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00957ac4(param_1,*param_2);
  uVar3 = 0;
  if (*param_2 != 0) {
    lVar4 = *(long *)(param_2 + 2);
    lVar5 = *(long *)(param_1 + 2);
    lVar2 = lVar4 + (ulong)*param_2 * 0x20;
    do {
      FUN_008fcdb8(lVar5,lVar4);
      puVar1 = (undefined2 *)(lVar4 + 0x18);
      lVar4 = lVar4 + 0x20;
      *(undefined2 *)(lVar5 + 0x18) = *puVar1;
      lVar5 = lVar5 + 0x20;
    } while (lVar4 != lVar2);
    uVar3 = *param_2;
  }
  *param_1 = uVar3;
  return;
}




void FUN_00957a7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbc88;
  FUN_00957b9c(param_1 + 5,1);
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00957abc(void)

{
  return 0x42;
}




void FUN_00957ac4(uint *param_1,uint param_2)

{
  undefined2 *puVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  void *pvVar7;
  
  if (param_1[1] < param_2) {
    pvVar3 = operator_new__((ulong)param_2 << 5);
    pvVar4 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar2 = (void *)((long)pvVar4 + (ulong)*param_1 * 0x20);
      pvVar7 = pvVar3;
      do {
        FUN_008fcdb8(pvVar7,pvVar4);
        puVar1 = (undefined2 *)((long)pvVar4 + 0x18);
        pvVar4 = (void *)((long)pvVar4 + 0x20);
        *(undefined2 *)((long)pvVar7 + 0x18) = *puVar1;
        pvVar7 = (void *)((long)pvVar7 + 0x20);
      } while (pvVar4 != pvVar2);
      pvVar4 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar6 = (ulong)*param_1 << 5;
        puVar5 = (undefined8 *)((long)pvVar4 + 0x10);
        do {
          if ((*(byte *)(puVar5 + -2) & 1) != 0) {
            operator_delete((void *)*puVar5);
          }
          lVar6 = lVar6 + -0x20;
          puVar5 = puVar5 + 4;
        } while (lVar6 != 0);
        pvVar4 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
    }
    *(void **)(param_1 + 2) = pvVar3;
  }
  return;
}




void FUN_00957b9c(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 << 5;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x10);
      do {
        if ((*(byte *)(puVar2 + -2) & 1) != 0) {
          operator_delete((void *)*puVar2);
        }
        lVar1 = lVar1 + -0x20;
        puVar2 = puVar2 + 4;
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




void FUN_00957c14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbcb8;
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00957c5c(void)

{
  return 0x43;
}




void FUN_00957c64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbce8;
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00957cac(void)

{
  return 0x44;
}




void FUN_00957cb4(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00957d80(param_1,*param_2);
  uVar1 = 0;
  if (*param_2 != 0) {
    lVar2 = *(long *)(param_2 + 2);
    lVar3 = *(long *)(param_1 + 2);
    lVar4 = lVar2 + (ulong)*param_2 * 0x28;
    do {
      FUN_00957e68(lVar3,lVar2);
      FUN_008fcdb8(lVar3 + 0x10,lVar2 + 0x10);
      lVar2 = lVar2 + 0x28;
      lVar3 = lVar3 + 0x28;
    } while (lVar2 != lVar4);
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
  return;
}




void FUN_00957d38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbd18;
  FUN_00958034(param_1 + 5,1);
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00957d78(void)

{
  return 0x45;
}




void FUN_00957d80(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x28);
    pvVar2 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar5 = (void *)((long)pvVar2 + (ulong)*param_1 * 0x28);
      pvVar4 = pvVar1;
      do {
        FUN_00957e68(pvVar4,pvVar2);
        FUN_008fcdb8((long)pvVar4 + 0x10,(long)pvVar2 + 0x10);
        pvVar2 = (void *)((long)pvVar2 + 0x28);
        pvVar4 = (void *)((long)pvVar4 + 0x28);
      } while (pvVar2 != pvVar5);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar3 = (ulong)*param_1 * 0x28;
        do {
          if ((*(byte *)((long)pvVar2 + 0x10) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar2 + 0x20));
          }
          FUN_00957fbc(pvVar2,1);
          lVar3 = lVar3 + -0x28;
          pvVar2 = (void *)((long)pvVar2 + 0x28);
        } while (lVar3 != 0);
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




void FUN_00957e68(uint *param_1,uint *param_2)

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
  FUN_00957ee4(param_1,*param_2);
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




void FUN_00957ee4(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  void *pvVar7;
  
  if (param_1[1] < param_2) {
    pvVar3 = operator_new__((ulong)param_2 << 5);
    pvVar4 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar2 = (void *)((long)pvVar4 + (ulong)*param_1 * 0x20);
      pvVar7 = pvVar3;
      do {
        FUN_008fcdb8(pvVar7,pvVar4);
        puVar1 = (undefined4 *)((long)pvVar4 + 0x18);
        pvVar4 = (void *)((long)pvVar4 + 0x20);
        *(undefined4 *)((long)pvVar7 + 0x18) = *puVar1;
        pvVar7 = (void *)((long)pvVar7 + 0x20);
      } while (pvVar4 != pvVar2);
      pvVar4 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar6 = (ulong)*param_1 << 5;
        puVar5 = (undefined8 *)((long)pvVar4 + 0x10);
        do {
          if ((*(byte *)(puVar5 + -2) & 1) != 0) {
            operator_delete((void *)*puVar5);
          }
          lVar6 = lVar6 + -0x20;
          puVar5 = puVar5 + 4;
        } while (lVar6 != 0);
        pvVar4 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
    }
    *(void **)(param_1 + 2) = pvVar3;
  }
  return;
}




void FUN_00957fbc(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 << 5;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x10);
      do {
        if ((*(byte *)(puVar2 + -2) & 1) != 0) {
          operator_delete((void *)*puVar2);
        }
        lVar1 = lVar1 + -0x20;
        puVar2 = puVar2 + 4;
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

