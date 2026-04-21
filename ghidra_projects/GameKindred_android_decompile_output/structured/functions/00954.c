// functions/00954 — 28 functions
#include "libGameKindred.h"




void FUN_00954024(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb9e8;
  if ((*(byte *)(param_1 + 7) & 1) != 0) {
    operator_delete((void *)param_1[9]);
  }
  FUN_00954178(param_1 + 5,1);
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00954078(void)

{
  return 0x26;
}




void FUN_00954080(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *pvVar3;
  byte *pbVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  
  if (param_1[1] < param_2) {
    pvVar2 = operator_new__((ulong)param_2 * 0x38);
    pvVar3 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar7 = (void *)((long)pvVar3 + (ulong)*param_1 * 0x38);
      pvVar6 = pvVar2;
      do {
        FUN_008fcdb8(pvVar6,pvVar3);
        FUN_008fcdb8((long)pvVar6 + 0x18,(long)pvVar3 + 0x18);
        puVar1 = (undefined4 *)((long)pvVar3 + 0x30);
        pvVar3 = (void *)((long)pvVar3 + 0x38);
        *(undefined4 *)((long)pvVar6 + 0x30) = *puVar1;
        pvVar6 = (void *)((long)pvVar6 + 0x38);
      } while (pvVar3 != pvVar7);
      pvVar3 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 * 0x38;
        pbVar4 = (byte *)((long)pvVar3 + 0x18);
        do {
          if ((*pbVar4 & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + 0x10));
          }
          if ((pbVar4[-0x18] & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + -8));
          }
          lVar5 = lVar5 + -0x38;
          pbVar4 = pbVar4 + 0x38;
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




void FUN_00954178(uint *param_1,uint param_2)

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




void FUN_00954204(uint *param_1,uint *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00954310(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar4 = *(long *)(param_1 + 2);
    lVar5 = lVar3 + (ulong)*param_2 * 0xa0;
    do {
      FUN_008fcdb8(lVar4,lVar3);
      FUN_008fcdb8(lVar4 + 0x18,lVar3 + 0x18);
      FUN_008fcdb8(lVar4 + 0x30,lVar3 + 0x30);
      *(undefined4 *)(lVar4 + 0x48) = *(undefined4 *)(lVar3 + 0x48);
      FUN_008fcdb8(lVar4 + 0x50,lVar3 + 0x50);
      FUN_008fcdb8(lVar4 + 0x68,lVar3 + 0x68);
      FUN_008fcdb8(lVar4 + 0x80,lVar3 + 0x80);
      puVar1 = (undefined1 *)(lVar3 + 0x98);
      lVar3 = lVar3 + 0xa0;
      *(undefined1 *)(lVar4 + 0x98) = *puVar1;
      lVar4 = lVar4 + 0xa0;
    } while (lVar3 != lVar5);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return;
}




void FUN_009542c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bba18;
  FUN_009544a8(param_1 + 5,1);
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00954308(void)

{
  return 0x27;
}




void FUN_00954310(uint *param_1,uint param_2)

{
  undefined1 *puVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  
  if (param_1[1] < param_2) {
    pvVar2 = operator_new__((ulong)param_2 * 0xa0);
    pvVar3 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar6 = (void *)((long)pvVar3 + (ulong)*param_1 * 0xa0);
      pvVar5 = pvVar2;
      do {
        FUN_008fcdb8(pvVar5,pvVar3);
        FUN_008fcdb8((long)pvVar5 + 0x18,(long)pvVar3 + 0x18);
        FUN_008fcdb8((long)pvVar5 + 0x30,(long)pvVar3 + 0x30);
        *(undefined4 *)((long)pvVar5 + 0x48) = *(undefined4 *)((long)pvVar3 + 0x48);
        FUN_008fcdb8((long)pvVar5 + 0x50,(long)pvVar3 + 0x50);
        FUN_008fcdb8((long)pvVar5 + 0x68,(long)pvVar3 + 0x68);
        FUN_008fcdb8((long)pvVar5 + 0x80,(long)pvVar3 + 0x80);
        puVar1 = (undefined1 *)((long)pvVar3 + 0x98);
        pvVar3 = (void *)((long)pvVar3 + 0xa0);
        *(undefined1 *)((long)pvVar5 + 0x98) = *puVar1;
        pvVar5 = (void *)((long)pvVar5 + 0xa0);
      } while (pvVar3 != pvVar6);
      pvVar3 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0xa0;
        do {
          FUN_00954424(pvVar3);
          lVar4 = lVar4 + -0xa0;
          pvVar3 = (void *)((long)pvVar3 + 0xa0);
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




void FUN_00954424(byte *param_1)

{
  if ((param_1[0x80] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x90));
  }
  if ((param_1[0x68] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x78));
  }
  if ((param_1[0x50] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x60));
  }
  if ((param_1[0x30] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x40));
  }
  if ((param_1[0x18] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  if ((*param_1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}




void FUN_009544a8(uint *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 2);
  if (lVar1 != 0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0xa0;
      do {
        FUN_00954424(lVar1);
        lVar2 = lVar2 + -0xa0;
        lVar1 = lVar1 + 0xa0;
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




void FUN_00954518(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bba48;
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    operator_delete((void *)param_1[0xb]);
  }
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00954560(void)

{
  return 0x24;
}




void FUN_00954568(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bba78;
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    operator_delete((void *)param_1[0xb]);
  }
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_009545b0(void)

{
  return 0x25;
}




void FUN_009545b8(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_0095491c(param_1,*param_2);
  uVar1 = 0;
  if (*param_2 != 0) {
    lVar2 = *(long *)(param_2 + 2);
    lVar3 = *(long *)(param_1 + 2);
    lVar4 = lVar2 + (ulong)*param_2 * 0x108;
    do {
      FUN_008fcdb8(lVar3,lVar2);
      thunk_FUN_00e7051c(lVar3 + 0x18,lVar2 + 0x18);
      FUN_008fcdb8(lVar3 + 0x28,lVar2 + 0x28);
      memcpy((void *)(lVar3 + 0x40),(void *)(lVar2 + 0x40),0xc3);
      lVar2 = lVar2 + 0x108;
      lVar3 = lVar3 + 0x108;
    } while (lVar2 != lVar4);
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
  return;
}




void FUN_00954658(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00954a38(param_1,*param_2);
  uVar3 = 0;
  if (*param_2 != 0) {
    lVar4 = *(long *)(param_2 + 2);
    lVar5 = *(long *)(param_1 + 2);
    lVar2 = lVar4 + (ulong)*param_2 * 0x20;
    do {
      FUN_008fcdb8(lVar5,lVar4);
      puVar1 = (undefined8 *)(lVar4 + 0x18);
      lVar4 = lVar4 + 0x20;
      *(undefined8 *)(lVar5 + 0x18) = *puVar1;
      lVar5 = lVar5 + 0x20;
    } while (lVar4 != lVar2);
    uVar3 = *param_2;
  }
  *param_1 = uVar3;
  return;
}




void FUN_009546d4(uint *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00954b10(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar4 = *(long *)(param_1 + 2);
    lVar5 = lVar3 + (ulong)*param_2 * 0x38;
    do {
      FUN_008fcdb8(lVar4,lVar3);
      FUN_008fcdb8(lVar4 + 0x18,lVar3 + 0x18);
      puVar1 = (undefined4 *)(lVar3 + 0x30);
      lVar3 = lVar3 + 0x38;
      *(undefined4 *)(lVar4 + 0x30) = *puVar1;
      lVar4 = lVar4 + 0x38;
    } while (lVar3 != lVar5);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return;
}




void FUN_00954760(uint *param_1,uint *param_2)

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
  FUN_00954c08(param_1,*param_2);
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




void FUN_009547f8(void *param_1)

{
  FUN_0094dae0();
  operator_delete(param_1);
  return;
}




undefined8 FUN_0095481c(void)

{
  return 0x10;
}




void FUN_00954824(long param_1)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00954d1c(param_1 + 0x28);
  FUN_008fa54c(local_40,&DAT_01e277f2);
  FUN_008fce60(param_1 + 0x180,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,&DAT_01e277f2);
  FUN_008fce60(param_1 + 0x198,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  FUN_00954e24(param_1 + 0x1d8,0);
  *(undefined1 *)(param_1 + 0x218) = 0;
  FUN_008fa54c(local_40,&DAT_01e277f2);
  FUN_008fce60(param_1 + 0x220,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  *(undefined4 *)(param_1 + 0x238) = 0;
  *(undefined1 *)(param_1 + 0x1d0) = 1;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0095491c(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x108);
    pvVar2 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar6 = (void *)((long)pvVar2 + (ulong)*param_1 * 0x108);
      pvVar5 = pvVar1;
      do {
        FUN_008fcdb8(pvVar5,pvVar2);
        thunk_FUN_00e7051c((long)pvVar5 + 0x18,(long)pvVar2 + 0x18);
        FUN_008fcdb8((long)pvVar5 + 0x28,(long)pvVar2 + 0x28);
        memcpy((void *)((long)pvVar5 + 0x40),(void *)((long)pvVar2 + 0x40),0xc3);
        pvVar2 = (void *)((long)pvVar2 + 0x108);
        pvVar5 = (void *)((long)pvVar5 + 0x108);
      } while (pvVar2 != pvVar6);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0x108;
        puVar3 = (undefined8 *)((long)pvVar2 + 0x20);
        do {
          if ((*(byte *)(puVar3 + 1) & 1) != 0) {
            operator_delete((void *)puVar3[3]);
          }
          if ((void *)*puVar3 != (void *)0x0) {
            operator_delete__((void *)*puVar3);
            puVar3[-1] = 0;
            *puVar3 = 0;
          }
          if ((*(byte *)(puVar3 + -4) & 1) != 0) {
            operator_delete((void *)puVar3[-2]);
          }
          lVar4 = lVar4 + -0x108;
          puVar3 = puVar3 + 0x21;
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




void FUN_00954a38(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  void *pvVar6;
  
  if (param_1[1] < param_2) {
    pvVar2 = operator_new__((ulong)param_2 << 5);
    pvVar3 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar1 = (void *)((long)pvVar3 + (ulong)*param_1 * 0x20);
      pvVar6 = pvVar2;
      do {
        FUN_008fcdb8(pvVar6,pvVar3);
        puVar4 = (undefined8 *)((long)pvVar3 + 0x18);
        pvVar3 = (void *)((long)pvVar3 + 0x20);
        *(undefined8 *)((long)pvVar6 + 0x18) = *puVar4;
        pvVar6 = (void *)((long)pvVar6 + 0x20);
      } while (pvVar3 != pvVar1);
      pvVar3 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 << 5;
        puVar4 = (undefined8 *)((long)pvVar3 + 0x10);
        do {
          if ((*(byte *)(puVar4 + -2) & 1) != 0) {
            operator_delete((void *)*puVar4);
          }
          lVar5 = lVar5 + -0x20;
          puVar4 = puVar4 + 4;
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




void FUN_00954b10(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *pvVar3;
  byte *pbVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  
  if (param_1[1] < param_2) {
    pvVar2 = operator_new__((ulong)param_2 * 0x38);
    pvVar3 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar7 = (void *)((long)pvVar3 + (ulong)*param_1 * 0x38);
      pvVar6 = pvVar2;
      do {
        FUN_008fcdb8(pvVar6,pvVar3);
        FUN_008fcdb8((long)pvVar6 + 0x18,(long)pvVar3 + 0x18);
        puVar1 = (undefined4 *)((long)pvVar3 + 0x30);
        pvVar3 = (void *)((long)pvVar3 + 0x38);
        *(undefined4 *)((long)pvVar6 + 0x30) = *puVar1;
        pvVar6 = (void *)((long)pvVar6 + 0x38);
      } while (pvVar3 != pvVar7);
      pvVar3 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 * 0x38;
        pbVar4 = (byte *)((long)pvVar3 + 0x18);
        do {
          if ((*pbVar4 & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + 0x10));
          }
          if ((pbVar4[-0x18] & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + -8));
          }
          lVar5 = lVar5 + -0x38;
          pbVar4 = pbVar4 + 0x38;
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




void FUN_00954c08(uint *param_1,uint param_2)

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




void FUN_00954d1c(long param_1)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_40,&DAT_01e277f2);
  FUN_008fce60(param_1,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,&DAT_01e277f2);
  FUN_008fce60(param_1 + 0x18,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,&DAT_01e277f2);
  FUN_008fce60(param_1 + 0x30,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,&DAT_01e277f2);
  FUN_008fce60(param_1 + 0x48,local_40);
  *(undefined4 *)(param_1 + 0x60) = 0;
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN_00954ec0(param_1 + 0x70);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00954e24(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x108;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x20);
      do {
        if ((*(byte *)(puVar2 + 1) & 1) != 0) {
          operator_delete((void *)puVar2[3]);
        }
        if ((void *)*puVar2 != (void *)0x0) {
          operator_delete__((void *)*puVar2);
          puVar2[-1] = 0;
          *puVar2 = 0;
        }
        if ((*(byte *)(puVar2 + -4) & 1) != 0) {
          operator_delete((void *)puVar2[-2]);
        }
        lVar1 = lVar1 + -0x108;
        puVar2 = puVar2 + 0x21;
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




void FUN_00954ec0(undefined8 *param_1)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *param_1 = 0;
  FUN_008fa54c(local_40,&DAT_01e277f2);
  FUN_008fce60(param_1 + 1,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,&DAT_01e277f2);
  FUN_008fce60(param_1 + 4,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,&DAT_01e277f2);
  FUN_008fce60(param_1 + 7,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,&DAT_01e277f2);
  FUN_008fce60(param_1 + 10,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,&DAT_01e277f2);
  FUN_008fce60(param_1 + 0xd,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,&DAT_01e277f2);
  FUN_008fce60(param_1 + 0x10,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,&DAT_01e277f2);
  FUN_008fce60(param_1 + 0x13,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,&DAT_01e277f2);
  FUN_008fce60(param_1 + 0x16,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,&DAT_01e277f2);
  FUN_008fce60(param_1 + 0x19,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  *(undefined1 *)(param_1 + 0x1c) = 0;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

