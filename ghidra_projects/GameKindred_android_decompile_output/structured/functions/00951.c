// functions/00951 — 28 functions
#include "libGameKindred.h"




void FUN_0095100c(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 uVar7;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x90);
    pvVar2 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar6 = (void *)((long)pvVar2 + (ulong)*param_1 * 0x90);
      pvVar5 = pvVar1;
      do {
        FUN_008fcdb8(pvVar5,pvVar2);
        FUN_008fcdb8((long)pvVar5 + 0x18,(long)pvVar2 + 0x18);
        FUN_008fcdb8((long)pvVar5 + 0x30,(long)pvVar2 + 0x30);
        FUN_008fcdb8((long)pvVar5 + 0x48,(long)pvVar2 + 0x48);
        FUN_008fcdb8((long)pvVar5 + 0x60,(long)pvVar2 + 0x60);
        *(undefined4 *)((long)pvVar5 + 0x88) = *(undefined4 *)((long)pvVar2 + 0x88);
        puVar3 = (undefined8 *)((long)pvVar2 + 0x80);
        uVar7 = *(undefined8 *)((long)pvVar2 + 0x78);
        pvVar2 = (void *)((long)pvVar2 + 0x90);
        *(undefined8 *)((long)pvVar5 + 0x80) = *puVar3;
        *(undefined8 *)((long)pvVar5 + 0x78) = uVar7;
        pvVar5 = (void *)((long)pvVar5 + 0x90);
      } while (pvVar2 != pvVar6);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0x90;
        puVar3 = (undefined8 *)((long)pvVar2 + 0x40);
        do {
          if ((*(byte *)(puVar3 + 4) & 1) != 0) {
            operator_delete((void *)puVar3[6]);
          }
          if ((*(byte *)(puVar3 + 1) & 1) != 0) {
            operator_delete((void *)puVar3[3]);
          }
          if ((*(byte *)(puVar3 + -2) & 1) != 0) {
            operator_delete((void *)*puVar3);
          }
          if ((*(byte *)(puVar3 + -5) & 1) != 0) {
            operator_delete((void *)puVar3[-3]);
          }
          if ((*(byte *)(puVar3 + -8) & 1) != 0) {
            operator_delete((void *)puVar3[-6]);
          }
          lVar4 = lVar4 + -0x90;
          puVar3 = puVar3 + 0x12;
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




void FUN_00951160(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_009511d8(param_1,*param_2);
  uVar1 = 0;
  if (*param_2 != 0) {
    lVar2 = *(long *)(param_2 + 2);
    lVar3 = *(long *)(param_1 + 2);
    lVar4 = (ulong)*param_2 * 0x18;
    do {
      FUN_008fcdb8(lVar3,lVar2);
      lVar2 = lVar2 + 0x18;
      lVar4 = lVar4 + -0x18;
      lVar3 = lVar3 + 0x18;
    } while (lVar4 != 0);
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
  return;
}




void FUN_009511d8(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long lVar5;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x18);
    pvVar2 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar5 = (ulong)*param_1 * 0x18;
      pvVar4 = pvVar1;
      do {
        FUN_008fcdb8(pvVar4,pvVar2);
        pvVar2 = (void *)((long)pvVar2 + 0x18);
        lVar5 = lVar5 + -0x18;
        pvVar4 = (void *)((long)pvVar4 + 0x18);
      } while (lVar5 != 0);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 * 0x18;
        puVar3 = (undefined8 *)((long)pvVar2 + 0x10);
        do {
          if ((*(byte *)(puVar3 + -2) & 1) != 0) {
            operator_delete((void *)*puVar3);
          }
          lVar5 = lVar5 + -0x18;
          puVar3 = puVar3 + 3;
        } while (lVar5 != 0);
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




void FUN_009512b0(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x38;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x10);
      do {
        if ((*(byte *)(puVar2 + -2) & 1) != 0) {
          operator_delete((void *)*puVar2);
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




void FUN_0095132c(uint *param_1,uint param_2)

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




void FUN_009513b8(long param_1)

{
  FUN_00e70960();
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    *(undefined2 *)(param_1 + 0x10) = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  FUN_00e70960(param_1 + 0x28);
  FUN_00e70960(param_1 + 0x38);
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    *(undefined2 *)(param_1 + 0x48) = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  FUN_00e70960(param_1 + 0x60);
  FUN_00e70960(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  memset((void *)(param_1 + 0x88),0,0x58);
  *(undefined2 *)(param_1 + 0xfc) = 0;
  *(undefined1 *)(param_1 + 0xfe) = 0;
  *(undefined2 *)(param_1 + 0x100) = 0;
  *(undefined1 *)(param_1 + 0x102) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0xffffffff;
  *(undefined8 *)(param_1 + 0xe0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xe8) = 0xffffffffffffffff;
  FUN_00951534(param_1 + 0x108,0);
  FUN_00951534(param_1 + 0x118,0);
  return;
}




void FUN_00951478(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x90;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x40);
      do {
        if ((*(byte *)(puVar2 + 4) & 1) != 0) {
          operator_delete((void *)puVar2[6]);
        }
        if ((*(byte *)(puVar2 + 1) & 1) != 0) {
          operator_delete((void *)puVar2[3]);
        }
        if ((*(byte *)(puVar2 + -2) & 1) != 0) {
          operator_delete((void *)*puVar2);
        }
        if ((*(byte *)(puVar2 + -5) & 1) != 0) {
          operator_delete((void *)puVar2[-3]);
        }
        if ((*(byte *)(puVar2 + -8) & 1) != 0) {
          operator_delete((void *)puVar2[-6]);
        }
        lVar1 = lVar1 + -0x90;
        puVar2 = puVar2 + 0x12;
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




void FUN_00951534(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x18;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x10);
      do {
        if ((*(byte *)(puVar2 + -2) & 1) != 0) {
          operator_delete((void *)*puVar2);
        }
        lVar1 = lVar1 + -0x18;
        puVar2 = puVar2 + 3;
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




void FUN_009515b0(undefined8 *param_1)

{
  FUN_00951534(param_1 + 0x23,1);
  FUN_00951534(param_1 + 0x21,1);
  if ((void *)param_1[0xf] != (void *)0x0) {
    operator_delete__((void *)param_1[0xf]);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  if ((void *)param_1[0xd] != (void *)0x0) {
    operator_delete__((void *)param_1[0xd]);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    operator_delete((void *)param_1[0xb]);
  }
  if ((void *)param_1[8] != (void *)0x0) {
    operator_delete__((void *)param_1[8]);
    param_1[7] = 0;
    param_1[8] = 0;
  }
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}




void FUN_00951654(uint *param_1,uint *param_2)

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
  FUN_00951788(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar4 = *(long *)(param_1 + 2);
    lVar5 = lVar3 + (ulong)*param_2 * 0x160;
    do {
      FUN_008fcdb8(lVar4,lVar3);
      *(undefined1 *)(lVar4 + 0x18) = *(undefined1 *)(lVar3 + 0x18);
      FUN_008fcdb8(lVar4 + 0x20,lVar3 + 0x20);
      *(undefined4 *)(lVar4 + 0x38) = *(undefined4 *)(lVar3 + 0x38);
      FUN_008fcdb8(lVar4 + 0x40,lVar3 + 0x40);
      memcpy((void *)(lVar4 + 0x58),(void *)(lVar3 + 0x58),0xb0);
      FUN_00951160(lVar4 + 0x108,lVar3 + 0x108);
      thunk_FUN_00e7051c(lVar4 + 0x118,lVar3 + 0x118);
      *(undefined8 *)(lVar4 + 0x128) = *(undefined8 *)(lVar3 + 0x128);
      FUN_00951160(lVar4 + 0x130,lVar3 + 0x130);
      uVar6 = *(undefined8 *)(lVar3 + 0x150);
      *(undefined8 *)(lVar4 + 0x158) = *(undefined8 *)(lVar3 + 0x158);
      *(undefined8 *)(lVar4 + 0x150) = uVar6;
      puVar1 = (undefined8 *)(lVar3 + 0x148);
      uVar6 = *(undefined8 *)(lVar3 + 0x140);
      lVar3 = lVar3 + 0x160;
      *(undefined8 *)(lVar4 + 0x148) = *puVar1;
      *(undefined8 *)(lVar4 + 0x140) = uVar6;
      lVar4 = lVar4 + 0x160;
    } while (lVar3 != lVar5);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return;
}




void FUN_00951740(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb478;
  FUN_00951928(param_1 + 6,1);
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00951780(void)

{
  return 9;
}




void FUN_00951788(uint *param_1,uint param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  void *pvVar7;
  undefined8 uVar8;
  
  if (param_1[1] < param_2) {
    pvVar3 = operator_new__((ulong)param_2 * 0x160);
    pvVar5 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar7 = (void *)((long)pvVar5 + (ulong)*param_1 * 0x160);
      pvVar4 = pvVar3;
      do {
        FUN_008fcdb8(pvVar4,pvVar5);
        *(undefined1 *)((long)pvVar4 + 0x18) = *(undefined1 *)((long)pvVar5 + 0x18);
        FUN_008fcdb8((long)pvVar4 + 0x20,(long)pvVar5 + 0x20);
        *(undefined4 *)((long)pvVar4 + 0x38) = *(undefined4 *)((long)pvVar5 + 0x38);
        FUN_008fcdb8((long)pvVar4 + 0x40,(long)pvVar5 + 0x40);
        memcpy((void *)((long)pvVar4 + 0x58),(void *)((long)pvVar5 + 0x58),0xb0);
        FUN_00951160((long)pvVar4 + 0x108,(long)pvVar5 + 0x108);
        thunk_FUN_00e7051c((long)pvVar4 + 0x118,(long)pvVar5 + 0x118);
        *(undefined8 *)((long)pvVar4 + 0x128) = *(undefined8 *)((long)pvVar5 + 0x128);
        FUN_00951160((long)pvVar4 + 0x130,(long)pvVar5 + 0x130);
        uVar8 = *(undefined8 *)((long)pvVar5 + 0x150);
        *(undefined8 *)((long)pvVar4 + 0x158) = *(undefined8 *)((long)pvVar5 + 0x158);
        *(undefined8 *)((long)pvVar4 + 0x150) = uVar8;
        puVar2 = (undefined8 *)((long)pvVar5 + 0x148);
        uVar8 = *(undefined8 *)((long)pvVar5 + 0x140);
        pvVar5 = (void *)((long)pvVar5 + 0x160);
        *(undefined8 *)((long)pvVar4 + 0x148) = *puVar2;
        *(undefined8 *)((long)pvVar4 + 0x140) = uVar8;
        pvVar4 = (void *)((long)pvVar4 + 0x160);
      } while (pvVar5 != pvVar7);
      uVar1 = *param_1;
      pvVar5 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (uVar1 != 0) {
        lVar6 = 0;
        do {
          FUN_00951534((long)pvVar5 + lVar6 + 0x130,1);
          pvVar4 = *(void **)((long)pvVar5 + lVar6 + 0x120);
          if (pvVar4 != (void *)0x0) {
            operator_delete__(pvVar4);
            *(undefined8 *)((long)pvVar5 + lVar6 + 0x118) = 0;
            *(undefined8 *)((long)pvVar5 + lVar6 + 0x120) = 0;
          }
          FUN_00951534((long)pvVar5 + lVar6 + 0x108,1);
          if ((*(byte *)((long)pvVar5 + lVar6 + 0x40) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar5 + lVar6 + 0x50));
          }
          if ((*(byte *)((long)pvVar5 + lVar6 + 0x20) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar5 + lVar6 + 0x30));
          }
          if ((*(byte *)((long)pvVar5 + lVar6) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar5 + lVar6 + 0x10));
          }
          lVar6 = lVar6 + 0x160;
        } while ((ulong)uVar1 * 0x160 - lVar6 != 0);
        pvVar5 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar5 != (void *)0x0) {
      operator_delete__(pvVar5);
    }
    *(void **)(param_1 + 2) = pvVar3;
  }
  return;
}




void FUN_00951928(uint *param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 2);
  if (lVar3 != 0) {
    uVar2 = *param_1;
    if (uVar2 != 0) {
      lVar4 = 0;
      do {
        lVar1 = lVar3 + lVar4;
        FUN_00951534(lVar1 + 0x130,1);
        if (*(void **)(lVar1 + 0x120) != (void *)0x0) {
          operator_delete__(*(void **)(lVar1 + 0x120));
          *(undefined8 *)(lVar1 + 0x118) = 0;
          *(undefined8 *)(lVar1 + 0x120) = 0;
        }
        FUN_00951534(lVar1 + 0x108,1);
        if ((*(byte *)(lVar1 + 0x40) & 1) != 0) {
          operator_delete(*(void **)(lVar3 + lVar4 + 0x50));
        }
        if ((*(byte *)(lVar3 + lVar4 + 0x20) & 1) != 0) {
          operator_delete(*(void **)(lVar3 + lVar4 + 0x30));
        }
        if ((*(byte *)(lVar3 + lVar4) & 1) != 0) {
          operator_delete(*(void **)(lVar3 + lVar4 + 0x10));
        }
        lVar4 = lVar4 + 0x160;
      } while ((ulong)uVar2 * 0x160 - lVar4 != 0);
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




void FUN_00951a04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb4a8;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00951a4c(void)

{
  return 3;
}




void FUN_00951a54(long param_1)

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




void FUN_00951ac8(uint *param_1,uint *param_2)

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
  FUN_00951bbc(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar4 = *(long *)(param_1 + 2);
    lVar5 = lVar3 + (ulong)*param_2 * 0x78;
    do {
      FUN_008fcdb8(lVar4,lVar3);
      FUN_008fcdb8(lVar4 + 0x18,lVar3 + 0x18);
      FUN_008fcdb8(lVar4 + 0x30,lVar3 + 0x30);
      FUN_008fcdb8(lVar4 + 0x48,lVar3 + 0x48);
      *(undefined1 *)(lVar4 + 0x70) = *(undefined1 *)(lVar3 + 0x70);
      puVar1 = (undefined8 *)(lVar3 + 0x68);
      uVar6 = *(undefined8 *)(lVar3 + 0x60);
      lVar3 = lVar3 + 0x78;
      *(undefined8 *)(lVar4 + 0x68) = *puVar1;
      *(undefined8 *)(lVar4 + 0x60) = uVar6;
      lVar4 = lVar4 + 0x78;
    } while (lVar3 != lVar5);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return;
}




void FUN_00951b74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb4d8;
  FUN_00951cf4(param_1 + 5,1);
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00951bb4(void)

{
  return 0x36;
}




void FUN_00951bbc(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  byte *pbVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  undefined8 uVar8;
  
  if (param_1[1] < param_2) {
    pvVar2 = operator_new__((ulong)param_2 * 0x78);
    pvVar3 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar7 = (void *)((long)pvVar3 + (ulong)*param_1 * 0x78);
      pvVar6 = pvVar2;
      do {
        FUN_008fcdb8(pvVar6,pvVar3);
        FUN_008fcdb8((long)pvVar6 + 0x18,(long)pvVar3 + 0x18);
        FUN_008fcdb8((long)pvVar6 + 0x30,(long)pvVar3 + 0x30);
        FUN_008fcdb8((long)pvVar6 + 0x48,(long)pvVar3 + 0x48);
        *(undefined1 *)((long)pvVar6 + 0x70) = *(undefined1 *)((long)pvVar3 + 0x70);
        puVar1 = (undefined8 *)((long)pvVar3 + 0x68);
        uVar8 = *(undefined8 *)((long)pvVar3 + 0x60);
        pvVar3 = (void *)((long)pvVar3 + 0x78);
        *(undefined8 *)((long)pvVar6 + 0x68) = *puVar1;
        *(undefined8 *)((long)pvVar6 + 0x60) = uVar8;
        pvVar6 = (void *)((long)pvVar6 + 0x78);
      } while (pvVar3 != pvVar7);
      pvVar3 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 * 0x78;
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
          lVar5 = lVar5 + -0x78;
          pbVar4 = pbVar4 + 0x78;
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




void FUN_00951cf4(uint *param_1,uint param_2)

{
  long lVar1;
  byte *pbVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x78;
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
        lVar1 = lVar1 + -0x78;
        pbVar2 = pbVar2 + 0x78;
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




void FUN_00951da0(void *param_1)

{
  FUN_00e84dd8();
  operator_delete(param_1);
  return;
}




undefined8 FUN_00951dc4(void)

{
  return 2;
}




void FUN_00951dcc(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00951efc(param_1,*param_2);
  uVar1 = 0;
  if (*param_2 != 0) {
    lVar2 = *(long *)(param_2 + 2);
    lVar3 = *(long *)(param_1 + 2);
    lVar4 = lVar2 + (ulong)*param_2 * 0x88;
    do {
      FUN_008fcdb8(lVar3,lVar2);
      thunk_FUN_00e7051c(lVar3 + 0x18,lVar2 + 0x18);
      *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)(lVar2 + 0x38);
      uVar5 = *(undefined8 *)(lVar2 + 0x28);
      *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(lVar2 + 0x30);
      *(undefined8 *)(lVar3 + 0x28) = uVar5;
      FUN_008fcdb8(lVar3 + 0x40,lVar2 + 0x40);
      FUN_008fcdb8(lVar3 + 0x58,lVar2 + 0x58);
      FUN_008fcdb8(lVar3 + 0x70,lVar2 + 0x70);
      lVar2 = lVar2 + 0x88;
      lVar3 = lVar3 + 0x88;
    } while (lVar2 != lVar4);
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
  return;
}




void FUN_00951e84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb538;
  FUN_00952050(param_1 + 0xe,1);
  if ((*(byte *)(param_1 + 0xb) & 1) != 0) {
    operator_delete((void *)param_1[0xd]);
  }
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




undefined8 FUN_00951ef4(void)

{
  return 0xd;
}




void FUN_00951efc(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  byte *pbVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 uVar7;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x88);
    pvVar2 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar6 = (void *)((long)pvVar2 + (ulong)*param_1 * 0x88);
      pvVar5 = pvVar1;
      do {
        FUN_008fcdb8(pvVar5,pvVar2);
        thunk_FUN_00e7051c((long)pvVar5 + 0x18,(long)pvVar2 + 0x18);
        *(undefined8 *)((long)pvVar5 + 0x38) = *(undefined8 *)((long)pvVar2 + 0x38);
        uVar7 = *(undefined8 *)((long)pvVar2 + 0x28);
        *(undefined8 *)((long)pvVar5 + 0x30) = *(undefined8 *)((long)pvVar2 + 0x30);
        *(undefined8 *)((long)pvVar5 + 0x28) = uVar7;
        FUN_008fcdb8((long)pvVar5 + 0x40,(long)pvVar2 + 0x40);
        FUN_008fcdb8((long)pvVar5 + 0x58,(long)pvVar2 + 0x58);
        FUN_008fcdb8((long)pvVar5 + 0x70,(long)pvVar2 + 0x70);
        pvVar2 = (void *)((long)pvVar2 + 0x88);
        pvVar5 = (void *)((long)pvVar5 + 0x88);
      } while (pvVar2 != pvVar6);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0x88;
        pbVar3 = (byte *)((long)pvVar2 + 0x40);
        do {
          if ((pbVar3[0x30] & 1) != 0) {
            operator_delete(*(void **)(pbVar3 + 0x40));
          }
          if ((pbVar3[0x18] & 1) != 0) {
            operator_delete(*(void **)(pbVar3 + 0x28));
          }
          if ((*pbVar3 & 1) != 0) {
            operator_delete(*(void **)(pbVar3 + 0x10));
          }
          if (*(void **)(pbVar3 + -0x20) != (void *)0x0) {
            operator_delete__(*(void **)(pbVar3 + -0x20));
            pbVar3[-0x28] = 0;
            pbVar3[-0x27] = 0;
            pbVar3[-0x26] = 0;
            pbVar3[-0x25] = 0;
            pbVar3[-0x24] = 0;
            pbVar3[-0x23] = 0;
            pbVar3[-0x22] = 0;
            pbVar3[-0x21] = 0;
            pbVar3[-0x20] = 0;
            pbVar3[-0x1f] = 0;
            pbVar3[-0x1e] = 0;
            pbVar3[-0x1d] = 0;
            pbVar3[-0x1c] = 0;
            pbVar3[-0x1b] = 0;
            pbVar3[-0x1a] = 0;
            pbVar3[-0x19] = 0;
          }
          if ((pbVar3[-0x40] & 1) != 0) {
            operator_delete(*(void **)(pbVar3 + -0x30));
          }
          lVar4 = lVar4 + -0x88;
          pbVar3 = pbVar3 + 0x88;
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

