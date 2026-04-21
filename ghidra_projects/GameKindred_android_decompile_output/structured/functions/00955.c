// functions/00955 — 29 functions
#include "libGameKindred.h"




void FUN_00955098(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x50;
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
        lVar1 = lVar1 + -0x50;
        puVar2 = puVar2 + 10;
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




void FUN_00955134(uint *param_1,uint param_2)

{
  long lVar1;
  byte *pbVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x38;
      pbVar2 = (byte *)(*(long *)(param_1 + 2) + 0x18);
      do {
        if ((*pbVar2 & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + 0x10));
        }
        if ((pbVar2[-0x18] & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + -8));
        }
        lVar1 = lVar1 + -0x38;
        pbVar2 = pbVar2 + 0x38;
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




void FUN_009551c0(uint *param_1,uint param_2)

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




void FUN_00955238(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbad8;
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    operator_delete((void *)param_1[0xb]);
  }
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00955290(void)

{
  return 0xf;
}




void FUN_00955298(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00955508(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar4 = *(long *)(param_1 + 2);
    lVar5 = lVar3 + (ulong)*param_2 * 0x38;
    do {
      FUN_008fcdb8(lVar4,lVar3);
      thunk_FUN_00e7051c(lVar4 + 0x18,lVar3 + 0x18);
      *(undefined8 *)(lVar4 + 0x2f) = *(undefined8 *)(lVar3 + 0x2f);
      puVar1 = (undefined8 *)(lVar3 + 0x28);
      lVar3 = lVar3 + 0x38;
      *(undefined8 *)(lVar4 + 0x28) = *puVar1;
      lVar4 = lVar4 + 0x38;
    } while (lVar3 != lVar5);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return;
}




void FUN_0095532c(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00955608(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar4 = *(long *)(param_1 + 2);
    lVar5 = lVar3 + (ulong)*param_2 * 0x50;
    do {
      FUN_008fcdb8(lVar4,lVar3);
      FUN_008fcdb8(lVar4 + 0x18,lVar3 + 0x18);
      FUN_008fcdb8(lVar4 + 0x30,lVar3 + 0x30);
      puVar1 = (undefined8 *)(lVar3 + 0x48);
      lVar3 = lVar3 + 0x50;
      *(undefined8 *)(lVar4 + 0x48) = *puVar1;
      lVar4 = lVar4 + 0x50;
    } while (lVar3 != lVar5);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return;
}




void FUN_009553c4(void *param_1)

{
  FUN_0094f104();
  operator_delete(param_1);
  return;
}




undefined8 FUN_009553e8(void)

{
  return 0x13;
}




void FUN_009553f0(long param_1)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_40,&DAT_01e277f2);
  FUN_008fce60(param_1 + 0x28,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,&DAT_01e277f2);
  FUN_008fce60(param_1 + 0x40,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,&DAT_01e277f2);
  FUN_008fce60(param_1 + 0x58,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  FUN_0095571c(param_1 + 0x98,0);
  *(undefined1 *)(param_1 + 0xb8) = 0;
  FUN_008fa54c(local_40,&DAT_01e277f2);
  FUN_008fce60(param_1 + 0xc0,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined1 *)(param_1 + 0x90) = 1;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00955508(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x38);
    pvVar2 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar6 = (void *)((long)pvVar2 + (ulong)*param_1 * 0x38);
      pvVar5 = pvVar1;
      do {
        FUN_008fcdb8(pvVar5,pvVar2);
        thunk_FUN_00e7051c((long)pvVar5 + 0x18,(long)pvVar2 + 0x18);
        *(undefined8 *)((long)pvVar5 + 0x2f) = *(undefined8 *)((long)pvVar2 + 0x2f);
        puVar3 = (undefined8 *)((long)pvVar2 + 0x28);
        pvVar2 = (void *)((long)pvVar2 + 0x38);
        *(undefined8 *)((long)pvVar5 + 0x28) = *puVar3;
        pvVar5 = (void *)((long)pvVar5 + 0x38);
      } while (pvVar2 != pvVar6);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0x38;
        puVar3 = (undefined8 *)((long)pvVar2 + 0x20);
        do {
          if ((void *)*puVar3 != (void *)0x0) {
            operator_delete__((void *)*puVar3);
            puVar3[-1] = 0;
            *puVar3 = 0;
          }
          if ((*(byte *)(puVar3 + -4) & 1) != 0) {
            operator_delete((void *)puVar3[-2]);
          }
          lVar4 = lVar4 + -0x38;
          puVar3 = puVar3 + 7;
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




void FUN_00955608(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x50);
    pvVar2 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar6 = (void *)((long)pvVar2 + (ulong)*param_1 * 0x50);
      pvVar5 = pvVar1;
      do {
        FUN_008fcdb8(pvVar5,pvVar2);
        FUN_008fcdb8((long)pvVar5 + 0x18,(long)pvVar2 + 0x18);
        FUN_008fcdb8((long)pvVar5 + 0x30,(long)pvVar2 + 0x30);
        puVar3 = (undefined8 *)((long)pvVar2 + 0x48);
        pvVar2 = (void *)((long)pvVar2 + 0x50);
        *(undefined8 *)((long)pvVar5 + 0x48) = *puVar3;
        pvVar5 = (void *)((long)pvVar5 + 0x50);
      } while (pvVar2 != pvVar6);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0x50;
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
          lVar4 = lVar4 + -0x50;
          puVar3 = puVar3 + 10;
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




void FUN_0095571c(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x38;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x20);
      do {
        if ((void *)*puVar2 != (void *)0x0) {
          operator_delete__((void *)*puVar2);
          puVar2[-1] = 0;
          *puVar2 = 0;
        }
        if ((*(byte *)(puVar2 + -4) & 1) != 0) {
          operator_delete((void *)puVar2[-2]);
        }
        lVar1 = lVar1 + -0x38;
        puVar2 = puVar2 + 7;
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




void FUN_009557a8(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x50;
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
        lVar1 = lVar1 + -0x50;
        puVar2 = puVar2 + 10;
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




void FUN_00955844(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbb38;
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    operator_delete((void *)param_1[0xb]);
  }
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_0095589c(void)

{
  return 0x12;
}




void FUN_009558a4(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00955978(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar4 = *(long *)(param_1 + 2);
    lVar5 = lVar3 + (ulong)*param_2 * 0x30;
    do {
      FUN_008fcdb8(lVar4,lVar3);
      FUN_00955a6c(lVar4 + 0x18,lVar3 + 0x18);
      puVar1 = (undefined8 *)(lVar3 + 0x28);
      lVar3 = lVar3 + 0x30;
      *(undefined8 *)(lVar4 + 0x28) = *puVar1;
      lVar4 = lVar4 + 0x30;
    } while (lVar3 != lVar5);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return;
}




void FUN_00955930(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbb68;
  FUN_00955c58(param_1 + 5,1);
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00955970(void)

{
  return 0x3c;
}




void FUN_00955978(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  
  if (param_1[1] < param_2) {
    pvVar2 = operator_new__((ulong)param_2 * 0x30);
    pvVar3 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar7 = (void *)((long)pvVar3 + (ulong)*param_1 * 0x30);
      pvVar6 = pvVar2;
      do {
        FUN_008fcdb8(pvVar6,pvVar3);
        FUN_00955a6c((long)pvVar6 + 0x18,(long)pvVar3 + 0x18);
        puVar1 = (undefined8 *)((long)pvVar3 + 0x28);
        pvVar3 = (void *)((long)pvVar3 + 0x30);
        *(undefined8 *)((long)pvVar6 + 0x28) = *puVar1;
        pvVar6 = (void *)((long)pvVar6 + 0x30);
      } while (pvVar3 != pvVar7);
      pvVar3 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 * 0x30;
        lVar4 = (long)pvVar3 + 0x18;
        do {
          FUN_00955be0(lVar4,1);
          if ((*(byte *)(lVar4 + -0x18) & 1) != 0) {
            operator_delete(*(void **)(lVar4 + -8));
          }
          lVar5 = lVar5 + -0x30;
          lVar4 = lVar4 + 0x30;
        } while (lVar5 != 0);
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




void FUN_00955a6c(uint *param_1,uint *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00955af8(param_1,*param_2);
  uVar3 = 0;
  if (*param_2 != 0) {
    lVar4 = *(long *)(param_2 + 2);
    lVar5 = *(long *)(param_1 + 2);
    lVar1 = lVar4 + (ulong)*param_2 * 0x40;
    do {
      thunk_FUN_00e7051c(lVar5,lVar4);
      uVar6 = *(undefined8 *)(lVar4 + 0x2c);
      *(undefined8 *)(lVar5 + 0x34) = *(undefined8 *)(lVar4 + 0x34);
      *(undefined8 *)(lVar5 + 0x2c) = uVar6;
      uVar6 = *(undefined8 *)(lVar4 + 0x20);
      *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
      *(undefined8 *)(lVar5 + 0x20) = uVar6;
      puVar2 = (undefined8 *)(lVar4 + 0x18);
      uVar6 = *(undefined8 *)(lVar4 + 0x10);
      lVar4 = lVar4 + 0x40;
      *(undefined8 *)(lVar5 + 0x18) = *puVar2;
      *(undefined8 *)(lVar5 + 0x10) = uVar6;
      lVar5 = lVar5 + 0x40;
    } while (lVar4 != lVar1);
    uVar3 = *param_2;
  }
  *param_1 = uVar3;
  return;
}




void FUN_00955af8(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  void *pvVar6;
  undefined8 uVar7;
  
  if (param_1[1] < param_2) {
    pvVar2 = operator_new__((ulong)param_2 << 6);
    pvVar3 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar1 = (void *)((long)pvVar3 + (ulong)*param_1 * 0x40);
      pvVar6 = pvVar2;
      do {
        thunk_FUN_00e7051c(pvVar6,pvVar3);
        uVar7 = *(undefined8 *)((long)pvVar3 + 0x2c);
        *(undefined8 *)((long)pvVar6 + 0x34) = *(undefined8 *)((long)pvVar3 + 0x34);
        *(undefined8 *)((long)pvVar6 + 0x2c) = uVar7;
        uVar7 = *(undefined8 *)((long)pvVar3 + 0x20);
        *(undefined8 *)((long)pvVar6 + 0x28) = *(undefined8 *)((long)pvVar3 + 0x28);
        *(undefined8 *)((long)pvVar6 + 0x20) = uVar7;
        puVar4 = (undefined8 *)((long)pvVar3 + 0x18);
        uVar7 = *(undefined8 *)((long)pvVar3 + 0x10);
        pvVar3 = (void *)((long)pvVar3 + 0x40);
        *(undefined8 *)((long)pvVar6 + 0x18) = *puVar4;
        *(undefined8 *)((long)pvVar6 + 0x10) = uVar7;
        pvVar6 = (void *)((long)pvVar6 + 0x40);
      } while (pvVar3 != pvVar1);
      pvVar3 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 << 6;
        puVar4 = (undefined8 *)((long)pvVar3 + 8);
        do {
          if ((void *)*puVar4 != (void *)0x0) {
            operator_delete__((void *)*puVar4);
            puVar4[-1] = 0;
            *puVar4 = 0;
          }
          lVar5 = lVar5 + -0x40;
          puVar4 = puVar4 + 8;
        } while (lVar5 != 0);
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




void FUN_00955be0(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 << 6;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 8);
      do {
        if ((void *)*puVar2 != (void *)0x0) {
          operator_delete__((void *)*puVar2);
          puVar2[-1] = 0;
          *puVar2 = 0;
        }
        lVar1 = lVar1 + -0x40;
        puVar2 = puVar2 + 8;
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




void FUN_00955c58(uint *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0x30;
      lVar1 = *(long *)(param_1 + 2) + 0x18;
      do {
        FUN_00955be0(lVar1,1);
        if ((*(byte *)(lVar1 + -0x18) & 1) != 0) {
          operator_delete(*(void **)(lVar1 + -8));
        }
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




void FUN_00955ce0(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00955df0(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar4 = *(long *)(param_1 + 2);
    lVar5 = lVar3 + (ulong)*param_2 * 0x98;
    do {
      FUN_008fcdb8(lVar4,lVar3);
      FUN_008fcdb8(lVar4 + 0x18,lVar3 + 0x18);
      FUN_008fcdb8(lVar4 + 0x30,lVar3 + 0x30);
      FUN_00955f70(lVar4 + 0x48,lVar3 + 0x48);
      FUN_00956024(lVar4 + 0x58,lVar3 + 0x58);
      FUN_009560a4(lVar4 + 0x68,lVar3 + 0x68);
      FUN_00956124(lVar4 + 0x78,lVar3 + 0x78);
      puVar1 = (undefined8 *)(lVar3 + 0x90);
      uVar6 = *(undefined8 *)(lVar3 + 0x88);
      lVar3 = lVar3 + 0x98;
      *(undefined8 *)(lVar4 + 0x90) = *puVar1;
      *(undefined8 *)(lVar4 + 0x88) = uVar6;
      lVar4 = lVar4 + 0x98;
    } while (lVar3 != lVar5);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return;
}




void FUN_00955da8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbb98;
  FUN_00956964(param_1 + 5,1);
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00955de8(void)

{
  return 0x3d;
}




void FUN_00955df0(uint *param_1,uint param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  undefined8 uVar8;
  
  if (param_1[1] < param_2) {
    pvVar3 = operator_new__((ulong)param_2 * 0x98);
    pvVar4 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar7 = (void *)((long)pvVar4 + (ulong)*param_1 * 0x98);
      pvVar6 = pvVar3;
      do {
        FUN_008fcdb8(pvVar6,pvVar4);
        FUN_008fcdb8((long)pvVar6 + 0x18,(long)pvVar4 + 0x18);
        FUN_008fcdb8((long)pvVar6 + 0x30,(long)pvVar4 + 0x30);
        FUN_00955f70((long)pvVar6 + 0x48,(long)pvVar4 + 0x48);
        FUN_00956024((long)pvVar6 + 0x58,(long)pvVar4 + 0x58);
        FUN_009560a4((long)pvVar6 + 0x68,(long)pvVar4 + 0x68);
        FUN_00956124((long)pvVar6 + 0x78,(long)pvVar4 + 0x78);
        puVar2 = (undefined8 *)((long)pvVar4 + 0x90);
        uVar8 = *(undefined8 *)((long)pvVar4 + 0x88);
        pvVar4 = (void *)((long)pvVar4 + 0x98);
        *(undefined8 *)((long)pvVar6 + 0x90) = *puVar2;
        *(undefined8 *)((long)pvVar6 + 0x88) = uVar8;
        pvVar6 = (void *)((long)pvVar6 + 0x98);
      } while (pvVar4 != pvVar7);
      uVar1 = *param_1;
      pvVar4 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (uVar1 != 0) {
        lVar5 = 0;
        do {
          FUN_0095674c((long)pvVar4 + lVar5 + 0x78,1);
          FUN_009567c8((long)pvVar4 + lVar5 + 0x68,1);
          FUN_00956844((long)pvVar4 + lVar5 + 0x58,1);
          FUN_009568c0((long)pvVar4 + lVar5 + 0x48,1);
          if ((*(byte *)((long)pvVar4 + lVar5 + 0x30) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar4 + lVar5 + 0x40));
          }
          if ((*(byte *)((long)pvVar4 + lVar5 + 0x18) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar4 + lVar5 + 0x28));
          }
          if ((*(byte *)((long)pvVar4 + lVar5) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar4 + lVar5 + 0x10));
          }
          lVar5 = lVar5 + 0x98;
        } while ((ulong)uVar1 * 0x98 - lVar5 != 0);
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




void FUN_00955f70(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_009561ac(param_1,*param_2);
  uVar1 = 0;
  if (*param_2 != 0) {
    puVar2 = *(undefined8 **)(param_2 + 2);
    puVar3 = *(undefined8 **)(param_1 + 2);
    puVar4 = puVar2 + (ulong)*param_2 * 0xb;
    do {
      *puVar3 = *puVar2;
      FUN_008fcdb8(puVar3 + 1,puVar2 + 1);
      FUN_008fcdb8(puVar3 + 4,puVar2 + 4);
      FUN_00951160(puVar3 + 7,puVar2 + 7);
      FUN_009562e4(puVar3 + 9,puVar2 + 9);
      puVar2 = puVar2 + 0xb;
      puVar3 = puVar3 + 0xb;
    } while (puVar2 != puVar4);
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
  return;
}

