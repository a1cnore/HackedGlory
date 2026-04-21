// functions/00953 — 36 functions
#include "libGameKindred.h"




undefined8 FUN_00953024(void)

{
  return 0x2f;
}




void FUN_0095302c(long param_1)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined1 *)(param_1 + 0x25) = 0;
  FUN_008fa54c(local_40,&DAT_01e277f2);
  FUN_008fce60(param_1 + 0x28,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009530a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb8c8;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_009530e8(void)

{
  return 0x30;
}




void FUN_009530f0(long param_1)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined1 *)(param_1 + 0x25) = 0;
  FUN_008fa54c(local_40,&DAT_01e277f2);
  FUN_008fce60(param_1 + 0x28,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00953164(void *param_1)

{
  FUN_00e84dd8();
  operator_delete(param_1);
  return;
}




undefined8 FUN_00953188(void)

{
  return 0x31;
}




void FUN_00953190(long param_1)

{
  *(undefined1 *)(param_1 + 0x25) = 0;
  return;
}




void FUN_00953198(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb928;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    operator_delete((void *)param_1[10]);
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_009531f0(void)

{
  return 0x32;
}




void FUN_009531f8(uint *param_1,uint *param_2)

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
  FUN_009533a0(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar4 = *(long *)(param_1 + 2);
    lVar5 = lVar3 + (ulong)*param_2 * 0x110;
    do {
      FUN_008fcdb8(lVar4,lVar3);
      FUN_008fcdb8(lVar4 + 0x18,lVar3 + 0x18);
      FUN_008fcdb8(lVar4 + 0x30,lVar3 + 0x30);
      FUN_008fcdb8(lVar4 + 0x48,lVar3 + 0x48);
      FUN_008fcdb8(lVar4 + 0x60,lVar3 + 0x60);
      FUN_008fcdb8(lVar4 + 0x78,lVar3 + 0x78);
      FUN_008fcdb8(lVar4 + 0x90,lVar3 + 0x90);
      FUN_008fcdb8(lVar4 + 0xa8,lVar3 + 0xa8);
      FUN_008fcdb8(lVar4 + 0xc0,lVar3 + 0xc0);
      FUN_009534f0(lVar4 + 0xd8,lVar3 + 0xd8);
      FUN_00953574(lVar4 + 0xe8,lVar3 + 0xe8);
      *(undefined8 *)(lVar4 + 0x108) = *(undefined8 *)(lVar3 + 0x108);
      puVar1 = (undefined8 *)(lVar3 + 0x100);
      uVar6 = *(undefined8 *)(lVar3 + 0xf8);
      lVar3 = lVar3 + 0x110;
      *(undefined8 *)(lVar4 + 0x100) = *puVar1;
      *(undefined8 *)(lVar4 + 0xf8) = uVar6;
      lVar4 = lVar4 + 0x110;
    } while (lVar3 != lVar5);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return;
}




void FUN_009532f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb958;
  FUN_00953988(param_1 + 5,1);
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00953338(void)

{
  return 0x33;
}




void FUN_00953340(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    if (*(uint *)(param_1 + 0x28) != 0) {
      lVar2 = (ulong)*(uint *)(param_1 + 0x28) * 0x110;
      do {
        FUN_009537b8(lVar1);
        lVar2 = lVar2 + -0x110;
        lVar1 = lVar1 + 0x110;
      } while (lVar2 != 0);
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  return;
}




void FUN_009533a0(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 uVar7;
  
  if (param_1[1] < param_2) {
    pvVar2 = operator_new__((ulong)param_2 * 0x110);
    pvVar3 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar6 = (void *)((long)pvVar3 + (ulong)*param_1 * 0x110);
      pvVar5 = pvVar2;
      do {
        FUN_008fcdb8(pvVar5,pvVar3);
        FUN_008fcdb8((long)pvVar5 + 0x18,(long)pvVar3 + 0x18);
        FUN_008fcdb8((long)pvVar5 + 0x30,(long)pvVar3 + 0x30);
        FUN_008fcdb8((long)pvVar5 + 0x48,(long)pvVar3 + 0x48);
        FUN_008fcdb8((long)pvVar5 + 0x60,(long)pvVar3 + 0x60);
        FUN_008fcdb8((long)pvVar5 + 0x78,(long)pvVar3 + 0x78);
        FUN_008fcdb8((long)pvVar5 + 0x90,(long)pvVar3 + 0x90);
        FUN_008fcdb8((long)pvVar5 + 0xa8,(long)pvVar3 + 0xa8);
        FUN_008fcdb8((long)pvVar5 + 0xc0,(long)pvVar3 + 0xc0);
        FUN_009534f0((long)pvVar5 + 0xd8,(long)pvVar3 + 0xd8);
        FUN_00953574((long)pvVar5 + 0xe8,(long)pvVar3 + 0xe8);
        *(undefined8 *)((long)pvVar5 + 0x108) = *(undefined8 *)((long)pvVar3 + 0x108);
        puVar1 = (undefined8 *)((long)pvVar3 + 0x100);
        uVar7 = *(undefined8 *)((long)pvVar3 + 0xf8);
        pvVar3 = (void *)((long)pvVar3 + 0x110);
        *(undefined8 *)((long)pvVar5 + 0x100) = *puVar1;
        *(undefined8 *)((long)pvVar5 + 0xf8) = uVar7;
        pvVar5 = (void *)((long)pvVar5 + 0x110);
      } while (pvVar3 != pvVar6);
      pvVar3 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0x110;
        do {
          FUN_009537b8(pvVar3);
          lVar4 = lVar4 + -0x110;
          pvVar3 = (void *)((long)pvVar3 + 0x110);
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




void FUN_009534f0(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_009535f0(param_1,*param_2);
  uVar1 = 0;
  if (*param_2 != 0) {
    lVar2 = *(long *)(param_2 + 2);
    lVar3 = *(long *)(param_1 + 2);
    lVar4 = lVar2 + (ulong)*param_2 * 0x30;
    do {
      FUN_008fcdb8(lVar3,lVar2);
      FUN_008fcdb8(lVar3 + 0x18,lVar2 + 0x18);
      lVar2 = lVar2 + 0x30;
      lVar3 = lVar3 + 0x30;
    } while (lVar2 != lVar4);
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
  return;
}




void FUN_00953574(uint *param_1,uint *param_2)

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
  FUN_009536e0(param_1,*param_2);
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




void FUN_009535f0(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  byte *pbVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x30);
    pvVar2 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar6 = (void *)((long)pvVar2 + (ulong)*param_1 * 0x30);
      pvVar5 = pvVar1;
      do {
        FUN_008fcdb8(pvVar5,pvVar2);
        FUN_008fcdb8((long)pvVar5 + 0x18,(long)pvVar2 + 0x18);
        pvVar2 = (void *)((long)pvVar2 + 0x30);
        pvVar5 = (void *)((long)pvVar5 + 0x30);
      } while (pvVar2 != pvVar6);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0x30;
        pbVar3 = (byte *)((long)pvVar2 + 0x18);
        do {
          if ((*pbVar3 & 1) != 0) {
            operator_delete(*(void **)(pbVar3 + 0x10));
          }
          if ((pbVar3[-0x18] & 1) != 0) {
            operator_delete(*(void **)(pbVar3 + -8));
          }
          lVar4 = lVar4 + -0x30;
          pbVar3 = pbVar3 + 0x30;
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




void FUN_009536e0(uint *param_1,uint param_2)

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




void FUN_009537b8(byte *param_1)

{
  FUN_00953884(param_1 + 0xe8,1);
  FUN_009538fc(param_1 + 0xd8,1);
  if ((param_1[0xc0] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xd0));
  }
  if ((param_1[0xa8] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xb8));
  }
  if ((param_1[0x90] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xa0));
  }
  if ((param_1[0x78] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x88));
  }
  if ((param_1[0x60] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x70));
  }
  if ((param_1[0x48] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x58));
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




void FUN_00953884(uint *param_1,uint param_2)

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




void FUN_009538fc(uint *param_1,uint param_2)

{
  long lVar1;
  byte *pbVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x30;
      pbVar2 = (byte *)(*(long *)(param_1 + 2) + 0x18);
      do {
        if ((*pbVar2 & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + 0x10));
        }
        if ((pbVar2[-0x18] & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + -8));
        }
        lVar1 = lVar1 + -0x30;
        pbVar2 = pbVar2 + 0x30;
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




void FUN_00953988(uint *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 2);
  if (lVar1 != 0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0x110;
      do {
        FUN_009537b8(lVar1);
        lVar2 = lVar2 + -0x110;
        lVar1 = lVar1 + 0x110;
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




void FUN_009539f8(uint *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00953b44(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar4 = *(long *)(param_1 + 2);
    lVar1 = lVar3 + (ulong)*param_2 * 0x40;
    do {
      FUN_008fcdb8(lVar4,lVar3);
      FUN_008fcdb8(lVar4 + 0x18,lVar3 + 0x18);
      FUN_00953c48(lVar4 + 0x30,lVar3 + 0x30);
      lVar3 = lVar3 + 0x40;
      lVar4 = lVar4 + 0x40;
    } while (lVar3 != lVar1);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return;
}




void FUN_00953a84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb988;
  FUN_00953ec8(param_1 + 10,1);
  if ((*(byte *)(param_1 + 7) & 1) != 0) {
    operator_delete((void *)param_1[9]);
  }
  FUN_00951cf4(param_1 + 5,1);
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00953ae0(void)

{
  return 0x34;
}




void FUN_00953ae8(long param_1)

{
  FUN_00951cf4(param_1 + 0x28,0);
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    *(undefined2 *)(param_1 + 0x38) = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  FUN_00953ec8(param_1 + 0x50,0);
  *(undefined8 *)(param_1 + 0x60) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x68) = 0;
  return;
}




void FUN_00953b44(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  
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
        FUN_008fcdb8(pvVar6,pvVar3);
        FUN_008fcdb8((long)pvVar6 + 0x18,(long)pvVar3 + 0x18);
        FUN_00953c48((long)pvVar6 + 0x30,(long)pvVar3 + 0x30);
        pvVar3 = (void *)((long)pvVar3 + 0x40);
        pvVar6 = (void *)((long)pvVar6 + 0x40);
      } while (pvVar3 != pvVar1);
      pvVar3 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 << 6;
        lVar4 = (long)pvVar3 + 0x30;
        do {
          FUN_00953e1c(lVar4,1);
          if ((*(byte *)(lVar4 + -0x18) & 1) != 0) {
            operator_delete(*(void **)(lVar4 + -8));
          }
          if ((*(byte *)(lVar4 + -0x30) & 1) != 0) {
            operator_delete(*(void **)(lVar4 + -0x20));
          }
          lVar5 = lVar5 + -0x40;
          lVar4 = lVar4 + 0x40;
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




void FUN_00953c48(uint *param_1,uint *param_2)

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
  FUN_00953cec(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar4 = *(long *)(param_1 + 2);
    lVar5 = lVar3 + (ulong)*param_2 * 0x68;
    do {
      FUN_008fcdb8(lVar4,lVar3);
      FUN_008fcdb8(lVar4 + 0x18,lVar3 + 0x18);
      FUN_008fcdb8(lVar4 + 0x30,lVar3 + 0x30);
      FUN_008fcdb8(lVar4 + 0x48,lVar3 + 0x48);
      puVar1 = (undefined8 *)(lVar3 + 0x60);
      lVar3 = lVar3 + 0x68;
      *(undefined8 *)(lVar4 + 0x60) = *puVar1;
      lVar4 = lVar4 + 0x68;
    } while (lVar3 != lVar5);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return;
}




void FUN_00953cec(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  byte *pbVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  
  if (param_1[1] < param_2) {
    pvVar2 = operator_new__((ulong)param_2 * 0x68);
    pvVar3 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar7 = (void *)((long)pvVar3 + (ulong)*param_1 * 0x68);
      pvVar6 = pvVar2;
      do {
        FUN_008fcdb8(pvVar6,pvVar3);
        FUN_008fcdb8((long)pvVar6 + 0x18,(long)pvVar3 + 0x18);
        FUN_008fcdb8((long)pvVar6 + 0x30,(long)pvVar3 + 0x30);
        FUN_008fcdb8((long)pvVar6 + 0x48,(long)pvVar3 + 0x48);
        puVar1 = (undefined8 *)((long)pvVar3 + 0x60);
        pvVar3 = (void *)((long)pvVar3 + 0x68);
        *(undefined8 *)((long)pvVar6 + 0x60) = *puVar1;
        pvVar6 = (void *)((long)pvVar6 + 0x68);
      } while (pvVar3 != pvVar7);
      pvVar3 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 * 0x68;
        pbVar4 = (byte *)((long)pvVar3 + 0x30);
        do {
          if ((pbVar4[0x18] & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + 0x28));
          }
          if ((*pbVar4 & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + 0x10));
          }
          if ((pbVar4[-0x18] & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + -8));
          }
          if ((pbVar4[-0x30] & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + -0x20));
          }
          lVar5 = lVar5 + -0x68;
          pbVar4 = pbVar4 + 0x68;
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




void FUN_00953e1c(uint *param_1,uint param_2)

{
  long lVar1;
  byte *pbVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x68;
      pbVar2 = (byte *)(*(long *)(param_1 + 2) + 0x30);
      do {
        if ((pbVar2[0x18] & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + 0x28));
        }
        if ((*pbVar2 & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + 0x10));
        }
        if ((pbVar2[-0x18] & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + -8));
        }
        if ((pbVar2[-0x30] & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + -0x20));
        }
        lVar1 = lVar1 + -0x68;
        pbVar2 = pbVar2 + 0x68;
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




void FUN_00953ec8(uint *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 << 6;
      lVar1 = *(long *)(param_1 + 2) + 0x30;
      do {
        FUN_00953e1c(lVar1,1);
        if ((*(byte *)(lVar1 + -0x18) & 1) != 0) {
          operator_delete(*(void **)(lVar1 + -8));
        }
        if ((*(byte *)(lVar1 + -0x30) & 1) != 0) {
          operator_delete(*(void **)(lVar1 + -0x20));
        }
        lVar2 = lVar2 + -0x40;
        lVar1 = lVar1 + 0x40;
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




void FUN_00953f5c(void *param_1)

{
  FUN_00e84dd8();
  operator_delete(param_1);
  return;
}




undefined8 FUN_00953f80(void)

{
  return 0x35;
}




void FUN_00953f88(long param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  return;
}




void FUN_00953f98(uint *param_1,uint *param_2)

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
  FUN_00954080(param_1,*param_2);
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

