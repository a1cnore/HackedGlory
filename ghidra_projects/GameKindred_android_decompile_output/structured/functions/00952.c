// functions/00952 — 50 functions
#include "libGameKindred.h"




void FUN_00952050(uint *param_1,uint param_2)

{
  long lVar1;
  byte *pbVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x88;
      pbVar2 = (byte *)(*(long *)(param_1 + 2) + 0x40);
      do {
        if ((pbVar2[0x30] & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + 0x40));
        }
        if ((pbVar2[0x18] & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + 0x28));
        }
        if ((*pbVar2 & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + 0x10));
        }
        if (*(void **)(pbVar2 + -0x20) != (void *)0x0) {
          operator_delete__(*(void **)(pbVar2 + -0x20));
          pbVar2[-0x28] = 0;
          pbVar2[-0x27] = 0;
          pbVar2[-0x26] = 0;
          pbVar2[-0x25] = 0;
          pbVar2[-0x24] = 0;
          pbVar2[-0x23] = 0;
          pbVar2[-0x22] = 0;
          pbVar2[-0x21] = 0;
          pbVar2[-0x20] = 0;
          pbVar2[-0x1f] = 0;
          pbVar2[-0x1e] = 0;
          pbVar2[-0x1d] = 0;
          pbVar2[-0x1c] = 0;
          pbVar2[-0x1b] = 0;
          pbVar2[-0x1a] = 0;
          pbVar2[-0x19] = 0;
        }
        if ((pbVar2[-0x40] & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + -0x30));
        }
        lVar1 = lVar1 + -0x88;
        pbVar2 = pbVar2 + 0x88;
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




void FUN_0095210c(void *param_1)

{
  FUN_0094a030();
  operator_delete(param_1);
  return;
}




undefined8 FUN_00952130(void)

{
  return 0xb;
}




void FUN_00952138(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_027bb598;
  if ((*(byte *)(param_1 + 0x86) & 1) != 0) {
    operator_delete((void *)param_1[0x88]);
  }
  lVar1 = 0;
  do {
    if ((*(byte *)((long)param_1 + lVar1 + 0x408) & 1) != 0) {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x418));
    }
    if ((*(byte *)((long)param_1 + lVar1 + 0x3f0) & 1) != 0) {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x400));
    }
    lVar1 = lVar1 + -0x40;
  } while (lVar1 != -0x400);
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_009521c0(void)

{
  return 0x37;
}




void FUN_009521c8(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_027bb5c8;
  if ((*(byte *)(param_1 + 0x86) & 1) != 0) {
    operator_delete((void *)param_1[0x88]);
  }
  lVar1 = 0;
  do {
    if ((*(byte *)((long)param_1 + lVar1 + 0x408) & 1) != 0) {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x418));
    }
    if ((*(byte *)((long)param_1 + lVar1 + 0x3f0) & 1) != 0) {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x400));
    }
    lVar1 = lVar1 + -0x40;
  } while (lVar1 != -0x400);
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00952250(void)

{
  return 0x38;
}




void FUN_00952258(void *param_1)

{
  FUN_0094a804();
  operator_delete(param_1);
  return;
}




undefined8 FUN_0095227c(void)

{
  return 0x46;
}




void FUN_00952284(void *param_1)

{
  FUN_0094aa5c();
  operator_delete(param_1);
  return;
}




undefined8 FUN_009522a8(void)

{
  return 0x47;
}




void FUN_009522b0(void *param_1)

{
  FUN_0094b310();
  operator_delete(param_1);
  return;
}




undefined8 FUN_009522d4(void)

{
  return 0x4a;
}




void FUN_009522dc(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00952398(param_1,*param_2);
  uVar1 = 0;
  if (*param_2 != 0) {
    lVar2 = *(long *)(param_2 + 2);
    lVar3 = *(long *)(param_1 + 2);
    lVar4 = (ulong)*param_2 << 7;
    do {
      FUN_00952474(lVar3,lVar2);
      lVar2 = lVar2 + 0x80;
      lVar4 = lVar4 + -0x80;
      lVar3 = lVar3 + 0x80;
    } while (lVar4 != 0);
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
  return;
}




void FUN_00952350(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb688;
  FUN_009528b8(param_1 + 5,1);
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00952390(void)

{
  return 0x15;
}




void FUN_00952398(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 << 7);
    pvVar2 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar5 = (ulong)*param_1 << 7;
      pvVar4 = pvVar1;
      do {
        FUN_00952474(pvVar4,pvVar2);
        pvVar2 = (void *)((long)pvVar2 + 0x80);
        lVar5 = lVar5 + -0x80;
        pvVar4 = (void *)((long)pvVar4 + 0x80);
      } while (lVar5 != 0);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar3 = (ulong)*param_1 << 7;
        lVar5 = (long)pvVar2 + 0x68;
        do {
          FUN_00941408(lVar5,*(undefined8 *)(lVar5 + 8));
          FUN_009488b0(lVar5 + -0x68);
          FUN_009488e8(lVar5 + -0x40);
          lVar3 = lVar3 + -0x80;
          lVar5 = lVar5 + 0x80;
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




void FUN_00952474(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[9] = 0;
  param_1[10] = 0x400;
  param_1[0xc] = 0;
  puVar1 = operator_new(0x28);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[1] = 0x10000;
  puVar1[2] = 0;
  *puVar1 = 0;
  param_1[3] = puVar1;
  param_1[4] = puVar1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = param_1 + 0xe;
  if (param_1 != param_2) {
    FUN_00952514(param_1 + 0xd,param_2[0xd],param_2 + 0xe);
    puVar1 = (undefined8 *)param_1[3];
  }
  FUN_00916394(param_1,param_2,puVar1);
  return;
}




void FUN_00952514(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_1[2] != 0) {
    lVar5 = *param_1;
    plVar6 = param_1 + 1;
    *param_1 = (long)plVar6;
    *(undefined8 *)(*plVar6 + 0x10) = 0;
    param_1[2] = 0;
    *plVar6 = 0;
    lVar7 = *(long *)(lVar5 + 8);
    if (lVar7 != 0) {
      lVar5 = lVar7;
    }
joined_r0x00952578:
    lVar7 = lVar5;
    if (lVar5 != 0) {
      do {
        if (param_2 == param_3) {
          lVar5 = *(long *)(lVar7 + 0x10);
          while (lVar2 = lVar5, lVar2 != 0) {
            lVar7 = lVar2;
            lVar5 = *(long *)(lVar2 + 0x10);
          }
          FUN_00941408(param_1,lVar7);
          goto LAB_0095268c;
        }
        FUN_008fce60(lVar7 + 0x20,param_2 + 4);
        FUN_008fce60(lVar7 + 0x38,param_2 + 7);
        lVar5 = FUN_009526e0(lVar7);
        uVar4 = FUN_0095273c(param_1,&local_60,lVar7 + 0x20);
        FUN_00941654(param_1,local_60,uVar4,lVar7);
        plVar6 = (long *)param_2[1];
        if ((long *)param_2[1] == (long *)0x0) {
          plVar6 = param_2 + 2;
          bVar3 = *(long **)*plVar6 == param_2;
          param_2 = (long *)*plVar6;
          if (bVar3) goto joined_r0x00952578;
          do {
            lVar7 = *plVar6;
            plVar6 = (long *)(lVar7 + 0x10);
            param_2 = (long *)*plVar6;
          } while (*param_2 != lVar7);
        }
        else {
          do {
            param_2 = plVar6;
            plVar6 = (long *)*param_2;
          } while ((long *)*param_2 != (long *)0x0);
        }
        lVar7 = lVar5;
        if (lVar5 == 0) break;
      } while( true );
    }
  }
  while (param_2 != param_3) {
    FUN_00952810(param_1,param_2 + 4);
    plVar6 = (long *)param_2[1];
    if ((long *)param_2[1] == (long *)0x0) {
      plVar6 = param_2 + 2;
      bVar3 = *(long **)*plVar6 != param_2;
      param_2 = (long *)*plVar6;
      if (bVar3) {
        do {
          lVar5 = *plVar6;
          plVar6 = (long *)(lVar5 + 0x10);
          param_2 = (long *)*plVar6;
        } while (*param_2 != lVar5);
      }
    }
    else {
      do {
        param_2 = plVar6;
        plVar6 = (long *)*param_2;
      } while ((long *)*param_2 != (long *)0x0);
    }
  }
LAB_0095268c:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009526e0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)param_1[2];
  if (plVar1 != (long *)0x0) {
    plVar2 = (long *)*plVar1;
    if (plVar2 == param_1) {
      plVar2 = (long *)plVar1[1];
      *plVar1 = 0;
      while (plVar2 != (long *)0x0) {
        do {
          plVar1 = plVar2;
          plVar2 = (long *)*plVar1;
        } while (plVar2 != (long *)0x0);
        plVar2 = (long *)plVar1[1];
      }
    }
    else {
      plVar1[1] = 0;
      while (plVar2 != (long *)0x0) {
        do {
          plVar1 = plVar2;
          plVar2 = (long *)*plVar1;
        } while (plVar2 != (long *)0x0);
        plVar2 = (long *)plVar1[1];
      }
    }
  }
  return;
}




long * FUN_0095273c(long param_1,long *param_2,byte *param_3)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  byte *__s1;
  byte bVar3;
  int iVar4;
  long *plVar5;
  void *__s2;
  long *plVar6;
  
  plVar5 = (long *)(param_1 + 8);
  plVar6 = (long *)*plVar5;
  if (plVar6 == (long *)0x0) {
    *param_2 = (long)plVar5;
  }
  else {
    uVar2 = *(ulong *)(param_3 + 8);
    __s1 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      __s1 = param_3 + 1;
      uVar2 = (ulong)(*param_3 >> 1);
    }
    do {
      while( true ) {
        plVar5 = plVar6;
        bVar3 = *(byte *)(plVar5 + 4);
        uVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          uVar1 = plVar5[5];
        }
        __n = uVar1;
        if (uVar2 <= uVar1) {
          __n = uVar2;
        }
        if (__n == 0) break;
        __s2 = (void *)plVar5[6];
        if ((bVar3 & 1) == 0) {
          __s2 = (void *)((long)plVar5 + 0x21);
        }
        iVar4 = memcmp(__s1,__s2,__n);
        if (iVar4 == 0) break;
        if (iVar4 < 0) goto LAB_009527d0;
LAB_009527bc:
        plVar6 = (long *)plVar5[1];
        if ((long *)plVar5[1] == (long *)0x0) {
          *param_2 = (long)plVar5;
          return plVar5 + 1;
        }
      }
      if (uVar1 <= uVar2) goto LAB_009527bc;
LAB_009527d0:
      plVar6 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
    *param_2 = (long)plVar5;
  }
  return plVar5;
}




void * FUN_00952810(undefined8 param_1,long param_2)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0x50);
  FUN_008fcdb8((long)pvVar2 + 0x20,param_2);
  FUN_008fcdb8((long)pvVar2 + 0x38,param_2 + 0x18);
  uVar3 = FUN_0095273c(param_1,&local_50,(long)pvVar2 + 0x20);
  FUN_00941654(param_1,local_50,uVar3,pvVar2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009528b8(uint *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 << 7;
      lVar1 = *(long *)(param_1 + 2) + 0x68;
      do {
        FUN_00941408(lVar1,*(undefined8 *)(lVar1 + 8));
        FUN_009488b0(lVar1 + -0x68);
        FUN_009488e8(lVar1 + -0x40);
        lVar2 = lVar2 + -0x80;
        lVar1 = lVar1 + 0x80;
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




void FUN_0095293c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb6b8;
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    operator_delete((void *)param_1[0xe]);
  }
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




undefined8 FUN_009529a4(void)

{
  return 0x16;
}




void FUN_009529ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb6e8;
  if ((*(byte *)(param_1 + 0xf) & 1) != 0) {
    operator_delete((void *)param_1[0x11]);
  }
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    operator_delete((void *)param_1[0xe]);
  }
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




undefined8 FUN_00952a24(void)

{
  return 0x1a;
}




void FUN_00952a2c(uint *param_1,uint *param_2)

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
  FUN_00952b0c(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar4 = *(long *)(param_1 + 2);
    lVar5 = lVar3 + (ulong)*param_2 * 0x30;
    do {
      FUN_008fcdb8(lVar4,lVar3);
      *(undefined2 *)(lVar4 + 0x28) = *(undefined2 *)(lVar3 + 0x28);
      puVar1 = (undefined8 *)(lVar3 + 0x20);
      uVar6 = *(undefined8 *)(lVar3 + 0x18);
      lVar3 = lVar3 + 0x30;
      *(undefined8 *)(lVar4 + 0x20) = *puVar1;
      *(undefined8 *)(lVar4 + 0x18) = uVar6;
      lVar4 = lVar4 + 0x30;
    } while (lVar3 != lVar5);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return;
}




void FUN_00952ab4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb718;
  FUN_00952bf0(param_1 + 9,1);
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00952b04(void)

{
  return 0x1b;
}




void FUN_00952b0c(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 uVar7;
  
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
        *(undefined2 *)((long)pvVar5 + 0x28) = *(undefined2 *)((long)pvVar2 + 0x28);
        puVar3 = (undefined8 *)((long)pvVar2 + 0x20);
        uVar7 = *(undefined8 *)((long)pvVar2 + 0x18);
        pvVar2 = (void *)((long)pvVar2 + 0x30);
        *(undefined8 *)((long)pvVar5 + 0x20) = *puVar3;
        *(undefined8 *)((long)pvVar5 + 0x18) = uVar7;
        pvVar5 = (void *)((long)pvVar5 + 0x30);
      } while (pvVar2 != pvVar6);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0x30;
        puVar3 = (undefined8 *)((long)pvVar2 + 0x10);
        do {
          if ((*(byte *)(puVar3 + -2) & 1) != 0) {
            operator_delete((void *)*puVar3);
          }
          lVar4 = lVar4 + -0x30;
          puVar3 = puVar3 + 6;
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




void FUN_00952bf0(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x30;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x10);
      do {
        if ((*(byte *)(puVar2 + -2) & 1) != 0) {
          operator_delete((void *)*puVar2);
        }
        lVar1 = lVar1 + -0x30;
        puVar2 = puVar2 + 6;
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




void FUN_00952c6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb748;
  FUN_00951534(param_1 + 9,1);
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00952cbc(void)

{
  return 0x21;
}




void FUN_00952cc4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb778;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    operator_delete((void *)param_1[10]);
  }
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00952d0c(void)

{
  return 0x22;
}




void FUN_00952d14(void *param_1)

{
  FUN_00e84dd8();
  operator_delete(param_1);
  return;
}




undefined8 FUN_00952d38(void)

{
  return 0x23;
}




void FUN_00952d40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb7d8;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00952d88(void)

{
  return 0x2b;
}




void FUN_00952d90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb808;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00952dd8(void)

{
  return 0x2c;
}




void FUN_00952de0(long param_1)

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




void FUN_00952e54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb838;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00952e9c(void)

{
  return 0x2d;
}




void FUN_00952ea4(long param_1)

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




void FUN_00952f18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb868;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00952f60(void)

{
  return 0x2e;
}




void FUN_00952f68(long param_1)

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




void FUN_00952fdc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb898;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}

